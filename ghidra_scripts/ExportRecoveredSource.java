// Export a complete function inventory and best-effort C-like pseudocode.
// @category CloudflareRecovery

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class ExportRecoveredSource extends GhidraScript {
    private static String csv(String value) {
        if (value == null) return "\"\"";
        return "\"" + value.replace("\"", "\"\"").replace("\r", " ").replace("\n", " ") + "\"";
    }
    private static String safeName(String value) {
        return value.replaceAll("[^A-Za-z0-9_.-]+", "_");
    }
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) throw new IllegalArgumentException("output directory required");
        File outDir = new File(args[0]);
        int timeout = args.length >= 2 ? Integer.parseInt(args[1]) : 5;
        int chunkSize = args.length >= 3 ? Integer.parseInt(args[2]) : 1000;
        if (!outDir.exists() && !outDir.mkdirs()) throw new IOException("Unable to create " + outDir);
        String programName = safeName(currentProgram.getName());
        BufferedWriter inventory = new BufferedWriter(new FileWriter(new File(outDir, programName + "-functions.csv")));
        inventory.write("index,address,name,namespace,size,signature,is_thunk,is_external,decompile_status\n");
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram)) throw new IOException("Decompiler could not open program");
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        BufferedWriter pseudo = null;
        int index = 0, chunks = 0, success = 0, failed = 0, external = 0;
        try {
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                String status;
                if (function.isExternal()) {
                    status = "external";
                    external++;
                } else {
                    if (pseudo == null || index % chunkSize == 0) {
                        if (pseudo != null) pseudo.close();
                        chunks++;
                        pseudo = new BufferedWriter(new FileWriter(new File(outDir,
                            String.format("%s-pseudocode-%04d.c", programName, chunks))));
                        pseudo.write("/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */\n\n");
                    }
                    DecompileResults result = decompiler.decompileFunction(function, timeout, monitor);
                    if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                        status = "ok"; success++;
                        pseudo.write("\n/* address=" + function.getEntryPoint() + " name=" + function.getName(true) + " */\n");
                        pseudo.write(result.getDecompiledFunction().getC());
                    } else {
                        status = "failed:" + result.getErrorMessage(); failed++;
                        pseudo.write("\n/* DECOMPILE FAILED address=" + function.getEntryPoint() +
                            " name=" + function.getName(true) + " error=" + result.getErrorMessage() + " */\n");
                    }
                }
                inventory.write(index + "," + csv(function.getEntryPoint().toString()) + "," + csv(function.getName()) + "," +
                    csv(function.getParentNamespace().getName(true)) + "," + function.getBody().getNumAddresses() + "," +
                    csv(function.getSignature().getPrototypeString()) + "," + function.isThunk() + "," + function.isExternal() +
                    "," + csv(status) + "\n");
                index++;
                if (index % 250 == 0) println("Exported " + index + " functions from " + currentProgram.getName());
            }
        } finally {
            if (pseudo != null) pseudo.close();
            inventory.close();
            decompiler.dispose();
        }
        BufferedWriter summary = new BufferedWriter(new FileWriter(new File(outDir, programName + "-summary.txt")));
        summary.write("program=" + currentProgram.getName() + "\nfunctions=" + index + "\ndecompiled=" + success +
            "\nfailed=" + failed + "\nexternal=" + external + "\npseudocode_chunks=" + chunks + "\n");
        summary.close();
        println("Finished " + currentProgram.getName() + ": functions=" + index + " decompiled=" + success + " failed=" + failed);
    }
}

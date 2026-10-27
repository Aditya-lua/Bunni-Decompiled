// Reduce memory use for very large optimized Rust PE files.
// @category CloudflareRecovery

import ghidra.app.script.GhidraScript;
import java.util.Map;

public class DisableMemoryHeavyAnalysis extends GhidraScript {
    @Override
    protected void run() throws Exception {
        Map<String, String> options = getCurrentAnalysisOptionsAndValues(currentProgram);
        String[] candidates = {
            "Decompiler Switch Analysis", "Decompiler Switch Analysis - One Time",
            "Decompiler Parameter ID", "Stack", "Function Start Search",
            "Function Start Search After Data"
        };
        for (String option : candidates) {
            if (options.containsKey(option)) {
                setAnalysisOption(currentProgram, option, "false");
                println("Disabled memory-heavy analyzer: " + option);
            }
        }
    }
}

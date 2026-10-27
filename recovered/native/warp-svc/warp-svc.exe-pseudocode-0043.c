/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=142d5bb20 name=KERNEL32.DLL::FlushViewOfFile */

BOOL __stdcall FlushViewOfFile(LPCVOID lpBaseAddress,SIZE_T dwNumberOfBytesToFlush)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5bb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushViewOfFile(lpBaseAddress,dwNumberOfBytesToFlush);
  return BVar1;
}


/* address=142d5bb40 name=KERNEL32.DLL::GetFileAttributesExW */

BOOL __stdcall
GetFileAttributesExW
          (LPCWSTR lpFileName,GET_FILEEX_INFO_LEVELS fInfoLevelId,LPVOID lpFileInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5bb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileAttributesExW(lpFileName,fInfoLevelId,lpFileInformation);
  return BVar1;
}


/* address=142d5bba0 name=KERNEL32.DLL::UnmapViewOfFile */

BOOL __stdcall UnmapViewOfFile(LPCVOID lpBaseAddress)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5bba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnmapViewOfFile(lpBaseAddress);
  return BVar1;
}


/* address=142d5bbc0 name=KERNEL32.DLL::UnlockFileEx */

BOOL __stdcall
UnlockFileEx(HANDLE hFile,DWORD dwReserved,DWORD nNumberOfBytesToUnlockLow,
            DWORD nNumberOfBytesToUnlockHigh,LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5bbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnlockFileEx(hFile,dwReserved,nNumberOfBytesToUnlockLow,nNumberOfBytesToUnlockHigh,
                       lpOverlapped);
  return BVar1;
}


/* address=142d5bbd0 name=KERNEL32.DLL::SetEndOfFile */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5bbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


/* address=142d5bbf0 name=KERNEL32.DLL::SetFilePointer */

DWORD __stdcall
SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}


/* address=142d5bc50 name=KERNEL32.DLL::LoadLibraryExW */

HMODULE __stdcall LoadLibraryExW(LPCWSTR lpLibFileName,HANDLE hFile,DWORD dwFlags)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5bc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryExW(lpLibFileName,hFile,dwFlags);
  return pHVar1;
}


/* address=142d5bc60 name=KERNEL32.DLL::OpenProcess */

HANDLE __stdcall OpenProcess(DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwProcessId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5bc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = OpenProcess(dwDesiredAccess,bInheritHandle,dwProcessId);
  return pvVar1;
}


/* address=142d5bc70 name=KERNEL32.DLL::QueryFullProcessImageNameW */

BOOL __stdcall
QueryFullProcessImageNameW(HANDLE hProcess,DWORD dwFlags,LPWSTR lpExeName,PDWORD lpdwSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryFullProcessImageNameW(hProcess,dwFlags,lpExeName,lpdwSize);
  return BVar1;
}


/* address=142d5bc80 name=PSAPI.DLL::GetModuleFileNameExW */

DWORD __stdcall GetModuleFileNameExW(HANDLE hProcess,HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5bc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameExW(hProcess,hModule,lpFilename,nSize);
  return DVar1;
}


/* address=142d5bc90 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_CRYPTO_library_init */

void aws_lc_fips_0_14_2_CRYPTO_library_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_CRYPTO_library_init();
  return;
}


/* address=142d5bca0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_FIPS_mode */

void aws_lc_fips_0_14_2_FIPS_mode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_FIPS_mode();
  return;
}


/* address=142d5bcb0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_CBS_init */

void aws_lc_fips_0_14_2_CBS_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_CBS_init();
  return;
}


/* address=142d5bcc0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_parse_private_key */

void aws_lc_fips_0_14_2_EVP_parse_private_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bcc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_parse_private_key();
  return;
}


/* address=142d5bcd0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_id */

void aws_lc_fips_0_14_2_EVP_PKEY_id(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_id();
  return;
}


/* address=142d5bce0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_get0_RSA */

void aws_lc_fips_0_14_2_EVP_PKEY_get0_RSA(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_get0_RSA();
  return;
}


/* address=142d5bcf0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_RSA_size */

void aws_lc_fips_0_14_2_RSA_size(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_RSA_size();
  return;
}


/* address=142d5bd00 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_bits */

void aws_lc_fips_0_14_2_EVP_PKEY_bits(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_bits();
  return;
}


/* address=142d5bd10 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_RSA_parse_private_key */

void aws_lc_fips_0_14_2_RSA_parse_private_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_RSA_parse_private_key();
  return;
}


/* address=142d5bd20 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_new */

void aws_lc_fips_0_14_2_EVP_PKEY_new(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_new();
  return;
}


/* address=142d5bd30 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_assign_RSA */

void aws_lc_fips_0_14_2_EVP_PKEY_assign_RSA(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_assign_RSA();
  return;
}


/* address=142d5bd40 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_RSA_free */

void aws_lc_fips_0_14_2_RSA_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_RSA_free();
  return;
}


/* address=142d5bd50 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_RSA_get0_n */

void aws_lc_fips_0_14_2_RSA_get0_n(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_RSA_get0_n();
  return;
}


/* address=142d5bd60 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_BN_num_bytes */

void aws_lc_fips_0_14_2_BN_num_bytes(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_BN_num_bytes();
  return;
}


/* address=142d5bd70 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_BN_bn2bin */

void aws_lc_fips_0_14_2_BN_bn2bin(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_BN_bn2bin();
  return;
}


/* address=142d5bd80 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_RSA_get0_e */

void aws_lc_fips_0_14_2_RSA_get0_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_RSA_get0_e();
  return;
}


/* address=142d5bd90 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_RSA_public_key_from_bytes */

void aws_lc_fips_0_14_2_RSA_public_key_from_bytes(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_RSA_public_key_from_bytes();
  return;
}


/* address=142d5bda0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_parse_public_key */

void aws_lc_fips_0_14_2_EVP_parse_public_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_parse_public_key();
  return;
}


/* address=142d5bdb0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_BN_bin2bn */

void aws_lc_fips_0_14_2_BN_bin2bn(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_BN_bin2bn();
  return;
}


/* address=142d5bdc0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_CTX_new */

void aws_lc_fips_0_14_2_EVP_PKEY_CTX_new(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_CTX_new();
  return;
}


/* address=142d5bdd0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_CTX_set_signature_md */

void aws_lc_fips_0_14_2_EVP_PKEY_CTX_set_signature_md(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_CTX_set_signature_md();
  return;
}


/* address=142d5bde0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_CTX_set_rsa_padding */

void aws_lc_fips_0_14_2_EVP_PKEY_CTX_set_rsa_padding(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_CTX_set_rsa_padding();
  return;
}


/* address=142d5bdf0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_CTX_set_rsa_pss_saltlen */

void aws_lc_fips_0_14_2_EVP_PKEY_CTX_set_rsa_pss_saltlen(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_CTX_set_rsa_pss_saltlen();
  return;
}


/* address=142d5be00 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_verify_init */

void aws_lc_fips_0_14_2_EVP_PKEY_verify_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5be00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_verify_init();
  return;
}


/* address=142d5be10 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_verify */

void aws_lc_fips_0_14_2_EVP_PKEY_verify(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_verify();
  return;
}


/* address=142d5be20 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_MD_CTX_init */

void aws_lc_fips_0_14_2_EVP_MD_CTX_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5be20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_MD_CTX_init();
  return;
}


/* address=142d5be30 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_MD_CTX_cleanup */

void aws_lc_fips_0_14_2_EVP_MD_CTX_cleanup(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_MD_CTX_cleanup();
  return;
}


/* address=142d5be40 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_DigestVerifyInit */

void aws_lc_fips_0_14_2_EVP_DigestVerifyInit(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5be40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_DigestVerifyInit();
  return;
}


/* address=142d5be50 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_DigestVerify */

void aws_lc_fips_0_14_2_EVP_DigestVerify(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5be50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_DigestVerify();
  return;
}


/* address=142d5be60 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_get_raw_public_key */

void aws_lc_fips_0_14_2_EVP_PKEY_get_raw_public_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5be60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_get_raw_public_key();
  return;
}


/* address=142d5be70 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_CBB_init */

void aws_lc_fips_0_14_2_CBB_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5be70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_CBB_init();
  return;
}


/* address=142d5be80 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_CBB_cleanup */

void aws_lc_fips_0_14_2_CBB_cleanup(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5be80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_CBB_cleanup();
  return;
}


/* address=142d5be90 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_pqdsa_new_raw_public_key */

void aws_lc_fips_0_14_2_EVP_PKEY_pqdsa_new_raw_public_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_pqdsa_new_raw_public_key();
  return;
}


/* address=142d5bea0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_new_raw_public_key */

void aws_lc_fips_0_14_2_EVP_PKEY_new_raw_public_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_new_raw_public_key();
  return;
}


/* address=142d5beb0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_derive_init */

void aws_lc_fips_0_14_2_EVP_PKEY_derive_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_derive_init();
  return;
}


/* address=142d5bec0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_derive_set_peer */

void aws_lc_fips_0_14_2_EVP_PKEY_derive_set_peer(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_derive_set_peer();
  return;
}


/* address=142d5bed0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_derive */

void aws_lc_fips_0_14_2_EVP_PKEY_derive(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_derive();
  return;
}


/* address=142d5bee0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_BN_free */

void aws_lc_fips_0_14_2_BN_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_BN_free();
  return;
}


/* address=142d5bef0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_up_ref */

void aws_lc_fips_0_14_2_EVP_PKEY_up_ref(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_up_ref();
  return;
}


/* address=142d5bf00 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_CBB_finish */

void aws_lc_fips_0_14_2_CBB_finish(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_CBB_finish();
  return;
}


/* address=142d5bf10 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_OPENSSL_free */

void aws_lc_fips_0_14_2_OPENSSL_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_OPENSSL_free();
  return;
}


/* address=142d5bf20 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_KEY_get0_group */

void aws_lc_fips_0_14_2_EC_KEY_get0_group(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_KEY_get0_group();
  return;
}


/* address=142d5bf30 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_GROUP_get_curve_name */

void aws_lc_fips_0_14_2_EC_GROUP_get_curve_name(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_GROUP_get_curve_name();
  return;
}


/* address=142d5bf40 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_CBB_init_fixed */

void aws_lc_fips_0_14_2_CBB_init_fixed(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_CBB_init_fixed();
  return;
}


/* address=142d5bf50 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_RAND_bytes */

void aws_lc_fips_0_14_2_RAND_bytes(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_RAND_bytes();
  return;
}


/* address=142d5bf60 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_ECDSA_SIG_new */

void aws_lc_fips_0_14_2_ECDSA_SIG_new(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_ECDSA_SIG_new();
  return;
}


/* address=142d5bf70 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_ECDSA_SIG_set0 */

void aws_lc_fips_0_14_2_ECDSA_SIG_set0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_ECDSA_SIG_set0();
  return;
}


/* address=142d5bf80 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_ECDSA_SIG_to_bytes */

void aws_lc_fips_0_14_2_ECDSA_SIG_to_bytes(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_ECDSA_SIG_to_bytes();
  return;
}


/* address=142d5bf90 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_OPENSSL_malloc */

void aws_lc_fips_0_14_2_OPENSSL_malloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_OPENSSL_malloc();
  return;
}


/* address=142d5bfa0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_RSA_public_key_to_bytes */

void aws_lc_fips_0_14_2_RSA_public_key_to_bytes(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_RSA_public_key_to_bytes();
  return;
}


/* address=142d5bfb0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_DigestInit_ex */

void aws_lc_fips_0_14_2_EVP_DigestInit_ex(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_DigestInit_ex();
  return;
}


/* address=142d5bfc0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_AES_ecb_encrypt */

void aws_lc_fips_0_14_2_AES_ecb_encrypt(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_AES_ecb_encrypt();
  return;
}


/* address=142d5bfd0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_SHA256 */

void aws_lc_fips_0_14_2_SHA256(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5bfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_SHA256();
  return;
}


/* address=142d5c010 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_group_p256 */

void aws_lc_fips_0_14_2_EC_group_p256(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_group_p256();
  return;
}


/* address=142d5c040 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_KEY_new */

void aws_lc_fips_0_14_2_EC_KEY_new(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_KEY_new();
  return;
}


/* address=142d5c050 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_KEY_set_group */

void aws_lc_fips_0_14_2_EC_KEY_set_group(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_KEY_set_group();
  return;
}


/* address=142d5c060 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_POINT_new */

void aws_lc_fips_0_14_2_EC_POINT_new(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_POINT_new();
  return;
}


/* address=142d5c070 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_KEY_set_public_key */

void aws_lc_fips_0_14_2_EC_KEY_set_public_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_KEY_set_public_key();
  return;
}


/* address=142d5c080 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_assign_EC_KEY */

void aws_lc_fips_0_14_2_EVP_PKEY_assign_EC_KEY(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_assign_EC_KEY();
  return;
}


/* address=142d5c090 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_POINT_free */

void aws_lc_fips_0_14_2_EC_POINT_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_POINT_free();
  return;
}


/* address=142d5c0b0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_KEY_free */

void aws_lc_fips_0_14_2_EC_KEY_free(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_KEY_free();
  return;
}


/* address=142d5c0c0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_POINT_oct2point */

void aws_lc_fips_0_14_2_EC_POINT_oct2point(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_POINT_oct2point();
  return;
}


/* address=142d5c0d0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_KEY_get0_public_key */

void aws_lc_fips_0_14_2_EC_KEY_get0_public_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_KEY_get0_public_key();
  return;
}


/* address=142d5c0e0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_POINT_point2cbb */

void aws_lc_fips_0_14_2_EC_POINT_point2cbb(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_POINT_point2cbb();
  return;
}


/* address=142d5c0f0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EC_KEY_parse_private_key */

void aws_lc_fips_0_14_2_EC_KEY_parse_private_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EC_KEY_parse_private_key();
  return;
}


/* address=142d5c100 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_PKEY_set1_EC_KEY */

void aws_lc_fips_0_14_2_EVP_PKEY_set1_EC_KEY(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_PKEY_set1_EC_KEY();
  return;
}


/* address=142d5c110 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_MD_CTX_copy */

void aws_lc_fips_0_14_2_EVP_MD_CTX_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_MD_CTX_copy();
  return;
}


/* address=142d5c130 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_AEAD_CTX_zero */

void aws_lc_fips_0_14_2_EVP_AEAD_CTX_zero(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_AEAD_CTX_zero();
  return;
}


/* address=142d5c180 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_HKDF */

void aws_lc_fips_0_14_2_HKDF(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_HKDF();
  return;
}


/* address=142d5c190 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_HKDF_expand */

void aws_lc_fips_0_14_2_HKDF_expand(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_HKDF_expand();
  return;
}


/* address=142d5c1a0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_HMAC_CTX_init */

void aws_lc_fips_0_14_2_HMAC_CTX_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_HMAC_CTX_init();
  return;
}


/* address=142d5c1b0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_HMAC_Init_ex */

void aws_lc_fips_0_14_2_HMAC_Init_ex(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_HMAC_Init_ex();
  return;
}


/* address=142d5c1c0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_aead_aes_128_gcm */

void aws_lc_fips_0_14_2_EVP_aead_aes_128_gcm(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_aead_aes_128_gcm();
  return;
}


/* address=142d5c1d0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_AEAD_CTX_init */

void aws_lc_fips_0_14_2_EVP_AEAD_CTX_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_AEAD_CTX_init();
  return;
}


/* address=142d5c1e0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_EVP_aead_aes_256_gcm */

void aws_lc_fips_0_14_2_EVP_aead_aes_256_gcm(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_EVP_aead_aes_256_gcm();
  return;
}


/* address=142d5c1f0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_HMAC_CTX_cleanup */

void aws_lc_fips_0_14_2_HMAC_CTX_cleanup(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_HMAC_CTX_cleanup();
  return;
}


/* address=142d5c200 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_HMAC_CTX_copy_ex */

void aws_lc_fips_0_14_2_HMAC_CTX_copy_ex(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_HMAC_CTX_copy_ex();
  return;
}


/* address=142d5c2a0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_AES_set_encrypt_key */

void aws_lc_fips_0_14_2_AES_set_encrypt_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_AES_set_encrypt_key();
  return;
}


/* address=142d5c2b0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_AES_set_decrypt_key */

void aws_lc_fips_0_14_2_AES_set_decrypt_key(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_AES_set_decrypt_key();
  return;
}


/* address=142d5c2c0 name=AWS_LC_FIPS_0_14_2_CRYPTO.DLL::aws_lc_fips_0_14_2_CRYPTO_tls1_prf */

void aws_lc_fips_0_14_2_CRYPTO_tls1_prf(void)

{
                    /* WARNING: Could not recover jumptable at 0x000142d5c2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  aws_lc_fips_0_14_2_CRYPTO_tls1_prf();
  return;
}


/* address=142d5c2d0 name=ADVAPI32.DLL::SystemFunction036 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BOOLEAN SystemFunction036(PVOID RandomBuffer,ULONG RandomBufferLength)

{
  BOOLEAN BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5c2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemFunction036(RandomBuffer,RandomBufferLength);
  return BVar1;
}


/* address=142d5c2e0 name=WINTRUST.DLL::WinVerifyTrust */

LONG __stdcall WinVerifyTrust(HWND hwnd,GUID *pgActionID,LPVOID pWVTData)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5c2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = WinVerifyTrust(hwnd,pgActionID,pWVTData);
  return LVar1;
}


/* address=142d5c2f0 name=PSAPI.DLL::EnumProcessModules */

BOOL __stdcall EnumProcessModules(HANDLE hProcess,HMODULE *lphModule,DWORD cb,LPDWORD lpcbNeeded)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnumProcessModules(hProcess,lphModule,cb,lpcbNeeded);
  return BVar1;
}


/* address=142d5c300 name=PSAPI.DLL::GetModuleInformation */

BOOL __stdcall GetModuleInformation(HANDLE hProcess,HMODULE hModule,LPMODULEINFO lpmodinfo,DWORD cb)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5c300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetModuleInformation(hProcess,hModule,lpmodinfo,cb);
  return BVar1;
}


/* address=142d5c310 name=KERNEL32.DLL::VirtualQuery */

SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142d5c310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}


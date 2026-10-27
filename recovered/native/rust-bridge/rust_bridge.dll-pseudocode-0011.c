/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=180688ed0 name=FUN_180688ed0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180688ed0(ulonglong **param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar1 = **param_1;
  FUN_18067b4c8(*param_1[1],param_1[2]);
  __acrt_stdio_free_buffer_nolock(*param_1[1]);
  LOCK();
  *(uint *)(*param_1[1] + 0x14) = *(uint *)(*param_1[1] + 0x14) & 0xfffff81f;
  UNLOCK();
  if ((*(byte *)param_1[3] & 4) == 0) {
    uVar3 = *param_1[4];
    uVar4 = (undefined4)(uVar1 & 0xfffffffffffffffe);
    if (uVar3 == 0) {
      uVar1 = _calloc_base(uVar1 & 0xfffffffffffffffe,1);
      FUN_180681d50(0);
      if (uVar1 == 0) {
        _DAT_180992d20 = _DAT_180992d20 + 1;
        return 0xffffffff;
      }
      puVar2 = (ulonglong *)*param_1[1];
      LOCK();
      *(uint *)((longlong)puVar2 + 0x14) = *(uint *)((longlong)puVar2 + 0x14) | 0x140;
      UNLOCK();
      *(undefined4 *)(puVar2 + 4) = uVar4;
      *puVar2 = uVar1;
      puVar2[1] = uVar1;
      goto LAB_180688fa1;
    }
    puVar2 = (ulonglong *)*param_1[1];
    LOCK();
    *(uint *)((longlong)puVar2 + 0x14) = *(uint *)((longlong)puVar2 + 0x14) | 0x180;
    UNLOCK();
    *(undefined4 *)(puVar2 + 4) = uVar4;
  }
  else {
    puVar2 = (ulonglong *)*param_1[1];
    uVar3 = (longlong)puVar2 + 0x1c;
    LOCK();
    *(uint *)((longlong)puVar2 + 0x14) = *(uint *)((longlong)puVar2 + 0x14) | 0x400;
    UNLOCK();
    *(undefined4 *)(puVar2 + 4) = 2;
  }
  *puVar2 = uVar3;
  puVar2[1] = uVar3;
LAB_180688fa1:
  *(undefined4 *)(puVar2 + 2) = 0;
  return 0;
}


/* address=180688fb8 name=operator()<> */

/* Library Function - Multiple Matches With Same Base Name
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8>,class <lambda_3126a0d026c48c72336a1719c85146ae> &
   __ptr64,class <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> >(class
   <lambda_047e091329b3cc2dd92c1150cfbc4be8> && __ptr64,class
   <lambda_3126a0d026c48c72336a1719c85146ae> & __ptr64,class
   <lambda_8e8daf2dfdb49c56842017fc8f5e8e6a> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_055ea3fc45cdc376d473b135b391c6de>,class <lambda_c695f53ca71df4e62c0528096d5d0bf6> &
   __ptr64,class <lambda_872dedf902327e54f4e2de7ca48e001f> >(class
   <lambda_055ea3fc45cdc376d473b135b391c6de> && __ptr64,class
   <lambda_c695f53ca71df4e62c0528096d5d0bf6> & __ptr64,class
   <lambda_872dedf902327e54f4e2de7ca48e001f> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583>,class <lambda_f3caf1ecae5fe01a9a1a6239afa44510> &
   __ptr64,class <lambda_c640b76c0755ae85b317b35c67c61e6b> >(class
   <lambda_082dd7c0feb7dbdaf245f261e54a6583> && __ptr64,class
   <lambda_f3caf1ecae5fe01a9a1a6239afa44510> & __ptr64,class
   <lambda_c640b76c0755ae85b317b35c67c61e6b> && __ptr64) __ptr64
    public: int __cdecl __crt_seh_guarded_call<int>::operator()<class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6>,class <lambda_a775ed57af18ba8e4d5dc780aa9068fe> &
   __ptr64,class <lambda_975a71a6baa488a08f4e15f6b0339b9e> >(class
   <lambda_0d412022a4b28cc8a401ea49574e8ae6> && __ptr64,class
   <lambda_a775ed57af18ba8e4d5dc780aa9068fe> & __ptr64,class
   <lambda_975a71a6baa488a08f4e15f6b0339b9e> && __ptr64) __ptr64
     36 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined4
operator()<>(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  FUN_18066ae44(*param_2);
  uVar1 = FUN_180688ed0(param_3);
  FUN_18066ae50(*param_4);
  return uVar1;
}


/* address=180688ff8 name=FUN_180688ff8 */

undefined2 FUN_180688ff8(undefined2 param_1)

{
  int iVar1;
  undefined2 local_res8 [4];
  undefined4 local_res10 [6];
  
  local_res8[0] = param_1;
  iVar1 = __dcrt_lowio_ensure_console_output_initialized();
  if (iVar1 != 0) {
    local_res10[0] = 0;
    iVar1 = __dcrt_write_console(local_res8,1,local_res10);
    if (iVar1 != 0) {
      return local_res8[0];
    }
  }
  return 0xffff;
}


/* address=180689038 name=_guard_check_icall */

void _guard_check_icall(void)

{
  (*(code *)PTR__guard_check_icall_1807cac28)();
  return;
}


/* address=180689044 name=FUN_180689044 */

undefined8 * FUN_180689044(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined local_res8 [32];
  
  *param_1 = 0;
  FID_conflict___acrt_lock(8);
  puVar1 = (undefined8 *)FUN_1806890b8(local_res8);
  puVar1 = (undefined8 *)*puVar1;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  FID_conflict___acrt_lock(8);
  return param_1;
}


/* address=18068909c name=FUN_18068909c */

undefined4 FUN_18068909c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return uVar1;
}


/* address=1806890b8 name=FUN_1806890b8 */

longlong * FUN_1806890b8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  plVar5 = (longlong *)(DAT_180992d18 + 0x18);
  plVar1 = plVar5 + (longlong)DAT_180992d10 + -3;
  do {
    if (plVar5 == plVar1) {
LAB_180689134:
      *param_1 = 0;
      return param_1;
    }
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      lVar4 = _calloc_base(1);
      *plVar5 = lVar4;
      FUN_180681d50(0);
      if (*plVar5 != 0) {
        *(undefined4 *)(*plVar5 + 0x18) = 0xffffffff;
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(*plVar5 + 0x30),4000,0);
        lVar4 = *plVar5;
        LOCK();
        *(uint *)(lVar4 + 0x14) = *(uint *)(lVar4 + 0x14) | 0x2000;
        UNLOCK();
        FUN_18066ae44(lVar4);
LAB_180689150:
        *param_1 = lVar4;
        return param_1;
      }
      goto LAB_180689134;
    }
    if ((*(uint *)(lVar4 + 0x14) >> 0xd & 1) == 0) {
      FUN_18066ae44(lVar4);
      uVar3 = *(uint *)(lVar4 + 0x14);
      do {
        LOCK();
        uVar2 = *(uint *)(lVar4 + 0x14);
        bVar6 = uVar3 == uVar2;
        if (bVar6) {
          *(uint *)(lVar4 + 0x14) = uVar3 | 0x2000;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar6);
      if ((~(byte)(uVar3 >> 0xd) & 1) != 0) goto LAB_180689150;
      FUN_18066ae50(lVar4);
    }
    plVar5 = plVar5 + 1;
  } while( true );
}


/* address=1806891a4 name=_commit */

/* Library Function - Single Match
    _commit
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _commit(int _FileHandle)

{
  int iVar1;
  undefined4 *puVar2;
  int local_res8 [2];
  undefined local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_18 [3];
  
  local_res8[0] = _FileHandle;
  if (_FileHandle == -2) {
    puVar2 = (undefined4 *)FUN_180677424();
    *puVar2 = 9;
  }
  else {
    if (((-1 < _FileHandle) && ((uint)_FileHandle < DAT_180993680)) &&
       ((*(byte *)((&DAT_180993280)[(longlong)_FileHandle >> 6] + 0x38 +
                  (ulonglong)(_FileHandle & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = _FileHandle;
      local_res20[0] = _FileHandle;
      iVar1 = FUN_180689238(local_res10,local_res20,local_18,local_res18);
      return iVar1;
    }
    puVar2 = (undefined4 *)FUN_180677424();
    *puVar2 = 9;
    FUN_180681e64();
  }
  return -1;
}


/* address=180689238 name=FUN_180689238 */

undefined8 FUN_180689238(undefined8 param_1,undefined4 *param_2,uint **param_3,undefined4 *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hFile;
  DWORD *pDVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  __acrt_lowio_lock_fh(*param_2);
  if ((*(byte *)((&DAT_180993280)[(longlong)(int)**param_3 >> 6] + 0x38 +
                (ulonglong)(**param_3 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_1806853e0();
    BVar1 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar1 != 0) goto LAB_1806892af;
    DVar2 = GetLastError();
    pDVar3 = (DWORD *)FUN_180677448();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_180677424();
  *puVar4 = 9;
  uVar5 = 0xffffffff;
LAB_1806892af:
  __acrt_lowio_unlock_fh(*param_4);
  return uVar5;
}


/* address=1806892c4 name=FUN_1806892c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1806892c4(char *param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  __acrt_stdio_stream_mode _Var2;
  errno_t eVar3;
  undefined7 extraout_var;
  undefined8 *puVar4;
  int local_res18 [2];
  int local_28;
  uint uStack_24;
  char local_18 [16];
  
  _Var2 = __acrt_stdio_parse_mode<char>(local_18);
  uVar1 = *(undefined8 *)CONCAT71(extraout_var,_Var2);
  puVar4 = (undefined8 *)0x0;
  if (*(char *)((undefined8 *)CONCAT71(extraout_var,_Var2) + 1) != '\0') {
    local_28 = (int)uVar1;
    local_res18[0] = 0;
    eVar3 = FID_conflict__sopen_s(local_res18,param_1,local_28,param_3,0x180);
    if (eVar3 == 0) {
      _DAT_180992d20 = _DAT_180992d20 + 1;
      uStack_24 = (uint)((ulonglong)uVar1 >> 0x20);
      LOCK();
      *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) | uStack_24;
      UNLOCK();
      *(undefined4 *)(param_4 + 2) = 0;
      param_4[5] = 0;
      param_4[1] = 0;
      *param_4 = 0;
      *(int *)(param_4 + 3) = local_res18[0];
      puVar4 = param_4;
    }
  }
  return puVar4;
}


/* address=180689360 name=__acrt_stdio_parse_mode<char> */

/* Library Function - Single Match
    struct __acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<char>(char const * __ptr64
   const)
   
   Library: Visual Studio 2019 Release */

__acrt_stdio_stream_mode __cdecl __acrt_stdio_parse_mode<char>(char *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *in_RDX;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = DAT_1809938a4;
  cVar6 = *in_RDX;
  while (cVar6 == ' ') {
    in_RDX = in_RDX + 1;
    cVar6 = *in_RDX;
  }
  if (cVar6 == 'a') {
    *(undefined4 *)param_1 = 0x109;
LAB_1806893c0:
    *(undefined4 *)(param_1 + 4) = 2;
  }
  else {
    if (cVar6 != 'r') {
      if (cVar6 != 'w') goto LAB_1806895fe;
      *(undefined4 *)param_1 = 0x301;
      goto LAB_1806893c0;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  pcVar12 = in_RDX + 1;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  bVar5 = false;
  bVar4 = true;
LAB_1806893d4:
  if (*pcVar12 == '\0') goto LAB_180689523;
  cVar6 = *pcVar12;
  if (cVar6 < 'T') {
    if (cVar6 == 'S') {
      if (bVar1) goto LAB_180689505;
      *(uint *)param_1 = *(uint *)param_1 | 0x20;
LAB_180689486:
      bVar1 = true;
      bVar4 = true;
      goto LAB_180689511;
    }
    if (cVar6 == ' ') goto LAB_180689511;
    if (cVar6 == '+') {
      if (!bVar2) {
        bVar2 = true;
        if ((*(uint *)param_1 & 2) == 0) {
          bVar4 = true;
          *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe | 2;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffc | 4;
          goto LAB_180689511;
        }
      }
    }
    else if (cVar6 == ',') {
      bVar5 = true;
    }
    else {
      if (cVar6 == 'D') {
        if ((*(uint *)param_1 & 0x40) == 0) {
          uVar7 = *(uint *)param_1 | 0x40;
          goto LAB_18068950d;
        }
        goto LAB_180689505;
      }
      if (cVar6 == 'N') {
        *(uint *)param_1 = *(uint *)param_1 | 0x80;
LAB_18068950f:
        bVar4 = true;
        goto LAB_180689511;
      }
      if (cVar6 != 'R') goto LAB_1806895fe;
      if (!bVar1) {
        *(uint *)param_1 = *(uint *)param_1 | 0x10;
        goto LAB_180689486;
      }
    }
  }
  else if (cVar6 == 'T') {
    if ((*(uint *)param_1 >> 0xc & 1) == 0) {
      uVar7 = *(uint *)param_1 | 0x1000;
      goto LAB_18068950d;
    }
  }
  else if (cVar6 == 'b') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x8000;
      goto LAB_18068950d;
    }
  }
  else if (cVar6 == 'c') {
    if (!bVar3) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800;
LAB_1806894e6:
      bVar3 = true;
      bVar4 = true;
      goto LAB_180689511;
    }
  }
  else if (cVar6 == 'n') {
    if (!bVar3) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffff7ff;
      goto LAB_1806894e6;
    }
  }
  else if (cVar6 == 't') {
    if ((*(uint *)param_1 & 0xc000) == 0) {
      uVar7 = *(uint *)param_1 | 0x4000;
      goto LAB_18068950d;
    }
  }
  else {
    if (cVar6 != 'x') goto LAB_1806895fe;
    if ((*(uint *)param_1 >> 9 & 1) != 0) {
      uVar7 = *(uint *)param_1 | 0x400;
LAB_18068950d:
      *(uint *)param_1 = uVar7;
      goto LAB_18068950f;
    }
  }
LAB_180689505:
  bVar4 = false;
LAB_180689511:
  pcVar12 = pcVar12 + bVar4;
  if (!bVar4) goto LAB_180689523;
  goto LAB_1806893d4;
LAB_180689523:
  pcVar11 = pcVar12 + 1;
  if (!bVar5) {
    pcVar11 = pcVar12;
  }
  for (; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
  }
  if (bVar5) {
    iVar8 = strncmp(pcVar11,"ccs",3);
    if (iVar8 == 0) {
      for (pcVar11 = pcVar11 + 3; *pcVar11 == ' '; pcVar11 = pcVar11 + 1) {
      }
      if (*pcVar11 == '=') {
        do {
          pcVar11 = pcVar11 + 1;
        } while (*pcVar11 == ' ');
        lVar10 = 5;
        iVar8 = FUN_18068f0e0(pcVar11,"UTF-8",5);
        if (iVar8 == 0) {
          *(uint *)param_1 = *(uint *)param_1 | 0x40000;
        }
        else {
          lVar10 = 8;
          iVar8 = FUN_18068f0e0(pcVar11,"UTF-16LEUNICODE",8);
          if (iVar8 == 0) {
            *(uint *)param_1 = *(uint *)param_1 | 0x20000;
          }
          else {
            lVar10 = 7;
            iVar8 = FUN_18068f0e0(pcVar11,"UNICODE",7);
            if (iVar8 != 0) goto LAB_1806895fe;
            *(uint *)param_1 = *(uint *)param_1 | 0x10000;
          }
        }
        for (pcVar11 = pcVar11 + lVar10; cVar6 = *pcVar11, cVar6 == ' '; pcVar11 = pcVar11 + 1) {
        }
        goto LAB_180689540;
      }
    }
  }
  else {
    cVar6 = *pcVar11;
LAB_180689540:
    if (cVar6 == '\0') {
      param_1[8] = '\x01';
      goto LAB_18068960e;
    }
  }
LAB_1806895fe:
  puVar9 = (undefined4 *)FUN_180677424();
  *puVar9 = 0x16;
  FUN_180681e64();
LAB_18068960e:
  return SUB81(param_1,0);
}


/* address=180689624 name=FUN_180689624 */

ulonglong FUN_180689624(FILE *param_1)

{
  uint *puVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  
  if (param_1 == (FILE *)0x0) {
    puVar7 = (undefined4 *)FUN_180677424();
    *puVar7 = 0x16;
    FUN_180681e64();
  }
  else if (((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) &&
          ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0)) {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 1 & 1) == 0) {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 1;
      UNLOCK();
      if ((*(uint *)((longlong)&param_1->_base + 4) & 0x4c0) == 0) {
        __acrt_stdio_allocate_buffer_nolock();
      }
      pcVar3 = *(char **)&param_1->_cnt;
      iVar5 = param_1->_charbuf;
      param_1->_ptr = pcVar3;
      iVar4 = _fileno(param_1);
      iVar5 = FUN_1806783bc(iVar4,pcVar3,iVar5);
      *(int *)&param_1->_base = iVar5;
      if (1 < iVar5 + 1U) {
        if ((*(uint *)((longlong)&param_1->_base + 4) & 6) == 0) {
          iVar5 = _fileno(param_1);
          if ((iVar5 == -1) || (iVar5 = _fileno(param_1), iVar5 == -2)) {
            puVar8 = &DAT_18098e1a0;
          }
          else {
            iVar5 = _fileno(param_1);
            uVar6 = _fileno(param_1);
            puVar8 = (undefined *)
                     ((&DAT_180993280)[(longlong)iVar5 >> 6] + (ulonglong)(uVar6 & 0x3f) * 0x48);
          }
          if ((puVar8[0x38] & 0x82) == 0x82) {
            LOCK();
            puVar1 = (uint *)((longlong)&param_1->_base + 4);
            *puVar1 = *puVar1 | 0x20;
            UNLOCK();
          }
        }
        if (((param_1->_charbuf == 0x200) &&
            ((*(uint *)((longlong)&param_1->_base + 4) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)&param_1->_base + 4) >> 8 & 1) == 0)) {
          param_1->_charbuf = 0x1000;
        }
        *(int *)&param_1->_base = *(int *)&param_1->_base + -1;
        bVar2 = *param_1->_ptr;
        param_1->_ptr = param_1->_ptr + 1;
        return (ulonglong)bVar2;
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | (-(uint)(iVar5 != 0) & 8) + 8;
      UNLOCK();
      *(undefined4 *)&param_1->_base = 0;
    }
    else {
      LOCK();
      puVar1 = (uint *)((longlong)&param_1->_base + 4);
      *puVar1 = *puVar1 | 0x10;
      UNLOCK();
    }
  }
  return 0xffffffff;
}


/* address=180689790 name=FUN_180689790 */

ulonglong FUN_180689790(byte param_1,FILE *param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;
  
  _fileno(param_2);
  if ((*(uint *)((longlong)&param_2->_base + 4) & 6) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if ((*(uint *)((longlong)&param_2->_base + 4) & 1) != 0) {
        cVar2 = FUN_180689928(param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (cVar2 == '\0') goto LAB_1806897c2;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 | 2;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if (((*(uint *)((longlong)&param_2->_base + 4) & 0x4c0) == 0) &&
         (cVar2 = FUN_180682768(param_2), cVar2 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      cVar2 = FUN_1806899b0(param_1,param_2,param_3);
      if (cVar2 != '\0') {
        return (ulonglong)param_1;
      }
      goto LAB_1806897c2;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined *)(param_3 + 0x30) = 1;
LAB_1806897c2:
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 0x10;
  UNLOCK();
  return 0xffffffff;
}


/* address=18068985c name=FUN_18068985c */

undefined2 FUN_18068985c(undefined2 param_1,FILE *param_2,longlong param_3)

{
  uint *puVar1;
  char cVar2;
  
  _fileno(param_2);
  if ((*(uint *)((longlong)&param_2->_base + 4) & 6) == 0) {
    *(undefined4 *)(param_3 + 0x2c) = 9;
  }
  else {
    if ((*(uint *)((longlong)&param_2->_base + 4) >> 0xc & 1) == 0) {
      if ((*(uint *)((longlong)&param_2->_base + 4) & 1) != 0) {
        cVar2 = FUN_180689928(param_2);
        *(undefined4 *)&param_2->_base = 0;
        if (cVar2 == '\0') goto LAB_18068988e;
        param_2->_ptr = *(char **)&param_2->_cnt;
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 & 0xfffffffe;
        UNLOCK();
      }
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 | 2;
      UNLOCK();
      LOCK();
      puVar1 = (uint *)((longlong)&param_2->_base + 4);
      *puVar1 = *puVar1 & 0xfffffff7;
      UNLOCK();
      *(undefined4 *)&param_2->_base = 0;
      if (((*(uint *)((longlong)&param_2->_base + 4) & 0x4c0) == 0) &&
         (cVar2 = FUN_180682768(param_2), cVar2 == '\0')) {
        __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      cVar2 = FUN_180689aa8(param_1,param_2,param_3);
      if (cVar2 != '\0') {
        return param_1;
      }
      goto LAB_18068988e;
    }
    *(undefined4 *)(param_3 + 0x2c) = 0x22;
  }
  *(undefined *)(param_3 + 0x30) = 1;
LAB_18068988e:
  LOCK();
  puVar1 = (uint *)((longlong)&param_2->_base + 4);
  *puVar1 = *puVar1 | 0x10;
  UNLOCK();
  return 0xffff;
}


/* address=180689928 name=FUN_180689928 */

bool FUN_180689928(longlong *param_1)

{
  bool bVar1;
  BOOL BVar2;
  HANDLE hFile;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 3 & 1) == 0) {
    if ((((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) || (*param_1 != param_1[1])) &&
       (hFile = (HANDLE)FUN_1806853e0(*(undefined4 *)(param_1 + 3)),
       hFile != (HANDLE)0xffffffffffffffff)) {
      local_res10[0].QuadPart = 0;
      BVar2 = SetFilePointerEx(hFile,(LARGE_INTEGER)0x0,local_res10,1);
      if (BVar2 != 0) {
        local_res8.QuadPart = 0;
        BVar2 = GetFileSizeEx(hFile,&local_res8);
        if (BVar2 != 0) {
          return local_res10[0].QuadPart == local_res8.QuadPart;
        }
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


/* address=1806899b0 name=FUN_1806899b0 */

bool FUN_1806899b0(undefined param_1,FILE *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  undefined local_res8 [8];
  
  local_res8[0] = param_1;
  uVar2 = _fileno(param_2);
  if ((*(uint *)((longlong)&param_2->_base + 4) & 0xc0) == 0) {
    iVar3 = FUN_18067a6d4(uVar2,local_res8,1,param_3);
    bVar7 = iVar3 == 1;
  }
  else {
    iVar3 = 0;
    iVar6 = *(int *)&param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(*(longlong *)&param_2->_cnt + 1);
    *(int *)&param_2->_base = param_2->_charbuf + -1;
    if (iVar6 < 1) {
      if (uVar2 + 2 < 2) {
        puVar5 = &DAT_18098e1a0;
      }
      else {
        puVar5 = (undefined *)
                 ((&DAT_180993280)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if (((puVar5[0x38] & 0x20) != 0) && (lVar4 = FUN_180677e38(uVar2,0,2), lVar4 == -1)) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      iVar3 = FUN_18067a6d4(uVar2,*(longlong *)&param_2->_cnt,iVar6,param_3);
    }
    bVar7 = iVar3 == iVar6;
    **(undefined **)&param_2->_cnt = local_res8[0];
  }
  return bVar7;
}


/* address=180689aa8 name=FUN_180689aa8 */

bool FUN_180689aa8(ushort param_1,FILE *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  ushort local_res8 [4];
  
  local_res8[0] = param_1;
  uVar2 = _fileno(param_2);
  if ((*(uint *)((longlong)&param_2->_base + 4) & 0xc0) == 0) {
    iVar3 = FUN_18067a6d4(uVar2,local_res8,2,param_3);
    bVar7 = iVar3 == 2;
  }
  else {
    iVar3 = 0;
    iVar6 = *(int *)&param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(*(longlong *)&param_2->_cnt + 2);
    *(int *)&param_2->_base = param_2->_charbuf + -2;
    if (iVar6 < 1) {
      if (uVar2 + 2 < 2) {
        puVar5 = &DAT_18098e1a0;
      }
      else {
        puVar5 = (undefined *)
                 ((&DAT_180993280)[(longlong)(int)uVar2 >> 6] + (ulonglong)(uVar2 & 0x3f) * 0x48);
      }
      if (((puVar5[0x38] & 0x20) != 0) && (lVar4 = FUN_180677e38(uVar2,0,2), lVar4 == -1)) {
        LOCK();
        puVar1 = (uint *)((longlong)&param_2->_base + 4);
        *puVar1 = *puVar1 | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      iVar3 = FUN_18067a6d4(uVar2,*(longlong *)&param_2->_cnt,iVar6,param_3);
    }
    bVar7 = iVar3 == iVar6;
    **(ushort **)&param_2->_cnt = local_res8[0];
  }
  return bVar7;
}


/* address=180689bb0 name=_calloc_base */

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar2 = HeapAlloc(DAT_180993270,8,dwBytes);
      if (pvVar2 != (LPVOID)0x0) {
        return pvVar2;
      }
      iVar1 = FUN_18068c690();
    } while ((iVar1 != 0) && (iVar1 = FUN_180682250(dwBytes), iVar1 != 0));
  }
  puVar3 = (undefined4 *)FUN_180677424();
  *puVar3 = 0xc;
  return (LPVOID)0x0;
}


/* address=180689bc0 name=FUN_180689bc0 */

ulonglong FUN_180689bc0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_20;
  undefined8 local_18;
  char local_10;
  
  if (DAT_180993748 == 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar3 = (undefined4 *)FUN_180677424();
      *puVar3 = 0x16;
      FUN_180681e64();
      return 0x7fffffff;
    }
    if (param_3 < 0x80000000) {
      uVar4 = FUN_18068f070();
      return uVar4;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if ((param_1 == 0) || (param_2 == 0)) {
      puVar3 = (undefined4 *)FUN_180677424();
      *puVar3 = 0x16;
      FUN_180681e64();
      return 0x7fffffff;
    }
    uVar4 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      local_10 = '\0';
      lVar5 = __vcrt_getptd();
      local_20 = *(longlong *)(lVar5 + 0x90);
      local_18 = *(undefined8 *)(lVar5 + 0x88);
      FUN_1806829d0(lVar5,&local_20);
      FUN_180682a04(lVar5,&local_18);
      if ((*(uint *)(lVar5 + 0x3a8) & 2) == 0) {
        *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) | 2;
        local_10 = '\x01';
      }
      if (*(longlong *)(local_20 + 0x130) == 0) {
        uVar1 = FUN_18068f070(param_1,param_2,param_3);
        if (local_10 != '\0') {
          *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) & 0xfffffffd;
        }
        return (ulonglong)uVar1;
      }
      iVar2 = __acrt_CompareStringW
                        (*(longlong *)(local_20 + 0x130),0x1001,param_1,param_3 & 0xffffffff,param_2
                         ,(int)param_3);
      if (iVar2 == 0) {
        puVar3 = (undefined4 *)FUN_180677424();
        *puVar3 = 0x16;
      }
      else {
        uVar4 = (ulonglong)(iVar2 - 2);
      }
      if (local_10 == '\0') {
        return uVar4;
      }
      *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) & 0xfffffffd;
      return uVar4;
    }
  }
  puVar3 = (undefined4 *)FUN_180677424();
  *puVar3 = 0x16;
  FUN_180681e64();
  return 0x7fffffff;
}


/* address=180689d60 name=FUN_180689d60 */

ulonglong FUN_180689d60(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong local_20;
  undefined8 local_18;
  char local_10;
  
  if (DAT_180993748 == 0) {
    uVar3 = FUN_18068f0e0();
  }
  else {
    local_10 = '\0';
    lVar4 = __vcrt_getptd();
    local_20 = *(longlong *)(lVar4 + 0x90);
    local_18 = *(undefined8 *)(lVar4 + 0x88);
    FUN_1806829d0(lVar4,&local_20);
    FUN_180682a04(lVar4,&local_18);
    if ((*(uint *)(lVar4 + 0x3a8) & 2) == 0) {
      *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) | 2;
      local_10 = '\x01';
    }
    if (param_3 == 0) {
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0;
    }
    else if ((param_1 == 0) || (param_2 == 0)) {
      puVar5 = (undefined4 *)FUN_180677424();
      *puVar5 = 0x16;
      FUN_180681e64();
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = 0x7fffffff;
      if (param_3 < 0x80000000) {
        if (*(longlong *)(local_20 + 0x130) == 0) {
          uVar1 = FUN_18068f170(param_1,param_2,param_3,&local_20);
          if (local_10 != '\0') {
            *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
          }
          return (ulonglong)uVar1;
        }
        iVar2 = __acrt_CompareStringA
                          (&local_20,*(longlong *)(local_20 + 0x130),0x1001,param_1,(int)param_3,
                           param_2,(int)param_3,*(undefined4 *)(local_20 + 0x14));
        if (iVar2 == 0) {
          puVar5 = (undefined4 *)FUN_180677424();
          *puVar5 = 0x16;
        }
        else {
          uVar3 = (ulonglong)(iVar2 - 2);
        }
      }
      else {
        puVar5 = (undefined4 *)FUN_180677424();
        *puVar5 = 0x16;
        FUN_180681e64();
      }
      if (local_10 != '\0') {
        *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar3;
}


/* address=18068a660 name=FUN_18068a660 */

double FUN_18068a660(int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  
  dVar2 = DAT_1807c0660;
  if (param_1 != 0) {
    dVar2 = DAT_1807c0668;
  }
  dVar2 = dVar2 * DAT_1807c0660;
  puVar1 = (undefined4 *)FUN_180677424();
  *puVar1 = 0x22;
  return dVar2;
}


/* address=18068a6b0 name=FUN_18068a6b0 */

undefined8 FUN_18068a6b0(int param_1)

{
  if (param_1 != 0) {
    return DAT_1806dfe30;
  }
  return 0;
}


/* address=18068a6d0 name=FUN_18068a6d0 */

double FUN_18068a6d0(int param_1)

{
  double dVar1;
  undefined4 *puVar2;
  double dVar3;
  
  dVar3 = DAT_1806da4a8;
  if (param_1 != 0) {
    dVar3 = DAT_1807bf1c8;
  }
  dVar1 = DAT_1806da4a8 / 0.0;
  puVar2 = (undefined4 *)FUN_180677424();
  *puVar2 = 0x22;
  return dVar1 * dVar3;
}


/* address=18068a730 name=FUN_18068a730 */

double FUN_18068a730(double param_1)

{
  undefined4 *puVar1;
  
  if (!NAN(param_1) && !NAN(param_1)) {
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = 0x21;
  }
  return (param_1 - param_1) / (param_1 - param_1);
}


/* address=18068a770 name=FUN_18068a770 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_18068a770(undefined8 param_1)

{
  undefined4 *puVar1;
  
  if (_DAT_1807c0670 <=
      (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) & _UNK_1806e59c4,
                       (uint)param_1 & _DAT_1806e59c0)) {
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = 0x22;
  }
  return (uint)param_1;
}


/* address=18068a7b0 name=FUN_18068a7b0 */

undefined4 FUN_18068a7b0(double param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0.0) {
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = 0x22;
  }
  return SUB84(param_1,0);
}


/* address=18068a8a0 name=_realloc_base */

/* Library Function - Single Match
    _realloc_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar2 = (LPVOID)_malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_180681d50();
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar2 = HeapReAlloc(DAT_180993270,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar1 = FUN_18068c690();
        } while ((iVar1 != 0) && (iVar1 = FUN_180682250(param_2), iVar1 != 0));
      }
      puVar3 = (undefined4 *)FUN_180677424();
      *puVar3 = 0xc;
    }
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}


/* address=18068a91c name=FUN_18068a91c */

undefined ** FUN_18068a91c(void)

{
  return &PTR_s_No_error_1807c28a0;
}


/* address=18068a924 name=FUN_18068a924 */

undefined * FUN_18068a924(void)

{
  return &DAT_1807c2a00;
}


/* address=18068a930 name=FUN_18068a930 */

undefined4 FUN_18068a930(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_18068a989;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_18068a989;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      pcVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
          pcVar4 = pcVar4 + 1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *pcVar4 = '\0';
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = '\0';
        return 0x50;
      }
      *param_1 = '\0';
      puVar2 = (undefined4 *)FUN_180677424();
      *puVar2 = 0x22;
      FUN_180681e64();
      return 0x22;
    }
    *param_1 = '\0';
  }
LAB_18068a989:
  puVar2 = (undefined4 *)FUN_180677424();
  *puVar2 = 0x16;
  FUN_180681e64();
  return 0x16;
}


/* address=18068aa5c name=__vcrt_FlsAlloc */

/* WARNING: Switch with 1 destination removed at 0x00018068aa8e */
/* Library Function - Single Match
    __vcrt_FlsAlloc
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsAlloc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_18068abec(0,"FlsAlloc",&DAT_1807c2a20,&DAT_1807c2a28);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018068aa9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsAlloc();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180691c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


/* address=18068aaa4 name=__vcrt_FlsFree */

/* WARNING: Switch with 1 destination removed at 0x00018068aad7 */
/* Library Function - Single Match
    __vcrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsFree(undefined4 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_18068abec(1,"FlsFree",&DAT_1807c2a28,&DAT_1807c2a30);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018068aae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsFree(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180691c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* address=18068aaec name=__vcrt_FlsGetValue */

/* WARNING: Switch with 1 destination removed at 0x00018068ab1f */
/* Library Function - Single Match
    __vcrt_FlsGetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsGetValue(DWORD param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_18068abec(2,"FlsGetValue",&DAT_1807c2a30,&DAT_1807c2a38);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018068ab2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsGetValue(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180691c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* address=18068ab34 name=__vcrt_FlsSetValue */

/* Library Function - Single Match
    __vcrt_FlsSetValue
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18068abec(3,"FlsSetValue",&DAT_1807c2a38,&DAT_1807c2a40);
  if (lVar1 == 0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1807cac38)();
  }
  return;
}


/* address=18068ab88 name=__vcrt_InitializeCriticalSectionEx */

/* Library Function - Single Match
    __vcrt_InitializeCriticalSectionEx
   
   Library: Visual Studio 2017 Release */

void __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_18068abec(4,"InitializeCriticalSectionEx",&DAT_1807c2a40,&DAT_1807c2a48);
  if (lVar1 == 0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_1807cac38)(param_1,param_2,param_3);
  }
  return;
}


/* address=18068abec name=FUN_18068abec */

FARPROC FUN_18068abec(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  HMODULE pHVar1;
  wchar_t *lpLibFileName;
  DWORD DVar2;
  int iVar3;
  HMODULE hLibModule;
  FARPROC pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_1;
  pFVar4 = *(FARPROC *)(&DAT_180993870 + uVar6 * 8);
  if (pFVar4 != (FARPROC)0xffffffffffffffff) {
    if (pFVar4 != (FARPROC)0x0) {
      return pFVar4;
    }
    if (param_3 != param_4) {
      do {
        uVar5 = (ulonglong)*param_3;
        hLibModule = *(HMODULE *)(&DAT_180993858 + uVar5 * 8);
        if (hLibModule == (HMODULE)0x0) {
          lpLibFileName = (wchar_t *)(&PTR_u_api_ms_win_core_fibers_l1_1_1_1807c2a08)[uVar5];
          hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
          if ((hLibModule != (HMODULE)0x0) ||
             (((DVar2 = GetLastError(), DVar2 == 0x57 &&
               (iVar3 = wcsncmp(lpLibFileName,L"api-ms-",7), iVar3 != 0)) &&
              (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0)
              ))) {
            LOCK();
            pHVar1 = *(HMODULE *)(&DAT_180993858 + uVar5 * 8);
            *(HMODULE *)(&DAT_180993858 + uVar5 * 8) = hLibModule;
            UNLOCK();
            if (pHVar1 != (HMODULE)0x0) {
              FreeLibrary(hLibModule);
            }
            goto LAB_18068ad1d;
          }
          LOCK();
          *(undefined8 *)(&DAT_180993858 + uVar5 * 8) = 0xffffffffffffffff;
          UNLOCK();
        }
        else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_18068ad1d:
          pFVar4 = GetProcAddress(hLibModule,param_2);
          if (pFVar4 != (FARPROC)0x0) {
            LOCK();
            *(FARPROC *)(&DAT_180993870 + uVar6 * 8) = pFVar4;
            UNLOCK();
            return pFVar4;
          }
          break;
        }
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
    }
    LOCK();
    *(undefined8 *)(&DAT_180993870 + uVar6 * 8) = 0xffffffffffffffff;
    UNLOCK();
  }
  return (FARPROC)0x0;
}


/* address=18068ad80 name=_CallSettingFrame */

/* Library Function - Single Match
    _CallSettingFrame
   
   Library: Visual Studio */

void _CallSettingFrame(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_18067e510(param_1,*param_2);
  (*pcVar1)();
  uVar2 = FUN_18067e540();
  FUN_18067e510(uVar2,*param_2,2);
  return;
}


/* address=18068adc0 name=FUN_18068adc0 */

void FUN_18068adc0(char **param_1,char **param_2)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((*(char *)(param_1 + 1) == '\0') || (*param_1 == (char *)0x0)) {
    *param_2 = *param_1;
    *(undefined *)(param_2 + 1) = 0;
  }
  else {
    sVar1 = strlen(*param_1);
    pcVar2 = (char *)_malloc_base(sVar1 + 1);
    pcVar3 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      FUN_18067fdc0(pcVar2,sVar1 + 1,*param_1);
      pcVar3 = (char *)0x0;
      *param_2 = pcVar2;
      *(undefined *)(param_2 + 1) = 1;
    }
    thunk_FUN_180681d50(pcVar3);
  }
  return;
}


/* address=18068ae40 name=FUN_18068ae40 */

void FUN_18068ae40(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_180681d50(*param_1);
  }
  *(undefined *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


/* address=18068bc30 name=wcsncmp */

/* Library Function - Single Match
    wcsncmp
   
   Library: Visual Studio 2005 Release */

int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount)

{
  longlong lVar1;
  
  if (_MaxCount != 0) {
    lVar1 = _MaxCount - 1;
    for (; ((lVar1 != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2)); _Str1 = _Str1 + 1) {
      _Str2 = _Str2 + 1;
      lVar1 = lVar1 + -1;
    }
    return (uint)(ushort)*_Str1 - (uint)(ushort)*_Str2;
  }
  return 0;
}


/* address=18068bc64 name=FUN_18068bc64 */

undefined4 FUN_18068bc64(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_18068f070(param_1,(&PTR_DAT_1807c3890)[(longlong)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar4 = *(int *)(&UNK_1807c3898 + (longlong)iVar2 * 0x10);
        if (iVar4 < 0) {
          return 0;
        }
        if (0xe3 < (ulonglong)(longlong)iVar4) {
          return 0;
        }
        return *(undefined4 *)(&UNK_1807c2a50 + (longlong)iVar4 * 0x10);
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
      if (-1 < iVar3) {
        iVar4 = iVar2 + 1;
      }
    } while (iVar4 <= iVar5);
  }
  return 0;
}


/* address=18068bd0c name=__acrt_add_locale_ref */

/* Library Function - Single Match
    __acrt_add_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_add_locale_ref(longlong param_1)

{
  int *piVar1;
  int **ppiVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  ppiVar2 = (int **)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if ((ppiVar2[-2] != (int *)&DAT_18098e898) && (piVar1 = *ppiVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((ppiVar2[-3] != (int *)0x0) && (piVar1 = ppiVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    ppiVar2 = ppiVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
  return;
}


/* address=18068bd98 name=__acrt_release_locale_ref */

/* Library Function - Single Match
    __acrt_release_locale_ref
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_release_locale_ref(longlong param_1)

{
  int *piVar1;
  int **ppiVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    ppiVar2 = (int **)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if ((ppiVar2[-2] != (int *)&DAT_18098e898) && (piVar1 = *ppiVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((ppiVar2[-3] != (int *)0x0) && (piVar1 = ppiVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      ppiVar2 = ppiVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(undefined8 *)(param_1 + 0x120));
  }
  return;
}


/* address=18068be40 name=__acrt_free_locale */

/* Library Function - Single Match
    __acrt_free_locale
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_free_locale(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int **ppiVar3;
  
  if ((((*(undefined ***)(param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)(param_1 + 0xf8) != &PTR_DAT_18098ea80)) &&
      (*(int **)(param_1 + 0xe0) != (int *)0x0)) && (**(int **)(param_1 + 0xe0) == 0)) {
    if ((*(int **)(param_1 + 0xf0) != (int *)0x0) && (**(int **)(param_1 + 0xf0) == 0)) {
      FUN_180681d50();
      __acrt_locale_free_monetary(*(undefined8 *)(param_1 + 0xf8));
    }
    if ((*(int **)(param_1 + 0xe8) != (int *)0x0) && (**(int **)(param_1 + 0xe8) == 0)) {
      FUN_180681d50();
      __acrt_locale_free_numeric(*(undefined8 *)(param_1 + 0xf8));
    }
    FUN_180681d50(*(undefined8 *)(param_1 + 0xe0));
    FUN_180681d50(*(undefined8 *)(param_1 + 0xf8));
  }
  if ((*(int **)(param_1 + 0x100) != (int *)0x0) && (**(int **)(param_1 + 0x100) == 0)) {
    FUN_180681d50(*(longlong *)(param_1 + 0x108) + -0xfe);
    FUN_180681d50(*(longlong *)(param_1 + 0x110) + -0x80);
    FUN_180681d50(*(longlong *)(param_1 + 0x118) + -0x80);
    FUN_180681d50(*(undefined8 *)(param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(undefined8 *)(param_1 + 0x120));
  puVar2 = (undefined8 *)(param_1 + 0x128);
  lVar1 = 6;
  ppiVar3 = (int **)(param_1 + 0x38);
  do {
    if (((ppiVar3[-2] != (int *)&DAT_18098e898) && (*ppiVar3 != (int *)0x0)) && (**ppiVar3 == 0)) {
      FUN_180681d50();
      FUN_180681d50(*puVar2);
    }
    if (((ppiVar3[-3] != (int *)0x0) && (ppiVar3[-1] != (int *)0x0)) && (*ppiVar3[-1] == 0)) {
      FUN_180681d50();
    }
    puVar2 = puVar2 + 1;
    ppiVar3 = ppiVar3 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_180681d50(param_1);
  return;
}


/* address=18068bfb8 name=__acrt_locale_add_lc_time_reference */

/* Library Function - Single Match
    __acrt_locale_add_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_add_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1807bfb00)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return iVar2 + 1;
  }
  return 0x7fffffff;
}


/* address=18068bfe0 name=__acrt_locale_release_lc_time_reference */

/* Library Function - Single Match
    __acrt_locale_release_lc_time_reference
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __acrt_locale_release_lc_time_reference(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1807bfb00)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2 + -1;
  }
  return 0x7fffffff;
}


/* address=18068c008 name=__acrt_locale_free_lc_time_if_unreferenced */

/* Library Function - Single Match
    __acrt_locale_free_lc_time_if_unreferenced
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_1807bfb00)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time();
    FUN_180681d50(param_1);
  }
  return;
}


/* address=18068c040 name=FUN_18068c040 */

longlong FUN_18068c040(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = __vcrt_getptd();
  if (((DAT_18098ea70 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 == 0)) {
    FID_conflict___acrt_lock(4);
    lVar2 = _updatetlocinfoEx_nolock((longlong *)(lVar1 + 0x90),DAT_180993710);
    FID_conflict___acrt_lock(4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return lVar2;
}


/* address=18068c0b0 name=_updatetlocinfoEx_nolock */

/* Library Function - Single Match
    _updatetlocinfoEx_nolock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined ** _updatetlocinfoEx_nolock(longlong *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (longlong *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = (longlong)param_2;
      __acrt_add_locale_ref(param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (__acrt_release_locale_ref(ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_18098e730)) {
        __acrt_free_locale(ppuVar1);
      }
    }
  }
  return param_2;
}


/* address=18068c118 name=FUN_18068c118 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18068c118(__crt_locale_pointers *param_1,DWORD param_2,undefined8 param_3,
                  undefined4 param_4,LPWORD param_5,int param_6,int param_7)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *lpSrcStr;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  puVar6 = auStack_88;
  puVar8 = auStack_88;
  puVar7 = auStack_88;
  local_30 = DAT_18093c100 ^ (ulonglong)local_58;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(int *)(local_48 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar2 = FUN_180687344(param_6,(-(param_7 != 0) & 8U) + 1,param_3,param_4);
  if (iVar2 == 0) goto LAB_18068c26e;
  uVar5 = (longlong)iVar2 * 2;
  uVar4 = -(ulonglong)(uVar5 < uVar5 + 0x10) & uVar5 + 0x10;
  if (uVar4 == 0) {
    lpSrcStr = (undefined4 *)0x0;
LAB_18068c256:
    puVar8 = puVar7;
    if (lpSrcStr == (undefined4 *)0x0) goto LAB_18068c26e;
  }
  else {
    if (uVar4 < 0x401) {
      uVar3 = uVar4 + 0xf;
      if (uVar3 <= uVar4) {
        uVar3 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar3 & 0xfffffffffffffff0);
      puVar7 = auStack_88 + lVar1;
      puVar6 = auStack_88 + lVar1;
      lpSrcStr = (undefined4 *)((longlong)local_58 + lVar1);
      if (lpSrcStr == (undefined4 *)0x0) goto LAB_18068c256;
      *lpSrcStr = 0xcccc;
LAB_18068c204:
      lpSrcStr = lpSrcStr + 4;
      puVar7 = puVar6;
    }
    else {
      lpSrcStr = (undefined4 *)_malloc_base();
      puVar7 = auStack_88;
      if (lpSrcStr != (undefined4 *)0x0) {
        *lpSrcStr = 0xdddd;
        goto LAB_18068c204;
      }
    }
    if (lpSrcStr == (undefined4 *)0x0) goto LAB_18068c256;
    *(undefined8 *)(puVar7 + -8) = 0x18068c21a;
    FUN_1806924e0(lpSrcStr,0,uVar5);
    *(int *)(puVar7 + 0x28) = iVar2;
    *(undefined4 **)(puVar7 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar7 + -8) = 0x18068c236;
    iVar2 = FUN_180687344(param_6,1,param_3,param_4);
    if (iVar2 == 0) goto LAB_18068c256;
    *(undefined8 *)(puVar7 + -8) = 0x18068c250;
    GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar2,param_5);
  }
  puVar8 = puVar7;
  if (lpSrcStr[-4] == 0xdddd) {
    *(undefined8 *)(puVar7 + -8) = 0x18068c26e;
    FUN_180681d50();
  }
LAB_18068c26e:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  uVar5 = local_30 ^ (ulonglong)local_58;
  *(undefined8 *)(puVar8 + -8) = 0x18068c28d;
  FUN_18050ec30(uVar5);
  return;
}


/* address=18068c2a8 name=__acrt_LCMapStringA */

/* Library Function - Single Match
    __acrt_LCMapStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,
                        undefined8 param_4,undefined4 param_5,undefined8 param_6,undefined4 param_7,
                        undefined4 param_8,undefined4 param_9)

{
  longlong local_28;
  undefined local_20 [16];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_18068c340(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}


/* address=18068c340 name=FUN_18068c340 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18068c340(longlong *param_1,undefined8 param_2,uint param_3,char *param_4,int param_5,
                  undefined8 param_6,int param_7,int param_8,int param_9)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  puVar9 = auStack_88;
  puVar10 = auStack_88;
  puVar11 = auStack_88;
  local_30 = DAT_18093c100 ^ (ulonglong)local_38;
  iVar3 = param_5;
  if (0 < param_5) {
    sVar4 = __strncnt(param_4,(longlong)param_5);
    iVar2 = (int)sVar4;
    iVar3 = iVar2 + 1;
    if (param_5 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_8 == 0) {
    param_8 = *(int *)(*param_1 + 0xc);
  }
  local_60 = 0;
  local_68 = 0;
  iVar2 = FUN_180687344(param_8,(-(param_9 != 0) & 8U) + 1,param_4,iVar3);
  puVar6 = (undefined4 *)0x0;
  if (iVar2 == 0) goto LAB_18068c64b;
  uVar5 = (longlong)iVar2 * 2 + 0x10;
  uVar5 = -(ulonglong)((ulonglong)((longlong)iVar2 * 2) < uVar5) & uVar5;
  puVar11 = auStack_88;
  if (uVar5 == 0) {
LAB_18068c631:
    if (puVar6 == (undefined4 *)0x0) goto LAB_18068c64b;
  }
  else {
    if (uVar5 < 0x401) {
      uVar8 = uVar5 + 0xf;
      if (uVar8 <= uVar5) {
        uVar8 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar8 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar1;
      puVar6 = (undefined4 *)((longlong)local_38 + lVar1);
      puVar11 = auStack_88 + lVar1;
      if (puVar6 == (undefined4 *)0x0) goto LAB_18068c631;
      *puVar6 = 0xcccc;
LAB_18068c44c:
      puVar6 = puVar6 + 4;
      puVar10 = puVar9;
    }
    else {
      puVar6 = (undefined4 *)_malloc_base(uVar5);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0xdddd;
        goto LAB_18068c44c;
      }
    }
    puVar11 = puVar10;
    if (puVar6 == (undefined4 *)0x0) goto LAB_18068c631;
    *(int *)(puVar10 + 0x28) = iVar2;
    *(undefined4 **)(puVar10 + 0x20) = puVar6;
    *(undefined8 *)(puVar10 + -8) = 0x18068c476;
    iVar3 = FUN_180687344(param_8,1,param_4,iVar3);
    if (iVar3 == 0) goto LAB_18068c631;
    *(undefined8 *)(puVar10 + 0x40) = 0;
    *(undefined8 *)(puVar10 + 0x38) = 0;
    *(undefined8 *)(puVar10 + 0x30) = 0;
    *(undefined4 *)(puVar10 + 0x28) = 0;
    *(undefined8 *)(puVar10 + 0x20) = 0;
    *(undefined8 *)(puVar10 + -8) = 0x18068c4a9;
    iVar3 = FUN_1806800d4(param_2,param_3,puVar6,iVar2);
    puVar7 = (undefined4 *)0x0;
    if (iVar3 == 0) goto LAB_18068c631;
    if ((param_3 & 0x400) == 0) {
      uVar5 = (longlong)iVar3 * 2 + 0x10;
      uVar5 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar5) & uVar5;
      if (uVar5 == 0) {
LAB_18068c614:
        if (puVar7 != (undefined4 *)0x0) {
LAB_18068c619:
          if (puVar7[-4] == 0xdddd) {
            *(undefined8 *)(puVar11 + -8) = 0x18068c62a;
            FUN_180681d50();
          }
        }
      }
      else {
        if (uVar5 < 0x401) {
          uVar8 = uVar5 + 0xf;
          if (uVar8 <= uVar5) {
            uVar8 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar10 + -8) = 0x18068c54c;
          lVar1 = -(uVar8 & 0xfffffffffffffff0);
          puVar11 = puVar10 + lVar1;
          puVar7 = (undefined4 *)(puVar10 + lVar1 + 0x50);
          if (puVar7 == (undefined4 *)0x0) goto LAB_18068c638;
          *puVar7 = 0xcccc;
          puVar10 = puVar10 + lVar1;
LAB_18068c57a:
          puVar7 = puVar7 + 4;
          puVar11 = puVar10;
        }
        else {
          *(undefined8 *)(puVar10 + -8) = 0x18068c56a;
          puVar7 = (undefined4 *)_malloc_base();
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0xdddd;
            goto LAB_18068c57a;
          }
        }
        if (puVar7 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar11 + 0x40) = 0;
          *(undefined8 *)(puVar11 + 0x38) = 0;
          *(undefined8 *)(puVar11 + 0x30) = 0;
          *(int *)(puVar11 + 0x28) = iVar3;
          *(undefined4 **)(puVar11 + 0x20) = puVar7;
          *(undefined8 *)(puVar11 + -8) = 0x18068c5b0;
          iVar2 = FUN_1806800d4(param_2,param_3,puVar6,iVar2);
          if (iVar2 == 0) goto LAB_18068c614;
          *(undefined8 *)(puVar11 + 0x38) = 0;
          *(undefined8 *)(puVar11 + 0x30) = 0;
          if (param_7 == 0) {
            *(undefined4 *)(puVar11 + 0x28) = 0;
            *(undefined8 *)(puVar11 + 0x20) = 0;
            *(undefined8 *)(puVar11 + -8) = 0x18068c5de;
            iVar3 = FUN_1806873d4(param_8,0,puVar7,iVar3);
            if (iVar3 == 0) goto LAB_18068c614;
          }
          else {
            *(int *)(puVar11 + 0x28) = param_7;
            *(undefined8 *)(puVar11 + 0x20) = param_6;
            *(undefined8 *)(puVar11 + -8) = 0x18068c5f8;
            iVar3 = FUN_1806873d4(param_8,0,puVar7,iVar3);
            if (iVar3 == 0) goto LAB_18068c619;
          }
          if (puVar7[-4] == 0xdddd) {
            *(undefined8 *)(puVar11 + -8) = 0x18068c60f;
            FUN_180681d50();
          }
        }
      }
    }
    else if (param_7 != 0) {
      if (iVar3 <= param_7) {
        *(undefined8 *)(puVar10 + 0x40) = 0;
        *(undefined8 *)(puVar10 + 0x38) = 0;
        *(undefined8 *)(puVar10 + 0x30) = 0;
        *(int *)(puVar10 + 0x28) = param_7;
        *(undefined8 *)(puVar10 + 0x20) = param_6;
        *(undefined8 *)(puVar10 + -8) = 0x18068c501;
        iVar3 = FUN_1806800d4(param_2,param_3,puVar6,iVar2);
        if (iVar3 != 0) goto LAB_18068c638;
      }
      goto LAB_18068c631;
    }
  }
LAB_18068c638:
  if (puVar6[-4] == 0xdddd) {
    *(undefined8 *)(puVar11 + -8) = 0x18068c649;
    FUN_180681d50();
  }
LAB_18068c64b:
  uVar5 = local_30 ^ (ulonglong)local_38;
  *(undefined8 *)(puVar11 + -8) = 0x18068c657;
  FUN_18050ec30(uVar5);
  return;
}


/* address=18068c690 name=FUN_18068c690 */

undefined4 FUN_18068c690(void)

{
  return DAT_1809938a0;
}


/* address=18068c6cc name=FUN_18068c6cc */

undefined (*) [16] FUN_18068c6cc(undefined (*param_1) [16],byte param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined (*pauVar6) [16];
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined in_XMM1 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  
  pauVar6 = (undefined (*) [16])0x0;
  if (param_2 == 0) {
    pcVar4 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar13[0] = -(*pcVar4 == '\0');
    auVar13[1] = -(pcVar4[1] == '\0');
    auVar13[2] = -(pcVar4[2] == '\0');
    auVar13[3] = -(pcVar4[3] == '\0');
    auVar13[4] = -(pcVar4[4] == '\0');
    auVar13[5] = -(pcVar4[5] == '\0');
    auVar13[6] = -(pcVar4[6] == '\0');
    auVar13[7] = -(pcVar4[7] == '\0');
    auVar13[8] = -(pcVar4[8] == '\0');
    auVar13[9] = -(pcVar4[9] == '\0');
    auVar13[10] = -(pcVar4[10] == '\0');
    auVar13[11] = -(pcVar4[0xb] == '\0');
    auVar13[12] = -(pcVar4[0xc] == '\0');
    auVar13[13] = -(pcVar4[0xd] == '\0');
    auVar13[14] = -(pcVar4[0xe] == '\0');
    auVar13[15] = -(pcVar4[0xf] == '\0');
    uVar2 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar13[15] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
    pcVar5 = pcVar4;
    if (uVar2 == 0) {
      do {
        pcVar4 = pcVar5 + 0x10;
        auVar10[0] = -(*pcVar4 == '\0');
        auVar10[1] = -(pcVar5[0x11] == '\0');
        auVar10[2] = -(pcVar5[0x12] == '\0');
        auVar10[3] = -(pcVar5[0x13] == '\0');
        auVar10[4] = -(pcVar5[0x14] == '\0');
        auVar10[5] = -(pcVar5[0x15] == '\0');
        auVar10[6] = -(pcVar5[0x16] == '\0');
        auVar10[7] = -(pcVar5[0x17] == '\0');
        auVar10[8] = -(pcVar5[0x18] == '\0');
        auVar10[9] = -(pcVar5[0x19] == '\0');
        auVar10[10] = -(pcVar5[0x1a] == '\0');
        auVar10[11] = -(pcVar5[0x1b] == '\0');
        auVar10[12] = -(pcVar5[0x1c] == '\0');
        auVar10[13] = -(pcVar5[0x1d] == '\0');
        auVar10[14] = -(pcVar5[0x1e] == '\0');
        auVar10[15] = -(pcVar5[0x1f] == '\0');
        uVar1 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[15] >> 7) << 0xf;
        uVar2 = (uint)uVar1;
        pcVar5 = pcVar4;
      } while (uVar1 == 0);
    }
    uVar7 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    return (undefined (*) [16])(pcVar4 + uVar7);
  }
  if (DAT_1809683d8 < 2) {
    pcVar4 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar13 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
    uVar2 = -1 << ((byte)param_1 & 0xf);
    auVar11[0] = -(*pcVar4 == '\0');
    auVar11[1] = -(pcVar4[1] == '\0');
    auVar11[2] = -(pcVar4[2] == '\0');
    auVar11[3] = -(pcVar4[3] == '\0');
    auVar11[4] = -(pcVar4[4] == '\0');
    auVar11[5] = -(pcVar4[5] == '\0');
    auVar11[6] = -(pcVar4[6] == '\0');
    auVar11[7] = -(pcVar4[7] == '\0');
    auVar11[8] = -(pcVar4[8] == '\0');
    auVar11[9] = -(pcVar4[9] == '\0');
    auVar11[10] = -(pcVar4[10] == '\0');
    auVar11[11] = -(pcVar4[0xb] == '\0');
    auVar11[12] = -(pcVar4[0xc] == '\0');
    auVar11[13] = -(pcVar4[0xd] == '\0');
    auVar11[14] = -(pcVar4[0xe] == '\0');
    auVar11[15] = -(pcVar4[0xf] == '\0');
    cVar16 = auVar13[0];
    auVar15[0] = -(*pcVar4 == cVar16);
    cVar17 = auVar13[1];
    auVar15[1] = -(pcVar4[1] == cVar17);
    cVar18 = auVar13[2];
    auVar15[2] = -(pcVar4[2] == cVar18);
    cVar19 = auVar13[3];
    auVar15[3] = -(pcVar4[3] == cVar19);
    auVar15[4] = -(pcVar4[4] == cVar16);
    auVar15[5] = -(pcVar4[5] == cVar17);
    auVar15[6] = -(pcVar4[6] == cVar18);
    auVar15[7] = -(pcVar4[7] == cVar19);
    auVar15[8] = -(pcVar4[8] == cVar16);
    auVar15[9] = -(pcVar4[9] == cVar17);
    auVar15[10] = -(pcVar4[10] == cVar18);
    auVar15[11] = -(pcVar4[0xb] == cVar19);
    auVar15[12] = -(pcVar4[0xc] == cVar16);
    auVar15[13] = -(pcVar4[0xd] == cVar17);
    auVar15[14] = -(pcVar4[0xe] == cVar18);
    auVar15[15] = -(pcVar4[0xf] == cVar19);
    uVar7 = (ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar15[15] >> 7) << 0xf) & uVar2;
    uVar2 = (ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar11[15] >> 7) << 0xf) & uVar2;
    pcVar5 = pcVar4;
    if (uVar2 == 0) {
      do {
        uVar2 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> uVar2 == 0; uVar2 = uVar2 - 1) {
          }
        }
        if (uVar7 != 0) {
          pauVar6 = (undefined (*) [16])(pcVar5 + uVar2);
        }
        pcVar4 = pcVar5 + 0x10;
        auVar14[0] = -(*pcVar4 == '\0');
        auVar14[1] = -(pcVar5[0x11] == '\0');
        auVar14[2] = -(pcVar5[0x12] == '\0');
        auVar14[3] = -(pcVar5[0x13] == '\0');
        auVar14[4] = -(pcVar5[0x14] == '\0');
        auVar14[5] = -(pcVar5[0x15] == '\0');
        auVar14[6] = -(pcVar5[0x16] == '\0');
        auVar14[7] = -(pcVar5[0x17] == '\0');
        auVar14[8] = -(pcVar5[0x18] == '\0');
        auVar14[9] = -(pcVar5[0x19] == '\0');
        auVar14[10] = -(pcVar5[0x1a] == '\0');
        auVar14[11] = -(pcVar5[0x1b] == '\0');
        auVar14[12] = -(pcVar5[0x1c] == '\0');
        auVar14[13] = -(pcVar5[0x1d] == '\0');
        auVar14[14] = -(pcVar5[0x1e] == '\0');
        auVar14[15] = -(pcVar5[0x1f] == '\0');
        uVar1 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[15] >> 7) << 0xf;
        uVar2 = (uint)uVar1;
        auVar12[0] = -(*pcVar4 == cVar16);
        auVar12[1] = -(pcVar5[0x11] == cVar17);
        auVar12[2] = -(pcVar5[0x12] == cVar18);
        auVar12[3] = -(pcVar5[0x13] == cVar19);
        auVar12[4] = -(pcVar5[0x14] == cVar16);
        auVar12[5] = -(pcVar5[0x15] == cVar17);
        auVar12[6] = -(pcVar5[0x16] == cVar18);
        auVar12[7] = -(pcVar5[0x17] == cVar19);
        auVar12[8] = -(pcVar5[0x18] == cVar16);
        auVar12[9] = -(pcVar5[0x19] == cVar17);
        auVar12[10] = -(pcVar5[0x1a] == cVar18);
        auVar12[11] = -(pcVar5[0x1b] == cVar19);
        auVar12[12] = -(pcVar5[0x1c] == cVar16);
        auVar12[13] = -(pcVar5[0x1d] == cVar17);
        auVar12[14] = -(pcVar5[0x1e] == cVar18);
        auVar12[15] = -(pcVar5[0x1f] == cVar19);
        uVar7 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar12[15] >> 7) << 0xf);
        pcVar5 = pcVar4;
      } while (uVar1 == 0);
    }
    uVar7 = (-uVar2 & uVar2) - 1 & uVar7;
    uVar2 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    if (uVar7 != 0) {
      pauVar6 = (undefined (*) [16])(pcVar4 + uVar2);
    }
  }
  else {
    while( true ) {
      bVar8 = false;
      bVar9 = ((ulonglong)param_1 & 0xf) == 0;
      if (bVar9) break;
      if ((*param_1)[0] == param_2) {
        pauVar6 = param_1;
      }
      if ((*param_1)[0] == '\0') {
        return pauVar6;
      }
      param_1 = (undefined (*) [16])(*param_1 + 1);
    }
    while( true ) {
      iVar3 = pcmpistri(ZEXT116(param_2),*param_1,0x40);
      if (bVar8) {
        pauVar6 = (undefined (*) [16])(*param_1 + iVar3);
        bVar9 = pauVar6 == (undefined (*) [16])0x0;
        pcmpistri(ZEXT116(param_2),*param_1,0x40);
      }
      if (bVar9) break;
      bVar8 = (undefined (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar9 = param_1 == (undefined (*) [16])0x0;
    }
  }
  return pauVar6;
}


/* address=18068c7fc name=FUN_18068c7fc */

undefined4
FUN_18068c7fc(char *param_1,ulonglong param_2,int param_3,longlong param_4,undefined8 param_5,
             undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  longlong lVar7;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar3 = 0;
    if (0 < param_3) {
      iVar3 = param_3;
    }
    if (param_2 <= (ulonglong)(longlong)(iVar3 + 1)) {
      uVar5 = 0x22;
      goto LAB_18068c820;
    }
    if (param_4 != 0) {
      pcVar4 = *(char **)(param_4 + 8);
      pcVar6 = param_1 + 1;
      *param_1 = '0';
      for (; 0 < param_3; param_3 = param_3 + -1) {
        cVar2 = *pcVar4;
        if (cVar2 == '\0') {
          cVar2 = '0';
        }
        else {
          pcVar4 = pcVar4 + 1;
        }
        *pcVar6 = cVar2;
        pcVar6 = pcVar6 + 1;
      }
      *pcVar6 = '\0';
      if ((-1 < param_3) && (cVar2 = '\0', FUN_18068c90c(), cVar2 != '\0')) {
        while( true ) {
          pcVar6 = pcVar6 + -1;
          if (*pcVar6 != '9') break;
          *pcVar6 = '0';
        }
        *pcVar6 = *pcVar6 + '\x01';
      }
      if (*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        lVar1 = -1;
        do {
          lVar7 = lVar1;
          lVar1 = lVar7 + 1;
        } while (param_1[lVar7 + 2] != '\0');
        FUN_180691e40(param_1,param_1 + 1,lVar7 + 2);
      }
      return 0;
    }
  }
  uVar5 = 0x16;
LAB_18068c820:
  *(undefined4 *)(param_7 + 0x2c) = uVar5;
  *(undefined *)(param_7 + 0x30) = 1;
  FUN_180682044(0,0,0,0,0,param_7);
  return uVar5;
}


/* address=18068c90c name=FUN_18068c90c */

bool FUN_18068c90c(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  
  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar1 = fegetround();
  if (iVar1 == 0) {
    if ('5' < *param_2) {
      return true;
    }
    if ('4' < *param_2) {
      pcVar2 = param_2;
      if (param_4 == 0) {
        return true;
      }
      do {
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 == '0');
      if (*pcVar2 != '\0') {
        return true;
      }
      if (param_2 != param_1) {
        return (bool)(param_2[-1] & 1);
      }
    }
  }
  else if (iVar1 == 0x200) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 != 0x2d) {
      return true;
    }
  }
  else if (iVar1 == 0x100) {
    if (param_4 != 0) {
      for (; *param_2 == '0'; param_2 = param_2 + 1) {
      }
      if (*param_2 == '\0') {
        return false;
      }
    }
    if (param_3 == 0x2d) {
      return true;
    }
  }
  return false;
}


/* address=18068c9dc name=FUN_18068c9dc */

void FUN_18068c9dc(ulonglong param_1,int param_2,int param_3,undefined4 *param_4,char *param_5,
                  longlong param_6)

{
  uint *puVar1;
  sbyte sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  char *pcVar14;
  double dVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  rsize_t _MaxCount;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  undefined auStackY_828 [32];
  uint uStack_7f0;
  uint local_7ec;
  undefined8 local_7e8;
  uint uStack_7e0;
  int local_7dc;
  uint local_7d8 [2];
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined8 *puStack_7c8;
  byte local_7c0 [8];
  char local_7b8;
  undefined8 *puStack_7b0;
  char *local_7a8;
  undefined4 *local_7a0;
  uint local_798;
  undefined8 local_794;
  uint uStack_5c8;
  undefined8 auStack_5c4 [57];
  uint local_3f8;
  undefined8 local_3f4;
  uint uStack_228;
  uint auStack_224 [115];
  ulonglong local_58;
  
  local_58 = DAT_18093c100 ^ (ulonglong)auStackY_828;
  local_7a8 = param_5;
  local_7dc = param_3;
  local_7a0 = param_4;
  FUN_180690610(local_7c0);
  local_7b8 = (local_7c0[0] & 0x1f) != 0x1f;
  if ((bool)local_7b8) {
    FUN_1806906a0(local_7c0);
  }
  *(char **)(param_4 + 2) = param_5;
  uVar3 = 0x20;
  if ((longlong)param_1 < 0) {
    uVar3 = 0x2d;
  }
  local_7d8[0] = 0;
  *param_4 = uVar3;
  FUN_1806905a0(local_7d8,0,0);
  uVar6 = param_1 >> 0x34 & 0x7ff;
  if (uVar6 == 0) {
    if (((param_1 & 0xfffffffffffff) == 0) || ((local_7d8[0] & 0x1000000) != 0)) {
      param_4[1] = 0;
LAB_18068cb2a:
      iVar4 = FUN_18067fdc0();
joined_r0x00018068cb70:
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_18068dc08;
    }
  }
  else if (uVar6 == 0x7ff) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar20 = 1;
    }
    else if (((longlong)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar20 = 4;
    }
    else {
      uVar20 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar20 == 1) {
      iVar4 = FUN_18067fdc0();
      goto joined_r0x00018068cb70;
    }
    if (((uVar20 == 2) || (uVar20 == 3)) || (uVar20 == 4)) goto LAB_18068cb2a;
  }
  local_7ec = 0;
  local_7cc = 0x8001f;
  dVar15 = (double)(param_1 & 0x7fffffffffffffff);
  FUN_1806905a0(&local_7d0,0,0);
  FUN_1806905a0(&local_7ec,0x8001f,local_7cc);
  local_7ec = param_2 + 1;
  uVar6 = (-(ulonglong)((ulonglong)dVar15 >> 0x34 != 0) & 0x10000000000000) +
          (param_1 & 0xfffffffffffff);
  uVar22 = (2 - (uint)((ulonglong)dVar15 >> 0x34 != 0)) + (uint)((ulonglong)dVar15 >> 0x34);
  log10(dVar15);
  dVar15 = (double)FUN_180690700();
  uVar5 = -(uint)(((int)dVar15 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar15;
  uVar17 = (uint)(uVar6 >> 0x20);
  local_794 = uVar6;
  uVar20 = (uint)(uVar17 != 0);
  uVar13 = uVar20 + 1;
  if (uVar22 < 0x434) {
    if (uVar22 == 0x36) {
LAB_18068d014:
      local_7e8 = (undefined8 *)((ulonglong)local_7e8._4_4_ << 0x20);
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)(-(uint)(uVar17 != 0) & 4));
      iVar4 = 0x1f;
      bVar23 = *puVar1 == 0;
      if (!bVar23) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar23) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      uVar20 = (iVar4 == 0x20) + uVar13;
      if (uVar20 < 0x74) {
        uVar17 = uVar20 - 1;
        while (uVar17 != 0xffffffff) {
          uVar21 = uVar17 - 1;
          if (uVar17 < uVar13) {
            iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar17 * 4);
          }
          else {
            iVar4 = 0;
          }
          if (uVar21 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4);
          }
          else {
            uVar10 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar17 * 4) = uVar10 >> 0x1f | iVar4 * 2;
          uVar17 = uVar21;
        }
      }
      else {
        uVar20 = 0;
      }
      uVar13 = 0x435 - uVar22 >> 5;
      local_798 = uVar20;
      FUN_1806924e0(&local_3f4,0,(ulonglong)uVar13 * 4);
      *(int *)((longlong)&local_3f4 + (ulonglong)uVar13 * 4) = 1 << ((byte)(0x435 - uVar22) & 0x1f);
    }
    else {
      local_3f4._4_4_ = 0x100000;
      local_3f4._0_4_ = 0;
      local_3f8 = 2;
      if (uVar17 == 0) goto LAB_18068d014;
      uVar6 = 0;
      do {
        if (*(int *)((longlong)&local_3f4 + uVar6 * 4) != *(int *)((longlong)&local_794 + uVar6 * 4)
           ) goto LAB_18068d014;
        uVar20 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar20;
      } while (uVar20 != 2);
      local_7e8 = (undefined8 *)((ulonglong)local_7e8._4_4_ << 0x20);
      iVar4 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar17 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      local_798 = (0x20U - iVar4 < 2) + uVar13;
      if (local_798 < 0x74) {
        uVar20 = local_798 - 1;
        while (uVar20 != 0xffffffff) {
          uVar17 = uVar20 - 1;
          if (uVar20 < uVar13) {
            iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
          }
          else {
            iVar4 = 0;
          }
          if (uVar17 < uVar13) {
            uVar21 = *(uint *)((longlong)&local_794 + (ulonglong)uVar17 * 4);
          }
          else {
            uVar21 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4) = uVar21 >> 0x1e | iVar4 * 4;
          uVar20 = uVar17;
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,&local_3f4,0);
      }
      uVar20 = local_798;
      uVar13 = 0x436 - uVar22 >> 5;
      FUN_1806924e0(&local_3f4,0,(ulonglong)uVar13 * 4);
      *(int *)((longlong)&local_3f4 + (ulonglong)uVar13 * 4) = 1 << ((byte)(0x436 - uVar22) & 0x1f);
    }
    local_3f8 = uVar13 + 1;
    _MaxCount = (ulonglong)local_3f8 << 2;
  }
  else {
    local_3f4._4_4_ = 0x100000;
    local_3f4._0_4_ = 0;
    local_3f8 = 2;
    if (uVar17 == 0) {
LAB_18068cdd5:
      local_7e8 = (undefined8 *)((ulonglong)local_7e8._4_4_ << 0x20);
      uVar21 = uVar22 - 0x433 & 0x1f;
      uVar17 = uVar22 - 0x433 >> 5;
      sVar2 = (sbyte)uVar21;
      bVar9 = 0x20 - sVar2;
      uVar22 = (int)(1L << (bVar9 & 0x3f)) - 1;
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
      iVar4 = 0x1f;
      bVar23 = *puVar1 == 0;
      if (!bVar23) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar23) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if ((uVar13 + uVar17 < 0x74) &&
         (local_798 = (0x20U - iVar4 < uVar21) + uVar13 + uVar17, local_798 < 0x74)) {
        uVar20 = local_798;
        while (uVar20 = uVar20 - 1, uVar20 != uVar17 - 1) {
          uVar21 = uVar20 - uVar17;
          if (uVar21 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4);
          }
          else {
            uVar10 = 0;
          }
          if (uVar21 - 1 < uVar13) {
            uVar21 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar21 - 1) * 4);
          }
          else {
            uVar21 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4) =
               (uVar21 & ~uVar22) >> (bVar9 & 0x1f) | (uVar10 & uVar22) << sVar2;
        }
        uVar6 = 0;
        if (uVar17 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
            uVar20 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar20;
          } while (uVar20 != uVar17);
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,&local_3f4,0);
      }
      local_3f4._0_4_ = 2;
    }
    else {
      uVar6 = 0;
      do {
        if (*(int *)((longlong)&local_3f4 + uVar6 * 4) != *(int *)((longlong)&local_794 + uVar6 * 4)
           ) goto LAB_18068cdd5;
        uVar17 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar17;
      } while (uVar17 != 2);
      local_7e8 = (undefined8 *)((ulonglong)local_7e8._4_4_ << 0x20);
      uVar21 = uVar22 - 0x432 & 0x1f;
      uVar17 = uVar22 - 0x432 >> 5;
      sVar2 = (sbyte)uVar21;
      bVar9 = 0x20 - sVar2;
      uVar22 = (int)(1L << (bVar9 & 0x3f)) - 1;
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
      iVar4 = 0x1f;
      bVar23 = *puVar1 == 0;
      if (!bVar23) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar23) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if ((uVar13 + uVar17 < 0x74) &&
         (local_798 = (0x20U - iVar4 < uVar21) + uVar13 + uVar17, local_798 < 0x74)) {
        uVar20 = local_798;
        while (uVar20 = uVar20 - 1, uVar20 != uVar17 - 1) {
          uVar21 = uVar20 - uVar17;
          if (uVar21 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4);
          }
          else {
            uVar10 = 0;
          }
          if (uVar21 - 1 < uVar13) {
            uVar21 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar21 - 1) * 4);
          }
          else {
            uVar21 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4) =
               (uVar21 & ~uVar22) >> (bVar9 & 0x1f) | (uVar10 & uVar22) << sVar2;
        }
        uVar6 = 0;
        if (uVar17 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
            uVar20 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar20;
          } while (uVar20 != uVar17);
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,&local_3f4,0);
      }
      local_3f4._0_4_ = 4;
    }
    local_3f4._4_4_ = 0;
    _MaxCount = 4;
    local_3f8 = 1;
    uVar20 = local_798;
  }
  uStack_5c8 = local_3f8;
  memcpy_s(auStack_5c4,0x1cc,&local_3f4,_MaxCount);
  if ((int)uVar5 < 0) {
    uVar13 = -uVar5;
    local_7e8 = (undefined8 *)CONCAT44(local_7e8._4_4_,uVar13);
    uVar6 = (ulonglong)uVar13 / 10;
    uStack_7f0 = (uint)uVar6;
    if (uStack_7f0 != 0) {
      do {
        uStack_7e0 = (uint)uVar6;
        if (0x26 < uStack_7e0) {
          uStack_7e0 = 0x26;
        }
        uVar13 = uStack_7e0 - 1;
        lVar8 = (ulonglong)(byte)(&DAT_1807bed32)[(ulonglong)uVar13 * 4] * 4;
        local_3f8 = (uint)(byte)(&DAT_1807bed33)[(ulonglong)uVar13 * 4] +
                    (uint)(byte)(&DAT_1807bed32)[(ulonglong)uVar13 * 4];
        FUN_1806924e0(&local_3f4,0,lVar8);
        FUN_180691e40((longlong)&local_3f4 + lVar8,
                      &DAT_1807be420 +
                      (ulonglong)*(ushort *)(&DAT_1807bed30 + (ulonglong)uVar13 * 4) * 4);
        if (local_3f8 < 2) {
          uVar6 = (ulonglong)(uint)local_3f4;
          if ((uint)local_3f4 == 0) {
LAB_18068d661:
            local_798 = 0;
            uVar20 = local_798;
            goto LAB_18068d927;
          }
          if (((uint)local_3f4 == 1) || (uVar20 == 0)) goto LAB_18068d927;
          uVar19 = 0;
          uVar12 = 0;
          do {
            uVar11 = *(uint *)((longlong)&local_794 + uVar12 * 4) * uVar6 + uVar19;
            *(int *)((longlong)&local_794 + uVar12 * 4) = (int)uVar11;
            uVar19 = uVar11 >> 0x20;
            iVar4 = (int)(uVar11 >> 0x20);
            uVar13 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar13;
          } while (uVar13 != uVar20);
LAB_18068d6ab:
          uVar20 = local_798;
          if (iVar4 == 0) goto LAB_18068d927;
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
            local_798 = local_798 + 1;
            uVar20 = local_798;
            goto LAB_18068d927;
          }
          uVar20 = 0;
          local_798 = 0;
          bVar23 = false;
        }
        else {
          if (uVar20 < 2) {
            iVar4 = (int)local_794;
            uVar6 = local_794 & 0xffffffff;
            local_798 = local_3f8;
            if (local_3f8 != 0) {
              if (local_3f8 < 0x74) {
                FUN_180691e40(&local_794,&local_3f4);
              }
              else {
                FUN_1806924e0(&local_794,0);
                puVar7 = (undefined4 *)FUN_180677424();
                *puVar7 = 0x22;
                FUN_180681e64();
              }
            }
            if (iVar4 == 0) goto LAB_18068d661;
            uVar20 = local_798;
            if ((iVar4 != 1) && (local_798 != 0)) {
              uVar19 = 0;
              uVar12 = 0;
              do {
                uVar11 = *(uint *)((longlong)&local_794 + uVar12 * 4) * uVar6 + uVar19;
                *(int *)((longlong)&local_794 + uVar12 * 4) = (int)uVar11;
                uVar19 = uVar11 >> 0x20;
                iVar4 = (int)(uVar11 >> 0x20);
                uVar20 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar20;
              } while (uVar20 != local_798);
              goto LAB_18068d6ab;
            }
          }
          else {
            bVar23 = local_3f8 < uVar20;
            puStack_7b0 = &local_3f4;
            if (!bVar23) {
              puStack_7b0 = &local_794;
            }
            puStack_7c8 = &local_3f4;
            uVar13 = uVar20;
            if (bVar23) {
              uVar13 = local_3f8;
            }
            uVar17 = local_3f8;
            if (bVar23) {
              uVar17 = uVar20;
              puStack_7c8 = &local_794;
            }
            local_798 = 0;
            uVar6 = 0;
            uStack_228 = 0;
            if (uVar13 != 0) {
              do {
                uVar20 = *(uint *)((longlong)puStack_7b0 + uVar6 * 4);
                uVar22 = (uint)uVar6;
                if (uVar20 == 0) {
                  if (uVar22 == local_798) {
                    auStack_224[uVar6] = 0;
                    local_798 = uVar22 + 1;
                    uStack_228 = local_798;
                  }
                }
                else {
                  uVar19 = 0;
                  if (uVar17 != 0) {
                    do {
                      uVar21 = (uint)uVar6;
                      uVar12 = uVar6;
                      if (uVar21 == 0x73) break;
                      if (uVar21 == local_798) {
                        auStack_224[uVar6] = 0;
                        uStack_228 = uVar21 + 1;
                      }
                      uVar12 = (ulonglong)(uVar21 + 1);
                      uVar19 = (ulonglong)
                               *(uint *)((longlong)puStack_7c8 + (ulonglong)(uVar21 + -uVar22) * 4)
                               * (ulonglong)uVar20 + uVar19 + (ulonglong)auStack_224[uVar6];
                      auStack_224[uVar6] = (uint)uVar19;
                      uVar19 = uVar19 >> 0x20;
                      uVar6 = uVar12;
                      local_798 = uStack_228;
                    } while (uVar21 + 1 + -uVar22 != uVar17);
                    uVar20 = (uint)uVar19;
                    uVar6 = uVar12;
                    while (uVar20 != 0) {
                      uVar21 = (uint)uVar6;
                      if (uVar21 == 0x73) goto LAB_18068d9ce;
                      if (uVar21 == local_798) {
                        auStack_224[uVar6] = 0;
                        uStack_228 = uVar21 + 1;
                      }
                      uVar20 = auStack_224[uVar6];
                      auStack_224[uVar6] = (uint)(uVar20 + uVar19);
                      uVar20 = (uint)(uVar20 + uVar19 >> 0x20);
                      uVar19 = (ulonglong)uVar20;
                      uVar6 = (ulonglong)(uVar21 + 1);
                      local_798 = uStack_228;
                    }
                  }
                  if ((int)uVar6 == 0x73) goto LAB_18068d9ce;
                }
                uVar6 = (ulonglong)(uVar22 + 1);
              } while (uVar22 + 1 != uVar13);
            }
            uVar20 = local_798;
            if (local_798 != 0) {
              if (local_798 < 0x74) {
                FUN_180691e40(&local_794,auStack_224);
                uVar20 = local_798;
              }
              else {
                FUN_1806924e0(&local_794,0);
                puVar7 = (undefined4 *)FUN_180677424();
                *puVar7 = 0x22;
                FUN_180681e64();
                uVar20 = local_798;
              }
            }
          }
LAB_18068d927:
          bVar23 = true;
        }
        if (!bVar23) goto LAB_18068d9ce;
        uStack_7f0 = uStack_7f0 - uStack_7e0;
        uVar6 = (ulonglong)uStack_7f0;
      } while (uStack_7f0 != 0);
      uVar13 = (uint)local_7e8;
    }
    uVar17 = uStack_5c8;
    if (uVar13 % 10 != 0) {
      uVar13 = (&DAT_1807bedc8)[uVar13 % 10 - 1];
      if (uVar13 == 0) {
LAB_18068d9ce:
        local_798 = 0;
        uVar17 = uStack_5c8;
        uVar20 = local_798;
      }
      else if ((uVar13 != 1) && (uVar20 != 0)) {
        uVar6 = 0;
        uVar19 = 0;
        do {
          uVar12 = (ulonglong)*(uint *)((longlong)&local_794 + uVar19 * 4) * (ulonglong)uVar13 +
                   uVar6;
          *(int *)((longlong)&local_794 + uVar19 * 4) = (int)uVar12;
          uVar6 = uVar12 >> 0x20;
          uVar17 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar17;
        } while (uVar17 != uVar20);
        iVar4 = (int)(uVar12 >> 0x20);
        uVar17 = uStack_5c8;
        uVar20 = local_798;
        if (iVar4 != 0) {
          if (0x72 < local_798) goto LAB_18068d9ce;
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
          local_798 = local_798 + 1;
          uVar20 = local_798;
        }
      }
    }
  }
  else {
    uVar6 = (ulonglong)uVar5 / 10;
    uVar13 = (uint)uVar6;
    uVar17 = uStack_5c8;
    while (uVar13 != 0) {
      uStack_7e0 = (uint)uVar6;
      if (0x26 < uStack_7e0) {
        uStack_7e0 = 0x26;
      }
      uVar22 = uStack_7e0 - 1;
      lVar8 = (ulonglong)(byte)(&DAT_1807bed32)[(ulonglong)uVar22 * 4] * 4;
      local_3f8 = (uint)(byte)(&DAT_1807bed33)[(ulonglong)uVar22 * 4] +
                  (uint)(byte)(&DAT_1807bed32)[(ulonglong)uVar22 * 4];
      FUN_1806924e0(&local_3f4,0,lVar8);
      FUN_180691e40((longlong)&local_3f4 + lVar8,
                    &DAT_1807be420 +
                    (ulonglong)*(ushort *)(&DAT_1807bed30 + (ulonglong)uVar22 * 4) * 4);
      uVar22 = (uint)auStack_5c4[0];
      if (local_3f8 < 2) {
        uVar6 = (ulonglong)(uint)local_3f4;
        if ((uint)local_3f4 == 0) {
LAB_18068d181:
          uStack_5c8 = 0;
LAB_18068d184:
          uVar17 = uStack_5c8;
          goto LAB_18068d4dc;
        }
        if (((uint)local_3f4 == 1) || (uVar17 == 0)) goto LAB_18068d4dc;
        uVar19 = 0;
        uVar12 = 0;
        do {
          uVar11 = *(uint *)((longlong)auStack_5c4 + uVar12 * 4) * uVar6 + uVar19;
          *(int *)((longlong)auStack_5c4 + uVar12 * 4) = (int)uVar11;
          uVar19 = uVar11 >> 0x20;
          iVar4 = (int)(uVar11 >> 0x20);
          uVar22 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar22;
        } while (uVar22 != uVar17);
LAB_18068d223:
        uVar17 = uStack_5c8;
        if (iVar4 == 0) goto LAB_18068d4dc;
        if (uStack_5c8 < 0x73) {
          *(int *)((longlong)auStack_5c4 + (ulonglong)uStack_5c8 * 4) = iVar4;
          uStack_5c8 = uStack_5c8 + 1;
          goto LAB_18068d184;
        }
        uVar17 = 0;
        uStack_5c8 = 0;
        bVar23 = false;
      }
      else {
        if (uVar17 < 2) {
          uVar6 = (ulonglong)(uint)auStack_5c4[0];
          uStack_5c8 = local_3f8;
          if (local_3f8 != 0) {
            if (local_3f8 < 0x74) {
              FUN_180691e40(auStack_5c4,&local_3f4);
            }
            else {
              FUN_1806924e0(auStack_5c4,0);
              puVar7 = (undefined4 *)FUN_180677424();
              *puVar7 = 0x22;
              FUN_180681e64();
            }
          }
          if (uVar22 == 0) goto LAB_18068d181;
          uVar17 = uStack_5c8;
          if ((uVar22 != 1) && (uStack_5c8 != 0)) {
            uVar19 = 0;
            uVar12 = 0;
            do {
              uVar11 = *(uint *)((longlong)auStack_5c4 + uVar12 * 4) * uVar6 + uVar19;
              *(int *)((longlong)auStack_5c4 + uVar12 * 4) = (int)uVar11;
              uVar19 = uVar11 >> 0x20;
              iVar4 = (int)(uVar11 >> 0x20);
              uVar17 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar17;
            } while (uVar17 != uStack_5c8);
            goto LAB_18068d223;
          }
        }
        else {
          bVar23 = local_3f8 < uVar17;
          puStack_7c8 = &local_3f4;
          if (!bVar23) {
            puStack_7c8 = auStack_5c4;
          }
          local_7e8 = &local_3f4;
          uVar22 = uVar17;
          if (bVar23) {
            uVar22 = local_3f8;
          }
          uVar21 = local_3f8;
          if (bVar23) {
            uVar21 = uVar17;
            local_7e8 = auStack_5c4;
          }
          uStack_5c8 = 0;
          uVar6 = 0;
          uStack_228 = 0;
          if (uVar22 != 0) {
            do {
              uVar17 = *(uint *)((longlong)puStack_7c8 + uVar6 * 4);
              uVar10 = (uint)uVar6;
              if (uVar17 == 0) {
                if (uVar10 == uStack_5c8) {
                  auStack_224[uVar6] = 0;
                  uStack_5c8 = uVar10 + 1;
                  uStack_228 = uStack_5c8;
                }
              }
              else {
                uVar19 = 0;
                if (uVar21 != 0) {
                  do {
                    uVar18 = (uint)uVar6;
                    uVar12 = uVar6;
                    if (uVar18 == 0x73) break;
                    if (uVar18 == uStack_5c8) {
                      auStack_224[uVar6] = 0;
                      uStack_228 = uVar18 + 1;
                    }
                    uVar12 = (ulonglong)(uVar18 + 1);
                    uVar19 = (ulonglong)
                             *(uint *)((longlong)local_7e8 + (ulonglong)(uVar18 + -uVar10) * 4) *
                             (ulonglong)uVar17 + (ulonglong)auStack_224[uVar6] + uVar19;
                    auStack_224[uVar6] = (uint)uVar19;
                    uVar19 = uVar19 >> 0x20;
                    uVar6 = uVar12;
                    uStack_5c8 = uStack_228;
                  } while (uVar18 + 1 + -uVar10 != uVar21);
                  uVar17 = (uint)uVar19;
                  uVar6 = uVar12;
                  while (uVar17 != 0) {
                    uVar18 = (uint)uVar6;
                    if (uVar18 == 0x73) goto LAB_18068d5a6;
                    if (uVar18 == uStack_5c8) {
                      auStack_224[uVar6] = 0;
                      uStack_228 = uVar18 + 1;
                    }
                    uVar17 = auStack_224[uVar6];
                    auStack_224[uVar6] = (uint)(uVar17 + uVar19);
                    uVar17 = (uint)(uVar17 + uVar19 >> 0x20);
                    uVar19 = (ulonglong)uVar17;
                    uVar6 = (ulonglong)(uVar18 + 1);
                    uStack_5c8 = uStack_228;
                  }
                }
                if ((int)uVar6 == 0x73) goto LAB_18068d5a6;
              }
              uVar6 = (ulonglong)(uVar10 + 1);
            } while (uVar10 + 1 != uVar22);
          }
          uVar17 = uStack_5c8;
          if (uStack_5c8 != 0) {
            if (uStack_5c8 < 0x74) {
              FUN_180691e40(auStack_5c4,auStack_224);
              uVar17 = uStack_5c8;
            }
            else {
              FUN_1806924e0(auStack_5c4,0);
              puVar7 = (undefined4 *)FUN_180677424();
              *puVar7 = 0x22;
              FUN_180681e64();
              uVar17 = uStack_5c8;
            }
          }
        }
LAB_18068d4dc:
        bVar23 = true;
      }
      if (!bVar23) goto LAB_18068d5a6;
      uVar13 = uVar13 - uStack_7e0;
      uVar6 = (ulonglong)uVar13;
    }
    if (uVar5 % 10 != 0) {
      uVar13 = (&DAT_1807bedc8)[uVar5 % 10 - 1];
      if (uVar13 == 0) {
LAB_18068d5a6:
        uStack_5c8 = 0;
LAB_18068d5a9:
        uVar17 = uStack_5c8;
      }
      else if ((uVar13 != 1) && (uVar17 != 0)) {
        uVar6 = 0;
        uVar19 = 0;
        do {
          uVar12 = (ulonglong)*(uint *)((longlong)auStack_5c4 + uVar19 * 4) * (ulonglong)uVar13 +
                   uVar6;
          *(int *)((longlong)auStack_5c4 + uVar19 * 4) = (int)uVar12;
          uVar6 = uVar12 >> 0x20;
          uVar22 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar22;
        } while (uVar22 != uVar17);
        iVar4 = (int)(uVar12 >> 0x20);
        uVar17 = uStack_5c8;
        if (iVar4 != 0) {
          if (0x72 < uStack_5c8) goto LAB_18068d5a6;
          *(int *)((longlong)auStack_5c4 + (ulonglong)uStack_5c8 * 4) = iVar4;
          uStack_5c8 = uStack_5c8 + 1;
          goto LAB_18068d5a9;
        }
      }
    }
  }
  pcVar16 = local_7a8;
  if (uVar20 != 0) {
    uVar6 = 0;
    uVar19 = 0;
    do {
      uVar12 = uVar6 + (ulonglong)*(uint *)((longlong)&local_794 + uVar19 * 4) * 10;
      *(int *)((longlong)&local_794 + uVar19 * 4) = (int)uVar12;
      uVar13 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar13;
      uVar6 = uVar12 >> 0x20;
    } while (uVar13 != uVar20);
    iVar4 = (int)(uVar12 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
  }
  iVar4 = FUN_1806714e0(&local_798,&uStack_5c8);
  if (iVar4 == 10) {
    uVar5 = uVar5 + 1;
    *pcVar16 = '1';
    pcVar14 = pcVar16 + 1;
    if (uVar17 != 0) {
      uVar6 = 0;
      uVar19 = 0;
      do {
        uVar12 = uVar6 + (ulonglong)*(uint *)((longlong)auStack_5c4 + uVar19 * 4) * 10;
        *(int *)((longlong)auStack_5c4 + uVar19 * 4) = (int)uVar12;
        uVar20 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar20;
        uVar6 = uVar12 >> 0x20;
      } while (uVar20 != uVar17);
      iVar4 = (int)(uVar12 >> 0x20);
      if (iVar4 != 0) {
        if (uStack_5c8 < 0x73) {
          *(int *)((longlong)auStack_5c4 + (ulonglong)uStack_5c8 * 4) = iVar4;
          uStack_5c8 = uStack_5c8 + 1;
        }
        else {
          uStack_5c8 = 0;
        }
      }
    }
  }
  else if (iVar4 == 0) {
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar16;
  }
  else {
    pcVar14 = pcVar16 + 1;
    *pcVar16 = (char)iVar4 + '0';
  }
  local_7a0[1] = uVar5;
  uVar20 = local_7ec;
  if (((-1 < (int)uVar5) && (local_7ec < 0x80000000)) && (local_7dc == 0)) {
    uVar20 = local_7ec + uVar5;
  }
  uVar6 = (ulonglong)uVar20;
  if (param_6 - 1U < (ulonglong)uVar20) {
    uVar6 = param_6 - 1U;
  }
  pcVar16 = pcVar16 + uVar6;
  while ((pcVar14 != pcVar16 && (local_798 != 0))) {
    uVar6 = 0;
    uVar19 = 0;
    do {
      uVar12 = (ulonglong)*(uint *)((longlong)&local_794 + uVar19 * 4) * 1000000000 + uVar6;
      *(int *)((longlong)&local_794 + uVar19 * 4) = (int)uVar12;
      uVar6 = uVar12 >> 0x20;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar20;
    } while (uVar20 != local_798);
    iVar4 = (int)(uVar12 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
    uVar6 = FUN_1806714e0(&local_798,&uStack_5c8);
    uVar20 = 8;
    do {
      uVar19 = (uVar6 & 0xffffffff) / 10;
      if (uVar20 < (uint)((int)pcVar16 - (int)pcVar14)) {
        pcVar14[uVar20] = (char)uVar6 + (char)uVar19 * -10 + '0';
      }
      uVar20 = uVar20 - 1;
      uVar6 = uVar19;
    } while (uVar20 != 0xffffffff);
    lVar8 = (longlong)pcVar16 - (longlong)pcVar14;
    if (9 < lVar8) {
      lVar8 = 9;
    }
    pcVar14 = pcVar14 + lVar8;
  }
  *pcVar14 = '\0';
  local_7dc = 0;
  FUN_1806905a0(&local_7dc,local_7d0,local_7cc);
LAB_18068dc08:
  if (local_7b8 != '\0') {
    FUN_180690630(local_7c0);
  }
  FUN_18050ec30(local_58 ^ (ulonglong)auStackY_828);
  return;
}


/* address=18068dc5c name=___lc_codepage_func */

/* Library Function - Single Match
    ___lc_codepage_func
   
   Library: Visual Studio 2019 Release */

UINT __cdecl ___lc_codepage_func(void)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = __vcrt_getptd();
  local_res8[0] = *(longlong *)(lVar1 + 0x90);
  FUN_1806829d0(lVar1,local_res8);
  return *(UINT *)(local_res8[0] + 0xc);
}


/* address=18068dc8c name=FUN_18068dc8c */

undefined8 FUN_18068dc8c(byte *param_1,uint param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVar4 = 1;
        bVar2 = 0xc0;
        lVar5 = lVar4;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_18068dd23:
          uVar1 = FUN_18068dd30(param_3,param_4);
          return uVar1;
        }
        lVar4 = 2;
        bVar2 = 0xe0;
        lVar5 = lVar4;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_18068dd23;
        lVar4 = 3;
        bVar2 = 0xf0;
        lVar5 = lVar4;
      }
      do {
        bVar3 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVar4] = bVar3 & 0x3f | 0x80;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *param_1 = bVar2 | (byte)param_2;
      uVar1 = FUN_18068dd44(lVar5 + 1,param_3);
      return uVar1;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}


/* address=18068dd30 name=FUN_18068dd30 */

undefined8 FUN_18068dd30(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}


/* address=18068dd44 name=FUN_18068dd44 */

undefined8 FUN_18068dd44(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}


/* address=18068dd4c name=__acrt_locale_free_monetary */

/* Library Function - Single Match
    __acrt_locale_free_monetary
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_monetary(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_18098ea98) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_18098eaa0) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_18098eaa8) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_18098eab0) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_18098eab8) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_18098eac0) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_18098eac8) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_18098eae8) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_18098eaf0) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_18098eaf8) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_18098eb00) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_18098eb08) {
      FUN_180681d50();
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_18098eb10) {
      FUN_180681d50();
    }
  }
  return;
}


/* address=18068de58 name=__acrt_locale_free_numeric */

/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_18098ea80) {
      FUN_180681d50();
    }
    if ((undefined *)param_1[1] != PTR_DAT_18098ea88) {
      FUN_180681d50();
    }
    if ((undefined *)param_1[2] != PTR_DAT_18098ea90) {
      FUN_180681d50();
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_18098ead8) {
      FUN_180681d50();
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_18098eae0) {
      FUN_180681d50();
    }
  }
  return;
}


/* address=18068dec4 name=__acrt_locale_free_time */

/* Library Function - Single Match
    __acrt_locale_free_time
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_time(longlong param_1)

{
  if (param_1 != 0) {
    FUN_18068dfcc(param_1,7);
    FUN_18068dfcc(param_1 + 0x38,7);
    FUN_18068dfcc(param_1 + 0x70,0xc);
    FUN_18068dfcc(param_1 + 0xd0,0xc);
    FUN_18068dfcc(param_1 + 0x130,2);
    FUN_180681d50(*(undefined8 *)(param_1 + 0x140));
    FUN_180681d50(*(undefined8 *)(param_1 + 0x148));
    FUN_180681d50(*(undefined8 *)(param_1 + 0x150));
    FUN_18068dfcc(param_1 + 0x160,7);
    FUN_18068dfcc(param_1 + 0x198,7);
    FUN_18068dfcc(param_1 + 0x1d0,0xc);
    FUN_18068dfcc(param_1 + 0x230,0xc);
    FUN_18068dfcc(param_1 + 0x290,2);
    FUN_180681d50(*(undefined8 *)(param_1 + 0x2a0));
    FUN_180681d50(*(undefined8 *)(param_1 + 0x2a8));
    FUN_180681d50(*(undefined8 *)(param_1 + 0x2b0));
    FUN_180681d50(*(undefined8 *)(param_1 + 0x2b8));
  }
  return;
}


/* address=18068dfcc name=FUN_18068dfcc */

void FUN_18068dfcc(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  if (param_1 != puVar1) {
    do {
      FUN_180681d50(*param_1);
      param_1 = param_1 + 1;
    } while (param_1 != puVar1);
  }
  return;
}


/* address=18068e000 name=FUN_18068e000 */

undefined4 FUN_18068e000(short *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  short sVar1;
  undefined4 *puVar2;
  longlong lVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_18068e063;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_18068e063;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = 0;
      return 0;
    }
    if (param_3 != 0) {
      psVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          sVar1 = *(short *)((param_3 - (longlong)param_1) + (longlong)psVar4);
          *psVar4 = sVar1;
          psVar4 = psVar4 + 1;
          if (sVar1 == 0) {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *psVar4 = 0;
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 != -1) {
        *param_1 = 0;
        puVar2 = (undefined4 *)FUN_180677424();
        *puVar2 = 0x22;
        FUN_180681e64();
        return 0x22;
      }
      param_1[param_2 + -1] = 0;
      return 0x50;
    }
    *param_1 = 0;
  }
LAB_18068e063:
  puVar2 = (undefined4 *)FUN_180677424();
  *puVar2 = 0x16;
  FUN_180681e64();
  return 0x16;
}


/* address=18068e144 name=KERNEL32.DLL::GetStringTypeW */

BOOL __stdcall GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018068e144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}


/* address=18068e14c name=__acrt_stdio_allocate_buffer_nolock */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __acrt_stdio_allocate_buffer_nolock
   
   Library: Visual Studio 2019 Release */

void __acrt_stdio_allocate_buffer_nolock(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  _DAT_180992d20 = _DAT_180992d20 + 1;
  uVar2 = 0x1000;
  uVar1 = _calloc_base(0x1000);
  param_1[1] = uVar1;
  FUN_180681d50(0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVar2 = 2;
    param_1[1] = (longlong)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
}


/* address=18068e1c0 name=FUN_18068e1c0 */

uint FUN_18068e1c0(void)

{
  uint uVar1;
  
  uVar1 = (((MXCSR & 0x3f) >> 2 & 8 | MXCSR & 0x10) >> 2 | MXCSR & 8) >> 1 |
          ((MXCSR & 2) << 3 | MXCSR & 4) * 2 | (MXCSR & 1) << 4;
  return uVar1 << 0x18 | uVar1;
}


/* address=18068e220 name=FUN_18068e220 */

void FUN_18068e220(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  param_1 = param_1 >> 0x18;
  bVar2 = ((param_1 & 0x3f) >> 4 & 1) != 0;
  uVar1 = (uint)bVar2;
  MXCSR = MXCSR & 0xffffffc0 |
          -(uint)((param_1 & 1) != 0) & 0x20 | -(uint)((param_1 & 2) != 0) & 0x10 |
          -(uint)((param_1 & 4) != 0) & 8 | -(uint)((param_1 & 8) != 0) & 4 | uVar1 |
          (uVar1 - bVar2) - (uint)((param_1 & 0x20) != 0) & 2;
  return;
}


/* address=18068e2a0 name=FUN_18068e2a0 */

uint FUN_18068e2a0(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (ushort)MXCSR & 0x8040;
  if (uVar1 == 0x8000) {
    uVar4 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar4 = 0x800;
  }
  else {
    uVar4 = 0;
    if (uVar1 == 0x8040) {
      uVar4 = 0x400;
    }
  }
  uVar2 = MXCSR & 0x6000;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 0x2000) {
    uVar3 = 0x100;
  }
  else if (uVar2 == 0x4000) {
    uVar3 = 0x200;
  }
  else {
    uVar3 = 0x300;
    if (uVar2 != 0x6000) {
      uVar3 = 0;
    }
  }
  uVar4 = ((((MXCSR >> 2 & 0x400 | MXCSR & 0x800) >> 2 | MXCSR & 0x400) >> 2 | MXCSR & 0x200) >> 3 |
          MXCSR & 0x180) >> 3 | uVar4 | uVar3;
  return (uVar3 | uVar4 * 4) << 0x16 | uVar4;
}


/* address=18068e380 name=FUN_18068e380 */

void FUN_18068e380(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  
  uVar4 = param_1 >> 0x18;
  uVar2 = param_1 >> 0x16 & 0x300;
  param_1 = param_1 & 0xc00;
  uVar8 = 0;
  uVar6 = 0x400;
  uVar10 = 0x800;
  if (param_1 == 0x400) {
    uVar8 = 0x8040;
  }
  else if (param_1 == 0x800) {
    uVar8 = 0x40;
  }
  else if (param_1 == 0xc00) {
    uVar8 = 0x8000;
  }
  uVar5 = 0x100;
  uVar9 = 0x200;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar7 = 0x2000;
      goto LAB_18068e41f;
    }
    if (uVar2 == 0x200) {
      uVar7 = 0x4000;
      goto LAB_18068e41f;
    }
    if (uVar2 == 0x300) {
      uVar7 = 0x6000;
      goto LAB_18068e41f;
    }
  }
  uVar7 = 0;
LAB_18068e41f:
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x1000;
  }
  if ((uVar4 & 2) == 0) {
    uVar10 = 0;
  }
  if ((uVar4 & 4) == 0) {
    uVar6 = 0;
  }
  if ((uVar4 & 8) == 0) {
    uVar9 = 0;
  }
  if ((uVar4 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80;
  }
  if ((uVar4 & 0x20) == 0) {
    uVar5 = 0;
  }
  MXCSR = MXCSR & 0xffff003f |
          (uint)(ushort)(uVar7 | uVar3 | uVar10 | uVar6 | uVar9 | uVar1 | uVar5 | uVar8);
  return;
}


/* address=18068e4b0 name=FUN_18068e4b0 */

uint FUN_18068e4b0(uint param_1)

{
  return param_1 & 0x300;
}


/* address=18068e4c0 name=FUN_18068e4c0 */

/* WARNING: Removing unreachable block (ram,0x00018068e75c) */
/* WARNING: Removing unreachable block (ram,0x00018068e755) */
/* WARNING: Removing unreachable block (ram,0x00018068e74e) */
/* WARNING: Removing unreachable block (ram,0x00018068e747) */
/* WARNING: Removing unreachable block (ram,0x00018068e740) */
/* WARNING: Removing unreachable block (ram,0x00018068e739) */
/* WARNING: Removing unreachable block (ram,0x00018068e732) */
/* WARNING: Removing unreachable block (ram,0x00018068e72b) */
/* WARNING: Removing unreachable block (ram,0x00018068e724) */
/* WARNING: Removing unreachable block (ram,0x00018068e71d) */
/* WARNING: Removing unreachable block (ram,0x00018068e716) */
/* WARNING: Removing unreachable block (ram,0x00018068e70f) */
/* WARNING: Removing unreachable block (ram,0x00018068e708) */
/* WARNING: Removing unreachable block (ram,0x00018068e701) */
/* WARNING: Removing unreachable block (ram,0x00018068e6fa) */
/* WARNING: Removing unreachable block (ram,0x00018068e5bd) */
/* WARNING: Removing unreachable block (ram,0x00018068e5cc) */
/* WARNING: Removing unreachable block (ram,0x00018068e5db) */
/* WARNING: Removing unreachable block (ram,0x00018068e5ea) */
/* WARNING: Removing unreachable block (ram,0x00018068e5f9) */
/* WARNING: Removing unreachable block (ram,0x00018068e605) */
/* WARNING: Removing unreachable block (ram,0x00018068e611) */
/* WARNING: Removing unreachable block (ram,0x00018068e61d) */
/* WARNING: Removing unreachable block (ram,0x00018068e629) */
/* WARNING: Removing unreachable block (ram,0x00018068e635) */
/* WARNING: Removing unreachable block (ram,0x00018068e641) */
/* WARNING: Removing unreachable block (ram,0x00018068e64d) */
/* WARNING: Removing unreachable block (ram,0x00018068e659) */
/* WARNING: Removing unreachable block (ram,0x00018068e665) */
/* WARNING: Removing unreachable block (ram,0x00018068e671) */

byte * FUN_18068e4c0(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  byte *pbVar19;
  undefined (*pauVar20) [16];
  ulonglong uVar21;
  bool bVar22;
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [16];
  ulonglong uStack_18;
  longlong lVar26;
  
  uVar21 = (ulonglong)((uint)param_2 & 0xf);
  pauVar20 = (undefined (*) [16])(param_2 + -uVar21);
  auVar34 = *pauVar20;
  switch(uVar21) {
  case 1:
    auVar34 = auVar34 >> 8;
    break;
  case 2:
    auVar34 = auVar34 >> 0x10;
    break;
  case 3:
    auVar34 = auVar34 >> 0x18;
    break;
  case 4:
    auVar34 = auVar34 >> 0x20;
    break;
  case 5:
    auVar34 = auVar34 >> 0x28;
    break;
  case 6:
    auVar34 = auVar34 >> 0x30;
    break;
  case 7:
    auVar34 = auVar34 >> 0x38;
    break;
  case 8:
    auVar34 = auVar34 >> 0x40;
    break;
  case 9:
    auVar34 = auVar34 >> 0x48;
    break;
  case 10:
    auVar34 = auVar34 >> 0x50;
    break;
  case 0xb:
    auVar34 = auVar34 >> 0x58;
    break;
  case 0xc:
    auVar34 = auVar34 >> 0x60;
    break;
  case 0xd:
    auVar34 = auVar34 >> 0x68;
    break;
  case 0xe:
    auVar34 = auVar34 >> 0x70;
    break;
  case 0xf:
    auVar34 = auVar34 >> 0x78;
  }
  auVar23[0] = -(auVar34[0] == '\0');
  auVar23[1] = -(auVar34[1] == '\0');
  auVar23[2] = -(auVar34[2] == '\0');
  auVar23[3] = -(auVar34[3] == '\0');
  auVar23[4] = -(auVar34[4] == '\0');
  auVar23[5] = -(auVar34[5] == '\0');
  auVar23[6] = -(auVar34[6] == '\0');
  auVar23[7] = -(auVar34[7] == '\0');
  auVar23[8] = -(auVar34[8] == '\0');
  auVar23[9] = -(auVar34[9] == '\0');
  auVar23[10] = -(auVar34[10] == '\0');
  auVar23[11] = -(auVar34[11] == '\0');
  auVar23[12] = -(auVar34[12] == '\0');
  auVar23[13] = -(auVar34[13] == '\0');
  auVar23[14] = -(auVar34[14] == '\0');
  auVar23[15] = -(auVar34[15] == '\0');
  uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[15] >> 7) << 0xf;
  if (uVar3 == 0) {
    if (uVar21 == 0) {
      if ((*pauVar20)[1] == '\0') goto LAB_18068e769;
      goto LAB_18068e880;
    }
  }
  else {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if (uVar21 == 0) {
      bVar22 = true;
    }
    else {
      bVar22 = (ulonglong)uVar2 < 0x10 - uVar21;
    }
    if (-uVar2 + 0xf < 0x10) {
      lVar26 = auVar34._8_8_;
      switch(-uVar2) {
      case 0:
        auVar34 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar27._0_8_ = auVar34._0_8_ << 8;
        auVar27._8_8_ = lVar26 << 8 | auVar34._0_8_ >> 0x38;
        auVar34 = auVar27 >> 8;
        break;
      case 0xfffffff2:
        auVar28._0_8_ = auVar34._0_8_ << 0x10;
        auVar28._8_8_ = lVar26 << 0x10 | auVar34._0_8_ >> 0x30;
        auVar34 = auVar28 >> 0x10;
        break;
      case 0xfffffff3:
        auVar29._0_8_ = auVar34._0_8_ << 0x18;
        auVar29._8_8_ = lVar26 << 0x18 | auVar34._0_8_ >> 0x28;
        auVar34 = auVar29 >> 0x18;
        break;
      case 0xfffffff4:
        auVar30._0_8_ = auVar34._0_8_ << 0x20;
        auVar30._8_8_ = lVar26 << 0x20 | auVar34._0_8_ >> 0x20;
        auVar34 = auVar30 >> 0x20;
        break;
      case 0xfffffff5:
        auVar31._0_8_ = auVar34._0_8_ << 0x28;
        auVar31._8_8_ = lVar26 << 0x28 | auVar34._0_8_ >> 0x18;
        auVar34 = auVar31 >> 0x28;
        break;
      case 0xfffffff6:
        auVar32._0_8_ = auVar34._0_8_ << 0x30;
        auVar32._8_8_ = lVar26 << 0x30 | auVar34._0_8_ >> 0x10;
        auVar34 = auVar32 >> 0x30;
        break;
      case 0xfffffff7:
        auVar33._0_8_ = auVar34._0_8_ << 0x38;
        auVar33._8_8_ = lVar26 << 0x38 | auVar34._0_8_ >> 8;
        auVar34 = auVar33 >> 0x38;
        break;
      case 0xfffffff8:
        auVar34._8_8_ = 0;
        break;
      case 0xfffffff9:
        auVar4._8_8_ = 0;
        auVar4._0_8_ = auVar34._0_8_ << 8;
        auVar34 = (auVar4 << 0x40) >> 0x48;
        break;
      case 0xfffffffa:
        auVar5._8_8_ = 0;
        auVar5._0_8_ = auVar34._0_8_ << 0x10;
        auVar34 = (auVar5 << 0x40) >> 0x50;
        break;
      case 0xfffffffb:
        auVar6._8_8_ = 0;
        auVar6._0_8_ = auVar34._0_8_ << 0x18;
        auVar34 = (auVar6 << 0x40) >> 0x58;
        break;
      case 0xfffffffc:
        auVar7._8_8_ = 0;
        auVar7._0_8_ = auVar34._0_8_ << 0x20;
        auVar34 = (auVar7 << 0x40) >> 0x60;
        break;
      case 0xfffffffd:
        auVar8._8_8_ = 0;
        auVar8._0_8_ = auVar34._0_8_ << 0x28;
        auVar34 = (auVar8 << 0x40) >> 0x68;
        break;
      case 0xfffffffe:
        auVar9._8_8_ = 0;
        auVar9._0_8_ = auVar34._0_8_ << 0x30;
        auVar34 = (auVar9 << 0x40) >> 0x70;
        break;
      case 0xffffffff:
        auVar10._8_8_ = 0;
        auVar10._0_8_ = auVar34._0_8_ << 0x38;
        auVar34 = (auVar10 << 0x40) >> 0x78;
      }
    }
    if (bVar22) goto LAB_18068e769;
  }
  auVar35 = pauVar20[1];
  auVar24[0] = -(auVar35[0] == '\0');
  auVar24[1] = -(auVar35[1] == '\0');
  auVar24[2] = -(auVar35[2] == '\0');
  auVar24[3] = -(auVar35[3] == '\0');
  auVar24[4] = -(auVar35[4] == '\0');
  auVar24[5] = -(auVar35[5] == '\0');
  auVar24[6] = -(auVar35[6] == '\0');
  lVar26 = auVar35._8_8_;
  auVar24[7] = -(auVar35[7] == '\0');
  auVar24[8] = -(auVar35[8] == '\0');
  auVar24[9] = -(auVar35[9] == '\0');
  auVar24[10] = -(auVar35[10] == '\0');
  auVar24[11] = -(auVar35[11] == '\0');
  auVar24[12] = -(auVar35[12] == '\0');
  auVar24[13] = -(auVar35[13] == '\0');
  auVar24[14] = -(auVar35[14] == '\0');
  auVar24[15] = -(auVar35[15] == '\0');
  uVar3 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[15] >> 7) << 0xf;
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 - uVar21) + 0x10 < 0x11) {
      if (-uVar2 + 0xf < 0x10) {
        uVar21 = auVar35._0_8_;
        switch(-uVar2) {
        case 0:
          auVar35 = ZEXT816(0);
          break;
        case 0xfffffff1:
          auVar35._0_8_ = uVar21 << 8;
          auVar35._8_8_ = lVar26 << 8 | uVar21 >> 0x38;
          break;
        case 0xfffffff2:
          auVar35._0_8_ = uVar21 << 0x10;
          auVar35._8_8_ = lVar26 << 0x10 | uVar21 >> 0x30;
          break;
        case 0xfffffff3:
          auVar35._0_8_ = uVar21 << 0x18;
          auVar35._8_8_ = lVar26 << 0x18 | uVar21 >> 0x28;
          break;
        case 0xfffffff4:
          auVar35._0_8_ = uVar21 << 0x20;
          auVar35._8_8_ = lVar26 << 0x20 | uVar21 >> 0x20;
          break;
        case 0xfffffff5:
          auVar35._0_8_ = uVar21 << 0x28;
          auVar35._8_8_ = lVar26 << 0x28 | uVar21 >> 0x18;
          break;
        case 0xfffffff6:
          auVar35._0_8_ = uVar21 << 0x30;
          auVar35._8_8_ = lVar26 << 0x30 | uVar21 >> 0x10;
          break;
        case 0xfffffff7:
          auVar35._0_8_ = uVar21 << 0x38;
          auVar35._8_8_ = lVar26 << 0x38 | uVar21 >> 8;
          break;
        case 0xfffffff8:
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar21;
          auVar35 = auVar18 << 0x40;
          break;
        case 0xfffffff9:
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar21 << 8;
          auVar35 = auVar11 << 0x40;
          break;
        case 0xfffffffa:
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar21 << 0x10;
          auVar35 = auVar12 << 0x40;
          break;
        case 0xfffffffb:
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar21 << 0x18;
          auVar35 = auVar13 << 0x40;
          break;
        case 0xfffffffc:
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar21 << 0x20;
          auVar35 = auVar14 << 0x40;
          break;
        case 0xfffffffd:
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar21 << 0x28;
          auVar35 = auVar15 << 0x40;
          break;
        case 0xfffffffe:
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar21 << 0x30;
          auVar35 = auVar16 << 0x40;
          break;
        case 0xffffffff:
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar21 << 0x38;
          auVar35 = auVar17 << 0x40;
        }
      }
      auVar34 = auVar34 | auVar35;
LAB_18068e769:
      bVar1 = *param_1;
      while( true ) {
        if (bVar1 == 0) {
          return (byte *)0x0;
        }
        auVar25[0] = -(bVar1 == auVar34[0]);
        auVar25[1] = -(bVar1 == auVar34[1]);
        auVar25[2] = -(bVar1 == auVar34[2]);
        auVar25[3] = -(bVar1 == auVar34[3]);
        auVar25[4] = -(bVar1 == auVar34[4]);
        auVar25[5] = -(bVar1 == auVar34[5]);
        auVar25[6] = -(bVar1 == auVar34[6]);
        auVar25[7] = -(bVar1 == auVar34[7]);
        auVar25[8] = -(bVar1 == auVar34[8]);
        auVar25[9] = -(bVar1 == auVar34[9]);
        auVar25[10] = -(bVar1 == auVar34[10]);
        auVar25[11] = -(bVar1 == auVar34[11]);
        auVar25[12] = -(bVar1 == auVar34[12]);
        auVar25[13] = -(bVar1 == auVar34[13]);
        auVar25[14] = -(bVar1 == auVar34[14]);
        auVar25[15] = -(bVar1 == auVar34[15]);
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar25[15] >> 7) << 0xf) != 0) break;
        bVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
LAB_18068e880:
  uStack_18 = DAT_18093c100 ^ (ulonglong)auStack_38;
  bVar1 = *param_2;
  auStack_38 = ZEXT816(0);
  auStack_28 = ZEXT816(0);
  while (bVar1 != 0) {
    auStack_38[(longlong)(int)(uint)bVar1 >> 3] =
         auStack_38[(longlong)(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
    pbVar19 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar1 = *pbVar19;
  }
  bVar1 = *param_1;
  while( true ) {
    if (bVar1 == 0) {
      pbVar19 = (byte *)FUN_18050ec30(uStack_18 ^ (ulonglong)auStack_38);
      return pbVar19;
    }
    if (((byte)auStack_38[bVar1 >> 3] >> (bVar1 & 7) & 1) != 0) break;
    bVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  pbVar19 = (byte *)FUN_18050ec30(uStack_18 ^ (ulonglong)auStack_38);
  return pbVar19;
}


/* address=18068e91c name=FUN_18068e91c */

byte * FUN_18068e91c(byte *param_1,byte *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = 0x16;
    FUN_180681e64();
  }
  else if (param_1 < param_2) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,(__crt_locale_pointers *)0x0);
    pbVar2 = param_2 + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < param_1) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = param_2 + (-1 - (ulonglong)((int)param_2 - (int)pbVar2 & 1));
    }
    if (local_10 == '\0') {
      return pbVar2;
    }
    *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    return pbVar2;
  }
  return (byte *)0x0;
}


/* address=18068e9c0 name=_msize_base */

/* Library Function - Single Match
    _msize_base
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 _msize_base(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = 0x16;
    FUN_180681e64();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00018068e9f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = HeapSize(DAT_180993270,0,param_1);
  return uVar2;
}


/* address=18068ea08 name=FUN_18068ea08 */

ushort * FUN_18068ea08(ushort *param_1,ushort param_2)

{
  uint uVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined auVar4 [16];
  undefined in_XMM1 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  ushort uVar7;
  ushort uVar8;
  
  auVar5 = pshuflw(in_XMM1,ZEXT416((uint)param_2),0);
  do {
    if (((uint)param_1 & 0xfff) < 0xff1) {
      auVar6._0_2_ = -(ushort)(*param_1 == 0);
      auVar6._2_2_ = -(ushort)(param_1[1] == 0);
      auVar6._4_2_ = -(ushort)(param_1[2] == 0);
      auVar6._6_2_ = -(ushort)(param_1[3] == 0);
      auVar6._8_2_ = -(ushort)(param_1[4] == 0);
      auVar6._10_2_ = -(ushort)(param_1[5] == 0);
      auVar6._12_2_ = -(ushort)(param_1[6] == 0);
      auVar6._14_2_ = -(ushort)(param_1[7] == 0);
      uVar7 = auVar5._0_2_;
      auVar4._0_2_ = -(ushort)(*param_1 == uVar7);
      uVar8 = auVar5._2_2_;
      auVar4._2_2_ = -(ushort)(param_1[1] == uVar8);
      auVar4._4_2_ = -(ushort)(param_1[2] == uVar7);
      auVar4._6_2_ = -(ushort)(param_1[3] == uVar8);
      auVar4._8_2_ = -(ushort)(param_1[4] == uVar7);
      auVar4._10_2_ = -(ushort)(param_1[5] == uVar8);
      auVar4._12_2_ = -(ushort)(param_1[6] == uVar7);
      auVar4._14_2_ = -(ushort)(param_1[7] == uVar8);
      auVar6 = auVar6 | auVar4;
      uVar7 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar6[15] >> 7) << 0xf
      ;
      if (uVar7 != 0) {
        uVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        puVar3 = (ushort *)0x0;
        if ((uint)*(ushort *)((ulonglong)uVar1 + (longlong)param_1) == (uint)param_2) {
          puVar3 = (ushort *)((ulonglong)uVar1 + (longlong)param_1);
        }
        return puVar3;
      }
      lVar2 = 0x10;
    }
    else {
      if (*param_1 == param_2) {
        return param_1;
      }
      if (*param_1 == 0) {
        return (ushort *)0x0;
      }
      lVar2 = 2;
    }
    param_1 = (ushort *)((longlong)param_1 + lVar2);
  } while( true );
}


/* address=18068ea84 name=FUN_18068ea84 */

LPCWSTR FUN_18068ea84(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  LPCWSTR pWVar4;
  LPCWSTR pWVar5;
  undefined local_res18 [8];
  longlong local_98;
  longlong local_90;
  char local_80;
  undefined8 local_78;
  undefined8 local_70;
  LPCWSTR local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  LPCWSTR local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_20;
  
  pWVar4 = (LPCWSTR)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (LPCWSTR)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = '\0';
  local_78 = 0;
  local_70 = 0;
  local_68 = (LPCWSTR)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_98,(__crt_locale_pointers *)0x0);
  uVar3 = 0xfde9;
  if (*(int *)(local_90 + 0xc) == 0xfde9) {
    if (local_80 != '\0') {
      *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
    }
    pWVar5 = (LPCWSTR)0xfde9;
  }
  else {
    iVar1 = FUN_18067ff34();
    if (iVar1 == 0) {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
      pWVar5 = (LPCWSTR)0x1;
    }
    else {
      pWVar5 = pWVar4;
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  iVar1 = FUN_180679730(param_1,&local_48,local_res18,pWVar5);
  pWVar5 = pWVar4;
  if (iVar1 == 0) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_98,(__crt_locale_pointers *)0x0);
    if (*(int *)(local_90 + 0xc) == 0xfde9) {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar1 = FUN_18067ff34();
      if (iVar1 == 0) {
        if (local_80 != '\0') {
          *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_80 != '\0') {
          *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    iVar1 = FUN_180679730(param_2,&local_78,local_res18,uVar3);
    pWVar5 = local_68;
    if (iVar1 == 0) {
      uVar2 = SetEnvironmentVariableW(local_38,local_68);
      pWVar4 = (LPCWSTR)(ulonglong)uVar2;
    }
  }
  if (local_50 != '\0') {
    FUN_180681d50(pWVar5);
  }
  if (local_20 != '\0') {
    FUN_180681d50(local_38);
  }
  return pWVar4;
}


/* address=18068ec24 name=FUN_18068ec24 */

void FUN_18068ec24(undefined8 param_1,undefined4 param_2)

{
  FUN_18068ecd0(0,param_1,param_2,1,0,0);
  return;
}


/* address=18068ec4c name=FUN_18068ec4c */

void FUN_18068ec4c(uint param_1)

{
  undefined4 *puVar1;
  undefined auStack_38 [32];
  WCHAR local_18;
  undefined4 local_16;
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_38;
  if (param_1 < 0x1b) {
    if (param_1 != 0) {
      local_18 = (short)param_1 + L'@';
      local_16 = 0x5c003a;
      local_12 = 0;
      GetDriveTypeW(&local_18);
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_180677448();
    *puVar1 = 0xf;
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = 0xd;
    FUN_180681e64();
  }
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_38);
  return;
}


/* address=18068ecd0 name=FUN_18068ecd0 */

void FUN_18068ecd0(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  short sVar4;
  undefined auStack_98 [32];
  short *local_78;
  undefined2 *local_70;
  longlong local_68;
  undefined2 *local_60;
  longlong local_58;
  undefined8 local_50;
  char local_48;
  short local_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_18093c100 ^ (ulonglong)auStack_98;
  lVar3 = (longlong)param_3;
  sVar4 = (short)param_1;
  if (param_3 < 0) {
LAB_18068ecfb:
    puVar2 = (undefined4 *)FUN_180677424();
    *puVar2 = 0x16;
  }
  else {
    if (param_1 == 0) {
      iVar1 = _getdrive();
      sVar4 = (short)iVar1;
      if (iVar1 == 0) {
        local_40 = 0x2e;
        uStack_3e = 0;
      }
      else {
LAB_18068ed42:
        local_40 = sVar4 + 0x40;
        uStack_3e = 0x3a;
        uStack_3c = 0x2e;
        local_3a = 0;
      }
      if (param_2 == (undefined2 *)0x0) {
        local_70 = (undefined2 *)0x0;
        local_68 = 0;
        local_50 = 0;
        local_60 = (undefined2 *)_malloc_base(lVar3 * 2);
        local_48 = local_60 != (undefined2 *)0x0;
        local_58 = lVar3;
        if (!(bool)local_48) {
          local_58 = 0;
        }
        local_78 = &local_40;
        iVar1 = FUN_1806882b4(&local_70,&local_78);
        if (iVar1 == 0) {
          FUN_18068815c(&local_70);
          if (local_48 != '\0') {
            thunk_FUN_180681d50(local_60);
          }
        }
        else if (local_48 != '\0') {
          thunk_FUN_180681d50(local_60);
        }
        goto LAB_18068ee25;
      }
      if (0 < param_3) {
        *param_2 = 0;
        local_78 = &local_40;
        local_50 = 0;
        local_48 = '\0';
        local_70 = param_2;
        local_68 = lVar3;
        local_60 = param_2;
        local_58 = lVar3;
        FUN_180688240(&local_70,&local_78);
        goto LAB_18068ee25;
      }
      goto LAB_18068ecfb;
    }
    iVar1 = FUN_18068ec4c();
    if (iVar1 != 0) goto LAB_18068ed42;
    puVar2 = (undefined4 *)FUN_180677448();
    *puVar2 = 0xf;
    puVar2 = (undefined4 *)FUN_180677424();
    *puVar2 = 0xd;
  }
  FUN_180681e64();
LAB_18068ee25:
  FUN_18050ec30(local_38 ^ (ulonglong)auStack_98);
  return;
}


/* address=18068ee3c name=FUN_18068ee3c */

ushort FUN_18068ee3c(ushort param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  byte bVar2;
  ushort local_res8 [4];
  ushort local_res18 [8];
  longlong local_28;
  longlong local_20;
  char local_10;
  
  if (param_1 == 0xffff) {
    return 0xffff;
  }
  local_res8[0] = param_1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
  bVar2 = (byte)local_res8[0];
  if (*(int *)(local_20 + 0xc) == 0xfde9) {
    if (0x7f < local_res8[0]) {
LAB_18068eede:
      local_res18[0] = 0;
      iVar1 = __acrt_LCMapStringW(*(undefined8 *)(local_20 + 0x138),0x100,local_res8,1,local_res18,1
                                 );
      if (iVar1 != 0) {
        local_res8[0] = local_res18[0];
      }
      goto LAB_18068ef18;
    }
    if (((&DAT_1807c0442)[(ulonglong)bVar2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_18068ef18;
    }
  }
  else {
    if (0xff < local_res8[0]) {
      if (*(longlong *)(local_20 + 0x138) == 0) goto LAB_18068ef18;
      goto LAB_18068eede;
    }
    if (((&DAT_1807c0442)[(ulonglong)bVar2 * 2] & 1) == 0) {
      local_res8[0] = local_res8[0] & 0xff;
      goto LAB_18068ef18;
    }
  }
  local_res8[0] = (ushort)*(byte *)(*(longlong *)(local_20 + 0x110) + (ulonglong)bVar2);
LAB_18068ef18:
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return local_res8[0];
}


/* address=18068ef38 name=__dcrt_lowio_ensure_console_output_initialized */

/* Library Function - Single Match
    __dcrt_lowio_ensure_console_output_initialized
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

bool __dcrt_lowio_ensure_console_output_initialized(void)

{
  if (DAT_18098eb20 == (HANDLE)0xfffffffffffffffe) {
    DAT_18098eb20 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_18098eb20 != (HANDLE)0xffffffffffffffff;
}


/* address=18068ef8c name=__dcrt_write_console */

/* Library Function - Single Match
    __dcrt_write_console
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_18098eb20,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_18098eb20 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_18098eb20);
      }
      DAT_18098eb20 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_18098eb20,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}


/* address=18068f070 name=FUN_18068f070 */

int FUN_18068f070(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    do {
      uVar1 = *param_1;
      uVar3 = (uint)uVar1;
      param_1 = param_1 + 1;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar4 = (uint)uVar2;
      if ((uint)uVar1 != (uint)uVar2) {
        uVar3 = uVar1 + 0x20;
        if (0x19 < uVar1 - 0x41) {
          uVar3 = (uint)uVar1;
        }
        uVar4 = uVar2 + 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar4 = (uint)uVar2;
        }
      }
    } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
    return uVar3 - uVar4;
  }
  return 0;
}


/* address=18068f0e0 name=FUN_18068f0e0 */

ulonglong FUN_18068f0e0(byte *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  if (DAT_180993748 != 0) {
    uVar3 = FUN_18068f170();
    return uVar3;
  }
  if (((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) && (param_3 < 0x80000000)) {
    if (param_3 == 0) {
      return 0;
    }
    while( true ) {
      bVar1 = *param_1;
      uVar4 = (uint)bVar1;
      param_1 = param_1 + 1;
      bVar2 = *param_2;
      uVar5 = (uint)bVar2;
      param_2 = param_2 + 1;
      if ((uint)bVar1 != (uint)bVar2) {
        uVar4 = bVar1 + 0x20;
        if (0x19 < bVar1 - 0x41) {
          uVar4 = (uint)bVar1;
        }
        if (bVar2 - 0x41 < 0x1a) {
          uVar5 = bVar2 + 0x20;
        }
      }
      uVar3 = (ulonglong)(uVar4 - uVar5);
      if ((uVar4 - uVar5 != 0) || (uVar4 == 0)) break;
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return uVar3;
      }
    }
    return uVar3;
  }
  uVar3 = FUN_18068f2d0();
  return uVar3;
}


/* address=18068f170 name=FUN_18068f170 */

int FUN_18068f170(byte *param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong local_28;
  longlong local_20;
  undefined8 uStack_18;
  char local_10;
  
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
    puVar3 = (undefined4 *)FUN_180677424();
    *puVar3 = 0x16;
    FUN_180681e64();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  local_10 = '\0';
  if (param_4 == (longlong *)0x0) {
    if (DAT_180993748 == 0) {
      local_20 = CONCAT44(PTR_PTR_DAT_18098e888._4_4_,PTR_PTR_DAT_18098e888._0_4_);
      local_10 = '\0';
    }
    else {
      local_28 = __vcrt_getptd();
      local_20 = *(longlong *)(local_28 + 0x90);
      uStack_18 = *(undefined8 *)(local_28 + 0x88);
      FUN_1806829d0(local_28,&local_20);
      FUN_180682a04(local_28,&uStack_18);
      if ((*(uint *)(local_28 + 0x3a8) & 2) == 0) {
        local_10 = '\x01';
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) | 2;
      }
    }
  }
  else {
    local_20 = *param_4;
    local_10 = '\0';
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
    iVar2 = (uint)bVar1 - (uint)*(byte *)((ulonglong)*param_2 + *(longlong *)(local_20 + 0x110));
    if ((iVar2 != 0) || (bVar1 == 0)) break;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar2;
}


/* address=18068f2d0 name=FUN_18068f2d0 */

undefined8 FUN_18068f2d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (0x7fffffff < param_3)) {
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = 0x16;
    FUN_180681e64();
  }
  return 0x7fffffff;
}


/* address=18068f304 name=FID_conflict:_sopen_s */

/* Library Function - Multiple Matches With Different Base Names
    _sopen_s
    _wsopen_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

errno_t __cdecl
FID_conflict__sopen_s
          (int *_FileHandle,char *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionMode)

{
  errno_t eVar1;
  
  eVar1 = common_sopen_dispatch<>(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}


/* address=18068f338 name=FUN_18068f338 */

undefined4
FUN_18068f338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined local_68 [8];
  longlong local_60;
  longlong local_58;
  char local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  char local_18;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = '\0';
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_60,(__crt_locale_pointers *)0x0);
  uVar3 = 0xfde9;
  if (*(int *)(local_58 + 0xc) == 0xfde9) {
    if (local_48 != '\0') {
      *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
    }
  }
  else {
    iVar1 = FUN_18067ff34();
    if (iVar1 == 0) {
      if (local_48 != '\0') {
        *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 1;
    }
    else {
      if (local_48 != '\0') {
        *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0;
    }
  }
  iVar1 = FUN_180679730(param_3,&local_40,local_68,uVar3);
  if (iVar1 == 0) {
    uVar2 = FUN_18068f454(param_1,param_2,local_30,param_4,param_5,param_6,param_7);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_18 != '\0') {
    FUN_180681d50(local_30);
  }
  return uVar2;
}


/* address=18068f454 name=FUN_18068f454 */

int FUN_18068f454(undefined4 *param_1,uint *param_2,LPCWSTR param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  byte *pbVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  HANDLE pvVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  undefined local_c8 [4];
  DWORD local_c4;
  undefined4 local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  byte local_a8;
  undefined local_a0 [8];
  LPVOID local_98;
  uint local_90;
  undefined4 local_8c;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined local_48 [32];
  
  puVar5 = (uint *)FUN_18068f92c(local_48,param_4,param_5,param_6);
  local_c0 = *puVar5;
  uStack_bc = puVar5[1];
  uStack_b8 = puVar5[2];
  uStack_b4 = puVar5[3];
  local_b0 = *(undefined8 *)(puVar5 + 4);
  local_78 = *(ulonglong *)(puVar5 + 2) >> 0x20;
  DVar3 = (DWORD)(*(ulonglong *)(puVar5 + 2) >> 0x20);
  local_88 = local_b0;
  local_68 = local_c0;
  uStack_64 = uStack_bc;
  uStack_60 = uStack_b8;
  uStack_5c = uStack_b4;
  if (DVar3 == 0xffffffff) {
    puVar6 = (undefined4 *)FUN_180677448();
    *puVar6 = 0;
    *param_2 = 0xffffffff;
    goto LAB_18068f4d3;
  }
  uVar2 = _alloc_osfhnd();
  *param_2 = uVar2;
  if (uVar2 == 0xffffffff) {
    puVar6 = (undefined4 *)FUN_180677448();
    *puVar6 = 0;
    *param_2 = 0xffffffff;
    puVar6 = (undefined4 *)FUN_180677424();
    *puVar6 = 0x18;
    goto LAB_18068f4d3;
  }
  *param_1 = 1;
  uVar11 = (uint)((ulonglong)local_b0 >> 0x20) | (uint)local_b0;
  local_80 = (ulonglong)uVar11;
  local_90 = ~(param_4 >> 7) & 1;
  local_a0._0_4_ = 0x18;
  local_a0._4_4_ = 0;
  local_8c = 0;
  local_98 = (LPVOID)0x0;
  local_c4 = uStack_60;
  pvVar8 = CreateFileW(param_3,uStack_64,DVar3,(LPSECURITY_ATTRIBUTES)local_a0,uStack_60,uVar11,
                       (HANDLE)0x0);
  uVar2 = uStack_bc;
  if (pvVar8 == (HANDLE)0xffffffffffffffff) {
    if (((uStack_64 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      uVar2 = uStack_64 & 0x7fffffff;
      uStack_bc = uVar2;
      pvVar8 = CreateFileW(param_3,uStack_64 & 0x7fffffff,DVar3,(LPSECURITY_ATTRIBUTES)local_a0,
                           local_c4,uVar11,(HANDLE)0x0);
      if (pvVar8 != (HANDLE)0xffffffffffffffff) goto LAB_18068f60d;
    }
    pbVar1 = (byte *)((&DAT_180993280)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar3 = GetLastError();
    FUN_18067746c(DVar3);
  }
  else {
LAB_18068f60d:
    DVar3 = GetFileType(pvVar8);
    if (DVar3 != 0) {
      if (DVar3 == 2) {
        bVar10 = (byte)local_c0 | 0x40;
      }
      else {
        bVar10 = (byte)local_c0;
        if (DVar3 == 3) {
          bVar10 = (byte)local_c0 | 8;
        }
      }
      FUN_180685654(*param_2,pvVar8);
      local_a8 = bVar10 | 1;
      local_c0 = CONCAT31(local_c0._1_3_,bVar10) | 1;
      *(byte *)((&DAT_180993280)[(longlong)(int)*param_2 >> 6] + 0x38 +
               (ulonglong)(*param_2 & 0x3f) * 0x48) = local_a8;
      *(undefined *)
       ((&DAT_180993280)[(longlong)(int)*param_2 >> 6] + 0x39 + (ulonglong)(*param_2 & 0x3f) * 0x48)
           = 0;
      if (((param_4 & 2) == 0) || (iVar4 = truncate_ctrl_z_if_present(*param_2), iVar4 == 0)) {
        local_68 = local_c0;
        uStack_64 = uStack_bc;
        uStack_60 = uStack_b8;
        uStack_5c = uStack_b4;
        local_c8[0] = 0;
        local_58 = local_88;
        iVar4 = FUN_18068fc04(*param_2,&local_68,param_4,local_c8);
        uVar11 = *param_2;
        if (iVar4 == 0) {
          *(undefined *)
           ((&DAT_180993280)[(longlong)(int)uVar11 >> 6] + 0x39 + (ulonglong)(uVar11 & 0x3f) * 0x48)
               = local_c8[0];
          uVar9 = (ulonglong)(*param_2 & 0x3f);
          pbVar1 = (byte *)((&DAT_180993280)[(longlong)(int)*param_2 >> 6] + 0x3d + uVar9 * 0x48);
          *pbVar1 = *pbVar1 ^ ((byte)(param_4 >> 0x10) ^
                              *(byte *)((&DAT_180993280)[(longlong)(int)*param_2 >> 6] + 0x3d +
                                       uVar9 * 0x48)) & 1;
          if (((local_a8 & 0x48) == 0) && ((param_4 & 8) != 0)) {
            pbVar1 = (byte *)((&DAT_180993280)[(longlong)(int)*param_2 >> 6] + 0x38 +
                             (ulonglong)(*param_2 & 0x3f) * 0x48);
            *pbVar1 = *pbVar1 | 0x20;
          }
          if (((uVar2 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
            CloseHandle(pvVar8);
            uStack_bc = uVar2 & 0x7fffffff;
            pvVar8 = CreateFileW(param_3,uVar2 & 0x7fffffff,(DWORD)local_78,
                                 (LPSECURITY_ATTRIBUTES)local_a0,local_c4,(DWORD)local_80,
                                 (HANDLE)0x0);
            if (pvVar8 == (HANDLE)0xffffffffffffffff) {
              DVar3 = GetLastError();
              FUN_18067746c(DVar3);
              pbVar1 = (byte *)((&DAT_180993280)[(longlong)(int)*param_2 >> 6] + 0x38 +
                               (ulonglong)(*param_2 & 0x3f) * 0x48);
              *pbVar1 = *pbVar1 & 0xfe;
              FUN_180685598(*param_2);
              goto LAB_18068f4d3;
            }
            *(HANDLE *)
             ((&DAT_180993280)[(longlong)(int)*param_2 >> 6] + 0x28 +
             (ulonglong)(*param_2 & 0x3f) * 0x48) = pvVar8;
          }
          return 0;
        }
      }
      else {
        uVar11 = *param_2;
      }
      FUN_1806769dc(uVar11);
      return iVar4;
    }
    DVar3 = GetLastError();
    FUN_18067746c(DVar3);
    pbVar1 = (byte *)((&DAT_180993280)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    CloseHandle(pvVar8);
    if (DVar3 == 0) {
      puVar6 = (undefined4 *)FUN_180677424();
      *puVar6 = 0xd;
    }
  }
LAB_18068f4d3:
  piVar7 = (int *)FUN_180677424();
  return *piVar7;
}


/* address=18068f868 name=common_sopen_dispatch<> */

/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_sopen_dispatch<char>(char const * __ptr64 const,int,int,int,int * __ptr64
   const,int)
    int __cdecl common_sopen_dispatch<wchar_t>(wchar_t const * __ptr64 const,int,int,int,int *
   __ptr64 const,int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int common_sopen_dispatch<>
              (longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint *param_5,
              int param_6)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_18;
  int local_14;
  
  if (((param_5 == (uint *)0x0) || (*param_5 = 0xffffffff, param_1 == 0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7f) != 0)))) {
    puVar3 = (undefined4 *)FUN_180677424();
    *puVar3 = 0x16;
    FUN_180681e64();
    iVar2 = 0x16;
  }
  else {
    local_18 = 0;
    local_14 = 0;
    iVar2 = FUN_18068f338(&local_18,param_5,param_1,param_2,param_3,param_4,param_6);
    if (local_18 != 0) {
      if (iVar2 != 0) {
        pbVar1 = (byte *)((&DAT_180993280)[(longlong)(int)*param_5 >> 6] + 0x38 +
                         (ulonglong)(*param_5 & 0x3f) * 0x48);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      local_14 = iVar2;
      __acrt_lowio_unlock_fh(*param_5);
    }
    if (iVar2 != 0) {
      *param_5 = 0xffffffff;
    }
  }
  return iVar2;
}


/* address=18068f92c name=FUN_18068f92c */

undefined (*) [16] FUN_18068f92c(undefined (*param_1) [16],uint param_2,int param_3,byte param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  *param_1 = ZEXT816(0);
  *(undefined8 *)param_1[1] = 0;
  uVar4 = param_2 & 3;
  uVar5 = 0xffffffff;
  if (uVar4 == 0) {
    iVar2 = -0x80000000;
  }
  else if (uVar4 == 1) {
    iVar2 = (-(uint)((param_2 & 0x70000) != 0 && (param_2 & 8) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVar4 == 2) {
    iVar2 = -0x40000000;
  }
  else {
    puVar3 = (undefined4 *)FUN_180677424();
    *puVar3 = 0x16;
    FUN_180681e64();
    iVar2 = -1;
  }
  *(int *)(*param_1 + 4) = iVar2;
  uVar4 = param_2 & 0x700;
  if (uVar4 != 0) {
    if (uVar4 == 0x100) {
      uVar1 = 4;
      goto LAB_18068fa1d;
    }
    if (uVar4 == 0x200) {
LAB_18068fa0a:
      uVar1 = 5;
      goto LAB_18068fa1d;
    }
    if (uVar4 == 0x300) {
      uVar1 = 2;
      goto LAB_18068fa1d;
    }
    if (uVar4 != 0x400) {
      if (uVar4 != 0x500) {
        if (uVar4 == 0x600) goto LAB_18068fa0a;
        if (uVar4 != 0x700) {
          puVar3 = (undefined4 *)FUN_180677424();
          *puVar3 = 0x16;
          FUN_180681e64();
          uVar1 = 0xffffffff;
          goto LAB_18068fa1d;
        }
      }
      uVar1 = 1;
      goto LAB_18068fa1d;
    }
  }
  uVar1 = 3;
LAB_18068fa1d:
  *(undefined4 *)(*param_1 + 8) = uVar1;
  if (param_3 == 0x10) {
    uVar5 = 0;
  }
  else if (param_3 == 0x20) {
    uVar5 = 1;
  }
  else if (param_3 == 0x30) {
    uVar5 = 2;
  }
  else if (param_3 == 0x40) {
    uVar5 = 3;
  }
  else if (param_3 == 0x80) {
    uVar5 = (uint)(*(int *)(*param_1 + 4) == -0x80000000);
  }
  else {
    puVar3 = (undefined4 *)FUN_180677424();
    *puVar3 = 0x16;
    FUN_180681e64();
  }
  *(undefined4 *)(param_1[1] + 4) = 0;
  *(uint *)(*param_1 + 0xc) = uVar5;
  *(undefined4 *)param_1[1] = 0x80;
  if ((char)param_2 < '\0') {
    (*param_1)[0] = (*param_1)[0] | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if (((param_2 & 0x74000) == 0) && (iVar2 = FUN_180690e04(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    (*param_1)[0] = (*param_1)[0] | 0x80;
  }
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_1809938b0 & param_4))) {
    *(undefined4 *)param_1[1] = 1;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(param_1[1] + 4) = *(uint *)(param_1[1] + 4) | 0x4000000;
    *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) | 0x10000;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 4;
  }
  if ((param_2 >> 0xc & 1) != 0) {
    *(uint *)param_1[1] = *(uint *)param_1[1] | 0x100;
  }
  if ((param_2 >> 0xd & 1) != 0) {
    *(uint *)(param_1[1] + 4) = *(uint *)(param_1[1] + 4) | 0x2000000;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1[1] + 4) = *(uint *)(param_1[1] + 4) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1[1] + 4) = *(uint *)(param_1[1] + 4) | 0x8000000;
  }
  return param_1;
}


/* address=18068fb40 name=truncate_ctrl_z_if_present */

/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  short local_res8 [4];
  
  bVar1 = *(byte *)((&DAT_180993280)[(longlong)param_1 >> 6] + 0x38 +
                   (ulonglong)(param_1 & 0x3f) * 0x48);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    lVar3 = FUN_180677ed4(param_1,0xffffffffffffffff,2);
    if (lVar3 == -1) {
      piVar4 = (int *)FUN_180677448();
      if (*piVar4 == 0x83) goto LAB_18068fbef;
    }
    else {
      local_res8[0] = 0;
      iVar2 = FUN_1806784dc(param_1,local_res8,1);
      if ((iVar2 == 0) && (local_res8[0] == 0x1a)) {
        iVar2 = FUN_180690f18(param_1,lVar3);
        if (iVar2 == -1) goto LAB_18068fba2;
      }
      lVar3 = FUN_180677ed4(param_1,0,0);
      if (lVar3 != -1) goto LAB_18068fbef;
    }
LAB_18068fba2:
    piVar4 = (int *)FUN_180677424();
    iVar2 = *piVar4;
  }
  else {
LAB_18068fbef:
    iVar2 = 0;
  }
  return iVar2;
}


/* address=18068fc04 name=FUN_18068fc04 */

undefined4 FUN_18068fc04(uint param_1,byte *param_2,uint param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint local_res8 [2];
  
  iVar6 = 0;
  *param_4 = '\0';
  if (-1 < *(char *)((&DAT_180993280)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48)) {
    return 0;
  }
  if ((param_3 & 0x74000) == 0) {
    local_res8[0] = 0;
    iVar1 = FUN_180690e04();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if ((local_res8[0] & 0x74000) == 0) {
      param_3 = param_3 | 0x4000;
    }
    else {
      param_3 = param_3 | local_res8[0] & 0x74000;
    }
  }
  uVar5 = param_3 & 0x74000;
  iVar1 = 2;
  if (uVar5 == 0x4000) {
    *param_4 = '\0';
  }
  else if ((uVar5 - 0x10000 & 0xffffbfff) == 0) {
    if ((param_3 & 0x301) == 0x301) goto LAB_18068fccb;
  }
  else if ((uVar5 - 0x20000 & 0xffffbfff) == 0) {
LAB_18068fccb:
    *param_4 = '\x02';
  }
  else if ((uVar5 - 0x40000 & 0xffffbfff) == 0) {
    *param_4 = '\x01';
  }
  if ((param_3 & 0x70000) == 0) {
    return 0;
  }
  if ((*param_2 & 0x40) != 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 4) & 0xc0000000;
  if (uVar5 == 0x40000000) {
LAB_18068fd0f:
    iVar2 = *(int *)(param_2 + 8);
    if ((iVar2 != 1) && (iVar2 != 2)) {
      if ((iVar2 == 3) || (iVar2 == 4)) {
        lVar3 = FUN_180677ed4(param_1,0,2);
        if (lVar3 != 0) {
          lVar3 = FUN_180677ed4(param_1,0,0);
          if (lVar3 == -1) goto LAB_18068fd78;
          if ((*(uint *)(param_2 + 4) & 0x80000000) == 0) {
            return 0;
          }
          goto LAB_18068fd8d;
        }
      }
      else if (iVar2 != 5) {
        return 0;
      }
    }
    if (*param_4 == '\x01') {
      iVar1 = 3;
      local_res8[0] = 0xbfbbef;
    }
    else {
      if (*param_4 != '\x02') {
        return 0;
      }
      local_res8[0] = 0xfeff;
    }
    while (iVar2 = FUN_18067a30c(param_1,(longlong)local_res8 + (longlong)iVar6,iVar1 - iVar6),
          iVar2 != -1) {
      iVar6 = iVar6 + iVar2;
      if (iVar1 <= iVar6) {
        return 0;
      }
    }
    goto LAB_18068fd78;
  }
  if (uVar5 != 0x80000000) {
    if (uVar5 != 0xc0000000) {
      return 0;
    }
    goto LAB_18068fd0f;
  }
LAB_18068fd8d:
  local_res8[0] = 0;
  iVar6 = FUN_1806784dc(param_1,local_res8,3);
  if (iVar6 == -1) goto LAB_18068fd78;
  if (iVar6 == 2) {
LAB_18068fdc6:
    if ((local_res8[0] & 0xffff) == 0xfffe) {
      puVar4 = (undefined4 *)FUN_180677424();
      *puVar4 = 0x16;
      goto LAB_18068fd78;
    }
    if ((local_res8[0] & 0xffff) == 0xfeff) {
      lVar3 = FUN_180677ed4(param_1,2,0);
      if (lVar3 != -1) {
        *param_4 = '\x02';
        return 0;
      }
      goto LAB_18068fd78;
    }
  }
  else if (iVar6 == 3) {
    if (local_res8[0] == 0xbfbbef) {
      *param_4 = '\x01';
      return 0;
    }
    goto LAB_18068fdc6;
  }
  lVar3 = FUN_180677ed4(param_1,0,0);
  if (lVar3 != -1) {
    return 0;
  }
LAB_18068fd78:
  puVar4 = (undefined4 *)FUN_180677424();
  return *puVar4;
}


/* address=18068fe84 name=__acrt_CompareStringW */

/* Library Function - Single Match
    __acrt_CompareStringW
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __acrt_CompareStringW
                    (undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                    undefined8 param_5,int param_6)

{
  ulonglong uVar1;
  
  if (0 < param_4) {
    param_4 = FUN_18067e070(param_3,(longlong)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_18067e070(param_5,(longlong)param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    uVar1 = (ulonglong)((param_4 - param_6 >> 0x1f & 0xfffffffeU) + 3);
    if (param_4 - param_6 == 0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = FUN_18067ff80(param_1,param_2,param_3,param_4,param_5,param_6,0,0,0);
  }
  return uVar1;
}


/* address=18068ff44 name=__acrt_CompareStringA */

/* Library Function - Single Match
    __acrt_CompareStringA
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_CompareStringA
               (__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,
               undefined8 param_4,undefined4 param_5,undefined8 param_6,undefined4 param_7,
               undefined4 param_8)

{
  longlong local_28;
  undefined local_20 [16];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_18068ffd0(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}


/* address=18068ffd0 name=FUN_18068ffd0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_18068ffd0(longlong *param_1,undefined8 param_2,undefined4 param_3,byte *param_4,int param_5
                  ,byte *param_6,int param_7,UINT param_8)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  BOOL BVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  byte *pbVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_88 [2];
  byte *local_80;
  undefined8 local_78;
  undefined local_70 [16];
  undefined4 local_60;
  ulonglong local_58;
  
  puVar16 = auStack_d8;
  puVar17 = auStack_d8;
  puVar18 = auStack_d8;
  local_58 = DAT_18093c100 ^ (ulonglong)local_88;
  local_80 = param_6;
  local_88[0] = param_3;
  local_78 = param_2;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_18069033b;
  }
  else {
    sVar10 = __strncnt((char *)param_4,(longlong)param_5);
    param_5 = (int)sVar10;
  }
  if (param_7 < 1) {
    puVar18 = auStack_d8;
    if (param_7 < -1) goto LAB_18069033b;
  }
  else {
    sVar10 = __strncnt((char *)param_6,(longlong)param_7);
    param_7 = (int)sVar10;
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    local_60._0_1_ = '\0';
    local_60._1_1_ = '\0';
    local_60._2_1_ = '\0';
    local_60._3_1_ = '\0';
    local_70 = ZEXT816(0);
    puVar18 = auStack_d8;
    if ((param_5 == param_7) ||
       (((puVar18 = auStack_d8, 1 < param_7 || (puVar18 = auStack_d8, 1 < param_5)) ||
        (BVar6 = GetCPInfo(param_8,(LPCPINFO)local_70), puVar18 = auStack_d8, BVar6 == 0))))
    goto LAB_18069033b;
    if (0 < param_5) {
      puVar18 = auStack_d8;
      if (1 < (uint)local_70._0_4_) {
        pbVar11 = local_70 + 6;
        bVar2 = local_70[6];
        while (((puVar18 = auStack_d8, bVar2 != 0 && (puVar18 = auStack_d8, pbVar11[1] != 0)) &&
               ((*param_4 < *pbVar11 || (puVar18 = auStack_d8, pbVar11[1] < *param_4))))) {
          pbVar11 = pbVar11 + 2;
          bVar2 = *pbVar11;
        }
      }
      goto LAB_18069033b;
    }
    if (0 < param_7) {
      puVar18 = auStack_d8;
      if (1 < (uint)local_70._0_4_) {
        pbVar11 = local_70 + 6;
        bVar2 = local_70[6];
        while (((puVar18 = auStack_d8, bVar2 != 0 && (puVar18 = auStack_d8, pbVar11[1] != 0)) &&
               ((*param_6 < *pbVar11 || (puVar18 = auStack_d8, pbVar11[1] < *param_6))))) {
          pbVar11 = pbVar11 + 2;
          bVar2 = *pbVar11;
        }
      }
      goto LAB_18069033b;
    }
  }
  local_b0 = 0;
  local_b8 = 0;
  iVar7 = FUN_180687344(param_8,9,param_4,param_5);
  puVar18 = auStack_d8;
  if ((iVar7 == 0) ||
     (uVar15 = (longlong)iVar7 * 2 + 0x10,
     uVar15 = -(ulonglong)((ulonglong)((longlong)iVar7 * 2) < uVar15) & uVar15, puVar18 = auStack_d8
     , uVar15 == 0)) goto LAB_18069033b;
  if (uVar15 < 0x401) {
    uVar12 = uVar15 + 0xf;
    if (uVar12 <= uVar15) {
      uVar12 = 0xffffffffffffff0;
    }
    lVar3 = -(uVar12 & 0xfffffffffffffff0);
    puVar16 = auStack_d8 + lVar3;
    puVar13 = (undefined4 *)((longlong)local_88 + lVar3);
    puVar18 = auStack_d8 + lVar3;
    if (puVar13 == (undefined4 *)0x0) goto LAB_18069033b;
    *puVar13 = 0xcccc;
LAB_1806901c4:
    puVar13 = puVar13 + 4;
    puVar17 = puVar16;
  }
  else {
    puVar13 = (undefined4 *)_malloc_base(uVar15);
    if (puVar13 != (undefined4 *)0x0) {
      *puVar13 = 0xdddd;
      goto LAB_1806901c4;
    }
  }
  puVar18 = puVar17;
  if (puVar13 == (undefined4 *)0x0) goto LAB_18069033b;
  *(int *)(puVar17 + 0x28) = iVar7;
  *(undefined4 **)(puVar17 + 0x20) = puVar13;
  *(undefined8 *)(puVar17 + -8) = 0x1806901ee;
  iVar8 = FUN_180687344(param_8,1,param_4,param_5);
  if (iVar8 == 0) {
LAB_180690328:
    iVar7 = puVar13[-4];
  }
  else {
    *(undefined4 *)(puVar17 + 0x28) = 0;
    *(undefined8 *)(puVar17 + 0x20) = 0;
    *(undefined8 *)(puVar17 + -8) = 0x180690214;
    iVar8 = FUN_180687344(param_8,9,param_6,param_7);
    if ((iVar8 == 0) ||
       (uVar15 = (longlong)iVar8 * 2 + 0x10,
       uVar15 = -(ulonglong)((ulonglong)((longlong)iVar8 * 2) < uVar15) & uVar15, uVar15 == 0))
    goto LAB_180690328;
    if (uVar15 < 0x401) {
      uVar12 = uVar15 + 0xf;
      if (uVar12 <= uVar15) {
        uVar12 = 0xffffffffffffff0;
      }
      *(undefined8 *)(puVar17 + -8) = 0x18069025d;
      lVar3 = -(uVar12 & 0xfffffffffffffff0);
      puVar18 = puVar17 + lVar3;
      puVar14 = (undefined4 *)(puVar17 + lVar3 + 0x50);
      if (puVar14 == (undefined4 *)0x0) goto LAB_180690328;
      *puVar14 = 0xcccc;
      puVar17 = puVar17 + lVar3;
LAB_180690289:
      puVar14 = puVar14 + 4;
      puVar18 = puVar17;
    }
    else {
      *(undefined8 *)(puVar17 + -8) = 0x18069027b;
      puVar14 = (undefined4 *)_malloc_base();
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = 0xdddd;
        goto LAB_180690289;
      }
    }
    pbVar11 = local_80;
    if (puVar14 == (undefined4 *)0x0) goto LAB_180690328;
    piVar1 = puVar14 + -4;
    *(int *)(puVar18 + 0x28) = iVar8;
    *(undefined4 **)(puVar18 + 0x20) = puVar14;
    *(undefined8 *)(puVar18 + -8) = 0x1806902b8;
    iVar9 = FUN_180687344(param_8,1,pbVar11,param_7);
    uVar4 = local_88[0];
    if (iVar9 != 0) {
      *(undefined8 *)(puVar18 + 0x40) = 0;
      *(undefined8 *)(puVar18 + 0x38) = 0;
      *(undefined8 *)(puVar18 + 0x30) = 0;
      uVar5 = local_78;
      *(int *)(puVar18 + 0x28) = iVar8;
      *(undefined4 **)(puVar18 + 0x20) = puVar14;
      *(undefined8 *)(puVar18 + -8) = 0x180690303;
      FUN_18067ff80(uVar5,uVar4,puVar13,iVar7);
      if (*piVar1 == 0xdddd) {
        *(undefined8 *)(puVar18 + -8) = 0x180690317;
        FUN_180681d50(piVar1);
      }
      if (puVar13[-4] == 0xdddd) {
        *(undefined8 *)(puVar18 + -8) = 0x180690324;
        FUN_180681d50();
      }
      goto LAB_18069033b;
    }
    if (*piVar1 == 0xdddd) {
      *(undefined8 *)(puVar18 + -8) = 0x1806902d0;
      FUN_180681d50(piVar1);
    }
    iVar7 = puVar13[-4];
  }
  if (iVar7 == 0xdddd) {
    *(undefined8 *)(puVar18 + -8) = 0x180690339;
    FUN_180681d50();
  }
LAB_18069033b:
  uVar15 = local_58 ^ (ulonglong)local_88;
  *(undefined8 *)(puVar18 + -8) = 0x180690347;
  FUN_18050ec30(uVar15);
  return;
}


/* address=180690580 name=__strncnt */

/* Library Function - Single Match
    __strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl __strncnt(char *_String,size_t _Cnt)

{
  char cVar1;
  size_t sVar2;
  
  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}


/* address=1806905a0 name=FUN_1806905a0 */

undefined8 FUN_1806905a0(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  param_3 = param_3 & 0xfff7ffff;
  if ((param_2 & param_3 & 0xfcf0fce0) != 0) {
    if (param_1 != (undefined4 *)0x0) {
      uVar1 = thunk_FUN_1806911c0(0,0);
      *param_1 = uVar1;
    }
    puVar2 = (undefined4 *)FUN_180677424();
    *puVar2 = 0x16;
    FUN_180681e64();
    return 0x16;
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = thunk_FUN_1806911c0(param_2,param_3);
    *param_1 = uVar1;
    return 0;
  }
  thunk_FUN_1806911c0(param_2,param_3);
  return 0;
}


/* address=180690610 name=FUN_180690610 */

undefined8 FUN_180690610(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18068e2a0();
  *param_1 = uVar1;
  uVar1 = FUN_18068e1c0();
  param_1[1] = uVar1;
  return 0;
}


/* address=180690630 name=FUN_180690630 */

bool FUN_180690630(int *param_1)

{
  int iVar1;
  undefined8 local_res8;
  
  FUN_18068e380(*param_1);
  FUN_18068e220(param_1[1]);
  local_res8 = 0;
  iVar1 = FUN_180690610(&local_res8);
  if ((iVar1 == 0) && (*param_1 == (int)local_res8)) {
    return param_1[1] != local_res8._4_4_;
  }
  return true;
}


/* address=1806906a0 name=FUN_1806906a0 */

undefined8 FUN_1806906a0(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  iVar2 = FUN_180690610(local_res10);
  uVar1 = local_res10[0];
  if (iVar2 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    iVar2 = FUN_180690630(local_res10);
    if (iVar2 == 0) {
      FUN_180691140();
      return 0;
    }
  }
  return 1;
}


/* address=180690700 name=FUN_180690700 */

double FUN_180690700(void)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  undefined in_XMM0 [16];
  undefined auVar5 [16];
  
  dVar4 = in_XMM0._0_8_;
  if (1 < DAT_1809683d8) {
    auVar5 = roundsd(in_XMM0,in_XMM0,10);
    return auVar5._0_8_;
  }
  dVar1 = (double)((ulonglong)dVar4 & 0x7fffffffffffffff);
  uVar3 = (ulonglong)dVar1 >> 0x34;
  dVar2 = dVar4;
  if (uVar3 < 0x433) {
    if (uVar3 < 0x3ff) {
      if ((in_XMM0 & (undefined  [16])0x7fffffffffffffff) != (undefined  [16])0x0) {
        if (dVar4 != dVar1) {
          return -0.0;
        }
        return DAT_1806da4a8;
      }
    }
    else {
      dVar2 = (double)(~((1L << (0x33U - (char)uVar3 & 0x3f)) - 1U) & (ulonglong)dVar4);
      if ((dVar4 == dVar1) && (dVar2 != dVar4)) {
        dVar2 = dVar2 + DAT_1806da4a8;
      }
    }
  }
  else if (0x7ff0000000000000 < (ulonglong)dVar1) {
    dVar4 = (double)FUN_180691570();
    return dVar4;
  }
  return dVar2;
}


/* address=1806907d0 name=log10 */

/* WARNING: Removing unreachable block (ram,0x000180690b0d) */
/* WARNING: Removing unreachable block (ram,0x000180690cb9) */
/* WARNING: Removing unreachable block (ram,0x000180690b2b) */
/* WARNING: Removing unreachable block (ram,0x000180690b5f) */
/* WARNING: Removing unreachable block (ram,0x000180690aff) */
/* WARNING: Removing unreachable block (ram,0x000180690cf0) */
/* WARNING: Removing unreachable block (ram,0x000180690cf2) */
/* WARNING: Removing unreachable block (ram,0x000180690c10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    log10
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

double __cdecl log10(double _X)

{
  undefined auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 in_RDX;
  undefined auVar5 [16];
  double dVar4;
  undefined in_register_00001208 [24];
  undefined auVar6 [32];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined auVar11 [16];
  double dVar12;
  
  auVar6._8_24_ = in_register_00001208;
  auVar6._0_8_ = _X;
  auVar5 = auVar6._0_16_;
  if (DAT_180993850 != 0) {
    auVar11 = vpsrlq_avx(auVar5,0x34);
    dVar12 = (double)vmovq_avx(auVar5);
    auVar1._8_8_ = _UNK_1807c4788;
    auVar1._0_8_ = _DAT_1807c4780;
    auVar1 = vpsubq_avx(auVar11,auVar1);
    vcvtdq2pd_avx(auVar1);
    auVar11._8_8_ = _UNK_1807c4758;
    auVar11._0_8_ = DAT_1807c4750;
    vpand_avx(auVar5,auVar11);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = DAT_1807c4750;
    vcomisd_avx(auVar5);
    if (dVar12 != DAT_1807c4750) {
      if (dVar12 == DAT_1807c4740) {
        dVar12 = (double)_log10_special(_X,in_RDX,DAT_1807c4984,auVar1._0_8_);
        return dVar12;
      }
      _X = (double)_log10_special(_X,in_RDX,DAT_1807c4988,auVar1._0_8_);
    }
    return _X;
  }
  if ((double)((ulonglong)_X & (ulonglong)DAT_1807c4750) == DAT_1807c4750) {
    if (_X == DAT_1807c4750) {
      return _X;
    }
    if (_X != DAT_1807c4740) {
      return (double)((ulonglong)_X | _DAT_1807c4770);
    }
  }
  else {
    dVar12 = (double)(int)(((ulonglong)_X >> 0x34) - _DAT_1807c4780);
    if (0.0 < _X) {
      dVar4 = _X;
      dVar7 = (double)((ulonglong)_X & _DAT_1807c47a0);
      if (dVar12 == DAT_1807c48c0) {
        dVar12 = (double)((ulonglong)_X & _DAT_1807c47a0 | (ulonglong)DAT_1807c4830) - DAT_1807c4830
        ;
        dVar4 = (double)((ulonglong)dVar12 & _DAT_1807c47a0);
        dVar12 = (double)((uint)((ulonglong)dVar12 >> 0x34) - _DAT_1807c48d0);
        dVar7 = dVar4;
      }
      uVar2 = ((ulonglong)dVar4 & _DAT_1807c47b0) + ((ulonglong)dVar4 & _DAT_1807c47c0) * 2;
      if (DAT_1807c48e0 <= (double)((ulonglong)(_X - DAT_1807c4830) & _DAT_1807c4920)) {
        uVar3 = uVar2 >> 0x2c;
        dVar7 = ((double)(uVar2 | SUB168(_DAT_1807c4840,0)) -
                (double)((ulonglong)dVar7 | SUB168(_DAT_1807c4840,0))) *
                *(double *)(&DAT_1807c59f0 + uVar3 * 8);
        dVar4 = dVar7 * dVar7;
        return *(double *)(&DAT_1807c49d0 + uVar3 * 8) + DAT_1807c4800 * dVar12 +
               *(double *)(&DAT_1807c51e0 + uVar3 * 8) +
               (DAT_1807c4810 * dVar12 -
               ((DAT_1807c4880 * dVar7 + _DAT_1807c4870) * dVar4 + dVar7 +
               ((DAT_1807c48b0 * dVar7 + DAT_1807c48a0) * dVar7 + DAT_1807c4890) * dVar4 * dVar4) *
               DAT_1807c47d0);
      }
      dVar12 = _X - DAT_1807c4830;
      dVar4 = dVar12 / (DAT_1807c4820 + dVar12);
      dVar7 = dVar4 + dVar4;
      dVar8 = dVar7 * dVar7;
      dVar9 = dVar8 * dVar7;
      dVar10 = (double)((ulonglong)dVar12 & SUB168(_DAT_1807c4970,0));
      dVar12 = (((DAT_1807c4940 * dVar8 + DAT_1807c4930) * dVar9 +
                (DAT_1807c4960 * dVar8 + DAT_1807c4950) * dVar9 * dVar9 * dVar7) - dVar12 * dVar4) +
               (dVar12 - dVar10);
      return dVar10 * DAT_1807c47f0 + dVar12 * DAT_1807c47f0 + dVar12 * DAT_1807c47e0 +
             dVar10 * DAT_1807c47e0;
    }
    if (_X == 0.0) {
      dVar12 = (double)_log10_special(_X,in_RDX,DAT_1807c4980);
      return dVar12;
    }
  }
  dVar12 = (double)_log10_special(_X,in_RDX,DAT_1807c4984);
  return dVar12;
}


/* address=180690d7c name=__acrt_LCMapStringW */

/* Library Function - Single Match
    __acrt_LCMapStringW
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_LCMapStringW(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                        undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (0 < param_4) {
    iVar1 = FUN_18067e070(param_3,(longlong)param_4);
    iVar2 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  FUN_1806800d4(param_1,param_2,param_3,iVar2,param_5,param_6,0,0,0);
  return;
}


/* address=180690e04 name=FUN_180690e04 */

undefined8 FUN_180690e04(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = 0x16;
    FUN_180681e64();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_1809938b4;
    uVar2 = 0;
  }
  return uVar2;
}


/* address=180690e34 name=FUN_180690e34 */

undefined8 FUN_180690e34(uint param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_1 >> 6;
  uVar4 = (ulonglong)(param_1 & 0x3f);
  lVar3 = (&DAT_180993280)[lVar6];
  bVar2 = *(byte *)(lVar3 + 0x38 + uVar4 * 0x48);
  cVar1 = *(char *)(lVar3 + 0x39 + uVar4 * 0x48);
  if (param_2 == 0x4000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar2 | 0x80;
    *(undefined *)((&DAT_180993280)[lVar6] + 0x39 + uVar4 * 0x48) = 0;
  }
  else if (param_2 == 0x8000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar2 & 0x7f;
  }
  else if ((param_2 - 0x10000U & 0xfffeffff) == 0) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar2 | 0x80;
    *(undefined *)((&DAT_180993280)[lVar6] + 0x39 + uVar4 * 0x48) = 2;
  }
  else if (param_2 == 0x40000) {
    *(byte *)(lVar3 + 0x38 + uVar4 * 0x48) = bVar2 | 0x80;
    *(undefined *)((&DAT_180993280)[lVar6] + 0x39 + uVar4 * 0x48) = 1;
  }
  if ((bVar2 & 0x80) == 0) {
    uVar5 = 0x8000;
  }
  else if (cVar1 == '\0') {
    uVar5 = 0x4000;
  }
  else {
    uVar5 = 0x10000;
    if (cVar1 == '\x01') {
      uVar5 = 0x40000;
    }
  }
  return uVar5;
}


/* address=180690f18 name=FUN_180690f18 */

undefined4 FUN_180690f18(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_180993748 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_DAT_18098e888._0_4_;
    uStack_2c = PTR_PTR_DAT_18098e888._4_4_;
    uStack_28 = PTR_DAT_18098e890._0_4_;
    uStack_24 = PTR_DAT_18098e890._4_4_;
    param_1 = PTR_PTR_DAT_18098e888._0_4_;
  }
  uVar1 = FUN_180690fb0(param_1,param_2,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18066b780(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18066b780(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}


/* address=180690fb0 name=FUN_180690fb0 */

undefined4 FUN_180690fb0(ulonglong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  HANDLE hFile;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = param_1 & 0xffffffff;
  lVar5 = FUN_180677ed4(param_1,0,1);
  lVar6 = FUN_180677ed4(uVar10,0,2);
  uVar7 = param_2 - lVar6;
  if ((lVar5 == -1) || (lVar6 == -1)) {
    if (*(char *)(param_3 + 0x30) == '\0') {
      uVar1 = 0x16;
      goto LAB_18069110f;
    }
  }
  else {
    uVar8 = 0;
    if (0 < (longlong)uVar7) {
      lVar6 = _calloc_base(0x1000,1);
      if (lVar6 == 0) {
        uVar8 = 0xc;
        *(undefined *)(param_3 + 0x30) = 1;
        *(undefined4 *)(param_3 + 0x2c) = 0xc;
      }
      else {
        uVar1 = FUN_180690e34(param_1 & 0xffffffff,0x8000);
        do {
          uVar9 = uVar7 & 0xffffffff;
          if (0xfff < (longlong)uVar7) {
            uVar9 = 0x1000;
          }
          iVar2 = FUN_18067a3a4(uVar10,lVar6,uVar9,param_3);
          if (iVar2 == -1) {
            if ((*(char *)(param_3 + 0x38) != '\0') && (*(int *)(param_3 + 0x34) == 5)) {
              *(undefined *)(param_3 + 0x30) = 1;
              *(undefined4 *)(param_3 + 0x2c) = 0xd;
            }
            if (*(char *)(param_3 + 0x30) != '\0') {
              uVar8 = *(undefined4 *)(param_3 + 0x2c);
            }
            goto LAB_1806910a1;
          }
          uVar7 = uVar7 - (longlong)iVar2;
        } while (0 < (longlong)uVar7);
        FUN_180690e34(uVar10,uVar1);
      }
LAB_1806910a1:
      FUN_180681d50(lVar6);
      uVar1 = uVar8;
      goto LAB_18069110f;
    }
    uVar1 = 0;
    if (-1 < (longlong)uVar7) goto LAB_18069110f;
    lVar6 = FUN_180677ed4(param_1 & 0xffffffff,param_2,0);
    uVar1 = uVar8;
    if (lVar6 != -1) {
      hFile = (HANDLE)FUN_1806853e0(param_1 & 0xffffffff);
      BVar3 = SetEndOfFile(hFile);
      if (BVar3 == 0) {
        DVar4 = GetLastError();
        *(undefined *)(param_3 + 0x38) = 1;
        uVar1 = 0xd;
        *(DWORD *)(param_3 + 0x34) = DVar4;
        *(undefined *)(param_3 + 0x30) = 1;
        *(undefined4 *)(param_3 + 0x2c) = 0xd;
      }
      goto LAB_18069110f;
    }
    if (*(char *)(param_3 + 0x30) == '\0') goto LAB_18069110f;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x2c);
LAB_18069110f:
  FUN_180677ed4(uVar10,lVar5,0);
  return uVar1;
}


/* address=180691140 name=FUN_180691140 */

uint FUN_180691140(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_1806917e0();
  if ((uVar2 & 0x3f) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (uVar2 & 1) << 4;
    uVar3 = uVar4 | 8;
    if ((uVar2 & 4) == 0) {
      uVar3 = uVar4;
    }
    uVar4 = uVar3 | 4;
    if ((uVar2 & 8) == 0) {
      uVar4 = uVar3;
    }
    uVar1 = uVar4 | 2;
    if ((uVar2 & 0x10) == 0) {
      uVar1 = uVar4;
    }
    uVar3 = uVar1 | 1;
    if ((uVar2 & 0x20) == 0) {
      uVar3 = uVar1;
    }
    if ((uVar2 & 2) != 0) {
      return uVar3 | 0x80000;
    }
  }
  return uVar3;
}


/* address=1806911b0 name=thunk_FUN_1806911c0 */

uint thunk_FUN_1806911c0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = FUN_1806917c0();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar1 & 0x300;
    if (uVar4 != 0) {
      if (uVar4 == 0x100) {
        uVar3 = (ulonglong)(uVar2 | 0x2000);
      }
      else if (uVar4 == 0x200) {
        uVar3 = (ulonglong)(uVar2 | 0x4000);
      }
      else if (uVar4 == 0x300) {
        uVar3 = (ulonglong)(uVar2 | 0x6000);
      }
    }
    uVar1 = uVar1 & 0x3000000;
    uVar2 = (uint)uVar3;
    if (uVar1 == 0x1000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8040);
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = (ulonglong)(uVar2 | 0x40);
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8000);
    }
    if ((DAT_18098eb30 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar3 = (ulonglong)((uint)uVar3 & 0xffffffbf);
      FUN_1806917d0(uVar3);
    }
    else {
      FUN_1806917d0(uVar3);
    }
    uVar4 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 3) & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar4 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar4 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar4 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar4 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar4 & 0x6000;
    if ((uVar3 & 0x6000) != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar4 = uVar4 & 0x8040;
    if (uVar4 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar4 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar4 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}


/* address=1806911c0 name=FUN_1806911c0 */

uint FUN_1806911c0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar1 = FUN_1806917c0();
  uVar4 = uVar1 >> 3 & 0x10;
  uVar2 = uVar4 | 8;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 4;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 2;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar2 | 1;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar2 = uVar4 | 0x80000;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar2 = uVar4;
  }
  uVar4 = uVar1 & 0x6000;
  if (uVar4 != 0) {
    if (uVar4 == 0x2000) {
      uVar2 = uVar2 | 0x100;
    }
    else if (uVar4 == 0x4000) {
      uVar2 = uVar2 | 0x200;
    }
    else if (uVar4 == 0x6000) {
      uVar2 = uVar2 | 0x300;
    }
  }
  uVar1 = uVar1 & 0x8040;
  if (uVar1 == 0x40) {
    uVar2 = uVar2 | 0x2000000;
  }
  else if (uVar1 == 0x8000) {
    uVar2 = uVar2 | 0x3000000;
  }
  else if (uVar1 == 0x8040) {
    uVar2 = uVar2 | 0x1000000;
  }
  uVar1 = ~(param_2 & 0x308031f) & uVar2 | param_1 & param_2 & 0x308031f;
  if (uVar1 != uVar2) {
    uVar4 = (uVar1 & 0x10) << 3;
    uVar2 = uVar4 | 0x200;
    if ((uVar1 & 8) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x400;
    if ((uVar1 & 4) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x800;
    if ((uVar1 & 2) == 0) {
      uVar2 = uVar4;
    }
    uVar4 = uVar2 | 0x1000;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 | 0x100;
    if ((uVar1 >> 0x13 & 1) == 0) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar1 & 0x300;
    if (uVar4 != 0) {
      if (uVar4 == 0x100) {
        uVar3 = (ulonglong)(uVar2 | 0x2000);
      }
      else if (uVar4 == 0x200) {
        uVar3 = (ulonglong)(uVar2 | 0x4000);
      }
      else if (uVar4 == 0x300) {
        uVar3 = (ulonglong)(uVar2 | 0x6000);
      }
    }
    uVar1 = uVar1 & 0x3000000;
    uVar2 = (uint)uVar3;
    if (uVar1 == 0x1000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8040);
    }
    else if (uVar1 == 0x2000000) {
      uVar3 = (ulonglong)(uVar2 | 0x40);
    }
    else if (uVar1 == 0x3000000) {
      uVar3 = (ulonglong)(uVar2 | 0x8000);
    }
    if ((DAT_18098eb30 == '\0') || ((uVar3 & 0x40) == 0)) {
      uVar3 = (ulonglong)((uint)uVar3 & 0xffffffbf);
      FUN_1806917d0(uVar3);
    }
    else {
      FUN_1806917d0(uVar3);
    }
    uVar4 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 3) & 0x10;
    uVar2 = uVar1 | 8;
    if ((uVar4 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 4;
    if ((uVar4 >> 10 & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 2;
    if ((uVar4 >> 0xb & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar2 | 1;
    if ((uVar4 >> 0xc & 1) == 0) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000;
    if ((uVar4 >> 8 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar1 = uVar4 & 0x6000;
    if ((uVar3 & 0x6000) != 0) {
      if (uVar1 == 0x2000) {
        uVar2 = uVar2 | 0x100;
      }
      else if (uVar1 == 0x4000) {
        uVar2 = uVar2 | 0x200;
      }
      else if (uVar1 == 0x6000) {
        uVar2 = uVar2 | 0x300;
      }
    }
    uVar4 = uVar4 & 0x8040;
    if (uVar4 == 0x40) {
      uVar2 = uVar2 | 0x2000000;
    }
    else {
      if (uVar4 == 0x8000) {
        return uVar2 | 0x3000000;
      }
      if (uVar4 == 0x8040) {
        return uVar2 | 0x1000000;
      }
    }
  }
  return uVar2;
}


/* address=180691460 name=FUN_180691460 */

uint FUN_180691460(uint param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = param_1 & 0x1f;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_1806917c0();
    *param_2 = uVar1;
    if (((param_1 & 8) == 0) || (-1 < (char)uVar1)) {
      if (((param_1 & 4) == 0) || ((uVar1 >> 9 & 1) == 0)) {
        if (((param_1 & 1) == 0) || ((uVar1 >> 10 & 1) == 0)) {
          if (((param_1 & 2) != 0) && ((uVar1 >> 0xb & 1) != 0)) {
            uVar2 = param_1 & 0x1d;
            uVar3 = (ulonglong)(param_1 & 0x10);
          }
        }
        else {
          uVar3 = 8;
          uVar2 = param_1 & 0x1e;
        }
      }
      else {
        uVar3 = 4;
        uVar2 = param_1 & 0x1b;
      }
    }
    else {
      uVar3 = 1;
      uVar2 = param_1 & 0x17;
    }
    if (((param_1 & 0x10) != 0) && ((uVar1 >> 0xc & 1) != 0)) {
      uVar3 = uVar3 | 0x20;
      uVar2 = uVar2 & 0xffffffef;
    }
    if (uVar2 != 0) {
      FUN_180691800(0x1f80,0xffc0);
    }
    if ((uVar3 != 0) && ((uVar3 & ~uVar1) != 0)) {
      if (uVar2 == 0) {
        FUN_1806917d0(uVar1 | uVar3);
      }
      else {
        FUN_180691890(uVar3);
      }
    }
  }
  return uVar2;
}


/* address=180691570 name=FUN_180691570 */

ulonglong FUN_180691570(ulonglong param_1)

{
  return param_1 | 0x8000000000000;
}


/* address=180691590 name=FUN_180691590 */

void FUN_180691590(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
                  int param_9)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_18093c100 ^ (ulonglong)auStack_128;
  local_f0 = 0;
  local_f8 = param_3;
  iVar3 = FUN_180691460(param_5,&local_f0);
  uVar1 = param_8;
  if (iVar3 != 0) {
    local_b8 = ZEXT816(0);
    local_a8 = ZEXT816(0);
    local_98 = ZEXT816(0);
    local_88 = ZEXT816(0);
    local_78 = ZEXT816(0);
    local_68 = ZEXT816(0);
    local_58 = ZEXT816(0);
    if (param_9 == 2) {
      local_88._8_8_ = 0;
      local_88._0_8_ = param_8;
      local_78._0_4_ = 3;
    }
    local_100 = &local_f8;
    local_108 = &param_7;
    FUN_1806918f0(local_b8,&local_f0,param_5,param_2);
  }
  cVar2 = FUN_180682650();
  if ((cVar2 == '\0') || (param_4 == 0)) {
    FUN_1806918b0(param_4);
    uVar4 = (undefined4)local_f8;
  }
  else {
    local_d8 = param_7;
    local_c8 = local_f8;
    local_e4 = 0;
    local_d0 = uVar1;
    local_e8 = param_4;
    local_e0 = param_1;
    iVar3 = FUN_180682670(&local_e8);
    if (iVar3 == 0) {
      FUN_1806918b0(param_4);
    }
    uVar4 = (undefined4)local_c8;
  }
  FUN_18050ec30(uVar4);
  return;
}


/* address=1806916e0 name=FUN_1806916e0 */

undefined4
FUN_1806916e0(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 == 1) {
    uVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return (int)param_2;
    }
    uVar1 = 1;
    uVar3 = 0x21;
    uVar2 = 8;
  }
  FUN_180691590(param_5,param_4,param_2,uVar1,uVar2,uVar3,param_1,0,1);
  return (int)param_2;
}


/* address=180691780 name=_log10_special */

/* Library Function - Single Match
    _log10_special
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void _log10_special(void)

{
  FUN_1806916e0();
  return;
}


/* address=1806917c0 name=FUN_1806917c0 */

undefined4 FUN_1806917c0(void)

{
  return MXCSR;
}


/* address=1806917d0 name=FUN_1806917d0 */

void FUN_1806917d0(undefined4 param_1)

{
  MXCSR = param_1;
  return;
}


/* address=1806917e0 name=FUN_1806917e0 */

uint FUN_1806917e0(void)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}


/* address=180691800 name=FUN_180691800 */

uint FUN_180691800(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = (~param_2 | 0xffff807f) & MXCSR | param_1 & param_2;
  if ((DAT_18098eb40 != '\0') && ((MXCSR & 0x40) != 0)) {
    return uVar1;
  }
  MXCSR = MXCSR & 0xffffffbf;
  return uVar1;
}


/* address=180691880 name=FUN_180691880 */

uint FUN_180691880(void)

{
  return MXCSR & 0x3f;
}


/* address=180691890 name=FUN_180691890 */

void FUN_180691890(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}


/* address=1806918b0 name=FUN_1806918b0 */

void FUN_1806918b0(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = 0x21;
  }
  else if ((param_1 == 2) || (param_1 == 3)) {
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = 0x22;
    return;
  }
  return;
}


/* address=1806918f0 name=FUN_1806918f0 */

void FUN_1806918f0(void)

{
  FUN_180691920();
  return;
}


/* address=180691920 name=FUN_180691920 */

void FUN_180691920(uint *param_1,ulonglong *param_2,ulonglong param_3,int param_4,
                  undefined8 *param_5,undefined8 *param_6,int param_7)

{
  uint uVar1;
  ulonglong uVar2;
  DWORD dwExceptionCode;
  uint *local_res8;
  
  dwExceptionCode = 0xc000000d;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) != 0) {
    dwExceptionCode = 0xc000008f;
    param_1[1] = param_1[1] | 1;
  }
  if ((param_3 & 2) != 0) {
    dwExceptionCode = 0xc0000093;
    param_1[1] = param_1[1] | 2;
  }
  if ((param_3 & 1) != 0) {
    dwExceptionCode = 0xc0000091;
    param_1[1] = param_1[1] | 4;
  }
  if ((param_3 & 4) != 0) {
    dwExceptionCode = 0xc000008e;
    param_1[1] = param_1[1] | 8;
  }
  if ((param_3 & 8) != 0) {
    dwExceptionCode = 0xc0000090;
    param_1[1] = param_1[1] | 0x10;
  }
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 7) << 4) ^ param_1[2]) & 0x10;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 9) << 3) ^ param_1[2]) & 8;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 10) << 2) ^ param_1[2]) & 4;
  param_1[2] = param_1[2] ^ (~((int)(*param_2 >> 0xb) * 2) ^ param_1[2]) & 2;
  param_1[2] = param_1[2] ^ (~(*(uint *)param_2 >> 0xc) ^ param_1[2]) & 1;
  local_res8 = param_1;
  uVar2 = FUN_180691880();
  if ((uVar2 & 1) != 0) {
    local_res8[3] = local_res8[3] | 0x10;
  }
  if ((uVar2 & 4) != 0) {
    local_res8[3] = local_res8[3] | 8;
  }
  if ((uVar2 & 8) != 0) {
    local_res8[3] = local_res8[3] | 4;
  }
  if ((uVar2 & 0x10) != 0) {
    local_res8[3] = local_res8[3] | 2;
  }
  if ((uVar2 & 0x20) != 0) {
    local_res8[3] = local_res8[3] | 1;
  }
  uVar1 = *(uint *)param_2 & 0x6000;
  if (uVar1 == 0) {
    *local_res8 = *local_res8 & 0xfffffffc;
  }
  else if (uVar1 == 0x2000) {
    *local_res8 = *local_res8 & 0xfffffffd;
    *local_res8 = *local_res8 | 1;
  }
  else if (uVar1 == 0x4000) {
    *local_res8 = *local_res8 & 0xfffffffe;
    *local_res8 = *local_res8 | 2;
  }
  else if (uVar1 == 0x6000) {
    *local_res8 = *local_res8 | 3;
  }
  *local_res8 = *local_res8 ^ (param_4 << 5 ^ *local_res8) & 0x1ffe0;
  local_res8[8] = local_res8[8] | 1;
  if (param_7 == 0) {
    local_res8[8] = local_res8[8] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 4) = *param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe3 | 2;
    *(undefined8 *)(local_res8 + 0x14) = *param_6;
  }
  else {
    local_res8[8] = local_res8[8] & 0xffffffe1;
    local_res8[4] = *(uint *)param_5;
    local_res8[0x18] = local_res8[0x18] | 1;
    local_res8[0x18] = local_res8[0x18] & 0xffffffe1;
    local_res8[0x14] = *(uint *)param_6;
  }
  FUN_1806917e0();
  RaiseException(dwExceptionCode,0,1,(ULONG_PTR *)&local_res8);
  if ((*(byte *)(local_res8 + 2) & 0x10) != 0) {
    *param_2 = *param_2 & 0xffffffffffffff7f;
  }
  if ((*(byte *)(local_res8 + 2) & 8) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffdff;
  }
  if ((*(byte *)(local_res8 + 2) & 4) != 0) {
    *param_2 = *param_2 & 0xfffffffffffffbff;
  }
  if ((*(byte *)(local_res8 + 2) & 2) != 0) {
    *param_2 = *param_2 & 0xfffffffffffff7ff;
  }
  if ((*(byte *)(local_res8 + 2) & 1) != 0) {
    *param_2 = *param_2 & 0xffffffffffffefff;
  }
  uVar1 = *local_res8 & 3;
  if (uVar1 == 0) {
    *param_2 = *param_2 & 0xffffffffffff9fff;
  }
  else if (uVar1 == 1) {
    *param_2 = *param_2 & 0xffffffffffffbfff;
    *param_2 = *param_2 | 0x2000;
  }
  else if (uVar1 == 2) {
    *param_2 = *param_2 & 0xffffffffffffdfff;
    *param_2 = *param_2 | 0x4000;
  }
  else if (uVar1 == 3) {
    *param_2 = *param_2 | 0x6000;
  }
  if (param_7 == 0) {
    *param_6 = *(undefined8 *)(local_res8 + 0x14);
  }
  else {
    *(uint *)param_6 = local_res8[0x14];
  }
  return;
}


/* address=180691c40 name=_guard_dispatch_icall */

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180691c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* address=180691c80 name=_guard_dispatch_icall */

/* WARNING: This is an inlined function */
/* WARNING: Switch with 1 destination removed at 0x000180691c80 */

void _guard_dispatch_icall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000180691c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* address=180691ca0 name=FUN_180691ca0 */

/* WARNING: Type propagation algorithm not settling */

char * FUN_180691ca0(char *param_1,byte param_2,undefined *param_3)

{
  ushort uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  iVar5 = (uint)param_2 * 0x1010101;
  pcVar2 = (char *)0x0;
  cVar4 = (char)iVar5;
  pcVar3 = param_1;
  if (&DAT_0000001f < param_3) {
    if (((ulonglong)param_1 & 0xf) != 0) {
      pcVar2 = (char *)((ulonglong)((uint)param_1 & 0xf) - 0x10);
      param_3 = param_3 + (longlong)pcVar2;
      param_1 = param_1 + -(longlong)pcVar2;
      do {
        pcVar3 = param_1;
        if (cVar4 == param_1[(longlong)pcVar2]) goto LAB_180691d2c;
        pcVar2 = pcVar2 + 1;
      } while (pcVar2 != (char *)0x0);
      if (param_3 < &DAT_00000020) goto joined_r0x000180691d1c;
    }
    do {
      auVar9[0] = -(*param_1 == cVar4);
      cVar6 = (char)((uint)iVar5 >> 8);
      auVar9[1] = -(param_1[1] == cVar6);
      cVar7 = (char)((uint)iVar5 >> 0x10);
      auVar9[2] = -(param_1[2] == cVar7);
      cVar8 = (char)((uint)iVar5 >> 0x18);
      auVar9[3] = -(param_1[3] == cVar8);
      auVar9[4] = -(param_1[4] == cVar4);
      auVar9[5] = -(param_1[5] == cVar6);
      auVar9[6] = -(param_1[6] == cVar7);
      auVar9[7] = -(param_1[7] == cVar8);
      auVar9[8] = -(param_1[8] == cVar4);
      auVar9[9] = -(param_1[9] == cVar6);
      auVar9[10] = -(param_1[10] == cVar7);
      auVar9[11] = -(param_1[0xb] == cVar8);
      auVar9[12] = -(param_1[0xc] == cVar4);
      auVar9[13] = -(param_1[0xd] == cVar6);
      auVar9[14] = -(param_1[0xe] == cVar7);
      auVar9[15] = -(param_1[0xf] == cVar8);
      uVar1 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[15] >> 7) << 0xf;
      pcVar2 = (char *)0x0;
      if (uVar1 != 0) {
        for (; (uVar1 >> (longlong)pcVar2 & 1) == 0; pcVar2 = pcVar2 + 1) {
        }
      }
      pcVar3 = param_1;
      if (uVar1 != 0) goto LAB_180691d2c;
      pcVar3 = param_1 + 0x10;
      auVar10[0] = -(param_1[0x10] == cVar4);
      auVar10[1] = -(param_1[0x11] == cVar6);
      auVar10[2] = -(param_1[0x12] == cVar7);
      auVar10[3] = -(param_1[0x13] == cVar8);
      auVar10[4] = -(param_1[0x14] == cVar4);
      auVar10[5] = -(param_1[0x15] == cVar6);
      auVar10[6] = -(param_1[0x16] == cVar7);
      auVar10[7] = -(param_1[0x17] == cVar8);
      auVar10[8] = -(param_1[0x18] == cVar4);
      auVar10[9] = -(param_1[0x19] == cVar6);
      auVar10[10] = -(param_1[0x1a] == cVar7);
      auVar10[11] = -(param_1[0x1b] == cVar8);
      auVar10[12] = -(param_1[0x1c] == cVar4);
      auVar10[13] = -(param_1[0x1d] == cVar6);
      auVar10[14] = -(param_1[0x1e] == cVar7);
      auVar10[15] = -(param_1[0x1f] == cVar8);
      uVar1 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[15] >> 7) << 0xf;
      pcVar2 = (char *)0x0;
      if (uVar1 != 0) {
        for (; (uVar1 >> (longlong)pcVar2 & 1) == 0; pcVar2 = pcVar2 + 1) {
        }
      }
      if (uVar1 != 0) goto LAB_180691d2c;
      param_1 = param_1 + 0x20;
      param_3 = param_3 + -0x20;
      pcVar3 = param_1;
    } while (&DAT_0000001f < param_3);
  }
joined_r0x000180691d1c:
  while( true ) {
    if (param_3 == (undefined *)0x0) {
      return pcVar2;
    }
    if (cVar4 == *pcVar3) break;
    param_3 = param_3 + -1;
    pcVar3 = pcVar3 + 1;
  }
LAB_180691d2c:
  return pcVar2 + (longlong)pcVar3;
}


/* address=180691d40 name=memcmp */

/* Library Function - Single Match
    memcmp
   
   Library: Visual Studio */

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar3 = (longlong)_Buf2 - (longlong)_Buf1;
  if (7 < _Size) {
    uVar4 = (ulonglong)_Buf1 & 7;
    while (uVar4 != 0) {
                    /* WARNING: Load size is inaccurate */
      bVar5 = *_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
      if (*_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) goto LAB_180691d83;
      _Buf1 = (void *)((longlong)_Buf1 + 1);
      _Size = _Size - 1;
      uVar4 = (ulonglong)_Buf1 & 7;
    }
    if (_Size >> 3 != 0) {
      uVar4 = _Size >> 5;
      if (uVar4 != 0) {
        do {
                    /* WARNING: Load size is inaccurate */
          uVar2 = *_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) goto LAB_180691df4;
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 8);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 8)) {
LAB_180691df0:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180691df4;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x10);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x10)) {
LAB_180691dec:
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180691df0;
          }
          uVar2 = *(ulonglong *)((longlong)_Buf1 + 0x18);
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3 + 0x18)) {
            _Buf1 = (void *)((longlong)_Buf1 + 8);
            goto LAB_180691dec;
          }
          _Buf1 = (void *)((longlong)_Buf1 + 0x20);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 0x1f;
      }
      uVar4 = _Size >> 3;
      if (uVar4 != 0) {
        do {
                    /* WARNING: Load size is inaccurate */
          uVar2 = *_Buf1;
          if (uVar2 != *(ulonglong *)((longlong)_Buf1 + lVar3)) {
LAB_180691df4:
            uVar4 = *(ulonglong *)(lVar3 + (longlong)_Buf1);
            uVar1 = (uint)((uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 |
                            (uVar2 & 0xff0000000000) >> 0x18 | (uVar2 & 0xff00000000) >> 8 |
                            (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
                            (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38) <
                          (uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                           (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                           (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                           (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38));
            return (1 - uVar1) - (uint)(uVar1 != 0);
          }
          _Buf1 = (void *)((longlong)_Buf1 + 8);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
        _Size = _Size & 7;
      }
    }
  }
  while( true ) {
    if (_Size == 0) {
      return 0;
    }
                    /* WARNING: Load size is inaccurate */
    bVar5 = *_Buf1 < *(byte *)((longlong)_Buf1 + lVar3);
    if (*_Buf1 != *(byte *)((longlong)_Buf1 + lVar3)) break;
    _Buf1 = (void *)((longlong)_Buf1 + 1);
    _Size = _Size - 1;
  }
LAB_180691d83:
  return (1 - (uint)bVar5) - (uint)(bVar5 != 0);
}


/* address=180691e40 name=FUN_180691e40 */

void FUN_180691e40(undefined (*param_1) [32],undefined (*param_2) [32],ulonglong param_3)

{
  undefined4 *puVar1;
  undefined uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined (*pauVar15) [32];
  undefined (*pauVar16) [32];
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined (*pauVar19) [32];
  undefined4 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined auVar25 [32];
  undefined auVar29 [32];
  undefined auVar30 [32];
  undefined auVar31 [32];
  undefined auVar32 [32];
  undefined auVar33 [32];
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    (*param_1)[0] = (*param_2)[0];
    return;
  case 2:
    *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
    return;
  case 3:
    uVar2 = (*param_2)[2];
    *(undefined2 *)*param_1 = *(undefined2 *)*param_2;
    (*param_1)[2] = uVar2;
    return;
  case 4:
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    return;
  case 5:
    uVar2 = (*param_2)[4];
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    (*param_1)[4] = uVar2;
    return;
  case 6:
    uVar3 = *(undefined2 *)(*param_2 + 4);
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    *(undefined2 *)(*param_1 + 4) = uVar3;
    return;
  case 7:
    uVar3 = *(undefined2 *)(*param_2 + 4);
    uVar2 = (*param_2)[6];
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    *(undefined2 *)(*param_1 + 4) = uVar3;
    (*param_1)[6] = uVar2;
    return;
  case 8:
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    return;
  case 9:
    uVar2 = (*param_2)[8];
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    (*param_1)[8] = uVar2;
    return;
  case 10:
    uVar3 = *(undefined2 *)(*param_2 + 8);
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined2 *)(*param_1 + 8) = uVar3;
    return;
  case 0xb:
    uVar3 = *(undefined2 *)(*param_2 + 8);
    uVar2 = (*param_2)[10];
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined2 *)(*param_1 + 8) = uVar3;
    (*param_1)[10] = uVar2;
    return;
  case 0xc:
    uVar4 = *(undefined4 *)(*param_2 + 8);
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined4 *)(*param_1 + 8) = uVar4;
    return;
  case 0xd:
    uVar4 = *(undefined4 *)(*param_2 + 8);
    uVar2 = (*param_2)[0xc];
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined4 *)(*param_1 + 8) = uVar4;
    (*param_1)[0xc] = uVar2;
    return;
  case 0xe:
    uVar4 = *(undefined4 *)(*param_2 + 8);
    uVar3 = *(undefined2 *)(*param_2 + 0xc);
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined4 *)(*param_1 + 8) = uVar4;
    *(undefined2 *)(*param_1 + 0xc) = uVar3;
    return;
  case 0xf:
    uVar4 = *(undefined4 *)(*param_2 + 8);
    uVar3 = *(undefined2 *)(*param_2 + 0xc);
    uVar2 = (*param_2)[0xe];
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined4 *)(*param_1 + 8) = uVar4;
    *(undefined2 *)(*param_1 + 0xc) = uVar3;
    (*param_1)[0xe] = uVar2;
    return;
  }
  if (param_3 < 0x21) {
    uVar4 = *(undefined4 *)(*param_2 + 4);
    uVar5 = *(undefined4 *)(*param_2 + 8);
    uVar6 = *(undefined4 *)(*param_2 + 0xc);
    puVar17 = (undefined4 *)(param_2[-1] + param_3 + 0x10);
    uVar7 = *puVar17;
    uVar8 = puVar17[1];
    uVar9 = puVar17[2];
    uVar10 = puVar17[3];
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    *(undefined4 *)(*param_1 + 4) = uVar4;
    *(undefined4 *)(*param_1 + 8) = uVar5;
    *(undefined4 *)(*param_1 + 0xc) = uVar6;
    puVar17 = (undefined4 *)(param_1[-1] + param_3 + 0x10);
    *puVar17 = uVar7;
    puVar17[1] = uVar8;
    puVar17[2] = uVar9;
    puVar17[3] = uVar10;
    return;
  }
  pauVar15 = (undefined (*) [32])(*param_2 + param_3);
  if (param_1 <= param_2) {
    pauVar15 = param_1;
  }
  if (param_1 < pauVar15) {
    uVar4 = *(undefined4 *)*param_2;
    uVar5 = *(undefined4 *)(*param_2 + 4);
    uVar6 = *(undefined4 *)(*param_2 + 8);
    uVar7 = *(undefined4 *)(*param_2 + 0xc);
    lVar22 = (longlong)param_2 - (longlong)param_1;
    puVar17 = (undefined4 *)((longlong)param_1 + lVar22 + (param_3 - 0x10));
    uVar8 = puVar17[1];
    uVar9 = puVar17[2];
    uVar10 = puVar17[3];
    puVar18 = (undefined4 *)(param_1[-1] + param_3 + 0x10);
    uVar21 = param_3 - 0x10;
    puVar20 = puVar18;
    uVar24 = *puVar17;
    uVar26 = uVar8;
    uVar27 = uVar9;
    uVar28 = uVar10;
    if (((ulonglong)puVar18 & 0xf) != 0) {
      puVar20 = (undefined4 *)((ulonglong)puVar18 & 0xfffffffffffffff0);
      puVar1 = (undefined4 *)((longlong)puVar20 + lVar22);
      uVar24 = *puVar1;
      uVar26 = puVar1[1];
      uVar27 = puVar1[2];
      uVar28 = puVar1[3];
      *puVar18 = *puVar17;
      *(undefined4 *)(param_1[-1] + param_3 + 0x14) = uVar8;
      *(undefined4 *)(param_1[-1] + param_3 + 0x18) = uVar9;
      *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
      uVar21 = (longlong)puVar20 - (longlong)param_1;
    }
    uVar23 = uVar21 >> 7;
    if (uVar23 != 0) {
      *puVar20 = uVar24;
      puVar20[1] = uVar26;
      puVar20[2] = uVar27;
      puVar20[3] = uVar28;
      puVar17 = puVar20;
      while( true ) {
        puVar18 = (undefined4 *)((longlong)puVar17 + lVar22 + -0x10);
        uVar8 = puVar18[1];
        uVar9 = puVar18[2];
        uVar10 = puVar18[3];
        puVar20 = (undefined4 *)((longlong)puVar17 + lVar22 + -0x20);
        uVar24 = *puVar20;
        uVar26 = puVar20[1];
        uVar27 = puVar20[2];
        uVar28 = puVar20[3];
        puVar20 = puVar17 + -0x20;
        puVar17[-4] = *puVar18;
        puVar17[-3] = uVar8;
        puVar17[-2] = uVar9;
        puVar17[-1] = uVar10;
        puVar17[-8] = uVar24;
        puVar17[-7] = uVar26;
        puVar17[-6] = uVar27;
        puVar17[-5] = uVar28;
        puVar18 = (undefined4 *)((longlong)puVar17 + lVar22 + -0x30);
        uVar8 = puVar18[1];
        uVar9 = puVar18[2];
        uVar10 = puVar18[3];
        puVar1 = (undefined4 *)((longlong)puVar17 + lVar22 + -0x40);
        uVar24 = *puVar1;
        uVar26 = puVar1[1];
        uVar27 = puVar1[2];
        uVar28 = puVar1[3];
        uVar23 = uVar23 - 1;
        puVar17[-0xc] = *puVar18;
        puVar17[-0xb] = uVar8;
        puVar17[-10] = uVar9;
        puVar17[-9] = uVar10;
        puVar17[-0x10] = uVar24;
        puVar17[-0xf] = uVar26;
        puVar17[-0xe] = uVar27;
        puVar17[-0xd] = uVar28;
        puVar18 = (undefined4 *)((longlong)puVar17 + lVar22 + -0x50);
        uVar8 = puVar18[1];
        uVar9 = puVar18[2];
        uVar10 = puVar18[3];
        puVar1 = (undefined4 *)((longlong)puVar17 + lVar22 + -0x60);
        uVar24 = *puVar1;
        uVar26 = puVar1[1];
        uVar27 = puVar1[2];
        uVar28 = puVar1[3];
        puVar17[-0x14] = *puVar18;
        puVar17[-0x13] = uVar8;
        puVar17[-0x12] = uVar9;
        puVar17[-0x11] = uVar10;
        puVar17[-0x18] = uVar24;
        puVar17[-0x17] = uVar26;
        puVar17[-0x16] = uVar27;
        puVar17[-0x15] = uVar28;
        puVar1 = (undefined4 *)((longlong)puVar17 + lVar22 + -0x70);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar18 = (undefined4 *)((longlong)puVar20 + lVar22);
        uVar24 = *puVar18;
        uVar26 = puVar18[1];
        uVar27 = puVar18[2];
        uVar28 = puVar18[3];
        if (uVar23 == 0) break;
        puVar17[-0x1c] = *puVar1;
        puVar17[-0x1b] = uVar8;
        puVar17[-0x1a] = uVar9;
        puVar17[-0x19] = uVar10;
        *puVar20 = uVar24;
        puVar17[-0x1f] = uVar26;
        puVar17[-0x1e] = uVar27;
        puVar17[-0x1d] = uVar28;
        puVar17 = puVar20;
      }
      puVar17[-0x1c] = *puVar1;
      puVar17[-0x1b] = uVar8;
      puVar17[-0x1a] = uVar9;
      puVar17[-0x19] = uVar10;
      uVar21 = uVar21 & 0x7f;
    }
    for (uVar23 = uVar21 >> 4; uVar23 != 0; uVar23 = uVar23 - 1) {
      *puVar20 = uVar24;
      puVar20[1] = uVar26;
      puVar20[2] = uVar27;
      puVar20[3] = uVar28;
      puVar20 = puVar20 + -4;
      puVar17 = (undefined4 *)((longlong)puVar20 + lVar22);
      uVar24 = *puVar17;
      uVar26 = puVar17[1];
      uVar27 = puVar17[2];
      uVar28 = puVar17[3];
    }
    if ((uVar21 & 0xf) != 0) {
      *(undefined4 *)*param_1 = uVar4;
      *(undefined4 *)(*param_1 + 4) = uVar5;
      *(undefined4 *)(*param_1 + 8) = uVar6;
      *(undefined4 *)(*param_1 + 0xc) = uVar7;
    }
    *puVar20 = uVar24;
    puVar20[1] = uVar26;
    puVar20[2] = uVar27;
    puVar20[3] = uVar28;
    return;
  }
  if (DAT_1809683d8 < 3) {
    if ((param_3 < 0x801) || (((byte)DAT_18099223c & 2) == 0)) {
      if (0x80 < param_3) {
        lVar22 = ((ulonglong)param_1 & 0xf) - 0x10;
        puVar17 = (undefined4 *)((longlong)param_1 - lVar22);
        puVar20 = (undefined4 *)((longlong)param_2 - lVar22);
        param_3 = param_3 + lVar22;
        if (0x80 < param_3) {
          do {
            uVar4 = puVar20[1];
            uVar5 = puVar20[2];
            uVar6 = puVar20[3];
            uVar7 = puVar20[4];
            uVar8 = puVar20[5];
            uVar9 = puVar20[6];
            uVar10 = puVar20[7];
            uVar24 = puVar20[8];
            uVar26 = puVar20[9];
            uVar27 = puVar20[10];
            uVar28 = puVar20[0xb];
            uVar11 = puVar20[0xc];
            uVar12 = puVar20[0xd];
            uVar13 = puVar20[0xe];
            uVar14 = puVar20[0xf];
            *puVar17 = *puVar20;
            puVar17[1] = uVar4;
            puVar17[2] = uVar5;
            puVar17[3] = uVar6;
            puVar17[4] = uVar7;
            puVar17[5] = uVar8;
            puVar17[6] = uVar9;
            puVar17[7] = uVar10;
            puVar17[8] = uVar24;
            puVar17[9] = uVar26;
            puVar17[10] = uVar27;
            puVar17[0xb] = uVar28;
            puVar17[0xc] = uVar11;
            puVar17[0xd] = uVar12;
            puVar17[0xe] = uVar13;
            puVar17[0xf] = uVar14;
            uVar4 = puVar20[0x11];
            uVar5 = puVar20[0x12];
            uVar6 = puVar20[0x13];
            uVar7 = puVar20[0x14];
            uVar8 = puVar20[0x15];
            uVar9 = puVar20[0x16];
            uVar10 = puVar20[0x17];
            uVar24 = puVar20[0x18];
            uVar26 = puVar20[0x19];
            uVar27 = puVar20[0x1a];
            uVar28 = puVar20[0x1b];
            uVar11 = puVar20[0x1c];
            uVar12 = puVar20[0x1d];
            uVar13 = puVar20[0x1e];
            uVar14 = puVar20[0x1f];
            puVar17[0x10] = puVar20[0x10];
            puVar17[0x11] = uVar4;
            puVar17[0x12] = uVar5;
            puVar17[0x13] = uVar6;
            puVar17[0x14] = uVar7;
            puVar17[0x15] = uVar8;
            puVar17[0x16] = uVar9;
            puVar17[0x17] = uVar10;
            puVar17[0x18] = uVar24;
            puVar17[0x19] = uVar26;
            puVar17[0x1a] = uVar27;
            puVar17[0x1b] = uVar28;
            puVar17[0x1c] = uVar11;
            puVar17[0x1d] = uVar12;
            puVar17[0x1e] = uVar13;
            puVar17[0x1f] = uVar14;
            puVar17 = puVar17 + 0x20;
            puVar20 = puVar20 + 0x20;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000180692356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulonglong)*(uint *)(&DAT_1807c6288 + (param_3 + 0xf >> 4) * 4) + 0x180000000))();
      return;
    }
  }
  else if (((param_3 < 0x2001) || (0x180000 < param_3)) || (((byte)DAT_18099223c & 2) == 0)) {
    auVar25 = vmovdqu_avx(*param_2);
    auVar33 = vmovdqu_avx(*(undefined (*) [32])(param_2[-1] + param_3));
    if (0x100 < param_3) {
      lVar22 = ((ulonglong)param_1 & 0x1f) - 0x20;
      pauVar15 = (undefined (*) [32])((longlong)param_1 - lVar22);
      param_2 = (undefined (*) [32])((longlong)param_2 - lVar22);
      param_3 = param_3 + lVar22;
      if (0x100 < param_3) {
        if (0x180000 < param_3) {
          do {
            uVar21 = param_3;
            pauVar19 = param_2;
            pauVar16 = pauVar15;
            auVar29 = vmovdqu_avx(*pauVar19);
            auVar31 = vmovdqu_avx(pauVar19[1]);
            auVar30 = vmovdqu_avx(pauVar19[2]);
            auVar32 = vmovdqu_avx(pauVar19[3]);
            auVar29 = vmovntdq_avx(auVar29);
            *pauVar16 = auVar29;
            auVar29 = vmovntdq_avx(auVar31);
            pauVar16[1] = auVar29;
            auVar29 = vmovntdq_avx(auVar30);
            pauVar16[2] = auVar29;
            auVar29 = vmovntdq_avx(auVar32);
            pauVar16[3] = auVar29;
            auVar29 = vmovdqu_avx(pauVar19[4]);
            auVar31 = vmovdqu_avx(pauVar19[5]);
            auVar30 = vmovdqu_avx(pauVar19[6]);
            auVar32 = vmovdqu_avx(pauVar19[7]);
            auVar29 = vmovntdq_avx(auVar29);
            pauVar16[4] = auVar29;
            auVar29 = vmovntdq_avx(auVar31);
            pauVar16[5] = auVar29;
            auVar29 = vmovntdq_avx(auVar30);
            pauVar16[6] = auVar29;
            auVar29 = vmovntdq_avx(auVar32);
            pauVar16[7] = auVar29;
            pauVar15 = pauVar16 + 8;
            param_2 = pauVar19 + 8;
            param_3 = uVar21 - 0x100;
          } while (0xff < uVar21 - 0x100);
          uVar23 = uVar21 - 0xe1 & 0xffffffffffffffe0;
          switch(uVar21) {
          case 0x1e1:
          case 0x1e2:
          case 0x1e3:
          case 0x1e4:
          case 0x1e5:
          case 0x1e6:
          case 0x1e7:
          case 0x1e8:
          case 0x1e9:
          case 0x1ea:
          case 0x1eb:
          case 0x1ec:
          case 0x1ed:
          case 0x1ee:
          case 0x1ef:
          case 0x1f0:
          case 0x1f1:
          case 0x1f2:
          case 499:
          case 500:
          case 0x1f5:
          case 0x1f6:
          case 0x1f7:
          case 0x1f8:
          case 0x1f9:
          case 0x1fa:
          case 0x1fb:
          case 0x1fc:
          case 0x1fd:
          case 0x1fe:
          case 0x1ff:
            auVar29 = vmovdqu_avx(*(undefined (*) [32])(*pauVar19 + uVar23));
            auVar29 = vmovntdq_avx(auVar29);
            *(undefined (*) [32])(*pauVar16 + uVar23) = auVar29;
          case 0x1c1:
          case 0x1c2:
          case 0x1c3:
          case 0x1c4:
          case 0x1c5:
          case 0x1c6:
          case 0x1c7:
          case 0x1c8:
          case 0x1c9:
          case 0x1ca:
          case 0x1cb:
          case 0x1cc:
          case 0x1cd:
          case 0x1ce:
          case 0x1cf:
          case 0x1d0:
          case 0x1d1:
          case 0x1d2:
          case 0x1d3:
          case 0x1d4:
          case 0x1d5:
          case 0x1d6:
          case 0x1d7:
          case 0x1d8:
          case 0x1d9:
          case 0x1da:
          case 0x1db:
          case 0x1dc:
          case 0x1dd:
          case 0x1de:
          case 0x1df:
          case 0x1e0:
            auVar29 = vmovdqu_avx(*(undefined (*) [32])(pauVar19[1] + uVar23));
            auVar29 = vmovntdq_avx(auVar29);
            *(undefined (*) [32])(pauVar16[1] + uVar23) = auVar29;
          case 0x1a1:
          case 0x1a2:
          case 0x1a3:
          case 0x1a4:
          case 0x1a5:
          case 0x1a6:
          case 0x1a7:
          case 0x1a8:
          case 0x1a9:
          case 0x1aa:
          case 0x1ab:
          case 0x1ac:
          case 0x1ad:
          case 0x1ae:
          case 0x1af:
          case 0x1b0:
          case 0x1b1:
          case 0x1b2:
          case 0x1b3:
          case 0x1b4:
          case 0x1b5:
          case 0x1b6:
          case 0x1b7:
          case 0x1b8:
          case 0x1b9:
          case 0x1ba:
          case 0x1bb:
          case 0x1bc:
          case 0x1bd:
          case 0x1be:
          case 0x1bf:
          case 0x1c0:
            auVar29 = vmovdqu_avx(*(undefined (*) [32])(pauVar19[2] + uVar23));
            auVar29 = vmovntdq_avx(auVar29);
            *(undefined (*) [32])(pauVar16[2] + uVar23) = auVar29;
          case 0x181:
          case 0x182:
          case 0x183:
          case 0x184:
          case 0x185:
          case 0x186:
          case 0x187:
          case 0x188:
          case 0x189:
          case 0x18a:
          case 0x18b:
          case 0x18c:
          case 0x18d:
          case 0x18e:
          case 399:
          case 400:
          case 0x191:
          case 0x192:
          case 0x193:
          case 0x194:
          case 0x195:
          case 0x196:
          case 0x197:
          case 0x198:
          case 0x199:
          case 0x19a:
          case 0x19b:
          case 0x19c:
          case 0x19d:
          case 0x19e:
          case 0x19f:
          case 0x1a0:
            auVar29 = vmovdqu_avx(*(undefined (*) [32])(pauVar19[3] + uVar23));
            auVar29 = vmovntdq_avx(auVar29);
            *(undefined (*) [32])(pauVar16[3] + uVar23) = auVar29;
          case 0x161:
          case 0x162:
          case 0x163:
          case 0x164:
          case 0x165:
          case 0x166:
          case 0x167:
          case 0x168:
          case 0x169:
          case 0x16a:
          case 0x16b:
          case 0x16c:
          case 0x16d:
          case 0x16e:
          case 0x16f:
          case 0x170:
          case 0x171:
          case 0x172:
          case 0x173:
          case 0x174:
          case 0x175:
          case 0x176:
          case 0x177:
          case 0x178:
          case 0x179:
          case 0x17a:
          case 0x17b:
          case 0x17c:
          case 0x17d:
          case 0x17e:
          case 0x17f:
          case 0x180:
            auVar29 = vmovdqu_avx(*(undefined (*) [32])(pauVar19[4] + uVar23));
            auVar29 = vmovntdq_avx(auVar29);
            *(undefined (*) [32])(pauVar16[4] + uVar23) = auVar29;
          case 0x141:
          case 0x142:
          case 0x143:
          case 0x144:
          case 0x145:
          case 0x146:
          case 0x147:
          case 0x148:
          case 0x149:
          case 0x14a:
          case 0x14b:
          case 0x14c:
          case 0x14d:
          case 0x14e:
          case 0x14f:
          case 0x150:
          case 0x151:
          case 0x152:
          case 0x153:
          case 0x154:
          case 0x155:
          case 0x156:
          case 0x157:
          case 0x158:
          case 0x159:
          case 0x15a:
          case 0x15b:
          case 0x15c:
          case 0x15d:
          case 0x15e:
          case 0x15f:
          case 0x160:
            auVar29 = vmovdqu_avx(*(undefined (*) [32])(pauVar19[5] + uVar23));
            auVar29 = vmovntdq_avx(auVar29);
            *(undefined (*) [32])(pauVar16[5] + uVar23) = auVar29;
          case 0x121:
          case 0x122:
          case 0x123:
          case 0x124:
          case 0x125:
          case 0x126:
          case 0x127:
          case 0x128:
          case 0x129:
          case 0x12a:
          case 299:
          case 300:
          case 0x12d:
          case 0x12e:
          case 0x12f:
          case 0x130:
          case 0x131:
          case 0x132:
          case 0x133:
          case 0x134:
          case 0x135:
          case 0x136:
          case 0x137:
          case 0x138:
          case 0x139:
          case 0x13a:
          case 0x13b:
          case 0x13c:
          case 0x13d:
          case 0x13e:
          case 0x13f:
          case 0x140:
            auVar29 = vmovdqu_avx(*(undefined (*) [32])(pauVar19[6] + uVar23));
            auVar29 = vmovntdq_avx(auVar29);
            *(undefined (*) [32])(pauVar16[6] + uVar23) = auVar29;
          default:
            auVar33 = vmovdqu_avx(auVar33);
            *(undefined (*) [32])(pauVar16[-1] + uVar21) = auVar33;
          case 0x100:
            auVar25 = vmovdqu_avx(auVar25);
            *param_1 = auVar25;
            return;
          }
        }
        do {
          auVar25 = vmovdqu_avx(*param_2);
          auVar33 = vmovdqu_avx(param_2[1]);
          auVar29 = vmovdqu_avx(param_2[2]);
          auVar31 = vmovdqu_avx(param_2[3]);
          *pauVar15 = auVar25;
          pauVar15[1] = auVar33;
          pauVar15[2] = auVar29;
          pauVar15[3] = auVar31;
          auVar25 = vmovdqu_avx(param_2[4]);
          auVar33 = vmovdqu_avx(param_2[5]);
          auVar29 = vmovdqu_avx(param_2[6]);
          auVar31 = vmovdqu_avx(param_2[7]);
          pauVar15[4] = auVar25;
          pauVar15[5] = auVar33;
          pauVar15[6] = auVar29;
          pauVar15[7] = auVar31;
          pauVar15 = pauVar15 + 8;
          param_2 = param_2 + 8;
          param_3 = param_3 - 0x100;
        } while (0xff < param_3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001806920b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)*(uint *)(&DAT_1807c6240 + (param_3 + 0x1f >> 5) * 4) + 0x180000000))();
    return;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*param_1)[0] = (*param_2)[0];
    param_2 = (undefined (*) [32])(*param_2 + 1);
    param_1 = (undefined (*) [32])(*param_1 + 1);
  }
  return;
}


/* address=1806924e0 name=FUN_1806924e0 */

undefined (*) [32] FUN_1806924e0(undefined (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined auVar1 [32];
  undefined (*pauVar2) [32];
  undefined (*pauVar3) [32];
  undefined (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  undefined uVar7;
  longlong lVar10;
  undefined auVar11 [16];
  undefined in_YMM0 [32];
  undefined auVar12 [32];
  undefined2 uVar8;
  undefined4 uVar9;
  
  uVar5 = (ulonglong)param_2;
  lVar10 = uVar5 * 0x101010101010101;
  auVar12._16_16_ = in_YMM0._16_16_;
  if (param_3 < 0x10) {
    uVar7 = (undefined)lVar10;
    uVar8 = (undefined2)lVar10;
    uVar9 = (undefined4)lVar10;
    switch(param_3) {
    case 0:
      return param_1;
    case 8:
      *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar10;
      return param_1;
    case 9:
      *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar10;
      param_1[-1][param_3 + 0x1f] = uVar7;
      return param_1;
    case 10:
      *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar10;
      *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar8;
      return param_1;
    case 0xb:
      *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar10;
      *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar8;
      param_1[-1][param_3 + 0x1f] = uVar7;
      return param_1;
    case 0xc:
      *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar10;
    case 4:
      *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar9;
      return param_1;
    case 0xd:
      *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar10;
    case 5:
      *(undefined4 *)(param_1[-1] + param_3 + 0x1b) = uVar9;
      param_1[-1][param_3 + 0x1f] = uVar7;
      return param_1;
    case 0xe:
      *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar10;
    case 6:
      *(undefined4 *)(param_1[-1] + param_3 + 0x1a) = uVar9;
    case 2:
      *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar8;
      return param_1;
    case 0xf:
      *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar10;
    case 7:
      *(undefined4 *)(param_1[-1] + param_3 + 0x19) = uVar9;
    case 3:
      *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar8;
    case 1:
      param_1[-1][param_3 + 0x1f] = uVar7;
      return param_1;
    }
  }
  auVar11._8_8_ = lVar10;
  auVar11._0_8_ = lVar10;
  auVar12._0_16_ = auVar11;
  if (param_3 < 0x21) {
    *(undefined (*) [16])*param_1 = auVar11;
    *(undefined (*) [16])(param_1[-1] + param_3 + 0x10) = auVar11;
    return param_1;
  }
  pauVar2 = param_1;
  if (DAT_1809683d8 < 3) {
    if ((param_3 <= DAT_1809683e0) || (((byte)DAT_18099223c & 2) == 0)) {
      lVar10 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined (*) [16])((longlong)param_1 - lVar10);
      param_3 = param_3 + lVar10;
      if (0x80 < param_3) {
        do {
          *pauVar4 = auVar11;
          pauVar4[1] = auVar11;
          pauVar4[2] = auVar11;
          pauVar4[3] = auVar11;
          pauVar4[4] = auVar11;
          pauVar4[5] = auVar11;
          pauVar4[6] = auVar11;
          pauVar4[7] = auVar11;
          pauVar4 = pauVar4 + 8;
          param_3 = param_3 - 0x80;
        } while (0x7f < param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x000180692828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (undefined (*) [32])
                (*(code *)((ulonglong)*(uint *)(&DAT_1807c6338 + (param_3 + 0xf >> 4) * 4) +
                          0x180000000))(pauVar4,uVar5 - lVar10);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_1809683e0) || (DAT_1809683e8 < param_3)) ||
          (((byte)DAT_18099223c & 2) == 0)) {
    auVar12 = vinsertf128_avx(auVar12,auVar11,1);
    lVar10 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined (*) [32])((longlong)param_1 - lVar10);
    param_3 = param_3 + lVar10;
    if (0x100 < param_3) {
      if (DAT_1809683e8 < param_3) {
        do {
          uVar5 = param_3;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar12);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar12);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar12);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar12);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar12);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar12);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar12);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar12);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          param_3 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar6 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar12);
          *(undefined (*) [32])(*pauVar3 + uVar6) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar12);
          *(undefined (*) [32])(pauVar3[1] + uVar6) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar12);
          *(undefined (*) [32])(pauVar3[2] + uVar6) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar12);
          *(undefined (*) [32])(pauVar3[3] + uVar6) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar12);
          *(undefined (*) [32])(pauVar3[4] + uVar6) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar12);
          *(undefined (*) [32])(pauVar3[5] + uVar6) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar12);
          *(undefined (*) [32])(pauVar3[6] + uVar6) = auVar1;
        default:
          auVar1 = vmovdqu_avx(auVar12);
          *(undefined (*) [32])(pauVar3[-1] + uVar5) = auVar1;
        case 0x100:
          auVar12 = vmovdqu_avx(auVar12);
          *param_1 = auVar12;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar12;
        pauVar2[1] = auVar12;
        pauVar2[2] = auVar12;
        pauVar2[3] = auVar12;
        pauVar2[4] = auVar12;
        pauVar2[5] = auVar12;
        pauVar2[6] = auVar12;
        pauVar2[7] = auVar12;
        pauVar2 = pauVar2 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x000180692674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (undefined (*) [32])
              (*(code *)((ulonglong)*(uint *)(&DAT_1807c62f0 + (param_3 + 0x1f >> 5) * 4) +
                        0x180000000))(auVar12._0_8_,uVar5 - lVar10);
    return pauVar2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}


/* address=180692880 name=strcmp */

/* Library Function - Single Match
    strcmp
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

int __cdecl strcmp(char *_Str1,char *_Str2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  uVar2 = (ulonglong)_Str1 & 7;
  while( true ) {
    if (uVar2 == 0) {
      while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
             (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
        _Str1 = (char *)((longlong)_Str1 + 8);
        if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
          return 0;
        }
      }
    }
    bVar1 = *_Str1;
    if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) break;
    _Str1 = (char *)((longlong)_Str1 + 1);
    if (bVar1 == 0) {
      return 0;
    }
    uVar2 = (ulonglong)_Str1 & 7;
  }
  return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
}


/* address=180692900 name=strlen */

/* Library Function - Single Match
    strlen
   
   Library: Visual Studio */

size_t __cdecl strlen(char *_Str)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  lVar4 = -(longlong)_Str;
  uVar2 = (ulonglong)_Str & 7;
  while (uVar2 != 0) {
    cVar1 = *_Str;
    _Str = (char *)((longlong)_Str + 1);
    if (cVar1 == '\0') goto LAB_180692978;
    uVar2 = (ulonglong)_Str & 7;
  }
  do {
    do {
      puVar3 = (ulonglong *)_Str;
      _Str = (char *)(puVar3 + 1);
    } while (((~*puVar3 ^ *puVar3 + 0x7efefefefefefeff) & 0x8101010101010100) == 0);
    uVar2 = *puVar3;
    if ((char)uVar2 == '\0') {
      return (longlong)puVar3 + lVar4;
    }
    if ((char)(uVar2 >> 8) == '\0') {
      return (size_t)(char *)((longlong)puVar3 + lVar4 + 1);
    }
    if ((char)(uVar2 >> 0x10) == '\0') {
      return (size_t)(char *)((longlong)puVar3 + lVar4 + 2);
    }
    if ((char)(uVar2 >> 0x18) == '\0') {
      return (size_t)(char *)((longlong)puVar3 + lVar4 + 3);
    }
    if ((char)(uVar2 >> 0x20) == '\0') {
      return (size_t)(char *)((longlong)puVar3 + lVar4 + 4);
    }
    if ((char)(uVar2 >> 0x28) == '\0') {
      return (size_t)(char *)((longlong)puVar3 + lVar4 + 5);
    }
    if ((char)(uVar2 >> 0x30) == '\0') {
      return (size_t)(char *)((longlong)puVar3 + lVar4 + 6);
    }
  } while ((char)(uVar2 >> 0x38) != '\0');
LAB_180692978:
  return (size_t)(char *)((longlong)_Str + lVar4 + -1);
}


/* address=1806929c0 name=strncmp */

/* Library Function - Single Match
    strncmp
   
   Library: Visual Studio 2019 Release */

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = (longlong)_Str2 - (longlong)_Str1;
  if (_MaxCount != 0) {
    uVar2 = (ulonglong)_Str1 & 7;
    while( true ) {
      if (uVar2 == 0) {
        while ((((int)lVar3 + (int)_Str1 & 0xfffU) < 0xff9 &&
               (uVar2 = *(ulonglong *)_Str1, uVar2 == *(ulonglong *)(lVar3 + (longlong)_Str1)))) {
          _Str1 = (char *)((longlong)_Str1 + 8);
          bVar4 = _MaxCount < 8;
          _MaxCount = _MaxCount - 8;
          if (bVar4 || _MaxCount == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = *_Str1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)_Str1)) {
        return -(uint)(bVar1 < *(byte *)(lVar3 + (longlong)_Str1)) | 1;
      }
      _Str1 = (char *)((longlong)_Str1 + 1);
      _MaxCount = _MaxCount - 1;
      if ((_MaxCount == 0) || (bVar1 == 0)) break;
      uVar2 = (ulonglong)_Str1 & 7;
    }
  }
  return 0;
}


/* address=180692c40 name=FUN_180692c40 */

void FUN_180692c40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  uVar1 = FUN_1803d4650(param_1 + 0x18);
  FUN_18069f7c0(param_2,uVar1,uVar2);
  return;
}


/* address=180692cb0 name=FUN_180692cb0 */

undefined8 FUN_180692cb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint6 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50 [2];
  undefined8 local_48;
  int local_40 [2];
  undefined8 local_38;
  int local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  uVar3 = *(ulonglong *)(param_1 + 0x20);
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  if (uVar3 <= uVar4) {
LAB_180692f82:
    local_68 = 10;
    uVar7 = FUN_180692c40(param_1,&local_68);
    goto LAB_180692f98;
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  bVar1 = *(byte *)(lVar5 + uVar4);
  if (0x20 < bVar1 - 0x5b) {
    if (bVar1 != 0x22) {
      if (bVar1 != 0x2d) goto switchD_180692cf1_caseD_5c;
      *(ulonglong *)(param_1 + 0x28) = uVar4 + 1;
      FUN_1801f08c0(local_50,param_1,0);
      if (local_50[0] == -1) {
        return local_48;
      }
      piVar8 = local_50;
      goto LAB_180692f43;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar4 + 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_1803d4bc0(local_30,(longlong *)(param_1 + 0x18));
    if (local_30[0] == 2) {
      return local_28;
    }
    local_60 = local_28;
    local_58 = local_20;
    local_68 = CONCAT71(local_68._1_7_,5);
    goto LAB_180692ec4;
  }
  uVar6 = local_68._2_6_;
  switch((uint)bVar1) {
  case 0x5b:
    local_68 = CONCAT71(local_68._1_7_,10);
    goto LAB_180692ec4;
  default:
switchD_180692cf1_caseD_5c:
    if (9 < (byte)(bVar1 - 0x30)) goto LAB_180692f82;
    FUN_1801f08c0(local_40,param_1,1);
    if (local_40[0] == -1) {
      return local_38;
    }
    piVar8 = local_40;
LAB_180692f43:
    uVar7 = FUN_1803d50a0(piVar8,param_2,param_3);
    goto LAB_180692f98;
  case 0x66:
    *(ulonglong *)(param_1 + 0x28) = uVar4 + 1;
    if (uVar4 + 1 < uVar3) {
      cVar2 = *(char *)(lVar5 + 1 + uVar4);
      *(ulonglong *)(param_1 + 0x28) = uVar4 + 2;
      if (cVar2 == 'a') {
        if (uVar3 <= uVar4 + 2) break;
        cVar2 = *(char *)(lVar5 + 2 + uVar4);
        *(ulonglong *)(param_1 + 0x28) = uVar4 + 3;
        if (cVar2 == 'l') {
          if (uVar3 <= uVar4 + 3) break;
          cVar2 = *(char *)(lVar5 + 3 + uVar4);
          *(ulonglong *)(param_1 + 0x28) = uVar4 + 4;
          if (cVar2 == 's') {
            if (uVar3 <= uVar4 + 4) break;
            cVar2 = *(char *)(lVar5 + 4 + uVar4);
            *(ulonglong *)(param_1 + 0x28) = uVar4 + 5;
            if (cVar2 == 'e') {
              local_68 = (ulonglong)uVar6 << 0x10;
              goto LAB_180692ec4;
            }
          }
        }
      }
LAB_180692f1f:
      local_68 = 9;
      goto LAB_180692ed7;
    }
    break;
  case 0x6e:
    *(ulonglong *)(param_1 + 0x28) = uVar4 + 1;
    if (uVar4 + 1 < uVar3) {
      cVar2 = *(char *)(lVar5 + 1 + uVar4);
      *(ulonglong *)(param_1 + 0x28) = uVar4 + 2;
      if (cVar2 == 'u') {
        if (uVar3 <= uVar4 + 2) break;
        cVar2 = *(char *)(lVar5 + 2 + uVar4);
        *(ulonglong *)(param_1 + 0x28) = uVar4 + 3;
        if (cVar2 == 'l') {
          if (uVar3 <= uVar4 + 3) break;
          cVar2 = *(char *)(lVar5 + 3 + uVar4);
          *(ulonglong *)(param_1 + 0x28) = uVar4 + 4;
          if (cVar2 == 'l') {
            local_68 = CONCAT71(local_68._1_7_,7);
            goto LAB_180692ec4;
          }
        }
      }
      goto LAB_180692f1f;
    }
    break;
  case 0x74:
    *(ulonglong *)(param_1 + 0x28) = uVar4 + 1;
    if (uVar4 + 1 < uVar3) {
      cVar2 = *(char *)(lVar5 + 1 + uVar4);
      *(ulonglong *)(param_1 + 0x28) = uVar4 + 2;
      if (cVar2 == 'r') {
        if (uVar3 <= uVar4 + 2) break;
        cVar2 = *(char *)(lVar5 + 2 + uVar4);
        *(ulonglong *)(param_1 + 0x28) = uVar4 + 3;
        if (cVar2 == 'u') {
          if (uVar3 <= uVar4 + 3) break;
          cVar2 = *(char *)(lVar5 + 3 + uVar4);
          *(ulonglong *)(param_1 + 0x28) = uVar4 + 4;
          if (cVar2 == 'e') {
            local_68 = CONCAT62(uVar6,0x100);
            goto LAB_180692ec4;
          }
        }
      }
      goto LAB_180692f1f;
    }
    break;
  case 0x7b:
    local_68 = CONCAT71(local_68._1_7_,0xb);
LAB_180692ec4:
    uVar7 = FUN_18069f8b0(&local_68,param_2,param_3);
LAB_180692f98:
    uVar7 = FUN_1806979e0(uVar7,param_1);
    return uVar7;
  }
  local_68 = 5;
LAB_180692ed7:
  uVar7 = FUN_180692fc0(param_1,&local_68);
  return uVar7;
}


/* address=180692fc0 name=FUN_180692fc0 */

void FUN_180692fc0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  uVar1 = FUN_1803d46e0(param_1 + 0x18);
  FUN_18069f7c0(param_2,uVar1,uVar2);
  return;
}


/* address=180693030 name=FUN_180693030 */

void FUN_180693030(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  undefined4 local_37;
  undefined4 uStack_33;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = (longlong *)FUN_1806a0200();
  local_38 = *(char *)(param_2 + 0xc);
  *(undefined *)(param_2 + 0xc) = 2;
  if (local_38 != '\x02') {
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    local_58 = param_2[4];
    uStack_54 = param_2[5];
    uStack_50 = param_2[6];
    uStack_4c = param_2[7];
    local_48 = param_2[8];
    uStack_44 = param_2[9];
    uStack_40 = param_2[10];
    uStack_3c = param_2[0xb];
    FUN_1802233e0(param_1,&local_68,local_28);
    LOCK();
    *local_28 = *local_28 + -1;
    UNLOCK();
    if (*local_28 == 0) {
      FUN_18039b650(&local_28);
    }
    return;
  }
  FUN_1806a1770(&PTR_s__rustc_48a229ceaefd4985c50990b14_1806b9a58);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180693100 name=FUN_180693100 */

void FUN_180693100(longlong *param_1)

{
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (longlong *)FUN_1806a0200();
  local_38 = *param_1;
  *param_1 = 0;
  if (local_38 != 0) {
    local_30 = *(undefined4 *)(param_1 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_28 = *(undefined4 *)(param_1 + 2);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x14);
    FUN_180223e10(&local_38,local_20);
    LOCK();
    *local_20 = *local_20 + -1;
    UNLOCK();
    if (*local_20 == 0) {
      FUN_18039b650(&local_20);
    }
    return;
  }
  FUN_1806a1770(&PTR_s__rustc_48a229ceaefd4985c50990b14_1806b9a58);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806932b0 name=FUN_1806932b0 */

undefined4 * FUN_1806932b0(undefined4 *param_1,undefined param_2,undefined4 *param_3)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [16];
  undefined4 *local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_50 = 0;
  uStack_48 = (undefined *)0x1;
  local_40 = ZEXT816(0);
  local_21 = 1;
  local_30 = param_3;
  FUN_18069aef0(&local_50,0,1,1,1);
  *uStack_48 = param_2;
  if (local_40._0_8_ == 0) {
    local_40._0_8_ = 1;
  }
  local_40._8_8_ = 1;
  local_58 = *(undefined8 *)(local_30 + 4);
  local_68 = *local_30;
  uStack_64 = local_30[1];
  uStack_60 = local_30[2];
  uStack_5c = local_30[3];
  local_21 = 0;
  FUN_18024c210(&local_68,&local_50);
  *(undefined8 *)(param_1 + 4) = local_40._0_8_;
  *param_1 = (undefined4)local_50;
  param_1[1] = local_50._4_4_;
  param_1[2] = (undefined4)uStack_48;
  param_1[3] = uStack_48._4_4_;
  return param_1;
}


/* address=1806933d0 name=FUN_1806933d0 */

undefined4 * FUN_1806933d0(undefined4 *param_1,undefined param_2,undefined4 *param_3)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [23];
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = (undefined *)0x1;
  local_38._0_16_ = ZEXT816(0);
  local_21 = 1;
  local_50 = param_3;
  FUN_18069aef0(&local_48,0,1,1,1);
  *uStack_40 = param_2;
  if (local_38._0_8_ == 0) {
    local_38._0_8_ = 1;
  }
  local_38._8_8_ = 1;
  local_58 = *(undefined8 *)(local_50 + 4);
  local_68 = *local_50;
  uStack_64 = local_50[1];
  uStack_60 = local_50[2];
  uStack_5c = local_50[3];
  local_21 = 0;
  FUN_1802f5240(&local_68,&local_48);
  *(undefined8 *)(param_1 + 4) = local_38._0_8_;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=1806934e0 name=FUN_1806934e0 */

undefined4 * FUN_1806934e0(undefined4 *param_1,undefined param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = 0;
  uStack_38 = (undefined *)0x1;
  local_30 = ZEXT816(0);
  FUN_18069aef0(&local_40,0,1,1,1);
  *uStack_38 = param_2;
  if (local_30._0_8_ == 0) {
    local_30._0_8_ = 1;
  }
  *(undefined8 *)(param_1 + 4) = local_30._0_8_;
  *param_1 = (undefined4)local_40;
  param_1[1] = local_40._4_4_;
  param_1[2] = (undefined4)uStack_38;
  param_1[3] = uStack_38._4_4_;
  return param_1;
}


/* address=1806935a0 name=FUN_1806935a0 */

undefined4 * FUN_1806935a0(undefined4 *param_1,undefined param_2,undefined4 *param_3)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [16];
  undefined4 *local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_50 = 0;
  uStack_48 = (undefined *)0x1;
  local_40 = ZEXT816(0);
  local_21 = 1;
  local_30 = param_3;
  FUN_18069aef0(&local_50,0,1,1,1);
  *uStack_48 = param_2;
  if (local_40._0_8_ == 0) {
    local_40._0_8_ = 1;
  }
  local_40._8_8_ = 1;
  local_58 = *(undefined8 *)(local_30 + 4);
  local_68 = *local_30;
  uStack_64 = local_30[1];
  uStack_60 = local_30[2];
  uStack_5c = local_30[3];
  local_21 = 0;
  FUN_1802f5390(&local_68,&local_50);
  *(undefined8 *)(param_1 + 4) = local_40._0_8_;
  *param_1 = (undefined4)local_50;
  param_1[1] = local_50._4_4_;
  param_1[2] = (undefined4)uStack_48;
  param_1[3] = uStack_48._4_4_;
  return param_1;
}


/* address=180693c20 name=FUN_180693c20 */

undefined4 * FUN_180693c20(undefined4 *param_1,undefined param_2,undefined4 *param_3)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [16];
  undefined4 *local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_50 = 0;
  uStack_48 = (undefined *)0x1;
  local_40 = ZEXT816(0);
  local_21 = 1;
  local_30 = param_3;
  FUN_18069aef0(&local_50,0,1,1,1);
  *uStack_48 = param_2;
  if (local_40._0_8_ == 0) {
    local_40._0_8_ = 1;
  }
  local_40._8_8_ = 1;
  local_58 = *(undefined8 *)(local_30 + 4);
  local_68 = *local_30;
  uStack_64 = local_30[1];
  uStack_60 = local_30[2];
  uStack_5c = local_30[3];
  local_21 = 0;
  FUN_18024c490(&local_68,&local_50);
  *(undefined8 *)(param_1 + 4) = local_40._0_8_;
  *param_1 = (undefined4)local_50;
  param_1[1] = local_50._4_4_;
  param_1[2] = (undefined4)uStack_48;
  param_1[3] = uStack_48._4_4_;
  return param_1;
}


/* address=180694070 name=FUN_180694070 */

undefined4 * FUN_180694070(undefined4 *param_1,undefined param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined local_50 [16];
  undefined8 *local_40;
  undefined8 local_38;
  undefined local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_60 = 0;
  uStack_58 = (undefined *)0x1;
  local_50 = ZEXT816(0);
  local_29 = 1;
  local_40 = param_3;
  FUN_18069aef0(&local_60,0,1,1,1);
  *uStack_58 = param_2;
  if (local_50._0_8_ == 0) {
    local_50._0_8_ = 1;
  }
  local_50._8_8_ = 1;
  local_38 = *local_40;
  local_68 = local_40[1];
  uVar1 = local_40[2];
  FUN_1803aa660(&local_90,0x1fffffff);
  local_b8 = local_38;
  local_b0 = local_68;
  local_c0 = 0x1fffffff;
  local_e8 = local_90;
  uStack_e4 = uStack_8c;
  uStack_e0 = uStack_88;
  uStack_dc = uStack_84;
  local_d8 = local_80;
  uStack_d4 = uStack_7c;
  uStack_d0 = uStack_78;
  uStack_cc = uStack_74;
  local_c8 = local_70;
  LOCK();
  local_a0 = *(undefined8 *)PTR_DAT_18093b0f8;
  *(longlong *)PTR_DAT_18093b0f8 = *(longlong *)PTR_DAT_18093b0f8 + 1;
  UNLOCK();
  local_29 = 0;
  local_a8 = uVar1;
  FUN_1802f7c60(&local_90,&local_e8);
  local_29 = 0;
  FUN_180342d70(&local_90,&local_60);
  *(undefined8 *)(param_1 + 4) = local_50._0_8_;
  *param_1 = (undefined4)local_60;
  param_1[1] = local_60._4_4_;
  param_1[2] = (undefined4)uStack_58;
  param_1[3] = uStack_58._4_4_;
  return param_1;
}


/* address=180694240 name=FUN_180694240 */

undefined4 * FUN_180694240(undefined4 *param_1,undefined param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48 [16];
  undefined8 local_38;
  undefined local_2a;
  undefined local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_58 = 0;
  uStack_50 = (undefined *)0x1;
  local_48 = ZEXT816(0);
  local_29 = 1;
  local_68 = param_3;
  FUN_18069aef0(&local_58,0,1,1,1);
  *uStack_50 = param_2;
  if (local_48._0_8_ == 0) {
    local_48._0_8_ = 1;
  }
  local_48._8_8_ = 1;
  local_38 = local_68[3];
  local_60 = local_68[4];
  uVar1 = local_68[5];
  local_78 = local_68[2];
  local_88 = *local_68;
  uStack_80 = local_68[1];
  local_2a = 0;
  FUN_18024c210(&local_88,&local_58);
  local_88 = local_38;
  uStack_80 = local_60;
  local_2a = 1;
  local_78 = uVar1;
  FUN_18024c210(&local_88,&local_58);
  *(undefined8 *)(param_1 + 4) = local_48._0_8_;
  *param_1 = (undefined4)local_58;
  param_1[1] = local_58._4_4_;
  param_1[2] = (undefined4)uStack_50;
  param_1[3] = uStack_50._4_4_;
  return param_1;
}


/* address=1806943e0 name=FUN_1806943e0 */

undefined4 * FUN_1806943e0(undefined4 *param_1,undefined param_2,undefined4 *param_3)

{
  undefined local_a8 [40];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined local_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = (undefined *)0x1;
  local_38 = ZEXT816(0);
  FUN_18069aef0(&local_48,0,1,1,1);
  *uStack_40 = param_2;
  if (local_38._0_8_ == 0) {
    local_38._0_8_ = 1;
  }
  local_38._8_8_ = 1;
  FUN_1803aa660(local_a8,0x1fffffff);
  local_80 = 0x1fffffff;
  local_7c = *param_3;
  uStack_78 = param_3[1];
  uStack_74 = param_3[2];
  uStack_70 = param_3[3];
  local_6c = *(undefined2 *)(param_3 + 4);
  LOCK();
  local_68 = *(undefined8 *)PTR_DAT_18093b0f8;
  *(longlong *)PTR_DAT_18093b0f8 = *(longlong *)PTR_DAT_18093b0f8 + 1;
  UNLOCK();
  FUN_1802f88a0(local_60,local_a8);
  FUN_1803434f0(local_60,&local_48);
  *(undefined8 *)(param_1 + 4) = local_38._0_8_;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=180694d50 name=FUN_180694d50 */

undefined4 * FUN_180694d50(undefined4 *param_1,undefined param_2,byte param_3)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = (undefined *)0x1;
  local_38 = ZEXT816(0);
  FUN_18069aef0(&local_48,0,1,1,1);
  *uStack_40 = param_2;
  if (local_38._0_8_ == 0) {
    local_38._0_8_ = 1;
  }
  if (local_48 < 5) {
    local_38._8_8_ = 1;
    if ((local_48 - local_38._0_8_ < 5 - local_38._0_8_) &&
       (FUN_18069aef0(&local_48,local_38._0_8_,5 - local_38._0_8_,1,1), local_38._0_8_ == 0)) {
      *uStack_40 = 0;
      local_38._0_8_ = 1;
    }
  }
  *(uint *)(uStack_40 + 1) = (uint)param_3;
  if ((ulonglong)local_38._0_8_ < 5) {
    local_38._0_8_ = 5;
  }
  *(undefined8 *)(param_1 + 4) = local_38._0_8_;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=180695150 name=FUN_180695150 */

undefined4 * FUN_180695150(undefined4 *param_1,undefined param_2,undefined4 *param_3)

{
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [16];
  undefined4 *local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_50 = 0;
  uStack_48 = (undefined *)0x1;
  local_40 = ZEXT816(0);
  local_21 = 1;
  local_30 = param_3;
  FUN_18069aef0(&local_50,0,1,1,1);
  *uStack_48 = param_2;
  if (local_40._0_8_ == 0) {
    local_40._0_8_ = 1;
  }
  local_40._8_8_ = 1;
  FUN_1803aa660(&local_78,0x1fffffff);
  local_b8 = *local_30;
  uStack_b4 = local_30[1];
  uStack_b0 = local_30[2];
  uStack_ac = local_30[3];
  local_a8 = local_30[4];
  uStack_a4 = local_30[5];
  uStack_a0 = local_30[6];
  uStack_9c = local_30[7];
  local_98 = local_30[8];
  uStack_94 = local_30[9];
  uStack_90 = local_30[10];
  uStack_8c = local_30[0xb];
  local_c0 = 0x1fffffff;
  local_e8 = local_78;
  uStack_e4 = uStack_74;
  uStack_e0 = uStack_70;
  uStack_dc = uStack_6c;
  local_d8 = local_68;
  uStack_d4 = uStack_64;
  uStack_d0 = uStack_60;
  uStack_cc = uStack_5c;
  local_c8 = local_58;
  LOCK();
  local_88 = *(undefined8 *)PTR_DAT_18093b0f8;
  *(longlong *)PTR_DAT_18093b0f8 = *(longlong *)PTR_DAT_18093b0f8 + 1;
  UNLOCK();
  local_21 = 0;
  FUN_1802fb180(&local_78,&local_e8);
  local_21 = 0;
  FUN_180341d80(&local_78,&local_50);
  *(undefined8 *)(param_1 + 4) = local_40._0_8_;
  *param_1 = (undefined4)local_50;
  param_1[1] = local_50._4_4_;
  param_1[2] = (undefined4)uStack_48;
  param_1[3] = uStack_48._4_4_;
  return param_1;
}


/* address=1806954e0 name=FUN_1806954e0 */

undefined4 * FUN_1806954e0(undefined4 *param_1,undefined param_2,undefined8 param_3)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [16];
  undefined8 local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_50 = 0;
  uStack_48 = (undefined *)0x1;
  local_40 = ZEXT816(0);
  local_21 = 1;
  local_30 = param_3;
  FUN_18069aef0(&local_50,0,1,1,1);
  *uStack_48 = param_2;
  if (local_40._0_8_ == 0) {
    local_40._0_8_ = 1;
  }
  local_40._8_8_ = 1;
  local_21 = 0;
  FUN_1803364f0(local_30,&local_50);
  *(undefined8 *)(param_1 + 4) = local_40._0_8_;
  *param_1 = (undefined4)local_50;
  param_1[1] = local_50._4_4_;
  param_1[2] = (undefined4)uStack_48;
  param_1[3] = uStack_48._4_4_;
  return param_1;
}


/* address=1806955f0 name=FUN_1806955f0 */

undefined4 * FUN_1806955f0(undefined4 *param_1,undefined param_2,undefined4 param_3)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = (undefined *)0x1;
  local_38 = ZEXT816(0);
  FUN_18069aef0(&local_48,0,1,1,1);
  *uStack_40 = param_2;
  if (local_38._0_8_ == 0) {
    local_38._0_8_ = 1;
  }
  if (local_48 < 5) {
    local_38._8_8_ = 1;
    if ((local_48 - local_38._0_8_ < 5 - local_38._0_8_) &&
       (FUN_18069aef0(&local_48,local_38._0_8_,5 - local_38._0_8_,1,1), local_38._0_8_ == 0)) {
      *uStack_40 = 0;
      local_38._0_8_ = 1;
    }
  }
  *(undefined4 *)(uStack_40 + 1) = param_3;
  if ((ulonglong)local_38._0_8_ < 5) {
    local_38._0_8_ = 5;
  }
  *(undefined8 *)(param_1 + 4) = local_38._0_8_;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=1806958a0 name=FUN_1806958a0 */

undefined4 * FUN_1806958a0(undefined4 *param_1,undefined param_2,undefined4 *param_3)

{
  undefined local_a8 [40];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined local_6c;
  undefined8 local_68;
  undefined local_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = (undefined *)0x1;
  local_38 = ZEXT816(0);
  FUN_18069aef0(&local_48,0,1,1,1);
  *uStack_40 = param_2;
  if (local_38._0_8_ == 0) {
    local_38._0_8_ = 1;
  }
  local_38._8_8_ = 1;
  FUN_1803aa660(local_a8,0x1fffffff);
  local_80 = 0x1fffffff;
  local_7c = *param_3;
  uStack_78 = param_3[1];
  uStack_74 = param_3[2];
  uStack_70 = param_3[3];
  local_6c = *(undefined *)(param_3 + 4);
  LOCK();
  local_68 = *(undefined8 *)PTR_DAT_18093b0f8;
  *(longlong *)PTR_DAT_18093b0f8 = *(longlong *)PTR_DAT_18093b0f8 + 1;
  UNLOCK();
  FUN_1802fcdd0(local_60,local_a8);
  FUN_180345650(local_60,&local_48);
  *(undefined8 *)(param_1 + 4) = local_38._0_8_;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=1806959d0 name=FUN_1806959d0 */

undefined4 * FUN_1806959d0(undefined4 *param_1,undefined param_2,undefined4 *param_3)

{
  undefined local_a8 [40];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined local_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = (undefined *)0x1;
  local_38 = ZEXT816(0);
  FUN_18069aef0(&local_48,0,1,1,1);
  *uStack_40 = param_2;
  if (local_38._0_8_ == 0) {
    local_38._0_8_ = 1;
  }
  local_38._8_8_ = 1;
  FUN_1803aa660(local_a8,0x1fffffff);
  local_80 = 0x1fffffff;
  local_7c = *param_3;
  uStack_78 = param_3[1];
  uStack_74 = param_3[2];
  uStack_70 = param_3[3];
  LOCK();
  local_68 = *(undefined8 *)PTR_DAT_18093b0f8;
  *(longlong *)PTR_DAT_18093b0f8 = *(longlong *)PTR_DAT_18093b0f8 + 1;
  UNLOCK();
  FUN_1802fd8f0(local_60,local_a8);
  FUN_180345470(local_60,&local_48);
  *(undefined8 *)(param_1 + 4) = local_38._0_8_;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=180695b00 name=FUN_180695b00 */

undefined4 * FUN_180695b00(undefined4 *param_1,undefined param_2,undefined4 *param_3)

{
  undefined local_a8 [40];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined local_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = (undefined *)0x1;
  local_38 = ZEXT816(0);
  FUN_18069aef0(&local_48,0,1,1,1);
  *uStack_40 = param_2;
  if (local_38._0_8_ == 0) {
    local_38._0_8_ = 1;
  }
  local_38._8_8_ = 1;
  FUN_1803aa660(local_a8,0x1fffffff);
  local_80 = 0x1fffffff;
  local_7c = *param_3;
  uStack_78 = param_3[1];
  uStack_74 = param_3[2];
  uStack_70 = param_3[3];
  LOCK();
  local_68 = *(undefined8 *)PTR_DAT_18093b0f8;
  *(longlong *)PTR_DAT_18093b0f8 = *(longlong *)PTR_DAT_18093b0f8 + 1;
  UNLOCK();
  FUN_1802fe6b0(local_60,local_a8);
  FUN_180341f60(local_60,&local_48);
  *(undefined8 *)(param_1 + 4) = local_38._0_8_;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=180695c30 name=FUN_180695c30 */

undefined4 * FUN_180695c30(undefined4 *param_1,undefined param_2,undefined4 *param_3)

{
  undefined local_a8 [40];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined local_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = (undefined *)0x1;
  local_38 = ZEXT816(0);
  FUN_18069aef0(&local_48,0,1,1,1);
  *uStack_40 = param_2;
  if (local_38._0_8_ == 0) {
    local_38._0_8_ = 1;
  }
  local_38._8_8_ = 1;
  FUN_1803aa660(local_a8,0x1fffffff);
  local_80 = 0x1fffffff;
  local_7c = *param_3;
  uStack_78 = param_3[1];
  uStack_74 = param_3[2];
  uStack_70 = param_3[3];
  LOCK();
  local_68 = *(undefined8 *)PTR_DAT_18093b0f8;
  *(longlong *)PTR_DAT_18093b0f8 = *(longlong *)PTR_DAT_18093b0f8 + 1;
  UNLOCK();
  FUN_1802ff1d0(local_60,local_a8);
  FUN_1803419c0(local_60,&local_48);
  *(undefined8 *)(param_1 + 4) = local_38._0_8_;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=180696850 name=FUN_180696850 */

undefined4 * FUN_180696850(undefined4 *param_1,undefined param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined local_50 [16];
  undefined8 *local_40;
  undefined8 local_38;
  undefined local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_60 = 0;
  uStack_58 = (undefined *)0x1;
  local_50 = ZEXT816(0);
  local_29 = 1;
  local_40 = param_3;
  FUN_18069aef0(&local_60,0,1,1,1);
  puVar1 = local_40;
  *uStack_58 = param_2;
  if (local_50._0_8_ == 0) {
    local_50._0_8_ = 1;
  }
  local_50._8_8_ = 1;
  local_38 = *local_40;
  local_68 = local_40[1];
  FUN_1803aa660(&local_90,0x1fffffff);
  local_c8 = local_38;
  local_c0 = local_68;
  local_b8 = *(undefined4 *)(puVar1 + 2);
  uStack_b4 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_b0 = *(undefined4 *)(puVar1 + 3);
  uStack_ac = *(undefined4 *)((longlong)puVar1 + 0x1c);
  local_a8 = *(undefined4 *)(puVar1 + 4);
  uStack_a4 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_a0 = *(undefined4 *)(puVar1 + 5);
  uStack_9c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  local_d0 = 0x1fffffff;
  local_f8 = local_90;
  uStack_f4 = uStack_8c;
  uStack_f0 = uStack_88;
  uStack_ec = uStack_84;
  local_e8 = local_80;
  uStack_e4 = uStack_7c;
  uStack_e0 = uStack_78;
  uStack_dc = uStack_74;
  local_d8 = local_70;
  LOCK();
  local_98 = *(undefined8 *)PTR_DAT_18093b0f8;
  *(longlong *)PTR_DAT_18093b0f8 = *(longlong *)PTR_DAT_18093b0f8 + 1;
  UNLOCK();
  local_29 = 0;
  FUN_180300ef0(&local_90,&local_f8);
  local_29 = 0;
  FUN_1803436d0(&local_90,&local_60);
  *(undefined8 *)(param_1 + 4) = local_50._0_8_;
  *param_1 = (undefined4)local_60;
  param_1[1] = local_60._4_4_;
  param_1[2] = (undefined4)uStack_58;
  param_1[3] = uStack_58._4_4_;
  return param_1;
}


/* address=180696ea0 name=FUN_180696ea0 */

undefined4 * FUN_180696ea0(undefined4 *param_1,undefined param_2,undefined param_3)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = (undefined *)0x1;
  local_38 = ZEXT816(0);
  FUN_18069aef0(&local_48,0,1,1,1);
  *uStack_40 = param_2;
  if (local_38._0_8_ == 0) {
    local_38._0_8_ = 1;
  }
  if (local_48 < 2) {
    local_38._8_8_ = 1;
    if ((local_48 - local_38._0_8_ < 2 - local_38._0_8_) &&
       (FUN_18069aef0(&local_48,local_38._0_8_,2 - local_38._0_8_,1,1), local_38._0_8_ == 0)) {
      *uStack_40 = 0;
      local_38._0_8_ = 1;
    }
  }
  uStack_40[1] = param_3;
  if ((ulonglong)local_38._0_8_ < 2) {
    local_38._0_8_ = 2;
  }
  *(undefined8 *)(param_1 + 4) = local_38._0_8_;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=180696ff0 name=FUN_180696ff0 */

undefined4 * FUN_180696ff0(undefined4 *param_1,undefined param_2,undefined2 param_3)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = (undefined *)0x1;
  local_38 = ZEXT816(0);
  FUN_18069aef0(&local_48,0,1,1,1);
  *uStack_40 = param_2;
  if (local_38._0_8_ == 0) {
    local_38._0_8_ = 1;
  }
  if (local_48 < 3) {
    local_38._8_8_ = 1;
    if ((local_48 - local_38._0_8_ < 3 - local_38._0_8_) &&
       (FUN_18069aef0(&local_48,local_38._0_8_,3 - local_38._0_8_,1,1), local_38._0_8_ == 0)) {
      *uStack_40 = 0;
      local_38._0_8_ = 1;
    }
  }
  *(undefined2 *)(uStack_40 + 1) = param_3;
  if ((ulonglong)local_38._0_8_ < 3) {
    local_38._0_8_ = 3;
  }
  *(undefined8 *)(param_1 + 4) = local_38._0_8_;
  *param_1 = (undefined4)local_48;
  param_1[1] = local_48._4_4_;
  param_1[2] = (undefined4)uStack_40;
  param_1[3] = uStack_40._4_4_;
  return param_1;
}


/* address=180697290 name=FUN_180697290 */

void FUN_180697290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1806a19f0("not implemented: This method shouldn\'t be called on desktop platformsflutter-bridge\\src\\settings\\mod.rs"
                ,0x8b,&PTR_s_flutter_bridge_src_settings_mod__1806bb1d0,param_4,param_1,
                0xfffffffffffffffe);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697300 name=FUN_180697300 */

void FUN_180697300(void)

{
  FUN_1806a19f0("not implemented: This method shouldn\'t be called on desktop platformsflutter-bridge\\src\\settings\\mod.rs"
                ,0x8b,&PTR_s_flutter_bridge_src_settings_mod__1806bb1e8);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697320 name=FUN_180697320 */

void FUN_180697320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1806a19f0("not implemented: This method shouldn\'t be called on desktop platformsflutter-bridge\\src\\settings\\mod.rs"
                ,0x8b,&PTR_s_flutter_bridge_src_settings_mod__1806bb200,param_4,param_1,
                0xfffffffffffffffe);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697390 name=FUN_180697390 */

undefined * FUN_180697390(undefined *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined local_48 [8];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_40 = param_2[1];
  local_38 = param_2[2];
  local_48[0] = 6;
  local_30 = param_2;
  local_28 = local_40;
  uVar1 = FUN_18069f8b0(local_48,&local_19,&DAT_1806bb780);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 1;
  if (*local_30 != 0) {
    thunk_FUN_1803e4c80(local_28,*local_30,1);
  }
  return param_1;
}


/* address=180697450 name=FUN_180697450 */

void FUN_180697450(longlong param_1)

{
  undefined *local_40;
  code *local_38;
  undefined8 *local_30;
  code *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = *(undefined8 *)(param_1 + 0x10);
  local_40 = &DAT_1806bb8a8;
  local_38 = FUN_180404240;
  local_30 = &local_20;
  local_28 = FUN_180404240;
  local_18 = param_1;
  FUN_1806a19f0(&DAT_1806bb8b0,&local_40,&PTR_s_C__Users_VssAdministrator__cargo_1806bb968);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806974e0 name=FUN_1806974e0 */

void FUN_1806974e0(longlong param_1)

{
  undefined *local_40;
  code *local_38;
  undefined8 *local_30;
  code *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = *(undefined8 *)(param_1 + 0x10);
  local_40 = &DAT_1806bb980;
  local_38 = FUN_180404240;
  local_30 = &local_20;
  local_28 = FUN_180404240;
  local_18 = param_1;
  FUN_1806a19f0(&DAT_1806bb8b0,&local_40,&PTR_s_C__Users_VssAdministrator__cargo_1806bb968);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697570 name=FUN_180697570 */

void FUN_180697570(longlong param_1)

{
  undefined *local_40;
  code *local_38;
  undefined8 *local_30;
  code *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = *(undefined8 *)(param_1 + 0x10);
  local_40 = &DAT_1806bb988;
  local_38 = FUN_180404240;
  local_30 = &local_20;
  local_28 = FUN_180404240;
  local_18 = param_1;
  FUN_1806a19f0(&DAT_1806bb8b0,&local_40,&PTR_s_C__Users_VssAdministrator__cargo_1806bb968);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697600 name=FUN_180697600 */

void FUN_180697600(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_30 = param_1;
  FUN_180697290(&local_48);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697750 name=FUN_180697750 */

void FUN_180697750(undefined8 param_1)

{
  undefined local_78 [72];
  undefined8 local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_180697300(local_78);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697890 name=FUN_180697890 */

void FUN_180697890(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_30 = param_1;
  FUN_180697320(&local_48);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806979e0 name=FUN_1806979e0 */

longlong FUN_1806979e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    return param_1;
  }
  lVar1 = FUN_180692fc0(param_2,param_1);
  thunk_FUN_1803e4c80(param_1,0x28,8);
  return lVar1;
}


/* address=180697a70 name=FUN_180697a70 */

void FUN_180697a70(undefined8 param_1,undefined8 param_2)

{
  undefined local_28 [24];
  
  FUN_18069ff40(local_28,param_1);
  FUN_18069f8b0(local_28,param_2,&DAT_1806bd890);
  return;
}


/* address=180697ab0 name=FUN_180697ab0 */

void FUN_180697ab0(void)

{
  char cVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_30 = 0;
  uStack_28 = 1;
  local_20 = 0;
  local_38 = 0x60000020;
  local_48 = &local_30;
  local_40 = &PTR_LAB_1806bdcc0;
  cVar1 = FUN_1803a3ea0(&local_11,&local_48);
  if (cVar1 == '\0') {
    local_58 = local_20;
    local_68 = (undefined4)local_30;
    uStack_64 = local_30._4_4_;
    uStack_60 = (undefined4)uStack_28;
    uStack_5c = uStack_28._4_4_;
    FUN_1803d3720(&local_68);
    return;
  }
  FUN_1806a1790("a Display implementation returned an error unexpectedly/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\string.rs"
                ,0x37,&local_11,&DAT_1806bda70,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806bdd78);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697b90 name=FUN_180697b90 */

void FUN_180697b90(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  
  if ((param_2 & 1) == 0) {
    FUN_1803f6380(&local_30,param_1,param_2);
  }
  else {
    param_2 = param_2 >> 1;
    local_30 = param_2;
    local_20 = param_2;
    if (param_2 == 0) {
      local_28 = 1;
    }
    else {
      FUN_180339d20();
      lVar1 = thunk_FUN_1803e4c20(param_2,1);
      if (lVar1 == 0) {
        FUN_1806a153b(1,param_2);
        do {
          invalidInstructionException();
        } while( true );
      }
      FUN_180691e40(lVar1,param_1,param_2);
      local_28 = lVar1;
    }
  }
  FUN_1803d3720(&local_30);
  return;
}


/* address=180697c20 name=FUN_180697c20 */

void FUN_180697c20(undefined8 param_1)

{
  char cVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_30 = 0;
  uStack_28 = 1;
  local_20 = 0;
  local_38 = 0x60000020;
  local_48 = &local_30;
  local_40 = &PTR_LAB_1806bdcc0;
  cVar1 = FUN_1803d0d50(param_1,&local_48);
  if (cVar1 == '\0') {
    local_58 = local_20;
    local_68 = (undefined4)local_30;
    uStack_64 = local_30._4_4_;
    uStack_60 = (undefined4)uStack_28;
    uStack_5c = uStack_28._4_4_;
    FUN_1803d3720(&local_68);
    return;
  }
  FUN_1806a1790("a Display implementation returned an error unexpectedly/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\string.rs"
                ,0x37,&local_11,&DAT_1806bda70,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806bdd78);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697d00 name=FUN_180697d00 */

undefined8 FUN_180697d00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  local_40 = param_1;
  local_38 = lVar1;
  if (lVar2 < 0) {
    uVar3 = 0;
LAB_180697d2e:
    FUN_1806a153b(uVar3,lVar2);
    do {
      invalidInstructionException();
    } while( true );
  }
  if (lVar2 == 0) {
    local_50 = 1;
  }
  else {
    FUN_180339d20();
    uVar3 = 1;
    local_50 = thunk_FUN_1803e4c20(lVar2,1);
    if (local_50 == 0) goto LAB_180697d2e;
    FUN_180691e40(local_50,lVar1,lVar2);
  }
  local_58 = lVar2;
  local_48 = lVar2;
  uVar3 = FUN_1803d3720(&local_58);
  if (*local_40 != 0) {
    thunk_FUN_1803e4c80(local_38,*local_40,1);
  }
  return uVar3;
}


/* address=180697e00 name=FUN_180697e00 */

void FUN_180697e00(void)

{
  char cVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_30 = 0;
  uStack_28 = 1;
  local_20 = 0;
  local_38 = 0x60000020;
  local_48 = &local_30;
  local_40 = &PTR_LAB_1806bdcc0;
  cVar1 = FUN_1803cfcd0(&local_11,&local_48);
  if (cVar1 == '\0') {
    local_58 = local_20;
    local_68 = (undefined4)local_30;
    uStack_64 = local_30._4_4_;
    uStack_60 = (undefined4)uStack_28;
    uStack_5c = uStack_28._4_4_;
    FUN_1803d3720(&local_68);
    return;
  }
  FUN_1806a1790("a Display implementation returned an error unexpectedly/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\string.rs"
                ,0x37,&local_11,&DAT_1806bda70,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806bdd78);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697ee0 name=FUN_180697ee0 */

void FUN_180697ee0(undefined param_1)

{
  char cVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_12;
  undefined local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_30 = 0;
  uStack_28 = 1;
  local_20 = 0;
  local_38 = 0x60000020;
  local_48 = &local_30;
  local_40 = &PTR_LAB_1806bdcc0;
  local_11 = param_1;
  cVar1 = FUN_1804041e0(&local_11,&local_48);
  if (cVar1 == '\0') {
    local_58 = local_20;
    local_68 = (undefined4)local_30;
    uStack_64 = local_30._4_4_;
    uStack_60 = (undefined4)uStack_28;
    uStack_5c = uStack_28._4_4_;
    FUN_1803d3720(&local_68);
    return;
  }
  FUN_1806a1790("a Display implementation returned an error unexpectedly/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\string.rs"
                ,0x37,&local_12,&DAT_1806bda70,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806bdd78);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=180697fc0 name=FUN_180697fc0 */

void FUN_180697fc0(undefined param_1)

{
  char cVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_12;
  undefined local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_30 = 0;
  uStack_28 = 1;
  local_20 = 0;
  local_38 = 0x60000020;
  local_48 = &local_30;
  local_40 = &PTR_LAB_1806bdcc0;
  local_11 = param_1;
  cVar1 = FUN_180402ca0(&local_11,&local_48);
  if (cVar1 == '\0') {
    local_58 = local_20;
    local_68 = (undefined4)local_30;
    uStack_64 = local_30._4_4_;
    uStack_60 = (undefined4)uStack_28;
    uStack_5c = uStack_28._4_4_;
    FUN_1803d3720(&local_68);
    return;
  }
  FUN_1806a1790("a Display implementation returned an error unexpectedly/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\string.rs"
                ,0x37,&local_12,&DAT_1806bda70,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806bdd78);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806980a0 name=FUN_1806980a0 */

void FUN_1806980a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  
  if (param_2 < 0) {
    uVar1 = 0;
LAB_1806980b4:
    FUN_1806a153b(uVar1,param_2);
    do {
      invalidInstructionException();
    } while( true );
  }
  if (param_2 == 0) {
    local_30 = 1;
  }
  else {
    FUN_180339d20();
    uVar1 = 1;
    local_30 = thunk_FUN_1803e4c20(param_2,1);
    if (local_30 == 0) goto LAB_1806980b4;
    FUN_180691e40(local_30,param_1,param_2);
  }
  local_38 = param_2;
  local_28 = param_2;
  FUN_1803d3720(&local_38);
  return;
}


/* address=180698460 name=FUN_180698460 */

void FUN_180698460(undefined8 param_1)

{
  undefined8 local_30;
  undefined *local_28;
  undefined local_20 [24];
  
  local_28 = &LAB_1802a8400;
  local_30 = param_1;
  FUN_1803f6380(local_20,&DAT_1806bd960,&local_30);
  FUN_180697d00(local_20);
  return;
}


/* address=1806984a0 name=FUN_1806984a0 */

void FUN_1806984a0(void)

{
  undefined local_31;
  undefined *local_30;
  undefined *local_28;
  undefined local_20 [24];
  
  local_31 = 3;
  local_30 = &local_31;
  local_28 = &LAB_180403ca0;
  FUN_1803f6380(local_20,&DAT_1806bd960,&local_30);
  FUN_180697d00(local_20);
  return;
}


/* address=1806984f0 name=FUN_1806984f0 */

void FUN_1806984f0(undefined8 param_1,undefined param_2)

{
  undefined local_41;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined local_20 [24];
  
  local_40 = &local_41;
  local_38 = &LAB_1803e0170;
  local_28 = &DAT_180335830;
  local_41 = param_2;
  local_30 = param_1;
  FUN_1803f6380(local_20,&DAT_1806bd962,&local_40);
  FUN_180697d00(local_20);
  return;
}


/* address=180698550 name=FUN_180698550 */

void FUN_180698550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  code *local_18;
  undefined8 *local_10;
  undefined *local_8;
  
  local_20 = &local_38;
  local_18 = FUN_180404240;
  local_10 = &local_30;
  local_8 = &LAB_180335910;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  FUN_180697b90(&DAT_1806bddbd,&local_20);
  return;
}


/* address=1806985b0 name=FUN_1806985b0 */

void FUN_1806985b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined *local_28;
  undefined8 *local_20;
  undefined *local_18;
  undefined8 local_10;
  longlong local_8;
  
  local_40 = param_1;
  local_38 = param_2;
  if (param_4 == 0) {
    local_30 = &local_40;
    local_28 = &LAB_180335950;
    FUN_180697b90(&DAT_1806bddf2,&local_30);
    return;
  }
  local_30 = &local_40;
  local_28 = &LAB_180335950;
  local_20 = &local_10;
  local_18 = &LAB_1803e1d90;
  local_10 = param_3;
  local_8 = param_4;
  FUN_180697b90(&DAT_1806bde1f,&local_30);
  return;
}


/* address=180698640 name=FUN_180698640 */

longlong ** FUN_180698640(longlong **param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_10;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      return param_1;
    }
    return (longlong **)0x0;
  }
  if (param_2 != (undefined8 *)0x0) {
    iVar2 = *(int *)param_2;
    *param_2 = 0;
    if (iVar2 == 1) {
      *param_1 = (longlong *)param_2[1];
      *(undefined *)(param_1 + 1) = 1;
      goto LAB_18069867d;
    }
  }
  plVar3 = (longlong *)FUN_1806a0200();
  cVar1 = *(char *)(param_1 + 1);
  local_10 = *param_1;
  *param_1 = plVar3;
  *(undefined *)(param_1 + 1) = 1;
  if (cVar1 == '\x01') {
    if (local_10 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    *local_10 = *local_10 + -1;
    UNLOCK();
    if (*local_10 == 0) {
      FUN_18039b650(&local_10);
      return param_1;
    }
    return param_1;
  }
  if (cVar1 == '\x02') {
    FUN_1806a19d0("internal error: entered unreachable code/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\sys\\thread_local\\native\\lazy.rs"
                  ,0x28,&DAT_1806be8a0);
    do {
      invalidInstructionException();
    } while( true );
  }
LAB_18069867d:
  FUN_1803ef1b0(param_1,&LAB_1802c8780);
  return param_1;
}


/* address=180698700 name=FUN_180698700 */

undefined8 * FUN_180698700(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_2 == '\x02') {
    local_48 = 0;
    uStack_40 = (undefined *)0x1;
    local_38 = ZEXT816(0);
    FUN_18069aef0(&local_48,0,1,1,1);
    *uStack_40 = 1;
    if (local_38._0_8_ == 0) {
      local_38._0_8_ = 1;
    }
    param_1[3] = local_38._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_48._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_40._4_4_;
    uVar1 = 1;
  }
  else {
    local_48 = 0;
    uStack_40 = (undefined *)0x1;
    local_38 = ZEXT816(0);
    FUN_18069aef0(&local_48,0,1,1,1);
    *uStack_40 = 0;
    if (local_38._0_8_ == 0) {
      local_38._0_8_ = 1;
    }
    local_38._8_8_ = 1;
    FUN_1802f5f00(param_2,&local_48);
    param_1[3] = local_38._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_48._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_40._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=180698890 name=FUN_180698890 */

undefined8 * FUN_180698890(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_2 == '\x02') {
    local_48 = 0;
    uStack_40 = (undefined *)0x1;
    local_38 = ZEXT816(0);
    FUN_18069aef0(&local_48,0,1,1,1);
    *uStack_40 = 1;
    if (local_38._0_8_ == 0) {
      local_38._0_8_ = 1;
    }
    param_1[3] = local_38._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_48._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_40._4_4_;
    uVar1 = 1;
  }
  else {
    local_48 = 0;
    uStack_40 = (undefined *)0x1;
    local_38 = ZEXT816(0);
    FUN_18069aef0(&local_48,0,1,1,1);
    *uStack_40 = 0;
    if (local_38._0_8_ == 0) {
      local_38._0_8_ = 1;
    }
    local_38._8_8_ = 1;
    FUN_1802f56d0(param_2,&local_48);
    param_1[3] = local_38._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_48._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_40._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=180698a20 name=FUN_180698a20 */

undefined8 * FUN_180698a20(undefined8 *param_1,short *param_2)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined local_38 [16];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_2 == -1) {
    local_48 = 0;
    uStack_40 = (undefined *)0x1;
    local_38 = ZEXT816(0);
    FUN_18069aef0(&local_48,0,1,1,1);
    *uStack_40 = 1;
    if (local_38._0_8_ == 0) {
      local_38._0_8_ = 1;
    }
    param_1[3] = local_38._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_48._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_40._4_4_;
    uVar1 = 1;
  }
  else {
    local_48 = 0;
    uStack_40 = (undefined *)0x1;
    local_38 = ZEXT816(0);
    FUN_18069aef0(&local_48,0,1,1,1);
    *uStack_40 = 0;
    if (local_38._0_8_ == 0) {
      local_38._0_8_ = 1;
    }
    local_38._8_8_ = 1;
    FUN_1802f5db0(param_2,&local_48);
    param_1[3] = local_38._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_48._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_40._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=180698bb0 name=FUN_180698bb0 */

undefined8 * FUN_180698bb0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [23];
  undefined local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_2 == -2) {
    local_98 = 0;
    uStack_90 = (undefined *)0x1;
    local_88 = ZEXT816(0);
    FUN_18069aef0(&local_98,0,1,1,1);
    *uStack_90 = 1;
    if (local_88._0_8_ == 0) {
      local_88._0_8_ = 1;
    }
    param_1[3] = local_88._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_98;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_98._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_90._4_4_;
    uVar1 = 1;
  }
  else {
    local_58 = param_2[8];
    local_98 = *param_2;
    uStack_90 = (undefined *)param_2[1];
    local_88 = *(undefined (*) [16])(param_2 + 2);
    local_78 = *(undefined4 *)(param_2 + 4);
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_70 = *(undefined4 *)(param_2 + 5);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_68 = *(undefined4 *)(param_2 + 6);
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_60 = *(undefined4 *)(param_2 + 7);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x3c);
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40._0_16_ = ZEXT816(0);
    local_29 = 0;
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 0;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    local_40._8_8_ = 1;
    local_29 = 1;
    FUN_1802f5a10(param_2,&local_50);
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=180698da0 name=FUN_180698da0 */

undefined8 * FUN_180698da0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [23];
  undefined local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_2 == -2) {
    local_98 = 0;
    uStack_90 = (undefined *)0x1;
    local_88 = ZEXT816(0);
    FUN_18069aef0(&local_98,0,1,1,1);
    *uStack_90 = 1;
    if (local_88._0_8_ == 0) {
      local_88._0_8_ = 1;
    }
    param_1[3] = local_88._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_98;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_98._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_90._4_4_;
    uVar1 = 1;
  }
  else {
    local_58 = param_2[8];
    local_98 = *param_2;
    uStack_90 = (undefined *)param_2[1];
    local_88 = *(undefined (*) [16])(param_2 + 2);
    local_78 = *(undefined4 *)(param_2 + 4);
    uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_70 = *(undefined4 *)(param_2 + 5);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_68 = *(undefined4 *)(param_2 + 6);
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_60 = *(undefined4 *)(param_2 + 7);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x3c);
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40._0_16_ = ZEXT816(0);
    local_29 = 1;
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 0;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    local_40._8_8_ = 1;
    local_29 = 0;
    FUN_1802f49c0(param_2,&local_50);
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=180698f80 name=FUN_180698f80 */

undefined8 * FUN_180698f80(undefined8 *param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [16];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 == 2) {
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40 = ZEXT816(0);
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 1;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 1;
  }
  else {
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40 = ZEXT816(0);
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 0;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    local_40._8_8_ = 1;
    FUN_1802f4fc0(param_2,param_3,&local_50);
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=180699120 name=FUN_180699120 */

undefined8 * FUN_180699120(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [16];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 == 2) {
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40 = ZEXT816(0);
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 1;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 1;
  }
  else {
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40 = ZEXT816(0);
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 0;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    local_40._8_8_ = 1;
    FUN_1802f5100(param_2,param_3,&local_50);
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=1806992c0 name=FUN_1806992c0 */

undefined8 * FUN_1806992c0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [23];
  undefined local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_2 == -1) {
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40._0_16_ = ZEXT816(0);
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 1;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 1;
  }
  else {
    local_58 = param_2[2];
    local_68 = *(undefined4 *)param_2;
    uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_60 = *(undefined4 *)(param_2 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40._0_16_ = ZEXT816(0);
    local_29 = 1;
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 0;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    local_40._8_8_ = 1;
    local_78 = param_2[2];
    local_88 = *(undefined4 *)param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = *(undefined4 *)(param_2 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_29 = 0;
    FUN_18024b790(&local_88,&local_50);
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=1806994a0 name=FUN_1806994a0 */

undefined8 * FUN_1806994a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined local_98 [16];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [23];
  undefined local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int *)param_2 == -1) {
    local_a8 = 0;
    uStack_a0 = (undefined *)0x1;
    local_98 = ZEXT816(0);
    FUN_18069aef0(&local_a8,0,1,1,1);
    *uStack_a0 = 1;
    if (local_98._0_8_ == 0) {
      local_98._0_8_ = 1;
    }
    param_1[3] = local_98._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_a0._4_4_;
    uVar1 = 1;
  }
  else {
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40._0_16_ = ZEXT816(0);
    local_29 = 1;
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 0;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    local_40._8_8_ = 1;
    local_68 = *(int *)(param_2 + 8);
    iStack_64 = *(int *)((longlong)param_2 + 0x44);
    iStack_60 = *(int *)(param_2 + 9);
    iStack_5c = *(int *)((longlong)param_2 + 0x4c);
    local_a8 = *param_2;
    uStack_a0 = (undefined *)param_2[1];
    local_98 = *(undefined (*) [16])(param_2 + 2);
    local_88 = *(int *)(param_2 + 4);
    iStack_84 = *(int *)((longlong)param_2 + 0x24);
    iStack_80 = *(int *)(param_2 + 5);
    iStack_7c = *(int *)((longlong)param_2 + 0x2c);
    local_78 = *(int *)(param_2 + 6);
    iStack_74 = *(int *)((longlong)param_2 + 0x34);
    iStack_70 = *(int *)(param_2 + 7);
    iStack_6c = *(int *)((longlong)param_2 + 0x3c);
    local_29 = 0;
    FUN_180341250(&local_a8,&local_50);
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=1806996b0 name=FUN_1806996b0 */

undefined8 * FUN_1806996b0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [16];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 == -1) {
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40 = ZEXT816(0);
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 1;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 1;
  }
  else {
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40 = ZEXT816(0);
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 0;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    local_40._8_8_ = 1;
    FUN_180344fd0(param_2,param_3,&local_50);
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=180699850 name=FUN_180699850 */

undefined8 * FUN_180699850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined local_98 [16];
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined local_40 [23];
  undefined local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(int *)param_2 == -1) {
    local_a8 = 0;
    uStack_a0 = (undefined *)0x1;
    local_98 = ZEXT816(0);
    FUN_18069aef0(&local_a8,0,1,1,1);
    *uStack_a0 = 1;
    if (local_98._0_8_ == 0) {
      local_98._0_8_ = 1;
    }
    param_1[3] = local_98._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_a0._4_4_;
    uVar1 = 1;
  }
  else {
    local_50 = 0;
    uStack_48 = (undefined *)0x1;
    local_40._0_16_ = ZEXT816(0);
    local_29 = 1;
    FUN_18069aef0(&local_50,0,1,1,1);
    *uStack_48 = 0;
    if (local_40._0_8_ == 0) {
      local_40._0_8_ = 1;
    }
    local_40._8_8_ = 1;
    local_68 = *(int *)(param_2 + 8);
    iStack_64 = *(int *)((longlong)param_2 + 0x44);
    iStack_60 = *(int *)(param_2 + 9);
    iStack_5c = *(int *)((longlong)param_2 + 0x4c);
    local_a8 = *param_2;
    uStack_a0 = (undefined *)param_2[1];
    local_98 = *(undefined (*) [16])(param_2 + 2);
    local_88 = *(int *)(param_2 + 4);
    iStack_84 = *(int *)((longlong)param_2 + 0x24);
    iStack_80 = *(int *)(param_2 + 5);
    iStack_7c = *(int *)((longlong)param_2 + 0x2c);
    local_78 = *(int *)(param_2 + 6);
    iStack_74 = *(int *)((longlong)param_2 + 0x34);
    iStack_70 = *(int *)(param_2 + 7);
    iStack_6c = *(int *)((longlong)param_2 + 0x3c);
    local_29 = 0;
    FUN_180340fd0(&local_a8,&local_50);
    param_1[3] = local_40._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_48._4_4_;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=180699c30 name=FUN_180699c30 */

undefined8 * FUN_180699c30(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined local_30 [16];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (param_2 == '\0') {
    local_40 = 0;
    uStack_38 = (undefined *)0x1;
    local_30 = ZEXT816(0);
    FUN_18069aef0(&local_40,0,1,1,1);
    *uStack_38 = 0;
    if (local_30._0_8_ == 0) {
      local_30._0_8_ = 1;
    }
    param_1[3] = local_30._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_40._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_38._4_4_;
    uVar1 = 0;
  }
  else {
    local_40 = 0;
    uStack_38 = (undefined *)0x1;
    local_30 = ZEXT816(0);
    FUN_18069aef0(&local_40,0,1,1,1);
    *uStack_38 = 1;
    if (local_30._0_8_ == 0) {
      local_30._0_8_ = 1;
    }
    param_1[3] = local_30._0_8_;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_40._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_38._4_4_;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return param_1;
}


/* address=180699f90 name=FUN_180699f90 */

undefined8 FUN_180699f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined local_48 [24];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_18069a060(local_48);
  uVar1 = FUN_18069f8b0(local_48,param_2,param_3);
  FUN_180306450(local_30);
  return uVar1;
}


/* address=18069a020 name=FUN_18069a020 */

void FUN_18069a020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined local_30 [24];
  
  FUN_18069a060(local_30,param_1);
  FUN_18069f8b0(local_30,param_2,param_3);
  return;
}


/* address=18069a060 name=FUN_18069a060 */

void FUN_18069a060(undefined8 param_1,byte *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00018069a071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((longlong)&UINT_1806c4b00 + (longlong)(int)(&UINT_1806c4b00)[*param_2]))();
  return;
}


/* address=18069a170 name=FUN_18069a170 */

void FUN_18069a170(undefined8 *param_1)

{
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = *param_1;
  local_30 = param_1[1];
  local_19 = 0;
  FUN_1803e68f0(&local_98);
  local_48 = local_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  local_58 = local_88;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  local_68 = local_98;
  uStack_64 = uStack_94;
  uStack_60 = uStack_90;
  uStack_5c = uStack_8c;
  local_19 = 1;
  FUN_18069a220(param_1,&local_68);
  return;
}


/* address=18069a220 name=FUN_18069a220 */

void FUN_18069a220(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar14 = *param_2;
  uVar15 = param_2[1];
  uVar16 = param_2[2];
  uVar17 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  uVar8 = param_2[10];
  uVar9 = param_2[0xb];
  uVar10 = *param_1;
  uVar11 = param_1[1];
  uVar12 = param_1[2];
  uVar13 = param_1[3];
  uVar1 = *(undefined8 *)(param_1 + 4);
  FUN_180339d20();
  puVar18 = (undefined4 *)thunk_FUN_1803e4c20(0x50,8);
  if (puVar18 != (undefined4 *)0x0) {
    local_18 = (undefined4)uVar1;
    uStack_14 = (undefined4)((ulonglong)uVar1 >> 0x20);
    puVar18[0x10] = uVar12;
    puVar18[0x11] = uVar13;
    puVar18[0x12] = local_18;
    puVar18[0x13] = uStack_14;
    puVar18[0xc] = uVar8;
    puVar18[0xd] = uVar9;
    puVar18[0xe] = uVar10;
    puVar18[0xf] = uVar11;
    puVar18[8] = uVar4;
    puVar18[9] = uVar5;
    puVar18[10] = uVar6;
    puVar18[0xb] = uVar7;
    puVar18[4] = uVar16;
    puVar18[5] = uVar17;
    puVar18[6] = uVar2;
    puVar18[7] = uVar3;
    *puVar18 = 0x806c50d0;
    puVar18[1] = 1;
    puVar18[2] = uVar14;
    puVar18[3] = uVar15;
    return;
  }
  FUN_1806a1521(8,0x50);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069a2f1 name=FUN_18069a2f1 */

void FUN_18069a2f1(void)

{
  undefined local_19;
  undefined **local_18;
  undefined *local_10;
  undefined *local_8;
  
  if (DAT_18093ac00 != 0) {
    local_18 = &local_10;
    local_10 = &DAT_18093abf0;
    local_8 = &local_19;
    FUN_1806a0a20(&DAT_18093ac00,1,&local_18,&DAT_1806c5110,
                  &PTR_s__rustc_48a229ceaefd4985c50990b14_1806c5188);
  }
  return;
}


/* address=18069a350 name=FUN_18069a350 */

/* WARNING: Removing unreachable block (ram,0x00018069a805) */
/* WARNING: Removing unreachable block (ram,0x00018069a6e0) */
/* WARNING: Removing unreachable block (ram,0x00018069a7a1) */
/* WARNING: Removing unreachable block (ram,0x00018069a7aa) */
/* WARNING: Removing unreachable block (ram,0x00018069a7c6) */
/* WARNING: Removing unreachable block (ram,0x00018069a708) */
/* WARNING: Removing unreachable block (ram,0x00018069a7c8) */
/* WARNING: Removing unreachable block (ram,0x00018069a7d1) */
/* WARNING: Removing unreachable block (ram,0x00018069a71d) */
/* WARNING: Removing unreachable block (ram,0x00018069a7e0) */
/* WARNING: Removing unreachable block (ram,0x00018069a739) */
/* WARNING: Removing unreachable block (ram,0x00018069a82e) */
/* WARNING: Removing unreachable block (ram,0x00018069a768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18069a350(undefined (**param_1) [16],ulonglong param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined auVar5 [16];
  ushort uVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined (*pauVar11) [16];
  ulonglong uVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined (*pauVar18) [16];
  longlong lVar19;
  undefined *puVar20;
  ulonglong uVar21;
  undefined (*pauVar22) [16];
  undefined (*pauVar23) [16];
  undefined (*pauVar24) [16];
  longlong lVar25;
  bool bVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  
  auVar27 = _DAT_1806c50b0;
  pauVar2 = param_1[3];
  puVar13 = *pauVar2 + param_2;
  if (CARRY8(param_2,(ulonglong)pauVar2)) goto LAB_18069a47b;
  pauVar3 = param_1[1];
  puVar20 = *pauVar3 + 1;
  pauVar24 = (undefined (*) [16])
             (((ulonglong)puVar20 & 0xfffffffffffffff8) - ((ulonglong)puVar20 >> 3));
  if (pauVar3 < (undefined (*) [16])&DAT_00000008) {
    pauVar24 = pauVar3;
  }
  if ((undefined *)((ulonglong)pauVar24 >> 1) < puVar13) {
    puVar20 = *pauVar24 + 1;
    if (*pauVar24 + 1 <= puVar13) {
      puVar20 = puVar13;
    }
    if (puVar20 < (undefined *)0xf) {
      uVar10 = 4;
      if ((undefined *)0x3 < puVar20) {
        uVar10 = (ulonglong)((uint)puVar20 & 8) + 8;
      }
    }
    else {
      if ((ulonglong)puVar20 >> 0x3d != 0) goto LAB_18069a47b;
      uVar10 = (ulonglong)((longlong)puVar20 * 8) / 7;
      uVar10 = (((longlong)puVar20 * 8 - uVar10 >> 1) + uVar10 >> 2) - 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = (0xffffffffffffffffU >> (~(byte)lVar9 & 0x3f)) + 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar10;
    if (SUB168(auVar5 * ZEXT816(0x18),8) == 0) {
      uVar21 = SUB168(auVar5 * ZEXT816(0x18),0) + 0xfU & 0xfffffffffffffff0;
      uVar12 = uVar10 + 0x10;
      uVar17 = uVar21 + uVar12;
      if ((byte)(0x7ffffffffffffff0 < uVar17 | CARRY8(uVar21,uVar12)) == 0) {
        FUN_180339d20();
        lVar9 = thunk_FUN_1803e4c20(uVar17,0x10);
        if (lVar9 == 0) {
          uVar8 = FUN_1803f5190(1,0x10,uVar17);
          return uVar8;
        }
        pauVar24 = (undefined (*) [16])(uVar10 - 1);
        pauVar11 = (undefined (*) [16])((uVar10 & 0xfffffffffffffff8) - (uVar10 >> 3));
        if (uVar10 < 9) {
          pauVar11 = pauVar24;
        }
        pauVar23 = (undefined (*) [16])(lVar9 + uVar21);
        FUN_1806924e0(pauVar23,0xff,uVar12);
        pauVar4 = *param_1;
        if (pauVar2 != (undefined (*) [16])0x0) {
          auVar27 = *pauVar4;
          uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar27[15] >> 7) << 0xf);
          lVar9 = 0;
          pauVar18 = pauVar2;
          pauVar22 = pauVar4;
          do {
            if ((short)uVar16 == 0) {
              do {
                auVar27 = pauVar22[1];
                pauVar22 = pauVar22 + 1;
                uVar16 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar27[15] >> 7) << 0xf) ^ 0xffff;
                lVar9 = lVar9 + 0x10;
              } while (uVar16 == 0);
            }
            uVar14 = 0;
            for (uVar15 = uVar16; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            lVar25 = (ulonglong)uVar14 + lVar9;
            uVar10 = FUN_180332530(param_3,(longlong)pauVar4 + lVar25 * -0x18 + -0x18);
            uVar12 = uVar10 & (ulonglong)pauVar24;
            auVar27 = *(undefined (*) [16])(*pauVar23 + uVar12);
            uVar6 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar27[15] >> 7) << 0xf;
            uVar14 = (uint)uVar6;
            if (uVar6 == 0) {
              lVar19 = 0x10;
              do {
                uVar12 = uVar12 + lVar19 & (ulonglong)pauVar24;
                auVar27 = *(undefined (*) [16])(*pauVar23 + uVar12);
                lVar19 = lVar19 + 0x10;
                uVar14 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar27[15] >> 7) << 0xf);
              } while (uVar14 == 0);
            }
            uVar15 = 0;
            for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar12 = uVar15 + uVar12 & (ulonglong)pauVar24;
            if (-1 < (char)(*pauVar23)[uVar12]) {
              auVar27 = *pauVar23;
              uVar14 = 0;
              for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar27[15] >> 7) << 0xf);
                  (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
                uVar14 = uVar14 + 1;
              }
              uVar12 = (ulonglong)uVar14;
            }
            uVar16 = uVar16 - 1 & uVar16;
            pauVar18 = (undefined (*) [16])(pauVar18[-1] + 0xf);
            bVar7 = (byte)(uVar10 >> 0x39);
            (*pauVar23)[uVar12] = bVar7;
            pauVar23[1][uVar12 - 0x10 & (ulonglong)pauVar24] = bVar7;
            *(undefined (*) [16])((longlong)pauVar23 + uVar12 * -0x18 + -0x18) =
                 *(undefined (*) [16])((longlong)pauVar4 + lVar25 * -0x18 + -0x18);
            *(undefined8 *)((longlong)pauVar23 + uVar12 * -0x18 + -8) =
                 *(undefined8 *)((longlong)pauVar4 + lVar25 * -0x18 + -8);
          } while (pauVar18 != (undefined (*) [16])0x0);
        }
        *param_1 = pauVar23;
        param_1[1] = pauVar24;
        param_1[2] = (undefined (*) [16])((longlong)pauVar11 - (longlong)pauVar2);
        if (pauVar3 == (undefined (*) [16])0x0) {
          return 0xffffffffffffffff;
        }
        uVar10 = (longlong)pauVar3 * 0x18 + 0x27U & 0xfffffffffffffff0;
        if (pauVar3[1] + uVar10 + 1 == (undefined *)0x0) {
          return 0xffffffffffffffff;
        }
        thunk_FUN_1803e4c80((longlong)pauVar4 - uVar10,pauVar3[1] + uVar10 + 1,0x10);
        goto LAB_18069a86e;
      }
    }
LAB_18069a47b:
    uVar8 = FUN_1803f5160(1);
  }
  else {
    if (puVar20 == (undefined *)0x0) {
      pauVar24 = (undefined (*) [16])0x0;
    }
    else {
      pauVar11 = *param_1;
      uVar10 = (((ulonglong)puVar20 >> 4) + 1) - (ulonglong)(((ulonglong)puVar20 & 0xf) == 0);
      if (uVar10 == 1) {
        lVar9 = 0;
LAB_18069a688:
        pcVar1 = *pauVar11 + lVar9;
        auVar27[0] = -(*pcVar1 < '\0');
        auVar27[1] = -(pcVar1[1] < '\0');
        auVar27[2] = -(pcVar1[2] < '\0');
        auVar27[3] = -(pcVar1[3] < '\0');
        auVar27[4] = -(pcVar1[4] < '\0');
        auVar27[5] = -(pcVar1[5] < '\0');
        auVar27[6] = -(pcVar1[6] < '\0');
        auVar27[7] = -(pcVar1[7] < '\0');
        auVar27[8] = -(pcVar1[8] < '\0');
        auVar27[9] = -(pcVar1[9] < '\0');
        auVar27[10] = -(pcVar1[10] < '\0');
        auVar27[11] = -(pcVar1[0xb] < '\0');
        auVar27[12] = -(pcVar1[0xc] < '\0');
        auVar27[13] = -(pcVar1[0xd] < '\0');
        auVar27[14] = -(pcVar1[0xe] < '\0');
        auVar27[15] = -(pcVar1[0xf] < '\0');
        *(undefined (*) [16])(*pauVar11 + lVar9) = auVar27 | _DAT_1806c50b0;
      }
      else {
        uVar12 = uVar10 & 0x1ffffffffffffffe;
        lVar9 = 0;
        do {
          pcVar1 = *pauVar11 + lVar9;
          auVar28[0] = -(*pcVar1 < '\0');
          auVar28[1] = -(pcVar1[1] < '\0');
          auVar28[2] = -(pcVar1[2] < '\0');
          auVar28[3] = -(pcVar1[3] < '\0');
          auVar28[4] = -(pcVar1[4] < '\0');
          auVar28[5] = -(pcVar1[5] < '\0');
          auVar28[6] = -(pcVar1[6] < '\0');
          auVar28[7] = -(pcVar1[7] < '\0');
          auVar28[8] = -(pcVar1[8] < '\0');
          auVar28[9] = -(pcVar1[9] < '\0');
          auVar28[10] = -(pcVar1[10] < '\0');
          auVar28[11] = -(pcVar1[0xb] < '\0');
          auVar28[12] = -(pcVar1[0xc] < '\0');
          auVar28[13] = -(pcVar1[0xd] < '\0');
          auVar28[14] = -(pcVar1[0xe] < '\0');
          auVar28[15] = -(pcVar1[0xf] < '\0');
          *(undefined (*) [16])(*pauVar11 + lVar9) = auVar28 | auVar27;
          pcVar1 = pauVar11[1] + lVar9;
          auVar29[0] = -(*pcVar1 < '\0');
          auVar29[1] = -(pcVar1[1] < '\0');
          auVar29[2] = -(pcVar1[2] < '\0');
          auVar29[3] = -(pcVar1[3] < '\0');
          auVar29[4] = -(pcVar1[4] < '\0');
          auVar29[5] = -(pcVar1[5] < '\0');
          auVar29[6] = -(pcVar1[6] < '\0');
          auVar29[7] = -(pcVar1[7] < '\0');
          auVar29[8] = -(pcVar1[8] < '\0');
          auVar29[9] = -(pcVar1[9] < '\0');
          auVar29[10] = -(pcVar1[10] < '\0');
          auVar29[11] = -(pcVar1[0xb] < '\0');
          auVar29[12] = -(pcVar1[0xc] < '\0');
          auVar29[13] = -(pcVar1[0xd] < '\0');
          auVar29[14] = -(pcVar1[0xe] < '\0');
          auVar29[15] = -(pcVar1[0xf] < '\0');
          *(undefined (*) [16])(pauVar11[1] + lVar9) = auVar29 | auVar27;
          lVar9 = lVar9 + 0x20;
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
        if ((uVar10 & 1) != 0) goto LAB_18069a688;
      }
      if (puVar20 < &DAT_00000010) {
        puVar13 = &DAT_00000010;
      }
      else {
        puVar13 = puVar20;
        puVar20 = &DAT_00000010;
      }
      FUN_180691e40(puVar13 + (longlong)pauVar11,pauVar11,puVar20);
      pauVar11 = (undefined (*) [16])0x0;
      do {
        bVar26 = pauVar11 != pauVar3;
        pauVar11 = (undefined (*) [16])(*pauVar11 + 1);
      } while (bVar26);
    }
    param_1[2] = (undefined (*) [16])((longlong)pauVar24 - (longlong)pauVar2);
LAB_18069a86e:
    uVar8 = 0xffffffffffffffff;
  }
  return uVar8;
}


/* address=18069a900 name=FUN_18069a900 */

/* WARNING: Removing unreachable block (ram,0x00018069adb5) */
/* WARNING: Removing unreachable block (ram,0x00018069ac90) */
/* WARNING: Removing unreachable block (ram,0x00018069ad51) */
/* WARNING: Removing unreachable block (ram,0x00018069ad5a) */
/* WARNING: Removing unreachable block (ram,0x00018069ad76) */
/* WARNING: Removing unreachable block (ram,0x00018069acb8) */
/* WARNING: Removing unreachable block (ram,0x00018069ad78) */
/* WARNING: Removing unreachable block (ram,0x00018069ad81) */
/* WARNING: Removing unreachable block (ram,0x00018069accd) */
/* WARNING: Removing unreachable block (ram,0x00018069ad90) */
/* WARNING: Removing unreachable block (ram,0x00018069ace9) */
/* WARNING: Removing unreachable block (ram,0x00018069adde) */
/* WARNING: Removing unreachable block (ram,0x00018069ad18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18069a900(undefined (**param_1) [16],ulonglong param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined auVar5 [16];
  ushort uVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined (*pauVar11) [16];
  ulonglong uVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined (*pauVar18) [16];
  longlong lVar19;
  undefined *puVar20;
  ulonglong uVar21;
  undefined (*pauVar22) [16];
  undefined (*pauVar23) [16];
  undefined (*pauVar24) [16];
  longlong lVar25;
  bool bVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  
  auVar27 = _DAT_1806c50b0;
  pauVar2 = param_1[3];
  puVar13 = *pauVar2 + param_2;
  if (CARRY8(param_2,(ulonglong)pauVar2)) goto LAB_18069aa2b;
  pauVar3 = param_1[1];
  puVar20 = *pauVar3 + 1;
  pauVar24 = (undefined (*) [16])
             (((ulonglong)puVar20 & 0xfffffffffffffff8) - ((ulonglong)puVar20 >> 3));
  if (pauVar3 < (undefined (*) [16])&DAT_00000008) {
    pauVar24 = pauVar3;
  }
  if ((undefined *)((ulonglong)pauVar24 >> 1) < puVar13) {
    puVar20 = *pauVar24 + 1;
    if (*pauVar24 + 1 <= puVar13) {
      puVar20 = puVar13;
    }
    if (puVar20 < (undefined *)0xf) {
      uVar10 = 4;
      if ((undefined *)0x3 < puVar20) {
        uVar10 = (ulonglong)((uint)puVar20 & 8) + 8;
      }
    }
    else {
      if ((ulonglong)puVar20 >> 0x3d != 0) goto LAB_18069aa2b;
      uVar10 = (ulonglong)((longlong)puVar20 * 8) / 7;
      uVar10 = (((longlong)puVar20 * 8 - uVar10 >> 1) + uVar10 >> 2) - 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar10 = (0xffffffffffffffffU >> (~(byte)lVar9 & 0x3f)) + 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar10;
    if (SUB168(auVar5 * ZEXT816(0x18),8) == 0) {
      uVar21 = SUB168(auVar5 * ZEXT816(0x18),0) + 0xfU & 0xfffffffffffffff0;
      uVar12 = uVar10 + 0x10;
      uVar17 = uVar21 + uVar12;
      if ((byte)(0x7ffffffffffffff0 < uVar17 | CARRY8(uVar21,uVar12)) == 0) {
        FUN_180339d20();
        lVar9 = thunk_FUN_1803e4c20(uVar17,0x10);
        if (lVar9 == 0) {
          uVar8 = FUN_1803f5190(1,0x10,uVar17);
          return uVar8;
        }
        pauVar24 = (undefined (*) [16])(uVar10 - 1);
        pauVar11 = (undefined (*) [16])((uVar10 & 0xfffffffffffffff8) - (uVar10 >> 3));
        if (uVar10 < 9) {
          pauVar11 = pauVar24;
        }
        pauVar23 = (undefined (*) [16])(lVar9 + uVar21);
        FUN_1806924e0(pauVar23,0xff,uVar12);
        pauVar4 = *param_1;
        if (pauVar2 != (undefined (*) [16])0x0) {
          auVar27 = *pauVar4;
          uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar27[15] >> 7) << 0xf);
          lVar9 = 0;
          pauVar18 = pauVar2;
          pauVar22 = pauVar4;
          do {
            if ((short)uVar16 == 0) {
              do {
                auVar27 = pauVar22[1];
                pauVar22 = pauVar22 + 1;
                uVar16 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar27[15] >> 7) << 0xf) ^ 0xffff;
                lVar9 = lVar9 + 0x10;
              } while (uVar16 == 0);
            }
            uVar14 = 0;
            for (uVar15 = uVar16; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            lVar25 = (ulonglong)uVar14 + lVar9;
            uVar10 = FUN_180332970(param_3,(longlong)pauVar4 + lVar25 * -0x18 + -0x18);
            uVar12 = uVar10 & (ulonglong)pauVar24;
            auVar27 = *(undefined (*) [16])(*pauVar23 + uVar12);
            uVar6 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar27[15] >> 7) << 0xf;
            uVar14 = (uint)uVar6;
            if (uVar6 == 0) {
              lVar19 = 0x10;
              do {
                uVar12 = uVar12 + lVar19 & (ulonglong)pauVar24;
                auVar27 = *(undefined (*) [16])(*pauVar23 + uVar12);
                lVar19 = lVar19 + 0x10;
                uVar14 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar27[15] >> 7) << 0xf);
              } while (uVar14 == 0);
            }
            uVar15 = 0;
            for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar12 = uVar15 + uVar12 & (ulonglong)pauVar24;
            if (-1 < (char)(*pauVar23)[uVar12]) {
              auVar27 = *pauVar23;
              uVar14 = 0;
              for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar27[15] >> 7) << 0xf);
                  (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
                uVar14 = uVar14 + 1;
              }
              uVar12 = (ulonglong)uVar14;
            }
            uVar16 = uVar16 - 1 & uVar16;
            pauVar18 = (undefined (*) [16])(pauVar18[-1] + 0xf);
            bVar7 = (byte)(uVar10 >> 0x39);
            (*pauVar23)[uVar12] = bVar7;
            pauVar23[1][uVar12 - 0x10 & (ulonglong)pauVar24] = bVar7;
            *(undefined (*) [16])((longlong)pauVar23 + uVar12 * -0x18 + -0x18) =
                 *(undefined (*) [16])((longlong)pauVar4 + lVar25 * -0x18 + -0x18);
            *(undefined8 *)((longlong)pauVar23 + uVar12 * -0x18 + -8) =
                 *(undefined8 *)((longlong)pauVar4 + lVar25 * -0x18 + -8);
          } while (pauVar18 != (undefined (*) [16])0x0);
        }
        *param_1 = pauVar23;
        param_1[1] = pauVar24;
        param_1[2] = (undefined (*) [16])((longlong)pauVar11 - (longlong)pauVar2);
        if (pauVar3 == (undefined (*) [16])0x0) {
          return 0xffffffffffffffff;
        }
        uVar10 = (longlong)pauVar3 * 0x18 + 0x27U & 0xfffffffffffffff0;
        if (pauVar3[1] + uVar10 + 1 == (undefined *)0x0) {
          return 0xffffffffffffffff;
        }
        thunk_FUN_1803e4c80((longlong)pauVar4 - uVar10,pauVar3[1] + uVar10 + 1,0x10);
        goto LAB_18069ae1e;
      }
    }
LAB_18069aa2b:
    uVar8 = FUN_1803f5160(1);
  }
  else {
    if (puVar20 == (undefined *)0x0) {
      pauVar24 = (undefined (*) [16])0x0;
    }
    else {
      pauVar11 = *param_1;
      uVar10 = (((ulonglong)puVar20 >> 4) + 1) - (ulonglong)(((ulonglong)puVar20 & 0xf) == 0);
      if (uVar10 == 1) {
        lVar9 = 0;
LAB_18069ac38:
        pcVar1 = *pauVar11 + lVar9;
        auVar27[0] = -(*pcVar1 < '\0');
        auVar27[1] = -(pcVar1[1] < '\0');
        auVar27[2] = -(pcVar1[2] < '\0');
        auVar27[3] = -(pcVar1[3] < '\0');
        auVar27[4] = -(pcVar1[4] < '\0');
        auVar27[5] = -(pcVar1[5] < '\0');
        auVar27[6] = -(pcVar1[6] < '\0');
        auVar27[7] = -(pcVar1[7] < '\0');
        auVar27[8] = -(pcVar1[8] < '\0');
        auVar27[9] = -(pcVar1[9] < '\0');
        auVar27[10] = -(pcVar1[10] < '\0');
        auVar27[11] = -(pcVar1[0xb] < '\0');
        auVar27[12] = -(pcVar1[0xc] < '\0');
        auVar27[13] = -(pcVar1[0xd] < '\0');
        auVar27[14] = -(pcVar1[0xe] < '\0');
        auVar27[15] = -(pcVar1[0xf] < '\0');
        *(undefined (*) [16])(*pauVar11 + lVar9) = auVar27 | _DAT_1806c50b0;
      }
      else {
        uVar12 = uVar10 & 0x1ffffffffffffffe;
        lVar9 = 0;
        do {
          pcVar1 = *pauVar11 + lVar9;
          auVar28[0] = -(*pcVar1 < '\0');
          auVar28[1] = -(pcVar1[1] < '\0');
          auVar28[2] = -(pcVar1[2] < '\0');
          auVar28[3] = -(pcVar1[3] < '\0');
          auVar28[4] = -(pcVar1[4] < '\0');
          auVar28[5] = -(pcVar1[5] < '\0');
          auVar28[6] = -(pcVar1[6] < '\0');
          auVar28[7] = -(pcVar1[7] < '\0');
          auVar28[8] = -(pcVar1[8] < '\0');
          auVar28[9] = -(pcVar1[9] < '\0');
          auVar28[10] = -(pcVar1[10] < '\0');
          auVar28[11] = -(pcVar1[0xb] < '\0');
          auVar28[12] = -(pcVar1[0xc] < '\0');
          auVar28[13] = -(pcVar1[0xd] < '\0');
          auVar28[14] = -(pcVar1[0xe] < '\0');
          auVar28[15] = -(pcVar1[0xf] < '\0');
          *(undefined (*) [16])(*pauVar11 + lVar9) = auVar28 | auVar27;
          pcVar1 = pauVar11[1] + lVar9;
          auVar29[0] = -(*pcVar1 < '\0');
          auVar29[1] = -(pcVar1[1] < '\0');
          auVar29[2] = -(pcVar1[2] < '\0');
          auVar29[3] = -(pcVar1[3] < '\0');
          auVar29[4] = -(pcVar1[4] < '\0');
          auVar29[5] = -(pcVar1[5] < '\0');
          auVar29[6] = -(pcVar1[6] < '\0');
          auVar29[7] = -(pcVar1[7] < '\0');
          auVar29[8] = -(pcVar1[8] < '\0');
          auVar29[9] = -(pcVar1[9] < '\0');
          auVar29[10] = -(pcVar1[10] < '\0');
          auVar29[11] = -(pcVar1[0xb] < '\0');
          auVar29[12] = -(pcVar1[0xc] < '\0');
          auVar29[13] = -(pcVar1[0xd] < '\0');
          auVar29[14] = -(pcVar1[0xe] < '\0');
          auVar29[15] = -(pcVar1[0xf] < '\0');
          *(undefined (*) [16])(pauVar11[1] + lVar9) = auVar29 | auVar27;
          lVar9 = lVar9 + 0x20;
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
        if ((uVar10 & 1) != 0) goto LAB_18069ac38;
      }
      if (puVar20 < &DAT_00000010) {
        puVar13 = &DAT_00000010;
      }
      else {
        puVar13 = puVar20;
        puVar20 = &DAT_00000010;
      }
      FUN_180691e40(puVar13 + (longlong)pauVar11,pauVar11,puVar20);
      pauVar11 = (undefined (*) [16])0x0;
      do {
        bVar26 = pauVar11 != pauVar3;
        pauVar11 = (undefined (*) [16])(*pauVar11 + 1);
      } while (bVar26);
    }
    param_1[2] = (undefined (*) [16])((longlong)pauVar24 - (longlong)pauVar2);
LAB_18069ae1e:
    uVar8 = 0xffffffffffffffff;
  }
  return uVar8;
}


/* address=18069aea3 name=FUN_18069aea3 */

void FUN_18069aea3(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_1;
  local_8 = param_2;
  FUN_1806a18b5("VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\util\\linked_list.rs"
                ,&local_10,&DAT_1806c5360,&local_8,&DAT_1806c5360,0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069aef0 name=FUN_18069aef0 */

void FUN_18069aef0(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  if ((param_5 == 0) || (CARRY8(param_3,param_2))) {
    FUN_1806a153b(0);
    do {
      invalidInstructionException();
    } while( true );
  }
  uVar2 = *param_1 * 2;
  if (uVar2 < param_3 + param_2) {
    uVar2 = param_3 + param_2;
  }
  uVar1 = 8;
  if (param_5 != 1) {
    uVar1 = (ulonglong)(param_5 < 0x401) * 3 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar2;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar1,param_4,param_5);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar1;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069af90 name=FUN_18069af90 */

void FUN_18069af90(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x68);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069b000 name=FUN_18069b000 */

void FUN_18069b000(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x48);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069b070 name=FUN_18069b070 */

void FUN_18069b070(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x30);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069b0e0 name=FUN_18069b0e0 */

void FUN_18069b0e0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,8);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069b150 name=FUN_18069b150 */

void FUN_18069b150(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar5 = 1;
  if (0x8000000000000000U - param_5 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    lVar4 = 8;
    uVar3 = 0;
    goto LAB_18069b1f0;
  }
  if (param_2 == 0) {
    lVar4 = param_5;
    if (uVar3 != 0) {
      FUN_180339d20();
      lVar4 = thunk_FUN_1803e4c20(uVar3,param_5);
      goto joined_r0x00018069b1d4;
    }
  }
  else {
    lVar4 = thunk_FUN_1803e4cc0(param_3,param_6 * param_2,param_5,uVar3);
joined_r0x00018069b1d4:
    if (lVar4 == 0) {
      param_1[1] = param_5;
      lVar4 = 0x10;
      goto LAB_18069b1f0;
    }
  }
  param_1[1] = lVar4;
  lVar4 = 0x10;
  uVar5 = 0;
LAB_18069b1f0:
  *(ulonglong *)((longlong)param_1 + lVar4) = uVar3;
  *param_1 = uVar5;
  return;
}


/* address=18069b2c0 name=FUN_18069b2c0 */

void FUN_18069b2c0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x70);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069b330 name=FUN_18069b330 */

void FUN_18069b330(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,4,0x10);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069b450 name=FUN_18069b450 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18069b450(longlong *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iStack_13f;
  undefined3 uStack_13b;
  undefined4 uStack_fc;
  undefined7 uStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined uStack_dd;
  undefined uStack_d9;
  undefined uStack_d5;
  undefined3 uStack_d4;
  undefined uStack_cd;
  uint3 uStack_c8;
  uint uStack_c0;
  longlong local_68;
  ulonglong local_50;
  longlong lStack_48;
  ulonglong local_40;
  undefined local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar17 = param_1[3];
  lVar14 = uVar17 * 0x60;
  if (0x155555555555555 < uVar17) {
    uVar18 = 0;
LAB_18069b490:
    FUN_1806a153b(uVar18,lVar14);
    do {
      invalidInstructionException();
    } while( true );
  }
  if (lVar14 == 0) {
    lStack_48 = 8;
    local_50 = 0;
  }
  else {
    FUN_180339d20();
    uVar18 = 8;
    lStack_48 = thunk_FUN_1803e4c20(lVar14,8);
    if (lStack_48 == 0) goto LAB_18069b490;
    local_50 = uVar17;
    uVar17 = param_1[3];
  }
  local_40 = 0;
  uVar19 = (uVar17 - 1) + (ulonglong)(uVar17 == 0);
  if (local_50 < uVar19) {
    local_31 = 1;
    FUN_18069aef0(&local_50,0,uVar19,8,0x60);
    uVar5 = PTR_DAT_1806d0ce0._0_4_;
    uVar6 = PTR_DAT_1806d0ce0._4_4_;
    uVar7 = _UNK_1806d0ce8;
    uVar8 = _UNK_1806d0cec;
    uVar9 = _DAT_1806d0cf0;
    uVar10 = _UNK_1806d0cf4;
    uVar11 = _UNK_1806d0cf8;
    uVar12 = _UNK_1806d0cfc;
    puVar13 = PTR_DAT_18093b3f0;
    uVar19 = local_40;
  }
  else {
    uVar19 = 0;
    uVar5 = PTR_DAT_1806d0ce0._0_4_;
    uVar6 = PTR_DAT_1806d0ce0._4_4_;
    uVar7 = _UNK_1806d0ce8;
    uVar8 = _UNK_1806d0cec;
    uVar9 = _DAT_1806d0cf0;
    uVar10 = _UNK_1806d0cf4;
    uVar11 = _UNK_1806d0cf8;
    uVar12 = _UNK_1806d0cfc;
    puVar13 = PTR_DAT_18093b3f0;
  }
  PTR_DAT_1806d0ce0._0_4_ = uVar5;
  PTR_DAT_1806d0ce0._4_4_ = uVar6;
  _UNK_1806d0ce8 = uVar7;
  _UNK_1806d0cec = uVar8;
  _DAT_1806d0cf0 = uVar9;
  _UNK_1806d0cf4 = uVar10;
  _UNK_1806d0cf8 = uVar11;
  _UNK_1806d0cfc = uVar12;
  PTR_DAT_18093b3f0 = puVar13;
  if (1 < uVar17) {
    puVar16 = (ulonglong *)(uVar19 * 0x60 + lStack_48 + 0x58);
    uVar19 = (uVar17 - 1) + uVar19;
    uVar20 = 1;
    do {
      uStack_dd = (undefined)uVar6;
      uStack_d9 = (undefined)uVar7;
      uStack_d5 = (undefined)uVar8;
      uStack_d4 = (undefined3)((uint)uVar8 >> 8);
      uStack_cd = (undefined)uVar10;
      uStack_fc._3_1_ = (undefined)uVar11;
      uStack_f8 = (undefined7)(CONCAT44(uVar12,uVar11) >> 8);
      puVar16[-0xb] = (ulonglong)puVar13;
      *(undefined (*) [16])(puVar16 + -10) = ZEXT816(0);
      *(undefined (*) [16])(puVar16 + -8) = ZEXT816(0);
      *(undefined *)(puVar16 + -6) = 0;
      *(undefined4 *)((longlong)puVar16 + -0x2f) = local_e8;
      *(undefined4 *)((longlong)puVar16 + -0x2b) = uStack_e4;
      *(uint *)((longlong)puVar16 + -0x27) = CONCAT13(uStack_dd,(int3)((uint)uVar5 >> 8));
      *(uint *)((longlong)puVar16 + -0x23) = CONCAT13(uStack_d9,(int3)((uint)uVar6 >> 8));
      *(uint *)((longlong)puVar16 + -0x1f) = CONCAT13(uStack_d5,(int3)((uint)uVar7 >> 8));
      *(uint *)((longlong)puVar16 + -0x1b) = CONCAT13((char)uVar9,uStack_d4);
      *(uint *)((longlong)puVar16 + -0x17) = CONCAT13(uStack_cd,(int3)((uint)uVar9 >> 8));
      *(undefined4 *)((longlong)puVar16 + -0x13) = uStack_fc;
      puVar16[-2] = CONCAT71(uStack_f8,uStack_fc._3_1_);
      puVar16[-1] = 3;
      *puVar16 = uVar20;
      uVar20 = uVar20 + 1;
      puVar16 = puVar16 + 0xc;
    } while (uVar17 != uVar20);
  }
  uVar12 = _UNK_1806c987c;
  uVar11 = _UNK_1806c9878;
  uVar10 = _UNK_1806c9874;
  uVar9 = _DAT_1806c9870;
  uVar8 = _UNK_1806c986c;
  uVar7 = _UNK_1806c9868;
  uVar6 = PTR_DAT_1806c9860._4_4_;
  uVar5 = PTR_DAT_1806c9860._0_4_;
  local_e8 = SUB84(PTR_DAT_18093b3f0,0);
  uStack_e4 = (undefined4)((ulonglong)PTR_DAT_18093b3f0 >> 0x20);
  uStack_c0 = iStack_13f << 8;
  if (uVar19 == local_50) {
    local_40 = uVar19;
    FUN_1806a4280(&local_50);
  }
  lVar14 = uVar19 * 0x60;
  puVar1 = (undefined4 *)(lStack_48 + 0x50 + lVar14);
  *puVar1 = 3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x40;
  puVar1 = (undefined4 *)(lStack_48 + 0x40 + lVar14);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  uStack_c8 = SUB163(ZEXT816(0),7);
  puVar1 = (undefined4 *)(lStack_48 + 0x30 + lVar14);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar2 = (uint *)(lStack_48 + 0x20 + lVar14);
  *puVar2 = (uint)uStack_c8;
  puVar2[1] = 0;
  puVar2[2] = uStack_c0;
  puVar2[3] = CONCAT31(uStack_13b,(char)((uint)iStack_13f >> 0x18));
  puVar1 = (undefined4 *)(lStack_48 + 0x10 + lVar14);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1 = (undefined4 *)(lStack_48 + lVar14);
  *puVar1 = local_e8;
  puVar1[1] = uStack_e4;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar19 = uVar19 + 1;
  lVar14 = lStack_48;
  local_40 = uVar19;
  if (uVar19 < local_50) {
    if (uVar19 == 0) {
      lVar14 = 8;
      thunk_FUN_1803e4c80(lStack_48,local_50 * 0x60,8);
      lVar3 = *param_1;
      goto joined_r0x00018069b6d3;
    }
    lVar14 = thunk_FUN_1803e4cc0(lStack_48,local_50 * 0x60,8,uVar19 * 0x60);
    if (lVar14 == 0) {
      FUN_1806a153b(8,uVar19 * 0x60);
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  lVar3 = *param_1;
joined_r0x00018069b6d3:
  if (lVar3 != 0) {
    lVar4 = param_1[1];
    local_68 = 0;
    lVar15 = lVar3 + 0x30;
    while (lVar4 != local_68) {
      local_68 = local_68 + 1;
      FUN_18038cf00(lVar15);
      lVar15 = lVar15 + 0x60;
    }
    if (lVar4 != 0) {
      thunk_FUN_1803e4c80(lVar3,lVar4 * 0x60,8);
    }
  }
  *param_1 = lVar14;
  param_1[1] = uVar19;
  return;
}


/* address=18069b960 name=FUN_18069b960 */

void FUN_18069b960(void)

{
  char cVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_30 = 0;
  uStack_28 = 1;
  local_20 = 0;
  local_38 = 0x60000020;
  local_48 = &local_30;
  local_40 = &PTR_LAB_1806ca198;
  cVar1 = FUN_1803a3ea0(&local_11,&local_48);
  if (cVar1 == '\0') {
    local_58 = local_20;
    local_68 = (undefined4)local_30;
    uStack_64 = local_30._4_4_;
    uStack_60 = (undefined4)uStack_28;
    uStack_5c = uStack_28._4_4_;
    FUN_1803d3720(&local_68);
    return;
  }
  FUN_1806a1790("a Display implementation returned an error unexpectedly/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\string.rs"
                ,0x37,&local_11,&DAT_1806c9f20,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806ca250);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069ba40 name=FUN_18069ba40 */

void FUN_18069ba40(undefined8 param_1)

{
  char cVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_30 = 0;
  uStack_28 = 1;
  local_20 = 0;
  local_38 = 0x60000020;
  local_48 = &local_30;
  local_40 = &PTR_LAB_1806ca198;
  cVar1 = FUN_1803d0d50(param_1,&local_48);
  if (cVar1 == '\0') {
    local_58 = local_20;
    local_68 = (undefined4)local_30;
    uStack_64 = local_30._4_4_;
    uStack_60 = (undefined4)uStack_28;
    uStack_5c = uStack_28._4_4_;
    FUN_1803d3720(&local_68);
    return;
  }
  FUN_1806a1790("a Display implementation returned an error unexpectedly/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\string.rs"
                ,0x37,&local_11,&DAT_1806c9f20,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806ca250);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069bb20 name=FUN_18069bb20 */

void FUN_18069bb20(undefined param_1)

{
  char cVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 *local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_12;
  undefined local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_30 = 0;
  uStack_28 = 1;
  local_20 = 0;
  local_38 = 0x60000020;
  local_48 = &local_30;
  local_40 = &PTR_LAB_1806ca198;
  local_11 = param_1;
  cVar1 = FUN_1804041e0(&local_11,&local_48);
  if (cVar1 == '\0') {
    local_58 = local_20;
    local_68 = (undefined4)local_30;
    uStack_64 = local_30._4_4_;
    uStack_60 = (undefined4)uStack_28;
    uStack_5c = uStack_28._4_4_;
    FUN_1803d3720(&local_68);
    return;
  }
  FUN_1806a1790("a Display implementation returned an error unexpectedly/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\string.rs"
                ,0x37,&local_12,&DAT_1806c9f20,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806ca250);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069bc00 name=FUN_18069bc00 */

void FUN_18069bc00(int *param_1)

{
  char cVar1;
  int *local_68;
  int ***local_60;
  undefined **local_58;
  undefined8 local_50;
  int **local_48;
  undefined *puStack_40;
  undefined8 local_38;
  int **local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_30 = (int **)0x0;
  uStack_28 = 1;
  local_20 = 0;
  local_50 = 0x60000020;
  local_60 = &local_30;
  local_58 = &PTR_LAB_1806ca198;
  if (*param_1 == 1) {
    if (*(longlong *)(param_1 + 2) == 0) {
      cVar1 = FUN_18037fcc0(&local_60,&DAT_1806c9fad,0x21);
    }
    else if ((int)*(longlong *)(param_1 + 2) == 1) {
      local_68 = param_1 + 4;
      local_48 = &local_68;
      puStack_40 = &LAB_180335930;
      cVar1 = FUN_1803fc320(&local_30,&PTR_LAB_1806ca198,&DAT_1806c9fce,&local_48);
    }
    else {
      cVar1 = FUN_18037fcc0(&local_60,
                            "unexpected trailing characters; the end of input was expectedthe `Parsed` struct did not include enough information to construct the typefatal runtime error: thread local panicked on drop, aborting\nUnable to allocate another spanC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tracing-subscriber-0.3.23\\src\\registry\\sharded.rs"
                            ,0x3d);
    }
  }
  else if (*(char *)(param_1 + 6) == '\x02') {
    cVar1 = FUN_18037fcc0(&local_60,
                          "the `Parsed` struct did not include enough information to construct the typefatal runtime error: thread local panicked on drop, aborting\nUnable to allocate another spanC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tracing-subscriber-0.3.23\\src\\registry\\sharded.rs"
                          ,0x4c);
  }
  else {
    local_48 = (int **)(param_1 + 2);
    puStack_40 = &LAB_180335950;
    cVar1 = FUN_1803fc320(&local_30,&PTR_LAB_1806ca198,&DAT_1806ca466,&local_48);
  }
  if (cVar1 == '\0') {
    local_38 = local_20;
    local_48 = local_30;
    puStack_40 = (undefined *)uStack_28;
    FUN_1803d3720(&local_48);
    return;
  }
  FUN_1806a1790("a Display implementation returned an error unexpectedly/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\string.rs"
                ,0x37,&local_11,&DAT_1806c9f20,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806ca250);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069bdb0 name=FUN_18069bdb0 */

longlong FUN_18069bdb0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined local_48 [8];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_40 = param_2[1];
  local_38 = param_2[2];
  local_48[0] = 6;
  local_30 = param_2;
  local_28 = local_40;
  uVar1 = FUN_18069f8b0(local_48,&local_19,&DAT_1806c9d20);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined *)(param_1 + 7) = 0xff;
  if (*local_30 != 0) {
    thunk_FUN_1803e4c80(local_28,*local_30,1);
  }
  return param_1;
}


/* address=18069be70 name=FUN_18069be70 */

void FUN_18069be70(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined *local_28;
  undefined8 *local_20;
  undefined *local_18;
  undefined8 local_10;
  longlong local_8;
  
  local_40 = param_1;
  local_38 = param_2;
  if (param_4 == 0) {
    local_30 = &local_40;
    local_28 = &LAB_180335950;
    FUN_180697b90(&DAT_1806ca554,&local_30);
    return;
  }
  local_30 = &local_40;
  local_28 = &LAB_180335950;
  local_20 = &local_10;
  local_18 = &LAB_1803e1d90;
  local_10 = param_3;
  local_8 = param_4;
  FUN_180697b90(&DAT_1806ca57d,&local_30);
  return;
}


/* address=18069bf00 name=FUN_18069bf00 */

void FUN_18069bf00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  code *local_18;
  undefined8 *local_10;
  undefined *local_8;
  
  local_20 = &local_38;
  local_18 = FUN_180404240;
  local_10 = &local_30;
  local_8 = &LAB_180335910;
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  FUN_180697b90(&DAT_1806ca59d,&local_20);
  return;
}


/* address=18069bf60 name=FUN_18069bf60 */

void FUN_18069bf60(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined *local_28;
  undefined8 *local_20;
  undefined *local_18;
  undefined8 local_10;
  longlong local_8;
  
  local_40 = param_1;
  local_38 = param_2;
  if (param_4 == 0) {
    local_30 = &local_40;
    local_28 = &LAB_180335950;
    FUN_180697b90(&DAT_1806ca5d2,&local_30);
    return;
  }
  local_30 = &local_40;
  local_28 = &LAB_180335950;
  local_20 = &local_10;
  local_18 = &LAB_1803e1d90;
  local_10 = param_3;
  local_8 = param_4;
  FUN_180697b90(&DAT_1806ca5ff,&local_30);
  return;
}


/* address=18069bff0 name=FUN_18069bff0 */

void FUN_18069bff0(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined *local_b0;
  longlong local_a8;
  undefined **local_a0;
  code *local_98;
  undefined **local_90;
  code *local_88;
  undefined **local_80;
  code *local_78;
  undefined *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar6 = FUN_180481b70(PTR_s_C__Users_VssAdministrator__cargo_18093b3e0);
  LOCK();
  bVar10 = *(char *)(lVar6 + 8) == '\0';
  if (bVar10) {
    *(char *)(lVar6 + 8) = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_1806a05a0();
  }
  puVar3 = PTR_DAT_18093b330;
  if ((*(ulonglong *)PTR_DAT_18093b330 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(lVar6 + 9) != '\0') {
LAB_18069c054:
      if (((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0) &&
         (cVar5 = FUN_1806a1250(), cVar5 == '\0')) {
        *(undefined *)(lVar6 + 9) = 1;
      }
      goto LAB_18069c063;
    }
    bVar4 = 0;
    uVar1 = *(ulonglong *)(lVar6 + 0x28);
joined_r0x00018069c266:
    puVar7 = (undefined *)0x0;
    if (1 < uVar1) {
      lVar2 = *(longlong *)(lVar6 + 0x20);
      uVar9 = 0;
      if (*(ulonglong *)(lVar6 + 0x10) <= lVar2 + 1U) {
        uVar9 = *(ulonglong *)(lVar6 + 0x10);
      }
      *(ulonglong *)(lVar6 + 0x20) = (lVar2 - uVar9) + 1;
      param_2 = uVar1 - 1;
      *(longlong *)(lVar6 + 0x28) = param_2;
      puVar7 = *(undefined **)(*(longlong *)(lVar6 + 0x18) + lVar2 * 8);
    }
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = FUN_1806a1250(), cVar5 == '\0')) {
      *(undefined *)(lVar6 + 9) = 1;
    }
    LOCK();
    cVar5 = *(char *)(lVar6 + 8);
    *(char *)(lVar6 + 8) = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      WakeByAddressSingle(lVar6 + 8);
    }
    local_50 = puVar7;
    if (1 < uVar1) goto LAB_18069c106;
  }
  else {
    bVar4 = FUN_1806a1250();
    if (*(char *)(lVar6 + 9) == '\0') {
      bVar4 = bVar4 ^ 1;
      uVar1 = *(ulonglong *)(lVar6 + 0x28);
      goto joined_r0x00018069c266;
    }
    if (bVar4 != 0) goto LAB_18069c054;
LAB_18069c063:
    LOCK();
    cVar5 = *(char *)(lVar6 + 8);
    *(char *)(lVar6 + 8) = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      WakeByAddressSingle(lVar6 + 8);
    }
  }
  puVar8 = (ulonglong *)FUN_180481b70(PTR_s_C__Users_VssAdministrator__cargo_18093b3e0);
  LOCK();
  local_50 = (undefined *)*puVar8;
  *puVar8 = *puVar8 + 1;
  UNLOCK();
  if ((undefined *)0x1fff < local_50) {
    if (((*(ulonglong *)puVar3 & 0x7fffffffffffffff) == 0) ||
       (cVar5 = FUN_1806a1250(), cVar5 != '\0')) {
      local_60 = &DAT_1806ca9b0;
      local_58 = 0x20;
      local_a0 = &local_50;
      local_98 = FUN_180404240;
      local_90 = &local_60;
      local_88 = (code *)&LAB_180335950;
      local_80 = (undefined **)&DAT_1806ca9d0;
      local_78 = FUN_180404240;
      FUN_1806a19f0(&DAT_1806ca9d8,&local_a0,&PTR_s_C__Users_VssAdministrator__cargo_1806caab0);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = (longlong *)FUN_1803ec460();
    local_b0 = (undefined *)FUN_1803e8d00(&local_48);
    if (local_b0 == (undefined *)0x0) {
      param_2 = 9;
      local_b0 = &DAT_1806caac8;
    }
    local_60 = &DAT_1806ca9b0;
    local_58 = 0x20;
    local_a0 = &local_b0;
    local_98 = (code *)&LAB_180335950;
    local_90 = &local_50;
    local_88 = FUN_180404240;
    local_80 = &local_60;
    local_78 = (code *)&LAB_180335950;
    local_70 = &DAT_1806ca9d0;
    local_68 = FUN_180404240;
    local_a8 = param_2;
    FUN_1803eb640(&DAT_1806caad1,&local_a0);
    LOCK();
    *local_48 = *local_48 + -1;
    UNLOCK();
    if (*local_48 == 0) {
      FUN_1803e9430(&local_48);
    }
  }
LAB_18069c106:
  *param_1 = 1;
  param_1[1] = local_50;
  return;
}


/* address=18069c9b0 name=FUN_18069c9b0 */

void FUN_18069c9b0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,1,0x12);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069ca20 name=FUN_18069ca20 */

void FUN_18069ca20(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x18);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069ca90 name=FUN_18069ca90 */

void FUN_18069ca90(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x90);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069cb00 name=FUN_18069cb00 */

void FUN_18069cb00(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,1,0x11);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069cb70 name=FUN_18069cb70 */

void FUN_18069cb70(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x28);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069cbe0 name=FUN_18069cbe0 */

void FUN_18069cbe0(longlong *param_1)

{
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (longlong *)FUN_1806a3f20();
  local_38 = *param_1;
  *param_1 = 0;
  if (local_38 != 0) {
    local_30 = *(undefined4 *)(param_1 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_28 = *(undefined4 *)(param_1 + 2);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x14);
    FUN_180372870(&local_38,local_20);
    LOCK();
    *local_20 = *local_20 + -1;
    UNLOCK();
    if (*local_20 == 0) {
      FUN_18039b650(&local_20);
    }
    return;
  }
  FUN_1806a1770(&PTR_s_C__Users_VssAdministrator__cargo_1806cedb0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069cc90 name=FUN_18069cc90 */

void FUN_18069cc90(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  undefined4 local_37;
  undefined4 uStack_33;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = (longlong *)FUN_1806a3f20();
  local_38 = *(char *)(param_2 + 8);
  *(undefined *)(param_2 + 8) = 2;
  if (local_38 != '\x02') {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    FUN_1803729f0(param_1,&local_58,local_28);
    LOCK();
    *local_28 = *local_28 + -1;
    UNLOCK();
    if (*local_28 == 0) {
      FUN_18039b650(&local_28);
    }
    return;
  }
  FUN_1806a1770(&PTR_s_C__Users_VssAdministrator__cargo_1806cedb0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069cd50 name=FUN_18069cd50 */

ulonglong FUN_18069cd50(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  undefined4 local_37;
  undefined4 uStack_33;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = (longlong *)FUN_1806a3f20();
  local_38 = *(char *)(param_1 + 8);
  *(undefined *)(param_1 + 8) = 2;
  if (local_38 != '\x02') {
    local_58 = *param_1;
    uStack_54 = param_1[1];
    uStack_50 = param_1[2];
    uStack_4c = param_1[3];
    local_48 = param_1[4];
    uStack_44 = param_1[5];
    uStack_40 = param_1[6];
    uStack_3c = param_1[7];
    uVar1 = FUN_180373320(&local_58,local_28);
    LOCK();
    *local_28 = *local_28 + -1;
    UNLOCK();
    if (*local_28 == 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_18039b650(&local_28);
    }
    return uVar1;
  }
  FUN_1806a1770(&PTR_s_C__Users_VssAdministrator__cargo_1806cedb0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069ce10 name=FUN_18069ce10 */

void FUN_18069ce10(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 uStack_48;
  longlong lStack_40;
  
  uVar1 = param_1[0x51];
  uVar5 = uVar1;
  if ((uVar1 < 0x11) || (uVar5 = param_1[1], uVar5 != 0xffffffffffffffff)) {
    lVar2 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar3 = 0xffffffffffffffff >> (~(byte)lVar2 & 0x3f);
    if (uVar5 == 0) {
      uVar3 = 0;
    }
    if (uVar3 != 0xffffffffffffffff) {
      uVar5 = uVar3 + 1;
      bVar9 = uVar1 < 0x11;
      uVar8 = param_1[1];
      if (bVar9) {
        uVar8 = uVar1;
      }
      puVar6 = (undefined8 *)param_1[2];
      if (bVar9) {
        puVar6 = param_1 + 1;
      }
      uVar7 = 0x10;
      if (!bVar9) {
        uVar7 = uVar1;
      }
      if (uVar5 < uVar8) {
        FUN_1806a19d0(&DAT_1806d1fd0,0x20,&DAT_1806d1ff0);
        do {
          invalidInstructionException();
        } while( true );
      }
      if (uVar3 < 0x10) {
        if (0x10 < uVar1) {
          *param_1 = 0;
          FUN_180691e40(param_1 + 1,puVar6,uVar8 * 0x28);
          param_1[0x51] = uVar8;
          lStack_40 = uVar7 * 0x28;
          if (0x333333333333333 < uVar1) {
            uStack_48 = 0;
            FUN_1806a1790("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_48,
                          &DAT_1806d1f30,&DAT_1806d1910);
            do {
              invalidInstructionException();
            } while( true );
          }
          thunk_FUN_1803e4c80(puVar6,lStack_40,8);
          return;
        }
      }
      else if (uVar5 != uVar7) {
        if (0x333333333333332 < uVar3) {
LAB_18069cf35:
          FUN_1806a19d0("capacity overflow",0x11,&DAT_1806d1940);
          do {
            invalidInstructionException();
          } while( true );
        }
        lVar2 = uVar5 * 0x28;
        if (uVar1 < 0x11) {
          FUN_180339d20();
          lVar4 = thunk_FUN_1803e4c20(lVar2,8);
          if (lVar4 == 0) {
LAB_18069d04a:
            FUN_1806a1521(8,lVar2);
            do {
              invalidInstructionException();
            } while( true );
          }
          FUN_180691e40(lVar4,puVar6,uVar8 * 0x28);
        }
        else {
          if (0x333333333333333 < uVar1) goto LAB_18069cf35;
          lVar4 = thunk_FUN_1803e4cc0(puVar6,uVar7 * 0x28,8,lVar2);
          if (lVar4 == 0) goto LAB_18069d04a;
        }
        *param_1 = 1;
        param_1[1] = uVar8;
        param_1[2] = lVar4;
        param_1[0x51] = uVar5;
      }
      return;
    }
  }
  FUN_1806a1730("capacity overflow",0x11,&DAT_1806d1fb8);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069d059 name=FUN_18069d059 */

void FUN_18069d059(longlong param_1,undefined8 param_2)

{
  undefined local_21;
  undefined8 *local_20;
  undefined8 local_18;
  longlong local_10;
  undefined *local_8;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    local_20 = &local_18;
    local_8 = &local_21;
    local_18 = param_2;
    local_10 = param_1;
    FUN_1806a0a20(param_1 + 0x38,CONCAT71((int7)((ulonglong)local_8 >> 8),1),&local_20,"",
                  &PTR_s__rustc_48a229ceaefd4985c50990b14_1806d2b08);
  }
  return;
}


/* address=18069d0b0 name=FUN_18069d0b0 */

void FUN_18069d0b0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x40);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069d120 name=FUN_18069d120 */

void FUN_18069d120(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x20);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069d190 name=FUN_18069d190 */

/* WARNING: Removing unreachable block (ram,0x00018069d859) */
/* WARNING: Removing unreachable block (ram,0x00018069d670) */
/* WARNING: Removing unreachable block (ram,0x00018069d7f0) */
/* WARNING: Removing unreachable block (ram,0x00018069d7f8) */
/* WARNING: Removing unreachable block (ram,0x00018069d816) */
/* WARNING: Removing unreachable block (ram,0x00018069d765) */
/* WARNING: Removing unreachable block (ram,0x00018069d818) */
/* WARNING: Removing unreachable block (ram,0x00018069d821) */
/* WARNING: Removing unreachable block (ram,0x00018069d77b) */
/* WARNING: Removing unreachable block (ram,0x00018069d830) */
/* WARNING: Removing unreachable block (ram,0x00018069d797) */
/* WARNING: Removing unreachable block (ram,0x00018069d878) */
/* WARNING: Removing unreachable block (ram,0x00018069d844) */
/* WARNING: Removing unreachable block (ram,0x00018069d7cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18069d190(undefined (**param_1) [16],ulonglong param_2,ulonglong *param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined (*pauVar2) [16];
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  ushort uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined (*pauVar8) [16];
  undefined *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined *puVar12;
  undefined (*pauVar13) [16];
  undefined (*pauVar14) [16];
  undefined (*pauVar15) [16];
  uint uVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined (*pauVar29) [16];
  bool bVar30;
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  
  auVar31 = _DAT_1806c50b0;
  pauVar2 = param_1[3];
  puVar9 = *pauVar2 + param_2;
  if (CARRY8(param_2,(ulonglong)pauVar2)) goto LAB_18069d2bf;
  pauVar3 = param_1[1];
  puVar12 = *pauVar3 + 1;
  pauVar14 = (undefined (*) [16])
             (((ulonglong)puVar12 & 0xfffffffffffffff8) - ((ulonglong)puVar12 >> 3));
  if (pauVar3 < (undefined (*) [16])&DAT_00000008) {
    pauVar14 = pauVar3;
  }
  if ((undefined *)((ulonglong)pauVar14 >> 1) < puVar9) {
    puVar12 = *pauVar14 + 1;
    if (*pauVar14 + 1 <= puVar9) {
      puVar12 = puVar9;
    }
    if (puVar12 < (undefined *)0xf) {
      uVar10 = 4;
      if ((undefined *)0x3 < puVar12) {
        uVar10 = (ulonglong)((uint)puVar12 & 8) + 8;
      }
LAB_18069d297:
      uVar24 = uVar10 * 0x10;
      uVar11 = uVar10 + 0x10;
      uVar22 = uVar11 + uVar24;
      if ((byte)(0x7ffffffffffffff0 < uVar22 | CARRY8(uVar11,uVar24)) == 0) {
        FUN_180339d20();
        lVar7 = thunk_FUN_1803e4c20(uVar22,0x10);
        if (lVar7 == 0) {
          uVar6 = FUN_1803f5190(param_4,0x10,uVar22);
          return uVar6;
        }
        pauVar14 = (undefined (*) [16])(uVar10 - 1);
        pauVar8 = (undefined (*) [16])((uVar10 & 0xfffffffffffffff8) - (uVar10 >> 3));
        if (uVar10 < 9) {
          pauVar8 = pauVar14;
        }
        pauVar13 = (undefined (*) [16])(lVar7 + uVar24);
        FUN_1806924e0(pauVar13,0xff,uVar11);
        pauVar4 = *param_1;
        if (pauVar2 != (undefined (*) [16])0x0) {
          auVar31 = *pauVar4;
          uVar23 = ~(uint)(ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar31[15] >> 7) << 0xf);
          uVar10 = *param_3;
          uVar11 = param_3[1];
          uVar24 = uVar11 ^ 0x646f72616e646f6d;
          uVar22 = (uVar10 ^ 0x736f6d6570736575) + uVar24;
          uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar22;
          lVar7 = 0;
          pauVar15 = pauVar2;
          pauVar29 = pauVar4;
          do {
            if ((short)uVar23 == 0) {
              do {
                auVar31 = pauVar29[1];
                pauVar29 = pauVar29 + 1;
                uVar23 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar31[15] >> 7) << 0xf) ^ 0xffff;
                lVar7 = lVar7 + 0x10;
              } while (uVar23 == 0);
            }
            uVar16 = 0;
            for (uVar20 = uVar23; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
              uVar16 = uVar16 + 1;
            }
            lVar18 = (ulonglong)uVar16 + lVar7;
            uVar19 = (ulonglong)*(uint *)pauVar4[-1 - lVar18] | 0x400000000000000;
            uVar25 = uVar19 ^ uVar11 ^ 0x7465646279746573;
            uVar21 = (uVar10 ^ 0x6c7967656e657261) + uVar25;
            uVar26 = (uVar25 << 0x10 | uVar25 >> 0x30) ^ uVar21;
            uVar21 = uVar21 + uVar24;
            uVar25 = uVar26 + (uVar22 << 0x20 | uVar22 >> 0x20);
            uVar27 = (uVar26 << 0x15 | uVar26 >> 0x2b) ^ uVar25;
            uVar26 = uVar21 ^ (uVar24 << 0x11 | uVar24 >> 0x2f);
            uVar19 = (uVar19 ^ uVar25) + uVar26;
            uVar21 = ((uVar21 << 0x20 | uVar21 >> 0x20) ^ 0xff) + uVar27;
            uVar25 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar19;
            uVar27 = (uVar27 << 0x10 | uVar27 >> 0x30) ^ uVar21;
            uVar21 = uVar21 + uVar25;
            uVar26 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar27;
            uVar25 = (uVar25 << 0x11 | uVar25 >> 0x2f) ^ uVar21;
            uVar27 = (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar26;
            uVar26 = uVar26 + uVar25;
            uVar19 = (uVar21 << 0x20 | uVar21 >> 0x20) + uVar27;
            uVar25 = (uVar25 << 0xd | uVar25 >> 0x33) ^ uVar26;
            uVar21 = (uVar27 << 0x10 | uVar27 >> 0x30) ^ uVar19;
            uVar19 = uVar19 + uVar25;
            uVar26 = (uVar26 << 0x20 | uVar26 >> 0x20) + uVar21;
            uVar25 = (uVar25 << 0x11 | uVar25 >> 0x2f) ^ uVar19;
            uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar26;
            uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar21;
            uVar25 = (uVar25 << 0xd | uVar25 >> 0x33) ^ uVar26 + uVar25;
            uVar26 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar19;
            uVar19 = uVar19 + uVar25;
            uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) ^ (uVar25 << 0x11 | uVar25 >> 0x2f) ^
                     (uVar26 << 0x15 | uVar26 >> 0x2b) ^ uVar19;
            uVar25 = uVar19 & (ulonglong)pauVar14;
            auVar31 = *(undefined (*) [16])(*pauVar13 + uVar25);
            uVar5 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar31[15] >> 7) << 0xf;
            uVar16 = (uint)uVar5;
            if (uVar5 == 0) {
              lVar28 = 0x10;
              do {
                uVar25 = uVar25 + lVar28 & (ulonglong)pauVar14;
                auVar31 = *(undefined (*) [16])(*pauVar13 + uVar25);
                lVar28 = lVar28 + 0x10;
                uVar16 = (uint)(ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar31[15] >> 7) << 0xf);
              } while (uVar16 == 0);
            }
            uVar20 = 0;
            for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              uVar20 = uVar20 + 1;
            }
            uVar25 = uVar20 + uVar25 & (ulonglong)pauVar14;
            if (-1 < (char)(*pauVar13)[uVar25]) {
              auVar31 = *pauVar13;
              uVar16 = 0;
              for (uVar20 = (uint)(ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar31[15] >> 7) << 0xf);
                  (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
                uVar16 = uVar16 + 1;
              }
              uVar25 = (ulonglong)uVar16;
            }
            uVar23 = uVar23 - 1 & uVar23;
            pauVar15 = (undefined (*) [16])(pauVar15[-1] + 0xf);
            bVar17 = (byte)(uVar19 >> 0x39);
            (*pauVar13)[uVar25] = bVar17;
            pauVar13[1][uVar25 - 0x10 & (ulonglong)pauVar14] = bVar17;
            uVar6 = *(undefined8 *)(pauVar4[-1 - lVar18] + 8);
            *(undefined8 *)pauVar13[-1 - uVar25] = *(undefined8 *)pauVar4[-1 - lVar18];
            *(undefined8 *)(pauVar13[-1 - uVar25] + 8) = uVar6;
          } while (pauVar15 != (undefined (*) [16])0x0);
        }
        *param_1 = pauVar13;
        param_1[1] = pauVar14;
        param_1[2] = (undefined (*) [16])((longlong)pauVar8 - (longlong)pauVar2);
        if (pauVar3 == (undefined (*) [16])0x0) {
          return 0xffffffffffffffff;
        }
        if (pauVar3[(longlong)(*pauVar3 + 2)] + 1 == (undefined *)0x0) {
          return 0xffffffffffffffff;
        }
        thunk_FUN_1803e4c80((longlong)pauVar4 - ((longlong)pauVar3 * 0x10 + 0x10),
                            pauVar3[(longlong)(*pauVar3 + 2)] + 1,0x10);
        goto LAB_18069d571;
      }
    }
    else if ((ulonglong)puVar12 >> 0x3d == 0) {
      uVar10 = (ulonglong)((longlong)puVar12 * 8) / 7;
      uVar10 = (((longlong)puVar12 * 8 - uVar10 >> 1) + uVar10 >> 2) - 1;
      lVar7 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar10 = 0xffffffffffffffff >> (~(byte)lVar7 & 0x3f);
      if (uVar10 < 0xfffffffffffffff) {
        uVar10 = uVar10 + 1;
        goto LAB_18069d297;
      }
    }
LAB_18069d2bf:
    uVar6 = FUN_1803f5160(param_4);
  }
  else {
    if (puVar12 == (undefined *)0x0) {
      pauVar14 = (undefined (*) [16])0x0;
    }
    else {
      pauVar8 = *param_1;
      uVar10 = (((ulonglong)puVar12 >> 4) + 1) - (ulonglong)(((ulonglong)puVar12 & 0xf) == 0);
      if (uVar10 == 1) {
        lVar7 = 0;
LAB_18069d5d8:
        pcVar1 = *pauVar8 + lVar7;
        auVar31[0] = -(*pcVar1 < '\0');
        auVar31[1] = -(pcVar1[1] < '\0');
        auVar31[2] = -(pcVar1[2] < '\0');
        auVar31[3] = -(pcVar1[3] < '\0');
        auVar31[4] = -(pcVar1[4] < '\0');
        auVar31[5] = -(pcVar1[5] < '\0');
        auVar31[6] = -(pcVar1[6] < '\0');
        auVar31[7] = -(pcVar1[7] < '\0');
        auVar31[8] = -(pcVar1[8] < '\0');
        auVar31[9] = -(pcVar1[9] < '\0');
        auVar31[10] = -(pcVar1[10] < '\0');
        auVar31[11] = -(pcVar1[0xb] < '\0');
        auVar31[12] = -(pcVar1[0xc] < '\0');
        auVar31[13] = -(pcVar1[0xd] < '\0');
        auVar31[14] = -(pcVar1[0xe] < '\0');
        auVar31[15] = -(pcVar1[0xf] < '\0');
        *(undefined (*) [16])(*pauVar8 + lVar7) = auVar31 | _DAT_1806c50b0;
      }
      else {
        uVar11 = uVar10 & 0x1ffffffffffffffe;
        lVar7 = 0;
        do {
          pcVar1 = *pauVar8 + lVar7;
          auVar32[0] = -(*pcVar1 < '\0');
          auVar32[1] = -(pcVar1[1] < '\0');
          auVar32[2] = -(pcVar1[2] < '\0');
          auVar32[3] = -(pcVar1[3] < '\0');
          auVar32[4] = -(pcVar1[4] < '\0');
          auVar32[5] = -(pcVar1[5] < '\0');
          auVar32[6] = -(pcVar1[6] < '\0');
          auVar32[7] = -(pcVar1[7] < '\0');
          auVar32[8] = -(pcVar1[8] < '\0');
          auVar32[9] = -(pcVar1[9] < '\0');
          auVar32[10] = -(pcVar1[10] < '\0');
          auVar32[11] = -(pcVar1[0xb] < '\0');
          auVar32[12] = -(pcVar1[0xc] < '\0');
          auVar32[13] = -(pcVar1[0xd] < '\0');
          auVar32[14] = -(pcVar1[0xe] < '\0');
          auVar32[15] = -(pcVar1[0xf] < '\0');
          *(undefined (*) [16])(*pauVar8 + lVar7) = auVar32 | auVar31;
          pcVar1 = pauVar8[1] + lVar7;
          auVar33[0] = -(*pcVar1 < '\0');
          auVar33[1] = -(pcVar1[1] < '\0');
          auVar33[2] = -(pcVar1[2] < '\0');
          auVar33[3] = -(pcVar1[3] < '\0');
          auVar33[4] = -(pcVar1[4] < '\0');
          auVar33[5] = -(pcVar1[5] < '\0');
          auVar33[6] = -(pcVar1[6] < '\0');
          auVar33[7] = -(pcVar1[7] < '\0');
          auVar33[8] = -(pcVar1[8] < '\0');
          auVar33[9] = -(pcVar1[9] < '\0');
          auVar33[10] = -(pcVar1[10] < '\0');
          auVar33[11] = -(pcVar1[0xb] < '\0');
          auVar33[12] = -(pcVar1[0xc] < '\0');
          auVar33[13] = -(pcVar1[0xd] < '\0');
          auVar33[14] = -(pcVar1[0xe] < '\0');
          auVar33[15] = -(pcVar1[0xf] < '\0');
          *(undefined (*) [16])(pauVar8[1] + lVar7) = auVar33 | auVar31;
          lVar7 = lVar7 + 0x20;
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
        if ((uVar10 & 1) != 0) goto LAB_18069d5d8;
      }
      if (puVar12 < &DAT_00000010) {
        puVar9 = &DAT_00000010;
      }
      else {
        puVar9 = puVar12;
        puVar12 = &DAT_00000010;
      }
      FUN_180691e40(puVar9 + (longlong)pauVar8,pauVar8,puVar12);
      pauVar8 = (undefined (*) [16])0x0;
      do {
        bVar30 = pauVar8 != pauVar3;
        pauVar8 = (undefined (*) [16])(*pauVar8 + 1);
      } while (bVar30);
    }
    param_1[2] = (undefined (*) [16])((longlong)pauVar14 - (longlong)pauVar2);
LAB_18069d571:
    uVar6 = 0xffffffffffffffff;
  }
  return uVar6;
}


/* address=18069d920 name=FUN_18069d920 */

undefined4 * FUN_18069d920(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined local_68 [16];
  longlong local_58;
  undefined local_4a;
  undefined local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_180395500(&local_98);
  local_58 = local_98;
  local_80 = local_90;
  local_78 = 0;
  uStack_70 = (undefined *)0x1;
  local_68 = ZEXT816(0);
  local_49 = 0;
  FUN_18069dcc0(&local_78,0,1,1,1);
  *uStack_70 = 3;
  if (local_68._0_8_ == 0) {
    local_68._0_8_ = 1;
  }
  local_68._8_8_ = 1;
  if ((local_78 < 5) && (local_78 - local_68._0_8_ < 5 - local_68._0_8_)) {
    local_4a = 0;
    FUN_18069dcc0(&local_78,local_68._0_8_,5 - local_68._0_8_,1,1);
    if (local_68._0_8_ != 0) goto LAB_18069d9e3;
    *uStack_70 = 0;
    *(int *)(uStack_70 + 1) = (int)local_88;
  }
  else {
LAB_18069d9e3:
    *(int *)(uStack_70 + 1) = (int)local_88;
    if (4 < (ulonglong)local_68._0_8_) goto LAB_18069d9fd;
  }
  local_68._0_8_ = 5;
LAB_18069d9fd:
  local_68._8_8_ = 5;
  if (local_88 != 0) {
    uVar4 = local_68._0_8_;
    uVar6 = 5;
    do {
      uVar2 = *(undefined *)(local_80 + -5 + uVar6);
      uVar1 = uVar6 + 1;
      if ((local_78 < uVar1) && (uVar5 = (uVar6 - uVar4) + 1, local_78 - uVar4 < uVar5)) {
        FUN_18069dcc0(&local_78,uVar4,uVar5,1,1);
        uVar4 = local_68._0_8_;
        if (uVar6 <= (ulonglong)local_68._0_8_) goto LAB_18069dab0;
LAB_18069da65:
        puVar3 = uStack_70;
        FUN_1806924e0(uStack_70 + uVar4,0);
        puVar3[uVar6] = uVar2;
        local_68._0_8_ = uVar6;
      }
      else {
        if (uVar4 < uVar6) goto LAB_18069da65;
LAB_18069dab0:
        uStack_70[uVar6] = uVar2;
        uVar6 = uVar4;
      }
      uVar4 = uVar6;
      if (uVar6 < uVar1) {
        uVar4 = uVar1;
        local_68._0_8_ = uVar1;
      }
      local_68._8_8_ = uVar1;
      uVar6 = uVar1;
    } while (uVar1 - local_88 != 5);
  }
  if (local_58 != 0) {
    thunk_FUN_1803e4c80(local_80,local_58,1);
  }
  *(undefined8 *)(param_1 + 4) = local_68._0_8_;
  *param_1 = (undefined4)local_78;
  param_1[1] = local_78._4_4_;
  param_1[2] = (undefined4)uStack_70;
  param_1[3] = uStack_70._4_4_;
  return param_1;
}


/* address=18069dc70 name=FUN_18069dc70 */

void FUN_18069dc70(longlong param_1)

{
  undefined8 local_30;
  undefined8 *local_28;
  undefined *local_20;
  longlong local_18;
  undefined *local_10;
  
  local_30 = FUN_1803981f0();
  local_18 = param_1 + 0x10;
  local_28 = &local_30;
  local_20 = &LAB_180397d50;
  local_10 = &LAB_180397d50;
  FUN_1806a19f0(&DAT_1806d5e17,&local_28,&PTR_s_C__Users_VssAdministrator__cargo_1806d5e90);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069dcc0 name=FUN_18069dcc0 */

void FUN_18069dcc0(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  if (CARRY8(param_2,param_3)) {
    FUN_1806a153b(0);
    do {
      invalidInstructionException();
    } while( true );
  }
  uVar2 = *param_1 * 2;
  if (uVar2 < param_2 + param_3) {
    uVar2 = param_2 + param_3;
  }
  uVar1 = (ulonglong)(param_5 == 1) * 4 + 4;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,param_4,param_5);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069dd50 name=FUN_18069dd50 */

void FUN_18069dd50(longlong *param_1)

{
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = (longlong *)FUN_1806a0200();
  local_40 = *param_1;
  *param_1 = 0;
  local_20 = local_28;
  if (local_40 != 0) {
    local_38 = *(undefined4 *)(param_1 + 1);
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_30 = *(undefined4 *)(param_1 + 2);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x14);
    FUN_18039a570(&local_40);
    LOCK();
    *local_20 = *local_20 + -1;
    UNLOCK();
    if (*local_20 == 0) {
      FUN_18039b650(&local_28);
    }
    return;
  }
  FUN_1806a1770(&DAT_1806d6608);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069de00 name=FUN_18069de00 */

void FUN_18069de00(longlong *param_1)

{
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (longlong *)FUN_1806a0200();
  local_38 = *param_1;
  *param_1 = 0;
  if (local_38 != 0) {
    local_30 = *(undefined4 *)(param_1 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_28 = *(undefined4 *)(param_1 + 2);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x14);
    FUN_18039b8b0(&local_38,local_20);
    LOCK();
    *local_20 = *local_20 + -1;
    UNLOCK();
    if (*local_20 == 0) {
      FUN_18039b650(&local_20);
    }
    return;
  }
  FUN_1806a1770(&DAT_1806d6a40);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069deb0 name=FUN_18069deb0 */

void FUN_18069deb0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018069df11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806d73d8 + *(int *)(&DAT_1806d73d8 + *param_1 * 4)))();
  return;
}


/* address=18069e0e0 name=FUN_18069e0e0 */

undefined4 * FUN_18069e0e0(undefined4 *param_1,char *param_2)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_38 = 0;
  uStack_30 = 1;
  local_28 = 0;
  if (*param_2 == '\0') {
    lVar1 = 6;
    FUN_18069dcc0(&local_38,0,6,1,1);
    *(undefined2 *)(uStack_30 + 4 + local_28) = 0x4555;
    *(undefined4 *)(uStack_30 + local_28) = 0x5153414d;
  }
  else {
    lVar1 = 9;
    FUN_18069dcc0(&local_38,0,9,1,1);
    *(undefined8 *)(uStack_30 + local_28) = 0x7261754765726957;
    *(undefined *)(uStack_30 + 8 + local_28) = 100;
  }
  *(longlong *)(param_1 + 4) = local_28 + lVar1;
  *param_1 = (undefined4)local_38;
  param_1[1] = local_38._4_4_;
  param_1[2] = (undefined4)uStack_30;
  param_1[3] = uStack_30._4_4_;
  return param_1;
}


/* address=18069e1e1 name=FUN_18069e1e1 */

void FUN_18069e1e1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_3;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806d7b50,&local_8,&DAT_1806d7b50,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069e220 name=FUN_18069e220 */

void FUN_18069e220(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  if (CARRY8(param_2,param_3)) {
    FUN_1806a153b(0);
    do {
      invalidInstructionException();
    } while( true );
  }
  uVar1 = *param_1 * 2;
  if (uVar1 < param_2 + param_3) {
    uVar1 = param_2 + param_3;
  }
  uVar2 = 8;
  if (8 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,1,1);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069e2b0 name=FUN_18069e2b0 */

ulonglong FUN_18069e2b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char cVar7;
  bool bVar8;
  undefined8 *local_48;
  int *local_40;
  char local_38;
  undefined7 uStack_37;
  undefined8 *local_30;
  char local_21;
  undefined8 local_20;
  undefined7 uVar6;
  
  local_20 = 0xfffffffffffffffe;
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  uVar5 = CONCAT71(uVar6,1);
  LOCK();
  cVar3 = *(char *)((longlong)param_1 + 0x11);
  bVar8 = cVar3 == '\0';
  if (bVar8) {
    *(char *)((longlong)param_1 + 0x11) = '\x01';
    cVar3 = '\0';
  }
  UNLOCK();
  puVar4 = DAT_18098eda8;
  if (bVar8) {
    do {
      local_30 = puVar4;
      param_1[1] = local_30;
      local_48 = param_1;
      if (param_1 == local_30) {
        FUN_18069e4e7(CONCAT71(uVar6,1),&local_48,&local_30,
                      "Attempted to register a `DefaultCallsite` that already exists! This will cause an infinite loop when attempting to read from the callsite cache. This is likely a bug! You should only need to call `DefaultCallsite::register` once per `DefaultCallsite`."
                      ,0x1f7,&PTR_s_C__Users_VssAdministrator__cargo_1806d8ae8);
        do {
          invalidInstructionException();
        } while( true );
      }
      LOCK();
      bVar8 = local_30 != DAT_18098eda8;
      puVar4 = local_30;
      puVar2 = param_1;
      if (bVar8) {
        puVar4 = DAT_18098eda8;
        puVar2 = DAT_18098eda8;
      }
      DAT_18098eda8 = puVar2;
      UNLOCK();
    } while (bVar8);
    FUN_1803a91a0(&local_48,&DAT_18093b1c8);
    local_30 = (undefined8 *)*param_1;
    local_21 = -1;
    FUN_1803a8590(&local_48,&local_30,&local_21);
    cVar3 = local_21;
    if (local_21 == -1) {
      cVar3 = '\0';
    }
    cVar7 = (cVar3 == '\x02') + '\x01';
    if (cVar3 == '\0') {
      cVar7 = '\0';
    }
    LOCK();
    *(char *)(param_1 + 2) = cVar7;
    UNLOCK();
    if (local_48 != (undefined8 *)0x0) {
      if ((int)local_48 == 1) {
        LOCK();
        *(int *)CONCAT71(uStack_37,local_38) = *(int *)CONCAT71(uStack_37,local_38) + -1;
        UNLOCK();
      }
      else {
        if (((local_38 == '\0') && ((*(ulonglong *)PTR_DAT_18093b330 & 0x7fffffffffffffff) != 0)) &&
           (cVar3 = FUN_1806a1250(), cVar3 == '\0')) {
          *(undefined *)(local_40 + 2) = 1;
        }
        LOCK();
        iVar1 = *local_40;
        *local_40 = *local_40 + -0x3fffffff;
        UNLOCK();
        if (0x3fffffff < iVar1 + 0xc0000001U) {
          FUN_1806a0960();
        }
      }
    }
    *(undefined *)((longlong)param_1 + 0x11) = 2;
  }
  else if (cVar3 != '\x02') goto LAB_18069e393;
  uVar5 = (ulonglong)(byte)((*(char *)(param_1 + 2) == '\x02') + 1);
  if (*(char *)(param_1 + 2) == '\0') {
    uVar5 = 0;
  }
LAB_18069e393:
  return uVar5 & 0xffffffff;
}


/* address=18069e450 name=FUN_18069e450 */

void FUN_18069e450(longlong param_1,undefined8 param_2)

{
  undefined local_29;
  undefined8 local_28;
  longlong local_20;
  undefined8 *local_18;
  longlong *local_10;
  undefined *local_8;
  
  local_20 = param_1 + 8;
  local_18 = &local_28;
  local_10 = &local_20;
  local_8 = &local_29;
  local_28 = param_2;
  FUN_18049e200(param_1,&local_18,&DAT_1806d8ec8);
  return;
}


/* address=18069e4a0 name=FUN_18069e4a0 */

void FUN_18069e4a0(longlong param_1,undefined8 param_2)

{
  undefined local_29;
  undefined8 local_28;
  longlong local_20;
  undefined8 *local_18;
  longlong *local_10;
  undefined *local_8;
  
  local_18 = &local_28;
  local_10 = &local_20;
  local_8 = &local_29;
  local_28 = param_2;
  local_20 = param_1;
  FUN_18049e200(param_1 + 0x30,&local_18,&DAT_1806d8ef0);
  return;
}


/* address=18069e4e7 name=FUN_18069e4e7 */

void FUN_18069e4e7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_3;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806d8f58,&local_8,&DAT_1806d8f78,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069e530 name=FUN_18069e530 */

void FUN_18069e530(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18069e610(param_1,*param_1,0x18);
  if (lVar1 == -1) {
    return;
  }
  FUN_1806a153b(lVar1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069e560 name=FUN_18069e560 */

void FUN_18069e560(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  ulonglong param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar5 = 1;
  if (0x7ffffffffffffff8 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    lVar4 = 8;
    uVar3 = 0;
    goto LAB_18069e5ff;
  }
  if (param_2 == 0) {
    if (uVar3 != 0) {
      FUN_180339d20();
      lVar4 = thunk_FUN_1803e4c20(uVar3,8);
      goto joined_r0x00018069e5de;
    }
    lVar4 = 8;
  }
  else {
    lVar4 = thunk_FUN_1803e4cc0(param_3,param_5 * param_2,8,uVar3);
joined_r0x00018069e5de:
    if (lVar4 == 0) {
      param_1[1] = 8;
      lVar4 = 0x10;
      goto LAB_18069e5ff;
    }
  }
  param_1[1] = lVar4;
  lVar4 = 0x10;
  uVar5 = 0;
LAB_18069e5ff:
  *(ulonglong *)((longlong)param_1 + lVar4) = uVar3;
  *param_1 = uVar5;
  return;
}


/* address=18069e610 name=FUN_18069e610 */

ulonglong FUN_18069e610(ulonglong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char local_28 [8];
  ulonglong local_20;
  
  uVar2 = *param_1 * 2;
  uVar1 = param_2 + 1U;
  if (param_2 + 1U <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069e560(local_28,*param_1,param_1[1],uVar2,param_3);
  if (local_28[0] != '\0') {
    return local_20;
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return 0xffffffffffffffff;
}


/* address=18069e685 name=FUN_18069e685 */

void FUN_18069e685(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_3;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806daa48,&local_8,&DAT_1806daa48,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069e6c4 name=FUN_18069e6c4 */

void FUN_18069e6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_3;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806daa68,&local_8,&DAT_1806daa68,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069e703 name=FUN_18069e703 */

void FUN_18069e703(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_3;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806daa88,&local_8,&DAT_1806daa88,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069e742 name=FUN_18069e742 */

void FUN_18069e742(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_3;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806daaa8,&local_8,&DAT_1806daaa8,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069e781 name=FUN_18069e781 */

void FUN_18069e781(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_3;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806daac8,&local_8,&DAT_1806daac8,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069e7c0 name=FUN_18069e7c0 */

void FUN_18069e7c0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  puVar3 = param_2;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    puVar3 = (undefined8 *)param_2[2];
    bVar1 = *(byte *)param_2;
    *param_2 = 0;
    if ((bVar1 & 1) != 0) goto LAB_18069e7f9;
  }
  uVar2 = FUN_1803ec220();
LAB_18069e7f9:
  *param_1 = uVar2;
  param_1[1] = puVar3;
  *(undefined *)(param_1 + 2) = 1;
  return;
}


/* address=18069e810 name=FUN_18069e810 */

longlong ** FUN_18069e810(longlong **param_1,longlong **param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *local_10;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 != (longlong **)0x0) {
      plVar2 = *param_2;
      *param_2 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        *param_1 = plVar2;
        *(undefined *)(param_1 + 1) = 1;
        goto LAB_18069e8c3;
      }
    }
    FUN_180339d20();
    plVar2 = (longlong *)thunk_FUN_1803e4c20(0x20,8);
    if (plVar2 == (longlong *)0x0) {
      FUN_1806a1521(8,0x20);
      do {
        invalidInstructionException();
      } while( true );
    }
    *plVar2 = 1;
    plVar2[1] = 1;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined2 *)((longlong)plVar2 + 0x1c) = 0;
    cVar1 = *(char *)(param_1 + 1);
    local_10 = *param_1;
    *param_1 = plVar2;
    *(undefined *)(param_1 + 1) = 1;
    if (cVar1 != '\x01') {
      if (cVar1 != '\0') {
        FUN_1806a19d0("internal error: entered unreachable code/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\sys\\thread_local\\native\\lazy.rs"
                      ,0x28,&DAT_1806dbbc0);
        do {
          invalidInstructionException();
        } while( true );
      }
LAB_18069e8c3:
      FUN_1803ef1b0(param_1,&LAB_1803b7830);
      return param_1;
    }
    LOCK();
    *local_10 = *local_10 + -1;
    UNLOCK();
    if (*local_10 == 0) {
      FUN_1803c16e0(&local_10);
      return param_1;
    }
  }
  else if (*(char *)(param_1 + 1) != '\x01') {
    param_1 = (longlong **)0x0;
  }
  return param_1;
}


/* address=18069e910 name=FUN_18069e910 */

void FUN_18069e910(undefined8 param_1,undefined param_2)

{
  undefined local_31;
  undefined **local_30;
  undefined *local_28;
  undefined *local_20;
  code *local_18;
  undefined8 local_10;
  undefined *local_8;
  
  local_30 = &PTR_s_TOKIO_WORKER_THREADS_1806dbc20;
  local_28 = &LAB_180335950;
  local_20 = &local_31;
  local_18 = FUN_180402ca0;
  local_8 = &LAB_1802a8b40;
  local_31 = param_2;
  local_10 = param_1;
  FUN_1806a19f0(&DAT_1806dbc30,&local_30,&PTR_s_C__Users_VssAdministrator__cargo_1806dbcd0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069ea50 name=FUN_18069ea50 */

void FUN_18069ea50(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x98);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069eac0 name=FUN_18069eac0 */

void FUN_18069eac0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x160);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069eb30 name=FUN_18069eb30 */

void FUN_18069eb30(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,200);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069eba0 name=FUN_18069eba0 */

void FUN_18069eba0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x228);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069ec10 name=FUN_18069ec10 */

/* WARNING: Removing unreachable block (ram,0x00018069effb) */
/* WARNING: Removing unreachable block (ram,0x00018069f017) */
/* WARNING: Removing unreachable block (ram,0x00018069eee0) */
/* WARNING: Removing unreachable block (ram,0x00018069ef95) */
/* WARNING: Removing unreachable block (ram,0x00018069ef9e) */
/* WARNING: Removing unreachable block (ram,0x00018069efba) */
/* WARNING: Removing unreachable block (ram,0x00018069ef0c) */
/* WARNING: Removing unreachable block (ram,0x00018069efbc) */
/* WARNING: Removing unreachable block (ram,0x00018069efc5) */
/* WARNING: Removing unreachable block (ram,0x00018069ef22) */
/* WARNING: Removing unreachable block (ram,0x00018069efd0) */
/* WARNING: Removing unreachable block (ram,0x00018069ef3e) */
/* WARNING: Removing unreachable block (ram,0x00018069f02b) */
/* WARNING: Removing unreachable block (ram,0x00018069efe7) */
/* WARNING: Removing unreachable block (ram,0x00018069ef6e) */
/* WARNING: Removing unreachable block (ram,0x00018069ef90) */
/* WARNING: Removing unreachable block (ram,0x00018069f0fe) */

undefined (*) [16]
FUN_18069ec10(undefined (**param_1) [16],ulonglong param_2,longlong param_3,ulonglong param_4,
             char param_5)

{
  char *pcVar1;
  byte *pbVar2;
  undefined auVar3 [16];
  undefined (*pauVar4) [16];
  ushort uVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  byte bVar22;
  ulonglong uVar23;
  byte bVar24;
  undefined (*pauVar25) [16];
  undefined *puVar26;
  undefined (*pauVar27) [16];
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  undefined *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  bool bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined (*local_b0) [16];
  undefined (*local_a8) [16];
  longlong local_a0;
  undefined8 local_98;
  undefined (**local_90) [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined (*local_78) [16];
  undefined (*local_70) [16];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  bVar22 = UNK_1806c50bf;
  bVar49 = UNK_1806c50be;
  bVar48 = UNK_1806c50bd;
  bVar47 = UNK_1806c50bc;
  bVar46 = UNK_1806c50bb;
  bVar45 = UNK_1806c50ba;
  bVar44 = UNK_1806c50b9;
  bVar43 = UNK_1806c50b8;
  bVar42 = UNK_1806c50b7;
  bVar41 = UNK_1806c50b6;
  bVar40 = UNK_1806c50b5;
  bVar39 = UNK_1806c50b4;
  bVar38 = UNK_1806c50b3;
  bVar37 = UNK_1806c50b2;
  bVar36 = UNK_1806c50b1;
  bVar24 = DAT_1806c50b0;
  local_48 = 0xfffffffffffffffe;
  puVar26 = *param_1[3] + param_2;
  local_58 = param_3;
  local_50 = param_4;
  if (CARRY8(param_2,(ulonglong)param_1[3])) {
    if (param_5 == '\0') {
      return (undefined (*) [16])0x0;
    }
    FUN_1806a19f0("Hash table capacity overflow",0x39,
                  &PTR_s_C__Users_VssAdministrator__cargo_1806deea8);
    do {
      invalidInstructionException();
    } while( true );
  }
  pauVar27 = param_1[1];
  puVar31 = *pauVar27 + 1;
  pauVar25 = (undefined (*) [16])
             (((ulonglong)puVar31 & 0xfffffffffffffff8) - ((ulonglong)puVar31 >> 3));
  if (pauVar27 < (undefined (*) [16])&DAT_00000008) {
    pauVar25 = pauVar27;
  }
  if ((undefined *)((ulonglong)pauVar25 >> 1) < puVar26) {
    puVar31 = *pauVar25 + 1;
    if (*pauVar25 + 1 <= puVar26) {
      puVar31 = puVar26;
    }
    FUN_1803d2ae0(&local_b0,puVar31,param_5);
    if (local_b0 == (undefined (*) [16])0x0) {
      return local_a8;
    }
    local_90 = param_1 + 4;
    local_88 = 8;
    local_80 = 0x10;
    local_78 = local_b0;
    local_70 = local_a8;
    local_68 = local_a0;
    local_60 = local_98;
    pauVar27 = param_1[3];
    if (pauVar27 == (undefined (*) [16])0x0) {
      pauVar27 = (undefined (*) [16])0x0;
    }
    else {
      pauVar25 = *param_1;
      auVar3 = *pauVar25;
      uVar34 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[15] >> 7) << 0xf);
      lVar32 = 0;
      do {
        if ((short)uVar34 == 0) {
          do {
            auVar3 = pauVar25[1];
            pauVar25 = pauVar25 + 1;
            uVar34 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar3[15] >> 7) << 0xf) ^ 0xffff;
            lVar32 = lVar32 + 0x10;
          } while (uVar34 == 0);
        }
        uVar6 = 0;
        for (uVar29 = uVar34; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar23 = *(ulonglong *)((longlong)*param_1 + ((ulonglong)uVar6 + lVar32) * -8 + -8);
        if (local_50 <= uVar23) {
          FUN_1806a1813(uVar23,local_50,&PTR_s_C__Users_VssAdministrator__cargo_1806def60);
          do {
            invalidInstructionException();
          } while( true );
        }
        uVar23 = *(ulonglong *)(local_58 + 0x60 + uVar23 * 0x68);
        uVar33 = uVar23 & (ulonglong)local_a8;
        auVar3 = *(undefined (*) [16])(*local_b0 + uVar33);
        uVar5 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[15] >> 7) << 0xf;
        uVar29 = (uint)uVar5;
        if (uVar5 == 0) {
          lVar28 = 0x10;
          do {
            uVar33 = uVar33 + lVar28 & (ulonglong)local_a8;
            auVar3 = *(undefined (*) [16])(*local_b0 + uVar33);
            lVar28 = lVar28 + 0x10;
            uVar29 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar3[15] >> 7) << 0xf);
          } while (uVar29 == 0);
        }
        uVar30 = 0;
        for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
          uVar30 = uVar30 + 1;
        }
        uVar33 = uVar30 + uVar33 & (ulonglong)local_a8;
        if (-1 < (char)(*local_b0)[uVar33]) {
          auVar3 = *local_b0;
          uVar29 = 0;
          for (uVar30 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar3[15] >> 7) << 0xf); (uVar30 & 1) == 0;
              uVar30 = uVar30 >> 1 | 0x80000000) {
            uVar29 = uVar29 + 1;
          }
          uVar33 = (ulonglong)uVar29;
        }
        uVar34 = uVar34 - 1 & uVar34;
        pauVar27 = (undefined (*) [16])(pauVar27[-1] + 0xf);
        bVar24 = (byte)(uVar23 >> 0x39);
        (*local_b0)[uVar33] = bVar24;
        local_b0[1][uVar33 - 0x10 & (ulonglong)local_a8] = bVar24;
        *(undefined8 *)((longlong)local_b0 + uVar33 * -8 + -8) =
             *(undefined8 *)((longlong)*param_1 + ((ulonglong)uVar6 + lVar32) * -8 + -8);
      } while (pauVar27 != (undefined (*) [16])0x0);
      pauVar27 = param_1[3];
    }
    pauVar25 = *param_1;
    pauVar4 = param_1[1];
    *param_1 = local_b0;
    param_1[1] = local_a8;
    param_1[2] = (undefined (*) [16])(local_a0 - (longlong)pauVar27);
    param_1[3] = pauVar27;
    if (pauVar4 != (undefined (*) [16])0x0) {
      uVar23 = (longlong)pauVar4 * 8 + 0x17U & 0xfffffffffffffff0;
      if (pauVar4[1] + uVar23 + 1 != (undefined *)0x0) {
        thunk_FUN_1803e4c80((longlong)pauVar25 - uVar23,pauVar4[1] + uVar23 + 1,0x10);
      }
    }
    return (undefined (*) [16])0xffffffffffffffff;
  }
  pauVar27 = *param_1;
  if (puVar31 != (undefined *)0x0) {
    uVar23 = (((ulonglong)puVar31 >> 4) + 1) - (ulonglong)(((ulonglong)puVar31 & 0xf) == 0);
    if (uVar23 == 1) {
      lVar32 = 0;
    }
    else {
      uVar33 = uVar23 & 0x1ffffffffffffffe;
      lVar32 = 0;
      do {
        pcVar1 = *pauVar27 + lVar32;
        cVar7 = pcVar1[1];
        cVar8 = pcVar1[2];
        cVar9 = pcVar1[3];
        cVar10 = pcVar1[4];
        cVar11 = pcVar1[5];
        cVar12 = pcVar1[6];
        cVar13 = pcVar1[7];
        cVar14 = pcVar1[8];
        cVar15 = pcVar1[9];
        cVar16 = pcVar1[10];
        cVar17 = pcVar1[0xb];
        cVar18 = pcVar1[0xc];
        cVar19 = pcVar1[0xd];
        cVar20 = pcVar1[0xe];
        cVar21 = pcVar1[0xf];
        pbVar2 = *pauVar27 + lVar32;
        *pbVar2 = -(*pcVar1 < '\0') | bVar24;
        pbVar2[1] = -(cVar7 < '\0') | bVar36;
        pbVar2[2] = -(cVar8 < '\0') | bVar37;
        pbVar2[3] = -(cVar9 < '\0') | bVar38;
        pbVar2[4] = -(cVar10 < '\0') | bVar39;
        pbVar2[5] = -(cVar11 < '\0') | bVar40;
        pbVar2[6] = -(cVar12 < '\0') | bVar41;
        pbVar2[7] = -(cVar13 < '\0') | bVar42;
        pbVar2[8] = -(cVar14 < '\0') | bVar43;
        pbVar2[9] = -(cVar15 < '\0') | bVar44;
        pbVar2[10] = -(cVar16 < '\0') | bVar45;
        pbVar2[0xb] = -(cVar17 < '\0') | bVar46;
        pbVar2[0xc] = -(cVar18 < '\0') | bVar47;
        pbVar2[0xd] = -(cVar19 < '\0') | bVar48;
        pbVar2[0xe] = -(cVar20 < '\0') | bVar49;
        pbVar2[0xf] = -(cVar21 < '\0') | bVar22;
        pcVar1 = pauVar27[1] + lVar32;
        cVar7 = pcVar1[1];
        cVar8 = pcVar1[2];
        cVar9 = pcVar1[3];
        cVar10 = pcVar1[4];
        cVar11 = pcVar1[5];
        cVar12 = pcVar1[6];
        cVar13 = pcVar1[7];
        cVar14 = pcVar1[8];
        cVar15 = pcVar1[9];
        cVar16 = pcVar1[10];
        cVar17 = pcVar1[0xb];
        cVar18 = pcVar1[0xc];
        cVar19 = pcVar1[0xd];
        cVar20 = pcVar1[0xe];
        cVar21 = pcVar1[0xf];
        pbVar2 = pauVar27[1] + lVar32;
        *pbVar2 = -(*pcVar1 < '\0') | bVar24;
        pbVar2[1] = -(cVar7 < '\0') | bVar36;
        pbVar2[2] = -(cVar8 < '\0') | bVar37;
        pbVar2[3] = -(cVar9 < '\0') | bVar38;
        pbVar2[4] = -(cVar10 < '\0') | bVar39;
        pbVar2[5] = -(cVar11 < '\0') | bVar40;
        pbVar2[6] = -(cVar12 < '\0') | bVar41;
        pbVar2[7] = -(cVar13 < '\0') | bVar42;
        pbVar2[8] = -(cVar14 < '\0') | bVar43;
        pbVar2[9] = -(cVar15 < '\0') | bVar44;
        pbVar2[10] = -(cVar16 < '\0') | bVar45;
        pbVar2[0xb] = -(cVar17 < '\0') | bVar46;
        pbVar2[0xc] = -(cVar18 < '\0') | bVar47;
        pbVar2[0xd] = -(cVar19 < '\0') | bVar48;
        pbVar2[0xe] = -(cVar20 < '\0') | bVar49;
        pbVar2[0xf] = -(cVar21 < '\0') | bVar22;
        lVar32 = lVar32 + 0x20;
        uVar33 = uVar33 - 2;
      } while (uVar33 != 0);
      if ((uVar23 & 1) == 0) goto LAB_18069eea0;
    }
    pcVar1 = *pauVar27 + lVar32;
    bVar24 = -(pcVar1[1] < '\0') | UNK_1806c50b1;
    bVar36 = -(pcVar1[2] < '\0') | UNK_1806c50b2;
    bVar37 = -(pcVar1[3] < '\0') | UNK_1806c50b3;
    bVar38 = -(pcVar1[4] < '\0') | UNK_1806c50b4;
    bVar39 = -(pcVar1[5] < '\0') | UNK_1806c50b5;
    bVar40 = -(pcVar1[6] < '\0') | UNK_1806c50b6;
    bVar41 = -(pcVar1[7] < '\0') | UNK_1806c50b7;
    bVar42 = -(pcVar1[8] < '\0') | UNK_1806c50b8;
    bVar43 = -(pcVar1[9] < '\0') | UNK_1806c50b9;
    bVar44 = -(pcVar1[10] < '\0') | UNK_1806c50ba;
    bVar45 = -(pcVar1[0xb] < '\0') | UNK_1806c50bb;
    bVar46 = -(pcVar1[0xc] < '\0') | UNK_1806c50bc;
    bVar47 = -(pcVar1[0xd] < '\0') | UNK_1806c50bd;
    bVar48 = -(pcVar1[0xe] < '\0') | UNK_1806c50be;
    bVar49 = -(pcVar1[0xf] < '\0') | UNK_1806c50bf;
    pbVar2 = *pauVar27 + lVar32;
    *pbVar2 = -(*pcVar1 < '\0') | DAT_1806c50b0;
    pbVar2[1] = bVar24;
    pbVar2[2] = bVar36;
    pbVar2[3] = bVar37;
    pbVar2[4] = bVar38;
    pbVar2[5] = bVar39;
    pbVar2[6] = bVar40;
    pbVar2[7] = bVar41;
    pbVar2[8] = bVar42;
    pbVar2[9] = bVar43;
    pbVar2[10] = bVar44;
    pbVar2[0xb] = bVar45;
    pbVar2[0xc] = bVar46;
    pbVar2[0xd] = bVar47;
    pbVar2[0xe] = bVar48;
    pbVar2[0xf] = bVar49;
  }
LAB_18069eea0:
  FUN_180691e40();
  if (param_1[1] == (undefined (*) [16])0xffffffffffffffff) {
    pauVar25 = (undefined (*) [16])0x0;
    pauVar27 = (undefined (*) [16])0xffffffffffffffff;
  }
  else {
    pauVar27 = (undefined (*) [16])0x0;
    do {
      bVar35 = pauVar27 != param_1[1];
      pauVar27 = (undefined (*) [16])(*pauVar27 + 1);
    } while (bVar35);
    pauVar27 = param_1[1];
    pauVar25 = (undefined (*) [16])
               (((ulonglong)(*pauVar27 + 1) & 0xfffffffffffffff8) -
               ((ulonglong)(*pauVar27 + 1) >> 3));
  }
  if (pauVar27 < (undefined (*) [16])&DAT_00000008) {
    pauVar25 = pauVar27;
  }
  param_1[2] = (undefined (*) [16])((longlong)pauVar25 - (longlong)param_1[3]);
  return (undefined (*) [16])0xffffffffffffffff;
}


/* address=18069f730 name=FUN_18069f730 */

void FUN_18069f730(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_180339d20();
  puVar1 = (undefined4 *)thunk_FUN_1803e4c20(0x28,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar1 + 8) = 0;
    uStack_30 = (undefined4)param_1;
    uStack_2c = (undefined4)((ulonglong)param_1 >> 0x20);
    puVar1[4] = uStack_28;
    puVar1[5] = uStack_24;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = 1;
    puVar1[1] = 0;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    return;
  }
  FUN_1806a1521(8,0x28);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069f7c0 name=FUN_18069f7c0 */

void FUN_18069f7c0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = *(undefined8 *)(param_1 + 4);
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  FUN_180339d20();
  puVar6 = (undefined4 *)thunk_FUN_1803e4c20(0x28,8);
  if (puVar6 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar6 + 8) = param_3;
    local_28 = (undefined4)uVar1;
    uStack_24 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_20 = (undefined4)param_2;
    uStack_1c = (undefined4)((ulonglong)param_2 >> 0x20);
    puVar6[4] = local_28;
    puVar6[5] = uStack_24;
    puVar6[6] = uStack_20;
    puVar6[7] = uStack_1c;
    *puVar6 = uVar2;
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    return;
  }
  FUN_1806a1521(8,0x28);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=18069f860 name=FUN_18069f860 */

void FUN_18069f860(longlong *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 < (ulonglong)param_1[1]) {
    do {
      uVar2 = uVar2 + 1;
      bVar1 = *(byte *)(*param_1 + -1 + uVar2);
      if (bVar1 == 0x22) {
        return;
      }
      if (bVar1 == 0x5c) {
        return;
      }
      if (bVar1 < 0x20) {
        return;
      }
      param_1[2] = uVar2;
    } while (uVar2 != param_1[1]);
  }
  return;
}


/* address=18069f8b0 name=FUN_18069f8b0 */

void FUN_18069f8b0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined *local_30;
  undefined8 *local_28;
  undefined *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(param_1 + 4);
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  local_38 = &local_18;
  local_30 = &LAB_1803d4e10;
  local_28 = &local_48;
  local_20 = &LAB_180335910;
  local_48 = param_2;
  local_40 = param_3;
  FUN_180697b90(&DAT_1806df9e1,&local_38);
  return;
}


/* address=18069f920 name=FUN_18069f920 */

void FUN_18069f920(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined *local_30;
  undefined8 *local_28;
  undefined *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  local_8 = *(undefined8 *)(param_1 + 4);
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  local_38 = &local_18;
  local_30 = &LAB_1803d4e10;
  local_28 = &local_48;
  local_20 = &LAB_180335910;
  local_48 = param_2;
  local_40 = param_3;
  FUN_180697b90(&DAT_1806df9ff,&local_38);
  return;
}


/* address=18069f990 name=FUN_18069f990 */

void FUN_18069f990(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  uVar5 = *(longlong *)(param_1 + 0x28) + 1;
  if (uVar1 <= uVar5) {
    uVar5 = uVar1;
  }
  lVar4 = lVar3;
  lVar2 = (**(code **)PTR_PTR_FUN_18093b870)(10,lVar3,lVar3 + uVar5);
  if (lVar2 == 1) {
    lVar2 = (lVar4 - lVar3) + 1;
    if (uVar1 <= (ulonglong)(lVar4 - lVar3)) {
      FUN_1806a1a20(0,lVar2,uVar1,&PTR_s_C__Users_VssAdministrator__cargo_1806df208);
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  else {
    lVar2 = 0;
  }
  lVar3 = (**(code **)PTR_PTR_FUN_18093b868)(10,lVar3,lVar3 + lVar2);
  FUN_18069f7c0(param_2,lVar3 + 1,uVar5 - lVar2);
  return;
}


/* address=18069fa80 name=FUN_18069fa80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_18069fa80(undefined8 *param_1,longlong param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined auVar10 [16];
  undefined8 local_38 [3];
  
  uVar7 = *(ulonglong *)(param_2 + 0x20);
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  uVar4 = 0;
  if (uVar2 < uVar7) {
    uVar4 = (ulonglong)(uint)((int)uVar7 - (int)uVar2);
    uVar8 = 0;
    do {
      cVar1 = *(char *)(uVar2 + *(longlong *)(param_2 + 0x18) + uVar8);
      if (9 < (byte)(cVar1 - 0x30U)) {
        if (cVar1 == '.') {
          FUN_1803d5110(param_1,param_2,param_3,param_4,(int)uVar8);
          return param_1;
        }
        if ((cVar1 == 'E') || (cVar1 == 'e')) {
          FUN_1803d5340(param_1,param_2,param_3,param_4,(int)uVar8);
          return param_1;
        }
        uVar4 = uVar8 & 0xffffffff;
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar2 + 1 + uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar7 - uVar2 != uVar8);
  }
  auVar10._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar10._0_8_ = param_4;
  auVar10._12_4_ = DAT_1806b8400._4_4_;
  dVar9 = (auVar10._8_8_ - _UNK_1806b8418) +
          ((double)CONCAT44((undefined4)DAT_1806b8400,(int)param_4) - _DAT_1806b8410);
  uVar3 = (uint)uVar4;
  uVar7 = (ulonglong)-uVar3;
  if (0 < (int)uVar3) {
    uVar7 = uVar4;
  }
  uVar6 = (uint)uVar7;
  while (0x134 < uVar6) {
    if ((dVar9 == 0.0) && (!NAN(dVar9))) goto joined_r0x00018069fbdf;
    if (-1 < (int)uVar4) goto LAB_18069fbe3;
    dVar9 = dVar9 / DAT_1806b8420;
    uVar3 = (int)uVar4 + 0x134;
    uVar4 = (ulonglong)uVar3;
    uVar6 = -uVar3;
    if (0 < (int)uVar3) {
      uVar6 = uVar3;
    }
    uVar7 = (ulonglong)uVar6;
  }
  if ((int)uVar3 < 0) {
    dVar9 = dVar9 / *(double *)(&DAT_1806dfe38 + uVar7 * 8);
  }
  else {
    dVar9 = dVar9 * *(double *)(&DAT_1806dfe38 + uVar7 * 8);
    if (((ulonglong)dVar9 & 0x7fffffffffffffff) == 0x7ff0000000000000) {
LAB_18069fbe3:
      local_38[0] = 0xe;
      uVar5 = FUN_18069fe30(param_2,local_38);
      param_1[1] = uVar5;
      uVar5 = 1;
      goto LAB_18069fbc9;
    }
  }
joined_r0x00018069fbdf:
  if (param_3 == '\0') {
    dVar9 = (double)((ulonglong)dVar9 ^ _DAT_1806b8430);
  }
  param_1[1] = dVar9;
  uVar5 = 0;
LAB_18069fbc9:
  *param_1 = uVar5;
  return param_1;
}


/* address=18069fc10 name=FUN_18069fc10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_18069fc10(undefined8 *param_1,longlong param_2,char param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined auVar7 [16];
  undefined8 local_30 [3];
  
  uVar2 = (ulonglong)param_5;
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar5 = uVar5 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar5);
      if (9 < (byte)(bVar1 - 0x30)) {
        if ((bVar1 | 0x20) == 0x65) {
          FUN_1803d5340(param_1,param_2,param_3,param_4,param_5);
          return param_1;
        }
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
    } while (uVar5 != *(ulonglong *)(param_2 + 0x20));
  }
  auVar7._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar7._0_8_ = param_4;
  auVar7._12_4_ = DAT_1806b8400._4_4_;
  dVar6 = (auVar7._8_8_ - _UNK_1806b8418) +
          ((double)CONCAT44((undefined4)DAT_1806b8400,(int)param_4) - _DAT_1806b8410);
  uVar5 = (ulonglong)-param_5;
  if (0 < (int)param_5) {
    uVar5 = uVar2;
  }
  uVar4 = (uint)uVar5;
  while (0x134 < uVar4) {
    if ((dVar6 == 0.0) && (!NAN(dVar6))) goto joined_r0x00018069fd4e;
    if (-1 < (int)uVar2) goto LAB_18069fd52;
    dVar6 = dVar6 / DAT_1806b8420;
    param_5 = (int)uVar2 + 0x134;
    uVar2 = (ulonglong)param_5;
    uVar4 = -param_5;
    if (0 < (int)param_5) {
      uVar4 = param_5;
    }
    uVar5 = (ulonglong)uVar4;
  }
  if ((int)param_5 < 0) {
    dVar6 = dVar6 / *(double *)(&DAT_1806dfe38 + uVar5 * 8);
  }
  else {
    dVar6 = dVar6 * *(double *)(&DAT_1806dfe38 + uVar5 * 8);
    if (((ulonglong)dVar6 & 0x7fffffffffffffff) == 0x7ff0000000000000) {
LAB_18069fd52:
      local_30[0] = 0xe;
      uVar3 = FUN_18069fe30(param_2,local_30);
      param_1[1] = uVar3;
      uVar3 = 1;
      goto LAB_18069fd39;
    }
  }
joined_r0x00018069fd4e:
  if (param_3 == '\0') {
    dVar6 = (double)((ulonglong)dVar6 ^ _DAT_1806b8430);
  }
  param_1[1] = dVar6;
  uVar3 = 0;
LAB_18069fd39:
  *param_1 = uVar3;
  return param_1;
}


/* address=18069fd80 name=FUN_18069fd80 */

void FUN_18069fd80(undefined8 *param_1,longlong param_2,char param_3,byte param_4,byte param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_20 [3];
  
  if ((byte)(param_5 ^ 1 | param_4) != 1) {
    local_20[0] = 0xe;
    uVar1 = FUN_18069fe30(param_2,local_20);
    param_1[1] = uVar1;
    *param_1 = 1;
    return;
  }
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  if (uVar2 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar2 = uVar2 + 1;
      if (9 < (byte)(*(char *)(*(longlong *)(param_2 + 0x18) + -1 + uVar2) - 0x30U)) break;
      *(ulonglong *)(param_2 + 0x28) = uVar2;
    } while (uVar2 != *(ulonglong *)(param_2 + 0x20));
  }
  uVar1 = 0;
  if (param_3 == '\0') {
    uVar1 = DAT_1806dfe30;
  }
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}


/* address=18069fe30 name=FUN_18069fe30 */

void FUN_18069fe30(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  if (uVar2 < uVar1) {
    FUN_1806a1a20(0,uVar1,uVar2,&PTR_s_C__Users_VssAdministrator__cargo_1806df220);
LAB_18069ff02:
    do {
      invalidInstructionException();
    } while( true );
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar5 = lVar4;
  lVar3 = (**(code **)PTR_PTR_FUN_18093b870)(10,lVar4,lVar4 + uVar1);
  if (lVar3 == 1) {
    lVar3 = (lVar5 - lVar4) + 1;
    if (uVar2 <= (ulonglong)(lVar5 - lVar4)) {
      FUN_1806a1a20(0,lVar3,uVar2,&PTR_s_C__Users_VssAdministrator__cargo_1806df208);
      goto LAB_18069ff02;
    }
  }
  else {
    lVar3 = 0;
  }
  lVar4 = (**(code **)PTR_PTR_FUN_18093b868)(10,lVar4,lVar4 + lVar3);
  FUN_18069f7c0(param_2,lVar4 + 1,uVar1 - lVar3);
  return;
}


/* address=18069ff40 name=FUN_18069ff40 */

void FUN_18069ff40(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = 5;
  if (*param_2 < 0) {
    lVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00018069ff6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806e094c + *(int *)(&DAT_1806e094c + lVar1 * 4)))
            (&DAT_1806e094c,param_2,&DAT_1806e094c + *(int *)(&DAT_1806e094c + lVar1 * 4));
  return;
}


/* address=18069ffd0 name=FUN_18069ffd0 */

void FUN_18069ffd0(void)

{
  undefined *local_28;
  undefined *local_20;
  undefined **local_18;
  undefined local_9;
  
  if (DAT_18093b310 != 0) {
    local_18 = &local_28;
    local_28 = &DAT_18093b2d8;
    local_20 = &local_9;
    FUN_1806a0a20(&DAT_18093b310,1,&local_18,&DAT_1806e22e0,
                  &PTR_s__rustc_48a229ceaefd4985c50990b14_1806e2358);
  }
  return;
}


/* address=1806a0030 name=FUN_1806a0030 */

void FUN_1806a0030(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  undefined8 local_20;
  
  if (CARRY8(param_2,param_3)) {
    FUN_1806a153b(0);
    do {
      invalidInstructionException();
    } while( true );
  }
  uVar2 = *param_1 * 2;
  if (uVar2 < param_2 + param_3) {
    uVar2 = param_2 + param_3;
  }
  uVar1 = (ulonglong)(param_5 == 1) * 4 + 4;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a0f20(local_30,*param_1,param_1[1],uVar2,param_4,param_5);
  if (local_30[0] != 1) {
    param_1[1] = local_28;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_28,local_20);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a00c0 name=FUN_1806a00c0 */

undefined8 FUN_1806a00c0(longlong *param_1,longlong param_2,uint param_3,char param_4)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  int *piVar8;
  ushort uVar9;
  int *piVar10;
  
  if (param_4 == '\0') {
    param_2 = param_2 + *param_1;
    piVar1 = (int *)param_1[2];
    uVar2 = param_1[3];
    if (uVar2 < 4) {
      do {
        if (uVar2 == 0) {
          return 1;
        }
        uVar4 = 0;
        for (uVar5 = param_3; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar7 = (ulonglong)uVar4;
        if (*(char *)(param_2 + 1 + uVar7) == *(char *)piVar1) {
          if (uVar2 == 1) {
            return 1;
          }
          if (*(char *)(param_2 + 2 + uVar7) == *(char *)((longlong)piVar1 + 1)) {
            if (uVar2 == 2) {
              return 1;
            }
            if (*(char *)(param_2 + 3 + uVar7) == *(char *)((longlong)piVar1 + 2) && uVar2 == 3) {
              return 1;
            }
          }
        }
        bVar3 = (byte)uVar4 & 0xf;
        uVar9 = (ushort)param_3 & (-2 << bVar3 | 0xfffeU >> 0x10 - bVar3);
        param_3 = CONCAT22((short)(param_3 >> 0x10),uVar9);
      } while (uVar9 != 0);
    }
    else {
      do {
        uVar4 = 0;
        for (uVar5 = param_3; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        piVar6 = (int *)(param_2 + (ulonglong)uVar4 + uVar2 + -3);
        piVar8 = piVar1;
        for (piVar10 = (int *)(param_2 + (ulonglong)uVar4 + 1); piVar10 < piVar6;
            piVar10 = piVar10 + 1) {
          if (*piVar10 != *piVar8) goto LAB_1806a00fd;
          piVar8 = piVar8 + 1;
        }
        if (*piVar6 == *(int *)((longlong)piVar1 + (uVar2 - 4))) {
          return 1;
        }
LAB_1806a00fd:
        bVar3 = (byte)uVar4 & 0xf;
        uVar9 = (ushort)param_3 & (-2 << bVar3 | 0xfffeU >> 0x10 - bVar3);
        param_3 = CONCAT22((short)(param_3 >> 0x10),uVar9);
      } while (uVar9 != 0);
    }
  }
  return 0;
}


/* address=1806a01d0 name=FUN_1806a01d0 */

void FUN_1806a01d0(undefined8 param_1)

{
  FUN_1803e54b0(param_1,0);
  FUN_1806a19f0("too many running threads in thread scope/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\thread\\scoped.rs"
                ,0x51,&DAT_1806e2dc0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a0200 name=FUN_1806a0200 */

void FUN_1806a0200(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong unaff_GS_OFFSET;
  bool bVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar2 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x138
           );
  if (uVar2 < 3) {
    if (uVar2 == 2) {
      lVar3 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
      lVar7 = *(longlong *)(lVar3 + 0x140);
      if (lVar7 == 0) {
        lVar5 = DAT_18098ee60;
        do {
          if (lVar5 == -1) {
            FUN_1806a1330();
            do {
              invalidInstructionException();
            } while( true );
          }
          lVar7 = lVar5 + 1;
          LOCK();
          bVar8 = lVar5 != DAT_18098ee60;
          lVar4 = lVar7;
          if (bVar8) {
            lVar5 = DAT_18098ee60;
            lVar4 = DAT_18098ee60;
          }
          DAT_18098ee60 = lVar4;
          UNLOCK();
        } while (bVar8);
        *(longlong *)(lVar3 + 0x140) = lVar7;
      }
      local_50 = 0xffffffffffffffff;
      local_20 = FUN_1803e8bd0(lVar7,&local_50);
    }
    else {
      local_20 = FUN_1806a1100(uVar2);
    }
  }
  else {
    LOCK();
    plVar1 = (longlong *)(uVar2 - 0x10);
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar7,1) != *plVar1 < 0) goto LAB_1806a033b;
    local_20 = uVar2 - 0x10;
  }
  uStack_28 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              0x130;
  local_50 = 1;
  uStack_48 = 1;
  _auStack_38 = ZEXT816(0);
  local_40 = local_20;
  FUN_180339d20();
  puVar6 = (undefined4 *)thunk_FUN_1803e4c20(0x30,8);
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[8] = uStack_30;
    puVar6[9] = uStack_2c;
    puVar6[10] = (undefined4)uStack_28;
    puVar6[0xb] = uStack_28._4_4_;
    puVar6[4] = (undefined4)local_40;
    puVar6[5] = local_40._4_4_;
    puVar6[6] = auStack_38._0_4_;
    puVar6[7] = auStack_38._4_4_;
    *puVar6 = (undefined4)local_50;
    puVar6[1] = local_50._4_4_;
    puVar6[2] = (undefined4)uStack_48;
    puVar6[3] = uStack_48._4_4_;
    return;
  }
  FUN_1806a1521(8,0x30);
LAB_1806a033b:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a0380 name=FUN_1806a0380 */

longlong FUN_1806a0380(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong unaff_GS_OFFSET;
  undefined4 local_30;
  undefined local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(char *)(param_1 + 8) == '\x01') {
      lVar1 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
      if (*(longlong *)(lVar1 + 0x148) != 0) {
        local_30 = 0;
        local_2c = 0;
        uVar4 = FUN_1803f4d70(&local_30,
                              "fatal runtime error: the System allocator may not use TLS with destructors, aborting\nfatal runtime error: failed to set FLS value, aborting\nfatal runtime error: out of FLS keys, aborting\nfatal runtime error: failed to register fls atexit hook, aborting\n"
                              ,0xab);
        FUN_1803e24c0(uVar4);
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(7);
        do {
          invalidInstructionException();
        } while( true );
      }
      local_28 = (longlong *)(lVar1 + 0x148);
      *local_28 = -1;
      FUN_1803ef2f0();
      lVar1 = local_28[3];
      if (lVar1 == local_28[1]) {
        FUN_1806a0d60(local_28 + 1);
      }
      lVar2 = local_28[2];
      *(longlong *)(lVar2 + lVar1 * 0x10) = param_1;
      *(undefined **)(lVar2 + 8 + lVar1 * 0x10) = &LAB_1803e3670;
      local_28[3] = lVar1 + 1;
      *local_28 = *local_28 + 1;
      *(undefined *)(param_1 + 8) = 0;
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}


/* address=1806a0490 name=FUN_1806a0490 */

longlong FUN_1806a0490(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong unaff_GS_OFFSET;
  undefined4 local_30;
  undefined local_2c;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(char *)(param_1 + 8) == '\x01') {
      lVar1 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
      if (*(longlong *)(lVar1 + 0x148) != 0) {
        local_30 = 0;
        local_2c = 0;
        uVar4 = FUN_1803f4d70(&local_30,
                              "fatal runtime error: the System allocator may not use TLS with destructors, aborting\nfatal runtime error: failed to set FLS value, aborting\nfatal runtime error: out of FLS keys, aborting\nfatal runtime error: failed to register fls atexit hook, aborting\n"
                              ,0xab);
        FUN_1803e24c0(uVar4);
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(7);
        do {
          invalidInstructionException();
        } while( true );
      }
      local_28 = (longlong *)(lVar1 + 0x148);
      *local_28 = -1;
      FUN_1803ef2f0();
      lVar1 = local_28[3];
      if (lVar1 == local_28[1]) {
        FUN_1806a0d60(local_28 + 1);
      }
      lVar2 = local_28[2];
      *(longlong *)(lVar2 + lVar1 * 0x10) = param_1;
      *(undefined **)(lVar2 + 8 + lVar1 * 0x10) = &LAB_1803e3690;
      local_28[3] = lVar1 + 1;
      *local_28 = *local_28 + 1;
      *(undefined *)(param_1 + 8) = 0;
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}


/* address=1806a05a0 name=FUN_1806a05a0 */

void FUN_1806a05a0(char *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined local_29;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    iVar2 = -99;
    do {
      cVar1 = *param_1;
      if (cVar1 != '\x01') break;
      bVar3 = iVar2 != 0;
      iVar2 = iVar2 + 1;
    } while (bVar3);
  }
  if (cVar1 == '\0') {
    LOCK();
    cVar1 = *param_1;
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      *param_1 = '\x01';
      cVar1 = '\0';
    }
    UNLOCK();
    if (bVar3) {
      return;
    }
  }
  do {
    do {
      if (cVar1 != '\x02') {
        LOCK();
        cVar1 = *param_1;
        *param_1 = '\x02';
        UNLOCK();
        if (cVar1 == '\0') {
          return;
        }
      }
      local_29 = 2;
      iVar2 = WaitOnAddress(param_1,&local_29,1,0xffffffff);
      if (iVar2 != 1) {
        GetLastError();
      }
      cVar1 = *param_1;
    } while (cVar1 != '\x01');
    iVar2 = -99;
    do {
      cVar1 = *param_1;
      if (cVar1 != '\x01') break;
      bVar3 = iVar2 != 0;
      iVar2 = iVar2 + 1;
    } while (bVar3);
  } while( true );
}


/* address=1806a0660 name=API-MS-WIN-CORE-SYNCH-L1-2-0.DLL::WakeByAddressSingle */

void WakeByAddressSingle(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001806a0660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeByAddressSingle();
  return;
}


/* address=1806a0670 name=FUN_1806a0670 */

void FUN_1806a0670(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  uint local_2c;
  
  uVar2 = *param_1;
  if (uVar2 == 0x3fffffff) {
    iVar1 = -99;
    do {
      uVar2 = *param_1;
      if (uVar2 != 0x3fffffff) break;
      bVar4 = iVar1 != 0;
      iVar1 = iVar1 + 1;
    } while (bVar4);
  }
  bVar4 = false;
  do {
    do {
      if (bVar4) {
        do {
          while ((uVar3 = uVar2, uVar2 = uVar3 & 0x3fffffff,
                 (uVar3 & 0x40000000) == 0 && uVar2 - 1 < 0x3ffffffd ||
                 (uVar2 < 0x3ffffffe && uVar3 < 0x40000000))) {
            LOCK();
            uVar2 = *param_1;
            bVar4 = uVar3 == uVar2;
            if (bVar4) {
              *param_1 = uVar3 + 1;
              uVar2 = uVar3;
            }
            UNLOCK();
            if (bVar4) {
              return;
            }
          }
          if (uVar2 == 0x3ffffffe) {
LAB_1806a080a:
            FUN_1806a19f0("too many active read locks on RwLock/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\sys\\sync\\rwlock\\futex.rs"
                          ,0x49,&DAT_1806e3028);
            do {
              invalidInstructionException();
            } while( true );
          }
          if ((uVar3 & 0x40000000) != 0) break;
          LOCK();
          uVar2 = *param_1;
          bVar4 = uVar3 == uVar2;
          if (bVar4) {
            *param_1 = uVar3 | 0x40000000;
            uVar2 = uVar3;
          }
          UNLOCK();
        } while (!bVar4);
      }
      else {
        do {
          while (uVar3 = uVar2, uVar3 < 0x40000000 && (uVar3 & 0x3fffffff) < 0x3ffffffe) {
            LOCK();
            uVar2 = *param_1;
            bVar4 = uVar3 == uVar2;
            if (bVar4) {
              *param_1 = uVar3 + 1;
              uVar2 = uVar3;
            }
            UNLOCK();
            if (bVar4) {
              return;
            }
          }
          if ((uVar3 & 0x3fffffff) == 0x3ffffffe) goto LAB_1806a080a;
          if ((uVar3 & 0x40000000) != 0) break;
          LOCK();
          uVar2 = *param_1;
          bVar4 = uVar3 == uVar2;
          if (bVar4) {
            *param_1 = uVar3 | 0x40000000;
            uVar2 = uVar3;
          }
          UNLOCK();
        } while (!bVar4);
      }
      local_2c = uVar3 | 0x40000000;
      iVar1 = WaitOnAddress(param_1,&local_2c,4,0xffffffff);
      if (iVar1 != 1) {
        GetLastError();
      }
      uVar2 = *param_1;
      bVar4 = true;
    } while (uVar2 != 0x3fffffff);
    iVar1 = -99;
    do {
      uVar2 = *param_1;
      if (uVar2 != 0x3fffffff) break;
      bVar5 = iVar1 != 0;
      iVar1 = iVar1 + 1;
    } while (bVar5);
  } while( true );
}


/* address=1806a0830 name=FUN_1806a0830 */

void FUN_1806a0830(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint local_3c;
  
  uVar2 = *param_1;
  if (-1 < (int)uVar2 && (uVar2 & 0x3fffffff) != 0) {
    iVar3 = -99;
    do {
      uVar2 = *param_1;
      if (((int)uVar2 < 0) || ((uVar2 & 0x3fffffff) == 0)) break;
      bVar5 = iVar3 != 0;
      iVar3 = iVar3 + 1;
    } while (bVar5);
  }
  uVar4 = 0x3fffffff;
LAB_1806a08af:
  while ((uVar2 & 0x3fffffff) == 0) {
    LOCK();
    uVar1 = *param_1;
    bVar5 = uVar2 == uVar1;
    if (bVar5) {
      *param_1 = uVar2 | uVar4;
      uVar1 = uVar2;
    }
    uVar2 = uVar1;
    UNLOCK();
    if (bVar5) {
      return;
    }
  }
  if (-1 < (int)uVar2) goto code_r0x0001806a08ba;
  goto LAB_1806a08c8;
code_r0x0001806a08ba:
  LOCK();
  uVar1 = *param_1;
  bVar5 = uVar2 == uVar1;
  if (bVar5) {
    *param_1 = uVar2 | 0x80000000;
    uVar1 = uVar2;
  }
  uVar2 = uVar1;
  UNLOCK();
  if (bVar5) {
LAB_1806a08c8:
    local_3c = param_1[1];
    uVar2 = *param_1;
    uVar4 = 0xbfffffff;
    if ((int)uVar2 < 0 && (uVar2 & 0x3fffffff) != 0) {
      iVar3 = WaitOnAddress(param_1 + 1,&local_3c,4,0xffffffff);
      if (iVar3 != 1) {
        GetLastError();
      }
      uVar2 = *param_1;
      if (-1 < (int)uVar2 && (uVar2 & 0x3fffffff) != 0) {
        iVar3 = -99;
        do {
          uVar2 = *param_1;
          if (((int)uVar2 < 0) || ((uVar2 & 0x3fffffff) == 0)) break;
          bVar5 = iVar3 != 0;
          iVar3 = iVar3 + 1;
        } while (bVar5);
      }
    }
  }
  goto LAB_1806a08af;
}


/* address=1806a0960 name=FUN_1806a0960 */

/* WARNING: Removing unreachable block (ram,0x0001806a097d) */
/* WARNING: Removing unreachable block (ram,0x0001806a0984) */
/* WARNING: Removing unreachable block (ram,0x0001806a098a) */
/* WARNING: Removing unreachable block (ram,0x0001806a099f) */

ulonglong FUN_1806a0960(uint *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((param_2 & 0x3fffffff) != 0) {
    FUN_1806a19d0("assertion failed: is_unlocked(state)",0x24,&DAT_1806e3068);
    do {
      invalidInstructionException();
    } while( true );
  }
  if (param_2 != 0x40000000) {
    if (param_2 != 0xc0000000) {
      return (ulonglong)-param_2;
    }
    uVar2 = 0xc0000000;
    LOCK();
    uVar1 = *param_1;
    if (uVar1 == 0xc0000000) {
      *param_1 = 0x40000000;
    }
    else {
      uVar2 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 != 0xc0000000) {
      return uVar2;
    }
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
    WakeByAddressSingle(param_1 + 1);
  }
  uVar2 = 0x40000000;
  LOCK();
  uVar1 = *param_1;
  if (uVar1 == 0x40000000) {
    *param_1 = 0;
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  UNLOCK();
  if (uVar1 != 0x40000000) {
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001806a09eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = WakeByAddressAll();
  return uVar2;
}


/* address=1806a0a20 name=FUN_1806a0a20 */

void FUN_1806a0a20(uint *param_1,char param_2,undefined8 param_3,longlong param_4,undefined8 param_5
                  )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint local_58;
  undefined local_54;
  uint *local_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar2 = *param_1;
  if (param_2 == '\0') {
    uVar4 = uVar2 & 4;
    switch(uVar2 & 3) {
    case 1:
switchD_1806a0b32_caseD_1:
      do {
        uVar3 = uVar2;
        if (uVar4 == 0) {
          uVar3 = uVar2 | 4;
          LOCK();
          uVar2 = *param_1;
          bVar5 = uVar2 == 1;
          if (bVar5) {
            *param_1 = uVar3;
            uVar2 = 1;
          }
          UNLOCK();
          if (!bVar5) goto LAB_1806a0bb8;
        }
        local_44 = uVar3;
        iVar1 = WaitOnAddress(param_1,&local_44,4,0xffffffff);
        if (iVar1 != 1) {
          GetLastError();
        }
        uVar2 = *param_1;
        uVar4 = uVar2 & 4;
        switch(uVar2 & 3) {
        case 0:
          goto switchD_1806a0b32_caseD_0;
        case 2:
          goto switchD_1806a0b32_caseD_2;
        case 3:
switchD_1806a0b32_caseD_3:
          do {
            LOCK();
            uVar3 = *param_1;
            bVar5 = uVar2 == uVar3;
            if (bVar5) {
              *param_1 = uVar4 | 1;
              uVar3 = uVar2;
            }
            UNLOCK();
            uVar2 = uVar3;
            if (bVar5) {
              local_54 = false;
              goto LAB_1806a0ae2;
            }
LAB_1806a0bb8:
            uVar4 = uVar2 & 4;
            switch(uVar2 & 3) {
            case 0:
              goto switchD_1806a0b32_caseD_0;
            case 1:
              goto switchD_1806a0b32_caseD_1;
            case 2:
              goto switchD_1806a0b32_caseD_2;
            }
          } while( true );
        }
      } while( true );
    case 2:
switchD_1806a0b32_caseD_2:
      FUN_1806a19f0("Once instance has previously been poisoned/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\path.rs"
                    ,0x55,param_5);
      do {
        invalidInstructionException();
      } while( true );
    case 3:
      goto switchD_1806a0b32_caseD_3;
    }
  }
  else {
LAB_1806a0a7b:
    do {
      uVar4 = uVar2 & 3;
      if (1 < uVar4 - 2) {
        if (uVar4 != 1) {
          return;
        }
        uVar4 = uVar2;
        if ((uVar2 & 4) == 0) {
          uVar4 = uVar2 | 4;
          LOCK();
          uVar2 = *param_1;
          bVar5 = uVar2 == 1;
          if (bVar5) {
            *param_1 = uVar4;
            uVar2 = 1;
          }
          UNLOCK();
          if (!bVar5) goto LAB_1806a0a7b;
        }
        local_44 = uVar4;
        iVar1 = WaitOnAddress(param_1,&local_44,4,0xffffffff);
        if (iVar1 != 1) {
          GetLastError();
        }
        uVar2 = *param_1;
        goto LAB_1806a0a7b;
      }
      LOCK();
      uVar3 = *param_1;
      bVar5 = uVar2 == uVar3;
      if (bVar5) {
        *param_1 = uVar2 & 4 | 1;
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
      UNLOCK();
    } while (!bVar5);
    local_54 = uVar4 == 2;
LAB_1806a0ae2:
    local_58 = 0;
    local_50 = param_1;
    (**(code **)(param_4 + 0x20))(param_3,&local_58);
    LOCK();
    uVar2 = *local_50;
    *local_50 = local_58;
    UNLOCK();
    if ((uVar2 & 4) != 0) {
      WakeByAddressAll();
    }
  }
switchD_1806a0b32_caseD_0:
  return;
}


/* address=1806a0c10 name=FUN_1806a0c10 */

void FUN_1806a0c10(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  undefined8 local_20;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a0f20(local_30,*param_1,param_1[1],uVar2,8,0x38);
  if (local_30[0] != 1) {
    param_1[1] = local_28;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_28,local_20);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a0c80 name=FUN_1806a0c80 */

void FUN_1806a0c80(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  undefined8 local_20;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a0f20(local_30,*param_1,param_1[1],uVar2,8,0x48);
  if (local_30[0] != 1) {
    param_1[1] = local_28;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_28,local_20);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a0cf0 name=FUN_1806a0cf0 */

void FUN_1806a0cf0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  undefined8 local_20;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a0f20(local_30,*param_1,param_1[1],uVar2,8,0x20);
  if (local_30[0] != 1) {
    param_1[1] = local_28;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_28,local_20);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a0d60 name=FUN_1806a0d60 */

void FUN_1806a0d60(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1806a0eb0(param_1,*param_1);
  if (lVar1 == -1) {
    return;
  }
  FUN_1806a153b(lVar1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a0d90 name=FUN_1806a0d90 */

void FUN_1806a0d90(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  undefined8 local_20;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a0f20(local_30,*param_1,param_1[1],uVar2,2,2);
  if (local_30[0] != 1) {
    param_1[1] = local_28;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_28,local_20);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a0e00 name=FUN_1806a0e00 */

void FUN_1806a0e00(undefined8 *param_1,longlong param_2,LPVOID param_3,ulonglong param_4)

{
  bool bVar1;
  longlong lVar2;
  HANDLE hHeap;
  undefined *puVar3;
  ulonglong dwBytes;
  undefined8 uVar4;
  
  dwBytes = param_4 << 4;
  bVar1 = param_4 >> 0x3c != 0;
  uVar4 = 1;
  if (0x7ffffffffffffff8 < dwBytes || bVar1) {
    lVar2 = 8;
    dwBytes = 0;
    goto LAB_1806a0e9d;
  }
  if (param_2 == 0) {
    if (dwBytes != 0) {
      puVar3 = (undefined *)
               FUN_1803ee980(CONCAT71(0x7fffffffffffff,0x7ffffffffffffff8 < dwBytes || bVar1),0,
                             dwBytes);
      goto joined_r0x0001806a0e7b;
    }
    puVar3 = &DAT_00000008;
  }
  else {
    hHeap = GetProcessHeap();
    puVar3 = (undefined *)HeapReAlloc(hHeap,0,param_3,dwBytes);
joined_r0x0001806a0e7b:
    if (puVar3 == (undefined *)0x0) {
      param_1[1] = 8;
      lVar2 = 0x10;
      goto LAB_1806a0e9d;
    }
  }
  param_1[1] = puVar3;
  lVar2 = 0x10;
  uVar4 = 0;
LAB_1806a0e9d:
  *(ulonglong *)((longlong)param_1 + lVar2) = dwBytes;
  *param_1 = uVar4;
  return;
}


/* address=1806a0eb0 name=FUN_1806a0eb0 */

ulonglong FUN_1806a0eb0(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char local_30 [8];
  ulonglong local_28;
  
  uVar2 = *param_1 * 2;
  uVar1 = param_2 + 1U;
  if (param_2 + 1U <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a0e00(local_30,*param_1,param_1[1],uVar2);
  if (local_30[0] == '\0') {
    param_1[1] = local_28;
    *param_1 = uVar2;
    local_28 = 0xffffffffffffffff;
  }
  return local_28;
}


/* address=1806a0f20 name=FUN_1806a0f20 */

void FUN_1806a0f20(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar5 = 1;
  if (0x8000000000000000U - param_5 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    lVar4 = 8;
    uVar3 = 0;
    goto LAB_1806a0fc4;
  }
  if (param_2 == 0) {
    lVar4 = param_5;
    if (uVar3 != 0) {
      FUN_180339d20();
      lVar4 = thunk_FUN_1803e4c20(uVar3,param_5);
      goto joined_r0x0001806a0fa8;
    }
  }
  else {
    lVar4 = thunk_FUN_1803e4cc0(param_3,param_6 * param_2,param_5,uVar3);
joined_r0x0001806a0fa8:
    if (lVar4 == 0) {
      param_1[1] = param_5;
      lVar4 = 0x10;
      goto LAB_1806a0fc4;
    }
  }
  param_1[1] = lVar4;
  lVar4 = 0x10;
  uVar5 = 0;
LAB_1806a0fc4:
  *(ulonglong *)((longlong)param_1 + lVar4) = uVar3;
  *param_1 = uVar5;
  return;
}


/* address=1806a0fe0 name=FUN_1806a0fe0 */

longlong FUN_1806a0fe0(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  if (uVar2 - param_1[2] < param_3) {
    lVar1 = FUN_1803e8ff0(param_1);
    if (lVar1 != 0) {
      return lVar1;
    }
    uVar2 = *param_1;
  }
  if (param_3 < uVar2) {
    uVar2 = param_1[2];
    FUN_180691e40(param_1[1] + uVar2,param_2,param_3);
    param_1[2] = uVar2 + param_3;
    lVar1 = 0;
  }
  else {
    *(undefined *)(param_1 + 3) = 1;
    lVar1 = FUN_1803f4e30((longlong)param_1 + 0x19,param_2,param_3);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      uVar3 = (uint)lVar1 & 3;
      if (((1 < uVar3) && (uVar3 == 2)) && ((int)((ulonglong)lVar1 >> 0x20) == 6)) {
        lVar1 = 0;
      }
    }
    *(undefined *)(param_1 + 3) = 0;
  }
  return lVar1;
}


/* address=1806a1090 name=FUN_1806a1090 */

void FUN_1806a1090(void)

{
  FUN_1806a19f0("LazyLock instance has previously been poisoned/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\sync\\lazy_lock.rs"
                ,0x5d,&DAT_1806e3cc8);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a10c0 name=FUN_1806a10c0 */

void FUN_1806a10c0(undefined8 param_1)

{
  undefined *local_20;
  undefined *local_18;
  undefined local_9;
  
  local_20 = &local_9;
  local_18 = &LAB_1803f2410;
  FUN_1806a19f0(&DAT_1806e3ce0,&local_20,param_1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1100 name=FUN_1806a1100 */

void FUN_1806a1100(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong unaff_GS_OFFSET;
  bool bVar7;
  ulonglong local_40 [3];
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
    *(undefined8 *)(lVar1 + 0x138) = 1;
    lVar6 = *(longlong *)(lVar1 + 0x140);
    if (lVar6 == 0) {
      lVar4 = DAT_18098ee60;
      do {
        if (lVar4 == -1) {
          FUN_1806a1330();
          do {
            invalidInstructionException();
          } while( true );
        }
        lVar6 = lVar4 + 1;
        LOCK();
        bVar7 = lVar4 != DAT_18098ee60;
        lVar3 = lVar6;
        if (bVar7) {
          lVar4 = DAT_18098ee60;
          lVar3 = DAT_18098ee60;
        }
        DAT_18098ee60 = lVar3;
        UNLOCK();
      } while (bVar7);
      *(longlong *)(lVar1 + 0x140) = lVar6;
    }
    local_40[0] = 0xffffffffffffffff;
    local_28 = (longlong *)FUN_1803e8bd0(lVar6,local_40);
    local_20 = local_28;
    FUN_1803ef2f0();
    LOCK();
    lVar6 = *local_20;
    *local_20 = *local_20 + 1;
    UNLOCK();
    if (*local_20 != 0 && SCARRY8(lVar6,1) == *local_20 < 0) {
      *(longlong **)(lVar1 + 0x138) = local_20 + 2;
      return;
    }
  }
  else {
    if (param_1 == 1) {
      local_40[0] = local_40[0] & 0xffffff0000000000;
      uVar5 = FUN_1803f4d70(local_40,
                            "fatal runtime error: init_current() was re-entrant, which indicates a bug in the Rust threading implementation, aborting\n*"
                            ,0xf3);
      FUN_1803e24c0(uVar5);
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(7);
      do {
        invalidInstructionException();
      } while( true );
    }
    FUN_1806a19f0("use of std::thread::current() is not possible after the thread\'s local data has been destroyed/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\thread\\current.rs"
                  ,0xbd,&DAT_1806e3de0);
  }
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1250 name=FUN_1806a1250 */

undefined8 FUN_1806a1250(void)

{
  longlong lVar1;
  longlong unaff_GS_OFFSET;
  
  lVar1 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0xf8) == 0);
}


/* address=1806a1270 name=FUN_1806a1270 */

void FUN_1806a1270(void)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong local_28;
  LARGE_INTEGER local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20.QuadPart = 0;
  BVar1 = QueryPerformanceFrequency(&local_20);
  if (BVar1 != 0) {
    DAT_18098eea0.s = local_20.s;
    return;
  }
  DVar2 = GetLastError();
  if (*(undefined ***)PTR_PTR_18093b390 != &PTR_LAB_1806e2398) {
    FUN_1806a1bf0(&PTR_LAB_1806e2398);
  }
  local_28 = (ulonglong)DVar2 << 0x20 | 2;
  FUN_1806a1790("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_1806e2be0,
                &PTR_s__rustc_48a229ceaefd4985c50990b14_1806e44e8);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1330 name=FUN_1806a1330 */

void FUN_1806a1330(void)

{
  FUN_1806a19f0("failed to generate unique thread ID: bitspace exhausted",0x6f,
                &PTR_s__rustc_48a229ceaefd4985c50990b14_1806e4550);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1354 name=FUN_1806a1354 */

undefined8 FUN_1806a1354(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  undefined8 local_20 [2];
  
  FUN_1803f4fe0(local_20,param_1);
  LOCK();
  DAT_18098ee50 = DAT_18098ee50 + -1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  plVar1 = (longlong *)(lVar2 + 0xf8);
  *plVar1 = *plVar1 + -1;
  *(undefined *)(lVar2 + 0x100) = 0;
  return local_20[0];
}


/* address=1806a13b0 name=FUN_1806a13b0 */

void FUN_1806a13b0(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  undefined8 local_20;
  
  if (CARRY8(param_2,param_3)) {
    FUN_1806a153b(0);
    do {
      invalidInstructionException();
    } while( true );
  }
  uVar1 = *param_1 * 2;
  if (uVar1 < param_2 + param_3) {
    uVar1 = param_2 + param_3;
  }
  uVar2 = 8;
  if (8 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a1490(local_30,*param_1,param_1[1],uVar2);
  if (local_30[0] != 1) {
    param_1[1] = local_28;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_28,local_20);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1430 name=FUN_1806a1430 */

void FUN_1806a1430(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  undefined8 local_20;
  
  uVar1 = *param_1 * 2;
  uVar2 = 8;
  if (8 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a1490(local_30,*param_1,param_1[1],uVar2);
  if (local_30[0] != 1) {
    param_1[1] = local_28;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_28,local_20);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1490 name=FUN_1806a1490 */

void FUN_1806a1490(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (param_4 < 0) {
    lVar1 = 8;
    param_4 = 0;
    goto LAB_1806a1511;
  }
  if (param_2 == 0) {
    if (param_4 != 0) {
      FUN_180339d20();
      lVar1 = thunk_FUN_1803e4c20(param_4,1);
      goto joined_r0x0001806a14f0;
    }
    lVar1 = 1;
  }
  else {
    lVar1 = thunk_FUN_1803e4cc0(param_3,param_2,1,param_4);
joined_r0x0001806a14f0:
    if (lVar1 == 0) {
      param_1[1] = 1;
      lVar1 = 0x10;
      goto LAB_1806a1511;
    }
  }
  param_1[1] = lVar1;
  lVar1 = 0x10;
  uVar2 = 0;
LAB_1806a1511:
  *(longlong *)((longlong)param_1 + lVar1) = param_4;
  *param_1 = uVar2;
  return;
}


/* address=1806a1521 name=FUN_1806a1521 */

void FUN_1806a1521(undefined8 param_1,undefined8 param_2)

{
  FUN_1803e4f20(param_2,param_1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a153b name=FUN_1806a153b */

void FUN_1806a153b(longlong param_1)

{
  if (param_1 == 0) {
    FUN_1806a1560();
    do {
      invalidInstructionException();
    } while( true );
  }
  FUN_1806a1521();
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1560 name=FUN_1806a1560 */

void FUN_1806a1560(void)

{
  FUN_1806a19f0("capacity overflow",0x23,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806e57d8);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1584 name=FUN_1806a1584 */

void FUN_1806a1584(void)

{
  FUN_1806a19f0(&DAT_1806e57f0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a15c4 name=FUN_1806a15c4 */

void FUN_1806a15c4(void)

{
  FUN_1806a19f0(&DAT_1806e581f);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1604 name=FUN_1806a1604 */

void FUN_1806a1604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_2;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806e6408,&local_18,&DAT_1806e6408,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1643 name=FUN_1806a1643 */

void FUN_1806a1643(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_3;
  local_10 = param_2;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806e6428,&local_18,&DAT_1806e6428,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1690 name=FUN_1806a1690 */

void FUN_1806a1690(void)

{
  FUN_1803fc4e0();
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a16b0 name=FUN_1806a16b0 */

void FUN_1806a16b0(undefined8 param_1)

{
  undefined *local_20;
  undefined *local_18;
  undefined local_9;
  
  local_20 = &local_9;
  local_18 = &DAT_180405180;
  FUN_1806a19f0(&DAT_1806e682c,&local_20,param_1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a16f0 name=FUN_1806a16f0 */

void FUN_1806a16f0(undefined8 param_1)

{
  undefined *local_20;
  undefined *local_18;
  undefined local_9;
  
  local_20 = &local_9;
  local_18 = &DAT_180405160;
  FUN_1806a19f0(&DAT_1806e682c,&local_20,param_1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1730 name=FUN_1806a1730 */

void FUN_1806a1730(undefined8 param_1,undefined8 param_2)

{
  undefined8 *local_28;
  undefined *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = &local_18;
  local_20 = &LAB_180402260;
  local_18 = param_1;
  local_10 = param_2;
  FUN_1806a19f0(&DAT_1806e682c,&local_28);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1770 name=FUN_1806a1770 */

void FUN_1806a1770(undefined8 param_1)

{
  FUN_1806a19d0(&DAT_1806e7161,0x2b,param_1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1790 name=FUN_1806a1790 */

void FUN_1806a1790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *local_48;
  undefined *local_40;
  undefined8 *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = &local_18;
  local_40 = &LAB_180402260;
  local_38 = &local_28;
  local_30 = &LAB_1803f14e0;
  local_28 = param_3;
  local_20 = param_4;
  local_18 = param_1;
  local_10 = param_2;
  FUN_1806a19f0(&DAT_1806e718c,&local_48,param_5);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a17f0 name=FUN_1806a17f0 */

void FUN_1806a17f0(undefined8 param_1,longlong param_2)

{
  FUN_1806a1860(param_1,param_2 * 2 + 1,0,&PTR_s__rustc_48a229ceaefd4985c50990b14_1806e71e0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1813 name=FUN_1806a1813 */

void FUN_1806a1813(void)

{
  FUN_1806a19f0(&DAT_1806e71f8);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1860 name=FUN_1806a1860 */

void FUN_1806a1860(undefined8 param_1,undefined8 param_2,undefined param_3,undefined8 param_4)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined local_18;
  undefined local_17;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = &local_38;
  local_18 = 0;
  local_38 = param_1;
  local_30 = param_2;
  local_20 = param_4;
  local_17 = param_3;
  FUN_1803e4e00(&local_28);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a18b5 name=FUN_1806a18b5 */

void FUN_1806a18b5(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **local_88;
  undefined *local_80;
  longlong *local_78;
  undefined *local_70;
  undefined8 *local_68;
  undefined *local_60;
  undefined8 *local_58;
  undefined *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = &local_28;
  local_20 = param_5;
  local_38 = &DAT_1806e8e38 + *(int *)(&DAT_1806e8e38 + (ulonglong)param_1 * 4);
  local_30 = *(undefined8 *)(&DAT_1806e8e48 + (ulonglong)param_1 * 8);
  local_28 = param_4;
  local_18 = param_2;
  local_10 = param_3;
  if (param_6 == 0) {
    local_88 = &local_38;
    local_80 = &LAB_180402260;
    local_78 = &local_18;
    local_70 = &LAB_1803f14e0;
    local_60 = &LAB_1803f14e0;
    local_68 = local_58;
    FUN_1806a19f0(&DAT_1806e723a,&local_88,param_8);
    do {
      invalidInstructionException();
    } while( true );
  }
  local_78 = &local_48;
  local_48 = param_6;
  local_40 = param_7;
  local_88 = &local_38;
  local_80 = &LAB_180402260;
  local_70 = &LAB_180403050;
  local_68 = &local_18;
  local_60 = &LAB_1803f14e0;
  local_50 = &LAB_1803f14e0;
  FUN_1806a19f0(&DAT_1806e7271,&local_88,param_8);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a19af name=FUN_1806a19af */

void FUN_1806a19af(void)

{
  FUN_1806a17f0(&DAT_1806e72ac,0x26);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a19d0 name=FUN_1806a19d0 */

void FUN_1806a19d0(undefined8 param_1,longlong param_2)

{
  FUN_1806a19f0(param_1,param_2 * 2 + 1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a19f0 name=FUN_1806a19f0 */

void FUN_1806a19f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *local_30;
  undefined8 local_28;
  undefined2 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = &local_18;
  local_20 = 1;
  local_28 = param_3;
  local_18 = param_1;
  local_10 = param_2;
  FUN_1803e4e00(&local_30);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1a20 name=FUN_1806a1a20 */

void FUN_1806a1a20(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong *local_38;
  code *local_30;
  ulonglong *local_28;
  code *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_18 = param_3;
  local_10 = param_1;
  if (param_3 < param_1) {
    local_38 = &local_10;
    local_30 = FUN_180404240;
    local_28 = &local_18;
    local_20 = FUN_180404240;
    FUN_1806a19f0(&DAT_1806e74fc,&local_38,param_4);
    do {
      invalidInstructionException();
    } while( true );
  }
  if ((param_2 <= param_3) && (param_2 < param_1)) {
    local_38 = &local_10;
    local_30 = FUN_180404240;
    local_28 = &local_18;
    local_20 = FUN_180404240;
    local_18 = param_2;
    FUN_1806a19f0(&DAT_1806e74d4,&local_38,param_4);
    do {
      invalidInstructionException();
    } while( true );
  }
  local_38 = &local_10;
  local_30 = FUN_180404240;
  local_28 = &local_18;
  local_20 = FUN_180404240;
  local_10 = param_2;
  FUN_1806a19f0(&DAT_1806e749d,&local_38,param_4);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1af0 name=FUN_1806a1af0 */

void FUN_1806a1af0(undefined8 param_1)

{
  FUN_1806a19f0("attempt to divide by zeroattempt to calculate the remainder with a divisor of zero`async fn` resumed after completion`async fn` resumed after panicking"
                ,0x33,param_1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1b10 name=FUN_1806a1b10 */

void FUN_1806a1b10(undefined8 param_1)

{
  FUN_1806a19f0("attempt to calculate the remainder with a divisor of zero`async fn` resumed after completion`async fn` resumed after panicking"
                ,0x73,param_1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1b30 name=FUN_1806a1b30 */

void FUN_1806a1b30(undefined8 param_1)

{
  FUN_1806a19f0("`async fn` resumed after completion`async fn` resumed after panicking",0x47,param_1
               );
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1b50 name=FUN_1806a1b50 */

void FUN_1806a1b50(undefined8 param_1)

{
  FUN_1806a19f0("`async fn` resumed after panicking",0x45,param_1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1b70 name=FUN_1806a1b70 */

void FUN_1806a1b70(void)

{
  FUN_1806a19f0("user-provided comparison function does not correctly implement a total order/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\core\\src\\slice\\sort\\shared\\smallsort.rs"
                ,0x99,&DAT_1806e7998);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a1bf0 name=FUN_1806a1bf0 */

void FUN_1806a1bf0(undefined *param_1)

{
  PTR_PTR_FUN_18093b380 = param_1;
  return;
}


/* address=1806a1c00 name=FUN_1806a1c00 */

/* WARNING: Removing unreachable block (ram,0x0001806a2038) */
/* WARNING: Removing unreachable block (ram,0x0001806a1ee0) */
/* WARNING: Removing unreachable block (ram,0x0001806a1fc7) */
/* WARNING: Removing unreachable block (ram,0x0001806a1fd0) */
/* WARNING: Removing unreachable block (ram,0x0001806a1fee) */
/* WARNING: Removing unreachable block (ram,0x0001806a1f16) */
/* WARNING: Removing unreachable block (ram,0x0001806a1ff0) */
/* WARNING: Removing unreachable block (ram,0x0001806a1ff9) */
/* WARNING: Removing unreachable block (ram,0x0001806a1f2c) */
/* WARNING: Removing unreachable block (ram,0x0001806a2010) */
/* WARNING: Removing unreachable block (ram,0x0001806a1f48) */
/* WARNING: Removing unreachable block (ram,0x0001806a2054) */
/* WARNING: Removing unreachable block (ram,0x0001806a1f7b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined (*) [16]
FUN_1806a1c00(undefined (**param_1) [16],ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined (*pauVar2) [16];
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined (*pauVar9) [16];
  undefined *puVar10;
  ulonglong uVar11;
  undefined (*pauVar12) [16];
  undefined (*pauVar13) [16];
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined (*local_b8) [16];
  undefined (*local_b0) [16];
  longlong local_a8;
  undefined8 local_a0;
  undefined (**local_98) [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined (*local_80) [16];
  undefined (*local_78) [16];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined (**local_50) [16];
  undefined8 local_48;
  
  auVar22 = _DAT_1806c50b0;
  local_48 = 0xfffffffffffffffe;
  pauVar13 = param_1[3];
  puVar16 = *pauVar13 + param_2;
  local_58 = param_3;
  if (CARRY8(param_2,(ulonglong)pauVar13)) {
    pauVar13 = (undefined (*) [16])FUN_1803f5160(param_4);
    return pauVar13;
  }
  pauVar12 = param_1[1];
  puVar10 = *pauVar12 + 1;
  pauVar9 = (undefined (*) [16])
            (((ulonglong)puVar10 & 0xfffffffffffffff8) - ((ulonglong)puVar10 >> 3));
  if (pauVar12 < (undefined (*) [16])&DAT_00000008) {
    pauVar9 = pauVar12;
  }
  if ((undefined *)((ulonglong)pauVar9 >> 1) < puVar16) {
    puVar10 = *pauVar9 + 1;
    if (*pauVar9 + 1 <= puVar16) {
      puVar10 = puVar16;
    }
    FUN_180405900(&local_b8,0x20,puVar10);
    if (local_b8 == (undefined (*) [16])0x0) {
      return local_b0;
    }
    local_98 = param_1 + 4;
    local_90 = 0x20;
    local_88 = 0x10;
    local_80 = local_b8;
    local_78 = local_b0;
    local_70 = local_a8;
    local_68 = local_a0;
    pauVar13 = param_1[3];
    if (pauVar13 == (undefined (*) [16])0x0) {
      pauVar13 = (undefined (*) [16])0x0;
    }
    else {
      local_60 = local_a8;
      pauVar12 = *param_1;
      auVar22 = *pauVar12;
      uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar22[15] >> 7) << 0xf);
      lVar20 = 0;
      local_50 = param_1;
      do {
        if ((short)uVar18 == 0) {
          do {
            auVar22 = pauVar12[1];
            pauVar12 = pauVar12 + 1;
            uVar18 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar22[15] >> 7) << 0xf) ^ 0xffff;
            lVar20 = lVar20 + 0x10;
          } while (uVar18 == 0);
        }
        uVar4 = 0;
        for (uVar14 = uVar18; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar11 = FUN_180332680(local_58,*local_50 + ((ulonglong)uVar4 + lVar20) * -2 + -2);
        uVar17 = uVar11 & (ulonglong)local_b0;
        auVar22 = *(undefined (*) [16])(*local_b8 + uVar17);
        uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar22[15] >> 7) << 0xf;
        uVar14 = (uint)uVar3;
        if (uVar3 == 0) {
          lVar19 = 0x10;
          do {
            uVar17 = uVar17 + lVar19 & (ulonglong)local_b0;
            auVar22 = *(undefined (*) [16])(*local_b8 + uVar17);
            lVar19 = lVar19 + 0x10;
            uVar14 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar22[15] >> 7) << 0xf);
          } while (uVar14 == 0);
        }
        uVar15 = 0;
        for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        uVar17 = uVar15 + uVar17 & (ulonglong)local_b0;
        if (-1 < (char)(*local_b8)[uVar17]) {
          auVar22 = *local_b8;
          uVar14 = 0;
          for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar22[15] >> 7) << 0xf); (uVar15 & 1) == 0;
              uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar17 = (ulonglong)uVar14;
        }
        uVar18 = uVar18 - 1 & uVar18;
        pauVar13 = (undefined (*) [16])(pauVar13[-1] + 0xf);
        bVar8 = (byte)(uVar11 >> 0x39);
        (*local_b8)[uVar17] = bVar8;
        local_b8[1][uVar17 - 0x10 & (ulonglong)local_b0] = bVar8;
        uVar11 = ~((ulonglong)uVar4 + lVar20);
        auVar22 = (*local_50)[uVar11 * 2];
        pauVar9 = *local_50 + uVar11 * 2 + 1;
        uVar5 = *(undefined4 *)(*pauVar9 + 4);
        uVar6 = *(undefined4 *)(*pauVar9 + 8);
        uVar7 = *(undefined4 *)(*pauVar9 + 0xc);
        pauVar2 = local_b8 + ~uVar17 * 2 + 1;
        *(undefined4 *)*pauVar2 = *(undefined4 *)*pauVar9;
        *(undefined4 *)(*pauVar2 + 4) = uVar5;
        *(undefined4 *)(*pauVar2 + 8) = uVar6;
        *(undefined4 *)(*pauVar2 + 0xc) = uVar7;
        local_b8[~uVar17 * 2] = auVar22;
      } while (pauVar13 != (undefined (*) [16])0x0);
      pauVar13 = local_50[3];
      param_1 = local_50;
      local_a8 = local_60;
    }
    pauVar12 = *param_1;
    pauVar9 = param_1[1];
    *param_1 = local_b8;
    param_1[1] = local_b0;
    param_1[2] = (undefined (*) [16])(local_a8 - (longlong)pauVar13);
    param_1[3] = pauVar13;
    if (pauVar9 == (undefined (*) [16])0x0) {
      return (undefined (*) [16])0xffffffffffffffff;
    }
    if (pauVar9[(longlong)pauVar9 * 2 + 3] + 1 == (undefined *)0x0) {
      return (undefined (*) [16])0xffffffffffffffff;
    }
    thunk_FUN_1803e4c80((longlong)pauVar12 - ((longlong)pauVar9 * 0x20 + 0x20),
                        pauVar9[(longlong)pauVar9 * 2 + 3] + 1,0x10);
    return (undefined (*) [16])0xffffffffffffffff;
  }
  if (puVar10 == (undefined *)0x0) {
    pauVar12 = (undefined (*) [16])0x0;
    goto LAB_1806a20a8;
  }
  pauVar13 = *param_1;
  uVar11 = (((ulonglong)puVar10 >> 4) + 1) - (ulonglong)(((ulonglong)puVar10 & 0xf) == 0);
  if (uVar11 == 1) {
    lVar20 = 0;
LAB_1806a1e84:
    pcVar1 = *pauVar13 + lVar20;
    auVar22[0] = -(*pcVar1 < '\0');
    auVar22[1] = -(pcVar1[1] < '\0');
    auVar22[2] = -(pcVar1[2] < '\0');
    auVar22[3] = -(pcVar1[3] < '\0');
    auVar22[4] = -(pcVar1[4] < '\0');
    auVar22[5] = -(pcVar1[5] < '\0');
    auVar22[6] = -(pcVar1[6] < '\0');
    auVar22[7] = -(pcVar1[7] < '\0');
    auVar22[8] = -(pcVar1[8] < '\0');
    auVar22[9] = -(pcVar1[9] < '\0');
    auVar22[10] = -(pcVar1[10] < '\0');
    auVar22[11] = -(pcVar1[0xb] < '\0');
    auVar22[12] = -(pcVar1[0xc] < '\0');
    auVar22[13] = -(pcVar1[0xd] < '\0');
    auVar22[14] = -(pcVar1[0xe] < '\0');
    auVar22[15] = -(pcVar1[0xf] < '\0');
    *(undefined (*) [16])(*pauVar13 + lVar20) = auVar22 | _DAT_1806c50b0;
  }
  else {
    uVar17 = uVar11 & 0x1ffffffffffffffe;
    lVar20 = 0;
    do {
      pcVar1 = *pauVar13 + lVar20;
      auVar23[0] = -(*pcVar1 < '\0');
      auVar23[1] = -(pcVar1[1] < '\0');
      auVar23[2] = -(pcVar1[2] < '\0');
      auVar23[3] = -(pcVar1[3] < '\0');
      auVar23[4] = -(pcVar1[4] < '\0');
      auVar23[5] = -(pcVar1[5] < '\0');
      auVar23[6] = -(pcVar1[6] < '\0');
      auVar23[7] = -(pcVar1[7] < '\0');
      auVar23[8] = -(pcVar1[8] < '\0');
      auVar23[9] = -(pcVar1[9] < '\0');
      auVar23[10] = -(pcVar1[10] < '\0');
      auVar23[11] = -(pcVar1[0xb] < '\0');
      auVar23[12] = -(pcVar1[0xc] < '\0');
      auVar23[13] = -(pcVar1[0xd] < '\0');
      auVar23[14] = -(pcVar1[0xe] < '\0');
      auVar23[15] = -(pcVar1[0xf] < '\0');
      *(undefined (*) [16])(*pauVar13 + lVar20) = auVar23 | auVar22;
      pcVar1 = pauVar13[1] + lVar20;
      auVar24[0] = -(*pcVar1 < '\0');
      auVar24[1] = -(pcVar1[1] < '\0');
      auVar24[2] = -(pcVar1[2] < '\0');
      auVar24[3] = -(pcVar1[3] < '\0');
      auVar24[4] = -(pcVar1[4] < '\0');
      auVar24[5] = -(pcVar1[5] < '\0');
      auVar24[6] = -(pcVar1[6] < '\0');
      auVar24[7] = -(pcVar1[7] < '\0');
      auVar24[8] = -(pcVar1[8] < '\0');
      auVar24[9] = -(pcVar1[9] < '\0');
      auVar24[10] = -(pcVar1[10] < '\0');
      auVar24[11] = -(pcVar1[0xb] < '\0');
      auVar24[12] = -(pcVar1[0xc] < '\0');
      auVar24[13] = -(pcVar1[0xd] < '\0');
      auVar24[14] = -(pcVar1[0xe] < '\0');
      auVar24[15] = -(pcVar1[0xf] < '\0');
      *(undefined (*) [16])(pauVar13[1] + lVar20) = auVar24 | auVar22;
      lVar20 = lVar20 + 0x20;
      uVar17 = uVar17 - 2;
    } while (uVar17 != 0);
    if ((uVar11 & 1) != 0) goto LAB_1806a1e84;
  }
  if (puVar10 < &DAT_00000010) {
    puVar16 = &DAT_00000010;
  }
  else {
    puVar16 = puVar10;
    puVar10 = &DAT_00000010;
  }
  FUN_180691e40(puVar16 + (longlong)pauVar13,pauVar13,puVar10);
  pauVar13 = (undefined (*) [16])0x0;
  do {
    bVar21 = pauVar13 != pauVar12;
    pauVar13 = (undefined (*) [16])(*pauVar13 + 1);
  } while (bVar21);
  pauVar9 = param_1[1];
  pauVar13 = param_1[3];
  pauVar12 = (undefined (*) [16])
             (((ulonglong)(*pauVar9 + 1) & 0xfffffffffffffff8) - ((ulonglong)(*pauVar9 + 1) >> 3));
  if (pauVar9 < (undefined (*) [16])&DAT_00000008) {
    pauVar12 = pauVar9;
  }
LAB_1806a20a8:
  param_1[2] = (undefined (*) [16])((longlong)pauVar12 - (longlong)pauVar13);
  return (undefined (*) [16])0xffffffffffffffff;
}


/* address=1806a21c0 name=FUN_1806a21c0 */

/* WARNING: Removing unreachable block (ram,0x0001806a24a1) */
/* WARNING: Removing unreachable block (ram,0x0001806a24cc) */
/* WARNING: Removing unreachable block (ram,0x0001806a258f) */
/* WARNING: Removing unreachable block (ram,0x0001806a2598) */
/* WARNING: Removing unreachable block (ram,0x0001806a25b6) */
/* WARNING: Removing unreachable block (ram,0x0001806a2507) */
/* WARNING: Removing unreachable block (ram,0x0001806a25b8) */
/* WARNING: Removing unreachable block (ram,0x0001806a25c2) */
/* WARNING: Removing unreachable block (ram,0x0001806a251d) */
/* WARNING: Removing unreachable block (ram,0x0001806a2860) */
/* WARNING: Removing unreachable block (ram,0x0001806a2539) */
/* WARNING: Removing unreachable block (ram,0x0001806a287e) */
/* WARNING: Removing unreachable block (ram,0x0001806a2877) */
/* WARNING: Removing unreachable block (ram,0x0001806a2574) */
/* WARNING: Removing unreachable block (ram,0x0001806a2583) */
/* WARNING: Removing unreachable block (ram,0x0001806a25cc) */
/* WARNING: Removing unreachable block (ram,0x0001806a2588) */
/* WARNING: Removing unreachable block (ram,0x0001806a2805) */
/* WARNING: Removing unreachable block (ram,0x0001806a2825) */
/* WARNING: Removing unreachable block (ram,0x0001806a284f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined (*) [16]
FUN_1806a21c0(undefined (**param_1) [16],ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  undefined (*pauVar5) [16];
  undefined *puVar6;
  ulonglong uVar7;
  undefined (*pauVar8) [16];
  undefined (*pauVar9) [16];
  uint uVar10;
  ulonglong uVar11;
  undefined *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined (*pauVar17) [16];
  bool bVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined (*local_90) [16];
  undefined (*local_60) [16];
  undefined (*local_58) [16];
  longlong local_50;
  
  auVar19 = _DAT_1806c50b0;
  pauVar9 = param_1[3];
  puVar12 = *pauVar9 + param_2;
  if (CARRY8(param_2,(ulonglong)pauVar9)) {
    pauVar9 = (undefined (*) [16])FUN_1803f5160(param_4);
    return pauVar9;
  }
  pauVar8 = param_1[1];
  puVar6 = *pauVar8 + 1;
  pauVar5 = (undefined (*) [16])
            (((ulonglong)puVar6 & 0xfffffffffffffff8) - ((ulonglong)puVar6 >> 3));
  if (pauVar8 < (undefined (*) [16])&DAT_00000008) {
    pauVar5 = pauVar8;
  }
  if ((undefined *)((ulonglong)pauVar5 >> 1) < puVar12) {
    puVar6 = *pauVar5 + 1;
    if (*pauVar5 + 1 <= puVar12) {
      puVar6 = puVar12;
    }
    FUN_180405900(&local_60,0x178,puVar6);
    if (local_60 == (undefined (*) [16])0x0) {
      return local_58;
    }
    if (pauVar9 == (undefined (*) [16])0x0) {
      local_90 = *param_1;
    }
    else {
      local_90 = *param_1;
      auVar19 = *local_90;
      uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar19[15] >> 7) << 0xf);
      lVar14 = 0;
      pauVar5 = local_90;
      pauVar17 = pauVar9;
      do {
        if ((short)uVar15 == 0) {
          do {
            auVar19 = pauVar5[1];
            pauVar5 = pauVar5 + 1;
            uVar15 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar19[15] >> 7) << 0xf) ^ 0xffff;
            lVar14 = lVar14 + 0x10;
          } while (uVar15 == 0);
        }
        uVar3 = 0;
        for (uVar13 = uVar15; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar7 = FUN_180332970(param_3,(longlong)local_90 +
                                      ((ulonglong)uVar3 + lVar14) * -0x178 + -0x178);
        uVar11 = uVar7 & (ulonglong)local_58;
        auVar19 = *(undefined (*) [16])(*local_60 + uVar11);
        uVar2 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar19[15] >> 7) << 0xf;
        uVar13 = (uint)uVar2;
        if (uVar2 == 0) {
          lVar16 = 0x10;
          do {
            uVar11 = uVar11 + lVar16 & (ulonglong)local_58;
            auVar19 = *(undefined (*) [16])(*local_60 + uVar11);
            lVar16 = lVar16 + 0x10;
            uVar13 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar19[15] >> 7) << 0xf);
          } while (uVar13 == 0);
        }
        uVar10 = 0;
        for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar11 = uVar10 + uVar11 & (ulonglong)local_58;
        if (-1 < (char)(*local_60)[uVar11]) {
          auVar19 = *local_60;
          uVar13 = 0;
          for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar19[15] >> 7) << 0xf); (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          uVar11 = (ulonglong)uVar13;
        }
        uVar15 = uVar15 - 1 & uVar15;
        pauVar17 = (undefined (*) [16])(pauVar17[-1] + 0xf);
        bVar4 = (byte)(uVar7 >> 0x39);
        (*local_60)[uVar11] = bVar4;
        local_60[1][uVar11 - 0x10 & (ulonglong)local_58] = bVar4;
        FUN_180691e40(~uVar11 * 0x178 + (longlong)local_60,
                      ~((ulonglong)uVar3 + lVar14) * 0x178 + (longlong)local_90,0x178);
      } while (pauVar17 != (undefined (*) [16])0x0);
    }
    *param_1 = local_60;
    param_1[1] = local_58;
    param_1[2] = (undefined (*) [16])(local_50 - (longlong)pauVar9);
    if (pauVar8 == (undefined (*) [16])0x0) {
      return (undefined (*) [16])0xffffffffffffffff;
    }
    uVar7 = (longlong)pauVar8 * 0x178 + 0x187U & 0xfffffffffffffff0;
    if (pauVar8[1] + uVar7 + 1 == (undefined *)0x0) {
      return (undefined (*) [16])0xffffffffffffffff;
    }
    thunk_FUN_1803e4c80((longlong)local_90 - uVar7,pauVar8[1] + uVar7 + 1,0x10);
    return (undefined (*) [16])0xffffffffffffffff;
  }
  if (puVar6 == (undefined *)0x0) {
    pauVar8 = (undefined (*) [16])0x0;
    goto LAB_1806a28c8;
  }
  pauVar9 = *param_1;
  uVar7 = (((ulonglong)puVar6 >> 4) + 1) - (ulonglong)(((ulonglong)puVar6 & 0xf) == 0);
  if (uVar7 == 1) {
    lVar14 = 0;
LAB_1806a2438:
    pcVar1 = *pauVar9 + lVar14;
    auVar19[0] = -(*pcVar1 < '\0');
    auVar19[1] = -(pcVar1[1] < '\0');
    auVar19[2] = -(pcVar1[2] < '\0');
    auVar19[3] = -(pcVar1[3] < '\0');
    auVar19[4] = -(pcVar1[4] < '\0');
    auVar19[5] = -(pcVar1[5] < '\0');
    auVar19[6] = -(pcVar1[6] < '\0');
    auVar19[7] = -(pcVar1[7] < '\0');
    auVar19[8] = -(pcVar1[8] < '\0');
    auVar19[9] = -(pcVar1[9] < '\0');
    auVar19[10] = -(pcVar1[10] < '\0');
    auVar19[11] = -(pcVar1[0xb] < '\0');
    auVar19[12] = -(pcVar1[0xc] < '\0');
    auVar19[13] = -(pcVar1[0xd] < '\0');
    auVar19[14] = -(pcVar1[0xe] < '\0');
    auVar19[15] = -(pcVar1[0xf] < '\0');
    *(undefined (*) [16])(*pauVar9 + lVar14) = auVar19 | _DAT_1806c50b0;
  }
  else {
    uVar11 = uVar7 & 0x1ffffffffffffffe;
    lVar14 = 0;
    do {
      pcVar1 = *pauVar9 + lVar14;
      auVar20[0] = -(*pcVar1 < '\0');
      auVar20[1] = -(pcVar1[1] < '\0');
      auVar20[2] = -(pcVar1[2] < '\0');
      auVar20[3] = -(pcVar1[3] < '\0');
      auVar20[4] = -(pcVar1[4] < '\0');
      auVar20[5] = -(pcVar1[5] < '\0');
      auVar20[6] = -(pcVar1[6] < '\0');
      auVar20[7] = -(pcVar1[7] < '\0');
      auVar20[8] = -(pcVar1[8] < '\0');
      auVar20[9] = -(pcVar1[9] < '\0');
      auVar20[10] = -(pcVar1[10] < '\0');
      auVar20[11] = -(pcVar1[0xb] < '\0');
      auVar20[12] = -(pcVar1[0xc] < '\0');
      auVar20[13] = -(pcVar1[0xd] < '\0');
      auVar20[14] = -(pcVar1[0xe] < '\0');
      auVar20[15] = -(pcVar1[0xf] < '\0');
      *(undefined (*) [16])(*pauVar9 + lVar14) = auVar20 | auVar19;
      pcVar1 = pauVar9[1] + lVar14;
      auVar21[0] = -(*pcVar1 < '\0');
      auVar21[1] = -(pcVar1[1] < '\0');
      auVar21[2] = -(pcVar1[2] < '\0');
      auVar21[3] = -(pcVar1[3] < '\0');
      auVar21[4] = -(pcVar1[4] < '\0');
      auVar21[5] = -(pcVar1[5] < '\0');
      auVar21[6] = -(pcVar1[6] < '\0');
      auVar21[7] = -(pcVar1[7] < '\0');
      auVar21[8] = -(pcVar1[8] < '\0');
      auVar21[9] = -(pcVar1[9] < '\0');
      auVar21[10] = -(pcVar1[10] < '\0');
      auVar21[11] = -(pcVar1[0xb] < '\0');
      auVar21[12] = -(pcVar1[0xc] < '\0');
      auVar21[13] = -(pcVar1[0xd] < '\0');
      auVar21[14] = -(pcVar1[0xe] < '\0');
      auVar21[15] = -(pcVar1[0xf] < '\0');
      *(undefined (*) [16])(pauVar9[1] + lVar14) = auVar21 | auVar19;
      lVar14 = lVar14 + 0x20;
      uVar11 = uVar11 - 2;
    } while (uVar11 != 0);
    if ((uVar7 & 1) != 0) goto LAB_1806a2438;
  }
  if (puVar6 < &DAT_00000010) {
    puVar12 = &DAT_00000010;
  }
  else {
    puVar12 = puVar6;
    puVar6 = &DAT_00000010;
  }
  FUN_180691e40(puVar12 + (longlong)pauVar9,pauVar9,puVar6);
  pauVar9 = (undefined (*) [16])0x0;
  do {
    bVar18 = pauVar9 != pauVar8;
    pauVar9 = (undefined (*) [16])(*pauVar9 + 1);
  } while (bVar18);
  pauVar5 = param_1[1];
  pauVar9 = param_1[3];
  pauVar8 = (undefined (*) [16])
            (((ulonglong)(*pauVar5 + 1) & 0xfffffffffffffff8) - ((ulonglong)(*pauVar5 + 1) >> 3));
  if (pauVar5 < (undefined (*) [16])&DAT_00000008) {
    pauVar8 = pauVar5;
  }
LAB_1806a28c8:
  param_1[2] = (undefined (*) [16])((longlong)pauVar8 - (longlong)pauVar9);
  return (undefined (*) [16])0xffffffffffffffff;
}


/* address=1806a2960 name=FUN_1806a2960 */

void FUN_1806a2960(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = param_2 + param_3;
  if ((ulonglong)(param_2 + param_3) <= uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = (ulonglong)(param_5 == 1) * 4 + 4;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,param_4,param_5);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a29f0 name=FUN_1806a29f0 */

ulonglong * FUN_1806a29f0(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint dwProcessId;
  undefined4 uVar4;
  undefined4 uVar5;
  BOOL BVar6;
  longlong lVar7;
  longlong lVar8;
  HANDLE hProcess;
  _FILETIME _Var9;
  ulonglong uVar10;
  int iVar11;
  undefined4 uVar12;
  HANDLE pvVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  _FILETIME _Var17;
  _FILETIME local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  HANDLE local_88;
  _FILETIME local_80;
  _FILETIME local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined local_4a;
  undefined local_49;
  undefined8 local_48;
  LPFILETIME lpCreationTime;
  
  local_48 = 0xfffffffffffffffe;
  dwProcessId = *(uint *)(param_2 + 8);
  local_a8 = (_FILETIME)(param_2 + 0x2c);
  uStack_a0 = param_2 + 0x234;
  local_98 = local_98 & 0xffffffffffff0000;
  local_70 = (HANDLE)0x0;
  uStack_68 = 1;
  local_60 = (HANDLE)0x0;
  FUN_18069aef0(&local_70,0,0x82,1,1);
  FUN_180406c00(&local_a8,&local_70);
  uVar14 = uStack_68;
  local_78 = (_FILETIME)local_70;
  lVar8 = (longlong)local_60;
  do {
    while( true ) {
      if (lVar8 == 0) goto LAB_1806a2b1f;
      lVar8 = uStack_68 + lVar8;
      bVar1 = *(byte *)(lVar8 + -1);
      if (-1 < (char)bVar1) break;
      bVar2 = *(byte *)(lVar8 + -2);
      if ((char)bVar2 < -0x40) {
        bVar3 = *(byte *)(lVar8 + -3);
        if ((char)bVar3 < -0x40) {
          lVar7 = lVar8 + -4;
          uVar15 = bVar3 & 0x3f | (*(byte *)(lVar8 + -4) & 7) << 6;
        }
        else {
          lVar7 = lVar8 + -3;
          uVar15 = bVar3 & 0xf;
        }
        uVar15 = bVar2 & 0x3f | uVar15 << 6;
      }
      else {
        lVar7 = lVar8 + -2;
        uVar15 = bVar2 & 0x1f;
      }
      lVar8 = lVar7 - uStack_68;
      if (((uint)(bVar1 & 0x3f) | uVar15 << 6) != 0) goto LAB_1806a2b1f;
    }
    lVar8 = (lVar8 + -1) - uStack_68;
  } while (bVar1 == 0);
LAB_1806a2b1f:
  FUN_1803f6030(&local_70);
  local_88 = local_70;
  local_90 = uStack_68;
  uVar4 = (undefined4)local_60;
  uVar5 = local_60._4_4_;
  pvVar13 = (HANDLE)local_78;
  if (local_78 != (_FILETIME)0x0) {
    thunk_FUN_1803e4c80(uVar14);
  }
  uVar15 = *(uint *)(param_2 + 0x20);
  if (dwProcessId == 0) {
    _Var9.dwLowDateTime = 0;
    _Var9.dwHighDateTime = 0;
    uVar14 = 0;
    uVar16 = 0;
  }
  else {
    iVar11 = 0;
    hProcess = OpenProcess(0x410,0,dwProcessId);
    if (0xfffffffffffffffd < (longlong)hProcess - 1U) {
      local_49 = 0;
      hProcess = (HANDLE)FUN_180406670();
      uStack_68 = CONCAT44(uStack_68._4_4_,iVar11);
      local_70 = hProcess;
      if (iVar11 != 0) {
        if (hProcess != (HANDLE)0x0) {
          local_49 = 0;
          FUN_180406ae0(&local_70);
        }
        hProcess = (HANDLE)0x0;
      }
    }
    if (0xfffffffffffffffd < (longlong)hProcess - 1U) {
      pvVar13 = (HANDLE)0x0;
      hProcess = OpenProcess(0x1000,0,dwProcessId);
      if (0xfffffffffffffffd < (longlong)hProcess - 1U) {
        local_49 = 0;
        hProcess = (HANDLE)FUN_180406670();
        uStack_68 = CONCAT44(uStack_68._4_4_,(int)pvVar13);
        local_70 = hProcess;
        if ((int)pvVar13 != 0) {
          if (hProcess != (HANDLE)0x0) {
            local_49 = 0;
            FUN_180406ae0(&local_70);
          }
          hProcess = (HANDLE)0x0;
        }
      }
      _Var9.dwLowDateTime = 0;
      _Var9.dwHighDateTime = 0;
      uVar14 = 0;
      uVar16 = 0;
      if (0xfffffffffffffffd < (longlong)hProcess - 1U) goto LAB_1806a2d0b;
    }
    local_80.dwLowDateTime = 0;
    local_80.dwHighDateTime = 0;
    local_a8.dwLowDateTime = 0;
    local_a8.dwHighDateTime = 0;
    lpCreationTime = &local_80;
    BVar6 = GetProcessTimes(hProcess,lpCreationTime,&local_a8,&local_a8,&local_a8);
    iVar11 = (int)lpCreationTime;
    _Var17 = local_80;
    if (BVar6 == 0) {
      local_4a = 1;
      local_70 = (HANDLE)FUN_180406670();
      _Var17 = local_80;
      uStack_68 = CONCAT44(uStack_68._4_4_,iVar11);
      if ((iVar11 != 0) && (local_70 != (HANDLE)0x0)) {
        local_4a = 1;
        FUN_180406ae0(&local_70);
      }
    }
    local_70 = (HANDLE)0x1;
    uStack_68 = 1;
    local_60 = hProcess;
    FUN_180339d20();
    _Var9 = (_FILETIME)thunk_FUN_1803e4c20(0x18,8);
    if (_Var9 == (_FILETIME)0x0) {
      FUN_1806a1521(8,0x18);
      do {
        invalidInstructionException();
      } while( true );
    }
    pvVar13 = (HANDLE)((ulonglong)_Var17 / 10000000);
    uVar16 = (longlong)pvVar13 - 0x2b6109100;
    uVar14 = 0;
    if (uVar16 <= param_3) {
      uVar14 = uVar16;
    }
    uVar14 = param_3 - uVar14;
    *(HANDLE *)((longlong)_Var9 + 0x10) = local_60;
    *(undefined4 *)_Var9 = (undefined4)local_70;
    *(undefined4 *)((longlong)_Var9 + 4) = local_70._4_4_;
    *(undefined4 *)((longlong)_Var9 + 8) = (undefined4)uStack_68;
    *(undefined4 *)((longlong)_Var9 + 0xc) = uStack_68._4_4_;
  }
LAB_1806a2d0b:
  uVar12 = SUB84(pvVar13,0);
  local_a8.dwLowDateTime = 0;
  local_a8.dwHighDateTime = 0;
  uStack_a0 = 8;
  local_98 = 0;
  local_70 = (HANDLE)0x0;
  uStack_68 = 8;
  local_60 = (HANDLE)0x0;
  local_80 = _Var9;
  local_78 = _Var9;
  uVar10 = FUN_1803e5120();
  *(undefined (*) [16])(param_1 + 0x1e) = ZEXT816(0);
  *(undefined (*) [16])(param_1 + 0x1c) = ZEXT816(0);
  param_1[2] = (ulonglong)local_88;
  param_1[3] = local_90;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 5) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_54;
  *(DWORD *)(param_1 + 6) = local_a8.dwLowDateTime;
  *(DWORD *)((longlong)param_1 + 0x34) = local_a8.dwHighDateTime;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_a0._4_4_;
  param_1[8] = local_98;
  param_1[0xc] = 0xffffffffffffffff;
  param_1[0x22] = (ulonglong)dwProcessId;
  param_1[0x10] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 9) = (undefined4)local_70;
  *(undefined4 *)((longlong)param_1 + 0x4c) = local_70._4_4_;
  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_68._4_4_;
  param_1[0xb] = (ulonglong)local_60;
  param_1[0x13] = 0xffffffffffffffff;
  param_1[0x17] = 0xffffffffffffffff;
  *(undefined (*) [16])(param_1 + 0x23) = ZEXT816(0);
  *param_1 = (ulonglong)(uVar15 != 0);
  param_1[1] = (ulonglong)uVar15;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  *(_FILETIME *)(param_1 + 0x25) = local_78;
  param_1[0x20] = uVar10;
  *(undefined4 *)(param_1 + 0x21) = uVar12;
  param_1[0x26] = uVar16;
  param_1[0x27] = uVar14;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined *)((longlong)param_1 + 0x16c) = 1;
  *(undefined (*) [16])(param_1 + 0x28) = ZEXT816(0);
  *(undefined (*) [16])(param_1 + 0x2a) = ZEXT816(0);
  param_1[0x2c] = 0;
  *(undefined *)((longlong)param_1 + 0x16d) = 1;
  return param_1;
}


/* address=1806a307e name=FUN_1806a307e */

void FUN_1806a307e(int *param_1)

{
  undefined local_19;
  int **local_18;
  int *local_10;
  undefined *local_8;
  
  if (*param_1 != 0) {
    local_10 = param_1 + 1;
    local_18 = &local_10;
    local_8 = &local_19;
    FUN_1806a0a20(param_1,CONCAT71((int7)((ulonglong)local_18 >> 8),1),&local_18,&DAT_1806e9970,
                  &PTR_s__rustc_48a229ceaefd4985c50990b14_1806e9958);
  }
  return;
}


/* address=1806a30c6 name=FUN_1806a30c6 */

void FUN_1806a30c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_3;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806e9998,&local_8,&DAT_1806e9998,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a3110 name=FUN_1806a3110 */

undefined8 FUN_1806a3110(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint6 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50 [2];
  undefined8 local_48;
  int local_40 [2];
  undefined8 local_38;
  int local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  uVar3 = *(ulonglong *)(param_1 + 0x20);
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  if (uVar3 <= uVar4) {
LAB_1806a33e2:
    local_68 = 10;
    uVar7 = FUN_180692c40(param_1,&local_68);
    goto LAB_1806a33f8;
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  bVar1 = *(byte *)(lVar5 + uVar4);
  if (0x20 < bVar1 - 0x5b) {
    if (bVar1 != 0x22) {
      if (bVar1 != 0x2d) goto switchD_1806a3151_caseD_5c;
      *(ulonglong *)(param_1 + 0x28) = uVar4 + 1;
      FUN_18045f200(local_50,param_1,0);
      if (local_50[0] == -1) {
        return local_48;
      }
      piVar8 = local_50;
      goto LAB_1806a33a3;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar4 + 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_1803d4780(local_30,(longlong *)(param_1 + 0x18));
    if (local_30[0] == 2) {
      return local_28;
    }
    local_60 = local_28;
    local_58 = local_20;
    local_68 = CONCAT71(local_68._1_7_,5);
    goto LAB_1806a3324;
  }
  uVar6 = local_68._2_6_;
  switch((uint)bVar1) {
  case 0x5b:
    local_68 = CONCAT71(local_68._1_7_,10);
    goto LAB_1806a3324;
  default:
switchD_1806a3151_caseD_5c:
    if (9 < (byte)(bVar1 - 0x30)) goto LAB_1806a33e2;
    FUN_18045f200(local_40,param_1,1);
    if (local_40[0] == -1) {
      return local_38;
    }
    piVar8 = local_40;
LAB_1806a33a3:
    uVar7 = FUN_1803d50a0(piVar8,param_2,param_3);
    goto LAB_1806a33f8;
  case 0x66:
    *(ulonglong *)(param_1 + 0x28) = uVar4 + 1;
    if (uVar4 + 1 < uVar3) {
      cVar2 = *(char *)(lVar5 + 1 + uVar4);
      *(ulonglong *)(param_1 + 0x28) = uVar4 + 2;
      if (cVar2 == 'a') {
        if (uVar3 <= uVar4 + 2) break;
        cVar2 = *(char *)(lVar5 + 2 + uVar4);
        *(ulonglong *)(param_1 + 0x28) = uVar4 + 3;
        if (cVar2 == 'l') {
          if (uVar3 <= uVar4 + 3) break;
          cVar2 = *(char *)(lVar5 + 3 + uVar4);
          *(ulonglong *)(param_1 + 0x28) = uVar4 + 4;
          if (cVar2 == 's') {
            if (uVar3 <= uVar4 + 4) break;
            cVar2 = *(char *)(lVar5 + 4 + uVar4);
            *(ulonglong *)(param_1 + 0x28) = uVar4 + 5;
            if (cVar2 == 'e') {
              local_68 = (ulonglong)uVar6 << 0x10;
              goto LAB_1806a3324;
            }
          }
        }
      }
LAB_1806a337f:
      local_68 = 9;
      goto LAB_1806a3337;
    }
    break;
  case 0x6e:
    *(ulonglong *)(param_1 + 0x28) = uVar4 + 1;
    if (uVar4 + 1 < uVar3) {
      cVar2 = *(char *)(lVar5 + 1 + uVar4);
      *(ulonglong *)(param_1 + 0x28) = uVar4 + 2;
      if (cVar2 == 'u') {
        if (uVar3 <= uVar4 + 2) break;
        cVar2 = *(char *)(lVar5 + 2 + uVar4);
        *(ulonglong *)(param_1 + 0x28) = uVar4 + 3;
        if (cVar2 == 'l') {
          if (uVar3 <= uVar4 + 3) break;
          cVar2 = *(char *)(lVar5 + 3 + uVar4);
          *(ulonglong *)(param_1 + 0x28) = uVar4 + 4;
          if (cVar2 == 'l') {
            local_68 = CONCAT71(local_68._1_7_,7);
            goto LAB_1806a3324;
          }
        }
      }
      goto LAB_1806a337f;
    }
    break;
  case 0x74:
    *(ulonglong *)(param_1 + 0x28) = uVar4 + 1;
    if (uVar4 + 1 < uVar3) {
      cVar2 = *(char *)(lVar5 + 1 + uVar4);
      *(ulonglong *)(param_1 + 0x28) = uVar4 + 2;
      if (cVar2 == 'r') {
        if (uVar3 <= uVar4 + 2) break;
        cVar2 = *(char *)(lVar5 + 2 + uVar4);
        *(ulonglong *)(param_1 + 0x28) = uVar4 + 3;
        if (cVar2 == 'u') {
          if (uVar3 <= uVar4 + 3) break;
          cVar2 = *(char *)(lVar5 + 3 + uVar4);
          *(ulonglong *)(param_1 + 0x28) = uVar4 + 4;
          if (cVar2 == 'e') {
            local_68 = CONCAT62(uVar6,0x100);
            goto LAB_1806a3324;
          }
        }
      }
      goto LAB_1806a337f;
    }
    break;
  case 0x7b:
    local_68 = CONCAT71(local_68._1_7_,0xb);
LAB_1806a3324:
    uVar7 = FUN_18069f8b0(&local_68,param_2,param_3);
LAB_1806a33f8:
    uVar7 = FUN_1806979e0(uVar7,param_1);
    return uVar7;
  }
  local_68 = 5;
LAB_1806a3337:
  uVar7 = FUN_180692fc0(param_1,&local_68);
  return uVar7;
}


/* address=1806a3910 name=FUN_1806a3910 */

undefined8 FUN_1806a3910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined local_48 [24];
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1806a39e0(local_48);
  uVar1 = FUN_18069f8b0(local_48,param_2,param_3);
  FUN_180468f60(local_30);
  return uVar1;
}


/* address=1806a39a0 name=FUN_1806a39a0 */

void FUN_1806a39a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined local_30 [24];
  
  FUN_1806a39e0(local_30,param_1);
  FUN_18069f8b0(local_30,param_2,param_3);
  return;
}


/* address=1806a39e0 name=FUN_1806a39e0 */

void FUN_1806a39e0(undefined8 param_1,byte *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001806a39f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806f0e28 + *(int *)(&DAT_1806f0e28 + (ulonglong)*param_2 * 4)))();
  return;
}


/* address=1806a3af0 name=FUN_1806a3af0 */

longlong ** FUN_1806a3af0(longlong **param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_10;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      return param_1;
    }
    return (longlong **)0x0;
  }
  if (param_2 != (undefined8 *)0x0) {
    iVar2 = *(int *)param_2;
    *param_2 = 0;
    if (iVar2 == 1) {
      *param_1 = (longlong *)param_2[1];
      *(undefined *)(param_1 + 1) = 1;
      goto LAB_1806a3b2d;
    }
  }
  plVar3 = (longlong *)FUN_1806a3f20();
  cVar1 = *(char *)(param_1 + 1);
  local_10 = *param_1;
  *param_1 = plVar3;
  *(undefined *)(param_1 + 1) = 1;
  if (cVar1 == '\x01') {
    if (local_10 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    *local_10 = *local_10 + -1;
    UNLOCK();
    if (*local_10 == 0) {
      FUN_18039b650(&local_10);
      return param_1;
    }
    return param_1;
  }
  if (cVar1 == '\x02') {
    FUN_1806a19d0("internal error: entered unreachable code/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\sys\\thread_local\\native\\lazy.rs"
                  ,0x28,&DAT_1806f10b0);
    do {
      invalidInstructionException();
    } while( true );
  }
LAB_1806a3b2d:
  FUN_1803ef1b0(param_1,&LAB_18047a6c0);
  return param_1;
}


/* address=1806a3bb0 name=FUN_1806a3bb0 */

undefined (*) [16] FUN_1806a3bb0(undefined (*param_1) [16],undefined8 *param_2)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[1][0] != '\0') {
    if (param_1[1][0] != '\x01') {
      param_1 = (undefined (*) [16])0x0;
    }
    return param_1;
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 2);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
    bVar1 = *(byte *)param_2;
    *param_2 = 0;
    if ((bVar1 & 1) != 0) goto LAB_1806a3be5;
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
LAB_1806a3be5:
  auVar2._4_4_ = uVar4;
  auVar2._0_4_ = uVar3;
  auVar2._8_4_ = uVar5;
  auVar2._12_4_ = uVar6;
  *param_1 = auVar2;
  param_1[1][0] = 1;
  FUN_1803ef1b0(param_1,&LAB_18047a720);
  return param_1;
}


/* address=1806a3c10 name=FUN_1806a3c10 */

void FUN_1806a3c10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *local_18;
  
  if (*(char *)(param_1 + 1) != '\0') {
    return;
  }
  if (param_2 != (longlong *)0x0) {
    lVar1 = *param_2;
    *param_2 = 0;
    if (lVar1 != 0) goto LAB_1806a3c57;
  }
  local_18 = (longlong *)FUN_1803ec460();
  lVar1 = local_18[2];
  LOCK();
  *local_18 = *local_18 + -1;
  UNLOCK();
  if (*local_18 == 0) {
    FUN_1803e9430(&local_18);
  }
LAB_1806a3c57:
  *param_1 = lVar1;
  *(undefined *)(param_1 + 1) = 1;
  return;
}


/* address=1806a3c70 name=FUN_1806a3c70 */

void FUN_1806a3c70(undefined8 param_1,undefined param_2)

{
  undefined local_41;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined local_20 [24];
  
  local_40 = &local_41;
  local_38 = &LAB_1803e0170;
  local_28 = &DAT_180335830;
  local_41 = param_2;
  local_30 = param_1;
  FUN_1803f6380(local_20,&DAT_1806f1440,&local_40);
  FUN_180697d00(local_20);
  return;
}


/* address=1806a3cd0 name=FUN_1806a3cd0 */

longlong FUN_1806a3cd0(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1;
  if (uVar2 - param_1[2] < param_3) {
    lVar1 = FUN_18047c600(param_1);
    if (lVar1 != 0) {
      return lVar1;
    }
    uVar2 = *param_1;
  }
  if (param_3 < uVar2) {
    uVar2 = param_1[2];
    FUN_180691e40(param_1[1] + uVar2,param_2,param_3);
    param_1[2] = uVar2 + param_3;
    lVar1 = 0;
  }
  else {
    *(undefined *)(param_1 + 3) = 1;
    lVar1 = FUN_1804806b0(param_1 + 4,param_2,param_3);
    *(undefined *)(param_1 + 3) = 0;
  }
  return lVar1;
}


/* address=1806a3d50 name=FUN_1806a3d50 */

void FUN_1806a3d50(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *param_1;
  FUN_1806a3de0();
  uVar1 = param_1[2];
  if ((ulonglong)(lVar3 - param_1[3]) < uVar1) {
    uVar2 = lVar3 - uVar1;
    uVar4 = param_1[3] - uVar2;
    if (uVar4 <= (ulonglong)(*param_1 - lVar3) && uVar4 < uVar2) {
      FUN_180691e40(param_1[1] + lVar3 * 8,param_1[1],uVar4 * 8);
      return;
    }
    lVar3 = *param_1 - uVar2;
    FUN_180691e40(param_1[1] + lVar3 * 8,param_1[1] + uVar1 * 8,uVar2 * 8);
    param_1[2] = lVar3;
  }
  return;
}


/* address=1806a3de0 name=FUN_1806a3de0 */

void FUN_1806a3de0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1806a3eb0(param_1,*param_1);
  if (lVar1 == -1) {
    return;
  }
  FUN_1806a153b(lVar1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a3e10 name=FUN_1806a3e10 */

void FUN_1806a3e10(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = param_4 * 8;
  uVar2 = 1;
  if (uVar3 < 0x7ffffffffffffff9 && param_4 >> 0x3d == 0) {
    if (param_2 == 0) {
      FUN_180339d20();
      lVar1 = thunk_FUN_1803e4c20(uVar3,8);
    }
    else {
      lVar1 = thunk_FUN_1803e4cc0(param_3,param_2 << 3,8,uVar3);
    }
    if (lVar1 == 0) {
      param_1[1] = 8;
      lVar1 = 0x10;
    }
    else {
      param_1[1] = lVar1;
      lVar1 = 0x10;
      uVar2 = 0;
    }
  }
  else {
    lVar1 = 8;
    uVar3 = 0;
  }
  *(ulonglong *)((longlong)param_1 + lVar1) = uVar3;
  *param_1 = uVar2;
  return;
}


/* address=1806a3eb0 name=FUN_1806a3eb0 */

ulonglong FUN_1806a3eb0(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char local_28 [8];
  ulonglong local_20;
  
  uVar2 = *param_1 * 2;
  uVar1 = param_2 + 1U;
  if (param_2 + 1U <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a3e10(local_28,*param_1,param_1[1],uVar2);
  if (local_28[0] != '\0') {
    return local_20;
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return 0xffffffffffffffff;
}


/* address=1806a3f20 name=FUN_1806a3f20 */

undefined4 * FUN_1806a3f20(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = FUN_1803ec460();
  plVar3 = (longlong *)FUN_1803ec460();
  uVar2 = local_20;
  lVar1 = plVar3[2];
  local_28 = plVar3;
  FUN_180339d20();
  puVar4 = (undefined4 *)thunk_FUN_1803e4c20(0x30,8);
  if (puVar4 != (undefined4 *)0x0) {
    local_48 = (undefined4)uVar2;
    uStack_44 = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_40 = (undefined4)lVar1;
    uStack_3c = (undefined4)((ulonglong)lVar1 >> 0x20);
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[4] = local_48;
    puVar4[5] = uStack_44;
    puVar4[6] = uStack_40;
    puVar4[7] = uStack_3c;
    *puVar4 = 1;
    puVar4[1] = 0;
    puVar4[2] = 1;
    puVar4[3] = 0;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1803e9430(&local_28);
    }
    return puVar4;
  }
  FUN_1806a1521(8,0x30);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a4070 name=FUN_1806a4070 */

longlong ** FUN_1806a4070(longlong **param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_10;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      return param_1;
    }
    return (longlong **)0x0;
  }
  if (param_2 != (undefined8 *)0x0) {
    iVar2 = *(int *)param_2;
    *param_2 = 0;
    if (iVar2 == 1) {
      *param_1 = (longlong *)param_2[1];
      *(undefined *)(param_1 + 1) = 1;
      goto LAB_1806a40ad;
    }
  }
  plVar3 = (longlong *)FUN_1806a3f20();
  cVar1 = *(char *)(param_1 + 1);
  local_10 = *param_1;
  *param_1 = plVar3;
  *(undefined *)(param_1 + 1) = 1;
  if (cVar1 == '\x01') {
    if (local_10 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    *local_10 = *local_10 + -1;
    UNLOCK();
    if (*local_10 == 0) {
      FUN_18039b650(&local_10);
      return param_1;
    }
    return param_1;
  }
  if (cVar1 == '\x02') {
    FUN_1806a19d0("internal error: entered unreachable code/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\sys\\thread_local\\native\\lazy.rs"
                  ,0x28,&DAT_1806f6b08);
    do {
      invalidInstructionException();
    } while( true );
  }
LAB_1806a40ad:
  FUN_1803ef1b0(param_1,&LAB_180482520);
  return param_1;
}


/* address=1806a4130 name=FUN_1806a4130 */

longlong FUN_1806a4130(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = *(longlong *)(param_2 + 8);
  lVar11 = *(longlong *)(param_1 + lVar13 * 8);
  if (lVar11 == 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar10 = FUN_1804ad8e0(0,lVar2);
    plVar12 = (longlong *)(param_1 + lVar13 * 8);
    LOCK();
    lVar13 = *plVar12;
    bVar14 = lVar13 == 0;
    if (bVar14) {
      *plVar12 = lVar10;
      lVar13 = 0;
    }
    UNLOCK();
    lVar11 = lVar10;
    if ((!bVar14) && (lVar11 = lVar13, lVar2 != 0)) {
      plVar12 = (longlong *)(lVar10 + 8);
      lVar13 = lVar2;
      do {
        if ((*(char *)(plVar12 + 3) == '\x01') && (*plVar12 != 0)) {
          thunk_FUN_1803e4c80(plVar12[1],*plVar12 << 4,8);
        }
        plVar12 = plVar12 + 5;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      thunk_FUN_1803e4c80(lVar10,lVar2 * 0x28,8);
    }
  }
  lVar13 = *(longlong *)(param_2 + 0x18);
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  puVar1 = (undefined4 *)(lVar11 + 0x10 + lVar13 * 0x28);
  *puVar1 = param_3[4];
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1 = (undefined4 *)(lVar11 + lVar13 * 0x28);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined *)(lVar11 + 0x20 + lVar13 * 0x28) = 1;
  LOCK();
  *(longlong *)(param_1 + 0x1f8) = *(longlong *)(param_1 + 0x1f8) + 1;
  UNLOCK();
  return lVar11 + lVar13 * 0x28;
}


/* address=1806a4280 name=FUN_1806a4280 */

void FUN_1806a4280(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x60);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a42f0 name=FUN_1806a42f0 */

void FUN_1806a42f0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,8,0x10);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a43e0 name=FUN_1806a43e0 */

/* WARNING: Removing unreachable block (ram,0x0001806a4855) */
/* WARNING: Removing unreachable block (ram,0x0001806a4720) */
/* WARNING: Removing unreachable block (ram,0x0001806a47f1) */
/* WARNING: Removing unreachable block (ram,0x0001806a47fa) */
/* WARNING: Removing unreachable block (ram,0x0001806a4816) */
/* WARNING: Removing unreachable block (ram,0x0001806a4744) */
/* WARNING: Removing unreachable block (ram,0x0001806a4818) */
/* WARNING: Removing unreachable block (ram,0x0001806a4820) */
/* WARNING: Removing unreachable block (ram,0x0001806a475a) */
/* WARNING: Removing unreachable block (ram,0x0001806a4830) */
/* WARNING: Removing unreachable block (ram,0x0001806a4776) */
/* WARNING: Removing unreachable block (ram,0x0001806a4871) */
/* WARNING: Removing unreachable block (ram,0x0001806a47ad) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1806a43e0(undefined (**param_1) [16],ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  undefined *puVar11;
  undefined (*pauVar12) [16];
  undefined (*pauVar13) [16];
  undefined *puVar14;
  undefined (*pauVar15) [16];
  undefined (*pauVar16) [16];
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined (*pauVar20) [16];
  undefined (*pauVar21) [16];
  uint uVar22;
  ulonglong uVar23;
  byte bVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  longlong local_48;
  
  auVar28 = _DAT_1806c50b0;
  pauVar12 = param_1[3];
  puVar14 = *pauVar12 + param_2;
  if (CARRY8(param_2,(ulonglong)pauVar12)) goto LAB_1806a4501;
  pauVar9 = param_1[1];
  puVar11 = *pauVar9 + 1;
  pauVar10 = (undefined (*) [16])
             (((ulonglong)puVar11 & 0xfffffffffffffff8) - ((ulonglong)puVar11 >> 3));
  if (pauVar9 < (undefined (*) [16])&DAT_00000008) {
    pauVar10 = pauVar9;
  }
  if ((undefined *)((ulonglong)pauVar10 >> 1) < puVar14) {
    puVar11 = *pauVar10 + 1;
    if (*pauVar10 + 1 <= puVar14) {
      puVar11 = puVar14;
    }
    if (puVar11 < (undefined *)0xf) {
      uVar23 = 4;
      if ((undefined *)0x3 < puVar11) {
        uVar23 = (ulonglong)((uint)puVar11 & 8) + 8;
      }
LAB_1806a44d9:
      uVar19 = uVar23 * 0x20;
      uVar25 = uVar23 + 0x10 + uVar19;
      if ((byte)(0x7ffffffffffffff0 < uVar25 | CARRY8(uVar23 + 0x10,uVar19)) == 0) {
        FUN_180339d20();
        lVar8 = thunk_FUN_1803e4c20(uVar25,0x10);
        if (lVar8 == 0) {
          uVar7 = FUN_1803f5190((char)param_4,0x10,uVar25);
          return uVar7;
        }
        pauVar16 = (undefined (*) [16])(lVar8 + uVar19);
        FUN_1806924e0(pauVar16,0xff);
        pauVar10 = (undefined (*) [16])(uVar23 - 1);
        pauVar15 = (undefined (*) [16])((uVar23 & 0xfffffffffffffff8) - (uVar23 >> 3));
        if (uVar23 < 9) {
          pauVar15 = pauVar10;
        }
        if (pauVar12 == (undefined (*) [16])0x0) {
          pauVar13 = *param_1;
        }
        else {
          pauVar13 = *param_1;
          auVar28 = *pauVar13;
          uVar22 = ~(uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar28[15] >> 7) << 0xf);
          lVar8 = 0;
          pauVar20 = pauVar13;
          pauVar21 = pauVar12;
          do {
            if ((short)uVar22 == 0) {
              do {
                auVar28 = pauVar20[1];
                pauVar20 = pauVar20 + 1;
                uVar22 = (ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar28[15] >> 7) << 0xf) ^ 0xffff;
                lVar8 = lVar8 + 0x10;
              } while (uVar22 == 0);
            }
            uVar17 = 0;
            for (uVar18 = uVar22; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
              uVar17 = uVar17 + 1;
            }
            lVar26 = (ulonglong)uVar17 + lVar8;
            uVar23 = *(ulonglong *)(pauVar13[lVar26 * -2 + -2] + 8) & (ulonglong)pauVar10;
            auVar28 = *(undefined (*) [16])(*pauVar16 + uVar23);
            uVar2 = (ushort)(SUB161(auVar28 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar28[15] >> 7) << 0xf;
            uVar17 = (uint)uVar2;
            if (uVar2 == 0) {
              local_48 = 0x10;
              do {
                uVar23 = uVar23 + local_48 & (ulonglong)pauVar10;
                auVar28 = *(undefined (*) [16])(*pauVar16 + uVar23);
                local_48 = local_48 + 0x10;
                uVar17 = (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar28[15] >> 7) << 0xf);
              } while (uVar17 == 0);
            }
            uVar18 = 0;
            for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
              uVar18 = uVar18 + 1;
            }
            uVar23 = uVar18 + uVar23 & (ulonglong)pauVar10;
            if (-1 < (char)(*pauVar16)[uVar23]) {
              auVar28 = *pauVar16;
              uVar17 = 0;
              for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar28[15] >> 7) << 0xf);
                  (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
                uVar17 = uVar17 + 1;
              }
              uVar23 = (ulonglong)uVar17;
            }
            uVar22 = uVar22 - 1 & uVar22;
            pauVar21 = (undefined (*) [16])(pauVar21[-1] + 0xf);
            bVar24 = (byte)(*(ulonglong *)(pauVar13[lVar26 * -2 + -2] + 8) >> 0x39);
            (*pauVar16)[uVar23] = bVar24;
            pauVar16[1][uVar23 - 0x10 & (ulonglong)pauVar10] = bVar24;
            uVar7 = *(undefined8 *)(pauVar13[lVar26 * -2 + -2] + 8);
            uVar3 = *(undefined4 *)pauVar13[lVar26 * -2 + -1];
            uVar4 = *(undefined4 *)(pauVar13[lVar26 * -2 + -1] + 4);
            uVar5 = *(undefined4 *)(pauVar13[lVar26 * -2 + -1] + 8);
            uVar6 = *(undefined4 *)(pauVar13[lVar26 * -2 + -1] + 0xc);
            *(undefined8 *)pauVar16[uVar23 * -2 + -2] = *(undefined8 *)pauVar13[lVar26 * -2 + -2];
            *(undefined8 *)(pauVar16[uVar23 * -2 + -2] + 8) = uVar7;
            *(undefined4 *)pauVar16[uVar23 * -2 + -1] = uVar3;
            *(undefined4 *)(pauVar16[uVar23 * -2 + -1] + 4) = uVar4;
            *(undefined4 *)(pauVar16[uVar23 * -2 + -1] + 8) = uVar5;
            *(undefined4 *)(pauVar16[uVar23 * -2 + -1] + 0xc) = uVar6;
          } while (pauVar21 != (undefined (*) [16])0x0);
        }
        *param_1 = pauVar16;
        param_1[1] = pauVar10;
        param_1[2] = (undefined (*) [16])((longlong)pauVar15 - (longlong)pauVar12);
        if (pauVar9 == (undefined (*) [16])0x0) {
          return 0xffffffffffffffff;
        }
        if (pauVar9[(longlong)pauVar9 * 2 + 3] + 1 == (undefined *)0x0) {
          return 0xffffffffffffffff;
        }
        thunk_FUN_1803e4c80((longlong)pauVar13 - ((longlong)pauVar9 * 0x20 + 0x20),
                            pauVar9[(longlong)pauVar9 * 2 + 3] + 1,0x10);
        goto LAB_1806a48c2;
      }
    }
    else if ((ulonglong)puVar11 >> 0x3d == 0) {
      uVar23 = (ulonglong)((longlong)puVar11 * 8) / 7;
      uVar23 = (((longlong)puVar11 * 8 - uVar23 >> 1) + uVar23 >> 2) - 1;
      lVar8 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar23 = 0xffffffffffffffff >> (~(byte)lVar8 & 0x3f);
      if (uVar23 < 0x7ffffffffffffff) {
        uVar23 = uVar23 + 1;
        goto LAB_1806a44d9;
      }
    }
LAB_1806a4501:
    uVar7 = FUN_1803f5160(param_4);
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      pauVar9 = (undefined (*) [16])0x0;
    }
    else {
      pauVar12 = *param_1;
      uVar23 = (((ulonglong)puVar11 >> 4) + 1) - (ulonglong)(((ulonglong)puVar11 & 0xf) == 0);
      if (uVar23 == 1) {
        lVar8 = 0;
LAB_1806a46d4:
        pcVar1 = *pauVar12 + lVar8;
        auVar28[0] = -(*pcVar1 < '\0');
        auVar28[1] = -(pcVar1[1] < '\0');
        auVar28[2] = -(pcVar1[2] < '\0');
        auVar28[3] = -(pcVar1[3] < '\0');
        auVar28[4] = -(pcVar1[4] < '\0');
        auVar28[5] = -(pcVar1[5] < '\0');
        auVar28[6] = -(pcVar1[6] < '\0');
        auVar28[7] = -(pcVar1[7] < '\0');
        auVar28[8] = -(pcVar1[8] < '\0');
        auVar28[9] = -(pcVar1[9] < '\0');
        auVar28[10] = -(pcVar1[10] < '\0');
        auVar28[11] = -(pcVar1[0xb] < '\0');
        auVar28[12] = -(pcVar1[0xc] < '\0');
        auVar28[13] = -(pcVar1[0xd] < '\0');
        auVar28[14] = -(pcVar1[0xe] < '\0');
        auVar28[15] = -(pcVar1[0xf] < '\0');
        *(undefined (*) [16])(*pauVar12 + lVar8) = auVar28 | _DAT_1806c50b0;
      }
      else {
        uVar19 = uVar23 & 0x1ffffffffffffffe;
        lVar8 = 0;
        do {
          pcVar1 = *pauVar12 + lVar8;
          auVar29[0] = -(*pcVar1 < '\0');
          auVar29[1] = -(pcVar1[1] < '\0');
          auVar29[2] = -(pcVar1[2] < '\0');
          auVar29[3] = -(pcVar1[3] < '\0');
          auVar29[4] = -(pcVar1[4] < '\0');
          auVar29[5] = -(pcVar1[5] < '\0');
          auVar29[6] = -(pcVar1[6] < '\0');
          auVar29[7] = -(pcVar1[7] < '\0');
          auVar29[8] = -(pcVar1[8] < '\0');
          auVar29[9] = -(pcVar1[9] < '\0');
          auVar29[10] = -(pcVar1[10] < '\0');
          auVar29[11] = -(pcVar1[0xb] < '\0');
          auVar29[12] = -(pcVar1[0xc] < '\0');
          auVar29[13] = -(pcVar1[0xd] < '\0');
          auVar29[14] = -(pcVar1[0xe] < '\0');
          auVar29[15] = -(pcVar1[0xf] < '\0');
          *(undefined (*) [16])(*pauVar12 + lVar8) = auVar29 | auVar28;
          pcVar1 = pauVar12[1] + lVar8;
          auVar30[0] = -(*pcVar1 < '\0');
          auVar30[1] = -(pcVar1[1] < '\0');
          auVar30[2] = -(pcVar1[2] < '\0');
          auVar30[3] = -(pcVar1[3] < '\0');
          auVar30[4] = -(pcVar1[4] < '\0');
          auVar30[5] = -(pcVar1[5] < '\0');
          auVar30[6] = -(pcVar1[6] < '\0');
          auVar30[7] = -(pcVar1[7] < '\0');
          auVar30[8] = -(pcVar1[8] < '\0');
          auVar30[9] = -(pcVar1[9] < '\0');
          auVar30[10] = -(pcVar1[10] < '\0');
          auVar30[11] = -(pcVar1[0xb] < '\0');
          auVar30[12] = -(pcVar1[0xc] < '\0');
          auVar30[13] = -(pcVar1[0xd] < '\0');
          auVar30[14] = -(pcVar1[0xe] < '\0');
          auVar30[15] = -(pcVar1[0xf] < '\0');
          *(undefined (*) [16])(pauVar12[1] + lVar8) = auVar30 | auVar28;
          lVar8 = lVar8 + 0x20;
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
        if ((uVar23 & 1) != 0) goto LAB_1806a46d4;
      }
      if (puVar11 < &DAT_00000010) {
        puVar14 = &DAT_00000010;
      }
      else {
        puVar14 = puVar11;
        puVar11 = &DAT_00000010;
      }
      FUN_180691e40(puVar14 + (longlong)pauVar12,pauVar12,puVar11);
      pauVar12 = (undefined (*) [16])0x0;
      do {
        bVar27 = pauVar12 != pauVar9;
        pauVar12 = (undefined (*) [16])(*pauVar12 + 1);
      } while (bVar27);
      pauVar10 = param_1[1];
      pauVar12 = param_1[3];
      pauVar9 = (undefined (*) [16])
                (((ulonglong)(*pauVar10 + 1) & 0xfffffffffffffff8) -
                ((ulonglong)(*pauVar10 + 1) >> 3));
      if (pauVar10 < (undefined (*) [16])&DAT_00000008) {
        pauVar9 = pauVar10;
      }
    }
    param_1[2] = (undefined (*) [16])((longlong)pauVar9 - (longlong)pauVar12);
LAB_1806a48c2:
    uVar7 = 0xffffffffffffffff;
  }
  return uVar7;
}


/* address=1806a4990 name=FUN_1806a4990 */

/* WARNING: Removing unreachable block (ram,0x0001806a4e38) */
/* WARNING: Removing unreachable block (ram,0x0001806a4cf0) */
/* WARNING: Removing unreachable block (ram,0x0001806a4dce) */
/* WARNING: Removing unreachable block (ram,0x0001806a4dd7) */
/* WARNING: Removing unreachable block (ram,0x0001806a4df5) */
/* WARNING: Removing unreachable block (ram,0x0001806a4d21) */
/* WARNING: Removing unreachable block (ram,0x0001806a4df7) */
/* WARNING: Removing unreachable block (ram,0x0001806a4e01) */
/* WARNING: Removing unreachable block (ram,0x0001806a4d37) */
/* WARNING: Removing unreachable block (ram,0x0001806a4e10) */
/* WARNING: Removing unreachable block (ram,0x0001806a4d53) */
/* WARNING: Removing unreachable block (ram,0x0001806a4e54) */
/* WARNING: Removing unreachable block (ram,0x0001806a4d8a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1806a4990(undefined (**param_1) [16],ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined (*pauVar12) [16];
  uint uVar13;
  undefined (*pauVar14) [16];
  undefined *puVar15;
  undefined (*pauVar16) [16];
  ulonglong uVar17;
  undefined *puVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined (*pauVar21) [16];
  longlong lVar22;
  ulonglong uVar23;
  undefined (*pauVar24) [16];
  uint uVar25;
  undefined (*pauVar26) [16];
  undefined (*pauVar27) [16];
  bool bVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined (*local_68) [16];
  
  auVar29 = _DAT_1806c50b0;
  pauVar24 = param_1[3];
  puVar18 = *pauVar24 + param_2;
  if (CARRY8(param_2,(ulonglong)pauVar24)) goto LAB_1806a4ab8;
  pauVar12 = param_1[1];
  puVar15 = *pauVar12 + 1;
  pauVar14 = (undefined (*) [16])
             (((ulonglong)puVar15 & 0xfffffffffffffff8) - ((ulonglong)puVar15 >> 3));
  if (pauVar12 < (undefined (*) [16])&DAT_00000008) {
    pauVar14 = pauVar12;
  }
  if ((undefined *)((ulonglong)pauVar14 >> 1) < puVar18) {
    puVar15 = *pauVar14 + 1;
    if (*pauVar14 + 1 <= puVar18) {
      puVar15 = puVar18;
    }
    if (puVar15 < (undefined *)0xf) {
      uVar11 = 4;
      if ((undefined *)0x3 < puVar15) {
        uVar11 = (ulonglong)((uint)puVar15 & 8) + 8;
      }
LAB_1806a4a90:
      uVar20 = uVar11 * 0x20;
      uVar17 = uVar11 + 0x10;
      uVar23 = uVar17 + uVar20;
      if ((byte)(0x7ffffffffffffff0 < uVar23 | CARRY8(uVar17,uVar20)) == 0) {
        FUN_180339d20();
        lVar9 = thunk_FUN_1803e4c20(uVar23,0x10);
        if (lVar9 == 0) {
          uVar8 = FUN_1803f5190(param_4,0x10,uVar23);
          return uVar8;
        }
        pauVar26 = (undefined (*) [16])(lVar9 + uVar20);
        FUN_1806924e0(pauVar26,0xff,uVar17);
        pauVar14 = (undefined (*) [16])(uVar11 - 1);
        pauVar16 = (undefined (*) [16])((uVar11 & 0xfffffffffffffff8) - (uVar11 >> 3));
        if (uVar11 < 9) {
          pauVar16 = pauVar14;
        }
        if (pauVar24 == (undefined (*) [16])0x0) {
          local_68 = *param_1;
        }
        else {
          local_68 = *param_1;
          auVar29 = *local_68;
          uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar29[15] >> 7) << 0xf);
          lVar9 = 0;
          pauVar21 = pauVar24;
          pauVar27 = local_68;
          do {
            if ((short)uVar25 == 0) {
              do {
                auVar29 = pauVar27[1];
                pauVar27 = pauVar27 + 1;
                uVar25 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar29[15] >> 7) << 0xf) ^ 0xffff;
                lVar9 = lVar9 + 0x10;
              } while (uVar25 == 0);
            }
            uVar19 = 0;
            for (uVar13 = uVar25; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              uVar19 = uVar19 + 1;
            }
            lVar10 = (ulonglong)uVar19 + lVar9;
            uVar11 = FUN_1803a9cb0(param_3,local_68 + lVar10 * -2 + -2);
            uVar17 = uVar11 & (ulonglong)pauVar14;
            auVar29 = *(undefined (*) [16])(*pauVar26 + uVar17);
            uVar2 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar29[15] >> 7) << 0xf;
            uVar19 = (uint)uVar2;
            if (uVar2 == 0) {
              lVar22 = 0x10;
              do {
                uVar17 = uVar17 + lVar22 & (ulonglong)pauVar14;
                auVar29 = *(undefined (*) [16])(*pauVar26 + uVar17);
                lVar22 = lVar22 + 0x10;
                uVar19 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar29[15] >> 7) << 0xf);
              } while (uVar19 == 0);
            }
            uVar13 = 0;
            for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
              uVar13 = uVar13 + 1;
            }
            uVar17 = uVar13 + uVar17 & (ulonglong)pauVar14;
            if (-1 < (char)(*pauVar26)[uVar17]) {
              auVar29 = *pauVar26;
              uVar19 = 0;
              for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar29[15] >> 7) << 0xf);
                  (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                uVar19 = uVar19 + 1;
              }
              uVar17 = (ulonglong)uVar19;
            }
            uVar25 = uVar25 - 1 & uVar25;
            pauVar21 = (undefined (*) [16])(pauVar21[-1] + 0xf);
            bVar7 = (byte)(uVar11 >> 0x39);
            (*pauVar26)[uVar17] = bVar7;
            pauVar26[1][uVar17 - 0x10 & (ulonglong)pauVar14] = bVar7;
            uVar3 = *(undefined4 *)local_68[lVar10 * -2 + -1];
            uVar4 = *(undefined4 *)(local_68[lVar10 * -2 + -1] + 4);
            uVar5 = *(undefined4 *)(local_68[lVar10 * -2 + -1] + 8);
            uVar6 = *(undefined4 *)(local_68[lVar10 * -2 + -1] + 0xc);
            pauVar26[uVar17 * -2 + -2] = local_68[lVar10 * -2 + -2];
            *(undefined4 *)pauVar26[uVar17 * -2 + -1] = uVar3;
            *(undefined4 *)(pauVar26[uVar17 * -2 + -1] + 4) = uVar4;
            *(undefined4 *)(pauVar26[uVar17 * -2 + -1] + 8) = uVar5;
            *(undefined4 *)(pauVar26[uVar17 * -2 + -1] + 0xc) = uVar6;
          } while (pauVar21 != (undefined (*) [16])0x0);
        }
        *param_1 = pauVar26;
        param_1[1] = pauVar14;
        param_1[2] = (undefined (*) [16])((longlong)pauVar16 - (longlong)pauVar24);
        if (pauVar12 == (undefined (*) [16])0x0) {
          return 0xffffffffffffffff;
        }
        if (pauVar12[(longlong)pauVar12 * 2 + 3] + 1 == (undefined *)0x0) {
          return 0xffffffffffffffff;
        }
        thunk_FUN_1803e4c80((longlong)local_68 - ((longlong)pauVar12 * 0x20 + 0x20),
                            pauVar12[(longlong)pauVar12 * 2 + 3] + 1,0x10);
        goto LAB_1806a4ea5;
      }
    }
    else if ((ulonglong)puVar15 >> 0x3d == 0) {
      uVar11 = (ulonglong)((longlong)puVar15 * 8) / 7;
      uVar11 = (((longlong)puVar15 * 8 - uVar11 >> 1) + uVar11 >> 2) - 1;
      lVar9 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = 0xffffffffffffffff >> (~(byte)lVar9 & 0x3f);
      if (uVar11 < 0x7ffffffffffffff) {
        uVar11 = uVar11 + 1;
        goto LAB_1806a4a90;
      }
    }
LAB_1806a4ab8:
    uVar8 = FUN_1803f5160(param_4);
  }
  else {
    if (puVar15 == (undefined *)0x0) {
      pauVar12 = (undefined (*) [16])0x0;
    }
    else {
      pauVar24 = *param_1;
      uVar11 = (((ulonglong)puVar15 >> 4) + 1) - (ulonglong)(((ulonglong)puVar15 & 0xf) == 0);
      if (uVar11 == 1) {
        lVar9 = 0;
LAB_1806a4ca8:
        pcVar1 = *pauVar24 + lVar9;
        auVar29[0] = -(*pcVar1 < '\0');
        auVar29[1] = -(pcVar1[1] < '\0');
        auVar29[2] = -(pcVar1[2] < '\0');
        auVar29[3] = -(pcVar1[3] < '\0');
        auVar29[4] = -(pcVar1[4] < '\0');
        auVar29[5] = -(pcVar1[5] < '\0');
        auVar29[6] = -(pcVar1[6] < '\0');
        auVar29[7] = -(pcVar1[7] < '\0');
        auVar29[8] = -(pcVar1[8] < '\0');
        auVar29[9] = -(pcVar1[9] < '\0');
        auVar29[10] = -(pcVar1[10] < '\0');
        auVar29[11] = -(pcVar1[0xb] < '\0');
        auVar29[12] = -(pcVar1[0xc] < '\0');
        auVar29[13] = -(pcVar1[0xd] < '\0');
        auVar29[14] = -(pcVar1[0xe] < '\0');
        auVar29[15] = -(pcVar1[0xf] < '\0');
        *(undefined (*) [16])(*pauVar24 + lVar9) = auVar29 | _DAT_1806c50b0;
      }
      else {
        uVar17 = uVar11 & 0x1ffffffffffffffe;
        lVar9 = 0;
        do {
          pcVar1 = *pauVar24 + lVar9;
          auVar30[0] = -(*pcVar1 < '\0');
          auVar30[1] = -(pcVar1[1] < '\0');
          auVar30[2] = -(pcVar1[2] < '\0');
          auVar30[3] = -(pcVar1[3] < '\0');
          auVar30[4] = -(pcVar1[4] < '\0');
          auVar30[5] = -(pcVar1[5] < '\0');
          auVar30[6] = -(pcVar1[6] < '\0');
          auVar30[7] = -(pcVar1[7] < '\0');
          auVar30[8] = -(pcVar1[8] < '\0');
          auVar30[9] = -(pcVar1[9] < '\0');
          auVar30[10] = -(pcVar1[10] < '\0');
          auVar30[11] = -(pcVar1[0xb] < '\0');
          auVar30[12] = -(pcVar1[0xc] < '\0');
          auVar30[13] = -(pcVar1[0xd] < '\0');
          auVar30[14] = -(pcVar1[0xe] < '\0');
          auVar30[15] = -(pcVar1[0xf] < '\0');
          *(undefined (*) [16])(*pauVar24 + lVar9) = auVar30 | auVar29;
          pcVar1 = pauVar24[1] + lVar9;
          auVar31[0] = -(*pcVar1 < '\0');
          auVar31[1] = -(pcVar1[1] < '\0');
          auVar31[2] = -(pcVar1[2] < '\0');
          auVar31[3] = -(pcVar1[3] < '\0');
          auVar31[4] = -(pcVar1[4] < '\0');
          auVar31[5] = -(pcVar1[5] < '\0');
          auVar31[6] = -(pcVar1[6] < '\0');
          auVar31[7] = -(pcVar1[7] < '\0');
          auVar31[8] = -(pcVar1[8] < '\0');
          auVar31[9] = -(pcVar1[9] < '\0');
          auVar31[10] = -(pcVar1[10] < '\0');
          auVar31[11] = -(pcVar1[0xb] < '\0');
          auVar31[12] = -(pcVar1[0xc] < '\0');
          auVar31[13] = -(pcVar1[0xd] < '\0');
          auVar31[14] = -(pcVar1[0xe] < '\0');
          auVar31[15] = -(pcVar1[0xf] < '\0');
          *(undefined (*) [16])(pauVar24[1] + lVar9) = auVar31 | auVar29;
          lVar9 = lVar9 + 0x20;
          uVar17 = uVar17 - 2;
        } while (uVar17 != 0);
        if ((uVar11 & 1) != 0) goto LAB_1806a4ca8;
      }
      if (puVar15 < &DAT_00000010) {
        puVar18 = &DAT_00000010;
      }
      else {
        puVar18 = puVar15;
        puVar15 = &DAT_00000010;
      }
      FUN_180691e40(puVar18 + (longlong)pauVar24,pauVar24,puVar15);
      pauVar24 = (undefined (*) [16])0x0;
      do {
        bVar28 = pauVar24 != pauVar12;
        pauVar24 = (undefined (*) [16])(*pauVar24 + 1);
      } while (bVar28);
      pauVar14 = param_1[1];
      pauVar24 = param_1[3];
      pauVar12 = (undefined (*) [16])
                 (((ulonglong)(*pauVar14 + 1) & 0xfffffffffffffff8) -
                 ((ulonglong)(*pauVar14 + 1) >> 3));
      if (pauVar14 < (undefined (*) [16])&DAT_00000008) {
        pauVar12 = pauVar14;
      }
    }
    param_1[2] = (undefined (*) [16])((longlong)pauVar12 - (longlong)pauVar24);
LAB_1806a4ea5:
    uVar8 = 0xffffffffffffffff;
  }
  return uVar8;
}


/* address=1806a4f40 name=FUN_1806a4f40 */

void FUN_1806a4f40(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,0x80,0x80);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a4fb0 name=FUN_1806a4fb0 */

void FUN_1806a4fb0(void)

{
  undefined local_20 [8];
  uint local_18;
  undefined4 local_14;
  undefined local_10 [4];
  undefined4 local_c;
  
  FUN_180490900(local_20);
  FUN_1804908d0(local_10);
  DAT_18093b838 = (~local_18 & 0x80200) == 0 & local_14._3_1_ >> 2 & local_c._3_1_ >> 5;
  return;
}


/* address=1806a5000 name=FUN_1806a5000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1806a5000(undefined8 *param_1,longlong param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined auVar10 [16];
  undefined8 local_38 [3];
  
  uVar7 = *(ulonglong *)(param_2 + 0x20);
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  uVar4 = 0;
  if (uVar2 < uVar7) {
    uVar4 = (ulonglong)(uint)((int)uVar7 - (int)uVar2);
    uVar8 = 0;
    do {
      cVar1 = *(char *)(uVar2 + *(longlong *)(param_2 + 0x18) + uVar8);
      if (9 < (byte)(cVar1 - 0x30U)) {
        if (cVar1 == '.') {
          FUN_180490c10(param_1,param_2,param_3,param_4,(int)uVar8);
          return param_1;
        }
        if ((cVar1 == 'E') || (cVar1 == 'e')) {
          FUN_18045f370(param_1,param_2,param_3,param_4,(int)uVar8);
          return param_1;
        }
        uVar4 = uVar8 & 0xffffffff;
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar2 + 1 + uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar7 - uVar2 != uVar8);
  }
  auVar10._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar10._0_8_ = param_4;
  auVar10._12_4_ = DAT_1806b8400._4_4_;
  dVar9 = (auVar10._8_8_ - _UNK_1806b8418) +
          ((double)CONCAT44((undefined4)DAT_1806b8400,(int)param_4) - _DAT_1806b8410);
  uVar3 = (uint)uVar4;
  uVar7 = (ulonglong)-uVar3;
  if (0 < (int)uVar3) {
    uVar7 = uVar4;
  }
  uVar6 = (uint)uVar7;
  while (0x134 < uVar6) {
    if ((dVar9 == 0.0) && (!NAN(dVar9))) goto joined_r0x0001806a515f;
    if (-1 < (int)uVar4) goto LAB_1806a5163;
    dVar9 = dVar9 / DAT_1806b8420;
    uVar3 = (int)uVar4 + 0x134;
    uVar4 = (ulonglong)uVar3;
    uVar6 = -uVar3;
    if (0 < (int)uVar3) {
      uVar6 = uVar3;
    }
    uVar7 = (ulonglong)uVar6;
  }
  if ((int)uVar3 < 0) {
    dVar9 = dVar9 / *(double *)(PTR_DAT_18093b2b8 + uVar7 * 8);
  }
  else {
    dVar9 = dVar9 * *(double *)(PTR_DAT_18093b2b8 + uVar7 * 8);
    if (((ulonglong)dVar9 & 0x7fffffffffffffff) == 0x7ff0000000000000) {
LAB_1806a5163:
      local_38[0] = 0xe;
      uVar5 = FUN_180692fc0(param_2,local_38);
      param_1[1] = uVar5;
      uVar5 = 1;
      goto LAB_1806a5149;
    }
  }
joined_r0x0001806a515f:
  if (param_3 == '\0') {
    dVar9 = (double)((ulonglong)dVar9 ^ _DAT_1806b8430);
  }
  param_1[1] = dVar9;
  uVar5 = 0;
LAB_1806a5149:
  *param_1 = uVar5;
  return param_1;
}


/* address=1806a5190 name=FUN_1806a5190 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1806a5190(undefined8 *param_1,longlong param_2,char param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined auVar7 [16];
  undefined8 local_30 [3];
  
  uVar2 = (ulonglong)param_5;
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar5 = uVar5 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar5);
      if (9 < (byte)(bVar1 - 0x30)) {
        if ((bVar1 | 0x20) == 0x65) {
          FUN_18045f370(param_1,param_2,param_3,param_4,param_5);
          return param_1;
        }
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
    } while (uVar5 != *(ulonglong *)(param_2 + 0x20));
  }
  auVar7._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar7._0_8_ = param_4;
  auVar7._12_4_ = DAT_1806b8400._4_4_;
  dVar6 = (auVar7._8_8_ - _UNK_1806b8418) +
          ((double)CONCAT44((undefined4)DAT_1806b8400,(int)param_4) - _DAT_1806b8410);
  uVar5 = (ulonglong)-param_5;
  if (0 < (int)param_5) {
    uVar5 = uVar2;
  }
  uVar4 = (uint)uVar5;
  while (0x134 < uVar4) {
    if ((dVar6 == 0.0) && (!NAN(dVar6))) goto joined_r0x0001806a52ce;
    if (-1 < (int)uVar2) goto LAB_1806a52d2;
    dVar6 = dVar6 / DAT_1806b8420;
    param_5 = (int)uVar2 + 0x134;
    uVar2 = (ulonglong)param_5;
    uVar4 = -param_5;
    if (0 < (int)param_5) {
      uVar4 = param_5;
    }
    uVar5 = (ulonglong)uVar4;
  }
  if ((int)param_5 < 0) {
    dVar6 = dVar6 / *(double *)(PTR_DAT_18093b2b8 + uVar5 * 8);
  }
  else {
    dVar6 = dVar6 * *(double *)(PTR_DAT_18093b2b8 + uVar5 * 8);
    if (((ulonglong)dVar6 & 0x7fffffffffffffff) == 0x7ff0000000000000) {
LAB_1806a52d2:
      local_30[0] = 0xe;
      uVar3 = FUN_180692fc0(param_2,local_30);
      param_1[1] = uVar3;
      uVar3 = 1;
      goto LAB_1806a52b9;
    }
  }
joined_r0x0001806a52ce:
  if (param_3 == '\0') {
    dVar6 = (double)((ulonglong)dVar6 ^ _DAT_1806b8430);
  }
  param_1[1] = dVar6;
  uVar3 = 0;
LAB_1806a52b9:
  *param_1 = uVar3;
  return param_1;
}


/* address=1806a5300 name=FUN_1806a5300 */

void FUN_1806a5300(undefined8 *param_1,longlong param_2,char param_3,byte param_4,byte param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_20 [3];
  
  if ((byte)(param_5 ^ 1 | param_4) != 1) {
    local_20[0] = 0xe;
    uVar1 = FUN_180692fc0(param_2,local_20);
    param_1[1] = uVar1;
    *param_1 = 1;
    return;
  }
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  if (uVar2 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar2 = uVar2 + 1;
      if (9 < (byte)(*(char *)(*(longlong *)(param_2 + 0x18) + -1 + uVar2) - 0x30U)) break;
      *(ulonglong *)(param_2 + 0x28) = uVar2;
    } while (uVar2 != *(ulonglong *)(param_2 + 0x20));
  }
  uVar1 = 0;
  if (param_3 == '\0') {
    uVar1 = DAT_1806dfe30;
  }
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}


/* address=1806a53b0 name=FUN_1806a53b0 */

longlong ** FUN_1806a53b0(longlong **param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_10;
  
  if (*(char *)(param_1 + 1) != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      return param_1;
    }
    return (longlong **)0x0;
  }
  if (param_2 != (undefined8 *)0x0) {
    iVar2 = *(int *)param_2;
    *param_2 = 0;
    if (iVar2 == 1) {
      *param_1 = (longlong *)param_2[1];
      *(undefined *)(param_1 + 1) = 1;
      goto LAB_1806a53ed;
    }
  }
  plVar3 = (longlong *)FUN_1806a0200();
  cVar1 = *(char *)(param_1 + 1);
  local_10 = *param_1;
  *param_1 = plVar3;
  *(undefined *)(param_1 + 1) = 1;
  if (cVar1 == '\x01') {
    if (local_10 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    *local_10 = *local_10 + -1;
    UNLOCK();
    if (*local_10 == 0) {
      FUN_18039b650(&local_10);
      return param_1;
    }
    return param_1;
  }
  if (cVar1 == '\x02') {
    FUN_1806a19d0("internal error: entered unreachable code/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\sys\\thread_local\\native\\lazy.rs"
                  ,0x28,&DAT_1806f89c0);
    do {
      invalidInstructionException();
    } while( true );
  }
LAB_1806a53ed:
  FUN_1803ef1b0(param_1,&LAB_180491320);
  return param_1;
}


/* address=1806a5470 name=FUN_1806a5470 */

void FUN_1806a5470(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  undefined4 local_37;
  undefined4 uStack_33;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = (longlong *)FUN_1806a0200();
  local_38 = *(char *)(param_2 + 8);
  *(undefined *)(param_2 + 8) = 2;
  if (local_38 != '\x02') {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    FUN_180491380(param_1,&local_58,local_28);
    LOCK();
    *local_28 = *local_28 + -1;
    UNLOCK();
    if (*local_28 == 0) {
      FUN_18039b650(&local_28);
    }
    return;
  }
  FUN_1806a1770(&PTR_s__rustc_48a229ceaefd4985c50990b14_1806f8a30);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a5530 name=FUN_1806a5530 */

void FUN_1806a5530(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1806a5600(param_1,*param_1);
  if (lVar1 == -1) {
    return;
  }
  FUN_1806a153b(lVar1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a5560 name=FUN_1806a5560 */

void FUN_1806a5560(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 1;
  if (0x555555555555555 < param_4) {
    lVar1 = 8;
    lVar3 = 0;
    goto LAB_1806a55ef;
  }
  lVar3 = param_4 * 0x18;
  if (param_2 == 0) {
    if (lVar3 != 0) {
      FUN_180339d20();
      lVar1 = thunk_FUN_1803e4c20(lVar3,8);
      goto joined_r0x0001806a55ce;
    }
    lVar1 = 8;
  }
  else {
    lVar1 = thunk_FUN_1803e4cc0(param_3,param_2 * 0x18,8,lVar3);
joined_r0x0001806a55ce:
    if (lVar1 == 0) {
      param_1[1] = 8;
      lVar1 = 0x10;
      goto LAB_1806a55ef;
    }
  }
  param_1[1] = lVar1;
  lVar1 = 0x10;
  uVar2 = 0;
LAB_1806a55ef:
  *(longlong *)((longlong)param_1 + lVar1) = lVar3;
  *param_1 = uVar2;
  return;
}


/* address=1806a5600 name=FUN_1806a5600 */

ulonglong FUN_1806a5600(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char local_28 [8];
  ulonglong local_20;
  
  uVar2 = *param_1 * 2;
  uVar1 = param_2 + 1U;
  if (param_2 + 1U <= uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a5560(local_28,*param_1,param_1[1],uVar2);
  if (local_28[0] != '\0') {
    return local_20;
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return 0xffffffffffffffff;
}


/* address=1806a5670 name=FUN_1806a5670 */

longlong ** FUN_1806a5670(longlong **param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined local_2d8 [12];
  undefined4 uStack_2cc;
  undefined local_2c8 [16];
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined local_298 [16];
  undefined local_288 [16];
  undefined local_278 [16];
  undefined local_268 [16];
  undefined local_258 [16];
  undefined local_248 [16];
  undefined local_238 [16];
  undefined local_228 [16];
  undefined local_218 [16];
  undefined local_208 [16];
  undefined local_1f8 [16];
  undefined local_1e8 [16];
  undefined local_1d8 [16];
  undefined local_1c8 [16];
  undefined local_1b8 [16];
  undefined local_1a8 [16];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  
  if (*(char *)(param_1 + 1) == '\0') {
    local_2c8 = ZEXT816(0);
    _local_2d8 = ZEXT816(0);
    ProcessPrng(local_2d8,0x20);
    local_288 = local_2c8;
    local_298 = _local_2d8;
    FUN_1804a0d30(&local_158,local_298,&DAT_1806fb3b0,8);
    uStack_194 = uStack_154;
    local_198 = local_158;
    local_160 = local_158;
    uStack_15c = uStack_154;
    local_158 = uStack_150;
    uStack_154 = uStack_14c;
    local_2d8._8_4_ = local_198;
    uStack_2cc = uStack_194;
    uStack_2b8 = uStack_140;
    uStack_2b4 = uStack_13c;
    local_2b0 = local_138;
    uStack_2ac = uStack_134;
    uStack_2a8 = uStack_130;
    uStack_2a4 = uStack_12c;
    uStack_190 = uStack_150;
    uStack_18c = uStack_14c;
    local_188 = local_148;
    uStack_184 = uStack_144;
    uStack_180 = uStack_140;
    uStack_17c = uStack_13c;
    local_178 = local_138;
    uStack_174 = uStack_134;
    uStack_170 = uStack_130;
    uStack_16c = uStack_12c;
    local_1a8 = ZEXT816(0);
    local_1b8 = ZEXT816(0);
    local_1c8 = ZEXT816(0);
    local_1d8 = ZEXT816(0);
    local_1e8 = ZEXT816(0);
    local_1f8 = ZEXT816(0);
    local_208 = ZEXT816(0);
    local_218 = ZEXT816(0);
    local_228 = ZEXT816(0);
    local_238 = ZEXT816(0);
    local_248 = ZEXT816(0);
    local_258 = ZEXT816(0);
    local_268 = ZEXT816(0);
    local_278 = ZEXT816(0);
    local_288 = ZEXT816(0);
    local_298 = ZEXT816(0);
    FUN_180691e40(&local_160,local_298,0x130);
    FUN_180691e40(local_298,&local_160,0x130);
    FUN_180339d20();
    plVar2 = (longlong *)thunk_FUN_1803e4c20(0x160,0x10);
    if (plVar2 == (longlong *)0x0) {
      FUN_1806a1521(0x10,0x160);
      do {
        invalidInstructionException();
      } while( true );
    }
    *plVar2 = 1;
    plVar2[1] = 1;
    FUN_180691e40(plVar2 + 2,local_298,0x130);
    plVar2[0x28] = 0x10000;
    plVar2[0x29] = 0x10000;
    plVar2[0x2a] = 0x40;
    cVar1 = *(char *)(param_1 + 1);
    local_168 = *param_1;
    *param_1 = plVar2;
    *(undefined *)(param_1 + 1) = 1;
    if (cVar1 == '\x01') {
      *local_168 = *local_168 + -1;
      if (*local_168 == 0) {
        FUN_1804a0cc0(&local_168);
      }
    }
    else {
      if (cVar1 != '\0') {
        FUN_1806a19d0("internal error: entered unreachable code/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\sys\\thread_local\\native\\lazy.rs"
                      ,0x28,&DAT_1806fb330);
        do {
          invalidInstructionException();
        } while( true );
      }
      FUN_1803ef1b0(param_1,&LAB_1804a0ca0);
    }
  }
  else if (*(char *)(param_1 + 1) != '\x01') {
    param_1 = (longlong **)0x0;
  }
  return param_1;
}


/* address=1806a58d0 name=FUN_1806a58d0 */

void FUN_1806a58d0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_18069b150(local_28,*param_1,param_1[1],uVar2,4,4);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a5940 name=FUN_1806a5940 */

void FUN_1806a5940(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  if (CARRY8(param_2,param_3)) {
    FUN_1806a153b(0);
    do {
      invalidInstructionException();
    } while( true );
  }
  uVar1 = *param_1 * 2;
  if (uVar1 < param_2 + param_3) {
    uVar1 = param_2 + param_3;
  }
  uVar2 = 8;
  if (8 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1806a59c0(local_28,*param_1,param_1[1],uVar2);
  if (local_28[0] != 1) {
    param_1[1] = local_20;
    *param_1 = uVar2;
    return;
  }
  FUN_1806a153b(local_20,local_18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a59c0 name=FUN_1806a59c0 */

void FUN_1806a59c0(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (param_4 < 0) {
    lVar1 = 8;
    param_4 = 0;
  }
  else {
    if (param_2 == 0) {
      FUN_180339d20();
      lVar1 = thunk_FUN_1803e4c20(param_4,1);
    }
    else {
      lVar1 = thunk_FUN_1803e4cc0(param_3,param_2,1,param_4);
    }
    if (lVar1 == 0) {
      param_1[1] = 1;
      lVar1 = 0x10;
    }
    else {
      param_1[1] = lVar1;
      lVar1 = 0x10;
      uVar2 = 0;
    }
  }
  *(longlong *)((longlong)param_1 + lVar1) = param_4;
  *param_1 = uVar2;
  return;
}


/* address=1806a5a3e name=FUN_1806a5a3e */

void FUN_1806a5a3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_3;
  FUN_1806a18b5(param_5,&local_10,&DAT_1806fc498,&local_8,&DAT_1806fc498,param_4,param_5,param_6);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a5a80 name=FUN_1806a5a80 */

/* WARNING: Removing unreachable block (ram,0x0001806a606a) */
/* WARNING: Removing unreachable block (ram,0x0001806a5ea4) */
/* WARNING: Removing unreachable block (ram,0x0001806a5e0b) */
/* WARNING: Removing unreachable block (ram,0x0001806a5cfc) */
/* WARNING: Removing unreachable block (ram,0x0001806a5b70) */
/* WARNING: Removing unreachable block (ram,0x0001806a5b5d) */
/* WARNING: Removing unreachable block (ram,0x0001806a5b01) */
/* WARNING: Removing unreachable block (ram,0x0001806a5ae9) */
/* WARNING: Removing unreachable block (ram,0x0001806a5ac7) */
/* WARNING: Removing unreachable block (ram,0x0001806a5a9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1806a5a80(void)

{
  uint *puVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong local_70;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar14 = *puVar1;
  uVar9 = *(ulonglong *)(puVar1 + 1);
  uVar7 = puVar1[3];
  uVar12 = 0;
  if (uVar14 == 0) {
    uVar16 = 0;
  }
  else {
    lVar2 = cpuid_Version_info(1);
    uVar10 = *(uint *)(lVar2 + 8);
    uVar8 = *(uint *)(lVar2 + 0xc);
    if (uVar14 < 7) {
      local_70 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar5 = *(uint *)(lVar2 + 8);
      puVar1 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
      uVar4 = *puVar1;
      uVar6 = puVar1[2];
      uVar12 = (ulonglong)*(uint *)(lVar2 + 4);
      local_70 = (ulonglong)*(uint *)(lVar2 + 0xc);
    }
    uVar17 = 0;
    piVar3 = (int *)cpuid(0x80000000);
    if (*piVar3 != 0) {
      lVar2 = cpuid(0x80000001);
      uVar17 = *(uint *)(lVar2 + 0xc);
    }
    uVar18 = (uint)uVar12;
    uVar13 = (uVar18 & 0x800) >> 3 |
             (uVar18 & 0x80000) >> 0xc | (uVar8 & 0x400000) >> 0xd | uVar8 >> 10 & 8;
    uVar19 = local_70 << 0x16;
    uVar15 = (ulonglong)(uVar13 + (uVar18 & 0x200) * 4 | (uint)(uVar12 >> 0x13) & 0x10);
    uVar16 = uVar15 | 0x400;
    if ((uVar4 & 0x80000000) == 0) {
      uVar16 = uVar15;
    }
    if ((local_70 & 0x800000) != 0) {
      lVar2 = cpuid(0x19);
      uVar13 = *(uint *)(lVar2 + 8);
      uVar16 = uVar16 | ((*(uint *)(lVar2 + 4) & 4) << 4 | (*(uint *)(lVar2 + 4) & 1) << 5);
    }
    uVar15 = (ulonglong)
             (uVar10 >> 0x13 & 0xc0 |
              uVar8 >> 9 & 0x800 | uVar8 >> 9 & 0x400 | uVar8 & 0x202 | (uVar8 & 1) << 8 |
              (uint)(uVar12 >> 0xf) & 8 | (uint)(uVar12 >> 0x10) & 0x2000) |
             (ulonglong)(uVar18 & 8) << 0x36 |
             ((ulonglong)uVar8 << 0x26 | (ulonglong)uVar10) & 0x2000000000000010 |
             (ulonglong)(uVar8 >> 0x19 & 1) | (ulonglong)(uVar8 & 0x20000000) << 0x1a |
             (ulonglong)(uVar8 >> 0x1c & 4) | (ulonglong)(uVar10 >> 0x12 & 0x20) |
             (ulonglong)(uVar10 & 0x1000000) << 0x26 |
             (ulonglong)(uVar18 & 0x100) << 0x32 | (ulonglong)((uint)uVar19 & 0x40000000) |
             (ulonglong)((uint)uVar19 & 0x80000000) | uVar19 & 0x100000000 |
             (ulonglong)(uVar17 & 0x20) << 0x36;
    if ((((ulonglong)uVar7 ^ 0x444d4163 | uVar9 ^ 0x69746e6568747541) == 0) ||
       (uVar11 = uVar9 ^ 0x6e65476e6f677948, ((ulonglong)uVar7 ^ 0x656e6975 | uVar11) == 0)) {
      uVar11 = (ulonglong)(uVar17 & 0x200000) << 0x27 | (ulonglong)((uVar17 & 0x40) << 6);
      uVar16 = uVar16 | (uVar17 & 0x800) * 2;
      uVar15 = uVar15 | uVar11;
    }
    if ((~uVar8 & 0xc000000) == 0) {
      uVar10 = FUN_1804ad460(uVar11,uVar13);
      if (((~uVar10 & 0x60000) == 0) &&
         (uVar15 = uVar15 | (ulonglong)(uVar6 & 0x100) << 0x27 |
                            (ulonglong)(uVar4 & 0x200000) << 0x19 |
                            (ulonglong)(uVar5 & 0x400000) << 0x17 |
                            (ulonglong)(uVar5 & 0x3000000) << 0x13, 0x1d < uVar14)) {
        puVar1 = (uint *)cpuid(0x1e);
        uVar17 = *puVar1;
        uVar15 = uVar15 | (ulonglong)(uVar17 & 0x100) << 0x2a |
                          (ulonglong)(uVar17 & 0x80) << 0x29 | (ulonglong)(uVar17 & 0x50) << 0x2d;
      }
      uVar11 = uVar15 | 0x10000000000000;
      if ((uVar6 & 0x200000) == 0 || (uVar10 & 0x80000) == 0) {
        uVar11 = uVar15;
      }
      uVar15 = uVar11;
      if ((uVar10 & 6) == 6) {
        if (0xc < uVar14) {
          puVar1 = (uint *)cpuid_Processor_Extended_States_info(0xd);
          uVar14 = *puVar1;
          uVar11 = uVar16 | 1;
          if ((uVar14 & 1) == 0) {
            uVar11 = uVar16;
          }
          uVar16 = ((uVar14 & 8) >> 2 | (uVar14 & 2) * 2) | uVar11;
        }
        uVar11 = (ulonglong)(uVar4 & 0x800000) << 0xf |
                 (ulonglong)(uVar4 & 0x10) << 0x24 |
                 (ulonglong)((uVar18 & 0x20) << 10) |
                 (ulonglong)(uVar8 >> 0xe & 0x4000) | (ulonglong)(uVar8 & 0x1000) << 0x2c |
                 uVar15 | 0x8000000000000000;
        uVar15 = uVar11 | 0x40000000000;
        if ((uVar6 & 0x10) == 0) {
          uVar15 = uVar11;
        }
        uVar15 = (ulonglong)((uVar4 & 7) << 0x10) | (ulonglong)(uVar6 & 0x20) << 0x22 |
                 (ulonglong)(uVar6 & 0x400) << 0x1f | uVar15;
        if ((~uVar8 & 0x20001000 | uVar10 & 0xe0 ^ 0xe0) == 0) {
          uVar15 = uVar15 | ((uint)(uVar12 >> 7) & 0x800000 |
                            (uint)(uVar12 >> 8) & 0x100000 |
                            (uint)(uVar12 >> 6) & 0x200000 |
                            (uint)(uVar12 >> 4) & 0x400000 |
                            (uVar18 & 0x200000) << 5 |
                            (uVar18 & 0x20000) * 0x80 + (uVar18 & 0x10000) * 8);
          uVar11 = uVar15 | 0x2000000;
          if (uVar12 < 0x80000000) {
            uVar11 = uVar15;
          }
          uVar14 = (uint)local_70;
          uVar15 = uVar19 & 0x600000000 |
                   (ulonglong)((uVar14 & 0x40) << 0x17 | (uVar14 & 2) << 0x1a) |
                   (ulonglong)((uVar14 & 0x4000) << 0xe) | (ulonglong)(uVar5 & 0x100) << 0x1c |
                   (ulonglong)(uVar5 & 0x800000) << 0xe | (ulonglong)(uVar4 & 0x20) << 0x1e | uVar11
          ;
          if ((uVar6 & 0x80000) != 0) {
            lVar2 = cpuid(0x24);
            uVar12 = 0x60000000000000;
            if (((~uVar4 & 0x800010) != 0 || (uVar6 & 0x10) == 0) ||
                (*(uint *)(lVar2 + 4) & 0xfe) == 0) {
              uVar12 = 0x20000000000000;
            }
            uVar15 = uVar15 | uVar12;
          }
        }
      }
    }
    uVar12 = uVar15 & 0xf9ffffffffffbfff;
    if (((ulonglong)((uint)uVar15 & 0x4000) |
        (ulonglong)uVar7 ^ 0x6c65746e | uVar9 ^ 0x49656e69756e6547) != 0) {
      uVar12 = uVar15;
    }
  }
  DAT_1809911c8 = uVar12 | 0x8000000000000000;
  _DAT_1809911d0 = uVar16 << 1 | uVar12 >> 0x3f | 0x8000000000000000;
  _DAT_1809911d8 = 0x8000000000000000;
  return uVar12;
}


/* address=1806a6130 name=FUN_1806a6130 */

undefined (*) [16] FUN_1806a6130(undefined (*param_1) [16],undefined8 *param_2)

{
  byte bVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1[1][0] != '\0') {
    if (param_1[1][0] != '\x01') {
      param_1 = (undefined (*) [16])0x0;
    }
    return param_1;
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 2);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
    bVar1 = *(byte *)param_2;
    *param_2 = 0;
    if ((bVar1 & 1) != 0) goto LAB_1806a6165;
  }
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
LAB_1806a6165:
  auVar2._4_4_ = uVar4;
  auVar2._0_4_ = uVar3;
  auVar2._8_4_ = uVar5;
  auVar2._12_4_ = uVar6;
  *param_1 = auVar2;
  param_1[1][0] = 1;
  FUN_1803ef1b0(param_1,&LAB_1804ad4b0);
  return param_1;
}


/* address=1806a6190 name=FUN_1806a6190 */

void FUN_1806a6190(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined *local_b0;
  longlong local_a8;
  undefined **local_a0;
  code *local_98;
  undefined **local_90;
  code *local_88;
  undefined **local_80;
  code *local_78;
  undefined *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar6 = FUN_180481b70(PTR_s_C__Users_VssAdministrator__cargo_18093b3e0);
  LOCK();
  bVar10 = *(char *)(lVar6 + 8) == '\0';
  if (bVar10) {
    *(char *)(lVar6 + 8) = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_1806a05a0();
  }
  puVar3 = PTR_DAT_18093b330;
  if ((*(ulonglong *)PTR_DAT_18093b330 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(lVar6 + 9) != '\0') {
LAB_1806a61f4:
      if (((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0) &&
         (cVar5 = FUN_1806a1250(), cVar5 == '\0')) {
        *(undefined *)(lVar6 + 9) = 1;
      }
      goto LAB_1806a6203;
    }
    bVar4 = 0;
    uVar1 = *(ulonglong *)(lVar6 + 0x28);
joined_r0x0001806a6406:
    puVar7 = (undefined *)0x0;
    if (1 < uVar1) {
      lVar2 = *(longlong *)(lVar6 + 0x20);
      uVar9 = 0;
      if (*(ulonglong *)(lVar6 + 0x10) <= lVar2 + 1U) {
        uVar9 = *(ulonglong *)(lVar6 + 0x10);
      }
      *(ulonglong *)(lVar6 + 0x20) = (lVar2 - uVar9) + 1;
      param_2 = uVar1 - 1;
      *(longlong *)(lVar6 + 0x28) = param_2;
      puVar7 = *(undefined **)(*(longlong *)(lVar6 + 0x18) + lVar2 * 8);
    }
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = FUN_1806a1250(), cVar5 == '\0')) {
      *(undefined *)(lVar6 + 9) = 1;
    }
    LOCK();
    cVar5 = *(char *)(lVar6 + 8);
    *(char *)(lVar6 + 8) = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      WakeByAddressSingle(lVar6 + 8);
    }
    local_50 = puVar7;
    if (1 < uVar1) goto LAB_1806a62a6;
  }
  else {
    bVar4 = FUN_1806a1250();
    if (*(char *)(lVar6 + 9) == '\0') {
      bVar4 = bVar4 ^ 1;
      uVar1 = *(ulonglong *)(lVar6 + 0x28);
      goto joined_r0x0001806a6406;
    }
    if (bVar4 != 0) goto LAB_1806a61f4;
LAB_1806a6203:
    LOCK();
    cVar5 = *(char *)(lVar6 + 8);
    *(char *)(lVar6 + 8) = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      WakeByAddressSingle(lVar6 + 8);
    }
  }
  puVar8 = (ulonglong *)FUN_180481b70(PTR_s_C__Users_VssAdministrator__cargo_18093b3e0);
  LOCK();
  local_50 = (undefined *)*puVar8;
  *puVar8 = *puVar8 + 1;
  UNLOCK();
  if ((undefined *)0x1fff < local_50) {
    if (((*(ulonglong *)puVar3 & 0x7fffffffffffffff) == 0) ||
       (cVar5 = FUN_1806a1250(), cVar5 != '\0')) {
      local_60 = &DAT_1806fd178;
      local_58 = 0x20;
      local_a0 = &local_50;
      local_98 = FUN_180404240;
      local_90 = &local_60;
      local_88 = (code *)&LAB_180335950;
      local_80 = (undefined **)&DAT_1806fd198;
      local_78 = FUN_180404240;
      FUN_1806a19f0(&DAT_1806fd1a0,&local_a0,&PTR_s_C__Users_VssAdministrator__cargo_1806fd278);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = (longlong *)FUN_1803ec460();
    local_b0 = (undefined *)FUN_1803e8d00(&local_48);
    if (local_b0 == (undefined *)0x0) {
      param_2 = 9;
      local_b0 = &DAT_1806fd290;
    }
    local_60 = &DAT_1806fd178;
    local_58 = 0x20;
    local_a0 = &local_b0;
    local_98 = (code *)&LAB_180335950;
    local_90 = &local_50;
    local_88 = FUN_180404240;
    local_80 = &local_60;
    local_78 = (code *)&LAB_180335950;
    local_70 = &DAT_1806fd198;
    local_68 = FUN_180404240;
    local_a8 = param_2;
    FUN_1803eb640(&DAT_1806fd299,&local_a0);
    LOCK();
    *local_48 = *local_48 + -1;
    UNLOCK();
    if (*local_48 == 0) {
      FUN_1803e9430(&local_48);
    }
  }
LAB_1806a62a6:
  *param_1 = 1;
  param_1[1] = local_50;
  return;
}


/* address=1806a64d0 name=FUN_1806a64d0 */

ulonglong * FUN_1806a64d0(ulonglong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  undefined *puVar10;
  char cVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong unaff_GS_OFFSET;
  bool bVar20;
  undefined1 *local_48;
  byte local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  LOCK();
  bVar20 = DAT_18093b880 == '\0';
  if (bVar20) {
    DAT_18093b880 = '\x01';
  }
  UNLOCK();
  if (!bVar20) {
    FUN_1806a05a0(&DAT_18093b880);
  }
  puVar10 = PTR_DAT_18093b330;
  if ((*(ulonglong *)PTR_DAT_18093b330 & 0x7fffffffffffffff) == 0) {
    local_40 = 0;
    puVar9 = DAT_18093b890;
    uVar17 = DAT_18093b898;
  }
  else {
    local_40 = FUN_1806a1250();
    local_40 = local_40 ^ 1;
    puVar9 = DAT_18093b890;
    uVar17 = DAT_18093b898;
  }
  DAT_18093b890 = puVar9;
  DAT_18093b898 = uVar17;
  if (DAT_18093b881 != '\0') {
    local_48 = &DAT_18093b880;
    FUN_1806a1790("called `Result::unwrap()` on an `Err` valueC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\thread_local-1.1.9\\src\\thread_id.rs"
                  ,0x2b,&local_48,&PTR_FUN_1806fd950,
                  &PTR_s_C__Users_VssAdministrator__cargo_1806fda10);
    do {
      invalidInstructionException();
    } while( true );
  }
  if ((DAT_18093b888 == -1) || (uVar17 == 0)) {
    uVar13 = DAT_18093b8a0;
    DAT_18093b8a0 = DAT_18093b8a0 + 1;
    goto LAB_1806a6623;
  }
  uVar19 = uVar17 - 1;
  uVar13 = puVar9[uVar17 - 1];
  DAT_18093b898 = uVar19;
  if (uVar19 == 0) goto LAB_1806a6623;
  uVar16 = *puVar9;
  *puVar9 = uVar13;
  uVar18 = 0;
  if (1 < uVar19) {
    uVar18 = uVar17 - 3;
  }
  uVar12 = 1;
  uVar15 = 0;
  uVar14 = uVar15;
  if (uVar17 < 4) {
    if (uVar19 == 2) {
LAB_1806a65c5:
      puVar9[uVar15] = puVar9[uVar12];
      puVar9[uVar12] = uVar13;
      uVar15 = uVar12;
      goto LAB_1806a6600;
    }
  }
  else {
    do {
      uVar15 = (uVar12 + 1) - (ulonglong)(puVar9[uVar12] < puVar9[uVar12 + 1]);
      puVar9[uVar14] = puVar9[uVar15];
      uVar12 = uVar15 * 2 + 1;
      uVar14 = uVar15;
    } while (uVar15 * 2 < uVar18);
    if (uVar15 * 2 == uVar17 - 3) goto LAB_1806a65c5;
    puVar9[uVar15] = uVar13;
LAB_1806a6600:
    do {
      uVar17 = uVar15 - 1 >> 1;
      if (puVar9[uVar17] <= uVar13) goto LAB_1806a661f;
      puVar9[uVar15] = puVar9[uVar17];
      uVar15 = uVar17;
    } while (uVar17 != 0);
    uVar15 = 0;
  }
LAB_1806a661f:
  puVar9[uVar15] = uVar13;
  uVar13 = uVar16;
LAB_1806a6623:
  uVar17 = uVar13 + 1;
  uVar19 = 0x3f;
  if (uVar17 != 0) {
    for (; uVar17 >> uVar19 == 0; uVar19 = uVar19 - 1) {
    }
  }
  uVar19 = (uVar19 ^ 0xffffffffffffffc0) + 0x40;
  uVar16 = 1L << ((byte)uVar19 & 0x3f);
  *param_1 = uVar13;
  param_1[1] = uVar19;
  param_1[2] = uVar16;
  param_1[3] = uVar17 - uVar16;
  if (((local_40 == 0) && ((*(ulonglong *)puVar10 & 0x7fffffffffffffff) != 0)) &&
     (cVar11 = FUN_1806a1250(), cVar11 == '\0')) {
    DAT_18093b881 = '\x01';
  }
  cVar11 = DAT_18093b880;
  LOCK();
  DAT_18093b880 = 0;
  UNLOCK();
  if (cVar11 == '\x02') {
    WakeByAddressSingle(&DAT_18093b880);
  }
  *param_2 = 1;
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)((longlong)param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 1);
  uVar5 = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar7 = *(undefined4 *)(param_1 + 3);
  uVar8 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar6;
  *(undefined4 *)(param_2 + 4) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar8;
  *(undefined4 *)(param_2 + 1) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 2) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
  uVar17 = *param_1;
  lVar1 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x218) != '\0') {
    if (*(char *)(lVar1 + 0x218) != '\x01') {
      FUN_1806a10c0(&PTR_s__rustc_48a229ceaefd4985c50990b14_1806fd8e8);
      do {
        invalidInstructionException();
      } while( true );
    }
    FUN_1803ef1b0((ulonglong *)(lVar1 + 0x210),&LAB_1804ae940);
    *(undefined *)(lVar1 + 0x218) = 0;
  }
  *(ulonglong *)(lVar1 + 0x210) = uVar17;
  return param_1;
}


/* address=1806a67d0 name=FUN_1806a67d0 */

void FUN_1806a67d0(undefined8 param_1,longlong *param_2)

{
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = (longlong *)FUN_1806a3f20();
  local_68 = *param_2;
  *param_2 = -2;
  if (local_68 != -2) {
    local_60 = *(undefined4 *)(param_2 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_58 = *(undefined4 *)(param_2 + 2);
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x14);
    local_50 = *(undefined4 *)(param_2 + 3);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_48 = *(undefined4 *)(param_2 + 4);
    uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
    local_40 = *(undefined4 *)(param_2 + 5);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_38 = *(undefined4 *)(param_2 + 6);
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
    local_30 = param_2[7];
    FUN_1804b4320(param_1,&local_68,local_28);
    LOCK();
    *local_28 = *local_28 + -1;
    UNLOCK();
    if (*local_28 == 0) {
      FUN_18039b650(&local_28);
    }
    return;
  }
  FUN_1806a1770(&PTR_s_C__Users_VssAdministrator__cargo_1806fe3e0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a68a0 name=FUN_1806a68a0 */

ulonglong FUN_1806a68a0(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  undefined4 local_37;
  undefined4 uStack_33;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = (longlong *)FUN_1806a3f20();
  local_38 = *(char *)(param_1 + 8);
  *(undefined *)(param_1 + 8) = 2;
  if (local_38 != '\x02') {
    local_58 = *param_1;
    uStack_54 = param_1[1];
    uStack_50 = param_1[2];
    uStack_4c = param_1[3];
    local_48 = param_1[4];
    uStack_44 = param_1[5];
    uStack_40 = param_1[6];
    uStack_3c = param_1[7];
    uVar1 = FUN_1804b4c90(&local_58,local_28);
    LOCK();
    *local_28 = *local_28 + -1;
    UNLOCK();
    if (*local_28 == 0) {
      uVar1 = uVar1 & 0xffffffff;
      FUN_18039b650(&local_28);
    }
    return uVar1;
  }
  FUN_1806a1770(&PTR_s_C__Users_VssAdministrator__cargo_1806fe3e0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a6960 name=FUN_1806a6960 */

void FUN_1806a6960(longlong *param_1)

{
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (longlong *)FUN_1806a3f20();
  local_38 = *param_1;
  *param_1 = 0;
  if (local_38 != 0) {
    local_30 = *(undefined4 *)(param_1 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_28 = *(undefined4 *)(param_1 + 2);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x14);
    FUN_1804b7020(&local_38,local_20);
    LOCK();
    *local_20 = *local_20 + -1;
    UNLOCK();
    if (*local_20 == 0) {
      FUN_18039b650(&local_20);
    }
    return;
  }
  FUN_1806a1770(&PTR_s_C__Users_VssAdministrator__cargo_1806fe800);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a6a10 name=FUN_1806a6a10 */

void FUN_1806a6a10(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 0x48);
  if ((uVar3 < 0x12) || (uVar3 = *(ulonglong *)(param_1 + 8), uVar3 != 0xffffffffffffffff)) {
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar2 = 0xffffffffffffffff >> (~(byte)lVar1 & 0x3f);
    if (uVar3 == 0) {
      uVar2 = 0;
    }
    if (uVar2 != 0xffffffffffffffff) {
      lVar1 = FUN_1804dc1c0(param_1,uVar2 + 1);
      if (lVar1 == -1) {
        return;
      }
      if (lVar1 == 0) {
        FUN_1806a19d0("capacity overflow",0x11,&PTR_s_C__Users_VssAdministrator__cargo_180774368);
        do {
          invalidInstructionException();
        } while( true );
      }
      FUN_1806a1521(lVar1);
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  FUN_1806a1730("capacity overflow",0x11,&PTR_s_C__Users_VssAdministrator__cargo_180774408);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a6ab0 name=FUN_1806a6ab0 */

void FUN_1806a6ab0(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 uStack_48;
  longlong lStack_40;
  
  uVar1 = param_1[0x19];
  uVar5 = uVar1;
  if ((uVar1 < 9) || (uVar5 = param_1[1], uVar5 != 0xffffffffffffffff)) {
    lVar2 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar3 = 0xffffffffffffffff >> (~(byte)lVar2 & 0x3f);
    if (uVar5 == 0) {
      uVar3 = 0;
    }
    if (uVar3 != 0xffffffffffffffff) {
      uVar5 = uVar3 + 1;
      bVar9 = uVar1 < 9;
      uVar8 = param_1[1];
      if (bVar9) {
        uVar8 = uVar1;
      }
      puVar6 = (undefined8 *)param_1[2];
      if (bVar9) {
        puVar6 = param_1 + 1;
      }
      uVar7 = 8;
      if (!bVar9) {
        uVar7 = uVar1;
      }
      if (uVar5 < uVar8) {
        FUN_1806a19d0(&DAT_180774458,0x20,&PTR_s_C__Users_VssAdministrator__cargo_180774478);
        do {
          invalidInstructionException();
        } while( true );
      }
      if (uVar3 < 8) {
        if (8 < uVar1) {
          *param_1 = 0;
          FUN_180691e40(param_1 + 1,puVar6,uVar8 * 0x18);
          param_1[0x19] = uVar8;
          lStack_40 = uVar7 * 0x18;
          if (0x555555555555555 < uVar1) {
            uStack_48 = 0;
            FUN_1806a1790("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_48,
                          &DAT_1807743b8,&PTR_s_C__Users_VssAdministrator__cargo_180774338);
            do {
              invalidInstructionException();
            } while( true );
          }
          thunk_FUN_1803e4c80(puVar6,lStack_40,8);
          return;
        }
      }
      else if (uVar5 != uVar7) {
        if (0x555555555555554 < uVar3) {
LAB_1806a6bd5:
          FUN_1806a19d0("capacity overflow",0x11,&PTR_s_C__Users_VssAdministrator__cargo_180774368);
          do {
            invalidInstructionException();
          } while( true );
        }
        lVar2 = uVar5 * 0x18;
        if (uVar1 < 9) {
          FUN_180339d20();
          lVar4 = thunk_FUN_1803e4c20(lVar2,8);
          if (lVar4 == 0) {
LAB_1806a6cea:
            FUN_1806a1521(8,lVar2);
            do {
              invalidInstructionException();
            } while( true );
          }
          FUN_180691e40(lVar4,puVar6,uVar8 * 0x18);
        }
        else {
          if (0x555555555555555 < uVar1) goto LAB_1806a6bd5;
          lVar4 = thunk_FUN_1803e4cc0(puVar6,uVar7 * 0x18,8,lVar2);
          if (lVar4 == 0) goto LAB_1806a6cea;
        }
        *param_1 = 1;
        param_1[1] = uVar8;
        param_1[2] = lVar4;
        param_1[0x19] = uVar5;
      }
      return;
    }
  }
  FUN_1806a1730("capacity overflow",0x11,&PTR_s_C__Users_VssAdministrator__cargo_180774408);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a6d00 name=FUN_1806a6d00 */

void FUN_1806a6d00(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 uStack_48;
  ulonglong uStack_40;
  
  uVar1 = param_1[0x77];
  uVar4 = uVar1;
  if ((uVar1 < 0x3c) || (uVar4 = param_1[1], uVar4 != 0xffffffffffffffff)) {
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar2 = 0xffffffffffffffff >> (~(byte)lVar3 & 0x3f);
    if (uVar4 == 0) {
      uVar2 = 0;
    }
    if (uVar2 != 0xffffffffffffffff) {
      uVar4 = uVar2 + 1;
      bVar9 = uVar1 < 0x3c;
      uVar8 = param_1[1];
      if (bVar9) {
        uVar8 = uVar1;
      }
      puVar6 = (undefined8 *)param_1[2];
      if (bVar9) {
        puVar6 = param_1 + 1;
      }
      uVar5 = 0x3b;
      if (!bVar9) {
        uVar5 = uVar1;
      }
      if (uVar4 < uVar8) {
        FUN_1806a19d0(&DAT_180774458,0x20,&PTR_s_C__Users_VssAdministrator__cargo_180774478);
        do {
          invalidInstructionException();
        } while( true );
      }
      if (uVar2 < 0x3b) {
        if (0x3b < uVar1) {
          *param_1 = 0;
          FUN_180691e40(param_1 + 1,puVar6);
          param_1[0x77] = uVar8;
          uStack_40 = uVar5 << 4;
          if (uVar1 >> 0x3c != 0 || 0x7ffffffffffffff8 < uStack_40) {
            uStack_48 = 0;
            FUN_1806a1790("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_48,
                          &DAT_1807743b8,&PTR_s_C__Users_VssAdministrator__cargo_180774338);
            do {
              invalidInstructionException();
            } while( true );
          }
          thunk_FUN_1803e4c80(puVar6,uStack_40,8);
          return;
        }
      }
      else if (uVar4 != uVar5) {
        uVar7 = uVar4 * 0x10;
        if (0x7ffffffffffffff8 < uVar7 || 0xffffffffffffffe < uVar2) {
LAB_1806a6e40:
          FUN_1806a19d0("capacity overflow",0x11,&PTR_s_C__Users_VssAdministrator__cargo_180774368);
          do {
            invalidInstructionException();
          } while( true );
        }
        if (uVar1 < 0x3c) {
          FUN_180339d20();
          lVar3 = thunk_FUN_1803e4c20(uVar7,8);
          if (lVar3 == 0) {
LAB_1806a6f4b:
            FUN_1806a1521(8,uVar7);
            do {
              invalidInstructionException();
            } while( true );
          }
          FUN_180691e40(lVar3,puVar6,uVar8 << 4);
        }
        else {
          if (uVar1 >> 0x3c != 0 || 0x7ffffffffffffff8 < uVar5 << 4) goto LAB_1806a6e40;
          lVar3 = thunk_FUN_1803e4cc0(puVar6,uVar5 << 4,8,uVar7);
          if (lVar3 == 0) goto LAB_1806a6f4b;
        }
        *param_1 = 1;
        param_1[1] = uVar8;
        param_1[2] = lVar3;
        param_1[0x77] = uVar4;
      }
      return;
    }
  }
  FUN_1806a1730("capacity overflow",0x11,&PTR_s_C__Users_VssAdministrator__cargo_180774408);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a6f60 name=FUN_1806a6f60 */

void FUN_1806a6f60(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 0xf0);
  if ((uVar3 < 0x3c) || (uVar3 = *(ulonglong *)(param_1 + 8), uVar3 != 0xffffffffffffffff)) {
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar2 = 0xffffffffffffffff >> (~(byte)lVar1 & 0x3f);
    if (uVar3 == 0) {
      uVar2 = 0;
    }
    if (uVar2 != 0xffffffffffffffff) {
      lVar1 = FUN_1804dc3c0(param_1,uVar2 + 1);
      if (lVar1 == -1) {
        return;
      }
      if (lVar1 == 0) {
        FUN_1806a19d0("capacity overflow",0x11,&PTR_s_C__Users_VssAdministrator__cargo_180774368);
        do {
          invalidInstructionException();
        } while( true );
      }
      FUN_1806a1521(lVar1);
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  FUN_1806a1730("capacity overflow",0x11,&PTR_s_C__Users_VssAdministrator__cargo_180774408);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a7000 name=FUN_1806a7000 */

void FUN_1806a7000(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 0x3f8);
  if ((uVar3 < 0xfe) || (uVar3 = *(ulonglong *)(param_1 + 8), uVar3 != 0xffffffffffffffff)) {
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar2 = 0xffffffffffffffff >> (~(byte)lVar1 & 0x3f);
    if (uVar3 == 0) {
      uVar2 = 0;
    }
    if (uVar2 != 0xffffffffffffffff) {
      lVar1 = FUN_1804dc5d0(param_1,uVar2 + 1);
      if (lVar1 == -1) {
        return;
      }
      if (lVar1 == 0) {
        FUN_1806a19d0("capacity overflow",0x11,&PTR_s_C__Users_VssAdministrator__cargo_180774368);
        do {
          invalidInstructionException();
        } while( true );
      }
      FUN_1806a1521(lVar1);
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  FUN_1806a1730("capacity overflow",0x11,&PTR_s_C__Users_VssAdministrator__cargo_180774408);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1806a76b0 name=KERNEL32.DLL::GetSystemInfo */

void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0001806a76b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}


/* address=1806a76c0 name=ADVAPI32.DLL::SystemFunction036 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BOOLEAN SystemFunction036(PVOID RandomBuffer,ULONG RandomBufferLength)

{
  BOOLEAN BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001806a76c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemFunction036(RandomBuffer,RandomBufferLength);
  return BVar1;
}


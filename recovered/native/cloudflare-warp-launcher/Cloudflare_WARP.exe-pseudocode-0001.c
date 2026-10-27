/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=140001020 name=FUN_140001020 */

void * FUN_140001020(__uint64 param_1)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_1 < 0x1000) {
    pvVar2 = operator_new(param_1);
    return pvVar2;
  }
  if (param_1 + 0x27 <= param_1) {
    FUN_140001890();
    pcVar1 = (code *)swi(3);
    pvVar2 = (void *)(*pcVar1)();
    return pvVar2;
  }
  pvVar2 = operator_new(param_1 + 0x27);
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
  *(void **)((longlong)pvVar3 + -8) = pvVar2;
  return pvVar3;
}


/* address=140001090 name=FUN_140001090 */

undefined (*) [16] FUN_140001090(undefined (*param_1) [16],undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  void *_Dst;
  undefined (*pauVar7) [16];
  ulonglong uVar8;
  
  *param_1 = ZEXT816(0);
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar1 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (uVar1 < 0x8000000000000000) {
    if (uVar1 < 0x10) {
      *(ulonglong *)param_1[1] = uVar1;
      *(undefined8 *)(param_1[1] + 8) = 0xf;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)*param_1 = *(undefined4 *)param_2;
      *(undefined4 *)(*param_1 + 4) = uVar3;
      *(undefined4 *)(*param_1 + 8) = uVar4;
      *(undefined4 *)(*param_1 + 0xc) = uVar5;
    }
    else {
      uVar6 = uVar1 | 0xf;
      uVar8 = 0x7fffffffffffffff;
      if ((uVar6 < 0x8000000000000000) && (uVar8 = uVar6, uVar6 < 0x16)) {
        uVar8 = 0x16;
      }
      _Dst = FUN_140001020(uVar8 + 1);
      *(void **)*param_1 = _Dst;
      *(ulonglong *)param_1[1] = uVar1;
      *(ulonglong *)(param_1[1] + 8) = uVar8;
      memcpy(_Dst,param_2,uVar1 + 1);
    }
    return param_1;
  }
  FUN_140001a50();
  pcVar2 = (code *)swi(3);
  pauVar7 = (undefined (*) [16])(*pcVar2)();
  return pauVar7;
}


/* address=140001150 name=FUN_140001150 */

undefined (*) [16] FUN_140001150(undefined (*param_1) [16],undefined8 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  void *_Dst;
  undefined (*pauVar7) [16];
  ulonglong uVar8;
  
  *param_1 = ZEXT816(0);
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
    FUN_140001a50();
    pcVar2 = (code *)swi(3);
    pauVar7 = (undefined (*) [16])(*pcVar2)();
    return pauVar7;
  }
  if (uVar1 < 8) {
    *(ulonglong *)param_1[1] = uVar1;
    *(undefined8 *)(param_1[1] + 8) = 7;
    uVar3 = *(undefined4 *)((longlong)param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)*param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(*param_1 + 4) = uVar3;
    *(undefined4 *)(*param_1 + 8) = uVar4;
    *(undefined4 *)(*param_1 + 0xc) = uVar5;
  }
  else {
    uVar6 = uVar1 | 7;
    if (uVar6 < 0x7fffffffffffffff) {
      if (uVar6 < 10) {
        uVar6 = 10;
      }
      uVar8 = uVar6 + 1;
      if (0x7fffffffffffffff < uVar8) {
        FUN_140001890();
        pcVar2 = (code *)swi(3);
        pauVar7 = (undefined (*) [16])(*pcVar2)();
        return pauVar7;
      }
    }
    else {
      uVar8 = 0x7fffffffffffffff;
      uVar6 = 0x7ffffffffffffffe;
    }
    _Dst = FUN_140001020(uVar8 * 2);
    *(void **)*param_1 = _Dst;
    *(ulonglong *)param_1[1] = uVar1;
    *(ulonglong *)(param_1[1] + 8) = uVar6;
    memcpy(_Dst,param_2,uVar1 * 2 + 2);
  }
  return param_1;
}


/* address=140001240 name=FUN_140001240 */

undefined8 * FUN_140001240(undefined8 *param_1,undefined8 *param_2)

{
  undefined (**ppauVar1) [16];
  code *pcVar2;
  undefined (*pauVar3) [16];
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  FUN_1400062c0(param_1);
  *param_1 = FlutterWindow::vftable;
  FUN_140001150((undefined (*) [16])(param_1 + 4),param_2);
  FUN_140001150((undefined (*) [16])(param_1 + 8),param_2 + 4);
  FUN_140001150((undefined (*) [16])(param_1 + 0xc),param_2 + 8);
  FUN_140001090((undefined (*) [16])(param_1 + 0x10),param_2 + 0xc);
  ppauVar1 = (undefined (**) [16])(param_1 + 0x14);
  *ppauVar1 = (undefined (*) [16])0x0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar5 = (longlong)(param_2[0x11] - param_2[0x10]) >> 5;
  if (uVar5 != 0) {
    if (0x7ffffffffffffff < uVar5) {
      FUN_140001a70();
      pcVar2 = (code *)swi(3);
      puVar4 = (undefined8 *)(*pcVar2)();
      return puVar4;
    }
    pauVar3 = (undefined (*) [16])FUN_140001020(uVar5 * 0x20);
    *ppauVar1 = pauVar3;
    param_1[0x15] = pauVar3;
    param_1[0x16] = pauVar3 + uVar5 * 2;
    pauVar3 = *ppauVar1;
    puVar4 = (undefined8 *)param_2[0x11];
    for (puVar6 = (undefined8 *)param_2[0x10]; puVar6 != puVar4; puVar6 = puVar6 + 4) {
      FUN_140001090(pauVar3,puVar6);
      pauVar3 = pauVar3 + 2;
    }
    param_1[0x15] = pauVar3;
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_1[0x18] = 0;
  return param_1;
}


/* address=1400013b0 name=FUN_1400013b0 */

undefined8 * FUN_1400013b0(undefined8 *param_1)

{
  param_1[1] = "bad array new length";
  *param_1 = stdext::bad_array_new_length::vftable;
  return param_1;
}


/* address=1400013e0 name=FUN_1400013e0 */

void FUN_1400013e0(undefined8 *param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  
  ppvVar1 = (void **)param_1[1];
  for (ppvVar2 = (void **)*param_1; ppvVar2 != ppvVar1; ppvVar2 = ppvVar2 + 4) {
    FUN_140001950(ppvVar2);
  }
  return;
}


/* address=140001420 name=thunk_FUN_140001950 */

void thunk_FUN_140001950(void **param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if ((void *)0xf < param_1[3]) {
    pvVar1 = *param_1;
    _Memory = pvVar1;
    if ((0xfff < (longlong)param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  param_1[2] = (void *)0x0;
  param_1[3] = (void *)0xf;
  *(undefined *)param_1 = 0;
  return;
}


/* address=140001440 name=FUN_140001440 */

void FUN_140001440(longlong *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = (longlong)FlutterWindow::vftable;
  puVar1 = (undefined8 *)param_1[0x18];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1400018b0((void **)(param_1 + 0x14));
  FUN_140001950((void **)(param_1 + 0x10));
  FUN_1400019d0((void **)(param_1 + 0xc));
  FUN_1400019d0((void **)(param_1 + 8));
  FUN_1400019d0((void **)(param_1 + 4));
  FUN_1400062f0(param_1);
  return;
}


/* address=1400014d0 name=FUN_1400014d0 */

longlong * FUN_1400014d0(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = (longlong)FlutterWindow::vftable;
  puVar1 = (undefined8 *)param_1[0x18];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1400018b0((void **)(param_1 + 0x14));
  FUN_140001950((void **)(param_1 + 0x10));
  FUN_1400019d0((void **)(param_1 + 0xc));
  FUN_1400019d0((void **)(param_1 + 8));
  FUN_1400019d0((void **)(param_1 + 4));
  FUN_1400062f0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


/* address=140001570 name=FUN_140001570 */

undefined8 * FUN_140001570(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = stdext::exception::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


/* address=1400015a0 name=FUN_1400015a0 */

undefined8 FUN_1400015a0(longlong *param_1,HWND param_2,uint param_3,ulonglong param_4,int *param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 local_18;
  char local_10;
  
  if (param_3 == 0x4b50) {
    uVar2 = SystemRecoveryPluginGetRecoveryToken();
    if (param_4 == uVar2) {
      OutputDebugStringA("[FlutterWindow] WM_GPU_ERROR_DETECTED received - triggering restart\n");
      SystemRecoveryPluginPerformRestart();
      return 0;
    }
  }
  else if (param_3 == 0x218) {
    OutputDebugStringA("[FlutterWindow] WM_POWERBROADCAST received in MessageHandler\n");
    cVar1 = FUN_1400043d0(param_4);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  if ((param_1[0x18] == 0) ||
     (FUN_140007aa0(param_1[0x18],(undefined4 *)&local_18,param_2,param_3,param_4,param_5),
     local_10 == '\0')) {
    if (param_3 == 0x1d) {
      FUN_1400077f0(*(longlong *)(param_1[0x18] + 0x10));
    }
    local_18 = FUN_140006750(param_1,param_2,param_3,param_4,param_5);
  }
  return local_18;
}


/* address=1400016a0 name=FUN_1400016a0 */

void FUN_1400016a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  HWND pHVar5;
  undefined8 uVar6;
  undefined auStack_48 [32];
  undefined8 *local_28;
  tagRECT local_20;
  ulonglong local_10;
  
  local_10 = DAT_140019080 ^ (ulonglong)auStack_48;
  puVar4 = (undefined8 *)0x0;
  cVar3 = FUN_1400068c0();
  if (cVar3 != '\0') {
    FUN_140006720(param_1,&local_20);
    local_28 = (undefined8 *)operator_new(0x28);
    if (local_28 != (undefined8 *)0x0) {
      puVar4 = FUN_140007800(local_28,local_20.right - local_20.left,local_20.bottom - local_20.top,
                             (undefined8 *)(param_1 + 0x20));
    }
    puVar1 = *(undefined8 **)(param_1 + 0xc0);
    *(undefined8 **)(param_1 + 0xc0) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x10);
    if ((plVar2 != (longlong *)0x0) && (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x20) != 0)) {
      FUN_140006a60(plVar2);
      pHVar5 = (HWND)FlutterDesktopViewGetHWND
                               (*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x20) + 8));
      uVar6 = FUN_140006740(param_1);
      FUN_140004ce0(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x10),uVar6);
      uVar6 = FUN_140006740(param_1);
      SystemRecoveryPluginSetWindowHandle(uVar6);
      FUN_1400068f0(param_1,pHVar5);
      FUN_140007a90(*(longlong *)(param_1 + 0xc0));
    }
  }
  FUN_14000d8b0(local_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=1400017e0 name=FUN_1400017e0 */

void FUN_1400017e0(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_140005730();
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  _guard_check_icall();
  return;
}


/* address=140001820 name=FUN_140001820 */

void FUN_140001820(void)

{
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


/* address=140001840 name=_guard_check_icall */

void _guard_check_icall(void)

{
  return;
}


/* address=140001850 name=FUN_140001850 */

void FUN_140001850(longlong *param_1)

{
  if (*(code **)_Raise_handler_exref != (code *)0x0) {
    (**(code **)_Raise_handler_exref)();
  }
  (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


/* address=140001890 name=FUN_140001890 */

void FUN_140001890(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 local_18 [3];
  
  plVar2 = FUN_1400013b0(local_18);
  FUN_140001850(plVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* address=1400018b0 name=FUN_1400018b0 */

void FUN_1400018b0(void **param_1)

{
  void **ppvVar1;
  void *pvVar2;
  void *_Memory;
  void **ppvVar3;
  
  ppvVar3 = (void **)*param_1;
  if (ppvVar3 != (void **)0x0) {
    ppvVar1 = (void **)param_1[1];
    for (; ppvVar3 != ppvVar1; ppvVar3 = ppvVar3 + 4) {
      FUN_140001950(ppvVar3);
    }
    pvVar2 = *param_1;
    _Memory = pvVar2;
    if ((0xfff < ((longlong)param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *param_1 = (void *)0x0;
    param_1[1] = (void *)0x0;
    param_1[2] = (void *)0x0;
  }
  return;
}


/* address=140001950 name=FUN_140001950 */

void FUN_140001950(void **param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if ((void *)0xf < param_1[3]) {
    pvVar1 = *param_1;
    _Memory = pvVar1;
    if ((0xfff < (longlong)param_1[3] + 1U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  param_1[2] = (void *)0x0;
  param_1[3] = (void *)0xf;
  *(undefined *)param_1 = 0;
  return;
}


/* address=1400019d0 name=FUN_1400019d0 */

void FUN_1400019d0(void **param_1)

{
  void *pvVar1;
  void *_Memory;
  
  if ((void *)0x7 < param_1[3]) {
    pvVar1 = *param_1;
    _Memory = pvVar1;
    if ((0xfff < (longlong)param_1[3] * 2 + 2U) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  param_1[3] = (void *)0x7;
  param_1[2] = (void *)0x0;
  *(undefined2 *)param_1 = 0;
  return;
}


/* address=140001a50 name=FUN_140001a50 */

void FUN_140001a50(void)

{
  code *pcVar1;
  
  std::_Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* address=140001a70 name=FUN_140001a70 */

void FUN_140001a70(void)

{
  code *pcVar1;
  
  std::_Xlength_error("vector too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* address=140001a90 name=FUN_140001a90 */

char * FUN_140001a90(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}


/* address=140001ab0 name=FUN_140001ab0 */

undefined (*) [16] FUN_140001ab0(undefined (*param_1) [16],undefined8 *param_2,wchar_t *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  size_t sVar4;
  undefined (*pauVar5) [16];
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar2 = param_2[2];
  sVar4 = wcslen(param_3);
  if (0x7ffffffffffffffeU - lVar2 < sVar4) {
    FUN_140001a50();
    pcVar3 = (code *)swi(3);
    pauVar5 = (undefined (*) [16])(*pcVar3)();
    return pauVar5;
  }
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar1 = sVar4 + lVar2;
  *param_1 = ZEXT816(0);
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  uVar7 = 7;
  pauVar5 = param_1;
  if (7 < uVar1) {
    uVar7 = uVar1 | 7;
    if (uVar7 < 0x7fffffffffffffff) {
      if (uVar7 < 10) {
        uVar7 = 10;
      }
      uVar6 = uVar7 + 1;
      if (0x7fffffffffffffff < uVar6) {
        FUN_140001890();
        pcVar3 = (code *)swi(3);
        pauVar5 = (undefined (*) [16])(*pcVar3)();
        return pauVar5;
      }
    }
    else {
      uVar7 = 0x7ffffffffffffffe;
      uVar6 = 0x7fffffffffffffff;
    }
    pauVar5 = (undefined (*) [16])FUN_140001020(uVar6 * 2);
    *(undefined (**) [16])*param_1 = pauVar5;
  }
  *(ulonglong *)(param_1[1] + 8) = uVar7;
  *(ulonglong *)param_1[1] = uVar1;
  memcpy(pauVar5,param_2,lVar2 * 2);
  memcpy(*pauVar5 + lVar2 * 2,param_3,sVar4 * 2);
  *(undefined2 *)(*pauVar5 + uVar1 * 2) = 0;
  return param_1;
}


/* address=140001bd0 name=FUN_140001bd0 */

void FUN_140001bd0(void **param_1,void *param_2,void *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *_Dst;
  ulonglong uVar3;
  
  if ((void *)0x7ffffffffffffffe < param_3) {
    FUN_140001a50();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 < (void *)0x8) {
    param_1[2] = param_3;
    param_1[3] = (void *)0x7;
    memcpy(param_1,param_2,(longlong)param_3 * 2);
    *(undefined2 *)((longlong)param_3 * 2 + (longlong)param_1) = 0;
  }
  else {
    pvVar2 = (void *)((ulonglong)param_3 | 7);
    if (pvVar2 < (void *)0x7fffffffffffffff) {
      if (pvVar2 < (void *)0xa) {
        pvVar2 = (void *)0xa;
      }
      uVar3 = (longlong)pvVar2 + 1;
      if (0x7fffffffffffffff < uVar3) {
        FUN_140001890();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      uVar3 = 0x7fffffffffffffff;
      pvVar2 = (void *)0x7ffffffffffffffe;
    }
    _Dst = FUN_140001020(uVar3 * 2);
    param_1[2] = param_3;
    *param_1 = _Dst;
    param_1[3] = pvVar2;
    memcpy(_Dst,param_2,(longlong)param_3 * 2);
    *(undefined2 *)((longlong)param_3 * 2 + (longlong)_Dst) = 0;
  }
  return;
}


/* address=140001cc0 name=FUN_140001cc0 */

void FUN_140001cc0(undefined (*param_1) [16],undefined8 *param_2)

{
  undefined (*pauVar1) [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  void *pvVar7;
  void *pvVar8;
  undefined auStackY_88 [32];
  void *local_50;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_140019080 ^ (ulonglong)auStackY_88;
  *param_1 = ZEXT816(0);
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 7;
  *(undefined2 *)*param_1 = 0;
  pauVar6 = param_1 + 2;
  *pauVar6 = ZEXT816(0);
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)(param_1[3] + 8) = 7;
  *(undefined2 *)*pauVar6 = 0;
  pauVar1 = param_1 + 4;
  *pauVar1 = ZEXT816(0);
  *(undefined8 *)param_1[5] = 0;
  *(undefined8 *)(param_1[5] + 8) = 7;
  *(undefined2 *)*pauVar1 = 0;
  param_1[6] = ZEXT816(0);
  *(undefined8 *)param_1[7] = 0;
  *(undefined8 *)(param_1[7] + 8) = 0xf;
  param_1[6][0] = 0;
  *(undefined8 *)param_1[8] = 0;
  *(undefined8 *)(param_1[8] + 8) = 0;
  *(undefined8 *)param_1[9] = 0;
  *(undefined8 *)(param_1[9] + 8) = 0;
  pauVar5 = FUN_140001ab0((undefined (*) [16])&local_50,param_2,L"\\flutter_assets");
  if (param_1 != pauVar5) {
    if (7 < *(ulonglong *)(param_1[1] + 8)) {
      pvVar8 = *(void **)*param_1;
      pvVar7 = pvVar8;
      if ((0xfff < *(ulonglong *)(param_1[1] + 8) * 2 + 2) &&
         (pvVar7 = *(void **)((longlong)pvVar8 + -8),
         0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar7)))) goto LAB_140001e1e;
      free(pvVar7);
    }
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 7;
    *(undefined2 *)*param_1 = 0;
    uVar2 = *(undefined4 *)(*pauVar5 + 4);
    uVar3 = *(undefined4 *)(*pauVar5 + 8);
    uVar4 = *(undefined4 *)(*pauVar5 + 0xc);
    *(undefined4 *)*param_1 = *(undefined4 *)*pauVar5;
    *(undefined4 *)(*param_1 + 4) = uVar2;
    *(undefined4 *)(*param_1 + 8) = uVar3;
    *(undefined4 *)(*param_1 + 0xc) = uVar4;
    uVar2 = *(undefined4 *)(pauVar5[1] + 4);
    uVar3 = *(undefined4 *)(pauVar5[1] + 8);
    uVar4 = *(undefined4 *)(pauVar5[1] + 0xc);
    *(undefined4 *)param_1[1] = *(undefined4 *)pauVar5[1];
    *(undefined4 *)(param_1[1] + 4) = uVar2;
    *(undefined4 *)(param_1[1] + 8) = uVar3;
    *(undefined4 *)(param_1[1] + 0xc) = uVar4;
    *(undefined8 *)pauVar5[1] = 0;
    *(undefined8 *)(pauVar5[1] + 8) = 7;
    *(undefined2 *)*pauVar5 = 0;
  }
  if (7 < local_38) {
    pvVar8 = local_50;
    if ((0xfff < local_38 * 2 + 2) &&
       (pvVar8 = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pvVar8)))) {
LAB_140001e1e:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar8);
  }
  pauVar5 = FUN_140001ab0((undefined (*) [16])&local_50,param_2,L"\\icudtl.dat");
  if (pauVar6 != pauVar5) {
    if (7 < *(ulonglong *)(param_1[3] + 8)) {
      pvVar8 = *(void **)*pauVar6;
      pvVar7 = pvVar8;
      if ((0xfff < *(ulonglong *)(param_1[3] + 8) * 2 + 2) &&
         (pvVar7 = *(void **)((longlong)pvVar8 + -8),
         0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar7)))) goto LAB_140001ef9;
      free(pvVar7);
    }
    *(undefined8 *)param_1[3] = 0;
    *(undefined8 *)(param_1[3] + 8) = 7;
    *(undefined2 *)*pauVar6 = 0;
    uVar2 = *(undefined4 *)(*pauVar5 + 4);
    uVar3 = *(undefined4 *)(*pauVar5 + 8);
    uVar4 = *(undefined4 *)(*pauVar5 + 0xc);
    *(undefined4 *)*pauVar6 = *(undefined4 *)*pauVar5;
    *(undefined4 *)(param_1[2] + 4) = uVar2;
    *(undefined4 *)(param_1[2] + 8) = uVar3;
    *(undefined4 *)(param_1[2] + 0xc) = uVar4;
    uVar2 = *(undefined4 *)(pauVar5[1] + 4);
    uVar3 = *(undefined4 *)(pauVar5[1] + 8);
    uVar4 = *(undefined4 *)(pauVar5[1] + 0xc);
    *(undefined4 *)param_1[3] = *(undefined4 *)pauVar5[1];
    *(undefined4 *)(param_1[3] + 4) = uVar2;
    *(undefined4 *)(param_1[3] + 8) = uVar3;
    *(undefined4 *)(param_1[3] + 0xc) = uVar4;
    *(undefined8 *)pauVar5[1] = 0;
    *(undefined8 *)(pauVar5[1] + 8) = 7;
    *(undefined2 *)*pauVar5 = 0;
  }
  if (7 < local_38) {
    pvVar8 = local_50;
    if ((0xfff < local_38 * 2 + 2) &&
       (pvVar8 = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pvVar8)))) {
LAB_140001ef9:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar8);
  }
  pauVar6 = FUN_140001ab0((undefined (*) [16])&local_50,param_2,L"\\app.so");
  if (pauVar1 != pauVar6) {
    if (7 < *(ulonglong *)(param_1[5] + 8)) {
      pvVar8 = *(void **)*pauVar1;
      pvVar7 = pvVar8;
      if ((0xfff < *(ulonglong *)(param_1[5] + 8) * 2 + 2) &&
         (pvVar7 = *(void **)((longlong)pvVar8 + -8),
         0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar7)))) goto LAB_140001fd2;
      free(pvVar7);
    }
    *(undefined8 *)param_1[5] = 0;
    *(undefined8 *)(param_1[5] + 8) = 7;
    *(undefined2 *)*pauVar1 = 0;
    uVar2 = *(undefined4 *)(*pauVar6 + 4);
    uVar3 = *(undefined4 *)(*pauVar6 + 8);
    uVar4 = *(undefined4 *)(*pauVar6 + 0xc);
    *(undefined4 *)*pauVar1 = *(undefined4 *)*pauVar6;
    *(undefined4 *)(param_1[4] + 4) = uVar2;
    *(undefined4 *)(param_1[4] + 8) = uVar3;
    *(undefined4 *)(param_1[4] + 0xc) = uVar4;
    uVar2 = *(undefined4 *)(pauVar6[1] + 4);
    uVar3 = *(undefined4 *)(pauVar6[1] + 8);
    uVar4 = *(undefined4 *)(pauVar6[1] + 0xc);
    *(undefined4 *)param_1[5] = *(undefined4 *)pauVar6[1];
    *(undefined4 *)(param_1[5] + 4) = uVar2;
    *(undefined4 *)(param_1[5] + 8) = uVar3;
    *(undefined4 *)(param_1[5] + 0xc) = uVar4;
    *(undefined8 *)pauVar6[1] = 0;
    *(undefined8 *)(pauVar6[1] + 8) = 7;
    *(undefined2 *)*pauVar6 = 0;
  }
  if (7 < local_38) {
    pvVar8 = local_50;
    if ((0xfff < local_38 * 2 + 2) &&
       (pvVar8 = *(void **)((longlong)local_50 + -8),
       0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pvVar8)))) {
LAB_140001fd2:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar8);
  }
  FUN_14000d8b0(local_30 ^ (ulonglong)auStackY_88);
  return;
}


/* address=140002030 name=FUN_140002030 */

void FUN_140002030(void)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  HWND hWnd;
  void *pvVar7;
  LPCWSTR lpWindowName;
  void **ppvVar8;
  void **ppvVar9;
  undefined auStackY_288 [32];
  undefined local_248 [16];
  longlong local_238;
  int local_230;
  undefined4 local_22c;
  POINT local_228;
  tagMSG local_220;
  undefined local_1f0 [16];
  undefined local_1e0 [16];
  undefined local_1d0 [8];
  UINT UStack_1c8;
  undefined local_1bc [16];
  undefined8 local_1ac;
  void *local_198 [4];
  void *local_178 [4];
  void *local_158 [4];
  void *local_138 [4];
  void *local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_f8 [26];
  ulonglong local_28;
  
  local_28 = DAT_140019080 ^ (ulonglong)auStackY_288;
  local_1f0 = ZEXT816(0);
  local_1e0 = ZEXT816(0);
  FUN_140001bd0((void **)local_1f0,L"Cloudflare One Client",(void *)0x15);
  lpWindowName = (LPCWSTR)local_1f0;
  if (7 < (ulonglong)local_1e0._8_8_) {
    lpWindowName = (LPCWSTR)local_1f0._0_8_;
  }
  hWnd = FindWindowW(L"FLUTTER_RUNNER_WIN32_WINDOW",lpWindowName);
  if (hWnd == (HWND)0x0) {
    bVar1 = false;
  }
  else {
    SendAppLink(hWnd);
    local_1d0._0_4_ = 0x2c;
    local_1ac._0_4_ = 0;
    local_1ac._4_4_ = 0;
    unique0x100001b3 = ZEXT816(0);
    local_1bc = ZEXT816(0);
    GetWindowPlacement(hWnd,(WINDOWPLACEMENT *)local_1d0);
    if (UStack_1c8 == 2) {
      iVar6 = 9;
    }
    else if (UStack_1c8 == 3) {
      iVar6 = 3;
    }
    else {
      iVar6 = 1;
    }
    ShowWindow(hWnd,iVar6);
    SetWindowPos((HWND)0x0,(HWND)0x0,0,0,0,0,0x43);
    SetForegroundWindow(hWnd);
    bVar1 = true;
  }
  if (7 < (ulonglong)local_1e0._8_8_) {
    pvVar7 = (void *)local_1f0._0_8_;
    if ((0xfff < local_1e0._8_8_ * 2 + 2U) &&
       (pvVar7 = *(void **)(local_1f0._0_8_ + -8),
       0x1f < (ulonglong)(local_1f0._0_8_ + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar7);
  }
  if (!bVar1) {
    BVar5 = AttachConsole(0xffffffff);
    if ((BVar5 == 0) && (BVar5 = IsDebuggerPresent(), BVar5 != 0)) {
      FUN_140005b10();
    }
    CoInitializeEx((LPVOID)0x0,2);
    local_1f0 = ZEXT816(0);
    local_1e0 = ZEXT816(0);
    FUN_140001bd0((void **)local_1f0,L"data",(void *)0x4);
    FUN_140001cc0((undefined (*) [16])local_198,(undefined8 *)local_1f0);
    if (7 < (ulonglong)local_1e0._8_8_) {
      pvVar7 = (void *)local_1f0._0_8_;
      if ((0xfff < local_1e0._8_8_ * 2 + 2U) &&
         (pvVar7 = *(void **)(local_1f0._0_8_ + -8),
         0x1f < (ulonglong)(local_1f0._0_8_ + (-8 - (longlong)pvVar7)))) goto LAB_140002419;
      free(pvVar7);
    }
    FUN_140005bd0((undefined8 *)local_248);
    lVar3 = local_238;
    uVar2 = local_248._8_8_;
    pvVar7 = (void *)local_248._0_8_;
    local_238 = 0;
    local_248 = ZEXT816(0);
    FUN_1400018b0(&local_118);
    local_118 = pvVar7;
    local_110 = uVar2;
    local_108 = lVar3;
    FUN_140001240(local_f8,local_198);
    local_228.x = 10;
    local_228.y = 10;
    local_230 = 0x500;
    local_22c = 0x2d0;
    local_1f0 = ZEXT816(0);
    local_1e0 = ZEXT816(0);
    FUN_140001bd0((void **)local_1f0,L"Cloudflare One Client",(void *)0x15);
    cVar4 = FUN_140006430(local_f8,(undefined8 *)local_1f0,&local_228,&local_230);
    if (7 < (ulonglong)local_1e0._8_8_) {
      pvVar7 = (void *)local_1f0._0_8_;
      if ((0xfff < local_1e0._8_8_ * 2 + 2U) &&
         (pvVar7 = *(void **)(local_1f0._0_8_ + -8),
         0x1f < (ulonglong)(local_1f0._0_8_ + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar7);
    }
    if (cVar4 != '\0') {
      FUN_140006980((longlong)local_f8,1);
      iVar6 = GetMessageW(&local_220,(HWND)0x0,0,0);
      while (iVar6 != 0) {
        TranslateMessage(&local_220);
        DispatchMessageW(&local_220);
        iVar6 = GetMessageW(&local_220,(HWND)0x0,0,0);
      }
      CoUninitialize();
    }
    FUN_140001440(local_f8);
    if ((void **)local_248._0_8_ != (void **)0x0) {
      ppvVar9 = (void **)local_248._8_8_;
      ppvVar8 = (void **)local_248._0_8_;
      if (local_248._0_8_ != local_248._8_8_) {
        do {
          FUN_140001950(ppvVar8);
          ppvVar8 = ppvVar8 + 4;
        } while (ppvVar8 != ppvVar9);
      }
      ppvVar9 = (void **)local_248._0_8_;
      if ((0xfff < (local_238 - local_248._0_8_ & 0xffffffffffffffe0U)) &&
         (ppvVar9 = *(void ***)(local_248._0_8_ + -8),
         0x1f < (ulonglong)(local_248._0_8_ + (-8 - (longlong)ppvVar9)))) {
LAB_140002419:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(ppvVar9);
      local_238 = 0;
      local_248 = ZEXT816(0);
    }
    FUN_1400018b0(&local_118);
    FUN_140001950(local_138);
    FUN_1400019d0(local_158);
    FUN_1400019d0(local_178);
    FUN_1400019d0(local_198);
  }
  FUN_14000d8b0(local_28 ^ (ulonglong)auStackY_288);
  return;
}


/* address=1400024b0 name=FUN_1400024b0 */

longlong * FUN_1400024b0(longlong *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  __int64 _Var6;
  longlong *plVar7;
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar8;
  size_t sVar9;
  int iVar10;
  longlong lVar11;
  
  lVar11 = 0;
  iVar10 = 0;
  sVar5 = strlen(param_2);
  _Var6 = std::ios_base::width((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
  if ((0 < _Var6) &&
     (_Var6 = std::ios_base::width
                        ((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1)),
     (longlong)sVar5 < _Var6)) {
    _Var6 = std::ios_base::width((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1))
    ;
    lVar11 = _Var6 - sVar5;
  }
  plVar7 = (longlong *)
           std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  bVar1 = std::ios_base::good((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
  if (bVar1) {
    plVar7 = (longlong *)
             std::basic_ios<char,struct_std::char_traits<char>_>::tie
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
    if ((plVar7 == (longlong *)0x0) || (plVar7 == param_1)) {
      bVar1 = true;
    }
    else {
      std::basic_ostream<char,struct_std::char_traits<char>_>::flush
                ((basic_ostream<char,struct_std::char_traits<char>_> *)plVar7);
      bVar1 = std::ios_base::good((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1)
                                 );
    }
  }
  if (bVar1 == false) {
    iVar10 = 4;
  }
  else {
    uVar3 = std::ios_base::flags((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1))
    ;
    if ((uVar3 & 0x1c0) != 0x40) {
      for (; 0 < lVar11; lVar11 = lVar11 + -1) {
        pbVar8 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,struct_std::char_traits<char>_> *)
                            ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
        cVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                          ((basic_ios<char,struct_std::char_traits<char>_> *)
                           ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
        iVar4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc(pbVar8,cVar2);
        if (iVar4 == -1) goto LAB_14000267e;
      }
    }
    pbVar8 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
    sVar9 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn(pbVar8,param_2,sVar5);
    if (sVar9 == sVar5) {
      for (; 0 < lVar11; lVar11 = lVar11 + -1) {
        pbVar8 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,struct_std::char_traits<char>_> *)
                            ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
        cVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                          ((basic_ios<char,struct_std::char_traits<char>_> *)
                           ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
        iVar4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc(pbVar8,cVar2);
        if (iVar4 == -1) goto LAB_14000267e;
      }
    }
    else {
LAB_14000267e:
      iVar10 = 4;
    }
    std::ios_base::width((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1),0);
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1),iVar10,false);
  std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
            ((basic_ostream<char,struct_std::char_traits<char>_> *)param_1);
  plVar7 = (longlong *)
           std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return param_1;
}


/* address=140002700 name=FUN_140002700 */

void FUN_140002700(void **param_1,void *param_2,void *param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_3 < (void *)0x8000000000000000) {
    if (param_3 < (void *)0x10) {
      param_1[2] = param_3;
      param_1[3] = (void *)0xf;
      memcpy(param_1,param_2,(size_t)param_3);
      *(undefined *)((longlong)param_3 + (longlong)param_1) = 0;
    }
    else {
      pvVar2 = (void *)((ulonglong)param_3 | 0xf);
      pvVar3 = (void *)0x7fffffffffffffff;
      if ((pvVar2 < (void *)0x8000000000000000) && (pvVar3 = pvVar2, pvVar2 < (void *)0x16)) {
        pvVar3 = (void *)0x16;
      }
      pvVar2 = FUN_140001020((longlong)pvVar3 + 1);
      *param_1 = pvVar2;
      param_1[2] = param_3;
      param_1[3] = pvVar3;
      memcpy(pvVar2,param_2,(size_t)param_3);
      *(undefined *)((longlong)pvVar2 + (longlong)param_3) = 0;
    }
    return;
  }
  FUN_140001a50();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* address=1400027c0 name=FUN_1400027c0 */

void FUN_1400027c0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1400027c0(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_140003290((longlong)(param_3 + 0xd));
    FUN_140003290((longlong)(param_3 + 4));
    free(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}


/* address=140002850 name=FUN_140002850 */

longlong * FUN_140002850(longlong *param_1,char *param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  __int64 _Var5;
  ulonglong uVar6;
  longlong *plVar7;
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar8;
  int iVar9;
  longlong lVar10;
  
  lVar10 = 0;
  iVar9 = 0;
  _Var5 = std::ios_base::width((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
  if ((0 < _Var5) &&
     (uVar6 = std::ios_base::width
                        ((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1)),
     param_3 < uVar6)) {
    _Var5 = std::ios_base::width((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1))
    ;
    lVar10 = _Var5 - param_3;
  }
  plVar7 = (longlong *)
           std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  bVar1 = std::ios_base::good((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
  if (bVar1) {
    plVar7 = (longlong *)
             std::basic_ios<char,struct_std::char_traits<char>_>::tie
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
    if ((plVar7 == (longlong *)0x0) || (plVar7 == param_1)) {
      bVar1 = true;
    }
    else {
      std::basic_ostream<char,struct_std::char_traits<char>_>::flush
                ((basic_ostream<char,struct_std::char_traits<char>_> *)plVar7);
      bVar1 = std::ios_base::good((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1)
                                 );
    }
  }
  if (bVar1 == false) {
    iVar9 = 4;
  }
  else {
    uVar3 = std::ios_base::flags((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1))
    ;
    if ((uVar3 & 0x1c0) != 0x40) {
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
        pbVar8 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,struct_std::char_traits<char>_> *)
                            ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
        cVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                          ((basic_ios<char,struct_std::char_traits<char>_> *)
                           ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
        iVar4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc(pbVar8,cVar2);
        if (iVar4 == -1) {
          iVar9 = 4;
          goto joined_r0x0001400029dd;
        }
      }
    }
    pbVar8 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,struct_std::char_traits<char>_> *)
                        ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
    uVar6 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputn(pbVar8,param_2,param_3)
    ;
    if (uVar6 == param_3) {
joined_r0x0001400029dd:
      do {
        if (lVar10 == 0) goto LAB_140002a1f;
        pbVar8 = std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,struct_std::char_traits<char>_> *)
                            ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
        cVar2 = std::basic_ios<char,struct_std::char_traits<char>_>::fill
                          ((basic_ios<char,struct_std::char_traits<char>_> *)
                           ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
        iVar4 = std::basic_streambuf<char,struct_std::char_traits<char>_>::sputc(pbVar8,cVar2);
        if (iVar4 == -1) {
          iVar9 = 4;
          goto LAB_140002a1f;
        }
        lVar10 = lVar10 + -1;
      } while( true );
    }
    iVar9 = 4;
LAB_140002a1f:
    std::ios_base::width((ios_base *)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1),0);
  }
  std::basic_ios<char,struct_std::char_traits<char>_>::setstate
            ((basic_ios<char,struct_std::char_traits<char>_> *)
             ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1),iVar9,false);
  std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
            ((basic_ostream<char,struct_std::char_traits<char>_> *)param_1);
  plVar7 = (longlong *)
           std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1));
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return param_1;
}


/* address=140002a90 name=FUN_140002a90 */

void FUN_140002a90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140002ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_140002c50 + param_1 * 4)))();
  return;
}


/* address=140002c90 name=FUN_140002c90 */

longlong * FUN_140002c90(longlong *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,struct_std::char_traits<char>_>::widen
                    ((basic_ios<char,struct_std::char_traits<char>_> *)
                     ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1),'\n');
  std::basic_ostream<char,struct_std::char_traits<char>_>::put
            ((basic_ostream<char,struct_std::char_traits<char>_> *)param_1,cVar1);
  std::basic_ostream<char,struct_std::char_traits<char>_>::flush
            ((basic_ostream<char,struct_std::char_traits<char>_> *)param_1);
  return param_1;
}


/* address=140002cd0 name=FUN_140002cd0 */

void FUN_140002cd0(undefined (**param_1) [16],char *param_2,char *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined (*pauVar8) [16];
  void *pvVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined (**_Memory) [16];
  undefined (*pauVar13) [16];
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined auStackY_d8 [32];
  undefined local_80 [16];
  ulonglong local_70;
  ulonglong local_68;
  undefined local_60 [16];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_140019080 ^ (ulonglong)auStackY_d8;
  pauVar13 = (undefined (*) [16])0x0;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  pauVar8 = (undefined (*) [16])operator_new(0x48);
  if (pauVar8 == (undefined (*) [16])0x0) {
    _Memory = param_1;
    puVar14 = (undefined4 *)local_60._0_8_;
    uVar16 = local_68;
    puVar15 = (undefined4 *)local_80._0_8_;
LAB_140002edf:
    *param_1 = pauVar13;
    if (bVar5) {
      if (0xf < local_48) {
        puVar10 = puVar14;
        if ((0xfff < local_48 + 1) &&
           (puVar10 = *(undefined4 **)(puVar14 + -2),
           0x1f < (ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        free(puVar10);
      }
    }
    if ((bVar6) && (0xf < uVar16)) {
      puVar14 = puVar15;
      if ((0xfff < uVar16 + 1) &&
         (puVar14 = *(undefined4 **)(puVar15 + -2),
         0x1f < (ulonglong)((longlong)puVar15 + (-8 - (longlong)puVar14)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(puVar14);
    }
    if ((bVar7) && (_Memory != (undefined (**) [16])0x0)) {
      FUN_140003290((longlong)_Memory);
      free(_Memory);
    }
    FUN_14000d8b0(local_40 ^ (ulonglong)auStackY_d8);
    return;
  }
  local_80 = ZEXT816(0);
  local_70 = 0;
  local_68 = 0;
  pvVar9 = (void *)strlen(param_3);
  FUN_140002700((void **)local_80,param_3,pvVar9);
  local_60 = ZEXT816(0);
  local_50 = 0;
  local_48 = 0;
  pvVar9 = (void *)strlen(param_2);
  FUN_140002700((void **)local_60,param_2,pvVar9);
  uVar16 = local_50;
  bVar7 = true;
  bVar6 = true;
  bVar5 = true;
  *pauVar8 = ZEXT816(0);
  *(undefined8 *)pauVar8[1] = 0;
  *(undefined8 *)(pauVar8[1] + 8) = 0;
  puVar14 = (undefined4 *)local_60._0_8_;
  puVar15 = (undefined4 *)local_60;
  if (0xf < local_48) {
    puVar15 = (undefined4 *)local_60._0_8_;
  }
  if (local_50 < 0x8000000000000000) {
    if (local_50 < 0x10) {
      *(ulonglong *)pauVar8[1] = local_50;
      *(undefined8 *)(pauVar8[1] + 8) = 0xf;
      uVar2 = puVar15[1];
      uVar3 = puVar15[2];
      uVar4 = puVar15[3];
      *(undefined4 *)*pauVar8 = *puVar15;
      *(undefined4 *)(*pauVar8 + 4) = uVar2;
      *(undefined4 *)(*pauVar8 + 8) = uVar3;
      *(undefined4 *)(*pauVar8 + 0xc) = uVar4;
    }
    else {
      uVar12 = local_50 | 0xf;
      if (uVar12 < 0x8000000000000000) {
        if (uVar12 < 0x16) {
          uVar12 = 0x16;
        }
      }
      else {
        uVar12 = 0x7fffffffffffffff;
      }
      pvVar9 = FUN_140001020(uVar12 + 1);
      *(void **)*pauVar8 = pvVar9;
      *(ulonglong *)pauVar8[1] = uVar16;
      *(ulonglong *)(pauVar8[1] + 8) = uVar12;
      memcpy(pvVar9,puVar15,uVar16 + 1);
    }
    uVar16 = local_68;
    uVar12 = local_70;
    pauVar8[2] = ZEXT816(0);
    *(undefined8 *)pauVar8[3] = 0;
    *(undefined8 *)(pauVar8[3] + 8) = 0;
    puVar15 = (undefined4 *)local_80._0_8_;
    puVar10 = (undefined4 *)local_80;
    if (0xf < local_68) {
      puVar10 = (undefined4 *)local_80._0_8_;
    }
    if (local_70 < 0x8000000000000000) {
      if (local_70 < 0x10) {
        *(ulonglong *)pauVar8[3] = local_70;
        *(undefined8 *)(pauVar8[3] + 8) = 0xf;
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        uVar4 = puVar10[3];
        *(undefined4 *)pauVar8[2] = *puVar10;
        *(undefined4 *)(pauVar8[2] + 4) = uVar2;
        *(undefined4 *)(pauVar8[2] + 8) = uVar3;
        *(undefined4 *)(pauVar8[2] + 0xc) = uVar4;
      }
      else {
        uVar11 = local_70 | 0xf;
        uVar17 = 0x7fffffffffffffff;
        if ((uVar11 < 0x8000000000000000) && (uVar17 = uVar11, uVar11 < 0x16)) {
          uVar17 = 0x16;
        }
        pvVar9 = FUN_140001020(uVar17 + 1);
        *(void **)pauVar8[2] = pvVar9;
        *(ulonglong *)pauVar8[3] = uVar12;
        *(ulonglong *)(pauVar8[3] + 8) = uVar17;
        memcpy(pvVar9,puVar10,uVar12 + 1);
      }
      *(undefined8 *)pauVar8[4] = 0;
      _Memory = (undefined (**) [16])0x0;
      pauVar13 = pauVar8;
      goto LAB_140002edf;
    }
    FUN_140001a50();
  }
  FUN_140001a50();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* address=140002ff0 name=FUN_140002ff0 */

void FUN_140002ff0(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined auStackY_a8 [32];
  undefined local_60 [16];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_140019080 ^ (ulonglong)auStackY_a8;
  bVar11 = false;
  puVar7 = (undefined8 *)operator_new(0x30);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    puVar12 = (undefined4 *)local_60._0_8_;
    uVar14 = local_48;
  }
  else {
    uVar1 = *param_4;
    local_60 = ZEXT816(0);
    local_50 = 0;
    local_48 = 0;
    pvVar8 = (void *)strlen(param_3);
    FUN_140002700((void **)local_60,param_3,pvVar8);
    uVar14 = local_48;
    uVar6 = local_50;
    bVar11 = true;
    *puVar7 = *param_2;
    *(undefined (*) [16])(puVar7 + 1) = ZEXT816(0);
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar12 = (undefined4 *)local_60._0_8_;
    puVar13 = (undefined4 *)local_60;
    if (0xf < local_48) {
      puVar13 = (undefined4 *)local_60._0_8_;
    }
    if (0x7fffffffffffffff < local_50) {
      FUN_140001a50();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_50 < 0x10) {
      puVar7[3] = local_50;
      puVar7[4] = 0xf;
      uVar3 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      *(undefined4 *)(puVar7 + 1) = *puVar13;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uVar3;
      *(undefined4 *)(puVar7 + 2) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uVar5;
      puVar7[5] = uVar1;
    }
    else {
      uVar9 = local_50 | 0xf;
      uVar10 = 0x7fffffffffffffff;
      if ((uVar9 < 0x8000000000000000) && (uVar10 = uVar9, uVar9 < 0x16)) {
        uVar10 = 0x16;
      }
      pvVar8 = FUN_140001020(uVar10 + 1);
      puVar7[1] = pvVar8;
      puVar7[3] = uVar6;
      puVar7[4] = uVar10;
      memcpy(pvVar8,puVar13,uVar6 + 1);
      puVar7[5] = uVar1;
    }
  }
  *param_1 = puVar7;
  if ((bVar11) && (0xf < uVar14)) {
    puVar13 = puVar12;
    if ((0xfff < uVar14 + 1) &&
       (puVar13 = *(undefined4 **)(puVar12 + -2),
       0x1f < (ulonglong)((longlong)puVar12 + (-8 - (longlong)puVar13)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(puVar13);
  }
  FUN_14000d8b0(local_40 ^ (ulonglong)auStackY_a8);
  return;
}


/* address=1400031e0 name=FUN_1400031e0 */

void FUN_1400031e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  
  FUN_140001950((void **)(param_1 + 0x18));
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    iVar3 = *(int *)plVar1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}


/* address=140003240 name=FUN_140003240 */

void FUN_140003240(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}


/* address=140003290 name=FUN_140003290 */

void FUN_140003290(longlong param_1)

{
  FUN_140002a90((longlong)*(char *)(param_1 + 0x40) + 1);
  return;
}


/* address=1400032c0 name=FUN_1400032c0 */

void FUN_1400032c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    iVar3 = *(int *)plVar1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}


/* address=140003310 name=FUN_140003310 */

void FUN_140003310(undefined8 *param_1)

{
  void **_Memory;
  void *_Memory_00;
  
  _Memory = (void **)*param_1;
  if (_Memory != (void **)0x0) {
    _Memory_00 = _Memory[8];
    if (_Memory_00 != (void *)0x0) {
      FUN_140003290((longlong)_Memory_00);
      free(_Memory_00);
    }
    FUN_140001950(_Memory + 4);
    FUN_140001950(_Memory);
    free(_Memory);
  }
  return;
}


/* address=140003370 name=FUN_140003370 */

void FUN_140003370(longlong **param_1)

{
  void **_Memory;
  void *pvVar1;
  void *_Memory_00;
  
  _Memory = (void **)*param_1;
  if (_Memory == (void **)0x0) {
    return;
  }
  pvVar1 = *_Memory;
  if (pvVar1 != (void *)0x0) {
    _Memory_00 = pvVar1;
    if ((0xfff < (ulonglong)((longlong)_Memory[2] - (longlong)pvVar1)) &&
       (_Memory_00 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory_00)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory_00);
    *_Memory = (void *)0x0;
    _Memory[1] = (void *)0x0;
    _Memory[2] = (void *)0x0;
  }
  free(_Memory);
  return;
}


/* address=1400033f0 name=FUN_1400033f0 */

void FUN_1400033f0(void **param_1)

{
  void *_Memory;
  
  _Memory = *param_1;
  if (_Memory != (void *)0x0) {
    FUN_140003290((longlong)_Memory);
    free(_Memory);
    return;
  }
  return;
}


/* address=140003450 name=FUN_140003450 */

void FUN_140003450(longlong **param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      ((longlong)*(int *)(**param_1 + 4) + (longlong)*param_1));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* address=140003480 name=FUN_140003480 */

void FUN_140003480(longlong **param_1)

{
  longlong *plVar1;
  
  std::basic_ostream<char,struct_std::char_traits<char>_>::_Osfx
            ((basic_ostream<char,struct_std::char_traits<char>_> *)*param_1);
  plVar1 = (longlong *)
           std::basic_ios<char,struct_std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,struct_std::char_traits<char>_> *)
                      ((longlong)*(int *)(**param_1 + 4) + (longlong)*param_1));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}


/* address=1400034c0 name=FUN_1400034c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400034c0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  void *_Memory;
  undefined auStackY_78 [32];
  undefined local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_140019080 ^ (ulonglong)auStackY_78;
  local_38 = ZEXT816(0);
  puVar7 = (undefined4 *)FUN_140001020(0x40);
  uVar4 = s__PowerEventsPlugin__OnCancel_cal_140010948._12_4_;
  uVar3 = s__PowerEventsPlugin__OnCancel_cal_140010948._8_4_;
  uVar2 = s__PowerEventsPlugin__OnCancel_cal_140010948._4_4_;
  local_38._0_8_ = puVar7;
  local_28 = _DAT_140010e80;
  uStack_24 = _UNK_140010e84;
  uStack_20 = _UNK_140010e88;
  uStack_1c = _UNK_140010e8c;
  *puVar7 = s__PowerEventsPlugin__OnCancel_cal_140010948._0_4_;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  uVar4 = s__PowerEventsPlugin__OnCancel_cal_140010948._28_4_;
  uVar3 = s__PowerEventsPlugin__OnCancel_cal_140010948._24_4_;
  uVar2 = s__PowerEventsPlugin__OnCancel_cal_140010948._20_4_;
  puVar7[4] = s__PowerEventsPlugin__OnCancel_cal_140010948._16_4_;
  puVar7[5] = uVar2;
  puVar7[6] = uVar3;
  puVar7[7] = uVar4;
  uVar4 = s__PowerEventsPlugin__OnCancel_cal_140010948._44_4_;
  uVar3 = s__PowerEventsPlugin__OnCancel_cal_140010948._40_4_;
  uVar2 = s__PowerEventsPlugin__OnCancel_cal_140010948._36_4_;
  puVar7[8] = s__PowerEventsPlugin__OnCancel_cal_140010948._32_4_;
  puVar7[9] = uVar2;
  puVar7[10] = uVar3;
  puVar7[0xb] = uVar4;
  *(undefined8 *)(puVar7 + 0xc) = s__PowerEventsPlugin__OnCancel_cal_140010948._48_8_;
  puVar7[0xe] = s__PowerEventsPlugin__OnCancel_cal_140010948._56_4_;
  *(undefined *)(puVar7 + 0xf) = 0;
  FUN_140004ab0((undefined8 *)local_38);
  if (0xf < CONCAT44(uStack_1c,uStack_20)) {
    _Memory = (void *)local_38._0_8_;
    if ((0xfff < CONCAT44(uStack_1c,uStack_20) + 1) &&
       (_Memory = *(void **)(local_38._0_8_ + -8),
       0x1f < (ulonglong)(local_38._0_8_ + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  iVar6 = _Mtx_lock(&DAT_140019000);
  puVar5 = DAT_14001a058;
  if (iVar6 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_14001904c != 0x7fffffff) {
    DAT_14001a058 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *param_2 = 0;
    _Mtx_unlock(&DAT_140019000);
    FUN_14000d8b0(local_18 ^ (ulonglong)auStackY_78);
    return;
  }
  DAT_14001904c = 0x7ffffffe;
  std::_Throw_Cpp_error(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* address=140003630 name=FUN_140003630 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003630(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  code **ppcVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  void *_Memory;
  undefined auStackY_78 [32];
  undefined local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_140019080 ^ (ulonglong)auStackY_78;
  local_38 = ZEXT816(0);
  puVar9 = (undefined4 *)FUN_140001020(0x40);
  uVar6 = s__PowerEventsPlugin__OnListen_cal_140010908._12_4_;
  uVar5 = s__PowerEventsPlugin__OnListen_cal_140010908._8_4_;
  uVar4 = s__PowerEventsPlugin__OnListen_cal_140010908._4_4_;
  local_38._0_8_ = puVar9;
  local_28 = _DAT_140010e70;
  uStack_24 = _UNK_140010e74;
  uStack_20 = _UNK_140010e78;
  uStack_1c = _UNK_140010e7c;
  *puVar9 = s__PowerEventsPlugin__OnListen_cal_140010908._0_4_;
  puVar9[1] = uVar4;
  puVar9[2] = uVar5;
  puVar9[3] = uVar6;
  uVar6 = s__PowerEventsPlugin__OnListen_cal_140010908._28_4_;
  uVar5 = s__PowerEventsPlugin__OnListen_cal_140010908._24_4_;
  uVar4 = s__PowerEventsPlugin__OnListen_cal_140010908._20_4_;
  puVar9[4] = s__PowerEventsPlugin__OnListen_cal_140010908._16_4_;
  puVar9[5] = uVar4;
  puVar9[6] = uVar5;
  puVar9[7] = uVar6;
  uVar6 = s__PowerEventsPlugin__OnListen_cal_140010908._44_4_;
  uVar5 = s__PowerEventsPlugin__OnListen_cal_140010908._40_4_;
  uVar4 = s__PowerEventsPlugin__OnListen_cal_140010908._36_4_;
  puVar9[8] = s__PowerEventsPlugin__OnListen_cal_140010908._32_4_;
  puVar9[9] = uVar4;
  puVar9[10] = uVar5;
  puVar9[0xb] = uVar6;
  *(undefined8 *)(puVar9 + 0xc) = s__PowerEventsPlugin__OnListen_cal_140010908._48_8_;
  *(undefined2 *)(puVar9 + 0xe) = s__PowerEventsPlugin__OnListen_cal_140010908._56_2_;
  *(char *)((longlong)puVar9 + 0x3a) = s__PowerEventsPlugin__OnListen_cal_140010908[58];
  *(undefined *)((longlong)puVar9 + 0x3b) = 0;
  FUN_140004ab0((undefined8 *)local_38);
  if (0xf < CONCAT44(uStack_1c,uStack_20)) {
    _Memory = (void *)local_38._0_8_;
    if ((0xfff < CONCAT44(uStack_1c,uStack_20) + 1) &&
       (_Memory = *(void **)(local_38._0_8_ + -8),
       0x1f < (ulonglong)(local_38._0_8_ + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  iVar8 = _Mtx_lock(&DAT_140019000);
  if (iVar8 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (DAT_14001904c != 0x7fffffff) {
    puVar1 = (undefined8 *)*param_4;
    *param_4 = 0;
    puVar7 = DAT_14001a058;
    if (DAT_14001a058 != (undefined8 *)0x0) {
      ppcVar2 = (code **)*DAT_14001a058;
      DAT_14001a058 = puVar1;
      (**ppcVar2)(puVar7,1);
      puVar1 = DAT_14001a058;
    }
    DAT_14001a058 = puVar1;
    *param_2 = 0;
    _Mtx_unlock(&DAT_140019000);
    FUN_14000d8b0(local_18 ^ (ulonglong)auStackY_78);
    return;
  }
  DAT_14001904c = 0x7ffffffe;
  std::_Throw_Cpp_error(6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* address=140004050 name=FUN_140004050 */

void * FUN_140004050(void *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)((longlong)param_1 + 0x48));
    *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)((longlong)param_1 + 8));
    *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


/* address=1400040d0 name=FUN_1400040d0 */

void * FUN_1400040d0(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


/* address=140004100 name=MRECmpImpl::`scalar_deleting_destructor' */

/* Library Function - Single Match
    public: void * __ptr64 __cdecl MRECmpImpl::`scalar deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall MRECmpImpl::_scalar_deleting_destructor_(MRECmpImpl *this,uint param_1)

{
  FUN_140001950((void **)(this + 0x10));
  if ((param_1 & 1) != 0) {
    free(this);
  }
  return this;
}


/* address=140004140 name=FUN_140004140 */

void ** FUN_140004140(longlong *param_1,void **param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  void *pvVar1;
  void **_Memory;
  void **ppvVar2;
  void *_Memory_00;
  void **local_res10;
  
  local_res10 = param_2;
  ppvVar2 = (void **)(**(code **)(*param_1 + 0x20))(param_1,&local_res10,param_3,param_4,param_5);
  _Memory = local_res10;
  pvVar1 = *ppvVar2;
  *ppvVar2 = (void *)0x0;
  *param_2 = pvVar1;
  if (local_res10 != (void **)0x0) {
    pvVar1 = *local_res10;
    if (pvVar1 != (void *)0x0) {
      _Memory_00 = pvVar1;
      if ((0xfff < (ulonglong)((longlong)local_res10[2] - (longlong)pvVar1)) &&
         (_Memory_00 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory_00)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(_Memory_00);
      *_Memory = (void *)0x0;
      _Memory[1] = (void *)0x0;
      _Memory[2] = (void *)0x0;
    }
    free(_Memory);
  }
  return param_2;
}


/* address=140004200 name=FUN_140004200 */

void ** FUN_140004200(longlong *param_1,void **param_2)

{
  void *pvVar1;
  void **_Memory;
  void **ppvVar2;
  void *_Memory_00;
  void **local_res10;
  
  local_res10 = param_2;
  ppvVar2 = (void **)(**(code **)(*param_1 + 0x18))(param_1,&local_res10);
  _Memory = local_res10;
  pvVar1 = *ppvVar2;
  *ppvVar2 = (void *)0x0;
  *param_2 = pvVar1;
  if (local_res10 != (void **)0x0) {
    pvVar1 = *local_res10;
    if (pvVar1 != (void *)0x0) {
      _Memory_00 = pvVar1;
      if ((0xfff < (ulonglong)((longlong)local_res10[2] - (longlong)pvVar1)) &&
         (_Memory_00 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory_00)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(_Memory_00);
      *_Memory = (void *)0x0;
      _Memory[1] = (void *)0x0;
      _Memory[2] = (void *)0x0;
    }
    free(_Memory);
  }
  return param_2;
}


/* address=1400042b0 name=FUN_1400042b0 */

void FUN_1400042b0(longlong param_1)

{
  undefined local_48 [56];
  undefined8 local_10;
  
  local_10 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,0,0,local_48);
  return;
}


/* address=1400042f0 name=FUN_1400042f0 */

void FUN_1400042f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  void *_Memory;
  void **local_res8;
  undefined local_50 [56];
  undefined8 local_18;
  
  FUN_140004140(*(longlong **)(param_1 + 0x30),&local_res8,param_2,param_3,param_4);
  local_18 = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),param_1 + 0x10,*local_res8,
             (longlong)local_res8[1] - (longlong)*local_res8,local_50);
  pvVar1 = *local_res8;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)((longlong)local_res8[2] - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
    *local_res8 = (void *)0x0;
    local_res8[1] = (void *)0x0;
    local_res8[2] = (void *)0x0;
  }
  free(local_res8);
  return;
}


/* address=1400043d0 name=FUN_1400043d0 */

void FUN_1400043d0(ulonglong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  size_t _Size;
  ulonglong uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined auStackY_158 [32];
  uint local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  char local_e0;
  undefined *local_d8;
  undefined local_d0 [5];
  undefined auStack_cb [3];
  undefined8 uStack_c8;
  size_t local_c0;
  ulonglong uStack_b8;
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_140019080 ^ (ulonglong)auStackY_158;
  snprintf(local_a8,0x80,"[PowerEventsPlugin] HandlePowerBroadcast wparam=%lu",param_1 & 0xffffffff)
  ;
  _local_d0 = ZEXT816(0);
  local_c0 = 0;
  uStack_b8 = 0;
  _Size = strlen(local_a8);
  if (0x7fffffffffffffff < _Size) {
    FUN_140001a50();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (_Size < 0x10) {
    uStack_b8 = 0xf;
    local_c0 = _Size;
    memcpy(local_d0,local_a8,_Size);
    local_d0[_Size] = 0;
  }
  else {
    uVar6 = _Size | 0xf;
    uVar9 = 0x7fffffffffffffff;
    if ((uVar6 < 0x8000000000000000) && (uVar9 = uVar6, uVar6 < 0x16)) {
      uVar9 = 0x16;
    }
    pvVar7 = FUN_140001020(uVar9 + 1);
    _local_d0 = pvVar7;
    local_c0 = _Size;
    uStack_b8 = uVar9;
    memcpy(pvVar7,local_a8,_Size);
    *(undefined *)((longlong)pvVar7 + _Size) = 0;
  }
  FUN_140004ab0((undefined8 *)local_d0);
  if (0xf < uStack_b8) {
    pvVar7 = _local_d0;
    if ((0xfff < uStack_b8 + 1) &&
       (pvVar7 = *(void **)((longlong)_local_d0 + -8),
       0x1f < (ulonglong)((longlong)_local_d0 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar7);
  }
  local_d8 = &DAT_140019000;
  iVar5 = _Mtx_lock(&DAT_140019000);
  if (iVar5 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_14001904c == 0x7fffffff) {
    DAT_14001904c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  _local_d0 = ZEXT816(0);
  if (DAT_14001a058 == (longlong *)0x0) {
    puVar8 = (undefined4 *)FUN_140001020(0x40);
    uVar4 = s__PowerEventsPlugin__No_event_sin_140010b70._12_4_;
    uVar3 = s__PowerEventsPlugin__No_event_sin_140010b70._8_4_;
    uVar2 = s__PowerEventsPlugin__No_event_sin_140010b70._4_4_;
    _local_d0 = puVar8;
    local_c0 = 0x36;
    uStack_b8 = 0x3f;
    *puVar8 = s__PowerEventsPlugin__No_event_sin_140010b70._0_4_;
    puVar8[1] = uVar2;
    puVar8[2] = uVar3;
    puVar8[3] = uVar4;
    uVar4 = s__PowerEventsPlugin__No_event_sin_140010b70._28_4_;
    uVar3 = s__PowerEventsPlugin__No_event_sin_140010b70._24_4_;
    uVar2 = s__PowerEventsPlugin__No_event_sin_140010b70._20_4_;
    puVar8[4] = s__PowerEventsPlugin__No_event_sin_140010b70._16_4_;
    puVar8[5] = uVar2;
    puVar8[6] = uVar3;
    puVar8[7] = uVar4;
    uVar4 = s__PowerEventsPlugin__No_event_sin_140010b70._44_4_;
    uVar3 = s__PowerEventsPlugin__No_event_sin_140010b70._40_4_;
    uVar2 = s__PowerEventsPlugin__No_event_sin_140010b70._36_4_;
    puVar8[8] = s__PowerEventsPlugin__No_event_sin_140010b70._32_4_;
    puVar8[9] = uVar2;
    puVar8[10] = uVar3;
    puVar8[0xb] = uVar4;
    puVar8[0xc] = s__PowerEventsPlugin__No_event_sin_140010b70._48_4_;
    *(undefined2 *)(puVar8 + 0xd) = s__PowerEventsPlugin__No_event_sin_140010b70._52_2_;
    *(undefined *)((longlong)puVar8 + 0x36) = 0;
    FUN_140004ab0((undefined8 *)local_d0);
    if (0xf < uStack_b8) {
      pvVar7 = _local_d0;
      if ((0xfff < uStack_b8 + 1) &&
         (pvVar7 = *(void **)((longlong)_local_d0 + -8),
         0x1f < (ulonglong)((longlong)_local_d0 + (-8 - (longlong)pvVar7)))) {
LAB_1400047d6:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(pvVar7);
    }
  }
  else {
    if (param_1 == 4) {
      puVar8 = (undefined4 *)FUN_140001020(0x40);
      uVar4 = s__PowerEventsPlugin__Sending__sle_140010ba8._12_4_;
      uVar3 = s__PowerEventsPlugin__Sending__sle_140010ba8._8_4_;
      uVar2 = s__PowerEventsPlugin__Sending__sle_140010ba8._4_4_;
      _local_d0 = puVar8;
      local_c0 = 0x31;
      uStack_b8 = 0x3f;
      *puVar8 = s__PowerEventsPlugin__Sending__sle_140010ba8._0_4_;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      uVar4 = s__PowerEventsPlugin__Sending__sle_140010ba8._28_4_;
      uVar3 = s__PowerEventsPlugin__Sending__sle_140010ba8._24_4_;
      uVar2 = s__PowerEventsPlugin__Sending__sle_140010ba8._20_4_;
      puVar8[4] = s__PowerEventsPlugin__Sending__sle_140010ba8._16_4_;
      puVar8[5] = uVar2;
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      uVar4 = s__PowerEventsPlugin__Sending__sle_140010ba8._44_4_;
      uVar3 = s__PowerEventsPlugin__Sending__sle_140010ba8._40_4_;
      uVar2 = s__PowerEventsPlugin__Sending__sle_140010ba8._36_4_;
      puVar8[8] = s__PowerEventsPlugin__Sending__sle_140010ba8._32_4_;
      puVar8[9] = uVar2;
      puVar8[10] = uVar3;
      puVar8[0xb] = uVar4;
      *(char *)(puVar8 + 0xc) = s__PowerEventsPlugin__Sending__sle_140010ba8[48];
      *(undefined *)((longlong)puVar8 + 0x31) = 0;
      FUN_140004ab0((undefined8 *)local_d0);
      if (0xf < uStack_b8) {
        pvVar7 = _local_d0;
        if ((0xfff < uStack_b8 + 1) &&
           (pvVar7 = *(void **)((longlong)_local_d0 + -8),
           0x1f < (ulonglong)((longlong)_local_d0 + (-8 - (longlong)pvVar7)))) goto LAB_1400047d6;
        free(pvVar7);
      }
      local_c0 = 5;
      uStack_b8 = 0xf;
      local_d0[4] = DAT_140010be0;
      local_d0._0_4_ = DAT_140010bdc;
      stack0xffffffffffffff36 = SUB1610(ZEXT816(0),6);
      auStack_cb[0] = 0;
      local_120 = DAT_140010bdc;
      uStack_11c = stack0xffffffffffffff34;
      uStack_118 = 0;
      uStack_114 = 0;
      local_110 = 5;
      uStack_10c = 0;
      uStack_108 = 0xf;
      uStack_104 = 0;
      local_e0 = '\x05';
      (**(code **)(*DAT_14001a058 + 8))(DAT_14001a058,&local_120);
                    /* WARNING: Could not recover jumptable at 0x000140004860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&UNK_140004a70 + (longlong)local_e0 * 4)))();
      return;
    }
    if (param_1 == 7) {
      puVar8 = (undefined4 *)FUN_140001020(0x40);
      uVar4 = s__PowerEventsPlugin__Sending__wak_140010be8._12_4_;
      uVar3 = s__PowerEventsPlugin__Sending__wak_140010be8._8_4_;
      uVar2 = s__PowerEventsPlugin__Sending__wak_140010be8._4_4_;
      _local_d0 = puVar8;
      local_c0 = 0x30;
      uStack_b8 = 0x3f;
      *puVar8 = s__PowerEventsPlugin__Sending__wak_140010be8._0_4_;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      uVar4 = s__PowerEventsPlugin__Sending__wak_140010be8._28_4_;
      uVar3 = s__PowerEventsPlugin__Sending__wak_140010be8._24_4_;
      uVar2 = s__PowerEventsPlugin__Sending__wak_140010be8._20_4_;
      puVar8[4] = s__PowerEventsPlugin__Sending__wak_140010be8._16_4_;
      puVar8[5] = uVar2;
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      uVar4 = s__PowerEventsPlugin__Sending__wak_140010be8._44_4_;
      uVar3 = s__PowerEventsPlugin__Sending__wak_140010be8._40_4_;
      uVar2 = s__PowerEventsPlugin__Sending__wak_140010be8._36_4_;
      puVar8[8] = s__PowerEventsPlugin__Sending__wak_140010be8._32_4_;
      puVar8[9] = uVar2;
      puVar8[10] = uVar3;
      puVar8[0xb] = uVar4;
      *(undefined *)(puVar8 + 0xc) = 0;
      FUN_140004ab0((undefined8 *)local_d0);
      if (0xf < uStack_b8) {
        FUN_1400058c0(local_d0,_local_d0,uStack_b8);
      }
      local_c0 = 4;
      uStack_b8 = 0xf;
      _auStack_cb = SUB1611(ZEXT816(0),5);
      local_d0[4] = 0;
      local_d0._0_4_ = DAT_140010c1c;
      local_120 = DAT_140010c1c;
      uStack_11c = 0;
      uStack_118 = 0;
      uStack_114 = 0;
      local_110 = 4;
      uStack_10c = 0;
      uStack_108 = 0xf;
      uStack_104 = 0;
      local_e0 = '\x05';
      (**(code **)(*DAT_14001a058 + 8))(DAT_14001a058,&local_120);
      FUN_140002a90((longlong)local_e0 + 1);
    }
    else {
      puVar8 = (undefined4 *)FUN_140001020(0x30);
      uVar4 = s__PowerEventsPlugin__Unhandled_po_140010c28._12_4_;
      uVar3 = s__PowerEventsPlugin__Unhandled_po_140010c28._8_4_;
      uVar2 = s__PowerEventsPlugin__Unhandled_po_140010c28._4_4_;
      _local_d0 = puVar8;
      local_c0 = 0x29;
      uStack_b8 = 0x2f;
      *puVar8 = s__PowerEventsPlugin__Unhandled_po_140010c28._0_4_;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      uVar4 = s__PowerEventsPlugin__Unhandled_po_140010c28._28_4_;
      uVar3 = s__PowerEventsPlugin__Unhandled_po_140010c28._24_4_;
      uVar2 = s__PowerEventsPlugin__Unhandled_po_140010c28._20_4_;
      puVar8[4] = s__PowerEventsPlugin__Unhandled_po_140010c28._16_4_;
      puVar8[5] = uVar2;
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      *(undefined8 *)(puVar8 + 8) = s__PowerEventsPlugin__Unhandled_po_140010c28._32_8_;
      *(char *)(puVar8 + 10) = s__PowerEventsPlugin__Unhandled_po_140010c28[40];
      *(undefined *)((longlong)puVar8 + 0x29) = 0;
      FUN_140004ab0((undefined8 *)local_d0);
      if (0xf < uStack_b8) {
        FUN_1400058c0(local_d0,_local_d0,uStack_b8);
      }
    }
  }
  _Mtx_unlock(&DAT_140019000);
  FUN_14000d8b0(local_28 ^ (ulonglong)auStackY_158);
  return;
}


/* address=140004ab0 name=FUN_140004ab0 */

void FUN_140004ab0(undefined8 *param_1)

{
  ulonglong uVar1;
  size_t _Size;
  code *pcVar2;
  undefined *_Dst;
  LPCSTR lpOutputString;
  void *_Memory;
  ulonglong uVar3;
  undefined auStackY_78 [32];
  undefined local_40 [16];
  undefined local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_140019080 ^ (ulonglong)auStackY_78;
  _Size = param_1[2];
  if (_Size == 0x7fffffffffffffff) {
    FUN_140001a50();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar1 = _Size + 1;
  uVar3 = 0xf;
  _Dst = local_40;
  local_40 = ZEXT816(0);
  local_30 = ZEXT816(0);
  if (0xf < uVar1) {
    uVar3 = uVar1 | 0xf;
    if (uVar3 < 0x8000000000000000) {
      if (uVar3 < 0x16) {
        uVar3 = 0x16;
      }
    }
    else {
      uVar3 = 0x7fffffffffffffff;
    }
    _Dst = (undefined *)FUN_140001020(uVar3 + 1);
    local_40._0_8_ = _Dst;
  }
  local_30._0_8_ = uVar1;
  local_30._8_8_ = uVar3;
  memcpy(_Dst,param_1,_Size);
  _Dst[_Size] = 10;
  _Dst[uVar1] = 0;
  lpOutputString = local_40;
  if (0xf < (ulonglong)local_30._8_8_) {
    lpOutputString = (LPCSTR)local_40._0_8_;
  }
  OutputDebugStringA(lpOutputString);
  if (0xf < (ulonglong)local_30._8_8_) {
    _Memory = (void *)local_40._0_8_;
    if ((0xfff < local_30._8_8_ + 1) &&
       (_Memory = *(void **)(local_40._0_8_ + -8),
       0x1f < (ulonglong)(local_40._0_8_ + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(_Memory);
  }
  FUN_14000d8b0(local_20 ^ (ulonglong)auStackY_78);
  return;
}


/* address=140004c10 name=FUN_140004c10 */

undefined (**) [16] FUN_140004c10(longlong param_1,undefined (**param_2) [16],undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res8 [3];
  undefined (*local_res20) [16];
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    local_res8[0] = param_3;
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,local_res8);
    return param_2;
  }
  local_res8[0] = 0;
  FUN_140002cd0(&local_res20,"error","No OnCancel handler set");
  *param_2 = local_res20;
  return param_2;
}


/* address=140004c80 name=FUN_140004c80 */

undefined (**) [16] FUN_140004c80(longlong param_1,undefined (**param_2) [16],undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res8 [4];
  undefined (*local_10) [16];
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    local_res8[0] = param_3;
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,local_res8);
    return param_2;
  }
  local_res8[0] = 0;
  FUN_140002cd0(&local_10,"error","No OnListen handler set");
  *param_2 = local_10;
  return param_2;
}


/* address=140004ce0 name=FUN_140004ce0 */

/* WARNING: Removing unreachable block (ram,0x000140004fc1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_140004ce0(longlong param_1,undefined8 param_2)

{
  longlong **pplVar1;
  longlong **pplVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong **_Memory;
  DWORD DVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  void *pvVar14;
  ulonglong uVar15;
  undefined auStackY_238 [32];
  longlong *local_208;
  longlong *local_200;
  undefined8 local_1f8;
  undefined **local_1f0 [7];
  undefined ***local_1b8;
  undefined **local_1b0 [7];
  undefined ***local_178;
  undefined local_170 [16];
  undefined local_160 [8];
  undefined8 uStack_158;
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_140019080 ^ (ulonglong)auStackY_238;
  snprintf(local_148,0x100,"[PowerEventsPlugin] RegisterWithEngine called, hwnd=%p",param_2);
  local_170 = ZEXT816(0);
  _local_160 = ZEXT816(0);
  sVar8 = strlen(local_148);
  if (0x7fffffffffffffff < sVar8) goto LAB_1400053ac;
  if (sVar8 < 0x10) {
    uStack_158 = 0xf;
    local_160 = (undefined  [8])sVar8;
    memcpy(local_170,local_148,sVar8);
    local_170[sVar8] = 0;
  }
  else {
    uVar15 = sVar8 | 0xf;
    if (uVar15 < 0x8000000000000000) {
      if (uVar15 < 0x16) {
        uVar15 = 0x16;
      }
    }
    else {
      uVar15 = 0x7fffffffffffffff;
    }
    pvVar14 = FUN_140001020(uVar15 + 1);
    local_170._0_8_ = pvVar14;
    uStack_158 = uVar15;
    local_160 = (undefined  [8])sVar8;
    memcpy(pvVar14,local_148,sVar8);
    *(undefined *)((longlong)pvVar14 + sVar8) = 0;
  }
  FUN_140004ab0((undefined8 *)local_170);
  if (0xf < uStack_158) {
    pvVar14 = (void *)local_170._0_8_;
    if ((0xfff < uStack_158 + 1) &&
       (pvVar14 = *(void **)(local_170._0_8_ + -8),
       0x1f < (ulonglong)(local_170._0_8_ + (-8 - (longlong)pvVar14)))) goto LAB_140004f18;
    free(pvVar14);
  }
  local_200 = FUN_14000b2d0((undefined **)0x0);
  local_1f8 = *(undefined8 *)(param_1 + 0x10);
  puVar9 = (undefined8 *)FUN_140002ff0(&local_208,&local_1f8,"app.power_events/stream",&local_200);
  pplVar2 = (longlong **)*puVar9;
  *puVar9 = 0;
  _Memory = DAT_14001a060;
  if (DAT_14001a060 != (longlong **)0x0) {
    pplVar1 = DAT_14001a060 + 1;
    DAT_14001a060 = pplVar2;
    FUN_140001950(pplVar1);
    free(_Memory);
    pplVar2 = DAT_14001a060;
  }
  DAT_14001a060 = pplVar2;
  if (local_208 != (longlong *)0x0) {
    FUN_140001950((void **)(local_208 + 1));
    free(local_208);
  }
  local_170 = ZEXT816(0);
  puVar10 = (undefined4 *)FUN_140001020(0x30);
  uVar6 = s__PowerEventsPlugin__EventChannel_1400109f8._12_4_;
  uVar5 = s__PowerEventsPlugin__EventChannel_1400109f8._8_4_;
  uVar4 = s__PowerEventsPlugin__EventChannel_1400109f8._4_4_;
  local_170._0_8_ = puVar10;
  local_160._4_4_ = _UNK_140010e44;
  local_160._0_4_ = _DAT_140010e40;
  uStack_158._0_4_ = _UNK_140010e48;
  uStack_158._4_4_ = _UNK_140010e4c;
  *puVar10 = s__PowerEventsPlugin__EventChannel_1400109f8._0_4_;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  uVar6 = s__PowerEventsPlugin__EventChannel_1400109f8._28_4_;
  uVar5 = s__PowerEventsPlugin__EventChannel_1400109f8._24_4_;
  uVar4 = s__PowerEventsPlugin__EventChannel_1400109f8._20_4_;
  puVar10[4] = s__PowerEventsPlugin__EventChannel_1400109f8._16_4_;
  puVar10[5] = uVar4;
  puVar10[6] = uVar5;
  puVar10[7] = uVar6;
  *(undefined8 *)(puVar10 + 8) = s__PowerEventsPlugin__EventChannel_1400109f8._32_8_;
  *(undefined *)(puVar10 + 10) = 0;
  FUN_140004ab0((undefined8 *)local_170);
  if (0xf < uStack_158) {
    pvVar14 = (void *)local_170._0_8_;
    if ((0xfff < uStack_158 + 1) &&
       (pvVar14 = *(void **)(local_170._0_8_ + -8),
       0x1f < (ulonglong)(local_170._0_8_ + (-8 - (longlong)pvVar14)))) {
LAB_140004f18:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(pvVar14);
  }
  plVar11 = (longlong *)operator_new(0x88);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    local_1b0[0] = std::
                   _Func_impl_no_alloc<class_<lambda_b81e6d6955ece3fbbc217e53b45bba0d>,class_std::unique_ptr<struct_flutter::StreamHandlerError<class_flutter::EncodableValue>,struct_std::default_delete<struct_flutter::StreamHandlerError<class_flutter::EncodableValue>_>_>,class_flutter::EncodableValue_const*___ptr64>
                   ::vftable;
    local_178 = local_1b0;
    local_1f0[0] = std::
                   _Func_impl_no_alloc<class_<lambda_c2eb68e547b1d3b498252c75ab06c4ba>,class_std::unique_ptr<struct_flutter::StreamHandlerError<class_flutter::EncodableValue>,struct_std::default_delete<struct_flutter::StreamHandlerError<class_flutter::EncodableValue>_>_>,class_flutter::EncodableValue_const*___ptr64,class_std::unique_ptr<cla
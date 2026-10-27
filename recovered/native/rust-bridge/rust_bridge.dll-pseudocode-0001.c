/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=180001000 name=FUN_180001000 */

void FUN_180001000(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    lVar2 = param_1[1];
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar2 + 8);
      do {
        if (puVar4[-1] != 0) {
          thunk_FUN_1803e4c80(*puVar4,puVar4[-1],1);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar1 != 0) {
      thunk_FUN_1803e4c80(lVar2,lVar1 * 0x18,8);
      return;
    }
  }
  return;
}


/* address=180001080 name=FUN_180001080 */

void FUN_180001080(longlong **param_1)

{
  longlong *plVar1;
  
  if (*param_1 != (longlong *)0x0) {
    FUN_1803ce800();
    plVar1 = *param_1;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803ca5b0();
      return;
    }
  }
  return;
}


/* address=1800010f0 name=FUN_1800010f0 */

void FUN_1800010f0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong *puVar8;
  longlong local_60;
  code **local_58;
  ulonglong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 == -2) {
    local_50 = (ulonglong *)param_1[2];
    if (local_50 != (ulonglong *)0x0) {
      local_58 = (code **)param_1[3];
      if (*local_58 != (code *)0x0) {
        (**local_58)(local_50);
      }
      pcVar4 = local_58[1];
      if (pcVar4 != (code *)0x0) {
        pcVar7 = local_58[2];
LAB_180001253:
        thunk_FUN_1803e4c80(local_50,pcVar4,pcVar7);
        return;
      }
    }
  }
  else if (lVar1 == -1) {
    uVar2 = param_1[1];
    if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      local_60 = uVar2 - 1;
      FUN_180404230(&local_60);
    }
  }
  else {
    puVar8 = (ulonglong *)param_1[1];
    local_50 = puVar8;
    for (lVar5 = param_1[2]; lVar5 != 0; lVar5 = lVar5 + -1) {
      uVar2 = *puVar8;
      uVar3 = uVar2 ^ 0x8000000000000000;
      if (-1 < (longlong)uVar2) {
        uVar3 = 9;
      }
      lVar6 = 8;
      if (0x10 < uVar3) goto LAB_18000121d;
      if ((0xec7fUL >> (uVar3 & 0x3f) & 1) == 0) {
        if (uVar3 == 9) {
          if (uVar2 != 0) {
            thunk_FUN_1803e4c80(puVar8[1],uVar2,1);
          }
          lVar6 = 0x30;
          if (puVar8[3] != 0) {
            thunk_FUN_1803e4c80(puVar8[4],puVar8[3],1);
          }
LAB_18000121d:
          uVar2 = *(ulonglong *)((longlong)puVar8 + lVar6);
        }
        else {
          if (uVar3 != 0x10) goto LAB_18000121d;
          uVar2 = puVar8[1];
          if (uVar2 == 0xffffffffffffffff) goto LAB_1800011a0;
        }
        if (uVar2 != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(lVar6 + 8 + (longlong)puVar8),uVar2,1);
        }
      }
LAB_1800011a0:
      puVar8 = puVar8 + 9;
    }
    if (lVar1 != 0) {
      pcVar4 = (code *)(lVar1 * 0x48);
      pcVar7 = (code *)&DAT_00000008;
      goto LAB_180001253;
    }
  }
  return;
}


/* address=180001300 name=FUN_180001300 */

void FUN_180001300(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong local_28;
  longlong local_20;
  code **local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 == -2) {
    local_20 = param_1[2];
    if (local_20 != 0) {
      local_18 = (code **)param_1[3];
      if (*local_18 != (code *)0x0) {
        (**local_18)(local_20);
      }
      if (local_18[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_20,local_18[1],local_18[2]);
        return;
      }
    }
  }
  else if (lVar1 == -1) {
    uVar2 = param_1[1];
    if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      local_28 = uVar2 - 1;
      FUN_180404230(&local_28);
    }
  }
  else if (lVar1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],lVar1,1);
    return;
  }
  return;
}


/* address=180001400 name=FUN_180001400 */

void FUN_180001400(longlong *param_1)

{
  longlong local_28;
  ulonglong local_20;
  code **local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = param_1[1];
  if (*param_1 == 0) {
    if (((local_20 != 0) && (1 < ((uint)local_20 & 3) - 2)) && ((local_20 & 3) != 0)) {
      local_28 = local_20 - 1;
      FUN_180404230(&local_28);
    }
  }
  else if (local_20 != 0) {
    local_18 = (code **)param_1[2];
    if (*local_18 != (code *)0x0) {
      (**local_18)(local_20);
    }
    if (local_18[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(local_20,local_18[1],local_18[2]);
      return;
    }
  }
  return;
}


/* address=1800014d0 name=FUN_1800014d0 */

void FUN_1800014d0(int *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == 1) {
    FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
  }
  plVar1 = *(longlong **)(param_1 + 4);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=180001560 name=FUN_180001560 */

void FUN_180001560(int *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == 1) {
    FUN_1802de5f0(*(undefined8 *)(param_1 + 2));
  }
  plVar1 = *(longlong **)(param_1 + 4);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180239c40(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800015f0 name=FUN_1800015f0 */

void FUN_1800015f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      lVar2 = puVar4[-1];
      if ((-1 < lVar2) && (lVar2 != 0)) {
        thunk_FUN_1803e4c80(*puVar4,lVar2,1);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(lVar1,*param_1 * 0x18,8);
    return;
  }
  return;
}


/* address=180001670 name=FUN_180001670 */

void FUN_180001670(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      lVar2 = puVar4[-1];
      if ((-0x7ffffffffffffffe < lVar2) && (lVar2 != 0)) {
        thunk_FUN_1803e4c80(*puVar4,lVar2,1);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(lVar1,*param_1 * 0x18,8);
    return;
  }
  return;
}


/* address=180001700 name=FUN_180001700 */

void FUN_180001700(undefined8 param_1,code **param_2)

{
  if (*param_2 != (code *)0x0) {
    (**param_2)(param_1);
  }
  if (param_2[1] != (code *)0x0) {
    thunk_FUN_1803e4c80(param_1,param_2[1],param_2[2]);
    return;
  }
  return;
}


/* address=180001790 name=FUN_180001790 */

void FUN_180001790(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x20);
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    FUN_180001300(param_1 + 0x40);
  }
  else if (((*(int *)(param_1 + 0x38) == 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != -1))
          && (lVar2 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x48),lVar2,1,param_4,param_1,uVar3);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x70) + 0x18))(*(undefined8 *)(param_1 + 0x78));
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x80);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=180001930 name=FUN_180001930 */

void FUN_180001930(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x20);
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    FUN_1800010f0(param_1 + 0x40);
  }
  else if (((*(int *)(param_1 + 0x38) == 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != -1))
          && (lVar2 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x48),lVar2,1,param_4,param_1,uVar3);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))(*(undefined8 *)(param_1 + 0x88));
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x90);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=180001ae0 name=FUN_180001ae0 */

void FUN_180001ae0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18000e980(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x120) + 0x18))(*(undefined8 *)(param_1 + 0x128));
  }
  plVar1 = *(longlong **)(param_1 + 0x130);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x130);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x180,0x80);
  return;
}


/* address=180001cf0 name=FUN_180001cf0 */

void FUN_180001cf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18000e980(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x120) + 0x18))(*(undefined8 *)(param_1 + 0x128));
  }
  plVar1 = *(longlong **)(param_1 + 0x130);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x130);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x180,0x80);
  return;
}


/* address=180001f00 name=FUN_180001f00 */

void FUN_180001f00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18000ec80(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180002110 name=FUN_180002110 */

void FUN_180002110(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18000ec80(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180002320 name=FUN_180002320 */

void FUN_180002320(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18000f180(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180002530 name=FUN_180002530 */

void FUN_180002530(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18000f180(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180002740 name=FUN_180002740 */

void FUN_180002740(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18000f680(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180002950 name=FUN_180002950 */

void FUN_180002950(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18000f680(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180002b60 name=FUN_180002b60 */

void FUN_180002b60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18000fb50(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180002d70 name=FUN_180002d70 */

void FUN_180002d70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18000fb50(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180002f80 name=FUN_180002f80 */

void FUN_180002f80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180010050(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180003190 name=FUN_180003190 */

void FUN_180003190(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180010050(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=1800033a0 name=FUN_1800033a0 */

void FUN_1800033a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180010530(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=1800035b0 name=FUN_1800035b0 */

void FUN_1800035b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180010530(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=1800037c0 name=FUN_1800037c0 */

void FUN_1800037c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180010ae0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x3d0) + 0x18))(*(undefined8 *)(param_1 + 0x3d8));
  }
  plVar1 = *(longlong **)(param_1 + 0x3e0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x3e0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=1800039d0 name=FUN_1800039d0 */

void FUN_1800039d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180010ae0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x3d0) + 0x18))(*(undefined8 *)(param_1 + 0x3d8));
  }
  plVar1 = *(longlong **)(param_1 + 0x3e0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x3e0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=180003be0 name=FUN_180003be0 */

void FUN_180003be0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180010ff0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x18))(*(undefined8 *)(param_1 + 0x2b0));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b8);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180003df0 name=FUN_180003df0 */

void FUN_180003df0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180010ff0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x18))(*(undefined8 *)(param_1 + 0x2b0));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b8);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180004000 name=FUN_180004000 */

void FUN_180004000(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800114f0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=180004210 name=FUN_180004210 */

void FUN_180004210(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800114f0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=180004420 name=FUN_180004420 */

void FUN_180004420(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180011ac0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x18))(*(undefined8 *)(param_1 + 0x2e8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2f0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2f0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180004630 name=FUN_180004630 */

void FUN_180004630(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180011ac0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x18))(*(undefined8 *)(param_1 + 0x2e8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2f0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2f0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180004840 name=FUN_180004840 */

void FUN_180004840(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180011fc0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x330) + 0x18))(*(undefined8 *)(param_1 + 0x338));
  }
  plVar1 = *(longlong **)(param_1 + 0x340);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x340);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180004a50 name=FUN_180004a50 */

void FUN_180004a50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180011fc0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x330) + 0x18))(*(undefined8 *)(param_1 + 0x338));
  }
  plVar1 = *(longlong **)(param_1 + 0x340);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x340);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180004c60 name=FUN_180004c60 */

void FUN_180004c60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800124c0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180004e70 name=FUN_180004e70 */

void FUN_180004e70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800124c0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180005080 name=FUN_180005080 */

void FUN_180005080(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180012be0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2c0) + 0x18))(*(undefined8 *)(param_1 + 0x2c8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2d0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2d0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180005290 name=FUN_180005290 */

void FUN_180005290(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180012be0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2c0) + 0x18))(*(undefined8 *)(param_1 + 0x2c8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2d0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2d0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=1800054a0 name=FUN_1800054a0 */

void FUN_1800054a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180013100(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=1800056b0 name=FUN_1800056b0 */

void FUN_1800056b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180013100(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=1800058c0 name=FUN_1800058c0 */

void FUN_1800058c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800137f0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180005ad0 name=FUN_180005ad0 */

void FUN_180005ad0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800137f0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180005ce0 name=FUN_180005ce0 */

void FUN_180005ce0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180013cf0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180005ef0 name=FUN_180005ef0 */

void FUN_180005ef0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180013cf0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180006100 name=FUN_180006100 */

void FUN_180006100(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800141d0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180006310 name=FUN_180006310 */

void FUN_180006310(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800141d0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180006520 name=FUN_180006520 */

void FUN_180006520(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800146d0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180006730 name=FUN_180006730 */

void FUN_180006730(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800146d0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180006940 name=FUN_180006940 */

void FUN_180006940(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180014bd0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x18))(*(undefined8 *)(param_1 + 0x2b0));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b8);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180006b50 name=FUN_180006b50 */

void FUN_180006b50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180014bd0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x18))(*(undefined8 *)(param_1 + 0x2b0));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b8);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180006d60 name=FUN_180006d60 */

void FUN_180006d60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180015160(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    (**(code **)(*(longlong *)(param_1 + 800) + 0x18))(*(undefined8 *)(param_1 + 0x328));
  }
  plVar1 = *(longlong **)(param_1 + 0x330);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x330);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180006f70 name=FUN_180006f70 */

void FUN_180006f70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180015160(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    (**(code **)(*(longlong *)(param_1 + 800) + 0x18))(*(undefined8 *)(param_1 + 0x328));
  }
  plVar1 = *(longlong **)(param_1 + 0x330);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x330);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180007180 name=FUN_180007180 */

void FUN_180007180(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180015660(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2f8) + 0x18))(*(undefined8 *)(param_1 + 0x300));
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x308);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180007390 name=FUN_180007390 */

void FUN_180007390(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180015660(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2f8) + 0x18))(*(undefined8 *)(param_1 + 0x300));
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x308);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=1800075a0 name=FUN_1800075a0 */

void FUN_1800075a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180015c20(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=1800077b0 name=FUN_1800077b0 */

void FUN_1800077b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180015c20(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=1800079c0 name=FUN_1800079c0 */

void FUN_1800079c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180016120(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=180007bd0 name=FUN_180007bd0 */

void FUN_180007bd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180016120(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=180007de0 name=FUN_180007de0 */

void FUN_180007de0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180016980(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a0) + 0x18))(*(undefined8 *)(param_1 + 0x2a8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180007ff0 name=FUN_180007ff0 */

void FUN_180007ff0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180016980(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a0) + 0x18))(*(undefined8 *)(param_1 + 0x2a8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180008200 name=FUN_180008200 */

void FUN_180008200(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180016e90(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x3e0) + 0x18))(*(undefined8 *)(param_1 + 1000));
  }
  plVar1 = *(longlong **)(param_1 + 0x3f0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x3f0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=180008410 name=FUN_180008410 */

void FUN_180008410(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180016e90(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x3e0) + 0x18))(*(undefined8 *)(param_1 + 1000));
  }
  plVar1 = *(longlong **)(param_1 + 0x3f0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x3f0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=180008620 name=FUN_180008620 */

void FUN_180008620(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180017810(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2f8) + 0x18))(*(undefined8 *)(param_1 + 0x300));
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x308);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180008830 name=FUN_180008830 */

void FUN_180008830(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180017810(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2f8) + 0x18))(*(undefined8 *)(param_1 + 0x300));
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x308);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180008a40 name=FUN_180008a40 */

void FUN_180008a40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180017de0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180008c50 name=FUN_180008c50 */

void FUN_180008c50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180017de0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180008e60 name=FUN_180008e60 */

void FUN_180008e60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800182c0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180009070 name=FUN_180009070 */

void FUN_180009070(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800182c0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180009280 name=FUN_180009280 */

void FUN_180009280(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180018790(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=180009490 name=FUN_180009490 */

void FUN_180009490(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180018790(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x300,0x80);
  return;
}


/* address=1800096a0 name=FUN_1800096a0 */

void FUN_1800096a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (((*(int *)(param_1 + 0x30) == 1) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0)) {
    ppcVar3 = *(code ***)(param_1 + 0x48);
    if (*ppcVar3 != (code *)0x0) {
      (**ppcVar3)(lVar2);
    }
    if (ppcVar3[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x90) + 0x18))(*(undefined8 *)(param_1 + 0x98));
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xa0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=180009890 name=FUN_180009890 */

void FUN_180009890(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (((*(int *)(param_1 + 0x30) == 1) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0)) {
    ppcVar3 = *(code ***)(param_1 + 0x48);
    if (*ppcVar3 != (code *)0x0) {
      (**ppcVar3)(lVar2);
    }
    if (ppcVar3[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x90) + 0x18))(*(undefined8 *)(param_1 + 0x98));
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xa0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=180009a80 name=FUN_180009a80 */

void FUN_180009a80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180018c90(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x348) + 0x18))(*(undefined8 *)(param_1 + 0x350));
  }
  plVar1 = *(longlong **)(param_1 + 0x358);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x358);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180009c90 name=FUN_180009c90 */

void FUN_180009c90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180018c90(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x348) + 0x18))(*(undefined8 *)(param_1 + 0x350));
  }
  plVar1 = *(longlong **)(param_1 + 0x358);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x358);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=180009ea0 name=FUN_180009ea0 */

void FUN_180009ea0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019290(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x378) + 0x18))(*(undefined8 *)(param_1 + 0x380));
  }
  plVar1 = *(longlong **)(param_1 + 0x388);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x388);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=18000a0b0 name=FUN_18000a0b0 */

void FUN_18000a0b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019290(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x378) + 0x18))(*(undefined8 *)(param_1 + 0x380));
  }
  plVar1 = *(longlong **)(param_1 + 0x388);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x388);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x400,0x80);
  return;
}


/* address=18000a2c0 name=FUN_18000a2c0 */

void FUN_18000a2c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800195d0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x338) + 0x18))(*(undefined8 *)(param_1 + 0x340));
  }
  plVar1 = *(longlong **)(param_1 + 0x348);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x348);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=18000a4d0 name=FUN_18000a4d0 */

void FUN_18000a4d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800195d0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x338) + 0x18))(*(undefined8 *)(param_1 + 0x340));
  }
  plVar1 = *(longlong **)(param_1 + 0x348);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x348);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x380,0x80);
  return;
}


/* address=18000a6e0 name=FUN_18000a6e0 */

void FUN_18000a6e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019bd0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))(*(undefined8 *)(param_1 + 0x150));
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x158);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x180,0x80);
  return;
}


/* address=18000a8f0 name=FUN_18000a8f0 */

void FUN_18000a8f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019bd0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))(*(undefined8 *)(param_1 + 0x150));
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x158);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x180,0x80);
  return;
}


/* address=18000ab00 name=FUN_18000ab00 */

void FUN_18000ab00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019d90(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=18000ad10 name=FUN_18000ad10 */

void FUN_18000ad10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019d90(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=18000af20 name=FUN_18000af20 */

void FUN_18000af20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019fb0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=18000b130 name=FUN_18000b130 */

void FUN_18000b130(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019fb0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd0);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=18000b340 name=FUN_18000b340 */

void FUN_18000b340(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a1d0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    (**(code **)(*(longlong *)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 0xd0));
  }
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd8);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=18000b550 name=FUN_18000b550 */

void FUN_18000b550(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a1d0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    (**(code **)(*(longlong *)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 0xd0));
  }
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd8);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=18000b760 name=FUN_18000b760 */

void FUN_18000b760(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a3f0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))(*(undefined8 *)(param_1 + 0x150));
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x158);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x180,0x80);
  return;
}


/* address=18000b970 name=FUN_18000b970 */

void FUN_18000b970(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a3f0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))(*(undefined8 *)(param_1 + 0x150));
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x158);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x180,0x80);
  return;
}


/* address=18000bb80 name=FUN_18000bb80 */

void FUN_18000bb80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a5e0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))(*(undefined8 *)(param_1 + 0x88));
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x90);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=18000bd10 name=FUN_18000bd10 */

void FUN_18000bd10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a5e0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))(*(undefined8 *)(param_1 + 0x88));
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x90);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=18000bea0 name=FUN_18000bea0 */

void FUN_18000bea0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a7f0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x160) + 0x18))(*(undefined8 *)(param_1 + 0x168));
  }
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x170);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x180,0x80);
  return;
}


/* address=18000c030 name=FUN_18000c030 */

void FUN_18000c030(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a7f0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x160) + 0x18))(*(undefined8 *)(param_1 + 0x168));
  }
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x170);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x180,0x80);
  return;
}


/* address=18000c1c0 name=FUN_18000c1c0 */

void FUN_18000c1c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001b4e0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xd8) + 0x18))(*(undefined8 *)(param_1 + 0xe0));
  }
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xe8);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=18000c350 name=FUN_18000c350 */

void FUN_18000c350(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001b4e0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xd8) + 0x18))(*(undefined8 *)(param_1 + 0xe0));
  }
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xe8);
    }
  }
  thunk_FUN_1803e4c80(param_1,0x100,0x80);
  return;
}


/* address=18000c4e0 name=FUN_18000c4e0 */

void FUN_18000c4e0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(param_1[1],lVar1,1);
  }
  uVar2 = param_1[3];
  if ((uVar2 < 0xfffffffffffffffe) && (uVar2 != 0)) {
    thunk_FUN_1803e4c80(param_1[4],uVar2,1);
  }
  thunk_FUN_1803e4c80(param_1,0x30,8);
  return;
}


/* address=18000c550 name=FUN_18000c550 */

void FUN_18000c550(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],*param_1,1);
  }
  lVar1 = param_1[3];
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(param_1[4],lVar1,1);
  }
  thunk_FUN_1803e4c80(param_1,0x30,8);
  return;
}


/* address=18000c5b0 name=FUN_18000c5b0 */

void FUN_18000c5b0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x20),uVar1,1);
  }
  thunk_FUN_1803e4c80(param_1,0x30,8);
  return;
}


/* address=18000c600 name=FUN_18000c600 */

void FUN_18000c600(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_1803be9d0();
  uVar1 = *param_1;
  cVar2 = FUN_1803aab30(uVar1);
  if (cVar2 != '\0') {
    FUN_1803bea90(uVar1);
    return;
  }
  return;
}


/* address=18000c670 name=FUN_18000c670 */

void FUN_18000c670(longlong **param_1)

{
  longlong *plVar1;
  
  FUN_1802ce310();
  FUN_1802cf0f0(param_1);
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180239e00(param_1);
    return;
  }
  return;
}


/* address=18000c710 name=FUN_18000c710 */

void FUN_18000c710(longlong **param_1)

{
  longlong *plVar1;
  
  FUN_1802cf0f0();
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180239e00();
    return;
  }
  return;
}


/* address=18000c780 name=FUN_18000c780 */

void FUN_18000c780(longlong **param_1)

{
  longlong *plVar1;
  
  FUN_180347b10();
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18023a030();
    return;
  }
  return;
}


/* address=18000c7f0 name=FUN_18000c7f0 */

void FUN_18000c7f0(longlong **param_1)

{
  longlong *plVar1;
  
  FUN_180347960();
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180239ea0();
    return;
  }
  return;
}


/* address=18000c860 name=FUN_18000c860 */

void FUN_18000c860(longlong **param_1)

{
  longlong *plVar1;
  
  FUN_180347ca0();
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18023a030();
    return;
  }
  return;
}


/* address=18000c8d0 name=FUN_18000c8d0 */

void FUN_18000c8d0(longlong **param_1)

{
  longlong *plVar1;
  
  FUN_180347e30();
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18023a1b0();
    return;
  }
  return;
}


/* address=18000c940 name=FUN_18000c940 */

void FUN_18000c940(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = *(longlong *)(param_1 + 2);
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 4),lVar1,1);
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_180001300(param_1 + 2);
    return;
  }
  return;
}


/* address=18000c980 name=FUN_18000c980 */

void FUN_18000c980(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = *(longlong *)(param_1 + 2);
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 4),lVar1,1);
      return;
    }
  }
  else if (*param_1 == 1) {
    FUN_1800010f0(param_1 + 2);
    return;
  }
  return;
}


/* address=18000c9c0 name=FUN_18000c9c0 */

void FUN_18000c9c0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_18000e980(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000ca80 name=FUN_18000ca80 */

void FUN_18000ca80(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_18000ec80(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000cb40 name=FUN_18000cb40 */

void FUN_18000cb40(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_18000f180(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000cc00 name=FUN_18000cc00 */

void FUN_18000cc00(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_18000f680(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000ccc0 name=FUN_18000ccc0 */

void FUN_18000ccc0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_18000fb50(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000cd80 name=FUN_18000cd80 */

void FUN_18000cd80(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180010050(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000ce40 name=FUN_18000ce40 */

void FUN_18000ce40(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180010530(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000cf00 name=FUN_18000cf00 */

void FUN_18000cf00(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180010ae0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000cfc0 name=FUN_18000cfc0 */

void FUN_18000cfc0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180010ff0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d080 name=FUN_18000d080 */

void FUN_18000d080(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_1800114f0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d140 name=FUN_18000d140 */

void FUN_18000d140(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180011ac0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d200 name=FUN_18000d200 */

void FUN_18000d200(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180011fc0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d2c0 name=FUN_18000d2c0 */

void FUN_18000d2c0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_1800124c0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d380 name=FUN_18000d380 */

void FUN_18000d380(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180012be0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d440 name=FUN_18000d440 */

void FUN_18000d440(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180013100(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d500 name=FUN_18000d500 */

void FUN_18000d500(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_1800137f0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d5c0 name=FUN_18000d5c0 */

void FUN_18000d5c0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180013cf0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d680 name=FUN_18000d680 */

void FUN_18000d680(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_1800141d0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d740 name=FUN_18000d740 */

void FUN_18000d740(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_1800146d0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d800 name=FUN_18000d800 */

void FUN_18000d800(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180014bd0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d8c0 name=FUN_18000d8c0 */

void FUN_18000d8c0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180015160(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000d980 name=FUN_18000d980 */

void FUN_18000d980(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180015660(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000da40 name=FUN_18000da40 */

void FUN_18000da40(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180015c20(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000db00 name=FUN_18000db00 */

void FUN_18000db00(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180016120(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000dbc0 name=FUN_18000dbc0 */

void FUN_18000dbc0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180016980(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000dc80 name=FUN_18000dc80 */

void FUN_18000dc80(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180016e90(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000dd40 name=FUN_18000dd40 */

void FUN_18000dd40(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180017810(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000de00 name=FUN_18000de00 */

void FUN_18000de00(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180017de0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000dec0 name=FUN_18000dec0 */

void FUN_18000dec0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_1800182c0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000df80 name=FUN_18000df80 */

void FUN_18000df80(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180018790(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000e040 name=FUN_18000e040 */

void FUN_18000e040(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000e0f0 name=FUN_18000e0f0 */

void FUN_18000e0f0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180018c90(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000e1b0 name=FUN_18000e1b0 */

void FUN_18000e1b0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180019290(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000e270 name=FUN_18000e270 */

void FUN_18000e270(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_1800195d0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000e330 name=FUN_18000e330 */

void FUN_18000e330(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180019bd0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000e3f0 name=FUN_18000e3f0 */

void FUN_18000e3f0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180019d90(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000e4b0 name=FUN_18000e4b0 */

void FUN_18000e4b0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_180019fb0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000e570 name=FUN_18000e570 */

void FUN_18000e570(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_18001a1d0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000e630 name=FUN_18000e630 */

void FUN_18000e630(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_18001a3f0(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18000e6f0 name=FUN_18000e6f0 */

void FUN_18000e6f0(int *param_1)

{
  if (*param_1 == 0) {
    FUN_18001a5e0(param_1 + 2);
    return;
  }
  if (*param_1 == 1) {
    FUN_180001400(param_1 + 2);
    return;
  }
  return;
}


/* address=18000e710 name=FUN_18000e710 */

void FUN_18000e710(int *param_1)

{
  if (*param_1 == 0) {
    FUN_18001a7f0(param_1 + 2);
    return;
  }
  if (*param_1 == 1) {
    FUN_180001400(param_1 + 2);
    return;
  }
  return;
}


/* address=18000e730 name=FUN_18000e730 */

void FUN_18000e730(int *param_1)

{
  if (*param_1 == 0) {
    FUN_18001b4e0(param_1 + 2);
    return;
  }
  if (*param_1 == 1) {
    FUN_180001400(param_1 + 2);
    return;
  }
  return;
}


/* address=18000e750 name=FUN_18000e750 */

void FUN_18000e750(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 1) {
    FUN_180001300(param_1 + 2);
    return;
  }
  if (((*param_1 == 0) && (lVar1 = *(longlong *)(param_1 + 2), lVar1 != -1)) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 4),lVar1,1);
    return;
  }
  return;
}


/* address=18000e790 name=FUN_18000e790 */

void FUN_18000e790(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 1) {
    FUN_1800010f0(param_1 + 2);
    return;
  }
  if (((*param_1 == 0) && (lVar1 = *(longlong *)(param_1 + 2), lVar1 != -1)) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 4),lVar1,1);
    return;
  }
  return;
}


/* address=18000e7d0 name=FUN_18000e7d0 */

void FUN_18000e7d0(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    FUN_18001b800(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xe8) == '\x03') {
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    ppcVar2 = *(code ***)(param_1 + 0xe0);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(uVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
    }
    FUN_18001bdd0(param_1 + 0x68);
    return;
  }
  return;
}


/* address=18000e8a0 name=FUN_18000e8a0 */

void FUN_18000e8a0(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*(char *)(param_1 + 0x148) == '\0') {
LAB_18000e8d6:
    FUN_18001b800(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x148) == '\x03') {
    if (*(char *)(param_1 + 0x140) == '\x03') {
      uVar1 = *(undefined8 *)(param_1 + 0x130);
      ppcVar2 = *(code ***)(param_1 + 0x138);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(uVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
      }
      FUN_18001bdd0(param_1 + 0xc0);
      return;
    }
    if (*(char *)(param_1 + 0x140) == '\0') {
      param_1 = param_1 + 0x68;
      goto LAB_18000e8d6;
    }
  }
  return;
}


/* address=18000e980 name=FUN_18000e980 */

void FUN_18000e980(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0xd0) == '\x03') {
    if (*(char *)(param_1 + 200) == '\x03') {
      if (*(char *)(param_1 + 0xc0) == '\x03') {
        if (*(char *)(param_1 + 0xb8) == '\x03') {
          if (*(char *)(param_1 + 0xb0) == '\0') {
            if (*(int *)(param_1 + 0x98) == 1) {
              FUN_1802dfb40(*(undefined8 *)(param_1 + 0xa0));
            }
            plVar1 = *(longlong **)(param_1 + 0xa8);
            if (plVar1 != (longlong *)0x0) {
              LOCK();
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                FUN_180239850(param_1 + 0xa8);
                return;
              }
            }
          }
        }
        else if (*(char *)(param_1 + 0xb8) == '\0') {
          if (*(int *)(param_1 + 0x80) == 1) {
            FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
          }
          plVar1 = *(longlong **)(param_1 + 0x90);
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              FUN_180239850(param_1 + 0x90);
              return;
            }
          }
        }
      }
      else if (*(char *)(param_1 + 0xc0) == '\0') {
        if (*(int *)(param_1 + 0x68) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x70));
        }
        plVar1 = *(longlong **)(param_1 + 0x78);
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            FUN_180239850(param_1 + 0x78);
            return;
          }
        }
      }
    }
    else if (*(char *)(param_1 + 200) == '\0') {
      if (*(int *)(param_1 + 0x38) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x40));
      }
      plVar1 = *(longlong **)(param_1 + 0x48);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_180239850(param_1 + 0x48);
          return;
        }
      }
    }
  }
  return;
}


/* address=18000ec80 name=FUN_18000ec80 */

void FUN_18000ec80(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x240) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x238) != '\x03') {
      if (*(char *)(param_1 + 0x238) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x50);
      return;
    }
    if (*(char *)(param_1 + 0x231) != '\x03') {
      if (*(char *)(param_1 + 0x231) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
      }
      plVar2 = *(longlong **)(param_1 + 0x88);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x88);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xb9);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x228) == '\x03') {
        if (*(char *)(param_1 + 0x218) == '\x03') {
          FUN_18000e7d0(param_1 + 0x128);
        }
        else if (*(char *)(param_1 + 0x218) == '\0') {
          FUN_18001b800(param_1 + 0xd0);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x90) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
        }
        plVar2 = *(longlong **)(param_1 + 0xa0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18000ef25;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xba) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xba) = 0;
    if (*(int *)(param_1 + 0x90) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18000ef25:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=18000f180 name=FUN_18000f180 */

void FUN_18000f180(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x230) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x230) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x228) != '\x03') {
      if (*(char *)(param_1 + 0x228) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x38) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x40));
      }
      plVar2 = *(longlong **)(param_1 + 0x48);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x48);
      return;
    }
    if (*(char *)(param_1 + 0x220) != '\x03') {
      if (*(char *)(param_1 + 0x220) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x68) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x70));
      }
      plVar2 = *(longlong **)(param_1 + 0x78);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x78);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xa8);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x218) == '\x03') {
        if (*(char *)(param_1 + 0x210) == '\x03') {
          FUN_18000e7d0(param_1 + 0x120);
        }
        else if (*(char *)(param_1 + 0x210) == '\0') {
          FUN_18001b800(param_1 + 200);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xb0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x80) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
        }
        plVar2 = *(longlong **)(param_1 + 0x90);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18000f41c;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xb0);
      ppcVar4 = *(code ***)(param_1 + 0xb8);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 0xd0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xa9) != '\0') && (*(longlong *)(param_1 + 0x98) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x98),1);
    }
    *(undefined *)(param_1 + 0xa9) = 0;
    if (*(int *)(param_1 + 0x80) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
    }
    plVar2 = *(longlong **)(param_1 + 0x90);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18000f41c:
        FUN_180239850(param_1 + 0x90);
        return;
      }
    }
  }
  return;
}


/* address=18000f680 name=FUN_18000f680 */

void FUN_18000f680(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x230) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x230) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x228) != '\x03') {
      if (*(char *)(param_1 + 0x228) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x38) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x40));
      }
      plVar2 = *(longlong **)(param_1 + 0x48);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x48);
      return;
    }
    if (*(char *)(param_1 + 0x220) != '\x03') {
      if (*(char *)(param_1 + 0x220) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x68) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x70));
      }
      plVar2 = *(longlong **)(param_1 + 0x78);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x78);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xa8);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x218) == '\x03') {
        FUN_18000e8a0(param_1 + 200);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xb0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x80) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
        }
        plVar2 = *(longlong **)(param_1 + 0x90);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18000f8f9;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xb0);
      ppcVar4 = *(code ***)(param_1 + 0xb8);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 0xd0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xa9) != '\0') && (*(longlong *)(param_1 + 0x98) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x98),1);
    }
    *(undefined *)(param_1 + 0xa9) = 0;
    if (*(int *)(param_1 + 0x80) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
    }
    plVar2 = *(longlong **)(param_1 + 0x90);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18000f8f9:
        FUN_180239850(param_1 + 0x90);
        return;
      }
    }
  }
  return;
}


/* address=18000fb50 name=FUN_18000fb50 */

void FUN_18000fb50(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x2b8) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x2b8) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x2b0) != '\x03') {
      if (*(char *)(param_1 + 0x2b0) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x58) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x60));
      }
      plVar2 = *(longlong **)(param_1 + 0x68);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x68);
      return;
    }
    if (*(char *)(param_1 + 0x2aa) != '\x03') {
      if (*(char *)(param_1 + 0x2aa) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0xa8) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
      }
      plVar2 = *(longlong **)(param_1 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0xb8);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x102);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x27a) == '\x03') {
        if (*(char *)(param_1 + 600) == '\x03') {
          FUN_18000e7d0(param_1 + 0x168);
        }
        else if (*(char *)(param_1 + 600) == '\0') {
          FUN_18001b800(param_1 + 0x110);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x280),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0xc0) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 200));
        }
        plVar2 = *(longlong **)(param_1 + 0xd0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18000fdf8;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x108);
      ppcVar4 = *(code ***)(param_1 + 0x110);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x128) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x118),*(longlong *)(param_1 + 0x128) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0x103) != '\0') && (*(longlong *)(param_1 + 0xd8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xd8),1);
    }
    *(undefined *)(param_1 + 0x103) = 0;
    if (*(int *)(param_1 + 0xc0) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 200));
    }
    plVar2 = *(longlong **)(param_1 + 0xd0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18000fdf8:
        FUN_180239850(param_1 + 0xd0);
        return;
      }
    }
  }
  return;
}


/* address=180010050 name=FUN_180010050 */

void FUN_180010050(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x240) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x238) != '\x03') {
      if (*(char *)(param_1 + 0x238) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x50);
      return;
    }
    if (*(char *)(param_1 + 0x231) != '\x03') {
      if (*(char *)(param_1 + 0x231) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
      }
      plVar2 = *(longlong **)(param_1 + 0x88);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x88);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xb9);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x228) == '\x03') {
        FUN_18000e8a0(param_1 + 0xd0);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x90) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
        }
        plVar2 = *(longlong **)(param_1 + 0xa0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800102d2;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xba) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xba) = 0;
    if (*(int *)(param_1 + 0x90) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800102d2:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=180010530 name=FUN_180010530 */

void FUN_180010530(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x230) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x230) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x228) != '\x03') {
      if (*(char *)(param_1 + 0x228) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x38) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x40));
      }
      plVar2 = *(longlong **)(param_1 + 0x48);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x48);
      return;
    }
    if (*(char *)(param_1 + 0x220) != '\x03') {
      if (*(char *)(param_1 + 0x220) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x68) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x70));
      }
      plVar2 = *(longlong **)(param_1 + 0x78);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x78);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xa8);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x218) == '\x03') {
        if (*(char *)(param_1 + 0x210) == '\x03') {
          if (*(char *)(param_1 + 0x208) == '\x03') {
            uVar3 = *(undefined8 *)(param_1 + 0x1f8);
            ppcVar4 = *(code ***)(param_1 + 0x200);
            if (*ppcVar4 != (code *)0x0) {
              (**ppcVar4)(uVar3);
            }
            if (ppcVar4[1] != (code *)0x0) {
              thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
            }
            FUN_18001bdd0(param_1 + 0x188);
          }
          else if (*(char *)(param_1 + 0x208) == '\0') {
            FUN_18001b800(param_1 + 0x130);
          }
        }
        else if (*(char *)(param_1 + 0x210) == '\0') {
          FUN_18001b800(param_1 + 200);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xb0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x80) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
        }
        plVar2 = *(longlong **)(param_1 + 0x90);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180010846;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xb0);
      ppcVar4 = *(code ***)(param_1 + 0xb8);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 0xd0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xa9) != '\0') && (*(longlong *)(param_1 + 0x98) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x98),1);
    }
    *(undefined *)(param_1 + 0xa9) = 0;
    if (*(int *)(param_1 + 0x80) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
    }
    plVar2 = *(longlong **)(param_1 + 0x90);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180010846:
        FUN_180239850(param_1 + 0x90);
        return;
      }
    }
  }
  return;
}


/* address=180010ae0 name=FUN_180010ae0 */

void FUN_180010ae0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x380) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x380) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x378) != '\x03') {
      if (*(char *)(param_1 + 0x378) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x80) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
      }
      plVar2 = *(longlong **)(param_1 + 0x90);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x90);
      return;
    }
    if (*(char *)(param_1 + 0x330) != '\x03') {
      if (*(char *)(param_1 + 0x330) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0xf8) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x100));
      }
      plVar2 = *(longlong **)(param_1 + 0x108);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x108);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x138);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x329) == '\x03') {
        if (*(char *)(param_1 + 0x2d8) == '\x03') {
          FUN_18000e7d0(param_1 + 0x1e8);
        }
        else if (*(char *)(param_1 + 0x2d8) == '\0') {
          FUN_18001b800(param_1 + 400);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x180),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x110) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x118));
        }
        plVar2 = *(longlong **)(param_1 + 0x120);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180010d94;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x180);
      ppcVar4 = *(code ***)(param_1 + 0x188);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x1a0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 400),*(longlong *)(param_1 + 0x1a0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0x17a) != '\0') && (*(longlong *)(param_1 + 0x128) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x128),1);
    }
    *(undefined *)(param_1 + 0x17a) = 0;
    if (*(int *)(param_1 + 0x110) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x118));
    }
    plVar2 = *(longlong **)(param_1 + 0x120);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180010d94:
        FUN_180239850(param_1 + 0x120);
        return;
      }
    }
  }
  return;
}


/* address=180010ff0 name=FUN_180010ff0 */

void FUN_180010ff0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 600) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 600) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x250) != '\x03') {
      if (*(char *)(param_1 + 0x250) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x50);
      return;
    }
    if (*(char *)(param_1 + 0x248) != '\x03') {
      if (*(char *)(param_1 + 0x248) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
      }
      plVar2 = *(longlong **)(param_1 + 0x88);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x88);
      return;
    }
    cVar1 = *(char *)(param_1 + 200);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x230) == '\x03') {
        if (*(char *)(param_1 + 0x228) == '\x03') {
          FUN_18000e7d0(param_1 + 0x138);
        }
        else if (*(char *)(param_1 + 0x228) == '\0') {
          FUN_18001b800(param_1 + 0xe0);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x238),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x98) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0xa0));
        }
        plVar2 = *(longlong **)(param_1 + 0xa8);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180011295;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xd0);
      ppcVar4 = *(code ***)(param_1 + 0xd8);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xe0),*(longlong *)(param_1 + 0xf0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xc9) != '\0') && (*(longlong *)(param_1 + 0xb8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xb8),1);
    }
    *(undefined *)(param_1 + 0xc9) = 0;
    if (*(int *)(param_1 + 0x98) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xa0));
    }
    plVar2 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180011295:
        FUN_180239850(param_1 + 0xa8);
        return;
      }
    }
  }
  return;
}


/* address=1800114f0 name=FUN_1800114f0 */

void FUN_1800114f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 800) == '\0') {
    FUN_18001ac40(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 800) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x318) != '\x03') {
    if (*(char *)(param_1 + 0x318) != '\0') {
      return;
    }
    FUN_18001ac40(param_1 + 0x68);
    return;
  }
  if (*(char *)(param_1 + 0x310) == '\0') {
    if (*(int *)(param_1 + 200) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xd0));
    }
    plVar2 = *(longlong **)(param_1 + 0xd8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xd8);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0xe0);
    if (lVar5 == -1) {
      return;
    }
    param_1 = param_1 + 0xe0;
    if (lVar5 == 0) {
      return;
    }
    goto LAB_1800117d1;
  }
  if (*(char *)(param_1 + 0x310) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x168);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x308) == '\x03') {
      if (*(char *)(param_1 + 0x300) == '\x03') {
        FUN_18000e7d0(param_1 + 0x210);
      }
      else if (*(char *)(param_1 + 0x300) == '\0') {
        FUN_18001b800(param_1 + 0x1b8);
      }
    }
    else if (((*(char *)(param_1 + 0x308) == '\0') &&
             (lVar5 = *(longlong *)(param_1 + 0x180), lVar5 != -1)) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x188),lVar5,1);
    }
    FUN_1803aa820(*(undefined8 *)(param_1 + 0x170),1);
LAB_180011738:
    if ((*(char *)(param_1 + 0x169) != '\0') && (*(longlong *)(param_1 + 0x158) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x158),1);
    }
    *(undefined *)(param_1 + 0x169) = 0;
    if (*(int *)(param_1 + 0x110) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x118));
    }
    plVar2 = *(longlong **)(param_1 + 0x120);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x120);
      }
    }
    if (*(char *)(param_1 + 0x16a) != '\x01') {
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0x170);
      ppcVar4 = *(code ***)(param_1 + 0x178);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 400) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x180),*(longlong *)(param_1 + 400) << 3,8);
      }
      goto LAB_180011738;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x110) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x118));
    }
    plVar2 = *(longlong **)(param_1 + 0x120);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x120);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x128);
  if ((lVar5 == -1) || (param_1 = param_1 + 0x128, lVar5 == 0)) {
    return;
  }
LAB_1800117d1:
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar5,1);
  return;
}


/* address=180011ac0 name=FUN_180011ac0 */

void FUN_180011ac0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x290) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x290) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x288) != '\x03') {
      if (*(char *)(param_1 + 0x288) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x50) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x58));
      }
      plVar2 = *(longlong **)(param_1 + 0x60);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x60);
      return;
    }
    if (*(char *)(param_1 + 0x281) != '\x03') {
      if (*(char *)(param_1 + 0x281) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x98) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0xa0));
      }
      plVar2 = *(longlong **)(param_1 + 0xa8);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0xa8);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xe9);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 600) == '\x03') {
        if (*(char *)(param_1 + 0x248) == '\x03') {
          FUN_18000e7d0(param_1 + 0x158);
        }
        else if (*(char *)(param_1 + 0x248) == '\0') {
          FUN_18001b800(param_1 + 0x100);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xf0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0xb0) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb8));
        }
        plVar2 = *(longlong **)(param_1 + 0xc0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180011d68;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xf0);
      ppcVar4 = *(code ***)(param_1 + 0xf8);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x110) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x100),*(longlong *)(param_1 + 0x110) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xea) != '\0') && (*(longlong *)(param_1 + 200) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 200),1);
    }
    *(undefined *)(param_1 + 0xea) = 0;
    if (*(int *)(param_1 + 0xb0) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb8));
    }
    plVar2 = *(longlong **)(param_1 + 0xc0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180011d68:
        FUN_180239850(param_1 + 0xc0);
        return;
      }
    }
  }
  return;
}


/* address=180011fc0 name=FUN_180011fc0 */

void FUN_180011fc0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x2e0) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x2e0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x2d8) != '\x03') {
      if (*(char *)(param_1 + 0x2d8) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x60) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x68));
      }
      plVar2 = *(longlong **)(param_1 + 0x70);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x70);
      return;
    }
    if (*(char *)(param_1 + 0x2b0) != '\x03') {
      if (*(char *)(param_1 + 0x2b0) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0xb8) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0xc0));
      }
      plVar2 = *(longlong **)(param_1 + 200);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 200);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xf8);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x2a9) == '\x03') {
        if (*(char *)(param_1 + 0x278) == '\x03') {
          FUN_18000e7d0(param_1 + 0x188);
        }
        else if (*(char *)(param_1 + 0x278) == '\0') {
          FUN_18001b800(param_1 + 0x130);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x120),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0xd0) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0xd8));
        }
        plVar2 = *(longlong **)(param_1 + 0xe0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180012268;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x120);
      ppcVar4 = *(code ***)(param_1 + 0x128);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x140) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x130),*(longlong *)(param_1 + 0x140) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0x11a) != '\0') && (*(longlong *)(param_1 + 0xe8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xe8),1);
    }
    *(undefined *)(param_1 + 0x11a) = 0;
    if (*(int *)(param_1 + 0xd0) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xd8));
    }
    plVar2 = *(longlong **)(param_1 + 0xe0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180012268:
        FUN_180239850(param_1 + 0xe0);
        return;
      }
    }
  }
  return;
}


/* address=1800124c0 name=FUN_1800124c0 */

void FUN_1800124c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  code **ppcVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *local_40;
  
  if (*(char *)(param_1 + 0x2b8) == '\0') {
    param_1 = param_1 + 0x10;
LAB_180012509:
    FUN_18001ad40(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x2b8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x2b0) != '\x03') {
    if (*(char *)(param_1 + 0x2b0) != '\0') {
      return;
    }
    param_1 = param_1 + 0x58;
    goto LAB_180012509;
  }
  if (*(char *)(param_1 + 0x2a9) == '\0') {
    if (*(int *)(param_1 + 0xa8) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
    }
    plVar2 = *(longlong **)(param_1 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xb8);
      }
    }
    local_40 = (longlong *)(param_1 + 0xc0);
    lVar6 = *(longlong *)(param_1 + 0xd0);
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 200) + 8);
      do {
        lVar3 = puVar7[-1];
        if ((-0x7ffffffffffffffe < lVar3) && (lVar3 != 0)) {
          thunk_FUN_1803e4c80(*puVar7,lVar3,1);
        }
        puVar7 = puVar7 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    goto LAB_1800127d4;
  }
  if (*(char *)(param_1 + 0x2a9) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x119);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x291) == '\x03') {
      FUN_18000e8a0(param_1 + 0x140);
    }
    else if (*(char *)(param_1 + 0x291) == '\0') {
      FUN_18024e7c0();
      if (*(longlong *)(param_1 + 0x120) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x128),*(longlong *)(param_1 + 0x120) * 0x18,8
                           );
      }
    }
    FUN_1803aa820(*(undefined8 *)(param_1 + 0x298),1);
LAB_18001273e:
    if ((*(char *)(param_1 + 0x11a) != '\0') && (*(longlong *)(param_1 + 0x108) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x108),1);
    }
    *(undefined *)(param_1 + 0x11a) = 0;
    if (*(int *)(param_1 + 0xd8) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe0));
    }
    plVar2 = *(longlong **)(param_1 + 0xe8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xe8);
      }
    }
    if (*(char *)(param_1 + 0x11b) != '\x01') {
      return;
    }
    FUN_18024e7c0();
  }
  else {
    if (cVar1 == '\x03') {
      uVar4 = *(undefined8 *)(param_1 + 0x120);
      ppcVar5 = *(code ***)(param_1 + 0x128);
      if (*ppcVar5 != (code *)0x0) {
        (**ppcVar5)(uVar4);
      }
      if (ppcVar5[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar4,ppcVar5[1],ppcVar5[2]);
      }
      if (*(longlong *)(param_1 + 0x140) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x130),*(longlong *)(param_1 + 0x140) << 3,8);
      }
      goto LAB_18001273e;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0xd8) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe0));
    }
    plVar2 = *(longlong **)(param_1 + 0xe8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xe8);
      }
    }
    FUN_18024e7c0();
  }
  local_40 = (longlong *)(param_1 + 0xf0);
LAB_1800127d4:
  if (*local_40 == 0) {
    return;
  }
  thunk_FUN_1803e4c80(local_40[1],*local_40 * 0x18,8);
  return;
}


/* address=180012be0 name=FUN_180012be0 */

void FUN_180012be0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x270) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x270) == '\x03') {
    if (*(char *)(param_1 + 0x268) == '\x03') {
      if (*(char *)(param_1 + 0x261) == '\x03') {
        if (*(char *)(param_1 + 0x259) == '\x03') {
          cVar1 = *(char *)(param_1 + 0xf1);
          if (cVar1 == '\x04') {
            if (*(char *)(param_1 + 0x250) == '\x03') {
              if (*(char *)(param_1 + 0x240) == '\x03') {
                FUN_18000e7d0(param_1 + 0x150);
              }
              else if (*(char *)(param_1 + 0x240) == '\0') {
                FUN_18001b800(param_1 + 0xf8);
              }
            }
            FUN_1803aa820(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe8));
          }
          else {
            if (cVar1 != '\x03') {
              if (cVar1 != '\0') {
                return;
              }
              if (*(int *)(param_1 + 0xa8) == 1) {
                FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
              }
              plVar2 = *(longlong **)(param_1 + 0xb8);
              if (plVar2 == (longlong *)0x0) {
                return;
              }
              LOCK();
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 != 0) {
                return;
              }
              FUN_180239850(param_1 + 0xb8);
              return;
            }
            if (((*(char *)(param_1 + 0x160) == '\x03') && (*(char *)(param_1 + 0x158) == '\x03'))
               && (*(char *)(param_1 + 0x150) == '\x03')) {
              FUN_1803abc90(param_1 + 0x110);
              if (*(longlong *)(param_1 + 0x118) != 0) {
                (**(code **)(*(longlong *)(param_1 + 0x118) + 0x18))
                          (*(undefined8 *)(param_1 + 0x120));
              }
            }
          }
          if (*(int *)(param_1 + 0xc0) == 1) {
            FUN_1802dfb40(*(undefined8 *)(param_1 + 200));
          }
          plVar2 = *(longlong **)(param_1 + 0xd0);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              FUN_180239850(param_1 + 0xd0);
              return;
            }
          }
        }
        else if (*(char *)(param_1 + 0x259) == '\0') {
          if (*(int *)(param_1 + 0x90) == 1) {
            FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
          }
          plVar2 = *(longlong **)(param_1 + 0xa0);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              FUN_180239850(param_1 + 0xa0);
              return;
            }
          }
        }
      }
      else if (*(char *)(param_1 + 0x261) == '\0') {
        if (*(int *)(param_1 + 0x78) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
        }
        plVar2 = *(longlong **)(param_1 + 0x88);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0x88);
            return;
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0x268) == '\0') {
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_180239850(param_1 + 0x50);
          return;
        }
      }
    }
  }
  return;
}


/* address=180013100 name=FUN_180013100 */

void FUN_180013100(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 800) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar4 = *(longlong **)(param_1 + 0x20);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180239850(param_1 + 0x20);
      }
    }
    plVar4 = (longlong *)(param_1 + 0x28);
    lVar5 = *plVar4;
    goto joined_r0x00018001345c;
  }
  if (*(char *)(param_1 + 800) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x318) != '\x03') {
    if (*(char *)(param_1 + 0x318) != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x68) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x70));
    }
    plVar4 = *(longlong **)(param_1 + 0x78);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180239850(param_1 + 0x78);
      }
    }
    plVar4 = (longlong *)(param_1 + 0x80);
    lVar5 = *plVar4;
    goto joined_r0x00018001345c;
  }
  if (*(char *)(param_1 + 0x310) == '\0') {
    if (*(int *)(param_1 + 200) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xd0));
    }
    plVar4 = *(longlong **)(param_1 + 0xd8);
    lVar5 = 0x18;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180239850(param_1 + 0xd8);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x310) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x168);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x308) == '\x03') {
        if (*(char *)(param_1 + 0x300) == '\x03') {
          FUN_18000e7d0(param_1 + 0x210);
        }
        else if (*(char *)(param_1 + 0x300) == '\0') {
          FUN_18001b800(param_1 + 0x1b8);
        }
      }
      else if (*(char *)(param_1 + 0x308) == '\0') {
        FUN_18001bb70(param_1 + 0x180);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x170),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x110) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x118));
        }
        plVar4 = *(longlong **)(param_1 + 0x120);
        lVar5 = 0x60;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            FUN_180239850(param_1 + 0x120);
          }
        }
        goto LAB_180013453;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x170);
      ppcVar3 = *(code ***)(param_1 + 0x178);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 400) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x180),*(longlong *)(param_1 + 400) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0x169) != '\0') && (*(longlong *)(param_1 + 0x158) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x158),1);
    }
    *(undefined *)(param_1 + 0x169) = 0;
    if (*(int *)(param_1 + 0x110) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x118));
    }
    plVar4 = *(longlong **)(param_1 + 0x120);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180239850(param_1 + 0x120);
      }
    }
    lVar5 = 0x60;
    if (*(char *)(param_1 + 0x16a) == '\0') {
      return;
    }
  }
LAB_180013453:
  plVar4 = (longlong *)((longlong)(int *)(param_1 + 200) + lVar5);
  lVar5 = *plVar4;
joined_r0x00018001345c:
  if (lVar5 != 0) {
    thunk_FUN_1803e4c80(plVar4[1],lVar5,1);
  }
  lVar5 = plVar4[3];
  if ((lVar5 != -1) && (lVar5 != 0)) {
    thunk_FUN_1803e4c80(plVar4[4],lVar5,1);
    return;
  }
  return;
}


/* address=1800137f0 name=FUN_1800137f0 */

void FUN_1800137f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x240) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x238) != '\x03') {
      if (*(char *)(param_1 + 0x238) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x50);
      return;
    }
    if (*(char *)(param_1 + 0x234) != '\x03') {
      if (*(char *)(param_1 + 0x234) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
      }
      plVar2 = *(longlong **)(param_1 + 0x88);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x88);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xbc);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x22c) == '\x03') {
        if (*(char *)(param_1 + 0x220) == '\x03') {
          FUN_18000e7d0(param_1 + 0x130);
        }
        else if (*(char *)(param_1 + 0x220) == '\0') {
          FUN_18001b800(param_1 + 0xd8);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x90) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
        }
        plVar2 = *(longlong **)(param_1 + 0xa0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180013a95;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xbd) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xbd) = 0;
    if (*(int *)(param_1 + 0x90) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180013a95:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=180013cf0 name=FUN_180013cf0 */

void FUN_180013cf0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x240) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x238) != '\x03') {
      if (*(char *)(param_1 + 0x238) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x50);
      return;
    }
    if (*(char *)(param_1 + 0x234) != '\x03') {
      if (*(char *)(param_1 + 0x234) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
      }
      plVar2 = *(longlong **)(param_1 + 0x88);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x88);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xbc);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x22c) == '\x03') {
        FUN_18000e8a0(param_1 + 0xd8);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x90) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
        }
        plVar2 = *(longlong **)(param_1 + 0xa0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180013f72;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xbd) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xbd) = 0;
    if (*(int *)(param_1 + 0x90) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180013f72:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800141d0 name=FUN_1800141d0 */

void FUN_1800141d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x240) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x238) != '\x03') {
      if (*(char *)(param_1 + 0x238) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x50);
      return;
    }
    if (*(char *)(param_1 + 0x231) != '\x03') {
      if (*(char *)(param_1 + 0x231) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
      }
      plVar2 = *(longlong **)(param_1 + 0x88);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x88);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xb9);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x229) == '\x03') {
        if (*(char *)(param_1 + 0x218) == '\x03') {
          FUN_18000e7d0(param_1 + 0x128);
        }
        else if (*(char *)(param_1 + 0x218) == '\0') {
          FUN_18001b800(param_1 + 0xd0);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x90) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
        }
        plVar2 = *(longlong **)(param_1 + 0xa0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180014475;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xba) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xba) = 0;
    if (*(int *)(param_1 + 0x90) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180014475:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800146d0 name=FUN_1800146d0 */

void FUN_1800146d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x240) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x238) != '\x03') {
      if (*(char *)(param_1 + 0x238) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x50);
      return;
    }
    if (*(char *)(param_1 + 0x230) != '\x03') {
      if (*(char *)(param_1 + 0x230) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
      }
      plVar2 = *(longlong **)(param_1 + 0x88);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x88);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xb8);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x229) == '\x03') {
        if (*(char *)(param_1 + 0x218) == '\x03') {
          FUN_18000e7d0(param_1 + 0x128);
        }
        else if (*(char *)(param_1 + 0x218) == '\0') {
          FUN_18001b800(param_1 + 0xd0);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x90) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
        }
        plVar2 = *(longlong **)(param_1 + 0xa0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180014975;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xba) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xba) = 0;
    if (*(int *)(param_1 + 0x90) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180014975:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=180014bd0 name=FUN_180014bd0 */

void FUN_180014bd0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 600) == '\0') {
    FUN_18001ae80(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 600) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x250) != '\x03') {
    if (*(char *)(param_1 + 0x250) != '\0') {
      return;
    }
    FUN_18001ae80(param_1 + 0x58);
    return;
  }
  if (*(char *)(param_1 + 0x249) == '\0') {
    if (*(int *)(param_1 + 0xa8) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
    }
    plVar2 = *(longlong **)(param_1 + 0xb8);
    lVar5 = 0xc0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xb8);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x249) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x119);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x231) == '\x03') {
        FUN_18000e7d0(param_1 + 0x140);
      }
      else if ((*(char *)(param_1 + 0x231) == '\0') && (*(longlong *)(param_1 + 0x120) != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x128),*(longlong *)(param_1 + 0x120),1);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x238),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0xd8) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe0));
        }
        plVar2 = *(longlong **)(param_1 + 0xe8);
        lVar5 = 0xf0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0xe8);
          }
        }
        goto LAB_180014e60;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x120);
      ppcVar4 = *(code ***)(param_1 + 0x128);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x140) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x130),*(longlong *)(param_1 + 0x140) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0x11a) != '\0') && (*(longlong *)(param_1 + 0x108) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x108),1);
    }
    *(undefined *)(param_1 + 0x11a) = 0;
    if (*(int *)(param_1 + 0xd8) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe0));
    }
    plVar2 = *(longlong **)(param_1 + 0xe8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xe8);
      }
    }
    lVar5 = 0xf0;
    if (*(char *)(param_1 + 0x11b) == '\0') {
      return;
    }
  }
LAB_180014e60:
  if (*(longlong *)(param_1 + lVar5) == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8 + lVar5),*(longlong *)(param_1 + lVar5),1);
  return;
}


/* address=180015160 name=FUN_180015160 */

void FUN_180015160(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x2d0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x2c8) != '\x03') {
      if (*(char *)(param_1 + 0x2c8) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x58) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x60));
      }
      plVar2 = *(longlong **)(param_1 + 0x68);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x68);
      return;
    }
    if (*(char *)(param_1 + 0x2c0) != '\x03') {
      if (*(char *)(param_1 + 0x2c0) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0xa8) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
      }
      plVar2 = *(longlong **)(param_1 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0xb8);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x128);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x2b8) == '\x03') {
        if (*(char *)(param_1 + 0x2b0) == '\x03') {
          FUN_18000e7d0(param_1 + 0x1c0);
        }
        else if (*(char *)(param_1 + 0x2b0) == '\0') {
          FUN_18001b800(param_1 + 0x168);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x130),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0xe0) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe8));
        }
        plVar2 = *(longlong **)(param_1 + 0xf0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180015408;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x130);
      ppcVar4 = *(code ***)(param_1 + 0x138);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x150) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x140),*(longlong *)(param_1 + 0x150) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0x129) != '\0') && (*(longlong *)(param_1 + 0x118) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x118),1);
    }
    *(undefined *)(param_1 + 0x129) = 0;
    if (*(int *)(param_1 + 0xe0) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe8));
    }
    plVar2 = *(longlong **)(param_1 + 0xf0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180015408:
        FUN_180239850(param_1 + 0xf0);
        return;
      }
    }
  }
  return;
}


/* address=180015660 name=FUN_180015660 */

void FUN_180015660(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x2a8) == '\0') {
    FUN_18001ae80(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0x2a8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x2a0) != '\x03') {
    if (*(char *)(param_1 + 0x2a0) != '\0') {
      return;
    }
    FUN_18001ae80(param_1 + 0x50);
    return;
  }
  if (*(char *)(param_1 + 0x298) == '\0') {
    if (*(int *)(param_1 + 0x98) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xa0));
    }
    plVar2 = *(longlong **)(param_1 + 0xa8);
    lVar5 = 0xb0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xa8);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x298) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x108);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x280) == '\x03') {
        if (*(char *)(param_1 + 0x278) == '\x03') {
          FUN_18000e7d0(param_1 + 0x188);
        }
        else if (*(char *)(param_1 + 0x278) == '\0') {
          FUN_18001b800(param_1 + 0x130);
        }
      }
      else if ((*(char *)(param_1 + 0x280) == '\0') && (*(longlong *)(param_1 + 0x110) != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x118),*(longlong *)(param_1 + 0x110),1);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x288),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 200) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0xd0));
        }
        plVar2 = *(longlong **)(param_1 + 0xd8);
        lVar5 = 0xe0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0xd8);
          }
        }
        goto LAB_180015917;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x110);
      ppcVar4 = *(code ***)(param_1 + 0x118);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x130) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x120),*(longlong *)(param_1 + 0x130) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0x109) != '\0') && (*(longlong *)(param_1 + 0xf8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xf8),1);
    }
    *(undefined *)(param_1 + 0x109) = 0;
    if (*(int *)(param_1 + 200) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xd0));
    }
    plVar2 = *(longlong **)(param_1 + 0xd8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xd8);
      }
    }
    lVar5 = 0xe0;
    if (*(char *)(param_1 + 0x10a) == '\0') {
      return;
    }
  }
LAB_180015917:
  if (*(longlong *)(param_1 + lVar5) == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8 + lVar5),*(longlong *)(param_1 + lVar5),1);
  return;
}


/* address=180015c20 name=FUN_180015c20 */

void FUN_180015c20(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x240) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x238) != '\x03') {
      if (*(char *)(param_1 + 0x238) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x50);
      return;
    }
    if (*(char *)(param_1 + 0x232) != '\x03') {
      if (*(char *)(param_1 + 0x232) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
      }
      plVar2 = *(longlong **)(param_1 + 0x88);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x88);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xba);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x22a) == '\x03') {
        if (*(char *)(param_1 + 0x220) == '\x03') {
          FUN_18000e7d0(param_1 + 0x130);
        }
        else if (*(char *)(param_1 + 0x220) == '\0') {
          FUN_18001b800(param_1 + 0xd8);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x90) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
        }
        plVar2 = *(longlong **)(param_1 + 0xa0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180015ec5;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xbb) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xbb) = 0;
    if (*(int *)(param_1 + 0x90) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180015ec5:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=180016120 name=FUN_180016120 */

void FUN_180016120(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *local_38;
  
  if (*(char *)(param_1 + 800) == '\0') {
    param_1 = param_1 + 0x10;
LAB_180016167:
    FUN_18001af80(param_1);
    return;
  }
  if (*(char *)(param_1 + 800) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x318) != '\x03') {
    if (*(char *)(param_1 + 0x318) != '\0') {
      return;
    }
    param_1 = param_1 + 0x68;
    goto LAB_180016167;
  }
  if (*(char *)(param_1 + 0x310) == '\0') {
    if (*(int *)(param_1 + 200) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xd0));
    }
    plVar2 = *(longlong **)(param_1 + 0xd8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xd8);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0xe0);
    if ((lVar5 != -1) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xe8),lVar5,1);
    }
    if (*(longlong *)(param_1 + 0xf8) == -1) {
      return;
    }
    local_38 = (longlong *)(param_1 + 0xf8);
    lVar5 = *(longlong *)(param_1 + 0x108);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x100) + 8);
      do {
        if (puVar6[-1] != 0) {
          thunk_FUN_1803e4c80(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    goto LAB_1800164ef;
  }
  if (*(char *)(param_1 + 0x310) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x168);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x308) == '\x03') {
      FUN_18000e8a0(param_1 + 0x1b8);
    }
    else if (*(char *)(param_1 + 0x308) == '\0') {
      lVar5 = *(longlong *)(param_1 + 0x180);
      if ((lVar5 != -1) && (lVar5 != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x188),lVar5,1);
      }
      if (*(longlong *)(param_1 + 0x198) != -1) {
        FUN_18024e6d0();
        if (*(longlong *)(param_1 + 0x198) != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x1a0),*(longlong *)(param_1 + 0x198) * 0x18
                              ,8);
        }
      }
    }
    FUN_1803aa820(*(undefined8 *)(param_1 + 0x170),1);
LAB_180016422:
    if ((*(char *)(param_1 + 0x169) != '\0') && (*(longlong *)(param_1 + 0x158) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x158),1);
    }
    *(undefined *)(param_1 + 0x169) = 0;
    if (*(int *)(param_1 + 0x110) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x118));
    }
    plVar2 = *(longlong **)(param_1 + 0x120);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x120);
      }
    }
    if (((*(char *)(param_1 + 0x16b) != '\0') &&
        (lVar5 = *(longlong *)(param_1 + 0x128), lVar5 != -1)) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x130),lVar5,1);
    }
    if (*(char *)(param_1 + 0x16a) == '\0') {
      return;
    }
    if (*(longlong *)(param_1 + 0x140) == -1) {
      return;
    }
    FUN_18024e6d0();
  }
  else {
    if (cVar1 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0x170);
      ppcVar4 = *(code ***)(param_1 + 0x178);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 400) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x180),*(longlong *)(param_1 + 400) << 3,8);
      }
      goto LAB_180016422;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x110) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x118));
    }
    plVar2 = *(longlong **)(param_1 + 0x120);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x120);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x128);
    if ((lVar5 != -1) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x130),lVar5,1);
    }
    if (*(longlong *)(param_1 + 0x140) == -1) {
      return;
    }
    FUN_18024e6d0();
  }
  local_38 = (longlong *)(param_1 + 0x140);
LAB_1800164ef:
  if (*local_38 == 0) {
    return;
  }
  thunk_FUN_1803e4c80(local_38[1],*local_38 * 0x18,8);
  return;
}


/* address=180016980 name=FUN_180016980 */

void FUN_180016980(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x250) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x250) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x248) != '\x03') {
      if (*(char *)(param_1 + 0x248) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x50);
      return;
    }
    if (*(char *)(param_1 + 0x241) != '\x03') {
      if (*(char *)(param_1 + 0x241) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
      }
      plVar2 = *(longlong **)(param_1 + 0x88);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x88);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xb9);
    if (cVar1 == '\x04') {
      if ((*(char *)(param_1 + 0x238) == '\x03') && (*(char *)(param_1 + 0x228) == '\x03')) {
        if (*(char *)(param_1 + 0x218) == '\x03') {
          FUN_18000e7d0(param_1 + 0x128);
        }
        else if (*(char *)(param_1 + 0x218) == '\0') {
          FUN_18001b800(param_1 + 0xd0);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x90) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
        }
        plVar2 = *(longlong **)(param_1 + 0xa0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180016c36;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xba) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xba) = 0;
    if (*(int *)(param_1 + 0x90) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180016c36:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=180016e90 name=FUN_180016e90 */

void FUN_180016e90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  if (*(char *)(param_1 + 0x390) == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x18),lVar4,1);
    }
    plVar2 = *(longlong **)(param_1 + 0x28);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180397b10(param_1 + 0x28);
    }
    plVar2 = *(longlong **)(local_20 + 0x30);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 != 0) {
      return;
    }
    FUN_180397b10(local_20 + 0x30);
    return;
  }
  if (*(char *)(param_1 + 0x390) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x388) != '\x03') {
    if (*(char *)(param_1 + 0x388) != '\0') {
      return;
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x50),lVar4,1);
    }
    plVar2 = *(longlong **)(param_1 + 0x60);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180397b10(param_1 + 0x60);
    }
    plVar2 = *(longlong **)(local_20 + 0x68);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 != 0) {
      return;
    }
    FUN_180397b10(local_20 + 0x68);
    return;
  }
  if (*(char *)(param_1 + 0x380) != '\x03') {
    if (*(char *)(param_1 + 0x380) != '\0') {
      return;
    }
    lVar4 = *(longlong *)(param_1 + 0x88);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x90),lVar4,1);
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180397b10(param_1 + 0xa0);
    }
    plVar2 = *(longlong **)(local_20 + 0xa8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 != 0) {
      return;
    }
    FUN_180397b10(local_20 + 0xa8);
    return;
  }
  if (*(char *)(param_1 + 0x378) != '\x03') {
    if (*(char *)(param_1 + 0x378) != '\0') {
      return;
    }
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xb8),lVar4,1);
    }
    plVar2 = *(longlong **)(param_1 + 200);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180397b10(param_1 + 200);
    }
    plVar2 = *(longlong **)(local_20 + 0xd0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 != 0) {
      return;
    }
    FUN_180397b10(local_20 + 0xd0);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x138);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x2a8) == '\x03') {
      if (*(char *)(param_1 + 0x298) == '\x03') {
        FUN_18000e7d0(param_1 + 0x1a8);
      }
      else if (*(char *)(param_1 + 0x298) == '\0') {
        FUN_18001b800(param_1 + 0x150);
      }
    }
    *(undefined4 *)(local_20 + 0x13b) = 0;
    lVar4 = 0x67;
    FUN_18001b9c0(local_20 + 0x100);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      lVar4 = *(longlong *)(param_1 + 0xd8);
      if ((lVar4 != -1) && (lVar4 != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xe0),lVar4,1);
      }
      plVar2 = *(longlong **)(param_1 + 0xf0);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180397b10(local_20 + 0xf0);
      }
      plVar2 = *(longlong **)(local_20 + 0xf8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180397b10(local_20 + 0xf8);
      return;
    }
    if (*(char *)(param_1 + 0x370) != '\x03') {
      if (((*(char *)(param_1 + 0x370) == '\0') &&
          (lVar4 = *(longlong *)(param_1 + 0x158), lVar4 != -1)) && (lVar4 != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x160),lVar4,1);
      }
      goto LAB_18001722a;
    }
    if (*(char *)(param_1 + 0x369) == '\x03') {
      if (*(char *)(param_1 + 0x358) == '\x03') {
        if (*(char *)(param_1 + 0x350) == '\x03') {
          if (*(char *)(param_1 + 0x348) == '\x03') {
            local_28 = param_1 + 0x218;
            if (*(char *)(param_1 + 0x340) == '\x03') {
              FUN_18001bdd0(param_1 + 0x2d0);
              uVar3 = *(ulonglong *)(local_20 + 0x2c8);
              if ((1 < ((uint)uVar3 & 3) - 2) && ((uVar3 & 3) != 0)) {
                local_30 = uVar3 - 1;
                FUN_180404230(&local_30);
              }
            }
            FUN_18001bdd0(local_28);
          }
          param_1 = local_20;
          if (*(longlong *)(local_20 + 0x1e8) != 0) {
            thunk_FUN_1803e4c80(*(undefined8 *)(local_20 + 0x1f0),*(longlong *)(local_20 + 0x1e8),1)
            ;
          }
        }
        plVar2 = *(longlong **)(param_1 + 0x1c0);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18023a420(local_20 + 0x1c0);
        }
      }
      else if (*(char *)(param_1 + 0x358) == '\0') {
        plVar2 = *(longlong **)(param_1 + 0x1b8);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18023a420(param_1 + 0x1b8);
        }
      }
      *(undefined *)(local_20 + 0x368) = 0;
    }
    else if (*(char *)(param_1 + 0x369) == '\0') {
      plVar2 = *(longlong **)(param_1 + 0x360);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18023a420(param_1 + 0x360);
      }
    }
    plVar2 = *(longlong **)(local_20 + 0x1a0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18023a420(local_20 + 0x1a0);
    }
    plVar2 = *(longlong **)(local_20 + 0x198);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    lVar4 = 0x299;
    if (*plVar2 == 0) {
      FUN_18023a340(local_20 + 0x198);
    }
  }
  *(undefined *)(local_20 + 0xd8 + lVar4) = 0;
  param_1 = local_20;
LAB_18001722a:
  if (*(char *)(param_1 + 0x139) != '\0') {
    plVar2 = *(longlong **)(local_20 + 0x150);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180397b10(local_20 + 0x150);
    }
  }
  *(undefined *)(local_20 + 0x139) = 0;
  if (*(char *)(local_20 + 0x13a) != '\0') {
    plVar2 = *(longlong **)(local_20 + 0x148);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180397b10(local_20 + 0x148);
    }
  }
  *(undefined *)(local_20 + 0x13a) = 0;
  *(undefined *)(local_20 + 0x140) = 0;
  return;
}


/* address=180017810 name=FUN_180017810 */

void FUN_180017810(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x2a8) == '\0') {
    FUN_18001ac40(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0x2a8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x2a0) != '\x03') {
    if (*(char *)(param_1 + 0x2a0) != '\0') {
      return;
    }
    FUN_18001ac40(param_1 + 0x50);
    return;
  }
  if (*(char *)(param_1 + 0x298) == '\0') {
    if (*(int *)(param_1 + 0x98) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xa0));
    }
    plVar2 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xa8);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (lVar5 == -1) {
      return;
    }
    param_1 = param_1 + 0xb0;
    if (lVar5 == 0) {
      return;
    }
    goto LAB_180017af1;
  }
  if (*(char *)(param_1 + 0x298) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x108);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x280) == '\x03') {
      if (*(char *)(param_1 + 0x278) == '\x03') {
        FUN_18000e7d0(param_1 + 0x188);
      }
      else if (*(char *)(param_1 + 0x278) == '\0') {
        FUN_18001b800(param_1 + 0x130);
      }
    }
    else if (((*(char *)(param_1 + 0x280) == '\0') &&
             (lVar5 = *(longlong *)(param_1 + 0x110), lVar5 != -1)) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x118),lVar5,1);
    }
    FUN_1803aa820(*(undefined8 *)(param_1 + 0x288),1);
LAB_180017a58:
    if ((*(char *)(param_1 + 0x109) != '\0') && (*(longlong *)(param_1 + 0xf8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xf8),1);
    }
    *(undefined *)(param_1 + 0x109) = 0;
    if (*(int *)(param_1 + 200) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xd0));
    }
    plVar2 = *(longlong **)(param_1 + 0xd8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xd8);
      }
    }
    if (*(char *)(param_1 + 0x10a) != '\x01') {
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0x110);
      ppcVar4 = *(code ***)(param_1 + 0x118);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x130) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x120),*(longlong *)(param_1 + 0x130) << 3,8);
      }
      goto LAB_180017a58;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 200) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xd0));
    }
    plVar2 = *(longlong **)(param_1 + 0xd8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xd8);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xe0);
  if ((lVar5 == -1) || (param_1 = param_1 + 0xe0, lVar5 == 0)) {
    return;
  }
LAB_180017af1:
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar5,1);
  return;
}


/* address=180017de0 name=FUN_180017de0 */

void FUN_180017de0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x240) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x238) != '\x03') {
      if (*(char *)(param_1 + 0x238) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x38) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x40));
      }
      plVar2 = *(longlong **)(param_1 + 0x48);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x48);
      return;
    }
    if (*(char *)(param_1 + 0x230) != '\x03') {
      if (*(char *)(param_1 + 0x230) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x68) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x70));
      }
      plVar2 = *(longlong **)(param_1 + 0x78);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x78);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xa8);
    if (cVar1 == '\x04') {
      if ((*(char *)(param_1 + 0x228) == '\x03') && (*(char *)(param_1 + 0x220) == '\x03')) {
        FUN_18000e8a0(param_1 + 200);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xb0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x80) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
        }
        plVar2 = *(longlong **)(param_1 + 0x90);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180018066;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xb0);
      ppcVar4 = *(code ***)(param_1 + 0xb8);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 0xd0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xa9) != '\0') && (*(longlong *)(param_1 + 0x98) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x98),1);
    }
    *(undefined *)(param_1 + 0xa9) = 0;
    if (*(int *)(param_1 + 0x80) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
    }
    plVar2 = *(longlong **)(param_1 + 0x90);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180018066:
        FUN_180239850(param_1 + 0x90);
        return;
      }
    }
  }
  return;
}


/* address=1800182c0 name=FUN_1800182c0 */

void FUN_1800182c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x2b8) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802de5f0(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239c40(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x2b8) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x2b0) != '\x03') {
      if (*(char *)(param_1 + 0x2b0) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x38) == 1) {
        FUN_1802de5f0(*(undefined8 *)(param_1 + 0x40));
      }
      plVar2 = *(longlong **)(param_1 + 0x48);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239c40(param_1 + 0x48);
      return;
    }
    if (*(char *)(param_1 + 0x2a8) != '\x03') {
      if (*(char *)(param_1 + 0x2a8) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x68) == 1) {
        FUN_1802de5f0(*(undefined8 *)(param_1 + 0x70));
      }
      plVar2 = *(longlong **)(param_1 + 0x78);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239c40(param_1 + 0x78);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xa8);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x290) == '\x03') {
        FUN_18001b100(param_1 + 0xb8);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x298),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x80) == 1) {
          FUN_1802de5f0(*(undefined8 *)(param_1 + 0x88));
        }
        plVar2 = *(longlong **)(param_1 + 0x90);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180018539;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xb0);
      ppcVar4 = *(code ***)(param_1 + 0xb8);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 0xd0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xa9) != '\0') && (*(longlong *)(param_1 + 0x98) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x98),1);
    }
    *(undefined *)(param_1 + 0xa9) = 0;
    if (*(int *)(param_1 + 0x80) == 1) {
      FUN_1802de5f0(*(undefined8 *)(param_1 + 0x88));
    }
    plVar2 = *(longlong **)(param_1 + 0x90);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180018539:
        FUN_180239c40(param_1 + 0x90);
        return;
      }
    }
  }
  return;
}


/* address=180018790 name=FUN_180018790 */

void FUN_180018790(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x240) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x238) != '\x03') {
      if (*(char *)(param_1 + 0x238) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x40) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x48));
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x50);
      return;
    }
    if (*(char *)(param_1 + 0x232) != '\x03') {
      if (*(char *)(param_1 + 0x232) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
      }
      plVar2 = *(longlong **)(param_1 + 0x88);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x88);
      return;
    }
    cVar1 = *(char *)(param_1 + 0xba);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x228) == '\x03') {
        if (*(char *)(param_1 + 0x218) == '\x03') {
          FUN_18000e7d0(param_1 + 0x128);
        }
        else if (*(char *)(param_1 + 0x218) == '\0') {
          FUN_18001b800(param_1 + 0xd0);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x90) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
        }
        plVar2 = *(longlong **)(param_1 + 0xa0);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_180018a35;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xbb) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xbb) = 0;
    if (*(int *)(param_1 + 0x90) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x98));
    }
    plVar2 = *(longlong **)(param_1 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_180018a35:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=180018c90 name=FUN_180018c90 */

void FUN_180018c90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x2f8) == '\0') {
    FUN_18001ae80(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0x2f8) == '\x03') {
    if (*(char *)(param_1 + 0x2f0) == '\x03') {
      if (*(char *)(param_1 + 0x2e9) == '\x03') {
        if (*(char *)(param_1 + 0x2e1) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x161);
          if (cVar1 == '\x04') {
            if (*(char *)(param_1 + 0x2d9) == '\x03') {
              if (*(char *)(param_1 + 0x2d0) == '\x03') {
                FUN_18000e7d0(param_1 + 0x1e0);
              }
              else if (*(char *)(param_1 + 0x2d0) == '\0') {
                FUN_18001b800(param_1 + 0x188);
              }
            }
            else if ((*(char *)(param_1 + 0x2d9) == '\0') && (*(longlong *)(param_1 + 0x168) != 0))
            {
              thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x170),*(longlong *)(param_1 + 0x168),1)
              ;
            }
            FUN_1803aa820(*(undefined8 *)(param_1 + 0x150),1);
          }
          else {
            if (cVar1 != '\x03') {
              if (cVar1 != '\0') {
                return;
              }
              if (*(int *)(param_1 + 0x108) == 1) {
                FUN_1802dfb40(*(undefined8 *)(param_1 + 0x110));
              }
              plVar2 = *(longlong **)(param_1 + 0x118);
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  FUN_180239850(param_1 + 0x118);
                }
              }
              lVar4 = *(longlong *)(param_1 + 0x120);
              if (lVar4 == 0) {
                return;
              }
              uVar3 = *(undefined8 *)(param_1 + 0x128);
              goto LAB_180018dd3;
            }
            if (((*(char *)(param_1 + 0x1e8) == '\x03') && (*(char *)(param_1 + 0x1e0) == '\x03'))
               && (*(char *)(param_1 + 0x1d8) == '\x03')) {
              FUN_1803abc90(param_1 + 0x198);
              if (*(longlong *)(param_1 + 0x1a0) != 0) {
                (**(code **)(*(longlong *)(param_1 + 0x1a0) + 0x18))
                          (*(undefined8 *)(param_1 + 0x1a8));
              }
            }
          }
          if ((*(char *)(param_1 + 0x163) != '\0') && (*(longlong *)(param_1 + 0x168) != 0)) {
            thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x170),*(longlong *)(param_1 + 0x168),1);
          }
          *(undefined *)(param_1 + 0x163) = 0;
          if (*(int *)(param_1 + 0x138) == 1) {
            FUN_1802dfb40(*(undefined8 *)(param_1 + 0x140));
          }
          plVar2 = *(longlong **)(param_1 + 0x148);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              FUN_180239850(param_1 + 0x148);
              return;
            }
          }
        }
        else if (*(char *)(param_1 + 0x2e1) == '\0') {
          if (*(int *)(param_1 + 0xd8) == 1) {
            FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe0));
          }
          plVar2 = *(longlong **)(param_1 + 0xe8);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              FUN_180239850(param_1 + 0xe8);
            }
          }
          lVar4 = *(longlong *)(param_1 + 0xf0);
          if (lVar4 != 0) {
            uVar3 = *(undefined8 *)(param_1 + 0xf8);
LAB_180018dd3:
            thunk_FUN_1803e4c80(uVar3,lVar4,1);
            return;
          }
        }
      }
      else if (*(char *)(param_1 + 0x2e9) == '\0') {
        if (*(int *)(param_1 + 0xa8) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
        }
        plVar2 = *(longlong **)(param_1 + 0xb8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0xb8);
          }
        }
        lVar4 = *(longlong *)(param_1 + 0xc0);
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(param_1 + 200);
          goto LAB_180018dd3;
        }
      }
    }
    else if (*(char *)(param_1 + 0x2f0) == '\0') {
      FUN_18001ae80(param_1 + 0x58);
      return;
    }
  }
  return;
}


/* address=180019290 name=FUN_180019290 */

void FUN_180019290(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x328) == '\0') {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x10),1);
    }
    plVar2 = *(longlong **)(param_1 + 0x28);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180397b10(param_1 + 0x28);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x328) == '\x03') {
    if (*(char *)(param_1 + 800) == '\x03') {
      if (*(char *)(param_1 + 0x318) == '\x03') {
        if (*(char *)(param_1 + 0x310) == '\x03') {
          cVar1 = *(char *)(param_1 + 0xd8);
          if (cVar1 == '\x04') {
            FUN_18001b100(param_1 + 0x138);
            FUN_18001bbc0(param_1 + 0xe0);
            *(undefined2 *)(param_1 + 0xda) = 0;
            *(undefined *)(param_1 + 0xdc) = 0;
          }
          else {
            if (cVar1 != '\x03') {
              if (cVar1 != '\0') {
                return;
              }
              if (*(longlong *)(param_1 + 0xb8) != 0) {
                thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 0xb8),1)
                ;
              }
              plVar2 = *(longlong **)(param_1 + 0xd0);
              LOCK();
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 != 0) {
                return;
              }
              FUN_180397b10(param_1 + 0xd0);
              return;
            }
            FUN_1802cfc00(param_1 + 0xe8);
          }
          *(undefined *)(param_1 + 0xdd) = 0;
          if (*(char *)(param_1 + 0xd9) != '\0') {
            plVar2 = *(longlong **)(param_1 + 0xe0);
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              FUN_180397b10(param_1 + 0xe0);
            }
          }
          *(undefined *)(param_1 + 0xd9) = 0;
        }
        else if (*(char *)(param_1 + 0x310) == '\0') {
          if (*(longlong *)(param_1 + 0x98) != 0) {
            thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0x98),1);
          }
          plVar2 = *(longlong **)(param_1 + 0xb0);
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180397b10(param_1 + 0xb0);
            return;
          }
        }
      }
      else if (*(char *)(param_1 + 0x318) == '\0') {
        if (*(longlong *)(param_1 + 0x78) != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x80),*(longlong *)(param_1 + 0x78),1);
        }
        plVar2 = *(longlong **)(param_1 + 0x90);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_180397b10(param_1 + 0x90);
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 800) == '\0') {
      if (*(longlong *)(param_1 + 0x40) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x48),*(longlong *)(param_1 + 0x40),1);
      }
      plVar2 = *(longlong **)(param_1 + 0x58);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180397b10(param_1 + 0x58);
        return;
      }
    }
  }
  return;
}


/* address=1800195d0 name=FUN_1800195d0 */

void FUN_1800195d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x2e8) == '\0') {
    FUN_18001ae80(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0x2e8) == '\x03') {
    if (*(char *)(param_1 + 0x2e0) == '\x03') {
      if (*(char *)(param_1 + 0x2d8) == '\x03') {
        if (*(char *)(param_1 + 0x2d0) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x150);
          if (cVar1 == '\x04') {
            if (*(char *)(param_1 + 0x2c8) == '\x03') {
              if (*(char *)(param_1 + 0x2c0) == '\x03') {
                FUN_18000e7d0(param_1 + 0x1d0);
              }
              else if (*(char *)(param_1 + 0x2c0) == '\0') {
                FUN_18001b800(param_1 + 0x178);
              }
            }
            else if ((*(char *)(param_1 + 0x2c8) == '\0') && (*(longlong *)(param_1 + 0x158) != 0))
            {
              thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x160),*(longlong *)(param_1 + 0x158),1)
              ;
            }
            FUN_1803aa820(*(undefined8 *)(param_1 + 0x140),1);
          }
          else {
            if (cVar1 != '\x03') {
              if (cVar1 != '\0') {
                return;
              }
              if (*(int *)(param_1 + 0xf8) == 1) {
                FUN_1802dfb40(*(undefined8 *)(param_1 + 0x100));
              }
              plVar2 = *(longlong **)(param_1 + 0x108);
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  FUN_180239850(param_1 + 0x108);
                }
              }
              lVar4 = *(longlong *)(param_1 + 0x110);
              if (lVar4 == 0) {
                return;
              }
              uVar3 = *(undefined8 *)(param_1 + 0x118);
              goto LAB_180019713;
            }
            if (((*(char *)(param_1 + 0x1d8) == '\x03') && (*(char *)(param_1 + 0x1d0) == '\x03'))
               && (*(char *)(param_1 + 0x1c8) == '\x03')) {
              FUN_1803abc90(param_1 + 0x188);
              if (*(longlong *)(param_1 + 400) != 0) {
                (**(code **)(*(longlong *)(param_1 + 400) + 0x18))(*(undefined8 *)(param_1 + 0x198))
                ;
              }
            }
          }
          if ((*(char *)(param_1 + 0x151) != '\0') && (*(longlong *)(param_1 + 0x158) != 0)) {
            thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x160),*(longlong *)(param_1 + 0x158),1);
          }
          *(undefined *)(param_1 + 0x151) = 0;
          if (*(int *)(param_1 + 0x128) == 1) {
            FUN_1802dfb40(*(undefined8 *)(param_1 + 0x130));
          }
          plVar2 = *(longlong **)(param_1 + 0x138);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              FUN_180239850(param_1 + 0x138);
              return;
            }
          }
        }
        else if (*(char *)(param_1 + 0x2d0) == '\0') {
          if (*(int *)(param_1 + 200) == 1) {
            FUN_1802dfb40(*(undefined8 *)(param_1 + 0xd0));
          }
          plVar2 = *(longlong **)(param_1 + 0xd8);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              FUN_180239850(param_1 + 0xd8);
            }
          }
          lVar4 = *(longlong *)(param_1 + 0xe0);
          if (lVar4 != 0) {
            uVar3 = *(undefined8 *)(param_1 + 0xe8);
LAB_180019713:
            thunk_FUN_1803e4c80(uVar3,lVar4,1);
            return;
          }
        }
      }
      else if (*(char *)(param_1 + 0x2d8) == '\0') {
        if (*(int *)(param_1 + 0x98) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0xa0));
        }
        plVar2 = *(longlong **)(param_1 + 0xa8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0xa8);
          }
        }
        lVar4 = *(longlong *)(param_1 + 0xb0);
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0xb8);
          goto LAB_180019713;
        }
      }
    }
    else if (*(char *)(param_1 + 0x2e0) == '\0') {
      FUN_18001ae80(param_1 + 0x50);
      return;
    }
  }
  return;
}


/* address=180019bd0 name=FUN_180019bd0 */

void FUN_180019bd0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xf8) == '\0') {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x10),1);
    }
    plVar1 = *(longlong **)(param_1 + 0x28);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180397b10(param_1 + 0x28);
      return;
    }
  }
  else if (*(char *)(param_1 + 0xf8) == '\x03') {
    if (*(char *)(param_1 + 0xf0) == '\x03') {
      if (*(char *)(param_1 + 0xe8) == '\x03') {
        if (*(char *)(param_1 + 0xe0) == '\x03') {
          if (*(char *)(param_1 + 0xd8) == '\0') {
            if (*(longlong *)(param_1 + 0xb8) != 0) {
              thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 0xb8),1);
            }
            plVar1 = *(longlong **)(param_1 + 0xd0);
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              FUN_180397b10(param_1 + 0xd0);
              return;
            }
          }
        }
        else if (*(char *)(param_1 + 0xe0) == '\0') {
          if (*(longlong *)(param_1 + 0x98) != 0) {
            thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0x98),1);
          }
          plVar1 = *(longlong **)(param_1 + 0xb0);
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            FUN_180397b10(param_1 + 0xb0);
            return;
          }
        }
      }
      else if (*(char *)(param_1 + 0xe8) == '\0') {
        if (*(longlong *)(param_1 + 0x78) != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x80),*(longlong *)(param_1 + 0x78),1);
        }
        plVar1 = *(longlong **)(param_1 + 0x90);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_180397b10(param_1 + 0x90);
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0xf0) == '\0') {
      if (*(longlong *)(param_1 + 0x40) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x48),*(longlong *)(param_1 + 0x40),1);
      }
      plVar1 = *(longlong **)(param_1 + 0x58);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180397b10(param_1 + 0x58);
        return;
      }
    }
  }
  return;
}


/* address=180019d90 name=FUN_180019d90 */

void FUN_180019d90(longlong **param_1)

{
  char cVar1;
  longlong *plVar2;
  code **ppcVar3;
  
  cVar1 = *(char *)(param_1 + 0xb);
  if (cVar1 == '\0') {
    FUN_180347b10(param_1);
    plVar2 = *param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18023a030(param_1);
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      plVar2 = param_1[0xc];
      ppcVar3 = (code **)param_1[0xd];
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(plVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(plVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
    FUN_180347b10(param_1);
    plVar2 = *param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18023a030(param_1);
    }
  }
  plVar2 = param_1[1];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 != 0) {
    return;
  }
  FUN_180397b10(param_1 + 1);
  return;
}


/* address=180019fb0 name=FUN_180019fb0 */

void FUN_180019fb0(longlong **param_1)

{
  char cVar1;
  longlong *plVar2;
  code **ppcVar3;
  
  cVar1 = *(char *)(param_1 + 0xb);
  if (cVar1 == '\0') {
    FUN_180347ca0(param_1);
    plVar2 = *param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18023a030(param_1);
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      plVar2 = param_1[0xc];
      ppcVar3 = (code **)param_1[0xd];
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(plVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(plVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
    FUN_180347ca0(param_1);
    plVar2 = *param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18023a030(param_1);
    }
  }
  plVar2 = param_1[1];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 != 0) {
    return;
  }
  FUN_180397b10(param_1 + 1);
  return;
}


/* address=18001a1d0 name=FUN_18001a1d0 */

void FUN_18001a1d0(longlong **param_1)

{
  char cVar1;
  longlong *plVar2;
  code **ppcVar3;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\0') {
    FUN_180347960(param_1);
    plVar2 = *param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180239ea0(param_1);
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      plVar2 = param_1[0xd];
      ppcVar3 = (code **)param_1[0xe];
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(plVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(plVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
    FUN_180347960(param_1);
    plVar2 = *param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180239ea0(param_1);
    }
  }
  plVar2 = param_1[1];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 != 0) {
    return;
  }
  FUN_180397b10(param_1 + 1);
  return;
}


/* address=18001a3f0 name=FUN_18001a3f0 */

void FUN_18001a3f0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x3e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (*(char *)(param_1 + 0x3e) != '\x03') {
      return;
    }
    if (((*(char *)(param_1 + 0x3c) == '\x03') && (*(char *)(param_1 + 0x3a) == '\x03')) &&
       (*(char *)(param_1 + 0x38) == '\x03')) {
      FUN_1803abc90(param_1 + 0x28);
      if (*(longlong *)(param_1 + 0x2a) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x2a) + 0x18))(*(undefined8 *)(param_1 + 0x2c));
      }
    }
    FUN_18001bdd0(param_1 + 6);
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar1 = *(longlong **)(param_1 + 4);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=18001a5e0 name=FUN_18001a5e0 */

void FUN_18001a5e0(undefined8 *param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  longlong *plVar3;
  undefined8 local_28;
  code **local_20;
  
  if (*(char *)(param_1 + 6) == '\0') {
    local_28 = *param_1;
    local_20 = (code **)param_1[1];
    if (*local_20 != (code *)0x0) {
      (**local_20)(local_28);
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x03') {
      return;
    }
    uVar1 = param_1[4];
    ppcVar2 = (code **)param_1[5];
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(uVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
    }
    thunk_FUN_1803e4c80(param_1[3],0x7d000,1);
    local_28 = *param_1;
    local_20 = (code **)param_1[1];
    if (*local_20 != (code *)0x0) {
      (**local_20)(local_28);
    }
  }
  if (local_20[1] != (code *)0x0) {
    thunk_FUN_1803e4c80(local_28,local_20[1],local_20[2]);
  }
  plVar3 = (longlong *)param_1[2];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 != 0) {
    return;
  }
  FUN_18023a660(param_1 + 2);
  return;
}


/* address=18001a7f0 name=FUN_18001a7f0 */

void FUN_18001a7f0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  undefined8 local_28;
  code **local_20;
  
  cVar1 = *(char *)((longlong)param_1 + 0x89);
  if (cVar1 == '\0') {
    FUN_180347e30();
    plVar4 = (longlong *)param_1[0xf];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18023a1b0();
    }
    plVar4 = (longlong *)param_1[0x10];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18023a660(param_1 + 0x10);
    }
    local_28 = *param_1;
    local_20 = (code **)param_1[1];
    if (*local_20 != (code *)0x0) {
      (**local_20)(local_28);
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      uVar2 = param_1[0x15];
      ppcVar3 = (code **)param_1[0x16];
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (param_1[0x12] != 0) {
        thunk_FUN_1803e4c80(param_1[0x13],param_1[0x12],1);
      }
      *(undefined *)(param_1 + 0x11) = 0;
      FUN_18001b800(param_1 + 0x17);
    }
    FUN_180347e30();
    plVar4 = (longlong *)param_1[0xf];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18023a1b0();
    }
    plVar4 = (longlong *)param_1[0x10];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18023a660(param_1 + 0x10);
    }
    local_28 = *param_1;
    local_20 = (code **)param_1[1];
    if (*local_20 != (code *)0x0) {
      (**local_20)(local_28);
    }
  }
  if (local_20[1] == (code *)0x0) {
    return;
  }
  thunk_FUN_1803e4c80(local_28,local_20[1],local_20[2]);
  return;
}


/* address=18001ac40 name=FUN_18001ac40 */

void FUN_18001ac40(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*param_1 == 1) {
    FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
  }
  plVar1 = *(longlong **)(param_1 + 4);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180239850(param_1 + 4);
    }
  }
  lVar2 = *(longlong *)(param_1 + 6);
  if ((lVar2 != -1) && (lVar2 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar2,1);
    return;
  }
  return;
}


/* address=18001ad40 name=FUN_18001ad40 */

void FUN_18001ad40(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if (*param_1 == 1) {
    FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
  }
  plVar1 = *(longlong **)(param_1 + 4);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180239850(param_1 + 4);
    }
  }
  lVar3 = *(longlong *)(param_1 + 10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + 8);
    piVar5 = param_1;
    do {
      lVar2 = puVar4[-1];
      if ((-0x7ffffffffffffffe < lVar2) && (lVar2 != 0)) {
        thunk_FUN_1803e4c80(*puVar4,lVar2,1,param_4,piVar5,uVar6);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6) * 0x18,8);
    return;
  }
  return;
}


/* address=18001ae80 name=FUN_18001ae80 */

void FUN_18001ae80(int *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == 1) {
    FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
  }
  plVar1 = *(longlong **)(param_1 + 4);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180239850(param_1 + 4);
    }
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6),1);
    return;
  }
  return;
}


/* address=18001af80 name=FUN_18001af80 */

void FUN_18001af80(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*param_1 == 1) {
    FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
  }
  plVar1 = *(longlong **)(param_1 + 4);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180239850(param_1 + 4);
    }
  }
  lVar2 = *(longlong *)(param_1 + 6);
  if ((lVar2 != -1) && (lVar2 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar2,1);
  }
  lVar2 = *(longlong *)(param_1 + 0xc);
  if (lVar2 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xe) + 8);
      do {
        if (puVar4[-1] != 0) {
          thunk_FUN_1803e4c80(*puVar4,puVar4[-1],1);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar2 = *(longlong *)(param_1 + 0xc);
    }
    if (lVar2 != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xe),lVar2 * 0x18,8);
      return;
    }
  }
  return;
}


/* address=18001b100 name=FUN_18001b100 */

void FUN_18001b100(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  cVar2 = *(char *)(param_1 + 0x19);
  if (cVar2 == '\x03') {
    if (((*(char *)(param_1 + 0x90) == '\x03') && (*(char *)(param_1 + 0x88) == '\x03')) &&
       (*(char *)(param_1 + 0x40) == '\x04')) {
      FUN_1803abc90(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018001b222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x58));
        return;
      }
    }
    return;
  }
  if (cVar2 == '\x04') {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    cVar2 = FUN_1803aab30(uVar7);
    if (cVar2 != '\0') {
      FUN_1803bea90(uVar7);
    }
    goto LAB_18001b2cc;
  }
  if (cVar2 != '\x05') {
    return;
  }
  if (*(char *)(param_1 + 0x1d0) == '\x03') {
    if ((*(char *)(param_1 + 0x1c8) == '\x03') && (*(char *)(param_1 + 0x180) == '\x04')) {
      FUN_1803abc90(param_1 + 0x188);
      if (*(longlong *)(param_1 + 400) != 0) {
        (**(code **)(*(longlong *)(param_1 + 400) + 0x18))(*(undefined8 *)(param_1 + 0x198));
      }
    }
    uVar1 = *(ulonglong *)(param_1 + 0x108);
    uVar3 = 9;
    if ((longlong)uVar1 < 0) {
      uVar3 = uVar1 ^ 0x8000000000000000;
    }
    lVar5 = 8;
    lVar6 = param_1;
    if (0x10 < uVar3) goto LAB_18001b3c1;
    if ((0xec7fUL >> (uVar3 & 0x3f) & 1) == 0) {
      if (uVar3 == 9) {
        if (uVar1 != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x110),uVar1,1,param_4,param_1,uVar7);
        }
        lVar5 = 0x30;
        if (*(longlong *)(param_1 + 0x120) != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x128),*(longlong *)(param_1 + 0x120),1,
                              param_4,lVar6,uVar7);
        }
LAB_18001b3c1:
        lVar4 = *(longlong *)(param_1 + 0x108 + lVar5);
      }
      else {
        if (uVar3 != 0x10) goto LAB_18001b3c1;
        lVar4 = *(longlong *)(param_1 + 0x110);
        if (lVar4 == -1) goto LAB_18001b2b8;
      }
      if (lVar4 != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x110 + lVar5),lVar4,1,param_4,lVar6,uVar7);
        *(undefined *)(param_1 + 0x1d1) = 0;
        goto LAB_18001b2bf;
      }
    }
LAB_18001b2b8:
    *(undefined *)(param_1 + 0x1d1) = 0;
  }
  else {
    lVar6 = param_1;
    if (*(char *)(param_1 + 0x1d0) == '\0') {
      uVar1 = *(ulonglong *)(param_1 + 0xb8);
      uVar3 = 9;
      if ((longlong)uVar1 < 0) {
        uVar3 = uVar1 ^ 0x8000000000000000;
      }
      lVar5 = 8;
      if (0x10 < uVar3) goto LAB_18001b350;
      if ((0xec7fUL >> (uVar3 & 0x3f) & 1) != 0) goto LAB_18001b2bf;
      if (uVar3 == 9) {
        if (uVar1 != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xc0),uVar1,1,param_4,param_1,
                              0xfffffffffffffffe);
        }
        lVar5 = 0x30;
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd8),*(longlong *)(param_1 + 0xd0),1,
                              param_4,lVar6,uVar7);
        }
LAB_18001b350:
        lVar4 = *(longlong *)(param_1 + 0xb8 + lVar5);
      }
      else {
        if (uVar3 != 0x10) goto LAB_18001b350;
        lVar4 = *(longlong *)(param_1 + 0xc0);
        if (lVar4 == -1) goto LAB_18001b2bf;
      }
      if (lVar4 != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xc0 + lVar5),lVar4,1,param_4,lVar6,uVar7);
      }
    }
  }
LAB_18001b2bf:
  FUN_18024e1f0(param_1 + 0x98);
  param_1 = lVar6;
LAB_18001b2cc:
  *(undefined *)(param_1 + 0x18) = 0;
  FUN_1803aa820(*(undefined8 *)(param_1 + 8),1);
  return;
}


/* address=18001b4e0 name=FUN_18001b4e0 */

void FUN_18001b4e0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong local_28;
  longlong **local_20;
  longlong **local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  cVar1 = *(char *)(param_1 + 0x50);
  local_18 = (longlong **)param_1;
  if (cVar1 == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x20);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18023a420(param_1 + 0x20);
    }
    plVar3 = *(longlong **)((longlong)local_18 + 0x28);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180239d70((longlong)local_18 + 0x28);
    }
    FUN_18001bcf0(local_18);
    local_18 = (longlong **)((longlong)local_18 + 0x30);
    FUN_180347e30();
    plVar3 = *local_18;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18023a1b0();
      return;
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      uVar2 = *(ulonglong *)(param_1 + 0x58);
      if (((uVar2 != 0) && (1 < ((uint)uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
        local_28 = uVar2 - 1;
        FUN_180404230(&local_28);
      }
    }
    *(undefined4 *)((longlong)local_18 + 0x51) = 0;
    plVar3 = *(longlong **)((longlong)local_18 + 0x48);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18023a660((longlong)local_18 + 0x48);
    }
    local_20 = (longlong **)((longlong)local_18 + 0x38);
    FUN_1802ce310();
    FUN_1802cf0f0(local_20);
    plVar3 = *local_20;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180239e00(local_20);
    }
    *(undefined2 *)((longlong)local_18 + 0x55) = 0;
    *(undefined *)((longlong)local_18 + 0x57) = 0;
  }
  return;
}


/* address=18001b7c0 name=FUN_18001b7c0 */

void FUN_18001b7c0(ulonglong param_1)

{
  longlong local_8;
  
  if ((1 < ((uint)param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_8 = param_1 - 1;
    FUN_180404230(&local_8);
  }
  return;
}


/* address=18001b800 name=FUN_18001b800 */

void FUN_18001b800(undefined *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  switch(*param_1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x27:
  case 0x28:
  case 0x2b:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x68:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
    break;
  default:
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
LAB_18001b82d:
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),lVar2,1);
      return;
    }
    break;
  case 0x25:
  case 0x26:
    FUN_18000c5b0(*(undefined8 *)(param_1 + 8));
    return;
  case 0x29:
  case 0x2a:
    FUN_18000c4e0(*(undefined8 *)(param_1 + 8));
    return;
  case 0x2c:
  case 0x2d:
    FUN_18000c550(*(undefined8 *)(param_1 + 8));
    return;
  case 0x41:
    FUN_1800015f0(param_1 + 0x28);
    return;
  case 0x48:
  case 0x69:
    lVar2 = *(longlong *)(param_1 + 8);
    if (0 < lVar2) goto LAB_18001b82d;
    break;
  case 0x54:
    if (0 < *(longlong *)(param_1 + 8)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 8),1);
    }
    FUN_180001000(param_1 + 0x20);
    return;
  case 0x59:
    if (0 < *(longlong *)(param_1 + 0x20)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x20),1);
    }
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803789b0(param_1 + 8);
      return;
    }
    break;
  case 0x5e:
    FUN_180001670(param_1 + 8);
    return;
  }
  return;
}


/* address=18001b900 name=FUN_18001b900 */

void FUN_18001b900(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = *param_1;
  uVar1 = 9;
  if ((longlong)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x8000000000000000;
  }
  lVar3 = 8;
  if (uVar1 < 0x11) {
    if ((0xec7fUL >> (uVar1 & 0x3f) & 1) != 0) {
      return;
    }
    if (uVar1 == 9) {
      if (uVar2 != 0) {
        thunk_FUN_1803e4c80(param_1[1],uVar2,1);
      }
      lVar3 = 0x30;
      if (param_1[3] != 0) {
        thunk_FUN_1803e4c80(param_1[4],param_1[3],1);
      }
    }
    else if (uVar1 == 0x10) {
      uVar2 = param_1[1];
      if (uVar2 == 0xffffffffffffffff) {
        return;
      }
      goto LAB_18001b99f;
    }
  }
  uVar2 = *(ulonglong *)((longlong)param_1 + lVar3);
LAB_18001b99f:
  if (uVar2 == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)((longlong)param_1 + lVar3 + 8),uVar2,1);
  return;
}


/* address=18001b9c0 name=FUN_18001b9c0 */

void FUN_18001b9c0(undefined8 *param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  FUN_1803586f0();
  uVar1 = *param_1;
  ppcVar2 = (code **)param_1[1];
  if (*ppcVar2 != (code *)0x0) {
    (**ppcVar2)(uVar1);
  }
  if (ppcVar2[1] != (code *)0x0) {
    thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
  }
  plVar3 = (longlong *)param_1[2];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18023a340(param_1 + 2);
  }
  FUN_1803bec60(param_1 + 3);
  plVar3 = (longlong *)param_1[4];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18023a420(param_1 + 4);
    return;
  }
  return;
}


/* address=18001bb70 name=FUN_18001bb70 */

void FUN_18001bb70(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],*param_1,1);
  }
  lVar1 = param_1[3];
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(param_1[4],lVar1,1);
    return;
  }
  return;
}


/* address=18001bbc0 name=FUN_18001bbc0 */

void FUN_18001bbc0(longlong **param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  if (param_1[7] != (longlong *)0x0) {
    thunk_FUN_1803e4c80(param_1[8],param_1[7],1);
  }
  plVar1 = *param_1;
  LOCK();
  plVar2 = plVar1 + 0x3e;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180224c20(plVar1 + 0x10);
    FUN_1803ac440(plVar1 + 0x20);
  }
  plVar2 = *param_1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18023a030(param_1);
  }
  FUN_1803be9d0();
  plVar2 = param_1[1];
  cVar3 = FUN_1803aab30(plVar2);
  if (cVar3 != '\0') {
    FUN_1803bea90(plVar2);
    return;
  }
  return;
}


/* address=18001bcf0 name=FUN_18001bcf0 */

void FUN_18001bcf0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_180340c50();
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1803ce800();
    plVar1 = *(longlong **)(param_1 + 0x18);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803ca5b0();
    }
  }
  FUN_18001bed0(param_1);
  return;
}


/* address=18001bdd0 name=FUN_18001bdd0 */

void FUN_18001bdd0(char *param_1)

{
  longlong *plVar1;
  
  FUN_1803c90a0();
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803c1bd0();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803c2010();
    }
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00018001be36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x38) + 0x18))(*(undefined8 *)(param_1 + 0x40));
    return;
  }
  return;
}


/* address=18001bea0 name=FUN_18001bea0 */

void FUN_18001bea0(char *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803c1bd0();
      return;
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803c2010();
      return;
    }
  }
  return;
}


/* address=18001bed0 name=FUN_18001bed0 */

void FUN_18001bed0(char *param_1)

{
  longlong *plVar1;
  
  FUN_1803ada20();
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803c1bd0();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803c2010();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1710(param_1 + 0x10);
    return;
  }
  return;
}


/* address=18001bf90 name=FUN_18001bf90 */

void FUN_18001bf90(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x20);
      return;
    }
  }
  return;
}


/* address=18001c030 name=FUN_18001c030 */

void FUN_18001c030(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800c1e20();
  local_48 = *(undefined8 *)(local_30 + 0x10);
  local_50 = 0xfffffffffffffffe;
  local_40 = 0;
  local_58[0] = 1;
  local_38 = param_3;
  FUN_1800c1e20(local_30,local_58);
  return;
}


/* address=18001c140 name=FUN_18001c140 */

void FUN_18001c140(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800c2060();
  local_58 = *(undefined8 *)(local_30 + 0x10);
  local_60 = 0xfffffffffffffffe;
  local_50 = 0;
  local_68[0] = 1;
  local_48 = param_3;
  FUN_1800c2060(local_30,local_68);
  return;
}


/* address=18001c250 name=FUN_18001c250 */

void FUN_18001c250(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_210 [56];
  undefined4 local_130 [2];
  undefined8 local_128;
  undefined8 local_120;
  undefined4 *local_118;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_210[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_180099760();
  puVar2 = local_210;
  FUN_180691e40(local_30,puVar2,0xe0);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_128 = *(undefined8 *)(local_38 + 8);
  local_120 = 0;
  local_130[0] = 1;
  local_22 = 1;
  local_118 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_180099760(local_38);
  FUN_180691e40(local_38,local_130,0xe0);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001c550 name=FUN_18001c550 */

void FUN_18001c550(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4f0 [148];
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 *local_288;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4f0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_1800998b0();
  puVar2 = local_4f0;
  FUN_180691e40(local_30,puVar2,0x250);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_298 = *(undefined8 *)(local_38 + 8);
  local_290 = 0;
  local_2a0[0] = 1;
  local_22 = 1;
  local_288 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_1800998b0(local_38);
  FUN_180691e40(local_38,local_2a0,0x250);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001c850 name=FUN_18001c850 */

void FUN_18001c850(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4d0 [144];
  undefined4 local_290 [2];
  undefined8 local_288;
  undefined8 local_280;
  undefined4 *local_278;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4d0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_180099a00();
  puVar2 = local_4d0;
  FUN_180691e40(local_30,puVar2,0x240);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_288 = *(undefined8 *)(local_38 + 8);
  local_280 = 0;
  local_290[0] = 1;
  local_22 = 1;
  local_278 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_180099a00(local_38);
  FUN_180691e40(local_38,local_290,0x240);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001cb50 name=FUN_18001cb50 */

void FUN_18001cb50(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4d0 [144];
  undefined4 local_290 [2];
  undefined8 local_288;
  undefined8 local_280;
  undefined4 *local_278;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4d0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_180099b50();
  puVar2 = local_4d0;
  FUN_180691e40(local_30,puVar2,0x240);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_288 = *(undefined8 *)(local_38 + 8);
  local_280 = 0;
  local_290[0] = 1;
  local_22 = 1;
  local_278 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_180099b50(local_38);
  FUN_180691e40(local_38,local_290,0x240);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001ce50 name=FUN_18001ce50 */

void FUN_18001ce50(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_5e0 [178];
  undefined4 local_318 [2];
  undefined8 local_310;
  undefined8 local_308;
  undefined4 *local_300;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_5e0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_180099ca0();
  puVar2 = local_5e0;
  FUN_180691e40(local_30,puVar2,0x2c8);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_310 = *(undefined8 *)(local_38 + 8);
  local_308 = 0;
  local_318[0] = 1;
  local_22 = 1;
  local_300 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_180099ca0(local_38);
  FUN_180691e40(local_38,local_318,0x2c8);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001d150 name=FUN_18001d150 */

void FUN_18001d150(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4f0 [148];
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 *local_288;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4f0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_180099df0();
  puVar2 = local_4f0;
  FUN_180691e40(local_30,puVar2,0x250);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_298 = *(undefined8 *)(local_38 + 8);
  local_290 = 0;
  local_2a0[0] = 1;
  local_22 = 1;
  local_288 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_180099df0(local_38);
  FUN_180691e40(local_38,local_2a0,0x250);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001d450 name=FUN_18001d450 */

void FUN_18001d450(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4d0 [144];
  undefined4 local_290 [2];
  undefined8 local_288;
  undefined8 local_280;
  undefined4 *local_278;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4d0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_180099f40();
  puVar2 = local_4d0;
  FUN_180691e40(local_30,puVar2,0x240);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_288 = *(undefined8 *)(local_38 + 8);
  local_280 = 0;
  local_290[0] = 1;
  local_22 = 1;
  local_278 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_180099f40(local_38);
  FUN_180691e40(local_38,local_290,0x240);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001d750 name=FUN_18001d750 */

void FUN_18001d750(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_770 [228];
  undefined4 local_3e0 [2];
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined4 *local_3c8;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_770[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009a090();
  puVar2 = local_770;
  FUN_180691e40(local_30,puVar2,0x390);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_3d8 = *(undefined8 *)(local_38 + 8);
  local_3d0 = 0;
  local_3e0[0] = 1;
  local_22 = 1;
  local_3c8 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009a090(local_38);
  FUN_180691e40(local_38,local_3e0,0x390);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001da50 name=FUN_18001da50 */

void FUN_18001da50(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_520 [154];
  undefined4 local_2b8 [2];
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined4 *local_2a0;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_520[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009a1e0();
  puVar2 = local_520;
  FUN_180691e40(local_30,puVar2,0x268);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_2b0 = *(undefined8 *)(local_38 + 8);
  local_2a8 = 0;
  local_2b8[0] = 1;
  local_22 = 1;
  local_2a0 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009a1e0(local_38);
  FUN_180691e40(local_38,local_2b8,0x268);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001dd50 name=FUN_18001dd50 */

void FUN_18001dd50(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_6b0 [204];
  undefined4 local_380 [2];
  undefined8 local_378;
  undefined8 local_370;
  undefined4 *local_368;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_6b0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009a330();
  puVar2 = local_6b0;
  FUN_180691e40(local_30,puVar2,0x330);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_378 = *(undefined8 *)(local_38 + 8);
  local_370 = 0;
  local_380[0] = 1;
  local_22 = 1;
  local_368 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009a330(local_38);
  FUN_180691e40(local_38,local_380,0x330);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001e050 name=FUN_18001e050 */

void FUN_18001e050(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_590 [168];
  undefined4 local_2f0 [2];
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined4 *local_2d8;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_590[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009a410();
  puVar2 = local_590;
  FUN_180691e40(local_30,puVar2,0x2a0);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_2e8 = *(undefined8 *)(local_38 + 8);
  local_2e0 = 0;
  local_2f0[0] = 1;
  local_22 = 1;
  local_2d8 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009a410(local_38);
  FUN_180691e40(local_38,local_2f0,0x2a0);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001e350 name=FUN_18001e350 */

void FUN_18001e350(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_630 [188];
  undefined4 local_340 [2];
  undefined8 local_338;
  undefined8 local_330;
  undefined4 *local_328;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_630[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009a560();
  puVar2 = local_630;
  FUN_180691e40(local_30,puVar2,0x2f0);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_338 = *(undefined8 *)(local_38 + 8);
  local_330 = 0;
  local_340[0] = 1;
  local_22 = 1;
  local_328 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009a560(local_38);
  FUN_180691e40(local_38,local_340,0x2f0);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001e650 name=FUN_18001e650 */

void FUN_18001e650(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_5e0 [178];
  undefined4 local_318 [2];
  undefined8 local_310;
  undefined8 local_308;
  undefined4 *local_300;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_5e0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009a6b0();
  puVar2 = local_5e0;
  FUN_180691e40(local_30,puVar2,0x2c8);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_310 = *(undefined8 *)(local_38 + 8);
  local_308 = 0;
  local_318[0] = 1;
  local_22 = 1;
  local_300 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009a6b0(local_38);
  FUN_180691e40(local_38,local_318,0x2c8);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001e950 name=FUN_18001e950 */

void FUN_18001e950(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_550 [160];
  undefined4 local_2d0 [2];
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 *local_2b8;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_550[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009a790();
  puVar2 = local_550;
  FUN_180691e40(local_30,puVar2,0x280);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_2c8 = *(undefined8 *)(local_38 + 8);
  local_2c0 = 0;
  local_2d0[0] = 1;
  local_22 = 1;
  local_2b8 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009a790(local_38);
  FUN_180691e40(local_38,local_2d0,0x280);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001ec50 name=FUN_18001ec50 */

void FUN_18001ec50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_360 [2];
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800c5ec0();
  local_358 = *(undefined8 *)(local_30 + 8);
  local_350 = 0;
  local_360[0] = 1;
  local_348 = param_3;
  FUN_1800c5ec0(local_30,local_360);
  return;
}


/* address=18001eda0 name=FUN_18001eda0 */

void FUN_18001eda0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4f0 [148];
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 *local_288;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4f0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009a9a0();
  puVar2 = local_4f0;
  FUN_180691e40(local_30,puVar2,0x250);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_298 = *(undefined8 *)(local_38 + 8);
  local_290 = 0;
  local_2a0[0] = 1;
  local_22 = 1;
  local_288 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009a9a0(local_38);
  FUN_180691e40(local_38,local_2a0,0x250);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001f0a0 name=FUN_18001f0a0 */

void FUN_18001f0a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4f0 [148];
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 *local_288;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4f0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009aaf0();
  puVar2 = local_4f0;
  FUN_180691e40(local_30,puVar2,0x250);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_298 = *(undefined8 *)(local_38 + 8);
  local_290 = 0;
  local_2a0[0] = 1;
  local_22 = 1;
  local_288 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009aaf0(local_38);
  FUN_180691e40(local_38,local_2a0,0x250);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001f3a0 name=FUN_18001f3a0 */

void FUN_18001f3a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4f0 [148];
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 *local_288;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4f0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009ac40();
  puVar2 = local_4f0;
  FUN_180691e40(local_30,puVar2,0x250);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_298 = *(undefined8 *)(local_38 + 8);
  local_290 = 0;
  local_2a0[0] = 1;
  local_22 = 1;
  local_288 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009ac40(local_38);
  FUN_180691e40(local_38,local_2a0,0x250);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001f6a0 name=FUN_18001f6a0 */

void FUN_18001f6a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4f0 [148];
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 *local_288;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4f0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009ad90();
  puVar2 = local_4f0;
  FUN_180691e40(local_30,puVar2,0x250);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_298 = *(undefined8 *)(local_38 + 8);
  local_290 = 0;
  local_2a0[0] = 1;
  local_22 = 1;
  local_288 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009ad90(local_38);
  FUN_180691e40(local_38,local_2a0,0x250);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001f9a0 name=FUN_18001f9a0 */

void FUN_18001f9a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_520 [154];
  undefined4 local_2b8 [2];
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined4 *local_2a0;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_520[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009aee0();
  puVar2 = local_520;
  FUN_180691e40(local_30,puVar2,0x268);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_2b0 = *(undefined8 *)(local_38 + 8);
  local_2a8 = 0;
  local_2b8[0] = 1;
  local_22 = 1;
  local_2a0 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009aee0(local_38);
  FUN_180691e40(local_38,local_2b8,0x268);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001fca0 name=FUN_18001fca0 */

void FUN_18001fca0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_610 [184];
  undefined4 local_330 [2];
  undefined8 local_328;
  undefined8 local_320;
  undefined4 *local_318;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_610[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009afc0();
  puVar2 = local_610;
  FUN_180691e40(local_30,puVar2,0x2e0);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_328 = *(undefined8 *)(local_38 + 8);
  local_320 = 0;
  local_330[0] = 1;
  local_22 = 1;
  local_318 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009afc0(local_38);
  FUN_180691e40(local_38,local_330,0x2e0);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=18001ffa0 name=FUN_18001ffa0 */

void FUN_18001ffa0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_5c0 [174];
  undefined4 local_308 [2];
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 *local_2f0;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_5c0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009b110();
  puVar2 = local_5c0;
  FUN_180691e40(local_30,puVar2,0x2b8);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_300 = *(undefined8 *)(local_38 + 8);
  local_2f8 = 0;
  local_308[0] = 1;
  local_22 = 1;
  local_2f0 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009b110(local_38);
  FUN_180691e40(local_38,local_308,0x2b8);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=1800202a0 name=FUN_1800202a0 */

void FUN_1800202a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4f0 [148];
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 *local_288;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4f0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009b1f0();
  puVar2 = local_4f0;
  FUN_180691e40(local_30,puVar2,0x250);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_298 = *(undefined8 *)(local_38 + 8);
  local_290 = 0;
  local_2a0[0] = 1;
  local_22 = 1;
  local_288 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009b1f0(local_38);
  FUN_180691e40(local_38,local_2a0,0x250);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=1800205a0 name=FUN_1800205a0 */

void FUN_1800205a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_6b0 [204];
  undefined4 local_380 [2];
  undefined8 local_378;
  undefined8 local_370;
  undefined4 *local_368;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_6b0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009b340();
  puVar2 = local_6b0;
  FUN_180691e40(local_30,puVar2,0x330);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_378 = *(undefined8 *)(local_38 + 8);
  local_370 = 0;
  local_380[0] = 1;
  local_22 = 1;
  local_368 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009b340(local_38);
  FUN_180691e40(local_38,local_380,0x330);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=1800208a0 name=FUN_1800208a0 */

void FUN_1800208a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_510 [152];
  undefined4 local_2b0 [2];
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 *local_298;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_510[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009b420();
  puVar2 = local_510;
  FUN_180691e40(local_30,puVar2,0x260);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_2a8 = *(undefined8 *)(local_38 + 8);
  local_2a0 = 0;
  local_2b0[0] = 1;
  local_22 = 1;
  local_298 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009b420(local_38);
  FUN_180691e40(local_38,local_2b0,0x260);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=180020ba0 name=FUN_180020ba0 */

void FUN_180020ba0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_790 [232];
  undefined4 local_3f0 [2];
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined4 *local_3d8;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_790[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009b570();
  puVar2 = local_790;
  FUN_180691e40(local_30,puVar2,0x3a0);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_3e8 = *(undefined8 *)(local_38 + 8);
  local_3e0 = 0;
  local_3f0[0] = 1;
  local_22 = 1;
  local_3d8 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009b570(local_38);
  FUN_180691e40(local_38,local_3f0,0x3a0);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=180020ea0 name=FUN_180020ea0 */

void FUN_180020ea0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_5c0 [174];
  undefined4 local_308 [2];
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 *local_2f0;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_5c0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009b6f0();
  puVar2 = local_5c0;
  FUN_180691e40(local_30,puVar2,0x2b8);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_300 = *(undefined8 *)(local_38 + 8);
  local_2f8 = 0;
  local_308[0] = 1;
  local_22 = 1;
  local_2f0 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009b6f0(local_38);
  FUN_180691e40(local_38,local_308,0x2b8);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=1800211a0 name=FUN_1800211a0 */

void FUN_1800211a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4f0 [148];
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 *local_288;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4f0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009b7d0();
  puVar2 = local_4f0;
  FUN_180691e40(local_30,puVar2,0x250);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_298 = *(undefined8 *)(local_38 + 8);
  local_290 = 0;
  local_2a0[0] = 1;
  local_22 = 1;
  local_288 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009b7d0(local_38);
  FUN_180691e40(local_38,local_2a0,0x250);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=1800214a0 name=FUN_1800214a0 */

void FUN_1800214a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_5e0 [178];
  undefined4 local_318 [2];
  undefined8 local_310;
  undefined8 local_308;
  undefined4 *local_300;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_5e0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009b920();
  puVar2 = local_5e0;
  FUN_180691e40(local_30,puVar2,0x2c8);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_310 = *(undefined8 *)(local_38 + 8);
  local_308 = 0;
  local_318[0] = 1;
  local_22 = 1;
  local_300 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009b920(local_38);
  FUN_180691e40(local_38,local_318,0x2c8);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=1800217a0 name=FUN_1800217a0 */

void FUN_1800217a0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_4f0 [148];
  undefined4 local_2a0 [2];
  undefined8 local_298;
  undefined8 local_290;
  undefined4 *local_288;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_4f0[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009ba70();
  puVar2 = local_4f0;
  FUN_180691e40(local_30,puVar2,0x250);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_298 = *(undefined8 *)(local_38 + 8);
  local_290 = 0;
  local_2a0[0] = 1;
  local_22 = 1;
  local_288 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009ba70(local_38);
  FUN_180691e40(local_38,local_2a0,0x250);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=180021aa0 name=FUN_180021aa0 */

void FUN_180021aa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800cfb10();
  local_78 = *(undefined8 *)(local_30 + 8);
  local_70 = 0;
  local_80[0] = 1;
  local_68 = param_3;
  FUN_1800cfb10(local_30,local_80);
  return;
}


/* address=180021bb0 name=FUN_180021bb0 */

void FUN_180021bb0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_660 [194];
  undefined4 local_358 [2];
  undefined8 local_350;
  undefined8 local_348;
  undefined4 *local_340;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_660[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009bbc0();
  puVar2 = local_660;
  FUN_180691e40(local_30,puVar2,0x308);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_350 = *(undefined8 *)(local_38 + 8);
  local_348 = 0;
  local_358[0] = 1;
  local_22 = 1;
  local_340 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009bbc0(local_38);
  FUN_180691e40(local_38,local_358,0x308);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=180021eb0 name=FUN_180021eb0 */

void FUN_180021eb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_368 [2];
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800d00d0();
  local_360 = *(undefined8 *)(local_30 + 8);
  local_358 = 0;
  local_368[0] = 1;
  local_350 = param_3;
  FUN_1800d00d0(local_30,local_368);
  return;
}


/* address=180022000 name=FUN_180022000 */

void FUN_180022000(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_640 [190];
  undefined4 local_348 [2];
  undefined8 local_340;
  undefined8 local_338;
  undefined4 *local_330;
  undefined8 local_50;
  undefined8 local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined local_22;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_640[0] = 2;
  local_21 = 1;
  local_38 = param_1;
  local_48[0] = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = local_38 + 0x10;
  FUN_18009bdc0();
  puVar2 = local_640;
  FUN_180691e40(local_30,puVar2,0x2f8);
  local_21 = 0;
  FUN_1803ba480(local_48);
  lVar1 = local_38;
  local_340 = *(undefined8 *)(local_38 + 8);
  local_338 = 0;
  local_348[0] = 1;
  local_22 = 1;
  local_330 = puVar2;
  local_50 = FUN_1803b6560();
  local_38 = lVar1 + 0x10;
  FUN_18009bdc0(local_38);
  FUN_180691e40(local_38,local_348,0x2f8);
  local_22 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=180022300 name=FUN_180022300 */

void FUN_180022300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800d0880();
  local_130 = *(undefined8 *)(local_30 + 8);
  local_128 = 0;
  local_138[0] = 1;
  local_120 = param_3;
  FUN_1800d0880(local_30,local_138);
  return;
}


/* address=180022450 name=FUN_180022450 */

void FUN_180022450(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800d0a40();
  local_a8 = *(undefined8 *)(local_30 + 8);
  local_a0 = 0;
  local_b0[0] = 1;
  local_98 = param_3;
  FUN_1800d0a40(local_30,local_b0);
  return;
}


/* address=180022590 name=FUN_180022590 */

void FUN_180022590(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800d0c10();
  local_a8 = *(undefined8 *)(local_30 + 8);
  local_a0 = 0;
  local_b0[0] = 1;
  local_98 = param_3;
  FUN_1800d0c10(local_30,local_b0);
  return;
}


/* address=1800226d0 name=FUN_1800226d0 */

void FUN_1800226d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800d0de0();
  local_b0 = *(undefined8 *)(local_30 + 8);
  local_a8 = 0;
  local_b8[0] = 1;
  local_a0 = param_3;
  FUN_1800d0de0(local_30,local_b8);
  return;
}


/* address=180022810 name=FUN_180022810 */

void FUN_180022810(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800d0f50();
  local_130 = *(undefined8 *)(local_30 + 8);
  local_128 = 0;
  local_138[0] = 1;
  local_120 = param_3;
  FUN_1800d0f50(local_30,local_138);
  return;
}


/* address=180022960 name=FUN_180022960 */

void FUN_180022960(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800d11c0();
  local_68 = *(undefined8 *)(local_30 + 8);
  local_60 = 0;
  local_70[0] = 1;
  local_58 = param_3;
  FUN_1800d11c0(local_30,local_70);
  return;
}


/* address=180022a70 name=FUN_180022a70 */

void FUN_180022a70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_150 [2];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800d13f0();
  local_148 = *(undefined8 *)(local_30 + 8);
  local_140 = 0;
  local_150[0] = 1;
  local_138 = param_3;
  FUN_1800d13f0(local_30,local_150);
  return;
}


/* address=180022bc0 name=FUN_180022bc0 */

void FUN_180022bc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_30;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1800d15f0();
  local_c0 = *(undefined8 *)(local_30 + 8);
  local_b8 = 0;
  local_c8[0] = 1;
  local_b0 = param_3;
  FUN_1800d15f0(local_30,local_c8);
  return;
}


/* address=180023200 name=FUN_180023200 */

void FUN_180023200(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined4 local_60 [10];
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_60[0] = 2;
    FUN_1800c1e20(param_1 + 0x20,local_60);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x60);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x60,0);
    }
  }
  lVar1 = local_38;
  cVar2 = FUN_1803aac90(local_38,1);
  if (cVar2 != '\0') {
    FUN_180001790(lVar1);
  }
  return;
}


/* address=1800238d0 name=FUN_1800238d0 */

void FUN_1800238d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined4 local_70 [14];
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_70[0] = 2;
    FUN_1800c2060(param_1 + 0x20,local_70);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x70);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x70,0);
    }
  }
  lVar1 = local_38;
  cVar2 = FUN_1803aac90(local_38,1);
  if (cVar2 != '\0') {
    FUN_180001930(lVar1);
  }
  return;
}


/* address=180023a90 name=FUN_180023a90 */

void FUN_180023a90(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_140 [56];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x110);
  if (cVar1 != '\0') {
    FUN_180691e40(local_140,param_1 + 0x30,0xe0);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_140[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180023c70 name=FUN_180023c70 */

void FUN_180023c70(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_130 [56];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_130[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099760();
    FUN_180691e40(local_38,local_130,0xe0);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x110,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180001ae0(param_1);
  }
  return;
}


/* address=180023f50 name=FUN_180023f50 */

void FUN_180023f50(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180023f85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a82b0 + *(int *)(&DAT_1806a82b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180024400 name=FUN_180024400 */

void FUN_180024400(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_130 [56];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_130[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099760();
    FUN_180691e40(local_30,local_130,0xe0);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x110);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x110,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180001ae0(lVar1);
  }
  return;
}


/* address=180024700 name=FUN_180024700 */

void FUN_180024700(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_130 [56];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_130[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099760();
    FUN_180691e40(local_38,local_130,0xe0);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x110,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180001cf0(param_1);
  }
  return;
}


/* address=1800249e0 name=FUN_1800249e0 */

void FUN_1800249e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180024a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a82d0 + *(int *)(&DAT_1806a82d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180024e90 name=FUN_180024e90 */

void FUN_180024e90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_130 [56];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_130[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099760();
    FUN_180691e40(local_30,local_130,0xe0);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x110);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x110,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180001cf0(lVar1);
  }
  return;
}


/* address=180025190 name=FUN_180025190 */

void FUN_180025190(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2b0 [148];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x280);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2b0,param_1 + 0x30,0x250);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2b0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180025370 name=FUN_180025370 */

void FUN_180025370(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_1800998b0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180001f00(param_1);
  }
  return;
}


/* address=180025650 name=FUN_180025650 */

void FUN_180025650(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180025685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a82f0 + *(int *)(&DAT_1806a82f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180025b00 name=FUN_180025b00 */

void FUN_180025b00(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_1800998b0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180001f00(lVar1);
  }
  return;
}


/* address=180025e00 name=FUN_180025e00 */

void FUN_180025e00(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_1800998b0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180002110(param_1);
  }
  return;
}


/* address=1800260e0 name=FUN_1800260e0 */

void FUN_1800260e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180026115. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8310 + *(int *)(&DAT_1806a8310 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180026590 name=FUN_180026590 */

void FUN_180026590(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_1800998b0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180002110(lVar1);
  }
  return;
}


/* address=180026890 name=FUN_180026890 */

void FUN_180026890(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2a0 [144];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x270);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2a0,param_1 + 0x30,0x240);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2a0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180026a70 name=FUN_180026a70 */

void FUN_180026a70(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_290 [144];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_290[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099a00();
    FUN_180691e40(local_38,local_290,0x240);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x270,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180002320(param_1);
  }
  return;
}


/* address=180026d50 name=FUN_180026d50 */

void FUN_180026d50(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180026d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8330 + *(int *)(&DAT_1806a8330 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180027200 name=FUN_180027200 */

void FUN_180027200(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_290 [144];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_290[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099a00();
    FUN_180691e40(local_30,local_290,0x240);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x270);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x270,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180002320(lVar1);
  }
  return;
}


/* address=180027500 name=FUN_180027500 */

void FUN_180027500(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_290 [144];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_290[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099a00();
    FUN_180691e40(local_38,local_290,0x240);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x270,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180002530(param_1);
  }
  return;
}


/* address=1800277e0 name=FUN_1800277e0 */

void FUN_1800277e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180027815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8350 + *(int *)(&DAT_1806a8350 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180027c90 name=FUN_180027c90 */

void FUN_180027c90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_290 [144];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_290[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099a00();
    FUN_180691e40(local_30,local_290,0x240);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x270);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x270,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180002530(lVar1);
  }
  return;
}


/* address=180027f90 name=FUN_180027f90 */

void FUN_180027f90(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180027fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8370 + *(int *)(&DAT_1806a8370 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180028440 name=FUN_180028440 */

void FUN_180028440(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180028475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8390 + *(int *)(&DAT_1806a8390 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800288f0 name=FUN_1800288f0 */

void FUN_1800288f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2a0 [144];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x270);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2a0,param_1 + 0x30,0x240);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2a0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180028ad0 name=FUN_180028ad0 */

void FUN_180028ad0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_290 [144];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_290[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099b50();
    FUN_180691e40(local_38,local_290,0x240);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x270,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180002740(param_1);
  }
  return;
}


/* address=180028db0 name=FUN_180028db0 */

void FUN_180028db0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180028de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a83b0 + *(int *)(&DAT_1806a83b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180029260 name=FUN_180029260 */

void FUN_180029260(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_290 [144];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_290[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099b50();
    FUN_180691e40(local_30,local_290,0x240);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x270);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x270,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180002740(lVar1);
  }
  return;
}


/* address=180029560 name=FUN_180029560 */

void FUN_180029560(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_290 [144];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_290[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099b50();
    FUN_180691e40(local_38,local_290,0x240);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x270,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180002950(param_1);
  }
  return;
}


/* address=180029840 name=FUN_180029840 */

void FUN_180029840(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180029875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a83d0 + *(int *)(&DAT_1806a83d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180029cf0 name=FUN_180029cf0 */

void FUN_180029cf0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_290 [144];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_290[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099b50();
    FUN_180691e40(local_30,local_290,0x240);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x270);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x270,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180002950(lVar1);
  }
  return;
}


/* address=180029ff0 name=FUN_180029ff0 */

void FUN_180029ff0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002a025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a83f0 + *(int *)(&DAT_1806a83f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002a4a0 name=FUN_18002a4a0 */

void FUN_18002a4a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002a4d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8410 + *(int *)(&DAT_1806a8410 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002a950 name=FUN_18002a950 */

void FUN_18002a950(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002a985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8430 + *(int *)(&DAT_1806a8430 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002ae00 name=FUN_18002ae00 */

void FUN_18002ae00(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002ae35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8450 + *(int *)(&DAT_1806a8450 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002b2b0 name=FUN_18002b2b0 */

void FUN_18002b2b0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_328 [178];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x2f8);
  if (cVar1 != '\0') {
    FUN_180691e40(local_328,param_1 + 0x30,0x2c8);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_328[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=18002b490 name=FUN_18002b490 */

void FUN_18002b490(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_318 [178];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_318[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099ca0();
    FUN_180691e40(local_38,local_318,0x2c8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2f8,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180002b60(param_1);
  }
  return;
}


/* address=18002b770 name=FUN_18002b770 */

void FUN_18002b770(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002b7a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8470 + *(int *)(&DAT_1806a8470 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002bc20 name=FUN_18002bc20 */

void FUN_18002bc20(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_318 [178];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_318[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099ca0();
    FUN_180691e40(local_30,local_318,0x2c8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2f8);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2f8,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180002b60(lVar1);
  }
  return;
}


/* address=18002bf20 name=FUN_18002bf20 */

void FUN_18002bf20(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_318 [178];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_318[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099ca0();
    FUN_180691e40(local_38,local_318,0x2c8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2f8,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180002d70(param_1);
  }
  return;
}


/* address=18002c200 name=FUN_18002c200 */

void FUN_18002c200(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002c235. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8490 + *(int *)(&DAT_1806a8490 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002c6b0 name=FUN_18002c6b0 */

void FUN_18002c6b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_318 [178];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_318[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099ca0();
    FUN_180691e40(local_30,local_318,0x2c8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2f8);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2f8,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180002d70(lVar1);
  }
  return;
}


/* address=18002c9b0 name=FUN_18002c9b0 */

void FUN_18002c9b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002c9e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a84b0 + *(int *)(&DAT_1806a84b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002ce60 name=FUN_18002ce60 */

void FUN_18002ce60(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002ce95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a84d0 + *(int *)(&DAT_1806a84d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002d310 name=FUN_18002d310 */

void FUN_18002d310(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002d345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a84f0 + *(int *)(&DAT_1806a84f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002d7c0 name=FUN_18002d7c0 */

void FUN_18002d7c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002d7f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8510 + *(int *)(&DAT_1806a8510 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002dc70 name=FUN_18002dc70 */

void FUN_18002dc70(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2b0 [148];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x280);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2b0,param_1 + 0x30,0x250);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2b0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=18002de50 name=FUN_18002de50 */

void FUN_18002de50(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099df0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180002f80(param_1);
  }
  return;
}


/* address=18002e130 name=FUN_18002e130 */

void FUN_18002e130(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002e165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8530 + *(int *)(&DAT_1806a8530 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002e5e0 name=FUN_18002e5e0 */

void FUN_18002e5e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099df0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180002f80(lVar1);
  }
  return;
}


/* address=18002e8e0 name=FUN_18002e8e0 */

void FUN_18002e8e0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099df0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180003190(param_1);
  }
  return;
}


/* address=18002ebc0 name=FUN_18002ebc0 */

void FUN_18002ebc0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002ebf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8550 + *(int *)(&DAT_1806a8550 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002f070 name=FUN_18002f070 */

void FUN_18002f070(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099df0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180003190(lVar1);
  }
  return;
}


/* address=18002f370 name=FUN_18002f370 */

void FUN_18002f370(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2a0 [144];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x270);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2a0,param_1 + 0x30,0x240);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2a0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=18002f550 name=FUN_18002f550 */

void FUN_18002f550(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_290 [144];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_290[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099f40();
    FUN_180691e40(local_38,local_290,0x240);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x270,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_1800033a0(param_1);
  }
  return;
}


/* address=18002f830 name=FUN_18002f830 */

void FUN_18002f830(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018002f865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8570 + *(int *)(&DAT_1806a8570 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18002fce0 name=FUN_18002fce0 */

void FUN_18002fce0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_290 [144];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_290[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099f40();
    FUN_180691e40(local_30,local_290,0x240);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x270);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x270,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800033a0(lVar1);
  }
  return;
}


/* address=18002ffe0 name=FUN_18002ffe0 */

void FUN_18002ffe0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_290 [144];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_290[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_180099f40();
    FUN_180691e40(local_38,local_290,0x240);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x270,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_1800035b0(param_1);
  }
  return;
}


/* address=1800302c0 name=FUN_1800302c0 */

void FUN_1800302c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800302f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8590 + *(int *)(&DAT_1806a8590 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180030770 name=FUN_180030770 */

void FUN_180030770(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_290 [144];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_290[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_180099f40();
    FUN_180691e40(local_30,local_290,0x240);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x270);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x270,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800035b0(lVar1);
  }
  return;
}


/* address=180030a70 name=FUN_180030a70 */

void FUN_180030a70(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180030aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a85b0 + *(int *)(&DAT_1806a85b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180030f20 name=FUN_180030f20 */

void FUN_180030f20(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180030f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a85d0 + *(int *)(&DAT_1806a85d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800313d0 name=FUN_1800313d0 */

void FUN_1800313d0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_3f0 [228];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x3c0);
  if (cVar1 != '\0') {
    FUN_180691e40(local_3f0,param_1 + 0x30,0x390);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_3f0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=1800315b0 name=FUN_1800315b0 */

void FUN_1800315b0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_3e0 [228];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_3e0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a090();
    FUN_180691e40(local_38,local_3e0,0x390);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x3c0,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_1800037c0(param_1);
  }
  return;
}


/* address=180031890 name=FUN_180031890 */

void FUN_180031890(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800318c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a85f0 + *(int *)(&DAT_1806a85f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180031d40 name=FUN_180031d40 */

void FUN_180031d40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_3e0 [228];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_3e0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a090();
    FUN_180691e40(local_30,local_3e0,0x390);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x3c0);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x3c0,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800037c0(lVar1);
  }
  return;
}


/* address=180032040 name=FUN_180032040 */

void FUN_180032040(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_3e0 [228];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_3e0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a090();
    FUN_180691e40(local_38,local_3e0,0x390);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x3c0,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_1800039d0(param_1);
  }
  return;
}


/* address=180032320 name=FUN_180032320 */

void FUN_180032320(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180032355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8610 + *(int *)(&DAT_1806a8610 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800327d0 name=FUN_1800327d0 */

void FUN_1800327d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_3e0 [228];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_3e0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a090();
    FUN_180691e40(local_30,local_3e0,0x390);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x3c0);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x3c0,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800039d0(lVar1);
  }
  return;
}


/* address=180032ad0 name=FUN_180032ad0 */

void FUN_180032ad0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180032b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8630 + *(int *)(&DAT_1806a8630 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180032f80 name=FUN_180032f80 */

void FUN_180032f80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180032fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8650 + *(int *)(&DAT_1806a8650 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180033430 name=FUN_180033430 */

void FUN_180033430(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2c8 [154];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x298);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2c8,param_1 + 0x30,0x268);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2c8[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180033610 name=FUN_180033610 */

void FUN_180033610(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2b8 [154];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2b8[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a1e0();
    FUN_180691e40(local_38,local_2b8,0x268);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x298,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180003be0(param_1);
  }
  return;
}


/* address=1800338f0 name=FUN_1800338f0 */

void FUN_1800338f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180033925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8670 + *(int *)(&DAT_1806a8670 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180033da0 name=FUN_180033da0 */

void FUN_180033da0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2b8 [154];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2b8[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a1e0();
    FUN_180691e40(local_30,local_2b8,0x268);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x298);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x298,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180003be0(lVar1);
  }
  return;
}


/* address=1800340a0 name=FUN_1800340a0 */

void FUN_1800340a0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2b8 [154];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2b8[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a1e0();
    FUN_180691e40(local_38,local_2b8,0x268);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x298,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180003df0(param_1);
  }
  return;
}


/* address=180034380 name=FUN_180034380 */

void FUN_180034380(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800343b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8690 + *(int *)(&DAT_1806a8690 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180034830 name=FUN_180034830 */

void FUN_180034830(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2b8 [154];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2b8[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a1e0();
    FUN_180691e40(local_30,local_2b8,0x268);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x298);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x298,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180003df0(lVar1);
  }
  return;
}


/* address=180034b30 name=FUN_180034b30 */

void FUN_180034b30(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_390 [204];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x360);
  if (cVar1 != '\0') {
    FUN_180691e40(local_390,param_1 + 0x30,0x330);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_390[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180034d10 name=FUN_180034d10 */

void FUN_180034d10(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_380 [204];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_380[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a330();
    FUN_180691e40(local_38,local_380,0x330);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x360,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180004000(param_1);
  }
  return;
}


/* address=180034ff0 name=FUN_180034ff0 */

void FUN_180034ff0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180035025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a86b0 + *(int *)(&DAT_1806a86b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800354a0 name=FUN_1800354a0 */

void FUN_1800354a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_380 [204];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_380[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a330();
    FUN_180691e40(local_30,local_380,0x330);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x360);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x360,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180004000(lVar1);
  }
  return;
}


/* address=1800357a0 name=FUN_1800357a0 */

void FUN_1800357a0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_380 [204];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_380[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a330();
    FUN_180691e40(local_38,local_380,0x330);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x360,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180004210(param_1);
  }
  return;
}


/* address=180035a80 name=FUN_180035a80 */

void FUN_180035a80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180035ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a86d0 + *(int *)(&DAT_1806a86d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180035f30 name=FUN_180035f30 */

void FUN_180035f30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_380 [204];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_380[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a330();
    FUN_180691e40(local_30,local_380,0x330);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x360);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x360,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180004210(lVar1);
  }
  return;
}


/* address=180036230 name=FUN_180036230 */

void FUN_180036230(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180036265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a86f0 + *(int *)(&DAT_1806a86f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800366e0 name=FUN_1800366e0 */

void FUN_1800366e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180036715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8710 + *(int *)(&DAT_1806a8710 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180036b90 name=FUN_180036b90 */

void FUN_180036b90(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180036bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8730 + *(int *)(&DAT_1806a8730 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180037040 name=FUN_180037040 */

void FUN_180037040(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180037075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8750 + *(int *)(&DAT_1806a8750 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800374f0 name=FUN_1800374f0 */

void FUN_1800374f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180037525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8770 + *(int *)(&DAT_1806a8770 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800379a0 name=FUN_1800379a0 */

void FUN_1800379a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800379d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8790 + *(int *)(&DAT_1806a8790 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180037e50 name=FUN_180037e50 */

void FUN_180037e50(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180037e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a87b0 + *(int *)(&DAT_1806a87b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180038300 name=FUN_180038300 */

void FUN_180038300(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180038335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a87d0 + *(int *)(&DAT_1806a87d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800387b0 name=FUN_1800387b0 */

void FUN_1800387b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800387e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a87f0 + *(int *)(&DAT_1806a87f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180038c60 name=FUN_180038c60 */

void FUN_180038c60(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180038c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8810 + *(int *)(&DAT_1806a8810 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180039110 name=FUN_180039110 */

void FUN_180039110(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180039145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8830 + *(int *)(&DAT_1806a8830 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800395c0 name=FUN_1800395c0 */

void FUN_1800395c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800395f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8850 + *(int *)(&DAT_1806a8850 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180039a70 name=FUN_180039a70 */

void FUN_180039a70(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_300 [168];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x2d0);
  if (cVar1 != '\0') {
    FUN_180691e40(local_300,param_1 + 0x30,0x2a0);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_300[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180039c50 name=FUN_180039c50 */

void FUN_180039c50(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2f0 [168];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2f0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a410();
    FUN_180691e40(local_38,local_2f0,0x2a0);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2d0,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180004420(param_1);
  }
  return;
}


/* address=180039f30 name=FUN_180039f30 */

void FUN_180039f30(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180039f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8870 + *(int *)(&DAT_1806a8870 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003a3e0 name=FUN_18003a3e0 */

void FUN_18003a3e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2f0 [168];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2f0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a410();
    FUN_180691e40(local_30,local_2f0,0x2a0);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2d0);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2d0,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180004420(lVar1);
  }
  return;
}


/* address=18003a6e0 name=FUN_18003a6e0 */

void FUN_18003a6e0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2f0 [168];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2f0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a410();
    FUN_180691e40(local_38,local_2f0,0x2a0);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2d0,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180004630(param_1);
  }
  return;
}


/* address=18003a9c0 name=FUN_18003a9c0 */

void FUN_18003a9c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018003a9f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8890 + *(int *)(&DAT_1806a8890 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003ae70 name=FUN_18003ae70 */

void FUN_18003ae70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2f0 [168];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2f0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a410();
    FUN_180691e40(local_30,local_2f0,0x2a0);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2d0);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2d0,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180004630(lVar1);
  }
  return;
}


/* address=18003b170 name=FUN_18003b170 */

void FUN_18003b170(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018003b1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a88b0 + *(int *)(&DAT_1806a88b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003b620 name=FUN_18003b620 */

void FUN_18003b620(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018003b655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a88d0 + *(int *)(&DAT_1806a88d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003bad0 name=FUN_18003bad0 */

void FUN_18003bad0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018003bb05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a88f0 + *(int *)(&DAT_1806a88f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003bf80 name=FUN_18003bf80 */

void FUN_18003bf80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018003bfb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8910 + *(int *)(&DAT_1806a8910 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003c430 name=FUN_18003c430 */

void FUN_18003c430(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_350 [188];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 800);
  if (cVar1 != '\0') {
    FUN_180691e40(local_350,param_1 + 0x30,0x2f0);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_350[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=18003c610 name=FUN_18003c610 */

void FUN_18003c610(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_340 [188];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_340[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a560();
    FUN_180691e40(local_38,local_340,0x2f0);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 800,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180004840(param_1);
  }
  return;
}


/* address=18003c8f0 name=FUN_18003c8f0 */

void FUN_18003c8f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018003c925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8930 + *(int *)(&DAT_1806a8930 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003cda0 name=FUN_18003cda0 */

void FUN_18003cda0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_340 [188];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_340[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a560();
    FUN_180691e40(local_30,local_340,0x2f0);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 800);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 800,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180004840(lVar1);
  }
  return;
}


/* address=18003d0a0 name=FUN_18003d0a0 */

void FUN_18003d0a0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_340 [188];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_340[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a560();
    FUN_180691e40(local_38,local_340,0x2f0);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 800,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180004a50(param_1);
  }
  return;
}


/* address=18003d380 name=FUN_18003d380 */

void FUN_18003d380(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018003d3b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8950 + *(int *)(&DAT_1806a8950 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003d830 name=FUN_18003d830 */

void FUN_18003d830(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_340 [188];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_340[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a560();
    FUN_180691e40(local_30,local_340,0x2f0);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 800);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 800,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180004a50(lVar1);
  }
  return;
}


/* address=18003db30 name=FUN_18003db30 */

void FUN_18003db30(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_328 [178];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x2f8);
  if (cVar1 != '\0') {
    FUN_180691e40(local_328,param_1 + 0x30,0x2c8);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_328[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=18003dd10 name=FUN_18003dd10 */

void FUN_18003dd10(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_318 [178];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_318[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a6b0();
    FUN_180691e40(local_38,local_318,0x2c8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2f8,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180004c60(param_1);
  }
  return;
}


/* address=18003dff0 name=FUN_18003dff0 */

void FUN_18003dff0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018003e025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8970 + *(int *)(&DAT_1806a8970 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003e4a0 name=FUN_18003e4a0 */

void FUN_18003e4a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_318 [178];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_318[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a6b0();
    FUN_180691e40(local_30,local_318,0x2c8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2f8);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2f8,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180004c60(lVar1);
  }
  return;
}


/* address=18003e7a0 name=FUN_18003e7a0 */

void FUN_18003e7a0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_318 [178];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_318[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a6b0();
    FUN_180691e40(local_38,local_318,0x2c8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2f8,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180004e70(param_1);
  }
  return;
}


/* address=18003ea80 name=FUN_18003ea80 */

void FUN_18003ea80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018003eab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8990 + *(int *)(&DAT_1806a8990 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003ef30 name=FUN_18003ef30 */

void FUN_18003ef30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_318 [178];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_318[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a6b0();
    FUN_180691e40(local_30,local_318,0x2c8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2f8);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2f8,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180004e70(lVar1);
  }
  return;
}


/* address=18003f230 name=FUN_18003f230 */

void FUN_18003f230(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2e0 [160];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x2b0);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2e0,param_1 + 0x30,0x280);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2e0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=18003f410 name=FUN_18003f410 */

void FUN_18003f410(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2d0 [160];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2d0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a790();
    FUN_180691e40(local_38,local_2d0,0x280);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2b0,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180005080(param_1);
  }
  return;
}


/* address=18003f6f0 name=FUN_18003f6f0 */

void FUN_18003f6f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018003f725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a89b0 + *(int *)(&DAT_1806a89b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18003fba0 name=FUN_18003fba0 */

void FUN_18003fba0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2d0 [160];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2d0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a790();
    FUN_180691e40(local_30,local_2d0,0x280);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2b0);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2b0,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180005080(lVar1);
  }
  return;
}


/* address=18003fea0 name=FUN_18003fea0 */

void FUN_18003fea0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2d0 [160];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2d0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a790();
    FUN_180691e40(local_38,local_2d0,0x280);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2b0,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180005290(param_1);
  }
  return;
}


/* address=180040180 name=FUN_180040180 */

void FUN_180040180(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800401b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a89d0 + *(int *)(&DAT_1806a89d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180040630 name=FUN_180040630 */

void FUN_180040630(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2d0 [160];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2d0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a790();
    FUN_180691e40(local_30,local_2d0,0x280);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2b0);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2b0,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180005290(lVar1);
  }
  return;
}


/* address=180040930 name=FUN_180040930 */

void FUN_180040930(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_390 [204];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x360);
  if (cVar1 != '\0') {
    FUN_180691e40(local_390,param_1 + 0x30,0x330);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_390[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180040b10 name=FUN_180040b10 */

void FUN_180040b10(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_370 [204];
  longlong local_40;
  byte local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = param_1;
  bVar2 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_370[0] = 2;
    local_21 = bVar2;
    FUN_1800c5ec0(local_40 + 0x20,local_370);
    bVar2 = local_21;
  }
  if ((bVar2 & 1) != 0) {
    FUN_1803ba1e0(local_40 + 0x360,0);
  }
  lVar1 = local_40;
  cVar3 = FUN_1803aae90(local_40);
  if (cVar3 != '\0') {
    FUN_1800054a0(lVar1);
  }
  return;
}


/* address=180040d20 name=FUN_180040d20 */

void FUN_180040d20(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180040d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a89f0 + *(int *)(&DAT_1806a89f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180041190 name=FUN_180041190 */

void FUN_180041190(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_370 [204];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_370[0] = 2;
    FUN_1800c5ec0(param_1 + 0x20,local_370);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x360);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x360,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800054a0(lVar1);
  }
  return;
}


/* address=1800413c0 name=FUN_1800413c0 */

void FUN_1800413c0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_370 [204];
  longlong local_40;
  byte local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = param_1;
  bVar2 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_370[0] = 2;
    local_21 = bVar2;
    FUN_1800c5ec0(local_40 + 0x20,local_370);
    bVar2 = local_21;
  }
  if ((bVar2 & 1) != 0) {
    FUN_1803ba1e0(local_40 + 0x360,0);
  }
  lVar1 = local_40;
  cVar3 = FUN_1803aae90(local_40);
  if (cVar3 != '\0') {
    FUN_1800056b0(lVar1);
  }
  return;
}


/* address=1800415d0 name=FUN_1800415d0 */

void FUN_1800415d0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180041606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8a10 + *(int *)(&DAT_1806a8a10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180041a40 name=FUN_180041a40 */

void FUN_180041a40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_370 [204];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_370[0] = 2;
    FUN_1800c5ec0(param_1 + 0x20,local_370);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x360);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x360,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800056b0(lVar1);
  }
  return;
}


/* address=180041c70 name=FUN_180041c70 */

void FUN_180041c70(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180041ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8a30 + *(int *)(&DAT_1806a8a30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180042120 name=FUN_180042120 */

void FUN_180042120(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180042155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8a50 + *(int *)(&DAT_1806a8a50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800425d0 name=FUN_1800425d0 */

void FUN_1800425d0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180042605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8a70 + *(int *)(&DAT_1806a8a70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180042a80 name=FUN_180042a80 */

void FUN_180042a80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180042ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8a90 + *(int *)(&DAT_1806a8a90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180042f30 name=FUN_180042f30 */

void FUN_180042f30(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180042f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8ab0 + *(int *)(&DAT_1806a8ab0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800433e0 name=FUN_1800433e0 */

void FUN_1800433e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180043415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8ad0 + *(int *)(&DAT_1806a8ad0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180043890 name=FUN_180043890 */

void FUN_180043890(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2b0 [148];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x280);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2b0,param_1 + 0x30,0x250);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2b0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180043a70 name=FUN_180043a70 */

void FUN_180043a70(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a9a0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_1800058c0(param_1);
  }
  return;
}


/* address=180043d50 name=FUN_180043d50 */

void FUN_180043d50(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180043d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8af0 + *(int *)(&DAT_1806a8af0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180044200 name=FUN_180044200 */

void FUN_180044200(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a9a0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800058c0(lVar1);
  }
  return;
}


/* address=180044500 name=FUN_180044500 */

void FUN_180044500(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009a9a0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180005ad0(param_1);
  }
  return;
}


/* address=1800447e0 name=FUN_1800447e0 */

void FUN_1800447e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180044815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8b10 + *(int *)(&DAT_1806a8b10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180044c90 name=FUN_180044c90 */

void FUN_180044c90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009a9a0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180005ad0(lVar1);
  }
  return;
}


/* address=180044f90 name=FUN_180044f90 */

void FUN_180044f90(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180044fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8b30 + *(int *)(&DAT_1806a8b30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180045440 name=FUN_180045440 */

void FUN_180045440(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180045475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8b50 + *(int *)(&DAT_1806a8b50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800458f0 name=FUN_1800458f0 */

void FUN_1800458f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2b0 [148];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x280);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2b0,param_1 + 0x30,0x250);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2b0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180045ad0 name=FUN_180045ad0 */

void FUN_180045ad0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009aaf0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180005ce0(param_1);
  }
  return;
}


/* address=180045db0 name=FUN_180045db0 */

void FUN_180045db0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180045de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8b70 + *(int *)(&DAT_1806a8b70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180046260 name=FUN_180046260 */

void FUN_180046260(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009aaf0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180005ce0(lVar1);
  }
  return;
}


/* address=180046560 name=FUN_180046560 */

void FUN_180046560(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009aaf0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180005ef0(param_1);
  }
  return;
}


/* address=180046840 name=FUN_180046840 */

void FUN_180046840(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180046875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8b90 + *(int *)(&DAT_1806a8b90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180046cf0 name=FUN_180046cf0 */

void FUN_180046cf0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009aaf0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180005ef0(lVar1);
  }
  return;
}


/* address=180046ff0 name=FUN_180046ff0 */

void FUN_180046ff0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180047025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8bb0 + *(int *)(&DAT_1806a8bb0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800474a0 name=FUN_1800474a0 */

void FUN_1800474a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800474d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8bd0 + *(int *)(&DAT_1806a8bd0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180047950 name=FUN_180047950 */

void FUN_180047950(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180047985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8bf0 + *(int *)(&DAT_1806a8bf0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180047e00 name=FUN_180047e00 */

void FUN_180047e00(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180047e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8c10 + *(int *)(&DAT_1806a8c10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800482b0 name=FUN_1800482b0 */

void FUN_1800482b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800482e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8c30 + *(int *)(&DAT_1806a8c30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180048760 name=FUN_180048760 */

void FUN_180048760(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180048795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8c50 + *(int *)(&DAT_1806a8c50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180048c10 name=FUN_180048c10 */

void FUN_180048c10(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180048c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8c70 + *(int *)(&DAT_1806a8c70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800490c0 name=FUN_1800490c0 */

void FUN_1800490c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800490f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8c90 + *(int *)(&DAT_1806a8c90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180049570 name=FUN_180049570 */

void FUN_180049570(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800495a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8cb0 + *(int *)(&DAT_1806a8cb0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180049a20 name=FUN_180049a20 */

void FUN_180049a20(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180049a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8cd0 + *(int *)(&DAT_1806a8cd0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180049ed0 name=FUN_180049ed0 */

void FUN_180049ed0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2b0 [148];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x280);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2b0,param_1 + 0x30,0x250);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2b0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=18004a0b0 name=FUN_18004a0b0 */

void FUN_18004a0b0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009ac40();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180006100(param_1);
  }
  return;
}


/* address=18004a390 name=FUN_18004a390 */

void FUN_18004a390(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004a3c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8cf0 + *(int *)(&DAT_1806a8cf0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004a840 name=FUN_18004a840 */

void FUN_18004a840(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009ac40();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180006100(lVar1);
  }
  return;
}


/* address=18004ab40 name=FUN_18004ab40 */

void FUN_18004ab40(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009ac40();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180006310(param_1);
  }
  return;
}


/* address=18004ae20 name=FUN_18004ae20 */

void FUN_18004ae20(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004ae55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8d10 + *(int *)(&DAT_1806a8d10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004b2d0 name=FUN_18004b2d0 */

void FUN_18004b2d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009ac40();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180006310(lVar1);
  }
  return;
}


/* address=18004b5d0 name=FUN_18004b5d0 */

void FUN_18004b5d0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004b605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8d30 + *(int *)(&DAT_1806a8d30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004ba80 name=FUN_18004ba80 */

void FUN_18004ba80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004bab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8d50 + *(int *)(&DAT_1806a8d50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004bf30 name=FUN_18004bf30 */

void FUN_18004bf30(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004bf65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8d70 + *(int *)(&DAT_1806a8d70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004c3e0 name=FUN_18004c3e0 */

void FUN_18004c3e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004c415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8d90 + *(int *)(&DAT_1806a8d90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004c890 name=FUN_18004c890 */

void FUN_18004c890(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004c8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8db0 + *(int *)(&DAT_1806a8db0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004cd40 name=FUN_18004cd40 */

void FUN_18004cd40(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004cd75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8dd0 + *(int *)(&DAT_1806a8dd0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004d1f0 name=FUN_18004d1f0 */

void FUN_18004d1f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004d225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8df0 + *(int *)(&DAT_1806a8df0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004d6a0 name=FUN_18004d6a0 */

void FUN_18004d6a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004d6d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8e10 + *(int *)(&DAT_1806a8e10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004db50 name=FUN_18004db50 */

void FUN_18004db50(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2b0 [148];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x280);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2b0,param_1 + 0x30,0x250);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2b0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=18004dd30 name=FUN_18004dd30 */

void FUN_18004dd30(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009ad90();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180006520(param_1);
  }
  return;
}


/* address=18004e010 name=FUN_18004e010 */

void FUN_18004e010(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004e045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8e30 + *(int *)(&DAT_1806a8e30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004e4c0 name=FUN_18004e4c0 */

void FUN_18004e4c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009ad90();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180006520(lVar1);
  }
  return;
}


/* address=18004e7c0 name=FUN_18004e7c0 */

void FUN_18004e7c0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009ad90();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180006730(param_1);
  }
  return;
}


/* address=18004eaa0 name=FUN_18004eaa0 */

void FUN_18004eaa0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004ead5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8e50 + *(int *)(&DAT_1806a8e50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004ef50 name=FUN_18004ef50 */

void FUN_18004ef50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009ad90();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180006730(lVar1);
  }
  return;
}


/* address=18004f250 name=FUN_18004f250 */

void FUN_18004f250(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004f285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8e70 + *(int *)(&DAT_1806a8e70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004f700 name=FUN_18004f700 */

void FUN_18004f700(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004f735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8e90 + *(int *)(&DAT_1806a8e90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18004fbb0 name=FUN_18004fbb0 */

void FUN_18004fbb0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018004fbe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8eb0 + *(int *)(&DAT_1806a8eb0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180050020 name=FUN_180050020 */

void FUN_180050020(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180050056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8ed0 + *(int *)(&DAT_1806a8ed0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180050490 name=FUN_180050490 */

void FUN_180050490(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800504c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8ef0 + *(int *)(&DAT_1806a8ef0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180050940 name=FUN_180050940 */

void FUN_180050940(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180050975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8f10 + *(int *)(&DAT_1806a8f10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180050df0 name=FUN_180050df0 */

void FUN_180050df0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180050e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8f30 + *(int *)(&DAT_1806a8f30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800512a0 name=FUN_1800512a0 */

void FUN_1800512a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800512d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8f50 + *(int *)(&DAT_1806a8f50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180051750 name=FUN_180051750 */

void FUN_180051750(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180051785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8f70 + *(int *)(&DAT_1806a8f70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180051c00 name=FUN_180051c00 */

void FUN_180051c00(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180051c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8f90 + *(int *)(&DAT_1806a8f90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800520b0 name=FUN_1800520b0 */

void FUN_1800520b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800520e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8fb0 + *(int *)(&DAT_1806a8fb0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180052560 name=FUN_180052560 */

void FUN_180052560(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180052595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8fd0 + *(int *)(&DAT_1806a8fd0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180052a10 name=FUN_180052a10 */

void FUN_180052a10(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180052a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a8ff0 + *(int *)(&DAT_1806a8ff0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180052ec0 name=FUN_180052ec0 */

void FUN_180052ec0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180052ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9010 + *(int *)(&DAT_1806a9010 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180053370 name=FUN_180053370 */

void FUN_180053370(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800533a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9030 + *(int *)(&DAT_1806a9030 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180053820 name=FUN_180053820 */

void FUN_180053820(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180053855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9050 + *(int *)(&DAT_1806a9050 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180053cd0 name=FUN_180053cd0 */

void FUN_180053cd0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2c8 [154];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x298);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2c8,param_1 + 0x30,0x268);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2c8[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180053eb0 name=FUN_180053eb0 */

void FUN_180053eb0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2b8 [154];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2b8[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009aee0();
    FUN_180691e40(local_38,local_2b8,0x268);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x298,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180006940(param_1);
  }
  return;
}


/* address=180054190 name=FUN_180054190 */

void FUN_180054190(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800541c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9070 + *(int *)(&DAT_1806a9070 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180054640 name=FUN_180054640 */

void FUN_180054640(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2b8 [154];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2b8[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009aee0();
    FUN_180691e40(local_30,local_2b8,0x268);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x298);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x298,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180006940(lVar1);
  }
  return;
}


/* address=180054940 name=FUN_180054940 */

void FUN_180054940(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2b8 [154];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2b8[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009aee0();
    FUN_180691e40(local_38,local_2b8,0x268);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x298,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180006b50(param_1);
  }
  return;
}


/* address=180054c20 name=FUN_180054c20 */

void FUN_180054c20(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180054c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9090 + *(int *)(&DAT_1806a9090 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800550d0 name=FUN_1800550d0 */

void FUN_1800550d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2b8 [154];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2b8[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009aee0();
    FUN_180691e40(local_30,local_2b8,0x268);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x298);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x298,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180006b50(lVar1);
  }
  return;
}


/* address=1800553d0 name=FUN_1800553d0 */

void FUN_1800553d0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_340 [184];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x310);
  if (cVar1 != '\0') {
    FUN_180691e40(local_340,param_1 + 0x30,0x2e0);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_340[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=1800555b0 name=FUN_1800555b0 */

void FUN_1800555b0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_330 [184];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_330[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009afc0();
    FUN_180691e40(local_38,local_330,0x2e0);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x310,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180006d60(param_1);
  }
  return;
}


/* address=180055890 name=FUN_180055890 */

void FUN_180055890(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800558c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a90b0 + *(int *)(&DAT_1806a90b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180055d40 name=FUN_180055d40 */

void FUN_180055d40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_330 [184];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_330[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009afc0();
    FUN_180691e40(local_30,local_330,0x2e0);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x310);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x310,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180006d60(lVar1);
  }
  return;
}


/* address=180056040 name=FUN_180056040 */

void FUN_180056040(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_330 [184];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_330[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009afc0();
    FUN_180691e40(local_38,local_330,0x2e0);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x310,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180006f70(param_1);
  }
  return;
}


/* address=180056320 name=FUN_180056320 */

void FUN_180056320(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180056355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a90d0 + *(int *)(&DAT_1806a90d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800567d0 name=FUN_1800567d0 */

void FUN_1800567d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_330 [184];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_330[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009afc0();
    FUN_180691e40(local_30,local_330,0x2e0);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x310);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x310,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180006f70(lVar1);
  }
  return;
}


/* address=180056ad0 name=FUN_180056ad0 */

void FUN_180056ad0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180056b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a90f0 + *(int *)(&DAT_1806a90f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180056f80 name=FUN_180056f80 */

void FUN_180056f80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180056fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9110 + *(int *)(&DAT_1806a9110 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180057430 name=FUN_180057430 */

void FUN_180057430(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_318 [174];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x2e8);
  if (cVar1 != '\0') {
    FUN_180691e40(local_318,param_1 + 0x30,0x2b8);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_318[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180057610 name=FUN_180057610 */

void FUN_180057610(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_308 [174];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_308[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b110();
    FUN_180691e40(local_38,local_308,0x2b8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2e8,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180007180(param_1);
  }
  return;
}


/* address=1800578f0 name=FUN_1800578f0 */

void FUN_1800578f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180057925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9130 + *(int *)(&DAT_1806a9130 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180057da0 name=FUN_180057da0 */

void FUN_180057da0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_308 [174];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_308[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b110();
    FUN_180691e40(local_30,local_308,0x2b8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2e8);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2e8,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180007180(lVar1);
  }
  return;
}


/* address=1800580a0 name=FUN_1800580a0 */

void FUN_1800580a0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_308 [174];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_308[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b110();
    FUN_180691e40(local_38,local_308,0x2b8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2e8,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180007390(param_1);
  }
  return;
}


/* address=180058380 name=FUN_180058380 */

void FUN_180058380(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800583b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9150 + *(int *)(&DAT_1806a9150 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180058830 name=FUN_180058830 */

void FUN_180058830(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_308 [174];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_308[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b110();
    FUN_180691e40(local_30,local_308,0x2b8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2e8);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2e8,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180007390(lVar1);
  }
  return;
}


/* address=180058b30 name=FUN_180058b30 */

void FUN_180058b30(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2b0 [148];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x280);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2b0,param_1 + 0x30,0x250);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2b0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180058d10 name=FUN_180058d10 */

void FUN_180058d10(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b1f0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_1800075a0(param_1);
  }
  return;
}


/* address=180058ff0 name=FUN_180058ff0 */

void FUN_180058ff0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180059025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9170 + *(int *)(&DAT_1806a9170 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800594a0 name=FUN_1800594a0 */

void FUN_1800594a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b1f0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800075a0(lVar1);
  }
  return;
}


/* address=1800597a0 name=FUN_1800597a0 */

void FUN_1800597a0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b1f0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_1800077b0(param_1);
  }
  return;
}


/* address=180059a80 name=FUN_180059a80 */

void FUN_180059a80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180059ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9190 + *(int *)(&DAT_1806a9190 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180059f30 name=FUN_180059f30 */

void FUN_180059f30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b1f0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800077b0(lVar1);
  }
  return;
}


/* address=18005a230 name=FUN_18005a230 */

void FUN_18005a230(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005a265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a91b0 + *(int *)(&DAT_1806a91b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005a6e0 name=FUN_18005a6e0 */

void FUN_18005a6e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005a715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a91d0 + *(int *)(&DAT_1806a91d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005ab90 name=FUN_18005ab90 */

void FUN_18005ab90(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005abc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a91f0 + *(int *)(&DAT_1806a91f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005b040 name=FUN_18005b040 */

void FUN_18005b040(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005b075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9210 + *(int *)(&DAT_1806a9210 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005b4f0 name=FUN_18005b4f0 */

void FUN_18005b4f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005b525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9230 + *(int *)(&DAT_1806a9230 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005b9a0 name=FUN_18005b9a0 */

void FUN_18005b9a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005b9d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9250 + *(int *)(&DAT_1806a9250 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005be50 name=FUN_18005be50 */

void FUN_18005be50(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005be85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9270 + *(int *)(&DAT_1806a9270 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005c300 name=FUN_18005c300 */

void FUN_18005c300(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005c335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9290 + *(int *)(&DAT_1806a9290 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005c7b0 name=FUN_18005c7b0 */

void FUN_18005c7b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005c7e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a92b0 + *(int *)(&DAT_1806a92b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005cc60 name=FUN_18005cc60 */

void FUN_18005cc60(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005cc95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a92d0 + *(int *)(&DAT_1806a92d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005d110 name=FUN_18005d110 */

void FUN_18005d110(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005d145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a92f0 + *(int *)(&DAT_1806a92f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005d5c0 name=FUN_18005d5c0 */

void FUN_18005d5c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005d5f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9310 + *(int *)(&DAT_1806a9310 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005da70 name=FUN_18005da70 */

void FUN_18005da70(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005daa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9330 + *(int *)(&DAT_1806a9330 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005dee0 name=FUN_18005dee0 */

void FUN_18005dee0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005df16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9350 + *(int *)(&DAT_1806a9350 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005e350 name=FUN_18005e350 */

void FUN_18005e350(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005e385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9370 + *(int *)(&DAT_1806a9370 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005e800 name=FUN_18005e800 */

void FUN_18005e800(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005e835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9390 + *(int *)(&DAT_1806a9390 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005ecb0 name=FUN_18005ecb0 */

void FUN_18005ecb0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005ece5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a93b0 + *(int *)(&DAT_1806a93b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005f160 name=FUN_18005f160 */

void FUN_18005f160(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005f195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a93d0 + *(int *)(&DAT_1806a93d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005f610 name=FUN_18005f610 */

void FUN_18005f610(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005f645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a93f0 + *(int *)(&DAT_1806a93f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005fac0 name=FUN_18005fac0 */

void FUN_18005fac0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005faf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9410 + *(int *)(&DAT_1806a9410 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18005ff70 name=FUN_18005ff70 */

void FUN_18005ff70(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018005ffa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9430 + *(int *)(&DAT_1806a9430 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180060420 name=FUN_180060420 */

void FUN_180060420(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180060455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9450 + *(int *)(&DAT_1806a9450 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800608d0 name=FUN_1800608d0 */

void FUN_1800608d0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180060905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9470 + *(int *)(&DAT_1806a9470 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180060d80 name=FUN_180060d80 */

void FUN_180060d80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180060db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9490 + *(int *)(&DAT_1806a9490 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180061230 name=FUN_180061230 */

void FUN_180061230(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180061265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a94b0 + *(int *)(&DAT_1806a94b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800616e0 name=FUN_1800616e0 */

void FUN_1800616e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180061715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a94d0 + *(int *)(&DAT_1806a94d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180061b90 name=FUN_180061b90 */

void FUN_180061b90(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180061bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a94f0 + *(int *)(&DAT_1806a94f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180062040 name=FUN_180062040 */

void FUN_180062040(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180062075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9510 + *(int *)(&DAT_1806a9510 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800624f0 name=FUN_1800624f0 */

void FUN_1800624f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180062525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9530 + *(int *)(&DAT_1806a9530 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800629a0 name=FUN_1800629a0 */

void FUN_1800629a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800629d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9550 + *(int *)(&DAT_1806a9550 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180062e50 name=FUN_180062e50 */

void FUN_180062e50(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180062e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9570 + *(int *)(&DAT_1806a9570 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180063300 name=FUN_180063300 */

void FUN_180063300(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180063335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9590 + *(int *)(&DAT_1806a9590 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800637b0 name=FUN_1800637b0 */

void FUN_1800637b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800637e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a95b0 + *(int *)(&DAT_1806a95b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180063c60 name=FUN_180063c60 */

void FUN_180063c60(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180063c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a95d0 + *(int *)(&DAT_1806a95d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180064110 name=FUN_180064110 */

void FUN_180064110(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180064145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a95f0 + *(int *)(&DAT_1806a95f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800645c0 name=FUN_1800645c0 */

void FUN_1800645c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800645f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9610 + *(int *)(&DAT_1806a9610 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180064a70 name=FUN_180064a70 */

void FUN_180064a70(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180064aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9630 + *(int *)(&DAT_1806a9630 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180064f20 name=FUN_180064f20 */

void FUN_180064f20(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180064f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9650 + *(int *)(&DAT_1806a9650 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800653d0 name=FUN_1800653d0 */

void FUN_1800653d0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180065406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9670 + *(int *)(&DAT_1806a9670 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180065840 name=FUN_180065840 */

void FUN_180065840(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180065876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9690 + *(int *)(&DAT_1806a9690 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180065cb0 name=FUN_180065cb0 */

void FUN_180065cb0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180065ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a96b0 + *(int *)(&DAT_1806a96b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180066160 name=FUN_180066160 */

void FUN_180066160(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180066195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a96d0 + *(int *)(&DAT_1806a96d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180066610 name=FUN_180066610 */

void FUN_180066610(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180066645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a96f0 + *(int *)(&DAT_1806a96f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180066ac0 name=FUN_180066ac0 */

void FUN_180066ac0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180066af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9710 + *(int *)(&DAT_1806a9710 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180066f70 name=FUN_180066f70 */

void FUN_180066f70(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180066fa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9730 + *(int *)(&DAT_1806a9730 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180067420 name=FUN_180067420 */

void FUN_180067420(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180067455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9750 + *(int *)(&DAT_1806a9750 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800678d0 name=FUN_1800678d0 */

void FUN_1800678d0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180067905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9770 + *(int *)(&DAT_1806a9770 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180067d80 name=FUN_180067d80 */

void FUN_180067d80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180067db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9790 + *(int *)(&DAT_1806a9790 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180068230 name=FUN_180068230 */

void FUN_180068230(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_390 [204];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x360);
  if (cVar1 != '\0') {
    FUN_180691e40(local_390,param_1 + 0x30,0x330);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_390[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180068410 name=FUN_180068410 */

void FUN_180068410(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_380 [204];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_380[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b340();
    FUN_180691e40(local_38,local_380,0x330);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x360,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_1800079c0(param_1);
  }
  return;
}


/* address=1800686f0 name=FUN_1800686f0 */

void FUN_1800686f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180068725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a97b0 + *(int *)(&DAT_1806a97b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180068ba0 name=FUN_180068ba0 */

void FUN_180068ba0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_380 [204];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_380[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b340();
    FUN_180691e40(local_30,local_380,0x330);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x360);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x360,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800079c0(lVar1);
  }
  return;
}


/* address=180068ea0 name=FUN_180068ea0 */

void FUN_180068ea0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_380 [204];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_380[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b340();
    FUN_180691e40(local_38,local_380,0x330);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x360,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180007bd0(param_1);
  }
  return;
}


/* address=180069180 name=FUN_180069180 */

void FUN_180069180(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800691b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a97d0 + *(int *)(&DAT_1806a97d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180069630 name=FUN_180069630 */

void FUN_180069630(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_380 [204];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_380[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b340();
    FUN_180691e40(local_30,local_380,0x330);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x360);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x360,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180007bd0(lVar1);
  }
  return;
}


/* address=180069930 name=FUN_180069930 */

void FUN_180069930(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2c0 [152];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x290);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2c0,param_1 + 0x30,0x260);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2c0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180069b10 name=FUN_180069b10 */

void FUN_180069b10(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2b0 [152];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2b0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b420();
    FUN_180691e40(local_38,local_2b0,0x260);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x290,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180007de0(param_1);
  }
  return;
}


/* address=180069df0 name=FUN_180069df0 */

void FUN_180069df0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180069e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a97f0 + *(int *)(&DAT_1806a97f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006a2a0 name=FUN_18006a2a0 */

void FUN_18006a2a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2b0 [152];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2b0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b420();
    FUN_180691e40(local_30,local_2b0,0x260);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x290);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x290,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180007de0(lVar1);
  }
  return;
}


/* address=18006a5a0 name=FUN_18006a5a0 */

void FUN_18006a5a0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2b0 [152];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2b0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b420();
    FUN_180691e40(local_38,local_2b0,0x260);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x290,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180007ff0(param_1);
  }
  return;
}


/* address=18006a880 name=FUN_18006a880 */

void FUN_18006a880(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006a8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9810 + *(int *)(&DAT_1806a9810 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006ad30 name=FUN_18006ad30 */

void FUN_18006ad30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2b0 [152];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2b0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b420();
    FUN_180691e40(local_30,local_2b0,0x260);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x290);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x290,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180007ff0(lVar1);
  }
  return;
}


/* address=18006b030 name=FUN_18006b030 */

void FUN_18006b030(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006b065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9830 + *(int *)(&DAT_1806a9830 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006b4e0 name=FUN_18006b4e0 */

void FUN_18006b4e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006b515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9850 + *(int *)(&DAT_1806a9850 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006b990 name=FUN_18006b990 */

void FUN_18006b990(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006b9c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9870 + *(int *)(&DAT_1806a9870 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006be40 name=FUN_18006be40 */

void FUN_18006be40(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006be75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9890 + *(int *)(&DAT_1806a9890 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006c2f0 name=FUN_18006c2f0 */

void FUN_18006c2f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006c325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a98b0 + *(int *)(&DAT_1806a98b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006c7a0 name=FUN_18006c7a0 */

void FUN_18006c7a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006c7d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a98d0 + *(int *)(&DAT_1806a98d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006cc50 name=FUN_18006cc50 */

void FUN_18006cc50(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006cc85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a98f0 + *(int *)(&DAT_1806a98f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006d100 name=FUN_18006d100 */

void FUN_18006d100(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006d135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9910 + *(int *)(&DAT_1806a9910 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006d5b0 name=FUN_18006d5b0 */

void FUN_18006d5b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006d5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9930 + *(int *)(&DAT_1806a9930 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006da60 name=FUN_18006da60 */

void FUN_18006da60(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006da95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9950 + *(int *)(&DAT_1806a9950 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006df10 name=FUN_18006df10 */

void FUN_18006df10(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006df45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9970 + *(int *)(&DAT_1806a9970 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006e3c0 name=FUN_18006e3c0 */

void FUN_18006e3c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006e3f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9990 + *(int *)(&DAT_1806a9990 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006e870 name=FUN_18006e870 */

void FUN_18006e870(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006e8a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a99b0 + *(int *)(&DAT_1806a99b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006ed20 name=FUN_18006ed20 */

void FUN_18006ed20(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006ed55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a99d0 + *(int *)(&DAT_1806a99d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006f1d0 name=FUN_18006f1d0 */

void FUN_18006f1d0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006f205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a99f0 + *(int *)(&DAT_1806a99f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006f680 name=FUN_18006f680 */

void FUN_18006f680(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006f6b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9a10 + *(int *)(&DAT_1806a9a10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006fb30 name=FUN_18006fb30 */

void FUN_18006fb30(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018006fb65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9a30 + *(int *)(&DAT_1806a9a30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18006ffe0 name=FUN_18006ffe0 */

void FUN_18006ffe0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180070015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9a50 + *(int *)(&DAT_1806a9a50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180070490 name=FUN_180070490 */

void FUN_180070490(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800704c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9a70 + *(int *)(&DAT_1806a9a70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180070940 name=FUN_180070940 */

void FUN_180070940(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180070975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9a90 + *(int *)(&DAT_1806a9a90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180070df0 name=FUN_180070df0 */

void FUN_180070df0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180070e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9ab0 + *(int *)(&DAT_1806a9ab0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800712a0 name=FUN_1800712a0 */

void FUN_1800712a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800712d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9ad0 + *(int *)(&DAT_1806a9ad0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180071750 name=FUN_180071750 */

void FUN_180071750(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180071785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9af0 + *(int *)(&DAT_1806a9af0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180071c00 name=FUN_180071c00 */

void FUN_180071c00(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180071c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9b10 + *(int *)(&DAT_1806a9b10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800720b0 name=FUN_1800720b0 */

void FUN_1800720b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800720e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9b30 + *(int *)(&DAT_1806a9b30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180072560 name=FUN_180072560 */

void FUN_180072560(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180072595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9b50 + *(int *)(&DAT_1806a9b50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180072a10 name=FUN_180072a10 */

void FUN_180072a10(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180072a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9b70 + *(int *)(&DAT_1806a9b70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180072ec0 name=FUN_180072ec0 */

void FUN_180072ec0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180072ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9b90 + *(int *)(&DAT_1806a9b90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180073370 name=FUN_180073370 */

void FUN_180073370(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_400 [232];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x3d0);
  if (cVar1 != '\0') {
    FUN_180691e40(local_400,param_1 + 0x30,0x3a0);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_400[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180073550 name=FUN_180073550 */

void FUN_180073550(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_3f0 [232];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_3f0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b570();
    FUN_180691e40(local_38,local_3f0,0x3a0);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x3d0,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180008200(param_1);
  }
  return;
}


/* address=180073830 name=FUN_180073830 */

void FUN_180073830(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180073865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9bb0 + *(int *)(&DAT_1806a9bb0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180073ce0 name=FUN_180073ce0 */

void FUN_180073ce0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_3f0 [232];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_3f0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b570();
    FUN_180691e40(local_30,local_3f0,0x3a0);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x3d0);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x3d0,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180008200(lVar1);
  }
  return;
}


/* address=180073fe0 name=FUN_180073fe0 */

void FUN_180073fe0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_3f0 [232];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_3f0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b570();
    FUN_180691e40(local_38,local_3f0,0x3a0);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x3d0,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180008410(param_1);
  }
  return;
}


/* address=1800742c0 name=FUN_1800742c0 */

void FUN_1800742c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800742f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9bd0 + *(int *)(&DAT_1806a9bd0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180074770 name=FUN_180074770 */

void FUN_180074770(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_3f0 [232];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_3f0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b570();
    FUN_180691e40(local_30,local_3f0,0x3a0);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x3d0);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x3d0,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180008410(lVar1);
  }
  return;
}


/* address=180074a70 name=FUN_180074a70 */

void FUN_180074a70(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180074aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9bf0 + *(int *)(&DAT_1806a9bf0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180074f20 name=FUN_180074f20 */

void FUN_180074f20(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180074f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9c10 + *(int *)(&DAT_1806a9c10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800753d0 name=FUN_1800753d0 */

void FUN_1800753d0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180075405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9c30 + *(int *)(&DAT_1806a9c30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180075880 name=FUN_180075880 */

void FUN_180075880(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800758b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9c50 + *(int *)(&DAT_1806a9c50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180075d30 name=FUN_180075d30 */

void FUN_180075d30(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_318 [174];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x2e8);
  if (cVar1 != '\0') {
    FUN_180691e40(local_318,param_1 + 0x30,0x2b8);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_318[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180075f10 name=FUN_180075f10 */

void FUN_180075f10(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_308 [174];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_308[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b6f0();
    FUN_180691e40(local_38,local_308,0x2b8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2e8,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180008620(param_1);
  }
  return;
}


/* address=1800761f0 name=FUN_1800761f0 */

void FUN_1800761f0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180076225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9c70 + *(int *)(&DAT_1806a9c70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800766a0 name=FUN_1800766a0 */

void FUN_1800766a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_308 [174];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_308[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b6f0();
    FUN_180691e40(local_30,local_308,0x2b8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2e8);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2e8,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180008620(lVar1);
  }
  return;
}


/* address=1800769a0 name=FUN_1800769a0 */

void FUN_1800769a0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_308 [174];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_308[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b6f0();
    FUN_180691e40(local_38,local_308,0x2b8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2e8,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180008830(param_1);
  }
  return;
}


/* address=180076c80 name=FUN_180076c80 */

void FUN_180076c80(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180076cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9c90 + *(int *)(&DAT_1806a9c90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180077130 name=FUN_180077130 */

void FUN_180077130(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_308 [174];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_308[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b6f0();
    FUN_180691e40(local_30,local_308,0x2b8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2e8);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2e8,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180008830(lVar1);
  }
  return;
}


/* address=180077430 name=FUN_180077430 */

void FUN_180077430(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180077465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9cb0 + *(int *)(&DAT_1806a9cb0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800778e0 name=FUN_1800778e0 */

void FUN_1800778e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180077915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9cd0 + *(int *)(&DAT_1806a9cd0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180077d90 name=FUN_180077d90 */

void FUN_180077d90(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180077dc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9cf0 + *(int *)(&DAT_1806a9cf0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180078240 name=FUN_180078240 */

void FUN_180078240(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180078275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9d10 + *(int *)(&DAT_1806a9d10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800786f0 name=FUN_1800786f0 */

void FUN_1800786f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2b0 [148];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x280);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2b0,param_1 + 0x30,0x250);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2b0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=1800788d0 name=FUN_1800788d0 */

void FUN_1800788d0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b7d0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180008a40(param_1);
  }
  return;
}


/* address=180078bb0 name=FUN_180078bb0 */

void FUN_180078bb0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180078be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9d30 + *(int *)(&DAT_1806a9d30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180079060 name=FUN_180079060 */

void FUN_180079060(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b7d0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180008a40(lVar1);
  }
  return;
}


/* address=180079360 name=FUN_180079360 */

void FUN_180079360(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b7d0();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180008c50(param_1);
  }
  return;
}


/* address=180079640 name=FUN_180079640 */

void FUN_180079640(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180079675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9d50 + *(int *)(&DAT_1806a9d50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180079af0 name=FUN_180079af0 */

void FUN_180079af0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b7d0();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180008c50(lVar1);
  }
  return;
}


/* address=180079df0 name=FUN_180079df0 */

void FUN_180079df0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180079e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9d70 + *(int *)(&DAT_1806a9d70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007a2a0 name=FUN_18007a2a0 */

void FUN_18007a2a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007a2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9d90 + *(int *)(&DAT_1806a9d90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007a750 name=FUN_18007a750 */

void FUN_18007a750(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007a785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9db0 + *(int *)(&DAT_1806a9db0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007ac00 name=FUN_18007ac00 */

void FUN_18007ac00(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007ac35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9dd0 + *(int *)(&DAT_1806a9dd0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007b0b0 name=FUN_18007b0b0 */

void FUN_18007b0b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007b0e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9df0 + *(int *)(&DAT_1806a9df0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007b560 name=FUN_18007b560 */

void FUN_18007b560(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007b595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9e10 + *(int *)(&DAT_1806a9e10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007ba10 name=FUN_18007ba10 */

void FUN_18007ba10(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_328 [178];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x2f8);
  if (cVar1 != '\0') {
    FUN_180691e40(local_328,param_1 + 0x30,0x2c8);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_328[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=18007bbf0 name=FUN_18007bbf0 */

void FUN_18007bbf0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_318 [178];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_318[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b920();
    FUN_180691e40(local_38,local_318,0x2c8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2f8,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180008e60(param_1);
  }
  return;
}


/* address=18007bed0 name=FUN_18007bed0 */

void FUN_18007bed0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007bf05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9e30 + *(int *)(&DAT_1806a9e30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007c380 name=FUN_18007c380 */

void FUN_18007c380(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_318 [178];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_318[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b920();
    FUN_180691e40(local_30,local_318,0x2c8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2f8);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2f8,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180008e60(lVar1);
  }
  return;
}


/* address=18007c680 name=FUN_18007c680 */

void FUN_18007c680(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_318 [178];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_318[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009b920();
    FUN_180691e40(local_38,local_318,0x2c8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x2f8,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180009070(param_1);
  }
  return;
}


/* address=18007c960 name=FUN_18007c960 */

void FUN_18007c960(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007c995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9e50 + *(int *)(&DAT_1806a9e50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007ce10 name=FUN_18007ce10 */

void FUN_18007ce10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_318 [178];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_318[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009b920();
    FUN_180691e40(local_30,local_318,0x2c8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x2f8);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x2f8,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180009070(lVar1);
  }
  return;
}


/* address=18007d110 name=FUN_18007d110 */

void FUN_18007d110(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007d145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9e70 + *(int *)(&DAT_1806a9e70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007d5c0 name=FUN_18007d5c0 */

void FUN_18007d5c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007d5f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9e90 + *(int *)(&DAT_1806a9e90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007da70 name=FUN_18007da70 */

void FUN_18007da70(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007daa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9eb0 + *(int *)(&DAT_1806a9eb0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007df20 name=FUN_18007df20 */

void FUN_18007df20(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007df55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9ed0 + *(int *)(&DAT_1806a9ed0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007e3d0 name=FUN_18007e3d0 */

void FUN_18007e3d0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007e405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9ef0 + *(int *)(&DAT_1806a9ef0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007e880 name=FUN_18007e880 */

void FUN_18007e880(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007e8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9f10 + *(int *)(&DAT_1806a9f10 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007ed30 name=FUN_18007ed30 */

void FUN_18007ed30(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007ed65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9f30 + *(int *)(&DAT_1806a9f30 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007f1e0 name=FUN_18007f1e0 */

void FUN_18007f1e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007f215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9f50 + *(int *)(&DAT_1806a9f50 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007f690 name=FUN_18007f690 */

void FUN_18007f690(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007f6c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9f70 + *(int *)(&DAT_1806a9f70 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007fb40 name=FUN_18007fb40 */

void FUN_18007fb40(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018007fb75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9f90 + *(int *)(&DAT_1806a9f90 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18007fff0 name=FUN_18007fff0 */

void FUN_18007fff0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_2b0 [148];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x280);
  if (cVar1 != '\0') {
    FUN_180691e40(local_2b0,param_1 + 0x30,0x250);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_2b0[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=1800801d0 name=FUN_1800801d0 */

void FUN_1800801d0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009ba70();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180009280(param_1);
  }
  return;
}


/* address=1800804b0 name=FUN_1800804b0 */

void FUN_1800804b0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800804e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9fb0 + *(int *)(&DAT_1806a9fb0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180080960 name=FUN_180080960 */

void FUN_180080960(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009ba70();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180009280(lVar1);
  }
  return;
}


/* address=180080c60 name=FUN_180080c60 */

void FUN_180080c60(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_2a0 [148];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_2a0[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009ba70();
    FUN_180691e40(local_38,local_2a0,0x250);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x280,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180009490(param_1);
  }
  return;
}


/* address=180080f40 name=FUN_180080f40 */

void FUN_180080f40(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180080f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9fd0 + *(int *)(&DAT_1806a9fd0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800813f0 name=FUN_1800813f0 */

void FUN_1800813f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_2a0 [148];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_2a0[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009ba70();
    FUN_180691e40(local_30,local_2a0,0x250);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x280);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x280,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180009490(lVar1);
  }
  return;
}


/* address=1800816f0 name=FUN_1800816f0 */

void FUN_1800816f0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code **ppcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  
  cVar9 = FUN_1803c8700(param_1,param_1 + 0x80);
  if (cVar9 != '\0') {
    iVar4 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (iVar4 != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098,*(undefined4 *)(param_1 + 0x60),iVar4,
                    *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),
                    *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),
                    *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),
                    *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),
                    *(undefined4 *)(param_1 + 0x78));
      do {
        invalidInstructionException();
      } while( true );
    }
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    uVar6 = *(undefined4 *)(param_1 + 0x3c);
    uVar7 = *(undefined4 *)(param_1 + 0x40);
    uVar8 = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (lVar2 = param_2[2], lVar2 != 0)) {
      ppcVar3 = (code **)param_2[3];
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
    *(undefined4 *)(param_2 + 2) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar8;
    param_2[3] = uVar1;
  }
  return;
}


/* address=1800818a0 name=FUN_1800818a0 */

void FUN_1800818a0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_90 [20];
  longlong local_40;
  byte local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = param_1;
  bVar2 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_90[0] = 2;
    local_21 = bVar2;
    FUN_1800cfb10(local_40 + 0x20,local_90);
    bVar2 = local_21;
  }
  if ((bVar2 & 1) != 0) {
    FUN_1803ba1e0(local_40 + 0x80,0);
  }
  lVar1 = local_40;
  cVar3 = FUN_1803aae90(local_40);
  if (cVar3 != '\0') {
    FUN_1800096a0(lVar1);
  }
  return;
}


/* address=180081a60 name=FUN_180081a60 */

void FUN_180081a60(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180081a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806a9ff0 + *(int *)(&DAT_1806a9ff0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180081eb0 name=FUN_180081eb0 */

void FUN_180081eb0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_90 [20];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_90[0] = 2;
    FUN_1800cfb10(param_1 + 0x20,local_90);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x80);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x80,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_1800096a0(lVar1);
  }
  return;
}


/* address=180082090 name=FUN_180082090 */

void FUN_180082090(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_90 [20];
  longlong local_40;
  byte local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = param_1;
  bVar2 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_90[0] = 2;
    local_21 = bVar2;
    FUN_1800cfb10(local_40 + 0x20,local_90);
    bVar2 = local_21;
  }
  if ((bVar2 & 1) != 0) {
    FUN_1803ba1e0(local_40 + 0x80,0);
  }
  lVar1 = local_40;
  cVar3 = FUN_1803aae90(local_40);
  if (cVar3 != '\0') {
    FUN_180009890(lVar1);
  }
  return;
}


/* address=180082250 name=FUN_180082250 */

void FUN_180082250(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180082286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa010 + *(int *)(&DAT_1806aa010 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800826a0 name=FUN_1800826a0 */

void FUN_1800826a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_90 [20];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_90[0] = 2;
    FUN_1800cfb10(param_1 + 0x20,local_90);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x80);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x80,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180009890(lVar1);
  }
  return;
}


/* address=180082880 name=FUN_180082880 */

void FUN_180082880(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800828b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa030 + *(int *)(&DAT_1806aa030 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180082d30 name=FUN_180082d30 */

void FUN_180082d30(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180082d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa050 + *(int *)(&DAT_1806aa050 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800831e0 name=FUN_1800831e0 */

void FUN_1800831e0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_368 [194];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x338);
  if (cVar1 != '\0') {
    FUN_180691e40(local_368,param_1 + 0x30,0x308);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_368[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=1800833c0 name=FUN_1800833c0 */

void FUN_1800833c0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_358 [194];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_358[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009bbc0();
    FUN_180691e40(local_38,local_358,0x308);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x338,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180009a80(param_1);
  }
  return;
}


/* address=1800836a0 name=FUN_1800836a0 */

void FUN_1800836a0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800836d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa070 + *(int *)(&DAT_1806aa070 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180083b50 name=FUN_180083b50 */

void FUN_180083b50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_358 [194];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_358[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009bbc0();
    FUN_180691e40(local_30,local_358,0x308);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x338);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x338,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180009a80(lVar1);
  }
  return;
}


/* address=180083e50 name=FUN_180083e50 */

void FUN_180083e50(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_358 [194];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_358[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009bbc0();
    FUN_180691e40(local_38,local_358,0x308);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x338,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_180009c90(param_1);
  }
  return;
}


/* address=180084130 name=FUN_180084130 */

void FUN_180084130(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180084165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa090 + *(int *)(&DAT_1806aa090 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800845e0 name=FUN_1800845e0 */

void FUN_1800845e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_358 [194];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_358[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009bbc0();
    FUN_180691e40(local_30,local_358,0x308);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x338);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x338,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180009c90(lVar1);
  }
  return;
}


/* address=1800848e0 name=FUN_1800848e0 */

void FUN_1800848e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180084916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa0b0 + *(int *)(&DAT_1806aa0b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180084d30 name=FUN_180084d30 */

void FUN_180084d30(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180084d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa0d0 + *(int *)(&DAT_1806aa0d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180085180 name=FUN_180085180 */

void FUN_180085180(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_398 [206];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x368);
  if (cVar1 != '\0') {
    FUN_180691e40(local_398,param_1 + 0x30,0x338);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_398[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180085360 name=FUN_180085360 */

void FUN_180085360(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_378 [206];
  longlong local_40;
  byte local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = param_1;
  bVar2 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_378[0] = 2;
    local_21 = bVar2;
    FUN_1800d00d0(local_40 + 0x20,local_378);
    bVar2 = local_21;
  }
  if ((bVar2 & 1) != 0) {
    FUN_1803ba1e0(local_40 + 0x368,0);
  }
  lVar1 = local_40;
  cVar3 = FUN_1803aae90(local_40);
  if (cVar3 != '\0') {
    FUN_180009ea0(lVar1);
  }
  return;
}


/* address=180085570 name=FUN_180085570 */

void FUN_180085570(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800855a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa0f0 + *(int *)(&DAT_1806aa0f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=1800859e0 name=FUN_1800859e0 */

void FUN_1800859e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_378 [206];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_378[0] = 2;
    FUN_1800d00d0(param_1 + 0x20,local_378);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x368);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x368,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_180009ea0(lVar1);
  }
  return;
}


/* address=180085c10 name=FUN_180085c10 */

void FUN_180085c10(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_378 [206];
  longlong local_40;
  byte local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = param_1;
  bVar2 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_378[0] = 2;
    local_21 = bVar2;
    FUN_1800d00d0(local_40 + 0x20,local_378);
    bVar2 = local_21;
  }
  if ((bVar2 & 1) != 0) {
    FUN_1803ba1e0(local_40 + 0x368,0);
  }
  lVar1 = local_40;
  cVar3 = FUN_1803aae90(local_40);
  if (cVar3 != '\0') {
    FUN_18000a0b0(lVar1);
  }
  return;
}


/* address=180085e20 name=FUN_180085e20 */

void FUN_180085e20(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180085e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa110 + *(int *)(&DAT_1806aa110 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180086290 name=FUN_180086290 */

void FUN_180086290(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_378 [206];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_378[0] = 2;
    FUN_1800d00d0(param_1 + 0x20,local_378);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x368);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x368,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000a0b0(lVar1);
  }
  return;
}


/* address=1800864c0 name=FUN_1800864c0 */

void FUN_1800864c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800864f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa130 + *(int *)(&DAT_1806aa130 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180086970 name=FUN_180086970 */

void FUN_180086970(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800869a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa150 + *(int *)(&DAT_1806aa150 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180086e20 name=FUN_180086e20 */

void FUN_180086e20(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_358 [190];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x328);
  if (cVar1 != '\0') {
    FUN_180691e40(local_358,param_1 + 0x30,0x2f8);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_358[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180087000 name=FUN_180087000 */

void FUN_180087000(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_348 [190];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_348[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009bdc0();
    FUN_180691e40(local_38,local_348,0x2f8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x328,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_18000a2c0(param_1);
  }
  return;
}


/* address=1800872e0 name=FUN_1800872e0 */

void FUN_1800872e0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180087315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa170 + *(int *)(&DAT_1806aa170 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180087790 name=FUN_180087790 */

void FUN_180087790(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_348 [190];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_348[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009bdc0();
    FUN_180691e40(local_30,local_348,0x2f8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x328);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x328,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c27c0(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000a2c0(lVar1);
  }
  return;
}


/* address=180087a90 name=FUN_180087a90 */

void FUN_180087a90(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_348 [190];
  undefined8 local_50;
  longlong local_48;
  longlong local_38;
  undefined local_2a;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_348[0] = 2;
    local_2a = 1;
    local_48 = param_1;
    local_29 = bVar1;
    local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_38 = local_48 + 0x30;
    FUN_18009bdc0();
    FUN_180691e40(local_38,local_348,0x2f8);
    local_2a = 0;
    FUN_1803ba480(&local_50);
    param_1 = local_48;
    bVar1 = local_29;
  }
  if ((bVar1 & 1) != 0) {
    FUN_1803ba1e0(param_1 + 0x328,0);
  }
  cVar2 = FUN_1803aae90(param_1);
  if (cVar2 != '\0') {
    FUN_18000a4d0(param_1);
  }
  return;
}


/* address=180087d70 name=FUN_180087d70 */

void FUN_180087d70(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180087da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa190 + *(int *)(&DAT_1806aa190 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180088220 name=FUN_180088220 */

void FUN_180088220(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_348 [190];
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_40 = param_1;
  if ((uVar3 & 8) == 0) {
    local_348[0] = 2;
    local_21 = 1;
    local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x28));
    local_30 = local_40 + 0x30;
    FUN_18009bdc0();
    FUN_180691e40(local_30,local_348,0x2f8);
    local_21 = 0;
    FUN_1803ba480(&local_48);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x328);
    uVar3 = FUN_1803aad00(local_40);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x328,0);
    }
  }
  lVar1 = local_40;
  local_50 = local_40;
  lVar4 = FUN_1803c2830(local_40 + 0x20,&local_50);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000a4d0(lVar1);
  }
  return;
}


/* address=180088520 name=FUN_180088520 */

void FUN_180088520(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180088556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa1b0 + *(int *)(&DAT_1806aa1b0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180088970 name=FUN_180088970 */

void FUN_180088970(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800889a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa1d0 + *(int *)(&DAT_1806aa1d0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180088dc0 name=FUN_180088dc0 */

void FUN_180088dc0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180088df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa1f0 + *(int *)(&DAT_1806aa1f0 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180089270 name=FUN_180089270 */

void FUN_180089270(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x0001800892a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa210 + *(int *)(&DAT_1806aa210 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180089720 name=FUN_180089720 */

void FUN_180089720(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int local_168 [66];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  code **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  cVar1 = FUN_1803c8700(param_1,param_1 + 0x138);
  if (cVar1 != '\0') {
    FUN_180691e40(local_168,param_1 + 0x30,0x108);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (local_168[0] != 1) {
      FUN_1806a19f0("JoinHandle polled after completionC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_1806a8098);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_48 = *(undefined8 *)(param_1 + 0x48);
    local_58 = *(undefined4 *)(param_1 + 0x38);
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    if (((*(char *)param_2 == '\0') && (param_2[1] != 0)) && (local_38 = param_2[2], local_38 != 0))
    {
      local_28 = (code **)param_2[3];
      local_30 = param_2;
      if (*local_28 != (code *)0x0) {
        local_60 = param_2 + 1;
        (**local_28)(local_38);
      }
      param_2 = local_30;
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_38,local_28[1],local_28[2]);
      }
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_54;
    *(undefined4 *)(param_2 + 2) = uStack_50;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_4c;
    param_2[3] = local_48;
  }
  return;
}


/* address=180089900 name=FUN_180089900 */

void FUN_180089900(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_148 [66];
  longlong local_40;
  byte local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = param_1;
  bVar2 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_148[0] = 2;
    local_21 = bVar2;
    FUN_1800d0880(local_40 + 0x20,local_148);
    bVar2 = local_21;
  }
  if ((bVar2 & 1) != 0) {
    FUN_1803ba1e0(local_40 + 0x138,0);
  }
  lVar1 = local_40;
  cVar3 = FUN_1803aae90(local_40);
  if (cVar3 != '\0') {
    FUN_18000a6e0(lVar1);
  }
  return;
}


/* address=180089b10 name=FUN_180089b10 */

void FUN_180089b10(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x000180089b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa230 + *(int *)(&DAT_1806aa230 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=180089f80 name=FUN_180089f80 */

void FUN_180089f80(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_148 [66];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_148[0] = 2;
    FUN_1800d0880(param_1 + 0x20,local_148);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x138);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x138,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000a6e0(lVar1);
  }
  return;
}


/* address=18008a1b0 name=FUN_18008a1b0 */

void FUN_18008a1b0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_148 [66];
  longlong local_40;
  byte local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = param_1;
  bVar2 = FUN_1803aae30();
  if ((param_2 & 1) != 0) {
    local_148[0] = 2;
    local_21 = bVar2;
    FUN_1800d0880(local_40 + 0x20,local_148);
    bVar2 = local_21;
  }
  if ((bVar2 & 1) != 0) {
    FUN_1803ba1e0(local_40 + 0x138,0);
  }
  lVar1 = local_40;
  cVar3 = FUN_1803aae90(local_40);
  if (cVar3 != '\0') {
    FUN_18000a8f0(lVar1);
  }
  return;
}


/* address=18008a3c0 name=FUN_18008a3c0 */

void FUN_18008a3c0(void)

{
  byte bVar1;
  
  bVar1 = FUN_1803aab50();
                    /* WARNING: Could not recover jumptable at 0x00018008a3f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806aa250 + *(int *)(&DAT_1806aa250 + (ulonglong)bVar1 * 4)))();
  return;
}


/* address=18008a830 name=FUN_18008a830 */

void FUN_18008a830(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_148 [66];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_148[0] = 2;
    FUN_1800d0880(param_1 + 0x20,local_148);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x138);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x138,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000a8f0(lVar1);
  }
  return;
}


/* address=18008b250 name=FUN_18008b250 */

void FUN_18008b250(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_c0 [32];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_c0[0] = 2;
    FUN_1800d0a40(param_1 + 0x20,local_c0);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0xb0);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0xb0,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000ab00(lVar1);
  }
  return;
}


/* address=18008ba50 name=FUN_18008ba50 */

void FUN_18008ba50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_c0 [32];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_c0[0] = 2;
    FUN_1800d0a40(param_1 + 0x20,local_c0);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0xb0);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0xb0,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000ad10(lVar1);
  }
  return;
}


/* address=18008c420 name=FUN_18008c420 */

void FUN_18008c420(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_c0 [32];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_c0[0] = 2;
    FUN_1800d0c10(param_1 + 0x20,local_c0);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0xb0);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0xb0,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000af20(lVar1);
  }
  return;
}


/* address=18008cc20 name=FUN_18008cc20 */

void FUN_18008cc20(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_c0 [32];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_c0[0] = 2;
    FUN_1800d0c10(param_1 + 0x20,local_c0);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0xb0);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0xb0,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000b130(lVar1);
  }
  return;
}


/* address=18008d5c0 name=FUN_18008d5c0 */

void FUN_18008d5c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_c8 [34];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_c8[0] = 2;
    FUN_1800d0de0(param_1 + 0x20,local_c8);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0xb8);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0xb8,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000b340(lVar1);
  }
  return;
}


/* address=18008ddc0 name=FUN_18008ddc0 */

void FUN_18008ddc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_c8 [34];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_c8[0] = 2;
    FUN_1800d0de0(param_1 + 0x20,local_c8);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0xb8);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0xb8,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000b550(lVar1);
  }
  return;
}


/* address=18008e800 name=FUN_18008e800 */

void FUN_18008e800(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_148 [66];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_148[0] = 2;
    FUN_1800d0f50(param_1 + 0x20,local_148);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x138);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x138,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000b760(lVar1);
  }
  return;
}


/* address=18008f0b0 name=FUN_18008f0b0 */

void FUN_18008f0b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_148 [66];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_148[0] = 2;
    FUN_1800d0f50(param_1 + 0x20,local_148);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x138);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x138,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000b970(lVar1);
  }
  return;
}


/* address=18008f7c0 name=FUN_18008f7c0 */

void FUN_18008f7c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_80 [16];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_80[0] = 2;
    FUN_1800d11c0(param_1 + 0x20,local_80);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x70);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x70,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000bb80(lVar1);
  }
  return;
}


/* address=18008fe80 name=FUN_18008fe80 */

void FUN_18008fe80(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_80 [16];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_80[0] = 2;
    FUN_1800d11c0(param_1 + 0x20,local_80);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x70);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x70,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000bd10(lVar1);
  }
  return;
}


/* address=180090620 name=FUN_180090620 */

void FUN_180090620(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_160 [72];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_160[0] = 2;
    FUN_1800d13f0(param_1 + 0x20,local_160);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x150);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x150,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000bea0(lVar1);
  }
  return;
}


/* address=180090e10 name=FUN_180090e10 */

void FUN_180090e10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_160 [72];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_160[0] = 2;
    FUN_1800d13f0(param_1 + 0x20,local_160);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 0x150);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 0x150,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000c030(lVar1);
  }
  return;
}


/* address=180091590 name=FUN_180091590 */

void FUN_180091590(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_d8 [38];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_d8[0] = 2;
    FUN_1800d15f0(param_1 + 0x20,local_d8);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 200);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 200,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c27c0(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000c1c0(lVar1);
  }
  return;
}


/* address=180091cc0 name=FUN_180091cc0 */

void FUN_180091cc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_d8 [38];
  longlong local_40;
  longlong local_38;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = FUN_1803aabe0();
  local_38 = param_1;
  if ((uVar3 & 8) == 0) {
    local_d8[0] = 2;
    FUN_1800d15f0(param_1 + 0x20,local_d8);
  }
  else if ((uVar3 & 0x10) != 0) {
    FUN_1803ba260(param_1 + 200);
    uVar3 = FUN_1803aad00(local_38);
    if ((uVar3 & 8) == 0) {
      FUN_1803ba1e0(param_1 + 200,0);
    }
  }
  lVar1 = local_38;
  local_40 = local_38;
  lVar4 = FUN_1803c2830(local_38 + 0x20,&local_40);
  cVar2 = FUN_1803aac90(lVar1,2 - (ulonglong)(lVar4 == 0));
  if (cVar2 != '\0') {
    FUN_18000c350(lVar1);
  }
  return;
}


/* address=180091ea0 name=FUN_180091ea0 */

void FUN_180091ea0(ulonglong param_1)

{
  longlong local_8;
  
  if (param_1 != 0) {
    if ((1 < ((uint)param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
      local_8 = param_1 - 1;
      FUN_180404230(&local_8);
    }
  }
  return;
}


/* address=180091ee0 name=FUN_180091ee0 */

void FUN_180091ee0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  local_38 = 0;
  lVar3 = lVar1;
  while (lVar2 != local_38) {
    local_38 = local_38 + 1;
    FUN_18039d760(lVar3);
    lVar3 = lVar3 + 0x30;
  }
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(lVar1,*param_1 * 0x30,8);
    return;
  }
  return;
}


/* address=180092020 name=FUN_180092020 */

void FUN_180092020(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18023a420(param_1 + 0x10);
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180239d70(param_1 + 0x18);
    return;
  }
  return;
}


/* address=1800920b0 name=FUN_1800920b0 */

void FUN_1800920b0(longlong *param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong local_48;
  
  lVar1 = *param_1;
  if (lVar1 != -2) {
    if (lVar1 == -1) {
      uVar3 = param_1[1];
      if ((1 < ((uint)uVar3 & 3) - 2) && ((uVar3 & 3) != 0)) {
        local_48 = uVar3 - 1;
        FUN_180404230(&local_48);
      }
    }
    else {
      puVar2 = (ulonglong *)param_1[1];
      puVar7 = puVar2;
      for (lVar5 = param_1[2]; lVar5 != 0; lVar5 = lVar5 + -1) {
        uVar3 = *puVar7;
        uVar4 = uVar3 ^ 0x8000000000000000;
        if (-1 < (longlong)uVar3) {
          uVar4 = 9;
        }
        lVar6 = 8;
        if (0x10 < uVar4) goto LAB_18009218d;
        if ((0xec7fUL >> (uVar4 & 0x3f) & 1) == 0) {
          if (uVar4 == 9) {
            if (uVar3 != 0) {
              thunk_FUN_1803e4c80(puVar7[1],uVar3,1);
            }
            lVar6 = 0x30;
            if (puVar7[3] != 0) {
              thunk_FUN_1803e4c80(puVar7[4],puVar7[3],1);
            }
LAB_18009218d:
            uVar3 = *(ulonglong *)((longlong)puVar7 + lVar6);
          }
          else {
            if (uVar4 != 0x10) goto LAB_18009218d;
            uVar3 = puVar7[1];
            if (uVar3 == 0xffffffffffffffff) goto LAB_180092110;
          }
          if (uVar3 != 0) {
            thunk_FUN_1803e4c80(*(undefined8 *)(lVar6 + 8 + (longlong)puVar7),uVar3,1);
          }
        }
LAB_180092110:
        puVar7 = puVar7 + 9;
      }
      if (lVar1 != 0) {
        thunk_FUN_1803e4c80(puVar2,lVar1 * 0x48,8);
        return;
      }
    }
  }
  return;
}


/* address=180092220 name=FUN_180092220 */

void FUN_180092220(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong local_8;
  
  lVar1 = *param_1;
  if (lVar1 != -2) {
    if (lVar1 == -1) {
      uVar2 = param_1[1];
      if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
        local_8 = uVar2 - 1;
        FUN_180404230(&local_8);
        return;
      }
    }
    else if (lVar1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],lVar1,1);
      return;
    }
  }
  return;
}


/* address=180092290 name=FUN_180092290 */

void FUN_180092290(longlong param_1,ulonglong param_2)

{
  longlong local_8;
  
  if (((param_2 != 0 && param_1 == 0) && (1 < ((uint)param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    local_8 = param_2 - 1;
    FUN_180404230(&local_8);
  }
  return;
}


/* address=1800922e0 name=FUN_1800922e0 */

void FUN_1800922e0(char **param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = *param_1;
  if ((*(char *)(param_1 + 1) == '\0') &&
     ((*(ulonglong *)PTR_DAT_18093b330 & 0x7fffffffffffffff) != 0)) {
    cVar2 = FUN_1806a1250();
    if (cVar2 == '\0') {
      pcVar1[1] = '\x01';
    }
  }
  LOCK();
  cVar2 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar2 != '\x02') {
    return;
  }
  WakeByAddressSingle(pcVar1);
  return;
}


/* address=180092330 name=FUN_180092330 */

void FUN_180092330(longlong **param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = *param_1;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1803ac490(plVar2 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar2[4] + 0x10))(plVar2[5]);
      plVar2 = *param_1;
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      lVar1 = *plVar2;
      UNLOCK();
    }
    else {
      LOCK();
      *plVar2 = *plVar2 + -1;
      lVar1 = *plVar2;
      UNLOCK();
    }
    if (lVar1 == 0) {
      FUN_1803788b0(param_1);
      return;
    }
  }
  return;
}


/* address=1800923e0 name=FUN_1800923e0 */

void FUN_1800923e0(longlong param_1)

{
  if (((*(char *)(param_1 + 0xd8) == '\x03') && (*(char *)(param_1 + 0xd0) == '\x03')) &&
     (*(char *)(param_1 + 200) == '\x03')) {
    FUN_1803abc90(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x90) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x90) + 0x18))(*(undefined8 *)(param_1 + 0x98));
    }
  }
  FUN_18001bdd0(param_1);
  return;
}


/* address=1800924c0 name=FUN_1800924c0 */

void FUN_1800924c0(char *param_1,byte param_2)

{
  char cVar1;
  
  if (((param_2 & 1) == 0) && ((*(ulonglong *)PTR_DAT_18093b330 & 0x7fffffffffffffff) != 0)) {
    cVar1 = FUN_1806a1250();
    if (cVar1 == '\0') {
      param_1[1] = '\x01';
    }
  }
  LOCK();
  cVar1 = *param_1;
  *param_1 = '\0';
  UNLOCK();
  if (cVar1 != '\x02') {
    return;
  }
  WakeByAddressSingle();
  return;
}


/* address=180092510 name=FUN_180092510 */

void FUN_180092510(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x20);
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    FUN_180001300(param_1 + 0x40);
  }
  else if (((*(int *)(param_1 + 0x38) == 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != -1))
          && (lVar2 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x48),lVar2,1,param_4,param_1,uVar3);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x70) + 0x18))(*(undefined8 *)(param_1 + 0x78));
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x80);
      return;
    }
  }
  return;
}


/* address=180092670 name=FUN_180092670 */

void FUN_180092670(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x20);
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    FUN_1800010f0(param_1 + 0x40);
  }
  else if (((*(int *)(param_1 + 0x38) == 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != -1))
          && (lVar2 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x48),lVar2,1,param_4,param_1,uVar3);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))(*(undefined8 *)(param_1 + 0x88));
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x90);
      return;
    }
  }
  return;
}


/* address=1800927e0 name=FUN_1800927e0 */

void FUN_1800927e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_180099760(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x120) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x120) + 0x18))(*(undefined8 *)(param_1 + 0x128));
  }
  plVar1 = *(longlong **)(param_1 + 0x130);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x130);
      return;
    }
  }
  return;
}


/* address=180092910 name=FUN_180092910 */

void FUN_180092910(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_180099760(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x120) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x120) + 0x18))(*(undefined8 *)(param_1 + 0x128));
  }
  plVar1 = *(longlong **)(param_1 + 0x130);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x130);
      return;
    }
  }
  return;
}


/* address=180092a40 name=FUN_180092a40 */

void FUN_180092a40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_1800998b0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180092b70 name=FUN_180092b70 */

void FUN_180092b70(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_1800998b0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180092ca0 name=FUN_180092ca0 */

void FUN_180092ca0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_180099a00(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
      return;
    }
  }
  return;
}


/* address=180092dd0 name=FUN_180092dd0 */

void FUN_180092dd0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_180099a00(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
      return;
    }
  }
  return;
}


/* address=180092f00 name=FUN_180092f00 */

void FUN_180092f00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_180099b50(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
      return;
    }
  }
  return;
}


/* address=180093030 name=FUN_180093030 */

void FUN_180093030(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_180099b50(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
      return;
    }
  }
  return;
}


/* address=180093160 name=FUN_180093160 */

void FUN_180093160(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_180099ca0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
      return;
    }
  }
  return;
}


/* address=180093290 name=FUN_180093290 */

void FUN_180093290(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_180099ca0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
      return;
    }
  }
  return;
}


/* address=1800933c0 name=FUN_1800933c0 */

void FUN_1800933c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_180099df0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=1800934f0 name=FUN_1800934f0 */

void FUN_1800934f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_180099df0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180093620 name=FUN_180093620 */

void FUN_180093620(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_180099f40(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
      return;
    }
  }
  return;
}


/* address=180093750 name=FUN_180093750 */

void FUN_180093750(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_180099f40(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x280) + 0x18))(*(undefined8 *)(param_1 + 0x288));
  }
  plVar1 = *(longlong **)(param_1 + 0x290);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x290);
      return;
    }
  }
  return;
}


/* address=180093880 name=FUN_180093880 */

void FUN_180093880(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009a090(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x3d0) + 0x18))(*(undefined8 *)(param_1 + 0x3d8));
  }
  plVar1 = *(longlong **)(param_1 + 0x3e0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x3e0);
      return;
    }
  }
  return;
}


/* address=1800939b0 name=FUN_1800939b0 */

void FUN_1800939b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009a090(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x3d0) + 0x18))(*(undefined8 *)(param_1 + 0x3d8));
  }
  plVar1 = *(longlong **)(param_1 + 0x3e0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x3e0);
      return;
    }
  }
  return;
}


/* address=180093ae0 name=FUN_180093ae0 */

void FUN_180093ae0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009a1e0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x18))(*(undefined8 *)(param_1 + 0x2b0));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b8);
      return;
    }
  }
  return;
}


/* address=180093c10 name=FUN_180093c10 */

void FUN_180093c10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009a1e0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x18))(*(undefined8 *)(param_1 + 0x2b0));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b8);
      return;
    }
  }
  return;
}


/* address=180093d40 name=FUN_180093d40 */

void FUN_180093d40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009a330(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
      return;
    }
  }
  return;
}


/* address=180093e70 name=FUN_180093e70 */

void FUN_180093e70(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009a330(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
      return;
    }
  }
  return;
}


/* address=180093fa0 name=FUN_180093fa0 */

void FUN_180093fa0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009a410(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x18))(*(undefined8 *)(param_1 + 0x2e8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2f0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2f0);
      return;
    }
  }
  return;
}


/* address=1800940d0 name=FUN_1800940d0 */

void FUN_1800940d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009a410(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x18))(*(undefined8 *)(param_1 + 0x2e8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2f0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2f0);
      return;
    }
  }
  return;
}


/* address=180094200 name=FUN_180094200 */

void FUN_180094200(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009a560(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x330) + 0x18))(*(undefined8 *)(param_1 + 0x338));
  }
  plVar1 = *(longlong **)(param_1 + 0x340);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x340);
      return;
    }
  }
  return;
}


/* address=180094330 name=FUN_180094330 */

void FUN_180094330(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009a560(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x330) + 0x18))(*(undefined8 *)(param_1 + 0x338));
  }
  plVar1 = *(longlong **)(param_1 + 0x340);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x340);
      return;
    }
  }
  return;
}


/* address=180094460 name=FUN_180094460 */

void FUN_180094460(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009a6b0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
      return;
    }
  }
  return;
}


/* address=180094590 name=FUN_180094590 */

void FUN_180094590(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009a6b0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
      return;
    }
  }
  return;
}


/* address=1800946c0 name=FUN_1800946c0 */

void FUN_1800946c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009a790(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2c0) + 0x18))(*(undefined8 *)(param_1 + 0x2c8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2d0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2d0);
      return;
    }
  }
  return;
}


/* address=1800947f0 name=FUN_1800947f0 */

void FUN_1800947f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009a790(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2c0) + 0x18))(*(undefined8 *)(param_1 + 0x2c8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2d0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2d0);
      return;
    }
  }
  return;
}


/* address=180094920 name=FUN_180094920 */

void FUN_180094920(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800a6170(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
      return;
    }
  }
  return;
}


/* address=180094af0 name=FUN_180094af0 */

void FUN_180094af0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800a6170(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
      return;
    }
  }
  return;
}


/* address=180094cc0 name=FUN_180094cc0 */

void FUN_180094cc0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009a9a0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180094df0 name=FUN_180094df0 */

void FUN_180094df0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009a9a0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180094f20 name=FUN_180094f20 */

void FUN_180094f20(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009aaf0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180095050 name=FUN_180095050 */

void FUN_180095050(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009aaf0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180095180 name=FUN_180095180 */

void FUN_180095180(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009ac40(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=1800952b0 name=FUN_1800952b0 */

void FUN_1800952b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009ac40(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=1800953e0 name=FUN_1800953e0 */

void FUN_1800953e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009ad90(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180095510 name=FUN_180095510 */

void FUN_180095510(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009ad90(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180095640 name=FUN_180095640 */

void FUN_180095640(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009aee0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x18))(*(undefined8 *)(param_1 + 0x2b0));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b8);
      return;
    }
  }
  return;
}


/* address=180095770 name=FUN_180095770 */

void FUN_180095770(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009aee0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a8) + 0x18))(*(undefined8 *)(param_1 + 0x2b0));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b8);
      return;
    }
  }
  return;
}


/* address=1800958a0 name=FUN_1800958a0 */

void FUN_1800958a0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009afc0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 800) != 0) {
    (**(code **)(*(longlong *)(param_1 + 800) + 0x18))(*(undefined8 *)(param_1 + 0x328));
  }
  plVar1 = *(longlong **)(param_1 + 0x330);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x330);
      return;
    }
  }
  return;
}


/* address=1800959d0 name=FUN_1800959d0 */

void FUN_1800959d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009afc0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 800) != 0) {
    (**(code **)(*(longlong *)(param_1 + 800) + 0x18))(*(undefined8 *)(param_1 + 0x328));
  }
  plVar1 = *(longlong **)(param_1 + 0x330);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x330);
      return;
    }
  }
  return;
}


/* address=180095b00 name=FUN_180095b00 */

void FUN_180095b00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009b110(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2f8) + 0x18))(*(undefined8 *)(param_1 + 0x300));
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x308);
      return;
    }
  }
  return;
}


/* address=180095c30 name=FUN_180095c30 */

void FUN_180095c30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009b110(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2f8) + 0x18))(*(undefined8 *)(param_1 + 0x300));
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x308);
      return;
    }
  }
  return;
}


/* address=180095d60 name=FUN_180095d60 */

void FUN_180095d60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009b1f0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180095e90 name=FUN_180095e90 */

void FUN_180095e90(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009b1f0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180095fc0 name=FUN_180095fc0 */

void FUN_180095fc0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009b340(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
      return;
    }
  }
  return;
}


/* address=1800960f0 name=FUN_1800960f0 */

void FUN_1800960f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009b340(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x370) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x370) + 0x18))(*(undefined8 *)(param_1 + 0x378));
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x380);
      return;
    }
  }
  return;
}


/* address=180096220 name=FUN_180096220 */

void FUN_180096220(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009b420(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a0) + 0x18))(*(undefined8 *)(param_1 + 0x2a8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b0);
      return;
    }
  }
  return;
}


/* address=180096350 name=FUN_180096350 */

void FUN_180096350(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009b420(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2a0) + 0x18))(*(undefined8 *)(param_1 + 0x2a8));
  }
  plVar1 = *(longlong **)(param_1 + 0x2b0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2b0);
      return;
    }
  }
  return;
}


/* address=180096480 name=FUN_180096480 */

void FUN_180096480(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009b570(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x3e0) + 0x18))(*(undefined8 *)(param_1 + 1000));
  }
  plVar1 = *(longlong **)(param_1 + 0x3f0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x3f0);
      return;
    }
  }
  return;
}


/* address=1800965b0 name=FUN_1800965b0 */

void FUN_1800965b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009b570(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x3e0) + 0x18))(*(undefined8 *)(param_1 + 1000));
  }
  plVar1 = *(longlong **)(param_1 + 0x3f0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x3f0);
      return;
    }
  }
  return;
}


/* address=1800966e0 name=FUN_1800966e0 */

void FUN_1800966e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009b6f0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2f8) + 0x18))(*(undefined8 *)(param_1 + 0x300));
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x308);
      return;
    }
  }
  return;
}


/* address=180096810 name=FUN_180096810 */

void FUN_180096810(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009b6f0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2f8) + 0x18))(*(undefined8 *)(param_1 + 0x300));
  }
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x308);
      return;
    }
  }
  return;
}


/* address=180096940 name=FUN_180096940 */

void FUN_180096940(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009b7d0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180096a70 name=FUN_180096a70 */

void FUN_180096a70(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009b7d0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180096ba0 name=FUN_180096ba0 */

void FUN_180096ba0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009b920(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
      return;
    }
  }
  return;
}


/* address=180096cd0 name=FUN_180096cd0 */

void FUN_180096cd0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009b920(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x308) + 0x18))(*(undefined8 *)(param_1 + 0x310));
  }
  plVar1 = *(longlong **)(param_1 + 0x318);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x318);
      return;
    }
  }
  return;
}


/* address=180096e00 name=FUN_180096e00 */

void FUN_180096e00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009ba70(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180096f30 name=FUN_180096f30 */

void FUN_180096f30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009ba70(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x290) + 0x18))(*(undefined8 *)(param_1 + 0x298));
  }
  plVar1 = *(longlong **)(param_1 + 0x2a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x2a0);
      return;
    }
  }
  return;
}


/* address=180097060 name=FUN_180097060 */

void FUN_180097060(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (((*(int *)(param_1 + 0x30) == 1) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0)) {
    ppcVar3 = *(code ***)(param_1 + 0x48);
    if (*ppcVar3 != (code *)0x0) {
      (**ppcVar3)(lVar2);
    }
    if (ppcVar3[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x90) + 0x18))(*(undefined8 *)(param_1 + 0x98));
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xa0);
      return;
    }
  }
  return;
}


/* address=180097210 name=FUN_180097210 */

void FUN_180097210(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (((*(int *)(param_1 + 0x30) == 1) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0)) {
    ppcVar3 = *(code ***)(param_1 + 0x48);
    if (*ppcVar3 != (code *)0x0) {
      (**ppcVar3)(lVar2);
    }
    if (ppcVar3[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x90) + 0x18))(*(undefined8 *)(param_1 + 0x98));
  }
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xa0);
      return;
    }
  }
  return;
}


/* address=1800973c0 name=FUN_1800973c0 */

void FUN_1800973c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009bbc0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x348) + 0x18))(*(undefined8 *)(param_1 + 0x350));
  }
  plVar1 = *(longlong **)(param_1 + 0x358);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x358);
      return;
    }
  }
  return;
}


/* address=1800974f0 name=FUN_1800974f0 */

void FUN_1800974f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009bbc0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x348) + 0x18))(*(undefined8 *)(param_1 + 0x350));
  }
  plVar1 = *(longlong **)(param_1 + 0x358);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x358);
      return;
    }
  }
  return;
}


/* address=180097620 name=FUN_180097620 */

void FUN_180097620(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    if (*(char *)(param_1 + 0x360) == '\x03') {
      FUN_1800a55e0(param_1 + 0x78);
    }
    else if (*(char *)(param_1 + 0x360) == '\0') {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x48),1);
      }
      plVar1 = *(longlong **)(param_1 + 0x60);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180397b10(param_1 + 0x60);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x378) + 0x18))(*(undefined8 *)(param_1 + 0x380));
  }
  plVar1 = *(longlong **)(param_1 + 0x388);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x388);
      return;
    }
  }
  return;
}


/* address=180097840 name=FUN_180097840 */

void FUN_180097840(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    if (*(char *)(param_1 + 0x360) == '\x03') {
      FUN_1800a55e0(param_1 + 0x78);
    }
    else if (*(char *)(param_1 + 0x360) == '\0') {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x48),1);
      }
      plVar1 = *(longlong **)(param_1 + 0x60);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180397b10(param_1 + 0x60);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x378) + 0x18))(*(undefined8 *)(param_1 + 0x380));
  }
  plVar1 = *(longlong **)(param_1 + 0x388);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x388);
      return;
    }
  }
  return;
}


/* address=180097a60 name=FUN_180097a60 */

void FUN_180097a60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  FUN_18009bdc0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x338) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x338) + 0x18))(*(undefined8 *)(param_1 + 0x340));
  }
  plVar1 = *(longlong **)(param_1 + 0x348);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x348);
      return;
    }
  }
  return;
}


/* address=180097b90 name=FUN_180097b90 */

void FUN_180097b90(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  FUN_18009bdc0(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x338) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x338) + 0x18))(*(undefined8 *)(param_1 + 0x340));
  }
  plVar1 = *(longlong **)(param_1 + 0x348);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x348);
      return;
    }
  }
  return;
}


/* address=180097cc0 name=FUN_180097cc0 */

void FUN_180097cc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    if (*(char *)(param_1 + 0x130) == '\x03') {
      FUN_1800a5e70(param_1 + 0x78);
    }
    else if (*(char *)(param_1 + 0x130) == '\0') {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x48),1);
      }
      plVar1 = *(longlong **)(param_1 + 0x60);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180397b10(param_1 + 0x60);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))(*(undefined8 *)(param_1 + 0x150));
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x158);
      return;
    }
  }
  return;
}


/* address=180097ee0 name=FUN_180097ee0 */

void FUN_180097ee0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    if (*(char *)(param_1 + 0x130) == '\x03') {
      FUN_1800a5e70(param_1 + 0x78);
    }
    else if (*(char *)(param_1 + 0x130) == '\0') {
      if (*(longlong *)(param_1 + 0x48) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x48),1);
      }
      plVar1 = *(longlong **)(param_1 + 0x60);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180397b10(param_1 + 0x60);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))(*(undefined8 *)(param_1 + 0x150));
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x158);
      return;
    }
  }
  return;
}


/* address=180098100 name=FUN_180098100 */

void FUN_180098100(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019d90(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd0);
      return;
    }
  }
  return;
}


/* address=1800982d0 name=FUN_1800982d0 */

void FUN_1800982d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019d90(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd0);
      return;
    }
  }
  return;
}


/* address=1800984a0 name=FUN_1800984a0 */

void FUN_1800984a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019fb0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd0);
      return;
    }
  }
  return;
}


/* address=180098670 name=FUN_180098670 */

void FUN_180098670(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_180019fb0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))(*(undefined8 *)(param_1 + 200));
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd0);
      return;
    }
  }
  return;
}


/* address=180098840 name=FUN_180098840 */

void FUN_180098840(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a1d0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    (**(code **)(*(longlong *)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 0xd0));
  }
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd8);
      return;
    }
  }
  return;
}


/* address=180098a10 name=FUN_180098a10 */

void FUN_180098a10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a1d0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    (**(code **)(*(longlong *)(param_1 + 200) + 0x18))(*(undefined8 *)(param_1 + 0xd0));
  }
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xd8);
      return;
    }
  }
  return;
}


/* address=180098be0 name=FUN_180098be0 */

void FUN_180098be0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a3f0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))(*(undefined8 *)(param_1 + 0x150));
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x158);
      return;
    }
  }
  return;
}


/* address=180098db0 name=FUN_180098db0 */

void FUN_180098db0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code **ppcVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0))
    {
      ppcVar3 = *(code ***)(param_1 + 0x48);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(lVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a3f0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))(*(undefined8 *)(param_1 + 0x150));
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x158);
      return;
    }
  }
  return;
}


/* address=180098f80 name=FUN_180098f80 */

void FUN_180098f80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a5e0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))(*(undefined8 *)(param_1 + 0x88));
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x90);
      return;
    }
  }
  return;
}


/* address=1800990d0 name=FUN_1800990d0 */

void FUN_1800990d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001a5e0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))(*(undefined8 *)(param_1 + 0x88));
  }
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x90);
      return;
    }
  }
  return;
}


/* address=180099220 name=FUN_180099220 */

void FUN_180099220(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800a62a0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x160) + 0x18))(*(undefined8 *)(param_1 + 0x168));
  }
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x170);
      return;
    }
  }
  return;
}


/* address=180099370 name=FUN_180099370 */

void FUN_180099370(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_1800a62a0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x160) + 0x18))(*(undefined8 *)(param_1 + 0x168));
  }
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0x170);
      return;
    }
  }
  return;
}


/* address=1800994c0 name=FUN_1800994c0 */

void FUN_1800994c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c1bd0(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001b4e0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xd8) + 0x18))(*(undefined8 *)(param_1 + 0xe0));
  }
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xe8);
      return;
    }
  }
  return;
}


/* address=180099610 name=FUN_180099610 */

void FUN_180099610(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1803c2010(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x30) == 1) {
    FUN_180001400(param_1 + 0x38);
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_18001b4e0(param_1 + 0x38);
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xd8) + 0x18))(*(undefined8 *)(param_1 + 0xe0));
  }
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a94e0(param_1 + 0xe8);
      return;
    }
  }
  return;
}


/* address=180099760 name=FUN_180099760 */

void FUN_180099760(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x36) == '\x03') {
      FUN_18009bfe0(param_1 + 0x10);
      return;
    }
    if (*(char *)(param_1 + 0x36) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=1800998b0 name=FUN_1800998b0 */

void FUN_1800998b0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x92) == '\x03') {
      FUN_18009c230(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x92) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=180099a00 name=FUN_180099a00 */

void FUN_180099a00(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x8e) == '\x03') {
      FUN_18009c670(param_1 + 0x10);
      return;
    }
    if (*(char *)(param_1 + 0x8e) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=180099b50 name=FUN_180099b50 */

void FUN_180099b50(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x8e) == '\x03') {
      FUN_18009cab0(param_1 + 0x10);
      return;
    }
    if (*(char *)(param_1 + 0x8e) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=180099ca0 name=FUN_180099ca0 */

void FUN_180099ca0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xb0) == '\x03') {
      FUN_18009ced0(param_1 + 0x18);
      return;
    }
    if (*(char *)(param_1 + 0xb0) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=180099df0 name=FUN_180099df0 */

void FUN_180099df0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x92) == '\x03') {
      FUN_18009d320(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x92) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=180099f40 name=FUN_180099f40 */

void FUN_180099f40(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x8e) == '\x03') {
      FUN_18009d740(param_1 + 0x10);
      return;
    }
    if (*(char *)(param_1 + 0x8e) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009a090 name=FUN_18009a090 */

void FUN_18009a090(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xe2) == '\x03') {
      FUN_18009dc30(param_1 + 0x22);
      return;
    }
    if (*(char *)(param_1 + 0xe2) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009a1e0 name=FUN_18009a1e0 */

void FUN_18009a1e0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x98) == '\x03') {
      FUN_18009e0a0(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x98) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009a330 name=FUN_18009a330 */

void FUN_18009a330(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xca) == '\x03') {
      FUN_18009e4f0(param_1 + 0x1c);
      return;
    }
    if (*(char *)(param_1 + 0xca) == '\0') {
      FUN_18001ac40(param_1 + 6);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009a410 name=FUN_18009a410 */

void FUN_18009a410(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xa6) == '\x03') {
      FUN_18009ea90(param_1 + 0x16);
      return;
    }
    if (*(char *)(param_1 + 0xa6) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009a560 name=FUN_18009a560 */

void FUN_18009a560(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xba) == '\x03') {
      FUN_18009eee0(param_1 + 0x1a);
      return;
    }
    if (*(char *)(param_1 + 0xba) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009a6b0 name=FUN_18009a6b0 */

void FUN_18009a6b0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xb0) == '\x03') {
      FUN_18009f330(param_1 + 0x18);
      return;
    }
    if (*(char *)(param_1 + 0xb0) == '\0') {
      FUN_18001ad40(param_1 + 6);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009a790 name=FUN_18009a790 */

void FUN_18009a790(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x9e) == '\x03') {
      FUN_18009fa00(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x9e) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009a8e0 name=FUN_18009a8e0 */

void FUN_18009a8e0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    FUN_1800a6170(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009a9a0 name=FUN_18009a9a0 */

void FUN_18009a9a0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x92) == '\x03') {
      FUN_1800a0480(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x92) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009aaf0 name=FUN_18009aaf0 */

void FUN_18009aaf0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x92) == '\x03') {
      FUN_1800a08c0(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x92) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009ac40 name=FUN_18009ac40 */

void FUN_18009ac40(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x92) == '\x03') {
      FUN_1800a0ce0(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x92) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009ad90 name=FUN_18009ad90 */

void FUN_18009ad90(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x92) == '\x03') {
      FUN_1800a1120(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x92) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009aee0 name=FUN_18009aee0 */

void FUN_18009aee0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x98) == '\x03') {
      FUN_1800a1560(param_1 + 0x18);
      return;
    }
    if (*(char *)(param_1 + 0x98) == '\0') {
      FUN_18001ae80(param_1 + 6);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009afc0 name=FUN_18009afc0 */

void FUN_18009afc0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xb6) == '\x03') {
      FUN_1800a1ac0(param_1 + 0x18);
      return;
    }
    if (*(char *)(param_1 + 0xb6) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009b110 name=FUN_18009b110 */

void FUN_18009b110(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xac) == '\x03') {
      FUN_1800a1f20(param_1 + 0x16);
      return;
    }
    if (*(char *)(param_1 + 0xac) == '\0') {
      FUN_18001ae80(param_1 + 6);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009b1f0 name=FUN_18009b1f0 */

void FUN_18009b1f0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x92) == '\x03') {
      FUN_1800a24a0(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x92) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009b340 name=FUN_18009b340 */

void FUN_18009b340(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xca) == '\x03') {
      FUN_1800a28e0(param_1 + 0x1c);
      return;
    }
    if (*(char *)(param_1 + 0xca) == '\0') {
      FUN_18001af80(param_1 + 6);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009b420 name=FUN_18009b420 */

void FUN_18009b420(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x96) == '\x03') {
      FUN_1800a3110(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x96) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009b570 name=FUN_18009b570 */

void FUN_18009b570(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xe6) == '\x03') {
      FUN_1800a3560(param_1 + 0x14);
      return;
    }
    if (*(char *)(param_1 + 0xe6) == '\0') {
      lVar1 = *(longlong *)(param_1 + 6);
      if ((lVar1 != -1) && (lVar1 != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar1,1);
      }
      plVar3 = *(longlong **)(param_1 + 0xc);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180397b10(param_1 + 0xc);
      }
      plVar3 = *(longlong **)(param_1 + 0xe);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180397b10(param_1 + 0xe);
        return;
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009b6f0 name=FUN_18009b6f0 */

void FUN_18009b6f0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xac) == '\x03') {
      FUN_1800a3e10(param_1 + 0x16);
      return;
    }
    if (*(char *)(param_1 + 0xac) == '\0') {
      FUN_18001ac40(param_1 + 6);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009b7d0 name=FUN_18009b7d0 */

void FUN_18009b7d0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x92) == '\x03') {
      FUN_1800a43a0(param_1 + 0x10);
      return;
    }
    if (*(char *)(param_1 + 0x92) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009b920 name=FUN_18009b920 */

void FUN_18009b920(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xb0) == '\x03') {
      FUN_1800a47c0(param_1 + 0x10);
      return;
    }
    if (*(char *)(param_1 + 0xb0) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802de5f0(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239c40(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009ba70 name=FUN_18009ba70 */

void FUN_18009ba70(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x92) == '\x03') {
      FUN_1800a4be0(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x92) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar3 = *(longlong **)(param_1 + 10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009bbc0 name=FUN_18009bbc0 */

void FUN_18009bbc0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xc0) == '\x03') {
      FUN_1800a5020(param_1 + 0x18);
      return;
    }
    if (*(char *)(param_1 + 0xc0) == '\0') {
      FUN_18001ae80(param_1 + 6);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009bca0 name=FUN_18009bca0 */

void FUN_18009bca0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xcc) == '\x03') {
      FUN_1800a55e0(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0xcc) == '\0') {
      if (*(longlong *)(param_1 + 6) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6),1);
      }
      plVar3 = *(longlong **)(param_1 + 0xc);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180397b10(param_1 + 0xc);
        return;
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009bdc0 name=FUN_18009bdc0 */

void FUN_18009bdc0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      FUN_1800a58b0(param_1 + 0x16);
      return;
    }
    if (*(char *)(param_1 + 0xbc) == '\0') {
      FUN_18001ae80(param_1 + 6);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009bea0 name=FUN_18009bea0 */

void FUN_18009bea0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0x40) == '\x03') {
      FUN_1800a5e70(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x40) == '\0') {
      if (*(longlong *)(param_1 + 6) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6),1);
      }
      plVar3 = *(longlong **)(param_1 + 0xc);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180397b10(param_1 + 0xc);
        return;
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    ppcVar2 = *(code ***)(param_1 + 6);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
      return;
    }
  }
  return;
}


/* address=18009bfc0 name=FUN_18009bfc0 */

void FUN_18009bfc0(int *param_1)

{
  if (*param_1 == 0) {
    FUN_1800a62a0(param_1 + 2);
    return;
  }
  if (*param_1 == 1) {
    FUN_180001400(param_1 + 2);
    return;
  }
  return;
}


/* address=18009bfe0 name=FUN_18009bfe0 */

void FUN_18009bfe0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar1 = *(longlong **)(param_1 + 4);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x24) == '\x03') {
    if (*(char *)(param_1 + 0x22) == '\x03') {
      if (*(char *)(param_1 + 0x20) == '\x03') {
        if (*(char *)(param_1 + 0x1e) == '\0') {
          if (param_1[0x18] == 1) {
            FUN_1802dfb40(*(undefined8 *)(param_1 + 0x1a));
          }
          plVar1 = *(longlong **)(param_1 + 0x1c);
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              FUN_180239850(param_1 + 0x1c);
              return;
            }
          }
        }
      }
      else if (*(char *)(param_1 + 0x20) == '\0') {
        if (param_1[0x12] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x14));
        }
        plVar1 = *(longlong **)(param_1 + 0x16);
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            FUN_180239850(param_1 + 0x16);
            return;
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0x22) == '\0') {
      if (param_1[0xc] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe));
      }
      plVar1 = *(longlong **)(param_1 + 0x10);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_180239850(param_1 + 0x10);
          return;
        }
      }
    }
  }
  return;
}


/* address=18009c230 name=FUN_18009c230 */

void FUN_18009c230(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7e) != '\x03') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x1f1) != '\x03') {
      if (*(char *)((longlong)param_1 + 0x1f1) != '\0') {
        return;
      }
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x12);
      return;
    }
    cVar1 = *(char *)((longlong)param_1 + 0x79);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x7a) == '\x03') {
        if (*(char *)(param_1 + 0x76) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x3a);
        }
        else if (*(char *)(param_1 + 0x76) == '\0') {
          FUN_1800a6eb0(param_1 + 0x24);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x14] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18009c458;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppcVar4 = *(code ***)(param_1 + 0x22);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x28) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x7a) != '\0') && (*(longlong *)(param_1 + 0x1a) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1a),1);
    }
    *(undefined *)((longlong)param_1 + 0x7a) = 0;
    if (param_1[0x14] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18009c458:
        FUN_180239850(param_1 + 0x18);
        return;
      }
    }
  }
  return;
}


/* address=18009c670 name=FUN_18009c670 */

void FUN_18009c670(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7c) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x7a) != '\x03') {
      if (*(char *)(param_1 + 0x7a) != '\0') {
        return;
      }
      if (param_1[0xc] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe));
      }
      plVar2 = *(longlong **)(param_1 + 0x10);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x10);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x1c);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x78) == '\x03') {
        if (*(char *)(param_1 + 0x76) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x3a);
        }
        else if (*(char *)(param_1 + 0x76) == '\0') {
          FUN_1800a6eb0(param_1 + 0x24);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x1e),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x12] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x14));
        }
        plVar2 = *(longlong **)(param_1 + 0x16);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18009c892;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x1e);
      ppcVar4 = *(code ***)(param_1 + 0x20);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x26) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x22),*(longlong *)(param_1 + 0x26) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x71) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x18),1);
    }
    *(undefined *)((longlong)param_1 + 0x71) = 0;
    if (param_1[0x12] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x14));
    }
    plVar2 = *(longlong **)(param_1 + 0x16);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18009c892:
        FUN_180239850(param_1 + 0x16);
        return;
      }
    }
  }
  return;
}


/* address=18009cab0 name=FUN_18009cab0 */

void FUN_18009cab0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7c) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x7a) != '\x03') {
      if (*(char *)(param_1 + 0x7a) != '\0') {
        return;
      }
      if (param_1[0xc] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe));
      }
      plVar2 = *(longlong **)(param_1 + 0x10);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x10);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x1c);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x78) == '\x03') {
        FUN_1800a6090(param_1 + 0x24);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x1e),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x12] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x14));
        }
        plVar2 = *(longlong **)(param_1 + 0x16);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18009ccaf;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x1e);
      ppcVar4 = *(code ***)(param_1 + 0x20);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x26) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x22),*(longlong *)(param_1 + 0x26) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x71) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x18),1);
    }
    *(undefined *)((longlong)param_1 + 0x71) = 0;
    if (param_1[0x12] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x14));
    }
    plVar2 = *(longlong **)(param_1 + 0x16);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18009ccaf:
        FUN_180239850(param_1 + 0x16);
        return;
      }
    }
  }
  return;
}


/* address=18009ced0 name=FUN_18009ced0 */

void FUN_18009ced0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x96) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x96) != '\x03') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x252) != '\x03') {
      if (*(char *)((longlong)param_1 + 0x252) != '\0') {
        return;
      }
      if (param_1[0x14] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
      }
      plVar2 = *(longlong **)(param_1 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x18);
      return;
    }
    cVar1 = *(char *)((longlong)param_1 + 0xaa);
    if (cVar1 == '\x04') {
      if (*(char *)((longlong)param_1 + 0x222) == '\x03') {
        if (*(char *)(param_1 + 0x80) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x44);
        }
        else if (*(char *)(param_1 + 0x80) == '\0') {
          FUN_1800a6eb0(param_1 + 0x2e);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x8a),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x1a] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x1c));
        }
        plVar2 = *(longlong **)(param_1 + 0x1e);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18009d104;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x2c);
      ppcVar4 = *(code ***)(param_1 + 0x2e);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x34) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x34) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0xab) != '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x20),1);
    }
    *(undefined *)((longlong)param_1 + 0xab) = 0;
    if (param_1[0x1a] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x1c));
    }
    plVar2 = *(longlong **)(param_1 + 0x1e);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18009d104:
        FUN_180239850(param_1 + 0x1e);
        return;
      }
    }
  }
  return;
}


/* address=18009d320 name=FUN_18009d320 */

void FUN_18009d320(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7e) != '\x03') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x1f1) != '\x03') {
      if (*(char *)((longlong)param_1 + 0x1f1) != '\0') {
        return;
      }
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x12);
      return;
    }
    cVar1 = *(char *)((longlong)param_1 + 0x79);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x7a) == '\x03') {
        FUN_1800a6090(param_1 + 0x24);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x14] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18009d525;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppcVar4 = *(code ***)(param_1 + 0x22);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x28) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x7a) != '\0') && (*(longlong *)(param_1 + 0x1a) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1a),1);
    }
    *(undefined *)((longlong)param_1 + 0x7a) = 0;
    if (param_1[0x14] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18009d525:
        FUN_180239850(param_1 + 0x18);
        return;
      }
    }
  }
  return;
}


/* address=18009d740 name=FUN_18009d740 */

void FUN_18009d740(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7c) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x7a) != '\x03') {
      if (*(char *)(param_1 + 0x7a) != '\0') {
        return;
      }
      if (param_1[0xc] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe));
      }
      plVar2 = *(longlong **)(param_1 + 0x10);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x10);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x1c);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x78) == '\x03') {
        if (*(char *)(param_1 + 0x76) == '\x03') {
          if (*(char *)(param_1 + 0x74) == '\x03') {
            uVar3 = *(undefined8 *)(param_1 + 0x70);
            ppcVar4 = *(code ***)(param_1 + 0x72);
            if (*ppcVar4 != (code *)0x0) {
              (**ppcVar4)(uVar3);
            }
            if (ppcVar4[1] != (code *)0x0) {
              thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
            }
            FUN_18001bdd0(param_1 + 0x54);
          }
          else if (*(char *)(param_1 + 0x74) == '\0') {
            FUN_1800a6eb0(param_1 + 0x3e);
          }
        }
        else if (*(char *)(param_1 + 0x76) == '\0') {
          FUN_1800a6eb0(param_1 + 0x24);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x1e),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x12] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x14));
        }
        plVar2 = *(longlong **)(param_1 + 0x16);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18009d9dc;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x1e);
      ppcVar4 = *(code ***)(param_1 + 0x20);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x26) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x22),*(longlong *)(param_1 + 0x26) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x71) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x18),1);
    }
    *(undefined *)((longlong)param_1 + 0x71) = 0;
    if (param_1[0x12] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x14));
    }
    plVar2 = *(longlong **)(param_1 + 0x16);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18009d9dc:
        FUN_180239850(param_1 + 0x16);
        return;
      }
    }
  }
  return;
}


/* address=18009dc30 name=FUN_18009dc30 */

void FUN_18009dc30(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0xbe) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xbe) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0xac) != '\x03') {
      if (*(char *)(param_1 + 0xac) != '\0') {
        return;
      }
      if (param_1[0x1e] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x20));
      }
      plVar2 = *(longlong **)(param_1 + 0x22);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x22);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x2e);
    if (cVar1 == '\x04') {
      if (*(char *)((longlong)param_1 + 0x2a9) == '\x03') {
        if (*(char *)(param_1 + 0x96) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x5a);
        }
        else if (*(char *)(param_1 + 0x96) == '\0') {
          FUN_1800a6eb0(param_1 + 0x44);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x40),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x24] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x26));
        }
        plVar2 = *(longlong **)(param_1 + 0x28);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18009de7f;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      ppcVar4 = *(code ***)(param_1 + 0x42);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x48) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x44),*(longlong *)(param_1 + 0x48) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0xfa) != '\0') && (*(longlong *)(param_1 + 0x2a) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x2a),1);
    }
    *(undefined *)((longlong)param_1 + 0xfa) = 0;
    if (param_1[0x24] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x26));
    }
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18009de7f:
        FUN_180239850(param_1 + 0x28);
        return;
      }
    }
  }
  return;
}


/* address=18009e0a0 name=FUN_18009e0a0 */

void FUN_18009e0a0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x84) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x84) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x82) != '\x03') {
      if (*(char *)(param_1 + 0x82) != '\0') {
        return;
      }
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x12);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x22);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x7c) == '\x03') {
        if (*(char *)(param_1 + 0x7a) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x3e);
        }
        else if (*(char *)(param_1 + 0x7a) == '\0') {
          FUN_1800a6eb0(param_1 + 0x28);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x7e),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x16] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
        }
        plVar2 = *(longlong **)(param_1 + 0x1a);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18009e2d1;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x24);
      ppcVar4 = *(code ***)(param_1 + 0x26);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x2c) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x2c) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x89) != '\0') && (*(longlong *)(param_1 + 0x1e) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1e),1);
    }
    *(undefined *)((longlong)param_1 + 0x89) = 0;
    if (param_1[0x16] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar2 = *(longlong **)(param_1 + 0x1a);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18009e2d1:
        FUN_180239850(param_1 + 0x1a);
        return;
      }
    }
  }
  return;
}


/* address=18009e4f0 name=FUN_18009e4f0 */

void FUN_18009e4f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x2b0) != '\x03') {
    if (*(char *)(param_1 + 0x2b0) != '\0') {
      return;
    }
    FUN_18001ac40();
    return;
  }
  if (*(char *)(param_1 + 0x2a8) == '\0') {
    if (*(int *)(param_1 + 0x60) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x68));
    }
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x70);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x78);
    if (lVar5 == -1) {
      return;
    }
    param_1 = param_1 + 0x78;
    if (lVar5 == 0) {
      return;
    }
    goto LAB_18009e799;
  }
  if (*(char *)(param_1 + 0x2a8) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x100);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x2a0) == '\x03') {
      if (*(char *)(param_1 + 0x298) == '\x03') {
        FUN_1800a5fc0(param_1 + 0x1a8);
      }
      else if (*(char *)(param_1 + 0x298) == '\0') {
        FUN_1800a6eb0(param_1 + 0x150);
      }
    }
    else if (((*(char *)(param_1 + 0x2a0) == '\0') &&
             (lVar5 = *(longlong *)(param_1 + 0x118), lVar5 != -1)) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x120),lVar5,1);
    }
    FUN_1803aa820(*(undefined8 *)(param_1 + 0x108),1);
LAB_18009e700:
    if ((*(char *)(param_1 + 0x101) != '\0') && (*(longlong *)(param_1 + 0xf0) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xf0),1);
    }
    *(undefined *)(param_1 + 0x101) = 0;
    if (*(int *)(param_1 + 0xa8) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
    }
    plVar2 = *(longlong **)(param_1 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xb8);
      }
    }
    if (*(char *)(param_1 + 0x102) != '\x01') {
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0x108);
      ppcVar4 = *(code ***)(param_1 + 0x110);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x128) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x118),*(longlong *)(param_1 + 0x128) << 3,8);
      }
      goto LAB_18009e700;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0xa8) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
    }
    plVar2 = *(longlong **)(param_1 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xb8);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if ((lVar5 == -1) || (param_1 = param_1 + 0xc0, lVar5 == 0)) {
    return;
  }
LAB_18009e799:
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar5,1);
  return;
}


/* address=18009ea90 name=FUN_18009ea90 */

void FUN_18009ea90(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x8e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x8e) != '\x03') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x231) != '\x03') {
      if (*(char *)((longlong)param_1 + 0x231) != '\0') {
        return;
      }
      if (param_1[0x12] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x14));
      }
      plVar2 = *(longlong **)(param_1 + 0x16);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x16);
      return;
    }
    cVar1 = *(char *)((longlong)param_1 + 0x99);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x82) == '\x03') {
        if (*(char *)(param_1 + 0x7e) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x42);
        }
        else if (*(char *)(param_1 + 0x7e) == '\0') {
          FUN_1800a6eb0(param_1 + 0x2c);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x28),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x18] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x1a));
        }
        plVar2 = *(longlong **)(param_1 + 0x1c);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18009ecc1;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      ppcVar4 = *(code ***)(param_1 + 0x2a);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x30) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x2c),*(longlong *)(param_1 + 0x30) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x9a) != '\0') && (*(longlong *)(param_1 + 0x1e) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1e),1);
    }
    *(undefined *)((longlong)param_1 + 0x9a) = 0;
    if (param_1[0x18] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x1a));
    }
    plVar2 = *(longlong **)(param_1 + 0x1c);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18009ecc1:
        FUN_180239850(param_1 + 0x1c);
        return;
      }
    }
  }
  return;
}


/* address=18009eee0 name=FUN_18009eee0 */

void FUN_18009eee0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x9e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x9e) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x94) != '\x03') {
      if (*(char *)(param_1 + 0x94) != '\0') {
        return;
      }
      if (param_1[0x16] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
      }
      plVar2 = *(longlong **)(param_1 + 0x1a);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x1a);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x26);
    if (cVar1 == '\x04') {
      if (*(char *)((longlong)param_1 + 0x249) == '\x03') {
        if (*(char *)(param_1 + 0x86) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x4a);
        }
        else if (*(char *)(param_1 + 0x86) == '\0') {
          FUN_1800a6eb0(param_1 + 0x34);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x30),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x1c] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x1e));
        }
        plVar2 = *(longlong **)(param_1 + 0x20);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_18009f11a;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      ppcVar4 = *(code ***)(param_1 + 0x32);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x38) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x34),*(longlong *)(param_1 + 0x38) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0xba) != '\0') && (*(longlong *)(param_1 + 0x22) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x22),1);
    }
    *(undefined *)((longlong)param_1 + 0xba) = 0;
    if (param_1[0x1c] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x1e));
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_18009f11a:
        FUN_180239850(param_1 + 0x20);
        return;
      }
    }
  }
  return;
}


/* address=18009f330 name=FUN_18009f330 */

void FUN_18009f330(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  code **ppcVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 600) != '\x03') {
    if (*(char *)(param_1 + 600) != '\0') {
      return;
    }
    FUN_18001ad40();
    return;
  }
  if (*(char *)(param_1 + 0x251) == '\0') {
    if (*(int *)(param_1 + 0x50) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x58));
    }
    plVar6 = *(longlong **)(param_1 + 0x60);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        FUN_180239850(param_1 + 0x60);
      }
    }
    plVar6 = (longlong *)(param_1 + 0x68);
    lVar7 = *(longlong *)(param_1 + 0x78);
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 8);
      do {
        lVar2 = puVar5[-1];
        if ((-0x7ffffffffffffffe < lVar2) && (lVar2 != 0)) {
          thunk_FUN_1803e4c80(*puVar5,lVar2,1);
        }
        puVar5 = puVar5 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  else {
    if (*(char *)(param_1 + 0x251) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xc1);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x239) == '\x03') {
        FUN_1800a6090(param_1 + 0xe8);
      }
      else if (*(char *)(param_1 + 0x239) == '\0') {
        FUN_18024e7c0();
        if (*(longlong *)(param_1 + 200) != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 200) * 0x18,8)
          ;
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x240),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x80) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
        }
        plVar6 = *(longlong **)(param_1 + 0x90);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            FUN_180239850(param_1 + 0x90);
          }
        }
        plVar6 = (longlong *)(param_1 + 0x98);
        lVar7 = *(longlong *)(param_1 + 0xa8);
        if (lVar7 != 0) {
          puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8);
          do {
            lVar2 = puVar5[-1];
            if ((-0x7ffffffffffffffe < lVar2) && (lVar2 != 0)) {
              thunk_FUN_1803e4c80(*puVar5,lVar2,1);
            }
            puVar5 = puVar5 + 3;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        goto LAB_18009f6a7;
      }
      uVar3 = *(undefined8 *)(param_1 + 200);
      ppcVar4 = *(code ***)(param_1 + 0xd0);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd8),*(longlong *)(param_1 + 0xe8) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xc2) != '\0') && (*(longlong *)(param_1 + 0xb0) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xb0),1);
    }
    *(undefined *)(param_1 + 0xc2) = 0;
    if (*(int *)(param_1 + 0x80) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
    }
    plVar6 = *(longlong **)(param_1 + 0x90);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        FUN_180239850(param_1 + 0x90);
      }
    }
    if (*(char *)(param_1 + 0xc3) != '\x01') {
      return;
    }
    plVar6 = (longlong *)(param_1 + 0x98);
    lVar7 = *(longlong *)(param_1 + 0xa8);
    if (lVar7 != 0) {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8);
      do {
        lVar2 = puVar5[-1];
        if ((-0x7ffffffffffffffe < lVar2) && (lVar2 != 0)) {
          thunk_FUN_1803e4c80(*puVar5,lVar2,1);
        }
        puVar5 = puVar5 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
LAB_18009f6a7:
  if (*plVar6 == 0) {
    return;
  }
  thunk_FUN_1803e4c80(plVar6[1],*plVar6 * 0x18,8);
  return;
}


/* address=18009fa00 name=FUN_18009fa00 */

void FUN_18009fa00(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x8a) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x8a) == '\x03') {
    if (*(char *)((longlong)param_1 + 0x221) == '\x03') {
      if (*(char *)((longlong)param_1 + 0x219) == '\x03') {
        cVar1 = *(char *)((longlong)param_1 + 0xb1);
        if (cVar1 == '\x04') {
          if (*(char *)(param_1 + 0x84) == '\x03') {
            if (*(char *)(param_1 + 0x80) == '\x03') {
              FUN_1800a5fc0(param_1 + 0x44);
            }
            else if (*(char *)(param_1 + 0x80) == '\0') {
              FUN_1800a6eb0(param_1 + 0x2e);
            }
          }
          FUN_1803aa820(*(undefined8 *)(param_1 + 0x26),param_1[0x2a]);
        }
        else {
          if (cVar1 != '\x03') {
            if (cVar1 != '\0') {
              return;
            }
            if (param_1[0x1a] == 1) {
              FUN_1802dfb40(*(undefined8 *)(param_1 + 0x1c));
            }
            plVar2 = *(longlong **)(param_1 + 0x1e);
            if (plVar2 == (longlong *)0x0) {
              return;
            }
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 != 0) {
              return;
            }
            FUN_180239850(param_1 + 0x1e);
            return;
          }
          if (((*(char *)(param_1 + 0x48) == '\x03') && (*(char *)(param_1 + 0x46) == '\x03')) &&
             (*(char *)(param_1 + 0x44) == '\x03')) {
            FUN_1803abc90(param_1 + 0x34);
            if (*(longlong *)(param_1 + 0x36) != 0) {
              (**(code **)(*(longlong *)(param_1 + 0x36) + 0x18))(*(undefined8 *)(param_1 + 0x38));
            }
          }
        }
        if (param_1[0x20] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x22));
        }
        plVar2 = *(longlong **)(param_1 + 0x24);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0x24);
            return;
          }
        }
      }
      else if (*(char *)((longlong)param_1 + 0x219) == '\0') {
        if (param_1[0x14] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0x18);
            return;
          }
        }
      }
    }
    else if (*(char *)((longlong)param_1 + 0x221) == '\0') {
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_180239850(param_1 + 0x12);
          return;
        }
      }
    }
  }
  return;
}


/* address=18009fe60 name=FUN_18009fe60 */

void FUN_18009fe60(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0xac) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar4 = *(longlong **)(param_1 + 4);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180239850(param_1 + 4);
      }
    }
    plVar4 = (longlong *)(param_1 + 6);
    lVar5 = *plVar4;
    goto joined_r0x00018009ff6a;
  }
  if (*(char *)(param_1 + 0xac) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0xaa) == '\0') {
    if (param_1[0x18] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x1a));
    }
    plVar4 = *(longlong **)(param_1 + 0x1c);
    lVar5 = 0x18;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180239850(param_1 + 0x1c);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xaa) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x40);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0xa8) == '\x03') {
        if (*(char *)(param_1 + 0xa6) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x6a);
        }
        else if (*(char *)(param_1 + 0xa6) == '\0') {
          FUN_1800a6eb0(param_1 + 0x54);
        }
      }
      else if (*(char *)(param_1 + 0xa8) == '\0') {
        FUN_18001bb70(param_1 + 0x46);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x42),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x2a] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x2c));
        }
        plVar4 = *(longlong **)(param_1 + 0x2e);
        lVar5 = 0x60;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            FUN_180239850(param_1 + 0x2e);
          }
        }
        goto LAB_1800a0147;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x42);
      ppcVar3 = *(code ***)(param_1 + 0x44);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x4a) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x46),*(longlong *)(param_1 + 0x4a) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x101) != '\0') && (*(longlong *)(param_1 + 0x3c) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x3c),1);
    }
    *(undefined *)((longlong)param_1 + 0x101) = 0;
    if (param_1[0x2a] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x2c));
    }
    plVar4 = *(longlong **)(param_1 + 0x2e);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180239850(param_1 + 0x2e);
      }
    }
    lVar5 = 0x60;
    if (*(char *)((longlong)param_1 + 0x102) == '\0') {
      return;
    }
  }
LAB_1800a0147:
  plVar4 = (longlong *)((longlong)(param_1 + 0x18) + lVar5);
  lVar5 = *plVar4;
joined_r0x00018009ff6a:
  if (lVar5 != 0) {
    thunk_FUN_1803e4c80(plVar4[1],lVar5,1);
  }
  lVar5 = plVar4[3];
  if ((lVar5 != -1) && (lVar5 != 0)) {
    thunk_FUN_1803e4c80(plVar4[4],lVar5,1);
    return;
  }
  return;
}


/* address=1800a0480 name=FUN_1800a0480 */

void FUN_1800a0480(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7e) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x7d) != '\x03') {
      if (*(char *)(param_1 + 0x7d) != '\0') {
        return;
      }
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x12);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x1f);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x7b) == '\x03') {
        if (*(char *)(param_1 + 0x78) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x3c);
        }
        else if (*(char *)(param_1 + 0x78) == '\0') {
          FUN_1800a6eb0(param_1 + 0x26);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x14] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800a06a8;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppcVar4 = *(code ***)(param_1 + 0x22);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x28) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x7d) != '\0') && (*(longlong *)(param_1 + 0x1a) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1a),1);
    }
    *(undefined *)((longlong)param_1 + 0x7d) = 0;
    if (param_1[0x14] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800a06a8:
        FUN_180239850(param_1 + 0x18);
        return;
      }
    }
  }
  return;
}


/* address=1800a08c0 name=FUN_1800a08c0 */

void FUN_1800a08c0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7e) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x7d) != '\x03') {
      if (*(char *)(param_1 + 0x7d) != '\0') {
        return;
      }
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x12);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x1f);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x7b) == '\x03') {
        FUN_1800a6090(param_1 + 0x26);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x14] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800a0ac5;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppcVar4 = *(code ***)(param_1 + 0x22);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x28) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x7d) != '\0') && (*(longlong *)(param_1 + 0x1a) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1a),1);
    }
    *(undefined *)((longlong)param_1 + 0x7d) = 0;
    if (param_1[0x14] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800a0ac5:
        FUN_180239850(param_1 + 0x18);
        return;
      }
    }
  }
  return;
}


/* address=1800a0ce0 name=FUN_1800a0ce0 */

void FUN_1800a0ce0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7e) != '\x03') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x1f1) != '\x03') {
      if (*(char *)((longlong)param_1 + 0x1f1) != '\0') {
        return;
      }
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x12);
      return;
    }
    cVar1 = *(char *)((longlong)param_1 + 0x79);
    if (cVar1 == '\x04') {
      if (*(char *)((longlong)param_1 + 0x1e9) == '\x03') {
        if (*(char *)(param_1 + 0x76) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x3a);
        }
        else if (*(char *)(param_1 + 0x76) == '\0') {
          FUN_1800a6eb0(param_1 + 0x24);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x14] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800a0f08;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppcVar4 = *(code ***)(param_1 + 0x22);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x28) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x7a) != '\0') && (*(longlong *)(param_1 + 0x1a) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1a),1);
    }
    *(undefined *)((longlong)param_1 + 0x7a) = 0;
    if (param_1[0x14] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800a0f08:
        FUN_180239850(param_1 + 0x18);
        return;
      }
    }
  }
  return;
}


/* address=1800a1120 name=FUN_1800a1120 */

void FUN_1800a1120(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7e) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x7c) != '\x03') {
      if (*(char *)(param_1 + 0x7c) != '\0') {
        return;
      }
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x12);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x1e);
    if (cVar1 == '\x04') {
      if (*(char *)((longlong)param_1 + 0x1e9) == '\x03') {
        if (*(char *)(param_1 + 0x76) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x3a);
        }
        else if (*(char *)(param_1 + 0x76) == '\0') {
          FUN_1800a6eb0(param_1 + 0x24);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x14] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800a1348;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppcVar4 = *(code ***)(param_1 + 0x22);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x28) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x7a) != '\0') && (*(longlong *)(param_1 + 0x1a) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1a),1);
    }
    *(undefined *)((longlong)param_1 + 0x7a) = 0;
    if (param_1[0x14] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800a1348:
        FUN_180239850(param_1 + 0x18);
        return;
      }
    }
  }
  return;
}


/* address=1800a1560 name=FUN_1800a1560 */

void FUN_1800a1560(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x1f8) != '\x03') {
    if (*(char *)(param_1 + 0x1f8) != '\0') {
      return;
    }
    FUN_18001ae80(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x1f1) == '\0') {
    if (*(int *)(param_1 + 0x50) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x58));
    }
    plVar2 = *(longlong **)(param_1 + 0x60);
    lVar5 = 0x68;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x60);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x1f1) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xc1);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x1d9) == '\x03') {
        FUN_1800a5fc0(param_1 + 0xe8);
      }
      else if ((*(char *)(param_1 + 0x1d9) == '\0') && (*(longlong *)(param_1 + 200) != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 200),1);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x1e0),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x80) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
        }
        plVar2 = *(longlong **)(param_1 + 0x90);
        lVar5 = 0x98;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0x90);
          }
        }
        goto LAB_1800a17b9;
      }
      uVar3 = *(undefined8 *)(param_1 + 200);
      ppcVar4 = *(code ***)(param_1 + 0xd0);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd8),*(longlong *)(param_1 + 0xe8) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xc2) != '\0') && (*(longlong *)(param_1 + 0xb0) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xb0),1);
    }
    *(undefined *)(param_1 + 0xc2) = 0;
    if (*(int *)(param_1 + 0x80) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
    }
    plVar2 = *(longlong **)(param_1 + 0x90);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x90);
      }
    }
    lVar5 = 0x98;
    if (*(char *)(param_1 + 0xc3) == '\0') {
      return;
    }
  }
LAB_1800a17b9:
  if (*(longlong *)(param_1 + lVar5) == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8 + lVar5),*(longlong *)(param_1 + lVar5),1);
  return;
}


/* address=1800a1ac0 name=FUN_1800a1ac0 */

void FUN_1800a1ac0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x9c) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x9c) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x9a) != '\x03') {
      if (*(char *)(param_1 + 0x9a) != '\0') {
        return;
      }
      if (param_1[0x14] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
      }
      plVar2 = *(longlong **)(param_1 + 0x18);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x18);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x34);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x98) == '\x03') {
        if (*(char *)(param_1 + 0x96) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x5a);
        }
        else if (*(char *)(param_1 + 0x96) == '\0') {
          FUN_1800a6eb0(param_1 + 0x44);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x36),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x22] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x24));
        }
        plVar2 = *(longlong **)(param_1 + 0x26);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800a1d06;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x36);
      ppcVar4 = *(code ***)(param_1 + 0x38);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x3e) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x3a),*(longlong *)(param_1 + 0x3e) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0xd1) != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x30),1);
    }
    *(undefined *)((longlong)param_1 + 0xd1) = 0;
    if (param_1[0x22] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x24));
    }
    plVar2 = *(longlong **)(param_1 + 0x26);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800a1d06:
        FUN_180239850(param_1 + 0x26);
        return;
      }
    }
  }
  return;
}


/* address=1800a1f20 name=FUN_1800a1f20 */

void FUN_1800a1f20(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x250) != '\x03') {
    if (*(char *)(param_1 + 0x250) != '\0') {
      return;
    }
    FUN_18001ae80(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x248) == '\0') {
    if (*(int *)(param_1 + 0x48) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x50));
    }
    plVar2 = *(longlong **)(param_1 + 0x58);
    lVar5 = 0x60;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x58);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x248) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xb8);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x230) == '\x03') {
        if (*(char *)(param_1 + 0x228) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x138);
        }
        else if (*(char *)(param_1 + 0x228) == '\0') {
          FUN_1800a6eb0(param_1 + 0xe0);
        }
      }
      else if ((*(char *)(param_1 + 0x230) == '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 200),*(longlong *)(param_1 + 0xc0),1);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x238),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (*(int *)(param_1 + 0x78) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
        }
        plVar2 = *(longlong **)(param_1 + 0x88);
        lVar5 = 0x90;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0x88);
          }
        }
        goto LAB_1800a2196;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
    }
    if ((*(char *)(param_1 + 0xb9) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xb9) = 0;
    if (*(int *)(param_1 + 0x78) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
    }
    plVar2 = *(longlong **)(param_1 + 0x88);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x88);
      }
    }
    lVar5 = 0x90;
    if (*(char *)(param_1 + 0xba) == '\0') {
      return;
    }
  }
LAB_1800a2196:
  if (*(longlong *)(param_1 + lVar5) == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8 + lVar5),*(longlong *)(param_1 + lVar5),1);
  return;
}


/* address=1800a24a0 name=FUN_1800a24a0 */

void FUN_1800a24a0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7e) != '\x03') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x1f2) != '\x03') {
      if (*(char *)((longlong)param_1 + 0x1f2) != '\0') {
        return;
      }
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x12);
      return;
    }
    cVar1 = *(char *)((longlong)param_1 + 0x7a);
    if (cVar1 == '\x04') {
      if (*(char *)((longlong)param_1 + 0x1ea) == '\x03') {
        if (*(char *)(param_1 + 0x78) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x3c);
        }
        else if (*(char *)(param_1 + 0x78) == '\0') {
          FUN_1800a6eb0(param_1 + 0x26);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x14] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800a26c8;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppcVar4 = *(code ***)(param_1 + 0x22);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x28) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x7b) != '\0') && (*(longlong *)(param_1 + 0x1a) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1a),1);
    }
    *(undefined *)((longlong)param_1 + 0x7b) = 0;
    if (param_1[0x14] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800a26c8:
        FUN_180239850(param_1 + 0x18);
        return;
      }
    }
  }
  return;
}


/* address=1800a28e0 name=FUN_1800a28e0 */

void FUN_1800a28e0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *local_38;
  
  if (*(char *)(param_1 + 0x2b0) != '\x03') {
    if (*(char *)(param_1 + 0x2b0) != '\0') {
      return;
    }
    FUN_18001af80();
    return;
  }
  if (*(char *)(param_1 + 0x2a8) == '\0') {
    if (*(int *)(param_1 + 0x60) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x68));
    }
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x70);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x78);
    if ((lVar5 != -1) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x80),lVar5,1);
    }
    if (*(longlong *)(param_1 + 0x90) == -1) {
      return;
    }
    local_38 = (longlong *)(param_1 + 0x90);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + 8);
      do {
        if (puVar6[-1] != 0) {
          thunk_FUN_1803e4c80(*puVar6,puVar6[-1],1);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    goto LAB_1800a2c7f;
  }
  if (*(char *)(param_1 + 0x2a8) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x100);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x2a0) == '\x03') {
      FUN_1800a6090(param_1 + 0x150);
    }
    else if (*(char *)(param_1 + 0x2a0) == '\0') {
      lVar5 = *(longlong *)(param_1 + 0x118);
      if ((lVar5 != -1) && (lVar5 != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x120),lVar5,1);
      }
      if (*(longlong *)(param_1 + 0x130) != -1) {
        FUN_18024e6d0();
        if (*(longlong *)(param_1 + 0x130) != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x138),*(longlong *)(param_1 + 0x130) * 0x18
                              ,8);
        }
      }
    }
    FUN_1803aa820(*(undefined8 *)(param_1 + 0x108),1);
LAB_1800a2bb2:
    if ((*(char *)(param_1 + 0x101) != '\0') && (*(longlong *)(param_1 + 0xf0) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xf0),1);
    }
    *(undefined *)(param_1 + 0x101) = 0;
    if (*(int *)(param_1 + 0xa8) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
    }
    plVar2 = *(longlong **)(param_1 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xb8);
      }
    }
    if (((*(char *)(param_1 + 0x103) != '\0') &&
        (lVar5 = *(longlong *)(param_1 + 0xc0), lVar5 != -1)) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 200),lVar5,1);
    }
    if (*(char *)(param_1 + 0x102) == '\0') {
      return;
    }
    if (*(longlong *)(param_1 + 0xd8) == -1) {
      return;
    }
    FUN_18024e6d0();
  }
  else {
    if (cVar1 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0x108);
      ppcVar4 = *(code ***)(param_1 + 0x110);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x128) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x118),*(longlong *)(param_1 + 0x128) << 3,8);
      }
      goto LAB_1800a2bb2;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0xa8) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
    }
    plVar2 = *(longlong **)(param_1 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0xb8);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0xc0);
    if ((lVar5 != -1) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 200),lVar5,1);
    }
    if (*(longlong *)(param_1 + 0xd8) == -1) {
      return;
    }
    FUN_18024e6d0();
  }
  local_38 = (longlong *)(param_1 + 0xd8);
LAB_1800a2c7f:
  if (*local_38 == 0) {
    return;
  }
  thunk_FUN_1803e4c80(local_38[1],*local_38 * 0x18,8);
  return;
}


/* address=1800a3110 name=FUN_1800a3110 */

void FUN_1800a3110(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x82) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x82) != '\x03') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x201) != '\x03') {
      if (*(char *)((longlong)param_1 + 0x201) != '\0') {
        return;
      }
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x12);
      return;
    }
    cVar1 = *(char *)((longlong)param_1 + 0x79);
    if (cVar1 == '\x04') {
      if ((*(char *)(param_1 + 0x7e) == '\x03') && (*(char *)(param_1 + 0x7a) == '\x03')) {
        if (*(char *)(param_1 + 0x76) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x3a);
        }
        else if (*(char *)(param_1 + 0x76) == '\0') {
          FUN_1800a6eb0(param_1 + 0x24);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x14] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800a3349;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppcVar4 = *(code ***)(param_1 + 0x22);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x28) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x7a) != '\0') && (*(longlong *)(param_1 + 0x1a) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1a),1);
    }
    *(undefined *)((longlong)param_1 + 0x7a) = 0;
    if (param_1[0x14] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800a3349:
        FUN_180239850(param_1 + 0x18);
        return;
      }
    }
  }
  return;
}


/* address=1800a3560 name=FUN_1800a3560 */

void FUN_1800a3560(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  if (*(char *)(param_1 + 0x68) != '\x03') {
    if (*(char *)(param_1 + 0x68) != '\0') {
      return;
    }
    lVar4 = *param_1;
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_1803e4c80(param_1[1],lVar4,1);
    }
    plVar3 = (longlong *)param_1[3];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180397b10(param_1 + 3);
    }
    plVar3 = (longlong *)local_20[4];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 != 0) {
      return;
    }
    FUN_180397b10(local_20 + 4);
    return;
  }
  if (*(char *)(param_1 + 0x67) != '\x03') {
    if (*(char *)(param_1 + 0x67) != '\0') {
      return;
    }
    lVar4 = param_1[8];
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_1803e4c80(param_1[9],lVar4,1);
    }
    plVar3 = (longlong *)param_1[0xb];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180397b10(param_1 + 0xb);
    }
    plVar3 = (longlong *)local_20[0xc];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 != 0) {
      return;
    }
    FUN_180397b10(local_20 + 0xc);
    return;
  }
  if (*(char *)(param_1 + 0x66) != '\x03') {
    if (*(char *)(param_1 + 0x66) != '\0') {
      return;
    }
    lVar4 = param_1[0xd];
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_1803e4c80(param_1[0xe],lVar4,1);
    }
    plVar3 = (longlong *)param_1[0x10];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180397b10(param_1 + 0x10);
    }
    plVar3 = (longlong *)local_20[0x11];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 != 0) {
      return;
    }
    FUN_180397b10(local_20 + 0x11);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1e);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x4c) == '\x03') {
      if (*(char *)(param_1 + 0x4a) == '\x03') {
        FUN_1800a5fc0(param_1 + 0x2c);
      }
      else if (*(char *)(param_1 + 0x4a) == '\0') {
        FUN_1800a6eb0(param_1 + 0x21);
      }
    }
    *(undefined4 *)((longlong)local_20 + 0xf3) = 0;
    lVar4 = 0x67;
    FUN_18001b9c0(local_20 + 0x17);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      lVar4 = param_1[0x12];
      if ((lVar4 != -1) && (lVar4 != 0)) {
        thunk_FUN_1803e4c80(param_1[0x13],lVar4,1);
      }
      plVar3 = (longlong *)param_1[0x15];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180397b10(local_20 + 0x15);
      }
      plVar3 = (longlong *)local_20[0x16];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 != 0) {
        return;
      }
      FUN_180397b10(local_20 + 0x16);
      return;
    }
    if (*(char *)(param_1 + 0x65) != '\x03') {
      if (((*(char *)(param_1 + 0x65) == '\0') && (lVar4 = param_1[0x22], lVar4 != -1)) &&
         (lVar4 != 0)) {
        thunk_FUN_1803e4c80(param_1[0x23],lVar4,1);
      }
      goto LAB_1800a3864;
    }
    if (*(char *)((longlong)param_1 + 0x321) == '\x03') {
      if (*(char *)(param_1 + 0x62) == '\x03') {
        if (*(char *)(param_1 + 0x61) == '\x03') {
          if (*(char *)(param_1 + 0x60) == '\x03') {
            plVar3 = param_1 + 0x3a;
            if (*(char *)(param_1 + 0x5f) == '\x03') {
              local_28 = param_1 + 0x3a;
              FUN_18001bdd0(param_1 + 0x51);
              uVar2 = local_20[0x50];
              plVar3 = local_28;
              if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
                local_30 = uVar2 - 1;
                FUN_180404230(&local_30);
                plVar3 = local_28;
              }
            }
            FUN_18001bdd0(plVar3);
          }
          param_1 = local_20;
          if (local_20[0x34] != 0) {
            thunk_FUN_1803e4c80(local_20[0x35],local_20[0x34],1);
          }
        }
        plVar3 = (longlong *)param_1[0x2f];
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_18023a420(local_20 + 0x2f);
        }
      }
      else if (*(char *)(param_1 + 0x62) == '\0') {
        plVar3 = (longlong *)param_1[0x2e];
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_18023a420(param_1 + 0x2e);
        }
      }
      *(undefined *)(local_20 + 100) = 0;
    }
    else if (*(char *)((longlong)param_1 + 0x321) == '\0') {
      plVar3 = (longlong *)param_1[99];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18023a420(param_1 + 99);
      }
    }
    plVar3 = (longlong *)local_20[0x2b];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18023a420(local_20 + 0x2b);
    }
    plVar3 = (longlong *)local_20[0x2a];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    lVar4 = 0x299;
    if (*plVar3 == 0) {
      FUN_18023a340(local_20 + 0x2a);
    }
  }
  *(undefined *)((longlong)local_20 + lVar4 + 0x90) = 0;
  param_1 = local_20;
LAB_1800a3864:
  if (*(char *)((longlong)param_1 + 0xf1) != '\0') {
    plVar3 = (longlong *)local_20[0x21];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180397b10(local_20 + 0x21);
    }
  }
  *(undefined *)((longlong)local_20 + 0xf1) = 0;
  if (*(char *)((longlong)local_20 + 0xf2) != '\0') {
    plVar3 = (longlong *)local_20[0x20];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180397b10(local_20 + 0x20);
    }
  }
  *(undefined *)((longlong)local_20 + 0xf2) = 0;
  *(undefined *)(local_20 + 0x1f) = 0;
  return;
}


/* address=1800a3e10 name=FUN_1800a3e10 */

void FUN_1800a3e10(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x250) != '\x03') {
    if (*(char *)(param_1 + 0x250) != '\0') {
      return;
    }
    FUN_18001ac40();
    return;
  }
  if (*(char *)(param_1 + 0x248) == '\0') {
    if (*(int *)(param_1 + 0x48) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x50));
    }
    plVar2 = *(longlong **)(param_1 + 0x58);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x58);
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (lVar5 == -1) {
      return;
    }
    param_1 = param_1 + 0x60;
    if (lVar5 == 0) {
      return;
    }
    goto LAB_1800a40b3;
  }
  if (*(char *)(param_1 + 0x248) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0xb8);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x230) == '\x03') {
      if (*(char *)(param_1 + 0x228) == '\x03') {
        FUN_1800a5fc0(param_1 + 0x138);
      }
      else if (*(char *)(param_1 + 0x228) == '\0') {
        FUN_1800a6eb0(param_1 + 0xe0);
      }
    }
    else if (((*(char *)(param_1 + 0x230) == '\0') &&
             (lVar5 = *(longlong *)(param_1 + 0xc0), lVar5 != -1)) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 200),lVar5,1);
    }
    FUN_1803aa820(*(undefined8 *)(param_1 + 0x238),1);
LAB_1800a401d:
    if ((*(char *)(param_1 + 0xb9) != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xa8),1);
    }
    *(undefined *)(param_1 + 0xb9) = 0;
    if (*(int *)(param_1 + 0x78) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
    }
    plVar2 = *(longlong **)(param_1 + 0x88);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x88);
      }
    }
    if (*(char *)(param_1 + 0xba) != '\x01') {
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      ppcVar4 = *(code ***)(param_1 + 200);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xe0) << 3,8);
      }
      goto LAB_1800a401d;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x78) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
    }
    plVar2 = *(longlong **)(param_1 + 0x88);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x88);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x90);
  if ((lVar5 == -1) || (param_1 = param_1 + 0x90, lVar5 == 0)) {
    return;
  }
LAB_1800a40b3:
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar5,1);
  return;
}


/* address=1800a43a0 name=FUN_1800a43a0 */

void FUN_1800a43a0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x80) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x7e) != '\x03') {
      if (*(char *)(param_1 + 0x7e) != '\0') {
        return;
      }
      if (param_1[0xc] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe));
      }
      plVar2 = *(longlong **)(param_1 + 0x10);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x10);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x1c);
    if (cVar1 == '\x04') {
      if ((*(char *)(param_1 + 0x7c) == '\x03') && (*(char *)(param_1 + 0x7a) == '\x03')) {
        FUN_1800a6090(param_1 + 0x24);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x1e),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x12] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x14));
        }
        plVar2 = *(longlong **)(param_1 + 0x16);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800a45ac;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x1e);
      ppcVar4 = *(code ***)(param_1 + 0x20);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x26) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x22),*(longlong *)(param_1 + 0x26) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x71) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x18),1);
    }
    *(undefined *)((longlong)param_1 + 0x71) = 0;
    if (param_1[0x12] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x14));
    }
    plVar2 = *(longlong **)(param_1 + 0x16);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800a45ac:
        FUN_180239850(param_1 + 0x16);
        return;
      }
    }
  }
  return;
}


/* address=1800a47c0 name=FUN_1800a47c0 */

void FUN_1800a47c0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x9e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802de5f0(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239c40(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x9e) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x9c) != '\x03') {
      if (*(char *)(param_1 + 0x9c) != '\0') {
        return;
      }
      if (param_1[0xc] == 1) {
        FUN_1802de5f0(*(undefined8 *)(param_1 + 0xe));
      }
      plVar2 = *(longlong **)(param_1 + 0x10);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239c40(param_1 + 0x10);
      return;
    }
    cVar1 = *(char *)(param_1 + 0x1c);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x96) == '\x03') {
        FUN_18001b100(param_1 + 0x20);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x98),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x12] == 1) {
          FUN_1802de5f0(*(undefined8 *)(param_1 + 0x14));
        }
        plVar2 = *(longlong **)(param_1 + 0x16);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800a49c2;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x1e);
      ppcVar4 = *(code ***)(param_1 + 0x20);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x26) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x22),*(longlong *)(param_1 + 0x26) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x71) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x18),1);
    }
    *(undefined *)((longlong)param_1 + 0x71) = 0;
    if (param_1[0x12] == 1) {
      FUN_1802de5f0(*(undefined8 *)(param_1 + 0x14));
    }
    plVar2 = *(longlong **)(param_1 + 0x16);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800a49c2:
        FUN_180239c40(param_1 + 0x16);
        return;
      }
    }
  }
  return;
}


/* address=1800a4be0 name=FUN_1800a4be0 */

void FUN_1800a4be0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*(char *)(param_1 + 0x7e) == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar2 = *(longlong **)(param_1 + 4);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 4);
        return;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x7e) != '\x03') {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x1f2) != '\x03') {
      if (*(char *)((longlong)param_1 + 0x1f2) != '\0') {
        return;
      }
      if (param_1[0xe] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x10));
      }
      plVar2 = *(longlong **)(param_1 + 0x12);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        return;
      }
      FUN_180239850(param_1 + 0x12);
      return;
    }
    cVar1 = *(char *)((longlong)param_1 + 0x7a);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x7a) == '\x03') {
        if (*(char *)(param_1 + 0x76) == '\x03') {
          FUN_1800a5fc0(param_1 + 0x3a);
        }
        else if (*(char *)(param_1 + 0x76) == '\0') {
          FUN_1800a6eb0(param_1 + 0x24);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        if (param_1[0x14] == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
        }
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 != 0) {
          return;
        }
        goto LAB_1800a4e08;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      ppcVar4 = *(code ***)(param_1 + 0x22);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x28) << 3,8);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x7b) != '\0') && (*(longlong *)(param_1 + 0x1a) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x1a),1);
    }
    *(undefined *)((longlong)param_1 + 0x7b) = 0;
    if (param_1[0x14] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x16));
    }
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
LAB_1800a4e08:
        FUN_180239850(param_1 + 0x18);
        return;
      }
    }
  }
  return;
}


/* address=1800a5020 name=FUN_1800a5020 */

void FUN_1800a5020(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x298) == '\x03') {
    if (*(char *)(param_1 + 0x291) == '\x03') {
      if (*(char *)(param_1 + 0x289) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x109);
        if (cVar1 == '\x04') {
          if (*(char *)(param_1 + 0x281) == '\x03') {
            if (*(char *)(param_1 + 0x278) == '\x03') {
              FUN_1800a5fc0(param_1 + 0x188);
            }
            else if (*(char *)(param_1 + 0x278) == '\0') {
              FUN_1800a6eb0(param_1 + 0x130);
            }
          }
          else if ((*(char *)(param_1 + 0x281) == '\0') && (*(longlong *)(param_1 + 0x110) != 0)) {
            thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x118),*(longlong *)(param_1 + 0x110),1);
          }
          FUN_1803aa820(*(undefined8 *)(param_1 + 0xf8),1);
        }
        else {
          if (cVar1 != '\x03') {
            if (cVar1 != '\0') {
              return;
            }
            if (*(int *)(param_1 + 0xb0) == 1) {
              FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb8));
            }
            plVar2 = *(longlong **)(param_1 + 0xc0);
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                FUN_180239850(param_1 + 0xc0);
              }
            }
            lVar4 = *(longlong *)(param_1 + 200);
            if (lVar4 == 0) {
              return;
            }
            uVar3 = *(undefined8 *)(param_1 + 0xd0);
            goto LAB_1800a512a;
          }
          if (((*(char *)(param_1 + 400) == '\x03') && (*(char *)(param_1 + 0x188) == '\x03')) &&
             (*(char *)(param_1 + 0x180) == '\x03')) {
            FUN_1803abc90(param_1 + 0x140);
            if (*(longlong *)(param_1 + 0x148) != 0) {
              (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))(*(undefined8 *)(param_1 + 0x150))
              ;
            }
          }
        }
        if ((*(char *)(param_1 + 0x10b) != '\0') && (*(longlong *)(param_1 + 0x110) != 0)) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x118),*(longlong *)(param_1 + 0x110),1);
        }
        *(undefined *)(param_1 + 0x10b) = 0;
        if (*(int *)(param_1 + 0xe0) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe8));
        }
        plVar2 = *(longlong **)(param_1 + 0xf0);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0xf0);
            return;
          }
        }
      }
      else if (*(char *)(param_1 + 0x289) == '\0') {
        if (*(int *)(param_1 + 0x80) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x88));
        }
        plVar2 = *(longlong **)(param_1 + 0x90);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0x90);
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x98);
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0xa0);
LAB_1800a512a:
          thunk_FUN_1803e4c80(uVar3,lVar4,1);
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x291) == '\0') {
      if (*(int *)(param_1 + 0x50) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x58));
      }
      plVar2 = *(longlong **)(param_1 + 0x60);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_180239850(param_1 + 0x60);
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x68);
      if (lVar4 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x70);
        goto LAB_1800a512a;
      }
    }
  }
  else if (*(char *)(param_1 + 0x298) == '\0') {
    FUN_18001ae80();
    return;
  }
  return;
}


/* address=1800a55e0 name=FUN_1800a55e0 */

void FUN_1800a55e0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x5c) == '\x03') {
    if (*(char *)(param_1 + 0x5b) == '\x03') {
      if (*(char *)(param_1 + 0x5a) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x13);
        if (cVar1 == '\x04') {
          FUN_18001b100(param_1 + 0x1f);
          FUN_18001bbc0(param_1 + 0x14);
          *(undefined2 *)((longlong)param_1 + 0x9a) = 0;
          *(undefined *)((longlong)param_1 + 0x9c) = 0;
        }
        else {
          if (cVar1 != '\x03') {
            if (cVar1 != '\0') {
              return;
            }
            if (param_1[0xf] != 0) {
              thunk_FUN_1803e4c80(param_1[0x10],param_1[0xf],1);
            }
            plVar2 = (longlong *)param_1[0x12];
            LOCK();
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 != 0) {
              return;
            }
            FUN_180397b10(param_1 + 0x12);
            return;
          }
          FUN_1802cfc00(param_1 + 0x15);
        }
        *(undefined *)((longlong)param_1 + 0x9d) = 0;
        if (*(char *)((longlong)param_1 + 0x99) != '\0') {
          plVar2 = (longlong *)param_1[0x14];
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180397b10(param_1 + 0x14);
          }
        }
        *(undefined *)((longlong)param_1 + 0x99) = 0;
      }
      else if (*(char *)(param_1 + 0x5a) == '\0') {
        if (param_1[0xb] != 0) {
          thunk_FUN_1803e4c80(param_1[0xc],param_1[0xb],1);
        }
        plVar2 = (longlong *)param_1[0xe];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_180397b10(param_1 + 0xe);
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x5b) == '\0') {
      if (param_1[7] != 0) {
        thunk_FUN_1803e4c80(param_1[8],param_1[7],1);
      }
      plVar2 = (longlong *)param_1[10];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180397b10(param_1 + 10);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x5c) == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],*param_1,1);
    }
    plVar2 = (longlong *)param_1[3];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180397b10(param_1 + 3);
      return;
    }
  }
  return;
}


/* address=1800a58b0 name=FUN_1800a58b0 */

void FUN_1800a58b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x290) == '\x03') {
    if (*(char *)(param_1 + 0x288) == '\x03') {
      if (*(char *)(param_1 + 0x280) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x100);
        if (cVar1 == '\x04') {
          if (*(char *)(param_1 + 0x278) == '\x03') {
            if (*(char *)(param_1 + 0x270) == '\x03') {
              FUN_1800a5fc0(param_1 + 0x180);
            }
            else if (*(char *)(param_1 + 0x270) == '\0') {
              FUN_1800a6eb0(param_1 + 0x128);
            }
          }
          else if ((*(char *)(param_1 + 0x278) == '\0') && (*(longlong *)(param_1 + 0x108) != 0)) {
            thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x110),*(longlong *)(param_1 + 0x108),1);
          }
          FUN_1803aa820(*(undefined8 *)(param_1 + 0xf0),1);
        }
        else {
          if (cVar1 != '\x03') {
            if (cVar1 != '\0') {
              return;
            }
            if (*(int *)(param_1 + 0xa8) == 1) {
              FUN_1802dfb40(*(undefined8 *)(param_1 + 0xb0));
            }
            plVar2 = *(longlong **)(param_1 + 0xb8);
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                FUN_180239850(param_1 + 0xb8);
              }
            }
            lVar4 = *(longlong *)(param_1 + 0xc0);
            if (lVar4 == 0) {
              return;
            }
            uVar3 = *(undefined8 *)(param_1 + 200);
            goto LAB_1800a59b7;
          }
          if (((*(char *)(param_1 + 0x188) == '\x03') && (*(char *)(param_1 + 0x180) == '\x03')) &&
             (*(char *)(param_1 + 0x178) == '\x03')) {
            FUN_1803abc90(param_1 + 0x138);
            if (*(longlong *)(param_1 + 0x140) != 0) {
              (**(code **)(*(longlong *)(param_1 + 0x140) + 0x18))(*(undefined8 *)(param_1 + 0x148))
              ;
            }
          }
        }
        if ((*(char *)(param_1 + 0x101) != '\0') && (*(longlong *)(param_1 + 0x108) != 0)) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x110),*(longlong *)(param_1 + 0x108),1);
        }
        *(undefined *)(param_1 + 0x101) = 0;
        if (*(int *)(param_1 + 0xd8) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe0));
        }
        plVar2 = *(longlong **)(param_1 + 0xe8);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0xe8);
            return;
          }
        }
      }
      else if (*(char *)(param_1 + 0x280) == '\0') {
        if (*(int *)(param_1 + 0x78) == 1) {
          FUN_1802dfb40(*(undefined8 *)(param_1 + 0x80));
        }
        plVar2 = *(longlong **)(param_1 + 0x88);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            FUN_180239850(param_1 + 0x88);
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x90);
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x98);
LAB_1800a59b7:
          thunk_FUN_1803e4c80(uVar3,lVar4,1);
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x288) == '\0') {
      if (*(int *)(param_1 + 0x48) == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 0x50));
      }
      plVar2 = *(longlong **)(param_1 + 0x58);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_180239850(param_1 + 0x58);
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x60);
      if (lVar4 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x68);
        goto LAB_1800a59b7;
      }
    }
  }
  else if (*(char *)(param_1 + 0x290) == '\0') {
    FUN_18001ae80();
    return;
  }
  return;
}


/* address=1800a5e70 name=FUN_1800a5e70 */

void FUN_1800a5e70(longlong *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x16) == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],*param_1,1);
    }
    plVar1 = (longlong *)param_1[3];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180397b10(param_1 + 3);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x16) == '\x03') {
    if (*(char *)(param_1 + 0x15) == '\x03') {
      if (*(char *)(param_1 + 0x14) == '\x03') {
        if (*(char *)(param_1 + 0x13) == '\0') {
          if (param_1[0xf] != 0) {
            thunk_FUN_1803e4c80(param_1[0x10],param_1[0xf],1);
          }
          plVar1 = (longlong *)param_1[0x12];
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            FUN_180397b10(param_1 + 0x12);
            return;
          }
        }
      }
      else if (*(char *)(param_1 + 0x14) == '\0') {
        if (param_1[0xb] != 0) {
          thunk_FUN_1803e4c80(param_1[0xc],param_1[0xb],1);
        }
        plVar1 = (longlong *)param_1[0xe];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_180397b10(param_1 + 0xe);
          return;
        }
      }
    }
    else if (*(char *)(param_1 + 0x15) == '\0') {
      if (param_1[7] != 0) {
        thunk_FUN_1803e4c80(param_1[8],param_1[7],1);
      }
      plVar1 = (longlong *)param_1[10];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180397b10(param_1 + 10);
        return;
      }
    }
  }
  return;
}


/* address=1800a5fc0 name=FUN_1800a5fc0 */

void FUN_1800a5fc0(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    FUN_1800a6eb0(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xe8) == '\x03') {
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    ppcVar2 = *(code ***)(param_1 + 0xe0);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(uVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
    }
    FUN_18001bdd0(param_1 + 0x68);
    return;
  }
  return;
}


/* address=1800a6090 name=FUN_1800a6090 */

void FUN_1800a6090(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*(char *)(param_1 + 0x148) == '\0') {
LAB_1800a60c6:
    FUN_1800a6eb0(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x148) == '\x03') {
    if (*(char *)(param_1 + 0x140) == '\x03') {
      uVar1 = *(undefined8 *)(param_1 + 0x130);
      ppcVar2 = *(code ***)(param_1 + 0x138);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(uVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
      }
      FUN_18001bdd0(param_1 + 0xc0);
      return;
    }
    if (*(char *)(param_1 + 0x140) == '\0') {
      param_1 = param_1 + 0x68;
      goto LAB_1800a60c6;
    }
  }
  return;
}


/* address=1800a6170 name=FUN_1800a6170 */

void FUN_1800a6170(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 800) == '\0') {
    if (*(int *)(param_1 + 0x10) == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0x18));
    }
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180239850(param_1 + 0x20);
      }
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x28),1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((lVar2 != -1) && (lVar2 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x48),lVar2,1);
      return;
    }
  }
  else if (*(char *)(param_1 + 800) == '\x03') {
    FUN_18009fe60(param_1 + 0x68);
    return;
  }
  return;
}


/* address=1800a62a0 name=FUN_1800a62a0 */

void FUN_1800a62a0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  undefined8 local_28;
  code **local_20;
  
  cVar1 = *(char *)((longlong)param_1 + 0x89);
  if (cVar1 == '\0') {
    FUN_180347e30();
    plVar4 = (longlong *)param_1[0xf];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18023a1b0();
    }
    plVar4 = (longlong *)param_1[0x10];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18023a660(param_1 + 0x10);
    }
    local_28 = *param_1;
    local_20 = (code **)param_1[1];
    if (*local_20 != (code *)0x0) {
      (**local_20)(local_28);
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      uVar2 = param_1[0x15];
      ppcVar3 = (code **)param_1[0x16];
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (param_1[0x12] != 0) {
        thunk_FUN_1803e4c80(param_1[0x13],param_1[0x12],1);
      }
      *(undefined *)(param_1 + 0x11) = 0;
      FUN_1800a6eb0(param_1 + 0x17);
    }
    FUN_180347e30();
    plVar4 = (longlong *)param_1[0xf];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18023a1b0();
    }
    plVar4 = (longlong *)param_1[0x10];
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18023a660(param_1 + 0x10);
    }
    local_28 = *param_1;
    local_20 = (code **)param_1[1];
    if (*local_20 != (code *)0x0) {
      (**local_20)(local_28);
    }
  }
  if (local_20[1] == (code *)0x0) {
    return;
  }
  thunk_FUN_1803e4c80(local_28,local_20[1],local_20[2]);
  return;
}


/* address=1800a66f0 name=FUN_1800a66f0 */

void FUN_1800a66f0(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*param_1 == 1) {
    FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
  }
  plVar1 = *(longlong **)(param_1 + 4);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180239850(param_1 + 4);
    }
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6),1);
  }
  lVar2 = *(longlong *)(param_1 + 0xc);
  if ((lVar2 != -1) && (lVar2 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xe),lVar2,1);
    return;
  }
  return;
}


/* address=1800a6800 name=FUN_1800a6800 */

void FUN_1800a6800(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(param_1[1],lVar1,1);
  }
  plVar2 = (longlong *)param_1[3];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180397b10(param_1 + 3);
  }
  plVar2 = (longlong *)param_1[4];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180397b10(param_1 + 4);
    return;
  }
  return;
}


/* address=1800a68c0 name=FUN_1800a68c0 */

void FUN_1800a68c0(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],*param_1,1);
  }
  plVar1 = (longlong *)param_1[3];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180397b10(param_1 + 3);
    return;
  }
  return;
}


/* address=1800a6900 name=FUN_1800a6900 */

void FUN_1800a6900(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    if (*(char *)(param_1 + 0x68) == '\x03') {
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      ppcVar2 = *(code ***)(param_1 + 0x60);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(uVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
      }
      *(undefined2 *)(param_1 + 0x69) = 0;
      *(undefined *)(param_1 + 0x6b) = 0;
    }
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_180397b10(param_1 + 0x50);
  }
  FUN_1800a6bd0(param_1);
  return;
}


/* address=1800a6a00 name=FUN_1800a6a00 */

void FUN_1800a6a00(ulonglong *param_1)

{
  code **ppcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (*(char *)(param_1 + 0xc) != '\x03') {
      return;
    }
    uVar4 = param_1[10];
    ppcVar1 = (code **)param_1[0xb];
    if (*ppcVar1 != (code *)0x0) {
      (**ppcVar1)(uVar4);
    }
    if (ppcVar1[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(uVar4,ppcVar1[1],ppcVar1[2]);
    }
    *(undefined2 *)((longlong)param_1 + 0x61) = 0;
    *(undefined *)((longlong)param_1 + 99) = 0;
    return;
  }
  plVar2 = (longlong *)param_1[9];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180397b10(param_1 + 9);
  }
  uVar4 = *param_1;
  uVar3 = 9;
  if ((longlong)uVar4 < 0) {
    uVar3 = uVar4 ^ 0x8000000000000000;
  }
  lVar5 = 8;
  if (uVar3 < 0x11) {
    if ((0xec7fUL >> (uVar3 & 0x3f) & 1) != 0) {
      return;
    }
    if (uVar3 == 9) {
      if (uVar4 != 0) {
        thunk_FUN_1803e4c80(param_1[1],uVar4,1);
      }
      lVar5 = 0x30;
      if (param_1[3] != 0) {
        thunk_FUN_1803e4c80(param_1[4],param_1[3],1);
      }
    }
    else if (uVar3 == 0x10) {
      uVar4 = param_1[1];
      if (uVar4 == 0xffffffffffffffff) {
        return;
      }
      goto LAB_1800a6b19;
    }
  }
  uVar4 = *(ulonglong *)((longlong)param_1 + lVar5);
LAB_1800a6b19:
  if (uVar4 == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)((longlong)param_1 + lVar5 + 8),uVar4,1);
  return;
}


/* address=1800a6bd0 name=FUN_1800a6bd0 */

void FUN_1800a6bd0(byte *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (*param_1 - 1 < 2) {
    return;
  }
  if (*param_1 == 0) {
    if (*(int *)(param_1 + 8) != 9) {
      return;
    }
    plVar1 = *(longlong **)(param_1 + 0x18);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180392d90(param_1 + 0x18);
    }
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) {
      return;
    }
    FUN_180392d90(param_1 + 0x10);
    return;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x20);
  uVar2 = 0xb;
  if ((uVar4 ^ 0x8000000000000000) < 0xd) {
    uVar2 = uVar4 ^ 0x8000000000000000;
  }
  switch(uVar2) {
  case 4:
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar5[-1] != 0) {
          thunk_FUN_1803e4c80(*puVar5,puVar5[-1],1);
        }
        puVar5 = puVar5 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    break;
  case 5:
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar6 = *(longlong *)(param_1 + 0x18);
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar5[-1] != 0) {
          thunk_FUN_1803e4c80(*puVar5,puVar5[-1],1);
        }
        puVar5 = puVar5 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    break;
  case 6:
    uVar4 = *(ulonglong *)(param_1 + 8);
    if (uVar4 == 0xffffffffffffffff) {
      return;
    }
    if (uVar4 == 0) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    goto LAB_1800a6d59;
  default:
    goto switchD_1800a6c83_caseD_7;
  case 0xb:
    if (0xfffffffffffffffc < uVar4) {
      return;
    }
    if (uVar4 == 0) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
LAB_1800a6d59:
    uVar7 = 1;
    goto LAB_1800a6d5f;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
switchD_1800a6c83_caseD_7:
    return;
  }
  uVar4 = *(longlong *)(param_1 + 8) * 0x18;
  uVar7 = 8;
LAB_1800a6d5f:
  thunk_FUN_1803e4c80(lVar3,uVar4,uVar7);
  return;
}


/* address=1800a6db0 name=FUN_1800a6db0 */

void FUN_1800a6db0(longlong *param_1)

{
  ulonglong uVar1;
  longlong local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_1 == 1) {
    uVar1 = param_1[1];
    local_20 = param_1;
    if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
      local_28 = uVar1 - 1;
      FUN_180404230(&local_28);
      param_1 = local_20;
    }
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    thunk_FUN_1803e4c80(param_1[1],param_1[2],1);
  }
  thunk_FUN_1803e4c80(param_1,0x28,8);
  return;
}


/* address=1800a6e70 name=FUN_1800a6e70 */

void FUN_1800a6e70(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong local_8;
  
  uVar1 = *param_1;
  if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
    local_8 = uVar1 - 1;
    FUN_180404230(&local_8);
  }
  return;
}


/* address=1800a6eb0 name=FUN_1800a6eb0 */

void FUN_1800a6eb0(undefined *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  switch(*param_1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x27:
  case 0x28:
  case 0x2b:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x68:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
    goto switchD_1800a6ecc_caseD_0;
  default:
    lVar2 = *(longlong *)(param_1 + 8);
    break;
  case 0x25:
  case 0x26:
    FUN_18000c5b0(*(undefined8 *)(param_1 + 8));
    return;
  case 0x29:
  case 0x2a:
    FUN_18000c4e0(*(undefined8 *)(param_1 + 8));
    return;
  case 0x2c:
  case 0x2d:
    FUN_18000c550(*(undefined8 *)(param_1 + 8));
    return;
  case 0x41:
    FUN_1800015f0(param_1 + 0x28);
    return;
  case 0x48:
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 < 1) {
      return;
    }
    goto LAB_1800a6edd;
  case 0x54:
    lVar2 = *(longlong *)(param_1 + 8);
    if ((lVar2 != -1) && (lVar2 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),lVar2,1);
    }
    FUN_180001000(param_1 + 0x20);
    return;
  case 0x59:
    if (0 < *(longlong *)(param_1 + 0x20)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x20),1);
    }
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) {
      return;
    }
    FUN_1803789b0(param_1 + 8);
    return;
  case 0x5e:
    FUN_180001670(param_1 + 8);
    return;
  case 0x69:
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == -1) {
      return;
    }
  }
  if (lVar2 != 0) {
LAB_1800a6edd:
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),lVar2,1);
    return;
  }
switchD_1800a6ecc_caseD_0:
  return;
}


/* address=1800a6fd0 name=FUN_1800a6fd0 */

void FUN_1800a6fd0(longlong **param_1)

{
  longlong *plVar1;
  
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18023a420(param_1);
  }
  plVar1 = param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180239d70(param_1 + 1);
    return;
  }
  return;
}


/* address=1800a7050 name=FUN_1800a7050 */

void FUN_1800a7050(longlong param_1,code **param_2)

{
  if (param_1 != 0) {
    if (*param_2 != (code *)0x0) {
      (**param_2)(param_1);
    }
    if (param_2[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(param_1,param_2[1],param_2[2]);
      return;
    }
  }
  return;
}


/* address=1800a70f0 name=FUN_1800a70f0 */

void FUN_1800a70f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a7124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b03b0 + *(int *)(&DAT_1806b03b0 + (ulonglong)*(byte *)(param_1 + 0xd0) * 4)))
            ();
  return;
}


/* address=1800a73c0 name=FUN_1800a73c0 */

void FUN_1800a73c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a73f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b03c0 + *(int *)(&DAT_1806b03c0 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800a7690 name=FUN_1800a7690 */

void FUN_1800a7690(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a76c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b03d0 + *(int *)(&DAT_1806b03d0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800a7960 name=FUN_1800a7960 */

void FUN_1800a7960(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a7994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b03e0 + *(int *)(&DAT_1806b03e0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800a7c30 name=FUN_1800a7c30 */

void FUN_1800a7c30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a7c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b03f0 + *(int *)(&DAT_1806b03f0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800a7f00 name=FUN_1800a7f00 */

void FUN_1800a7f00(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0400 + *(int *)(&DAT_1806b0400 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800a81d0 name=FUN_1800a81d0 */

void FUN_1800a81d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a8204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0410 + *(int *)(&DAT_1806b0410 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800a84a0 name=FUN_1800a84a0 */

void FUN_1800a84a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a84d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0420 + *(int *)(&DAT_1806b0420 + (ulonglong)*(byte *)(param_1 + 0x2b8) * 4)))
            ();
  return;
}


/* address=1800a8780 name=FUN_1800a8780 */

void FUN_1800a8780(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a87b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0430 + *(int *)(&DAT_1806b0430 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800a8a50 name=FUN_1800a8a50 */

void FUN_1800a8a50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a8a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0440 + *(int *)(&DAT_1806b0440 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800a8d20 name=FUN_1800a8d20 */

void FUN_1800a8d20(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a8d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0450 + *(int *)(&DAT_1806b0450 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800a8ff0 name=FUN_1800a8ff0 */

void FUN_1800a8ff0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a9024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0460 + *(int *)(&DAT_1806b0460 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800a92c0 name=FUN_1800a92c0 */

void FUN_1800a92c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a92f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0470 + *(int *)(&DAT_1806b0470 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800a9590 name=FUN_1800a9590 */

void FUN_1800a9590(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a95c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0480 + *(int *)(&DAT_1806b0480 + (ulonglong)*(byte *)(param_1 + 0x380) * 4)))
            ();
  return;
}


/* address=1800a9890 name=FUN_1800a9890 */

void FUN_1800a9890(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a98c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0490 + *(int *)(&DAT_1806b0490 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800a9b60 name=FUN_1800a9b60 */

void FUN_1800a9b60(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a9b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b04a0 + *(int *)(&DAT_1806b04a0 + (ulonglong)*(byte *)(param_1 + 600) * 4)))()
  ;
  return;
}


/* address=1800a9e30 name=FUN_1800a9e30 */

void FUN_1800a9e30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800a9e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b04b0 + *(int *)(&DAT_1806b04b0 + (ulonglong)*(byte *)(param_1 + 800) * 4)))()
  ;
  return;
}


/* address=1800aa120 name=FUN_1800aa120 */

void FUN_1800aa120(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800aa154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b04c0 + *(int *)(&DAT_1806b04c0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800aa3f0 name=FUN_1800aa3f0 */

void FUN_1800aa3f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800aa424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b04d0 + *(int *)(&DAT_1806b04d0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800aa6c0 name=FUN_1800aa6c0 */

void FUN_1800aa6c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800aa6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b04e0 + *(int *)(&DAT_1806b04e0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800aa990 name=FUN_1800aa990 */

void FUN_1800aa990(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800aa9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b04f0 + *(int *)(&DAT_1806b04f0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800aac60 name=FUN_1800aac60 */

void FUN_1800aac60(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800aac94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0500 + *(int *)(&DAT_1806b0500 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800aaf30 name=FUN_1800aaf30 */

void FUN_1800aaf30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800aaf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0510 + *(int *)(&DAT_1806b0510 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800ab200 name=FUN_1800ab200 */

void FUN_1800ab200(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ab234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0520 + *(int *)(&DAT_1806b0520 + (ulonglong)*(byte *)(param_1 + 0x290) * 4)))
            ();
  return;
}


/* address=1800ab4d0 name=FUN_1800ab4d0 */

void FUN_1800ab4d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ab504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0530 + *(int *)(&DAT_1806b0530 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800ab7a0 name=FUN_1800ab7a0 */

void FUN_1800ab7a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ab7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0540 + *(int *)(&DAT_1806b0540 + (ulonglong)*(byte *)(param_1 + 0x290) * 4)))
            ();
  return;
}


/* address=1800aba70 name=FUN_1800aba70 */

void FUN_1800aba70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800abaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0550 + *(int *)(&DAT_1806b0550 + (ulonglong)*(byte *)(param_1 + 0x2e0) * 4)))
            ();
  return;
}


/* address=1800abd50 name=FUN_1800abd50 */

void FUN_1800abd50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800abd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0560 + *(int *)(&DAT_1806b0560 + (ulonglong)*(byte *)(param_1 + 0x2b8) * 4)))
            ();
  return;
}


/* address=1800ac030 name=FUN_1800ac030 */

void FUN_1800ac030(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ac064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0570 + *(int *)(&DAT_1806b0570 + (ulonglong)*(byte *)(param_1 + 0x270) * 4)))
            ();
  return;
}


/* address=1800ac5f0 name=FUN_1800ac5f0 */

void FUN_1800ac5f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ac624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0590 + *(int *)(&DAT_1806b0590 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800ac8c0 name=FUN_1800ac8c0 */

void FUN_1800ac8c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ac8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b05a0 + *(int *)(&DAT_1806b05a0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800acb90 name=FUN_1800acb90 */

void FUN_1800acb90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800acbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b05b0 + *(int *)(&DAT_1806b05b0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800ace60 name=FUN_1800ace60 */

void FUN_1800ace60(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ace94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b05c0 + *(int *)(&DAT_1806b05c0 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800ad130 name=FUN_1800ad130 */

void FUN_1800ad130(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ad164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b05d0 + *(int *)(&DAT_1806b05d0 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800ad400 name=FUN_1800ad400 */

void FUN_1800ad400(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ad434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b05e0 + *(int *)(&DAT_1806b05e0 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800ad6d0 name=FUN_1800ad6d0 */

void FUN_1800ad6d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ad704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b05f0 + *(int *)(&DAT_1806b05f0 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800ad9a0 name=FUN_1800ad9a0 */

void FUN_1800ad9a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ad9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0600 + *(int *)(&DAT_1806b0600 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800adc70 name=FUN_1800adc70 */

void FUN_1800adc70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800adca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0610 + *(int *)(&DAT_1806b0610 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800adf40 name=FUN_1800adf40 */

void FUN_1800adf40(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800adf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0620 + *(int *)(&DAT_1806b0620 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800ae210 name=FUN_1800ae210 */

void FUN_1800ae210(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ae244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0630 + *(int *)(&DAT_1806b0630 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800ae4e0 name=FUN_1800ae4e0 */

void FUN_1800ae4e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ae514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0640 + *(int *)(&DAT_1806b0640 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800ae7b0 name=FUN_1800ae7b0 */

void FUN_1800ae7b0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ae7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0650 + *(int *)(&DAT_1806b0650 + (ulonglong)*(byte *)(param_1 + 800) * 4)))()
  ;
  return;
}


/* address=1800aeaa0 name=FUN_1800aeaa0 */

void FUN_1800aeaa0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800aead4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0660 + *(int *)(&DAT_1806b0660 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800aed70 name=FUN_1800aed70 */

void FUN_1800aed70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800aeda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0670 + *(int *)(&DAT_1806b0670 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800af040 name=FUN_1800af040 */

void FUN_1800af040(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800af074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0680 + *(int *)(&DAT_1806b0680 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800af310 name=FUN_1800af310 */

void FUN_1800af310(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800af344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0690 + *(int *)(&DAT_1806b0690 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800af5e0 name=FUN_1800af5e0 */

void FUN_1800af5e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800af614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b06a0 + *(int *)(&DAT_1806b06a0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800afba0 name=FUN_1800afba0 */

void FUN_1800afba0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800afbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b06c0 + *(int *)(&DAT_1806b06c0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800afe70 name=FUN_1800afe70 */

void FUN_1800afe70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800afea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b06d0 + *(int *)(&DAT_1806b06d0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b0140 name=FUN_1800b0140 */

void FUN_1800b0140(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b0174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b06e0 + *(int *)(&DAT_1806b06e0 + (ulonglong)*(byte *)(param_1 + 0x2e0) * 4)))
            ();
  return;
}


/* address=1800b0420 name=FUN_1800b0420 */

void FUN_1800b0420(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b0454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b06f0 + *(int *)(&DAT_1806b06f0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b06f0 name=FUN_1800b06f0 */

void FUN_1800b06f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b0724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0700 + *(int *)(&DAT_1806b0700 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b09c0 name=FUN_1800b09c0 */

void FUN_1800b09c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b09f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0710 + *(int *)(&DAT_1806b0710 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b0c90 name=FUN_1800b0c90 */

void FUN_1800b0c90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b0cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0720 + *(int *)(&DAT_1806b0720 + (ulonglong)*(byte *)(param_1 + 600) * 4)))()
  ;
  return;
}


/* address=1800b0f70 name=FUN_1800b0f70 */

void FUN_1800b0f70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b0fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0730 + *(int *)(&DAT_1806b0730 + (ulonglong)*(byte *)(param_1 + 0x2d0) * 4)))
            ();
  return;
}


/* address=1800b1250 name=FUN_1800b1250 */

void FUN_1800b1250(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b1284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0740 + *(int *)(&DAT_1806b0740 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b1520 name=FUN_1800b1520 */

void FUN_1800b1520(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b1554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0750 + *(int *)(&DAT_1806b0750 + (ulonglong)*(byte *)(param_1 + 0x2a8) * 4)))
            ();
  return;
}


/* address=1800b17f0 name=FUN_1800b17f0 */

void FUN_1800b17f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b1824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0760 + *(int *)(&DAT_1806b0760 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b1ac0 name=FUN_1800b1ac0 */

void FUN_1800b1ac0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b1af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0770 + *(int *)(&DAT_1806b0770 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b1d90 name=FUN_1800b1d90 */

void FUN_1800b1d90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b1dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0780 + *(int *)(&DAT_1806b0780 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b2060 name=FUN_1800b2060 */

void FUN_1800b2060(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b2094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0790 + *(int *)(&DAT_1806b0790 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b2330 name=FUN_1800b2330 */

void FUN_1800b2330(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b2364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b07a0 + *(int *)(&DAT_1806b07a0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b2600 name=FUN_1800b2600 */

void FUN_1800b2600(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b2634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b07b0 + *(int *)(&DAT_1806b07b0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b28d0 name=FUN_1800b28d0 */

void FUN_1800b28d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b2904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b07c0 + *(int *)(&DAT_1806b07c0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b2e90 name=FUN_1800b2e90 */

void FUN_1800b2e90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b2ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b07e0 + *(int *)(&DAT_1806b07e0 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b3160 name=FUN_1800b3160 */

void FUN_1800b3160(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b3194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b07f0 + *(int *)(&DAT_1806b07f0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b3430 name=FUN_1800b3430 */

void FUN_1800b3430(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b3464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0800 + *(int *)(&DAT_1806b0800 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b3700 name=FUN_1800b3700 */

void FUN_1800b3700(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b3734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0810 + *(int *)(&DAT_1806b0810 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b39d0 name=FUN_1800b39d0 */

void FUN_1800b39d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b3a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0820 + *(int *)(&DAT_1806b0820 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b3ca0 name=FUN_1800b3ca0 */

void FUN_1800b3ca0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b3cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0830 + *(int *)(&DAT_1806b0830 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b3f70 name=FUN_1800b3f70 */

void FUN_1800b3f70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b3fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0840 + *(int *)(&DAT_1806b0840 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b4240 name=FUN_1800b4240 */

void FUN_1800b4240(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b4274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0850 + *(int *)(&DAT_1806b0850 + (ulonglong)*(byte *)(param_1 + 0x2a8) * 4)))
            ();
  return;
}


/* address=1800b4510 name=FUN_1800b4510 */

void FUN_1800b4510(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b4544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0860 + *(int *)(&DAT_1806b0860 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b47e0 name=FUN_1800b47e0 */

void FUN_1800b47e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b4814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0870 + *(int *)(&DAT_1806b0870 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b4ab0 name=FUN_1800b4ab0 */

void FUN_1800b4ab0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b4ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0880 + *(int *)(&DAT_1806b0880 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b4d80 name=FUN_1800b4d80 */

void FUN_1800b4d80(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b4db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0890 + *(int *)(&DAT_1806b0890 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b5340 name=FUN_1800b5340 */

void FUN_1800b5340(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b5374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b08b0 + *(int *)(&DAT_1806b08b0 + (ulonglong)*(byte *)(param_1 + 0x2a8) * 4)))
            ();
  return;
}


/* address=1800b5610 name=FUN_1800b5610 */

void FUN_1800b5610(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b5644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b08c0 + *(int *)(&DAT_1806b08c0 + (ulonglong)*(byte *)(param_1 + 0x2a8) * 4)))
            ();
  return;
}


/* address=1800b58e0 name=FUN_1800b58e0 */

void FUN_1800b58e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b5914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b08d0 + *(int *)(&DAT_1806b08d0 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b5bb0 name=FUN_1800b5bb0 */

void FUN_1800b5bb0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b5be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b08e0 + *(int *)(&DAT_1806b08e0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b5e80 name=FUN_1800b5e80 */

void FUN_1800b5e80(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b5eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b08f0 + *(int *)(&DAT_1806b08f0 + (ulonglong)*(byte *)(param_1 + 800) * 4)))()
  ;
  return;
}


/* address=1800b6170 name=FUN_1800b6170 */

void FUN_1800b6170(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b61a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0900 + *(int *)(&DAT_1806b0900 + (ulonglong)*(byte *)(param_1 + 0x250) * 4)))
            ();
  return;
}


/* address=1800b6440 name=FUN_1800b6440 */

void FUN_1800b6440(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b6474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0910 + *(int *)(&DAT_1806b0910 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b6710 name=FUN_1800b6710 */

void FUN_1800b6710(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b6744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0920 + *(int *)(&DAT_1806b0920 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b69e0 name=FUN_1800b69e0 */

void FUN_1800b69e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b6a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0930 + *(int *)(&DAT_1806b0930 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b6cb0 name=FUN_1800b6cb0 */

void FUN_1800b6cb0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b6ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0940 + *(int *)(&DAT_1806b0940 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b6f80 name=FUN_1800b6f80 */

void FUN_1800b6f80(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b6fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0950 + *(int *)(&DAT_1806b0950 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b7250 name=FUN_1800b7250 */

void FUN_1800b7250(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b7284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0960 + *(int *)(&DAT_1806b0960 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b7520 name=FUN_1800b7520 */

void FUN_1800b7520(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b7554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0970 + *(int *)(&DAT_1806b0970 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b77f0 name=FUN_1800b77f0 */

void FUN_1800b77f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b7824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0980 + *(int *)(&DAT_1806b0980 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b7ac0 name=FUN_1800b7ac0 */

void FUN_1800b7ac0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b7af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0990 + *(int *)(&DAT_1806b0990 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b7d90 name=FUN_1800b7d90 */

void FUN_1800b7d90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b7dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b09a0 + *(int *)(&DAT_1806b09a0 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b8060 name=FUN_1800b8060 */

void FUN_1800b8060(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b8094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b09b0 + *(int *)(&DAT_1806b09b0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b8330 name=FUN_1800b8330 */

void FUN_1800b8330(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b8364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b09c0 + *(int *)(&DAT_1806b09c0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b8600 name=FUN_1800b8600 */

void FUN_1800b8600(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b8634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b09d0 + *(int *)(&DAT_1806b09d0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b88d0 name=FUN_1800b88d0 */

void FUN_1800b88d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b8904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b09e0 + *(int *)(&DAT_1806b09e0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b8ba0 name=FUN_1800b8ba0 */

void FUN_1800b8ba0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b8bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b09f0 + *(int *)(&DAT_1806b09f0 + (ulonglong)*(byte *)(param_1 + 0x390) * 4)))
            ();
  return;
}


/* address=1800b8e70 name=FUN_1800b8e70 */

void FUN_1800b8e70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b8ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0a00 + *(int *)(&DAT_1806b0a00 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b9140 name=FUN_1800b9140 */

void FUN_1800b9140(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b9174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0a10 + *(int *)(&DAT_1806b0a10 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b9410 name=FUN_1800b9410 */

void FUN_1800b9410(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b9444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0a20 + *(int *)(&DAT_1806b0a20 + (ulonglong)*(byte *)(param_1 + 0x2a8) * 4)))
            ();
  return;
}


/* address=1800b96e0 name=FUN_1800b96e0 */

void FUN_1800b96e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b9714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0a30 + *(int *)(&DAT_1806b0a30 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800b99b0 name=FUN_1800b99b0 */

void FUN_1800b99b0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b99e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0a40 + *(int *)(&DAT_1806b0a40 + (ulonglong)*(byte *)(param_1 + 0x2a8) * 4)))
            ();
  return;
}


/* address=1800b9c80 name=FUN_1800b9c80 */

void FUN_1800b9c80(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b9cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0a50 + *(int *)(&DAT_1806b0a50 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800b9f50 name=FUN_1800b9f50 */

void FUN_1800b9f50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800b9f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0a60 + *(int *)(&DAT_1806b0a60 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800ba220 name=FUN_1800ba220 */

void FUN_1800ba220(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ba254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0a70 + *(int *)(&DAT_1806b0a70 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800ba4f0 name=FUN_1800ba4f0 */

void FUN_1800ba4f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ba524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0a80 + *(int *)(&DAT_1806b0a80 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800ba7c0 name=FUN_1800ba7c0 */

void FUN_1800ba7c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800ba7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0a90 + *(int *)(&DAT_1806b0a90 + (ulonglong)*(byte *)(param_1 + 0x2b8) * 4)))
            ();
  return;
}


/* address=1800baa90 name=FUN_1800baa90 */

void FUN_1800baa90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800baac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0aa0 + *(int *)(&DAT_1806b0aa0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800bad60 name=FUN_1800bad60 */

void FUN_1800bad60(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bad94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0ab0 + *(int *)(&DAT_1806b0ab0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800bb030 name=FUN_1800bb030 */

void FUN_1800bb030(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bb064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0ac0 + *(int *)(&DAT_1806b0ac0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800bb300 name=FUN_1800bb300 */

void FUN_1800bb300(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bb334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0ad0 + *(int *)(&DAT_1806b0ad0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800bb5d0 name=FUN_1800bb5d0 */

void FUN_1800bb5d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bb604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0ae0 + *(int *)(&DAT_1806b0ae0 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800bb8a0 name=FUN_1800bb8a0 */

void FUN_1800bb8a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bb8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0af0 + *(int *)(&DAT_1806b0af0 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800bbd50 name=FUN_1800bbd50 */

void FUN_1800bbd50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bbd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0b10 + *(int *)(&DAT_1806b0b10 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800bc020 name=FUN_1800bc020 */

void FUN_1800bc020(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bc054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0b20 + *(int *)(&DAT_1806b0b20 + (ulonglong)*(byte *)(param_1 + 0x2f8) * 4)))
            ();
  return;
}


/* address=1800bc7b0 name=FUN_1800bc7b0 */

void FUN_1800bc7b0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bc7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0b50 + *(int *)(&DAT_1806b0b50 + (ulonglong)*(byte *)(param_1 + 0x230) * 4)))
            ();
  return;
}


/* address=1800bca80 name=FUN_1800bca80 */

void FUN_1800bca80(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bcab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0b60 + *(int *)(&DAT_1806b0b60 + (ulonglong)*(byte *)(param_1 + 0x2e8) * 4)))
            ();
  return;
}


/* address=1800bcf30 name=FUN_1800bcf30 */

void FUN_1800bcf30(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bcf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0b80 + *(int *)(&DAT_1806b0b80 + (ulonglong)*(byte *)(param_1 + 0x240) * 4)))
            ();
  return;
}


/* address=1800be770 name=FUN_1800be770 */

void FUN_1800be770(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800be7af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0c1c + *(int *)(&DAT_1806b0c1c + (ulonglong)*(byte *)(param_1 + 0x30) * 4)))
            ();
  return;
}


/* address=1800bf200 name=FUN_1800bf200 */

void FUN_1800bf200(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bf242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0c2c + *(int *)(&DAT_1806b0c2c + (ulonglong)*(byte *)(param_1 + 0x89) * 4)))
            ();
  return;
}


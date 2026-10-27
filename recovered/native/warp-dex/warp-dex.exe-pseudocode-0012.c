/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=140d272e0 name=FUN_140d272e0 */

void FUN_140d272e0(void)

{
  return;
}


/* address=140d272f0 name=FUN_140d272f0 */

void FUN_140d272f0(void)

{
  return;
}


/* address=140d27300 name=FUN_140d27300 */

void FUN_140d27300(void)

{
  return;
}


/* address=140d27310 name=FUN_140d27310 */

void FUN_140d27310(void)

{
  return;
}


/* address=140d27320 name=FUN_140d27320 */

void FUN_140d27320(void)

{
  return;
}


/* address=140d27330 name=FUN_140d27330 */

void FUN_140d27330(void)

{
  return;
}


/* address=140d27340 name=FUN_140d27340 */

void FUN_140d27340(void)

{
  return;
}


/* address=140d27350 name=FUN_140d27350 */

void FUN_140d27350(void)

{
  return;
}


/* address=140d27360 name=FUN_140d27360 */

void FUN_140d27360(void)

{
  return;
}


/* address=140d27370 name=FUN_140d27370 */

void FUN_140d27370(void)

{
  return;
}


/* address=140d27380 name=FUN_140d27380 */

void FUN_140d27380(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  undefined auStack_58 [32];
  uint local_38;
  int local_34;
  longlong local_30;
  longlong local_28;
  undefined local_20 [4];
  byte bStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  undefined local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_58;
  if (((param_5 < 0x80000000) && (0x17 < param_5)) && (param_5 % 8 == 0)) {
    FUN_140d1d890(local_20,param_4,8);
    FUN_140d1d8e0(param_2,param_4 + 8,param_5 - 8);
    local_28 = param_5 / 8 - 1;
    local_38 = DAT_14104d228;
    while (local_38 = local_38 - 1, local_38 < DAT_14104d228) {
      for (local_30 = local_28; local_30 != 0; local_30 = local_30 + -1) {
        local_34 = (int)local_28 * local_38 + (int)local_30;
        bStack_19 = bStack_19 ^ (byte)local_34;
        bStack_1a = bStack_1a ^ (byte)((uint)local_34 >> 8);
        bStack_1b = bStack_1b ^ (byte)((uint)local_34 >> 0x10);
        bStack_1c = bStack_1c ^ (byte)((uint)local_34 >> 0x18);
        FUN_140d1d890(local_18,param_2 + -8 + local_30 * 8,8);
        FUN_140d1e110(local_20,local_20,param_1);
        FUN_140d1d890(param_2 + -8 + local_30 * 8,local_18,8);
      }
    }
    FUN_140e99d20(param_3,local_20,8);
  }
  FUN_140e28050(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=140d275e0 name=FUN_140d275e0 */

longlong FUN_140d275e0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140d76180(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d1d930(lVar1,0,0x18);
    *(undefined4 *)(lVar1 + 0x14) = 1;
  }
  return lVar1;
}


/* address=140d27630 name=FUN_140d27630 */

void FUN_140d27630(undefined8 param_1)

{
  FUN_140d1d930(param_1,0,0x18);
  return;
}


/* address=140d27660 name=FUN_140d27660 */

void FUN_140d27660(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
      FUN_140d762b0(*param_1);
    }
    if ((*(uint *)((longlong)param_1 + 0x14) & 1) == 0) {
      *param_1 = 0;
    }
    else {
      FUN_140d762b0(param_1);
    }
  }
  return;
}


/* address=140d276d0 name=FUN_140d276d0 */

void FUN_140d276d0(undefined8 param_1)

{
  FUN_140d27660(param_1);
  return;
}


/* address=140d276f0 name=FUN_140d276f0 */

longlong FUN_140d276f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140d275e0();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar2 = FUN_140d27750(lVar1,param_1);
      if (lVar2 == 0) {
        FUN_140d27660(lVar1);
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}


/* address=140d27750 name=FUN_140d27750 */

undefined8 * FUN_140d27750(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (param_2 != param_1) {
    iVar1 = FUN_140d2f730(param_1,(longlong)*(int *)(param_2 + 1));
    if (iVar1 == 0) {
      param_1 = (undefined8 *)0x0;
    }
    else {
      FUN_140d1d890(*param_1,*param_2,(longlong)*(int *)(param_2 + 1) << 3);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    }
  }
  return param_1;
}


/* address=140d27850 name=FUN_140d27850 */

void FUN_140d27850(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d402b0();
  FUN_140d89380(uVar1,&LAB_140d40310);
  FUN_140d402a0();
  return;
}


/* address=140d27880 name=FUN_140d27880 */

int FUN_140d27880(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_140d2f6a0(param_1);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_140d2f3c0(*(undefined8 *)(*param_1 + (longlong)(iVar1 + -1) * 8));
    iVar2 = (iVar1 + -1) * 0x40 + iVar2;
  }
  return iVar2;
}


/* address=140d278e0 name=FUN_140d278e0 */

ulonglong FUN_140d278e0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_140d27880(param_1);
  return (ulonglong)(iVar1 + 7) / 8;
}


/* address=140d27910 name=FUN_140d27910 */

void FUN_140d27910(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* address=140d27940 name=FUN_140d27940 */

void FUN_140d27940(undefined8 param_1)

{
  FUN_140d27970(param_1,1);
  return;
}


/* address=140d27970 name=FUN_140d27970 */

undefined8 FUN_140d27970(longlong **param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_140d27910(param_1);
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_140d2f730(param_1,1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 2) = 0;
      **param_1 = param_2;
      *(undefined4 *)(param_1 + 1) = 1;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d27a20 name=FUN_140d27a20 */

void FUN_140d27a20(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = FUN_140d29a20(param_1), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* address=140d27a70 name=FUN_140d27a70 */

bool FUN_140d27a70(longlong param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}


/* address=140d27ab0 name=FUN_140d27ab0 */

undefined8 * FUN_140d27ab0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *local_res18;
  undefined8 *local_18;
  undefined4 local_10;
  
  local_18 = (undefined8 *)0x0;
  local_res18 = param_3;
  if ((param_3 == (undefined8 *)0x0) &&
     (local_res18 = (undefined8 *)FUN_140d275e0(), local_18 = local_res18,
     local_res18 == (undefined8 *)0x0)) {
    local_res18 = (undefined8 *)0x0;
  }
  else if (param_2 == 0) {
    *(undefined4 *)(local_res18 + 1) = 0;
  }
  else {
    uVar2 = (param_2 - 1U) / 8 + 1;
    iVar1 = FUN_140d2f730(local_res18,uVar2);
    if (iVar1 == 0) {
      FUN_140d27660(local_18);
      local_res18 = (undefined8 *)0x0;
    }
    else {
      if (0x7fffffff < uVar2) {
        FID_conflict__assert((wchar_t *)s_n_1413c6f68,(wchar_t *)s_D_1413c6e90,0x6f);
      }
      local_10 = (undefined4)uVar2;
      *(undefined4 *)(local_res18 + 1) = local_10;
      *(undefined4 *)(local_res18 + 2) = 0;
      FUN_140d40040(*local_res18,(longlong)*(int *)(local_res18 + 1),param_1,param_2);
    }
  }
  return local_res18;
}


/* address=140d27bd0 name=FUN_140d27bd0 */

undefined4 FUN_140d27bd0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140d278e0(param_1);
  FUN_140d401a0(param_2,uVar1,*param_1,(longlong)*(int *)(param_1 + 1));
  return uVar1;
}


/* address=140d27df0 name=FUN_140d27df0 */

bool FUN_140d27df0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d40330(*param_3,(longlong)*(int *)(param_3 + 1),param_2);
  if (iVar1 != 0) {
    FUN_140d401a0(param_1,param_2,*param_3,(longlong)*(int *)(param_3 + 1));
  }
  return iVar1 != 0;
}


/* address=140d27ec0 name=FUN_140d27ec0 */

undefined8 FUN_140d27ec0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d2f6a0(param_1);
  if (iVar1 == 0) {
    *param_2 = 0;
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    *param_2 = *(undefined8 *)*param_1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d27f30 name=FUN_140d27f30 */

undefined8 * FUN_140d27f30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140d76180(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    FUN_140d40600(puVar1 + 1);
    puVar1[4] = 0;
    *(undefined *)(puVar1 + 5) = 0;
    *(undefined *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}


/* address=140d27fa0 name=FUN_140d27fa0 */

void FUN_140d27fa0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((param_1[4] != 0) && (*(char *)(param_1 + 5) == '\0')) {
      FID_conflict__assert((wchar_t *)s_c_1413c72a0,(wchar_t *)s_D_1413c71d0,0x83);
    }
    FUN_140d40890(*param_1,FUN_140d27660);
    FUN_140d40640(param_1 + 1);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d28030 name=FUN_140d28030 */

void FUN_140d28030(longlong param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (iVar1 = FUN_140d40670(param_1 + 8,*(undefined8 *)(param_1 + 0x20)), iVar1 == 0)) {
    *(undefined *)(param_1 + 0x28) = 1;
    *(undefined *)(param_1 + 0x29) = 1;
  }
  return;
}


/* address=140d28090 name=FUN_140d28090 */

undefined8 FUN_140d28090(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(char *)((longlong)param_1 + 0x29) != '\0') {
      FUN_140d186f0(3,0,0x74,s_D__a_1_s_target_release_build_bo_1413c72e0,0x9b);
      *(undefined *)((longlong)param_1 + 0x29) = 0;
    }
    return 0;
  }
  if (*param_1 == 0) {
    lVar1 = FUN_140d40820();
    *param_1 = lVar1;
    if (*param_1 == 0) {
      *(undefined *)(param_1 + 5) = 1;
      return 0;
    }
  }
  lVar1 = FUN_140d40840(*param_1);
  if ((param_1[4] == lVar1) &&
     ((lVar1 = FUN_140d275e0(), lVar1 == 0 || (lVar2 = FUN_140d408c0(*param_1,lVar1), lVar2 == 0))))
  {
    FUN_140d186f0(3,0,0x74,s_D__a_1_s_target_release_build_bo_1413c7350,0xac);
    FUN_140d27660(lVar1);
    *(undefined *)(param_1 + 5) = 1;
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_140d40860(*param_1,param_1[4]);
    FUN_140d27910(uVar3);
    param_1[4] = param_1[4] + 1;
  }
  return uVar3;
}


/* address=140d281e0 name=FUN_140d281e0 */

void FUN_140d281e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = FUN_140d40780(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return;
}


/* address=140d28220 name=FUN_140d28220 */

undefined4 FUN_140d28220(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res10;
  longlong local_res18;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == *(int *)(param_3 + 0x10)) {
    uVar2 = FUN_140d28320(param_1,param_2,param_3);
    *(int *)(param_1 + 0x10) = iVar1;
  }
  else {
    local_res10 = param_2;
    local_res18 = param_3;
    if (iVar1 != 0) {
      local_res10 = param_3;
      local_res18 = param_2;
    }
    iVar1 = FUN_140d29780(local_res10,local_res18);
    if (iVar1 < 0) {
      iVar1 = FUN_140d28650(param_1,local_res18,local_res10);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      iVar1 = FUN_140d28650(param_1,local_res10,local_res18);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d28320 name=FUN_140d28320 */

bool FUN_140d28320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d3d340(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_140d2f6f0(param_1);
  }
  return iVar1 != 0;
}


/* address=140d28370 name=FUN_140d28370 */

ulonglong FUN_140d28370(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong local_res10;
  int local_28;
  uint local_24;
  uint local_20;
  
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_140d29a20(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 2) == 0) {
        local_res10 = param_2;
        for (local_28 = 0; (local_res10 != 0 && (local_28 < *(int *)(param_1 + 1)));
            local_28 = local_28 + 1) {
          uVar3 = *(longlong *)(*param_1 + (longlong)local_28 * 8) + local_res10;
          *(ulonglong *)(*param_1 + (longlong)local_28 * 8) = uVar3;
          local_20 = (uint)(uVar3 < local_res10);
          local_res10 = (ulonglong)(int)local_20;
        }
        if ((local_res10 != 0) && (local_28 == *(int *)(param_1 + 1))) {
          iVar1 = FUN_140d2f730(param_1,(longlong)(*(int *)(param_1 + 1) + 1));
          if (iVar1 == 0) {
            return 0;
          }
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
          *(ulonglong *)(*param_1 + (longlong)local_28 * 8) = local_res10;
        }
        uVar3 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 2) = 0;
        uVar2 = FUN_140d286a0(param_1,param_2);
        iVar1 = FUN_140d29a20(param_1);
        if (iVar1 == 0) {
          local_24 = (uint)(*(int *)(param_1 + 2) == 0);
          *(uint *)(param_1 + 2) = local_24;
        }
        uVar3 = (ulonglong)uVar2;
      }
    }
    else {
      uVar3 = FUN_140d27970(param_1,param_2);
    }
  }
  return uVar3;
}


/* address=140d28510 name=FUN_140d28510 */

undefined8 FUN_140d28510(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong local_res10;
  longlong local_res18;
  uint local_14;
  
  bVar3 = false;
  local_14 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(int *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_3 + 0x10) != 0) {
      bVar3 = true;
      local_14 = 0;
    }
  }
  else {
    bVar3 = *(int *)(param_3 + 0x10) == 0;
    if (!bVar3) {
      local_res10 = param_3;
      local_res18 = param_2;
    }
    local_14 = (uint)bVar3;
  }
  if (bVar3) {
    iVar1 = FUN_140d28320(param_1,local_res10,local_res18);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(uint *)(param_1 + 0x10) = local_14;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_140d29780(local_res10,local_res18);
    if (iVar1 < 0) {
      iVar1 = FUN_140d28650(param_1,local_res18,local_res10);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      iVar1 = FUN_140d28650(param_1,local_res10,local_res18);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d28650 name=FUN_140d28650 */

bool FUN_140d28650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d3d4b0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_140d2f6f0(param_1);
  }
  return iVar1 != 0;
}


/* address=140d286a0 name=FUN_140d286a0 */

int FUN_140d286a0(ulonglong **param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong local_res10;
  int local_18;
  
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_140d29a20(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 2) == 0) {
        iVar1 = FUN_140d2f6a0(param_1);
        if ((iVar1 == 1) && (**param_1 < param_2)) {
          **param_1 = param_2 - **param_1;
          *(undefined4 *)(param_1 + 2) = 1;
          iVar1 = 1;
        }
        else {
          local_res10 = param_2;
          for (local_18 = 0; (*param_1)[local_18] < local_res10; local_18 = local_18 + 1) {
            (*param_1)[local_18] = (*param_1)[local_18] - local_res10;
            local_res10 = 1;
          }
          (*param_1)[local_18] = (*param_1)[local_18] - local_res10;
          if (((*param_1)[local_18] == 0) && (local_18 == *(int *)(param_1 + 1) + -1)) {
            *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
          }
          iVar1 = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 2) = 0;
        iVar1 = FUN_140d28370(param_1,param_2);
        *(undefined4 *)(param_1 + 2) = 1;
      }
    }
    else {
      iVar1 = FUN_140d27970(param_1,param_2);
      if (iVar1 != 0) {
        FUN_140d27a20(param_1,1);
      }
    }
  }
  return iVar1;
}


/* address=140d28890 name=FUN_140d28890 */

bool FUN_140d28890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_140d44a60(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_140d2f6f0(param_1);
  }
  return iVar1 != 0;
}


/* address=140d288f0 name=FUN_140d288f0 */

undefined8 FUN_140d288f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 1) != 0) {
    if (param_2 == 0) {
      FUN_140d27910(param_1);
    }
    else {
      lVar2 = FUN_140d30400(*param_1,*param_1,(longlong)*(int *)(param_1 + 1),param_2);
      if (lVar2 != 0) {
        iVar1 = FUN_140d2f730(param_1,(longlong)(*(int *)(param_1 + 1) + 1));
        if (iVar1 == 0) {
          return 0;
        }
        *(longlong *)(*param_1 + (longlong)*(int *)(param_1 + 1) * 8) = lVar2;
        *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
      }
    }
  }
  return 1;
}


/* address=140d289c0 name=FUN_140d289c0 */

bool FUN_140d289c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d3d870(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_140d2f6f0(param_1);
  }
  return iVar1 != 0;
}


/* address=140d28a10 name=FUN_140d28a10 */

undefined8
FUN_140d28a10(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar12;
  longlong *local_c0;
  int local_b8;
  ulonglong local_b0;
  int local_a8;
  ulonglong *local_a0;
  ulonglong local_98;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  ulonglong *local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong local_50;
  int local_48;
  int local_44;
  undefined4 local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  local_90 = FUN_140d2f6a0(param_3);
  local_8c = FUN_140d2f6a0(param_4);
  if (((0 < local_90) && (*(longlong *)(*param_3 + (longlong)(local_90 + -1) * 8) == 0)) ||
     ((0 < local_8c && (*(longlong *)(*param_4 + (longlong)(local_8c + -1) * 8) == 0)))) {
    FUN_140d186f0(3,0,0x6f,s_D__a_1_s_target_release_build_bo_1413c75e0,CONCAT44(uVar12,0xd4));
    return 0;
  }
  iVar4 = FUN_140d29a20(param_4);
  if (iVar4 != 0) {
    FUN_140d186f0(3,0,0x69,s_D__a_1_s_target_release_build_bo_1413c7650,CONCAT44(uVar12,0xd9));
    return 0;
  }
  FUN_140d28030(param_5);
  local_60 = (longlong *)FUN_140d28090(param_5);
  plVar7 = (longlong *)FUN_140d28090(param_5);
  plVar8 = (longlong *)FUN_140d28090(param_5);
  local_c0 = param_1;
  if (param_1 == (longlong *)0x0) {
    local_c0 = (longlong *)FUN_140d28090(param_5);
  }
  if ((plVar8 != (longlong *)0x0) && (local_c0 != (longlong *)0x0)) {
    uVar9 = FUN_140d27880(param_4);
    iVar4 = -(int)((uVar9 & 0xffffffff) % 0x40);
    iVar5 = FUN_140d29c10(plVar8,param_4,iVar4 + 0x40);
    if (iVar5 != 0) {
      FUN_140d2f6f0(plVar8);
      *(undefined4 *)(plVar8 + 2) = 0;
      iVar4 = iVar4 + 0x80;
      iVar5 = FUN_140d29c10(plVar7,param_3,iVar4);
      if (iVar5 != 0) {
        FUN_140d2f6f0(plVar7);
        *(undefined4 *)(plVar7 + 2) = 0;
        if (*(int *)(plVar8 + 1) + 1 < *(int *)(plVar7 + 1)) {
          iVar5 = FUN_140d2f730(plVar7,(longlong)(*(int *)(plVar7 + 1) + 1));
          if (iVar5 == 0) goto LAB_140d291ec;
          *(undefined8 *)(*plVar7 + (longlong)*(int *)(plVar7 + 1) * 8) = 0;
          *(int *)(plVar7 + 1) = *(int *)(plVar7 + 1) + 1;
        }
        else {
          iVar5 = FUN_140d2f730(plVar7,(longlong)(*(int *)(plVar8 + 1) + 2));
          if (iVar5 == 0) goto LAB_140d291ec;
          for (local_b8 = *(int *)(plVar7 + 1); local_b8 < *(int *)(plVar8 + 1) + 2;
              local_b8 = local_b8 + 1) {
            *(undefined8 *)(*plVar7 + (longlong)local_b8 * 8) = 0;
          }
          *(int *)(plVar7 + 1) = *(int *)(plVar8 + 1) + 2;
        }
        iVar5 = *(int *)(plVar8 + 1);
        local_88 = *(int *)(plVar7 + 1);
        iVar11 = local_88 - iVar5;
        local_40 = 0;
        local_50 = *plVar7 + (longlong)iVar11 * 8;
        local_44 = *(int *)((longlong)plVar7 + 0xc) - iVar11;
        local_78 = *(ulonglong *)(*plVar8 + (longlong)(iVar5 + -1) * 8);
        if (iVar5 == 1) {
          local_38 = 0;
        }
        else {
          local_38 = *(ulonglong *)(*plVar8 + (longlong)(iVar5 + -2) * 8);
        }
        local_58 = local_38;
        local_a0 = (ulonglong *)(*plVar7 + (longlong)(local_88 + -1) * 8);
        local_84 = *(uint *)(param_3 + 2);
        *(uint *)(local_c0 + 2) = local_84 ^ *(uint *)(param_4 + 2);
        local_48 = iVar5;
        iVar6 = FUN_140d2f730(local_c0,(longlong)(iVar11 + 1));
        if (iVar6 != 0) {
          *(int *)(local_c0 + 1) = iVar11 + -1;
          local_80 = (ulonglong *)(*local_c0 + (longlong)(iVar11 + -1) * 8);
          iVar6 = FUN_140d2f730(local_60,(longlong)(iVar5 + 1));
          if (iVar6 != 0) {
            if (*(int *)(local_c0 + 1) == 0) {
              *(undefined4 *)(local_c0 + 2) = 0;
            }
            else {
              local_80 = local_80 + -1;
            }
            for (local_a8 = 0; auVar3._8_8_ = local_70, auVar3._0_8_ = local_68,
                local_a8 < iVar11 + -1; local_a8 = local_a8 + 1) {
              local_98 = 0;
              local_30 = *local_a0;
              local_28 = local_a0[-1];
              if (local_30 == local_78) {
                local_b0 = 0xffffffffffffffff;
              }
              else {
                FUN_140d40cc0(&local_b0,&local_98,local_30,local_28,local_78);
                local_20 = local_58;
                auVar1._8_8_ = 0;
                auVar1._0_8_ = local_b0;
                auVar2._8_8_ = 0;
                auVar2._0_8_ = local_58;
                auVar3 = auVar1 * auVar2;
                while( true ) {
                  local_70 = auVar3._8_8_;
                  local_68 = auVar3._0_8_;
                  if ((local_70 < local_98) ||
                     ((local_70 == local_98 && (local_68 <= local_a0[-2])))) break;
                  local_b0 = local_b0 - 1;
                  local_98 = local_98 + local_78;
                  if (local_98 < local_78) break;
                  if (local_68 < local_58) {
                    local_70 = local_70 - 1;
                  }
                  auVar3._8_8_ = local_70;
                  auVar3._0_8_ = local_68 - local_58;
                }
              }
              local_70 = auVar3._8_8_;
              local_68 = auVar3._0_8_;
              local_18 = FUN_140d30400(*local_60,*plVar8,(longlong)iVar5,local_b0);
              *(undefined8 *)(*local_60 + (longlong)iVar5 * 8) = local_18;
              local_50 = local_50 + -8;
              lVar10 = FUN_140d30d80(local_50,local_50,*local_60,(longlong)(iVar5 + 1));
              if (lVar10 != 0) {
                local_b0 = local_b0 - 1;
                lVar10 = FUN_140d30b50(local_50,local_50,*plVar8,(longlong)iVar5);
                if (lVar10 != 0) {
                  *local_a0 = *local_a0 + 1;
                }
              }
              *local_80 = local_b0;
              local_a0 = local_a0 + -1;
              local_80 = local_80 + -1;
            }
            FUN_140d2f6f0(plVar7);
            if (param_2 != 0) {
              iVar4 = FUN_140d29f90(param_2,plVar7,iVar4);
              if (iVar4 == 0) goto LAB_140d291ec;
              iVar4 = FUN_140d29a20(param_2);
              if (iVar4 == 0) {
                *(uint *)(param_2 + 0x10) = local_84;
              }
            }
            FUN_140d2f6f0(local_c0);
            FUN_140d281e0(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_140d291ec:
  FUN_140d281e0(param_5);
  return 0;
}


/* address=140d29210 name=FUN_140d29210 */

ulonglong FUN_140d29210(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  int local_38;
  ulonglong local_30;
  longlong local_20;
  undefined local_18 [24];
  
  local_30 = 0;
  if (param_2 == 0) {
    local_30 = 0xffffffffffffffff;
  }
  else if (*(int *)(param_1 + 1) == 0) {
    local_30 = 0;
  }
  else {
    iVar2 = FUN_140d2f3c0(param_2);
    bVar3 = (byte)(0x40 - iVar2);
    param_2 = param_2 << (bVar3 & 0x3f);
    iVar2 = FUN_140d29c10(param_1,param_1,0x40 - iVar2);
    if (iVar2 == 0) {
      local_30 = 0xffffffffffffffff;
    }
    else {
      local_38 = *(int *)(param_1 + 1);
      while (local_38 = local_38 + -1, -1 < local_38) {
        lVar1 = *(longlong *)(*param_1 + (longlong)local_38 * 8);
        FUN_140d40cc0(&local_20,local_18,local_30,lVar1,param_2);
        local_30 = lVar1 - local_20 * param_2;
        *(longlong *)(*param_1 + (longlong)local_38 * 8) = local_20;
      }
      FUN_140d2f6f0(param_1);
      local_30 = local_30 >> (bVar3 & 0x3f);
    }
  }
  return local_30;
}


/* address=140d29660 name=FUN_140d29660 */

int FUN_140d29660(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    if (param_1 == 0) {
      if (param_2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 1;
      }
    }
    else {
      iVar1 = -1;
    }
  }
  else if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
    iVar1 = FUN_140d29780(param_1,param_2);
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = -iVar1;
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


/* address=140d29710 name=FUN_140d29710 */

void FUN_140d29710(undefined8 param_1,longlong param_2)

{
  longlong local_res10 [3];
  uint local_28;
  longlong *local_20;
  uint local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_res10[0] = param_2;
  FUN_140d27630(&local_20);
  local_20 = local_res10;
  local_28 = (uint)(local_res10[0] != 0);
  local_18 = local_28;
  local_14 = 1;
  local_c = 2;
  FUN_140d29660(param_1,&local_20);
  return;
}


/* address=140d29780 name=FUN_140d29780 */

void FUN_140d29780(undefined8 *param_1,undefined8 *param_2)

{
  FUN_140d403d0(*param_1,(longlong)*(int *)(param_1 + 1),*param_2,(longlong)*(int *)(param_2 + 1));
  return;
}


/* address=140d297d0 name=FUN_140d297d0 */

bool FUN_140d297d0(longlong *param_1,longlong *param_2)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_10;
  
  local_10 = 0;
  for (local_24 = *(int *)(param_1 + 1); local_24 < *(int *)(param_2 + 1); local_24 = local_24 + 1)
  {
    local_10 = local_10 | *(ulonglong *)(*param_2 + (longlong)local_24 * 8);
  }
  for (local_20 = *(int *)(param_2 + 1); local_20 < *(int *)(param_1 + 1); local_20 = local_20 + 1)
  {
    local_10 = local_10 | *(ulonglong *)(*param_1 + (longlong)local_20 * 8);
  }
  if (*(int *)(param_1 + 1) < *(int *)(param_2 + 1)) {
    local_1c = *(int *)(param_1 + 1);
  }
  else {
    local_1c = *(int *)(param_2 + 1);
  }
  for (local_28 = 0; local_28 < local_1c; local_28 = local_28 + 1) {
    local_10 = local_10 |
               *(ulonglong *)(*param_1 + (longlong)local_28 * 8) ^
               *(ulonglong *)(*param_2 + (longlong)local_28 * 8);
  }
  return (local_10 | (longlong)(int)(*(uint *)(param_1 + 2) ^ *(uint *)(param_2 + 2))) == 0;
}


/* address=140d29950 name=FUN_140d29950 */

bool FUN_140d29950(ulonglong **param_1,ulonglong param_2)

{
  bool bVar1;
  int local_28;
  ulonglong local_18;
  
  if (*(int *)(param_1 + 1) == 0) {
    bVar1 = param_2 != 0;
  }
  else {
    local_18 = **param_1 ^ param_2;
    for (local_28 = 1; local_28 < *(int *)(param_1 + 1); local_28 = local_28 + 1) {
      local_18 = local_18 | (*param_1)[local_28];
    }
    bVar1 = local_18 != 0;
  }
  return !bVar1;
}


/* address=140d29a20 name=FUN_140d29a20 */

void FUN_140d29a20(undefined8 param_1)

{
  FUN_140d2fb30(param_1,0);
  return;
}


/* address=140d29a40 name=FUN_140d29a40 */

undefined4 FUN_140d29a40(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) && (iVar1 = FUN_140d29950(param_1,1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140d29a90 name=FUN_140d29a90 */

undefined4 FUN_140d29a90(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_140d29950(param_1,param_2);
  if ((iVar1 == 0) || ((param_2 != 0 && (*(int *)(param_1 + 0x10) != 0)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d29af0 name=FUN_140d29af0 */

undefined4 FUN_140d29af0(ulonglong **param_1)

{
  undefined4 local_18;
  
  if ((*(int *)(param_1 + 1) < 1) || ((**param_1 & 1) != 1)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d29b50 name=FUN_140d29b50 */

bool FUN_140d29b50(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  int local_18;
  
  iVar1 = FUN_140d2f6a0(param_1);
  if ((iVar1 == 0) || (*(int *)(param_1 + 2) != 0)) {
    bVar2 = false;
  }
  else {
    for (local_18 = 0; local_18 < iVar1 + -1; local_18 = local_18 + 1) {
      if (*(longlong *)(*param_1 + (longlong)local_18 * 8) != 0) {
        return false;
      }
    }
    bVar2 = (*(ulonglong *)(*param_1 + (longlong)(iVar1 + -1) * 8) &
            *(longlong *)(*param_1 + (longlong)(iVar1 + -1) * 8) - 1U) == 0;
  }
  return bVar2;
}


/* address=140d29c10 name=FUN_140d29c10 */

undefined8 FUN_140d29c10(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int local_38;
  
  if (param_3 < 0) {
    FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413ccac0,0x49);
    uVar7 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    iVar5 = (int)(param_3 + (param_3 >> 0x1f & 0x3fU)) >> 6;
    iVar6 = FUN_140d2f730(param_1,(longlong)(*(int *)(param_2 + 1) + 1 + iVar5));
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar8 = param_3 >> 0x1f & 0x3f;
      iVar6 = (param_3 + uVar8 & 0x3f) - uVar8;
      bVar4 = (byte)iVar6;
      lVar1 = *param_2;
      lVar2 = *param_1;
      *(undefined8 *)(lVar2 + (longlong)(*(int *)(param_2 + 1) + iVar5) * 8) = 0;
      if (iVar6 == 0) {
        local_38 = *(int *)(param_2 + 1);
        while (local_38 = local_38 + -1, -1 < local_38) {
          *(undefined8 *)(lVar2 + (longlong)(iVar5 + local_38) * 8) =
               *(undefined8 *)(lVar1 + (longlong)local_38 * 8);
        }
      }
      else {
        local_38 = *(int *)(param_2 + 1);
        while (local_38 = local_38 + -1, -1 < local_38) {
          uVar3 = *(ulonglong *)(lVar1 + (longlong)local_38 * 8);
          *(ulonglong *)(lVar2 + (longlong)(iVar5 + 1 + local_38) * 8) =
               *(ulonglong *)(lVar2 + (longlong)(iVar5 + 1 + local_38) * 8) |
               uVar3 >> (0x40 - bVar4 & 0x3f);
          *(ulonglong *)(lVar2 + (longlong)(iVar5 + local_38) * 8) = uVar3 << (bVar4 & 0x3f);
        }
      }
      FUN_140d1d930(lVar2,0,(longlong)iVar5 << 3);
      *(int *)(param_1 + 1) = *(int *)(param_2 + 1) + 1 + iVar5;
      FUN_140d2f6f0(param_1);
      uVar7 = 1;
    }
  }
  return uVar7;
}


/* address=140d29e40 name=FUN_140d29e40 */

undefined8 FUN_140d29e40(ulonglong **param_1,ulonglong **param_2)

{
  ulonglong uVar1;
  int iVar2;
  int local_38;
  ulonglong *local_30;
  ulonglong *local_28;
  ulonglong local_20;
  
  if (param_1 == param_2) {
    iVar2 = FUN_140d2f730(param_1,(longlong)(*(int *)(param_2 + 1) + 1));
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    iVar2 = FUN_140d2f730(param_1,(longlong)(*(int *)(param_2 + 1) + 1));
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  local_28 = *param_2;
  local_30 = *param_1;
  local_20 = 0;
  for (local_38 = 0; local_38 < *(int *)(param_2 + 1); local_38 = local_38 + 1) {
    uVar1 = *local_28;
    local_28 = local_28 + 1;
    *local_30 = uVar1 << 1 | local_20;
    local_30 = local_30 + 1;
    local_20 = uVar1 >> 0x3f;
  }
  if (local_20 != 0) {
    *local_30 = 1;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  return 1;
}


/* address=140d29f90 name=FUN_140d29f90 */

undefined8 FUN_140d29f90(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 < 0) {
    FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413ccb30,0x9e);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_140d2f730(param_1,(longlong)*(int *)(param_2 + 1));
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_140d3ced0(*param_1,*param_2,param_3,(longlong)*(int *)(param_2 + 1));
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      FUN_140d2f6f0(param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d2a050 name=FUN_140d2a050 */

bool FUN_140d2a050(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_140d2f730(param_1,(longlong)*(int *)(param_2 + 1));
  if (iVar1 != 0) {
    FUN_140d3ce30(*param_1,*param_2,(longlong)*(int *)(param_2 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    FUN_140d2f6f0(param_1);
  }
  return iVar1 != 0;
}


/* address=140d2a0e0 name=FUN_140d2a0e0 */

undefined8 FUN_140d2a0e0(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_24;
  
  if (param_2 < 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x3fU)) >> 6;
    bVar1 = (byte)(param_2 >> 0x1f) & 0x3f;
    if (*(int *)(param_1 + 1) <= iVar2) {
      iVar3 = FUN_140d2f730(param_1,(longlong)(iVar2 + 1));
      if (iVar3 == 0) {
        return 0;
      }
      for (local_24 = *(int *)(param_1 + 1); local_24 < iVar2 + 1; local_24 = local_24 + 1) {
        *(undefined8 *)(*param_1 + (longlong)local_24 * 8) = 0;
      }
      *(int *)(param_1 + 1) = iVar2 + 1;
    }
    *(ulonglong *)(*param_1 + (longlong)iVar2 * 8) =
         *(ulonglong *)(*param_1 + (longlong)iVar2 * 8) |
         1L << (((char)param_2 + bVar1 & 0x3f) - bVar1 & 0x3f);
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140d2a1f0 name=FUN_140d2a1f0 */

undefined8 FUN_140d2a1f0(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 < 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x3fU)) >> 6;
    bVar1 = (byte)(param_2 >> 0x1f) & 0x3f;
    if (iVar2 < *(int *)(param_1 + 1)) {
      *(ulonglong *)(*param_1 + (longlong)iVar2 * 8) =
           *(ulonglong *)(*param_1 + (longlong)iVar2 * 8) &
           ~(1L << (((char)param_2 + bVar1 & 0x3f) - bVar1 & 0x3f));
      FUN_140d2f6f0(param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140d2a2b0 name=FUN_140d2a2b0 */

undefined8 FUN_140d2a2b0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d3c6d0(*param_1,(longlong)*(int *)(param_1 + 1),(longlong)param_2);
  }
  return uVar1;
}


/* address=140d2a300 name=FUN_140d2a300 */

undefined8 FUN_140d2a300(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_2 < 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)(param_2 + (param_2 >> 0x1f & 0x3fU)) >> 6;
    uVar4 = param_2 >> 0x1f & 0x3f;
    iVar2 = (param_2 + uVar4 & 0x3f) - uVar4;
    if (iVar1 < *(int *)(param_1 + 1)) {
      if (iVar2 == 0) {
        *(int *)(param_1 + 1) = iVar1;
      }
      else {
        *(int *)(param_1 + 1) = iVar1 + 1;
        *(ulonglong *)(*param_1 + (longlong)iVar1 * 8) =
             *(ulonglong *)(*param_1 + (longlong)iVar1 * 8) & ~(-1L << ((byte)iVar2 & 0x3f));
      }
      FUN_140d2f6f0(param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=140d2a3e0 name=FUN_140d2a3e0 */

uint FUN_140d2a3e0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_38;
  uint local_34;
  
  local_34 = 0;
  uVar4 = 0;
  for (local_38 = 0; local_38 < *(int *)(param_1 + 1); local_38 = local_38 + 1) {
    uVar2 = FUN_140d1d680(*(undefined8 *)(*param_1 + (longlong)local_38 * 8));
    uVar1 = ~uVar4;
    uVar4 = uVar4 | ~uVar2;
    iVar3 = FUN_140d467a0(*(undefined8 *)(*param_1 + (longlong)local_38 * 8));
    local_34 = local_34 | uVar1 & ~uVar2 & local_38 * 0x40 + iVar3;
  }
  return local_34;
}


/* address=140d2a4c0 name=FUN_140d2a4c0 */

ulonglong FUN_140d2a4c0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int local_28;
  ulonglong local_20;
  
  local_20 = 0;
  if (param_2 == 0) {
    local_20 = 0xffffffffffffffff;
  }
  else if (param_2 < 0x100000001) {
    local_28 = *(int *)(param_1 + 1);
    while (local_28 = local_28 + -1, -1 < local_28) {
      local_20 = ((local_20 << 0x20 | *(ulonglong *)(*param_1 + (longlong)local_28 * 8) >> 0x20) %
                  param_2 << 0x20 | *(ulonglong *)(*param_1 + (longlong)local_28 * 8) & 0xffffffff)
                 % param_2;
    }
  }
  else {
    lVar1 = FUN_140d276f0(param_1);
    if (lVar1 == 0) {
      local_20 = 0xffffffffffffffff;
    }
    else {
      local_20 = FUN_140d29210(lVar1,param_2);
      FUN_140d27660(lVar1);
    }
  }
  return local_20;
}


/* address=140d2a5f0 name=FUN_140d2a5f0 */

bool FUN_140d2a5f0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 local_20;
  
  if ((param_3 == 0) || (*(int *)(param_2 + 1) == 0)) {
    FUN_140d27910(param_1);
    bVar4 = true;
  }
  else {
    uVar2 = (param_3 - 1) / 0x40 + 1;
    if ((ulonglong)(longlong)*(int *)(param_2 + 1) < uVar2) {
      lVar3 = FUN_140d27750(param_1,param_2);
      bVar4 = lVar3 != 0;
    }
    else {
      iVar1 = FUN_140d2f730(param_1,uVar2);
      if (iVar1 == 0) {
        bVar4 = false;
      }
      else {
        FUN_140d1d890(*param_1,*param_2,uVar2 * 8);
        if (param_3 % 0x40 != 0) {
          *(ulonglong *)(*param_1 + -8 + uVar2 * 8) =
               *(ulonglong *)(*param_1 + -8 + uVar2 * 8) & (1L << (sbyte)(param_3 % 0x40)) - 1U;
        }
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
        local_20 = (undefined4)uVar2;
        *(undefined4 *)(param_1 + 1) = local_20;
        FUN_140d2f6f0(param_1);
        bVar4 = true;
      }
    }
  }
  return bVar4;
}


/* address=140d2a920 name=FUN_140d2a920 */

undefined8 FUN_140d2a920(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  code *local_18;
  
  iVar1 = FUN_140d28a10(0,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_3 + 0x10) == 0) {
      local_18 = FUN_140d28220;
    }
    else {
      local_18 = FUN_140d28510;
    }
    uVar2 = (*local_18)(param_1,param_1,param_3);
  }
  return uVar2;
}


/* address=140d2aba0 name=FUN_140d2aba0 */

undefined4
FUN_140d2aba0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  local_18 = 0;
  FUN_140d28030(param_5);
  lVar2 = FUN_140d28090(param_5);
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_140d289c0(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_140d28890(lVar2,param_2,param_3,param_5);
    }
    if ((iVar1 != 0) && (iVar1 = FUN_140d2a920(param_1,lVar2,param_4,param_5), iVar1 != 0)) {
      local_18 = 1;
    }
  }
  FUN_140d281e0(param_5);
  return local_18;
}


/* address=140d2ac70 name=FUN_140d2ac70 */

undefined8
FUN_140d2ac70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d289c0(param_1,param_2,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d28a10(0,param_1,param_1,param_3,param_4);
  }
  return uVar2;
}


/* address=140d2af20 name=FUN_140d2af20 */

longlong FUN_140d2af20(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  CMFCTabCtrl *this;
  longlong lVar8;
  bool bVar9;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar11;
  undefined8 uVar10;
  int local_78;
  longlong local_70;
  int local_68;
  int local_20;
  code *local_18;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  bVar9 = true;
  iVar1 = FUN_140d29af0(param_3);
  local_70 = param_1;
  if ((iVar1 == 0) || (iVar1 = FUN_140d29950(param_3,1), iVar1 != 0)) {
    iVar1 = FUN_140d29950(param_3,2);
    if (iVar1 == 0) {
      FUN_140d186f0(3,0,0x72,s_D__a_1_s_target_release_build_bo_1413ccba0,CONCAT44(uVar11,0x58));
      return 0;
    }
    if (param_1 == 0) {
      local_70 = FUN_140d275e0();
    }
    if (local_70 != 0) {
      iVar1 = FUN_140d2a2b0(param_2,0);
      iVar1 = FUN_140d27970(local_70,(longlong)iVar1);
      if (iVar1 != 0) {
        return local_70;
      }
    }
    if (local_70 != param_1) {
      FUN_140d27660(local_70);
    }
    return 0;
  }
  iVar1 = FUN_140d29a20(param_2);
  if ((iVar1 != 0) || (iVar1 = FUN_140d29a40(param_2), iVar1 != 0)) {
    if (param_1 == 0) {
      local_70 = FUN_140d275e0();
    }
    if (local_70 != 0) {
      iVar1 = FUN_140d29a40(param_2);
      iVar1 = FUN_140d27970(local_70,(longlong)iVar1);
      if (iVar1 != 0) {
        return local_70;
      }
    }
    if (local_70 != param_1) {
      FUN_140d27660(local_70);
    }
    return 0;
  }
  FUN_140d28030(param_4);
  uVar3 = FUN_140d28090(param_4);
  uVar4 = FUN_140d28090(param_4);
  lVar5 = FUN_140d28090(param_4);
  uVar6 = FUN_140d28090(param_4);
  uVar7 = FUN_140d28090(param_4);
  this = (CMFCTabCtrl *)FUN_140d28090(param_4);
  if (this != (CMFCTabCtrl *)0x0) {
    if (param_1 == 0) {
      local_70 = FUN_140d275e0();
    }
    if ((local_70 != 0) && (iVar1 = FUN_140d2a920(uVar3,param_2), iVar1 != 0)) {
      local_68 = 1;
      while (iVar1 = FUN_140d2a2b0(param_3,local_68), iVar1 == 0) {
        local_68 = local_68 + 1;
      }
      if (local_68 == 1) {
        iVar1 = FUN_140d29f90(lVar5,param_3,2);
        if (iVar1 == 0) goto LAB_140d2ba36;
        *(undefined4 *)(lVar5 + 0x10) = 0;
        iVar1 = FUN_140d28370(lVar5,1);
        if (iVar1 == 0) goto LAB_140d2ba36;
        uVar4 = param_4;
        iVar1 = FUN_140d2dba0(local_70,uVar3,lVar5,param_3,param_4,0);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if (iVar1 == 0) goto LAB_140d2ba36;
      }
      else {
        if (local_68 == 2) {
          iVar1 = FUN_140d3e5e0(uVar6,uVar3,param_3,param_4);
          if ((iVar1 == 0) || (iVar1 = FUN_140d29f90(lVar5,param_3,3), iVar1 == 0))
          goto LAB_140d2ba36;
          *(undefined4 *)(lVar5 + 0x10) = 0;
          iVar1 = FUN_140d2dba0(uVar4,uVar6,lVar5,param_3,param_4,0);
          if ((iVar1 == 0) ||
             ((((iVar1 = FUN_140d2ac70(this,uVar4,param_3,param_4), iVar1 == 0 ||
                (iVar1 = FUN_140d2aba0(uVar6,uVar6,this,param_3,param_4), iVar1 == 0)) ||
               (iVar1 = FUN_140d286a0(uVar6,1), iVar1 == 0)) ||
              (iVar1 = FUN_140d2aba0(uVar7,uVar3,uVar4,param_3,param_4), iVar1 == 0))))
          goto LAB_140d2ba36;
          uVar4 = param_4;
          iVar1 = FUN_140d2aba0(uVar7,uVar7,uVar6,param_3,param_4);
          uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if (iVar1 == 0) goto LAB_140d2ba36;
          lVar5 = FUN_140d27750(local_70,uVar7);
        }
        else {
          lVar8 = FUN_140d27750(lVar5,param_3);
          if (lVar8 == 0) goto LAB_140d2ba36;
          *(undefined4 *)(lVar5 + 0x10) = 0;
          local_78 = 2;
          do {
            if (local_78 < 0x16) {
              iVar1 = FUN_140d27970(this,(longlong)local_78);
joined_r0x000140d2b4d6:
              if (iVar1 == 0) goto LAB_140d2ba36;
            }
            else {
              uVar2 = FUN_140d27880(param_3);
              iVar1 = CMFCTabCtrl::SetImageList(this,uVar2,0,0);
              if (iVar1 == 0) goto LAB_140d2ba36;
              iVar1 = FUN_140d29780(this,param_3);
              if (-1 < iVar1) {
                if (*(int *)(param_3 + 0x10) == 0) {
                  local_18 = FUN_140d28510;
                }
                else {
                  local_18 = FUN_140d28220;
                }
                iVar1 = (*local_18)(this,this,param_3);
                if (iVar1 == 0) goto LAB_140d2ba36;
              }
              iVar1 = FUN_140d29a20(this);
              if (iVar1 != 0) {
                iVar1 = FUN_140d27970(this,(longlong)local_78);
                goto joined_r0x000140d2b4d6;
              }
            }
            iVar1 = FUN_140d3c370(this,lVar5);
            if (iVar1 < -1) goto LAB_140d2ba36;
            if (iVar1 == 0) {
              FUN_140d186f0(3,0,0x72,s_D__a_1_s_target_release_build_bo_1413ccc10,0x101);
              goto LAB_140d2ba36;
            }
          } while ((iVar1 == 1) && (local_78 = local_78 + 1, local_78 < 0x52));
          if (iVar1 != -1) {
            FUN_140d186f0(3,0,0x73,s_D__a_1_s_target_release_build_bo_1413ccc80,0x10b);
            goto LAB_140d2ba36;
          }
          iVar1 = FUN_140d29f90(lVar5,lVar5,local_68);
          if (iVar1 == 0) goto LAB_140d2ba36;
          uVar10 = param_4;
          iVar1 = FUN_140d2dba0(this,this,lVar5,param_3,param_4,0);
          uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if (iVar1 == 0) goto LAB_140d2ba36;
          iVar1 = FUN_140d29a40(this);
          if (iVar1 != 0) {
            FUN_140d186f0(3,0,0x72,s_D__a_1_s_target_release_build_bo_1413cccf0,
                          CONCAT44(uVar11,0x11a));
            goto LAB_140d2ba36;
          }
          iVar1 = FUN_140d2a050(uVar6,lVar5);
          if (iVar1 == 0) goto LAB_140d2ba36;
          iVar1 = FUN_140d29a20(uVar6);
          if (iVar1 == 0) {
            iVar1 = FUN_140d2dba0(uVar7,uVar3,uVar6,param_3,param_4,0);
            if (iVar1 == 0) goto LAB_140d2ba36;
            iVar1 = FUN_140d29a20(uVar7);
            if (iVar1 != 0) {
              FUN_140d27910(local_70);
              bVar9 = false;
              goto LAB_140d2ba36;
            }
          }
          else {
            iVar1 = FUN_140d2a920(uVar6,uVar3,param_3,param_4);
            if (iVar1 == 0) goto LAB_140d2ba36;
            iVar1 = FUN_140d29a20(uVar6);
            if (iVar1 != 0) {
              FUN_140d27910(local_70);
              bVar9 = false;
              goto LAB_140d2ba36;
            }
            iVar1 = FUN_140d27940(uVar7);
            if (iVar1 == 0) goto LAB_140d2ba36;
          }
          iVar1 = FUN_140d2ac70(uVar4,uVar7,param_3,param_4);
          if (((iVar1 == 0) ||
              (iVar1 = FUN_140d2aba0(uVar4,uVar4,uVar3,param_3,param_4), iVar1 == 0)) ||
             (uVar10 = param_4, iVar1 = FUN_140d2aba0(uVar7,uVar7,uVar3,param_3,param_4), iVar1 == 0
             )) goto LAB_140d2ba36;
          while( true ) {
            iVar1 = FUN_140d29a40(uVar4);
            uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if (iVar1 != 0) break;
            for (local_78 = 1; uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20), local_78 < local_68
                ; local_78 = local_78 + 1) {
              if (local_78 == 1) {
                iVar1 = FUN_140d2ac70(uVar6,uVar4,param_3,param_4);
              }
              else {
                uVar10 = param_4;
                iVar1 = FUN_140d2aba0(uVar6,uVar6,uVar6,param_3,param_4);
              }
              if (iVar1 == 0) goto LAB_140d2ba36;
              iVar1 = FUN_140d29a40(uVar6);
              uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
              if (iVar1 != 0) break;
            }
            if (local_68 <= local_78) {
              FUN_140d186f0(3,0,0x6e,s_D__a_1_s_target_release_build_bo_1413ccd60,
                            CONCAT44(uVar11,0x179));
              goto LAB_140d2ba36;
            }
            lVar5 = FUN_140d27750(uVar6,this);
            if (lVar5 == 0) goto LAB_140d2ba36;
            local_20 = local_68 - local_78;
            while (local_20 = local_20 + -1, 0 < local_20) {
              iVar1 = FUN_140d2ac70(uVar6,uVar6,param_3,param_4);
              if (iVar1 == 0) goto LAB_140d2ba36;
            }
            iVar1 = FUN_140d2aba0(this,uVar6,uVar6,param_3,param_4);
            if (((iVar1 == 0) ||
                (iVar1 = FUN_140d2aba0(uVar7,uVar7,uVar6,param_3,param_4), iVar1 == 0)) ||
               (uVar10 = param_4, iVar1 = FUN_140d2aba0(uVar4,uVar4,this,param_3,param_4),
               iVar1 == 0)) goto LAB_140d2ba36;
            if (local_68 <= local_78) {
              FID_conflict__assert((wchar_t *)s_i_1413ccea0,(wchar_t *)s_D_1413ccdd0,0x18d);
            }
            local_68 = local_78;
          }
          lVar5 = FUN_140d27750(local_70,uVar7);
        }
        if (lVar5 == 0) goto LAB_140d2ba36;
      }
      iVar1 = FUN_140d2ac70(uVar7,local_70,param_3,param_4);
      bVar9 = iVar1 == 0;
      if ((!bVar9) && (iVar1 = FUN_140d29660(uVar7,uVar3), iVar1 != 0)) {
        FUN_140d186f0(3,0,0x6e,s_D__a_1_s_target_release_build_bo_1413cceb0,CONCAT44(uVar11,0x199));
        bVar9 = true;
      }
    }
  }
LAB_140d2ba36:
  if (bVar9) {
    if (local_70 != param_1) {
      FUN_140d276d0(local_70);
    }
    local_70 = 0;
  }
  FUN_140d281e0(param_4);
  return local_70;
}


/* address=140d2ba80 name=FUN_140d2ba80 */

undefined8 FUN_140d2ba80(ulonglong **param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong local_38;
  
  if (param_1 == (ulonglong **)0x0) {
    uVar5 = 0;
  }
  else if (((param_3 == -1) || (param_3 == 0)) || (param_3 == 1)) {
    if ((param_4 == 0) || (param_4 == 1)) {
      if (param_2 == 0) {
        FUN_140d27910(param_1);
        uVar5 = 1;
      }
      else if (param_2 < 0x7fffffc1) {
        iVar2 = (int)(param_2 + 0x3f + (param_2 + 0x3f >> 0x1f & 0x3fU)) >> 6;
        uVar6 = param_2 + -1 >> 0x1f & 0x3f;
        iVar3 = (param_2 + -1 + uVar6 & 0x3f) - uVar6;
        bVar1 = (byte)iVar3;
        if (iVar3 < 0x3f) {
          local_38 = (1L << (bVar1 + 1 & 0x3f)) - 1;
        }
        else {
          local_38 = 0xffffffffffffffff;
        }
        iVar4 = FUN_140d2f730(param_1,(longlong)iVar2);
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          FUN_140d272d0();
          FUN_140d459b0(*param_1,(longlong)iVar2 << 3);
          FUN_140d272e0();
          (*param_1)[iVar2 + -1] = (*param_1)[iVar2 + -1] & local_38;
          if (param_3 != -1) {
            if ((param_3 == 1) && (1 < param_2)) {
              if (iVar3 == 0) {
                (*param_1)[iVar2 + -1] = (*param_1)[iVar2 + -1] | 1;
                (*param_1)[iVar2 + -2] = (*param_1)[iVar2 + -2] | 0x8000000000000000;
              }
              else {
                (*param_1)[iVar2 + -1] = (*param_1)[iVar2 + -1] | 3L << (bVar1 - 1 & 0x3f);
              }
            }
            else {
              (*param_1)[iVar2 + -1] = (*param_1)[iVar2 + -1] | 1L << (bVar1 & 0x3f);
            }
          }
          if (param_4 == 1) {
            **param_1 = **param_1 | 1;
          }
          *(undefined4 *)(param_1 + 2) = 0;
          *(int *)(param_1 + 1) = iVar2;
          uVar5 = 1;
        }
      }
      else {
        FUN_140d186f0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413cc4a0,0x92);
        uVar5 = 0;
      }
    }
    else {
      FUN_140d186f0(3,0,0x42,s_D__a_1_s_target_release_build_bo_1413cc430,0x88);
      uVar5 = 0;
    }
  }
  else {
    FUN_140d186f0(3,0,0x42,s_D__a_1_s_target_release_build_bo_1413cc3c0,0x83);
    uVar5 = 0;
  }
  return uVar5;
}


/* address=140d2be30 name=CMFCTabCtrl::SetImageList */

/* Library Function - Single Match
    public: virtual int __cdecl CMFCTabCtrl::SetImageList(unsigned int,int,unsigned long) __ptr64
   
   Library: Visual Studio 2010 Debug */

int __thiscall CMFCTabCtrl::SetImageList(CMFCTabCtrl *this,uint param_1,int param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d2ba80(this,param_1,param_2,param_3);
  return iVar1;
}


/* address=140d2be70 name=FUN_140d2be70 */

void FUN_140d2be70(undefined8 param_1,undefined8 param_2)

{
  FUN_140d2bea0(param_1,0,param_2);
  return;
}


/* address=140d2bea0 name=FUN_140d2bea0 */

undefined8 FUN_140d2bea0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d2f730(param_1,(longlong)*(int *)(param_3 + 1));
  if ((iVar1 != 0) &&
     (iVar1 = FUN_140d3bd80(*param_1,param_2,*param_3,(longlong)*(int *)(param_3 + 1),&DAT_14104cf60
                           ), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
    return 1;
  }
  return 0;
}


/* address=140d2c020 name=FUN_140d2c020 */

undefined8 FUN_140d2c020(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(param_1 + 8))(param_2,param_3,param_1);
  }
  return uVar1;
}


/* address=140d2c390 name=FUN_140d2c390 */

undefined4
FUN_140d2c390(undefined4 *param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int local_res18;
  undefined8 in_stack_ffffffffffffff88;
  int local_60;
  int local_5c;
  undefined4 local_58;
  int local_40;
  longlong local_20;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  iVar1 = FUN_140d29af0(param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_140d29710(param_2,3), iVar1 < 1)) {
    FUN_140d186f0(3,0,0x77,s_D__a_1_s_target_release_build_bo_1413cc350,CONCAT44(uVar2,0x327));
    local_58 = 0;
  }
  else {
    local_res18 = param_3;
    if (param_3 == 0) {
      uVar2 = FUN_140d27880(param_2);
      local_res18 = FUN_140d45410(uVar2);
    }
    local_58 = 0;
    local_20 = 0;
    FUN_140d28030(param_4);
    lVar3 = FUN_140d28090(param_4);
    if (((lVar3 != 0) && (lVar4 = FUN_140d27750(lVar3,param_2), lVar4 != 0)) &&
       (iVar1 = FUN_140d286a0(lVar3,1), iVar1 != 0)) {
      local_60 = 0;
      while (iVar1 = FUN_140d2a2b0(lVar3,local_60), iVar1 == 0) {
        local_60 = local_60 + 1;
      }
      lVar4 = FUN_140d28090(param_4);
      if ((lVar4 != 0) && (iVar1 = FUN_140d29f90(lVar4,lVar3,local_60), iVar1 != 0)) {
        lVar5 = FUN_140d28090(param_4);
        lVar6 = FUN_140d28090(param_4);
        lVar7 = FUN_140d28090(param_4);
        lVar8 = FUN_140d28090(param_4);
        lVar9 = FUN_140d28090(param_4);
        if ((((lVar5 != 0) && ((lVar6 != 0 && (lVar7 != 0)))) && (lVar8 != 0)) &&
           ((lVar9 != 0 && (local_20 = FUN_140d2d450(param_2,param_4), local_20 != 0)))) {
          for (local_5c = 1; local_5c <= local_res18; local_5c = local_5c + 1) {
            iVar1 = FUN_140d2bea0(lVar5,2,lVar3);
            if ((iVar1 == 0) || (iVar1 = FUN_140d2ccc0(lVar6,lVar5,param_2,param_4), iVar1 == 0))
            goto LAB_140d2c858;
            iVar1 = FUN_140d29710(lVar6,1);
            if (0 < iVar1) {
              *param_1 = 1;
              local_58 = 1;
              goto LAB_140d2c858;
            }
            iVar1 = FUN_140d2dba0(lVar7,lVar5,lVar4,param_2,param_4,local_20);
            if (iVar1 == 0) goto LAB_140d2c858;
            iVar1 = FUN_140d29a40(lVar7);
            if ((iVar1 == 0) && (iVar1 = FUN_140d29660(lVar7,lVar3), iVar1 != 0)) {
              local_40 = 1;
              do {
                if (local_60 <= local_40) {
                  lVar3 = FUN_140d27750(lVar8,lVar7);
                  if (((lVar3 != 0) &&
                      (iVar1 = FUN_140d2aba0(lVar7,lVar8,lVar8,param_2,param_4), iVar1 != 0)) &&
                     ((iVar1 = FUN_140d29a40(lVar7), iVar1 != 0 ||
                      (lVar3 = FUN_140d27750(lVar8,lVar7), lVar3 != 0)))) {
LAB_140d2c795:
                    lVar3 = FUN_140d27750(lVar9,lVar8);
                    if (((lVar3 != 0) && (iVar1 = FUN_140d286a0(lVar9,1), iVar1 != 0)) &&
                       (iVar1 = FUN_140d2ccc0(lVar6,lVar9,param_2,param_4), iVar1 != 0)) {
                      iVar1 = FUN_140d29710(lVar6,1);
                      if (iVar1 < 1) {
                        *param_1 = 2;
                      }
                      else {
                        *param_1 = 1;
                      }
                      local_58 = 1;
                    }
                  }
                  goto LAB_140d2c858;
                }
                lVar10 = FUN_140d27750(lVar8,lVar7);
                if ((lVar10 == 0) ||
                   (iVar1 = FUN_140d2aba0(lVar7,lVar8,lVar8,param_2,param_4), iVar1 == 0))
                goto LAB_140d2c858;
                iVar1 = FUN_140d29660(lVar7,lVar3);
                if (iVar1 == 0) break;
                iVar1 = FUN_140d29a40(lVar7);
                if (iVar1 != 0) goto LAB_140d2c795;
                local_40 = local_40 + 1;
              } while( true );
            }
            iVar1 = FUN_140d2c020(param_5,1,local_5c + -1);
            if (iVar1 == 0) goto LAB_140d2c858;
          }
          *param_1 = 0;
          local_58 = 1;
        }
      }
    }
LAB_140d2c858:
    FUN_140d2d560(local_20);
    FUN_140d281e0(param_4);
  }
  return local_58;
}


/* address=140d2c890 name=FUN_140d2c890 */

undefined4
FUN_140d2c890(undefined4 *param_1,undefined8 param_2,int param_3,longlong param_4,int param_5,
             undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int local_res18;
  longlong local_res20;
  int local_78;
  undefined2 local_74 [2];
  undefined4 local_70;
  int local_6c;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  int local_50 [2];
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38 [7];
  
  *param_1 = 0;
  uVar3 = FUN_140d27850();
  iVar1 = FUN_140d29660(param_2,uVar3);
  if (iVar1 < 1) {
    local_70 = 1;
  }
  else {
    iVar1 = FUN_140d29af0(param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_140d29a90(param_2,2);
      *param_1 = uVar2;
      local_70 = 1;
    }
    else {
      iVar1 = FUN_140d29a90(param_2,3);
      if (iVar1 == 0) {
        if (param_5 != 0) {
          iVar1 = FUN_140d45920(local_74,param_2);
          if (iVar1 != 0) {
            uVar2 = FUN_140d29a90(param_2,local_74[0]);
            *param_1 = uVar2;
            return 1;
          }
          iVar1 = FUN_140d2c020(param_6,1,0xffffffff);
          if (iVar1 == 0) {
            return 0;
          }
        }
        local_res18 = param_3;
        if (param_3 == 0) {
          uVar2 = FUN_140d27880(param_2);
          local_res18 = FUN_140d45410(uVar2);
        }
        local_58 = 0;
        local_res20 = param_4;
        if ((param_4 == 0) &&
           (local_res20 = FUN_140d27f30(), local_58 = local_res20, local_res20 == 0)) {
          local_70 = 0;
        }
        else {
          local_70 = 0;
          FUN_140d28030(local_res20);
          local_48 = FUN_140d28090(local_res20);
          local_60 = FUN_140d2d4b0(param_2,local_res20);
          if ((local_48 != 0) &&
             ((local_60 != 0 && (iVar1 = FUN_140d3ca90(local_38,local_60,local_res20), iVar1 != 0)))
             ) {
            local_68 = 0;
            local_78 = 1;
            while( true ) {
              local_40 = (ulonglong)(local_78 < 0x11);
              uVar4 = FUN_140d1d5c0(local_68,(longlong)local_res18);
              if ((local_40 | uVar4) == 0) break;
              iVar1 = FUN_140d3beb0(local_48,local_50,2,local_38[0]);
              if (iVar1 == 0) goto LAB_140d2cbd1;
              local_68 = local_68 + (longlong)local_50[0];
              local_6c = 0;
              iVar1 = FUN_140d3cc00(local_38,&local_6c,local_48,local_60,local_res20);
              if (iVar1 == 0) goto LAB_140d2cbd1;
              if (local_6c == 0) {
                *param_1 = 0;
                local_70 = 1;
                goto LAB_140d2cbd1;
              }
              iVar1 = FUN_140d2c020(param_6,1,local_78 + -1);
              if (iVar1 == 0) goto LAB_140d2cbd1;
              local_78 = local_78 + 1;
            }
            if (local_68 < (ulonglong)(longlong)local_res18) {
              FID_conflict__assert((wchar_t *)s_u_1413cc2f0,(wchar_t *)s_D_1413cc210,0x308);
            }
            *param_1 = 1;
            local_70 = 1;
          }
LAB_140d2cbd1:
          FUN_140d2d560(local_60);
          FUN_140d281e0(local_res20);
          FUN_140d27fa0(local_58);
        }
      }
      else {
        *param_1 = 1;
        local_70 = 1;
      }
    }
  }
  return local_70;
}


/* address=140d2cc10 name=FUN_140d2cc10 */

undefined4
FUN_140d2cc10(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined4 local_18 [6];
  
  iVar1 = FUN_140d2c890(local_18,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    local_18[0] = 0xffffffff;
  }
  return local_18[0];
}


/* address=140d2cc70 name=FUN_140d2cc70 */

void FUN_140d2cc70(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d2cc10(param_1,param_2,param_3,0,param_4);
  return;
}


/* address=140d2ccc0 name=FUN_140d2ccc0 */

undefined4
FUN_140d2ccc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_14 [5];
  
  iVar1 = FUN_140d424b0(param_1,local_14,param_2,param_3,param_4);
  if ((iVar1 != 0) && (iVar1 = FUN_140d29c10(param_1,param_1,local_14[0]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140d2cd40 name=FUN_140d2cd40 */

longlong FUN_140d2cd40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  longlong local_res8;
  longlong local_res10;
  undefined local_24 [4];
  longlong local_20;
  longlong local_18;
  
  local_18 = 0;
  local_res8 = param_1;
  if ((param_1 == 0) && (local_res8 = FUN_140d275e0(), local_18 = local_res8, local_res8 == 0)) {
    return 0;
  }
  bVar1 = false;
  local_20 = 0;
  if ((*(int *)(param_2 + 0x10) != 0) ||
     (iVar2 = FUN_140d29780(param_2,param_3), local_res10 = param_2, -1 < iVar2)) {
    local_20 = FUN_140d276f0(param_2);
    if ((local_20 == 0) || (iVar2 = FUN_140d2a920(local_20,local_20,param_3,param_4), iVar2 == 0))
    goto LAB_140d2ce6a;
    local_res10 = local_20;
  }
  iVar2 = FUN_140d29af0(param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_140d3e6c0(local_res8,local_24,local_res10,param_3,param_4);
  }
  else {
    iVar2 = FUN_140d2d020(local_res8,local_24,local_res10,param_3,param_4);
  }
  if (iVar2 != 0) {
    bVar1 = true;
  }
LAB_140d2ce6a:
  if (!bVar1) {
    FUN_140d27660(local_18);
    local_res8 = 0;
  }
  FUN_140d27660(local_20);
  return local_res8;
}


/* address=140d2cea0 name=FUN_140d2cea0 */

undefined4
FUN_140d2cea0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined4 local_28;
  undefined local_20 [32];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  *param_2 = 0;
  iVar1 = FUN_140d27a70(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_140d29660(param_3,param_4 + 0x18), -1 < iVar1)) {
    FUN_140d186f0(3,0,0x6b,s_D__a_1_s_target_release_build_bo_1413c9850,CONCAT44(uVar3,0x14c));
    return 0;
  }
  local_28 = 0;
  FUN_140d27630(local_20);
  iVar1 = FUN_140d2bea0(local_20,1,param_4 + 0x18);
  if (iVar1 != 0) {
    uVar2 = param_5;
    iVar1 = FUN_140d2d750(param_1,local_20,param_3,param_4,param_5);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (iVar1 != 0) {
      uVar2 = param_5;
      iVar1 = FUN_140d2d020(param_1,param_2,param_1,param_4 + 0x18,param_5);
      uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if (iVar1 != 0) {
        iVar1 = FUN_140d2d750(param_1,local_20,param_1,param_4,param_5);
        uVar3 = (undefined4)((ulonglong)param_5 >> 0x20);
        if (iVar1 != 0) {
          local_28 = 1;
          goto LAB_140d2cff9;
        }
      }
    }
  }
  FUN_140d186f0(3,0,3,s_D__a_1_s_target_release_build_bo_1413c98c0,CONCAT44(uVar3,0x158));
LAB_140d2cff9:
  FUN_140d27660(local_20);
  return local_28;
}


/* address=140d2d020 name=FUN_140d2d020 */

undefined4
FUN_140d2d020(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int local_48;
  undefined4 local_44;
  
  *param_2 = 0;
  iVar1 = FUN_140d29af0(param_4);
  if (iVar1 == 0) {
    FUN_140d186f0(3,0,0x68,s_D__a_1_s_target_release_build_bo_1413c9700,0x79);
    return 0;
  }
  iVar1 = FUN_140d27a70(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_140d29660(param_3,param_4), -1 < iVar1)) {
    FUN_140d186f0(3,0,0x6b,s_D__a_1_s_target_release_build_bo_1413c9770,0x7e);
    return 0;
  }
  local_44 = 0;
  FUN_140d28030(param_5);
  lVar2 = FUN_140d28090(param_5);
  uVar3 = FUN_140d28090(param_5);
  uVar4 = FUN_140d28090(param_5);
  lVar5 = FUN_140d28090(param_5);
  if (lVar5 != 0) {
    FUN_140d27910(lVar5);
    iVar1 = FUN_140d27940(uVar4);
    if (((iVar1 != 0) && (lVar6 = FUN_140d27750(uVar3,param_3), lVar6 != 0)) &&
       (lVar6 = FUN_140d27750(lVar2,param_4), lVar6 != 0)) {
      *(undefined4 *)(lVar2 + 0x10) = 0;
      while (iVar1 = FUN_140d29a20(uVar3), iVar1 == 0) {
        local_48 = 0;
        while (iVar1 = FUN_140d2a2b0(uVar3,local_48), iVar1 == 0) {
          local_48 = local_48 + 1;
          iVar1 = FUN_140d29af0(uVar4);
          if (((iVar1 != 0) && (iVar1 = FUN_140d28320(uVar4,uVar4,param_4), iVar1 == 0)) ||
             (iVar1 = FUN_140d2a050(uVar4,uVar4), iVar1 == 0)) goto LAB_140d2d434;
        }
        if ((0 < local_48) && (iVar1 = FUN_140d29f90(uVar3,uVar3,local_48), iVar1 == 0))
        goto LAB_140d2d434;
        local_48 = 0;
        while (iVar1 = FUN_140d2a2b0(lVar2,local_48), iVar1 == 0) {
          local_48 = local_48 + 1;
          iVar1 = FUN_140d29af0(lVar5);
          if (((iVar1 != 0) && (iVar1 = FUN_140d28320(lVar5,lVar5,param_4), iVar1 == 0)) ||
             (iVar1 = FUN_140d2a050(lVar5,lVar5), iVar1 == 0)) goto LAB_140d2d434;
        }
        if ((0 < local_48) && (iVar1 = FUN_140d29f90(lVar2,lVar2,local_48), iVar1 == 0))
        goto LAB_140d2d434;
        iVar1 = FUN_140d29780(uVar3,lVar2);
        if (iVar1 < 0) {
          iVar1 = FUN_140d28320(lVar5,lVar5,uVar4);
          if (iVar1 == 0) goto LAB_140d2d434;
          iVar1 = FUN_140d28650(lVar2,lVar2,uVar3);
        }
        else {
          iVar1 = FUN_140d28320(uVar4,uVar4,lVar5);
          if (iVar1 == 0) goto LAB_140d2d434;
          iVar1 = FUN_140d28650(uVar3,uVar3,lVar2);
        }
        if (iVar1 == 0) goto LAB_140d2d434;
      }
      iVar1 = FUN_140d29a40(lVar2);
      if (iVar1 == 0) {
        *param_2 = 1;
        FUN_140d186f0(3,0,0x70,s_D__a_1_s_target_release_build_bo_1413c97e0,0xf8);
      }
      else {
        iVar1 = FUN_140d28510(lVar5,param_4,lVar5);
        if (iVar1 != 0) {
          if ((*(int *)(lVar5 + 0x10) == 0) && (iVar1 = FUN_140d29780(lVar5,param_4), iVar1 < 0)) {
            lVar2 = FUN_140d27750(param_1,lVar5);
            if (lVar2 == 0) goto LAB_140d2d434;
          }
          else {
            iVar1 = FUN_140d2a920(param_1,lVar5,param_4,param_5);
            if (iVar1 == 0) goto LAB_140d2d434;
          }
          local_44 = 1;
        }
      }
    }
  }
LAB_140d2d434:
  FUN_140d281e0(param_5);
  return local_44;
}


/* address=140d2d450 name=FUN_140d2d450 */

longlong FUN_140d2d450(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140d2f230();
  if ((lVar2 == 0) || (iVar1 = FUN_140d2f290(lVar2,param_1,param_2), iVar1 == 0)) {
    FUN_140d2d560(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


/* address=140d2d4b0 name=FUN_140d2d4b0 */

longlong FUN_140d2d4b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140d2f230();
  if ((((lVar2 == 0) || (iVar1 = FUN_140d42b50(lVar2,param_1), iVar1 == 0)) ||
      (iVar1 = FUN_140d3c210(lVar2,*(int *)(lVar2 + 0x20) << 7,lVar2 + 0x18,param_2), iVar1 == 0))
     || (iVar1 = FUN_140d2f8b0(lVar2,(longlong)*(int *)(lVar2 + 0x20)), iVar1 == 0)) {
    FUN_140d2d560(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


/* address=140d2d560 name=FUN_140d2d560 */

void FUN_140d2d560(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140d27660(param_1);
    FUN_140d27660(param_1 + 0x18);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d2d670 name=FUN_140d2d670 */

void FUN_140d2d670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d2d750(param_1,param_2,param_3,param_3,param_4);
  return;
}


/* address=140d2d6c0 name=FUN_140d2d6c0 */

undefined4
FUN_140d2d6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_18;
  
  local_18 = 0;
  FUN_140d28030(param_4);
  lVar1 = FUN_140d28090(param_4);
  if ((lVar1 != 0) && (lVar2 = FUN_140d27750(lVar1,param_2), lVar2 != 0)) {
    local_18 = FUN_140d42f50(param_1,lVar1,param_3);
  }
  FUN_140d281e0(param_4);
  return local_18;
}


/* address=140d2d750 name=FUN_140d2d750 */

undefined8
FUN_140d2d750(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_2 + 2) == 0) && (*(int *)(param_3 + 2) == 0)) {
    uVar1 = *(uint *)(param_4 + 0x20);
    if ((((int)uVar1 < 2) || (*(uint *)(param_2 + 1) != uVar1)) || (*(uint *)(param_3 + 1) != uVar1)
       ) {
      uVar3 = FUN_140d43070(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar2 = FUN_140d2f730(param_1,(longlong)(int)uVar1);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        if (0x400 < uVar1) {
          FID_conflict__assert((wchar_t *)s___1413ca770,(wchar_t *)s_D_1413ca690,0x1b5);
        }
        iVar2 = FUN_140ca7740(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x18),
                              param_4 + 0x30,(longlong)(int)uVar1);
        if (iVar2 == 0) {
          FID_conflict__assert((wchar_t *)&DAT_1413c5d98,(wchar_t *)s_D_1413ca7c0,0x1b8);
          FUN_140d186f0(3,0,0x44,s_D__a_1_s_target_release_build_bo_1413ca8a0,0x1b9);
          uVar3 = 0;
        }
        else {
          *(undefined4 *)(param_1 + 2) = 0;
          *(uint *)(param_1 + 1) = uVar1;
          uVar3 = 1;
        }
      }
    }
  }
  else {
    FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413ca620,0x1a6);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d2dba0 name=FUN_140d2dba0 */

void FUN_140d2dba0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined auStack_198 [32];
  undefined8 local_178;
  int local_168;
  uint local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  longlong local_150;
  int local_148;
  int local_144;
  int local_140;
  undefined4 local_13c;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  longlong alStack_118 [32];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_198;
  iVar1 = FUN_140d29af0(param_4);
  if (iVar1 == 0) {
    local_178 = CONCAT44(local_178._4_4_,0x24e);
    FUN_140d186f0(3,0,0x68,s_D__a_1_s_target_release_build_bo_1413c80f0);
    goto LAB_140d2e1a8;
  }
  if (*(int *)(param_4 + 0x10) != 0) {
    local_178 = CONCAT44(local_178._4_4_,0x252);
    FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413c8170);
    goto LAB_140d2e1a8;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar2 = FUN_140d29780(param_2,param_4);
    iVar1 = FUN_140d1d7b0(uVar2);
    if (iVar1 < 0) {
      local_144 = FUN_140d27880(param_3);
      if (local_144 == 0) {
        iVar1 = FUN_140d29950(param_4,1);
        if (iVar1 == 0) {
          FUN_140d27940(param_1);
        }
        else {
          FUN_140d27910(param_1);
        }
        goto LAB_140d2e1a8;
      }
      local_13c = 0;
      local_138 = 0;
      FUN_140d28030(param_5);
      local_150 = FUN_140d28090(param_5);
      alStack_118[0] = FUN_140d28090(param_5);
      if (((local_150 != 0) && (alStack_118[0] != 0)) &&
         ((param_6 != 0 ||
          (param_6 = FUN_140d2d4b0(param_4,param_5), local_138 = param_6, param_6 != 0)))) {
        local_148 = FUN_140d41c00((longlong)local_144);
        iVar1 = FUN_140d2d670(alStack_118[0],param_2,param_6,param_5);
        if (iVar1 != 0) {
          if (local_148 < 2) {
LAB_140d2def4:
            local_154 = 1;
            local_168 = local_144 + -1;
            while( true ) {
              while (iVar1 = FUN_140d2a2b0(param_3,local_168), iVar1 != 0) {
                local_164 = 1;
                local_158 = 0;
                for (local_15c = 1; (local_15c < local_148 && (local_15c <= local_168));
                    local_15c = local_15c + 1) {
                  iVar1 = FUN_140d2a2b0(param_3,local_168 - local_15c);
                  if (iVar1 != 0) {
                    local_164 = local_164 << ((char)local_15c - (char)local_158 & 0x1fU) | 1;
                    local_158 = local_15c;
                  }
                }
                if (local_154 == 0) {
                  for (local_140 = 0; local_140 < local_158 + 1; local_140 = local_140 + 1) {
                    local_178 = param_5;
                    iVar1 = FUN_140d2d750(local_150,local_150,local_150,param_6);
                    if (iVar1 == 0) goto LAB_140d2e18d;
                  }
                }
                if ((local_164 & 1) == 0) {
                  FID_conflict__assert((wchar_t *)s_w_1413c8358,(wchar_t *)s_D_1413c8270,0x2b4);
                }
                local_12c = 1;
                if (1 << ((byte)local_148 & 0x1f) <= (int)local_164) {
                  FID_conflict__assert((wchar_t *)s_w_1413c8458,(wchar_t *)s_D_1413c8370,0x2b5);
                }
                if (local_154 == 0) {
                  local_178 = param_5;
                  iVar1 = FUN_140d2d750(local_150,local_150,alStack_118[(int)local_164 >> 1],param_6
                                       );
                  if (iVar1 == 0) goto LAB_140d2e18d;
                }
                else {
                  lVar3 = FUN_140d27750(local_150,alStack_118[(int)local_164 >> 1]);
                  if (lVar3 == 0) goto LAB_140d2e18d;
                }
                local_154 = 0;
                if (local_168 == local_158) goto LAB_140d2e13b;
                local_168 = local_168 - (local_158 + 1);
              }
              if (local_154 == 0) {
                local_178 = param_5;
                iVar1 = FUN_140d2d750(local_150,local_150,local_150,param_6);
                if (iVar1 == 0) goto LAB_140d2e18d;
              }
              if (local_168 == 0) break;
              local_168 = local_168 + -1;
            }
LAB_140d2e13b:
            if (local_154 != 0) {
              FID_conflict__assert((wchar_t *)s___1413c8578,(wchar_t *)s_D_1413c8490,0x2c6);
            }
            iVar1 = FUN_140d2d6c0(param_1,local_150,param_6,param_5);
            if (iVar1 != 0) {
              local_13c = 1;
            }
          }
          else {
            local_128 = FUN_140d28090(param_5);
            if (local_128 != 0) {
              local_178 = param_5;
              iVar1 = FUN_140d2d750(local_128,alStack_118[0],alStack_118[0],param_6);
              if (iVar1 != 0) {
                for (local_160 = 1; local_130 = 1, local_160 < 1 << ((char)local_148 - 1U & 0x1f);
                    local_160 = local_160 + 1) {
                  lVar3 = FUN_140d28090(param_5);
                  alStack_118[local_160] = lVar3;
                  if (alStack_118[local_160] == 0) goto LAB_140d2e18d;
                  local_178 = param_5;
                  iVar1 = FUN_140d2d750(alStack_118[local_160],alStack_118[local_160 + -1],local_128
                                        ,param_6);
                  if (iVar1 == 0) goto LAB_140d2e18d;
                }
                goto LAB_140d2def4;
              }
            }
          }
        }
      }
LAB_140d2e18d:
      FUN_140d2d560(local_138);
      FUN_140d281e0(param_5);
      goto LAB_140d2e1a8;
    }
  }
  local_178 = CONCAT44(local_178._4_4_,599);
  FUN_140d186f0(3,0,0x6b,s_D__a_1_s_target_release_build_bo_1413c81f0);
LAB_140d2e1a8:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_198);
  return;
}


/* address=140d2e1d0 name=FUN_140d2e1d0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140d2e1d0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined auStack_1718 [32];
  undefined8 local_16f8;
  undefined8 local_16f0;
  undefined8 local_16e8;
  int local_16c0;
  int local_16bc;
  uint local_16b8;
  uint local_16b4;
  uint local_16b0;
  undefined *local_16a8;
  ushort local_16a0 [4];
  undefined *local_1698;
  undefined4 local_1690;
  uint local_168c;
  undefined4 local_1688;
  undefined4 local_1684;
  undefined *local_1680;
  undefined8 *local_1678;
  int local_1670;
  int local_166c;
  ulonglong local_1668;
  int local_1660;
  undefined4 local_165c;
  undefined *local_1658;
  int local_1650;
  uint local_164c;
  undefined4 local_1648;
  undefined4 local_1644;
  uint local_1640;
  uint local_163c;
  uint local_1638;
  uint local_1634;
  int local_1630;
  longlong local_1628;
  undefined8 *local_1620;
  undefined4 local_1618;
  longlong local_1610;
  undefined local_1600 [5568];
  ulonglong local_40;
  undefined8 uStack_10;
  
  uStack_10 = 0x140d2e1ef;
  local_40 = DAT_1413fba80 ^ (ulonglong)auStack_1718;
  local_165c = 0;
  local_1620 = (undefined8 *)0x0;
  local_1628 = 0;
  local_1668 = 0;
  local_16a8 = (undefined *)0x0;
  iVar1 = FUN_140d29af0(param_4);
  if (iVar1 == 0) {
    local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,0x37e);
    FUN_140d186f0(3,0,0x68,s_D__a_1_s_target_release_build_bo_1413c8bb0);
    goto LAB_140d2ef9b;
  }
  if (*(int *)(param_4 + 2) != 0) {
    local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,0x382);
    FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413c8c30);
    goto LAB_140d2ef9b;
  }
  if ((*(int *)(param_2 + 2) != 0) || (iVar1 = FUN_140d29780(param_2,param_4), -1 < iVar1)) {
    local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,0x386);
    FUN_140d186f0(3,0,0x6b,s_D__a_1_s_target_release_build_bo_1413c8cb0);
    goto LAB_140d2ef9b;
  }
  local_16bc = *(int *)(param_3 + 1) * 0x40;
  local_166c = local_16bc;
  if (local_16bc == 0) {
    iVar1 = FUN_140d29950(param_4,1);
    if (iVar1 == 0) {
      FUN_140d27940(param_1);
    }
    else {
      FUN_140d27910(param_1);
    }
    goto LAB_140d2ef9b;
  }
  if ((param_6 != (undefined8 *)0x0) ||
     (param_6 = (undefined8 *)FUN_140d2d4b0(param_4,param_5), local_1620 = param_6,
     param_6 != (undefined8 *)0x0)) {
    local_16b8 = *(uint *)(param_6 + 4);
    if ((*(int *)(param_2 + 1) == 0x10) &&
       (((*(int *)(param_3 + 1) == 0x10 && (iVar1 = FUN_140d27880(param_4), iVar1 == 0x400)) &&
        (iVar1 = FUN_140d41560(), iVar1 != 0)))) {
      iVar1 = FUN_140d2f730(param_1,0x10);
      if (iVar1 != 0) {
        local_16e8 = local_1600;
        local_16f0 = param_6[6];
        local_16f8 = (undefined8 *)*param_6;
        FUN_140d40f90(*param_1,*param_2,*param_3,*param_4);
        *(undefined4 *)(param_1 + 1) = 0x10;
        *(undefined4 *)(param_1 + 2) = 0;
        local_165c = 1;
      }
    }
    else {
      if (local_16bc < 0x3aa) {
        if (local_16bc < 0x133) {
          if (local_16bc < 0x5a) {
            if (local_16bc < 0x17) {
              local_1640 = 1;
            }
            else {
              local_1640 = 3;
            }
            local_163c = local_1640;
          }
          else {
            local_163c = 4;
          }
          local_1638 = local_163c;
        }
        else {
          local_1638 = 5;
        }
        local_1634 = local_1638;
      }
      else {
        local_1634 = 6;
      }
      local_16b0 = local_1634;
      if (6 < local_1634) {
        FID_conflict__assert((wchar_t *)s_w_1413c8e20,(wchar_t *)s_D_1413c8d30,0x3bf);
      }
      if (0x400 < local_16b8) {
        FID_conflict__assert((wchar_t *)s___1413c8f60,(wchar_t *)s_D_1413c8e70,0x3c3);
      }
      if (4 < (int)local_16b0) {
        local_16b0 = 5;
        local_1668 = local_1668 + (longlong)(int)local_16b8 * 8;
      }
      local_1618 = 1;
      local_1660 = 1 << ((byte)local_16b0 & 0x1f);
      local_1668 = local_1668 + (longlong)(int)local_16b8 * 8 * (longlong)(local_1660 + 2);
      if (local_1668 < 0x15c1) {
        local_16a8 = local_1600;
      }
      if ((local_16a8 == (undefined *)0x0) && ((int)(local_16b8 * 0x40) < 0x401)) {
        FID_conflict__assert((wchar_t *)s_p_1413c90a0,(wchar_t *)s_D_1413c8fb0,0x3db);
      }
      if (local_16a8 == (undefined *)0x0) {
        local_1628 = FUN_140d76180(local_1668 + 0x40);
        if (local_1628 == 0) goto LAB_140d2ef61;
        local_16a8 = (undefined *)FUN_140d1d4b0(local_1628,0x40);
      }
      FUN_140d1d930(local_16a8,0,local_1668);
      local_1698 = local_16a8 + (longlong)(int)(local_16b8 * local_1660) * 8;
      local_1658 = local_1698 + (longlong)(int)local_16b8 * 8;
      local_1650 = 0;
      local_1690 = 0;
      local_164c = local_16b8;
      local_168c = local_16b8;
      local_1648 = 0;
      local_1688 = 0;
      local_1644 = 2;
      local_1684 = 2;
      iVar1 = FUN_140d3c750(&local_1698,param_6,param_5);
      if ((iVar1 != 0) && (iVar1 = FUN_140d2f8b0(&local_1698,(longlong)(int)local_16b8), iVar1 != 0)
         ) {
        if (*(int *)(param_2 + 2) != 0) {
          FID_conflict__assert((wchar_t *)s___1413c91e8,(wchar_t *)s_D_1413c9100,0x3f5);
        }
        iVar1 = FUN_140d29780(param_2,param_4);
        if (-1 < iVar1) {
          FID_conflict__assert((wchar_t *)s_B_1413c92e8,(wchar_t *)s_D_1413c9200,0x3f6);
        }
        iVar1 = FUN_140d2d670(&local_1658,param_2,param_6,param_5);
        if ((iVar1 != 0) &&
           (iVar1 = FUN_140d2f8b0(&local_1658,(longlong)(int)local_16b8), iVar1 != 0)) {
          if ((local_16b0 == 5) && (1 < (int)local_16b8)) {
            local_1680 = local_1658 + (longlong)(int)local_16b8 * 8;
            for (local_16c0 = 0; local_16c0 < (int)local_16b8; local_16c0 = local_16c0 + 1) {
              *(undefined8 *)(local_1680 + (longlong)local_16c0 * 8) =
                   *(undefined8 *)(param_6[3] + (longlong)local_16c0 * 8);
            }
            local_1678 = param_6 + 6;
            FUN_140caba10(local_1698,(longlong)(int)local_16b8,local_16a8,0);
            FUN_140caba10(local_1658,(longlong)local_1650,local_16a8,1);
            local_16f0 = (longlong)(int)local_16b8;
            local_16f8 = local_1678;
            FUN_140ca7740(local_1698,local_1658,local_1658,local_1680);
            FUN_140caba10(local_1698,(longlong)(int)local_16b8,local_16a8,2);
            for (local_16c0 = 4; local_16c0 < 0x20; local_16c0 = local_16c0 << 1) {
              local_16f0 = (longlong)(int)local_16b8;
              local_16f8 = local_1678;
              FUN_140ca7740(local_1698,local_1698,local_1698,local_1680);
              FUN_140caba10(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)local_16c0);
            }
            for (local_16c0 = 3; local_16c0 < 0x20; local_16c0 = local_16c0 + 2) {
              local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,local_16c0 + -1);
              local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
              local_16f8 = local_1678;
              FUN_140ca8a00(local_1698,local_1658,local_16a8,local_1680);
              FUN_140caba10(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)local_16c0);
              local_1670 = local_16c0;
              while (local_1670 = local_1670 << 1, local_1670 < 0x20) {
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140ca7740(local_1698,local_1698,local_1698,local_1680);
                FUN_140caba10(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)local_1670);
              }
            }
            local_16bc = local_16bc + -1;
            local_16b4 = 0;
            for (local_16c0 = local_16bc % 5; -1 < local_16c0; local_16c0 = local_16c0 + -1) {
              iVar1 = FUN_140d2a2b0(param_3,local_16bc);
              local_16b4 = iVar1 + local_16b4 * 2;
              local_16bc = local_16bc + -1;
            }
            FUN_140caba40(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)(int)local_16b4)
            ;
            if ((local_16bc < -1) || ((local_16bc != -1 && (local_16bc % 5 != 4)))) {
              FID_conflict__assert((wchar_t *)s_b_1413c9400,(wchar_t *)s_D_1413c9310,0x434);
            }
            if ((local_16b8 & 7) == 0) {
              local_1610 = *param_3;
              if (local_166c <= local_16bc) {
                FID_conflict__assert((wchar_t *)s_b_1413c9548,(wchar_t *)s_D_1413c9460,0x447);
              }
              if (local_166c < 0x40) {
                FID_conflict__assert((wchar_t *)s_m_1413c9658,(wchar_t *)s_D_1413c9570,0x44a);
              }
              if (local_166c + -8 <= local_16bc + -4) {
                uVar2 = (int)(uint)*(byte *)(local_1610 + (*(int *)(param_3 + 1) * 8 + -1)) >>
                        ((char)local_16bc - 4U & 7);
                local_16b4 = uVar2 & 0x1f;
                local_16bc = local_16bc + -5;
                local_16e8 = (undefined *)(CONCAT44(local_16e8._4_4_,uVar2) & 0xffffffff0000001f);
                local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
                local_16f8 = local_1678;
                FUN_140ca99c0(local_1698,local_1698,local_16a8,local_1680);
              }
              while (-1 < local_16bc) {
                local_1630 = local_16bc + -4;
                FUN_140d1d890(local_16a0,local_1610 + (local_1630 >> 3),2);
                local_16a0[0] = local_16a0[0] >> ((byte)local_1630 & 7) & 0x1f;
                local_16bc = local_16bc + -5;
                local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,(uint)local_16a0[0]);
                local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
                local_16f8 = local_1678;
                FUN_140ca99c0(local_1698,local_1698,local_16a8,local_1680);
              }
            }
            else {
              while (-1 < local_16bc) {
                local_16b4 = 0;
                for (local_16c0 = 0; local_16c0 < 5; local_16c0 = local_16c0 + 1) {
                  iVar1 = FUN_140d2a2b0(param_3,local_16bc);
                  local_16b4 = iVar1 + local_16b4 * 2;
                  local_16bc = local_16bc + -1;
                }
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140ca7740(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140ca7740(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140ca7740(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140ca7740(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_140ca7740(local_1698,local_1698,local_1698,local_1680);
                local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,local_16b4);
                local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
                local_16f8 = local_1678;
                FUN_140ca8a00(local_1698,local_1698,local_16a8,local_1680);
              }
            }
LAB_140d2ef33:
            iVar1 = FUN_140d2d6c0(param_1,&local_1698,param_6,param_5);
            if (iVar1 != 0) {
              local_165c = 1;
            }
          }
          else {
            local_16f8._0_4_ = local_16b0;
            FUN_140d42180(&local_1698,local_16b8,local_16a8,0);
            local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
            FUN_140d42180(&local_1658,local_16b8,local_16a8,1);
            if (1 < (int)local_16b0) {
              local_16f8 = param_5;
              iVar1 = FUN_140d2d750(&local_1698,&local_1658,&local_1658,param_6);
              if (iVar1 == 0) goto LAB_140d2ef61;
              local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
              FUN_140d42180(&local_1698,local_16b8,local_16a8,2);
              for (local_16c0 = 3; local_16c0 < local_1660; local_16c0 = local_16c0 + 1) {
                local_16f8 = param_5;
                iVar1 = FUN_140d2d750(&local_1698,&local_1658,&local_1698,param_6);
                if (iVar1 == 0) goto LAB_140d2ef61;
                local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
                FUN_140d42180(&local_1698,local_16b8,local_16a8,local_16c0);
              }
            }
            local_16bc = local_16bc + -1;
            local_16b4 = 0;
            for (local_16c0 = local_16bc % (int)local_16b0; -1 < local_16c0;
                local_16c0 = local_16c0 + -1) {
              iVar1 = FUN_140d2a2b0(param_3,local_16bc);
              local_16b4 = iVar1 + local_16b4 * 2;
              local_16bc = local_16bc + -1;
            }
            local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
            iVar1 = FUN_140d421f0(&local_1698,local_16b8,local_16a8,local_16b4);
            while (iVar1 != 0) {
              if (local_16bc < 0) goto LAB_140d2ef33;
              local_16b4 = 0;
              for (local_16c0 = 0; local_16c0 < (int)local_16b0; local_16c0 = local_16c0 + 1) {
                local_16f8 = param_5;
                iVar1 = FUN_140d2d750(&local_1698,&local_1698,&local_1698,param_6);
                if (iVar1 == 0) goto LAB_140d2ef61;
                iVar1 = FUN_140d2a2b0(param_3,local_16bc);
                local_16b4 = iVar1 + local_16b4 * 2;
                local_16bc = local_16bc + -1;
              }
              local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
              iVar1 = FUN_140d421f0(&local_1658,local_16b8,local_16a8,local_16b4);
              if (iVar1 == 0) break;
              local_16f8 = param_5;
              iVar1 = FUN_140d2d750(&local_1698,&local_1698,&local_1658,param_6);
            }
          }
        }
      }
    }
  }
LAB_140d2ef61:
  FUN_140d2d560(local_1620);
  if ((local_16a8 != (undefined *)0x0) && (local_1628 == 0)) {
    FUN_140d76450(local_16a8,local_1668);
  }
  FUN_140d762b0(local_1628);
LAB_140d2ef9b:
  FUN_140e28050(local_40 ^ (ulonglong)auStack_1718);
  return;
}


/* address=140d2f0c0 name=FUN_140d2f0c0 */

undefined4
FUN_140d2f0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  undefined4 local_38;
  longlong local_30;
  undefined local_28 [40];
  
  FUN_140d27630(local_28);
  local_38 = 0;
  local_30 = 0;
  if ((((param_8 != 0) ||
       (param_8 = FUN_140d2d450(param_6,param_7), local_30 = param_8, param_8 != 0)) &&
      (iVar1 = FUN_140d2dba0(param_1,param_2,param_3,param_6,param_7,param_8), iVar1 != 0)) &&
     (((iVar1 = FUN_140d2dba0(local_28,param_4,param_5,param_6,param_7,param_8), iVar1 != 0 &&
       (iVar1 = FUN_140d2d670(param_1,param_1,param_8,param_7), iVar1 != 0)) &&
      (iVar1 = FUN_140d2d750(param_1,param_1,local_28,param_8,param_7), iVar1 != 0)))) {
    local_38 = 1;
  }
  FUN_140d2d560(local_30);
  FUN_140d27660(local_28);
  return local_38;
}


/* address=140d2f230 name=FUN_140d2f230 */

longlong FUN_140d2f230(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140d76180(0x40);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d1d930(lVar1,0,0x40);
    FUN_140d27630(lVar1);
    FUN_140d27630(lVar1 + 0x18);
  }
  return lVar1;
}


/* address=140d2f290 name=FUN_140d2f290 */

undefined4 FUN_140d2f290(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong local_res18;
  undefined4 local_28;
  longlong local_18;
  
  iVar1 = FUN_140d42b50(param_1,param_2);
  if (iVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_18 = 0;
    local_res18 = param_3;
    if ((param_3 == 0) && (local_res18 = FUN_140d27f30(), local_18 = local_res18, local_res18 == 0))
    {
      local_28 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x20);
      FUN_140d27910(param_1);
      iVar1 = FUN_140d2a0e0(param_1,iVar1 << 7);
      if (((iVar1 == 0) ||
          (iVar1 = FUN_140d28a10(0,param_1,param_1,param_1 + 0x18,local_res18), iVar1 == 0)) ||
         (iVar1 = FUN_140d2f8b0(param_1,(longlong)*(int *)(param_1 + 0x20)), iVar1 == 0)) {
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
      FUN_140d27fa0(local_18);
    }
  }
  return local_28;
}


/* address=140d2f3c0 name=FUN_140d2f3c0 */

int FUN_140d2f3c0(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint local_24;
  
  local_24 = (uint)(param_1 != 0);
  lVar1 = -(param_1 >> 0x20);
  param_1 = param_1 ^ (param_1 >> 0x20 ^ param_1) & lVar1 >> 0x3f;
  lVar2 = -(param_1 >> 0x10);
  param_1 = param_1 ^ (param_1 >> 0x10 ^ param_1) & lVar2 >> 0x3f;
  lVar3 = -(param_1 >> 8);
  param_1 = param_1 ^ (param_1 >> 8 ^ param_1) & lVar3 >> 0x3f;
  lVar4 = -(param_1 >> 4);
  param_1 = param_1 ^ (param_1 >> 4 ^ param_1) & lVar4 >> 0x3f;
  lVar5 = -(param_1 >> 2);
  return local_24 + ((uint)(lVar1 >> 0x3f) & 0x20) + ((uint)(lVar2 >> 0x3f) & 0x10) +
         ((uint)(lVar3 >> 0x3f) & 8) + ((uint)(lVar4 >> 0x3f) & 4) + ((uint)(lVar5 >> 0x3f) & 2) +
         ((uint)((longlong)-((param_1 ^ (param_1 >> 2 ^ param_1) & lVar5 >> 0x3f) >> 1) >> 0x3f) & 1
         );
}


/* address=140d2f660 name=FUN_140d2f660 */

uint FUN_140d2f660(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=140d2f680 name=FUN_140d2f680 */

uint FUN_140d2f680(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=140d2f6a0 name=FUN_140d2f6a0 */

int FUN_140d2f6a0(longlong *param_1)

{
  int local_18;
  
  local_18 = *(int *)(param_1 + 1);
  while ((0 < local_18 && (*(longlong *)(*param_1 + (longlong)(local_18 + -1) * 8) == 0))) {
    local_18 = local_18 + -1;
  }
  return local_18;
}


/* address=140d2f6f0 name=FUN_140d2f6f0 */

void FUN_140d2f6f0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140d2f6a0(param_1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


/* address=140d2f730 name=FUN_140d2f730 */

undefined8 FUN_140d2f730(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_res10;
  
  if ((ulonglong)(longlong)*(int *)((longlong)param_1 + 0xc) < param_2) {
    if (param_2 < 0x800000) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
        lVar2 = FUN_140d76180(param_2 << 3);
        if (lVar2 == 0) {
          uVar1 = 0;
        }
        else {
          FUN_140d1d890(lVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
          FUN_140d762b0(*param_1);
          *param_1 = lVar2;
          local_res10 = (undefined4)param_2;
          *(undefined4 *)((longlong)param_1 + 0xc) = local_res10;
          uVar1 = 1;
        }
      }
      else {
        FUN_140d186f0(3,0,0x6a,s_D__a_1_s_target_release_build_bo_1413c6c50,0x168);
        uVar1 = 0;
      }
    }
    else {
      FUN_140d186f0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413c6be0,0x163);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d2f840 name=FUN_140d2f840 */

undefined8 FUN_140d2f840(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 + 0x3f < param_2) {
    FUN_140d186f0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413c6cc0,0x17c);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d2f730(param_1,(param_2 + 0x3f) / 0x40);
  }
  return uVar1;
}


/* address=140d2f8b0 name=FUN_140d2f8b0 */

undefined8 FUN_140d2f8b0(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_res10;
  
  local_res10 = (undefined4)param_2;
  if (param_2 < (ulonglong)(longlong)*(int *)(param_1 + 1)) {
    iVar1 = FUN_140d2fb30(param_1,param_2);
    if (iVar1 == 0) {
      FUN_140d186f0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413c6d30,399);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = local_res10;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_140d2f730(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_140d1d930(*param_1 + (longlong)*(int *)(param_1 + 1) * 8,0,
                    (param_2 - (longlong)*(int *)(param_1 + 1)) * 8);
      *(undefined4 *)(param_1 + 1) = local_res10;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d2f990 name=FUN_140d2f990 */

void FUN_140d2f990(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < param_5; local_18 = local_18 + 1) {
    uVar1 = FUN_140d1d720(param_2,*(undefined8 *)(param_3 + local_18 * 8),
                          *(undefined8 *)(param_4 + local_18 * 8));
    *(undefined8 *)(param_1 + local_18 * 8) = uVar1;
  }
  return;
}


/* address=140d2fa10 name=FUN_140d2fa10 */

bool FUN_140d2fa10(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 local_res18;
  
  iVar1 = FUN_140d2f730(param_1,param_3);
  if (iVar1 != 0) {
    FUN_140d1d8e0(*param_1,param_2,param_3 << 3);
    local_res18 = (undefined4)param_3;
    *(undefined4 *)(param_1 + 1) = local_res18;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return iVar1 != 0;
}


/* address=140d2fa80 name=FUN_140d2fa80 */

void FUN_140d2fa80(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 local_res18;
  
  if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
    FUN_140d762b0(*param_1);
  }
  *param_1 = param_2;
  if (0x7fffff < param_3) {
    FID_conflict__assert((wchar_t *)s_n_1413c6ad0,(wchar_t *)s_D_1413c6a00,299);
  }
  local_res18 = (undefined4)param_3;
  *(undefined4 *)(param_1 + 1) = local_res18;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_res18;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 2;
  return;
}


/* address=140d2fb30 name=FUN_140d2fb30 */

bool FUN_140d2fb30(longlong *param_1,ulonglong param_2)

{
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = 0;
  for (local_20 = param_2; local_20 < (ulonglong)(longlong)*(int *)(param_1 + 1);
      local_20 = local_20 + 1) {
    local_18 = local_18 | *(ulonglong *)(*param_1 + local_20 * 8);
  }
  return local_18 == 0;
}


/* address=140d2fbc0 name=FUN_140d2fbc0 */

undefined8 FUN_140d2fbc0(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong local_18;
  
  if (*(int *)(param_3 + 2) == 0) {
    local_18 = (ulonglong)*(int *)(param_3 + 1);
    if ((param_2 < local_18) &&
       (iVar1 = FUN_140d2fb30(param_3,param_2), local_18 = param_2, iVar1 == 0)) {
      FUN_140d186f0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413c6b70,0x144);
      uVar2 = 0;
    }
    else {
      FUN_140d1d930(param_1,0,param_2 << 3);
      FUN_140d1d890(param_1,*param_3,local_18 << 3);
      uVar2 = 1;
    }
  }
  else {
    FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413c6b00,0x13d);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d2fcb0 name=FUN_140d2fcb0 */

void FUN_140d2fcb0(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong local_28;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(param_1 + 1);
  local_28 = param_2;
  if (param_2 < (ulonglong)((longlong)iVar1 << 3)) {
    for (; local_28 < (ulonglong)((longlong)iVar1 << 3); local_28 = local_28 + 1) {
      if (*(char *)(lVar2 + local_28) != '\0') {
        FID_conflict__assert((wchar_t *)s_b_1413c7078,(wchar_t *)s_D_1413c6fa0,0xab);
      }
    }
  }
  return;
}


/* address=140d2fd50 name=FUN_140d2fd50 */

ulonglong FUN_140d2fd50(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *local_res8;
  ulonglong *local_res10;
  ulonglong local_res18;
  ulonglong local_108;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  
  local_108 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 == 0) {
    local_108 = 0;
  }
  else {
    for (; (local_res18 & 0xfffffffffffffffc) != 0; local_res18 = local_res18 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *local_res10;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      uVar11 = SUB168(auVar1 * auVar6,0);
      local_d8 = (uint)(*local_res8 + local_108 < local_108);
      uVar12 = *local_res8 + local_108 + uVar11;
      local_d4 = (uint)(uVar12 < uVar11);
      uVar13 = (longlong)(int)local_d8 + SUB168(auVar1 * auVar6,8) + (longlong)(int)local_d4;
      *local_res8 = uVar12;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_res10[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_4;
      uVar11 = SUB168(auVar2 * auVar7,0);
      uVar12 = local_res8[1] + uVar13;
      local_d0 = (uint)(uVar12 < uVar13);
      uVar12 = uVar12 + uVar11;
      local_cc = (uint)(uVar12 < uVar11);
      uVar13 = (longlong)(int)local_d0 + SUB168(auVar2 * auVar7,8) + (longlong)(int)local_cc;
      local_res8[1] = uVar12;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_res10[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      uVar11 = SUB168(auVar3 * auVar8,0);
      uVar12 = local_res8[2] + uVar13;
      local_c8 = (uint)(uVar12 < uVar13);
      uVar12 = uVar12 + uVar11;
      local_c4 = (uint)(uVar12 < uVar11);
      uVar13 = (longlong)(int)local_c8 + SUB168(auVar3 * auVar8,8) + (longlong)(int)local_c4;
      local_res8[2] = uVar12;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_res10[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      uVar11 = SUB168(auVar4 * auVar9,0);
      uVar12 = local_res8[3] + uVar13;
      local_c0 = (uint)(uVar12 < uVar13);
      uVar12 = uVar12 + uVar11;
      local_bc = (uint)(uVar12 < uVar11);
      local_108 = (longlong)(int)local_c0 + SUB168(auVar4 * auVar9,8) + (longlong)(int)local_bc;
      local_res8[3] = uVar12;
      local_res10 = local_res10 + 4;
      local_res8 = local_res8 + 4;
    }
    for (; local_res18 != 0; local_res18 = local_res18 - 1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *local_res10;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4;
      uVar11 = SUB168(auVar5 * auVar10,0);
      local_b8 = (uint)(*local_res8 + local_108 < local_108);
      uVar12 = *local_res8 + local_108 + uVar11;
      local_b4 = (uint)(uVar12 < uVar11);
      local_108 = (longlong)(int)local_b8 + SUB168(auVar5 * auVar10,8) + (longlong)(int)local_b4;
      *local_res8 = uVar12;
      local_res10 = local_res10 + 1;
      local_res8 = local_res8 + 1;
    }
  }
  return local_108;
}


/* address=140d30400 name=FUN_140d30400 */

longlong FUN_140d30400(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *local_res8;
  ulonglong *local_res10;
  ulonglong local_res18;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  
  local_f8 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 == 0) {
    local_f8 = 0;
  }
  else {
    for (; (local_res18 & 0xfffffffffffffffc) != 0; local_res18 = local_res18 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *local_res10;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      uVar11 = SUB168(auVar1 * auVar6,0);
      uVar12 = uVar11 + local_f8;
      local_f0 = (uint)(uVar12 < uVar11);
      *local_res8 = uVar12;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_res10[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_4;
      uVar11 = SUB168(auVar2 * auVar7,0);
      uVar12 = uVar11 + SUB168(auVar1 * auVar6,8) + (longlong)(int)local_f0;
      local_ec = (uint)(uVar12 < uVar11);
      local_res8[1] = uVar12;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_res10[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      uVar11 = SUB168(auVar3 * auVar8,0);
      uVar12 = uVar11 + SUB168(auVar2 * auVar7,8) + (longlong)(int)local_ec;
      local_e8 = (uint)(uVar12 < uVar11);
      local_res8[2] = uVar12;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_res10[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      uVar11 = SUB168(auVar4 * auVar9,0);
      uVar12 = uVar11 + SUB168(auVar3 * auVar8,8) + (longlong)(int)local_e8;
      local_e4 = (uint)(uVar12 < uVar11);
      local_f8 = SUB168(auVar4 * auVar9,8) + (longlong)(int)local_e4;
      local_res8[3] = uVar12;
      local_res10 = local_res10 + 4;
      local_res8 = local_res8 + 4;
    }
    for (; local_res18 != 0; local_res18 = local_res18 - 1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *local_res10;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4;
      uVar11 = SUB168(auVar5 * auVar10,0);
      uVar12 = uVar11 + local_f8;
      local_e0 = (uint)(uVar12 < uVar11);
      local_f8 = SUB168(auVar5 * auVar10,8) + (longlong)(int)local_e0;
      *local_res8 = uVar12;
      local_res10 = local_res10 + 1;
      local_res8 = local_res8 + 1;
    }
  }
  return local_f8;
}


/* address=140d308c0 name=FUN_140d308c0 */

void FUN_140d308c0(undefined (*param_1) [16],ulonglong *param_2,ulonglong param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined (*local_res8) [16];
  ulonglong *local_res10;
  ulonglong local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 != 0) {
    for (; (local_res18 & 0xfffffffffffffffc) != 0; local_res18 = local_res18 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *local_res10;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *local_res10;
      *local_res8 = auVar1 * auVar6;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_res10[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_res10[1];
      local_res8[1] = auVar2 * auVar7;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_res10[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_res10[2];
      local_res8[2] = auVar3 * auVar8;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_res10[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_res10[3];
      local_res8[3] = auVar4 * auVar9;
      local_res10 = local_res10 + 4;
      local_res8 = local_res8 + 4;
    }
    for (; local_res18 != 0; local_res18 = local_res18 - 1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *local_res10;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *local_res10;
      *local_res8 = auVar5 * auVar10;
      local_res10 = local_res10 + 1;
      local_res8 = local_res8 + 1;
    }
  }
  return;
}


/* address=140d30b50 name=FUN_140d30b50 */

undefined8
FUN_140d30b50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined8 *local_res18;
  ulonglong local_res20;
  undefined8 local_18 [3];
  
  if (param_4 == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0;
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    for (local_res20 = param_4; (local_res20 & 0xfffffffffffffffc) != 0;
        local_res20 = local_res20 - 4) {
      uVar1 = FUN_140d42990(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      uVar1 = FUN_140d42990(local_res10[1],local_res18[1],local_18[0],local_18);
      local_res8[1] = uVar1;
      uVar1 = FUN_140d42990(local_res10[2],local_res18[2],local_18[0],local_18);
      local_res8[2] = uVar1;
      uVar1 = FUN_140d42990(local_res10[3],local_res18[3],local_18[0],local_18);
      local_res8[3] = uVar1;
      local_res10 = local_res10 + 4;
      local_res18 = local_res18 + 4;
      local_res8 = local_res8 + 4;
    }
    for (; local_res20 != 0; local_res20 = local_res20 - 1) {
      uVar1 = FUN_140d42990(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 1;
      local_res8 = local_res8 + 1;
    }
  }
  return local_18[0];
}


/* address=140d30d80 name=FUN_140d30d80 */

undefined8
FUN_140d30d80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined8 *local_res18;
  ulonglong local_res20;
  undefined8 local_18 [3];
  
  if (param_4 == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0;
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    for (local_res20 = param_4; (local_res20 & 0xfffffffffffffffc) != 0;
        local_res20 = local_res20 - 4) {
      uVar1 = FUN_140d42a80(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      uVar1 = FUN_140d42a80(local_res10[1],local_res18[1],local_18[0],local_18);
      local_res8[1] = uVar1;
      uVar1 = FUN_140d42a80(local_res10[2],local_res18[2],local_18[0],local_18);
      local_res8[2] = uVar1;
      uVar1 = FUN_140d42a80(local_res10[3],local_res18[3],local_18[0],local_18);
      local_res8[3] = uVar1;
      local_res10 = local_res10 + 4;
      local_res18 = local_res18 + 4;
      local_res8 = local_res8 + 4;
    }
    for (; local_res20 != 0; local_res20 = local_res20 - 1) {
      uVar1 = FUN_140d42a80(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 1;
      local_res8 = local_res8 + 1;
    }
  }
  return local_18[0];
}


/* address=140d30fb0 name=FUN_140d30fb0 */

/* WARNING: Removing unreachable block (ram,0x000140d310d1) */
/* WARNING: Removing unreachable block (ram,0x000140d31074) */
/* WARNING: Removing unreachable block (ram,0x000140d31220) */

void FUN_140d30fb0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
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
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  uint local_30c;
  uint local_308;
  uint local_304;
  uint local_300;
  uint local_2fc;
  uint local_2f8;
  uint local_2f4;
  uint local_2f0;
  uint local_2ec;
  uint local_2e8;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_294;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar17,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3[1];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = *param_2;
  uVar33 = SUB168(auVar2 * auVar18,0);
  uVar34 = SUB168(auVar1 * auVar17,8) + uVar33;
  local_294 = (uint)(uVar34 < uVar33);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[1];
  uVar33 = SUB168(auVar3 * auVar19,0);
  uVar34 = uVar34 + uVar33;
  local_30c = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar3 * auVar19,8) + (longlong)(int)local_30c;
  uVar35 = SUB168(auVar2 * auVar18,8) + (longlong)(int)local_294 + uVar33;
  local_308 = (uint)(uVar35 < uVar33);
  param_1[1] = uVar34;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_3;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[2];
  uVar33 = SUB168(auVar4 * auVar20,0);
  uVar35 = uVar35 + uVar33;
  local_304 = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar4 * auVar20,8) + (longlong)(int)local_304;
  uVar34 = (longlong)(int)local_308 + uVar33;
  local_300 = (uint)(uVar34 < uVar33);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3[1];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[1];
  uVar33 = SUB168(auVar5 * auVar21,0);
  uVar35 = uVar35 + uVar33;
  local_2fc = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar5 * auVar21,8) + (longlong)(int)local_2fc;
  uVar34 = uVar34 + uVar33;
  local_2f8 = (uint)(uVar34 < uVar33);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3[2];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_2;
  uVar33 = SUB168(auVar6 * auVar22,0);
  uVar35 = uVar35 + uVar33;
  local_2f4 = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar6 * auVar22,8) + (longlong)(int)local_2f4;
  uVar34 = uVar34 + uVar33;
  local_2f0 = (uint)(uVar34 < uVar33);
  param_1[2] = uVar35;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[3];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *param_2;
  uVar33 = SUB168(auVar7 * auVar23,0);
  uVar34 = uVar34 + uVar33;
  local_2ec = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar7 * auVar23,8) + (longlong)(int)local_2ec;
  uVar35 = (longlong)(int)local_300 + (longlong)(int)local_2f8 + (longlong)(int)local_2f0 + uVar33;
  local_2e8 = (uint)(uVar35 < uVar33);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[1];
  uVar33 = SUB168(auVar8 * auVar24,0);
  uVar34 = uVar34 + uVar33;
  local_2e4 = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar8 * auVar24,8) + (longlong)(int)local_2e4;
  uVar35 = uVar35 + uVar33;
  local_2e0 = (uint)(uVar35 < uVar33);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[1];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[2];
  uVar33 = SUB168(auVar9 * auVar25,0);
  uVar34 = uVar34 + uVar33;
  local_2dc = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar9 * auVar25,8) + (longlong)(int)local_2dc;
  uVar35 = uVar35 + uVar33;
  local_2d8 = (uint)(uVar35 < uVar33);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[3];
  uVar33 = SUB168(auVar10 * auVar26,0);
  uVar34 = uVar34 + uVar33;
  local_2d4 = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar10 * auVar26,8) + (longlong)(int)local_2d4;
  uVar35 = uVar35 + uVar33;
  local_2d0 = (uint)(uVar35 < uVar33);
  param_1[3] = uVar34;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_3[1];
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[3];
  uVar33 = SUB168(auVar11 * auVar27,0);
  uVar35 = uVar35 + uVar33;
  local_2cc = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar11 * auVar27,8) + (longlong)(int)local_2cc;
  uVar34 = (longlong)(int)local_2e8 + (longlong)(int)local_2e0 + (longlong)(int)local_2d8 +
           (longlong)(int)local_2d0 + uVar33;
  local_2c8 = (uint)(uVar34 < uVar33);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_3[2];
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[2];
  uVar33 = SUB168(auVar12 * auVar28,0);
  uVar35 = uVar35 + uVar33;
  local_2c4 = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar12 * auVar28,8) + (longlong)(int)local_2c4;
  uVar34 = uVar34 + uVar33;
  local_2c0 = (uint)(uVar34 < uVar33);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3[3];
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[1];
  uVar33 = SUB168(auVar13 * auVar29,0);
  uVar35 = uVar35 + uVar33;
  local_2bc = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar13 * auVar29,8) + (longlong)(int)local_2bc;
  uVar34 = uVar34 + uVar33;
  local_2b8 = (uint)(uVar34 < uVar33);
  param_1[4] = uVar35;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[3];
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[2];
  uVar33 = SUB168(auVar14 * auVar30,0);
  uVar34 = uVar34 + uVar33;
  local_2b4 = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar14 * auVar30,8) + (longlong)(int)local_2b4;
  uVar35 = (longlong)(int)local_2c8 + (longlong)(int)local_2c0 + (longlong)(int)local_2b8 + uVar33;
  local_2b0 = (uint)(uVar35 < uVar33);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[2];
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[3];
  uVar33 = SUB168(auVar15 * auVar31,0);
  uVar34 = uVar34 + uVar33;
  local_2ac = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar15 * auVar31,8) + (longlong)(int)local_2ac;
  uVar35 = uVar35 + uVar33;
  local_2a8 = (uint)(uVar35 < uVar33);
  param_1[5] = uVar34;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[3];
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[3];
  uVar33 = SUB168(auVar16 * auVar32,0);
  uVar35 = uVar35 + uVar33;
  local_2a4 = (uint)(uVar35 < uVar33);
  param_1[6] = uVar35;
  param_1[7] = (longlong)(int)local_2b0 + (longlong)(int)local_2a8 +
               SUB168(auVar16 * auVar32,8) + (longlong)(int)local_2a4;
  return;
}


/* address=140d322c0 name=FUN_140d322c0 */

/* WARNING: Removing unreachable block (ram,0x000140d323e1) */
/* WARNING: Removing unreachable block (ram,0x000140d32387) */
/* WARNING: Removing unreachable block (ram,0x000140d3252f) */

void FUN_140d322c0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
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
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar95 [16];
  undefined auVar96 [16];
  undefined auVar97 [16];
  undefined auVar98 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar102 [16];
  undefined auVar103 [16];
  undefined auVar104 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  undefined auVar112 [16];
  undefined auVar113 [16];
  undefined auVar114 [16];
  undefined auVar115 [16];
  undefined auVar116 [16];
  undefined auVar117 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  undefined auVar120 [16];
  undefined auVar121 [16];
  undefined auVar122 [16];
  undefined auVar123 [16];
  undefined auVar124 [16];
  undefined auVar125 [16];
  undefined auVar126 [16];
  undefined auVar127 [16];
  undefined auVar128 [16];
  ulonglong uVar129;
  ulonglong uVar130;
  ulonglong uVar131;
  uint local_c0c;
  uint local_c08;
  uint local_c04;
  uint local_c00;
  uint local_bfc;
  uint local_bf8;
  uint local_bf4;
  uint local_bf0;
  uint local_bec;
  uint local_be8;
  uint local_be4;
  uint local_be0;
  uint local_bdc;
  uint local_bd8;
  uint local_bd4;
  uint local_bd0;
  uint local_bcc;
  uint local_bc8;
  uint local_bc4;
  uint local_bc0;
  uint local_bbc;
  uint local_bb8;
  uint local_bb4;
  uint local_bb0;
  uint local_bac;
  uint local_ba8;
  uint local_ba4;
  uint local_ba0;
  uint local_b9c;
  uint local_b98;
  uint local_b94;
  uint local_b90;
  uint local_b8c;
  uint local_b88;
  uint local_b84;
  uint local_b80;
  uint local_b7c;
  uint local_b78;
  uint local_b74;
  uint local_b70;
  uint local_b6c;
  uint local_b68;
  uint local_b64;
  uint local_b60;
  uint local_b5c;
  uint local_b58;
  uint local_b54;
  uint local_b50;
  uint local_b4c;
  uint local_b48;
  uint local_b44;
  uint local_b40;
  uint local_b3c;
  uint local_b38;
  uint local_b34;
  uint local_b30;
  uint local_b2c;
  uint local_b28;
  uint local_b24;
  uint local_b20;
  uint local_b1c;
  uint local_b18;
  uint local_b14;
  uint local_b10;
  uint local_b0c;
  uint local_b08;
  uint local_b04;
  uint local_b00;
  uint local_afc;
  uint local_af8;
  uint local_af4;
  uint local_af0;
  uint local_aec;
  uint local_ae8;
  uint local_ae4;
  uint local_ae0;
  uint local_adc;
  uint local_ad8;
  uint local_ad4;
  uint local_ad0;
  uint local_acc;
  uint local_ac8;
  uint local_ac4;
  uint local_ac0;
  uint local_abc;
  uint local_ab8;
  uint local_ab4;
  uint local_ab0;
  uint local_aac;
  uint local_aa8;
  uint local_aa4;
  uint local_aa0;
  uint local_a9c;
  uint local_a98;
  uint local_a94;
  uint local_a90;
  uint local_a8c;
  uint local_a88;
  uint local_a84;
  uint local_a80;
  uint local_a7c;
  uint local_a78;
  uint local_a74;
  uint local_a70;
  uint local_a6c;
  uint local_a68;
  uint local_a64;
  uint local_a60;
  uint local_a5c;
  uint local_a58;
  uint local_a54;
  uint local_a50;
  uint local_a4c;
  uint local_a48;
  uint local_a44;
  uint local_a40;
  uint local_a3c;
  uint local_a38;
  uint local_a34;
  uint local_a30;
  uint local_a2c;
  uint local_a28;
  uint local_a24;
  uint local_a14;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_3;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar65,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3[1];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = *param_2;
  uVar129 = SUB168(auVar2 * auVar66,0);
  uVar130 = SUB168(auVar1 * auVar65,8) + uVar129;
  local_a14 = (uint)(uVar130 < uVar129);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[1];
  uVar129 = SUB168(auVar3 * auVar67,0);
  uVar130 = uVar130 + uVar129;
  local_c0c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar3 * auVar67,8) + (longlong)(int)local_c0c;
  uVar131 = SUB168(auVar2 * auVar66,8) + (longlong)(int)local_a14 + uVar129;
  local_c08 = (uint)(uVar131 < uVar129);
  param_1[1] = uVar130;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_3;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[2];
  uVar129 = SUB168(auVar4 * auVar68,0);
  uVar131 = uVar131 + uVar129;
  local_c04 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar4 * auVar68,8) + (longlong)(int)local_c04;
  uVar130 = (longlong)(int)local_c08 + uVar129;
  local_c00 = (uint)(uVar130 < uVar129);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3[1];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[1];
  uVar129 = SUB168(auVar5 * auVar69,0);
  uVar131 = uVar131 + uVar129;
  local_bfc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar5 * auVar69,8) + (longlong)(int)local_bfc;
  uVar130 = uVar130 + uVar129;
  local_bf8 = (uint)(uVar130 < uVar129);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3[2];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = *param_2;
  uVar129 = SUB168(auVar6 * auVar70,0);
  uVar131 = uVar131 + uVar129;
  local_bf4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar6 * auVar70,8) + (longlong)(int)local_bf4;
  uVar130 = uVar130 + uVar129;
  local_bf0 = (uint)(uVar130 < uVar129);
  param_1[2] = uVar131;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[3];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = *param_2;
  uVar129 = SUB168(auVar7 * auVar71,0);
  uVar130 = uVar130 + uVar129;
  local_bec = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar7 * auVar71,8) + (longlong)(int)local_bec;
  uVar131 = (longlong)(int)local_c00 + (longlong)(int)local_bf8 + (longlong)(int)local_bf0 + uVar129
  ;
  local_be8 = (uint)(uVar131 < uVar129);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[1];
  uVar129 = SUB168(auVar8 * auVar72,0);
  uVar130 = uVar130 + uVar129;
  local_be4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar8 * auVar72,8) + (longlong)(int)local_be4;
  uVar131 = uVar131 + uVar129;
  local_be0 = (uint)(uVar131 < uVar129);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[1];
  auVar73._8_8_ = 0;
  auVar73._0_8_ = param_2[2];
  uVar129 = SUB168(auVar9 * auVar73,0);
  uVar130 = uVar130 + uVar129;
  local_bdc = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar9 * auVar73,8) + (longlong)(int)local_bdc;
  uVar131 = uVar131 + uVar129;
  local_bd8 = (uint)(uVar131 < uVar129);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = param_2[3];
  uVar129 = SUB168(auVar10 * auVar74,0);
  uVar130 = uVar130 + uVar129;
  local_bd4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar10 * auVar74,8) + (longlong)(int)local_bd4;
  uVar131 = uVar131 + uVar129;
  local_bd0 = (uint)(uVar131 < uVar129);
  param_1[3] = uVar130;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_3;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = param_2[4];
  uVar129 = SUB168(auVar11 * auVar75,0);
  uVar131 = uVar131 + uVar129;
  local_bcc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar11 * auVar75,8) + (longlong)(int)local_bcc;
  uVar130 = (longlong)(int)local_be8 + (longlong)(int)local_be0 + (longlong)(int)local_bd8 +
            (longlong)(int)local_bd0 + uVar129;
  local_bc8 = (uint)(uVar130 < uVar129);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_3[1];
  auVar76._8_8_ = 0;
  auVar76._0_8_ = param_2[3];
  uVar129 = SUB168(auVar12 * auVar76,0);
  uVar131 = uVar131 + uVar129;
  local_bc4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar12 * auVar76,8) + (longlong)(int)local_bc4;
  uVar130 = uVar130 + uVar129;
  local_bc0 = (uint)(uVar130 < uVar129);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3[2];
  auVar77._8_8_ = 0;
  auVar77._0_8_ = param_2[2];
  uVar129 = SUB168(auVar13 * auVar77,0);
  uVar131 = uVar131 + uVar129;
  local_bbc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar13 * auVar77,8) + (longlong)(int)local_bbc;
  uVar130 = uVar130 + uVar129;
  local_bb8 = (uint)(uVar130 < uVar129);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[3];
  auVar78._8_8_ = 0;
  auVar78._0_8_ = param_2[1];
  uVar129 = SUB168(auVar14 * auVar78,0);
  uVar131 = uVar131 + uVar129;
  local_bb4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar14 * auVar78,8) + (longlong)(int)local_bb4;
  uVar130 = uVar130 + uVar129;
  local_bb0 = (uint)(uVar130 < uVar129);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[4];
  auVar79._8_8_ = 0;
  auVar79._0_8_ = *param_2;
  uVar129 = SUB168(auVar15 * auVar79,0);
  uVar131 = uVar131 + uVar129;
  local_bac = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar15 * auVar79,8) + (longlong)(int)local_bac;
  uVar130 = uVar130 + uVar129;
  local_ba8 = (uint)(uVar130 < uVar129);
  param_1[4] = uVar131;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[5];
  auVar80._8_8_ = 0;
  auVar80._0_8_ = *param_2;
  uVar129 = SUB168(auVar16 * auVar80,0);
  uVar130 = uVar130 + uVar129;
  local_ba4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar16 * auVar80,8) + (longlong)(int)local_ba4;
  uVar131 = (longlong)(int)local_bc8 + (longlong)(int)local_bc0 + (longlong)(int)local_bb8 +
            (longlong)(int)local_bb0 + (longlong)(int)local_ba8 + uVar129;
  local_ba0 = (uint)(uVar131 < uVar129);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_3[4];
  auVar81._8_8_ = 0;
  auVar81._0_8_ = param_2[1];
  uVar129 = SUB168(auVar17 * auVar81,0);
  uVar130 = uVar130 + uVar129;
  local_b9c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar17 * auVar81,8) + (longlong)(int)local_b9c;
  uVar131 = uVar131 + uVar129;
  local_b98 = (uint)(uVar131 < uVar129);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[3];
  auVar82._8_8_ = 0;
  auVar82._0_8_ = param_2[2];
  uVar129 = SUB168(auVar18 * auVar82,0);
  uVar130 = uVar130 + uVar129;
  local_b94 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar18 * auVar82,8) + (longlong)(int)local_b94;
  uVar131 = uVar131 + uVar129;
  local_b90 = (uint)(uVar131 < uVar129);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[2];
  auVar83._8_8_ = 0;
  auVar83._0_8_ = param_2[3];
  uVar129 = SUB168(auVar19 * auVar83,0);
  uVar130 = uVar130 + uVar129;
  local_b8c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar19 * auVar83,8) + (longlong)(int)local_b8c;
  uVar131 = uVar131 + uVar129;
  local_b88 = (uint)(uVar131 < uVar129);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_3[1];
  auVar84._8_8_ = 0;
  auVar84._0_8_ = param_2[4];
  uVar129 = SUB168(auVar20 * auVar84,0);
  uVar130 = uVar130 + uVar129;
  local_b84 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar20 * auVar84,8) + (longlong)(int)local_b84;
  uVar131 = uVar131 + uVar129;
  local_b80 = (uint)(uVar131 < uVar129);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = *param_3;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = param_2[5];
  uVar129 = SUB168(auVar21 * auVar85,0);
  uVar130 = uVar130 + uVar129;
  local_b7c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar21 * auVar85,8) + (longlong)(int)local_b7c;
  uVar131 = uVar131 + uVar129;
  local_b78 = (uint)(uVar131 < uVar129);
  param_1[5] = uVar130;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_3;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = param_2[6];
  uVar129 = SUB168(auVar22 * auVar86,0);
  uVar131 = uVar131 + uVar129;
  local_b74 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar22 * auVar86,8) + (longlong)(int)local_b74;
  uVar130 = (longlong)(int)local_ba0 + (longlong)(int)local_b98 + (longlong)(int)local_b90 +
            (longlong)(int)local_b88 + (longlong)(int)local_b80 + (longlong)(int)local_b78 + uVar129
  ;
  local_b70 = (uint)(uVar130 < uVar129);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_3[1];
  auVar87._8_8_ = 0;
  auVar87._0_8_ = param_2[5];
  uVar129 = SUB168(auVar23 * auVar87,0);
  uVar131 = uVar131 + uVar129;
  local_b6c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar23 * auVar87,8) + (longlong)(int)local_b6c;
  uVar130 = uVar130 + uVar129;
  local_b68 = (uint)(uVar130 < uVar129);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_3[2];
  auVar88._8_8_ = 0;
  auVar88._0_8_ = param_2[4];
  uVar129 = SUB168(auVar24 * auVar88,0);
  uVar131 = uVar131 + uVar129;
  local_b64 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar24 * auVar88,8) + (longlong)(int)local_b64;
  uVar130 = uVar130 + uVar129;
  local_b60 = (uint)(uVar130 < uVar129);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_3[3];
  auVar89._8_8_ = 0;
  auVar89._0_8_ = param_2[3];
  uVar129 = SUB168(auVar25 * auVar89,0);
  uVar131 = uVar131 + uVar129;
  local_b5c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar25 * auVar89,8) + (longlong)(int)local_b5c;
  uVar130 = uVar130 + uVar129;
  local_b58 = (uint)(uVar130 < uVar129);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_3[4];
  auVar90._8_8_ = 0;
  auVar90._0_8_ = param_2[2];
  uVar129 = SUB168(auVar26 * auVar90,0);
  uVar131 = uVar131 + uVar129;
  local_b54 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar26 * auVar90,8) + (longlong)(int)local_b54;
  uVar130 = uVar130 + uVar129;
  local_b50 = (uint)(uVar130 < uVar129);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_3[5];
  auVar91._8_8_ = 0;
  auVar91._0_8_ = param_2[1];
  uVar129 = SUB168(auVar27 * auVar91,0);
  uVar131 = uVar131 + uVar129;
  local_b4c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar27 * auVar91,8) + (longlong)(int)local_b4c;
  uVar130 = uVar130 + uVar129;
  local_b48 = (uint)(uVar130 < uVar129);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_3[6];
  auVar92._8_8_ = 0;
  auVar92._0_8_ = *param_2;
  uVar129 = SUB168(auVar28 * auVar92,0);
  uVar131 = uVar131 + uVar129;
  local_b44 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar28 * auVar92,8) + (longlong)(int)local_b44;
  uVar130 = uVar130 + uVar129;
  local_b40 = (uint)(uVar130 < uVar129);
  param_1[6] = uVar131;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_3[7];
  auVar93._8_8_ = 0;
  auVar93._0_8_ = *param_2;
  uVar129 = SUB168(auVar29 * auVar93,0);
  uVar130 = uVar130 + uVar129;
  local_b3c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar29 * auVar93,8) + (longlong)(int)local_b3c;
  uVar131 = (longlong)(int)local_b70 + (longlong)(int)local_b68 + (longlong)(int)local_b60 +
            (longlong)(int)local_b58 + (longlong)(int)local_b50 + (longlong)(int)local_b48 +
            (longlong)(int)local_b40 + uVar129;
  local_b38 = (uint)(uVar131 < uVar129);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_3[6];
  auVar94._8_8_ = 0;
  auVar94._0_8_ = param_2[1];
  uVar129 = SUB168(auVar30 * auVar94,0);
  uVar130 = uVar130 + uVar129;
  local_b34 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar30 * auVar94,8) + (longlong)(int)local_b34;
  uVar131 = uVar131 + uVar129;
  local_b30 = (uint)(uVar131 < uVar129);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_3[5];
  auVar95._8_8_ = 0;
  auVar95._0_8_ = param_2[2];
  uVar129 = SUB168(auVar31 * auVar95,0);
  uVar130 = uVar130 + uVar129;
  local_b2c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar31 * auVar95,8) + (longlong)(int)local_b2c;
  uVar131 = uVar131 + uVar129;
  local_b28 = (uint)(uVar131 < uVar129);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_3[4];
  auVar96._8_8_ = 0;
  auVar96._0_8_ = param_2[3];
  uVar129 = SUB168(auVar32 * auVar96,0);
  uVar130 = uVar130 + uVar129;
  local_b24 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar32 * auVar96,8) + (longlong)(int)local_b24;
  uVar131 = uVar131 + uVar129;
  local_b20 = (uint)(uVar131 < uVar129);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_3[3];
  auVar97._8_8_ = 0;
  auVar97._0_8_ = param_2[4];
  uVar129 = SUB168(auVar33 * auVar97,0);
  uVar130 = uVar130 + uVar129;
  local_b1c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar33 * auVar97,8) + (longlong)(int)local_b1c;
  uVar131 = uVar131 + uVar129;
  local_b18 = (uint)(uVar131 < uVar129);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_3[2];
  auVar98._8_8_ = 0;
  auVar98._0_8_ = param_2[5];
  uVar129 = SUB168(auVar34 * auVar98,0);
  uVar130 = uVar130 + uVar129;
  local_b14 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar34 * auVar98,8) + (longlong)(int)local_b14;
  uVar131 = uVar131 + uVar129;
  local_b10 = (uint)(uVar131 < uVar129);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_3[1];
  auVar99._8_8_ = 0;
  auVar99._0_8_ = param_2[6];
  uVar129 = SUB168(auVar35 * auVar99,0);
  uVar130 = uVar130 + uVar129;
  local_b0c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar35 * auVar99,8) + (longlong)(int)local_b0c;
  uVar131 = uVar131 + uVar129;
  local_b08 = (uint)(uVar131 < uVar129);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *param_3;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = param_2[7];
  uVar129 = SUB168(auVar36 * auVar100,0);
  uVar130 = uVar130 + uVar129;
  local_b04 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar36 * auVar100,8) + (longlong)(int)local_b04;
  uVar131 = uVar131 + uVar129;
  local_b00 = (uint)(uVar131 < uVar129);
  param_1[7] = uVar130;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_3[1];
  auVar101._8_8_ = 0;
  auVar101._0_8_ = param_2[7];
  uVar129 = SUB168(auVar37 * auVar101,0);
  uVar131 = uVar131 + uVar129;
  local_afc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar37 * auVar101,8) + (longlong)(int)local_afc;
  uVar130 = (longlong)(int)local_b38 + (longlong)(int)local_b30 + (longlong)(int)local_b28 +
            (longlong)(int)local_b20 + (longlong)(int)local_b18 + (longlong)(int)local_b10 +
            (longlong)(int)local_b08 + (longlong)(int)local_b00 + uVar129;
  local_af8 = (uint)(uVar130 < uVar129);
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_3[2];
  auVar102._8_8_ = 0;
  auVar102._0_8_ = param_2[6];
  uVar129 = SUB168(auVar38 * auVar102,0);
  uVar131 = uVar131 + uVar129;
  local_af4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar38 * auVar102,8) + (longlong)(int)local_af4;
  uVar130 = uVar130 + uVar129;
  local_af0 = (uint)(uVar130 < uVar129);
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_3[3];
  auVar103._8_8_ = 0;
  auVar103._0_8_ = param_2[5];
  uVar129 = SUB168(auVar39 * auVar103,0);
  uVar131 = uVar131 + uVar129;
  local_aec = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar39 * auVar103,8) + (longlong)(int)local_aec;
  uVar130 = uVar130 + uVar129;
  local_ae8 = (uint)(uVar130 < uVar129);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_3[4];
  auVar104._8_8_ = 0;
  auVar104._0_8_ = param_2[4];
  uVar129 = SUB168(auVar40 * auVar104,0);
  uVar131 = uVar131 + uVar129;
  local_ae4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar40 * auVar104,8) + (longlong)(int)local_ae4;
  uVar130 = uVar130 + uVar129;
  local_ae0 = (uint)(uVar130 < uVar129);
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_3[5];
  auVar105._8_8_ = 0;
  auVar105._0_8_ = param_2[3];
  uVar129 = SUB168(auVar41 * auVar105,0);
  uVar131 = uVar131 + uVar129;
  local_adc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar41 * auVar105,8) + (longlong)(int)local_adc;
  uVar130 = uVar130 + uVar129;
  local_ad8 = (uint)(uVar130 < uVar129);
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_3[6];
  auVar106._8_8_ = 0;
  auVar106._0_8_ = param_2[2];
  uVar129 = SUB168(auVar42 * auVar106,0);
  uVar131 = uVar131 + uVar129;
  local_ad4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar42 * auVar106,8) + (longlong)(int)local_ad4;
  uVar130 = uVar130 + uVar129;
  local_ad0 = (uint)(uVar130 < uVar129);
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_3[7];
  auVar107._8_8_ = 0;
  auVar107._0_8_ = param_2[1];
  uVar129 = SUB168(auVar43 * auVar107,0);
  uVar131 = uVar131 + uVar129;
  local_acc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar43 * auVar107,8) + (longlong)(int)local_acc;
  uVar130 = uVar130 + uVar129;
  local_ac8 = (uint)(uVar130 < uVar129);
  param_1[8] = uVar131;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_3[7];
  auVar108._8_8_ = 0;
  auVar108._0_8_ = param_2[2];
  uVar129 = SUB168(auVar44 * auVar108,0);
  uVar130 = uVar130 + uVar129;
  local_ac4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar44 * auVar108,8) + (longlong)(int)local_ac4;
  uVar131 = (longlong)(int)local_af8 + (longlong)(int)local_af0 + (longlong)(int)local_ae8 +
            (longlong)(int)local_ae0 + (longlong)(int)local_ad8 + (longlong)(int)local_ad0 +
            (longlong)(int)local_ac8 + uVar129;
  local_ac0 = (uint)(uVar131 < uVar129);
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_3[6];
  auVar109._8_8_ = 0;
  auVar109._0_8_ = param_2[3];
  uVar129 = SUB168(auVar45 * auVar109,0);
  uVar130 = uVar130 + uVar129;
  local_abc = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar45 * auVar109,8) + (longlong)(int)local_abc;
  uVar131 = uVar131 + uVar129;
  local_ab8 = (uint)(uVar131 < uVar129);
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_3[5];
  auVar110._8_8_ = 0;
  auVar110._0_8_ = param_2[4];
  uVar129 = SUB168(auVar46 * auVar110,0);
  uVar130 = uVar130 + uVar129;
  local_ab4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar46 * auVar110,8) + (longlong)(int)local_ab4;
  uVar131 = uVar131 + uVar129;
  local_ab0 = (uint)(uVar131 < uVar129);
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_3[4];
  auVar111._8_8_ = 0;
  auVar111._0_8_ = param_2[5];
  uVar129 = SUB168(auVar47 * auVar111,0);
  uVar130 = uVar130 + uVar129;
  local_aac = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar47 * auVar111,8) + (longlong)(int)local_aac;
  uVar131 = uVar131 + uVar129;
  local_aa8 = (uint)(uVar131 < uVar129);
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_3[3];
  auVar112._8_8_ = 0;
  auVar112._0_8_ = param_2[6];
  uVar129 = SUB168(auVar48 * auVar112,0);
  uVar130 = uVar130 + uVar129;
  local_aa4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar48 * auVar112,8) + (longlong)(int)local_aa4;
  uVar131 = uVar131 + uVar129;
  local_aa0 = (uint)(uVar131 < uVar129);
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_3[2];
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_2[7];
  uVar129 = SUB168(auVar49 * auVar113,0);
  uVar130 = uVar130 + uVar129;
  local_a9c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar49 * auVar113,8) + (longlong)(int)local_a9c;
  uVar131 = uVar131 + uVar129;
  local_a98 = (uint)(uVar131 < uVar129);
  param_1[9] = uVar130;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_3[3];
  auVar114._8_8_ = 0;
  auVar114._0_8_ = param_2[7];
  uVar129 = SUB168(auVar50 * auVar114,0);
  uVar131 = uVar131 + uVar129;
  local_a94 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar50 * auVar114,8) + (longlong)(int)local_a94;
  uVar130 = (longlong)(int)local_ac0 + (longlong)(int)local_ab8 + (longlong)(int)local_ab0 +
            (longlong)(int)local_aa8 + (longlong)(int)local_aa0 + (longlong)(int)local_a98 + uVar129
  ;
  local_a90 = (uint)(uVar130 < uVar129);
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_3[4];
  auVar115._8_8_ = 0;
  auVar115._0_8_ = param_2[6];
  uVar129 = SUB168(auVar51 * auVar115,0);
  uVar131 = uVar131 + uVar129;
  local_a8c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar51 * auVar115,8) + (longlong)(int)local_a8c;
  uVar130 = uVar130 + uVar129;
  local_a88 = (uint)(uVar130 < uVar129);
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_3[5];
  auVar116._8_8_ = 0;
  auVar116._0_8_ = param_2[5];
  uVar129 = SUB168(auVar52 * auVar116,0);
  uVar131 = uVar131 + uVar129;
  local_a84 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar52 * auVar116,8) + (longlong)(int)local_a84;
  uVar130 = uVar130 + uVar129;
  local_a80 = (uint)(uVar130 < uVar129);
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_3[6];
  auVar117._8_8_ = 0;
  auVar117._0_8_ = param_2[4];
  uVar129 = SUB168(auVar53 * auVar117,0);
  uVar131 = uVar131 + uVar129;
  local_a7c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar53 * auVar117,8) + (longlong)(int)local_a7c;
  uVar130 = uVar130 + uVar129;
  local_a78 = (uint)(uVar130 < uVar129);
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_3[7];
  auVar118._8_8_ = 0;
  auVar118._0_8_ = param_2[3];
  uVar129 = SUB168(auVar54 * auVar118,0);
  uVar131 = uVar131 + uVar129;
  local_a74 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar54 * auVar118,8) + (longlong)(int)local_a74;
  uVar130 = uVar130 + uVar129;
  local_a70 = (uint)(uVar130 < uVar129);
  param_1[10] = uVar131;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_3[7];
  auVar119._8_8_ = 0;
  auVar119._0_8_ = param_2[4];
  uVar129 = SUB168(auVar55 * auVar119,0);
  uVar130 = uVar130 + uVar129;
  local_a6c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar55 * auVar119,8) + (longlong)(int)local_a6c;
  uVar131 = (longlong)(int)local_a90 + (longlong)(int)local_a88 + (longlong)(int)local_a80 +
            (longlong)(int)local_a78 + (longlong)(int)local_a70 + uVar129;
  local_a68 = (uint)(uVar131 < uVar129);
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_3[6];
  auVar120._8_8_ = 0;
  auVar120._0_8_ = param_2[5];
  uVar129 = SUB168(auVar56 * auVar120,0);
  uVar130 = uVar130 + uVar129;
  local_a64 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar56 * auVar120,8) + (longlong)(int)local_a64;
  uVar131 = uVar131 + uVar129;
  local_a60 = (uint)(uVar131 < uVar129);
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_3[5];
  auVar121._8_8_ = 0;
  auVar121._0_8_ = param_2[6];
  uVar129 = SUB168(auVar57 * auVar121,0);
  uVar130 = uVar130 + uVar129;
  local_a5c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar57 * auVar121,8) + (longlong)(int)local_a5c;
  uVar131 = uVar131 + uVar129;
  local_a58 = (uint)(uVar131 < uVar129);
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_3[4];
  auVar122._8_8_ = 0;
  auVar122._0_8_ = param_2[7];
  uVar129 = SUB168(auVar58 * auVar122,0);
  uVar130 = uVar130 + uVar129;
  local_a54 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar58 * auVar122,8) + (longlong)(int)local_a54;
  uVar131 = uVar131 + uVar129;
  local_a50 = (uint)(uVar131 < uVar129);
  param_1[0xb] = uVar130;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_3[5];
  auVar123._8_8_ = 0;
  auVar123._0_8_ = param_2[7];
  uVar129 = SUB168(auVar59 * auVar123,0);
  uVar131 = uVar131 + uVar129;
  local_a4c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar59 * auVar123,8) + (longlong)(int)local_a4c;
  uVar130 = (longlong)(int)local_a68 + (longlong)(int)local_a60 + (longlong)(int)local_a58 +
            (longlong)(int)local_a50 + uVar129;
  local_a48 = (uint)(uVar130 < uVar129);
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_3[6];
  auVar124._8_8_ = 0;
  auVar124._0_8_ = param_2[6];
  uVar129 = SUB168(auVar60 * auVar124,0);
  uVar131 = uVar131 + uVar129;
  local_a44 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar60 * auVar124,8) + (longlong)(int)local_a44;
  uVar130 = uVar130 + uVar129;
  local_a40 = (uint)(uVar130 < uVar129);
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_3[7];
  auVar125._8_8_ = 0;
  auVar125._0_8_ = param_2[5];
  uVar129 = SUB168(auVar61 * auVar125,0);
  uVar131 = uVar131 + uVar129;
  local_a3c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar61 * auVar125,8) + (longlong)(int)local_a3c;
  uVar130 = uVar130 + uVar129;
  local_a38 = (uint)(uVar130 < uVar129);
  param_1[0xc] = uVar131;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_3[7];
  auVar126._8_8_ = 0;
  auVar126._0_8_ = param_2[6];
  uVar129 = SUB168(auVar62 * auVar126,0);
  uVar130 = uVar130 + uVar129;
  local_a34 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar62 * auVar126,8) + (longlong)(int)local_a34;
  uVar131 = (longlong)(int)local_a48 + (longlong)(int)local_a40 + (longlong)(int)local_a38 + uVar129
  ;
  local_a30 = (uint)(uVar131 < uVar129);
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_3[6];
  auVar127._8_8_ = 0;
  auVar127._0_8_ = param_2[7];
  uVar129 = SUB168(auVar63 * auVar127,0);
  uVar130 = uVar130 + uVar129;
  local_a2c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar63 * auVar127,8) + (longlong)(int)local_a2c;
  uVar131 = uVar131 + uVar129;
  local_a28 = (uint)(uVar131 < uVar129);
  param_1[0xd] = uVar130;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_3[7];
  auVar128._8_8_ = 0;
  auVar128._0_8_ = param_2[7];
  uVar129 = SUB168(auVar64 * auVar128,0);
  uVar131 = uVar131 + uVar129;
  local_a24 = (uint)(uVar131 < uVar129);
  param_1[0xe] = uVar131;
  param_1[0xf] = (longlong)(int)local_a30 + (longlong)(int)local_a28 +
                 SUB168(auVar64 * auVar128,8) + (longlong)(int)local_a24;
  return;
}


/* address=140d36f00 name=FUN_140d36f00 */

/* WARNING: Removing unreachable block (ram,0x000140d36fff) */
/* WARNING: Removing unreachable block (ram,0x000140d36fa5) */
/* WARNING: Removing unreachable block (ram,0x000140d3714d) */

void FUN_140d36f00(undefined8 *param_1,ulonglong *param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
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
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  undefined auVar64 [16];
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  ulonglong uVar76;
  longlong lVar77;
  uint local_84c;
  uint local_848;
  uint local_844;
  uint local_840;
  uint local_83c;
  uint local_838;
  uint local_834;
  uint local_830;
  uint local_82c;
  uint local_828;
  uint local_824;
  uint local_820;
  uint local_81c;
  uint local_818;
  uint local_814;
  uint local_810;
  uint local_80c;
  uint local_808;
  uint local_804;
  uint local_800;
  uint local_7fc;
  uint local_7f8;
  uint local_7f4;
  uint local_7f0;
  uint local_7ec;
  uint local_7e8;
  uint local_7e4;
  uint local_7e0;
  uint local_7dc;
  uint local_7d8;
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  uint local_7c8;
  uint local_7c4;
  uint local_7c0;
  uint local_7bc;
  uint local_7b8;
  uint local_7b4;
  uint local_7b0;
  uint local_7ac;
  uint local_7a8;
  uint local_7a4;
  uint local_7a0;
  uint local_79c;
  uint local_798;
  uint local_794;
  uint local_790;
  uint local_78c;
  uint local_788;
  uint local_784;
  uint local_780;
  uint local_77c;
  uint local_778;
  uint local_774;
  uint local_770;
  uint local_76c;
  uint local_768;
  uint local_764;
  uint local_760;
  uint local_75c;
  uint local_758;
  uint local_754;
  uint local_750;
  uint local_74c;
  uint local_748;
  uint local_744;
  uint local_740;
  uint local_73c;
  uint local_738;
  uint local_734;
  uint local_730;
  uint local_72c;
  uint local_728;
  uint local_724;
  uint local_720;
  uint local_71c;
  uint local_718;
  uint local_714;
  uint local_710;
  uint local_70c;
  uint local_708;
  uint local_704;
  uint local_700;
  uint local_6fc;
  uint local_6f8;
  uint local_6f4;
  uint local_6f0;
  uint local_6ec;
  uint local_6e8;
  uint local_6e4;
  uint local_6e0;
  uint local_6dc;
  uint local_6d8;
  uint local_6d4;
  uint local_6d0;
  uint local_6cc;
  uint local_6c8;
  uint local_6c4;
  uint local_6c0;
  uint local_6bc;
  uint local_6b8;
  uint local_6b4;
  uint local_6b0;
  uint local_6ac;
  uint local_6a8;
  uint local_6a4;
  uint local_6a0;
  uint local_69c;
  uint local_698;
  uint local_694;
  uint local_690;
  uint local_68c;
  uint local_688;
  uint local_684;
  uint local_680;
  uint local_67c;
  uint local_678;
  uint local_674;
  uint local_670;
  uint local_66c;
  uint local_668;
  uint local_664;
  uint local_654;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar37,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[1];
  lVar77 = SUB168(auVar2 * auVar38,8);
  uVar73 = SUB168(auVar2 * auVar38,0);
  uVar74 = SUB168(auVar1 * auVar37,8) + uVar73;
  local_654 = (uint)(uVar74 < uVar73);
  uVar74 = uVar74 + uVar73;
  local_84c = (uint)(uVar74 < uVar73);
  uVar73 = lVar77 + (int)local_84c;
  uVar75 = lVar77 + (int)local_654 + uVar73;
  local_848 = (uint)(uVar75 < uVar73);
  param_1[1] = uVar74;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[1];
  uVar73 = SUB168(auVar3 * auVar39,0);
  uVar75 = uVar75 + uVar73;
  local_844 = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar3 * auVar39,8) + (longlong)(int)local_844;
  uVar76 = (longlong)(int)local_848 + uVar73;
  local_840 = (uint)(uVar76 < uVar73);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_2[2];
  lVar77 = SUB168(auVar4 * auVar40,8);
  uVar73 = SUB168(auVar4 * auVar40,0);
  uVar75 = uVar75 + uVar73;
  local_83c = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_83c;
  uVar76 = uVar76 + uVar74;
  local_838 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_834 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_834;
  uVar76 = uVar76 + uVar73;
  local_830 = (uint)(uVar76 < uVar73);
  param_1[2] = uVar75;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_2[3];
  lVar77 = SUB168(auVar5 * auVar41,8);
  uVar73 = SUB168(auVar5 * auVar41,0);
  uVar76 = uVar76 + uVar73;
  local_82c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_82c;
  uVar75 = (longlong)(int)local_840 + (longlong)(int)local_838 + (longlong)(int)local_830 + uVar74;
  local_828 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_824 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_824;
  uVar75 = uVar75 + uVar73;
  local_820 = (uint)(uVar75 < uVar73);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[2];
  lVar77 = SUB168(auVar6 * auVar42,8);
  uVar73 = SUB168(auVar6 * auVar42,0);
  uVar76 = uVar76 + uVar73;
  local_81c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_81c;
  uVar75 = uVar75 + uVar74;
  local_818 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_814 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_814;
  uVar75 = uVar75 + uVar73;
  local_810 = (uint)(uVar75 < uVar73);
  param_1[3] = uVar76;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[2];
  uVar73 = SUB168(auVar7 * auVar43,0);
  uVar75 = uVar75 + uVar73;
  local_80c = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar7 * auVar43,8) + (longlong)(int)local_80c;
  uVar76 = (longlong)(int)local_828 + (longlong)(int)local_820 + (longlong)(int)local_818 +
           (longlong)(int)local_810 + uVar73;
  local_808 = (uint)(uVar76 < uVar73);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[3];
  lVar77 = SUB168(auVar8 * auVar44,8);
  uVar73 = SUB168(auVar8 * auVar44,0);
  uVar75 = uVar75 + uVar73;
  local_804 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_804;
  uVar76 = uVar76 + uVar74;
  local_800 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_7fc = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_7fc;
  uVar76 = uVar76 + uVar73;
  local_7f8 = (uint)(uVar76 < uVar73);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *param_2;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[4];
  lVar77 = SUB168(auVar9 * auVar45,8);
  uVar73 = SUB168(auVar9 * auVar45,0);
  uVar75 = uVar75 + uVar73;
  local_7f4 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_7f4;
  uVar76 = uVar76 + uVar74;
  local_7f0 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_7ec = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_7ec;
  uVar76 = uVar76 + uVar73;
  local_7e8 = (uint)(uVar76 < uVar73);
  param_1[4] = uVar75;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_2;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[5];
  lVar77 = SUB168(auVar10 * auVar46,8);
  uVar73 = SUB168(auVar10 * auVar46,0);
  uVar76 = uVar76 + uVar73;
  local_7e4 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_7e4;
  uVar75 = (longlong)(int)local_808 + (longlong)(int)local_800 + (longlong)(int)local_7f8 +
           (longlong)(int)local_7f0 + (longlong)(int)local_7e8 + uVar74;
  local_7e0 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_7dc = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_7dc;
  uVar75 = uVar75 + uVar73;
  local_7d8 = (uint)(uVar75 < uVar73);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[1];
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[4];
  lVar77 = SUB168(auVar11 * auVar47,8);
  uVar73 = SUB168(auVar11 * auVar47,0);
  uVar76 = uVar76 + uVar73;
  local_7d4 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_7d4;
  uVar75 = uVar75 + uVar74;
  local_7d0 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_7cc = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_7cc;
  uVar75 = uVar75 + uVar73;
  local_7c8 = (uint)(uVar75 < uVar73);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[2];
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[3];
  lVar77 = SUB168(auVar12 * auVar48,8);
  uVar73 = SUB168(auVar12 * auVar48,0);
  uVar76 = uVar76 + uVar73;
  local_7c4 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_7c4;
  uVar75 = uVar75 + uVar74;
  local_7c0 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_7bc = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_7bc;
  uVar75 = uVar75 + uVar73;
  local_7b8 = (uint)(uVar75 < uVar73);
  param_1[5] = uVar76;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[3];
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[3];
  uVar73 = SUB168(auVar13 * auVar49,0);
  uVar75 = uVar75 + uVar73;
  local_7b4 = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar13 * auVar49,8) + (longlong)(int)local_7b4;
  uVar76 = (longlong)(int)local_7e0 + (longlong)(int)local_7d8 + (longlong)(int)local_7d0 +
           (longlong)(int)local_7c8 + (longlong)(int)local_7c0 + (longlong)(int)local_7b8 + uVar73;
  local_7b0 = (uint)(uVar76 < uVar73);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[4];
  lVar77 = SUB168(auVar14 * auVar50,8);
  uVar73 = SUB168(auVar14 * auVar50,0);
  uVar75 = uVar75 + uVar73;
  local_7ac = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_7ac;
  uVar76 = uVar76 + uVar74;
  local_7a8 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_7a4 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_7a4;
  uVar76 = uVar76 + uVar73;
  local_7a0 = (uint)(uVar76 < uVar73);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[1];
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[5];
  lVar77 = SUB168(auVar15 * auVar51,8);
  uVar73 = SUB168(auVar15 * auVar51,0);
  uVar75 = uVar75 + uVar73;
  local_79c = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_79c;
  uVar76 = uVar76 + uVar74;
  local_798 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_794 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_794;
  uVar76 = uVar76 + uVar73;
  local_790 = (uint)(uVar76 < uVar73);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_2;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_2[6];
  lVar77 = SUB168(auVar16 * auVar52,8);
  uVar73 = SUB168(auVar16 * auVar52,0);
  uVar75 = uVar75 + uVar73;
  local_78c = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_78c;
  uVar76 = uVar76 + uVar74;
  local_788 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_784 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_784;
  uVar76 = uVar76 + uVar73;
  local_780 = (uint)(uVar76 < uVar73);
  param_1[6] = uVar75;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_2[7];
  lVar77 = SUB168(auVar17 * auVar53,8);
  uVar73 = SUB168(auVar17 * auVar53,0);
  uVar76 = uVar76 + uVar73;
  local_77c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_77c;
  uVar75 = (longlong)(int)local_7b0 + (longlong)(int)local_7a8 + (longlong)(int)local_7a0 +
           (longlong)(int)local_798 + (longlong)(int)local_790 + (longlong)(int)local_788 +
           (longlong)(int)local_780 + uVar74;
  local_778 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_774 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_774;
  uVar75 = uVar75 + uVar73;
  local_770 = (uint)(uVar75 < uVar73);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[1];
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_2[6];
  lVar77 = SUB168(auVar18 * auVar54,8);
  uVar73 = SUB168(auVar18 * auVar54,0);
  uVar76 = uVar76 + uVar73;
  local_76c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_76c;
  uVar75 = uVar75 + uVar74;
  local_768 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_764 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_764;
  uVar75 = uVar75 + uVar73;
  local_760 = (uint)(uVar75 < uVar73);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[2];
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_2[5];
  lVar77 = SUB168(auVar19 * auVar55,8);
  uVar73 = SUB168(auVar19 * auVar55,0);
  uVar76 = uVar76 + uVar73;
  local_75c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_75c;
  uVar75 = uVar75 + uVar74;
  local_758 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_754 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_754;
  uVar75 = uVar75 + uVar73;
  local_750 = (uint)(uVar75 < uVar73);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_2[4];
  lVar77 = SUB168(auVar20 * auVar56,8);
  uVar73 = SUB168(auVar20 * auVar56,0);
  uVar76 = uVar76 + uVar73;
  local_74c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_74c;
  uVar75 = uVar75 + uVar74;
  local_748 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_744 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_744;
  uVar75 = uVar75 + uVar73;
  local_740 = (uint)(uVar75 < uVar73);
  param_1[7] = uVar76;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[4];
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[4];
  uVar73 = SUB168(auVar21 * auVar57,0);
  uVar75 = uVar75 + uVar73;
  local_73c = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar21 * auVar57,8) + (longlong)(int)local_73c;
  uVar76 = (longlong)(int)local_778 + (longlong)(int)local_770 + (longlong)(int)local_768 +
           (longlong)(int)local_760 + (longlong)(int)local_758 + (longlong)(int)local_750 +
           (longlong)(int)local_748 + (longlong)(int)local_740 + uVar73;
  local_738 = (uint)(uVar76 < uVar73);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_2[3];
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[5];
  lVar77 = SUB168(auVar22 * auVar58,8);
  uVar73 = SUB168(auVar22 * auVar58,0);
  uVar75 = uVar75 + uVar73;
  local_734 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_734;
  uVar76 = uVar76 + uVar74;
  local_730 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_72c = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_72c;
  uVar76 = uVar76 + uVar73;
  local_728 = (uint)(uVar76 < uVar73);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2[2];
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[6];
  lVar77 = SUB168(auVar23 * auVar59,8);
  uVar73 = SUB168(auVar23 * auVar59,0);
  uVar75 = uVar75 + uVar73;
  local_724 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_724;
  uVar76 = uVar76 + uVar74;
  local_720 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_71c = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_71c;
  uVar76 = uVar76 + uVar73;
  local_718 = (uint)(uVar76 < uVar73);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[1];
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_2[7];
  lVar77 = SUB168(auVar24 * auVar60,8);
  uVar73 = SUB168(auVar24 * auVar60,0);
  uVar75 = uVar75 + uVar73;
  local_714 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_714;
  uVar76 = uVar76 + uVar74;
  local_710 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_70c = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_70c;
  uVar76 = uVar76 + uVar73;
  local_708 = (uint)(uVar76 < uVar73);
  param_1[8] = uVar75;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[2];
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_2[7];
  lVar77 = SUB168(auVar25 * auVar61,8);
  uVar73 = SUB168(auVar25 * auVar61,0);
  uVar76 = uVar76 + uVar73;
  local_704 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_704;
  uVar75 = (longlong)(int)local_738 + (longlong)(int)local_730 + (longlong)(int)local_728 +
           (longlong)(int)local_720 + (longlong)(int)local_718 + (longlong)(int)local_710 +
           (longlong)(int)local_708 + uVar74;
  local_700 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_6fc = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_6fc;
  uVar75 = uVar75 + uVar73;
  local_6f8 = (uint)(uVar75 < uVar73);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[3];
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_2[6];
  lVar77 = SUB168(auVar26 * auVar62,8);
  uVar73 = SUB168(auVar26 * auVar62,0);
  uVar76 = uVar76 + uVar73;
  local_6f4 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_6f4;
  uVar75 = uVar75 + uVar74;
  local_6f0 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_6ec = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_6ec;
  uVar75 = uVar75 + uVar73;
  local_6e8 = (uint)(uVar75 < uVar73);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[4];
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_2[5];
  lVar77 = SUB168(auVar27 * auVar63,8);
  uVar73 = SUB168(auVar27 * auVar63,0);
  uVar76 = uVar76 + uVar73;
  local_6e4 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_6e4;
  uVar75 = uVar75 + uVar74;
  local_6e0 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_6dc = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_6dc;
  uVar75 = uVar75 + uVar73;
  local_6d8 = (uint)(uVar75 < uVar73);
  param_1[9] = uVar76;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[5];
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[5];
  uVar73 = SUB168(auVar28 * auVar64,0);
  uVar75 = uVar75 + uVar73;
  local_6d4 = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar28 * auVar64,8) + (longlong)(int)local_6d4;
  uVar76 = (longlong)(int)local_700 + (longlong)(int)local_6f8 + (longlong)(int)local_6f0 +
           (longlong)(int)local_6e8 + (longlong)(int)local_6e0 + (longlong)(int)local_6d8 + uVar73;
  local_6d0 = (uint)(uVar76 < uVar73);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[4];
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[6];
  lVar77 = SUB168(auVar29 * auVar65,8);
  uVar73 = SUB168(auVar29 * auVar65,0);
  uVar75 = uVar75 + uVar73;
  local_6cc = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_6cc;
  uVar76 = uVar76 + uVar74;
  local_6c8 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_6c4 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_6c4;
  uVar76 = uVar76 + uVar73;
  local_6c0 = (uint)(uVar76 < uVar73);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[3];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_2[7];
  lVar77 = SUB168(auVar30 * auVar66,8);
  uVar73 = SUB168(auVar30 * auVar66,0);
  uVar75 = uVar75 + uVar73;
  local_6bc = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_6bc;
  uVar76 = uVar76 + uVar74;
  local_6b8 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_6b4 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_6b4;
  uVar76 = uVar76 + uVar73;
  local_6b0 = (uint)(uVar76 < uVar73);
  param_1[10] = uVar75;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[4];
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[7];
  lVar77 = SUB168(auVar31 * auVar67,8);
  uVar73 = SUB168(auVar31 * auVar67,0);
  uVar76 = uVar76 + uVar73;
  local_6ac = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_6ac;
  uVar75 = (longlong)(int)local_6d0 + (longlong)(int)local_6c8 + (longlong)(int)local_6c0 +
           (longlong)(int)local_6b8 + (longlong)(int)local_6b0 + uVar74;
  local_6a8 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_6a4 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_6a4;
  uVar75 = uVar75 + uVar73;
  local_6a0 = (uint)(uVar75 < uVar73);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[5];
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[6];
  lVar77 = SUB168(auVar32 * auVar68,8);
  uVar73 = SUB168(auVar32 * auVar68,0);
  uVar76 = uVar76 + uVar73;
  local_69c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_69c;
  uVar75 = uVar75 + uVar74;
  local_698 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_694 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_694;
  uVar75 = uVar75 + uVar73;
  local_690 = (uint)(uVar75 < uVar73);
  param_1[0xb] = uVar76;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[6];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[6];
  uVar73 = SUB168(auVar33 * auVar69,0);
  uVar75 = uVar75 + uVar73;
  local_68c = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar33 * auVar69,8) + (longlong)(int)local_68c;
  uVar76 = (longlong)(int)local_6a8 + (longlong)(int)local_6a0 + (longlong)(int)local_698 +
           (longlong)(int)local_690 + uVar73;
  local_688 = (uint)(uVar76 < uVar73);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[5];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_2[7];
  lVar77 = SUB168(auVar34 * auVar70,8);
  uVar73 = SUB168(auVar34 * auVar70,0);
  uVar75 = uVar75 + uVar73;
  local_684 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)local_684;
  uVar76 = uVar76 + uVar74;
  local_680 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  local_67c = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)local_67c;
  uVar76 = uVar76 + uVar73;
  local_678 = (uint)(uVar76 < uVar73);
  param_1[0xc] = uVar75;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_2[6];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_2[7];
  lVar77 = SUB168(auVar35 * auVar71,8);
  uVar73 = SUB168(auVar35 * auVar71,0);
  uVar76 = uVar76 + uVar73;
  local_674 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)local_674;
  uVar75 = (longlong)(int)local_688 + (longlong)(int)local_680 + (longlong)(int)local_678 + uVar74;
  local_670 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  local_66c = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)local_66c;
  uVar75 = uVar75 + uVar73;
  local_668 = (uint)(uVar75 < uVar73);
  param_1[0xd] = uVar76;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_2[7];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[7];
  uVar73 = SUB168(auVar36 * auVar72,0);
  uVar75 = uVar75 + uVar73;
  local_664 = (uint)(uVar75 < uVar73);
  param_1[0xe] = uVar75;
  param_1[0xf] = (longlong)(int)local_670 + (longlong)(int)local_668 +
                 SUB168(auVar36 * auVar72,8) + (longlong)(int)local_664;
  return;
}


/* address=140d3ad00 name=FUN_140d3ad00 */

/* WARNING: Removing unreachable block (ram,0x000140d3adff) */
/* WARNING: Removing unreachable block (ram,0x000140d3ada2) */
/* WARNING: Removing unreachable block (ram,0x000140d3af4e) */

void FUN_140d3ad00(undefined8 *param_1,ulonglong *param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
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
  undefined auVar19 [16];
  undefined auVar20 [16];
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1b4;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar11,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[1];
  lVar25 = SUB168(auVar2 * auVar12,8);
  uVar21 = SUB168(auVar2 * auVar12,0);
  uVar22 = SUB168(auVar1 * auVar11,8) + uVar21;
  local_1b4 = (uint)(uVar22 < uVar21);
  uVar22 = uVar22 + uVar21;
  local_22c = (uint)(uVar22 < uVar21);
  uVar21 = lVar25 + (int)local_22c;
  uVar23 = lVar25 + (int)local_1b4 + uVar21;
  local_228 = (uint)(uVar23 < uVar21);
  param_1[1] = uVar22;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[1];
  uVar21 = SUB168(auVar3 * auVar13,0);
  uVar23 = uVar23 + uVar21;
  local_224 = (uint)(uVar23 < uVar21);
  uVar21 = SUB168(auVar3 * auVar13,8) + (longlong)(int)local_224;
  uVar24 = (longlong)(int)local_228 + uVar21;
  local_220 = (uint)(uVar24 < uVar21);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  lVar25 = SUB168(auVar4 * auVar14,8);
  uVar21 = SUB168(auVar4 * auVar14,0);
  uVar23 = uVar23 + uVar21;
  local_21c = (uint)(uVar23 < uVar21);
  uVar22 = lVar25 + (int)local_21c;
  uVar24 = uVar24 + uVar22;
  local_218 = (uint)(uVar24 < uVar22);
  uVar23 = uVar23 + uVar21;
  local_214 = (uint)(uVar23 < uVar21);
  uVar21 = lVar25 + (int)local_214;
  uVar24 = uVar24 + uVar21;
  local_210 = (uint)(uVar24 < uVar21);
  param_1[2] = uVar23;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[3];
  lVar25 = SUB168(auVar5 * auVar15,8);
  uVar21 = SUB168(auVar5 * auVar15,0);
  uVar24 = uVar24 + uVar21;
  local_20c = (uint)(uVar24 < uVar21);
  uVar22 = lVar25 + (int)local_20c;
  uVar23 = (longlong)(int)local_220 + (longlong)(int)local_218 + (longlong)(int)local_210 + uVar22;
  local_208 = (uint)(uVar23 < uVar22);
  uVar24 = uVar24 + uVar21;
  local_204 = (uint)(uVar24 < uVar21);
  uVar21 = lVar25 + (int)local_204;
  uVar23 = uVar23 + uVar21;
  local_200 = (uint)(uVar23 < uVar21);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2[2];
  lVar25 = SUB168(auVar6 * auVar16,8);
  uVar21 = SUB168(auVar6 * auVar16,0);
  uVar24 = uVar24 + uVar21;
  local_1fc = (uint)(uVar24 < uVar21);
  uVar22 = lVar25 + (int)local_1fc;
  uVar23 = uVar23 + uVar22;
  local_1f8 = (uint)(uVar23 < uVar22);
  uVar24 = uVar24 + uVar21;
  local_1f4 = (uint)(uVar24 < uVar21);
  uVar21 = lVar25 + (int)local_1f4;
  uVar23 = uVar23 + uVar21;
  local_1f0 = (uint)(uVar23 < uVar21);
  param_1[3] = uVar24;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[2];
  uVar21 = SUB168(auVar7 * auVar17,0);
  uVar23 = uVar23 + uVar21;
  local_1ec = (uint)(uVar23 < uVar21);
  uVar21 = SUB168(auVar7 * auVar17,8) + (longlong)(int)local_1ec;
  uVar24 = (longlong)(int)local_208 + (longlong)(int)local_200 + (longlong)(int)local_1f8 +
           (longlong)(int)local_1f0 + uVar21;
  local_1e8 = (uint)(uVar24 < uVar21);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[3];
  lVar25 = SUB168(auVar8 * auVar18,8);
  uVar21 = SUB168(auVar8 * auVar18,0);
  uVar23 = uVar23 + uVar21;
  local_1e4 = (uint)(uVar23 < uVar21);
  uVar22 = lVar25 + (int)local_1e4;
  uVar24 = uVar24 + uVar22;
  local_1e0 = (uint)(uVar24 < uVar22);
  uVar23 = uVar23 + uVar21;
  local_1dc = (uint)(uVar23 < uVar21);
  uVar21 = lVar25 + (int)local_1dc;
  uVar24 = uVar24 + uVar21;
  local_1d8 = (uint)(uVar24 < uVar21);
  param_1[4] = uVar23;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[2];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[3];
  lVar25 = SUB168(auVar9 * auVar19,8);
  uVar21 = SUB168(auVar9 * auVar19,0);
  uVar24 = uVar24 + uVar21;
  local_1d4 = (uint)(uVar24 < uVar21);
  uVar22 = lVar25 + (int)local_1d4;
  uVar23 = (longlong)(int)local_1e8 + (longlong)(int)local_1e0 + (longlong)(int)local_1d8 + uVar22;
  local_1d0 = (uint)(uVar23 < uVar22);
  uVar24 = uVar24 + uVar21;
  local_1cc = (uint)(uVar24 < uVar21);
  uVar21 = lVar25 + (int)local_1cc;
  uVar23 = uVar23 + uVar21;
  local_1c8 = (uint)(uVar23 < uVar21);
  param_1[5] = uVar24;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  uVar21 = SUB168(auVar10 * auVar20,0);
  uVar23 = uVar23 + uVar21;
  local_1c4 = (uint)(uVar23 < uVar21);
  param_1[6] = uVar23;
  param_1[7] = (longlong)(int)local_1d0 + (longlong)(int)local_1c8 +
               SUB168(auVar10 * auVar20,8) + (longlong)(int)local_1c4;
  return;
}


/* address=140d3bcc0 name=FUN_140d3bcc0 */

bool FUN_140d3bcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d403d0(param_1,param_3,param_2,param_3);
  return iVar1 < 0;
}


/* address=140d3bd20 name=FUN_140d3bd20 */

ulonglong FUN_140d3bd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_140d46560(param_1,param_4,param_2);
  iVar1 = FUN_140d3bcc0(param_1,param_3,param_4);
  return ~uVar2 & (longlong)iVar1;
}


/* address=140d3bd80 name=FUN_140d3bd80 */

undefined8
FUN_140d3bd80(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  int local_28;
  longlong local_20;
  ulonglong local_18 [3];
  
  iVar1 = FUN_140d46630(&local_20,local_18,param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_140d1d930(param_1 + local_20 * 8,0,(param_4 - local_20) * 8);
    local_28 = 100;
    do {
      local_28 = local_28 + -1;
      if (local_28 == 0) {
        FUN_140d186f0(3,0,0x73,s_D__a_1_s_target_release_build_bo_1413cc580,0x10f);
        return 0;
      }
      FUN_140d272d0();
      FUN_140d45f40(param_1,local_20 << 3,param_5);
      FUN_140d272e0();
      *(ulonglong *)(param_1 + -8 + local_20 * 8) =
           *(ulonglong *)(param_1 + -8 + local_20 * 8) & local_18[0];
      iVar1 = FUN_140d3bd20(param_1,param_2,param_3,local_20);
    } while (iVar1 == 0);
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d3beb0 name=FUN_140d3beb0 */

undefined8 FUN_140d3beb0(ulonglong **param_1,int *param_2,ulonglong param_3,undefined8 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  longlong local_28;
  ulonglong *local_20;
  longlong local_18;
  ulonglong *local_10;
  
  iVar1 = FUN_140d46630(&local_38,&local_30,param_3,*param_4,(longlong)*(int *)(param_4 + 1));
  if ((iVar1 == 0) || (iVar1 = FUN_140d2f730(param_1,CONCAT44(uStack_34,local_38)), iVar1 == 0)) {
    return 0;
  }
  if (CONCAT44(uStack_34,local_38) == 0) {
    FID_conflict__assert((wchar_t *)s_w_1413cc6c8,(wchar_t *)s_D_1413cc5f0,0x139);
  }
  if (local_30 == 0) {
    FID_conflict__assert((wchar_t *)s_m_1413cc7b8,(wchar_t *)s_D_1413cc6e0,0x13a);
  }
  if ((CONCAT44(uStack_34,local_38) == 1) && (local_30 >> 1 < param_3)) {
    FUN_140d186f0(3,0,0x6c,s_D__a_1_s_target_release_build_bo_1413cc7d0,0x13d);
    return 0;
  }
  FUN_140d272d0();
  FUN_140d459b0(*param_1,CONCAT44(uStack_34,local_38) << 3);
  FUN_140d272e0();
  (*param_1)[CONCAT44(uStack_34,local_38) + -1] =
       (*param_1)[CONCAT44(uStack_34,local_38) + -1] & local_30;
  iVar1 = FUN_140d3bd20(*param_1,param_3,*param_4,CONCAT44(uStack_34,local_38));
  *param_2 = iVar1;
  local_28 = -(longlong)*param_2;
  local_18 = 0;
  local_20 = *param_1;
  uVar2 = FUN_140d1d720(local_28,0,param_3);
  **param_1 = *(ulonglong *)((longlong)local_20 + local_18) | uVar2;
  local_10 = *param_1;
  uVar2 = FUN_140d1d720(local_28,0xffffffffffffffff,local_30 >> 1);
  (*param_1)[CONCAT44(uStack_34,local_38) + -1] =
       local_10[CONCAT44(uStack_34,local_38) + -1] & uVar2;
  iVar1 = FUN_140d3bd20(*param_1,param_3,*param_4,CONCAT44(uStack_34,local_38));
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_b_1413cc920,(wchar_t *)s_D_1413cc840,0x150);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 1) = local_38;
  return 1;
}


/* address=140d3c150 name=FUN_140d3c150 */

void FUN_140d3c150(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_140d29a20(param_1);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___1413ca9f8,(wchar_t *)s_D_1413ca910,0x24);
  }
  iVar1 = FUN_140d27a70(param_1);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___1413cab08,(wchar_t *)s_D_1413caa20,0x25);
  }
  iVar1 = FUN_140d29af0(param_1);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_B_1413cac18,(wchar_t *)s_D_1413cab30,0x26);
  }
  FUN_140d43140(*(undefined8 *)*param_1);
  return;
}


/* address=140d3c210 name=FUN_140d3c210 */

undefined8 FUN_140d3c210(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_140d29a20(param_3);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___1413cae28,(wchar_t *)s_D_1413cad40,0xa4);
  }
  iVar1 = FUN_140d27a70(param_3);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___1413caf38,(wchar_t *)s_D_1413cae50,0xa5);
  }
  iVar1 = FUN_140d29af0(param_3);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_B_1413cb048,(wchar_t *)s_D_1413caf60,0xa6);
  }
  FUN_140d27910(param_1);
  uVar2 = FUN_140d27880(param_3);
  if (uVar2 == 0) {
    FID_conflict__assert((wchar_t *)s_n_1413cb158,(wchar_t *)s_D_1413cb070,0xab);
  }
  if (param_2 <= uVar2) {
    FID_conflict__assert((wchar_t *)s_p_1413cb258,(wchar_t *)s_D_1413cb170,0xac);
  }
  if (uVar2 == 1) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_140d2a0e0(param_1,uVar2 - 1);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_140d3e630(param_1,param_1,param_2 - (uVar2 - 1),param_3,param_4), iVar1 != 0)) {
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d3c370 name=FUN_140d3c370 */

int FUN_140d3c370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong **ppuVar1;
  int iVar2;
  longlong lVar3;
  int local_68;
  ulonglong **local_60;
  uint local_58;
  ulonglong **local_50;
  int local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  iVar2 = FUN_140d29af0(param_2);
  if (iVar2 == 0) {
    FUN_140d186f0(3,0,0x68,s_D__a_1_s_target_release_build_bo_1413ca230,0x49);
    local_68 = -2;
  }
  else {
    iVar2 = FUN_140d27a70(param_2);
    if (iVar2 == 0) {
      local_68 = -2;
      FUN_140d28030(param_3);
      local_60 = (ulonglong **)FUN_140d28090(param_3);
      local_50 = (ulonglong **)FUN_140d28090(param_3);
      if (((local_50 != (ulonglong **)0x0) && (lVar3 = FUN_140d27750(local_60,param_1), lVar3 != 0))
         && (lVar3 = FUN_140d27750(local_50,param_2), lVar3 != 0)) {
        local_68 = 1;
        while (ppuVar1 = local_60, iVar2 = FUN_140d29a20(local_60), iVar2 == 0) {
          local_58 = 0;
          while (iVar2 = FUN_140d2a2b0(local_60,local_58), iVar2 == 0) {
            local_58 = local_58 + 1;
          }
          iVar2 = FUN_140d29f90(local_60,local_60,local_58);
          if (iVar2 == 0) {
            local_68 = -2;
            goto LAB_140d3c6a2;
          }
          if ((local_58 & 1) != 0) {
            if (*(int *)(local_50 + 1) == 0) {
              local_40 = 0;
            }
            else {
              local_40 = **local_50;
            }
            local_68 = local_68 * *(int *)(&DAT_14104c688 + (local_40 & 7) * 4);
          }
          if (*(int *)(local_60 + 2) == 0) {
            if (*(int *)(local_60 + 1) == 0) {
              local_30 = 0;
            }
            else {
              local_30 = **local_60;
            }
            local_20 = local_30;
          }
          else {
            if (*(int *)(local_60 + 1) == 0) {
              local_38 = 0;
            }
            else {
              local_38 = **local_60;
            }
            local_20 = ~local_38;
          }
          if (*(int *)(local_50 + 1) == 0) {
            local_28 = 0;
          }
          else {
            local_28 = **local_50;
          }
          if ((local_20 & local_28 & 2) != 0) {
            local_68 = -local_68;
          }
          iVar2 = FUN_140d2a920(local_50,local_50,local_60,param_3);
          if (iVar2 == 0) {
            local_68 = -2;
            goto LAB_140d3c6a2;
          }
          local_60 = local_50;
          local_50 = ppuVar1;
          *(undefined4 *)(ppuVar1 + 2) = 0;
        }
        iVar2 = FUN_140d29a40(local_50);
        if (iVar2 == 0) {
          local_48 = 0;
        }
        else {
          local_48 = local_68;
        }
        local_68 = local_48;
      }
LAB_140d3c6a2:
      FUN_140d281e0(param_3);
    }
    else {
      FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413ca2a0,0x4f);
      local_68 = -2;
    }
  }
  return local_68;
}


/* address=140d3c6d0 name=FUN_140d3c6d0 */

ulonglong FUN_140d3c6d0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (param_3 / 0x40 < param_2) {
    uVar1 = *(ulonglong *)(param_1 + (param_3 / 0x40) * 8) >> (sbyte)(param_3 % 0x40) & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d3c750 name=FUN_140d3c750 */

undefined8 FUN_140d3c750(longlong **param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  int local_18;
  
  pplVar2 = (longlong **)(param_2 + 0x18);
  if ((*(int *)(param_2 + 0x20) < 1) || (-1 < (*pplVar2)[*(int *)(param_2 + 0x20) + -1])) {
    uVar3 = FUN_140d2d6c0(param_1,param_2,param_2,param_3);
  }
  else {
    iVar1 = FUN_140d2f730(param_1);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      **param_1 = -**pplVar2;
      for (local_18 = 1; local_18 < *(int *)(param_2 + 0x20); local_18 = local_18 + 1) {
        (*param_1)[local_18] = ~(*pplVar2)[local_18];
      }
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_1 + 2) = 0;
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=140d3c890 name=FUN_140d3c890 */

undefined4 FUN_140d3c890(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_140d27a70(param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_140d2fb30(param_1,(longlong)*(int *)(param_2 + 0x20)), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140d3c8f0 name=FUN_140d3c8f0 */

undefined2 FUN_140d3c8f0(longlong *param_1,ushort param_2)

{
  undefined auVar1 [16];
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 local_28;
  int local_24;
  
  if (param_2 < 2) {
    local_28 = 0;
  }
  else {
    uVar3 = FUN_140d2f3c0((longlong)(int)(param_2 - 1));
    if (0x10 < uVar3) {
      FID_conflict__assert((wchar_t *)s_p_1413c7ed0,(wchar_t *)s_D_1413c7df0,0x48);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (1L << ((char)uVar3 + 0x20U & 0x3f)) + -1 + (ulonglong)param_2;
    uVar4 = SUB164(auVar1 / ZEXT216(param_2),0);
    local_28 = 0;
    local_24 = *(int *)(param_1 + 1);
    while (local_24 = local_24 + -1, -1 < local_24) {
      uVar2 = FUN_140d40ee0(local_28,*(ulonglong *)(*param_1 + (longlong)local_24 * 8) >> 0x20,
                            param_2,uVar3,uVar4);
      local_28 = FUN_140d40ee0(uVar2,*(ulonglong *)(*param_1 + (longlong)local_24 * 8) & 0xffffffff,
                               param_2,uVar3,uVar4);
    }
  }
  return local_28;
}


/* address=140d3ca30 name=FUN_140d3ca30 */

undefined4 FUN_140d3ca30(undefined8 param_1)

{
  int iVar1;
  undefined2 local_18 [12];
  
  iVar1 = FUN_140d45920(local_18,param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_140d29a90(param_1,local_18[0]), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* address=140d3ca90 name=FUN_140d3ca90 */

undefined8 FUN_140d3ca90(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = param_2 + 0x18;
  lVar4 = FUN_140d28090(param_3);
  *param_1 = lVar4;
  lVar4 = FUN_140d28090(param_3);
  param_1[1] = lVar4;
  lVar4 = FUN_140d28090(param_3);
  param_1[2] = lVar4;
  lVar4 = FUN_140d28090(param_3);
  param_1[3] = lVar4;
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) && (param_1[3] != 0)) {
    uVar5 = FUN_140d27850();
    iVar1 = FUN_140d3d4b0(*param_1,lVar3,uVar5);
    if (iVar1 != 0) {
      uVar2 = FUN_140d2a3e0(*param_1);
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
      iVar1 = FUN_140d3d070(param_1[1],*param_1,*(undefined4 *)((longlong)param_1 + 0x24),param_3);
      if (iVar1 != 0) {
        uVar2 = FUN_140d27880(lVar3);
        *(undefined4 *)(param_1 + 4) = uVar2;
        iVar1 = FUN_140d3c750(param_1[2],param_2,param_3);
        if ((iVar1 != 0) && (iVar1 = FUN_140d3d4b0(param_1[3],lVar3,param_1[2]), iVar1 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* address=140d3cc00 name=FUN_140d3cc00 */

undefined4
FUN_140d3cc00(longlong param_1,uint *param_2,undefined8 param_3,longlong param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int local_38;
  undefined4 local_34;
  ulonglong local_20;
  
  local_34 = 0;
  FUN_140d28030(param_5);
  lVar4 = FUN_140d28090(param_5);
  if (((lVar4 != 0) &&
      (iVar1 = FUN_140d2e1d0(lVar4,param_3,*(undefined8 *)(param_1 + 8),param_4 + 0x18,param_5,
                             param_4), iVar1 != 0)) &&
     (iVar1 = FUN_140d2d670(lVar4,lVar4,param_4,param_5), iVar1 != 0)) {
    uVar2 = FUN_140d297d0(lVar4,*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_140d297d0(lVar4,*(undefined8 *)(param_1 + 0x18));
    local_20 = -(longlong)(int)(uVar2 | uVar3);
    local_38 = 1;
    while ((local_38 < *(int *)(param_1 + 0x20) &&
           (uVar5 = FUN_140d1d6f0(local_38,*(undefined4 *)(param_1 + 0x24)),
           (uVar5 & ~local_20) == 0))) {
      iVar1 = FUN_140d2d750(lVar4,lVar4,lVar4,param_4,param_5);
      if (iVar1 == 0) goto LAB_140d3ce06;
      iVar1 = FUN_140d297d0(lVar4,*(undefined8 *)(param_1 + 0x18));
      local_20 = local_20 | -(longlong)iVar1;
      iVar1 = FUN_140d297d0(lVar4,*(undefined8 *)(param_1 + 0x10));
      if (((longlong)iVar1 & ~local_20) != 0) break;
      local_38 = local_38 + 1;
    }
    *param_2 = (uint)local_20 & 1;
    local_34 = 1;
  }
LAB_140d3ce06:
  FUN_140d281e0(param_5);
  return local_34;
}


/* address=140d3ce30 name=FUN_140d3ce30 */

void FUN_140d3ce30(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong local_18;
  
  if (param_3 != 0) {
    for (local_18 = 0; local_18 < param_3 - 1U; local_18 = local_18 + 1) {
      *(ulonglong *)(param_1 + local_18 * 8) =
           *(ulonglong *)(param_2 + local_18 * 8) >> 1 |
           *(longlong *)(param_2 + 8 + local_18 * 8) << 0x3f;
    }
    *(ulonglong *)(param_1 + -8 + param_3 * 8) = *(ulonglong *)(param_2 + -8 + param_3 * 8) >> 1;
  }
  return;
}


/* address=140d3ced0 name=FUN_140d3ced0 */

void FUN_140d3ced0(longlong param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  ulonglong uVar1;
  sbyte sVar2;
  ulonglong local_28;
  
  uVar1 = (ulonglong)param_3 / 0x40;
  if (uVar1 < param_4) {
    local_28 = uVar1;
    if (param_3 % 0x40 == 0) {
      FUN_140d1d8e0(param_1,param_2 + uVar1 * 8,(param_4 - uVar1) * 8);
    }
    else {
      for (; sVar2 = (sbyte)(param_3 % 0x40), local_28 < param_4 - 1; local_28 = local_28 + 1) {
        *(ulonglong *)(param_1 + (local_28 - uVar1) * 8) =
             *(ulonglong *)(param_2 + local_28 * 8) >> sVar2 |
             *(longlong *)(param_2 + 8 + local_28 * 8) << (0x40U - sVar2 & 0x3f);
      }
      *(ulonglong *)(param_1 + ((param_4 - 1) - uVar1) * 8) =
           *(ulonglong *)(param_2 + -8 + param_4 * 8) >> sVar2;
    }
    FUN_140d1d930(param_1 + param_4 * 8 + uVar1 * -8,0,uVar1 << 3);
  }
  else {
    FUN_140d1d930(param_1,0,param_4 << 3);
  }
  return;
}


/* address=140d3d070 name=FUN_140d3d070 */

undefined4 FUN_140d3d070(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 local_24;
  
  local_24 = 0;
  FUN_140d28030(param_4);
  puVar3 = (undefined8 *)FUN_140d28090(param_4);
  if (((puVar3 != (undefined8 *)0x0) && (lVar4 = FUN_140d27750(param_1,param_2), lVar4 != 0)) &&
     (iVar2 = FUN_140d2f730(puVar3,(longlong)*(int *)(param_1 + 1)), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 1);
    for (bVar1 = 0; (uint)(iVar2 * 0x40) >> (bVar1 & 0x1f) != 0; bVar1 = bVar1 + 1) {
      FUN_140d3ced0(*puVar3,*param_1,1 << (bVar1 & 0x1f),(longlong)*(int *)(param_1 + 1));
      FUN_140d2f990(*param_1,-(ulonglong)(param_3 >> (bVar1 & 0x1f) & 1),*puVar3,*param_1,
                    (longlong)*(int *)(param_1 + 1));
    }
    local_24 = 1;
  }
  FUN_140d281e0(param_4);
  return local_24;
}


/* address=140d3d1d0 name=FUN_140d3d1d0 */

longlong FUN_140d3d1d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  
  if (param_1 == param_2) {
    FID_conflict__assert((wchar_t *)s_r_1413c7790,(wchar_t *)s_D_1413c76c0,0x19f);
  }
  lVar1 = FUN_140d30d80(param_1,param_2,param_4,param_5);
  param_3 = param_3 - lVar1;
  if ((param_3 != 0) && (param_3 != -1)) {
    FID_conflict__assert((wchar_t *)s_c_1413c7870,(wchar_t *)s_D_1413c77a0,0x1ac);
  }
  FUN_140d2f990(param_1,param_3,param_2,param_1,param_5);
  return param_3;
}


/* address=140d3d2a0 name=FUN_140d3d2a0 */

longlong FUN_140d3d2a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_140d30d80(param_4,param_1,param_3,param_5);
  param_2 = param_2 - lVar1;
  if ((param_2 != 0) && (param_2 != -1)) {
    FID_conflict__assert((wchar_t *)s_c_1413c7990,(wchar_t *)s_D_1413c78c0,0x1b5);
  }
  FUN_140d2f990(param_1,param_2,param_1,param_4,param_5);
  return param_2;
}


/* address=140d3d340 name=FUN_140d3d340 */

undefined8 FUN_140d3d340(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *local_res10;
  longlong *local_res18;
  int local_38;
  uint local_2c;
  longlong local_28;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(int *)(param_2 + 1) < *(int *)(param_3 + 1)) {
    local_res10 = param_3;
    local_res18 = param_2;
  }
  iVar1 = *(int *)(local_res10 + 1);
  local_38 = *(int *)(local_res18 + 1);
  iVar2 = FUN_140d2f730(param_1,(longlong)(iVar1 + 1));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 1) = iVar1 + 1;
    local_28 = FUN_140d30b50(*param_1,*local_res10,*local_res18,(longlong)local_38);
    for (; local_38 < iVar1; local_38 = local_38 + 1) {
      uVar4 = local_28 + *(longlong *)(*local_res10 + (longlong)local_38 * 8);
      local_2c = (uint)(uVar4 < *(ulonglong *)(*local_res10 + (longlong)local_38 * 8));
      local_28 = (longlong)(int)local_2c;
      *(ulonglong *)(*param_1 + (longlong)local_38 * 8) = uVar4;
    }
    *(longlong *)(*param_1 + (longlong)iVar1 * 8) = local_28;
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140d3d4b0 name=FUN_140d3d4b0 */

undefined8 FUN_140d3d4b0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int local_28;
  int local_24;
  uint local_20;
  longlong local_18;
  
  local_24 = *(int *)(param_3 + 1);
  if (*(int *)(param_2 + 1) < local_24) {
    iVar2 = FUN_140d2fb30(param_3,(longlong)*(int *)(param_2 + 1));
    if (iVar2 == 0) {
      FUN_140d186f0(3,0,100,s_D__a_1_s_target_release_build_bo_1413c6920,0xe8);
      return 0;
    }
    local_24 = *(int *)(param_2 + 1);
  }
  iVar2 = FUN_140d2f730(param_1,(longlong)*(int *)(param_2 + 1));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_18 = FUN_140d30d80(*param_1,*param_2,*param_3,(longlong)local_24);
    for (local_28 = local_24; local_28 < *(int *)(param_2 + 1); local_28 = local_28 + 1) {
      uVar1 = *(ulonglong *)(*param_2 + (longlong)local_28 * 8);
      *(longlong *)(*param_1 + (longlong)local_28 * 8) =
           *(longlong *)(*param_2 + (longlong)local_28 * 8) - local_18;
      local_20 = (uint)(uVar1 < *(ulonglong *)(*param_1 + (longlong)local_28 * 8));
      local_18 = (longlong)(int)local_20;
    }
    if (local_18 == 0) {
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_1 + 2) = 0;
      uVar3 = 1;
    }
    else {
      FUN_140d186f0(3,0,100,s_D__a_1_s_target_release_build_bo_1413c6990,0xfb);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140d3d670 name=FUN_140d3d670 */

int FUN_140d3d670(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  if (*(int *)(param_2 + 1) < *(int *)(param_3 + 1)) {
    local_34 = *(undefined4 *)(param_2 + 1);
  }
  else {
    local_34 = *(undefined4 *)(param_3 + 1);
  }
  iVar1 = *(int *)(param_3 + 1);
  iVar2 = *(int *)(param_2 + 1);
  if (*(int *)(param_2 + 1) < *(int *)(param_3 + 1)) {
    local_30 = *(int *)(param_3 + 1);
  }
  else {
    local_30 = *(int *)(param_2 + 1);
  }
  FUN_140d28030(param_4);
  puVar4 = (undefined8 *)FUN_140d28090(param_4);
  if (puVar4 != (undefined8 *)0x0) {
    iVar3 = FUN_140d2f730(param_1,(longlong)local_30);
    if (iVar3 != 0) {
      iVar3 = FUN_140d2f730(puVar4,(longlong)local_30);
      if (iVar3 != 0) {
        local_2c = 1;
        goto LAB_140d3d77a;
      }
    }
  }
  local_2c = 0;
LAB_140d3d77a:
  if (local_2c != 0) {
    FUN_140d43760(*param_1,*param_2,*param_3,local_34,iVar2 - iVar1,*puVar4);
    *(int *)(param_1 + 1) = local_30;
  }
  FUN_140d281e0(param_4);
  return local_2c;
}


/* address=140d3d7f0 name=FUN_140d3d7f0 */

undefined8 FUN_140d3d7f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_2 + 0x10) == 0) && (*(int *)(param_3 + 0x10) == 0)) {
    uVar1 = FUN_140d44a60(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413cbed0,0x210);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d3d870 name=FUN_140d3d870 */

void FUN_140d3d870(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined auStack_168 [32];
  uint local_148;
  undefined8 *local_140;
  int local_138;
  undefined4 local_134;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_168;
  local_148 = *(uint *)(param_2 + 1);
  if ((int)local_148 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_140d3daed;
  }
  local_134 = 0;
  FUN_140d28030(param_3);
  local_128 = param_1;
  if (param_2 == param_1) {
    local_128 = (undefined8 *)FUN_140d28090(param_3);
  }
  local_140 = local_128;
  local_130 = (undefined8 *)FUN_140d28090(param_3);
  if ((local_140 != (undefined8 *)0x0) && (local_130 != (undefined8 *)0x0)) {
    local_138 = local_148 << 1;
    iVar1 = FUN_140d2f730(local_140,(longlong)local_138);
    if (iVar1 != 0) {
      if (local_148 == 4) {
        FUN_140d3ad00(*local_140,*param_2);
      }
      else if (local_148 == 8) {
        FUN_140d36f00(*local_140,*param_2);
      }
      else {
        if (0xf < (int)local_148) {
          if ((local_148 == 0) || ((local_148 & local_148 - 1) != 0)) {
            iVar1 = FUN_140d2f730(local_130,(longlong)local_138);
            if (iVar1 != 0) {
              FUN_140d44eb0(*local_140,*param_2,(longlong)(int)local_148,*local_130);
              goto LAB_140d3da94;
            }
          }
          else {
            iVar1 = FUN_140d2f730(local_130,(longlong)(int)(local_148 << 2));
            if (iVar1 != 0) {
              FUN_140d45060(*local_140,*param_2,(longlong)(int)local_148,*local_130);
              goto LAB_140d3da94;
            }
          }
          goto LAB_140d3dadc;
        }
        FUN_140d44eb0(*local_140,*param_2,(longlong)(int)local_148,local_118);
      }
LAB_140d3da94:
      *(undefined4 *)(local_140 + 2) = 0;
      *(int *)(local_140 + 1) = local_138;
      if ((local_140 == param_1) || (lVar2 = FUN_140d27750(param_1,local_140), lVar2 != 0)) {
        local_134 = 1;
      }
    }
  }
LAB_140d3dadc:
  FUN_140d281e0(param_3);
LAB_140d3daed:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_168);
  return;
}


/* address=140d3db10 name=FUN_140d3db10 */

undefined4
FUN_140d3db10(ulonglong **param_1,ulonglong **param_2,ulonglong **param_3,ulonglong **param_4,
             uint param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar7;
  ulonglong **local_58;
  uint local_50;
  int local_4c;
  int local_48;
  ulonglong **local_40;
  undefined4 local_38;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  iVar1 = FUN_140d27a70(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_140d27a70(param_4), iVar1 == 0)) {
    iVar1 = FUN_140d29a20(param_4);
    if (iVar1 == 0) {
      local_38 = 0;
      FUN_140d28030(param_6);
      if (((param_1 == (ulonglong **)0x0) || (param_1 == param_3)) ||
         (local_40 = param_1, param_1 == param_4)) {
        local_40 = (ulonglong **)FUN_140d28090(param_6);
      }
      if (((param_2 == (ulonglong **)0x0) || (param_2 == param_3)) ||
         (local_58 = param_2, param_2 == param_4)) {
        local_58 = (ulonglong **)FUN_140d28090(param_6);
      }
      puVar3 = (undefined8 *)FUN_140d28090(param_6);
      if (((local_40 != (ulonglong **)0x0) && (local_58 != (ulonglong **)0x0)) &&
         ((puVar3 != (undefined8 *)0x0 &&
          (((iVar1 = FUN_140d2f730(local_40,(longlong)*(int *)(param_3 + 1)), iVar1 != 0 &&
            (iVar1 = FUN_140d2f730(local_58,(longlong)*(int *)(param_4 + 1)), iVar1 != 0)) &&
           (iVar1 = FUN_140d2f730(puVar3), iVar1 != 0)))))) {
        FUN_140d1d930(*local_40,0,(longlong)*(int *)(param_3 + 1) << 3);
        *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
        *(undefined4 *)(local_40 + 2) = 0;
        FUN_140d1d930(*local_58,0,(longlong)*(int *)(param_4 + 1) << 3);
        *(undefined4 *)(local_58 + 1) = *(undefined4 *)(param_4 + 1);
        *(undefined4 *)(local_58 + 2) = 0;
        uVar2 = FUN_140d27880(param_4);
        if (uVar2 < param_5) {
          FID_conflict__assert((wchar_t *)s_d_1413c7b90,(wchar_t *)s_D_1413c7ac0,0x1fb);
        }
        local_50 = 0;
        if (param_5 != 0) {
          local_50 = (param_5 - 1) / 0x40;
          if (*(int *)(param_3 + 1) < (int)local_50) {
            local_50 = *(uint *)(param_3 + 1);
          }
          FUN_140d1d890(*local_58,
                        *param_3 + ((longlong)*(int *)(param_3 + 1) - (longlong)(int)local_50),
                        (longlong)(int)local_50 << 3);
        }
        local_4c = *(int *)(param_3 + 1) - local_50;
        while (local_4c = local_4c + -1, -1 < local_4c) {
          for (local_48 = 0x3f; -1 < local_48; local_48 = local_48 + -1) {
            uVar4 = FUN_140d30b50(*local_58,*local_58,*local_58,(longlong)*(int *)(param_4 + 1));
            **local_58 = **local_58 | (*param_3)[local_4c] >> ((byte)local_48 & 0x3f) & 1;
            uVar5 = FUN_140d3d2a0(*local_58,uVar4,*param_4,*puVar3,(longlong)*(int *)(param_4 + 1));
            (*local_40)[local_4c] = (*local_40)[local_4c] | (~uVar5 & 1) << ((byte)local_48 & 0x3f);
          }
        }
        if (((param_1 == (ulonglong **)0x0) || (lVar6 = FUN_140d27750(param_1,local_40), lVar6 != 0)
            ) && ((param_2 == (ulonglong **)0x0 ||
                  (lVar6 = FUN_140d27750(param_2,local_58), lVar6 != 0)))) {
          local_38 = 1;
        }
      }
      FUN_140d281e0(param_6);
    }
    else {
      FUN_140d186f0(3,0,0x69,s_D__a_1_s_target_release_build_bo_1413c7a50,CONCAT44(uVar7,0x1d1));
      local_38 = 0;
    }
  }
  else {
    FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413c79e0,CONCAT44(uVar7,0x1cd));
    local_38 = 0;
  }
  return local_38;
}


/* address=140d3e000 name=FUN_140d3e000 */

undefined4 FUN_140d3e000(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  ulonglong **local_18;
  ulonglong local_10;
  
  local_20 = 0;
  FUN_140d28030(param_4);
  local_18 = (ulonglong **)FUN_140d28090(param_4);
  if ((local_18 != (ulonglong **)0x0) &&
     (iVar1 = FUN_140d424b0(local_18,&local_1c,param_2,param_3,param_4), iVar1 != 0)) {
    if (*(int *)(local_18 + 1) == 0) {
      *param_1 = 0;
    }
    else {
      local_10 = (ulonglong)local_1c | **local_18 ^ 1;
      for (local_28 = 1; local_28 < *(int *)(local_18 + 1); local_28 = local_28 + 1) {
        local_10 = local_10 | (*local_18)[local_28];
      }
      local_24 = (uint)(local_10 == 0);
      *param_1 = local_24;
    }
    local_20 = 1;
  }
  FUN_140d281e0(param_4);
  return local_20;
}


/* address=140d3e140 name=FUN_140d3e140 */

undefined4 FUN_140d3e140(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  longlong local_18;
  
  FUN_140d28030(param_4);
  local_18 = FUN_140d28090(param_4);
  if (local_18 != 0) {
    iVar1 = FUN_140d3d7f0(param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      uVar2 = param_4;
      iVar1 = FUN_140d424b0(local_18,&local_24,param_2,param_3,param_4);
      if (iVar1 != 0) {
        iVar1 = FUN_140d3db10(param_1,0,param_1,local_18,uVar2 & 0xffffffff00000000,param_4);
        if (iVar1 != 0) {
          iVar1 = FUN_140d3d070(param_1,param_1,local_24,param_4);
          if (iVar1 != 0) {
            local_28 = 1;
            goto LAB_140d3e21c;
          }
        }
      }
    }
  }
  local_28 = 0;
LAB_140d3e21c:
  local_20 = local_28;
  FUN_140d281e0(param_4);
  return local_20;
}


/* address=140d3e240 name=FUN_140d3e240 */

void FUN_140d3e240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d30b50(param_1,param_2,param_3,param_6);
  FUN_140d3d2a0(param_1,uVar1,param_4,param_5,param_6);
  return;
}


/* address=140d3e2b0 name=FUN_140d3e2b0 */

int FUN_140d3e2b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_18;
  
  FUN_140d28030(param_5);
  puVar2 = (undefined8 *)FUN_140d40d90(param_2,(longlong)*(int *)(param_4 + 1),param_5);
  puVar3 = (undefined8 *)FUN_140d40d90(param_3,(longlong)*(int *)(param_4 + 1),param_5);
  puVar4 = (undefined8 *)FUN_140d40d20((longlong)*(int *)(param_4 + 1),param_5);
  if (((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) &&
     (puVar4 != (undefined8 *)0x0)) {
    iVar1 = FUN_140d2f730(param_1,(longlong)*(int *)(param_4 + 1));
    if (iVar1 != 0) {
      local_18 = 1;
      goto LAB_140d3e371;
    }
  }
  local_18 = 0;
LAB_140d3e371:
  if (local_18 != 0) {
    FUN_140d3e240(*param_1,*puVar2,*puVar3,*param_4,*puVar4,(longlong)*(int *)(param_4 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  FUN_140d281e0(param_5);
  return local_18;
}


/* address=140d3e400 name=FUN_140d3e400 */

void FUN_140d3e400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_140d30d80(param_1,param_2,param_3,param_6);
  FUN_140d30b50(param_5,param_1,param_4,param_6);
  FUN_140d2f990(param_1,-lVar1,param_5,param_1,param_6);
  return;
}


/* address=140d3e490 name=FUN_140d3e490 */

int FUN_140d3e490(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_18;
  
  FUN_140d28030(param_5);
  puVar2 = (undefined8 *)FUN_140d40d90(param_2,(longlong)*(int *)(param_4 + 1),param_5);
  puVar3 = (undefined8 *)FUN_140d40d90(param_3,(longlong)*(int *)(param_4 + 1),param_5);
  puVar4 = (undefined8 *)FUN_140d40d20((longlong)*(int *)(param_4 + 1),param_5);
  if (((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) &&
     (puVar4 != (undefined8 *)0x0)) {
    iVar1 = FUN_140d2f730(param_1,(longlong)*(int *)(param_4 + 1));
    if (iVar1 != 0) {
      local_18 = 1;
      goto LAB_140d3e551;
    }
  }
  local_18 = 0;
LAB_140d3e551:
  if (local_18 != 0) {
    FUN_140d3e400(*param_1,*puVar2,*puVar3,*param_4,*puVar4,(longlong)*(int *)(param_4 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  FUN_140d281e0(param_5);
  return local_18;
}


/* address=140d3e5e0 name=FUN_140d3e5e0 */

void FUN_140d3e5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d3e2b0(param_1,param_2,param_2,param_3,param_4);
  return;
}


/* address=140d3e630 name=FUN_140d3e630 */

undefined8
FUN_140d3e630(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_18;
  
  lVar2 = FUN_140d27750(param_1,param_2);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
      iVar1 = FUN_140d3e5e0(param_1,param_1,param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140d3e6c0 name=FUN_140d3e6c0 */

bool FUN_140d3e6c0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  bool bVar20;
  ulonglong in_stack_fffffffffffffef8;
  undefined4 uVar21;
  ulonglong local_e8;
  ulonglong local_78;
  
  *param_2 = 0;
  iVar1 = FUN_140d27a70(param_3);
  uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
  if (iVar1 == 0) {
    iVar1 = FUN_140d29780(param_3,param_4);
    uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
    if (iVar1 < 0) {
      iVar1 = FUN_140d29a20(param_3);
      uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
      if (iVar1 != 0) {
        iVar1 = FUN_140d29a40(param_4);
        if (iVar1 != 0) {
          FUN_140d27910(param_1);
          return true;
        }
        *param_2 = 1;
        FUN_140d186f0(3,0,0x70,s_D__a_1_s_target_release_build_bo_1413c9c40,CONCAT44(uVar21,0xb7));
        return false;
      }
      iVar1 = FUN_140d29af0(param_3);
      if ((iVar1 == 0) && (iVar1 = FUN_140d29af0(param_4), iVar1 == 0)) {
        *param_2 = 1;
        FUN_140d186f0(3,0,0x70,s_D__a_1_s_target_release_build_bo_1413c9cb0,199);
        return false;
      }
      uVar2 = (ulonglong)*(int *)(param_4 + 1);
      local_e8 = (longlong)*(int *)(param_3 + 1);
      if (uVar2 < (ulonglong)(longlong)*(int *)(param_3 + 1)) {
        local_e8 = uVar2;
      }
      bVar20 = false;
      FUN_140d28030(param_5);
      puVar3 = (undefined8 *)FUN_140d28090(param_5);
      puVar4 = (undefined8 *)FUN_140d28090(param_5);
      puVar5 = (undefined8 *)FUN_140d28090(param_5);
      puVar6 = (undefined8 *)FUN_140d28090(param_5);
      puVar7 = (undefined8 *)FUN_140d28090(param_5);
      puVar8 = (undefined8 *)FUN_140d28090(param_5);
      puVar9 = (undefined8 *)FUN_140d28090(param_5);
      puVar10 = (undefined8 *)FUN_140d28090(param_5);
      if (((((((puVar3 != (undefined8 *)0x0) && (puVar4 != (undefined8 *)0x0)) &&
             (puVar5 != (undefined8 *)0x0)) &&
            ((puVar6 != (undefined8 *)0x0 && (puVar7 != (undefined8 *)0x0)))) &&
           (((puVar8 != (undefined8 *)0x0 &&
             ((puVar9 != (undefined8 *)0x0 && (puVar10 != (undefined8 *)0x0)))) &&
            (lVar11 = FUN_140d27750(puVar3,param_3), lVar11 != 0)))) &&
          ((((lVar11 = FUN_140d27750(puVar4,param_4), lVar11 != 0 &&
             (iVar1 = FUN_140d27940(puVar5), iVar1 != 0)) &&
            (iVar1 = FUN_140d27940(puVar8), iVar1 != 0)) &&
           (((iVar1 = FUN_140d2f8b0(puVar3,uVar2), iVar1 != 0 &&
             (iVar1 = FUN_140d2f8b0(puVar4,uVar2), iVar1 != 0)) &&
            ((iVar1 = FUN_140d2f8b0(puVar5,uVar2), iVar1 != 0 &&
             ((iVar1 = FUN_140d2f8b0(puVar7,uVar2), iVar1 != 0 &&
              (iVar1 = FUN_140d2f8b0(puVar6,local_e8), iVar1 != 0)))))))))) &&
         ((iVar1 = FUN_140d2f8b0(puVar8,local_e8), iVar1 != 0 &&
          ((iVar1 = FUN_140d2f8b0(puVar9,uVar2), iVar1 != 0 &&
           (iVar1 = FUN_140d2f8b0(puVar10,uVar2), iVar1 != 0)))))) {
        uVar19 = local_e8 * 0x40 + uVar2 * 0x40;
        if (uVar19 < local_e8 * 0x40) {
          FUN_140d186f0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413c9d20,0xf8);
        }
        else {
          for (local_78 = 0; uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20),
              local_78 < uVar19; local_78 = local_78 + 1) {
            uVar12 = FUN_140d42320(*(undefined8 *)*puVar3);
            uVar13 = FUN_140d42320(*(undefined8 *)*puVar4);
            uVar12 = uVar12 & uVar13;
            lVar11 = FUN_140d30d80(*puVar9,*puVar4,*puVar3,uVar2);
            uVar13 = -lVar11;
            FUN_140d2f990(*puVar4,uVar12 & ~uVar13,*puVar9,*puVar4,uVar2);
            FUN_140d30d80(*puVar9,*puVar3,*puVar4,uVar2);
            FUN_140d2f990(*puVar3,uVar12 & uVar13,*puVar9,*puVar3,uVar2);
            lVar11 = FUN_140d30b50(*puVar9,*puVar5,*puVar7,uVar2);
            lVar14 = FUN_140d30d80(*puVar10,*puVar9,*param_4,uVar2);
            FUN_140d2f990(*puVar9,lVar11 - lVar14,*puVar9,*puVar10,uVar2);
            FUN_140d2f990(*puVar5,uVar12 & uVar13,*puVar9,*puVar5,uVar2);
            FUN_140d2f990(*puVar7,uVar12 & ~uVar13,*puVar9,*puVar7,uVar2);
            FUN_140d30b50(*puVar9,*puVar6,*puVar8,local_e8);
            FUN_140d30d80(*puVar10,*puVar9,*param_3,local_e8);
            FUN_140d2f990(*puVar9,lVar11 - lVar14,*puVar9,*puVar10,local_e8);
            FUN_140d2f990(*puVar6,uVar12 & uVar13,*puVar9,*puVar6,local_e8);
            FUN_140d2f990(*puVar8,uVar12 & ~uVar13,*puVar9,*puVar8,local_e8);
            uVar13 = FUN_140d42320(*(undefined8 *)*puVar3);
            uVar13 = ~uVar13;
            uVar12 = FUN_140d42320(*(undefined8 *)*puVar4);
            uVar12 = ~uVar12;
            if (uVar13 == uVar12) {
              FID_conflict__assert((wchar_t *)s_u_1413c9e70,(wchar_t *)s_D_1413c9d90,0x124);
            }
            FUN_140d42340(*puVar3,uVar13,*puVar9,uVar2);
            uVar15 = FUN_140d42320(*(undefined8 *)*puVar5);
            uVar16 = FUN_140d42320(*(undefined8 *)*puVar6);
            uVar17 = FUN_140d42430(*puVar5,(uVar15 | uVar16) & uVar13,*param_4,*puVar9,uVar2);
            uVar18 = FUN_140d42430(*puVar6,(uVar15 | uVar16) & uVar13,*param_3,*puVar9,local_e8);
            FUN_140d423a0(*puVar5,uVar17,uVar13,*puVar9,uVar2);
            FUN_140d423a0(*puVar6,uVar18,uVar13,*puVar9,local_e8);
            FUN_140d42340(*puVar4,uVar12,*puVar9,uVar2);
            uVar13 = FUN_140d42320(*(undefined8 *)*puVar7);
            uVar15 = FUN_140d42320(*(undefined8 *)*puVar8);
            uVar17 = FUN_140d42430(*puVar7,(uVar13 | uVar15) & uVar12,*param_4,*puVar9,uVar2);
            uVar18 = FUN_140d42430(*puVar8,(uVar13 | uVar15) & uVar12,*param_3,*puVar9,local_e8);
            FUN_140d423a0(*puVar7,uVar17,uVar12,*puVar9,uVar2);
            in_stack_fffffffffffffef8 = local_e8;
            FUN_140d423a0(*puVar8,uVar18,uVar12,*puVar9,local_e8);
          }
          iVar1 = FUN_140d29a20(puVar4);
          if (iVar1 == 0) {
            FID_conflict__assert((wchar_t *)s_B_1413c9f80,(wchar_t *)s_D_1413c9ea0,0x13c);
          }
          iVar1 = FUN_140d29a40(puVar3);
          if (iVar1 == 0) {
            *param_2 = 1;
            FUN_140d186f0(3,0,0x70,s_D__a_1_s_target_release_build_bo_1413c9fa0,
                          CONCAT44(uVar21,0x13f));
          }
          else {
            lVar11 = FUN_140d27750(param_1,puVar5);
            bVar20 = lVar11 != 0;
          }
        }
      }
      FUN_140d281e0(param_5);
      return bVar20;
    }
  }
  FUN_140d186f0(3,0,0x6b,s_D__a_1_s_target_release_build_bo_1413c9bd0,CONCAT44(uVar21,0xae));
  return false;
}


/* address=140d3f240 name=FUN_140d3f240 */

undefined4
FUN_140d3f240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_18;
  
  FUN_140d28030(param_4);
  lVar2 = FUN_140d28090(param_4);
  if (lVar2 != 0) {
    lVar3 = FUN_140d27750(lVar2,param_3);
    if (lVar3 != 0) {
      iVar1 = FUN_140d286a0(lVar2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_140d2dba0(param_1,param_2,lVar2,param_3,param_4,param_5);
        if (iVar1 != 0) {
          local_18 = 1;
          goto LAB_140d3f2e3;
        }
      }
    }
  }
  local_18 = 0;
LAB_140d3f2e3:
  FUN_140d281e0(param_4);
  return local_18;
}


/* address=140d3f310 name=FUN_140d3f310 */

undefined4
FUN_140d3f310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_18;
  
  FUN_140d28030(param_4);
  lVar2 = FUN_140d28090(param_4);
  if (lVar2 != 0) {
    lVar3 = FUN_140d27750(lVar2,param_3);
    if (lVar3 != 0) {
      iVar1 = FUN_140d286a0(lVar2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_140d2e1d0(param_1,param_2,lVar2,param_3,param_4,param_5);
        if (iVar1 != 0) {
          local_18 = 1;
          goto LAB_140d3f3b3;
        }
      }
    }
  }
  local_18 = 0;
LAB_140d3f3b3:
  FUN_140d281e0(param_4);
  return local_18;
}


/* address=140d3f3e0 name=FUN_140d3f3e0 */

bool FUN_140d3f3e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  
  FUN_140d893e0(param_2);
  lVar1 = *param_1;
  FUN_140d89420(param_2);
  if (lVar1 == 0) {
    FUN_140d89400(param_2);
    if (*param_1 == 0) {
      lVar1 = FUN_140d2d450(param_3,param_4);
      *param_1 = lVar1;
    }
    bVar2 = *param_1 != 0;
    FUN_140d89440(param_2);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


/* address=140d3f4a0 name=FUN_140d3f4a0 */

void FUN_140d3f4a0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  if (param_2 != param_4 + param_6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((param_4 == 8) && (param_6 == 8)) {
    FUN_140d322c0(param_1,param_3,param_5);
  }
  else {
    FUN_140d432e0(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}


/* address=140d3f530 name=FUN_140d3f530 */

void FUN_140d3f530(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined auStack_c8 [32];
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_c8;
  if ((param_2 == param_4 * 2) && (param_4 < 10)) {
    if (param_4 == 4) {
      FUN_140d3ad00(param_1,param_3);
    }
    else if (param_4 == 8) {
      FUN_140d36f00(param_1,param_3);
    }
    else {
      FUN_140d44eb0(param_1,param_3,param_4,local_a8);
      FUN_140d76450(local_a8,param_4 << 4);
    }
    FUN_140e28050(local_18 ^ (ulonglong)auStack_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=140d3f630 name=FUN_140d3f630 */

void FUN_140d3f630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_140d3f7a0(param_1,param_2,*param_4,param_3,param_4);
  return;
}


/* address=140d3f680 name=FUN_140d3f680 */

void FUN_140d3f680(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined auStack_d8 [32];
  longlong local_b8;
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_d8;
  if (((param_2 != (longlong)*(int *)(param_5 + 0x20)) || (9 < param_2)) || (param_2 * 2 < param_4))
  {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar3 = local_a8;
  for (lVar2 = 0x90; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_140d1d890(local_a8,param_3,param_4 << 3);
  local_b8 = param_5;
  iVar1 = FUN_140d42cf0(param_1,param_2,local_a8,param_2 << 1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_140d76450(local_a8,param_2 << 4);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140d3f7a0 name=FUN_140d3f7a0 */

void FUN_140d3f7a0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  undefined auStack_d8 [32];
  longlong local_b8;
  ulonglong local_b0;
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_d8;
  if ((param_4 != (longlong)*(int *)(param_5 + 0x20)) || (9 < param_4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_4 < 2) {
    if (param_2 == param_3) {
      FUN_140d3f530(local_a8,param_4 << 1,param_2,param_4);
    }
    else {
      local_b8 = param_3;
      local_b0 = param_4;
      FUN_140d3f4a0(local_a8,param_4 << 1,param_2,param_4);
    }
    local_b8 = param_5;
    iVar1 = FUN_140d42cf0(param_1,param_4,local_a8,param_4 << 1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_140d76450(local_a8,param_4 << 4);
  }
  else {
    local_b8 = param_5 + 0x30;
    local_b0 = param_4;
    iVar1 = FUN_140ca7740(param_1,param_2,param_3,*(undefined8 *)(param_5 + 0x18));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140d3f950 name=FUN_140d3f950 */

void FUN_140d3f950(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5,undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined auStack_558 [32];
  undefined8 *local_538;
  uint local_528;
  uint local_524;
  uint local_520;
  uint local_51c;
  uint local_518;
  int local_514;
  ulonglong local_510;
  uint local_508;
  undefined4 local_504;
  undefined4 local_500;
  longlong local_4f8;
  undefined local_4e8 [80];
  undefined local_498 [1152];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_558;
  if (((param_3 != (longlong)*(int *)(param_6 + 4)) || (9 < param_3)) ||
     (0x3ffffffffffffff < param_5)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = FUN_140d29af0(param_6 + 3);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_B_1413c8678,(wchar_t *)s_D_1413c8590,0x2da);
  }
  for (; (param_5 != 0 && (*(longlong *)(param_4 + -8 + param_5 * 8) == 0)); param_5 = param_5 - 1)
  {
  }
  if (param_5 == 0) {
    local_538 = param_6;
    FUN_140d3f680(param_1,param_3,*param_6,param_3);
  }
  else {
    uVar2 = FUN_140d2f3c0(*(undefined8 *)(param_4 + -8 + param_5 * 8));
    local_4f8 = (ulonglong)uVar2 + (param_5 - 1) * 0x40;
    if (local_4f8 == 0) {
      FID_conflict__assert((wchar_t *)s_b_1413c8788,(wchar_t *)s_D_1413c86a0,0x2e6);
    }
    local_520 = FUN_140d41c00(local_4f8);
    if (5 < local_520) {
      local_520 = 5;
    }
    FUN_140d1d890(local_498,param_2,param_3 << 3);
    if (1 < local_520) {
      local_538 = param_6;
      FUN_140d3f7a0(local_4e8,local_498,local_498,param_3);
      for (local_51c = 1; local_504 = 1, local_51c < (uint)(1 << ((char)local_520 - 1U & 0x1f));
          local_51c = local_51c + 1) {
        local_538 = param_6;
        FUN_140d3f7a0(local_498 + (ulonglong)local_51c * 0x48,
                      local_498 + (ulonglong)(local_51c - 1) * 0x48,local_4e8,param_3);
      }
    }
    local_514 = 1;
    local_510 = local_4f8 - 1;
    while( true ) {
      while (iVar1 = FUN_140d3c6d0(param_4,param_5,local_510), iVar1 != 0) {
        local_528 = 1;
        local_518 = 0;
        for (local_524 = 1; (local_524 < local_520 && (local_524 <= local_510));
            local_524 = local_524 + 1) {
          iVar1 = FUN_140d3c6d0(param_4,param_5,local_510 - local_524);
          if (iVar1 != 0) {
            local_528 = local_528 << ((char)local_524 - (char)local_518 & 0x1fU) | 1;
            local_518 = local_524;
          }
        }
        if (local_514 == 0) {
          for (local_508 = 0; local_508 < local_518 + 1; local_508 = local_508 + 1) {
            local_538 = param_6;
            FUN_140d3f7a0(param_1,param_1,param_1,param_3);
          }
        }
        if ((local_528 & 1) == 0) {
          FID_conflict__assert((wchar_t *)s_w_1413c8888,(wchar_t *)s_D_1413c87a0,0x31c);
        }
        local_500 = 1;
        if ((uint)(1 << ((byte)local_520 & 0x1f)) <= local_528) {
          FID_conflict__assert((wchar_t *)s_w_1413c8988,(wchar_t *)s_D_1413c88a0,0x31d);
        }
        if (local_514 == 0) {
          local_538 = param_6;
          FUN_140d3f7a0(param_1,param_1,local_498 + (ulonglong)(local_528 >> 1) * 0x48,param_3);
        }
        else {
          FUN_140d1d890(param_1,local_498 + (ulonglong)(local_528 >> 1) * 0x48,param_3 << 3);
        }
        local_514 = 0;
        if (local_510 == local_518) goto LAB_140d3fe5c;
        local_510 = local_510 - (local_518 + 1);
      }
      if (local_514 == 0) {
        local_538 = param_6;
        FUN_140d3f7a0(param_1,param_1,param_1,param_3);
      }
      if (local_510 == 0) break;
      local_510 = local_510 - 1;
    }
LAB_140d3fe5c:
    if (local_514 != 0) {
      FID_conflict__assert((wchar_t *)s___1413c8aa8,(wchar_t *)s_D_1413c89c0,0x32b);
    }
    FUN_140d76450(local_498,0x480);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_558);
  return;
}


/* address=140d3feb0 name=FUN_140d3feb0 */

void FUN_140d3feb0(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  undefined auStack_b8 [32];
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_68 [10];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_b8;
  if ((param_3 != (longlong)*(int *)(param_4 + 0x20)) || (9 < param_3)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_80 = *(undefined8 *)(param_4 + 0x18);
  FUN_140d1d890(local_68,local_80,param_3 << 3);
  if (local_68[0] < 2) {
    for (local_88 = 1; local_88 < param_3; local_88 = local_88 + 1) {
      local_78 = local_68[local_88];
      local_68[local_88] = local_68[local_88] - 1;
      if (local_78 != 0) break;
    }
  }
  local_68[0] = local_68[0] - 2;
  local_98 = param_3;
  local_90 = param_4;
  FUN_140d3f950(param_1,param_2,param_3,local_68);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140d40040 name=FUN_140d40040 */

ulonglong FUN_140d40040(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong local_res20;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_28 = 0;
  local_res20 = param_4;
  while( true ) {
    if (param_2 <= local_28) goto LAB_140d40168;
    if (local_res20 < 8) break;
    local_res20 = local_res20 - 8;
    uVar1 = FUN_140d1db90(param_3 + local_res20);
    *(undefined8 *)(param_1 + local_28 * 8) = uVar1;
    local_28 = local_28 + 1;
  }
  local_18 = 0;
  for (local_20 = 0; local_20 < local_res20; local_20 = local_20 + 1) {
    local_18 = local_18 << 8 | (ulonglong)*(byte *)(param_3 + local_20);
  }
  local_res20 = 0;
  *(ulonglong *)(param_1 + local_28 * 8) = local_18;
  param_2 = FUN_140d1d930(param_1 + 8 + local_28 * 8,0,(param_2 - local_28) * 8 + -8);
LAB_140d40168:
  if (local_res20 != 0) {
    FID_conflict__assert((wchar_t *)s_i_1413c6e78,(wchar_t *)s_D_1413c6da0,0x55);
    param_2 = 0;
  }
  return param_2;
}


/* address=140d401a0 name=FUN_140d401a0 */

void FUN_140d401a0(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  ulonglong local_28;
  ulonglong local_20;
  
  iVar1 = FUN_140d40330(param_3,param_4,param_2);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_f_1413c7180,(wchar_t *)s_D_1413c70a0,0xb4);
  }
  local_20 = param_4 << 3;
  if (param_2 < local_20) {
    local_20 = param_2;
  }
  for (local_28 = 0; local_28 < local_20; local_28 = local_28 + 1) {
    *(undefined *)(param_1 + -1 + (param_2 - local_28)) = *(undefined *)(param_3 + local_28);
  }
  FUN_140d1d930(param_1,0,param_2 - local_20);
  return;
}


/* address=140d402a0 name=FUN_140d402a0 */

undefined * FUN_140d402a0(void)

{
  return &DAT_14140f9f0;
}


/* address=140d402b0 name=FUN_140d402b0 */

undefined * FUN_140d402b0(void)

{
  return &DAT_14140fa08;
}


/* address=140d402c0 name=FUN_140d402c0 */

void FUN_140d402c0(undefined8 *param_1)

{
  *param_1 = &DAT_141073028;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  return;
}


/* address=140d40330 name=FUN_140d40330 */

bool FUN_140d40330(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte local_28;
  ulonglong local_20;
  
  local_28 = 0;
  for (local_20 = param_3; local_20 < (ulonglong)(param_2 << 3); local_20 = local_20 + 1) {
    local_28 = local_28 | *(byte *)(param_1 + local_20);
  }
  return local_28 == 0;
}


/* address=140d403d0 name=FUN_140d403d0 */

undefined4 FUN_140d403d0(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_58 = 0;
  local_28 = param_4;
  if (param_2 < param_4) {
    local_28 = param_2;
  }
  for (local_50 = 0; local_50 < local_28; local_50 = local_50 + 1) {
    uVar2 = FUN_140d1d6b0(*(undefined8 *)(param_1 + local_50 * 8),
                          *(undefined8 *)(param_3 + local_50 * 8));
    uVar3 = FUN_140d1d5c0(*(undefined8 *)(param_1 + local_50 * 8),
                          *(undefined8 *)(param_3 + local_50 * 8));
    uVar1 = FUN_140d1d770(uVar3,0xffffffff,1);
    local_58 = FUN_140d1d770(uVar2,local_58,uVar1);
  }
  if (param_2 < param_4) {
    local_38 = 0;
    for (local_48 = param_2; local_48 < param_4; local_48 = local_48 + 1) {
      local_38 = local_38 | *(ulonglong *)(param_3 + local_48 * 8);
    }
    uVar2 = FUN_140d1d680(local_38);
    local_58 = FUN_140d1d770(uVar2,local_58,0xffffffff);
  }
  else if (param_4 < param_2) {
    local_30 = 0;
    for (local_40 = param_4; local_40 < param_2; local_40 = local_40 + 1) {
      local_30 = local_30 | *(ulonglong *)(param_1 + local_40 * 8);
    }
    uVar2 = FUN_140d1d680(local_30);
    local_58 = FUN_140d1d770(uVar2,local_58,1);
  }
  return local_58;
}


/* address=140d40600 name=FUN_140d40600 */

void FUN_140d40600(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


/* address=140d40640 name=FUN_140d40640 */

void FUN_140d40640(undefined8 *param_1)

{
  FUN_140d762b0(*param_1);
  return;
}


/* address=140d40670 name=FUN_140d40670 */

undefined8 FUN_140d40670(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong local_20;
  
  if (param_1[1] == param_1[2]) {
    if (param_1[2] == 0) {
      local_20 = 0x20;
    }
    else {
      local_20 = (ulonglong)(param_1[2] * 3) / 2;
    }
    if ((local_20 <= (ulonglong)param_1[2]) || (0x1fffffffffffffff < local_20)) {
      return 0;
    }
    lVar1 = FUN_140d76360(*param_1,local_20 << 3);
    if (lVar1 == 0) {
      return 0;
    }
    *param_1 = lVar1;
    param_1[2] = local_20;
  }
  *(undefined8 *)(*param_1 + param_1[1] * 8) = param_2;
  param_1[1] = param_1[1] + 1;
  return 1;
}


/* address=140d40780 name=FUN_140d40780 */

undefined8 FUN_140d40780(longlong *param_1)

{
  if (param_1[1] == 0) {
    FID_conflict__assert((wchar_t *)s_s_1413c7490,(wchar_t *)s_D_1413c73c0,0xe7);
  }
  param_1[1] = param_1[1] + -1;
  return *(undefined8 *)(*param_1 + param_1[1] * 8);
}


/* address=140d40820 name=FUN_140d40820 */

void FUN_140d40820(void)

{
  FUN_140d19610();
  return;
}


/* address=140d40840 name=FUN_140d40840 */

void FUN_140d40840(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140d40860 name=FUN_140d40860 */

void FUN_140d40860(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140d40890 name=FUN_140d40890 */

void FUN_140d40890(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140d407f0,param_2);
  return;
}


/* address=140d408c0 name=FUN_140d408c0 */

void FUN_140d408c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140d408f0 name=FUN_140d408f0 */

ulonglong FUN_140d408f0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  int local_38;
  ulonglong local_20;
  
  local_20 = 0;
  local_38 = 2;
  if (param_3 == 0) {
    local_20 = 0xffffffffffffffff;
  }
  else {
    iVar1 = FUN_140d2f3c0(param_3);
    if ((iVar1 != 0x40) && ((ulonglong)(1L << ((byte)iVar1 & 0x3f)) < param_1)) {
      FID_conflict__assert((wchar_t *)s___1413c7580,(wchar_t *)s_D_1413c74b0,0x4f);
    }
    local_res8 = param_1;
    if (param_3 <= param_1) {
      local_res8 = param_1 - param_3;
    }
    local_res10 = param_2;
    local_res18 = param_3;
    if (0x40 - iVar1 != 0) {
      bVar3 = (byte)(0x40 - iVar1);
      local_res18 = param_3 << (bVar3 & 0x3f);
      local_res8 = local_res8 << (bVar3 & 0x3f) | param_2 >> (0x40 - bVar3 & 0x3f);
      local_res10 = param_2 << (bVar3 & 0x3f);
    }
    uVar2 = local_res18 >> 0x20;
    while( true ) {
      if (local_res8 >> 0x20 == uVar2) {
        local_48 = 0xffffffff;
      }
      else {
        local_48 = local_res8 / uVar2;
      }
      local_40 = (local_res18 & 0xffffffff) * local_48;
      for (local_50 = local_48 * uVar2;
          ((local_res8 - local_50 & 0xffffffff00000000) == 0 &&
          ((local_res8 - local_50 << 0x20 | local_res10 >> 0x20) < local_40));
          local_50 = local_50 - uVar2) {
        local_48 = local_48 - 1;
        local_40 = local_40 - (local_res18 & 0xffffffff);
      }
      local_50 = local_50 + (local_40 >> 0x20);
      if (local_res10 < local_40 << 0x20) {
        local_50 = local_50 + 1;
      }
      if (local_res8 < local_50) {
        local_res8 = local_res8 + local_res18;
        local_48 = local_48 - 1;
      }
      local_38 = local_38 + -1;
      if (local_38 == 0) break;
      local_20 = local_48 << 0x20;
      local_res8 = local_res8 - local_50 << 0x20 | local_res10 - (local_40 << 0x20) >> 0x20;
      local_res10 = local_res10 << 0x20;
    }
    local_20 = local_20 | local_48;
  }
  return local_20;
}


/* address=140d40cc0 name=FUN_140d40cc0 */

void FUN_140d40cc0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_140d408f0(param_3,param_4,param_5);
  *param_1 = lVar1;
  *param_2 = param_4 - *param_1 * param_5;
  return;
}


/* address=140d40d20 name=FUN_140d40d20 */

longlong FUN_140d40d20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8;
  
  lVar2 = FUN_140d28090(param_2);
  if ((lVar2 != 0) && (iVar1 = FUN_140d2f730(lVar2,param_1), iVar1 != 0)) {
    *(undefined4 *)(lVar2 + 0x10) = 0;
    local_res8 = (undefined4)param_1;
    *(undefined4 *)(lVar2 + 8) = local_res8;
    return lVar2;
  }
  return 0;
}


/* address=140d40d90 name=FUN_140d40d90 */

longlong FUN_140d40d90(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((ulonglong)(longlong)*(int *)(param_1 + 8) < param_2) {
    lVar2 = FUN_140d40d20(param_2,param_3);
    if (((lVar2 == 0) || (lVar3 = FUN_140d27750(lVar2,param_1), lVar3 == 0)) ||
       (iVar1 = FUN_140d2f8b0(lVar2,param_2), param_1 = lVar2, iVar1 == 0)) {
      param_1 = 0;
    }
  }
  else {
    iVar1 = FUN_140d2fb30(param_1,param_2);
    if (iVar1 == 0) {
      FID_conflict__assert((wchar_t *)s_b_1413c7cc0,(wchar_t *)s_D_1413c7bf0,0x238);
    }
  }
  return param_1;
}


/* address=140d40e40 name=FUN_140d40e40 */

undefined2 FUN_140d40e40(uint param_1,ushort param_2,char param_3,uint param_4)

{
  int iVar1;
  undefined2 local_res8;
  
  iVar1 = (int)((ulonglong)param_4 * (ulonglong)param_1 >> 0x20);
  param_1 = param_1 - (uint)param_2 * ((param_1 - iVar1 >> 1) + iVar1 >> (param_3 - 1U & 0x1f));
  if (param_2 <= param_1) {
    FID_conflict__assert((wchar_t *)s_n_1413c7de0,(wchar_t *)s_D_1413c7d00,0x2a);
  }
  local_res8 = (undefined2)param_1;
  return local_res8;
}


/* address=140d40ee0 name=FUN_140d40ee0 */

undefined2
FUN_140d40ee0(ushort param_1,uint param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_140d40e40((uint)param_1 << 0x10 | param_2 >> 0x10,param_3,param_4,param_5);
  uVar2 = FUN_140d40e40((uint)uVar1 << 0x10 | param_2 & 0xffff,param_3,param_4,param_5);
  return uVar2;
}


/* address=140d40f90 name=FUN_140d40f90 */

void FUN_140d40f90(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  byte bVar1;
  undefined auStack_118 [32];
  undefined8 local_f8;
  ulonglong local_e8;
  ulonglong local_e0;
  uint local_d8;
  int local_d4;
  longlong local_d0;
  int local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  ushort local_a8 [4];
  byte *local_a0;
  undefined local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_118;
  if (param_7 % 0x40 != 0) {
    FID_conflict__assert((wchar_t *)s___1413cca78,(wchar_t *)s_D_1413cc9a0,0x2d);
  }
  local_d0 = param_7 + 0x3c0;
  if ((param_7 & 0xfff) + 0x140 >> 0xc == 0) {
    local_e0 = param_7;
    local_e8 = param_7 + 0x140;
    local_c0 = param_7 + 0x280;
  }
  else {
    local_e8 = param_7;
    local_c0 = param_7 + 0x140;
    local_e0 = param_7 + 0x280;
  }
  local_b0 = local_d0;
  FUN_140cad720(local_e0,param_4);
  FUN_140cad720(local_c0,param_2);
  FUN_140cad720(local_b0,param_5);
  local_f8 = param_6;
  FUN_140caca80(local_b0,local_b0,local_b0,local_e0);
  local_f8 = param_6;
  FUN_140caca80(local_b0,local_b0,&DAT_14104d0c0,local_e0);
  local_f8 = param_6;
  FUN_140caca80(local_e8,local_b0,&DAT_14104cf80,local_e0);
  local_f8 = param_6;
  FUN_140caca80(local_c0,local_c0,local_b0,local_e0);
  FUN_140cad980(local_d0,local_e8,0);
  FUN_140cad980(local_d0,local_c0,1);
  local_f8._0_4_ = 1;
  FUN_140cabe00(local_e8,local_c0,local_e0,param_6);
  FUN_140cad980(local_d0,local_e8,2);
  local_f8._0_4_ = 1;
  FUN_140cabe00(local_e8,local_e8,local_e0,param_6);
  FUN_140cad980(local_d0,local_e8,4);
  local_f8._0_4_ = 1;
  FUN_140cabe00(local_e8,local_e8,local_e0,param_6);
  FUN_140cad980(local_d0,local_e8,8);
  local_f8 = CONCAT44(local_f8._4_4_,1);
  FUN_140cabe00(local_e8,local_e8,local_e0,param_6);
  FUN_140cad980(local_d0,local_e8,0x10);
  for (local_d4 = 3; local_d4 < 0x20; local_d4 = local_d4 + 2) {
    FUN_140cad9e0(local_e8,local_d0,local_d4 + -1);
    local_f8 = param_6;
    FUN_140caca80(local_e8,local_e8,local_c0,local_e0);
    FUN_140cad980(local_d0,local_e8,local_d4);
    local_b8 = local_d4;
    while (local_b8 = local_b8 << 1, local_b8 < 0x20) {
      local_f8 = CONCAT44(local_f8._4_4_,1);
      FUN_140cabe00(local_e8,local_e8,local_e0,param_6);
      FUN_140cad980(local_d0,local_e8,local_b8);
    }
  }
  local_d8 = (int)(uint)param_3[0x7f] >> 3;
  local_a0 = param_3;
  FUN_140cad9e0(local_e8,local_d0,local_d8);
  local_c8 = 0x3f6;
  while (-1 < local_c8) {
    local_f8 = CONCAT44(local_f8._4_4_,5);
    FUN_140cabe00(local_e8,local_e8,local_e0,param_6);
    FUN_140e99d20(local_a8,local_a0 + ((int)(local_c8 + (local_c8 >> 0x1f & 7U)) >> 3),2);
    bVar1 = (byte)(local_c8 >> 0x1f) & 7;
    local_d8 = (int)(uint)local_a8[0] >> (((char)local_c8 + bVar1 & 7) - bVar1 & 0x1f) & 0x1f;
    local_c8 = local_c8 + -5;
    FUN_140cad9e0(local_c0,local_d0,local_d8);
    local_f8 = param_6;
    FUN_140caca80(local_e8,local_e8,local_c0,local_e0);
  }
  local_f8 = CONCAT44(local_f8._4_4_,4);
  FUN_140cabe00(local_e8,local_e8,local_e0,param_6);
  local_d8 = *local_a0 & 0xf;
  FUN_140cad9e0(local_c0,local_d0,local_d8);
  local_f8 = param_6;
  FUN_140caca80(local_e8,local_e8,local_c0,local_e0);
  local_f8 = param_6;
  FUN_140caca80(local_e8,local_e8,&DAT_14104cf80,local_e0);
  FUN_140cad460(param_1,local_e8);
  local_f8 = 0x10;
  FUN_140d3d2a0(param_1,0,param_4,local_98);
  FUN_140d76450(param_7,0x15c0);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=140d41560 name=FUN_140d41560 */

undefined8 FUN_140d41560(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d1de50();
  if (((iVar1 != 0) && (iVar1 = FUN_140d1ded0(), iVar1 != 0)) &&
     (iVar1 = FUN_140d1df10(), iVar1 != 0)) {
    return 0;
  }
  uVar2 = FUN_140d1de90();
  return uVar2;
}


/* address=140d415a0 name=FUN_140d415a0 */

void FUN_140d415a0(longlong param_1)

{
  FUN_140d27630(param_1);
  FUN_140d27630(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


/* address=140d41600 name=FUN_140d41600 */

void FUN_140d41600(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140d27660(param_1);
    FUN_140d27660(param_1 + 0x18);
  }
  return;
}


/* address=140d41640 name=FUN_140d41640 */

bool FUN_140d41640(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140d27750(param_1,param_2);
  if (lVar2 != 0) {
    FUN_140d27910(param_1 + 0x18);
    uVar1 = FUN_140d27880(param_2);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return lVar2 != 0;
}


/* address=140d416b0 name=FUN_140d416b0 */

undefined4
FUN_140d416b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_18;
  
  local_18 = 0xffffffff;
  FUN_140d28030(param_4);
  lVar3 = FUN_140d28090(param_4);
  uVar1 = local_18;
  if (((lVar3 != 0) && (iVar2 = FUN_140d2a0e0(lVar3,param_3), iVar2 != 0)) &&
     (iVar2 = FUN_140d28a10(param_1,0,lVar3,param_2,param_4), uVar1 = param_3, iVar2 == 0)) {
    uVar1 = local_18;
  }
  local_18 = uVar1;
  FUN_140d281e0(param_4);
  return local_18;
}


/* address=140d41750 name=FUN_140d41750 */

undefined4
FUN_140d41750(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
             )

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int local_48;
  int local_44;
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = 0;
  FUN_140d28030(param_5);
  lVar3 = FUN_140d28090(param_5);
  lVar4 = FUN_140d28090(param_5);
  local_38 = param_1;
  if (param_1 == 0) {
    local_38 = FUN_140d28090(param_5);
  }
  local_40 = param_2;
  if (param_2 == 0) {
    local_40 = FUN_140d28090(param_5);
  }
  if ((((lVar3 != 0) && (lVar4 != 0)) && (local_38 != 0)) && (local_40 != 0)) {
    iVar1 = FUN_140d29780(param_3,param_4);
    if (iVar1 < 0) {
      FUN_140d27910(local_38);
      lVar3 = FUN_140d27750(local_40,param_3);
      if (lVar3 != 0) {
        FUN_140d281e0(param_5);
        return 1;
      }
    }
    else {
      local_44 = FUN_140d27880(param_3);
      iVar1 = *(int *)(param_4 + 0x30) << 1;
      if (local_44 < iVar1) {
        local_44 = iVar1;
      }
      if (local_44 != *(int *)(param_4 + 0x34)) {
        uVar2 = FUN_140d416b0(param_4 + 0x18,param_4,local_44,param_5);
        *(undefined4 *)(param_4 + 0x34) = uVar2;
      }
      if (((*(int *)(param_4 + 0x34) != -1) &&
          (iVar1 = FUN_140d29f90(lVar3,param_3,*(undefined4 *)(param_4 + 0x30)), iVar1 != 0)) &&
         ((iVar1 = FUN_140d28890(lVar4,lVar3,param_4 + 0x18,param_5), iVar1 != 0 &&
          (iVar1 = FUN_140d29f90(local_38,lVar4,local_44 - *(int *)(param_4 + 0x30)), iVar1 != 0))))
      {
        *(undefined4 *)(local_38 + 0x10) = 0;
        iVar1 = FUN_140d28890(lVar4,param_4,local_38,param_5);
        if ((iVar1 != 0) && (iVar1 = FUN_140d28650(local_40,param_3,lVar4), iVar1 != 0)) {
          *(undefined4 *)(local_40 + 0x10) = 0;
          local_48 = 0;
          while (iVar1 = FUN_140d29780(local_40,param_4), -1 < iVar1) {
            if (2 < local_48) {
              FUN_140d186f0(3,0,0x65,s_D__a_1_s_target_release_build_bo_1413c7ee0,0x143);
              goto LAB_140d41ae0;
            }
            iVar1 = FUN_140d28650(local_40,local_40,param_4);
            if ((iVar1 == 0) ||
               (iVar1 = FUN_140d28370(local_38,1), local_48 = local_48 + 1, iVar1 == 0))
            goto LAB_140d41ae0;
          }
          iVar1 = FUN_140d29a20(local_40);
          if (iVar1 == 0) {
            local_30 = *(undefined4 *)(param_3 + 0x10);
          }
          else {
            local_30 = 0;
          }
          *(undefined4 *)(local_40 + 0x10) = local_30;
          *(uint *)(local_38 + 0x10) = *(uint *)(param_3 + 0x10) ^ *(uint *)(param_4 + 0x10);
          local_2c = 1;
        }
      }
    }
  }
LAB_140d41ae0:
  FUN_140d281e0(param_5);
  return local_2c;
}


/* address=140d41b00 name=FUN_140d41b00 */

undefined4
FUN_140d41b00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  longlong local_18;
  
  local_28 = 0;
  FUN_140d28030(param_5);
  lVar2 = FUN_140d28090(param_5);
  if (lVar2 != 0) {
    local_18 = param_2;
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = FUN_140d289c0(lVar2,param_2,param_5);
      }
      else {
        iVar1 = FUN_140d28890(lVar2,param_2,param_3,param_5);
      }
      local_18 = lVar2;
      if (iVar1 == 0) goto LAB_140d41bde;
    }
    local_28 = FUN_140d41750(0,param_1,local_18,param_4,param_5);
  }
LAB_140d41bde:
  FUN_140d281e0(param_5);
  return local_28;
}


/* address=140d41c00 name=FUN_140d41c00 */

undefined8 FUN_140d41c00(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x2a0) {
    if (param_1 < 0xf0) {
      if (param_1 < 0x50) {
        if (param_1 < 0x18) {
          uVar1 = 1;
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 4;
      }
    }
    else {
      uVar1 = 5;
    }
  }
  else {
    uVar1 = 6;
  }
  return uVar1;
}


/* address=140d41c60 name=FUN_140d41c60 */

void FUN_140d41c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined auStack_1c8 [32];
  undefined8 local_1a8;
  int local_198;
  int local_194;
  uint local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  undefined4 local_178;
  longlong local_170;
  undefined4 local_168;
  longlong local_160;
  undefined local_158 [64];
  longlong alStack_118 [32];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_1c8;
  local_178 = 0;
  local_188 = 1;
  iVar1 = FUN_140d29af0(param_4);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___1413c8048,(wchar_t *)s_D_1413c7f60,0x1b8);
  }
  local_184 = FUN_140d27880(param_3);
  if (local_184 == 0) {
    FUN_140d27940(param_1);
    goto LAB_140d42160;
  }
  FUN_140d415a0(local_158);
  FUN_140d28030(param_5);
  local_170 = FUN_140d28090(param_5);
  alStack_118[0] = FUN_140d28090(param_5);
  if ((local_170 != 0) && (alStack_118[0] != 0)) {
    if (*(int *)(param_4 + 0x10) == 0) {
      iVar1 = FUN_140d41640(local_158,param_4,param_5);
    }
    else {
      lVar2 = FUN_140d27750(local_170,param_4);
      if (lVar2 == 0) goto LAB_140d42145;
      *(undefined4 *)(local_170 + 0x10) = 0;
      iVar1 = FUN_140d41640(local_158,local_170,param_5);
    }
    if ((0 < iVar1) && (iVar1 = FUN_140d2a920(alStack_118[0],param_2,param_4,param_5), iVar1 != 0))
    {
      iVar1 = FUN_140d29a20(alStack_118[0]);
      if (iVar1 == 0) {
        local_180 = FUN_140d41c00((longlong)local_184);
        if (1 < local_180) {
          local_1a8 = param_5;
          iVar1 = FUN_140d41b00(local_170,alStack_118[0],alStack_118[0],local_158);
          if (iVar1 == 0) goto LAB_140d42145;
          local_168 = 1;
          local_17c = 1 << ((char)local_180 - 1U & 0x1f);
          for (local_198 = 1; local_198 < local_17c; local_198 = local_198 + 1) {
            local_160 = FUN_140d28090(param_5);
            alStack_118[local_198] = local_160;
            if (local_160 == 0) goto LAB_140d42145;
            local_1a8 = param_5;
            iVar1 = FUN_140d41b00(alStack_118[local_198],alStack_118[local_198 + -1],local_170,
                                  local_158);
            if (iVar1 == 0) goto LAB_140d42145;
          }
        }
        local_188 = 1;
        local_194 = local_184 + -1;
        iVar1 = FUN_140d27940(param_1);
        if (iVar1 != 0) {
          do {
            while (iVar1 = FUN_140d2a2b0(param_3,local_194), iVar1 == 0) {
              if (local_188 == 0) {
                local_1a8 = param_5;
                iVar1 = FUN_140d41b00(param_1,param_1,param_1,local_158);
                if (iVar1 == 0) goto LAB_140d42145;
              }
              if (local_194 == 0) goto LAB_140d4213d;
              local_194 = local_194 + -1;
            }
            local_190 = 1;
            local_18c = 0;
            for (local_198 = 1; (local_198 < local_180 && (-1 < local_194 - local_198));
                local_198 = local_198 + 1) {
              iVar1 = FUN_140d2a2b0(param_3,local_194 - local_198);
              if (iVar1 != 0) {
                local_190 = local_190 << ((char)local_198 - (char)local_18c & 0x1fU) | 1;
                local_18c = local_198;
              }
            }
            local_17c = local_18c + 1;
            if (local_188 == 0) {
              for (local_198 = 0; local_198 < local_17c; local_198 = local_198 + 1) {
                local_1a8 = param_5;
                iVar1 = FUN_140d41b00(param_1,param_1,param_1,local_158);
                if (iVar1 == 0) goto LAB_140d42145;
              }
            }
            local_1a8 = param_5;
            iVar1 = FUN_140d41b00(param_1,param_1,alStack_118[(int)local_190 >> 1],local_158);
            if (iVar1 == 0) goto LAB_140d42145;
            local_194 = local_194 - (local_18c + 1);
            local_188 = 0;
          } while (-1 < local_194);
LAB_140d4213d:
          local_178 = 1;
        }
      }
      else {
        FUN_140d27910(param_1);
        local_178 = 1;
      }
    }
  }
LAB_140d42145:
  FUN_140d281e0(param_5);
  FUN_140d41600(local_158);
LAB_140d42160:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=140d42180 name=FUN_140d42180 */

undefined8 FUN_140d42180(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d2fbc0(param_3 + (longlong)(param_4 * param_2) * 8,(longlong)param_2,param_1);
  if ((int)uVar1 == 0) {
    FID_conflict__assert((wchar_t *)&DAT_1413c8ba8,(wchar_t *)s_D_1413c8ac0,0x34a);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d421f0 name=FUN_140d421f0 */

undefined8
FUN_140d421f0(longlong *param_1,int param_2,longlong param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong local_res18;
  int local_28;
  int local_24;
  
  iVar1 = FUN_140d2f730(param_1,(longlong)param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_140d1d930(*param_1,0,(longlong)param_2 << 3);
    local_res18 = param_3;
    for (local_24 = 0; local_24 < 1 << (param_5 & 0x1f); local_24 = local_24 + 1) {
      uVar2 = FUN_140d1d6f0(local_24,param_4);
      uVar3 = FUN_140d1d570(uVar2);
      for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
        *(ulonglong *)(*param_1 + (longlong)local_28 * 8) =
             *(ulonglong *)(*param_1 + (longlong)local_28 * 8) |
             *(ulonglong *)(local_res18 + (longlong)local_28 * 8) & uVar3;
      }
      local_res18 = local_res18 + (longlong)param_2 * 8;
    }
    *(int *)(param_1 + 1) = param_2;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d42320 name=FUN_140d42320 */

longlong FUN_140d42320(ulonglong param_1)

{
  return -(param_1 & 1);
}


/* address=140d42340 name=FUN_140d42340 */

void FUN_140d42340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d3ce30(param_3,param_1,param_4);
  FUN_140d2f990(param_1,param_2,param_3,param_1,param_4);
  return;
}


/* address=140d423a0 name=FUN_140d423a0 */

void FUN_140d423a0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  FUN_140d42340(param_1,param_3,param_4,param_5);
  if (param_5 != 0) {
    *(ulonglong *)(param_1 + -8 + param_5 * 8) =
         *(ulonglong *)(param_1 + -8 + param_5 * 8) | (param_2 & param_3) << 0x3f;
  }
  return;
}


/* address=140d42430 name=FUN_140d42430 */

ulonglong FUN_140d42430(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140d30b50(param_4,param_1,param_3,param_5);
  FUN_140d2f990(param_1,param_2,param_4,param_1,param_5);
  return uVar1 & param_2;
}


/* address=140d424b0 name=FUN_140d424b0 */

undefined4
FUN_140d424b0(undefined8 param_1,int *param_2,longlong param_3,longlong param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar11;
  uint local_58;
  int local_54;
  ulonglong local_50;
  int local_48;
  undefined4 local_3c;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  if (*(int *)(param_4 + 8) < *(int *)(param_3 + 8)) {
    local_48 = *(int *)(param_3 + 8);
  }
  else {
    local_48 = *(int *)(param_4 + 8);
  }
  uVar3 = (ulonglong)local_48;
  if (uVar3 == 0) {
    *param_2 = 0;
    FUN_140d27910(param_1);
    local_3c = 1;
  }
  else {
    local_3c = 0;
    FUN_140d28030(param_5);
    plVar4 = (longlong *)FUN_140d28090(param_5);
    plVar5 = (longlong *)FUN_140d28090(param_5);
    puVar6 = (undefined8 *)FUN_140d28090(param_5);
    if (((((plVar4 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) &&
         (puVar6 != (undefined8 *)0x0)) &&
        ((lVar7 = FUN_140d27750(plVar4,param_3), lVar7 != 0 &&
         (lVar7 = FUN_140d27750(plVar5,param_4), lVar7 != 0)))) &&
       ((iVar1 = FUN_140d2f8b0(plVar4,uVar3), iVar1 != 0 &&
        ((iVar1 = FUN_140d2f8b0(plVar5,uVar3), iVar1 != 0 &&
         (iVar1 = FUN_140d2f8b0(puVar6,uVar3), iVar1 != 0)))))) {
      uVar2 = *(int *)(param_3 + 8) * 0x40;
      uVar10 = uVar2 + *(int *)(param_4 + 8) * 0x40;
      if (uVar10 < uVar2) {
        FUN_140d186f0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413c9930,CONCAT44(uVar11,0x4e));
      }
      else {
        local_54 = 0;
        for (local_58 = 0; local_58 < uVar10; local_58 = local_58 + 1) {
          uVar8 = FUN_140d42320(*(undefined8 *)*plVar4);
          uVar9 = FUN_140d42320(*(undefined8 *)*plVar5);
          lVar7 = FUN_140d30d80(*puVar6,*plVar4,*plVar5,uVar3);
          FUN_140d2f990(*plVar4,uVar8 & uVar9 & ~-lVar7,*puVar6,*plVar4,uVar3);
          FUN_140d30d80(*puVar6,*plVar5,*plVar4,uVar3);
          FUN_140d2f990(*plVar5,uVar8 & uVar9 & -lVar7,*puVar6,*plVar5,uVar3);
          uVar8 = FUN_140d42320(*(undefined8 *)*plVar4);
          uVar9 = FUN_140d42320(*(undefined8 *)*plVar5);
          if ((uVar8 & uVar9) != 0) {
            FID_conflict__assert((wchar_t *)s___1413c9a80,(wchar_t *)s_D_1413c99a0,0x60);
          }
          local_54 = local_54 + (~(uint)uVar8 & ~(uint)uVar9 & 1);
          FUN_140d42340(*plVar4,~uVar8,*puVar6,uVar3);
          FUN_140d42340(*plVar5,~uVar9,*puVar6,uVar3);
        }
        iVar1 = FUN_140d29a20(plVar4);
        if ((iVar1 == 0) && (iVar1 = FUN_140d29a20(plVar5), iVar1 == 0)) {
          FID_conflict__assert((wchar_t *)s_B_1413c9b90,(wchar_t *)s_D_1413c9ab0,0x6d);
        }
        for (local_50 = 0; local_50 < uVar3; local_50 = local_50 + 1) {
          *(ulonglong *)(*plVar5 + local_50 * 8) =
               *(ulonglong *)(*plVar5 + local_50 * 8) | *(ulonglong *)(*plVar4 + local_50 * 8);
        }
        *param_2 = local_54;
        local_3c = FUN_140d2fa10(param_1,*plVar5,uVar3);
      }
    }
    FUN_140d281e0(param_5);
  }
  return local_3c;
}


/* address=140d42990 name=FUN_140d42990 */

ulonglong FUN_140d42990(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint local_28;
  ulonglong local_20;
  
  if ((param_3 != 0) && (param_3 != 1)) {
    FID_conflict__assert((wchar_t *)s_c_1413ca0e8,(wchar_t *)s_D_1413ca010,0x23e);
  }
  uVar1 = param_1 + param_3;
  local_28 = (uint)(uVar1 < param_3);
  local_20 = (ulonglong)(uVar1 + param_2 < uVar1);
  *param_4 = (longlong)(int)local_28 + local_20;
  return uVar1 + param_2;
}


/* address=140d42a80 name=FUN_140d42a80 */

longlong FUN_140d42a80(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong *param_4)

{
  ulonglong local_28;
  ulonglong local_20;
  
  if ((param_3 != 0) && (param_3 != 1)) {
    FID_conflict__assert((wchar_t *)s_b_1413ca1f8,(wchar_t *)s_D_1413ca120,0x253);
  }
  local_20 = (ulonglong)(param_1 < param_2);
  local_28 = (ulonglong)(param_1 == param_2);
  *param_4 = local_20 | local_28 & param_3;
  return (param_1 - param_2) - param_3;
}


/* address=140d42b50 name=FUN_140d42b50 */

undefined8 FUN_140d42b50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_140d29a20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_140d29af0(param_2);
    if (iVar1 == 0) {
      FUN_140d186f0(3,0,0x68,s_D__a_1_s_target_release_build_bo_1413ca380,0xa8);
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_140d27a70(param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_140d2fb30(param_2,0x400);
        if (iVar1 == 0) {
          FUN_140d186f0(3,0,0x66,s_D__a_1_s_target_release_build_bo_1413ca460,0xb0);
          uVar2 = 0;
        }
        else {
          lVar3 = FUN_140d27750(param_1 + 0x18,param_2);
          if (lVar3 == 0) {
            FUN_140d186f0(3,0,0x44,s_D__a_1_s_target_release_build_bo_1413ca4d0,0xb6);
            uVar2 = 0;
          }
          else {
            FUN_140d2f6f0(param_1 + 0x18);
            uVar2 = FUN_140d3c150(param_1 + 0x18);
            *(undefined8 *)(param_1 + 0x30) = uVar2;
            *(undefined8 *)(param_1 + 0x38) = 0;
            uVar2 = 1;
          }
        }
      }
      else {
        FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413ca3f0,0xac);
        uVar2 = 0;
      }
    }
  }
  else {
    FUN_140d186f0(3,0,0x69,s_D__a_1_s_target_release_build_bo_1413ca310,0xa4);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d42cf0 name=FUN_140d42cf0 */

undefined8
FUN_140d42cf0(undefined8 param_1,ulonglong param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_28;
  ulonglong local_20;
  
  uVar4 = *(undefined8 *)(param_5 + 0x18);
  uVar2 = (ulonglong)*(int *)(param_5 + 0x20);
  if ((param_2 == uVar2) && (param_4 == uVar2 * 2)) {
    lVar1 = *(longlong *)(param_5 + 0x30);
    local_38 = 0;
    for (local_40 = 0; local_40 < uVar2; local_40 = local_40 + 1) {
      lVar3 = FUN_140d2fd50(param_3 + local_40 * 8,uVar4,uVar2,
                            *(longlong *)(param_3 + local_40 * 8) * lVar1);
      uVar5 = lVar3 + local_38 + *(longlong *)(param_3 + (local_40 + uVar2) * 8);
      local_28 = (ulonglong)(uVar5 != *(ulonglong *)(param_3 + (local_40 + uVar2) * 8));
      local_20 = (ulonglong)(uVar5 <= *(ulonglong *)(param_3 + (local_40 + uVar2) * 8));
      local_38 = (local_38 | local_28) & local_20;
      *(ulonglong *)(param_3 + (local_40 + uVar2) * 8) = uVar5;
    }
    FUN_140d3d1d0(param_1,param_3 + uVar2 * 8,local_38,uVar4,uVar2);
    uVar4 = 1;
  }
  else {
    FUN_140d186f0(3,0,0x42,s_D__a_1_s_target_release_build_bo_1413ca540,0x127);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140d42f50 name=FUN_140d42f50 */

undefined8 FUN_140d42f50(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 2) == 0) {
    if (*(int *)(param_3 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_140d2f8b0(param_2,(longlong)(*(int *)(param_3 + 0x20) << 1));
      if ((iVar1 != 0) &&
         (iVar1 = FUN_140d2f730(param_1,(longlong)*(int *)(param_3 + 0x20)), iVar1 != 0)) {
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x20);
        *(undefined4 *)(param_1 + 2) = 0;
        uVar2 = FUN_140d42cf0(*param_1,(longlong)*(int *)(param_1 + 1),*param_2,
                              (longlong)*(int *)(param_2 + 1),param_3);
        return uVar2;
      }
      uVar2 = 0;
    }
  }
  else {
    FUN_140d186f0(3,0,0x6d,s_D__a_1_s_target_release_build_bo_1413ca5b0,0x144);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d43070 name=FUN_140d43070 */

undefined4
FUN_140d43070(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  local_18 = 0;
  FUN_140d28030(param_5);
  lVar2 = FUN_140d28090(param_5);
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_140d3d870(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_140d3d7f0(lVar2,param_2,param_3,param_5);
    }
    if ((iVar1 != 0) && (iVar1 = FUN_140d42f50(param_1,lVar2,param_4), iVar1 != 0)) {
      local_18 = 1;
    }
  }
  FUN_140d281e0(param_5);
  return local_18;
}


/* address=140d43140 name=FUN_140d43140 */

ulonglong FUN_140d43140(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  if (param_1 % 2 != 1) {
    FID_conflict__assert((wchar_t *)s_n_1413cad28,(wchar_t *)s_D_1413cac40,0x69);
  }
  local_48 = 1;
  local_38 = 0;
  for (local_40 = 0; local_40 < 0x40; local_40 = local_40 + 1) {
    uVar1 = local_48 & 1;
    uVar2 = param_1 & -uVar1;
    local_48 = ((local_48 ^ uVar2) >> 1) + (local_48 & uVar2);
    local_38 = (local_38 >> 1) + (DAT_14104c738 & -uVar1);
  }
  return local_38;
}


/* address=140d43250 name=FUN_140d43250 */

void FUN_140d43250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_140d30d80(param_5,param_2,param_3,param_4);
  FUN_140d30d80(param_1,param_3,param_2,param_4);
  FUN_140d2f990(param_1,-lVar1,param_1,param_5,param_4);
  return;
}


/* address=140d432e0 name=FUN_140d432e0 */

void FUN_140d432e0(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 *local_res10;
  ulonglong local_res18;
  undefined8 *local_res20;
  undefined8 *local_28;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_3 < param_5) {
    local_res18 = param_5;
    local_res10 = param_4;
    local_res20 = param_2;
    param_5 = param_3;
  }
  local_28 = (undefined8 *)(param_1 + local_res18 * 8);
  if (param_5 == 0) {
    FUN_140d1d930(param_1,0,local_res18 << 3);
  }
  else {
    uVar1 = FUN_140d30400(param_1,local_res10,local_res18,*local_res20);
    *local_28 = uVar1;
    local_res8 = param_1;
    while (param_5 != 1) {
      uVar1 = FUN_140d2fd50(local_res8 + 8,local_res10,local_res18,local_res20[1]);
      local_28[1] = uVar1;
      if (param_5 == 2) {
        return;
      }
      uVar1 = FUN_140d2fd50(local_res8 + 0x10,local_res10,local_res18,local_res20[2]);
      local_28[2] = uVar1;
      if (param_5 == 3) {
        return;
      }
      uVar1 = FUN_140d2fd50(local_res8 + 0x18,local_res10,local_res18,local_res20[3]);
      local_28[3] = uVar1;
      param_5 = param_5 - 4;
      if (param_5 == 0) {
        return;
      }
      uVar1 = FUN_140d2fd50(local_res8 + 0x20,local_res10,local_res18,local_res20[4]);
      local_28[4] = uVar1;
      local_28 = local_28 + 4;
      local_res8 = local_res8 + 0x20;
      local_res20 = local_res20 + 4;
    }
  }
  return;
}


/* address=140d43570 name=FUN_140d43570 */

ulonglong FUN_140d43570(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  int local_38;
  int local_34;
  uint local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  if (param_4 < 0) {
    FID_conflict__assert((wchar_t *)s_c_1413cb340,(wchar_t *)s_D_1413cb270,0x83);
  }
  local_28 = FUN_140d30d80(param_1,param_2,param_3,(longlong)param_4);
  if (param_5 != 0) {
    param_1 = param_1 + (longlong)param_4 * 8;
    param_2 = param_2 + (longlong)param_4 * 8;
    if (param_5 < 0) {
      for (local_34 = 0; local_34 < -param_5; local_34 = local_34 + 1) {
        *(ulonglong *)(param_1 + (longlong)local_34 * 8) =
             -local_28 - *(longlong *)(param_3 + (longlong)param_4 * 8 + (longlong)local_34 * 8);
        local_20 = (ulonglong)(*(longlong *)(param_1 + (longlong)local_34 * 8) != 0);
        local_28 = local_28 | local_20;
      }
    }
    else {
      for (local_38 = 0; local_38 < param_5; local_38 = local_38 + 1) {
        uVar1 = *(ulonglong *)(param_2 + (longlong)local_38 * 8);
        *(ulonglong *)(param_1 + (longlong)local_38 * 8) =
             *(longlong *)(param_2 + (longlong)local_38 * 8) - local_28;
        local_30 = (uint)(uVar1 < *(ulonglong *)(param_1 + (longlong)local_38 * 8));
        local_28 = (ulonglong)(int)local_30;
      }
    }
  }
  return local_28;
}


/* address=140d43760 name=FUN_140d43760 */

longlong FUN_140d43760(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      int param_5,undefined8 param_6)

{
  longlong lVar1;
  int local_18;
  
  lVar1 = FUN_140d43570(param_6,param_2,param_3,param_4,param_5);
  FUN_140d43570(param_1,param_3,param_2,param_4,-param_5);
  if (param_5 < 0) {
    local_18 = -param_5;
  }
  else {
    local_18 = param_5;
  }
  FUN_140d2f990(param_1,-lVar1,param_1,param_6,(longlong)(param_4 + local_18));
  return -lVar1;
}


/* address=140d43830 name=FUN_140d43830 */

ulonglong FUN_140d43830(longlong param_1,longlong param_2,longlong param_3,uint param_4,int param_5,
                       int param_6,longlong param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar9;
  undefined8 uVar7;
  ulonglong uVar8;
  int local_94;
  longlong local_90;
  uint local_80;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if ((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) {
    FID_conflict__assert((wchar_t *)s_n_1413cb420,(wchar_t *)s_D_1413cb350,0xd5);
  }
  if ((param_5 < -8) || (0 < param_5)) {
    FID_conflict__assert((wchar_t *)s___1413cb530,(wchar_t *)s_D_1413cb460,0xd7);
  }
  if ((param_6 < -8) || (0 < param_6)) {
    FID_conflict__assert((wchar_t *)s___1413cb670,(wchar_t *)s_D_1413cb5a0,0xd8);
  }
  if (((param_4 == 8) && (param_5 == 0)) && (param_6 == 0)) {
    uVar1 = FUN_140d322c0(param_1,param_2,param_3);
  }
  else if ((int)param_4 < 0x10) {
    FUN_140d432e0(param_1,param_2,(longlong)(int)(param_4 + param_5),param_3,
                  (longlong)(int)(param_4 + param_6));
    uVar1 = (ulonglong)(uint)(param_5 + param_6);
    if (param_5 + param_6 < 0) {
      uVar1 = FUN_140d1d930(param_1 + (longlong)(int)(param_5 + param_4 * 2 + param_6) * 8,0,
                            (longlong)-(param_5 + param_6) << 3);
    }
  }
  else {
    local_94 = (int)param_4 / 2;
    uVar7 = CONCAT44(uVar9,local_94 - (local_94 + param_5));
    uVar2 = FUN_140d43760(param_7,param_2,param_2 + (longlong)local_94 * 8,local_94 + param_5,uVar7,
                          param_7 + (longlong)(int)param_4 * 8);
    uVar1 = param_7 + (longlong)(int)param_4 * 8;
    uVar8 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),(local_94 + param_6) - local_94);
    uVar3 = FUN_140d43760(param_7 + (longlong)local_94 * 8,param_3 + (longlong)local_94 * 8,param_3,
                          local_94 + param_6,uVar8,uVar1);
    if (((local_94 == 4) && (param_5 == 0)) && (param_6 == 0)) {
      FUN_140d30fb0(param_7 + (longlong)(int)param_4 * 8,param_7,param_7 + 0x20);
      FUN_140d30fb0(param_1,param_2,param_3);
      FUN_140d30fb0(param_1 + (longlong)(int)param_4 * 8,param_2 + 0x20,param_3 + 0x20);
    }
    else if (((local_94 == 8) && (param_5 == 0)) && (param_6 == 0)) {
      FUN_140d322c0(param_7 + (longlong)(int)param_4 * 8,param_7,param_7 + 0x40);
      FUN_140d322c0(param_1,param_2,param_3);
      FUN_140d322c0(param_1 + (longlong)(int)param_4 * 8,param_2 + 0x40,param_3 + 0x40);
    }
    else {
      lVar4 = param_7 + (longlong)(int)(param_4 << 1) * 8;
      uVar1 = uVar1 & 0xffffffff00000000;
      uVar8 = uVar8 & 0xffffffff00000000;
      FUN_140d43830(param_7 + (longlong)(int)param_4 * 8,param_7,param_7 + (longlong)local_94 * 8,
                    local_94,uVar8,uVar1,lVar4);
      FUN_140d43830(param_1,param_2,param_3,local_94,uVar8 & 0xffffffff00000000,
                    uVar1 & 0xffffffff00000000,lVar4);
      FUN_140d43830(param_1 + (longlong)(int)param_4 * 8,param_2 + (longlong)local_94 * 8,
                    param_3 + (longlong)local_94 * 8,local_94,param_5,param_6,lVar4);
    }
    lVar4 = FUN_140d30b50(param_7,param_1,param_1 + (longlong)(int)param_4 * 8,
                          (longlong)(int)param_4);
    lVar5 = FUN_140d30d80(param_7 + (longlong)(int)(param_4 << 1) * 8,param_7,
                          param_7 + (longlong)(int)param_4 * 8,(longlong)(int)param_4);
    lVar6 = FUN_140d30b50(param_7 + (longlong)(int)param_4 * 8,param_7,
                          param_7 + (longlong)(int)param_4 * 8,(longlong)(int)param_4);
    FUN_140d2f990(param_7 + (longlong)(int)param_4 * 8,uVar2 ^ uVar3,
                  param_7 + (longlong)(int)(param_4 << 1) * 8,param_7 + (longlong)(int)param_4 * 8,
                  (longlong)(int)param_4);
    local_90 = FUN_140d1d720(uVar2 ^ uVar3,lVar4 - lVar5,lVar4 + lVar6);
    lVar4 = FUN_140d30b50(param_1 + (longlong)local_94 * 8,param_1 + (longlong)local_94 * 8,
                          param_7 + (longlong)(int)param_4 * 8,(longlong)(int)param_4);
    local_90 = local_90 + lVar4;
    for (local_94 = local_94 + param_4; uVar1 = (ulonglong)(param_4 * 2),
        local_94 < (int)(param_4 * 2); local_94 = local_94 + 1) {
      uVar1 = *(ulonglong *)(param_1 + (longlong)local_94 * 8);
      *(ulonglong *)(param_1 + (longlong)local_94 * 8) = uVar1 + local_90;
      local_80 = (uint)(*(ulonglong *)(param_1 + (longlong)local_94 * 8) < uVar1);
      local_90 = (longlong)(int)local_80;
    }
    if (local_90 != 0) {
      FID_conflict__assert((wchar_t *)s_c_1413cb7b0,(wchar_t *)s_D_1413cb6e0,299);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* address=140d440b0 name=FUN_140d440b0 */

ulonglong FUN_140d440b0(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5
                       ,uint param_6,longlong param_7)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar10;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 uVar11;
  uint local_b4;
  int local_b0;
  longlong local_a8;
  uint local_a0;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  if ((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) {
    FID_conflict__assert((wchar_t *)s_n_1413cb890,(wchar_t *)s_D_1413cb7c0,0x13a);
  }
  if (((int)param_5 < 0) || ((int)param_4 <= (int)param_5)) {
    FID_conflict__assert((wchar_t *)s_0_1413cb9a0,(wchar_t *)s_D_1413cb8d0,0x13c);
  }
  if (((int)param_6 < 0) || ((int)param_4 <= (int)param_6)) {
    FID_conflict__assert((wchar_t *)s_0_1413cbaa0,(wchar_t *)s_D_1413cb9d0,0x13d);
  }
  if (((int)(param_5 - param_6) < -1) || (1 < (int)(param_5 - param_6))) {
    FID_conflict__assert((wchar_t *)s___1413cbba0,(wchar_t *)s_D_1413cbad0,0x13e);
  }
  iVar1 = param_4 * 2;
  if ((int)param_4 < 8) {
    FUN_140d432e0(param_1,param_2,(longlong)(int)(param_4 + param_5),param_3,
                  (longlong)(int)(param_4 + param_6));
    uVar2 = FUN_140d1d930(param_1 + (longlong)iVar1 * 8 + (longlong)(int)param_5 * 8 +
                          (longlong)(int)param_6 * 8,0,(longlong)(int)((iVar1 - param_5) - param_6))
    ;
  }
  else {
    uVar8 = CONCAT44(uVar10,param_4 - param_5);
    uVar3 = FUN_140d43760(param_7,param_2,param_2 + (longlong)(int)param_4 * 8,param_5,uVar8,
                          param_7 + (longlong)iVar1 * 8);
    uVar2 = param_7 + (longlong)iVar1 * 8;
    uVar9 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),param_6 - param_4);
    uVar4 = FUN_140d43760(param_7 + (longlong)(int)param_4 * 8,param_3 + (longlong)(int)param_4 * 8,
                          param_3,param_6,uVar9,uVar2);
    if (param_4 == 8) {
      FUN_140d322c0(param_7 + (longlong)iVar1 * 8,param_7,param_7 + 0x40);
      FUN_140d322c0(param_1,param_2,param_3);
      FUN_140d432e0(param_1 + (longlong)iVar1 * 8,param_2 + 0x40,(longlong)(int)param_5,
                    param_3 + 0x40,(longlong)(int)param_6);
      FUN_140d1d930(param_1 + (longlong)(int)(iVar1 + param_5 + param_6) * 8,0,
                    (longlong)(int)((iVar1 - param_5) - param_6) << 3);
    }
    else {
      lVar5 = param_7 + (longlong)(int)(param_4 << 2) * 8;
      uVar2 = uVar2 & 0xffffffff00000000;
      uVar9 = uVar9 & 0xffffffff00000000;
      FUN_140d43830(param_7 + (longlong)iVar1 * 8,param_7,param_7 + (longlong)(int)param_4 * 8,
                    param_4,uVar9,uVar2,lVar5);
      uVar2 = uVar2 & 0xffffffff00000000;
      uVar9 = uVar9 & 0xffffffff00000000;
      FUN_140d43830(param_1,param_2,param_3,param_4,uVar9,uVar2,lVar5);
      uVar10 = (undefined4)(uVar9 >> 0x20);
      uVar11 = (undefined4)(uVar2 >> 0x20);
      FUN_140d1d930(param_1 + (longlong)iVar1 * 8,0,(longlong)iVar1 << 3);
      local_b4 = param_4;
      if (((int)param_5 < 0x10) && ((int)param_6 < 0x10)) {
        FUN_140d432e0(param_1 + (longlong)iVar1 * 8,param_2 + (longlong)(int)param_4 * 8,
                      (longlong)(int)param_5,param_3 + (longlong)(int)param_4 * 8,
                      (longlong)(int)param_6);
      }
      else {
        do {
          local_b4 = (int)local_b4 / 2;
          if (((int)local_b4 < (int)param_5) || ((int)local_b4 < (int)param_6)) {
            FUN_140d440b0(param_1 + (longlong)iVar1 * 8,param_2 + (longlong)(int)param_4 * 8,
                          param_3 + (longlong)(int)param_4 * 8,local_b4,
                          CONCAT44(uVar10,param_5 - local_b4),CONCAT44(uVar11,param_6 - local_b4),
                          lVar5);
            goto LAB_140d4479e;
          }
        } while ((local_b4 != param_5) && (local_b4 != param_6));
        FUN_140d43830(param_1 + (longlong)iVar1 * 8,param_2 + (longlong)(int)param_4 * 8,
                      param_3 + (longlong)(int)param_4 * 8,local_b4,
                      CONCAT44(uVar10,param_5 - local_b4),CONCAT44(uVar11,param_6 - local_b4),lVar5)
        ;
      }
    }
LAB_140d4479e:
    lVar5 = FUN_140d30b50(param_7,param_1,param_1 + (longlong)iVar1 * 8,(longlong)iVar1);
    lVar6 = FUN_140d30d80(param_7 + (longlong)(int)(param_4 << 2) * 8,param_7,
                          param_7 + (longlong)iVar1 * 8,(longlong)iVar1);
    lVar7 = FUN_140d30b50(param_7 + (longlong)iVar1 * 8,param_7,param_7 + (longlong)iVar1 * 8,
                          (longlong)iVar1);
    FUN_140d2f990(param_7 + (longlong)iVar1 * 8,uVar3 ^ uVar4,
                  param_7 + (longlong)(int)(param_4 << 2) * 8,param_7 + (longlong)iVar1 * 8,
                  (longlong)iVar1);
    local_a8 = FUN_140d1d720(uVar3 ^ uVar4,lVar5 - lVar6,lVar5 + lVar7);
    lVar5 = FUN_140d30b50(param_1 + (longlong)(int)param_4 * 8,param_1 + (longlong)(int)param_4 * 8,
                          param_7 + (longlong)iVar1 * 8,(longlong)iVar1);
    local_a8 = local_a8 + lVar5;
    for (local_b0 = param_4 * 3; uVar2 = (ulonglong)(param_4 * 4), local_b0 < (int)(param_4 * 4);
        local_b0 = local_b0 + 1) {
      uVar2 = *(ulonglong *)(param_1 + (longlong)local_b0 * 8);
      *(ulonglong *)(param_1 + (longlong)local_b0 * 8) = uVar2 + local_a8;
      local_a0 = (uint)(*(ulonglong *)(param_1 + (longlong)local_b0 * 8) < uVar2);
      local_a8 = (longlong)(int)local_a0;
    }
    if (local_a8 != 0) {
      FID_conflict__assert((wchar_t *)s_c_1413cbcc0,(wchar_t *)s_D_1413cbbf0,0x19d);
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* address=140d44a60 name=FUN_140d44a60 */

undefined4
FUN_140d44a60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar8;
  char local_48;
  undefined8 *local_38;
  undefined4 local_28;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  iVar2 = *(int *)(param_2 + 1);
  iVar1 = *(int *)(param_3 + 1);
  if ((iVar2 == 0) || (iVar1 == 0)) {
    FUN_140d27910(param_1);
    return 1;
  }
  local_28 = 0;
  FUN_140d28030(param_4);
  if (((param_1 != param_2) && (local_38 = param_1, param_1 != param_3)) ||
     (local_38 = (undefined8 *)FUN_140d28090(param_4), local_38 != (undefined8 *)0x0)) {
    *(uint *)(local_38 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
    iVar6 = iVar2 - iVar1;
    if ((iVar2 == iVar1) && (iVar2 == 8)) {
      iVar2 = FUN_140d2f730(local_38,0x10);
      if (iVar2 == 0) goto LAB_140d44e8c;
      *(undefined4 *)(local_38 + 1) = 0x10;
      FUN_140d322c0(*local_38,*param_2,*param_3);
    }
    else {
      iVar7 = iVar2 + iVar1;
      if (((iVar2 < DAT_14104c6a8) || ((iVar1 < DAT_14104c6a8 || (iVar6 < -1)))) || (1 < iVar6)) {
        iVar6 = FUN_140d2f730(local_38,(longlong)iVar7);
        if (iVar6 == 0) goto LAB_140d44e8c;
        *(int *)(local_38 + 1) = iVar7;
        FUN_140d432e0(*local_38,*param_2,(longlong)iVar2,*param_3,(longlong)iVar1);
      }
      else {
        if (iVar6 < 0) {
          local_48 = FUN_140d2f3c0((longlong)iVar1);
        }
        else {
          local_48 = FUN_140d2f3c0((longlong)iVar2);
        }
        iVar6 = 1 << (local_48 - 1U & 0x1f);
        if ((iVar2 < iVar6) && (iVar1 < iVar6)) {
          FID_conflict__assert((wchar_t *)s_j_1413cbda0,(wchar_t *)s_D_1413cbcd0,0x1d1);
        }
        puVar4 = (undefined8 *)FUN_140d28090(param_4);
        if (puVar4 == (undefined8 *)0x0) goto LAB_140d44e8c;
        if ((iVar6 < iVar2) || (iVar6 < iVar1)) {
          if ((iVar2 < iVar6) || (iVar1 < iVar6)) {
            FID_conflict__assert((wchar_t *)s_a_1413cbea0,(wchar_t *)s_D_1413cbdd0,0x1dd);
          }
          iVar3 = FUN_140d2f730(puVar4,(longlong)(iVar6 << 3));
          if ((iVar3 == 0) || (iVar3 = FUN_140d2f730(local_38,(longlong)(iVar6 << 2)), iVar3 == 0))
          goto LAB_140d44e8c;
          FUN_140d440b0(*local_38,*param_2,*param_3,iVar6,CONCAT44(uVar8,iVar2 - iVar6),
                        iVar1 - iVar6,*puVar4);
        }
        else {
          iVar3 = FUN_140d2f730(puVar4,(longlong)(iVar6 << 2));
          if ((iVar3 == 0) || (iVar3 = FUN_140d2f730(local_38,(longlong)(iVar6 << 1)), iVar3 == 0))
          goto LAB_140d44e8c;
          FUN_140d43830(*local_38,*param_2,*param_3,iVar6,CONCAT44(uVar8,iVar2 - iVar6),
                        iVar1 - iVar6,*puVar4);
        }
        *(int *)(local_38 + 1) = iVar7;
      }
    }
    if ((param_1 == local_38) || (lVar5 = FUN_140d27750(param_1,local_38), lVar5 != 0)) {
      local_28 = 1;
    }
  }
LAB_140d44e8c:
  FUN_140d281e0(param_4);
  return local_28;
}


/* address=140d44eb0 name=FUN_140d44eb0 */

void FUN_140d44eb0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *local_28;
  undefined8 *local_20;
  longlong local_18;
  
  if (param_3 != 0) {
    param_1[param_3 * 2 + -1] = 0;
    *param_1 = 0;
    local_28 = param_1 + 1;
    local_20 = param_2;
    if (1 < param_3) {
      local_20 = param_2 + 1;
      uVar1 = FUN_140d30400(local_28,local_20,param_3 - 1,*param_2);
      param_1[param_3] = uVar1;
      local_28 = param_1 + 3;
    }
    if (2 < param_3) {
      for (local_18 = param_3 - 2; local_18 != 0; local_18 = local_18 + -1) {
        uVar1 = FUN_140d2fd50(local_28,local_20 + 1,local_18,*local_20);
        local_28[local_18] = uVar1;
        local_28 = local_28 + 2;
        local_20 = local_20 + 1;
      }
    }
    FUN_140d30b50(param_1,param_1,param_1,param_3 * 2);
    FUN_140d308c0(param_4,param_2,param_3);
    FUN_140d30b50(param_1,param_1,param_4,param_3 * 2);
  }
  return;
}


/* address=140d45060 name=FUN_140d45060 */

ulonglong FUN_140d45060(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_48;
  longlong local_38;
  ulonglong local_30;
  
  if ((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) {
    FID_conflict__assert((wchar_t *)s_n_1413cc010,(wchar_t *)s_D_1413cbf40,0x251);
  }
  if (param_3 == 4) {
    uVar1 = FUN_140d3ad00(param_1,param_2);
  }
  else if (param_3 == 8) {
    uVar1 = FUN_140d36f00(param_1,param_2);
  }
  else if (param_3 < 0x10) {
    uVar1 = FUN_140d44eb0(param_1,param_2,param_3,param_4);
  }
  else {
    local_30 = param_3 / 2;
    lVar2 = param_4 + param_3 * 0x10;
    FUN_140d43250(param_4,param_2,param_2 + local_30 * 8,local_30,param_4 + local_30 * 8);
    FUN_140d45060(param_4 + param_3 * 8,param_4,local_30,lVar2);
    FUN_140d45060(param_1,param_2,local_30,lVar2);
    FUN_140d45060(param_1 + param_3 * 8,param_2 + local_30 * 8,local_30,lVar2);
    lVar2 = FUN_140d30b50(param_4,param_1,param_1 + param_3 * 8,param_3);
    lVar3 = FUN_140d30d80(param_4 + param_3 * 8,param_4,param_4 + param_3 * 8,param_3);
    local_38 = FUN_140d30b50(param_1 + local_30 * 8,param_1 + local_30 * 8,param_4 + param_3 * 8,
                             param_3);
    local_38 = (lVar2 - lVar3) + local_38;
    for (local_30 = local_30 + param_3; uVar1 = param_3 * 2, local_30 < uVar1;
        local_30 = local_30 + 1) {
      uVar1 = *(ulonglong *)(param_1 + local_30 * 8);
      *(ulonglong *)(param_1 + local_30 * 8) = uVar1 + local_38;
      local_48 = (uint)(*(ulonglong *)(param_1 + local_30 * 8) < uVar1);
      local_38 = (longlong)(int)local_48;
    }
    if (local_38 != 0) {
      FID_conflict__assert((wchar_t *)s_c_1413cc120,(wchar_t *)s_D_1413cc050,0x284);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* address=140d45410 name=FUN_140d45410 */

undefined8 FUN_140d45410(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0xea3) {
    if (param_1 < 0x541) {
      if (param_1 < 0x1dc) {
        if (param_1 < 400) {
          if (param_1 < 0x15b) {
            if (param_1 < 0x134) {
              if (param_1 < 0x37) {
                uVar1 = 0x22;
              }
              else {
                uVar1 = 0x1b;
              }
            }
            else {
              uVar1 = 8;
            }
          }
          else {
            uVar1 = 7;
          }
        }
        else {
          uVar1 = 6;
        }
      }
      else {
        uVar1 = 5;
      }
    }
    else {
      uVar1 = 4;
    }
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}


/* address=140d454a0 name=FUN_140d454a0 */

undefined8 FUN_140d454a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 8) * 0x40 < 0x401) {
    uVar1 = 0x200;
  }
  else {
    uVar1 = 0x400;
  }
  return uVar1;
}


/* address=140d454d0 name=FUN_140d454d0 */

undefined8 FUN_140d454d0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  do {
    iVar1 = FUN_140d2ba80(param_1,param_2,1,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_140d3ca30(param_1);
  } while (iVar1 != 0);
  return 1;
}


/* address=140d45520 name=FUN_140d45520 */

undefined4
FUN_140d45520(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_28;
  ulonglong local_20;
  
  local_28 = 0;
  FUN_140d28030(param_5);
  lVar3 = FUN_140d28090(param_5);
  if ((((lVar3 != 0) && (iVar2 = FUN_140d2ba80(param_1,param_2,0,1), iVar2 != 0)) &&
      (iVar2 = FUN_140d28a10(0,lVar3,param_1,param_3,param_5), iVar2 != 0)) &&
     (iVar2 = FUN_140d28510(param_1,param_1,lVar3), iVar2 != 0)) {
    if (param_4 == 0) {
      iVar2 = FUN_140d28370(param_1,1);
    }
    else {
      iVar2 = FUN_140d28220(param_1,param_1,param_4);
    }
    if (iVar2 != 0) {
      uVar4 = FUN_140d454a0(param_1);
      do {
        local_20 = 1;
        while( true ) {
          if (uVar4 <= local_20) {
            local_28 = 1;
            goto LAB_140d4568b;
          }
          uVar1 = FUN_140d3c8f0(param_1,*(undefined2 *)(&DAT_14104c760 + local_20 * 2));
          if (uVar1 < 2) break;
          local_20 = local_20 + 1;
        }
        iVar2 = FUN_140d28220(param_1,param_1,param_3);
      } while (iVar2 != 0);
    }
  }
LAB_140d4568b:
  FUN_140d281e0(param_5);
  return local_28;
}


/* address=140d456b0 name=FUN_140d456b0 */

undefined4
FUN_140d456b0(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,undefined8 param_5)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 local_38;
  ulonglong local_28;
  
  local_38 = 0;
  FUN_140d28030(param_5);
  uVar3 = FUN_140d28090(param_5);
  uVar4 = FUN_140d28090(param_5);
  lVar5 = FUN_140d28090(param_5);
  if ((((lVar5 != 0) && (iVar2 = FUN_140d2a050(lVar5,param_3), iVar2 != 0)) &&
      (iVar2 = FUN_140d2ba80(uVar4,param_2 + -1,0,1), iVar2 != 0)) &&
     ((iVar2 = FUN_140d28a10(0,uVar3,uVar4,lVar5,param_5), iVar2 != 0 &&
      (iVar2 = FUN_140d28510(uVar4,uVar4,uVar3), iVar2 != 0)))) {
    if (param_4 == 0) {
      iVar2 = FUN_140d28370(uVar4,1);
    }
    else {
      iVar2 = FUN_140d2a050(uVar3,param_4);
      if (iVar2 == 0) goto LAB_140d458fc;
      iVar2 = FUN_140d28220(uVar4,uVar4,uVar3);
    }
    if (((iVar2 != 0) && (iVar2 = FUN_140d29e40(param_1,uVar4), iVar2 != 0)) &&
       (iVar2 = FUN_140d28370(param_1,1), iVar2 != 0)) {
      uVar6 = FUN_140d454a0(param_1);
      do {
        local_28 = 1;
        while( true ) {
          if (uVar6 <= local_28) {
            local_38 = 1;
            goto LAB_140d458fc;
          }
          sVar1 = FUN_140d3c8f0(param_1,*(undefined2 *)(&DAT_14104c760 + local_28 * 2));
          if ((sVar1 == 0) ||
             (sVar1 = FUN_140d3c8f0(uVar4,*(undefined2 *)(&DAT_14104c760 + local_28 * 2)),
             sVar1 == 0)) break;
          local_28 = local_28 + 1;
        }
        iVar2 = FUN_140d28220(param_1,param_1,param_3);
      } while ((iVar2 != 0) && (iVar2 = FUN_140d28220(uVar4,uVar4,lVar5), iVar2 != 0));
    }
  }
LAB_140d458fc:
  FUN_140d281e0(param_5);
  return local_38;
}


/* address=140d45920 name=FUN_140d45920 */

undefined8 FUN_140d45920(undefined2 *param_1,undefined8 param_2)

{
  short sVar1;
  ulonglong uVar2;
  ulonglong local_18;
  
  uVar2 = FUN_140d454a0(param_2);
  local_18 = 1;
  while( true ) {
    if (uVar2 <= local_18) {
      return 0;
    }
    sVar1 = FUN_140d3c8f0(param_2,*(undefined2 *)(&DAT_14104c760 + local_18 * 2));
    if (sVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  *param_1 = *(undefined2 *)(&DAT_14104c760 + local_18 * 2);
  return 1;
}


/* address=140d459b0 name=FUN_140d459b0 */

undefined8 FUN_140d459b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d45f40(param_1,param_2,&DAT_14104c050);
  return 1;
}


/* address=140d45ad0 name=FUN_140d45ad0 */

void FUN_140d45ad0(undefined8 param_1)

{
  FUN_140d762b0(param_1);
  return;
}


/* address=140d45af0 name=FUN_140d45af0 */

void FUN_140d45af0(longlong param_1,byte *param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  byte *local_res10;
  undefined auStack_68 [32];
  ulonglong local_48;
  byte local_40 [48];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_68;
  local_res10 = param_2;
  if (param_4 != 0) {
    if (0x30 < param_4) goto LAB_140d45be0;
    FUN_140d1d890(local_40,param_2,0x30);
    for (local_48 = 0; local_48 < param_4; local_48 = local_48 + 1) {
      local_40[local_48] = local_40[local_48] ^ *(byte *)(param_3 + local_48);
    }
    local_res10 = local_40;
  }
  iVar1 = FUN_140d6bab0(param_1,local_res10,0x30);
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0x118) = 1;
  }
LAB_140d45be0:
  FUN_140e28050(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=140d45c00 name=FUN_140d45c00 */

void FUN_140d45c00(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  longlong local_res10;
  ulonglong local_res18;
  undefined auStack_78 [32];
  longlong local_58;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30;
  undefined local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_78;
  if (((param_3 < 0x10001) && (*(ulonglong *)(param_1 + 0x118) <= DAT_14104c008)) &&
     ((local_res10 = param_2, local_res18 = param_3, param_5 == 0 ||
      (iVar1 = FUN_140d6bab0(param_1,param_4,param_5), iVar1 != 0)))) {
    for (; 0xf < local_res18; local_res18 = local_res18 - local_48) {
      local_48 = DAT_14104c040;
      if (local_res18 < DAT_14104c040) {
        local_48 = local_res18;
      }
      local_48 = local_48 & 0xfffffffffffffff0;
      local_38 = local_48 / 0x10;
      if (*(longlong *)(param_1 + 0x100) == 0) {
        for (local_40 = 0; local_40 < local_48; local_40 = local_40 + 0x10) {
          FUN_140d6ba60(param_1,1);
          local_30 = param_1 + 0x108;
          (**(code **)(param_1 + 0xf8))(local_30,local_res10 + local_40,param_1);
        }
      }
      else {
        FUN_140d1d930(local_res10,0,local_48);
        FUN_140d6ba60(param_1,1);
        local_58 = param_1 + 0x108;
        (**(code **)(param_1 + 0x100))(local_res10,local_res10,local_38,param_1);
        FUN_140d6ba60(param_1);
      }
      local_res10 = local_res10 + local_48;
    }
    if (local_res18 != 0) {
      FUN_140d6ba60(param_1,1);
      (**(code **)(param_1 + 0xf8))(param_1 + 0x108,local_28,param_1);
      FUN_140d1d890(local_res10,local_28,local_res18);
    }
    iVar1 = FUN_140d6bab0(param_1,param_4,param_5);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 1;
      FUN_140d272c0();
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=140d45f10 name=FUN_140d45f10 */

void FUN_140d45f10(undefined8 param_1)

{
  FUN_140d76450(param_1,0x120);
  return;
}


/* address=140d45f40 name=FUN_140d45f40 */

void FUN_140d45f40(longlong param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong local_res8;
  ulonglong local_res10;
  undefined auStack_298 [32];
  undefined8 local_278;
  undefined *local_268;
  ulonglong local_260;
  int local_258;
  ulonglong local_250;
  longlong local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined local_228 [304];
  byte local_f8 [32];
  undefined local_d8 [48];
  undefined local_a8 [48];
  undefined local_78 [48];
  undefined local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_298;
  if (param_2 != 0) {
    local_248 = FUN_140d6bc40();
    iVar1 = FUN_140d46520();
    if ((iVar1 == 0) || (iVar1 = FUN_140d6bc90(local_f8,0x20), iVar1 == 0)) {
      if ((local_248 == 0) && (iVar1 = FUN_140e040d0(), iVar1 == 0)) {
        iVar1 = FUN_140d46500();
        if (iVar1 == 0) {
          FUN_140e04010(local_f8,0x20);
        }
        else {
          iVar1 = FUN_140d46340(local_f8,0x20);
          if ((iVar1 == 0) && (iVar1 = FUN_140d6bc90(local_f8,0x20), iVar1 == 0)) {
            FUN_140e04010(local_f8,0x20);
          }
        }
      }
      else {
        FUN_140d1d930(local_f8,0,0x20);
      }
    }
    for (local_260 = 0; local_260 < 0x20; local_260 = local_260 + 1) {
      local_f8[local_260] = local_f8[local_260] ^ *(byte *)(param_3 + local_260);
    }
    local_268 = (undefined *)FUN_140d89530(1);
    if (local_268 == (undefined *)0x0) {
      local_268 = (undefined *)FUN_140d76180(0x130);
      if ((local_268 == (undefined *)0x0) ||
         (iVar1 = FUN_140d89590(1,local_268,&LAB_140d6bc50), iVar1 == 0)) {
        local_268 = local_228;
      }
      *(undefined4 *)(local_268 + 300) = 0;
      puVar3 = local_d8;
      for (lVar2 = 0x30; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_240 = 0;
      FUN_140d6bd70(local_268,local_78,local_d8,&local_240);
      iVar1 = FUN_140d46370(local_268,local_78,local_d8,local_240);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(local_268 + 0x128) = 0;
      *(longlong *)(local_268 + 0x120) = local_248;
    }
    if ((DAT_14104c048 <= *(uint *)(local_268 + 0x128)) ||
       (*(longlong *)(local_268 + 0x120) != local_248)) {
      puVar3 = local_a8;
      for (lVar2 = 0x30; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_238 = 0;
      FUN_140d6bd70(local_268,local_48,local_a8,&local_238);
      iVar1 = FUN_140d45af0(local_268,local_48,local_a8,local_238);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(local_268 + 0x128) = 0;
      *(longlong *)(local_268 + 0x120) = local_248;
    }
    local_258 = 1;
    local_res8 = param_1;
    local_res10 = param_2;
    while (local_res10 != 0) {
      local_250 = local_res10;
      if (0x10000 < local_res10) {
        local_250 = 0x10000;
      }
      if (local_258 == 0) {
        local_230 = 0;
      }
      else {
        local_230 = 0x20;
      }
      local_278 = local_230;
      iVar1 = FUN_140d45c00(local_268,local_res8,local_250,local_f8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_res8 = local_res8 + local_250;
      local_res10 = local_res10 - local_250;
      *(int *)(local_268 + 0x128) = *(int *)(local_268 + 0x128) + 1;
      local_258 = 0;
    }
    if (local_268 == local_228) {
      FUN_140d45f10(local_268);
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_298);
  return;
}


/* address=140d46340 name=FUN_140d46340 */

undefined8 FUN_140d46340(undefined8 param_1,undefined8 param_2)

{
  FUN_140e04010(param_1,param_2);
  return 1;
}


/* address=140d46370 name=FUN_140d46370 */

void FUN_140d46370(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined auStack_88 [32];
  undefined8 local_68;
  ulonglong local_58;
  ulonglong local_50;
  byte local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_88;
  if (param_4 < 0x31) {
    FUN_140d1d890(local_48,param_2,0x30);
    for (local_58 = 0; local_58 < param_4; local_58 = local_58 + 1) {
      local_48[local_58] = local_48[local_58] ^ *(byte *)(param_3 + local_58);
    }
    for (local_50 = 0; local_50 < 0x30; local_50 = local_50 + 1) {
      local_48[local_50] = local_48[local_50] ^ (&DAT_14104c010)[local_50];
    }
    local_68 = 0x20;
    uVar1 = FUN_140d49590(param_1,0,param_1 + 0xf8,local_48);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    FUN_140d1d890(param_1 + 0x108,local_48 + 0x20,0x10);
    *(undefined8 *)(param_1 + 0x118) = 1;
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=140d46500 name=FUN_140d46500 */

void FUN_140d46500(void)

{
  FUN_140d1de10();
  return;
}


/* address=140d46520 name=FUN_140d46520 */

undefined4 FUN_140d46520(void)

{
  int iVar1;
  
  iVar1 = FUN_140d1de10();
  if ((iVar1 != 0) && (iVar1 = FUN_140d1dc90(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140d46560 name=FUN_140d46560 */

ulonglong FUN_140d46560(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_18;
  ulonglong local_10;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else if (param_2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    local_18 = 0;
    for (local_10 = 1; local_10 < param_2; local_10 = local_10 + 1) {
      local_18 = local_18 | param_1[local_10];
    }
    uVar1 = FUN_140d1d680(local_18);
    uVar2 = FUN_140d1d5c0(*param_1,param_3);
    uVar1 = uVar1 & uVar2;
  }
  return uVar1;
}


/* address=140d46630 name=FUN_140d46630 */

undefined8
FUN_140d46630(longlong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong *param_4,
             longlong param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong local_10;
  
  for (local_10 = param_5; (local_10 != 0 && (param_4[local_10 + -1] == 0));
      local_10 = local_10 + -1) {
  }
  if ((local_10 == 0) || ((local_10 == 1 && (*param_4 <= param_3)))) {
    FUN_140d186f0(3,0,0x6c,s_D__a_1_s_target_release_build_bo_1413cc510,0xe6);
    uVar1 = 0;
  }
  else {
    uVar2 = param_4[local_10 + -1] | param_4[local_10 + -1] >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    *param_1 = local_10;
    *param_2 = uVar2 | uVar2 >> 0x20;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d467a0 name=FUN_140d467a0 */

int FUN_140d467a0(ulonglong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar2 = FUN_140d1d680(param_1 << 0x20);
  uVar3 = FUN_140d1d720(uVar2,param_1 >> 0x20,param_1);
  uVar4 = FUN_140d1d680(uVar3 << 0x30);
  uVar3 = FUN_140d1d720(uVar4,uVar3 >> 0x10,uVar3);
  uVar5 = FUN_140d1d680(uVar3 << 0x38);
  uVar3 = FUN_140d1d720(uVar5,uVar3 >> 8,uVar3);
  uVar6 = FUN_140d1d680(uVar3 << 0x3c);
  uVar3 = FUN_140d1d720(uVar6,uVar3 >> 4,uVar3);
  uVar7 = FUN_140d1d680(uVar3 << 0x3e);
  lVar8 = FUN_140d1d720(uVar7,uVar3 >> 2,uVar3);
  uVar1 = FUN_140d1d680(lVar8 << 0x3f);
  return ((uint)uVar2 & 0x20) + ((uint)uVar4 & 0x10) + ((uint)uVar5 & 8) + ((uint)uVar6 & 4) +
         ((uint)uVar7 & 2) + (uVar1 & 1);
}


/* address=140d46980 name=FUN_140d46980 */

void FUN_140d46980(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4c570();
  FUN_140d89380(uVar1,&LAB_140d4c620);
  FUN_140d4c560();
  return;
}


/* address=140d469e0 name=FUN_140d469e0 */

void FUN_140d469e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4c730();
  FUN_140d89380(uVar1,&LAB_140d4c7e0);
  FUN_140d4c720();
  return;
}


/* address=140d46b00 name=FUN_140d46b00 */

undefined4 FUN_140d46b00(void)

{
  int iVar1;
  
  iVar1 = FUN_140d1ed80();
  if ((iVar1 != 0) && (iVar1 = FUN_140d1fc60(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140d46b40 name=FUN_140d46b40 */

undefined FUN_140d46b40(undefined *param_1)

{
  return *param_1;
}


/* address=140d46b60 name=FUN_140d46b60 */

undefined FUN_140d46b60(longlong param_1)

{
  return *(undefined *)(param_1 + 1);
}


/* address=140d46b80 name=FUN_140d46b80 */

undefined FUN_140d46b80(longlong param_1)

{
  return *(undefined *)(param_1 + 2);
}


/* address=140d46ba0 name=FUN_140d46ba0 */

undefined FUN_140d46ba0(longlong param_1)

{
  return *(undefined *)(param_1 + 3);
}


/* address=140d46bc0 name=FUN_140d46bc0 */

void FUN_140d46bc0(undefined8 param_1)

{
  FUN_140d1d930(param_1,0,0x248);
  return;
}


/* address=140d46c70 name=FUN_140d46c70 */

void FUN_140d46c70(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140d46d40(param_1);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d46cb0 name=FUN_140d46cb0 */

undefined8
FUN_140d46cb0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    FUN_140d186f0(0x1e,0,0x7c,s_D__a_1_s_target_release_build_bo_1413cd070,0x41);
    *param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d47640(param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar1;
}


/* address=140d46d40 name=FUN_140d46d40 */

void FUN_140d46d40(longlong *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    *param_1 = 0;
  }
  return;
}


/* address=140d46d80 name=FUN_140d46d80 */

undefined8
FUN_140d46d80(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar2;
  longlong local_10 [2];
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (param_8 + *(byte *)(*param_1 + 2) < param_8) {
    FUN_140d186f0(0x1e,0,0x75,s_D__a_1_s_target_release_build_bo_1413cd150,CONCAT44(uVar2,0x7b));
  }
  else if (param_4 < param_8) {
    FUN_140d186f0(0x1e,0,0x67,s_D__a_1_s_target_release_build_bo_1413cd1c0,CONCAT44(uVar2,0x80));
  }
  else {
    iVar1 = FUN_140d49710(param_7,param_8,param_2,param_4);
    if (iVar1 == 0) {
      FUN_140d186f0(0x1e,0,0x73,s_D__a_1_s_target_release_build_bo_1413cd230,CONCAT44(uVar2,0x85));
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x28))
                        (param_1,param_2,param_2 + param_8,local_10,param_4 - param_8,param_5,
                         param_6,param_7,param_8,0,0,param_9,param_10);
      if (iVar1 != 0) {
        *param_3 = param_8 + local_10[0];
        return 1;
      }
    }
  }
  FUN_140d1d930(param_2,0,param_4);
  *param_3 = 0;
  return 0;
}


/* address=140d46fa0 name=FUN_140d46fa0 */

undefined8
FUN_140d46fa0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,longlong param_7,ulonglong param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  iVar1 = FUN_140d49710(param_7,param_8,param_2,param_4);
  if (iVar1 == 0) {
    FUN_140d186f0(0x1e,0,0x73,s_D__a_1_s_target_release_build_bo_1413cd380,CONCAT44(uVar2,0xbf));
  }
  else if (*(longlong *)(*param_1 + 0x20) == 0) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      FID_conflict__assert((wchar_t *)s_c_1413cd4c8,(wchar_t *)s_D_1413cd3f0,0xcd);
    }
    if (param_8 < *(byte *)(param_1 + 0x48)) {
      FUN_140d186f0(0x1e,0,0x65,s_D__a_1_s_target_release_build_bo_1413cd4f0,0xd0);
    }
    else {
      param_8 = param_8 - *(byte *)(param_1 + 0x48);
      if (param_4 < param_8) {
        FUN_140d186f0(0x1e,0,0x67,s_D__a_1_s_target_release_build_bo_1413cd560,0xd6);
      }
      else {
        iVar1 = FUN_140d47420(param_1,param_2,param_5,param_6,param_7,param_8,param_7 + param_8,
                              *(undefined *)(param_1 + 0x48),param_9,param_10);
        if (iVar1 != 0) {
          *param_3 = param_8;
          return 1;
        }
      }
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x20))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_140d1d930(param_2,0,param_4);
  *param_3 = 0;
  return 0;
}


/* address=140d47220 name=FUN_140d47220 */

undefined8
FUN_140d47220(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12,
             undefined8 param_13)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar1 = FUN_140d49710(param_8,param_9,param_2,param_9);
  if (((iVar1 == 0) || (iVar1 = FUN_140d1d430(param_2,param_9,param_3,param_5), iVar1 != 0)) ||
     (iVar1 = FUN_140d1d430(param_8,param_9,param_3,param_5), iVar1 != 0)) {
    FUN_140d186f0(0x1e,0,0x73,s_D__a_1_s_target_release_build_bo_1413cd2a0,CONCAT44(uVar2,0xa2));
  }
  else if ((*(int *)(*param_1 + 4) == 0) && (param_11 != 0)) {
    FUN_140d186f0(0x1e,0,0x70,s_D__a_1_s_target_release_build_bo_1413cd310,CONCAT44(uVar2,0xa7));
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x28))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12,param_13);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_140d1d930(param_2,0,param_9);
  FUN_140d1d930(param_3,0,param_5);
  *param_4 = 0;
  return 0;
}


/* address=140d47420 name=FUN_140d47420 */

undefined8
FUN_140d47420(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  iVar1 = FUN_140d49710(param_5,param_6,param_2,param_6);
  if (iVar1 == 0) {
    FUN_140d186f0(0x1e,0,0x73,s_D__a_1_s_target_release_build_bo_1413cd5d0,CONCAT44(uVar2,0xee));
  }
  else if (*(longlong *)(*param_1 + 0x30) == 0) {
    FUN_140d186f0(0x1e,0,0x68,s_D__a_1_s_target_release_build_bo_1413cd640,CONCAT44(uVar2,0xf3));
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x30))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_140d1d930(param_2,0,param_6);
  return 0;
}


/* address=140d47560 name=FUN_140d47560 */

undefined8 FUN_140d47560(undefined8 *param_1)

{
  return *param_1;
}


/* address=140d47580 name=FUN_140d47580 */

void FUN_140d47580(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4d030();
  FUN_140d89380(uVar1,&LAB_140d4d0e0);
  FUN_140d4d020();
  return;
}


/* address=140d475b0 name=FUN_140d475b0 */

void FUN_140d475b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4d110();
  FUN_140d89380(uVar1,&LAB_140d4d1c0);
  FUN_140d4d100();
  return;
}


/* address=140d475e0 name=FUN_140d475e0 */

void FUN_140d475e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4d470();
  FUN_140d89380(uVar1,&LAB_140d4d520);
  FUN_140d4d460();
  return;
}


/* address=140d47610 name=FUN_140d47610 */

void FUN_140d47610(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4d550();
  FUN_140d89380(uVar1,&LAB_140d4d600);
  FUN_140d4d540();
  return;
}


/* address=140d47640 name=FUN_140d47640 */

int FUN_140d47640(byte **param_1,byte *param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int local_18;
  
  if (param_4 == *param_2) {
    *param_1 = param_2;
    if (*(longlong *)(param_2 + 8) == 0) {
      local_18 = (**(code **)(param_2 + 0x10))(param_1,param_3,param_4,param_5,param_6);
    }
    else {
      local_18 = (**(code **)(param_2 + 8))(param_1,param_3,param_4,param_5);
    }
    if (local_18 == 0) {
      *param_1 = (byte *)0x0;
    }
  }
  else {
    FUN_140d186f0(0x1e,0,0x78,s_D__a_1_s_target_release_build_bo_1413cd0e0,0x4e);
    *param_1 = (byte *)0x0;
    local_18 = 0;
  }
  return local_18;
}


/* address=140d47720 name=FUN_140d47720 */

undefined8 FUN_140d47720(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*param_1 + 0x38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140d47770 name=FUN_140d47770 */

undefined8 FUN_140d47770(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*param_1 + 4) == 0) && (param_4 != 0)) {
    FID_conflict__assert((wchar_t *)s_c_1413cd790,(wchar_t *)s_D_1413cd6b0,0x111);
  }
  if (*(longlong *)(*param_1 + 0x40) == 0) {
    if (param_4 + *(byte *)(param_1 + 0x48) < param_4) {
      FUN_140d186f0(0x1e,0,0x45,s_D__a_1_s_target_release_build_bo_1413cd810,0x119);
      *param_2 = 0;
      uVar2 = 0;
    }
    else {
      *param_2 = param_4 + *(byte *)(param_1 + 0x48);
      uVar2 = 1;
    }
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_3,param_4);
    *param_2 = lVar1;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d478a0 name=FUN_140d478a0 */

void FUN_140d478a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4abc0();
  FUN_140d89380(uVar1,&LAB_140d4ac60);
  FUN_140d4abb0();
  return;
}


/* address=140d47960 name=FUN_140d47960 */

void FUN_140d47960(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4b480();
  FUN_140d89380(uVar1,&LAB_140d4b520);
  FUN_140d4b470();
  return;
}


/* address=140d479f0 name=FUN_140d479f0 */

void FUN_140d479f0(undefined8 param_1)

{
  FUN_140d1d930(param_1,0,0x98);
  return;
}


/* address=140d47a60 name=FUN_140d47a60 */

undefined8 FUN_140d47a60(longlong *param_1)

{
  if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x30) != 0)) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  FUN_140d762b0(param_1[2]);
  FUN_140d1d930(param_1,0,0x98);
  return 1;
}


/* address=140d47b10 name=FUN_140d47b10 */

undefined8 FUN_140d47b10(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    FUN_140d186f0(0x1e,0,0x6c,s_D__a_1_s_target_release_build_bo_1413cd880,0x67);
    uVar2 = 0;
  }
  else if (*(int *)(param_2 + 0x12) == 0) {
    FUN_140d47a60(param_1);
    FUN_140d1d890(param_1,param_2,0x98);
    if ((param_2[2] != 0) && (*(int *)(*param_2 + 0x10) != 0)) {
      uVar2 = FUN_140d76180(*(undefined4 *)(*param_2 + 0x10));
      param_1[2] = uVar2;
      if (param_1[2] == 0) {
        *param_1 = 0;
        return 0;
      }
      FUN_140d1d890(param_1[2],param_2[2],*(undefined4 *)(*param_2 + 0x10));
    }
    if (((*(uint *)(*param_2 + 0x14) & 0x1000) != 0) &&
       (iVar1 = (**(code **)(*param_2 + 0x38))(param_2,8,0,param_1), iVar1 == 0)) {
      *param_1 = 0;
      return 0;
    }
    uVar2 = 1;
  }
  else {
    FUN_140d186f0(0x1e,0,0x42,s_D__a_1_s_target_release_build_bo_1413cd8f0,0x6c);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d47cb0 name=FUN_140d47cb0 */

undefined8
FUN_140d47cb0(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_6 == -1) {
    param_6 = *(int *)((longlong)param_1 + 0x1c);
  }
  else {
    if (param_6 != 0) {
      param_6 = 1;
    }
    *(int *)((longlong)param_1 + 0x1c) = param_6;
  }
  if (param_2 == 0) {
    if (*param_1 == 0) {
      FUN_140d186f0(0x1e,0,0x72,s_D__a_1_s_target_release_build_bo_1413cd9d0,0xb8);
      return 0;
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_140d47a60(param_1);
      *(int *)((longlong)param_1 + 0x1c) = param_6;
    }
    *param_1 = param_2;
    if (*(int *)(*param_1 + 0x10) == 0) {
      param_1[2] = 0;
    }
    else {
      lVar4 = FUN_140d76180(*(undefined4 *)(*param_1 + 0x10));
      param_1[2] = lVar4;
      if (param_1[2] == 0) {
        *param_1 = 0;
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 4) = 0;
    if (((*(uint *)(*param_1 + 0x14) & 0x200) != 0) &&
       (iVar1 = FUN_140d48f70(param_1,0,0,0), iVar1 == 0)) {
      *param_1 = 0;
      FUN_140d186f0(0x1e,0,0x6b,s_D__a_1_s_target_release_build_bo_1413cd960,0xb3);
      return 0;
    }
  }
  if (((*(int *)(*param_1 + 4) != 1) && (*(int *)(*param_1 + 4) != 8)) &&
     (*(int *)(*param_1 + 4) != 0x10)) {
    FID_conflict__assert((wchar_t *)s_c_1413cdb20,(wchar_t *)s_D_1413cda40,0xbe);
  }
  uVar2 = FUN_140d48f30(param_1);
  if ((uVar2 & 0x100) == 0) {
    uVar3 = FUN_140d48f50(param_1);
    switch(uVar3) {
    case 0:
    case 1:
      break;
    case 3:
      *(undefined4 *)(param_1 + 0xd) = 0;
    case 2:
      uVar2 = FUN_140d48ed0(param_1);
      if (0x10 < uVar2) {
        FID_conflict__assert((wchar_t *)s_E_1413cdcc0,(wchar_t *)s_D_1413cdbe0,0xcb);
      }
      if (param_5 != 0) {
        uVar3 = FUN_140d48ed0(param_1);
        FUN_140d1d890((longlong)param_1 + 0x24,param_5,uVar3);
      }
      uVar3 = FUN_140d48ed0(param_1);
      FUN_140d1d890((longlong)param_1 + 0x34,(longlong)param_1 + 0x24,uVar3);
      break;
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0xd) = 0;
      if (param_5 != 0) {
        uVar3 = FUN_140d48ed0(param_1);
        FUN_140d1d890((longlong)param_1 + 0x34,param_5,uVar3);
      }
      break;
    default:
      return 0;
    }
  }
  if (((param_4 == 0) && ((*(uint *)(*param_1 + 0x14) & 0x80) == 0)) ||
     (iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_4,param_5,param_6), iVar1 != 0)) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


/* address=140d48040 name=FUN_140d48040 */

void FUN_140d48040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_140d47cb0(param_1,param_2,param_3,param_4,param_5,1);
  return;
}


/* address=140d48090 name=FUN_140d48090 */

void FUN_140d48090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_140d47cb0(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


/* address=140d480e0 name=FUN_140d480e0 */

undefined8
FUN_140d480e0(longlong *param_1,longlong param_2,int *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_res10;
  longlong local_res20;
  
  if (*(int *)(param_1 + 0x12) == 0) {
    *(undefined4 *)(param_1 + 0x12) = 1;
    iVar1 = *(int *)(*param_1 + 4);
    if ((iVar1 < 2) || (param_5 <= 0x7fffffff - iVar1)) {
      if ((*(uint *)(*param_1 + 0x14) & 0x400) == 0) {
        if (param_5 < 1) {
          *param_3 = 0;
          if (param_5 == 0) {
            *(undefined4 *)(param_1 + 0x12) = 0;
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          if ((*(int *)((longlong)param_1 + 100) == 0) &&
             (iVar2 = FUN_140d49780(param_1,param_5), iVar2 == 0)) {
            iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4,(longlong)param_5);
            if (iVar1 != 0) {
              *param_3 = param_5;
              *(undefined4 *)(param_1 + 0x12) = 0;
              return 1;
            }
            *param_3 = 0;
            return 0;
          }
          iVar2 = *(int *)((longlong)param_1 + 100);
          if (0x20 < iVar1) {
            FID_conflict__assert((wchar_t *)s_b_1413ce170,(wchar_t *)s_D_1413ce090,0x134);
          }
          if (iVar2 == 0) {
            *param_3 = 0;
            local_res10 = param_2;
            local_res20 = param_4;
          }
          else {
            if (param_5 < iVar1 - iVar2) {
              FUN_140d1d890((longlong)param_1 + (longlong)iVar2 + 0x44,param_4,(longlong)param_5);
              *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + param_5;
              *param_3 = 0;
              *(undefined4 *)(param_1 + 0x12) = 0;
              return 1;
            }
            iVar4 = iVar1 - iVar2;
            FUN_140d1d890((longlong)param_1 + (longlong)iVar2 + 0x44,param_4,(longlong)iVar4);
            iVar2 = (**(code **)(*param_1 + 0x28))
                              (param_1,param_2,(longlong)param_1 + 0x44,(longlong)iVar1);
            if (iVar2 == 0) {
              return 0;
            }
            param_5 = param_5 - iVar4;
            local_res20 = param_4 + iVar4;
            local_res10 = param_2 + iVar1;
            *param_3 = iVar1;
          }
          iVar1 = FUN_140d49780(param_1,param_5);
          param_5 = param_5 - iVar1;
          if (0 < param_5) {
            iVar2 = (**(code **)(*param_1 + 0x28))
                              (param_1,local_res10,local_res20,(longlong)param_5);
            if (iVar2 == 0) {
              return 0;
            }
            *param_3 = *param_3 + param_5;
          }
          if (iVar1 != 0) {
            FUN_140d1d890((longlong)param_1 + 0x44,local_res20 + param_5,(longlong)iVar1);
          }
          *(int *)((longlong)param_1 + 100) = iVar1;
          *(undefined4 *)(param_1 + 0x12) = 0;
          uVar3 = 1;
        }
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4,(longlong)param_5);
        if (iVar1 < 0) {
          uVar3 = 0;
        }
        else {
          *param_3 = iVar1;
          *(undefined4 *)(param_1 + 0x12) = 0;
          uVar3 = 1;
        }
      }
    }
    else {
      FUN_140d186f0(0x1e,0,0x45,s_D__a_1_s_target_release_build_bo_1413ce020,0x110);
      uVar3 = 0;
    }
  }
  else {
    FUN_140d186f0(0x1e,0,0x42,s_D__a_1_s_target_release_build_bo_1413cdfb0,0x104);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d485e0 name=FUN_140d485e0 */

undefined8 FUN_140d485e0(longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_24;
  char local_18;
  
  if (*(int *)(param_1 + 0x12) == 0) {
    if ((*(uint *)(*param_1 + 0x14) & 0x400) == 0) {
      uVar1 = *(uint *)(*param_1 + 4);
      if (0x20 < uVar1) {
        FID_conflict__assert((wchar_t *)s_b_1413ce300,(wchar_t *)s_D_1413ce220,0x172);
      }
      if (uVar1 == 1) {
        *param_3 = 0;
      }
      else {
        local_24 = *(uint *)((longlong)param_1 + 100);
        if ((*(uint *)(param_1 + 4) & 0x800) == 0) {
          local_18 = (char)uVar1 - (char)local_24;
          for (; local_24 < uVar1; local_24 = local_24 + 1) {
            *(char *)((longlong)param_1 + (ulonglong)local_24 + 0x44) = local_18;
          }
          iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,(longlong)param_1 + 0x44,uVar1);
          if (iVar2 == 0) {
            return 0;
          }
          *param_3 = uVar1;
        }
        else {
          if (local_24 != 0) {
            FUN_140d186f0(0x1e,0,0x6a,s_D__a_1_s_target_release_build_bo_1413ce330,0x17b);
            return 0;
          }
          *param_3 = 0;
        }
      }
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,0,0);
      if ((int)uVar1 < 0) {
        return 0;
      }
      *param_3 = uVar1;
    }
    FUN_140d27330(param_1);
    uVar3 = 1;
  }
  else {
    FUN_140d186f0(0x1e,0,0x42,s_D__a_1_s_target_release_build_bo_1413ce1b0,0x161);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d487d0 name=FUN_140d487d0 */

ulonglong FUN_140d487d0(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4,
                       int param_5)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong local_res10;
  
  if (*(int *)(param_1 + 0x12) == 0) {
    uVar1 = *(uint *)(*param_1 + 4);
    if ((uVar1 < 2) || (param_5 <= (int)(0x7fffffff - uVar1))) {
      if ((*(uint *)(*param_1 + 0x14) & 0x400) == 0) {
        if (param_5 < 1) {
          *param_3 = 0;
          uVar3 = (ulonglong)(param_5 == 0);
        }
        else if ((*(uint *)(param_1 + 4) & 0x800) == 0) {
          if (0x20 < uVar1) {
            FID_conflict__assert((wchar_t *)s_b_1413ce560,(wchar_t *)s_D_1413ce480,0x1b3);
          }
          bVar4 = *(int *)((longlong)param_1 + 0x6c) != 0;
          local_res10 = param_2;
          if (bVar4) {
            FUN_140d1d890(param_2,param_1 + 0xe,uVar1);
            local_res10 = param_2 + (ulonglong)uVar1;
          }
          iVar2 = FUN_140d480e0(param_1,local_res10,param_3,param_4,param_5);
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            if ((uVar1 < 2) || (*(int *)((longlong)param_1 + 100) != 0)) {
              *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
            }
            else {
              *param_3 = *param_3 - uVar1;
              *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
              FUN_140d1d890(param_1 + 0xe,local_res10 + *param_3,uVar1);
            }
            if (bVar4) {
              *param_3 = *param_3 + uVar1;
            }
            uVar3 = 1;
          }
        }
        else {
          uVar3 = FUN_140d480e0(param_1,param_2,param_3,param_4,param_5);
        }
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4,(longlong)param_5);
        if (iVar2 < 0) {
          *param_3 = 0;
          uVar3 = 0;
        }
        else {
          *param_3 = iVar2;
          uVar3 = 1;
        }
      }
    }
    else {
      FUN_140d186f0(0x1e,0,0x45,s_D__a_1_s_target_release_build_bo_1413ce410,0x19b);
      uVar3 = 0;
    }
  }
  else {
    FUN_140d186f0(0x1e,0,0x42,s_D__a_1_s_target_release_build_bo_1413ce3a0,0x193);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d48aa0 name=FUN_140d48aa0 */

undefined8 FUN_140d48aa0(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int local_18;
  uint local_10;
  
  *param_3 = 0;
  if (*(int *)(param_1 + 0x12) != 0) {
    FUN_140d186f0(0x1e,0,0x42,s_D__a_1_s_target_release_build_bo_1413ce590,0x1d6);
    return 0;
  }
  if ((*(uint *)(*param_1 + 0x14) & 0x400) == 0) {
    local_10 = *(uint *)(*param_1 + 4);
    if ((*(uint *)(param_1 + 4) & 0x800) == 0) {
      if (local_10 < 2) {
        *param_3 = 0;
      }
      else {
        if ((*(int *)((longlong)param_1 + 100) != 0) || (*(int *)((longlong)param_1 + 0x6c) == 0)) {
          FUN_140d186f0(0x1e,0,0x7b,s_D__a_1_s_target_release_build_bo_1413ce670,0x1f0);
          return 0;
        }
        if (0x20 < local_10) {
          FID_conflict__assert((wchar_t *)s_b_1413ce7c0,(wchar_t *)s_D_1413ce6e0,499);
        }
        uVar2 = (uint)*(byte *)((longlong)param_1 + (ulonglong)(local_10 - 1) + 0x70);
        if ((uVar2 == 0) || ((int)local_10 < (int)uVar2)) {
          FUN_140d186f0(0x1e,0,0x65,s_D__a_1_s_target_release_build_bo_1413ce7f0,0x1f9);
          return 0;
        }
        for (local_18 = 0; local_18 < (int)uVar2; local_18 = local_18 + 1) {
          local_10 = local_10 - 1;
          if (*(byte *)((longlong)param_1 + (ulonglong)local_10 + 0x70) != uVar2) {
            FUN_140d186f0(0x1e,0,0x65,s_D__a_1_s_target_release_build_bo_1413ce860,0x1ff);
            return 0;
          }
        }
        iVar1 = *(int *)(*param_1 + 4) - uVar2;
        for (local_18 = 0; local_18 < iVar1; local_18 = local_18 + 1) {
          *(undefined *)(param_2 + local_18) =
               *(undefined *)((longlong)param_1 + (longlong)local_18 + 0x70);
        }
        *param_3 = iVar1;
      }
    }
    else {
      if (*(int *)((longlong)param_1 + 100) != 0) {
        FUN_140d186f0(0x1e,0,0x6a,s_D__a_1_s_target_release_build_bo_1413ce600,0x1e7);
        return 0;
      }
      *param_3 = 0;
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,0,0);
    if (iVar1 < 0) {
      return 0;
    }
    *param_3 = iVar1;
  }
  FUN_140d27330(param_1);
  return 1;
}


/* address=140d48d50 name=FUN_140d48d50 */

void FUN_140d48d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_140d487d0(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_140d480e0(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


/* address=140d48dd0 name=FUN_140d48dd0 */

void FUN_140d48dd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_140d48aa0(param_1,param_2,param_3);
  }
  else {
    FUN_140d485e0(param_1,param_2,param_3);
  }
  return;
}


/* address=140d48e90 name=FUN_140d48e90 */

undefined4 FUN_140d48e90(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}


/* address=140d48eb0 name=FUN_140d48eb0 */

undefined4 FUN_140d48eb0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


/* address=140d48ed0 name=FUN_140d48ed0 */

undefined4 FUN_140d48ed0(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 0xc);
}


/* address=140d48f30 name=FUN_140d48f30 */

uint FUN_140d48f30(longlong *param_1)

{
  return *(uint *)(*param_1 + 0x14) & 0xffffffc0;
}


/* address=140d48f50 name=FUN_140d48f50 */

uint FUN_140d48f50(longlong *param_1)

{
  return *(uint *)(*param_1 + 0x14) & 0x3f;
}


/* address=140d48f70 name=FUN_140d48f70 */

int FUN_140d48f70(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (*param_1 == 0) {
    FUN_140d186f0(0x1e,0,0x72,s_D__a_1_s_target_release_build_bo_1413ce8d0,0x263);
    iVar1 = 0;
  }
  else if (*(longlong *)(*param_1 + 0x38) == 0) {
    FUN_140d186f0(0x1e,0,0x68,s_D__a_1_s_target_release_build_bo_1413ce940,0x268);
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4);
    if (iVar1 == -1) {
      FUN_140d186f0(0x1e,0,0x69,s_D__a_1_s_target_release_build_bo_1413ce9b0,0x26e);
      iVar1 = 0;
    }
  }
  return iVar1;
}


/* address=140d49050 name=FUN_140d49050 */

undefined8 FUN_140d49050(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x800;
  }
  else {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffff7ff;
  }
  return 1;
}


/* address=140d49120 name=FUN_140d49120 */

undefined4 FUN_140d49120(undefined4 *param_1)

{
  return *param_1;
}


/* address=140d49140 name=FUN_140d49140 */

undefined4 FUN_140d49140(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* address=140d49160 name=FUN_140d49160 */

undefined4 FUN_140d49160(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


/* address=140d49180 name=FUN_140d49180 */

undefined4 FUN_140d49180(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


/* address=140d491e0 name=FUN_140d491e0 */

void FUN_140d491e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  if (param_2 != 0) {
    FUN_140d479f0(param_1);
  }
  FUN_140d47cb0(param_1,param_2,0,param_3,param_4,param_5);
  return;
}


/* address=140d493a0 name=FUN_140d493a0 */

int FUN_140d493a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4);
  if (((*(uint *)(*param_1 + 0x14) & 0x400) == 0) && (iVar1 != 0)) {
    FUN_140d27330(param_1);
  }
  return iVar1;
}


/* address=140d494c0 name=FUN_140d494c0 */

void FUN_140d494c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4b020();
  FUN_140d89380(uVar1,&LAB_140d4b0c0);
  FUN_140d4b010();
  return;
}


/* address=140d49590 name=FUN_140d49590 */

undefined *
FUN_140d49590(undefined8 param_1,longlong param_2,code **param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined *puVar2;
  
  if (((param_5 != 0x10) && (param_5 != 0x18)) && (param_5 != 0x20)) {
    FID_conflict__assert((wchar_t *)s_k_1413cece0,(wchar_t *)s_D_1413cec00,0x126);
  }
  iVar1 = FUN_140d1ed80();
  if (iVar1 == 0) {
    iVar1 = FUN_140d1eda0();
    if (iVar1 == 0) {
      FUN_140d1ee20(param_4,(int)param_5 << 3,param_1);
      if (param_2 != 0) {
        FUN_140d1fde0(param_2,param_1,FUN_140d1eee0,0);
      }
      if (param_3 != (code **)0x0) {
        *param_3 = FUN_140d1eee0;
      }
      puVar2 = &LAB_140d1f040;
    }
    else {
      FUN_140ca49d0(param_4,(int)param_5 << 3,param_1);
      if (param_3 != (code **)0x0) {
        *param_3 = FUN_140ca4ba0;
      }
      if (param_2 != 0) {
        FUN_140d1fde0(param_2,param_1,FUN_140ca4ba0,0);
      }
      puVar2 = &DAT_140ca4ea0;
    }
  }
  else {
    FUN_140ca38e0(param_4,(int)param_5 << 3,param_1);
    if (param_2 != 0) {
      FUN_140d1fde0(param_2,param_1,FUN_140ca1680,1);
    }
    if (param_3 != (code **)0x0) {
      *param_3 = FUN_140ca1680;
    }
    puVar2 = &DAT_140ca23e0;
  }
  return puVar2;
}


/* address=140d49710 name=FUN_140d49710 */

bool FUN_140d49710(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_140d1d430(param_1,param_2,param_3,param_4);
  return iVar1 == 0 || param_1 == param_3;
}


/* address=140d49780 name=FUN_140d49780 */

uint FUN_140d49780(longlong *param_1,uint param_2)

{
  if (*(int *)(*param_1 + 4) == 0) {
    FID_conflict__assert((wchar_t *)s_c_1413cde10,(wchar_t *)s_D_1413cdd30,0xfc);
  }
  if ((*(uint *)(*param_1 + 4) & *(int *)(*param_1 + 4) - 1U) != 0) {
    FID_conflict__assert((wchar_t *)s___1413cdf30,(wchar_t *)s_D_1413cde50,0xfd);
  }
  return param_2 & *(int *)(*param_1 + 4) - 1U;
}


/* address=140d49fc0 name=FUN_140d49fc0 */

longlong FUN_140d49fc0(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(*param_1 + 0x10) != 0x2a8) {
    FID_conflict__assert((wchar_t *)s_c_1413cee50,(wchar_t *)s_D_1413ced70,0x15c);
  }
  uVar1 = param_1[2];
  if (uVar1 % 8 != 0) {
    FID_conflict__assert((wchar_t *)s___1413cefd0,(wchar_t *)s_D_1413ceef0,0x163);
  }
  return uVar1 + (uVar1 & 8);
}


/* address=140d4a2e0 name=FUN_140d4a2e0 */

void FUN_140d4a2e0(longlong param_1)

{
  char cVar1;
  int local_14;
  
  local_14 = 8;
  do {
    local_14 = local_14 + -1;
    cVar1 = *(char *)(param_1 + local_14) + '\x01';
    *(char *)(param_1 + local_14) = cVar1;
    if (cVar1 != '\0') {
      return;
    }
  } while (local_14 != 0);
  return;
}


/* address=140d4abb0 name=FUN_140d4abb0 */

undefined * FUN_140d4abb0(void)

{
  return &DAT_14140fa10;
}


/* address=140d4abc0 name=FUN_140d4abc0 */

undefined * FUN_140d4abc0(void)

{
  return &DAT_14140fa50;
}


/* address=140d4abd0 name=FUN_140d4abd0 */

void FUN_140d4abd0(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1a3;
  param_1[1] = 0x10;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 2;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49c40;
  return;
}


/* address=140d4ac80 name=FUN_140d4ac80 */

undefined * FUN_140d4ac80(void)

{
  return &DAT_14140fa60;
}


/* address=140d4ac90 name=FUN_140d4ac90 */

undefined * FUN_140d4ac90(void)

{
  return &DAT_14140fa58;
}


/* address=140d4aca0 name=FUN_140d4aca0 */

void FUN_140d4aca0(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x388;
  param_1[1] = 1;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 5;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49e40;
  return;
}


/* address=140d4ad50 name=FUN_140d4ad50 */

undefined * FUN_140d4ad50(void)

{
  return &DAT_14140faa0;
}


/* address=140d4ad60 name=FUN_140d4ad60 */

undefined * FUN_140d4ad60(void)

{
  return &DAT_14140fae0;
}


/* address=140d4ad70 name=FUN_140d4ad70 */

void FUN_140d4ad70(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1a2;
  param_1[1] = 0x10;
  param_1[2] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49d50;
  return;
}


/* address=140d4ae20 name=FUN_140d4ae20 */

void FUN_140d4ae20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4ad60();
  FUN_140d89380(uVar1,&LAB_140d4ae00);
  FUN_140d4ad50();
  return;
}


/* address=140d4ae50 name=FUN_140d4ae50 */

undefined * FUN_140d4ae50(void)

{
  return &DAT_14140faf0;
}


/* address=140d4ae60 name=FUN_140d4ae60 */

undefined * FUN_140d4ae60(void)

{
  return &DAT_14140fae8;
}


/* address=140d4ae70 name=FUN_140d4ae70 */

void FUN_140d4ae70(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1a4;
  param_1[1] = 1;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 4;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49f40;
  return;
}


/* address=140d4af20 name=FUN_140d4af20 */

undefined * FUN_140d4af20(void)

{
  return &DAT_14140fb30;
}


/* address=140d4af30 name=FUN_140d4af30 */

undefined * FUN_140d4af30(void)

{
  return &DAT_14140fb70;
}


/* address=140d4af40 name=FUN_140d4af40 */

void FUN_140d4af40(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x37f;
  param_1[1] = 1;
  param_1[2] = 0x10;
  param_1[3] = 0xc;
  param_1[4] = 0x2a8;
  param_1[5] = 0x1f86;
  *(undefined **)(param_1 + 8) = &LAB_140d4a060;
  *(undefined **)(param_1 + 10) = &LAB_140d4a900;
  *(undefined **)(param_1 + 0xc) = &LAB_140d4a280;
  *(undefined **)(param_1 + 0xe) = &LAB_140d4a350;
  return;
}


/* address=140d4b010 name=FUN_140d4b010 */

undefined * FUN_140d4b010(void)

{
  return &DAT_14140fb80;
}


/* address=140d4b020 name=FUN_140d4b020 */

undefined * FUN_140d4b020(void)

{
  return &DAT_14140fb78;
}


/* address=140d4b030 name=FUN_140d4b030 */

void FUN_140d4b030(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1a7;
  param_1[1] = 0x10;
  param_1[2] = 0x18;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 2;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49c40;
  return;
}


/* address=140d4b0e0 name=FUN_140d4b0e0 */

undefined * FUN_140d4b0e0(void)

{
  return &DAT_14140fbc0;
}


/* address=140d4b0f0 name=FUN_140d4b0f0 */

undefined * FUN_140d4b0f0(void)

{
  return &DAT_14140fc00;
}


/* address=140d4b100 name=FUN_140d4b100 */

void FUN_140d4b100(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x389;
  param_1[1] = 1;
  param_1[2] = 0x18;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 5;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49e40;
  return;
}


/* address=140d4b1b0 name=FUN_140d4b1b0 */

undefined * FUN_140d4b1b0(void)

{
  return &DAT_14140fc10;
}


/* address=140d4b1c0 name=FUN_140d4b1c0 */

undefined * FUN_140d4b1c0(void)

{
  return &DAT_14140fc08;
}


/* address=140d4b1d0 name=FUN_140d4b1d0 */

void FUN_140d4b1d0(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1a6;
  param_1[1] = 0x10;
  param_1[2] = 0x18;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49d50;
  return;
}


/* address=140d4b280 name=FUN_140d4b280 */

void FUN_140d4b280(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4b1c0();
  FUN_140d89380(uVar1,&LAB_140d4b260);
  FUN_140d4b1b0();
  return;
}


/* address=140d4b2b0 name=FUN_140d4b2b0 */

undefined * FUN_140d4b2b0(void)

{
  return &DAT_14140fc50;
}


/* address=140d4b2c0 name=FUN_140d4b2c0 */

undefined * FUN_140d4b2c0(void)

{
  return &DAT_14140fc90;
}


/* address=140d4b2d0 name=FUN_140d4b2d0 */

void FUN_140d4b2d0(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1a8;
  param_1[1] = 1;
  param_1[2] = 0x18;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 4;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49f40;
  return;
}


/* address=140d4b380 name=FUN_140d4b380 */

undefined * FUN_140d4b380(void)

{
  return &DAT_14140fca0;
}


/* address=140d4b390 name=FUN_140d4b390 */

undefined * FUN_140d4b390(void)

{
  return &DAT_14140fc98;
}


/* address=140d4b3a0 name=FUN_140d4b3a0 */

void FUN_140d4b3a0(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x382;
  param_1[1] = 1;
  param_1[2] = 0x18;
  param_1[3] = 0xc;
  param_1[4] = 0x2a8;
  param_1[5] = 0x1f86;
  *(undefined **)(param_1 + 8) = &LAB_140d4a060;
  *(undefined **)(param_1 + 10) = &LAB_140d4a900;
  *(undefined **)(param_1 + 0xc) = &LAB_140d4a280;
  *(undefined **)(param_1 + 0xe) = &LAB_140d4a350;
  return;
}


/* address=140d4b470 name=FUN_140d4b470 */

undefined * FUN_140d4b470(void)

{
  return &DAT_14140fce0;
}


/* address=140d4b480 name=FUN_140d4b480 */

undefined * FUN_140d4b480(void)

{
  return &DAT_14140fd20;
}


/* address=140d4b490 name=FUN_140d4b490 */

void FUN_140d4b490(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1ab;
  param_1[1] = 0x10;
  param_1[2] = 0x20;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 2;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49c40;
  return;
}


/* address=140d4b540 name=FUN_140d4b540 */

undefined * FUN_140d4b540(void)

{
  return &DAT_14140fd30;
}


/* address=140d4b550 name=FUN_140d4b550 */

undefined * FUN_140d4b550(void)

{
  return &DAT_14140fd28;
}


/* address=140d4b560 name=FUN_140d4b560 */

void FUN_140d4b560(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x38a;
  param_1[1] = 1;
  param_1[2] = 0x20;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 5;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49e40;
  return;
}


/* address=140d4b610 name=FUN_140d4b610 */

undefined * FUN_140d4b610(void)

{
  return &DAT_14140fd70;
}


/* address=140d4b620 name=FUN_140d4b620 */

undefined * FUN_140d4b620(void)

{
  return &DAT_14140fdb0;
}


/* address=140d4b630 name=FUN_140d4b630 */

void FUN_140d4b630(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1aa;
  param_1[1] = 0x10;
  param_1[2] = 0x20;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49d50;
  return;
}


/* address=140d4b6e0 name=FUN_140d4b6e0 */

void FUN_140d4b6e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4b620();
  FUN_140d89380(uVar1,&LAB_140d4b6c0);
  FUN_140d4b610();
  return;
}


/* address=140d4b710 name=FUN_140d4b710 */

undefined * FUN_140d4b710(void)

{
  return &DAT_14140fdc0;
}


/* address=140d4b720 name=FUN_140d4b720 */

undefined * FUN_140d4b720(void)

{
  return &DAT_14140fdb8;
}


/* address=140d4b730 name=FUN_140d4b730 */

void FUN_140d4b730(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1ac;
  param_1[1] = 1;
  param_1[2] = 0x20;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 4;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d49f40;
  return;
}


/* address=140d4b7e0 name=FUN_140d4b7e0 */

undefined * FUN_140d4b7e0(void)

{
  return &DAT_14140fe00;
}


/* address=140d4b7f0 name=FUN_140d4b7f0 */

undefined * FUN_140d4b7f0(void)

{
  return &DAT_14140fe40;
}


/* address=140d4b800 name=FUN_140d4b800 */

void FUN_140d4b800(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x385;
  param_1[1] = 1;
  param_1[2] = 0x20;
  param_1[3] = 0xc;
  param_1[4] = 0x2a8;
  param_1[5] = 0x1f86;
  *(undefined **)(param_1 + 8) = &LAB_140d4a060;
  *(undefined **)(param_1 + 10) = &LAB_140d4a900;
  *(undefined **)(param_1 + 0xc) = &LAB_140d4a280;
  *(undefined **)(param_1 + 0xe) = &LAB_140d4a350;
  return;
}


/* address=140d4b950 name=FUN_140d4b950 */

undefined * FUN_140d4b950(void)

{
  return &DAT_14140fe50;
}


/* address=140d4b960 name=FUN_140d4b960 */

undefined * FUN_140d4b960(void)

{
  return &DAT_14140fe48;
}


/* address=140d4b970 name=FUN_140d4b970 */

void FUN_140d4b970(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1a2;
  param_1[1] = 0x10;
  param_1[2] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d4b8d0;
  return;
}


/* address=140d4ba20 name=FUN_140d4ba20 */

void FUN_140d4ba20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4b960();
  FUN_140d89380(uVar1,&LAB_140d4ba00);
  FUN_140d4b950();
  return;
}


/* address=140d4ba50 name=FUN_140d4ba50 */

undefined * FUN_140d4ba50(void)

{
  return &DAT_14140fe90;
}


/* address=140d4ba60 name=FUN_140d4ba60 */

undefined * FUN_140d4ba60(void)

{
  return &DAT_14140fed0;
}


/* address=140d4ba70 name=FUN_140d4ba70 */

void FUN_140d4ba70(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1a6;
  param_1[1] = 0x10;
  param_1[2] = 0x18;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d4b8d0;
  return;
}


/* address=140d4bb20 name=FUN_140d4bb20 */

void FUN_140d4bb20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4ba60();
  FUN_140d89380(uVar1,&LAB_140d4bb00);
  FUN_140d4ba50();
  return;
}


/* address=140d4bb50 name=FUN_140d4bb50 */

undefined * FUN_140d4bb50(void)

{
  return &DAT_14140fee0;
}


/* address=140d4bb60 name=FUN_140d4bb60 */

undefined * FUN_140d4bb60(void)

{
  return &DAT_14140fed8;
}


/* address=140d4bb70 name=FUN_140d4bb70 */

void FUN_140d4bb70(undefined4 *param_1)

{
  FUN_140e9a3c0(param_1,0,0x40);
  *param_1 = 0x1aa;
  param_1[1] = 0x10;
  param_1[2] = 0x20;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d49810;
  *(undefined **)(param_1 + 10) = &LAB_140d4b8d0;
  return;
}


/* address=140d4bc20 name=FUN_140d4bc20 */

void FUN_140d4bc20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d4bb60();
  FUN_140d89380(uVar1,&LAB_140d4bc00);
  FUN_140d4bb50();
  return;
}


/* address=140d4bc50 name=FUN_140d4bc50 */

undefined8
FUN_140d4bc50(longlong param_1,ulonglong *param_2,undefined8 param_3,longlong param_4,
             ulonglong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_4 << 3;
  if (lVar1 == 0x80) {
    FUN_140d1dc20(0);
  }
  else if (lVar1 == 0x100) {
    FUN_140d1dc20(1);
  }
  if (((lVar1 == 0x80) || (lVar1 == 0xc0)) || (lVar1 == 0x100)) {
    if (param_5 == 0) {
      param_5 = 0x10;
    }
    if (param_5 < 0x11) {
      uVar2 = FUN_140d49590(param_1,param_1 + 0xf8,0,param_3,param_4);
      *(undefined8 *)(param_1 + 0x218) = uVar2;
      *param_2 = param_5;
      uVar2 = 1;
    }
    else {
      FUN_140d186f0(0x1e,0,0x74,s_D__a_1_s_target_release_build_bo_1413cf070,0x39c);
      uVar2 = 0;
    }
  }
  else {
    FUN_140d186f0(0x1e,0,0x66,s_D__a_1_s_target_release_build_bo_1413cf000,0x393);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d4bd90 name=FUN_140d4bd90 */

bool FUN_140d4bd90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined local_10 [16];
  
  iVar1 = FUN_140d4bc50(param_1 + 8,local_10,param_2,param_3,param_4);
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0x240) = local_10[0];
  }
  return iVar1 != 0;
}


/* address=140d4be20 name=FUN_140d4be20 */

void FUN_140d4be20(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  ulonglong param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                  longlong param_9,undefined8 param_10,longlong param_11,undefined8 param_12,
                  longlong param_13,ulonglong param_14)

{
  int iVar1;
  undefined auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined local_198 [80];
  undefined local_148 [304];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_1d8;
  if (param_11 + param_14 < param_14) {
    local_1b8 = CONCAT44(local_1b8._4_4_,0x3c6);
    FUN_140d186f0(0x1e,0,0x75,s_D__a_1_s_target_release_build_bo_1413cf0e0);
  }
  else if (param_5 < param_11 + param_14) {
    local_1b8 = CONCAT44(local_1b8._4_4_,0x3ca);
    FUN_140d186f0(0x1e,0,0x67,s_D__a_1_s_target_release_build_bo_1413cf150);
  }
  else if (param_7 == 0) {
    local_1b8 = CONCAT44(local_1b8._4_4_,0x3ce);
    FUN_140d186f0(0x1e,0,0x6f,s_D__a_1_s_target_release_build_bo_1413cf1c0);
  }
  else {
    local_1a8 = param_1;
    FUN_140d1d930(local_198,0,0x180);
    FUN_140d1d890(local_148,param_1 + 0xf8,0x120);
    FUN_140d1ff00(local_198,local_1a8,param_6,param_7);
    if ((param_13 == 0) || (iVar1 = FUN_140d201a0(local_198,param_12,param_13), iVar1 != 0)) {
      if (*(longlong *)(param_1 + 0x218) == 0) {
        local_1b8 = param_9;
        iVar1 = FUN_140d203f0(local_198,local_1a8,param_8,param_2);
      }
      else {
        local_1b0 = *(undefined8 *)(param_1 + 0x218);
        local_1b8 = param_9;
        iVar1 = FUN_140d20ef0(local_198,local_1a8,param_8,param_2);
      }
      if (iVar1 != 0) {
        if (param_11 != 0) {
          if (*(longlong *)(param_1 + 0x218) == 0) {
            local_1b8 = param_11;
            iVar1 = FUN_140d203f0(local_198,local_1a8,param_10,param_3);
          }
          else {
            local_1b0 = *(undefined8 *)(param_1 + 0x218);
            local_1b8 = param_11;
            iVar1 = FUN_140d20ef0(local_198,local_1a8,param_10,param_3);
          }
          if (iVar1 == 0) goto LAB_140d4c12b;
        }
        FUN_140d21c70(local_198,param_3 + param_11,param_14);
        *param_4 = param_14 + param_11;
      }
    }
  }
LAB_140d4c12b:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_1d8);
  return;
}


/* address=140d4c150 name=FUN_140d4c150 */

void FUN_140d4c150(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  FUN_140d4be20(param_1 + 8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                ,param_11,param_12,param_13,*(undefined *)(param_1 + 0x240));
  return;
}


/* address=140d4c240 name=FUN_140d4c240 */

void FUN_140d4c240(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11)

{
  int iVar1;
  undefined auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined local_1a8 [80];
  undefined local_158 [304];
  undefined local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_1e8;
  if (param_4 == 0) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x415);
    FUN_140d186f0(0x1e,0,0x6f,s_D__a_1_s_target_release_build_bo_1413cf230);
  }
  else if (param_8 == param_11) {
    local_1b8 = param_1;
    FUN_140d1d930(local_1a8,0,0x180);
    FUN_140d1d890(local_158,param_1 + 0xf8,0x120);
    FUN_140d1ff00(local_1a8,local_1b8,param_3,param_4);
    iVar1 = FUN_140d201a0(local_1a8,param_9,param_10);
    if (iVar1 != 0) {
      if (*(longlong *)(param_1 + 0x218) == 0) {
        local_1c8 = param_6;
        iVar1 = FUN_140d20990(local_1a8,local_1b8,param_5,param_2);
      }
      else {
        local_1c0 = *(undefined8 *)(param_1 + 0x218);
        local_1c8 = param_6;
        iVar1 = FUN_140d21500(local_1a8,local_1b8,param_5,param_2);
      }
      if (iVar1 != 0) {
        FUN_140d21c70(local_1a8,local_28,param_11);
        iVar1 = FUN_140d76480(local_28,param_7,param_11);
        if (iVar1 != 0) {
          local_1c8 = CONCAT44(local_1c8._4_4_,0x436);
          FUN_140d186f0(0x1e,0,0x65,s_D__a_1_s_target_release_build_bo_1413cf310);
        }
      }
    }
  }
  else {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x41a);
    FUN_140d186f0(0x1e,0,0x65,s_D__a_1_s_target_release_build_bo_1413cf2a0);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_1e8);
  return;
}


/* address=140d4c560 name=FUN_140d4c560 */

undefined * FUN_140d4c560(void)

{
  return &DAT_14140ff20;
}


/* address=140d4c570 name=FUN_140d4c570 */

undefined * FUN_140d4c570(void)

{
  return &DAT_14140ff68;
}


/* address=140d4c580 name=FUN_140d4c580 */

void FUN_140d4c580(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(code **)(param_1 + 8) = FUN_140d4bd90;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4be10;
  *(code **)(param_1 + 0x28) = FUN_140d4c150;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4c480;
  return;
}


/* address=140d4c640 name=FUN_140d4c640 */

undefined * FUN_140d4c640(void)

{
  return &DAT_14140ff70;
}


/* address=140d4c650 name=FUN_140d4c650 */

undefined * FUN_140d4c650(void)

{
  return &DAT_14140ffb8;
}


/* address=140d4c660 name=FUN_140d4c660 */

void FUN_140d4c660(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x18;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(code **)(param_1 + 8) = FUN_140d4bd90;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4be10;
  *(code **)(param_1 + 0x28) = FUN_140d4c150;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4c480;
  return;
}


/* address=140d4c720 name=FUN_140d4c720 */

undefined * FUN_140d4c720(void)

{
  return &DAT_14140ffc0;
}


/* address=140d4c730 name=FUN_140d4c730 */

undefined * FUN_140d4c730(void)

{
  return &DAT_141410008;
}


/* address=140d4c740 name=FUN_140d4c740 */

void FUN_140d4c740(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x20;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(code **)(param_1 + 8) = FUN_140d4bd90;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4be10;
  *(code **)(param_1 + 0x28) = FUN_140d4c150;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4c480;
  return;
}


/* address=140d4cc30 name=FUN_140d4cc30 */

undefined * FUN_140d4cc30(void)

{
  return &DAT_141410010;
}


/* address=140d4cc40 name=FUN_140d4cc40 */

undefined * FUN_140d4cc40(void)

{
  return &DAT_141410058;
}


/* address=140d4cc50 name=FUN_140d4cc50 */

void FUN_140d4cc50(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0;
  param_1[2] = 0x1c;
  param_1[3] = 0x1c;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d4c800;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4be10;
  *(undefined **)(param_1 + 0x28) = &LAB_140d4c8b0;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4cad0;
  return;
}


/* address=140d4cd10 name=FUN_140d4cd10 */

undefined * FUN_140d4cd10(void)

{
  return &DAT_141410060;
}


/* address=140d4cd20 name=FUN_140d4cd20 */

undefined * FUN_140d4cd20(void)

{
  return &DAT_1414100a8;
}


/* address=140d4cd30 name=FUN_140d4cd30 */

void FUN_140d4cd30(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x20;
  param_1[1] = 0;
  param_1[2] = 0x1c;
  param_1[3] = 0x1c;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d4c800;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4be10;
  *(undefined **)(param_1 + 0x28) = &LAB_140d4c8b0;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4cad0;
  return;
}


/* address=140d4d020 name=FUN_140d4d020 */

undefined * FUN_140d4d020(void)

{
  return &DAT_1414100b0;
}


/* address=140d4d030 name=FUN_140d4d030 */

undefined * FUN_140d4d030(void)

{
  return &DAT_1414100f8;
}


/* address=140d4d040 name=FUN_140d4d040 */

void FUN_140d4d040(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d4cdf0;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4be10;
  *(undefined **)(param_1 + 0x28) = &LAB_140d4ce80;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4c480;
  return;
}


/* address=140d4d100 name=FUN_140d4d100 */

undefined * FUN_140d4d100(void)

{
  return &DAT_141410100;
}


/* address=140d4d110 name=FUN_140d4d110 */

undefined * FUN_140d4d110(void)

{
  return &DAT_141410148;
}


/* address=140d4d120 name=FUN_140d4d120 */

void FUN_140d4d120(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x20;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d4cdf0;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4be10;
  *(undefined **)(param_1 + 0x28) = &LAB_140d4ce80;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4c480;
  return;
}


/* address=140d4d460 name=FUN_140d4d460 */

undefined * FUN_140d4d460(void)

{
  return &DAT_141410150;
}


/* address=140d4d470 name=FUN_140d4d470 */

undefined * FUN_140d4d470(void)

{
  return &DAT_141410198;
}


/* address=140d4d480 name=FUN_140d4d480 */

void FUN_140d4d480(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d4d1e0;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4be10;
  *(undefined **)(param_1 + 0x28) = &LAB_140d4d270;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4c480;
  return;
}


/* address=140d4d540 name=FUN_140d4d540 */

undefined * FUN_140d4d540(void)

{
  return &DAT_1414101a0;
}


/* address=140d4d550 name=FUN_140d4d550 */

undefined * FUN_140d4d550(void)

{
  return &DAT_1414101e8;
}


/* address=140d4d560 name=FUN_140d4d560 */

void FUN_140d4d560(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x20;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_140d4d1e0;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4be10;
  *(undefined **)(param_1 + 0x28) = &LAB_140d4d270;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4c480;
  return;
}


/* address=140d4d620 name=FUN_140d4d620 */

undefined8
FUN_140d4d620(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5,uint param_6)

{
  undefined8 uVar1;
  
  if ((((param_5 < 4) || (0x10 < param_5)) || ((param_5 & 1) != 0)) ||
     ((param_6 < 2 || (8 < param_6)))) {
    uVar1 = 0;
  }
  else {
    *param_1 = param_3;
    param_1[1] = param_4;
    *(uint *)(param_1 + 2) = param_5;
    *(uint *)((longlong)param_1 + 0x14) = param_6;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d4d6a0 name=FUN_140d4d6a0 */

longlong FUN_140d4d6a0(longlong param_1)

{
  longlong local_18;
  
  if (*(uint *)(param_1 + 0x14) < 8) {
    local_18 = (1L << ((byte)(*(int *)(param_1 + 0x14) << 3) & 0x3f)) + -1;
  }
  else {
    local_18 = -1;
  }
  return local_18;
}


/* address=140d4d700 name=FUN_140d4d700 */

undefined8
FUN_140d4d700(code **param_1,byte *param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5,
             byte *param_6,ulonglong param_7,ulonglong param_8)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  uint local_48;
  byte local_40;
  uint local_38;
  ulonglong local_30;
  byte bVar9;
  
  pcVar4 = *param_1;
  iVar2 = *(int *)(param_1 + 2);
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  uVar5 = FUN_140d4d6a0(param_1);
  if ((uVar5 < param_8) || (param_5 != 0xf - uVar3)) {
    uVar6 = 0;
  }
  else {
    FUN_140d1d930(param_2,0,0x20);
    *param_2 = (char)uVar3 - 1U | (byte)((iVar2 - 2U) / 2 << 3);
    if (param_7 != 0) {
      *param_2 = *param_2 | 0x40;
    }
    FUN_140d1d890(param_2 + 1,param_4,param_5);
    for (local_38 = 0; local_38 < uVar3; local_38 = local_38 + 1) {
      param_2[0xf - local_38] = (byte)(param_8 >> ((byte)(local_38 << 3) & 0x3f));
    }
    (*pcVar4)(param_2,param_2 + 0x10,param_3);
    local_30 = 1;
    if (param_7 != 0) {
      local_40 = (byte)param_7;
      bVar7 = (byte)(param_7 >> 8);
      if (param_7 < 0xff00) {
        param_2[0x10] = param_2[0x10] ^ bVar7;
        param_2[0x11] = param_2[0x11] ^ local_40;
        local_48 = 2;
      }
      else {
        bVar8 = (byte)(param_7 >> 0x10);
        bVar9 = (byte)(param_7 >> 0x18);
        if (param_7 < 0x100000000) {
          param_2[0x10] = param_2[0x10] ^ 0xff;
          param_2[0x11] = param_2[0x11] ^ 0xfe;
          param_2[0x12] = param_2[0x12] ^ bVar9;
          param_2[0x13] = param_2[0x13] ^ bVar8;
          param_2[0x14] = param_2[0x14] ^ bVar7;
          param_2[0x15] = param_2[0x15] ^ local_40;
          local_48 = 6;
        }
        else {
          param_2[0x10] = param_2[0x10] ^ 0xff;
          param_2[0x11] = param_2[0x11] ^ 0xff;
          param_2[0x12] = param_2[0x12] ^ (byte)(param_7 >> 0x38);
          param_2[0x13] = param_2[0x13] ^ (byte)(param_7 >> 0x30);
          param_2[0x14] = param_2[0x14] ^ (byte)(param_7 >> 0x28);
          param_2[0x15] = param_2[0x15] ^ (byte)(param_7 >> 0x20);
          param_2[0x16] = param_2[0x16] ^ bVar9;
          param_2[0x17] = param_2[0x17] ^ bVar8;
          param_2[0x18] = param_2[0x18] ^ bVar7;
          param_2[0x19] = param_2[0x19] ^ local_40;
          local_48 = 10;
        }
      }
      do {
        for (; (local_48 < 0x10 && (param_7 != 0)); param_7 = param_7 - 1) {
          param_2[(ulonglong)local_48 + 0x10] = param_2[(ulonglong)local_48 + 0x10] ^ *param_6;
          param_6 = param_6 + 1;
          local_48 = local_48 + 1;
        }
        (*pcVar4)(param_2 + 0x10,param_2 + 0x10,param_3);
        local_30 = local_30 + 1;
        local_48 = 0;
      } while (param_7 != 0);
    }
    lVar1 = ((param_8 + 0xf) / 0x10) * 2 + 1;
    if (((param_8 + 0xf < param_8) || (lVar1 + local_30 < local_30)) ||
       (0x2000000000000000 < lVar1 + local_30)) {
      uVar6 = 0;
    }
    else {
      *param_2 = *param_2 & 7;
      uVar6 = 1;
    }
  }
  return uVar6;
}


/* address=140d4dda0 name=FUN_140d4dda0 */

void FUN_140d4dda0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined auStack_68 [32];
  longlong local_48;
  undefined *local_40;
  undefined4 *local_38;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  undefined local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_68;
  for (local_28 = 0; local_28 < *(uint *)((longlong)param_1 + 0x14); local_28 = local_28 + 1) {
    *(undefined *)(param_2 + (ulonglong)(0xf - local_28)) = 0;
  }
  *(undefined *)(param_2 + 0xf) = 1;
  local_24 = 0;
  local_48 = param_2;
  if (param_1[1] == 0) {
    local_30 = *param_1;
    local_38 = &local_24;
    local_40 = local_20;
    FUN_140d1f6f0(param_5,param_4,param_6,param_3);
  }
  else {
    local_30 = param_1[1];
    local_38 = &local_24;
    local_40 = local_20;
    FUN_140d1f910(param_5,param_4,param_6,param_3);
  }
  FUN_140e28050(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=140d4def0 name=FUN_140d4def0 */

void FUN_140d4def0(code **param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,ulonglong param_7)

{
  undefined auStack_58 [32];
  uint local_38;
  ulonglong local_30;
  code *local_28;
  ulonglong local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_58;
  local_28 = *param_1;
  if (param_5 == *(uint *)(param_1 + 2)) {
    for (; 0xf < param_7; param_7 = param_7 - 0x10) {
      FUN_140d1d890(&local_20,param_6,0x10);
      *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) ^ local_20;
      *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) ^ uStack_18;
      (*local_28)(param_2 + 0x10,param_2 + 0x10,param_3);
      param_6 = param_6 + 0x10;
    }
    if (param_7 != 0) {
      for (local_30 = 0; local_30 < param_7; local_30 = local_30 + 1) {
        *(byte *)(param_2 + local_30 + 0x10) =
             *(byte *)(param_2 + local_30 + 0x10) ^ *(byte *)(param_6 + local_30);
      }
      (*local_28)(param_2 + 0x10,param_2 + 0x10,param_3);
    }
    for (local_38 = 0; local_38 < *(uint *)((longlong)param_1 + 0x14); local_38 = local_38 + 1) {
      *(undefined *)(param_2 + (ulonglong)(0xf - local_38)) = 0;
    }
    (*local_28)(param_2,&local_20,param_3);
    *(ulonglong *)(param_2 + 0x10) = *(ulonglong *)(param_2 + 0x10) ^ local_20;
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) ^ uStack_18;
    FUN_140d1d890(param_4,param_2 + 0x10,param_5);
  }
  FUN_140e28050(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=140d4e1b0 name=FUN_140d4e1b0 */

void FUN_140d4e1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_78;
  local_40 = param_9;
  local_48 = param_11;
  local_50 = param_10;
  local_58 = param_7;
  iVar1 = FUN_140d4d700(param_1,local_30,param_2,param_6);
  if (iVar1 != 0) {
    local_48 = param_9;
    local_50 = param_8;
    local_58 = param_5;
    iVar1 = FUN_140d4def0(param_1,local_30,param_2,param_4);
    if (iVar1 != 0) {
      local_50 = param_9;
      local_58 = param_8;
      iVar1 = FUN_140d4dda0(param_1,local_30,param_2,param_3);
      if (iVar1 != 0) {
        local_38 = 1;
        goto LAB_140d4e2d4;
      }
    }
  }
  local_38 = 0;
LAB_140d4e2d4:
  FUN_140e28050(local_10 ^ (ulonglong)auStack_78);
  return;
}


/* address=140d4e2f0 name=FUN_140d4e2f0 */

void FUN_140d4e2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_78;
  local_40 = param_9;
  local_48 = param_11;
  local_50 = param_10;
  local_58 = param_7;
  iVar1 = FUN_140d4d700(param_1,local_30,param_2,param_6);
  if (iVar1 != 0) {
    local_50 = param_9;
    local_58 = param_8;
    iVar1 = FUN_140d4dda0(param_1,local_30,param_2,param_3);
    if (iVar1 != 0) {
      local_48 = param_9;
      local_58 = param_5;
      local_50 = param_3;
      iVar1 = FUN_140d4def0(param_1,local_30,param_2,param_4);
      if (iVar1 != 0) {
        local_38 = 1;
        goto LAB_140d4e414;
      }
    }
  }
  local_38 = 0;
LAB_140d4e414:
  FUN_140e28050(local_10 ^ (ulonglong)auStack_78);
  return;
}


/* address=140d4e430 name=FUN_140d4e430 */

undefined8
FUN_140d4e430(undefined8 *param_1,undefined8 param_2,longlong param_3,ulonglong param_4,uint param_5
             ,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar5;
  undefined8 local_10 [2];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar2 = FUN_140d46b80(*param_1);
  if (param_5 != uVar2) {
    FID_conflict__assert((wchar_t *)s_M_1413cf990,(wchar_t *)s_D_1413cf8b0,0x121);
  }
  uVar2 = FUN_140d46ba0(*param_1);
  if (param_5 != uVar2) {
    FID_conflict__assert((wchar_t *)s_M_1413cfac0,(wchar_t *)s_D_1413cf9e0,0x122);
  }
  uVar2 = FUN_140d46b60(*param_1);
  if (0xf - param_6 != uVar2) {
    FID_conflict__assert((wchar_t *)s_1_1413cfbf0,(wchar_t *)s_D_1413cfb10,0x123);
  }
  lVar3 = FUN_140d46b40(*param_1);
  if (param_3 == lVar3) {
    local_res20 = param_4;
    if (param_4 == 0) {
      local_res20 = (ulonglong)param_5;
    }
    if (local_res20 == param_5) {
      uVar4 = FUN_140d49590(param_1 + 1,0,local_10,param_2,param_3);
      *(undefined *)(param_1 + 0x48) = (undefined)local_res20;
      iVar1 = FUN_140d4d620(param_1 + 0x20,param_1 + 1,local_10[0],uVar4,param_5,param_6);
      if (iVar1 == 0) {
        FUN_140d186f0(0x1e,0,0x44,s_D__a_1_s_target_release_build_bo_1413cfd30,0x139);
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      FUN_140d186f0(0x1e,0,0x74,s_D__a_1_s_target_release_build_bo_1413cfcc0,CONCAT44(uVar5,0x12f));
      uVar4 = 0;
    }
  }
  else {
    FUN_140d186f0(0x1e,0,0x66,s_D__a_1_s_target_release_build_bo_1413cfc50,CONCAT44(uVar5,0x126));
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140d4eb20 name=FUN_140d4eb20 */

undefined * FUN_140d4eb20(void)

{
  return &DAT_1414101f0;
}


/* address=140d4eb30 name=FUN_140d4eb30 */

undefined * FUN_140d4eb30(void)

{
  return &DAT_141410238;
}


/* address=140d4eb40 name=FUN_140d4eb40 */

void FUN_140d4eb40(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xd;
  param_1[2] = 4;
  param_1[3] = 4;
  *(undefined **)(param_1 + 8) = &LAB_140d4ead0;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4e660;
  *(undefined **)(param_1 + 0x28) = &LAB_140d4e670;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4e860;
  return;
}


/* address=140d4ec40 name=FUN_140d4ec40 */

undefined * FUN_140d4ec40(void)

{
  return &DAT_141410240;
}


/* address=140d4ec50 name=FUN_140d4ec50 */

undefined * FUN_140d4ec50(void)

{
  return &DAT_141410288;
}


/* address=140d4ec60 name=FUN_140d4ec60 */

void FUN_140d4ec60(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xd;
  param_1[2] = 8;
  param_1[3] = 8;
  *(undefined **)(param_1 + 8) = &LAB_140d4ebf0;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4e660;
  *(undefined **)(param_1 + 0x28) = &LAB_140d4e670;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4e860;
  return;
}


/* address=140d4ed60 name=FUN_140d4ed60 */

undefined * FUN_140d4ed60(void)

{
  return &DAT_141410290;
}


/* address=140d4ed70 name=FUN_140d4ed70 */

undefined * FUN_140d4ed70(void)

{
  return &DAT_1414102d8;
}


/* address=140d4ed80 name=FUN_140d4ed80 */

void FUN_140d4ed80(undefined *param_1)

{
  FUN_140e9a3c0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xd;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined **)(param_1 + 8) = &LAB_140d4ed10;
  *(undefined **)(param_1 + 0x18) = &LAB_140d4e660;
  *(undefined **)(param_1 + 0x28) = &LAB_140d4e670;
  *(undefined **)(param_1 + 0x30) = &LAB_140d4e860;
  return;
}


/* address=140d4f0b0 name=FUN_140d4f0b0 */

void FUN_140d4f0b0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined auStack_68 [32];
  undefined *local_48;
  undefined4 local_38;
  ulonglong local_30;
  undefined local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_140d272d0();
  uVar1 = FUN_140d49140(param_4);
  local_30 = (ulonglong)uVar1;
  if (((local_30 == 0x10) || (local_30 == 8)) && (uVar1 = FUN_140d49160(param_4), uVar1 == param_3))
  {
    local_48 = &DAT_141073018;
    iVar2 = FUN_140d48040(param_1,param_4,0,param_2);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_140d493a0(param_1,local_28,&DAT_141073018,local_30), iVar2 != 0)) {
      local_48 = &DAT_141073018;
      iVar2 = FUN_140d48040(param_1,0,0,0);
      if (iVar2 != 0) {
        if (local_30 == 0x10) {
          FUN_140d4f710(param_1 + 0x98,local_28);
          FUN_140d4f710(param_1 + 0xa8,param_1 + 0x98);
        }
        else {
          FUN_140d4f7c0(param_1 + 0x98,local_28);
          FUN_140d4f7c0(param_1 + 0xa8,param_1 + 0x98);
        }
        *(undefined4 *)(param_1 + 200) = 0;
        local_38 = 1;
      }
    }
  }
  FUN_140d272e0();
  FUN_140e28050(local_18 ^ (ulonglong)auStack_68);
  return;
}


/* address=140d4f2a0 name=FUN_140d4f2a0 */

void FUN_140d4f2a0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong local_res10;
  ulonglong local_res18;
  undefined auStack_58 [32];
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_28;
  undefined local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_140d272d0();
  uVar1 = FUN_140d48e90(param_1);
  local_38 = (ulonglong)uVar1;
  if (0x10 < local_38) {
    FID_conflict__assert((wchar_t *)s_b_1413d03a8,(wchar_t *)s_D_1413d02d0,0xe8);
  }
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(int *)(param_1 + 200) != 0) {
    local_28 = local_38 - *(uint *)(param_1 + 200);
    if (param_3 < local_28) {
      local_28 = param_3;
    }
    FUN_140d1d890(param_1 + 0xb8 + (ulonglong)*(uint *)(param_1 + 200),param_2,local_28);
    local_res10 = param_2 + local_28;
    local_res18 = param_3 - local_28;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + (int)local_28;
    if (local_res18 == 0) {
      local_30 = 1;
      goto LAB_140d4f4b3;
    }
    if (*(uint *)(param_1 + 200) != local_38) {
      FID_conflict__assert((wchar_t *)s_c_1413d04c8,(wchar_t *)s_D_1413d03f0,0x100);
    }
    iVar2 = FUN_140d493a0(param_1,local_20,param_1 + 0xb8,local_38);
    if (iVar2 == 0) goto LAB_140d4f4b3;
  }
  for (; local_38 < local_res18; local_res18 = local_res18 - local_38) {
    iVar2 = FUN_140d493a0(param_1,local_20,local_res10,local_38);
    if (iVar2 == 0) goto LAB_140d4f4b3;
    local_res10 = local_res10 + local_38;
  }
  FUN_140d1d890(param_1 + 0xb8,local_res10,local_res18);
  *(undefined4 *)(param_1 + 200) = (undefined4)local_res18;
  local_30 = 1;
LAB_140d4f4b3:
  FUN_140d272e0();
  FUN_140e28050(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=140d4f4e0 name=FUN_140d4f4e0 */

int FUN_140d4f4e0(longlong param_1,longlong param_2,ulonglong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint local_28;
  int local_24;
  longlong local_18;
  
  uVar1 = FUN_140d48e90(param_1);
  uVar2 = (ulonglong)uVar1;
  if (0x10 < uVar2) {
    FID_conflict__assert((wchar_t *)s_b_1413d05e8,(wchar_t *)s_D_1413d0510,0x11f);
  }
  FUN_140d272d0();
  *param_3 = uVar2;
  if (param_2 == 0) {
    local_24 = 1;
  }
  else {
    local_18 = param_1 + 0x98;
    if (*(uint *)(param_1 + 200) != uVar2) {
      *(undefined *)(param_1 + 0xb8 + (ulonglong)*(uint *)(param_1 + 200)) = 0x80;
      FUN_140d1d930(param_1 + 0xb9 + (ulonglong)*(uint *)(param_1 + 200),0,
                    uVar2 - (*(int *)(param_1 + 200) + 1));
      local_18 = param_1 + 0xa8;
    }
    for (local_28 = 0; local_28 < uVar2; local_28 = local_28 + 1) {
      *(byte *)(param_2 + (ulonglong)local_28) =
           *(byte *)(param_1 + 0xb8 + (ulonglong)local_28) ^
           *(byte *)(local_18 + (ulonglong)local_28);
    }
    local_24 = FUN_140d493a0(param_1,param_2,param_2,uVar2);
  }
  FUN_140d272e0();
  if (local_24 != 0) {
    FUN_140d272c0();
  }
  return local_24;
}


/* address=140d4f670 name=FUN_140d4f670 */

void FUN_140d4f670(undefined8 param_1)

{
  FUN_140d479f0(param_1);
  return;
}


/* address=140d4f6a0 name=FUN_140d4f6a0 */

void FUN_140d4f6a0(longlong param_1)

{
  FUN_140d47a60(param_1);
  FUN_140d76450(param_1 + 0x98,0x10);
  FUN_140d76450(param_1 + 0xa8,0x10);
  FUN_140d76450(param_1 + 0xb8,0x10);
  return;
}


/* address=140d4f710 name=FUN_140d4f710 */

void FUN_140d4f710(longlong param_1,byte *param_2)

{
  uint local_14;
  
  for (local_14 = 0; local_14 < 0xf; local_14 = local_14 + 1) {
    *(byte *)(param_1 + (ulonglong)local_14) =
         param_2[local_14] << 1 | (byte)((int)(uint)param_2[local_14 + 1] >> 7);
  }
  *(byte *)(param_1 + (ulonglong)local_14) =
       param_2[local_14] << 1 ^ -(char)((int)(uint)*param_2 >> 7) & 0x87U;
  return;
}


/* address=140d4f7c0 name=FUN_140d4f7c0 */

void FUN_140d4f7c0(longlong param_1,byte *param_2)

{
  uint local_14;
  
  for (local_14 = 0; local_14 < 7; local_14 = local_14 + 1) {
    *(byte *)(param_1 + (ulonglong)local_14) =
         param_2[local_14] << 1 | (byte)((int)(uint)param_2[local_14 + 1] >> 7);
  }
  *(byte *)(param_1 + (ulonglong)local_14) =
       param_2[local_14] << 1 ^ -(char)((int)(uint)*param_2 >> 7) & 0x1bU;
  return;
}


/* address=140d4f870 name=FUN_140d4f870 */

longlong FUN_140d4f870(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140d76180(0x48);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d1d930(lVar1,0,0x48);
    FUN_140d893c0(lVar1 + 0x30);
    *(undefined4 *)(lVar1 + 0x44) = 1;
  }
  return lVar1;
}


/* address=140d4f8d0 name=FUN_140d4f8d0 */

void FUN_140d4f8d0(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar1 = FUN_140d89300((longlong)param_1 + 0x44), iVar1 != 0)) {
    FUN_140d2d560(param_1[7]);
    FUN_140d276d0(*param_1);
    FUN_140d276d0(param_1[1]);
    FUN_140d276d0(param_1[2]);
    FUN_140d276d0(param_1[3]);
    FUN_140d276d0(param_1[4]);
    FUN_140d89460(param_1 + 6);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d4fbb0 name=FUN_140d4fbb0 */

undefined8 FUN_140d4fbb0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (((*param_1 == 0) && (param_2 == 0)) || ((param_1[1] == 0 && (param_4 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      FUN_140d27660(*param_1);
      *param_1 = param_2;
    }
    if (param_3 != 0) {
      FUN_140d27660(param_1[2]);
      param_1[2] = param_3;
    }
    if (param_4 != 0) {
      FUN_140d27660(param_1[1]);
      param_1[1] = param_4;
    }
    FUN_140d2d560(param_1[7]);
    param_1[7] = 0;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d50040 name=FUN_140d50040 */

void FUN_140d50040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d1dc10();
  FUN_140d507c0(param_1,param_2,param_3);
  return;
}


/* address=140d50190 name=FUN_140d50190 */

void FUN_140d50190(undefined8 *param_1)

{
  FUN_140d278e0(*param_1);
  return;
}


/* address=140d50590 name=FUN_140d50590 */

undefined4 FUN_140d50590(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_28;
  
  *param_3 = 0;
  lVar2 = FUN_140d27f30();
  if (lVar2 == 0) {
    return 0;
  }
  FUN_140d28030(lVar2);
  local_28 = 0;
  lVar3 = FUN_140d28090(lVar2);
  if ((lVar3 != 0) && (iVar1 = FUN_140d27970(lVar3,1), iVar1 != 0)) {
    iVar1 = FUN_140d29660(param_2,lVar3);
    if (iVar1 < 1) {
      *param_3 = *param_3 | 1;
    }
    lVar4 = FUN_140d27750(lVar3,*param_1);
    if ((lVar4 != 0) && (iVar1 = FUN_140d286a0(lVar3,1), iVar1 != 0)) {
      iVar1 = FUN_140d29660(param_2,lVar3);
      if (-1 < iVar1) {
        *param_3 = *param_3 | 2;
      }
      if (param_1[2] != 0) {
        iVar1 = FUN_140d2dba0(lVar3,param_2,param_1[2],*param_1,lVar2,0);
        if (iVar1 == 0) goto LAB_140d506eb;
        iVar1 = FUN_140d29a40(lVar3);
        if (iVar1 == 0) {
          *param_3 = *param_3 | 4;
        }
      }
      local_28 = 1;
    }
  }
LAB_140d506eb:
  FUN_140d281e0(lVar2);
  FUN_140d27fa0(lVar2);
  return local_28;
}


/* address=140d507c0 name=FUN_140d507c0 */

int FUN_140d507c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_24;
  
  lVar3 = FUN_140d27f30();
  if (lVar3 == 0) {
    local_24 = -1;
  }
  else {
    FUN_140d28030(lVar3);
    iVar1 = FUN_140d50190(param_3);
    local_24 = -1;
    lVar4 = FUN_140d28090(lVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_140d50890(param_3,lVar4,param_2,lVar3);
      if (iVar2 != 0) {
        iVar2 = FUN_140d27df0(param_1,(longlong)iVar1,lVar4);
        if (iVar2 != 0) {
          local_24 = iVar1;
        }
      }
    }
    FUN_140d281e0(lVar3);
    FUN_140d27fa0(lVar3);
  }
  return local_24;
}


/* address=140d50890 name=FUN_140d50890 */

undefined4
FUN_140d50890(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined4 local_18;
  int local_14;
  longlong local_10;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar1 = FUN_140d27880(*param_1);
  if (uVar1 < 0x2711) {
    if (param_1[4] == 0) {
      FUN_140d186f0(5,0,0x67,s_D__a_1_s_target_release_build_bo_1413d0780,CONCAT44(uVar5,0x120));
      local_18 = 0;
    }
    else {
      iVar2 = FUN_140d50590(param_1,param_3,&local_14);
      if ((iVar2 == 0) || (local_14 != 0)) {
        FUN_140d186f0(5,0,0x65,s_D__a_1_s_target_release_build_bo_1413d07f0,CONCAT44(uVar5,0x126));
        local_18 = 0;
      }
      else {
        local_18 = 0;
        FUN_140d28030(param_4);
        local_10 = FUN_140d28090(param_4);
        if ((local_10 != 0) &&
           (iVar2 = FUN_140d3f3e0(param_1 + 7,param_1 + 6,*param_1,param_4), iVar2 != 0)) {
          uVar4 = param_4;
          iVar2 = FUN_140d2e1d0(param_2,param_3,param_1[4],*param_1,param_4,param_1[7]);
          uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if ((iVar2 == 0) ||
             ((lVar3 = FUN_140d27750(local_10,*param_1), lVar3 == 0 ||
              (iVar2 = FUN_140d286a0(local_10,1), iVar2 == 0)))) {
            FUN_140d186f0(5,0,3,s_D__a_1_s_target_release_build_bo_1413d0860,CONCAT44(uVar5,0x138));
          }
          else {
            iVar2 = FUN_140d29710(param_2,1);
            if ((iVar2 < 1) || (iVar2 = FUN_140d29660(param_2,local_10), iVar2 == 0)) {
              FUN_140d186f0(5,0,0x65,s_D__a_1_s_target_release_build_bo_1413d08d0,
                            CONCAT44(uVar5,0x13f));
            }
            else {
              local_18 = 1;
            }
          }
        }
        FUN_140d281e0(param_4);
      }
    }
  }
  else {
    FUN_140d186f0(5,0,0x66,s_D__a_1_s_target_release_build_bo_1413d0710,CONCAT44(uVar5,0x11b));
    local_18 = 0;
  }
  return local_18;
}


/* address=140d50ab0 name=FUN_140d50ab0 */

undefined8 FUN_140d50ab0(undefined4 *param_1)

{
  FUN_140d1d930(param_1,0,0x5c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}


/* address=140d50b30 name=FUN_140d50b30 */

undefined8 FUN_140d50b30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d699f0(FUN_140d69df0,param_1,param_1 + 0x18,0x40,param_1 + 0x58,param_1 + 0x14,
                param_1 + 0x10,param_2,param_3);
  return 1;
}


/* address=140d50bd0 name=FUN_140d50bd0 */

undefined8 FUN_140d50bd0(longlong param_1,undefined4 *param_2)

{
  FUN_140d69c50(FUN_140d69df0,param_2,param_2 + 6,0x40,param_2 + 0x16,param_2[5],param_2[4],0);
  FUN_140d1d9a0(param_1,*param_2);
  FUN_140d1d9a0(param_1 + 4,param_2[1]);
  FUN_140d1d9a0(param_1 + 8,param_2[2]);
  FUN_140d1d9a0(param_1 + 0xc,param_2[3]);
  return 1;
}


/* address=140d50d90 name=FUN_140d50d90 */

undefined8 FUN_140d50d90(undefined4 *param_1)

{
  FUN_140d1d930(param_1,0,0x5c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}


/* address=140d50e10 name=FUN_140d50e10 */

undefined8 FUN_140d50e10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d699f0(FUN_140cb2440,param_1,param_1 + 0x18,0x40,param_1 + 0x58,param_1 + 0x14,
                param_1 + 0x10,param_2,param_3);
  return 1;
}


/* address=140d50eb0 name=FUN_140d50eb0 */

undefined8 FUN_140d50eb0(longlong param_1,undefined4 *param_2)

{
  FUN_140d69c50(FUN_140cb2440,param_2,param_2 + 6,0x40,param_2 + 0x16,param_2[5],param_2[4],0);
  FUN_140d1d9a0(param_1,*param_2);
  FUN_140d1d9a0(param_1 + 4,param_2[1]);
  FUN_140d1d9a0(param_1 + 8,param_2[2]);
  FUN_140d1d9a0(param_1 + 0xc,param_2[3]);
  return 1;
}


/* address=140d51170 name=FUN_140d51170 */

undefined * FUN_140d51170(void)

{
  return &DAT_1414102e0;
}


/* address=140d51180 name=FUN_140d51180 */

undefined * FUN_140d51180(void)

{
  return &DAT_141410310;
}


/* address=140d51190 name=FUN_140d51190 */

void FUN_140d51190(undefined4 *param_1)

{
  *param_1 = 0x101;
  param_1[1] = 0x10;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_140d51070;
  *(undefined **)(param_1 + 6) = &LAB_140d510c0;
  *(undefined **)(param_1 + 8) = &LAB_140d51120;
  param_1[10] = 0x40;
  param_1[0xb] = 0x5c;
  return;
}


/* address=140d51330 name=FUN_140d51330 */

undefined * FUN_140d51330(void)

{
  return &DAT_141410318;
}


/* address=140d51340 name=FUN_140d51340 */

undefined * FUN_140d51340(void)

{
  return &DAT_141410348;
}


/* address=140d51350 name=FUN_140d51350 */

void FUN_140d51350(undefined4 *param_1)

{
  *param_1 = 4;
  param_1[1] = 0x10;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_140d51230;
  *(undefined **)(param_1 + 6) = &LAB_140d51280;
  *(undefined **)(param_1 + 8) = &LAB_140d512e0;
  param_1[10] = 0x40;
  param_1[0xb] = 0x5c;
  return;
}


/* address=140d514f0 name=FUN_140d514f0 */

undefined * FUN_140d514f0(void)

{
  return &DAT_141410350;
}


/* address=140d51500 name=FUN_140d51500 */

undefined * FUN_140d51500(void)

{
  return &DAT_141410380;
}


/* address=140d51510 name=FUN_140d51510 */

void FUN_140d51510(undefined4 *param_1)

{
  *param_1 = 0x40;
  param_1[1] = 0x14;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_140d513f0;
  *(undefined **)(param_1 + 6) = &LAB_140d51440;
  *(undefined **)(param_1 + 8) = &LAB_140d514a0;
  param_1[10] = 0x40;
  param_1[0xb] = 0x60;
  return;
}


/* address=140d516b0 name=FUN_140d516b0 */

undefined * FUN_140d516b0(void)

{
  return &DAT_141410388;
}


/* address=140d516c0 name=FUN_140d516c0 */

undefined * FUN_140d516c0(void)

{
  return &DAT_1414103b8;
}


/* address=140d516d0 name=FUN_140d516d0 */

void FUN_140d516d0(undefined4 *param_1)

{
  *param_1 = 0x2a3;
  param_1[1] = 0x1c;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_140d515b0;
  *(undefined **)(param_1 + 6) = &LAB_140d51600;
  *(undefined **)(param_1 + 8) = &LAB_140d51660;
  param_1[10] = 0x40;
  param_1[0xb] = 0x70;
  return;
}


/* address=140d51870 name=FUN_140d51870 */

undefined * FUN_140d51870(void)

{
  return &DAT_1414103c0;
}


/* address=140d51880 name=FUN_140d51880 */

undefined * FUN_140d51880(void)

{
  return &DAT_1414103f0;
}


/* address=140d51890 name=FUN_140d51890 */

void FUN_140d51890(undefined4 *param_1)

{
  *param_1 = 0x2a0;
  param_1[1] = 0x20;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_140d51770;
  *(undefined **)(param_1 + 6) = &LAB_140d517c0;
  *(undefined **)(param_1 + 8) = &LAB_140d51820;
  param_1[10] = 0x40;
  param_1[0xb] = 0x70;
  return;
}


/* address=140d51a30 name=FUN_140d51a30 */

undefined * FUN_140d51a30(void)

{
  return &DAT_1414103f8;
}


/* address=140d51a40 name=FUN_140d51a40 */

undefined * FUN_140d51a40(void)

{
  return &DAT_141410428;
}


/* address=140d51a50 name=FUN_140d51a50 */

void FUN_140d51a50(undefined4 *param_1)

{
  *param_1 = 0x2a1;
  param_1[1] = 0x30;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_140d51930;
  *(undefined **)(param_1 + 6) = &LAB_140d51980;
  *(undefined **)(param_1 + 8) = &LAB_140d519e0;
  param_1[10] = 0x80;
  param_1[0xb] = 0xd8;
  return;
}


/* address=140d51bf0 name=FUN_140d51bf0 */

undefined * FUN_140d51bf0(void)

{
  return &DAT_141410430;
}


/* address=140d51c00 name=FUN_140d51c00 */

undefined * FUN_140d51c00(void)

{
  return &DAT_141410460;
}


/* address=140d51c10 name=FUN_140d51c10 */

void FUN_140d51c10(undefined4 *param_1)

{
  *param_1 = 0x2a2;
  param_1[1] = 0x40;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_140d51af0;
  *(undefined **)(param_1 + 6) = &LAB_140d51b40;
  *(undefined **)(param_1 + 8) = &LAB_140d51ba0;
  param_1[10] = 0x80;
  param_1[0xb] = 0xd8;
  return;
}


/* address=140d51db0 name=FUN_140d51db0 */

undefined * FUN_140d51db0(void)

{
  return &DAT_141410468;
}


/* address=140d51dc0 name=FUN_140d51dc0 */

undefined * FUN_140d51dc0(void)

{
  return &DAT_141410498;
}


/* address=140d51dd0 name=FUN_140d51dd0 */

void FUN_140d51dd0(undefined4 *param_1)

{
  *param_1 = 0x3c2;
  param_1[1] = 0x20;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_140d51cb0;
  *(undefined **)(param_1 + 6) = &LAB_140d51d00;
  *(undefined **)(param_1 + 8) = &LAB_140d51d60;
  param_1[10] = 0x80;
  param_1[0xb] = 0xd8;
  return;
}


/* address=140d51ff0 name=FUN_140d51ff0 */

undefined * FUN_140d51ff0(void)

{
  return &DAT_1414104a0;
}


/* address=140d52000 name=FUN_140d52000 */

undefined * FUN_140d52000(void)

{
  return &DAT_1414104d0;
}


/* address=140d52010 name=FUN_140d52010 */

void FUN_140d52010(undefined4 *param_1)

{
  *param_1 = 0x72;
  param_1[1] = 0x24;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_140d51e70;
  *(undefined **)(param_1 + 6) = &LAB_140d51ee0;
  *(undefined **)(param_1 + 8) = &LAB_140d51f70;
  param_1[10] = 0x40;
  param_1[0xb] = 0xbc;
  return;
}


/* address=140d520b0 name=FUN_140d520b0 */

void FUN_140d520b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_140d552d0(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


/* address=140d52100 name=FUN_140d52100 */

undefined8 FUN_140d52100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d55250(param_1,0);
  if (iVar1 == 0) {
    FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413d32d0,0x87);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d1c6d0(param_1,param_2,param_3);
  }
  return uVar2;
}


/* address=140d52170 name=FUN_140d52170 */

void FUN_140d52170(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined auStack_c8 [32];
  undefined8 local_a8;
  int local_98;
  int local_94;
  uint local_90 [2];
  ulonglong local_88;
  undefined local_80 [40];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_c8;
  iVar1 = FUN_140d55250(param_1,0);
  if (iVar1 == 0) {
    local_a8 = CONCAT44(local_a8._4_4_,0x9a);
    FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413d33d0);
    goto LAB_140d522db;
  }
  if (param_2 == 0) {
    local_a8 = FUN_140d1c8f0(*param_1);
    local_88 = local_a8;
    FUN_140e044a0(param_1[2],0,param_3,0);
    goto LAB_140d522db;
  }
  FUN_140d272d0();
  FUN_140d1c160(local_80);
  iVar1 = FUN_140d1c2e0(local_80,param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_140d1c710(local_80,local_58,local_90), iVar1 == 0)) {
LAB_140d5225c:
    local_98 = 0;
  }
  else {
    local_a8 = (ulonglong)local_90[0];
    iVar1 = FUN_140e044a0(param_1[2],param_2,param_3,local_58);
    if (iVar1 == 0) goto LAB_140d5225c;
    local_98 = 1;
  }
  local_94 = local_98;
  FUN_140d1c1d0(local_80);
  FUN_140d272e0();
  if (local_94 != 0) {
    FUN_140d27340(param_1);
  }
LAB_140d522db:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=140d52300 name=FUN_140d52300 */

int FUN_140d52300(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  int local_18;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  FUN_140d272d0();
  local_18 = 0;
  iVar1 = FUN_140d55250(param_1,0);
  if (iVar1 == 0) {
    if (*(longlong *)(**(longlong **)(param_1 + 0x10) + 0x30) == 0) {
      FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413d34d0,CONCAT44(uVar2,0xe4));
    }
    else {
      local_18 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                           (*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
    }
  }
  else if ((param_2 == 0) || (iVar1 = FUN_140d52100(param_1,param_4,param_5), iVar1 != 0)) {
    local_18 = FUN_140d52170(param_1,param_2,param_3);
  }
  FUN_140d272e0();
  if (local_18 != 0) {
    FUN_140d27340(param_1);
  }
  return local_18;
}


/* address=140d52410 name=FUN_140d52410 */

void FUN_140d52410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_140d552d0(param_1,param_2,param_3,param_4,param_5,1);
  return;
}


/* address=140d52460 name=FUN_140d52460 */

undefined8 FUN_140d52460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d55250(param_1,1);
  if (iVar1 == 0) {
    FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413d3350,0x90);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d1c6d0(param_1,param_2,param_3);
  }
  return uVar2;
}


/* address=140d524d0 name=FUN_140d524d0 */

void FUN_140d524d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined auStack_b8 [32];
  undefined8 local_98;
  int local_88;
  int local_84;
  uint local_80 [2];
  undefined local_78 [32];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_b8;
  iVar1 = FUN_140d55250(param_1,1);
  if (iVar1 == 0) {
    local_98 = CONCAT44(local_98._4_4_,0xba);
    FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413d3450);
    goto LAB_140d525e8;
  }
  FUN_140d272d0();
  FUN_140d1c160(local_78);
  iVar1 = FUN_140d1c2e0(local_78,param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_140d1c710(local_78,local_58,local_80), iVar1 == 0)) {
LAB_140d525b0:
    local_88 = 0;
  }
  else {
    local_98 = (ulonglong)local_80[0];
    iVar1 = FUN_140e045f0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,local_58);
    if (iVar1 == 0) goto LAB_140d525b0;
    local_88 = 1;
  }
  local_84 = local_88;
  FUN_140d272e0();
  FUN_140d1c1d0(local_78);
  if (local_84 != 0) {
    FUN_140d27350(param_1);
  }
LAB_140d525e8:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140d52610 name=FUN_140d52610 */

int FUN_140d52610(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  int local_18;
  int local_14;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  FUN_140d272d0();
  local_18 = 0;
  iVar1 = FUN_140d55250(param_1,1);
  if (iVar1 == 0) {
    if (*(longlong *)(**(longlong **)(param_1 + 0x10) + 0x40) == 0) {
      FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413d3550,CONCAT44(uVar2,0xff));
    }
    else {
      local_18 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                           (*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
    }
    goto LAB_140d52700;
  }
  iVar1 = FUN_140d52460(param_1,param_4,param_5);
  if (iVar1 == 0) {
LAB_140d52682:
    local_14 = 0;
  }
  else {
    iVar1 = FUN_140d524d0(param_1,param_2,param_3);
    if (iVar1 == 0) goto LAB_140d52682;
    local_14 = 1;
  }
  local_18 = local_14;
LAB_140d52700:
  FUN_140d272e0();
  if (local_18 != 0) {
    FUN_140d27350(param_1);
  }
  return local_18;
}


/* address=140d528f0 name=FUN_140d528f0 */

void FUN_140d528f0(void)

{
  FUN_140d52910(0);
  return;
}


/* address=140d52910 name=FUN_140d52910 */

longlong * FUN_140d52910(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_140d76180(0xc0);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_140d1d930(plVar2,0,0xc0);
    if (param_1 != 0) {
      lVar3 = FUN_140e054b0(param_1);
      *plVar2 = lVar3;
    }
    if (*plVar2 == 0) {
      lVar3 = FUN_140d6bdb0();
      *plVar2 = lVar3;
    }
    FUN_140e05530(*plVar2);
    *(undefined4 *)(plVar2 + 10) = 1;
    *(undefined4 *)((longlong)plVar2 + 0x54) = *(undefined4 *)(*plVar2 + 0x48);
    FUN_140d893c0(plVar2 + 0xb);
    FUN_140d89ca0(plVar2 + 9);
    if ((*(longlong *)(*plVar2 + 0x10) != 0) &&
       (iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2), iVar1 == 0)) {
      uVar4 = FUN_140d6db70();
      FUN_140d89cc0(uVar4,plVar2,plVar2 + 9);
      FUN_140d89460(plVar2 + 0xb);
      FUN_140e05570(*plVar2);
      FUN_140d762b0(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}


/* address=140d52a50 name=FUN_140d52a50 */

void FUN_140d52a50(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != (longlong *)0x0) && (iVar1 = FUN_140d89300(param_1 + 10), iVar1 != 0)) {
    if (*(longlong *)(*param_1 + 0x18) != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    FUN_140e05570(*param_1);
    uVar2 = FUN_140d6db70();
    FUN_140d89cc0(uVar2,param_1,param_1 + 9);
    FUN_140d27660(param_1[1]);
    FUN_140d27660(param_1[2]);
    FUN_140d27660(param_1[3]);
    FUN_140d27660(param_1[4]);
    FUN_140d27660(param_1[5]);
    FUN_140d27660(param_1[6]);
    FUN_140d27660(param_1[7]);
    FUN_140d27660(param_1[8]);
    FUN_140d6d030(param_1);
    FUN_140d89460(param_1 + 0xb);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d52b80 name=FUN_140d52b80 */

undefined8 FUN_140d52b80(longlong param_1)

{
  FUN_140d892b0(param_1 + 0x50);
  return 1;
}


/* address=140d52bb0 name=FUN_140d52bb0 */

void FUN_140d52bb0(longlong param_1)

{
  FUN_140d27880(*(undefined8 *)(param_1 + 8));
  return;
}


/* address=140d52be0 name=FUN_140d52be0 */

undefined8 FUN_140d52be0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=140d52c00 name=FUN_140d52c00 */

undefined8 FUN_140d52c00(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=140d53070 name=FUN_140d53070 */

void FUN_140d53070(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d6fbf0(param_1,param_2,param_3,param_4,0);
  return;
}


/* address=140d531a0 name=FUN_140d531a0 */

void FUN_140d531a0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_140d1dbf0();
  FUN_140d6d770(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* address=140d53200 name=FUN_140d53200 */

undefined4
FUN_140d53200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar4;
  undefined4 local_28;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar3 = FUN_140d1c8f0(param_7);
  if (param_6 != lVar3) {
    FUN_140d186f0(4,0,0x7d,s_D__a_1_s_target_release_build_bo_1413dbd20,CONCAT44(uVar1,0x292));
    return 0;
  }
  uVar1 = FUN_140d535c0(param_1);
  lVar3 = FUN_140d76180(uVar1);
  if (lVar3 != 0) {
    iVar2 = FUN_140d545c0(param_1,lVar3,param_5,param_7,param_8,CONCAT44(uVar4,param_9));
    if ((iVar2 == 0) ||
       (iVar2 = FUN_140d53340(param_1,param_2,param_3,param_4,lVar3,uVar1,3), iVar2 == 0)) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    FUN_140d762b0(lVar3);
    return local_28;
  }
  return 0;
}


/* address=140d53340 name=FUN_140d53340 */

void FUN_140d53340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_140d1dbf0();
  FUN_140d6dc10(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* address=140d533a0 name=FUN_140d533a0 */

void FUN_140d533a0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_140d1dbf0();
  FUN_140d6d1e0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* address=140d53400 name=FUN_140d53400 */

undefined4
FUN_140d53400(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  ulonglong local_20;
  longlong local_18;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar3 = FUN_140d1c8f0(param_4);
  if (param_3 == lVar3) {
    uVar1 = FUN_140d535c0(param_1);
    local_20 = (ulonglong)uVar1;
    local_18 = FUN_140d76180(local_20);
    if (local_18 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = 0;
      iVar2 = FUN_140d53560(param_1,&local_20,local_18,local_20,param_7,param_8,3);
      uVar5 = (undefined4)((ulonglong)param_8 >> 0x20);
      uVar4 = (undefined4)((ulonglong)param_7 >> 0x20);
      if (iVar2 != 0) {
        uVar1 = FUN_140d535c0(param_1);
        if (local_20 == uVar1) {
          local_28 = FUN_140d54080(param_1,param_2,param_4,param_5,local_18,CONCAT44(uVar5,param_6))
          ;
        }
        else {
          FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413dbf50,CONCAT44(uVar4,0x2f1))
          ;
        }
      }
      FUN_140d762b0(local_18);
    }
  }
  else {
    FUN_140d186f0(4,0,0x7d,s_D__a_1_s_target_release_build_bo_1413dbee0,CONCAT44(uVar4,0x2e1));
    local_28 = 0;
  }
  return local_28;
}


/* address=140d53560 name=FUN_140d53560 */

void FUN_140d53560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_140d1dbf0();
  FUN_140d6d3e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* address=140d535c0 name=FUN_140d535c0 */

ulonglong FUN_140d535c0(longlong *param_1)

{
  ulonglong local_18;
  
  if (*(longlong *)(*param_1 + 0x20) == 0) {
    local_18 = FUN_140d6bde0(param_1);
  }
  else {
    local_18 = (**(code **)(*param_1 + 0x20))(param_1);
  }
  if (0xfffffffe < local_18) {
    FID_conflict__assert((wchar_t *)s_r_1413db720,(wchar_t *)s_D_1413db650,0x1b2);
  }
  return local_18 & 0xffffffff;
}


/* address=140d53640 name=FUN_140d53640 */

undefined4 FUN_140d53640(longlong *param_1)

{
  undefined4 local_18;
  
  if ((*param_1 == 0) || ((*(uint *)(*param_1 + 0x48) & 1) == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d53690 name=FUN_140d53690 */

undefined4 FUN_140d53690(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined local_a0 [24];
  undefined local_88 [24];
  undefined local_70 [24];
  undefined local_58 [24];
  undefined local_40 [24];
  undefined local_28 [40];
  
  iVar1 = FUN_140d53640(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_140d6cce0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) != (*(longlong *)(param_1 + 0x28) != 0)) {
    FUN_140d186f0(4,0,0x86,s_D__a_1_s_target_release_build_bo_1413dbfc0,0x324);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     ((iVar1 = FUN_140d27a70(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0 ||
      (iVar1 = FUN_140d29660(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8)),
      -1 < iVar1)))) {
    FUN_140d186f0(4,0,0x93,s_D__a_1_s_target_release_build_bo_1413dc030,0x32c);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    return 1;
  }
  lVar4 = FUN_140d27f30();
  if (lVar4 == 0) {
    return 0;
  }
  local_b0 = 0;
  FUN_140d27630(local_88);
  FUN_140d27630(local_a0);
  FUN_140d27630(local_70);
  FUN_140d27630(local_58);
  FUN_140d27630(local_40);
  FUN_140d27630(local_28);
  iVar1 = FUN_140d27a70(*(undefined8 *)(param_1 + 0x20));
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_140d29660(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8)),
       iVar1 < 0)) && (iVar1 = FUN_140d27a70(*(undefined8 *)(param_1 + 0x28)), iVar1 == 0)) &&
     (iVar1 = FUN_140d29660(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8)), iVar1 < 0
     )) {
    iVar1 = FUN_140d3d7f0(local_88,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                          lVar4);
    if (iVar1 == 0) {
      FUN_140d186f0(4,0,3,s_D__a_1_s_target_release_build_bo_1413dc110,0x34e);
    }
    else {
      iVar1 = FUN_140d29660(local_88,*(undefined8 *)(param_1 + 8));
      if (iVar1 == 0) {
        uVar5 = FUN_140d27850();
        iVar1 = FUN_140d3d4b0(local_70,*(undefined8 *)(param_1 + 0x20),uVar5);
        if (iVar1 != 0) {
          uVar5 = FUN_140d27850();
          iVar1 = FUN_140d3d4b0(local_58,*(undefined8 *)(param_1 + 0x28),uVar5);
          if (iVar1 != 0) {
            uVar2 = FUN_140d27880(local_70);
            uVar3 = FUN_140d27880(local_58);
            iVar1 = FUN_140d3d7f0(local_a0,*(undefined8 *)(param_1 + 0x18),
                                  *(undefined8 *)(param_1 + 0x10),lVar4);
            if (((iVar1 == 0) ||
                (iVar1 = FUN_140d3db10(0,local_88,local_a0,local_70,uVar2,lVar4), iVar1 == 0)) ||
               (iVar1 = FUN_140d3db10(0,local_a0,local_a0,local_58,uVar3,lVar4), iVar1 == 0)) {
              FUN_140d186f0(4,0,3,s_D__a_1_s_target_release_build_bo_1413dc260,0x364);
            }
            else {
              iVar1 = FUN_140d29a40(local_88);
              if ((iVar1 == 0) || (iVar1 = FUN_140d29a40(local_a0), iVar1 == 0)) {
                FUN_140d186f0(4,0,0x77,s_D__a_1_s_target_release_build_bo_1413dc2d0,0x369);
              }
              else {
                bVar6 = *(longlong *)(param_1 + 0x30) != 0;
                if ((bVar6 == (*(longlong *)(param_1 + 0x38) != 0)) &&
                   (bVar6 == (*(longlong *)(param_1 + 0x40) != 0))) {
                  if (bVar6) {
                    iVar1 = FUN_140d6dde0(&local_ac,*(undefined8 *)(param_1 + 0x10),
                                          *(undefined8 *)(param_1 + 0x30),local_70,uVar2,lVar4);
                    if (((iVar1 == 0) ||
                        (iVar1 = FUN_140d6dde0(&local_a8,*(undefined8 *)(param_1 + 0x10),
                                               *(undefined8 *)(param_1 + 0x38),local_58,uVar3,lVar4)
                        , iVar1 == 0)) ||
                       (iVar1 = FUN_140d6dde0(&local_a4,*(undefined8 *)(param_1 + 0x28),
                                              *(undefined8 *)(param_1 + 0x40),
                                              *(undefined8 *)(param_1 + 0x20),uVar2,lVar4),
                       iVar1 == 0)) {
                      FUN_140d186f0(4,0,3,s_D__a_1_s_target_release_build_bo_1413dc3b0,0x37c);
                      goto LAB_140d53cda;
                    }
                    if (((local_ac == 0) || (local_a8 == 0)) || (local_a4 == 0)) {
                      FUN_140d186f0(4,0,0x6f,s_D__a_1_s_target_release_build_bo_1413dc420,0x381);
                      goto LAB_140d53cda;
                    }
                  }
                  local_b0 = 1;
                }
                else {
                  FUN_140d186f0(4,0,0x7b,s_D__a_1_s_target_release_build_bo_1413dc340,0x370);
                }
              }
            }
            goto LAB_140d53cda;
          }
        }
        FUN_140d186f0(4,0,3,s_D__a_1_s_target_release_build_bo_1413dc1f0,0x35c);
      }
      else {
        FUN_140d186f0(4,0,0x84,s_D__a_1_s_target_release_build_bo_1413dc180,0x352);
      }
    }
  }
  else {
    FUN_140d186f0(4,0,0x84,s_D__a_1_s_target_release_build_bo_1413dc0a0,0x34a);
  }
LAB_140d53cda:
  FUN_140d27660(local_88);
  FUN_140d27660(local_a0);
  FUN_140d27660(local_70);
  FUN_140d27660(local_58);
  FUN_140d27660(local_40);
  FUN_140d27660(local_28);
  FUN_140d27fa0(lVar4);
  return local_b0;
}


/* address=140d53d50 name=FUN_140d53d50 */

void FUN_140d53d50(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  int local_68;
  uint local_64;
  longlong local_60;
  longlong local_58;
  int local_50 [2];
  undefined local_48 [24];
  byte local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_98;
  iVar1 = FUN_140d53640(param_1);
  if (iVar1 != 0) {
    local_78 = (uint *)CONCAT44(local_78._4_4_,0x3ad);
    FUN_140d186f0(4,0,0x92,s_D__a_1_s_target_release_build_bo_1413dc490);
    goto LAB_140d54059;
  }
  iVar1 = FUN_140d53690(param_1);
  if ((iVar1 == 0) || (local_60 = FUN_140d27f30(), local_60 == 0)) goto LAB_140d54059;
  FUN_140d27630(local_48);
  local_68 = 1;
  uVar2 = FUN_140d27880(*(undefined8 *)(param_1 + 0x10));
  if ((uVar2 < 0x11) ||
     (((uVar2 = FUN_140d27880(*(undefined8 *)(param_1 + 0x10)), 0x100 < uVar2 ||
       (iVar1 = FUN_140d29af0(*(undefined8 *)(param_1 + 8)), iVar1 == 0)) ||
      (iVar1 = FUN_140d29af0(*(undefined8 *)(param_1 + 0x10)), iVar1 == 0)))) {
LAB_140d53eb2:
    local_78 = (uint *)CONCAT44(local_78._4_4_,0x3d0);
    FUN_140d186f0(4,0,0x92,s_D__a_1_s_target_release_build_bo_1413dc500);
    local_68 = 0;
  }
  else {
    uVar3 = FUN_140d6df80();
    iVar1 = FUN_140d2ccc0(local_48,*(undefined8 *)(param_1 + 8),uVar3,local_60);
    if ((iVar1 == 0) || (iVar1 = FUN_140d29a40(local_48), iVar1 == 0)) goto LAB_140d53eb2;
    local_78 = (uint *)0x0;
    iVar1 = FUN_140d2c390(local_50,*(undefined8 *)(param_1 + 8),0,local_60);
    if ((iVar1 == 0) || (local_50[0] != 2)) goto LAB_140d53eb2;
  }
  FUN_140d27660(local_48);
  FUN_140d27fa0(local_60);
  if (((local_68 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (*(longlong *)(param_1 + 0x20) != 0)) {
    pbVar5 = local_30;
    for (lVar4 = 0x20; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
    }
    local_64 = FUN_140d535c0(param_1);
    local_58 = FUN_140d76180(local_64);
    if (local_58 != 0) {
      local_78 = &local_64;
      local_70 = param_1;
      iVar1 = FUN_140d531a0(0x2a0,local_30,0x20,local_58);
      if (iVar1 == 0) {
        local_78 = (uint *)CONCAT44(local_78._4_4_,0x3e9);
        FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413dc570);
        local_68 = 0;
      }
      else {
        iVar1 = FUN_140d1dc30(s_RSA_PWCT_1413dc5d8);
        if (iVar1 != 0) {
          local_30[0] = ~local_30[0];
        }
        local_78 = (uint *)(ulonglong)local_64;
        local_70 = param_1;
        iVar1 = FUN_140d533a0(0x2a0,local_30,0x20,local_58);
        if (iVar1 == 0) {
          local_78 = (uint *)CONCAT44(local_78._4_4_,0x3f1);
          FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413dc5f0);
          local_68 = 0;
        }
      }
      FUN_140d762b0(local_58);
    }
  }
LAB_140d54059:
  FUN_140e28050(local_10 ^ (ulonglong)auStack_98);
  return;
}


/* address=140d54080 name=FUN_140d54080 */

void FUN_140d54080(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  byte *param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong local_res20;
  undefined auStack_f8 [32];
  undefined8 local_d8;
  byte *local_c8;
  ulonglong local_c0;
  uint local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined4 local_90;
  byte *local_88;
  undefined local_80 [40];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_f8;
  local_res20 = param_4;
  if (param_4 == 0) {
    local_res20 = param_3;
  }
  local_90 = 0;
  local_c8 = (byte *)0x0;
  FUN_140d1c160(local_80);
  FUN_140d272d0();
  local_a8 = FUN_140d1c8f0(param_3);
  if (param_6 == -1) {
    param_6 = (int)local_a8;
  }
  else if (param_6 == -2) {
    param_6 = -2;
  }
  else if (param_6 < -2) {
    local_d8 = CONCAT44(local_d8._4_4_,0xe9);
    FUN_140d186f0(4,0,0x8a,s_D__a_1_s_target_release_build_bo_1413db020);
    goto LAB_140d5457d;
  }
  iVar2 = FUN_140d27880(*(undefined8 *)(param_1 + 8));
  local_b8 = iVar2 - 1U & 7;
  uVar3 = FUN_140d535c0(param_1);
  local_a0 = (ulonglong)uVar3;
  bVar1 = (byte)local_b8 & 0x1f;
  if (((uint)*param_5 & 0xff << bVar1) == 0) {
    if (local_b8 == 0) {
      param_5 = param_5 + 1;
      local_a0 = local_a0 - 1;
    }
    if ((local_a0 < local_a8 + 2U) ||
       ((-1 < param_6 && (local_a0 < (ulonglong)(local_a8 + 2 + (longlong)param_6))))) {
      local_d8 = CONCAT44(local_d8._4_4_,0xfa);
      FUN_140d186f0(4,0 << bVar1,0x71,s_D__a_1_s_target_release_build_bo_1413db100);
    }
    else if (param_5[local_a0 - 1] == 0xbc) {
      local_b0 = (local_a0 - local_a8) - 1;
      local_88 = param_5 + local_b0;
      local_c8 = (byte *)FUN_140d76180(local_b0);
      if (local_c8 != (byte *)0x0) {
        local_d8 = local_res20;
        iVar2 = FUN_140d6c6f0(local_c8,local_b0,local_88,local_a8);
        if (iVar2 != 0) {
          for (local_98 = 0; local_98 < local_b0; local_98 = local_98 + 1) {
            local_c8[local_98] = local_c8[local_98] ^ param_5[local_98];
          }
          if (local_b8 != 0) {
            *local_c8 = *local_c8 & (byte)(0xff >> (8U - (char)local_b8 & 0x1f));
          }
          for (local_c0 = 0; (local_c8[local_c0] == 0 && (local_c0 < local_b0 - 1));
              local_c0 = local_c0 + 1) {
          }
          if (local_c8[local_c0] == 1) {
            local_c0 = local_c0 + 1;
            if ((param_6 < 0) || (local_b0 - local_c0 == (longlong)param_6)) {
              iVar2 = FUN_140d1c5a0(local_80,param_3,0);
              if (((iVar2 != 0) &&
                  (((iVar2 = FUN_140d1c6d0(local_80,&DAT_14104c178,8), iVar2 != 0 &&
                    (iVar2 = FUN_140d1c6d0(local_80,param_2,local_a8), iVar2 != 0)) &&
                   (iVar2 = FUN_140d1c6d0(local_80,local_c8 + local_c0,local_b0 - local_c0),
                   iVar2 != 0)))) && (iVar2 = FUN_140d1c710(local_80,local_58,0), iVar2 != 0)) {
                iVar2 = FUN_140d1d850(local_58,local_88,local_a8);
                if (iVar2 == 0) {
                  local_90 = 1;
                }
                else {
                  local_d8 = CONCAT44(local_d8._4_4_,299);
                  FUN_140d186f0(4,0,0x69,s_D__a_1_s_target_release_build_bo_1413db2c0);
                }
              }
            }
            else {
              local_d8 = CONCAT44(local_d8._4_4_,0x11f);
              FUN_140d186f0(4,0,0x8a,s_D__a_1_s_target_release_build_bo_1413db250);
            }
          }
          else {
            local_d8 = CONCAT44(local_d8._4_4_,0x119);
            FUN_140d186f0(4,0,0x8b,s_D__a_1_s_target_release_build_bo_1413db1e0);
          }
        }
      }
    }
    else {
      local_d8 = CONCAT44(local_d8._4_4_,0xfe);
      FUN_140d186f0(4,0 << bVar1,0x7f,s_D__a_1_s_target_release_build_bo_1413db170);
    }
  }
  else {
    local_d8 = CONCAT44(local_d8._4_4_,0xf0);
    FUN_140d186f0(4,0 << bVar1,0x7a,s_D__a_1_s_target_release_build_bo_1413db090);
  }
LAB_140d5457d:
  FUN_140d762b0(local_c8);
  FUN_140d1c1d0(local_80);
  FUN_140d272e0();
  FUN_140e28050(local_18 ^ (ulonglong)auStack_f8);
  return;
}


/* address=140d545c0 name=FUN_140d545c0 */

undefined4
FUN_140d545c0(longlong param_1,byte *param_2,undefined8 param_3,longlong param_4,longlong param_5,
             int param_6)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *local_res10;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar8;
  ulonglong local_88;
  byte *local_80;
  ulonglong local_78;
  longlong local_68;
  undefined4 local_5c;
  ulonglong local_58;
  undefined local_30 [48];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_5c = 0;
  local_68 = 0;
  if (param_5 == 0) {
    param_5 = param_4;
  }
  FUN_140d272d0();
  uVar6 = FUN_140d1c8f0(param_4);
  iVar4 = FUN_140d29a20(*(undefined8 *)(param_1 + 8));
  if (iVar4 == 0) {
    cVar2 = FUN_140d27880(*(undefined8 *)(param_1 + 8));
    bVar3 = cVar2 - 1U & 7;
    uVar5 = FUN_140d535c0(param_1);
    local_78 = (ulonglong)uVar5;
    local_res10 = param_2;
    if (bVar3 == 0) {
      if (local_78 == 0) {
        FID_conflict__assert((wchar_t *)s_e_1413db478,(wchar_t *)s_D_1413db3a0,0x150);
      }
      *param_2 = 0;
      local_res10 = param_2 + 1;
      local_78 = local_78 - 1;
    }
    if (local_78 < uVar6 + 2) {
      FUN_140d186f0(4,0,0x72,s_D__a_1_s_target_release_build_bo_1413db490,0x156);
    }
    else {
      local_88 = uVar6;
      if (param_6 != -1) {
        if (param_6 == -2) {
          local_88 = (local_78 - uVar6) - 2;
        }
        else {
          if (param_6 < 0) {
            FUN_140d186f0(4,0,0x8a,s_D__a_1_s_target_release_build_bo_1413db500,0x164);
            goto LAB_140d54a5e;
          }
          local_88 = (longlong)param_6;
        }
      }
      if ((local_78 - uVar6) - 2 < local_88) {
        FUN_140d186f0(4,0,0x72,s_D__a_1_s_target_release_build_bo_1413db570,0x16b);
      }
      else if ((local_88 == 0) ||
              ((local_68 = FUN_140d76180(local_88), local_68 != 0 &&
               (iVar4 = FUN_140d459b0(local_68,local_88), iVar4 != 0)))) {
        lVar7 = (local_78 - uVar6) + -1;
        FUN_140d1c160(local_30);
        iVar4 = FUN_140d1c5a0(local_30,param_4,0);
        if ((iVar4 == 0) ||
           ((((iVar4 = FUN_140d1c6d0(local_30,&DAT_14104c178,8), iVar4 == 0 ||
              (iVar4 = FUN_140d1c6d0(local_30,param_3,uVar6), iVar4 == 0)) ||
             (iVar4 = FUN_140d1c6d0(local_30,local_68,local_88), iVar4 == 0)) ||
            (iVar4 = FUN_140d1c710(local_30,local_res10 + lVar7,0), iVar4 == 0)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        FUN_140d1c1d0(local_30);
        if ((bVar1) &&
           (iVar4 = FUN_140d6c6f0(local_res10,lVar7,local_res10 + lVar7,uVar6,param_5), iVar4 != 0))
        {
          local_80 = local_res10 + ((local_78 - local_88) - uVar6) + -2;
          *local_80 = *local_80 ^ 1;
          if (local_88 != 0) {
            for (local_58 = 0; local_80 = local_80 + 1, local_58 < local_88; local_58 = local_58 + 1
                ) {
              *local_80 = *local_80 ^ *(byte *)(local_68 + local_58);
            }
          }
          if (bVar3 != 0) {
            *local_res10 = *local_res10 & (byte)(0xff >> (8 - bVar3 & 0x1f));
          }
          local_res10[local_78 - 1] = 0xbc;
          local_5c = 1;
        }
      }
    }
  }
  else {
    FUN_140d186f0(4,0,0x78,s_D__a_1_s_target_release_build_bo_1413db330,CONCAT44(uVar8,0x149));
  }
LAB_140d54a5e:
  FUN_140d762b0(local_68);
  FUN_140d272e0();
  return local_5c;
}


/* address=140d54a80 name=FUN_140d54a80 */

undefined8
FUN_140d54a80(longlong *param_1,ulonglong *param_2,undefined4 *param_3,int param_4,longlong param_5,
             ulonglong param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_38;
  
  iVar1 = FUN_140d6dcc0(param_4,param_6);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_4 == 0x72) {
    if (param_6 != DAT_14104c228) {
      FID_conflict__assert((wchar_t *)s_d_1413db960,(wchar_t *)s_D_1413db890,0x231);
    }
    *param_1 = param_5;
    *param_2 = param_6;
    *param_3 = 0;
    uVar2 = 1;
  }
  else {
    for (local_38 = 0; *(int *)(&DAT_14104c5c0 + local_38 * 0x1c) != 0; local_38 = local_38 + 1) {
      lVar3 = local_38 * 0x1c;
      if (*(int *)(&DAT_14104c5c0 + lVar3) == param_4) {
        if (param_6 != (byte)(&DAT_14104c5c4)[lVar3]) {
          FID_conflict__assert((wchar_t *)s_d_1413dba70,(wchar_t *)s_D_1413db9a0,0x23f);
        }
        uVar4 = (ulonglong)(byte)(&DAT_14104c5c5)[lVar3];
        uVar6 = uVar4 + param_6;
        if (uVar6 < uVar4) {
          FUN_140d186f0(4,0,0x8c,s_D__a_1_s_target_release_build_bo_1413dbac0,0x244);
          return 0;
        }
        lVar5 = FUN_140d76180(uVar6);
        if (lVar5 == 0) {
          return 0;
        }
        FUN_140d1d890(lVar5,&UNK_14104c5c6 + lVar3,uVar4);
        FUN_140d1d890(lVar5 + uVar4,param_5,param_6);
        *param_1 = lVar5;
        *param_2 = uVar6;
        *param_3 = 1;
        return 1;
      }
    }
    FUN_140d186f0(4,0,0x8e,s_D__a_1_s_target_release_build_bo_1413dbb30,599);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d551b0 name=FUN_140d551b0 */

undefined * FUN_140d551b0(void)

{
  return &DAT_1414104d8;
}


/* address=140d551c0 name=FUN_140d551c0 */

undefined * FUN_140d551c0(void)

{
  return &DAT_1414104e8;
}


/* address=140d551d0 name=FUN_140d551d0 */

void FUN_140d551d0(code **param_1)

{
  *param_1 = FUN_140e04240;
  param_1[1] = (code *)&LAB_140e042b0;
  return;
}


/* address=140d55220 name=FUN_140d55220 */

void FUN_140d55220(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d551c0();
  FUN_140d89380(uVar1,&LAB_140d55200);
  FUN_140d551b0();
  return;
}


/* address=140d55250 name=FUN_140d55250 */

bool FUN_140d55250(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = *(longlong *)(**(longlong **)(param_1 + 0x10) + 0x28);
  }
  else {
    lVar1 = *(longlong *)(**(longlong **)(param_1 + 0x10) + 0x38);
  }
  return lVar1 != 0;
}


/* address=140d552d0 name=FUN_140d552d0 */

undefined8
FUN_140d552d0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar2 = FUN_140e04100(param_5,param_4);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d55220();
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    if (param_6 == 1) {
      iVar1 = FUN_140e04570(*(undefined8 *)(param_1 + 0x10));
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_140e04420(*(undefined8 *)(param_1 + 0x10));
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_3 == 0) ||
       (iVar1 = FUN_140d71490(*(undefined8 *)(param_1 + 0x10),param_3), iVar1 != 0)) {
      iVar1 = FUN_140d55250(param_1,param_6);
      if (iVar1 != 0) {
        if (param_3 == 0) {
          FUN_140d186f0(6,0,0x77,s_D__a_1_s_target_release_build_bo_1413d3250,0x6d);
          return 0;
        }
        iVar1 = FUN_140d1c5a0(param_1,param_3,param_4);
        if (iVar1 == 0) {
          return 0;
        }
      }
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = *(undefined8 *)(param_1 + 0x10);
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* address=140d55410 name=FUN_140d55410 */

longlong FUN_140d55410(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_48;
  ulonglong local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_20;
  
  lVar1 = FUN_140d5f4e0();
  local_38 = (longlong *)0x0;
  lVar2 = FUN_140d5dfc0();
  local_30 = 0;
  local_40 = 0;
  do {
    if (3 < local_40) {
LAB_140d554a2:
      if (local_30 == 0) {
        FUN_140d186f0(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_1413d43e0,0x207);
        local_48 = 0;
      }
      else {
        uVar3 = FUN_140d5f4f0();
        FUN_140d89470(uVar3);
        local_48 = *local_38;
        uVar3 = FUN_140d5f4f0();
        FUN_140d894d0(uVar3);
        if (local_48 == 0) {
          lVar1 = FUN_140d5f1e0(local_30);
          if (lVar1 == 0) {
            local_48 = 0;
          }
          else {
            local_20 = 0;
            uVar3 = FUN_140d5f4f0();
            FUN_140d894a0(uVar3);
            if (*local_38 == 0) {
              *local_38 = lVar1;
              *(int *)(lVar1 + 0x28) = param_1;
              local_48 = lVar1;
            }
            else {
              local_48 = *local_38;
              local_20 = lVar1;
            }
            uVar3 = FUN_140d5f4f0();
            FUN_140d89500(uVar3);
            FUN_140d555b0(local_20);
          }
        }
      }
      return local_48;
    }
    if (*(int *)(lVar2 + local_40 * 0x38) == param_1) {
      local_30 = lVar2 + local_40 * 0x38;
      local_38 = (longlong *)(lVar1 + local_40 * 8);
      goto LAB_140d554a2;
    }
    local_40 = local_40 + 1;
  } while( true );
}


/* address=140d555b0 name=FUN_140d555b0 */

void FUN_140d555b0(longlong *param_1)

{
  int iVar1;
  
  if (((param_1 != (longlong *)0x0) && (*(int *)(param_1 + 5) == 0)) &&
     (iVar1 = FUN_140d89300(param_1 + 0x26), iVar1 != 0)) {
    if (*(longlong *)(*param_1 + 8) != 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    FUN_140d5ec60(param_1[1],0);
    FUN_140d27660(param_1 + 2);
    FUN_140d2d560(param_1[6]);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d55650 name=FUN_140d55650 */

longlong FUN_140d55650(longlong param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 0)) {
    FUN_140d892b0(param_1 + 0x130);
  }
  return param_1;
}


/* address=140d556a0 name=FUN_140d556a0 */

undefined4 FUN_140d556a0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 local_18;
  
  if (param_1 == param_2) {
    local_18 = 0;
  }
  else if (*(int *)(param_1 + 5) == *(int *)(param_2 + 5)) {
    if (*(int *)(param_1 + 5) == 0) {
      if (((((*param_1 == *param_2) && (param_1[1] != 0)) && (param_2[1] != 0)) &&
          ((iVar1 = FUN_140d29660(param_1 + 2,param_2 + 2), iVar1 == 0 &&
           (iVar1 = FUN_140d29660(param_1 + 7,param_2 + 7), iVar1 == 0)))) &&
         ((iVar1 = FUN_140d594a0(param_1,param_1 + 10,param_2 + 10), iVar1 != 0 &&
          ((iVar1 = FUN_140d594a0(param_1,param_1 + 0x13,param_2 + 0x13), iVar1 != 0 &&
           (iVar1 = FUN_140d5d600(param_1,param_1[1] + 8,param_2[1] + 8), iVar1 != 0)))))) {
        local_18 = 0;
      }
      else {
        local_18 = 1;
      }
    }
    else {
      local_18 = 0;
    }
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d55830 name=FUN_140d55830 */

longlong FUN_140d55830(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140d29a20(param_1 + 0x10);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___1413d4520,(wchar_t *)s_D_1413d4450,0x269);
  }
  return param_1 + 0x10;
}


/* address=140d558e0 name=FUN_140d558e0 */

void FUN_140d558e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d5c250(param_1,param_2,param_3,param_4);
  return;
}


/* address=140d55920 name=FUN_140d55920 */

undefined4 FUN_140d55920(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


/* address=140d55940 name=FUN_140d55940 */

void FUN_140d55940(longlong param_1)

{
  FUN_140d27880(param_1 + 0x38);
  return;
}


/* address=140d55970 name=FUN_140d55970 */

char * FUN_140d55970(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 0x19f) {
    pcVar1 = s_P_256_1413c6284;
  }
  else if (param_1 == 0x2c9) {
    pcVar1 = s_P_224_1413c5ee8;
  }
  else if (param_1 == 0x2cb) {
    pcVar1 = s_P_384_1413c63b4;
  }
  else if (param_1 == 0x2cc) {
    pcVar1 = s_P_521_1413c68b4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}


/* address=140d55a70 name=FUN_140d55a70 */

undefined8 * FUN_140d55a70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_140d186f0(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_1413d4580,0x2a9);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_140d76180(0xe0);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_140d55650(param_1);
      *puVar1 = uVar2;
      FUN_140d5c2f0(puVar1 + 1);
    }
  }
  return puVar1;
}


/* address=140d55b00 name=FUN_140d55b00 */

void FUN_140d55b00(undefined8 param_1)

{
  FUN_140d5ec60(param_1,1);
  return;
}


/* address=140d55b30 name=FUN_140d55b30 */

undefined8 FUN_140d55b30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d556a0(*param_1,*param_2,0);
  if (iVar1 == 0) {
    if (param_1 == param_2) {
      uVar2 = 1;
    }
    else {
      FUN_140d5c350(param_1 + 1,param_2 + 1);
      uVar2 = 1;
    }
  }
  else {
    FUN_140d186f0(0xf,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d45f0,0x2c9);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d55bc0 name=FUN_140d55bc0 */

longlong FUN_140d55bc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140d55a70(param_2);
    if ((lVar2 == 0) || (iVar1 = FUN_140d55b30(lVar2,param_1), iVar1 == 0)) {
      FUN_140d55b00(lVar2);
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* address=140d55cb0 name=FUN_140d55cb0 */

undefined8 FUN_140d55cb0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d556a0(param_1,*param_2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_140d5d300(param_1,param_2 + 1);
  }
  else {
    FUN_140d186f0(0xf,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d46d0,0x2ed);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d55d20 name=FUN_140d55d20 */

undefined8 FUN_140d55d20(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d556a0(param_1,*param_2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_140d5d350(param_1,param_2 + 1);
  }
  else {
    FUN_140d186f0(0xf,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d4740,0x2f6);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d55da0 name=FUN_140d55da0 */

uint FUN_140d55da0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint local_18;
  
  iVar1 = FUN_140d556a0(param_1,*param_2,0);
  if ((iVar1 == 0) && (iVar1 = FUN_140d556a0(param_1,*param_3,0), iVar1 == 0)) {
    iVar1 = FUN_140d5d600(param_1,param_2 + 1,param_3 + 1);
    local_18 = (uint)(iVar1 == 0);
  }
  else {
    FUN_140d186f0(0xf,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d47b0,0x300);
    local_18 = 0xffffffff;
  }
  return local_18;
}


/* address=140d55e60 name=FUN_140d55e60 */

void FUN_140d55e60(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined auStack_108 [32];
  undefined4 local_e8;
  undefined *local_d8;
  undefined *local_d0;
  longlong local_c8;
  undefined local_b8 [80];
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_108;
  if (*(longlong *)(*param_1 + 0x18) == 0) {
    local_e8 = 0x30c;
    FUN_140d186f0(0xf,0,0x42,s_D__a_1_s_target_release_build_bo_1413d4820);
  }
  else {
    iVar1 = FUN_140d556a0(param_1,*param_2,0);
    if (iVar1 == 0) {
      if (param_4 == 0) {
        local_d8 = (undefined *)0x0;
      }
      else {
        local_d8 = local_68;
      }
      if (param_3 == 0) {
        local_d0 = (undefined *)0x0;
      }
      else {
        local_d0 = local_b8;
      }
      local_c8 = *param_1;
      iVar1 = (**(code **)(local_c8 + 0x18))(param_1,param_2 + 1,local_d0,local_d8);
      if ((iVar1 != 0) &&
         (((param_3 == 0 || (iVar1 = FUN_140d59060(param_1,param_3,local_b8), iVar1 != 0)) &&
          (param_4 != 0)))) {
        FUN_140d59060(param_1,param_4,local_68);
      }
    }
    else {
      local_e8 = 0x310;
      FUN_140d186f0(0xf,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d4890);
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_108);
  return;
}


/* address=140d56060 name=FUN_140d56060 */

void FUN_140d56060(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined auStack_178 [32];
  undefined4 local_158;
  undefined local_148 [80];
  undefined local_f8 [80];
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_178;
  iVar1 = FUN_140d556a0(param_1,*param_2,0);
  if (iVar1 == 0) {
    if ((param_3 == 0) || (param_4 == 0)) {
      local_158 = 0x363;
      FUN_140d186f0(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_1413d4ba0);
    }
    else {
      iVar1 = FUN_140d58f40(param_1,local_f8,param_3);
      if (iVar1 != 0) {
        iVar1 = FUN_140d58f40(param_1,local_148,param_4);
        if (iVar1 != 0) {
          iVar1 = FUN_140d59660(param_1,local_a8,local_f8,local_148);
          if (iVar1 != 0) {
            FUN_140d59510(param_1,param_2 + 1,local_a8);
            goto LAB_140d561c0;
          }
        }
      }
      FUN_140d5a8e0(param_1,param_2 + 1);
    }
  }
  else {
    local_158 = 0x35e;
    FUN_140d186f0(0xf,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d4b30);
  }
LAB_140d561c0:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_178);
  return;
}


/* address=140d56230 name=FUN_140d56230 */

void FUN_140d56230(undefined8 param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined auStack_d8 [32];
  undefined8 local_b8;
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_d8;
  iVar1 = FUN_140d556a0(param_1,*param_2,0);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      iVar1 = FUN_140d5d300(param_1,param_2 + 1);
      if (iVar1 == 0) {
        FUN_140d5a500(param_1,param_3);
      }
      else {
        local_b8 = CONCAT44(local_b8._4_4_,0xde);
        FUN_140d186f0(0xf,0,0x77,s_D__a_1_s_target_release_build_bo_1413d6b30);
      }
    }
    else {
      iVar1 = FUN_140d59580(param_1,local_a8,param_2 + 1);
      if (iVar1 != 0) {
        local_b8 = param_5;
        FUN_140d5a5a0(param_1,local_a8,param_3,param_4);
      }
    }
  }
  else {
    local_b8 = CONCAT44(local_b8._4_4_,0xd7);
    FUN_140d186f0(0xf,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d6ac0);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140d56380 name=FUN_140d56380 */

longlong FUN_140d56380(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_4 = 0;
  lVar1 = FUN_140d56230(param_1,param_2,param_3,0,0,param_5);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_140d76180(lVar1);
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_140d56230(param_1,param_2,param_3,lVar2,lVar1,param_5);
      if (lVar1 == 0) {
        FUN_140d762b0(lVar2);
        lVar1 = 0;
      }
      else {
        *param_4 = lVar2;
      }
    }
  }
  return lVar1;
}


/* address=140d56460 name=FUN_140d56460 */

undefined8
FUN_140d56460(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  iVar1 = FUN_140d556a0(param_1,*param_2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_140d600a0(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_140d186f0(0xf,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d6a50,CONCAT44(uVar3,0xcd));
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d564f0 name=FUN_140d564f0 */

undefined4
FUN_140d564f0(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4,longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  uint local_30;
  undefined4 local_28;
  longlong local_20;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar1 = FUN_140d556a0(param_1,*param_2,0);
  if (iVar1 != 0) {
    FUN_140d186f0(0xf,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d6ba0,CONCAT44(uVar10,0x103));
    return 0;
  }
  iVar1 = FUN_140d27a70(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_140d29660(param_3,param_1 + 0x38), -1 < iVar1)) {
    FUN_140d186f0(0xf,0,0x6b,s_D__a_1_s_target_release_build_bo_1413d6c10,CONCAT44(uVar10,0x108));
    return 0;
  }
  local_20 = 0;
  local_28 = 0;
  FUN_140d18390();
  if ((param_5 == 0) && (param_5 = FUN_140d27f30(), local_20 = param_5, param_5 == 0)) {
    return 0;
  }
  local_30 = (uint)(param_4 != 0);
  FUN_140d28030(param_5);
  uVar4 = FUN_140d28090(param_5);
  uVar5 = FUN_140d28090(param_5);
  uVar6 = FUN_140d28090(param_5);
  uVar7 = FUN_140d28090(param_5);
  lVar8 = FUN_140d28090(param_5);
  if ((((lVar8 != 0) && (iVar1 = FUN_140d558e0(param_1,0,uVar6,uVar7,param_5), iVar1 != 0)) &&
      (iVar1 = FUN_140d2ac70(uVar5,param_3,param_1 + 0x38,param_5), iVar1 != 0)) &&
     (iVar1 = FUN_140d2aba0(uVar4,uVar5,param_3,param_1 + 0x38,param_5), iVar1 != 0)) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      iVar1 = FUN_140d2aba0(uVar5,uVar6,param_3,param_1 + 0x38,param_5);
      if (iVar1 == 0) goto LAB_140d569fd;
      iVar1 = FUN_140d3e2b0(uVar4,uVar4,uVar5,param_1 + 0x38,param_5);
    }
    else {
      iVar1 = FUN_140d3e5e0(uVar5,param_3,param_1 + 0x38,param_5);
      if ((iVar1 == 0) ||
         (iVar1 = FUN_140d3e2b0(uVar5,uVar5,param_3,param_1 + 0x38,param_5), iVar1 == 0))
      goto LAB_140d569fd;
      iVar1 = FUN_140d3e490(uVar4,uVar4,uVar5,param_1 + 0x38,param_5);
    }
    if (iVar1 != 0) {
      lVar9 = param_5;
      iVar1 = FUN_140d3e2b0(uVar4,uVar4,uVar7,param_1 + 0x38,param_5);
      uVar10 = (undefined4)((ulonglong)lVar9 >> 0x20);
      if (iVar1 != 0) {
        lVar9 = FUN_140d2af20(lVar8,uVar4,param_1 + 0x38,param_5);
        if (lVar9 == 0) {
          uVar2 = FUN_140d17e80();
          iVar1 = FUN_140d2f660(uVar2);
          if ((iVar1 == 3) && (iVar1 = FUN_140d2f680(uVar2), iVar1 == 0x6e)) {
            FUN_140d18390();
            FUN_140d186f0(0xf,0,0x6b,s_D__a_1_s_target_release_build_bo_1413d6c80,
                          CONCAT44(uVar10,0x147));
          }
          else {
            FUN_140d186f0(0xf,0,3,s_D__a_1_s_target_release_build_bo_1413d6cf0,
                          CONCAT44(uVar10,0x149));
          }
        }
        else {
          uVar3 = FUN_140d29af0(lVar8);
          if (local_30 != uVar3) {
            iVar1 = FUN_140d29a20(lVar8);
            if (iVar1 != 0) {
              FUN_140d186f0(0xf,0,0x6c,s_D__a_1_s_target_release_build_bo_1413d6d60,
                            CONCAT44(uVar10,0x150));
              goto LAB_140d569fd;
            }
            iVar1 = FUN_140d28650(lVar8,param_1 + 0x38,lVar8);
            if (iVar1 == 0) goto LAB_140d569fd;
          }
          uVar3 = FUN_140d29af0(lVar8);
          if (local_30 == uVar3) {
            iVar1 = FUN_140d56060(param_1,param_2,param_3,lVar8,param_5);
            if (iVar1 != 0) {
              local_28 = 1;
            }
          }
          else {
            FUN_140d186f0(0xf,0,0x44,s_D__a_1_s_target_release_build_bo_1413d6dd0,
                          CONCAT44(uVar10,0x158));
          }
        }
      }
    }
  }
LAB_140d569fd:
  FUN_140d281e0(param_5);
  FUN_140d27fa0(local_20);
  return local_28;
}


/* address=140d56c50 name=FUN_140d56c50 */

void FUN_140d56c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_140d1dc00();
  FUN_140d598a0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* address=140d571d0 name=FUN_140d571d0 */

void FUN_140d571d0(void)

{
  FUN_140d571f0(0);
  return;
}


/* address=140d571f0 name=FUN_140d571f0 */

longlong FUN_140d571f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140d76180(0x38);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_140d1d930(lVar2,0,0x38);
    if (param_1 != 0) {
      uVar3 = FUN_140e05510(param_1);
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
    }
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      FUN_140e05530(*(undefined8 *)(lVar2 + 0x28));
    }
    *(undefined4 *)(lVar2 + 0x1c) = 4;
    *(undefined4 *)(lVar2 + 0x20) = 1;
    FUN_140d89ca0(lVar2 + 0x30);
    if (((*(longlong *)(lVar2 + 0x28) != 0) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x10) != 0)) &&
       (iVar1 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2), iVar1 == 0)) {
      uVar3 = FUN_140d5f5e0();
      FUN_140d89cc0(uVar3,lVar2,lVar2 + 0x30);
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FUN_140e05570(*(undefined8 *)(lVar2 + 0x28));
      }
      FUN_140d762b0(lVar2);
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* address=140d57380 name=FUN_140d57380 */

void FUN_140d57380(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = FUN_140d89300(param_1 + 4), iVar1 != 0)) {
    if (param_1[5] != 0) {
      if (*(longlong *)(param_1[5] + 0x18) != 0) {
        (**(code **)(param_1[5] + 0x18))(param_1);
      }
      FUN_140e05570(param_1[5]);
    }
    FUN_140d555b0(*param_1);
    FUN_140d55b00(param_1[1]);
    FUN_140d5f680(param_1[2]);
    uVar2 = FUN_140d5f5e0();
    FUN_140d89cc0(uVar2,param_1,param_1 + 6);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d57560 name=FUN_140d57560 */

undefined8 FUN_140d57560(longlong param_1)

{
  FUN_140d892b0(param_1 + 0x20);
  return 1;
}


/* address=140d57590 name=FUN_140d57590 */

undefined4 FUN_140d57590(longlong param_1)

{
  undefined4 local_18;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x28) + 0x30) & 1) == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d575e0 name=FUN_140d575e0 */

undefined8 FUN_140d575e0(undefined8 *param_1)

{
  return *param_1;
}


/* address=140d57600 name=FUN_140d57600 */

bool FUN_140d57600(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (*param_1 == 0) {
    if (param_1[2] != 0) {
      FID_conflict__assert((wchar_t *)s_k_1413d5638,(wchar_t *)s_D_1413d5560,0xe1);
    }
    if (param_1[1] != 0) {
      FID_conflict__assert((wchar_t *)s_k_1413d5748,(wchar_t *)s_D_1413d5670,0xe2);
    }
    FUN_140d555b0(*param_1);
    lVar2 = FUN_140d55650(param_2);
    *param_1 = lVar2;
    bVar3 = *param_1 != 0;
  }
  else {
    iVar1 = FUN_140d556a0(*param_1,param_2,0);
    if (iVar1 == 0) {
      bVar3 = true;
    }
    else {
      FUN_140d186f0(0xf,0,0x82,s_D__a_1_s_target_release_build_bo_1413d54f0,0xdb);
      bVar3 = false;
    }
  }
  return bVar3;
}


/* address=140d57700 name=FUN_140d57700 */

undefined8 FUN_140d57700(longlong param_1)

{
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 0x10);
  }
  return local_18;
}


/* address=140d57740 name=FUN_140d57740 */

undefined8 FUN_140d57740(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    FUN_140d186f0(0xf,0,0x72,s_D__a_1_s_target_release_build_bo_1413d5780,0xef);
  }
  else {
    lVar2 = FUN_140d5f5f0(*param_1);
    if (lVar2 != 0) {
      iVar1 = FUN_140d58780(*param_1,lVar2 + 0x18,param_2);
      if ((iVar1 != 0) && (iVar1 = FUN_140d58a80(*param_1,lVar2 + 0x18), iVar1 == 0)) {
        FUN_140d5f680(param_1[2]);
        param_1[2] = lVar2;
        return 1;
      }
      FUN_140d186f0(0xf,0,0x71,s_D__a_1_s_target_release_build_bo_1413d57f0,0xf9);
      FUN_140d5f680(lVar2);
    }
  }
  return 0;
}


/* address=140d57840 name=FUN_140d57840 */

undefined8 FUN_140d57840(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=140d57860 name=FUN_140d57860 */

bool FUN_140d57860(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (*param_1 == 0) {
    FUN_140d186f0(0xf,0,0x72,s_D__a_1_s_target_release_build_bo_1413d5860,0x108);
    bVar3 = false;
  }
  else if ((param_2 == (undefined8 *)0x0) ||
          (iVar1 = FUN_140d556a0(*param_1,*param_2,0), iVar1 == 0)) {
    FUN_140d55b00(param_1[1]);
    lVar2 = FUN_140d55bc0(param_2,*param_1);
    param_1[1] = lVar2;
    bVar3 = param_1[1] != 0;
  }
  else {
    FUN_140d186f0(0xf,0,0x82,s_D__a_1_s_target_release_build_bo_1413d58d0,0x10d);
    bVar3 = false;
  }
  return bVar3;
}


/* address=140d57940 name=FUN_140d57940 */

undefined4 FUN_140d57940(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


/* address=140d57980 name=FUN_140d57980 */

undefined4 FUN_140d57980(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


/* address=140d579c0 name=FUN_140d579c0 */

void FUN_140d579c0(longlong *param_1)

{
  int iVar1;
  undefined auStack_128 [32];
  undefined4 local_108;
  undefined local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_128;
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) {
    local_108 = 0x126;
    FUN_140d186f0(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_1413d5940);
  }
  else {
    iVar1 = FUN_140d55cb0(*param_1,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = FUN_140d55d20(*param_1,param_1[1],0);
      if (iVar1 == 0) {
        local_108 = 0x131;
        FUN_140d186f0(0xf,0,0x78,s_D__a_1_s_target_release_build_bo_1413d5a20);
      }
      else if (param_1[2] != 0) {
        iVar1 = FUN_140d59c30(*param_1,local_f8,param_1[2] + 0x18);
        if (iVar1 == 0) {
          local_108 = 0x13d;
          FUN_140d186f0(0xf,0,0xf,s_D__a_1_s_target_release_build_bo_1413d5a90);
        }
        else {
          iVar1 = FUN_140d5d600(*param_1,local_f8,param_1[1] + 8);
          if (iVar1 == 0) {
            local_108 = 0x142;
            FUN_140d186f0(0xf,0,0x71,s_D__a_1_s_target_release_build_bo_1413d5b00);
          }
        }
      }
    }
    else {
      local_108 = 299;
      FUN_140d186f0(0xf,0,0x77,s_D__a_1_s_target_release_build_bo_1413d59b0);
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=140d57ba0 name=FUN_140d57ba0 */

void FUN_140d57ba0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined auStack_68 [32];
  undefined4 local_48;
  int local_38;
  int local_34;
  int local_30;
  longlong local_28;
  byte local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_140d272d0();
  iVar1 = FUN_140d57590(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_140d579c0(param_1);
    if (iVar1 != 0) {
      if (*(longlong *)(param_1 + 0x10) != 0) {
        pbVar3 = local_20;
        for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
          *pbVar3 = 0;
          pbVar3 = pbVar3 + 1;
        }
        local_28 = FUN_140d5e1b0(local_20,0x10,param_1);
        iVar1 = FUN_140d1dc30(s_ECDSA_PWCT_1413d5be0);
        if (iVar1 != 0) {
          local_20[0] = ~local_20[0];
        }
        if ((local_28 == 0) || (iVar1 = FUN_140d5e3f0(local_20,0x10,local_28,param_1), iVar1 == 0))
        {
          local_34 = 0;
        }
        else {
          local_34 = 1;
        }
        local_30 = local_34;
        FUN_140d5e060(local_28);
        if (local_30 == 0) {
          local_48 = 0x162;
          FUN_140d186f0(0xf,0,0x84,s_D__a_1_s_target_release_build_bo_1413d5bf0);
          goto LAB_140d57cf1;
        }
      }
      local_38 = 1;
    }
  }
  else {
    local_48 = 0x150;
    FUN_140d186f0(0xf,0,0x84,s_D__a_1_s_target_release_build_bo_1413d5b70);
  }
LAB_140d57cf1:
  FUN_140d272e0();
  if (local_38 != 0) {
    FUN_140d27310(param_1);
  }
  FUN_140e28050(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=140d57e30 name=FUN_140d57e30 */

undefined4 FUN_140d57e30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (*param_1 != 0) {
    lVar2 = FUN_140d55a70(*param_1);
    if (((lVar2 == 0) || (iVar1 = FUN_140d56460(*param_1,lVar2,param_2,param_3,param_4), iVar1 == 0)
        ) || (iVar1 = FUN_140d57860(param_1,lVar2), iVar1 == 0)) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    FUN_140d55b00(lVar2);
    return local_18;
  }
  FUN_140d186f0(0xf,0,0x72,s_D__a_1_s_target_release_build_bo_1413d5cd0,0x18d);
  return 0;
}


/* address=140d57f10 name=FUN_140d57f10 */

undefined8 FUN_140d57f10(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (param_1[1] == 0)) || (*param_1 == 0)) {
    FUN_140d186f0(0xf,0,0x72,s_D__a_1_s_target_release_build_bo_1413d5d40,0x19c);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d56380(*param_1,param_1[1],param_2,param_3,param_4);
  }
  return uVar1;
}


/* address=140d58090 name=FUN_140d58090 */

ulonglong FUN_140d58090(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_10 [2];
  
  if ((*param_1 == 0) || (param_1[2] == 0)) {
    FUN_140d186f0(0xf,0,0x72,s_D__a_1_s_target_release_build_bo_1413d5e90,0x1b7);
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_140d55830(*param_1);
    uVar1 = FUN_140d278e0(uVar3);
    uVar2 = (ulonglong)uVar1;
    if (param_2 != 0) {
      if (param_3 < uVar2) {
        FUN_140d186f0(0xf,0,100,s_D__a_1_s_target_release_build_bo_1413d5f00,0x1c1);
        uVar2 = 0;
      }
      else {
        FUN_140d58810(*param_1,param_2,local_10,param_1[2] + 0x18);
        if (local_10[0] != uVar2) {
          FID_conflict__assert((wchar_t *)s_b_1413d6048,(wchar_t *)s_D_1413d5f70,0x1c7);
        }
      }
    }
  }
  return uVar2;
}


/* address=140d58250 name=FUN_140d58250 */

undefined8 FUN_140d58250(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    FUN_140d186f0(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_1413d6080,0x1e3);
  }
  else {
    uVar3 = FUN_140d55830(*param_1);
    uVar1 = FUN_140d27880(uVar3);
    if (uVar1 < 0xa0) {
      FUN_140d186f0(0xf,0,0x70,s_D__a_1_s_target_release_build_bo_1413d60f0,0x1e9);
    }
    else {
      lVar4 = FUN_140d5f5f0(*param_1);
      lVar5 = FUN_140d55a70(*param_1);
      if ((((lVar4 != 0) && (lVar5 != 0)) &&
          (iVar2 = FUN_140d589c0(*param_1,lVar4 + 0x18,&DAT_14104c740), iVar2 != 0)) &&
         (iVar2 = FUN_140d59c30(*param_1,lVar5 + 8,lVar4 + 0x18), iVar2 != 0)) {
        FUN_140d5f680(param_1[2]);
        param_1[2] = lVar4;
        FUN_140d55b00(param_1[1]);
        param_1[1] = lVar5;
        return 1;
      }
      FUN_140d55b00(lVar5);
      FUN_140d5f680(lVar4);
    }
  }
  return 0;
}


/* address=140d58780 name=FUN_140d58780 */

undefined8 FUN_140d58780(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d2fbc0(param_2,(longlong)*(int *)(param_1 + 0x18),param_3);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_140d3bcc0(param_2,*(undefined8 *)(param_1 + 0x10),
                            (longlong)*(int *)(param_1 + 0x18)), iVar1 != 0)) {
    return 1;
  }
  FUN_140d186f0(0xf,0,0x85,s_D__a_1_s_target_release_build_bo_1413d7f50,0x1c);
  return 0;
}


/* address=140d58810 name=FUN_140d58810 */

void FUN_140d58810(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_140d278e0(param_1 + 0x10);
  FUN_140d401a0(param_2,(ulonglong)uVar1,param_4,(longlong)*(int *)(param_1 + 0x18));
  *param_3 = (ulonglong)uVar1;
  return;
}


/* address=140d58880 name=FUN_140d58880 */

undefined8 FUN_140d58880(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_140d278e0(param_1 + 0x10);
  if (param_4 == uVar1) {
    FUN_140d40040(param_2,(longlong)*(int *)(param_1 + 0x18),param_3,param_4);
    iVar2 = FUN_140d3bcc0(param_2,*(undefined8 *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0x18)
                         );
    if (iVar2 == 0) {
      FUN_140d186f0(0xf,0,0x85,s_D__a_1_s_target_release_build_bo_1413d8030,0x47);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    FUN_140d186f0(0xf,0,0x85,s_D__a_1_s_target_release_build_bo_1413d7fc0,0x40);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d589c0 name=FUN_140d589c0 */

void FUN_140d589c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d3bd80(param_2,1,*(undefined8 *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0x18),param_3
               );
  return;
}


/* address=140d58a10 name=FUN_140d58a10 */

bool FUN_140d58a10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d1d850(param_2,param_3,(longlong)*(int *)(param_1 + 0x18) << 3);
  return iVar1 == 0;
}


/* address=140d58a80 name=FUN_140d58a80 */

bool FUN_140d58a80(longlong param_1,longlong param_2)

{
  int local_18;
  ulonglong local_10;
  
  local_10 = 0;
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x18); local_18 = local_18 + 1) {
    local_10 = local_10 | *(ulonglong *)(param_2 + (longlong)local_18 * 8);
  }
  return local_10 == 0;
}


/* address=140d58b00 name=FUN_140d58b00 */

void FUN_140d58b00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  local_78 = (undefined8 *)(param_1 + 0x10);
  local_80 = (longlong)*(int *)(param_1 + 0x18);
  local_88 = local_68;
  local_70 = param_2;
  FUN_140d3e240(param_2,param_3,param_4,*local_78);
  FUN_140d76450(local_68,0x48);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d58bc0 name=FUN_140d58bc0 */

void FUN_140d58bc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  local_78 = (undefined8 *)(param_1 + 0x10);
  local_80 = (longlong)*(int *)(param_1 + 0x18);
  local_88 = local_68;
  local_70 = param_2;
  FUN_140d3e400(param_2,param_3,param_4,*local_78);
  FUN_140d76450(local_68,0x48);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d58d00 name=FUN_140d58d00 */

void FUN_140d58d00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d3f630(param_2,param_3,(longlong)*(int *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30));
  return;
}


/* address=140d58d70 name=FUN_140d58d70 */

void FUN_140d58d70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d3f680(param_2,(longlong)*(int *)(param_1 + 0x18),param_3,
                (longlong)*(int *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30));
  return;
}


/* address=140d58de0 name=FUN_140d58de0 */

void FUN_140d58de0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d3f7a0(param_2,param_3,param_4,(longlong)*(int *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x30));
  return;
}


/* address=140d58e50 name=FUN_140d58e50 */

void FUN_140d58e50(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3);
  return;
}


/* address=140d58e90 name=FUN_140d58e90 */

void FUN_140d58e90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3);
  return;
}


/* address=140d58f40 name=FUN_140d58f40 */

void FUN_140d58f40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined auStack_a8 [32];
  undefined4 local_88;
  ulonglong local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_140d278e0(param_1 + 0x38);
  local_78 = (ulonglong)uVar1;
  if (0x42 < local_78) {
    FID_conflict__assert((wchar_t *)s_s_1413d63b8,(wchar_t *)s_D_1413d62e0,0x1d);
  }
  iVar2 = FUN_140d27a70(param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_140d29660(param_3,param_1 + 0x38);
    if (iVar2 < 0) {
      iVar2 = FUN_140d27df0(local_68,local_78,param_3);
      if (iVar2 != 0) {
        FUN_140d59150(param_1,param_2,local_68,local_78);
        goto LAB_140d59036;
      }
    }
  }
  local_88 = 0x21;
  FUN_140d186f0(0xf,0,0x65,s_D__a_1_s_target_release_build_bo_1413d63f0);
LAB_140d59036:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d59060 name=FUN_140d59060 */

void FUN_140d59060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined auStack_98 [32];
  uint local_78;
  undefined8 local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_98;
  FUN_140d59100(param_1,local_68,&local_70,param_3);
  lVar1 = FUN_140d27ab0(local_68,local_70,param_2);
  local_78 = (uint)(lVar1 != 0);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=140d59100 name=FUN_140d59100 */

void FUN_140d59100(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_4);
  return;
}


/* address=140d59150 name=FUN_140d59150 */

void FUN_140d59150(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,param_4);
  return;
}


/* address=140d591a0 name=FUN_140d591a0 */

void FUN_140d591a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int local_28;
  
  uVar1 = FUN_140d593c0(param_1,param_3);
  lVar2 = FUN_140d30d80(param_2,*(undefined8 *)(param_1 + 0x38),param_3,
                        (longlong)*(int *)(param_1 + 0x40));
  if (lVar2 != 0) {
    FID_conflict__assert((wchar_t *)s_b_1413d6538,(wchar_t *)s_D_1413d6460,0x3e);
  }
  for (local_28 = 0; local_28 < *(int *)(param_1 + 0x40); local_28 = local_28 + 1) {
    *(ulonglong *)(param_2 + (longlong)local_28 * 8) =
         *(ulonglong *)(param_2 + (longlong)local_28 * 8) & uVar1;
  }
  return;
}


/* address=140d59280 name=FUN_140d59280 */

void FUN_140d59280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  local_80 = (longlong)*(int *)(param_1 + 0x40);
  local_88 = local_68;
  local_78 = param_2;
  FUN_140d3e240(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x38));
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d59320 name=FUN_140d59320 */

void FUN_140d59320(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  local_80 = (longlong)*(int *)(param_1 + 0x40);
  local_88 = local_68;
  local_78 = param_2;
  FUN_140d3e400(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x38));
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d593c0 name=FUN_140d593c0 */

ulonglong FUN_140d593c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int local_18;
  ulonglong local_10;
  
  local_10 = 0;
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x40); local_18 = local_18 + 1) {
    local_10 = local_10 | *(ulonglong *)(param_2 + (longlong)local_18 * 8);
  }
  uVar1 = FUN_140d1d680(local_10);
  return ~uVar1;
}


/* address=140d59440 name=FUN_140d59440 */

void FUN_140d59440(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_140d2f990(param_2,param_3,param_4,param_5,(longlong)*(int *)(param_1 + 0x40));
  return;
}


/* address=140d594a0 name=FUN_140d594a0 */

bool FUN_140d594a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d76480(param_2,param_3,(longlong)*(int *)(param_1 + 0x40) << 3);
  return iVar1 == 0;
}


/* address=140d59510 name=FUN_140d59510 */

void FUN_140d59510(longlong param_1,undefined *param_2,undefined *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = param_3;
  puVar3 = param_2;
  for (lVar1 = 0x48; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_3 + 0x48;
  puVar3 = param_2 + 0x48;
  for (lVar1 = 0x48; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined *)(param_1 + 0x140);
  puVar3 = param_2 + 0x90;
  for (lVar1 = 0x48; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


/* address=140d59580 name=FUN_140d59580 */

void FUN_140d59580(longlong *param_1,longlong param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x18))(param_1,param_3,param_2,param_2 + 0x48);
  return;
}


/* address=140d595e0 name=FUN_140d595e0 */

undefined8 FUN_140d595e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*param_1 + 0x20) == 0) {
    FUN_140d186f0(0xf,0,0x42,s_D__a_1_s_target_release_build_bo_1413d4900,0x333);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}


/* address=140d59660 name=FUN_140d59660 */

void FUN_140d59660(longlong *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined auStack_108 [32];
  undefined4 local_e8;
  code *local_d8;
  code *local_d0;
  undefined local_c8 [80];
  undefined local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_108;
  local_d0 = *(code **)(*param_1 + 0x70);
  local_d8 = *(code **)(*param_1 + 0x78);
  (*local_d8)(param_1,local_78,param_4);
  (*local_d8)(param_1,local_c8,param_3);
  FUN_140d59280(param_1,local_c8,local_c8,param_1 + 10);
  (*local_d0)(param_1,local_c8,local_c8,param_3);
  FUN_140d59280(param_1,local_c8,local_c8,param_1 + 0x13);
  iVar1 = FUN_140d594a0(param_1,local_78,local_c8);
  if (iVar1 == 0) {
    local_e8 = 0x348;
    FUN_140d186f0(0xf,0,0x78,s_D__a_1_s_target_release_build_bo_1413d4970);
    if (param_1[1] != 0) {
      iVar1 = FUN_140d594a0(param_1,param_1 + 0x28,param_1[1] + 0x98);
      if (iVar1 == 0) {
        FID_conflict__assert((wchar_t *)s_e_1413d4ab0,(wchar_t *)s_D_1413d49e0,0x34e);
      }
      puVar3 = (undefined *)(param_1[1] + 8);
      puVar4 = param_2;
      for (lVar2 = 0x48; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = (undefined *)(param_1[1] + 0x50);
      puVar4 = param_2 + 0x48;
      for (lVar2 = 0x48; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  else {
    puVar3 = param_2;
    for (lVar2 = 0x48; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar3 = param_2 + 0x48;
    for (lVar2 = 0x48; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_4;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  FUN_140e28050(local_28 ^ (ulonglong)auStack_108);
  return;
}


/* address=140d598a0 name=FUN_140d598a0 */

void FUN_140d598a0(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6)

{
  int iVar1;
  undefined auStack_1e8 [32];
  undefined4 local_1c8;
  uint local_1b8;
  uint local_1b4;
  undefined4 local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined local_198 [80];
  undefined local_148 [80];
  undefined local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_1e8;
  if ((param_3 != 0) || (param_5 != 0)) {
    local_1b4 = (uint)(param_4 == (undefined8 *)0x0);
    local_1b8 = (uint)(param_5 == 0);
    if (local_1b4 == local_1b8) {
      iVar1 = FUN_140d556a0(param_1,*param_2,0);
      if ((iVar1 != 0) ||
         ((param_4 != (undefined8 *)0x0 && (iVar1 = FUN_140d556a0(param_1,*param_4,0), iVar1 != 0)))
         ) {
        local_1c8 = 0x3be;
        FUN_140d186f0(0xf,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d4dd0);
        goto LAB_140d59b52;
      }
      local_1b0 = 0;
      local_1a8 = 0;
      if (((param_6 != 0) || (param_6 = FUN_140d27f30(), local_1a8 = param_6, param_6 != 0)) &&
         ((param_3 == 0 ||
          ((iVar1 = FUN_140d5f500(param_1,local_198,param_3,param_6), iVar1 != 0 &&
           (iVar1 = FUN_140d59c30(param_1,param_2 + 1,local_198), iVar1 != 0)))))) {
        if (param_5 != 0) {
          iVar1 = FUN_140d5f500(param_1,local_148,param_5,param_6);
          if ((iVar1 == 0) ||
             (iVar1 = FUN_140d59b70(param_1,local_f8,param_4 + 1,local_148), iVar1 == 0))
          goto LAB_140d59b44;
          if (param_3 == 0) {
            FUN_140d1d890(param_2 + 1,local_f8,0xd8);
          }
          else {
            local_1a0 = *param_1;
            (**(code **)(local_1a0 + 0x28))(param_1,param_2 + 1,param_2 + 1,local_f8);
          }
        }
        local_1b0 = 1;
      }
LAB_140d59b44:
      FUN_140d27fa0(local_1a8);
      goto LAB_140d59b52;
    }
  }
  local_1c8 = 0x3b8;
  FUN_140d186f0(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_1413d4d60);
LAB_140d59b52:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_1e8);
  return;
}


/* address=140d59b70 name=FUN_140d59b70 */

undefined8 FUN_140d59b70(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    FUN_140d186f0(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_1413d4f20,0x41b);
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4);
    iVar1 = FUN_140d5d350(param_1,param_2);
    if (iVar1 == 0) {
      FUN_140d186f0(0xf,0,0x44,s_D__a_1_s_target_release_build_bo_1413d4f90,0x424);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d59c30 name=FUN_140d59c30 */

undefined8 FUN_140d59c30(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    FUN_140d186f0(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_1413d5000,0x42e);
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
    iVar1 = FUN_140d5d350(param_1,param_2);
    if (iVar1 == 0) {
      FUN_140d186f0(0xf,0,0x44,s_D__a_1_s_target_release_build_bo_1413d5070,0x437);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d59f30 name=FUN_140d59f30 */

undefined8
FUN_140d59f30(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  undefined8 uVar1;
  
  if (((param_3 == 0) || (param_5 == 0)) || (param_4 == 0)) {
    FUN_140d186f0(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_1413d4e40,0x3ff);
    uVar1 = 0;
  }
  else if (*(longlong *)(*param_1 + 0x50) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3,param_4,param_5,1);
  }
  else {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3,param_4,param_5);
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d5a0a0 name=FUN_140d5a0a0 */

void FUN_140d5a0a0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  FUN_140d59440(param_1,param_2,param_3,param_4,param_5);
  FUN_140d59440(param_1,param_2 + 0x48,param_3,param_4 + 0x48,param_5 + 0x48);
  FUN_140d59440(param_1,param_2 + 0x90,param_3,param_4 + 0x90,param_5 + 0x90);
  return;
}


/* address=140d5a160 name=FUN_140d5a160 */

void FUN_140d5a160(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  FUN_140d59440(param_1,param_2,param_3,param_4,param_5);
  FUN_140d59440(param_1,param_2 + 0x48,param_3,param_4 + 0x48,param_5 + 0x48);
  return;
}


/* address=140d5a280 name=Read */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __cdecl CSettingsStore::Read(char const * __ptr64,int & __ptr64) __ptr64
    public: virtual int __cdecl CSettingsStore::Read(wchar_t const * __ptr64,int & __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

void Read(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3);
  return;
}


/* address=140d5a2c0 name=FUN_140d5a2c0 */

void FUN_140d5a2c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined auStack_108 [32];
  longlong local_e8;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8 [10];
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_108;
  local_e8 = param_3;
  iVar1 = FUN_140d5a3d0(param_1,local_68,&local_d0,0x42);
  if (iVar1 != 0) {
    local_d8 = (undefined8 *)(param_1 + 0x10);
    puVar3 = local_b8;
    for (lVar2 = 0x50; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined *)puVar3 = 0;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    }
    FUN_140d40040(local_b8,(longlong)(*(int *)(param_1 + 0x18) + 1),local_68,local_d0);
    local_e8 = (longlong)*(int *)(local_d8 + 1);
    local_c8 = param_2;
    FUN_140d3d1d0(param_2,local_b8,local_b8[*(int *)(local_d8 + 1)],*local_d8);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_108);
  return;
}


/* address=140d5a3d0 name=FUN_140d5a3d0 */

void FUN_140d5a3d0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined auStack_a8 [32];
  undefined4 local_88;
  ulonglong local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_140d278e0(param_1 + 7);
  local_78 = (ulonglong)uVar1;
  if (0x42 < local_78) {
    FID_conflict__assert((wchar_t *)s_l_1413d53e0,(wchar_t *)s_D_1413d5310,0x4b6);
  }
  if (param_4 < local_78) {
    local_88 = 0x4b8;
    FUN_140d186f0(0xf,0,100,s_D__a_1_s_target_release_build_bo_1413d5410);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_5,local_68,0);
    if (iVar2 != 0) {
      FUN_140d59100(param_1,param_2,param_3,local_68);
      *param_3 = local_78;
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d5a500 name=FUN_140d5a500 */

longlong FUN_140d5a500(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if ((param_2 == 2) || (param_2 == 4)) {
    uVar1 = FUN_140d278e0(param_1 + 0x38);
    lVar2 = (ulonglong)uVar1 + 1;
    if (param_2 == 4) {
      lVar2 = lVar2 + (ulonglong)uVar1;
    }
  }
  else {
    FUN_140d186f0(0xf,0,0x6f,s_D__a_1_s_target_release_build_bo_1413d6550,0x4f);
    lVar2 = 0;
  }
  return lVar2;
}


/* address=140d5a5a0 name=FUN_140d5a5a0 */

void FUN_140d5a5a0(longlong param_1,longlong param_2,int param_3,char *param_4,ulonglong param_5)

{
  uint uVar1;
  char local_res18;
  undefined auStack_a8 [32];
  undefined4 local_88;
  ulonglong local_78;
  undefined8 local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  local_70 = FUN_140d5a500(param_1,param_3);
  if (param_5 < local_70) {
    local_88 = 0x61;
    FUN_140d186f0(0xf,0,100,s_D__a_1_s_target_release_build_bo_1413d65c0);
  }
  else {
    FUN_140d59100(param_1,param_4 + 1,&local_78,param_2);
    uVar1 = FUN_140d278e0(param_1 + 0x38);
    if (local_78 != uVar1) {
      FID_conflict__assert((wchar_t *)s_f_1413d6700,(wchar_t *)s_D_1413d6630,0x67);
    }
    local_res18 = (char)param_3;
    if (param_3 == 4) {
      FUN_140d59100(param_1,param_4 + local_78 + 1,&local_78,param_2 + 0x48);
      uVar1 = FUN_140d278e0(param_1 + 0x38);
      if (local_78 != uVar1) {
        FID_conflict__assert((wchar_t *)s_f_1413d6830,(wchar_t *)s_D_1413d6760,0x6b);
      }
      *param_4 = local_res18;
    }
    else {
      FUN_140d59100(param_1,local_68,&local_78,param_2 + 0x48);
      *param_4 = local_res18 + (local_68[local_78 - 1] & 1);
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d5a790 name=FUN_140d5a790 */

void FUN_140d5a790(longlong param_1,undefined8 param_2,char *param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  undefined auStack_f8 [32];
  undefined4 local_d8;
  ulonglong local_c8;
  undefined local_b8 [80];
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_f8;
  uVar1 = FUN_140d278e0(param_1 + 0x38);
  local_c8 = (ulonglong)uVar1;
  if ((param_4 == local_c8 * 2 + 1) && (*param_3 == '\x04')) {
    iVar2 = FUN_140d59150(param_1,local_68,param_3 + 1,local_c8);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_140d59150(param_1,local_b8,param_3 + local_c8 + 1,local_c8), iVar2 != 0)) {
      FUN_140d59660(param_1,param_2,local_68,local_b8);
    }
  }
  else {
    local_d8 = 0x7a;
    FUN_140d186f0(0xf,0,0x6d,s_D__a_1_s_target_release_build_bo_1413d6890);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_f8);
  return;
}


/* address=140d5a8e0 name=FUN_140d5a8e0 */

void FUN_140d5a8e0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_140d5c3d0(param_1,param_2);
  }
  else {
    FUN_140d5c350(param_2,*(longlong *)(param_1 + 8) + 8);
  }
  return;
}


/* address=140d5ab20 name=FUN_140d5ab20 */

void FUN_140d5ab20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d5fef0();
  FUN_140d89380(uVar1,&LAB_140d60080);
  FUN_140d5fee0();
  return;
}


/* address=140d5ab50 name=FUN_140d5ab50 */

undefined8 * FUN_140d5ab50(code **param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == (code **)0x0) {
    FUN_140d186f0(0xf,0,0x79,s_D__a_1_s_target_release_build_bo_1413d3ca0,0x115);
    puVar2 = (undefined8 *)0x0;
  }
  else if (*param_1 == (code *)0x0) {
    FUN_140d186f0(0xf,0,0x42,s_D__a_1_s_target_release_build_bo_1413d3d10,0x11a);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_140d76180(0x188);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      FUN_140d1d930(puVar2,0,0x188);
      *(undefined4 *)(puVar2 + 0x26) = 1;
      *puVar2 = param_1;
      FUN_140d27630(puVar2 + 2);
      iVar1 = (**param_1)(puVar2);
      if (iVar1 == 0) {
        FUN_140d762b0(puVar2);
        puVar2 = (undefined8 *)0x0;
      }
    }
  }
  return puVar2;
}


/* address=140d5ac50 name=FUN_140d5ac50 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140d5ac50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined auStack_1c68 [32];
  undefined *local_1c48;
  byte local_1c38;
  uint local_1c34;
  int local_1c30;
  ulonglong local_1c28;
  uint local_1c20;
  longlong local_1c18;
  ulonglong local_1c10;
  undefined8 local_1c08;
  undefined local_1bf8 [224];
  undefined local_1b18 [216];
  undefined local_1a40 [6696];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x140d5ac6e;
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_1c68;
  FUN_140d5c3d0(param_1,local_1b18);
  FUN_140d5c350(local_1a40);
  for (local_1c28 = 2; local_1c28 < 0x20; local_1c28 = local_1c28 + 1) {
    if ((local_1c28 & 1) == 0) {
      FUN_140d5cac0(param_1,local_1b18 + local_1c28 * 0xd8,local_1b18 + (local_1c28 / 2) * 0xd8);
    }
    else {
      FUN_140d5c400(param_1,local_1b18 + local_1c28 * 0xd8,local_1a40,
                    local_1b18 + (local_1c28 - 1) * 0xd8);
    }
  }
  local_1c20 = FUN_140d27880(param_1 + 0x10);
  local_1c30 = 1;
  local_1c34 = local_1c20;
  while (local_1c34 = local_1c34 - 1, local_1c34 < local_1c20) {
    if (local_1c30 == 0) {
      FUN_140d5cac0(param_1,param_2,param_2);
    }
    if (local_1c34 % 5 == 0) {
      local_1c18 = (longlong)*(int *)(param_1 + 0x18);
      iVar2 = FUN_140d3c6d0(param_4,local_1c18,local_1c34 + 4);
      local_1c38 = (byte)(iVar2 << 4);
      iVar2 = FUN_140d3c6d0(param_4,local_1c18,local_1c34 + 3);
      local_1c38 = local_1c38 | (byte)(iVar2 << 3);
      iVar2 = FUN_140d3c6d0(param_4,local_1c18,local_1c34 + 2);
      local_1c38 = local_1c38 | (byte)(iVar2 << 2);
      iVar2 = FUN_140d3c6d0(param_4,local_1c18,local_1c34 + 1);
      local_1c38 = local_1c38 | (byte)(iVar2 << 1);
      bVar1 = FUN_140d3c6d0(param_4,local_1c18,local_1c34);
      local_1c38 = local_1c38 | bVar1;
      FUN_140d1d930(local_1bf8,0,0xd8);
      for (local_1c10 = 0; local_1c10 < 0x20; local_1c10 = local_1c10 + 1) {
        local_1c08 = FUN_140d1d6b0(local_1c10,local_1c38);
        local_1c48 = local_1bf8;
        FUN_140d5a0a0(param_1,local_1bf8,local_1c08,local_1b18 + local_1c10 * 0xd8);
      }
      if (local_1c30 == 0) {
        FUN_140d5c400(param_1,param_2,param_2,local_1bf8);
      }
      else {
        FUN_140d5c350(param_2);
        local_1c30 = 0;
      }
    }
  }
  if (local_1c30 != 0) {
    FUN_140d5c3d0(param_1,param_2);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_1c68);
  return;
}


/* address=140d5b800 name=FUN_140d5b800 */

ulonglong FUN_140d5b800(longlong param_1,longlong param_2,undefined8 *param_3,ulonglong param_4,
                       int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_38;
  uint local_34;
  ulonglong local_20;
  
  if ((param_5 < 1) || (7 < param_5)) {
    FID_conflict__assert((wchar_t *)s_0_1413d83b0,(wchar_t *)s_D_1413d82e0,0x5b);
  }
  if (param_4 == 0) {
    FID_conflict__assert((wchar_t *)s_b_1413d84a0,(wchar_t *)s_D_1413d83d0,0x5c);
  }
  uVar1 = 1 << ((byte)param_5 & 0x1f);
  uVar2 = uVar1 * 2;
  local_38 = (uint)*param_3 & uVar2 - 1;
  for (local_20 = 0; uVar4 = param_4 + 1, local_20 < uVar4; local_20 = local_20 + 1) {
    if (((int)local_38 < 0) || ((int)uVar2 < (int)local_38)) {
      FID_conflict__assert((wchar_t *)s_0_1413d8590,(wchar_t *)s_D_1413d84c0,99);
    }
    local_34 = 0;
    if ((local_38 & 1) != 0) {
      if (((int)local_38 < 1) || ((int)uVar2 <= (int)local_38)) {
        FID_conflict__assert((wchar_t *)s_0_1413d86c0,(wchar_t *)s_D_1413d85f0,0x66);
      }
      if ((local_38 & uVar1) == 0) {
        local_34 = local_38;
      }
      else {
        local_34 = local_38 + uVar1 * -2;
        if (param_4 <= local_20 + 1 + (longlong)param_5) {
          local_34 = local_38 & (int)(uVar2 - 1) >> 1;
        }
      }
      local_38 = local_38 - local_34;
      if (((local_38 != 0) && (local_38 != uVar2)) && (local_38 != uVar1)) {
        FID_conflict__assert((wchar_t *)s_w_1413d87e0,(wchar_t *)s_D_1413d8710,0x80);
      }
      if (((int)local_34 <= (int)-uVar1) || ((int)uVar1 <= (int)local_34)) {
        FID_conflict__assert((wchar_t *)s___1413d8930,(wchar_t *)s_D_1413d8860,0x81);
      }
      if ((local_34 & 1) == 0) {
        FID_conflict__assert((wchar_t *)s_d_1413d8a40,(wchar_t *)s_D_1413d8970,0x84);
      }
    }
    *(undefined *)(param_2 + local_20) = (undefined)local_34;
    iVar3 = FUN_140d3c6d0(param_3,(longlong)*(int *)(param_1 + 0x18),
                          local_20 + 1 + (longlong)param_5);
    local_38 = ((int)local_38 >> 1) + uVar1 * iVar3;
    if ((int)uVar2 < (int)local_38) {
      FID_conflict__assert((wchar_t *)s_w_1413d8b30,(wchar_t *)s_D_1413d8a60,0x8f);
    }
  }
  if (local_38 != 0) {
    FID_conflict__assert((wchar_t *)s_w_1413d8c30,(wchar_t *)s_D_1413d8b60,0x93);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140d5c020 name=FUN_140d5c020 */

undefined8 FUN_140d5c020(longlong param_1)

{
  FUN_140d27630(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return 1;
}


/* address=140d5c060 name=FUN_140d5c060 */

void FUN_140d5c060(longlong param_1)

{
  FUN_140d27660(param_1 + 0x38);
  return;
}


/* address=140d5c090 name=FUN_140d5c090 */

undefined4
FUN_140d5c090(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint local_18;
  undefined4 local_14;
  
  uVar1 = FUN_140d27880(param_2);
  if ((uVar1 < 3) || (iVar2 = FUN_140d29af0(param_2), iVar2 == 0)) {
    FUN_140d186f0(0xf,0,0x6e,s_D__a_1_s_target_release_build_bo_1413d80a0,0x6a);
    local_14 = 0;
  }
  else {
    local_14 = 0;
    FUN_140d28030(param_5);
    lVar3 = FUN_140d28090(param_5);
    if ((lVar3 != 0) && (lVar4 = FUN_140d27750(param_1 + 0x38,param_2), lVar4 != 0)) {
      FUN_140d27a20(param_1 + 0x38,0);
      FUN_140d2f6f0(param_1 + 0x38);
      iVar2 = FUN_140d58f40(param_1,param_1 + 0x50,param_3);
      if ((iVar2 != 0) && (iVar2 = FUN_140d58f40(param_1,param_1 + 0x98,param_4), iVar2 != 0)) {
        uVar5 = FUN_140d27850();
        iVar2 = FUN_140d58f40(param_1,param_1 + 0x140,uVar5);
        if (((iVar2 != 0) && (lVar4 = FUN_140d27750(lVar3,param_3), lVar4 != 0)) &&
           (iVar2 = FUN_140d28370(lVar3,3), iVar2 != 0)) {
          iVar2 = FUN_140d29660(lVar3,param_1 + 0x38);
          local_18 = (uint)(iVar2 == 0);
          *(uint *)(param_1 + 0xe0) = local_18;
          local_14 = 1;
        }
      }
    }
    FUN_140d281e0(param_5);
  }
  return local_14;
}


/* address=140d5c250 name=FUN_140d5c250 */

undefined8 FUN_140d5c250(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
LAB_140d5c28b:
    if (param_3 != 0) {
      iVar1 = FUN_140d59060(param_1,param_3,param_1 + 0x50);
      if (iVar1 == 0) goto LAB_140d5c2db;
    }
    if (param_4 != 0) {
      iVar1 = FUN_140d59060(param_1,param_4,param_1 + 0x98);
      if (iVar1 == 0) goto LAB_140d5c2db;
    }
    uVar3 = 1;
  }
  else {
    lVar2 = FUN_140d27750(param_2,param_1 + 0x38);
    if (lVar2 != 0) goto LAB_140d5c28b;
LAB_140d5c2db:
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d5c2f0 name=FUN_140d5c2f0 */

void FUN_140d5c2f0(longlong param_1)

{
  FUN_140d1d930(param_1,0,0x48);
  FUN_140d1d930(param_1 + 0x48,0,0x48);
  FUN_140d1d930(param_1 + 0x90,0,0x48);
  return;
}


/* address=140d5c350 name=FUN_140d5c350 */

void FUN_140d5c350(longlong param_1,longlong param_2)

{
  FUN_140d1d890(param_1,param_2,0x48);
  FUN_140d1d890(param_1 + 0x48,param_2 + 0x48,0x48);
  FUN_140d1d890(param_1 + 0x90,param_2 + 0x90,0x48);
  return;
}


/* address=140d5c3d0 name=FUN_140d5c3d0 */

void FUN_140d5c3d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d5c2f0(param_2);
  return;
}


/* address=140d5c400 name=FUN_140d5c400 */

void FUN_140d5c400(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined auStack_5c8 [32];
  longlong local_5a8;
  ulonglong local_598;
  ulonglong local_590;
  ulonglong local_588;
  ulonglong local_580;
  ulonglong local_578;
  undefined local_568 [80];
  undefined local_518 [80];
  undefined local_4c8 [80];
  undefined local_478 [80];
  undefined local_428 [80];
  undefined local_3d8 [80];
  undefined local_388 [80];
  undefined local_338 [80];
  undefined local_2e8 [80];
  undefined local_298 [80];
  undefined local_248 [80];
  undefined local_1f8 [80];
  undefined local_1a8 [80];
  undefined local_158 [80];
  undefined local_108 [80];
  undefined local_b8 [80];
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_5c8;
  if (param_3 == param_4) {
    FUN_140d5cac0(param_1,param_2,param_3);
  }
  else {
    local_598 = FUN_140d593c0(param_1,param_3 + 0x90);
    local_590 = FUN_140d593c0(param_1,param_4 + 0x90);
    FUN_140d5dd70(param_1,local_2e8,param_3 + 0x90);
    FUN_140d5dd70(param_1,local_338,param_4 + 0x90);
    FUN_140d5dd00(param_1,local_1f8,param_3,local_338);
    FUN_140d59280(param_1,local_4c8,param_3 + 0x90,param_4 + 0x90);
    FUN_140d5dd70(param_1,local_4c8,local_4c8);
    FUN_140d59320(param_1,local_4c8,local_4c8,local_2e8);
    FUN_140d59320(param_1,local_4c8,local_4c8,local_338);
    FUN_140d5dd00(param_1,local_388,param_4 + 0x90,local_338);
    FUN_140d5dd00(param_1,local_388,local_388,param_3 + 0x48);
    FUN_140d5dd00(param_1,local_108,param_4,local_2e8);
    FUN_140d59320(param_1,local_428,local_108,local_1f8);
    local_588 = FUN_140d593c0(param_1,local_428);
    FUN_140d5dd00(param_1,local_248,local_428,local_4c8);
    FUN_140d5dd00(param_1,local_b8,param_3 + 0x90,local_2e8);
    FUN_140d5dd00(param_1,local_68,param_4 + 0x48,local_b8);
    FUN_140d59320(param_1,local_478,local_68,local_388);
    FUN_140d59280(param_1,local_478,local_478,local_478);
    local_580 = FUN_140d593c0(param_1,local_478);
    local_578 = ~local_588 & ~local_580 & local_598 & local_590;
    if (local_578 == 0) {
      FUN_140d59280(param_1,local_3d8,local_428,local_428);
      FUN_140d5dd70(param_1,local_3d8,local_3d8);
      FUN_140d5dd00(param_1,local_1a8,local_428,local_3d8);
      FUN_140d5dd00(param_1,local_298,local_1f8,local_3d8);
      FUN_140d5dd70(param_1,local_568,local_478);
      FUN_140d59320(param_1,local_568,local_568,local_1a8);
      FUN_140d59320(param_1,local_568,local_568,local_298);
      FUN_140d59320(param_1,local_568,local_568,local_298);
      FUN_140d59320(param_1,local_518,local_298,local_568);
      FUN_140d5dd00(param_1,local_518,local_518,local_478);
      FUN_140d5dd00(param_1,local_158,local_388,local_1a8);
      FUN_140d59320(param_1,local_518,local_518,local_158);
      FUN_140d59320(param_1,local_518,local_518,local_158);
      local_5a8 = param_4;
      FUN_140d59440(param_1,local_568,local_598,local_568);
      local_5a8 = param_3;
      FUN_140d59440(param_1,param_2,local_590,local_568);
      local_5a8 = param_4 + 0x48;
      FUN_140d59440(param_1,local_518,local_598,local_518);
      local_5a8 = param_3 + 0x48;
      FUN_140d59440(param_1,param_2 + 0x48,local_590,local_518);
      local_5a8 = param_4 + 0x90;
      FUN_140d59440(param_1,local_248,local_598,local_248);
      local_5a8 = param_3 + 0x90;
      FUN_140d59440(param_1,param_2 + 0x90,local_590,local_248);
    }
    else {
      FUN_140d5cac0(param_1,param_2,param_3);
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_5c8);
  return;
}


/* address=140d5cac0 name=FUN_140d5cac0 */

void FUN_140d5cac0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_498 [32];
  undefined local_478 [80];
  undefined local_428 [80];
  undefined local_3d8 [80];
  undefined local_388 [80];
  undefined local_338 [80];
  undefined local_2e8 [80];
  undefined local_298 [80];
  undefined local_248 [80];
  undefined local_1f8 [80];
  undefined local_1a8 [80];
  undefined local_158 [80];
  undefined local_108 [80];
  undefined local_b8 [80];
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_498;
  if (*(int *)(param_1 + 0xe0) == 0) {
    FUN_140d5dd70(param_1,local_248,param_3);
    FUN_140d5dd70(param_1,local_158,param_3 + 0x48);
    FUN_140d5dd70(param_1,local_3d8,local_158);
    FUN_140d5dd70(param_1,local_68,param_3 + 0x90);
    FUN_140d59280(param_1,local_478,param_3,local_158);
    FUN_140d5dd70(param_1,local_478,local_478);
    FUN_140d59320(param_1,local_478,local_478,local_248);
    FUN_140d59320(param_1,local_478,local_478,local_3d8);
    FUN_140d59280(param_1,local_478,local_478,local_478);
    FUN_140d5dd70(param_1,local_388,local_68);
    FUN_140d5dd00(param_1,local_388,param_1 + 0x50,local_388);
    FUN_140d59280(param_1,local_388,local_388,local_248);
    FUN_140d59280(param_1,local_388,local_388,local_248);
    FUN_140d59280(param_1,local_388,local_388,local_248);
    FUN_140d5dd70(param_1,param_2,local_388);
    FUN_140d59320(param_1,param_2,param_2,local_478);
    FUN_140d59320(param_1,param_2,param_2,local_478);
    FUN_140d59280(param_1,param_2 + 0x90,param_3 + 0x48,param_3 + 0x90);
    FUN_140d5dd70(param_1,param_2 + 0x90,param_2 + 0x90);
    FUN_140d59320(param_1,param_2 + 0x90,param_2 + 0x90,local_158);
    FUN_140d59320(param_1,param_2 + 0x90,param_2 + 0x90,local_68);
    FUN_140d59280(param_1,local_3d8,local_3d8,local_3d8);
    FUN_140d59280(param_1,local_3d8,local_3d8,local_3d8);
    FUN_140d59280(param_1,local_3d8,local_3d8,local_3d8);
    FUN_140d59320(param_1,param_2 + 0x48,local_478,param_2);
    FUN_140d5dd00(param_1,param_2 + 0x48,param_2 + 0x48,local_388);
    FUN_140d59320(param_1,param_2 + 0x48,param_2 + 0x48,local_3d8);
  }
  else {
    FUN_140d5dd70(param_1,local_298,param_3 + 0x90);
    FUN_140d5dd70(param_1,local_428,param_3 + 0x48);
    FUN_140d5dd00(param_1,local_108,param_3,local_428);
    FUN_140d59320(param_1,local_1a8,param_3,local_298);
    FUN_140d59280(param_1,local_2e8,param_3,local_298);
    FUN_140d59280(param_1,local_1f8,local_2e8,local_2e8);
    FUN_140d59280(param_1,local_2e8,local_2e8,local_1f8);
    FUN_140d5dd00(param_1,local_b8,local_1a8,local_2e8);
    FUN_140d5dd70(param_1,param_2,local_b8);
    FUN_140d59280(param_1,local_338,local_108,local_108);
    FUN_140d59280(param_1,local_338,local_338,local_338);
    FUN_140d59280(param_1,local_1f8,local_338,local_338);
    FUN_140d59320(param_1,param_2,param_2,local_1f8);
    FUN_140d59280(param_1,local_298,local_428,local_298);
    FUN_140d59280(param_1,local_1a8,param_3 + 0x48,param_3 + 0x90);
    FUN_140d5dd70(param_1,param_2 + 0x90,local_1a8);
    FUN_140d59320(param_1,param_2 + 0x90,param_2 + 0x90,local_298);
    FUN_140d59320(param_1,param_2 + 0x48,local_338,param_2);
    FUN_140d59280(param_1,local_428,local_428,local_428);
    FUN_140d5dd70(param_1,local_428,local_428);
    FUN_140d5dd00(param_1,param_2 + 0x48,local_b8,param_2 + 0x48);
    FUN_140d59280(param_1,local_428,local_428,local_428);
    FUN_140d59320(param_1,param_2 + 0x48,param_2 + 0x48,local_428);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_498);
  return;
}


/* address=140d5d2c0 name=FUN_140d5d2c0 */

void FUN_140d5d2c0(undefined8 param_1,longlong param_2)

{
  FUN_140d591a0(param_1,param_2 + 0x48,param_2 + 0x48);
  return;
}


/* address=140d5d300 name=FUN_140d5d300 */

bool FUN_140d5d300(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140d593c0(param_1,param_2 + 0x90);
  return lVar1 == 0;
}


/* address=140d5d350 name=FUN_140d5d350 */

void FUN_140d5d350(longlong *param_1,longlong param_2)

{
  undefined auStack_198 [32];
  code *local_178;
  code *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined local_158 [80];
  undefined local_108 [80];
  undefined local_b8 [80];
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_198;
  local_178 = *(code **)(*param_1 + 0x70);
  local_170 = *(code **)(*param_1 + 0x78);
  (*local_170)(param_1,local_108,param_2);
  (*local_170)(param_1,local_158,param_2 + 0x90);
  (*local_170)(param_1,local_b8,local_158);
  (*local_178)(param_1,local_68,local_b8,local_158);
  if (*(int *)(param_1 + 0x1c) == 0) {
    (*local_178)(param_1,local_158,local_b8,param_1 + 10);
    FUN_140d59280(param_1,local_108,local_108,local_158);
  }
  else {
    FUN_140d59280(param_1,local_158,local_b8,local_b8);
    FUN_140d59280(param_1,local_158,local_158,local_b8);
    FUN_140d59320(param_1,local_108,local_108,local_158);
  }
  (*local_178)(param_1,local_108,local_108,param_2);
  (*local_178)(param_1,local_158,param_1 + 0x13,local_68);
  FUN_140d59280(param_1,local_108,local_108,local_158);
  (*local_170)(param_1,local_158,param_2 + 0x48);
  FUN_140d59320(param_1,local_158,local_158,local_108);
  local_168 = FUN_140d593c0(param_1,local_158);
  local_160 = FUN_140d593c0(param_1,param_2 + 0x90);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_198);
  return;
}


/* address=140d5d600 name=FUN_140d5d600 */

void FUN_140d5d600(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined auStack_1c8 [32];
  code *local_1a8;
  code *local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  undefined local_158 [80];
  undefined local_108 [80];
  undefined local_b8 [80];
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_1c8;
  local_1a8 = *(code **)(*param_1 + 0x70);
  local_1a0 = *(code **)(*param_1 + 0x78);
  (*local_1a0)(param_1,local_108,param_3 + 0x90);
  (*local_1a8)(param_1,local_158,param_2,local_108);
  (*local_1a0)(param_1,local_b8,param_2 + 0x90);
  (*local_1a8)(param_1,local_68,param_3,local_b8);
  FUN_140d59320(param_1,local_158,local_158,local_68);
  local_180 = FUN_140d593c0(param_1,local_158);
  (*local_1a8)(param_1,local_108,local_108,param_3 + 0x90);
  (*local_1a8)(param_1,local_158,param_2 + 0x48,local_108);
  (*local_1a8)(param_1,local_b8,local_b8,param_2 + 0x90);
  (*local_1a8)(param_1,local_68,param_3 + 0x48,local_b8);
  FUN_140d59320(param_1,local_158,local_158,local_68);
  local_188 = FUN_140d593c0(param_1,local_158);
  local_178 = ~(local_180 | local_188);
  local_190 = FUN_140d593c0(param_1,param_2 + 0x90);
  local_198 = FUN_140d593c0(param_1,param_3 + 0x90);
  local_170 = ~(local_190 | local_198);
  local_168 = local_170 | local_190 & local_198 & local_178;
  FUN_140e28050(local_18 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=140d5d930 name=FUN_140d5d930 */

bool FUN_140d5d930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d58a80(param_1,param_3);
  if (iVar1 == 0) {
    FUN_140d58e50(param_1,param_2,param_3);
    FUN_140d58d70(param_1,param_2,param_2);
  }
  return iVar1 == 0;
}


/* address=140d5d9a0 name=FUN_140d5d9a0 */

void FUN_140d5d9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined auStack_98 [32];
  undefined4 local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_98;
  iVar1 = FUN_140d5d300(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_140d5a2c0(param_1,local_68,param_2);
    if ((iVar1 == 0) || (iVar1 = FUN_140d58a10(param_1,local_68,param_3), iVar1 == 0)) {
      local_78 = 0;
    }
    else {
      local_78 = 1;
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=140d5da60 name=FUN_140d5da60 */

void FUN_140d5da60(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_140d278e0(param_1 + 0x38);
  FUN_140d401a0(param_2,(ulonglong)uVar1,param_4,(longlong)*(int *)(param_1 + 0x40));
  *param_3 = (ulonglong)uVar1;
  return;
}


/* address=140d5dad0 name=FUN_140d5dad0 */

undefined8 FUN_140d5dad0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_140d278e0(param_1 + 0x38);
  if (param_4 == uVar1) {
    FUN_140d40040(param_2,(longlong)*(int *)(param_1 + 0x40),param_3,param_4);
    iVar2 = FUN_140d3bcc0(param_2,*(undefined8 *)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x40)
                         );
    if (iVar2 == 0) {
      FUN_140d186f0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413d8180,0x15b);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    FUN_140d186f0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413d8110,0x154);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d5dd00 name=FUN_140d5dd00 */

void FUN_140d5dd00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d3f7a0(param_2,param_3,param_4,(longlong)*(int *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x138));
  return;
}


/* address=140d5dd70 name=FUN_140d5dd70 */

void FUN_140d5dd70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d3f7a0(param_2,param_3,param_3,(longlong)*(int *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x138));
  return;
}


/* address=140d5dec0 name=FUN_140d5dec0 */

void FUN_140d5dec0(ulonglong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (param_3 >> 5) - 1;
  uVar2 = ~uVar1;
  uVar1 = 0x3f - param_3 & uVar2 | param_3 & uVar1;
  *param_1 = uVar2 & 1;
  *param_2 = (uVar1 >> 1) + (uVar1 & 1);
  return;
}


/* address=140d5df90 name=FUN_140d5df90 */

void FUN_140d5df90(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d68c80();
  FUN_140d89380(uVar1,&LAB_140d68dd0);
  FUN_140d68c70();
  return;
}


/* address=140d5dfc0 name=FUN_140d5dfc0 */

void FUN_140d5dfc0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d5ecc0();
  FUN_140d89380(uVar1,&LAB_140d5ef70);
  FUN_140d5ecb0();
  return;
}


/* address=140d5dff0 name=FUN_140d5dff0 */

longlong * FUN_140d5dff0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_140d76180(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_140d275e0();
    *plVar1 = lVar2;
    lVar2 = FUN_140d275e0();
    plVar1[1] = lVar2;
    if ((*plVar1 == 0) || (plVar1[1] == 0)) {
      FUN_140d5e060(plVar1);
      plVar1 = (longlong *)0x0;
    }
  }
  return plVar1;
}


/* address=140d5e060 name=FUN_140d5e060 */

void FUN_140d5e060(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_140d27660(*param_1);
    FUN_140d27660(param_1[1]);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d5e1b0 name=FUN_140d5e1b0 */

void FUN_140d5e1b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1c0;
  int local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  int local_1a0 [2];
  longlong local_198;
  longlong local_190;
  undefined local_188 [80];
  undefined local_138 [224];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_1e8;
  FUN_140d1dc00();
  if ((*(longlong *)(param_3 + 0x28) == 0) ||
     (*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x28) == 0)) {
    local_1b0 = FUN_140d575e0(param_3);
    if ((local_1b0 == 0) || (*(longlong *)(param_3 + 0x10) == 0)) {
      local_1c8 = CONCAT44(local_1c8._4_4_,0x13c);
      FUN_140d186f0(0x1a,0,0x43,s_D__a_1_s_target_release_build_bo_1413d3b80);
    }
    else {
      local_190 = FUN_140d55830(local_1b0);
      local_198 = *(longlong *)(param_3 + 0x10) + 0x18;
      FUN_140d272d0();
      FUN_140d1b7f0(local_138);
      FUN_140d1b920(local_138,local_198,(longlong)*(int *)(local_190 + 8) << 3);
      FUN_140d1b920(local_138,param_1,param_2);
      FUN_140d1bb80(local_58,local_138);
      local_1b8 = 0;
      do {
        local_1a8 = 0;
        iVar1 = FUN_140d589c0(local_1b0,local_188,local_58);
        if (iVar1 == 0) {
          local_1a8 = 0;
          goto LAB_140d5e3c7;
        }
        local_1c8 = param_1;
        local_1c0 = param_2;
        local_1a8 = FUN_140d5e9d0(local_1b0,local_1a0,local_198,local_188);
        if ((local_1a8 != 0) || (local_1a0[0] == 0)) goto LAB_140d5e3c7;
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 <= DAT_14104c04c);
      local_1c8 = CONCAT44(local_1c8._4_4_,0x166);
      FUN_140d186f0(0x1a,0,0x6a,s_D__a_1_s_target_release_build_bo_1413d3bf0);
LAB_140d5e3c7:
      FUN_140d272e0();
    }
  }
  else {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x136);
    FUN_140d186f0(0x1a,0,0x67,s_D__a_1_s_target_release_build_bo_1413d3b10);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_1e8);
  return;
}


/* address=140d5e3f0 name=FUN_140d5e3f0 */

void FUN_140d5e3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d1dc00();
  FUN_140d5e5f0(param_1,param_2,param_3,param_4);
  return;
}


/* address=140d5e490 name=FUN_140d5e490 */

void FUN_140d5e490(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined local_80 [8];
  longlong local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_3 + 0x28) == 0) ||
     (*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x28) == 0)) {
    local_88 = FUN_140d575e0(param_3);
    if ((local_88 == 0) || (*(longlong *)(param_3 + 0x10) == 0)) {
      local_98 = CONCAT44(local_98._4_4_,0x118);
      FUN_140d186f0(0x1a,0,0x43,s_D__a_1_s_target_release_build_bo_1413d3aa0);
    }
    else {
      local_78 = *(longlong *)(param_3 + 0x10) + 0x18;
      iVar1 = FUN_140d58880(local_88,local_68,param_4,param_5);
      if (iVar1 != 0) {
        local_98 = param_1;
        local_90 = param_2;
        FUN_140d5e9d0(local_88,local_80,local_78,local_68);
      }
    }
  }
  else {
    local_98 = CONCAT44(local_98._4_4_,0x112);
    FUN_140d186f0(0x1a,0,0x67,s_D__a_1_s_target_release_build_bo_1413d3a30);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140d5e5f0 name=FUN_140d5e5f0 */

void FUN_140d5e5f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined auStack_318 [32];
  undefined8 local_2f8;
  longlong local_2e8;
  longlong local_2e0;
  undefined local_2d8 [80];
  undefined local_288 [80];
  undefined local_238 [80];
  undefined local_1e8 [80];
  undefined local_198 [80];
  undefined local_148 [80];
  undefined local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_318;
  local_2e8 = FUN_140d575e0(param_4);
  local_2e0 = FUN_140d57840(param_4);
  if (((local_2e8 == 0) || (local_2e0 == 0)) || (param_3 == (undefined8 *)0x0)) {
    local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,0x9c);
    FUN_140d186f0(0x1a,0,0x65,s_D__a_1_s_target_release_build_bo_1413d3790);
  }
  else {
    iVar1 = FUN_140d29a20(*param_3);
    if (((iVar1 == 0) && (iVar1 = FUN_140d58780(local_2e8,local_288,*param_3), iVar1 != 0)) &&
       ((iVar1 = FUN_140d29a20(param_3[1]), iVar1 == 0 &&
        (iVar1 = FUN_140d58780(local_2e8,local_238,param_3[1]), iVar1 != 0)))) {
      iVar1 = FUN_140d58e90(local_2e8,local_2d8,local_238);
      if (iVar1 == 0) {
        local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,0xab);
        FUN_140d186f0(0x1a,0,0x44,s_D__a_1_s_target_release_build_bo_1413d3870);
      }
      else {
        FUN_140d5e880(local_2e8,local_1e8,param_1,param_2);
        FUN_140d58de0(local_2e8,local_148,local_1e8,local_2d8);
        FUN_140d58de0(local_2e8,local_198,local_288,local_2d8);
        local_2f8 = local_198;
        iVar1 = FUN_140d59f30(local_2e8,local_f8,local_148,local_2e0 + 8);
        if (iVar1 == 0) {
          local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,0xba);
          FUN_140d186f0(0x1a,0,0xf,s_D__a_1_s_target_release_build_bo_1413d38e0);
        }
        else {
          iVar1 = Read(local_2e8,local_f8,local_288);
          if (iVar1 == 0) {
            local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,0xbf);
            FUN_140d186f0(0x1a,0,100,s_D__a_1_s_target_release_build_bo_1413d3950);
          }
        }
      }
    }
    else {
      local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,0xa5);
      FUN_140d186f0(0x1a,0,100,s_D__a_1_s_target_release_build_bo_1413d3800);
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_318);
  return;
}


/* address=140d5e880 name=FUN_140d5e880 */

void FUN_140d5e880(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong local_res20;
  undefined auStack_b8 [32];
  longlong local_98;
  undefined8 *local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_b8;
  local_88 = (undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_140d27880(local_88);
  local_80 = (ulonglong)uVar1;
  local_78 = (local_80 + 7) / 8;
  local_res20 = param_4;
  if (local_78 < param_4) {
    local_res20 = local_78;
  }
  FUN_140d40040(param_2,(longlong)*(int *)(local_88 + 1),param_3,local_res20);
  if (local_80 < local_res20 << 3) {
    local_70 = param_2;
    FUN_140d3ced0(param_2,param_2,8 - (local_80 & 7) & 0xffffffff,(longlong)*(int *)(local_88 + 1));
  }
  local_98 = (longlong)*(int *)(local_88 + 1);
  FUN_140d3d2a0(param_2,0,*local_88,local_68);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140d5e9d0 name=FUN_140d5e9d0 */

void FUN_140d5e9d0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  undefined auStack_228 [32];
  undefined4 local_208;
  undefined8 *local_1f8;
  longlong local_1f0;
  undefined local_1e8 [80];
  undefined local_198 [80];
  undefined local_148 [80];
  undefined local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_228;
  *param_2 = 0;
  local_1f0 = FUN_140d55830(param_1);
  uVar1 = FUN_140d27880(local_1f0);
  if (uVar1 < 0xa0) {
    local_208 = 0xd6;
    FUN_140d186f0(0x1a,0,0x70,s_D__a_1_s_target_release_build_bo_1413d39c0);
  }
  else {
    iVar2 = FUN_140d59c30(param_1,local_f8,param_4);
    if ((iVar2 != 0) && (iVar2 = FUN_140d5a2c0(param_1,local_148,local_f8), iVar2 != 0)) {
      iVar2 = FUN_140d58a80(param_1,local_148);
      if (iVar2 == 0) {
        FUN_140d58d00(param_1,local_1e8,local_148);
        FUN_140d58de0(param_1,local_1e8,param_3,local_1e8);
        FUN_140d5e880(param_1,local_198,param_5,param_6);
        FUN_140d58b00(param_1,local_1e8,local_1e8,local_198);
        FUN_140d58e50(param_1,local_198,param_4);
        FUN_140d58d70(param_1,local_198,local_198);
        FUN_140d58de0(param_1,local_1e8,local_1e8,local_198);
        iVar2 = FUN_140d58a80(param_1,local_1e8);
        if (iVar2 == 0) {
          local_1f8 = (undefined8 *)FUN_140d5dff0();
          if (((local_1f8 == (undefined8 *)0x0) ||
              (iVar2 = FUN_140d2fa10(*local_1f8,local_148,(longlong)*(int *)(local_1f0 + 8)),
              iVar2 == 0)) ||
             (iVar2 = FUN_140d2fa10(local_1f8[1],local_1e8,(longlong)*(int *)(local_1f0 + 8)),
             iVar2 == 0)) {
            FUN_140d5e060(local_1f8);
          }
        }
        else {
          *param_2 = 1;
        }
      }
      else {
        *param_2 = 1;
      }
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_228);
  return;
}


/* address=140d5ec60 name=FUN_140d5ec60 */

void FUN_140d5ec60(undefined8 *param_1,int param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    if (param_2 != 0) {
      FUN_140d555b0(*param_1);
    }
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d5ecb0 name=FUN_140d5ecb0 */

undefined * FUN_140d5ecb0(void)

{
  return &DAT_1414104f0;
}


/* address=140d5ecc0 name=FUN_140d5ecc0 */

undefined * FUN_140d5ecc0(void)

{
  return &DAT_1414105d0;
}


/* address=140d5ecd0 name=FUN_140d5ecd0 */

void FUN_140d5ecd0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x2cc;
  *(undefined **)(param_1 + 2) = &DAT_14104c59c;
  *(undefined *)(param_1 + 4) = 5;
  *(char **)(param_1 + 6) = s_NIST_P_521_1413d3c60;
  *(undefined *)(param_1 + 8) = 0x42;
  *(undefined **)(param_1 + 10) = &DAT_14104c410;
  uVar1 = FUN_140d5ab20();
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  param_1[0xe] = 0x2cb;
  *(undefined **)(param_1 + 0x10) = &DAT_14104c5a4;
  *(undefined *)(param_1 + 0x12) = 5;
  *(char **)(param_1 + 0x14) = s_NIST_P_384_1413d3c70;
  *(undefined *)(param_1 + 0x16) = 0x30;
  *(undefined **)(param_1 + 0x18) = &DAT_14104c2f0;
  uVar1 = FUN_140d5ab20();
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  param_1[0x1c] = 0x19f;
  *(undefined **)(param_1 + 0x1e) = &DAT_14104c5b0;
  *(undefined *)(param_1 + 0x20) = 8;
  *(char **)(param_1 + 0x22) = s_NIST_P_256_1413d3c80;
  *(undefined *)(param_1 + 0x24) = 0x20;
  *(undefined **)(param_1 + 0x26) = &DAT_14104c230;
  uVar1 = FUN_140d5df90();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  param_1[0x2a] = 0x2c9;
  *(undefined **)(param_1 + 0x2c) = &DAT_14104c5b8;
  *(undefined *)(param_1 + 0x2e) = 5;
  *(char **)(param_1 + 0x30) = s_NIST_P_224_1413d3c90;
  *(undefined *)(param_1 + 0x32) = 0x1c;
  *(undefined **)(param_1 + 0x34) = &DAT_14104c180;
  uVar1 = FUN_140d5ab20();
  *(undefined8 *)(param_1 + 0x36) = uVar1;
  return;
}


/* address=140d5ef90 name=FUN_140d5ef90 */

undefined8 FUN_140d5ef90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint local_38;
  undefined local_28 [40];
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FID_conflict__assert((wchar_t *)s_g_1413d3e50,(wchar_t *)s_D_1413d3d80,0x132);
  }
  lVar3 = FUN_140d27750(param_1 + 0x10,param_3);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_140d2f6f0(param_1 + 0x10);
    FUN_140d2d560(*(undefined8 *)(param_1 + 0x30));
    uVar4 = FUN_140d2d450(param_1 + 0x10,0);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_140d29660(param_1 + 0x38,param_3);
      local_38 = (uint)(0 < iVar2);
      *(uint *)(param_1 + 0xe4) = local_38;
      if (*(int *)(param_1 + 0xe4) != 0) {
        FUN_140d27630(local_28);
        iVar2 = FUN_140d28510(local_28,param_1 + 0x38,param_3);
        if ((iVar2 == 0) ||
           (iVar2 = FUN_140d2fbc0(param_1 + 0xe8,(longlong)*(int *)(param_1 + 0x40),local_28),
           iVar2 == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        FUN_140d27660(local_28);
        if (!bVar1) {
          return 0;
        }
      }
      uVar4 = FUN_140d55a70(param_1);
      *(undefined8 *)(param_1 + 8) = uVar4;
      if (*(longlong *)(param_1 + 8) == 0) {
        uVar4 = 0;
      }
      else {
        FUN_140d59510(param_1,*(longlong *)(param_1 + 8) + 8,param_2);
        iVar2 = FUN_140d594a0(param_1,param_1 + 0x140,*(longlong *)(param_1 + 8) + 0x98);
        if (iVar2 == 0) {
          FID_conflict__assert((wchar_t *)s_e_1413d3f60,(wchar_t *)s_D_1413d3e90,0x152);
        }
        iVar2 = FUN_140d89300(param_1 + 0x130);
        if (iVar2 != 0) {
          FID_conflict__assert((wchar_t *)s___1413d40b0,(wchar_t *)s_D_1413d3fe0,0x158);
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


/* address=140d5f1e0 name=FUN_140d5f1e0 */

void FUN_140d5f1e0(longlong param_1)

{
  int iVar1;
  undefined auStack_1c8 [32];
  undefined8 local_1a8;
  uint local_198;
  longlong *local_190;
  longlong local_188;
  int local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined local_148 [80];
  undefined local_f8 [80];
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_1c8;
  local_190 = (longlong *)0x0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_180 = 0;
  local_158 = FUN_140d27f30();
  if (local_158 != 0) {
    local_198 = (uint)*(byte *)(param_1 + 0x20);
    local_188 = *(longlong *)(param_1 + 0x28);
    local_178 = FUN_140d27ab0(local_188,local_198,0);
    if (local_178 != 0) {
      local_170 = FUN_140d27ab0(local_188 + (ulonglong)local_198,local_198,0);
      if (local_170 != 0) {
        local_168 = FUN_140d27ab0(local_188 + (ulonglong)(local_198 << 1),local_198,0);
        if (local_168 != 0) {
          local_160 = FUN_140d27ab0(local_188 + (ulonglong)(local_198 * 5),local_198,0);
          if (local_160 != 0) {
            local_190 = (longlong *)FUN_140d5ab50(*(undefined8 *)(param_1 + 0x30));
            if (local_190 != (longlong *)0x0) {
              local_1a8 = local_158;
              iVar1 = (**(code **)(*local_190 + 0x10))(local_190,local_178,local_170,local_168);
              if (iVar1 != 0) {
                iVar1 = FUN_140d59150(local_190,local_f8,local_188 + (ulonglong)(local_198 * 3),
                                      local_198);
                if ((((iVar1 != 0) &&
                     (iVar1 = FUN_140d59150(local_190,local_148,
                                            local_188 + (ulonglong)(local_198 << 2),local_198),
                     iVar1 != 0)) &&
                    (iVar1 = FUN_140d59660(local_190,local_a8,local_f8,local_148), iVar1 != 0)) &&
                   (iVar1 = FUN_140d5ef90(local_190,local_a8,local_160), iVar1 != 0)) {
                  local_180 = 1;
                }
                goto LAB_140d5f46d;
              }
            }
            local_1a8 = CONCAT44(local_1a8._4_4_,0x1d2);
            FUN_140d186f0(0xf,0,0xf,s_D__a_1_s_target_release_build_bo_1413d4370);
            goto LAB_140d5f46d;
          }
        }
      }
    }
    local_1a8 = CONCAT44(local_1a8._4_4_,0x1cb);
    FUN_140d186f0(0xf,0,3,s_D__a_1_s_target_release_build_bo_1413d4300);
  }
LAB_140d5f46d:
  if (local_180 == 0) {
    FUN_140d555b0(local_190);
    local_190 = (longlong *)0x0;
  }
  FUN_140d27fa0(local_158);
  FUN_140d27660(local_178);
  FUN_140d27660(local_170);
  FUN_140d27660(local_168);
  FUN_140d27660(local_160);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=140d5f4e0 name=FUN_140d5f4e0 */

undefined * FUN_140d5f4e0(void)

{
  return &DAT_1414105d8;
}


/* address=140d5f4f0 name=FUN_140d5f4f0 */

undefined * FUN_140d5f4f0(void)

{
  return &DAT_1414105f8;
}


/* address=140d5f500 name=FUN_140d5f500 */

undefined4 FUN_140d5f500(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  
  iVar1 = FUN_140d58780(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_140d18390();
    FUN_140d28030(param_4);
    lVar2 = FUN_140d28090(param_4);
    if (((lVar2 == 0) || (iVar1 = FUN_140d2a920(lVar2,param_3,param_1 + 0x10,param_4), iVar1 == 0))
       || (iVar1 = FUN_140d58780(param_1,param_2,lVar2), iVar1 == 0)) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    FUN_140d281e0(param_4);
    return local_28;
  }
  return 1;
}


/* address=140d5f5e0 name=FUN_140d5f5e0 */

undefined * FUN_140d5f5e0(void)

{
  return &DAT_141410600;
}


/* address=140d5f5f0 name=FUN_140d5f5f0 */

longlong * FUN_140d5f5f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140d76180(0x60);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_140d1d930(plVar1,0,0x60);
    *plVar1 = (longlong)(plVar1 + 3);
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)plVar1 + 0x14) = 2;
  }
  return plVar1;
}


/* address=140d5f680 name=FUN_140d5f680 */

void FUN_140d5f680(undefined8 param_1)

{
  FUN_140d762b0(param_1);
  return;
}


/* address=140d5f6a0 name=FUN_140d5f6a0 */

void FUN_140d5f6a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d3f630(param_2,param_3,(longlong)*(int *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x138))
  ;
  return;
}


/* address=140d5f700 name=FUN_140d5f700 */

void FUN_140d5f700(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d3f680(param_2,(longlong)*(int *)(param_1 + 0x40),param_3,
                (longlong)*(int *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x138));
  return;
}


/* address=140d5f770 name=FUN_140d5f770 */

void FUN_140d5f770(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d3feb0(param_2,param_3,(longlong)*(int *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x138))
  ;
  return;
}


/* address=140d5fee0 name=FUN_140d5fee0 */

undefined * FUN_140d5fee0(void)

{
  return &DAT_141410620;
}


/* address=140d5fef0 name=FUN_140d5fef0 */

undefined * FUN_140d5fef0(void)

{
  return &DAT_141410618;
}


/* address=140d5ff00 name=FUN_140d5ff00 */

void FUN_140d5ff00(undefined8 *param_1)

{
  *param_1 = &LAB_140d5dba0;
  param_1[1] = &LAB_140d5dcc0;
  param_1[2] = &LAB_140d5dbe0;
  param_1[3] = &LAB_140d5f7d0;
  param_1[4] = &LAB_140d5f930;
  param_1[5] = FUN_140d5c400;
  param_1[6] = FUN_140d5cac0;
  param_1[7] = FUN_140d5ac50;
  param_1[8] = &LAB_140d5b000;
  param_1[9] = &LAB_140d5b050;
  param_1[0xb] = &LAB_140d5bb10;
  param_1[0xc] = &LAB_140d5b320;
  param_1[0xd] = &LAB_140d5b520;
  param_1[0xe] = FUN_140d5dd00;
  param_1[0xf] = FUN_140d5dd70;
  param_1[0x10] = &LAB_140d5ddd0;
  param_1[0x11] = &LAB_140d5de60;
  param_1[0x12] = &LAB_140d5b710;
  param_1[0x13] = &LAB_140d5b790;
  param_1[0x14] = &LAB_140d5d8c0;
  param_1[0x15] = FUN_140d5d930;
  param_1[0x16] = &LAB_140d5fcb0;
  return;
}


/* address=140d600a0 name=FUN_140d600a0 */

void FUN_140d600a0(longlong param_1,longlong param_2,byte *param_3,longlong param_4,longlong param_5
                  )

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined auStack_108 [32];
  undefined8 local_e8;
  uint local_d8;
  undefined4 local_d4;
  longlong local_d0;
  uint local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_108;
  if (param_4 == 0) {
    local_e8 = CONCAT44(local_e8._4_4_,0x8c);
    FUN_140d186f0(0xf,0,100,s_D__a_1_s_target_release_build_bo_1413d6900);
  }
  else {
    local_d8 = (uint)*param_3;
    if (local_d8 == 4) {
      iVar1 = FUN_140d5a790(param_1,local_a8,param_3,param_4);
      if (iVar1 == 0) {
        FUN_140d5a8e0(param_1,param_2 + 8);
      }
      else {
        FUN_140d59510(param_1,param_2 + 8,local_a8);
      }
    }
    else {
      local_c8 = local_d8 & 1;
      uVar2 = FUN_140d278e0(param_1 + 0x38);
      local_b8 = (ulonglong)uVar2;
      local_d8 = local_d8 & 0xfffffffe;
      if ((local_d8 == 2) && (param_4 == local_b8 + 1)) {
        local_c0 = 0;
        if ((param_5 != 0) || (param_5 = FUN_140d27f30(), local_c0 = param_5, param_5 != 0)) {
          local_d4 = 0;
          FUN_140d28030(param_5);
          local_d0 = FUN_140d28090(param_5);
          if ((local_d0 != 0) && (lVar3 = FUN_140d27ab0(param_3 + 1,local_b8,local_d0), lVar3 != 0))
          {
            iVar1 = FUN_140d29780(local_d0,param_1 + 0x38);
            if (iVar1 < 0) {
              local_e8 = param_5;
              iVar1 = FUN_140d564f0(param_1,param_2,local_d0,local_c8);
              if (iVar1 != 0) {
                local_d4 = 1;
              }
            }
            else {
              local_e8 = CONCAT44(local_e8._4_4_,0xba);
              FUN_140d186f0(0xf,0,0x6d,s_D__a_1_s_target_release_build_bo_1413d69e0);
            }
          }
          FUN_140d281e0(param_5);
          FUN_140d27fa0(local_c0);
        }
      }
      else {
        local_e8 = CONCAT44(local_e8._4_4_,0xa2);
        FUN_140d186f0(0xf,0,0x6d,s_D__a_1_s_target_release_build_bo_1413d6970);
      }
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_108);
  return;
}


/* address=140d60350 name=FUN_140d60350 */

void FUN_140d60350(longlong *param_1,undefined8 param_2,char param_3,ulonglong param_4,
                  ulonglong param_5)

{
  *param_1 = param_4 + param_5 + (ulonglong)(param_3 != '\0');
  *(bool *)param_2 =
       CARRY8(param_4,param_5) || CARRY8(param_4 + param_5,(ulonglong)(param_3 != '\0'));
  return;
}


/* address=140d60390 name=FUN_140d60390 */

void FUN_140d60390(longlong *param_1,undefined8 param_2,char param_3,ulonglong param_4,
                  ulonglong param_5)

{
  *param_1 = (param_4 - param_5) - (ulonglong)(param_3 != '\0');
  *(bool *)param_2 = param_4 < param_5 || param_4 - param_5 < (ulonglong)(param_3 != '\0');
  return;
}


/* address=140d603d0 name=FUN_140d603d0 */

void FUN_140d603d0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  *param_2 = SUB168(auVar1 * auVar2,8);
  *param_1 = SUB168(auVar1 * auVar2,0);
  return;
}


/* address=140d60420 name=FUN_140d60420 */

void FUN_140d60420(ulonglong *param_1,char param_2,ulonglong param_3,ulonglong param_4)

{
  *param_1 = (longlong)-(param_2 != '\0') & param_4 | ~(longlong)-(param_2 != '\0') & param_3;
  return;
}


/* address=140d604b0 name=FUN_140d604b0 */

void FUN_140d604b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined local_458;
  undefined local_457;
  undefined local_456;
  byte local_455;
  byte local_454;
  undefined local_453;
  undefined local_452;
  undefined local_451;
  undefined local_450;
  undefined local_44f;
  undefined local_44e;
  byte local_44d;
  undefined local_44c;
  undefined local_44b;
  undefined local_44a;
  undefined local_449;
  undefined local_448;
  byte local_447;
  undefined local_446;
  undefined local_445;
  undefined local_444;
  undefined local_443;
  byte local_442;
  byte local_441;
  undefined local_440;
  undefined local_43f;
  byte local_43e;
  undefined local_43d;
  undefined local_43c;
  undefined local_43b;
  undefined local_43a;
  byte local_439;
  undefined local_438;
  undefined local_437;
  undefined local_436;
  undefined local_435;
  byte local_434;
  byte local_433;
  undefined local_432;
  undefined local_431;
  byte local_430;
  undefined local_42f;
  undefined local_42e;
  undefined local_42d;
  undefined local_42c;
  byte local_42b;
  undefined local_42a;
  undefined local_429;
  undefined local_428;
  undefined local_427;
  byte local_426;
  byte local_425;
  undefined local_424;
  undefined local_423;
  undefined local_422;
  undefined local_421;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined8 local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  longlong local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  longlong local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined local_20 [8];
  undefined local_18 [8];
  undefined local_10 [16];
  
  local_410 = param_2[1];
  local_400 = param_2[2];
  local_3f0 = param_2[3];
  local_420 = *param_2;
  FUN_140d603d0(&local_3a0,&local_390,local_420,param_3[3]);
  FUN_140d603d0(&local_3b0,&local_398,local_420,param_3[2]);
  FUN_140d603d0(&local_3c0,&local_3a8,local_420,param_3[1]);
  FUN_140d603d0(&local_418,&local_3b8,local_420,*param_3);
  FUN_140d60350(&local_360,&local_457,0,local_3b8,local_3c0);
  FUN_140d60350(&local_350,&local_456,local_457,local_3a8,local_3b0);
  FUN_140d60350(&local_340,&local_455,local_456,local_398,local_3a0);
  local_330 = (ulonglong)local_455 + local_390;
  FUN_140d603d0(&local_348,&local_338,local_418,0xffffffff00000001);
  FUN_140d603d0(&local_388,&local_378,local_418,0xffffffff);
  FUN_140d603d0(&local_370,&local_380,local_418,0xffffffffffffffff);
  FUN_140d60350(&local_368,&local_454,0,local_380,local_388);
  local_358 = (ulonglong)local_454 + local_378;
  FUN_140d60350(local_30,&local_453,0,local_418,local_370);
  FUN_140d60350(&local_2e8,&local_452,local_453,local_360,local_368);
  FUN_140d60350(&local_2d8,&local_451,local_452,local_350,local_358);
  FUN_140d60350(&local_2c8,&local_450,local_451,local_340,local_348);
  FUN_140d60350(&local_2b8,&local_449,local_450,local_330,local_338);
  FUN_140d603d0(&local_308,&local_2f8,local_410,param_3[3]);
  FUN_140d603d0(&local_318,&local_300,local_410,param_3[2]);
  FUN_140d603d0(&local_328,&local_310,local_410,param_3[1]);
  FUN_140d603d0(&local_2f0,&local_320,local_410,*param_3);
  FUN_140d60350(&local_2e0,&local_44f,0,local_320,local_328);
  FUN_140d60350(&local_2d0,&local_44e,local_44f,local_310,local_318);
  FUN_140d60350(&local_2c0,&local_44d,local_44e,local_300,local_308);
  local_2b0 = (ulonglong)local_44d + local_2f8;
  FUN_140d60350(&local_408,&local_44c,0,local_2e8,local_2f0);
  FUN_140d60350(&local_280,&local_44b,local_44c,local_2d8,local_2e0);
  FUN_140d60350(&local_270,&local_44a,local_44b,local_2c8,local_2d0);
  FUN_140d60350(&local_260,&local_448,local_44a,local_2b8,local_2c0);
  FUN_140d60350(&local_250,&local_441,local_448,local_449,local_2b0);
  FUN_140d603d0(&local_268,&local_258,local_408,0xffffffff00000001);
  FUN_140d603d0(&local_2a8,&local_298,local_408,0xffffffff);
  FUN_140d603d0(&local_290,&local_2a0,local_408,0xffffffffffffffff);
  FUN_140d60350(&local_288,&local_447,0,local_2a0,local_2a8);
  local_278 = (ulonglong)local_447 + local_298;
  FUN_140d60350(local_28,&local_446,0,local_408,local_290);
  FUN_140d60350(&local_208,&local_445,local_446,local_280,local_288);
  FUN_140d60350(&local_1f8,&local_444,local_445,local_270,local_278);
  FUN_140d60350(&local_1e8,&local_443,local_444,local_260,local_268);
  FUN_140d60350(&local_1d8,&local_442,local_443,local_250,local_258);
  local_1c8 = (ulonglong)local_442 + (ulonglong)local_441;
  FUN_140d603d0(&local_228,&local_218,local_400,param_3[3]);
  FUN_140d603d0(&local_238,&local_220,local_400,param_3[2]);
  FUN_140d603d0(&local_248,&local_230,local_400,param_3[1]);
  FUN_140d603d0(&local_210,&local_240,local_400,*param_3);
  FUN_140d60350(&local_200,&local_440,0,local_240,local_248);
  FUN_140d60350(&local_1f0,&local_43f,local_440,local_230,local_238);
  FUN_140d60350(&local_1e0,&local_43e,local_43f,local_220,local_228);
  local_1d0 = (ulonglong)local_43e + local_218;
  FUN_140d60350(&local_3f8,&local_43d,0,local_208,local_210);
  FUN_140d60350(&local_198,&local_43c,local_43d,local_1f8,local_200);
  FUN_140d60350(&local_188,&local_43b,local_43c,local_1e8,local_1f0);
  FUN_140d60350(&local_178,&local_43a,local_43b,local_1d8,local_1e0);
  FUN_140d60350(&local_168,&local_433,local_43a,local_1c8,local_1d0);
  FUN_140d603d0(&local_180,&local_170,local_3f8,0xffffffff00000001);
  FUN_140d603d0(&local_1c0,&local_1b0,local_3f8,0xffffffff);
  FUN_140d603d0(&local_1a8,&local_1b8,local_3f8,0xffffffffffffffff);
  FUN_140d60350(&local_1a0,&local_439,0,local_1b8,local_1c0);
  local_190 = (ulonglong)local_439 + local_1b0;
  FUN_140d60350(local_20,&local_438,0,local_3f8,local_1a8);
  FUN_140d60350(&local_120,&local_437,local_438,local_198,local_1a0);
  FUN_140d60350(&local_110,&local_436,local_437,local_188,local_190);
  FUN_140d60350(&local_100,&local_435,local_436,local_178,local_180);
  FUN_140d60350(&local_f0,&local_434,local_435,local_168,local_170);
  local_e0 = (ulonglong)local_434 + (ulonglong)local_433;
  FUN_140d603d0(&local_140,&local_130,local_3f0,param_3[3]);
  FUN_140d603d0(&local_150,&local_138,local_3f0,param_3[2]);
  FUN_140d603d0(&local_160,&local_148,local_3f0,param_3[1]);
  FUN_140d603d0(&local_128,&local_158,local_3f0,*param_3);
  FUN_140d60350(&local_118,&local_432,0,local_158,local_160);
  FUN_140d60350(&local_108,&local_431,local_432,local_148,local_150);
  FUN_140d60350(&local_f8,&local_430,local_431,local_138,local_140);
  local_e8 = (ulonglong)local_430 + local_130;
  FUN_140d60350(&local_3e8,&local_42f,0,local_120,local_128);
  FUN_140d60350(&local_b0,&local_42e,local_42f,local_110,local_118);
  FUN_140d60350(&local_a0,&local_42d,local_42e,local_100,local_108);
  FUN_140d60350(&local_90,&local_42c,local_42d,local_f0,local_f8);
  FUN_140d60350(&local_80,&local_425,local_42c,local_e0,local_e8);
  FUN_140d603d0(&local_98,&local_88,local_3e8,0xffffffff00000001);
  FUN_140d603d0(&local_d8,&local_c8,local_3e8,0xffffffff);
  FUN_140d603d0(&local_c0,&local_d0,local_3e8,0xffffffffffffffff);
  FUN_140d60350(&local_b8,&local_42b,0,local_d0,local_d8);
  local_a8 = (ulonglong)local_42b + local_c8;
  FUN_140d60350(local_18,&local_42a,0,local_3e8,local_c0);
  FUN_140d60350(&local_3e0,&local_429,local_42a,local_b0,local_b8);
  FUN_140d60350(&local_3d8,&local_428,local_429,local_a0,local_a8);
  FUN_140d60350(&local_3d0,&local_427,local_428,local_90,local_98);
  FUN_140d60350(&local_3c8,&local_426,local_427,local_80,local_88);
  local_78 = (ulonglong)local_426 + (ulonglong)local_425;
  FUN_140d60390(&local_70,&local_424,0,local_3e0,0xffffffffffffffff);
  FUN_140d60390(&local_68,&local_423,local_424,local_3d8,0xffffffff);
  FUN_140d60390(&local_60,&local_422,local_423,local_3d0,0);
  FUN_140d60390(&local_58,&local_421,local_422,local_3c8,0xffffffff00000001);
  FUN_140d60390(local_10,&local_458,local_421,local_78,0);
  FUN_140d60420(&local_50,local_458,local_70,local_3e0);
  FUN_140d60420(&local_48,local_458,local_68,local_3d8);
  FUN_140d60420(&local_40,local_458,local_60,local_3d0);
  FUN_140d60420(&local_38,local_458,local_58,local_3c8);
  *param_1 = local_50;
  param_1[1] = local_48;
  param_1[2] = local_40;
  param_1[3] = local_38;
  return;
}


/* address=140d61580 name=FUN_140d61580 */

void FUN_140d61580(undefined8 *param_1,undefined8 *param_2)

{
  undefined local_458;
  undefined local_457;
  undefined local_456;
  byte local_455;
  byte local_454;
  undefined local_453;
  undefined local_452;
  undefined local_451;
  undefined local_450;
  undefined local_44f;
  undefined local_44e;
  byte local_44d;
  undefined local_44c;
  undefined local_44b;
  undefined local_44a;
  undefined local_449;
  undefined local_448;
  byte local_447;
  undefined local_446;
  undefined local_445;
  undefined local_444;
  undefined local_443;
  byte local_442;
  byte local_441;
  undefined local_440;
  undefined local_43f;
  byte local_43e;
  undefined local_43d;
  undefined local_43c;
  undefined local_43b;
  undefined local_43a;
  byte local_439;
  undefined local_438;
  undefined local_437;
  undefined local_436;
  undefined local_435;
  byte local_434;
  byte local_433;
  undefined local_432;
  undefined local_431;
  byte local_430;
  undefined local_42f;
  undefined local_42e;
  undefined local_42d;
  undefined local_42c;
  byte local_42b;
  undefined local_42a;
  undefined local_429;
  undefined local_428;
  undefined local_427;
  byte local_426;
  byte local_425;
  undefined local_424;
  undefined local_423;
  undefined local_422;
  undefined local_421;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong local_390;
  undefined8 local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  longlong local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  longlong local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined local_20 [8];
  undefined local_18 [8];
  undefined local_10 [16];
  
  local_410 = param_2[1];
  local_400 = param_2[2];
  local_3f0 = param_2[3];
  local_420 = *param_2;
  FUN_140d603d0(&local_3a0,&local_390,local_420,param_2[3]);
  FUN_140d603d0(&local_3b0,&local_398,local_420,param_2[2]);
  FUN_140d603d0(&local_3c0,&local_3a8,local_420,param_2[1]);
  FUN_140d603d0(&local_418,&local_3b8,local_420,*param_2);
  FUN_140d60350(&local_360,&local_457,0,local_3b8,local_3c0);
  FUN_140d60350(&local_350,&local_456,local_457,local_3a8,local_3b0);
  FUN_140d60350(&local_340,&local_455,local_456,local_398,local_3a0);
  local_330 = (ulonglong)local_455 + local_390;
  FUN_140d603d0(&local_348,&local_338,local_418,0xffffffff00000001);
  FUN_140d603d0(&local_388,&local_378,local_418,0xffffffff);
  FUN_140d603d0(&local_370,&local_380,local_418,0xffffffffffffffff);
  FUN_140d60350(&local_368,&local_454,0,local_380,local_388);
  local_358 = (ulonglong)local_454 + local_378;
  FUN_140d60350(local_30,&local_453,0,local_418,local_370);
  FUN_140d60350(&local_2e8,&local_452,local_453,local_360,local_368);
  FUN_140d60350(&local_2d8,&local_451,local_452,local_350,local_358);
  FUN_140d60350(&local_2c8,&local_450,local_451,local_340,local_348);
  FUN_140d60350(&local_2b8,&local_449,local_450,local_330,local_338);
  FUN_140d603d0(&local_308,&local_2f8,local_410,param_2[3]);
  FUN_140d603d0(&local_318,&local_300,local_410,param_2[2]);
  FUN_140d603d0(&local_328,&local_310,local_410,param_2[1]);
  FUN_140d603d0(&local_2f0,&local_320,local_410,*param_2);
  FUN_140d60350(&local_2e0,&local_44f,0,local_320,local_328);
  FUN_140d60350(&local_2d0,&local_44e,local_44f,local_310,local_318);
  FUN_140d60350(&local_2c0,&local_44d,local_44e,local_300,local_308);
  local_2b0 = (ulonglong)local_44d + local_2f8;
  FUN_140d60350(&local_408,&local_44c,0,local_2e8,local_2f0);
  FUN_140d60350(&local_280,&local_44b,local_44c,local_2d8,local_2e0);
  FUN_140d60350(&local_270,&local_44a,local_44b,local_2c8,local_2d0);
  FUN_140d60350(&local_260,&local_448,local_44a,local_2b8,local_2c0);
  FUN_140d60350(&local_250,&local_441,local_448,local_449,local_2b0);
  FUN_140d603d0(&local_268,&local_258,local_408,0xffffffff00000001);
  FUN_140d603d0(&local_2a8,&local_298,local_408,0xffffffff);
  FUN_140d603d0(&local_290,&local_2a0,local_408,0xffffffffffffffff);
  FUN_140d60350(&local_288,&local_447,0,local_2a0,local_2a8);
  local_278 = (ulonglong)local_447 + local_298;
  FUN_140d60350(local_28,&local_446,0,local_408,local_290);
  FUN_140d60350(&local_208,&local_445,local_446,local_280,local_288);
  FUN_140d60350(&local_1f8,&local_444,local_445,local_270,local_278);
  FUN_140d60350(&local_1e8,&local_443,local_444,local_260,local_268);
  FUN_140d60350(&local_1d8,&local_442,local_443,local_250,local_258);
  local_1c8 = (ulonglong)local_442 + (ulonglong)local_441;
  FUN_140d603d0(&local_228,&local_218,local_400,param_2[3]);
  FUN_140d603d0(&local_238,&local_220,local_400,param_2[2]);
  FUN_140d603d0(&local_248,&local_230,local_400,param_2[1]);
  FUN_140d603d0(&local_210,&local_240,local_400,*param_2);
  FUN_140d60350(&local_200,&local_440,0,local_240,local_248);
  FUN_140d60350(&local_1f0,&local_43f,local_440,local_230,local_238);
  FUN_140d60350(&local_1e0,&local_43e,local_43f,local_220,local_228);
  local_1d0 = (ulonglong)local_43e + local_218;
  FUN_140d60350(&local_3f8,&local_43d,0,local_208,local_210);
  FUN_140d60350(&local_198,&local_43c,local_43d,local_1f8,local_200);
  FUN_140d60350(&local_188,&local_43b,local_43c,local_1e8,local_1f0);
  FUN_140d60350(&local_178,&local_43a,local_43b,local_1d8,local_1e0);
  FUN_140d60350(&local_168,&local_433,local_43a,local_1c8,local_1d0);
  FUN_140d603d0(&local_180,&local_170,local_3f8,0xffffffff00000001);
  FUN_140d603d0(&local_1c0,&local_1b0,local_3f8,0xffffffff);
  FUN_140d603d0(&local_1a8,&local_1b8,local_3f8,0xffffffffffffffff);
  FUN_140d60350(&local_1a0,&local_439,0,local_1b8,local_1c0);
  local_190 = (ulonglong)local_439 + local_1b0;
  FUN_140d60350(local_20,&local_438,0,local_3f8,local_1a8);
  FUN_140d60350(&local_120,&local_437,local_438,local_198,local_1a0);
  FUN_140d60350(&local_110,&local_436,local_437,local_188,local_190);
  FUN_140d60350(&local_100,&local_435,local_436,local_178,local_180);
  FUN_140d60350(&local_f0,&local_434,local_435,local_168,local_170);
  local_e0 = (ulonglong)local_434 + (ulonglong)local_433;
  FUN_140d603d0(&local_140,&local_130,local_3f0,param_2[3]);
  FUN_140d603d0(&local_150,&local_138,local_3f0,param_2[2]);
  FUN_140d603d0(&local_160,&local_148,local_3f0,param_2[1]);
  FUN_140d603d0(&local_128,&local_158,local_3f0,*param_2);
  FUN_140d60350(&local_118,&local_432,0,local_158,local_160);
  FUN_140d60350(&local_108,&local_431,local_432,local_148,local_150);
  FUN_140d60350(&local_f8,&local_430,local_431,local_138,local_140);
  local_e8 = (ulonglong)local_430 + local_130;
  FUN_140d60350(&local_3e8,&local_42f,0,local_120,local_128);
  FUN_140d60350(&local_b0,&local_42e,local_42f,local_110,local_118);
  FUN_140d60350(&local_a0,&local_42d,local_42e,local_100,local_108);
  FUN_140d60350(&local_90,&local_42c,local_42d,local_f0,local_f8);
  FUN_140d60350(&local_80,&local_425,local_42c,local_e0,local_e8);
  FUN_140d603d0(&local_98,&local_88,local_3e8,0xffffffff00000001);
  FUN_140d603d0(&local_d8,&local_c8,local_3e8,0xffffffff);
  FUN_140d603d0(&local_c0,&local_d0,local_3e8,0xffffffffffffffff);
  FUN_140d60350(&local_b8,&local_42b,0,local_d0,local_d8);
  local_a8 = (ulonglong)local_42b + local_c8;
  FUN_140d60350(local_18,&local_42a,0,local_3e8,local_c0);
  FUN_140d60350(&local_3e0,&local_429,local_42a,local_b0,local_b8);
  FUN_140d60350(&local_3d8,&local_428,local_429,local_a0,local_a8);
  FUN_140d60350(&local_3d0,&local_427,local_428,local_90,local_98);
  FUN_140d60350(&local_3c8,&local_426,local_427,local_80,local_88);
  local_78 = (ulonglong)local_426 + (ulonglong)local_425;
  FUN_140d60390(&local_70,&local_424,0,local_3e0,0xffffffffffffffff);
  FUN_140d60390(&local_68,&local_423,local_424,local_3d8,0xffffffff);
  FUN_140d60390(&local_60,&local_422,local_423,local_3d0,0);
  FUN_140d60390(&local_58,&local_421,local_422,local_3c8,0xffffffff00000001);
  FUN_140d60390(local_10,&local_458,local_421,local_78,0);
  FUN_140d60420(&local_50,local_458,local_70,local_3e0);
  FUN_140d60420(&local_48,local_458,local_68,local_3d8);
  FUN_140d60420(&local_40,local_458,local_60,local_3d0);
  FUN_140d60420(&local_38,local_458,local_58,local_3c8);
  *param_1 = local_50;
  param_1[1] = local_48;
  param_1[2] = local_40;
  param_1[3] = local_38;
  return;
}


/* address=140d62640 name=FUN_140d62640 */

void FUN_140d62640(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined local_88;
  undefined local_87;
  undefined local_86;
  undefined local_85;
  undefined local_84;
  undefined local_83;
  undefined local_82;
  undefined local_81;
  undefined local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined local_18 [24];
  
  FUN_140d60350(&local_78,&local_87,0,*param_2,*param_3);
  FUN_140d60350(&local_70,&local_86,local_87,param_2[1],param_3[1]);
  FUN_140d60350(&local_68,&local_85,local_86,param_2[2],param_3[2]);
  FUN_140d60350(&local_60,&local_81,local_85,param_2[3],param_3[3]);
  FUN_140d60390(&local_58,&local_84,0,local_78,0xffffffffffffffff);
  FUN_140d60390(&local_50,&local_83,local_84,local_70,0xffffffff);
  FUN_140d60390(&local_48,&local_82,local_83,local_68,0);
  FUN_140d60390(&local_40,local_80,local_82,local_60,0xffffffff00000001);
  FUN_140d60390(local_18,&local_88,local_80[0],local_81,0);
  FUN_140d60420(&local_38,local_88,local_58,local_78);
  FUN_140d60420(&local_30,local_88,local_50,local_70);
  FUN_140d60420(&local_28,local_88,local_48,local_68);
  FUN_140d60420(&local_20,local_88,local_40,local_60);
  *param_1 = local_38;
  param_1[1] = local_30;
  param_1[2] = local_28;
  param_1[3] = local_20;
  return;
}


/* address=140d62910 name=FUN_140d62910 */

void FUN_140d62910(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined local_58;
  undefined local_57;
  undefined local_56;
  undefined local_55;
  undefined local_54;
  undefined local_53;
  undefined local_52;
  undefined local_51;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_140d60390(&local_48,&local_58,0,*param_2,*param_3);
  FUN_140d60390(&local_40,&local_57,local_58,param_2[1],param_3[1]);
  FUN_140d60390(&local_38,&local_56,local_57,param_2[2],param_3[2]);
  FUN_140d60390(&local_30,&local_55,local_56,param_2[3],param_3[3]);
  FUN_140d60420(&local_50,local_55,0,0xffffffffffffffff);
  FUN_140d60350(&local_28,&local_54,0,local_48,local_50);
  FUN_140d60350(&local_20,&local_53,local_54,local_40,local_50 & 0xffffffff);
  FUN_140d60350(&local_18,&local_52,local_53,local_38,0);
  FUN_140d60350(local_10,&local_51,local_52,local_30,local_50 & 0xffffffff00000001);
  *param_1 = local_28;
  param_1[1] = local_20;
  param_1[2] = local_18;
  param_1[3] = local_10[0];
  return;
}


/* address=140d62b70 name=FUN_140d62b70 */

void FUN_140d62b70(undefined8 *param_1,undefined8 *param_2)

{
  undefined local_58;
  undefined local_57;
  undefined local_56;
  undefined local_55;
  undefined local_54;
  undefined local_53;
  undefined local_52;
  undefined local_51;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_140d60390(&local_48,&local_58,0,0,*param_2);
  FUN_140d60390(&local_40,&local_57,local_58,0,param_2[1]);
  FUN_140d60390(&local_38,&local_56,local_57,0,param_2[2]);
  FUN_140d60390(&local_30,&local_55,local_56,0,param_2[3]);
  FUN_140d60420(&local_50,local_55,0,0xffffffffffffffff);
  FUN_140d60350(&local_28,&local_54,0,local_48,local_50);
  FUN_140d60350(&local_20,&local_53,local_54,local_40,local_50 & 0xffffffff);
  FUN_140d60350(&local_18,&local_52,local_53,local_38,0);
  FUN_140d60350(local_10,&local_51,local_52,local_30,local_50 & 0xffffffff00000001);
  *param_1 = local_28;
  param_1[1] = local_20;
  param_1[2] = local_18;
  param_1[3] = local_10[0];
  return;
}


/* address=140d62d80 name=FUN_140d62d80 */

void FUN_140d62d80(undefined8 *param_1,undefined8 *param_2)

{
  undefined local_208;
  undefined local_207;
  byte local_206;
  byte local_205;
  byte local_204;
  undefined local_203;
  byte local_202;
  undefined local_201;
  undefined local_200;
  undefined local_1ff;
  undefined local_1fe;
  undefined local_1fd;
  byte local_1fc;
  undefined local_1fb;
  byte local_1fa;
  byte local_1f9;
  undefined local_1f8;
  undefined local_1f7;
  undefined local_1f6;
  undefined local_1f5;
  byte local_1f4;
  undefined local_1f3;
  byte local_1f2;
  byte local_1f1;
  undefined local_1f0;
  byte local_1ef;
  undefined local_1ee;
  undefined local_1ed;
  undefined local_1ec;
  undefined local_1eb [3];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined local_20 [8];
  undefined local_18 [8];
  undefined local_10 [16];
  
  local_1e8 = *param_2;
  FUN_140d603d0(&local_150,&local_140,local_1e8,0xffffffff00000001);
  FUN_140d603d0(&local_1a8,&local_168,local_1e8,0xffffffff);
  FUN_140d603d0(&local_198,&local_1a0,local_1e8,0xffffffffffffffff);
  FUN_140d60350(&local_190,&local_204,0,local_1a0,local_1a8);
  FUN_140d60350(local_30,&local_207,0,local_1e8,local_198);
  FUN_140d60350(&local_188,&local_205,local_207,0,local_190);
  FUN_140d60350(&local_1e0,&local_206,0,local_188,param_2[1]);
  FUN_140d603d0(&local_148,&local_e8,local_1e0,0xffffffff00000001);
  FUN_140d603d0(&local_180,&local_158,local_1e0,0xffffffff);
  FUN_140d603d0(&local_170,&local_178,local_1e0,0xffffffffffffffff);
  FUN_140d60350(&local_160,&local_202,0,local_178,local_180);
  FUN_140d60350(local_28,&local_203,0,local_1e0,local_170);
  FUN_140d60350(&local_138,&local_201,local_203,
                (ulonglong)local_206 + (ulonglong)local_204 + (ulonglong)local_205 + local_168,
                local_160);
  FUN_140d60350(&local_130,&local_200,local_201,local_150,(ulonglong)local_202 + local_158);
  FUN_140d60350(&local_128,&local_1f9,local_200,local_140,local_148);
  FUN_140d60350(&local_1d8,&local_1ff,0,local_138,param_2[2]);
  FUN_140d60350(&local_100,&local_1fe,local_1ff,local_130,0);
  FUN_140d60350(&local_f0,&local_1fa,local_1fe,local_128,0);
  FUN_140d603d0(&local_e0,&local_88,local_1d8,0xffffffff00000001);
  FUN_140d603d0(&local_120,&local_f8,local_1d8,0xffffffff);
  FUN_140d603d0(&local_110,&local_118,local_1d8,0xffffffffffffffff);
  FUN_140d60350(&local_108,&local_1fc,0,local_118,local_120);
  FUN_140d60350(local_20,&local_1fd,0,local_1d8,local_110);
  FUN_140d60350(&local_d8,&local_1fb,local_1fd,local_100,local_108);
  FUN_140d60350(&local_d0,&local_1f8,local_1fb,local_f0,(ulonglong)local_1fc + local_f8);
  FUN_140d60350(&local_c8,&local_1f1,local_1f8,
                (ulonglong)local_1f9 + (ulonglong)local_1fa + local_e8,local_e0);
  FUN_140d60350(&local_1d0,&local_1f7,0,local_d8,param_2[3]);
  FUN_140d60350(&local_a0,&local_1f6,local_1f7,local_d0,0);
  FUN_140d60350(&local_90,&local_1f2,local_1f6,local_c8,0);
  FUN_140d603d0(&local_80,&local_78,local_1d0,0xffffffff00000001);
  FUN_140d603d0(&local_c0,&local_98,local_1d0,0xffffffff);
  FUN_140d603d0(&local_b0,&local_b8,local_1d0,0xffffffffffffffff);
  FUN_140d60350(&local_a8,&local_1f4,0,local_b8,local_c0);
  FUN_140d60350(local_18,&local_1f5,0,local_1d0,local_b0);
  FUN_140d60350(&local_1c8,&local_1f3,local_1f5,local_a0,local_a8);
  FUN_140d60350(&local_1c0,&local_1f0,local_1f3,local_90,(ulonglong)local_1f4 + local_98);
  FUN_140d60350(&local_1b8,&local_1ef,local_1f0,
                (ulonglong)local_1f1 + (ulonglong)local_1f2 + local_88,local_80);
  local_1b0 = (ulonglong)local_1ef + local_78;
  FUN_140d60390(&local_70,&local_1ee,0,local_1c8,0xffffffffffffffff);
  FUN_140d60390(&local_68,&local_1ed,local_1ee,local_1c0,0xffffffff);
  FUN_140d60390(&local_60,&local_1ec,local_1ed,local_1b8,0);
  FUN_140d60390(&local_58,local_1eb,local_1ec,local_1b0,0xffffffff00000001);
  FUN_140d60390(local_10,&local_208,local_1eb[0],0,0);
  FUN_140d60420(&local_50,local_208,local_70,local_1c8);
  FUN_140d60420(&local_48,local_208,local_68,local_1c0);
  FUN_140d60420(&local_40,local_208,local_60,local_1b8);
  FUN_140d60420(&local_38,local_208,local_58,local_1b0);
  *param_1 = local_50;
  param_1[1] = local_48;
  param_1[2] = local_40;
  param_1[3] = local_38;
  return;
}


/* address=140d635b0 name=FUN_140d635b0 */

void FUN_140d635b0(ulonglong *param_1,ulonglong *param_2)

{
  *param_1 = *param_2 | param_2[1] | param_2[2] | param_2[3];
  return;
}


/* address=140d63630 name=FUN_140d63630 */

void FUN_140d63630(undefined8 *param_1,undefined param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_140d60420(&local_28,param_2,*param_3,*param_4);
  FUN_140d60420(&local_20,param_2,param_3[1],param_4[1]);
  FUN_140d60420(&local_18,param_2,param_3[2],param_4[2]);
  FUN_140d60420(local_10,param_2,param_3[3],param_4[3]);
  *param_1 = local_28;
  param_1[1] = local_20;
  param_1[2] = local_18;
  param_1[3] = local_10[0];
  return;
}


/* address=140d63780 name=FUN_140d63780 */

undefined8 FUN_140d63780(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_140d635b0(local_18,param_1);
  return local_18[0];
}


/* address=140d637b0 name=FUN_140d637b0 */

void FUN_140d637b0(longlong param_1,longlong param_2)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    *(undefined8 *)(param_1 + local_18 * 8) = *(undefined8 *)(param_2 + local_18 * 8);
  }
  return;
}


/* address=140d63810 name=FUN_140d63810 */

void FUN_140d63810(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d63630(param_1,param_2 != 0,param_3,param_4);
  return;
}


/* address=140d63870 name=FUN_140d63870 */

void FUN_140d63870(undefined8 param_1,undefined8 param_2)

{
  FUN_140d1d890(param_1,param_2,0x20);
  return;
}


/* address=140d638a0 name=FUN_140d638a0 */

void FUN_140d638a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d63870(param_1,param_2);
  return;
}


/* address=140d638d0 name=FUN_140d638d0 */

void FUN_140d638d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d1d890(param_1,param_2,0x20);
  return;
}


/* address=140d63910 name=FUN_140d63910 */

void FUN_140d63910(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_158 [32];
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined local_118 [32];
  undefined local_f8 [32];
  undefined local_d8 [32];
  undefined local_b8 [32];
  undefined local_98 [32];
  undefined local_78 [32];
  undefined local_58 [32];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_158;
  FUN_140d61580(local_38,param_2);
  FUN_140d604b0(local_38,local_38,param_2);
  FUN_140d61580(local_58,local_38);
  FUN_140d604b0(local_58,local_58,param_2);
  FUN_140d61580(local_d8,local_58);
  for (local_138 = 1; local_138 < 3; local_138 = local_138 + 1) {
    FUN_140d61580(local_d8,local_d8);
  }
  FUN_140d604b0(local_d8,local_d8,local_58);
  FUN_140d61580(local_78,local_d8);
  for (local_134 = 1; local_134 < 6; local_134 = local_134 + 1) {
    FUN_140d61580(local_78,local_78);
  }
  FUN_140d604b0(local_78,local_78,local_d8);
  FUN_140d61580(local_b8,local_78);
  for (local_130 = 1; local_130 < 3; local_130 = local_130 + 1) {
    FUN_140d61580(local_b8,local_b8);
  }
  FUN_140d604b0(local_b8,local_b8,local_58);
  FUN_140d61580(local_98,local_b8);
  for (local_12c = 1; local_12c < 0xf; local_12c = local_12c + 1) {
    FUN_140d61580(local_98,local_98);
  }
  FUN_140d604b0(local_98,local_98,local_b8);
  FUN_140d61580(local_f8,local_98);
  FUN_140d61580(local_f8,local_f8);
  FUN_140d604b0(local_f8,local_f8,local_38);
  FUN_140d61580(local_118,local_f8);
  for (local_128 = 1; local_128 < 0x20; local_128 = local_128 + 1) {
    FUN_140d61580(local_118,local_118);
  }
  FUN_140d604b0(local_118,local_118,param_2);
  for (local_124 = 0; local_124 < 0x80; local_124 = local_124 + 1) {
    FUN_140d61580(local_118,local_118);
  }
  FUN_140d604b0(local_118,local_118,local_f8);
  for (local_120 = 0; local_120 < 0x20; local_120 = local_120 + 1) {
    FUN_140d61580(local_118,local_118);
  }
  FUN_140d604b0(local_118,local_118,local_f8);
  for (local_11c = 0; local_11c < 0x1e; local_11c = local_11c + 1) {
    FUN_140d61580(local_118,local_118);
  }
  FUN_140d604b0(local_118,local_118,local_98);
  FUN_140d61580(local_118,local_118);
  FUN_140d61580(param_1,local_118);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_158);
  return;
}


/* address=140d63cd0 name=FUN_140d63cd0 */

void FUN_140d63cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined auStack_138 [32];
  undefined local_118 [32];
  undefined local_f8 [32];
  undefined local_d8 [32];
  undefined local_b8 [32];
  undefined local_98 [32];
  undefined local_78 [32];
  undefined local_58 [32];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_138;
  FUN_140d61580(local_b8,param_6);
  FUN_140d61580(local_118,param_5);
  FUN_140d604b0(local_58,param_4,local_118);
  FUN_140d62910(local_78,param_4,local_b8);
  FUN_140d62640(local_d8,param_4,local_b8);
  FUN_140d62640(local_98,local_d8,local_d8);
  FUN_140d62640(local_d8,local_d8,local_98);
  FUN_140d604b0(local_38,local_78,local_d8);
  FUN_140d61580(param_1,local_38);
  FUN_140d62640(local_f8,local_58,local_58);
  FUN_140d62640(local_f8,local_f8,local_f8);
  FUN_140d62640(local_98,local_f8,local_f8);
  FUN_140d62910(param_1,param_1,local_98);
  FUN_140d62640(local_b8,local_118,local_b8);
  FUN_140d62640(local_78,param_5,param_6);
  FUN_140d61580(param_3,local_78);
  FUN_140d62910(param_3,param_3,local_b8);
  FUN_140d62910(param_2,local_f8,param_1);
  FUN_140d62640(local_118,local_118,local_118);
  FUN_140d61580(local_118,local_118);
  FUN_140d604b0(param_2,local_38,param_2);
  FUN_140d62640(local_118,local_118,local_118);
  FUN_140d62910(param_2,param_2,local_118);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_138);
  return;
}


/* address=140d63f50 name=FUN_140d63f50 */

void FUN_140d63f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulonglong uVar1;
  undefined auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  ulonglong local_258;
  ulonglong local_250;
  ulonglong local_248;
  ulonglong local_240;
  ulonglong local_238;
  undefined local_230 [32];
  undefined local_210 [32];
  undefined local_1f0 [32];
  undefined local_1d0 [32];
  undefined local_1b0 [32];
  undefined local_190 [32];
  undefined local_170 [32];
  undefined local_150 [32];
  undefined local_130 [32];
  undefined local_110 [32];
  undefined local_f0 [32];
  undefined local_d0 [32];
  undefined local_b0 [32];
  undefined local_90 [32];
  undefined local_70 [32];
  undefined local_50 [32];
  undefined local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_298;
  local_268 = FUN_140d63780(param_6);
  local_260 = FUN_140d63780(param_10);
  FUN_140d61580(local_130,param_6);
  if (param_7 == 0) {
    FUN_140d61580(local_150,param_10);
    FUN_140d604b0(local_110,param_4,local_150);
    FUN_140d62640(local_1f0,param_6,param_10);
    FUN_140d61580(local_1f0,local_1f0);
    FUN_140d62910(local_1f0,local_1f0,local_130);
    FUN_140d62910(local_1f0,local_1f0,local_150);
    FUN_140d604b0(local_190,param_10,local_150);
    FUN_140d604b0(local_190,local_190,param_5);
  }
  else {
    FUN_140d637b0(local_110,param_4);
    FUN_140d62640(local_1f0,param_6,param_6);
    FUN_140d637b0(local_190,param_5);
  }
  FUN_140d604b0(local_70,param_8,local_130);
  FUN_140d62910(local_1b0,local_70,local_110);
  local_250 = FUN_140d63780(local_1b0);
  FUN_140d604b0(local_d0,local_1b0,local_1f0);
  FUN_140d604b0(local_50,param_6,local_130);
  FUN_140d604b0(local_30,param_9,local_50);
  FUN_140d62910(local_1d0,local_30,local_190);
  FUN_140d62640(local_1d0,local_1d0,local_1d0);
  local_258 = FUN_140d63780(local_1d0);
  local_248 = FUN_140d1d680(local_250 | local_258);
  uVar1 = FUN_140d1d680(local_268);
  local_240 = local_248 & ~uVar1;
  uVar1 = FUN_140d1d680(local_260);
  local_238 = local_240 & ~uVar1;
  if (local_238 == 0) {
    FUN_140d62640(local_170,local_1b0,local_1b0);
    FUN_140d61580(local_170,local_170);
    FUN_140d604b0(local_b0,local_1b0,local_170);
    FUN_140d604b0(local_f0,local_110,local_170);
    FUN_140d61580(local_230,local_1d0);
    FUN_140d62910(local_230,local_230,local_b0);
    FUN_140d62910(local_230,local_230,local_f0);
    FUN_140d62910(local_230,local_230,local_f0);
    FUN_140d62910(local_210,local_f0,local_230);
    FUN_140d604b0(local_210,local_210,local_1d0);
    FUN_140d604b0(local_90,local_190,local_b0);
    FUN_140d62910(local_210,local_210,local_90);
    FUN_140d62910(local_210,local_210,local_90);
    FUN_140d63810(local_230,local_268,param_8,local_230);
    FUN_140d63810(param_1,local_260,param_4,local_230);
    FUN_140d63810(local_210,local_268,param_9,local_210);
    FUN_140d63810(param_2,local_260,param_5,local_210);
    FUN_140d63810(local_d0,local_268,param_10,local_d0);
    FUN_140d63810(param_3,local_260,param_6,local_d0);
  }
  else {
    local_270 = param_6;
    local_278 = param_5;
    FUN_140d63cd0(param_1,param_2,param_3,param_4);
  }
  FUN_140e28050(local_10 ^ (ulonglong)auStack_298);
  return;
}


/* address=140d644b0 name=FUN_140d644b0 */

void FUN_140d644b0(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong local_28;
  
  FUN_140d1d930(param_4,0,0x60);
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    uVar1 = local_28 ^ param_1 - 1U;
    FUN_140d63810(param_4,uVar1,param_3 + local_28 * 0x40,param_4);
    FUN_140d63810(param_4 + 0x20,uVar1,param_3 + local_28 * 0x40 + 0x20,param_4 + 0x20);
  }
  FUN_140d63810(param_4 + 0x40,param_1,param_4 + 0x40,&DAT_14104d208);
  return;
}


/* address=140d64630 name=FUN_140d64630 */

void FUN_140d64630(ulonglong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong local_38;
  
  FUN_140d1d930(param_4,0,0x60);
  for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
    uVar1 = local_38 ^ param_1;
    FUN_140d63810(param_4,uVar1,param_3 + local_38 * 0x60,param_4);
    FUN_140d63810(param_4 + 0x20,uVar1,param_3 + local_38 * 0x60 + 0x20,param_4 + 0x20);
    FUN_140d63810(param_4 + 0x40,uVar1,param_3 + local_38 * 0x60 + 0x40,param_4 + 0x40);
  }
  return;
}


/* address=140d647d0 name=FUN_140d647d0 */

ulonglong FUN_140d647d0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  if ((param_2 < 0) || (0xff < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + (longlong)(param_2 >> 6) * 8) >> ((byte)param_2 & 0x3f) & 1;
  }
  return uVar1;
}


/* address=140d66730 name=FUN_140d66730 */

undefined * FUN_140d66730(void)

{
  return &DAT_1414106e0;
}


/* address=140d66740 name=FUN_140d66740 */

undefined * FUN_140d66740(void)

{
  return &DAT_1414106d8;
}


/* address=140d66750 name=FUN_140d66750 */

void FUN_140d66750(undefined8 *param_1)

{
  *param_1 = &LAB_140d5dba0;
  param_1[1] = &LAB_140d5dcc0;
  param_1[2] = &LAB_140d5dbe0;
  param_1[3] = &LAB_140d64820;
  param_1[5] = &LAB_140d649a0;
  param_1[6] = &LAB_140d64b40;
  param_1[7] = &LAB_140d64c50;
  param_1[8] = &LAB_140d65470;
  param_1[10] = &LAB_140d65a40;
  param_1[0xe] = FUN_140d5dd00;
  param_1[0xf] = FUN_140d5dd70;
  param_1[0x10] = &LAB_140d5ddd0;
  param_1[0x11] = &LAB_140d5de60;
  param_1[0x12] = &LAB_140d5b710;
  param_1[0x13] = &LAB_140d5b790;
  param_1[0x14] = &LAB_140d5d8c0;
  param_1[0x15] = FUN_140d5d930;
  param_1[0x16] = &LAB_140d66500;
  return;
}


/* address=140d668b0 name=FUN_140d668b0 */

void FUN_140d668b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140caec80(param_1,param_2,&DAT_14104d9b0);
  return;
}


/* address=140d668e0 name=FUN_140d668e0 */

longlong FUN_140d668e0(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (param_1 >> 5) - 1;
  uVar2 = ~uVar1;
  uVar1 = 0x3f - param_1 & uVar2 | param_1 & uVar1;
  return (uVar2 & 1) + ((uVar1 >> 1) + (uVar1 & 1)) * 2;
}


/* address=140d66970 name=FUN_140d66970 */

longlong FUN_140d66970(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (param_1 >> 7) - 1;
  uVar2 = ~uVar1;
  uVar1 = 0xff - param_1 & uVar2 | param_1 & uVar1;
  return (uVar2 & 1) + ((uVar1 >> 1) + (uVar1 & 1)) * 2;
}


/* address=140d66a00 name=FUN_140d66a00 */

/* WARNING: Removing unreachable block (ram,0x000140d66b54) */

void FUN_140d66a00(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = -param_3;
  uVar2 = ~uVar1;
  *param_1 = *param_2 & uVar1 ^ *param_1 & uVar2;
  param_1[1] = param_2[1] & uVar1 ^ param_1[1] & uVar2;
  param_1[2] = param_2[2] & uVar1 ^ param_1[2] & uVar2;
  param_1[3] = param_2[3] & uVar1 ^ param_1[3] & uVar2;
  return;
}


/* address=140d66c80 name=FUN_140d66c80 */

ulonglong FUN_140d66c80(ulonglong param_1)

{
  return (param_1 | -param_1) >> 0x3f;
}


/* address=140d66cc0 name=FUN_140d66cc0 */

void FUN_140d66cc0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_158 [32];
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined local_118 [32];
  undefined local_f8 [32];
  undefined local_d8 [32];
  undefined local_b8 [32];
  undefined local_98 [32];
  undefined local_78 [32];
  undefined local_58 [32];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_158;
  FUN_140caef80(local_38,param_2);
  FUN_140caec80(local_38,local_38,param_2);
  FUN_140caef80(local_58,local_38);
  FUN_140caec80(local_58,local_58,param_2);
  FUN_140caef80(local_d8,local_58);
  for (local_138 = 1; local_138 < 3; local_138 = local_138 + 1) {
    FUN_140caef80(local_d8,local_d8);
  }
  FUN_140caec80(local_d8,local_d8,local_58);
  FUN_140caef80(local_78,local_d8);
  for (local_134 = 1; local_134 < 6; local_134 = local_134 + 1) {
    FUN_140caef80(local_78,local_78);
  }
  FUN_140caec80(local_78,local_78,local_d8);
  FUN_140caef80(local_b8,local_78);
  for (local_130 = 1; local_130 < 3; local_130 = local_130 + 1) {
    FUN_140caef80(local_b8,local_b8);
  }
  FUN_140caec80(local_b8,local_b8,local_58);
  FUN_140caef80(local_98,local_b8);
  for (local_12c = 1; local_12c < 0xf; local_12c = local_12c + 1) {
    FUN_140caef80(local_98,local_98);
  }
  FUN_140caec80(local_98,local_98,local_b8);
  FUN_140caef80(local_f8,local_98);
  FUN_140caef80(local_f8,local_f8);
  FUN_140caec80(local_f8,local_f8,local_38);
  FUN_140caef80(local_118,local_f8);
  for (local_128 = 1; local_128 < 0x20; local_128 = local_128 + 1) {
    FUN_140caef80(local_118,local_118);
  }
  FUN_140caec80(local_118,local_118,param_2);
  for (local_124 = 0; local_124 < 0x80; local_124 = local_124 + 1) {
    FUN_140caef80(local_118,local_118);
  }
  FUN_140caec80(local_118,local_118,local_f8);
  for (local_120 = 0; local_120 < 0x20; local_120 = local_120 + 1) {
    FUN_140caef80(local_118,local_118);
  }
  FUN_140caec80(local_118,local_118,local_f8);
  for (local_11c = 0; local_11c < 0x1e; local_11c = local_11c + 1) {
    FUN_140caef80(local_118,local_118);
  }
  FUN_140caec80(local_118,local_118,local_98);
  FUN_140caef80(local_118,local_118);
  FUN_140caef80(param_1,local_118);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_158);
  return;
}


/* address=140d67080 name=FUN_140d67080 */

/* WARNING: Removing unreachable block (ram,0x000140d6715f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d67080(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined auVar1 [16];
  ulonglong uVar2;
  undefined auStack_798 [88];
  undefined *local_740;
  ulonglong local_738;
  ulonglong local_730;
  undefined8 local_728;
  ulonglong local_720;
  undefined *local_718;
  undefined *local_710;
  undefined *local_708;
  undefined *local_700;
  undefined *local_6f8;
  undefined *local_6f0;
  undefined *local_6e8;
  undefined local_6e0 [32];
  undefined local_6c0 [64];
  undefined local_680 [64];
  undefined local_640 [1536];
  byte local_40 [31];
  byte bStack_21;
  undefined uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_798;
  if (param_3 == 0) {
    FID_conflict__assert((wchar_t *)s_p_1413d71b0,(wchar_t *)s_D_1413d70d0,0xc0);
  }
  if (param_4 == 0) {
    FID_conflict__assert((wchar_t *)s_p_1413d72b0,(wchar_t *)s_D_1413d71d0,0xc1);
  }
  if (*(int *)(param_1 + 0x40) != 4) {
    FID_conflict__assert((wchar_t *)s_g_1413d73c0,(wchar_t *)s_D_1413d72e0,0xc2);
  }
  FUN_140d1d890(local_40,param_4,0x20);
  local_728 = 0x20;
  uStack_20 = 0;
  local_740 = local_640;
  if (*(int *)(param_1 + 0x40) != 4) {
    FID_conflict__assert((wchar_t *)s_g_1413d74f0,(wchar_t *)s_D_1413d7410,0xd3);
  }
  FUN_140d1d890(local_740,param_3,0x20);
  FUN_140d1d890(local_740 + 0x20,param_3 + 0x48,0x20);
  FUN_140d1d890(local_740 + 0x40,param_3 + 0x90,0x20);
  FUN_140cafd20(local_740 + 0x60,local_740);
  local_718 = local_740 + 0xc0;
  FUN_140cb0060(local_718,local_740 + 0x60,local_740);
  FUN_140cafd20(local_740 + 0x120,local_740 + 0x60);
  FUN_140cafd20(local_740 + 0x1e0,local_740 + 0xc0);
  FUN_140cafd20(local_740 + 0x2a0,local_740 + 0x120);
  FUN_140cafd20(local_740 + 0x420,local_740 + 0x1e0);
  local_710 = local_740 + 0x180;
  FUN_140cb0060(local_710,local_740 + 0x120,local_740);
  local_708 = local_740 + 0x240;
  FUN_140cb0060(local_708,local_740 + 0x1e0,local_740);
  local_700 = local_740 + 0x300;
  FUN_140cb0060(local_700,local_740 + 0x2a0,local_740);
  local_6f8 = local_740 + 0x480;
  FUN_140cb0060(local_6f8,local_740 + 0x420,local_740);
  FUN_140cafd20(local_740 + 0x4e0,local_740 + 0x240);
  FUN_140cafd20(local_740 + 0x360,local_740 + 0x180);
  local_6f0 = local_740 + 0x540;
  FUN_140cb0060(local_6f0,local_740 + 0x4e0,local_740);
  local_6e8 = local_740 + 0x3c0;
  FUN_140cb0060(local_6e8,local_740 + 0x360,local_740);
  FUN_140cafd20(local_740 + 0x5a0);
  local_730 = 0xff;
  local_738 = bStack_21 >> SUB161(ZEXT816(0xfe) % ZEXT816(8),0) & _DAT_141073138;
  uVar2 = FUN_140d668e0(local_738);
  FUN_140caf620(param_2,local_640,uVar2 >> 1 & 0xffffffff);
  while (4 < local_730) {
    if (local_730 != 0xff) {
      local_720 = (local_730 - 1) / 8;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_730 - 1;
      local_738 = (ushort)(CONCAT11(local_40[local_720 + 1],local_40[local_720]) >>
                          SUB161(auVar1 % ZEXT816(8),0)) & _DAT_141073138;
      local_738 = FUN_140d668e0(local_738);
      FUN_140caf620(local_6e0,local_640,local_738 >> 1 & 0xffffffff);
      FUN_140cade40(local_680,local_6c0);
      FUN_140d66a00(local_6c0,local_680,local_738 & 1);
      FUN_140cb0060(param_2,param_2,local_6e0);
    }
    local_730 = local_730 - DAT_141073130;
    FUN_140cafd20(param_2,param_2);
    FUN_140cafd20(param_2,param_2);
    FUN_140cafd20(param_2,param_2);
    FUN_140cafd20(param_2,param_2);
    FUN_140cafd20(param_2);
  }
  local_738 = (ulonglong)local_40[0] << 1 & _DAT_141073138;
  local_738 = FUN_140d668e0(local_738);
  FUN_140caf620(local_6e0,local_640,local_738 >> 1 & 0xffffffff);
  FUN_140cade40(local_680,local_6c0);
  FUN_140d66a00(local_6c0,local_680,local_738 & 1);
  FUN_140cb0060(param_2,param_2,local_6e0);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_798);
  return;
}


/* address=140d67860 name=FUN_140d67860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d67860(undefined8 *param_1,byte *param_2)

{
  *param_1 = DAT_141073140;
  FUN_140d66970((longlong)(int)((uint)*param_2 << 1) & _DAT_141073148);
  return;
}


/* address=140d678c0 name=FUN_140d678c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d678c0(longlong *param_1,longlong param_2)

{
  undefined auVar1 [16];
  ulonglong uVar2;
  
  uVar2 = (*param_1 - 1U) / 8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_1 - 1;
  uVar2 = (ushort)(CONCAT11(*(undefined *)(param_2 + uVar2 + 1),*(undefined *)(param_2 + uVar2)) >>
                  SUB161(auVar1 % ZEXT816(8),0)) & _DAT_141073158;
  *param_1 = *param_1 + _DAT_141073150;
  FUN_140d66970(uVar2);
  return;
}


/* address=140d68c70 name=FUN_140d68c70 */

undefined * FUN_140d68c70(void)

{
  return &DAT_1414107a0;
}


/* address=140d68c80 name=FUN_140d68c80 */

undefined * FUN_140d68c80(void)

{
  return &DAT_141410798;
}


/* address=140d68c90 name=FUN_140d68c90 */

void FUN_140d68c90(undefined8 *param_1)

{
  *param_1 = &LAB_140d5dba0;
  param_1[1] = &LAB_140d5dcc0;
  param_1[2] = &LAB_140d5dbe0;
  param_1[3] = &LAB_140d68070;
  param_1[5] = &LAB_140d681c0;
  param_1[6] = &LAB_140d68340;
  param_1[7] = &LAB_140d67980;
  param_1[8] = &LAB_140d67a80;
  param_1[10] = &LAB_140d67d20;
  param_1[0xe] = FUN_140d5dd00;
  param_1[0xf] = FUN_140d5dd70;
  param_1[0x10] = &LAB_140d5ddd0;
  param_1[0x11] = &LAB_140d5de60;
  param_1[0x12] = &LAB_140d5b710;
  param_1[0x13] = &LAB_140d5b790;
  param_1[0x14] = &LAB_140d68450;
  param_1[0x15] = &LAB_140d68a10;
  param_1[0x16] = &LAB_140d68ab0;
  return;
}


/* address=140d68df0 name=FUN_140d68df0 */

void FUN_140d68df0(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong local_18;
  
  if (param_3 < 2) {
    FID_conflict__assert((wchar_t *)s_n_1413d82d0,(wchar_t *)s_D_1413d81f0,0x56);
  }
  FUN_140d5c3d0(param_1,param_2);
  FUN_140d5c350(param_2 + 0xd8,param_4);
  for (local_18 = 2; local_18 < param_3; local_18 = local_18 + 1) {
    if ((local_18 & 1) == 0) {
      FUN_140d5cac0(param_1,param_2 + local_18 * 0xd8,param_2 + (local_18 / 2) * 0xd8);
    }
    else {
      FUN_140d5c400(param_1,param_2 + local_18 * 0xd8,param_2 + 0xd8,param_2 + (local_18 - 1) * 0xd8
                   );
    }
  }
  return;
}


/* address=140d68f50 name=FUN_140d68f50 */

void FUN_140d68f50(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5
                  )

{
  byte bVar1;
  int iVar2;
  undefined auStack_d8 [32];
  longlong local_b8;
  byte local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_d8;
  local_a0 = (longlong)*(int *)(param_1 + 0x18);
  iVar2 = FUN_140d3c6d0(param_4,local_a0,param_5 + 4);
  local_a8 = (byte)(iVar2 << 5);
  iVar2 = FUN_140d3c6d0(param_4,local_a0,param_5 + 3);
  local_a8 = local_a8 | (byte)(iVar2 << 4);
  iVar2 = FUN_140d3c6d0(param_4,local_a0,param_5 + 2);
  local_a8 = local_a8 | (byte)(iVar2 << 3);
  iVar2 = FUN_140d3c6d0(param_4,local_a0,param_5 + 1);
  local_a8 = local_a8 | (byte)(iVar2 << 2);
  iVar2 = FUN_140d3c6d0(param_4,local_a0,param_5);
  local_a8 = local_a8 | (byte)(iVar2 << 1);
  if (param_5 != 0) {
    bVar1 = FUN_140d3c6d0(param_4,local_a0,param_5 + -1);
    local_a8 = local_a8 | bVar1;
  }
  FUN_140d5dec0(local_78,&local_88,local_a8);
  FUN_140d1d930(param_2,0,0xd8);
  for (local_98 = 0; local_98 < 0x11; local_98 = local_98 + 1) {
    local_80 = FUN_140d1d6b0(local_98,local_88);
    local_b8 = param_2;
    FUN_140d5a0a0(param_1,param_2,local_80,param_3 + local_98 * 0xd8);
  }
  FUN_140d591a0(param_1,local_68,param_2 + 0x48);
  local_90 = -local_78[0];
  local_b8 = param_2 + 0x48;
  FUN_140d59440(param_1,param_2 + 0x48,local_90,local_68);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140d691e0 name=FUN_140d691e0 */

ulonglong FUN_140d691e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140d27880(param_1 + 0x38);
  return (ulonglong)(iVar1 + 4) / 5;
}


/* address=140d69220 name=FUN_140d69220 */

void FUN_140d69220(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5
                  )

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_38;
  uint local_34;
  uint local_30;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = FUN_140d691e0(param_1);
  local_30 = 0;
  for (local_34 = 0; local_34 < 5; local_34 = local_34 + 1) {
    iVar3 = FUN_140d3c6d0(param_4,(longlong)iVar1,local_34 * iVar2 + param_5);
    local_30 = local_30 | iVar3 << ((byte)local_34 & 0x1f);
  }
  FUN_140d1d930(param_2,0,0xd8);
  for (local_38 = 0; local_38 < 0x1f; local_38 = local_38 + 1) {
    uVar4 = FUN_140d1d6b0(local_30,local_38 + 1);
    FUN_140d59440(param_1,param_2,uVar4,param_3 + (ulonglong)local_38 * 0x90,param_2);
    FUN_140d59440(param_1,param_2 + 0x48,uVar4,param_3 + 0x48 + (ulonglong)local_38 * 0x90,
                  param_2 + 0x48);
  }
  uVar4 = FUN_140d1d680(local_30);
  FUN_140d59440(param_1,param_2 + 0x90,uVar4,param_2 + 0x90,param_1 + 0x140);
  return;
}


/* address=140d693e0 name=FUN_140d693e0 */

void FUN_140d693e0(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined auStack_128 [32];
  ulonglong local_108;
  undefined local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_128;
  FUN_140d5c350(param_2,param_3);
  FUN_140d5cac0(param_1,local_f8,param_3);
  for (local_108 = 1; local_108 < param_4; local_108 = local_108 + 1) {
    FUN_140d5c400(param_1,param_2 + local_108 * 0xd8,param_2 + (local_108 - 1) * 0xd8,local_f8);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=140d694f0 name=FUN_140d694f0 */

void FUN_140d694f0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  if (param_4 < 0) {
    FUN_140d5c350(param_2,param_3 + (longlong)(-param_4 >> 1) * 0xd8);
    FUN_140d5d2c0(param_1,param_2);
  }
  else {
    FUN_140d5c350(param_2,param_3 + (longlong)(param_4 >> 1) * 0xd8);
  }
  return;
}


/* address=140d69590 name=FUN_140d69590 */

void FUN_140d69590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  undefined auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68 [2];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  local_78 = param_7;
  local_80 = param_6;
  local_88 = param_5;
  iVar1 = FUN_140d69680(local_58,local_68,param_3,param_4);
  if (iVar1 != 0) {
    local_78 = param_9;
    local_80 = param_8;
    local_88 = local_68[0];
    FUN_140d69750(param_1,param_2,param_3,local_58);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d69680 name=FUN_140d69680 */

undefined8
FUN_140d69680(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_18 [6];
  
  lVar1 = FUN_140d1cb20(param_3,param_6,param_7,param_4,param_5,param_1,local_18);
  if (lVar1 == 0) {
    FUN_140d186f0(0x1f,0,0x1c,s_D__a_1_s_target_release_build_bo_1413d8f00,0x33);
    uVar3 = 0;
  }
  else {
    *param_2 = (ulonglong)local_18[0];
    uVar2 = FUN_140d1c8f0(param_3);
    if (*param_2 != uVar2) {
      FID_conflict__assert((wchar_t *)s___1413d9050,(wchar_t *)s_D_1413d8f70,0x37);
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140d69750 name=FUN_140d69750 */

void FUN_140d69750(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined auStack_128 [32];
  undefined8 local_108;
  char local_f8 [4];
  uint local_f4;
  int local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined local_c8 [112];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_128;
  local_e8 = FUN_140d1c8f0(param_3);
  local_e0 = 0;
  local_f0 = 0;
  local_d0 = ((param_2 - 1) + local_e8) / local_e8;
  if ((param_2 + local_e8 < param_2) || (0xff < local_d0)) {
    local_108 = CONCAT44(local_108._4_4_,0x49);
    FUN_140d186f0(0x1f,0,100,s_D__a_1_s_target_release_build_bo_1413d9090);
  }
  else {
    FUN_140d1cc10(local_c8);
    local_108 = 0;
    iVar1 = FUN_140d1cdb0(local_c8,param_4,param_5,param_3);
    if (iVar1 != 0) {
      for (local_f4 = 0; local_f4 < local_d0; local_f4 = local_f4 + 1) {
        local_f8[0] = (char)local_f4 + '\x01';
        if (local_f4 != 0) {
          local_108 = 0;
          iVar1 = FUN_140d1cdb0(local_c8,0,0,0);
          if ((iVar1 == 0) || (iVar1 = FUN_140d1d110(local_c8,local_58,local_e8), iVar1 == 0))
          goto LAB_140d6999a;
        }
        iVar1 = FUN_140d1d110(local_c8,param_6,param_7);
        if ((iVar1 == 0) ||
           ((iVar1 = FUN_140d1d110(local_c8,local_f8,1), iVar1 == 0 ||
            (iVar1 = FUN_140d1d150(local_c8,local_58,0), iVar1 == 0)))) goto LAB_140d6999a;
        local_d8 = local_e8;
        if (param_2 < local_e0 + local_e8) {
          local_d8 = param_2 - local_e0;
        }
        FUN_140d1d890(param_1 + local_e0);
        local_e0 = local_e0 + local_d8;
      }
      local_f0 = 1;
    }
LAB_140d6999a:
    FUN_140d1ccb0(local_c8);
    if (local_f0 != 1) {
      local_108 = CONCAT44(local_108._4_4_,0x6d);
      FUN_140d186f0(0x1f,0,0x1c,s_D__a_1_s_target_release_build_bo_1413d9100);
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=140d699f0 name=FUN_140d699f0 */

void FUN_140d699f0(code *param_1,undefined8 param_2,longlong param_3,ulonglong param_4,uint *param_5
                  ,int *param_6,uint *param_7,longlong param_8,ulonglong param_9)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_9 != 0) {
    uVar1 = *param_7 + (uint)param_9 * 8;
    if (uVar1 < *param_7) {
      *param_6 = *param_6 + 1;
    }
    *param_6 = (int)(param_9 >> 0x1d) + *param_6;
    *param_7 = uVar1;
    uVar2 = (ulonglong)*param_5;
    if (uVar2 != 0) {
      if ((param_9 < param_4) && (param_9 + uVar2 < param_4)) {
        FUN_140d1d890(param_3 + uVar2,param_8,param_9);
        *param_5 = *param_5 + (uint)param_9;
        return;
      }
      FUN_140d1d890(param_3 + uVar2,param_8,param_4 - uVar2);
      (*param_1)(param_2,param_3,1);
      param_8 = param_8 + (param_4 - uVar2);
      param_9 = param_9 - (param_4 - uVar2);
      *param_5 = 0;
      FUN_140d1d930(param_3,0,param_4);
    }
    uVar2 = param_9 / param_4;
    if (uVar2 != 0) {
      (*param_1)(param_2,param_8,uVar2);
      param_8 = param_8 + uVar2 * param_4;
      param_9 = param_9 - uVar2 * param_4;
    }
    if (param_9 != 0) {
      *param_5 = (uint)param_9;
      FUN_140d1d890(param_3,param_8,param_9);
    }
  }
  return;
}


/* address=140d69c50 name=FUN_140d69c50 */

void FUN_140d69c50(code *param_1,undefined8 param_2,longlong param_3,ulonglong param_4,uint *param_5
                  ,undefined4 param_6,undefined4 param_7,int param_8)

{
  ulonglong local_18;
  
  local_18 = (ulonglong)*param_5;
  if (param_4 <= local_18) {
    FID_conflict__assert((wchar_t *)s_n_1413d95c8,(wchar_t *)s_D_1413d94d0,0xa5);
  }
  *(undefined *)(param_3 + local_18) = 0x80;
  local_18 = local_18 + 1;
  if (param_4 - 8 < local_18) {
    FUN_140d1d930(param_3 + local_18,0,param_4 - local_18);
    local_18 = 0;
    (*param_1)(param_2,param_3,1);
  }
  FUN_140d1d930(param_3 + local_18,0,(param_4 - 8) - local_18);
  if (param_8 == 0) {
    FUN_140d1d9a0(param_3 + -8 + param_4,param_7);
    FUN_140d1d9a0(param_3 + -4 + param_4,param_6);
  }
  else {
    FUN_140d1da10(param_3 + -8 + param_4,param_6);
    FUN_140d1da10(param_3 + -4 + param_4,param_7);
  }
  (*param_1)(param_2,param_3,1);
  *param_5 = 0;
  FUN_140d1d930(param_3,0,param_4);
  return;
}


/* address=140d69df0 name=FUN_140d69df0 */

void FUN_140d69df0(int *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong local_res10;
  longlong local_res18;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  
  local_78 = *param_1;
  local_74 = param_1[1];
  local_70 = param_1[2];
  local_6c = param_1[3];
  local_res10 = param_2;
  local_res18 = param_3;
  while (local_res18 != 0) {
    iVar1 = FUN_140d1d970(local_res10);
    iVar2 = FUN_140d1d970(local_res10 + 4);
    uVar3 = FUN_140d1dbd0(local_78 + iVar1 + ((local_70 ^ local_6c) & local_74 ^ local_6c),3);
    iVar4 = FUN_140d1d970(local_res10 + 8);
    uVar5 = FUN_140d1dbd0(local_6c + iVar2 + ((local_74 ^ local_70) & uVar3 ^ local_70),7);
    iVar6 = FUN_140d1d970(local_res10 + 0xc);
    uVar7 = FUN_140d1dbd0(local_70 + iVar4 + ((uVar3 ^ local_74) & uVar5 ^ local_74),0xb);
    iVar8 = FUN_140d1d970(local_res10 + 0x10);
    uVar9 = FUN_140d1dbd0(local_74 + iVar6 + ((uVar5 ^ uVar3) & uVar7 ^ uVar3),0x13);
    iVar10 = FUN_140d1d970(local_res10 + 0x14);
    uVar3 = FUN_140d1dbd0(uVar3 + iVar8 + ((uVar7 ^ uVar5) & uVar9 ^ uVar5),3);
    iVar11 = FUN_140d1d970(local_res10 + 0x18);
    uVar5 = FUN_140d1dbd0(uVar5 + iVar10 + ((uVar9 ^ uVar7) & uVar3 ^ uVar7),7);
    iVar12 = FUN_140d1d970(local_res10 + 0x1c);
    uVar7 = FUN_140d1dbd0(uVar7 + iVar11 + ((uVar3 ^ uVar9) & uVar5 ^ uVar9),0xb);
    iVar13 = FUN_140d1d970(local_res10 + 0x20);
    uVar9 = FUN_140d1dbd0(uVar9 + iVar12 + ((uVar5 ^ uVar3) & uVar7 ^ uVar3),0x13);
    iVar14 = FUN_140d1d970(local_res10 + 0x24);
    uVar3 = FUN_140d1dbd0(uVar3 + iVar13 + ((uVar7 ^ uVar5) & uVar9 ^ uVar5),3);
    iVar15 = FUN_140d1d970(local_res10 + 0x28);
    uVar5 = FUN_140d1dbd0(uVar5 + iVar14 + ((uVar9 ^ uVar7) & uVar3 ^ uVar7),7);
    iVar16 = FUN_140d1d970(local_res10 + 0x2c);
    uVar7 = FUN_140d1dbd0(uVar7 + iVar15 + ((uVar3 ^ uVar9) & uVar5 ^ uVar9),0xb);
    iVar17 = FUN_140d1d970(local_res10 + 0x30);
    uVar9 = FUN_140d1dbd0(uVar9 + iVar16 + ((uVar5 ^ uVar3) & uVar7 ^ uVar3),0x13);
    iVar18 = FUN_140d1d970(local_res10 + 0x34);
    uVar3 = FUN_140d1dbd0(uVar3 + iVar17 + ((uVar7 ^ uVar5) & uVar9 ^ uVar5),3);
    iVar19 = FUN_140d1d970(local_res10 + 0x38);
    uVar5 = FUN_140d1dbd0(uVar5 + iVar18 + ((uVar9 ^ uVar7) & uVar3 ^ uVar7),7);
    iVar20 = FUN_140d1d970(local_res10 + 0x3c);
    local_res10 = local_res10 + 0x40;
    uVar7 = FUN_140d1dbd0(uVar7 + iVar19 + ((uVar3 ^ uVar9) & uVar5 ^ uVar9),0xb);
    uVar9 = FUN_140d1dbd0(uVar9 + iVar20 + ((uVar5 ^ uVar3) & uVar7 ^ uVar3),0x13);
    uVar3 = FUN_140d1dbd0((uVar9 & (uVar7 | uVar5) | uVar7 & uVar5) + uVar3 + 0x5a827999 + iVar1,3);
    uVar5 = FUN_140d1dbd0((uVar3 & (uVar9 | uVar7) | uVar9 & uVar7) + uVar5 + 0x5a827999 + iVar8,5);
    uVar7 = FUN_140d1dbd0((uVar5 & (uVar3 | uVar9) | uVar3 & uVar9) + uVar7 + 0x5a827999 + iVar13,9)
    ;
    uVar9 = FUN_140d1dbd0((uVar7 & (uVar5 | uVar3) | uVar5 & uVar3) + uVar9 + 0x5a827999 + iVar17,
                          0xd);
    uVar3 = FUN_140d1dbd0((uVar9 & (uVar7 | uVar5) | uVar7 & uVar5) + uVar3 + 0x5a827999 + iVar2,3);
    uVar5 = FUN_140d1dbd0((uVar3 & (uVar9 | uVar7) | uVar9 & uVar7) + uVar5 + 0x5a827999 + iVar10,5)
    ;
    uVar7 = FUN_140d1dbd0((uVar5 & (uVar3 | uVar9) | uVar3 & uVar9) + uVar7 + 0x5a827999 + iVar14,9)
    ;
    uVar9 = FUN_140d1dbd0((uVar7 & (uVar5 | uVar3) | uVar5 & uVar3) + uVar9 + 0x5a827999 + iVar18,
                          0xd);
    uVar3 = FUN_140d1dbd0((uVar9 & (uVar7 | uVar5) | uVar7 & uVar5) + uVar3 + 0x5a827999 + iVar4,3);
    uVar5 = FUN_140d1dbd0((uVar3 & (uVar9 | uVar7) | uVar9 & uVar7) + uVar5 + 0x5a827999 + iVar11,5)
    ;
    uVar7 = FUN_140d1dbd0((uVar5 & (uVar3 | uVar9) | uVar3 & uVar9) + uVar7 + 0x5a827999 + iVar15,9)
    ;
    uVar9 = FUN_140d1dbd0((uVar7 & (uVar5 | uVar3) | uVar5 & uVar3) + uVar9 + 0x5a827999 + iVar19,
                          0xd);
    uVar3 = FUN_140d1dbd0((uVar9 & (uVar7 | uVar5) | uVar7 & uVar5) + uVar3 + 0x5a827999 + iVar6,3);
    uVar5 = FUN_140d1dbd0((uVar3 & (uVar9 | uVar7) | uVar9 & uVar7) + uVar5 + 0x5a827999 + iVar12,5)
    ;
    uVar7 = FUN_140d1dbd0((uVar5 & (uVar3 | uVar9) | uVar3 & uVar9) + uVar7 + 0x5a827999 + iVar16,9)
    ;
    uVar9 = FUN_140d1dbd0((uVar7 & (uVar5 | uVar3) | uVar5 & uVar3) + uVar9 + 0x5a827999 + iVar20,
                          0xd);
    uVar3 = FUN_140d1dbd0((uVar9 ^ uVar7 ^ uVar5) + uVar3 + 0x6ed9eba1 + iVar1,3);
    uVar5 = FUN_140d1dbd0((uVar3 ^ uVar9 ^ uVar7) + uVar5 + 0x6ed9eba1 + iVar13,9);
    uVar7 = FUN_140d1dbd0((uVar5 ^ uVar3 ^ uVar9) + uVar7 + 0x6ed9eba1 + iVar8,0xb);
    uVar9 = FUN_140d1dbd0((uVar7 ^ uVar5 ^ uVar3) + uVar9 + 0x6ed9eba1 + iVar17,0xf);
    uVar3 = FUN_140d1dbd0((uVar9 ^ uVar7 ^ uVar5) + uVar3 + 0x6ed9eba1 + iVar4,3);
    uVar5 = FUN_140d1dbd0((uVar3 ^ uVar9 ^ uVar7) + uVar5 + 0x6ed9eba1 + iVar15,9);
    uVar7 = FUN_140d1dbd0((uVar5 ^ uVar3 ^ uVar9) + uVar7 + 0x6ed9eba1 + iVar11,0xb);
    uVar9 = FUN_140d1dbd0((uVar7 ^ uVar5 ^ uVar3) + uVar9 + 0x6ed9eba1 + iVar19,0xf);
    uVar3 = FUN_140d1dbd0((uVar9 ^ uVar7 ^ uVar5) + uVar3 + 0x6ed9eba1 + iVar2,3);
    uVar5 = FUN_140d1dbd0((uVar3 ^ uVar9 ^ uVar7) + uVar5 + 0x6ed9eba1 + iVar14,9);
    uVar7 = FUN_140d1dbd0((uVar5 ^ uVar3 ^ uVar9) + uVar7 + 0x6ed9eba1 + iVar10,0xb);
    uVar9 = FUN_140d1dbd0((uVar7 ^ uVar5 ^ uVar3) + uVar9 + 0x6ed9eba1 + iVar18,0xf);
    uVar3 = FUN_140d1dbd0((uVar9 ^ uVar7 ^ uVar5) + uVar3 + 0x6ed9eba1 + iVar6,3);
    local_6c = FUN_140d1dbd0((uVar3 ^ uVar9 ^ uVar7) + uVar5 + 0x6ed9eba1 + iVar16,9);
    local_70 = FUN_140d1dbd0((local_6c ^ uVar3 ^ uVar9) + uVar7 + 0x6ed9eba1 + iVar12,0xb);
    iVar1 = FUN_140d1dbd0((local_70 ^ local_6c ^ uVar3) + uVar9 + 0x6ed9eba1 + iVar20,0xf);
    local_78 = *param_1 + uVar3;
    *param_1 = local_78;
    local_74 = param_1[1] + iVar1;
    param_1[1] = local_74;
    local_70 = param_1[2] + local_70;
    param_1[2] = local_70;
    local_6c = param_1[3] + local_6c;
    param_1[3] = local_6c;
    local_res18 = local_res18 + -1;
  }
  return;
}


/* address=140d6aee0 name=FUN_140d6aee0 */

void FUN_140d6aee0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5,int param_6,code *param_7)

{
  byte bVar1;
  uint uVar2;
  undefined auStack_78 [32];
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  byte local_40 [16];
  byte abStack_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_78;
  if ((param_3 != 0) && (param_3 < 0x81)) {
    FUN_140d1d890(local_40,param_5,0x10);
    (*param_7)(param_5,param_5,param_4);
    uVar2 = (param_3 + 7) / 8;
    if (param_6 == 0) {
      for (local_58 = 0; local_58 < (int)uVar2; local_58 = local_58 + 1) {
        local_40[local_58 + 0x10] = *(byte *)(param_1 + local_58);
        *(byte *)(param_2 + local_58) = local_40[local_58 + 0x10] ^ *(byte *)(param_5 + local_58);
      }
    }
    else {
      for (local_58 = 0; local_58 < (int)uVar2; local_58 = local_58 + 1) {
        bVar1 = *(byte *)(param_1 + local_58) ^ *(byte *)(param_5 + local_58);
        local_4c = (uint)bVar1;
        local_40[local_58 + 0x10] = bVar1;
        *(byte *)(param_2 + local_58) = bVar1;
      }
    }
    local_50 = param_3 % 8;
    local_54 = param_3 / 8;
    if (local_50 == 0) {
      FUN_140d1d890(param_5,local_40 + (int)local_54,0x10);
    }
    else {
      for (local_58 = 0; local_58 < 0x10; local_58 = local_58 + 1) {
        local_48 = (uint)local_40[(int)(local_58 + 1 + local_54)];
        *(byte *)(param_5 + local_58) =
             local_40[(int)(local_58 + local_54)] << (sbyte)local_50 |
             (byte)((int)local_48 >> (8U - (sbyte)local_50 & 0x1f));
      }
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=140d6b140 name=FUN_140d6b140 */

void FUN_140d6b140(longlong param_1)

{
  uint local_18;
  uint local_14;
  
  local_14 = 0x10;
  local_18 = 1;
  do {
    local_14 = local_14 - 1;
    local_18 = local_18 + *(byte *)(param_1 + (ulonglong)local_14);
    *(undefined *)(param_1 + (ulonglong)local_14) = (undefined)local_18;
    local_18 = local_18 >> 8;
  } while (local_14 != 0);
  return;
}


/* address=140d6b1b0 name=FUN_140d6b1b0 */

void FUN_140d6b1b0(longlong param_1)

{
  uint local_18;
  uint local_14;
  
  local_14 = 0xc;
  local_18 = 1;
  do {
    local_14 = local_14 - 1;
    local_18 = local_18 + *(byte *)(param_1 + (ulonglong)local_14);
    *(undefined *)(param_1 + (ulonglong)local_14) = (undefined)local_18;
    local_18 = local_18 >> 8;
  } while (local_14 != 0);
  return;
}


/* address=140d6b220 name=FUN_140d6b220 */

/* WARNING: Removing unreachable block (ram,0x000140d6b295) */

void FUN_140d6b220(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[1] << 0x3f | *param_1 >> 1;
  param_1[1] = param_1[1] >> 1 ^ -(uVar1 & 1) & 0xe100000000000000;
  return;
}


/* address=140d6b300 name=FUN_140d6b300 */

void FUN_140d6b300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_140ca7280(param_1,param_2,param_3,param_4,param_5,param_7,param_6);
  return;
}


/* address=140d6b360 name=FUN_140d6b360 */

void FUN_140d6b360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_140ca6f20(param_1,param_2,param_3,param_4,param_5,param_7,param_6);
  return;
}


/* address=140d6b3c0 name=FUN_140d6b3c0 */

ulonglong FUN_140d6b3c0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_1 & 0x11111111;
  uVar2 = param_1 & 0x22222222;
  uVar3 = param_1 & 0x44444444;
  param_1 = param_1 & 0x88888888;
  uVar4 = param_2 & 0x11111111;
  uVar5 = param_2 & 0x22222222;
  uVar6 = param_2 & 0x44444444;
  param_2 = param_2 & 0x88888888;
  return ((ulonglong)uVar1 * (ulonglong)uVar4 ^ (ulonglong)uVar2 * (ulonglong)param_2 ^
          (ulonglong)uVar3 * (ulonglong)uVar6 ^ (ulonglong)param_1 * (ulonglong)uVar5) &
         0x1111111111111111 |
         ((ulonglong)uVar1 * (ulonglong)uVar5 ^ (ulonglong)uVar2 * (ulonglong)uVar4 ^
          (ulonglong)uVar3 * (ulonglong)param_2 ^ (ulonglong)param_1 * (ulonglong)uVar6) &
         0x2222222222222222 |
         ((ulonglong)uVar1 * (ulonglong)uVar6 ^ (ulonglong)uVar2 * (ulonglong)uVar5 ^
          (ulonglong)uVar3 * (ulonglong)uVar4 ^ (ulonglong)param_1 * (ulonglong)param_2) &
         0x4444444444444444 |
         ((ulonglong)uVar1 * (ulonglong)param_2 ^ (ulonglong)uVar2 * (ulonglong)uVar6 ^
          (ulonglong)uVar3 * (ulonglong)uVar5 ^ (ulonglong)param_1 * (ulonglong)uVar4) &
         0x8888888888888888;
}


/* address=140d6b590 name=FUN_140d6b590 */

void FUN_140d6b590(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = (uint)(param_4 >> 0x20);
  uVar3 = FUN_140d6b3c0(param_3 & 0xffffffff,param_4 & 0xffffffff);
  uVar4 = FUN_140d6b3c0(uVar1,uVar2);
  uVar5 = FUN_140d6b3c0((uint)param_3 ^ uVar1,(uint)param_4 ^ uVar2);
  uVar5 = uVar5 ^ uVar3 ^ uVar4;
  *param_1 = uVar3 ^ uVar5 << 0x20;
  *param_2 = uVar4 ^ uVar5 >> 0x20;
  return;
}


/* address=140d6b680 name=FUN_140d6b680 */

void FUN_140d6b680(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10 [2];
  
  FUN_140d6b590(&local_20,&local_30,*param_1,param_2[1]);
  FUN_140d6b590(&local_38,&local_28,param_1[1],*param_2);
  FUN_140d6b590(local_10,&local_18,*param_1 ^ param_1[1],*param_2 ^ param_2[1]);
  uVar1 = local_30 ^ local_10[0] ^ local_20 ^ local_38;
  uVar2 = uVar1 ^ local_20 << 0x3f ^ local_20 << 0x3e ^ local_20 << 0x39;
  *param_1 = local_38 ^ local_18 ^ local_30 ^ local_28 ^ local_20 ^ local_20 >> 1 ^ uVar1 << 0x3f ^
             local_20 >> 2 ^ uVar1 << 0x3e ^ local_20 >> 7 ^ uVar1 << 0x39;
  param_1[1] = local_28 ^ uVar2 ^ uVar2 >> 1 ^ uVar2 >> 2 ^ uVar2 >> 7;
  return;
}


/* address=140d6b910 name=FUN_140d6b910 */

void FUN_140d6b910(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140d1da50(param_1);
  uVar2 = FUN_140d1da50(param_1 + 8);
  uVar2 = FUN_140d1d7f0(uVar2);
  FUN_140d1da80(param_1,uVar2);
  uVar1 = FUN_140d1d7f0(uVar1);
  FUN_140d1da80(param_1 + 8,uVar1);
  return;
}


/* address=140d6b980 name=FUN_140d6b980 */

void FUN_140d6b980(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = FUN_140d1da50(param_1);
  uVar2 = FUN_140d1da50(param_1 + 8);
  uVar3 = FUN_140d1d6b0(uVar1 & 1,1);
  lVar4 = FUN_140d1d720(uVar3,0xe1,0);
  uVar3 = FUN_140d1d7f0(uVar2 >> 1 ^ lVar4 << 0x38);
  FUN_140d1da80(param_1,uVar3);
  uVar3 = FUN_140d1d7f0(uVar1 >> 1 | uVar2 << 0x3f);
  FUN_140d1da80(param_1 + 8,uVar3);
  return;
}


/* address=140d6ba60 name=FUN_140d6ba60 */

void FUN_140d6ba60(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_140d1d9d0(param_1 + 0x114);
  FUN_140d1da10(param_1 + 0x114,iVar1 + param_2);
  return;
}


/* address=140d6bab0 name=FUN_140d6bab0 */

void FUN_140d6bab0(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined auStack_88 [32];
  undefined8 local_68;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  byte local_40 [32];
  undefined local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_88;
  if (param_3 < 0x31) {
    for (local_50 = 0; local_50 < 0x30; local_50 = local_50 + 0x10) {
      FUN_140d6ba60(param_1,1);
      local_48 = param_1 + 0x108;
      (**(code **)(param_1 + 0xf8))(local_48,local_40 + local_50,param_1);
    }
    for (local_58 = 0; local_58 < param_3; local_58 = local_58 + 1) {
      local_40[local_58] = local_40[local_58] ^ *(byte *)(param_2 + local_58);
    }
    local_68 = 0x20;
    uVar1 = FUN_140d49590(param_1,0,param_1 + 0xf8,local_40);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    FUN_140d1d890(param_1 + 0x108,local_20,0x10);
  }
  FUN_140e28050(local_10 ^ (ulonglong)auStack_88);
  return;
}


/* address=140d6bc40 name=FUN_140d6bc40 */

undefined8 FUN_140d6bc40(void)

{
  return 0;
}


/* address=140d6bc90 name=FUN_140d6bc90 */

void FUN_140d6bc90(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  undefined local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_48;
  local_28 = param_2 & 0xfffffffffffffff8;
  iVar1 = FUN_140caddd0(param_1,local_28);
  if ((iVar1 != 0) && (local_20 = param_2 - local_28, local_20 != 0)) {
    if (7 < local_20) {
      FID_conflict__assert((wchar_t *)s_r_1413dab28,(wchar_t *)s_D_1413daa50,0x8e);
    }
    iVar1 = FUN_140caddc0(local_18);
    if (iVar1 != 0) {
      FUN_140d1d890(param_1 + local_28,local_18,local_20);
    }
  }
  FUN_140e28050(local_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=140d6bd70 name=FUN_140d6bd70 */

void FUN_140d6bd70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_140e040a0(param_2,0x30);
  *param_4 = 0;
  return;
}


/* address=140d6bdb0 name=FUN_140d6bdb0 */

void FUN_140d6bdb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d6fed0();
  FUN_140d89380(uVar1,&LAB_140d6ff10);
  FUN_140d6fec0();
  return;
}


/* address=140d6bde0 name=FUN_140d6bde0 */

undefined4 FUN_140d6bde0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140d278e0(*(undefined8 *)(param_1 + 8));
  return uVar1;
}


/* address=140d6be10 name=FUN_140d6be10 */

undefined4
FUN_140d6be10(undefined8 param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int local_20;
  undefined4 local_1c;
  
  uVar1 = FUN_140d535c0(param_1);
  local_1c = 0;
  if (param_4 < uVar1) {
    FUN_140d186f0(4,0,0x87,s_D__a_1_s_target_release_build_bo_1413dd0b0,0x1c4);
    return 0;
  }
  lVar3 = FUN_140d76180(uVar1);
  if (lVar3 != 0) {
    if (param_7 == 1) {
      local_20 = FUN_140d6c8f0(lVar3,uVar1,param_5,param_6);
    }
    else {
      if (param_7 != 3) {
        FUN_140d186f0(4,0,0x8f,s_D__a_1_s_target_release_build_bo_1413dd120,0x1d5);
        goto LAB_140d6bf60;
      }
      local_20 = FUN_140d6cc40(lVar3,uVar1,param_5,param_6);
    }
    if ((0 < local_20) && (iVar2 = FUN_140d6cf70(param_1,param_3,lVar3,uVar1), iVar2 != 0)) {
      *param_2 = (ulonglong)uVar1;
      local_1c = 1;
    }
  }
LAB_140d6bf60:
  FUN_140d762b0(lVar3);
  return local_1c;
}


/* address=140d6bf80 name=FUN_140d6bf80 */

undefined4 FUN_140d6bf80(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  longlong lVar9;
  longlong local_28;
  undefined4 uVar11;
  undefined8 local_10 [2];
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    FUN_140d186f0(4,0,0x90,s_D__a_1_s_target_release_build_bo_1413dd4a0,0x25a);
    return 0;
  }
  local_10[0] = 0;
  local_28 = 0;
  uVar11 = 0;
  lVar4 = FUN_140d27f30();
  if (lVar4 == 0) goto LAB_140d6c4b7;
  FUN_140d28030(lVar4);
  lVar5 = FUN_140d28090(lVar4);
  lVar6 = FUN_140d28090(lVar4);
  if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_140d6c4b7;
  uVar1 = FUN_140d278e0(*(undefined8 *)(param_1 + 8));
  if (param_4 != uVar1) {
    FID_conflict__assert((wchar_t *)s_l_1413dd5f0,(wchar_t *)s_D_1413dd510,0x271);
  }
  lVar7 = FUN_140d27ab0(param_3,param_4,lVar5);
  if (lVar7 == 0) goto LAB_140d6c4b7;
  iVar2 = FUN_140d29780(lVar5,*(undefined8 *)(param_1 + 8));
  if (-1 < iVar2) {
    FUN_140d186f0(4,0,0x73,s_D__a_1_s_target_release_build_bo_1413dd630,CONCAT44(uVar10,0x278));
    goto LAB_140d6c4b7;
  }
  iVar2 = FUN_140d6e030(param_1,lVar4);
  if (iVar2 == 0) {
    FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413dd6a0,CONCAT44(uVar10,0x27d));
    goto LAB_140d6c4b7;
  }
  bVar8 = (*(uint *)(param_1 + 0x54) & 0x48) != 0;
  if ((*(longlong *)(param_1 + 0x10) == 0) && (!bVar8)) {
    FUN_140d186f0(4,0,0x82,s_D__a_1_s_target_release_build_bo_1413dd710,CONCAT44(uVar10,0x28d));
    goto LAB_140d6c4b7;
  }
  if (!bVar8) {
    local_28 = FUN_140d6e500(param_1,local_10,lVar4);
    if (local_28 == 0) {
      FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413dd780,CONCAT44(uVar10,0x294));
      goto LAB_140d6c4b7;
    }
    lVar7 = lVar4;
    iVar2 = FUN_140d6c620(lVar5,local_28,*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x60),lVar4);
    uVar10 = (undefined4)((ulonglong)lVar7 >> 0x20);
    if (iVar2 == 0) goto LAB_140d6c4b7;
  }
  if (((((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
       (*(longlong *)(param_1 + 0x10) == 0)) ||
      ((*(longlong *)(param_1 + 0x30) == 0 || (*(longlong *)(param_1 + 0x38) == 0)))) ||
     ((*(longlong *)(param_1 + 0x40) == 0 ||
      ((iVar2 = FUN_140d3c890(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x68)),
       iVar2 == 0 ||
       (iVar2 = FUN_140d3c890(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x70)),
       iVar2 == 0)))))) {
    lVar7 = lVar4;
    iVar2 = FUN_140d2e1d0(lVar6,lVar5,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 8),
                          lVar4,*(undefined8 *)(param_1 + 0x60));
    uVar10 = (undefined4)((ulonglong)lVar7 >> 0x20);
  }
  else {
    iVar2 = FUN_140d6ea60(lVar6,lVar5,param_1,lVar4);
  }
  if (iVar2 == 0) goto LAB_140d6c4b7;
  if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_140d6c3f7:
    if ((bVar8) ||
       (iVar2 = FUN_140d6c6a0(lVar6,local_28,*(undefined8 *)(param_1 + 0x60),lVar4), iVar2 != 0)) {
      if (*(int *)(lVar6 + 8) != *(int *)(*(longlong *)(param_1 + 0x60) + 0x20)) {
        FID_conflict__assert((wchar_t *)s_r_1413dd940,(wchar_t *)s_D_1413dd860,0x2ca);
      }
      FUN_140d2fcb0(lVar6,param_4);
      iVar2 = FUN_140d27df0(param_2,param_4,lVar6);
      if (iVar2 == 0) {
        FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413dd990,CONCAT44(uVar10,0x2cd));
      }
      else {
        uVar11 = 1;
      }
    }
  }
  else {
    lVar7 = FUN_140d28090(lVar4);
    if (lVar7 != 0) {
      lVar9 = lVar4;
      iVar2 = FUN_140d2dba0(lVar7,lVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8)
                            ,lVar4,*(undefined8 *)(param_1 + 0x60));
      uVar10 = (undefined4)((ulonglong)lVar9 >> 0x20);
      if (iVar2 != 0) {
        uVar3 = FUN_140d297d0(lVar7,lVar5);
        iVar2 = FUN_140d1d7b0(uVar3);
        if (iVar2 != 0) goto LAB_140d6c3f7;
      }
    }
    FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413dd7f0,CONCAT44(uVar10,699));
  }
LAB_140d6c4b7:
  if (lVar4 != 0) {
    FUN_140d281e0(lVar4);
    FUN_140d27fa0(lVar4);
  }
  if (local_28 != 0) {
    FUN_140d6e9f0(param_1,local_28,local_10[0]);
  }
  return uVar11;
}


/* address=140d6c510 name=FUN_140d6c510 */

longlong * FUN_140d6c510(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_140d76180(0x18);
  if (plVar1 != (longlong *)0x0) {
    FUN_140d1d930(plVar1,0,0x18);
    lVar2 = FUN_140d275e0();
    *plVar1 = lVar2;
    if (*plVar1 != 0) {
      lVar2 = FUN_140d275e0();
      plVar1[1] = lVar2;
      if (plVar1[1] != 0) {
        *(undefined4 *)(plVar1 + 2) = 0x1f;
        return plVar1;
      }
    }
    FUN_140d6c5b0(plVar1);
  }
  return (longlong *)0x0;
}


/* address=140d6c5b0 name=FUN_140d6c5b0 */

void FUN_140d6c5b0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_140d27660(*param_1);
    FUN_140d27660(param_1[1]);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d6c600 name=FUN_140d6c600 */

void FUN_140d6c600(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0x1f;
  return;
}


/* address=140d6c620 name=FUN_140d6c620 */

undefined8
FUN_140d6c620(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_140d6da80(param_2,param_3,param_4,param_5);
  if ((iVar1 != 0) && (iVar1 = FUN_140d2d750(param_1,param_1,*param_2,param_4,param_5), iVar1 != 0))
  {
    return 1;
  }
  return 0;
}


/* address=140d6c6a0 name=FUN_140d6c6a0 */

void FUN_140d6c6a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d2d750(param_1,param_1,*(undefined8 *)(param_2 + 8),param_3,param_4);
  return;
}


/* address=140d6c6f0 name=FUN_140d6c6f0 */

void FUN_140d6c6f0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong local_res8;
  ulonglong local_res10;
  undefined auStack_b8 [32];
  int local_98;
  undefined local_94;
  undefined local_93;
  undefined uStack_92;
  undefined uStack_91;
  undefined4 local_90;
  ulonglong local_88;
  undefined local_80 [40];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  FUN_140d1c160(local_80);
  FUN_140d272d0();
  local_88 = FUN_140d1c8f0(param_5);
  local_98 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  while (local_res10 != 0) {
    local_94 = (undefined)((uint)local_98 >> 0x18);
    local_93 = (undefined)((uint)local_98 >> 0x10);
    uStack_92 = (undefined)((uint)local_98 >> 8);
    uStack_91 = (undefined)local_98;
    iVar1 = FUN_140d1c5a0(local_80,param_5,0);
    if (((iVar1 == 0) || (iVar1 = FUN_140d1c6d0(local_80,param_3,param_4), iVar1 == 0)) ||
       (iVar1 = FUN_140d1c6d0(local_80,&local_94), iVar1 == 0)) goto LAB_140d6c8bc;
    if (local_res10 < local_88) {
      iVar1 = FUN_140d1c710(local_80,local_58,0);
      if (iVar1 == 0) goto LAB_140d6c8bc;
      FUN_140d1d890(local_res8,local_58);
      local_res10 = 0;
    }
    else {
      iVar1 = FUN_140d1c710(local_80,local_res8);
      if (iVar1 == 0) goto LAB_140d6c8bc;
      local_res8 = local_res8 + local_88;
      local_res10 = local_res10 - local_88;
    }
    local_98 = local_98 + 1;
  }
  local_90 = 1;
LAB_140d6c8bc:
  FUN_140d1c1d0(local_80);
  FUN_140d272e0();
  FUN_140e28050(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140d6c8f0 name=FUN_140d6c8f0 */

undefined8 FUN_140d6c8f0(undefined *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (param_2 < 0xb) {
    FUN_140d186f0(4,0,0x7e,s_D__a_1_s_target_release_build_bo_1413dabc0,0x4e);
    uVar1 = 0;
  }
  else if (param_2 - 0xb < param_4) {
    FUN_140d186f0(4,0,0x76,s_D__a_1_s_target_release_build_bo_1413dac30,0x53);
    uVar1 = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 1;
    FUN_140d1d930(param_1 + 2,0xff,(param_2 - 3) - param_4);
    param_1[(param_2 - param_4) + -1] = 0;
    FUN_140d1d890(param_1 + (param_2 - param_4),param_3,param_4);
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d6ca10 name=FUN_140d6ca10 */

undefined8
FUN_140d6ca10(undefined8 param_1,longlong *param_2,ulonglong param_3,char *param_4,ulonglong param_5
             )

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong local_18;
  
  if (param_5 < 2) {
    FUN_140d186f0(4,0,0x74,s_D__a_1_s_target_release_build_bo_1413daca0,0x65);
    uVar1 = 0;
  }
  else if ((*param_4 == '\0') && (param_4[1] == '\x01')) {
    for (local_18 = 2; (local_18 < param_5 && (param_4[local_18] != '\0')); local_18 = local_18 + 1)
    {
      if (param_4[local_18] != -1) {
        FUN_140d186f0(4,0,0x66,s_D__a_1_s_target_release_build_bo_1413dad80,0x77);
        return 0;
      }
    }
    if (local_18 == param_5) {
      FUN_140d186f0(4,0,0x83,s_D__a_1_s_target_release_build_bo_1413dadf0,0x7d);
      uVar1 = 0;
    }
    else if (local_18 < 10) {
      FUN_140d186f0(4,0,0x67,s_D__a_1_s_target_release_build_bo_1413dae60,0x82);
      uVar1 = 0;
    }
    else {
      lVar2 = local_18 + 1;
      if (param_3 < param_5 - lVar2) {
        FUN_140d186f0(4,0,0x71,s_D__a_1_s_target_release_build_bo_1413daed0,0x8a);
        uVar1 = 0;
      }
      else {
        FUN_140d1d890(param_1,param_4 + lVar2,param_5 - lVar2);
        *param_2 = param_5 - lVar2;
        uVar1 = 1;
      }
    }
  }
  else {
    FUN_140d186f0(4,0,0x6b,s_D__a_1_s_target_release_build_bo_1413dad10,0x6b);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d6cc40 name=FUN_140d6cc40 */

undefined8 FUN_140d6cc40(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (param_2 < param_4) {
    FUN_140d186f0(4,0,0x72,s_D__a_1_s_target_release_build_bo_1413daf40,0x96);
    uVar1 = 0;
  }
  else if (param_4 < param_2) {
    FUN_140d186f0(4,0,0x74,s_D__a_1_s_target_release_build_bo_1413dafb0,0x9b);
    uVar1 = 0;
  }
  else {
    FUN_140d1d890(param_1,param_3,param_4);
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d6cce0 name=FUN_140d6cce0 */

undefined8 FUN_140d6cce0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_140d186f0(4,0,0x90,s_D__a_1_s_target_release_build_bo_1413dc660,0x4e);
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_140d27880(*(undefined8 *)(param_1 + 8));
    if (uVar1 < 0x4001) {
      iVar2 = FUN_140d29af0(*(undefined8 *)(param_1 + 8));
      if ((iVar2 == 0) || (iVar2 = FUN_140d27a70(*(undefined8 *)(param_1 + 8)), iVar2 != 0)) {
        FUN_140d186f0(4,0,0x68,s_D__a_1_s_target_release_build_bo_1413dc740,0x5b);
        uVar4 = 0;
      }
      else {
        if (*(longlong *)(param_1 + 0x10) == 0) {
          if ((*(uint *)(param_1 + 0x54) & 0x40) == 0) {
            FUN_140d186f0(4,0,0x90,s_D__a_1_s_target_release_build_bo_1413dc900,0x7f);
            return 0;
          }
        }
        else {
          uVar3 = FUN_140d27880(*(undefined8 *)(param_1 + 0x10));
          if (((uVar3 < 2) || (iVar2 = FUN_140d27a70(*(undefined8 *)(param_1 + 0x10)), iVar2 != 0))
             || (iVar2 = FUN_140d29af0(*(undefined8 *)(param_1 + 0x10)), iVar2 == 0)) {
            FUN_140d186f0(4,0,0x65,s_D__a_1_s_target_release_build_bo_1413dc7b0,0x65);
            return 0;
          }
          if ((*(uint *)(param_1 + 0x54) & 0x80) == 0) {
            if (DAT_14104c22c < uVar3) {
              FUN_140d186f0(4,0,0x65,s_D__a_1_s_target_release_build_bo_1413dc890,0x7a);
              return 0;
            }
          }
          else {
            iVar2 = FUN_140d29780(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
            if (iVar2 < 1) {
              FUN_140d186f0(4,0,0x65,s_D__a_1_s_target_release_build_bo_1413dc820,0x6c);
              return 0;
            }
          }
        }
        if (DAT_14104c22c < uVar1) {
          if ((*(longlong *)(param_1 + 0x10) != 0) &&
             (iVar2 = FUN_140d29780(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10)),
             iVar2 < 1)) {
            FID_conflict__assert((wchar_t *)s_r_1413dcac0,(wchar_t *)s_D_1413dc9e0,0x8b);
          }
          uVar4 = 1;
        }
        else {
          FUN_140d186f0(4,0,0x7e,s_D__a_1_s_target_release_build_bo_1413dc970,0x88);
          uVar4 = 0;
        }
      }
    }
    else {
      FUN_140d186f0(4,0,0x80,s_D__a_1_s_target_release_build_bo_1413dc6d0,0x54);
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* address=140d6cf70 name=FUN_140d6cf70 */

void FUN_140d6cf70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(*param_1 + 0x40) == 0) {
    FUN_140d6bf80(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4);
  }
  return;
}


/* address=140d6cfe0 name=FUN_140d6cfe0 */

void FUN_140d6cfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d1dbf0();
  FUN_140d6cf70(param_1,param_2,param_3,param_4);
  return;
}


/* address=140d6d030 name=FUN_140d6d030 */

void FUN_140d6d030(longlong param_1)

{
  ulonglong local_18;
  
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
  FUN_140d2d560(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_140d2d560(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_140d2d560(*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_140d27660(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_140d27660(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_140d27660(*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_140d27660(*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x90) = 0;
  for (local_18 = 0; local_18 < *(ulonglong *)(param_1 + 0x98); local_18 = local_18 + 1) {
    FUN_140d6c5b0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + local_18 * 8));
  }
  FUN_140d762b0(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_140d762b0(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}


/* address=140d6d1e0 name=FUN_140d6d1e0 */

undefined4
FUN_140d6d1e0(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5
             ,longlong param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar3;
  int local_38;
  undefined4 local_34;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  longlong local_18;
  longlong local_10 [2];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((*(longlong *)(param_6 + 8) == 0) || (*(longlong *)(param_6 + 0x10) == 0)) {
    FUN_140d186f0(4,0,0x90,s_D__a_1_s_target_release_build_bo_1413dbd90,CONCAT44(uVar3,0x2a8));
    local_34 = 0;
  }
  else {
    uVar1 = FUN_140d535c0(param_6);
    local_20 = (ulonglong)uVar1;
    local_30 = 0;
    local_34 = 0;
    local_28 = 0;
    local_18 = 0;
    local_38 = 0;
    if ((param_1 == 0x72) && (param_3 != DAT_14104c228)) {
      FUN_140d186f0(4,0,0x7d,s_D__a_1_s_target_release_build_bo_1413dbe00,CONCAT44(uVar3,0x2b4));
      local_34 = 0;
    }
    else {
      local_30 = FUN_140d76180(local_20);
      if (local_30 == 0) {
        local_34 = 0;
      }
      else {
        iVar2 = FUN_140d6d3e0(param_6,local_10,local_30,local_20,param_4,param_5,1);
        if (iVar2 != 0) {
          iVar2 = FUN_140d54a80(&local_28,&local_18,&local_38,param_1,param_2,param_3);
          uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
          if (iVar2 != 0) {
            if ((local_10[0] == local_18) &&
               (iVar2 = FUN_140d1d850(local_30,local_28,local_10[0]), iVar2 == 0)) {
              local_34 = 1;
            }
            else {
              FUN_140d186f0(4,0,0x69,s_D__a_1_s_target_release_build_bo_1413dbe70,
                            CONCAT44(uVar3,0x2c8));
            }
          }
        }
        FUN_140d762b0(local_30);
        if (local_38 != 0) {
          FUN_140d762b0(local_28);
        }
      }
    }
  }
  return local_34;
}


/* address=140d6d3e0 name=FUN_140d6d3e0 */

int FUN_140d6d3e0(longlong param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,
                 undefined8 param_5,ulonglong param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar9;
  longlong local_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    FUN_140d186f0(4,0,0x90,s_D__a_1_s_target_release_build_bo_1413dd190,0x1f2);
    return 0;
  }
  iVar1 = FUN_140d6cce0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_140d535c0(param_1);
  if (param_4 < uVar2) {
    FUN_140d186f0(4,0,0x87,s_D__a_1_s_target_release_build_bo_1413dd200,CONCAT44(uVar9,0x1fe));
    return 0;
  }
  if (param_6 != uVar2) {
    FUN_140d186f0(4,0,0x70,s_D__a_1_s_target_release_build_bo_1413dd270,CONCAT44(uVar9,0x203));
    return 0;
  }
  lVar4 = FUN_140d27f30();
  if (lVar4 == 0) {
    return 0;
  }
  iVar1 = 0;
  local_20 = 0;
  FUN_140d28030(lVar4);
  lVar5 = FUN_140d28090(lVar4);
  lVar6 = FUN_140d28090(lVar4);
  if ((((lVar5 != 0) && (lVar6 != 0)) &&
      ((local_20 = param_3, param_7 == 3 || (local_20 = FUN_140d76180(uVar2), local_20 != 0)))) &&
     (lVar7 = FUN_140d27ab0(param_5,param_6,lVar5), lVar7 != 0)) {
    iVar3 = FUN_140d29780(lVar5,*(undefined8 *)(param_1 + 8));
    if (iVar3 < 0) {
      iVar3 = FUN_140d3f3e0(param_1 + 0x60,param_1 + 0x58,*(undefined8 *)(param_1 + 8),lVar4);
      if (iVar3 != 0) {
        lVar7 = lVar4;
        iVar3 = FUN_140d2dba0(lVar6,lVar5,*(undefined8 *)(param_1 + 0x10),
                              *(longlong *)(param_1 + 0x60) + 0x18,lVar4,
                              *(undefined8 *)(param_1 + 0x60));
        uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
        if (iVar3 != 0) {
          iVar3 = FUN_140d27df0(local_20,uVar2,lVar6);
          if (iVar3 == 0) {
            FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413dd350,
                          CONCAT44(uVar9,0x22f));
          }
          else {
            if (param_7 == 1) {
              uVar8 = (ulonglong)uVar2;
              iVar1 = FUN_140d6ca10(param_3,param_2,uVar2,local_20,uVar8);
              uVar9 = (undefined4)(uVar8 >> 0x20);
            }
            else {
              if (param_7 != 3) {
                FUN_140d186f0(4,0,0x8f,s_D__a_1_s_target_release_build_bo_1413dd3c0,
                              CONCAT44(uVar9,0x23d));
                goto LAB_140d6d726;
              }
              iVar1 = 1;
              *param_2 = (ulonglong)uVar2;
            }
            if (iVar1 == 0) {
              FUN_140d186f0(4,0,0x88,s_D__a_1_s_target_release_build_bo_1413dd430,
                            CONCAT44(uVar9,0x242));
            }
          }
        }
      }
    }
    else {
      FUN_140d186f0(4,0,0x73,s_D__a_1_s_target_release_build_bo_1413dd2e0,CONCAT44(uVar9,0x225));
    }
  }
LAB_140d6d726:
  FUN_140d281e0(lVar4);
  FUN_140d27fa0(lVar4);
  if (local_20 != param_3) {
    FUN_140d762b0(local_20);
  }
  return iVar1;
}


/* address=140d6d770 name=FUN_140d6d770 */

ulonglong FUN_140d6d770(undefined4 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                       undefined4 *param_5,longlong *param_6)

{
  int iVar1;
  ulonglong uVar2;
  int local_38;
  uint local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*(longlong *)(*param_6 + 0x28) == 0) {
    local_30 = FUN_140d535c0(param_6);
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    local_38 = 0;
    iVar1 = FUN_140d54a80(&local_28,&local_20,&local_38,param_1,param_2,param_3);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_140d6dc10(param_6,&local_18,param_4,local_30,local_28,local_20,1), iVar1 != 0))
    {
      if (CONCAT44(uStack_14,local_18) < 0x100000000) {
        *param_5 = local_18;
        local_34 = 1;
      }
      else {
        FUN_140d186f0(4,0,0x45,s_D__a_1_s_target_release_build_bo_1413dbcb0,0x279);
      }
    }
    if (local_38 != 0) {
      FUN_140d762b0(local_28);
    }
    uVar2 = (ulonglong)local_34;
  }
  else {
    iVar1 = FUN_140d6dcc0(param_1,param_3);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (0x40 < param_3) {
        FID_conflict__assert((wchar_t *)s_d_1413dbc70,(wchar_t *)s_D_1413dbba0,0x263);
      }
      uVar2 = (**(code **)(*param_6 + 0x28))
                        (param_1,param_2,param_3 & 0xffffffff,param_4,param_5,param_6);
    }
  }
  return uVar2;
}


/* address=140d6d950 name=FUN_140d6d950 */

undefined8 FUN_140d6d950(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar2;
  undefined local_18 [24];
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  iVar1 = FUN_140d2bea0(*param_1,1,param_3 + 0x18);
  if ((iVar1 != 0) && (iVar1 = FUN_140d2d6c0(param_1[1],*param_1,param_3,param_4), iVar1 != 0)) {
    uVar2 = param_4;
    iVar1 = FUN_140d2cea0(param_1[1],local_18,param_1[1],param_3,param_4);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (iVar1 != 0) {
      uVar2 = param_4;
      iVar1 = FUN_140d2dba0(*param_1,*param_1,param_2,param_3 + 0x18,param_4,param_3);
      uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if ((iVar1 != 0) && (iVar1 = FUN_140d2d670(*param_1,*param_1,param_3,param_4), iVar1 != 0)) {
        return 1;
      }
    }
  }
  FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413dab50,CONCAT44(uVar3,0xed));
  return 0;
}


/* address=140d6da80 name=FUN_140d6da80 */

undefined8
FUN_140d6da80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 2);
  *(int *)(param_1 + 2) = iVar1 + 1;
  if (iVar1 + 1 == 0x20) {
    iVar1 = FUN_140d6d950(param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      return 1;
    }
  }
  else {
    iVar1 = FUN_140d2d750(*param_1,*param_1,*param_1,param_3,param_4);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_140d2d750(param_1[1],param_1[1],param_1[1],param_3,param_4), iVar1 != 0)) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 2) = 0x1f;
  return 0;
}


/* address=140d6db70 name=FUN_140d6db70 */

undefined * FUN_140d6db70(void)

{
  return &DAT_141410858;
}


/* address=140d6db80 name=FUN_140d6db80 */

bool FUN_140d6db80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    FUN_140d186f0(4,0,0x43,s_D__a_1_s_target_release_build_bo_1413db5e0,0x58);
    bVar2 = false;
  }
  else {
    FUN_140d27660(*param_1);
    lVar1 = FUN_140d276f0(param_2);
    *param_1 = lVar1;
    bVar2 = *param_1 != 0;
  }
  return bVar2;
}


/* address=140d6dc10 name=FUN_140d6dc10 */

void FUN_140d6dc10(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  if (*(longlong *)(*param_1 + 0x30) == 0) {
    FUN_140d6be10(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


/* address=140d6dcc0 name=FUN_140d6dcc0 */

undefined8 FUN_140d6dcc0(int param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong local_18;
  
  if (param_1 == 0x72) {
    if (param_2 == DAT_14104c228) {
      uVar1 = 1;
    }
    else {
      FUN_140d186f0(4,0,0x7d,s_D__a_1_s_target_release_build_bo_1413db740,0x212);
      uVar1 = 0;
    }
  }
  else {
    for (local_18 = 0; *(int *)(&DAT_14104c5c0 + local_18 * 0x1c) != 0; local_18 = local_18 + 1) {
      if (*(int *)(&DAT_14104c5c0 + local_18 * 0x1c) == param_1) {
        if (param_2 != (byte)(&DAT_14104c5c4)[local_18 * 0x1c]) {
          FUN_140d186f0(4,0,0x7d,s_D__a_1_s_target_release_build_bo_1413db7b0,0x21c);
          return 0;
        }
        return 1;
      }
    }
    FUN_140d186f0(4,0,0x8e,s_D__a_1_s_target_release_build_bo_1413db820,0x223);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d6dde0 name=FUN_140d6dde0 */

int FUN_140d6dde0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int local_18;
  
  iVar1 = FUN_140d27a70(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_140d29660(param_3,param_4), iVar1 < 0)) {
    FUN_140d28030(param_6);
    lVar3 = FUN_140d28090(param_6);
    if ((lVar3 == 0) ||
       ((iVar1 = FUN_140d3d7f0(lVar3,param_2,param_3,param_6), iVar1 == 0 ||
        (iVar1 = FUN_140d3db10(0,lVar3,lVar3,param_4,param_5,param_6), iVar1 == 0)))) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    if (local_18 != 0) {
      uVar2 = FUN_140d29a40(lVar3);
      *param_1 = uVar2;
    }
    FUN_140d281e0(param_6);
    return local_18;
  }
  *param_1 = 0;
  return 1;
}


/* address=140d6def0 name=FUN_140d6def0 */

undefined * FUN_140d6def0(void)

{
  return &DAT_141410870;
}


/* address=140d6df00 name=FUN_140d6df00 */

undefined * FUN_140d6df00(void)

{
  return &DAT_141410888;
}


/* address=140d6df10 name=FUN_140d6df10 */

void FUN_140d6df10(undefined8 *param_1)

{
  *param_1 = &DAT_14104c6b0;
  *(undefined4 *)(param_1 + 1) = 0x11;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  return;
}


/* address=140d6df80 name=FUN_140d6df80 */

void FUN_140d6df80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d6df00();
  FUN_140d89380(uVar1,&LAB_140d6df60);
  FUN_140d6def0();
  return;
}


/* address=140d6dfb0 name=FUN_140d6dfb0 */

undefined8 FUN_140d6dfb0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*param_1 == 0) {
    lVar3 = FUN_140d276f0(param_2);
    if ((lVar3 != 0) && (iVar1 = FUN_140d2f8b0(lVar3,(longlong)param_3), iVar1 != 0)) {
      *param_1 = lVar3;
      return 1;
    }
    FUN_140d27660(lVar3);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d6e030 name=FUN_140d6e030 */

undefined4 FUN_140d6e030(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_40;
  
  FUN_140d893e0(param_1 + 0x58);
  uVar1 = *(uint *)(param_1 + 0xb8);
  FUN_140d89420(param_1 + 0x58);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  local_40 = 0;
  FUN_140d89400(param_1 + 0x58);
  if ((*(uint *)(param_1 + 0xb8) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      uVar5 = FUN_140d2d450(*(undefined8 *)(param_1 + 8),param_2);
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      if (*(longlong *)(param_1 + 0x60) == 0) goto LAB_140d6e4d3;
    }
    if ((*(longlong *)(param_1 + 0x18) == 0) ||
       (iVar4 = FUN_140d6dfb0(param_1 + 0x78,*(undefined8 *)(param_1 + 0x18),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x20)), iVar4 != 0)) {
      if ((*(longlong *)(param_1 + 0x10) != 0) &&
         ((*(longlong *)(param_1 + 0x20) != 0 && (*(longlong *)(param_1 + 0x28) != 0)))) {
        if (*(longlong *)(param_1 + 0x68) == 0) {
          uVar5 = FUN_140d2d4b0(*(undefined8 *)(param_1 + 0x20),param_2);
          *(undefined8 *)(param_1 + 0x68) = uVar5;
          if (*(longlong *)(param_1 + 0x68) == 0) goto LAB_140d6e4d3;
        }
        lVar7 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          uVar5 = FUN_140d2d4b0(*(undefined8 *)(param_1 + 0x28),param_2);
          *(undefined8 *)(param_1 + 0x70) = uVar5;
          if (*(longlong *)(param_1 + 0x70) == 0) goto LAB_140d6e4d3;
        }
        lVar2 = *(longlong *)(param_1 + 0x70);
        if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
          if (*(longlong *)(param_1 + 0x40) == 0) {
            lVar6 = FUN_140d275e0();
            if ((lVar6 == 0) ||
               (iVar4 = FUN_140d3f310(lVar6,*(undefined8 *)(param_1 + 0x28),
                                      *(undefined8 *)(param_1 + 0x20),param_2,
                                      *(undefined8 *)(param_1 + 0x68)), iVar4 == 0)) {
              FUN_140d27660(lVar6);
              goto LAB_140d6e4d3;
            }
            *(longlong *)(param_1 + 0x40) = lVar6;
          }
          iVar4 = FUN_140d6dfb0(param_1 + 0x80,*(undefined8 *)(param_1 + 0x30),
                                *(undefined4 *)(lVar7 + 0x20));
          if ((iVar4 == 0) ||
             (iVar4 = FUN_140d6dfb0(param_1 + 0x88,*(undefined8 *)(param_1 + 0x38),
                                    *(undefined4 *)(lVar2 + 0x20)), iVar4 == 0)) goto LAB_140d6e4d3;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            lVar7 = FUN_140d275e0();
            iVar4 = FUN_140d29660(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
            if (iVar4 < 0) {
              if (((lVar7 == 0) ||
                  (iVar4 = FUN_140d3f310(lVar7,*(undefined8 *)(param_1 + 0x20),
                                         *(undefined8 *)(param_1 + 0x28),param_2,
                                         *(undefined8 *)(param_1 + 0x70)), iVar4 == 0)) ||
                 (iVar4 = FUN_140d2d670(lVar7,lVar7,*(undefined8 *)(param_1 + 0x70),param_2),
                 iVar4 == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
            }
            else if ((lVar7 == 0) ||
                    (iVar4 = FUN_140d2d670(lVar7,*(undefined8 *)(param_1 + 0x40),
                                           *(undefined8 *)(param_1 + 0x68),param_2), iVar4 == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) {
              FUN_140d27660(lVar7);
              goto LAB_140d6e4d3;
            }
            *(longlong *)(param_1 + 0x90) = lVar7;
          }
        }
      }
      *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 1;
      local_40 = 1;
    }
  }
  else {
    local_40 = 1;
  }
LAB_140d6e4d3:
  FUN_140d89440(param_1 + 0x58);
  return local_40;
}


/* address=140d6e500 name=FUN_140d6e500 */

undefined8 FUN_140d6e500(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong local_58;
  ulonglong local_48;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_28;
  
  if (param_3 == 0) {
    FID_conflict__assert((wchar_t *)s_c_1413dcc00,(wchar_t *)s_D_1413dcb20,0x14e);
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    FID_conflict__assert((wchar_t *)s_r_1413dcd00,(wchar_t *)s_D_1413dcc20,0x14f);
  }
  local_28 = 0;
  lVar1 = FUN_140d6bc40();
  FUN_140d89400(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0xb0) != lVar1) {
    for (local_38 = 0; local_38 < *(ulonglong *)(param_1 + 0x98); local_38 = local_38 + 1) {
      if (*(char *)(*(longlong *)(param_1 + 0xa8) + local_38) != '\0') {
        FID_conflict__assert((wchar_t *)s_r_1413dce10,(wchar_t *)s_D_1413dcd30,0x15b);
      }
      FUN_140d6c600(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + local_38 * 8));
    }
    *(longlong *)(param_1 + 0xb0) = lVar1;
  }
  puVar2 = (undefined *)
           FUN_140d1d810(*(undefined8 *)(param_1 + 0xa8),0,*(undefined8 *)(param_1 + 0x98));
  if (puVar2 == (undefined *)0x0) {
    if (*(ulonglong *)(param_1 + 0x98) < 0x400) {
      local_58 = *(longlong *)(param_1 + 0x98) << 1;
      if (local_58 == 0) {
        local_58 = 1;
      }
      if (0x400 < local_58) {
        local_58 = 0x400;
      }
      if (local_58 <= *(ulonglong *)(param_1 + 0x98)) {
        FID_conflict__assert((wchar_t *)s_n_1413dcf30,(wchar_t *)s_D_1413dce50,0x17d);
      }
      lVar1 = FUN_140d76180(local_58 << 3);
      lVar3 = FUN_140d76180(local_58);
      if ((lVar1 == 0) || (lVar3 == 0)) {
LAB_140d6e9b7:
        FUN_140d762b0(lVar3);
        FUN_140d762b0(lVar1);
      }
      else {
        FUN_140d1d890(lVar1,*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0x98) << 3);
        FUN_140d1d890(lVar3,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98));
        local_48 = *(ulonglong *)(param_1 + 0x98);
LAB_140d6e819:
        if (local_48 < local_58) {
          uVar4 = FUN_140d6c510();
          *(undefined8 *)(lVar1 + local_48 * 8) = uVar4;
          if (*(longlong *)(lVar1 + local_48 * 8) != 0) goto LAB_140d6e80c;
          for (local_30 = *(ulonglong *)(param_1 + 0x98); local_30 < local_48;
              local_30 = local_30 + 1) {
            FUN_140d6c5b0(*(undefined8 *)(lVar1 + local_30 * 8));
          }
          goto LAB_140d6e9b7;
        }
        FUN_140e9a3c0(lVar3 + *(longlong *)(param_1 + 0x98),0,
                      local_58 - *(longlong *)(param_1 + 0x98));
        *(undefined *)(lVar3 + *(longlong *)(param_1 + 0x98)) = 1;
        *param_2 = *(longlong *)(param_1 + 0x98);
        if (*param_2 == 0x400) {
          FID_conflict__assert((wchar_t *)s___1413dd060,(wchar_t *)s_D_1413dcf80,0x198);
        }
        local_28 = *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x98) * 8);
        FUN_140d762b0(*(undefined8 *)(param_1 + 0xa0));
        *(longlong *)(param_1 + 0xa0) = lVar1;
        FUN_140d762b0(*(undefined8 *)(param_1 + 0xa8));
        *(longlong *)(param_1 + 0xa8) = lVar3;
        *(ulonglong *)(param_1 + 0x98) = local_58;
      }
    }
    else {
      *param_2 = 0x400;
      local_28 = FUN_140d6c510();
    }
  }
  else {
    *puVar2 = 1;
    *param_2 = (longlong)puVar2 - *(longlong *)(param_1 + 0xa8);
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + *param_2 * 8);
  }
  FUN_140d89440(param_1 + 0x58);
  return local_28;
LAB_140d6e80c:
  local_48 = local_48 + 1;
  goto LAB_140d6e819;
}


/* address=140d6e9f0 name=FUN_140d6e9f0 */

void FUN_140d6e9f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 == 0x400) {
    FUN_140d6c5b0(param_2);
  }
  else {
    FUN_140d89400(param_1 + 0x58);
    *(undefined *)(*(longlong *)(param_1 + 0xa8) + param_3) = 0;
    FUN_140d89440(param_1 + 0x58);
  }
  return;
}


/* address=140d6ea60 name=FUN_140d6ea60 */

undefined4 FUN_140d6ea60(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_58;
  longlong local_48;
  longlong local_40;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_4 == 0) {
    FID_conflict__assert((wchar_t *)s_c_1413ddb50,(wchar_t *)s_D_1413dda70,0x2ff);
  }
  if (*(longlong *)(param_3 + 8) == 0) {
    FID_conflict__assert((wchar_t *)s_r_1413ddc50,(wchar_t *)s_D_1413ddb70,0x301);
  }
  if (*(longlong *)(param_3 + 0x10) == 0) {
    FID_conflict__assert((wchar_t *)s_r_1413ddd50,(wchar_t *)s_D_1413ddc70,0x302);
  }
  if (*(longlong *)(param_3 + 0x18) == 0) {
    FID_conflict__assert((wchar_t *)s_r_1413dde50,(wchar_t *)s_D_1413ddd70,0x303);
  }
  if (*(longlong *)(param_3 + 0x20) == 0) {
    FID_conflict__assert((wchar_t *)s_r_1413ddf50,(wchar_t *)s_D_1413dde70,0x304);
  }
  if (*(longlong *)(param_3 + 0x28) == 0) {
    FID_conflict__assert((wchar_t *)s_r_1413de050,(wchar_t *)s_D_1413ddf70,0x305);
  }
  if (*(longlong *)(param_3 + 0x30) == 0) {
    FID_conflict__assert((wchar_t *)s_r_1413de150,(wchar_t *)s_D_1413de070,0x306);
  }
  if (*(longlong *)(param_3 + 0x38) == 0) {
    FID_conflict__assert((wchar_t *)s_r_1413de260,(wchar_t *)s_D_1413de180,0x307);
  }
  if (*(longlong *)(param_3 + 0x40) == 0) {
    FID_conflict__assert((wchar_t *)s_r_1413de370,(wchar_t *)s_D_1413de290,0x308);
  }
  local_58 = 0;
  FUN_140d28030(param_4);
  lVar4 = FUN_140d28090(param_4);
  lVar5 = FUN_140d28090(param_4);
  if (((lVar4 != 0) && (lVar5 != 0)) && (iVar2 = FUN_140d6e030(param_3,param_4), iVar2 != 0)) {
    local_10 = *(undefined8 *)(param_3 + 0x80);
    local_18 = *(undefined8 *)(param_3 + 0x88);
    local_48 = *(longlong *)(param_3 + 0x68);
    local_40 = *(longlong *)(param_3 + 0x70);
    iVar2 = FUN_140d29660(*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
    if (iVar2 < 0) {
      local_48 = *(longlong *)(param_3 + 0x70);
      local_40 = *(longlong *)(param_3 + 0x68);
      local_10 = *(undefined8 *)(param_3 + 0x88);
      local_18 = *(undefined8 *)(param_3 + 0x80);
    }
    lVar1 = *(longlong *)(param_3 + 0x60);
    lVar6 = lVar1 + 0x18;
    lVar7 = local_48 + 0x18;
    lVar8 = local_40 + 0x18;
    iVar2 = FUN_140d29780(param_2,lVar6);
    if (-1 < iVar2) {
      FID_conflict__assert((wchar_t *)s_B_1413de480,(wchar_t *)s_D_1413de3a0,0x32d);
    }
    iVar2 = FUN_140d6efa0(lVar4,param_2,lVar8,local_40,lVar7,param_4);
    if (((((iVar2 != 0) &&
          (iVar2 = FUN_140d2e1d0(lVar5,lVar4,local_18,lVar8,param_4,local_40), iVar2 != 0)) &&
         ((iVar2 = FUN_140d6efa0(lVar4,param_2,lVar7,local_48,lVar8,param_4), iVar2 != 0 &&
          ((iVar2 = FUN_140d2e1d0(param_1,lVar4,local_10,lVar7,param_4,local_48), iVar2 != 0 &&
           (iVar2 = FUN_140d3e490(param_1,param_1,lVar5,lVar7,param_4), iVar2 != 0)))))) &&
        (iVar2 = FUN_140d2d750(param_1,param_1,*(undefined8 *)(param_3 + 0x90),local_48,param_4),
        iVar2 != 0)) &&
       ((iVar2 = FUN_140d3d7f0(param_1,param_1,lVar8,param_4), iVar2 != 0 &&
        (iVar2 = FUN_140d3d340(param_1,param_1,lVar5), iVar2 != 0)))) {
      iVar2 = FUN_140d29660(param_1,lVar6);
      if (-1 < iVar2) {
        FID_conflict__assert((wchar_t *)s_B_1413de590,(wchar_t *)s_D_1413de4b0,0x34b);
      }
      uVar3 = FUN_140d278e0(lVar6);
      FUN_140d2fcb0(param_1,uVar3);
      iVar2 = FUN_140d2f8b0(param_1,(longlong)*(int *)(lVar1 + 0x20));
      if (iVar2 != 0) {
        local_58 = 1;
      }
    }
  }
  FUN_140d281e0(param_4);
  return local_58;
}


/* address=140d6efa0 name=FUN_140d6efa0 */

undefined8
FUN_140d6efa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_140d3c890(param_5,param_4);
  if (iVar1 == 0) {
    FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413dda00,0x2e8);
  }
  else {
    iVar1 = FUN_140d2d6c0(param_1,param_2,param_4,param_6);
    if ((iVar1 != 0) && (iVar1 = FUN_140d2d670(param_1,param_1,param_4,param_6), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}


/* address=140d6f040 name=FUN_140d6f040 */

bool FUN_140d6f040(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_140d275e0();
    *param_1 = lVar1;
  }
  return *param_1 != 0;
}


/* address=140d6f090 name=FUN_140d6f090 */

undefined4
FUN_140d6f090(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int local_38;
  int local_30;
  undefined4 local_2c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((param_2 < 0x80) || (uVar4 = param_2 >> 0x1f & 0x3f, (param_2 + uVar4 & 0x3f) != uVar4)) {
    FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413de5c0,0x3ac);
    local_2c = 0;
  }
  else {
    iVar1 = FUN_140d29b50(param_6);
    if (iVar1 == 0) {
      FID_conflict__assert((wchar_t *)s_B_1413de710,(wchar_t *)s_D_1413de630,0x3af);
    }
    iVar1 = FUN_140d2a2b0(param_6,param_2 + -100);
    if (iVar1 == 0) {
      FID_conflict__assert((wchar_t *)s_B_1413de830,(wchar_t *)s_D_1413de750,0x3b0);
    }
    if (param_2 < 0x3ffffff) {
      iVar1 = FUN_140d29a90(param_3,3);
      if (iVar1 == 0) {
        local_30 = param_2 * 5;
      }
      else {
        local_30 = param_2 << 3;
      }
      local_10 = local_30;
      local_2c = 0;
      local_38 = 0;
      FUN_140d28030(param_7);
      lVar2 = FUN_140d28090(param_7);
      if (lVar2 != 0) {
LAB_140d6f1f7:
        do {
          do {
            iVar1 = FUN_140d2ba80(param_1,param_2,0,1);
            if ((iVar1 == 0) || (iVar1 = FUN_140d2c020(param_8,0), iVar1 == 0)) goto LAB_140d6f3ad;
            if (param_4 != 0) {
              iVar1 = FUN_140d3d670(lVar2,param_1,param_4,param_7);
              if (iVar1 == 0) goto LAB_140d6f3ad;
              iVar1 = FUN_140d29660(lVar2,param_6);
              if (iVar1 < 1) goto LAB_140d6f1f7;
            }
            iVar1 = FUN_140d29660(param_1,param_5);
          } while (iVar1 < 1);
          iVar1 = FUN_140d3ca30(param_1);
          if (iVar1 == 0) {
            uVar3 = FUN_140d27850();
            iVar1 = FUN_140d28510(lVar2,param_1,uVar3);
            if ((iVar1 == 0) || (iVar1 = FUN_140d3e000(&local_18,lVar2,param_3,param_7), iVar1 == 0)
               ) break;
            if (local_18 != 0) {
              iVar1 = FUN_140d2c890(&local_14,param_1,0,param_7,0,param_8);
              if (iVar1 == 0) break;
              if (local_14 != 0) {
                local_2c = 1;
                break;
              }
            }
          }
          local_38 = local_38 + 1;
          if (local_10 <= local_38) {
            FUN_140d186f0(4,0,0x8d,s_D__a_1_s_target_release_build_bo_1413de900,0x416);
            break;
          }
          iVar1 = FUN_140d2c020(param_8,2);
        } while (iVar1 != 0);
      }
LAB_140d6f3ad:
      FUN_140d281e0(param_7);
    }
    else {
      FUN_140d186f0(4,0,0x80,s_D__a_1_s_target_release_build_bo_1413de890,0x3d1);
      local_2c = 0;
    }
  }
  return local_2c;
}


/* address=140d6f3d0 name=FUN_140d6f3d0 */

int FUN_140d6f3d0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar15;
  int iVar16;
  undefined local_18 [8];
  undefined8 local_10;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  param_2 = param_2 & 0xffffff80;
  if ((int)param_2 < 0x100) {
    FUN_140d186f0(4,0,0x7e,s_D__a_1_s_target_release_build_bo_1413de970,0x435);
    return 0;
  }
  uVar1 = FUN_140d27880(param_3);
  if (0x20 < uVar1) {
    FUN_140d186f0(4,0,0x65,s_D__a_1_s_target_release_build_bo_1413de9e0,CONCAT44(uVar15,0x440));
    return 0;
  }
  iVar16 = 0;
  iVar2 = (int)param_2 / 2;
  lVar6 = FUN_140d27f30();
  if (lVar6 != 0) {
    FUN_140d28030(lVar6);
    lVar7 = FUN_140d28090(lVar6);
    lVar8 = FUN_140d28090(lVar6);
    lVar9 = FUN_140d28090(lVar6);
    lVar10 = FUN_140d28090(lVar6);
    lVar11 = FUN_140d28090(lVar6);
    lVar12 = FUN_140d28090(lVar6);
    if (((((lVar7 != 0) && (lVar8 != 0)) && (lVar9 != 0)) && ((lVar10 != 0 && (lVar11 != 0)))) &&
       ((((lVar12 != 0 &&
          ((iVar3 = FUN_140d2a0e0(lVar11,iVar2 + -100), iVar3 != 0 &&
           (iVar3 = FUN_140d2a0e0(lVar12,iVar2), iVar3 != 0)))) &&
         (iVar3 = FUN_140d6f040(param_1 + 8), iVar3 != 0)) &&
        ((((iVar3 = FUN_140d6f040(param_1 + 0x18), iVar3 != 0 &&
           (iVar3 = FUN_140d6f040(param_1 + 0x10), iVar3 != 0)) &&
          (iVar3 = FUN_140d6f040(param_1 + 0x20), iVar3 != 0)) &&
         (((iVar3 = FUN_140d6f040(param_1 + 0x28), iVar3 != 0 &&
           (iVar3 = FUN_140d6f040(param_1 + 0x30), iVar3 != 0)) &&
          ((iVar3 = FUN_140d6f040(param_1 + 0x38), iVar3 != 0 &&
           ((lVar13 = FUN_140d27750(*(undefined8 *)(param_1 + 0x10),param_3), lVar13 != 0 &&
            (iVar3 = FUN_140d2fa10(lVar10,&DAT_14104c070,DAT_14104c170), iVar3 != 0)))))))))))) {
      iVar3 = (int)DAT_14104c170;
      iVar4 = iVar3 * 0x40;
      iVar5 = FUN_140d27880(lVar10);
      if (iVar4 != iVar5) {
        FID_conflict__assert((wchar_t *)s_s_1413deb30,(wchar_t *)s_D_1413dea50,0x46c);
      }
      if (iVar2 < iVar4) {
        iVar3 = FUN_140d29f90(lVar10,lVar10,iVar4 - iVar2);
joined_r0x000140d6f706:
        if (iVar3 == 0) goto LAB_140d6faf0;
      }
      else if (iVar4 < iVar2) {
        iVar4 = FUN_140d28370(lVar10,1);
        if (iVar4 == 0) goto LAB_140d6faf0;
        iVar3 = FUN_140d29c10(lVar10,lVar10,iVar2 + iVar3 * -0x40);
        goto joined_r0x000140d6f706;
      }
      iVar3 = FUN_140d27880(lVar10);
      if (iVar2 != iVar3) {
        FID_conflict__assert((wchar_t *)s_p_1413dec60,(wchar_t *)s_D_1413deb80,0x47b);
      }
      do {
        lVar13 = lVar10;
        iVar3 = FUN_140d6f090(*(undefined8 *)(param_1 + 0x20),iVar2,*(undefined8 *)(param_1 + 0x10),
                              0,lVar10,lVar11,lVar6,param_4);
        uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        if ((iVar3 == 0) || (iVar3 = FUN_140d2c020(param_4,3,0), iVar3 == 0)) goto LAB_140d6faf0;
        lVar13 = lVar10;
        iVar3 = FUN_140d6f090(*(undefined8 *)(param_1 + 0x28),iVar2,*(undefined8 *)(param_1 + 0x10),
                              *(undefined8 *)(param_1 + 0x20),lVar10,lVar11,lVar6,param_4);
        uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        if ((iVar3 == 0) || (iVar3 = FUN_140d2c020(param_4,3,1), iVar3 == 0)) goto LAB_140d6faf0;
        iVar3 = FUN_140d29660(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
        if (iVar3 < 0) {
          local_10 = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
          *(undefined8 *)(param_1 + 0x28) = local_10;
        }
        uVar14 = FUN_140d27850();
        iVar3 = FUN_140d3d4b0(lVar8,*(undefined8 *)(param_1 + 0x20),uVar14);
        if (iVar3 == 0) goto LAB_140d6faf0;
        uVar14 = FUN_140d27850();
        iVar3 = FUN_140d3d4b0(lVar9,*(undefined8 *)(param_1 + 0x28),uVar14);
        if ((iVar3 == 0) || (iVar3 = FUN_140d3e140(lVar7,lVar8,lVar9,lVar6), iVar3 == 0))
        goto LAB_140d6faf0;
        lVar13 = lVar6;
        iVar3 = FUN_140d3e6c0(*(undefined8 *)(param_1 + 0x18),local_18,
                              *(undefined8 *)(param_1 + 0x10),lVar7,lVar6);
        uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        if (iVar3 == 0) goto LAB_140d6faf0;
        iVar3 = FUN_140d29660(*(undefined8 *)(param_1 + 0x18),lVar12);
      } while (iVar3 < 1);
      iVar3 = FUN_140d27880(lVar8);
      if (iVar3 != iVar2) {
        FID_conflict__assert((wchar_t *)s_B_1413ded90,(wchar_t *)s_D_1413decb0,0x4a5);
      }
      iVar3 = FUN_140d27880(lVar9);
      if (iVar3 != iVar2) {
        FID_conflict__assert((wchar_t *)s_B_1413deed0,(wchar_t *)s_D_1413dedf0,0x4a6);
      }
      iVar3 = FUN_140d3d7f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),
                            *(undefined8 *)(param_1 + 0x28),lVar6);
      if (iVar3 != 0) {
        uVar14 = CONCAT44(uVar15,iVar2);
        iVar3 = FUN_140d3db10(0,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18),
                              lVar8,uVar14,lVar6);
        uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
        if (iVar3 != 0) {
          uVar14 = CONCAT44(uVar15,iVar2);
          iVar2 = FUN_140d3db10(0,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x18),
                                lVar9,uVar14,lVar6);
          uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
          if (iVar2 != 0) {
            FUN_140d2f6f0(*(undefined8 *)(param_1 + 8));
            uVar1 = FUN_140d27880(*(undefined8 *)(param_1 + 8));
            if (uVar1 != param_2) {
              FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413def30,
                            CONCAT44(uVar15,0x4b4));
              goto LAB_140d6fb19;
            }
            iVar2 = FUN_140d6e030(param_1,lVar6);
            if (iVar2 != 0) {
              iVar2 = FUN_140d53690(param_1);
              if (iVar2 == 0) {
                FUN_140d186f0(4,0,0x7c,s_D__a_1_s_target_release_build_bo_1413defa0,
                              CONCAT44(uVar15,0x4c2));
                goto LAB_140d6fb19;
              }
              iVar16 = 1;
            }
          }
        }
      }
    }
  }
LAB_140d6faf0:
  if (iVar16 == 0) {
    FUN_140d186f0(4,0,3,s_D__a_1_s_target_release_build_bo_1413df010,CONCAT44(uVar15,0x4ca));
  }
LAB_140d6fb19:
  if (lVar6 != 0) {
    FUN_140d281e0(lVar6);
    FUN_140d27fa0(lVar6);
  }
  return iVar16;
}


/* address=140d6fb50 name=FUN_140d6fb50 */

void FUN_140d6fb50(undefined8 *param_1,undefined8 *param_2)

{
  FUN_140d27660(*param_1);
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}


/* address=140d6fba0 name=FUN_140d6fba0 */

void FUN_140d6fba0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_140d2d560(*param_1);
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}


/* address=140d6fbf0 name=FUN_140d6fbf0 */

undefined4
FUN_140d6fbf0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 local_20;
  longlong local_18;
  
  FUN_140d1dbf0();
  local_20 = 0;
  local_28 = 0;
  while( true ) {
    FUN_140d18390();
    local_18 = FUN_140d528f0();
    if (local_18 == 0) goto LAB_140d6fea5;
    iVar1 = FUN_140d6f3d0(local_18,param_2,param_3,param_4);
    if (iVar1 != 0) break;
    uVar2 = FUN_140d17dc0();
    FUN_140d52a50(local_18);
    local_18 = 0;
    local_28 = local_28 + 1;
    if (((3 < local_28) || (iVar1 = FUN_140d2f660(uVar2), iVar1 != 4)) ||
       (iVar1 = FUN_140d2f680(uVar2), iVar1 != 0x8d)) break;
  }
  if ((local_18 != 0) && ((param_5 == 0 || (iVar1 = FUN_140d53d50(local_18), iVar1 != 0)))) {
    FUN_140d6d030(param_1);
    FUN_140d6fb50(param_1 + 8,local_18 + 8);
    FUN_140d6fb50(param_1 + 0x10,local_18 + 0x10);
    FUN_140d6fb50(param_1 + 0x18,local_18 + 0x18);
    FUN_140d6fb50(param_1 + 0x20,local_18 + 0x20);
    FUN_140d6fb50(param_1 + 0x28,local_18 + 0x28);
    FUN_140d6fb50(param_1 + 0x30,local_18 + 0x30);
    FUN_140d6fb50(param_1 + 0x38,local_18 + 0x38);
    FUN_140d6fb50(param_1 + 0x40,local_18 + 0x40);
    FUN_140d6fba0(param_1 + 0x60,local_18 + 0x60);
    FUN_140d6fba0(param_1 + 0x68,local_18 + 0x68);
    FUN_140d6fba0(param_1 + 0x70,local_18 + 0x70);
    FUN_140d6fb50(param_1 + 0x78,local_18 + 0x78);
    FUN_140d6fb50(param_1 + 0x80,local_18 + 0x80);
    FUN_140d6fb50(param_1 + 0x88,local_18 + 0x88);
    FUN_140d6fb50(param_1 + 0x90,local_18 + 0x90);
    *(uint *)(param_1 + 0xb8) =
         *(uint *)(param_1 + 0xb8) & 0xfffffffe | *(uint *)(local_18 + 0xb8) & 1;
    local_20 = 1;
  }
LAB_140d6fea5:
  FUN_140d52a50(local_18);
  return local_20;
}


/* address=140d6fec0 name=FUN_140d6fec0 */

undefined * FUN_140d6fec0(void)

{
  return &DAT_141410890;
}


/* address=140d6fed0 name=FUN_140d6fed0 */

undefined * FUN_140d6fed0(void)

{
  return &DAT_1414108e0;
}


/* address=140d6fee0 name=FUN_140d6fee0 */

void FUN_140d6fee0(longlong param_1)

{
  FUN_140d1d930(param_1,0,0x50);
  *(undefined *)(param_1 + 4) = 1;
  return;
}


/* address=140d6ff30 name=FUN_140d6ff30 */

int FUN_140d6ff30(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                 ulonglong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong local_res8;
  longlong local_res20;
  int iVar5;
  
  if (param_3 == 0) {
    return 1;
  }
  FUN_140d1d930(param_2,0,param_3);
  FUN_140d272d0();
  iVar5 = 0;
  lVar2 = FUN_140d1c130();
  local_res8 = param_1;
  local_res20 = param_4;
  if (param_1 == lVar2) {
    uVar4 = param_5 - param_5 / 2;
    uVar3 = FUN_140d1bfe0(uVar4,param_5 % 2);
    iVar1 = FUN_140d705c0(param_2,param_3,uVar3,param_4,uVar4,param_6,param_7,param_8,param_9,
                          param_10,param_11);
    if (iVar1 == 0) goto LAB_140d70116;
    local_res20 = param_4 + (param_5 - uVar4);
    local_res8 = FUN_140d1c010();
    param_5 = uVar4;
  }
  iVar5 = FUN_140d705c0(param_2,param_3,local_res8,local_res20,param_5,param_6,param_7,param_8,
                        param_9,param_10,param_11);
LAB_140d70116:
  FUN_140d272e0();
  if (iVar5 != 0) {
    FUN_140d27370(param_1);
  }
  return iVar5;
}


/* address=140d70140 name=FUN_140d70140 */

undefined4
FUN_140d70140(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
             longlong param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70 [48];
  undefined local_40 [64];
  
  local_80 = 0;
  FUN_140d73a50(local_70);
  iVar1 = FUN_140d73a80(local_70,param_7 + 10 + param_9);
  if (((((iVar1 != 0) && (iVar1 = FUN_140d744b0(local_70,param_2 & 0xffff), iVar1 != 0)) &&
       (iVar1 = FUN_140d74140(local_70,local_40), iVar1 != 0)) &&
      ((iVar1 = FUN_140d74290(local_40,"tls13 ",6), iVar1 != 0 &&
       (iVar1 = FUN_140d74290(local_40,param_6,param_7), iVar1 != 0)))) &&
     ((iVar1 = FUN_140d74140(local_70,local_40), iVar1 != 0 &&
      ((iVar1 = FUN_140d74290(local_40,param_8,param_9), iVar1 != 0 &&
       (iVar1 = FUN_140d73bb0(local_70,&local_80,&local_78), iVar1 != 0)))))) {
    uVar2 = FUN_140d69750(param_1,param_2,param_3,param_4,param_5,local_80,local_78);
    FUN_140d762b0(local_80);
    return uVar2;
  }
  FUN_140d73b40(local_70);
  return 0;
}


/* address=140d702d0 name=FUN_140d702d0 */

undefined8 FUN_140d702d0(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong local_res8;
  ulonglong local_18;
  
  FUN_140d69c50(FUN_140cb7a80,param_3,param_3 + 0x28,0x40,param_3 + 0x68,
                *(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x20),1);
  if (param_2 < 0x21) {
    if (param_2 % 4 != 0) {
      FID_conflict__assert((wchar_t *)s_m_1413df1d8,(wchar_t *)s_D_1413df100,0x94);
    }
    local_res8 = param_1;
    for (local_18 = 0; local_18 < param_2 / 4; local_18 = local_18 + 1) {
      FUN_140d1da10(local_res8,*(undefined4 *)(param_3 + local_18 * 4));
      local_res8 = local_res8 + 4;
    }
    FUN_140d272c0();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d703f0 name=FUN_140d703f0 */

undefined8 FUN_140d703f0(longlong param_1,ulonglong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  ulonglong local_28;
  ulonglong local_18;
  
  lVar2 = param_3 + 0x50;
  uVar1 = *(uint *)(param_3 + 0xd0);
  *(undefined *)(lVar2 + (ulonglong)uVar1) = 0x80;
  local_28 = (ulonglong)uVar1 + 1;
  if (0x70 < local_28) {
    FUN_140d1d930(lVar2 + local_28,0,0x80 - local_28);
    local_28 = 0;
    FUN_140cbb080(param_3,lVar2,1);
  }
  FUN_140d1d930(lVar2 + local_28,0,0x70 - local_28);
  FUN_140d1daf0(param_3 + 0xc0,*(undefined8 *)(param_3 + 0x48));
  FUN_140d1daf0(param_3 + 200,*(undefined8 *)(param_3 + 0x40));
  FUN_140cbb080(param_3,lVar2,1);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_2 % 8 != 0) {
      FID_conflict__assert((wchar_t *)s_m_1413df668,(wchar_t *)s_D_1413df590,0x10f);
    }
    local_res8 = param_1;
    for (local_18 = 0; local_18 < param_2 / 8; local_18 = local_18 + 1) {
      FUN_140d1daf0(local_res8,*(undefined8 *)(param_3 + local_18 * 8));
      local_res8 = local_res8 + 8;
    }
    FUN_140d272c0();
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140d705c0 name=FUN_140d705c0 */

void FUN_140d705c0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined auStack_248 [32];
  undefined8 local_228;
  ulonglong local_218;
  ulonglong local_210;
  undefined4 local_208;
  undefined4 local_204;
  uint local_200 [2];
  ulonglong local_1f8;
  undefined local_1e8 [112];
  undefined local_178 [112];
  undefined local_108 [112];
  undefined local_98 [64];
  byte local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_248;
  local_204 = 0;
  local_1f8 = FUN_140d1c8f0(param_3);
  FUN_140d1cc10(local_1e8);
  FUN_140d1cc10(local_108);
  FUN_140d1cc10(local_178);
  local_228 = 0;
  iVar1 = FUN_140d1cdb0(local_178,param_4,param_5,param_3);
  if ((((iVar1 != 0) && (iVar1 = FUN_140d1d2c0(local_1e8,local_178), iVar1 != 0)) &&
      (iVar1 = FUN_140d1d110(local_1e8,param_6,param_7), iVar1 != 0)) &&
     ((iVar1 = FUN_140d1d110(local_1e8,param_8,param_9), iVar1 != 0 &&
      (iVar1 = FUN_140d1d110(local_1e8,param_10,param_11), iVar1 != 0)))) {
    iVar1 = FUN_140d1d150(local_1e8,local_98,&local_208);
    while( true ) {
      if ((((iVar1 == 0) || (iVar1 = FUN_140d1d2c0(local_1e8,local_178), iVar1 == 0)) ||
          ((iVar1 = FUN_140d1d110(local_1e8,local_98,local_208), iVar1 == 0 ||
           ((((local_1f8 < param_2 && (iVar1 = FUN_140d1d2c0(local_108,local_1e8), iVar1 == 0)) ||
             (iVar1 = FUN_140d1d110(local_1e8,param_6,param_7), iVar1 == 0)) ||
            ((iVar1 = FUN_140d1d110(local_1e8,param_8,param_9), iVar1 == 0 ||
             (iVar1 = FUN_140d1d110(local_1e8,param_10,param_11), iVar1 == 0)))))))) ||
         (iVar1 = FUN_140d1d150(local_1e8,local_58,local_200), iVar1 == 0)) goto LAB_140d708e9;
      local_210 = (ulonglong)local_200[0];
      if (local_210 != local_1f8) {
        FID_conflict__assert((wchar_t *)s_l_1413df760,(wchar_t *)s_D_1413df690,0x6d);
      }
      if (param_2 < local_210) {
        local_210 = param_2;
      }
      for (local_218 = 0; local_218 < local_210; local_218 = local_218 + 1) {
        *(byte *)(param_1 + local_218) = *(byte *)(param_1 + local_218) ^ local_58[local_218];
      }
      param_1 = param_1 + local_210;
      param_2 = param_2 - local_210;
      if (param_2 == 0) break;
      iVar1 = FUN_140d1d150(local_108,local_98,&local_208);
    }
    local_204 = 1;
  }
LAB_140d708e9:
  FUN_140d76450(local_98,0x40);
  FUN_140d1ccb0(local_1e8);
  FUN_140d1ccb0(local_108);
  FUN_140d1ccb0(local_178);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_248);
  return;
}


/* address=140d70940 name=FUN_140d70940 */

undefined4 * FUN_140d70940(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140d76180(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_140d716b0(puVar1,0,0x18);
    puVar1[1] = 0;
    *puVar1 = 1;
  }
  return puVar1;
}


/* address=140d709a0 name=FUN_140d709a0 */

void FUN_140d709a0(longlong param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_140d89300(param_1), iVar1 != 0)) {
    FUN_140d716f0(param_1);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140d709f0 name=FUN_140d709f0 */

undefined8 FUN_140d709f0(undefined8 param_1)

{
  FUN_140d892b0(param_1);
  return 1;
}


/* address=140d70a20 name=FUN_140d70a20 */

undefined8 FUN_140d70a20(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x70))(param_1);
  }
  return uVar1;
}


/* address=140d70a70 name=FUN_140d70a70 */

ulonglong FUN_140d70a70(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x98) != 0) &&
         (uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x98))(param_1,param_2),
         (int)uVar1 < 1)) {
        return (ulonglong)uVar1;
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28) != 0) {
        uVar2 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x28))(param_1,param_2);
        return uVar2;
      }
    }
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* address=140d70c60 name=FUN_140d70c60 */

undefined8 FUN_140d70c60(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x88))(param_1);
  }
  return uVar1;
}


/* address=140d70cb0 name=FUN_140d70cb0 */

undefined8 FUN_140d70cb0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x78))(param_1);
  }
  return uVar1;
}


/* address=140d70d60 name=FUN_140d70d60 */

undefined4 FUN_140d70d60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* address=140d70dc0 name=FUN_140d70dc0 */

bool FUN_140d70dc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140d70e00(param_1,param_2);
  if (iVar1 != 0) {
    FUN_140d52b80(param_2);
  }
  return iVar1 != 0;
}


/* address=140d70e00 name=FUN_140d70e00 */

void FUN_140d70e00(undefined8 param_1,undefined8 param_2)

{
  FUN_140d710c0(param_1,6,param_2);
  return;
}


/* address=140d70e30 name=FUN_140d70e30 */

undefined8 FUN_140d70e30(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 6) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    FUN_140d186f0(6,0,0x6b,s_D__a_1_s_target_release_build_bo_1413df8a0,0xfe);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d70e80 name=FUN_140d70e80 */

longlong FUN_140d70e80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140d70e30(param_1);
  if (lVar1 != 0) {
    FUN_140d52b80(lVar1);
  }
  return lVar1;
}


/* address=140d70ec0 name=FUN_140d70ec0 */

bool FUN_140d70ec0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140d70f00(param_1,param_2);
  if (iVar1 != 0) {
    FUN_140dd7d00(param_2);
  }
  return iVar1 != 0;
}


/* address=140d70f00 name=FUN_140d70f00 */

void FUN_140d70f00(undefined8 param_1,undefined8 param_2)

{
  FUN_140d710c0(param_1,0x74,param_2);
  return;
}


/* address=140d70f30 name=FUN_140d70f30 */

undefined8 FUN_140d70f30(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x74) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    FUN_140d186f0(6,0,0x6c,s_D__a_1_s_target_release_build_bo_1413df900,0x11a);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d70f80 name=FUN_140d70f80 */

longlong FUN_140d70f80(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140d70f30(param_1);
  if (lVar1 != 0) {
    FUN_140dd7d00(lVar1);
  }
  return lVar1;
}


/* address=140d70fc0 name=FUN_140d70fc0 */

bool FUN_140d70fc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140d71000(param_1,param_2);
  if (iVar1 != 0) {
    FUN_140d57560(param_2);
  }
  return iVar1 != 0;
}


/* address=140d71000 name=FUN_140d71000 */

void FUN_140d71000(undefined8 param_1,undefined8 param_2)

{
  FUN_140d710c0(param_1,0x198,param_2);
  return;
}


/* address=140d71030 name=FUN_140d71030 */

undefined8 FUN_140d71030(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x198) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    FUN_140d186f0(6,0,0x6a,s_D__a_1_s_target_release_build_bo_1413df960,0x136);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d71080 name=FUN_140d71080 */

longlong FUN_140d71080(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140d71030(param_1);
  if (lVar1 != 0) {
    FUN_140d57560(lVar1);
  }
  return lVar1;
}


/* address=140d710c0 name=FUN_140d710c0 */

bool FUN_140d710c0(longlong param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d71120(param_1,param_2);
  if (iVar1 != 0) {
    *(longlong *)(param_1 + 8) = param_3;
  }
  return iVar1 != 0 && param_3 != 0;
}


/* address=140d71120 name=FUN_140d71120 */

undefined8 FUN_140d71120(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_140d716f0(param_1);
  }
  lVar1 = FUN_140d71750(param_2);
  if (lVar1 == 0) {
    FUN_140d186f0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413df9c0,0x158);
    FUN_140d18860(s_algorithm__d_1413dfa20,param_2);
    uVar2 = 0;
  }
  else {
    if (param_1 != 0) {
      *(longlong *)(param_1 + 0x10) = lVar1;
      *(undefined4 *)(param_1 + 4) = **(undefined4 **)(param_1 + 0x10);
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d711d0 name=FUN_140d711d0 */

undefined8 FUN_140d711d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    if ((*(longlong *)(param_1 + 0x10) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x98) == 0)) {
      uVar1 = 0xfffffffe;
    }
    else {
      uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x98))(param_1,param_2);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* address=140d71490 name=FUN_140d71490 */

void FUN_140d71490(undefined8 param_1,undefined8 param_2)

{
  FUN_140e05180(param_1,0xffffffff,0x38,1,0,param_2);
  return;
}


/* address=140d714e0 name=FUN_140d714e0 */

void FUN_140d714e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e05180(param_1,0xffffffff,0x38,2,0,param_2);
  return;
}


/* address=140d716b0 name=FUN_140d716b0 */

undefined8 FUN_140d716b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d716f0 name=FUN_140d716f0 */

void FUN_140d716f0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0xa0))(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* address=140d71750 name=FUN_140d71750 */

undefined * FUN_140d71750(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 6) {
    puVar1 = &DAT_1410bef90;
  }
  else if (param_1 == 0x74) {
    puVar1 = &DAT_1410bee30;
  }
  else if (param_1 == 0x198) {
    puVar1 = &DAT_1410beee0;
  }
  else if (param_1 == 0x3b4) {
    puVar1 = &DAT_1410bf0f0;
  }
  else if (param_1 == 0x3b5) {
    puVar1 = &DAT_1410bf040;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


/* address=140d717c0 name=FUN_140d717c0 */

void FUN_140d717c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* address=140d71800 name=FUN_140d71800 */

void FUN_140d71800(undefined8 param_1,undefined8 param_2)

{
  undefined local_18 [24];
  
  FUN_140d72e00(param_1,local_18,param_2);
  return;
}


/* address=140d71830 name=FUN_140d71830 */

undefined8 FUN_140d71830(undefined8 *param_1)

{
  return *param_1;
}


/* address=140d71850 name=FUN_140d71850 */

undefined8 FUN_140d71850(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=140d71870 name=FUN_140d71870 */

undefined8 FUN_140d71870(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_140d762b0(*param_2);
  *param_2 = 0;
  *param_3 = 0;
  if (param_1[1] == 0) {
    uVar1 = 1;
  }
  else {
    lVar2 = FUN_140d76c50(*param_1,param_1[1]);
    *param_2 = lVar2;
    if (*param_2 == 0) {
      uVar1 = 0;
    }
    else {
      *param_3 = param_1[1];
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=140d71910 name=FUN_140d71910 */

bool FUN_140d71910(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 != 0) {
    FUN_140d762b0(*param_2);
  }
  lVar1 = FUN_140d76b90(*param_1,param_1[1]);
  *param_2 = lVar1;
  return *param_2 != 0;
}


/* address=140d71990 name=FUN_140d71990 */

bool FUN_140d71990(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140d72d70(*param_1,0,param_1[1]);
  return lVar1 != 0;
}


/* address=140d719e0 name=FUN_140d719e0 */

bool FUN_140d719e0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_3 == param_1[1]) {
    iVar1 = FUN_140d76480(*param_1,param_2,param_3);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* address=140d71a50 name=FUN_140d71a50 */

bool FUN_140d71a50(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined *local_18 [3];
  
  iVar1 = FUN_140d72e00(param_1,local_18,1);
  if (iVar1 != 0) {
    *param_2 = *local_18[0];
  }
  return iVar1 != 0;
}


/* address=140d71aa0 name=FUN_140d71aa0 */

bool FUN_140d71aa0(undefined8 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 local_18 [12];
  
  iVar1 = FUN_140d72e70(param_1,local_18,2);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=140d71b40 name=FUN_140d71b40 */

bool FUN_140d71b40(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18 [6];
  
  iVar1 = FUN_140d72e70(param_1,local_18,3);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=140d71b90 name=FUN_140d71b90 */

bool FUN_140d71b90(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18 [6];
  
  iVar1 = FUN_140d72e70(param_1,local_18,4);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=140d71cb0 name=FUN_140d71cb0 */

bool FUN_140d71cb0(longlong *param_1,undefined *param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    *param_2 = *(undefined *)(*param_1 + -1 + param_1[1]);
    param_1[1] = param_1[1] + -1;
  }
  return lVar1 != 0;
}


/* address=140d71d10 name=FUN_140d71d10 */

bool FUN_140d71d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140d72e00(param_1,local_18,param_3);
  if (iVar1 != 0) {
    FUN_140d717c0(param_2,local_18[0],param_3);
  }
  return iVar1 != 0;
}


/* address=140d71d70 name=FUN_140d71d70 */

bool FUN_140d71d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140d72e00(param_1,local_18,param_3);
  if (iVar1 != 0) {
    FUN_140d72db0(param_2,local_18[0],param_3);
  }
  return iVar1 != 0;
}


/* address=140d71dd0 name=FUN_140d71dd0 */

void FUN_140d71dd0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d72f20(param_1,param_2,1);
  return;
}


/* address=140d71e00 name=FUN_140d71e00 */

void FUN_140d71e00(undefined8 param_1,undefined8 param_2)

{
  FUN_140d72f20(param_1,param_2,2);
  return;
}


/* address=140d71e30 name=FUN_140d71e30 */

void FUN_140d71e30(undefined8 param_1,undefined8 param_2)

{
  FUN_140d72f20(param_1,param_2,3);
  return;
}


/* address=140d71e60 name=FUN_140d71e60 */

undefined8 FUN_140d71e60(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_140d71850(param_1);
  uVar2 = FUN_140d71830(param_1);
  lVar3 = FUN_140d72d70(uVar2,param_3,uVar1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = FUN_140d71830(param_1);
    uVar1 = FUN_140d71d10(param_1,param_2,lVar3 - lVar4);
  }
  return uVar1;
}


/* address=140d71ef0 name=FUN_140d71ef0 */

int FUN_140d71ef0(undefined8 param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  int local_14;
  ulonglong local_10;
  
  local_10 = 0;
  local_14 = 0;
  while (lVar3 = FUN_140d71850(param_1), lVar3 != 0) {
    pbVar4 = (byte *)FUN_140d71830(param_1);
    bVar1 = *pbVar4;
    iVar2 = FUN_140d766f0(bVar1);
    if (iVar2 == 0) break;
    FUN_140d71800(param_1,1);
    if ((((local_10 == 0) && (local_14 != 0)) || (0x1999999999999999 < local_10)) ||
       (uVar5 = -(longlong)(int)(bVar1 - 0x30) - 1,
       uVar5 <= local_10 * 10 && local_10 * 10 - uVar5 != 0)) {
      return 0;
    }
    local_10 = local_10 * 10 + (longlong)(int)(bVar1 - 0x30);
    local_14 = 1;
  }
  *param_2 = local_10;
  return local_14;
}


/* address=140d71ff0 name=wcstoul */

/* Library Function - Single Match
    wcstoul
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2012 Debug */

ulong __cdecl wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = FUN_140d73440(_Str,_EndPtr,_Radix,1);
  return uVar1;
}


/* address=140d72030 name=FUN_140d72030 */

void FUN_140d72030(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140d73440(param_1,param_2,param_3,0);
  return;
}


/* address=140d72070 name=FUN_140d72070 */

undefined4 FUN_140d72070(undefined *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined4 local_38;
  int local_34;
  undefined local_30 [32];
  
  puVar3 = local_30;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = FUN_140d73040(local_30,&local_34);
  if ((iVar1 == 0) || (param_2 != local_34)) {
    local_38 = 0;
  }
  else {
    local_38 = 1;
  }
  return local_38;
}


/* address=140d720e0 name=FUN_140d720e0 */

undefined8 FUN_140d720e0(void *param_1,size_t param_2,size_t param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_18 [3];
  
  pvVar2 = _aligned_recalloc(param_1,param_2,param_3,(size_t)local_18);
  if ((int)pvVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_140d71800(param_2,local_18[0]);
    if (iVar1 == 0) {
      FID_conflict__assert((wchar_t *)&DAT_1413e0028,(wchar_t *)s_D_1413dff60,0x1ac);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=140d72160 name=_aligned_recalloc */

/* Library Function - Single Match
    _aligned_recalloc
   
   Library: Visual Studio */

void * __cdecl _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_140d73100(_Memory,_Count,_Size,_Alignment,0,0,0);
  return pvVar1;
}


/* address=140d721c0 name=FUN_140d721c0 */

void FUN_140d721c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined local_18 [8];
  undefined *local_10;
  
  if (param_5 == (undefined *)0x0) {
    local_10 = local_18;
  }
  else {
    local_10 = param_5;
  }
  FUN_140d73100(param_1,param_2,param_3,param_4,local_10,param_6,1);
  return;
}


/* address=140d72240 name=FUN_140d72240 */

undefined8 FUN_140d72240(wchar_t *param_1,ulonglong *param_2)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_38;
  wchar_t *local_20 [4];
  
  uVar1 = wcstoul(param_1,local_20,2);
  if ((uVar1 != 0) && (iVar2 = FUN_140d72a00(local_20), iVar2 != 0)) {
    *param_2 = 0;
    lVar3 = FUN_140d71830(local_20);
    uVar4 = FUN_140d71850(local_20);
    local_38 = 0;
    while( true ) {
      if (uVar4 <= local_38) {
        return 1;
      }
      if (*param_2 >> 0x38 != 0) break;
      *param_2 = *param_2 << 8;
      *param_2 = *param_2 | (ulonglong)*(byte *)(lVar3 + local_38);
      local_38 = local_38 + 1;
    }
    return 0;
  }
  return 0;
}


/* address=140d72500 name=FUN_140d72500 */

undefined8 FUN_140d72500(wchar_t *param_1,wchar_t **param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_18;
  
  local_18 = 0;
  iVar1 = FUN_140d72070(param_1,param_4);
  if (iVar1 != 0) {
    uVar2 = wcstoul(param_1,param_2,param_4);
    if (uVar2 == 0) {
      return 0;
    }
    local_18 = 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_18;
  }
  return 1;
}


/* address=140d72580 name=FUN_140d72580 */

undefined8 FUN_140d72580(undefined8 param_1,wchar_t **param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_28 [2];
  wchar_t local_20 [16];
  
  iVar1 = FUN_140d72500(param_1,local_20,local_28,param_4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    if (local_28[0] == 0) {
      FUN_140d717c0(param_2,0,0);
    }
    else {
      if (param_2 == (wchar_t **)0x0) {
        FID_conflict__assert((wchar_t *)&DAT_1413e01c8,(wchar_t *)s_D_1413e0100,0x23c);
      }
      uVar2 = wcstoul(local_20,param_2,4);
      if ((uVar2 == 0) || (lVar3 = FUN_140d71850(local_20), lVar3 != 0)) {
        return 0;
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_28[0];
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140d72650 name=FUN_140d72650 */

undefined8
FUN_140d72650(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_28 [2];
  undefined local_20 [32];
  
  iVar1 = FUN_140d72500(param_1,local_20,local_28,param_3);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (local_28[0] == 0) {
      *param_2 = param_4;
    }
    else {
      iVar1 = FUN_140d72240(local_20,param_2);
      if ((iVar1 == 0) || (lVar2 = FUN_140d71850(local_20), lVar2 != 0)) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140d726e0 name=FUN_140d726e0 */

undefined8
FUN_140d726e0(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  int local_34;
  wchar_t local_30 [8];
  wchar_t *local_20 [4];
  
  iVar1 = FUN_140d72500(param_1,local_30,&local_34,param_3);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    if (local_34 == 0) {
      *param_2 = param_4;
    }
    else {
      uVar2 = wcstoul(local_30,local_20,1);
      if (((uVar2 == 0) || (lVar3 = FUN_140d71850(local_20), lVar3 != 1)) ||
         (lVar3 = FUN_140d71850(local_30), lVar3 != 0)) {
        return 0;
      }
      pcVar4 = (char *)FUN_140d71830(local_20);
      if (*pcVar4 == '\0') {
        *param_2 = 0;
      }
      else {
        if (*pcVar4 != -1) {
          return 0;
        }
        *param_2 = 1;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


/* address=140d727d0 name=FUN_140d727d0 */

undefined8 FUN_140d727d0(undefined *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  byte local_38;
  byte local_37 [7];
  undefined local_30 [32];
  
  puVar4 = local_30;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_140d71a50(local_30,&local_38);
  if ((iVar1 == 0) || (7 < local_38)) {
    uVar2 = 0;
  }
  else if (local_38 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_140d71cb0(local_30,local_37);
    if ((iVar1 == 0) || (((uint)local_37[0] & (1 << (local_38 & 0x1f)) - 1U) != 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d72870 name=FUN_140d72870 */

undefined4 FUN_140d72870(undefined8 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_24;
  
  iVar1 = FUN_140d727d0(param_1);
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    uVar2 = (param_2 >> 3) + 1;
    uVar3 = FUN_140d71850(param_1);
    if ((uVar2 < uVar3) &&
       (lVar4 = FUN_140d71830(param_1),
       ((uint)*(byte *)(lVar4 + (ulonglong)uVar2) & 1 << (7 - ((byte)param_2 & 7) & 0x1f)) != 0)) {
      local_24 = 1;
    }
    else {
      local_24 = 0;
    }
  }
  return local_24;
}


/* address=140d72920 name=FUN_140d72920 */

undefined8 FUN_140d72920(undefined *param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  byte local_38;
  byte local_37 [3];
  uint local_34;
  undefined local_30 [32];
  
  puVar4 = local_30;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_140d71a50(local_30,&local_38);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_2 != (uint *)0x0) {
      local_34 = (uint)((local_38 & 0x80) != 0);
      *param_2 = local_34;
    }
    iVar1 = FUN_140d71a50(local_30,local_37);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else if (((local_38 == 0) && ((local_37[0] & 0x80) == 0)) ||
            ((local_38 == 0xff && ((local_37[0] & 0x80) != 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d72a00 name=FUN_140d72a00 */

undefined4 FUN_140d72a00(undefined8 param_1)

{
  int iVar1;
  undefined4 local_18;
  int local_14 [5];
  
  iVar1 = FUN_140d72920(param_1,local_14);
  if ((iVar1 == 0) || (local_14[0] != 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d72a50 name=FUN_140d72a50 */

bool FUN_140d72a50(undefined *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  bool bVar4;
  byte local_38;
  byte local_37 [7];
  undefined local_30 [32];
  
  lVar2 = FUN_140d71850(param_1);
  if (lVar2 == 0) {
    bVar4 = false;
  }
  else {
    puVar3 = local_30;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    local_38 = 0;
    while (iVar1 = FUN_140d71a50(local_30,local_37), iVar1 != 0) {
      if (((local_38 & 0x80) == 0) && (local_37[0] == 0x80)) {
        return false;
      }
      local_38 = local_37[0];
    }
    bVar4 = (local_38 & 0x80) == 0;
  }
  return bVar4;
}


/* address=140d72b00 name=FUN_140d72b00 */

undefined8 FUN_140d72b00(undefined *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong local_78;
  undefined8 local_70;
  undefined local_68 [8];
  undefined local_60 [16];
  undefined local_50 [64];
  
  iVar1 = FUN_140d73a80(local_50,0x20);
  if (iVar1 != 0) {
    puVar3 = local_60;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar1 = FUN_140d72fa0(local_60,&local_78);
    if (iVar1 != 0) {
      if (local_78 < 0x50) {
        iVar1 = FUN_140d734f0(local_50,local_78 / 0x28);
        if ((iVar1 == 0) || (iVar1 = FUN_140d74480(local_50,0x2e), iVar1 == 0)) goto LAB_140d72c68;
        iVar1 = FUN_140d734f0(local_50,local_78 % 0x28);
      }
      else {
        iVar1 = FUN_140d74290(local_50,&DAT_1413e01d8,2);
        if (iVar1 == 0) goto LAB_140d72c68;
        iVar1 = FUN_140d734f0(local_50,local_78 - 0x50);
      }
      if (iVar1 != 0) {
        while (lVar2 = FUN_140d71850(local_60), lVar2 != 0) {
          iVar1 = FUN_140d72fa0(local_60,&local_78);
          if (((iVar1 == 0) || (iVar1 = FUN_140d74480(local_50,0x2e), iVar1 == 0)) ||
             (iVar1 = FUN_140d734f0(local_50), iVar1 == 0)) goto LAB_140d72c68;
        }
        iVar1 = FUN_140d74480(local_50,0);
        if ((iVar1 != 0) && (iVar1 = FUN_140d73bb0(local_50,&local_70,local_68), iVar1 != 0)) {
          return local_70;
        }
      }
    }
  }
LAB_140d72c68:
  FUN_140d73b40(local_50);
  return 0;
}


/* address=140d72c90 name=FUN_140d72c90 */

void FUN_140d72c90(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140d73740(param_1,1,param_3,param_2);
  return;
}


/* address=140d72cd0 name=FUN_140d72cd0 */

void FUN_140d72cd0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140d73740(param_1,0,param_3,param_2);
  return;
}


/* address=140d72d10 name=FUN_140d72d10 */

ushort FUN_140d72d10(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}


/* address=140d72d30 name=FUN_140d72d30 */

uint FUN_140d72d30(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=140d72d50 name=FUN_140d72d50 */

ulonglong FUN_140d72d50(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=140d72d70 name=FUN_140d72d70 */

undefined8 FUN_140d72d70(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e99b80(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140d72db0 name=FUN_140d72db0 */

undefined8 FUN_140d72db0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d72e00 name=FUN_140d72e00 */

bool FUN_140d72e00(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = param_1[1];
  if (param_3 <= uVar1) {
    *param_2 = *param_1;
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
  }
  return param_3 <= uVar1;
}


/* address=140d72e70 name=FUN_140d72e70 */

undefined8 FUN_140d72e70(undefined8 param_1,ulonglong *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18 [3];
  
  local_28 = 0;
  iVar1 = FUN_140d72e00(param_1,local_18,param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
      local_28 = local_28 << 8 | (ulonglong)*(byte *)(local_18[0] + local_20);
    }
    *param_2 = local_28;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d72f20 name=FUN_140d72f20 */

undefined8 FUN_140d72f20(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140d72e70(param_1,local_18,param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (3 < param_3) {
      FID_conflict__assert((wchar_t *)s_l_1413dfd38,(wchar_t *)s_D_1413dfc70,0xce);
    }
    uVar2 = FUN_140d71d10(param_1,param_2,local_18[0]);
  }
  return uVar2;
}


/* address=140d72fa0 name=FUN_140d72fa0 */

undefined8 FUN_140d72fa0(undefined8 param_1,ulonglong *param_2)

{
  int iVar1;
  byte local_18 [8];
  ulonglong local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = FUN_140d71a50(param_1,local_18);
    if (iVar1 == 0) {
      return 0;
    }
    if (local_10 >> 0x39 != 0) break;
    if ((local_10 == 0) && (local_18[0] == 0x80)) {
      return 0;
    }
    local_10 = local_10 << 7 | (longlong)(int)(local_18[0] & 0x7f);
    if ((local_18[0] & 0x80) == 0) {
      *param_2 = local_10;
      return 1;
    }
  }
  return 0;
}


/* address=140d73040 name=FUN_140d73040 */

undefined8 FUN_140d73040(undefined8 param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte local_28 [4];
  uint local_24;
  uint local_20;
  uint local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_140d71a50(param_1,local_28);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_24 = (local_28[0] & 0xe0) << 0x18;
    local_20 = local_28[0] & 0x1f;
    if (local_20 == 0x1f) {
      iVar1 = FUN_140d72fa0(param_1,&local_18);
      if (((iVar1 == 0) || (0x1fffffff < CONCAT44(uStack_14,local_18))) ||
         (CONCAT44(uStack_14,local_18) < 0x1f)) {
        return 0;
      }
      local_20 = local_18;
    }
    if (((local_24 | local_20) & 0xdfffffff) == 0) {
      uVar2 = 0;
    }
    else {
      *param_2 = local_24 | local_20;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d73100 name=FUN_140d73100 */

undefined8
FUN_140d73100(undefined *param_1,undefined *param_2,uint *param_3,longlong *param_4,
             undefined4 *param_5,undefined4 *param_6,int param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_res10;
  byte local_78 [8];
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  uint local_58 [2];
  ulonglong local_50;
  undefined local_48 [16];
  longlong local_38;
  undefined local_30 [32];
  
  puVar4 = param_1;
  puVar5 = local_48;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_res10 = param_2;
  if (param_2 == (undefined *)0x0) {
    local_res10 = local_30;
  }
  if (param_7 == 0) {
    if (param_5 != (undefined4 *)0x0) {
      FID_conflict__assert((wchar_t *)s_o_1413dfe28,(wchar_t *)s_D_1413dfd60,0x14d);
    }
    if (param_6 != (undefined4 *)0x0) {
      FID_conflict__assert((wchar_t *)s_o_1413dff28,(wchar_t *)s_D_1413dfe60,0x14e);
    }
  }
  else {
    *param_5 = 0;
    *param_6 = 0;
  }
  iVar1 = FUN_140d73040(local_48,local_58);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = local_58[0];
    }
    iVar1 = FUN_140d71a50(local_48,local_78);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      local_38 = FUN_140d71850(param_1);
      local_68 = FUN_140d71850(local_48);
      local_68 = local_38 - local_68;
      if ((local_78[0] & 0x80) == 0) {
        local_60 = (ulonglong)local_78[0] + local_68;
        if (param_4 != (longlong *)0x0) {
          *param_4 = local_68;
        }
      }
      else {
        local_70 = (ulonglong)(int)(local_78[0] & 0x7f);
        if (((param_7 != 0) && ((local_58[0] & 0x20000000) != 0)) && (local_70 == 0)) {
          if (param_4 != (longlong *)0x0) {
            *param_4 = local_68;
          }
          *param_5 = 1;
          *param_6 = 1;
          uVar2 = FUN_140d71d10(param_1,local_res10,local_68);
          return uVar2;
        }
        if ((local_70 == 0) || (4 < local_70)) {
          return 0;
        }
        iVar1 = FUN_140d72e70(local_48,&local_50,local_70);
        if (iVar1 == 0) {
          return 0;
        }
        if (local_50 < 0x80) {
          if (param_7 == 0) {
            return 0;
          }
          *param_5 = 1;
        }
        if (local_50 >> ((char)local_70 * '\b' - 8U & 0x3f) == 0) {
          if (param_7 == 0) {
            return 0;
          }
          *param_5 = 1;
        }
        if (local_50 + local_68 + local_70 < local_50) {
          return 0;
        }
        local_60 = local_50 + local_68 + local_70;
        if (param_4 != (longlong *)0x0) {
          *param_4 = local_68 + local_70;
        }
      }
      uVar2 = FUN_140d71d10(param_1,local_res10,local_60);
    }
  }
  return uVar2;
}


/* address=140d73440 name=FUN_140d73440 */

undefined8 FUN_140d73440(void *param_1,undefined *param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined *local_res10;
  int local_28 [2];
  undefined8 local_20;
  undefined local_18 [24];
  
  local_res10 = param_2;
  if (param_2 == (undefined *)0x0) {
    local_res10 = local_18;
  }
  pvVar2 = _aligned_recalloc(param_1,(size_t)local_res10,(size_t)local_28,(size_t)&local_20);
  if (((int)pvVar2 == 0) || (local_28[0] != param_3)) {
    uVar3 = 0;
  }
  else if ((param_4 == 0) || (iVar1 = FUN_140d71800(local_res10,local_20), iVar1 != 0)) {
    uVar3 = 1;
  }
  else {
    FID_conflict__assert((wchar_t *)&DAT_1413e00f8,(wchar_t *)s_D_1413e0030,0x1d3);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d734f0 name=FUN_140d734f0 */

void FUN_140d734f0(undefined8 param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined auStack_48 [32];
  char local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_48;
  _snprintf(local_28,0x18,&DAT_1413e01d0,param_2);
  sVar1 = strlen(local_28);
  FUN_140d74290(param_1,local_28,sVar1);
  FUN_140e28050(local_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=140d73560 name=FUN_140d73560 */

undefined8 FUN_140d73560(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte local_18;
  byte local_17 [23];
  
  iVar1 = FUN_140d71a50(param_1,&local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_140d766f0(local_18);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_140d71a50(param_1,local_17);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_140d766f0(local_17[0]);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          *param_2 = (local_18 - 0x30) * 10 + -0x30 + (uint)local_17[0];
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}


/* address=140d735f0 name=FUN_140d735f0 */

bool FUN_140d735f0(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  
  if (param_3 < 1) {
    bVar1 = false;
  }
  else {
    switch(param_2) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 0xc:
      bVar1 = param_3 < 0x20;
      break;
    case 2:
      uVar2 = param_1 >> 0x1f & 3;
      if ((((param_1 + uVar2 & 3) == uVar2) && (param_1 % 100 != 0)) || (param_1 % 400 == 0)) {
        bVar1 = param_3 < 0x1e;
      }
      else {
        bVar1 = param_3 < 0x1d;
      }
      break;
    case 4:
    case 6:
    case 9:
    case 0xb:
      bVar1 = param_3 < 0x1f;
      break;
    default:
      bVar1 = false;
    }
  }
  return bVar1;
}


/* address=140d73740 name=FUN_140d73740 */

undefined8 FUN_140d73740(undefined *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  int local_68;
  char local_64 [4];
  int local_60;
  int local_5c;
  int local_58;
  char local_54;
  int local_50;
  undefined local_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [5];
  
  puVar4 = local_48;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_2 == 0) {
    iVar1 = FUN_140d73560(local_48,&local_60);
    if (iVar1 == 0) {
      return 0;
    }
    local_68 = local_60 + 0x76c;
    if (local_68 < 0x79e) {
      local_68 = local_60 + 2000;
    }
    if (0x801 < local_68) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_140d73560(local_48,&local_60);
    if (iVar1 == 0) {
      return 0;
    }
    local_68 = local_60 * 100;
    iVar1 = FUN_140d73560(local_48,&local_60);
    if (iVar1 == 0) {
      return 0;
    }
    local_68 = local_68 + local_60;
  }
  iVar1 = FUN_140d73560(local_48,&local_58);
  if (((((((iVar1 == 0) || (local_58 < 1)) || (0xc < local_58)) ||
        ((iVar1 = FUN_140d73560(local_48,&local_30), iVar1 == 0 ||
         (iVar1 = FUN_140d735f0(local_68,local_58,local_30), iVar1 == 0)))) ||
       ((iVar1 = FUN_140d73560(local_48,&local_2c), iVar1 == 0 ||
        ((0x17 < local_2c || (iVar1 = FUN_140d73560(local_48,&local_28), iVar1 == 0)))))) ||
      (0x3b < local_28)) ||
     (((iVar1 = FUN_140d73560(local_48,local_24), iVar1 == 0 || (0x3b < local_24[0])) ||
      (iVar1 = FUN_140d71a50(local_48,local_64), iVar1 == 0)))) {
    return 0;
  }
  local_5c = 0;
  local_54 = local_64[0];
  if (local_64[0] == '+') {
    local_5c = 1;
  }
  else if (local_64[0] == '-') {
    local_5c = -1;
  }
  else if (local_64[0] != 'Z') {
    return 0;
  }
  local_50 = 0;
  if (local_5c != 0) {
    if (param_3 == 0) {
      return 0;
    }
    iVar1 = FUN_140d73560(local_48,&local_38);
    if (((iVar1 == 0) || (0x17 < local_38)) ||
       ((iVar1 = FUN_140d73560(local_48,&local_34), iVar1 == 0 || (0x3b < local_34)))) {
      return 0;
    }
    local_50 = local_5c * (local_38 * 0xe10 + local_34 * 0x3c);
  }
  lVar3 = FUN_140d71850(local_48);
  if (lVar3 == 0) {
    if (param_4 != (int *)0x0) {
      param_4[5] = local_68 + -0x76c;
      param_4[4] = local_58 + -1;
      param_4[3] = local_30;
      param_4[2] = local_2c;
      param_4[1] = local_28;
      *param_4 = local_24[0];
      if ((local_50 != 0) && (iVar1 = FUN_140e082b0(param_4,0,local_50), iVar1 == 0)) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d73a50 name=FUN_140d73a50 */

void FUN_140d73a50(undefined8 param_1)

{
  FUN_140d74f60(param_1,0,0x30);
  return;
}


/* address=140d73a80 name=FUN_140d73a80 */

undefined8 FUN_140d73a80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_140d73a50(param_1);
  lVar1 = FUN_140d76180(param_2);
  if ((param_2 == 0) || (lVar1 != 0)) {
    FUN_140d74fa0(param_1,lVar1,param_2,1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d73af0 name=FUN_140d73af0 */

undefined8 FUN_140d73af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d73a50(param_1);
  FUN_140d74fa0(param_1,param_2,param_3,0);
  return 1;
}


/* address=140d73b40 name=FUN_140d73b40 */

void FUN_140d73b40(longlong param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    FID_conflict__assert((wchar_t *)s___1413e02a8,(wchar_t *)s_D_1413e01e0,0x3e);
  }
  if ((*(char *)(param_1 + 8) == '\0') && ((*(uint *)(param_1 + 0x28) & 1) != 0)) {
    FUN_140d762b0(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}


/* address=140d73bb0 name=FUN_140d73bb0 */

undefined8 FUN_140d73bb0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = FUN_140d73c90(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else if (((*(uint *)(param_1 + 0x28) & 1) == 0) ||
            ((param_2 != (undefined8 *)0x0 && (param_3 != (undefined8 *)0x0)))) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = *(undefined8 *)(param_1 + 0x10);
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(param_1 + 0x18);
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      FUN_140d73b40(param_1);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    FUN_140d186f0(0xe,0,0x42,s_D__a_1_s_target_release_build_bo_1413e03b0,0x7f);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d73c90 name=FUN_140d73c90 */

undefined8 FUN_140d73c90(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte local_48;
  undefined local_47;
  ulonglong local_38;
  ulonglong local_20;
  
  plVar3 = (longlong *)FUN_140d75210(param_1);
  if ((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 3) >> 1 & 1) != 0)) {
    return 0;
  }
  if (*param_1 == 0) {
    return 1;
  }
  if (*(char *)(*param_1 + 8) == '\0') {
    FID_conflict__assert((wchar_t *)s_c_1413e04e8,(wchar_t *)s_D_1413e0420,0xaf);
  }
  lVar1 = *param_1;
  if (*(longlong **)(lVar1 + 0x10) != plVar3) {
    FID_conflict__assert((wchar_t *)s_c_1413e05e8,(wchar_t *)s_D_1413e0520,0xb1);
  }
  uVar4 = (ulonglong)*(byte *)(lVar1 + 0x20) + *(longlong *)(lVar1 + 0x18);
  iVar2 = FUN_140d73c90(*param_1);
  if (((iVar2 != 0) && (*(ulonglong *)(lVar1 + 0x18) <= uVar4)) && (uVar4 <= (ulonglong)plVar3[1]))
  {
    local_38 = plVar3[1] - uVar4;
    if ((*(uint *)(lVar1 + 0x24) & 1) != 0) {
      if (*(char *)(lVar1 + 0x20) != '\x01') {
        FID_conflict__assert((wchar_t *)s_c_1413e06d8,(wchar_t *)s_D_1413e0610,0xc3);
      }
      if (0xfffffffe < local_38) {
        FUN_140d186f0(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_1413e0710,0xc6);
        goto LAB_140d73fdf;
      }
      if (local_38 < 0x1000000) {
        if (local_38 < 0x10000) {
          if (local_38 < 0x100) {
            if (local_38 < 0x80) {
              local_48 = 1;
              local_47 = (undefined)local_38;
              local_38 = 0;
            }
            else {
              local_48 = 2;
              local_47 = 0x81;
            }
          }
          else {
            local_48 = 3;
            local_47 = 0x82;
          }
        }
        else {
          local_48 = 4;
          local_47 = 0x83;
        }
      }
      else {
        local_48 = 5;
        local_47 = 0x84;
      }
      if (local_48 != 1) {
        iVar2 = FUN_140d751b0(plVar3,0,(longlong)(int)(local_48 - 1));
        if (iVar2 == 0) goto LAB_140d73fdf;
        FUN_140d74f10(*plVar3 + uVar4 + (longlong)(int)(local_48 - 1),*plVar3 + uVar4,local_38);
      }
      *(undefined *)(*plVar3 + *(longlong *)(lVar1 + 0x18)) = local_47;
      *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 1;
      *(byte *)(lVar1 + 0x20) = local_48 - 1;
    }
    for (local_20 = (ulonglong)(int)(*(byte *)(lVar1 + 0x20) - 1);
        local_20 < *(byte *)(lVar1 + 0x20); local_20 = local_20 - 1) {
      *(undefined *)(*plVar3 + *(longlong *)(lVar1 + 0x18) + local_20) = (undefined)local_38;
      local_38 = local_38 >> 8;
    }
    if (local_38 == 0) {
      *(longlong **)(lVar1 + 0x10) = (longlong *)0x0;
      *param_1 = 0;
      return 1;
    }
    FUN_140d186f0(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_1413e0780,0xed);
  }
LAB_140d73fdf:
  *(uint *)(plVar3 + 3) = *(uint *)(plVar3 + 3) | 2;
  return 0;
}


/* address=140d74000 name=FUN_140d74000 */

longlong FUN_140d74000(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    FID_conflict__assert((wchar_t *)s_c_1413e08b8,(wchar_t *)s_D_1413e07f0,0xfc);
  }
  if (*(char *)(param_1 + 1) == '\0') {
    lVar1 = param_1[2];
  }
  else {
    lVar1 = *(longlong *)param_1[2] + param_1[3] + (ulonglong)*(byte *)(param_1 + 4);
  }
  return lVar1;
}


/* address=140d74080 name=FUN_140d74080 */

longlong FUN_140d74080(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    FID_conflict__assert((wchar_t *)s_c_1413e09a8,(wchar_t *)s_D_1413e08e0,0x105);
  }
  if (*(char *)(param_1 + 1) == '\0') {
    lVar1 = param_1[3];
  }
  else {
    if (*(ulonglong *)(param_1[2] + 8) < (ulonglong)*(byte *)(param_1 + 4) + param_1[3]) {
      FID_conflict__assert((wchar_t *)s_c_1413e0aa0,(wchar_t *)s_D_1413e09d0,0x108);
    }
    lVar1 = (*(longlong *)(param_1[2] + 8) - param_1[3]) - (ulonglong)*(byte *)(param_1 + 4);
  }
  return lVar1;
}


/* address=140d74140 name=FUN_140d74140 */

void FUN_140d74140(undefined8 param_1,undefined8 param_2)

{
  FUN_140d75380(param_1,param_2,1);
  return;
}


/* address=140d74170 name=FUN_140d74170 */

void FUN_140d74170(undefined8 param_1,undefined8 param_2)

{
  FUN_140d75380(param_1,param_2,2);
  return;
}


/* address=140d741a0 name=FUN_140d741a0 */

void FUN_140d741a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d75380(param_1,param_2,3);
  return;
}


/* address=140d741d0 name=FUN_140d741d0 */

undefined8 FUN_140d741d0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_140d73c90(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = (byte)(param_3 >> 0x18) & 0xe0;
    if ((param_3 & 0x1fffffff) < 0x1f) {
      iVar2 = FUN_140d74480(param_1,(uint)bVar1 | param_3 & 0xff);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_140d74480(param_1,bVar1 | 0x1f);
      if ((iVar2 == 0) || (iVar2 = FUN_140d753d0(param_1,param_3 & 0x1fffffff), iVar2 == 0)) {
        return 0;
      }
    }
    uVar3 = FUN_140d75240(param_1,param_2,1,1);
  }
  return uVar3;
}


/* address=140d74290 name=FUN_140d74290 */

bool FUN_140d74290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140d74340(param_1,local_18,param_3);
  if (iVar1 != 0) {
    FUN_140d74ec0(local_18[0],param_2,param_3);
  }
  return iVar1 != 0;
}


/* address=140d742f0 name=FUN_140d742f0 */

bool FUN_140d742f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140d74340(param_1,local_18,param_2);
  if (iVar1 != 0) {
    FUN_140d74f60(local_18[0],0,param_2);
  }
  return iVar1 != 0;
}


/* address=140d74340 name=FUN_140d74340 */

undefined8 FUN_140d74340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d73c90(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_140d75210(param_1);
    iVar1 = FUN_140d751b0(uVar2,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=140d743a0 name=FUN_140d743a0 */

undefined8 FUN_140d743a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d73c90(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_140d75210(param_1);
    iVar1 = FUN_140d75030(uVar2,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=140d74400 name=FUN_140d74400 */

undefined8 FUN_140d74400(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140d75210(param_1);
  uVar2 = *(longlong *)(lVar1 + 8) + param_2;
  if (((*param_1 == 0) && (*(ulonglong *)(lVar1 + 8) <= uVar2)) &&
     (uVar2 <= *(ulonglong *)(lVar1 + 0x10))) {
    *(ulonglong *)(lVar1 + 8) = uVar2;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d74480 name=FUN_140d74480 */

void FUN_140d74480(undefined8 param_1,undefined param_2)

{
  FUN_140d754a0(param_1,param_2,1);
  return;
}


/* address=140d744b0 name=FUN_140d744b0 */

void FUN_140d744b0(undefined8 param_1,undefined2 param_2)

{
  FUN_140d754a0(param_1,param_2,2);
  return;
}


/* address=140d74510 name=FUN_140d74510 */

void FUN_140d74510(undefined8 param_1,undefined4 param_2)

{
  FUN_140d754a0(param_1,param_2,3);
  return;
}


/* address=140d74540 name=FUN_140d74540 */

void FUN_140d74540(undefined8 param_1,undefined4 param_2)

{
  FUN_140d754a0(param_1,param_2,4);
  return;
}


/* address=140d745a0 name=FUN_140d745a0 */

void FUN_140d745a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d754a0(param_1,param_2,8);
  return;
}


/* address=140d74600 name=FUN_140d74600 */

void FUN_140d74600(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = FUN_140d75210(param_1);
    if (*(char *)(*param_1 + 8) == '\0') {
      FID_conflict__assert((wchar_t *)s_c_1413e0df8,(wchar_t *)s_D_1413e0d30,0x1d4);
    }
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*param_1 + 0x18);
    *(undefined8 *)(*param_1 + 0x10) = 0;
    *param_1 = 0;
  }
  return;
}


/* address=140d74690 name=FUN_140d74690 */

void FUN_140d74690(undefined8 param_1,undefined8 param_2)

{
  FUN_140d746c0(param_1,param_2,2);
  return;
}


/* address=140d746c0 name=FUN_140d746c0 */

undefined8 FUN_140d746c0(undefined8 param_1,ulonglong param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_40;
  undefined local_38 [56];
  
  iVar3 = FUN_140d741d0(param_1,local_38,param_3);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    bVar2 = false;
    for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
      uVar4 = param_2 >> (('\a' - (char)local_40) * '\b' & 0x3fU);
      cVar1 = (char)uVar4;
      if (bVar2) {
LAB_140d7477c:
        iVar3 = FUN_140d74480(local_38,cVar1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else if (cVar1 != '\0') {
        if (((uVar4 & 0x80) != 0) && (iVar3 = FUN_140d74480(local_38,0), iVar3 == 0)) {
          return 0;
        }
        bVar2 = true;
        goto LAB_140d7477c;
      }
    }
    if ((bVar2) || (iVar3 = FUN_140d74480(local_38,0), iVar3 != 0)) {
      uVar5 = FUN_140d73c90(param_1);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}


/* address=140d74800 name=FUN_140d74800 */

void FUN_140d74800(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong local_res10;
  undefined4 local_res18;
  undefined auStack_78 [32];
  int local_58;
  int local_54;
  undefined local_50 [48];
  byte local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_78;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 < 0) {
    FUN_140e99d20(local_20,&local_res10,8);
    local_58 = 7;
    while (((0 < local_58 && (local_20[local_58] == 0xff)) &&
           ((local_20[local_58 + -1] & 0x80) != 0))) {
      local_58 = local_58 + -1;
    }
    iVar1 = FUN_140d741d0(param_1,local_50,local_res18);
    if (iVar1 != 0) {
      for (local_54 = local_58; -1 < local_54; local_54 = local_54 + -1) {
        iVar1 = FUN_140d74480(local_50,local_20[local_54]);
        if (iVar1 == 0) goto LAB_140d74911;
      }
      FUN_140d73c90(param_1);
    }
  }
  else {
    FUN_140d746c0(param_1,param_2,param_3);
  }
LAB_140d74911:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=140d74930 name=FUN_140d74930 */

undefined8 FUN_140d74930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_140d741d0(param_1,local_38,4);
  if (((iVar1 != 0) && (iVar1 = FUN_140d74290(local_38,param_2,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_140d73c90(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140d749a0 name=FUN_140d749a0 */

undefined8 FUN_140d749a0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined local_48;
  undefined local_40 [64];
  
  iVar1 = FUN_140d741d0(param_1,local_40,1);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = 0xff;
    }
    iVar1 = FUN_140d74480(local_40,local_48);
    if ((iVar1 != 0) && (iVar1 = FUN_140d73c90(param_1), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}


/* address=140d74a20 name=FUN_140d74a20 */

undefined8 FUN_140d74a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong local_28;
  ulonglong local_20;
  undefined local_18 [24];
  
  iVar1 = FUN_140d73c90(param_1);
  if (iVar1 != 0) {
    FUN_140d717c0(local_18,param_2,param_3);
    iVar1 = FUN_140d75570(local_18,&local_28);
    if ((((iVar1 != 0) && (iVar1 = FUN_140d75570(local_18,&local_20), iVar1 != 0)) && (local_28 < 3)
        ) && (((1 < local_28 || (local_20 < 0x28)) && (local_20 < 0xffffffffffffffb0)))) {
      iVar1 = FUN_140d753d0(param_1,local_28 * 0x28 + local_20);
      while (iVar1 != 0) {
        lVar2 = FUN_140d71850(local_18);
        if (lVar2 == 0) {
          return 1;
        }
        iVar1 = FUN_140d75570(local_18,&local_28);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_140d753d0(param_1,local_28);
      }
    }
  }
  return 0;
}


/* address=140d74b20 name=FUN_140d74b20 */

undefined4 FUN_140d74b20(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong local_78;
  ulonglong local_68;
  undefined4 local_60;
  ulonglong local_58;
  longlong local_50;
  undefined local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  iVar1 = FUN_140d73c90(param_1);
  if (iVar1 == 0) {
    local_60 = 0;
  }
  else {
    local_78 = 0;
    local_28 = FUN_140d74080(param_1);
    FUN_140d74000(param_1);
    FUN_140d717c0(local_38);
    while (lVar2 = FUN_140d71850(local_38), lVar2 != 0) {
      pvVar3 = _aligned_recalloc(local_38,0,0,0);
      if ((int)pvVar3 == 0) {
        FUN_140d186f0(0xe,0,0x42,s_D__a_1_s_target_release_build_bo_1413e0e30,0x283);
        return 0;
      }
      local_78 = local_78 + 1;
    }
    if (local_78 < 2) {
      local_60 = 1;
    }
    else if (local_78 < 0x1000000000000000) {
      local_60 = 0;
      lVar2 = FUN_140d74080(param_1);
      uVar4 = FUN_140d74000(param_1);
      lVar5 = FUN_140d76c50(uVar4,lVar2);
      lVar6 = FUN_140d76180(local_78 * 0x10);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        FUN_140d717c0(local_38,lVar5);
        for (local_58 = 0; local_58 < local_78; local_58 = local_58 + 1) {
          pvVar3 = _aligned_recalloc(local_38,lVar6 + local_58 * 0x10,0,0);
          if ((int)pvVar3 == 0) goto LAB_140d74df3;
        }
        FUN_140e85590(lVar6,local_78,0x10,&LAB_140d755f0);
        local_20 = FUN_140d74000(param_1);
        local_50 = 0;
        for (local_68 = 0; local_68 < local_78; local_68 = local_68 + 1) {
          local_18 = FUN_140d71850(lVar6 + local_68 * 0x10);
          uVar4 = FUN_140d71830(lVar6 + local_68 * 0x10);
          FUN_140d74ec0(local_20 + local_50,uVar4,local_18);
          lVar7 = FUN_140d71850(lVar6 + local_68 * 0x10);
          local_50 = local_50 + lVar7;
        }
        if (local_50 != lVar2) {
          FID_conflict__assert((wchar_t *)s_o_1413e0f68,(wchar_t *)s_D_1413e0ea0,0x2a8);
        }
        local_60 = 1;
      }
LAB_140d74df3:
      FUN_140d762b0(lVar5);
      FUN_140d762b0(lVar6);
    }
    else {
      local_60 = 0;
    }
  }
  return local_60;
}


/* address=140d74e20 name=FUN_140d74e20 */

ushort FUN_140d74e20(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}


/* address=140d74e40 name=FUN_140d74e40 */

uint FUN_140d74e40(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=140d74e60 name=FUN_140d74e60 */

ulonglong FUN_140d74e60(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=140d74e80 name=FUN_140d74e80 */

int FUN_140d74e80(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = memcmp(param_1,param_2,param_3);
  }
  return iVar1;
}


/* address=140d74ec0 name=FUN_140d74ec0 */

undefined8 FUN_140d74ec0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d74f10 name=FUN_140d74f10 */

undefined8 FUN_140d74f10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d74f60 name=FUN_140d74f60 */

undefined8 FUN_140d74f60(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d74fa0 name=FUN_140d74fa0 */

void FUN_140d74fa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  *(undefined *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = param_3;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe | param_4 & 1;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffd;
  return;
}


/* address=140d75030 name=FUN_140d75030 */

undefined8 FUN_140d75030(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong local_28;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = param_1[1] + param_3;
  if (uVar1 < (ulonglong)param_1[1]) {
    FUN_140d186f0(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_1413e02d0,0x51);
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) {
LAB_140d75159:
      if (param_2 != (longlong *)0x0) {
        *param_2 = *param_1 + param_1[1];
      }
      return 1;
    }
    if ((*(uint *)(param_1 + 3) & 1) == 0) {
      FUN_140d186f0(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_1413e0340,0x57);
    }
    else {
      local_28 = param_1[2] << 1;
      if ((local_28 < (ulonglong)param_1[2]) || (local_28 < uVar1)) {
        local_28 = uVar1;
      }
      lVar2 = FUN_140d76360(*param_1,local_28);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        param_1[2] = local_28;
        goto LAB_140d75159;
      }
    }
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 2;
  return 0;
}


/* address=140d751b0 name=FUN_140d751b0 */

bool FUN_140d751b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d75030(param_1,param_2,param_3);
  if (iVar1 != 0) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_3;
  }
  return iVar1 != 0;
}


/* address=140d75210 name=FUN_140d75210 */

longlong FUN_140d75210(longlong param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x10);
  }
  return param_1;
}


/* address=140d75240 name=FUN_140d75240 */

bool FUN_140d75240(longlong *param_1,longlong param_2,char param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*param_1 != 0) {
    FID_conflict__assert((wchar_t *)s_c_1413e0c08,(wchar_t *)s_D_1413e0b40,0x111);
  }
  if ((param_4 != 0) && (param_3 != '\x01')) {
    FID_conflict__assert((wchar_t *)s___1413e0cf8,(wchar_t *)s_D_1413e0c30,0x112);
  }
  lVar2 = FUN_140d75210(param_1);
  local_18 = *(undefined8 *)(lVar2 + 8);
  iVar1 = FUN_140d751b0(lVar2,&local_20,param_3);
  if (iVar1 != 0) {
    FUN_140d74f60(local_20,0,param_3);
    FUN_140d73a50(param_2);
    *(undefined *)(param_2 + 8) = 1;
    *(longlong *)(param_2 + 0x10) = lVar2;
    *(undefined8 *)(param_2 + 0x18) = local_18;
    *(char *)(param_2 + 0x20) = param_3;
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe | param_4 & 1;
    *param_1 = param_2;
  }
  return iVar1 != 0;
}


/* address=140d75380 name=FUN_140d75380 */

undefined8 FUN_140d75380(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d73c90(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d75240(param_1,param_2,param_3,0);
  }
  return uVar2;
}


/* address=140d753d0 name=FUN_140d753d0 */

undefined8 FUN_140d753d0(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  byte local_28;
  uint local_24;
  uint local_20;
  ulonglong local_18;
  
  local_24 = 0;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 >> 7) {
    local_24 = local_24 + 1;
  }
  local_20 = local_24;
  if (local_24 == 0) {
    local_24 = 1;
    local_20 = local_24;
  }
  do {
    local_20 = local_20 - 1;
    if (local_24 <= local_20) {
      return 1;
    }
    local_28 = (byte)(param_2 >> ((char)local_20 * '\a' & 0x3fU)) & 0x7f;
    if (local_20 != 0) {
      local_28 = local_28 | 0x80;
    }
    iVar1 = FUN_140d74480(param_1,local_28);
  } while (iVar1 != 0);
  return 0;
}


/* address=140d754a0 name=FUN_140d754a0 */

undefined8 FUN_140d754a0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_res10;
  ulonglong local_28;
  longlong local_18 [3];
  
  iVar1 = FUN_140d74340(param_1,local_18,param_3);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    local_res10 = param_2;
    for (local_28 = param_3 - 1; local_28 < param_3; local_28 = local_28 - 1) {
      *(undefined *)(local_18[0] + local_28) = (undefined)local_res10;
      local_res10 = local_res10 >> 8;
    }
    if (local_res10 == 0) {
      uVar3 = 1;
    }
    else {
      lVar2 = FUN_140d75210(param_1);
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 2;
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140d75570 name=FUN_140d75570 */

undefined4 FUN_140d75570(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char local_18 [4];
  undefined4 local_14;
  
  iVar1 = FUN_140d71ef0(param_1,param_2);
  if (iVar1 == 0) {
    local_14 = 0;
  }
  else {
    iVar1 = FUN_140d71a50(param_1,local_18);
    if ((iVar1 == 0) || ((local_18[0] == '.' && (lVar2 = FUN_140d71850(param_1), lVar2 != 0)))) {
      local_14 = 1;
    }
    else {
      local_14 = 0;
    }
  }
  return local_14;
}


/* address=140d75820 name=FUN_140d75820 */

void FUN_140d75820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d75ee0(param_1,param_2,0,param_3);
  return;
}


/* address=140d75910 name=FUN_140d75910 */

void FUN_140d75910(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140d71850(param_1);
  uVar2 = FUN_140d71830(param_1);
  FUN_140d75820(uVar2,uVar1,param_2);
  return;
}


/* address=140d759a0 name=FUN_140d759a0 */

void FUN_140d759a0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      iVar2 = FUN_140d89300(param_1 + 3);
      if (iVar2 != 0) {
        FUN_140d75ea0(param_1);
      }
    }
    else {
      FUN_140d89400(puVar1 + 1);
      iVar2 = FUN_140d89300(param_1 + 3);
      if (iVar2 == 0) {
        FUN_140d89440(*param_1 + 8);
      }
      else {
        plVar3 = (longlong *)FUN_140d75cc0(*puVar1,param_1);
        if ((plVar3 == param_1) &&
           (plVar3 = (longlong *)FUN_140d75d70(*puVar1,param_1), plVar3 != param_1)) {
          FID_conflict__assert((wchar_t *)s_f_1413e1340,(wchar_t *)s_D_1413e1280,0xeb);
        }
        FUN_140d89440(*param_1 + 8);
        FUN_140d75ea0(param_1);
      }
    }
  }
  return;
}


/* address=140d75ac0 name=FUN_140d75ac0 */

undefined8 FUN_140d75ac0(longlong param_1)

{
  FUN_140d892b0(param_1 + 0x18);
  return 1;
}


/* address=140d75af0 name=FUN_140d75af0 */

undefined8 FUN_140d75af0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=140d75b10 name=FUN_140d75b10 */

undefined8 FUN_140d75b10(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=140d75b30 name=FUN_140d75b30 */

void FUN_140d75b30(longlong param_1,undefined8 param_2)

{
  FUN_140d717c0(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


/* address=140d75b70 name=FUN_140d75b70 */

int FUN_140d75b70(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = memcmp(param_1,param_2,param_3);
  }
  return iVar1;
}


/* address=140d75bb0 name=FUN_140d75bb0 */

undefined8 FUN_140d75bb0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d75c50 name=FUN_140d75c50 */

void FUN_140d75c50(undefined8 param_1,undefined8 param_2)

{
  FUN_140d89f90(param_1,param_2);
  return;
}


/* address=140d75c80 name=FUN_140d75c80 */

void FUN_140d75c80(undefined8 param_1)

{
  FUN_140d8a070(param_1);
  return;
}


/* address=140d75ca0 name=FUN_140d75ca0 */

void FUN_140d75ca0(undefined8 param_1)

{
  FUN_140d8a120(param_1);
  return;
}


/* address=140d75cc0 name=FUN_140d75cc0 */

void FUN_140d75cc0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d8a140(param_1,param_2,&LAB_140d75c20,&LAB_140d75bf0);
  return;
}


/* address=140d75d00 name=FUN_140d75d00 */

undefined4 FUN_140d75d00(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_140d8a230(param_1,local_10,param_3,&LAB_140d75c20,&LAB_140d75bf0);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=140d75d70 name=FUN_140d75d70 */

void FUN_140d75d70(undefined8 param_1,undefined8 param_2)

{
  FUN_140d8a330(param_1,param_2,&LAB_140d75c20,&LAB_140d75bf0);
  return;
}


/* address=140d75ea0 name=FUN_140d75ea0 */

void FUN_140d75ea0(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_140d762b0(*(undefined8 *)(param_1 + 8));
  }
  FUN_140d762b0(param_1);
  return;
}


/* address=140d75ee0 name=FUN_140d75ee0 */

undefined8 * FUN_140d75ee0(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int local_58;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  longlong local_20;
  
  if (param_4 != (undefined8 *)0x0) {
    local_30 = param_4;
    local_28 = param_1;
    local_20 = param_2;
    FUN_140d893e0(param_4 + 1);
    local_48 = (undefined8 *)FUN_140d75cc0(*param_4,&local_30);
    if (((param_3 != 0) && (local_48 != (undefined8 *)0x0)) &&
       (*(int *)((longlong)local_48 + 0x1c) == 0)) {
      local_48 = (undefined8 *)0x0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_140d892b0(local_48 + 3);
    }
    FUN_140d89420(param_4 + 1);
    if (local_48 != (undefined8 *)0x0) {
      return local_48;
    }
  }
  puVar1 = (undefined8 *)FUN_140d76180(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_140d75bb0(puVar1,0,0x20);
    if (param_3 == 0) {
      uVar2 = FUN_140d76c50(param_1,param_2);
      puVar1[1] = uVar2;
      if ((param_2 != 0) && (puVar1[1] == 0)) {
        FUN_140d762b0(puVar1);
        return (undefined8 *)0x0;
      }
    }
    else {
      puVar1[1] = param_1;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = 1;
    }
    puVar1[2] = param_2;
    *(undefined4 *)(puVar1 + 3) = 1;
    if (param_4 != (undefined8 *)0x0) {
      *puVar1 = param_4;
      FUN_140d89400(param_4 + 1);
      local_40 = (undefined8 *)FUN_140d75cc0(*param_4,puVar1);
      if (((param_3 != 0) && (local_40 != (undefined8 *)0x0)) &&
         (*(int *)((longlong)local_40 + 0x1c) == 0)) {
        local_40 = (undefined8 *)0x0;
      }
      local_58 = 0;
      if (local_40 == (undefined8 *)0x0) {
        local_38 = 0;
        local_58 = FUN_140d75d00(*param_4,&local_38,puVar1);
      }
      else {
        FUN_140d892b0(local_40 + 3);
      }
      FUN_140d89440(param_4 + 1);
      if (local_58 == 0) {
        FUN_140d75ea0(puVar1);
        puVar1 = local_40;
      }
    }
  }
  return puVar1;
}


/* address=140d76180 name=FUN_140d76180 */

ulonglong * FUN_140d76180(ulonglong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  
  iVar1 = FUN_140d771c0();
  if (iVar1 == 0) {
    if (DAT_1414108f0 == (code *)0x0) {
      if ((param_1 <= param_1 + 8) &&
         (puVar2 = (ulonglong *)_malloc_base(param_1 + 8), puVar2 != (ulonglong *)0x0)) {
        *puVar2 = param_1;
        FUN_140d77180(puVar2,8);
        return puVar2 + 1;
      }
    }
    else {
      if (DAT_1414108f8 == 0) {
        FID_conflict__assert((wchar_t *)s_O_1413e1418,(wchar_t *)s_D_1413e1360,0xea);
      }
      if (DAT_141410900 == 0) {
        FID_conflict__assert((wchar_t *)s_O_1413e1510,(wchar_t *)s_D_1413e1450,0xeb);
      }
      puVar2 = (ulonglong *)(*DAT_1414108f0)(param_1);
      if (puVar2 != (ulonglong *)0x0) {
        return puVar2;
      }
      if (param_1 == 0) {
        return (ulonglong *)0x0;
      }
    }
  }
  FUN_140d186f0(0xe,0,0x41,s_D__a_1_s_target_release_build_bo_1413e1550,0x10b);
  return (ulonglong *)0x0;
}


/* address=140d762b0 name=FUN_140d762b0 */

void FUN_140d762b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    if (DAT_1414108f8 == (code *)0x0) {
      plVar2 = (longlong *)(param_1 + -8);
      FUN_140d771a0(plVar2,8);
      lVar1 = *plVar2;
      FUN_140d76450(plVar2,lVar1 + 8);
      if (DAT_1414108e8 == (code *)0x0) {
        thunk_FUN_140e89c50(plVar2);
      }
      else {
        (*DAT_1414108e8)(plVar2,lVar1 + 8,0);
      }
    }
    else {
      (*DAT_1414108f8)(param_1);
    }
  }
  return;
}


/* address=140d76360 name=FUN_140d76360 */

longlong FUN_140d76360(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong local_20;
  ulonglong local_18;
  
  if (param_1 == 0) {
    lVar1 = FUN_140d76180(param_2);
  }
  else {
    if (DAT_141410900 == (code *)0x0) {
      puVar2 = (ulonglong *)(param_1 + -8);
      FUN_140d771a0(puVar2,8);
      local_20 = *puVar2;
      FUN_140d77180(puVar2,8);
    }
    else {
      local_20 = (*DAT_141410900)(param_1);
    }
    lVar1 = FUN_140d76180(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      local_18 = param_2;
      if (local_20 < param_2) {
        local_18 = local_20;
      }
      FUN_140e99d20(lVar1,param_1,local_18);
      FUN_140d762b0(param_1);
    }
  }
  return lVar1;
}


/* address=140d76450 name=FUN_140d76450 */

void FUN_140d76450(undefined8 param_1,undefined8 param_2)

{
  FUN_140d77260(param_1,param_2);
  return;
}


/* address=140d76480 name=FUN_140d76480 */

byte FUN_140d76480(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte local_28;
  ulonglong local_20;
  
  local_28 = 0;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    local_28 = local_28 | *(byte *)(param_1 + local_20) ^ *(byte *)(param_2 + local_20);
  }
  return local_28;
}


/* address=140d76520 name=FUN_140d76520 */

uint FUN_140d76520(longlong param_1,ulonglong param_2)

{
  uint local_28;
  ulonglong local_20;
  
  local_28 = DAT_1410731b0;
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    local_28 = (local_28 ^ *(byte *)(param_1 + local_20)) * DAT_1410731ac;
  }
  return local_28;
}


/* address=140d765a0 name=FUN_140d765a0 */

void FUN_140d765a0(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_140d76520(param_1,sVar1);
  return;
}


/* address=140d765d0 name=FUN_140d765d0 */

longlong FUN_140d765d0(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  
  if (param_1 == (char *)0x0) {
    lVar2 = 0;
  }
  else {
    sVar1 = strlen(param_1);
    lVar2 = FUN_140d76180(sVar1 + 1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_140d76f50(lVar2,param_1,sVar1 + 1);
    }
  }
  return lVar2;
}


/* address=140d76640 name=FUN_140d76640 */

ulonglong FUN_140d76640(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong local_18;
  
  for (local_18 = 0;
      (uVar1 = param_2, local_18 < param_2 &&
      (uVar1 = local_18, *(char *)(param_1 + local_18) != '\0')); local_18 = local_18 + 1) {
  }
  return uVar1;
}


/* address=140d766a0 name=__ascii_iswalpha */

/* Library Function - Single Match
    __ascii_iswalpha
   
   Library: Visual Studio 2019 Debug */

undefined4 __ascii_iswalpha(int param_1)

{
  undefined4 local_18;
  
  if (((param_1 < 0x61) || (0x7a < param_1)) && ((param_1 < 0x41 || (0x5a < param_1)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d766f0 name=FUN_140d766f0 */

undefined4 FUN_140d766f0(int param_1)

{
  undefined4 local_18;
  
  if ((param_1 < 0x30) || (0x39 < param_1)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d76730 name=FUN_140d76730 */

undefined4 FUN_140d76730(int param_1)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_140d766f0(param_1);
  if (((iVar1 == 0) && ((param_1 < 0x61 || (0x66 < param_1)))) &&
     ((param_1 < 0x41 || (0x46 < param_1)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d76790 name=FUN_140d76790 */

undefined8 FUN_140d76790(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_140d766f0(param_2);
  cVar1 = (char)param_2;
  if (iVar2 == 0) {
    if ((param_2 < 0x61) || (0x66 < param_2)) {
      if ((param_2 < 0x41) || (0x46 < param_2)) {
        uVar3 = 0;
      }
      else {
        *param_1 = cVar1 + -0x37;
        uVar3 = 1;
      }
    }
    else {
      *param_1 = cVar1 + -0x57;
      uVar3 = 1;
    }
  }
  else {
    *param_1 = cVar1 + -0x30;
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140d76820 name=FUN_140d76820 */

undefined4 FUN_140d76820(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = __ascii_iswalpha(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_140d766f0(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}


/* address=140d76870 name=__ascii_tolower */

/* Library Function - Single Match
    __ascii_tolower
   
   Library: Visual Studio 2019 Debug */

int __ascii_tolower(int param_1)

{
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* address=140d768a0 name=FUN_140d768a0 */

undefined4 FUN_140d768a0(int param_1)

{
  undefined4 local_18;
  
  if ((((param_1 == 9) || (param_1 == 10)) || (param_1 == 0xb)) ||
     (((param_1 == 0xc || (param_1 == 0xd)) || (param_1 == 0x20)))) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=140d768f0 name=FUN_140d768f0 */

undefined8 FUN_140d768f0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = __ascii_tolower((int)*(char *)(param_1 + local_10));
    iVar2 = __ascii_tolower((int)*(char *)(param_2 + local_10));
    if (iVar1 < iVar2) {
      return 0xffffffff;
    }
    if (iVar2 < iVar1) break;
    if (iVar1 == 0) {
      return 0;
    }
    local_10 = local_10 + 1;
  }
  return 1;
}


/* address=140d76990 name=FUN_140d76990 */

undefined8 FUN_140d76990(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong local_10;
  
  local_10 = 0;
  while( true ) {
    if (param_3 <= local_10) {
      return 0;
    }
    iVar1 = __ascii_tolower((int)*(char *)(param_1 + local_10));
    iVar2 = __ascii_tolower((int)*(char *)(param_2 + local_10));
    if (iVar1 < iVar2) {
      return 0xffffffff;
    }
    if (iVar2 < iVar1) {
      return 1;
    }
    if (iVar1 == 0) break;
    local_10 = local_10 + 1;
  }
  return 0;
}


/* address=140d76a50 name=_snprintf */

/* Library Function - Single Match
    _snprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  iVar1 = FUN_140d76ab0(_Dest,_Count,_Format,&local_res20);
  return iVar1;
}


/* address=140d76ab0 name=FUN_140d76ab0 */

void FUN_140d76ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d771e0(param_1,param_2,param_3,param_4);
  return;
}


/* address=140d76af0 name=FUN_140d76af0 */

void FUN_140d76af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d76fa0(param_1,param_2,param_3,0);
  return;
}


/* address=140d76b90 name=FUN_140d76b90 */

longlong FUN_140d76b90(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140d76640(param_1,param_2);
  if (uVar1 + 1 < uVar1) {
    FUN_140d186f0(0xe,0,0x41,s_D__a_1_s_target_release_build_bo_1413e15b0,0x22f);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140d76180(uVar1 + 1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_140d76f50(lVar2,param_1,uVar1);
      *(undefined *)(lVar2 + uVar1) = 0;
    }
  }
  return lVar2;
}


/* address=140d76c50 name=FUN_140d76c50 */

longlong FUN_140d76c50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140d76180(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_140d76f50(lVar1,param_1,param_2);
    }
  }
  return lVar1;
}


/* address=140d76cb0 name=FUN_140d76cb0 */

longlong FUN_140d76cb0(char *param_1,char *param_2,ulonglong param_3)

{
  size_t sVar1;
  char *local_res8;
  char *local_res10;
  ulonglong local_res18;
  longlong local_18;
  
  local_18 = 0;
  local_res8 = param_1;
  local_res18 = param_3;
  for (local_res10 = param_2; (1 < local_res18 && (*local_res10 != '\0'));
      local_res10 = local_res10 + 1) {
    *local_res8 = *local_res10;
    local_res8 = local_res8 + 1;
    local_18 = local_18 + 1;
    local_res18 = local_res18 - 1;
  }
  if (local_res18 != 0) {
    *local_res8 = '\0';
  }
  sVar1 = strlen(local_res10);
  return local_18 + sVar1;
}


/* address=140d76d60 name=FUN_140d76d60 */

longlong FUN_140d76d60(char *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char *local_res8;
  longlong local_res18;
  longlong local_18;
  
  local_18 = 0;
  local_res18 = param_3;
  for (local_res8 = param_1; (local_res18 != 0 && (*local_res8 != '\0'));
      local_res8 = local_res8 + 1) {
    local_18 = local_18 + 1;
    local_res18 = local_res18 + -1;
  }
  lVar1 = FUN_140d76cb0(local_res8,param_2,local_res18);
  return local_18 + lVar1;
}


/* address=140d76e90 name=FUN_140d76e90 */

void FUN_140d76e90(undefined8 param_1)

{
  FUN_140d762b0(param_1);
  return;
}


/* address=140d76f50 name=FUN_140d76f50 */

undefined8 FUN_140d76f50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d76fa0 name=FUN_140d76fa0 */

uint FUN_140d76fa0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint local_68;
  longlong local_60;
  ulonglong local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  
  if (param_4 == 0) {
    local_50 = FUN_140d76180;
    local_48 = FUN_140d762b0;
    local_40 = FUN_140d76360;
  }
  else {
    local_50 = _malloc_base;
    local_48 = thunk_FUN_140e89c50;
    local_40 = _realloc_base;
  }
  local_58 = 0x40;
  lVar1 = (*local_50)(0x40);
  if ((lVar1 != 0) && (local_68 = FUN_140d771e0(lVar1,0x40,param_2,param_3), -1 < (int)local_68)) {
    local_60 = lVar1;
    if (0x3f < local_68) {
      local_58 = (longlong)(int)local_68 + 1;
      local_60 = (*local_40)(lVar1,local_58);
      if (local_60 == 0) goto LAB_140d77142;
      local_68 = FUN_140d771e0(local_60,local_58,param_2,param_3);
    }
    lVar1 = local_60;
    if ((-1 < (int)local_68) && ((ulonglong)(longlong)(int)local_68 < local_58)) {
      *param_1 = local_60;
      return local_68;
    }
  }
LAB_140d77142:
  local_60 = lVar1;
  (*local_48)(local_60);
  *param_1 = 0;
  puVar2 = (undefined4 *)FUN_140e7ebec();
  *puVar2 = 0xc;
  return 0xffffffff;
}


/* address=140d77180 name=FUN_140d77180 */

void FUN_140d77180(void)

{
  return;
}


/* address=140d771a0 name=FUN_140d771a0 */

void FUN_140d771a0(void)

{
  return;
}


/* address=140d771c0 name=FUN_140d771c0 */

undefined8 FUN_140d771c0(void)

{
  return 0;
}


/* address=140d771d0 name=FUN_140d771d0 */

undefined * FUN_140d771d0(void)

{
  return &DAT_141410908;
}


/* address=140d771e0 name=FUN_140d771e0 */

int FUN_140d771e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int local_14;
  
  puVar1 = (ulonglong *)FUN_140d771d0();
  local_14 = FUN_140e73750(*puVar1 | 2,param_1,param_2,param_3,0,param_4);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}


/* address=140d77260 name=FUN_140d77260 */

undefined * FUN_140d77260(undefined *param_1,longlong param_2)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}


/* address=140d77290 name=FUN_140d77290 */

void FUN_140d77290(void)

{
  return;
}


/* address=140d772e0 name=FUN_140d772e0 */

char * FUN_140d772e0(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    pcVar1 = s_BoringSSL_1413e1610;
  }
  else if (param_1 == 1) {
    pcVar1 = s_compiler__n_a_1413e1620;
  }
  else if (param_1 == 2) {
    pcVar1 = s_built_on__n_a_1413e1630;
  }
  else if (param_1 == 3) {
    pcVar1 = s_platform__n_a_1413e1640;
  }
  else if (param_1 == 4) {
    pcVar1 = s_OPENSSLDIR__n_a_1413e1650;
  }
  else {
    pcVar1 = s_not_available_1413e1660;
  }
  return pcVar1;
}


/* address=140d77380 name=FUN_140d77380 */

undefined8 FUN_140d77380(void)

{
  return 0x1010107f;
}


/* address=140d77420 name=FUN_140d77420 */

void FUN_140d77420(void)

{
  return;
}


/* address=140d77440 name=FUN_140d77440 */

undefined FUN_140d77440(undefined8 *param_1,undefined2 param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_140d781a0(*param_1,(longlong)param_1 + 0x1a,param_2);
  return uVar1;
}


/* address=140d77480 name=FUN_140d77480 */

undefined FUN_140d77480(undefined8 *param_1,undefined2 param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_140d78210(*param_1,param_1 + 3,param_2);
  return uVar1;
}


/* address=140d77500 name=FUN_140d77500 */

undefined FUN_140d77500(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined uVar2;
  longlong lVar3;
  
  cVar1 = FUN_140d11eb0(param_1 + 1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_140d11ad0(param_1 + 1);
    uVar2 = FUN_140d781a0(*param_1,lVar3 + 10,param_2);
  }
  return uVar2;
}


/* address=140d77570 name=FUN_140d77570 */

undefined FUN_140d77570(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined uVar2;
  longlong lVar3;
  
  cVar1 = FUN_140d11eb0(param_1 + 1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_140d11ad0(param_1 + 1);
    uVar2 = FUN_140d78210(*param_1,lVar3 + 8,param_2);
  }
  return uVar2;
}


/* address=140d77680 name=FUN_140d77680 */

undefined2 FUN_140d77680(undefined8 param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_140d78280(param_1);
  uVar1 = FUN_140d780b0(uVar1);
  return uVar1;
}


/* address=140d778e0 name=FUN_140d778e0 */

undefined8 FUN_140d778e0(ushort *param_1,ushort param_2)

{
  if (param_2 < 0x305) {
    if ((((param_2 == 0x304) || (param_2 == 0x301)) || (param_2 == 0x302)) || (param_2 == 0x303)) {
      *param_1 = param_2;
      return 1;
    }
  }
  else {
    if (param_2 == 0xfefd) {
      *param_1 = 0x303;
      return 0x301;
    }
    if (param_2 == 0xfeff) {
      *param_1 = 0x302;
      return 0x301;
    }
  }
  return 0;
}


/* address=140d77980 name=FUN_140d77980 */

undefined8 FUN_140d77980(longlong *param_1,ushort *param_2,ushort *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ushort local_24 [2];
  ushort local_20 [2];
  uint local_1c;
  ulonglong local_18;
  
  local_1c = *(uint *)(*param_1 + 0x80);
  iVar3 = FUN_140d08380(*param_1);
  if ((iVar3 != 0) &&
     (uVar4 = local_1c & 0xefffffff, uVar5 = local_1c & 0x4000000, local_1c = uVar4, uVar5 != 0)) {
    local_1c = uVar4 | 0x10000000;
  }
  cVar2 = FUN_140d778e0(local_24,*(undefined2 *)(param_1[1] + 10));
  if ((cVar2 == '\0') ||
     (cVar2 = FUN_140d778e0(local_20,*(undefined2 *)(param_1[1] + 8)), cVar2 == '\0')) {
    FUN_140d186f0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                  ,0xba);
    uVar6 = 0;
  }
  else {
    if ((*(longlong *)(*param_1 + 0x98) != 0) && (local_24[0] < 0x304)) {
      local_24[0] = 0x304;
    }
    bVar1 = false;
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      if (local_24[0] <= *(ushort *)(&DAT_1410732d0 + local_18 * 8)) {
        if (local_20[0] < *(ushort *)(&DAT_1410732d0 + local_18 * 8)) break;
        if ((local_1c & *(uint *)(&DAT_1410732d4 + local_18 * 8)) == 0) {
          if (!bVar1) {
            bVar1 = true;
            local_24[0] = *(ushort *)(&DAT_1410732d0 + local_18 * 8);
          }
        }
        else if (bVar1) {
          local_20[0] = *(ushort *)("ions.cc" + local_18 * 8);
          break;
        }
      }
    }
    if (bVar1) {
      *param_2 = local_24[0];
      *param_3 = local_20[0];
      uVar6 = 1;
    }
    else {
      FUN_140d186f0(0x10,0,0x118,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                    ,0xe9);
      uVar6 = 0;
    }
  }
  return uVar6;
}


/* address=140d77b90 name=FUN_140d77b90 */

ulonglong FUN_140d77b90(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  ulonglong uVar2;
  ushort local_18 [4];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)*param_1;
  cVar1 = FUN_140d77c10(*local_10,param_2);
  uVar2 = 0;
  if (cVar1 != '\0') {
    cVar1 = FUN_140d778e0(local_18,param_2);
    uVar2 = 0;
    if (((cVar1 != '\0') &&
        (uVar2 = (ulonglong)*(ushort *)((longlong)param_1 + 0x1c),
        *(ushort *)((longlong)param_1 + 0x1c) <= local_18[0])) &&
       (uVar2 = (ulonglong)local_18[0], local_18[0] <= *(ushort *)((longlong)param_1 + 0x1e))) {
      return CONCAT71((uint7)(byte)(local_18[0] >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


/* address=140d77c10 name=FUN_140d77c10 */

ulonglong FUN_140d77c10(undefined8 param_1,short param_2)

{
  short *psVar1;
  short *local_30;
  undefined local_18 [24];
  
  FUN_140d77fb0(local_18,param_1);
  local_30 = (short *)FUN_140d11ad0(local_18);
  psVar1 = (short *)FUN_140d782f0(local_18);
  while( true ) {
    if (local_30 == psVar1) {
      return (ulonglong)psVar1 & 0xffffffffffffff00;
    }
    if (*local_30 == param_2) break;
    local_30 = local_30 + 1;
  }
  return CONCAT71((uint7)(byte)((ushort)*local_30 >> 8),1);
}


/* address=140d77ca0 name=FUN_140d77ca0 */

undefined8 FUN_140d77ca0(undefined8 *param_1,undefined8 param_2,ushort param_3)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  ushort local_34 [2];
  undefined2 *local_30;
  undefined *local_28;
  undefined2 *local_20;
  undefined local_18 [24];
  
  FUN_140d77fb0(local_18,*(undefined8 *)*param_1);
  local_28 = local_18;
  local_30 = (undefined2 *)FUN_140d11ad0(local_28);
  local_20 = (undefined2 *)FUN_140d782f0(local_28);
  while( true ) {
    if (local_30 == local_20) {
      return 1;
    }
    uVar1 = *local_30;
    cVar2 = FUN_140d77b90(param_1,uVar1);
    if ((((cVar2 != '\0') && (cVar2 = FUN_140d778e0(local_34,uVar1), cVar2 != '\0')) &&
        (param_3 <= local_34[0])) && (iVar3 = FUN_140d744b0(param_2,uVar1), iVar3 == 0)) break;
    local_30 = local_30 + 1;
  }
  return 0;
}


/* address=140d77d80 name=FUN_140d77d80 */

undefined8 FUN_140d77d80(undefined8 *param_1,undefined *param_2,short *param_3,undefined *param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  short local_54;
  short *local_50;
  undefined local_38 [16];
  undefined local_28 [24];
  
  FUN_140d77fb0(local_28,*(undefined8 *)*param_1);
  local_50 = (short *)FUN_140d11ad0(local_28);
  psVar4 = (short *)FUN_140d782f0(local_28);
  do {
    if (local_50 == psVar4) {
      FUN_140d186f0(0x10,0,0xf0,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                    ,0x144);
      *param_2 = 0x46;
      return 0;
    }
    sVar1 = *local_50;
    cVar2 = FUN_140d77b90(param_1);
    if ((cVar2 != '\0') &&
       ((sVar1 != 0x304 || ((*(byte *)((longlong)param_1 + 0x622) >> 6 & 1) == 0)))) {
      puVar6 = param_4;
      puVar7 = local_38;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      while (lVar5 = FUN_140d71850(local_38), lVar5 != 0) {
        iVar3 = FUN_140d71aa0(local_38);
        if (iVar3 == 0) {
          FUN_140d186f0(0x10,0,0x89,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                        ,0x138);
          *param_2 = 0x32;
          return 0;
        }
        if (local_54 == sVar1) {
          *param_3 = sVar1;
          return 1;
        }
      }
    }
    local_50 = local_50 + 1;
  } while( true );
}


/* address=140d77f20 name=FUN_140d77f20 */

undefined2 FUN_140d77f20(longlong param_1)

{
  char cVar1;
  undefined2 local_18 [12];
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 1 & 1) == 0) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0xfb);
  }
  cVar1 = FUN_140d778e0(local_18,*(undefined2 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    FID_conflict__assert(L"0",(wchar_t *)"D",0xff);
    local_18[0] = 0;
  }
  return local_18[0];
}


/* address=140d77fb0 name=FUN_140d77fb0 */

undefined * FUN_140d77fb0(undefined *param_1,char *param_2)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined local_38 [16];
  undefined local_28 [24];
  
  if (*param_2 == '\0') {
    local_48 = (undefined *)FUN_140d78340(local_28,&DAT_1410731c0);
  }
  else {
    local_48 = (undefined *)FUN_140d78310(local_38,&DAT_1410731c8);
  }
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *local_48;
    local_48 = local_48 + 1;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


/* address=140d78030 name=FUN_140d78030 */

char * FUN_140d78030(short param_1)

{
  short *local_28;
  
  local_28 = &DAT_1410731d0;
  while( true ) {
    if (local_28 == (short *)"TLSv1.3") {
      return "unknown";
    }
    if (*local_28 == param_1) break;
    local_28 = local_28 + 8;
  }
  return *(char **)(local_28 + 4);
}


/* address=140d780b0 name=FUN_140d780b0 */

undefined2 FUN_140d780b0(undefined2 param_1)

{
  return param_1;
}


/* address=140d780d0 name=FUN_140d780d0 */

bool FUN_140d780d0(undefined2 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined local_18 [24];
  
  cVar1 = FUN_140d778e0(local_18,param_2);
  if (cVar1 != '\0') {
    *param_1 = param_2;
  }
  return cVar1 != '\0';
}


/* address=140d78120 name=FUN_140d78120 */

undefined8 FUN_140d78120(undefined8 param_1,undefined2 *param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 local_res18 [8];
  
  local_res18[0] = param_3;
  cVar1 = FUN_140d780d0(local_res18,param_3);
  if ((cVar1 != '\0') && (cVar1 = FUN_140d77c10(param_1,local_res18[0]), cVar1 != '\0')) {
    *param_2 = local_res18[0];
    return 1;
  }
  FUN_140d186f0(0x10,0,0xea,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_vers"
                ,0x81);
  return 0;
}


/* address=140d781a0 name=FUN_140d781a0 */

undefined8 FUN_140d781a0(char *param_1,undefined2 *param_2,short param_3)

{
  undefined8 uVar1;
  undefined2 local_18;
  
  if (param_3 == 0) {
    if (*param_1 == '\0') {
      local_18 = 0x301;
    }
    else {
      local_18 = 0xfeff;
    }
    *param_2 = local_18;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_140d78120(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140d78210 name=FUN_140d78210 */

undefined8 FUN_140d78210(char *param_1,undefined2 *param_2,short param_3)

{
  undefined8 uVar1;
  undefined2 local_18;
  
  if (param_3 == 0) {
    if (*param_1 == '\0') {
      local_18 = 0x304;
    }
    else {
      local_18 = 0xfefd;
    }
    *param_2 = local_18;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_140d78120(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140d78280 name=FUN_140d78280 */

undefined2 FUN_140d78280(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_140d0d000(param_1);
  if ((iVar2 == 0) || ((*(byte *)(param_1 + 0xa4) & 1) != 0)) {
    uVar1 = *(undefined2 *)(param_1 + 0x10);
  }
  else {
    lVar3 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x118);
    lVar3 = FUN_140d11ad0(lVar3 + 0x5e8);
    uVar1 = *(undefined2 *)(lVar3 + 4);
  }
  return uVar1;
}


/* address=140d782f0 name=FUN_140d782f0 */

longlong FUN_140d782f0(longlong *param_1)

{
  return *param_1 + param_1[1] * 2;
}


/* address=140d78310 name=FUN_140d78310 */

undefined8 FUN_140d78310(undefined8 param_1,undefined8 param_2)

{
  FUN_140d11db0(param_1,param_2,2);
  return param_1;
}


/* address=140d78340 name=FUN_140d78340 */

undefined8 FUN_140d78340(undefined8 param_1,undefined8 param_2)

{
  FUN_140d11db0(param_1,param_2,4);
  return param_1;
}


/* address=140d78370 name=FUN_140d78370 */

longlong FUN_140d78370(longlong *param_1,ulonglong param_2)

{
  if ((ulonglong)param_1[1] <= param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *param_1 + param_2 * 8;
}


/* address=140d783b0 name=FUN_140d783b0 */

undefined8 FUN_140d783b0(longlong *param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4)

{
  __uint64 *p_Var1;
  __uint64 local_res20;
  __uint64 local_18 [3];
  
  local_res20 = param_4;
  if ((ulonglong)param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_18[0] = param_1[1] - param_3;
  p_Var1 = std::_Min_value<unsigned___int64>(local_18,&local_res20);
  FUN_140d11db0(param_2,*param_1 + param_3 * 8,*p_Var1);
  return param_2;
}


/* address=140d78430 name=FUN_140d78430 */

void FUN_140d78430(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d11ad0(param_1 + 0xe8);
  FUN_140d7ae60(uVar1,param_2,param_3);
  return;
}


/* address=140d78630 name=FUN_140d78630 */

undefined FUN_140d78630(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FUN_140d11eb0(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_140d75820(param_2,param_3,0);
    lVar4 = FUN_140d11ad0(param_1 + 8);
    lVar4 = FUN_140d11ad0(lVar4 + 0x20);
    FUN_140d7b9e0(lVar4 + 0x68,uVar3);
    lVar4 = FUN_140d11ad0(param_1 + 8);
    lVar4 = FUN_140d11ad0(lVar4 + 0x20);
    uVar2 = FUN_140d13940(lVar4 + 0x68,0);
  }
  return uVar2;
}


/* address=140d78c00 name=FUN_140d78c00 */

int FUN_140d78c00(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = memcmp(param_1,param_2,param_3);
  }
  return iVar1;
}


/* address=140d78c40 name=FUN_140d78c40 */

undefined8 FUN_140d78c40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d78c90 name=FUN_140d78c90 */

undefined FUN_140d78c90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140d11ad0(*(longlong *)(param_1 + 8) + 0x20);
  cVar1 = FUN_140d13940(lVar2 + 8,0);
  if (cVar1 != '\0') {
    lVar2 = FUN_140d11ad0(*(longlong *)(param_1 + 8) + 0x20);
    uVar3 = FUN_140d11ad0(lVar2 + 8);
    lVar2 = FUN_140d11f20(uVar3,0);
    if ((lVar2 != 0) && (cVar1 = FUN_140d7d170(param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}


/* address=140d78d30 name=FUN_140d78d30 */

ulonglong FUN_140d78d30(undefined *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined local_70 [8];
  undefined local_68 [8];
  undefined local_60 [8];
  undefined local_58 [16];
  undefined local_48 [8];
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined local_28 [16];
  undefined local_18 [24];
  
  FUN_140d12960(param_2,0);
  FUN_140d11c50(param_3,0);
  iVar2 = FUN_140d71e30(param_5,local_28);
  if (iVar2 == 0) {
    *param_1 = 0x32;
    uVar3 = FUN_140d186f0(0x10,0,0x89,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x165);
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    lVar4 = FUN_140d71850(local_28);
    if (lVar4 == 0) {
      uVar3 = 1;
    }
    else {
      uVar5 = FUN_140d11e80();
      FUN_140d11ca0(local_70,uVar5);
      cVar1 = FUN_140d11eb0(local_70);
      if (cVar1 == '\0') {
        *param_1 = 0x50;
        FUN_140d12920(local_70);
        uVar3 = 0;
      }
      else {
        FUN_140d139c0(local_68);
        while (lVar4 = FUN_140d71850(local_28), lVar4 != 0) {
          iVar2 = FUN_140d71e30(local_28,local_58);
          if ((iVar2 == 0) || (lVar4 = FUN_140d71850(local_58), lVar4 == 0)) {
            *param_1 = 0x32;
            FUN_140d186f0(0x10,0,0x7f,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x179);
            FUN_140d11bc0(local_68);
            FUN_140d12920(local_70);
            return 0;
          }
          uVar5 = FUN_140d11ad0(local_70);
          lVar4 = FUN_140d11f00(uVar5);
          if (lVar4 == 0) {
            uVar5 = FUN_140d79540(local_48,local_58);
            FUN_140d13c70(local_68,uVar5);
            FUN_140d11bc0(local_48);
            cVar1 = FUN_140d11eb0(local_68);
            if (cVar1 == '\0') {
              *param_1 = 0x32;
              FUN_140d11bc0(local_68);
              FUN_140d12920(local_70);
              return 0;
            }
            if (param_4 != 0) {
              local_40 = FUN_140d71850(local_58);
              uVar5 = FUN_140d71830(local_58);
              FUN_140d1b460(uVar5,local_40,param_4);
            }
          }
          uVar5 = FUN_140d75910(local_58,param_6);
          FUN_140d11ca0(local_60,uVar5);
          cVar1 = FUN_140d11eb0(local_60);
          if (cVar1 == '\0') {
LAB_140d78fe6:
            *param_1 = 0x50;
            FUN_140d7b9a0(local_60);
            FUN_140d11bc0(local_68);
            FUN_140d12920(local_70);
            return 0;
          }
          local_38 = local_18;
          uVar5 = FUN_140d11b30(local_60);
          local_30 = FUN_140d11cd0(local_38,uVar5);
          uVar5 = FUN_140d11ad0(local_70);
          cVar1 = FUN_140d7bc90(uVar5,local_30);
          if (cVar1 == '\0') goto LAB_140d78fe6;
          FUN_140d7b9a0(local_60);
        }
        uVar5 = FUN_140d11b30(local_70);
        FUN_140d7bd00(param_2,uVar5);
        uVar5 = FUN_140d11b30(local_68);
        FUN_140d13c70(param_3,uVar5);
        FUN_140d11bc0(local_68);
        FUN_140d12920(local_70);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=140d79090 name=FUN_140d79090 */

ulonglong FUN_140d79090(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong local_90;
  undefined local_70 [48];
  undefined local_40 [64];
  
  cVar1 = FUN_140d78c90(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_140d74510(param_2,0);
    uVar3 = (ulonglong)(iVar2 != 0);
  }
  else {
    iVar2 = FUN_140d741a0(param_2,local_70);
    if (iVar2 == 0) {
      uVar3 = FUN_140d186f0(0x10,0,0x44,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                            ,0x19f);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      lVar4 = FUN_140d11ad0(*(longlong *)(param_1 + 8) + 0x20);
      uVar5 = FUN_140d11ad0(lVar4 + 8);
      for (local_90 = 0; uVar3 = FUN_140d11f00(uVar5), local_90 < uVar3; local_90 = local_90 + 1) {
        uVar6 = FUN_140d11f20(uVar5,local_90);
        iVar2 = FUN_140d741a0(local_70,local_40);
        if (iVar2 == 0) {
LAB_140d791df:
          uVar3 = FUN_140d186f0(0x10,0,0x44,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                                ,0x1ab);
          return uVar3 & 0xffffffffffffff00;
        }
        uVar7 = FUN_140d75b10(uVar6);
        uVar6 = FUN_140d75af0(uVar6);
        iVar2 = FUN_140d74290(local_40,uVar6,uVar7);
        if ((iVar2 == 0) || (iVar2 = FUN_140d73c90(local_70), iVar2 == 0)) goto LAB_140d791df;
      }
      iVar2 = FUN_140d73c90(param_2);
      uVar3 = (ulonglong)(iVar2 != 0);
    }
  }
  return uVar3;
}


/* address=140d79240 name=FUN_140d79240 */

undefined8 FUN_140d79240(undefined *param_1,undefined4 param_2)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  int local_a8 [2];
  wchar_t *local_a0 [2];
  wchar_t local_90 [8];
  wchar_t *local_80 [2];
  wchar_t *local_70 [2];
  wchar_t *local_60 [2];
  wchar_t *local_50 [2];
  undefined local_40 [16];
  wchar_t local_30 [16];
  
  puVar6 = local_40;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar1 = FUN_140d7b310(local_40);
  if ((((cVar1 == '\0') || (uVar2 = wcstoul(local_90,(wchar_t **)0x0,0x20000010), uVar2 == 0)) ||
      (iVar3 = FUN_140d72500(local_90,0,0,0x80000001), iVar3 == 0)) ||
     ((iVar3 = FUN_140d72500(local_90,0,0,0x80000002), iVar3 == 0 ||
      (iVar3 = FUN_140d72500(local_90,local_30,local_a8,0xa0000003), iVar3 == 0)))) {
    FUN_140d186f0(0x10,0,0x110,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x22d);
    uVar4 = 0;
  }
  else if (local_a8[0] == 0) {
    uVar4 = 1;
  }
  else {
    uVar2 = wcstoul(local_30,local_80,0x20000010);
    if (uVar2 == 0) {
      FUN_140d186f0(0x10,0,0x110,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x237);
      uVar4 = 0;
    }
    else {
      do {
        do {
          lVar5 = FUN_140d71850(local_80);
          if (lVar5 == 0) {
            return 1;
          }
          uVar2 = wcstoul((wchar_t *)local_80,local_a0,0x20000010);
          if ((((uVar2 == 0) || (uVar2 = wcstoul((wchar_t *)local_a0,local_70,6), uVar2 == 0)) ||
              ((iVar3 = FUN_140d72070(local_a0), iVar3 != 0 &&
               (uVar2 = wcstoul((wchar_t *)local_a0,(wchar_t **)0x0,1), uVar2 == 0)))) ||
             ((uVar2 = wcstoul((wchar_t *)local_a0,local_60,4), uVar2 == 0 ||
              (lVar5 = FUN_140d71850(local_a0), lVar5 != 0)))) {
            FUN_140d186f0(0x10,0,0x110,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x243);
            return 0;
          }
          lVar5 = FUN_140d71850(local_70);
        } while (lVar5 != 3);
        uVar4 = FUN_140d71830(local_70);
        iVar3 = FUN_140d78c00(uVar4,&DAT_141074adc,3);
      } while (iVar3 != 0);
      uVar2 = wcstoul((wchar_t *)local_60,local_50,3);
      if ((uVar2 == 0) || (lVar5 = FUN_140d71850(local_60), lVar5 != 0)) {
        FUN_140d186f0(0x10,0,0x110,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0x251);
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_140d727d0(local_50);
        if (iVar3 == 0) {
          FUN_140d186f0(0x10,0,0x110,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,600);
          uVar4 = 0;
        }
        else {
          iVar3 = FUN_140d72870(local_50,param_2);
          if (iVar3 == 0) {
            FUN_140d186f0(0x10,0,0x12e,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x25d);
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
    }
  }
  return uVar4;
}


/* address=140d79540 name=FUN_140d79540 */

undefined8 FUN_140d79540(undefined8 param_1,undefined *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_48 [8];
  undefined local_40 [16];
  undefined local_30 [32];
  
  puVar4 = local_40;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  cVar1 = FUN_140d7b310(local_40,local_30);
  if (cVar1 == '\0') {
    FUN_140d186f0(0x10,0,0x110,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x1e3);
    FUN_140d7bba0(param_1,0);
  }
  else {
    uVar2 = FUN_140dd9f70(local_30);
    uVar2 = FUN_140d11ca0(local_48,uVar2);
    FUN_140d11cd0(param_1,uVar2);
    FUN_140d11bc0(local_48);
  }
  return param_1;
}


/* address=140d79600 name=FUN_140d79600 */

undefined8 FUN_140d79600(undefined8 param_1,longlong param_2,undefined *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined local_68 [8];
  undefined local_60 [8];
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  undefined local_28 [8];
  undefined local_20 [32];
  
  lVar3 = FUN_140d11ad0(param_2 + 0x68);
  local_58 = *(undefined8 *)(lVar3 + 0x200);
  uVar4 = FUN_140d11e80();
  FUN_140d11ca0(local_68,uVar4);
  cVar1 = FUN_140d11eb0(local_68);
  if (cVar1 == '\0') {
    *param_3 = 0x50;
    FUN_140d7bba0(param_1,0);
    FUN_140d12920(local_68);
  }
  else {
    iVar2 = FUN_140d71e00(param_4,local_38);
    if (iVar2 == 0) {
      *param_3 = 0x32;
      FUN_140d186f0(0x10,0,0xa2,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x276);
      FUN_140d7bba0(param_1,0);
      FUN_140d12920(local_68);
    }
    else {
      while (lVar3 = FUN_140d71850(local_38), lVar3 != 0) {
        iVar2 = FUN_140d71e00(local_38,local_20);
        if (iVar2 == 0) {
          *param_3 = 0x32;
          FUN_140d186f0(0x10,0,0x7b,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x27e);
          FUN_140d7bba0(param_1,0);
          FUN_140d12920(local_68);
          return param_1;
        }
        uVar4 = FUN_140d75910(local_20,local_58);
        FUN_140d11ca0(local_60,uVar4);
        cVar1 = FUN_140d11eb0(local_60);
        if (cVar1 == '\0') {
LAB_140d797e5:
          *param_3 = 0x50;
          FUN_140d7bba0(param_1,0);
          FUN_140d7b9a0(local_60);
          FUN_140d12920(local_68);
          return param_1;
        }
        local_50 = local_28;
        uVar4 = FUN_140d11b30(local_60);
        local_48 = FUN_140d11cd0(local_50,uVar4);
        uVar4 = FUN_140d11ad0(local_68);
        cVar1 = FUN_140d7bc90(uVar4);
        if (cVar1 == '\0') goto LAB_140d797e5;
        FUN_140d7b9a0(local_60);
      }
      local_40 = FUN_140d11ad0(local_68);
      lVar3 = FUN_140d11ad0(param_2 + 0x68);
      cVar1 = (***(code ***)(lVar3 + 8))(local_40);
      if (cVar1 == '\0') {
        *param_3 = 0x32;
        FUN_140d186f0(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0x28d);
        FUN_140d7bba0(param_1,0);
        FUN_140d12920(local_68);
      }
      else {
        FUN_140d11cd0(param_1,local_68);
        FUN_140d12920(local_68);
      }
    }
  }
  return param_1;
}


/* address=140d798f0 name=FUN_140d798f0 */

bool FUN_140d798f0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_140d11ad0(param_1 + 10);
  if (lVar1 == 0) {
    lVar1 = FUN_140d11ad0(*param_1 + 0x68);
    lVar1 = FUN_140d11ad0(lVar1 + 200);
  }
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_140d11f00(lVar1);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}


/* address=140d79980 name=FUN_140d79980 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_140d79980(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined local_b0 [16];
  undefined local_a0 [24];
  undefined local_88 [16];
  undefined local_78 [48];
  undefined local_48 [56];
  
  uVar3 = FUN_140d74170(param_2,local_78);
  if ((int)uVar3 == 0) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    local_d0 = FUN_140d11ad0(param_1[1] + 0x50);
    if (local_d0 == 0) {
      lVar4 = FUN_140d11ad0(*param_1 + 0x68);
      local_d0 = FUN_140d11ad0(lVar4 + 200);
    }
    if (local_d0 == 0) {
      iVar2 = FUN_140d73c90(param_2);
      uVar3 = (ulonglong)(iVar2 != 0);
    }
    else {
      local_c8 = &local_d0;
      FUN_140d7bd60(local_b0,local_d0);
      FUN_140d7be90(local_a0,*local_c8);
      while( true ) {
        puVar6 = local_a0;
        puVar7 = local_88;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar1 = FUN_140d7bde0(local_b0,local_88);
        if (cVar1 == '\0') {
          iVar2 = FUN_140d73c90(param_2);
          return (ulonglong)(iVar2 != 0);
        }
        local_c0 = FUN_140d7be40(local_b0);
        uVar3 = FUN_140d74170(local_78,local_48);
        if ((int)uVar3 == 0) break;
        local_b8 = FUN_140d75b10(local_c0);
        uVar5 = FUN_140d75af0(local_c0);
        uVar3 = FUN_140d74290(local_48,uVar5,local_b8);
        if ((int)uVar3 == 0) break;
        FUN_140d7be70(local_b0);
      }
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
  }
  return uVar3;
}


/* address=140d79b40 name=FUN_140d79b40 */

undefined8 FUN_140d79b40(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined2 local_28 [4];
  undefined8 local_20;
  longlong local_18;
  
  uVar2 = FUN_140d77f20(*param_1);
  if (0x303 < uVar2) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x2ba);
  }
  local_18 = param_1[0xc0];
  uVar3 = FUN_140d8c640(param_2);
  if ((*(uint *)(local_18 + 0x18) & uVar3) != 0) {
    iVar4 = FUN_140d70d60(param_2);
    if (iVar4 == 0x198) {
      local_20 = FUN_140d71030(param_2);
      uVar6 = FUN_140d575e0(local_20);
      uVar5 = FUN_140d55920(uVar6);
      cVar1 = FUN_140de8890(local_28,uVar5);
      if (((cVar1 == '\0') || (cVar1 = FUN_140dab930(param_1,local_28[0]), cVar1 == '\0')) ||
         (iVar4 = FUN_140d57980(local_20), iVar4 != 4)) {
        FUN_140d186f0(0x10,0,0x6b,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0x2ca);
        return 0;
      }
    }
    return 1;
  }
  FUN_140d186f0(0x10,0,0xf1,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                ,0x2be);
  return 0;
}


/* address=140d79c80 name=FUN_140d79c80 */

undefined8 FUN_140d79c80(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined local_20 [32];
  
  lVar2 = *param_1;
  cVar1 = FUN_140d78c90(param_1);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    lVar2 = FUN_140d11ad0(lVar2 + 0x68);
    cVar1 = (**(code **)(*(longlong *)(lVar2 + 8) + 0x70))(param_1);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_140d11ad0(param_1[1] + 0x20);
      uVar3 = FUN_140d11ad0(lVar2 + 8);
      uVar3 = FUN_140d11f20(uVar3,0);
      FUN_140d75b30(uVar3,local_20);
      cVar1 = FUN_140d7a210(param_1);
      if (cVar1 == '\0') {
        uVar3 = FUN_140d79540(local_28,local_20);
        FUN_140d13c70(param_1 + 0xba,uVar3);
        FUN_140d11bc0(local_28);
      }
      else {
        lVar2 = FUN_140d11ad0(param_1[1] + 0x20);
        lVar2 = FUN_140d11ad0(lVar2 + 0x98);
        uVar3 = FUN_140d11d30(local_30,lVar2 + 0x10);
        FUN_140d13c70(param_1 + 0xba,uVar3);
        FUN_140d11bc0(local_30);
      }
      uVar3 = FUN_140d13940(param_1 + 0xba,0);
    }
  }
  return uVar3;
}


/* address=140d79dd0 name=FUN_140d79dd0 */

void FUN_140d79dd0(longlong param_1)

{
  FUN_140d11bc0(param_1 + 0x10);
  FUN_140d7b9a0(param_1);
  return;
}


/* address=140d79e10 name=FUN_140d79e10 */

undefined8 FUN_140d79e10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined local_38 [8];
  undefined local_30 [8];
  undefined8 local_28;
  undefined local_20 [8];
  undefined8 local_18;
  undefined local_10 [16];
  
  uVar2 = FUN_140d7bed0(local_30);
  FUN_140d11cd0(local_38,uVar2);
  FUN_140d7bb10(local_30);
  cVar1 = FUN_140d11eb0(local_38);
  if (cVar1 == '\0') {
    FUN_140d7bba0(param_2,0);
    FUN_140d7bb10(local_38);
  }
  else {
    local_28 = FUN_140d7ba30(local_20,param_1);
    uVar2 = FUN_140d11ad0(local_38);
    FUN_140d7bbd0(uVar2,local_28);
    FUN_140d7b9a0(local_20);
    lVar3 = FUN_140d11ad0(local_38);
    *(undefined2 *)(lVar3 + 8) = *(undefined2 *)(param_1 + 8);
    local_18 = FUN_140d11d30(local_10,param_1 + 0x10);
    lVar3 = FUN_140d11ad0(local_38);
    FUN_140d13c70(lVar3 + 0x10,local_18);
    FUN_140d11bc0(local_10);
    FUN_140d11cd0(param_2,local_38);
    FUN_140d7bb10(local_38);
  }
  return param_2;
}


/* address=140d79f40 name=FUN_140d79f40 */

undefined8 FUN_140d79f40(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined local_78 [8];
  undefined local_70 [8];
  undefined local_68 [16];
  undefined local_58 [8];
  undefined local_50 [8];
  undefined8 local_48;
  undefined local_40 [8];
  undefined8 local_38;
  undefined local_30 [16];
  undefined local_20 [32];
  
  uVar3 = FUN_140d7bed0(local_50);
  FUN_140d11cd0(local_78,uVar3);
  FUN_140d7bb10(local_50);
  cVar1 = FUN_140d11eb0(local_78);
  if (cVar1 == '\0') {
    *param_3 = 0x50;
    FUN_140d7bba0(param_1,0);
    FUN_140d7bb10(local_78);
  }
  else {
    local_48 = FUN_140d7b940(local_40,param_2);
    uVar3 = FUN_140d11ad0(local_78);
    FUN_140d7bbd0(uVar3,local_48);
    FUN_140d7b9a0(local_40);
    uVar3 = FUN_140d11ad0(local_78);
    uVar3 = FUN_140d11ad0(uVar3);
    FUN_140d75b30(uVar3,local_68);
    iVar2 = FUN_140d71b90(local_68,local_58);
    if (iVar2 != 0) {
      lVar4 = FUN_140d11ad0(local_78);
      iVar2 = FUN_140d71aa0(local_68,lVar4 + 8);
      if ((((iVar2 != 0) && (iVar2 = FUN_140d71e30(local_68,local_30), iVar2 != 0)) &&
          (iVar2 = FUN_140d71aa0(local_68,local_70), iVar2 != 0)) &&
         ((iVar2 = FUN_140d71e00(local_68,local_20), iVar2 != 0 &&
          (lVar4 = FUN_140d71850(local_68), lVar4 == 0)))) {
        local_38 = FUN_140dd9f70(local_30);
        lVar4 = FUN_140d11ad0(local_78);
        FUN_140d11c50(lVar4 + 0x10,local_38);
        lVar4 = FUN_140d11ad0(local_78);
        cVar1 = operator==<>(lVar4 + 0x10,0);
        if (cVar1 != '\0') {
          FUN_140d186f0(0x10,0,0x89,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x316);
          *param_3 = 0x32;
          FUN_140d7bba0(param_1,0);
          FUN_140d7bb10(local_78);
          return param_1;
        }
        FUN_140d11cd0(param_1,local_78);
        FUN_140d7bb10(local_78);
        return param_1;
      }
    }
    FUN_140d186f0(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x30f);
    *param_3 = 0x32;
    FUN_140d7bba0(param_1,0);
    FUN_140d7bb10(local_78);
  }
  return param_1;
}


/* address=140d7a1c0 name=FUN_140d7a1c0 */

longlong FUN_140d7a1c0(longlong param_1)

{
  FUN_140d139c0(param_1);
  *(undefined2 *)(param_1 + 8) = 0;
  FUN_140d139c0(param_1 + 0x10);
  return param_1;
}


/* address=140d7a210 name=FUN_140d7a210 */

undefined FUN_140d7a210(longlong *param_1)

{
  char cVar1;
  
  if ((((*(byte *)(*param_1 + 0xa4) & 1) != 0) && ((*(byte *)((longlong)param_1 + 0x621) & 1) != 0))
     && (cVar1 = FUN_140d7b420(param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}


/* address=140d7a280 name=FUN_140d7a280 */

longlong FUN_140d7a280(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  
  FUN_140d139c0(param_1);
  FUN_140d139c0(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FUN_140d122a0(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_140d139c0(param_1 + 0x60);
  FUN_140d139c0(param_1 + 0x68);
  *(undefined *)(param_1 + 0x70) = 0;
  puVar2 = (undefined *)(param_1 + 0x71);
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_140d7bba0(param_1 + 0x98,0);
  FUN_140d7bba0(param_1 + 0xa0,0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return param_1;
}


/* address=140d7a3c0 name=FUN_140d7a3c0 */

void FUN_140d7a3c0(longlong param_1)

{
  FUN_140d7a930(param_1);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1);
  FUN_140d11bc0(param_1 + 0xa0);
  FUN_140d7bb10(param_1 + 0x98);
  FUN_140d7b9a0(param_1 + 0x68);
  FUN_140d7b9a0(param_1 + 0x60);
  FUN_140d12320(param_1 + 0x38);
  FUN_140d12920(param_1 + 8);
  FUN_140d11bc0(param_1);
  return;
}


/* address=140d7a470 name=FUN_140d7a470 */

undefined8 FUN_140d7a470(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_b8 [8];
  undefined local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined local_98 [8];
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78 [8];
  undefined8 local_70;
  undefined local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined local_50 [8];
  undefined8 local_48;
  undefined local_40 [8];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar2 = FUN_140d13a40(local_b0,param_2 + 0x30);
  FUN_140d11cd0(local_b8,uVar2);
  FUN_140d12d50(local_b0);
  cVar1 = FUN_140d11eb0(local_b8);
  if (cVar1 == '\0') {
    FUN_140d7bba0(param_1,0);
    FUN_140d12d50(local_b8);
  }
  else {
    cVar1 = FUN_140d11eb0(param_2 + 8);
    if (cVar1 != '\0') {
      uVar2 = FUN_140d11ad0(param_2 + 8);
      local_a8 = FUN_140d7b900(uVar2,&LAB_140d7ae30,FUN_140d759a0);
      lVar3 = FUN_140d11ad0(local_b8);
      FUN_140d12960(lVar3 + 8,local_a8);
      lVar3 = FUN_140d11ad0(local_b8);
      cVar1 = FUN_140d11eb0(lVar3 + 8);
      if (cVar1 == '\0') {
        FUN_140d7bba0(param_1,0);
        FUN_140d12d50(local_b8);
        return param_1;
      }
    }
    local_a0 = FUN_140d11d30(local_98,param_2);
    uVar2 = FUN_140d11ad0(local_b8);
    FUN_140d13c70(uVar2,local_a0);
    FUN_140d11bc0(local_98);
    lVar3 = FUN_140d11ad0(local_b8);
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    local_90 = local_28;
    puVar4 = (undefined *)FUN_140d13c30(local_90,param_2 + 0x38);
    puVar5 = local_38;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_140d11ad0(local_b8);
    cVar1 = FUN_140d12820(lVar3 + 0x38,local_38);
    if (cVar1 == '\0') {
      FUN_140d7bba0(param_1,0);
      FUN_140d12d50(local_b8);
    }
    else {
      lVar3 = FUN_140d11ad0(local_b8);
      *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      lVar3 = FUN_140d11ad0(local_b8);
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      local_88 = FUN_140d11ad0(local_b8);
      lVar3 = FUN_140d11ad0(local_b8);
      (**(code **)(*(longlong *)(lVar3 + 0x30) + 0x18))(local_88,param_2);
      local_80 = FUN_140d7ba30(local_78,param_2 + 0x60);
      lVar3 = FUN_140d11ad0(local_b8);
      FUN_140d7bbd0(lVar3 + 0x60,local_80);
      FUN_140d7b9a0(local_78);
      local_70 = FUN_140d7ba30(local_68,param_2 + 0x68);
      lVar3 = FUN_140d11ad0(local_b8);
      FUN_140d7bbd0(lVar3 + 0x68,local_70);
      FUN_140d7b9a0(local_68);
      lVar3 = FUN_140d11ad0(local_b8);
      *(undefined *)(lVar3 + 0x70) = *(undefined *)(param_2 + 0x70);
      local_60 = param_2 + 0x71;
      lVar3 = FUN_140d11ad0(local_b8);
      FUN_140d78c40(lVar3 + 0x71,local_60,0x20);
      cVar1 = FUN_140d11eb0(param_2 + 0x98);
      if (cVar1 != '\0') {
        uVar2 = FUN_140d11ad0(param_2 + 0x98);
        local_58 = FUN_140d79e10(uVar2,local_50);
        lVar3 = FUN_140d11ad0(local_b8);
        FUN_140d7bc30(lVar3 + 0x98,local_58);
        FUN_140d7bb10(local_50);
        lVar3 = FUN_140d11ad0(local_b8);
        cVar1 = FUN_140d11eb0(lVar3 + 0x98);
        if (cVar1 == '\0') {
          FUN_140d7bba0(param_1,0);
          FUN_140d12d50(local_b8);
          return param_1;
        }
      }
      local_48 = FUN_140d11d30(local_40,param_2 + 0xa0);
      lVar3 = FUN_140d11ad0(local_b8);
      FUN_140d13c70(lVar3 + 0xa0,local_48);
      FUN_140d11bc0(local_40);
      lVar3 = FUN_140d11ad0(local_b8);
      *(undefined8 *)(lVar3 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
      FUN_140d11cd0(param_1,local_b8);
      FUN_140d12d50(local_b8);
    }
  }
  return param_1;
}


/* address=140d7a930 name=FUN_140d7a930 */

void FUN_140d7a930(longlong param_1)

{
  if (param_1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1);
    FUN_140d12960(param_1 + 8,0);
    FUN_140d11c50(param_1,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_140d7bb50(param_1 + 0x98,0);
    FUN_140d11c50(param_1 + 0xa0,0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


/* address=140d7a9d0 name=FUN_140d7a9d0 */

undefined FUN_140d7a9d0(longlong param_1,
                       unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                       *param_2)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _Facet_base *p_Var6;
  undefined local_18 [24];
  
  uVar4 = FUN_140d11ad0(param_1);
  uVar5 = FUN_140d11ad0(param_2);
  iVar3 = FUN_140d7aea0(uVar5,uVar4);
  if (iVar3 == 0) {
    FUN_140d7b9a0(param_2);
    uVar1 = 0;
  }
  else {
    if (iVar3 == 2) {
      FUN_140d11c50(param_1,0);
    }
    (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1);
    cVar2 = FUN_140d13940(param_1 + 8,0);
    if (cVar2 == '\0') {
      uVar4 = FUN_140d11e80();
      FUN_140d12960(param_1 + 8,uVar4);
      cVar2 = operator==<>(param_1 + 8,0);
      if (cVar2 == '\0') {
        uVar4 = FUN_140d11b30(param_2);
        uVar4 = FUN_140d11cd0(local_18,uVar4);
        uVar5 = FUN_140d11ad0(param_1 + 8);
        cVar2 = FUN_140d7bc90(uVar5,uVar4);
        if (cVar2 == '\0') {
          FUN_140d12960(param_1 + 8,0);
          FUN_140d7b9a0(param_2);
          uVar1 = 0;
        }
        else {
          FUN_140d7b9a0(param_2);
          uVar1 = 1;
        }
      }
      else {
        FUN_140d7b9a0(param_2);
        uVar1 = 0;
      }
    }
    else {
      uVar4 = FUN_140d11ad0(param_1 + 8);
      uVar4 = FUN_140d11f20(uVar4,0);
      FUN_140d759a0(uVar4);
      p_Var6 = std::
               unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
               ::release(param_2);
      uVar4 = FUN_140d11ad0(param_1 + 8);
      FUN_140d7b8d0(uVar4,0,p_Var6);
      FUN_140d7b9a0(param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=140d7abc0 name=FUN_140d7abc0 */

undefined8 FUN_140d7abc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d70a20(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_140d70a70(param_1,param_2);
    if (iVar1 == -2) {
      FUN_140d186f0(0xb,0,0x80,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x1fc);
      uVar2 = 0;
    }
    else if (iVar1 == -1) {
      FUN_140d186f0(0xb,0,0x73,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x1f9);
      uVar2 = 0;
    }
    else if (iVar1 == 0) {
      FUN_140d186f0(0xb,0,0x74,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x1f6);
      uVar2 = 0;
    }
    else if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      FID_conflict__assert(L"0",(wchar_t *)"D",0x200);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d7acc0 name=FUN_140d7acc0 */

ulonglong FUN_140d7acc0(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined local_20 [32];
  
  if (param_2 == 0) {
    uVar3 = FUN_140d186f0(0x10,0,0xb5,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x206);
  }
  else {
    cVar1 = operator==<>(param_1 + 8,0);
    if (cVar1 == '\0') {
      uVar4 = FUN_140d11ad0(param_1 + 8);
      lVar5 = FUN_140d11f20(uVar4,0);
      if (lVar5 != 0) {
        uVar4 = FUN_140d11ad0(param_1 + 8);
        uVar4 = FUN_140d11f20(uVar4,0);
        FUN_140d75b30(uVar4,local_20);
        uVar4 = FUN_140d79540(local_28,local_20);
        FUN_140d11cd0(local_30,uVar4);
        FUN_140d11bc0(local_28);
        cVar1 = FUN_140d11eb0(local_30);
        if (cVar1 == '\0') {
          FUN_140d186f0(0xb,0,0x80,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x215);
          FUN_140d11bc0(local_30);
          return 0;
        }
        uVar4 = FUN_140d11ad0(local_30);
        bVar2 = FUN_140d7abc0(uVar4,param_2);
        FUN_140d11bc0(local_30);
        return (ulonglong)bVar2;
      }
    }
    uVar3 = FUN_140d186f0(0x10,0,0xad,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x20c);
  }
  return uVar3 & 0xffffffffffffff00;
}


/* address=140d7ae60 name=FUN_140d7ae60 */

void FUN_140d7ae60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}


/* address=140d7aea0 name=FUN_140d7aea0 */

undefined4 FUN_140d7aea0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined local_20 [32];
  
  FUN_140d75b30(param_1,local_20);
  uVar4 = FUN_140d79540(local_28,local_20);
  FUN_140d11cd0(local_30,uVar4);
  FUN_140d11bc0(local_28);
  cVar1 = FUN_140d11eb0(local_30);
  if (cVar1 == '\0') {
    FUN_140d186f0(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0xec);
    FUN_140d11bc0(local_30);
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_140d11ad0(local_30);
    uVar2 = FUN_140d70d60(uVar4);
    cVar1 = FUN_140d7de20(uVar2);
    if (cVar1 == '\0') {
      FUN_140d186f0(0x10,0,0xe4,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0xf1);
      FUN_140d11bc0(local_30);
      uVar2 = 0;
    }
    else {
      uVar4 = FUN_140d11ad0(local_30);
      iVar3 = FUN_140d70d60(uVar4);
      if ((iVar3 == 0x198) && (cVar1 = FUN_140d79240(local_20,0), cVar1 == '\0')) {
        FUN_140d186f0(0x10,0,0xe4,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0xf9);
        FUN_140d11bc0(local_30);
        return 0;
      }
      if (param_2 != 0) {
        uVar4 = FUN_140d11ad0(local_30);
        cVar1 = FUN_140d7abc0(uVar4,param_2);
        if (cVar1 == '\0') {
          FUN_140d18390();
          FUN_140d11bc0(local_30);
          return 2;
        }
      }
      FUN_140d11bc0(local_30);
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d7b070 name=FUN_140d7b070 */

undefined4
FUN_140d7b070(longlong param_1,undefined8 *param_2,ulonglong param_3,longlong param_4,
             longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined local_60 [8];
  int local_58;
  uint local_54;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined local_28 [8];
  undefined local_20 [8];
  undefined local_18 [24];
  
  if ((param_3 == 0) || ((param_4 == 0 && (param_5 == 0)))) {
    FUN_140d186f0(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x10c);
    local_48 = 0;
  }
  else if ((param_4 == 0) || (param_5 == 0)) {
    local_58 = FUN_140d7aea0(*param_2,param_4);
    if (local_58 == 0) {
      local_48 = 0;
    }
    else if (local_58 == 2) {
      FUN_140d186f0(0x10,0,0x112,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x119);
      local_48 = 0;
    }
    else {
      uVar2 = FUN_140d11e80();
      FUN_140d11ca0(local_60,uVar2);
      cVar1 = FUN_140d11eb0(local_60);
      if (cVar1 == '\0') {
        local_48 = 0;
        FUN_140d12920(local_60);
      }
      else {
        for (local_50 = 0; local_50 < param_3; local_50 = local_50 + 1) {
          local_38 = local_18;
          uVar2 = FUN_140d7b940(local_28,param_2[local_50]);
          local_30 = FUN_140d11cd0(local_38,uVar2);
          uVar2 = FUN_140d11ad0(local_60);
          cVar1 = FUN_140d7bc90(uVar2,local_30);
          local_54 = (uint)(cVar1 == '\0');
          FUN_140d7b9a0(local_28);
          if (cVar1 == '\0') {
            local_44 = 0;
            FUN_140d12920(local_60);
            return local_44;
          }
        }
        uVar2 = FUN_140d11b60(local_20,param_4);
        FUN_140d13c70(param_1,uVar2);
        FUN_140d11bc0(local_20);
        *(longlong *)(param_1 + 0x28) = param_5;
        uVar2 = FUN_140d11b30(local_60);
        FUN_140d7bd00(param_1 + 8,uVar2);
        local_40 = 1;
        FUN_140d12920(local_60);
        local_48 = local_40;
      }
    }
  }
  else {
    FUN_140d186f0(0x10,0,0x113,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x111);
    local_48 = 0;
  }
  return local_48;
}


/* address=140d7b310 name=FUN_140d7b310 */

ulonglong FUN_140d7b310(undefined *param_1,wchar_t **param_2)

{
  ulong uVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t local_38 [8];
  wchar_t *local_28 [3];
  
  pwVar4 = local_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined *)pwVar4 = *param_1;
    param_1 = param_1 + 1;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  uVar1 = wcstoul(local_38,local_28,0x20000010);
  uVar2 = CONCAT44(extraout_var,uVar1);
  if ((uVar1 != 0) && (uVar2 = FUN_140d71850(local_38), uVar2 == 0)) {
    uVar1 = wcstoul((wchar_t *)local_28,param_2,0x20000010);
    uVar2 = CONCAT44(extraout_var_00,uVar1);
    if ((uVar1 != 0) && (uVar2 = FUN_140d72500(param_2,0,0,0xa0000000), (int)uVar2 != 0)) {
      uVar1 = wcstoul((wchar_t *)param_2,(wchar_t **)0x0,2);
      uVar2 = CONCAT44(extraout_var_01,uVar1);
      if (uVar1 != 0) {
        uVar1 = wcstoul((wchar_t *)param_2,(wchar_t **)0x0,0x20000010);
        uVar2 = CONCAT44(extraout_var_02,uVar1);
        if (uVar1 != 0) {
          uVar1 = wcstoul((wchar_t *)param_2,(wchar_t **)0x0,0x20000010);
          uVar2 = CONCAT44(extraout_var_03,uVar1);
          if (uVar1 != 0) {
            uVar1 = wcstoul((wchar_t *)param_2,(wchar_t **)0x0,0x20000010);
            uVar2 = CONCAT44(extraout_var_04,uVar1);
            if (uVar1 != 0) {
              uVar1 = wcstoul((wchar_t *)param_2,(wchar_t **)0x0,0x20000010);
              uVar2 = CONCAT44(extraout_var_05,uVar1);
              if (uVar1 != 0) {
                return CONCAT71((int7)(uVar2 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


/* address=140d7b420 name=FUN_140d7b420 */

ulonglong FUN_140d7b420(longlong *param_1)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  short *psVar7;
  short *local_38;
  undefined local_18 [24];
  
  uVar3 = FUN_140d11ad0(param_1[1] + 0x20);
  cVar1 = operator==<>(uVar3 + 0x98,0);
  uVar5 = 0;
  if (cVar1 == '\0') {
    uVar4 = FUN_140d11ad0(uVar3 + 0x98);
    cVar1 = operator==<>(uVar4,0);
    uVar5 = 0;
    if ((cVar1 == '\0') &&
       ((cVar1 = operator==<>(uVar3 + 0xa0,0), cVar1 == '\0' ||
        (uVar5 = uVar3, *(longlong *)(uVar3 + 0xa8) != 0)))) {
      lVar6 = FUN_140d11ad0(uVar3 + 0x98);
      if ((*(byte *)(*(longlong *)(*param_1 + 0x30) + 0xdc) >> 1 & 1) == 0) {
        FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x32c);
      }
      uVar2 = FUN_140d77f20(*param_1);
      if (uVar2 < 0x304) {
        return (ulonglong)(byte)(uVar2 >> 8) << 8;
      }
      FUN_140d13c30(local_18,param_1 + 0x53);
      local_38 = (short *)FUN_140d11ad0(local_18);
      psVar7 = (short *)FUN_140d782f0(local_18);
      while( true ) {
        if (local_38 == psVar7) {
          return (ulonglong)psVar7 & 0xffffffffffffff00;
        }
        if (*(short *)(lVar6 + 8) == *local_38) break;
        local_38 = local_38 + 1;
      }
      return CONCAT71((uint7)(byte)((ushort)*(short *)(lVar6 + 8) >> 8),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}


/* address=140d7b5c0 name=FUN_140d7b5c0 */

undefined4 FUN_140d7b5c0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined local_28 [8];
  undefined local_20 [8];
  undefined local_18 [24];
  
  if ((param_3 == 0) && (param_4 == 0)) {
    FUN_140d186f0(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x346);
    local_34 = 0;
  }
  else if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = FUN_140d79f40(local_20,param_2,local_38);
    FUN_140d11cd0(local_28,uVar2);
    FUN_140d7bb10(local_20);
    cVar1 = operator==<>(local_28,0);
    if (cVar1 == '\0') {
      if (param_3 != 0) {
        lVar3 = FUN_140d11ad0(local_28);
        uVar2 = FUN_140d11ad0(lVar3 + 0x10);
        cVar1 = FUN_140d7abc0(uVar2,param_3);
        if (cVar1 == '\0') {
          FUN_140d186f0(0x10,0,0x112,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x359);
          local_30 = 0;
          FUN_140d7bb10(local_28);
          return local_30;
        }
      }
      uVar2 = FUN_140d11b30(local_28);
      FUN_140d7bc30(param_1 + 0x98,uVar2);
      uVar2 = FUN_140d11b60(local_18,param_3);
      FUN_140d13c70(param_1 + 0xa0,uVar2);
      FUN_140d11bc0(local_18);
      *(longlong *)(param_1 + 0xa8) = param_4;
      local_2c = 1;
      FUN_140d7bb10(local_28);
      local_34 = local_2c;
    }
    else {
      FUN_140d186f0(0x10,0,0x12d,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x352);
      local_34 = 0;
      FUN_140d7bb10(local_28);
    }
  }
  else {
    FUN_140d186f0(0x10,0,0x113,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x34b);
    local_34 = 0;
  }
  return local_34;
}


/* address=140d7b7d0 name=FUN_140d7b7d0 */

undefined FUN_140d7b7d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined local_20 [32];
  
  FUN_140d717c0(local_20,param_2,param_3);
  cVar1 = FUN_140daa520(local_20);
  if (cVar1 == '\0') {
    FUN_140d186f0(0x10,0,0x10d,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x3b2);
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_140d71850(local_20);
    uVar4 = FUN_140d71830(local_20);
    uVar3 = FUN_140d75820(uVar4,uVar3,0);
    FUN_140d7b9e0(param_1 + 0x60,uVar3);
    uVar2 = FUN_140d13940(param_1 + 0x60,0);
  }
  return uVar2;
}


/* address=140d7b8d0 name=FUN_140d7b8d0 */

void FUN_140d7b8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d196f0(param_1,param_2,param_3);
  return;
}


/* address=140d7b900 name=FUN_140d7b900 */

void FUN_140d7b900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d1a210(param_1,&LAB_140d7b8b0,param_2,&LAB_140d7b890,param_3);
  return;
}


/* address=140d7b940 name=FUN_140d7b940 */

undefined8 FUN_140d7b940(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  if (param_2 != 0) {
    FUN_140d75ac0(param_2);
  }
  uVar1 = FUN_140d11ca0(local_18,param_2);
  FUN_140d11cd0(param_1,uVar1);
  FUN_140d7b9a0(local_18);
  return param_1;
}


/* address=140d7b9a0 name=FUN_140d7b9a0 */

void FUN_140d7b9a0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140d11b30(param_1);
    FUN_140d7bf30(uVar1,*param_1);
  }
  return;
}


/* address=140d7b9e0 name=FUN_140d7b9e0 */

void FUN_140d7b9e0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140d11b30(param_1);
    FUN_140d7bf30(uVar2,p_Var1);
  }
  return;
}


/* address=140d7ba30 name=FUN_140d7ba30 */

undefined8 FUN_140d7ba30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140d11ad0(param_2);
  uVar1 = FUN_140d7b940(local_18,uVar1);
  FUN_140d11cd0(param_1,uVar1);
  FUN_140d7b9a0(local_18);
  return param_1;
}


/* address=140d7ba80 name=FUN_140d7ba80 */

undefined8 FUN_140d7ba80(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d76180(0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d11a30(0x18,lVar1);
    uVar2 = FUN_140d7a1c0(uVar2);
  }
  return uVar2;
}


/* address=140d7bad0 name=FUN_140d7bad0 */

undefined8 FUN_140d7bad0(undefined8 param_1,uint param_2)

{
  FUN_140d79dd0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e89c50(param_1,0x18);
  }
  return param_1;
}


/* address=140d7bb10 name=FUN_140d7bb10 */

void FUN_140d7bb10(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140d11b30(param_1);
    FUN_140d7bf10(uVar1,*param_1);
  }
  return;
}


/* address=140d7bb50 name=FUN_140d7bb50 */

void FUN_140d7bb50(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140d11b30(param_1);
    FUN_140d7bf10(uVar2,p_Var1);
  }
  return;
}


/* address=140d7bba0 name=FUN_140d7bba0 */

undefined8 FUN_140d7bba0(undefined8 param_1)

{
  undefined local_18;
  
  FUN_140d14010(param_1,local_18);
  return param_1;
}


/* address=140d7bbd0 name=FUN_140d7bbd0 */

undefined8
FUN_140d7bbd0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140d7b9e0(param_1,p_Var1);
  uVar2 = FUN_140d11b30(param_2);
  FUN_140d11b30(uVar2);
  FUN_140d11b30(param_1);
  return param_1;
}


/* address=140d7bc30 name=FUN_140d7bc30 */

undefined8
FUN_140d7bc30(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140d7bb50(param_1,p_Var1);
  uVar2 = FUN_140d11b30(param_2);
  FUN_140d11b30(uVar2);
  FUN_140d11b30(param_1);
  return param_1;
}


/* address=140d7bc90 name=FUN_140d7bc90 */

bool FUN_140d7bc90(undefined8 param_1,
                  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                  *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140d11ad0(param_2);
  lVar2 = FUN_140d19f30(param_1,uVar1);
  if (lVar2 != 0) {
    std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
    release(param_2);
    FUN_140d7b9a0(param_2);
  }
  else {
    FUN_140d7b9a0(param_2);
  }
  return lVar2 != 0;
}


/* address=140d7bd00 name=FUN_140d7bd00 */

undefined8
FUN_140d7bd00(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140d12960(param_1,p_Var1);
  uVar2 = FUN_140d11b30(param_2);
  FUN_140d11b30(uVar2);
  FUN_140d11b30(param_1);
  return param_1;
}


/* address=140d7bd60 name=FUN_140d7bd60 */

undefined8 FUN_140d7bd60(undefined8 param_1,undefined8 param_2)

{
  FUN_140d11db0(param_1,param_2,0);
  return param_1;
}


/* address=140d7bd90 name=FUN_140d7bd90 */

undefined FUN_140d7bd90(longlong *param_1,longlong *param_2)

{
  undefined local_18;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=140d7bde0 name=FUN_140d7bde0 */

bool FUN_140d7bde0(undefined8 param_1,undefined *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined local_28 [24];
  
  puVar3 = local_28;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  cVar1 = FUN_140d7bd90(param_1,local_28);
  return cVar1 == '\0';
}


/* address=140d7be40 name=FUN_140d7be40 */

void FUN_140d7be40(undefined8 *param_1)

{
  FUN_140d196b0(*param_1,param_1[1]);
  return;
}


/* address=140d7be70 name=FUN_140d7be70 */

longlong FUN_140d7be70(longlong param_1)

{
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  return param_1;
}


/* address=140d7be90 name=FUN_140d7be90 */

undefined8 FUN_140d7be90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d19630(param_2);
  FUN_140d11db0(param_1,param_2,uVar1);
  return param_1;
}


/* address=140d7bed0 name=FUN_140d7bed0 */

undefined8 FUN_140d7bed0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140d7ba80();
  uVar1 = FUN_140d11ca0(local_18,uVar1);
  FUN_140d11cd0(param_1,uVar1);
  FUN_140d7bb10(local_18);
  return param_1;
}


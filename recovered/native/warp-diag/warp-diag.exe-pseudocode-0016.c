/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=140d333b0 name=FUN_140d333b0 */

int FUN_140d333b0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x18) == 0)) {
    FUN_140c6c4e0(0x11,0,0x73,s_D__a_1_s_target_release_build_bo_1413baec0,0x7d);
    iVar1 = -2;
  }
  else if (*(int *)(param_1 + 1) == 0) {
    FUN_140c6c4e0(0x11,0,0x72,s_D__a_1_s_target_release_build_bo_1413baf20,0x81);
    iVar1 = -2;
  }
  else if (param_3 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
    if (0 < iVar1) {
      param_1[6] = (longlong)iVar1 + param_1[6];
    }
  }
  return iVar1;
}


/* address=140d334a0 name=FUN_140d334a0 */

int FUN_140d334a0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x28) == 0)) {
    FUN_140c6c4e0(0x11,0,0x73,s_D__a_1_s_target_release_build_bo_1413baf80,0x90);
    iVar1 = -2;
  }
  else if (*(int *)(param_1 + 1) == 0) {
    FUN_140c6c4e0(0x11,0,0x72,s_D__a_1_s_target_release_build_bo_1413bafe0,0x94);
    iVar1 = -2;
  }
  else if (param_3 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
    if (0 < iVar1) {
      param_1[6] = (longlong)iVar1 + param_1[6];
    }
  }
  return iVar1;
}


/* address=140d33590 name=FUN_140d33590 */

int FUN_140d33590(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    FUN_140c6c4e0(0x11,0,0x73,s_D__a_1_s_target_release_build_bo_1413bb040,0xa3);
    iVar1 = -2;
  }
  else if (*(int *)(param_1 + 1) == 0) {
    FUN_140c6c4e0(0x11,0,0x72,s_D__a_1_s_target_release_build_bo_1413bb0a0,0xa7);
    iVar1 = -2;
  }
  else if (param_3 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
    if (0 < iVar1) {
      param_1[7] = (longlong)iVar1 + param_1[7];
    }
  }
  return iVar1;
}


/* address=140d33680 name=FUN_140d33680 */

undefined8 FUN_140d33680(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong local_res18;
  undefined4 local_14;
  longlong local_10;
  
  local_res18 = param_3;
  local_10 = param_2;
  while( true ) {
    if (local_res18 == 0) {
      return 1;
    }
    if (local_res18 < 0x80000000) {
      local_14 = (undefined4)local_res18;
    }
    else {
      local_14 = 0x7fffffff;
    }
    iVar1 = FUN_140d33590(param_1,local_10,local_14);
    if (iVar1 < 1) break;
    local_10 = local_10 + iVar1;
    local_res18 = local_res18 - (longlong)iVar1;
  }
  return 0;
}


/* address=140d33730 name=FUN_140d33730 */

undefined8 FUN_140d33730(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_2);
  if (sVar1 < 0x80000000) {
    uVar2 = FUN_140d33590(param_1,param_2,sVar1 & 0xffffffff);
  }
  else {
    FUN_140c6c4e0(0x11,0,0x45,s_D__a_1_s_target_release_build_bo_1413bb100,0xc5);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* address=140d337a0 name=FUN_140d337a0 */

void FUN_140d337a0(undefined8 param_1)

{
  FUN_140d337d0(param_1,0xb,0,0);
  return;
}


/* address=140d337d0 name=FUN_140d337d0 */

undefined8 FUN_140d337d0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x30) == 0)) {
    FUN_140c6c4e0(0x11,0,0x73,s_D__a_1_s_target_release_build_bo_1413bb160,0xd5);
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}


/* address=140d338b0 name=FUN_140d338b0 */

void FUN_140d338b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18 [6];
  
  local_18[0] = param_4;
  FUN_140d337d0(param_1,param_2,param_3,local_18);
  return;
}


/* address=140d33960 name=FUN_140d33960 */

void FUN_140d33960(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2;
  return;
}


/* address=140d33990 name=FUN_140d33990 */

uint FUN_140d33990(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x10) & param_2;
}


/* address=140d339b0 name=FUN_140d339b0 */

void FUN_140d339b0(undefined8 param_1)

{
  FUN_140d33990(param_1,1);
  return;
}


/* address=140d339e0 name=FUN_140d339e0 */

void FUN_140d339e0(undefined8 param_1)

{
  FUN_140d33990(param_1,2);
  return;
}


/* address=140d33a40 name=FUN_140d33a40 */

void FUN_140d33a40(undefined8 param_1)

{
  FUN_140d33990(param_1,4);
  return;
}


/* address=140d33a70 name=FUN_140d33a70 */

undefined4 FUN_140d33a70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


/* address=140d33ae0 name=FUN_140d33ae0 */

void FUN_140d33ae0(longlong param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 9;
  return;
}


/* address=140d33b00 name=FUN_140d33b00 */

void FUN_140d33b00(longlong param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 10;
  return;
}


/* address=140d33b20 name=FUN_140d33b20 */

uint FUN_140d33b20(longlong param_1)

{
  return *(uint *)(param_1 + 0x10) & DAT_141067fa8;
}


/* address=140d33b40 name=FUN_140d33b40 */

void FUN_140d33b40(longlong param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~DAT_141067fa8;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* address=140d33b80 name=FUN_140d33b80 */

undefined4 FUN_140d33b80(undefined8 *param_1)

{
  return *(undefined4 *)*param_1;
}


/* address=140d33c30 name=FUN_140d33c30 */

longlong FUN_140d33c30(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140d337d0(param_1,10,0,0);
  if (iVar1 < 0) {
    FID_conflict__assert((wchar_t *)s_r_1413bb2e0,(wchar_t *)s_D_1413bb220,0x13e);
  }
  if (iVar1 < 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)iVar1;
  }
  return lVar2;
}


/* address=140d33de0 name=FUN_140d33de0 */

undefined8 FUN_140d33de0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return uVar1;
}


/* address=140d33e70 name=FUN_140d33e70 */

uint ** FUN_140d33e70(uint **param_1,uint param_2)

{
  uint **local_res8;
  
  if (param_1 != (uint **)0x0) {
    local_res8 = param_1;
    do {
      if (*local_res8 != (uint *)0x0) {
        if ((param_2 & 0xff) == 0) {
          if ((**local_res8 & param_2) != 0) {
            return local_res8;
          }
        }
        else if (**local_res8 == param_2) {
          return local_res8;
        }
      }
      local_res8 = (uint **)local_res8[5];
    } while (local_res8 != (uint **)0x0);
  }
  return (uint **)0x0;
}


/* address=140d33f50 name=FUN_140d33f50 */

undefined8 FUN_140d33f50(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint local_res10;
  
  local_res10 = param_2;
  if (param_3 < param_2) {
    local_res10 = param_3;
  }
  do {
    if (local_res10 == 0) {
      return 1;
    }
    iVar1 = FUN_140d33730(param_1,&DAT_1413bb3c0);
    local_res10 = local_res10 - 1;
  } while (iVar1 == 1);
  return 0;
}


/* address=140d33fc0 name=FUN_140d33fc0 */

void FUN_140d33fc0(undefined8 param_1)

{
  FUN_140c6c030(&LAB_140d34840,param_1);
  return;
}


/* address=140d33ff0 name=FUN_140d33ff0 */

void FUN_140d33ff0(undefined8 param_1,longlong *param_2,ulonglong *param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  byte local_48;
  byte local_47;
  uint local_44;
  ulonglong local_40;
  uint local_38;
  ulonglong local_30;
  longlong local_28;
  int local_20;
  byte local_1c [12];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_78;
  iVar1 = FUN_140d34ac0(param_1,local_1c,&local_20,DAT_141067fb8);
  if (iVar1 == 0) {
    if (local_20 == 0) {
      local_58 = CONCAT44(local_58._4_4_,0x21a);
      FUN_140c6c4e0(0xc,0,0xa2,s_D__a_1_s_target_release_build_bo_1413bb430);
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,0x218);
      FUN_140c6c4e0(0xc,0,0x7b,s_D__a_1_s_target_release_build_bo_1413bb3d0);
    }
  }
  else {
    local_47 = local_1c[0];
    local_48 = local_1c[1];
    if ((local_1c[0] & 0x1f) == 0x1f) {
      local_58 = CONCAT44(local_58._4_4_,0x224);
      FUN_140c6c4e0(0xc,0,0x6d,s_D__a_1_s_target_release_build_bo_1413bb490);
    }
    else {
      if ((local_1c[1] & 0x80) == 0) {
        local_40 = (ulonglong)local_1c[1];
        local_28 = DAT_141067fb8;
      }
      else {
        local_30 = (ulonglong)(int)(local_1c[1] & 0x7f);
        if (((local_1c[0] & 0x20) != 0) && (local_30 == 0)) {
          local_58 = DAT_141067fb8;
          local_50 = param_4;
          iVar1 = FUN_140d34880(param_1,param_2,param_3,local_1c);
          if (iVar1 == 0) {
            local_58 = CONCAT44(local_58._4_4_,0x234);
            FUN_140c6c4e0(0xc,0,0xa2,s_D__a_1_s_target_release_build_bo_1413bb4f0);
          }
          goto LAB_140d34456;
        }
        if ((local_30 == 0) || (4 < local_30)) {
          local_58 = CONCAT44(local_58._4_4_,0x23b);
          FUN_140c6c4e0(0xc,0,0x6d,s_D__a_1_s_target_release_build_bo_1413bb550);
          goto LAB_140d34456;
        }
        iVar1 = FUN_140d34ac0(param_1,local_1c + DAT_141067fb8,0,local_30);
        if (iVar1 == 0) {
          local_58 = CONCAT44(local_58._4_4_,0x240);
          FUN_140c6c4e0(0xc,0,0xa2,s_D__a_1_s_target_release_build_bo_1413bb5b0);
          goto LAB_140d34456;
        }
        local_28 = DAT_141067fb8 + local_30;
        local_44 = 0;
        for (local_38 = 0; local_38 < local_30; local_38 = local_38 + 1) {
          local_44 = local_44 << 8 | (uint)local_1c[DAT_141067fb8 + (ulonglong)local_38];
        }
        if (local_44 < 0x80) {
          local_58 = CONCAT44(local_58._4_4_,0x24d);
          FUN_140c6c4e0(0xc,0,0x6d,s_D__a_1_s_target_release_build_bo_1413bb610);
          goto LAB_140d34456;
        }
        if (local_44 >> ((char)local_30 * '\b' - 8U & 0x1f) == 0) {
          local_58 = CONCAT44(local_58._4_4_,0x253);
          FUN_140c6c4e0(0xc,0,0x6d,s_D__a_1_s_target_release_build_bo_1413bb670);
          goto LAB_140d34456;
        }
        local_40 = (ulonglong)local_44;
      }
      if (((local_40 + local_28 < local_40) || (param_4 < local_40 + local_28)) ||
         (0x7fffffff < local_40)) {
        local_58 = CONCAT44(local_58._4_4_,0x25d);
        FUN_140c6c4e0(0xc,0,0xb1,s_D__a_1_s_target_release_build_bo_1413bb6d0);
      }
      else {
        local_40 = local_40 + local_28;
        *param_3 = local_40;
        lVar2 = FUN_140c660d0(local_40);
        *param_2 = lVar2;
        if (*param_2 != 0) {
          FUN_140d347b0(*param_2,local_1c,local_28);
          iVar1 = FUN_140d34ac0(param_1,*param_2 + local_28,0,local_40 - local_28);
          if (iVar1 == 0) {
            local_58 = CONCAT44(local_58._4_4_,0x269);
            FUN_140c6c4e0(0xc,0,0xa2,s_D__a_1_s_target_release_build_bo_1413bb730);
            FUN_140c66200(*param_2);
          }
        }
      }
    }
  }
LAB_140d34456:
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_78);
  return;
}


/* address=140d347b0 name=FUN_140d347b0 */

undefined8 FUN_140d347b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d34800 name=FUN_140d34800 */

undefined8 FUN_140d34800(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d34880 name=FUN_140d34880 */

undefined8
FUN_140d34880(undefined8 param_1,longlong *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong param_5,ulonglong param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_30 = param_5 + DAT_141067fb0;
  if (param_6 < local_30) {
    local_30 = param_6;
  }
  if (param_5 <= local_30) {
    lVar2 = FUN_140c660d0(local_30);
    *param_2 = lVar2;
    if (*param_2 != 0) {
      FUN_140d347b0(*param_2,param_4,param_5);
      local_28 = param_5;
      while (local_28 != local_30) {
        local_20 = local_30 - local_28;
        if (0x7fffffff < local_20) {
          local_20 = 0x7fffffff;
        }
        iVar1 = FUN_140d333b0(param_1,*param_2 + local_28,local_20 & 0xffffffff);
        if (iVar1 == 0) {
          *param_3 = local_28;
          return 1;
        }
        if (iVar1 == -1) {
          FUN_140c66200(*param_2);
          return 0;
        }
        local_28 = local_28 + (longlong)iVar1;
        if ((local_30 < param_6) && (local_30 - local_28 < DAT_141067fb0 / 2)) {
          local_30 = local_30 + DAT_141067fb0;
          if ((local_30 < DAT_141067fb0) || (param_6 < local_30)) {
            local_30 = param_6;
          }
          lVar2 = FUN_140c662b0(*param_2,local_30);
          if (lVar2 == 0) {
            FUN_140c66200(*param_2);
            return 0;
          }
          *param_2 = lVar2;
        }
      }
      FUN_140c66200(*param_2);
    }
  }
  return 0;
}


/* address=140d34ac0 name=FUN_140d34ac0 */

undefined8 FUN_140d34ac0(undefined8 param_1,longlong param_2,undefined4 *param_3,ulonglong param_4)

{
  bool bVar1;
  int iVar2;
  longlong local_res10;
  ulonglong local_res20;
  undefined4 local_24;
  undefined4 local_20;
  
  bVar1 = true;
  local_res10 = param_2;
  local_res20 = param_4;
  while( true ) {
    if (local_res20 == 0) {
      return 1;
    }
    if (local_res20 < 0x80000000) {
      local_24 = (undefined4)local_res20;
    }
    else {
      local_24 = 0x7fffffff;
    }
    iVar2 = FUN_140d333b0(param_1,local_res10,local_24);
    if (iVar2 < 1) break;
    local_res10 = local_res10 + iVar2;
    local_res20 = local_res20 - (longlong)iVar2;
    bVar1 = false;
  }
  if (param_3 != (undefined4 *)0x0) {
    if ((bVar1) && (iVar2 == 0)) {
      local_20 = 1;
    }
    else {
      local_20 = 0;
    }
    *param_3 = local_20;
  }
  return 0;
}


/* address=140d34bb0 name=FUN_140d34bb0 */

undefined * FUN_140d34bb0(void)

{
  return &DAT_141067fc0;
}


/* address=140d34c10 name=FUN_140d34c10 */

void FUN_140d34c10(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140d338b0(param_1,0x68,param_3,param_2);
  return;
}


/* address=140d34c50 name=FUN_140d34c50 */

void FUN_140d34c50(undefined8 param_1,undefined8 param_2)

{
  FUN_140d337d0(param_1,0x69,0,param_2);
  return;
}


/* address=140d34c80 name=FUN_140d34c80 */

undefined8 FUN_140d34c80(int param_1)

{
  DWORD DVar1;
  undefined8 uVar2;
  
  if (param_1 == -1) {
    DVar1 = GetLastError();
    uVar2 = FUN_140d34cb0(DVar1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d34cb0 name=FUN_140d34cb0 */

undefined8 FUN_140d34cb0(int param_1)

{
  undefined8 uVar1;
  
  if (((((param_1 == 0x8c) || (param_1 == 0x2733)) || (param_1 == 0x7e)) ||
      ((param_1 == 4 || (param_1 == 0xb)))) ||
     ((param_1 == 0x86 || ((param_1 == 0x70 || (param_1 == 0x67)))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d34d30 name=FUN_140d34d30 */

undefined8 FUN_140d34d30(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_140e0c904(*(undefined4 *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 1;
}


/* address=140d34d80 name=FUN_140d34d80 */

int FUN_140d34d80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_140e0e4e4(*(undefined4 *)(param_1 + 0x18),param_2,param_3,param_4,0);
  FUN_140d33b40(param_1);
  if (iVar1 < 1) {
    iVar2 = FUN_140d34c80(iVar1);
    if (iVar2 != 0) {
      FUN_140d33ae0(param_1);
    }
  }
  return iVar1;
}


/* address=140d35160 name=FUN_140d35160 */

undefined * FUN_140d35160(void)

{
  return &DAT_141068010;
}


/* address=140d351c0 name=FUN_140d351c0 */

undefined8 FUN_140d351c0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      closesocket((longlong)*(int *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 1;
}


/* address=140d35430 name=FUN_140d35430 */

void FUN_140d35430(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* address=140d35470 name=FUN_140d35470 */

void FUN_140d35470(undefined8 param_1,undefined8 param_2)

{
  undefined local_18 [24];
  
  FUN_140d36a70(param_1,local_18,param_2);
  return;
}


/* address=140d354a0 name=FUN_140d354a0 */

undefined8 FUN_140d354a0(undefined8 *param_1)

{
  return *param_1;
}


/* address=140d354c0 name=FUN_140d354c0 */

undefined8 FUN_140d354c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=140d354e0 name=FUN_140d354e0 */

undefined8 FUN_140d354e0(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_140c66200(*param_2);
  *param_2 = 0;
  *param_3 = 0;
  if (param_1[1] == 0) {
    uVar1 = 1;
  }
  else {
    lVar2 = FUN_140c66ba0(*param_1,param_1[1]);
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


/* address=140d35580 name=FUN_140d35580 */

bool FUN_140d35580(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 != 0) {
    FUN_140c66200(*param_2);
  }
  lVar1 = FUN_140c66ae0(*param_1,param_1[1]);
  *param_2 = lVar1;
  return *param_2 != 0;
}


/* address=140d35600 name=FUN_140d35600 */

bool FUN_140d35600(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140d369e0(*param_1,0,param_1[1]);
  return lVar1 != 0;
}


/* address=140d35650 name=FUN_140d35650 */

bool FUN_140d35650(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_3 == param_1[1]) {
    iVar1 = FUN_140c663d0(*param_1,param_2,param_3);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* address=140d356c0 name=FUN_140d356c0 */

bool FUN_140d356c0(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined *local_18 [3];
  
  iVar1 = FUN_140d36a70(param_1,local_18,1);
  if (iVar1 != 0) {
    *param_2 = *local_18[0];
  }
  return iVar1 != 0;
}


/* address=140d35710 name=FUN_140d35710 */

bool FUN_140d35710(undefined8 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 local_18 [12];
  
  iVar1 = FUN_140d36ae0(param_1,local_18,2);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=140d357b0 name=FUN_140d357b0 */

bool FUN_140d357b0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18 [6];
  
  iVar1 = FUN_140d36ae0(param_1,local_18,3);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=140d35800 name=FUN_140d35800 */

bool FUN_140d35800(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18 [6];
  
  iVar1 = FUN_140d36ae0(param_1,local_18,4);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=140d35920 name=FUN_140d35920 */

bool FUN_140d35920(longlong *param_1,undefined *param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    *param_2 = *(undefined *)(*param_1 + -1 + param_1[1]);
    param_1[1] = param_1[1] + -1;
  }
  return lVar1 != 0;
}


/* address=140d35980 name=FUN_140d35980 */

bool FUN_140d35980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140d36a70(param_1,local_18,param_3);
  if (iVar1 != 0) {
    FUN_140d35430(param_2,local_18[0],param_3);
  }
  return iVar1 != 0;
}


/* address=140d359e0 name=FUN_140d359e0 */

bool FUN_140d359e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140d36a70(param_1,local_18,param_3);
  if (iVar1 != 0) {
    FUN_140d36a20(param_2,local_18[0],param_3);
  }
  return iVar1 != 0;
}


/* address=140d35a40 name=FUN_140d35a40 */

void FUN_140d35a40(undefined8 param_1,undefined8 param_2)

{
  FUN_140d36b90(param_1,param_2,1);
  return;
}


/* address=140d35a70 name=FUN_140d35a70 */

void FUN_140d35a70(undefined8 param_1,undefined8 param_2)

{
  FUN_140d36b90(param_1,param_2,2);
  return;
}


/* address=140d35aa0 name=FUN_140d35aa0 */

void FUN_140d35aa0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d36b90(param_1,param_2,3);
  return;
}


/* address=140d35ad0 name=FUN_140d35ad0 */

undefined8 FUN_140d35ad0(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_140d354c0(param_1);
  uVar2 = FUN_140d354a0(param_1);
  lVar3 = FUN_140d369e0(uVar2,param_3,uVar1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = FUN_140d354a0(param_1);
    uVar1 = FUN_140d35980(param_1,param_2,lVar3 - lVar4);
  }
  return uVar1;
}


/* address=140d35b60 name=FUN_140d35b60 */

int FUN_140d35b60(undefined8 param_1,ulonglong *param_2)

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
  while (lVar3 = FUN_140d354c0(param_1), lVar3 != 0) {
    pbVar4 = (byte *)FUN_140d354a0(param_1);
    bVar1 = *pbVar4;
    iVar2 = FUN_140c66640(bVar1);
    if (iVar2 == 0) break;
    FUN_140d35470(param_1,1);
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


/* address=140d35c60 name=wcstoul */

/* Library Function - Single Match
    wcstoul
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2012 Debug */

ulong __cdecl wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = FUN_140d370b0(_Str,_EndPtr,_Radix,1);
  return uVar1;
}


/* address=140d35ca0 name=FUN_140d35ca0 */

void FUN_140d35ca0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140d370b0(param_1,param_2,param_3,0);
  return;
}


/* address=140d35ce0 name=FUN_140d35ce0 */

undefined4 FUN_140d35ce0(undefined *param_1,int param_2)

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
  iVar1 = FUN_140d36cb0(local_30,&local_34);
  if ((iVar1 == 0) || (param_2 != local_34)) {
    local_38 = 0;
  }
  else {
    local_38 = 1;
  }
  return local_38;
}


/* address=140d35d50 name=FUN_140d35d50 */

undefined8 FUN_140d35d50(void *param_1,size_t param_2,size_t param_3)

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
    iVar1 = FUN_140d35470(param_2,local_18[0]);
    if (iVar1 == 0) {
      FID_conflict__assert((wchar_t *)&DAT_1413bbb68,(wchar_t *)s_D_1413bbaa0,0x1ac);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=140d35dd0 name=_aligned_recalloc */

/* Library Function - Single Match
    _aligned_recalloc
   
   Library: Visual Studio */

void * __cdecl _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_140d36d70(_Memory,_Count,_Size,_Alignment,0,0,0);
  return pvVar1;
}


/* address=140d35e30 name=FUN_140d35e30 */

void FUN_140d35e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_140d36d70(param_1,param_2,param_3,param_4,local_10,param_6,1);
  return;
}


/* address=140d35eb0 name=FUN_140d35eb0 */

undefined8 FUN_140d35eb0(wchar_t *param_1,ulonglong *param_2)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_38;
  wchar_t *local_20 [4];
  
  uVar1 = wcstoul(param_1,local_20,2);
  if ((uVar1 != 0) && (iVar2 = FUN_140d36670(local_20), iVar2 != 0)) {
    *param_2 = 0;
    lVar3 = FUN_140d354a0(local_20);
    uVar4 = FUN_140d354c0(local_20);
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


/* address=140d36170 name=FUN_140d36170 */

undefined8 FUN_140d36170(wchar_t *param_1,wchar_t **param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_18;
  
  local_18 = 0;
  iVar1 = FUN_140d35ce0(param_1,param_4);
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


/* address=140d361f0 name=FUN_140d361f0 */

undefined8 FUN_140d361f0(undefined8 param_1,wchar_t **param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_28 [2];
  wchar_t local_20 [16];
  
  iVar1 = FUN_140d36170(param_1,local_20,local_28,param_4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    if (local_28[0] == 0) {
      FUN_140d35430(param_2,0,0);
    }
    else {
      if (param_2 == (wchar_t **)0x0) {
        FID_conflict__assert((wchar_t *)&DAT_1413bbd08,(wchar_t *)s_D_1413bbc40,0x23c);
      }
      uVar2 = wcstoul(local_20,param_2,4);
      if ((uVar2 == 0) || (lVar3 = FUN_140d354c0(local_20), lVar3 != 0)) {
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


/* address=140d362c0 name=FUN_140d362c0 */

undefined8
FUN_140d362c0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_28 [2];
  undefined local_20 [32];
  
  iVar1 = FUN_140d36170(param_1,local_20,local_28,param_3);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (local_28[0] == 0) {
      *param_2 = param_4;
    }
    else {
      iVar1 = FUN_140d35eb0(local_20,param_2);
      if ((iVar1 == 0) || (lVar2 = FUN_140d354c0(local_20), lVar2 != 0)) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140d36350 name=FUN_140d36350 */

undefined8
FUN_140d36350(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  int local_34;
  wchar_t local_30 [8];
  wchar_t *local_20 [4];
  
  iVar1 = FUN_140d36170(param_1,local_30,&local_34,param_3);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    if (local_34 == 0) {
      *param_2 = param_4;
    }
    else {
      uVar2 = wcstoul(local_30,local_20,1);
      if (((uVar2 == 0) || (lVar3 = FUN_140d354c0(local_20), lVar3 != 1)) ||
         (lVar3 = FUN_140d354c0(local_30), lVar3 != 0)) {
        return 0;
      }
      pcVar4 = (char *)FUN_140d354a0(local_20);
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


/* address=140d36440 name=FUN_140d36440 */

undefined8 FUN_140d36440(undefined *param_1)

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
  iVar1 = FUN_140d356c0(local_30,&local_38);
  if ((iVar1 == 0) || (7 < local_38)) {
    uVar2 = 0;
  }
  else if (local_38 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_140d35920(local_30,local_37);
    if ((iVar1 == 0) || (((uint)local_37[0] & (1 << (local_38 & 0x1f)) - 1U) != 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d364e0 name=FUN_140d364e0 */

undefined4 FUN_140d364e0(undefined8 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_24;
  
  iVar1 = FUN_140d36440(param_1);
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    uVar2 = (param_2 >> 3) + 1;
    uVar3 = FUN_140d354c0(param_1);
    if ((uVar2 < uVar3) &&
       (lVar4 = FUN_140d354a0(param_1),
       ((uint)*(byte *)(lVar4 + (ulonglong)uVar2) & 1 << (7 - ((byte)param_2 & 7) & 0x1f)) != 0)) {
      local_24 = 1;
    }
    else {
      local_24 = 0;
    }
  }
  return local_24;
}


/* address=140d36590 name=FUN_140d36590 */

undefined8 FUN_140d36590(undefined *param_1,uint *param_2)

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
  iVar1 = FUN_140d356c0(local_30,&local_38);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_2 != (uint *)0x0) {
      local_34 = (uint)((local_38 & 0x80) != 0);
      *param_2 = local_34;
    }
    iVar1 = FUN_140d356c0(local_30,local_37);
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


/* address=140d36670 name=FUN_140d36670 */

undefined4 FUN_140d36670(undefined8 param_1)

{
  int iVar1;
  undefined4 local_18;
  int local_14 [5];
  
  iVar1 = FUN_140d36590(param_1,local_14);
  if ((iVar1 == 0) || (local_14[0] != 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d366c0 name=FUN_140d366c0 */

bool FUN_140d366c0(undefined *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  bool bVar4;
  byte local_38;
  byte local_37 [7];
  undefined local_30 [32];
  
  lVar2 = FUN_140d354c0(param_1);
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
    while (iVar1 = FUN_140d356c0(local_30,local_37), iVar1 != 0) {
      if (((local_38 & 0x80) == 0) && (local_37[0] == 0x80)) {
        return false;
      }
      local_38 = local_37[0];
    }
    bVar4 = (local_38 & 0x80) == 0;
  }
  return bVar4;
}


/* address=140d36770 name=FUN_140d36770 */

undefined8 FUN_140d36770(undefined *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong local_78;
  undefined8 local_70;
  undefined local_68 [8];
  undefined local_60 [16];
  undefined local_50 [64];
  
  iVar1 = FUN_140d376f0(local_50,0x20);
  if (iVar1 != 0) {
    puVar3 = local_60;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar1 = FUN_140d36c10(local_60,&local_78);
    if (iVar1 != 0) {
      if (local_78 < 0x50) {
        iVar1 = FUN_140d37160(local_50,local_78 / 0x28);
        if ((iVar1 == 0) || (iVar1 = FUN_140d380f0(local_50,0x2e), iVar1 == 0)) goto LAB_140d368d8;
        iVar1 = FUN_140d37160(local_50,local_78 % 0x28);
      }
      else {
        iVar1 = FUN_140d37f00(local_50,&DAT_1413bbd18,2);
        if (iVar1 == 0) goto LAB_140d368d8;
        iVar1 = FUN_140d37160(local_50,local_78 - 0x50);
      }
      if (iVar1 != 0) {
        while (lVar2 = FUN_140d354c0(local_60), lVar2 != 0) {
          iVar1 = FUN_140d36c10(local_60,&local_78);
          if (((iVar1 == 0) || (iVar1 = FUN_140d380f0(local_50,0x2e), iVar1 == 0)) ||
             (iVar1 = FUN_140d37160(local_50), iVar1 == 0)) goto LAB_140d368d8;
        }
        iVar1 = FUN_140d380f0(local_50,0);
        if ((iVar1 != 0) && (iVar1 = FUN_140d37820(local_50,&local_70,local_68), iVar1 != 0)) {
          return local_70;
        }
      }
    }
  }
LAB_140d368d8:
  FUN_140d377b0(local_50);
  return 0;
}


/* address=140d36900 name=FUN_140d36900 */

void FUN_140d36900(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140d373b0(param_1,1,param_3,param_2);
  return;
}


/* address=140d36940 name=FUN_140d36940 */

void FUN_140d36940(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140d373b0(param_1,0,param_3,param_2);
  return;
}


/* address=140d36980 name=FUN_140d36980 */

ushort FUN_140d36980(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}


/* address=140d369a0 name=FUN_140d369a0 */

uint FUN_140d369a0(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=140d369c0 name=FUN_140d369c0 */

ulonglong FUN_140d369c0(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=140d369e0 name=FUN_140d369e0 */

undefined8 FUN_140d369e0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e28500(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140d36a20 name=FUN_140d36a20 */

undefined8 FUN_140d36a20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d36a70 name=FUN_140d36a70 */

bool FUN_140d36a70(longlong *param_1,longlong *param_2,ulonglong param_3)

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


/* address=140d36ae0 name=FUN_140d36ae0 */

undefined8 FUN_140d36ae0(undefined8 param_1,ulonglong *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18 [3];
  
  local_28 = 0;
  iVar1 = FUN_140d36a70(param_1,local_18,param_3);
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


/* address=140d36b90 name=FUN_140d36b90 */

undefined8 FUN_140d36b90(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140d36ae0(param_1,local_18,param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (3 < param_3) {
      FID_conflict__assert((wchar_t *)s_l_1413bb878,(wchar_t *)s_D_1413bb7b0,0xce);
    }
    uVar2 = FUN_140d35980(param_1,param_2,local_18[0]);
  }
  return uVar2;
}


/* address=140d36c10 name=FUN_140d36c10 */

undefined8 FUN_140d36c10(undefined8 param_1,ulonglong *param_2)

{
  int iVar1;
  byte local_18 [8];
  ulonglong local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = FUN_140d356c0(param_1,local_18);
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


/* address=140d36cb0 name=FUN_140d36cb0 */

undefined8 FUN_140d36cb0(undefined8 param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte local_28 [4];
  uint local_24;
  uint local_20;
  uint local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_140d356c0(param_1,local_28);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_24 = (local_28[0] & 0xe0) << 0x18;
    local_20 = local_28[0] & 0x1f;
    if (local_20 == 0x1f) {
      iVar1 = FUN_140d36c10(param_1,&local_18);
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


/* address=140d36d70 name=FUN_140d36d70 */

undefined8
FUN_140d36d70(undefined *param_1,undefined *param_2,uint *param_3,longlong *param_4,
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
      FID_conflict__assert((wchar_t *)s_o_1413bb968,(wchar_t *)s_D_1413bb8a0,0x14d);
    }
    if (param_6 != (undefined4 *)0x0) {
      FID_conflict__assert((wchar_t *)s_o_1413bba68,(wchar_t *)s_D_1413bb9a0,0x14e);
    }
  }
  else {
    *param_5 = 0;
    *param_6 = 0;
  }
  iVar1 = FUN_140d36cb0(local_48,local_58);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = local_58[0];
    }
    iVar1 = FUN_140d356c0(local_48,local_78);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      local_38 = FUN_140d354c0(param_1);
      local_68 = FUN_140d354c0(local_48);
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
          uVar2 = FUN_140d35980(param_1,local_res10,local_68);
          return uVar2;
        }
        if ((local_70 == 0) || (4 < local_70)) {
          return 0;
        }
        iVar1 = FUN_140d36ae0(local_48,&local_50,local_70);
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
      uVar2 = FUN_140d35980(param_1,local_res10,local_60);
    }
  }
  return uVar2;
}


/* address=140d370b0 name=FUN_140d370b0 */

undefined8 FUN_140d370b0(void *param_1,undefined *param_2,int param_3,int param_4)

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
  else if ((param_4 == 0) || (iVar1 = FUN_140d35470(local_res10,local_20), iVar1 != 0)) {
    uVar3 = 1;
  }
  else {
    FID_conflict__assert((wchar_t *)&DAT_1413bbc38,(wchar_t *)s_D_1413bbb70,0x1d3);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d37160 name=FUN_140d37160 */

void FUN_140d37160(undefined8 param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined auStack_48 [32];
  char local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_48;
  _snprintf(local_28,0x18,&DAT_1413bbd10,param_2);
  sVar1 = strlen(local_28);
  FUN_140d37f00(param_1,local_28,sVar1);
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=140d371d0 name=FUN_140d371d0 */

undefined8 FUN_140d371d0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte local_18;
  byte local_17 [23];
  
  iVar1 = FUN_140d356c0(param_1,&local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_140c66640(local_18);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_140d356c0(param_1,local_17);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_140c66640(local_17[0]);
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


/* address=140d37260 name=FUN_140d37260 */

bool FUN_140d37260(int param_1,undefined4 param_2,int param_3)

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


/* address=140d373b0 name=FUN_140d373b0 */

undefined8 FUN_140d373b0(undefined *param_1,int param_2,int param_3,int *param_4)

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
    iVar1 = FUN_140d371d0(local_48,&local_60);
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
    iVar1 = FUN_140d371d0(local_48,&local_60);
    if (iVar1 == 0) {
      return 0;
    }
    local_68 = local_60 * 100;
    iVar1 = FUN_140d371d0(local_48,&local_60);
    if (iVar1 == 0) {
      return 0;
    }
    local_68 = local_68 + local_60;
  }
  iVar1 = FUN_140d371d0(local_48,&local_58);
  if (((((((iVar1 == 0) || (local_58 < 1)) || (0xc < local_58)) ||
        ((iVar1 = FUN_140d371d0(local_48,&local_30), iVar1 == 0 ||
         (iVar1 = FUN_140d37260(local_68,local_58,local_30), iVar1 == 0)))) ||
       ((iVar1 = FUN_140d371d0(local_48,&local_2c), iVar1 == 0 ||
        ((0x17 < local_2c || (iVar1 = FUN_140d371d0(local_48,&local_28), iVar1 == 0)))))) ||
      (0x3b < local_28)) ||
     (((iVar1 = FUN_140d371d0(local_48,local_24), iVar1 == 0 || (0x3b < local_24[0])) ||
      (iVar1 = FUN_140d356c0(local_48,local_64), iVar1 == 0)))) {
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
    iVar1 = FUN_140d371d0(local_48,&local_38);
    if (((iVar1 == 0) || (0x17 < local_38)) ||
       ((iVar1 = FUN_140d371d0(local_48,&local_34), iVar1 == 0 || (0x3b < local_34)))) {
      return 0;
    }
    local_50 = local_5c * (local_38 * 0xe10 + local_34 * 0x3c);
  }
  lVar3 = FUN_140d354c0(local_48);
  if (lVar3 == 0) {
    if (param_4 != (int *)0x0) {
      param_4[5] = local_68 + -0x76c;
      param_4[4] = local_58 + -1;
      param_4[3] = local_30;
      param_4[2] = local_2c;
      param_4[1] = local_28;
      *param_4 = local_24[0];
      if ((local_50 != 0) && (iVar1 = FUN_140dcba60(param_4,0,local_50), iVar1 == 0)) {
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


/* address=140d376c0 name=FUN_140d376c0 */

void FUN_140d376c0(undefined8 param_1)

{
  FUN_140d38bd0(param_1,0,0x30);
  return;
}


/* address=140d376f0 name=FUN_140d376f0 */

undefined8 FUN_140d376f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_140d376c0(param_1);
  lVar1 = FUN_140c660d0(param_2);
  if ((param_2 == 0) || (lVar1 != 0)) {
    FUN_140d38c10(param_1,lVar1,param_2,1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d37760 name=FUN_140d37760 */

undefined8 FUN_140d37760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d376c0(param_1);
  FUN_140d38c10(param_1,param_2,param_3,0);
  return 1;
}


/* address=140d377b0 name=FUN_140d377b0 */

void FUN_140d377b0(longlong param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    FID_conflict__assert((wchar_t *)s___1413bbde8,(wchar_t *)s_D_1413bbd20,0x3e);
  }
  if ((*(char *)(param_1 + 8) == '\0') && ((*(uint *)(param_1 + 0x28) & 1) != 0)) {
    FUN_140c66200(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}


/* address=140d37820 name=FUN_140d37820 */

undefined8 FUN_140d37820(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = FUN_140d37900(param_1);
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
      FUN_140d377b0(param_1);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    FUN_140c6c4e0(0xe,0,0x42,s_D__a_1_s_target_release_build_bo_1413bbef0,0x7f);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d37900 name=FUN_140d37900 */

undefined8 FUN_140d37900(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte local_48;
  undefined local_47;
  ulonglong local_38;
  ulonglong local_20;
  
  plVar3 = (longlong *)FUN_140d38e80(param_1);
  if ((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 3) >> 1 & 1) != 0)) {
    return 0;
  }
  if (*param_1 == 0) {
    return 1;
  }
  if (*(char *)(*param_1 + 8) == '\0') {
    FID_conflict__assert((wchar_t *)s_c_1413bc028,(wchar_t *)s_D_1413bbf60,0xaf);
  }
  lVar1 = *param_1;
  if (*(longlong **)(lVar1 + 0x10) != plVar3) {
    FID_conflict__assert((wchar_t *)s_c_1413bc128,(wchar_t *)s_D_1413bc060,0xb1);
  }
  uVar4 = (ulonglong)*(byte *)(lVar1 + 0x20) + *(longlong *)(lVar1 + 0x18);
  iVar2 = FUN_140d37900(*param_1);
  if (((iVar2 != 0) && (*(ulonglong *)(lVar1 + 0x18) <= uVar4)) && (uVar4 <= (ulonglong)plVar3[1]))
  {
    local_38 = plVar3[1] - uVar4;
    if ((*(uint *)(lVar1 + 0x24) & 1) != 0) {
      if (*(char *)(lVar1 + 0x20) != '\x01') {
        FID_conflict__assert((wchar_t *)s_c_1413bc218,(wchar_t *)s_D_1413bc150,0xc3);
      }
      if (0xfffffffe < local_38) {
        FUN_140c6c4e0(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_1413bc250,0xc6);
        goto LAB_140d37c4f;
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
        iVar2 = FUN_140d38e20(plVar3,0,(longlong)(int)(local_48 - 1));
        if (iVar2 == 0) goto LAB_140d37c4f;
        FUN_140d38b80(*plVar3 + uVar4 + (longlong)(int)(local_48 - 1),*plVar3 + uVar4,local_38);
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
    FUN_140c6c4e0(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_1413bc2c0,0xed);
  }
LAB_140d37c4f:
  *(uint *)(plVar3 + 3) = *(uint *)(plVar3 + 3) | 2;
  return 0;
}


/* address=140d37c70 name=FUN_140d37c70 */

longlong FUN_140d37c70(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    FID_conflict__assert((wchar_t *)s_c_1413bc3f8,(wchar_t *)s_D_1413bc330,0xfc);
  }
  if (*(char *)(param_1 + 1) == '\0') {
    lVar1 = param_1[2];
  }
  else {
    lVar1 = *(longlong *)param_1[2] + param_1[3] + (ulonglong)*(byte *)(param_1 + 4);
  }
  return lVar1;
}


/* address=140d37cf0 name=FUN_140d37cf0 */

longlong FUN_140d37cf0(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    FID_conflict__assert((wchar_t *)s_c_1413bc4e8,(wchar_t *)s_D_1413bc420,0x105);
  }
  if (*(char *)(param_1 + 1) == '\0') {
    lVar1 = param_1[3];
  }
  else {
    if (*(ulonglong *)(param_1[2] + 8) < (ulonglong)*(byte *)(param_1 + 4) + param_1[3]) {
      FID_conflict__assert((wchar_t *)s_c_1413bc5e0,(wchar_t *)s_D_1413bc510,0x108);
    }
    lVar1 = (*(longlong *)(param_1[2] + 8) - param_1[3]) - (ulonglong)*(byte *)(param_1 + 4);
  }
  return lVar1;
}


/* address=140d37db0 name=FUN_140d37db0 */

void FUN_140d37db0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d38ff0(param_1,param_2,1);
  return;
}


/* address=140d37de0 name=FUN_140d37de0 */

void FUN_140d37de0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d38ff0(param_1,param_2,2);
  return;
}


/* address=140d37e10 name=FUN_140d37e10 */

void FUN_140d37e10(undefined8 param_1,undefined8 param_2)

{
  FUN_140d38ff0(param_1,param_2,3);
  return;
}


/* address=140d37e40 name=FUN_140d37e40 */

undefined8 FUN_140d37e40(undefined8 param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_140d37900(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = (byte)(param_3 >> 0x18) & 0xe0;
    if ((param_3 & 0x1fffffff) < 0x1f) {
      iVar2 = FUN_140d380f0(param_1,(uint)bVar1 | param_3 & 0xff);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_140d380f0(param_1,bVar1 | 0x1f);
      if ((iVar2 == 0) || (iVar2 = FUN_140d39040(param_1,param_3 & 0x1fffffff), iVar2 == 0)) {
        return 0;
      }
    }
    uVar3 = FUN_140d38eb0(param_1,param_2,1,1);
  }
  return uVar3;
}


/* address=140d37f00 name=FUN_140d37f00 */

bool FUN_140d37f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140d37fb0(param_1,local_18,param_3);
  if (iVar1 != 0) {
    FUN_140d38b30(local_18[0],param_2,param_3);
  }
  return iVar1 != 0;
}


/* address=140d37f60 name=FUN_140d37f60 */

bool FUN_140d37f60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140d37fb0(param_1,local_18,param_2);
  if (iVar1 != 0) {
    FUN_140d38bd0(local_18[0],0,param_2);
  }
  return iVar1 != 0;
}


/* address=140d37fb0 name=FUN_140d37fb0 */

undefined8 FUN_140d37fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d37900(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_140d38e80(param_1);
    iVar1 = FUN_140d38e20(uVar2,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=140d38010 name=FUN_140d38010 */

undefined8 FUN_140d38010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d37900(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_140d38e80(param_1);
    iVar1 = FUN_140d38ca0(uVar2,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=140d38070 name=FUN_140d38070 */

undefined8 FUN_140d38070(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140d38e80(param_1);
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


/* address=140d380f0 name=FUN_140d380f0 */

void FUN_140d380f0(undefined8 param_1,undefined param_2)

{
  FUN_140d39110(param_1,param_2,1);
  return;
}


/* address=140d38120 name=FUN_140d38120 */

void FUN_140d38120(undefined8 param_1,undefined2 param_2)

{
  FUN_140d39110(param_1,param_2,2);
  return;
}


/* address=140d38180 name=FUN_140d38180 */

void FUN_140d38180(undefined8 param_1,undefined4 param_2)

{
  FUN_140d39110(param_1,param_2,3);
  return;
}


/* address=140d381b0 name=FUN_140d381b0 */

void FUN_140d381b0(undefined8 param_1,undefined4 param_2)

{
  FUN_140d39110(param_1,param_2,4);
  return;
}


/* address=140d38210 name=FUN_140d38210 */

void FUN_140d38210(undefined8 param_1,undefined8 param_2)

{
  FUN_140d39110(param_1,param_2,8);
  return;
}


/* address=140d38270 name=FUN_140d38270 */

void FUN_140d38270(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = FUN_140d38e80(param_1);
    if (*(char *)(*param_1 + 8) == '\0') {
      FID_conflict__assert((wchar_t *)s_c_1413bc938,(wchar_t *)s_D_1413bc870,0x1d4);
    }
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*param_1 + 0x18);
    *(undefined8 *)(*param_1 + 0x10) = 0;
    *param_1 = 0;
  }
  return;
}


/* address=140d38300 name=FUN_140d38300 */

void FUN_140d38300(undefined8 param_1,undefined8 param_2)

{
  FUN_140d38330(param_1,param_2,2);
  return;
}


/* address=140d38330 name=FUN_140d38330 */

undefined8 FUN_140d38330(undefined8 param_1,ulonglong param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_40;
  undefined local_38 [56];
  
  iVar3 = FUN_140d37e40(param_1,local_38,param_3);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    bVar2 = false;
    for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
      uVar4 = param_2 >> (('\a' - (char)local_40) * '\b' & 0x3fU);
      cVar1 = (char)uVar4;
      if (bVar2) {
LAB_140d383ec:
        iVar3 = FUN_140d380f0(local_38,cVar1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else if (cVar1 != '\0') {
        if (((uVar4 & 0x80) != 0) && (iVar3 = FUN_140d380f0(local_38,0), iVar3 == 0)) {
          return 0;
        }
        bVar2 = true;
        goto LAB_140d383ec;
      }
    }
    if ((bVar2) || (iVar3 = FUN_140d380f0(local_38,0), iVar3 != 0)) {
      uVar5 = FUN_140d37900(param_1);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}


/* address=140d38470 name=FUN_140d38470 */

void FUN_140d38470(undefined8 param_1,longlong param_2,undefined4 param_3)

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
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_78;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 < 0) {
    FUN_140e286a0(local_20,&local_res10,8);
    local_58 = 7;
    while (((0 < local_58 && (local_20[local_58] == 0xff)) &&
           ((local_20[local_58 + -1] & 0x80) != 0))) {
      local_58 = local_58 + -1;
    }
    iVar1 = FUN_140d37e40(param_1,local_50,local_res18);
    if (iVar1 != 0) {
      for (local_54 = local_58; -1 < local_54; local_54 = local_54 + -1) {
        iVar1 = FUN_140d380f0(local_50,local_20[local_54]);
        if (iVar1 == 0) goto LAB_140d38581;
      }
      FUN_140d37900(param_1);
    }
  }
  else {
    FUN_140d38330(param_1,param_2,param_3);
  }
LAB_140d38581:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=140d385a0 name=FUN_140d385a0 */

undefined8 FUN_140d385a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_140d37e40(param_1,local_38,4);
  if (((iVar1 != 0) && (iVar1 = FUN_140d37f00(local_38,param_2,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_140d37900(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140d38610 name=FUN_140d38610 */

undefined8 FUN_140d38610(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined local_48;
  undefined local_40 [64];
  
  iVar1 = FUN_140d37e40(param_1,local_40,1);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = 0xff;
    }
    iVar1 = FUN_140d380f0(local_40,local_48);
    if ((iVar1 != 0) && (iVar1 = FUN_140d37900(param_1), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}


/* address=140d38690 name=FUN_140d38690 */

undefined8 FUN_140d38690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong local_28;
  ulonglong local_20;
  undefined local_18 [24];
  
  iVar1 = FUN_140d37900(param_1);
  if (iVar1 != 0) {
    FUN_140d35430(local_18,param_2,param_3);
    iVar1 = FUN_140d391e0(local_18,&local_28);
    if ((((iVar1 != 0) && (iVar1 = FUN_140d391e0(local_18,&local_20), iVar1 != 0)) && (local_28 < 3)
        ) && (((1 < local_28 || (local_20 < 0x28)) && (local_20 < 0xffffffffffffffb0)))) {
      iVar1 = FUN_140d39040(param_1,local_28 * 0x28 + local_20);
      while (iVar1 != 0) {
        lVar2 = FUN_140d354c0(local_18);
        if (lVar2 == 0) {
          return 1;
        }
        iVar1 = FUN_140d391e0(local_18,&local_28);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_140d39040(param_1,local_28);
      }
    }
  }
  return 0;
}


/* address=140d38790 name=FUN_140d38790 */

undefined4 FUN_140d38790(undefined8 param_1)

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
  
  iVar1 = FUN_140d37900(param_1);
  if (iVar1 == 0) {
    local_60 = 0;
  }
  else {
    local_78 = 0;
    local_28 = FUN_140d37cf0(param_1);
    FUN_140d37c70(param_1);
    FUN_140d35430(local_38);
    while (lVar2 = FUN_140d354c0(local_38), lVar2 != 0) {
      pvVar3 = _aligned_recalloc(local_38,0,0,0);
      if ((int)pvVar3 == 0) {
        FUN_140c6c4e0(0xe,0,0x42,s_D__a_1_s_target_release_build_bo_1413bc970,0x283);
        return 0;
      }
      local_78 = local_78 + 1;
    }
    if (local_78 < 2) {
      local_60 = 1;
    }
    else if (local_78 < 0x1000000000000000) {
      local_60 = 0;
      lVar2 = FUN_140d37cf0(param_1);
      uVar4 = FUN_140d37c70(param_1);
      lVar5 = FUN_140c66ba0(uVar4,lVar2);
      lVar6 = FUN_140c660d0(local_78 * 0x10);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        FUN_140d35430(local_38,lVar5);
        for (local_58 = 0; local_58 < local_78; local_58 = local_58 + 1) {
          pvVar3 = _aligned_recalloc(local_38,lVar6 + local_58 * 0x10,0,0);
          if ((int)pvVar3 == 0) goto LAB_140d38a63;
        }
        FUN_140e13e20(lVar6,local_78,0x10,&LAB_140d39260);
        local_20 = FUN_140d37c70(param_1);
        local_50 = 0;
        for (local_68 = 0; local_68 < local_78; local_68 = local_68 + 1) {
          local_18 = FUN_140d354c0(lVar6 + local_68 * 0x10);
          uVar4 = FUN_140d354a0(lVar6 + local_68 * 0x10);
          FUN_140d38b30(local_20 + local_50,uVar4,local_18);
          lVar7 = FUN_140d354c0(lVar6 + local_68 * 0x10);
          local_50 = local_50 + lVar7;
        }
        if (local_50 != lVar2) {
          FID_conflict__assert((wchar_t *)s_o_1413bcaa8,(wchar_t *)s_D_1413bc9e0,0x2a8);
        }
        local_60 = 1;
      }
LAB_140d38a63:
      FUN_140c66200(lVar5);
      FUN_140c66200(lVar6);
    }
    else {
      local_60 = 0;
    }
  }
  return local_60;
}


/* address=140d38a90 name=FUN_140d38a90 */

ushort FUN_140d38a90(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}


/* address=140d38ab0 name=FUN_140d38ab0 */

uint FUN_140d38ab0(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=140d38ad0 name=FUN_140d38ad0 */

ulonglong FUN_140d38ad0(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=140d38af0 name=FUN_140d38af0 */

int FUN_140d38af0(void *param_1,void *param_2,size_t param_3)

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


/* address=140d38b30 name=FUN_140d38b30 */

undefined8 FUN_140d38b30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d38b80 name=FUN_140d38b80 */

undefined8 FUN_140d38b80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d38bd0 name=FUN_140d38bd0 */

undefined8 FUN_140d38bd0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d38c10 name=FUN_140d38c10 */

void FUN_140d38c10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

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


/* address=140d38ca0 name=FUN_140d38ca0 */

undefined8 FUN_140d38ca0(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong local_28;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = param_1[1] + param_3;
  if (uVar1 < (ulonglong)param_1[1]) {
    FUN_140c6c4e0(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_1413bbe10,0x51);
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) {
LAB_140d38dc9:
      if (param_2 != (longlong *)0x0) {
        *param_2 = *param_1 + param_1[1];
      }
      return 1;
    }
    if ((*(uint *)(param_1 + 3) & 1) == 0) {
      FUN_140c6c4e0(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_1413bbe80,0x57);
    }
    else {
      local_28 = param_1[2] << 1;
      if ((local_28 < (ulonglong)param_1[2]) || (local_28 < uVar1)) {
        local_28 = uVar1;
      }
      lVar2 = FUN_140c662b0(*param_1,local_28);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        param_1[2] = local_28;
        goto LAB_140d38dc9;
      }
    }
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 2;
  return 0;
}


/* address=140d38e20 name=FUN_140d38e20 */

bool FUN_140d38e20(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_140d38ca0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_3;
  }
  return iVar1 != 0;
}


/* address=140d38e80 name=FUN_140d38e80 */

longlong FUN_140d38e80(longlong param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x10);
  }
  return param_1;
}


/* address=140d38eb0 name=FUN_140d38eb0 */

bool FUN_140d38eb0(longlong *param_1,longlong param_2,char param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*param_1 != 0) {
    FID_conflict__assert((wchar_t *)s_c_1413bc748,(wchar_t *)s_D_1413bc680,0x111);
  }
  if ((param_4 != 0) && (param_3 != '\x01')) {
    FID_conflict__assert((wchar_t *)s___1413bc838,(wchar_t *)s_D_1413bc770,0x112);
  }
  lVar2 = FUN_140d38e80(param_1);
  local_18 = *(undefined8 *)(lVar2 + 8);
  iVar1 = FUN_140d38e20(lVar2,&local_20,param_3);
  if (iVar1 != 0) {
    FUN_140d38bd0(local_20,0,param_3);
    FUN_140d376c0(param_2);
    *(undefined *)(param_2 + 8) = 1;
    *(longlong *)(param_2 + 0x10) = lVar2;
    *(undefined8 *)(param_2 + 0x18) = local_18;
    *(char *)(param_2 + 0x20) = param_3;
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe | param_4 & 1;
    *param_1 = param_2;
  }
  return iVar1 != 0;
}


/* address=140d38ff0 name=FUN_140d38ff0 */

undefined8 FUN_140d38ff0(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d37900(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d38eb0(param_1,param_2,param_3,0);
  }
  return uVar2;
}


/* address=140d39040 name=FUN_140d39040 */

undefined8 FUN_140d39040(undefined8 param_1,ulonglong param_2)

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
    iVar1 = FUN_140d380f0(param_1,local_28);
  } while (iVar1 != 0);
  return 0;
}


/* address=140d39110 name=FUN_140d39110 */

undefined8 FUN_140d39110(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_res10;
  ulonglong local_28;
  longlong local_18 [3];
  
  iVar1 = FUN_140d37fb0(param_1,local_18,param_3);
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
      lVar2 = FUN_140d38e80(param_1);
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 2;
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140d391e0 name=FUN_140d391e0 */

undefined4 FUN_140d391e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char local_18 [4];
  undefined4 local_14;
  
  iVar1 = FUN_140d35b60(param_1,param_2);
  if (iVar1 == 0) {
    local_14 = 0;
  }
  else {
    iVar1 = FUN_140d356c0(param_1,local_18);
    if ((iVar1 == 0) || ((local_18[0] == '.' && (lVar2 = FUN_140d354c0(param_1), lVar2 != 0)))) {
      local_14 = 1;
    }
    else {
      local_14 = 0;
    }
  }
  return local_14;
}


/* address=140d39350 name=FUN_140d39350 */

void FUN_140d39350(void)

{
  return;
}


/* address=140d393a0 name=FUN_140d393a0 */

char * FUN_140d393a0(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    pcVar1 = s_BoringSSL_1413bcad0;
  }
  else if (param_1 == 1) {
    pcVar1 = s_compiler__n_a_1413bcae0;
  }
  else if (param_1 == 2) {
    pcVar1 = s_built_on__n_a_1413bcaf0;
  }
  else if (param_1 == 3) {
    pcVar1 = s_platform__n_a_1413bcb00;
  }
  else if (param_1 == 4) {
    pcVar1 = s_OPENSSLDIR__n_a_1413bcb10;
  }
  else {
    pcVar1 = s_not_available_1413bcb20;
  }
  return pcVar1;
}


/* address=140d394e0 name=FUN_140d394e0 */

void FUN_140d394e0(void)

{
  return;
}


/* address=140d39500 name=FUN_140d39500 */

void FUN_140d39500(int *param_1)

{
  FUN_140d396f0(&DAT_1413eb0c0);
  if (*param_1 != -1) {
    *param_1 = *param_1 + 1;
  }
  FUN_140d39750(&DAT_1413eb0c0);
  return;
}


/* address=140d39550 name=FUN_140d39550 */

bool FUN_140d39550(int *param_1)

{
  int iVar1;
  
  FUN_140d396f0(&DAT_1413eb0c0);
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_1 != -1) {
    *param_1 = *param_1 + -1;
  }
  iVar1 = *param_1;
  FUN_140d39750(&DAT_1413eb0c0);
  return iVar1 == 0;
}


/* address=140d395d0 name=FUN_140d395d0 */

void FUN_140d395d0(PINIT_ONCE param_1,undefined8 param_2)

{
  BOOL BVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  BVar1 = InitOnceExecuteOnce(param_1,(PINIT_ONCE_FN)&LAB_140d39980,local_res10,(LPVOID *)0x0);
  if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


/* address=140d39610 name=FUN_140d39610 */

void FUN_140d39610(PSRWLOCK param_1)

{
  InitializeSRWLock(param_1);
  return;
}


/* address=140d39630 name=FUN_140d39630 */

void FUN_140d39630(PSRWLOCK param_1)

{
  AcquireSRWLockShared(param_1);
  return;
}


/* address=140d39650 name=FUN_140d39650 */

void FUN_140d39650(PSRWLOCK param_1)

{
  AcquireSRWLockExclusive(param_1);
  return;
}


/* address=140d39670 name=FUN_140d39670 */

void FUN_140d39670(PSRWLOCK param_1)

{
  ReleaseSRWLockShared(param_1);
  return;
}


/* address=140d39690 name=FUN_140d39690 */

void FUN_140d39690(PSRWLOCK param_1)

{
  ReleaseSRWLockExclusive(param_1);
  return;
}


/* address=140d396b0 name=FUN_140d396b0 */

void FUN_140d396b0(void)

{
  return;
}


/* address=140d396c0 name=FUN_140d396c0 */

void FUN_140d396c0(PSRWLOCK param_1)

{
  AcquireSRWLockShared(param_1);
  return;
}


/* address=140d396f0 name=FUN_140d396f0 */

void FUN_140d396f0(PSRWLOCK param_1)

{
  AcquireSRWLockExclusive(param_1);
  return;
}


/* address=140d39720 name=FUN_140d39720 */

void FUN_140d39720(PSRWLOCK param_1)

{
  ReleaseSRWLockShared(param_1);
  return;
}


/* address=140d39750 name=FUN_140d39750 */

void FUN_140d39750(PSRWLOCK param_1)

{
  ReleaseSRWLockExclusive(param_1);
  return;
}


/* address=140d39780 name=FUN_140d39780 */

undefined8 FUN_140d39780(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_140d395d0(&DAT_1413eb0f8,&LAB_140d399c0);
  if (DAT_1413eb104 == 0) {
    lVar2 = FUN_140d39b10();
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + (longlong)param_1 * 8);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d397e0 name=FUN_140d397e0 */

undefined8 FUN_140d397e0(int param_1,undefined8 param_2,code *param_3)

{
  BOOL BVar1;
  LPVOID local_18;
  
  FUN_140d395d0(&DAT_1413eb0f8,&LAB_140d399c0);
  if (DAT_1413eb104 != 0) {
    (*param_3)(param_2);
    return 0;
  }
  local_18 = (LPVOID)FUN_140d39b10();
  if (local_18 == (LPVOID)0x0) {
    local_18 = (LPVOID)_malloc_base(0x28);
    if (local_18 == (LPVOID)0x0) {
      (*param_3)(param_2);
      return 0;
    }
    FUN_140d39940(local_18,0,0x28);
    BVar1 = TlsSetValue(DAT_1413eb100,local_18);
    if (BVar1 == 0) {
      thunk_FUN_140e18570(local_18);
      (*param_3)(param_2);
      return 0;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1413eb0c8);
  *(code **)(&DAT_1413eb0d0 + (longlong)param_1 * 8) = param_3;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1413eb0c8);
  *(undefined8 *)((longlong)local_18 + (longlong)param_1 * 8) = param_2;
  return 1;
}


/* address=140d398f0 name=FUN_140d398f0 */

undefined8 FUN_140d398f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d39940 name=FUN_140d39940 */

undefined8 FUN_140d39940(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d39a00 name=tls_callback_0 */

void tls_callback_0(undefined8 param_1,int param_2)

{
  undefined auStack_78 [32];
  uint local_58;
  LPVOID local_50;
  ulonglong local_48;
  code *local_40 [5];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_78;
  if (((param_2 == 3) && (FUN_140d395d0(&DAT_1413eb0f8,&LAB_140d399c0), DAT_1413eb104 == 0)) &&
     (local_50 = TlsGetValue(DAT_1413eb100), local_50 != (LPVOID)0x0)) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1413eb0c8);
    FUN_140d398f0(local_40,&DAT_1413eb0d0,0x28);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1413eb0c8);
    for (local_58 = 0; local_58 < 5; local_58 = local_58 + 1) {
      if (local_40[local_58] != (code *)0x0) {
        local_48 = (ulonglong)local_58;
        (*local_40[local_48])(*(undefined8 *)((longlong)local_50 + (ulonglong)local_58 * 8));
      }
    }
    thunk_FUN_140e18570(local_50);
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=140d39b10 name=FUN_140d39b10 */

LPVOID FUN_140d39b10(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(DAT_1413eb100);
  SetLastError(dwErrCode);
  return pvVar1;
}


/* address=140d39b50 name=FUN_140d39b50 */

void FUN_140d39b50(void)

{
  FUN_140c74de0();
  return;
}


/* address=140d39b70 name=FUN_140d39b70 */

void FUN_140d39b70(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d39b90 name=FUN_140d39b90 */

void FUN_140d39b90(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d39bc0 name=FUN_140d39bc0 */

void FUN_140d39bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c74ec0(param_1,param_2,param_3);
  return;
}


/* address=140d39c00 name=FUN_140d39c00 */

void FUN_140d39c00(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140d39c20 name=FUN_140d39c20 */

void FUN_140d39c20(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140d39c60 name=FUN_140d39c60 */

undefined4
FUN_140d39c60(longlong param_1,int *param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
             )

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined4 *local_10;
  
  local_18 = 0;
  local_10 = (undefined4 *)FUN_140c660d0(0x18);
  if (local_10 == (undefined4 *)0x0) {
    local_18 = 0;
  }
  else {
    *local_10 = param_3;
    *(undefined8 *)(local_10 + 2) = param_4;
    *(undefined8 *)(local_10 + 4) = param_5;
    FUN_140d396f0(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar2 = FUN_140d3a070();
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar3 = FUN_140d3a090(*(undefined8 *)(param_1 + 8));
      if ((ulonglong)(longlong)(int)(0x7fffffff - (uint)*(byte *)(param_1 + 0x10)) < uVar3) {
        FUN_140c6c4e0(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_1413bcb30,0xa0);
      }
      else {
        lVar4 = FUN_140d3a100(*(undefined8 *)(param_1 + 8),local_10);
        if (lVar4 != 0) {
          local_10 = (undefined4 *)0x0;
          iVar1 = FUN_140d3a090(*(undefined8 *)(param_1 + 8));
          *param_2 = iVar1 + -1 + (uint)*(byte *)(param_1 + 0x10);
          local_18 = 1;
        }
      }
    }
    FUN_140d39750(param_1);
    FUN_140c66200(local_10);
  }
  return local_18;
}


/* address=140d39dc0 name=FUN_140d39dc0 */

undefined8 FUN_140d39dc0(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong local_18;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_1 == 0) {
    lVar1 = FUN_140d39b50();
    *param_1 = lVar1;
    if (*param_1 == 0) {
      return 0;
    }
  }
  local_18 = FUN_140d39b70(*param_1);
  while( true ) {
    if ((ulonglong)(longlong)param_2 < local_18) {
      FUN_140d39bc0(*param_1,(longlong)param_2,param_3);
      return 1;
    }
    lVar1 = FUN_140d39c20(*param_1,0);
    if (lVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return 0;
}


/* address=140d39e80 name=FUN_140d39e80 */

undefined8 FUN_140d39e80(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((*param_1 != 0) && (-1 < param_2)) &&
     (uVar1 = FUN_140d39b70(*param_1), (ulonglong)(longlong)param_2 < uVar1)) {
    uVar2 = FUN_140d39b90(*param_1,(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=140d39ef0 name=FUN_140d39ef0 */

void FUN_140d39ef0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


/* address=140d39f10 name=FUN_140d39f10 */

void FUN_140d39f10(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*param_3 != 0) && (iVar1 = FUN_140d3a150(&local_18,param_1), iVar1 != 0)) {
    uVar2 = FUN_140d3a090(local_18);
    if ((ulonglong)(longlong)(int)(0x7fffffff - (uint)*(byte *)(param_1 + 0x10)) < uVar2) {
      FID_conflict__assert((wchar_t *)s_s_1413bcc50,(wchar_t *)s_D_1413bcb90,0x102);
    }
    for (local_28 = 0; iVar1 = FUN_140d3a090(local_18), local_28 < iVar1; local_28 = local_28 + 1) {
      puVar3 = (undefined4 *)FUN_140d3a0b0(local_18,(longlong)local_28);
      if (*(longlong *)(puVar3 + 4) != 0) {
        local_10 = FUN_140d39e80(param_3,local_28 + (uint)*(byte *)(param_1 + 0x10));
        (**(code **)(puVar3 + 4))
                  (param_2,local_10,param_3,local_28 + (uint)*(byte *)(param_1 + 0x10),*puVar3,
                   *(undefined8 *)(puVar3 + 2));
      }
    }
    FUN_140d3a0e0(local_18);
    FUN_140d39c00(*param_3);
    *param_3 = 0;
  }
  return;
}


/* address=140d3a070 name=FUN_140d3a070 */

void FUN_140d3a070(void)

{
  FUN_140c74de0();
  return;
}


/* address=140d3a090 name=FUN_140d3a090 */

void FUN_140d3a090(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d3a0b0 name=FUN_140d3a0b0 */

void FUN_140d3a0b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d3a0e0 name=FUN_140d3a0e0 */

void FUN_140d3a0e0(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140d3a100 name=FUN_140d3a100 */

void FUN_140d3a100(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140d3a130 name=FUN_140d3a130 */

void FUN_140d3a130(undefined8 param_1)

{
  FUN_140c75780(param_1);
  return;
}


/* address=140d3a150 name=FUN_140d3a150 */

undefined8 FUN_140d3a150(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  FUN_140d396c0(param_2);
  lVar1 = FUN_140d3a090(*(undefined8 *)(param_2 + 8));
  if (lVar1 != 0) {
    lVar2 = FUN_140d3a130(*(undefined8 *)(param_2 + 8));
    *param_1 = lVar2;
  }
  FUN_140d39720(param_2);
  if ((lVar1 == 0) || (*param_1 != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d3a1e0 name=FUN_140d3a1e0 */

longlong FUN_140d3a1e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c660d0(0x30);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d3a720(lVar1,0,0x30);
    *(undefined8 *)(lVar1 + 0x10) = DAT_141068060;
    uVar2 = FUN_140c660d0(*(longlong *)(lVar1 + 0x10) << 3);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    if (*(longlong *)(lVar1 + 8) == 0) {
      FUN_140c66200(lVar1);
      lVar1 = 0;
    }
    else {
      FUN_140d3a720(*(undefined8 *)(lVar1 + 8),0,*(longlong *)(lVar1 + 0x10) << 3);
      *(undefined8 *)(lVar1 + 0x20) = param_2;
      *(undefined8 *)(lVar1 + 0x28) = param_1;
    }
  }
  return lVar1;
}


/* address=140d3a2c0 name=FUN_140d3a2c0 */

void FUN_140d3a2c0(longlong param_1)

{
  longlong lVar1;
  ulonglong local_28;
  longlong local_20;
  
  if (param_1 != 0) {
    for (local_28 = 0; local_28 < *(ulonglong *)(param_1 + 0x10); local_28 = local_28 + 1) {
      local_20 = *(longlong *)(*(longlong *)(param_1 + 8) + local_28 * 8);
      while (local_20 != 0) {
        lVar1 = *(longlong *)(local_20 + 8);
        FUN_140c66200(local_20);
        local_20 = lVar1;
      }
    }
    FUN_140c66200(*(undefined8 *)(param_1 + 8));
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140d3a370 name=FUN_140d3a370 */

undefined8 FUN_140d3a370(undefined8 *param_1)

{
  return *param_1;
}


/* address=140d3a390 name=FUN_140d3a390 */

undefined8
FUN_140d3a390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_10;
  
  plVar1 = (longlong *)FUN_140d3a760(param_1,0,param_2,param_3,param_4);
  if (*plVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined8 *)*plVar1;
  }
  return local_10;
}


/* address=140d3a410 name=FUN_140d3a410 */

undefined8
FUN_140d3a410(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_10;
  
  plVar1 = (longlong *)FUN_140d3a830(param_1,param_2,param_3,param_4);
  if (*plVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined8 *)*plVar1;
  }
  return local_10;
}


/* address=140d3a480 name=FUN_140d3a480 */

undefined8
FUN_140d3a480(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 local_28 [2];
  undefined8 *local_20;
  longlong *local_18;
  
  *param_2 = 0;
  local_18 = (longlong *)FUN_140d3a760(param_1,local_28,param_3,param_4,param_5);
  if (*local_18 == 0) {
    local_20 = (undefined8 *)FUN_140c660d0(0x18);
    if (local_20 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      *local_20 = param_3;
      *(undefined4 *)(local_20 + 2) = local_28[0];
      local_20[1] = 0;
      *local_18 = (longlong)local_20;
      *param_1 = *param_1 + 1;
      FUN_140d3aa20(param_1);
      uVar1 = 1;
    }
  }
  else {
    *param_2 = *(undefined8 *)*local_18;
    *(undefined8 *)*local_18 = param_3;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d3a580 name=FUN_140d3a580 */

undefined8 FUN_140d3a580(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_140d3a760(param_1,0,param_2,param_3,param_4);
  if (*plVar2 == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = (undefined8 *)*plVar2;
    *plVar2 = puVar1[1];
    uVar3 = *puVar1;
    FUN_140c66200(puVar1);
    *param_1 = *param_1 + -1;
    FUN_140d3aa20(param_1);
  }
  return uVar3;
}


/* address=140d3a630 name=FUN_140d3a630 */

void FUN_140d3a630(longlong param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong local_28;
  undefined8 *local_20;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != -1) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    for (local_28 = 0; local_28 < *(ulonglong *)(param_1 + 0x10); local_28 = local_28 + 1) {
      local_20 = *(undefined8 **)(*(longlong *)(param_1 + 8) + local_28 * 8);
      while (local_20 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)local_20[1];
        (*param_2)(*local_20,param_3);
        local_20 = puVar1;
      }
    }
    if (*(int *)(param_1 + 0x18) != -1) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
    FUN_140d3aa20(param_1);
  }
  return;
}


/* address=140d3a720 name=FUN_140d3a720 */

undefined8 FUN_140d3a720(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d3a760 name=FUN_140d3a760 */

undefined8 *
FUN_140d3a760(longlong param_1,uint *param_2,undefined8 param_3,code *param_4,code *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *local_20;
  undefined8 *local_18;
  
  uVar1 = (*param_4)(*(undefined8 *)(param_1 + 0x28));
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar1;
  }
  local_18 = (undefined8 *)
             (*(longlong *)(param_1 + 8) + ((ulonglong)uVar1 % *(ulonglong *)(param_1 + 0x10)) * 8);
  local_20 = (undefined8 *)*local_18;
  while ((local_20 != (undefined8 *)0x0 &&
         (iVar2 = (*param_5)(*(undefined8 *)(param_1 + 0x20),*local_20,param_3), iVar2 != 0))) {
    local_18 = local_20 + 1;
    local_20 = (undefined8 *)*local_18;
  }
  return local_18;
}


/* address=140d3a830 name=FUN_140d3a830 */

undefined8 * FUN_140d3a830(longlong param_1,undefined8 param_2,uint param_3,code *param_4)

{
  int iVar1;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)
             (*(longlong *)(param_1 + 8) + ((ulonglong)param_3 % *(ulonglong *)(param_1 + 0x10)) * 8
             );
  local_18 = (undefined8 *)*local_10;
  while ((local_18 != (undefined8 *)0x0 && (iVar1 = (*param_4)(param_2,*local_18), iVar1 != 0))) {
    local_10 = local_18 + 1;
    local_18 = (undefined8 *)*local_10;
  }
  return local_10;
}


/* address=140d3a8d0 name=FUN_140d3a8d0 */

void FUN_140d3a8d0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong local_38;
  ulonglong local_28;
  
  uVar2 = param_2 << 3;
  if ((uVar2 / 8 == param_2) && (lVar3 = FUN_140c660d0(uVar2), lVar3 != 0)) {
    FUN_140d3a720(lVar3,0,uVar2);
    for (local_28 = 0; local_28 < *(ulonglong *)(param_1 + 0x10); local_28 = local_28 + 1) {
      local_38 = *(longlong *)(*(longlong *)(param_1 + 8) + local_28 * 8);
      while (local_38 != 0) {
        uVar2 = (ulonglong)*(uint *)(local_38 + 0x10) % param_2;
        lVar1 = *(longlong *)(local_38 + 8);
        *(undefined8 *)(local_38 + 8) = *(undefined8 *)(lVar3 + uVar2 * 8);
        *(longlong *)(lVar3 + uVar2 * 8) = local_38;
        local_38 = lVar1;
      }
    }
    FUN_140c66200(*(undefined8 *)(param_1 + 8));
    *(ulonglong *)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 8) = lVar3;
  }
  return;
}


/* address=140d3aa20 name=FUN_140d3aa20 */

void FUN_140d3aa20(ulonglong *param_1)

{
  ulonglong local_28;
  
  if (*(int *)(param_1 + 3) == 0) {
    if (param_1[2] < DAT_141068060) {
      FID_conflict__assert((wchar_t *)s_l_1413bcde0,(wchar_t *)s_D_1413bcd10,0xf7);
    }
    if (DAT_141068068 < *param_1 / param_1[2]) {
      if (param_1[2] < param_1[2] << 1) {
        FUN_140d3a8d0(param_1,param_1[2] << 1);
      }
    }
    else if ((*param_1 / param_1[2] < DAT_141068070) && (DAT_141068060 < param_1[2])) {
      local_28 = param_1[2] / 2;
      if (local_28 < DAT_141068060) {
        local_28 = DAT_141068060;
      }
      FUN_140d3a8d0(param_1,local_28);
    }
  }
  return;
}


/* address=140d3ab30 name=FUN_140d3ab30 */

undefined4 FUN_140d3ab30(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  undefined4 local_28;
  
  if ((param_3 < param_1 + param_2) && (param_1 < param_3 + param_4)) {
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  return local_28;
}


/* address=140d3abb0 name=FUN_140d3abb0 */

ulonglong FUN_140d3abb0(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=140d3abd0 name=FUN_140d3abd0 */

undefined8 FUN_140d3abd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d3ac20 name=FUN_140d3ac20 */

undefined8 FUN_140d3ac20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d3ac70 name=FUN_140d3ac70 */

undefined8 FUN_140d3ac70(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d3acb0 name=FUN_140d3acb0 */

void FUN_140d3acb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  local_res10[0] = FUN_140d3abb0(param_2);
  FUN_140d3abd0(param_1,local_res10,8);
  return;
}


/* address=140d3acf0 name=FUN_140d3acf0 */

undefined8 *
FUN_140d3acf0(undefined8 *param_1,undefined2 param_2,undefined param_3,undefined8 param_4)

{
  *param_1 = param_4;
  FUN_140d3cb40(param_1 + 1);
  *(undefined *)((longlong)param_1 + 0x25c) = 0;
  *(undefined *)((longlong)param_1 + 0x25d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25e) = param_2;
  *(undefined *)(param_1 + 0x4c) = param_3;
  *(byte *)((longlong)param_1 + 0x261) = *(byte *)((longlong)param_1 + 0x261) & 0xfe;
  *(byte *)((longlong)param_1 + 0x261) = *(byte *)((longlong)param_1 + 0x261) & 0xfd;
  *(byte *)((longlong)param_1 + 0x261) = *(byte *)((longlong)param_1 + 0x261) & 0xfb;
  *(byte *)((longlong)param_1 + 0x261) = *(byte *)((longlong)param_1 + 0x261) & 0xf7;
  *(byte *)((longlong)param_1 + 0x261) = *(byte *)((longlong)param_1 + 0x261) & 0xef;
  FUN_140d3ac70(param_1 + 0x4a,0,0xc);
  return param_1;
}


/* address=140d3ae10 name=FUN_140d3ae10 */

void FUN_140d3ae10(longlong param_1)

{
  FUN_140d3cb70(param_1 + 8);
  return;
}


/* address=140d3ae40 name=FUN_140d3ae40 */

undefined8 FUN_140d3ae40(undefined8 param_1,undefined param_2)

{
  undefined8 uVar1;
  undefined local_res10 [24];
  undefined4 local_28;
  undefined8 local_24;
  undefined local_18 [24];
  
  local_24 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  uVar1 = FUN_140d3cb90(local_18,&local_28,local_res10,&local_24);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c67a20(local_18);
  return param_1;
}


/* address=140d3aea0 name=FUN_140d3aea0 */

void FUN_140d3aea0(undefined8 param_1,undefined4 param_2,undefined2 param_3,undefined param_4,
                  longlong param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined *puVar8;
  undefined2 local_res18 [4];
  undefined local_res20 [8];
  undefined auStack_1c8 [32];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined local_198 [8];
  ushort local_190 [4];
  undefined8 local_188;
  byte *local_180;
  char *local_178;
  byte *local_170;
  byte *local_168;
  byte *local_160;
  byte *local_158;
  byte *local_150;
  byte *local_148;
  byte *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined local_90 [24];
  undefined local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_1c8;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  cVar1 = FUN_140c6d7e0(local_190,param_3);
  if (cVar1 != '\0') {
    local_1a0 = CONCAT31(local_1a0._1_3_,local_res20[0]);
    local_1a8 = CONCAT62(local_1a8._2_6_,local_190[0]);
    cVar1 = FUN_140c6f450(&local_188,&local_130,&local_138,param_5);
    if (((cVar1 != '\0') && (lVar4 = FUN_140c55f80(param_8), local_138 == lVar4)) &&
       (lVar4 = FUN_140c55f80(param_7), local_130 == lVar4)) {
      cVar1 = FUN_140c55f90(param_7);
      if (cVar1 == '\0') {
        local_128 = FUN_140c55f80(param_7);
        local_120 = FUN_140c55f80(param_6);
        local_120 = local_128 + local_120;
        lVar4 = FUN_140c55f80(param_8);
        if (0x50 < (ulonglong)(local_120 + lVar4)) {
          local_1a8 = CONCAT44(local_1a8._4_4_,0x50);
          FUN_140c6c4e0(0x10,0,0x44,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
                       );
          FUN_140c5cfa0(param_1,0);
          goto LAB_140d3b709;
        }
        local_118 = FUN_140c55f80(param_7);
        uVar5 = FUN_140c55c70(param_7);
        FUN_140d3abd0(local_78,uVar5,local_118);
        local_110 = FUN_140c55f80(param_6);
        local_108 = FUN_140c55c70(param_6);
        lVar4 = FUN_140c55f80(param_7);
        FUN_140d3abd0(local_78 + lVar4,local_108,local_110);
        local_f8 = FUN_140c55f80(param_8);
        local_f0 = FUN_140c55c70(param_8);
        lVar4 = FUN_140c55f80(param_7);
        local_100 = local_78 + lVar4;
        lVar4 = FUN_140c55f80(param_6);
        FUN_140d3abd0(local_100 + lVar4,local_f0,local_f8);
        local_e8 = FUN_140c55f80(param_6);
        local_e0 = FUN_140c55f80(param_7);
        local_e0 = local_e8 + local_e0;
        lVar4 = FUN_140c55f80(param_8);
        puVar6 = (undefined *)FUN_140c55fe0(local_90,local_78,local_e0 + lVar4);
        puVar8 = param_6;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      uVar5 = FUN_140d3cb90(local_d8,local_res18,local_res20,&param_5);
      FUN_140c55e70(local_198,uVar5);
      FUN_140c67a20(local_d8);
      cVar1 = FUN_140c56050(local_198);
      if (cVar1 == '\0') {
        FUN_140c5cfa0(param_1,0);
        FUN_140c67a20(local_198);
      }
      else {
        uVar5 = FUN_140c55c70(local_198);
        uVar2 = FUN_140d3b7d0(uVar5);
        if (uVar2 != local_190[0]) {
          FID_conflict__assert((wchar_t *)"a",(wchar_t *)"D",0x61);
        }
        local_d0 = FUN_140c55f80(param_6);
        local_c8 = FUN_140c55c70(param_6);
        lVar4 = FUN_140c55c70(local_198);
        uVar5 = FUN_140c55cd0(lVar4 + 8);
        local_1a8 = 0;
        local_1a0 = param_2;
        iVar3 = FUN_140caa6e0(uVar5,local_188,local_c8,local_d0);
        if (iVar3 == 0) {
          FUN_140c5cfa0(param_1,0);
          FUN_140c67a20(local_198);
        }
        else {
          uVar7 = FUN_140ca9c00(local_188);
          if (0x18 < uVar7) {
            FID_conflict__assert((wchar_t *)"E",(wchar_t *)"D",0x69);
          }
          local_c0 = FUN_140ca9c00(local_188);
          lVar4 = FUN_140c55c70(local_198);
          *(char *)(lVar4 + 0x25d) = (char)local_c0;
          cVar1 = FUN_140c55f90(param_7);
          if (cVar1 == '\0') {
            if (0x303 < local_190[0]) {
              FID_conflict__assert((wchar_t *)"p",(wchar_t *)"D",0x8b);
            }
            lVar4 = FUN_140c55c70(local_198);
            local_150 = (byte *)(lVar4 + 0x261);
            *local_150 = *local_150 | 1;
            lVar4 = FUN_140c55c70(local_198);
            local_148 = (byte *)(lVar4 + 0x261);
            *local_148 = *local_148 | 2;
            lVar4 = FUN_140c55c70(local_198);
            local_140 = (byte *)(lVar4 + 0x261);
            *local_140 = *local_140 | 8;
          }
          else {
            uVar7 = FUN_140c55f80(param_8);
            if (0xc < uVar7) {
              FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x6e);
            }
            local_b8 = FUN_140c55f80(param_8);
            local_b0 = FUN_140c55c70(param_8);
            lVar4 = FUN_140c55c70(local_198);
            FUN_140d3abd0(lVar4 + 0x250,local_b0,local_b8);
            local_a8 = FUN_140c55f80(param_8);
            lVar4 = FUN_140c55c70(local_198);
            *(char *)(lVar4 + 0x25c) = (char)local_a8;
            if ((*(uint *)(param_5 + 0x1c) & 0x20) == 0) {
              local_a0 = FUN_140c55f80(param_8);
              lVar4 = FUN_140c55c70(local_198);
              if (*(byte *)(lVar4 + 0x25d) < local_a0) {
                FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x78);
              }
              lVar4 = FUN_140c55c70(local_198);
              local_178 = (char *)(lVar4 + 0x25d);
              cVar1 = FUN_140c55f80(param_8);
              *local_178 = *local_178 - cVar1;
            }
            else {
              lVar4 = FUN_140c55c70(local_198);
              local_180 = (byte *)(lVar4 + 0x261);
              *local_180 = *local_180 | 4;
              lVar4 = FUN_140c55c70(local_198);
              *(undefined *)(lVar4 + 0x25d) = 8;
            }
            if ((*(uint *)(param_5 + 0x1c) & 0x18) != 0) {
              lVar4 = FUN_140c55c70(local_198);
              local_170 = (byte *)(lVar4 + 0x261);
              *local_170 = *local_170 | 1;
            }
            if (0x303 < local_190[0]) {
              lVar4 = FUN_140c55c70(local_198);
              local_168 = (byte *)(lVar4 + 0x261);
              *local_168 = *local_168 | 4;
              lVar4 = FUN_140c55c70(local_198);
              *(undefined *)(lVar4 + 0x25d) = 8;
              lVar4 = FUN_140c55c70(local_198);
              local_160 = (byte *)(lVar4 + 0x261);
              *local_160 = *local_160 & 0xfe;
              lVar4 = FUN_140c55c70(local_198);
              local_158 = (byte *)(lVar4 + 0x261);
              *local_158 = *local_158 | 0x10;
              local_98 = FUN_140c55f80(param_8);
              lVar4 = FUN_140c55c70(local_198);
              if (local_98 < *(byte *)(lVar4 + 0x25d)) {
                FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x88);
              }
            }
          }
          FUN_140c55e70(param_1,local_198);
          FUN_140c67a20(local_198);
        }
      }
      goto LAB_140d3b709;
    }
  }
  local_1a8 = CONCAT44(local_1a8._4_4_,0x46);
  FUN_140c6c4e0(0x10,0,0x44,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
               );
  FUN_140c5cfa0(param_1,0);
LAB_140d3b709:
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=140d3b730 name=FUN_140d3b730 */

undefined8 FUN_140d3b730(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined2 local_res10 [4];
  undefined8 local_res18 [2];
  undefined local_18 [8];
  undefined local_10 [16];
  
  local_18[0] = 0;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  uVar1 = FUN_140d3cb90(local_10,local_res10,local_18,local_res18);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c67a20(local_10);
  return param_1;
}


/* address=140d3b790 name=FUN_140d3b790 */

void FUN_140d3b790(longlong param_1,undefined2 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140d313f0(param_1);
  if (cVar1 != '\0') {
    *(undefined2 *)(param_1 + 0x25e) = param_2;
  }
  return;
}


/* address=140d3b7d0 name=FUN_140d3b7d0 */

undefined2 FUN_140d3b7d0(longlong param_1)

{
  char cVar1;
  undefined2 local_18 [12];
  
  cVar1 = FUN_140c6d7e0(local_18,*(undefined2 *)(param_1 + 0x25e));
  if (cVar1 == '\0') {
    FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0xa2);
    local_18[0] = 0;
  }
  return local_18[0];
}


/* address=140d3b830 name=FUN_140d3b830 */

undefined2 FUN_140d3b830(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  undefined2 local_18;
  
  if (*(short *)(param_1 + 0x25e) == 0) {
    cVar1 = FUN_140d313f0(param_1);
    if (cVar1 == '\0') {
      FID_conflict__assert((wchar_t *)"i",(wchar_t *)"D",0xaa);
    }
    if (*(char *)(param_1 + 0x260) == '\0') {
      local_18 = 0x301;
    }
    else {
      local_18 = 0xfeff;
    }
  }
  else {
    uVar2 = FUN_140d3b7d0(param_1);
    if (uVar2 < 0x304) {
      local_18 = *(undefined2 *)(param_1 + 0x25e);
    }
    else {
      local_18 = 0x303;
    }
  }
  return local_18;
}


/* address=140d3b8d0 name=FUN_140d3b8d0 */

undefined FUN_140d3b8d0(longlong param_1)

{
  undefined uVar1;
  
  if ((*(byte *)(param_1 + 0x261) & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined *)(param_1 + 0x25d);
  }
  return uVar1;
}


/* address=140d3b910 name=FUN_140d3b910 */

longlong FUN_140d3b910(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  
  cVar1 = FUN_140d313f0(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_140c55cd0(param_1 + 8);
    uVar2 = FUN_140caa600(uVar2);
    local_18 = FUN_140ca9c20(uVar2);
  }
  else {
    local_18 = 0;
  }
  lVar3 = FUN_140d3b8d0(param_1);
  return lVar3 + local_18;
}


/* address=140d3b980 name=FUN_140d3b980 */

bool FUN_140d3b980(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  
  cVar1 = FUN_140d313f0(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_140c55cd0(param_1 + 8);
    iVar2 = FUN_140caa810(uVar3,param_2,param_3,param_4);
    bVar4 = iVar2 != 0;
  }
  else {
    *param_2 = param_4;
    bVar4 = true;
  }
  return bVar4;
}


/* address=140d3ba10 name=FUN_140d3ba10 */

undefined8 FUN_140d3ba10(undefined8 param_1,ulonglong *param_2,ulonglong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong local_18 [3];
  
  cVar1 = FUN_140d3b980(param_1,local_18,param_3,param_4);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_140d3b8d0(param_1);
    local_18[0] = local_18[0] + lVar3 + param_3;
    if ((local_18[0] < param_3) || (0xfffe < local_18[0])) {
      FUN_140c6c4e0(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
                    ,0xcf);
      uVar2 = 0;
    }
    else {
      *param_2 = local_18[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d3bae0 name=FUN_140d3bae0 */

void FUN_140d3bae0(longlong param_1,undefined *param_2,undefined param_3,undefined2 param_4,
                  ulonglong param_5,undefined *param_6,undefined *param_7)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined auStack_138 [32];
  undefined8 local_118;
  ulonglong local_110;
  longlong local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  byte local_48 [24];
  undefined local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1413d9c40 ^ (ulonglong)auStack_138;
  cVar1 = FUN_140d313f0(param_1);
  if (cVar1 == '\0') {
    local_d0 = 0;
    if ((*(byte *)(param_1 + 0x261) >> 3 & 1) == 0) {
      local_d8 = FUN_140d3b910(param_1);
      uVar3 = FUN_140c55f80(param_7);
      if (uVar3 < local_d8) {
        local_118 = (byte *)CONCAT44(local_118._4_4_,0x100);
        FUN_140c6c4e0(0x10,0,0x70,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
                     );
        goto LAB_140d3c033;
      }
      local_d0 = FUN_140c55f80(param_7);
      local_d0 = local_d0 - local_d8;
    }
    puVar5 = local_78;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar5 = *param_6;
      param_6 = param_6 + 1;
      puVar5 = puVar5 + 1;
    }
    local_100 = local_78;
    local_108 = local_d0;
    local_110 = param_5;
    local_118 = (byte *)CONCAT62(local_118._2_6_,param_4);
    FUN_140d3c9d0(param_1,local_88,local_30,param_3);
    local_e8 = 0;
    if ((*(byte *)(param_1 + 0x261) >> 2 & 1) == 0) {
      FUN_140d3abd0(local_48,param_1 + 0x250,*(undefined *)(param_1 + 0x25c));
      local_e8 = local_e8 + *(byte *)(param_1 + 0x25c);
    }
    else {
      local_e8 = (ulonglong)
                 (int)((uint)*(byte *)(param_1 + 0x25c) - (uint)*(byte *)(param_1 + 0x25d));
      FUN_140d3ac70(local_48,0,local_e8);
    }
    if ((*(byte *)(param_1 + 0x261) & 1) == 0) {
      if (*(char *)(param_1 + 0x25d) != '\b') {
        FID_conflict__assert((wchar_t *)"v",(wchar_t *)"D",0x121);
      }
      FUN_140d3acb0(local_48 + local_e8,param_5);
    }
    else {
      uVar3 = FUN_140c55f80(param_7);
      if (uVar3 < *(byte *)(param_1 + 0x25d)) {
        local_118 = (byte *)CONCAT44(local_118._4_4_,0x11b);
        FUN_140c6c4e0(0x10,0,0x70,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
                     );
        goto LAB_140d3c033;
      }
      local_c8 = (ulonglong)*(byte *)(param_1 + 0x25d);
      uVar4 = FUN_140c55c70(param_7);
      FUN_140d3abd0(local_48 + local_e8,uVar4,local_c8);
      puVar5 = (undefined *)
               FUN_140c56800(param_7,local_68,*(undefined *)(param_1 + 0x25d),0xffffffffffffffff);
      puVar7 = param_7;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    local_e8 = local_e8 + *(byte *)(param_1 + 0x25d);
    if ((*(byte *)(param_1 + 0x261) >> 2 & 1) != 0) {
      if (local_e8 != *(byte *)(param_1 + 0x25c)) {
        FID_conflict__assert((wchar_t *)"n",(wchar_t *)"D",0x128);
      }
      for (local_e0 = 0; local_e0 < *(byte *)(param_1 + 0x25c); local_e0 = local_e0 + 1) {
        local_48[local_e0] = local_48[local_e0] ^ *(byte *)(param_1 + local_e0 + 0x250);
      }
    }
    local_c0 = FUN_140c55f80(local_88);
    local_b8 = FUN_140c55c70(local_88);
    local_b0 = (undefined *)FUN_140c55f80(param_7);
    local_a8 = FUN_140c55c70(param_7);
    local_a0 = FUN_140c55f80(param_7);
    local_98 = FUN_140c55c70(param_7);
    uVar4 = FUN_140c55cd0(param_1 + 8);
    local_f0 = local_c0;
    local_f8 = local_b8;
    local_100 = local_b0;
    local_108 = local_a8;
    local_110 = local_e8;
    local_118 = local_48;
    iVar2 = FUN_140caa040(uVar4,local_98,&local_90,local_a0);
    if (iVar2 != 0) {
      puVar5 = (undefined *)FUN_140c56800(param_7,local_58,0,local_90);
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *param_2 = *puVar5;
        puVar5 = puVar5 + 1;
        param_2 = param_2 + 1;
      }
    }
  }
  else {
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *param_2 = *param_7;
      param_7 = param_7 + 1;
      param_2 = param_2 + 1;
    }
  }
LAB_140d3c033:
  FUN_140db44f0(local_20 ^ (ulonglong)auStack_138);
  return;
}


/* address=140d3c060 name=FUN_140d3c060 */

ulonglong FUN_140d3c060(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                       undefined param_5,undefined2 param_6,undefined8 param_7,undefined *param_8,
                       undefined8 param_9,ulonglong param_10)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong local_30;
  undefined local_28 [24];
  
  lVar2 = FUN_140d3b8d0(param_1);
  cVar1 = FUN_140d3b980(param_1,&local_30,param_10,0);
  if (cVar1 == '\0') {
    uVar3 = FUN_140c6c4e0(0x10,0,200,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
                          ,0x194);
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else if ((param_10 + lVar2 < param_10) || (param_10 + lVar2 + local_30 < param_10 + lVar2)) {
    uVar3 = FUN_140c6c4e0(0x1e,0,200,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
                          ,0x199);
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else if (param_4 < param_10 + lVar2 + local_30) {
    uVar3 = FUN_140c6c4e0(0x10,0,0x79,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
                          ,0x19d);
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    puVar5 = local_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_8;
      param_8 = param_8 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_140d3c2a0(param_1,param_2,param_2 + lVar2,param_2 + lVar2 + param_10,param_5,param_6
                          ,param_7,local_28,param_9,param_10,0,0);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      local_30 = lVar2 + param_10 + local_30;
      *param_3 = local_30;
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),1);
    }
  }
  return uVar3;
}


/* address=140d3c2a0 name=FUN_140d3c2a0 */

void FUN_140d3c2a0(longlong param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined param_5,undefined2 param_6,byte *param_7,undefined *param_8,
                  undefined *param_9,ulonglong param_10,undefined8 param_11,undefined8 param_12)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_128 [32];
  undefined8 local_108;
  byte *local_100;
  ulonglong local_f8;
  undefined *local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  uint local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined local_70 [24];
  undefined local_58 [16];
  byte local_48 [24];
  undefined local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1413d9c40 ^ (ulonglong)auStack_128;
  local_90 = FUN_140d3b8d0(param_1);
  cVar1 = FUN_140d3b980(param_1,&local_98,param_10,param_12);
  if (cVar1 == '\0') {
    local_108 = CONCAT44(local_108._4_4_,0x142);
    FUN_140c6c4e0(0x10,0,200,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
                 );
  }
  else if ((((param_9 == param_3) ||
            (iVar2 = FUN_140d3ab30(param_9,param_10,param_3,param_10), iVar2 == 0)) &&
           (iVar2 = FUN_140d3ab30(param_9,param_10,param_2,local_90), iVar2 == 0)) &&
          (iVar2 = FUN_140d3ab30(param_9,param_10,param_4,local_98), iVar2 == 0)) {
    cVar1 = FUN_140d313f0(param_1);
    if (cVar1 == '\0') {
      puVar5 = local_58;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *param_8;
        param_8 = param_8 + 1;
        puVar5 = puVar5 + 1;
      }
      local_f0 = local_58;
      local_f8 = param_10;
      local_100 = param_7;
      local_108 = CONCAT62(local_108._2_6_,param_6);
      FUN_140d3c9d0(param_1,local_70,local_30,param_5);
      local_b0 = 0;
      if ((*(byte *)(param_1 + 0x261) >> 2 & 1) == 0) {
        FUN_140d3abd0(local_48,param_1 + 0x250,*(undefined *)(param_1 + 0x25c));
        local_b0 = local_b0 + *(byte *)(param_1 + 0x25c);
      }
      else {
        local_b0 = (ulonglong)
                   (int)((uint)*(byte *)(param_1 + 0x25c) - (uint)*(byte *)(param_1 + 0x25d));
        FUN_140d3ac70(local_48,0,local_b0);
      }
      if ((*(byte *)(param_1 + 0x261) >> 1 & 1) == 0) {
        if (*(char *)(param_1 + 0x25d) != '\b') {
          FID_conflict__assert((wchar_t *)"v",(wchar_t *)"D",0x16d);
        }
        FUN_140d3acb0(local_48 + local_b0,param_7);
      }
      else {
        if ((*(byte *)(param_1 + 0x261) & 1) == 0) {
          FID_conflict__assert((wchar_t *)"v",(wchar_t *)"D",0x166);
        }
        iVar2 = FUN_140ca8a50(local_48 + local_b0,*(undefined *)(param_1 + 0x25d));
        if (iVar2 == 0) goto LAB_140d3c93a;
      }
      local_b0 = local_b0 + *(byte *)(param_1 + 0x25d);
      if ((*(byte *)(param_1 + 0x261) & 1) != 0) {
        if ((*(byte *)(param_1 + 0x261) >> 2 & 1) != 0) {
          FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x174);
        }
        iVar2 = FUN_140d3ab30(param_9,param_10,param_2,*(undefined *)(param_1 + 0x25d));
        if (iVar2 != 0) {
          local_108 = CONCAT44(local_108._4_4_,0x176);
          FUN_140c6c4e0(0x10,0,0xbd,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
                       );
          goto LAB_140d3c93a;
        }
        FUN_140d3abd0(param_2,local_48 + *(byte *)(param_1 + 0x25c),*(undefined *)(param_1 + 0x25d))
        ;
      }
      if ((*(byte *)(param_1 + 0x261) >> 2 & 1) != 0) {
        if (local_b0 != *(byte *)(param_1 + 0x25c)) {
          FID_conflict__assert((wchar_t *)"n",(wchar_t *)"D",0x17f);
        }
        for (local_a8 = 0; local_a8 < *(byte *)(param_1 + 0x25c); local_a8 = local_a8 + 1) {
          local_48[local_a8] = local_48[local_a8] ^ *(byte *)(param_1 + local_a8 + 0x250);
        }
      }
      local_88 = FUN_140c55f80(local_70);
      local_80 = FUN_140c55c70(local_70);
      uVar3 = FUN_140c55cd0(param_1 + 8);
      local_c8 = local_88;
      local_d0 = local_80;
      local_d8 = param_12;
      local_e0 = param_11;
      local_e8 = param_10;
      local_f0 = param_9;
      local_f8 = local_b0;
      local_100 = local_48;
      local_108 = local_98;
      iVar2 = FUN_140caa2c0(uVar3,param_3,param_4,&local_78);
      local_b8 = iVar2 != 0;
      local_a0 = (uint)(byte)local_b8;
      if (((bool)local_b8) && (local_78 != local_98)) {
        FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x189);
      }
    }
    else {
      FUN_140d3ac20(param_3,param_9,param_10);
      FUN_140d3ac20(param_4,param_11,param_12);
    }
  }
  else {
    local_108 = CONCAT44(local_108._4_4_,0x148);
    FUN_140c6c4e0(0x10,0,0xbd,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_aead_ctx.cc"
                 );
  }
LAB_140d3c93a:
  FUN_140db44f0(local_20 ^ (ulonglong)auStack_128);
  return;
}


/* address=140d3c960 name=FUN_140d3c960 */

undefined FUN_140d3c960(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140d313f0(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_140c55cd0(param_1 + 8);
    iVar2 = FUN_140caa7c0(uVar3,param_2,param_3);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=140d3c9d0 name=FUN_140d3c9d0 */

undefined *
FUN_140d3c9d0(longlong param_1,undefined *param_2,longlong param_3,undefined param_4,
             undefined2 param_5,undefined8 param_6,undefined8 param_7,undefined *param_8)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 local_28;
  
  if ((*(byte *)(param_1 + 0x261) >> 4 & 1) == 0) {
    FUN_140d3acb0(param_3,param_6);
    *(undefined *)(param_3 + 8) = param_4;
    *(char *)(param_3 + 9) = (char)((ushort)param_5 >> 8);
    *(undefined *)(param_3 + 10) = (undefined)param_5;
    local_28 = 0xb;
    if ((*(byte *)(param_1 + 0x261) >> 3 & 1) == 0) {
      *(undefined *)(param_3 + 0xb) = param_7._1_1_;
      *(undefined *)(param_3 + 0xc) = (undefined)param_7;
      local_28 = 0xd;
    }
    FUN_140c55fe0(param_2,param_3,local_28);
  }
  else {
    puVar2 = param_2;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *param_8;
      param_8 = param_8 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return param_2;
}


/* address=140d3cb40 name=FUN_140d3cb40 */

undefined8 FUN_140d3cb40(undefined8 param_1)

{
  FUN_140ca9c60(param_1);
  return param_1;
}


/* address=140d3cb70 name=FUN_140d3cb70 */

void FUN_140d3cb70(undefined8 param_1)

{
  FUN_140ca9de0(param_1);
  return;
}


/* address=140d3cb90 name=FUN_140d3cb90 */

undefined8
FUN_140d3cb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  uVar1 = FUN_140c55cd0(param_4);
  uVar2 = FUN_140c55cd0(param_3);
  uVar3 = FUN_140c55cd0(param_2);
  uVar1 = FUN_140d3cc20(uVar3,uVar2,uVar1);
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c67a20(local_18);
  return param_1;
}


/* address=140d3cc20 name=FUN_140d3cc20 */

undefined8 FUN_140d3cc20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  
  lVar1 = FUN_140c660d0(0x268);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x268,lVar1);
    puVar3 = (undefined8 *)FUN_140c55cd0(param_3);
    puVar4 = (undefined *)FUN_140c55cd0(param_2);
    puVar5 = (undefined2 *)FUN_140c55cd0(param_1);
    uVar2 = FUN_140d3acf0(uVar2,*puVar5,*puVar4,*puVar3);
  }
  return uVar2;
}


/* address=140d3ccb0 name=FUN_140d3ccb0 */

undefined8 FUN_140d3ccb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d3cd00 name=FUN_140d3cd00 */

undefined8 FUN_140d3cd00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d3cd50 name=FUN_140d3cd50 */

undefined8 FUN_140d3cd50(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d3cd90 name=FUN_140d3cd90 */

longlong FUN_140d3cd90(undefined8 param_1,undefined param_2,ushort param_3,undefined8 param_4,
                      undefined4 param_5)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined local_28 [4];
  undefined local_24 [4];
  undefined local_20 [4];
  undefined2 local_1c [2];
  longlong local_18;
  longlong local_10;
  
  uVar5 = FUN_140d354c0(param_1);
  if (uVar5 % 2 == 0) {
    local_10 = 0;
    FUN_140d3f240(local_28,param_2);
    FUN_140d3f260(local_28,local_20);
    while (lVar6 = FUN_140d354c0(param_1), lVar6 != 0) {
      iVar4 = FUN_140d35710(param_1,local_1c);
      if (iVar4 == 0) {
        return 0;
      }
      local_18 = FUN_140c6e300(local_1c[0]);
      if (((local_18 != 0) && (uVar2 = FUN_140c6e700(local_18), uVar2 <= param_3)) &&
         (uVar2 = FUN_140c6e740(local_18), param_3 <= uVar2)) {
        uVar3 = FUN_140c6e370(local_18);
        cVar1 = FUN_140d3cef0(uVar3,param_5);
        if (cVar1 != '\0') {
          FUN_140d3f2a0(local_28,local_24,local_18);
          cVar1 = FUN_140d3f370(local_24,local_20);
          if (cVar1 != '\0') {
            local_10 = local_18;
            FUN_140d3f3a0(local_20,local_24);
          }
        }
      }
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}


/* address=140d3cef0 name=FUN_140d3cef0 */

longlong FUN_140d3cef0(short param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = 1;
  }
  else {
    bVar1 = (byte)((ushort)param_1 >> 8);
    if (param_2 == 1) {
      if ((param_1 == 0x1301) || (param_1 == 0x1302)) {
        lVar2 = CONCAT71((uint7)bVar1,1);
      }
      else if (param_1 == 0x1303) {
        lVar2 = (ulonglong)(uint7)bVar1 << 8;
      }
      else {
        FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x2be);
        lVar2 = 0;
      }
    }
    else if (param_2 == 2) {
      if (param_1 != 0x1301) {
        if (param_1 == 0x1302) {
          return CONCAT71((uint7)bVar1,1);
        }
        if (param_1 != 0x1303) {
          FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x2ca);
          return 0;
        }
      }
      lVar2 = (ulonglong)(uint7)bVar1 << 8;
    }
    else {
      FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x2cf);
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* address=140d3d010 name=FUN_140d3d010 */

ulonglong FUN_140d3d010(undefined8 param_1,undefined *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_38;
  undefined local_30 [48];
  
  cVar1 = FUN_140d3f060(param_1,local_30,&local_38);
  if (cVar1 == '\0') {
    lVar3 = FUN_140d400e0(param_1);
    if (lVar3 + 4U < local_38) {
      FUN_140c6c4e0(0x10,0,0x96,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_both.cc"
                    ,0x212);
      *param_2 = 0x2f;
      uVar2 = (ulonglong)param_2 & 0xffffffffffffff00;
    }
    else {
      uVar2 = CONCAT71((int7)(lVar3 + 4U >> 8),1);
    }
  }
  else {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_both.cc"
                  ,0x20b);
    *param_2 = 0x50;
    uVar2 = (ulonglong)param_2 & 0xffffffffffffff00;
  }
  return uVar2;
}


/* address=140d3d0c0 name=FUN_140d3d0c0 */

undefined FUN_140d3d0c0(longlong param_1)

{
  char cVar1;
  ulonglong *puVar2;
  ulonglong local_40;
  undefined local_38 [8];
  undefined local_30 [24];
  undefined local_18 [24];
  
  local_40 = 0;
  if (((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 4 & 1) != 0) &&
     (cVar1 = FUN_140d3f060(param_1,local_30,local_38), cVar1 != '\0')) {
    local_40 = FUN_140d354c0(local_18);
  }
  cVar1 = FUN_140c56050(*(longlong *)(param_1 + 0x30) + 0xe0);
  if ((cVar1 != '\0') &&
     (puVar2 = (ulonglong *)FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xe0), local_40 < *puVar2)
     ) {
    return 1;
  }
  return 0;
}


/* address=140d3d180 name=FUN_140d3d180 */

undefined FUN_140d3d180(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_140c56050(*(longlong *)(param_1 + 0x30) + 0xe0);
  if (cVar1 == '\0') {
    uVar3 = FUN_140d805d0();
    FUN_140c67990(*(longlong *)(param_1 + 0x30) + 0xe0,uVar3);
  }
  cVar1 = FUN_140c56050(*(longlong *)(param_1 + 0x30) + 0xe0);
  if (cVar1 != '\0') {
    uVar3 = FUN_140c55f80(param_2);
    uVar4 = FUN_140c55c70(param_2);
    uVar5 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xe0);
    iVar2 = FUN_140d80830(uVar5,uVar4,uVar3);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=140d3d260 name=FUN_140d3d260 */

undefined FUN_140d3d260(longlong param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined local_60 [8];
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined local_40 [24];
  undefined local_28 [24];
  
  cVar1 = FUN_140c56050(*(longlong *)(param_1 + 0x30) + 0xe8);
  if ((cVar1 != '\0') &&
     (plVar4 = (longlong *)FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xe8), *plVar4 != 0)) {
    uVar5 = FUN_140c55cd0(*(longlong *)(param_1 + 0x30) + 0xe8);
    FUN_140c55e70(local_60,uVar5);
    local_58 = (undefined8 *)FUN_140c55c70(local_60);
    lVar6 = FUN_140c55c70(local_60);
    FUN_140c55fe0(local_40,*(undefined8 *)(lVar6 + 8),*local_58);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      puVar7 = local_40;
      puVar8 = local_28;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar2 = FUN_140d3e5b0(param_1,0x16,local_28);
      FUN_140d3f1d0(local_60);
      return uVar2;
    }
    cVar1 = operator==<>(*(longlong *)(param_1 + 0x30) + 0x118,0);
    if ((cVar1 != '\0') ||
       (lVar6 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x118),
       (*(byte *)(lVar6 + 0x622) >> 4 & 1) == 0)) {
      local_50 = FUN_140c55f80(local_40);
      uVar5 = FUN_140c55c70(local_40);
      local_48 = *(longlong *)(param_1 + 0x98);
      iVar3 = (**(code **)(local_48 + 0x10))
                        (param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xcc),uVar5,
                         local_50);
      if (iVar3 == 0) {
        FUN_140c6c4e0(0x10,0,0x12a,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_both.cc"
                      ,0x101);
        FUN_140d3f1d0(local_60);
        return 0;
      }
    }
    FUN_140d3f1d0(local_60);
    return 1;
  }
  return 1;
}


/* address=140d3d480 name=FUN_140d3d480 */

undefined8 FUN_140d3d480(longlong param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  cVar1 = FUN_140d3f060(param_1,param_2,local_48);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 4 & 1) == 0) {
      if (*param_2 == '\0') {
        puVar3 = (undefined *)FUN_140c630f0(param_2 + 0x18,local_28);
        puVar5 = local_38;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
        FUN_140c536d0(param_1,0,0x16,local_38);
      }
      *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) =
           *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) | 0x10;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d3e5b0 name=FUN_140d3e5b0 */

ulonglong FUN_140d3e5b0(longlong param_1,undefined param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong local_10 [2];
  
  cVar1 = FUN_140c56050(*(longlong *)(param_1 + 0x30) + 0xe8);
  if (cVar1 != '\0') {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x8c);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0xf8) != 0) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x8e);
  }
  cVar1 = operator==<>(*(longlong *)(param_1 + 0x30) + 0xf0,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_140d805d0();
    FUN_140c67990(*(longlong *)(param_1 + 0x30) + 0xf0,uVar2);
    cVar1 = operator==<>(*(longlong *)(param_1 + 0x30) + 0xf0,0);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  lVar3 = FUN_140c55f80(param_3);
  lVar4 = FUN_140dccec0(param_1);
  uVar8 = lVar3 + lVar4;
  plVar5 = (longlong *)FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xf0);
  lVar3 = *plVar5;
  uVar6 = FUN_140c55f80(param_3);
  if ((uVar8 < uVar6) || (lVar3 + uVar8 < uVar8)) {
    uVar6 = FUN_140c6c4e0(0x10,0,0x45,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_both.cc"
                          ,0x9a);
  }
  else {
    uVar2 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xf0);
    uVar6 = FUN_140d80660(uVar2,lVar3 + uVar8);
    if ((int)uVar6 != 0) {
      uVar2 = FUN_140c55f80(param_3);
      uVar7 = FUN_140c55c70(param_3);
      lVar3 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xf0);
      plVar5 = (longlong *)FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xf0);
      cVar1 = FUN_140dcdbc0(param_1,*(longlong *)(lVar3 + 8) + *plVar5,local_10,uVar8,param_2,uVar7,
                            uVar2);
      uVar6 = 0;
      if (cVar1 != '\0') {
        plVar5 = (longlong *)FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xf0);
        lVar3 = *plVar5;
        *plVar5 = lVar3 + local_10[0];
        return CONCAT71((int7)((ulonglong)(lVar3 + local_10[0]) >> 8),1);
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}


/* address=140d3e860 name=FUN_140d3e860 */

void FUN_140d3e860(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined auStack_238 [32];
  undefined4 local_218;
  char local_208 [4];
  undefined2 local_204 [2];
  undefined2 local_200 [2];
  undefined2 local_1fc [2];
  undefined2 local_1f8 [4];
  ulonglong local_1f0;
  uint local_1e8 [2];
  undefined local_1e0 [16];
  ulonglong local_1d0;
  uint local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined local_188 [16];
  undefined local_178 [48];
  undefined local_148 [16];
  undefined local_138 [48];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined4 local_78 [12];
  undefined local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_238;
  *param_2 = 0;
  uVar3 = FUN_140c55f80(param_3);
  if (uVar3 < 5) {
    FID_conflict__assert((wchar_t *)"i",(wchar_t *)"D",0x166);
  }
  pbVar4 = (byte *)FUN_140c631f0(param_3,0);
  local_1c8 = (*pbVar4 & 0x7f) << 8;
  pbVar4 = (byte *)FUN_140c631f0(param_3,1);
  local_1f0 = (ulonglong)(int)(local_1c8 | *pbVar4);
  if (local_1f0 < 0x1001) {
    if (local_1f0 < 3) {
      local_218 = 0x171;
      FUN_140c6c4e0(0x10,0,199,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_both.cc"
                   );
    }
    else {
      uVar3 = FUN_140c55f80(param_3);
      if (uVar3 < local_1f0 + 2) {
        *param_2 = local_1f0 + 2;
      }
      else {
        local_190 = local_d8;
        uVar5 = FUN_140c567b0(*(longlong *)(param_1 + 0x30) + 0x50,local_c8);
        uVar5 = FUN_140c56800(uVar5,local_b8,2,local_1f0);
        puVar6 = (undefined *)FUN_140c57dd0(local_190,uVar5);
        puVar8 = local_108;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_140c57dd0(local_1e0,local_108);
        puVar6 = (undefined *)FUN_140c630f0(local_1e0,local_a8);
        puVar8 = local_f8;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        lVar7 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x118);
        cVar1 = FUN_140dbfe50(lVar7 + 0x198,local_f8);
        if (cVar1 != '\0') {
          puVar6 = (undefined *)FUN_140c630f0(local_1e0,local_98);
          puVar8 = local_e8;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_140c536d0(param_1,0,0,local_e8);
          iVar2 = FUN_140d356c0(local_1e0,local_208);
          if (((((iVar2 == 0) || (iVar2 = FUN_140d35710(local_1e0,local_1f8), iVar2 == 0)) ||
               (iVar2 = FUN_140d35710(local_1e0,local_204), iVar2 == 0)) ||
              (((iVar2 = FUN_140d35710(local_1e0,local_200), iVar2 == 0 ||
                (iVar2 = FUN_140d35710(local_1e0,local_1fc), iVar2 == 0)) ||
               ((iVar2 = FUN_140d35980(local_1e0,local_188,local_204[0]), iVar2 == 0 ||
                ((iVar2 = FUN_140d35980(local_1e0,local_88,local_200[0]), iVar2 == 0 ||
                 (iVar2 = FUN_140d35980(local_1e0,local_148,local_1fc[0]), iVar2 == 0)))))))) ||
             (lVar7 = FUN_140d354c0(local_1e0), lVar7 != 0)) {
            local_218 = 0x192;
            FUN_140c6c4e0(0x10,0,0x89,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_both.cc"
                         );
          }
          else {
            if (local_208[0] != '\x01') {
              FID_conflict__assert((wchar_t *)"m",(wchar_t *)"D",0x197);
            }
            local_1d0 = FUN_140d354c0(local_148);
            if (0x20 < local_1d0) {
              local_1d0 = 0x20;
            }
            FUN_140d3cd50(local_48,0,0x20);
            uVar5 = FUN_140d354a0(local_148);
            FUN_140d3ccb0((longlong)&local_28 - local_1d0,uVar5,local_1d0);
            uVar3 = FUN_140d354c0(local_188);
            local_1b0 = (uVar3 / 3) * 2 + 0x2b;
            FUN_140c57a60(local_178,uVar3 % 3);
            cVar1 = FUN_140c56050(*(longlong *)(param_1 + 0x30) + 0xe0);
            if (cVar1 == '\0') {
              uVar5 = FUN_140d805d0();
              FUN_140c67990(*(longlong *)(param_1 + 0x30) + 0xe0,uVar5);
            }
            cVar1 = FUN_140c56050(*(longlong *)(param_1 + 0x30) + 0xe0);
            if (cVar1 != '\0') {
              uVar5 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xe0);
              iVar2 = FUN_140d80660(uVar5,local_1b0);
              if (iVar2 != 0) {
                local_1a8 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xe0);
                local_1a0 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xe0);
                uVar5 = FUN_140c55cd0(local_178);
                iVar2 = FUN_140d37760(uVar5,*(undefined8 *)(local_1a0 + 8),
                                      *(undefined8 *)(local_1a8 + 0x10));
                if (iVar2 != 0) {
                  uVar5 = FUN_140c55cd0(local_178);
                  iVar2 = FUN_140d380f0(uVar5,1);
                  if (iVar2 != 0) {
                    uVar5 = FUN_140c55cd0(local_178);
                    iVar2 = FUN_140d37e10(uVar5,local_138);
                    if ((((iVar2 != 0) &&
                         (iVar2 = FUN_140d38120(local_138,local_1f8[0]), iVar2 != 0)) &&
                        (iVar2 = FUN_140d37f00(local_138,local_48,0x20), iVar2 != 0)) &&
                       (iVar2 = FUN_140d380f0(local_138,0), iVar2 != 0)) {
                      iVar2 = FUN_140d37de0(local_138,local_78);
                      if (iVar2 != 0) {
                        do {
                          do {
                            lVar7 = FUN_140d354c0(local_188);
                            if (lVar7 == 0) {
                              iVar2 = FUN_140d380f0(local_138,1);
                              if ((iVar2 != 0) && (iVar2 = FUN_140d380f0(local_138,0), iVar2 != 0))
                              {
                                local_198 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xe0);
                                uVar5 = FUN_140c55cd0(local_178);
                                iVar2 = FUN_140d37820(uVar5,0,local_198);
                                if (iVar2 != 0) {
                                  *param_2 = local_1f0 + 2;
                                  *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) =
                                       *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) | 8;
                                  local_1b4 = 0;
                                  FUN_140c57a90(local_178);
                                  goto LAB_140d3f040;
                                }
                              }
                              local_218 = 0x1d3;
                              FUN_140c6c4e0(0x10,0,0x44,
                                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_both.cc"
                                           );
                              local_1b8 = 4;
                              FUN_140c57a90(local_178);
                              goto LAB_140d3f040;
                            }
                            iVar2 = FUN_140d357b0(local_188,local_1e8);
                            if (iVar2 == 0) {
                              local_218 = 0x1c1;
                              FUN_140c6c4e0(0x10,0,0x89,
                                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_both.cc"
                                           );
                              local_1c0 = 4;
                              FUN_140c57a90(local_178);
                              goto LAB_140d3f040;
                            }
                          } while ((local_1e8[0] & 0xff0000) != 0);
                          iVar2 = FUN_140d38120(local_78,(undefined2)local_1e8[0]);
                        } while (iVar2 != 0);
                        local_218 = 0x1ca;
                        FUN_140c6c4e0(0x10,0,0x44,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_both.cc"
                                     );
                        local_1bc = 4;
                        FUN_140c57a90(local_178);
                        goto LAB_140d3f040;
                      }
                    }
                  }
                }
              }
            }
            local_1c4 = 4;
            FUN_140c57a90(local_178);
          }
        }
      }
    }
  }
  else {
    local_218 = 0x16a;
    FUN_140c6c4e0(0x10,0,200,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_both.cc"
                 );
  }
LAB_140d3f040:
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_238);
  return;
}


/* address=140d3f060 name=FUN_140d3f060 */

ulonglong FUN_140d3f060(longlong param_1,byte *param_2,ulonglong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  undefined local_20 [32];
  
  cVar1 = FUN_140c56050(*(longlong *)(param_1 + 0x30) + 0xe0);
  if (cVar1 == '\0') {
    *param_3 = 4;
  }
  else {
    local_30 = (undefined8 *)FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xe0);
    lVar3 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xe0);
    FUN_140d35430(local_20,*(undefined8 *)(lVar3 + 8),*local_30);
    iVar2 = FUN_140d356c0(local_20,param_2 + 1);
    if ((iVar2 != 0) && (iVar2 = FUN_140d357b0(local_20,local_38), iVar2 != 0)) {
      iVar2 = FUN_140d35980(local_20,param_2 + 8,local_38[0]);
      if (iVar2 == 0) {
        *param_3 = (ulonglong)(local_38[0] + 4U);
        return (ulonglong)(uint3)(local_38[0] + 4U >> 8) << 8;
      }
      local_28 = (ulonglong)(local_38[0] + 4);
      lVar3 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xe0);
      FUN_140d35430(param_2 + 0x18,*(undefined8 *)(lVar3 + 8),local_28);
      *param_2 = *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 3 & 1;
      return 1;
    }
    *param_3 = 4;
  }
  return (ulonglong)param_3 & 0xffffffffffffff00;
}


/* address=140d3f1d0 name=FUN_140d3f1d0 */

void FUN_140d3f1d0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c67b30(uVar1,*param_1);
  }
  return;
}


/* address=140d3f210 name=FUN_140d3f210 */

undefined8 FUN_140d3f210(undefined8 param_1,undefined8 param_2)

{
  FUN_140c55f50(param_1,param_2,1);
  return param_1;
}


/* address=140d3f240 name=FUN_140d3f240 */

undefined * FUN_140d3f240(undefined *param_1,undefined param_2)

{
  *param_1 = param_2;
  return param_1;
}


/* address=140d3f260 name=FUN_140d3f260 */

undefined8 FUN_140d3f260(undefined8 param_1,undefined8 param_2)

{
  undefined local_18;
  undefined local_17 [23];
  
  local_18 = 0;
  local_17[0] = 0;
  FUN_140d3f310(param_2,local_17,&local_18);
  return param_2;
}


/* address=140d3f2a0 name=FUN_140d3f2a0 */

undefined8 FUN_140d3f2a0(char *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined local_17;
  undefined local_16 [22];
  
  if ((*param_1 == '\0') && (*(int *)(param_3 + 0x1c) != 0x20)) {
    local_17 = 0;
  }
  else {
    local_17 = 1;
  }
  local_16[0] = 1;
  FUN_140d3f310(param_2,local_16,&local_17,param_4,local_17);
  return param_2;
}


/* address=140d3f310 name=FUN_140d3f310 */

undefined8 FUN_140d3f310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined local_18;
  
  uVar1 = FUN_140c55cd0(param_3);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140d3f400(param_1,local_18,uVar2,uVar1);
  return param_1;
}


/* address=140d3f370 name=FUN_140d3f370 */

void FUN_140d3f370(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3f460(param_2,param_1);
  return;
}


/* address=140d3f3a0 name=FUN_140d3f3a0 */

longlong FUN_140d3f3a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined *)(param_1 + 1) = *(undefined *)(param_2 + 1);
  uVar1 = FUN_140c55cd0(param_2);
  uVar2 = FUN_140c55cd0(param_1);
  FUN_140d3f490(uVar2,uVar1);
  return param_1;
}


/* address=140d3f400 name=FUN_140d3f400 */

longlong FUN_140d3f400(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined local_18;
  
  uVar1 = FUN_140c55cd0(param_4);
  FUN_140d3f4d0(param_1,local_18,uVar1);
  uVar1 = FUN_140c55cd0(param_3);
  FUN_140d3f520(param_1 + 1,uVar1);
  return param_1;
}


/* address=140d3f460 name=FUN_140d3f460 */

void FUN_140d3f460(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3f550(param_1,param_2);
  return;
}


/* address=140d3f490 name=FUN_140d3f490 */

undefined * FUN_140d3f490(undefined *param_1,undefined *param_2)

{
  *param_1 = *param_2;
  FUN_140c55cd0(param_2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140d3f4d0 name=FUN_140d3f4d0 */

undefined8 FUN_140d3f4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined local_18;
  
  FUN_140d3f5d0(param_1,local_18);
  uVar1 = FUN_140c55cd0(param_3);
  FUN_140d3f520(param_1,uVar1);
  return param_1;
}


/* address=140d3f520 name=FUN_140d3f520 */

undefined * FUN_140d3f520(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_140c55cd0(param_2);
  *param_1 = *puVar1;
  return param_1;
}


/* address=140d3f550 name=FUN_140d3f550 */

undefined FUN_140d3f550(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined local_18;
  
  if (*(byte *)(param_1 + 1) < *(byte *)(param_2 + 1)) {
LAB_140d3f5b2:
    local_18 = 1;
  }
  else {
    if (*(byte *)(param_1 + 1) <= *(byte *)(param_2 + 1)) {
      uVar2 = FUN_140c55cd0(param_2);
      cVar1 = FUN_140d3f5e0(param_1,uVar2);
      if (cVar1 != '\0') goto LAB_140d3f5b2;
    }
    local_18 = 0;
  }
  return local_18;
}


/* address=140d3f5d0 name=FUN_140d3f5d0 */

undefined8 FUN_140d3f5d0(undefined8 param_1)

{
  return param_1;
}


/* address=140d3f5e0 name=FUN_140d3f5e0 */

undefined FUN_140d3f5e0(byte *param_1,byte *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined local_18;
  
  if (*param_1 < *param_2) {
LAB_140d3f63e:
    local_18 = 1;
  }
  else {
    if (*param_1 <= *param_2) {
      uVar2 = FUN_140c55cd0(param_2);
      cVar1 = FUN_140c7a570(param_1,uVar2);
      if (cVar1 != '\0') goto LAB_140d3f63e;
    }
    local_18 = 0;
  }
  return local_18;
}


/* address=140d3f650 name=FUN_140d3f650 */

undefined8 FUN_140d3f650(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d3f6a0 name=FUN_140d3f6a0 */

void FUN_140d3f6a0(undefined8 *param_1)

{
  if (*(char *)((longlong)param_1 + 0x13) != '\0') {
    thunk_FUN_140e18570(*param_1);
  }
  *param_1 = 0;
  *(undefined *)((longlong)param_1 + 0x13) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  return;
}


/* address=140d3f710 name=FUN_140d3f710 */

undefined8 FUN_140d3f710(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined2 local_res18;
  undefined local_28;
  longlong local_20;
  ulonglong local_18;
  
  if (param_3 < 0x10000) {
    if (*(ushort *)((longlong)param_1 + 0xc) < param_3) {
      if (param_3 < 6) {
        local_20 = (longlong)param_1 + 0xe;
        local_28 = 0;
        local_18 = 0;
      }
      else {
        local_20 = _malloc_base(param_3 + 7);
        if (local_20 == 0) {
          FUN_140c6c4e0(0x10,0,0x41,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_buffer.cc"
                        ,0x4d);
          return 0;
        }
        local_28 = 1;
        local_18 = -local_20 - param_2 & 7;
      }
      FUN_140d3f650(local_20 + local_18,(ulonglong)*(ushort *)(param_1 + 1) + *param_1,
                    *(undefined2 *)((longlong)param_1 + 10));
      if (*(char *)((longlong)param_1 + 0x13) != '\0') {
        thunk_FUN_140e18570(*param_1);
      }
      *param_1 = local_20;
      *(undefined *)((longlong)param_1 + 0x13) = local_28;
      *(undefined2 *)(param_1 + 1) = (undefined2)local_18;
      local_res18 = (undefined2)param_3;
      *(undefined2 *)((longlong)param_1 + 0xc) = local_res18;
      uVar1 = 1;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_buffer.cc"
                  ,0x34);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d3f8a0 name=FUN_140d3f8a0 */

void FUN_140d3f8a0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140d40040(param_1);
  lVar2 = FUN_140c56770(param_1);
  if ((ulonglong)(lVar1 - lVar2) < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + (short)param_2;
  return;
}


/* address=140d3f910 name=FUN_140d3f910 */

void FUN_140d3f910(longlong param_1,ulonglong param_2)

{
  short local_res10;
  
  if (*(ushort *)(param_1 + 10) < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_res10 = (short)param_2;
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + local_res10;
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) - local_res10;
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) - local_res10;
  return;
}


/* address=140d3f990 name=FUN_140d3f990 */

void FUN_140d3f990(longlong param_1)

{
  if (*(short *)(param_1 + 10) == 0) {
    FUN_140d3f6a0(param_1);
  }
  return;
}


/* address=140d3f9c0 name=FUN_140d3f9c0 */

int FUN_140d3f9c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  int local_18;
  
  FUN_140d3f990(*(longlong *)(param_1 + 0x30) + 0x50);
  iVar2 = FUN_140c4c520(param_1);
  local_res10 = param_2;
  if (iVar2 != 0) {
    local_res10 = 0x414d;
  }
  uVar3 = FUN_140dcd080(param_1);
  cVar1 = FUN_140d3f710(*(longlong *)(param_1 + 0x30) + 0x50,uVar3,local_res10);
  if (cVar1 == '\0') {
    local_18 = -1;
  }
  else {
    cVar1 = operator==<>(param_1 + 0x18,0);
    if (cVar1 == '\0') {
      iVar2 = FUN_140c4c520(param_1);
      if (iVar2 == 0) {
        local_18 = FUN_140d3fd80(param_1,local_res10);
      }
      else {
        local_18 = FUN_140d3fca0(param_1);
      }
      if (local_18 < 1) {
        FUN_140d3f990(*(longlong *)(param_1 + 0x30) + 0x50);
      }
    }
    else {
      FUN_140c6c4e0(0x10,0,0x77,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_buffer.cc"
                    ,0xbb);
      local_18 = -1;
    }
  }
  return local_18;
}


/* address=140d3fad0 name=FUN_140d3fad0 */

int FUN_140d3fad0(longlong param_1,undefined *param_2,int param_3,undefined8 param_4,char param_5)

{
  int iVar1;
  
  *param_2 = 0;
  if (param_3 != 2) {
    FUN_140d3f910(*(longlong *)(param_1 + 0x30) + 0x50,param_4);
  }
  if (param_3 == 0) {
    iVar1 = 1;
  }
  else {
    FUN_140d3f990(*(longlong *)(param_1 + 0x30) + 0x50);
    if (param_3 == 1) {
      *param_2 = 1;
      iVar1 = 1;
    }
    else if (param_3 == 2) {
      iVar1 = FUN_140d3f9c0(param_1,param_4);
      if (0 < iVar1) {
        *param_2 = 1;
        iVar1 = 1;
      }
    }
    else if (param_3 == 3) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc4) = 6;
      iVar1 = 0;
    }
    else if (param_3 == 4) {
      if (param_5 != '\0') {
        FUN_140d55f00(param_1,2,param_5);
      }
      iVar1 = -1;
    }
    else {
      FID_conflict__assert(L"0",(wchar_t *)"D",0xf4);
      iVar1 = -1;
    }
  }
  return iVar1;
}


/* address=140d3fc20 name=FUN_140d3fc20 */

undefined8 FUN_140d3fc20(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = operator==<>(param_1 + 0x20,0);
  if (cVar1 == '\0') {
    iVar2 = FUN_140c4c520(param_1);
    if (iVar2 == 0) {
      uVar3 = FUN_140d3feb0(param_1);
    }
    else {
      uVar3 = FUN_140d3ff80(param_1);
    }
  }
  else {
    FUN_140c6c4e0(0x10,0,0x77,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_buffer.cc"
                  ,0x128);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* address=140d3fca0 name=FUN_140d3fca0 */

int FUN_140d3fca0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x30) + 0x50;
  cVar1 = FUN_140c56780(lVar4);
  if (cVar1 == '\0') {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_buffer.cc"
                  ,0x82);
    iVar3 = -1;
  }
  else {
    uVar2 = FUN_140d40040(lVar4);
    uVar5 = FUN_140c56750(lVar4);
    uVar6 = FUN_140c55c70(param_1 + 0x18);
    iVar3 = FUN_140d333b0(uVar6,uVar5,uVar2);
    if (iVar3 < 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc4) = 2;
    }
    else {
      FUN_140d3f8a0(lVar4,(longlong)iVar3);
      iVar3 = 1;
    }
  }
  return iVar3;
}


/* address=140d3fd80 name=FUN_140d3fd80 */

int FUN_140d3fd80(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x30) + 0x50;
  uVar3 = FUN_140d40040(lVar2);
  if (uVar3 < param_2) {
    FUN_140c6c4e0(0x10,0,0x79,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_buffer.cc"
                  ,0x95);
    iVar1 = -1;
  }
  else {
    while (uVar3 = FUN_140c56770(lVar2), uVar3 < param_2) {
      lVar4 = FUN_140c56770(lVar2);
      lVar5 = FUN_140c56750(lVar2);
      lVar6 = FUN_140c56770(lVar2);
      uVar7 = FUN_140c55c70(param_1 + 0x18);
      iVar1 = FUN_140d333b0(uVar7,lVar5 + lVar6,param_2 - lVar4 & 0xffffffff);
      if (iVar1 < 1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc4) = 2;
        return iVar1;
      }
      FUN_140d3f8a0(lVar2,(longlong)iVar1);
    }
    iVar1 = 1;
  }
  return iVar1;
}


/* address=140d3feb0 name=FUN_140d3feb0 */

int FUN_140d3feb0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x30) + 0x68;
  while( true ) {
    cVar1 = FUN_140c56780(lVar4);
    if (cVar1 != '\0') {
      FUN_140d3f6a0(lVar4);
      return 1;
    }
    uVar2 = FUN_140c56770(lVar4);
    uVar5 = FUN_140c56750(lVar4);
    uVar6 = FUN_140c55c70(param_1 + 0x20);
    iVar3 = FUN_140d33590(uVar6,uVar5,uVar2);
    if (iVar3 < 1) break;
    FUN_140d3f910(lVar4,(longlong)iVar3);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc4) = 3;
  return iVar3;
}


/* address=140d3ff80 name=FUN_140d3ff80 */

int FUN_140d3ff80(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x30) + 0x68;
  cVar1 = FUN_140c56780(lVar4);
  if (cVar1 == '\0') {
    uVar2 = FUN_140c56770(lVar4);
    uVar5 = FUN_140c56750(lVar4);
    uVar6 = FUN_140c55c70(param_1 + 0x20);
    iVar3 = FUN_140d33590(uVar6,uVar5,uVar2);
    if (iVar3 < 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc4) = 3;
      FUN_140d3f6a0(lVar4);
    }
    else {
      FUN_140d3f6a0(lVar4);
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 1;
  }
  return iVar3;
}


/* address=140d40040 name=FUN_140d40040 */

undefined2 FUN_140d40040(longlong param_1)

{
  return *(undefined2 *)(param_1 + 0xc);
}


/* address=140d40050 name=FUN_140d40050 */

int FUN_140d40050(void *param_1,void *param_2,size_t param_3)

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


/* address=140d40090 name=FUN_140d40090 */

undefined8 FUN_140d40090(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d400e0 name=FUN_140d400e0 */

undefined4 FUN_140d400e0(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  iVar2 = FUN_140c4e490(param_1);
  if (iVar2 == 0) {
    uVar1 = FUN_140c6de20(param_1);
    if (uVar1 < 0x304) {
      uVar3 = 0;
    }
    else if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
      uVar3 = 0x4000;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    lVar4 = FUN_140c55c70(param_1 + 8);
    if ((((*(byte *)(param_1 + 0xa4) & 1) == 0) || ((*(byte *)(lVar4 + 0xec) & 1) != 0)) &&
       (0x4000 < *(uint *)(param_1 + 0x88))) {
      uVar3 = *(undefined4 *)(param_1 + 0x88);
    }
    else {
      uVar3 = 0x4000;
    }
  }
  return uVar3;
}


/* address=140d401a0 name=FUN_140d401a0 */

longlong * FUN_140d401a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined *puVar3;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  plVar2 = param_1 + 5;
  for (lVar1 = 0x30; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
  plVar2 = param_1 + 0xb;
  for (lVar1 = 0x30; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
  plVar2 = param_1 + 0x11;
  for (lVar1 = 0x30; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
  plVar2 = param_1 + 0x17;
  for (lVar1 = 0x30; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
  plVar2 = param_1 + 0x1d;
  for (lVar1 = 0x30; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
  plVar2 = param_1 + 0x23;
  for (lVar1 = 0x30; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
  plVar2 = param_1 + 0x29;
  for (lVar1 = 0x30; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
  FUN_140d429c0(param_1 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  FUN_140c57b60(param_1 + 0x30);
  FUN_140d427a0(param_1 + 0x31,8,2,FUN_140c57b60);
  FUN_140dbf950(param_1 + 0x33);
  FUN_140dbf950(param_1 + 0x38);
  plVar2 = param_1 + 0x3d;
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)plVar2 = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 1);
  }
  FUN_140c56440(param_1 + 0x41);
  FUN_140c56440(param_1 + 0x43);
  FUN_140c56440(param_1 + 0x45);
  FUN_140c56440(param_1 + 0x47);
  FUN_140c56440(param_1 + 0x49);
  FUN_140c56440(param_1 + 0x4b);
  FUN_140c56440(param_1 + 0x4d);
  FUN_140c56440(param_1 + 0x4f);
  FUN_140c56440(param_1 + 0x51);
  FUN_140c56440(param_1 + 0x53);
  FUN_140c56440(param_1 + 0x55);
  FUN_140c56440(param_1 + 0x57);
  FUN_140d42a20(param_1 + 0x5a);
  FUN_140c56440(param_1 + 0xb3);
  FUN_140c57b60(param_1 + 0xb5);
  FUN_140c57b60(param_1 + 0xb6);
  param_1[0xb7] = 0;
  FUN_140c56440(param_1 + 0xb8);
  FUN_140c57b60(param_1 + 0xba);
  FUN_140c57b60(param_1 + 0xbb);
  FUN_140c57b60(param_1 + 0xbc);
  FUN_140c57b60(param_1 + 0xbd);
  FUN_140c57b60(param_1 + 0xbe);
  FUN_140c57b60(param_1 + 0xbf);
  param_1[0xc0] = 0;
  FUN_140c56440(param_1 + 0xc1);
  FUN_140c57b60(param_1 + 0xc3);
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfe;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfd;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfb;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xf7;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xef;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xdf;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xbf;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0x7f;
  *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) & 0xfe;
  *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) & 0xfd;
  *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) & 0xfb;
  *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) & 0xf7;
  *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) & 0xef;
  *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) & 0xdf;
  *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) & 0xbf;
  *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) & 0x7f;
  *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) & 0xfe;
  *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) & 0xfd;
  *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) & 0xfb;
  *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) & 0xf7;
  *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) & 0xef;
  *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) & 0xdf;
  *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) & 0xbf;
  *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) & 0x7f;
  *(byte *)((longlong)param_1 + 0x623) = *(byte *)((longlong)param_1 + 0x623) & 0xfe;
  *(undefined2 *)((longlong)param_1 + 0x624) = 0;
  *(undefined2 *)((longlong)param_1 + 0x626) = 0;
  *(undefined2 *)(param_1 + 0xc5) = 0;
  *(undefined *)((longlong)param_1 + 0x62a) = 0;
  puVar3 = (undefined *)((longlong)param_1 + 0x62b);
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined *)((longlong)param_1 + 0x64b) = 0;
  puVar3 = (undefined *)((longlong)param_1 + 0x64c);
  for (lVar1 = 7; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*param_1 == 0) {
    FID_conflict__assert(L"ssl",(wchar_t *)"D",0x9a);
  }
  FUN_140ca8a50((longlong)param_1 + 0x64c,7);
  return param_1;
}


/* address=140d40870 name=FUN_140d40870 */

void FUN_140d40870(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c55c70(*param_1 + 0x68);
  (**(code **)(*(longlong *)(lVar1 + 8) + 0x50))(param_1);
  FUN_140d42a70(param_1 + 0xc3);
  FUN_140c564c0(param_1 + 0xc1);
  FUN_140d229f0(param_1 + 0xbf);
  FUN_140c56240(param_1 + 0xbe);
  FUN_140c56300(param_1 + 0xbd);
  FUN_140c56300(param_1 + 0xbc);
  FUN_140c55d60(param_1 + 0xbb);
  FUN_140c55d60(param_1 + 0xba);
  FUN_140c564c0(param_1 + 0xb8);
  FUN_140c56ac0(param_1 + 0xb6);
  FUN_140c56a30(param_1 + 0xb5);
  FUN_140c564c0(param_1 + 0xb3);
  FUN_140d42a50(param_1 + 0x5a);
  FUN_140c564c0(param_1 + 0x57);
  FUN_140c564c0(param_1 + 0x55);
  FUN_140c564c0(param_1 + 0x53);
  FUN_140c564c0(param_1 + 0x51);
  FUN_140c564c0(param_1 + 0x4f);
  FUN_140c564c0(param_1 + 0x4d);
  FUN_140c564c0(param_1 + 0x4b);
  FUN_140c564c0(param_1 + 0x49);
  FUN_140c564c0(param_1 + 0x47);
  FUN_140c564c0(param_1 + 0x45);
  FUN_140c564c0(param_1 + 0x43);
  FUN_140c564c0(param_1 + 0x41);
  FUN_140dbf990(param_1 + 0x38);
  FUN_140dbf990(param_1 + 0x33);
  FUN_140d42800(param_1 + 0x31,8,2,FUN_140c7a600);
  FUN_140d429e0(param_1 + 0x30);
  return;
}


/* address=140d40ae0 name=FUN_140d40ae0 */

void FUN_140d40ae0(longlong param_1,ulonglong param_2)

{
  if (0x30 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(ulonglong *)(param_1 + 0x20) = param_2;
  return;
}


/* address=140d40b20 name=FUN_140d40b20 */

ulonglong FUN_140d40b20(longlong **param_1,undefined *param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  cVar1 = FUN_140c55f90(param_1 + 0x49);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 1;
    puVar2 = (undefined *)FUN_140c57dd0(local_68,param_1 + 0x49);
    puVar6 = local_a8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar2 = (undefined *)FUN_140c57dd0(local_58,local_a8);
    puVar6 = param_2 + 0x18;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = FUN_140c71580(local_48,param_1 + 0x49);
    puVar2 = (undefined *)FUN_140c56800(uVar3,local_38,4,0xffffffffffffffff);
    puVar6 = local_98;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_140c57dd0(local_88,local_98);
    puVar2 = local_88;
    puVar6 = param_2 + 8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    cVar1 = (**(code **)(**param_1 + 0x18))(*param_1,param_2);
    if (cVar1 == '\0') {
      uVar4 = FUN_140c6c4e0(0x10,0,0x44,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                            ,0xb8);
      return uVar4 & 0xffffffffffffff00;
    }
  }
  puVar2 = (undefined *)FUN_140c630f0(param_2 + 8,local_28);
  puVar6 = local_78;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar1 = FUN_140d26f30(*param_1,param_3,local_78);
  if (cVar1 == '\0') {
    FUN_140c6c4e0(0x10,0,0x83,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                  ,0xbd);
    uVar4 = FUN_140d55f00(*param_1,2,0x32);
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140d40d50 name=FUN_140d40d50 */

undefined8 FUN_140d40d50(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res10 [3];
  undefined local_28 [8];
  undefined local_20 [8];
  undefined8 local_18;
  
  local_res10[0] = param_2;
  uVar2 = FUN_140d42ab0(local_20,local_res10);
  FUN_140c55e70(local_28,uVar2);
  FUN_140c56cd0(local_20);
  cVar1 = FUN_140c56050(local_28);
  if (cVar1 != '\0') {
    lVar3 = FUN_140c55c70(local_28);
    cVar1 = FUN_140dbf9d0(lVar3 + 0x198);
    if (cVar1 != '\0') {
      local_18 = FUN_140c55c70(local_res10[0] + 8);
      lVar3 = FUN_140c55c70(local_28);
      *(undefined8 *)(lVar3 + 8) = local_18;
      lVar3 = FUN_140c55c70(local_28);
      if (*(longlong *)(lVar3 + 8) == 0) {
        lVar3 = FUN_140c55c70(local_28);
        if (*(longlong *)(lVar3 + 8) == 0) {
          FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0xcb);
        }
        FUN_140c5cfa0(param_1,0);
        FUN_140c56cd0(local_28);
        return param_1;
      }
      FUN_140c55e70(param_1,local_28);
      FUN_140c56cd0(local_28);
      return param_1;
    }
  }
  FUN_140c5cfa0(param_1,0);
  FUN_140c56cd0(local_28);
  return param_1;
}


/* address=140d40e90 name=FUN_140d40e90 */

ulonglong FUN_140d40e90(undefined8 param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (*(byte *)(param_2 + 1) == param_3) {
    uVar1 = 1;
  }
  else {
    FUN_140d55f00(param_1,2,10);
    FUN_140c6c4e0(0x10,0,0xdf,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                  ,0xd4);
    uVar1 = FUN_140c6c650("got type %d, wanted type %d",*(undefined *)(param_2 + 1),param_3);
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}


/* address=140d40f20 name=FUN_140d40f20 */

int FUN_140d40f20(longlong **param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined local_98 [8];
  longlong *local_90;
  char local_88 [4];
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 local_68 [2];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  local_90 = *param_1;
LAB_140d40f43:
  do {
    local_80 = *(undefined4 *)(param_1 + 2);
    switch(local_80) {
    case 0:
      uVar4 = FUN_140c55c70(param_1 + 0x30);
      FUN_140c6c9b0(uVar4);
      return -1;
    case 2:
    case 3:
    case 0xf:
      if (local_90[0x13] != 0) {
        if (*(int *)(param_1 + 2) == 0xf) {
          FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x266);
        }
        *(undefined4 *)(local_90[6] + 0xc4) = 2;
        *(undefined4 *)(param_1 + 2) = 1;
        return -1;
      }
      local_98[0] = 0x32;
      local_68[0] = 0;
      if (*(int *)(param_1 + 2) == 0xf) {
        puVar3 = (undefined *)FUN_140c567b0(local_90[6] + 0x50,local_38);
        puVar6 = local_58;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        local_84 = FUN_140c53ab0(local_90,local_68,local_98,local_58);
      }
      else {
        puVar3 = (undefined *)FUN_140c567b0(local_90[6] + 0x50,local_28);
        puVar6 = local_48;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        local_84 = FUN_140c53a10(local_90,local_68,local_98,local_48);
      }
      if ((local_84 == 4) && (*(int *)(param_1 + 2) == 2)) {
        local_78 = FUN_140c6bbb0();
        iVar1 = FUN_140c55bf0(local_78);
        if ((iVar1 == 0x10) && (iVar1 = FUN_140c5e9d0(local_78), iVar1 == 0x410)) {
          FUN_140c6c4e0(0x10,0,0x9a,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                        ,0x284);
        }
      }
      local_74 = FUN_140d3fad0(local_90,local_88,local_84,local_68[0],local_98[0]);
      if (local_74 < 1) {
        return local_74;
      }
      if (local_88[0] != '\0') goto LAB_140d40f43;
      FUN_140d3f990(local_90[6] + 0x50);
      break;
    case 4:
      local_7c = (**(code **)(*local_90 + 0x78))(local_90);
      if (local_7c < 1) {
        return local_7c;
      }
      break;
    case 5:
      *(undefined4 *)(local_90[6] + 0xc4) = 0xc;
      *(undefined4 *)(param_1 + 2) = 1;
      return -1;
    case 6:
      *(undefined4 *)(local_90[6] + 0xc4) = 0x11;
      *(undefined4 *)(param_1 + 2) = 1;
      return -1;
    case 7:
      iVar1 = (**(code **)(*local_90 + 0x78))(local_90);
      if (iVar1 < 1) {
        return iVar1;
      }
      *(undefined4 *)(local_90[6] + 0xc4) = 0x12;
      *(undefined4 *)(param_1 + 2) = 7;
      return -1;
    case 8:
      *(undefined4 *)(local_90[6] + 0xc4) = 4;
      *(undefined4 *)(param_1 + 2) = 1;
      return -1;
    case 9:
      *(undefined4 *)(local_90[6] + 0xc4) = 0xd;
      *(undefined4 *)(param_1 + 2) = 1;
      return -1;
    case 10:
      *(undefined4 *)(local_90[6] + 0xc4) = 0xb;
      *(undefined4 *)(param_1 + 2) = 1;
      return -1;
    case 0xb:
      *(undefined4 *)(local_90[6] + 0xc4) = 0xe;
      *(undefined4 *)(param_1 + 2) = 1;
      return -1;
    case 0xc:
      if (((*(byte *)((longlong)local_90 + 0xa4) & 1) == 0) && (*(int *)(local_90[6] + 0xd8) == 2))
      {
        FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x2d3);
      }
      *param_2 = 1;
      *(undefined4 *)(param_1 + 2) = 1;
      return 1;
    case 0xd:
      if (*(int *)(local_90[6] + 0x100) == 0) {
        FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x2cb);
      }
      if ((*(byte *)((longlong)param_1 + 0x621) >> 6 & 1) != 0) {
        FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x2cc);
      }
      *(undefined4 *)(local_90[6] + 0xc4) = 0xf;
      return -1;
    case 0xe:
      lVar5 = FUN_140c55c70(local_90[6] + 0x118);
      if ((*(byte *)(lVar5 + 0x621) >> 5 & 1) != 0) {
        *param_2 = 1;
        return 1;
      }
      *(undefined4 *)(param_1 + 2) = 1;
      break;
    case 0x10:
      *(undefined4 *)(local_90[6] + 0xc4) = 0x10;
      *(undefined4 *)(param_1 + 2) = 1;
      return -1;
    case 0x11:
      *(undefined4 *)(local_90[6] + 0xc4) = 0x14;
      return -1;
    }
    uVar2 = (*(code *)local_90[5])(param_1);
    *(undefined4 *)(param_1 + 2) = uVar2;
    if (*(int *)(param_1 + 2) == 0) {
      uVar4 = FUN_140c6c800();
      FUN_140c56880(param_1 + 0x30,uVar4);
      return -1;
    }
    if (*(int *)(param_1 + 2) == 1) {
      if (((*(byte *)((longlong)local_90 + 0xa4) & 1) == 0) && (*(int *)(local_90[6] + 0xd8) == 2))
      {
        FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x2ea);
      }
      *param_2 = 0;
      return 1;
    }
  } while( true );
}


/* address=140d41590 name=FUN_140d41590 */

ulonglong FUN_140d41590(undefined *param_1,undefined *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  short *psVar4;
  short local_88 [4];
  short *local_80;
  longlong *local_78;
  short **local_70;
  longlong local_68;
  short *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  short **local_40;
  undefined local_38 [16];
  undefined local_28 [24];
  
  local_58 = param_3;
  local_78 = (longlong *)FUN_140c55c70(param_3);
  local_48 = (longlong *)FUN_140c55f80(local_58);
  for (; local_78 != local_48; local_78 = local_78 + 1) {
    local_68 = *local_78;
    *(undefined *)(local_68 + 3) = 0;
    FUN_140d35430(local_68 + 8,0,0);
    if ((*(char *)(local_68 + 2) == '\0') && (param_4 != '\0')) {
      FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x115);
    }
  }
  puVar3 = local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  while( true ) {
    lVar2 = FUN_140d354c0(local_38);
    if (lVar2 == 0) {
      return 1;
    }
    iVar1 = FUN_140d35710(local_38,local_88);
    if ((iVar1 == 0) || (iVar1 = FUN_140d35a70(local_38,local_28), iVar1 == 0)) break;
    local_80 = (short *)0x0;
    local_50 = param_3;
    local_70 = (short **)FUN_140c55c70(param_3);
    local_40 = (short **)FUN_140c55f80(local_50);
    for (; (psVar4 = local_80, local_70 != local_40 &&
           ((local_60 = *local_70, local_88[0] != *local_60 ||
            (psVar4 = local_60, *(char *)(local_60 + 1) == '\0')))); local_70 = local_70 + 1) {
    }
    local_80 = psVar4;
    if (local_80 == (short *)0x0) {
      if (param_4 == '\0') {
        FUN_140c6c4e0(0x10,0,0xde,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                      ,0x130);
        *param_2 = 0x6e;
        return (ulonglong)param_2 & 0xffffffffffffff00;
      }
    }
    else {
      if (*(char *)((longlong)local_80 + 3) != '\0') {
        FUN_140c6c4e0(0x10,0,0x101,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                      ,0x137);
        *param_2 = 0x2f;
        return (ulonglong)param_2 & 0xffffffffffffff00;
      }
      *(undefined *)((longlong)local_80 + 3) = 1;
      puVar3 = local_28;
      psVar4 = local_80 + 4;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined *)psVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        psVar4 = (short *)((longlong)psVar4 + 1);
      }
    }
  }
  FUN_140c6c4e0(0x10,0,0xbe,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                ,0x11f);
  *param_2 = 0x32;
  return (ulonglong)param_2 & 0xffffffffffffff00;
}


/* address=140d41840 name=FUN_140d41840 */

uint FUN_140d41840(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined local_98 [4];
  uint local_94;
  longlong local_90;
  longlong local_88;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined4 local_74;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  undefined local_20 [8];
  undefined8 local_18;
  longlong local_10;
  
  local_90 = *param_1;
  local_88 = FUN_140c55c70(*(longlong *)(local_90 + 0x30) + 0x1d0);
  if (local_88 == 0) {
    local_98[0] = 0x2e;
    if (*(longlong *)(param_1[1] + 0x30) == 0) {
      local_18 = FUN_140c55c70(param_1 + 0xbc);
      lVar4 = FUN_140c55c70(local_90 + 0x68);
      cVar1 = (**(code **)(*(longlong *)(lVar4 + 8) + 0x48))(local_18,param_1,local_98);
      local_7c = (uint)(cVar1 == '\0');
      local_94 = local_7c;
    }
    else {
      local_94 = (**(code **)(param_1[1] + 0x30))(local_90,local_98);
      local_80 = local_94;
      if (local_94 == 0) {
        lVar4 = FUN_140c55c70(param_1 + 0xbc);
        *(undefined4 *)(lVar4 + 0xb0) = 0;
      }
      else if (local_94 == 1) {
        if (*(char *)(param_1[1] + 0xec) == '\0') {
          FUN_140c6c180();
          local_94 = 0;
        }
        lVar4 = FUN_140c55c70(param_1 + 0xbc);
        *(undefined4 *)(lVar4 + 0xb0) = 0x32;
      }
    }
    if (local_94 == 1) {
      FUN_140c6c4e0(0x10,0,0x7d,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                    ,0x189);
      FUN_140d55f00(local_90,2,local_98[0]);
    }
    if ((((local_94 == 0) && ((*(byte *)(local_90 + 0xa4) & 1) == 0)) &&
        ((*(byte *)(param_1[1] + 0xed) >> 2 & 1) != 0)) &&
       (lVar4 = FUN_140c55c70(local_90 + 0x68), *(longlong *)(lVar4 + 0x210) != 0)) {
      local_10 = FUN_140c55c70(local_90 + 0x68);
      lVar4 = FUN_140c55c70(local_90 + 0x68);
      local_78 = (**(code **)(lVar4 + 0x210))(local_90,*(undefined8 *)(local_10 + 0x218));
      if (local_78 < 1) {
        FUN_140c6c4e0(0x10,0,0x121,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                      ,0x195);
        if (local_78 == 0) {
          local_74 = 0x71;
        }
        else {
          local_74 = 0x50;
        }
        FUN_140d55f00(local_90,2,local_74);
        local_94 = 1;
      }
    }
  }
  else {
    if ((*(byte *)(local_90 + 0xa4) & 1) != 0) {
      FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x14b);
    }
    uVar3 = FUN_140c55c70(local_88 + 0x88);
    local_58 = FUN_140c560a0(uVar3);
    lVar4 = FUN_140c55c70(param_1 + 0xbc);
    uVar3 = FUN_140c55c70(lVar4 + 0x88);
    lVar4 = FUN_140c560a0(uVar3);
    if (local_58 == lVar4) {
      local_70 = 0;
      while( true ) {
        lVar4 = FUN_140c55c70(param_1 + 0xbc);
        uVar3 = FUN_140c55c70(lVar4 + 0x88);
        uVar5 = FUN_140c560a0(uVar3);
        if (uVar5 <= local_70) break;
        uVar3 = FUN_140c55c70(local_88 + 0x88);
        local_68 = FUN_140c560c0(uVar3,local_70);
        lVar4 = FUN_140c55c70(param_1 + 0xbc);
        uVar3 = FUN_140c55c70(lVar4 + 0x88);
        local_60 = FUN_140c560c0(uVar3,local_70);
        local_50 = FUN_140c760d0(local_68);
        lVar4 = FUN_140c760d0(local_60);
        if (local_50 != lVar4) {
LAB_140d41a65:
          FUN_140c6c4e0(0x10,0,0x111,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                        ,0x15d);
          FUN_140d55f00(local_90,2,0x2f);
          return 1;
        }
        local_48 = FUN_140c760d0(local_68);
        local_40 = FUN_140c760b0(local_60);
        uVar3 = FUN_140c760b0(local_68);
        iVar2 = FUN_140d40050(uVar3,local_40,local_48);
        if (iVar2 != 0) goto LAB_140d41a65;
        local_70 = local_70 + 1;
      }
      local_38 = FUN_140c63280(local_30,local_88 + 0x100);
      lVar4 = FUN_140c55c70(param_1 + 0xbc);
      FUN_140c635a0(lVar4 + 0x100,local_38);
      FUN_140c5ccf0(local_30);
      local_28 = FUN_140c63280(local_20,local_88 + 0xf8);
      lVar4 = FUN_140c55c70(param_1 + 0xbc);
      FUN_140c635a0(lVar4 + 0xf8,local_28);
      FUN_140c5ccf0(local_20);
      lVar4 = FUN_140c55c70(param_1 + 0xbc);
      *(undefined4 *)(lVar4 + 0xb0) = *(undefined4 *)(local_88 + 0xb0);
      local_94 = 0;
    }
    else {
      FUN_140c6c4e0(0x10,0,0x111,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                    ,0x14e);
      FUN_140d55f00(local_90,2,0x2f);
      local_94 = 1;
    }
  }
  return local_94;
}


/* address=140d41e10 name=FUN_140d41e10 */

int FUN_140d41e10(longlong *param_1,char param_2)

{
  char cVar1;
  undefined local_18 [4];
  int local_14;
  longlong local_10;
  
  local_10 = *param_1;
  cVar1 = operator==<>(*(longlong *)(local_10 + 0x30) + 0x1d0,0);
  if (cVar1 == '\0') {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x1aa);
  }
  if (*(char *)(param_1[1] + 0xec) == '\0') {
    FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x1ab);
  }
  local_18[0] = 0x2e;
  local_14 = 1;
  if (*(longlong *)(param_1[1] + 0x30) != 0) {
    local_14 = (**(code **)(param_1[1] + 0x30))(local_10,local_18);
  }
  if (local_14 == 1) {
    FUN_140c6c4e0(0x10,0,0x7d,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                  ,0x1b4);
    if (param_2 != '\0') {
      FUN_140d55f00(local_10,2,local_18[0]);
    }
  }
  return local_14;
}


/* address=140d41f30 name=FUN_140d41f30 */

void FUN_140d41f30(longlong **param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined auStack_d8 [32];
  undefined4 local_b8;
  undefined local_a8;
  longlong *local_a0;
  undefined local_98;
  undefined7 uStack_97;
  int local_90;
  undefined local_88 [8];
  undefined local_80 [40];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_d8;
  local_a0 = *param_1;
  cVar1 = (**(code **)(*local_a0 + 0x18))(local_a0,local_88);
  if ((cVar1 != '\0') && (cVar1 = FUN_140d40e90(local_a0,local_88,0x14), cVar1 != '\0')) {
    local_a8 = (*(byte *)((longlong)local_a0 + 0xa4) & 1) == 0;
    uVar2 = FUN_140d42550(param_1);
    local_b8 = CONCAT31(local_b8._1_3_,local_a8);
    cVar1 = FUN_140dbfff0(param_1 + 0x33,local_58,&local_98,uVar2);
    if ((cVar1 != '\0') && (cVar1 = FUN_140d426e0(param_1,local_88), cVar1 != '\0')) {
      local_90 = FUN_140d35650(local_80,local_58,CONCAT71(uStack_97,local_98));
      if (local_90 == 0) {
        FUN_140d55f00(local_a0,2,0x33);
        local_b8 = 0x1ed;
        FUN_140c6c4e0(0x10,0,0x8e,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                     );
      }
      else if ((CONCAT71(uStack_97,local_98) < 0xd) && (CONCAT71(uStack_97,local_98) < 0xd)) {
        if ((*(byte *)((longlong)local_a0 + 0xa4) & 1) == 0) {
          FUN_140d40090(local_a0[6] + 0x1c1,local_58,CONCAT71(uStack_97,local_98));
          *(undefined *)(local_a0[6] + 0x1c0) = local_98;
        }
        else {
          FUN_140d40090(local_a0[6] + 0x1b3,local_58,CONCAT71(uStack_97,local_98));
          *(undefined *)(local_a0[6] + 0x1bf) = local_98;
        }
        cVar1 = (**(code **)(*local_a0 + 0x28))(local_a0);
        if (cVar1 == '\0') {
          (**(code **)(*local_a0 + 0x20))(local_a0);
        }
        else {
          FUN_140d55f00(local_a0,2,10);
          local_b8 = 0x203;
          FUN_140c6c4e0(0x10,0,0xff,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                       );
        }
      }
      else {
        local_b8 = 500;
        FUN_140c6c4e0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                     );
      }
    }
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140d421d0 name=FUN_140d421d0 */

void FUN_140d421d0(longlong **param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined auStack_148 [32];
  undefined4 local_128;
  undefined local_118;
  undefined local_117;
  longlong *local_110;
  undefined local_108;
  undefined7 uStack_107;
  longlong local_100;
  longlong local_f8;
  undefined local_e8 [16];
  undefined local_d8 [48];
  undefined local_a8 [16];
  undefined local_98 [48];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_148;
  local_110 = *param_1;
  local_100 = FUN_140d42550(param_1);
  local_128 = CONCAT31(local_128._1_3_,*(undefined *)((longlong)local_110 + 0xa4)) & 0xffffff01;
  cVar1 = FUN_140dbfff0(param_1 + 0x33,local_68,&local_108,local_100);
  if (cVar1 != '\0') {
    puVar3 = (undefined *)FUN_140c55fe0(local_a8,local_100 + 0xb,*(undefined *)(local_100 + 10));
    puVar6 = local_e8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar1 = FUN_140c537a0(local_110,"CLIENT_RANDOM",local_e8);
    if (cVar1 != '\0') {
      if ((CONCAT71(uStack_107,local_108) < 0xd) && (CONCAT71(uStack_107,local_108) < 0xd)) {
        if ((*(byte *)((longlong)local_110 + 0xa4) & 1) == 0) {
          FUN_140d40090(local_110[6] + 0x1b3,local_68,CONCAT71(uStack_107,local_108));
          *(undefined *)(local_110[6] + 0x1bf) = local_108;
        }
        else {
          FUN_140d40090(local_110[6] + 0x1c1,local_68,CONCAT71(uStack_107,local_108));
          *(undefined *)(local_110[6] + 0x1c0) = local_108;
        }
        FUN_140c57a60(local_d8);
        uVar4 = FUN_140c55cd0(local_d8);
        local_f8 = *local_110;
        cVar1 = (**(code **)(local_f8 + 0x58))(local_110,uVar4,local_98,0x14);
        if ((cVar1 != '\0') &&
           (iVar2 = FUN_140d37f00(local_98,local_68,CONCAT71(uStack_107,local_108)), iVar2 != 0)) {
          uVar4 = FUN_140c55cd0(local_d8);
          cVar1 = FUN_140d42620(local_110,uVar4);
          if (cVar1 != '\0') {
            local_117 = 1;
            FUN_140c57a90(local_d8);
            goto LAB_140d4243e;
          }
        }
        local_128 = 0x230;
        FUN_140c6c4e0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                     );
        local_118 = 0;
        FUN_140c57a90(local_d8);
      }
      else {
        local_128 = 0x21f;
        FUN_140c6c4e0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                     );
      }
    }
  }
LAB_140d4243e:
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_148);
  return;
}


/* address=140d42460 name=FUN_140d42460 */

undefined FUN_140d42460(longlong **param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined local_68 [48];
  undefined local_38 [56];
  
  FUN_140c57a60(local_68);
  uVar2 = FUN_140c55cd0(local_68);
  cVar1 = (**(code **)(**param_1 + 0x58))(*param_1,uVar2,local_38,0xb);
  if ((cVar1 != '\0') && (cVar1 = FUN_140c722f0(param_1,local_38), cVar1 != '\0')) {
    uVar2 = FUN_140c55cd0(local_68);
    cVar1 = FUN_140d42620(*param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_140c57a90(local_68);
      return 1;
    }
  }
  FUN_140c6c4e0(0x10,0,0x44,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake.cc"
                ,0x23e);
  FUN_140c57a90(local_68);
  return 0;
}


/* address=140d42550 name=FUN_140d42550 */

void FUN_140d42550(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_140c56050(param_1 + 0xbc);
  if (cVar1 == '\0') {
    FUN_140c55c70(*param_1 + 0x58);
  }
  else {
    FUN_140c55c70(param_1 + 0xbc);
  }
  return;
}


/* address=140d425b0 name=FUN_140d425b0 */

ushort FUN_140d425b0(undefined8 param_1,int param_2)

{
  ushort uVar1;
  ushort local_18;
  
  local_18 = FUN_140d42750(param_1,param_2);
  if (param_2 == 3) {
    uVar1 = FUN_140d42750(param_1,2);
    if (local_18 == uVar1) {
      local_18 = local_18 ^ 0x1010;
    }
  }
  return local_18;
}


/* address=140d42620 name=FUN_140d42620 */

undefined FUN_140d42620(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined local_30 [16];
  undefined local_20 [32];
  
  FUN_140c56440(local_30);
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_2,local_30);
  if (cVar1 != '\0') {
    uVar2 = FUN_140c55cd0(local_30);
    uVar2 = _Ptr_base<>(local_20,uVar2);
    cVar1 = (**(code **)(*param_1 + 0x68))(param_1,uVar2);
    if (cVar1 != '\0') {
      FUN_140c564c0(local_30);
      return 1;
    }
  }
  FUN_140c564c0(local_30);
  return 0;
}


/* address=140d426e0 name=FUN_140d426e0 */

undefined8 FUN_140d426e0(longlong param_1,char *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_38 [16];
  undefined local_28 [24];
  
  if (*param_2 == '\0') {
    puVar1 = (undefined *)FUN_140c630f0(param_2 + 0x18,local_28);
    puVar4 = local_38;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar2 = FUN_140dbfe50(param_1 + 0x198,local_38);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d42750 name=FUN_140d42750 */

ushort FUN_140d42750(longlong param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x64c + (longlong)param_2) & 0xf0 | 10;
  return uVar1 | uVar1 << 8;
}


/* address=140d427a0 name=FUN_140d427a0 */

void FUN_140d427a0(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  longlong local_res8;
  longlong local_res18;
  
  local_res8 = param_1;
  local_res18 = param_3;
  while( true ) {
    if (local_res18 == 0) break;
    (*param_4)(local_res8);
    local_res8 = local_res8 + param_2;
    local_res18 = local_res18 + -1;
  }
  return;
}


/* address=140d42800 name=FUN_140d42800 */

void FUN_140d42800(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  longlong local_res8;
  longlong local_res18;
  
  local_res8 = param_1 + param_2 * param_3;
  local_res18 = param_3;
  while( true ) {
    if (local_res18 == 0) break;
    local_res8 = local_res8 - param_2;
    (*param_4)(local_res8);
    local_res18 = local_res18 + -1;
  }
  return;
}


/* address=140d42880 name=FUN_140d42880 */

void FUN_140d42880(longlong param_1)

{
  FUN_140c564c0(param_1 + 0xe0);
  FUN_140c564c0(param_1 + 0xd0);
  FUN_140c564c0(param_1 + 0xc0);
  FUN_140c564c0(param_1 + 0xa8);
  FUN_140c564c0(param_1 + 0x98);
  FUN_140c564c0(param_1 + 0x80);
  FUN_140c564c0(param_1 + 0x70);
  FUN_140c564c0(param_1 + 0x60);
  FUN_140c564c0(param_1 + 0x50);
  FUN_140c564c0(param_1 + 0x38);
  FUN_140c564c0(param_1 + 0x28);
  FUN_140c564c0(param_1 + 0x10);
  FUN_140c564c0(param_1);
  return;
}


/* address=140d42980 name=FUN_140d42980 */

undefined8 FUN_140d42980(undefined8 param_1,uint param_2)

{
  FUN_140d42880(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0xf8);
  }
  return param_1;
}


/* address=140d429c0 name=FUN_140d429c0 */

undefined4 * FUN_140d429c0(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}


/* address=140d429e0 name=FUN_140d429e0 */

void FUN_140d429e0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140c584d0(uVar1,*param_1);
  }
  return;
}


/* address=140d42a20 name=FUN_140d42a20 */

undefined8 FUN_140d42a20(undefined8 param_1)

{
  FUN_140d64dd0(param_1);
  return param_1;
}


/* address=140d42a50 name=FUN_140d42a50 */

void FUN_140d42a50(undefined8 param_1)

{
  FUN_140d64e10(param_1);
  return;
}


/* address=140d42a70 name=FUN_140d42a70 */

void FUN_140d42a70(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140d42b60(uVar1,*param_1);
  }
  return;
}


/* address=140d42ab0 name=FUN_140d42ab0 */

undefined8 FUN_140d42ab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c55cd0(param_2);
  uVar1 = FUN_140d42b00(uVar1);
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c56cd0(local_18);
  return param_1;
}


/* address=140d42b00 name=FUN_140d42b00 */

undefined8 FUN_140d42b00(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_140c660d0(0x658);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x658,lVar1);
    puVar3 = (undefined8 *)FUN_140c55cd0(param_1);
    uVar2 = FUN_140d401a0(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=140d42b60 name=FUN_140d42b60 */

void FUN_140d42b60(undefined8 param_1,undefined8 param_2)

{
  FUN_140d42b80(param_2);
  return;
}


/* address=140d42b80 name=FUN_140d42b80 */

void FUN_140d42b80(undefined8 param_1)

{
  FUN_140d42ba0(param_1);
  return;
}


/* address=140d42ba0 name=FUN_140d42ba0 */

void FUN_140d42ba0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140d42980(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140d42bd0 name=FUN_140d42bd0 */

undefined8 FUN_140d42bd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d42c20 name=FUN_140d42c20 */

undefined8 FUN_140d42c20(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d42f10 name=FUN_140d42f10 */

char * FUN_140d42f10(longlong param_1)

{
  char *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    pcVar1 = "TLS client start_connect";
    break;
  case 1:
    pcVar1 = "TLS client enter_early_data";
    break;
  case 2:
    pcVar1 = "TLS client early_reverify_server_certificate";
    break;
  case 3:
    pcVar1 = "TLS client read_hello_verify_request";
    break;
  case 4:
    pcVar1 = "TLS client read_server_hello";
    break;
  case 5:
    pcVar1 = (char *)FUN_140d52290(param_1);
    break;
  case 6:
    pcVar1 = "TLS client read_server_certificate";
    break;
  case 7:
    pcVar1 = "TLS client read_certificate_status";
    break;
  case 8:
    pcVar1 = "TLS client verify_server_certificate";
    break;
  case 9:
    pcVar1 = "TLS client reverify_server_certificate";
    break;
  case 10:
    pcVar1 = "TLS client read_server_key_exchange";
    break;
  case 0xb:
    pcVar1 = "TLS client read_certificate_request";
    break;
  case 0xc:
    pcVar1 = "TLS client read_server_hello_done";
    break;
  case 0xd:
    pcVar1 = "TLS client send_client_certificate";
    break;
  case 0xe:
    pcVar1 = "TLS client send_client_key_exchange";
    break;
  case 0xf:
    pcVar1 = "TLS client send_client_certificate_verify";
    break;
  case 0x10:
    pcVar1 = "TLS client send_client_finished";
    break;
  case 0x11:
    pcVar1 = "TLS client finish_flight";
    break;
  case 0x12:
    pcVar1 = "TLS client read_session_ticket";
    break;
  case 0x13:
    pcVar1 = "TLS client process_change_cipher_spec";
    break;
  case 0x14:
    pcVar1 = "TLS client read_server_finished";
    break;
  case 0x15:
    pcVar1 = "TLS client finish_client_handshake";
    break;
  case 0x16:
    pcVar1 = "TLS client done";
    break;
  default:
    pcVar1 = "TLS client unknown";
  }
  return pcVar1;
}


/* address=140d430b0 name=FUN_140d430b0 */

undefined8 FUN_140d430b0(longlong *param_1,undefined8 param_2,int param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *local_50;
  undefined local_40 [64];
  
  lVar1 = *param_1;
  iVar3 = FUN_140d38120(param_2,*(undefined2 *)((longlong)param_1 + 0x624));
  if (iVar3 != 0) {
    if (param_3 == 1) {
      local_50 = param_1 + 0x3d;
    }
    else {
      local_50 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 0x30);
    }
    iVar3 = FUN_140d37f00(param_2,local_50,0x20);
    if ((iVar3 != 0) && (iVar3 = FUN_140d37db0(param_2,local_40), iVar3 != 0)) {
      if (((*(byte *)(*(longlong *)(lVar1 + 0x30) + 0xdc) >> 5 & 1) == 0) &&
         ((param_4 == '\0' &&
          (iVar3 = FUN_140d37f00(local_40,(longlong)param_1 + 0x62b,
                                 *(undefined *)((longlong)param_1 + 0x64b)), iVar3 == 0)))) {
        return 0;
      }
      iVar3 = FUN_140c4c520(lVar1);
      if (iVar3 != 0) {
        iVar3 = FUN_140d37db0(param_2,local_40);
        if (iVar3 != 0) {
          uVar4 = FUN_140c55f80(param_1 + 0x43);
          uVar5 = FUN_140c55c70(param_1 + 0x43);
          iVar3 = FUN_140d37f00(local_40,uVar5,uVar4);
          if (iVar3 != 0) goto LAB_140d43233;
        }
        return 0;
      }
LAB_140d43233:
      cVar2 = FUN_140d43810(param_1,param_2,param_3);
      if (((cVar2 != '\0') && (iVar3 = FUN_140d380f0(param_2,1), iVar3 != 0)) &&
         (iVar3 = FUN_140d380f0(param_2,0), iVar3 != 0)) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


/* address=140d43290 name=FUN_140d43290 */

undefined FUN_140d43290(longlong **param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  char local_f7;
  undefined local_f6;
  undefined local_f5;
  int local_f4;
  longlong *local_f0;
  int local_e8;
  undefined local_e0 [16];
  longlong local_d0;
  longlong local_c8;
  undefined *local_c0;
  longlong local_b8;
  undefined local_a8 [16];
  undefined local_98 [48];
  undefined local_68 [48];
  undefined local_38 [16];
  undefined local_28 [24];
  
  local_f0 = *param_1;
  FUN_140c57a60(local_98);
  cVar1 = FUN_140c56050(param_1 + 0xbf);
  if (cVar1 == '\0') {
    local_e8 = 0;
  }
  else {
    local_e8 = 2;
  }
  local_f4 = local_e8;
  FUN_140c56440(local_e0);
  uVar2 = FUN_140c55cd0(local_98);
  local_d0 = *local_f0;
  cVar1 = (**(code **)(local_d0 + 0x58))(local_f0,uVar2,local_68,1);
  if ((cVar1 != '\0') && (cVar1 = FUN_140d430b0(param_1,local_68,local_f4,0), cVar1 != '\0')) {
    uVar2 = FUN_140d37cf0(local_68);
    cVar1 = FUN_140d27f60(param_1,local_68,0,&local_f7,local_f4,uVar2);
    if (cVar1 != '\0') {
      uVar2 = FUN_140c55cd0(local_98);
      local_c8 = *local_f0;
      cVar1 = (**(code **)(local_c8 + 0x60))(local_f0,uVar2,local_e0);
      if (cVar1 != '\0') {
        if (local_f7 != '\0') {
          if (local_f4 == 2) {
            FID_conflict__assert((wchar_t *)"t",(wchar_t *)"D",0x169);
          }
          puVar3 = (undefined *)FUN_140c71580(local_38,local_e0);
          puVar5 = local_a8;
          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          cVar1 = FUN_140dc1e50(param_1,param_1 + 0x33,local_a8,0);
          if (cVar1 == '\0') {
            local_f6 = 0;
            FUN_140c564c0(local_e0);
            FUN_140c57a90(local_98);
            return local_f6;
          }
        }
        local_c0 = local_28;
        uVar2 = FUN_140c55cd0(local_e0);
        uVar2 = _Ptr_base<>(local_c0,uVar2);
        local_b8 = *local_f0;
        local_f5 = (**(code **)(local_b8 + 0x68))(local_f0,uVar2);
        FUN_140c564c0(local_e0);
        FUN_140c57a90(local_98);
        return local_f5;
      }
    }
  }
  FUN_140c564c0(local_e0);
  FUN_140c57a90(local_98);
  return 0;
}


/* address=140d43520 name=FUN_140d43520 */

ulonglong FUN_140d43520(undefined *param_1,undefined *param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_28 [24];
  
  if (*(char *)(param_3 + 1) != '\x02') {
    FUN_140c6c4e0(0x10,0,0xdf,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,0x29b);
    *param_2 = 10;
    return (ulonglong)param_2 & 0xffffffffffffff00;
  }
  puVar4 = (undefined *)(param_3 + 0x18);
  puVar5 = param_1;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined *)(param_3 + 8);
  puVar5 = local_28;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar1 = FUN_140d35710(local_28,param_1 + 0x10);
  if (((((iVar1 != 0) && (iVar1 = FUN_140d35980(local_28,param_1 + 0x18,0x20), iVar1 != 0)) &&
       (iVar1 = FUN_140d35a40(local_28,param_1 + 0x28), iVar1 != 0)) &&
      ((uVar2 = FUN_140d354c0(param_1 + 0x28), uVar2 < 0x21 &&
       (iVar1 = FUN_140d35710(local_28,param_1 + 0x38), iVar1 != 0)))) &&
     (iVar1 = FUN_140d356c0(local_28,param_1 + 0x3a), iVar1 != 0)) {
    FUN_140d35430(param_1 + 0x40,0,0);
    lVar3 = FUN_140d354c0(local_28);
    if (((lVar3 == 0) || (iVar1 = FUN_140d35a70(local_28,param_1 + 0x40), iVar1 != 0)) &&
       (lVar3 = FUN_140d354c0(local_28), lVar3 == 0)) {
      return 1;
    }
    FUN_140c6c4e0(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,0x2b1);
    *param_2 = 0x32;
    return (ulonglong)param_2 & 0xffffffffffffff00;
  }
  FUN_140c6c4e0(0x10,0,0x89,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                ,0x2a7);
  *param_2 = 0x32;
  return (ulonglong)param_2 & 0xffffffffffffff00;
}


/* address=140d43700 name=FUN_140d43700 */

void FUN_140d43700(longlong param_1)

{
  FUN_140c56520(param_1 + 0x228);
  FUN_140c56520(param_1 + 0x208);
  FUN_140c56520(param_1 + 600);
  return;
}


/* address=140d43750 name=FUN_140d43750 */

void FUN_140d43750(longlong param_1,uint *param_2,uint *param_3)

{
  *param_2 = 0;
  *param_3 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x40) == 0) {
    *param_2 = *param_2 | 4;
    *param_3 = *param_3 | 4;
  }
  return;
}


/* address=140d437b0 name=FUN_140d437b0 */

bool FUN_140d437b0(undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = FUN_140d3cef0(param_2,param_3);
  if (cVar1 == '\0') {
    bVar3 = true;
  }
  else {
    iVar2 = FUN_140d38120(param_1,param_2);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}


/* address=140d43810 name=FUN_140d43810 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_140d43810(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint local_a8;
  uint local_98;
  uint local_94;
  undefined8 *local_90;
  undefined8 local_88;
  undefined local_80 [16];
  undefined local_70 [48];
  undefined local_40 [24];
  undefined local_28 [24];
  
  lVar1 = *param_1;
  FUN_140d43750(param_1,&local_94,&local_98);
  uVar7 = FUN_140d37de0(param_2,local_70);
  if ((int)uVar7 == 0) {
    return uVar7 & 0xffffffffffffff00;
  }
  lVar8 = FUN_140c55c70(lVar1 + 0x68);
  if ((*(byte *)(lVar8 + 0x238) >> 5 & 1) != 0) {
    uVar4 = FUN_140d425b0(param_1,0);
    uVar7 = FUN_140d38120(local_70,uVar4);
    if ((int)uVar7 == 0) {
      return uVar7 & 0xffffffffffffff00;
    }
  }
  if (0x303 < *(ushort *)((longlong)param_1 + 0x1e)) {
    lVar8 = FUN_140c55c70(lVar1 + 8);
    if ((*(byte *)(lVar8 + 0xee) >> 3 & 1) == 0) {
      local_a8 = FUN_140ca9ba0();
    }
    else {
      lVar8 = FUN_140c55c70(lVar1 + 8);
      local_a8 = (uint)(*(byte *)(lVar8 + 0xee) >> 4 & 1);
    }
    if (local_a8 == 0) {
      lVar8 = FUN_140c55c70(lVar1 + 8);
      cVar3 = FUN_140d437b0(local_70,0x1303,*(undefined4 *)(lVar8 + 0xe8));
      if (cVar3 == '\0') {
        return 0;
      }
    }
    lVar8 = FUN_140c55c70(lVar1 + 8);
    cVar3 = FUN_140d437b0(local_70,0x1301,*(undefined4 *)(lVar8 + 0xe8));
    if (cVar3 != '\0') {
      lVar8 = FUN_140c55c70(lVar1 + 8);
      cVar3 = FUN_140d437b0(local_70,0x1302,*(undefined4 *)(lVar8 + 0xe8));
      if (cVar3 != '\0') {
        if (local_a8 != 0) {
          lVar8 = FUN_140c55c70(lVar1 + 8);
          cVar3 = FUN_140d437b0(local_70,0x1303,*(undefined4 *)(lVar8 + 0xe8));
          if (cVar3 == '\0') {
            return 0;
          }
        }
        goto LAB_140d43a0f;
      }
    }
    return 0;
  }
LAB_140d43a0f:
  if ((*(ushort *)((longlong)param_1 + 0x1c) < 0x304) && (param_3 != 1)) {
    bVar2 = false;
    local_88 = FUN_140c4e350(lVar1);
    local_90 = &local_88;
    FUN_140c5d040(local_80,local_88);
    FUN_140c5d170(local_40,*local_90);
    while( true ) {
      puVar9 = local_40;
      puVar10 = local_28;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      cVar3 = FUN_140c5d0c0(local_80,local_28);
      if (cVar3 == '\0') break;
      lVar8 = FUN_140c5d120(local_80);
      if (((((*(uint *)(lVar8 + 0x14) & local_98) == 0) &&
           ((*(uint *)(lVar8 + 0x18) & local_94) == 0)) &&
          (uVar5 = FUN_140c6e700(lVar8), uVar5 <= *(ushort *)((longlong)param_1 + 0x1e))) &&
         (uVar5 = FUN_140c6e740(lVar8), *(ushort *)((longlong)param_1 + 0x1c) <= uVar5)) {
        bVar2 = true;
        uVar4 = FUN_140c6e370(lVar8);
        uVar7 = FUN_140d38120(local_70,uVar4);
        if ((int)uVar7 == 0) {
          return uVar7 & 0xffffffffffffff00;
        }
      }
      FUN_140c5d150(local_80);
    }
    if ((!bVar2) && (*(ushort *)((longlong)param_1 + 0x1e) < 0x304)) {
      uVar7 = FUN_140c6c4e0(0x10,0,0xaf,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                            ,0x11e);
      return uVar7 & 0xffffffffffffff00;
    }
  }
  if (((*(uint *)(lVar1 + 0x84) & 0x400) != 0) &&
     (uVar7 = FUN_140d38120(local_70,0x5600), (int)uVar7 == 0)) {
    return uVar7 & 0xffffffffffffff00;
  }
  iVar6 = FUN_140d37900(param_2);
  return (ulonglong)(iVar6 != 0);
}


/* address=140d43c00 name=FUN_140d43c00 */

undefined8 FUN_140d43c00(undefined8 param_1,undefined2 *param_2,undefined *param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *local_78;
  undefined local_70 [8];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [3];
  char local_35;
  undefined local_30 [32];
  
  if (*(short *)(param_4 + 0x10) == 0x303) {
    FUN_140d48c60(local_38,0x2b,1);
    puVar4 = (undefined *)(param_4 + 0x40);
    puVar6 = local_58;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    local_78 = local_38;
    puVar4 = (undefined *)FUN_140c55f50(local_48,&local_78,local_70);
    puVar6 = local_68;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar1 = FUN_140d41590(local_58,param_3,local_68,1);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else if (local_35 == '\0') {
      *param_2 = *(undefined2 *)(param_4 + 0x10);
      uVar3 = 1;
    }
    else {
      iVar2 = FUN_140d35710(local_30,param_2);
      if ((iVar2 != 0) && (lVar5 = FUN_140d354c0(local_30), lVar5 == 0)) {
        return 1;
      }
      *param_3 = 0x32;
      uVar3 = 0;
    }
  }
  else {
    *param_2 = *(undefined2 *)(param_4 + 0x10);
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140d43d40 name=FUN_140d43d40 */

undefined8 FUN_140d43d40(longlong *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  lVar6 = *param_1;
  if ((*(byte *)(lVar6 + 0xa4) & 1) != 0) {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x197);
  }
  if ((*(byte *)(lVar6 + 0xa4) >> 2 & 1) == 0) {
    return 1;
  }
  if (*(ushort *)((longlong)param_1 + 0x1e) < 0x304) {
    return 3;
  }
  cVar1 = operator==<>(lVar6 + 0x58,0);
  if (cVar1 != '\0') {
    return 5;
  }
  uVar3 = FUN_140c55c70(lVar6 + 0x58);
  uVar2 = FUN_140c60850(uVar3);
  if ((uVar2 < 0x304) || (lVar4 = FUN_140c55c70(lVar6 + 0x58), *(int *)(lVar4 + 0x174) == 0)) {
    return 7;
  }
  lVar4 = FUN_140c55c70(lVar6 + 0x58);
  cVar1 = FUN_140c55f90(lVar4 + 0x178);
  if (cVar1 == '\0') {
    lVar4 = FUN_140c55c70(lVar6 + 0x58);
    puVar5 = (undefined *)FUN_140c57dd0(local_48,lVar4 + 0x178);
    puVar7 = local_88;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = FUN_140d26680(param_1,local_88);
    if (cVar1 == '\0') {
      return 9;
    }
    lVar4 = FUN_140c55c70(lVar6 + 0x58);
    if ((*(byte *)(lVar4 + 0x1a8) >> 6 & 1) != 0) {
      FUN_140c55f20(local_98);
      lVar4 = FUN_140c55c70(lVar6 + 0x58);
      puVar5 = (undefined *)FUN_140c57dd0(local_38,lVar4 + 0x178);
      puVar7 = local_78;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_140d26b10(param_1,local_98,local_78);
      if (cVar1 != '\0') {
        lVar6 = FUN_140c55c70(lVar6 + 0x58);
        puVar5 = (undefined *)FUN_140c57dd0(local_28,lVar6 + 0x188);
        puVar7 = local_68;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = local_98;
        puVar7 = local_58;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar1 = FUN_140d22540(local_58,local_68);
        if (cVar1 == '\0') {
          return 2;
        }
      }
      return 0xe;
    }
  }
  return 2;
}


/* address=140d43ff0 name=FUN_140d43ff0 */

void FUN_140d43ff0(longlong *param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined auStack_e8 [32];
  longlong local_c8;
  char local_c0;
  char local_bf;
  char local_be;
  char local_bd;
  undefined4 local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  undefined *local_a8;
  ulonglong local_a0;
  undefined8 local_98 [2];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_e8;
  local_c8 = *param_1;
  FUN_140c53630(local_c8,0x10,1);
  *(byte *)(*(longlong *)(local_c8 + 0x30) + 0xdc) =
       *(byte *)(*(longlong *)(local_c8 + 0x30) + 0xdc) & 0xbf;
  cVar1 = FUN_140c6d880(param_1,(longlong)param_1 + 0x1c,(longlong)param_1 + 0x1e);
  if (cVar1 == '\0') goto LAB_140d445d6;
  local_a8 = local_68;
  puVar4 = (undefined *)FUN_140c57ab0(local_a8,local_48);
  puVar7 = local_88;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  cVar1 = FUN_140d20580(param_1,local_88,local_98);
  if (cVar1 == '\0') goto LAB_140d445d6;
  iVar3 = FUN_140c4c520(*param_1);
  if (iVar3 == 0) {
    if (*(ushort *)((longlong)param_1 + 0x1e) < 0x303) {
      local_b8 = (uint)*(ushort *)((longlong)param_1 + 0x1e);
    }
    else {
      local_b8 = 0x303;
    }
    *(undefined2 *)((longlong)param_1 + 0x624) = (undefined2)local_b8;
  }
  else {
    if (*(ushort *)((longlong)param_1 + 0x1e) < 0x303) {
      local_bc = 0xfeff;
    }
    else {
      local_bc = 0xfefd;
    }
    *(undefined2 *)((longlong)param_1 + 0x624) = (undefined2)local_bc;
  }
  cVar1 = FUN_140c57ae0(local_c8 + 0x58,0);
  if (cVar1 != '\0') {
    lVar6 = FUN_140c55c70(local_c8 + 0x58);
    if ((*(byte *)(lVar6 + 0x1a8) >> 4 & 1) == 0) {
      lVar6 = FUN_140c55c70(local_c8 + 0x58);
      cVar1 = FUN_140c6da90(param_1,*(undefined2 *)(lVar6 + 4));
      if (cVar1 != '\0') {
        cVar1 = FUN_140c56050(param_1 + 0xbf);
        if (cVar1 != '\0') {
          uVar5 = FUN_140c55c70(local_c8 + 0x58);
          uVar2 = FUN_140c60850(uVar5);
          if (uVar2 < 0x304) goto LAB_140d442d5;
        }
        uVar5 = FUN_140c55c70(local_c8 + 0x58);
        iVar3 = FUN_140c5f080(uVar5);
        if (iVar3 != 0) {
          uVar5 = FUN_140c55c70(local_c8 + 0x58);
          cVar1 = FUN_140c60620(local_c8,uVar5);
          if (cVar1 != '\0') {
            local_b4 = (uint)(*(longlong *)(local_c8 + 0x98) != 0);
            lVar6 = FUN_140c55c70(local_c8 + 0x58);
            if ((local_b4 == (*(byte *)(lVar6 + 0x1a8) >> 5 & 1)) &&
               ((*(byte *)(*(longlong *)(local_c8 + 0x30) + 0xdc) >> 5 & 1) == 0))
            goto LAB_140d442e2;
          }
        }
      }
    }
LAB_140d442d5:
    FUN_140c608f0(local_c8,0);
  }
LAB_140d442e2:
  iVar3 = FUN_140ca8a50(*(longlong *)(local_c8 + 0x30) + 0x30,0x20);
  if ((iVar3 == 0) ||
     ((cVar1 = FUN_140c56050(param_1 + 0xbf), cVar1 != '\0' &&
      (iVar3 = FUN_140ca8a50(param_1 + 0x3d,0x20), iVar3 == 0)))) goto LAB_140d445d6;
  if (*(longlong *)(local_c8 + 0x98) == 0) {
    cVar1 = FUN_140c57ae0(local_c8 + 0x58,0);
    if ((cVar1 == '\0') || (lVar6 = FUN_140c55c70(local_c8 + 0x58), *(char *)(lVar6 + 0x3b) == '\0')
       ) {
LAB_140d443bd:
      local_c0 = '\0';
    }
    else {
      lVar6 = FUN_140c55c70(local_c8 + 0x58);
      cVar1 = FUN_140c55f90(lVar6 + 0xe8);
      if (cVar1 == '\0') goto LAB_140d443bd;
      local_c0 = '\x01';
    }
    local_be = local_c0;
    cVar1 = FUN_140c57ae0(local_c8 + 0x58,0);
    if (cVar1 == '\0') {
LAB_140d44412:
      local_bf = '\0';
    }
    else {
      lVar6 = FUN_140c55c70(local_c8 + 0x58);
      cVar1 = FUN_140c55f90(lVar6 + 0xe8);
      if (cVar1 != '\0') goto LAB_140d44412;
      local_bf = '\x01';
    }
    local_bd = local_bf;
    if (local_be == '\0') {
      if ((local_bf != '\0') || (0x303 < *(ushort *)((longlong)param_1 + 0x1e))) {
        *(undefined *)((longlong)param_1 + 0x64b) = 0x20;
        iVar3 = FUN_140ca8a50((longlong)param_1 + 0x62b,*(undefined *)((longlong)param_1 + 0x64b));
        if (iVar3 == 0) goto LAB_140d445d6;
      }
    }
    else {
      lVar6 = FUN_140c55c70(local_c8 + 0x58);
      *(undefined *)((longlong)param_1 + 0x64b) = *(undefined *)(lVar6 + 0x3b);
      local_a0 = (ulonglong)*(byte *)((longlong)param_1 + 0x64b);
      lVar6 = FUN_140c55c70(local_c8 + 0x58);
      FUN_140d42bd0((longlong)param_1 + 0x62b,lVar6 + 0x3c,local_a0);
    }
  }
  local_b0 = FUN_140d43d40(param_1);
  if (local_b0 == 2) {
    *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) | 0x10;
  }
  else {
    *(int *)(*(longlong *)(local_c8 + 0x30) + 0x100) = local_b0;
  }
  cVar1 = FUN_140d25690(param_1,0);
  if ((cVar1 != '\0') && (cVar1 = FUN_140d25500(param_1), cVar1 != '\0')) {
    puVar4 = (undefined *)FUN_140c55fe0(local_58,local_48,local_98[0]);
    puVar7 = local_78;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = FUN_140d20ac0(param_1,local_78);
    if ((cVar1 != '\0') && (cVar1 = FUN_140d43290(param_1), cVar1 != '\0')) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    }
  }
LAB_140d445d6:
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_e8);
  return;
}


/* address=140d44600 name=FUN_140d44600 */

undefined8 FUN_140d44600(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined local_18 [24];
  
  plVar1 = *param_1;
  iVar3 = FUN_140c4c520(plVar1);
  if (iVar3 == 0) {
    if ((*(byte *)((longlong)param_1 + 0x621) >> 4 & 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 4;
      uVar4 = 1;
    }
    else {
      lVar5 = FUN_140c55c70(plVar1 + 0xb);
      uVar4 = FUN_140c55c70(plVar1[6] + 0x110);
      FUN_140d3b790(uVar4,*(undefined2 *)(lVar5 + 4));
      cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1);
      if (cVar2 == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_140c55c70(plVar1 + 0xb);
        cVar2 = FUN_140dc03e0(param_1,uVar4);
        if ((cVar2 != '\0') && (cVar2 = FUN_140dc0ea0(param_1), cVar2 != '\0')) {
          uVar4 = FUN_140c56390(local_18,plVar1 + 0xb);
          FUN_140c580d0(param_1 + 0xbd,uVar4);
          FUN_140c56300(local_18);
          *(undefined4 *)((longlong)param_1 + 0x14) = 2;
          return 1;
        }
        uVar4 = 0;
      }
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x14) = 3;
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140d44750 name=FUN_140d44750 */

undefined8 FUN_140d44750(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  lVar3 = FUN_140c55c70(*param_1 + 0x68);
  if (*(char *)(lVar3 + 0x128) != '\0') {
    iVar2 = FUN_140d41e10(param_1,0);
    if (iVar2 == 1) {
      return 0;
    }
    if (iVar2 == 2) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 2;
      return 0x10;
    }
  }
  uVar4 = FUN_140d48bf0(param_1,local_28);
  puVar5 = (undefined *)FUN_140c57dd0(local_38,uVar4);
  puVar6 = local_48;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar4 = FUN_140c55c70(param_1 + 0xbd);
  cVar1 = FUN_140dc0720(*param_1,1,1,uVar4,local_48);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) | 8;
    *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) | 0x40;
    *(undefined4 *)((longlong)param_1 + 0x14) = 4;
    uVar4 = 0xc;
  }
  return uVar4;
}


/* address=140d448b0 name=FUN_140d448b0 */

undefined8 FUN_140d448b0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined local_90 [8];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58;
  char local_57;
  undefined local_50 [32];
  undefined local_30 [32];
  
  plVar1 = *param_1;
  iVar3 = FUN_140c4c520(plVar1);
  if (iVar3 == 0) {
    FID_conflict__assert((wchar_t *)"S",(wchar_t *)"D",0x26a);
  }
  if (0x303 < *(ushort *)((longlong)param_1 + 0x1e)) {
    FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x26e);
  }
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_58);
  if (cVar2 == '\0') {
    uVar4 = 3;
  }
  else if (local_57 == '\x03') {
    puVar5 = local_50;
    puVar7 = local_88;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar3 = FUN_140d35710(local_88,local_90);
    if (((iVar3 != 0) && (iVar3 = FUN_140d35a40(local_88,local_78), iVar3 != 0)) &&
       (lVar6 = FUN_140d354c0(local_88), lVar6 == 0)) {
      puVar5 = (undefined *)FUN_140c630f0(local_78,local_30);
      puVar7 = local_68;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar2 = FUN_140c566e0(param_1 + 0x43,local_68);
      if (cVar2 == '\0') {
        FUN_140d55f00(plVar1,2,0x50);
        return 0;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1);
      cVar2 = FUN_140dbf9d0(param_1 + 0x33);
      if (cVar2 == '\0') {
        return 0;
      }
      cVar2 = FUN_140d43290(param_1);
      if (cVar2 == '\0') {
        return 0;
      }
      *(undefined4 *)((longlong)param_1 + 0x14) = 4;
      return 4;
    }
    FUN_140c6c4e0(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,0x27f);
    FUN_140d55f00(plVar1,2,0x32);
    uVar4 = 0;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x14) = 4;
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140d44ad0 name=FUN_140d44ad0 */

undefined8 FUN_140d44ad0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined *puVar10;
  undefined local_1a0 [4];
  short local_19c [2];
  longlong *local_198;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined local_148 [16];
  undefined local_138 [24];
  undefined local_120 [16];
  undefined local_110 [16];
  undefined2 local_100;
  char local_fe;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [40];
  undefined local_60 [16];
  undefined local_50 [16];
  undefined local_40 [16];
  undefined local_30 [32];
  
  plVar1 = *param_1;
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_88);
  if (cVar2 == '\0') {
    return 2;
  }
  FUN_140d48c30(local_138);
  local_1a0[0] = 0x32;
  cVar2 = FUN_140d43520(local_138,local_1a0,local_88);
  if ((cVar2 == '\0') ||
     (cVar2 = FUN_140d43c00(param_1,local_19c,local_1a0,local_138), cVar2 == '\0')) {
    FUN_140d55f00(plVar1,2,local_1a0[0]);
    return 0;
  }
  cVar2 = FUN_140c6da90(param_1,local_19c[0]);
  if (cVar2 == '\0') {
    FUN_140c6c4e0(0x10,0,0xf0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,0x2c9);
    FUN_140d55f00(plVar1,2,0x46);
    return 0;
  }
  if ((*(byte *)(plVar1[6] + 0xdc) >> 1 & 1) != (*(byte *)(plVar1[6] + 0xdc) >> 5 & 1)) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x2ce);
  }
  if ((*(byte *)(plVar1[6] + 0xdc) >> 1 & 1) == 0) {
    *(short *)(plVar1 + 2) = local_19c[0];
    *(byte *)(plVar1[6] + 0xdc) = *(byte *)(plVar1[6] + 0xdc) | 2;
    uVar6 = FUN_140c55c70(plVar1[6] + 0x110);
    FUN_140d3b790(uVar6,*(undefined2 *)(plVar1 + 2));
  }
  else if (local_19c[0] != *(short *)(plVar1 + 2)) {
    FUN_140c6c4e0(0x10,0,0xf6,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,0x2d6);
    FUN_140d55f00(plVar1,2,0x46);
    return 0;
  }
  uVar3 = FUN_140c6de20(plVar1);
  if (0x303 < uVar3) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 5;
    return 1;
  }
  FUN_140d313a0(param_1 + 0x31,0);
  FUN_140d313a0(param_1 + 0x32,0);
  FUN_140d43700(param_1);
  if ((*(byte *)((longlong)param_1 + 0x621) >> 4 & 1) != 0) {
    *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) & 0xbf;
    FUN_140c6c4e0(0x10,0,0x116,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,0x2ef);
    FUN_140d55f00(plVar1,2,0x46);
    return 0;
  }
  cVar2 = FUN_140c56050(param_1 + 0xbf);
  if (cVar2 != '\0') {
    *(undefined4 *)(plVar1[6] + 0xd8) = 2;
  }
  uVar6 = FUN_140d354a0(local_120);
  FUN_140d42bd0(plVar1[6] + 0x10,uVar6,0x20);
  if (((*(byte *)(plVar1[6] + 0xdc) >> 5 & 1) == 0) &&
     (cVar2 = FUN_140c6da90(param_1,0x304), cVar2 != '\0')) {
    uVar6 = FUN_140c55fe0(local_60,plVar1[6] + 0x10,0x20);
    FUN_140c56800(uVar6,local_148,0x18,0xffffffffffffffff);
    local_178 = local_50;
    puVar7 = (undefined *)FUN_140d48cc0(local_178,"DOWNGRD");
    puVar10 = local_e8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar7 = local_148;
    puVar10 = local_d8;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    cVar2 = FUN_140c63130(local_d8,local_e8);
    if (cVar2 == '\0') {
      local_170 = local_40;
      puVar7 = (undefined *)FUN_140d48cc0(local_170,&DAT_1410719e8);
      puVar10 = local_c8;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar7 = local_148;
      puVar10 = local_b8;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      cVar2 = FUN_140c63130(local_b8,local_c8);
      if (cVar2 == '\0') {
        local_168 = local_30;
        puVar7 = (undefined *)FUN_140d48cc0(local_168,&DAT_1410719f0);
        puVar10 = local_a8;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar7 = local_148;
        puVar10 = local_98;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        cVar2 = FUN_140c63130(local_98,local_a8);
        if (cVar2 == '\0') goto LAB_140d4504a;
      }
    }
    FUN_140c6c4e0(0x10,0,0x129,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,0x30b);
    FUN_140d55f00(plVar1,2,0x2f);
    return 0;
  }
LAB_140d4504a:
  local_198 = (longlong *)FUN_140c6e300(local_100);
  FUN_140d43750(param_1,&local_18c,&local_190);
  if (((local_198 != (longlong *)0x0) && ((*(uint *)((longlong)local_198 + 0x14) & local_190) == 0))
     && ((*(uint *)(local_198 + 3) & local_18c) == 0)) {
    uVar3 = FUN_140c6e700(local_198);
    local_188 = (uint)uVar3;
    uVar3 = FUN_140c6de20(plVar1);
    if ((int)local_188 <= (int)(uint)uVar3) {
      uVar3 = FUN_140c6e740(local_198);
      local_184 = (uint)uVar3;
      uVar3 = FUN_140c6de20(plVar1);
      if ((int)(uint)uVar3 <= (int)local_184) {
        uVar6 = FUN_140c4e350(plVar1);
        iVar5 = FUN_140c5ea70(uVar6,0,local_198);
        if (iVar5 != 0) {
          param_1[0xc0] = local_198;
          if ((*(char *)((longlong)param_1 + 0x64b) == '\0') ||
             (iVar5 = FUN_140d35650(local_110,(longlong)param_1 + 0x62b,
                                    *(undefined *)((longlong)param_1 + 0x64b)), iVar5 == 0)) {
            FUN_140c608f0(plVar1,0);
            cVar2 = FUN_140c5fb60(param_1);
            if (cVar2 == '\0') {
              FUN_140d55f00(plVar1,2,0x50);
              return 0;
            }
            uVar8 = FUN_140d354c0(local_110);
            if (0x20 < uVar8) {
              FID_conflict__assert((wchar_t *)"C",(wchar_t *)"D",0x34f);
            }
            local_160 = FUN_140d354c0(local_110);
            lVar9 = FUN_140c55c70(param_1 + 0xbc);
            *(char *)(lVar9 + 0x3b) = (char)local_160;
            local_158 = FUN_140d354c0(local_110);
            local_150 = FUN_140d354a0(local_110);
            lVar9 = FUN_140c55c70(param_1 + 0xbc);
            FUN_140d42bd0(lVar9 + 0x3c,local_150,local_158);
            lVar9 = FUN_140c55c70(param_1 + 0xbc);
            *(longlong **)(lVar9 + 200) = param_1[0xc0];
          }
          else {
            cVar2 = operator==<>(plVar1 + 0xb,0);
            if ((cVar2 != '\0') || (*(int *)(plVar1[6] + 0xd8) == 2)) {
              FUN_140c6c4e0(0x10,0,0x11e,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                            ,0x32d);
              FUN_140d55f00(plVar1,2,0x2f);
              return 0;
            }
            lVar9 = FUN_140c55c70(plVar1 + 0xb);
            if (*(short *)(lVar9 + 4) != *(short *)(plVar1 + 2)) {
              FUN_140c6c4e0(0x10,0,0xbc,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                            ,0x332);
              FUN_140d55f00(plVar1,2,0x2f);
              return 0;
            }
            lVar9 = FUN_140c55c70(plVar1 + 0xb);
            if (*(longlong **)(lVar9 + 200) != param_1[0xc0]) {
              FUN_140c6c4e0(0x10,0,0xbb,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                            ,0x337);
              FUN_140d55f00(plVar1,2,0x2f);
              return 0;
            }
            uVar6 = FUN_140c55c70(plVar1 + 0xb);
            cVar2 = FUN_140c60560(param_1,uVar6);
            if (cVar2 == '\0') {
              FUN_140c6c4e0(0x10,0,0x65,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                            ,0x33e);
              FUN_140d55f00(plVar1,2,0x2f);
              return 0;
            }
            if ((*(byte *)(plVar1[6] + 0xdc) >> 5 & 1) != 0) {
              FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x343);
            }
            *(byte *)(plVar1[6] + 0xdc) = *(byte *)(plVar1[6] + 0xdc) | 0x40;
          }
          uVar4 = FUN_140c6de20(plVar1);
          cVar2 = FUN_140dbfa30(param_1 + 0x33,uVar4,param_1[0xc0]);
          if ((cVar2 == '\0') || (cVar2 = FUN_140d426e0(param_1,local_88), cVar2 == '\0')) {
            FUN_140d55f00(plVar1,2,0x50);
            return 0;
          }
          cVar2 = FUN_140c57ae0(plVar1 + 0xb,0);
          if ((cVar2 != '\0') || (cVar2 = FUN_140c700b0(param_1[0xc0]), cVar2 == '\0')) {
            FUN_140dbfdc0(param_1 + 0x33);
          }
          if (local_fe == '\0') {
            cVar2 = FUN_140d28740(param_1,local_f8);
            if (cVar2 == '\0') {
              FUN_140c6c4e0(0x10,0,0xbe,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                            ,0x373);
              return 0;
            }
            cVar2 = FUN_140c57ae0(plVar1 + 0xb,0);
            if (cVar2 != '\0') {
              local_180 = (uint)(*(byte *)((longlong)param_1 + 0x622) >> 1 & 1);
              lVar9 = FUN_140c55c70(plVar1 + 0xb);
              if (local_180 != (*(byte *)(lVar9 + 0x1a8) & 1)) {
                lVar9 = FUN_140c55c70(plVar1 + 0xb);
                if ((*(byte *)(lVar9 + 0x1a8) & 1) == 0) {
                  FUN_140c6c4e0(0x10,0,0xcd,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                                ,0x37c);
                }
                else {
                  FUN_140c6c4e0(0x10,0,0xcc,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                                ,0x37a);
                }
                FUN_140d55f00(plVar1,2,0x28);
                return 0;
              }
            }
            (**(code **)(*plVar1 + 0x20))(plVar1);
            cVar2 = FUN_140c57ae0(plVar1 + 0xb,0);
            if (cVar2 != '\0') {
              lVar9 = FUN_140c55c70(plVar1 + 0xd);
              if ((*(char *)(lVar9 + 0x128) == '\0') ||
                 (cVar2 = FUN_140c700b0(param_1[0xc0]), cVar2 == '\0')) {
                *(undefined4 *)((longlong)param_1 + 0x14) = 0x12;
              }
              else {
                *(undefined4 *)((longlong)param_1 + 0x14) = 9;
              }
              return 1;
            }
            *(undefined4 *)((longlong)param_1 + 0x14) = 6;
            return 1;
          }
          FUN_140c6c4e0(0x10,0,0xee,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                        ,0x36d);
          FUN_140d55f00(plVar1,2,0x2f);
          return 0;
        }
      }
    }
  }
  FUN_140c6c4e0(0x10,0,0xf2,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                ,0x31b);
  FUN_140d55f00(plVar1,2,0x2f);
  return 0;
}


/* address=140d457a0 name=FUN_140d457a0 */

int FUN_140d457a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140d520b0(param_1);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x14) = 0x15;
    iVar1 = 1;
  }
  return iVar1;
}


/* address=140d457e0 name=FUN_140d457e0 */

undefined8 FUN_140d457e0(longlong **param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined local_88 [8];
  longlong *local_80;
  longlong local_78;
  longlong **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined local_48 [8];
  undefined local_40 [48];
  
  local_80 = *param_1;
  cVar1 = FUN_140c700b0(param_1[0xc0]);
  if (cVar1 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x14) = 7;
    uVar2 = 1;
  }
  else {
    cVar1 = (**(code **)(*local_80 + 0x18))(local_80,local_48);
    if (cVar1 == '\0') {
      uVar2 = 3;
    }
    else {
      cVar1 = FUN_140d40e90(local_80,local_48,0xb);
      if ((cVar1 != '\0') && (cVar1 = FUN_140d426e0(param_1,local_48), cVar1 != '\0')) {
        puVar4 = local_40;
        puVar5 = local_58;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_88[0] = 0x32;
        local_78 = FUN_140c55c70(local_80 + 0xd);
        local_70 = param_1 + 0xbb;
        lVar3 = FUN_140c55c70(param_1 + 0xbc);
        puVar4 = local_58;
        cVar1 = FUN_140c71f90(local_88,lVar3 + 0x88,local_70,0,puVar4,
                              *(undefined8 *)(local_78 + 0x200));
        uVar6 = (undefined4)((ulonglong)puVar4 >> 0x20);
        if (cVar1 == '\0') {
          FUN_140d55f00(local_80,2,local_88[0]);
          return 0;
        }
        lVar3 = FUN_140c55c70(param_1 + 0xbc);
        uVar2 = FUN_140c55c70(lVar3 + 0x88);
        lVar3 = FUN_140c560a0(uVar2);
        if ((lVar3 != 0) && (lVar3 = FUN_140d354c0(local_58), lVar3 == 0)) {
          local_68 = FUN_140c55c70(param_1 + 0xbc);
          lVar3 = FUN_140c55c70(local_80 + 0xd);
          cVar1 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x30))(local_68);
          if (cVar1 != '\0') {
            lVar3 = FUN_140c55c70(param_1 + 0xbc);
            uVar2 = FUN_140c55c70(lVar3 + 0x88);
            local_60 = FUN_140c560c0(uVar2,0);
            uVar2 = FUN_140c55c70(param_1 + 0xbb);
            cVar1 = FUN_140c72da0(param_1,uVar2,local_60);
            if (cVar1 == '\0') {
              FUN_140d55f00(local_80,2,0x2f);
              return 0;
            }
            (**(code **)(*local_80 + 0x20))(local_80);
            *(undefined4 *)((longlong)param_1 + 0x14) = 7;
            return 1;
          }
        }
        FUN_140c6c4e0(0x10,0,0x89,"D:\\a\\1\\s\\target\\release\\build\\bor",CONCAT44(uVar6,0x3b9));
        FUN_140d55f00(local_80,2,0x32);
        return 0;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* address=140d45ac0 name=FUN_140d45ac0 */

undefined8 FUN_140d45ac0(longlong **param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  char local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  undefined local_60 [16];
  undefined local_50 [16];
  undefined local_40;
  char local_3f;
  undefined local_38 [40];
  
  local_70 = *param_1;
  if ((*(byte *)(param_1 + 0xc4) >> 6 & 1) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 8;
    uVar3 = 1;
  }
  else {
    cVar1 = (**(code **)(*local_70 + 0x18))(local_70,&local_40);
    if (cVar1 == '\0') {
      uVar3 = 3;
    }
    else if (local_3f == '\x16') {
      cVar1 = FUN_140d426e0(param_1,&local_40);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      else {
        puVar5 = local_38;
        puVar6 = local_60;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        iVar2 = FUN_140d356c0(local_60,local_78);
        if ((((iVar2 != 0) && (local_78[0] == '\x01')) &&
            (iVar2 = FUN_140d35aa0(local_60,local_50), iVar2 != 0)) &&
           ((lVar4 = FUN_140d354c0(local_50), lVar4 != 0 &&
            (lVar4 = FUN_140d354c0(local_60), lVar4 == 0)))) {
          lVar4 = FUN_140c55c70(local_70 + 0xd);
          local_68 = FUN_140c75ed0(local_50,*(undefined8 *)(lVar4 + 0x200));
          lVar4 = FUN_140c55c70(param_1 + 0xbc);
          FUN_140c63230(lVar4 + 0x100,local_68);
          lVar4 = FUN_140c55c70(param_1 + 0xbc);
          cVar1 = operator==<>(lVar4 + 0x100,0);
          if (cVar1 != '\0') {
            FUN_140d55f00(local_70,2,0x50);
            return 0;
          }
          (**(code **)(*local_70 + 0x20))(local_70);
          *(undefined4 *)((longlong)param_1 + 0x14) = 8;
          return 1;
        }
        FUN_140c6c4e0(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                      ,0x3ea);
        FUN_140d55f00(local_70,2,0x32);
        uVar3 = 0;
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x14) = 8;
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=140d45cf0 name=FUN_140d45cf0 */

undefined8 FUN_140d45cf0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140c700b0(*(undefined8 *)(param_1 + 0x600));
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 10;
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_140d41840(param_1);
    if (iVar2 == 1) {
      uVar3 = 0;
    }
    else if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x14) = 8;
      uVar3 = 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 10;
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=140d45d80 name=FUN_140d45d80 */

undefined8 FUN_140d45d80(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140c55c70(*param_1 + 0x68);
  if (*(char *)(lVar2 + 0x128) == '\0') {
    FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x411);
  }
  iVar1 = FUN_140d41e10(param_1,1);
  if (iVar1 == 1) {
    uVar3 = 0;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 9;
    uVar3 = 0x10;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x12;
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140d45e20 name=FUN_140d45e20 */

undefined4 FUN_140d45e20(longlong **param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined8 in_stack_fffffffffffffe48;
  undefined4 uVar9;
  undefined local_1a8 [4];
  undefined2 local_1a4 [2];
  longlong *local_1a0;
  char local_198 [4];
  undefined2 local_194 [2];
  uint local_190;
  uint local_18c;
  undefined local_188 [16];
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined local_168 [16];
  undefined local_158 [16];
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined local_100 [16];
  undefined local_f0 [48];
  undefined local_c0;
  char local_bf;
  undefined local_b8 [32];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  local_1a0 = *param_1;
  cVar1 = (**(code **)(*local_1a0 + 0x18))(local_1a0,&local_c0);
  if (cVar1 == '\0') {
    return 3;
  }
  if (local_bf != '\f') {
    cVar1 = FUN_140c700f0(param_1[0xc0]);
    if (cVar1 != '\0') {
      FUN_140c6c4e0(0x10,0,0xdf,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                    ,CONCAT44(uVar9,0x42b));
      FUN_140d55f00(local_1a0,2,10);
      return 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xb;
    return 1;
  }
  cVar1 = FUN_140d426e0(param_1,&local_c0);
  if (cVar1 == '\0') {
    return 0;
  }
  local_190 = *(uint *)((longlong)param_1[0xc0] + 0x14);
  local_18c = *(uint *)(param_1[0xc0] + 3);
  puVar5 = local_b8;
  puVar8 = local_188;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((local_18c & 4) != 0) {
    iVar3 = FUN_140d35a70(local_188,local_158);
    if (iVar3 == 0) {
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                    ,CONCAT44(uVar9,0x441));
      FUN_140d55f00(local_1a0,2,0x32);
      return 0;
    }
    uVar4 = FUN_140d354c0(local_158);
    if ((0x80 < uVar4) || (iVar3 = FUN_140d35600(local_158), iVar3 != 0)) {
      FUN_140c6c4e0(0x10,0,0x88,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                    ,CONCAT44(uVar9,0x44f));
      FUN_140d55f00(local_1a0,2,0x28);
      return 0;
    }
    local_170 = 0;
    lVar7 = FUN_140d354c0(local_158);
    if ((lVar7 != 0) && (iVar3 = FUN_140d35580(local_158,&local_170), iVar3 == 0)) {
      FUN_140d55f00(local_1a0,2,0x50);
      return 0;
    }
    FUN_140c56a70(param_1 + 0xb5,local_170);
  }
  if ((local_190 & 2) == 0) {
    if ((local_190 & 4) == 0) {
      FUN_140c6c4e0(0x10,0,0xdf,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                    ,CONCAT44(uVar9,0x47d));
      FUN_140d55f00(local_1a0,2,10);
      return 0;
    }
  }
  else {
    iVar3 = FUN_140d356c0(local_188,local_198);
    if ((((iVar3 == 0) || (local_198[0] != '\x03')) ||
        (iVar3 = FUN_140d35710(local_188,local_194), iVar3 == 0)) ||
       (iVar3 = FUN_140d35a40(local_188,local_98), iVar3 == 0)) {
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                    ,CONCAT44(uVar9,0x46b));
      FUN_140d55f00(local_1a0,2,0x32);
      return 0;
    }
    cVar1 = FUN_140d27960(param_1,local_194[0]);
    if (cVar1 == '\0') {
      FUN_140c6c4e0(0x10,0,0xf3,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                    ,CONCAT44(uVar9,0x472));
      FUN_140d55f00(local_1a0,2,0x2f);
      return 0;
    }
    lVar7 = FUN_140c55c70(param_1 + 0xbc);
    *(undefined2 *)(lVar7 + 6) = local_194[0];
    puVar5 = (undefined *)FUN_140c630f0(local_98,local_48);
    puVar8 = local_88;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar1 = FUN_140c566e0(param_1 + 0x55,local_88);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  local_118 = FUN_140d354c0(local_b8);
  local_110 = FUN_140d354c0(local_188);
  local_110 = local_118 - local_110;
  uVar6 = FUN_140d354a0(local_b8);
  FUN_140d35430(local_100,uVar6,local_110);
  cVar1 = FUN_140c700b0(param_1[0xc0]);
  if (cVar1 == '\0') {
    if (local_18c != 4) {
      FID_conflict__assert((wchar_t *)"a",(wchar_t *)"D",0x4c1);
    }
    lVar7 = FUN_140d354c0(local_188);
    if (lVar7 != 0) {
      FUN_140c6c4e0(0x10,0,0x97,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                    ,CONCAT44(uVar9,0x4c4));
      FUN_140d55f00(local_1a0,2,0x32);
      return 0;
    }
LAB_140d46789:
    (**(code **)(*local_1a0 + 0x20))(local_1a0);
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xb;
    local_178 = 1;
  }
  else {
    local_1a4[0] = 0;
    uVar2 = FUN_140c6de20(local_1a0);
    if (uVar2 < 0x303) {
      uVar6 = FUN_140c55c70(param_1 + 0xbb);
      cVar1 = FUN_140d273d0(local_1a4,uVar6);
      if (cVar1 == '\0') {
        FUN_140c6c4e0(0x10,0,0xc1,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                      ,CONCAT44(uVar9,0x49a));
        FUN_140d55f00(local_1a0,2,0x2b);
        return 0;
      }
    }
    else {
      iVar3 = FUN_140d35710(local_188,local_1a4);
      if (iVar3 == 0) {
        FUN_140c6c4e0(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                      ,CONCAT44(uVar9,0x48e));
        FUN_140d55f00(local_1a0,2,0x32);
        return 0;
      }
      local_1a8[0] = 0x32;
      cVar1 = FUN_140d27820(param_1,local_1a8,local_1a4[0]);
      if (cVar1 == '\0') {
        FUN_140d55f00(local_1a0,2,local_1a8[0]);
        return 0;
      }
      lVar7 = FUN_140c55c70(param_1 + 0xbc);
      *(undefined2 *)(lVar7 + 8) = local_1a4[0];
    }
    iVar3 = FUN_140d35a70(local_188,local_78);
    if ((iVar3 == 0) || (lVar7 = FUN_140d354c0(local_188), lVar7 != 0)) {
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                    ,CONCAT44(uVar9,0x4a3));
      FUN_140d55f00(local_1a0,2,0x32);
      return 0;
    }
    FUN_140c57a60(local_f0);
    FUN_140c56440(local_168);
    local_108 = FUN_140d354c0(local_100);
    local_108 = local_108 + 0x40;
    uVar6 = FUN_140c55cd0(local_f0);
    iVar3 = FUN_140d376f0(uVar6,local_108);
    if (iVar3 != 0) {
      local_148 = local_1a0[6] + 0x30;
      uVar6 = FUN_140c55cd0(local_f0);
      iVar3 = FUN_140d37f00(uVar6,local_148,0x20);
      if (iVar3 != 0) {
        local_140 = local_1a0[6] + 0x10;
        uVar6 = FUN_140c55cd0(local_f0);
        iVar3 = FUN_140d37f00(uVar6,local_140,0x20);
        if (iVar3 != 0) {
          local_138 = FUN_140d354c0(local_100);
          local_130 = FUN_140d354a0(local_100);
          uVar6 = FUN_140c55cd0(local_f0);
          iVar3 = FUN_140d37f00(uVar6,local_130,local_138);
          if (iVar3 != 0) {
            uVar6 = FUN_140c55cd0(local_f0);
            cVar1 = FUN_140c535c0(uVar6,local_168);
            if (cVar1 != '\0') {
              local_128 = local_38;
              puVar5 = (undefined *)FUN_140c57dd0(local_128,local_168);
              puVar8 = local_68;
              for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar8 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar8 = puVar8 + 1;
              }
              local_120 = FUN_140c55c70(param_1 + 0xbb);
              puVar5 = (undefined *)FUN_140c630f0(local_78,local_28);
              puVar8 = local_58;
              for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar8 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar8 = puVar8 + 1;
              }
              cVar1 = FUN_140c7c9e0(local_1a0,local_58,local_1a4[0],local_120,local_68);
              if (cVar1 == '\0') {
                FUN_140c6c4e0(0x10,0,0x72,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                              ,0x4bb);
                FUN_140d55f00(local_1a0,2,0x33);
                local_174 = 0;
                FUN_140c564c0(local_168);
                FUN_140c57a90(local_f0);
                return local_174;
              }
              FUN_140c564c0(local_168);
              FUN_140c57a90(local_f0);
              goto LAB_140d46789;
            }
          }
        }
      }
    }
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,CONCAT44(uVar9,0x4b3));
    FUN_140d55f00(local_1a0,2,0x50);
    local_178 = 0;
    FUN_140c564c0(local_168);
    FUN_140c57a90(local_f0);
  }
  return local_178;
}


/* address=140d467c0 name=FUN_140d467c0 */

undefined4 FUN_140d467c0(longlong **param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined local_c8 [8];
  longlong *local_c0;
  undefined local_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined local_a0 [16];
  undefined local_90 [8];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58;
  char local_57;
  undefined local_50 [32];
  undefined local_30 [32];
  
  local_c0 = *param_1;
  cVar1 = FUN_140c700b0(param_1[0xc0]);
  if (cVar1 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xc;
    return 1;
  }
  cVar1 = (**(code **)(*local_c0 + 0x18))(local_c0,&local_58);
  if (cVar1 == '\0') {
    return 3;
  }
  if (local_57 == '\x0e') {
    FUN_140dbfdc0(param_1 + 0x33);
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xc;
    return 1;
  }
  cVar1 = FUN_140d40e90(local_c0,&local_58,0xd);
  if ((cVar1 != '\0') && (cVar1 = FUN_140d426e0(param_1,&local_58), cVar1 != '\0')) {
    puVar4 = local_50;
    puVar7 = local_a0;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar3 = FUN_140d35a40(local_a0,local_88);
    if (iVar3 == 0) {
      FUN_140d55f00(local_c0,2,0x32);
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                    ,0x4ed);
      return 0;
    }
    puVar4 = (undefined *)FUN_140c630f0(local_88,local_30);
    puVar7 = local_78;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = FUN_140c566e0(param_1 + 0xb8,local_78);
    if (cVar1 != '\0') {
      uVar2 = FUN_140c6de20(local_c0);
      if ((0x302 < uVar2) &&
         ((iVar3 = FUN_140d35a70(local_a0,local_68), iVar3 == 0 ||
          (cVar1 = FUN_140d27350(param_1,local_68), cVar1 == '\0')))) {
        FUN_140d55f00(local_c0,2,0x32);
        FUN_140c6c4e0(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                      ,0x4fb);
        return 0;
      }
      local_c8[0] = 0x32;
      uVar5 = FUN_140c72860(local_90,local_c0,local_c8,local_a0);
      FUN_140c55e70(local_b8,uVar5);
      FUN_140c56ac0(local_90);
      cVar1 = FUN_140c56050(local_b8);
      if (cVar1 == '\0') {
        FUN_140d55f00(local_c0,2,local_c8[0]);
        local_b0 = 0;
        FUN_140c56ac0(local_b8);
        return local_b0;
      }
      lVar6 = FUN_140d354c0(local_a0);
      if (lVar6 != 0) {
        FUN_140d55f00(local_c0,2,0x32);
        FUN_140c6c4e0(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                      ,0x50a);
        local_ac = 0;
        FUN_140c56ac0(local_b8);
        return local_ac;
      }
      *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x20;
      uVar5 = FUN_140c55cd0(local_b8);
      FUN_140c5d1b0(param_1 + 0xb6,uVar5);
      lVar6 = FUN_140c55c70(local_c0 + 0xd);
      (**(code **)(*(longlong *)(lVar6 + 8) + 0x50))(param_1);
      (**(code **)(*local_c0 + 0x20))(local_c0);
      *(undefined4 *)((longlong)param_1 + 0x14) = 0xc;
      local_a8 = 1;
      FUN_140c56ac0(local_b8);
      return local_a8;
    }
    FUN_140d55f00(local_c0,2,0x50);
    return 0;
  }
  return 0;
}


/* address=140d46b90 name=FUN_140d46b90 */

undefined8 FUN_140d46b90(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined local_30 [8];
  undefined local_28 [40];
  
  plVar1 = *param_1;
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_30);
  if (cVar2 == '\0') {
    uVar3 = 3;
  }
  else {
    cVar2 = FUN_140d40e90(plVar1,local_30,0xe);
    if ((cVar2 != '\0') && (cVar2 = FUN_140d426e0(param_1,local_30), cVar2 != '\0')) {
      lVar4 = FUN_140d354c0(local_28);
      if (lVar4 != 0) {
        FUN_140d55f00(plVar1,2,0x32);
        FUN_140c6c4e0(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                      ,0x526);
        return 0;
      }
      cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (cVar2 != '\0') {
        FUN_140d55f00(plVar1,2,10);
        FUN_140c6c4e0(0x10,0,0xff,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                      ,0x52d);
        return 0;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1);
      *(undefined4 *)((longlong)param_1 + 0x14) = 0xd;
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d46cd0 name=FUN_140d46cd0 */

undefined8 FUN_140d46cd0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  if ((*(byte *)(param_1 + 0xc4) >> 5 & 1) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xe;
    return 1;
  }
  if (*(int *)(*(longlong *)(lVar1 + 0x30) + 0xd8) == 2) {
    FUN_140c4dcc0(lVar1);
  }
  else {
    lVar4 = FUN_140c55c70(param_1[1] + 0x20);
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      lVar4 = FUN_140c55c70(param_1[1] + 0x20);
      lVar5 = FUN_140c55c70(param_1[1] + 0x20);
      iVar3 = (**(code **)(lVar5 + 0x48))(lVar1,*(undefined8 *)(lVar4 + 0x50));
      if (iVar3 == 0) {
        FUN_140d55f00(lVar1,2,0x50);
        FUN_140c6c4e0(0x10,0,0x7e,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                      ,0x548);
        return 0;
      }
      if (iVar3 < 0) {
        *(undefined4 *)((longlong)param_1 + 0x14) = 0xd;
        return 8;
      }
    }
  }
  cVar2 = FUN_140c71ef0(param_1);
  if (cVar2 == '\0') {
    FUN_140dbfdc0(param_1 + 0x33);
  }
  cVar2 = FUN_140c72ee0(param_1);
  if ((cVar2 != '\0') && (cVar2 = FUN_140d42460(param_1), cVar2 != '\0')) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xe;
    return 1;
  }
  return 0;
}


/* address=140d46e60 name=FUN_140d46e60 */

void FUN_140d46e60(longlong **param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined auStack_4c8 [32];
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined local_488 [8];
  undefined local_480 [16];
  uint local_470;
  uint local_46c;
  longlong *local_468;
  undefined4 local_460;
  uint local_45c;
  undefined local_458 [8];
  longlong local_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  int local_434;
  uint local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined local_3e8 [48];
  longlong *local_3b8;
  byte *local_3b0;
  longlong *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined *local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined local_378 [8];
  undefined *local_370;
  undefined8 local_368;
  ulonglong local_360;
  longlong local_358;
  undefined8 local_350;
  undefined *local_348;
  longlong local_340;
  undefined8 local_338;
  undefined local_330 [48];
  undefined local_300 [48];
  undefined local_2d0 [24];
  undefined local_2b8 [16];
  undefined local_2a8 [16];
  undefined local_298 [48];
  undefined local_268 [16];
  undefined local_258 [16];
  undefined local_248 [48];
  undefined local_218 [48];
  undefined local_1e8 [48];
  undefined local_1b8 [144];
  undefined local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_4c8;
  local_468 = *param_1;
  FUN_140c57a60(local_3e8);
  uVar4 = FUN_140c55cd0(local_3e8);
  local_340 = *local_468;
  cVar1 = (**(code **)(local_340 + 0x58))(local_468,uVar4,local_330,0x10);
  if (cVar1 == '\0') {
    local_3fc = 0;
    FUN_140c57a90(local_3e8);
    goto LAB_140d47be2;
  }
  FUN_140c56440(local_480);
  local_46c = *(uint *)((longlong)param_1[0xc0] + 0x14);
  local_45c = *(uint *)(param_1[0xc0] + 3);
  cVar1 = FUN_140c700b0(param_1[0xc0]);
  if (cVar1 != '\0') {
    lVar5 = FUN_140c55c70(param_1 + 0xbc);
    uVar4 = FUN_140c55c70(lVar5 + 0x88);
    local_338 = FUN_140c560c0(uVar4,0);
    FUN_140c760f0(local_338,local_2d0);
    if ((local_46c & 1) == 0) {
      local_460 = 0;
    }
    else {
      local_460 = 2;
    }
    local_3f8 = local_460;
    cVar1 = FUN_140c724a0(local_2d0,local_460);
    if (cVar1 == '\0') {
      if ((*(byte *)((longlong)param_1[1] + 0xed) >> 4 & 1) == 0) {
        uVar4 = FUN_140c55c70(param_1 + 0xbb);
        iVar2 = FUN_140d31b10(uVar4);
        if (iVar2 == 6) {
          FUN_140c6c180();
          *(byte *)(local_468[6] + 0xdd) = *(byte *)(local_468[6] + 0xdd) | 0x80;
          goto LAB_140d47081;
        }
      }
      local_3f4 = 0;
      FUN_140c564c0(local_480);
      FUN_140c57a90(local_3e8);
      goto LAB_140d47be2;
    }
  }
LAB_140d47081:
  local_470 = 0;
  if ((local_45c & 4) != 0) {
    if (param_1[1][8] == 0) {
      local_4a8 = (undefined *)CONCAT44(local_4a8._4_4_,0x58c);
      FUN_140c6c4e0(0x10,0,0xc4,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                   );
      local_3f0 = 0;
      FUN_140c564c0(local_480);
      FUN_140c57a90(local_3e8);
      goto LAB_140d47be2;
    }
    FUN_140d42c20(local_1b8,0,0x81);
    uVar4 = FUN_140c55c70(param_1 + 0xb5);
    local_3a8 = param_1[1];
    local_4a0 = CONCAT44(local_4a0._4_4_,0x100);
    local_4a8 = local_128;
    local_470 = (*(code *)local_3a8[8])(local_468,uVar4,local_1b8,0x81);
    if (local_470 == 0) {
      local_4a8 = (undefined *)CONCAT44(local_4a8._4_4_,0x596);
      FUN_140c6c4e0(0x10,0,0xc3,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                   );
      FUN_140d55f00(local_468,2,0x28);
      local_448 = 0;
      FUN_140c564c0(local_480);
      FUN_140c57a90(local_3e8);
      goto LAB_140d47be2;
    }
    if (0x100 < local_470) {
      FID_conflict__assert((wchar_t *)"p",(wchar_t *)"D",0x59a);
    }
    local_3a0 = FUN_140c66520(local_1b8);
    lVar5 = FUN_140c55c70(param_1 + 0xbc);
    FUN_140c56a70(lVar5 + 0x80,local_3a0);
    lVar5 = FUN_140c55c70(param_1 + 0xbc);
    cVar1 = operator==<>(lVar5 + 0x80,0);
    if (cVar1 != '\0') {
      local_444 = 0;
      FUN_140c564c0(local_480);
      FUN_140c57a90(local_3e8);
      goto LAB_140d47be2;
    }
    iVar2 = FUN_140d37de0(local_330,local_218);
    if (iVar2 != 0) {
      uVar4 = FUN_140c66590(local_1b8,0x81);
      iVar2 = FUN_140d37f00(local_218,local_1b8,uVar4);
      if ((iVar2 != 0) && (iVar2 = FUN_140d37900(local_330), iVar2 != 0)) goto LAB_140d47329;
    }
    local_440 = 0;
    FUN_140c564c0(local_480);
    FUN_140c57a90(local_3e8);
    goto LAB_140d47be2;
  }
LAB_140d47329:
  if ((local_46c & 1) != 0) {
    cVar1 = FUN_140c56600(local_480,0x30);
    if (cVar1 == '\0') {
      local_43c = 0;
      FUN_140c564c0(local_480);
      FUN_140c57a90(local_3e8);
      goto LAB_140d47be2;
    }
    uVar4 = FUN_140c55c70(param_1 + 0xbb);
    local_450 = FUN_140d31be0(uVar4);
    if (local_450 == 0) {
      local_4a8 = (undefined *)CONCAT44(local_4a8._4_4_,0x5b3);
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                   );
      local_438 = 0;
      FUN_140c564c0(local_480);
      FUN_140c57a90(local_3e8);
      goto LAB_140d47be2;
    }
    local_434 = (int)(uint)*(ushort *)((longlong)param_1 + 0x624) >> 8;
    puVar6 = (undefined *)FUN_140c71340(local_480,0);
    *puVar6 = (char)local_434;
    local_430 = *(ushort *)((longlong)param_1 + 0x624) & 0xff;
    puVar6 = (undefined *)FUN_140c71340(local_480,1);
    *puVar6 = (char)local_430;
    uVar4 = FUN_140c71340(local_480,2);
    iVar2 = FUN_140ca8a50(uVar4,0x2e);
    if (iVar2 == 0) {
      local_42c = 0;
      FUN_140c564c0(local_480);
      FUN_140c57a90(local_3e8);
      goto LAB_140d47be2;
    }
    iVar2 = FUN_140d37de0(local_330,local_248);
    if (iVar2 != 0) {
      uVar3 = FUN_140cb6660(local_450);
      iVar2 = FUN_140d38010(local_248,&local_388,uVar3);
      if (iVar2 != 0) {
        local_398 = FUN_140c55f80(local_480);
        local_390 = (undefined *)FUN_140c55c70(local_480);
        uVar3 = FUN_140cb6660(local_450);
        local_498 = 1;
        local_4a0 = local_398;
        local_4a8 = local_390;
        iVar2 = FUN_140dafcf0(local_450,&local_380,local_388,uVar3);
        if (((iVar2 != 0) && (iVar2 = FUN_140d38070(local_248,local_380), iVar2 != 0)) &&
           (iVar2 = FUN_140d37900(local_330), iVar2 != 0)) goto LAB_140d478aa;
      }
    }
    local_428 = 0;
    FUN_140c564c0(local_480);
    FUN_140c57a90(local_3e8);
    goto LAB_140d47be2;
  }
  if ((local_46c & 2) != 0) {
    iVar2 = FUN_140d37db0(local_330,local_1e8);
    if (iVar2 == 0) {
      local_424 = 0;
      FUN_140c564c0(local_480);
      FUN_140c57a90(local_3e8);
      goto LAB_140d47be2;
    }
    lVar5 = FUN_140c55c70(param_1 + 0xbc);
    uVar4 = FUN_140c76870(local_378,*(undefined2 *)(lVar5 + 6));
    FUN_140c55e70(local_458,uVar4);
    FUN_140c7a600(local_378);
    local_488[0] = 0x32;
    cVar1 = FUN_140c56050(local_458);
    if (cVar1 != '\0') {
      local_370 = local_268;
      local_3b8 = (longlong *)FUN_140c55c70(local_458);
      puVar6 = (undefined *)FUN_140c57dd0(local_370,param_1 + 0x55);
      puVar7 = local_2b8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      local_4a8 = local_2b8;
      cVar1 = (**(code **)(*local_3b8 + 0x18))(local_3b8,local_1e8,local_480,local_488);
      if (cVar1 != '\0') {
        iVar2 = FUN_140d37900(local_330);
        if (iVar2 == 0) {
          local_41c = 0;
          FUN_140c7a600(local_458);
          FUN_140c564c0(local_480);
          FUN_140c57a90(local_3e8);
          goto LAB_140d47be2;
        }
        FUN_140c56520(param_1 + 0x55);
        FUN_140c7a600(local_458);
        goto LAB_140d478aa;
      }
    }
    FUN_140d55f00(local_468,2,local_488[0]);
    local_420 = 0;
    FUN_140c7a600(local_458);
    FUN_140c564c0(local_480);
    FUN_140c57a90(local_3e8);
    goto LAB_140d47be2;
  }
  if ((local_46c & 4) == 0) {
    FUN_140d55f00(local_468,2,0x28);
    local_4a8 = (undefined *)CONCAT44(local_4a8._4_4_,0x5e5);
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                 );
    local_414 = 0;
    FUN_140c564c0(local_480);
    FUN_140c57a90(local_3e8);
    goto LAB_140d47be2;
  }
  cVar1 = FUN_140c56600(local_480,local_470);
  if (cVar1 == '\0') {
    local_418 = 0;
    FUN_140c564c0(local_480);
    FUN_140c57a90(local_3e8);
    goto LAB_140d47be2;
  }
  local_368 = FUN_140c55f80(local_480);
  uVar4 = FUN_140c55c70(local_480);
  FUN_140d42c20(uVar4,0,local_368);
LAB_140d478aa:
  if ((local_45c & 4) == 0) {
LAB_140d47a2b:
    uVar4 = FUN_140c55cd0(local_3e8);
    cVar1 = FUN_140d42620(local_468,uVar4);
    if (cVar1 == '\0') {
      local_40c = 0;
      FUN_140c564c0(local_480);
      FUN_140c57a90(local_3e8);
    }
    else {
      local_348 = local_258;
      puVar6 = (undefined *)FUN_140c57dd0(local_348,local_480);
      puVar7 = local_2a8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar5 = FUN_140c55c70(param_1 + 0xbc);
      local_408 = FUN_140d24de0(param_1,lVar5 + 0xb,local_2a8);
      lVar5 = FUN_140c55c70(param_1 + 0xbc);
      *(char *)(lVar5 + 10) = (char)local_408;
      lVar5 = FUN_140c55c70(param_1 + 0xbc);
      if (*(char *)(lVar5 + 10) == '\0') {
        local_404 = 0;
        FUN_140c564c0(local_480);
        FUN_140c57a90(local_3e8);
      }
      else {
        lVar5 = FUN_140c55c70(param_1 + 0xbc);
        local_3b0 = (byte *)(lVar5 + 0x1a8);
        *local_3b0 = *local_3b0 & 0xfe | *(byte *)((longlong)param_1 + 0x622) >> 1 & 1;
        *(undefined4 *)((longlong)param_1 + 0x14) = 0xf;
        local_400 = 1;
        FUN_140c564c0(local_480);
        FUN_140c57a90(local_3e8);
      }
    }
  }
  else {
    FUN_140c57a60(local_300);
    local_360 = (ulonglong)(local_470 + 4);
    local_358 = FUN_140c55f80(local_480);
    local_358 = local_360 + local_358;
    uVar4 = FUN_140c55cd0(local_300);
    iVar2 = FUN_140d376f0(uVar4,local_358);
    if (iVar2 != 0) {
      uVar4 = FUN_140c55cd0(local_300);
      iVar2 = FUN_140d37de0(uVar4,local_298);
      if (iVar2 != 0) {
        local_350 = FUN_140c55f80(local_480);
        uVar4 = FUN_140c55c70(local_480);
        iVar2 = FUN_140d37f00(local_298,uVar4,local_350);
        if (iVar2 != 0) {
          uVar4 = FUN_140c55cd0(local_300);
          iVar2 = FUN_140d37de0(uVar4,local_298);
          if ((iVar2 != 0) && (iVar2 = FUN_140d37f00(local_298,local_128,local_470), iVar2 != 0)) {
            uVar4 = FUN_140c55cd0(local_300);
            cVar1 = FUN_140c535c0(uVar4,local_480);
            if (cVar1 != '\0') {
              FUN_140c57a90(local_300);
              goto LAB_140d47a2b;
            }
          }
        }
      }
    }
    local_410 = 0;
    FUN_140c57a90(local_300);
    FUN_140c564c0(local_480);
    FUN_140c57a90(local_3e8);
  }
LAB_140d47be2:
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_4c8);
  return;
}


/* address=140d47c10 name=FUN_140d47c10 */

undefined4 FUN_140d47c10(longlong **param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined4 in_stack_fffffffffffffed8;
  undefined2 uVar8;
  undefined2 local_118 [2];
  int local_114;
  longlong *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined local_c8 [48];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [48];
  undefined local_48 [56];
  
  uVar8 = (undefined2)((uint)in_stack_fffffffffffffed8 >> 0x10);
  local_110 = *param_1;
  if (((*(byte *)(param_1 + 0xc4) >> 5 & 1) == 0) || (cVar1 = FUN_140c71ef0(param_1), cVar1 == '\0')
     ) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x10;
    return 1;
  }
  cVar1 = FUN_140c7be70(param_1);
  if (cVar1 == '\0') {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x611);
  }
  FUN_140c57a60(local_c8);
  uVar4 = FUN_140c55cd0(local_c8);
  local_d8 = *local_110;
  cVar1 = (**(code **)(local_d8 + 0x58))(local_110,uVar4,local_78,0xf);
  if (cVar1 == '\0') {
    local_108 = 0;
    FUN_140c57a90(local_c8);
    return local_108;
  }
  cVar1 = FUN_140d27430(param_1,local_118);
  if (cVar1 == '\0') {
    FUN_140d55f00(local_110,2,0x28);
    local_104 = 0;
    FUN_140c57a90(local_c8);
    return local_104;
  }
  uVar2 = FUN_140c6de20(local_110);
  if ((0x302 < uVar2) && (iVar3 = FUN_140d38120(local_78,local_118[0]), iVar3 == 0)) {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,0x621);
    local_100 = 0;
    FUN_140c57a90(local_c8);
    return local_100;
  }
  uVar4 = FUN_140c55c70(param_1 + 0xba);
  iVar3 = FUN_140d31a60(uVar4);
  local_e8 = (longlong)iVar3;
  iVar3 = FUN_140d37de0(local_78,local_48);
  if ((iVar3 == 0) || (iVar3 = FUN_140d38010(local_48,&local_d0,local_e8), iVar3 == 0)) {
    local_fc = 0;
    FUN_140c57a90(local_c8);
    return local_fc;
  }
  local_e0 = local_e8;
  puVar5 = (undefined *)FUN_140d48ba0(param_1 + 0x33,local_88);
  puVar7 = local_98;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  local_114 = FUN_140c7bee0(param_1,local_d0,&local_e0,local_e8,CONCAT22(uVar8,local_118[0]),
                            local_98);
  if (local_114 != 1) {
    if (local_114 == 2) {
      local_f8 = 0;
      FUN_140c57a90(local_c8);
      return local_f8;
    }
    iVar3 = FUN_140d38070(local_48,local_e0);
    if (iVar3 != 0) {
      uVar4 = FUN_140c55cd0(local_c8);
      cVar1 = FUN_140d42620(local_110,uVar4);
      if (cVar1 != '\0') {
        FUN_140dbfdc0(param_1 + 0x33);
        *(undefined4 *)((longlong)param_1 + 0x14) = 0x10;
        local_ec = 1;
        FUN_140c57a90(local_c8);
        return local_ec;
      }
    }
    local_f0 = 0;
    FUN_140c57a90(local_c8);
    return local_f0;
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xf;
  local_f4 = 9;
  FUN_140c57a90(local_c8);
  return local_f4;
}


/* address=140d47fb0 name=FUN_140d47fb0 */

undefined4 FUN_140d47fb0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined local_f8 [48];
  undefined local_c8 [48];
  undefined local_98 [48];
  undefined local_68 [48];
  undefined local_38 [56];
  
  plVar1 = *param_1;
  *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) | 0x80;
  cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1);
  if ((cVar2 == '\0') || (cVar2 = FUN_140d24d50(param_1), cVar2 == '\0')) {
    return 0;
  }
  if (*(char *)((longlong)param_1 + 0x621) < '\0') {
    lVar4 = FUN_140c55f80(plVar1[6] + 0x1d8);
    FUN_140c57a60(local_f8);
    uVar5 = FUN_140c55cd0(local_f8);
    cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar5,local_68,0x43);
    if ((cVar2 == '\0') || (iVar3 = FUN_140d37db0(local_68,local_98), iVar3 == 0)) {
LAB_140d4817f:
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                    ,0x65d);
      FUN_140c57a90(local_f8);
      return 0;
    }
    uVar5 = FUN_140c55f80(plVar1[6] + 0x1d8);
    uVar6 = FUN_140c55c70(plVar1[6] + 0x1d8);
    iVar3 = FUN_140d37f00(local_98,uVar6,uVar5);
    if ((iVar3 == 0) ||
       ((iVar3 = FUN_140d37db0(local_68,local_98), iVar3 == 0 ||
        (iVar3 = FUN_140d37f00(local_98,&DAT_14106ead0,0x20 - (lVar4 + 2U) % 0x20), iVar3 == 0))))
    goto LAB_140d4817f;
    uVar5 = FUN_140c55cd0(local_f8);
    cVar2 = FUN_140d42620(plVar1,uVar5);
    if (cVar2 == '\0') goto LAB_140d4817f;
    FUN_140c57a90(local_f8);
  }
  if ((*(byte *)((longlong)param_1 + 0x623) & 1) != 0) {
    FUN_140c57a60(local_c8);
    uVar5 = FUN_140c55cd0(local_c8);
    cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar5,local_38,0xcb);
    if ((cVar2 != '\0') && (cVar2 = FUN_140d29530(param_1,local_38), cVar2 != '\0')) {
      uVar5 = FUN_140c55cd0(local_c8);
      cVar2 = FUN_140d42620(plVar1,uVar5);
      if (cVar2 != '\0') {
        FUN_140c57a90(local_c8);
        goto LAB_140d482b5;
      }
    }
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,0x668);
    FUN_140c57a90(local_c8);
    return 0;
  }
LAB_140d482b5:
  cVar2 = FUN_140d421d0(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x11;
  return 4;
}


/* address=140d482f0 name=FUN_140d482f0 */

ulonglong FUN_140d482f0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  uVar3 = FUN_140c4c520(lVar1);
  if (((((int)uVar3 != 0) || (uVar3 = FUN_140c6d580(lVar1), (int)uVar3 != 0x303)) ||
      (uVar3 = param_1[0xc0], *(int *)(uVar3 + 0x14) != 2)) ||
     (uVar3 = param_1[0xc0], *(int *)(uVar3 + 0x20) != 4)) {
    return uVar3 & 0xffffffffffffff00;
  }
  if (*(int *)(*(ulonglong *)(lVar1 + 0x30) + 0xd8) == 2) {
    return *(ulonglong *)(lVar1 + 0x30) & 0xffffffffffffff00;
  }
  lVar4 = FUN_140c55c70(lVar1 + 0x68);
  if ((((*(byte *)(lVar4 + 0x239) & 1) == 0) &&
      (cVar2 = FUN_140c55f90(*(longlong *)(lVar1 + 0x30) + 0x1e8), cVar2 != '\0')) &&
     (cVar2 = FUN_140c55f90(*(longlong *)(lVar1 + 0x30) + 0x1d8), cVar2 != '\0')) {
    return 0;
  }
  return 1;
}


/* address=140d483e0 name=FUN_140d483e0 */

undefined8 FUN_140d483e0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  cVar2 = FUN_140c57ae0(lVar1 + 0x58,0);
  if (cVar2 == '\0') {
    cVar2 = FUN_140d29aa0(param_1);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x12;
      uVar3 = FUN_140c4da50(lVar1);
      if ((((uVar3 & 0x80) != 0) && (cVar2 = FUN_140d482f0(param_1), cVar2 != '\0')) &&
         ((*(byte *)(*(longlong *)(lVar1 + 0x30) + 0xdc) >> 5 & 1) == 0)) {
        *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) | 4;
        *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) | 0x40;
        return 0xc;
      }
      uVar4 = 1;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x15;
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140d484e0 name=FUN_140d484e0 */

undefined8 FUN_140d484e0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined4 local_b0 [2];
  undefined local_a8 [16];
  undefined local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined local_80 [24];
  undefined local_68 [16];
  undefined local_58 [8];
  undefined local_50 [32];
  undefined local_30 [32];
  
  plVar1 = *param_1;
  if ((*(byte *)((longlong)param_1 + 0x622) & 1) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x13;
    uVar4 = 0xf;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_58);
    if (cVar2 == '\0') {
      uVar4 = 3;
    }
    else {
      cVar2 = FUN_140d40e90(plVar1,local_58,4);
      if ((cVar2 != '\0') && (cVar2 = FUN_140d426e0(param_1,local_58), cVar2 != '\0')) {
        puVar5 = local_50;
        puVar7 = local_80;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar3 = FUN_140d35800(local_80,local_b0);
        if (((iVar3 == 0) || (iVar3 = FUN_140d35a70(local_80,local_a8), iVar3 == 0)) ||
           (lVar6 = FUN_140d354c0(local_80), lVar6 != 0)) {
          FUN_140d55f00(plVar1,2,0x32);
          FUN_140c6c4e0(0x10,0,0x89,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                        ,0x6d0);
          return 0;
        }
        lVar6 = FUN_140d354c0(local_a8);
        if (lVar6 == 0) {
          *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) & 0xfe;
          (**(code **)(*plVar1 + 0x20))(plVar1);
          *(undefined4 *)((longlong)param_1 + 0x14) = 0x13;
          return 0xf;
        }
        cVar2 = FUN_140c57ae0(plVar1 + 0xb,0);
        if (cVar2 != '\0') {
          cVar2 = FUN_140c56050(param_1 + 0xbc);
          if (cVar2 != '\0') {
            FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x6e2);
          }
          uVar4 = FUN_140c55c70(plVar1 + 0xb);
          uVar4 = FUN_140c60c00(local_98,uVar4,2);
          FUN_140c580d0(param_1 + 0xbc,uVar4);
          FUN_140c56300(local_98);
          cVar2 = FUN_140c56050(param_1 + 0xbc);
          if (cVar2 == '\0') {
            return 0;
          }
        }
        uVar4 = FUN_140c55c70(param_1 + 0xbc);
        FUN_140c61690(plVar1,uVar4);
        puVar5 = (undefined *)FUN_140c630f0(local_a8,local_30);
        puVar7 = local_68;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        lVar6 = FUN_140c55c70(param_1 + 0xbc);
        cVar2 = FUN_140c566e0(lVar6 + 0xe8,local_68);
        if (cVar2 == '\0') {
          return 0;
        }
        lVar6 = FUN_140c55c70(param_1 + 0xbc);
        *(undefined4 *)(lVar6 + 0x16c) = local_b0[0];
        local_90 = FUN_140c55c70(param_1 + 0xbc);
        local_90 = local_90 + 0x3c;
        local_88 = FUN_140d354c0(local_a8);
        uVar4 = FUN_140d354a0(local_a8);
        FUN_140c7e500(uVar4,local_88,local_90);
        lVar6 = FUN_140c55c70(param_1 + 0xbc);
        *(undefined *)(lVar6 + 0x3b) = 0x20;
        (**(code **)(*plVar1 + 0x20))(plVar1);
        *(undefined4 *)((longlong)param_1 + 0x14) = 0x13;
        return 0xf;
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* address=140d48880 name=FUN_140d48880 */

bool FUN_140d48880(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140d24d50(param_1,0);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0x14;
  }
  return cVar1 != '\0';
}


/* address=140d488c0 name=FUN_140d488c0 */

int FUN_140d488c0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = FUN_140d41f30(param_1);
  if (iVar3 == 1) {
    cVar2 = FUN_140c57ae0(lVar1 + 0x58,0);
    if (cVar2 == '\0') {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x15;
      iVar3 = 1;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x10;
      iVar3 = 1;
    }
  }
  return iVar3;
}


/* address=140d48940 name=FUN_140d48940 */

undefined8 FUN_140d48940(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined local_20 [8];
  undefined local_18 [24];
  
  plVar1 = *param_1;
  if (*(int *)(plVar1[6] + 0xd8) == 2) {
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 2;
    FUN_140d55f00(plVar1,2,0x79);
    FUN_140c6c4e0(0x10,0,0x13f,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_client.cc"
                  ,0x71b);
    uVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1);
    cVar2 = FUN_140c57ae0(param_1 + 0xbc,0);
    if (cVar2 == '\0') {
      cVar3 = FUN_140c57ae0(plVar1 + 0xb,0);
      if (cVar3 == '\0') {
        FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x736);
      }
      uVar4 = FUN_140c56390(local_18,plVar1 + 0xb);
      FUN_140c580d0(plVar1[6] + 0x1d0,uVar4);
      FUN_140c56300(local_18);
    }
    else {
      uVar4 = FUN_140c55c70(param_1 + 0xbc);
      uVar4 = FUN_140c60c00(local_20,uVar4,3);
      FUN_140c580d0(plVar1[6] + 0x1d0,uVar4);
      FUN_140c56300(local_20);
      cVar3 = FUN_140c56050(plVar1[6] + 0x1d0);
      if (cVar3 == '\0') {
        return 0;
      }
      if ((*(byte *)(plVar1[6] + 0xdc) >> 5 & 1) == 0) {
        lVar5 = FUN_140c55c70(plVar1[6] + 0x1d0);
        *(byte *)(lVar5 + 0x1a8) = *(byte *)(lVar5 + 0x1a8) & 0xfb;
      }
      FUN_140c56340(param_1 + 0xbc,0);
    }
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 8;
    *(byte *)(plVar1[6] + 0xdc) = *(byte *)(plVar1[6] + 0xdc) | 0x20;
    if (cVar2 != '\0') {
      FUN_140c61850(plVar1);
    }
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x16;
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140d48ba0 name=FUN_140d48ba0 */

undefined8 FUN_140d48ba0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_140c55c70(param_1);
  lVar2 = FUN_140c55c70(param_1);
  FUN_140c55fe0(param_2,*(undefined8 *)(lVar2 + 8),*puVar1);
  return param_2;
}


/* address=140d48bf0 name=FUN_140d48bf0 */

undefined8 FUN_140d48bf0(longlong param_1,undefined8 param_2)

{
  FUN_140c55fe0(param_2,param_1 + 0x58,*(undefined8 *)(param_1 + 0x20));
  return param_2;
}


/* address=140d48c30 name=FUN_140d48c30 */

longlong FUN_140d48c30(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined *)(param_1 + 0x3a) = 0;
  return param_1;
}


/* address=140d48c60 name=FUN_140d48c60 */

undefined2 * FUN_140d48c60(undefined2 *param_1,undefined2 param_2,undefined param_3)

{
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = param_3;
  *(undefined *)((longlong)param_1 + 3) = 0;
  FUN_140d35430(param_1 + 4,0,0);
  return param_1;
}


/* address=140d48cc0 name=FUN_140d48cc0 */

undefined8 FUN_140d48cc0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c55f50(param_1,param_2,8);
  return param_1;
}


/* address=140d48cf0 name=FUN_140d48cf0 */

undefined8 FUN_140d48cf0(undefined8 param_1)

{
  return param_1;
}


/* address=140d48d10 name=FUN_140d48d10 */

longlong FUN_140d48d10(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=140d48d30 name=FUN_140d48d30 */

void FUN_140d48d30(ulonglong param_1)

{
  FUN_140d48d10(~param_1 & param_1 - 1);
  return;
}


/* address=140d48d60 name=FUN_140d48d60 */

void FUN_140d48d60(undefined8 param_1)

{
  FUN_140d48d30(param_1);
  return;
}


/* address=140d48d80 name=FUN_140d48d80 */

void FUN_140d48d80(ulonglong param_1,ulonglong param_2)

{
  FUN_140d48d30(param_1 ^ param_2);
  return;
}


/* address=140d48dc0 name=FUN_140d48dc0 */

void FUN_140d48dc0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d48d80(param_1,param_2);
  return;
}


/* address=140d48df0 name=FUN_140d48df0 */

void FUN_140d48df0(int param_1,int param_2)

{
  FUN_140d48dc0((longlong)param_1,(longlong)param_2);
  return;
}


/* address=140d48e20 name=FUN_140d48e20 */

ulonglong FUN_140d48e20(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_140d48cf0(param_1);
  uVar2 = FUN_140d48cf0(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=140d48e70 name=FUN_140d48e70 */

void FUN_140d48e70(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_140d48e20(param_1,param_2,param_3);
  return;
}


/* address=140d48ec0 name=FUN_140d48ec0 */

uint FUN_140d48ec0(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=140d48ee0 name=FUN_140d48ee0 */

undefined8 FUN_140d48ee0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e28500(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140d48f20 name=FUN_140d48f20 */

undefined8 FUN_140d48f20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d48f70 name=FUN_140d48f70 */

undefined8 FUN_140d48f70(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d48fb0 name=FUN_140d48fb0 */

void FUN_140d48fb0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  local_res10[0] = FUN_140d48ec0(param_2);
  FUN_140d48f20(param_1,local_res10,4);
  return;
}


/* address=140d49290 name=FUN_140d49290 */

char * FUN_140d49290(longlong param_1)

{
  char *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    pcVar1 = "TLS server start_accept";
    break;
  case 1:
    pcVar1 = "TLS server read_client_hello";
    break;
  case 2:
    pcVar1 = "TLS server read_client_hello_after_ech";
    break;
  case 3:
    pcVar1 = "TLS server select_certificate";
    break;
  case 4:
    pcVar1 = (char *)FUN_140dcedb0(param_1);
    break;
  case 5:
    pcVar1 = "TLS server select_parameters";
    break;
  case 6:
    pcVar1 = "TLS server send_server_hello";
    break;
  case 7:
    pcVar1 = "TLS server send_server_certificate";
    break;
  case 8:
    pcVar1 = "TLS server send_server_key_exchange";
    break;
  case 9:
    pcVar1 = "TLS server send_server_hello_done";
    break;
  case 10:
    pcVar1 = "TLS server read_client_certificate";
    break;
  case 0xb:
    pcVar1 = "TLS server verify_client_certificate";
    break;
  case 0xc:
    pcVar1 = "TLS server read_client_key_exchange";
    break;
  case 0xd:
    pcVar1 = "TLS server read_client_certificate_verify";
    break;
  case 0xe:
    pcVar1 = "TLS server read_change_cipher_spec";
    break;
  case 0xf:
    pcVar1 = "TLS server process_change_cipher_spec";
    break;
  case 0x10:
    pcVar1 = "TLS server read_next_proto";
    break;
  case 0x11:
    pcVar1 = "TLS server read_channel_id";
    break;
  case 0x12:
    pcVar1 = "TLS server read_client_finished";
    break;
  case 0x13:
    pcVar1 = "TLS server send_server_finished";
    break;
  case 0x14:
    pcVar1 = "TLS server finish_server_handshake";
    break;
  case 0x15:
    pcVar1 = "TLS server done";
    break;
  default:
    pcVar1 = "TLS server unknown";
  }
  return pcVar1;
}


/* address=140d49420 name=FUN_140d49420 */

ulonglong FUN_140d49420(longlong param_1,short param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  short local_28 [4];
  undefined local_20 [32];
  
  FUN_140d35430(local_20,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  while( true ) {
    lVar1 = FUN_140d354c0(local_20);
    if (lVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_140d35710(local_20,local_28);
    if ((int)uVar2 == 0) break;
    if (local_28[0] == param_2) {
      return CONCAT71((uint7)(byte)((ushort)local_28[0] >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


/* address=140d494a0 name=FUN_140d494a0 */

ulonglong FUN_140d494a0(longlong *param_1,undefined *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong local_38;
  undefined local_28 [16];
  undefined local_18 [24];
  
  lVar1 = *param_1;
  if ((*(byte *)(*(longlong *)(lVar1 + 0x30) + 0xdc) >> 1 & 1) != 0) {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",199);
  }
  cVar2 = FUN_140d272a0(param_3,local_18,0x2b);
  if (cVar2 == '\0') {
    local_38 = 0;
    iVar4 = FUN_140c4c520(lVar1);
    if (iVar4 == 0) {
      if (*(ushort *)(param_3 + 0x18) < 0x303) {
        if (*(ushort *)(param_3 + 0x18) < 0x302) {
          if (0x300 < *(ushort *)(param_3 + 0x18)) {
            local_38 = 2;
          }
        }
        else {
          local_38 = 4;
        }
      }
      else {
        local_38 = 6;
      }
      FUN_140d35430(local_28,(longlong)&UNK_1410708ea - local_38,local_38);
    }
    else {
      if (*(ushort *)(param_3 + 0x18) < 0xfefe) {
        local_38 = 4;
      }
      else if (*(ushort *)(param_3 + 0x18) < 0xff00) {
        local_38 = 2;
      }
      FUN_140d35430(local_28,(longlong)&DAT_1410708f0 - local_38,local_38);
    }
  }
  else {
    iVar4 = FUN_140d35a40(local_18,local_28);
    if (((iVar4 == 0) || (lVar5 = FUN_140d354c0(local_18), lVar5 != 0)) ||
       (lVar5 = FUN_140d354c0(local_28), lVar5 == 0)) {
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                    ,0xce);
      *param_2 = 0x32;
      return (ulonglong)param_2 & 0xffffffffffffff00;
    }
  }
  cVar2 = FUN_140c6dc80(param_1,param_2,lVar1 + 0x10,local_28);
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  else {
    *(byte *)(*(longlong *)(lVar1 + 0x30) + 0xdc) =
         *(byte *)(*(longlong *)(lVar1 + 0x30) + 0xdc) | 2;
    uVar7 = FUN_140c55c70(*(longlong *)(lVar1 + 0x30) + 0x110);
    FUN_140d3b790(uVar7,*(undefined2 *)(lVar1 + 0x10));
    cVar2 = FUN_140d49420(param_3,0x5600);
    uVar6 = 0;
    if (cVar2 != '\0') {
      uVar3 = FUN_140c6de20(lVar1);
      uVar6 = (ulonglong)uVar3;
      if (uVar3 < *(ushort *)((longlong)param_1 + 0x1e)) {
        FUN_140c6c4e0(0x10,0,0x9d,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                      ,0x103);
        *param_2 = 0x56;
        return (ulonglong)param_2 & 0xffffffffffffff00;
      }
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  return uVar6;
}


/* address=140d49750 name=FUN_140d49750 */

undefined8 FUN_140d49750(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 local_38 [4];
  undefined local_30 [8];
  longlong local_28;
  undefined local_20 [32];
  
  FUN_140d35430(local_20,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48));
  uVar3 = FUN_140c56020();
  FUN_140c55e40(local_30,uVar3);
  cVar1 = FUN_140c56050(local_30);
  if (cVar1 == '\0') {
    FUN_140c5cfa0(param_1,0);
    FUN_140c57460(local_30);
  }
  else {
    do {
      do {
        lVar4 = FUN_140d354c0(local_20);
        if (lVar4 == 0) {
          FUN_140c55e70(param_1,local_30);
          FUN_140c57460(local_30);
          return param_1;
        }
        iVar2 = FUN_140d35710(local_20,local_38);
        if (iVar2 == 0) {
          FUN_140c6c4e0(0x10,0,0x94,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                        ,0x11a);
          FUN_140c5cfa0(param_1,0);
          FUN_140c57460(local_30);
          return param_1;
        }
        local_28 = FUN_140c6e300(local_38[0]);
      } while (local_28 == 0);
      uVar3 = FUN_140c55c70(local_30);
      lVar4 = FUN_140c5cc60(uVar3,local_28);
    } while (lVar4 != 0);
    FUN_140c5cfa0(param_1,0);
    FUN_140c57460(local_30);
  }
  return param_1;
}


/* address=140d498a0 name=FUN_140d498a0 */

void FUN_140d498a0(longlong param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined local_18 [4];
  uint local_14;
  uint local_10;
  
  local_14 = 0;
  local_10 = 0;
  cVar1 = FUN_140c71ef0(param_1);
  if (cVar1 != '\0') {
    uVar4 = FUN_140c55c70(param_1 + 0x5d0);
    uVar2 = FUN_140c70060(uVar4);
    local_10 = local_10 | uVar2;
    uVar4 = FUN_140c55c70(param_1 + 0x5d0);
    iVar3 = FUN_140d31b10(uVar4);
    if (iVar3 == 6) {
      local_14 = local_14 | 1;
    }
  }
  cVar1 = FUN_140d27a30(param_1,local_18);
  if (cVar1 != '\0') {
    local_14 = local_14 | 2;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) != 0) {
    local_14 = local_14 | 4;
    local_10 = local_10 | 4;
  }
  *param_2 = local_14;
  *param_3 = local_10;
  return;
}


/* address=140d49990 name=FUN_140d49990 */

undefined8 FUN_140d49990(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int local_88;
  undefined local_80 [8];
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined8 local_40;
  longlong local_38;
  undefined local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = *param_1;
  local_88 = -1;
  uVar4 = FUN_140d49750(local_30,param_2);
  FUN_140c55e70(local_80,uVar4);
  FUN_140c57460(local_30);
  cVar1 = FUN_140c56050(local_80);
  if (cVar1 == '\0') {
    local_28 = 0;
    FUN_140c57460(local_80);
  }
  else {
    if ((*(uint *)(local_38 + 0x80) & 0x400000) == 0) {
      local_40 = FUN_140c55c70(local_80);
      local_60 = 0;
      local_58 = FUN_140c55c70(param_3);
    }
    else {
      local_40 = FUN_140c55c70(param_3);
      local_60 = *(longlong *)(param_3 + 8);
      local_58 = FUN_140c55c70(local_80);
    }
    FUN_140d498a0(param_1,&local_48,&local_44);
    local_78 = 0;
    while (uVar5 = FUN_140c560a0(local_40), local_78 < uVar5) {
      local_70 = FUN_140c560c0(local_40,local_78);
      uVar2 = FUN_140c6e700(local_70);
      local_50 = (uint)uVar2;
      uVar2 = FUN_140c6de20(local_38);
      if ((int)local_50 <= (int)(uint)uVar2) {
        uVar2 = FUN_140c6de20(local_38);
        local_4c = (uint)uVar2;
        uVar2 = FUN_140c6e740(local_70);
        if (((((int)local_4c <= (int)(uint)uVar2) && ((*(uint *)(local_70 + 0x14) & local_48) != 0))
            && ((*(uint *)(local_70 + 0x18) & local_44) != 0)) &&
           (iVar3 = FUN_140c5ea70(local_58,&local_68,local_70), iVar3 != 0)) {
          if ((local_60 == 0) || (*(char *)(local_60 + local_78) == '\0')) {
            if ((local_88 != -1) && ((ulonglong)(longlong)local_88 < local_68)) {
              local_68 = (ulonglong)local_88;
            }
            local_20 = FUN_140c560c0(local_58,local_68);
            FUN_140c57460(local_80);
            return local_20;
          }
          if ((local_88 == -1) || (local_68 < (ulonglong)(longlong)local_88)) {
            local_88 = (int)local_68;
          }
        }
      }
      if (((local_60 != 0) && (*(char *)(local_60 + local_78) == '\0')) && (local_88 != -1)) {
        local_18 = FUN_140c560c0(local_58,(longlong)local_88);
        FUN_140c57460(local_80);
        return local_18;
      }
      local_78 = local_78 + 1;
    }
    local_10 = 0;
    FUN_140c57460(local_80);
    local_28 = local_10;
  }
  return local_28;
}


/* address=140d49ca0 name=FUN_140d49ca0 */

undefined8 FUN_140d49ca0(undefined8 *param_1)

{
  FUN_140c53630(*param_1,0x10,1);
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  return 1;
}


/* address=140d49ce0 name=FUN_140d49ce0 */

ulonglong FUN_140d49ce0(longlong param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  char local_f8;
  char local_f7;
  ushort local_f4 [2];
  uint local_f0;
  ushort local_ec [2];
  ushort *local_e8;
  undefined2 local_e0;
  undefined2 local_dc;
  undefined2 *local_d8;
  ushort *local_d0;
  undefined local_c8 [16];
  char *local_b8;
  undefined local_b0 [16];
  undefined local_a0 [16];
  undefined local_90 [16];
  undefined local_80 [16];
  undefined local_70 [24];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  cVar1 = FUN_140d49420(param_1,0x1303);
  if (cVar1 == '\0') {
    local_e0 = 1;
    local_dc = 0x11;
    FUN_140c55f20(local_70);
    FUN_140c55f20(local_80);
    local_f8 = '\0';
    local_f7 = '\0';
    FUN_140d35430(local_c8,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
    local_d8 = &DAT_1410708f0;
    local_b8 = "D";
    for (local_e8 = &DAT_1410708f0; local_e8 != (ushort *)local_b8; local_e8 = local_e8 + 2) {
      local_d0 = local_e8;
      puVar4 = local_c8;
      puVar6 = local_a0;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar2 = FUN_140d35710(local_a0,local_f4);
      if ((iVar2 == 0) || (local_f4[0] != *local_d0)) {
        if (*(char *)(local_d0 + 1) != '\0') {
          return 0;
        }
      }
      else {
        puVar4 = local_a0;
        puVar6 = local_c8;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar3 = FUN_140d35a70(local_c8,local_b0);
        if ((int)uVar3 == 0) {
          return uVar3 & 0xffffffffffffff00;
        }
        local_f0 = (uint)local_f4[0];
        if (local_f0 == 5) {
          local_f8 = '\x01';
        }
        else if (local_f0 == 10) {
          puVar4 = local_b0;
          puVar6 = local_90;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        else if (local_f0 == 0xd) {
          puVar4 = (undefined *)FUN_140c630f0(local_b0,local_38);
          puVar6 = local_70;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        else if (local_f0 == 0x11) {
          local_f7 = '\x01';
        }
        else if (local_f0 == 0x32) {
          puVar4 = (undefined *)FUN_140c630f0(local_b0,local_28);
          puVar6 = local_80;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
      }
    }
    uVar3 = FUN_140d354c0(local_c8);
    if (uVar3 == 0) {
      do {
        lVar5 = FUN_140d354c0(local_90);
        if (lVar5 == 0) {
          puVar4 = local_80;
          puVar6 = local_58;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = local_70;
          puVar6 = local_48;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          cVar1 = FUN_140d22540(local_48,local_58);
          if ((cVar1 == '\0') && (local_f8 == local_f7)) {
            return 1;
          }
          return 0;
        }
        uVar3 = FUN_140d35710(local_90,local_ec);
      } while (((int)uVar3 != 0) && (uVar3 = (ulonglong)local_ec[0], local_ec[0] != 0x1d));
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d49fc0 name=FUN_140d49fc0 */

ulonglong FUN_140d49fc0(longlong *param_1,undefined *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar8;
  byte local_e8;
  char local_e7;
  char local_e6 [2];
  undefined2 local_e4 [2];
  undefined2 local_e0 [4];
  longlong local_d8;
  longlong local_d0;
  uint local_c8;
  undefined local_c0 [16];
  undefined8 local_b0;
  longlong local_a8;
  undefined local_a0 [8];
  undefined local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined local_80 [24];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  local_d8 = *param_1;
  cVar1 = FUN_140d272a0(param_3,local_c0,0xfe0d);
  if (cVar1 == '\0') {
    uVar6 = 1;
  }
  else {
    iVar2 = FUN_140d356c0(local_c0,&local_e7);
    if (iVar2 == 0) {
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                    ,CONCAT44(uVar8,0x203));
      *param_2 = 0x32;
      uVar6 = (ulonglong)param_2 & 0xffffffffffffff00;
    }
    else if (local_e7 == '\0') {
      iVar2 = FUN_140d35710(local_c0,local_e0);
      if ((((iVar2 != 0) && (iVar2 = FUN_140d35710(local_c0,local_e4), iVar2 != 0)) &&
          (iVar2 = FUN_140d356c0(local_c0,&local_e8), iVar2 != 0)) &&
         (((iVar2 = FUN_140d35a70(local_c0,local_80), iVar2 != 0 &&
           (iVar2 = FUN_140d35a70(local_c0,local_58), iVar2 != 0)) &&
          (lVar3 = FUN_140d354c0(local_c0), lVar3 == 0)))) {
        lVar3 = FUN_140c55c70(local_d8 + 0x68);
        FUN_140c57f50(local_98,lVar3 + 0x10);
        lVar3 = FUN_140c55c70(local_d8 + 0x68);
        uVar4 = FUN_140d4f070(local_a0,lVar3 + 0x1e8);
        FUN_140d4f0f0(param_1 + 0xbe,uVar4);
        FUN_140c56240(local_a0);
        FUN_140c57fb0(local_98);
        cVar1 = FUN_140c56050(param_1 + 0xbe);
        if (cVar1 == '\0') {
          lVar3 = *(longlong *)(local_d8 + 0x30);
          *(undefined4 *)(lVar3 + 0xd8) = 2;
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        }
        local_b0 = FUN_140c55c70(param_1 + 0xbe);
        local_d0 = FUN_140c57590(local_b0);
        local_90 = FUN_140d22ad0(local_b0);
        do {
          if (local_d0 == local_90) {
            lVar3 = *(longlong *)(local_d8 + 0x30);
            *(undefined4 *)(lVar3 + 0xd8) = 2;
            return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
          }
          local_a8 = local_d0;
          FUN_140d4f0c0(param_1 + 0x5a);
          local_c8 = (uint)local_e8;
          uVar4 = FUN_140c55c70(local_a8);
          lVar3 = FUN_140c55cd0(uVar4);
          if (local_c8 == *(byte *)(lVar3 + 0x43)) {
            puVar5 = (undefined *)FUN_140c630f0(local_80,local_38);
            puVar7 = local_68;
            for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            local_88 = FUN_140c55cd0(param_1 + 0x5a);
            uVar4 = FUN_140c55c70(local_a8);
            cVar1 = FUN_140d1f120(uVar4,local_88,local_e0[0],local_e4[0],local_68);
            if (cVar1 == '\0') goto LAB_140d4a2eb;
            puVar5 = (undefined *)FUN_140c630f0(local_58,local_28);
            puVar7 = local_48;
            for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            cVar1 = FUN_140d1fcf0(param_1,param_2,local_e6,param_1 + 0x49,param_3,local_48);
            if (cVar1 != '\0') {
              *(byte *)((longlong)param_1 + 0x62a) = local_e8;
              lVar3 = *(longlong *)(local_d8 + 0x30);
              *(undefined4 *)(lVar3 + 0xd8) = 1;
              return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            }
            if (local_e6[0] == '\0') {
              uVar6 = FUN_140c6c4e0(0x10,0,0x8a,
                                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                                    ,0x238);
              return uVar6 & 0xffffffffffffff00;
            }
            FUN_140c6c180();
            *param_2 = 0x32;
          }
          else {
LAB_140d4a2eb:
            FUN_140c6c180();
          }
          local_d0 = local_d0 + 8;
        } while( true );
      }
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                    ,CONCAT44(uVar8,0x214));
      *param_2 = 0x32;
      uVar6 = (ulonglong)param_2 & 0xffffffffffffff00;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}


/* address=140d4a410 name=FUN_140d4a410 */

ulonglong FUN_140d4a410(longlong *param_1,undefined *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char local_58 [8];
  undefined8 local_50;
  longlong local_48;
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [32];
  
  local_48 = *param_1;
  cVar1 = FUN_140d272a0(param_3,local_20,0);
  if (cVar1 == '\0') {
    uVar4 = 1;
  }
  else {
    iVar2 = FUN_140d35a70(local_20,local_30);
    if ((((iVar2 != 0) && (iVar2 = FUN_140d356c0(local_30,local_58), iVar2 != 0)) &&
        (iVar2 = FUN_140d35a70(local_30,local_40), iVar2 != 0)) &&
       ((lVar3 = FUN_140d354c0(local_30), lVar3 == 0 &&
        (lVar3 = FUN_140d354c0(local_20), lVar3 == 0)))) {
      if (((local_58[0] == '\0') &&
          ((lVar3 = FUN_140d354c0(local_40), lVar3 != 0 &&
           (uVar4 = FUN_140d354c0(local_40), uVar4 < 0x100)))) &&
         (iVar2 = FUN_140d35600(local_40), iVar2 == 0)) {
        local_50 = 0;
        iVar2 = FUN_140d35580(local_40,&local_50);
        if (iVar2 == 0) {
          *param_2 = 0x50;
          return (ulonglong)param_2 & 0xffffffffffffff00;
        }
        FUN_140c56a70(*(longlong *)(local_48 + 0x30) + 0x1f8,local_50);
        *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) | 2;
        return 1;
      }
      *param_2 = 0x70;
      return (ulonglong)param_2 & 0xffffffffffffff00;
    }
    *param_2 = 0x32;
    uVar4 = (ulonglong)param_2 & 0xffffffffffffff00;
  }
  return uVar4;
}


/* address=140d4a580 name=FUN_140d4a580 */

undefined8 FUN_140d4a580(longlong **param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined local_e8 [8];
  longlong *local_e0;
  undefined local_d8 [16];
  undefined local_c8 [8];
  undefined local_c0 [32];
  undefined local_a0 [24];
  undefined local_88 [120];
  
  local_e0 = *param_1;
  cVar1 = (**(code **)(*local_e0 + 0x18))(local_e0,local_c8);
  if (cVar1 == '\0') {
    uVar2 = 3;
  }
  else {
    cVar1 = FUN_140d40e90(local_e0,local_c8,1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      puVar3 = (undefined *)FUN_140c630f0(local_c0,local_a0);
      puVar5 = local_d8;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      cVar1 = FUN_140d26f30(local_e0,local_88,local_d8);
      if (cVar1 == '\0') {
        FUN_140c6c4e0(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                      ,0x285);
        FUN_140d55f00(local_e0,2,0x32);
        uVar2 = 0;
      }
      else {
        cVar1 = (**(code **)(*local_e0 + 0x28))(local_e0);
        if (cVar1 == '\0') {
          if ((*(byte *)((longlong)param_1[1] + 0xed) >> 6 & 1) == 0) {
            local_e8[0] = 0x32;
            cVar1 = FUN_140d49fc0(param_1,local_e8,local_88);
            if (cVar1 == '\0') {
              FUN_140d55f00(local_e0,2,local_e8[0]);
              uVar2 = 0;
            }
            else {
              cVar1 = FUN_140d40b20(param_1,local_c8,local_88);
              if (cVar1 == '\0') {
                FUN_140c6c4e0(0x10,0,0x44,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                              ,0x29f);
                uVar2 = 0;
              }
              else {
                cVar1 = FUN_140d4a410(param_1,local_e8,local_88);
                if (cVar1 == '\0') {
                  FUN_140d55f00(local_e0,2,local_e8[0]);
                  uVar2 = 0;
                }
                else {
                  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
                  uVar2 = 1;
                }
              }
            }
          }
          else {
            uVar2 = 6;
          }
        }
        else {
          FUN_140d55f00(local_e0,2,10);
          FUN_140c6c4e0(0x10,0,0xff,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                        ,0x28e);
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}


/* address=140d4a7d0 name=FUN_140d4a7d0 */

undefined8 FUN_140d4a7d0(longlong *param_1)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined local_c8 [8];
  longlong local_c0;
  int local_b8;
  undefined local_a8 [24];
  undefined2 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_58;
  longlong local_50;
  undefined local_38 [56];
  
  local_c0 = *param_1;
  cVar1 = FUN_140d40b20(param_1,local_38,local_a8);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar3 = FUN_140c55c70(local_c0 + 0x68);
  if (*(longlong *)(lVar3 + 0x118) != 0) {
    lVar3 = FUN_140c55c70(local_c0 + 0x68);
    local_b8 = (**(code **)(lVar3 + 0x118))(local_a8);
    if (local_b8 == -1) {
      FUN_140c6c4e0(0x10,0,0x85,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                    ,0x2bd);
      FUN_140d55f00(local_c0,2,0x28);
      return 0;
    }
    if (local_b8 == 0) {
      return 5;
    }
  }
  cVar1 = FUN_140c6d880(param_1,(longlong)param_1 + 0x1c,(longlong)param_1 + 0x1e);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    if (((*(byte *)(param_1[1] + 0xee) & 1) != 0) &&
       (cVar1 = FUN_140d49ce0(local_a8), cVar1 != '\0')) {
      *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) | 0x40;
    }
    local_c8[0] = 0x32;
    cVar1 = FUN_140d494a0(param_1,local_c8,local_a8);
    if (cVar1 == '\0') {
      FUN_140d55f00(local_c0,2,local_c8[0]);
      uVar4 = 0;
    }
    else {
      *(undefined2 *)((longlong)param_1 + 0x624) = local_90;
      if (local_80 == 0x20) {
        FUN_140d48f20(*(longlong *)(local_c0 + 0x30) + 0x30,local_88,0x20);
        lVar3 = FUN_140d48ee0(local_58,0,local_50);
        if ((lVar3 == 0) || ((uVar2 = FUN_140c6de20(local_c0), 0x303 < uVar2 && (local_50 != 1)))) {
          FUN_140c6c4e0(0x10,0,0x100,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                        ,0x2e4);
          FUN_140d55f00(local_c0,2,0x2f);
          uVar4 = 0;
        }
        else {
          cVar1 = FUN_140d286a0(param_1,local_a8);
          if (cVar1 == '\0') {
            FUN_140c6c4e0(0x10,0,0xbe,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                          ,0x2eb);
            uVar4 = 0;
          }
          else {
            *(undefined4 *)((longlong)param_1 + 0x14) = 3;
            uVar4 = 1;
          }
        }
      }
      else {
        FUN_140c6c4e0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                      ,0x2d8);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


/* address=140d4aab0 name=FUN_140d4aab0 */

undefined8 FUN_140d4aab0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_c8;
  undefined local_a8 [48];
  undefined local_78 [120];
  
  lVar1 = *param_1;
  lVar5 = FUN_140c55c70(param_1[1] + 0x20);
  if (*(longlong *)(lVar5 + 0x48) != 0) {
    lVar5 = FUN_140c55c70(param_1[1] + 0x20);
    lVar6 = FUN_140c55c70(param_1[1] + 0x20);
    iVar4 = (**(code **)(lVar6 + 0x48))(lVar1,*(undefined8 *)(lVar5 + 0x50));
    if (iVar4 == 0) {
      FUN_140c6c4e0(0x10,0,0x7e,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                    ,0x2fa);
      FUN_140d55f00(lVar1,2,0x50);
      return 0;
    }
    if (iVar4 < 0) {
      return 8;
    }
  }
  cVar2 = FUN_140c72ee0(param_1);
  if (cVar2 == '\0') {
    uVar7 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xc4) < '\0') &&
       (lVar5 = FUN_140c55c70(lVar1 + 0x68), *(longlong *)(lVar5 + 0x210) != 0)) {
      lVar5 = FUN_140c55c70(lVar1 + 0x68);
      lVar6 = FUN_140c55c70(lVar1 + 0x68);
      iVar4 = (**(code **)(lVar6 + 0x210))(lVar1,*(undefined8 *)(lVar5 + 0x218));
      if (iVar4 != 0) {
        if (iVar4 != 3) {
          FUN_140c6c4e0(0x10,0,0x121,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                        ,0x311);
          FUN_140d55f00(lVar1,2,0x50);
          return 0;
        }
        *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0x7f;
      }
    }
    uVar3 = FUN_140c6de20(lVar1);
    if (uVar3 < 0x304) {
      if (*(int *)(*(longlong *)(lVar1 + 0x30) + 0xd8) == 1) {
        FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",800);
      }
      *(undefined4 *)(*(longlong *)(lVar1 + 0x30) + 0x100) = 3;
      cVar2 = FUN_140d40b20(param_1,local_a8,local_78);
      if (cVar2 == '\0') {
        uVar7 = 0;
      }
      else {
        cVar2 = FUN_140c56050(param_1[1] + 0x18);
        if (cVar2 == '\0') {
          lVar5 = FUN_140c55c70(lVar1 + 0x68);
          local_c8 = FUN_140c55c70(lVar5 + 0x28);
        }
        else {
          local_c8 = FUN_140c55c70(param_1[1] + 0x18);
        }
        lVar5 = FUN_140d49990(param_1,local_78,local_c8);
        param_1[0xc0] = lVar5;
        if (param_1[0xc0] == 0) {
          FUN_140c6c4e0(0x10,0,0xb8,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                        ,0x331);
          FUN_140d55f00(lVar1,2,0x28);
          uVar7 = 0;
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0x14) = 5;
          uVar7 = 1;
        }
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x14) = 4;
      uVar7 = 1;
    }
  }
  return uVar7;
}


/* address=140d4ae30 name=FUN_140d4ae30 */

int FUN_140d4ae30(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140dceba0(param_1);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x14) = 0x14;
    iVar1 = 1;
  }
  return iVar1;
}


/* address=140d4ae70 name=FUN_140d4ae70 */

int FUN_140d4ae70(longlong **param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  byte local_128;
  byte local_127;
  undefined local_126;
  undefined local_125 [5];
  longlong *local_120;
  undefined local_118 [8];
  int local_110;
  int local_10c;
  int local_108;
  uint local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  ulonglong local_e8;
  undefined local_d8 [16];
  undefined local_c8 [8];
  undefined local_c0 [32];
  undefined local_a0 [24];
  undefined local_88 [48];
  undefined8 local_58;
  undefined local_50;
  
  local_120 = *param_1;
  cVar1 = (**(code **)(*local_120 + 0x18))(local_120,local_c8);
  if (cVar1 == '\0') {
    return 3;
  }
  puVar4 = (undefined *)FUN_140c630f0(local_c0,local_a0);
  puVar7 = local_d8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  cVar1 = FUN_140d26f30(local_120,local_88,local_d8);
  if (cVar1 == '\0') {
    return 0;
  }
  *(undefined *)((longlong)param_1 + 0x64b) = local_50;
  if (0x20 < *(byte *)((longlong)param_1 + 0x64b)) {
    FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x353);
  }
  FUN_140d48f20((longlong)param_1 + 0x62b,local_58,*(undefined *)((longlong)param_1 + 0x64b));
  FUN_140c57b60(local_118);
  local_127 = 0;
  local_128 = 0;
  puVar4 = local_88;
  local_110 = FUN_140c60950(param_1,local_118,&local_127,&local_128,puVar4);
  uVar8 = (undefined4)((ulonglong)puVar4 >> 0x20);
  if (local_110 != 1) {
    local_10c = local_110;
    FUN_140c56300(local_118);
    return local_10c;
  }
  cVar1 = FUN_140c56050(local_118);
  if (cVar1 != '\0') {
    lVar6 = FUN_140c55c70(local_118);
    if (((*(byte *)(lVar6 + 0x1a8) & 1) != 0) &&
       ((*(byte *)((longlong)param_1 + 0x622) >> 1 & 1) == 0)) {
      FUN_140c6c4e0(0x10,0,0xcc,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.c"
                    ,CONCAT44(uVar8,0x363));
      FUN_140d55f00(local_120,2,0x28);
      local_108 = 0;
      FUN_140c56300(local_118);
      return local_108;
    }
    uVar5 = FUN_140c55c70(local_118);
    cVar1 = FUN_140c606d0(param_1,uVar5);
    if (cVar1 != '\0') {
      local_104 = (uint)(*(byte *)((longlong)param_1 + 0x622) >> 1 & 1);
      lVar6 = FUN_140c55c70(local_118);
      if (local_104 == (*(byte *)(lVar6 + 0x1a8) & 1)) goto LAB_140d4b0e1;
    }
    FUN_140c56340(local_118,0);
  }
LAB_140d4b0e1:
  cVar1 = FUN_140c56050(local_118);
  if (cVar1 == '\0') {
    *(byte *)((longlong)param_1 + 0x622) =
         *(byte *)((longlong)param_1 + 0x622) & 0xfe | local_127 & 1;
    FUN_140c608f0(local_120,0);
    cVar1 = FUN_140c5fb60(param_1);
    if (cVar1 == '\0') {
      local_100 = 0;
      FUN_140c56300(local_118);
      return local_100;
    }
    if (((*(byte *)((longlong)param_1 + 0x622) & 1) == 0) &&
       (lVar6 = FUN_140c55c70(local_120 + 0xd), (*(uint *)(lVar6 + 0x5c) & 2) != 0)) {
      lVar6 = FUN_140c55c70(param_1 + 0xbc);
      *(undefined *)(lVar6 + 0x3b) = 0x20;
      lVar6 = FUN_140c55c70(param_1 + 0xbc);
      local_e8 = (ulonglong)*(byte *)(lVar6 + 0x3b);
      lVar6 = FUN_140c55c70(param_1 + 0xbc);
      FUN_140ca8a50(lVar6 + 0x3c,local_e8);
    }
  }
  else {
    *(byte *)((longlong)param_1 + 0x622) =
         *(byte *)((longlong)param_1 + 0x622) & 0xfe | local_128 & 1;
    uVar5 = FUN_140c55cd0(local_118);
    FUN_140c580d0(local_120 + 0xb,uVar5);
    *(byte *)(local_120[6] + 0xdc) = *(byte *)(local_120[6] + 0xdc) | 0x40;
    *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) | 0x80;
  }
  lVar6 = FUN_140c55c70(local_120 + 0xd);
  if (*(longlong *)(lVar6 + 0x120) != 0) {
    lVar6 = FUN_140c55c70(local_120 + 0xd);
    iVar3 = (**(code **)(lVar6 + 0x120))(local_88);
    if (iVar3 == 0) {
      FUN_140c6c4e0(0x10,0,0x85,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                    ,CONCAT44(uVar8,0x389));
      FUN_140d55f00(local_120,2,0x50);
      local_fc = 0;
      FUN_140c56300(local_118);
      return local_fc;
    }
  }
  cVar1 = operator==<>(local_120 + 0xb,0);
  if (cVar1 != '\0') {
    lVar6 = FUN_140c55c70(param_1 + 0xbc);
    *(longlong **)(lVar6 + 200) = param_1[0xc0];
    local_126 = (*(byte *)((longlong)param_1[1] + 0xec) & 1) != 0;
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xdf | local_126 << 5;
    if (((*(byte *)((longlong)param_1[1] + 0xec) & 4) != 0) &&
       ((*(byte *)((longlong)param_1 + 0x623) & 1) != 0)) {
      *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xdf;
    }
    cVar1 = FUN_140c700b0(param_1[0xc0]);
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xdf;
    }
    if ((*(byte *)(param_1 + 0xc4) >> 5 & 1) == 0) {
      lVar6 = FUN_140c55c70(param_1 + 0xbc);
      *(undefined4 *)(lVar6 + 0xb0) = 0;
    }
  }
  local_125[0] = 0x32;
  cVar1 = FUN_140d267c0(param_1,local_125,local_88);
  if (cVar1 == '\0') {
    FUN_140d55f00(local_120,2,local_125[0]);
    local_f8 = 0;
    FUN_140c56300(local_118);
  }
  else {
    uVar2 = FUN_140c6de20(local_120);
    cVar1 = FUN_140dbfa30(param_1 + 0x33,uVar2,param_1[0xc0]);
    if ((cVar1 == '\0') || (cVar1 = FUN_140d426e0(param_1,local_c8), cVar1 == '\0')) {
      FUN_140d55f00(local_120,2,0x50);
      local_f4 = 0;
      FUN_140c56300(local_118);
      local_f8 = local_f4;
    }
    else {
      if (((*(byte *)(param_1 + 0xc4) >> 5 & 1) == 0) &&
         ((*(byte *)((longlong)param_1 + 0x622) >> 3 & 1) == 0)) {
        FUN_140dbfdc0(param_1 + 0x33);
      }
      (**(code **)(*local_120 + 0x20))(local_120);
      *(undefined4 *)((longlong)param_1 + 0x14) = 6;
      local_f0 = 1;
      FUN_140c56300(local_118);
      local_f8 = local_f0;
    }
  }
  return local_f8;
}


/* address=140d4b5f0 name=FUN_140d4b5f0 */

void FUN_140d4b5f0(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined local_28 [24];
  
  uVar1 = FUN_140c55f80(param_2);
  puVar2 = (undefined *)FUN_140d22630(param_1,local_28,uVar1);
  puVar6 = param_1;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar1 = FUN_140c55f80(param_2);
  uVar3 = FUN_140c55c70(param_2);
  uVar4 = FUN_140c55c70(param_1);
  FUN_140d48f20(uVar4,uVar3,uVar1);
  return;
}


/* address=140d4b680 name=FUN_140d4b680 */

void FUN_140d4b680(longlong **param_1)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined auStack_278 [32];
  undefined4 local_258;
  longlong *local_248;
  longlong local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined local_228 [16];
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined local_1c8 [48];
  undefined local_198 [16];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [16];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [48];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [48];
  undefined4 local_38 [4];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_278;
  local_248 = *param_1;
  if (((*(byte *)((longlong)param_1 + 0x623) & 1) != 0) &&
     ((*(uint *)((longlong)param_1[0xc0] + 0x14) & 2) == 0)) {
    *(byte *)((longlong)param_1 + 0x623) = *(byte *)((longlong)param_1 + 0x623) & 0xfe;
  }
  cVar1 = FUN_140c57ae0(local_248 + 0xb,0);
  if ((cVar1 != '\0') && (lVar5 = FUN_140c55c70(local_248 + 0xb), *(char *)(lVar5 + 0x168) == '\0'))
  {
    *(byte *)((longlong)param_1 + 0x623) = *(byte *)((longlong)param_1 + 0x623) & 0xfe;
  }
  local_240 = FUN_140c55c70(param_1 + 0xc3);
  if (((local_240 == 0) || ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) ||
     (lVar5 = FUN_140c55f80(local_240), lVar5 != 0x20)) {
    FUN_140c54100(local_248,local_38);
    FUN_140d48fb0(local_248[6] + 0x10,local_38[0]);
    iVar4 = FUN_140ca8a50(local_248[6] + 0x14,0x1c);
    if (iVar4 == 0) goto LAB_140d4bdaf;
    if ((local_240 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) {
      local_218 = local_78;
      puVar7 = (undefined *)FUN_140c57ab0(local_218,local_248[6] + 0x10);
      puVar8 = local_198;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      cVar1 = FUN_140c566e0(local_240,local_198);
      if (cVar1 == '\0') goto LAB_140d4bdaf;
    }
  }
  else {
    uVar6 = FUN_140c55c70(local_240);
    FUN_140d48f20(local_248[6] + 0x10,uVar6,0x20);
  }
  cVar1 = FUN_140c6da90(param_1,0x304);
  if (cVar1 != '\0') {
    sVar2 = FUN_140c6de20(local_248);
    if (sVar2 == 0x303) {
      if ((*(byte *)((longlong)param_1 + 0x622) >> 6 & 1) == 0) {
        local_200 = local_d8;
        local_1f8 = local_c8;
        puVar7 = (undefined *)FUN_140d48cc0(local_200,&DAT_1410719e8);
        puVar8 = local_168;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar7 = (undefined *)FUN_140c57ab0(local_1f8,local_248[6] + 0x10);
        puVar8 = local_158;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_140d4b5f0(local_158,local_168);
      }
      else {
        local_210 = local_f8;
        local_208 = local_e8;
        puVar7 = (undefined *)FUN_140d48cc0(local_210,&DAT_1410719f0);
        puVar8 = local_188;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar7 = (undefined *)FUN_140c57ab0(local_208,local_248[6] + 0x10);
        puVar8 = local_178;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_140d4b5f0(local_178,local_188);
      }
    }
    else {
      local_1f0 = local_b8;
      local_1e8 = local_a8;
      puVar7 = (undefined *)FUN_140d48cc0(local_1f0,"DOWNGRD");
      puVar8 = local_148;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar7 = (undefined *)FUN_140c57ab0(local_1e8,local_248[6] + 0x10);
      puVar8 = local_138;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_140d4b5f0(local_138,local_148);
    }
  }
  FUN_140c55f20(local_228);
  cVar1 = FUN_140c57ae0(local_248 + 0xb,0);
  if (cVar1 == '\0') {
    lVar5 = FUN_140c55c70(param_1 + 0xbc);
    local_1e0 = (ulonglong)*(byte *)(lVar5 + 0x3b);
    lVar5 = FUN_140c55c70(param_1 + 0xbc);
    puVar7 = (undefined *)FUN_140c55fe0(local_88,lVar5 + 0x3c,local_1e0);
    puVar8 = local_228;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar7 = (undefined *)
             FUN_140c55fe0(local_98,(longlong)param_1 + 0x62b,
                           *(undefined *)((longlong)param_1 + 0x64b));
    puVar8 = local_228;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  FUN_140c57a60(local_128);
  uVar6 = FUN_140c55cd0(local_128);
  local_1d8 = *local_248;
  cVar1 = (**(code **)(local_1d8 + 0x58))(local_248,uVar6,local_1c8,2);
  if (((cVar1 != '\0') &&
      (iVar4 = FUN_140d38120(local_1c8,*(undefined2 *)(local_248 + 2)), iVar4 != 0)) &&
     ((iVar4 = FUN_140d37f00(local_1c8,local_248[6] + 0x10,0x20), iVar4 != 0 &&
      (iVar4 = FUN_140d37db0(local_1c8,local_68), iVar4 != 0)))) {
    local_1d0 = FUN_140c55f80(local_228);
    uVar6 = FUN_140c55c70(local_228);
    iVar4 = FUN_140d37f00(local_68,uVar6,local_1d0);
    if (iVar4 != 0) {
      uVar3 = FUN_140c6e370(param_1[0xc0]);
      iVar4 = FUN_140d38120(local_1c8,uVar3);
      if (((iVar4 != 0) && (iVar4 = FUN_140d380f0(local_1c8,0), iVar4 != 0)) &&
         (cVar1 = FUN_140d28500(param_1,local_1c8), cVar1 != '\0')) {
        uVar6 = FUN_140c55cd0(local_128);
        cVar1 = FUN_140d42620(local_248,uVar6);
        if (cVar1 != '\0') {
          cVar1 = FUN_140c57ae0(local_248 + 0xb,0);
          if (cVar1 == '\0') {
            *(undefined4 *)((longlong)param_1 + 0x14) = 7;
          }
          else {
            if ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0) {
              local_234 = 0x11;
              FUN_140c57a90(local_128);
              goto LAB_140d4bdaf;
            }
            *(undefined4 *)((longlong)param_1 + 0x14) = 0x13;
          }
          local_230 = 1;
          FUN_140c57a90(local_128);
          goto LAB_140d4bdaf;
        }
      }
    }
  }
  local_258 = 0x410;
  FUN_140c6c4e0(0x10,0,0x44,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
               );
  local_238 = 0;
  FUN_140c57a90(local_128);
LAB_140d4bdaf:
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_278);
  return;
}


/* address=140d4bdd0 name=FUN_140d4bdd0 */

undefined4 FUN_140d4bdd0(longlong **param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *_Str;
  undefined *puVar5;
  undefined *puVar6;
  char local_228;
  short local_224 [2];
  longlong local_220;
  longlong *local_218;
  uint local_210;
  uint local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined local_1d8 [48];
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  size_t local_190;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  size_t local_170;
  undefined local_168 [8];
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  longlong local_148;
  longlong **local_140;
  longlong local_138;
  undefined local_130 [56];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [48];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [48];
  undefined local_48 [56];
  
  local_218 = *param_1;
  FUN_140c57a60(local_1d8);
  cVar1 = FUN_140c700b0(param_1[0xc0]);
  if (cVar1 != '\0') {
    cVar1 = FUN_140c71ef0(param_1);
    if (cVar1 == '\0') {
      FUN_140c6c4e0(0x10,0,0xae,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                    ,0x426);
      local_208 = 0;
      FUN_140c57a90(local_1d8);
      return local_208;
    }
    cVar1 = FUN_140d42460(param_1);
    if (cVar1 == '\0') {
      local_204 = 0;
      FUN_140c57a90(local_1d8);
      return local_204;
    }
    if ((*(byte *)(param_1 + 0xc4) >> 6 & 1) != 0) {
      uVar3 = FUN_140c55cd0(local_1d8);
      local_138 = *local_218;
      cVar1 = (**(code **)(local_138 + 0x58))(local_218,uVar3,local_78,0x16);
      if (((cVar1 == '\0') || (iVar2 = FUN_140d380f0(local_78,1), iVar2 == 0)) ||
         (iVar2 = FUN_140d37e10(local_78,local_48), iVar2 == 0)) {
LAB_140d4bfd7:
        FUN_140c6c4e0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                      ,0x439);
        local_200 = 0;
        FUN_140c57a90(local_1d8);
        return local_200;
      }
      lVar4 = FUN_140c55c70(param_1[1] + 4);
      uVar3 = FUN_140c55c70(lVar4 + 0x68);
      local_188 = FUN_140c760d0(uVar3);
      lVar4 = FUN_140c55c70(param_1[1] + 4);
      uVar3 = FUN_140c55c70(lVar4 + 0x68);
      uVar3 = FUN_140c760b0(uVar3);
      iVar2 = FUN_140d37f00(local_48,uVar3,local_188);
      if (iVar2 == 0) goto LAB_140d4bfd7;
      uVar3 = FUN_140c55cd0(local_1d8);
      cVar1 = FUN_140d42620(local_218,uVar3);
      if (cVar1 == '\0') goto LAB_140d4bfd7;
    }
  }
  local_20c = *(uint *)((longlong)param_1[0xc0] + 0x14);
  local_210 = *(uint *)(param_1[0xc0] + 3);
  cVar1 = FUN_140c700f0(param_1[0xc0]);
  if ((cVar1 == '\0') &&
     (((local_210 & 4) == 0 || (cVar1 = FUN_140c56050(param_1[1] + 7), cVar1 == '\0')))) {
LAB_140d4c801:
    *(undefined4 *)((longlong)param_1 + 0x14) = 8;
    local_1dc = 1;
    FUN_140c57a90(local_1d8);
    local_1fc = local_1dc;
  }
  else {
    uVar3 = FUN_140c55cd0(local_1d8);
    iVar2 = FUN_140d376f0(uVar3,0xc0);
    if (iVar2 != 0) {
      local_180 = local_218[6] + 0x30;
      uVar3 = FUN_140c55cd0(local_1d8);
      iVar2 = FUN_140d37f00(uVar3,local_180,0x20);
      if (iVar2 != 0) {
        local_178 = local_218[6] + 0x10;
        uVar3 = FUN_140c55cd0(local_1d8);
        iVar2 = FUN_140d37f00(uVar3,local_178,0x20);
        if (iVar2 != 0) {
          if ((local_210 & 4) != 0) {
            cVar1 = operator==<>(param_1[1] + 7,0);
            if (cVar1 == '\0') {
              _Str = (char *)FUN_140c55c70(param_1[1] + 7);
              local_190 = strlen(_Str);
            }
            else {
              local_190 = 0;
            }
            local_170 = local_190;
            uVar3 = FUN_140c55cd0(local_1d8);
            iVar2 = FUN_140d37de0(uVar3,local_130);
            if (iVar2 == 0) {
LAB_140d4c215:
              local_1f8 = 0;
              FUN_140c57a90(local_1d8);
              return local_1f8;
            }
            uVar3 = FUN_140c55c70(param_1[1] + 7);
            iVar2 = FUN_140d37f00(local_130,uVar3,local_170);
            if (iVar2 == 0) goto LAB_140d4c215;
          }
          if ((local_20c & 2) == 0) {
            if ((local_20c & 4) == 0) {
              FID_conflict__assert((wchar_t *)"a",(wchar_t *)"D",0x48f);
            }
          }
          else {
            cVar1 = FUN_140d27a30(param_1,local_224);
            if (cVar1 == '\0') {
              FUN_140c6c4e0(0x10,0,0x44,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                            ,0x45e);
              FUN_140d55f00(local_218,2,0x28);
              local_1f4 = 0;
              FUN_140c57a90(local_1d8);
              return local_1f4;
            }
            lVar4 = FUN_140c55c70(param_1 + 0xbc);
            *(short *)(lVar4 + 6) = local_224[0];
            uVar3 = FUN_140c76870(local_168,local_224[0]);
            FUN_140d31560(param_1 + 0x31,uVar3);
            FUN_140c7a600(local_168);
            cVar1 = FUN_140c56050(param_1 + 0x31);
            if (cVar1 == '\0') {
LAB_140d4c392:
              local_1f0 = 0;
              FUN_140c57a90(local_1d8);
              return local_1f0;
            }
            uVar3 = FUN_140c55cd0(local_1d8);
            iVar2 = FUN_140d380f0(uVar3,3);
            if (iVar2 == 0) goto LAB_140d4c392;
            uVar3 = FUN_140c55cd0(local_1d8);
            iVar2 = FUN_140d38120(uVar3,local_224[0]);
            if (iVar2 == 0) goto LAB_140d4c392;
            uVar3 = FUN_140c55cd0(local_1d8);
            iVar2 = FUN_140d37db0(uVar3,local_130);
            if (iVar2 == 0) goto LAB_140d4c392;
            local_220 = FUN_140c55c70(param_1 + 0xc3);
            local_228 = '\0';
            if (((local_220 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) == 0)) &&
               ((*(short *)(local_220 + 0xb8) == local_224[0] &&
                ((cVar1 = FUN_140c55f90(local_220 + 0xc0), cVar1 == '\0' &&
                 (cVar1 = FUN_140c55f90(local_220 + 0xd0), cVar1 == '\0')))))) {
              puVar5 = (undefined *)FUN_140c71580(local_98,local_220 + 0xd0);
              puVar6 = local_f8;
              for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              FUN_140c57dd0(local_e8,local_f8);
              local_1a8 = (longlong *)FUN_140c55c70(param_1 + 0x31);
              local_228 = (**(code **)(*local_1a8 + 0x30))(local_1a8,local_e8);
            }
            if (local_228 == '\0') {
              local_1a0 = (longlong *)FUN_140c55c70(param_1 + 0x31);
              cVar1 = (**(code **)(*local_1a0 + 0x10))(local_1a0,local_130);
              if (cVar1 == '\0') {
                local_1e8 = 0;
                FUN_140c57a90(local_1d8);
                return local_1e8;
              }
              if ((local_220 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) {
                FUN_140c57a60(local_c8);
                local_158 = FUN_140d37cf0(local_130);
                uVar3 = FUN_140d37c70(local_130);
                puVar5 = (undefined *)FUN_140c55fe0(local_88,uVar3,local_158);
                puVar6 = local_d8;
                for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
                  *puVar6 = *puVar5;
                  puVar5 = puVar5 + 1;
                  puVar6 = puVar6 + 1;
                }
                cVar1 = FUN_140c566e0(local_220 + 0xc0,local_d8);
                if (cVar1 == '\0') {
LAB_140d4c737:
                  local_1e4 = 0;
                  FUN_140c57a90(local_c8);
                  FUN_140c57a90(local_1d8);
                  return local_1e4;
                }
                uVar3 = FUN_140c55cd0(local_c8);
                iVar2 = FUN_140d376f0(uVar3,0x20);
                if (iVar2 == 0) goto LAB_140d4c737;
                local_198 = (longlong *)FUN_140c55c70(param_1 + 0x31);
                uVar3 = FUN_140c55cd0(local_c8);
                local_150 = *local_198;
                cVar1 = (**(code **)(local_150 + 0x28))(local_198,uVar3);
                if (cVar1 == '\0') goto LAB_140d4c737;
                local_148 = local_220 + 0xd0;
                uVar3 = FUN_140c55cd0(local_c8);
                cVar1 = FUN_140c535c0(uVar3,local_148);
                if (cVar1 == '\0') goto LAB_140d4c737;
                *(short *)(local_220 + 0xb8) = local_224[0];
                FUN_140c57a90(local_c8);
              }
            }
            else {
              local_160 = FUN_140c55f80(local_220 + 0xc0);
              uVar3 = FUN_140c55c70(local_220 + 0xc0);
              iVar2 = FUN_140d37f00(local_130,uVar3,local_160);
              if (iVar2 == 0) {
                local_1ec = 0;
                FUN_140c57a90(local_1d8);
                return local_1ec;
              }
            }
          }
          local_140 = param_1 + 0xb3;
          uVar3 = FUN_140c55cd0(local_1d8);
          cVar1 = FUN_140c535c0(uVar3,local_140);
          if (cVar1 == '\0') {
            local_1e0 = 0;
            FUN_140c57a90(local_1d8);
            return local_1e0;
          }
          goto LAB_140d4c801;
        }
      }
    }
    local_1fc = 0;
    FUN_140c57a90(local_1d8);
  }
  return local_1fc;
}


/* address=140d4c840 name=FUN_140d4c840 */

undefined4 FUN_140d4c840(longlong **param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 in_stack_fffffffffffffeb8;
  undefined2 uVar9;
  undefined2 local_138 [2];
  int local_134;
  longlong *local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_100;
  undefined local_f8 [48];
  longlong local_c8;
  longlong local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined local_98 [16];
  undefined local_88 [48];
  undefined local_58 [16];
  undefined local_48 [56];
  
  uVar9 = (undefined2)((uint)in_stack_fffffffffffffeb8 >> 0x10);
  local_130 = *param_1;
  lVar4 = FUN_140c55f80(param_1 + 0xb3);
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 9;
    return 1;
  }
  FUN_140c57a60(local_f8);
  uVar5 = FUN_140c55cd0(local_f8);
  local_c8 = *local_130;
  cVar1 = (**(code **)(local_c8 + 0x58))(local_130,uVar5,local_88,0xc);
  if ((cVar1 != '\0') && (uVar6 = FUN_140c55f80(param_1 + 0xb3), 0x3f < uVar6)) {
    local_c0 = FUN_140c55f80(param_1 + 0xb3);
    local_c0 = local_c0 + -0x40;
    lVar4 = FUN_140c55c70(param_1 + 0xb3);
    iVar3 = FUN_140d37f00(local_88,lVar4 + 0x40,local_c0);
    if (iVar3 != 0) {
      cVar1 = FUN_140c700b0(param_1[0xc0]);
      if (cVar1 != '\0') {
        cVar1 = FUN_140c7be70(param_1);
        if (cVar1 == '\0') {
          FUN_140d55f00(local_130,2,0x50);
          local_124 = 0;
          FUN_140c57a90(local_f8);
          return local_124;
        }
        cVar1 = FUN_140d27430(param_1,local_138);
        if (cVar1 == '\0') {
          FUN_140d55f00(local_130,2,0x28);
          local_120 = 0;
          FUN_140c57a90(local_f8);
          return local_120;
        }
        uVar2 = FUN_140c6de20(local_130);
        if ((0x302 < uVar2) && (iVar3 = FUN_140d38120(local_88,local_138[0]), iVar3 == 0)) {
          FUN_140c6c4e0(0x10,0,0x44,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                        ,0x4bd);
          FUN_140d55f00(local_130,2,0x50);
          local_11c = 0;
          FUN_140c57a90(local_f8);
          return local_11c;
        }
        uVar5 = FUN_140c55c70(param_1 + 0xba);
        iVar3 = FUN_140d31a60(uVar5);
        local_100 = (longlong)iVar3;
        iVar3 = FUN_140d37de0(local_88,local_48);
        if ((iVar3 == 0) || (iVar3 = FUN_140d38010(local_48,&local_b0,local_100), iVar3 == 0)) {
          local_118 = 0;
          FUN_140c57a90(local_f8);
          return local_118;
        }
        local_b8 = local_58;
        puVar7 = (undefined *)FUN_140c57dd0(local_b8,param_1 + 0xb3);
        puVar8 = local_98;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        local_134 = FUN_140c7bee0(param_1,local_b0,local_a8,local_100,CONCAT22(uVar9,local_138[0]),
                                  local_98);
        if (local_134 == 0) {
          iVar3 = FUN_140d38070(local_48,local_a8[0]);
          if (iVar3 == 0) {
            local_114 = 0;
            FUN_140c57a90(local_f8);
            return local_114;
          }
        }
        else {
          if (local_134 == 1) {
            local_10c = 9;
            FUN_140c57a90(local_f8);
            return local_10c;
          }
          if (local_134 == 2) {
            local_110 = 0;
            FUN_140c57a90(local_f8);
            return local_110;
          }
        }
      }
      *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) | 0x80;
      uVar5 = FUN_140c55cd0(local_f8);
      cVar1 = FUN_140d42620(local_130,uVar5);
      if (cVar1 == '\0') {
        local_108 = 0;
        FUN_140c57a90(local_f8);
        return local_108;
      }
      FUN_140c56520(param_1 + 0xb3);
      *(undefined4 *)((longlong)param_1 + 0x14) = 9;
      local_104 = 1;
      FUN_140c57a90(local_f8);
      return local_104;
    }
  }
  local_128 = 0;
  FUN_140c57a90(local_f8);
  return local_128;
}


/* address=140d4ccb0 name=FUN_140d4ccb0 */

undefined4 FUN_140d4ccb0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined local_d0 [48];
  undefined local_a0 [48];
  undefined local_70 [48];
  undefined local_40 [64];
  
  plVar1 = *param_1;
  if ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0) {
    return 0x11;
  }
  FUN_140c57a60(local_d0);
  if ((*(byte *)(param_1 + 0xc4) >> 5 & 1) == 0) {
LAB_140d4ce63:
    uVar5 = FUN_140c55cd0(local_d0);
    cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar5,local_a0,0xe);
    if (cVar2 != '\0') {
      uVar5 = FUN_140c55cd0(local_d0);
      cVar2 = FUN_140d42620(plVar1,uVar5);
      if (cVar2 != '\0') {
        *(undefined4 *)((longlong)param_1 + 0x14) = 10;
        FUN_140c57a90(local_d0);
        return 4;
      }
    }
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                  ,0x502);
    FUN_140c57a90(local_d0);
  }
  else {
    uVar5 = FUN_140c55cd0(local_d0);
    cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar5,local_a0,0xd);
    if (cVar2 != '\0') {
      iVar4 = FUN_140d37db0(local_a0,local_70);
      if (iVar4 != 0) {
        iVar4 = FUN_140d380f0(local_70,1);
        if ((((iVar4 != 0) && (iVar4 = FUN_140d380f0(local_70,0x40), iVar4 != 0)) &&
            ((uVar3 = FUN_140c6de20(plVar1), uVar3 < 0x303 ||
             ((iVar4 = FUN_140d37de0(local_a0,local_40), iVar4 != 0 &&
              (cVar2 = FUN_140d27780(param_1,local_40), cVar2 != '\0')))))) &&
           (cVar2 = FUN_140c72be0(param_1,local_a0), cVar2 != '\0')) {
          uVar5 = FUN_140c55cd0(local_d0);
          cVar2 = FUN_140d42620(plVar1,uVar5);
          if (cVar2 != '\0') goto LAB_140d4ce63;
        }
      }
    }
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                  ,0x4fa);
    FUN_140c57a90(local_d0);
  }
  return 0;
}


/* address=140d4cf30 name=FUN_140d4cf30 */

undefined8 FUN_140d4cf30(longlong **param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined local_88 [8];
  longlong *local_80;
  longlong local_78;
  byte *local_70;
  longlong local_68;
  longlong **local_60;
  undefined8 local_58;
  undefined local_50 [16];
  undefined local_40 [8];
  undefined local_38 [40];
  
  local_80 = *param_1;
  if (((*(byte *)((longlong)param_1 + 0x622) >> 3 & 1) == 0) ||
     (*(int *)((longlong)param_1[0xc0] + 0x14) != 2)) {
    if ((*(byte *)(param_1 + 0xc4) >> 5 & 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0xb;
      uVar2 = 1;
    }
    else {
      cVar1 = (**(code **)(*local_80 + 0x18))(local_80,local_40);
      if (cVar1 == '\0') {
        uVar2 = 3;
      }
      else {
        cVar1 = FUN_140d40e90(local_80,local_40,0xb);
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          cVar1 = FUN_140d426e0(param_1,local_40);
          if (cVar1 == '\0') {
            uVar2 = 0;
          }
          else {
            puVar4 = local_38;
            puVar5 = local_50;
            for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
            local_88[0] = 0x32;
            if ((*(byte *)((longlong)param_1[1] + 0xed) >> 5 & 1) == 0) {
              local_78 = 0;
            }
            else {
              local_78 = FUN_140c55c70(param_1 + 0xbc);
              local_78 = local_78 + 0x108;
            }
            local_68 = FUN_140c55c70(local_80 + 0xd);
            local_60 = param_1 + 0xbb;
            lVar3 = FUN_140c55c70(param_1 + 0xbc);
            puVar4 = local_50;
            cVar1 = FUN_140c71f90(local_88,lVar3 + 0x88,local_60,local_78,puVar4,
                                  *(undefined8 *)(local_68 + 0x200));
            uVar6 = (undefined4)((ulonglong)puVar4 >> 0x20);
            if (cVar1 == '\0') {
              FUN_140d55f00(local_80,2,local_88[0]);
              uVar2 = 0;
            }
            else {
              lVar3 = FUN_140d354c0(local_50);
              if (lVar3 == 0) {
                local_58 = FUN_140c55c70(param_1 + 0xbc);
                lVar3 = FUN_140c55c70(local_80 + 0xd);
                cVar1 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x30))(local_58);
                if (cVar1 != '\0') {
                  lVar3 = FUN_140c55c70(param_1 + 0xbc);
                  uVar2 = FUN_140c55c70(lVar3 + 0x88);
                  lVar3 = FUN_140c560a0(uVar2);
                  if (lVar3 == 0) {
                    FUN_140dbfdc0(param_1 + 0x33);
                    if ((*(byte *)((longlong)param_1[1] + 0xec) & 2) != 0) {
                      FUN_140c6c4e0(0x10,0,0xc0,
                                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                                    ,CONCAT44(uVar6,0x53a));
                      FUN_140d55f00(local_80,2,0x28);
                      return 0;
                    }
                    lVar3 = FUN_140c55c70(param_1 + 0xbc);
                    *(undefined4 *)(lVar3 + 0xb0) = 0;
                  }
                  else if ((*(byte *)((longlong)param_1[1] + 0xed) >> 5 & 1) != 0) {
                    lVar3 = FUN_140c55c70(param_1 + 0xbc);
                    local_70 = (byte *)(lVar3 + 0x1a8);
                    *local_70 = *local_70 | 2;
                  }
                  (**(code **)(*local_80 + 0x20))(local_80);
                  *(undefined4 *)((longlong)param_1 + 0x14) = 0xb;
                  return 1;
                }
              }
              FUN_140c6c4e0(0x10,0,0x89,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                            ,CONCAT44(uVar6,0x52f));
              FUN_140d55f00(local_80,2,0x32);
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  else {
    uVar2 = 7;
  }
  return uVar2;
}


/* address=140d4d310 name=FUN_140d4d310 */

undefined8 FUN_140d4d310(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140c55c70(param_1 + 0x5e0);
  uVar3 = FUN_140c55c70(lVar2 + 0x88);
  lVar2 = FUN_140c560a0(uVar3);
  if (lVar2 != 0) {
    iVar1 = FUN_140d41840(param_1);
    if (iVar1 == 1) {
      return 0;
    }
    if (iVar1 == 2) {
      return 0x10;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0xc;
  return 1;
}


/* address=140d4d390 name=FUN_140d4d390 */

void FUN_140d4d390(longlong **param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined auStack_3b8 [32];
  undefined8 local_398;
  byte local_388;
  undefined local_387 [7];
  longlong *local_380;
  undefined local_378 [16];
  undefined local_368;
  uint local_364;
  uint local_360;
  undefined local_358 [16];
  ulonglong local_348;
  int local_340;
  uint local_33c;
  longlong local_338;
  ulonglong local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  uint local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  ulonglong local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined local_2d0 [16];
  byte *local_2c0;
  undefined8 local_2b8;
  longlong *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  ulonglong local_298;
  ulonglong local_290;
  undefined *local_288;
  longlong *local_280;
  undefined8 local_278;
  ulonglong local_270;
  longlong local_268;
  undefined8 local_260;
  undefined *local_258;
  undefined local_250 [16];
  undefined local_240 [48];
  undefined local_210 [24];
  undefined local_1f8 [16];
  undefined local_1e8 [16];
  undefined local_1d8 [16];
  undefined local_1c8 [16];
  undefined local_1b8 [8];
  undefined local_1b0 [32];
  undefined local_190 [48];
  undefined local_160 [16];
  undefined local_150 [16];
  undefined local_140 [24];
  undefined local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_3b8;
  local_380 = *param_1;
  cVar1 = (**(code **)(*local_380 + 0x18))(local_380,local_1b8);
  if ((cVar1 == '\0') || (cVar1 = FUN_140d40e90(local_380,local_1b8,0x10), cVar1 == '\0'))
  goto LAB_140d4e284;
  puVar6 = local_1b0;
  puVar8 = local_2d0;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_364 = *(uint *)((longlong)param_1[0xc0] + 0x14);
  local_33c = *(uint *)(param_1[0xc0] + 3);
  if ((local_33c & 4) != 0) {
    iVar3 = FUN_140d35a70(local_2d0,local_250);
    if ((iVar3 == 0) || (((local_364 & 4) != 0 && (lVar7 = FUN_140d354c0(local_2d0), lVar7 != 0))))
    {
      local_398 = (undefined *)CONCAT44(local_398._4_4_,0x573);
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                   );
      FUN_140d55f00(local_380,2,0x32);
      goto LAB_140d4e284;
    }
    uVar4 = FUN_140d354c0(local_250);
    if ((0x80 < uVar4) || (iVar3 = FUN_140d35600(local_250), iVar3 != 0)) {
      local_398 = (undefined *)CONCAT44(local_398._4_4_,0x57a);
      FUN_140c6c4e0(0x10,0,0x88,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                   );
      FUN_140d55f00(local_380,2,0x2f);
      goto LAB_140d4e284;
    }
    local_2b8 = 0;
    iVar3 = FUN_140d35580(local_250,&local_2b8);
    if (iVar3 == 0) {
      FUN_140d55f00(local_380,2,0x50);
      goto LAB_140d4e284;
    }
    lVar7 = FUN_140c55c70(param_1 + 0xbc);
    FUN_140c56a70(lVar7 + 0x80,local_2b8);
  }
  FUN_140c56440(local_378);
  if ((local_364 & 1) != 0) {
    iVar3 = FUN_140d35a70(local_2d0,local_210);
    if ((iVar3 == 0) || (lVar7 = FUN_140d354c0(local_2d0), lVar7 != 0)) {
      local_398 = (undefined *)CONCAT44(local_398._4_4_,0x58d);
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                   );
      FUN_140d55f00(local_380,2,0x32);
      local_2d8 = 0;
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
    FUN_140c56440(local_358);
    uVar5 = FUN_140c55c70(param_1 + 0xba);
    iVar3 = FUN_140d31a60(uVar5);
    cVar1 = FUN_140c56600(local_358,(longlong)iVar3);
    if (cVar1 == '\0') {
      local_2d4 = 0;
      FUN_140c564c0(local_358);
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
    puVar6 = (undefined *)FUN_140c630f0(local_210,local_160);
    puVar8 = local_1f8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    local_2a8 = FUN_140c55f80(local_358);
    uVar5 = FUN_140c55c70(local_358);
    local_398 = local_1f8;
    local_340 = FUN_140c7c680(param_1,uVar5,&local_2e0,local_2a8);
    if (local_340 == 1) {
      local_324 = 9;
      FUN_140c564c0(local_358);
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
    if (local_340 == 2) {
      local_328 = 0;
      FUN_140c564c0(local_358);
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
    uVar4 = FUN_140c55f80(local_358);
    if (local_2e0 != uVar4) {
      local_398 = (undefined *)CONCAT44(local_398._4_4_,0x5a7);
      FUN_140c6c4e0(0x10,0,0x8a,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                   );
      FUN_140d55f00(local_380,2,0x33);
      local_320 = 0;
      FUN_140c564c0(local_358);
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
    cVar1 = FUN_140c56600(local_378,0x30);
    if (cVar1 != '\0') {
      local_2a0 = FUN_140c55f80(local_378);
      uVar5 = FUN_140c55c70(local_378);
      iVar3 = FUN_140ca8a50(uVar5,local_2a0);
      if (iVar3 != 0) {
        lVar7 = FUN_140c55f80(local_378);
        if (local_2e0 < lVar7 + 0xbU) {
          local_398 = (undefined *)CONCAT44(local_398._4_4_,0x5b8);
          FUN_140c6c4e0(0x10,0,0x8a,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                       );
          FUN_140d55f00(local_380,2,0x33);
          local_318 = 0;
          FUN_140c564c0(local_358);
          FUN_140c564c0(local_378);
          goto LAB_140d4e284;
        }
        local_338 = FUN_140c55f80(local_378);
        local_338 = local_2e0 - local_338;
        puVar6 = (undefined *)FUN_140c71340(local_358,0);
        bVar2 = FUN_140d48df0(*puVar6,0);
        local_314 = (uint)bVar2;
        puVar6 = (undefined *)FUN_140c71340(local_358,1);
        local_388 = FUN_140d48df0(*puVar6,2);
        local_388 = (byte)local_314 & local_388;
        for (local_330 = 2; local_330 < local_338 - 1U; local_330 = local_330 + 1) {
          puVar6 = (undefined *)FUN_140c71340(local_358,local_330);
          bVar2 = FUN_140d48d60(*puVar6);
          local_388 = local_388 & ~bVar2;
        }
        puVar6 = (undefined *)FUN_140c71340(local_358,local_338 + -1);
        bVar2 = FUN_140d48d60(*puVar6);
        local_388 = local_388 & bVar2;
        local_298 = (ulonglong)(uint)((int)(uint)*(ushort *)((longlong)param_1 + 0x624) >> 8);
        puVar6 = (undefined *)FUN_140c71340(local_358,local_338);
        bVar2 = FUN_140d48dc0(*puVar6,local_298);
        local_388 = local_388 & bVar2;
        local_290 = (ulonglong)(*(ushort *)((longlong)param_1 + 0x624) & 0xff);
        puVar6 = (undefined *)FUN_140c71340(local_358,local_338 + 1);
        bVar2 = FUN_140d48dc0(*puVar6,local_290);
        local_388 = local_388 & bVar2;
        local_348 = 0;
        while (uVar4 = FUN_140c55f80(local_378), local_348 < uVar4) {
          local_288 = (undefined *)FUN_140c71340(local_378,local_348);
          puVar6 = (undefined *)FUN_140c71340(local_358,local_338 + local_348);
          local_368 = FUN_140d48e70(local_388,*puVar6,*local_288);
          puVar6 = (undefined *)FUN_140c71340(local_378);
          *puVar6 = local_368;
          local_348 = local_348 + 1;
        }
        FUN_140c564c0(local_358);
        goto LAB_140d4dd56;
      }
    }
    local_31c = 0;
    FUN_140c564c0(local_358);
    FUN_140c564c0(local_378);
    goto LAB_140d4e284;
  }
  if ((local_364 & 2) == 0) {
    if ((local_364 & 4) == 0) {
      local_398 = (undefined *)CONCAT44(local_398._4_4_,0x5e8);
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                   );
      FUN_140d55f00(local_380,2,0x28);
      local_308 = 0;
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
  }
  else {
    iVar3 = FUN_140d35a40(local_2d0,local_1e8);
    if ((iVar3 == 0) || (lVar7 = FUN_140d354c0(local_2d0), lVar7 != 0)) {
      local_398 = (undefined *)CONCAT44(local_398._4_4_,0x5d8);
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                   );
      FUN_140d55f00(local_380,2,0x32);
      local_310 = 0;
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
    local_387[0] = 0x32;
    local_2b0 = (longlong *)FUN_140c55c70(param_1 + 0x31);
    puVar6 = (undefined *)FUN_140c630f0(local_1e8,local_150);
    puVar8 = local_1d8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar1 = (**(code **)(*local_2b0 + 0x20))(local_2b0,local_378,local_387,local_1d8);
    if (cVar1 == '\0') {
      FUN_140d55f00(local_380,2,local_387[0]);
      local_30c = 0;
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
    FUN_140d313a0(param_1 + 0x31,0);
    FUN_140d313a0(param_1 + 0x32,0);
  }
LAB_140d4dd56:
  if ((local_33c & 4) == 0) {
LAB_140d4e0ca:
    cVar1 = FUN_140d426e0(param_1,local_1b8);
    if (cVar1 == '\0') {
      local_2f0 = 0;
      FUN_140c564c0(local_378);
    }
    else {
      local_258 = local_140;
      puVar6 = (undefined *)FUN_140c57dd0(local_258,local_378);
      puVar8 = local_1c8;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      lVar7 = FUN_140c55c70(param_1 + 0xbc);
      local_2ec = FUN_140d24de0(param_1,lVar7 + 0xb,local_1c8);
      lVar7 = FUN_140c55c70(param_1 + 0xbc);
      *(char *)(lVar7 + 10) = (char)local_2ec;
      lVar7 = FUN_140c55c70(param_1 + 0xbc);
      if (*(char *)(lVar7 + 10) == '\0') {
        local_2e8 = 0;
        FUN_140c564c0(local_378);
      }
      else {
        lVar7 = FUN_140c55c70(param_1 + 0xbc);
        local_2c0 = (byte *)(lVar7 + 0x1a8);
        *local_2c0 = *local_2c0 & 0xfe | *(byte *)((longlong)param_1 + 0x622) >> 1 & 1;
        *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) | 0x80;
        (**(code **)(*local_380 + 0x20))(local_380);
        *(undefined4 *)((longlong)param_1 + 0x14) = 0xd;
        local_2e4 = 1;
        FUN_140c564c0(local_378);
      }
    }
  }
  else {
    if (param_1[1][9] == 0) {
      local_398 = (undefined *)CONCAT44(local_398._4_4_,0x5f1);
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                   );
      FUN_140d55f00(local_380,2,0x50);
      local_304 = 0;
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
    lVar7 = FUN_140c55c70(param_1 + 0xbc);
    uVar5 = FUN_140c55c70(lVar7 + 0x80);
    local_280 = param_1[1];
    local_360 = (*(code *)local_280[9])(local_380,uVar5,local_128,0x100);
    if (0x100 < local_360) {
      local_398 = (undefined *)CONCAT44(local_398._4_4_,0x5fb);
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                   );
      FUN_140d55f00(local_380,2,0x50);
      local_300 = 0;
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
    if (local_360 == 0) {
      local_398 = (undefined *)CONCAT44(local_398._4_4_,0x600);
      FUN_140c6c4e0(0x10,0,0xc3,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                   );
      FUN_140d55f00(local_380,2,0x73);
      local_2fc = 0;
      FUN_140c564c0(local_378);
      goto LAB_140d4e284;
    }
    if ((local_364 & 4) != 0) {
      cVar1 = FUN_140c56600(local_378,local_360);
      if (cVar1 == '\0') {
        local_2f8 = 0;
        FUN_140c564c0(local_378);
        goto LAB_140d4e284;
      }
      local_278 = FUN_140c55f80(local_378);
      uVar5 = FUN_140c55c70(local_378);
      FUN_140d48f70(uVar5,0,local_278);
    }
    FUN_140c57a60(local_240);
    local_270 = (ulonglong)(local_360 + 4);
    local_268 = FUN_140c55f80(local_378);
    local_268 = local_270 + local_268;
    uVar5 = FUN_140c55cd0(local_240);
    iVar3 = FUN_140d376f0(uVar5,local_268);
    if (iVar3 != 0) {
      uVar5 = FUN_140c55cd0(local_240);
      iVar3 = FUN_140d37de0(uVar5,local_190);
      if (iVar3 != 0) {
        local_260 = FUN_140c55f80(local_378);
        uVar5 = FUN_140c55c70(local_378);
        iVar3 = FUN_140d37f00(local_190,uVar5,local_260);
        if (iVar3 != 0) {
          uVar5 = FUN_140c55cd0(local_240);
          iVar3 = FUN_140d37de0(uVar5,local_190);
          if ((iVar3 != 0) && (iVar3 = FUN_140d37f00(local_190,local_128,local_360), iVar3 != 0)) {
            uVar5 = FUN_140c55cd0(local_240);
            cVar1 = FUN_140c535c0(uVar5,local_378);
            if (cVar1 != '\0') {
              FUN_140c57a90(local_240);
              goto LAB_140d4e0ca;
            }
          }
        }
      }
    }
    local_2f4 = 0;
    FUN_140c57a90(local_240);
    FUN_140c564c0(local_378);
  }
LAB_140d4e284:
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_3b8);
  return;
}


/* address=140d4e2b0 name=FUN_140d4e2b0 */

undefined8 FUN_140d4e2b0(longlong **param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar8;
  undefined local_d8 [4];
  undefined2 local_d4 [2];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [8];
  undefined local_60 [32];
  undefined local_40 [16];
  undefined local_30 [32];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  local_d0 = *param_1;
  cVar1 = FUN_140c56050(param_1 + 0xbb);
  if (cVar1 == '\0') {
    FUN_140dbfdc0(param_1 + 0x33);
    *(undefined4 *)((longlong)param_1 + 0x14) = 0xe;
    uVar4 = 1;
  }
  else {
    cVar1 = (**(code **)(*local_d0 + 0x18))(local_d0,local_68);
    if (cVar1 == '\0') {
      uVar4 = 3;
    }
    else {
      cVar1 = FUN_140d40e90(local_d0,local_68,0xf);
      if (cVar1 == '\0') {
        uVar4 = 0;
      }
      else {
        lVar5 = FUN_140c55c70(param_1 + 0xbc);
        uVar4 = FUN_140c55c70(lVar5 + 0x88);
        local_c8 = FUN_140c560c0(uVar4,0);
        FUN_140c760f0(local_c8,local_a8);
        cVar1 = FUN_140c724a0(local_a8,0);
        if (cVar1 == '\0') {
          uVar4 = 0;
        }
        else {
          puVar6 = local_60;
          puVar7 = local_b8;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          local_d4[0] = 0;
          uVar2 = FUN_140c6de20(local_d0);
          if (uVar2 < 0x303) {
            uVar4 = FUN_140c55c70(param_1 + 0xbb);
            cVar1 = FUN_140d273d0(local_d4,uVar4);
            if (cVar1 == '\0') {
              FUN_140c6c4e0(0x10,0,0xc1,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                            ,CONCAT44(uVar8,0x65e));
              FUN_140d55f00(local_d0,2,0x2b);
              return 0;
            }
          }
          else {
            iVar3 = FUN_140d35710(local_b8,local_d4);
            if (iVar3 == 0) {
              FUN_140c6c4e0(0x10,0,0x89,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                            ,CONCAT44(uVar8,0x652));
              FUN_140d55f00(local_d0,2,0x32);
              return 0;
            }
            local_d8[0] = 0x32;
            cVar1 = FUN_140d27820(param_1,local_d8,local_d4[0]);
            if (cVar1 == '\0') {
              FUN_140d55f00(local_d0,2,local_d8[0]);
              return 0;
            }
            lVar5 = FUN_140c55c70(param_1 + 0xbc);
            *(undefined2 *)(lVar5 + 8) = local_d4[0];
          }
          iVar3 = FUN_140d35a70(local_b8,local_98);
          if ((iVar3 != 0) && (lVar5 = FUN_140d354c0(local_b8), lVar5 == 0)) {
            puVar6 = (undefined *)FUN_140d48ba0(param_1 + 0x33,local_40);
            puVar7 = local_88;
            for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            local_c0 = FUN_140c55c70(param_1 + 0xbb);
            puVar6 = (undefined *)FUN_140c630f0(local_98,local_30);
            puVar7 = local_78;
            for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            cVar1 = FUN_140c7c9e0(local_d0,local_78,local_d4[0],local_c0,local_88);
            if (cVar1 == '\0') {
              FUN_140c6c4e0(0x10,0,0x72,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                            ,0x66d);
              FUN_140d55f00(local_d0,2,0x33);
              return 0;
            }
            FUN_140dbfdc0(param_1 + 0x33);
            cVar1 = FUN_140d426e0(param_1,local_68);
            if (cVar1 == '\0') {
              return 0;
            }
            (**(code **)(*local_d0 + 0x20))(local_d0);
            *(undefined4 *)((longlong)param_1 + 0x14) = 0xe;
            return 1;
          }
          FUN_140c6c4e0(0x10,0,0x89,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                        ,CONCAT44(uVar8,0x666));
          FUN_140d55f00(local_d0,2,0x32);
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}


/* address=140d4e6d0 name=FUN_140d4e6d0 */

undefined8 FUN_140d4e6d0(longlong *param_1)

{
  char cVar1;
  
  if (((*(byte *)((longlong)param_1 + 0x622) >> 3 & 1) != 0) &&
     (cVar1 = FUN_140c57ae0(*param_1 + 0x58,0), cVar1 != '\0')) {
    return 7;
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xf;
  return 0xf;
}


/* address=140d4e740 name=FUN_140d4e740 */

bool FUN_140d4e740(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140d24d50(param_1,0);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0x10;
  }
  return cVar1 != '\0';
}


/* address=140d4e780 name=FUN_140d4e780 */

undefined8 FUN_140d4e780(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined local_a0 [16];
  undefined local_90 [24];
  undefined local_78 [16];
  undefined local_68 [8];
  undefined local_60 [32];
  undefined local_40 [16];
  undefined local_30 [32];
  
  plVar1 = *param_1;
  if (*(char *)((longlong)param_1 + 0x621) < '\0') {
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_68);
    if (cVar2 == '\0') {
      uVar4 = 3;
    }
    else {
      cVar2 = FUN_140d40e90(plVar1,local_68,0x43);
      if ((cVar2 != '\0') && (cVar2 = FUN_140d426e0(param_1,local_68), cVar2 != '\0')) {
        puVar5 = local_60;
        puVar7 = local_a0;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar3 = FUN_140d35a40(local_a0,local_90);
        if (((iVar3 == 0) || (iVar3 = FUN_140d35a40(local_a0,local_40), iVar3 == 0)) ||
           (lVar6 = FUN_140d354c0(local_a0), lVar6 != 0)) {
          FUN_140c6c4e0(0x10,0,0x89,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\handshake_server.cc"
                        ,0x6a5);
          FUN_140d55f00(plVar1,2,0x32);
          return 0;
        }
        puVar5 = (undefined *)FUN_140c630f0(local_90,local_30);
        puVar7 = local_78;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar2 = FUN_140c566e0(plVar1[6] + 0x1d8,local_78);
        if (cVar2 == '\0') {
          return 0;
        }
        (**(code **)(*plVar1 + 0x20))(plVar1);
        *(undefined4 *)((longlong)param_1 + 0x14) = 0x11;
        return 1;
      }
      uVar4 = 0;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x11;
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140d4e940 name=FUN_140d4e940 */

undefined8 FUN_140d4e940(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined local_30 [48];
  
  plVar1 = *param_1;
  if ((*(byte *)((longlong)param_1 + 0x623) & 1) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x12;
    uVar3 = 1;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_30);
    if (cVar2 == '\0') {
      uVar3 = 3;
    }
    else {
      cVar2 = FUN_140d40e90(plVar1,local_30,0xcb);
      if (((cVar2 != '\0') && (cVar2 = FUN_140d28ec0(param_1,local_30), cVar2 != '\0')) &&
         (cVar2 = FUN_140d426e0(param_1,local_30), cVar2 != '\0')) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
        *(undefined4 *)((longlong)param_1 + 0x14) = 0x12;
        return 1;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140d4ea20 name=FUN_140d4ea20 */

int FUN_140d4ea20(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = FUN_140d41f30(param_1);
  if (iVar3 == 1) {
    cVar2 = FUN_140c57ae0(lVar1 + 0x58,0);
    if (cVar2 == '\0') {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x13;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x14;
    }
    cVar2 = operator==<>(lVar1 + 0x58,0);
    if (((cVar2 == '\0') || ((*(byte *)(*(longlong *)(lVar1 + 0x30) + 0xdd) >> 1 & 1) == 0)) ||
       (cVar2 = FUN_140d29aa0(param_1), cVar2 != '\0')) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}


/* address=140d4eaf0 name=FUN_140d4eaf0 */

undefined4 FUN_140d4eaf0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined local_c0 [8];
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined local_a8 [8];
  longlong local_a0;
  undefined local_98 [48];
  undefined local_68 [48];
  undefined local_38 [56];
  
  plVar1 = *param_1;
  if ((*(byte *)((longlong)param_1 + 0x622) & 1) == 0) {
LAB_140d4ed10:
    cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1);
    if (((cVar2 != '\0') && (cVar2 = FUN_140d24d50(param_1,1), cVar2 != '\0')) &&
       (cVar2 = FUN_140d421d0(param_1), cVar2 != '\0')) {
      cVar2 = FUN_140c57ae0(plVar1 + 0xb,0);
      if (cVar2 == '\0') {
        *(undefined4 *)((longlong)param_1 + 0x14) = 0x14;
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x14) = 0xe;
      }
      return 4;
    }
    local_b4 = 0;
  }
  else {
    FUN_140c57b60(local_c0);
    cVar2 = operator==<>(plVar1 + 0xb,0);
    if (cVar2 == '\0') {
      uVar4 = FUN_140c55c70(plVar1 + 0xb);
      uVar4 = FUN_140c60c00(local_a8,uVar4,2);
      FUN_140c580d0(local_c0,uVar4);
      FUN_140c56300(local_a8);
      cVar2 = FUN_140c56050(local_c0);
      if (cVar2 == '\0') {
        local_b8 = 0;
        FUN_140c56300(local_c0);
        return local_b8;
      }
      uVar4 = FUN_140c55c70(local_c0);
      FUN_140c61690(plVar1,uVar4);
      local_b0 = FUN_140c55c70(local_c0);
    }
    else {
      uVar4 = FUN_140c55c70(param_1 + 0xbc);
      FUN_140c61690(plVar1,uVar4);
      local_b0 = FUN_140c55c70(param_1 + 0xbc);
    }
    FUN_140c57a60(local_98);
    uVar4 = FUN_140c55cd0(local_98);
    local_a0 = *plVar1;
    cVar2 = (**(code **)(local_a0 + 0x58))(plVar1,uVar4,local_68,4);
    if ((((cVar2 != '\0') &&
         (iVar3 = FUN_140d381b0(local_68,*(undefined4 *)(local_b0 + 0xb4)), iVar3 != 0)) &&
        (iVar3 = FUN_140d37de0(local_68,local_38), iVar3 != 0)) &&
       (cVar2 = FUN_140c5ff70(param_1,local_38,local_b0), cVar2 != '\0')) {
      uVar4 = FUN_140c55cd0(local_98);
      cVar2 = FUN_140d42620(plVar1,uVar4);
      if (cVar2 != '\0') {
        FUN_140c57a90(local_98);
        FUN_140c56300(local_c0);
        goto LAB_140d4ed10;
      }
    }
    local_b4 = 0;
    FUN_140c57a90(local_98);
    FUN_140c56300(local_c0);
  }
  return local_b4;
}


/* address=140d4edb0 name=FUN_140d4edb0 */

undefined8 FUN_140d4edb0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined local_18 [24];
  
  plVar1 = *param_1;
  if ((*(byte *)((longlong)param_1 + 0x622) >> 3 & 1) == 0) {
    (**(code **)(*plVar1 + 0x80))(plVar1);
    cVar2 = FUN_140c57ae0(param_1 + 0xbc,0);
    if ((cVar2 != '\0') && ((*(byte *)((longlong)param_1[1] + 0xed) >> 5 & 1) != 0)) {
      lVar5 = FUN_140c55c70(param_1 + 0xbc);
      FUN_140c56b00(lVar5 + 0x88,0);
      uVar4 = FUN_140c55c70(param_1 + 0xbc);
      lVar5 = FUN_140c55c70(plVar1 + 0xd);
      (**(code **)(*(longlong *)(lVar5 + 8) + 0x40))(uVar4);
    }
    cVar2 = FUN_140c57ae0(param_1 + 0xbc,0);
    if (cVar2 == '\0') {
      cVar3 = FUN_140c57ae0(plVar1 + 0xb,0);
      if (cVar3 == '\0') {
        FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x72a);
      }
      uVar4 = FUN_140c56390(local_18,plVar1 + 0xb);
      FUN_140c580d0(plVar1[6] + 0x1d0,uVar4);
      FUN_140c56300(local_18);
    }
    else {
      cVar3 = operator==<>(plVar1 + 0xb,0);
      if (cVar3 == '\0') {
        FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x726);
      }
      uVar4 = FUN_140c55cd0(param_1 + 0xbc);
      FUN_140c580d0(plVar1[6] + 0x1d0,uVar4);
      lVar5 = FUN_140c55c70(plVar1[6] + 0x1d0);
      *(byte *)(lVar5 + 0x1a8) = *(byte *)(lVar5 + 0x1a8) & 0xfb;
    }
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 8;
    *(byte *)(plVar1[6] + 0xdc) = *(byte *)(plVar1[6] + 0xdc) | 0x20;
    if (cVar2 != '\0') {
      FUN_140c61850(plVar1);
    }
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x15;
    uVar4 = 1;
  }
  else {
    uVar4 = 7;
  }
  return uVar4;
}


/* address=140d4f020 name=FUN_140d4f020 */

void FUN_140d4f020(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140c58550(uVar2,p_Var1);
  }
  return;
}


/* address=140d4f070 name=FUN_140d4f070 */

undefined8 FUN_140d4f070(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c55c70(param_2);
  uVar1 = FUN_140d22690(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140c56240(local_18);
  return param_1;
}


/* address=140d4f0c0 name=FUN_140d4f0c0 */

void FUN_140d4f0c0(undefined8 param_1)

{
  FUN_140d64e10(param_1);
  FUN_140d64dd0(param_1);
  return;
}


/* address=140d4f0f0 name=FUN_140d4f0f0 */

undefined8
FUN_140d4f0f0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140d4f020(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140d4f1a0 name=FUN_140d4f1a0 */

undefined FUN_140d4f1a0(longlong *param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined local_68 [48];
  undefined local_38 [56];
  
  FUN_140c57a60(local_68);
  uVar3 = FUN_140c55cd0(local_68);
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1,uVar3,local_38,0x18);
  if ((cVar1 != '\0') && (iVar2 = FUN_140d380f0(local_38,param_2), iVar2 != 0)) {
    uVar3 = FUN_140c55cd0(local_68);
    cVar1 = FUN_140d42620(param_1,uVar3);
    if ((cVar1 != '\0') && (cVar1 = FUN_140dc11f0(param_1,1), cVar1 != '\0')) {
      *(byte *)(param_1[6] + 0xdd) = *(byte *)(param_1[6] + 0xdd) | 4;
      FUN_140c57a90(local_68);
      return 1;
    }
  }
  FUN_140c57a90(local_68);
  return 0;
}


/* address=140d4f2b0 name=FUN_140d4f2b0 */

ulonglong FUN_140d4f2b0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (*(char *)(param_2 + 1) == '\x18') {
    *(char *)(*(longlong *)(param_1 + 0x30) + 0xd4) =
         *(char *)(*(longlong *)(param_1 + 0x30) + 0xd4) + '\x01';
    if ((*(longlong *)(param_1 + 0x98) == 0) &&
       (*(byte *)(*(longlong *)(param_1 + 0x30) + 0xd4) < 0x21)) {
      uVar1 = FUN_140d51ec0(param_1,param_2);
    }
    else {
      FUN_140c6c4e0(0x10,0,0x104,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,0x2a5);
      uVar1 = FUN_140d55f00(param_1,2,10);
      uVar1 = uVar1 & 0xffffffffffffff00;
    }
  }
  else {
    *(undefined *)(*(longlong *)(param_1 + 0x30) + 0xd4) = 0;
    if ((*(char *)(param_2 + 1) == '\x04') && ((*(byte *)(param_1 + 0xa4) & 1) == 0)) {
      uVar1 = FUN_140d523b0(param_1,param_2);
    }
    else {
      FUN_140d55f00(param_1,2,10);
      uVar1 = FUN_140c6c4e0(0x10,0,0xdf,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                            ,0x2b4);
      uVar1 = uVar1 & 0xffffffffffffff00;
    }
  }
  return uVar1;
}


/* address=140d4f3f0 name=FUN_140d4f3f0 */

undefined FUN_140d4f3f0(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined8 in_stack_fffffffffffffe08;
  byte local_1e0;
  undefined local_1df;
  undefined local_1de;
  undefined local_1dd;
  byte local_1dc;
  undefined local_1d8 [8];
  undefined local_1d0 [8];
  short local_1c8 [4];
  undefined local_1c0 [8];
  undefined local_1b8;
  undefined local_1b7;
  undefined local_1b6;
  undefined local_1b5;
  undefined local_1b4;
  undefined local_1b3;
  undefined local_1b2;
  undefined local_1b1;
  undefined local_1b0;
  undefined local_1af;
  undefined local_1ae;
  undefined local_1ad;
  char local_1ac;
  undefined local_1ab;
  undefined local_1aa;
  undefined local_1a9;
  undefined local_1a8;
  undefined local_1a7;
  undefined local_1a6;
  undefined local_1a5;
  undefined local_1a4;
  uint local_1a0 [2];
  undefined local_198 [8];
  undefined8 local_190;
  longlong local_188;
  undefined local_180 [16];
  code *local_170;
  undefined local_168 [16];
  longlong local_158;
  longlong local_150;
  byte *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined local_128 [8];
  longlong local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined local_e0 [16];
  undefined local_d0 [3];
  char local_cd;
  undefined local_c8 [16];
  undefined *local_b8;
  undefined *local_b0;
  undefined local_a8 [8];
  undefined local_a0 [3];
  char local_9d;
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [8];
  undefined local_60 [24];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  lVar7 = *param_1;
  puVar6 = (undefined *)(param_2 + 8);
  puVar9 = local_180;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_140c57b60(local_1d0);
  uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
  if (*(char *)(param_2 + 1) == '\x19') {
    iVar2 = FUN_140d35710(local_180,local_1c8);
    if ((((iVar2 == 0) || (iVar2 = FUN_140d357b0(local_180,local_1a0), iVar2 == 0)) ||
        (iVar2 = FUN_140d35aa0(local_180,local_78), iVar2 == 0)) ||
       (lVar8 = FUN_140d354c0(local_180), lVar8 != 0)) {
      FUN_140d55f00(lVar7,2,0x32);
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,CONCAT44(uVar3,0x76));
      local_1b8 = 0;
      FUN_140c5ccf0(local_1d0);
      return local_1b8;
    }
    if (*(uint *)(lVar7 + 0x88) < local_1a0[0]) {
      FUN_140d55f00(lVar7,2,0x2f);
      FUN_140c6c4e0(0x10,0,0x125,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,CONCAT44(uVar3,0x7c));
      FUN_140c6c650("requested=%u",local_1a0[0]);
      local_1b7 = 0;
      FUN_140c5ccf0(local_1d0);
      return local_1b7;
    }
    local_170 = (code *)0x0;
    local_158 = FUN_140c55c70(lVar7 + 0x68);
    local_158 = local_158 + 0x1b8;
    local_188 = FUN_140c57590(local_158);
    local_140 = FUN_140c575b0(local_158);
    for (; local_188 != local_140; local_188 = local_188 + 0x18) {
      local_150 = local_188;
      if (*(short *)(local_188 + 0x10) == local_1c8[0]) {
        local_170 = *(code **)(local_188 + 8);
        break;
      }
    }
    if (local_170 == (code *)0x0) {
      FUN_140d55f00(lVar7,2,0x2f);
      FUN_140c6c4e0(0x10,0,0x126,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,CONCAT44(uVar3,0x8c));
      FUN_140c6c650("alg=%d",local_1c8[0]);
      local_1b6 = 0;
      FUN_140c5ccf0(local_1d0);
      return local_1b6;
    }
    local_190 = 0;
    local_138 = FUN_140d354c0(local_78);
    uVar4 = FUN_140d354a0(local_78);
    in_stack_fffffffffffffe08 = local_138;
    iVar2 = (*local_170)(lVar7,&local_190,local_1a0[0],uVar4,local_138);
    uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
    if (iVar2 == 0) {
      FUN_140d55f00(lVar7,2,0x32);
      FUN_140c6c4e0(0x10,0,0x124,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,CONCAT44(uVar3,0x95));
      FUN_140c6c650("alg=%d",local_1c8[0]);
      local_1b5 = 0;
      FUN_140c5ccf0(local_1d0);
      return local_1b5;
    }
    FUN_140c63230(local_1d0,local_190);
    uVar5 = FUN_140c760d0(local_190);
    uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
    if (uVar5 != local_1a0[0]) {
      FUN_140d55f00(lVar7,2,0x32);
      FUN_140c6c4e0(0x10,0,0x124,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,CONCAT44(uVar3,0x9d));
      uVar3 = FUN_140c760d0(local_190);
      FUN_140c6c650("alg=%d got=%u expected=%u",local_1c8[0],uVar3,local_1a0[0]);
      local_1b4 = 0;
      FUN_140c5ccf0(local_1d0);
      return local_1b4;
    }
    local_130 = FUN_140c760d0(local_190);
    uVar4 = FUN_140c760b0(local_190);
    FUN_140d35430(local_180,uVar4,local_130);
  }
  else if (*(char *)(param_2 + 1) != '\v') {
    FID_conflict__assert((wchar_t *)"m",(wchar_t *)"D",0xa8);
  }
  iVar2 = FUN_140d35a40(local_180,local_60);
  uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
  if (iVar2 != 0) {
    lVar8 = FUN_140d354c0(local_60);
    uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
    if (lVar8 == 0) {
      iVar2 = FUN_140d35aa0(local_180,local_e0);
      uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
      if (iVar2 != 0) {
        lVar8 = FUN_140d354c0(local_180);
        uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
        if (lVar8 == 0) {
          uVar4 = FUN_140c56020();
          FUN_140c55e40(local_1d8,uVar4);
          cVar1 = FUN_140c56050(local_1d8);
          if (cVar1 == '\0') {
            FUN_140d55f00(lVar7,2,0x50);
            local_1b2 = 0;
            FUN_140c56ac0(local_1d8);
            FUN_140c5ccf0(local_1d0);
            return local_1b2;
          }
          if (((*(byte *)(lVar7 + 0xa4) & 1) == 0) || ((*(byte *)(param_1[1] + 0xed) >> 5 & 1) == 0)
             ) {
            local_1e0 = 0;
          }
          else {
            local_1e0 = 1;
          }
          local_1dc = local_1e0;
          FUN_140c57b60(local_1c0);
          while( true ) {
            lVar8 = FUN_140d354c0(local_e0);
            uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
            if (lVar8 == 0) {
              uVar4 = FUN_140c55c70(local_1d8);
              lVar8 = FUN_140c560a0(uVar4);
              if (lVar8 == 0) {
                FUN_140c56b00(local_1d8,0);
              }
              uVar4 = FUN_140c55cd0(local_1c0);
              FUN_140c57e10(param_1 + 0xbb,uVar4);
              local_f0 = FUN_140c55cd0(local_1d8);
              lVar8 = FUN_140c55c70(param_1 + 0xbc);
              FUN_140c5d1b0(lVar8 + 0x88,local_f0);
              local_e8 = FUN_140c55c70(param_1 + 0xbc);
              lVar8 = FUN_140c55c70(lVar7 + 0x68);
              cVar1 = (**(code **)(*(longlong *)(lVar8 + 8) + 0x30))(local_e8);
              if (cVar1 == '\0') {
                FUN_140c6c4e0(0x10,0,0x89,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                              ,CONCAT44(uVar3,0x128));
                FUN_140d55f00(lVar7,2,0x32);
                local_1a7 = 0;
                FUN_140c55d60(local_1c0);
                FUN_140c56ac0(local_1d8);
                FUN_140c5ccf0(local_1d0);
                return local_1a7;
              }
              lVar8 = FUN_140c55c70(param_1 + 0xbc);
              uVar4 = FUN_140c55c70(lVar8 + 0x88);
              lVar8 = FUN_140c560a0(uVar4);
              if (lVar8 != 0) {
                lVar7 = FUN_140c55c70(param_1 + 0xbc);
                local_148 = (byte *)(lVar7 + 0x1a8);
                *local_148 = *local_148 & 0xfd | (local_1dc & 1) << 1;
                local_1a4 = 1;
                FUN_140c55d60(local_1c0);
                FUN_140c56ac0(local_1d8);
                FUN_140c5ccf0(local_1d0);
                return local_1a4;
              }
              if (param_3 != '\0') {
                lVar7 = FUN_140c55c70(param_1 + 0xbc);
                *(undefined4 *)(lVar7 + 0xb0) = 0;
                local_1a5 = 1;
                FUN_140c55d60(local_1c0);
                FUN_140c56ac0(local_1d8);
                FUN_140c5ccf0(local_1d0);
                return local_1a5;
              }
              FUN_140c6c4e0(0x10,0,0xc0,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                            ,CONCAT44(uVar3,0x12f));
              FUN_140d55f00(lVar7,2,0x74);
              local_1a6 = 0;
              FUN_140c55d60(local_1c0);
              FUN_140c56ac0(local_1d8);
              FUN_140c5ccf0(local_1d0);
              return local_1a6;
            }
            iVar2 = FUN_140d35aa0(local_e0,local_168);
            uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
            if (iVar2 == 0) break;
            iVar2 = FUN_140d35a70(local_e0,local_38);
            uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
            if (iVar2 == 0) break;
            lVar8 = FUN_140d354c0(local_168);
            uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
            if (lVar8 == 0) break;
            uVar4 = FUN_140c55c70(local_1d8);
            lVar8 = FUN_140c560a0(uVar4);
            if (lVar8 == 0) {
              uVar4 = FUN_140c727a0(local_128,local_168);
              FUN_140c57e10(local_1c0,uVar4);
              FUN_140c55d60(local_128);
              cVar1 = FUN_140c56050(local_1c0);
              uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe08 >> 0x20);
              if (cVar1 == '\0') {
                FUN_140d55f00(lVar7,2,0x32);
                FUN_140c6c4e0(0x10,0,0x89,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                              ,CONCAT44(uVar3,0xcc));
                local_1b0 = 0;
                FUN_140c55d60(local_1c0);
                FUN_140c56ac0(local_1d8);
                FUN_140c5ccf0(local_1d0);
                return local_1b0;
              }
              cVar1 = FUN_140c724a0(local_168,0);
              if (cVar1 == '\0') {
                FUN_140d55f00(lVar7,2,0x2f);
                local_1af = 0;
                FUN_140c55d60(local_1c0);
                FUN_140c56ac0(local_1d8);
                FUN_140c5ccf0(local_1d0);
                return local_1af;
              }
              if (local_1dc != 0) {
                local_120 = FUN_140c55c70(param_1 + 0xbc);
                local_120 = local_120 + 0x108;
                local_118 = FUN_140d354c0(local_168);
                uVar4 = FUN_140d354a0(local_168);
                FUN_140c7e500(uVar4,local_118,local_120);
              }
            }
            lVar8 = FUN_140c55c70(lVar7 + 0x68);
            uVar4 = FUN_140c75ed0(local_168,*(undefined8 *)(lVar8 + 0x200));
            FUN_140c55e40(local_198,uVar4);
            cVar1 = FUN_140c56050(local_198);
            if (cVar1 == '\0') {
LAB_140d4fca2:
              FUN_140d55f00(lVar7,2,0x50);
              local_1ae = 0;
              FUN_140c5ccf0(local_198);
              FUN_140c55d60(local_1c0);
              FUN_140c56ac0(local_1d8);
              FUN_140c5ccf0(local_1d0);
              return local_1ae;
            }
            local_110 = local_68;
            uVar4 = FUN_140c55cd0(local_198);
            local_108 = FUN_140c55e70(local_110,uVar4);
            uVar4 = FUN_140c55c70(local_1d8);
            cVar1 = FUN_140c5cfd0(uVar4,local_108);
            if (cVar1 == '\0') goto LAB_140d4fca2;
            if (((*(byte *)(lVar7 + 0xa4) & 1) == 0) &&
               ((*(byte *)(param_1[1] + 0xed) >> 2 & 1) != 0)) {
              local_1df = 1;
            }
            else {
              local_1df = 0;
            }
            FUN_140d48c60(local_d0,5,local_1df);
            if (((*(byte *)(lVar7 + 0xa4) & 1) == 0) &&
               ((*(byte *)(param_1[1] + 0xed) >> 1 & 1) != 0)) {
              local_1de = 1;
            }
            else {
              local_1de = 0;
            }
            FUN_140d48c60(local_a0,0x12,local_1de);
            local_1dd = 0x32;
            local_b8 = local_d0;
            local_b0 = local_a0;
            puVar6 = (undefined *)FUN_140c55f50(local_28,&local_b8,local_a8);
            puVar9 = local_48;
            for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar9 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar9 = puVar9 + 1;
            }
            cVar1 = FUN_140d41590(local_38,&local_1dd,local_48,0);
            if (cVar1 == '\0') {
              FUN_140d55f00(lVar7,2,local_1dd);
              local_1ad = 0;
              FUN_140c5ccf0(local_198);
              FUN_140c55d60(local_1c0);
              FUN_140c56ac0(local_1d8);
              FUN_140c5ccf0(local_1d0);
              return local_1ad;
            }
            if (local_cd != '\0') {
              iVar2 = FUN_140d356c0(local_c8,&local_1ac);
              if ((((iVar2 == 0) || (local_1ac != '\x01')) ||
                  (iVar2 = FUN_140d35aa0(local_c8), iVar2 == 0)) ||
                 ((lVar8 = FUN_140d354c0(local_88), lVar8 == 0 ||
                  (lVar8 = FUN_140d354c0(local_c8), lVar8 != 0)))) {
                FUN_140d55f00(lVar7,2,0x32);
                local_1ab = 0;
                FUN_140c5ccf0(local_198);
                FUN_140c55d60(local_1c0);
                FUN_140c56ac0(local_1d8);
                FUN_140c5ccf0(local_1d0);
                return local_1ab;
              }
              uVar4 = FUN_140c55c70(local_1d8);
              lVar8 = FUN_140c560a0(uVar4);
              if (lVar8 == 1) {
                lVar8 = FUN_140c55c70(lVar7 + 0x68);
                local_100 = FUN_140c75ed0(local_88,*(undefined8 *)(lVar8 + 0x200));
                lVar8 = FUN_140c55c70(param_1 + 0xbc);
                FUN_140c63230(lVar8 + 0x100);
                lVar8 = FUN_140c55c70(param_1 + 0xbc);
                cVar1 = operator==<>(lVar8 + 0x100);
                if (cVar1 != '\0') {
                  FUN_140d55f00(lVar7,2,0x50);
                  local_1aa = 0;
                  FUN_140c5ccf0(local_198);
                  FUN_140c55d60(local_1c0);
                  FUN_140c56ac0(local_1d8);
                  FUN_140c5ccf0(local_1d0);
                  return local_1aa;
                }
              }
            }
            if (local_9d != '\0') {
              cVar1 = FUN_140d26550(local_98);
              if (cVar1 == '\0') {
                FUN_140c6c4e0(0x10,0,0x95,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                              ,0x10e);
                FUN_140d55f00(lVar7,2,0x32);
                local_1a9 = 0;
                FUN_140c5ccf0(local_198);
                FUN_140c55d60(local_1c0);
                FUN_140c56ac0(local_1d8);
                FUN_140c5ccf0(local_1d0);
                return local_1a9;
              }
              uVar4 = FUN_140c55c70(local_1d8);
              lVar8 = FUN_140c560a0(uVar4);
              if (lVar8 == 1) {
                lVar8 = FUN_140c55c70(lVar7 + 0x68);
                local_f8 = FUN_140c75ed0(local_98,*(undefined8 *)(lVar8 + 0x200));
                lVar8 = FUN_140c55c70(param_1 + 0xbc);
                FUN_140c63230(lVar8 + 0xf8);
                lVar8 = FUN_140c55c70(param_1 + 0xbc);
                cVar1 = operator==<>(lVar8 + 0xf8);
                if (cVar1 != '\0') {
                  FUN_140d55f00(lVar7,2,0x50);
                  local_1a8 = 0;
                  FUN_140c5ccf0(local_198);
                  FUN_140c55d60(local_1c0);
                  FUN_140c56ac0(local_1d8);
                  FUN_140c5ccf0(local_1d0);
                  return local_1a8;
                }
              }
            }
            FUN_140c5ccf0(local_198);
          }
          FUN_140d55f00(lVar7,2,0x32);
          FUN_140c6c4e0(0x10,0,0x7f,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                        ,CONCAT44(uVar3,0xc4));
          local_1b1 = 0;
          FUN_140c55d60(local_1c0);
          FUN_140c56ac0(local_1d8);
          FUN_140c5ccf0(local_1d0);
          return local_1b1;
        }
      }
    }
  }
  FUN_140d55f00(lVar7,2,0x32);
  FUN_140c6c4e0(0x10,0,0x89,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                ,CONCAT44(uVar3,0xb1));
  local_1b3 = 0;
  FUN_140c5ccf0(local_1d0);
  return local_1b3;
}


/* address=140d50460 name=FUN_140d50460 */

ulonglong FUN_140d50460(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar7;
  undefined local_b8;
  byte local_b7;
  byte local_b6;
  byte local_b5;
  undefined2 local_b4 [2];
  longlong local_b0;
  uint local_a8;
  undefined local_a0 [16];
  undefined *local_90;
  undefined8 local_88;
  undefined local_80 [16];
  undefined local_70 [24];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_b0 = *param_1;
  cVar1 = operator==<>(param_1 + 0xbb,0);
  if (cVar1 == '\0') {
    puVar4 = (undefined *)(param_2 + 8);
    puVar6 = local_80;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar2 = FUN_140d35710(local_80,local_b4);
    if (((iVar2 == 0) || (iVar2 = FUN_140d35a70(local_80,local_70), iVar2 == 0)) ||
       (lVar5 = FUN_140d354c0(local_80), lVar5 != 0)) {
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,CONCAT44(uVar7,0x14c));
      uVar3 = FUN_140d55f00(local_b0,2,0x32);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      local_b8 = 0x32;
      cVar1 = FUN_140d27820(param_1,&local_b8,local_b4[0]);
      if (cVar1 == '\0') {
        uVar3 = FUN_140d55f00(local_b0,2,local_b8);
        uVar3 = uVar3 & 0xffffffffffffff00;
      }
      else {
        lVar5 = FUN_140c55c70(param_1 + 0xbc);
        *(undefined2 *)(lVar5 + 8) = local_b4[0];
        FUN_140c56440(local_a0);
        local_a8 = (uint)((*(byte *)(local_b0 + 0xa4) & 1) != 0);
        cVar1 = FUN_140d51c10(param_1,local_a0,local_a8);
        if (cVar1 == '\0') {
          FUN_140d55f00(local_b0,2,0x50);
          local_b7 = 0;
          FUN_140c564c0(local_a0);
          uVar3 = (ulonglong)local_b7;
        }
        else {
          local_90 = local_38;
          puVar4 = (undefined *)FUN_140c57dd0(local_90,local_a0);
          puVar6 = local_58;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          local_88 = FUN_140c55c70(param_1 + 0xbb);
          puVar4 = (undefined *)FUN_140c630f0(local_70,local_28);
          puVar6 = local_48;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          cVar1 = FUN_140c7c9e0(local_b0,local_48,local_b4[0],local_88,local_58);
          if (cVar1 == '\0') {
            FUN_140c6c4e0(0x10,0,0x72,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                          ,0x162);
            FUN_140d55f00(local_b0,2,0x33);
            local_b6 = 0;
            FUN_140c564c0(local_a0);
            uVar3 = (ulonglong)local_b6;
          }
          else {
            local_b5 = 1;
            FUN_140c564c0(local_a0);
            uVar3 = (ulonglong)local_b5;
          }
        }
      }
    }
  }
  else {
    uVar3 = FUN_140c6c4e0(0x10,0,0x44,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                          ,CONCAT44(uVar7,0x143));
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}


/* address=140d50750 name=FUN_140d50750 */

void FUN_140d50750(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined auStack_f8 [32];
  undefined4 local_d8;
  undefined local_c8;
  undefined local_c7;
  undefined local_c6;
  longlong local_c0;
  undefined local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_f8;
  local_c0 = *param_1;
  FUN_140c55f20(local_b8);
  if (param_3 == '\0') {
    local_c8 = (*(byte *)(local_c0 + 0xa4) & 1) == 0;
    cVar1 = FUN_140dc1bb0(param_1,local_68,&local_a8,local_c8);
    if (cVar1 == '\0') goto LAB_140d50917;
    puVar4 = (undefined *)FUN_140c55fe0(local_78,local_68,local_a8);
    puVar6 = local_b8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    if ((*(byte *)(local_c0 + 0xa4) & 1) == 0) {
      FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x170);
    }
    uVar3 = FUN_140d51fc0(param_1,local_88);
    FUN_140c57dd0(local_98,uVar3);
    puVar4 = local_98;
    puVar6 = local_b8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  local_a0 = FUN_140c55f80(local_b8);
  uVar3 = FUN_140c55c70(local_b8);
  iVar2 = FUN_140d35650(param_2 + 8,uVar3,local_a0);
  local_c7 = iVar2 != 0;
  local_c6 = local_c7;
  if (!(bool)local_c7) {
    FUN_140d55f00(local_c0,2,0x33);
    local_d8 = 0x181;
    FUN_140c6c4e0(0x10,0,0x8e,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                 );
  }
LAB_140d50917:
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_f8);
  return;
}


/* address=140d50940 name=FUN_140d50940 */

undefined FUN_140d50940(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong lVar10;
  undefined *puVar11;
  undefined *local_378;
  undefined local_370 [16];
  ulonglong local_360;
  code **local_358;
  code **local_350;
  undefined local_348 [48];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  longlong local_300;
  code **local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  code **local_2c8;
  longlong local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  undefined local_280 [56];
  undefined local_248 [16];
  undefined local_238 [16];
  undefined local_228 [16];
  undefined local_218 [16];
  undefined local_208 [48];
  undefined local_1d8 [48];
  undefined local_1a8 [16];
  undefined local_198 [16];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [48];
  undefined local_138 [48];
  undefined local_108 [48];
  undefined local_d8 [48];
  undefined local_a8 [48];
  undefined local_78 [48];
  undefined local_48 [56];
  
  plVar1 = *param_1;
  lVar6 = FUN_140c55c70(param_1[1] + 4);
  local_2e0 = FUN_140c55c70(lVar6 + 0x98);
  FUN_140c57a60(local_348);
  if ((*(byte *)((longlong)param_1 + 0x622) >> 5 & 1) == 0) {
    local_378 = local_48;
    uVar7 = FUN_140c55cd0(local_348);
    local_290 = *plVar1;
    cVar2 = (**(code **)(local_290 + 0x58))(plVar1,uVar7,local_378,0xb);
    if (cVar2 == '\0') {
      FUN_140c57a90(local_348);
      return 0;
    }
  }
  else {
    uVar7 = FUN_140c55cd0(local_348);
    iVar4 = FUN_140d376f0(uVar7,0x400);
    if (iVar4 == 0) {
      FUN_140c57a90(local_348);
      return 0;
    }
    local_378 = (undefined *)FUN_140c55cd0(local_348);
  }
  iVar4 = FUN_140d380f0(local_378,0);
  if ((iVar4 == 0) || (iVar4 = FUN_140d37e10(local_378,local_208), iVar4 == 0)) {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                  ,0x19f);
    FUN_140c57a90(local_348);
    return 0;
  }
  cVar2 = FUN_140c71ef0(param_1);
  if (cVar2 == '\0') {
    uVar7 = FUN_140c55cd0(local_348);
    uVar3 = FUN_140d42620(plVar1,uVar7);
    FUN_140c57a90(local_348);
    return uVar3;
  }
  uVar7 = FUN_140c55c70(lVar6 + 8);
  local_318 = FUN_140c560c0(uVar7,0);
  iVar4 = FUN_140d37e10(local_208,local_138);
  if (iVar4 == 0) {
LAB_140d50bb8:
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                  ,0x1ad);
    FUN_140c57a90(local_348);
    return 0;
  }
  local_288 = FUN_140c760d0(local_318);
  uVar7 = FUN_140c760b0(local_318);
  iVar4 = FUN_140d37f00(local_138,uVar7,local_288);
  if ((iVar4 == 0) || (iVar4 = FUN_140d37de0(local_208,local_280), iVar4 == 0)) goto LAB_140d50bb8;
  if (((*(byte *)(param_1 + 0xc4) >> 2 & 1) != 0) &&
     (cVar2 = FUN_140c57ae0(lVar6 + 0x60,0), cVar2 != '\0')) {
    iVar4 = FUN_140d38120(local_280,0x12);
    if ((iVar4 == 0) || (iVar4 = FUN_140d37de0(local_280,local_108), iVar4 == 0)) {
LAB_140d50ccc:
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,0x1ba);
      FUN_140c57a90(local_348);
      return 0;
    }
    uVar7 = FUN_140c55c70(lVar6 + 0x60);
    local_2f0 = FUN_140c760d0(uVar7);
    uVar7 = FUN_140c55c70(lVar6 + 0x60);
    uVar7 = FUN_140c760b0(uVar7);
    iVar4 = FUN_140d37f00(local_108,uVar7,local_2f0);
    if ((iVar4 == 0) || (iVar4 = FUN_140d37900(local_280), iVar4 == 0)) goto LAB_140d50ccc;
  }
  if ((*(char *)(param_1 + 0xc4) < '\0') && (cVar2 = FUN_140c57ae0(lVar6 + 0x68,0), cVar2 != '\0'))
  {
    iVar4 = FUN_140d38120(local_280,5);
    if ((iVar4 == 0) ||
       (((iVar4 = FUN_140d37de0(local_280,local_168), iVar4 == 0 ||
         (iVar4 = FUN_140d380f0(local_168,1), iVar4 == 0)) ||
        (iVar4 = FUN_140d37e10(local_168,local_d8), iVar4 == 0)))) {
LAB_140d50e14:
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,0x1c9);
      FUN_140c57a90(local_348);
      return 0;
    }
    uVar7 = FUN_140c55c70(lVar6 + 0x68);
    local_2e8 = FUN_140c760d0(uVar7);
    uVar7 = FUN_140c55c70(lVar6 + 0x68);
    uVar7 = FUN_140c760b0(uVar7);
    iVar4 = FUN_140d37f00(local_d8,uVar7,local_2e8);
    if ((iVar4 == 0) || (iVar4 = FUN_140d37900(local_280), iVar4 == 0)) goto LAB_140d50e14;
  }
  cVar2 = FUN_140c73470(param_1);
  if (cVar2 != '\0') {
    local_310 = FUN_140c55c70(local_2e0);
    iVar4 = FUN_140d38120(local_280,0x22);
    if ((iVar4 == 0) || (iVar4 = FUN_140d37de0(local_280,local_a8), iVar4 == 0)) {
LAB_140d50f02:
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,0x1d6);
      FUN_140c57a90(local_348);
      return 0;
    }
    local_2d8 = FUN_140c760d0(local_310);
    uVar7 = FUN_140c760b0(local_310);
    iVar4 = FUN_140d37f00(local_a8,uVar7,local_2d8);
    if ((iVar4 == 0) || (iVar4 = FUN_140d37900(local_280), iVar4 == 0)) goto LAB_140d50f02;
    *(byte *)(plVar1[6] + 0xdc) = *(byte *)(plVar1[6] + 0xdc) | 0x80;
  }
  local_360 = 1;
  while( true ) {
    uVar7 = FUN_140c55c70(lVar6 + 8);
    uVar8 = FUN_140c560a0(uVar7);
    if (uVar8 <= local_360) break;
    uVar7 = FUN_140c55c70(lVar6 + 8);
    local_308 = FUN_140c560c0(uVar7,local_360);
    iVar4 = FUN_140d37e10(local_208,local_78);
    if (iVar4 == 0) {
LAB_140d51030:
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,0x1e3);
      FUN_140c57a90(local_348);
      return 0;
    }
    local_2d0 = FUN_140c760d0(local_308);
    uVar7 = FUN_140c760b0(local_308);
    iVar4 = FUN_140d37f00(local_78,uVar7,local_2d0);
    if ((iVar4 == 0) || (iVar4 = FUN_140d38120(local_208,0), iVar4 == 0)) goto LAB_140d51030;
    local_360 = local_360 + 1;
  }
  if ((*(byte *)((longlong)param_1 + 0x622) >> 5 & 1) == 0) {
    uVar7 = FUN_140c55cd0(local_348);
    uVar3 = FUN_140d42620(plVar1,uVar7);
    FUN_140c57a90(local_348);
    return uVar3;
  }
  FUN_140c56440(local_370);
  uVar7 = FUN_140c55cd0(local_348);
  cVar2 = FUN_140c535c0(uVar7,local_370);
  if (cVar2 == '\0') {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                  ,0x1ee);
    FUN_140c564c0(local_370);
    FUN_140c57a90(local_348);
    return 0;
  }
  local_350 = (code **)0x0;
  local_300 = FUN_140c55c70(plVar1 + 0xd);
  local_300 = local_300 + 0x1b8;
  local_358 = (code **)FUN_140c57590(local_300);
  local_2c8 = (code **)FUN_140c575b0(local_300);
  for (; local_358 != local_2c8; local_358 = local_358 + 3) {
    local_2f8 = local_358;
    if (*(short *)(local_358 + 2) == *(short *)(param_1 + 0x59)) {
      local_350 = local_358;
      break;
    }
  }
  if ((local_350 == (code **)0x0) || (*local_350 == (code *)0x0)) {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                  ,0x1fb);
    FUN_140c564c0(local_370);
    FUN_140c57a90(local_348);
    return 0;
  }
  uVar7 = FUN_140c55cd0(local_348);
  local_2c0 = *plVar1;
  cVar2 = (**(code **)(local_2c0 + 0x58))(plVar1,uVar7,local_48,0x19);
  if (((cVar2 == '\0') ||
      (iVar4 = FUN_140d38120(local_48,*(undefined2 *)(param_1 + 0x59)), iVar4 == 0)) ||
     (uVar8 = FUN_140c55f80(local_370), 0xffffff < uVar8)) {
LAB_140d51303:
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                  ,0x207);
    FUN_140c564c0(local_370);
    FUN_140c57a90(local_348);
    return 0;
  }
  uVar5 = FUN_140c55f80(local_370);
  iVar4 = FUN_140d38180(local_48,uVar5);
  if ((iVar4 == 0) || (iVar4 = FUN_140d37e10(local_48,local_1d8), iVar4 == 0)) goto LAB_140d51303;
  lVar6 = FUN_140c55c70(param_1 + 0xc3);
  if ((lVar6 != 0) &&
     (((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) == 0 &&
      (*(short *)(lVar6 + 0x92) == *(short *)(param_1 + 0x59))))) {
    local_2b8 = local_1a8;
    puVar9 = (undefined *)FUN_140c71580(local_198,local_370);
    puVar11 = local_218;
    for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    puVar9 = (undefined *)FUN_140c57dd0(local_2b8,lVar6 + 0x98);
    puVar11 = local_248;
    for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    cVar2 = FUN_140c63130(local_248,local_218);
    if ((cVar2 != '\0') && (cVar2 = FUN_140c55f90(lVar6 + 0xa8), cVar2 == '\0')) {
      local_2b0 = FUN_140c55f80(lVar6 + 0xa8);
      uVar7 = FUN_140c55c70(lVar6 + 0xa8);
      iVar4 = FUN_140d37f00(local_1d8,uVar7,local_2b0);
      if (iVar4 == 0) {
        FUN_140c6c4e0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                      ,0x212);
        FUN_140c564c0(local_370);
        FUN_140c57a90(local_348);
        return 0;
      }
      goto LAB_140d516b7;
    }
  }
  local_2a8 = FUN_140c55f80(local_370);
  uVar7 = FUN_140c55c70(local_370);
  iVar4 = (**local_350)(plVar1,local_1d8,uVar7,local_2a8);
  if (iVar4 == 0) {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                  ,0x217);
    FUN_140c564c0(local_370);
    FUN_140c57a90(local_348);
    return 0;
  }
  if ((lVar6 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) {
    *(undefined2 *)(lVar6 + 0x92) = *(undefined2 *)(param_1 + 0x59);
    local_2a0 = local_188;
    puVar9 = (undefined *)FUN_140c57dd0(local_2a0,local_370);
    puVar11 = local_238;
    for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    cVar2 = FUN_140c566e0(lVar6 + 0x98,local_238);
    if (cVar2 != '\0') {
      local_298 = FUN_140d37cf0(local_1d8);
      uVar7 = FUN_140d37c70(local_1d8);
      puVar9 = (undefined *)FUN_140c55fe0(local_178,uVar7,local_298);
      puVar11 = local_228;
      for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      cVar2 = FUN_140c566e0(lVar6 + 0xa8,local_228);
      if (cVar2 != '\0') goto LAB_140d516b7;
    }
    FUN_140c564c0(local_370);
    FUN_140c57a90(local_348);
    return 0;
  }
LAB_140d516b7:
  uVar7 = FUN_140c55cd0(local_348);
  cVar2 = FUN_140d42620(plVar1,uVar7);
  if (cVar2 == '\0') {
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                  ,0x225);
    FUN_140c564c0(local_370);
    FUN_140c57a90(local_348);
    return 0;
  }
  FUN_140c564c0(local_370);
  FUN_140c57a90(local_348);
  return 1;
}


/* address=140d51750 name=FUN_140d51750 */

int FUN_140d51750(longlong **param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined4 in_stack_fffffffffffffeb8;
  undefined2 uVar7;
  undefined2 local_138 [4];
  longlong *local_130;
  uint local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined local_108 [16];
  longlong local_f8;
  longlong local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined local_d0 [56];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [48];
  undefined local_48 [56];
  
  uVar7 = (undefined2)((uint)in_stack_fffffffffffffeb8 >> 0x10);
  local_130 = *param_1;
  cVar1 = FUN_140d27430(param_1,local_138);
  if (cVar1 == '\0') {
    FUN_140d55f00(local_130,2,0x28);
    local_120 = 2;
  }
  else {
    FUN_140c57a60(local_d0);
    uVar3 = FUN_140c55cd0(local_d0);
    local_f0 = *local_130;
    cVar1 = (**(code **)(local_f0 + 0x58))(local_130,uVar3,local_78,0xf);
    if ((cVar1 == '\0') || (iVar2 = FUN_140d38120(local_78,local_138[0]), iVar2 == 0)) {
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                    ,0x239);
      local_120 = 2;
      FUN_140c57a90(local_d0);
    }
    else {
      uVar3 = FUN_140c55c70(param_1 + 0xba);
      iVar2 = FUN_140d31a60(uVar3);
      local_f8 = (longlong)iVar2;
      iVar2 = FUN_140d37de0(local_78,local_48);
      if ((iVar2 == 0) || (iVar2 = FUN_140d38010(local_48,&local_e0,local_f8), iVar2 == 0)) {
        FUN_140d55f00(local_130,2,0x50);
        local_11c = 2;
        FUN_140c57a90(local_d0);
        local_120 = local_11c;
      }
      else {
        FUN_140c56440(local_108);
        local_128 = (uint)((*(byte *)((longlong)local_130 + 0xa4) & 1) == 0);
        cVar1 = FUN_140d51c10(param_1,local_108,local_128);
        if (cVar1 == '\0') {
          FUN_140d55f00(local_130,2,0x50);
          local_118 = 2;
          FUN_140c564c0(local_108);
          FUN_140c57a90(local_d0);
          local_120 = local_118;
        }
        else {
          local_e8 = local_88;
          puVar4 = (undefined *)FUN_140c57dd0(local_e8,local_108);
          puVar6 = local_98;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          local_124 = FUN_140c7bee0(param_1,local_e0,&local_d8,local_f8,CONCAT22(uVar7,local_138[0])
                                    ,local_98);
          if (local_124 == 0) {
            iVar2 = FUN_140d38070(local_48,local_d8);
            if (iVar2 != 0) {
              uVar3 = FUN_140c55cd0(local_d0);
              cVar1 = FUN_140d42620(local_130,uVar3);
              if (cVar1 != '\0') {
                local_10c = 0;
                FUN_140c564c0(local_108);
                FUN_140c57a90(local_d0);
                return local_10c;
              }
            }
            local_110 = 2;
            FUN_140c564c0(local_108);
            FUN_140c57a90(local_d0);
            local_120 = local_110;
          }
          else {
            local_114 = local_124;
            FUN_140c564c0(local_108);
            FUN_140c57a90(local_d0);
            local_120 = local_114;
          }
        }
      }
    }
  }
  return local_120;
}


/* address=140d51aa0 name=FUN_140d51aa0 */

void FUN_140d51aa0(longlong **param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined auStack_108 [32];
  undefined4 local_e8;
  undefined local_d8;
  undefined local_d7;
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined local_b8 [48];
  undefined local_88 [48];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_108;
  local_d0 = *param_1;
  cVar1 = FUN_140dc1bb0(param_1,local_58,&local_c0,*(byte *)((longlong)local_d0 + 0xa4) & 1);
  if (cVar1 == '\0') {
    FUN_140d55f00(local_d0,2,0x50);
    local_e8 = 0x264;
    FUN_140c6c4e0(0x10,0,0x8e,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                 );
  }
  else {
    FUN_140c57a60(local_b8);
    uVar3 = FUN_140c55cd0(local_b8);
    local_c8 = *local_d0;
    cVar1 = (**(code **)(local_c8 + 0x58))(local_d0,uVar3,local_88,0x14);
    if (cVar1 != '\0') {
      iVar2 = FUN_140d37f00(local_88,local_58,local_c0);
      if (iVar2 != 0) {
        uVar3 = FUN_140c55cd0(local_b8);
        cVar1 = FUN_140d42620(local_d0,uVar3);
        if (cVar1 != '\0') {
          local_d7 = 1;
          FUN_140c57a90(local_b8);
          goto LAB_140d51be8;
        }
      }
    }
    local_d8 = 0;
    FUN_140c57a90(local_b8);
  }
LAB_140d51be8:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_108);
  return;
}


/* address=140d51c10 name=FUN_140d51c10 */

void FUN_140d51c10(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined auStack_128 [32];
  undefined local_108;
  undefined local_107;
  undefined local_106;
  undefined local_105;
  undefined local_104;
  undefined local_103;
  ulonglong local_100;
  undefined local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined local_d0 [48];
  undefined local_a0 [16];
  undefined local_90 [16];
  undefined local_80 [24];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413d9c40 ^ (ulonglong)auStack_128;
  FUN_140c57a60(local_d0);
  uVar3 = FUN_140c55cd0(local_d0);
  iVar2 = FUN_140d376f0(uVar3,0xe2);
  if (iVar2 == 0) {
    local_108 = 0;
    FUN_140c57a90(local_d0);
  }
  else {
    for (local_100 = 0; local_100 < 0x40; local_100 = local_100 + 1) {
      uVar3 = FUN_140c55cd0(local_d0);
      iVar2 = FUN_140d380f0(uVar3,0x20);
      if (iVar2 == 0) {
        local_107 = 0;
        FUN_140c57a90(local_d0);
        goto LAB_140d51e96;
      }
    }
    FUN_140c55f20(local_f8);
    if (param_3 == 0) {
      FUN_140d52000(local_a0,"TLS 1.3, server CertificateVerify");
      puVar5 = local_a0;
      puVar6 = local_f8;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    else if (param_3 == 1) {
      FUN_140d52000(local_90,"TLS 1.3, client CertificateVerify");
      puVar5 = local_90;
      puVar6 = local_f8;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    else {
      if (param_3 != 2) {
        local_106 = 0;
        FUN_140c57a90(local_d0);
        goto LAB_140d51e96;
      }
      FUN_140d52030(local_80,"TLS 1.3, Channel ID");
      puVar5 = local_80;
      puVar6 = local_f8;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    local_e8 = FUN_140c55f80(local_f8);
    local_e0 = FUN_140c55c70(local_f8);
    uVar3 = FUN_140c55cd0(local_d0);
    iVar2 = FUN_140d37f00(uVar3,local_e0,local_e8);
    if (iVar2 == 0) {
      local_105 = 0;
      FUN_140c57a90(local_d0);
    }
    else {
      cVar1 = FUN_140dbff30(param_1 + 0x198,local_68,&local_d8);
      if (cVar1 != '\0') {
        uVar3 = FUN_140c55cd0(local_d0);
        iVar2 = FUN_140d37f00(uVar3,local_68,local_d8);
        if (iVar2 != 0) {
          uVar3 = FUN_140c55cd0(local_d0);
          cVar1 = FUN_140c535c0(uVar3,param_2);
          if (cVar1 != '\0') {
            local_103 = 1;
            FUN_140c57a90(local_d0);
            goto LAB_140d51e96;
          }
        }
      }
      local_104 = 0;
      FUN_140c57a90(local_d0);
    }
  }
LAB_140d51e96:
  FUN_140db44f0(local_28 ^ (ulonglong)auStack_128);
  return;
}


/* address=140d51ec0 name=FUN_140d51ec0 */

ulonglong FUN_140d51ec0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  char local_38 [8];
  undefined local_30 [32];
  
  puVar5 = (undefined *)(param_2 + 8);
  puVar6 = local_30;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar2 = FUN_140d356c0(local_30,local_38);
  if (((iVar2 == 0) || (lVar4 = FUN_140d354c0(local_30), lVar4 != 0)) ||
     ((local_38[0] != '\0' && (local_38[0] != '\x01')))) {
    FUN_140c6c4e0(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_both.cc"
                  ,0x28d);
    uVar3 = FUN_140d55f00(param_1,2,0x32);
    return uVar3 & 0xffffffffffffff00;
  }
  cVar1 = FUN_140dc11f0(param_1,0);
  if (cVar1 == '\0') {
    return 0;
  }
  if (((local_38[0] == '\x01') && ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdd) >> 2 & 1) == 0))
     && (cVar1 = FUN_140d4f1a0(param_1,0), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}


/* address=140d51fc0 name=FUN_140d51fc0 */

undefined8 FUN_140d51fc0(longlong param_1,undefined8 param_2)

{
  FUN_140c55fe0(param_2,param_1 + 0x148,*(undefined8 *)(param_1 + 0x20));
  return param_2;
}


/* address=140d52000 name=FUN_140d52000 */

undefined8 FUN_140d52000(undefined8 param_1,undefined8 param_2)

{
  FUN_140c55f50(param_1,param_2,0x22);
  return param_1;
}


/* address=140d52030 name=FUN_140d52030 */

undefined8 FUN_140d52030(undefined8 param_1,undefined8 param_2)

{
  FUN_140c55f50(param_1,param_2,0x14);
  return param_1;
}


/* address=140d52060 name=FUN_140d52060 */

undefined8 FUN_140d52060(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d520b0 name=FUN_140d520b0 */

int FUN_140d520b0(undefined8 *param_1)

{
  int iVar1;
  int local_18;
  
  do {
    if (*(int *)(param_1 + 3) == 0xe) {
      return 1;
    }
    local_18 = 0;
    iVar1 = *(int *)(param_1 + 3);
    switch(iVar1) {
    case 0:
      local_18 = FUN_140d53190(param_1);
      break;
    case 1:
      local_18 = FUN_140d53b30(param_1);
      break;
    case 2:
      local_18 = FUN_140d53c00(param_1);
      break;
    case 3:
      local_18 = FUN_140d54780(param_1);
      break;
    case 4:
      local_18 = FUN_140d54dd0(param_1);
      break;
    case 5:
      local_18 = FUN_140d551c0(param_1);
      break;
    case 6:
      local_18 = FUN_140d55290(param_1);
      break;
    case 7:
      local_18 = FUN_140d55380(param_1);
      break;
    case 8:
      local_18 = FUN_140d553e0(param_1);
      break;
    case 9:
      local_18 = FUN_140d55570(param_1);
      break;
    case 10:
      local_18 = FUN_140d55680(param_1);
      break;
    case 0xb:
      local_18 = FUN_140d55850(param_1);
      break;
    case 0xc:
      local_18 = FUN_140d559c0(param_1);
      break;
    case 0xd:
      local_18 = FUN_140d55a70(param_1);
    }
    if (*(int *)(param_1 + 3) != iVar1) {
      FUN_140c53630(*param_1,0x1001,1);
    }
  } while (local_18 == 1);
  return local_18;
}


/* address=140d52290 name=FUN_140d52290 */

char * FUN_140d52290(longlong param_1)

{
  char *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    pcVar1 = "TLS 1.3 client read_hello_retry_request";
    break;
  case 1:
    pcVar1 = "TLS 1.3 client send_second_client_hello";
    break;
  case 2:
    pcVar1 = "TLS 1.3 client read_server_hello";
    break;
  case 3:
    pcVar1 = "TLS 1.3 client read_encrypted_extensions";
    break;
  case 4:
    pcVar1 = "TLS 1.3 client read_certificate_request";
    break;
  case 5:
    pcVar1 = "TLS 1.3 client read_server_certificate";
    break;
  case 6:
    pcVar1 = "TLS 1.3 client read_server_certificate_verify";
    break;
  case 7:
    pcVar1 = "TLS 1.3 client server_certificate_reverify";
    break;
  case 8:
    pcVar1 = "TLS 1.3 client read_server_finished";
    break;
  case 9:
    pcVar1 = "TLS 1.3 client send_end_of_early_data";
    break;
  case 10:
    pcVar1 = "TLS 1.3 client send_client_encrypted_extensions";
    break;
  case 0xb:
    pcVar1 = "TLS 1.3 client send_client_certificate";
    break;
  case 0xc:
    pcVar1 = "TLS 1.3 client send_client_certificate_verify";
    break;
  case 0xd:
    pcVar1 = "TLS 1.3 client complete_second_flight";
    break;
  case 0xe:
    pcVar1 = "TLS 1.3 client done";
    break;
  default:
    pcVar1 = "TLS 1.3 client unknown";
  }
  return pcVar1;
}


/* address=140d523b0 name=FUN_140d523b0 */

undefined8 FUN_140d523b0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  local_40 [8];
  undefined local_38 [8];
  undefined8 local_30;
  undefined local_28 [24];
  
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0xb0) == 0) {
    puVar5 = (undefined *)(param_2 + 8);
    puVar6 = local_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = FUN_140d524e0(local_38,param_1,local_28);
    FUN_140c55e70(local_40,uVar3);
    FUN_140c56300(local_38);
    cVar1 = FUN_140c56050(local_40);
    if (cVar1 == '\0') {
      FUN_140c56300(local_40);
      uVar3 = 0;
    }
    else {
      lVar4 = FUN_140c55c70(param_1 + 0x70);
      if ((*(uint *)(lVar4 + 0x5c) & 1) != 0) {
        lVar4 = FUN_140c55c70(param_1 + 0x70);
        if (*(longlong *)(lVar4 + 0x68) != 0) {
          local_30 = FUN_140c55c70(local_40);
          lVar4 = FUN_140c55c70(param_1 + 0x70);
          iVar2 = (**(code **)(lVar4 + 0x68))(param_1,local_30);
          if (iVar2 != 0) {
            std::
            unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
            release(local_40);
          }
        }
      }
      FUN_140c56300(local_40);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x30) >> 8),1);
  }
  return uVar3;
}


/* address=140d524e0 name=FUN_140d524e0 */

undefined8 FUN_140d524e0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined local_118 [8];
  undefined local_110 [8];
  uint local_108 [2];
  byte *local_100;
  byte *local_f8;
  undefined *local_f0;
  undefined local_e8 [8];
  undefined local_e0 [8];
  longlong local_d8;
  undefined8 local_d0;
  undefined local_c8 [16];
  undefined local_b8 [3];
  char local_b5;
  undefined local_b0 [24];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar3 = FUN_140c55c70(*(longlong *)(param_2 + 0x30) + 0x1d0);
  uVar3 = FUN_140c60c00(local_e0,uVar3,2);
  FUN_140c55e70(local_110,uVar3);
  FUN_140c56300(local_e0);
  cVar1 = FUN_140c56050(local_110);
  if (cVar1 == '\0') {
    FUN_140c5cfa0(param_1,0);
    FUN_140c56300(local_110);
    return param_1;
  }
  uVar3 = FUN_140c55c70(local_110);
  FUN_140c61690(param_2,uVar3);
  iVar2 = FUN_140d35800(param_3,local_108);
  if (iVar2 != 0) {
    lVar4 = FUN_140c55c70(local_110);
    iVar2 = FUN_140d35800(param_3,lVar4 + 0x170);
    if (((iVar2 != 0) && (iVar2 = FUN_140d35a40(param_3,local_88), iVar2 != 0)) &&
       (iVar2 = FUN_140d35a70(param_3,local_c8), iVar2 != 0)) {
      puVar5 = (undefined *)FUN_140c630f0(local_c8,local_48);
      puVar6 = local_98;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      lVar4 = FUN_140c55c70(local_110);
      cVar1 = FUN_140c566e0(lVar4 + 0xe8,local_98);
      if (((cVar1 != '\0') && (iVar2 = FUN_140d35a70(param_3,local_58), iVar2 != 0)) &&
         (lVar4 = FUN_140d354c0(param_3), lVar4 == 0)) {
        lVar4 = FUN_140c55c70(local_110);
        if (local_108[0] < *(uint *)(lVar4 + 0xb4)) {
          lVar4 = FUN_140c55c70(local_110);
          *(uint *)(lVar4 + 0xb4) = local_108[0];
        }
        puVar5 = (undefined *)FUN_140c630f0(local_88,local_38);
        puVar6 = local_78;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar3 = FUN_140c55c70(local_110);
        cVar1 = FUN_140dc1d40(uVar3,local_78);
        if (cVar1 == '\0') {
          FUN_140c5cfa0(param_1,0);
          FUN_140c56300(local_110);
          return param_1;
        }
        FUN_140d48c60(local_b8,0x2a,1);
        local_118[0] = 0x32;
        local_f0 = local_b8;
        puVar5 = (undefined *)FUN_140c55f50(local_28,&local_f0,local_e8);
        puVar6 = local_68;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        cVar1 = FUN_140d41590(local_58,local_118,local_68,1);
        if (cVar1 == '\0') {
          FUN_140d55f00(param_2,2,local_118[0]);
          FUN_140c5cfa0(param_1,0);
          FUN_140c56300(local_110);
          return param_1;
        }
        if (local_b5 != '\0') {
          lVar4 = FUN_140c55c70(local_110);
          iVar2 = FUN_140d35800(local_b0,lVar4 + 0x174);
          if ((iVar2 == 0) || (lVar4 = FUN_140d354c0(local_b0), lVar4 != 0)) {
            FUN_140d55f00(param_2,2,0x32);
            FUN_140c6c4e0(0x10,0,0x89,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                          ,0x44c);
            FUN_140c5cfa0(param_1,0);
            FUN_140c56300(local_110);
            return param_1;
          }
          if ((*(longlong *)(param_2 + 0x98) != 0) &&
             (lVar4 = FUN_140c55c70(local_110), *(int *)(lVar4 + 0x174) != -1)) {
            FUN_140d55f00(param_2,2,0x2f);
            FUN_140c6c4e0(0x10,0,0x89,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                          ,0x455);
            FUN_140c5cfa0(param_1,0);
            FUN_140c56300(local_110);
            return param_1;
          }
        }
        local_d8 = FUN_140c55c70(local_110);
        local_d8 = local_d8 + 0x3c;
        local_d0 = FUN_140d354c0(local_c8);
        uVar3 = FUN_140d354a0(local_c8);
        FUN_140c7e500(uVar3,local_d0,local_d8);
        lVar4 = FUN_140c55c70(local_110);
        *(undefined *)(lVar4 + 0x3b) = 0x20;
        lVar4 = FUN_140c55c70(local_110);
        local_100 = (byte *)(lVar4 + 0x1a8);
        *local_100 = *local_100 | 8;
        lVar4 = FUN_140c55c70(local_110);
        local_f8 = (byte *)(lVar4 + 0x1a8);
        *local_f8 = *local_f8 & 0xfb;
        FUN_140c55e70(param_1,local_110);
        FUN_140c56300(local_110);
        return param_1;
      }
    }
  }
  FUN_140d55f00(param_2,2,0x32);
  FUN_140c6c4e0(0x10,0,0x89,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                ,0x432);
  FUN_140c5cfa0(param_1,0);
  FUN_140c56300(local_110);
  return param_1;
}


/* address=140d52a40 name=FUN_140d52a40 */

undefined8 FUN_140d52a40(longlong **param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined local_a8 [8];
  undefined local_a0 [8];
  undefined *local_98;
  undefined *local_90;
  longlong local_88;
  undefined *local_80;
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  plVar1 = *param_1;
  if ((*(byte *)((longlong)param_1 + 0x621) >> 3 & 1) == 0) {
    FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x3c);
  }
  *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) & 0xbf;
  if (plVar1[0x13] == 0) {
    if (param_2 == 0) {
      iVar3 = FUN_140c4c520(plVar1);
      uVar4 = FUN_140d3ae40(local_a0,iVar3 != 0);
      FUN_140c55e70(local_a8,uVar4);
      FUN_140c67a20(local_a0);
      cVar2 = FUN_140c56050(local_a8);
      if (cVar2 != '\0') {
        local_98 = local_48;
        local_90 = local_78;
        puVar5 = (undefined *)FUN_140c55f20(local_98);
        puVar7 = local_68;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar4 = FUN_140c55cd0(local_a8);
        uVar4 = FUN_140c55e70(local_90,uVar4);
        local_88 = *plVar1;
        cVar2 = (**(code **)(local_88 + 0x90))(plVar1,0,uVar4,local_68);
        if (cVar2 != '\0') {
          uVar4 = FUN_140c55c70(plVar1[6] + 0x110);
          FUN_140d3b790(uVar4,*(undefined2 *)(plVar1 + 2));
          FUN_140c67a20(local_a8);
          goto LAB_140d52ca8;
        }
      }
      FUN_140c67a20(local_a8);
      return 0;
    }
    if (param_2 != 2) {
      FID_conflict__assert((wchar_t *)"l",(wchar_t *)"D",0x5b);
    }
    local_80 = local_38;
    uVar4 = FUN_140d55db0(param_1,local_28);
    puVar5 = (undefined *)FUN_140c57dd0(local_80,uVar4);
    puVar7 = local_58;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar4 = FUN_140c55c70(param_1 + 0xbc);
    cVar2 = FUN_140dc0720(plVar1,2,1,uVar4,local_58);
    if (cVar2 == '\0') {
      return 0;
    }
  }
LAB_140d52ca8:
  lVar6 = plVar1[6];
  if (*(int *)(lVar6 + 0xcc) != param_2) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",100);
    lVar6 = 0;
  }
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
}


/* address=140d52cf0 name=FUN_140d52cf0 */

undefined8 FUN_140d52cf0(longlong param_1,longlong param_2,undefined *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = FUN_140d43520(param_2,param_3,param_4);
  if (cVar1 != '\0') {
    if ((((*(short *)(param_2 + 0x10) == 0x303) && (*(char *)(param_2 + 0x3a) == '\0')) &&
        (iVar2 = FUN_140d35650(param_2 + 0x28,param_1 + 0x62b,*(undefined *)(param_1 + 0x64b)),
        iVar2 != 0)) && (lVar3 = FUN_140d354c0(param_2 + 0x40), lVar3 != 0)) {
      return 1;
    }
    FUN_140c6c4e0(0x10,0,0x89,"D",0x74);
    *param_3 = 0x32;
  }
  return 0;
}


/* address=140d52de0 name=FUN_140d52de0 */

void FUN_140d52de0(longlong param_1)

{
  undefined *puVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar1 = (undefined *)FUN_140c57ab0(local_38,&DAT_1410719c0);
  puVar3 = local_58;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined *)FUN_140c630f0(param_1 + 0x18,local_28);
  puVar3 = local_48;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140c63130(local_48,local_58);
  return;
}


/* address=140d52e60 name=FUN_140d52e60 */

void FUN_140d52e60(undefined8 *param_1,undefined *param_2,undefined *param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_148 [32];
  undefined4 local_128;
  undefined *local_120;
  longlong local_118;
  char local_108;
  uint local_104;
  longlong local_100;
  undefined *local_f8;
  undefined local_f0 [8];
  longlong local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined8 *local_d0;
  undefined local_c8 [3];
  char local_c5;
  undefined local_c0 [24];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1413d9c40 ^ (ulonglong)auStack_148;
  local_108 = FUN_140d52de0(param_4);
  if (local_108 == '\0') {
    local_100 = FUN_140dc2180(*param_1);
  }
  else {
    FUN_140d48c60(local_c8,0xfe0d,1);
    local_f8 = local_c8;
    puVar3 = (undefined *)FUN_140c55f50(local_68,&local_f8,local_f0);
    puVar5 = local_a8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_140d41590(param_4 + 0x40,param_3,local_a8,1);
    if (cVar1 == '\0') goto LAB_140d5316b;
    if (local_c5 == '\0') {
      *param_2 = 0;
      goto LAB_140d5316b;
    }
    lVar4 = FUN_140d354c0(local_c0);
    if (lVar4 != 8) {
      local_128 = 0x90;
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                   );
      *param_3 = 0x32;
      goto LAB_140d5316b;
    }
    local_e8 = FUN_140d354a0(local_c0);
    local_100 = FUN_140d354a0(param_4);
    local_100 = local_e8 - local_100;
  }
  cVar1 = FUN_140c56050(param_1 + 0xbf);
  if (cVar1 == '\0') {
    *param_2 = 0;
  }
  else {
    local_e0 = local_58;
    local_d8 = local_48;
    puVar3 = (undefined *)FUN_140c630f0(param_4,local_38);
    puVar5 = local_98;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    local_d0 = param_1 + 0x38;
    puVar3 = (undefined *)FUN_140c57ab0(local_e0,param_1 + 0x3d);
    puVar5 = local_88;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3 = (undefined *)FUN_140d48cc0(local_d8,local_28);
    puVar5 = local_78;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    local_118 = local_100;
    local_120 = local_98;
    local_128 = CONCAT31(local_128._1_3_,local_108);
    cVar1 = FUN_140dc21d0(param_1,local_78,local_88,local_d0);
    if (cVar1 == '\0') {
      *param_3 = 0x50;
    }
    else {
      lVar4 = FUN_140d354a0(param_4);
      iVar2 = FUN_140c663d0(lVar4 + local_100,local_28,8);
      local_104 = (uint)(iVar2 == 0);
      *param_2 = iVar2 == 0;
    }
  }
LAB_140d5316b:
  FUN_140db44f0(local_20 ^ (ulonglong)auStack_148);
  return;
}


/* address=140d53190 name=FUN_140d53190 */

void FUN_140d53190(longlong **param_1)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined auStack_218 [32];
  undefined4 local_1f8;
  undefined local_1e8;
  char local_1e7;
  longlong *local_1e0;
  undefined local_1d8;
  short local_1d4 [2];
  char local_1d0 [4];
  undefined4 local_1cc;
  longlong *local_1c8;
  uint local_1c0;
  uint local_1bc;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  undefined local_1a0 [3];
  char local_19d;
  undefined local_198 [16];
  undefined local_188 [3];
  char local_185;
  undefined local_180 [16];
  undefined local_170 [24];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [24];
  undefined local_110 [16];
  undefined local_100 [24];
  undefined local_e8 [32];
  undefined local_c8 [56];
  undefined2 local_90;
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1413d9c40 ^ (ulonglong)auStack_218;
  local_1e0 = *param_1;
  if ((*(byte *)(local_1e0[6] + 0xdc) >> 1 & 1) == 0) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0xad);
  }
  cVar1 = (**(code **)(*local_1e0 + 0x18))(local_1e0,local_128);
  if ((cVar1 == '\0') ||
     (((*(byte *)((longlong)param_1 + 0x621) >> 4 & 1) == 0 &&
      (cVar1 = (**(code **)(*local_1e0 + 0x70))(local_1e0), cVar1 == '\0')))) goto LAB_140d53b0d;
  FUN_140d48c30(local_c8);
  local_1e8 = 0x32;
  cVar1 = FUN_140d52cf0(param_1,local_c8,&local_1e8,local_128);
  if (cVar1 == '\0') {
    FUN_140d55f00(local_1e0,2,local_1e8);
    goto LAB_140d53b0d;
  }
  local_1c8 = (longlong *)FUN_140c6e300(local_90);
  if (local_1c8 != (longlong *)0x0) {
    uVar2 = FUN_140c6e700(local_1c8);
    local_1c0 = (uint)uVar2;
    uVar2 = FUN_140c6de20(local_1e0);
    if ((int)local_1c0 <= (int)(uint)uVar2) {
      uVar2 = FUN_140c6e740(local_1c8);
      local_1bc = (uint)uVar2;
      uVar2 = FUN_140c6de20(local_1e0);
      if ((int)(uint)uVar2 <= (int)local_1bc) {
        local_1a8 = FUN_140c55c70(local_1e0 + 1);
        uVar3 = FUN_140c6efe0(local_1c8);
        cVar1 = FUN_140d3cef0(uVar3,*(undefined4 *)(local_1a8 + 0xe8));
        if (cVar1 != '\0') {
          param_1[0xc0] = local_1c8;
          local_1e7 = FUN_140d52de0(local_c8);
          uVar3 = FUN_140c6de20(local_1e0);
          cVar1 = FUN_140dbfa30(param_1 + 0x33,uVar3,param_1[0xc0]);
          if ((cVar1 == '\0') ||
             ((local_1e7 != '\0' && (cVar1 = FUN_140dbfb10(param_1 + 0x33), cVar1 == '\0'))))
          goto LAB_140d53b0d;
          cVar1 = FUN_140c56050(param_1 + 0xbf);
          if (cVar1 != '\0') {
            uVar3 = FUN_140c6de20(local_1e0);
            cVar1 = FUN_140dbfa30(param_1 + 0x38,uVar3,param_1[0xc0]);
            if ((cVar1 == '\0') ||
               ((local_1e7 != '\0' && (cVar1 = FUN_140dbfb10(param_1 + 0x38), cVar1 == '\0'))))
            goto LAB_140d53b0d;
          }
          cVar1 = FUN_140d52e60(param_1,local_1d0,&local_1e8,local_c8);
          if (cVar1 == '\0') {
            FUN_140d55f00(local_1e0,2,local_1e8);
            goto LAB_140d53b0d;
          }
          cVar1 = FUN_140c56050(param_1 + 0xbf);
          if (cVar1 != '\0') {
            if (local_1d0[0] == '\0') {
              local_1cc = 2;
            }
            else {
              local_1cc = 1;
            }
            *(undefined4 *)(local_1e0[6] + 0xd8) = local_1cc;
          }
          if (local_1e7 == '\0') {
            *(undefined4 *)(param_1 + 3) = 2;
            goto LAB_140d53b0d;
          }
          FUN_140d48c60(local_1a0,0x2c,1);
          FUN_140d48c60(local_188,0x33,1);
          FUN_140d48c60(local_100,0x2b,1);
          cVar1 = FUN_140c56050(param_1 + 0xbf);
          if ((cVar1 == '\0') && ((*(byte *)((longlong)param_1[1] + 0xed) & 1) == 0)) {
            local_1d8 = 0;
          }
          else {
            local_1d8 = 1;
          }
          FUN_140d48c60(local_e8,0xfe0d,local_1d8);
          local_48 = local_1a0;
          local_40 = local_188;
          local_38 = local_100;
          local_30 = local_e8;
          puVar6 = (undefined *)FUN_140c55f50(local_78,&local_48,local_28);
          puVar8 = local_158;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          cVar1 = FUN_140d41590(local_88,&local_1e8,local_158,0);
          if (cVar1 == '\0') {
            FUN_140d55f00(local_1e0,2,local_1e8);
            goto LAB_140d53b0d;
          }
          if ((local_19d == '\0') && (local_185 == '\0')) {
            local_1f8 = 0x100;
            FUN_140c6c4e0(0x10,0,0x11a,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                         );
            FUN_140d55f00(local_1e0,2,0x2f);
            goto LAB_140d53b0d;
          }
          if (local_19d != '\0') {
            iVar5 = FUN_140d35a70(local_198,local_170);
            if (((iVar5 == 0) || (lVar7 = FUN_140d354c0(local_170), lVar7 == 0)) ||
               (lVar7 = FUN_140d354c0(local_198), lVar7 != 0)) {
              local_1f8 = 0x109;
              FUN_140c6c4e0(0x10,0,0x89,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                           );
              FUN_140d55f00(local_1e0,2,0x32);
              goto LAB_140d53b0d;
            }
            puVar6 = (undefined *)FUN_140c630f0(local_170,local_68);
            puVar8 = local_148;
            for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            cVar1 = FUN_140c566e0(param_1 + 0x41,local_148);
            if (cVar1 == '\0') goto LAB_140d53b0d;
          }
          if (local_185 != '\0') {
            iVar5 = FUN_140d35710(local_180,local_1d4);
            if ((iVar5 == 0) || (lVar7 = FUN_140d354c0(local_180), lVar7 != 0)) {
              local_1f8 = 0x117;
              FUN_140c6c4e0(0x10,0,0x89,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                           );
              FUN_140d55f00(local_1e0,2,0x32);
              goto LAB_140d53b0d;
            }
            cVar1 = FUN_140d27960(param_1,local_1d4[0]);
            if (cVar1 == '\0') {
              FUN_140d55f00(local_1e0,2,0x2f);
              local_1f8 = 0x11f;
              FUN_140c6c4e0(0x10,0,0xf3,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                           );
              goto LAB_140d53b0d;
            }
            local_1b8 = (longlong *)FUN_140c55c70(param_1 + 0x31);
            sVar4 = (**(code **)(*local_1b8 + 8))(local_1b8);
            if (sVar4 == local_1d4[0]) {
LAB_140d5393d:
              FUN_140d55f00(local_1e0,2,0x2f);
              local_1f8 = 0x128;
              FUN_140c6c4e0(0x10,0,0xf3,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                           );
              goto LAB_140d53b0d;
            }
            cVar1 = FUN_140c56050(param_1 + 0x32);
            if (cVar1 != '\0') {
              local_1b0 = (longlong *)FUN_140c55c70(param_1 + 0x32);
              sVar4 = (**(code **)(*local_1b0 + 8))(local_1b0);
              if (sVar4 == local_1d4[0]) goto LAB_140d5393d;
            }
            cVar1 = FUN_140d25690(param_1,local_1d4[0]);
            if (cVar1 == '\0') goto LAB_140d53b0d;
          }
          cVar1 = FUN_140d426e0(param_1,local_128);
          if (cVar1 != '\0') {
            if (*(int *)(local_1e0[6] + 0xd8) == 1) {
              puVar6 = (undefined *)FUN_140c630f0(local_110,local_58);
              puVar8 = local_138;
              for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              }
              cVar1 = FUN_140dbfe50(param_1 + 0x38,local_138);
              if (cVar1 == '\0') goto LAB_140d53b0d;
            }
            cVar1 = (**(code **)(*local_1e0 + 0x28))(local_1e0);
            if (cVar1 == '\0') {
              (**(code **)(*local_1e0 + 0x20))(local_1e0);
              *(byte *)(local_1e0[6] + 0xdd) = *(byte *)(local_1e0[6] + 0xdd) | 0x40;
              *(undefined4 *)(param_1 + 3) = 1;
              if ((*(byte *)((longlong)param_1 + 0x621) >> 3 & 1) != 0) {
                *(undefined4 *)(local_1e0[6] + 0x100) = 8;
                FUN_140d52a40(param_1,0);
              }
            }
            else {
              FUN_140d55f00(local_1e0,2,10);
              local_1f8 = 0x140;
              FUN_140c6c4e0(0x10,0,0xff,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                           );
            }
          }
          goto LAB_140d53b0d;
        }
      }
    }
  }
  local_1f8 = 0xcc;
  FUN_140c6c4e0(0x10,0,0xf2,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
               );
  FUN_140d55f00(local_1e0,2,0x2f);
LAB_140d53b0d:
  FUN_140db44f0(local_20 ^ (ulonglong)auStack_218);
  return;
}


/* address=140d53b30 name=FUN_140d53b30 */

undefined8 FUN_140d53b30(longlong *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined local_38 [16];
  undefined local_28 [24];
  
  if (*(int *)(*(longlong *)(*param_1 + 0x30) + 0xcc) != 0) {
    FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x154);
  }
  if (*(int *)(*(longlong *)(*param_1 + 0x30) + 0xd8) == 1) {
    puVar2 = (undefined *)FUN_140c55f20(local_28);
    puVar5 = local_38;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_140d20ac0(param_1,local_38);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  cVar1 = FUN_140d43290(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_140d43700(param_1);
    *(undefined4 *)(param_1 + 3) = 2;
    uVar3 = 4;
  }
  return uVar3;
}


/* address=140d53c00 name=FUN_140d53c00 */

void FUN_140d53c00(longlong **param_1)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined auStack_288 [32];
  undefined8 local_268;
  undefined local_258 [8];
  longlong *local_250;
  undefined local_248;
  char local_247;
  undefined local_246;
  short local_244 [2];
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined local_228 [16];
  undefined *local_218;
  undefined local_210 [8];
  longlong local_208;
  ulonglong local_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined local_1d8 [3];
  char local_1d5;
  undefined local_1d0 [16];
  undefined local_1c0 [3];
  char local_1bd;
  undefined local_1b8 [16];
  undefined local_1a8 [3];
  char local_1a5;
  undefined local_1a0 [24];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [16];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [24];
  undefined local_120 [32];
  short local_100;
  undefined local_f8 [16];
  undefined local_e8 [40];
  undefined local_c0 [16];
  undefined local_b0 [16];
  undefined local_a0 [16];
  undefined local_90 [16];
  undefined local_80 [16];
  undefined local_70 [16];
  undefined local_60 [16];
  undefined local_50 [16];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1413d9c40 ^ (ulonglong)auStack_288;
  local_250 = *param_1;
  cVar1 = (**(code **)(*local_250 + 0x18))(local_250,local_e8);
  if (cVar1 != '\0') {
    FUN_140d48c30(local_138);
    local_258[0] = 0x32;
    cVar1 = FUN_140d52cf0(param_1,local_138,local_258,local_e8);
    if (cVar1 == '\0') {
      FUN_140d55f00(local_250,2,local_258[0]);
    }
    else {
      cVar1 = FUN_140d52de0(local_138);
      if (cVar1 == '\0') {
        sVar2 = FUN_140c6e370(param_1[0xc0]);
        if (sVar2 == local_100) {
          if (*(int *)(local_250[6] + 0xd8) == 1) {
            if ((*(byte *)(local_250[6] + 0xdd) >> 6 & 1) != 0) {
              cVar1 = FUN_140d52e60(param_1,&local_247,local_258,local_138);
              if (cVar1 == '\0') {
                FUN_140d55f00(local_250,2,local_258[0]);
                goto LAB_140d54758;
              }
              if (local_247 == '\0') {
                local_268 = (undefined *)CONCAT44(local_268._4_4_,0x18a);
                FUN_140c6c4e0(0x10,0,0x141,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                             );
                FUN_140d55f00(local_250,2,0x2f);
                goto LAB_140d54758;
              }
            }
            uVar5 = FUN_140c55cd0(param_1 + 0x38);
            FUN_140d55cd0(param_1 + 0x33,uVar5);
            *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)((longlong)param_1 + 0x17c);
            FUN_140d52060(local_250[6] + 0x30,param_1 + 0x3d,0x20);
          }
          uVar5 = FUN_140d354a0(local_120);
          FUN_140d52060(local_250[6] + 0x10,uVar5,0x20);
          cVar1 = FUN_140c57ae0(local_250 + 0xb,0);
          if ((cVar1 == '\0') || (*(int *)(local_250[6] + 0xd8) == 2)) {
            local_248 = 0;
          }
          else {
            local_248 = 1;
          }
          local_246 = local_248;
          FUN_140d48c60(local_1a8,0x33,1);
          FUN_140d48c60(local_1c0,0x29,local_246);
          FUN_140d48c60(local_1d8,0x2b,1);
          local_40 = local_1a8;
          local_38 = local_1c0;
          local_30 = local_1d8;
          puVar6 = (undefined *)FUN_140c55f50(local_c0,&local_40,local_28);
          puVar8 = local_188;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          cVar1 = FUN_140d41590(local_f8,local_258,local_188,0);
          if (cVar1 == '\0') {
            FUN_140d55f00(local_250,2,local_258[0]);
          }
          else if ((((local_1d5 == '\0') || (iVar4 = FUN_140d35710(local_1d0,local_244), iVar4 == 0)
                    ) || (lVar7 = FUN_140d354c0(local_1d0), lVar7 != 0)) ||
                  (local_244[0] != *(short *)(local_250 + 2))) {
            local_268 = (undefined *)CONCAT44(local_268._4_4_,0x1ad);
            FUN_140c6c4e0(0x10,0,0x120,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                         );
            FUN_140d55f00(local_250,2,0x2f);
          }
          else {
            local_258[0] = 0x32;
            if (local_1bd == '\0') {
              cVar1 = FUN_140c5fb60(param_1);
              if (cVar1 == '\0') {
                FUN_140d55f00(local_250,2,0x50);
                goto LAB_140d54758;
              }
            }
            else {
              cVar1 = FUN_140d26170(param_1,local_258,local_1b8);
              if (cVar1 == '\0') {
                FUN_140d55f00(local_250,2,local_258[0]);
                goto LAB_140d54758;
              }
              lVar7 = FUN_140c55c70(local_250 + 0xb);
              if (*(short *)(lVar7 + 4) != *(short *)(local_250 + 2)) {
                local_268 = (undefined *)CONCAT44(local_268._4_4_,0x1bb);
                FUN_140c6c4e0(0x10,0,0xbc,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                             );
                FUN_140d55f00(local_250,2,0x2f);
                goto LAB_140d54758;
              }
              lVar7 = FUN_140c55c70(local_250 + 0xb);
              if (*(int *)(*(longlong *)(lVar7 + 200) + 0x24) !=
                  *(int *)((longlong)param_1[0xc0] + 0x24)) {
                local_268 = (undefined *)CONCAT44(local_268._4_4_,0x1c1);
                FUN_140c6c4e0(0x10,0,0x10c,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                             );
                FUN_140d55f00(local_250,2,0x2f);
                goto LAB_140d54758;
              }
              uVar5 = FUN_140c55c70(local_250 + 0xb);
              cVar1 = FUN_140c60560(param_1,uVar5);
              if (cVar1 == '\0') {
                local_268 = (undefined *)CONCAT44(local_268._4_4_,0x1c9);
                FUN_140c6c4e0(0x10,0,0x65,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                             );
                FUN_140d55f00(local_250,2,0x2f);
                goto LAB_140d54758;
              }
              *(byte *)(local_250[6] + 0xdc) = *(byte *)(local_250[6] + 0xdc) | 0x40;
              *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) | 0x80;
              uVar5 = FUN_140c55c70(local_250 + 0xb);
              uVar5 = FUN_140c60c00(local_210,uVar5,0);
              FUN_140c580d0(param_1 + 0xbc,uVar5);
              FUN_140c56300(local_210);
              cVar1 = FUN_140c56050(param_1 + 0xbc);
              if (cVar1 == '\0') {
                FUN_140d55f00(local_250,2,0x50);
                goto LAB_140d54758;
              }
              FUN_140c608f0(local_250,0);
              local_208 = FUN_140c55c70(local_250 + 0xe);
              uVar5 = FUN_140c55c70(param_1 + 0xbc);
              FUN_140c617d0(local_250,uVar5,*(undefined4 *)(local_208 + 100));
            }
            lVar7 = FUN_140c55c70(param_1 + 0xbc);
            *(longlong **)(lVar7 + 200) = param_1[0xc0];
            uVar3 = FUN_140c6de20(local_250);
            uVar5 = FUN_140c6f720(uVar3,param_1[0xc0]);
            local_1f8 = FUN_140c7f990(uVar5);
            if ((*(byte *)(local_250[6] + 0xdc) >> 6 & 1) == 0) {
              local_218 = (undefined *)FUN_140c55fe0(local_a0,&DAT_141071cc0,local_1f8);
            }
            else {
              lVar7 = FUN_140c55c70(param_1 + 0xbc);
              local_200 = (ulonglong)*(byte *)(lVar7 + 10);
              lVar7 = FUN_140c55c70(param_1 + 0xbc);
              local_218 = (undefined *)FUN_140c55fe0(local_b0,lVar7 + 0xb,local_200);
            }
            puVar6 = local_218;
            puVar8 = local_178;
            for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            cVar1 = FUN_140dc0320(param_1,local_178);
            if (cVar1 != '\0') {
              if (local_1a5 == '\0') {
                local_268 = (undefined *)CONCAT44(local_268._4_4_,0x1f0);
                FUN_140c6c4e0(0x10,0,0x102,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                             );
                FUN_140d55f00(local_250,2,0x6d);
              }
              else {
                FUN_140c56440(local_228);
                local_258[0] = 0x32;
                cVar1 = FUN_140d25bd0(param_1,local_228,local_258,local_1a0);
                if (cVar1 == '\0') {
                  FUN_140d55f00(local_250,2,local_258[0]);
                  local_240 = 0;
                  FUN_140c564c0(local_228);
                }
                else {
                  local_1f0 = local_90;
                  puVar6 = (undefined *)FUN_140c57dd0(local_1f0,local_228);
                  puVar8 = local_168;
                  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *puVar8 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  cVar1 = FUN_140dc0530(param_1,local_168);
                  if (((cVar1 == '\0') || (cVar1 = FUN_140d426e0(param_1,local_e8), cVar1 == '\0'))
                     || (cVar1 = FUN_140dc1010(param_1), cVar1 == '\0')) {
                    local_23c = 0;
                    FUN_140c564c0(local_228);
                  }
                  else {
                    if (((*(byte *)((longlong)param_1 + 0x621) >> 3 & 1) == 0) ||
                       (local_250[0x13] != 0)) {
                      local_1e8 = local_80;
                      uVar5 = FUN_140d55db0(param_1,local_70);
                      puVar6 = (undefined *)FUN_140c57dd0(local_1e8,uVar5);
                      puVar8 = local_158;
                      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                        *puVar8 = *puVar6;
                        puVar6 = puVar6 + 1;
                        puVar8 = puVar8 + 1;
                      }
                      uVar5 = FUN_140c55c70(param_1 + 0xbc);
                      local_268 = local_158;
                      cVar1 = FUN_140dc0720(local_250,2,1,uVar5);
                      if (cVar1 == '\0') {
                        local_238 = 0;
                        FUN_140c564c0(local_228);
                        goto LAB_140d54758;
                      }
                    }
                    local_1e0 = local_60;
                    uVar5 = FUN_140d55df0(param_1,local_50);
                    puVar6 = (undefined *)FUN_140c57dd0(local_1e0,uVar5);
                    puVar8 = local_148;
                    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                      *puVar8 = *puVar6;
                      puVar6 = puVar6 + 1;
                      puVar8 = puVar8 + 1;
                    }
                    uVar5 = FUN_140c55c70(param_1 + 0xbc);
                    local_268 = local_148;
                    cVar1 = FUN_140dc0720(local_250,2,0,uVar5);
                    if (cVar1 == '\0') {
                      local_234 = 0;
                      FUN_140c564c0(local_228);
                    }
                    else {
                      (**(code **)(*local_250 + 0x20))(local_250);
                      *(undefined4 *)(param_1 + 3) = 3;
                      local_230 = 1;
                      FUN_140c564c0(local_228);
                    }
                  }
                }
              }
            }
          }
        }
        else {
          local_268 = (undefined *)CONCAT44(local_268._4_4_,0x17c);
          FUN_140c6c4e0(0x10,0,0xf2,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                       );
          FUN_140d55f00(local_250,2,0x2f);
        }
      }
      else {
        FUN_140d55f00(local_250,2,10);
        local_268 = (undefined *)CONCAT44(local_268._4_4_,0x176);
        FUN_140c6c4e0(0x10,0,0xdf,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                     );
      }
    }
  }
LAB_140d54758:
  FUN_140db44f0(local_20 ^ (ulonglong)auStack_288);
  return;
}


/* address=140d54780 name=FUN_140d54780 */

undefined8 FUN_140d54780(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [8];
  undefined local_90 [32];
  undefined local_70 [16];
  undefined local_60 [16];
  undefined local_50 [16];
  undefined local_40 [16];
  undefined local_30 [32];
  
  plVar1 = *param_1;
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_98);
  if (cVar2 == '\0') {
    return 3;
  }
  cVar2 = FUN_140d40e90(plVar1,local_98,8);
  if (cVar2 == '\0') {
    return 0;
  }
  puVar5 = local_90;
  puVar7 = local_108;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar3 = FUN_140d35a70(local_108,local_f8);
  if ((iVar3 == 0) || (lVar6 = FUN_140d354c0(local_108), lVar6 != 0)) {
    FUN_140c6c4e0(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                  ,0x228);
    FUN_140d55f00(plVar1,2,0x32);
    return 0;
  }
  cVar2 = FUN_140d28740(param_1,local_f8);
  if (cVar2 == '\0') {
    FUN_140c6c4e0(0x10,0,0xbe,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                  ,0x22e);
    return 0;
  }
  if ((*(byte *)(plVar1[6] + 0xdd) >> 3 & 1) != 0) {
    if ((*(byte *)(plVar1[6] + 0xdc) >> 6 & 1) == 0) {
      FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x234);
    }
    if (*(int *)(plVar1[6] + 0xd8) == 2) {
      FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x238);
    }
    lVar6 = FUN_140c55c70(param_1 + 0xbd);
    lVar4 = FUN_140c55c70(param_1 + 0xbc);
    if (*(longlong *)(lVar6 + 200) != *(longlong *)(lVar4 + 200)) {
      FUN_140c6c4e0(0x10,0,0x130,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                    ,0x23b);
      FUN_140d55f00(plVar1,2,0x2f);
      return 0;
    }
    puVar5 = (undefined *)FUN_140c57dd0(local_70,plVar1[6] + 0x1e8);
    puVar7 = local_e8;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    lVar6 = FUN_140c55c70(param_1 + 0xbd);
    puVar5 = (undefined *)FUN_140c71580(local_60,lVar6 + 0x178);
    puVar7 = local_d8;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar2 = FUN_140d22540(local_d8,local_e8);
    if (cVar2 != '\0') {
      FUN_140c6c4e0(0x10,0,0x115,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                    ,0x241);
      FUN_140d55f00(plVar1,2,0x2f);
      return 0;
    }
    if (((*(byte *)((longlong)param_1 + 0x623) & 1) != 0) ||
       (lVar6 = FUN_140c55c70(param_1 + 0xbc), (*(byte *)(lVar6 + 0x1a8) >> 6 & 1) != 0)) {
      FUN_140c6c4e0(0x10,0,0x117,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                    ,0x249);
      FUN_140d55f00(plVar1,2,0x2f);
      return 0;
    }
    lVar6 = FUN_140c55c70(param_1 + 0xbd);
    lVar4 = FUN_140c55c70(param_1 + 0xbc);
    *(byte *)(lVar4 + 0x1a8) =
         *(byte *)(lVar4 + 0x1a8) & 0xbf | (*(byte *)(lVar6 + 0x1a8) >> 6 & 1) << 6;
    lVar6 = FUN_140c55c70(param_1 + 0xbd);
    puVar5 = (undefined *)FUN_140c57dd0(local_50,lVar6 + 0x188);
    puVar7 = local_c8;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    lVar6 = FUN_140c55c70(param_1 + 0xbc);
    cVar2 = FUN_140c566e0(lVar6 + 0x188,local_c8);
    if (cVar2 != '\0') {
      lVar6 = FUN_140c55c70(param_1 + 0xbd);
      puVar5 = (undefined *)FUN_140c57dd0(local_40,lVar6 + 0x198);
      puVar7 = local_b8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar6 = FUN_140c55c70(param_1 + 0xbc);
      cVar2 = FUN_140c566e0(lVar6 + 0x198,local_b8);
      if (cVar2 != '\0') goto LAB_140d54c89;
    }
    FUN_140d55f00(plVar1,2,0x50);
    return 0;
  }
LAB_140d54c89:
  puVar5 = (undefined *)FUN_140c57dd0(local_30,plVar1[6] + 0x1e8);
  puVar7 = local_a8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  lVar6 = FUN_140c55c70(param_1 + 0xbc);
  cVar2 = FUN_140c566e0(lVar6 + 0x178,local_a8);
  if (cVar2 == '\0') {
    FUN_140d55f00(plVar1,2,0x50);
    return 0;
  }
  cVar2 = FUN_140d426e0(param_1,local_98);
  if (cVar2 == '\0') {
    return 0;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
  *(undefined4 *)(param_1 + 3) = 4;
  if (((*(byte *)((longlong)param_1 + 0x621) >> 3 & 1) != 0) &&
     ((*(byte *)(plVar1[6] + 0xdd) >> 3 & 1) == 0)) {
    cVar2 = FUN_140d52a40(param_1,2);
    if (cVar2 == '\0') {
      return 0;
    }
    return 0xd;
  }
  return 1;
}


/* address=140d54dd0 name=FUN_140d54dd0 */

undefined8 FUN_140d54dd0(longlong **param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined local_108 [8];
  longlong *local_100;
  undefined local_f8 [8];
  undefined local_f0 [16];
  undefined *local_e0;
  undefined *local_d8;
  undefined local_d0 [8];
  undefined local_c8 [3];
  char local_c5;
  undefined local_c0 [16];
  undefined local_b0 [3];
  char local_ad;
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58;
  char local_57;
  undefined local_50 [32];
  undefined local_30 [32];
  
  local_100 = *param_1;
  if ((*(byte *)(local_100[6] + 0xdc) >> 6 & 1) == 0) {
    cVar1 = (**(code **)(*local_100 + 0x18))(local_100,&local_58);
    if (cVar1 == '\0') {
      uVar4 = 3;
    }
    else if (local_57 == '\r') {
      FUN_140d48c60(local_c8,0xd,1);
      FUN_140d48c60(local_b0,0x2f,1);
      puVar5 = local_50;
      puVar6 = local_f0;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_108[0] = 0x32;
      iVar2 = FUN_140d35a40(local_f0,local_98);
      if ((((iVar2 != 0) && (lVar3 = FUN_140d354c0(local_98), lVar3 == 0)) &&
          (iVar2 = FUN_140d35a70(local_f0,local_78), iVar2 != 0)) &&
         (lVar3 = FUN_140d354c0(local_f0), lVar3 == 0)) {
        local_e0 = local_c8;
        local_d8 = local_b0;
        puVar5 = (undefined *)FUN_140c55f50(local_30,&local_e0,local_d0);
        puVar6 = local_88;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        cVar1 = FUN_140d41590(local_78,local_108,local_88,1);
        if (((cVar1 != '\0') && (local_c5 != '\0')) &&
           ((iVar2 = FUN_140d35a70(local_c0,local_68), iVar2 != 0 &&
            (cVar1 = FUN_140d27350(param_1,local_68), cVar1 != '\0')))) {
          if (local_ad == '\0') {
            uVar4 = FUN_140c56020();
            FUN_140c56b00(param_1 + 0xb6,uVar4);
            cVar1 = FUN_140c56050(param_1 + 0xb6);
            if (cVar1 == '\0') {
              FUN_140d55f00(local_100,2,0x50);
              return 0;
            }
          }
          else {
            uVar4 = FUN_140c72860(local_f8,local_100,local_108,local_a8);
            FUN_140c5d1b0(param_1 + 0xb6,uVar4);
            FUN_140c56ac0(local_f8);
            cVar1 = FUN_140c56050(param_1 + 0xb6);
            if (cVar1 == '\0') {
              FUN_140d55f00(local_100,2,local_108[0]);
              return 0;
            }
          }
          *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x20;
          lVar3 = FUN_140c55c70(local_100 + 0xd);
          (**(code **)(*(longlong *)(lVar3 + 8) + 0x50))(param_1);
          cVar1 = FUN_140d426e0(param_1,&local_58);
          if (cVar1 == '\0') {
            return 0;
          }
          (**(code **)(*local_100 + 0x20))(local_100);
          *(undefined4 *)(param_1 + 3) = 5;
          return 1;
        }
      }
      FUN_140d55f00(local_100,2,local_108[0]);
      FUN_140c6c4e0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                    ,0x295);
      uVar4 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 3) = 5;
      uVar4 = 1;
    }
  }
  else {
    lVar3 = FUN_140c55c70(local_100 + 0xd);
    if ((*(char *)(lVar3 + 0x128) == '\0') || ((*(byte *)(local_100[6] + 0xdd) >> 3 & 1) != 0)) {
      *(undefined4 *)(param_1 + 3) = 8;
      uVar4 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 3) = 7;
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* address=140d551c0 name=FUN_140d551c0 */

undefined8 FUN_140d551c0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined local_30;
  char local_2f;
  
  plVar1 = *param_1;
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_30);
  if (cVar2 == '\0') {
    uVar3 = 3;
  }
  else {
    if ((local_2f != '\x19') && (cVar2 = FUN_140d40e90(plVar1,&local_30,0xb), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = FUN_140d4f3f0(param_1,&local_30,0);
    if ((cVar2 != '\0') && (cVar2 = FUN_140d426e0(param_1,&local_30), cVar2 != '\0')) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      *(undefined4 *)(param_1 + 3) = 6;
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d55290 name=FUN_140d55290 */

undefined8 FUN_140d55290(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined local_38 [56];
  
  plVar1 = *param_1;
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_38);
  if (cVar2 == '\0') {
    uVar4 = 3;
  }
  else {
    iVar3 = FUN_140d41840(param_1);
    if (iVar3 == 1) {
      uVar4 = 0;
    }
    else if (iVar3 == 2) {
      *(undefined4 *)(param_1 + 3) = 6;
      uVar4 = 0x10;
    }
    else {
      cVar2 = FUN_140d40e90(plVar1,local_38,0xf);
      if (((cVar2 != '\0') && (cVar2 = FUN_140d50460(param_1,local_38), cVar2 != '\0')) &&
         (cVar2 = FUN_140d426e0(param_1,local_38), cVar2 != '\0')) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
        *(undefined4 *)(param_1 + 3) = 8;
        return 1;
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* address=140d55380 name=FUN_140d55380 */

undefined8 FUN_140d55380(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d41e10(param_1,1);
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x18) = 7;
    uVar2 = 0x10;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 8;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d553e0 name=FUN_140d553e0 */

undefined8 FUN_140d553e0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [56];
  
  plVar1 = *param_1;
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_48);
  if (cVar2 == '\0') {
    uVar3 = 3;
  }
  else {
    cVar2 = FUN_140d40e90(plVar1,local_48,0x14);
    if (((cVar2 != '\0') && (cVar2 = FUN_140d50750(param_1,local_48,0), cVar2 != '\0')) &&
       (cVar2 = FUN_140d426e0(param_1,local_48), cVar2 != '\0')) {
      uVar3 = FUN_140dbfdf0(param_1 + 0x33);
      puVar4 = (undefined *)FUN_140c55fe0(local_58,&DAT_141071cc0,uVar3);
      puVar6 = local_68;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      cVar2 = FUN_140dc0530(param_1,local_68);
      if ((cVar2 != '\0') && (cVar2 = FUN_140dc1430(param_1), cVar2 != '\0')) {
        cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (cVar2 != '\0') {
          FUN_140d55f00(plVar1,2,10);
          FUN_140c6c4e0(0x10,0,0xff,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                        ,0x305);
          return 0;
        }
        (**(code **)(*plVar1 + 0x20))(plVar1);
        *(undefined4 *)(param_1 + 3) = 9;
        return 1;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* address=140d55570 name=FUN_140d55570 */

undefined4 FUN_140d55570(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined local_70 [48];
  undefined local_40 [64];
  
  plVar1 = *param_1;
  if ((*(byte *)(plVar1[6] + 0xdd) >> 3 & 1) != 0) {
    if (plVar1[0x13] == 0) {
      FUN_140c57a60(local_70);
      uVar3 = FUN_140c55cd0(local_70);
      cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar3,local_40,5);
      if (cVar2 == '\0') {
LAB_140d5561e:
        FUN_140c57a90(local_70);
        return 0;
      }
      uVar3 = FUN_140c55cd0(local_70);
      cVar2 = FUN_140d42620(plVar1,uVar3);
      if (cVar2 == '\0') goto LAB_140d5561e;
      FUN_140c57a90(local_70);
    }
    cVar2 = FUN_140d52a40(param_1,2);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 3) = 10;
  return 1;
}


/* address=140d55680 name=FUN_140d55680 */

undefined4 FUN_140d55680(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined local_c8 [48];
  undefined local_98 [48];
  undefined local_68 [48];
  undefined local_38 [56];
  
  plVar1 = *param_1;
  lVar5 = FUN_140c55c70(param_1 + 0xbc);
  if (((*(byte *)(lVar5 + 0x1a8) >> 6 & 1) == 0) || ((*(byte *)(plVar1[6] + 0xdd) >> 3 & 1) != 0)) {
LAB_140d55823:
    *(undefined4 *)(param_1 + 3) = 0xb;
    uVar4 = 1;
  }
  else {
    FUN_140c57a60(local_c8);
    uVar6 = FUN_140c55cd0(local_c8);
    cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar6,local_68,8);
    if (cVar2 != '\0') {
      iVar3 = FUN_140d37de0(local_68,local_98);
      if (iVar3 != 0) {
        iVar3 = FUN_140d38120(local_98,0x4469);
        if (iVar3 != 0) {
          iVar3 = FUN_140d37de0(local_98,local_38);
          if (iVar3 != 0) {
            lVar5 = FUN_140c55c70(param_1 + 0xbc);
            uVar6 = FUN_140c55f80(lVar5 + 0x188);
            lVar5 = FUN_140c55c70(param_1 + 0xbc);
            uVar7 = FUN_140c55c70(lVar5 + 0x188);
            iVar3 = FUN_140d37f00(local_38,uVar7,uVar6);
            if (iVar3 != 0) {
              uVar6 = FUN_140c55cd0(local_c8);
              cVar2 = FUN_140d42620(plVar1,uVar6);
              if (cVar2 != '\0') {
                FUN_140c57a90(local_c8);
                goto LAB_140d55823;
              }
            }
          }
        }
      }
    }
    FUN_140c57a90(local_c8);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140d55850 name=FUN_140d55850 */

undefined8 FUN_140d55850(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  if ((*(byte *)(param_1 + 0xc4) >> 5 & 1) == 0) {
    *(undefined4 *)(param_1 + 3) = 0xd;
    return 1;
  }
  if (*(int *)(*(longlong *)(lVar1 + 0x30) + 0xd8) == 2) {
    FUN_140c4dcc0(lVar1);
  }
  else {
    lVar4 = FUN_140c55c70(param_1[1] + 0x20);
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      lVar4 = FUN_140c55c70(param_1[1] + 0x20);
      lVar5 = FUN_140c55c70(param_1[1] + 0x20);
      iVar3 = (**(code **)(lVar5 + 0x48))(lVar1,*(undefined8 *)(lVar4 + 0x50));
      if (iVar3 == 0) {
        FUN_140d55f00(lVar1,2,0x50);
        FUN_140c6c4e0(0x10,0,0x7e,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_client.cc"
                      ,0x352);
        return 0;
      }
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 3) = 0xb;
        return 8;
      }
    }
  }
  cVar2 = FUN_140c72ee0(param_1);
  if ((cVar2 != '\0') && (cVar2 = FUN_140d50940(param_1), cVar2 != '\0')) {
    *(undefined4 *)(param_1 + 3) = 0xc;
    return 1;
  }
  return 0;
}


/* address=140d559c0 name=FUN_140d559c0 */

undefined8 FUN_140d559c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_140c71ef0(param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0xd;
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_140d51750(param_1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0xd;
      uVar3 = 1;
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x18) = 0xc;
      uVar3 = 9;
    }
    else if (iVar2 == 2) {
      uVar3 = 0;
    }
    else {
      FID_conflict__assert(L"0",(wchar_t *)"D",0x378);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140d55a70 name=FUN_140d55a70 */

undefined4 FUN_140d55a70(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [48];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [56];
  
  plVar1 = *param_1;
  *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) | 0x80;
  if ((*(byte *)((longlong)param_1 + 0x623) & 1) == 0) {
LAB_140d55b7c:
    cVar2 = FUN_140d51aa0(param_1);
    if (cVar2 != '\0') {
      uVar3 = FUN_140d55e30(param_1,local_78);
      puVar4 = (undefined *)FUN_140c57dd0(local_88,uVar3);
      puVar6 = local_d8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar3 = FUN_140c55c70(param_1 + 0xbc);
      cVar2 = FUN_140dc0720(plVar1,3,1,uVar3,local_d8);
      if (cVar2 != '\0') {
        uVar3 = FUN_140d55e70(param_1,local_58);
        puVar4 = (undefined *)FUN_140c57dd0(local_68,uVar3);
        puVar6 = local_c8;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar3 = FUN_140c55c70(param_1 + 0xbc);
        cVar2 = FUN_140dc0720(plVar1,3,0,uVar3,local_c8);
        if ((cVar2 != '\0') && (cVar2 = FUN_140dc1740(param_1), cVar2 != '\0')) {
          *(undefined4 *)(param_1 + 3) = 0xe;
          return 4;
        }
      }
    }
  }
  else {
    FUN_140c57a60(local_b8);
    uVar3 = FUN_140c55cd0(local_b8);
    cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar3,local_48,0xcb);
    if ((cVar2 != '\0') && (cVar2 = FUN_140d29530(param_1,local_48), cVar2 != '\0')) {
      uVar3 = FUN_140c55cd0(local_b8);
      cVar2 = FUN_140d42620(plVar1,uVar3);
      if (cVar2 != '\0') {
        FUN_140c57a90(local_b8);
        goto LAB_140d55b7c;
      }
    }
    FUN_140c57a90(local_b8);
  }
  return 0;
}


/* address=140d55cd0 name=FUN_140d55cd0 */

longlong FUN_140d55cd0(longlong param_1,longlong param_2)

{
  FUN_140d55d50(param_1,param_2);
  FUN_140d55d20(param_1 + 8,param_2 + 8);
  return param_1;
}


/* address=140d55d20 name=FUN_140d55d20 */

undefined8 FUN_140d55d20(undefined8 param_1,undefined8 param_2)

{
  FUN_140c7f5c0(param_1,param_2);
  return param_1;
}


/* address=140d55d50 name=FUN_140d55d50 */

undefined8
FUN_140d55d50(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140c67990(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140d55db0 name=FUN_140d55db0 */

undefined8 FUN_140d55db0(longlong param_1,undefined8 param_2)

{
  FUN_140c55fe0(param_2,param_1 + 0x88,*(undefined8 *)(param_1 + 0x20));
  return param_2;
}


/* address=140d55df0 name=FUN_140d55df0 */

undefined8 FUN_140d55df0(longlong param_1,undefined8 param_2)

{
  FUN_140c55fe0(param_2,param_1 + 0xb8,*(undefined8 *)(param_1 + 0x20));
  return param_2;
}


/* address=140d55e30 name=FUN_140d55e30 */

undefined8 FUN_140d55e30(longlong param_1,undefined8 param_2)

{
  FUN_140c55fe0(param_2,param_1 + 0xe8,*(undefined8 *)(param_1 + 0x20));
  return param_2;
}


/* address=140d55e70 name=FUN_140d55e70 */

undefined8 FUN_140d55e70(longlong param_1,undefined8 param_2)

{
  FUN_140c55fe0(param_2,param_1 + 0x118,*(undefined8 *)(param_1 + 0x20));
  return param_2;
}


/* address=140d55eb0 name=FUN_140d55eb0 */

undefined8 FUN_140d55eb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d55f00 name=FUN_140d55f00 */

void FUN_140d55f00(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140c6c800();
  FUN_140c55e40(local_18,uVar1);
  FUN_140d55f60(param_1,param_2,param_3);
  uVar1 = FUN_140c55c70(local_18);
  FUN_140c6c9b0(uVar1);
  FUN_140d429e0(local_18);
  return;
}


/* address=140d55f60 name=FUN_140d55f60 */

undefined8 FUN_140d55f60(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined local_res10;
  undefined local_res18;
  
  if (*(int *)(param_1[6] + 0xb0) == 0) {
    if ((param_2 == 1) && (param_3 == 0)) {
      *(undefined4 *)(param_1[6] + 0xb0) = 1;
    }
    else {
      if (param_2 != 2) {
        FID_conflict__assert((wchar_t *)"l",(wchar_t *)"D",0x1a3);
      }
      if (param_3 == 0) {
        FID_conflict__assert((wchar_t *)"d",(wchar_t *)"D",0x1a4);
      }
      *(undefined4 *)(param_1[6] + 0xb0) = 2;
    }
    *(byte *)(param_1[6] + 0xdd) = *(byte *)(param_1[6] + 0xdd) | 0x10;
    local_res10 = (undefined)param_2;
    *(undefined *)(param_1[6] + 0x1cd) = local_res10;
    local_res18 = (undefined)param_3;
    *(undefined *)(param_1[6] + 0x1ce) = local_res18;
    cVar1 = FUN_140c56780(param_1[6] + 0x68);
    if (cVar1 == '\0') {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
    }
  }
  else {
    FUN_140c6c4e0(0x10,0,0xc2,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_pkt.cc"
                  ,0x19c);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* address=140d56cb0 name=FUN_140d56cb0 */

int FUN_140d56cb0(longlong param_1,undefined8 *param_2,char param_3,undefined *param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong local_f8;
  undefined local_f0 [16];
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_80 [16];
  undefined local_70 [16];
  undefined local_60 [16];
  undefined local_50 [16];
  undefined local_40 [16];
  undefined local_30 [32];
  
  cVar1 = FUN_140c55f90(*(longlong *)(param_1 + 0x30) + 0x98);
  if (cVar1 == '\0') {
    local_d8 = FUN_140c55f80(*(longlong *)(param_1 + 0x30) + 0x98);
    uVar3 = FUN_140c55f80(param_4);
    if (local_d8 <= uVar3) {
      if ((*(uint *)(param_1 + 0x84) & 2) == 0) {
        local_d0 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x98);
        lVar4 = FUN_140c55c70(param_4);
        if (local_d0 != lVar4) goto LAB_140d56d92;
      }
      if (*(char *)(*(longlong *)(param_1 + 0x30) + 0xa8) == param_3) goto LAB_140d56dbd;
    }
LAB_140d56d92:
    FUN_140c6c4e0(0x10,0,0x76,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_pkt.cc"
                  ,0xd4);
    iVar2 = -1;
  }
  else {
LAB_140d56dbd:
    iVar2 = FUN_140d3fc20(param_1);
    if (0 < iVar2) {
      cVar1 = FUN_140c55f90(*(longlong *)(param_1 + 0x30) + 0x98);
      if (cVar1 == '\0') {
        uVar5 = FUN_140c55f80(*(longlong *)(param_1 + 0x30) + 0x98);
        *param_2 = uVar5;
        FUN_140c55f20(local_80);
        puVar7 = local_80;
        puVar8 = (undefined *)(*(longlong *)(param_1 + 0x30) + 0x98);
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        iVar2 = 1;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x30) + 0x68;
        uVar3 = FUN_140c55f80(param_4);
        if ((uVar3 < 0x4001) && (lVar6 = FUN_140c56770(lVar4), lVar6 == 0)) {
          cVar1 = FUN_140d3d260(param_1);
          if (cVar1 == '\0') {
            iVar2 = -1;
          }
          else {
            FUN_140c55f20(local_f0);
            cVar1 = FUN_140c57ae0(*(longlong *)(param_1 + 0x30) + 0xf0,0);
            if (cVar1 != '\0') {
              local_c8 = (undefined8 *)FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xf0);
              lVar6 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0xf0);
              puVar7 = (undefined *)FUN_140c55fe0(local_70,*(undefined8 *)(lVar6 + 8),*local_c8);
              puVar8 = local_f0;
              for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = (undefined *)
                       FUN_140c56800(local_f0,local_60,
                                     *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xf8),
                                     0xffffffffffffffff);
              puVar8 = local_f0;
              for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
            }
            local_f8 = FUN_140c55f80(local_f0);
            cVar1 = FUN_140c55f90(param_4);
            if (cVar1 == '\0') {
              local_c0 = FUN_140c55f80(param_4);
              lVar6 = FUN_140dccec0(param_1);
              local_e0 = local_c0 + lVar6;
              uVar3 = FUN_140c55f80(param_4);
              if ((local_e0 < uVar3) || (local_f8 + local_e0 < local_f8)) {
                FUN_140c6c4e0(0x10,0,0x45,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_pkt.cc"
                              ,0x100);
                return -1;
              }
              local_f8 = local_f8 + local_e0;
            }
            if (local_f8 == 0) {
              *param_2 = 0;
              iVar2 = 1;
            }
            else {
              local_b8 = FUN_140c55f80(local_f0);
              lVar6 = FUN_140dcdaf0(param_1);
              cVar1 = FUN_140d3f710(lVar4,local_b8 + lVar6,local_f8);
              if (cVar1 == '\0') {
                iVar2 = -1;
              }
              else {
                cVar1 = FUN_140c55f90(local_f0);
                if (cVar1 == '\0') {
                  local_b0 = FUN_140c55f80(local_f0);
                  local_a8 = FUN_140c55c70(local_f0);
                  uVar5 = FUN_140d57360(lVar4,local_50);
                  uVar5 = FUN_140c55c70(uVar5);
                  FUN_140d55eb0(uVar5,local_a8,local_b0);
                  FUN_140c67990(*(longlong *)(param_1 + 0x30) + 0xf0,0);
                  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xf8) = 0;
                  uVar5 = FUN_140c55f80(local_f0);
                  FUN_140d3f8a0(lVar4,uVar5);
                }
                cVar1 = FUN_140c55f90(param_4);
                if (cVar1 == '\0') {
                  local_a0 = FUN_140c55f80(param_4);
                  local_98 = FUN_140c55c70(param_4);
                  uVar5 = FUN_140d57360(lVar4,local_40);
                  local_90 = FUN_140c55f80(uVar5);
                  uVar5 = FUN_140d57360(lVar4,local_30);
                  uVar5 = FUN_140c55c70(uVar5);
                  cVar1 = FUN_140dcdbc0(param_1,uVar5,&local_88,local_90,param_3,local_98,local_a0);
                  if (cVar1 == '\0') {
                    return -1;
                  }
                  FUN_140d3f8a0(lVar4,local_88);
                }
                *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdd) =
                     *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdd) & 0xfb;
                iVar2 = FUN_140d3fc20(param_1);
                if (iVar2 < 1) {
                  cVar1 = FUN_140c55f90(param_4);
                  if (cVar1 == '\0') {
                    puVar7 = (undefined *)(*(longlong *)(param_1 + 0x30) + 0x98);
                    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
                      *puVar7 = *param_4;
                      param_4 = param_4 + 1;
                      puVar7 = puVar7 + 1;
                    }
                    *(char *)(*(longlong *)(param_1 + 0x30) + 0xa8) = param_3;
                  }
                }
                else {
                  uVar5 = FUN_140c55f80(param_4);
                  *param_2 = uVar5;
                  iVar2 = 1;
                }
              }
            }
          }
        }
        else {
          FUN_140c6c4e0(0x10,0,0x44,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\s3_pkt.cc"
                        ,0xe8);
          iVar2 = -1;
        }
      }
    }
  }
  return iVar2;
}


/* address=140d57360 name=FUN_140d57360 */

undefined8 FUN_140d57360(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = FUN_140d40040(param_1);
  lVar2 = FUN_140c56770(param_1);
  lVar3 = FUN_140c56750(param_1);
  lVar4 = FUN_140c56770(param_1);
  FUN_140c55fe0(param_2,lVar3 + lVar4,lVar1 - lVar2);
  return param_2;
}


/* address=140d573e0 name=FUN_140d573e0 */

undefined8 FUN_140d573e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d57430 name=FUN_140d57430 */

undefined8 FUN_140d57430(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d57470 name=FUN_140d57470 */

ulonglong FUN_140d57470(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_18;
  
  uVar2 = (ulonglong)(int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x38) + 0x1a) % 7);
  local_18 = 0;
  uVar3 = uVar2;
  do {
    if (6 < local_18) {
      return uVar3 & 0xffffffffffffff00;
    }
    if (((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 4 & 1) == 0) || (local_18 != uVar2)) {
      cVar1 = FUN_140c57ae0(*(longlong *)(param_1 + 0x38) + 0x30 + local_18 * 8,0);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    else {
      cVar1 = FUN_140d58a90(param_1);
      if (cVar1 == '\0') {
        FID_conflict__assert((wchar_t *)"d",(wchar_t *)"D",0x1b9);
      }
    }
    uVar3 = local_18 + 1;
    local_18 = uVar3;
  } while( true );
}


/* address=140d57550 name=FUN_140d57550 */

void FUN_140d57550(undefined8 param_1)

{
  FUN_140c56520(param_1);
  return;
}


/* address=140d57580 name=FUN_140d57580 */

void FUN_140d57580(longlong param_1)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < *(byte *)(*(longlong *)(param_1 + 0x38) + 0x110);
      local_18 = local_18 + 1) {
    FUN_140d57550(*(longlong *)(param_1 + 0x38) + 0x68 + local_18 * 0x18);
  }
  *(undefined *)(*(longlong *)(param_1 + 0x38) + 0x110) = 0;
  *(undefined *)(*(longlong *)(param_1 + 0x38) + 0x111) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x114) = 0;
  **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) & 0xfd;
  **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) & 0xfb;
  return;
}


/* address=140d57650 name=FUN_140d57650 */

void FUN_140d57650(longlong param_1)

{
  FUN_140c66200(*(undefined8 *)(param_1 + 8));
  FUN_140c66200(*(undefined8 *)(param_1 + 0x10));
  return;
}


/* address=140d57990 name=FUN_140d57990 */

void FUN_140d57990(longlong param_1)

{
  *(undefined *)(*(longlong *)(param_1 + 0x38) + 0x111) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x114) = 0;
  FUN_140d59a00(param_1);
  return;
}


/* address=140d579e0 name=FUN_140d579e0 */

undefined8 FUN_140d579e0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_140d57430(param_2,0,0x14);
  iVar1 = FUN_140d356c0(param_1,param_2);
  if ((((iVar1 != 0) && (iVar1 = FUN_140d357b0(param_1,param_2 + 4), iVar1 != 0)) &&
      (iVar1 = FUN_140d35710(param_1,param_2 + 8), iVar1 != 0)) &&
     (((iVar1 = FUN_140d357b0(param_1,param_2 + 0xc), iVar1 != 0 &&
       (iVar1 = FUN_140d357b0(param_1,param_2 + 0x10), iVar1 != 0)) &&
      (iVar1 = FUN_140d35980(param_1,param_3,*(undefined4 *)(param_2 + 0x10)), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}


/* address=140d57ac0 name=FUN_140d57ac0 */

undefined8 FUN_140d57ac0(void)

{
  return 0xe4;
}


/* address=140d57c60 name=FUN_140d57c60 */

void FUN_140d57c60(longlong param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined auStack_118 [32];
  undefined8 local_f8;
  undefined *local_f0;
  char local_e8 [4];
  char local_e4;
  ulonglong local_e0;
  int local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined local_b8 [16];
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined local_90 [16];
  undefined local_80 [24];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [4];
  uint local_34;
  ushort local_30;
  uint local_2c;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_1413d9c40 ^ (ulonglong)auStack_118;
  FUN_140c55f20(local_b8);
  puVar4 = local_68;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  local_f0 = local_68;
  local_f8 = param_3;
  local_d8 = FUN_140dd3ca0(param_1,local_e8,local_b8,param_2);
  if (local_d8 == 0) {
    local_e4 = local_e8[0];
    if (local_e8[0] == '\x14') {
      uVar2 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x108);
      cVar1 = FUN_140d313f0(uVar2);
      if (cVar1 == '\0') {
        local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0x13f);
        FUN_140c6c4e0(0x10,0,0xe1,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                     );
        *param_3 = 10;
      }
      else {
        lVar6 = FUN_140c55f80(local_b8);
        if ((lVar6 == 1) && (pcVar3 = (char *)FUN_140c631f0(local_b8,0), *pcVar3 == '\x01')) {
          **(byte **)(param_1 + 0x38) = **(byte **)(param_1 + 0x38) | 1;
          local_a8 = local_48;
          puVar4 = (undefined *)FUN_140c57dd0(local_a8,local_b8);
          puVar7 = local_58;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
          FUN_140c536d0(param_1,0,0x14,local_58);
        }
        else {
          local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0x145);
          FUN_140c6c4e0(0x10,0,0x67,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                       );
          *param_3 = 0x2f;
        }
      }
    }
    else if (local_e8[0] == '\x16') {
      local_a0 = FUN_140c55f80(local_b8);
      uVar2 = FUN_140c55c70(local_b8);
      FUN_140d35430(local_90,uVar2,local_a0);
      while (lVar6 = FUN_140d354c0(local_90), lVar6 != 0) {
        cVar1 = FUN_140d579e0(local_90,local_38,local_80);
        if (cVar1 == '\0') {
          local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0x161);
          FUN_140c6c4e0(0x10,0,0x6d,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                       );
          *param_3 = 0x32;
          break;
        }
        local_e0 = (ulonglong)local_2c;
        local_c0 = (ulonglong)local_28;
        local_d0 = (ulonglong)local_34;
        if ((((local_d0 < local_e0) || (local_e0 + local_c0 < local_e0)) ||
            (local_d0 < local_e0 + local_c0)) || (uVar5 = FUN_140d400e0(param_1), uVar5 < local_d0))
        {
          local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0x16c);
          FUN_140c6c4e0(0x10,0,0x96,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                       );
          *param_3 = 0x2f;
          break;
        }
        if ((*(short *)(*(longlong *)(param_1 + 0x38) + 2) == 1) &&
           (local_30 != *(ushort *)(*(longlong *)(param_1 + 0x38) + 0x1a))) {
          local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0x173);
          FUN_140c6c4e0(0x10,0,0xe1,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                       );
          *param_3 = 10;
          break;
        }
        if ((*(ushort *)(*(longlong *)(param_1 + 0x38) + 0x1a) <= local_30) &&
           ((uint)local_30 <= *(ushort *)(*(longlong *)(param_1 + 0x38) + 0x1a) + 7)) {
          local_c8 = FUN_140d58b10(param_1,param_3,local_38);
          if (local_c8 == 0) break;
          if (*(uint *)(local_c8 + 4) != local_d0) {
            FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x183);
          }
          if (*(longlong *)(local_c8 + 0x10) != 0) {
            if (local_d0 == 0) {
              FID_conflict__assert((wchar_t *)"m",(wchar_t *)"D",0x189);
            }
            local_98 = FUN_140d354c0(local_80);
            uVar2 = FUN_140d354a0(local_80);
            FUN_140d573e0(*(longlong *)(local_c8 + 8) + 0xc + local_e0,uVar2,local_98);
            FUN_140d58740(local_c8,local_e0,local_e0 + local_c0);
          }
        }
      }
    }
    else if (local_e8[0] == '\x17') {
      uVar2 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x108);
      cVar1 = FUN_140d313f0(uVar2);
      if (cVar1 != '\0') {
        local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0x132);
        FUN_140c6c4e0(0x10,0,0xe1,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                     );
        *param_3 = 10;
      }
    }
    else {
      local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0x155);
      FUN_140c6c4e0(0x10,0,0xe1,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                   );
      *param_3 = 10;
    }
  }
  FUN_140db44f0(local_20 ^ (ulonglong)auStack_118);
  return;
}


/* address=140d58330 name=FUN_140d58330 */

undefined8 FUN_140d58330(undefined8 param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined local_68 [8];
  ulonglong local_60;
  undefined local_58 [48];
  undefined local_28 [8];
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_140c57a60(local_58);
  uVar3 = FUN_140d59dd0(local_28);
  FUN_140c55e70(local_68,uVar3);
  FUN_140d59d40(local_28);
  cVar1 = FUN_140c56050(local_68);
  if (cVar1 == '\0') {
    FUN_140c5cfa0(param_1,0);
    FUN_140d59d40(local_68);
    FUN_140c57a90(local_58);
  }
  else {
    puVar4 = (undefined *)FUN_140c55c70(local_68);
    *puVar4 = *param_2;
    lVar5 = FUN_140c55c70(local_68);
    *(undefined2 *)(lVar5 + 2) = *(undefined2 *)(param_2 + 8);
    lVar5 = FUN_140c55c70(local_68);
    *(undefined4 *)(lVar5 + 4) = *(undefined4 *)(param_2 + 4);
    local_20 = FUN_140c660d0(*(int *)(param_2 + 4) + 0xc);
    lVar5 = FUN_140c55c70(local_68);
    *(undefined8 *)(lVar5 + 8) = local_20;
    lVar5 = FUN_140c55c70(local_68);
    if (*(longlong *)(lVar5 + 8) == 0) {
      FUN_140c5cfa0(param_1,0);
      FUN_140d59d40(local_68);
      FUN_140c57a90(local_58);
    }
    else {
      local_18 = FUN_140c55c70(local_68);
      uVar3 = FUN_140c55cd0(local_58);
      iVar2 = FUN_140d37760(uVar3,*(undefined8 *)(local_18 + 8),0xc);
      if (iVar2 != 0) {
        uVar3 = FUN_140c55cd0(local_58);
        iVar2 = FUN_140d380f0(uVar3,*param_2);
        if (iVar2 != 0) {
          uVar3 = FUN_140c55cd0(local_58);
          iVar2 = FUN_140d38180(uVar3,*(undefined4 *)(param_2 + 4));
          if (iVar2 != 0) {
            uVar3 = FUN_140c55cd0(local_58);
            iVar2 = FUN_140d38120(uVar3,*(undefined2 *)(param_2 + 8));
            if (iVar2 != 0) {
              uVar3 = FUN_140c55cd0(local_58);
              iVar2 = FUN_140d38180(uVar3,0);
              if (iVar2 != 0) {
                uVar3 = FUN_140c55cd0(local_58);
                iVar2 = FUN_140d38180(uVar3);
                if (iVar2 != 0) {
                  uVar3 = FUN_140c55cd0(local_58);
                  iVar2 = FUN_140d37820(uVar3,0,0);
                  if (iVar2 != 0) {
                    if (*(int *)(param_2 + 4) != 0) {
                      if (*(int *)(param_2 + 4) + 7U < *(uint *)(param_2 + 4)) {
                        FUN_140c6c4e0(0x10,0,0x45,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                                      ,0xb7);
                        FUN_140c5cfa0(param_1,0);
                        FUN_140d59d40(local_68);
                        FUN_140c57a90(local_58);
                        return param_1;
                      }
                      local_60 = (ulonglong)(*(int *)(param_2 + 4) + 7) / 8;
                      local_10 = FUN_140c660d0(local_60,(ulonglong)(*(int *)(param_2 + 4) + 7) % 8);
                      lVar5 = FUN_140c55c70(local_68);
                      *(undefined8 *)(lVar5 + 0x10) = local_10;
                      lVar5 = FUN_140c55c70(local_68);
                      if (*(longlong *)(lVar5 + 0x10) == 0) {
                        FUN_140c5cfa0(param_1,0);
                        FUN_140d59d40(local_68);
                        FUN_140c57a90(local_58);
                        return param_1;
                      }
                      lVar5 = FUN_140c55c70(local_68);
                      FUN_140d57430(*(undefined8 *)(lVar5 + 0x10),0,local_60);
                    }
                    FUN_140c55e70(param_1,local_68);
                    FUN_140d59d40(local_68);
                    FUN_140c57a90(local_58);
                    return param_1;
                  }
                }
              }
            }
          }
        }
      }
      FUN_140c5cfa0(param_1,0);
      FUN_140d59d40(local_68);
      FUN_140c57a90(local_58);
    }
  }
  return param_1;
}


/* address=140d586f0 name=FUN_140d586f0 */

uint FUN_140d586f0(byte param_1,byte param_2)

{
  return ~((1 << (param_1 & 0x1f)) - 1U) & (1 << (param_2 & 0x1f)) - 1U;
}


/* address=140d58740 name=FUN_140d58740 */

ulonglong FUN_140d58740(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong local_60;
  ulonglong local_58;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar5 = (ulonglong)uVar1;
  if (((*(longlong *)(param_1 + 0x10) == 0) || (param_3 < param_2)) || (uVar5 < param_3)) {
    FID_conflict__assert(L"0",(wchar_t *)"D",0xd4);
    param_3 = 0;
  }
  else {
    if (uVar5 == 0) {
      FID_conflict__assert((wchar_t *)"m",(wchar_t *)"D",0xd8);
    }
    if (param_2 != param_3) {
      if (param_2 >> 3 == param_3 >> 3) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        bVar3 = FUN_140d586f0(param_2 & 7,param_3 & 7);
        *(byte *)(*(longlong *)(param_1 + 0x10) + (param_2 >> 3)) =
             *(byte *)(lVar2 + (param_2 >> 3)) | bVar3;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x10);
        bVar3 = FUN_140d586f0(param_2 & 7,8);
        *(byte *)(*(longlong *)(param_1 + 0x10) + (param_2 >> 3)) =
             *(byte *)(lVar2 + (param_2 >> 3)) | bVar3;
        local_60 = param_2 >> 3;
        while (local_60 = local_60 + 1, local_60 < param_3 >> 3) {
          *(undefined *)(*(longlong *)(param_1 + 0x10) + local_60) = 0xff;
        }
        if ((param_3 & 7) != 0) {
          lVar2 = *(longlong *)(param_1 + 0x10);
          bVar3 = FUN_140d586f0(0,param_3 & 7);
          *(byte *)(*(longlong *)(param_1 + 0x10) + (param_3 >> 3)) =
               *(byte *)(lVar2 + (param_3 >> 3)) | bVar3;
        }
      }
      for (local_58 = 0; local_58 < uVar1 >> 3; local_58 = local_58 + 1) {
        bVar3 = *(byte *)(*(longlong *)(param_1 + 0x10) + local_58);
        if (bVar3 != 0xff) {
          return (ulonglong)bVar3;
        }
      }
      if ((uVar1 & 7) != 0) {
        bVar3 = *(byte *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 3));
        bVar4 = FUN_140d586f0(0,uVar5 & 7);
        if (bVar3 != bVar4) {
          return (ulonglong)bVar4;
        }
      }
      FUN_140c66200(*(undefined8 *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
      param_3 = param_1;
    }
  }
  return param_3;
}


/* address=140d58a90 name=FUN_140d58a90 */

undefined FUN_140d58a90(longlong param_1)

{
  longlong lVar1;
  undefined local_28;
  
  lVar1 = FUN_140c55c70(*(longlong *)(param_1 + 0x38) + 0x30 +
                        (longlong)(int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x38) + 0x1a) % 7)
                        * 8);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) != 0)) {
    local_28 = 0;
  }
  else {
    local_28 = 1;
  }
  return local_28;
}


/* address=140d58b10 name=FUN_140d58b10 */

char * FUN_140d58b10(longlong param_1,undefined *param_2,char *param_3)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined local_18 [24];
  
  if ((*(ushort *)(param_3 + 8) < *(ushort *)(*(longlong *)(param_1 + 0x38) + 0x1a)) ||
     (6 < (int)((uint)*(ushort *)(param_3 + 8) -
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x38) + 0x1a)))) {
    *param_2 = 0x50;
    pcVar3 = (char *)0x0;
  }
  else {
    lVar2 = (longlong)(int)((uint)*(ushort *)(param_3 + 8) % 7);
    pcVar3 = (char *)FUN_140c55c70(*(longlong *)(param_1 + 0x38) + 0x30 + lVar2 * 8);
    if (pcVar3 == (char *)0x0) {
      uVar4 = FUN_140d58330(local_18,param_3);
      FUN_140d59e10(*(longlong *)(param_1 + 0x38) + 0x30 + lVar2 * 8,uVar4);
      FUN_140d59d40(local_18);
      cVar1 = FUN_140c56050(*(longlong *)(param_1 + 0x38) + 0x30 + lVar2 * 8);
      if (cVar1 == '\0') {
        *param_2 = 0x50;
        pcVar3 = (char *)0x0;
      }
      else {
        pcVar3 = (char *)FUN_140c55c70(*(longlong *)(param_1 + 0x38) + 0x30 + lVar2 * 8);
      }
    }
    else {
      if (*(short *)(pcVar3 + 2) != *(short *)(param_3 + 8)) {
        FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x110);
      }
      if ((*pcVar3 != *param_3) || (*(int *)(pcVar3 + 4) != *(int *)(param_3 + 4))) {
        FUN_140c6c4e0(0x10,0,0x98,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                      ,0x115);
        *param_2 = 0x2f;
        pcVar3 = (char *)0x0;
      }
    }
  }
  return pcVar3;
}


/* address=140d58cd0 name=FUN_140d58cd0 */

bool FUN_140d58cd0(ulonglong param_1)

{
  return 0xffffffff < param_1;
}


/* address=140d58d10 name=FUN_140d58d10 */

undefined FUN_140d58d10(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined local_38 [16];
  undefined local_28 [24];
  
  if ((**(byte **)(param_1 + 0x38) >> 1 & 1) != 0) {
    FUN_140dbf590(param_1);
    FUN_140d57580(param_1);
  }
  if (*(byte *)(*(longlong *)(param_1 + 0x38) + 0x110) < 7) {
    uVar2 = FUN_140c55f80(param_3);
    cVar1 = FUN_140d58cd0(uVar2);
    if (cVar1 == '\0') {
      if (param_2 == '\0') {
        cVar1 = FUN_140c57ae0(*(longlong *)(param_1 + 0x30) + 0x118,0);
        if (cVar1 != '\0') {
          puVar3 = (undefined *)FUN_140c57dd0(local_28,param_3);
          puVar5 = local_38;
          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          lVar4 = FUN_140c55c70(*(longlong *)(param_1 + 0x30) + 0x118);
          cVar1 = FUN_140dbfe50(lVar4 + 0x198,local_38);
          if (cVar1 == '\0') {
            FUN_140c6c4e0(0x10,0,0x44,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                          ,0x237);
            FUN_140c564c0(param_3);
            return 0;
          }
        }
        *(short *)(*(longlong *)(param_1 + 0x38) + 0x18) =
             *(short *)(*(longlong *)(param_1 + 0x38) + 0x18) + 1;
      }
      lVar4 = *(longlong *)(param_1 + 0x38) + 0x68 +
              (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x38) + 0x110) * 0x18;
      uVar2 = FUN_140c55cd0(param_3);
      FUN_140c564e0(lVar4,uVar2);
      *(undefined2 *)(lVar4 + 0x10) = *(undefined2 *)(*(longlong *)(param_1 + 0x38) + 4);
      *(char *)(lVar4 + 0x12) = param_2;
      *(char *)(*(longlong *)(param_1 + 0x38) + 0x110) =
           *(char *)(*(longlong *)(param_1 + 0x38) + 0x110) + '\x01';
      FUN_140c564c0(param_3);
      return 1;
    }
  }
  FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x22d);
  FUN_140c6c4e0(0x10,0,0x44,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                ,0x22e);
  FUN_140c564c0(param_3);
  return 0;
}


/* address=140d58fb0 name=FUN_140d58fb0 */

undefined8 FUN_140d58fb0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar2 = FUN_140d57ac0();
  if (*(uint *)(lVar1 + 0x118) < uVar2) {
    uVar2 = FUN_140c4d910(param_1);
    if ((uVar2 & 0x1000) == 0) {
      uVar4 = FUN_140c55c70(param_1 + 0x20);
      uVar2 = FUN_140d337d0(uVar4,0x28,0,0);
      if ((-1 < (int)uVar2) && ((int)uVar2 < 0x40000001)) {
        uVar3 = FUN_140d57ac0();
        if (uVar3 <= uVar2) {
          *(uint *)(*(longlong *)(param_1 + 0x38) + 0x118) = uVar2;
          goto LAB_140d59099;
        }
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x118) = 0x5c0;
      lVar1 = *(longlong *)(param_1 + 0x38);
      uVar4 = FUN_140c55c70(param_1 + 0x20);
      FUN_140d337d0(uVar4,0x2a,*(undefined4 *)(lVar1 + 0x118),0);
    }
  }
LAB_140d59099:
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar4 = FUN_140d57ac0();
  if (*(uint *)(lVar1 + 0x118) < (uint)uVar4) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x261);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140d590e0 name=FUN_140d590e0 */

void FUN_140d590e0(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined auStack_1c8 [32];
  undefined4 local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188;
  ulonglong local_180;
  longlong local_178;
  ulonglong local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined local_158 [16];
  longlong local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  undefined *local_108;
  undefined local_100 [48];
  undefined local_d0 [24];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [48];
  undefined local_38 [4];
  uint local_34;
  undefined2 local_30;
  int local_2c;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_1413d9c40 ^ (ulonglong)auStack_1c8;
  if (*(byte *)(*(longlong *)(param_1 + 0x38) + 0x110) <=
      *(byte *)(*(longlong *)(param_1 + 0x38) + 0x111)) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x271);
  }
  if (param_5 !=
      *(longlong *)(param_1 + 0x38) + 0x68 +
      (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x38) + 0x111) * 0x18) {
    FID_conflict__assert((wchar_t *)"m",(wchar_t *)"D",0x272);
  }
  local_188 = 1;
  if ((*(short *)(*(longlong *)(param_1 + 0x38) + 4) == 0) ||
     ((uint)*(ushort *)(param_5 + 0x10) != *(ushort *)(*(longlong *)(param_1 + 0x38) + 4) - 1)) {
    if (*(short *)(param_5 + 0x10) != *(short *)(*(longlong *)(param_1 + 0x38) + 4)) {
      local_1a8 = 0x278;
      FUN_140c6c4e0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                   );
      goto LAB_140d597ff;
    }
  }
  else {
    local_188 = 0;
  }
  local_178 = FUN_140dd4230(param_1,local_188);
  local_170 = FUN_140dd4270(param_1,local_188);
  if (*(char *)(param_5 + 0x12) == '\0') {
    local_130 = FUN_140c55f80(param_5);
    uVar4 = FUN_140c55c70(param_5);
    FUN_140d35430(local_d0,uVar4,local_130);
    cVar1 = FUN_140d579e0(local_d0,local_38,local_158);
    if ((cVar1 != '\0') && (local_2c == 0)) {
      local_128 = (ulonglong)local_28;
      uVar5 = FUN_140d354c0(local_158);
      if (local_128 == uVar5) {
        local_120 = (ulonglong)local_34;
        uVar5 = FUN_140d354c0(local_158);
        if (((local_120 == uVar5) &&
            (iVar2 = FUN_140d35470(local_158,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x114))
            , iVar2 != 0)) && (lVar6 = FUN_140d354c0(local_d0), lVar6 == 0)) {
          if ((local_178 + 0xdU <= param_4) && (local_170 <= param_4)) {
            local_180 = FUN_140d354c0(local_158);
            if ((param_4 - 0xc) - local_178 < local_180) {
              local_180 = (param_4 - 0xc) - local_178;
            }
            FUN_140c57a60(local_100);
            local_148 = param_2 + local_170;
            local_118 = param_4 - local_170;
            uVar4 = FUN_140c55cd0(local_100);
            iVar2 = FUN_140d37760(uVar4,local_148,local_118);
            if (iVar2 != 0) {
              uVar4 = FUN_140c55cd0(local_100);
              iVar2 = FUN_140d380f0(uVar4,local_38[0]);
              if (iVar2 != 0) {
                uVar4 = FUN_140c55cd0(local_100);
                iVar2 = FUN_140d38180(uVar4,local_34);
                if (iVar2 != 0) {
                  uVar4 = FUN_140c55cd0(local_100);
                  iVar2 = FUN_140d38120(uVar4,local_30);
                  if (iVar2 != 0) {
                    local_110 = *(longlong *)(param_1 + 0x38);
                    uVar4 = FUN_140c55cd0(local_100);
                    iVar2 = FUN_140d38180(uVar4,*(undefined4 *)(local_110 + 0x114));
                    if (iVar2 != 0) {
                      uVar4 = FUN_140c55cd0(local_100);
                      iVar2 = FUN_140d37e10(uVar4,local_68);
                      if (iVar2 != 0) {
                        uVar4 = FUN_140d354a0(local_158);
                        iVar2 = FUN_140d37f00(local_68,uVar4,local_180);
                        if (iVar2 != 0) {
                          uVar4 = FUN_140c55cd0(local_100);
                          iVar2 = FUN_140d37820(uVar4,0,&local_140);
                          if (iVar2 != 0) {
                            local_108 = local_88;
                            uVar4 = FUN_140c55fe0(local_78,local_148,local_140);
                            puVar3 = (undefined *)FUN_140c57dd0(local_108,uVar4);
                            puVar7 = local_a8;
                            for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                              *puVar7 = *puVar3;
                              puVar3 = puVar3 + 1;
                              puVar7 = puVar7 + 1;
                            }
                            FUN_140c536d0(param_1,1,0x16,local_a8);
                            local_1a0 = (undefined *)(param_2 + local_170);
                            local_190 = local_188;
                            local_198 = local_140;
                            local_1a8 = CONCAT31(local_1a8._1_3_,0x16);
                            cVar1 = FUN_140dd42b0(param_1,param_2,param_3,param_4);
                            if (cVar1 == '\0') {
                              local_164 = 0;
                              FUN_140c57a90(local_100);
                            }
                            else {
                              uVar5 = FUN_140d354c0(local_158);
                              if (local_180 == uVar5) {
                                *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x114) = 0;
                                local_160 = 3;
                                FUN_140c57a90(local_100);
                              }
                              else {
                                *(int *)(*(longlong *)(param_1 + 0x38) + 0x114) =
                                     *(int *)(*(longlong *)(param_1 + 0x38) + 0x114) +
                                     (int)local_180;
                                local_15c = 2;
                                FUN_140c57a90(local_100);
                              }
                            }
                            goto LAB_140d597ff;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            local_1a8 = 0x2b5;
            FUN_140c6c4e0(0x10,0,0x44,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                         );
            local_168 = 0;
            FUN_140c57a90(local_100);
          }
          goto LAB_140d597ff;
        }
      }
    }
    local_1a8 = 0x29b;
    FUN_140c6c4e0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                 );
  }
  else if (local_178 + 1U <= param_4) {
    local_190 = local_188;
    local_198 = 1;
    local_1a0 = &DAT_14107567b;
    local_1a8 = CONCAT31(local_1a8._1_3_,0x14);
    cVar1 = FUN_140dd42b0(param_1,param_2,param_3,param_4);
    if (cVar1 != '\0') {
      local_138 = local_98;
      puVar3 = (undefined *)FUN_140d3f210(local_138,&DAT_14107567b);
      puVar7 = local_b8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_140c536d0(param_1,1,0x14,local_b8);
    }
  }
LAB_140d597ff:
  FUN_140db44f0(local_20 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=140d59820 name=FUN_140d59820 */

bool FUN_140d59820(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  bool bVar1;
  int iVar2;
  longlong local_res10;
  longlong local_res20;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  bVar1 = false;
  local_20 = 0;
  local_res10 = param_2;
  local_res20 = param_4;
  if (*(byte *)(*(longlong *)(param_1 + 0x38) + 0x110) <=
      *(byte *)(*(longlong *)(param_1 + 0x38) + 0x111)) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x2d2);
  }
  while (*(byte *)(*(longlong *)(param_1 + 0x38) + 0x111) <
         *(byte *)(*(longlong *)(param_1 + 0x38) + 0x110)) {
    local_18 = *(longlong *)(param_1 + 0x38) + 0x68 +
               (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x38) + 0x111) * 0x18;
    iVar2 = FUN_140d590e0(param_1,local_res10,&local_28,local_res20,local_18);
    if (iVar2 == 0) {
      return false;
    }
    if (iVar2 == 1) break;
    if ((iVar2 == 2) || (iVar2 == 3)) {
      local_res10 = local_res10 + local_28;
      local_res20 = local_res20 - local_28;
      local_20 = local_20 + local_28;
      bVar1 = true;
      if (iVar2 == 2) break;
    }
    *(char *)(*(longlong *)(param_1 + 0x38) + 0x111) =
         *(char *)(*(longlong *)(param_1 + 0x38) + 0x111) + '\x01';
  }
  if (bVar1) {
    *param_3 = local_20;
  }
  else {
    FUN_140c6c4e0(0x10,0,0xa9,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                  ,0x2f1);
  }
  return bVar1;
}


/* address=140d59a00 name=FUN_140d59a00 */

int FUN_140d59a00(longlong param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined local_50 [16];
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0xb0) == 0) {
    cVar2 = operator==<>(param_1 + 0x20,0);
    if (cVar2 == '\0') {
      FUN_140d58fb0(param_1);
      FUN_140c56440(local_50);
      cVar2 = FUN_140c56600(local_50,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x118));
      if (cVar2 == '\0') {
        local_40 = -1;
        FUN_140c564c0(local_50);
      }
      else {
        do {
          if (*(byte *)(*(longlong *)(param_1 + 0x38) + 0x110) <=
              *(byte *)(*(longlong *)(param_1 + 0x38) + 0x111)) {
            uVar4 = FUN_140c55c70(param_1 + 0x20);
            iVar3 = FUN_140d337a0(uVar4);
            if (iVar3 < 1) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc4) = 3;
              local_30 = -1;
              FUN_140c564c0(local_50);
              return local_30;
            }
            local_2c = 1;
            FUN_140c564c0(local_50);
            return local_2c;
          }
          uVar1 = *(undefined *)(*(longlong *)(param_1 + 0x38) + 0x111);
          local_38 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x114);
          local_28 = FUN_140c55f80(local_50);
          uVar4 = FUN_140c55c70(local_50);
          cVar2 = FUN_140d59820(param_1,uVar4,local_20,local_28);
          if (cVar2 == '\0') {
            local_3c = -1;
            FUN_140c564c0(local_50);
            return local_3c;
          }
          local_18 = FUN_140c55c70(local_50);
          uVar4 = FUN_140c55c70(param_1 + 0x20);
          local_34 = FUN_140d33590(uVar4,local_18,local_20[0]);
        } while (0 < local_34);
        *(undefined *)(*(longlong *)(param_1 + 0x38) + 0x111) = uVar1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x114) = local_38;
        *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc4) = 3;
        FUN_140c564c0(local_50);
        local_40 = local_34;
      }
    }
    else {
      FUN_140c6c4e0(0x10,0,0x77,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                    ,0x300);
      local_40 = -1;
    }
  }
  else {
    FUN_140c6c4e0(0x10,0,0xc2,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_both.cc"
                  ,0x2fb);
    local_40 = -1;
  }
  return local_40;
}


/* address=140d59cb0 name=FUN_140d59cb0 */

undefined * FUN_140d59cb0(undefined *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}


/* address=140d59d00 name=FUN_140d59d00 */

undefined8 FUN_140d59d00(undefined8 param_1,uint param_2)

{
  FUN_140d57650(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,0x18);
  }
  return param_1;
}


/* address=140d59d40 name=FUN_140d59d40 */

void FUN_140d59d40(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140d59ec0(uVar1,*param_1);
  }
  return;
}


/* address=140d59d80 name=FUN_140d59d80 */

void FUN_140d59d80(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140c55cd0(param_1);
    FUN_140d59ec0(uVar2,p_Var1);
  }
  return;
}


/* address=140d59dd0 name=FUN_140d59dd0 */

undefined8 FUN_140d59dd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140d59e70();
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140d59d40(local_18);
  return param_1;
}


/* address=140d59e10 name=FUN_140d59e10 */

undefined8
FUN_140d59e10(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140d59d80(param_1,p_Var1);
  uVar2 = FUN_140c55cd0(param_2);
  FUN_140c55cd0(uVar2);
  FUN_140c55cd0(param_1);
  return param_1;
}


/* address=140d59e70 name=FUN_140d59e70 */

undefined8 FUN_140d59e70(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c660d0(0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(0x18,lVar1);
    uVar2 = FUN_140d59cb0(uVar2);
  }
  return uVar2;
}


/* address=140d59ec0 name=FUN_140d59ec0 */

void FUN_140d59ec0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d59ee0(param_2);
  return;
}


/* address=140d59ee0 name=FUN_140d59ee0 */

void FUN_140d59ee0(undefined8 param_1)

{
  FUN_140d59f00(param_1);
  return;
}


/* address=140d59f00 name=FUN_140d59f00 */

void FUN_140d59f00(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140d59d00(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140d59f40 name=FUN_140d59f40 */

undefined8 FUN_140d59f40(int param_1)

{
  undefined8 uVar1;
  uint local_18;
  
  if (param_1 != 0) {
    for (local_18 = 0; local_18 < 0x12; local_18 = local_18 + 1) {
      if (*(int *)(&DAT_1410765d0 + (ulonglong)local_18 * 0x20) == param_1) {
        uVar1 = (**(code **)(&UNK_1410765d8 + (ulonglong)local_18 * 0x20))();
        return uVar1;
      }
    }
  }
  return 0;
}


/* address=140d59fb0 name=FUN_140d59fb0 */

void FUN_140d59fb0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_140d6a650(param_1);
    uVar2 = FUN_140d6a620(param_1);
    FUN_140d35430(local_20,uVar2,uVar1);
    FUN_140d5a3a0(local_20);
  }
  else {
    FUN_140d59f40(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


/* address=140d5a020 name=FUN_140d5a020 */

longlong FUN_140d5a020(wchar_t *param_1)

{
  ulong uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *local_40 [2];
  wchar_t *local_30 [2];
  wchar_t *local_20 [4];
  
  uVar1 = wcstoul(param_1,local_40,0x20000010);
  if ((uVar1 == 0) || (uVar1 = wcstoul((wchar_t *)local_40,local_30,6), uVar1 == 0)) {
    FUN_140c6c4e0(0x1d,0,0x65,s_D__a_1_s_target_release_build_bo_1413bd000,0xac);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140d5a3a0(local_30);
    if (lVar2 == 0) {
      FUN_140c6c4e0(0x1d,0,0x66,s_D__a_1_s_target_release_build_bo_1413bd070,0xb2);
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_140d354c0(local_40);
      if ((lVar3 != 0) &&
         (((uVar1 = wcstoul((wchar_t *)local_40,local_20,5), uVar1 == 0 ||
           (lVar3 = FUN_140d354c0(local_20), lVar3 != 0)) ||
          (lVar3 = FUN_140d354c0(local_40), lVar3 != 0)))) {
        FUN_140c6c4e0(0x1d,0,0x65,s_D__a_1_s_target_release_build_bo_1413bd0e0,0xbf);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


/* address=140d5a140 name=FUN_140d5a140 */

undefined8 FUN_140d5a140(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong local_a8;
  undefined local_98 [48];
  undefined local_68 [48];
  undefined local_38 [56];
  
  iVar2 = FUN_140d37e40(param_1,local_98,0x20000010);
  if ((iVar2 == 0) || (iVar2 = FUN_140d37e40(local_98,local_68,6), iVar2 == 0)) {
    return 0;
  }
  bVar1 = false;
  iVar2 = FUN_140c7f950(param_2);
  local_a8 = 0;
  do {
    if (6 < local_a8) {
LAB_140d5a226:
      if (!bVar1) {
        FUN_140c6c4e0(0x1d,0,0x66,s_D__a_1_s_target_release_build_bo_1413bd150,0xdb);
        return 0;
      }
      iVar2 = FUN_140d37e40(local_98,local_38,5);
      if ((iVar2 != 0) && (iVar2 = FUN_140d37900(param_1), iVar2 != 0)) {
        return 1;
      }
      return 0;
    }
    if (iVar2 == *(int *)(&DAT_14107681c + local_a8 * 0x10)) {
      iVar2 = FUN_140d37f00(local_68,&DAT_141076810 + local_a8 * 0x10,
                            (&DAT_141076819)[local_a8 * 0x10]);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = true;
      goto LAB_140d5a226;
    }
    local_a8 = local_a8 + 1;
  } while( true );
}


/* address=140d5a360 name=FUN_140d5a360 */

int FUN_140d5a360(void *param_1,void *param_2,size_t param_3)

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


/* address=140d5a3a0 name=FUN_140d5a3a0 */

undefined8 FUN_140d5a3a0(undefined8 param_1)

{
  undefined uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong local_28;
  
  local_28 = 0;
  do {
    if (6 < local_28) {
      return 0;
    }
    uVar3 = FUN_140d354c0(param_1);
    if (uVar3 == (byte)(&DAT_141076819)[local_28 * 0x10]) {
      uVar1 = (&DAT_141076819)[local_28 * 0x10];
      uVar4 = FUN_140d354a0(param_1);
      iVar2 = FUN_140d5a360(uVar4,&DAT_141076810 + local_28 * 0x10,uVar1);
      if (iVar2 == 0) {
        uVar4 = FUN_140d59f40(*(undefined4 *)(&DAT_14107681c + local_28 * 0x10));
        return uVar4;
      }
    }
    local_28 = local_28 + 1;
  } while( true );
}


/* address=140d5a510 name=FUN_140d5a510 */

longlong FUN_140d5a510(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  char local_48 [4];
  undefined4 local_44;
  longlong local_40;
  wchar_t *local_38 [2];
  wchar_t *local_28 [2];
  wchar_t *local_18 [3];
  
  uVar1 = wcstoul(param_1,local_38,0x20000010);
  if ((((uVar1 == 0) || (uVar1 = wcstoul((wchar_t *)local_38,local_18,0x20000010), uVar1 == 0)) ||
      (uVar1 = wcstoul((wchar_t *)local_38,local_28,3), uVar1 == 0)) ||
     (lVar3 = FUN_140d354c0(local_38), lVar3 != 0)) {
    FUN_140c6c4e0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413bd1c0,0x6b);
  }
  else {
    iVar2 = FUN_140d5b290(local_18,&local_44);
    if (iVar2 == 0) {
      FUN_140c6c4e0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413bd230,0x6f);
    }
    else {
      iVar2 = FUN_140d356c0(local_28,local_48);
      if ((iVar2 == 0) || (local_48[0] != '\0')) {
        FUN_140c6c4e0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413bd2a0,0x76);
      }
      else {
        local_40 = FUN_140d316f0();
        if ((local_40 != 0) && (iVar2 = FUN_140d31ed0(local_40,local_44), iVar2 != 0)) {
          if (*(longlong *)(*(longlong *)(local_40 + 0x10) + 0x18) == 0) {
            FUN_140c6c4e0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413bd310,0x83);
          }
          else {
            iVar2 = (**(code **)(*(longlong *)(local_40 + 0x10) + 0x18))(local_40,local_18,local_28)
            ;
            if (iVar2 != 0) {
              return local_40;
            }
          }
        }
        FUN_140d31750(local_40);
      }
    }
  }
  return 0;
}


/* address=140d5a6c0 name=FUN_140d5a6c0 */

undefined8 FUN_140d5a6c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20) == 0)) {
    FUN_140c6c4e0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413bd380,0x93);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x20))(param_1,param_2);
  }
  return uVar1;
}


/* address=140d5a730 name=FUN_140d5a730 */

longlong FUN_140d5a730(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  wchar_t *local_40 [2];
  wchar_t *local_30 [2];
  wchar_t *local_20 [4];
  
  uVar1 = wcstoul(param_1,local_40,0x20000010);
  if ((((uVar1 == 0) || (iVar2 = FUN_140d35eb0(local_40,&local_48), iVar2 == 0)) || (local_48 != 0))
     || ((uVar1 = wcstoul((wchar_t *)local_40,local_30,0x20000010), uVar1 == 0 ||
         (uVar1 = wcstoul((wchar_t *)local_40,local_20,4), uVar1 == 0)))) {
    FUN_140c6c4e0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413bd3f0,0xa4);
  }
  else {
    iVar2 = FUN_140d5b290(local_30,local_58);
    if (iVar2 == 0) {
      FUN_140c6c4e0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413bd460,0xa8);
    }
    else {
      local_50 = FUN_140d316f0();
      if ((local_50 != 0) && (iVar2 = FUN_140d31ed0(local_50,local_58[0]), iVar2 != 0)) {
        if (*(longlong *)(*(longlong *)(local_50 + 0x10) + 0x30) == 0) {
          FUN_140c6c4e0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413bd4d0,0xb7);
        }
        else {
          iVar2 = (**(code **)(*(longlong *)(local_50 + 0x10) + 0x30))(local_50,local_30,local_20);
          if (iVar2 != 0) {
            return local_50;
          }
        }
      }
      FUN_140d31750(local_50);
    }
  }
  return 0;
}


/* address=140d5a8b0 name=FUN_140d5a8b0 */

undefined8 FUN_140d5a8b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38) == 0)) {
    FUN_140c6c4e0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413bd540,199);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x38))(param_1,param_2);
  }
  return uVar1;
}


/* address=140d5a9d0 name=FUN_140d5a9d0 */

longlong FUN_140d5a9d0(int param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  longlong local_28;
  undefined local_20 [32];
  
  if (param_4 < 0) {
    FUN_140c6c4e0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413bd620,0xfa);
    return 0;
  }
  FUN_140d35430(local_20,*param_3,(longlong)param_4);
  local_28 = FUN_140d5b380(local_20,param_1);
  if (local_28 == 0) {
    FUN_140c6c180();
    FUN_140d35430(local_20,*param_3,(longlong)param_4);
    local_28 = FUN_140d5a730(local_20);
    if (local_28 == 0) {
      return 0;
    }
    if (*(int *)(local_28 + 4) != param_1) {
      FUN_140c6c4e0(6,0,0x67,s_D__a_1_s_target_release_build_bo_1413bd690,0x10b);
      FUN_140d31750(local_28);
      return 0;
    }
  }
  if (param_2 != (longlong *)0x0) {
    FUN_140d31750(*param_2);
    *param_2 = local_28;
  }
  uVar1 = FUN_140d354a0(local_20);
  *param_3 = uVar1;
  return local_28;
}


/* address=140d5ab10 name=FUN_140d5ab10 */

longlong FUN_140d5ab10(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    FUN_140c6c4e0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413bd700,0x131);
    lVar1 = 0;
  }
  else {
    FUN_140d35430(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_140d5a730(local_18);
    if (lVar1 == 0) {
      FUN_140c6c180();
      lVar1 = FUN_140d5b4d0(*param_2,(longlong)param_3);
      if (lVar1 == 4) {
        lVar1 = FUN_140d5a9d0(0x198,param_1,param_2,param_3);
      }
      else if (lVar1 == 6) {
        lVar1 = FUN_140d5a9d0(0x74,param_1,param_2,param_3);
      }
      else {
        lVar1 = FUN_140d5a9d0(6,param_1,param_2,param_3);
      }
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140d31750(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_140d354a0(local_18);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140d5ad80 name=FUN_140d5ad80 */

undefined8 FUN_140d5ad80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_140d376f0(local_38,0x80);
    if ((iVar1 != 0) && (iVar1 = FUN_140d5a6c0(local_38,param_1), iVar1 != 0)) {
      uVar2 = FUN_140d8ad30(local_38,param_2);
      return uVar2;
    }
    FUN_140d377b0(local_38);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* address=140d5adf0 name=FUN_140d5adf0 */

longlong FUN_140d5adf0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d35430(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_140d5a510(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140d31750(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_140d354a0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140d5ae90 name=FUN_140d5ae90 */

undefined4 FUN_140d5ae90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0xffffffff;
    lVar2 = FUN_140d316f0();
    if ((lVar2 != 0) && (iVar1 = FUN_140d31b70(lVar2,param_1), iVar1 != 0)) {
      local_18 = FUN_140d5ad80(lVar2,param_2);
    }
    FUN_140d31750(lVar2);
  }
  return local_18;
}


/* address=140d5af10 name=FUN_140d5af10 */

longlong FUN_140d5af10(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    lVar2 = 0;
  }
  else {
    FUN_140d35430(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_140d5a510(local_18);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_140d31c30(lVar1);
      FUN_140d31750(lVar1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_140cb5af0(*param_1);
          *param_1 = lVar2;
        }
        uVar3 = FUN_140d354a0(local_18);
        *param_2 = uVar3;
      }
    }
  }
  return lVar2;
}


/* address=140d5afd0 name=FUN_140d5afd0 */

undefined4 FUN_140d5afd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0xffffffff;
    lVar2 = FUN_140d316f0();
    if ((lVar2 != 0) && (iVar1 = FUN_140d31c70(lVar2,param_1), iVar1 != 0)) {
      local_18 = FUN_140d5ad80(lVar2,param_2);
    }
    FUN_140d31750(lVar2);
  }
  return local_18;
}


/* address=140d5b050 name=FUN_140d5b050 */

longlong FUN_140d5b050(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    lVar2 = 0;
  }
  else {
    FUN_140d35430(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_140d5a510(local_18);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_140d31d30(lVar1);
      FUN_140d31750(lVar1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_140dc31e0(*param_1);
          *param_1 = lVar2;
        }
        uVar3 = FUN_140d354a0(local_18);
        *param_2 = uVar3;
      }
    }
  }
  return lVar2;
}


/* address=140d5b110 name=FUN_140d5b110 */

undefined4 FUN_140d5b110(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0xffffffff;
    lVar2 = FUN_140d316f0();
    if ((lVar2 != 0) && (iVar1 = FUN_140d31d70(lVar2,param_1), iVar1 != 0)) {
      local_18 = FUN_140d5ad80(lVar2,param_2);
    }
    FUN_140d31750(lVar2);
  }
  return local_18;
}


/* address=140d5b190 name=FUN_140d5b190 */

longlong FUN_140d5b190(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    lVar2 = 0;
  }
  else {
    FUN_140d35430(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_140d5a510(local_18);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_140d31e30(lVar1);
      FUN_140d31750(lVar1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_140cba420(*param_1);
          *param_1 = lVar2;
        }
        uVar3 = FUN_140d354a0(local_18);
        *param_2 = uVar3;
      }
    }
  }
  return lVar2;
}


/* address=140d5b250 name=FUN_140d5b250 */

int FUN_140d5b250(void *param_1,void *param_2,size_t param_3)

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


/* address=140d5b290 name=FUN_140d5b290 */

undefined8 FUN_140d5b290(wchar_t *param_1,undefined4 *param_2)

{
  undefined uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint local_38;
  wchar_t *local_18 [3];
  
  uVar3 = wcstoul(param_1,local_18,6);
  if (uVar3 != 0) {
    for (local_38 = 0; local_38 < 5; local_38 = local_38 + 1) {
      puVar2 = (undefined4 *)(&PTR_DAT_1410768b0)[local_38];
      uVar5 = FUN_140d354c0(local_18);
      if (uVar5 == *(byte *)((longlong)puVar2 + 0xd)) {
        uVar1 = *(undefined *)((longlong)puVar2 + 0xd);
        uVar6 = FUN_140d354a0(local_18);
        iVar4 = FUN_140d5b250(uVar6,puVar2 + 1,uVar1);
        if (iVar4 == 0) {
          *param_2 = *puVar2;
          return 1;
        }
      }
    }
  }
  return 0;
}


/* address=140d5b380 name=FUN_140d5b380 */

longlong FUN_140d5b380(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140d316f0();
  if (lVar2 != 0) {
    if (param_2 == 6) {
      lVar3 = FUN_140d5e490(param_1);
      if ((lVar3 != 0) && (iVar1 = FUN_140d31bb0(lVar2,lVar3), iVar1 != 0)) {
        return lVar2;
      }
      FUN_140cb5af0(lVar3);
    }
    else if (param_2 == 0x74) {
      lVar3 = FUN_140dd5950(param_1);
      if ((lVar3 != 0) && (iVar1 = FUN_140d31cb0(lVar2,lVar3), iVar1 != 0)) {
        return lVar2;
      }
      FUN_140dc31e0(lVar3);
    }
    else if (param_2 == 0x198) {
      lVar3 = FUN_140d68180(param_1,0);
      if ((lVar3 != 0) && (iVar1 = FUN_140d31db0(lVar2,lVar3), iVar1 != 0)) {
        return lVar2;
      }
      FUN_140cba420(lVar3);
    }
    else {
      FUN_140c6c4e0(6,0,0x7f,s_D__a_1_s_target_release_build_bo_1413bd5b0,0xee);
    }
    FUN_140d31750(lVar2);
  }
  return 0;
}


/* address=140d5b4d0 name=FUN_140d5b4d0 */

longlong FUN_140d5b4d0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong local_38;
  wchar_t *local_30 [2];
  wchar_t local_20 [16];
  
  FUN_140d35430(local_20,param_1,param_2);
  uVar1 = wcstoul(local_20,local_30,0x20000010);
  if (uVar1 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = 0;
    while (lVar2 = FUN_140d354c0(local_30), lVar2 != 0) {
      pvVar3 = _aligned_recalloc(local_30,0,0,0);
      if ((int)pvVar3 == 0) {
        return 0;
      }
      local_38 = local_38 + 1;
    }
  }
  return local_38;
}


/* address=140d5b560 name=FUN_140d5b560 */

undefined * FUN_140d5b560(void)

{
  return &DAT_1410768e0;
}


/* address=140d5b7b0 name=FUN_140d5b7b0 */

undefined8 FUN_140d5b7b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e28500(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140d5b7f0 name=FUN_140d5b7f0 */

undefined8 FUN_140d5b7f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d5b840 name=FUN_140d5b840 */

undefined8 FUN_140d5b840(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d5b890 name=FUN_140d5b890 */

undefined8 FUN_140d5b890(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d5b940 name=FUN_140d5b940 */

undefined8 FUN_140d5b940(longlong param_1)

{
  longlong lVar1;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 8) != 0)) &&
     (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if ((*(uint *)(param_1 + 0x10) & 0x200) != 0) {
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    FUN_140d80620(lVar1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return 1;
}


/* address=140d5b9d0 name=FUN_140d5b9d0 */

int FUN_140d5b9d0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  int local_18;
  
  FUN_140d33b40(param_1);
  if (param_3 < 1) {
    local_18 = 0;
  }
  else {
    puVar1 = *(ulonglong **)(param_1 + 0x20);
    local_18 = param_3;
    if (*puVar1 < (ulonglong)(longlong)param_3) {
      local_18 = *(int *)puVar1;
    }
    if (local_18 < 1) {
      if ((*puVar1 == 0) && (local_18 = *(int *)(param_1 + 0x18), local_18 != 0)) {
        FUN_140d33ae0(param_1);
      }
    }
    else {
      FUN_140d5b7f0(param_2,puVar1[1],(longlong)local_18);
      *puVar1 = *puVar1 - (longlong)local_18;
      if ((*(uint *)(param_1 + 0x10) & 0x200) == 0) {
        FUN_140d5b840(puVar1[1],puVar1[1] + (longlong)local_18,*puVar1);
      }
      else {
        puVar1[1] = (longlong)local_18 + puVar1[1];
      }
    }
  }
  return local_18;
}


/* address=140d5c1c0 name=FUN_140d5c1c0 */

void FUN_140d5c1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d7aba0(&LAB_140d5d800,s_X509_CRL_1413bd9c8,param_1,param_2,param_3,param_4);
  return;
}


/* address=140d5c500 name=FUN_140d5c500 */

void FUN_140d5c500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d5ebe0(param_1,0,param_3,param_4);
  FUN_140d5d540(uVar1,param_2);
  return;
}


/* address=140d5d540 name=FUN_140d5d540 */

longlong FUN_140d5d540(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140d31c30(param_1);
    FUN_140d31750(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_140cb5af0(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=140d5d5c0 name=FUN_140d5d5c0 */

longlong FUN_140d5d5c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140d31d30(param_1);
    FUN_140d31750(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_140dc31e0(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=140d5d640 name=FUN_140d5d640 */

longlong FUN_140d5d640(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140d31e30(param_1);
    FUN_140d31750(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_140cba420(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=140d5e1c0 name=FUN_140d5e1c0 */

longlong FUN_140d5e1c0(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *local_20 [4];
  
  lVar3 = FUN_140cb5990();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = wcstoul(param_1,local_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_140d5eb20(local_20,lVar3 + 8), iVar2 == 0)) ||
        (iVar2 = FUN_140d5eb20(local_20,lVar3 + 0x10), iVar2 == 0)) ||
       (lVar4 = FUN_140d354c0(local_20), lVar4 != 0)) {
      FUN_140c6c4e0(4,0,100,s_D__a_1_s_target_release_build_bo_1413bddb0,100);
      FUN_140cb5af0(lVar3);
      lVar3 = 0;
    }
    else {
      iVar2 = FUN_140cb6730(lVar3);
      if (iVar2 == 0) {
        FUN_140c6c4e0(4,0,0x68,s_D__a_1_s_target_release_build_bo_1413bde20,0x6a);
        FUN_140cb5af0(lVar3);
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}


/* address=140d5e2c0 name=FUN_140d5e2c0 */

longlong FUN_140d5e2c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined local_20 [32];
  
  FUN_140d35430(local_20,param_1,param_2);
  lVar1 = FUN_140d5e1c0(local_20);
  if ((lVar1 == 0) || (lVar2 = FUN_140d354c0(local_20), lVar2 != 0)) {
    FUN_140c6c4e0(4,0,100,s_D__a_1_s_target_release_build_bo_1413bde90,0x77);
    FUN_140cb5af0(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=140d5e350 name=FUN_140d5e350 */

undefined8 FUN_140d5e350(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_140d37e40(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_140d5eb90(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0))
      && (iVar1 = FUN_140d5eb90(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) &&
     (iVar1 = FUN_140d37900(param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_140c6c4e0(4,0,0x79,s_D__a_1_s_target_release_build_bo_1413bdf00,0x84);
  return 0;
}


/* address=140d5e3f0 name=FUN_140d5e3f0 */

undefined8 FUN_140d5e3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  FUN_140d376c0(local_38);
  iVar1 = FUN_140d376f0(local_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_140d5e350(local_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_140d37820(local_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_140c6c4e0(4,0,0x79,s_D__a_1_s_target_release_build_bo_1413bdf70,0x91);
  FUN_140d377b0(local_38);
  return 0;
}


/* address=140d5e490 name=FUN_140d5e490 */

longlong FUN_140d5e490(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_20;
  wchar_t *local_18 [3];
  
  lVar3 = FUN_140cb5990();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,local_18,0x20000010);
    if ((uVar1 == 0) || (iVar2 = FUN_140d35eb0(local_18,&local_20), iVar2 == 0)) {
      FUN_140c6c4e0(4,0,100,s_D__a_1_s_target_release_build_bo_1413bdfe0,0xa6);
    }
    else if (local_20 == DAT_141076930) {
      iVar2 = FUN_140d5eb20(local_18,lVar3 + 8);
      if (((((iVar2 != 0) && (iVar2 = FUN_140d5eb20(local_18,lVar3 + 0x10), iVar2 != 0)) &&
           (iVar2 = FUN_140d5eb20(local_18,lVar3 + 0x18), iVar2 != 0)) &&
          ((iVar2 = FUN_140d5eb20(local_18,lVar3 + 0x20), iVar2 != 0 &&
           (iVar2 = FUN_140d5eb20(local_18,lVar3 + 0x28), iVar2 != 0)))) &&
         ((iVar2 = FUN_140d5eb20(local_18,lVar3 + 0x30), iVar2 != 0 &&
          ((iVar2 = FUN_140d5eb20(local_18,lVar3 + 0x38), iVar2 != 0 &&
           (iVar2 = FUN_140d5eb20(local_18,lVar3 + 0x40), iVar2 != 0)))))) {
        lVar4 = FUN_140d354c0(local_18);
        if (lVar4 == 0) {
          iVar2 = FUN_140cb6730(lVar3);
          if (iVar2 != 0) {
            return lVar3;
          }
          FUN_140c6c4e0(4,0,0x68,s_D__a_1_s_target_release_build_bo_1413be130,0xc0);
        }
        else {
          FUN_140c6c4e0(4,0,100,s_D__a_1_s_target_release_build_bo_1413be0c0,0xbb);
        }
      }
    }
    else {
      FUN_140c6c4e0(4,0,0x6a,s_D__a_1_s_target_release_build_bo_1413be050,0xab);
    }
    FUN_140cb5af0(lVar3);
  }
  return 0;
}


/* address=140d5e6a0 name=FUN_140d5e6a0 */

longlong FUN_140d5e6a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined local_20 [32];
  
  FUN_140d35430(local_20,param_1,param_2);
  lVar1 = FUN_140d5e490(local_20);
  if ((lVar1 == 0) || (lVar2 = FUN_140d354c0(local_20), lVar2 != 0)) {
    FUN_140c6c4e0(4,0,100,s_D__a_1_s_target_release_build_bo_1413be1a0,0xd0);
    FUN_140cb5af0(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=140d5e730 name=FUN_140d5e730 */

undefined8 FUN_140d5e730(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_140d37e40(param_1,local_38,0x20000010);
  if ((((((iVar1 != 0) && (iVar1 = FUN_140d38300(local_38,DAT_141076930), iVar1 != 0)) &&
        (iVar1 = FUN_140d5eb90(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
       ((iVar1 = FUN_140d5eb90(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0 &&
        (iVar1 = FUN_140d5eb90(local_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0)))) &&
      ((iVar1 = FUN_140d5eb90(local_38,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0 &&
       ((iVar1 = FUN_140d5eb90(local_38,*(undefined8 *)(param_2 + 0x28)), iVar1 != 0 &&
        (iVar1 = FUN_140d5eb90(local_38,*(undefined8 *)(param_2 + 0x30)), iVar1 != 0)))))) &&
     ((iVar1 = FUN_140d5eb90(local_38,*(undefined8 *)(param_2 + 0x38)), iVar1 != 0 &&
      ((iVar1 = FUN_140d5eb90(local_38,*(undefined8 *)(param_2 + 0x40)), iVar1 != 0 &&
       (iVar1 = FUN_140d37900(param_1), iVar1 != 0)))))) {
    return 1;
  }
  FUN_140c6c4e0(4,0,0x79,s_D__a_1_s_target_release_build_bo_1413be210,0xe4);
  return 0;
}


/* address=140d5e880 name=FUN_140d5e880 */

undefined8 FUN_140d5e880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  FUN_140d376c0(local_38);
  iVar1 = FUN_140d376f0(local_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_140d5e730(local_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_140d37820(local_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_140c6c4e0(4,0,0x79,s_D__a_1_s_target_release_build_bo_1413be280,0xf1);
  FUN_140d377b0(local_38);
  return 0;
}


/* address=140d5e920 name=FUN_140d5e920 */

longlong FUN_140d5e920(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d35430(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_140d5e1c0(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140cb5af0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_140d354a0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140d5e9c0 name=FUN_140d5e9c0 */

undefined8 FUN_140d5e9c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_140d376f0(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_140d5e350(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_140d8ad30(local_38,param_2);
    return uVar2;
  }
  FUN_140d377b0(local_38);
  return 0xffffffff;
}


/* address=140d5ea20 name=FUN_140d5ea20 */

longlong FUN_140d5ea20(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d35430(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_140d5e490(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140cb5af0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_140d354a0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140d5eac0 name=FUN_140d5eac0 */

undefined8 FUN_140d5eac0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_140d376f0(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_140d5e730(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_140d8ad30(local_38,param_2);
    return uVar2;
  }
  FUN_140d377b0(local_38);
  return 0xffffffff;
}


/* address=140d5eb20 name=FUN_140d5eb20 */

undefined8 FUN_140d5eb20(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    FID_conflict__assert((wchar_t *)s___1413bdd20,(wchar_t *)s_D_1413bdc50,0x49);
  }
  lVar1 = FUN_140c8a680();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140dd7b20(param_1,*param_2);
  }
  return uVar2;
}


/* address=140d5eb90 name=FUN_140d5eb90 */

undefined8 FUN_140d5eb90(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_140c6c4e0(4,0,0x90,s_D__a_1_s_target_release_build_bo_1413bdd40,0x54);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140dd7c00(param_1,param_2);
  }
  return uVar1;
}


/* address=140d5ebe0 name=FUN_140d5ebe0 */

void FUN_140d5ebe0(undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  code *local_res18;
  undefined auStack_498 [32];
  undefined8 local_478;
  code *local_470;
  undefined8 local_468;
  undefined4 local_458;
  int local_454;
  longlong local_450;
  char *local_448;
  undefined8 local_440;
  longlong local_438;
  longlong local_430;
  longlong local_428;
  undefined8 local_420;
  undefined local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_498;
  local_448 = (char *)0x0;
  local_440 = 0;
  local_420 = 0;
  local_450 = 0;
  local_478 = param_1;
  local_470 = param_3;
  local_468 = param_4;
  iVar1 = FUN_140d7bf00(&local_420,&local_458,&local_448,s_ANY_PRIVATE_KEY_1413be2f0);
  if (iVar1 == 0) goto LAB_140d5ef5c;
  local_440 = local_420;
  iVar1 = strcmp(local_448,s_PRIVATE_KEY_1413be300);
  if (iVar1 == 0) {
    local_430 = FUN_140d5f2e0(0,&local_440,local_458);
    if (local_430 != 0) {
      local_450 = FUN_140d5f350(local_430);
      if (param_2 != (longlong *)0x0) {
        if (*param_2 != 0) {
          FUN_140d31750(*param_2);
        }
        *param_2 = local_450;
      }
      FUN_140d5f2b0(local_430);
    }
LAB_140d5ef19:
    if (local_450 == 0) {
      local_478 = CONCAT44(local_478._4_4_,0x90);
      FUN_140c6c4e0(9,0,0xc,s_D__a_1_s_target_release_build_bo_1413be3d0);
    }
  }
  else {
    iVar1 = strcmp(local_448,s_ENCRYPTED_PRIVATE_KEY_1413be310);
    if (iVar1 != 0) {
      iVar1 = strcmp(local_448,s_RSA_PRIVATE_KEY_1413be398);
      if (iVar1 == 0) {
        local_450 = FUN_140d5a9d0(6,param_2,&local_440,local_458);
      }
      else {
        iVar1 = strcmp(local_448,s_EC_PRIVATE_KEY_1413be3a8);
        if (iVar1 == 0) {
          local_450 = FUN_140d5a9d0(0x198,param_2,&local_440,local_458);
        }
        else {
          iVar1 = strcmp(local_448,s_DSA_PRIVATE_KEY_1413be3b8);
          if (iVar1 == 0) {
            local_450 = FUN_140d5a9d0(0x74,param_2,&local_440,local_458);
          }
        }
      }
      goto LAB_140d5ef19;
    }
    local_438 = FUN_140dd7de0(0,&local_440,local_458);
    if (local_438 == 0) goto LAB_140d5ef19;
    local_454 = 0;
    local_res18 = param_3;
    if (param_3 == (code *)0x0) {
      local_res18 = FUN_140d7c8e0;
    }
    local_454 = (*local_res18)(local_418,0x400,0,param_4);
    if (0 < local_454) {
      local_428 = FUN_140d5f710(local_438,local_418,local_454);
      FUN_140dd7db0(local_438);
      FUN_140c663a0(local_418,(longlong)local_454);
      if (local_428 != 0) {
        local_450 = FUN_140d5f350(local_428);
        if (param_2 != (longlong *)0x0) {
          if (*param_2 != 0) {
            FUN_140d31750(*param_2);
          }
          *param_2 = local_450;
        }
        FUN_140d5f2b0(local_428);
      }
      goto LAB_140d5ef19;
    }
    local_478 = CONCAT44(local_478._4_4_,0x72);
    FUN_140c6c4e0(9,0,0x68,s_D__a_1_s_target_release_build_bo_1413be330);
    FUN_140dd7db0(local_438);
  }
  FUN_140c66200(local_448);
  FUN_140c66200(local_420);
LAB_140d5ef5c:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_498);
  return;
}


/* address=140d5ef80 name=FUN_140d5ef80 */

undefined8
FUN_140d5ef80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d7d170(param_1,0);
  if (lVar1 == 0) {
    FUN_140c6c4e0(9,0,7,s_D__a_1_s_target_release_build_bo_1413be440,0xa3);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d5ebe0(lVar1,param_2,param_3,param_4);
    FUN_140d332d0(lVar1);
  }
  return uVar2;
}


/* address=140d5f010 name=FUN_140d5f010 */

void FUN_140d5f010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_140d62ae0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* address=140d5f150 name=FUN_140d5f150 */

void FUN_140d5f150(void)

{
  FUN_140c74de0();
  return;
}


/* address=140d5f170 name=FUN_140d5f170 */

void FUN_140d5f170(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d5f190 name=FUN_140d5f190 */

void FUN_140d5f190(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d5f1c0 name=FUN_140d5f1c0 */

void FUN_140d5f1c0(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140d5f1e0 name=FUN_140d5f1e0 */

void FUN_140d5f1e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140d5f120,param_2);
  return;
}


/* address=140d5f210 name=FUN_140d5f210 */

void FUN_140d5f210(undefined8 param_1,undefined8 param_2)

{
  FUN_140c751c0(param_1,param_2);
  return;
}


/* address=140d5f240 name=FUN_140d5f240 */

void FUN_140d5f240(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140d5f270 name=FUN_140d5f270 */

void FUN_140d5f270(undefined8 param_1)

{
  FUN_140c75730(param_1);
  return;
}


/* address=140d5f2b0 name=FUN_140d5f2b0 */

void FUN_140d5f2b0(undefined8 param_1)

{
  FUN_140d82cb0(param_1,&DAT_1410769c8);
  return;
}


/* address=140d5f2e0 name=FUN_140d5f2e0 */

void FUN_140d5f2e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140d83350(param_1,param_2,param_3,&DAT_1410769c8);
  return;
}


/* address=140d5f320 name=FUN_140d5f320 */

void FUN_140d5f320(undefined8 param_1,undefined8 param_2)

{
  FUN_140d85630(param_1,param_2,&DAT_1410769c8);
  return;
}


/* address=140d5f350 name=FUN_140d5f350 */

longlong FUN_140d5f350(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_30;
  longlong local_28;
  undefined local_20 [32];
  
  local_30 = 0;
  iVar1 = FUN_140d5f320(param_1,&local_30);
  if (-1 < iVar1) {
    FUN_140d35430(local_20,local_30,(longlong)iVar1);
    local_28 = FUN_140d5a730(local_20);
    if ((local_28 != 0) && (lVar2 = FUN_140d354c0(local_20), lVar2 == 0)) {
      FUN_140c66200(local_30);
      return local_28;
    }
    FUN_140c6c4e0(0x13,0,0x68,s_D__a_1_s_target_release_build_bo_1413be560,0x71);
    FUN_140d31750(local_28);
    FUN_140c66200(local_30);
  }
  return 0;
}


/* address=140d5f420 name=FUN_140d5f420 */

longlong FUN_140d5f420(undefined8 param_1)

{
  int iVar1;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined local_38 [56];
  
  local_58 = 0;
  iVar1 = FUN_140d376f0(local_38,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_140d5a8b0(local_38,param_1), iVar1 == 0)) ||
      (iVar1 = FUN_140d37820(local_38,&local_58,&local_50), iVar1 == 0)) ||
     (0x7fffffff < CONCAT44(uStack_4c,local_50))) {
    FUN_140d377b0(local_38);
    FUN_140c6c4e0(0x13,0,0x69,s_D__a_1_s_target_release_build_bo_1413be5d0,0x84);
  }
  else {
    local_40 = local_58;
    local_48 = FUN_140d5f2e0(0,&local_40,local_50);
    if ((local_48 != 0) && (local_40 == local_58 + CONCAT44(uStack_4c,local_50))) {
      FUN_140c66200(local_58);
      return local_48;
    }
    FUN_140d5f2b0(local_48);
    FUN_140c6c4e0(0x13,0,0x68,s_D__a_1_s_target_release_build_bo_1413be640,0x8c);
  }
  FUN_140c66200(local_58);
  return 0;
}


/* address=140d5f550 name=FUN_140d5f550 */

longlong FUN_140d5f550(undefined4 param_1,undefined8 param_2,char *param_3,int param_4,
                      undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  size_t local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined local_38 [56];
  
  if ((param_4 == -1) && (param_3 != (char *)0x0)) {
    local_50 = strlen(param_3);
  }
  else {
    local_50 = (size_t)param_4;
  }
  local_58 = FUN_140d5f350(param_8);
  if (local_58 == 0) {
    return 0;
  }
  local_68 = 0;
  local_60 = 0;
  iVar1 = FUN_140d376f0(local_38,0x80);
  if (iVar1 != 0) {
    sVar2 = local_50;
    iVar1 = FUN_140dd8020(local_38,param_1,param_2,param_3,local_50,param_5,param_6,param_7,local_58
                         );
    uVar3 = (undefined4)(sVar2 >> 0x20);
    if ((iVar1 != 0) && (iVar1 = FUN_140d37820(local_38,&local_60,&local_48), iVar1 != 0)) {
      local_40 = local_60;
      local_68 = FUN_140dd7de0(0,&local_40,local_48);
      if ((local_68 == 0) || (local_40 != local_60 + CONCAT44(uStack_44,local_48))) {
        FUN_140c6c4e0(0x13,0,0x44,s_D__a_1_s_target_release_build_bo_1413be6b0,CONCAT44(uVar3,0xdb))
        ;
        FUN_140dd7db0(local_68);
        local_68 = 0;
      }
      goto LAB_140d5f6e8;
    }
  }
  FUN_140d377b0(local_38);
LAB_140d5f6e8:
  FUN_140c66200(local_60);
  FUN_140d31750(local_58);
  return local_68;
}


/* address=140d5f710 name=FUN_140d5f710 */

undefined8 FUN_140d5f710(undefined8 param_1,char *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong local_40;
  undefined8 local_38;
  size_t local_30;
  undefined8 local_28;
  undefined local_20 [32];
  
  if ((param_3 == -1) && (param_2 != (char *)0x0)) {
    local_30 = strlen(param_2);
  }
  else {
    local_30 = (size_t)param_3;
  }
  local_28 = 0;
  local_40 = 0;
  local_38 = 0;
  iVar1 = FUN_140dd7e20(param_1,&local_38);
  if (-1 < iVar1) {
    FUN_140d35430(local_20,local_38,(longlong)iVar1);
    local_40 = FUN_140dd83b0(local_20,param_2,local_30);
    if ((local_40 != 0) && (lVar2 = FUN_140d354c0(local_20), lVar2 == 0)) {
      local_28 = FUN_140d5f420(local_40);
    }
  }
  FUN_140c66200(local_38);
  FUN_140d31750(local_40);
  return local_28;
}


/* address=140d5f810 name=FUN_140d5f810 */

int FUN_140d5f810(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int local_118;
  int local_114;
  undefined8 local_110;
  longlong local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  char *local_f0;
  size_t local_e8;
  size_t local_e0;
  char *local_d8;
  undefined8 local_d0;
  wchar_t *local_c8 [2];
  wchar_t *local_b8 [2];
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  wchar_t *local_90 [2];
  wchar_t local_80 [8];
  wchar_t *local_70 [2];
  wchar_t *local_60 [2];
  wchar_t *local_50 [2];
  wchar_t *local_40 [2];
  wchar_t *local_30 [2];
  wchar_t *local_20 [4];
  
  local_d0 = 0;
  local_114 = 0;
  local_a0 = FUN_140d5f170(param_2);
  iVar1 = FUN_140dd94d0(param_3,local_80,&local_d0);
  if (iVar1 == 0) {
    FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413bef00,0x255);
    return 0;
  }
  *param_1 = 0;
  FUN_140d61050(&local_100,0,0x20);
  uVar2 = wcstoul(local_80,local_c8,0x20000010);
  if (((uVar2 == 0) || (lVar3 = FUN_140d354c0(local_80), lVar3 != 0)) ||
     (iVar1 = FUN_140d35eb0(local_c8,&local_a8), iVar1 == 0)) {
    FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413bef70,0x261);
  }
  else if (local_a8 < 3) {
    FUN_140c6c4e0(0x13,0,0x65,s_D__a_1_s_target_release_build_bo_1413befe0,0x266);
  }
  else {
    uVar2 = wcstoul((wchar_t *)local_c8,local_70,0x20000010);
    if (uVar2 == 0) {
      FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413bf050,0x26b);
    }
    else {
      lVar3 = FUN_140d354c0(local_c8);
      if (lVar3 == 0) {
        FUN_140c6c4e0(0x13,0,0x70,s_D__a_1_s_target_release_build_bo_1413bf0c0,0x270);
      }
      else {
        uVar2 = wcstoul((wchar_t *)local_c8,local_b8,0x20000010);
        if (uVar2 == 0) {
          FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413bf130,0x275);
        }
        else {
          uVar2 = wcstoul((wchar_t *)local_70,local_30,6);
          if ((uVar2 == 0) ||
             (uVar2 = wcstoul((wchar_t *)local_70,local_20,-0x60000000), uVar2 == 0)) {
            FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413bf1a0,0x27e);
          }
          else {
            iVar1 = FUN_140d35650(local_30,&DAT_1410769a0,9);
            if (iVar1 == 0) {
              FUN_140c6c4e0(0x13,0,0x72,s_D__a_1_s_target_release_build_bo_1413bf210,0x285);
            }
            else {
              uVar2 = wcstoul((wchar_t *)local_20,local_90,4);
              if (uVar2 == 0) {
                FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413bf280,0x28a);
              }
              else {
                local_100 = param_1;
                local_f8 = param_2;
                local_f0 = param_4;
                if (param_4 == (char *)0x0) {
                  local_e0 = 0;
                }
                else {
                  local_e0 = strlen(param_4);
                }
                local_e8 = local_e0;
                uVar2 = wcstoul((wchar_t *)local_b8,local_60,0x20000010);
                if (uVar2 == 0) {
                  FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413bf2f0,0x297);
                }
                else {
                  local_108 = FUN_140d5a020(local_60);
                  if (local_108 != 0) {
                    uVar2 = wcstoul((wchar_t *)local_60,local_50,4);
                    if ((uVar2 == 0) ||
                       (uVar2 = wcstoul((wchar_t *)local_b8,local_40,4), uVar2 == 0)) {
                      FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413bf360,0x2a2);
                    }
                    else {
                      local_110 = 1;
                      lVar3 = FUN_140d354c0(local_b8);
                      if ((lVar3 == 0) ||
                         ((iVar1 = FUN_140d35eb0(local_b8,&local_110), iVar1 != 0 &&
                          (iVar1 = FUN_140d60f80(local_110), iVar1 != 0)))) {
                        iVar1 = FUN_140d61c50(&local_118,local_f0,local_e8,local_40,
                                              (undefined4)local_110,local_108,local_90,local_50);
                        if (iVar1 != 0) {
                          if ((local_118 == 0) && (local_e8 == 0)) {
                            if (local_f0 == (char *)0x0) {
                              local_d8 = &DAT_1413eb108;
                            }
                            else {
                              local_d8 = (char *)0x0;
                            }
                            local_f0 = local_d8;
                            iVar1 = FUN_140d61c50(&local_118,local_d8,0,local_40,
                                                  (undefined4)local_110,local_108,local_90,local_50)
                            ;
                            if (iVar1 == 0) goto LAB_140d5fdd9;
                          }
                          if (local_118 == 0) {
                            FUN_140c6c4e0(0x13,0,0x6c,s_D__a_1_s_target_release_build_bo_1413bf440,
                                          0x2c2);
                          }
                          else {
                            iVar1 = FUN_140d61090(local_90,&local_100,&LAB_140d61910);
                            if (iVar1 != 0) {
                              local_114 = 1;
                            }
                          }
                        }
                      }
                      else {
                        FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413bf3d0,0x2ab)
                        ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_140d5fdd9:
  FUN_140c66200(local_d0);
  if (local_114 == 0) {
    FUN_140d31750(*param_1);
    *param_1 = 0;
    while (uVar4 = FUN_140d5f170(param_2), local_a0 < uVar4) {
      local_98 = FUN_140d5f270(param_2);
      FUN_140c67c40(local_98);
    }
  }
  return local_114;
}


/* address=140d5fe70 name=FUN_140d5fe70 */

longlong * FUN_140d5fe70(longlong **param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_140c660d0(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_140c660d0(param_3);
    *plVar1 = lVar2;
    if (*plVar1 == 0) {
      FUN_140c66200(plVar1);
      plVar1 = (longlong *)0x0;
    }
    else {
      FUN_140d61000(*plVar1,*param_2,param_3);
      plVar1[1] = param_3;
      *param_2 = *param_2 + param_3;
      if (param_1 != (longlong **)0x0) {
        FUN_140d60f40(*param_1);
        *param_1 = plVar1;
      }
    }
  }
  return plVar1;
}


/* address=140d5ff40 name=FUN_140d5ff40 */

undefined8 FUN_140d5ff40(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  int local_38;
  undefined4 local_34;
  ulonglong local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10 [2];
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (ulonglong *)FUN_140d805d0();
  if (puVar1 == (ulonglong *)0x0) {
    local_18 = 0;
  }
  else {
    lVar2 = FUN_140d80780(puVar1,0x2000);
    if (lVar2 != 0) {
      while( true ) {
        if (*puVar1 - local_28 < 0x80000000) {
          local_20 = (undefined4)(*puVar1 - local_28);
          local_34 = local_20;
        }
        else {
          local_34 = 0x7fffffff;
        }
        local_38 = FUN_140d333b0(param_1,puVar1[1] + local_28,local_34);
        if (local_38 < 0) {
          if (local_28 == 0) goto LAB_140d60092;
          local_38 = 0;
        }
        if (local_38 == 0) break;
        local_28 = local_28 + (longlong)local_38;
        if ((*puVar1 <= local_28) &&
           ((DAT_1410769c0 < *puVar1 || (lVar2 = FUN_140d80780(puVar1,*puVar1 << 1), lVar2 == 0))))
        goto LAB_140d60092;
      }
      local_10[0] = puVar1[1];
      local_18 = FUN_140d5fe70(param_2,local_10,local_28);
    }
LAB_140d60092:
    FUN_140d80620(puVar1);
  }
  return local_18;
}


/* address=140d60210 name=_Reset<> */

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Ptr_base<struct Concurrency::details::_Task_impl<unsigned char>
   >::_Reset<struct Concurrency::details::_Task_impl<unsigned char> >(class std::_Ptr_base<struct
   Concurrency::details::_Task_impl<unsigned char> > const & __ptr64) __ptr64
    public: void __cdecl std::_Ptr_base<struct
   Concurrency::details::_ExceptionHolder>::_Reset<struct
   Concurrency::details::_ExceptionHolder>(class std::_Ptr_base<struct
   Concurrency::details::_ExceptionHolder> const & __ptr64) __ptr64
    public: void __cdecl std::_Ptr_base<struct Concurrency::details::_Task_impl_base>::_Reset<struct
   Concurrency::details::_Task_impl_base>(class std::_Ptr_base<struct
   Concurrency::details::_Task_impl_base> const & __ptr64) __ptr64
    public: void __cdecl std::_Ptr_base<class __ExceptionPtr>::_Reset<class __ExceptionPtr>(class
   std::_Ptr_base<class __ExceptionPtr> const & __ptr64) __ptr64
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release, Visual Studio 2015 Debug, Visual
   Studio 2015 Release */

void _Reset<>(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d33680(param_1,*param_2,param_2[1]);
  return;
}


/* address=140d602b0 name=FUN_140d602b0 */

undefined8
FUN_140d602b0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
             longlong *param_5)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong local_40;
  ulonglong local_38;
  undefined local_20 [32];
  
  local_40 = 0;
  bVar1 = false;
  if ((param_5 != (longlong *)0x0) && (*param_5 != 0)) {
    local_40 = *param_5;
  }
  if (local_40 == 0) {
    local_40 = FUN_140d5f150();
    if (local_40 == 0) {
      return 0;
    }
    bVar1 = true;
  }
  FUN_140d35430(local_20,*param_1,param_1[1]);
  iVar2 = FUN_140d5f810(param_3,local_40,local_20,param_2);
  if (iVar2 == 0) {
    if (bVar1) {
      FUN_140d5f1c0(local_40);
    }
    uVar4 = 0;
  }
  else {
    *param_4 = 0;
    uVar3 = FUN_140d5f170(local_40);
    if ((*param_3 != 0) && (local_38 = uVar3, uVar3 != 0)) {
      while (local_38 = local_38 - 1, local_38 < uVar3) {
        uVar4 = FUN_140d5f190(local_40,local_38);
        iVar2 = FUN_140d791f0(uVar4,*param_3);
        if (iVar2 != 0) {
          *param_4 = uVar4;
          FUN_140d5f210(local_40,local_38);
          break;
        }
        FUN_140c6c180();
      }
    }
    if (param_5 == (longlong *)0x0) {
      FUN_140d5f1e0(local_40,FUN_140c67c40);
    }
    else {
      *param_5 = local_40;
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140d60f40 name=FUN_140d60f40 */

void FUN_140d60f40(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_140c66200(*param_1);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140d60f80 name=FUN_140d60f80 */

undefined4 FUN_140d60f80(ulonglong param_1)

{
  undefined4 local_18;
  
  if ((param_1 == 0) || (DAT_1410769f8 < param_1)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d60fc0 name=FUN_140d60fc0 */

undefined8 FUN_140d60fc0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e28500(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=140d61000 name=FUN_140d61000 */

undefined8 FUN_140d61000(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d61050 name=FUN_140d61050 */

undefined8 FUN_140d61050(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d61090 name=FUN_140d61090 */

undefined4 FUN_140d61090(undefined8 param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  undefined4 local_48;
  undefined8 local_40;
  wchar_t local_38 [8];
  wchar_t *local_28 [2];
  wchar_t *local_18 [3];
  
  local_40 = 0;
  local_48 = 0;
  iVar1 = FUN_140dd94d0(param_1,local_38,&local_40);
  if (iVar1 == 0) {
    FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413be720,0xfb);
    local_48 = 0;
  }
  else {
    uVar2 = wcstoul(local_38,local_28,0x20000010);
    if ((uVar2 == 0) || (lVar3 = FUN_140d354c0(local_38), lVar3 != 0)) {
      FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413be790,0x102);
    }
    else {
      do {
        lVar3 = FUN_140d354c0(local_28);
        if (lVar3 == 0) {
          local_48 = 1;
          break;
        }
        uVar2 = wcstoul((wchar_t *)local_28,local_18,0x20000010);
        if (uVar2 == 0) {
          FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413be800,0x109);
          break;
        }
        iVar1 = (*param_3)(local_18,param_2);
      } while (iVar1 != 0);
    }
    FUN_140c66200(local_40);
  }
  return local_48;
}


/* address=140d611d0 name=FUN_140d611d0 */

undefined8 FUN_140d611d0(wchar_t *param_1,longlong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_88 [2];
  wchar_t *local_80 [2];
  wchar_t *local_70 [2];
  wchar_t *local_60 [2];
  wchar_t *local_50 [2];
  undefined local_40 [64];
  
  *param_2 = 0;
  *param_3 = 0;
  while( true ) {
    do {
      lVar3 = FUN_140d354c0(param_1);
      if (lVar3 == 0) {
        return 1;
      }
      uVar1 = wcstoul(param_1,local_70,0x20000010);
      if ((((uVar1 == 0) || (uVar1 = wcstoul((wchar_t *)local_70,local_50,6), uVar1 == 0)) ||
          (uVar1 = wcstoul((wchar_t *)local_70,local_60,0x20000011), uVar1 == 0)) ||
         (lVar3 = FUN_140d354c0(local_70), lVar3 != 0)) {
        FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413be870,0x141);
        goto LAB_140d613e4;
      }
      iVar2 = FUN_140d35650(local_50,&DAT_141076970,9);
    } while (iVar2 == 0);
    if (((*param_2 != 0) || (uVar1 = wcstoul((wchar_t *)local_60,local_80,0x1e), uVar1 == 0)) ||
       ((lVar3 = FUN_140d354c0(local_60), lVar3 != 0 ||
        (lVar3 = FUN_140d354c0(local_80), lVar3 == 0)))) break;
    uVar4 = FUN_140d354c0(local_80);
    iVar2 = FUN_140d376f0(local_40,uVar4);
    if (iVar2 == 0) goto LAB_140d613e4;
    while (lVar3 = FUN_140d354c0(local_80), lVar3 != 0) {
      iVar2 = FUN_140dd9ed0(local_80,local_88);
      if ((iVar2 == 0) || (iVar2 = FUN_140dd9fd0(local_40,local_88[0]), iVar2 == 0)) {
        FUN_140c6c4e0(0x13,0,0x83,s_D__a_1_s_target_release_build_bo_1413be950,0x157);
        FUN_140d377b0(local_40);
        goto LAB_140d613e4;
      }
    }
    iVar2 = FUN_140d37820(local_40,param_2,param_3);
    if (iVar2 == 0) {
      FUN_140d377b0(local_40);
LAB_140d613e4:
      FUN_140c66200(*param_2);
      *param_2 = 0;
      *param_3 = 0;
      return 0;
    }
  }
  FUN_140c6c4e0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413be8e0,0x14b);
  goto LAB_140d613e4;
}


/* address=140d61c50 name=FUN_140d61c50 */

void FUN_140d61c50(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined local_98 [64];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_118;
  local_c8 = 0;
  local_c0 = (undefined4 *)FUN_140c7f990(param_6);
  local_b8 = FUN_140d354c0(param_4);
  uVar3 = FUN_140d354a0(param_4);
  local_d8 = param_6;
  local_e0 = local_98;
  local_e8 = local_c0;
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,param_5);
  local_f8 = CONCAT71(local_f8._1_7_,3);
  iVar1 = FUN_140dd87a0(param_2,param_3,uVar3,local_b8);
  if (iVar1 != 0) {
    local_b0 = FUN_140d354c0(param_7);
    local_a8 = FUN_140d354a0(param_7);
    uVar3 = FUN_140c7f990(param_6);
    local_e8 = &local_c4;
    local_f0 = local_58;
    local_f8 = local_b0;
    lVar4 = FUN_140c7fbc0(param_6,local_98,uVar3,local_a8);
    if (lVar4 != 0) {
      uVar2 = FUN_140d35650(param_8,local_58,local_c4);
      *param_1 = uVar2;
      local_c8 = 1;
    }
  }
  FUN_140c663a0(local_98,0x40);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=140d61df0 name=FUN_140d61df0 */

undefined4
FUN_140d61df0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_118;
  undefined4 local_114;
  undefined local_110 [16];
  undefined local_100 [48];
  undefined local_d0 [48];
  undefined local_a0 [48];
  undefined local_70 [48];
  undefined local_40 [64];
  
  if ((param_2 == 0) && (param_5 == 0)) {
    local_118 = 1;
  }
  else {
    iVar1 = FUN_140d37e40(param_1,local_40,0x20000011);
    if (iVar1 == 0) {
      local_118 = 0;
    }
    else if (param_3 == 0) {
LAB_140d61f6e:
      if ((param_5 == 0) ||
         ((((iVar1 = FUN_140d37e40(local_40,local_100,0x20000010), iVar1 != 0 &&
            (iVar1 = FUN_140d37e40(local_100,local_d0,6), iVar1 != 0)) &&
           (iVar1 = FUN_140d37f00(local_d0,&DAT_141076980,9), iVar1 != 0)) &&
          (((iVar1 = FUN_140d37e40(local_100,local_a0,0x20000011), iVar1 != 0 &&
            (iVar1 = FUN_140d37e40(local_a0,local_70,4), iVar1 != 0)) &&
           (iVar1 = FUN_140d37f00(local_70,param_4,param_5), iVar1 != 0)))))) {
        iVar1 = FUN_140d38790(local_40);
        if ((iVar1 == 0) || (iVar1 = FUN_140d37900(param_1), iVar1 == 0)) {
          local_118 = 0;
        }
        else {
          local_118 = 1;
        }
      }
      else {
        local_118 = 0;
      }
    }
    else {
      iVar1 = FUN_140d37e40(local_40,local_100,0x20000010);
      if ((((iVar1 == 0) || (iVar1 = FUN_140d37e40(local_100,local_d0,6), iVar1 == 0)) ||
          (iVar1 = FUN_140d37f00(local_d0,&DAT_141076970,9), iVar1 == 0)) ||
         ((iVar1 = FUN_140d37e40(local_100,local_a0,0x20000011), iVar1 == 0 ||
          (iVar1 = FUN_140d37e40(local_a0,local_70,0x1e), iVar1 == 0)))) {
        local_118 = 0;
      }
      else {
        FUN_140d35430(local_110,param_2,param_3);
        do {
          lVar2 = FUN_140d354c0(local_110);
          if (lVar2 == 0) goto LAB_140d61f6e;
          iVar1 = FUN_140dd9cf0(local_110,&local_114);
        } while ((iVar1 != 0) && (iVar1 = FUN_140dda1f0(local_70,local_114), iVar1 != 0));
        FUN_140c6c4e0(0x13,0,0x83,s_D__a_1_s_target_release_build_bo_1413bf520,0x3ce);
        local_118 = 0;
      }
    }
  }
  return local_118;
}


/* address=140d62080 name=FUN_140d62080 */

undefined8
FUN_140d62080(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  char *local_res18;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar3;
  int local_178;
  int local_174;
  size_t local_170;
  char *local_168;
  undefined local_160 [8];
  undefined local_158 [48];
  undefined local_128 [48];
  undefined local_f8 [48];
  undefined local_c8 [48];
  undefined local_98 [48];
  undefined local_68 [48];
  undefined local_38 [56];
  
  uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  iVar1 = FUN_140d37e40(param_1,local_158,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_140d37e40(local_158,local_f8,6), iVar1 == 0)) ||
      (iVar1 = FUN_140d37f00(local_f8,&DAT_141076960,0xb), iVar1 == 0)) ||
     ((((iVar1 = FUN_140d37e40(local_158,local_c8,0xa0000000), iVar1 == 0 ||
        (iVar1 = FUN_140d37e40(local_c8,local_128,0x20000010), iVar1 == 0)) ||
       ((iVar1 = FUN_140d37e40(local_128,local_98,6), iVar1 == 0 ||
        ((iVar1 = FUN_140d37f00(local_98,&DAT_141076990,10), iVar1 == 0 ||
         (iVar1 = FUN_140d37e40(local_128,local_68,0xa0000000), iVar1 == 0)))))) ||
      (iVar1 = FUN_140d37e40(local_68,local_38,4), iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    local_174 = FUN_140c67e80(param_2,0);
    local_178 = 0;
    local_res18 = (char *)FUN_140d8b120(param_2,&local_178);
    local_170 = (size_t)local_178;
    local_168 = local_res18;
    if (param_3 != (char *)0x0) {
      if (local_170 != 0) {
        FUN_140c6c4e0(0x13,0,0x85,s_D__a_1_s_target_release_build_bo_1413bf590,CONCAT44(uVar3,0x3fc)
                     );
        return 0;
      }
      local_170 = strlen(param_3);
      local_res18 = param_3;
    }
    if ((((local_174 < 0) ||
         (iVar1 = FUN_140d37fb0(local_38,local_160,(longlong)local_174), iVar1 == 0)) ||
        (iVar1 = FUN_140c67e80(param_2,local_160), iVar1 < 0)) ||
       ((iVar1 = FUN_140d61df0(local_158,local_res18,local_170,param_4,param_5), iVar1 == 0 ||
        (iVar1 = FUN_140d37900(param_1), iVar1 == 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d622f0 name=FUN_140d622f0 */

undefined8
FUN_140d622f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_48;
  undefined local_40 [64];
  
  iVar1 = FUN_140d37e40(param_1,local_40,0x20000010);
  if ((iVar1 == 0) ||
     ((param_2 != 0 && (iVar1 = FUN_140d62080(local_40,param_2,param_4,param_5,param_6), iVar1 == 0)
      ))) {
    uVar3 = 0;
  }
  else {
    for (local_48 = 0; uVar2 = FUN_140d5f170(param_3), local_48 < uVar2; local_48 = local_48 + 1) {
      uVar3 = FUN_140d5f190(param_3,local_48);
      iVar1 = FUN_140d62080(local_40,uVar3,0,0,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = FUN_140d37900(param_1);
  }
  return uVar3;
}


/* address=140d623f0 name=FUN_140d623f0 */

void FUN_140d623f0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,ulonglong param_7)

{
  int iVar1;
  uint uVar2;
  undefined auStack_268 [32];
  undefined8 local_248;
  undefined8 local_240;
  undefined *local_238;
  undefined8 local_230;
  int local_228;
  undefined4 local_224;
  int local_220 [2];
  ulonglong local_218;
  longlong local_210;
  undefined local_208 [48];
  undefined local_1d8 [48];
  undefined local_1a8 [48];
  undefined local_178 [48];
  undefined local_148 [48];
  undefined local_118 [48];
  undefined local_e8 [48];
  undefined local_b8 [160];
  undefined local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_268;
  iVar1 = FUN_140ca8a50(local_18,8);
  if (iVar1 != 0) {
    local_224 = 0;
    FUN_140caaa90(local_b8);
    iVar1 = FUN_140d37e40(param_1,local_1d8,0x20000010);
    if (((((iVar1 != 0) && (iVar1 = FUN_140d37e40(local_1d8,local_148,6), iVar1 != 0)) &&
         (iVar1 = FUN_140d37f00(local_148,&DAT_1410769b0,9), iVar1 != 0)) &&
        (((iVar1 = FUN_140d37e40(local_1d8,local_118,0xa0000000), iVar1 != 0 &&
          (iVar1 = FUN_140d37e40(local_118,local_1a8,0x20000010), iVar1 != 0)) &&
         ((iVar1 = FUN_140d38300(local_1a8,0), iVar1 != 0 &&
          ((iVar1 = FUN_140d37e40(local_1a8,local_208,0x20000010), iVar1 != 0 &&
           (iVar1 = FUN_140d37e40(local_208,local_e8,6), iVar1 != 0)))))))) &&
       (iVar1 = FUN_140d37f00(local_e8,&DAT_1410769a0,9), iVar1 != 0)) {
      local_230 = 8;
      local_238 = local_18;
      local_248 = param_3;
      local_240 = param_4;
      iVar1 = FUN_140dd8df0(local_208,local_b8,param_2,param_5);
      if ((iVar1 != 0) && (iVar1 = FUN_140d37e40(local_208,local_178,0x80000000), iVar1 != 0)) {
        uVar2 = FUN_140cabf30(local_b8);
        local_218 = param_7 + uVar2;
        if (local_218 < param_7) {
          local_248 = CONCAT44(local_248._4_4_,0x44a);
          FUN_140c6c4e0(0x13,0,0x76,s_D__a_1_s_target_release_build_bo_1413bf600);
        }
        else {
          iVar1 = FUN_140d38010(local_178,&local_210,local_218);
          if (iVar1 != 0) {
            local_248 = CONCAT44(local_248._4_4_,(undefined4)param_7);
            iVar1 = FUN_140cabdf0(local_b8,local_210,&local_228,param_6);
            if ((((iVar1 != 0) &&
                 (iVar1 = FUN_140cabe70(local_b8,local_210 + local_228,local_220), iVar1 != 0)) &&
                (iVar1 = FUN_140d38070(local_178,(longlong)(local_228 + local_220[0])), iVar1 != 0))
               && (iVar1 = FUN_140d37900(param_1), iVar1 != 0)) {
              local_224 = 1;
            }
          }
        }
      }
    }
    FUN_140caab00(local_b8);
  }
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_268);
  return;
}


/* address=140d627e0 name=FUN_140d627e0 */

void FUN_140d627e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d7c0e0(&LAB_140d63450,s_ENCRYPTED_PRIVATE_KEY_1413bf938,param_1,param_2,0,0,0,0,0);
  return;
}


/* address=140d62980 name=FUN_140d62980 */

void FUN_140d62980(undefined8 param_1,undefined8 param_2)

{
  FUN_140d7c0e0(&LAB_140d63530,s_PRIVATE_KEY_1413bf988,param_1,param_2,0,0,0,0,0);
  return;
}


/* address=140d62ae0 name=FUN_140d62ae0 */

void FUN_140d62ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_140d63090(param_1,param_2,0,0xffffffff,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* address=140d62c60 name=FUN_140d62c60 */

void FUN_140d62c60(undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

{
  code *local_res18;
  undefined auStack_468 [32];
  undefined4 local_448;
  int local_438;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  undefined local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_468;
  local_428 = 0;
  local_430 = 0;
  local_430 = FUN_140d7e3c0(param_1,0);
  if (local_430 != 0) {
    local_438 = 0;
    local_res18 = param_3;
    if (param_3 == (code *)0x0) {
      local_res18 = FUN_140d7c8e0;
    }
    local_438 = (*local_res18)(local_418,0x400,0,param_4);
    if (local_438 < 1) {
      local_448 = 0xa9;
      FUN_140c6c4e0(9,0,0x68,s_D__a_1_s_target_release_build_bo_1413bf7c0);
      FUN_140dd7db0(local_430);
    }
    else {
      local_428 = FUN_140d5f710(local_430,local_418,local_438);
      FUN_140dd7db0(local_430);
      FUN_140c663a0(local_418,(longlong)local_438);
      if (local_428 != 0) {
        local_420 = FUN_140d5f350(local_428);
        FUN_140d5f2b0(local_428);
        if ((local_420 != 0) && (param_2 != (longlong *)0x0)) {
          if (*param_2 != 0) {
            FUN_140d31750(*param_2);
          }
          *param_2 = local_420;
        }
      }
    }
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_468);
  return;
}


/* address=140d63090 name=FUN_140d63090 */

void FUN_140d63090(undefined8 param_1,undefined8 param_2,int param_3,int param_4,longlong param_5,
                  undefined *param_6,int param_7,code *param_8,undefined8 param_9)

{
  undefined auStack_478 [32];
  undefined8 local_458;
  undefined8 local_450;
  undefined4 local_448;
  longlong local_440;
  undefined4 local_438;
  longlong local_430;
  undefined8 local_428;
  undefined local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_478;
  local_430 = FUN_140d5f420(param_2);
  if (local_430 == 0) {
    local_458 = CONCAT44(local_458._4_4_,0x6e);
    FUN_140c6c4e0(9,0,0x6a,s_D__a_1_s_target_release_build_bo_1413bf6e0);
  }
  else if ((param_5 == 0) && (param_4 == -1)) {
    if (param_3 == 0) {
      local_438 = FUN_140d62980(param_1,local_430);
    }
    else {
      local_438 = FUN_140d7ea40(param_1,local_430);
    }
    FUN_140d5f2b0(local_430);
  }
  else {
    if (param_6 == (undefined *)0x0) {
      if (param_8 == (code *)0x0) {
        param_8 = FUN_140d7c8e0;
      }
      param_7 = (*param_8)(local_418,0x400,1,param_9);
      if (param_7 < 1) {
        local_458 = CONCAT44(local_458._4_4_,0x79);
        FUN_140c6c4e0(9,0,0x6f,s_D__a_1_s_target_release_build_bo_1413bf750);
        FUN_140d5f2b0(local_430);
        goto LAB_140d632c7;
      }
      param_6 = local_418;
    }
    local_440 = local_430;
    local_448 = 0;
    local_450 = 0;
    local_458 = 0;
    local_428 = FUN_140d5f550(param_4,param_5,param_6,param_7);
    if (param_6 == local_418) {
      FUN_140c663a0(local_418,(longlong)param_7);
    }
    FUN_140d5f2b0(local_430);
    if (param_3 == 0) {
      local_438 = FUN_140d627e0(param_1,local_428);
    }
    else {
      local_438 = FUN_140d7e9d0(param_1,local_428);
    }
    FUN_140dd7db0(local_428);
  }
LAB_140d632c7:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_478);
  return;
}


/* address=140d632f0 name=FUN_140d632f0 */

undefined4
FUN_140d632f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffb8;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar2 = FUN_140d7d170(param_1,0);
  if (lVar2 == 0) {
    FUN_140c6c4e0(9,0,7,s_D__a_1_s_target_release_build_bo_1413bf830,CONCAT44(uVar1,0xde));
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d63090(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    FUN_140d332d0(lVar2);
  }
  return uVar1;
}


/* address=140d63590 name=FUN_140d63590 */

longlong FUN_140d63590(undefined *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  undefined *local_res8;
  byte *local_res10;
  uint local_28;
  ulonglong local_20;
  longlong local_18;
  
  local_18 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_20 = param_3;
  while (local_20 != 0) {
    if (local_20 < 3) {
      local_28 = (uint)*local_res10 << 0x10;
      if (local_20 == 2) {
        local_28 = local_28 | (uint)local_res10[1] << 8;
      }
      uVar2 = FUN_140d64480(local_28 >> 0x12);
      *local_res8 = uVar2;
      uVar2 = FUN_140d64480(local_28 >> 0xc & 0xff);
      local_res8[1] = uVar2;
      if (local_20 == 1) {
        uVar2 = 0x3d;
      }
      else {
        uVar2 = FUN_140d64480(local_28 >> 6 & 0xff);
      }
      local_res8[2] = uVar2;
      local_res8[3] = 0x3d;
      local_20 = 0;
    }
    else {
      uVar3 = (uint)*local_res10 << 0x10 | (uint)local_res10[1] << 8;
      bVar1 = local_res10[2];
      uVar2 = FUN_140d64480(((uint)*local_res10 << 0x10) >> 0x12);
      *local_res8 = uVar2;
      uVar2 = FUN_140d64480((uVar3 & 0xff000) >> 0xc);
      local_res8[1] = uVar2;
      uVar2 = FUN_140d64480((uVar3 | bVar1) >> 6 & 0xff);
      local_res8[2] = uVar2;
      uVar2 = FUN_140d64480(bVar1);
      local_res8[3] = uVar2;
      local_20 = local_20 - 3;
    }
    local_res8 = local_res8 + 4;
    local_18 = local_18 + 4;
    local_res10 = local_res10 + 3;
  }
  *local_res8 = 0;
  return local_18;
}


/* address=140d63870 name=FUN_140d63870 */

bool FUN_140d63870(longlong *param_1,ulonglong param_2)

{
  bool bVar1;
  
  bVar1 = param_2 % 4 == 0;
  if (bVar1) {
    *param_1 = (param_2 / 4) * 3;
  }
  return bVar1;
}


/* address=140d638c0 name=FUN_140d638c0 */

undefined8
FUN_140d638c0(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4,
             ulonglong param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res8;
  ulonglong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10 [2];
  
  *param_2 = 0;
  if (param_5 % 4 == 0) {
    iVar1 = FUN_140d63870(local_10,param_5);
    if ((iVar1 == 0) || (param_3 < local_10[0])) {
      uVar2 = 0;
    }
    else {
      local_18 = 0;
      local_res8 = param_1;
      for (local_28 = 0; local_28 < param_5; local_28 = local_28 + 4) {
        iVar1 = FUN_140d646c0(local_res8,&local_20,param_4 + local_28);
        if (iVar1 == 0) {
          return 0;
        }
        local_18 = local_18 + local_20;
        local_res8 = local_res8 + local_20;
        if ((local_20 != 3) && (local_28 != param_5 - 4)) {
          return 0;
        }
      }
      *param_2 = local_18;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d63a60 name=FUN_140d63a60 */

void FUN_140d63a60(undefined8 param_1)

{
  FUN_140d643a0(param_1,0,0x38);
  return;
}


/* address=140d63a90 name=FUN_140d63a90 */

void FUN_140d63a90(uint *param_1,undefined *param_2,undefined4 *param_3,longlong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined *local_res10;
  longlong local_res20;
  ulonglong local_28;
  
  local_28 = 0;
  *param_3 = 0;
  if (param_5 != 0) {
    if (0x2f < *param_1) {
      FID_conflict__assert((wchar_t *)s_c_1413bfa80,(wchar_t *)s_D_1413bf9b0,0x95);
    }
    if (param_5 < 0x30 - (ulonglong)*param_1) {
      FUN_140d64350((longlong)param_1 + (ulonglong)*param_1 + 4,param_4,param_5);
      *param_1 = *param_1 + (uint)param_5;
    }
    else {
      local_res10 = param_2;
      local_res20 = param_4;
      if (*param_1 != 0) {
        lVar1 = 0x30 - (ulonglong)*param_1;
        FUN_140d64350((longlong)param_1 + (ulonglong)*param_1 + 4,param_4,lVar1);
        local_res20 = param_4 + lVar1;
        param_5 = param_5 - lVar1;
        lVar1 = FUN_140d63590(param_2,param_1 + 1,0x30);
        *param_1 = 0;
        param_2[lVar1] = 10;
        local_res10 = param_2 + lVar1 + 1;
        *local_res10 = 0;
        local_28 = lVar1 + 1;
      }
      while (0x2f < param_5) {
        lVar1 = FUN_140d63590(local_res10,local_res20,0x30);
        local_res20 = local_res20 + 0x30;
        param_5 = param_5 - 0x30;
        local_res10[lVar1] = 10;
        local_res10 = local_res10 + lVar1 + 1;
        *local_res10 = 0;
        if (local_28 + 1 + lVar1 < local_28) {
          *param_3 = 0;
          return;
        }
        local_28 = local_28 + 1 + lVar1;
      }
      if (param_5 != 0) {
        FUN_140d64350(param_1 + 1,local_res20,param_5);
      }
      *param_1 = (uint)param_5;
      if (0x7fffffff < local_28) {
        local_28 = 0;
      }
      *param_3 = (undefined4)local_28;
    }
  }
  return;
}


/* address=140d63d30 name=FUN_140d63d30 */

void FUN_140d63d30(int *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_18;
  
  if (*param_1 == 0) {
    *param_3 = 0;
  }
  else {
    lVar1 = FUN_140d63590(param_2,param_1 + 1,*param_1);
    *(undefined *)(param_2 + lVar1) = 10;
    uVar2 = lVar1 + 1;
    *(undefined *)(param_2 + uVar2) = 0;
    *param_1 = 0;
    if (0x7fffffff < uVar2) {
      FID_conflict__assert((wchar_t *)s_e_1413bfb98,(wchar_t *)s_D_1413bfad0,0xd9);
    }
    local_18 = (undefined4)uVar2;
    *param_3 = local_18;
  }
  return;
}


/* address=140d63e00 name=FUN_140d63e00 */

void FUN_140d63e00(undefined8 param_1)

{
  FUN_140d643a0(param_1,0,0x38);
  return;
}


/* address=140d63e30 name=FUN_140d63e30 */

undefined8
FUN_140d63e30(uint *param_1,longlong param_2,undefined4 *param_3,longlong param_4,ulonglong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res10;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10 [2];
  
  *param_3 = 0;
  if (*(char *)((longlong)param_1 + 0x35) == '\0') {
    local_18 = 0;
    local_res10 = param_2;
    for (local_20 = 0; local_20 < param_5; local_20 = local_20 + 1) {
      cVar1 = *(char *)(param_4 + local_20);
      if ((((cVar1 != '\t') && (cVar1 != '\n')) && (cVar1 != '\r')) && (cVar1 != ' ')) {
        if (*(char *)(param_1 + 0xd) != '\0') {
          *(undefined *)((longlong)param_1 + 0x35) = 1;
          return 0xffffffff;
        }
        *(char *)((longlong)param_1 + (ulonglong)*param_1 + 4) = cVar1;
        *param_1 = *param_1 + 1;
        if (*param_1 == 4) {
          iVar2 = FUN_140d646c0(local_res10,local_10,param_1 + 1);
          if (iVar2 == 0) {
            *(undefined *)((longlong)param_1 + 0x35) = 1;
            return 0xffffffff;
          }
          *param_1 = 0;
          local_18 = local_18 + local_10[0];
          local_res10 = local_res10 + local_10[0];
          if (local_10[0] < 3) {
            *(undefined *)(param_1 + 0xd) = 1;
          }
        }
      }
    }
    if (local_18 < 0x80000000) {
      *param_3 = (undefined4)local_18;
      if (*(char *)(param_1 + 0xd) == '\0') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      *(undefined *)((longlong)param_1 + 0x35) = 1;
      *param_3 = 0;
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


/* address=140d64000 name=FUN_140d64000 */

undefined8 FUN_140d64000(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 0;
  if ((*(char *)((longlong)param_1 + 0x35) == '\0') && (*param_1 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* address=140d641d0 name=FUN_140d641d0 */

undefined8 FUN_140d641d0(undefined8 param_1)

{
  return param_1;
}


/* address=140d641f0 name=FUN_140d641f0 */

longlong FUN_140d641f0(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=140d64210 name=FUN_140d64210 */

void FUN_140d64210(ulonglong param_1)

{
  FUN_140d641f0(~param_1 & param_1 - 1);
  return;
}


/* address=140d64240 name=FUN_140d64240 */

void FUN_140d64240(ulonglong param_1,ulonglong param_2)

{
  FUN_140d64210(param_1 ^ param_2);
  return;
}


/* address=140d64280 name=FUN_140d64280 */

void FUN_140d64280(undefined8 param_1,undefined8 param_2)

{
  FUN_140d64240(param_1,param_2);
  return;
}


/* address=140d642b0 name=FUN_140d642b0 */

ulonglong FUN_140d642b0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_140d641d0(param_1);
  uVar2 = FUN_140d641d0(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=140d64300 name=FUN_140d64300 */

void FUN_140d64300(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_140d642b0(param_1,param_2,param_3);
  return;
}


/* address=140d64350 name=FUN_140d64350 */

undefined8 FUN_140d64350(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d643a0 name=FUN_140d643a0 */

undefined8 FUN_140d643a0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d643e0 name=FUN_140d643e0 */

void FUN_140d643e0(byte param_1,byte param_2)

{
  FUN_140d641f0((ulonglong)param_1 - (ulonglong)param_2);
  return;
}


/* address=140d64430 name=FUN_140d64430 */

void FUN_140d64430(char param_1,char param_2,char param_3)

{
  FUN_140d643e0(param_1 - param_2,(param_3 - param_2) + '\x01');
  return;
}


/* address=140d64480 name=FUN_140d64480 */

undefined FUN_140d64480(byte param_1)

{
  undefined uVar1;
  undefined uVar2;
  
  param_1 = param_1 & 0x3f;
  uVar1 = FUN_140d64280(param_1,0x3e);
  uVar1 = FUN_140d64300(uVar1,0x2b,0x2f);
  uVar2 = FUN_140d643e0(param_1,0x3e);
  uVar1 = FUN_140d64300(uVar2,param_1 - 4,uVar1);
  uVar2 = FUN_140d643e0(param_1,0x34);
  uVar1 = FUN_140d64300(uVar2,param_1 + 0x47,uVar1);
  uVar2 = FUN_140d643e0(param_1,0x1a);
  uVar1 = FUN_140d64300(uVar2,param_1 + 0x41,uVar1);
  return uVar1;
}


/* address=140d64560 name=FUN_140d64560 */

byte FUN_140d64560(char param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  bVar1 = FUN_140d64430(param_1,0x41,0x5a);
  bVar2 = FUN_140d64430(param_1,0x61,0x7a);
  bVar3 = FUN_140d64430(param_1,0x30,0x39);
  bVar4 = FUN_140d64280(param_1,0x2b);
  bVar5 = FUN_140d64280(param_1,0x2f);
  bVar6 = FUN_140d64280(param_1,0x3d);
  return bVar1 & param_1 + 0xbfU | bVar2 & param_1 + 0xb9U | bVar3 & param_1 + 4U | bVar4 & 0x3e |
         bVar5 & 0x3f | ~(bVar1 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6);
}


/* address=140d646c0 name=FUN_140d646c0 */

undefined8 FUN_140d646c0(byte *param_1,undefined8 *param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte local_24;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar1 = FUN_140d64560(*param_3);
  bVar2 = FUN_140d64560(param_3[1]);
  bVar3 = FUN_140d64560(param_3[2]);
  local_24 = FUN_140d64560(param_3[3]);
  if ((((bVar1 == 0xff) || (bVar2 == 0xff)) || (bVar3 == 0xff)) || (local_24 == 0xff)) {
    uVar4 = 0;
  }
  else {
    bVar1 = (byte)(((uint)bVar1 << 0x12) >> 0x10) | (byte)(((uint)bVar2 << 0xc) >> 0x10);
    bVar2 = (byte)(((uint)bVar2 << 0xc) >> 8) | (byte)(((uint)bVar3 << 6) >> 8);
    local_24 = (byte)((uint)bVar3 << 6) | local_24;
    local_1c = (uint)(*param_3 == '=');
    local_18 = (uint)(param_3[1] == '=');
    local_14 = (uint)(param_3[2] == '=');
    local_10 = (uint)(param_3[3] == '=');
    local_10 = local_1c << 3 | local_18 << 2 | local_14 << 1 | local_10;
    if (local_10 == 0) {
      *param_2 = 3;
      *param_1 = bVar1;
      param_1[1] = bVar2;
      param_1[2] = local_24;
    }
    else if (local_10 == 1) {
      *param_2 = 2;
      *param_1 = bVar1;
      param_1[1] = bVar2;
    }
    else {
      if (local_10 != 3) {
        return 0;
      }
      *param_2 = 1;
      *param_1 = bVar1;
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140d64950 name=FUN_140d64950 */

undefined * FUN_140d64950(void)

{
  return &DAT_141076a90;
}


/* address=140d64960 name=FUN_140d64960 */

undefined2 FUN_140d64960(undefined2 *param_1)

{
  return *param_1;
}


/* address=140d649e0 name=FUN_140d649e0 */

undefined * FUN_140d649e0(void)

{
  return &DAT_141076ae8;
}


/* address=140d649f0 name=FUN_140d649f0 */

undefined2 FUN_140d649f0(undefined2 *param_1)

{
  return *param_1;
}


/* address=140d64a30 name=FUN_140d64a30 */

undefined * FUN_140d64a30(void)

{
  return &DAT_141076af8;
}


/* address=140d64a50 name=FUN_140d64a50 */

undefined * FUN_140d64a50(void)

{
  return &DAT_141076b18;
}


/* address=140d64a60 name=FUN_140d64a60 */

undefined2 FUN_140d64a60(undefined2 *param_1)

{
  return *param_1;
}


/* address=140d64a80 name=FUN_140d64a80 */

void FUN_140d64a80(longlong param_1)

{
  (**(code **)(param_1 + 8))();
  return;
}


/* address=140d64aa0 name=FUN_140d64aa0 */

void FUN_140d64aa0(undefined8 param_1)

{
  FUN_140d65bb0(param_1,0,0x48);
  return;
}


/* address=140d64ad0 name=FUN_140d64ad0 */

void FUN_140d64ad0(void)

{
  return;
}


/* address=140d64b60 name=FUN_140d64b60 */

undefined8 FUN_140d64b60(undefined8 param_1,undefined8 param_2)

{
  FUN_140d65b60(param_1,param_2,0x48);
  return 1;
}


/* address=140d64c70 name=FUN_140d64c70 */

undefined8 FUN_140d64c70(undefined8 *param_1)

{
  return *param_1;
}


/* address=140d64c90 name=FUN_140d64c90 */

bool FUN_140d64c90(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  bool bVar1;
  
  bVar1 = *(ulonglong *)(*param_1 + 8) <= param_4;
  if (bVar1) {
    FUN_140d65b60(param_2,param_1 + 5,*(undefined8 *)(*param_1 + 8));
    *param_3 = *(undefined8 *)(*param_1 + 8);
  }
  else {
    FUN_140c6c4e0(6,0,0x89,s_D__a_1_s_target_release_build_bo_1413c0030,0x17f);
  }
  return bVar1;
}


/* address=140d64dd0 name=FUN_140d64dd0 */

void FUN_140d64dd0(longlong param_1)

{
  FUN_140d65bb0(param_1,0,0x2c8);
  FUN_140ca9c60(param_1 + 0x18);
  return;
}


/* address=140d64e10 name=FUN_140d64e10 */

void FUN_140d64e10(longlong param_1)

{
  FUN_140ca9de0(param_1 + 0x18);
  return;
}


/* address=140d64ec0 name=FUN_140d64ec0 */

void FUN_140d64ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_a8;
  FUN_140ca8a50(local_38,*(undefined8 *)(param_5 + 0x18));
  local_48 = *(undefined8 *)(param_5 + 0x18);
  local_50 = local_38;
  local_58 = param_11;
  local_60 = param_10;
  local_68 = param_9;
  local_70 = param_8;
  local_78 = param_7;
  local_80 = param_6;
  local_88 = param_5;
  FUN_140d64fc0(param_1,param_2,param_3,param_4);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d64fc0 name=FUN_140d64fc0 */

void FUN_140d64fc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  int iVar1;
  undefined auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_88;
  FUN_140d64dd0(param_1);
  *(undefined4 *)(param_1 + 0x58) = 1;
  *param_1 = param_5;
  param_1[2] = param_6;
  param_1[1] = param_7;
  local_40 = param_13;
  local_48 = param_12;
  local_50 = param_9;
  local_58 = param_8;
  local_68 = param_3;
  local_60 = param_4;
  iVar1 = (**(code **)(param_5 + 0x38))(param_5,local_30,&local_38,param_2);
  if (iVar1 != 0) {
    local_60 = param_11;
    local_68 = param_10;
    iVar1 = FUN_140d66880(param_1,0,local_30,local_38);
    if (iVar1 != 0) goto LAB_140d65108;
  }
  FUN_140d64e10(param_1);
LAB_140d65108:
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_88);
  return;
}


/* address=140d65130 name=FUN_140d65130 */

void FUN_140d65130(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_68;
  FUN_140d64dd0(param_1);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *param_1 = *param_2;
  param_1[2] = param_3;
  param_1[1] = param_4;
  local_48 = param_6;
  iVar1 = (**(code **)(*param_2 + 0x40))(param_2,local_30,&local_38,param_5);
  if (iVar1 != 0) {
    local_40 = param_8;
    local_48 = param_7;
    iVar1 = FUN_140d66880(param_1,0,local_30,local_38);
    if (iVar1 != 0) goto LAB_140d6521c;
  }
  FUN_140d64e10(param_1);
LAB_140d6521c:
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=140d65350 name=FUN_140d65350 */

void FUN_140d65350(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,longlong param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  int iVar1;
  undefined auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_88;
  if (*(longlong *)(*param_5 + 0x48) == 0) {
    local_68 = CONCAT44(local_68._4_4_,0x285);
    FUN_140c6c4e0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413c0130);
  }
  else {
    FUN_140d64dd0(param_1);
    *(undefined4 *)(param_1 + 0x58) = 1;
    *param_1 = *param_5;
    param_1[2] = param_6;
    param_1[1] = param_7;
    local_40 = param_13;
    local_48 = param_12;
    local_50 = param_9;
    local_58 = param_8;
    local_68 = param_3;
    local_60 = param_4;
    iVar1 = (**(code **)(*param_5 + 0x48))(param_5,local_30,&local_38,param_2);
    if (iVar1 != 0) {
      local_60 = param_11;
      local_68 = param_10;
      iVar1 = FUN_140d66880(param_1,2,local_30,local_38);
      if (iVar1 != 0) goto LAB_140d654d8;
    }
    FUN_140d64e10(param_1);
  }
LAB_140d654d8:
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_88);
  return;
}


/* address=140d65680 name=FUN_140d65680 */

void FUN_140d65680(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x2c0) == 0) {
    if (*(longlong *)(param_1 + 0x2b8) == -1) {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,0x2d1);
      FUN_140c6c4e0(6,0,0x45,s_D__a_1_s_target_release_build_bo_1413c0330);
    }
    else {
      local_38 = FUN_140ca9c00(*(undefined8 *)(param_1 + 0x18));
      FUN_140d66ca0(param_1,local_30,local_38);
      local_40 = param_8;
      local_48 = param_7;
      local_50 = param_6;
      local_58 = param_5;
      local_60 = local_38;
      local_68 = local_30;
      iVar1 = FUN_140caa040(param_1 + 0x18,param_2,param_3,param_4);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 0x2b8) = *(longlong *)(param_1 + 0x2b8) + 1;
      }
    }
  }
  else {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x2cd);
    FUN_140c6c4e0(6,0,0x42,s_D__a_1_s_target_release_build_bo_1413c02d0);
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=140d65810 name=FUN_140d65810 */

void FUN_140d65810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x2c0) == 0) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x2e5);
    FUN_140c6c4e0(6,0,0x42,s_D__a_1_s_target_release_build_bo_1413c0390);
  }
  else if (*(longlong *)(param_1 + 0x2b8) == -1) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x2e9);
    FUN_140c6c4e0(6,0,0x45,s_D__a_1_s_target_release_build_bo_1413c03f0);
  }
  else {
    local_38 = FUN_140ca9c00(*(undefined8 *)(param_1 + 0x18));
    FUN_140d66ca0(param_1,local_30,local_38);
    local_40 = param_8;
    local_48 = param_7;
    local_50 = param_6;
    local_58 = param_5;
    local_60 = local_38;
    local_68 = local_30;
    iVar1 = FUN_140ca9e20(param_1 + 0x18,param_2,param_3,param_4);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x2b8) = *(longlong *)(param_1 + 0x2b8) + 1;
    }
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=140d65b20 name=FUN_140d65b20 */

undefined8 FUN_140d65b20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=140d65b40 name=FUN_140d65b40 */

undefined8 FUN_140d65b40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=140d65b60 name=FUN_140d65b60 */

undefined8 FUN_140d65b60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d65bb0 name=FUN_140d65bb0 */

undefined8 FUN_140d65bb0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d65bf0 name=FUN_140d65bf0 */

void FUN_140d65bf0(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_140d37f00(param_1,param_2,sVar1);
  return;
}


/* address=140d65c30 name=FUN_140d65c30 */

undefined4
FUN_140d65c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined local_38 [56];
  
  iVar1 = FUN_140d376f0(local_38,0);
  if (iVar1 != 0) {
    iVar1 = FUN_140d65bf0(local_38,"HPKE-v1");
    if (iVar1 != 0) {
      iVar1 = FUN_140d37f00(local_38,param_6,param_7);
      if (iVar1 != 0) {
        iVar1 = FUN_140d65bf0(local_38,param_8);
        if (iVar1 != 0) {
          iVar1 = FUN_140d37f00(local_38,param_9,param_10);
          if (iVar1 != 0) {
            uVar2 = FUN_140d37cf0(local_38);
            uVar3 = FUN_140d37c70(local_38);
            iVar1 = FUN_140ccc720(param_2,param_3,param_1,uVar3,uVar2,param_4,param_5);
            if (iVar1 != 0) {
              local_48 = 1;
              goto LAB_140d65d45;
            }
          }
        }
      }
    }
  }
  local_48 = 0;
LAB_140d65d45:
  FUN_140d377b0(local_38);
  return local_48;
}


/* address=140d65d70 name=FUN_140d65d70 */

undefined4
FUN_140d65d70(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined local_38 [56];
  
  iVar1 = FUN_140d376f0(local_38,0);
  if (iVar1 != 0) {
    iVar1 = FUN_140d38120(local_38,param_3 & 0xffff);
    if (iVar1 != 0) {
      iVar1 = FUN_140d65bf0(local_38,"HPKE-v1");
      if (iVar1 != 0) {
        iVar1 = FUN_140d37f00(local_38,param_6,param_7);
        if (iVar1 != 0) {
          iVar1 = FUN_140d65bf0(local_38,param_8);
          if (iVar1 != 0) {
            iVar1 = FUN_140d37f00(local_38,param_9,param_10);
            if (iVar1 != 0) {
              uVar2 = FUN_140d37cf0(local_38);
              uVar3 = FUN_140d37c70(local_38);
              iVar1 = FUN_140ccc7f0(param_2,param_3,param_1,param_4,param_5,uVar3,uVar2);
              if (iVar1 != 0) {
                local_48 = 1;
                goto LAB_140d65e9c;
              }
            }
          }
        }
      }
    }
  }
  local_48 = 0;
LAB_140d65e9c:
  FUN_140d377b0(local_38);
  return local_48;
}


/* address=140d65ec0 name=FUN_140d65ec0 */

void FUN_140d65ec0(undefined2 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined auStack_c8 [32];
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined local_68;
  undefined local_67;
  undefined local_66;
  undefined local_65;
  undefined local_64;
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_c8;
  local_68 = 0x4b;
  local_67 = 0x45;
  local_66 = 0x4d;
  local_65 = (undefined)((ushort)param_1 >> 8);
  local_64 = (undefined)param_1;
  local_80 = param_6;
  local_88 = param_5;
  local_90 = s_eae_prk_1413bfcb0;
  local_98 = 5;
  local_a0 = &local_68;
  local_a8 = 0;
  iVar1 = FUN_140d65c30(param_2,local_58,&local_70,0);
  if (iVar1 != 0) {
    local_80 = param_8;
    local_88 = param_7;
    local_90 = s_shared_secret_1413bfcb8;
    local_98 = 5;
    local_a0 = &local_68;
    local_a8 = local_70;
    iVar1 = FUN_140d65d70(param_2,param_3,param_4,local_58);
    if (iVar1 != 0) {
      local_78 = 1;
      goto LAB_140d65ff7;
    }
  }
  local_78 = 0;
LAB_140d65ff7:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=140d667d0 name=FUN_140d667d0 */

undefined4 FUN_140d667d0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined local_40 [64];
  
  FUN_140d37760(local_40,param_2,10);
  iVar1 = FUN_140d65bf0(local_40,&DAT_1413c00f0);
  if ((((iVar1 != 0) && (iVar1 = FUN_140d38120(local_40,*(undefined2 *)*param_1), iVar1 != 0)) &&
      (iVar1 = FUN_140d38120(local_40,*(undefined2 *)param_1[2]), iVar1 != 0)) &&
     (iVar1 = FUN_140d38120(local_40,*(undefined2 *)param_1[1]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140d66880 name=FUN_140d66880 */

void FUN_140d66880(longlong param_1,undefined param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_288 [32];
  undefined8 local_268;
  undefined *local_260;
  undefined8 local_258;
  char *local_250;
  undefined *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined local_200 [48];
  undefined local_1d0 [24];
  undefined local_1b8 [64];
  undefined local_178 [64];
  undefined local_138 [64];
  undefined local_f8 [144];
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_288;
  iVar1 = FUN_140d667d0(param_1,local_1d0);
  if (iVar1 != 0) {
    local_238 = (**(code **)(*(longlong *)(param_1 + 0x10) + 8))();
    local_240 = 0;
    local_248 = (undefined *)0x0;
    local_250 = s_psk_id_hash_1413c00f8;
    local_258 = 10;
    local_260 = local_1d0;
    local_268 = 0;
    iVar1 = FUN_140d65c30(local_238,local_178,&local_210,0);
    if (iVar1 != 0) {
      local_240 = param_6;
      local_248 = param_5;
      local_250 = s_info_hash_1413c0108;
      local_258 = 10;
      local_260 = local_1d0;
      local_268 = 0;
      iVar1 = FUN_140d65c30(local_238,local_138,&local_208,0);
      if (iVar1 != 0) {
        FUN_140d37760(local_200,local_f8,0x81);
        iVar1 = FUN_140d380f0(local_200,param_2);
        if ((((iVar1 != 0) && (iVar1 = FUN_140d37f00(local_200,local_178,local_210), iVar1 != 0)) &&
            (iVar1 = FUN_140d37f00(local_200,local_138,local_208), iVar1 != 0)) &&
           (iVar1 = FUN_140d37820(local_200,0,&local_228), iVar1 != 0)) {
          local_240 = 0;
          local_248 = (undefined *)0x0;
          local_250 = s_secret_1413c0114;
          local_258 = 10;
          local_260 = local_1d0;
          local_268 = param_4;
          iVar1 = FUN_140d65c30(local_238,local_1b8,&local_220,param_3);
          if (iVar1 != 0) {
            local_230 = FUN_140d64a80(*(undefined8 *)(param_1 + 8));
            local_218 = FUN_140ca9be0(local_230);
            local_240 = local_228;
            local_248 = local_f8;
            local_250 = &DAT_1413c011c;
            local_258 = 10;
            local_260 = local_1d0;
            local_268 = local_220;
            iVar1 = FUN_140d65d70(local_238,local_68,local_218,local_1b8);
            if (iVar1 != 0) {
              local_260 = (undefined *)0x0;
              local_268 = 0;
              iVar1 = FUN_140ca9d50(param_1 + 0x18,local_230,local_68,local_218);
              if (iVar1 != 0) {
                uVar2 = FUN_140ca9c00(local_230);
                local_240 = local_228;
                local_248 = local_f8;
                local_250 = s_base_nonce_1413c0120;
                local_258 = 10;
                local_260 = local_1d0;
                local_268 = local_220;
                iVar1 = FUN_140d65d70(local_238,param_1 + 0x260,uVar2,local_1b8);
                if (iVar1 != 0) {
                  uVar2 = FUN_140c7f990(local_238);
                  local_240 = local_228;
                  local_248 = local_f8;
                  local_250 = &DAT_1413c012c;
                  local_258 = 10;
                  local_260 = local_1d0;
                  local_268 = local_220;
                  FUN_140d65d70(local_238,param_1 + 0x278,uVar2,local_1b8);
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_288);
  return;
}


/* address=140d66ca0 name=FUN_140d66ca0 */

void FUN_140d66ca0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  if (param_3 < 8) {
    FID_conflict__assert((wchar_t *)s_n_1413c02b0,(wchar_t *)s_D_1413c01f0,0x2b9);
  }
  FUN_140d65bb0(param_2,0,param_3);
  local_18 = *(ulonglong *)(param_1 + 0x2b8);
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    *(char *)(param_2 + -1 + (param_3 - local_20)) = (char)local_18;
    local_18 = local_18 >> 8;
  }
  for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
    *(byte *)(param_2 + local_28) =
         *(byte *)(param_2 + local_28) ^ *(byte *)(param_1 + local_28 + 0x260);
  }
  return;
}


/* address=140d66dc0 name=FUN_140d66dc0 */

undefined8 FUN_140d66dc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    FUN_140c6c4e0(6,0,0x43,s_D__a_1_s_target_release_build_bo_1413c0540,0x75);
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar1 == 0) {
      FUN_140c6c4e0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413c05b0,0x7b);
      FUN_140c6c650(s_algorithm__d_1413c0618,**(undefined4 **)(param_1 + 0x10));
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_140d67fe0(param_1,param_2,lVar1);
    }
  }
  return uVar2;
}


/* address=140d66f00 name=FUN_140d66f00 */

void FUN_140d66f00(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x18) != 0)) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    FUN_140d31750(param_1[2]);
    FUN_140d31750(param_1[3]);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140d670c0 name=FUN_140d670c0 */

undefined8 FUN_140d670c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=140d670e0 name=FUN_140d670e0 */

undefined8 FUN_140d670e0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
     ((*(longlong *)(*param_1 + 0x28) == 0 && (*(longlong *)(*param_1 + 0x30) == 0)))) {
    FUN_140c6c4e0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413c08e0,0xdb);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 8;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d67160 name=FUN_140d67160 */

undefined8
FUN_140d67160(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x28) == 0)) {
    FUN_140c6c4e0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413c0950,0xe6);
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 8) {
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_140c6c4e0(6,0,0x7e,s_D__a_1_s_target_release_build_bo_1413c09c0,0xea);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d67230 name=FUN_140d67230 */

undefined8 FUN_140d67230(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
     ((*(longlong *)(*param_1 + 0x38) == 0 && (*(longlong *)(*param_1 + 0x40) == 0)))) {
    FUN_140c6c4e0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413c0a30,0xf3);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x10;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d672b0 name=FUN_140d672b0 */

undefined8
FUN_140d672b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x38) == 0)) {
    FUN_140c6c4e0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413c0aa0,0xfd);
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 0x10) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_140c6c4e0(6,0,0x7e,s_D__a_1_s_target_release_build_bo_1413c0b10,0x101);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d67e00 name=FUN_140d67e00 */

undefined8 FUN_140d67e00(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d67e40 name=FUN_140d67e40 */

undefined8
FUN_140d67e40(int **param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  
  if (((param_1 == (int **)0x0) || (*param_1 == (int *)0x0)) ||
     (*(longlong *)(*param_1 + 0x1c) == 0)) {
    FUN_140c6c4e0(6,0,0x65,s_D__a_1_s_target_release_build_bo_1413c0720,0xc3);
    uVar1 = 0;
  }
  else if ((param_2 == -1) || (**param_1 == param_2)) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_140c6c4e0(6,0,0x7b,s_D__a_1_s_target_release_build_bo_1413c0800,0xcc);
      uVar1 = 0;
    }
    else if ((param_3 == 0xffffffff) || ((*(uint *)(param_1 + 4) & param_3) != 0)) {
      uVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_4,param_5,param_6);
    }
    else {
      FUN_140c6c4e0(6,0,0x72,s_D__a_1_s_target_release_build_bo_1413c0870,0xd1);
      uVar1 = 0;
    }
  }
  else {
    FUN_140c6c4e0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413c0790,199);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d67f80 name=FUN_140d67f80 */

undefined * FUN_140d67f80(int param_1)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (4 < local_18) {
      return (undefined *)0x0;
    }
    if (*(int *)(&PTR_DAT_141076b28)[local_18] == param_1) break;
    local_18 = local_18 + 1;
  }
  return (&PTR_DAT_141076b28)[local_18];
}


/* address=140d67fe0 name=FUN_140d67fe0 */

longlong * FUN_140d67fe0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140c660d0(0x30);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_140d67e00(plVar2,0,0x30);
    plVar2[1] = param_2;
    *plVar2 = param_3;
    *(undefined4 *)(plVar2 + 4) = 0;
    if (param_1 != 0) {
      FUN_140d317a0(param_1);
      plVar2[2] = param_1;
    }
    if ((*(longlong *)(param_3 + 8) != 0) && (iVar1 = (**(code **)(param_3 + 8))(plVar2), iVar1 < 1)
       ) {
      FUN_140d31750(plVar2[2]);
      FUN_140c66200(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}


/* address=140d680b0 name=FUN_140d680b0 */

undefined4
FUN_140d680b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined8 local_18 [3];
  
  lVar2 = FUN_140cb92d0(param_2,param_3,param_4,0,0,param_5);
  if (lVar2 == 0) {
    local_28 = 0;
  }
  else {
    iVar1 = FUN_140d37fb0(param_1,local_18,lVar2);
    if ((iVar1 == 0) ||
       (lVar3 = FUN_140cb92d0(param_2,param_3,param_4,local_18[0],lVar2,param_5), lVar3 != lVar2)) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
  }
  return local_28;
}


/* address=140d68180 name=FUN_140d68180 */

longlong FUN_140d68180(wchar_t *param_1,longlong param_2)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar6;
  char local_98 [8];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  wchar_t *local_78 [2];
  wchar_t *local_68 [2];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  wchar_t *local_40 [2];
  wchar_t *local_30 [2];
  wchar_t *local_20 [4];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar1 = wcstoul(param_1,local_78,0x20000010);
  if ((((uVar1 == 0) || (iVar2 = FUN_140d35eb0(local_78,&local_58), iVar2 == 0)) || (local_58 != 1))
     || (uVar1 = wcstoul((wchar_t *)local_78,local_30,4), uVar1 == 0)) {
    FUN_140c6c4e0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413c1670,0x52);
    return 0;
  }
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  iVar2 = FUN_140d35ce0(local_78,DAT_141076b50);
  local_res10 = param_2;
  if (iVar2 != 0) {
    uVar1 = wcstoul((wchar_t *)local_78,local_40,DAT_141076b50);
    if (uVar1 == 0) {
      FUN_140c6c4e0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413c16e0,0x61);
      goto LAB_140d685df;
    }
    local_res10 = FUN_140d68b40(local_40);
    local_88 = local_res10;
    if (local_res10 == 0) goto LAB_140d685df;
    if ((param_2 != 0) &&
       (iVar2 = FUN_140cb8740(param_2,local_res10,0), local_res10 = param_2, iVar2 != 0)) {
      FUN_140c6c4e0(0xf,0,0x82,s_D__a_1_s_target_release_build_bo_1413c1750,CONCAT44(uVar6,0x6c));
      goto LAB_140d685df;
    }
    lVar3 = FUN_140d354c0(local_40);
    if (lVar3 != 0) {
      FUN_140c6c4e0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413c17c0,CONCAT44(uVar6,0x70));
      goto LAB_140d685df;
    }
  }
  if (local_res10 == 0) {
    FUN_140c6c4e0(0xf,0,0x72,s_D__a_1_s_target_release_build_bo_1413c1830,CONCAT44(uVar6,0x76));
    goto LAB_140d685df;
  }
  local_90 = FUN_140cba270();
  if ((local_90 == 0) || (iVar2 = FUN_140cba6a0(local_90,local_res10), iVar2 == 0))
  goto LAB_140d685df;
  local_50 = FUN_140d354c0(local_30);
  uVar4 = FUN_140d354a0(local_30);
  local_80 = FUN_140c8ab50(uVar4,local_50,0);
  uVar4 = FUN_140cb8b10(local_res10);
  *(undefined8 *)(local_90 + 8) = uVar4;
  if ((local_80 == 0) ||
     ((*(longlong *)(local_90 + 8) == 0 || (iVar2 = FUN_140cba7e0(local_90,local_80), iVar2 == 0))))
  goto LAB_140d685df;
  iVar2 = FUN_140d35ce0(local_78,DAT_141076b54);
  if (iVar2 == 0) {
    iVar2 = FUN_140cbccd0(local_res10,*(longlong *)(local_90 + 8) + 8,
                          *(longlong *)(local_90 + 0x10) + 0x18);
    if (iVar2 == 0) goto LAB_140d685df;
    *(uint *)(local_90 + 0x18) = *(uint *)(local_90 + 0x18) | 2;
LAB_140d68581:
    lVar3 = FUN_140d354c0(local_78);
    if (lVar3 == 0) {
      iVar2 = FUN_140cbaa60(local_90);
      if (iVar2 != 0) {
        FUN_140c8a700(local_80);
        FUN_140cb8650(local_88);
        return local_90;
      }
    }
    else {
      FUN_140c6c4e0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413c1910,CONCAT44(uVar6,0xac));
    }
  }
  else {
    uVar1 = wcstoul((wchar_t *)local_78,local_20,DAT_141076b54);
    if ((((uVar1 != 0) && (uVar1 = wcstoul((wchar_t *)local_20,local_68,3), uVar1 != 0)) &&
        (iVar2 = FUN_140d356c0(local_68,local_98), iVar2 != 0)) &&
       ((local_98[0] == '\0' && (lVar3 = FUN_140d354c0(local_68), lVar3 != 0)))) {
      local_48 = FUN_140d354c0(local_68);
      uVar4 = FUN_140d354a0(local_68);
      uVar6 = 0;
      iVar2 = FUN_140cb9500(local_res10,*(undefined8 *)(local_90 + 8),uVar4,local_48,0);
      if ((iVar2 != 0) && (lVar3 = FUN_140d354c0(local_20), lVar3 == 0)) {
        pbVar5 = (byte *)FUN_140d354a0(local_68);
        *(uint *)(local_90 + 0x1c) = *pbVar5 & 0xfffffffe;
        goto LAB_140d68581;
      }
    }
    FUN_140c6c4e0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413c18a0,0x98);
  }
LAB_140d685df:
  FUN_140cba420(local_90);
  FUN_140c8a700(local_80);
  FUN_140cb8650(local_88);
  return 0;
}


/* address=140d68610 name=FUN_140d68610 */

undefined8 FUN_140d68610(undefined8 param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar5;
  undefined local_100 [48];
  undefined local_d0 [48];
  undefined local_a0 [48];
  undefined local_70 [48];
  undefined local_40 [64];
  
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffee8 >> 0x20);
  if (((param_2 == (longlong *)0x0) || (*param_2 == 0)) || (param_2[2] == 0)) {
    FUN_140c6c4e0(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_1413c1980,0xc3);
    return 0;
  }
  iVar1 = FUN_140d37e40(param_1,local_100,0x20000010);
  if (((iVar1 != 0) && (iVar1 = FUN_140d38300(local_100,1), iVar1 != 0)) &&
     (iVar1 = FUN_140d37e40(local_100,local_a0,4), iVar1 != 0)) {
    uVar3 = FUN_140cba7a0(param_2);
    uVar4 = FUN_140cb88d0(*param_2);
    uVar2 = FUN_140c8a980(uVar4);
    iVar1 = FUN_140d94ce0(local_a0,uVar2,uVar3);
    if (iVar1 != 0) {
      if (((param_3 & 1) == 0) &&
         (((iVar1 = FUN_140d37e40(local_100,local_70,DAT_141076b50), iVar1 == 0 ||
           (iVar1 = FUN_140d68a00(local_70,*param_2), iVar1 == 0)) ||
          (iVar1 = FUN_140d37900(local_100), iVar1 == 0)))) {
        FUN_140c6c4e0(0xf,0,0x81,s_D__a_1_s_target_release_build_bo_1413c1a60,CONCAT44(uVar5,0xd7));
        return 0;
      }
      if (((param_3 & 2) == 0) && (param_2[1] != 0)) {
        iVar1 = FUN_140d37e40(local_100,local_40,DAT_141076b54);
        if ((iVar1 != 0) &&
           ((iVar1 = FUN_140d37e40(local_40,local_d0,3), iVar1 != 0 &&
            (iVar1 = FUN_140d380f0(local_d0,0), iVar1 != 0)))) {
          uVar5 = 0;
          iVar1 = FUN_140d680b0(local_d0,*param_2,param_2[1],
                                *(undefined4 *)((longlong)param_2 + 0x1c),0);
          if ((iVar1 != 0) && (iVar1 = FUN_140d37900(local_100), iVar1 != 0)) goto LAB_140d68888;
        }
        FUN_140c6c4e0(0xf,0,0x81,s_D__a_1_s_target_release_build_bo_1413c1ad0,CONCAT44(uVar5,0xe7));
        return 0;
      }
LAB_140d68888:
      iVar1 = FUN_140d37900(param_1);
      if (iVar1 == 0) {
        FUN_140c6c4e0(0xf,0,0x81,s_D__a_1_s_target_release_build_bo_1413c1b40,CONCAT44(uVar5,0xed));
        return 0;
      }
      return 1;
    }
  }
  FUN_140c6c4e0(0xf,0,0x81,s_D__a_1_s_target_release_build_bo_1413c19f0,CONCAT44(uVar5,0xce));
  return 0;
}


/* address=140d688e0 name=FUN_140d688e0 */

undefined8 FUN_140d688e0(wchar_t *param_1)

{
  undefined uVar1;
  ulong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong local_38;
  wchar_t *local_18 [3];
  
  uVar2 = wcstoul(param_1,local_18,6);
  if (uVar2 == 0) {
    FUN_140c6c4e0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413c1d70,0x147);
  }
  else {
    lVar4 = FUN_140cc1060();
    for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
      puVar7 = (undefined4 *)(lVar4 + local_38 * 0x38);
      uVar5 = FUN_140d354c0(local_18);
      if (uVar5 == *(byte *)(puVar7 + 4)) {
        uVar1 = *(undefined *)(puVar7 + 4);
        uVar6 = FUN_140d354a0(local_18);
        iVar3 = FUN_140d69280(uVar6,*(undefined8 *)(puVar7 + 2),uVar1);
        if (iVar3 == 0) {
          uVar6 = FUN_140cb84b0(*puVar7);
          return uVar6;
        }
      }
    }
    FUN_140c6c4e0(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_1413c1de0,0x156);
  }
  return 0;
}


/* address=140d68a00 name=FUN_140d68a00 */

undefined4 FUN_140d68a00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong local_50;
  undefined local_38 [56];
  
  iVar1 = FUN_140cb89c0(param_2);
  if (iVar1 == 0) {
    FUN_140c6c4e0(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_1413c1e50,0x15d);
  }
  else {
    lVar2 = FUN_140cc1060();
    for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
      piVar3 = (int *)(lVar2 + local_50 * 0x38);
      if (*piVar3 == iVar1) {
        iVar1 = FUN_140d37e40(param_1,local_38,6);
        if (((iVar1 != 0) &&
            (iVar1 = FUN_140d37f00(local_38,*(undefined8 *)(piVar3 + 2),*(undefined *)(piVar3 + 4)),
            iVar1 != 0)) && (iVar1 = FUN_140d37900(param_1), iVar1 != 0)) {
          return 1;
        }
        return 0;
      }
    }
    FUN_140c6c4e0(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_1413c1ec0,0x16c);
  }
  return 0;
}


/* address=140d68b40 name=FUN_140d68b40 */

undefined8 FUN_140d68b40(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong local_78;
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [16];
  undefined local_18 [24];
  
  iVar2 = FUN_140d35ce0(param_1,0x20000010);
  if (iVar2 == 0) {
    uVar4 = FUN_140d688e0(param_1);
  }
  else {
    iVar2 = FUN_140d692c0(param_1,local_68,local_58,local_48,local_38,local_28,local_18);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar5 = FUN_140cc1060();
      for (local_78 = 0; local_78 < 4; local_78 = local_78 + 1) {
        puVar6 = (undefined4 *)(lVar5 + local_78 * 0x38);
        bVar1 = *(byte *)(puVar6 + 8);
        uVar3 = (uint)bVar1;
        iVar2 = FUN_140d69670(local_68,*(undefined8 *)(puVar6 + 10),uVar3);
        if ((((iVar2 != 0) &&
             (iVar2 = FUN_140d69670(local_58,(ulonglong)uVar3 + *(longlong *)(puVar6 + 10),uVar3),
             iVar2 != 0)) &&
            (iVar2 = FUN_140d69670(local_48,(ulonglong)bVar1 * 2 + *(longlong *)(puVar6 + 10),uVar3)
            , iVar2 != 0)) &&
           (((iVar2 = FUN_140d69670(local_38,(ulonglong)(uVar3 * 3) + *(longlong *)(puVar6 + 10),
                                    uVar3), iVar2 != 0 &&
             (iVar2 = FUN_140d69670(local_28,(ulonglong)bVar1 * 4 + *(longlong *)(puVar6 + 10),uVar3
                                   ), iVar2 != 0)) &&
            (iVar2 = FUN_140d69670(local_18,(ulonglong)(uVar3 * 5) + *(longlong *)(puVar6 + 10),
                                   uVar3), iVar2 != 0)))) {
          uVar4 = FUN_140cb84b0(*puVar6);
          return uVar4;
        }
      }
      FUN_140c6c4e0(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_1413c1f30,0x193);
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* address=140d68d60 name=FUN_140d68d60 */

longlong FUN_140d68d60(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined local_18 [24];
  
  local_20 = 0;
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    local_20 = FUN_140cba680(*param_1);
  }
  if (param_3 < 0) {
    FUN_140c6c4e0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413c1fa0,0x1ab);
    lVar1 = 0;
  }
  else {
    FUN_140d35430(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_140d68180(local_18,local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140cba420(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_140d354a0(local_18);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140d68e50 name=FUN_140d68e50 */

undefined8 FUN_140d68e50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined local_38 [56];
  
  iVar1 = FUN_140d376f0(local_38,0);
  if (iVar1 != 0) {
    uVar2 = FUN_140cba9e0(param_1);
    iVar1 = FUN_140d68610(local_38,param_1,uVar2);
    if (iVar1 != 0) {
      uVar3 = FUN_140d8ad30(local_38,param_2);
      return uVar3;
    }
  }
  FUN_140d377b0(local_38);
  return 0xffffffff;
}


/* address=140d691a0 name=FUN_140d691a0 */

int FUN_140d691a0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int local_44;
  undefined local_40 [64];
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140c6c4e0(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_1413c2160,0x209);
    local_44 = 0;
  }
  else {
    iVar1 = FUN_140d376f0(local_40,0);
    if ((iVar1 == 0) ||
       (iVar1 = FUN_140d680b0(local_40,*param_1,param_1[1],*(undefined4 *)((longlong)param_1 + 0x1c)
                              ,0), iVar1 == 0)) {
      FUN_140d377b0(local_40);
      local_44 = -1;
    }
    else {
      local_44 = FUN_140d8ad30(local_40,param_2);
      if (local_44 < 1) {
        local_44 = 0;
      }
    }
  }
  return local_44;
}


/* address=140d69280 name=FUN_140d69280 */

int FUN_140d69280(void *param_1,void *param_2,size_t param_3)

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


/* address=140d692c0 name=FUN_140d692c0 */

undefined8
FUN_140d692c0(wchar_t *param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,
             undefined8 param_5,undefined8 param_6,wchar_t **param_7)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  char local_88;
  int local_84;
  ulonglong local_80;
  wchar_t *local_78 [2];
  wchar_t *local_68 [2];
  wchar_t *local_58 [2];
  longlong local_48;
  wchar_t *local_40 [2];
  wchar_t *local_30 [2];
  undefined local_20 [32];
  
  uVar1 = wcstoul(param_1,local_78,0x20000010);
  if (((((uVar1 != 0) && (iVar2 = FUN_140d35eb0(local_78,&local_48), iVar2 != 0)) && (local_48 == 1)
       ) && ((uVar1 = wcstoul((wchar_t *)local_78,local_40,0x20000010), uVar1 != 0 &&
             (uVar1 = wcstoul((wchar_t *)local_40,local_30,6), uVar1 != 0)))) &&
     (lVar3 = FUN_140d354c0(local_30), lVar3 == 7)) {
    uVar4 = FUN_140d354a0(local_30);
    iVar2 = FUN_140d69280(uVar4,&DAT_141076b58,7);
    if ((((iVar2 == 0) && (uVar1 = wcstoul((wchar_t *)local_40,param_2,2), uVar1 != 0)) &&
        ((iVar2 = FUN_140d36670(param_2), iVar2 != 0 &&
         (((lVar3 = FUN_140d354c0(local_40), lVar3 == 0 &&
           (uVar1 = wcstoul((wchar_t *)local_78,local_58,0x20000010), uVar1 != 0)) &&
          (uVar1 = wcstoul((wchar_t *)local_58,param_3,4), uVar1 != 0)))))) &&
       (((uVar1 = wcstoul((wchar_t *)local_58,param_4,4), uVar1 != 0 &&
         (iVar2 = FUN_140d36170(local_58,0,0,3), iVar2 != 0)) &&
        ((lVar3 = FUN_140d354c0(local_58), lVar3 == 0 &&
         (((uVar1 = wcstoul((wchar_t *)local_78,local_68,4), uVar1 != 0 &&
           (uVar1 = wcstoul((wchar_t *)local_78,param_7,2), uVar1 != 0)) &&
          ((iVar2 = FUN_140d36670(param_7), iVar2 != 0 &&
           ((iVar2 = FUN_140d36170(local_78,local_20,&local_84,2), iVar2 != 0 &&
            (lVar3 = FUN_140d354c0(local_78), lVar3 == 0)))))))))))) {
      if ((local_84 != 0) &&
         ((lVar3 = FUN_140d354c0(local_20), lVar3 != 1 ||
          (pcVar5 = (char *)FUN_140d354a0(local_20), *pcVar5 != '\x01')))) {
        FUN_140c6c4e0(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_1413c1c20,0x11e);
        return 0;
      }
      iVar2 = FUN_140d356c0(local_68);
      if ((iVar2 != 0) && (local_88 == '\x04')) {
        uVar6 = FUN_140d354c0(local_68);
        if (uVar6 % 2 != 0) {
          FUN_140c6c4e0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413c1d00,299);
          return 0;
        }
        uVar6 = FUN_140d354c0(local_68);
        local_80 = uVar6 / 2;
        uVar4 = FUN_140d354a0(local_68,uVar6 % 2);
        FUN_140d35430(param_5,uVar4,local_80);
        lVar3 = FUN_140d354a0(local_68);
        FUN_140d35430(param_6,lVar3 + local_80,local_80);
        return 1;
      }
      FUN_140c6c4e0(0xf,0,0x6f,s_D__a_1_s_target_release_build_bo_1413c1c90,0x126);
      return 0;
    }
  }
  FUN_140c6c4e0(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_1413c1bb0,0x116);
  return 0;
}


/* address=140d69670 name=FUN_140d69670 */

void FUN_140d69670(undefined *param_1,char *param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  char *local_res10;
  longlong local_res18;
  undefined local_28 [24];
  
  puVar3 = local_28;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  while( true ) {
    lVar2 = FUN_140d354c0(local_28);
    local_res10 = param_2;
    local_res18 = param_3;
    if (lVar2 == 0) break;
    pcVar1 = (char *)FUN_140d354a0(local_28);
    if (*pcVar1 != '\0') break;
    FUN_140d35470(local_28,1);
  }
  for (; (local_res18 != 0 && (*local_res10 == '\0')); local_res10 = local_res10 + 1) {
    local_res18 = local_res18 + -1;
  }
  FUN_140d35650(local_28,local_res10,local_res18);
  return;
}


/* address=140d69730 name=FUN_140d69730 */

void FUN_140d69730(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d69750 name=FUN_140d69750 */

void FUN_140d69750(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d69780 name=FUN_140d69780 */

void FUN_140d69780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c74fe0(param_1,param_2,param_3);
  return;
}


/* address=140d697c0 name=FUN_140d697c0 */

void FUN_140d697c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c751c0(param_1,param_2);
  return;
}


/* address=140d697f0 name=FUN_140d697f0 */

undefined8 FUN_140d697f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d69730(*param_1);
  }
  return uVar1;
}


/* address=140d69820 name=FUN_140d69820 */

undefined8 FUN_140d69820(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d6a9d0(param_2);
  if (lVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = FUN_140d69870(param_1,lVar1,param_3);
  }
  return uVar2;
}


/* address=140d69870 name=FUN_140d69870 */

int FUN_140d69870(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int local_res18;
  
  if (param_1 == (undefined8 *)0x0) {
    local_res18 = -1;
  }
  else {
    local_res18 = param_3;
    if (param_3 < 0) {
      local_res18 = -1;
    }
    uVar1 = *param_1;
    iVar2 = FUN_140d69730(uVar1);
    do {
      local_res18 = local_res18 + 1;
      if (iVar2 <= local_res18) {
        return -1;
      }
      puVar4 = (undefined8 *)FUN_140d69750(uVar1,(longlong)local_res18);
      iVar3 = FUN_140d6a5c0(*puVar4,param_2);
    } while (iVar3 != 0);
  }
  return local_res18;
}


/* address=140d69930 name=FUN_140d69930 */

undefined8 FUN_140d69930(undefined8 *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((param_1 != (undefined8 *)0x0) && (-1 < param_2)) &&
     (uVar1 = FUN_140d69730(*param_1), (ulonglong)(longlong)param_2 < uVar1)) {
    uVar2 = FUN_140d69750(*param_1,(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=140d69990 name=FUN_140d69990 */

longlong FUN_140d69990(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_38;
  int local_34;
  
  if (((param_1 == (undefined8 *)0x0) || (param_2 < 0)) ||
     (uVar3 = FUN_140d69730(*param_1), uVar3 <= (ulonglong)(longlong)param_2)) {
    lVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar4 = FUN_140d697c0(uVar1,(longlong)param_2);
    iVar2 = FUN_140d69730(uVar1);
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_2 != iVar2) {
      if (param_2 == 0) {
        local_34 = *(int *)(lVar4 + 0x10) + -1;
      }
      else {
        lVar5 = FUN_140d69750(uVar1,(longlong)(param_2 + -1));
        local_34 = *(int *)(lVar5 + 0x10);
      }
      lVar5 = FUN_140d69750(uVar1,(longlong)param_2);
      local_38 = param_2;
      if (local_34 + 1 < *(int *)(lVar5 + 0x10)) {
        for (; local_38 < iVar2; local_38 = local_38 + 1) {
          lVar5 = FUN_140d69750(uVar1,(longlong)local_38);
          *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
        }
      }
    }
  }
  return lVar4;
}


/* address=140d69ad0 name=FUN_140d69ad0 */

undefined8 FUN_140d69ad0(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int local_res18;
  int local_res20;
  int local_34;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    iVar2 = FUN_140d69730(uVar1);
    local_res18 = iVar2;
    if ((param_3 <= iVar2) && (local_res18 = param_3, param_3 < 0)) {
      local_res18 = iVar2;
    }
    bVar5 = param_4 == 0;
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_4 == -1) {
      if (local_res18 != 0) {
        lVar3 = FUN_140d69750(uVar1,(longlong)(local_res18 + -1));
        local_res20 = *(int *)(lVar3 + 0x10);
      }
      else {
        local_res20 = 0;
      }
      bVar5 = local_res18 == 0 || bVar5;
    }
    else if (local_res18 < iVar2) {
      lVar3 = FUN_140d69750(uVar1,(longlong)local_res18);
      local_res20 = *(int *)(lVar3 + 0x10);
    }
    else if (local_res18 == 0) {
      local_res20 = 0;
    }
    else {
      lVar3 = FUN_140d69750(uVar1,(longlong)(local_res18 + -1));
      local_res20 = *(int *)(lVar3 + 0x10) + 1;
    }
    lVar3 = FUN_140d79c20(param_2);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x10) = local_res20;
      lVar4 = FUN_140d69780(uVar1,lVar3,(longlong)local_res18);
      if (lVar4 != 0) {
        if (bVar5) {
          iVar2 = FUN_140d69730(uVar1);
          while (local_34 = local_res18 + 1, local_34 < iVar2) {
            lVar3 = FUN_140d69750(uVar1,(longlong)local_34);
            *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
            local_res18 = local_34;
          }
        }
        return 1;
      }
    }
    if (lVar3 != 0) {
      FUN_140d79b80(lVar3);
    }
  }
  return 0;
}


/* address=140d69de0 name=FUN_140d69de0 */

undefined4
FUN_140d69de0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140d6a1b0(0,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d69ad0(param_1,lVar2,param_6,param_7);
    FUN_140d79b80(lVar2);
  }
  return uVar1;
}


/* address=140d69e70 name=FUN_140d69e70 */

undefined8 FUN_140d69e70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}


/* address=140d69e90 name=FUN_140d69e90 */

bool FUN_140d69e90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    FUN_140c6c4e0(0xb,0,0x43,s_D__a_1_s_target_release_build_bo_1413c22b0,0x15a);
    bVar2 = false;
  }
  else {
    FUN_140d73420(*param_1);
    lVar1 = FUN_140d6a3e0(param_2);
    *param_1 = lVar1;
    bVar2 = *param_1 != 0;
  }
  return bVar2;
}


/* address=140d69f20 name=FUN_140d69f20 */

undefined8 FUN_140d69f20(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}


/* address=140d69f50 name=FUN_140d69f50 */

bool FUN_140d69f50(undefined8 *param_1,uint param_2,char *param_3,size_t param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  size_t local_res20;
  
  if ((param_1 == (undefined8 *)0x0) || ((param_3 == (char *)0x0 && (param_4 != 0)))) {
    bVar4 = false;
  }
  else if (((int)param_2 < 1) || ((param_2 & 0x1000) == 0)) {
    local_res20 = param_4;
    if ((longlong)param_4 < 0) {
      local_res20 = strlen(param_3);
    }
    iVar2 = FUN_140d708c0(param_1[1],param_3,local_res20);
    if (iVar2 == 0) {
      bVar4 = false;
    }
    else {
      if (param_2 != 0xffffffff) {
        *(uint *)(param_1[1] + 4) = param_2;
      }
      bVar4 = true;
    }
  }
  else {
    uVar1 = FUN_140d6a680(*param_1);
    lVar3 = FUN_140ddb830(param_1 + 1,param_3,param_4,param_2,uVar1);
    bVar4 = lVar3 != 0;
  }
  return bVar4;
}


/* address=140d6a050 name=FUN_140d6a050 */

longlong FUN_140d6a050(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  int iVar1;
  longlong local_18;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    local_18 = FUN_140d79b60();
    if (local_18 == 0) {
      return 0;
    }
  }
  else {
    local_18 = *param_1;
  }
  iVar1 = FUN_140d69e90(local_18,param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_140d69f50(local_18,param_3,param_4,param_5), iVar1 == 0)) {
    if ((param_1 == (longlong *)0x0) || (local_18 != *param_1)) {
      FUN_140d79b80(local_18);
    }
    local_18 = 0;
  }
  else if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    *param_1 = local_18;
  }
  return local_18;
}


/* address=140d6a130 name=FUN_140d6a130 */

undefined8
FUN_140d6a130(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_140d6a9d0(param_2);
  if (lVar1 == 0) {
    FUN_140c6c4e0(0xb,0,0x81,s_D__a_1_s_target_release_build_bo_1413c2240,CONCAT44(uVar3,0x132));
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d6a050(param_1,lVar1,param_3,param_4,param_5);
  }
  return uVar2;
}


/* address=140d6a1b0 name=FUN_140d6a1b0 */

undefined8
FUN_140d6a1b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_140d6abc0(param_2,0);
  if (lVar1 == 0) {
    FUN_140c6c4e0(0xb,0,0x6f,s_D__a_1_s_target_release_build_bo_1413c21d0,CONCAT44(uVar3,0x123));
    FUN_140c6c600(2,s_name__1413c2234,param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d6a050(param_1,lVar1,param_3,param_4,param_5);
    FUN_140d73420(lVar1);
  }
  return uVar2;
}


/* address=140d6a260 name=FUN_140d6a260 */

int FUN_140d6a260(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int local_14;
  
  iVar1 = FUN_140d69870(param_1,param_2,0xffffffff);
  if (iVar1 < 0) {
    local_14 = -1;
  }
  else {
    uVar2 = FUN_140d69930(param_1,iVar1);
    piVar3 = (int *)FUN_140d69f20(uVar2);
    if (param_4 + -1 < *piVar3) {
      local_14 = param_4 + -1;
    }
    else {
      local_14 = *piVar3;
    }
    if (param_3 == 0) {
      local_14 = *piVar3;
    }
    else {
      FUN_140d6a3a0(param_3,*(undefined8 *)(piVar3 + 2),(longlong)local_14);
      *(undefined *)(param_3 + local_14) = 0;
    }
  }
  return local_14;
}


/* address=140d6a3a0 name=FUN_140d6a3a0 */

undefined8 FUN_140d6a3a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d6a3e0 name=FUN_140d6a3e0 */

longlong * FUN_140d6a3e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (param_1 == (longlong *)0x0) {
    param_1 = (longlong *)0x0;
  }
  else if ((*(uint *)(param_1 + 4) & 1) != 0) {
    plVar1 = (longlong *)FUN_140d73990();
    if (plVar1 == (longlong *)0x0) {
      FUN_140c6c4e0(8,0,0xc,s_D__a_1_s_target_release_build_bo_1413cbb90,0x75);
      param_1 = (longlong *)0x0;
    }
    else {
      *plVar1 = 0;
      plVar1[1] = 0;
      lVar2 = FUN_140c660d0((longlong)*(int *)((longlong)param_1 + 0x14));
      if (lVar2 != 0) {
        if (param_1[3] != 0) {
          FUN_140d6ae10(lVar2,param_1[3],(longlong)*(int *)((longlong)param_1 + 0x14));
        }
        plVar1[3] = lVar2;
        *(undefined4 *)((longlong)plVar1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
        *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_1 + 2);
        if (((param_1[1] == 0) || (local_18 = FUN_140c66520(param_1[1]), local_18 != 0)) &&
           ((*param_1 == 0 || (local_10 = FUN_140c66520(*param_1), local_10 != 0)))) {
          *plVar1 = local_10;
          plVar1[1] = local_18;
          *(uint *)(plVar1 + 4) = *(uint *)(param_1 + 4) | 0xd;
          return plVar1;
        }
      }
      FUN_140c66200(local_18);
      FUN_140c66200(0);
      FUN_140c66200(lVar2);
      FUN_140c66200(plVar1);
      param_1 = (longlong *)0x0;
    }
  }
  return param_1;
}


/* address=140d6a5c0 name=FUN_140d6a5c0 */

ulonglong FUN_140d6a5c0(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14);
  if (uVar1 == 0) {
    uVar2 = FUN_140d6add0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
                          (longlong)*(int *)(param_1 + 0x14));
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2;
}


/* address=140d6a620 name=FUN_140d6a620 */

undefined8 FUN_140d6a620(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar1;
}


/* address=140d6a650 name=FUN_140d6a650 */

longlong FUN_140d6a650(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x14) < 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)*(int *)(param_1 + 0x14);
  }
  return lVar1;
}


/* address=140d6a680 name=FUN_140d6a680 */

undefined4 FUN_140d6a680(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ushort *puVar3;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_140d396c0(&DAT_1413eb110);
    if ((DAT_1413eb118 != 0) && (lVar2 = FUN_140d6af30(DAT_1413eb118,param_1), lVar2 != 0)) {
      FUN_140d39720(&DAT_1413eb110);
      return *(undefined4 *)(lVar2 + 0x10);
    }
    FUN_140d39720(&DAT_1413eb110);
    puVar3 = (ushort *)FUN_140e11328(param_1,&DAT_141082a10,0x371,2,&LAB_140d6b030);
    if (puVar3 == (ushort *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_1410783b0 + (ulonglong)*puVar3 * 0x28);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}


/* address=140d6a7e0 name=FUN_140d6a7e0 */

undefined4 FUN_140d6a7e0(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined8 local_38 [7];
  
  FUN_140d396c0(&DAT_1413eb110);
  if ((DAT_1413eb128 != 0) &&
     (local_38[0] = param_1, lVar2 = FUN_140d6af30(DAT_1413eb128,local_38), lVar2 != 0)) {
    FUN_140d39720(&DAT_1413eb110);
    return *(undefined4 *)(lVar2 + 0x10);
  }
  FUN_140d39720(&DAT_1413eb110);
  puVar3 = (ushort *)FUN_140e11328(param_1,&DAT_141081b10,0x3be,2,&LAB_140d6b0e0);
  if (puVar3 == (ushort *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_1410783b0 + (ulonglong)*puVar3 * 0x28);
  }
  return uVar1;
}


/* address=140d6a8b0 name=FUN_140d6a8b0 */

undefined4 FUN_140d6a8b0(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined local_38 [8];
  undefined8 local_30;
  
  FUN_140d396c0(&DAT_1413eb110);
  if ((DAT_1413eb130 != 0) &&
     (local_30 = param_1, lVar2 = FUN_140d6af30(DAT_1413eb130,local_38), lVar2 != 0)) {
    FUN_140d39720(&DAT_1413eb110);
    return *(undefined4 *)(lVar2 + 0x10);
  }
  FUN_140d39720(&DAT_1413eb110);
  puVar3 = (ushort *)FUN_140e11328(param_1,&DAT_141082290,0x3be,2,&LAB_140d6b130);
  if (puVar3 == (ushort *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_1410783b0 + (ulonglong)*puVar3 * 0x28);
  }
  return uVar1;
}


/* address=140d6a9d0 name=FUN_140d6a9d0 */

undefined ** FUN_140d6a9d0(int param_1)

{
  undefined **ppuVar1;
  undefined local_30 [16];
  int local_20;
  
  if ((param_1 < 0) || (0x3c8 < param_1)) {
    FUN_140d396c0(&DAT_1413eb110);
    if ((DAT_1413eb120 != 0) &&
       (local_20 = param_1, ppuVar1 = (undefined **)FUN_140d6af30(DAT_1413eb120,local_30),
       ppuVar1 != (undefined **)0x0)) {
      FUN_140d39720(&DAT_1413eb110);
      return ppuVar1;
    }
    FUN_140d39720(&DAT_1413eb110);
  }
  else if ((param_1 == 0) || (*(int *)(&DAT_1410783b0 + (longlong)param_1 * 0x28) != 0)) {
    return &PTR_s_UNDEF_1410783a0 + (longlong)param_1 * 5;
  }
  FUN_140c6c4e0(8,0,100,s_D__a_1_s_target_release_build_bo_1413cbbf0,0x16e);
  return (undefined **)0x0;
}


/* address=140d6aab0 name=FUN_140d6aab0 */

undefined8 FUN_140d6aab0(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140d6a9d0(param_1);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* address=140d6aaf0 name=FUN_140d6aaf0 */

undefined8 FUN_140d6aaf0(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d6a9d0(param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}


/* address=140d6ab30 name=FUN_140d6ab30 */

undefined8 FUN_140d6ab30(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined local_40 [64];
  
  lVar2 = FUN_140d6a9d0(param_2);
  if ((((lVar2 != 0) && (iVar1 = FUN_140d37e40(param_1,local_40,6), iVar1 != 0)) &&
      (iVar1 = FUN_140d37f00(local_40,*(undefined8 *)(lVar2 + 0x18),(longlong)*(int *)(lVar2 + 0x14)
                            ), iVar1 != 0)) && (iVar1 = FUN_140d37900(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140d6abc0 name=FUN_140d6abc0 */

void FUN_140d6abc0(undefined8 param_1,int param_2)

{
  int local_18;
  
  if (param_2 == 0) {
    local_18 = FUN_140d6a7e0(param_1);
    if (local_18 == 0) {
      local_18 = FUN_140d6a8b0(param_1);
    }
    if (local_18 != 0) {
      FUN_140d6a9d0(local_18);
      return;
    }
  }
  FUN_140d6b180(0,param_1,0,0);
  return;
}


/* address=140d6ac30 name=FUN_140d6ac30 */

ulonglong FUN_140d6ac30(undefined *param_1,int param_2,longlong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_30;
  undefined local_20 [32];
  
  if ((param_3 == 0) || (*(int *)(param_3 + 0x14) == 0)) {
    uVar3 = FUN_140d6b290(param_1,&DAT_1413eb140,param_2);
  }
  else {
    if ((param_4 == 0) && (iVar1 = FUN_140d6a680(param_3), iVar1 != 0)) {
      local_30 = FUN_140d6aaf0(iVar1);
      if (local_30 == 0) {
        local_30 = FUN_140d6aab0(iVar1);
      }
      if (local_30 != 0) {
        uVar3 = FUN_140d6b290(param_1,local_30,param_2);
        return uVar3;
      }
    }
    FUN_140d35430(local_20,*(undefined8 *)(param_3 + 0x18),(longlong)*(int *)(param_3 + 0x14));
    lVar4 = FUN_140d36770(local_20);
    if (lVar4 == 0) {
      if (0 < param_2) {
        *param_1 = 0;
      }
      uVar3 = 0xffffffff;
    }
    else {
      uVar2 = FUN_140d6b290(param_1,lVar4,param_2);
      FUN_140c66200(lVar4);
      uVar3 = (ulonglong)uVar2;
    }
  }
  return uVar3;
}


/* address=140d6add0 name=FUN_140d6add0 */

int FUN_140d6add0(void *param_1,void *param_2,size_t param_3)

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


/* address=140d6ae10 name=FUN_140d6ae10 */

undefined8 FUN_140d6ae10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d6ae60 name=FUN_140d6ae60 */

undefined8 FUN_140d6ae60(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d6af00 name=FUN_140d6af00 */

void FUN_140d6af00(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3a1e0(param_1,param_2);
  return;
}


/* address=140d6af30 name=FUN_140d6af30 */

void FUN_140d6af30(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3a390(param_1,param_2,&LAB_140d6aed0,&LAB_140d6aea0);
  return;
}


/* address=140d6af70 name=FUN_140d6af70 */

undefined4 FUN_140d6af70(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_140d3a480(param_1,local_10,param_3,&LAB_140d6aed0,&LAB_140d6aea0);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=140d6b180 name=FUN_140d6b180 */

undefined8 FUN_140d6b180(code *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  size_t sVar2;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar3;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [56];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  iVar1 = FUN_140d376f0(local_38,0x20);
  if (iVar1 != 0) {
    sVar2 = strlen(param_2);
    iVar1 = FUN_140d38690(local_38,param_2,sVar2);
    if ((iVar1 != 0) && (iVar1 = FUN_140d37820(local_38,&local_50,&local_48), iVar1 != 0)) {
      if (param_1 == (code *)0x0) {
        local_58 = 0;
      }
      else {
        local_58 = (*param_1)();
      }
      local_40 = FUN_140d73380(local_58,local_50,local_48,param_3,param_4);
      FUN_140c66200(local_50);
      return local_40;
    }
  }
  FUN_140c6c4e0(8,0,0x65,s_D__a_1_s_target_release_build_bo_1413cbc50,CONCAT44(uVar3,0x18e));
  FUN_140d377b0(local_38);
  return 0;
}


/* address=140d6b290 name=FUN_140d6b290 */

ulonglong FUN_140d6b290(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong local_18;
  
  if (param_3 < 0) {
    local_18 = 0;
  }
  else {
    local_18 = (longlong)param_3;
  }
  uVar1 = FUN_140c66c00(param_1,param_2,local_18);
  if (uVar1 < 0x80000000) {
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    FUN_140c6c4e0(8,0,0x45,s_D__a_1_s_target_release_build_bo_1413cbcb0,0x1ab);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* address=140d6b4c0 name=FUN_140d6b4c0 */

uint FUN_140d6b4c0(longlong *param_1)

{
  uint uVar1;
  uint local_18;
  undefined local_10 [16];
  
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff2;
  FUN_140d396f0(&DAT_1413eb110);
  if (DAT_1413eb120 == 0) {
    DAT_1413eb120 = FUN_140d6af00(&LAB_140d6b320,&LAB_140d6b340);
  }
  if (DAT_1413eb118 == 0) {
    DAT_1413eb118 = FUN_140d6af00(&LAB_140d6b370,&LAB_140d6b3a0);
  }
  if (DAT_1413eb128 == 0) {
    DAT_1413eb128 = FUN_140d6af00(&LAB_140d6b400,&LAB_140d6b430);
  }
  if (DAT_1413eb130 == 0) {
    DAT_1413eb130 = FUN_140d6af00(&LAB_140d6b460,&LAB_140d6b490);
  }
  local_18 = 0;
  if ((((DAT_1413eb120 != 0) && (DAT_1413eb118 != 0)) && (DAT_1413eb128 != 0)) &&
     (DAT_1413eb130 != 0)) {
    local_18 = FUN_140d6af70(DAT_1413eb120,local_10,param_1);
    if ((*(int *)((longlong)param_1 + 0x14) != 0) && (param_1[3] != 0)) {
      uVar1 = FUN_140d6af70(DAT_1413eb118,local_10,param_1);
      local_18 = local_18 & uVar1;
    }
    if (*param_1 != 0) {
      uVar1 = FUN_140d6af70(DAT_1413eb128,local_10,param_1);
      local_18 = local_18 & uVar1;
    }
    if (param_1[1] != 0) {
      uVar1 = FUN_140d6af70(DAT_1413eb130,local_10,param_1);
      local_18 = local_18 & uVar1;
    }
  }
  FUN_140d39750(&DAT_1413eb110);
  return local_18;
}


/* address=140d6b670 name=FUN_140d6b670 */

undefined8 FUN_140d6b670(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (0x11 < local_18) {
      return 0;
    }
    if (*(int *)(&DAT_141083100 + local_18 * 0xc) == param_1) break;
    local_18 = local_18 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(&DAT_141083104 + local_18 * 0xc);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(&DAT_141083108 + local_18 * 0xc);
  }
  return 1;
}


/* address=140d6b710 name=FUN_140d6b710 */

undefined8 FUN_140d6b710(undefined4 *param_1,int param_2,int param_3)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (0x11 < local_18) {
      return 0;
    }
    if ((*(int *)(&DAT_141083104 + local_18 * 0xc) == param_2) &&
       (*(int *)(&DAT_141083108 + local_18 * 0xc) == param_3)) break;
    local_18 = local_18 + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(&DAT_141083100 + local_18 * 0xc);
  }
  return 1;
}


/* address=140d6b7a0 name=FUN_140d6b7a0 */

void FUN_140d6b7a0(undefined8 param_1)

{
  FUN_140e0fcc0(param_1);
  return;
}


/* address=140d6b7c0 name=FUN_140d6b7c0 */

void FUN_140d6b7c0(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d6b7e0 name=FUN_140d6b7e0 */

void FUN_140d6b7e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d6b840 name=FUN_140d6b840 */

void FUN_140d6b840(void)

{
  FUN_140c74de0();
  return;
}


/* address=140d6b860 name=FUN_140d6b860 */

void FUN_140d6b860(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d6b880 name=FUN_140d6b880 */

void FUN_140d6b880(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d6b8b0 name=FUN_140d6b8b0 */

void FUN_140d6b8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c74ec0(param_1,param_2,param_3);
  return;
}


/* address=140d6b8f0 name=FUN_140d6b8f0 */

void FUN_140d6b8f0(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140d6b910 name=FUN_140d6b910 */

void FUN_140d6b910(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140d6b810,param_2);
  return;
}


/* address=140d6b940 name=FUN_140d6b940 */

void FUN_140d6b940(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75290(param_1,param_2);
  return;
}


/* address=140d6b970 name=FUN_140d6b970 */

void FUN_140d6b970(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140d6b9a0 name=FUN_140d6b9a0 */

void FUN_140d6b9a0(undefined8 param_1)

{
  FUN_140c75730(param_1);
  return;
}


/* address=140d6b9c0 name=FUN_140d6b9c0 */

void FUN_140d6b9c0(undefined8 param_1)

{
  FUN_140c75780(param_1);
  return;
}


/* address=140d6ba10 name=FUN_140d6ba10 */

void FUN_140d6ba10(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d6ba30 name=FUN_140d6ba30 */

void FUN_140d6ba30(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d6ba60 name=FUN_140d6ba60 */

void FUN_140d6ba60(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140d6b9e0,param_2);
  return;
}


/* address=140d6baf0 name=FUN_140d6baf0 */

undefined4 FUN_140d6baf0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_18;
  longlong local_10 [2];
  
  iVar1 = FUN_140d33120(param_1,local_10);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else if (local_10[0] == param_2 || local_10[0] - param_2 < 0) {
    local_18 = 0xffffffff;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140d6bb80 name=FUN_140d6bb80 */

void FUN_140d6bb80(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_140d6bbc0(param_1,0,param_2,param_3);
  return;
}


/* address=140d6bbc0 name=FUN_140d6bbc0 */

void FUN_140d6bbc0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 local_18;
  
  if (param_4 == (undefined8 *)0x0) {
    local_18 = FUN_140d6b7a0(0);
  }
  else {
    local_18 = *param_4;
  }
  FUN_140d32d70(param_1,local_18,param_2,param_3);
  return;
}


/* address=140d6bcc0 name=FUN_140d6bcc0 */

void FUN_140d6bcc0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_140d39dc0(param_1 + 0xd0,param_2,param_3);
  return;
}


/* address=140d6bd30 name=FUN_140d6bd30 */

void FUN_140d6bd30(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d6bd50 name=FUN_140d6bd50 */

void FUN_140d6bd50(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d6c200 name=FUN_140d6c200 */

int FUN_140d6c200(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int local_64;
  longlong local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  int local_40;
  int local_3c;
  int local_38;
  longlong local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_4c = 0;
  local_18 = *(longlong *)(param_1 + 0x20);
  iVar5 = 0;
  local_30 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_140c6c4e0(0xb,0,0x7a,s_D__a_1_s_target_release_build_bo_1413cbd30,0xc0);
    *(undefined4 *)(param_1 + 0xa4) = 0x41;
    return -1;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_140c6c4e0(0xb,0,0x42,s_D__a_1_s_target_release_build_bo_1413cbda0,199);
    *(undefined4 *)(param_1 + 0xa4) = 0x41;
    return -1;
  }
  uVar3 = FUN_140d6b840();
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  if ((*(longlong *)(param_1 + 0x98) == 0) ||
     (lVar4 = FUN_140d6b970(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 8)),
     lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0xa4) = 0x11;
  }
  else {
    FUN_140c67ba0(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x94) = 1;
    if ((*(longlong *)(param_1 + 0x10) == 0) ||
       (local_30 = FUN_140d6b9c0(*(undefined8 *)(param_1 + 0x10)), local_30 != 0)) {
      local_64 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98));
      local_60 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)(local_64 + -1));
      local_28 = *(int *)(local_18 + 0x20);
      for (; local_64 <= local_28; local_64 = local_64 + 1) {
        iVar1 = FUN_140d6f260(local_60,&local_20);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0xa4) = 0x29;
          goto LAB_140d6cbd4;
        }
        if (local_20 != 0) break;
        if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x8000) != 0) {
          iVar5 = (**(code **)(param_1 + 0x40))(&local_58,param_1,local_60);
          if (iVar5 < 0) {
            *(undefined4 *)(param_1 + 0xa4) = 0x42;
            goto LAB_140d6cbd4;
          }
          if (0 < iVar5) {
            FUN_140c67c40(local_58);
            break;
          }
        }
        if ((local_30 == 0) || (local_58 = FUN_140d6d8f0(param_1,local_30,local_60), local_58 == 0))
        break;
        lVar4 = FUN_140d6b970(*(undefined8 *)(param_1 + 0x98),local_58);
        if (lVar4 == 0) {
          *(undefined4 *)(param_1 + 0xa4) = 0x11;
          iVar5 = 0;
          goto LAB_140d6cbd4;
        }
        FUN_140c67ba0(local_58);
        FUN_140d6b940(local_30,local_58);
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
        local_60 = local_58;
      }
      local_50 = local_64;
      do {
        local_40 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98));
        local_60 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)(local_40 + -1));
        iVar1 = FUN_140d6f260(local_60,&local_3c);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0xa4) = 0x29;
          goto LAB_140d6cbd4;
        }
        if (local_3c != 0) {
          lVar4 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98));
          if (lVar4 == 1) {
            iVar5 = (**(code **)(param_1 + 0x40))(&local_58,param_1,local_60);
            if ((iVar5 < 1) || (iVar1 = FUN_140d79430(local_60,local_58), iVar1 != 0)) {
              *(undefined4 *)(param_1 + 0xa4) = 0x12;
              *(longlong *)(param_1 + 0xa8) = local_60;
              *(int *)(param_1 + 0xa0) = local_40 + -1;
              if (iVar5 == 1) {
                FUN_140c67c40(local_58);
              }
              local_4c = 1;
              iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar5 == 0) goto LAB_140d6cbd4;
            }
            else {
              FUN_140c67c40(local_60);
              local_60 = local_58;
              FUN_140d6b8b0(*(undefined8 *)(param_1 + 0x98),(longlong)(local_40 + -1),local_58);
              *(undefined4 *)(param_1 + 0x94) = 0;
            }
          }
          else {
            local_48 = FUN_140d6b9a0(*(undefined8 *)(param_1 + 0x98));
            *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
            local_50 = local_50 + -1;
            local_60 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)(local_64 + -2));
            local_64 = local_64 + -1;
          }
        }
        for (; local_64 <= local_28; local_64 = local_64 + 1) {
          iVar1 = FUN_140d6f260(local_60,&local_3c);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0xa4) = 0x29;
            goto LAB_140d6cbd4;
          }
          if (local_3c != 0) break;
          iVar5 = (**(code **)(param_1 + 0x40))(&local_58,param_1,local_60);
          if (iVar5 < 0) {
            *(undefined4 *)(param_1 + 0xa4) = 0x42;
            goto LAB_140d6cbd4;
          }
          if (iVar5 == 0) break;
          local_60 = local_58;
          lVar4 = FUN_140d6b970(*(undefined8 *)(param_1 + 0x98),local_58);
          if (lVar4 == 0) {
            FUN_140c67c40(local_58);
            *(undefined4 *)(param_1 + 0xa4) = 0x11;
            iVar5 = 0;
            goto LAB_140d6cbd4;
          }
        }
        local_38 = FUN_140d6dfa0(param_1);
        if (local_38 == 2) {
          iVar5 = 0;
          goto LAB_140d6cbd4;
        }
        local_24 = 0;
        iVar1 = local_50;
        if (((local_38 != 1) && ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x8000) == 0))
           && ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x100000) == 0)) {
          do {
            local_1c = local_50;
            iVar1 = local_50 + -1;
            if (local_50 < 2) goto LAB_140d6c9c1;
            iVar5 = local_50 + -2;
            local_50 = local_50 + -1;
            local_10 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)iVar5);
            iVar5 = (**(code **)(param_1 + 0x40))(&local_58,param_1,local_10);
            if (iVar5 < 0) goto LAB_140d6cbd4;
          } while (iVar5 < 1);
          FUN_140c67c40(local_58);
          for (; local_50 < local_64; local_64 = local_64 + -1) {
            local_58 = FUN_140d6b9a0(*(undefined8 *)(param_1 + 0x98));
            FUN_140c67c40(local_58);
          }
          uVar2 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98));
          *(undefined4 *)(param_1 + 0x94) = uVar2;
          local_24 = 1;
          iVar1 = local_50;
        }
LAB_140d6c9c1:
        local_50 = iVar1;
      } while (local_24 != 0);
      if ((local_38 != 1) && (local_4c == 0)) {
        if ((local_48 == 0) ||
           (iVar5 = (**(code **)(param_1 + 0x48))(param_1,local_60,local_48), iVar5 == 0)) {
          if (*(int *)(param_1 + 0x94) < local_64) {
            *(undefined4 *)(param_1 + 0xa4) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0xa4) = 0x14;
          }
          *(longlong *)(param_1 + 0xa8) = local_60;
        }
        else {
          FUN_140d6b970(*(undefined8 *)(param_1 + 0x98),local_48);
          local_64 = local_64 + 1;
          *(int *)(param_1 + 0x94) = local_64;
          *(longlong *)(param_1 + 0xa8) = local_48;
          *(undefined4 *)(param_1 + 0xa4) = 0x13;
          local_48 = 0;
        }
        *(int *)(param_1 + 0xa0) = local_64 + -1;
        local_4c = 1;
        iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar5 == 0) {
          iVar5 = 0;
          goto LAB_140d6cbd4;
        }
      }
      iVar5 = FUN_140d6d980(param_1);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_140d6de70(param_1);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (**(code **)(param_1 + 0x50))(param_1);
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            if (*(longlong *)(param_1 + 0x30) == 0) {
              iVar5 = FUN_140d6ef70(param_1);
            }
            else {
              iVar5 = (**(code **)(param_1 + 0x30))(param_1);
            }
            if (((iVar5 != 0) && (iVar5 = FUN_140d6dc30(param_1), iVar5 != 0)) && (local_4c == 0)) {
              iVar5 = (**(code **)(param_1 + 0x70))(param_1);
            }
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xa4) = 0x11;
    }
  }
LAB_140d6cbd4:
  if (local_30 != 0) {
    FUN_140d6b8f0(local_30);
  }
  if (local_48 != 0) {
    FUN_140c67c40(local_48);
  }
  if ((iVar5 < 1) && (*(int *)(param_1 + 0xa4) == 0)) {
    *(undefined4 *)(param_1 + 0xa4) = 1;
  }
  return iVar5;
}


/* address=140d6cc70 name=FUN_140d6cc70 */

longlong FUN_140d6cc70(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c660d0(0xd8);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d6ccb0(lVar1);
  }
  return lVar1;
}


/* address=140d6ccb0 name=FUN_140d6ccb0 */

void FUN_140d6ccb0(undefined8 param_1)

{
  FUN_140d6d7f0(param_1,0,0xd8);
  return;
}


/* address=140d6cce0 name=FUN_140d6cce0 */

void FUN_140d6cce0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140d6d0f0(param_1);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140d6cd20 name=FUN_140d6cd20 */

undefined8 FUN_140d6cd20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_140d6ccb0(param_1);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_140d39ef0(param_1 + 0x1a);
  if (param_2 == 0) {
    FUN_140c6c4e0(0xb,0,0x43,s_D__a_1_s_target_release_build_bo_1413cc270,0x831);
  }
  else {
    lVar2 = FUN_140c6ac60();
    param_1[4] = lVar2;
    if (param_1[4] != 0) {
      param_1[7] = *(longlong *)(param_2 + 0x30);
      param_1[0x11] = *(longlong *)(param_2 + 0x78);
      iVar1 = FUN_140c6acf0(param_1[4],*(undefined8 *)(param_2 + 0x20));
      if (iVar1 != 0) {
        uVar3 = FUN_140c6b5e0(s_default_1413cbd28);
        iVar1 = FUN_140c6acf0(param_1[4],uVar3);
        if (iVar1 != 0) {
          if (*(longlong *)(param_2 + 0x40) == 0) {
            param_1[9] = (longlong)&LAB_140d6d850;
          }
          else {
            param_1[9] = *(longlong *)(param_2 + 0x40);
          }
          if (*(longlong *)(param_2 + 0x38) == 0) {
            param_1[8] = (longlong)&LAB_140c69e80;
          }
          else {
            param_1[8] = *(longlong *)(param_2 + 0x38);
          }
          if (*(longlong *)(param_2 + 0x30) == 0) {
            param_1[7] = (longlong)&LAB_140d6d830;
          }
          else {
            param_1[7] = *(longlong *)(param_2 + 0x30);
          }
          if (*(longlong *)(param_2 + 0x28) == 0) {
            param_1[6] = (longlong)FUN_140d6ef70;
          }
          else {
            param_1[6] = *(longlong *)(param_2 + 0x28);
          }
          if (*(longlong *)(param_2 + 0x48) == 0) {
            param_1[10] = (longlong)&LAB_140d6e150;
          }
          else {
            param_1[10] = *(longlong *)(param_2 + 0x48);
          }
          if (*(longlong *)(param_2 + 0x50) == 0) {
            param_1[0xb] = 0;
          }
          else {
            param_1[0xb] = *(longlong *)(param_2 + 0x50);
          }
          if (*(longlong *)(param_2 + 0x58) == 0) {
            param_1[0xc] = (longlong)&LAB_140d6ffd0;
          }
          else {
            param_1[0xc] = *(longlong *)(param_2 + 0x58);
          }
          if (*(longlong *)(param_2 + 0x60) == 0) {
            param_1[0xd] = (longlong)&LAB_140d70300;
          }
          else {
            param_1[0xd] = *(longlong *)(param_2 + 0x60);
          }
          if (*(longlong *)(param_2 + 0x68) == 0) {
            param_1[0xf] = (longlong)&LAB_140c69760;
          }
          else {
            param_1[0xf] = *(longlong *)(param_2 + 0x68);
          }
          if (*(longlong *)(param_2 + 0x70) == 0) {
            param_1[0x10] = (longlong)&LAB_140c69940;
          }
          else {
            param_1[0x10] = *(longlong *)(param_2 + 0x70);
          }
          param_1[0xe] = (longlong)&LAB_140d6e4a0;
          return 1;
        }
      }
    }
  }
  FUN_140d39f10(&DAT_1413cbd10,param_1,param_1 + 0x1a);
  if (param_1[4] != 0) {
    FUN_140c6acb0(param_1[4]);
  }
  FUN_140d6d7f0(param_1,0,0xd8);
  return 0;
}


/* address=140d6d090 name=FUN_140d6d090 */

void FUN_140d6d090(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined **)(param_1 + 0x40) = &LAB_140d6f3b0;
  return;
}


/* address=140d6d0f0 name=FUN_140d6d0f0 */

void FUN_140d6d0f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(param_1 + 0x88))(param_1);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(longlong *)(param_1 + 200) == 0) {
      FUN_140c6acb0(*(undefined8 *)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_140d6b910(*(undefined8 *)(param_1 + 0x98),FUN_140c67c40);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_140d39f10(&DAT_1413cbd10,param_1,param_1 + 0xd0);
  FUN_140d6d7f0(param_1 + 0xd0,0,8);
  return;
}


/* address=140d6d200 name=FUN_140d6d200 */

undefined4 FUN_140d6d200(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}


/* address=140d6d320 name=FUN_140d6d320 */

undefined8 FUN_140d6d320(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d78f40(*(undefined8 *)(param_1 + 0x98));
  }
  return uVar1;
}


/* address=140d6d440 name=FUN_140d6d440 */

undefined8 FUN_140d6d440(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_res18;
  int local_res20;
  longlong local_10;
  
  local_res18 = param_3;
  if (param_3 == 0) {
    local_res18 = param_2;
  }
  local_res20 = param_4;
  if (local_res18 != 0) {
    iVar1 = FUN_140d8e480(local_res18);
    if (iVar1 == -1) {
      FUN_140c6c4e0(0xb,0,0x82,s_D__a_1_s_target_release_build_bo_1413cc120,0x7ef);
      return 0;
    }
    local_10 = FUN_140d8e3b0(iVar1);
    if (*(int *)(local_10 + 4) == -1) {
      iVar1 = FUN_140d8e480(param_2);
      if (iVar1 == -1) {
        FUN_140c6c4e0(0xb,0,0x82,s_D__a_1_s_target_release_build_bo_1413cc190,0x7f6);
        return 0;
      }
      local_10 = FUN_140d8e3b0(iVar1);
    }
    if (param_4 == 0) {
      local_res20 = *(int *)(local_10 + 4);
    }
  }
  if ((local_res20 != 0) && (iVar1 = FUN_140d8d4b0(local_res20), iVar1 == -1)) {
    FUN_140c6c4e0(0xb,0,0x83,s_D__a_1_s_target_release_build_bo_1413cc200,0x803);
    return 0;
  }
  if ((local_res18 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + 0x18) == 0)) {
    *(int *)(*(longlong *)(param_1 + 0x20) + 0x18) = local_res18;
  }
  if ((local_res20 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) == 0)) {
    *(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) = local_res20;
  }
  return 1;
}


/* address=140d6d630 name=FUN_140d6d630 */

void FUN_140d6d630(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c6b230(*(undefined8 *)(param_1 + 0x20),param_3);
  return;
}


/* address=140d6d670 name=FUN_140d6d670 */

void FUN_140d6d670(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}


/* address=140d6d690 name=FUN_140d6d690 */

undefined8 FUN_140d6d690(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


/* address=140d6d6b0 name=FUN_140d6d6b0 */

void FUN_140d6d6b0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_140c6acb0(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}


/* address=140d6d700 name=FUN_140d6d700 */

undefined8 FUN_140d6d700(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c6b5e0(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c6acf0(*(undefined8 *)(param_1 + 0x20),lVar1);
  }
  return uVar2;
}


/* address=140d6d750 name=FUN_140d6d750 */

void FUN_140d6d750(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d6d770 name=FUN_140d6d770 */

void FUN_140d6d770(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d6d7a0 name=FUN_140d6d7a0 */

void FUN_140d6d7a0(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d6d7c0 name=FUN_140d6d7c0 */

void FUN_140d6d7c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d6d7f0 name=FUN_140d6d7f0 */

undefined8 FUN_140d6d7f0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d6d8f0 name=FUN_140d6d8f0 */

undefined8 FUN_140d6d8f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    uVar2 = FUN_140d6b860(param_2);
    if (uVar2 <= local_18) {
      return 0;
    }
    uVar3 = FUN_140d6b880(param_2,local_18);
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,param_3,uVar3);
    if (iVar1 != 0) break;
    local_18 = local_18 + 1;
  }
  return uVar3;
}


/* address=140d6d980 name=FUN_140d6d980 */

undefined4 FUN_140d6d980(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int local_38;
  int local_30;
  undefined4 local_2c;
  
  local_30 = 0;
  if (*(longlong *)(param_1 + 200) == 0) {
    local_2c = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x18);
  }
  else {
    local_2c = 6;
  }
  local_38 = 0;
  do {
    if (*(int *)(param_1 + 0x94) <= local_38) {
      return 1;
    }
    lVar2 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)local_38);
    if (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x10) == 0) &&
       ((*(uint *)(lVar2 + 0x2c) & 0x200) != 0)) {
      *(undefined4 *)(param_1 + 0xa4) = 0x22;
      *(int *)(param_1 + 0xa0) = local_38;
      *(longlong *)(param_1 + 0xa8) = lVar2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((0 < local_38) && (iVar1 = FUN_140d8ddc0(lVar2), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xa4) = 0x18;
      *(int *)(param_1 + 0xa0) = local_38;
      *(longlong *)(param_1 + 0xa8) = lVar2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x18)) &&
       (iVar1 = FUN_140d8ddf0(lVar2,local_2c,0 < local_38), iVar1 != 1)) {
      *(undefined4 *)(param_1 + 0xa4) = 0x1a;
      *(int *)(param_1 + 0xa0) = local_38;
      *(longlong *)(param_1 + 0xa8) = lVar2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((((1 < local_38) && ((*(uint *)(lVar2 + 0x2c) & 0x20) == 0)) &&
        (*(int *)(lVar2 + 0x28) != -1)) && (*(int *)(lVar2 + 0x28) + 1 < local_30)) {
      *(undefined4 *)(param_1 + 0xa4) = 0x19;
      *(int *)(param_1 + 0xa0) = local_38;
      *(longlong *)(param_1 + 0xa8) = lVar2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((*(uint *)(lVar2 + 0x2c) & 0x20) == 0) {
      local_30 = local_30 + 1;
    }
    local_38 = local_38 + 1;
  } while( true );
}


/* address=140d6dc30 name=FUN_140d6dc30 */

undefined8 FUN_140d6dc30(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_38;
  int local_30;
  
  bVar1 = false;
  local_38 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98));
  while (local_38 = local_38 + -1, -1 < local_38) {
    lVar3 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)local_38);
    if ((local_38 == 0) || ((*(uint *)(lVar3 + 0x2c) & 0x20) == 0)) {
      local_30 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98));
      while (local_30 = local_30 + -1, local_38 < local_30) {
        lVar4 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)local_30);
        if (*(longlong *)(lVar4 + 0x60) != 0) {
          bVar1 = true;
          iVar2 = FUN_140d893a0(lVar3);
          if (iVar2 != 0) {
            if (iVar2 == 0x11) {
              *(undefined4 *)(param_1 + 0xa4) = 0x11;
              return 0;
            }
            *(int *)(param_1 + 0xa4) = iVar2;
            *(int *)(param_1 + 0xa0) = local_38;
            *(longlong *)(param_1 + 0xa8) = lVar3;
            iVar2 = (**(code **)(param_1 + 0x38))(0);
            if (iVar2 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  lVar3 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),0);
  if (((bVar1) && (*(longlong *)(lVar3 + 0x58) == 0)) && (iVar2 = FUN_140d6f420(lVar3), iVar2 != 0))
  {
    if (iVar2 == 0x11) {
      *(undefined4 *)(param_1 + 0xa4) = 0x11;
      return 0;
    }
    *(int *)(param_1 + 0xa4) = iVar2;
    *(int *)(param_1 + 0xa0) = local_38;
    *(longlong *)(param_1 + 0xa8) = lVar3;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}


/* address=140d6de70 name=FUN_140d6de70 */

undefined8 FUN_140d6de70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 8);
  if ((*(char *)(lVar1 + 0x68) != '\0') && (iVar3 = FUN_140d6f4f0(param_1,0x41), iVar3 == 0)) {
    return 0;
  }
  if (((*(longlong *)(lVar1 + 0x30) != 0) && (iVar3 = FUN_140d6f550(uVar2,lVar1), iVar3 < 1)) &&
     (iVar3 = FUN_140d6f4f0(param_1,0x3e), iVar3 == 0)) {
    return 0;
  }
  if (((*(longlong *)(lVar1 + 0x48) != 0) &&
      (iVar3 = FUN_140d903f0(uVar2,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),0),
      iVar3 < 1)) && (iVar3 = FUN_140d6f4f0(param_1,0x3f), iVar3 == 0)) {
    return 0;
  }
  if (((*(longlong *)(lVar1 + 0x58) != 0) &&
      (iVar3 = FUN_140d90470(uVar2,*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x60),0),
      iVar3 < 1)) && (iVar3 = FUN_140d6f4f0(param_1,0x40), iVar3 == 0)) {
    return 0;
  }
  return 1;
}


/* address=140d6dfa0 name=FUN_140d6dfa0 */

undefined8 FUN_140d6dfa0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong local_18;
  
  for (local_18 = (ulonglong)*(int *)(param_1 + 0x94);
      uVar2 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98)), local_18 < uVar2;
      local_18 = local_18 + 1) {
    uVar3 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),local_18);
    iVar1 = FUN_140d8d360(uVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),0);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0xa0) = (undefined4)local_18;
      *(undefined8 *)(param_1 + 0xa8) = uVar3;
      *(undefined4 *)(param_1 + 0xa4) = 0x1c;
      iVar1 = (**(code **)(param_1 + 0x38))(0);
      if (iVar1 == 0) {
        return 2;
      }
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) != 0) {
    iVar1 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98));
    if (*(int *)(param_1 + 0x94) < iVar1) {
      return 1;
    }
    uVar3 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),0);
    lVar4 = FUN_140d6f2c0(param_1,uVar3);
    if (lVar4 != 0) {
      FUN_140d6b8b0(*(undefined8 *)(param_1 + 0x98),0,lVar4);
      FUN_140c67c40(uVar3);
      *(undefined4 *)(param_1 + 0x94) = 0;
      return 1;
    }
  }
  return 3;
}


/* address=140d6e220 name=FUN_140d6e220 */

int FUN_140d6e220(longlong param_1)

{
  int iVar1;
  int iVar2;
  int local_38;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_38 = 0;
  local_18 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)*(int *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa8) = local_18;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  do {
    if (*(int *)(param_1 + 0xc4) == 0x807f) goto LAB_140d6e460;
    iVar1 = *(int *)(param_1 + 0xc4);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_38 = FUN_140d6e770(param_1,&local_28,&local_20,local_18);
    }
    else {
      local_38 = (**(code **)(param_1 + 0x58))(param_1,&local_28,local_18);
    }
    if (local_38 == 0) {
      *(undefined4 *)(param_1 + 0xa4) = 3;
      local_38 = (**(code **)(param_1 + 0x38))(0,param_1);
      goto LAB_140d6e460;
    }
    *(undefined8 *)(param_1 + 0xb8) = local_28;
    iVar2 = (**(code **)(param_1 + 0x60))(param_1,local_28);
    if (iVar2 == 0) {
      local_38 = 0;
      goto LAB_140d6e460;
    }
    if (local_20 == 0) {
      local_38 = 1;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x60))(param_1,local_20);
      if (iVar2 == 0) {
        local_38 = 0;
        goto LAB_140d6e460;
      }
      local_38 = (**(code **)(param_1 + 0x68))(param_1,local_20,local_18);
      if (local_38 == 0) goto LAB_140d6e460;
    }
    if ((local_38 != 2) &&
       (local_38 = (**(code **)(param_1 + 0x68))(param_1,local_28,local_18), local_38 == 0))
    goto LAB_140d6e460;
    FUN_140d8be20(local_28);
    FUN_140d8be20(local_20);
    local_28 = 0;
    local_20 = 0;
  } while (iVar1 != *(int *)(param_1 + 0xc4));
  *(undefined4 *)(param_1 + 0xa4) = 3;
  local_38 = (**(code **)(param_1 + 0x38))(0,param_1);
LAB_140d6e460:
  FUN_140d8be20(local_28);
  FUN_140d8be20(local_20);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return local_38;
}


/* address=140d6e5a0 name=FUN_140d6e5a0 */

uint FUN_140d6e5a0(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint local_28;
  uint local_24;
  uint local_20 [2];
  undefined8 local_18;
  
  local_28 = 0;
  local_24 = *param_3;
  if ((*(uint *)(param_4 + 0x30) & 2) == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) == 0) {
      if ((*(uint *)(param_4 + 0x30) & 0x60) != 0) {
        return 0;
      }
    }
    else if ((*(uint *)(param_4 + 0x30) & 0x40) == 0) {
      if (*(longlong *)(param_4 + 0x40) != 0) {
        return 0;
      }
    }
    else if ((*(uint *)(param_4 + 0x34) & ~local_24) == 0) {
      return 0;
    }
    local_18 = FUN_140d8b660(param_4);
    uVar2 = FUN_140d78fe0(param_5);
    iVar1 = FUN_140d79480(uVar2,local_18);
    if (iVar1 == 0) {
      local_28 = local_28 | 0x20;
    }
    else if ((*(uint *)(param_4 + 0x30) & 0x20) == 0) {
      return 0;
    }
    if ((*(uint *)(param_4 + 0x1c) & 0x200) == 0) {
      local_28 = local_28 | 0x100;
    }
    iVar1 = FUN_140d6f650(param_1,param_4,0);
    if (iVar1 != 0) {
      local_28 = local_28 | 0x40;
    }
    FUN_140d6ea30(param_1,param_4,param_2,&local_28);
    if ((local_28 & 4) == 0) {
      local_28 = 0;
    }
    else {
      iVar1 = FUN_140d6ec80(param_5,param_4,local_28,local_20);
      if (iVar1 != 0) {
        if ((local_20[0] & ~local_24) == 0) {
          return 0;
        }
        local_24 = local_24 | local_20[0];
        local_28 = local_28 | 0x80;
      }
      *param_3 = local_24;
    }
  }
  else {
    local_28 = 0;
  }
  return local_28;
}


/* address=140d6e770 name=FUN_140d6e770 */

bool FUN_140d6e770(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_48 = 0;
  local_38 = 0;
  local_20 = 0;
  local_18 = FUN_140d78fe0(param_4);
  local_44 = *(undefined4 *)(param_1 + 0xc4);
  local_40 = FUN_140d6f840(param_1,&local_38,&local_20,&local_28,&local_48,&local_44,
                           *(undefined8 *)(param_1 + 0x18));
  if ((local_40 == 0) &&
     ((local_30 = (**(code **)(param_1 + 0x80))(param_1,local_18), local_30 != 0 || (local_38 == 0))
     )) {
    FUN_140d6f840(param_1,&local_38,&local_20,&local_28,&local_48,&local_44,local_30);
    FUN_140d6ba60(local_30,FUN_140d8be20);
  }
  if (local_38 != 0) {
    *(undefined8 *)(param_1 + 0xb0) = local_28;
    *(undefined4 *)(param_1 + 0xc0) = local_48;
    *(undefined4 *)(param_1 + 0xc4) = local_44;
    *param_2 = local_38;
    *param_3 = local_20;
  }
  return local_38 != 0;
}


/* address=140d6e920 name=FUN_140d6e920 */

void FUN_140d6e920(longlong param_1,undefined8 *param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  if (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x2000) != 0) &&
     (((*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x2c) | *(uint *)(param_4 + 0x1c)) & 0x1000) != 0)
     ) {
    for (local_18 = 0; uVar2 = FUN_140d6ba10(param_5), local_18 < uVar2; local_18 = local_18 + 1) {
      uVar3 = FUN_140d6ba30(param_5,local_18);
      iVar1 = FUN_140d6fbe0(uVar3,param_4);
      if (iVar1 != 0) {
        iVar1 = FUN_140d6f650(param_1,uVar3,0);
        if (iVar1 != 0) {
          *param_3 = *param_3 | 2;
        }
        FUN_140d8b5c0(uVar3);
        *param_2 = uVar3;
        return;
      }
    }
    *param_2 = 0;
  }
  return;
}


/* address=140d6ea30 name=FUN_140d6ea30 */

void FUN_140d6ea30(longlong param_1,longlong param_2,undefined8 *param_3,uint *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int local_38;
  ulonglong local_28;
  
  uVar2 = FUN_140d8b660(param_2);
  local_38 = *(int *)(param_1 + 0xa0);
  lVar3 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98));
  if ((longlong)local_38 != lVar3 + -1) {
    local_38 = local_38 + 1;
  }
  uVar4 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)local_38);
  iVar1 = FUN_140d8e010(uVar4,*(undefined8 *)(param_2 + 0x20));
  if ((iVar1 == 0) && ((*param_4 & 0x20) != 0)) {
    *param_4 = *param_4 | 0x1c;
    *param_3 = uVar4;
  }
  else {
    do {
      local_38 = local_38 + 1;
      iVar1 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98));
      if (iVar1 <= local_38) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) == 0) {
          return;
        }
        local_28 = 0;
        while( true ) {
          uVar6 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x10));
          if (uVar6 <= local_28) {
            return;
          }
          uVar4 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x10),local_28);
          uVar5 = FUN_140d79000(uVar4);
          iVar1 = FUN_140d79480(uVar5,uVar2);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_140d8e010(uVar4,*(undefined8 *)(param_2 + 0x20)), iVar1 == 0)) break;
          local_28 = local_28 + 1;
        }
        *param_3 = uVar4;
        *param_4 = *param_4 | 4;
        return;
      }
      uVar4 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)local_38);
      uVar5 = FUN_140d79000(uVar4);
      iVar1 = FUN_140d79480(uVar5,uVar2);
    } while ((iVar1 != 0) ||
            (iVar1 = FUN_140d8e010(uVar4,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0));
    *param_4 = *param_4 | 0xc;
    *param_3 = uVar4;
  }
  return;
}


/* address=140d6ec80 name=FUN_140d6ec80 */

undefined8 FUN_140d6ec80(longlong param_1,longlong param_2,uint param_3,uint *param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong local_18;
  
  if ((*(uint *)(param_2 + 0x30) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 0x2c) & 0x10) == 0) {
      if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
        return 0;
      }
    }
    else if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
      return 0;
    }
    *param_4 = *(uint *)(param_2 + 0x34);
    for (local_18 = 0; uVar2 = FUN_140d6d7a0(*(undefined8 *)(param_1 + 0x50)), local_18 < uVar2;
        local_18 = local_18 + 1) {
      puVar3 = (undefined8 *)FUN_140d6d7c0(*(undefined8 *)(param_1 + 0x50),local_18);
      iVar1 = FUN_140d6ff00(puVar3,param_2,param_3);
      if ((iVar1 != 0) &&
         ((*(longlong *)(param_2 + 0x28) == 0 ||
          (iVar1 = FUN_140d6fcd0(*puVar3,**(undefined8 **)(param_2 + 0x28)), iVar1 != 0)))) {
        *param_4 = *param_4 & *(uint *)(puVar3 + 3);
        return 1;
      }
    }
    if (((*(longlong *)(param_2 + 0x28) == 0) || (**(longlong **)(param_2 + 0x28) == 0)) &&
       ((param_3 & 0x20) != 0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140d6ede0 name=FUN_140d6ede0 */

int FUN_140d6ede0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int local_f8;
  undefined local_e8 [24];
  undefined8 local_d0;
  undefined8 local_b0;
  undefined8 local_50;
  undefined8 *local_20;
  
  if (param_1[0x19] == 0) {
    iVar1 = FUN_140d6cd20(local_e8,*param_1,param_2,param_1[2]);
    if (iVar1 == 0) {
      local_f8 = -1;
    }
    else {
      local_d0 = param_1[3];
      FUN_140d6d6b0(local_e8,param_1[4]);
      local_b0 = param_1[7];
      local_20 = param_1;
      local_f8 = FUN_140d6c200(local_e8);
      if (0 < local_f8) {
        local_f8 = FUN_140d6eef0(param_1,param_1[0x13],local_50);
      }
      FUN_140d6d0f0(local_e8);
    }
  }
  else {
    local_f8 = 0;
  }
  return local_f8;
}


/* address=140d6eef0 name=FUN_140d6eef0 */

bool FUN_140d6eef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_140d6b860(param_2);
  uVar3 = FUN_140d6b880(param_2,lVar2 + -1);
  lVar2 = FUN_140d6b860(param_3);
  uVar4 = FUN_140d6b880(param_3,lVar2 + -1);
  iVar1 = FUN_140d79430(uVar3,uVar4);
  return iVar1 == 0;
}


/* address=140d6ef70 name=FUN_140d6ef70 */

undefined4 FUN_140d6ef70(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int local_28;
  longlong local_20;
  longlong local_18;
  
  iVar1 = FUN_140d6b860(*(undefined8 *)(param_1 + 0x98));
  *(int *)(param_1 + 0xa0) = iVar1 + -1;
  local_28 = iVar1 + -1;
  local_20 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)local_28);
  iVar2 = (**(code **)(param_1 + 0x48))(param_1,local_20,local_20);
  local_18 = local_20;
  if (iVar2 == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) != 0) goto LAB_140d6f1a5;
    if (local_28 < 1) {
      *(undefined4 *)(param_1 + 0xa4) = 0x15;
      *(longlong *)(param_1 + 0xa8) = local_20;
      uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar3;
    }
    local_28 = iVar1 + -2;
    *(int *)(param_1 + 0xa0) = local_28;
    local_18 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)local_28);
  }
  while( true ) {
    if (local_28 < 0) {
      return 1;
    }
    *(int *)(param_1 + 0xa0) = local_28;
    if ((local_18 != local_20) || ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x4000) != 0))
    {
      lVar4 = FUN_140d79020(local_20);
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0xa4) = 6;
        *(longlong *)(param_1 + 0xa8) = local_20;
        iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = FUN_140d7d990(local_18,lVar4);
        if (iVar1 < 1) {
          *(undefined4 *)(param_1 + 0xa4) = 7;
          *(longlong *)(param_1 + 0xa8) = local_18;
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar1 == 0) {
            FUN_140d31750(lVar4);
            return 0;
          }
        }
      }
      FUN_140d31750(lVar4);
    }
LAB_140d6f1a5:
    iVar1 = FUN_140d703d0(param_1,local_18);
    if (iVar1 == 0) break;
    *(longlong *)(param_1 + 0xb0) = local_20;
    *(longlong *)(param_1 + 0xa8) = local_18;
    iVar1 = (**(code **)(param_1 + 0x38))(1,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    local_28 = local_28 + -1;
    if (-1 < local_28) {
      local_20 = local_18;
      local_18 = FUN_140d6b880(*(undefined8 *)(param_1 + 0x98),(longlong)local_28);
    }
  }
  return 0;
}


/* address=140d6f260 name=FUN_140d6f260 */

bool FUN_140d6f260(longlong param_1,uint *param_2)

{
  int iVar1;
  uint local_18;
  
  iVar1 = FUN_140d8e7f0(param_1);
  if (iVar1 != 0) {
    local_18 = (uint)((*(uint *)(param_1 + 0x2c) & 0x2000) != 0);
    *param_2 = local_18;
  }
  return iVar1 != 0;
}


/* address=140d6f2c0 name=FUN_140d6f2c0 */

undefined8 FUN_140d6f2c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_28;
  undefined8 local_18;
  
  local_18 = 0;
  uVar2 = FUN_140d79000(param_2);
  lVar3 = (**(code **)(param_1 + 0x78))(param_1,uVar2);
  if (lVar3 == 0) {
    local_18 = 0;
  }
  else {
    for (local_28 = 0; uVar4 = FUN_140d6b860(lVar3), local_28 < uVar4; local_28 = local_28 + 1) {
      local_18 = FUN_140d6b880(lVar3,local_28);
      iVar1 = FUN_140d79430(local_18,param_2);
      if (iVar1 == 0) break;
    }
    uVar4 = FUN_140d6b860(lVar3);
    if (local_28 < uVar4) {
      FUN_140c67ba0(local_18);
    }
    else {
      local_18 = 0;
    }
    FUN_140d6b910(lVar3,FUN_140c67c40);
  }
  return local_18;
}


/* address=140d6f420 name=FUN_140d6f420 */

undefined8 FUN_140d6f420(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_38;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar2 = FUN_140d79000(param_1);
  local_38 = -1;
  while( true ) {
    local_38 = FUN_140d69820(uVar2,0xd,local_38);
    if (local_38 == -1) {
      return 0;
    }
    local_18 = FUN_140d69930(uVar2,local_38);
    local_10 = FUN_140d69f20(local_18);
    iVar1 = FUN_140d71040(&local_20,local_10);
    if (iVar1 < 0) break;
    iVar1 = FUN_140d90c30(local_20,(longlong)iVar1);
    FUN_140c66200(local_20);
    if (iVar1 != 0) {
      return 0x43;
    }
  }
  return 0x11;
}


/* address=140d6f4f0 name=FUN_140d6f4f0 */

void FUN_140d6f4f0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  (**(code **)(param_1 + 0x38))(0,param_1);
  return;
}


/* address=140d6f550 name=FUN_140d6f550 */

bool FUN_140d6f550(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  char *_Str;
  size_t sVar3;
  ulonglong local_30;
  
  uVar2 = FUN_140d6b7c0(*(undefined8 *)(param_2 + 0x30));
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_140c66200(*(undefined8 *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  local_30 = 0;
  while( true ) {
    if (uVar2 <= local_30) {
      return uVar2 == 0;
    }
    _Str = (char *)FUN_140d6b7e0(*(undefined8 *)(param_2 + 0x30),local_30);
    sVar3 = strlen(_Str);
    iVar1 = FUN_140d90370(param_1,_Str,sVar3,*(undefined4 *)(param_2 + 0x38),param_2 + 0x40);
    if (0 < iVar1) break;
    local_30 = local_30 + 1;
  }
  return true;
}


/* address=140d6f650 name=FUN_140d6f650 */

undefined8 FUN_140d6f650(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_10;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x200000) != 0) {
    return 1;
  }
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0xb8) = param_2;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 2) == 0) {
    local_10 = FUN_140d6b7a0(0);
  }
  else {
    local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
  }
  uVar3 = FUN_140d8b620(param_2);
  iVar1 = FUN_140d6baf0(uVar3,local_10);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0xf;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (0 < iVar1) {
    if (param_3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0xb;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  lVar4 = FUN_140d8b640(param_2);
  if (lVar4 != 0) {
    uVar3 = FUN_140d8b640(param_2);
    iVar1 = FUN_140d6baf0(uVar3,local_10);
    if (iVar1 == 0) {
      if (param_3 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xa4) = 0x10;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if ((iVar1 < 0) && ((*(uint *)(param_1 + 0xc0) & 2) == 0)) {
      if (param_3 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xa4) = 0xc;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  return 1;
}


/* address=140d6f840 name=FUN_140d6f840 */

bool FUN_140d6f840(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  int *param_5,undefined4 *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  int local_38;
  int local_34;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = *param_5;
  local_44 = 0;
  local_18 = *(undefined8 *)(param_1 + 0xa8);
  local_50 = 0;
  local_28 = 0;
  local_20 = 0;
  local_40 = 0;
  do {
    uVar3 = FUN_140d6ba10(param_7);
    if (uVar3 <= local_40) {
      if (local_50 != 0) {
        if (*param_2 != 0) {
          FUN_140d8be20(*param_2);
        }
        *param_2 = local_50;
        *param_4 = local_20;
        *param_5 = local_58;
        *param_6 = local_44;
        FUN_140d8b5c0(local_50);
        if (*param_3 != 0) {
          FUN_140d8be20(*param_3);
          *param_3 = 0;
        }
        FUN_140d6e920(param_1,param_3,param_5,local_50,param_7);
      }
      return 0x1bf < local_58;
    }
    local_30 = FUN_140d6ba30(param_7,local_40);
    local_48 = *param_6;
    iVar1 = FUN_140d6e5a0(param_1,&local_28,&local_48,local_30,local_18);
    if ((local_58 <= iVar1) && (iVar1 != 0)) {
      if ((iVar1 == local_58) && (local_50 != 0)) {
        local_10 = FUN_140d8b620(local_30);
        uVar4 = FUN_140d8b620(local_50);
        iVar2 = FUN_140d32c60(&local_38,&local_34,uVar4,local_10);
        if ((iVar2 == 0) || ((local_38 < 1 && (local_34 < 1)))) goto LAB_140d6f8ab;
      }
      local_50 = local_30;
      local_20 = local_28;
      local_44 = local_48;
      local_58 = iVar1;
    }
LAB_140d6f8ab:
    local_40 = local_40 + 1;
  } while( true );
}


/* address=140d6fab0 name=FUN_140d6fab0 */

undefined8 FUN_140d6fab0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_20;
  longlong local_18;
  
  iVar1 = FUN_140dc69e0(param_1,param_3,0xffffffff);
  if (iVar1 < 0) {
    local_18 = 0;
  }
  else {
    iVar2 = FUN_140dc69e0(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return 0;
    }
    uVar3 = FUN_140dc6aa0(param_1,iVar1);
    local_18 = FUN_140ddc040(uVar3);
  }
  iVar1 = FUN_140dc69e0(param_2,param_3,0xffffffff);
  if (iVar1 < 0) {
    local_20 = 0;
  }
  else {
    iVar2 = FUN_140dc69e0(param_2,param_3,iVar1);
    if (iVar2 != -1) {
      return 0;
    }
    uVar3 = FUN_140dc6aa0(param_2,iVar1);
    local_20 = FUN_140ddc040(uVar3);
  }
  if ((local_18 == 0) && (local_20 == 0)) {
    uVar3 = 1;
  }
  else if ((local_18 == 0) || (local_20 == 0)) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_140ddbe50(local_18,local_20);
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140d6fbe0 name=FUN_140d6fbe0 */

undefined8 FUN_140d6fbe0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar2 = 0;
  }
  else if (*(longlong *)(param_2 + 0x38) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d8b660(param_1);
    uVar3 = FUN_140d8b660(param_2);
    iVar1 = FUN_140d79480(uVar3,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_140d6fab0(param_1,param_2,0x5a);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_140d6fab0(param_1,param_2,0x302);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          iVar1 = FUN_140d72950(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x38));
          if (iVar1 < 1) {
            iVar1 = FUN_140d72950(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
            if (iVar1 < 1) {
              uVar2 = 0;
            }
            else {
              uVar2 = 1;
            }
          }
          else {
            uVar2 = 0;
          }
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* address=140d6fcd0 name=FUN_140d6fcd0 */

undefined8 FUN_140d6fcd0(int *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_28 = 0;
  local_30 = 0;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 1;
  }
  if (*param_1 == 1) {
    if (*(longlong *)(param_1 + 4) == 0) {
      return 0;
    }
    if (*param_2 == 1) {
      if (*(longlong *)(param_2 + 4) == 0) {
        return 0;
      }
      iVar1 = FUN_140d79480(*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_2 + 4));
      if (iVar1 != 0) {
        return 0;
      }
      return 1;
    }
    local_28 = *(longlong *)(param_1 + 4);
    local_30 = *(undefined8 *)(param_2 + 2);
  }
  else if (*param_2 == 1) {
    if (*(longlong *)(param_2 + 4) == 0) {
      return 0;
    }
    local_30 = *(undefined8 *)(param_1 + 2);
    local_28 = *(longlong *)(param_2 + 4);
  }
  if (local_28 == 0) {
    for (local_38 = 0; uVar2 = FUN_140d6d750(*(undefined8 *)(param_1 + 2)), local_38 < uVar2;
        local_38 = local_38 + 1) {
      uVar4 = FUN_140d6d770(*(undefined8 *)(param_1 + 2),local_38);
      for (local_20 = 0; uVar2 = FUN_140d6d750(*(undefined8 *)(param_2 + 2)), local_20 < uVar2;
          local_20 = local_20 + 1) {
        uVar5 = FUN_140d6d770(*(undefined8 *)(param_2 + 2),local_20);
        iVar1 = FUN_140d74fe0(uVar4,uVar5);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  else {
    for (local_38 = 0; uVar2 = FUN_140d6d750(local_30), local_38 < uVar2; local_38 = local_38 + 1) {
      piVar3 = (int *)FUN_140d6d770(local_30,local_38);
      if ((*piVar3 == 4) &&
         (iVar1 = FUN_140d79480(local_28,*(undefined8 *)(piVar3 + 2)), iVar1 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}


/* address=140d6ff00 name=FUN_140d6ff00 */

bool FUN_140d6ff00(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int *piVar4;
  bool bVar5;
  ulonglong local_20;
  
  uVar2 = FUN_140d8b660(param_2);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    bVar5 = (param_3 & 0x20) != 0;
  }
  else {
    for (local_20 = 0; uVar3 = FUN_140d6d750(*(undefined8 *)(param_1 + 0x10)), local_20 < uVar3;
        local_20 = local_20 + 1) {
      piVar4 = (int *)FUN_140d6d770(*(undefined8 *)(param_1 + 0x10),local_20);
      if ((*piVar4 == 4) && (iVar1 = FUN_140d79480(*(undefined8 *)(piVar4 + 2),uVar2), iVar1 == 0))
      {
        return true;
      }
    }
    bVar5 = false;
  }
  return bVar5;
}


/* address=140d703d0 name=FUN_140d703d0 */

undefined8 FUN_140d703d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_10;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x200000) == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 2) == 0) {
      local_10 = FUN_140d6b7a0(0);
    }
    else {
      local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
    }
    uVar3 = FUN_140d32b00(param_2);
    iVar1 = FUN_140d6baf0(uVar3,local_10);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0xd;
      *(undefined8 *)(param_1 + 0xa8) = param_2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (0 < iVar1) {
      *(undefined4 *)(param_1 + 0xa4) = 9;
      *(undefined8 *)(param_1 + 0xa8) = param_2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = FUN_140d32b20(param_2);
    iVar1 = FUN_140d6baf0(uVar3,local_10);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0xe;
      *(undefined8 *)(param_1 + 0xa8) = param_2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0xa4) = 10;
      *(undefined8 *)(param_1 + 0xa8) = param_2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


/* address=140d70570 name=FUN_140d70570 */

undefined4 * FUN_140d70570(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140c660d0(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = param_1;
    *(undefined8 *)(puVar1 + 2) = 0;
    puVar1[4] = 0;
  }
  return puVar1;
}


/* address=140d705e0 name=FUN_140d705e0 */

void FUN_140d705e0(void)

{
  FUN_140d70570(4);
  return;
}


/* address=140d70600 name=FUN_140d70600 */

void FUN_140d70600(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c66200(*(undefined8 *)(param_1 + 8));
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140d70640 name=FUN_140d70640 */

undefined8 FUN_140d70640(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_140d708c0(param_1,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(int *)(param_1 + 4) = param_2[1];
      *(int *)(param_1 + 0x10) = param_2[4];
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d706b0 name=FUN_140d706b0 */

longlong FUN_140d706b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140d705e0();
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      iVar1 = FUN_140d70640(lVar2,param_1);
      if (iVar1 == 0) {
        FUN_140d70600(lVar2);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


/* address=140d70730 name=FUN_140d70730 */

undefined8 FUN_140d70730(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=140d70770 name=FUN_140d70770 */

undefined4 FUN_140d70770(undefined4 *param_1)

{
  return *param_1;
}


/* address=140d70790 name=FUN_140d70790 */

int FUN_140d70790(int *param_1,int *param_2)

{
  int iVar1;
  byte local_18;
  byte local_17 [3];
  int local_14;
  int local_10;
  
  local_14 = *param_1;
  local_10 = *param_2;
  local_18 = 0;
  local_17[0] = 0;
  if (param_1[1] == 3) {
    local_14 = FUN_140d87830(param_1,&local_18);
  }
  if (param_2[1] == 3) {
    local_10 = FUN_140d87830(param_2,local_17);
  }
  if (local_14 < local_10) {
    iVar1 = -1;
  }
  else if (local_10 < local_14) {
    iVar1 = 1;
  }
  else if (local_17[0] < local_18) {
    iVar1 = -1;
  }
  else if (local_18 < local_17[0]) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_140d70ec0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2),
                          (longlong)local_14);
    if (iVar1 == 0) {
      if (param_1[1] < param_2[1]) {
        iVar1 = -1;
      }
      else if (param_2[1] < param_1[1]) {
        iVar1 = 1;
      }
      else {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}


/* address=140d708c0 name=FUN_140d708c0 */

undefined8 FUN_140d708c0(int *param_1,char *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong local_28;
  
  local_28 = param_3;
  if ((longlong)param_3 < 0) {
    if (param_2 == (char *)0x0) {
      return 0;
    }
    local_28 = strlen(param_2);
  }
  if ((local_28 < 0x80000000) && (local_28 <= local_28 + 1)) {
    if ((*param_1 <= (int)local_28) || (*(longlong *)(param_1 + 2) == 0)) {
      lVar1 = *(longlong *)(param_1 + 2);
      if (lVar1 == 0) {
        uVar2 = FUN_140c660d0(local_28 + 1);
        *(undefined8 *)(param_1 + 2) = uVar2;
      }
      else {
        uVar2 = FUN_140c662b0(lVar1,local_28 + 1);
        *(undefined8 *)(param_1 + 2) = uVar2;
      }
      if (*(longlong *)(param_1 + 2) == 0) {
        *(longlong *)(param_1 + 2) = lVar1;
        return 0;
      }
    }
    *param_1 = (int)local_28;
    if (param_2 != (char *)0x0) {
      FUN_140d70f00(*(undefined8 *)(param_1 + 2),param_2,local_28);
      *(undefined *)(*(longlong *)(param_1 + 2) + local_28) = 0;
    }
    uVar2 = 1;
  }
  else {
    FUN_140c6c4e0(0xc,0,0x45,s_D__a_1_s_target_release_build_bo_1413cc430,0x117);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d70a30 name=FUN_140d70a30 */

void FUN_140d70a30(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140c66200(*(undefined8 *)(param_1 + 2));
  *(undefined8 *)(param_1 + 2) = param_2;
  *param_1 = param_3;
  return;
}


/* address=140d70a80 name=FUN_140d70a80 */

uint FUN_140d70a80(undefined8 *param_1,undefined4 *param_2,uint *param_3,uint *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined local_28 [16];
  undefined local_18 [24];
  
  if (param_5 < 0) {
    FUN_140c6c4e0(0xc,0,0x7b,s_D__a_1_s_target_release_build_bo_1413cc2e0,0x6e);
  }
  else {
    FUN_140d35430(local_18,*param_1,(longlong)param_5);
    iVar1 = FUN_140d35d50(local_18,local_28,&local_38);
    if ((iVar1 != 0) && (uVar3 = FUN_140d354c0(local_28), uVar3 < 0x40000000)) {
      local_30 = (local_38 & 0xc0000000) >> 0x18;
      local_2c = (local_38 & 0x20000000) >> 0x18;
      local_34 = local_38 & 0x1fffffff;
      if ((local_30 == 0) && (0xff < local_34)) {
        FUN_140c6c4e0(0xc,0,0x7b,s_D__a_1_s_target_release_build_bo_1413cc3c0,0x84);
        return 0x80;
      }
      uVar4 = FUN_140d354a0(local_28);
      *param_1 = uVar4;
      uVar2 = FUN_140d354c0(local_28);
      *param_2 = uVar2;
      *param_3 = local_34;
      *param_4 = local_30;
      return local_2c;
    }
    FUN_140c6c4e0(0xc,0,0x7b,s_D__a_1_s_target_release_build_bo_1413cc350,0x79);
  }
  return 0x80;
}


/* address=140d70c00 name=FUN_140d70c00 */

void FUN_140d70c00(byte **param_1,int param_2,undefined4 param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  int local_res20;
  int local_28;
  int local_24;
  byte local_20;
  byte *local_18 [3];
  
  local_18[0] = *param_1;
  if (param_2 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = 0x20;
  }
  local_20 = local_20 | param_5 & 0xc0;
  if (param_4 < 0x1f) {
    *local_18[0] = local_20 | (byte)param_4 & 0x1f;
    local_18[0] = local_18[0] + 1;
  }
  else {
    *local_18[0] = local_20 | 0x1f;
    local_28 = 0;
    for (local_24 = param_4; iVar1 = local_28, local_res20 = param_4, 0 < local_24;
        local_24 = local_24 >> 7) {
      local_28 = local_28 + 1;
    }
    while (iVar2 = local_28 + -1, 0 < local_28) {
      local_18[0][(longlong)iVar2 + 1] = (byte)local_res20 & 0x7f;
      if (iVar2 != iVar1 + -1) {
        local_18[0][(longlong)iVar2 + 1] = local_18[0][(longlong)iVar2 + 1] | 0x80;
      }
      local_res20 = local_res20 >> 7;
      local_28 = iVar2;
    }
    local_18[0] = local_18[0] + (longlong)iVar1 + 1;
  }
  if (param_2 == 2) {
    *local_18[0] = 0x80;
    local_18[0] = local_18[0] + 1;
  }
  else {
    FUN_140d70f50(local_18,param_3);
  }
  *param_1 = local_18[0];
  return;
}


/* address=140d70e00 name=FUN_140d70e00 */

int FUN_140d70e00(int param_1,int param_2,int param_3)

{
  int local_res18;
  int local_18;
  int local_14;
  
  local_18 = 1;
  if (param_2 < 0) {
    local_18 = -1;
  }
  else {
    local_res18 = param_3;
    if (0x1e < param_3) {
      for (; 0 < local_res18; local_res18 = local_res18 >> 7) {
        local_18 = local_18 + 1;
      }
    }
    if (param_1 == 2) {
      local_18 = local_18 + 3;
    }
    else {
      local_18 = local_18 + 1;
      local_14 = param_2;
      if (0x7f < param_2) {
        for (; 0 < local_14; local_14 = local_14 >> 8) {
          local_18 = local_18 + 1;
        }
      }
    }
    if (local_18 < 0x7fffffff - param_2) {
      local_18 = local_18 + param_2;
    }
    else {
      local_18 = -1;
    }
  }
  return local_18;
}


/* address=140d70ec0 name=FUN_140d70ec0 */

int FUN_140d70ec0(void *param_1,void *param_2,size_t param_3)

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


/* address=140d70f00 name=FUN_140d70f00 */

undefined8 FUN_140d70f00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d70f50 name=FUN_140d70f50 */

void FUN_140d70f50(byte **param_1,int param_2)

{
  int iVar1;
  int local_res10;
  int local_28;
  int local_24;
  byte *local_18;
  
  local_18 = *param_1;
  if (param_2 < 0x80) {
    local_res10._0_1_ = (byte)param_2;
    *local_18 = (byte)local_res10;
    local_18 = local_18 + 1;
  }
  else {
    local_28 = 0;
    for (local_24 = param_2; iVar1 = local_28, 0 < local_24; local_24 = local_24 >> 8) {
      local_28 = local_28 + 1;
    }
    *local_18 = (byte)local_28 | 0x80;
    local_res10 = param_2;
    while( true ) {
      if (local_28 < 1) break;
      local_18[(longlong)(local_28 + -1) + 1] = (byte)local_res10;
      local_res10 = local_res10 >> 8;
      local_28 = local_28 + -1;
    }
    local_18 = local_18 + (longlong)iVar1 + 1;
  }
  *param_1 = local_18;
  return;
}


/* address=140d71040 name=FUN_140d71040 */

int FUN_140d71040(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *local_30;
  int local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  
  if (param_2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_140d72100(param_2[1]);
    if (iVar1 == -1) {
      FUN_140c6c4e0(0xc,0,0xb9,s_D__a_1_s_target_release_build_bo_1413cc6b0,0x17e);
      iVar1 = -1;
    }
    else {
      local_30 = local_28;
      local_20 = 0;
      local_28[0] = 0;
      local_18 = 0;
      iVar1 = FUN_140ddeb70(&local_30,*(undefined8 *)(param_2 + 2),(longlong)*param_2,iVar1,0x2000);
      if (-1 < iVar1) {
        *param_1 = local_20;
        iVar1 = local_28[0];
      }
    }
  }
  return iVar1;
}


/* address=140d71120 name=FUN_140d71120 */

void FUN_140d71120(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  int local_60;
  uint local_58;
  undefined local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_98;
  FUN_140d35430(local_50,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  iVar1 = FUN_140d36940(local_50,&local_40,0);
  if (iVar1 == 0) {
    FUN_140d33730(param_1,s_Bad_time_value_1413cc758);
  }
  else {
    local_60 = local_2c + 0x76c;
    local_68 = local_40;
    local_70 = local_3c;
    local_78 = local_38;
    iVar1 = FUN_140dde9a0(param_1,s__s__2d__02d__02d__02d__d_GMT_1413cc768,
                          (&PTR_DAT_141083200)[local_30],local_34);
    local_58 = (uint)(0 < iVar1);
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=140d71220 name=FUN_140d71220 */

void FUN_140d71220(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  int local_60;
  uint local_58;
  undefined local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_98;
  FUN_140d35430(local_50,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  iVar1 = FUN_140d36900(local_50,&local_40,0);
  if (iVar1 == 0) {
    FUN_140d33730(param_1,s_Bad_time_value_1413cc728);
  }
  else {
    local_60 = local_2c + 0x76c;
    local_68 = local_40;
    local_70 = local_3c;
    local_78 = local_38;
    iVar1 = FUN_140dde9a0(param_1,s__s__2d__02d__02d__02d__d_GMT_1413cc738,
                          (&PTR_DAT_141083200)[local_30],local_34);
    local_58 = (uint)(0 < iVar1);
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=140d71320 name=FUN_140d71320 */

undefined8 FUN_140d71320(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x17) {
    uVar1 = FUN_140d71120(param_1,param_2);
  }
  else if (*(int *)(param_2 + 4) == 0x18) {
    uVar1 = FUN_140d71220(param_1,param_2);
  }
  else {
    FUN_140d33730(param_1,s_Bad_time_value_1413cc718);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d71390 name=FUN_140d71390 */

void FUN_140d71390(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined auStack_98 [32];
  int local_78;
  int local_74;
  longlong local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_98;
  if (param_2 != (int *)0x0) {
    local_78 = 0;
    local_70 = *(longlong *)(param_2 + 2);
    for (local_74 = 0; local_74 < *param_2; local_74 = local_74 + 1) {
      if ((*(char *)(local_70 + local_74) < '\x7f') &&
         ((('\x1f' < *(char *)(local_70 + local_74) || (*(char *)(local_70 + local_74) == '\n')) ||
          (*(char *)(local_70 + local_74) == '\r')))) {
        local_68[local_78] = *(undefined *)(local_70 + local_74);
      }
      else {
        local_68[local_78] = 0x2e;
      }
      local_78 = local_78 + 1;
      if (0x4f < local_78) {
        iVar1 = FUN_140d33590(param_1,local_68,local_78);
        if (iVar1 < 1) goto LAB_140d714dd;
        local_78 = 0;
      }
    }
    if (0 < local_78) {
      FUN_140d33590(param_1,local_68,local_78);
    }
  }
LAB_140d714dd:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=140d71500 name=FUN_140d71500 */

int FUN_140d71500(longlong param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  size_t sVar2;
  char local_28 [4];
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_14;
  char *local_10;
  
  local_1c = param_2[1];
  local_24 = 0;
  if ((param_3 & 0x40) != 0) {
    local_10 = (char *)FUN_140ddeb20(local_1c);
    sVar2 = strlen(local_10);
    local_24 = local_24 + (int)sVar2;
    iVar1 = FUN_140d717e0(param_1,local_10,local_24);
    if ((iVar1 == 0) || (iVar1 = FUN_140d717e0(param_1,&DAT_1413cc5c8,1), iVar1 == 0)) {
      return -1;
    }
    local_24 = local_24 + 1;
  }
  if ((param_3 & 0x80) == 0) {
    if ((param_3 & 0x20) == 0) {
      local_20 = FUN_140d72100(local_1c);
      if ((local_20 == -1) && ((param_3 & 0x100) == 0)) {
        local_20 = 0x1001;
      }
    }
    else {
      local_20 = 0x1001;
    }
  }
  else {
    local_20 = -1;
  }
  if (local_20 == -1) {
    iVar1 = FUN_140d71fd0(param_3,param_1,param_2);
    if (iVar1 < 0) {
      local_24 = -1;
    }
    else {
      local_24 = local_24 + iVar1;
    }
  }
  else {
    local_28[0] = '\0';
    local_14 = FUN_140d71b60(*(undefined8 *)(param_2 + 2),*param_2,local_20,param_3,local_28,0);
    if (local_14 < 0) {
      local_24 = -1;
    }
    else {
      local_24 = local_24 + local_14;
      if (local_28[0] != '\0') {
        local_24 = local_24 + 2;
      }
      if ((param_1 != 0) &&
         ((((local_28[0] != '\0' && (iVar1 = FUN_140d717e0(param_1,&DAT_1413cc6a4,1), iVar1 == 0))
           || (iVar1 = FUN_140d71b60(*(undefined8 *)(param_2 + 2),*param_2,local_20,param_3,0,
                                     param_1), iVar1 < 0)) ||
          ((local_28[0] != '\0' && (iVar1 = FUN_140d717e0(param_1,&DAT_1413cc6a8,1), iVar1 == 0)))))
         ) {
        local_24 = -1;
      }
    }
  }
  return local_24;
}


/* address=140d717e0 name=FUN_140d717e0 */

undefined4 FUN_140d717e0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_140d33590(param_1,param_2,param_3), iVar1 != param_3)) {
    return 0;
  }
  return 1;
}


/* address=140d71840 name=FUN_140d71840 */

undefined4 FUN_140d71840(byte param_1)

{
  undefined4 local_18;
  
  if ((param_1 < 0x20) || (param_1 == 0x7f)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=140d71880 name=FUN_140d71880 */

void FUN_140d71880(uint param_1,uint param_2,undefined *param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  int iVar1;
  size_t sVar2;
  undefined local_res8;
  undefined auStack_58 [32];
  undefined local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_58;
  local_res8 = (undefined)param_1;
  local_38[0] = local_res8;
  if (param_1 < 0x10000) {
    if (param_1 < 0x100) {
      if (((param_2 & 4) == 0) || (param_1 < 0x80)) {
        if (((param_2 & 2) == 0) || (iVar1 = FUN_140d71840(local_res8), iVar1 == 0)) {
          if ((param_2 & 1) == 0) {
            if (((param_2 & 0xf) == 0) || (param_1 != 0x5c)) {
              iVar1 = FUN_140d717e0(param_4,local_38,1);
              if (iVar1 == 0) {
                local_2c = 0xffffffff;
              }
              else {
                local_2c = 1;
              }
              goto LAB_140d71b3b;
            }
            _snprintf(local_20,0x10,&DAT_1413cc4f8,0x5c);
          }
          else if ((param_1 == 0x5c) || (param_1 == 0x22)) {
            _snprintf(local_20,0x10,&DAT_1413cc4f0,(ulonglong)param_1);
          }
          else {
            if ((((((param_1 != 0x2c) && (param_1 != 0x2b)) && (param_1 != 0x3c)) &&
                 ((param_1 != 0x3e && (param_1 != 0x3b)))) &&
                ((param_5 == 0 || ((param_1 != 0x20 && (param_1 != 0x23)))))) &&
               ((param_6 == 0 || (param_1 != 0x20)))) {
              iVar1 = FUN_140d717e0(param_4,local_38,1);
              if (iVar1 == 0) {
                local_30 = 0xffffffff;
              }
              else {
                local_30 = 1;
              }
              goto LAB_140d71b3b;
            }
            if ((param_2 & 8) != 0) {
              if (param_3 != (undefined *)0x0) {
                *param_3 = 1;
              }
              iVar1 = FUN_140d717e0(param_4,local_38,1);
              if (iVar1 == 0) {
                local_34 = 0xffffffff;
              }
              else {
                local_34 = 1;
              }
              goto LAB_140d71b3b;
            }
            _snprintf(local_20,0x10,&DAT_1413cc4f4,(ulonglong)param_1);
          }
        }
        else {
          _snprintf(local_20,0x10,s___02X_1413cc4e8,(ulonglong)param_1);
        }
      }
      else {
        _snprintf(local_20,0x10,s___02X_1413cc4e0,(ulonglong)param_1);
      }
    }
    else {
      _snprintf(local_20,0x10,s__U_04X_1413cc4d8,(ulonglong)param_1);
    }
  }
  else {
    _snprintf(local_20,0x10,s__W_08X_1413cc4d0,(ulonglong)param_1);
  }
  sVar2 = strlen(local_20);
  local_28 = (undefined4)sVar2;
  iVar1 = FUN_140d717e0(param_4,local_20,sVar2 & 0xffffffff);
  if (iVar1 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = local_28;
  }
LAB_140d71b3b:
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=140d71b60 name=FUN_140d71b60 */

void FUN_140d71b60(longlong param_1,int param_2,int param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined auStack_d8 [32];
  uint local_b8;
  uint local_b0;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  ulonglong local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  int local_70;
  code *local_68;
  ulonglong local_60;
  undefined local_58 [16];
  undefined local_48 [48];
  undefined local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_d8;
  local_a4 = param_3;
  if (param_3 == 0x1000) {
    local_68 = FUN_140dd9cf0;
    local_a0 = 0x96;
  }
  else if (param_3 == 0x1001) {
    local_68 = (code *)&LAB_140dd9e80;
    local_a0 = 0x44;
  }
  else if (param_3 == 0x1002) {
    local_68 = FUN_140dd9ed0;
    local_a0 = 0x8e;
  }
  else {
    if (param_3 != 0x1004) {
      FID_conflict__assert((wchar_t *)&DAT_1413cc5c4,(wchar_t *)s_D_1413cc500,0x9c);
      goto LAB_140d71ecd;
    }
    local_68 = FUN_140dd9f30;
    local_a0 = 0x95;
  }
  FUN_140d35430(local_58,param_1,(longlong)param_2);
  local_a8 = 0;
  while (lVar2 = FUN_140d354c0(local_58), lVar2 != 0) {
    lVar2 = FUN_140d354a0(local_58);
    local_90 = (uint)(lVar2 == param_1);
    local_78 = local_90;
    iVar1 = (*local_68)(local_58,&local_74);
    if (iVar1 == 0) {
      local_b8 = 0xa7;
      FUN_140c6c4e0(0xc,0,local_a0,s_D__a_1_s_target_release_build_bo_1413cc5d0);
      break;
    }
    lVar2 = FUN_140d354c0(local_58);
    local_8c = (uint)(lVar2 == 0);
    local_7c = local_8c;
    if ((param_4 & 0x10) == 0) {
      local_b0 = local_8c;
      local_b8 = local_78;
      local_70 = FUN_140d71880(local_74,param_4,param_5,param_6);
      if (local_70 < 0) break;
      local_a8 = local_a8 + local_70;
    }
    else {
      FUN_140d37760(local_48,local_18,6);
      iVar1 = FUN_140dd9fd0(local_48,local_74);
      if (iVar1 == 0) {
        local_b8 = 0xb0;
        FUN_140c6c4e0(0xc,0,0x44,s_D__a_1_s_target_release_build_bo_1413cc640);
        break;
      }
      local_60 = FUN_140d37cf0(local_48);
      for (local_98 = 0; local_98 < local_60; local_98 = local_98 + 1) {
        if ((local_7c == 0) || (local_98 != local_60 - 1)) {
          local_88 = 0;
        }
        else {
          local_88 = 1;
        }
        if ((local_78 == 0) || (local_98 != 0)) {
          local_84 = 0;
        }
        else {
          local_84 = 1;
        }
        local_b0 = local_88;
        local_b8 = local_84;
        local_80 = FUN_140d71880(local_18[local_98],param_4,param_5,param_6);
        if (local_80 < 0) goto LAB_140d71ecd;
        local_a8 = local_a8 + local_80;
      }
    }
  }
LAB_140d71ecd:
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140d71ef0 name=FUN_140d71ef0 */

int FUN_140d71ef0(longlong param_1,byte *param_2,int param_3)

{
  int iVar1;
  char local_28;
  char local_27;
  byte *local_20;
  byte *local_18;
  
  if (param_1 != 0) {
    local_18 = param_2 + param_3;
    for (local_20 = param_2; local_20 != local_18; local_20 = local_20 + 1) {
      local_28 = "0123456789ABCDEF"[(int)(uint)*local_20 >> 4];
      local_27 = "0123456789ABCDEF"[(int)(*local_20 & 0xf)];
      iVar1 = FUN_140d717e0(param_1,&local_28,2);
      if (iVar1 == 0) {
        return -1;
      }
    }
  }
  return param_3 << 1;
}


/* address=140d71fd0 name=FUN_140d71fd0 */

int FUN_140d71fd0(uint param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 local_28;
  int local_20 [2];
  undefined4 *local_18;
  
  iVar1 = FUN_140d717e0(param_2,&DAT_1413cc4fc,1);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else if ((param_1 & 0x200) == 0) {
    iVar1 = FUN_140d71ef0(param_2,*(undefined8 *)(param_3 + 2),*param_3);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  else {
    local_20[0] = param_3[1];
    if (local_20[0] == 0x102) {
      local_20[0] = 2;
    }
    else if (local_20[0] == 0x10a) {
      local_20[0] = 10;
    }
    local_28 = 0;
    local_18 = param_3;
    iVar1 = FUN_140d82200(local_20,&local_28);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_140d71ef0(param_2,local_28,iVar1);
      FUN_140c66200(local_28);
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = iVar1 + 1;
      }
    }
  }
  return iVar1;
}


/* address=140d72100 name=FUN_140d72100 */

undefined8 FUN_140d72100(undefined4 param_1)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 0xc:
    uVar1 = 0x1000;
    break;
  default:
    uVar1 = 0xffffffff;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
    uVar1 = 0x1001;
    break;
  case 0x1c:
    uVar1 = 0x1004;
    break;
  case 0x1e:
    uVar1 = 0x1002;
  }
  return uVar1;
}


/* address=140d721b0 name=FUN_140d721b0 */

void FUN_140d721b0(undefined8 param_1)

{
  FUN_140d706b0(param_1);
  return;
}


/* address=140d721d0 name=FUN_140d721d0 */

int * FUN_140d721d0(int **param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  int local_38 [2];
  int *local_30;
  longlong local_28;
  undefined8 local_20;
  undefined local_18 [24];
  
  if ((param_3 < 0) || (0x3fffffff < param_3)) {
    FUN_140c6c4e0(0xc,0,0xb1,s_D__a_1_s_target_release_build_bo_1413ccaa0,0xb6);
    local_30 = (int *)0x0;
  }
  else {
    FUN_140d35430(local_18,*param_2,(longlong)param_3);
    iVar1 = FUN_140d36590(local_18,local_38);
    if (iVar1 == 0) {
      FUN_140c6c4e0(0xc,0,0xc4,s_D__a_1_s_target_release_build_bo_1413ccb00,0xbe);
      local_30 = (int *)0x0;
    }
    else {
      local_30 = (int *)0x0;
      if ((param_1 == (int **)0x0) || (*param_1 == (int *)0x0)) {
        local_30 = (int *)FUN_140d81df0();
        if (local_30 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_30 = *param_1;
      }
      if (local_38[0] == 0) {
        lVar2 = FUN_140d354c0(local_18);
        if ((lVar2 != 0) && (pcVar3 = (char *)FUN_140d354a0(local_18), *pcVar3 == '\0')) {
          FUN_140d35470(local_18,1);
        }
      }
      else {
        lVar2 = FUN_140d354c0(local_18);
        if ((lVar2 != 0) && (pcVar3 = (char *)FUN_140d354a0(local_18), *pcVar3 == -1)) {
          local_28 = FUN_140d354c0(local_18);
          local_28 = local_28 + -1;
          lVar2 = FUN_140d354a0(local_18);
          iVar1 = FUN_140d72da0(lVar2 + 1,local_28);
          if (iVar1 == 0) {
            FUN_140d35470(local_18,1);
          }
        }
      }
      local_20 = FUN_140d354c0(local_18);
      uVar4 = FUN_140d354a0(local_18);
      iVar1 = FUN_140d708c0(local_30,uVar4,local_20);
      if (iVar1 == 0) {
        if ((local_30 != (int *)0x0) && ((param_1 == (int **)0x0 || (*param_1 != local_30)))) {
          FUN_140d81e10(local_30);
        }
        local_30 = (int *)0x0;
      }
      else {
        if (local_38[0] == 0) {
          local_30[1] = 2;
        }
        else {
          local_30[1] = 0x102;
          FUN_140d72cf0(*(undefined8 *)(local_30 + 2),(longlong)*local_30);
        }
        if ((*local_30 != 0) && (**(char **)(local_30 + 2) == '\0')) {
          FID_conflict__assert((wchar_t *)s_r_1413ccc20,(wchar_t *)s_D_1413ccb60,0xea);
        }
        if ((local_38[0] != 0) && (*local_30 < 1)) {
          FID_conflict__assert((wchar_t *)s___1413ccd30,(wchar_t *)s_D_1413ccc70,0xec);
        }
        *param_2 = (longlong)param_3 + *param_2;
        if (param_1 != (int **)0x0) {
          *param_1 = local_30;
        }
      }
    }
  }
  return local_30;
}


/* address=140d724c0 name=FUN_140d724c0 */

int FUN_140d724c0(int *param_1,byte **param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte local_78 [4];
  int local_74;
  uint local_70;
  longlong local_68;
  uint local_60;
  int local_5c;
  uint local_58;
  undefined local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [32];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  FUN_140d35430(local_50,*(undefined8 *)(param_1 + 2),(longlong)*param_1);
  while ((lVar2 = FUN_140d354c0(local_50), lVar2 != 0 &&
         (pcVar3 = (char *)FUN_140d354a0(local_50), *pcVar3 == '\0'))) {
    FUN_140d35470(local_50,1);
  }
  local_60 = (uint)((param_1[1] & 0x100U) != 0);
  local_70 = local_60;
  puVar6 = local_50;
  puVar7 = local_30;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar1 = FUN_140d356c0(local_30,local_78);
  if (iVar1 == 0) {
    local_70 = 0;
    local_68 = 1;
    goto LAB_140d72648;
  }
  if (local_70 == 0) {
    local_58 = (uint)((local_78[0] & 0x80) != 0);
    local_68 = (longlong)(int)local_58;
    goto LAB_140d72648;
  }
  if (local_78[0] < 0x81) {
    if (local_78[0] == 0x80) {
      local_40 = FUN_140d354c0(local_30);
      uVar5 = FUN_140d354a0(local_30);
      iVar1 = FUN_140d72da0(uVar5,local_40);
      if (iVar1 == 0) goto LAB_140d7260a;
    }
    local_5c = 0;
  }
  else {
LAB_140d7260a:
    local_5c = 1;
  }
  local_68 = (longlong)local_5c;
LAB_140d72648:
  uVar4 = FUN_140d354c0(local_50);
  if (0x7fffffffU - local_68 < uVar4) {
    FUN_140c6c4e0(0xc,0,0x45,s_D__a_1_s_target_release_build_bo_1413cc790,0x99);
    local_74 = 0;
  }
  else {
    local_74 = FUN_140d354c0(local_50);
    local_74 = (int)local_68 + local_74;
    if (local_74 < 1) {
      FID_conflict__assert((wchar_t *)s_l_1413cc8b0,(wchar_t *)s_D_1413cc7f0,0x9d);
    }
    if (param_2 != (byte **)0x0) {
      if (local_68 != 0) {
        **param_2 = 0;
      }
      local_38 = FUN_140d354c0(local_50);
      uVar5 = FUN_140d354a0(local_50);
      FUN_140d72c20(*param_2 + local_68,uVar5,local_38);
      if (local_70 == 0) {
        if (0x7f < **param_2) {
          FID_conflict__assert((wchar_t *)s___1413cca70,(wchar_t *)s_D_1413cc9b0,0xaa);
        }
      }
      else {
        FUN_140d72cf0(*param_2,(longlong)local_74);
        if (**param_2 < 0x80) {
          FID_conflict__assert((wchar_t *)s___1413cc980,(wchar_t *)s_D_1413cc8c0,0xa8);
        }
      }
      *param_2 = *param_2 + local_74;
    }
  }
  return local_74;
}


/* address=140d72800 name=FUN_140d72800 */

void FUN_140d72800(undefined8 param_1,undefined8 param_2)

{
  FUN_140d72e00(param_1,param_2,2);
  return;
}


/* address=140d72830 name=FUN_140d72830 */

undefined8 FUN_140d72830(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 < 0) {
    iVar1 = FUN_140d72800(param_1,-param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 0x102;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = FUN_140d72800(param_1,param_2);
  }
  return uVar2;
}


/* address=140d72890 name=FUN_140d72890 */

void FUN_140d72890(undefined8 param_1,undefined8 param_2)

{
  FUN_140d72fc0(param_1,param_2,2);
  return;
}


/* address=140d728f0 name=FUN_140d728f0 */

void FUN_140d728f0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d731a0(param_1,param_2,2);
  return;
}


/* address=140d72920 name=FUN_140d72920 */

void FUN_140d72920(undefined8 param_1,undefined8 param_2)

{
  FUN_140d732b0(param_1,param_2,2);
  return;
}


/* address=140d72950 name=FUN_140d72950 */

int FUN_140d72950(longlong param_1,longlong param_2)

{
  uint uVar1;
  int local_10;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar1 == (*(uint *)(param_2 + 4) & 0x100)) {
    local_10 = FUN_140d70790(param_1,param_2);
    if (uVar1 != 0) {
      if (local_10 < 0) {
        local_10 = 1;
      }
      else if (local_10 < 1) {
        local_10 = 0;
      }
      else {
        local_10 = -1;
      }
    }
  }
  else if (uVar1 == 0) {
    local_10 = 1;
  }
  else {
    local_10 = -1;
  }
  return local_10;
}


/* address=140d729f0 name=FUN_140d729f0 */

void FUN_140d729f0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d72e00(param_1,param_2,10);
  return;
}


/* address=140d72a20 name=FUN_140d72a20 */

undefined8 FUN_140d72a20(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 < 0) {
    iVar1 = FUN_140d729f0(param_1,-param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 0x10a;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = FUN_140d729f0(param_1,param_2);
  }
  return uVar2;
}


/* address=140d72b10 name=FUN_140d72b10 */

void FUN_140d72b10(undefined8 param_1,undefined8 param_2)

{
  FUN_140d732b0(param_1,param_2,10);
  return;
}


/* address=140d72ba0 name=FUN_140d72ba0 */

void FUN_140d72ba0(undefined8 param_1)

{
  FUN_140d73130(param_1,2);
  return;
}


/* address=140d72bd0 name=FUN_140d72bd0 */

void FUN_140d72bd0(undefined8 param_1)

{
  FUN_140d73130(param_1,10);
  return;
}


/* address=140d72c00 name=FUN_140d72c00 */

ulonglong FUN_140d72c00(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=140d72c20 name=FUN_140d72c20 */

undefined8 FUN_140d72c20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d72c70 name=FUN_140d72c70 */

void FUN_140d72c70(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_140d72c20(local_18,param_1,8);
  FUN_140d72c00(local_18[0]);
  return;
}


/* address=140d72cb0 name=FUN_140d72cb0 */

void FUN_140d72cb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  local_res10[0] = FUN_140d72c00(param_2);
  FUN_140d72c20(param_1,local_res10,8);
  return;
}


/* address=140d72cf0 name=FUN_140d72cf0 */

void FUN_140d72cf0(longlong param_1,ulonglong param_2)

{
  char cVar1;
  byte local_18;
  ulonglong local_10;
  
  local_18 = 0;
  for (local_10 = param_2 - 1; local_10 < param_2; local_10 = local_10 - 1) {
    cVar1 = *(char *)(param_1 + local_10);
    *(byte *)(param_1 + local_10) = -cVar1 - local_18;
    local_18 = local_18 | cVar1 != '\0';
  }
  return;
}


/* address=140d72da0 name=FUN_140d72da0 */

undefined8 FUN_140d72da0(longlong param_1,ulonglong param_2)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 <= local_18) {
      return 1;
    }
    if (*(char *)(param_1 + local_18) != '\0') break;
    local_18 = local_18 + 1;
  }
  return 0;
}


/* address=140d72e00 name=FUN_140d72e00 */

void FUN_140d72e00(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined auStack_48 [32];
  ulonglong local_28;
  char local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_48;
  FUN_140d72cb0(local_20,param_2);
  for (local_28 = 0; (local_28 < 8 && (local_20[local_28] == '\0')); local_28 = local_28 + 1) {
  }
  iVar1 = FUN_140d708c0(param_1,local_20 + local_28,8 - local_28);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_3;
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_48);
  return;
}


/* address=140d72ec0 name=FUN_140d72ec0 */

void FUN_140d72ec0(undefined8 *param_1,int *param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined auStack_58 [32];
  undefined4 local_38;
  undefined local_28 [8];
  undefined local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_58;
  if ((param_2[1] & 0xfffffeffU) == param_3) {
    puVar3 = local_28;
    for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    if (*param_2 < 9) {
      FUN_140d72c20(local_20 + -(longlong)*param_2,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
      uVar1 = FUN_140d72c70(local_28);
      *param_1 = uVar1;
    }
    else {
      local_38 = 0x140;
      FUN_140c6c4e0(0xc,0,0xc4,s_D__a_1_s_target_release_build_bo_1413ccdd0);
    }
  }
  else {
    local_38 = 0x13b;
    FUN_140c6c4e0(0xc,0,0xc3,s_D__a_1_s_target_release_build_bo_1413ccd70);
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=140d72fc0 name=FUN_140d72fc0 */

undefined8 FUN_140d72fc0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140d72ec0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if ((*(uint *)(param_2 + 4) & 0x100) == 0) {
    uVar2 = 1;
  }
  else {
    FUN_140c6c4e0(0xc,0,0xc4,s_D__a_1_s_target_release_build_bo_1413cce30,0x14e);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d73040 name=FUN_140d73040 */

undefined8 FUN_140d73040(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong local_18;
  longlong local_10 [2];
  
  iVar1 = FUN_140d72ec0(local_10,param_2,param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (((*(uint *)(param_2 + 4) & 0x100) == 0) || (local_10[0] == 0)) {
      local_18 = local_10[0];
      bVar3 = local_10[0] < 0;
    }
    else {
      local_18 = -local_10[0];
      bVar3 = -1 < local_18;
    }
    if (bVar3) {
      FUN_140c6c4e0(0xc,0,0xc4,s_D__a_1_s_target_release_build_bo_1413cce90,0x16c);
      uVar2 = 0;
    }
    else {
      *param_1 = local_18;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d73130 name=FUN_140d73130 */

undefined4 FUN_140d73130(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    iVar1 = FUN_140d73040(&local_18,param_1,param_2);
    if (((iVar1 == 0) || (CONCAT44(uStack_14,local_18) < -0x80000000)) ||
       (0x7fffffff < CONCAT44(uStack_14,local_18))) {
      FUN_140c6c180();
      local_18 = 0xffffffff;
    }
  }
  return local_18;
}


/* address=140d731a0 name=FUN_140d731a0 */

longlong FUN_140d731a0(undefined8 param_1,longlong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  longlong local_10;
  
  local_10 = param_2;
  if (param_2 == 0) {
    local_10 = FUN_140d70570(param_3);
  }
  if (local_10 == 0) {
    FUN_140c6c4e0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413ccef0,0x19c);
  }
  else {
    iVar1 = FUN_140c8ab10(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_140c8cac0(param_1), iVar1 != 0)) {
      *(uint *)(local_10 + 4) = param_3;
    }
    else {
      *(uint *)(local_10 + 4) = param_3 | 0x100;
    }
    iVar1 = FUN_140c8a980(param_1);
    iVar2 = FUN_140d708c0(local_10,0,(longlong)iVar1);
    if ((iVar2 != 0) &&
       (iVar1 = FUN_140c8ae90(*(undefined8 *)(local_10 + 8),(longlong)iVar1,param_1), iVar1 != 0)) {
      return local_10;
    }
  }
  if (local_10 != param_2) {
    FUN_140d70600(local_10);
  }
  return 0;
}


/* address=140d732b0 name=FUN_140d732b0 */

longlong FUN_140d732b0(int *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  
  if ((param_1[1] & 0xfffffeffU) == param_3) {
    lVar1 = FUN_140c8ab50(*(undefined8 *)(param_1 + 2),(longlong)*param_1,param_2);
    if (lVar1 == 0) {
      FUN_140c6c4e0(0xc,0,0x69,s_D__a_1_s_target_release_build_bo_1413ccfb0,0x1c4);
    }
    else if ((param_1[1] & 0x100U) != 0) {
      FUN_140c8aac0(lVar1,1);
    }
  }
  else {
    FUN_140c6c4e0(0xc,0,0xc3,s_D__a_1_s_target_release_build_bo_1413ccf50,0x1be);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=140d73380 name=FUN_140d73380 */

undefined8
FUN_140d73380(undefined4 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 local_res18;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  if (param_3 < 0x80000000) {
    local_30 = param_5;
    local_res18 = (undefined4)param_3;
    local_24 = local_res18;
    local_18 = 0xd;
    local_38 = param_4;
    local_28 = param_1;
    local_20 = param_2;
    uVar1 = FUN_140d6a3e0(&local_38);
  }
  else {
    FUN_140c6c4e0(0xc,0,0xad,s_D__a_1_s_target_release_build_bo_1413cd3c0,0xde);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140d73420 name=FUN_140d73420 */

void FUN_140d73420(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)(param_1 + 4) & 4) != 0) {
      FUN_140c66200(*param_1);
      FUN_140c66200(param_1[1]);
      param_1[1] = 0;
      *param_1 = 0;
    }
    if ((*(uint *)(param_1 + 4) & 8) != 0) {
      FUN_140c66200(param_1[3]);
      param_1[3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      FUN_140c66200(param_1);
    }
  }
  return;
}


/* address=140d73710 name=FUN_140d73710 */

longlong FUN_140d73710(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  undefined local_20 [32];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (param_3 < 0) {
    FUN_140c6c4e0(0xc,0,0x92,s_D__a_1_s_target_release_build_bo_1413cd2e0,CONCAT44(uVar3,0x9f));
    lVar2 = 0;
  }
  else {
    FUN_140d35430(local_20,*param_2,(longlong)param_3);
    iVar1 = FUN_140d366c0(local_20);
    if (iVar1 == 0) {
      FUN_140c6c4e0(0xc,0,0x92,s_D__a_1_s_target_release_build_bo_1413cd350,CONCAT44(uVar3,0xa6));
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_140d73380(0,*param_2,(longlong)param_3,0,0);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_140d73420(*param_1);
          *param_1 = lVar2;
        }
        *param_2 = (longlong)param_3 + *param_2;
      }
    }
  }
  return lVar2;
}


/* address=140d73820 name=FUN_140d73820 */

void FUN_140d73820(undefined8 param_1,longlong param_2)

{
  undefined auStack_a8 [32];
  int local_88;
  char *local_80;
  undefined4 local_78;
  char *local_70;
  char local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_a8;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    FUN_140d73a10(param_1,&DAT_1413cd154);
  }
  else {
    local_80 = (char *)0x0;
    local_70 = local_68;
    local_88 = FUN_140d73950(local_68,0x50,param_2);
    if (0x4f < local_88) {
      local_80 = (char *)FUN_140c660d0((longlong)(local_88 + 1));
      if (local_80 == (char *)0x0) goto LAB_140d7392e;
      local_88 = FUN_140d73950(local_80,local_88 + 1,param_2);
      local_70 = local_80;
    }
    if (local_88 < 1) {
      local_70 = s_<INVALID>_1413cd160;
    }
    local_78 = FUN_140d73a10(param_1,local_70);
    FUN_140c66200(local_80);
  }
LAB_140d7392e:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d73950 name=FUN_140d73950 */

void FUN_140d73950(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_140d6ac30(param_1,param_2,param_3,0);
  return;
}


/* address=140d73990 name=FUN_140d73990 */

undefined8 * FUN_140d73990(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140c660d0(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 4) = 1;
  }
  return puVar1;
}


/* address=140d73a10 name=FUN_140d73a10 */

int FUN_140d73a10(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int local_18;
  int local_10;
  
  sVar2 = strlen(param_2);
  if (sVar2 < 0x80000000) {
    iVar1 = FUN_140d33590(param_1,param_2,sVar2 & 0xffffffff);
    local_10 = (int)sVar2;
    local_18 = local_10;
    if (iVar1 != local_10) {
      local_18 = -1;
    }
  }
  else {
    FUN_140c6c4e0(0xc,0,0x45,s_D__a_1_s_target_release_build_bo_1413cd0f0,0x65);
    local_18 = -1;
  }
  return local_18;
}


/* address=140d73ad0 name=FUN_140d73ad0 */

void FUN_140d73ad0(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d73af0 name=FUN_140d73af0 */

void FUN_140d73af0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d73b20 name=FUN_140d73b20 */

void FUN_140d73b20(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140d73aa0,param_2);
  return;
}


/* address=140d73b80 name=FUN_140d73b80 */

void FUN_140d73b80(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140d73b50,param_2);
  return;
}


/* address=140d73bb0 name=FUN_140d73bb0 */

void FUN_140d73bb0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  FUN_140d741b0(param_1,0,0x30);
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 8) = param_5;
  *(undefined8 *)(param_1 + 6) = param_4;
  *param_1 = param_6;
  return;
}


/* address=140d73c30 name=FUN_140d73c30 */

void FUN_140d73c30(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}


/* address=140d73c50 name=FUN_140d73c50 */

longlong FUN_140d73c50(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined *local_res10;
  undefined8 local_res20;
  undefined local_38 [56];
  
  local_res10 = param_2;
  local_res20 = param_4;
  if (param_2 == (undefined *)0x0) {
    FUN_140d73bb0(local_38,0,0,0,0,0);
    FUN_140d73c30(local_38,param_1);
    local_res10 = local_38;
  }
  uVar1 = FUN_140d74250(&local_res20);
  iVar2 = FUN_140d742f0(&local_res20);
  if (iVar2 == 0) {
    uVar3 = FUN_140d6a7e0(param_3);
    lVar4 = FUN_140d743e0(param_1,local_res10,uVar3,uVar1,local_res20);
    if (lVar4 == 0) {
      FUN_140c6c4e0(0x14,0,0x6e,s_D__a_1_s_target_release_build_bo_1413cd430,0x68);
      FUN_140c6c600(4,s_name__1413cd4a4,param_3,s___value__1413cd498,local_res20);
    }
  }
  else {
    lVar4 = FUN_140d74700(param_3,local_res20,uVar1,iVar2,local_res10);
  }
  return lVar4;
}


/* address=140d73ec0 name=FUN_140d73ec0 */

undefined8 FUN_140d73ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong local_30;
  
  lVar2 = FUN_140d75490(param_1,param_3);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    for (local_30 = 0; uVar3 = FUN_140d73ad0(lVar2), local_30 < uVar3; local_30 = local_30 + 1) {
      lVar4 = FUN_140d73af0(lVar2,local_30);
      lVar4 = FUN_140d73c50(param_1,param_2,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10)
                           );
      if ((lVar4 == 0) ||
         ((param_4 != 0 && (lVar5 = FUN_140ddc580(param_4,lVar4,0xffffffff), lVar5 == 0)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      FUN_140d80b90(lVar4);
      if (!bVar1) {
        return 0;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}


/* address=140d74140 name=FUN_140d74140 */

undefined8 FUN_140d74140(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140ddf7c0(param_1);
  if (lVar1 == 0) {
    FUN_140c6c4e0(0x14,0,0x9d,s_D__a_1_s_target_release_build_bo_1413cd760,0xe2);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d748d0(lVar1,param_1,param_2,param_3);
  }
  return uVar2;
}


/* address=140d741b0 name=FUN_140d741b0 */

undefined8 FUN_140d741b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d741f0 name=FUN_140d741f0 */

undefined8 FUN_140d741f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_140c6c4e0(0x14,0,0x93,s_D__a_1_s_target_release_build_bo_1413cd930,400);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d75490(*(undefined8 *)(param_1 + 0x28),param_2);
  }
  return uVar1;
}


/* address=140d74250 name=FUN_140d74250 */

undefined8 FUN_140d74250(char **param_1)

{
  int iVar1;
  size_t sVar2;
  char *local_18;
  
  local_18 = *param_1;
  sVar2 = strlen(local_18);
  if ((8 < sVar2) && (iVar1 = strncmp(local_18,s_critical__1413cd7c8,9), iVar1 == 0)) {
    local_18 = local_18 + 9;
    while (iVar1 = FUN_140c667f0(*local_18), iVar1 != 0) {
      local_18 = local_18 + 1;
    }
    *param_1 = local_18;
    return 1;
  }
  return 0;
}


/* address=140d742f0 name=FUN_140d742f0 */

undefined4 FUN_140d742f0(char **param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 local_18;
  char *local_10;
  
  local_10 = *param_1;
  sVar2 = strlen(local_10);
  if (sVar2 < 4) {
LAB_140d74351:
    sVar2 = strlen(local_10);
    if (4 < sVar2) {
      iVar1 = strncmp(local_10,s_ASN1__1413cd7d4,5);
      if (iVar1 == 0) {
        local_10 = local_10 + 5;
        local_18 = 2;
        goto LAB_140d74398;
      }
    }
    local_18 = 0;
  }
  else {
    iVar1 = strncmp(local_10,&DAT_1413cd514,4);
    if (iVar1 != 0) goto LAB_140d74351;
    local_10 = local_10 + 4;
    local_18 = 1;
LAB_140d74398:
    while( true ) {
      iVar1 = FUN_140c667f0(*local_10);
      if (iVar1 == 0) break;
      local_10 = local_10 + 1;
    }
    *param_1 = local_10;
  }
  return local_18;
}


/* address=140d743e0 name=FUN_140d743e0 */

undefined8
FUN_140d743e0(longlong param_1,longlong param_2,int param_3,undefined4 param_4,char *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar4;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  local_20 = 0;
  if (param_3 == 0) {
    FUN_140c6c4e0(0x14,0,0x9e,s_D__a_1_s_target_release_build_bo_1413cd4b0,CONCAT44(uVar4,0x8b));
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_140ddf7c0(param_3);
    if (lVar1 == 0) {
      FUN_140c6c4e0(0x14,0,0x9d,s_D__a_1_s_target_release_build_bo_1413cd520,CONCAT44(uVar4,0x8f));
      uVar3 = 0;
    }
    else {
      if (*(longlong *)(lVar1 + 0x48) == 0) {
        if (*(longlong *)(lVar1 + 0x38) == 0) {
          if (*(longlong *)(lVar1 + 0x58) == 0) {
            FUN_140c6c4e0(0x14,0,0x73,s_D__a_1_s_target_release_build_bo_1413cd6f0,
                          CONCAT44(uVar4,0xbd));
            uVar3 = FUN_140d6aab0(param_3);
            FUN_140c6c600(2,s_name__1413cd5f4,uVar3);
            return 0;
          }
          if (*(longlong *)(param_2 + 0x28) == 0) {
            FUN_140c6c4e0(0x14,0,0x8b,s_D__a_1_s_target_release_build_bo_1413cd680,
                          CONCAT44(uVar4,0xb6));
            return 0;
          }
          local_30 = (**(code **)(lVar1 + 0x58))(lVar1,param_2,param_5);
          if (local_30 == 0) {
            return 0;
          }
        }
        else {
          local_30 = (**(code **)(lVar1 + 0x38))(lVar1,param_2,param_5);
          if (local_30 == 0) {
            return 0;
          }
        }
      }
      else {
        if (*param_5 == '@') {
          if (param_1 == 0) {
            FUN_140c6c4e0(0x14,0,0x8b,s_D__a_1_s_target_release_build_bo_1413cd590,
                          CONCAT44(uVar4,0x99));
            return 0;
          }
          local_28 = FUN_140d75490(param_1,param_5 + 1);
        }
        else {
          local_28 = FUN_140d91410(param_5);
          local_20 = local_28;
        }
        if ((local_28 == 0) || (lVar2 = FUN_140d73ad0(local_28), lVar2 == 0)) {
          FUN_140c6c4e0(0x14,0,0x79,s_D__a_1_s_target_release_build_bo_1413cd600,
                        CONCAT44(uVar4,0xa2));
          uVar3 = FUN_140d6aab0(param_3);
          FUN_140c6c600(4,s_name__1413cd584,uVar3,s__section__1413cd668,param_5);
          FUN_140d73b20(local_20,&LAB_140d8fe00);
          return 0;
        }
        local_30 = (**(code **)(lVar1 + 0x48))(lVar1,param_2,local_28);
        FUN_140d73b20(local_20,&LAB_140d8fe00);
        if (local_30 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_140d748d0(lVar1,param_3,param_4,local_30);
      FUN_140d82cb0(local_30,*(undefined8 *)(lVar1 + 8));
    }
  }
  return uVar3;
}


/* address=140d74700 name=FUN_140d74700 */

undefined8
FUN_140d74700(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
             undefined8 param_5)

{
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  local_30 = 0;
  local_18 = 0;
  local_20 = FUN_140d6abc0(param_1,0);
  if (local_20 == 0) {
    FUN_140c6c4e0(0x14,0,0x71,s_D__a_1_s_target_release_build_bo_1413cd7e0,0x115);
    FUN_140c6c600(2,s_name__1413cd844,param_1);
  }
  else {
    if (param_4 == 1) {
      local_38 = FUN_140d909d0(param_2,&local_28);
    }
    else if (param_4 == 2) {
      local_38 = FUN_140d74980(param_2,param_5,&local_28);
    }
    if (local_38 == 0) {
      FUN_140c6c4e0(0x14,0,0x74,s_D__a_1_s_target_release_build_bo_1413cd850,0x121);
      FUN_140c6c600(2,s_value__1413cd8b4,param_2);
    }
    else if (local_28 < 0x80000000) {
      local_30 = FUN_140d815f0();
      if (local_30 != 0) {
        FUN_140d70a30(local_30,local_38,local_28 & 0xffffffff);
        local_38 = 0;
        local_18 = FUN_140ddbf30(0,local_20,param_3,local_30);
      }
    }
    else {
      FUN_140c6c4e0(0x14,0,0x45,s_D__a_1_s_target_release_build_bo_1413cd8c0,0x127);
    }
  }
  FUN_140d73420(local_20);
  FUN_140d81710(local_30);
  FUN_140c66200(local_38);
  return local_18;
}


/* address=140d748d0 name=FUN_140d748d0 */

undefined8 FUN_140d748d0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  iVar1 = FUN_140d85630(param_4,&local_18,*(undefined8 *)(param_1 + 8));
  if (iVar1 < 0) {
    local_10 = 0;
  }
  else {
    lVar2 = FUN_140d815f0();
    if (lVar2 == 0) {
      FUN_140c66200(local_18);
      local_10 = 0;
    }
    else {
      FUN_140d70a30(lVar2,local_18,iVar1);
      local_10 = FUN_140ddbeb0(0,param_2,param_3,lVar2);
      FUN_140d81710(lVar2);
    }
  }
  return local_10;
}


/* address=140d74980 name=FUN_140d74980 */

undefined8 FUN_140d74980(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_18 [3];
  
  lVar2 = FUN_140ddfed0(param_1,param_2);
  if (lVar2 == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0;
    iVar1 = FUN_140d82200(lVar2,local_18);
    FUN_140d82190(lVar2);
    if (iVar1 < 0) {
      local_18[0] = 0;
    }
    else {
      *param_3 = (longlong)iVar1;
    }
  }
  return local_18[0];
}


/* address=140d74a00 name=FUN_140d74a00 */

void FUN_140d74a00(void)

{
  FUN_140d823d0(&DAT_141083260);
  return;
}


/* address=140d74a20 name=FUN_140d74a20 */

void FUN_140d74a20(undefined8 param_1)

{
  FUN_140d82cb0(param_1,&DAT_141083260);
  return;
}


/* address=140d74af0 name=FUN_140d74af0 */

void FUN_140d74af0(void)

{
  FUN_140d823d0(&DAT_141083290);
  return;
}


/* address=140d74b10 name=FUN_140d74b10 */

void FUN_140d74b10(undefined8 param_1)

{
  FUN_140d82cb0(param_1,&DAT_141083290);
  return;
}


/* address=140d74bb0 name=FUN_140d74bb0 */

void FUN_140d74bb0(void)

{
  FUN_140d823d0(&DAT_1410832c0);
  return;
}


/* address=140d74bd0 name=FUN_140d74bd0 */

void FUN_140d74bd0(undefined8 param_1)

{
  FUN_140d82cb0(param_1,&DAT_1410832c0);
  return;
}


/* address=140d74d30 name=FUN_140d74d30 */

void FUN_140d74d30(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  switch(param_2) {
  case 0:
    *(undefined8 *)(param_1 + 2) = param_3;
    break;
  case 1:
  case 2:
  case 6:
    *(undefined8 *)(param_1 + 2) = param_3;
    break;
  case 3:
    *(undefined8 *)(param_1 + 2) = param_3;
    break;
  case 4:
    *(undefined8 *)(param_1 + 2) = param_3;
    break;
  case 5:
    *(undefined8 *)(param_1 + 2) = param_3;
    break;
  case 7:
    *(undefined8 *)(param_1 + 2) = param_3;
    break;
  case 8:
    *(undefined8 *)(param_1 + 2) = param_3;
  }
  *param_1 = param_2;
  return;
}


/* address=140d74fe0 name=FUN_140d74fe0 */

undefined8 FUN_140d74fe0(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (*param_1 != *param_2)) {
    uVar1 = 0xffffffff;
  }
  else {
    switch(*param_1) {
    case 0:
      uVar1 = FUN_140d751c0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 1:
    case 2:
    case 6:
      uVar1 = FUN_140d70790(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 3:
      uVar1 = FUN_140d70790(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 4:
      uVar1 = FUN_140d79480(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 5:
      uVar1 = FUN_140d75140(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 7:
      uVar1 = FUN_140ddbe50(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 8:
      uVar1 = FUN_140d6a5c0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    default:
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* address=140d75140 name=FUN_140d75140 */

undefined8 FUN_140d75140(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    if (*param_2 != 0) {
      return 0xffffffff;
    }
  }
  else if ((*param_2 == 0) || (iVar1 = FUN_140d70790(*param_1,*param_2), iVar1 != 0)) {
    return 0xffffffff;
  }
  uVar2 = FUN_140d70790(param_1[1],param_2[1]);
  return uVar2;
}


/* address=140d751c0 name=FUN_140d751c0 */

int FUN_140d751c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_140d6a5c0(*param_1,*param_2,param_3,param_4,0xffffffff);
    if (iVar1 == 0) {
      iVar1 = FUN_140de1970(param_1[1],param_2[1]);
    }
  }
  return iVar1;
}


/* address=140d75240 name=FUN_140d75240 */

void FUN_140d75240(void)

{
  FUN_140c74de0();
  return;
}


/* address=140d75260 name=FUN_140d75260 */

void FUN_140d75260(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140d75280 name=FUN_140d75280 */

void FUN_140d75280(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75290(param_1,param_2);
  return;
}


/* address=140d752b0 name=FUN_140d752b0 */

void FUN_140d752b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140d75490 name=FUN_140d75490 */

undefined8 FUN_140d75490(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d76500(param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}


/* address=140d754e0 name=FUN_140d754e0 */

undefined8 FUN_140d754e0(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char *local_res10;
  char *local_20;
  undefined8 local_18;
  
  local_res10 = param_2;
  if (param_2 == (char *)0x0) {
    local_res10 = "default";
  }
  FUN_140d757a0(&local_20,0,0x18);
  local_20 = local_res10;
  local_18 = param_3;
  lVar1 = FUN_140d75890(*param_1,&local_20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}


/* address=140d755c0 name=FUN_140d755c0 */

longlong FUN_140d755c0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c660d0(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d757a0(lVar1,0,0x18);
  }
  return lVar1;
}


/* address=140d75610 name=FUN_140d75610 */

int FUN_140d75610(char *param_1,char param_2,int param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int local_28;
  char *local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 == (char *)0x0) {
    FUN_140c6c4e0(0xd,0,100,s_D__a_1_s_target_release_build_bo_1413cdef0,0x303);
    iVar1 = 0;
  }
  else {
    while( true ) {
      if (param_3 != 0) {
        while ((*local_20 != '\0' && (iVar1 = FUN_140c667f0(*local_20), iVar1 != 0))) {
          local_20 = local_20 + 1;
        }
      }
      pcVar2 = (char *)FUN_140e01a10(local_20,(int)param_2);
      if ((pcVar2 == local_20) || (*local_20 == '\0')) {
        local_28 = (*param_4)(0,0,param_5);
      }
      else {
        if (pcVar2 == (char *)0x0) {
          sVar3 = strlen(local_20);
          local_18 = local_20 + (sVar3 - 1);
        }
        else {
          local_18 = pcVar2 + -1;
        }
        if (param_3 != 0) {
          while (iVar1 = FUN_140c667f0(*local_18), iVar1 != 0) {
            local_18 = local_18 + -1;
          }
        }
        local_28 = (*param_4)(local_20,local_18 + (1 - (longlong)local_20),param_5);
      }
      if (local_28 < 1) {
        return local_28;
      }
      if (pcVar2 == (char *)0x0) break;
      local_20 = pcVar2 + 1;
    }
    iVar1 = 1;
  }
  return iVar1;
}


/* address=140d757a0 name=FUN_140d757a0 */

undefined8 FUN_140d757a0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d75840 name=FUN_140d75840 */

void FUN_140d75840(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3a1e0(param_1,param_2);
  return;
}


/* address=140d75870 name=FUN_140d75870 */

void FUN_140d75870(undefined8 param_1)

{
  FUN_140d3a2c0(param_1);
  return;
}


/* address=140d75890 name=FUN_140d75890 */

void FUN_140d75890(undefined8 param_1,undefined8 param_2)

{
  FUN_140d3a390(param_1,param_2,&LAB_140d75810,&LAB_140d757e0);
  return;
}


/* address=140d758d0 name=FUN_140d758d0 */

undefined4 FUN_140d758d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_140d3a480(param_1,local_10,param_3,&LAB_140d75810,&LAB_140d757e0);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=140d75980 name=FUN_140d75980 */

void FUN_140d75980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_140d3a630(param_1,&LAB_140d75940,&local_18);
  return;
}


/* address=140d75b10 name=FUN_140d75b10 */

void FUN_140d75b10(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_140c66200(*param_1);
  }
  if (param_1[1] == 0) {
    if (param_1[2] != 0) {
      FUN_140d75260(param_1[2]);
    }
  }
  else {
    FUN_140c66200(param_1[1]);
    if (param_1[2] != 0) {
      FUN_140c66200(param_1[2]);
    }
  }
  return;
}


/* address=140d75b90 name=FUN_140d75b90 */

void FUN_140d75b90(undefined8 param_1)

{
  FUN_140d75b10(param_1);
  FUN_140c66200(param_1);
  return;
}


/* address=140d75bf0 name=FUN_140d75bf0 */

longlong * FUN_140d75bf0(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_20;
  longlong local_10 [2];
  
  bVar1 = false;
  lVar3 = FUN_140d75240();
  local_20 = (longlong *)FUN_140d755c0();
  if ((lVar3 != 0) && (local_20 != (longlong *)0x0)) {
    lVar4 = FUN_140c66520(param_2);
    *local_20 = lVar4;
    if (*local_20 != 0) {
      local_20[1] = 0;
      local_20[2] = lVar3;
      iVar2 = FUN_140d758d0(*param_1,local_10,local_20);
      if (iVar2 != 0) {
        if (local_10[0] != 0) {
          FUN_140d75b90(local_10[0]);
        }
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    if (lVar3 != 0) {
      FUN_140d75260(lVar3);
    }
    if (local_20 != (longlong *)0x0) {
      FUN_140c66200(local_20);
    }
    local_20 = (longlong *)0x0;
  }
  return local_20;
}


/* address=140d75d00 name=FUN_140d75d00 */

undefined8 FUN_140d75d00(undefined8 param_1,byte *param_2,longlong *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  longlong *plVar5;
  size_t sVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  byte *local_res20;
  byte local_78;
  int local_74;
  byte *local_68;
  char *local_50;
  byte *local_40;
  byte *local_38;
  byte *local_30;
  byte *local_28;
  
  bVar2 = 0;
  local_74 = 0;
  plVar5 = (longlong *)FUN_140d805d0();
  if (plVar5 == (longlong *)0x0) {
    uVar9 = 0;
  }
  else {
    sVar6 = strlen((char *)param_4);
    lVar7 = FUN_140d80780(plVar5,(longlong)((int)sVar6 + 1));
    local_res20 = param_4;
    if (lVar7 == 0) {
LAB_140d764d9:
      if (plVar5 != (longlong *)0x0) {
        FUN_140d80620(plVar5);
      }
      uVar9 = 0;
    }
    else {
LAB_140d75d7c:
      while( true ) {
        while ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res20 * 2) & 0x40) != 0) {
          bVar1 = *local_res20;
          pbVar4 = local_res20;
          while (((local_res20 = pbVar4 + 1,
                  (*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0 &&
                  (*local_res20 != bVar1)) &&
                 (((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res20 * 2) & 0x20) == 0
                  || (local_res20 = pbVar4 + 2,
                     (*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0)
                  )))) {
            *(byte *)(plVar5[1] + (longlong)local_74) = *local_res20;
            local_74 = local_74 + 1;
            pbVar4 = local_res20;
          }
          if (*local_res20 == bVar1) {
            local_res20 = local_res20 + 1;
          }
        }
        if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res20 * 2) & 0x400) == 0)
        break;
        bVar1 = *local_res20;
        pbVar4 = local_res20;
        while (local_res20 = pbVar4 + 1,
              (*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0) {
          if (*local_res20 == bVar1) {
            if (pbVar4[2] != bVar1) break;
            local_res20 = pbVar4 + 2;
          }
          *(byte *)(plVar5[1] + (longlong)local_74) = *local_res20;
          local_74 = local_74 + 1;
          pbVar4 = local_res20;
        }
        if (*local_res20 == bVar1) {
          local_res20 = pbVar4 + 2;
        }
      }
      if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res20 * 2) & 0x20) == 0) {
        if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res20 * 2) & 8) != 0)
        goto LAB_140d76483;
        if (*local_res20 == 0x24) {
          local_30 = (byte *)0x0;
          local_40 = local_res20 + 1;
          if (*local_40 == 0x7b) {
            bVar1 = 0x7d;
          }
          else if (*local_40 == 0x28) {
            bVar1 = 0x29;
          }
          else {
            bVar1 = 0;
          }
          if (bVar1 != 0) {
            local_40 = local_res20 + 2;
          }
          local_38 = local_40;
          local_68 = local_40;
          while ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_68 * 2) & 0x107) != 0) {
            local_68 = local_68 + 1;
          }
          local_28 = param_2;
          if ((*local_68 == 0x3a) && (local_68[1] == 0x3a)) {
            local_28 = local_40;
            local_30 = local_68;
            bVar2 = *local_68;
            *local_68 = 0;
            local_38 = local_68 + 2;
            local_68 = local_38;
            while ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_68 * 2) & 0x107) != 0)
            {
              local_68 = local_68 + 1;
            }
          }
          pbVar4 = local_68;
          bVar3 = *local_68;
          *local_68 = 0;
          if (bVar1 != 0) {
            if (bVar3 != bVar1) {
              FUN_140c6c4e0(0xd,0,0x67,s_D__a_1_s_target_release_build_bo_1413cdac0,0x13a);
              goto LAB_140d764d9;
            }
            local_68 = local_68 + 1;
          }
          local_50 = (char *)FUN_140d754e0(param_1,local_28,local_38);
          if (local_30 != (byte *)0x0) {
            *local_30 = bVar2;
          }
          *pbVar4 = bVar3;
          if (local_50 == (char *)0x0) {
            FUN_140c6c4e0(0xd,0,0x69,s_D__a_1_s_target_release_build_bo_1413cdb20,0x14d);
            goto LAB_140d764d9;
          }
          sVar6 = strlen(local_50);
          uVar8 = (sVar6 + *plVar5) - ((longlong)local_68 - (longlong)local_res20);
          if (0x10000 < uVar8) {
            FUN_140c6c4e0(0xd,0,0x6a,s_D__a_1_s_target_release_build_bo_1413cdb80,0x152);
            goto LAB_140d764d9;
          }
          lVar7 = FUN_140d80800(plVar5,uVar8);
          if (lVar7 == 0) goto LAB_140d764d9;
          for (; *local_50 != '\0'; local_50 = local_50 + 1) {
            *(char *)(plVar5[1] + (longlong)local_74) = *local_50;
            local_74 = local_74 + 1;
          }
          local_res20 = local_68;
          *pbVar4 = bVar3;
        }
        else {
          *(byte *)(plVar5[1] + (longlong)local_74) = *local_res20;
          local_74 = local_74 + 1;
          local_res20 = local_res20 + 1;
        }
        goto LAB_140d75d7c;
      }
      local_78 = local_res20[1];
      local_res20 = local_res20 + 2;
      if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)local_78 * 2) & 8) == 0) {
        if (local_78 == 0x72) {
          local_78 = 0xd;
        }
        else if (local_78 == 0x6e) {
          local_78 = 10;
        }
        else if (local_78 == 0x62) {
          local_78 = 8;
        }
        else if (local_78 == 0x74) {
          local_78 = 9;
        }
        *(byte *)(plVar5[1] + (longlong)local_74) = local_78;
        local_74 = local_74 + 1;
        goto LAB_140d75d7c;
      }
LAB_140d76483:
      *(undefined *)(plVar5[1] + (longlong)local_74) = 0;
      if (*param_3 != 0) {
        FUN_140c66200(*param_3);
      }
      *param_3 = plVar5[1];
      FUN_140c66200(plVar5);
      uVar9 = 1;
    }
  }
  return uVar9;
}


/* address=140d76500 name=FUN_140d76500 */

void FUN_140d76500(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_28 [5];
  
  FUN_140d757a0(local_28,0,0x18);
  local_28[0] = param_2;
  FUN_140d75890(*param_1,local_28);
  return;
}


/* address=140d76550 name=FUN_140d76550 */

undefined8 FUN_140d76550(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = param_2[2];
  uVar2 = FUN_140c66520(*param_2);
  *param_3 = uVar2;
  lVar3 = FUN_140d752b0(local_10,param_3);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_140d758d0(*param_1,&local_18,param_3);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (local_18 != 0) {
        FUN_140d75280(local_10,local_18);
        FUN_140d75b90(local_18);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140d765f0 name=FUN_140d765f0 */

byte * FUN_140d765f0(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  
  local_res10 = param_2;
  while (((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 0x10) != 0 &&
         ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 8) == 0))) {
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=140d76660 name=FUN_140d76660 */

byte * FUN_140d76660(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  byte *local_18;
  
  local_res10 = param_2;
  while( true ) {
    while ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) != 0) {
      if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)local_res10[1] * 2) & 8) == 0) {
        local_18 = local_res10 + 2;
      }
      else {
        local_18 = local_res10 + 1;
      }
      local_res10 = local_18;
    }
    if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 0x307) == 0) break;
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=140d76730 name=FUN_140d76730 */

byte * FUN_140d76730(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  
  local_res10 = param_2 + 1;
  while( true ) {
    if (((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0) ||
       (*local_res10 == *param_2)) {
      if (*local_res10 == *param_2) {
        local_res10 = local_res10 + 1;
      }
      return local_res10;
    }
    if (((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) != 0) &&
       (local_res10 = local_res10 + 1,
       (*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0)) break;
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=140d76820 name=FUN_140d76820 */

byte * FUN_140d76820(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte *local_res10;
  
  bVar1 = *param_2;
  local_res10 = param_2 + 1;
  while ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 8) == 0) {
    if (*local_res10 == bVar1) {
      if (local_res10[1] != bVar1) break;
      local_res10 = local_res10 + 1;
    }
    local_res10 = local_res10 + 1;
  }
  if (*local_res10 == bVar1) {
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=140d768d0 name=FUN_140d768d0 */

void FUN_140d768d0(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  byte *local_18;
  
  local_res10 = param_2;
  while( true ) {
    if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 0x800) != 0) {
      *local_res10 = 0;
      return;
    }
    if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 0x10) == 0) break;
    local_res10 = local_res10 + 1;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 0x80) != 0) {
            *local_res10 = 0;
            return;
          }
          if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 0x400) == 0)
          break;
          local_res10 = (byte *)FUN_140d76820(param_1,local_res10);
        }
        if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 0x40) == 0)
        break;
        local_res10 = (byte *)FUN_140d76730(param_1,local_res10);
      }
      if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) == 0) break;
      if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)local_res10[1] * 2) & 8) == 0) {
        local_18 = local_res10 + 2;
      }
      else {
        local_18 = local_res10 + 1;
      }
      local_res10 = local_18;
    }
    if ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0) break;
    local_res10 = local_res10 + 1;
  }
  return;
}


/* address=140d76aa0 name=FUN_140d76aa0 */

void FUN_140d76aa0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined auStack_d8 [32];
  undefined4 local_b8;
  byte *local_a8;
  int local_a0;
  int local_9c;
  longlong local_98;
  byte *local_90;
  byte *local_88;
  int local_80;
  longlong local_78;
  uint local_70;
  byte *local_68;
  byte *local_60;
  longlong local_58;
  int local_50;
  byte *local_48;
  longlong local_40;
  byte *local_38;
  byte *local_30;
  undefined8 local_28;
  char local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  local_58 = 0;
  local_88 = (byte *)0x0;
  local_78 = FUN_140d805d0();
  if (local_78 == 0) {
    local_b8 = 0x223;
    FUN_140c6c4e0(0xd,0,7,s_D__a_1_s_target_release_build_bo_1413cdbe0);
  }
  else {
    local_88 = (byte *)FUN_140c66520("default");
    if (local_88 != (byte *)0x0) {
      local_58 = FUN_140d75bf0(param_1,local_88);
      if (local_58 == 0) {
        local_b8 = 0x22e;
        FUN_140c6c4e0(0xd,0,0x68,s_D__a_1_s_target_release_build_bo_1413cdc40);
      }
      else {
        local_a0 = 0;
        local_80 = 0;
        do {
          while( true ) {
            do {
              do {
                lVar3 = FUN_140d80780(local_78,local_a0 + DAT_1410836e8);
                if (lVar3 == 0) {
                  local_b8 = 0x236;
                  FUN_140c6c4e0(0xd,0,7,s_D__a_1_s_target_release_build_bo_1413cdca0);
                  goto LAB_140d772c2;
                }
                local_a8 = (byte *)(*(longlong *)(local_78 + 8) + (longlong)local_a0);
                *local_a8 = 0;
                FUN_140d334a0(param_2,local_a8,(int)DAT_1410836e8 + -1);
                local_a8[DAT_1410836e8 + -1] = 0;
                sVar4 = strlen((char *)local_a8);
                local_50 = (int)sVar4;
                local_9c = local_50;
                if ((local_50 == 0) && (local_80 == 0)) {
                  if (local_78 != 0) {
                    FUN_140d80620(local_78);
                  }
                  if (local_88 != (byte *)0x0) {
                    FUN_140c66200(local_88);
                  }
                  goto LAB_140d7738b;
                }
                local_80 = 0;
                while ((0 < local_9c &&
                       ((local_a8[local_9c + -1] == 0xd || (local_a8[local_9c + -1] == 10))))) {
                  local_9c = local_9c + -1;
                }
                if ((local_50 == 0) || (local_9c != local_50)) {
                  local_a8[local_9c] = 0;
                  local_70 = local_70 + 1;
                }
                else {
                  local_80 = 1;
                }
                local_a0 = local_a0 + local_9c;
                local_98 = 0;
                if (((0 < local_a0) &&
                    (local_a8 = (byte *)(*(longlong *)(local_78 + 8) + (longlong)(local_a0 + -1)),
                    (*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_a8 * 2) & 0x20) != 0))
                   && ((local_a0 < 2 ||
                       ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)local_a8[-1] * 2) & 0x20)
                        == 0)))) {
                  local_a0 = local_a0 + -1;
                  local_80 = 1;
                }
              } while (local_80 != 0);
              local_a0 = 0;
              local_28 = *(undefined8 *)(local_78 + 8);
              FUN_140d768d0(param_1,local_28);
              local_68 = (byte *)FUN_140d765f0(param_1,local_28);
            } while ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_68 * 2) & 8) != 0);
            if (*local_68 == 0x5b) break;
            local_60 = (byte *)0x0;
            local_30 = local_68;
            local_90 = (byte *)FUN_140d76660(param_1,local_68);
            if ((*local_90 == ':') && (((char *)local_90)[1] == ':')) {
              *local_90 = '\0';
              local_90 = (byte *)((char *)local_90 + 2);
              local_60 = local_30;
              local_30 = local_90;
              local_90 = (byte *)FUN_140d76660(param_1,local_90);
            }
            local_a8 = (byte *)FUN_140d765f0(param_1,local_90);
            if (*local_a8 != 0x3d) {
              local_b8 = 0x297;
              FUN_140c6c4e0(0xd,0,0x66,s_D__a_1_s_target_release_build_bo_1413cddc0);
              goto LAB_140d772c2;
            }
            *local_90 = '\0';
            local_a8 = local_a8 + 1;
            local_48 = (byte *)FUN_140d765f0(param_1,local_a8);
            while ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_a8 * 2) & 8) == 0) {
              local_a8 = local_a8 + 1;
            }
            do {
              pbVar1 = local_a8;
              local_a8 = pbVar1 + -1;
              if (local_a8 == local_48) break;
            } while ((*(ushort *)(&DAT_1410834e0 + (longlong)(int)(uint)*local_a8 * 2) & 0x10) != 0)
            ;
            *pbVar1 = 0;
            local_a8 = pbVar1;
            local_98 = FUN_140d755c0();
            if (local_98 == 0) goto LAB_140d772c2;
            if (local_60 == (byte *)0x0) {
              local_60 = local_88;
            }
            uVar5 = FUN_140c66520(local_30);
            *(undefined8 *)(local_98 + 8) = uVar5;
            if ((*(longlong *)(local_98 + 8) == 0) ||
               (iVar2 = FUN_140d75d00(param_1,local_60,local_98 + 0x10,local_48), iVar2 == 0))
            goto LAB_140d772c2;
            iVar2 = strcmp((char *)local_60,(char *)local_88);
            if (iVar2 == 0) {
              local_40 = local_58;
            }
            else {
              local_40 = FUN_140d76500(param_1,local_60);
              if (local_40 == 0) {
                local_40 = FUN_140d75bf0(param_1,local_60);
              }
              if (local_40 == 0) {
                local_b8 = 0x2ba;
                FUN_140c6c4e0(0xd,0,0x68,s_D__a_1_s_target_release_build_bo_1413cde20);
                goto LAB_140d772c2;
              }
            }
            iVar2 = FUN_140d76550(param_1,local_40,local_98);
            if (iVar2 == 0) goto LAB_140d772c2;
            local_98 = 0;
          }
          local_68 = local_68 + 1;
          local_48 = (byte *)FUN_140d765f0(param_1,local_68);
          pbVar1 = local_48;
          while( true ) {
            local_38 = pbVar1;
            local_90 = (byte *)FUN_140d76660(param_1,local_38);
            local_a8 = (byte *)FUN_140d765f0(param_1,local_90);
            if (*local_a8 == 0x5d) break;
            if ((*local_a8 == 0) || (pbVar1 = local_a8, local_38 == local_a8)) {
              local_b8 = 0x27b;
              FUN_140c6c4e0(0xd,0,0x65,s_D__a_1_s_target_release_build_bo_1413cdd00);
              goto LAB_140d772c2;
            }
          }
          *local_90 = '\0';
          iVar2 = FUN_140d75d00(param_1,0,&local_88,local_48);
          if (iVar2 == 0) goto LAB_140d772c2;
          local_58 = FUN_140d76500(param_1,local_88);
          if (local_58 == 0) {
            local_58 = FUN_140d75bf0(param_1,local_88);
          }
        } while (local_58 != 0);
        local_b8 = 0x286;
        FUN_140c6c4e0(0xd,0,0x68,s_D__a_1_s_target_release_build_bo_1413cdd60);
      }
    }
  }
LAB_140d772c2:
  if (local_78 != 0) {
    FUN_140d80620(local_78);
  }
  if (local_88 != (byte *)0x0) {
    FUN_140c66200(local_88);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_70;
  }
  _snprintf(local_20,0xd,&DAT_1413cde80,(ulonglong)local_70);
  FUN_140c6c600(2,s_line_1413cde84,local_20);
  if (local_98 != 0) {
    if (*(longlong *)(local_98 + 8) != 0) {
      FUN_140c66200(*(undefined8 *)(local_98 + 8));
    }
    if (*(longlong *)(local_98 + 0x10) != 0) {
      FUN_140c66200(*(undefined8 *)(local_98 + 0x10));
    }
    if (local_98 != 0) {
      FUN_140c66200(local_98);
    }
  }
LAB_140d7738b:
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140d773b0 name=FUN_140d773b0 */

void FUN_140d773b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,ulonglong param_7,longlong param_8)

{
  int iVar1;
  undefined auStack_128 [32];
  undefined8 local_108;
  int local_f8;
  undefined local_f4;
  undefined local_f3;
  undefined uStack_f2;
  undefined uStack_f1;
  uint local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  undefined local_c8 [112];
  byte local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_128;
  local_d8 = 0;
  local_d0 = FUN_140c7f990(param_6);
  local_f8 = 1;
  FUN_140c7fcb0(local_c8);
  local_108 = 0;
  iVar1 = FUN_140c7fe50(local_c8,param_1,param_2,param_6);
  if (iVar1 != 0) {
    for (; param_7 != 0; param_7 = param_7 - local_e0) {
      local_e0 = local_d0;
      if (param_7 < local_d0) {
        local_e0 = param_7;
      }
      local_f4 = (undefined)((uint)local_f8 >> 0x18);
      local_f3 = (undefined)((uint)local_f8 >> 0x10);
      uStack_f2 = (undefined)((uint)local_f8 >> 8);
      uStack_f1 = (undefined)local_f8;
      local_108 = 0;
      iVar1 = FUN_140c7fe50(local_c8,0,0,0);
      if ((((iVar1 == 0) || (iVar1 = FUN_140c801b0(local_c8,param_3,param_4), iVar1 == 0)) ||
          (iVar1 = FUN_140c801b0(local_c8,&local_f4,4), iVar1 == 0)) ||
         (iVar1 = FUN_140c801f0(local_c8,local_58,0), iVar1 == 0)) goto LAB_140d7769f;
      FUN_140d77740(param_8);
      for (local_f0 = 1; local_f0 < param_5; local_f0 = local_f0 + 1) {
        local_108 = 0;
        iVar1 = FUN_140c7fe50(local_c8,0,0,0);
        if (((iVar1 == 0) || (iVar1 = FUN_140c801b0(local_c8,local_58), iVar1 == 0)) ||
           (iVar1 = FUN_140c801f0(local_c8), iVar1 == 0)) goto LAB_140d7769f;
        for (local_e8 = 0; local_e8 < local_e0; local_e8 = local_e8 + 1) {
          *(byte *)(param_8 + local_e8) = *(byte *)(param_8 + local_e8) ^ local_58[local_e8];
        }
      }
      param_8 = param_8 + local_e0;
      local_f8 = local_f8 + 1;
    }
    if (param_5 != 0) {
      local_d8 = 1;
    }
  }
LAB_140d7769f:
  FUN_140c7fd50(local_c8);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=140d77740 name=FUN_140d77740 */

undefined8 FUN_140d77740(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d77780 name=FUN_140d77780 */

void FUN_140d77780(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,uint param_6,undefined *param_7,undefined *param_8)

{
  int iVar1;
  bool bVar2;
  undefined auStack_b8 [32];
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined local_78 [32];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_94 = 0;
  local_84 = 0;
  local_90 = FUN_140cac200(param_1);
  local_8c = FUN_140cac220(param_1);
  if (0x40 < local_90) {
    FID_conflict__assert((wchar_t *)s_n_1413ce030,(wchar_t *)s_D_1413cdf50,0x4f);
  }
  if (0x10 < local_8c) {
    FID_conflict__assert((wchar_t *)s_n_1413ce150,(wchar_t *)s_D_1413ce070,0x50);
  }
  if (param_4 != 0) {
    FUN_140c7f200(local_78);
    do {
      iVar1 = FUN_140c7f640(local_78,param_2,0);
      if (iVar1 == 0) goto LAB_140d77a79;
      local_80 = local_88;
      iVar1 = local_88 + 1;
      bVar2 = local_88 != 0;
      local_88 = iVar1;
      if (((((bVar2) && (iVar1 = FUN_140c7f770(local_78,local_58,local_94), iVar1 == 0)) ||
           (iVar1 = FUN_140c7f770(local_78,param_4,param_5), iVar1 == 0)) ||
          ((param_3 != 0 && (iVar1 = FUN_140c7f770(local_78,param_3,8), iVar1 == 0)))) ||
         (iVar1 = FUN_140c7f7b0(local_78,local_58), iVar1 == 0)) goto LAB_140d77a79;
      for (local_98 = 1; local_98 < param_6; local_98 = local_98 + 1) {
        iVar1 = FUN_140c7f640(local_78,param_2,0);
        if (((iVar1 == 0) || (iVar1 = FUN_140c7f770(local_78,local_58,local_94), iVar1 == 0)) ||
           (iVar1 = FUN_140c7f7b0(local_78,local_58), iVar1 == 0)) goto LAB_140d77a79;
      }
      local_98 = 0;
      if (local_90 != 0) {
        for (; (local_90 != 0 && (local_98 != local_94)); local_98 = local_98 + 1) {
          if (param_7 != (undefined *)0x0) {
            *param_7 = local_58[local_98];
            param_7 = param_7 + 1;
          }
          local_90 = local_90 - 1;
        }
      }
      if ((local_8c != 0) && (local_98 != local_94)) {
        for (; (local_8c != 0 && (local_98 != local_94)); local_98 = local_98 + 1) {
          if (param_8 != (undefined *)0x0) {
            *param_8 = local_58[local_98];
            param_8 = param_8 + 1;
          }
          local_8c = local_8c - 1;
        }
      }
    } while ((local_90 != 0) || (local_8c != 0));
    local_84 = FUN_140cac200(param_1);
LAB_140d77a79:
    FUN_140c7f270(local_78);
    FUN_140c663a0(local_58,0x40);
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140d77e50 name=FUN_140d77e50 */

undefined8 FUN_140d77e50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d77ea0 name=FUN_140d77ea0 */

uint FUN_140d77ea0(uint param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f) | param_1 >> 0x20 - (param_2 & 0x1f);
}


/* address=140d77ec0 name=FUN_140d77ec0 */

void FUN_140d77ec0(longlong param_1)

{
  uint uVar1;
  undefined auStack_188 [32];
  int local_168;
  int local_164;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  uint local_58 [16];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_188;
  FUN_140d77e50(local_58,param_1,0x40);
  for (local_164 = 8; 0 < local_164; local_164 = local_164 + -2) {
    local_160 = 0x10;
    local_58[4] = FUN_140d77ea0(local_58[0] + local_58[12],7);
    local_58[4] = *(uint *)((longlong)local_58 + local_160) ^ local_58[4];
    local_158 = 0x20;
    local_58[8] = FUN_140d77ea0(local_58[4] + local_58[0],9);
    local_58[8] = *(uint *)((longlong)local_58 + local_158) ^ local_58[8];
    local_150 = 0x30;
    local_58[12] = FUN_140d77ea0(local_58[8] + local_58[4],0xd);
    local_58[12] = *(uint *)((longlong)local_58 + local_150) ^ local_58[12];
    local_148 = 0;
    local_58[0] = FUN_140d77ea0(local_58[12] + local_58[8],0x12);
    local_58[0] = *(uint *)((longlong)local_58 + local_148) ^ local_58[0];
    local_140 = 0x24;
    local_58[9] = FUN_140d77ea0(local_58[5] + local_58[1],7);
    local_58[9] = *(uint *)((longlong)local_58 + local_140) ^ local_58[9];
    local_138 = 0x34;
    local_58[13] = FUN_140d77ea0(local_58[9] + local_58[5],9);
    local_58[13] = *(uint *)((longlong)local_58 + local_138) ^ local_58[13];
    local_130 = 4;
    local_58[1] = FUN_140d77ea0(local_58[13] + local_58[9],0xd);
    local_58[1] = *(uint *)((longlong)local_58 + local_130) ^ local_58[1];
    local_128 = 0x14;
    local_58[5] = FUN_140d77ea0(local_58[1] + local_58[13],0x12);
    local_58[5] = *(uint *)((longlong)local_58 + local_128) ^ local_58[5];
    local_120 = 0x38;
    local_58[14] = FUN_140d77ea0(local_58[10] + local_58[6],7);
    local_58[14] = *(uint *)((longlong)local_58 + local_120) ^ local_58[14];
    local_118 = 8;
    local_58[2] = FUN_140d77ea0(local_58[14] + local_58[10],9);
    local_58[2] = *(uint *)((longlong)local_58 + local_118) ^ local_58[2];
    local_110 = 0x18;
    local_58[6] = FUN_140d77ea0(local_58[2] + local_58[14],0xd);
    local_58[6] = *(uint *)((longlong)local_58 + local_110) ^ local_58[6];
    local_108 = 0x28;
    local_58[10] = FUN_140d77ea0(local_58[6] + local_58[2],0x12);
    local_58[10] = *(uint *)((longlong)local_58 + local_108) ^ local_58[10];
    local_100 = 0xc;
    local_58[3] = FUN_140d77ea0(local_58[15] + local_58[11],7);
    local_58[3] = *(uint *)((longlong)local_58 + local_100) ^ local_58[3];
    local_f8 = 0x1c;
    local_58[7] = FUN_140d77ea0(local_58[3] + local_58[15],9);
    local_58[7] = *(uint *)((longlong)local_58 + local_f8) ^ local_58[7];
    local_f0 = 0x2c;
    local_58[11] = FUN_140d77ea0(local_58[7] + local_58[3],0xd);
    local_58[11] = *(uint *)((longlong)local_58 + local_f0) ^ local_58[11];
    local_e8 = 0x3c;
    local_58[15] = FUN_140d77ea0(local_58[11] + local_58[7],0x12);
    local_58[15] = *(uint *)((longlong)local_58 + local_e8) ^ local_58[15];
    local_e0 = 4;
    local_58[1] = FUN_140d77ea0(local_58[0] + local_58[3],7);
    local_58[1] = *(uint *)((longlong)local_58 + local_e0) ^ local_58[1];
    local_d8 = 8;
    local_58[2] = FUN_140d77ea0(local_58[1] + local_58[0],9);
    local_58[2] = *(uint *)((longlong)local_58 + local_d8) ^ local_58[2];
    local_d0 = 0xc;
    local_58[3] = FUN_140d77ea0(local_58[2] + local_58[1],0xd);
    local_58[3] = *(uint *)((longlong)local_58 + local_d0) ^ local_58[3];
    local_c8 = 0;
    local_58[0] = FUN_140d77ea0(local_58[3] + local_58[2],0x12);
    local_58[0] = *(uint *)((longlong)local_58 + local_c8) ^ local_58[0];
    local_c0 = 0x18;
    local_58[6] = FUN_140d77ea0(local_58[5] + local_58[4],7);
    local_58[6] = *(uint *)((longlong)local_58 + local_c0) ^ local_58[6];
    local_b8 = 0x1c;
    local_58[7] = FUN_140d77ea0(local_58[6] + local_58[5],9);
    local_58[7] = *(uint *)((longlong)local_58 + local_b8) ^ local_58[7];
    local_b0 = 0x10;
    local_58[4] = FUN_140d77ea0(local_58[7] + local_58[6],0xd);
    local_58[4] = *(uint *)((longlong)local_58 + local_b0) ^ local_58[4];
    local_a8 = 0x14;
    local_58[5] = FUN_140d77ea0(local_58[4] + local_58[7],0x12);
    local_58[5] = *(uint *)((longlong)local_58 + local_a8) ^ local_58[5];
    local_a0 = 0x2c;
    local_58[11] = FUN_140d77ea0(local_58[10] + local_58[9],7);
    local_58[11] = *(uint *)((longlong)local_58 + local_a0) ^ local_58[11];
    local_98 = 0x20;
    local_58[8] = FUN_140d77ea0(local_58[11] + local_58[10],9);
    local_58[8] = *(uint *)((longlong)local_58 + local_98) ^ local_58[8];
    local_90 = 0x24;
    local_58[9] = FUN_140d77ea0(local_58[8] + local_58[11],0xd);
    local_58[9] = *(uint *)((longlong)local_58 + local_90) ^ local_58[9];
    local_88 = 0x28;
    local_58[10] = FUN_140d77ea0(local_58[9] + local_58[8],0x12);
    local_58[10] = *(uint *)((longlong)local_58 + local_88) ^ local_58[10];
    local_80 = 0x30;
    local_58[12] = FUN_140d77ea0(local_58[15] + local_58[14],7);
    local_58[12] = *(uint *)((longlong)local_58 + local_80) ^ local_58[12];
    local_78 = 0x34;
    local_58[13] = FUN_140d77ea0(local_58[12] + local_58[15],9);
    local_58[13] = *(uint *)((longlong)local_58 + local_78) ^ local_58[13];
    local_70 = 0x38;
    local_58[14] = FUN_140d77ea0(local_58[13] + local_58[12],0xd);
    local_58[14] = *(uint *)((longlong)local_58 + local_70) ^ local_58[14];
    local_68 = 0x3c;
    uVar1 = FUN_140d77ea0(local_58[14] + local_58[13],0x12);
    local_58[15] = *(uint *)((longlong)local_58 + local_68) ^ uVar1;
  }
  for (local_168 = 0; local_168 < 0x10; local_168 = local_168 + 1) {
    *(uint *)(param_1 + (longlong)local_168 * 4) =
         *(int *)(param_1 + (longlong)local_168 * 4) + local_58[local_168];
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_188);
  return;
}


/* address=140d78b10 name=FUN_140d78b10 */

void FUN_140d78b10(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    *(uint *)(param_1 + local_18 * 4) =
         *(uint *)(param_2 + local_18 * 4) ^ *(uint *)(param_3 + local_18 * 4);
  }
  return;
}


/* address=140d78b80 name=FUN_140d78b80 */

void FUN_140d78b80(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_88 [32];
  ulonglong local_68;
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_88;
  if (param_1 == param_2) {
    FID_conflict__assert((wchar_t *)s_o_1413ce250,(wchar_t *)s_D_1413ce190,0x5c);
  }
  FUN_140d77e50(local_58,param_2 + (param_3 * 2 + -1) * 0x40,0x40);
  for (local_68 = 0; local_68 < (ulonglong)(param_3 << 1); local_68 = local_68 + 1) {
    FUN_140d78b10(local_58,local_58,param_2 + local_68 * 0x40);
    FUN_140d77ec0(local_58);
    FUN_140d77e50(param_1 + (local_68 / 2 + (local_68 & 1) * param_3) * 0x40,local_58,0x40);
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=140d78cd0 name=FUN_140d78cd0 */

void FUN_140d78cd0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  FUN_140d77e50(param_5,param_1,param_2 << 7);
  for (local_28 = 1; local_28 < param_3; local_28 = local_28 + 1) {
    FUN_140d78b80(param_5 + param_2 * 2 * local_28 * 0x40,
                  param_5 + param_2 * 2 * (local_28 - 1) * 0x40,param_2);
  }
  FUN_140d78b80(param_1,param_5 + param_2 * 2 * (param_3 - 1) * 0x40,param_2);
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    uVar1 = *(uint *)(param_1 + (param_2 * 2 + -1) * 0x40);
    for (local_30 = 0; local_30 < (ulonglong)(param_2 << 1); local_30 = local_30 + 1) {
      FUN_140d78b10(param_4 + local_30 * 0x40,param_1 + local_30 * 0x40,
                    param_5 + (param_2 * 2 * (ulonglong)(uVar1 & (int)param_3 - 1U) + local_30) *
                              0x40);
    }
    FUN_140d78b80(param_1,param_4,param_2);
  }
  return;
}


/* address=140d78ed0 name=FUN_140d78ed0 */

void FUN_140d78ed0(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d78ef0 name=FUN_140d78ef0 */

void FUN_140d78ef0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d78f20 name=FUN_140d78f20 */

void FUN_140d78f20(undefined8 param_1)

{
  FUN_140c75780(param_1);
  return;
}


/* address=140d78f40 name=FUN_140d78f40 */

longlong FUN_140d78f40(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  lVar1 = FUN_140d78f20(param_1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    for (local_18 = 0; uVar2 = FUN_140d78ed0(lVar1), local_18 < uVar2; local_18 = local_18 + 1) {
      uVar3 = FUN_140d78ef0(lVar1,local_18);
      FUN_140c67ba0(uVar3);
    }
  }
  return lVar1;
}


/* address=140d78fc0 name=FUN_140d78fc0 */

undefined8 FUN_140d78fc0(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 8);
}


/* address=140d78fe0 name=FUN_140d78fe0 */

undefined8 FUN_140d78fe0(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x18);
}


/* address=140d79000 name=FUN_140d79000 */

undefined8 FUN_140d79000(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x28);
}


/* address=140d79020 name=FUN_140d79020 */

undefined8 FUN_140d79020(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d81260(*(undefined8 *)(*param_1 + 0x30));
  }
  return uVar1;
}


/* address=140d79060 name=FUN_140d79060 */

undefined8 FUN_140d79060(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(*param_1 + 0x30) + 8);
  }
  return uVar1;
}


/* address=140d791d0 name=FUN_140d791d0 */

undefined8 FUN_140d791d0(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 8);
}


/* address=140d791f0 name=FUN_140d791f0 */

bool FUN_140d791f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_14;
  
  lVar1 = FUN_140d79020(param_1);
  if (lVar1 == 0) {
    local_14 = -2;
  }
  else {
    local_14 = FUN_140d31820(lVar1,param_2);
  }
  if (local_14 == -2) {
    FUN_140c6c4e0(0xb,0,0x80,s_D__a_1_s_target_release_build_bo_1413ce410,0x110);
  }
  else if (local_14 == -1) {
    FUN_140c6c4e0(0xb,0,0x73,s_D__a_1_s_target_release_build_bo_1413ce3a0,0x10d);
  }
  else if (local_14 == 0) {
    FUN_140c6c4e0(0xb,0,0x74,s_D__a_1_s_target_release_build_bo_1413ce330,0x10a);
  }
  if (lVar1 != 0) {
    FUN_140d31750(lVar1);
  }
  return 0 < local_14;
}


/* address=140d79360 name=FUN_140d79360 */

void FUN_140d79360(longlong *param_1,longlong *param_2)

{
  FUN_140d79480(*(undefined8 *)(*param_1 + 0x28),*(undefined8 *)(*param_2 + 0x28));
  return;
}


/* address=140d79430 name=FUN_140d79430 */

void FUN_140d79430(longlong param_1,longlong param_2)

{
  FUN_140d8e7f0(param_1);
  FUN_140d8e7f0(param_2);
  FUN_140d797b0(param_1 + 0x68,param_2 + 0x68,0x20);
  return;
}


/* address=140d79480 name=FUN_140d79480 */

ulonglong FUN_140d79480(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) &&
     (iVar1 = FUN_140d79a30(param_1,0), iVar1 < 0)) {
    return 0xfffffffe;
  }
  if (((*(longlong *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) &&
     (iVar1 = FUN_140d79a30(param_2,0), iVar1 < 0)) {
    return 0xfffffffe;
  }
  uVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x20);
  if (uVar2 == 0) {
    uVar3 = FUN_140d797b0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
                          (longlong)*(int *)(param_1 + 0x20));
  }
  else {
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}


/* address=140d79550 name=FUN_140d79550 */

void FUN_140d79550(longlong param_1)

{
  int iVar1;
  undefined auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30 [6];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_140d79a30(param_1,0);
  local_48 = FUN_140c7f0b0();
  local_40 = 0;
  iVar1 = FUN_140c7f8a0(*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20),local_30,
                        0);
  if (iVar1 != 0) {
    local_38 = local_30[0];
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_68);
  return;
}


/* address=140d79620 name=FUN_140d79620 */

void FUN_140d79620(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_68 [32];
  undefined4 local_48;
  undefined local_40 [32];
  undefined4 local_20 [4];
  ulonglong local_10;
  
  local_10 = DAT_1413d9c40 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_140d79a30(param_1,0);
  FUN_140c7f200(local_40);
  uVar2 = FUN_140c7f080();
  iVar1 = FUN_140c7f640(local_40,uVar2,0);
  if (iVar1 != 0) {
    iVar1 = FUN_140c7f770(local_40,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),
                          **(undefined8 **)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_140c7f7b0(local_40,local_20,0);
      if (iVar1 != 0) {
        local_48 = local_20[0];
      }
    }
  }
  FUN_140c7f270(local_40);
  FUN_140db44f0(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=140d79730 name=FUN_140d79730 */

void FUN_140d79730(longlong *param_1,longlong *param_2)

{
  FUN_140d79480(*(undefined8 *)(*param_1 + 0x10),*(undefined8 *)(*param_2 + 0x10));
  return;
}


/* address=140d79770 name=FUN_140d79770 */

void FUN_140d79770(longlong param_1,longlong param_2)

{
  FUN_140d797b0(param_1 + 0x48,param_2 + 0x48,0x20);
  return;
}


/* address=140d797b0 name=FUN_140d797b0 */

int FUN_140d797b0(void *param_1,void *param_2,size_t param_3)

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


/* address=140d797f0 name=FUN_140d797f0 */

void FUN_140d797f0(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d79810 name=FUN_140d79810 */

void FUN_140d79810(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d79870 name=FUN_140d79870 */

void FUN_140d79870(void)

{
  FUN_140c74de0();
  return;
}


/* address=140d79890 name=FUN_140d79890 */

void FUN_140d79890(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d798b0 name=FUN_140d798b0 */

void FUN_140d798b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d798e0 name=FUN_140d798e0 */

void FUN_140d798e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c74ec0(param_1,param_2,param_3);
  return;
}


/* address=140d79920 name=FUN_140d79920 */

void FUN_140d79920(undefined8 param_1)

{
  FUN_140c74f10(param_1);
  return;
}


/* address=140d79940 name=FUN_140d79940 */

void FUN_140d79940(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140d79840,param_2);
  return;
}


/* address=140d79970 name=FUN_140d79970 */

void FUN_140d79970(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140d799a0 name=FUN_140d799a0 */

void FUN_140d799a0(void)

{
  FUN_140d823d0(&DAT_1410837f8);
  return;
}


/* address=140d799c0 name=FUN_140d799c0 */

void FUN_140d799c0(undefined8 param_1)

{
  FUN_140d82cb0(param_1,&DAT_1410837f8);
  return;
}


/* address=140d799f0 name=FUN_140d799f0 */

void FUN_140d799f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140d83350(param_1,param_2,param_3,&DAT_1410837f8);
  return;
}


/* address=140d79a30 name=FUN_140d79a30 */

void FUN_140d79a30(undefined8 param_1,undefined8 param_2)

{
  FUN_140d85630(param_1,param_2,&DAT_1410837f8);
  return;
}


/* address=140d79a60 name=FUN_140d79a60 */

void FUN_140d79a60(undefined8 param_1)

{
  FUN_140de16f0(&DAT_1410837f8,param_1);
  return;
}


/* address=140d79b00 name=FUN_140d79b00 */

bool FUN_140d79b00(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140d79a60(param_2);
  if (lVar1 != 0) {
    FUN_140d799c0(*param_1);
    *param_1 = lVar1;
  }
  return lVar1 != 0;
}


/* address=140d79b60 name=FUN_140d79b60 */

void FUN_140d79b60(void)

{
  FUN_140d823d0(&DAT_141083828);
  return;
}


/* address=140d79b80 name=FUN_140d79b80 */

void FUN_140d79b80(undefined8 param_1)

{
  FUN_140d82cb0(param_1,&DAT_141083828);
  return;
}


/* address=140d79c20 name=FUN_140d79c20 */

void FUN_140d79c20(undefined8 param_1)

{
  FUN_140de16f0(&DAT_141083828,param_1);
  return;
}


/* address=140d79c50 name=FUN_140d79c50 */

undefined4 FUN_140d79c50(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* address=140d79c70 name=FUN_140d79c70 */

undefined8 FUN_140d79c70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d79cf0 name=FUN_140d79cf0 */

void FUN_140d79cf0(void)

{
  FUN_140c74de0();
  return;
}


/* address=140d79d10 name=FUN_140d79d10 */

void FUN_140d79d10(undefined8 param_1)

{
  FUN_140c74e00(param_1);
  return;
}


/* address=140d79d30 name=FUN_140d79d30 */

void FUN_140d79d30(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74e80(param_1,param_2);
  return;
}


/* address=140d79d60 name=FUN_140d79d60 */

void FUN_140d79d60(undefined8 param_1,undefined8 param_2)

{
  FUN_140c74f50(param_1,&LAB_140d79cc0,param_2);
  return;
}


/* address=140d79d90 name=FUN_140d79d90 */

void FUN_140d79d90(undefined8 param_1,undefined8 param_2)

{
  FUN_140c75700(param_1,param_2);
  return;
}


/* address=140d7a160 name=FUN_140d7a160 */

undefined8 FUN_140d7a160(longlong **param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_140c660d0(0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_140d79870();
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_140d805d0();
      plVar1[2] = lVar2;
      if (lVar2 != 0) {
        plVar1[3] = 0;
        *(undefined4 *)(plVar1 + 4) = 0;
        *(undefined4 *)(plVar1 + 1) = 1;
        *param_1 = plVar1;
        return 1;
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_140d79920(*plVar1);
    }
    FUN_140c66200(plVar1);
  }
  return 0;
}


/* address=140d7a250 name=FUN_140d7a250 */

void FUN_140d7a250(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    puVar1 = (undefined8 *)*param_1;
    FUN_140d80620(puVar1[2]);
    FUN_140d79940(*puVar1,FUN_140d79b80);
    if (puVar1[3] != 0) {
      FUN_140c66200(puVar1[3]);
    }
    FUN_140c66200(puVar1);
    *param_1 = 0;
  }
  return;
}


/* address=140d7a2e0 name=FUN_140d7a2e0 */

undefined8 FUN_140d7a2e0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_48;
  longlong local_40;
  ulonglong local_30;
  longlong local_20;
  undefined8 local_18 [3];
  
  local_40 = 0;
  local_48 = -1;
  lVar2 = FUN_140d79cf0();
  if (lVar2 != 0) {
    for (local_30 = 0; uVar3 = FUN_140d79890(*param_1), local_30 < uVar3; local_30 = local_30 + 1) {
      lVar4 = FUN_140d798b0(*param_1,local_30);
      if (*(int *)(lVar4 + 0x10) != local_48) {
        local_40 = FUN_140d79870();
        if (local_40 == 0) goto LAB_140d7a492;
        lVar5 = FUN_140d79d90(lVar2,local_40);
        if (lVar5 == 0) {
          FUN_140d79920(local_40);
          goto LAB_140d7a492;
        }
        local_48 = *(int *)(lVar4 + 0x10);
      }
      lVar4 = FUN_140d79970(local_40);
      if (lVar4 == 0) goto LAB_140d7a492;
    }
    local_20 = lVar2;
    iVar1 = FUN_140d85850(&local_20,0,&DAT_1410837a0,0xffffffff,0);
    if ((0 < iVar1) && (lVar4 = FUN_140d80780(param_1[2],(longlong)iVar1), lVar4 != 0)) {
      local_18[0] = *(undefined8 *)(param_1[2] + 8);
      iVar1 = FUN_140d85850(&local_20,local_18,&DAT_1410837a0,0xffffffff,0);
      if (0 < iVar1) {
        FUN_140d79d60(lVar2,&LAB_140d7a9d0);
        *(undefined4 *)(param_1 + 1) = 0;
        return 1;
      }
    }
  }
LAB_140d7a492:
  FUN_140d79d60(lVar2,&LAB_140d7a9d0);
  return 0;
}


/* address=140d7a4b0 name=FUN_140d7a4b0 */

undefined4 FUN_140d7a4b0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *local_48;
  int local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  longlong local_10 [2];
  
  local_28 = 0;
  local_48 = (undefined8 *)0x0;
  local_38 = -1;
  local_30 = 0;
  if (param_1[3] != 0) {
    FUN_140c66200(param_1[3]);
    param_1[3] = 0;
  }
  lVar2 = FUN_140d79890(*param_1);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    local_30 = 1;
  }
  else {
    lVar2 = FUN_140d79cf0();
    if (lVar2 != 0) {
      local_20 = 0;
      while( true ) {
        local_48 = (undefined8 *)0x0;
        uVar3 = FUN_140d79890(*param_1);
        if (uVar3 <= local_20) break;
        puVar4 = (undefined8 *)FUN_140d798b0(*param_1,local_20);
        if (*(int *)(puVar4 + 2) != local_38) {
          local_28 = FUN_140d79870();
          if (local_28 == 0) goto LAB_140d7a6c0;
          lVar5 = FUN_140d79d90(lVar2,local_28);
          if (lVar5 == 0) {
            FUN_140d79920(local_28);
            goto LAB_140d7a6c0;
          }
          local_38 = *(int *)(puVar4 + 2);
        }
        local_48 = (undefined8 *)FUN_140d79b60();
        if (local_48 == (undefined8 *)0x0) goto LAB_140d7a6c0;
        uVar6 = FUN_140d6a3e0(*puVar4);
        *local_48 = uVar6;
        iVar1 = FUN_140d7a700(local_48[1],puVar4[1]);
        if ((iVar1 == 0) || (lVar5 = FUN_140d79970(local_28), lVar5 == 0)) goto LAB_140d7a6c0;
        local_20 = local_20 + 1;
      }
      iVar1 = FUN_140d7a910(lVar2,0);
      if (-1 < iVar1) {
        *(int *)(param_1 + 4) = iVar1;
        local_10[0] = FUN_140c660d0((longlong)*(int *)(param_1 + 4));
        if (local_10[0] != 0) {
          param_1[3] = local_10[0];
          FUN_140d7a910(lVar2,local_10);
          local_30 = 1;
        }
      }
    }
LAB_140d7a6c0:
    if (local_48 != (undefined8 *)0x0) {
      FUN_140d79b80(local_48);
    }
    if (lVar2 != 0) {
      FUN_140d79d60(lVar2,&LAB_140d7a9f0);
    }
  }
  return local_30;
}


/* address=140d7a700 name=FUN_140d7a700 */

undefined8 FUN_140d7a700(int *param_1,longlong param_2)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_28;
  int local_24;
  undefined *local_20;
  undefined *local_18;
  
  uVar2 = FUN_140d83320(*(undefined4 *)(param_2 + 4));
  if ((uVar2 & 0x2956) == 0) {
    iVar3 = FUN_140d70640(param_1,param_2);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    param_1[1] = 0xc;
    iVar3 = FUN_140d71040(param_1 + 2,param_2);
    *param_1 = iVar3;
    if (*param_1 == -1) {
      uVar4 = 0;
    }
    else {
      local_18 = *(undefined **)(param_1 + 2);
      local_28 = *param_1;
      while ((0 < local_28 && (iVar3 = FUN_140c667f0(*local_18), iVar3 != 0))) {
        local_18 = local_18 + 1;
        local_28 = local_28 + -1;
      }
      local_20 = local_18 + local_28;
      while ((0 < local_28 && (iVar3 = FUN_140c667f0(local_20[-1]), iVar3 != 0))) {
        local_20 = local_20 + -1;
        local_28 = local_28 + -1;
      }
      local_20 = *(undefined **)(param_1 + 2);
      local_24 = 0;
      while (local_24 < local_28) {
        iVar3 = FUN_140c667f0(*local_18);
        if (iVar3 == 0) {
          uVar1 = __ascii_tolower(*local_18);
          *local_20 = uVar1;
          local_18 = local_18 + 1;
          local_24 = local_24 + 1;
        }
        else {
          *local_20 = 0x20;
          do {
            local_18 = local_18 + 1;
            local_24 = local_24 + 1;
            iVar3 = FUN_140c667f0(*local_18);
          } while (iVar3 != 0);
        }
        local_20 = local_20 + 1;
      }
      *param_1 = (int)local_20 - (int)*(undefined8 *)(param_1 + 2);
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* address=140d7a910 name=FUN_140d7a910 */

int FUN_140d7a910(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int local_24;
  ulonglong local_20;
  undefined8 local_10 [2];
  
  local_24 = 0;
  local_20 = 0;
  while( true ) {
    uVar2 = FUN_140d797f0(param_1);
    if (uVar2 <= local_20) {
      return local_24;
    }
    local_10[0] = FUN_140d79810(param_1,local_20);
    iVar1 = FUN_140d85850(local_10,param_2,&DAT_141083750,0xffffffff,0);
    if (iVar1 < 0) break;
    local_24 = local_24 + iVar1;
    local_20 = local_20 + 1;
  }
  return iVar1;
}


/* address=140d7aa10 name=FUN_140d7aa10 */

undefined8 FUN_140d7aa10(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_140de2c30();
    lVar3 = FUN_140c6a060(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_140c6a2d0(lVar3,1,param_2,1,0);
    if (iVar1 != 1) {
      return 0;
    }
  }
  if (param_3 != 0) {
    uVar2 = FUN_140de1cd0();
    lVar3 = FUN_140c6a060(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_140c6a2d0(lVar3,2,param_3,1,0);
    if (iVar1 != 1) {
      return 0;
    }
  }
  if ((param_3 == 0) && (param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140d7ab00 name=FUN_140d7ab00 */

undefined8 FUN_140d7ab00(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140de2c30();
  lVar2 = FUN_140c6a060(param_1,uVar1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_140c6a2d0(lVar2,1,0,3,0);
    uVar1 = FUN_140de1cd0();
    lVar2 = FUN_140c6a060(param_1,uVar1);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      FUN_140c6a2d0(lVar2,2,0,3,0);
      FUN_140c6c180();
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=140d7aba0 name=FUN_140d7aba0 */

longlong FUN_140d7aba0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28 [2];
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  local_20 = 0;
  local_18 = 0;
  iVar1 = FUN_140d7bf00(&local_20,local_28,0,param_2,param_3,param_5,param_6);
  uVar2 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_10[0] = local_20;
    local_18 = (*param_1)(param_4,local_10,local_28[0]);
    if (local_18 == 0) {
      FUN_140c6c4e0(9,0,0xc,s_D__a_1_s_target_release_build_bo_1413ce560,CONCAT44(uVar2,0x53));
    }
    FUN_140c66200(local_20);
  }
  return local_18;
}


/* address=140d7ac80 name=FUN_140d7ac80 */

uint FUN_140d7ac80(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=140d7aca0 name=FUN_140d7aca0 */

uint FUN_140d7aca0(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=140d7acc0 name=FUN_140d7acc0 */

undefined8 FUN_140d7acc0(char *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  char *local_res8;
  longlong *local_res10;
  
  *param_2 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140d7c9b0(param_2 + 1,0,0x10);
  if (((local_res8 == (char *)0x0) || (*local_res8 == '\0')) || (*local_res8 == '\n')) {
    uVar5 = 1;
  }
  else {
    iVar2 = strncmp(local_res8,s_Proc_Type__1413ced28,0xb);
    if (iVar2 == 0) {
      if (local_res8[0xb] == '4') {
        if (local_res8[0xc] == ',') {
          local_res8 = local_res8 + 0xd;
          iVar2 = strncmp(local_res8,s_ENCRYPTED_1413ceda8,9);
          if (iVar2 == 0) {
            for (; (*local_res8 != '\n' && (*local_res8 != '\0')); local_res8 = local_res8 + 1) {
            }
            if (*local_res8 == '\0') {
              FUN_140c6c4e0(9,0,0x70,s_D__a_1_s_target_release_build_bo_1413cee30,0x1c9);
              uVar5 = 0;
            }
            else {
              local_res8 = local_res8 + 1;
              iVar2 = strncmp(local_res8,s_DEK_Info__1413cee98,10);
              if (iVar2 == 0) {
                pcVar6 = local_res8 + 10;
                local_res8 = pcVar6;
                while (((cVar1 = *local_res8, '@' < cVar1 && (cVar1 < '[')) ||
                       ((cVar1 == '-' || (iVar2 = FUN_140c66640((int)cVar1), iVar2 != 0))))) {
                  local_res8 = local_res8 + 1;
                }
                *local_res8 = '\0';
                lVar7 = FUN_140d7cfa0(pcVar6);
                *local_res10 = lVar7;
                *local_res8 = cVar1;
                local_res8 = local_res8 + 1;
                if (lVar7 == 0) {
                  FUN_140c6c4e0(9,0,0x72,s_D__a_1_s_target_release_build_bo_1413cef20,0x1e2);
                  uVar5 = 0;
                }
                else {
                  uVar3 = FUN_140cac220(lVar7);
                  if (uVar3 < 8) {
                    FID_conflict__assert((wchar_t *)&DAT_1413cf054,(wchar_t *)s_D_1413cef90,0x1e8);
                    FUN_140c6c4e0(9,0,0x72,s_D__a_1_s_target_release_build_bo_1413cf060,0x1e9);
                    uVar5 = 0;
                  }
                  else {
                    uVar4 = FUN_140cac220(lVar7);
                    iVar2 = FUN_140d7c9f0(&local_res8,local_res10 + 1,uVar4);
                    if (iVar2 == 0) {
                      uVar5 = 0;
                    }
                    else {
                      uVar5 = 1;
                    }
                  }
                }
              }
              else {
                FUN_140c6c4e0(9,0,0x6b,s_D__a_1_s_target_release_build_bo_1413ceeb0,0x1ce);
                uVar5 = 0;
              }
            }
          }
          else {
            FUN_140c6c4e0(9,0,0x6c,s_D__a_1_s_target_release_build_bo_1413cedc0,0x1c2);
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      FUN_140c6c4e0(9,0,0x6d,s_D__a_1_s_target_release_build_bo_1413ced40,0x1b5);
      uVar5 = 0;
    }
  }
  return uVar5;
}


/* address=140d7b030 name=FUN_140d7b030 */

void FUN_140d7b030(longlong *param_1,longlong param_2,int *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *local_res20;
  undefined auStack_568 [32];
  undefined8 local_548;
  undefined4 local_540;
  undefined *local_538;
  undefined8 local_530;
  int local_528;
  int local_524;
  int local_520;
  int local_51c;
  int local_518;
  longlong *local_510;
  longlong *local_508;
  undefined local_4f8 [160];
  undefined local_458 [64];
  undefined local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_568;
  local_51c = 0;
  local_518 = *param_3;
  if (*param_1 != 0) {
    local_520 = 0;
    local_res20 = param_4;
    if (param_4 == (code *)0x0) {
      local_res20 = FUN_140d7c8e0;
    }
    local_520 = (*local_res20)(local_418,0x400,0,param_5);
    if (local_520 < 1) {
      local_548 = (longlong *)CONCAT44(local_548._4_4_,0x18c);
      FUN_140c6c4e0(9,0,0x68,s_D__a_1_s_target_release_build_bo_1413cec50);
    }
    else {
      local_510 = (longlong *)(longlong)local_520;
      local_508 = param_1 + 1;
      uVar2 = FUN_140c7f080();
      local_530 = 0;
      local_538 = local_458;
      local_540 = 1;
      local_548 = local_510;
      iVar1 = FUN_140d77780(*param_1,uVar2,local_508,local_418);
      if (iVar1 != 0) {
        local_524 = local_518;
        FUN_140caaa90(local_4f8);
        local_548 = param_1 + 1;
        local_528 = FUN_140cab130(local_4f8,*param_1,0,local_458);
        if (local_528 != 0) {
          local_548 = (longlong *)CONCAT44(local_548._4_4_,local_524);
          local_528 = FUN_140cab870(local_4f8,param_2,&local_51c,param_2);
        }
        if (local_528 != 0) {
          local_528 = FUN_140cabb40(local_4f8,param_2 + local_51c,&local_524);
        }
        FUN_140caab00(local_4f8);
        FUN_140c663a0(local_418,0x400);
        FUN_140c663a0(local_458,0x40);
        if (local_528 == 0) {
          local_548 = (longlong *)CONCAT44(local_548._4_4_,0x1a2);
          FUN_140c6c4e0(9,0,0x65,s_D__a_1_s_target_release_build_bo_1413cecc0);
        }
        else {
          local_524 = local_524 + local_51c;
          *param_3 = local_524;
        }
      }
    }
  }
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_568);
  return;
}


/* address=140d7b2d0 name=FUN_140d7b2d0 */

/* WARNING: Removing unreachable block (ram,0x000140d7b396) */
/* WARNING: Removing unreachable block (ram,0x000140d7b89b) */

void FUN_140d7b2d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  int *param_5)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined auStack_1f8 [32];
  undefined8 local_1d8;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  int local_1a0;
  int local_19c;
  int local_198 [2];
  undefined8 local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  undefined8 local_170;
  ulonglong local_168;
  longlong local_160;
  undefined local_158 [64];
  char local_118 [9];
  char local_10f [2];
  char local_10d [243];
  undefined uStack_1a;
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_1f8;
  local_19c = 0;
  local_1c4 = 0;
  local_1c0 = 0;
  local_1a0 = 0;
  local_1a8 = FUN_140d805d0();
  local_1b0 = FUN_140d805d0();
  local_1b8 = FUN_140d805d0();
  if (((local_1a8 == 0) || (local_1b0 == 0)) || (local_1b8 == 0)) {
    FUN_140d80620(local_1a8);
    FUN_140d80620(local_1b0);
    FUN_140d80620(local_1b8);
  }
  else {
    local_190 = 0xfe;
    uStack_1a = 0;
    do {
      do {
        local_1c8 = FUN_140d334a0(param_1,local_118,0xfe);
        if (local_1c8 < 1) {
          local_1d8 = CONCAT44(local_1d8._4_4_,0x274);
          FUN_140c6c4e0(9,0,0x6e,s_D__a_1_s_target_release_build_bo_1413cf2c0);
          goto LAB_140d7bb89;
        }
        for (; (-1 < local_1c8 && (local_118[local_1c8] < '!')); local_1c8 = local_1c8 + -1) {
        }
        local_118[local_1c8 + 1] = '\n';
        local_1c8 = local_1c8 + 2;
        local_188 = (ulonglong)local_1c8;
        if (0xff < local_188) {
          FUN_140db42d8();
        }
        local_118[local_188] = '\0';
        iVar1 = strncmp(local_118,s______BEGIN_1413cf328,0xb);
      } while (iVar1 != 0);
      sVar2 = strlen(local_10d);
      local_1c8 = (int)sVar2;
      iVar1 = strncmp(local_118 + (local_1c8 + 5),s_______1413cf334,6);
    } while (iVar1 != 0);
    lVar3 = FUN_140d80780(local_1a8,(longlong)(local_1c8 + 9));
    if (lVar3 != 0) {
      FUN_140d7c960(*(undefined8 *)(local_1a8 + 8),local_10d,(longlong)(local_1c8 + -6));
      *(undefined *)(*(longlong *)(local_1a8 + 8) + (longlong)(local_1c8 + -6)) = 0;
      local_1c0 = 0;
      lVar3 = FUN_140d80780(local_1b0,0x100);
      if (lVar3 != 0) {
        **(undefined **)(local_1b0 + 8) = 0;
        while (local_1c8 = FUN_140d334a0(param_1,local_118,0xfe), 0 < local_1c8) {
          for (; (-1 < local_1c8 && (local_118[local_1c8] < '!')); local_1c8 = local_1c8 + -1) {
          }
          local_118[local_1c8 + 1] = '\n';
          local_1c8 = local_1c8 + 2;
          local_180 = (ulonglong)local_1c8;
          if (0xff < local_180) {
            FUN_140db42d8();
          }
          local_118[local_180] = '\0';
          if (local_118[0] == '\n') break;
          lVar3 = FUN_140d80780(local_1b0,(longlong)(local_1c0 + 9 + local_1c8));
          if (lVar3 == 0) goto LAB_140d7bb89;
          iVar1 = strncmp(local_118,s______END_1413cf340,9);
          if (iVar1 == 0) {
            local_1a0 = 1;
            break;
          }
          FUN_140d7c960(*(longlong *)(local_1b0 + 8) + (longlong)local_1c0,local_118,
                        (longlong)local_1c8);
          *(undefined *)(*(longlong *)(local_1b0 + 8) + (longlong)(local_1c0 + local_1c8)) = 0;
          local_1c0 = local_1c0 + local_1c8;
        }
        local_1c4 = 0;
        lVar4 = FUN_140d80780(local_1b8,0x400);
        lVar3 = local_1b0;
        if (lVar4 != 0) {
          **(undefined **)(local_1b8 + 8) = 0;
          if (local_1a0 == 0) {
            do {
              local_1c8 = FUN_140d334a0(param_1,local_118,0xfe);
              if (local_1c8 < 1) goto LAB_140d7b98a;
              for (; (-1 < local_1c8 && (local_118[local_1c8] < '!')); local_1c8 = local_1c8 + -1) {
              }
              local_118[local_1c8 + 1] = '\n';
              local_1c8 = local_1c8 + 2;
              local_178 = (ulonglong)local_1c8;
              if (0xff < local_178) {
                FUN_140db42d8();
              }
              local_118[local_178] = '\0';
              if (local_1c8 != 0x41) {
                local_19c = 1;
              }
              iVar1 = strncmp(local_118,s______END_1413cf350,9);
              if ((iVar1 == 0) || (0x41 < local_1c8)) goto LAB_140d7b98a;
              lVar3 = FUN_140d80800(local_1b8,(longlong)(local_1c8 + 9 + local_1c4));
              if (lVar3 == 0) goto LAB_140d7bb89;
              FUN_140d7c960(*(longlong *)(local_1b8 + 8) + (longlong)local_1c4,local_118,
                            (longlong)local_1c8);
              *(undefined *)(*(longlong *)(local_1b8 + 8) + (longlong)(local_1c4 + local_1c8)) = 0;
              local_1c4 = local_1c4 + local_1c8;
            } while (local_19c == 0);
            local_170 = 0;
            local_1c8 = FUN_140d334a0(param_1,local_118,0xfe);
            if (0 < local_1c8) {
              for (; (-1 < local_1c8 && (local_118[local_1c8] < '!')); local_1c8 = local_1c8 + -1) {
              }
              local_118[local_1c8 + 1] = '\n';
              local_1c8 = local_1c8 + 2;
              local_168 = (ulonglong)local_1c8;
              if (0xff < local_168) {
                FUN_140db42d8();
              }
              local_118[local_168] = '\0';
            }
          }
          else {
            local_160 = local_1b0;
            local_1b0 = local_1b8;
            local_1b8 = lVar3;
            local_1c4 = local_1c0;
          }
LAB_140d7b98a:
          sVar2 = strlen(*(char **)(local_1a8 + 8));
          local_1c8 = (int)sVar2;
          iVar1 = strncmp(local_118,s______END_1413cf360,9);
          if (((iVar1 == 0) &&
              (iVar1 = strncmp(*(char **)(local_1a8 + 8),local_10f,(longlong)local_1c8), iVar1 == 0)
              ) && (iVar1 = strncmp(local_118 + (local_1c8 + 9),s_______1413cf36c,6), iVar1 == 0)) {
            FUN_140d63e00(local_158);
            local_1d8 = (longlong)local_1c4;
            local_1c8 = FUN_140d63e30(local_158,*(undefined8 *)(local_1b8 + 8),&local_1c4,
                                      *(undefined8 *)(local_1b8 + 8));
            if (local_1c8 < 0) {
              local_1d8 = CONCAT44(local_1d8._4_4_,0x2ef);
              FUN_140c6c4e0(9,0,100,s_D__a_1_s_target_release_build_bo_1413cf3f0);
            }
            else {
              local_1c8 = FUN_140d64000(local_158,*(longlong *)(local_1b8 + 8) + (longlong)local_1c4
                                        ,local_198);
              if (local_1c8 < 0) {
                local_1d8 = CONCAT44(local_1d8._4_4_,0x2f4);
                FUN_140c6c4e0(9,0,100,s_D__a_1_s_target_release_build_bo_1413cf460);
              }
              else {
                local_1c4 = local_1c4 + local_198[0];
                if (local_1c4 != 0) {
                  *param_2 = *(undefined8 *)(local_1a8 + 8);
                  *param_3 = *(undefined8 *)(local_1b0 + 8);
                  *param_4 = *(undefined8 *)(local_1b8 + 8);
                  *param_5 = local_1c4;
                  FUN_140c66200(local_1a8);
                  FUN_140c66200(local_1b0);
                  FUN_140c66200(local_1b8);
                  goto LAB_140d7bba9;
                }
              }
            }
          }
          else {
            local_1d8 = CONCAT44(local_1d8._4_4_,0x2e7);
            FUN_140c6c4e0(9,0,0x66,s_D__a_1_s_target_release_build_bo_1413cf380);
          }
        }
      }
    }
LAB_140d7bb89:
    FUN_140d80620(local_1a8);
    FUN_140d80620(local_1b0);
    FUN_140d80620(local_1b8);
  }
LAB_140d7bba9:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_1f8);
  return;
}


/* address=140d7bbd0 name=FUN_140d7bbd0 */

void FUN_140d7bbd0(undefined8 param_1,char *param_2,char *param_3,longlong param_4,int param_5)

{
  int iVar1;
  size_t sVar2;
  undefined auStack_a8 [32];
  undefined8 local_88;
  int local_78;
  int local_74;
  longlong local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_a8;
  local_70 = 0;
  local_58 = 7;
  FUN_140d63a60(local_50);
  sVar2 = strlen(param_2);
  local_64 = (int)sVar2;
  iVar1 = FUN_140d33590(param_1,s______BEGIN_1413cf1a8,0xb);
  if (((iVar1 == 0xb) && (iVar1 = FUN_140d33590(param_1,param_2,local_64), iVar1 == local_64)) &&
     (iVar1 = FUN_140d33590(param_1,s_______1413cf1b4,6), iVar1 == 6)) {
    sVar2 = strlen(param_3);
    local_74 = (int)sVar2;
    if (((local_74 < 1) ||
        ((iVar1 = FUN_140d33590(param_1,param_3,sVar2 & 0xffffffff), iVar1 == local_74 &&
         (iVar1 = FUN_140d33590(param_1,&DAT_1413cf1bc,1), iVar1 == 1)))) &&
       (local_70 = FUN_140c660d0(0x2000), local_70 != 0)) {
      local_68 = 0;
      local_74 = 0;
      for (; 0 < param_5; param_5 = param_5 - local_60) {
        if (param_5 < 0x1401) {
          local_5c = param_5;
        }
        else {
          local_5c = 0x1400;
        }
        local_60 = local_5c;
        local_88 = (longlong)local_5c;
        FUN_140d63a90(local_50,local_70,&local_78,param_4 + local_68);
        if ((local_78 != 0) && (iVar1 = FUN_140d33590(param_1,local_70,local_78), iVar1 != local_78)
           ) goto LAB_140d7bea2;
        local_74 = local_74 + local_78;
        local_68 = local_68 + local_60;
      }
      FUN_140d63d30(local_50,local_70,&local_78);
      if ((local_78 < 1) || (iVar1 = FUN_140d33590(param_1,local_70,local_78), iVar1 == local_78)) {
        FUN_140c66200(local_70);
        local_70 = 0;
        iVar1 = FUN_140d33590(param_1,s______END_1413cf1c0,9);
        if ((iVar1 == 9) &&
           ((iVar1 = FUN_140d33590(param_1,param_2,local_64), iVar1 == local_64 &&
            (iVar1 = FUN_140d33590(param_1,s_______1413cf1cc,6), iVar1 == 6)))) goto LAB_140d7bed7;
      }
    }
  }
LAB_140d7bea2:
  if (local_70 != 0) {
    FUN_140c66200(local_70);
  }
  local_88 = CONCAT44(local_88._4_4_,0x24c);
  FUN_140c6c4e0(9,0,local_58,s_D__a_1_s_target_release_build_bo_1413cf1e0);
LAB_140d7bed7:
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140d7bf00 name=FUN_140d7bf00 */

void FUN_140d7bf00(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined auStack_88 [32];
  undefined4 *local_68;
  int local_58;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_58 = 0;
  do {
    local_68 = local_50;
    iVar1 = FUN_140d7b2d0(param_5,&local_48,&local_38,&local_40);
    if (iVar1 == 0) {
      local_54 = FUN_140c6bbb0();
      iVar1 = FUN_140d7ac80(local_54);
      if ((iVar1 == 9) && (iVar1 = FUN_140d7aca0(local_54), iVar1 == 0x6e)) {
        FUN_140c6c600(2,s_Expecting__1413ce840,param_4);
      }
LAB_140d7c0bb:
      FUN_140db44f0(local_18 ^ (ulonglong)auStack_88);
      return;
    }
    iVar1 = FUN_140d7cb70(local_48,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_140d7acc0(local_38,local_30);
      if (iVar1 != 0) {
        local_68 = param_7;
        iVar1 = FUN_140d7b030(local_30,local_40,local_50,param_6);
        if (iVar1 != 0) {
          *param_1 = local_40;
          *param_2 = local_50[0];
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = local_48;
          }
          local_58 = 1;
        }
      }
      if ((local_58 == 0) || (param_3 == (undefined8 *)0x0)) {
        FUN_140c66200(local_48);
      }
      FUN_140c66200(local_38);
      if (local_58 == 0) {
        FUN_140c66200(local_40);
      }
      goto LAB_140d7c0bb;
    }
    FUN_140c66200(local_48);
    FUN_140c66200(local_38);
    FUN_140c66200(local_40);
  } while( true );
}


/* address=140d7c0e0 name=FUN_140d7c0e0 */

/* WARNING: Removing unreachable block (ram,0x000140d7c413) */
/* WARNING: Removing unreachable block (ram,0x000140d7c545) */

void FUN_140d7c0e0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined *param_6,int param_7,code *param_8,undefined8 param_9)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined auStack_598 [32];
  undefined8 local_578;
  undefined4 local_570;
  undefined *local_568;
  undefined8 local_560;
  int local_558;
  int local_554;
  int local_550;
  uint local_54c;
  longlong local_548;
  int local_540 [2];
  char *local_538;
  undefined8 local_530;
  undefined8 local_528;
  longlong local_520;
  undefined *local_518;
  undefined local_508 [160];
  undefined local_468 [16];
  undefined local_458 [64];
  undefined local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1413d9c40 ^ (ulonglong)auStack_598;
  local_550 = 0;
  local_554 = 0;
  local_548 = 0;
  local_538 = (char *)0x0;
  if (param_5 != 0) {
    uVar1 = FUN_140cac1c0(param_5);
    local_538 = (char *)FUN_140d6aab0(uVar1);
    if (((local_538 == (char *)0x0) || (lVar4 = FUN_140d7cfa0(local_538), lVar4 == 0)) ||
       (uVar2 = FUN_140cac220(param_5), uVar2 < 8)) {
      local_578 = (undefined *)CONCAT44(local_578._4_4_,0x123);
      FUN_140c6c4e0(9,0,0x71,s_D__a_1_s_target_release_build_bo_1413ce8c0);
      goto LAB_140d7c595;
    }
  }
  local_550 = (*param_1)(param_4,0);
  if (local_550 < 0) {
    local_578 = (undefined *)CONCAT44(local_578._4_4_,0x129);
    FUN_140c6c4e0(9,0,0xc,s_D__a_1_s_target_release_build_bo_1413ce930);
    local_550 = 0;
    goto LAB_140d7c595;
  }
  local_548 = FUN_140c660d0(local_550 + 0x14);
  if (local_548 == 0) goto LAB_140d7c595;
  local_520 = local_548;
  local_558 = (*param_1)(param_4,&local_520);
  if (param_5 == 0) {
    local_528 = 0;
    local_554 = 1;
    local_418[0] = 0;
  }
  else {
    local_54c = FUN_140cac220(param_5);
    if (param_6 == (undefined *)0x0) {
      if (param_8 == (code *)0x0) {
        param_8 = FUN_140d7c8e0;
      }
      param_7 = (*param_8)(local_418,0x400,1,param_9);
      if (param_7 < 1) {
        local_578 = (undefined *)CONCAT44(local_578._4_4_,0x140);
        FUN_140c6c4e0(9,0,0x6f,s_D__a_1_s_target_release_build_bo_1413ce9a0);
        goto LAB_140d7c595;
      }
      param_6 = local_418;
    }
    if (0x10 < local_54c) {
      FID_conflict__assert((wchar_t *)s_i_1413cead8,(wchar_t *)s_D_1413cea10,0x145);
    }
    iVar3 = FUN_140ca8a50(local_468,local_54c);
    if (iVar3 == 0) goto LAB_140d7c595;
    local_518 = (undefined *)(longlong)param_7;
    uVar5 = FUN_140c7f080();
    local_560 = 0;
    local_568 = local_458;
    local_570 = 1;
    local_578 = local_518;
    iVar3 = FUN_140d77780(param_5,uVar5,local_468,param_6);
    if (iVar3 == 0) goto LAB_140d7c595;
    if (param_6 == local_418) {
      FUN_140c663a0(local_418,0x400);
    }
    sVar6 = strlen(local_538);
    if (0x400 < sVar6 + 0x24 + (ulonglong)(local_54c << 1)) {
      FID_conflict__assert((wchar_t *)s_s_1413cebe0,(wchar_t *)s_D_1413ceb10,0x153);
    }
    local_530 = 0;
    local_418[0] = 0;
    FUN_140d7cd80(local_418,10);
    FUN_140d7ce30(local_418,local_538,local_54c,local_468);
    FUN_140caaa90(local_508);
    local_554 = 1;
    local_578 = local_468;
    iVar3 = FUN_140cab0e0(local_508,param_5,0,local_458);
    if (iVar3 == 0) {
LAB_140d7c4f0:
      local_554 = 0;
    }
    else {
      local_578 = (undefined *)CONCAT44(local_578._4_4_,local_558);
      iVar3 = FUN_140cab180(local_508,local_548,local_540,local_548);
      if ((iVar3 == 0) ||
         (iVar3 = FUN_140cab680(local_508,local_548 + local_540[0],&local_558), iVar3 == 0))
      goto LAB_140d7c4f0;
      local_558 = local_558 + local_540[0];
    }
    FUN_140caab00(local_508);
    if (local_554 == 0) goto LAB_140d7c595;
  }
  local_578 = (undefined *)CONCAT44(local_578._4_4_,local_558);
  local_558 = FUN_140d7bbd0(param_3,param_2,local_418,local_548);
  if (local_558 < 1) {
    local_554 = 0;
  }
LAB_140d7c595:
  FUN_140c663a0(local_458,0x40);
  FUN_140c663a0(local_468,0x10);
  FUN_140c663a0(local_508,0x98);
  FUN_140c663a0(local_418,0x400);
  FUN_140c66200(local_548);
  FUN_140db44f0(local_18 ^ (ulonglong)auStack_598);
  return;
}


/* address=140d7c750 name=FUN_140d7c750 */

undefined8
FUN_140d7c750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_140d7d170(param_3,0);
  if (lVar1 == 0) {
    FUN_140c6c4e0(9,0,7,s_D__a_1_s_target_release_build_bo_1413ce640,CONCAT44(uVar3,0x7f));
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d7aba0(param_1,param_2,lVar1,param_4,param_5,param_6);
    FUN_140d332d0(lVar1);
  }
  return uVar2;
}


/* address=140d7c800 name=FUN_140d7c800 */

undefined4
FUN_140d7c800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffb8;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar2 = FUN_140d7d170(param_3,0);
  if (lVar2 == 0) {
    FUN_140c6c4e0(9,0,7,s_D__a_1_s_target_release_build_bo_1413ce850,CONCAT44(uVar1,0x10c));
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d7c0e0(param_1,param_2,lVar2,param_4,param_5,param_6,param_7,param_8,param_9);
    FUN_140d332d0(lVar2);
  }
  return uVar1;
}


/* address=140d7c8e0 name=FUN_140d7c8e0 */

ulonglong FUN_140d7c8e0(longlong param_1,int param_2,undefined8 param_3,char *param_4)

{
  ulonglong uVar1;
  size_t sVar2;
  
  if (((param_1 == 0) || (param_4 == (char *)0x0)) || (param_2 < 0)) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(param_4);
    if (sVar2 < (ulonglong)(longlong)param_2) {
      FUN_140c66c00(param_1,param_4,(longlong)param_2);
      uVar1 = sVar2 & 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* address=140d7c960 name=FUN_140d7c960 */

undefined8 FUN_140d7c960(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d7c9b0 name=FUN_140d7c9b0 */

undefined8 FUN_140d7c9b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e28d40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140d7c9f0 name=FUN_140d7c9f0 */

undefined8 FUN_140d7c9f0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  bool bVar2;
  byte local_38 [4];
  uint local_34;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18;
  
  local_18 = *param_1;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    *(undefined *)(param_2 + local_20) = 0;
  }
  local_28 = 0;
  while( true ) {
    if (param_3 << 1 <= local_28) {
      *param_1 = local_18;
      return 1;
    }
    iVar1 = FUN_140c666e0(local_38);
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
    bVar2 = (local_28 & 1) == 0;
    local_34 = (uint)bVar2;
    local_30 = (uint)local_38[0];
    local_2c = (uint)*(byte *)(param_2 + local_28 / 2) | local_30 << (bVar2 << 2);
    *(char *)(param_2 + local_28 / 2) = (char)local_2c;
    local_28 = local_28 + 1;
  }
  FUN_140c6c4e0(9,0,0x67,s_D__a_1_s_target_release_build_bo_1413cf0d0,0x1fe);
  return 0;
}


/* address=140d7cb70 name=FUN_140d7cb70 */

undefined4 FUN_140d7cb70(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = strcmp(param_1,param_2);
  if (iVar1 == 0) {
    local_18 = 1;
  }
  else {
    iVar1 = strcmp(param_2,s_ANY_PRIVATE_KEY_1413ce6a8);
    if (iVar1 == 0) {
      iVar1 = strcmp(param_1,s_ENCRYPTED_PRIVATE_KEY_1413ce6b8);
      if ((((iVar1 == 0) || (iVar1 = strcmp(param_1,s_PRIVATE_KEY_1413ce6d0), iVar1 == 0)) ||
          (iVar1 = strcmp(param_1,s_RSA_PRIVATE_KEY_1413ce6e0), iVar1 == 0)) ||
         ((iVar1 = strcmp(param_1,s_EC_PRIVATE_KEY_1413ce6f0), iVar1 == 0 ||
          (iVar1 = strcmp(param_1,s_DSA_PRIVATE_KEY_1413ce700), iVar1 == 0)))) {
        local_18 = 1;
      }
      else {
        local_18 = 0;
      }
    }
    else {
      iVar1 = strcmp(param_1,s_X509_CERTIFICATE_1413ce710);
      if ((iVar1 == 0) && (iVar1 = strcmp(param_2,s_CERTIFICATE_1413ce728), iVar1 == 0)) {
        local_18 = 1;
      }
      else {
        iVar1 = strcmp(param_1,s_NEW_CERTIFICATE_REQUEST_1413ce738);
        if ((iVar1 == 0) && (iVar1 = strcmp(param_2,s_CERTIFICATE_REQUEST_1413ce750), iVar1 == 0)) {
          local_18 = 1;
        }
        else {
          iVar1 = strcmp(param_1,s_CERTIFICATE_1413ce768);
          if ((iVar1 == 0) && (iVar1 = strcmp(param_2,s_TRUSTED_CERTIFICATE_1413ce778), iVar1 == 0))
          {
            local_18 = 1;
          }
          else {
            iVar1 = strcmp(param_1,s_X509_CERTIFICATE_1413ce790);
            if ((iVar1 == 0) &&
               (iVar1 = strcmp(param_2,s_TRUSTED_CERTIFICATE_1413ce7a8), iVar1 == 0)) {
              local_18 = 1;
            }
            else {
              iVar1 = strcmp(param_1,s_CERTIFICATE_1413ce7c0);
              if ((iVar1 == 0) && (iVar1 = strcmp(param_2,s_PKCS7_1413ce7cc), iVar1 == 0)) {
                local_18 = 1;
              }
              else {
                iVar1 = strcmp(param_1,s_PKCS__7_SIGNED_DATA_1413ce7d8);
                if ((iVar1 == 0) && (iVar1 = strcmp(param_2,s_PKCS7_1413ce7ec), iVar1 == 0)) {
                  local_18 = 1;
                }
                else {
                  local_18 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return local_18;
}


/* address=140d7cd80 name=FUN_140d7cd80 */

void FUN_140d7cd80(undefined8 param_1,int param_2)

{
  char *local_18;
  
  if (param_2 == 10) {
    local_18 = s_ENCRYPTED_1413ce5d0;
  }
  else if (param_2 == 0x1e) {
    local_18 = s_MIC_CLEAR_1413ce5e0;
  }
  else if (param_2 == 0x14) {
    local_18 = s_MIC_ONLY_1413ce5f0;
  }
  else {
    local_18 = s_BAD_TYPE_1413ce600;
  }
  FUN_140c66cb0(param_1,s_Proc_Type__4__1413ce610,0x400);
  FUN_140c66cb0(param_1,local_18,0x400);
  FUN_140c66cb0(param_1,&DAT_1413ce620,0x400);
  return;
}


/* address=140d7ce30 name=FUN_140d7ce30 */

void FUN_140d7ce30(char *param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  size_t sVar1;
  ulonglong local_18;
  
  FUN_140c66cb0(param_1,s_DEK_Info__1413ce628,0x400);
  FUN_140c66cb0(param_1,param_2,0x400);
  FUN_140c66cb0(param_1,&DAT_1413ce634,0x400);
  sVar1 = strlen(param_1);
  if (param_3 <= (0x3fe - sVar1) / 2) {
    for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
      param_1[sVar1 + local_18 * 2] =
           "0123456789ABCDEF"[(int)((int)*(char *)(param_4 + local_18) >> 4 & 0xf)];
      param_1[sVar1 + local_18 * 2 + 1] =
           "0123456789ABCDEF"[(int)((int)*(char *)(param_4 + local_18) & 0xf)];
    }
    param_1[sVar1 + param_3 * 2] = '\n';
    param_1[sVar1 + param_3 * 2 + 1] = '\0';
  }
  return;
}


/* address=140d7cfa0 name=FUN_140d7cfa0 */

undefined8 FUN_140d7cfa0(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = strcmp(param_1,s_DES_CBC_1413ce7f8);
  if (iVar1 == 0) {
    uVar2 = FUN_140dc58b0();
  }
  else {
    iVar1 = strcmp(param_1,s_DES_EDE3_CBC_1413ce800);
    if (iVar1 == 0) {
      uVar2 = FUN_140dc5900();
    }
    else {
      iVar1 = strcmp(param_1,s_AES_128_CBC_1413ce810);
      if (iVar1 == 0) {
        uVar2 = FUN_140caa940();
      }
      else {
        iVar1 = strcmp(param_1,s_AES_192_CBC_1413ce820);
        if (iVar1 == 0) {
          uVar2 = FUN_140cac560();
        }
        else {
          iVar1 = strcmp(param_1,s_AES_256_CBC_1413ce830);
          if (iVar1 == 0) {
            uVar2 = FUN_140caaa00();
          }
          else {
            uVar2 = 0;
          }
        }
      }
    }
  }
  return uVar2;
}


/* address=140d7d050 name=FUN_140d7d050 */

undefined * FUN_140d7d050(void)

{
  return &DAT_141083870;
}


/* address=140d7d060 name=FUN_140d7d060 */

longlong FUN_140d7d060(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_140e12000(param_1,param_2);
  if (lVar1 == 0) {
    FUN_140c6c4e0(2,0,0,s_D__a_1_s_target_release_build_bo_1413cf4e0,CONCAT44(uVar4,0x62));
    FUN_140c6c600(5,s_fopen___1413cf548,param_1,&DAT_1413cf544,param_2,&DAT_1413cf540);
    uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
    piVar2 = (int *)FUN_140e0d4fc();
    if (*piVar2 == 2) {
      FUN_140c6c4e0(0x11,0,0x6e,s_D__a_1_s_target_release_build_bo_1413cf550,CONCAT44(uVar4,0x66));
    }
    else {
      FUN_140c6c4e0(0x11,0,0x70,s_D__a_1_s_target_release_build_bo_1413cf5b0,CONCAT44(uVar4,0x68));
    }
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_140d7d170(lVar1,1);
    if (lVar3 == 0) {
      FUN_140e11918(lVar1);
      lVar3 = 0;
    }
  }
  return lVar3;
}


/* address=140d7d170 name=FUN_140d7d170 */

longlong FUN_140d7d170(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140d7d050();
  lVar2 = FUN_140d33230(uVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_140d7d1f0(lVar2,param_1,param_2);
  }
  return lVar2;
}


/* address=140d7d1f0 name=FUN_140d7d1f0 */

void FUN_140d7d1f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140d337d0(param_1,0x6a,param_3,param_2);
  return;
}


/* address=140d7d230 name=FUN_140d7d230 */

void FUN_140d7d230(undefined8 param_1,undefined8 param_2)

{
  FUN_140d337d0(param_1,0x6c,3,param_2);
  return;
}


/* address=140d7d390 name=FUN_140d7d390 */

undefined8 FUN_140d7d390(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if ((*(int *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      FUN_140e11918(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 1;
}


/* address=140d7d990 name=FUN_140d7d990 */

undefined8 FUN_140d7d990(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  iVar1 = FUN_140d80fc0(param_1[1],*(undefined8 *)(*param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = FUN_140de3800(&DAT_140fd47b0,param_1[1],param_1[2],*param_1,param_2);
  }
  else {
    FUN_140c6c4e0(0xb,0,0x89,s_D__a_1_s_target_release_build_bo_1413cf820,CONCAT44(uVar3,0x4b));
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140d7db10 name=FUN_140d7db10 */

void FUN_140d7db10(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d8abd0(*param_1 + 0x38);
  FUN_140de39a0(&DAT_141084a90,*(undefined8 *)(*param_1 + 8),param_1[1],param_1[2],*param_1,param_2,
                param_3);
  return;
}


/* address=140d7de60 name=FUN_140d7de60 */

undefined4
FUN_140d7de60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140c67e80(param_1,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c7f8a0(local_10[0],(longlong)iVar1,param_3,param_4,param_2,0);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7def0 name=FUN_140d7def0 */

void FUN_140d7def0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140de3770(&DAT_141084a60,param_2,param_1,param_3,param_4);
  return;
}


/* address=140d7dfe0 name=FUN_140d7dfe0 */

undefined8 FUN_140d7dfe0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140c67d40(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e050 name=FUN_140d7e050 */

void FUN_140d7e050(undefined8 param_1,undefined8 param_2)

{
  FUN_140de3490(&DAT_141084a60,param_1,param_2);
  return;
}


/* address=140d7e0b0 name=FUN_140d7e0b0 */

undefined8 FUN_140d7e0b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140d5ea20(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e120 name=FUN_140d7e120 */

undefined8 FUN_140d7e120(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140d5e920(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e190 name=FUN_140d7e190 */

undefined8 FUN_140d7e190(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140d5af10(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e200 name=FUN_140d7e200 */

undefined8 FUN_140d7e200(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140d5b050(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e270 name=FUN_140d7e270 */

undefined8 FUN_140d7e270(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140dd5f80(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e2e0 name=FUN_140d7e2e0 */

undefined8 FUN_140d7e2e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140d5b190(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e350 name=FUN_140d7e350 */

undefined8 FUN_140d7e350(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140d68d60(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e3c0 name=FUN_140d7e3c0 */

undefined8 FUN_140d7e3c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140dd7de0(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e430 name=FUN_140d7e430 */

undefined8 FUN_140d7e430(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140d5f2e0(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e4a0 name=FUN_140d7e4a0 */

undefined8 FUN_140d7e4a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140d5adf0(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e580 name=FUN_140d7e580 */

undefined8 FUN_140d7e580(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d33ff0(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140d5ab10(param_2,&local_18,local_20[0]);
    FUN_140c66200(local_28);
  }
  return local_10;
}


/* address=140d7e5f0 name=FUN_140d7e5f0 */

undefined4 FUN_140d7e5f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140c67e80(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7e6c0 name=FUN_140d7e6c0 */

undefined4 FUN_140d7e6c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140d5eac0(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7e730 name=FUN_140d7e730 */

undefined4 FUN_140d7e730(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140d5e9c0(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7e7a0 name=FUN_140d7e7a0 */

undefined4 FUN_140d7e7a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140d5ae90(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7e810 name=FUN_140d7e810 */

undefined4 FUN_140d7e810(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140d5afd0(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7e880 name=FUN_140d7e880 */

undefined4 FUN_140d7e880(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140dd6020(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7e8f0 name=FUN_140d7e8f0 */

undefined4 FUN_140d7e8f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140d5b110(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7e960 name=FUN_140d7e960 */

undefined4 FUN_140d7e960(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140d68e50(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7e9d0 name=FUN_140d7e9d0 */

undefined4 FUN_140d7e9d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140dd7e20(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7ea40 name=FUN_140d7ea40 */

undefined4 FUN_140d7ea40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140d5f320(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7eab0 name=FUN_140d7eab0 */

undefined4 FUN_140d7eab0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140de3610(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7eb20 name=FUN_140d7eb20 */

undefined4 FUN_140d7eb20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140d5ad80(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d33680(param_1,local_10[0],(longlong)iVar1);
    FUN_140c66200(local_10[0]);
  }
  return uVar2;
}


/* address=140d7f500 name=FUN_140d7f500 */

undefined4 FUN_140d7f500(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140d7d170(param_1,0);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140d7ea40(lVar2,param_2);
    FUN_140d332d0(lVar2);
  }
  return uVar1;
}


/* address=140d7f680 name=FUN_140d7f680 */

void FUN_140d7f680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d7aba0(&LAB_140d7f820,s_CERTIFICATE_1413cf880,param_1,param_2,param_3,param_4);
  return;
}


/* address=140d7f900 name=FUN_140d7f900 */

void FUN_140d7f900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140d7aba0(&LAB_140d7faa0,s_TRUSTED_CERTIFICATE_1413cf8c0,param_1,param_2,param_3,param_4);
  return;
}


/* address=140d7fb80 name=FUN_140d7fb80 */

undefined8 * FUN_140d7fb80(undefined8 *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar3 = param_1 + 2;
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  puVar3 = param_1 + 6;
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_140d803e0(param_1 + 10);
  FUN_140d803e0(param_1 + 0xd);
  FUN_140c55f20(param_1 + 0x10);
  param_1[0x12] = 0;
  FUN_140c55f20(param_1 + 0x13);
  *(undefined *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_140c57b60(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined *)((longlong)param_1 + 0xd2) = 0;
  *(undefined *)((longlong)param_1 + 0xd3) = 0;
  *(undefined *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 0xfe;
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 0xfd;
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 0xfb;
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 0xf7;
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 0xef;
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 0xdf;
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 0xbf;
  *(byte *)((longlong)param_1 + 0xdc) = *(byte *)((longlong)param_1 + 0xdc) & 0x7f;
  *(byte *)((longlong)param_1 + 0xdd) = *(byte *)((longlong)param_1 + 0xdd) & 0xfe;
  *(byte *)((longlong)param_1 + 0xdd) = *(byte *)((longlong)param_1 + 0xdd) & 0xfd;
  *(byte *)((longlong)param_1 + 0xdd) = *(byte *)((longlong)param_1 + 0xdd) & 0xfb;
  *(byte *)((longlong)param_1 + 0xdd) = *(byte *)((longlong)param_1 + 0xdd) & 0xf7;
  *(byte *)((longlong)param_1 + 0xdd) = *(byte *)((longlong)param_1 + 0xdd) & 0xef;
  *(byte *)((longlong)param_1 + 0xdd) = *(byte *)((longlong)param_1 + 0xdd) & 0xdf;
  *(byte *)((longlong)param_1 + 0xdd) = *(byte *)((longlong)param_1 + 0xdd) & 0xbf;
  *(byte *)((longlong)param_1 + 0xdd) = *(byte *)((longlong)param_1 + 0xdd) & 0x7f;
  FUN_140c57b60(param_1 + 0x1c);
  FUN_140c57b60(param_1 + 0x1d);
  FUN_140c57b60(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_140c57b60(param_1 + 0x21);
  FUN_140c57b60(param_1 + 0x22);
  FUN_140c57b60(param_1 + 0x23);
  puVar3 = param_1 + 0x24;
  for (lVar1 = 0x30; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  puVar3 = param_1 + 0x2a;
  for (lVar1 = 0x30; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  puVar3 = param_1 + 0x30;
  for (lVar1 = 0x30; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  *(undefined *)(param_1 + 0x36) = 0;
  *(undefined *)((longlong)param_1 + 0x1b1) = 0;
  *(undefined *)((longlong)param_1 + 0x1b2) = 0;
  puVar2 = (undefined *)((longlong)param_1 + 0x1b3);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined *)((longlong)param_1 + 0x1bf) = 0;
  *(undefined *)(param_1 + 0x38) = 0;
  puVar2 = (undefined *)((longlong)param_1 + 0x1c1);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined *)((longlong)param_1 + 0x1cd);
  for (lVar1 = 2; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_140c57b60(param_1 + 0x3a);
  FUN_140c56440(param_1 + 0x3b);
  FUN_140c56440(param_1 + 0x3d);
  FUN_140c57b60(param_1 + 0x3f);
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0x40; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_140c56440(param_1 + 0x48);
  param_1[0x4a] = 0;
  return param_1;
}


/* address=140d80070 name=FUN_140d80070 */

void FUN_140d80070(longlong param_1)

{
  FUN_140c564c0(param_1 + 0x240);
  FUN_140c56a30(param_1 + 0x1f8);
  FUN_140c564c0(param_1 + 0x1e8);
  FUN_140c564c0(param_1 + 0x1d8);
  FUN_140c56300(param_1 + 0x1d0);
  FUN_140c56cd0(param_1 + 0x118);
  FUN_140c67a20(param_1 + 0x110);
  FUN_140c67a20(param_1 + 0x108);
  FUN_140d3f1d0(param_1 + 0xf0);
  FUN_140d3f1d0(param_1 + 0xe8);
  FUN_140d3f1d0(param_1 + 0xe0);
  FUN_140d429e0(param_1 + 0xb8);
  FUN_140d80430(param_1 + 0x68);
  FUN_140d80430(param_1 + 0x50);
  return;
}


/* address=140d80190 name=FUN_140d80190 */

undefined FUN_140d80190(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  _Facet_base *p_Var5;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  local_50 [8];
  undefined local_48 [8];
  undefined8 local_40;
  undefined local_38 [8];
  undefined8 local_30;
  undefined local_28 [8];
  undefined8 local_20;
  undefined local_18 [24];
  
  uVar3 = FUN_140d804d0(local_48);
  FUN_140c55e70(local_50,uVar3);
  FUN_140d80490(local_48);
  cVar1 = FUN_140c56050(local_50);
  if (cVar1 == '\0') {
    FUN_140d80490(local_50);
  }
  else {
    iVar2 = FUN_140c4c520(param_1);
    local_40 = FUN_140d3ae40(local_38,iVar2 != 0);
    lVar4 = FUN_140c55c70(local_50);
    FUN_140c67ab0(lVar4 + 0x108,local_40);
    FUN_140c67a20(local_38);
    iVar2 = FUN_140c4c520(param_1);
    local_30 = FUN_140d3ae40(local_28,iVar2 != 0);
    lVar4 = FUN_140c55c70(local_50);
    FUN_140c67ab0(lVar4 + 0x110,local_30);
    FUN_140c67a20(local_28);
    local_20 = FUN_140d40d50(local_18,param_1);
    lVar4 = FUN_140c55c70(local_50);
    FUN_140c57ef0(lVar4 + 0x118,local_20);
    FUN_140c56cd0(local_18);
    lVar4 = FUN_140c55c70(local_50);
    cVar1 = FUN_140c56050(lVar4 + 0x108);
    if (cVar1 != '\0') {
      lVar4 = FUN_140c55c70(local_50);
      cVar1 = FUN_140c56050(lVar4 + 0x110);
      if (cVar1 != '\0') {
        lVar4 = FUN_140c55c70(local_50);
        cVar1 = FUN_140c56050(lVar4 + 0x118);
        if (cVar1 != '\0') {
          p_Var5 = std::
                   unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   ::release(local_50);
          *(_Facet_base **)(param_1 + 0x30) = p_Var5;
          *(undefined2 *)(param_1 + 0x10) = 0x303;
          FUN_140d80490(local_50);
          return 1;
        }
      }
    }
    FUN_140d80490(local_50);
  }
  return 0;
}


/* address=140d803a0 name=FUN_140d803a0 */

void FUN_140d803a0(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_140d80510(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}


/* address=140d803e0 name=FUN_140d803e0 */

undefined8 * FUN_140d803e0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined *)((longlong)param_1 + 0x13) = 0;
  return param_1;
}


/* address=140d80430 name=FUN_140d80430 */

void FUN_140d80430(undefined8 param_1)

{
  FUN_140d3f6a0(param_1);
  return;
}


/* address=140d80450 name=FUN_140d80450 */

undefined8 FUN_140d80450(undefined8 param_1,uint param_2)

{
  FUN_140d80070(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e18570(param_1,600);
  }
  return param_1;
}


/* address=140d80490 name=FUN_140d80490 */

void FUN_140d80490(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140c55cd0(param_1);
    FUN_140d80590(uVar1,*param_1);
  }
  return;
}


/* address=140d804d0 name=FUN_140d804d0 */

undefined8 FUN_140d804d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140d80540();
  uVar1 = FUN_140c55e40(local_18,uVar1);
  FUN_140c55e70(param_1,uVar1);
  FUN_140d80490(local_18);
  return param_1;
}


/* address=140d80510 name=FUN_140d80510 */

void FUN_140d80510(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140d80450(param_1,0);
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140d80540 name=FUN_140d80540 */

undefined8 FUN_140d80540(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c660d0(600);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140c55bd0(600,lVar1);
    uVar2 = FUN_140d7fb80(uVar2);
  }
  return uVar2;
}


/* address=140d80590 name=FUN_140d80590 */

void FUN_140d80590(undefined8 param_1,undefined8 param_2)

{
  FUN_140d805b0(param_2);
  return;
}


/* address=140d805b0 name=FUN_140d805b0 */

void FUN_140d805b0(undefined8 param_1)

{
  FUN_140d80510(param_1);
  return;
}


/* address=140d805d0 name=FUN_140d805d0 */

longlong FUN_140d805d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c660d0(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d80a70(lVar1,0,0x18);
  }
  return lVar1;
}


/* address=140d80620 name=FUN_140d80620 */

void FUN_140d80620(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140c66200(*(undefined8 *)(param_1 + 8));
    FUN_140c66200(param_1);
  }
  return;
}


/* address=140d80660 name=FUN_140d80660 */

undefined8 FUN_140d80660(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    if (param_2 + 3 < param_2) {
      FUN_140c6c4e0(7,0,0x45,s_D__a_1_s_target_release_build_bo_1413cf920,0x5f);
      uVar1 = 0;
    }
    else {
      uVar2 = (param_2 + 3) / 3;
      uVar3 = uVar2 << 2;
      if (uVar3 / 4 == uVar2) {
        lVar4 = FUN_140c662b0(*(undefined8 *)(param_1 + 8),uVar3);
        if (lVar4 == 0) {
          uVar1 = 0;
        }
        else {
          *(longlong *)(param_1 + 8) = lVar4;
          *(ulonglong *)(param_1 + 0x10) = uVar3;
          uVar1 = 1;
        }
      }
      else {
        FUN_140c6c4e0(7,0,0x45,s_D__a_1_s_target_release_build_bo_1413cf980,0x65);
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140d80780 name=FUN_140d80780 */

ulonglong FUN_140d80780(ulonglong *param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = FUN_140d80660(param_1,param_2);
  if (iVar1 == 0) {
    param_2 = 0;
  }
  else {
    if (*param_1 < param_2) {
      FUN_140d80a70(param_1[1] + *param_1,0,param_2 - *param_1);
    }
    *param_1 = param_2;
  }
  return param_2;
}


/* address=140d80800 name=FUN_140d80800 */

void FUN_140d80800(undefined8 param_1,undefined8 param_2)

{
  FUN_140d80780(param_1,param_2);
  return;
}


/* address=140d80830 name=FUN_140d80830 */

undefined8 FUN_140d80830(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (param_3 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = *param_1 + param_3;
    if (uVar3 < param_3) {
      FUN_140c6c4e0(7,0,0x45,s_D__a_1_s_target_release_build_bo_1413cf9e0,0x89);
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_140d80660(param_1,uVar3);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        FUN_140d80a20(param_1[1] + *param_1,param_2,param_3);
        *param_1 = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


/* address=140d80a20 name=FUN_140d80a20 */

undefined8 FUN_140d80a20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e286a0(param_1,param_2,param_3);
  }
  return param_1;
}


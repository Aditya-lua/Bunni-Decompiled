/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=1407c8fd0 name=FUN_1407c8fd0 */

void FUN_1407c8fd0(void)

{
  FUN_1407ac640();
  return;
}


/* address=1407c8ff0 name=FUN_1407c8ff0 */

void FUN_1407c8ff0(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407c9010 name=FUN_1407c9010 */

void FUN_1407c9010(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407c9040 name=FUN_1407c9040 */

void FUN_1407c9040(undefined8 param_1,undefined8 param_2)

{
  FUN_1407aca20(param_1,param_2);
  return;
}


/* address=1407c9070 name=FUN_1407c9070 */

void FUN_1407c9070(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acf60(param_1,param_2);
  return;
}


/* address=1407c91d0 name=FUN_1407c91d0 */

undefined8 FUN_1407c91d0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(*param_1 + 0x30) == 0) {
    uVar1 = FUN_1407c8fd0();
    *(undefined8 *)(*param_1 + 0x30) = uVar1;
  }
  if ((*(longlong *)(*param_1 + 0x30) != 0) &&
     (lVar2 = FUN_1407c9070(*(undefined8 *)(*param_1 + 0x30),param_2), lVar2 != 0)) {
    return 1;
  }
  return 0;
}


/* address=1407c92a0 name=FUN_1407c92a0 */

void FUN_1407c92a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407d8880(param_1,param_2,param_3,&DAT_14099db20);
  return;
}


/* address=1407c92e0 name=FUN_1407c92e0 */

void FUN_1407c92e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407dab60(param_1,param_2,&DAT_14099db20);
  return;
}


/* address=1407c9330 name=FUN_1407c9330 */

void FUN_1407c9330(void)

{
  FUN_1407ac640();
  return;
}


/* address=1407c93e0 name=FUN_1407c93e0 */

void FUN_1407c93e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407dab60(param_1,param_2,&DAT_14099db50);
  return;
}


/* address=1407c9730 name=FUN_1407c9730 */

void FUN_1407c9730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14080da10(&LAB_1407cad70,s_X509_CRL_140bedf40,param_1,param_2,param_3,param_4);
  return;
}


/* address=1407caab0 name=FUN_1407caab0 */

longlong FUN_1407caab0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140750600(param_1);
    FUN_140750120(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_14078c7d0(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=1407cab30 name=FUN_1407cab30 */

longlong FUN_1407cab30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140750700(param_1);
    FUN_140750120(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_1407d0310(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=1407cabb0 name=FUN_1407cabb0 */

longlong FUN_1407cabb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140750800(param_1);
    FUN_140750120(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_140791100(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=1407cba70 name=FUN_1407cba70 */

undefined4 * FUN_1407cba70(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1407ccfc0(0x18);
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


/* address=1407cbae0 name=FUN_1407cbae0 */

void FUN_1407cbae0(void)

{
  FUN_1407cba70(4);
  return;
}


/* address=1407cbb00 name=FUN_1407cbb00 */

void FUN_1407cbb00(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1407cd0f0(*(undefined8 *)(param_1 + 8));
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407cbb40 name=FUN_1407cbb40 */

undefined8 FUN_1407cbb40(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_1407cbdc0(param_1,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
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


/* address=1407cbbb0 name=FUN_1407cbbb0 */

longlong FUN_1407cbbb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1407cbae0();
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      iVar1 = FUN_1407cbb40(lVar2,param_1);
      if (iVar1 == 0) {
        FUN_1407cbb00(lVar2);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


/* address=1407cbc30 name=FUN_1407cbc30 */

undefined8 FUN_1407cbc30(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=1407cbc70 name=FUN_1407cbc70 */

undefined4 FUN_1407cbc70(undefined4 *param_1)

{
  return *param_1;
}


/* address=1407cbc90 name=FUN_1407cbc90 */

int FUN_1407cbc90(int *param_1,int *param_2)

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
    local_14 = FUN_1407dcd60(param_1,&local_18);
  }
  if (param_2[1] == 3) {
    local_10 = FUN_1407dcd60(param_2,local_17);
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
    iVar1 = FUN_1407cc3c0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2),
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


/* address=1407cbdc0 name=FUN_1407cbdc0 */

undefined8 FUN_1407cbdc0(int *param_1,char *param_2,ulonglong param_3)

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
        uVar2 = FUN_1407ccfc0(local_28 + 1);
        *(undefined8 *)(param_1 + 2) = uVar2;
      }
      else {
        uVar2 = FUN_1407cd1a0(lVar1,local_28 + 1);
        *(undefined8 *)(param_1 + 2) = uVar2;
      }
      if (*(longlong *)(param_1 + 2) == 0) {
        *(longlong *)(param_1 + 2) = lVar1;
        return 0;
      }
    }
    *param_1 = (int)local_28;
    if (param_2 != (char *)0x0) {
      FUN_1407cc400(*(undefined8 *)(param_1 + 2),param_2,local_28);
      *(undefined *)(*(longlong *)(param_1 + 2) + local_28) = 0;
    }
    uVar2 = 1;
  }
  else {
    FUN_1407c2680(0xc,0,0x45,s_D__a_1_s_target_release_build_bo_140beebd0,0x117);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1407cbf30 name=FUN_1407cbf30 */

void FUN_1407cbf30(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407cd0f0(*(undefined8 *)(param_1 + 2));
  *(undefined8 *)(param_1 + 2) = param_2;
  *param_1 = param_3;
  return;
}


/* address=1407cbf80 name=FUN_1407cbf80 */

uint FUN_1407cbf80(undefined8 *param_1,undefined4 *param_2,uint *param_3,uint *param_4,int param_5)

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
    FUN_1407c2680(0xc,0,0x7b,s_D__a_1_s_target_release_build_bo_140beea80,0x6e);
  }
  else {
    FUN_1407dce80(local_18,*param_1,(longlong)param_5);
    iVar1 = FUN_1407dd7a0(local_18,local_28,&local_38);
    if ((iVar1 != 0) && (uVar3 = FUN_1407dcf10(local_28), uVar3 < 0x40000000)) {
      local_30 = (local_38 & 0xc0000000) >> 0x18;
      local_2c = (local_38 & 0x20000000) >> 0x18;
      local_34 = local_38 & 0x1fffffff;
      if ((local_30 == 0) && (0xff < local_34)) {
        FUN_1407c2680(0xc,0,0x7b,s_D__a_1_s_target_release_build_bo_140beeb60,0x84);
        return 0x80;
      }
      uVar4 = FUN_1407dcef0(local_28);
      *param_1 = uVar4;
      uVar2 = FUN_1407dcf10(local_28);
      *param_2 = uVar2;
      *param_3 = local_34;
      *param_4 = local_30;
      return local_2c;
    }
    FUN_1407c2680(0xc,0,0x7b,s_D__a_1_s_target_release_build_bo_140beeaf0,0x79);
  }
  return 0x80;
}


/* address=1407cc100 name=FUN_1407cc100 */

void FUN_1407cc100(byte **param_1,int param_2,undefined4 param_3,int param_4,byte param_5)

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
    FUN_1407cc450(local_18,param_3);
  }
  *param_1 = local_18[0];
  return;
}


/* address=1407cc300 name=FUN_1407cc300 */

int FUN_1407cc300(int param_1,int param_2,int param_3)

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


/* address=1407cc3c0 name=FUN_1407cc3c0 */

int FUN_1407cc3c0(void *param_1,void *param_2,size_t param_3)

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


/* address=1407cc400 name=FUN_1407cc400 */

undefined8 FUN_1407cc400(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407cc450 name=FUN_1407cc450 */

void FUN_1407cc450(byte **param_1,int param_2)

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


/* address=1407cc540 name=FUN_1407cc540 */

undefined8
FUN_1407cc540(undefined4 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
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
    uVar1 = FUN_1407e0da0(&local_38);
  }
  else {
    FUN_1407c2680(0xc,0,0xad,s_D__a_1_s_target_release_build_bo_140beeff0,0xde);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=1407cc5e0 name=FUN_1407cc5e0 */

void FUN_1407cc5e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)(param_1 + 4) & 4) != 0) {
      FUN_1407cd0f0(*param_1);
      FUN_1407cd0f0(param_1[1]);
      param_1[1] = 0;
      *param_1 = 0;
    }
    if ((*(uint *)(param_1 + 4) & 8) != 0) {
      FUN_1407cd0f0(param_1[3]);
      param_1[3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      FUN_1407cd0f0(param_1);
    }
  }
  return;
}


/* address=1407cc8d0 name=FUN_1407cc8d0 */

longlong FUN_1407cc8d0(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  undefined local_20 [32];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (param_3 < 0) {
    FUN_1407c2680(0xc,0,0x92,s_D__a_1_s_target_release_build_bo_140beef10,CONCAT44(uVar3,0x9f));
    lVar2 = 0;
  }
  else {
    FUN_1407dce80(local_20,*param_2,(longlong)param_3);
    iVar1 = FUN_1407de110(local_20);
    if (iVar1 == 0) {
      FUN_1407c2680(0xc,0,0x92,s_D__a_1_s_target_release_build_bo_140beef80,CONCAT44(uVar3,0xa6));
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_1407cc540(0,*param_2,(longlong)param_3,0,0);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_1407cc5e0(*param_1);
          *param_1 = lVar2;
        }
        *param_2 = (longlong)param_3 + *param_2;
      }
    }
  }
  return lVar2;
}


/* address=1407cc9e0 name=FUN_1407cc9e0 */

void FUN_1407cc9e0(undefined8 param_1,longlong param_2)

{
  undefined auStack_a8 [32];
  int local_88;
  char *local_80;
  undefined4 local_78;
  char *local_70;
  char local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_a8;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    FUN_1407ccbd0(param_1,&DAT_140beed84);
  }
  else {
    local_80 = (char *)0x0;
    local_70 = local_68;
    local_88 = FUN_1407ccb10(local_68,0x50,param_2);
    if (0x4f < local_88) {
      local_80 = (char *)FUN_1407ccfc0((longlong)(local_88 + 1));
      if (local_80 == (char *)0x0) goto LAB_1407ccaee;
      local_88 = FUN_1407ccb10(local_80,local_88 + 1,param_2);
      local_70 = local_80;
    }
    if (local_88 < 1) {
      local_70 = s_<INVALID>_140beed90;
    }
    local_78 = FUN_1407ccbd0(param_1,local_70);
    FUN_1407cd0f0(local_80);
  }
LAB_1407ccaee:
  FUN_140805d70(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=1407ccb10 name=FUN_1407ccb10 */

void FUN_1407ccb10(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1407e15f0(param_1,param_2,param_3,0);
  return;
}


/* address=1407ccb50 name=FUN_1407ccb50 */

undefined8 * FUN_1407ccb50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1407ccfc0(0x28);
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


/* address=1407ccbd0 name=FUN_1407ccbd0 */

int FUN_1407ccbd0(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int local_18;
  int local_10;
  
  sVar2 = strlen(param_2);
  if (sVar2 < 0x80000000) {
    iVar1 = FUN_1407c0340(param_1,param_2,sVar2 & 0xffffffff);
    local_10 = (int)sVar2;
    local_18 = local_10;
    if (iVar1 != local_10) {
      local_18 = -1;
    }
  }
  else {
    FUN_1407c2680(0xc,0,0x45,s_D__a_1_s_target_release_build_bo_140beed20,0x65);
    local_18 = -1;
  }
  return local_18;
}


/* address=1407ccc60 name=FUN_1407ccc60 */

void FUN_1407ccc60(void)

{
  FUN_1407d7900(&DAT_14099dc80);
  return;
}


/* address=1407ccc80 name=FUN_1407ccc80 */

void FUN_1407ccc80(undefined8 param_1)

{
  FUN_14080fec0(&DAT_14099dc80,param_1);
  return;
}


/* address=1407cccb0 name=FUN_1407cccb0 */

void FUN_1407cccb0(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_14099dc80);
  return;
}


/* address=1407ccce0 name=FUN_1407ccce0 */

void FUN_1407ccce0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407d8880(param_1,param_2,param_3,&DAT_14099dc80);
  return;
}


/* address=1407ccd20 name=FUN_1407ccd20 */

void FUN_1407ccd20(undefined8 param_1,undefined8 param_2)

{
  FUN_1407dab60(param_1,param_2,&DAT_14099dc80);
  return;
}


/* address=1407ccd50 name=FUN_1407ccd50 */

undefined8 FUN_1407ccd50(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_3 != -1) {
      if (param_1[1] == 0) {
        uVar1 = FUN_1407d76a0();
        param_1[1] = uVar1;
      }
      if (param_1[1] == 0) {
        return 0;
      }
    }
    if (param_1 != (undefined8 *)0x0) {
      FUN_1407cc5e0(*param_1);
      *param_1 = param_2;
    }
    if (param_3 == 0) {
      uVar1 = 1;
    }
    else {
      if (param_3 == -1) {
        if (param_1[1] != 0) {
          FUN_1407d76c0(param_1[1]);
          param_1[1] = 0;
        }
      }
      else {
        FUN_140810050(param_1[1],param_3,param_4);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=1407ccee0 name=FUN_1407ccee0 */

void FUN_1407ccee0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  
  uVar1 = FUN_140756650(param_2);
  if ((uVar1 & 2) == 0) {
    local_18 = 5;
  }
  else {
    local_18 = 0xffffffff;
  }
  uVar2 = FUN_140756630(param_2);
  uVar3 = FUN_1407e1390(uVar2);
  FUN_1407ccd50(param_1,uVar3,local_18,0);
  return;
}


/* address=1407ccf50 name=FUN_1407ccf50 */

ulonglong FUN_1407ccf50(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1407e0f80(*param_1,*param_2);
  if (uVar1 == 0) {
    if ((param_1[1] == 0) && (param_2[1] == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1408101c0(param_1[1],param_2[1]);
    }
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2;
}


/* address=1407ccfc0 name=FUN_1407ccfc0 */

ulonglong * FUN_1407ccfc0(ulonglong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  
  iVar1 = FUN_1407ce000();
  if (iVar1 == 0) {
    if (DAT_140c1bf20 == (code *)0x0) {
      if ((param_1 <= param_1 + 8) &&
         (puVar2 = (ulonglong *)_malloc_base(param_1 + 8), puVar2 != (ulonglong *)0x0)) {
        *puVar2 = param_1;
        FUN_1407cdfc0(puVar2,8);
        return puVar2 + 1;
      }
    }
    else {
      if (DAT_140c1bf28 == 0) {
        FID_conflict__assert((wchar_t *)s_O_140bef148,(wchar_t *)s_D_140bef090,0xea);
      }
      if (DAT_140c1bf30 == 0) {
        FID_conflict__assert((wchar_t *)s_O_140bef240,(wchar_t *)s_D_140bef180,0xeb);
      }
      puVar2 = (ulonglong *)(*DAT_140c1bf20)(param_1);
      if (puVar2 != (ulonglong *)0x0) {
        return puVar2;
      }
      if (param_1 == 0) {
        return (ulonglong *)0x0;
      }
    }
  }
  FUN_1407c2680(0xe,0,0x41,s_D__a_1_s_target_release_build_bo_140bef280,0x10b);
  return (ulonglong *)0x0;
}


/* address=1407cd0f0 name=FUN_1407cd0f0 */

void FUN_1407cd0f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    if (DAT_140c1bf28 == (code *)0x0) {
      plVar2 = (longlong *)(param_1 + -8);
      FUN_1407cdfe0(plVar2,8);
      lVar1 = *plVar2;
      FUN_1407cd290(plVar2,lVar1 + 8);
      if (DAT_140c1bf18 == (code *)0x0) {
        thunk_FUN_1408c7230(plVar2);
      }
      else {
        (*DAT_140c1bf18)(plVar2,lVar1 + 8,0);
      }
    }
    else {
      (*DAT_140c1bf28)(param_1);
    }
  }
  return;
}


/* address=1407cd1a0 name=FUN_1407cd1a0 */

longlong FUN_1407cd1a0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong local_20;
  ulonglong local_18;
  
  if (param_1 == 0) {
    lVar1 = FUN_1407ccfc0(param_2);
  }
  else {
    if (DAT_140c1bf30 == (code *)0x0) {
      puVar2 = (ulonglong *)(param_1 + -8);
      FUN_1407cdfe0(puVar2,8);
      local_20 = *puVar2;
      FUN_1407cdfc0(puVar2,8);
    }
    else {
      local_20 = (*DAT_140c1bf30)(param_1);
    }
    lVar1 = FUN_1407ccfc0(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      local_18 = param_2;
      if (local_20 < param_2) {
        local_18 = local_20;
      }
      FUN_1408d7440(lVar1,param_1,local_18);
      FUN_1407cd0f0(param_1);
    }
  }
  return lVar1;
}


/* address=1407cd290 name=FUN_1407cd290 */

void FUN_1407cd290(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ce0a0(param_1,param_2);
  return;
}


/* address=1407cd2c0 name=FUN_1407cd2c0 */

byte FUN_1407cd2c0(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte local_28;
  ulonglong local_20;
  
  local_28 = 0;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    local_28 = local_28 | *(byte *)(param_1 + local_20) ^ *(byte *)(param_2 + local_20);
  }
  return local_28;
}


/* address=1407cd360 name=FUN_1407cd360 */

uint FUN_1407cd360(longlong param_1,ulonglong param_2)

{
  uint local_28;
  ulonglong local_20;
  
  local_28 = DAT_14099dd08;
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    local_28 = (local_28 ^ *(byte *)(param_1 + local_20)) * DAT_14099dd04;
  }
  return local_28;
}


/* address=1407cd3e0 name=FUN_1407cd3e0 */

void FUN_1407cd3e0(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_1407cd360(param_1,sVar1);
  return;
}


/* address=1407cd410 name=FUN_1407cd410 */

longlong FUN_1407cd410(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  
  if (param_1 == (char *)0x0) {
    lVar2 = 0;
  }
  else {
    sVar1 = strlen(param_1);
    lVar2 = FUN_1407ccfc0(sVar1 + 1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1407cdd90(lVar2,param_1,sVar1 + 1);
    }
  }
  return lVar2;
}


/* address=1407cd480 name=FUN_1407cd480 */

ulonglong FUN_1407cd480(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong local_18;
  
  for (local_18 = 0;
      (uVar1 = param_2, local_18 < param_2 &&
      (uVar1 = local_18, *(char *)(param_1 + local_18) != '\0')); local_18 = local_18 + 1) {
  }
  return uVar1;
}


/* address=1407cd4e0 name=__ascii_iswalpha */

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


/* address=1407cd530 name=FUN_1407cd530 */

undefined4 FUN_1407cd530(int param_1)

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


/* address=1407cd570 name=FUN_1407cd570 */

undefined4 FUN_1407cd570(int param_1)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_1407cd530(param_1);
  if (((iVar1 == 0) && ((param_1 < 0x61 || (0x66 < param_1)))) &&
     ((param_1 < 0x41 || (0x46 < param_1)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=1407cd5d0 name=FUN_1407cd5d0 */

undefined8 FUN_1407cd5d0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1407cd530(param_2);
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


/* address=1407cd660 name=FUN_1407cd660 */

undefined4 FUN_1407cd660(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = __ascii_iswalpha(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_1407cd530(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}


/* address=1407cd6b0 name=__ascii_tolower */

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


/* address=1407cd6e0 name=FUN_1407cd6e0 */

undefined4 FUN_1407cd6e0(int param_1)

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


/* address=1407cd730 name=FUN_1407cd730 */

undefined8 FUN_1407cd730(longlong param_1,longlong param_2)

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


/* address=1407cd7d0 name=FUN_1407cd7d0 */

undefined8 FUN_1407cd7d0(longlong param_1,longlong param_2,ulonglong param_3)

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


/* address=1407cd890 name=_snprintf */

/* Library Function - Single Match
    _snprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  iVar1 = FUN_1407cd8f0(_Dest,_Count,_Format,&local_res20);
  return iVar1;
}


/* address=1407cd8f0 name=FUN_1407cd8f0 */

void FUN_1407cd8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1407ce020(param_1,param_2,param_3,param_4);
  return;
}


/* address=1407cd930 name=FUN_1407cd930 */

void FUN_1407cd930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1407cdde0(param_1,param_2,param_3,0);
  return;
}


/* address=1407cd9d0 name=FUN_1407cd9d0 */

longlong FUN_1407cd9d0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1407cd480(param_1,param_2);
  if (uVar1 + 1 < uVar1) {
    FUN_1407c2680(0xe,0,0x41,s_D__a_1_s_target_release_build_bo_140bef2e0,0x22f);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1407ccfc0(uVar1 + 1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1407cdd90(lVar2,param_1,uVar1);
      *(undefined *)(lVar2 + uVar1) = 0;
    }
  }
  return lVar2;
}


/* address=1407cda90 name=FUN_1407cda90 */

longlong FUN_1407cda90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1407ccfc0(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1407cdd90(lVar1,param_1,param_2);
    }
  }
  return lVar1;
}


/* address=1407cdaf0 name=FUN_1407cdaf0 */

longlong FUN_1407cdaf0(char *param_1,char *param_2,ulonglong param_3)

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


/* address=1407cdba0 name=FUN_1407cdba0 */

longlong FUN_1407cdba0(char *param_1,undefined8 param_2,longlong param_3)

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
  lVar1 = FUN_1407cdaf0(local_res8,param_2,local_res18);
  return local_18 + lVar1;
}


/* address=1407cdcd0 name=FUN_1407cdcd0 */

void FUN_1407cdcd0(undefined8 param_1)

{
  FUN_1407cd0f0(param_1);
  return;
}


/* address=1407cdd90 name=FUN_1407cdd90 */

undefined8 FUN_1407cdd90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407cdde0 name=FUN_1407cdde0 */

uint FUN_1407cdde0(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
    local_50 = FUN_1407ccfc0;
    local_48 = FUN_1407cd0f0;
    local_40 = FUN_1407cd1a0;
  }
  else {
    local_50 = _malloc_base;
    local_48 = thunk_FUN_1408c7230;
    local_40 = _realloc_base;
  }
  local_58 = 0x40;
  lVar1 = (*local_50)(0x40);
  if ((lVar1 != 0) && (local_68 = FUN_1407ce020(lVar1,0x40,param_2,param_3), -1 < (int)local_68)) {
    local_60 = lVar1;
    if (0x3f < local_68) {
      local_58 = (longlong)(int)local_68 + 1;
      local_60 = (*local_40)(lVar1,local_58);
      if (local_60 == 0) goto LAB_1407cdf82;
      local_68 = FUN_1407ce020(local_60,local_58,param_2,param_3);
    }
    lVar1 = local_60;
    if ((-1 < (int)local_68) && ((ulonglong)(longlong)(int)local_68 < local_58)) {
      *param_1 = local_60;
      return local_68;
    }
  }
LAB_1407cdf82:
  local_60 = lVar1;
  (*local_48)(local_60);
  *param_1 = 0;
  puVar2 = (undefined4 *)FUN_1408bb398();
  *puVar2 = 0xc;
  return 0xffffffff;
}


/* address=1407cdfc0 name=FUN_1407cdfc0 */

void FUN_1407cdfc0(void)

{
  return;
}


/* address=1407cdfe0 name=FUN_1407cdfe0 */

void FUN_1407cdfe0(void)

{
  return;
}


/* address=1407ce000 name=FUN_1407ce000 */

undefined8 FUN_1407ce000(void)

{
  return 0;
}


/* address=1407ce010 name=FUN_1407ce010 */

undefined * FUN_1407ce010(void)

{
  return &DAT_140c1bf38;
}


/* address=1407ce020 name=FUN_1407ce020 */

int FUN_1407ce020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int local_14;
  
  puVar1 = (ulonglong *)FUN_1407ce010();
  local_14 = FUN_1408afce0(*puVar1 | 2,param_1,param_2,param_3,0,param_4);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}


/* address=1407ce0a0 name=FUN_1407ce0a0 */

undefined * FUN_1407ce0a0(undefined *param_1,longlong param_2)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}


/* address=1407ce0d0 name=FUN_1407ce0d0 */

void FUN_1407ce0d0(undefined8 param_1)

{
  FUN_1407cbbb0(param_1);
  return;
}


/* address=1407ce0f0 name=FUN_1407ce0f0 */

int * FUN_1407ce0f0(int **param_1,longlong *param_2,int param_3)

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
    FUN_1407c2680(0xc,0,0xb1,s_D__a_1_s_target_release_build_bo_140bef650,0xb6);
    local_30 = (int *)0x0;
  }
  else {
    FUN_1407dce80(local_18,*param_2,(longlong)param_3);
    iVar1 = FUN_1407ddfe0(local_18,local_38);
    if (iVar1 == 0) {
      FUN_1407c2680(0xc,0,0xc4,s_D__a_1_s_target_release_build_bo_140bef6b0,0xbe);
      local_30 = (int *)0x0;
    }
    else {
      local_30 = (int *)0x0;
      if ((param_1 == (int **)0x0) || (*param_1 == (int *)0x0)) {
        local_30 = (int *)FUN_1407d7320();
        if (local_30 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_30 = *param_1;
      }
      if (local_38[0] == 0) {
        lVar2 = FUN_1407dcf10(local_18);
        if ((lVar2 != 0) && (pcVar3 = (char *)FUN_1407dcef0(local_18), *pcVar3 == '\0')) {
          FUN_1407dcec0(local_18,1);
        }
      }
      else {
        lVar2 = FUN_1407dcf10(local_18);
        if ((lVar2 != 0) && (pcVar3 = (char *)FUN_1407dcef0(local_18), *pcVar3 == -1)) {
          local_28 = FUN_1407dcf10(local_18);
          local_28 = local_28 + -1;
          lVar2 = FUN_1407dcef0(local_18);
          iVar1 = FUN_1407cecc0(lVar2 + 1,local_28);
          if (iVar1 == 0) {
            FUN_1407dcec0(local_18,1);
          }
        }
      }
      local_20 = FUN_1407dcf10(local_18);
      uVar4 = FUN_1407dcef0(local_18);
      iVar1 = FUN_1407cbdc0(local_30,uVar4,local_20);
      if (iVar1 == 0) {
        if ((local_30 != (int *)0x0) && ((param_1 == (int **)0x0 || (*param_1 != local_30)))) {
          FUN_1407d7340(local_30);
        }
        local_30 = (int *)0x0;
      }
      else {
        if (local_38[0] == 0) {
          local_30[1] = 2;
        }
        else {
          local_30[1] = 0x102;
          FUN_1407cec10(*(undefined8 *)(local_30 + 2),(longlong)*local_30);
        }
        if ((*local_30 != 0) && (**(char **)(local_30 + 2) == '\0')) {
          FID_conflict__assert((wchar_t *)s_r_140bef7d0,(wchar_t *)s_D_140bef710,0xea);
        }
        if ((local_38[0] != 0) && (*local_30 < 1)) {
          FID_conflict__assert((wchar_t *)s___140bef8e0,(wchar_t *)s_D_140bef820,0xec);
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


/* address=1407ce3e0 name=FUN_1407ce3e0 */

int FUN_1407ce3e0(int *param_1,byte **param_2)

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
  FUN_1407dce80(local_50,*(undefined8 *)(param_1 + 2),(longlong)*param_1);
  while ((lVar2 = FUN_1407dcf10(local_50), lVar2 != 0 &&
         (pcVar3 = (char *)FUN_1407dcef0(local_50), *pcVar3 == '\0'))) {
    FUN_1407dcec0(local_50,1);
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
  iVar1 = FUN_1407dd110(local_30,local_78);
  if (iVar1 == 0) {
    local_70 = 0;
    local_68 = 1;
    goto LAB_1407ce568;
  }
  if (local_70 == 0) {
    local_58 = (uint)((local_78[0] & 0x80) != 0);
    local_68 = (longlong)(int)local_58;
    goto LAB_1407ce568;
  }
  if (local_78[0] < 0x81) {
    if (local_78[0] == 0x80) {
      local_40 = FUN_1407dcf10(local_30);
      uVar5 = FUN_1407dcef0(local_30);
      iVar1 = FUN_1407cecc0(uVar5,local_40);
      if (iVar1 == 0) goto LAB_1407ce52a;
    }
    local_5c = 0;
  }
  else {
LAB_1407ce52a:
    local_5c = 1;
  }
  local_68 = (longlong)local_5c;
LAB_1407ce568:
  uVar4 = FUN_1407dcf10(local_50);
  if (0x7fffffffU - local_68 < uVar4) {
    FUN_1407c2680(0xc,0,0x45,s_D__a_1_s_target_release_build_bo_140bef340,0x99);
    local_74 = 0;
  }
  else {
    local_74 = FUN_1407dcf10(local_50);
    local_74 = (int)local_68 + local_74;
    if (local_74 < 1) {
      FID_conflict__assert((wchar_t *)s_l_140bef460,(wchar_t *)s_D_140bef3a0,0x9d);
    }
    if (param_2 != (byte **)0x0) {
      if (local_68 != 0) {
        **param_2 = 0;
      }
      local_38 = FUN_1407dcf10(local_50);
      uVar5 = FUN_1407dcef0(local_50);
      FUN_1407ceb40(*param_2 + local_68,uVar5,local_38);
      if (local_70 == 0) {
        if (0x7f < **param_2) {
          FID_conflict__assert((wchar_t *)s___140bef620,(wchar_t *)s_D_140bef560,0xaa);
        }
      }
      else {
        FUN_1407cec10(*param_2,(longlong)local_74);
        if (**param_2 < 0x80) {
          FID_conflict__assert((wchar_t *)s___140bef530,(wchar_t *)s_D_140bef470,0xa8);
        }
      }
      *param_2 = *param_2 + local_74;
    }
  }
  return local_74;
}


/* address=1407ce720 name=FUN_1407ce720 */

void FUN_1407ce720(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ced20(param_1,param_2,2);
  return;
}


/* address=1407ce750 name=FUN_1407ce750 */

undefined8 FUN_1407ce750(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 < 0) {
    iVar1 = FUN_1407ce720(param_1,-param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 0x102;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = FUN_1407ce720(param_1,param_2);
  }
  return uVar2;
}


/* address=1407ce7b0 name=FUN_1407ce7b0 */

void FUN_1407ce7b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ceee0(param_1,param_2,2);
  return;
}


/* address=1407ce810 name=FUN_1407ce810 */

void FUN_1407ce810(undefined8 param_1,undefined8 param_2)

{
  FUN_1407cf0c0(param_1,param_2,2);
  return;
}


/* address=1407ce840 name=FUN_1407ce840 */

void FUN_1407ce840(undefined8 param_1,undefined8 param_2)

{
  FUN_1407cf1d0(param_1,param_2,2);
  return;
}


/* address=1407ce870 name=FUN_1407ce870 */

int FUN_1407ce870(longlong param_1,longlong param_2)

{
  uint uVar1;
  int local_10;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar1 == (*(uint *)(param_2 + 4) & 0x100)) {
    local_10 = FUN_1407cbc90(param_1,param_2);
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


/* address=1407ce910 name=FUN_1407ce910 */

void FUN_1407ce910(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ced20(param_1,param_2,10);
  return;
}


/* address=1407ce940 name=FUN_1407ce940 */

undefined8 FUN_1407ce940(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 < 0) {
    iVar1 = FUN_1407ce910(param_1,-param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 0x10a;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = FUN_1407ce910(param_1,param_2);
  }
  return uVar2;
}


/* address=1407cea30 name=FUN_1407cea30 */

void FUN_1407cea30(undefined8 param_1,undefined8 param_2)

{
  FUN_1407cf1d0(param_1,param_2,10);
  return;
}


/* address=1407ceac0 name=FUN_1407ceac0 */

void FUN_1407ceac0(undefined8 param_1)

{
  FUN_1407cf050(param_1,2);
  return;
}


/* address=1407ceaf0 name=FUN_1407ceaf0 */

void FUN_1407ceaf0(undefined8 param_1)

{
  FUN_1407cf050(param_1,10);
  return;
}


/* address=1407ceb20 name=FUN_1407ceb20 */

ulonglong FUN_1407ceb20(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=1407ceb40 name=FUN_1407ceb40 */

undefined8 FUN_1407ceb40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407ceb90 name=FUN_1407ceb90 */

void FUN_1407ceb90(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_1407ceb40(local_18,param_1,8);
  FUN_1407ceb20(local_18[0]);
  return;
}


/* address=1407cebd0 name=FUN_1407cebd0 */

void FUN_1407cebd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  local_res10[0] = FUN_1407ceb20(param_2);
  FUN_1407ceb40(param_1,local_res10,8);
  return;
}


/* address=1407cec10 name=FUN_1407cec10 */

void FUN_1407cec10(longlong param_1,ulonglong param_2)

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


/* address=1407cecc0 name=FUN_1407cecc0 */

undefined8 FUN_1407cecc0(longlong param_1,ulonglong param_2)

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


/* address=1407ced20 name=FUN_1407ced20 */

void FUN_1407ced20(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined auStack_48 [32];
  ulonglong local_28;
  char local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_48;
  FUN_1407cebd0(local_20,param_2);
  for (local_28 = 0; (local_28 < 8 && (local_20[local_28] == '\0')); local_28 = local_28 + 1) {
  }
  iVar1 = FUN_1407cbdc0(param_1,local_20 + local_28,8 - local_28);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_3;
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_48);
  return;
}


/* address=1407cede0 name=FUN_1407cede0 */

void FUN_1407cede0(undefined8 *param_1,int *param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined auStack_58 [32];
  undefined4 local_38;
  undefined local_28 [8];
  undefined local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_58;
  if ((param_2[1] & 0xfffffeffU) == param_3) {
    puVar3 = local_28;
    for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    if (*param_2 < 9) {
      FUN_1407ceb40(local_20 + -(longlong)*param_2,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
      uVar1 = FUN_1407ceb90(local_28);
      *param_1 = uVar1;
    }
    else {
      local_38 = 0x140;
      FUN_1407c2680(0xc,0,0xc4,s_D__a_1_s_target_release_build_bo_140bef980);
    }
  }
  else {
    local_38 = 0x13b;
    FUN_1407c2680(0xc,0,0xc3,s_D__a_1_s_target_release_build_bo_140bef920);
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=1407ceee0 name=FUN_1407ceee0 */

undefined8 FUN_1407ceee0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1407cede0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if ((*(uint *)(param_2 + 4) & 0x100) == 0) {
    uVar2 = 1;
  }
  else {
    FUN_1407c2680(0xc,0,0xc4,s_D__a_1_s_target_release_build_bo_140bef9e0,0x14e);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1407cef60 name=FUN_1407cef60 */

undefined8 FUN_1407cef60(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong local_18;
  longlong local_10 [2];
  
  iVar1 = FUN_1407cede0(local_10,param_2,param_3);
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
      FUN_1407c2680(0xc,0,0xc4,s_D__a_1_s_target_release_build_bo_140befa40,0x16c);
      uVar2 = 0;
    }
    else {
      *param_1 = local_18;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=1407cf050 name=FUN_1407cf050 */

undefined4 FUN_1407cf050(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    iVar1 = FUN_1407cef60(&local_18,param_1,param_2);
    if (((iVar1 == 0) || (CONCAT44(uStack_14,local_18) < -0x80000000)) ||
       (0x7fffffff < CONCAT44(uStack_14,local_18))) {
      FUN_1407c2320();
      local_18 = 0xffffffff;
    }
  }
  return local_18;
}


/* address=1407cf0c0 name=FUN_1407cf0c0 */

longlong FUN_1407cf0c0(undefined8 param_1,longlong param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  longlong local_10;
  
  local_10 = param_2;
  if (param_2 == 0) {
    local_10 = FUN_1407cba70(param_3);
  }
  if (local_10 == 0) {
    FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140befaa0,0x19c);
  }
  else {
    iVar1 = FUN_1407617f0(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_1407637a0(param_1), iVar1 != 0)) {
      *(uint *)(local_10 + 4) = param_3;
    }
    else {
      *(uint *)(local_10 + 4) = param_3 | 0x100;
    }
    iVar1 = FUN_140761660(param_1);
    iVar2 = FUN_1407cbdc0(local_10,0,(longlong)iVar1);
    if ((iVar2 != 0) &&
       (iVar1 = FUN_140761b70(*(undefined8 *)(local_10 + 8),(longlong)iVar1,param_1), iVar1 != 0)) {
      return local_10;
    }
  }
  if (local_10 != param_2) {
    FUN_1407cbb00(local_10);
  }
  return 0;
}


/* address=1407cf1d0 name=FUN_1407cf1d0 */

longlong FUN_1407cf1d0(int *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  
  if ((param_1[1] & 0xfffffeffU) == param_3) {
    lVar1 = FUN_140761830(*(undefined8 *)(param_1 + 2),(longlong)*param_1,param_2);
    if (lVar1 == 0) {
      FUN_1407c2680(0xc,0,0x69,s_D__a_1_s_target_release_build_bo_140befb60,0x1c4);
    }
    else if ((param_1[1] & 0x100U) != 0) {
      FUN_1407617a0(lVar1,1);
    }
  }
  else {
    FUN_1407c2680(0xc,0,0xc3,s_D__a_1_s_target_release_build_bo_140befb00,0x1be);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=1407cf2a0 name=FUN_1407cf2a0 */

undefined4 FUN_1407cf2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_10 [2];
  
  iVar1 = FUN_1407dfa00(param_1,local_10,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_140761b70(local_10[0],param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=1407cf310 name=FUN_1407cf310 */

char * FUN_1407cf310(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  int local_38;
  int local_34;
  char *local_20;
  
  local_38 = FUN_140769420(param_1);
  pcVar4 = (char *)FUN_1407ccfc0((longlong)(local_38 * 0x10 + 3));
  if (pcVar4 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    local_20 = pcVar4;
    if (*(int *)(param_1 + 2) != 0) {
      *pcVar4 = '-';
      local_20 = pcVar4 + 1;
    }
    iVar2 = FUN_1407637a0(param_1);
    if (iVar2 != 0) {
      *local_20 = '0';
      local_20 = local_20 + 1;
    }
    bVar1 = false;
    while (local_38 = local_38 + -1, -1 < local_38) {
      for (local_34 = 0x38; -1 < local_34; local_34 = local_34 + -8) {
        uVar5 = *(ulonglong *)(*param_1 + (longlong)local_38 * 8) >> ((byte)local_34 & 0x3f);
        uVar3 = (uint)uVar5;
        if ((bVar1) || ((uVar5 & 0xff) != 0)) {
          *local_20 = "0123456789abcdef"[(int)(uVar3 & 0xff) >> 4];
          local_20[1] = "0123456789abcdef"[(int)(uVar3 & 0xf)];
          local_20 = local_20 + 2;
          bVar1 = true;
        }
      }
    }
    *local_20 = '\0';
  }
  return pcVar4;
}


/* address=1407cf4a0 name=FUN_1407cf4a0 */

void FUN_1407cf4a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407d0120(param_1,param_2,&LAB_1407cfe70,FUN_1407cd570);
  return;
}


/* address=1407cf4e0 name=FUN_1407cf4e0 */

longlong FUN_1407cf4e0(undefined8 param_1)

{
  undefined uVar1;
  int iVar2;
  int local_74;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  uint local_58;
  longlong local_50;
  uint local_48;
  ulonglong local_40;
  undefined local_38 [56];
  
  local_68 = 0;
  iVar2 = FUN_1407df140(local_38,0x10);
  if ((iVar2 != 0) && (iVar2 = FUN_1407dfb40(local_38,0), iVar2 != 0)) {
    iVar2 = FUN_1407637a0(param_1);
    if (iVar2 == 0) {
      local_68 = FUN_140761470(param_1);
      if (local_68 == 0) goto LAB_1407cf738;
      while (iVar2 = FUN_1407637a0(local_68), iVar2 == 0) {
        local_60 = FUN_140762f90(local_68);
        if (local_60 == 0xffffffffffffffff) goto LAB_1407cf738;
        iVar2 = FUN_1407637a0(local_68);
        local_58 = (uint)(iVar2 == 0);
        local_48 = local_58;
        local_74 = 0;
        for (; (local_74 < 0x13 && ((local_48 != 0 || (local_60 != 0)))); local_60 = local_60 / 10)
        {
          iVar2 = FUN_1407dfb40(local_38);
          if (iVar2 == 0) goto LAB_1407cf738;
          local_74 = local_74 + 1;
        }
        if (local_60 != 0) {
          FID_conflict__assert((wchar_t *)s_w_140befec0,(wchar_t *)s_D_140befdf0,0x10d);
        }
      }
    }
    else {
      iVar2 = FUN_1407dfb40(local_38,0x30);
      if (iVar2 == 0) goto LAB_1407cf738;
    }
    iVar2 = FUN_1407617f0(param_1);
    if (((iVar2 == 0) || (iVar2 = FUN_1407dfb40(local_38,0x2d), iVar2 != 0)) &&
       (iVar2 = FUN_1407df270(local_38,&local_50,&local_40), iVar2 != 0)) {
      for (local_70 = 0; local_70 < local_40 / 2; local_70 = local_70 + 1) {
        uVar1 = *(undefined *)(local_50 + local_70);
        *(undefined *)(local_50 + local_70) = *(undefined *)(local_50 + ((local_40 - 1) - local_70))
        ;
        *(undefined *)(local_50 + ((local_40 - 1) - local_70)) = uVar1;
      }
      FUN_1407613e0(local_68,local_40 % 2);
      return local_50;
    }
  }
LAB_1407cf738:
  FUN_1407613e0(local_68);
  FUN_1407df200(local_38);
  return 0;
}


/* address=1407cf760 name=FUN_1407cf760 */

void FUN_1407cf760(undefined8 param_1,undefined8 param_2)

{
  FUN_1407d0120(param_1,param_2,&LAB_1407d0010,FUN_1407cd530);
  return;
}


/* address=1407cf890 name=FUN_1407cf890 */

undefined4 FUN_1407cf890(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  int local_28;
  int local_24;
  undefined4 local_18;
  
  bVar1 = false;
  local_18 = 0;
  if (((*(int *)(param_2 + 2) == 0) || (iVar2 = FUN_1407c0340(param_1,&DAT_140befed4,1), iVar2 == 1)
      ) && ((iVar2 = FUN_1407637a0(param_2), iVar2 == 0 ||
            (iVar2 = FUN_1407c0340(param_1,&DAT_140befed8,1), iVar2 == 1)))) {
    local_28 = FUN_140769420(param_2);
    while (local_28 = local_28 + -1, -1 < local_28) {
      for (local_24 = 0x3c; -1 < local_24; local_24 = local_24 + -4) {
        uVar3 = *(ulonglong *)(*param_2 + (longlong)local_28 * 8) >> ((byte)local_24 & 0x3f);
        if ((bVar1) || ((uVar3 & 0xf) != 0)) {
          iVar2 = FUN_1407c0340(param_1,"0123456789abcdef" + (int)((uint)uVar3 & 0xf),1);
          if (iVar2 != 1) {
            return 0;
          }
          bVar1 = true;
        }
      }
    }
    local_18 = 1;
  }
  return local_18;
}


/* address=1407cfe30 name=FUN_1407cfe30 */

undefined8 FUN_1407cfe30(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407d0120 name=FUN_1407d0120 */

int FUN_1407d0120(longlong *param_1,char *param_2,code *param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  char *local_res10;
  int local_28;
  uint local_24;
  longlong local_18;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    iVar1 = 0;
  }
  else {
    local_res10 = param_2;
    if (*param_2 == '-') {
      local_res10 = param_2 + 1;
    }
    local_24 = (uint)(*param_2 == '-');
    for (local_28 = 0;
        (iVar1 = (*param_4)(local_res10[local_28]), iVar1 != 0 &&
        ((int)(local_28 + local_24) < 0x7fffffff)); local_28 = local_28 + 1) {
    }
    iVar1 = local_28 + local_24;
    if (param_1 != (longlong *)0x0) {
      if (*param_1 == 0) {
        local_18 = FUN_140761360();
        if (local_18 == 0) {
          return 0;
        }
      }
      else {
        local_18 = *param_1;
        FUN_140761690(local_18);
      }
      iVar2 = (*param_3)(local_18,local_res10,local_28);
      if (iVar2 == 0) {
        if (*param_1 == 0) {
          FUN_1407613e0(local_18);
        }
        iVar1 = 0;
      }
      else {
        FUN_140769470(local_18);
        iVar2 = FUN_1407637a0(local_18);
        if (iVar2 == 0) {
          *(uint *)(local_18 + 0x10) = local_24;
        }
        *param_1 = local_18;
      }
    }
  }
  return iVar1;
}


/* address=1407d02a0 name=FUN_1407d02a0 */

longlong FUN_1407d02a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1407ccfc0(0x60);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1407d2300(lVar1,0,0x60);
    *(undefined4 *)(lVar1 + 0x50) = 1;
    FUN_1407e6050(lVar1 + 0x38);
    FUN_1407e6930(lVar1 + 0x58);
  }
  return lVar1;
}


/* address=1407d0310 name=FUN_1407d0310 */

void FUN_1407d0310(longlong param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_1407d39a0(param_1 + 0x50), iVar1 != 0)) {
    FUN_1407e6950(&DAT_140c1bf40,param_1,param_1 + 0x58);
    FUN_140761450(*(undefined8 *)(param_1 + 8));
    FUN_140761450(*(undefined8 *)(param_1 + 0x10));
    FUN_140761450(*(undefined8 *)(param_1 + 0x18));
    FUN_140761450(*(undefined8 *)(param_1 + 0x20));
    FUN_140761450(*(undefined8 *)(param_1 + 0x28));
    FUN_1407672e0(*(undefined8 *)(param_1 + 0x40));
    FUN_1407672e0(*(undefined8 *)(param_1 + 0x48));
    FUN_1407e60f0(param_1 + 0x38);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407d03f0 name=FUN_1407d03f0 */

undefined8 FUN_1407d03f0(longlong param_1)

{
  FUN_1407d3950(param_1 + 0x50);
  return 1;
}


/* address=1407d0450 name=FUN_1407d0450 */

undefined8 FUN_1407d0450(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


/* address=1407d0490 name=FUN_1407d0490 */

undefined8 FUN_1407d0490(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=1407d04b0 name=FUN_1407d04b0 */

undefined8 FUN_1407d04b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=1407d04d0 name=FUN_1407d04d0 */

undefined8 FUN_1407d04d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


/* address=1407d1440 name=FUN_1407d1440 */

undefined8 * FUN_1407d1440(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1407ccfc0(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return puVar1;
}


/* address=1407d1490 name=FUN_1407d1490 */

void FUN_1407d1490(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1407613e0(*param_1);
    FUN_1407613e0(param_1[1]);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407d15a0 name=FUN_1407d15a0 */

undefined8 * FUN_1407d15a0(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong local_res10;
  longlong in_stack_ffffffffffffff78;
  undefined4 uVar6;
  undefined8 uVar5;
  int local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined8 local_28 [5];
  
  iVar1 = FUN_14080b6a0(param_3);
  if (iVar1 == 0) {
    local_60 = (undefined8 *)0x0;
  }
  else if (*(longlong *)(param_3 + 0x28) == 0) {
    FUN_1407c2680(10,0,0x65,s_D__a_1_s_target_release_build_bo_140beffc0,600);
    local_60 = (undefined8 *)0x0;
  }
  else {
    local_48 = 0;
    local_58 = 0;
    local_68 = 0;
    local_60 = (undefined8 *)0x0;
    FUN_1407613b0(local_40);
    FUN_1407613b0(local_28);
    lVar3 = FUN_140761360();
    uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    if (lVar3 != 0) {
      local_68 = FUN_140761cb0();
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
      if (local_68 != 0) {
        local_70 = 0;
        local_res10 = param_2;
        do {
          uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
          iVar1 = FUN_1407d2340(param_3,local_68,&local_48,&local_58);
          if (iVar1 == 0) goto LAB_1407d1899;
          uVar2 = FUN_140761660(*(undefined8 *)(param_3 + 0x10));
          if (uVar2 < local_res10) {
            uVar2 = FUN_140761660(*(undefined8 *)(param_3 + 0x10));
            local_res10 = (ulonglong)uVar2;
          }
          lVar4 = FUN_140761830(param_1,local_res10,local_40);
          if (lVar4 == 0) goto LAB_1407d1899;
          iVar1 = FUN_140769420(*(undefined8 *)(param_3 + 0x10));
          local_50 = (longlong)iVar1;
          iVar1 = FUN_140769630(local_40,local_50);
          if ((iVar1 == 0) || (iVar1 = FUN_140769630(local_28,local_50), iVar1 == 0))
          goto LAB_1407d1899;
          FUN_140777020(local_40[0],0,**(undefined8 **)(param_3 + 0x10),local_28[0],local_50);
          lVar4 = local_68;
          iVar1 = FUN_1407d2560(local_28,*(undefined8 *)(param_3 + 0x28),local_58,
                                *(undefined8 *)(param_3 + 0x48),local_68);
          uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
          if (iVar1 == 0) goto LAB_1407d1899;
          lVar4 = local_68;
          iVar1 = FUN_140778030(lVar3,local_28,local_40,*(undefined8 *)(param_3 + 0x10),local_68);
          uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
          if (iVar1 == 0) goto LAB_1407d1899;
          in_stack_ffffffffffffff78 = local_68;
          iVar1 = FUN_1407d2560(lVar3,lVar3,local_48,*(undefined8 *)(param_3 + 0x48),local_68);
          uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
          if (iVar1 == 0) goto LAB_1407d1899;
          iVar1 = FUN_1407637a0(local_58);
          if (iVar1 == 0) {
            iVar1 = FUN_1407637a0(lVar3);
            uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
            if (iVar1 == 0) {
              local_60 = (undefined8 *)FUN_1407d1440();
              if (local_60 != (undefined8 *)0x0) {
                *local_60 = local_58;
                local_60[1] = lVar3;
              }
              goto LAB_1407d1899;
            }
          }
          local_70 = local_70 + 1;
        } while (local_70 <= DAT_14099dd24);
        uVar5 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff78 >> 0x20),0x29e);
        FUN_1407c2680(10,0,0x6c,s_D__a_1_s_target_release_build_bo_140bf0020,uVar5);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
    }
LAB_1407d1899:
    if (local_60 == (undefined8 *)0x0) {
      FUN_1407c2680(10,0,3,s_D__a_1_s_target_release_build_bo_140bf0080,CONCAT44(uVar6,0x2ad));
      FUN_1407613e0(local_58);
      FUN_1407613e0(lVar3);
    }
    FUN_140761d20(local_68);
    FUN_140761450(local_40);
    FUN_140761450(local_28);
    FUN_140761450(local_48);
  }
  return local_60;
}


/* address=1407d1980 name=FUN_1407d1980 */

int FUN_1407d1980(uint *param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4,
                 longlong param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong local_res18;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar6;
  undefined *puVar5;
  int local_68;
  uint local_54;
  undefined local_50 [24];
  undefined local_38 [24];
  undefined local_20 [32];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  *param_1 = 0;
  iVar1 = FUN_14080b6a0(param_5);
  if (iVar1 == 0) {
    local_68 = 0;
  }
  else if (*(longlong *)(param_5 + 0x20) == 0) {
    FUN_1407c2680(10,0,0x65,s_D__a_1_s_target_release_build_bo_140bf00e0,CONCAT44(uVar6,0x2ca));
    local_68 = 0;
  }
  else {
    local_68 = 0;
    FUN_1407613b0(local_50);
    FUN_1407613b0(local_38);
    FUN_1407613b0(local_20);
    lVar3 = FUN_140761cb0();
    if (lVar3 != 0) {
      iVar1 = FUN_1407637a0(*param_4);
      if (((iVar1 == 0) && (iVar1 = FUN_1407617f0(*param_4), iVar1 == 0)) &&
         (iVar1 = FUN_140763500(*param_4,*(undefined8 *)(param_5 + 0x10)), iVar1 < 0)) {
        iVar1 = FUN_1407637a0(param_4[1]);
        if (((iVar1 == 0) && (iVar1 = FUN_1407617f0(param_4[1]), iVar1 == 0)) &&
           (iVar1 = FUN_140763500(param_4[1],*(undefined8 *)(param_5 + 0x10)), iVar1 < 0)) {
          lVar4 = FUN_140766ac0(local_38,param_4[1],*(undefined8 *)(param_5 + 0x10),lVar3);
          if (lVar4 != 0) {
            uVar2 = FUN_140761600(*(undefined8 *)(param_5 + 0x10));
            local_res18 = param_3;
            if (uVar2 >> 3 < param_3) {
              local_res18 = (ulonglong)(uVar2 >> 3);
            }
            lVar4 = FUN_140761830(param_2,local_res18,local_50);
            if (lVar4 != 0) {
              lVar4 = lVar3;
              iVar1 = FUN_140764920(local_50,local_50,local_38,*(undefined8 *)(param_5 + 0x10),lVar3
                                   );
              uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
              if (iVar1 != 0) {
                lVar4 = lVar3;
                iVar1 = FUN_140764920(local_38,*param_4,local_38,*(undefined8 *)(param_5 + 0x10),
                                      lVar3);
                uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
                if ((iVar1 != 0) &&
                   (iVar1 = FUN_140779160(param_5 + 0x40,param_5 + 0x38,*(undefined8 *)(param_5 + 8)
                                          ,lVar3), iVar1 != 0)) {
                  puVar5 = local_38;
                  iVar1 = FUN_140768e40(local_20,*(undefined8 *)(param_5 + 0x18),local_50,
                                        *(undefined8 *)(param_5 + 0x20),puVar5,
                                        *(undefined8 *)(param_5 + 8),lVar3,
                                        *(undefined8 *)(param_5 + 0x40));
                  uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
                  if (iVar1 != 0) {
                    lVar4 = lVar3;
                    iVar1 = FUN_140762790(0,local_50,local_20,*(undefined8 *)(param_5 + 0x10),lVar3)
                    ;
                    uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
                    if (iVar1 != 0) {
                      iVar1 = FUN_140763500(local_50,*param_4);
                      local_54 = (uint)(iVar1 == 0);
                      *param_1 = local_54;
                      local_68 = 1;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          local_68 = 1;
        }
      }
      else {
        local_68 = 1;
      }
    }
    if (local_68 != 1) {
      FUN_1407c2680(10,0,3,s_D__a_1_s_target_release_build_bo_140bf0140,CONCAT44(uVar6,0x318));
    }
    FUN_140761d20(lVar3);
    FUN_1407613e0(local_50);
    FUN_1407613e0(local_38);
    FUN_1407613e0(local_20);
  }
  return local_68;
}


/* address=1407d1e40 name=FUN_1407d1e40 */

undefined4
FUN_1407d1e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_24;
  longlong local_20;
  undefined8 local_18;
  longlong local_10 [2];
  
  local_20 = 0;
  local_24 = 0;
  local_18 = 0;
  local_20 = FUN_1407d1440();
  if ((((local_20 != 0) &&
       (local_10[0] = param_4, lVar2 = FUN_14080b2a0(&local_20,local_10,(undefined4)param_5),
       lVar2 != 0)) && (local_10[0] == param_4 + param_5)) &&
     (((iVar1 = FUN_14080b340(local_20,&local_18), -1 < iVar1 && (iVar1 == param_5)) &&
      (iVar1 = FUN_1407d2270(param_4,local_18,param_5), iVar1 == 0)))) {
    local_24 = FUN_1407d1980(param_1,param_2,param_3,local_20,param_6);
  }
  FUN_1407cd0f0(local_18);
  FUN_1407d1490(local_20);
  return local_24;
}


/* address=1407d1f60 name=FUN_1407d1f60 */

ulonglong FUN_1407d1f60(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_140761660(*(undefined8 *)(param_1 + 0x10));
    uVar3 = (ulonglong)uVar1;
    lVar2 = FUN_1407d2610(uVar3 + 1);
    uVar4 = lVar2 + 2 + uVar3;
    if (uVar4 < uVar3) {
      uVar4 = 0;
    }
    else {
      uVar3 = uVar4 * 2;
      if (uVar3 < uVar4) {
        uVar4 = 0;
      }
      else {
        lVar2 = FUN_1407d2610(uVar3);
        uVar4 = lVar2 + 1 + uVar3;
        if (uVar4 < uVar3) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar4 & 0xffffffff;
        }
      }
    }
  }
  return uVar4;
}


/* address=1407d2270 name=FUN_1407d2270 */

int FUN_1407d2270(void *param_1,void *param_2,size_t param_3)

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


/* address=1407d22b0 name=FUN_1407d22b0 */

undefined8 FUN_1407d22b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407d2300 name=FUN_1407d2300 */

undefined8 FUN_1407d2300(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407d2340 name=FUN_1407d2340 */

undefined4 FUN_1407d2340(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar2;
  undefined4 local_38;
  longlong local_30;
  longlong local_28;
  undefined local_20 [32];
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  local_38 = 0;
  FUN_1407613b0(local_20);
  local_30 = FUN_140761360();
  local_28 = FUN_140761360();
  if ((local_30 != 0) && (local_28 != 0)) {
    iVar1 = FUN_140765c20(local_20,1,*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_140779160(param_1 + 0x40,param_1 + 0x38,*(undefined8 *)(param_1 + 8),param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_140779160(param_1 + 0x48,param_1 + 0x38,*(undefined8 *)(param_1 + 0x10),param_2)
        ;
        if (iVar1 != 0) {
          uVar2 = param_2;
          iVar1 = FUN_140767f50(local_30,*(undefined8 *)(param_1 + 0x18),local_20,
                                *(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x40)
                               );
          uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
          if (iVar1 != 0) {
            uVar2 = param_2;
            iVar1 = FUN_140762790(0,local_30,local_30,*(undefined8 *)(param_1 + 0x10),param_2);
            uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
            if (iVar1 != 0) {
              uVar2 = *(undefined8 *)(param_1 + 0x48);
              iVar1 = FUN_140778fc0(local_28,local_20,*(undefined8 *)(param_1 + 0x10),param_2,uVar2)
              ;
              uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
              if (iVar1 != 0) {
                FUN_140761450(*param_3);
                *param_3 = local_28;
                local_28 = 0;
                FUN_140761450(*param_4);
                *param_4 = local_30;
                local_30 = 0;
                local_38 = 1;
                goto LAB_1407d2528;
              }
            }
          }
        }
      }
    }
  }
  FUN_1407c2680(10,0,3,s_D__a_1_s_target_release_build_bo_140bf01a0,CONCAT44(uVar3,0x39f));
LAB_1407d2528:
  FUN_140761450(local_20);
  FUN_140761450(local_30);
  FUN_140761450(local_28);
  return local_38;
}


/* address=1407d2560 name=FUN_1407d2560 */

undefined4
FUN_1407d2560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  FUN_140761db0(param_5);
  lVar2 = FUN_140761e10(param_5);
  if (lVar2 != 0) {
    iVar1 = FUN_1407673f0(lVar2,param_2,param_4,param_5);
    if (iVar1 != 0) {
      iVar1 = FUN_1407674d0(param_1,lVar2,param_3,param_4,param_5);
      if (iVar1 != 0) {
        local_18 = 1;
        goto LAB_1407d25ef;
      }
    }
  }
  local_18 = 0;
LAB_1407d25ef:
  FUN_140761f60(param_5);
  return local_18;
}


/* address=1407d2610 name=FUN_1407d2610 */

longlong FUN_1407d2610(ulonglong param_1)

{
  ulonglong local_res8;
  longlong local_18;
  
  if (param_1 < 0x80) {
    local_18 = 1;
  }
  else {
    local_18 = 1;
    for (local_res8 = param_1; local_res8 != 0; local_res8 = local_res8 >> 8) {
      local_18 = local_18 + 1;
    }
  }
  return local_18;
}


/* address=1407d2660 name=FUN_1407d2660 */

undefined8 FUN_1407d2660(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    FUN_1407c2680(6,0,0x43,s_D__a_1_s_target_release_build_bo_140bf0200,0x75);
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar1 == 0) {
      FUN_1407c2680(6,0,0x80,s_D__a_1_s_target_release_build_bo_140bf0270,0x7b);
      FUN_1407c27f0(s_algorithm__d_140bf02d8,**(undefined4 **)(param_1 + 0x10));
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1407d3880(param_1,param_2,lVar1);
    }
  }
  return uVar2;
}


/* address=1407d27a0 name=FUN_1407d27a0 */

void FUN_1407d27a0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x18) != 0)) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    FUN_140750120(param_1[2]);
    FUN_140750120(param_1[3]);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407d2960 name=FUN_1407d2960 */

undefined8 FUN_1407d2960(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=1407d2980 name=FUN_1407d2980 */

undefined8 FUN_1407d2980(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
     ((*(longlong *)(*param_1 + 0x28) == 0 && (*(longlong *)(*param_1 + 0x30) == 0)))) {
    FUN_1407c2680(6,0,0x7d,s_D__a_1_s_target_release_build_bo_140bf05a0,0xdb);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 8;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=1407d2a00 name=FUN_1407d2a00 */

undefined8
FUN_1407d2a00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x28) == 0)) {
    FUN_1407c2680(6,0,0x7d,s_D__a_1_s_target_release_build_bo_140bf0610,0xe6);
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 8) {
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_1407c2680(6,0,0x7e,s_D__a_1_s_target_release_build_bo_140bf0680,0xea);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=1407d2ad0 name=FUN_1407d2ad0 */

undefined8 FUN_1407d2ad0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
     ((*(longlong *)(*param_1 + 0x38) == 0 && (*(longlong *)(*param_1 + 0x40) == 0)))) {
    FUN_1407c2680(6,0,0x7d,s_D__a_1_s_target_release_build_bo_140bf06f0,0xf3);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x10;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=1407d2b50 name=FUN_1407d2b50 */

undefined8
FUN_1407d2b50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x38) == 0)) {
    FUN_1407c2680(6,0,0x7d,s_D__a_1_s_target_release_build_bo_140bf0760,0xfd);
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 0x10) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_1407c2680(6,0,0x7e,s_D__a_1_s_target_release_build_bo_140bf07d0,0x101);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=1407d36a0 name=FUN_1407d36a0 */

undefined8 FUN_1407d36a0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407d36e0 name=FUN_1407d36e0 */

undefined8
FUN_1407d36e0(int **param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  
  if (((param_1 == (int **)0x0) || (*param_1 == (int *)0x0)) ||
     (*(longlong *)(*param_1 + 0x1c) == 0)) {
    FUN_1407c2680(6,0,0x65,s_D__a_1_s_target_release_build_bo_140bf03e0,0xc3);
    uVar1 = 0;
  }
  else if ((param_2 == -1) || (**param_1 == param_2)) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_1407c2680(6,0,0x7b,s_D__a_1_s_target_release_build_bo_140bf04c0,0xcc);
      uVar1 = 0;
    }
    else if ((param_3 == 0xffffffff) || ((*(uint *)(param_1 + 4) & param_3) != 0)) {
      uVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_4,param_5,param_6);
    }
    else {
      FUN_1407c2680(6,0,0x72,s_D__a_1_s_target_release_build_bo_140bf0530,0xd1);
      uVar1 = 0;
    }
  }
  else {
    FUN_1407c2680(6,0,0x7d,s_D__a_1_s_target_release_build_bo_140bf0450,199);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=1407d3820 name=FUN_1407d3820 */

undefined * FUN_1407d3820(int param_1)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (4 < local_18) {
      return (undefined *)0x0;
    }
    if (*(int *)(&PTR_DAT_14099dd28)[local_18] == param_1) break;
    local_18 = local_18 + 1;
  }
  return (&PTR_DAT_14099dd28)[local_18];
}


/* address=1407d3880 name=FUN_1407d3880 */

longlong * FUN_1407d3880(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1407ccfc0(0x30);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_1407d36a0(plVar2,0,0x30);
    plVar2[1] = param_2;
    *plVar2 = param_3;
    *(undefined4 *)(plVar2 + 4) = 0;
    if (param_1 != 0) {
      FUN_140750170(param_1);
      plVar2[2] = param_1;
    }
    if ((*(longlong *)(param_3 + 8) != 0) && (iVar1 = (**(code **)(param_3 + 8))(plVar2), iVar1 < 1)
       ) {
      FUN_140750120(plVar2[2]);
      FUN_1407cd0f0(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}


/* address=1407d3950 name=FUN_1407d3950 */

void FUN_1407d3950(int *param_1)

{
  FUN_1407e6130(&DAT_140c1bf58);
  if (*param_1 != -1) {
    *param_1 = *param_1 + 1;
  }
  FUN_1407e6190(&DAT_140c1bf58);
  return;
}


/* address=1407d39a0 name=FUN_1407d39a0 */

bool FUN_1407d39a0(int *param_1)

{
  int iVar1;
  
  FUN_1407e6130(&DAT_140c1bf58);
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_1 != -1) {
    *param_1 = *param_1 + -1;
  }
  iVar1 = *param_1;
  FUN_1407e6190(&DAT_140c1bf58);
  return iVar1 == 0;
}


/* address=1407d4160 name=FUN_1407d4160 */

bool FUN_1407d4160(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140761470(param_2);
  if (lVar1 != 0) {
    FUN_1407613e0(*param_1);
    *param_1 = lVar1;
  }
  return lVar1 != 0;
}


/* address=1407d5300 name=FUN_1407d5300 */

int FUN_1407d5300(void *param_1,void *param_2,size_t param_3)

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


/* address=1407d5340 name=FUN_1407d5340 */

undefined8 FUN_1407d5340(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407d5390 name=FUN_1407d5390 */

void FUN_1407d5390(longlong param_1)

{
  FUN_1407cd0f0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* address=1407d53c0 name=FUN_1407d53c0 */

void FUN_1407d53c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  undefined local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_140c05940 ^ (ulonglong)auStack_68;
  if (param_3 == 0x20) {
    local_38 = FUN_1407ccfc0(0x41);
    if (local_38 != 0) {
      FUN_14082c740(local_30,local_38,param_2);
      *(undefined *)(local_38 + 0x40) = 1;
      FUN_1407d5390(param_1);
      *(longlong *)(param_1 + 8) = local_38;
    }
  }
  else {
    local_48 = 0x21;
    FUN_1407c2680(6,0,0x66,s_D__a_1_s_target_release_build_bo_140bf1e20);
  }
  FUN_140805d70(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=1407d5490 name=FUN_1407d5490 */

undefined8 FUN_1407d5490(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x20) {
    lVar1 = FUN_1407ccfc0(0x41);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_1407d5340(lVar1 + 0x20,param_2,0x20);
      *(undefined *)(lVar1 + 0x40) = 0;
      FUN_1407d5390(param_1);
      *(longlong *)(param_1 + 8) = lVar1;
      uVar2 = 1;
    }
  }
  else {
    FUN_1407c2680(6,0,0x66,s_D__a_1_s_target_release_build_bo_140bf1e90,0x37);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1407d5b70 name=FUN_1407d5b70 */

int FUN_1407d5b70(void *param_1,void *param_2,size_t param_3)

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


/* address=1407d5bb0 name=FUN_1407d5bb0 */

undefined8 FUN_1407d5bb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407d5c00 name=FUN_1407d5c00 */

void FUN_1407d5c00(longlong param_1)

{
  FUN_1407cd0f0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* address=1407d5c30 name=FUN_1407d5c30 */

undefined8 FUN_1407d5c30(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x20) {
    lVar1 = FUN_1407ccfc0(0x41);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_1407d5bb0(lVar1 + 0x20,param_2,0x20);
      FUN_14082c0f0(lVar1,lVar1 + 0x20);
      *(undefined *)(lVar1 + 0x40) = 1;
      FUN_1407d5c00(param_1);
      *(longlong *)(param_1 + 8) = lVar1;
      uVar2 = 1;
    }
  }
  else {
    FUN_1407c2680(6,0,0x66,s_D__a_1_s_target_release_build_bo_140bf2280,0x21);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1407d5cf0 name=FUN_1407d5cf0 */

undefined8 FUN_1407d5cf0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x20) {
    lVar1 = FUN_1407ccfc0(0x41);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_1407d5bb0(lVar1,param_2,0x20);
      *(undefined *)(lVar1 + 0x40) = 0;
      FUN_1407d5c00(param_1);
      *(longlong *)(param_1 + 8) = lVar1;
      uVar2 = 1;
    }
  }
  else {
    FUN_1407c2680(6,0,0x66,s_D__a_1_s_target_release_build_bo_140bf22f0,0x35);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1407d6580 name=FUN_1407d6580 */

void FUN_1407d6580(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_14099e190);
  return;
}


/* address=1407d65b0 name=FUN_1407d65b0 */

void FUN_1407d65b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407d8880(param_1,param_2,param_3,&DAT_14099e190);
  return;
}


/* address=1407d65f0 name=FUN_1407d65f0 */

void FUN_1407d65f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407dab60(param_1,param_2,&DAT_14099e190);
  return;
}


/* address=1407d6620 name=FUN_1407d6620 */

undefined8 FUN_1407d6620(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined local_38 [56];
  
  local_50 = 0;
  local_58 = 0;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  iVar1 = FUN_1407df140(local_38,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_1407ab6e0(local_38,param_2), iVar1 == 0)) ||
      (iVar1 = FUN_1407df270(local_38,&local_58,&local_48), iVar1 == 0)) ||
     (0x7fffffff < CONCAT44(uStack_44,local_48))) {
    FUN_1407df200(local_38);
    FUN_1407c2680(0xb,0,0x7e,s_D__a_1_s_target_release_build_bo_140bf27b0,0x69);
  }
  else {
    local_40 = local_58;
    local_50 = FUN_1407d65b0(0,&local_40,local_48);
    if ((local_50 != 0) && (local_40 == local_58 + CONCAT44(uStack_44,local_48))) {
      FUN_1407cd0f0(local_58);
      FUN_1407d6580(*param_1);
      *param_1 = local_50;
      return 1;
    }
    FUN_1407c2680(0xb,0,0x7d,s_D__a_1_s_target_release_build_bo_140bf2820,0x70);
  }
  FUN_1407d6580(local_50);
  FUN_1407cd0f0(local_58);
  return 0;
}


/* address=1407d6790 name=FUN_1407d6790 */

longlong FUN_1407d6790(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong local_30;
  undefined8 local_28;
  undefined local_20 [32];
  
  local_30 = 0;
  local_28 = 0;
  if (param_1 != 0) {
    FUN_1407e6100(&DAT_140c1bf60);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1407e6160(&DAT_140c1bf60);
      FUN_140750170(*(undefined8 *)(param_1 + 0x10));
      return *(longlong *)(param_1 + 0x10);
    }
    FUN_1407e6160(&DAT_140c1bf60);
    iVar1 = FUN_1407d65f0(param_1,&local_28);
    if (-1 < iVar1) {
      FUN_1407dce80(local_20,local_28,(longlong)iVar1);
      local_30 = FUN_1407ab530(local_20);
      if ((local_30 != 0) && (lVar2 = FUN_1407dcf10(local_20), lVar2 == 0)) {
        FUN_1407e6130(&DAT_140c1bf60);
        if (*(longlong *)(param_1 + 0x10) == 0) {
          *(longlong *)(param_1 + 0x10) = local_30;
          FUN_1407e6190(&DAT_140c1bf60);
        }
        else {
          FUN_1407e6190(&DAT_140c1bf60);
          FUN_140750120(local_30);
          local_30 = *(longlong *)(param_1 + 0x10);
        }
        FUN_1407cd0f0(local_28);
        FUN_140750170(local_30);
        return local_30;
      }
      FUN_1407c2680(0xb,0,0x7d,s_D__a_1_s_target_release_build_bo_140bf2890,0x9e);
    }
  }
  FUN_1407cd0f0(local_28);
  FUN_140750120(local_30);
  return 0;
}


/* address=1407d6b00 name=FUN_1407d6b00 */

void FUN_1407d6b00(void)

{
  FUN_1407cba70(0x16);
  return;
}


/* address=1407d6b20 name=FUN_1407d6b20 */

void FUN_1407d6b20(void)

{
  FUN_1407cba70(4);
  return;
}


/* address=1407d6ba0 name=FUN_1407d6ba0 */

void FUN_1407d6ba0(void)

{
  FUN_1407cba70(0xc);
  return;
}


/* address=1407d6bc0 name=FUN_1407d6bc0 */

void FUN_1407d6bc0(void)

{
  FUN_1407cba70(0x1a);
  return;
}


/* address=1407d6c20 name=FUN_1407d6c20 */

void FUN_1407d6c20(undefined8 param_1)

{
  FUN_1407cbb00(param_1);
  return;
}


/* address=1407d6c40 name=FUN_1407d6c40 */

void FUN_1407d6c40(undefined8 param_1)

{
  FUN_1407cbb00(param_1);
  return;
}


/* address=1407d6cc0 name=FUN_1407d6cc0 */

void FUN_1407d6cc0(undefined8 param_1)

{
  FUN_1407cbb00(param_1);
  return;
}


/* address=1407d7270 name=FUN_1407d7270 */

void FUN_1407d7270(void)

{
  FUN_1407cba70(3);
  return;
}


/* address=1407d7290 name=FUN_1407d7290 */

void FUN_1407d7290(undefined8 param_1)

{
  FUN_1407cbb00(param_1);
  return;
}


/* address=1407d72f0 name=FUN_1407d72f0 */

void FUN_1407d72f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407dab60(param_1,param_2,&DAT_14099e460);
  return;
}


/* address=1407d7320 name=FUN_1407d7320 */

void FUN_1407d7320(void)

{
  FUN_1407cba70(2);
  return;
}


/* address=1407d7340 name=FUN_1407d7340 */

void FUN_1407d7340(undefined8 param_1)

{
  FUN_1407cbb00(param_1);
  return;
}


/* address=1407d73a0 name=FUN_1407d73a0 */

void FUN_1407d73a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407dab60(param_1,param_2,&DAT_14099e490);
  return;
}


/* address=1407d73f0 name=FUN_1407d73f0 */

void FUN_1407d73f0(undefined8 param_1)

{
  FUN_1407cbb00(param_1);
  return;
}


/* address=1407d7480 name=FUN_1407d7480 */

void FUN_1407d7480(void)

{
  FUN_1407cba70(0x17);
  return;
}


/* address=1407d74a0 name=FUN_1407d74a0 */

void FUN_1407d74a0(undefined8 param_1)

{
  FUN_1407cbb00(param_1);
  return;
}


/* address=1407d7530 name=FUN_1407d7530 */

void FUN_1407d7530(void)

{
  FUN_1407cba70(0x18);
  return;
}


/* address=1407d7550 name=FUN_1407d7550 */

void FUN_1407d7550(undefined8 param_1)

{
  FUN_1407cbb00(param_1);
  return;
}


/* address=1407d75e0 name=FUN_1407d75e0 */

void FUN_1407d75e0(void)

{
  FUN_1407d7900(&DAT_14099e550);
  return;
}


/* address=1407d76a0 name=FUN_1407d76a0 */

void FUN_1407d76a0(void)

{
  FUN_1407d7900(&DAT_14099e5b0);
  return;
}


/* address=1407d76c0 name=FUN_1407d76c0 */

void FUN_1407d76c0(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_14099e5b0);
  return;
}


/* address=1407d76f0 name=FUN_1407d76f0 */

void FUN_1407d76f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407d8880(param_1,param_2,param_3,&DAT_14099e5b0);
  return;
}


/* address=1407d7730 name=FUN_1407d7730 */

void FUN_1407d7730(undefined8 param_1,undefined8 param_2)

{
  FUN_1407dab60(param_1,param_2,&DAT_14099e5b0);
  return;
}


/* address=1407d7900 name=FUN_1407d7900 */

undefined8 FUN_1407d7900(undefined8 param_1)

{
  int iVar1;
  undefined8 local_18 [3];
  
  local_18[0] = 0;
  iVar1 = FUN_1407d79a0(local_18,param_1);
  if (iVar1 < 1) {
    local_18[0] = 0;
  }
  return local_18[0];
}


/* address=1407d7940 name=FUN_1407d7940 */

void FUN_1407d7940(void)

{
  FUN_1407ac640();
  return;
}


/* address=1407d7960 name=FUN_1407d7960 */

undefined8 FUN_1407d7960(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407d79a0 name=FUN_1407d79a0 */

undefined8 FUN_1407d79a0(longlong *param_1,char *param_2)

{
  char cVar1;
  code **ppcVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_58;
  longlong local_50;
  code *local_28;
  code *local_18;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    if (*(longlong *)(param_2 + 8) == 0) {
      iVar3 = FUN_1407d7ff0(param_1,param_2);
    }
    else {
      iVar3 = FUN_1407d7ed0(param_1,*(undefined8 *)(param_2 + 8));
    }
    if (iVar3 == 0) {
      return 0;
    }
    return 1;
  }
  if (cVar1 == '\x01') {
    if (*(longlong *)(param_2 + 0x18) == 0) {
      local_18 = (code *)0x0;
    }
    else {
      local_18 = *(code **)(*(longlong *)(param_2 + 0x18) + 0x10);
    }
    if (local_18 != (code *)0x0) {
      iVar3 = (*local_18)(0,param_1,param_2,0);
      if (iVar3 == 0) goto LAB_1407d7dab;
      if (iVar3 == 2) {
        return 1;
      }
    }
    lVar4 = FUN_1407ccfc0((longlong)*(int *)(param_2 + 0x20));
    *param_1 = lVar4;
    if (*param_1 == 0) {
      return 0;
    }
    FUN_1407d7960(*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    FUN_1407e5a40(param_1,param_2);
    FUN_1407e5ad0(param_1,param_2);
    local_58 = 0;
    local_50 = *(longlong *)(param_2 + 8);
    for (; local_58 < *(int *)(param_2 + 0x10); local_58 = local_58 + 1) {
      uVar5 = FUN_1407e58a0(param_1,local_50);
      iVar3 = FUN_1407d7ed0(uVar5,local_50);
      if (iVar3 == 0) {
        FUN_1407d8280(param_1,param_2);
        return 0;
      }
      local_50 = local_50 + 0x20;
    }
    if (local_18 == (code *)0x0) {
      return 1;
    }
    iVar3 = (*local_18)(1,param_1,param_2,0);
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x04') {
        ppcVar2 = *(code ***)(param_2 + 0x18);
        if (ppcVar2 == (code **)0x0) {
          return 1;
        }
        if (*ppcVar2 == (code *)0x0) {
          return 1;
        }
        iVar3 = (**ppcVar2)(param_1,param_2);
      }
      else {
        if (cVar1 != '\x05') {
          return 1;
        }
        iVar3 = FUN_1407d7ff0(param_1,param_2);
      }
      if (iVar3 != 0) {
        return 1;
      }
      return 0;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      local_28 = (code *)0x0;
    }
    else {
      local_28 = *(code **)(*(longlong *)(param_2 + 0x18) + 0x10);
    }
    if (local_28 != (code *)0x0) {
      iVar3 = (*local_28)(0,param_1,param_2,0);
      if (iVar3 == 0) goto LAB_1407d7dab;
      if (iVar3 == 2) {
        return 1;
      }
    }
    lVar4 = FUN_1407ccfc0((longlong)*(int *)(param_2 + 0x20));
    *param_1 = lVar4;
    if (*param_1 == 0) {
      return 0;
    }
    FUN_1407d7960(*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    FUN_1407e5850(param_1,0xffffffff,param_2);
    if (local_28 == (code *)0x0) {
      return 1;
    }
    iVar3 = (*local_28)(1,param_1,param_2,0);
  }
  if (iVar3 != 0) {
    return 1;
  }
  FUN_1407d8280(param_1,param_2);
LAB_1407d7dab:
  FUN_1407c2680(0xc,0,0x65,s_D__a_1_s_target_release_build_bo_140bf2b00,0xb7);
  return 0;
}


/* address=1407d7de0 name=FUN_1407d7de0 */

void FUN_1407d7de0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    if (*(longlong *)(param_2 + 8) == 0) {
      FUN_1407d8140(param_1,param_2);
    }
    else {
      FUN_1407d7fa0(param_1,*(undefined8 *)(param_2 + 8));
    }
  }
  else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
    *param_1 = 0;
  }
  else if (cVar1 == '\x04') {
    lVar2 = *(longlong *)(param_2 + 0x18);
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) {
      *param_1 = 0;
    }
    else {
      (**(code **)(lVar2 + 0x10))(param_1,param_2);
    }
  }
  else if (cVar1 == '\x05') {
    FUN_1407d8140(param_1,param_2);
  }
  return;
}


/* address=1407d7ed0 name=FUN_1407d7ed0 */

undefined4 FUN_1407d7ed0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 local_28;
  
  if ((*param_2 & 1) == 0) {
    if ((*param_2 & 0x300) == 0) {
      if ((*param_2 & 6) == 0) {
        local_28 = FUN_1407d79a0(param_1,*(undefined8 *)(param_2 + 6));
      }
      else {
        lVar1 = FUN_1407d7940();
        if (lVar1 == 0) {
          local_28 = 0;
        }
        else {
          *param_1 = lVar1;
          local_28 = 1;
        }
      }
    }
    else {
      *param_1 = 0;
      local_28 = 1;
    }
  }
  else {
    FUN_1407d7fa0(param_1,param_2);
    local_28 = 1;
  }
  return local_28;
}


/* address=1407d7fa0 name=FUN_1407d7fa0 */

void FUN_1407d7fa0(undefined8 *param_1,uint *param_2)

{
  if ((*param_2 & 0x306) == 0) {
    FUN_1407d7de0(param_1,*(undefined8 *)(param_2 + 6));
  }
  else {
    *param_1 = 0;
  }
  return;
}


/* address=1407d7ff0 name=FUN_1407d7ff0 */

bool FUN_1407d7ff0(longlong *param_1,char *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int local_14;
  
  if (param_2 == (char *)0x0) {
    return false;
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FID_conflict__assert((wchar_t *)s_i_140bf2c38,(wchar_t *)s_D_140bf2b70,0x10d);
  }
  if (*param_2 == '\x05') {
    local_14 = -1;
  }
  else {
    local_14 = *(int *)(param_2 + 4);
  }
  if (local_14 == -4) {
    puVar1 = (undefined4 *)FUN_1407ccfc0(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      return false;
    }
    *(undefined8 *)(puVar1 + 2) = 0;
    *puVar1 = 0xffffffff;
    *param_1 = (longlong)puVar1;
  }
  else {
    if (local_14 == 1) {
      *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
      return true;
    }
    if (local_14 == 5) {
      *param_1 = 1;
      return true;
    }
    if (local_14 == 6) {
      lVar2 = FUN_1407e1390(0);
      *param_1 = lVar2;
      return true;
    }
    lVar2 = FUN_1407cba70(local_14);
    *param_1 = lVar2;
  }
  return *param_1 != 0;
}


/* address=1407d8140 name=FUN_1407d8140 */

void FUN_1407d8140(undefined8 *param_1,char *param_2)

{
  int local_18;
  
  if ((param_2 != (char *)0x0) && (*(longlong *)(param_2 + 0x18) != 0)) {
    FID_conflict__assert((wchar_t *)s_i_140bf2d30,(wchar_t *)s_D_140bf2c60,0x13b);
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\x05')) {
    local_18 = -1;
  }
  else {
    local_18 = *(int *)(param_2 + 4);
  }
  if (local_18 == 1) {
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
  }
  else {
    *param_1 = 0;
  }
  return;
}


/* address=1407d81e0 name=FUN_1407d81e0 */

void FUN_1407d81e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_1407d8280(&local_res8,param_2);
  return;
}


/* address=1407d8210 name=FUN_1407d8210 */

void FUN_1407d8210(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407d8230 name=FUN_1407d8230 */

void FUN_1407d8230(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407d8260 name=FUN_1407d8260 */

void FUN_1407d8260(undefined8 param_1)

{
  FUN_1407ac770(param_1);
  return;
}


/* address=1407d8280 name=FUN_1407d8280 */

void FUN_1407d8280(longlong *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_68;
  longlong local_60;
  code *local_30;
  code *local_20;
  
  if ((param_1 != (longlong *)0x0) && ((*param_2 == '\0' || (*param_1 != 0)))) {
    cVar1 = *param_2;
    if (cVar1 == '\0') {
      if (*(longlong *)(param_2 + 8) == 0) {
        FUN_1407d8740(param_1,param_2);
      }
      else {
        FUN_1407d8680(param_1,*(undefined8 *)(param_2 + 8));
      }
    }
    else if (cVar1 == '\x01') {
      iVar2 = FUN_1407e5a80(param_1,param_2);
      if (iVar2 != 0) {
        if (*(longlong *)(param_2 + 0x18) == 0) {
          local_20 = (code *)0x0;
        }
        else {
          local_20 = *(code **)(*(longlong *)(param_2 + 0x18) + 0x10);
        }
        if ((local_20 == (code *)0x0) || (iVar2 = (*local_20)(2,param_1,param_2,0), iVar2 != 2)) {
          FUN_1407e5b30(param_1,param_2);
          local_60 = *(longlong *)(param_2 + 8) + -0x20 + (longlong)*(int *)(param_2 + 0x10) * 0x20;
          for (local_68 = 0; local_68 < *(int *)(param_2 + 0x10); local_68 = local_68 + 1) {
            lVar3 = FUN_1407e58e0(param_1,local_60,0);
            if (lVar3 != 0) {
              uVar4 = FUN_1407e58a0(param_1,lVar3);
              FUN_1407d8680(uVar4,lVar3);
            }
            local_60 = local_60 + -0x20;
          }
          if (local_20 != (code *)0x0) {
            (*local_20)(3,param_1,param_2,0);
          }
          FUN_1407cd0f0(*param_1);
          *param_1 = 0;
        }
      }
    }
    else if (cVar1 == '\x02') {
      if (*(longlong *)(param_2 + 0x18) == 0) {
        local_30 = (code *)0x0;
      }
      else {
        local_30 = *(code **)(*(longlong *)(param_2 + 0x18) + 0x10);
      }
      if ((local_30 == (code *)0x0) || (iVar2 = (*local_30)(2,param_1,param_2,0), iVar2 != 2)) {
        iVar2 = FUN_1407e5810(param_1,param_2);
        if ((-1 < iVar2) && (iVar2 < *(int *)(param_2 + 0x10))) {
          lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_2 + 8);
          uVar4 = FUN_1407e58a0(param_1,lVar3);
          FUN_1407d8680(uVar4,lVar3);
        }
        if (local_30 != (code *)0x0) {
          (*local_30)(3,param_1,param_2,0);
        }
        FUN_1407cd0f0(*param_1);
        *param_1 = 0;
      }
    }
    else if (cVar1 == '\x04') {
      lVar3 = *(longlong *)(param_2 + 0x18);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        (**(code **)(lVar3 + 8))(param_1,param_2);
      }
    }
    else if (cVar1 == '\x05') {
      FUN_1407d8740(param_1,param_2);
    }
  }
  return;
}


/* address=1407d8680 name=FUN_1407d8680 */

void FUN_1407d8680(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong local_28;
  undefined8 local_18 [3];
  
  if ((*param_2 & 6) == 0) {
    FUN_1407d8280(param_1,*(undefined8 *)(param_2 + 6));
  }
  else {
    uVar1 = *param_1;
    local_28 = 0;
    while( true ) {
      uVar2 = FUN_1407d8210(uVar1);
      if (uVar2 <= local_28) break;
      local_18[0] = FUN_1407d8230(uVar1,local_28);
      FUN_1407d8280(local_18,*(undefined8 *)(param_2 + 6));
      local_28 = local_28 + 1;
    }
    FUN_1407d8260(uVar1);
    *param_1 = 0;
  }
  return;
}


/* address=1407d8740 name=FUN_1407d8740 */

void FUN_1407d8740(longlong *param_1,char *param_2)

{
  int local_14;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FID_conflict__assert((wchar_t *)s_i_140bf2e38,(wchar_t *)s_D_140bf2d70,0xb4);
  }
  if (*param_2 == '\x05') {
    local_14 = -1;
  }
  else {
    local_14 = *(int *)(param_2 + 4);
  }
  if (local_14 == -4) {
    if (*param_1 != 0) {
      FUN_1408103a0(*param_1);
      FUN_1407cd0f0(*param_1);
    }
  }
  else {
    if (local_14 == 1) {
      if (param_2 != (char *)0x0) {
        *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x20);
        return;
      }
      *(undefined4 *)param_1 = 0xffffffff;
      return;
    }
    if (local_14 != 5) {
      if (local_14 == 6) {
        FUN_1407cc5e0(*param_1);
      }
      else {
        FUN_1407cbb00(*param_1);
        *param_1 = 0;
      }
    }
  }
  *param_1 = 0;
  return;
}


/* address=1407d8850 name=FUN_1407d8850 */

undefined4 FUN_1407d8850(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (0x1e < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_14099e6e0 + (longlong)param_1 * 4);
  }
  return uVar1;
}


/* address=1407d8880 name=FUN_1407d8880 */

undefined8
FUN_1407d8880(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_18 [3];
  
  local_18[0] = 0;
  iVar1 = FUN_1407d9bf0(local_18,param_2,param_3,param_4,0xffffffff,0,0,0,0);
  if (iVar1 < 1) {
    FUN_1407d8280(local_18,param_4);
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN_1407d8280(param_1,param_4);
    *param_1 = local_18[0];
  }
  return local_18[0];
}


/* address=1407d8940 name=FUN_1407d8940 */

void FUN_1407d8940(void)

{
  FUN_1407ac640();
  return;
}


/* address=1407d8960 name=FUN_1407d8960 */

void FUN_1407d8960(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407d8980 name=FUN_1407d8980 */

void FUN_1407d8980(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acf60(param_1,param_2);
  return;
}


/* address=1407d89b0 name=FUN_1407d89b0 */

void FUN_1407d89b0(undefined8 param_1)

{
  FUN_1407acf90(param_1);
  return;
}


/* address=1407d89d0 name=FUN_1407d89d0 */

void FUN_1407d89d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined param_7,undefined8 param_8)

{
  FUN_1407d9bf0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  return;
}


/* address=1407d8a50 name=FUN_1407d8a50 */

undefined8
FUN_1407d8a50(undefined4 *param_1,int *param_2,undefined *param_3,byte *param_4,undefined8 *param_5,
             undefined4 param_6,int param_7,int param_8,char param_9)

{
  byte bVar1;
  undefined8 uVar2;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined8 local_18 [3];
  
  local_18[0] = *param_5;
  bVar1 = FUN_1407cbf80(local_18,&local_1c,&local_20,&local_24,param_6);
  if ((bVar1 & 0x80) == 0) {
    if ((param_7 < 0) || ((param_7 == local_20 && (param_8 == local_24)))) {
      if (param_4 != (byte *)0x0) {
        *param_4 = bVar1 & 0x20;
      }
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = local_1c;
      }
      if (param_3 != (undefined *)0x0) {
        *param_3 = (undefined)local_24;
      }
      if (param_2 != (int *)0x0) {
        *param_2 = local_20;
      }
      *param_5 = local_18[0];
      uVar2 = 1;
    }
    else if (param_9 == '\0') {
      FUN_1407c2680(0xc,0,0xbe,s_D__a_1_s_target_release_build_bo_140bf4270,0x3b6);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    FUN_1407c2680(0xc,0,0x67,s_D__a_1_s_target_release_build_bo_140bf4200,0x3ad);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1407d8bb0 name=FUN_1407d8bb0 */

undefined8
FUN_1407d8bb0(longlong param_1,undefined8 *param_2,undefined4 param_3,uint *param_4,
             undefined param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char local_38 [4];
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_2c = *param_4;
    local_28 = local_2c & 0xc0;
    local_20 = *param_2;
    if ((local_2c & 0x10) == 0) {
      uVar1 = FUN_1407d8e30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      puVar2 = &local_20;
      local_34 = FUN_1407d8a50(&local_30,0,0,local_38,puVar2,param_3,param_4[1],local_28,param_5);
      local_18 = local_20;
      if (local_34 == 0) {
        FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf3770,0x20d);
        uVar1 = 0;
      }
      else if (local_34 == -1) {
        uVar1 = 0xffffffff;
      }
      else if (local_38[0] == '\0') {
        FUN_1407c2680(0xc,0,0x78,s_D__a_1_s_target_release_build_bo_140bf37e0,0x213);
        uVar1 = 0;
      }
      else {
        local_34 = FUN_1407d8e30(param_1,&local_20,local_30,param_4,
                                 (ulonglong)puVar2 & 0xffffffffffffff00,param_6,param_7);
        if (local_34 == 0) {
          FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf3850,0x219);
          uVar1 = 0;
        }
        else {
          local_30 = local_30 - ((int)local_20 - (int)local_18);
          if (local_30 == 0) {
            *param_2 = local_20;
            uVar1 = 1;
          }
          else {
            FUN_1407c2680(0xc,0,0x77,s_D__a_1_s_target_release_build_bo_140bf38c0,0x220);
            FUN_1407d8680(param_1,param_4);
            uVar1 = 0;
          }
        }
      }
    }
  }
  return uVar1;
}


/* address=1407d8e30 name=FUN_1407d8e30 */

undefined8
FUN_1407d8e30(longlong *param_1,undefined8 *param_2,int param_3,uint *param_4,undefined param_5,
             undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int local_res18 [2];
  uint *local_res20;
  uint local_40;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = *param_4;
  local_2c = uVar1 & 0xc0;
  local_38 = *param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if ((uVar1 & 6) == 0) {
    if ((uVar1 & 8) == 0) {
      iVar2 = FUN_1407d9bf0(param_1,&local_38,param_3,*(undefined8 *)(param_4 + 6),0xffffffff,0,
                            param_5,param_6,param_7);
      if (iVar2 != 0) {
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        goto LAB_1407d9246;
      }
      FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf3a80,0x284);
    }
    else {
      iVar2 = FUN_1407d9bf0(param_1,&local_38,param_3,*(undefined8 *)(param_4 + 6),param_4[1],
                            local_2c,param_5,param_6,param_7);
      if (iVar2 != 0) {
        if (iVar2 == -1) {
          return 0xffffffff;
        }
LAB_1407d9246:
        *param_2 = local_38;
        return 1;
      }
      FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf3a10,0x27a);
    }
  }
  else {
    if ((uVar1 & 8) == 0) {
      local_30 = 0;
      if ((uVar1 & 2) == 0) {
        local_40 = 0x10;
      }
      else {
        local_40 = 0x11;
      }
    }
    else {
      local_40 = param_4[1];
      local_30 = local_2c;
    }
    iVar2 = FUN_1407d8a50(local_res18,0,0,0,&local_38,param_3,local_40,local_30,param_5);
    if (iVar2 == 0) {
      FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf3930,0x250);
      return 0;
    }
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    if (*param_1 == 0) {
      lVar3 = FUN_1407d8940();
      *param_1 = lVar3;
    }
    else {
      local_20 = *param_1;
      while (lVar3 = FUN_1407d8960(local_20), lVar3 != 0) {
        local_18 = FUN_1407d89b0(local_20);
        FUN_1407d8280(&local_18,*(undefined8 *)(local_res20 + 6));
      }
    }
    if (*param_1 != 0) {
      do {
        if (local_res18[0] < 1) goto LAB_1407d9246;
        local_10 = local_38;
        local_28 = 0;
        local_40 = local_40 & 0xffffff00;
        iVar2 = FUN_1407d9bf0(&local_28,&local_38,local_res18[0],*(undefined8 *)(local_res20 + 6),
                              0xffffffff,0,local_40,param_6,param_7);
        if (iVar2 == 0) {
          FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf39a0,0x26c);
          goto LAB_1407d925d;
        }
        local_res18[0] = local_res18[0] - ((int)local_38 - (int)local_10);
        lVar3 = FUN_1407d8980(*param_1,local_28);
      } while (lVar3 != 0);
      FUN_1407d8280(&local_28,*(undefined8 *)(local_res20 + 6));
    }
  }
LAB_1407d925d:
  FUN_1407d8680(param_1,local_res20);
  return 0;
}


/* address=1407d9290 name=FUN_1407d9290 */

int FUN_1407d9290(uint **param_1,byte *param_2,int param_3,uint param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  uint **local_res8;
  byte *local_res10;
  int local_res18;
  uint local_res20;
  uint *local_58;
  int local_4c;
  uint *local_48;
  undefined local_40 [16];
  uint **local_30;
  uint **local_28;
  uint **local_10;
  
  local_28 = (uint **)0x0;
  local_58 = (uint *)0x0;
  local_4c = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(longlong *)(param_5 + 0x18) != 0) {
    FID_conflict__assert((wchar_t *)s_i_140bf3ec8,(wchar_t *)s_D_140bf3e00,0x2fa);
  }
  local_res8 = param_1;
  if (*(int *)(param_5 + 4) == -4) {
    if (*param_1 == (uint *)0x0) {
      local_58 = (uint *)FUN_1407d76a0();
      if (local_58 == (uint *)0x0) goto LAB_1407d977b;
      *param_1 = local_58;
    }
    else {
      local_58 = *param_1;
    }
    if (local_res20 != *local_58) {
      FUN_140810050(local_58,local_res20,0);
    }
    local_res8 = (uint **)(local_58 + 2);
    local_28 = param_1;
  }
  switch(local_res20) {
  case 1:
    if (local_res18 != 1) {
      FUN_1407c2680(0xc,0,0x6a,s_D__a_1_s_target_release_build_bo_140bf3f60,799);
      goto LAB_1407d977b;
    }
    local_10 = local_res8;
    *(uint *)local_res8 = (uint)*local_res10;
    break;
  case 2:
  case 10:
    local_30 = local_res8;
    lVar2 = FUN_1407ce0f0(local_res8,&local_res10,local_res18);
    if (lVar2 == 0) goto LAB_1407d977b;
    (*local_30)[1] = local_res20 | (*local_30)[1] & 0x100;
    break;
  case 3:
    lVar2 = FUN_1407dc500(local_res8,&local_res10,local_res18);
    goto joined_r0x0001407d93e4;
  case 5:
    if (local_res18 != 0) {
      FUN_1407c2680(0xc,0,0xa4,s_D__a_1_s_target_release_build_bo_140bf3ef0,0x317);
      goto LAB_1407d977b;
    }
    *local_res8 = (uint *)0x1;
    break;
  case 6:
    lVar2 = FUN_1407cc8d0(local_res8,&local_res10,local_res18);
joined_r0x0001407d93e4:
    if (lVar2 == 0) goto LAB_1407d977b;
    break;
  default:
    FUN_1407dce80(local_40,local_res10,(longlong)local_res18);
    if (local_res20 == 0x1e) {
      do {
        lVar2 = FUN_1407dcf10(local_40);
        if (lVar2 == 0) goto LAB_1407d9586;
        iVar1 = FUN_14083a090(local_40);
      } while (iVar1 != 0);
      FUN_1407c2680(0xc,0,0x8e,s_D__a_1_s_target_release_build_bo_140bf3fd0,0x356);
      goto LAB_1407d977b;
    }
LAB_1407d9586:
    if (local_res20 == 0x1c) {
      do {
        lVar2 = FUN_1407dcf10(local_40);
        if (lVar2 == 0) goto LAB_1407d95db;
        iVar1 = FUN_14083a0f0(local_40);
      } while (iVar1 != 0);
      FUN_1407c2680(0xc,0,0x95,s_D__a_1_s_target_release_build_bo_140bf4040,0x35f);
      goto LAB_1407d977b;
    }
LAB_1407d95db:
    if (local_res20 == 0xc) {
      do {
        lVar2 = FUN_1407dcf10(local_40);
        if (lVar2 == 0) goto LAB_1407d9630;
        iVar1 = FUN_140839eb0(local_40);
      } while (iVar1 != 0);
      FUN_1407c2680(0xc,0,0x96,s_D__a_1_s_target_release_build_bo_140bf40b0,0x368);
      goto LAB_1407d977b;
    }
LAB_1407d9630:
    if ((local_res20 == 0x17) && (iVar1 = FUN_1407de390(local_40,0,1), iVar1 == 0)) {
      FUN_1407c2680(0xc,0,0x94,s_D__a_1_s_target_release_build_bo_140bf4120,0x36f);
      goto LAB_1407d977b;
    }
    if ((local_res20 == 0x18) && (iVar1 = FUN_1407de350(local_40,0,0), iVar1 == 0)) {
      FUN_1407c2680(0xc,0,0x94,s_D__a_1_s_target_release_build_bo_140bf4190,0x376);
      goto LAB_1407d977b;
    }
    if (*local_res8 == (uint *)0x0) {
      local_48 = (uint *)FUN_1407cba70(local_res20);
      if (local_48 == (uint *)0x0) goto LAB_1407d977b;
      *local_res8 = local_48;
    }
    else {
      local_48 = *local_res8;
      local_48[1] = local_res20;
    }
    iVar1 = FUN_1407cbdc0(local_48,local_res10,(longlong)local_res18);
    if (iVar1 == 0) {
      FUN_1407cbb00(local_48);
      *local_res8 = (uint *)0x0;
      goto LAB_1407d977b;
    }
  }
  if ((local_58 != (uint *)0x0) && (local_res20 == 5)) {
    *(undefined8 *)(local_58 + 2) = 0;
  }
  local_4c = 1;
LAB_1407d977b:
  if ((local_4c == 0) && (FUN_1407d76c0(local_58), local_28 != (uint **)0x0)) {
    *local_28 = (uint *)0x0;
  }
  return local_4c;
}


/* address=1407d9840 name=FUN_1407d9840 */

int FUN_1407d9840(longlong param_1,longlong *param_2,undefined4 param_3,char *param_4,int param_5,
                 undefined4 param_6,char param_7)

{
  int iVar1;
  char local_38;
  undefined local_37 [3];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  longlong local_20;
  longlong local_18;
  
  local_30 = 0;
  local_18 = 0;
  if (param_1 == 0) {
    FUN_1407c2680(0xc,0,0x84,s_D__a_1_s_target_release_build_bo_140bf3af0,0x29d);
    return 0;
  }
  if (*param_4 == '\x05') {
    local_34 = param_5;
    param_5 = -1;
  }
  else {
    local_34 = *(int *)(param_4 + 4);
  }
  if (local_34 == -4) {
    if (-1 < param_5) {
      FUN_1407c2680(0xc,0,0x89,s_D__a_1_s_target_release_build_bo_140bf3b60,0x2ac);
      return 0;
    }
    if (param_7 != '\0') {
      FUN_1407c2680(0xc,0,0x87,s_D__a_1_s_target_release_build_bo_140bf3bd0,0x2b0);
      return 0;
    }
    local_20 = *param_2;
    local_30 = FUN_1407d8a50(0,&local_34,local_37,0,&local_20,param_3,0xffffffff,0,0);
    if (local_30 == 0) {
      FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf3c40,0x2b6);
      return 0;
    }
    iVar1 = FUN_1407daa80(local_34,local_37[0]);
    if (iVar1 == 0) {
      local_34 = -3;
    }
  }
  if (param_5 == -1) {
    param_5 = local_34;
    param_6 = 0;
  }
  local_20 = *param_2;
  local_30 = FUN_1407d8a50(&local_2c,0,0,&local_38,&local_20,param_3,param_5,param_6,param_7);
  if (local_30 == 0) {
    FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf3cb0,0x2c5);
    local_30 = 0;
  }
  else if (local_30 == -1) {
    local_30 = 0xffffffff;
  }
  else {
    local_30 = 0;
    if (((local_34 == 0x10) || (local_34 == 0x11)) || (local_34 == -3)) {
      if ((local_34 != -3) && (local_38 == '\0')) {
        FUN_1407c2680(0xc,0,0xb2,s_D__a_1_s_target_release_build_bo_140bf3d20,0x2d0);
        return 0;
      }
      local_18 = *param_2;
      local_28 = ((int)local_20 - (int)local_18) + local_2c;
    }
    else {
      if (local_38 != '\0') {
        FUN_1407c2680(0xc,0,0xb3,s_D__a_1_s_target_release_build_bo_140bf3d90,0x2db);
        return 0;
      }
      local_18 = local_20;
      local_28 = local_2c;
    }
    local_20 = local_20 + local_2c;
    iVar1 = FUN_1407d9290(param_1,local_18,local_28,local_34,param_4);
    if (iVar1 != 0) {
      *param_2 = local_20;
      local_30 = 1;
    }
  }
  return local_30;
}


/* address=1407d9bf0 name=FUN_1407d9bf0 */

undefined8
FUN_1407d9bf0(longlong *param_1,ulonglong *param_2,int param_3,char *param_4,int param_5,
             undefined4 param_6,char param_7,longlong param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res18 [2];
  char *local_res20;
  ulonglong *puVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffff00;
  uint uVar8;
  int local_d8;
  bool local_d4;
  uint *local_c8;
  char local_c0;
  char local_bf [7];
  ulonglong local_b8;
  char local_b0;
  uint *local_a8;
  undefined4 local_a0;
  uint local_9c;
  uint *local_98;
  uint *local_90;
  code *local_88;
  code *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  code *local_60;
  longlong local_58;
  code *local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  local_90 = (uint *)0x0;
  local_b8 = 0;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_8 != 0) {
    uVar3 = FUN_1407e2440(param_8);
    if (uVar3 <= *param_2) {
      local_38 = (longlong)local_res18[0] + *param_2;
      local_40 = FUN_1407e2440(param_8);
      lVar4 = FUN_1407e2460(param_8);
      if (local_38 <= (ulonglong)(local_40 + lVar4)) goto LAB_1407d9cd6;
    }
    FID_conflict__assert((wchar_t *)s_C_140bf2f30,(wchar_t *)s_D_140bf2e60,0xd4);
  }
LAB_1407d9cd6:
  if (0x3fffffff < local_res18[0]) {
    local_res18[0] = 0x3fffffff;
  }
  param_9 = param_9 + 1;
  if (param_9 < 0x1f) {
    local_b0 = *local_res20;
    if (local_b0 == '\0') {
      if (*(longlong *)(local_res20 + 8) == 0) {
        uVar5 = FUN_1407d9840(param_1,param_2,local_res18[0],local_res20,param_5,
                              CONCAT44(uVar7,param_6),param_7);
        return uVar5;
      }
      if ((param_5 == -1) && (param_7 == '\0')) {
        uVar5 = FUN_1407d8bb0(param_1,param_2,local_res18[0],*(undefined8 *)(local_res20 + 8),0,
                              param_8,param_9);
        return uVar5;
      }
      FUN_1407c2680(0xc,0,0x88,s_D__a_1_s_target_release_build_bo_140bf3060,0xea);
    }
    else {
      if (local_b0 == '\x01') {
        local_b8 = *param_2;
        if (param_5 == -1) {
          param_5 = 0x10;
          param_6 = 0;
        }
        iVar1 = FUN_1407d8a50(local_res18,0,0,local_bf,&local_b8,CONCAT44(uVar7,local_res18[0]),
                              param_5,param_6,param_7);
        if (iVar1 == 0) {
          FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf34c0,0x16f);
          goto LAB_1407da9eb;
        }
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        if (local_bf[0] == '\0') {
          FUN_1407c2680(0xc,0,0xa9,s_D__a_1_s_target_release_build_bo_140bf3530,0x175);
          goto LAB_1407da9eb;
        }
        if ((*param_1 == 0) && (iVar1 = FUN_1407d79a0(param_1,local_res20), iVar1 == 0)) {
          FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf35a0,0x17a);
          goto LAB_1407da9eb;
        }
        local_58 = *(longlong *)(local_res20 + 0x18);
        if (local_58 == 0) {
          local_50 = (code *)0x0;
        }
        else {
          local_50 = *(code **)(local_58 + 0x10);
        }
        local_80 = local_50;
        if ((local_50 == (code *)0x0) || (iVar1 = (*local_50)(4,param_1,local_res20,0), iVar1 != 0))
        {
          local_d8 = 0;
          local_c8 = *(uint **)(local_res20 + 8);
          for (; local_d8 < *(int *)(local_res20 + 0x10); local_d8 = local_d8 + 1) {
            if (((*local_c8 & 0x300) != 0) &&
               (local_70 = FUN_1407e58e0(param_1,local_c8,0), local_70 != 0)) {
              local_28 = FUN_1407e58a0(param_1,local_70);
              FUN_1407d8680(local_28);
            }
            local_c8 = local_c8 + 8;
          }
          local_d8 = 0;
          local_c8 = *(uint **)(local_res20 + 8);
          for (; local_d8 < *(int *)(local_res20 + 0x10); local_d8 = local_d8 + 1) {
            local_a8 = (uint *)FUN_1407e58e0(param_1,local_c8,1);
            if (local_a8 == (uint *)0x0) goto LAB_1407da9eb;
            local_48 = FUN_1407e58a0(param_1,local_a8);
            if (local_res18[0] == 0) break;
            local_20 = local_b8;
            if (local_d8 == *(int *)(local_res20 + 0x10) + -1) {
              local_d4 = false;
            }
            else {
              local_d4 = (*local_a8 & 1) != 0;
              local_9c = (uint)local_d4;
            }
            iVar1 = FUN_1407d8bb0(local_48,&local_b8,local_res18[0],local_a8,local_d4,param_8,
                                  param_9);
            if (iVar1 == 0) {
              local_90 = local_a8;
              goto LAB_1407da9eb;
            }
            if (iVar1 == -1) {
              FUN_1407d8680(local_48,local_a8);
            }
            else {
              local_res18[0] = local_res18[0] - ((int)local_b8 - (int)local_20);
            }
            local_c8 = (uint *)((longlong)local_c8 + 0x20);
          }
          if (local_res18[0] != 0) {
            FUN_1407c2680(0xc,0,0xa8,s_D__a_1_s_target_release_build_bo_140bf3610,0x1ba);
            goto LAB_1407da9eb;
          }
          for (; local_d8 < *(int *)(local_res20 + 0x10); local_d8 = local_d8 + 1) {
            local_98 = (uint *)FUN_1407e58e0(param_1,local_c8,1);
            if (local_98 == (uint *)0x0) goto LAB_1407da9eb;
            if ((*local_98 & 1) == 0) {
              local_90 = local_98;
              FUN_1407c2680(0xc,0,0x79,s_D__a_1_s_target_release_build_bo_140bf3680,0x1cd);
              goto LAB_1407da9eb;
            }
            local_18 = FUN_1407e58a0(param_1,local_98);
            FUN_1407d8680(local_18,local_98);
            local_c8 = (uint *)((longlong)local_c8 + 0x20);
          }
          iVar1 = FUN_1407e5c20(param_1,*param_2,local_b8 - *param_2,local_res20,param_8);
          if ((iVar1 != 0) &&
             ((local_80 == (code *)0x0 || (iVar1 = (*local_80)(5,param_1,local_res20,0), iVar1 != 0)
              ))) {
            *param_2 = local_b8;
            return 1;
          }
        }
      }
      else {
        if (local_b0 != '\x02') {
          if (local_b0 == '\x04') {
            if (param_5 == -1) {
              local_30 = *(longlong *)(local_res20 + 0x18);
              uVar5 = (**(code **)(local_30 + 0x18))
                                (param_1,param_2,local_res18[0],local_res20,(int)param_7,0);
              return uVar5;
            }
            FUN_1407c2680(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_140bf3290,0x11a);
          }
          else {
            if (local_b0 != '\x05') {
              return 0;
            }
            if (param_5 == -1) {
              local_b8 = *param_2;
              uVar8 = 0xffffffff;
              uVar3 = CONCAT44(uVar7,local_res18[0]);
              puVar6 = &local_b8;
              iVar1 = FUN_1407d8a50(0,&local_a0,&local_c0,0,puVar6,uVar3,0xffffffff,0,1);
              uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
              if (iVar1 == 0) {
                FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf3140,
                              CONCAT44(uVar7,0xff));
              }
              else if (local_c0 == '\0') {
                uVar2 = FUN_1407d8850(local_a0);
                if ((uVar2 & *(uint *)(local_res20 + 4)) != 0) {
                  uVar5 = FUN_1407d9840(param_1,param_2,local_res18[0],local_res20,
                                        CONCAT44(uVar7,local_a0),uVar3 & 0xffffffff00000000,
                                        uVar8 & 0xffffff00);
                  return uVar5;
                }
                if (param_7 != '\0') {
                  return 0xffffffff;
                }
                FUN_1407c2680(0xc,0,0x9d,s_D__a_1_s_target_release_build_bo_140bf3220,
                              CONCAT44(uVar7,0x112));
              }
              else {
                if (param_7 != '\0') {
                  return 0xffffffff;
                }
                FUN_1407c2680(0xc,0,0x9c,s_D__a_1_s_target_release_build_bo_140bf31b0,
                              CONCAT44(uVar7,0x109));
              }
            }
            else {
              FUN_1407c2680(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_140bf30d0,0xf7);
            }
          }
          goto LAB_1407da9eb;
        }
        if (param_5 != -1) {
          FUN_1407c2680(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_140bf3300,0x125);
          goto LAB_1407da9eb;
        }
        local_68 = *(longlong *)(local_res20 + 0x18);
        if (local_68 == 0) {
          local_60 = (code *)0x0;
        }
        else {
          local_60 = *(code **)(local_68 + 0x10);
        }
        local_88 = local_60;
        if ((local_60 == (code *)0x0) || (iVar1 = (*local_60)(4,param_1,local_res20,0), iVar1 != 0))
        {
          if (*param_1 == 0) {
            iVar1 = FUN_1407d79a0(param_1,local_res20);
            if (iVar1 == 0) {
              FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf3370,0x139);
              goto LAB_1407da9eb;
            }
          }
          else {
            iVar1 = FUN_1407e5810(param_1,local_res20);
            if ((-1 < iVar1) && (iVar1 < *(int *)(local_res20 + 0x10))) {
              lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)(local_res20 + 8);
              local_78 = FUN_1407e58a0(param_1,lVar4);
              FUN_1407d8680(local_78,lVar4);
              FUN_1407e5850(param_1,0xffffffff,local_res20);
            }
          }
          local_b8 = *param_2;
          local_d8 = 0;
          local_c8 = *(uint **)(local_res20 + 8);
          for (; local_d8 < *(int *)(local_res20 + 0x10); local_d8 = local_d8 + 1) {
            local_78 = FUN_1407e58a0(param_1,local_c8);
            iVar1 = FUN_1407d8bb0(local_78,&local_b8,local_res18[0],local_c8,1,param_8,param_9);
            if (iVar1 != -1) {
              if (iVar1 < 1) {
                local_90 = local_c8;
                FUN_1407c2680(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_140bf33e0,0x14c);
                goto LAB_1407da9eb;
              }
              break;
            }
            local_c8 = local_c8 + 8;
          }
          if (local_d8 == *(int *)(local_res20 + 0x10)) {
            if (param_7 != '\0') {
              FUN_1407d8280(param_1,local_res20);
              return 0xffffffff;
            }
            FUN_1407c2680(0xc,0,0xa3,s_D__a_1_s_target_release_build_bo_140bf3450,0x158);
            goto LAB_1407da9eb;
          }
          FUN_1407e5850(param_1,local_d8,local_res20);
          if ((local_88 == (code *)0x0) ||
             (iVar1 = (*local_88)(5,param_1,local_res20,0), iVar1 != 0)) {
            *param_2 = local_b8;
            return 1;
          }
        }
      }
      FUN_1407c2680(0xc,0,0x65,s_D__a_1_s_target_release_build_bo_140bf36f0,0x1e0);
    }
  }
  else {
    FUN_1407c2680(0xc,0,0xc0,s_D__a_1_s_target_release_build_bo_140bf2ff0,0xde);
  }
LAB_1407da9eb:
  FUN_1407d8280(param_1,local_res20);
  if (local_90 == (uint *)0x0) {
    FUN_1407c27a0(2,s_Type__140bf3768,*(undefined8 *)(local_res20 + 0x28));
  }
  else {
    FUN_1407c27a0(4,s_Field__140bf3760,*(undefined8 *)(local_90 + 4),s___Type__140bf3758,
                  *(undefined8 *)(local_res20 + 0x28));
  }
  return 0;
}


/* address=1407daa80 name=FUN_1407daa80 */

undefined4 FUN_1407daa80(int param_1,int param_2)

{
  undefined4 local_18;
  
  if (param_2 == 0) {
    if (((((((param_1 == 6) || (param_1 == 5)) || (param_1 == 1)) ||
          (((param_1 == 3 || (param_1 == 2)) ||
           ((param_1 == 10 || ((param_1 == 4 || (param_1 == 0x12)))))))) ||
         ((param_1 == 0x13 || (((param_1 == 0x14 || (param_1 == 0x15)) || (param_1 == 0x16)))))) ||
        (((param_1 == 0x17 || (param_1 == 0x18)) ||
         (((param_1 == 0x19 || ((param_1 == 0x1a || (param_1 == 0x1b)))) || (param_1 == 0x1c))))))
       || ((((param_1 == 0x1e || (param_1 == 0xc)) || (param_1 == 0x11)) || (param_1 == 0x10)))) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=1407dab60 name=FUN_1407dab60 */

ulonglong FUN_1407dab60(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  longlong local_18 [3];
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((param_2 == (longlong *)0x0) || (*param_2 != 0)) {
    uVar4 = FUN_1407dad80(&local_res8,param_2,param_3,0xffffffff,0);
  }
  else {
    uVar1 = FUN_1407dad80(&local_res8,0,param_3,0xffffffff,0);
    if ((int)uVar1 < 1) {
      uVar4 = (ulonglong)uVar1;
    }
    else {
      lVar3 = FUN_1407ccfc0((longlong)(int)uVar1);
      if (lVar3 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        local_18[0] = lVar3;
        uVar2 = FUN_1407dad80(&local_res8,local_18,local_res18,0xffffffff,0);
        if ((int)uVar2 < 1) {
          FUN_1407cd0f0(lVar3);
          uVar4 = (ulonglong)uVar2;
        }
        else {
          if (uVar1 != uVar2) {
            FID_conflict__assert((wchar_t *)s_l_140bf43a8,(wchar_t *)s_D_140bf42e0,0x67);
          }
          *local_res10 = lVar3;
          uVar4 = (ulonglong)uVar1;
        }
      }
    }
  }
  return uVar4;
}


/* address=1407daca0 name=FUN_1407daca0 */

void FUN_1407daca0(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407dacc0 name=FUN_1407dacc0 */

void FUN_1407dacc0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407dacf0 name=FUN_1407dacf0 */

int FUN_1407dacf0(void *param_1,void *param_2,size_t param_3)

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


/* address=1407dad30 name=FUN_1407dad30 */

undefined8 FUN_1407dad30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407dad80 name=FUN_1407dad80 */

int FUN_1407dad80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_1407dae00(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_r_140bf4488,(wchar_t *)s_D_140bf43c0,0x75);
  }
  return iVar1;
}


/* address=1407dae00 name=FUN_1407dae00 */

ulonglong FUN_1407dae00(longlong *param_1,longlong param_2,char *param_3,int param_4,uint param_5,
                       int param_6)

{
  int iVar1;
  ulonglong uVar2;
  int local_res20;
  int local_68;
  uint local_64;
  char local_60;
  longlong local_58;
  int local_50;
  uint local_4c;
  uint local_48;
  uint *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = 0;
  if ((param_5 & 0xc0) != param_5) {
    FID_conflict__assert((wchar_t *)s___140bf4570,(wchar_t *)s_D_140bf44a0,0x83);
  }
  if ((param_4 == -1) && (param_5 != 0)) {
    FID_conflict__assert((wchar_t *)s_t_140bf4698,(wchar_t *)s_D_140bf45d0,0x85);
  }
  if ((*param_3 == '\0') || (*param_1 != 0)) {
    local_60 = *param_3;
    if (local_60 == '\0') {
      if (*(longlong *)(param_3 + 8) == 0) {
        uVar2 = FUN_1407db510(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      else if ((**(uint **)(param_3 + 8) & 1) == 0) {
        uVar2 = FUN_1407dbf10(param_1,param_2,*(undefined8 *)(param_3 + 8),param_4,param_5,param_6);
      }
      else {
        FUN_1407c2680(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_140bf4740,0x96);
        uVar2 = 0xffffffff;
      }
    }
    else if (local_60 == '\x01') {
      iVar1 = FUN_1407e5b70(&local_64,param_2,param_1,param_3);
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (iVar1 < 1) {
        local_64 = 0;
        local_res20 = param_4;
        if (param_4 == -1) {
          local_res20 = 0x10;
          param_5 = 0;
        }
        local_68 = 0;
        local_58 = *(longlong *)(param_3 + 8);
        for (; local_68 < *(int *)(param_3 + 0x10); local_68 = local_68 + 1) {
          local_38 = FUN_1407e58e0(param_1,local_58,1);
          if (local_38 == 0) {
            return 0xffffffff;
          }
          local_18 = FUN_1407e58a0(param_1,local_38);
          local_50 = FUN_1407dbf10(local_18,0,local_38,0xffffffff,0,0);
          if ((local_50 == -1) || ((int)(0x7fffffff - local_64) < local_50)) {
            return 0xffffffff;
          }
          local_64 = local_64 + local_50;
          local_58 = local_58 + 0x20;
        }
        local_4c = FUN_1407cc300(1,local_64,local_res20);
        if ((param_2 == 0) || (local_4c == 0xffffffff)) {
          uVar2 = (ulonglong)local_4c;
        }
        else {
          FUN_1407cc100(param_2,1,local_64,local_res20,param_5);
          local_68 = 0;
          local_58 = *(longlong *)(param_3 + 8);
          for (; local_68 < *(int *)(param_3 + 0x10); local_68 = local_68 + 1) {
            local_30 = FUN_1407e58e0(param_1,local_58,1);
            if (local_30 == 0) {
              return 0xffffffff;
            }
            local_10 = FUN_1407e58a0(param_1,local_30);
            iVar1 = FUN_1407dbf10(local_10,param_2,local_30,0xffffffff,0,0);
            if (iVar1 < 0) {
              return 0xffffffff;
            }
            local_58 = local_58 + 0x20;
          }
          uVar2 = (ulonglong)local_4c;
        }
      }
      else {
        uVar2 = (ulonglong)local_64;
      }
    }
    else if (local_60 == '\x02') {
      if (param_4 == -1) {
        iVar1 = FUN_1407e5810(param_1,param_3);
        if ((iVar1 < 0) || (*(int *)(param_3 + 0x10) <= iVar1)) {
          FUN_1407c2680(0xc,0,0xa3,s_D__a_1_s_target_release_build_bo_140bf4890,0xb0);
          uVar2 = 0xffffffff;
        }
        else {
          local_40 = (uint *)((longlong)iVar1 * 0x20 + *(longlong *)(param_3 + 8));
          if ((*local_40 & 1) == 0) {
            local_28 = FUN_1407e58a0(param_1,local_40);
            uVar2 = FUN_1407dbf10(local_28,param_2,local_40,0xffffffff,0,0);
          }
          else {
            FUN_1407c2680(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_140bf4900,0xb5);
            uVar2 = 0xffffffff;
          }
        }
      }
      else {
        FUN_1407c2680(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_140bf4820,0xab);
        uVar2 = 0xffffffff;
      }
    }
    else if (local_60 == '\x04') {
      if (param_4 == -1) {
        local_20 = *(longlong *)(param_3 + 0x18);
        local_48 = (**(code **)(local_20 + 0x20))(param_1,param_2,param_3);
        if (local_48 == 0) {
          FUN_1407c2680(0xc,0,0x44,s_D__a_1_s_target_release_build_bo_140bf49e0,200);
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = (ulonglong)local_48;
        }
      }
      else {
        FUN_1407c2680(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_140bf4970,0xbf);
        uVar2 = 0xffffffff;
      }
    }
    else if (local_60 == '\x05') {
      if (param_4 == -1) {
        uVar2 = FUN_1407db510(param_1,param_2,param_3,0xffffffff,0,param_6);
      }
      else {
        FUN_1407c2680(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_140bf47b0,0xa2);
        uVar2 = 0xffffffff;
      }
    }
    else {
      FUN_1407c2680(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_140bf4a50,0x108);
      uVar2 = 0xffffffff;
    }
  }
  else if (param_6 == 0) {
    FUN_1407c2680(0xc,0,0x9b,s_D__a_1_s_target_release_build_bo_140bf46d0,0x8d);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1407db510 name=FUN_1407db510 */

ulonglong FUN_1407db510(undefined8 param_1,longlong *param_2,longlong param_3,int param_4,
                       undefined4 param_5,int param_6)

{
  ulonglong uVar1;
  int local_res20;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  local_28 = *(int *)(param_3 + 4);
  local_24 = FUN_1407db6e0(param_1,0,&local_20,&local_28,param_3);
  if ((int)local_24 < 0) {
    uVar1 = 0xffffffff;
  }
  else if (local_20 == 0) {
    if (((local_28 == 0x10) || (local_28 == 0x11)) || (local_28 == -3)) {
      local_1c = 0;
    }
    else {
      local_1c = 1;
    }
    local_14 = local_1c;
    local_res20 = param_4;
    if (param_4 == -1) {
      local_res20 = local_28;
    }
    if (param_2 != (longlong *)0x0) {
      if (local_1c != 0) {
        FUN_1407cc100(param_2,0,local_24,local_res20,param_5);
      }
      local_18 = FUN_1407db6e0(param_1,*param_2,&local_20,&local_28,param_3);
      if ((int)local_18 < 0) {
        return 0xffffffff;
      }
      if (local_24 != local_18) {
        FID_conflict__assert((wchar_t *)s_l_140bf52c8,(wchar_t *)s_D_140bf5200,0x219);
      }
      if (local_20 != 0) {
        FID_conflict__assert((wchar_t *)s___140bf53a8,(wchar_t *)s_D_140bf52e0,0x21a);
      }
      *param_2 = (longlong)(int)local_24 + *param_2;
    }
    if (local_14 == 0) {
      uVar1 = (ulonglong)local_24;
    }
    else {
      uVar1 = FUN_1407cc300(0,local_24,local_res20);
    }
  }
  else if (param_6 == 0) {
    FUN_1407c2680(0xc,0,0x9b,s_D__a_1_s_target_release_build_bo_140bf5190,0x201);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=1407db6e0 name=FUN_1407db6e0 */

int FUN_1407db6e0(int **param_1,longlong param_2,undefined4 *param_3,int *param_4,char *param_5)

{
  int iVar1;
  int **local_res8;
  longlong local_res10;
  undefined4 *local_res18;
  int *local_res20;
  int local_68;
  undefined local_64 [4];
  int local_60;
  int local_5c;
  undefined4 local_58;
  int **local_40;
  int *local_38;
  undefined *local_30;
  int *local_28;
  int *local_20;
  longlong *local_18;
  longlong *local_10;
  
  local_40 = (int **)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(longlong *)(param_5 + 0x18) != 0) {
    FID_conflict__assert((wchar_t *)s_i_140bf5488,(wchar_t *)s_D_140bf53c0,0x240);
  }
  *local_res18 = 0;
  if (((*param_5 != '\0') || (*(int *)(param_5 + 4) != 1)) && (*param_1 == (int *)0x0)) {
    *local_res18 = 1;
    return 0;
  }
  local_res8 = param_1;
  if (*param_5 == '\x05') {
    local_38 = *param_1;
    local_68 = local_38[1];
    if ((local_68 < 0) && (local_68 != -3)) {
      FUN_1407c2680(0xc,0,0xbf,s_D__a_1_s_target_release_build_bo_140bf54b0,0x252);
      return -1;
    }
    if (local_68 == 0x102) {
      local_68 = 2;
    }
    else if (local_68 == 0x10a) {
      local_68 = 10;
    }
    *local_res20 = local_68;
  }
  else if (*(int *)(param_5 + 4) == -4) {
    local_28 = *param_1;
    local_68 = *local_28;
    if ((local_68 < 0) && (local_68 != -3)) {
      FUN_1407c2680(0xc,0,0xbf,s_D__a_1_s_target_release_build_bo_140bf5520,0x26b);
      return -1;
    }
    *local_res20 = local_68;
    local_res8 = (int **)(local_28 + 2);
  }
  else {
    local_68 = *local_res20;
  }
  local_5c = local_68 + 3;
  switch(local_5c) {
  default:
    local_38 = *local_res8;
    local_30 = *(undefined **)(local_38 + 2);
    local_60 = *local_38;
    break;
  case 4:
    local_40 = local_res8;
    if (*(int *)local_res8 == -1) {
      *local_res18 = 1;
      return 0;
    }
    if ((*(int *)(param_5 + 4) != -4) &&
       (((*(int *)local_res8 != 0 && (0 < *(int *)(param_5 + 0x20))) ||
        ((*(int *)local_res8 == 0 && (*(int *)(param_5 + 0x20) == 0)))))) {
      *local_res18 = 1;
      return 0;
    }
    if (*(int *)local_res8 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = 0xff;
    }
    local_64[0] = (undefined)local_58;
    local_30 = local_64;
    local_60 = 1;
    break;
  case 5:
  case 0xd:
    if (local_res10 == 0) {
      local_10 = (longlong *)0x0;
    }
    else {
      local_10 = &local_res10;
    }
    iVar1 = FUN_1407ce3e0(*local_res8,local_10);
    if (0 < iVar1) {
      return iVar1;
    }
    return -1;
  case 6:
    if (local_res10 == 0) {
      local_18 = (longlong *)0x0;
    }
    else {
      local_18 = &local_res10;
    }
    iVar1 = FUN_1407dc7b0(*local_res8,local_18);
    if (0 < iVar1) {
      return iVar1;
    }
    return -1;
  case 8:
    local_30 = (undefined *)0x0;
    local_60 = 0;
    break;
  case 9:
    local_20 = *local_res8;
    local_30 = *(undefined **)(local_20 + 6);
    local_60 = local_20[5];
    if (local_60 == 0) {
      FUN_1407c2680(0xc,0,0x86,s_D__a_1_s_target_release_build_bo_140bf5590,0x27b);
      return -1;
    }
  }
  if ((local_res10 != 0) && (local_60 != 0)) {
    FUN_1407dad30(local_res10,local_30,(longlong)local_60);
  }
  return local_60;
}


/* address=1407dbbe0 name=FUN_1407dbbe0 */

undefined4
FUN_1407dbbe0(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined4 local_38;
  ulonglong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  if ((param_5 == 0) || (uVar3 = FUN_1407daca0(param_1), uVar3 < 2)) {
    local_30 = 0;
    while (uVar3 = FUN_1407daca0(param_1), local_30 < uVar3) {
      local_20 = FUN_1407dacc0(param_1,local_30);
      iVar1 = FUN_1407dad80(&local_20,param_2,param_4,0xffffffff,0);
      if (iVar1 < 0) {
        return 0;
      }
      local_30 = local_30 + 1;
    }
    local_38 = 1;
  }
  else {
    uVar3 = FUN_1407daca0(param_1);
    if (uVar3 < 0x1000000000000000) {
      local_38 = 0;
      local_28 = FUN_1407ccfc0((longlong)param_3);
      lVar4 = FUN_1407daca0(param_1);
      lVar4 = FUN_1407ccfc0(lVar4 * 0x10);
      if ((lVar4 != 0) && (local_28 != 0)) {
        local_50 = local_28;
        local_48 = 0;
        while (uVar3 = FUN_1407daca0(param_1), local_48 < uVar3) {
          local_18[0] = FUN_1407dacc0(param_1,local_48);
          *(longlong *)(lVar4 + local_48 * 0x10) = local_50;
          uVar2 = FUN_1407dad80(local_18,&local_50,param_4,0xffffffff,0);
          *(undefined4 *)(lVar4 + 8 + local_48 * 0x10) = uVar2;
          if (*(int *)(lVar4 + 8 + local_48 * 0x10) < 0) goto LAB_1407dbee8;
          if ((longlong)param_3 < local_50 - local_28) {
            FID_conflict__assert((wchar_t *)s_p_140bf5158,(wchar_t *)s_D_140bf5090,0x1dc);
          }
          local_48 = local_48 + 1;
        }
        uVar5 = FUN_1407daca0(param_1);
        FUN_1408c2130(lVar4,uVar5,0x10,&LAB_1407dc460);
        local_50 = *param_2;
        local_40 = 0;
        while (uVar3 = FUN_1407daca0(param_1), local_40 < uVar3) {
          FUN_1407dad30(local_50,*(undefined8 *)(lVar4 + local_40 * 0x10),
                        (longlong)*(int *)(lVar4 + 8 + local_40 * 0x10));
          local_50 = local_50 + *(int *)(lVar4 + 8 + local_40 * 0x10);
          local_40 = local_40 + 1;
        }
        *param_2 = local_50;
        local_38 = 1;
      }
LAB_1407dbee8:
      FUN_1407cd0f0(lVar4);
      FUN_1407cd0f0(local_28);
    }
    else {
      FUN_1407c2680(0xc,0,0x45,s_D__a_1_s_target_release_build_bo_140bf5020,0x1c8);
      local_38 = 0;
    }
  }
  return local_38;
}


/* address=1407dbf10 name=FUN_1407dbf10 */

ulonglong FUN_1407dbf10(longlong *param_1,longlong param_2,uint *param_3,uint param_4,uint param_5,
                       int param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_40;
  int local_34;
  int local_30;
  uint local_2c;
  ulonglong local_28;
  undefined8 local_18 [3];
  
  uVar4 = *param_3;
  if ((param_5 & 0xc0) != param_5) {
    FID_conflict__assert((wchar_t *)s___140bf4b90,(wchar_t *)s_D_140bf4ac0,0x119);
  }
  if ((param_4 == 0xffffffff) && (param_5 != 0)) {
    FID_conflict__assert((wchar_t *)s_t_140bf4cb8,(wchar_t *)s_D_140bf4bf0,0x11b);
  }
  if ((uVar4 & 0x18) == 0) {
    if (param_4 == 0xffffffff) {
      local_54 = 0xffffffff;
      local_48 = 0;
    }
    else {
      local_48 = param_5 & 0xc0;
      local_54 = param_4;
    }
  }
  else {
    if (param_4 != 0xffffffff) {
      FUN_1407c2680(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_140bf4cf0,0x123);
      return 0xffffffff;
    }
    local_54 = param_3[1];
    local_48 = uVar4 & 0xc0;
  }
  if ((param_6 != 0) && ((uVar4 & 1) != 0)) {
    FID_conflict__assert((wchar_t *)s___140bf4e30,(wchar_t *)s_D_140bf4d60,0x136);
  }
  if ((param_6 == 0) && ((uVar4 & 1) == 0)) {
    local_30 = 0;
  }
  else {
    local_30 = 1;
  }
  if ((uVar4 & 6) == 0) {
    if ((uVar4 & 0x10) == 0) {
      uVar5 = FUN_1407dae00(param_1,param_2,*(undefined8 *)(param_3 + 6),local_54,local_48,local_30)
      ;
    }
    else {
      uVar4 = FUN_1407dae00(param_1,0,*(undefined8 *)(param_3 + 6),0xffffffff,0,local_30);
      if ((int)uVar4 < 1) {
        uVar5 = (ulonglong)uVar4;
      }
      else {
        uVar3 = FUN_1407cc300(1,uVar4,local_54);
        if ((param_2 != 0) && (uVar3 != 0xffffffff)) {
          FUN_1407cc100(param_2,1,uVar4,local_54,local_48);
          iVar2 = FUN_1407dad80(param_1,param_2,*(undefined8 *)(param_3 + 6),0xffffffff,0);
          if (iVar2 < 0) {
            return 0xffffffff;
          }
        }
        uVar5 = (ulonglong)uVar3;
      }
    }
  }
  else {
    lVar1 = *param_1;
    if (*param_1 == 0) {
      if (local_30 == 0) {
        FUN_1407c2680(0xc,0,0x9b,s_D__a_1_s_target_release_build_bo_140bf4e90,0x147);
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      if ((uVar4 & 2) == 0) {
        local_34 = 0;
      }
      else {
        local_34 = 1;
        if ((uVar4 & 4) != 0) {
          FID_conflict__assert((wchar_t *)s___140bf4fd0,(wchar_t *)s_D_140bf4f00,0x14f);
        }
      }
      if ((local_54 == 0xffffffff) || ((uVar4 & 0x10) != 0)) {
        local_2c = 0;
        if (local_34 == 0) {
          local_40 = 0x10;
        }
        else {
          local_40 = 0x11;
        }
      }
      else {
        local_40 = local_54;
        local_2c = local_48;
      }
      local_4c = 0;
      for (local_28 = 0; uVar5 = FUN_1407daca0(lVar1), local_28 < uVar5; local_28 = local_28 + 1) {
        local_18[0] = FUN_1407dacc0(lVar1,local_28);
        iVar2 = FUN_1407dad80(local_18,0,*(undefined8 *)(param_3 + 6),0xffffffff,0);
        if ((iVar2 == -1) || (0x7fffffff - iVar2 < local_4c)) {
          return 0xffffffff;
        }
        local_4c = local_4c + iVar2;
      }
      uVar3 = FUN_1407cc300(1,local_4c,local_40);
      if (uVar3 == 0xffffffff) {
        uVar5 = 0xffffffff;
      }
      else {
        local_50 = uVar3;
        if ((uVar4 & 0x10) != 0) {
          local_50 = FUN_1407cc300(1,uVar3,local_54);
        }
        if ((param_2 == 0) || (local_50 == 0xffffffff)) {
          uVar5 = (ulonglong)local_50;
        }
        else {
          if ((uVar4 & 0x10) != 0) {
            FUN_1407cc100(param_2,1,uVar3,local_54,local_48);
          }
          FUN_1407cc100(param_2,1,local_4c,local_40,local_2c);
          iVar2 = FUN_1407dbbe0(lVar1,param_2,local_4c,*(undefined8 *)(param_3 + 6),local_34);
          if (iVar2 == 0) {
            uVar5 = 0xffffffff;
          }
          else {
            uVar5 = (ulonglong)local_50;
          }
        }
      }
    }
  }
  return uVar5;
}


/* address=1407dc500 name=FUN_1407dc500 */

int * FUN_1407dc500(int **param_1,byte **param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *local_28;
  byte *local_20;
  longlong local_18;
  
  local_28 = (int *)0x0;
  if (param_3 < 1) {
    FUN_1407c2680(0xc,0,0xae,s_D__a_1_s_target_release_build_bo_140bf5750,0x93);
  }
  else if (param_3 < -0x80000000) {
    if ((param_1 == (int **)0x0) || (*param_1 == (int *)0x0)) {
      local_28 = (int *)FUN_1407d7270();
      if (local_28 == (int *)0x0) {
        return (int *)0x0;
      }
    }
    else {
      local_28 = *param_1;
    }
    bVar1 = **param_2;
    uVar2 = (uint)bVar1;
    local_20 = *param_2 + 1;
    iVar3 = param_3 + -1;
    if (uVar2 < 8) {
      if ((uVar2 == 0) ||
         ((0 < iVar3 && ((local_20[param_3 + -2] & (char)(1 << (bVar1 & 0x1f)) - 1U) == 0)))) {
        local_28[4] = local_28[4] & 0xfffffff0;
        local_28[4] = local_28[4] | uVar2 | 8;
        if (iVar3 < 1) {
          local_18 = 0;
        }
        else {
          local_18 = FUN_1407cda90(local_20,(longlong)iVar3);
          if (local_18 == 0) goto LAB_1407dc774;
          local_20 = local_20 + iVar3;
        }
        *local_28 = iVar3;
        FUN_1407cd0f0(*(undefined8 *)(local_28 + 2));
        *(longlong *)(local_28 + 2) = local_18;
        local_28[1] = 3;
        if (param_1 != (int **)0x0) {
          *param_1 = local_28;
        }
        *param_2 = local_20;
        return local_28;
      }
      FUN_1407c2680(0xc,0,0xc2,s_D__a_1_s_target_release_build_bo_140bf58a0,0xaf);
    }
    else {
      FUN_1407c2680(0xc,0,0x8d,s_D__a_1_s_target_release_build_bo_140bf5830,0xa8);
    }
  }
  else {
    FUN_1407c2680(0xc,0,0xad,s_D__a_1_s_target_release_build_bo_140bf57c0,0x98);
  }
LAB_1407dc774:
  if ((local_28 != (int *)0x0) && ((param_1 == (int **)0x0 || (*param_1 != local_28)))) {
    FUN_1407d7290(local_28);
  }
  return (int *)0x0;
}


/* address=1407dc7b0 name=FUN_1407dc7b0 */

int FUN_1407dc7b0(longlong param_1,byte **param_2)

{
  byte local_28 [4];
  int local_24;
  int local_20;
  byte *local_18;
  
  if (param_1 == 0) {
    local_20 = 0;
  }
  else {
    local_24 = FUN_1407dcd60(param_1,local_28);
    if (local_24 < 0x7fffffff) {
      local_20 = local_24 + 1;
      if (param_2 != (byte **)0x0) {
        local_18 = *param_2;
        *local_18 = local_28[0];
        local_18 = local_18 + 1;
        FUN_1407dccd0(local_18,*(undefined8 *)(param_1 + 8),(longlong)local_24);
        if (0 < local_24) {
          local_18[local_24 + -1] = local_18[local_24 + -1] & (byte)(0xff << (local_28[0] & 0x1f));
        }
        *param_2 = local_18 + local_24;
      }
    }
    else {
      FUN_1407c2680(0xc,0,0x45,s_D__a_1_s_target_release_build_bo_140bf56e0,0x78);
      local_20 = 0;
    }
  }
  return local_20;
}


/* address=1407dc8e0 name=FUN_1407dc8e0 */

bool FUN_1407dc8e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  char local_18 [24];
  
  iVar1 = FUN_1407dcd60(param_1,local_18);
  if (local_18[0] == '\0') {
    *param_2 = (longlong)iVar1;
  }
  return local_18[0] == '\0';
}


/* address=1407dc970 name=FUN_1407dc970 */

undefined8 FUN_1407dc970(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte local_24;
  longlong local_18;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  local_24 = (byte)(1 << (7 - ((byte)param_2 & 7) & 0x1f));
  bVar1 = ~local_24;
  if (param_3 == 0) {
    local_24 = 0;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  param_1[4] = param_1[4] & 0xfffffff0;
  if ((*param_1 < iVar2 + 1) || (*(longlong *)(param_1 + 2) == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    if (*(longlong *)(param_1 + 2) == 0) {
      local_18 = FUN_1407ccfc0((longlong)(iVar2 + 1));
    }
    else {
      local_18 = FUN_1407cd1a0(*(undefined8 *)(param_1 + 2),(longlong)(iVar2 + 1));
    }
    if (local_18 == 0) {
      return 0;
    }
    if (0 < (iVar2 + 1) - *param_1) {
      FUN_1407dcd20(local_18 + *param_1,0,(longlong)((iVar2 + 1) - *param_1));
    }
    *(longlong *)(param_1 + 2) = local_18;
    *param_1 = iVar2 + 1;
  }
  *(byte *)(*(longlong *)(param_1 + 2) + (longlong)iVar2) =
       *(byte *)(*(longlong *)(param_1 + 2) + (longlong)iVar2) & bVar1 | local_24;
  while ((0 < *param_1 &&
         (*(char *)(*(longlong *)(param_1 + 2) + (longlong)(*param_1 + -1)) == '\0'))) {
    *param_1 = *param_1 + -1;
  }
  return 1;
}


/* address=1407dcb40 name=FUN_1407dcb40 */

bool FUN_1407dcb40(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3;
  if (((param_1 == (int *)0x0) || (*param_1 < iVar1 + 1)) || (*(longlong *)(param_1 + 2) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = ((uint)*(byte *)(*(longlong *)(param_1 + 2) + (longlong)iVar1) &
            1 << (7 - ((byte)param_2 & 7) & 0x1f)) != 0;
  }
  return bVar2;
}


/* address=1407dccd0 name=FUN_1407dccd0 */

undefined8 FUN_1407dccd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407dcd20 name=FUN_1407dcd20 */

undefined8 FUN_1407dcd20(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407dcd60 name=FUN_1407dcd60 */

int FUN_1407dcd60(int *param_1,byte *param_2)

{
  byte bVar1;
  byte local_18;
  int local_14;
  byte local_10;
  
  local_14 = *param_1;
  if ((param_1[4] & 8U) == 0) {
    while ((0 < local_14 &&
           (*(char *)(*(longlong *)(param_1 + 2) + (longlong)(local_14 + -1)) == '\0'))) {
      local_14 = local_14 + -1;
    }
    local_18 = 0;
    if (0 < local_14) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 2) + (longlong)(local_14 + -1));
      if (bVar1 == 0) {
        FID_conflict__assert((wchar_t *)s_l_140bf56c8,(wchar_t *)s_D_140bf5600,0x5b);
      }
      for (; (local_18 < 7 && (((uint)bVar1 & 1 << (local_18 & 0x1f)) == 0));
          local_18 = local_18 + 1) {
      }
    }
    *param_2 = local_18;
  }
  else {
    if (local_14 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = (byte)param_1[4] & 7;
    }
    *param_2 = local_10;
  }
  return local_14;
}


/* address=1407dce80 name=FUN_1407dce80 */

void FUN_1407dce80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* address=1407dcec0 name=FUN_1407dcec0 */

void FUN_1407dcec0(undefined8 param_1,undefined8 param_2)

{
  undefined local_18 [24];
  
  FUN_1407de4c0(param_1,local_18,param_2);
  return;
}


/* address=1407dcef0 name=FUN_1407dcef0 */

undefined8 FUN_1407dcef0(undefined8 *param_1)

{
  return *param_1;
}


/* address=1407dcf10 name=FUN_1407dcf10 */

undefined8 FUN_1407dcf10(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=1407dcf30 name=FUN_1407dcf30 */

undefined8 FUN_1407dcf30(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1407cd0f0(*param_2);
  *param_2 = 0;
  *param_3 = 0;
  if (param_1[1] == 0) {
    uVar1 = 1;
  }
  else {
    lVar2 = FUN_1407cda90(*param_1,param_1[1]);
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


/* address=1407dcfd0 name=FUN_1407dcfd0 */

bool FUN_1407dcfd0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 != 0) {
    FUN_1407cd0f0(*param_2);
  }
  lVar1 = FUN_1407cd9d0(*param_1,param_1[1]);
  *param_2 = lVar1;
  return *param_2 != 0;
}


/* address=1407dd050 name=FUN_1407dd050 */

bool FUN_1407dd050(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1407de430(*param_1,0,param_1[1]);
  return lVar1 != 0;
}


/* address=1407dd0a0 name=FUN_1407dd0a0 */

bool FUN_1407dd0a0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_3 == param_1[1]) {
    iVar1 = FUN_1407cd2c0(*param_1,param_2,param_3);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* address=1407dd110 name=FUN_1407dd110 */

bool FUN_1407dd110(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined *local_18 [3];
  
  iVar1 = FUN_1407de4c0(param_1,local_18,1);
  if (iVar1 != 0) {
    *param_2 = *local_18[0];
  }
  return iVar1 != 0;
}


/* address=1407dd160 name=FUN_1407dd160 */

bool FUN_1407dd160(undefined8 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 local_18 [12];
  
  iVar1 = FUN_1407de530(param_1,local_18,2);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=1407dd200 name=FUN_1407dd200 */

bool FUN_1407dd200(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18 [6];
  
  iVar1 = FUN_1407de530(param_1,local_18,3);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=1407dd250 name=FUN_1407dd250 */

bool FUN_1407dd250(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18 [6];
  
  iVar1 = FUN_1407de530(param_1,local_18,4);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=1407dd370 name=FUN_1407dd370 */

bool FUN_1407dd370(longlong *param_1,undefined *param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    *param_2 = *(undefined *)(*param_1 + -1 + param_1[1]);
    param_1[1] = param_1[1] + -1;
  }
  return lVar1 != 0;
}


/* address=1407dd3d0 name=FUN_1407dd3d0 */

bool FUN_1407dd3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_1407de4c0(param_1,local_18,param_3);
  if (iVar1 != 0) {
    FUN_1407dce80(param_2,local_18[0],param_3);
  }
  return iVar1 != 0;
}


/* address=1407dd430 name=FUN_1407dd430 */

bool FUN_1407dd430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_1407de4c0(param_1,local_18,param_3);
  if (iVar1 != 0) {
    FUN_1407de470(param_2,local_18[0],param_3);
  }
  return iVar1 != 0;
}


/* address=1407dd490 name=FUN_1407dd490 */

void FUN_1407dd490(undefined8 param_1,undefined8 param_2)

{
  FUN_1407de5e0(param_1,param_2,1);
  return;
}


/* address=1407dd4c0 name=FUN_1407dd4c0 */

void FUN_1407dd4c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407de5e0(param_1,param_2,2);
  return;
}


/* address=1407dd4f0 name=FUN_1407dd4f0 */

void FUN_1407dd4f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407de5e0(param_1,param_2,3);
  return;
}


/* address=1407dd520 name=FUN_1407dd520 */

undefined8 FUN_1407dd520(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_1407dcf10(param_1);
  uVar2 = FUN_1407dcef0(param_1);
  lVar3 = FUN_1407de430(uVar2,param_3,uVar1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = FUN_1407dcef0(param_1);
    uVar1 = FUN_1407dd3d0(param_1,param_2,lVar3 - lVar4);
  }
  return uVar1;
}


/* address=1407dd5b0 name=FUN_1407dd5b0 */

int FUN_1407dd5b0(undefined8 param_1,ulonglong *param_2)

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
  while (lVar3 = FUN_1407dcf10(param_1), lVar3 != 0) {
    pbVar4 = (byte *)FUN_1407dcef0(param_1);
    bVar1 = *pbVar4;
    iVar2 = FUN_1407cd530(bVar1);
    if (iVar2 == 0) break;
    FUN_1407dcec0(param_1,1);
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


/* address=1407dd6b0 name=wcstoul */

/* Library Function - Single Match
    wcstoul
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2012 Debug */

ulong __cdecl wcstoul(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  ulong uVar1;
  
  uVar1 = FUN_1407deb00(_Str,_EndPtr,_Radix,1);
  return uVar1;
}


/* address=1407dd6f0 name=FUN_1407dd6f0 */

void FUN_1407dd6f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407deb00(param_1,param_2,param_3,0);
  return;
}


/* address=1407dd730 name=FUN_1407dd730 */

undefined4 FUN_1407dd730(undefined *param_1,int param_2)

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
  iVar1 = FUN_1407de700(local_30,&local_34);
  if ((iVar1 == 0) || (param_2 != local_34)) {
    local_38 = 0;
  }
  else {
    local_38 = 1;
  }
  return local_38;
}


/* address=1407dd7a0 name=FUN_1407dd7a0 */

undefined8 FUN_1407dd7a0(void *param_1,size_t param_2,size_t param_3)

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
    iVar1 = FUN_1407dcec0(param_2,local_18[0]);
    if (iVar1 == 0) {
      FID_conflict__assert((wchar_t *)&DAT_140bf5cc8,(wchar_t *)s_D_140bf5c00,0x1ac);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=1407dd820 name=_aligned_recalloc */

/* Library Function - Single Match
    _aligned_recalloc
   
   Library: Visual Studio */

void * __cdecl _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1407de7c0(_Memory,_Count,_Size,_Alignment,0,0,0);
  return pvVar1;
}


/* address=1407dd880 name=FUN_1407dd880 */

void FUN_1407dd880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1407de7c0(param_1,param_2,param_3,param_4,local_10,param_6,1);
  return;
}


/* address=1407dd900 name=FUN_1407dd900 */

undefined8 FUN_1407dd900(wchar_t *param_1,ulonglong *param_2)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_38;
  wchar_t *local_20 [4];
  
  uVar1 = wcstoul(param_1,local_20,2);
  if ((uVar1 != 0) && (iVar2 = FUN_1407de0c0(local_20), iVar2 != 0)) {
    *param_2 = 0;
    lVar3 = FUN_1407dcef0(local_20);
    uVar4 = FUN_1407dcf10(local_20);
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


/* address=1407ddbc0 name=FUN_1407ddbc0 */

undefined8 FUN_1407ddbc0(wchar_t *param_1,wchar_t **param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_18;
  
  local_18 = 0;
  iVar1 = FUN_1407dd730(param_1,param_4);
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


/* address=1407ddc40 name=FUN_1407ddc40 */

undefined8 FUN_1407ddc40(undefined8 param_1,wchar_t **param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_28 [2];
  wchar_t local_20 [16];
  
  iVar1 = FUN_1407ddbc0(param_1,local_20,local_28,param_4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    if (local_28[0] == 0) {
      FUN_1407dce80(param_2,0,0);
    }
    else {
      if (param_2 == (wchar_t **)0x0) {
        FID_conflict__assert((wchar_t *)&DAT_140bf5e68,(wchar_t *)s_D_140bf5da0,0x23c);
      }
      uVar2 = wcstoul(local_20,param_2,4);
      if ((uVar2 == 0) || (lVar3 = FUN_1407dcf10(local_20), lVar3 != 0)) {
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


/* address=1407ddd10 name=FUN_1407ddd10 */

undefined8
FUN_1407ddd10(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_28 [2];
  undefined local_20 [32];
  
  iVar1 = FUN_1407ddbc0(param_1,local_20,local_28,param_3);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (local_28[0] == 0) {
      *param_2 = param_4;
    }
    else {
      iVar1 = FUN_1407dd900(local_20,param_2);
      if ((iVar1 == 0) || (lVar2 = FUN_1407dcf10(local_20), lVar2 != 0)) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=1407ddda0 name=FUN_1407ddda0 */

undefined8
FUN_1407ddda0(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  int local_34;
  wchar_t local_30 [8];
  wchar_t *local_20 [4];
  
  iVar1 = FUN_1407ddbc0(param_1,local_30,&local_34,param_3);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    if (local_34 == 0) {
      *param_2 = param_4;
    }
    else {
      uVar2 = wcstoul(local_30,local_20,1);
      if (((uVar2 == 0) || (lVar3 = FUN_1407dcf10(local_20), lVar3 != 1)) ||
         (lVar3 = FUN_1407dcf10(local_30), lVar3 != 0)) {
        return 0;
      }
      pcVar4 = (char *)FUN_1407dcef0(local_20);
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


/* address=1407dde90 name=FUN_1407dde90 */

undefined8 FUN_1407dde90(undefined *param_1)

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
  iVar1 = FUN_1407dd110(local_30,&local_38);
  if ((iVar1 == 0) || (7 < local_38)) {
    uVar2 = 0;
  }
  else if (local_38 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_1407dd370(local_30,local_37);
    if ((iVar1 == 0) || (((uint)local_37[0] & (1 << (local_38 & 0x1f)) - 1U) != 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=1407ddf30 name=FUN_1407ddf30 */

undefined4 FUN_1407ddf30(undefined8 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_24;
  
  iVar1 = FUN_1407dde90(param_1);
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    uVar2 = (param_2 >> 3) + 1;
    uVar3 = FUN_1407dcf10(param_1);
    if ((uVar2 < uVar3) &&
       (lVar4 = FUN_1407dcef0(param_1),
       ((uint)*(byte *)(lVar4 + (ulonglong)uVar2) & 1 << (7 - ((byte)param_2 & 7) & 0x1f)) != 0)) {
      local_24 = 1;
    }
    else {
      local_24 = 0;
    }
  }
  return local_24;
}


/* address=1407ddfe0 name=FUN_1407ddfe0 */

undefined8 FUN_1407ddfe0(undefined *param_1,uint *param_2)

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
  iVar1 = FUN_1407dd110(local_30,&local_38);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_2 != (uint *)0x0) {
      local_34 = (uint)((local_38 & 0x80) != 0);
      *param_2 = local_34;
    }
    iVar1 = FUN_1407dd110(local_30,local_37);
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


/* address=1407de0c0 name=FUN_1407de0c0 */

undefined4 FUN_1407de0c0(undefined8 param_1)

{
  int iVar1;
  undefined4 local_18;
  int local_14 [5];
  
  iVar1 = FUN_1407ddfe0(param_1,local_14);
  if ((iVar1 == 0) || (local_14[0] != 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=1407de110 name=FUN_1407de110 */

bool FUN_1407de110(undefined *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  bool bVar4;
  byte local_38;
  byte local_37 [7];
  undefined local_30 [32];
  
  lVar2 = FUN_1407dcf10(param_1);
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
    while (iVar1 = FUN_1407dd110(local_30,local_37), iVar1 != 0) {
      if (((local_38 & 0x80) == 0) && (local_37[0] == 0x80)) {
        return false;
      }
      local_38 = local_37[0];
    }
    bVar4 = (local_38 & 0x80) == 0;
  }
  return bVar4;
}


/* address=1407de1c0 name=FUN_1407de1c0 */

undefined8 FUN_1407de1c0(undefined *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong local_78;
  undefined8 local_70;
  undefined local_68 [8];
  undefined local_60 [16];
  undefined local_50 [64];
  
  iVar1 = FUN_1407df140(local_50,0x20);
  if (iVar1 != 0) {
    puVar3 = local_60;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar1 = FUN_1407de660(local_60,&local_78);
    if (iVar1 != 0) {
      if (local_78 < 0x50) {
        iVar1 = FUN_1407debb0(local_50,local_78 / 0x28);
        if ((iVar1 == 0) || (iVar1 = FUN_1407dfb40(local_50,0x2e), iVar1 == 0)) goto LAB_1407de328;
        iVar1 = FUN_1407debb0(local_50,local_78 % 0x28);
      }
      else {
        iVar1 = FUN_1407df950(local_50,&DAT_140bf5e78,2);
        if (iVar1 == 0) goto LAB_1407de328;
        iVar1 = FUN_1407debb0(local_50,local_78 - 0x50);
      }
      if (iVar1 != 0) {
        while (lVar2 = FUN_1407dcf10(local_60), lVar2 != 0) {
          iVar1 = FUN_1407de660(local_60,&local_78);
          if (((iVar1 == 0) || (iVar1 = FUN_1407dfb40(local_50,0x2e), iVar1 == 0)) ||
             (iVar1 = FUN_1407debb0(local_50), iVar1 == 0)) goto LAB_1407de328;
        }
        iVar1 = FUN_1407dfb40(local_50,0);
        if ((iVar1 != 0) && (iVar1 = FUN_1407df270(local_50,&local_70,local_68), iVar1 != 0)) {
          return local_70;
        }
      }
    }
  }
LAB_1407de328:
  FUN_1407df200(local_50);
  return 0;
}


/* address=1407de350 name=FUN_1407de350 */

void FUN_1407de350(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407dee00(param_1,1,param_3,param_2);
  return;
}


/* address=1407de390 name=FUN_1407de390 */

void FUN_1407de390(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407dee00(param_1,0,param_3,param_2);
  return;
}


/* address=1407de3d0 name=FUN_1407de3d0 */

ushort FUN_1407de3d0(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}


/* address=1407de3f0 name=FUN_1407de3f0 */

uint FUN_1407de3f0(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=1407de410 name=FUN_1407de410 */

ulonglong FUN_1407de410(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=1407de430 name=FUN_1407de430 */

undefined8 FUN_1407de430(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1408d72a0(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=1407de470 name=FUN_1407de470 */

undefined8 FUN_1407de470(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407de4c0 name=FUN_1407de4c0 */

bool FUN_1407de4c0(longlong *param_1,longlong *param_2,ulonglong param_3)

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


/* address=1407de530 name=FUN_1407de530 */

undefined8 FUN_1407de530(undefined8 param_1,ulonglong *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18 [3];
  
  local_28 = 0;
  iVar1 = FUN_1407de4c0(param_1,local_18,param_3);
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


/* address=1407de5e0 name=FUN_1407de5e0 */

undefined8 FUN_1407de5e0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_18 [3];
  
  iVar1 = FUN_1407de530(param_1,local_18,param_3);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (3 < param_3) {
      FID_conflict__assert((wchar_t *)s_l_140bf59d8,(wchar_t *)s_D_140bf5910,0xce);
    }
    uVar2 = FUN_1407dd3d0(param_1,param_2,local_18[0]);
  }
  return uVar2;
}


/* address=1407de660 name=FUN_1407de660 */

undefined8 FUN_1407de660(undefined8 param_1,ulonglong *param_2)

{
  int iVar1;
  byte local_18 [8];
  ulonglong local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = FUN_1407dd110(param_1,local_18);
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


/* address=1407de700 name=FUN_1407de700 */

undefined8 FUN_1407de700(undefined8 param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte local_28 [4];
  uint local_24;
  uint local_20;
  uint local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_1407dd110(param_1,local_28);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_24 = (local_28[0] & 0xe0) << 0x18;
    local_20 = local_28[0] & 0x1f;
    if (local_20 == 0x1f) {
      iVar1 = FUN_1407de660(param_1,&local_18);
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


/* address=1407de7c0 name=FUN_1407de7c0 */

undefined8
FUN_1407de7c0(undefined *param_1,undefined *param_2,uint *param_3,longlong *param_4,
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
      FID_conflict__assert((wchar_t *)s_o_140bf5ac8,(wchar_t *)s_D_140bf5a00,0x14d);
    }
    if (param_6 != (undefined4 *)0x0) {
      FID_conflict__assert((wchar_t *)s_o_140bf5bc8,(wchar_t *)s_D_140bf5b00,0x14e);
    }
  }
  else {
    *param_5 = 0;
    *param_6 = 0;
  }
  iVar1 = FUN_1407de700(local_48,local_58);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_3 != (uint *)0x0) {
      *param_3 = local_58[0];
    }
    iVar1 = FUN_1407dd110(local_48,local_78);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      local_38 = FUN_1407dcf10(param_1);
      local_68 = FUN_1407dcf10(local_48);
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
          uVar2 = FUN_1407dd3d0(param_1,local_res10,local_68);
          return uVar2;
        }
        if ((local_70 == 0) || (4 < local_70)) {
          return 0;
        }
        iVar1 = FUN_1407de530(local_48,&local_50,local_70);
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
      uVar2 = FUN_1407dd3d0(param_1,local_res10,local_60);
    }
  }
  return uVar2;
}


/* address=1407deb00 name=FUN_1407deb00 */

undefined8 FUN_1407deb00(void *param_1,undefined *param_2,int param_3,int param_4)

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
  else if ((param_4 == 0) || (iVar1 = FUN_1407dcec0(local_res10,local_20), iVar1 != 0)) {
    uVar3 = 1;
  }
  else {
    FID_conflict__assert((wchar_t *)&DAT_140bf5d98,(wchar_t *)s_D_140bf5cd0,0x1d3);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=1407debb0 name=FUN_1407debb0 */

void FUN_1407debb0(undefined8 param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined auStack_48 [32];
  char local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_140c05940 ^ (ulonglong)auStack_48;
  _snprintf(local_28,0x18,&DAT_140bf5e70,param_2);
  sVar1 = strlen(local_28);
  FUN_1407df950(param_1,local_28,sVar1);
  FUN_140805d70(local_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=1407dec20 name=FUN_1407dec20 */

undefined8 FUN_1407dec20(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte local_18;
  byte local_17 [23];
  
  iVar1 = FUN_1407dd110(param_1,&local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_1407cd530(local_18);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_1407dd110(param_1,local_17);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_1407cd530(local_17[0]);
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


/* address=1407decb0 name=FUN_1407decb0 */

bool FUN_1407decb0(int param_1,undefined4 param_2,int param_3)

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


/* address=1407dee00 name=FUN_1407dee00 */

undefined8 FUN_1407dee00(undefined *param_1,int param_2,int param_3,int *param_4)

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
    iVar1 = FUN_1407dec20(local_48,&local_60);
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
    iVar1 = FUN_1407dec20(local_48,&local_60);
    if (iVar1 == 0) {
      return 0;
    }
    local_68 = local_60 * 100;
    iVar1 = FUN_1407dec20(local_48,&local_60);
    if (iVar1 == 0) {
      return 0;
    }
    local_68 = local_68 + local_60;
  }
  iVar1 = FUN_1407dec20(local_48,&local_58);
  if (((((((iVar1 == 0) || (local_58 < 1)) || (0xc < local_58)) ||
        ((iVar1 = FUN_1407dec20(local_48,&local_30), iVar1 == 0 ||
         (iVar1 = FUN_1407decb0(local_68,local_58,local_30), iVar1 == 0)))) ||
       ((iVar1 = FUN_1407dec20(local_48,&local_2c), iVar1 == 0 ||
        ((0x17 < local_2c || (iVar1 = FUN_1407dec20(local_48,&local_28), iVar1 == 0)))))) ||
      (0x3b < local_28)) ||
     (((iVar1 = FUN_1407dec20(local_48,local_24), iVar1 == 0 || (0x3b < local_24[0])) ||
      (iVar1 = FUN_1407dd110(local_48,local_64), iVar1 == 0)))) {
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
    iVar1 = FUN_1407dec20(local_48,&local_38);
    if (((iVar1 == 0) || (0x17 < local_38)) ||
       ((iVar1 = FUN_1407dec20(local_48,&local_34), iVar1 == 0 || (0x3b < local_34)))) {
      return 0;
    }
    local_50 = local_5c * (local_38 * 0xe10 + local_34 * 0x3c);
  }
  lVar3 = FUN_1407dcf10(local_48);
  if (lVar3 == 0) {
    if (param_4 != (int *)0x0) {
      param_4[5] = local_68 + -0x76c;
      param_4[4] = local_58 + -1;
      param_4[3] = local_30;
      param_4[2] = local_2c;
      param_4[1] = local_28;
      *param_4 = local_24[0];
      if ((local_50 != 0) && (iVar1 = FUN_1408021e0(param_4,0,local_50), iVar1 == 0)) {
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


/* address=1407df110 name=FUN_1407df110 */

void FUN_1407df110(undefined8 param_1)

{
  FUN_1407e0620(param_1,0,0x30);
  return;
}


/* address=1407df140 name=FUN_1407df140 */

undefined8 FUN_1407df140(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1407df110(param_1);
  lVar1 = FUN_1407ccfc0(param_2);
  if ((param_2 == 0) || (lVar1 != 0)) {
    FUN_1407e0660(param_1,lVar1,param_2,1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1407df1b0 name=FUN_1407df1b0 */

undefined8 FUN_1407df1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1407df110(param_1);
  FUN_1407e0660(param_1,param_2,param_3,0);
  return 1;
}


/* address=1407df200 name=FUN_1407df200 */

void FUN_1407df200(longlong param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    FID_conflict__assert((wchar_t *)s___140bf5f48,(wchar_t *)s_D_140bf5e80,0x3e);
  }
  if ((*(char *)(param_1 + 8) == '\0') && ((*(uint *)(param_1 + 0x28) & 1) != 0)) {
    FUN_1407cd0f0(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}


/* address=1407df270 name=FUN_1407df270 */

undefined8 FUN_1407df270(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = FUN_1407df350(param_1);
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
      FUN_1407df200(param_1);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    FUN_1407c2680(0xe,0,0x42,s_D__a_1_s_target_release_build_bo_140bf6050,0x7f);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1407df350 name=FUN_1407df350 */

undefined8 FUN_1407df350(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte local_48;
  undefined local_47;
  ulonglong local_38;
  ulonglong local_20;
  
  plVar3 = (longlong *)FUN_1407e08d0(param_1);
  if ((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 3) >> 1 & 1) != 0)) {
    return 0;
  }
  if (*param_1 == 0) {
    return 1;
  }
  if (*(char *)(*param_1 + 8) == '\0') {
    FID_conflict__assert((wchar_t *)s_c_140bf6188,(wchar_t *)s_D_140bf60c0,0xaf);
  }
  lVar1 = *param_1;
  if (*(longlong **)(lVar1 + 0x10) != plVar3) {
    FID_conflict__assert((wchar_t *)s_c_140bf6288,(wchar_t *)s_D_140bf61c0,0xb1);
  }
  uVar4 = (ulonglong)*(byte *)(lVar1 + 0x20) + *(longlong *)(lVar1 + 0x18);
  iVar2 = FUN_1407df350(*param_1);
  if (((iVar2 != 0) && (*(ulonglong *)(lVar1 + 0x18) <= uVar4)) && (uVar4 <= (ulonglong)plVar3[1]))
  {
    local_38 = plVar3[1] - uVar4;
    if ((*(uint *)(lVar1 + 0x24) & 1) != 0) {
      if (*(char *)(lVar1 + 0x20) != '\x01') {
        FID_conflict__assert((wchar_t *)s_c_140bf6378,(wchar_t *)s_D_140bf62b0,0xc3);
      }
      if (0xfffffffe < local_38) {
        FUN_1407c2680(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_140bf63b0,0xc6);
        goto LAB_1407df69f;
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
        iVar2 = FUN_1407e0870(plVar3,0,(longlong)(int)(local_48 - 1));
        if (iVar2 == 0) goto LAB_1407df69f;
        FUN_1407e05d0(*plVar3 + uVar4 + (longlong)(int)(local_48 - 1),*plVar3 + uVar4,local_38);
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
    FUN_1407c2680(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_140bf6420,0xed);
  }
LAB_1407df69f:
  *(uint *)(plVar3 + 3) = *(uint *)(plVar3 + 3) | 2;
  return 0;
}


/* address=1407df6c0 name=FUN_1407df6c0 */

longlong FUN_1407df6c0(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    FID_conflict__assert((wchar_t *)s_c_140bf6558,(wchar_t *)s_D_140bf6490,0xfc);
  }
  if (*(char *)(param_1 + 1) == '\0') {
    lVar1 = param_1[2];
  }
  else {
    lVar1 = *(longlong *)param_1[2] + param_1[3] + (ulonglong)*(byte *)(param_1 + 4);
  }
  return lVar1;
}


/* address=1407df740 name=FUN_1407df740 */

longlong FUN_1407df740(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    FID_conflict__assert((wchar_t *)s_c_140bf6648,(wchar_t *)s_D_140bf6580,0x105);
  }
  if (*(char *)(param_1 + 1) == '\0') {
    lVar1 = param_1[3];
  }
  else {
    if (*(ulonglong *)(param_1[2] + 8) < (ulonglong)*(byte *)(param_1 + 4) + param_1[3]) {
      FID_conflict__assert((wchar_t *)s_c_140bf6740,(wchar_t *)s_D_140bf6670,0x108);
    }
    lVar1 = (*(longlong *)(param_1[2] + 8) - param_1[3]) - (ulonglong)*(byte *)(param_1 + 4);
  }
  return lVar1;
}


/* address=1407df800 name=FUN_1407df800 */

void FUN_1407df800(undefined8 param_1,undefined8 param_2)

{
  FUN_1407e0a40(param_1,param_2,1);
  return;
}


/* address=1407df830 name=FUN_1407df830 */

void FUN_1407df830(undefined8 param_1,undefined8 param_2)

{
  FUN_1407e0a40(param_1,param_2,2);
  return;
}


/* address=1407df860 name=FUN_1407df860 */

void FUN_1407df860(undefined8 param_1,undefined8 param_2)

{
  FUN_1407e0a40(param_1,param_2,3);
  return;
}


/* address=1407df890 name=FUN_1407df890 */

undefined8 FUN_1407df890(undefined8 param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1407df350(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = (byte)(param_3 >> 0x18) & 0xe0;
    if ((param_3 & 0x1fffffff) < 0x1f) {
      iVar2 = FUN_1407dfb40(param_1,(uint)bVar1 | param_3 & 0xff);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_1407dfb40(param_1,bVar1 | 0x1f);
      if ((iVar2 == 0) || (iVar2 = FUN_1407e0a90(param_1,param_3 & 0x1fffffff), iVar2 == 0)) {
        return 0;
      }
    }
    uVar3 = FUN_1407e0900(param_1,param_2,1,1);
  }
  return uVar3;
}


/* address=1407df950 name=FUN_1407df950 */

bool FUN_1407df950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_1407dfa00(param_1,local_18,param_3);
  if (iVar1 != 0) {
    FUN_1407e0580(local_18[0],param_2,param_3);
  }
  return iVar1 != 0;
}


/* address=1407df9b0 name=FUN_1407df9b0 */

bool FUN_1407df9b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_1407dfa00(param_1,local_18,param_2);
  if (iVar1 != 0) {
    FUN_1407e0620(local_18[0],0,param_2);
  }
  return iVar1 != 0;
}


/* address=1407dfa00 name=FUN_1407dfa00 */

undefined8 FUN_1407dfa00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1407df350(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_1407e08d0(param_1);
    iVar1 = FUN_1407e0870(uVar2,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=1407dfa60 name=FUN_1407dfa60 */

undefined8 FUN_1407dfa60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1407df350(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_1407e08d0(param_1);
    iVar1 = FUN_1407e06f0(uVar2,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=1407dfac0 name=FUN_1407dfac0 */

undefined8 FUN_1407dfac0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1407e08d0(param_1);
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


/* address=1407dfb40 name=FUN_1407dfb40 */

void FUN_1407dfb40(undefined8 param_1,undefined param_2)

{
  FUN_1407e0b60(param_1,param_2,1);
  return;
}


/* address=1407dfb70 name=FUN_1407dfb70 */

void FUN_1407dfb70(undefined8 param_1,undefined2 param_2)

{
  FUN_1407e0b60(param_1,param_2,2);
  return;
}


/* address=1407dfbd0 name=FUN_1407dfbd0 */

void FUN_1407dfbd0(undefined8 param_1,undefined4 param_2)

{
  FUN_1407e0b60(param_1,param_2,3);
  return;
}


/* address=1407dfc00 name=FUN_1407dfc00 */

void FUN_1407dfc00(undefined8 param_1,undefined4 param_2)

{
  FUN_1407e0b60(param_1,param_2,4);
  return;
}


/* address=1407dfc60 name=FUN_1407dfc60 */

void FUN_1407dfc60(undefined8 param_1,undefined8 param_2)

{
  FUN_1407e0b60(param_1,param_2,8);
  return;
}


/* address=1407dfcc0 name=FUN_1407dfcc0 */

void FUN_1407dfcc0(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = FUN_1407e08d0(param_1);
    if (*(char *)(*param_1 + 8) == '\0') {
      FID_conflict__assert((wchar_t *)s_c_140bf6a98,(wchar_t *)s_D_140bf69d0,0x1d4);
    }
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*param_1 + 0x18);
    *(undefined8 *)(*param_1 + 0x10) = 0;
    *param_1 = 0;
  }
  return;
}


/* address=1407dfd50 name=FUN_1407dfd50 */

void FUN_1407dfd50(undefined8 param_1,undefined8 param_2)

{
  FUN_1407dfd80(param_1,param_2,2);
  return;
}


/* address=1407dfd80 name=FUN_1407dfd80 */

undefined8 FUN_1407dfd80(undefined8 param_1,ulonglong param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_40;
  undefined local_38 [56];
  
  iVar3 = FUN_1407df890(param_1,local_38,param_3);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    bVar2 = false;
    for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
      uVar4 = param_2 >> (('\a' - (char)local_40) * '\b' & 0x3fU);
      cVar1 = (char)uVar4;
      if (bVar2) {
LAB_1407dfe3c:
        iVar3 = FUN_1407dfb40(local_38,cVar1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else if (cVar1 != '\0') {
        if (((uVar4 & 0x80) != 0) && (iVar3 = FUN_1407dfb40(local_38,0), iVar3 == 0)) {
          return 0;
        }
        bVar2 = true;
        goto LAB_1407dfe3c;
      }
    }
    if ((bVar2) || (iVar3 = FUN_1407dfb40(local_38,0), iVar3 != 0)) {
      uVar5 = FUN_1407df350(param_1);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}


/* address=1407dfec0 name=FUN_1407dfec0 */

void FUN_1407dfec0(undefined8 param_1,longlong param_2,undefined4 param_3)

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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_78;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 < 0) {
    FUN_1408d7440(local_20,&local_res10,8);
    local_58 = 7;
    while (((0 < local_58 && (local_20[local_58] == 0xff)) &&
           ((local_20[local_58 + -1] & 0x80) != 0))) {
      local_58 = local_58 + -1;
    }
    iVar1 = FUN_1407df890(param_1,local_50,local_res18);
    if (iVar1 != 0) {
      for (local_54 = local_58; -1 < local_54; local_54 = local_54 + -1) {
        iVar1 = FUN_1407dfb40(local_50,local_20[local_54]);
        if (iVar1 == 0) goto LAB_1407dffd1;
      }
      FUN_1407df350(param_1);
    }
  }
  else {
    FUN_1407dfd80(param_1,param_2,param_3);
  }
LAB_1407dffd1:
  FUN_140805d70(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=1407dfff0 name=FUN_1407dfff0 */

undefined8 FUN_1407dfff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_1407df890(param_1,local_38,4);
  if (((iVar1 != 0) && (iVar1 = FUN_1407df950(local_38,param_2,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_1407df350(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=1407e0060 name=FUN_1407e0060 */

undefined8 FUN_1407e0060(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined local_48;
  undefined local_40 [64];
  
  iVar1 = FUN_1407df890(param_1,local_40,1);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = 0xff;
    }
    iVar1 = FUN_1407dfb40(local_40,local_48);
    if ((iVar1 != 0) && (iVar1 = FUN_1407df350(param_1), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}


/* address=1407e00e0 name=FUN_1407e00e0 */

undefined8 FUN_1407e00e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong local_28;
  ulonglong local_20;
  undefined local_18 [24];
  
  iVar1 = FUN_1407df350(param_1);
  if (iVar1 != 0) {
    FUN_1407dce80(local_18,param_2,param_3);
    iVar1 = FUN_1407e0c30(local_18,&local_28);
    if ((((iVar1 != 0) && (iVar1 = FUN_1407e0c30(local_18,&local_20), iVar1 != 0)) && (local_28 < 3)
        ) && (((1 < local_28 || (local_20 < 0x28)) && (local_20 < 0xffffffffffffffb0)))) {
      iVar1 = FUN_1407e0a90(param_1,local_28 * 0x28 + local_20);
      while (iVar1 != 0) {
        lVar2 = FUN_1407dcf10(local_18);
        if (lVar2 == 0) {
          return 1;
        }
        iVar1 = FUN_1407e0c30(local_18,&local_28);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_1407e0a90(param_1,local_28);
      }
    }
  }
  return 0;
}


/* address=1407e01e0 name=FUN_1407e01e0 */

undefined4 FUN_1407e01e0(undefined8 param_1)

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
  
  iVar1 = FUN_1407df350(param_1);
  if (iVar1 == 0) {
    local_60 = 0;
  }
  else {
    local_78 = 0;
    local_28 = FUN_1407df740(param_1);
    FUN_1407df6c0(param_1);
    FUN_1407dce80(local_38);
    while (lVar2 = FUN_1407dcf10(local_38), lVar2 != 0) {
      pvVar3 = _aligned_recalloc(local_38,0,0,0);
      if ((int)pvVar3 == 0) {
        FUN_1407c2680(0xe,0,0x42,s_D__a_1_s_target_release_build_bo_140bf6ad0,0x283);
        return 0;
      }
      local_78 = local_78 + 1;
    }
    if (local_78 < 2) {
      local_60 = 1;
    }
    else if (local_78 < 0x1000000000000000) {
      local_60 = 0;
      lVar2 = FUN_1407df740(param_1);
      uVar4 = FUN_1407df6c0(param_1);
      lVar5 = FUN_1407cda90(uVar4,lVar2);
      lVar6 = FUN_1407ccfc0(local_78 * 0x10);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        FUN_1407dce80(local_38,lVar5);
        for (local_58 = 0; local_58 < local_78; local_58 = local_58 + 1) {
          pvVar3 = _aligned_recalloc(local_38,lVar6 + local_58 * 0x10,0,0);
          if ((int)pvVar3 == 0) goto LAB_1407e04b3;
        }
        FUN_1408c2130(lVar6,local_78,0x10,&LAB_1407e0cb0);
        local_20 = FUN_1407df6c0(param_1);
        local_50 = 0;
        for (local_68 = 0; local_68 < local_78; local_68 = local_68 + 1) {
          local_18 = FUN_1407dcf10(lVar6 + local_68 * 0x10);
          uVar4 = FUN_1407dcef0(lVar6 + local_68 * 0x10);
          FUN_1407e0580(local_20 + local_50,uVar4,local_18);
          lVar7 = FUN_1407dcf10(lVar6 + local_68 * 0x10);
          local_50 = local_50 + lVar7;
        }
        if (local_50 != lVar2) {
          FID_conflict__assert((wchar_t *)s_o_140bf6c08,(wchar_t *)s_D_140bf6b40,0x2a8);
        }
        local_60 = 1;
      }
LAB_1407e04b3:
      FUN_1407cd0f0(lVar5);
      FUN_1407cd0f0(lVar6);
    }
    else {
      local_60 = 0;
    }
  }
  return local_60;
}


/* address=1407e04e0 name=FUN_1407e04e0 */

ushort FUN_1407e04e0(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}


/* address=1407e0500 name=FUN_1407e0500 */

uint FUN_1407e0500(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=1407e0520 name=FUN_1407e0520 */

ulonglong FUN_1407e0520(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=1407e0540 name=FUN_1407e0540 */

int FUN_1407e0540(void *param_1,void *param_2,size_t param_3)

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


/* address=1407e0580 name=FUN_1407e0580 */

undefined8 FUN_1407e0580(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e05d0 name=FUN_1407e05d0 */

undefined8 FUN_1407e05d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e0620 name=FUN_1407e0620 */

undefined8 FUN_1407e0620(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e0660 name=FUN_1407e0660 */

void FUN_1407e0660(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

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


/* address=1407e06f0 name=FUN_1407e06f0 */

undefined8 FUN_1407e06f0(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong local_28;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = param_1[1] + param_3;
  if (uVar1 < (ulonglong)param_1[1]) {
    FUN_1407c2680(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_140bf5f70,0x51);
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) {
LAB_1407e0819:
      if (param_2 != (longlong *)0x0) {
        *param_2 = *param_1 + param_1[1];
      }
      return 1;
    }
    if ((*(uint *)(param_1 + 3) & 1) == 0) {
      FUN_1407c2680(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_140bf5fe0,0x57);
    }
    else {
      local_28 = param_1[2] << 1;
      if ((local_28 < (ulonglong)param_1[2]) || (local_28 < uVar1)) {
        local_28 = uVar1;
      }
      lVar2 = FUN_1407cd1a0(*param_1,local_28);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        param_1[2] = local_28;
        goto LAB_1407e0819;
      }
    }
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 2;
  return 0;
}


/* address=1407e0870 name=FUN_1407e0870 */

bool FUN_1407e0870(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_1407e06f0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_3;
  }
  return iVar1 != 0;
}


/* address=1407e08d0 name=FUN_1407e08d0 */

longlong FUN_1407e08d0(longlong param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x10);
  }
  return param_1;
}


/* address=1407e0900 name=FUN_1407e0900 */

bool FUN_1407e0900(longlong *param_1,longlong param_2,char param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*param_1 != 0) {
    FID_conflict__assert((wchar_t *)s_c_140bf68a8,(wchar_t *)s_D_140bf67e0,0x111);
  }
  if ((param_4 != 0) && (param_3 != '\x01')) {
    FID_conflict__assert((wchar_t *)s___140bf6998,(wchar_t *)s_D_140bf68d0,0x112);
  }
  lVar2 = FUN_1407e08d0(param_1);
  local_18 = *(undefined8 *)(lVar2 + 8);
  iVar1 = FUN_1407e0870(lVar2,&local_20,param_3);
  if (iVar1 != 0) {
    FUN_1407e0620(local_20,0,param_3);
    FUN_1407df110(param_2);
    *(undefined *)(param_2 + 8) = 1;
    *(longlong *)(param_2 + 0x10) = lVar2;
    *(undefined8 *)(param_2 + 0x18) = local_18;
    *(char *)(param_2 + 0x20) = param_3;
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe | param_4 & 1;
    *param_1 = param_2;
  }
  return iVar1 != 0;
}


/* address=1407e0a40 name=FUN_1407e0a40 */

undefined8 FUN_1407e0a40(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1407df350(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1407e0900(param_1,param_2,param_3,0);
  }
  return uVar2;
}


/* address=1407e0a90 name=FUN_1407e0a90 */

undefined8 FUN_1407e0a90(undefined8 param_1,ulonglong param_2)

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
    iVar1 = FUN_1407dfb40(param_1,local_28);
  } while (iVar1 != 0);
  return 0;
}


/* address=1407e0b60 name=FUN_1407e0b60 */

undefined8 FUN_1407e0b60(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_res10;
  ulonglong local_28;
  longlong local_18 [3];
  
  iVar1 = FUN_1407dfa00(param_1,local_18,param_3);
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
      lVar2 = FUN_1407e08d0(param_1);
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 2;
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=1407e0c30 name=FUN_1407e0c30 */

undefined4 FUN_1407e0c30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char local_18 [4];
  undefined4 local_14;
  
  iVar1 = FUN_1407dd5b0(param_1,param_2);
  if (iVar1 == 0) {
    local_14 = 0;
  }
  else {
    iVar1 = FUN_1407dd110(param_1,local_18);
    if ((iVar1 == 0) || ((local_18[0] == '.' && (lVar2 = FUN_1407dcf10(param_1), lVar2 != 0)))) {
      local_14 = 1;
    }
    else {
      local_14 = 0;
    }
  }
  return local_14;
}


/* address=1407e0da0 name=FUN_1407e0da0 */

longlong * FUN_1407e0da0(longlong *param_1)

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
    plVar1 = (longlong *)FUN_1407ccb50();
    if (plVar1 == (longlong *)0x0) {
      FUN_1407c2680(8,0,0xc,s_D__a_1_s_target_release_build_bo_140c004a0,0x75);
      param_1 = (longlong *)0x0;
    }
    else {
      *plVar1 = 0;
      plVar1[1] = 0;
      lVar2 = FUN_1407ccfc0((longlong)*(int *)((longlong)param_1 + 0x14));
      if (lVar2 != 0) {
        if (param_1[3] != 0) {
          FUN_1407e17d0(lVar2,param_1[3],(longlong)*(int *)((longlong)param_1 + 0x14));
        }
        plVar1[3] = lVar2;
        *(undefined4 *)((longlong)plVar1 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
        *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_1 + 2);
        if (((param_1[1] == 0) || (local_18 = FUN_1407cd410(param_1[1]), local_18 != 0)) &&
           ((*param_1 == 0 || (local_10 = FUN_1407cd410(*param_1), local_10 != 0)))) {
          *plVar1 = local_10;
          plVar1[1] = local_18;
          *(uint *)(plVar1 + 4) = *(uint *)(param_1 + 4) | 0xd;
          return plVar1;
        }
      }
      FUN_1407cd0f0(local_18);
      FUN_1407cd0f0(0);
      FUN_1407cd0f0(lVar2);
      FUN_1407cd0f0(plVar1);
      param_1 = (longlong *)0x0;
    }
  }
  return param_1;
}


/* address=1407e0f80 name=FUN_1407e0f80 */

ulonglong FUN_1407e0f80(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_2 + 0x14);
  if (uVar1 == 0) {
    uVar2 = FUN_1407e1790(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
                          (longlong)*(int *)(param_1 + 0x14));
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2;
}


/* address=1407e0fe0 name=FUN_1407e0fe0 */

undefined8 FUN_1407e0fe0(longlong param_1)

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


/* address=1407e1010 name=FUN_1407e1010 */

longlong FUN_1407e1010(longlong param_1)

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


/* address=1407e1040 name=FUN_1407e1040 */

undefined4 FUN_1407e1040(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ushort *puVar3;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1407e6100(&DAT_140c1bf68);
    if ((DAT_140c1bf70 != 0) && (lVar2 = FUN_1407e18f0(DAT_140c1bf70,param_1), lVar2 != 0)) {
      FUN_1407e6160(&DAT_140c1bf68);
      return *(undefined4 *)(lVar2 + 0x10);
    }
    FUN_1407e6160(&DAT_140c1bf68);
    puVar3 = (ushort *)FUN_1408bf528(param_1,&DAT_1409aa610,0x371,2,&LAB_1407e19f0);
    if (puVar3 == (ushort *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_14099ffb0 + (ulonglong)*puVar3 * 0x28);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}


/* address=1407e11a0 name=FUN_1407e11a0 */

undefined4 FUN_1407e11a0(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined8 local_38 [7];
  
  FUN_1407e6100(&DAT_140c1bf68);
  if ((DAT_140c1bf80 != 0) &&
     (local_38[0] = param_1, lVar2 = FUN_1407e18f0(DAT_140c1bf80,local_38), lVar2 != 0)) {
    FUN_1407e6160(&DAT_140c1bf68);
    return *(undefined4 *)(lVar2 + 0x10);
  }
  FUN_1407e6160(&DAT_140c1bf68);
  puVar3 = (ushort *)FUN_1408bf528(param_1,&DAT_1409a9710,0x3be,2,&LAB_1407e1aa0);
  if (puVar3 == (ushort *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_14099ffb0 + (ulonglong)*puVar3 * 0x28);
  }
  return uVar1;
}


/* address=1407e1270 name=FUN_1407e1270 */

undefined4 FUN_1407e1270(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined local_38 [8];
  undefined8 local_30;
  
  FUN_1407e6100(&DAT_140c1bf68);
  if ((DAT_140c1bf88 != 0) &&
     (local_30 = param_1, lVar2 = FUN_1407e18f0(DAT_140c1bf88,local_38), lVar2 != 0)) {
    FUN_1407e6160(&DAT_140c1bf68);
    return *(undefined4 *)(lVar2 + 0x10);
  }
  FUN_1407e6160(&DAT_140c1bf68);
  puVar3 = (ushort *)FUN_1408bf528(param_1,&DAT_1409a9e90,0x3be,2,&LAB_1407e1af0);
  if (puVar3 == (ushort *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_14099ffb0 + (ulonglong)*puVar3 * 0x28);
  }
  return uVar1;
}


/* address=1407e1390 name=FUN_1407e1390 */

undefined ** FUN_1407e1390(int param_1)

{
  undefined **ppuVar1;
  undefined local_30 [16];
  int local_20;
  
  if ((param_1 < 0) || (0x3c8 < param_1)) {
    FUN_1407e6100(&DAT_140c1bf68);
    if ((DAT_140c1bf78 != 0) &&
       (local_20 = param_1, ppuVar1 = (undefined **)FUN_1407e18f0(DAT_140c1bf78,local_30),
       ppuVar1 != (undefined **)0x0)) {
      FUN_1407e6160(&DAT_140c1bf68);
      return ppuVar1;
    }
    FUN_1407e6160(&DAT_140c1bf68);
  }
  else if ((param_1 == 0) || (*(int *)(&DAT_14099ffb0 + (longlong)param_1 * 0x28) != 0)) {
    return &PTR_s_UNDEF_14099ffa0 + (longlong)param_1 * 5;
  }
  FUN_1407c2680(8,0,100,s_D__a_1_s_target_release_build_bo_140c00500,0x16e);
  return (undefined **)0x0;
}


/* address=1407e1470 name=FUN_1407e1470 */

undefined8 FUN_1407e1470(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1407e1390(param_1);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}


/* address=1407e14b0 name=FUN_1407e14b0 */

undefined8 FUN_1407e14b0(undefined4 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1407e1390(param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}


/* address=1407e14f0 name=FUN_1407e14f0 */

undefined8 FUN_1407e14f0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined local_40 [64];
  
  lVar2 = FUN_1407e1390(param_2);
  if ((((lVar2 != 0) && (iVar1 = FUN_1407df890(param_1,local_40,6), iVar1 != 0)) &&
      (iVar1 = FUN_1407df950(local_40,*(undefined8 *)(lVar2 + 0x18),(longlong)*(int *)(lVar2 + 0x14)
                            ), iVar1 != 0)) && (iVar1 = FUN_1407df350(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=1407e1580 name=FUN_1407e1580 */

void FUN_1407e1580(undefined8 param_1,int param_2)

{
  int local_18;
  
  if (param_2 == 0) {
    local_18 = FUN_1407e11a0(param_1);
    if (local_18 == 0) {
      local_18 = FUN_1407e1270(param_1);
    }
    if (local_18 != 0) {
      FUN_1407e1390(local_18);
      return;
    }
  }
  FUN_1407e1b40(0,param_1,0,0);
  return;
}


/* address=1407e15f0 name=FUN_1407e15f0 */

ulonglong FUN_1407e15f0(undefined *param_1,int param_2,longlong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_30;
  undefined local_20 [32];
  
  if ((param_3 == 0) || (*(int *)(param_3 + 0x14) == 0)) {
    uVar3 = FUN_1407e1c50(param_1,&DAT_140c1bf98,param_2);
  }
  else {
    if ((param_4 == 0) && (iVar1 = FUN_1407e1040(param_3), iVar1 != 0)) {
      local_30 = FUN_1407e14b0(iVar1);
      if (local_30 == 0) {
        local_30 = FUN_1407e1470(iVar1);
      }
      if (local_30 != 0) {
        uVar3 = FUN_1407e1c50(param_1,local_30,param_2);
        return uVar3;
      }
    }
    FUN_1407dce80(local_20,*(undefined8 *)(param_3 + 0x18),(longlong)*(int *)(param_3 + 0x14));
    lVar4 = FUN_1407de1c0(local_20);
    if (lVar4 == 0) {
      if (0 < param_2) {
        *param_1 = 0;
      }
      uVar3 = 0xffffffff;
    }
    else {
      uVar2 = FUN_1407e1c50(param_1,lVar4,param_2);
      FUN_1407cd0f0(lVar4);
      uVar3 = (ulonglong)uVar2;
    }
  }
  return uVar3;
}


/* address=1407e1790 name=FUN_1407e1790 */

int FUN_1407e1790(void *param_1,void *param_2,size_t param_3)

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


/* address=1407e17d0 name=FUN_1407e17d0 */

undefined8 FUN_1407e17d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e1820 name=FUN_1407e1820 */

undefined8 FUN_1407e1820(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e18c0 name=FUN_1407e18c0 */

void FUN_1407e18c0(undefined8 param_1,undefined8 param_2)

{
  FUN_14083a4b0(param_1,param_2);
  return;
}


/* address=1407e18f0 name=FUN_1407e18f0 */

void FUN_1407e18f0(undefined8 param_1,undefined8 param_2)

{
  FUN_14083a660(param_1,param_2,&LAB_1407e1890,&LAB_1407e1860);
  return;
}


/* address=1407e1930 name=FUN_1407e1930 */

undefined4 FUN_1407e1930(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_14083a750(param_1,local_10,param_3,&LAB_1407e1890,&LAB_1407e1860);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=1407e1b40 name=FUN_1407e1b40 */

undefined8 FUN_1407e1b40(code *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

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
  iVar1 = FUN_1407df140(local_38,0x20);
  if (iVar1 != 0) {
    sVar2 = strlen(param_2);
    iVar1 = FUN_1407e00e0(local_38,param_2,sVar2);
    if ((iVar1 != 0) && (iVar1 = FUN_1407df270(local_38,&local_50,&local_48), iVar1 != 0)) {
      if (param_1 == (code *)0x0) {
        local_58 = 0;
      }
      else {
        local_58 = (*param_1)();
      }
      local_40 = FUN_1407cc540(local_58,local_50,local_48,param_3,param_4);
      FUN_1407cd0f0(local_50);
      return local_40;
    }
  }
  FUN_1407c2680(8,0,0x65,s_D__a_1_s_target_release_build_bo_140c00560,CONCAT44(uVar3,0x18e));
  FUN_1407df200(local_38);
  return 0;
}


/* address=1407e1c50 name=FUN_1407e1c50 */

ulonglong FUN_1407e1c50(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  longlong local_18;
  
  if (param_3 < 0) {
    local_18 = 0;
  }
  else {
    local_18 = (longlong)param_3;
  }
  uVar1 = FUN_1407cdaf0(param_1,param_2,local_18);
  if (uVar1 < 0x80000000) {
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    FUN_1407c2680(8,0,0x45,s_D__a_1_s_target_release_build_bo_140c005c0,0x1ab);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* address=1407e1e80 name=FUN_1407e1e80 */

uint FUN_1407e1e80(longlong *param_1)

{
  uint uVar1;
  uint local_18;
  undefined local_10 [16];
  
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff2;
  FUN_1407e6130(&DAT_140c1bf68);
  if (DAT_140c1bf78 == 0) {
    DAT_140c1bf78 = FUN_1407e18c0(&LAB_1407e1ce0,&LAB_1407e1d00);
  }
  if (DAT_140c1bf70 == 0) {
    DAT_140c1bf70 = FUN_1407e18c0(&LAB_1407e1d30,&LAB_1407e1d60);
  }
  if (DAT_140c1bf80 == 0) {
    DAT_140c1bf80 = FUN_1407e18c0(&LAB_1407e1dc0,&LAB_1407e1df0);
  }
  if (DAT_140c1bf88 == 0) {
    DAT_140c1bf88 = FUN_1407e18c0(&LAB_1407e1e20,&LAB_1407e1e50);
  }
  local_18 = 0;
  if ((((DAT_140c1bf78 != 0) && (DAT_140c1bf70 != 0)) && (DAT_140c1bf80 != 0)) &&
     (DAT_140c1bf88 != 0)) {
    local_18 = FUN_1407e1930(DAT_140c1bf78,local_10,param_1);
    if ((*(int *)((longlong)param_1 + 0x14) != 0) && (param_1[3] != 0)) {
      uVar1 = FUN_1407e1930(DAT_140c1bf70,local_10,param_1);
      local_18 = local_18 & uVar1;
    }
    if (*param_1 != 0) {
      uVar1 = FUN_1407e1930(DAT_140c1bf80,local_10,param_1);
      local_18 = local_18 & uVar1;
    }
    if (param_1[1] != 0) {
      uVar1 = FUN_1407e1930(DAT_140c1bf88,local_10,param_1);
      local_18 = local_18 & uVar1;
    }
  }
  FUN_1407e6190(&DAT_140c1bf68);
  return local_18;
}


/* address=1407e2170 name=FUN_1407e2170 */

void FUN_1407e2170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1407e2830(param_1,param_2,0,param_3);
  return;
}


/* address=1407e2260 name=FUN_1407e2260 */

void FUN_1407e2260(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1407dcf10(param_1);
  uVar2 = FUN_1407dcef0(param_1);
  FUN_1407e2170(uVar2,uVar1,param_2);
  return;
}


/* address=1407e22f0 name=FUN_1407e22f0 */

void FUN_1407e22f0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      iVar2 = FUN_1407d39a0(param_1 + 3);
      if (iVar2 != 0) {
        FUN_1407e27f0(param_1);
      }
    }
    else {
      FUN_1407e6090(puVar1 + 1);
      iVar2 = FUN_1407d39a0(param_1 + 3);
      if (iVar2 == 0) {
        FUN_1407e60d0(*param_1 + 8);
      }
      else {
        plVar3 = (longlong *)FUN_1407e2610(*puVar1,param_1);
        if ((plVar3 == param_1) &&
           (plVar3 = (longlong *)FUN_1407e26c0(*puVar1,param_1), plVar3 != param_1)) {
          FID_conflict__assert((wchar_t *)s_f_140c009d0,(wchar_t *)s_D_140c00910,0xeb);
        }
        FUN_1407e60d0(*param_1 + 8);
        FUN_1407e27f0(param_1);
      }
    }
  }
  return;
}


/* address=1407e2410 name=FUN_1407e2410 */

undefined8 FUN_1407e2410(longlong param_1)

{
  FUN_1407d3950(param_1 + 0x18);
  return 1;
}


/* address=1407e2440 name=FUN_1407e2440 */

undefined8 FUN_1407e2440(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=1407e2460 name=FUN_1407e2460 */

undefined8 FUN_1407e2460(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=1407e2480 name=FUN_1407e2480 */

void FUN_1407e2480(longlong param_1,undefined8 param_2)

{
  FUN_1407dce80(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


/* address=1407e24c0 name=FUN_1407e24c0 */

int FUN_1407e24c0(void *param_1,void *param_2,size_t param_3)

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


/* address=1407e2500 name=FUN_1407e2500 */

undefined8 FUN_1407e2500(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e25a0 name=FUN_1407e25a0 */

void FUN_1407e25a0(undefined8 param_1,undefined8 param_2)

{
  FUN_14083a4b0(param_1,param_2);
  return;
}


/* address=1407e25d0 name=FUN_1407e25d0 */

void FUN_1407e25d0(undefined8 param_1)

{
  FUN_14083a590(param_1);
  return;
}


/* address=1407e25f0 name=FUN_1407e25f0 */

void FUN_1407e25f0(undefined8 param_1)

{
  FUN_14083a640(param_1);
  return;
}


/* address=1407e2610 name=FUN_1407e2610 */

void FUN_1407e2610(undefined8 param_1,undefined8 param_2)

{
  FUN_14083a660(param_1,param_2,&LAB_1407e2570,&LAB_1407e2540);
  return;
}


/* address=1407e2650 name=FUN_1407e2650 */

undefined4 FUN_1407e2650(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_14083a750(param_1,local_10,param_3,&LAB_1407e2570,&LAB_1407e2540);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=1407e26c0 name=FUN_1407e26c0 */

void FUN_1407e26c0(undefined8 param_1,undefined8 param_2)

{
  FUN_14083a850(param_1,param_2,&LAB_1407e2570,&LAB_1407e2540);
  return;
}


/* address=1407e27f0 name=FUN_1407e27f0 */

void FUN_1407e27f0(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_1407cd0f0(*(undefined8 *)(param_1 + 8));
  }
  FUN_1407cd0f0(param_1);
  return;
}


/* address=1407e2830 name=FUN_1407e2830 */

undefined8 * FUN_1407e2830(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

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
    FUN_1407e6070(param_4 + 1);
    local_48 = (undefined8 *)FUN_1407e2610(*param_4,&local_30);
    if (((param_3 != 0) && (local_48 != (undefined8 *)0x0)) &&
       (*(int *)((longlong)local_48 + 0x1c) == 0)) {
      local_48 = (undefined8 *)0x0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1407d3950(local_48 + 3);
    }
    FUN_1407e60b0(param_4 + 1);
    if (local_48 != (undefined8 *)0x0) {
      return local_48;
    }
  }
  puVar1 = (undefined8 *)FUN_1407ccfc0(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1407e2500(puVar1,0,0x20);
    if (param_3 == 0) {
      uVar2 = FUN_1407cda90(param_1,param_2);
      puVar1[1] = uVar2;
      if ((param_2 != 0) && (puVar1[1] == 0)) {
        FUN_1407cd0f0(puVar1);
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
      FUN_1407e6090(param_4 + 1);
      local_40 = (undefined8 *)FUN_1407e2610(*param_4,puVar1);
      if (((param_3 != 0) && (local_40 != (undefined8 *)0x0)) &&
         (*(int *)((longlong)local_40 + 0x1c) == 0)) {
        local_40 = (undefined8 *)0x0;
      }
      local_58 = 0;
      if (local_40 == (undefined8 *)0x0) {
        local_38 = 0;
        local_58 = FUN_1407e2650(*param_4,&local_38,puVar1);
      }
      else {
        FUN_1407d3950(local_40 + 3);
      }
      FUN_1407e60d0(param_4 + 1);
      if (local_58 == 0) {
        FUN_1407e27f0(puVar1);
        puVar1 = local_40;
      }
    }
  }
  return puVar1;
}


/* address=1407e2ad0 name=FUN_1407e2ad0 */

void FUN_1407e2ad0(void)

{
  FUN_1407d7900(&DAT_1409aad00);
  return;
}


/* address=1407e2af0 name=FUN_1407e2af0 */

void FUN_1407e2af0(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_1409aad00);
  return;
}


/* address=1407e2bc0 name=FUN_1407e2bc0 */

void FUN_1407e2bc0(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407e2be0 name=FUN_1407e2be0 */

void FUN_1407e2be0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407e2c10 name=FUN_1407e2c10 */

void FUN_1407e2c10(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac7b0(param_1,&LAB_1407e2b90,param_2);
  return;
}


/* address=1407e2c70 name=FUN_1407e2c70 */

void FUN_1407e2c70(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407e2c90 name=FUN_1407e2c90 */

void FUN_1407e2c90(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407e2cc0 name=FUN_1407e2cc0 */

void FUN_1407e2cc0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac7b0(param_1,&LAB_1407e2c40,param_2);
  return;
}


/* address=1407e2d20 name=FUN_1407e2d20 */

void FUN_1407e2d20(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407e2d40 name=FUN_1407e2d40 */

void FUN_1407e2d40(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407e2d70 name=FUN_1407e2d70 */

void FUN_1407e2d70(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac7b0(param_1,&LAB_1407e2cf0,param_2);
  return;
}


/* address=1407e2da0 name=FUN_1407e2da0 */

void FUN_1407e2da0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acf60(param_1,param_2);
  return;
}


/* address=1407e2e00 name=FUN_1407e2e00 */

void FUN_1407e2e00(void)

{
  FUN_1407ac640();
  return;
}


/* address=1407e2e20 name=FUN_1407e2e20 */

void FUN_1407e2e20(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407e2e40 name=FUN_1407e2e40 */

void FUN_1407e2e40(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407e2e70 name=FUN_1407e2e70 */

void FUN_1407e2e70(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac7b0(param_1,&LAB_1407e2dd0,param_2);
  return;
}


/* address=1407e2ea0 name=FUN_1407e2ea0 */

void FUN_1407e2ea0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acf60(param_1,param_2);
  return;
}


/* address=1407e2ef0 name=FUN_1407e2ef0 */

void FUN_1407e2ef0(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_1409aad90);
  return;
}


/* address=1407e2f90 name=FUN_1407e2f90 */

void FUN_1407e2f90(void)

{
  FUN_1407d7900(&DAT_1409aadc0);
  return;
}


/* address=1407e2fb0 name=FUN_1407e2fb0 */

void FUN_1407e2fb0(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_1409aadc0);
  return;
}


/* address=1407e3050 name=FUN_1407e3050 */

void FUN_1407e3050(void)

{
  FUN_1407d7900(&DAT_1409aadf0);
  return;
}


/* address=1407e3110 name=FUN_1407e3110 */

void FUN_1407e3110(void)

{
  FUN_1407d7900(&DAT_1409aae20);
  return;
}


/* address=1407e3130 name=FUN_1407e3130 */

void FUN_1407e3130(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_1409aae20);
  return;
}


/* address=1407e31d0 name=FUN_1407e31d0 */

undefined8 FUN_1407e31d0(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong local_20;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
    uVar3 = FUN_1407c70c0(param_2);
    *(undefined8 *)(param_1 + 4) = uVar3;
    if (*(longlong *)(param_1 + 4) == 0) {
      uVar2 = 0;
    }
    else {
      for (local_20 = 0; uVar4 = FUN_1407e2c70(uVar2), local_20 < uVar4; local_20 = local_20 + 1) {
        uVar3 = FUN_1407e2c90(uVar2,local_20);
        iVar1 = FUN_1407c6540(*(undefined8 *)(param_1 + 4),uVar3,0xffffffff,local_20 == 0);
        if (iVar1 == 0) {
          FUN_1407c7020(*(undefined8 *)(param_1 + 4));
          *(undefined8 *)(param_1 + 4) = 0;
          return 0;
        }
      }
      iVar1 = FUN_1407c7090(*(undefined8 *)(param_1 + 4),0);
      if (iVar1 < 0) {
        FUN_1407c7020(*(undefined8 *)(param_1 + 4));
        *(undefined8 *)(param_1 + 4) = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


/* address=1407e3660 name=FUN_1407e3660 */

undefined8 FUN_1407e3660(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  longlong local_28;
  longlong local_20;
  
  local_20 = 0;
  if (*param_2 == '@') {
    local_28 = FUN_1407b87d0(param_1,param_2 + 1);
  }
  else {
    local_28 = FUN_1407bb220(param_2);
    local_20 = local_28;
  }
  if (local_28 == 0) {
    FUN_1407c2680(0x14,0,0x99,s_D__a_1_s_target_release_build_bo_140c00c70,0x7a);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14083c020(0,param_1,local_28);
    FUN_1407e2c10(local_20,&LAB_1407b9c10);
  }
  return uVar1;
}


/* address=1407e3720 name=FUN_1407e3720 */

undefined8 FUN_1407e3720(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 local_30;
  longlong local_20;
  
  local_20 = 0;
  local_30 = 0;
  iVar1 = strncmp(*(char **)(param_3 + 8),s_fullname_140c00cd8,9);
  if (iVar1 == 0) {
    if (*(longlong *)(param_3 + 0x10) == 0) {
      FUN_1407c2680(0x14,0,0x89,s_D__a_1_s_target_release_build_bo_140c00cf0,0x8e);
      return 0xffffffff;
    }
    local_20 = FUN_1407e3660(param_2,*(undefined8 *)(param_3 + 0x10));
    if (local_20 == 0) goto LAB_1407e39d1;
  }
  else {
    iVar1 = strcmp(*(char **)(param_3 + 8),s_relativename_140c00d58);
    if (iVar1 != 0) {
      return 0;
    }
    if (*(longlong *)(param_3 + 0x10) == 0) {
      FUN_1407c2680(0x14,0,0x89,s_D__a_1_s_target_release_build_bo_140c00d70,0x99);
      return 0xffffffff;
    }
    lVar3 = FUN_1407b87d0(param_2,*(undefined8 *)(param_3 + 0x10));
    if (lVar3 == 0) {
      FUN_1407c2680(0x14,0,0x99,s_D__a_1_s_target_release_build_bo_140c00de0,0x9e);
      return 0xffffffff;
    }
    puVar2 = (undefined8 *)FUN_1407c7000();
    if (puVar2 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    iVar1 = FUN_1407bac80(puVar2,lVar3,0x1001);
    local_30 = *puVar2;
    *puVar2 = 0;
    FUN_1407c7020(puVar2);
    if ((iVar1 == 0) || (lVar3 = FUN_1407e2c70(local_30), lVar3 == 0)) goto LAB_1407e39d1;
    lVar3 = FUN_1407e2c70(local_30);
    lVar3 = FUN_1407e2c90(local_30,lVar3 + -1);
    if (*(int *)(lVar3 + 0x10) != 0) {
      FUN_1407c2680(0x14,0,0x7a,s_D__a_1_s_target_release_build_bo_140c00e50,0xae);
      goto LAB_1407e39d1;
    }
  }
  if (*param_1 == 0) {
    lVar3 = FUN_1407e3050();
    *param_1 = lVar3;
    if (*param_1 != 0) {
      if (local_20 == 0) {
        *(undefined4 *)*param_1 = 1;
        *(undefined8 *)(*param_1 + 8) = local_30;
      }
      else {
        *(undefined4 *)*param_1 = 0;
        *(longlong *)(*param_1 + 8) = local_20;
      }
      return 1;
    }
  }
  else {
    FUN_1407c2680(0x14,0,0x6a,s_D__a_1_s_target_release_build_bo_140c00ec0,0xb6);
  }
LAB_1407e39d1:
  FUN_1407e2d70(local_20,FUN_1407ad520);
  FUN_1407e2cc0(local_30,FUN_1407c71e0);
  return 0xffffffff;
}


/* address=1407e3a10 name=FUN_1407e3a10 */

undefined4 FUN_1407e3a10(longlong *param_1,undefined8 param_2)

{
  char *_Str2;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  if (*param_1 == 0) {
    local_38 = 0;
    lVar2 = FUN_1407bb220(param_2);
    if (lVar2 == 0) {
      local_38 = 0;
    }
    else {
      for (local_28 = 0; uVar3 = FUN_1407e2bc0(lVar2), local_28 < uVar3; local_28 = local_28 + 1) {
        lVar4 = FUN_1407e2be0(lVar2,local_28);
        _Str2 = *(char **)(lVar4 + 8);
        if (*param_1 == 0) {
          lVar4 = FUN_1407d7270();
          *param_1 = lVar4;
          if (*param_1 == 0) goto LAB_1407e3b5f;
        }
        for (local_30 = &DAT_1409aaf30; *(longlong *)(local_30 + 2) != 0; local_30 = local_30 + 6) {
          iVar1 = strcmp(*(char **)(local_30 + 4),_Str2);
          if (iVar1 == 0) {
            iVar1 = FUN_1407dc970(*param_1,*local_30,1);
            if (iVar1 == 0) goto LAB_1407e3b5f;
            break;
          }
        }
        if (*(longlong *)(local_30 + 2) == 0) goto LAB_1407e3b5f;
      }
      local_38 = 1;
LAB_1407e3b5f:
      FUN_1407e2c10(lVar2,&LAB_1407b9c10);
    }
  }
  else {
    FUN_1407c2680(0x14,0,0xa3,s_D__a_1_s_target_release_build_bo_140c00f30,0xdd);
    local_38 = 0;
  }
  return local_38;
}


/* address=1407e3b80 name=FUN_1407e3b80 */

undefined8 FUN_1407e3b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *local_10;
  
  bVar1 = true;
  FUN_14083b4b0(param_1,s___s_s____s_140c00f98,param_4,&DAT_140c1bf9a,param_2,param_4 + 2,
                &DAT_140c1bf99);
  for (local_10 = &DAT_1409aaf30; *(longlong *)(local_10 + 2) != 0; local_10 = local_10 + 6) {
    iVar2 = FUN_1407dcb40(param_3,*local_10);
    if (iVar2 != 0) {
      if (bVar1) {
        bVar1 = false;
      }
      else {
        FUN_1407c04e0(param_1,&DAT_140c00fa4);
      }
      FUN_1407c04e0(param_1,*(undefined8 *)(local_10 + 2));
    }
  }
  if (bVar1) {
    FUN_1407c04e0(param_1,s_<EMPTY>_140c00fa8);
  }
  else {
    FUN_1407c04e0(param_1,&DAT_140c00fb4);
  }
  return 1;
}


/* address=1407e3ca0 name=FUN_1407e3ca0 */

longlong FUN_1407e3ca0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong local_10;
  
  lVar2 = FUN_1407e2f90();
  if (lVar2 == 0) {
LAB_1407e3dd7:
    FUN_1407e2fb0(lVar2);
    lVar2 = 0;
  }
  else {
    for (local_10 = 0; uVar3 = FUN_1407e2bc0(param_2), local_10 < uVar3; local_10 = local_10 + 1) {
      lVar4 = FUN_1407e2be0(param_2,local_10);
      iVar1 = FUN_1407e3720(lVar2,param_1,lVar4);
      if (iVar1 < 1) {
        if (iVar1 < 0) goto LAB_1407e3dd7;
        iVar1 = strcmp(*(char **)(lVar4 + 8),s_reasons_140c00fb8);
        if (iVar1 == 0) {
          iVar1 = FUN_1407e3a10(lVar2 + 8,*(undefined8 *)(lVar4 + 0x10));
          if (iVar1 == 0) goto LAB_1407e3dd7;
        }
        else {
          iVar1 = strcmp(*(char **)(lVar4 + 8),s_CRLissuer_140c00fc0);
          if (iVar1 == 0) {
            FUN_1407ad610(*(undefined8 *)(lVar2 + 0x10));
            uVar5 = FUN_1407e3660(param_1,*(undefined8 *)(lVar4 + 0x10));
            *(undefined8 *)(lVar2 + 0x10) = uVar5;
            if (*(longlong *)(lVar2 + 0x10) == 0) goto LAB_1407e3dd7;
          }
        }
      }
    }
  }
  return lVar2;
}


/* address=1407e4260 name=FUN_1407e4260 */

undefined8 FUN_1407e4260(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    uVar1 = FUN_1407e2d20(param_2);
    if (uVar1 <= local_18) break;
    FUN_14083b4b0(param_1,&DAT_140c01094,param_3 + 2,&DAT_140c1bf9b);
    uVar2 = FUN_1407e2d40(param_2,local_18);
    FUN_14083bc60(param_1,uVar2);
    FUN_1407c04e0(param_1,&DAT_140c01098);
    local_18 = local_18 + 1;
  }
  return 1;
}


/* address=1407e4300 name=FUN_1407e4300 */

undefined8 FUN_1407e4300(undefined8 param_1,int *param_2,int param_3)

{
  undefined8 local_38 [7];
  
  if (*param_2 == 0) {
    FUN_14083b4b0(param_1,s___sFull_Name__140c010a0,param_3,&DAT_140c1bf9c);
    FUN_1407e4260(param_1,*(undefined8 *)(param_2 + 2),param_3);
  }
  else {
    local_38[0] = *(undefined8 *)(param_2 + 2);
    FUN_14083b4b0(param_1,s___sRelative_Name____s_140c010b0,param_3,&DAT_140c1bf9e,param_3 + 2,
                  &DAT_140c1bf9d);
    FUN_1407c8070(param_1,local_38,0,0x82031f);
    FUN_1407c04e0(param_1,&DAT_140c010c8);
  }
  return 1;
}


/* address=1407e43e0 name=FUN_1407e43e0 */

void FUN_1407e43e0(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407e4400 name=FUN_1407e4400 */

void FUN_1407e4400(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407e4430 name=FUN_1407e4430 */

void FUN_1407e4430(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407e4450 name=FUN_1407e4450 */

void FUN_1407e4450(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407e4480 name=FUN_1407e4480 */

void FUN_1407e4480(void)

{
  FUN_1407ac640();
  return;
}


/* address=1407e44a0 name=FUN_1407e44a0 */

void FUN_1407e44a0(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407e44c0 name=FUN_1407e44c0 */

void FUN_1407e44c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407e44f0 name=FUN_1407e44f0 */

void FUN_1407e44f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acf60(param_1,param_2);
  return;
}


/* address=1407e4520 name=FUN_1407e4520 */

int FUN_1407e4520(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int local_64;
  ulonglong local_50;
  undefined4 local_40 [2];
  longlong local_38;
  ulonglong local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar2 = FUN_1407bce70(param_1);
  iVar1 = FUN_1407c6260(lVar2);
  local_28 = (longlong)iVar1;
  lVar3 = FUN_1407e4430(*(undefined8 *)(param_1 + 0x58));
  uVar5 = local_28 + lVar3;
  local_20 = FUN_1407e44a0(*param_2);
  lVar3 = FUN_1407e44a0(param_2[1]);
  uVar6 = local_20 + lVar3;
  local_30 = uVar6 * uVar5;
  iVar1 = FUN_1407c6260(lVar2);
  if ((((uVar5 < (ulonglong)(longlong)iVar1) || (uVar4 = FUN_1407e44a0(*param_2), uVar6 < uVar4)) ||
      ((uVar6 != 0 && (local_30 / uVar6 != uVar5)))) || (0x100000 < local_30)) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_1407c6260(lVar2);
    if (iVar1 < 1) {
LAB_1407e46ec:
      for (local_50 = 0; uVar5 = FUN_1407e4430(*(undefined8 *)(param_1 + 0x58)), local_50 < uVar5;
          local_50 = local_50 + 1) {
        local_10 = FUN_1407e4450(*(undefined8 *)(param_1 + 0x58),local_50);
        iVar1 = FUN_1407e4e40(local_10,param_2);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar1 = 0;
    }
    else {
      local_40[0] = 4;
      local_38 = lVar2;
      iVar1 = FUN_1407e4e40(local_40,param_2);
      if (iVar1 == 0) {
        local_40[0] = 1;
        local_64 = -1;
        do {
          local_64 = FUN_1407c6290(lVar2,0x30,local_64);
          if (local_64 == -1) goto LAB_1407e46ec;
          local_18 = FUN_1407c63a0(lVar2,local_64);
          local_38 = FUN_1407c6990(local_18);
          if (*(int *)(local_38 + 4) != 0x16) {
            return 0x35;
          }
          iVar1 = FUN_1407e4e40(local_40,param_2);
        } while (iVar1 == 0);
      }
    }
  }
  return iVar1;
}


/* address=1407e4770 name=FUN_1407e4770 */

void FUN_1407e4770(void)

{
  FUN_1407d7900(&DAT_1409ab230);
  return;
}


/* address=1407e4790 name=FUN_1407e4790 */

void FUN_1407e4790(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_1409ab230);
  return;
}


/* address=1407e47c0 name=FUN_1407e47c0 */

void FUN_1407e47c0(void)

{
  FUN_1407d7900(&DAT_1409ab260);
  return;
}


/* address=1407e47e0 name=FUN_1407e47e0 */

void FUN_1407e47e0(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_1409ab260);
  return;
}


/* address=1407e4810 name=FUN_1407e4810 */

int FUN_1407e4810(void *param_1,void *param_2,size_t param_3)

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


/* address=1407e4b10 name=FUN_1407e4b10 */

undefined8
FUN_1407e4b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  int **ppiVar3;
  ulonglong local_18;
  
  lVar1 = FUN_1407e44a0(param_2);
  if (lVar1 != 0) {
    FUN_14083b4b0(param_3,s___s_s__140c012a8,param_4,&DAT_140c1bfa5,param_5);
  }
  local_18 = 0;
  while( true ) {
    uVar2 = FUN_1407e44a0(param_2);
    if (uVar2 <= local_18) break;
    ppiVar3 = (int **)FUN_1407e44c0(param_2,local_18);
    FUN_14083b4b0(param_3,&DAT_140c012b0,param_4 + 2,&DAT_140c1bfa6);
    if (**ppiVar3 == 7) {
      FUN_1407e4c30(param_3,*(undefined8 *)(*ppiVar3 + 2));
    }
    else {
      FUN_14083bc60(param_3,*ppiVar3);
    }
    FUN_1407c04e0(param_3,&DAT_140c012b4);
    local_18 = local_18 + 1;
  }
  return 1;
}


/* address=1407e4c30 name=FUN_1407e4c30 */

undefined8 FUN_1407e4c30(undefined8 param_1,int *param_2)

{
  int iVar1;
  int local_34;
  undefined *local_28;
  
  local_28 = *(undefined **)(param_2 + 2);
  iVar1 = *param_2;
  FUN_1407c04e0(param_1,&DAT_140c012b8);
  if (iVar1 == 8) {
    FUN_14083b4b0(param_1,s__d__d__d__d__d__d__d__d_140c012c0,*local_28,local_28[1],local_28[2],
                  local_28[3],local_28[4],local_28[5],local_28[6],local_28[7]);
  }
  else if (iVar1 == 0x20) {
    for (local_34 = 0; local_34 < 0x10; local_34 = local_34 + 1) {
      FUN_14083b4b0(param_1,&DAT_140c012d8,CONCAT11(*local_28,local_28[1]));
      local_28 = local_28 + 2;
      if (local_34 == 7) {
        FUN_1407c04e0(param_1,&DAT_140c012dc);
      }
      else if (local_34 != 0xf) {
        FUN_1407c04e0(param_1,&DAT_140c012e0);
      }
    }
  }
  else {
    FUN_14083b4b0(param_1,s_IP_Address_<invalid>_140c012e8);
  }
  return 1;
}


/* address=1407e4e40 name=FUN_1407e4e40 */

int FUN_1407e4e40(int *param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int **ppiVar3;
  int local_24;
  ulonglong local_20;
  
  local_24 = 0;
  for (local_20 = 0; uVar2 = FUN_1407e44a0(*param_2), local_20 < uVar2; local_20 = local_20 + 1) {
    ppiVar3 = (int **)FUN_1407e44c0(*param_2,local_20);
    if (*param_1 == **ppiVar3) {
      if ((ppiVar3[1] != (int *)0x0) || (ppiVar3[2] != (int *)0x0)) {
        return 0x31;
      }
      if (local_24 != 2) {
        if (local_24 == 0) {
          local_24 = 1;
        }
        iVar1 = FUN_1407e5000(param_1,*ppiVar3);
        if (iVar1 == 0) {
          local_24 = 2;
        }
        else if (iVar1 != 0x2f) {
          return iVar1;
        }
      }
    }
  }
  if (local_24 == 1) {
    iVar1 = 0x2f;
  }
  else {
    for (local_20 = 0; uVar2 = FUN_1407e44a0(param_2[1]), local_20 < uVar2; local_20 = local_20 + 1)
    {
      ppiVar3 = (int **)FUN_1407e44c0(param_2[1],local_20);
      if (*param_1 == **ppiVar3) {
        if ((ppiVar3[1] != (int *)0x0) || (ppiVar3[2] != (int *)0x0)) {
          return 0x31;
        }
        iVar1 = FUN_1407e5000(param_1,*ppiVar3);
        if (iVar1 == 0) {
          return 0x30;
        }
        if (iVar1 != 0x2f) {
          return iVar1;
        }
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* address=1407e5000 name=FUN_1407e5000 */

undefined8 FUN_1407e5000(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    uVar2 = FUN_1407e52a0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_1407e5160(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
  }
  else if (iVar1 == 4) {
    uVar2 = FUN_1407e50b0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
  }
  else if (iVar1 == 6) {
    uVar2 = FUN_1407e5460(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
  }
  else {
    uVar2 = 0x33;
  }
  return uVar2;
}


/* address=1407e50b0 name=FUN_1407e50b0 */

undefined8 FUN_1407e50b0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = FUN_1407c7090(param_1,0), iVar1 < 0)) {
    return 0x11;
  }
  if ((*(int *)(param_2 + 8) != 0) && (iVar1 = FUN_1407c7090(param_2,0), iVar1 < 0)) {
    return 0x11;
  }
  if (*(int *)(param_1 + 0x20) < *(int *)(param_2 + 0x20)) {
    uVar2 = 0x2f;
  }
  else {
    iVar1 = FUN_1407e4810(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_1 + 0x18),
                          (longlong)*(int *)(param_2 + 0x20));
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x2f;
    }
  }
  return uVar2;
}


/* address=1407e5160 name=FUN_1407e5160 */

undefined8 FUN_1407e5160(int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char local_48 [8];
  ulonglong local_40;
  longlong local_38;
  undefined local_30 [16];
  undefined local_20 [32];
  
  FUN_1407dce80(local_20,*(undefined8 *)(param_1 + 2),(longlong)*param_1);
  FUN_1407dce80(local_30,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  lVar2 = FUN_1407dcf10(local_30);
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_1407e55e0(local_30,0x2e);
  if (iVar1 == 0) {
    local_40 = FUN_1407dcf10(local_20);
    uVar3 = FUN_1407dcf10(local_30);
    if (uVar3 < local_40) {
      local_38 = FUN_1407dcf10(local_20);
      lVar2 = FUN_1407dcf10(local_30);
      iVar1 = FUN_1407dcec0(local_20,(local_38 - lVar2) + -1);
      if (((iVar1 == 0) || (iVar1 = FUN_1407dd110(local_20,local_48), iVar1 == 0)) ||
         (local_48[0] != '.')) {
        return 0x2f;
      }
    }
    iVar1 = FUN_1407e5640(local_20,local_30);
    if (iVar1 == 0) {
      uVar4 = 0x2f;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  iVar1 = FUN_1407e5720(local_20,local_30);
  if (iVar1 == 0) {
    return 0x2f;
  }
  return 0;
}


/* address=1407e52a0 name=FUN_1407e52a0 */

undefined8 FUN_1407e52a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [16];
  undefined local_18 [24];
  
  FUN_1407dce80(local_38,*(undefined8 *)(param_1 + 2),(longlong)*param_1);
  FUN_1407dce80(local_48,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  iVar1 = FUN_1407dd520(local_38,local_28,0x40);
  if (iVar1 == 0) {
    uVar3 = 0x35;
  }
  else {
    iVar1 = FUN_1407dd520(local_48,local_18,0x40);
    if (iVar1 == 0) {
      iVar2 = FUN_1407e55e0(local_48,0x2e);
      if (iVar2 != 0) {
        iVar1 = FUN_1407e5720(local_38,local_48);
        if (iVar1 != 0) {
          return 0;
        }
        return 0x2f;
      }
    }
    if (iVar1 != 0) {
      lVar4 = FUN_1407dcf10(local_18);
      if (lVar4 != 0) {
        uVar3 = FUN_1407dcf10(local_28);
        uVar5 = FUN_1407dcef0(local_28);
        iVar1 = FUN_1407dd0a0(local_18,uVar5,uVar3);
        if (iVar1 == 0) {
          return 0x2f;
        }
      }
      iVar1 = FUN_1407e55e0(local_48,0x40);
      if (iVar1 == 0) {
        FID_conflict__assert((wchar_t *)s_s_140c013d0,(wchar_t *)s_D_140c01300,499);
      }
      FUN_1407dcec0(local_48,1);
    }
    iVar1 = FUN_1407e55e0(local_38,0x40);
    if (iVar1 == 0) {
      FID_conflict__assert((wchar_t *)s_s_140c014e0,(wchar_t *)s_D_140c01410,0x1f8);
    }
    FUN_1407dcec0(local_38,1);
    iVar1 = FUN_1407e5640(local_48,local_38);
    if (iVar1 == 0) {
      uVar3 = 0x2f;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=1407e5460 name=FUN_1407e5460 */

undefined8 FUN_1407e5460(int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char local_68 [8];
  undefined local_60 [16];
  undefined local_50 [16];
  undefined local_40 [16];
  undefined local_30 [32];
  
  FUN_1407dce80(local_60,*(undefined8 *)(param_1 + 2),(longlong)*param_1);
  FUN_1407dce80(local_40,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  iVar1 = FUN_1407dd520(local_60,local_30,0x3a);
  if ((((iVar1 == 0) || (iVar1 = FUN_1407dcec0(local_60,1), iVar1 == 0)) ||
      (iVar1 = FUN_1407dd110(local_60,local_68), iVar1 == 0)) ||
     (((local_68[0] != '/' || (iVar1 = FUN_1407dd110(local_60,local_68), iVar1 == 0)) ||
      (local_68[0] != '/')))) {
    return 0x35;
  }
  iVar1 = FUN_1407dd520(local_60,local_50,0x3a);
  if (iVar1 == 0) {
    iVar1 = FUN_1407dd520(local_60,local_50,0x2f);
    if (iVar1 == 0) {
      puVar3 = local_60;
      puVar4 = local_50;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  lVar2 = FUN_1407dcf10(local_50);
  if (lVar2 == 0) {
    return 0x35;
  }
  iVar1 = FUN_1407e55e0(local_40,0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_1407e5640(local_40,local_50);
    if (iVar1 == 0) {
      return 0x2f;
    }
    return 0;
  }
  iVar1 = FUN_1407e5720(local_50,local_40);
  if (iVar1 != 0) {
    return 0;
  }
  return 0x2f;
}


/* address=1407e55e0 name=FUN_1407e55e0 */

undefined4 FUN_1407e55e0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char *pcVar2;
  
  lVar1 = FUN_1407dcf10(param_1);
  if ((lVar1 != 0) && (pcVar2 = (char *)FUN_1407dcef0(param_1), *pcVar2 == param_2)) {
    return 1;
  }
  return 0;
}


/* address=1407e5640 name=FUN_1407e5640 */

undefined8 FUN_1407e5640(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong local_30;
  
  lVar3 = FUN_1407dcf10(param_1);
  lVar4 = FUN_1407dcf10(param_2);
  if (lVar3 == lVar4) {
    lVar3 = FUN_1407dcef0(param_1);
    lVar4 = FUN_1407dcef0(param_2);
    for (local_30 = 0; uVar5 = FUN_1407dcf10(param_1), local_30 < uVar5; local_30 = local_30 + 1) {
      iVar1 = __ascii_tolower(*(undefined *)(lVar3 + local_30));
      iVar2 = __ascii_tolower(*(undefined *)(lVar4 + local_30));
      if (iVar1 != iVar2) {
        return 0;
      }
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


/* address=1407e5720 name=FUN_1407e5720 */

undefined8 FUN_1407e5720(undefined *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined local_28 [24];
  
  uVar1 = FUN_1407dcf10(param_1);
  uVar2 = FUN_1407dcf10(param_2);
  if (uVar1 < uVar2) {
    uVar4 = 0;
  }
  else {
    puVar6 = param_1;
    puVar7 = local_28;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    lVar5 = FUN_1407dcf10(param_1);
    lVar3 = FUN_1407dcf10(param_2);
    FUN_1407dcec0(local_28,lVar5 - lVar3);
    uVar4 = FUN_1407e5640(local_28,param_2);
  }
  return uVar4;
}


/* address=1407e57c0 name=FUN_1407e57c0 */

undefined8 FUN_1407e57c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e5810 name=FUN_1407e5810 */

undefined4 FUN_1407e5810(longlong *param_1,longlong param_2)

{
  return *(undefined4 *)((longlong)*(int *)(param_2 + 4) + *param_1);
}


/* address=1407e5850 name=FUN_1407e5850 */

undefined4 FUN_1407e5850(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((longlong)*(int *)(param_3 + 4) + *param_1);
  uVar1 = *puVar2;
  *puVar2 = param_2;
  return uVar1;
}


/* address=1407e58a0 name=FUN_1407e58a0 */

longlong FUN_1407e58a0(longlong *param_1,longlong param_2)

{
  return (ulonglong)*(uint *)(param_2 + 8) + *param_1;
}


/* address=1407e58e0 name=FUN_1407e58e0 */

uint * FUN_1407e58e0(longlong *param_1,uint *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int local_28;
  int *local_18;
  
  if ((*param_2 & 0x300) != 0) {
    lVar1 = *(longlong *)(param_2 + 6);
    plVar3 = (longlong *)((ulonglong)*(uint *)(lVar1 + 4) + *param_1);
    if (*plVar3 == 0) {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        return *(uint **)(lVar1 + 0x28);
      }
    }
    else {
      if ((*param_2 & 0x100) == 0) {
        FID_conflict__assert((wchar_t *)s_t_140c018a8,(wchar_t *)s_D_140c017e0,0xf0);
      }
      iVar2 = FUN_1407e1040(*plVar3);
      local_18 = *(int **)(lVar1 + 0x10);
      for (local_28 = 0; local_28 < *(int *)(lVar1 + 0x18); local_28 = local_28 + 1) {
        if (*local_18 == iVar2) {
          return (uint *)(local_18 + 2);
        }
        local_18 = local_18 + 10;
      }
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        return *(uint **)(lVar1 + 0x20);
      }
    }
    if (param_3 != 0) {
      FUN_1407c2680(0xc,0,0xba,s_D__a_1_s_target_release_build_bo_140c018f0,0x109);
    }
    param_2 = (uint *)0x0;
  }
  return param_2;
}


/* address=1407e5a40 name=FUN_1407e5a40 */

void FUN_1407e5a40(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1407e5dc0(param_1,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
  }
  return;
}


/* address=1407e5a80 name=FUN_1407e5a80 */

undefined8 FUN_1407e5a80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1407e5dc0(param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_1407d39a0(lVar1);
  }
  return uVar2;
}


/* address=1407e5ad0 name=FUN_1407e5ad0 */

void FUN_1407e5ad0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1407e5e20(param_1,param_2);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}


/* address=1407e5b30 name=FUN_1407e5b30 */

void FUN_1407e5b30(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1407e5e20(param_1,param_2);
  if (lVar1 != 0) {
    FUN_1407e5d50(lVar1);
  }
  return;
}


/* address=1407e5b70 name=FUN_1407e5b70 */

undefined8
FUN_1407e5b70(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1407e5e20(param_3,param_4);
  if ((puVar1 == (undefined8 *)0x0) || (puVar1[1] == 0)) {
    uVar2 = 0;
  }
  else {
    if (param_2 != (longlong *)0x0) {
      FUN_1407e57c0(*param_2,*puVar1,puVar1[1]);
      *param_2 = *param_2 + puVar1[1];
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(puVar1 + 1);
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=1407e5c20 name=FUN_1407e5c20 */

undefined8
FUN_1407e5c20(undefined8 param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = (ulonglong *)FUN_1407e5e20(param_1,param_4);
  if (puVar1 == (ulonglong *)0x0) {
    return 1;
  }
  FUN_1407e5d50(puVar1);
  if (param_5 == 0) {
    uVar2 = FUN_1407cda90(param_2,param_3);
    *puVar1 = uVar2;
    if (*puVar1 == 0) {
      return 0;
    }
    goto LAB_1407e5d30;
  }
  uVar2 = FUN_1407e2440(param_5);
  if (param_2 < uVar2) {
LAB_1407e5cc8:
    FID_conflict__assert((wchar_t *)s_C_140c01710,(wchar_t *)s_D_140c01640,0xa1);
  }
  else {
    lVar3 = FUN_1407e2440(param_5);
    lVar4 = FUN_1407e2460(param_5);
    if ((ulonglong)(lVar3 + lVar4) < param_2 + param_3) goto LAB_1407e5cc8;
  }
  FUN_1407e2410(param_5);
  puVar1[2] = param_5;
  *puVar1 = param_2;
LAB_1407e5d30:
  puVar1[1] = param_3;
  return 1;
}


/* address=1407e5d50 name=FUN_1407e5d50 */

void FUN_1407e5d50(undefined8 *param_1)

{
  if (param_1[2] == 0) {
    FUN_1407cd0f0(*param_1);
  }
  else {
    FUN_1407e22f0(param_1[2]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


/* address=1407e5dc0 name=FUN_1407e5dc0 */

longlong FUN_1407e5dc0(longlong *param_1,char *param_2)

{
  longlong lVar1;
  
  if (*param_2 == '\x01') {
    lVar1 = *(longlong *)(param_2 + 0x18);
    if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) & 1) == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = (longlong)*(int *)(lVar1 + 0xc) + *param_1;
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


/* address=1407e5e20 name=FUN_1407e5e20 */

longlong FUN_1407e5e20(longlong *param_1,char *param_2)

{
  longlong lVar1;
  
  if (*param_2 != '\x01') {
    FID_conflict__assert((wchar_t *)s_i_140c015f0,(wchar_t *)s_D_140c01520,0x7a);
  }
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x18);
    if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) & 2) == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = (longlong)*(int *)(lVar1 + 0x18) + *param_1;
    }
  }
  return lVar1;
}


/* address=1407e5eb0 name=FUN_1407e5eb0 */

undefined4 FUN_1407e5eb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 8) != '\0') {
    FID_conflict__assert((wchar_t *)s___140c01a38,(wchar_t *)s_D_140c01960,0x1d);
  }
  if ((*(uint *)(param_1 + 0x28) & 1) == 0) {
    FID_conflict__assert((wchar_t *)s_c_140c01b38,(wchar_t *)s_D_140c01a60,0x1e);
  }
  iVar1 = FUN_1407df270(param_1,&local_18,&local_10);
  if (iVar1 == 0) {
    FUN_1407df200(param_1);
    local_10 = 0xffffffff;
  }
  else if (CONCAT44(uStack_c,local_10) < 0x80000000) {
    if (param_2 != (longlong *)0x0) {
      if (*param_2 == 0) {
        *param_2 = local_18;
        local_18 = 0;
      }
      else {
        FUN_1407e5fd0(*param_2,local_18,CONCAT44(uStack_c,local_10));
        *param_2 = *param_2 + CONCAT44(uStack_c,local_10);
      }
    }
    FUN_1407cd0f0(local_18);
  }
  else {
    FUN_1407cd0f0(local_18);
    local_10 = 0xffffffff;
  }
  return local_10;
}


/* address=1407e5fd0 name=FUN_1407e5fd0 */

undefined8 FUN_1407e5fd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e6010 name=FUN_1407e6010 */

void FUN_1407e6010(PINIT_ONCE param_1,undefined8 param_2)

{
  BOOL BVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  BVar1 = InitOnceExecuteOnce(param_1,(PINIT_ONCE_FN)&LAB_1407e63c0,local_res10,(LPVOID *)0x0);
  if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


/* address=1407e6050 name=FUN_1407e6050 */

void FUN_1407e6050(PSRWLOCK param_1)

{
  InitializeSRWLock(param_1);
  return;
}


/* address=1407e6070 name=FUN_1407e6070 */

void FUN_1407e6070(PSRWLOCK param_1)

{
  AcquireSRWLockShared(param_1);
  return;
}


/* address=1407e6090 name=FUN_1407e6090 */

void FUN_1407e6090(PSRWLOCK param_1)

{
  AcquireSRWLockExclusive(param_1);
  return;
}


/* address=1407e60b0 name=FUN_1407e60b0 */

void FUN_1407e60b0(PSRWLOCK param_1)

{
  ReleaseSRWLockShared(param_1);
  return;
}


/* address=1407e60d0 name=FUN_1407e60d0 */

void FUN_1407e60d0(PSRWLOCK param_1)

{
  ReleaseSRWLockExclusive(param_1);
  return;
}


/* address=1407e60f0 name=FUN_1407e60f0 */

void FUN_1407e60f0(void)

{
  return;
}


/* address=1407e6100 name=FUN_1407e6100 */

void FUN_1407e6100(PSRWLOCK param_1)

{
  AcquireSRWLockShared(param_1);
  return;
}


/* address=1407e6130 name=FUN_1407e6130 */

void FUN_1407e6130(PSRWLOCK param_1)

{
  AcquireSRWLockExclusive(param_1);
  return;
}


/* address=1407e6160 name=FUN_1407e6160 */

void FUN_1407e6160(PSRWLOCK param_1)

{
  ReleaseSRWLockShared(param_1);
  return;
}


/* address=1407e6190 name=FUN_1407e6190 */

void FUN_1407e6190(PSRWLOCK param_1)

{
  ReleaseSRWLockExclusive(param_1);
  return;
}


/* address=1407e61c0 name=FUN_1407e61c0 */

undefined8 FUN_1407e61c0(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1407e6010(&DAT_140c1bfd8,&LAB_1407e6400);
  if (DAT_140c1bfe4 == 0) {
    lVar2 = FUN_1407e6550();
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


/* address=1407e6220 name=FUN_1407e6220 */

undefined8 FUN_1407e6220(int param_1,undefined8 param_2,code *param_3)

{
  BOOL BVar1;
  LPVOID local_18;
  
  FUN_1407e6010(&DAT_140c1bfd8,&LAB_1407e6400);
  if (DAT_140c1bfe4 != 0) {
    (*param_3)(param_2);
    return 0;
  }
  local_18 = (LPVOID)FUN_1407e6550();
  if (local_18 == (LPVOID)0x0) {
    local_18 = (LPVOID)_malloc_base(0x28);
    if (local_18 == (LPVOID)0x0) {
      (*param_3)(param_2);
      return 0;
    }
    FUN_1407e6380(local_18,0,0x28);
    BVar1 = TlsSetValue(DAT_140c1bfe0,local_18);
    if (BVar1 == 0) {
      thunk_FUN_1408c7230(local_18);
      (*param_3)(param_2);
      return 0;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_140c1bfa8);
  *(code **)(&DAT_140c1bfb0 + (longlong)param_1 * 8) = param_3;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140c1bfa8);
  *(undefined8 *)((longlong)local_18 + (longlong)param_1 * 8) = param_2;
  return 1;
}


/* address=1407e6330 name=FUN_1407e6330 */

undefined8 FUN_1407e6330(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e6380 name=FUN_1407e6380 */

undefined8 FUN_1407e6380(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e6440 name=tls_callback_0 */

void tls_callback_0(undefined8 param_1,int param_2)

{
  undefined auStack_78 [32];
  uint local_58;
  LPVOID local_50;
  ulonglong local_48;
  code *local_40 [5];
  ulonglong local_18;
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_78;
  if (((param_2 == 3) && (FUN_1407e6010(&DAT_140c1bfd8,&LAB_1407e6400), DAT_140c1bfe4 == 0)) &&
     (local_50 = TlsGetValue(DAT_140c1bfe0), local_50 != (LPVOID)0x0)) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_140c1bfa8);
    FUN_1407e6330(local_40,&DAT_140c1bfb0,0x28);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_140c1bfa8);
    for (local_58 = 0; local_58 < 5; local_58 = local_58 + 1) {
      if (local_40[local_58] != (code *)0x0) {
        local_48 = (ulonglong)local_58;
        (*local_40[local_48])(*(undefined8 *)((longlong)local_50 + (ulonglong)local_58 * 8));
      }
    }
    thunk_FUN_1408c7230(local_50);
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=1407e6550 name=FUN_1407e6550 */

LPVOID FUN_1407e6550(void)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(DAT_140c1bfe0);
  SetLastError(dwErrCode);
  return pvVar1;
}


/* address=1407e6590 name=FUN_1407e6590 */

void FUN_1407e6590(void)

{
  FUN_1407ac640();
  return;
}


/* address=1407e65b0 name=FUN_1407e65b0 */

void FUN_1407e65b0(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407e65d0 name=FUN_1407e65d0 */

void FUN_1407e65d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407e6600 name=FUN_1407e6600 */

void FUN_1407e6600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1407ac720(param_1,param_2,param_3);
  return;
}


/* address=1407e6640 name=FUN_1407e6640 */

void FUN_1407e6640(undefined8 param_1)

{
  FUN_1407ac770(param_1);
  return;
}


/* address=1407e6660 name=FUN_1407e6660 */

void FUN_1407e6660(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acf60(param_1,param_2);
  return;
}


/* address=1407e66a0 name=FUN_1407e66a0 */

undefined4
FUN_1407e66a0(longlong param_1,int *param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
             )

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined4 *local_10;
  
  local_18 = 0;
  local_10 = (undefined4 *)FUN_1407ccfc0(0x18);
  if (local_10 == (undefined4 *)0x0) {
    local_18 = 0;
  }
  else {
    *local_10 = param_3;
    *(undefined8 *)(local_10 + 2) = param_4;
    *(undefined8 *)(local_10 + 4) = param_5;
    FUN_1407e6130(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar2 = FUN_1407e6ab0();
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      uVar3 = FUN_1407e6ad0(*(undefined8 *)(param_1 + 8));
      if ((ulonglong)(longlong)(int)(0x7fffffff - (uint)*(byte *)(param_1 + 0x10)) < uVar3) {
        FUN_1407c2680(0xe,0,0x45,s_D__a_1_s_target_release_build_bo_140c01b70,0xa0);
      }
      else {
        lVar4 = FUN_1407e6b40(*(undefined8 *)(param_1 + 8),local_10);
        if (lVar4 != 0) {
          local_10 = (undefined4 *)0x0;
          iVar1 = FUN_1407e6ad0(*(undefined8 *)(param_1 + 8));
          *param_2 = iVar1 + -1 + (uint)*(byte *)(param_1 + 0x10);
          local_18 = 1;
        }
      }
    }
    FUN_1407e6190(param_1);
    FUN_1407cd0f0(local_10);
  }
  return local_18;
}


/* address=1407e6800 name=FUN_1407e6800 */

undefined8 FUN_1407e6800(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong local_18;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_1 == 0) {
    lVar1 = FUN_1407e6590();
    *param_1 = lVar1;
    if (*param_1 == 0) {
      return 0;
    }
  }
  local_18 = FUN_1407e65b0(*param_1);
  while( true ) {
    if ((ulonglong)(longlong)param_2 < local_18) {
      FUN_1407e6600(*param_1,(longlong)param_2,param_3);
      return 1;
    }
    lVar1 = FUN_1407e6660(*param_1,0);
    if (lVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return 0;
}


/* address=1407e68c0 name=FUN_1407e68c0 */

undefined8 FUN_1407e68c0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((*param_1 != 0) && (-1 < param_2)) &&
     (uVar1 = FUN_1407e65b0(*param_1), (ulonglong)(longlong)param_2 < uVar1)) {
    uVar2 = FUN_1407e65d0(*param_1,(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=1407e6930 name=FUN_1407e6930 */

void FUN_1407e6930(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


/* address=1407e6950 name=FUN_1407e6950 */

void FUN_1407e6950(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*param_3 != 0) && (iVar1 = FUN_1407e6b90(&local_18,param_1), iVar1 != 0)) {
    uVar2 = FUN_1407e6ad0(local_18);
    if ((ulonglong)(longlong)(int)(0x7fffffff - (uint)*(byte *)(param_1 + 0x10)) < uVar2) {
      FID_conflict__assert((wchar_t *)s_s_140c01c90,(wchar_t *)s_D_140c01bd0,0x102);
    }
    for (local_28 = 0; iVar1 = FUN_1407e6ad0(local_18), local_28 < iVar1; local_28 = local_28 + 1) {
      puVar3 = (undefined4 *)FUN_1407e6af0(local_18,(longlong)local_28);
      if (*(longlong *)(puVar3 + 4) != 0) {
        local_10 = FUN_1407e68c0(param_3,local_28 + (uint)*(byte *)(param_1 + 0x10));
        (**(code **)(puVar3 + 4))
                  (param_2,local_10,param_3,local_28 + (uint)*(byte *)(param_1 + 0x10),*puVar3,
                   *(undefined8 *)(puVar3 + 2));
      }
    }
    FUN_1407e6b20(local_18);
    FUN_1407e6640(*param_3);
    *param_3 = 0;
  }
  return;
}


/* address=1407e6ab0 name=FUN_1407e6ab0 */

void FUN_1407e6ab0(void)

{
  FUN_1407ac640();
  return;
}


/* address=1407e6ad0 name=FUN_1407e6ad0 */

void FUN_1407e6ad0(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407e6af0 name=FUN_1407e6af0 */

void FUN_1407e6af0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407e6b20 name=FUN_1407e6b20 */

void FUN_1407e6b20(undefined8 param_1)

{
  FUN_1407ac770(param_1);
  return;
}


/* address=1407e6b40 name=FUN_1407e6b40 */

void FUN_1407e6b40(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acf60(param_1,param_2);
  return;
}


/* address=1407e6b70 name=FUN_1407e6b70 */

void FUN_1407e6b70(undefined8 param_1)

{
  FUN_1407acfe0(param_1);
  return;
}


/* address=1407e6b90 name=FUN_1407e6b90 */

undefined8 FUN_1407e6b90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  FUN_1407e6100(param_2);
  lVar1 = FUN_1407e6ad0(*(undefined8 *)(param_2 + 8));
  if (lVar1 != 0) {
    lVar2 = FUN_1407e6b70(*(undefined8 *)(param_2 + 8));
    *param_1 = lVar2;
  }
  FUN_1407e6160(param_2);
  if ((lVar1 == 0) || (*param_1 != 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* address=1407e6c50 name=FUN_1407e6c50 */

void FUN_1407e6c50(void)

{
  FUN_1407ac640();
  return;
}


/* address=1407e6c70 name=FUN_1407e6c70 */

void FUN_1407e6c70(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac7b0(param_1,&LAB_1407e6c20,param_2);
  return;
}


/* address=1407e6ca0 name=FUN_1407e6ca0 */

void FUN_1407e6ca0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acf60(param_1,param_2);
  return;
}


/* address=1407e6cd0 name=FUN_1407e6cd0 */

undefined8 FUN_1407e6cd0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    if (((param_1 == 0) || (*(longlong *)(param_1 + 0x88) == 0)) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) == 0)) {
      uVar1 = 1;
    }
    else {
      FUN_1407d6cc0(*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x10));
      *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x10) = 0;
      uVar1 = 1;
    }
  }
  else {
    lVar2 = FUN_1407e72f0(param_1);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      if (*(longlong *)(lVar2 + 0x10) == 0) {
        lVar3 = FUN_1407d6ba0();
        *(longlong *)(lVar2 + 0x10) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
      }
      uVar1 = FUN_1407cbdc0(*(undefined8 *)(lVar2 + 0x10),param_2,param_3);
    }
  }
  return uVar1;
}


/* address=1407e6eb0 name=FUN_1407e6eb0 */

undefined8 FUN_1407e6eb0(longlong param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined4 *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = *(undefined4 **)(*(longlong *)(param_1 + 0x88) + 0x10);
  }
  if (param_2 != (undefined4 *)0x0) {
    if (local_18 == (undefined4 *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = *local_18;
    }
    *param_2 = local_28;
  }
  if (local_18 == (undefined4 *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined8 *)(local_18 + 2);
  }
  return local_10;
}


/* address=1407e7230 name=FUN_1407e7230 */

void FUN_1407e7230(void)

{
  FUN_1407d7900(&DAT_1409ab3a0);
  return;
}


/* address=1407e7250 name=FUN_1407e7250 */

void FUN_1407e7250(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_1409ab3a0);
  return;
}


/* address=1407e7280 name=FUN_1407e7280 */

void FUN_1407e7280(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407d8880(param_1,param_2,param_3,&DAT_1409ab3a0);
  return;
}


/* address=1407e72c0 name=FUN_1407e72c0 */

void FUN_1407e72c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407dab60(param_1,param_2,&DAT_1409ab3a0);
  return;
}


/* address=1407e72f0 name=FUN_1407e72f0 */

undefined8 FUN_1407e72f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar2 = FUN_1407e7230();
      *(longlong *)(param_1 + 0x88) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x88);
  }
  return uVar1;
}


/* address=1407e7350 name=FUN_1407e7350 */

undefined8 FUN_1407e7350(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (0x11 < local_18) {
      return 0;
    }
    if (*(int *)(&DAT_1409ab610 + local_18 * 0xc) == param_1) break;
    local_18 = local_18 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(&DAT_1409ab614 + local_18 * 0xc);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(&DAT_1409ab618 + local_18 * 0xc);
  }
  return 1;
}


/* address=1407e73f0 name=FUN_1407e73f0 */

undefined8 FUN_1407e73f0(undefined4 *param_1,int param_2,int param_3)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (0x11 < local_18) {
      return 0;
    }
    if ((*(int *)(&DAT_1409ab614 + local_18 * 0xc) == param_2) &&
       (*(int *)(&DAT_1409ab618 + local_18 * 0xc) == param_3)) break;
    local_18 = local_18 + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(&DAT_1409ab610 + local_18 * 0xc);
  }
  return 1;
}


/* address=1407e7480 name=FUN_1407e7480 */

undefined * FUN_1407e7480(void)

{
  return &DAT_1409ab700;
}


/* address=1407e7490 name=FUN_1407e7490 */

undefined2 FUN_1407e7490(undefined2 *param_1)

{
  return *param_1;
}


/* address=1407e7510 name=FUN_1407e7510 */

undefined * FUN_1407e7510(void)

{
  return &DAT_1409ab758;
}


/* address=1407e7520 name=FUN_1407e7520 */

undefined2 FUN_1407e7520(undefined2 *param_1)

{
  return *param_1;
}


/* address=1407e7560 name=FUN_1407e7560 */

undefined * FUN_1407e7560(void)

{
  return &DAT_1409ab768;
}


/* address=1407e7580 name=FUN_1407e7580 */

undefined * FUN_1407e7580(void)

{
  return &DAT_1409ab788;
}


/* address=1407e7590 name=FUN_1407e7590 */

undefined2 FUN_1407e7590(undefined2 *param_1)

{
  return *param_1;
}


/* address=1407e75b0 name=FUN_1407e75b0 */

void FUN_1407e75b0(longlong param_1)

{
  (**(code **)(param_1 + 8))();
  return;
}


/* address=1407e75d0 name=FUN_1407e75d0 */

void FUN_1407e75d0(undefined8 param_1)

{
  FUN_1407e86e0(param_1,0,0x48);
  return;
}


/* address=1407e7600 name=FUN_1407e7600 */

void FUN_1407e7600(void)

{
  return;
}


/* address=1407e7690 name=FUN_1407e7690 */

undefined8 FUN_1407e7690(undefined8 param_1,undefined8 param_2)

{
  FUN_1407e8690(param_1,param_2,0x48);
  return 1;
}


/* address=1407e77a0 name=FUN_1407e77a0 */

undefined8 FUN_1407e77a0(undefined8 *param_1)

{
  return *param_1;
}


/* address=1407e77c0 name=FUN_1407e77c0 */

bool FUN_1407e77c0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  bool bVar1;
  
  bVar1 = *(ulonglong *)(*param_1 + 8) <= param_4;
  if (bVar1) {
    FUN_1407e8690(param_2,param_1 + 5,*(undefined8 *)(*param_1 + 8));
    *param_3 = *(undefined8 *)(*param_1 + 8);
  }
  else {
    FUN_1407c2680(6,0,0x89,s_D__a_1_s_target_release_build_bo_140c02100,0x17f);
  }
  return bVar1;
}


/* address=1407e7900 name=FUN_1407e7900 */

void FUN_1407e7900(longlong param_1)

{
  FUN_1407e86e0(param_1,0,0x2c8);
  FUN_140780940(param_1 + 0x18);
  return;
}


/* address=1407e7940 name=FUN_1407e7940 */

void FUN_1407e7940(longlong param_1)

{
  FUN_140780ac0(param_1 + 0x18);
  return;
}


/* address=1407e79f0 name=FUN_1407e79f0 */

void FUN_1407e79f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_a8;
  FUN_14077f730(local_38,*(undefined8 *)(param_5 + 0x18));
  local_48 = *(undefined8 *)(param_5 + 0x18);
  local_50 = local_38;
  local_58 = param_11;
  local_60 = param_10;
  local_68 = param_9;
  local_70 = param_8;
  local_78 = param_7;
  local_80 = param_6;
  local_88 = param_5;
  FUN_1407e7af0(param_1,param_2,param_3,param_4);
  FUN_140805d70(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=1407e7af0 name=FUN_1407e7af0 */

void FUN_1407e7af0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_10 = DAT_140c05940 ^ (ulonglong)auStack_88;
  FUN_1407e7900(param_1);
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
    iVar1 = FUN_1407e93b0(param_1,0,local_30,local_38);
    if (iVar1 != 0) goto LAB_1407e7c38;
  }
  FUN_1407e7940(param_1);
LAB_1407e7c38:
  FUN_140805d70(local_10 ^ (ulonglong)auStack_88);
  return;
}


/* address=1407e7c60 name=FUN_1407e7c60 */

void FUN_1407e7c60(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_140c05940 ^ (ulonglong)auStack_68;
  FUN_1407e7900(param_1);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *param_1 = *param_2;
  param_1[2] = param_3;
  param_1[1] = param_4;
  local_48 = param_6;
  iVar1 = (**(code **)(*param_2 + 0x40))(param_2,local_30,&local_38,param_5);
  if (iVar1 != 0) {
    local_40 = param_8;
    local_48 = param_7;
    iVar1 = FUN_1407e93b0(param_1,0,local_30,local_38);
    if (iVar1 != 0) goto LAB_1407e7d4c;
  }
  FUN_1407e7940(param_1);
LAB_1407e7d4c:
  FUN_140805d70(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=1407e7e80 name=FUN_1407e7e80 */

void FUN_1407e7e80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_10 = DAT_140c05940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(*param_5 + 0x48) == 0) {
    local_68 = CONCAT44(local_68._4_4_,0x285);
    FUN_1407c2680(6,0,0x7d,s_D__a_1_s_target_release_build_bo_140c02200);
  }
  else {
    FUN_1407e7900(param_1);
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
      iVar1 = FUN_1407e93b0(param_1,2,local_30,local_38);
      if (iVar1 != 0) goto LAB_1407e8008;
    }
    FUN_1407e7940(param_1);
  }
LAB_1407e8008:
  FUN_140805d70(local_10 ^ (ulonglong)auStack_88);
  return;
}


/* address=1407e81b0 name=FUN_1407e81b0 */

void FUN_1407e81b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x2c0) == 0) {
    if (*(longlong *)(param_1 + 0x2b8) == -1) {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,0x2d1);
      FUN_1407c2680(6,0,0x45,s_D__a_1_s_target_release_build_bo_140c02400);
    }
    else {
      local_38 = FUN_1407808e0(*(undefined8 *)(param_1 + 0x18));
      FUN_1407e97d0(param_1,local_30,local_38);
      local_40 = param_8;
      local_48 = param_7;
      local_50 = param_6;
      local_58 = param_5;
      local_60 = local_38;
      local_68 = local_30;
      iVar1 = FUN_140780d20(param_1 + 0x18,param_2,param_3,param_4);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 0x2b8) = *(longlong *)(param_1 + 0x2b8) + 1;
      }
    }
  }
  else {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x2cd);
    FUN_1407c2680(6,0,0x42,s_D__a_1_s_target_release_build_bo_140c023a0);
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=1407e8340 name=FUN_1407e8340 */

void FUN_1407e8340(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x2c0) == 0) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x2e5);
    FUN_1407c2680(6,0,0x42,s_D__a_1_s_target_release_build_bo_140c02460);
  }
  else if (*(longlong *)(param_1 + 0x2b8) == -1) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x2e9);
    FUN_1407c2680(6,0,0x45,s_D__a_1_s_target_release_build_bo_140c024c0);
  }
  else {
    local_38 = FUN_1407808e0(*(undefined8 *)(param_1 + 0x18));
    FUN_1407e97d0(param_1,local_30,local_38);
    local_40 = param_8;
    local_48 = param_7;
    local_50 = param_6;
    local_58 = param_5;
    local_60 = local_38;
    local_68 = local_30;
    iVar1 = FUN_140780b00(param_1 + 0x18,param_2,param_3,param_4);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x2b8) = *(longlong *)(param_1 + 0x2b8) + 1;
    }
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=1407e8650 name=FUN_1407e8650 */

undefined8 FUN_1407e8650(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=1407e8670 name=FUN_1407e8670 */

undefined8 FUN_1407e8670(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=1407e8690 name=FUN_1407e8690 */

undefined8 FUN_1407e8690(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e86e0 name=FUN_1407e86e0 */

undefined8 FUN_1407e86e0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407e8720 name=FUN_1407e8720 */

void FUN_1407e8720(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_1407df950(param_1,param_2,sVar1);
  return;
}


/* address=1407e8760 name=FUN_1407e8760 */

undefined4
FUN_1407e8760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined local_38 [56];
  
  iVar1 = FUN_1407df140(local_38,0);
  if (iVar1 != 0) {
    iVar1 = FUN_1407e8720(local_38,"HPKE-v1");
    if (iVar1 != 0) {
      iVar1 = FUN_1407df950(local_38,param_6,param_7);
      if (iVar1 != 0) {
        iVar1 = FUN_1407e8720(local_38,param_8);
        if (iVar1 != 0) {
          iVar1 = FUN_1407df950(local_38,param_9,param_10);
          if (iVar1 != 0) {
            uVar2 = FUN_1407df740(local_38);
            uVar3 = FUN_1407df6c0(local_38);
            iVar1 = FUN_1407a3400(param_2,param_3,param_1,uVar3,uVar2,param_4,param_5);
            if (iVar1 != 0) {
              local_48 = 1;
              goto LAB_1407e8875;
            }
          }
        }
      }
    }
  }
  local_48 = 0;
LAB_1407e8875:
  FUN_1407df200(local_38);
  return local_48;
}


/* address=1407e88a0 name=FUN_1407e88a0 */

undefined4
FUN_1407e88a0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined local_38 [56];
  
  iVar1 = FUN_1407df140(local_38,0);
  if (iVar1 != 0) {
    iVar1 = FUN_1407dfb70(local_38,param_3 & 0xffff);
    if (iVar1 != 0) {
      iVar1 = FUN_1407e8720(local_38,"HPKE-v1");
      if (iVar1 != 0) {
        iVar1 = FUN_1407df950(local_38,param_6,param_7);
        if (iVar1 != 0) {
          iVar1 = FUN_1407e8720(local_38,param_8);
          if (iVar1 != 0) {
            iVar1 = FUN_1407df950(local_38,param_9,param_10);
            if (iVar1 != 0) {
              uVar2 = FUN_1407df740(local_38);
              uVar3 = FUN_1407df6c0(local_38);
              iVar1 = FUN_1407a34d0(param_2,param_3,param_1,param_4,param_5,uVar3,uVar2);
              if (iVar1 != 0) {
                local_48 = 1;
                goto LAB_1407e89cc;
              }
            }
          }
        }
      }
    }
  }
  local_48 = 0;
LAB_1407e89cc:
  FUN_1407df200(local_38);
  return local_48;
}


/* address=1407e89f0 name=FUN_1407e89f0 */

void FUN_1407e89f0(undefined2 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_c8;
  local_68 = 0x4b;
  local_67 = 0x45;
  local_66 = 0x4d;
  local_65 = (undefined)((ushort)param_1 >> 8);
  local_64 = (undefined)param_1;
  local_80 = param_6;
  local_88 = param_5;
  local_90 = s_eae_prk_140c01d80;
  local_98 = 5;
  local_a0 = &local_68;
  local_a8 = 0;
  iVar1 = FUN_1407e8760(param_2,local_58,&local_70,0);
  if (iVar1 != 0) {
    local_80 = param_8;
    local_88 = param_7;
    local_90 = s_shared_secret_140c01d88;
    local_98 = 5;
    local_a0 = &local_68;
    local_a8 = local_70;
    iVar1 = FUN_1407e88a0(param_2,param_3,param_4,local_58);
    if (iVar1 != 0) {
      local_78 = 1;
      goto LAB_1407e8b27;
    }
  }
  local_78 = 0;
LAB_1407e8b27:
  FUN_140805d70(local_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=1407e9300 name=FUN_1407e9300 */

undefined4 FUN_1407e9300(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined local_40 [64];
  
  FUN_1407df1b0(local_40,param_2,10);
  iVar1 = FUN_1407e8720(local_40,&DAT_140c021c0);
  if ((((iVar1 != 0) && (iVar1 = FUN_1407dfb70(local_40,*(undefined2 *)*param_1), iVar1 != 0)) &&
      (iVar1 = FUN_1407dfb70(local_40,*(undefined2 *)param_1[2]), iVar1 != 0)) &&
     (iVar1 = FUN_1407dfb70(local_40,*(undefined2 *)param_1[1]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=1407e93b0 name=FUN_1407e93b0 */

void FUN_1407e93b0(longlong param_1,undefined param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_288;
  iVar1 = FUN_1407e9300(param_1,local_1d0);
  if (iVar1 != 0) {
    local_238 = (**(code **)(*(longlong *)(param_1 + 0x10) + 8))();
    local_240 = 0;
    local_248 = (undefined *)0x0;
    local_250 = s_psk_id_hash_140c021c8;
    local_258 = 10;
    local_260 = local_1d0;
    local_268 = 0;
    iVar1 = FUN_1407e8760(local_238,local_178,&local_210,0);
    if (iVar1 != 0) {
      local_240 = param_6;
      local_248 = param_5;
      local_250 = s_info_hash_140c021d8;
      local_258 = 10;
      local_260 = local_1d0;
      local_268 = 0;
      iVar1 = FUN_1407e8760(local_238,local_138,&local_208,0);
      if (iVar1 != 0) {
        FUN_1407df1b0(local_200,local_f8,0x81);
        iVar1 = FUN_1407dfb40(local_200,param_2);
        if ((((iVar1 != 0) && (iVar1 = FUN_1407df950(local_200,local_178,local_210), iVar1 != 0)) &&
            (iVar1 = FUN_1407df950(local_200,local_138,local_208), iVar1 != 0)) &&
           (iVar1 = FUN_1407df270(local_200,0,&local_228), iVar1 != 0)) {
          local_240 = 0;
          local_248 = (undefined *)0x0;
          local_250 = s_secret_140c021e4;
          local_258 = 10;
          local_260 = local_1d0;
          local_268 = param_4;
          iVar1 = FUN_1407e8760(local_238,local_1b8,&local_220,param_3);
          if (iVar1 != 0) {
            local_230 = FUN_1407e75b0(*(undefined8 *)(param_1 + 8));
            local_218 = FUN_1407808c0(local_230);
            local_240 = local_228;
            local_248 = local_f8;
            local_250 = &DAT_140c021ec;
            local_258 = 10;
            local_260 = local_1d0;
            local_268 = local_220;
            iVar1 = FUN_1407e88a0(local_238,local_68,local_218,local_1b8);
            if (iVar1 != 0) {
              local_260 = (undefined *)0x0;
              local_268 = 0;
              iVar1 = FUN_140780a30(param_1 + 0x18,local_230,local_68,local_218);
              if (iVar1 != 0) {
                uVar2 = FUN_1407808e0(local_230);
                local_240 = local_228;
                local_248 = local_f8;
                local_250 = s_base_nonce_140c021f0;
                local_258 = 10;
                local_260 = local_1d0;
                local_268 = local_220;
                iVar1 = FUN_1407e88a0(local_238,param_1 + 0x260,uVar2,local_1b8);
                if (iVar1 != 0) {
                  uVar2 = FUN_140756670(local_238);
                  local_240 = local_228;
                  local_248 = local_f8;
                  local_250 = &DAT_140c021fc;
                  local_258 = 10;
                  local_260 = local_1d0;
                  local_268 = local_220;
                  FUN_1407e88a0(local_238,param_1 + 0x278,uVar2,local_1b8);
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_288);
  return;
}


/* address=1407e97d0 name=FUN_1407e97d0 */

void FUN_1407e97d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  if (param_3 < 8) {
    FID_conflict__assert((wchar_t *)s_n_140c02380,(wchar_t *)s_D_140c022c0,0x2b9);
  }
  FUN_1407e86e0(param_2,0,param_3);
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


/* address=1407e98f0 name=FUN_1407e98f0 */

int FUN_1407e98f0(undefined8 *param_1,int *param_2)

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
    iVar1 = FUN_1407ea9b0(param_2[1]);
    if (iVar1 == -1) {
      FUN_1407c2680(0xc,0,0xb9,s_D__a_1_s_target_release_build_bo_140c02820,0x17e);
      iVar1 = -1;
    }
    else {
      local_30 = local_28;
      local_20 = 0;
      local_28[0] = 0;
      local_18 = 0;
      iVar1 = FUN_14083dee0(&local_30,*(undefined8 *)(param_2 + 2),(longlong)*param_2,iVar1,0x2000);
      if (-1 < iVar1) {
        *param_1 = local_20;
        iVar1 = local_28[0];
      }
    }
  }
  return iVar1;
}


/* address=1407e99d0 name=FUN_1407e99d0 */

void FUN_1407e99d0(undefined8 param_1,int *param_2)

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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_98;
  FUN_1407dce80(local_50,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  iVar1 = FUN_1407de390(local_50,&local_40,0);
  if (iVar1 == 0) {
    FUN_1407c04e0(param_1,s_Bad_time_value_140c028c8);
  }
  else {
    local_60 = local_2c + 0x76c;
    local_68 = local_40;
    local_70 = local_3c;
    local_78 = local_38;
    iVar1 = FUN_14083b4b0(param_1,s__s__2d__02d__02d__02d__d_GMT_140c028d8,
                          (&PTR_DAT_1409ab7c0)[local_30],local_34);
    local_58 = (uint)(0 < iVar1);
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=1407e9ad0 name=FUN_1407e9ad0 */

void FUN_1407e9ad0(undefined8 param_1,int *param_2)

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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_98;
  FUN_1407dce80(local_50,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  iVar1 = FUN_1407de350(local_50,&local_40,0);
  if (iVar1 == 0) {
    FUN_1407c04e0(param_1,s_Bad_time_value_140c02898);
  }
  else {
    local_60 = local_2c + 0x76c;
    local_68 = local_40;
    local_70 = local_3c;
    local_78 = local_38;
    iVar1 = FUN_14083b4b0(param_1,s__s__2d__02d__02d__02d__d_GMT_140c028a8,
                          (&PTR_DAT_1409ab7c0)[local_30],local_34);
    local_58 = (uint)(0 < iVar1);
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=1407e9bd0 name=FUN_1407e9bd0 */

undefined8 FUN_1407e9bd0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x17) {
    uVar1 = FUN_1407e99d0(param_1,param_2);
  }
  else if (*(int *)(param_2 + 4) == 0x18) {
    uVar1 = FUN_1407e9ad0(param_1,param_2);
  }
  else {
    FUN_1407c04e0(param_1,s_Bad_time_value_140c02888);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=1407e9c40 name=FUN_1407e9c40 */

void FUN_1407e9c40(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined auStack_98 [32];
  int local_78;
  int local_74;
  longlong local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_98;
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
        iVar1 = FUN_1407c0340(param_1,local_68,local_78);
        if (iVar1 < 1) goto LAB_1407e9d8d;
        local_78 = 0;
      }
    }
    if (0 < local_78) {
      FUN_1407c0340(param_1,local_68,local_78);
    }
  }
LAB_1407e9d8d:
  FUN_140805d70(local_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=1407e9db0 name=FUN_1407e9db0 */

int FUN_1407e9db0(longlong param_1,undefined4 *param_2,uint param_3)

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
    local_10 = (char *)FUN_14083de90(local_1c);
    sVar2 = strlen(local_10);
    local_24 = local_24 + (int)sVar2;
    iVar1 = FUN_1407ea090(param_1,local_10,local_24);
    if ((iVar1 == 0) || (iVar1 = FUN_1407ea090(param_1,&DAT_140c02738,1), iVar1 == 0)) {
      return -1;
    }
    local_24 = local_24 + 1;
  }
  if ((param_3 & 0x80) == 0) {
    if ((param_3 & 0x20) == 0) {
      local_20 = FUN_1407ea9b0(local_1c);
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
    iVar1 = FUN_1407ea880(param_3,param_1,param_2);
    if (iVar1 < 0) {
      local_24 = -1;
    }
    else {
      local_24 = local_24 + iVar1;
    }
  }
  else {
    local_28[0] = '\0';
    local_14 = FUN_1407ea410(*(undefined8 *)(param_2 + 2),*param_2,local_20,param_3,local_28,0);
    if (local_14 < 0) {
      local_24 = -1;
    }
    else {
      local_24 = local_24 + local_14;
      if (local_28[0] != '\0') {
        local_24 = local_24 + 2;
      }
      if ((param_1 != 0) &&
         ((((local_28[0] != '\0' && (iVar1 = FUN_1407ea090(param_1,&DAT_140c02814,1), iVar1 == 0))
           || (iVar1 = FUN_1407ea410(*(undefined8 *)(param_2 + 2),*param_2,local_20,param_3,0,
                                     param_1), iVar1 < 0)) ||
          ((local_28[0] != '\0' && (iVar1 = FUN_1407ea090(param_1,&DAT_140c02818,1), iVar1 == 0)))))
         ) {
        local_24 = -1;
      }
    }
  }
  return local_24;
}


/* address=1407ea090 name=FUN_1407ea090 */

undefined4 FUN_1407ea090(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_1407c0340(param_1,param_2,param_3), iVar1 != param_3)) {
    return 0;
  }
  return 1;
}


/* address=1407ea0f0 name=FUN_1407ea0f0 */

undefined4 FUN_1407ea0f0(byte param_1)

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


/* address=1407ea130 name=FUN_1407ea130 */

void FUN_1407ea130(uint param_1,uint param_2,undefined *param_3,undefined8 param_4,int param_5,
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
  
  local_10 = DAT_140c05940 ^ (ulonglong)auStack_58;
  local_res8 = (undefined)param_1;
  local_38[0] = local_res8;
  if (param_1 < 0x10000) {
    if (param_1 < 0x100) {
      if (((param_2 & 4) == 0) || (param_1 < 0x80)) {
        if (((param_2 & 2) == 0) || (iVar1 = FUN_1407ea0f0(local_res8), iVar1 == 0)) {
          if ((param_2 & 1) == 0) {
            if (((param_2 & 0xf) == 0) || (param_1 != 0x5c)) {
              iVar1 = FUN_1407ea090(param_4,local_38,1);
              if (iVar1 == 0) {
                local_2c = 0xffffffff;
              }
              else {
                local_2c = 1;
              }
              goto LAB_1407ea3eb;
            }
            _snprintf(local_20,0x10,&DAT_140c02668,0x5c);
          }
          else if ((param_1 == 0x5c) || (param_1 == 0x22)) {
            _snprintf(local_20,0x10,&DAT_140c02660,(ulonglong)param_1);
          }
          else {
            if ((((((param_1 != 0x2c) && (param_1 != 0x2b)) && (param_1 != 0x3c)) &&
                 ((param_1 != 0x3e && (param_1 != 0x3b)))) &&
                ((param_5 == 0 || ((param_1 != 0x20 && (param_1 != 0x23)))))) &&
               ((param_6 == 0 || (param_1 != 0x20)))) {
              iVar1 = FUN_1407ea090(param_4,local_38,1);
              if (iVar1 == 0) {
                local_30 = 0xffffffff;
              }
              else {
                local_30 = 1;
              }
              goto LAB_1407ea3eb;
            }
            if ((param_2 & 8) != 0) {
              if (param_3 != (undefined *)0x0) {
                *param_3 = 1;
              }
              iVar1 = FUN_1407ea090(param_4,local_38,1);
              if (iVar1 == 0) {
                local_34 = 0xffffffff;
              }
              else {
                local_34 = 1;
              }
              goto LAB_1407ea3eb;
            }
            _snprintf(local_20,0x10,&DAT_140c02664,(ulonglong)param_1);
          }
        }
        else {
          _snprintf(local_20,0x10,s___02X_140c02658,(ulonglong)param_1);
        }
      }
      else {
        _snprintf(local_20,0x10,s___02X_140c02650,(ulonglong)param_1);
      }
    }
    else {
      _snprintf(local_20,0x10,s__U_04X_140c02648,(ulonglong)param_1);
    }
  }
  else {
    _snprintf(local_20,0x10,s__W_08X_140c02640,(ulonglong)param_1);
  }
  sVar2 = strlen(local_20);
  local_28 = (undefined4)sVar2;
  iVar1 = FUN_1407ea090(param_4,local_20,sVar2 & 0xffffffff);
  if (iVar1 == 0) {
    local_24 = 0xffffffff;
  }
  else {
    local_24 = local_28;
  }
LAB_1407ea3eb:
  FUN_140805d70(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=1407ea410 name=FUN_1407ea410 */

void FUN_1407ea410(longlong param_1,int param_2,int param_3,uint param_4,undefined8 param_5,
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
  
  local_10 = DAT_140c05940 ^ (ulonglong)auStack_d8;
  local_a4 = param_3;
  if (param_3 == 0x1000) {
    local_68 = FUN_140839eb0;
    local_a0 = 0x96;
  }
  else if (param_3 == 0x1001) {
    local_68 = (code *)&LAB_14083a040;
    local_a0 = 0x44;
  }
  else if (param_3 == 0x1002) {
    local_68 = FUN_14083a090;
    local_a0 = 0x8e;
  }
  else {
    if (param_3 != 0x1004) {
      FID_conflict__assert((wchar_t *)&DAT_140c02734,(wchar_t *)s_D_140c02670,0x9c);
      goto LAB_1407ea77d;
    }
    local_68 = FUN_14083a0f0;
    local_a0 = 0x95;
  }
  FUN_1407dce80(local_58,param_1,(longlong)param_2);
  local_a8 = 0;
  while (lVar2 = FUN_1407dcf10(local_58), lVar2 != 0) {
    lVar2 = FUN_1407dcef0(local_58);
    local_90 = (uint)(lVar2 == param_1);
    local_78 = local_90;
    iVar1 = (*local_68)(local_58,&local_74);
    if (iVar1 == 0) {
      local_b8 = 0xa7;
      FUN_1407c2680(0xc,0,local_a0,s_D__a_1_s_target_release_build_bo_140c02740);
      break;
    }
    lVar2 = FUN_1407dcf10(local_58);
    local_8c = (uint)(lVar2 == 0);
    local_7c = local_8c;
    if ((param_4 & 0x10) == 0) {
      local_b0 = local_8c;
      local_b8 = local_78;
      local_70 = FUN_1407ea130(local_74,param_4,param_5,param_6);
      if (local_70 < 0) break;
      local_a8 = local_a8 + local_70;
    }
    else {
      FUN_1407df1b0(local_48,local_18,6);
      iVar1 = FUN_14083a190(local_48,local_74);
      if (iVar1 == 0) {
        local_b8 = 0xb0;
        FUN_1407c2680(0xc,0,0x44,s_D__a_1_s_target_release_build_bo_140c027b0);
        break;
      }
      local_60 = FUN_1407df740(local_48);
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
        local_80 = FUN_1407ea130(local_18[local_98],param_4,param_5,param_6);
        if (local_80 < 0) goto LAB_1407ea77d;
        local_a8 = local_a8 + local_80;
      }
    }
  }
LAB_1407ea77d:
  FUN_140805d70(local_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=1407ea7a0 name=FUN_1407ea7a0 */

int FUN_1407ea7a0(longlong param_1,byte *param_2,int param_3)

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
      iVar1 = FUN_1407ea090(param_1,&local_28,2);
      if (iVar1 == 0) {
        return -1;
      }
    }
  }
  return param_3 << 1;
}


/* address=1407ea880 name=FUN_1407ea880 */

int FUN_1407ea880(uint param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 local_28;
  int local_20 [2];
  undefined4 *local_18;
  
  iVar1 = FUN_1407ea090(param_2,&DAT_140c0266c,1);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else if ((param_1 & 0x200) == 0) {
    iVar1 = FUN_1407ea7a0(param_2,*(undefined8 *)(param_3 + 2),*param_3);
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
    iVar1 = FUN_1407d7730(local_20,&local_28);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_1407ea7a0(param_2,local_28,iVar1);
      FUN_1407cd0f0(local_28);
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


/* address=1407ea9b0 name=FUN_1407ea9b0 */

undefined8 FUN_1407ea9b0(undefined4 param_1)

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


/* address=1407ead00 name=FUN_1407ead00 */

undefined8 FUN_1407ead00(longlong param_1)

{
  FUN_1407d3950(param_1 + 0x80);
  return 1;
}


/* address=1407ead30 name=FUN_1407ead30 */

void FUN_1407ead30(longlong param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_1407d39a0(param_1 + 0x80), iVar1 != 0)) {
    FUN_1407f6860(param_1,0);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407eb6e0 name=FUN_1407eb6e0 */

void FUN_1407eb6e0(undefined8 param_1)

{
  FUN_1407f6cd0(param_1);
  return;
}


/* address=1407eb730 name=FUN_1407eb730 */

void FUN_1407eb730(longlong param_1)

{
  *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) & 0xfe;
  *(undefined **)(param_1 + 0x28) = &LAB_14084b620;
  return;
}


/* address=1407eb770 name=FUN_1407eb770 */

void FUN_1407eb770(longlong param_1)

{
  *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) | 1;
  *(undefined **)(param_1 + 0x28) = &LAB_140851a00;
  return;
}


/* address=1407eb7b0 name=FUN_1407eb7b0 */

byte FUN_1407eb7b0(longlong param_1)

{
  return *(byte *)(param_1 + 0xa4) & 1;
}


/* address=1407eb7d0 name=FUN_1407eb7d0 */

undefined FUN_1407eb7d0(undefined8 *param_1)

{
  return *(undefined *)*param_1;
}


/* address=1407eb7f0 name=FUN_1407eb7f0 */

void FUN_1407eb7f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1407eb940(param_1);
  if ((param_2 != lVar1) || (lVar1 = FUN_1407eb970(param_1), param_3 != lVar1)) {
    if ((param_2 != 0) && (param_2 == param_3)) {
      FUN_1407c0130(param_2);
    }
    lVar1 = FUN_1407eb940(param_1);
    if (param_2 == lVar1) {
      FUN_1407eb910(param_1,param_3);
    }
    else {
      lVar1 = FUN_1407eb970(param_1);
      if (param_3 == lVar1) {
        lVar1 = FUN_1407eb940(param_1);
        lVar2 = FUN_1407eb970(param_1);
        if (lVar1 != lVar2) {
          FUN_1407eb8e0(param_1,param_2);
          return;
        }
      }
      FUN_1407eb8e0(param_1,param_2);
      FUN_1407eb910(param_1,param_3);
    }
  }
  return;
}


/* address=1407eb8e0 name=FUN_1407eb8e0 */

void FUN_1407eb8e0(longlong param_1,undefined8 param_2)

{
  FUN_1407f4f10(param_1 + 0x18,param_2);
  return;
}


/* address=1407eb910 name=FUN_1407eb910 */

void FUN_1407eb910(longlong param_1,undefined8 param_2)

{
  FUN_1407f4f10(param_1 + 0x20,param_2);
  return;
}


/* address=1407eb940 name=FUN_1407eb940 */

void FUN_1407eb940(longlong param_1)

{
  FUN_1407b7160(param_1 + 0x18);
  return;
}


/* address=1407eb970 name=FUN_1407eb970 */

void FUN_1407eb970(longlong param_1)

{
  FUN_1407b7160(param_1 + 0x20);
  return;
}


/* address=1407eb9c0 name=FUN_1407eb9c0 */

undefined4 FUN_1407eb9c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 local_18 [2];
  longlong local_10;
  
  local_18[0] = 0xffffffff;
  uVar1 = FUN_1407eb940(param_1);
  local_10 = FUN_1407c0c20(uVar1,0x100);
  if (local_10 != 0) {
    FUN_14083e7e0(local_10,local_18);
  }
  return local_18[0];
}


/* address=1407ebcd0 name=FUN_1407ebcd0 */

int FUN_1407ebcd0(longlong param_1)

{
  int iVar1;
  char local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined8 local_18;
  
  FUN_1407f3520(param_1);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_1407c2680(0x10,0,0x86,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                  ,0x354);
    local_24 = -1;
  }
  else {
    iVar1 = FUN_1407ed740(param_1);
    if (iVar1 == 0) {
      local_24 = 1;
    }
    else {
      local_18 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0x118);
      local_28[0] = '\0';
      local_24 = FUN_140849810(local_18,local_28);
      if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
        local_20 = 0x1002;
      }
      else {
        local_20 = 0x2002;
      }
      FUN_1407f28e0(param_1,local_20,local_24);
      if (0 < local_24) {
        if (local_28[0] == '\0') {
          FUN_1407f5c20(*(longlong *)(param_1 + 0x30) + 0x118,0);
          FUN_1407f42e0(param_1);
        }
        local_24 = 1;
      }
    }
  }
  return local_24;
}


/* address=1407ebf40 name=FUN_1407ebf40 */

int FUN_1407ebf40(longlong param_1,undefined8 param_2,int param_3)

{
  __uint64 _Var1;
  __uint64 *p_Var2;
  undefined8 uVar3;
  int local_20;
  __uint64 local_18;
  __uint64 local_10 [2];
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    local_20 = FUN_1407f45c0(param_1);
    if ((0 < local_20) && (local_20 = param_3, 0 < param_3)) {
      local_18 = (__uint64)param_3;
      local_10[0] = FUN_1407f5090(*(longlong *)(param_1 + 0x30) + 0x80);
      p_Var2 = std::_Min_value<unsigned___int64>(local_10,&local_18);
      _Var1 = *p_Var2;
      uVar3 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0x80);
      FUN_1407f27e0(param_2,uVar3,_Var1);
      local_20 = (int)_Var1;
    }
  }
  else {
    FUN_1407c2680(0x10,0,0x42,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                  ,0x418);
    local_20 = -1;
  }
  return local_20;
}


/* address=1407ec030 name=FUN_1407ec030 */

void FUN_1407ec030(longlong param_1)

{
  FUN_1407f5090(*(longlong *)(param_1 + 0x30) + 0x80);
  return;
}


/* address=1407ecbc0 name=FUN_1407ecbc0 */

undefined4 FUN_1407ecbc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}


/* address=1407ecd00 name=FUN_1407ecd00 */

undefined4 FUN_1407ecd00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}


/* address=1407ecf70 name=FUN_1407ecf70 */

void FUN_1407ecf70(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1407b7170(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = FUN_1407b7160(param_1 + 8);
    uVar3 = FUN_1407b7160(lVar2 + 0x20);
    FUN_140819920(uVar3);
  }
  return;
}


/* address=1407ed1d0 name=FUN_1407ed1d0 */

undefined4 FUN_1407ed1d0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_18;
  
  cVar1 = FUN_1407f41c0(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_1407b7170(*(longlong *)(param_1 + 0x30) + 0x118);
    if ((cVar1 == '\0') ||
       (lVar2 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0x118),
       *(char *)(lVar2 + 0x622) < '\0')) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=1407ed260 name=FUN_1407ed260 */

undefined FUN_1407ed260(longlong param_1,undefined8 param_2)

{
  undefined uVar1;
  uint local_14;
  
  if ((*(byte *)(param_1 + 0x239) >> 3 & 1) == 0) {
    local_14 = FUN_140780880();
  }
  else {
    local_14 = (uint)(*(byte *)(param_1 + 0x239) >> 4 & 1);
  }
  uVar1 = FUN_140841360(param_1 + 0x28,local_14 != 0,param_2,1);
  return uVar1;
}


/* address=1407ed3a0 name=FUN_1407ed3a0 */

undefined FUN_1407ed3a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined uVar2;
  longlong lVar3;
  uint local_14;
  
  cVar1 = FUN_1407b7170(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_1407b7160(param_1 + 8);
    if ((*(byte *)(lVar3 + 0xee) >> 3 & 1) == 0) {
      local_14 = FUN_140780880();
    }
    else {
      lVar3 = FUN_1407b7160(param_1 + 8);
      local_14 = (uint)(*(byte *)(lVar3 + 0xee) >> 4 & 1);
    }
    lVar3 = FUN_1407b7160(param_1 + 8);
    uVar2 = FUN_140841360(lVar3 + 0x18,local_14 != 0,param_2,1);
  }
  return uVar2;
}


/* address=1407ed600 name=FUN_1407ed600 */

undefined8 FUN_1407ed600(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = operator==<>(param_1 + 8,0);
    if (cVar1 == '\0') {
      lVar2 = FUN_1407b7160(param_1 + 8);
      cVar1 = FUN_1407b7170(lVar2 + 0x18);
      if (cVar1 == '\0') {
        lVar2 = FUN_1407b7160(param_1 + 0x68);
        uVar3 = FUN_1407b7160(lVar2 + 0x28);
        uVar3 = FUN_1407b7160(uVar3);
      }
      else {
        lVar2 = FUN_1407b7160(param_1 + 8);
        uVar3 = FUN_1407b7160(lVar2 + 0x18);
        uVar3 = FUN_1407b7160(uVar3);
      }
    }
    else {
      cVar1 = FUN_1407b7170(param_1 + 8);
      if (cVar1 == '\0') {
        FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x7df);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=1407ed740 name=FUN_1407ed740 */

undefined4 FUN_1407ed740(longlong param_1)

{
  longlong lVar1;
  undefined4 local_18;
  
  lVar1 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0x118);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x620) >> 3 & 1) != 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=1407ed7b0 name=FUN_1407ed7b0 */

byte FUN_1407ed7b0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  
  cVar1 = operator==<>(*(longlong *)(param_1 + 0x30) + 0x118,0);
  if (cVar1 == '\0') {
    lVar3 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0x118);
    bVar2 = *(byte *)(lVar3 + 0x621) >> 2 & 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


/* address=1407ed8e0 name=FUN_1407ed8e0 */

void FUN_1407ed8e0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14081b9e0(param_1);
  if ((((*(byte *)(param_1 + 0xa4) & 1) == 0) && (lVar2 != 0)) &&
     (cVar1 = FUN_1407b7170(lVar2 + 0x100), cVar1 != '\0')) {
    uVar3 = FUN_1407b7160(lVar2 + 0x100);
    uVar3 = FUN_1407e2440(uVar3);
    *param_2 = uVar3;
    uVar3 = FUN_1407b7160(lVar2 + 0x100);
    uVar3 = FUN_1407e2460(uVar3);
    *param_3 = uVar3;
    return;
  }
  *param_3 = 0;
  *param_2 = 0;
  return;
}


/* address=1407edc10 name=FUN_1407edc10 */

undefined8 FUN_1407edc10(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_10;
  
  lVar1 = FUN_14081b9e0(param_1);
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined8 *)(lVar1 + 200);
  }
  return local_10;
}


/* address=1407edc60 name=FUN_1407edc60 */

undefined4 FUN_1407edc60(longlong param_1)

{
  int iVar1;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 6 & 1) == 0) &&
     (iVar1 = FUN_1407f0450(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}


/* address=1407edf60 name=FUN_1407edf60 */

undefined4 FUN_1407edf60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}


/* address=1407ee500 name=FUN_1407ee500 */

undefined FUN_1407ee500(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar2 = (undefined *)FUN_1407f50f0(local_28,param_2,param_3);
  puVar4 = local_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_1408611d0(param_1 + 0x1d0,local_38);
  return uVar1;
}


/* address=1407ee570 name=FUN_1407ee570 */

undefined FUN_1407ee570(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined local_38 [16];
  undefined local_28 [24];
  
  cVar1 = FUN_1407b7170(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined *)FUN_1407f50f0(local_28,param_2,param_3);
    puVar5 = local_38;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar4 = FUN_1407b7160(param_1 + 8);
    uVar2 = FUN_1408611d0(lVar4 + 0x60,local_38);
  }
  return uVar2;
}


/* address=1407ee600 name=FUN_1407ee600 */

undefined FUN_1407ee600(longlong param_1,undefined8 param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_1408612e0(param_1 + 0x1d0,param_2);
  return uVar1;
}


/* address=1407ee640 name=FUN_1407ee640 */

undefined FUN_1407ee640(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined uVar2;
  longlong lVar3;
  
  cVar1 = FUN_1407b7170(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_1407b7160(param_1 + 8);
    uVar2 = FUN_1408612e0(lVar3 + 0x60,param_2);
  }
  return uVar2;
}


/* address=1407eeae0 name=FUN_1407eeae0 */

undefined8 FUN_1407eeae0(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    cVar1 = FUN_1407b7610(param_1 + 0x90,0);
    if (cVar1 == '\0') {
      uVar2 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0x1f8);
    }
    else {
      uVar2 = FUN_1407b7160(param_1 + 0x90);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1407ef810 name=FUN_1407ef810 */

void FUN_1407ef810(longlong param_1,int param_2)

{
  *(byte *)(param_1 + 0x238) = *(byte *)(param_1 + 0x238) & 0xef | (param_2 != 0) << 4;
  return;
}


/* address=1407ef870 name=FUN_1407ef870 */

void FUN_1407ef870(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1407b7170(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = FUN_1407b7160(param_1 + 8);
    *(byte *)(lVar2 + 0xed) = *(byte *)(lVar2 + 0xed) & 0xf7 | (param_2 != 0) << 3;
  }
  return;
}


/* address=1407efd30 name=FUN_1407efd30 */

int FUN_1407efd30(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    iVar1 = 0x4000;
  }
  else if (param_2 == 1) {
    iVar1 = 0;
  }
  else if (param_2 == 2) {
    if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
      if (0x4000 < (uint)(*(int *)(param_1 + 0x88) << 1)) {
        return *(int *)(param_1 + 0x88) << 1;
      }
    }
    else {
      lVar2 = FUN_1407b7160(param_1 + 8);
      if (((*(byte *)(lVar2 + 0xec) & 1) != 0) && (0x4000 < *(uint *)(param_1 + 0x88))) {
        return *(int *)(param_1 + 0x88);
      }
    }
    iVar1 = 0x4000;
  }
  else if (param_2 == 3) {
    iVar1 = 0x4000;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


/* address=1407f0450 name=FUN_1407f0450 */

byte FUN_1407f0450(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  
  cVar1 = operator==<>(*(longlong *)(param_1 + 0x30) + 0x118,0);
  if (cVar1 == '\0') {
    lVar3 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0x118);
    bVar2 = *(byte *)(lVar3 + 0x621) >> 3 & 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


/* address=1407f0cf0 name=FUN_1407f0cf0 */

undefined8 FUN_1407f0cf0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdd) >> 5 & 1) == 0) {
    FUN_1407c2680(0x10,0,0x42,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                  ,0x6da);
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_1407f41c0(param_1);
    if (cVar1 == '\0') {
      FUN_1407c2680(0x10,0,0xb6,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                    ,0x6df);
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_1407ed1d0(param_1);
      if (iVar2 != 0) {
        FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x6e4);
      }
      cVar1 = FUN_1407f5760(*(longlong *)(param_1 + 0x30) + 0x68);
      if ((cVar1 == '\0') || (*(int *)(*(longlong *)(param_1 + 0x30) + 0xb0) != 0)) {
        FUN_1407c2680(0x10,0,0xb6,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                      ,0x6ec);
        uVar3 = 0;
      }
      else {
        cVar1 = FUN_1407b7610(*(longlong *)(param_1 + 0x30) + 0x118,0);
        if (cVar1 == '\0') {
          uVar3 = FUN_140849640(local_18,param_1);
          FUN_1407f6d50(*(longlong *)(param_1 + 0x30) + 0x118,uVar3);
          FUN_1407f5be0(local_18);
          cVar1 = operator==<>(*(longlong *)(param_1 + 0x30) + 0x118,0);
          if (cVar1 == '\0') {
            *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdd) =
                 *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdd) & 0xdf;
            *(int *)(*(longlong *)(param_1 + 0x30) + 0xc0) =
                 *(int *)(*(longlong *)(param_1 + 0x30) + 0xc0) + 1;
            uVar3 = 1;
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          FUN_1407c2680(0x10,0,0x44,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                        ,0x6f2);
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}


/* address=1407f0f50 name=FUN_1407f0f50 */

undefined4 FUN_1407f0f50(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc0);
}


/* address=1407f1270 name=FUN_1407f1270 */

uint FUN_1407f1270(longlong param_1)

{
  uint local_18;
  
  local_18 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0xac) != 0) {
    local_18 = 2;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0xb0) == 1) {
    local_18 = local_18 | 1;
  }
  return local_18;
}


/* address=1407f27a0 name=FUN_1407f27a0 */

int FUN_1407f27a0(void *param_1,void *param_2,size_t param_3)

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


/* address=1407f27e0 name=FUN_1407f27e0 */

undefined8 FUN_1407f27e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407f2830 name=FUN_1407f2830 */

undefined8 FUN_1407f2830(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407f2870 name=FUN_1407f2870 */

bool FUN_1407f2870(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  iVar1 = FUN_1407df270(param_1,local_10,&local_18);
  if (iVar1 != 0) {
    FUN_1407f5520(param_2,local_10[0],local_18);
  }
  else {
    FUN_1407c2680(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                  ,0xc9);
  }
  return iVar1 != 0;
}


/* address=1407f28e0 name=FUN_1407f28e0 */

void FUN_1407f28e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  code *local_18;
  
  local_18 = (code *)0x0;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar1 = FUN_1407b7160(param_1 + 0x68);
    if (*(longlong *)(lVar1 + 0xc0) != 0) {
      lVar1 = FUN_1407b7160(param_1 + 0x68);
      local_18 = *(code **)(lVar1 + 0xc0);
    }
  }
  else {
    local_18 = *(code **)(param_1 + 0x60);
  }
  if (local_18 != (code *)0x0) {
    (*local_18)(param_1,param_2,param_3);
  }
  return;
}


/* address=1407f2980 name=FUN_1407f2980 */

void FUN_1407f2980(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (param_3 == 0) {
      local_18 = 2;
    }
    else if (param_3 == 0x100) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_14083f200(param_1);
    }
    uVar1 = FUN_1407f5090(param_4);
    uVar2 = FUN_1407b7160(param_4);
    (**(code **)(param_1 + 0x40))
              (param_2,local_18,param_3,uVar2,uVar1,param_1,*(undefined8 *)(param_1 + 0x48));
  }
  return;
}


/* address=1407f2a50 name=FUN_1407f2a50 */

undefined8 FUN_1407f2a50(longlong param_1,char *param_2,undefined *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined local_b0 [16];
  size_t local_a0;
  longlong local_98;
  size_t local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined local_78 [48];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  lVar3 = FUN_1407b7160(param_1 + 0x68);
  if (*(longlong *)(lVar3 + 0x1f0) == 0) {
    uVar4 = 1;
  }
  else {
    FUN_1407f6970(local_78);
    FUN_1407f5420(local_b0);
    local_a0 = strlen(param_2);
    lVar3 = FUN_1407f5090(param_3);
    local_98 = local_a0 + 0x43 + lVar3 * 2;
    uVar4 = FUN_1407b6fb0(local_78);
    iVar2 = FUN_1407df140(uVar4,local_98);
    if (iVar2 != 0) {
      local_90 = strlen(param_2);
      uVar4 = FUN_1407b6fb0(local_78);
      iVar2 = FUN_1407df950(uVar4,param_2,local_90);
      if (iVar2 != 0) {
        uVar4 = FUN_1407b6fb0(local_78);
        iVar2 = FUN_1407dfb40(uVar4,0x20);
        if (iVar2 != 0) {
          local_88 = local_28;
          puVar5 = (undefined *)FUN_1407f69c0(local_88,*(longlong *)(param_1 + 0x30) + 0x30);
          puVar6 = local_48;
          for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          uVar4 = FUN_1407b6fb0(local_78);
          cVar1 = FUN_1407f40d0(uVar4,local_48);
          if (cVar1 != '\0') {
            uVar4 = FUN_1407b6fb0(local_78);
            iVar2 = FUN_1407dfb40(uVar4,0x20);
            if (iVar2 != 0) {
              puVar5 = local_38;
              for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar5 = *param_3;
                param_3 = param_3 + 1;
                puVar5 = puVar5 + 1;
              }
              uVar4 = FUN_1407b6fb0(local_78);
              cVar1 = FUN_1407f40d0(uVar4,local_38);
              if (cVar1 != '\0') {
                uVar4 = FUN_1407b6fb0(local_78);
                iVar2 = FUN_1407dfb40(uVar4,0);
                if (iVar2 != 0) {
                  uVar4 = FUN_1407b6fb0(local_78);
                  cVar1 = FUN_1407f2870(uVar4,local_b0);
                  if (cVar1 != '\0') {
                    local_80 = FUN_1407b7160(local_b0);
                    lVar3 = FUN_1407b7160(param_1 + 0x68);
                    (**(code **)(lVar3 + 0x1f0))(param_1,local_80);
                    FUN_1407f54a0(local_b0);
                    FUN_1407f69a0(local_78);
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_1407f54a0(local_b0);
    FUN_1407f69a0(local_78);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=1407f2cc0 name=FUN_1407f2cc0 */

int FUN_1407f2cc0(longlong *param_1,undefined8 *param_2,undefined *param_3,undefined *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_28 [24];
  
  *param_2 = 0;
  cVar1 = FUN_1407f4080(param_1);
  if (cVar1 == '\0') {
    *param_3 = 0;
    iVar2 = 4;
  }
  else {
    puVar4 = local_28;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *param_4;
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,local_28);
    if (iVar2 == 4) {
      FUN_1407f3560(param_1);
    }
  }
  return iVar2;
}


/* address=1407f2d60 name=FUN_1407f2d60 */

int FUN_1407f2d60(longlong *param_1,undefined8 *param_2,undefined *param_3,undefined *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_28 [24];
  
  *param_2 = 0;
  cVar1 = FUN_1407f4080(param_1);
  if (cVar1 == '\0') {
    *param_3 = 0;
    iVar2 = 4;
  }
  else {
    puVar4 = local_28;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *param_4;
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,local_28);
    if (iVar2 == 4) {
      FUN_1407f3560(param_1);
    }
  }
  return iVar2;
}


/* address=1407f2e00 name=FUN_1407f2e00 */

int FUN_1407f2e00(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined *param_4,
                 undefined *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_28 [24];
  
  *param_3 = 0;
  cVar1 = FUN_1407f4080(param_1);
  if (cVar1 == '\0') {
    *param_4 = 0;
    iVar2 = 4;
  }
  else {
    puVar4 = local_28;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *param_5;
      param_5 = param_5 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4,local_28);
    if (iVar2 == 4) {
      FUN_1407f3560(param_1);
    }
  }
  return iVar2;
}


/* address=1407f2ec0 name=FUN_1407f2ec0 */

longlong * FUN_1407f2ec0(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 10) = 0;
  param_1[2] = 0;
  FUN_1407b75e0(param_1 + 3);
  FUN_1407b75e0(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1407b75e0(param_1 + 7);
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1407b75e0(param_1 + 10);
  param_1[0xb] = 0;
  FUN_1407f5420(param_1 + 0xc);
  FUN_1407b75e0(param_1 + 0xe);
  FUN_1407f5420(param_1 + 0xf);
  FUN_1407f5e90(param_1 + 0x11);
  FUN_1407f5420(param_1 + 0x14);
  FUN_1407f5420(param_1 + 0x16);
  FUN_1407f5420(param_1 + 0x18);
  FUN_1407b75e0(param_1 + 0x1a);
  FUN_1407f5420(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined *)((longlong)param_1 + 0xec) = 0;
  *(byte *)((longlong)param_1 + 0xed) = *(byte *)((longlong)param_1 + 0xed) & 0xfe;
  *(byte *)((longlong)param_1 + 0xed) = *(byte *)((longlong)param_1 + 0xed) & 0xfd;
  *(byte *)((longlong)param_1 + 0xed) = *(byte *)((longlong)param_1 + 0xed) & 0xfb;
  *(byte *)((longlong)param_1 + 0xed) = *(byte *)((longlong)param_1 + 0xed) & 0xf7;
  *(byte *)((longlong)param_1 + 0xed) = *(byte *)((longlong)param_1 + 0xed) | 0x10;
  *(byte *)((longlong)param_1 + 0xed) = *(byte *)((longlong)param_1 + 0xed) & 0xdf;
  *(byte *)((longlong)param_1 + 0xed) = *(byte *)((longlong)param_1 + 0xed) & 0xbf;
  *(byte *)((longlong)param_1 + 0xed) = *(byte *)((longlong)param_1 + 0xed) & 0x7f;
  *(byte *)((longlong)param_1 + 0xee) = *(byte *)((longlong)param_1 + 0xee) & 0xfe;
  *(byte *)((longlong)param_1 + 0xee) = *(byte *)((longlong)param_1 + 0xee) & 0xfd;
  *(byte *)((longlong)param_1 + 0xee) = *(byte *)((longlong)param_1 + 0xee) & 0xfb;
  if (*param_1 == 0) {
    FID_conflict__assert(L"ssl",(wchar_t *)"D",0x2c7);
  }
  return param_1;
}


/* address=1407f3190 name=FUN_1407f3190 */

void FUN_1407f3190(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1407b7610(*param_1 + 0x68,0);
  if (cVar1 != '\0') {
    lVar2 = FUN_1407b7160(*param_1 + 0x68);
    (**(code **)(*(longlong *)(lVar2 + 8) + 0x60))(param_1);
  }
  FUN_1407f54a0(param_1 + 0x1b);
  FUN_1407f6370(param_1 + 0x1a);
  FUN_1407f54a0(param_1 + 0x18);
  FUN_1407f54a0(param_1 + 0x16);
  FUN_1407f54a0(param_1 + 0x14);
  FUN_1407f5ed0(param_1 + 0x11);
  FUN_1407f54a0(param_1 + 0xf);
  FUN_1407b6f70(param_1 + 0xe);
  FUN_1407f54a0(param_1 + 0xc);
  FUN_1407b7520(param_1 + 10);
  FUN_1407b7b60(param_1 + 7);
  FUN_1407f5e00(param_1 + 4);
  FUN_1407f5dc0(param_1 + 3);
  return;
}


/* address=1407f32d0 name=FUN_1407f32d0 */

undefined FUN_1407f32d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1407ed740(param_1);
  if ((iVar1 != 0) &&
     (lVar2 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0x118),
     (*(byte *)(lVar2 + 0x621) >> 6 & 1) == 0)) {
    return 0;
  }
  return 1;
}


/* address=1407f3340 name=FUN_1407f3340 */

undefined FUN_1407f3340(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1407ed740(param_1);
  if ((iVar1 != 0) &&
     (lVar2 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0x118),
     (*(byte *)(lVar2 + 0x621) >> 5 & 1) == 0)) {
    return 0;
  }
  return 1;
}


/* address=1407f33b0 name=FUN_1407f33b0 */

void FUN_1407f33b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407b7160(param_1 + 0x68);
  FUN_1407f33f0(uVar1,param_2);
  return;
}


/* address=1407f33f0 name=FUN_1407f33f0 */

void FUN_1407f33f0(longlong param_1,longlong *param_2)

{
  undefined auStack_48 [32];
  int local_28;
  undefined4 local_24;
  longlong local_20;
  ushort local_18;
  ulonglong local_10;
  
  local_10 = DAT_140c05940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    thunk_FUN_1408bb504(&local_20);
    if (local_20 < 0) {
      FID_conflict__assert(L"0",(wchar_t *)"D",0x188);
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    else {
      *param_2 = local_20;
      *(uint *)(param_2 + 1) = (uint)local_18 * 1000;
    }
  }
  else {
    (**(code **)(param_1 + 0x1f8))(0,&local_28);
    if (local_28 < 0) {
      FID_conflict__assert(L"0",(wchar_t *)"D",0x177);
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    else {
      *param_2 = (longlong)local_28;
      *(undefined4 *)(param_2 + 1) = local_24;
    }
  }
  FUN_140805d70(local_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=1407f3520 name=FUN_1407f3520 */

void FUN_1407f3520(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc4) = 0;
  FUN_1407c2320();
  FUN_1407c2660();
  return;
}


/* address=1407f3560 name=FUN_1407f3560 */

void FUN_1407f3560(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xac) = 2;
  uVar1 = FUN_1407c29a0();
  FUN_1407f5860(*(longlong *)(param_1 + 0x30) + 0xb8,uVar1);
  return;
}


/* address=1407f35b0 name=FUN_1407f35b0 */

undefined8 * FUN_1407f35b0(undefined8 *param_1,longlong param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined *)((longlong)param_1 + 0x1c) = 2;
  param_1[4] = 0;
  FUN_1407b75e0(param_1 + 5);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x5000;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 2;
  *(undefined4 *)(param_1 + 0xc) = 0x1c20;
  *(undefined4 *)((longlong)param_1 + 100) = 0x2a300;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  FUN_1407b75e0(param_1 + 0x19);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 8;
  *(undefined4 *)(param_1 + 0x1c) = 0x19000;
  FUN_1407b75e0(param_1 + 0x1d);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined *)(param_1 + 0x25) = 0;
  *(undefined2 *)((longlong)param_1 + 0x12a) = 0x4000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_1407b75e0(param_1 + 0x28);
  FUN_1407b75e0(param_1 + 0x29);
  param_1[0x2a] = 0;
  FUN_1407b75e0(param_1 + 0x2b);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_1407f5420(param_1 + 0x34);
  FUN_1407b75e0(param_1 + 0x36);
  FUN_1407f5e90(param_1 + 0x37);
  FUN_1407f5420(param_1 + 0x3a);
  FUN_1407b75e0(param_1 + 0x3c);
  FUN_1407b75e0(param_1 + 0x3d);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_1407f5420(param_1 + 0x45);
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xfe;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xfd;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xfb;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xf7;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xef;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xdf;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xbf;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0x7f;
  *(byte *)((longlong)param_1 + 0x239) = *(byte *)((longlong)param_1 + 0x239) & 0xfe;
  *(byte *)((longlong)param_1 + 0x239) = *(byte *)((longlong)param_1 + 0x239) & 0xfd;
  *(byte *)((longlong)param_1 + 0x239) = *(byte *)((longlong)param_1 + 0x239) & 0xfb;
  *(byte *)((longlong)param_1 + 0x239) = *(byte *)((longlong)param_1 + 0x239) & 0xf7;
  *(byte *)((longlong)param_1 + 0x239) = *(byte *)((longlong)param_1 + 0x239) & 0xef;
  FUN_1407e6050(param_1 + 2);
  FUN_1407e6930(param_1 + 0x17);
  return param_1;
}


/* address=1407f3b80 name=FUN_1407f3b80 */

void FUN_1407f3b80(longlong param_1)

{
  FUN_14081b5c0(param_1,0);
  FUN_1407e6950(&DAT_140c02910,param_1,param_1 + 0xb8);
  FUN_1407e60f0(param_1 + 0x10);
  FUN_1407f5ba0(*(undefined8 *)(param_1 + 0x38));
  (**(code **)(*(longlong *)(param_1 + 8) + 0x80))(param_1);
  FUN_1407f54a0(param_1 + 0x228);
  FUN_1407f5280(param_1 + 0x1e8);
  FUN_1407b6f70(param_1 + 0x1e0);
  FUN_1407f54a0(param_1 + 0x1d0);
  FUN_1407f6480(param_1 + 0x1b8);
  FUN_1407f6370(param_1 + 0x1b0);
  FUN_1407f54a0(param_1 + 0x1a0);
  FUN_1407b7b60(param_1 + 0x158);
  FUN_1407f63f0(param_1 + 0x148);
  FUN_1407f63f0(param_1 + 0x140);
  FUN_1407f5e00(param_1 + 0xe8);
  FUN_1407b7520(param_1 + 200);
  FUN_1407f5dc0(param_1 + 0x28);
  return;
}


/* address=1407f3cf0 name=FUN_1407f3cf0 */

undefined8 * FUN_1407f3cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined local_28 [8];
  undefined local_20 [8];
  longlong local_18;
  longlong local_10;
  
  *param_1 = *param_2;
  FUN_1407b75e0(param_1 + 1);
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)((longlong)param_2 + 0x12a);
  FUN_1407b75e0(param_1 + 3);
  FUN_1407b75e0(param_1 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2[0x1e];
  param_1[9] = param_2[0x1f];
  *(undefined4 *)(param_1 + 10) = 1000;
  FUN_1407b75e0(param_1 + 0xb);
  param_1[0xc] = 0;
  uVar1 = FUN_1407f5170(local_28,param_2);
  FUN_1407b71d0(param_1 + 0xd,uVar1);
  FUN_1407f51d0(local_28);
  uVar1 = FUN_1407f5170(local_20,param_2);
  FUN_1407b71d0(param_1 + 0xe,uVar1);
  FUN_1407f51d0(local_20);
  lVar2 = FUN_1407b7160(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar2 + 0xd8);
  lVar2 = FUN_1407b7160(param_1 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(lVar2 + 0xdc);
  lVar2 = FUN_1407b7160(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(lVar2 + 0xe0);
  FUN_1407b75e0(param_1 + 0x12);
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(byte *)((longlong)param_1 + 0xa4) = *(byte *)((longlong)param_1 + 0xa4) & 0xfe;
  local_18 = FUN_1407b7160(param_1 + 0xd);
  *(byte *)((longlong)param_1 + 0xa4) =
       *(byte *)((longlong)param_1 + 0xa4) & 0xfd | (*(byte *)(local_18 + 0x238) >> 1 & 1) << 1;
  local_10 = FUN_1407b7160(param_1 + 0xd);
  *(byte *)((longlong)param_1 + 0xa4) =
       *(byte *)((longlong)param_1 + 0xa4) & 0xfb | (*(byte *)(local_10 + 0x239) >> 2 & 1) << 2;
  FUN_1407e6930(param_1 + 0xf);
  return param_1;
}


/* address=1407f3fa0 name=FUN_1407f3fa0 */

void FUN_1407f3fa0(longlong *param_1)

{
  FUN_1407e6950(&DAT_140c028f8,param_1,param_1 + 0xf);
  FUN_1407f68e0(param_1 + 1,0);
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  FUN_1407b7b60(param_1 + 0x12);
  FUN_1407f51d0(param_1 + 0xe);
  FUN_1407f51d0(param_1 + 0xd);
  FUN_1407b74e0(param_1 + 0xb);
  FUN_1407f4ed0(param_1 + 4);
  FUN_1407f4ed0(param_1 + 3);
  FUN_1407f68a0(param_1 + 1);
  return;
}


/* address=1407f4080 name=FUN_1407f4080 */

ulonglong FUN_1407f4080(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0xac) == 2) {
    uVar1 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0xb8);
    uVar2 = FUN_1407c2b50(uVar1);
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x30) >> 8),1);
  }
  return uVar2;
}


/* address=1407f40d0 name=FUN_1407f40d0 */

undefined8 FUN_1407f40d0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  char *local_30;
  byte *local_28;
  undefined8 local_20;
  
  lVar3 = FUN_1407f5090(param_2);
  iVar2 = FUN_1407dfa00(param_1,&local_30,lVar3 << 1);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    local_20 = param_2;
    local_28 = (byte *)FUN_1407b7160(param_2);
    pbVar5 = (byte *)FUN_1407f50d0(local_20);
    for (; local_28 != pbVar5; local_28 = local_28 + 1) {
      bVar1 = *local_28;
      *local_30 = "0123456789abcdef"[(int)(uint)bVar1 >> 4];
      local_30[1] = "0123456789abcdef"[(int)(bVar1 & 0xf)];
      local_30 = local_30 + 2;
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=1407f41c0 name=FUN_1407f41c0 */

ulonglong FUN_1407f41c0(longlong param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  ulonglong uVar4;
  uint7 uVar5;
  
  uVar4 = 0;
  if (((*(byte *)(param_1 + 0xa4) & 1) != 0) || (uVar4 = FUN_1407eb7d0(param_1), (int)uVar4 != 0)) {
    return uVar4 & 0xffffffffffffff00;
  }
  if (((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 1 & 1) != 0) &&
     (uVar3 = FUN_14083faa0(param_1), 0x303 < uVar3)) {
    return (ulonglong)(byte)(uVar3 >> 8) << 8;
  }
  cVar2 = FUN_1407b7170(param_1 + 8);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  uVar5 = (uint7)(uint3)((uint)iVar1 >> 8);
  if (iVar1 == 0) {
LAB_1407f427c:
    uVar4 = (ulonglong)uVar5 << 8;
  }
  else {
    if (iVar1 == 1) {
      return (ulonglong)(*(int *)(*(longlong *)(param_1 + 0x30) + 0xc0) == 0);
    }
    if (iVar1 != 2) {
      if (iVar1 == 3) goto LAB_1407f427c;
      if (iVar1 != 4) {
        FID_conflict__assert(L"0",(wchar_t *)"D",0x1bc);
        return 0;
      }
    }
    uVar4 = CONCAT71(uVar5,1);
  }
  return uVar4;
}


/* address=1407f42e0 name=FUN_1407f42e0 */

void FUN_1407f42e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1407b7610(*(longlong *)(param_1 + 0x30) + 0x118,0);
  if ((((cVar1 == '\0') && (cVar1 = operator==<>(param_1 + 8,0), cVar1 == '\0')) &&
      (lVar2 = FUN_1407b7160(param_1 + 8), *(char *)(lVar2 + 0xed) < '\0')) &&
     (cVar1 = FUN_1407f41c0(param_1), cVar1 == '\0')) {
    FUN_1407f68e0(param_1 + 8,0);
  }
  return;
}


/* address=1407f4450 name=FUN_1407f4450 */

undefined FUN_1407f4450(longlong param_1,longlong param_2)

{
  undefined uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = FUN_14083faa0(param_1);
  if (uVar2 < 0x304) {
    if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
      if ((*(char *)(param_2 + 1) == '\0') && (lVar4 = FUN_1407dcf10(param_2 + 8), lVar4 == 0)) {
        if (*(int *)(param_1 + 0xa0) == 3) {
          return 1;
        }
        *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdd) =
             *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdd) | 0x20;
        if (*(int *)(param_1 + 0xa0) == 4) {
          return 1;
        }
        iVar3 = FUN_1407f0cf0(param_1);
        if (iVar3 == 0) {
          FUN_14086ad40(param_1,2,100);
          return 0;
        }
        return 1;
      }
      FUN_14086ad40(param_1,2,0x32);
      FUN_1407c2680(0x10,0,0x6e,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                    ,0x391);
      uVar1 = 0;
    }
    else {
      FUN_1407c2680(0x10,0,0xb6,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                    ,0x38a);
      FUN_14086ad40(param_1,2,100);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = FUN_140857d20(param_1,param_2);
  }
  return uVar1;
}


/* address=1407f45c0 name=FUN_1407f45c0 */

int FUN_1407f45c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_88;
  char local_87 [3];
  int local_84;
  int local_80;
  undefined4 local_7c;
  byte *local_78;
  undefined8 local_70;
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [56];
  
  FUN_1407f3520(param_1);
  if (param_1[5] == 0) {
    FUN_1407c2680(0x10,0,0xe2,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                  ,0x3c5);
    iVar2 = -1;
  }
  else {
    cVar1 = FUN_1407f4080(param_1);
    if (cVar1 == '\0') {
      iVar2 = -1;
    }
    else {
      while (cVar1 = FUN_1407f50a0(param_1[6] + 0x80), cVar1 != '\0') {
        if ((*(byte *)(param_1[6] + 0xdd) >> 5 & 1) != 0) {
          *(undefined4 *)(param_1[6] + 0xc4) = 0x13;
          return -1;
        }
        while (cVar1 = FUN_1407f3340(param_1), cVar1 == '\0') {
          local_84 = FUN_1407ebcd0(param_1);
          if (local_84 < 0) {
            return local_84;
          }
          if (local_84 == 0) {
            FUN_1407c2680(0x10,0,0xd7,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                          ,0x3dd);
            return -1;
          }
        }
        cVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_48);
        if (cVar1 == '\0') {
          local_88 = 0x32;
          local_70 = 0;
          puVar4 = (undefined *)FUN_1407f5790(param_1[6] + 0x50,local_58);
          puVar5 = local_68;
          for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          local_7c = FUN_1407f2e00(param_1,param_1[6] + 0x80,&local_70,&local_88,local_68);
          local_80 = FUN_1408483c0(param_1,local_87,local_7c,local_70,local_88);
          if (local_80 < 1) {
            return local_80;
          }
          if (local_87[0] == '\0') {
            cVar1 = FUN_1407f50a0(param_1[6] + 0x80);
            if (cVar1 != '\0') {
              FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x3ff);
            }
            *(undefined *)(param_1[6] + 0xd4) = 0;
          }
        }
        else {
          iVar2 = FUN_1407ed740(param_1);
          if (iVar2 == 0) {
            iVar2 = FUN_1407f4450(param_1,local_48);
            if (iVar2 == 0) {
              FUN_1407f3560(param_1);
              return -1;
            }
            (**(code **)(*param_1 + 0x20))(param_1);
          }
          else {
            lVar3 = FUN_1407b7160(param_1[6] + 0x118);
            local_78 = (byte *)(lVar3 + 0x621);
            *local_78 = *local_78 & 0xdf;
          }
        }
      }
      iVar2 = 1;
    }
  }
  return iVar2;
}


/* address=1407f48e0 name=FUN_1407f48e0 */

undefined8 FUN_1407f48e0(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 2) {
    uVar1 = 7;
  }
  else if (param_1 == 3) {
    uVar1 = 8;
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}


/* address=1407f4920 name=FUN_1407f4920 */

bool FUN_1407f4920(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined local_res18;
  
  if (param_3 < 0x21) {
    local_res18 = (undefined)param_3;
    *(undefined *)(param_1 + 0x70) = local_res18;
    FUN_1407f27e0(param_1 + 0x71,param_2,param_3);
  }
  else {
    FUN_1407c2680(0x10,0,0xd8,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                  ,0x602);
  }
  return param_3 < 0x21;
}


/* address=1407f49a0 name=FUN_1407f49a0 */

ulonglong FUN_1407f49a0(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong local_res10;
  
  local_res10 = param_2;
  if (param_4 < param_2) {
    local_res10 = param_4;
  }
  FUN_1407f27e0(param_1,param_3,local_res10);
  return param_4;
}


/* address=1407f4a00 name=FUN_1407f4a00 */

undefined4 FUN_1407f4a00(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1407507b0(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_140791360(lVar2);
    iVar1 = FUN_14078f6a0(uVar3);
    if (iVar1 == 0x19f) {
      return 1;
    }
  }
  return 0;
}


/* address=1407f4a60 name=FUN_1407f4a60 */

undefined8 FUN_1407f4a60(undefined8 param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  if ((param_2 != (char *)0x0) && (sVar2 = strlen(param_2), 0x80 < sVar2)) {
    FUN_1407c2680(0x10,0,0x88,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_lib.cc"
                  ,0xa5a);
    return 0;
  }
  FUN_1407f5a10(param_1,0);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar3 = FUN_1407cd410(param_2);
    FUN_1407f5a10(param_1,uVar3);
    cVar1 = operator==<>(param_1,0);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}


/* address=1407f4b20 name=FUN_1407f4b20 */

undefined4 FUN_1407f4b20(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x220) = 1;
  iVar1 = FUN_14083efc0(param_1,0x303);
  if ((((iVar1 != 0) && (iVar1 = FUN_14083f000(param_1,0x304), iVar1 != 0)) &&
      (iVar1 = FUN_1407ed260(param_1,
                             "TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256:TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256:TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384:TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384"
                            ), iVar1 != 0)) &&
     (((iVar1 = FUN_1407ee500(param_1,&DAT_1409adfb0,3), iVar1 != 0 &&
       (iVar1 = FUN_1408146f0(param_1,&DAT_1409adfc0,8), iVar1 != 0)) &&
      (iVar1 = FUN_140814e60(param_1,&DAT_1409adfc0,8), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}


/* address=1407f4bf0 name=FUN_1407f4bf0 */

undefined4 FUN_1407f4bf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1407b7160(param_1 + 8);
  *(undefined4 *)(lVar2 + 0xe8) = 1;
  iVar1 = FUN_14083f080(param_1,0x303);
  if ((((iVar1 != 0) && (iVar1 = FUN_14083f0f0(param_1,0x304), iVar1 != 0)) &&
      (iVar1 = FUN_1407ed3a0(param_1,
                             "TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256:TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256:TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384:TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384"
                            ), iVar1 != 0)) &&
     (((iVar1 = FUN_1407ee570(param_1,&DAT_1409adfb0,3), iVar1 != 0 &&
       (iVar1 = FUN_140814760(param_1,&DAT_1409adfc0,8), iVar1 != 0)) &&
      (iVar1 = FUN_140814ed0(param_1,&DAT_1409adfc0,8), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}


/* address=1407f4cd0 name=FUN_1407f4cd0 */

undefined4 FUN_1407f4cd0(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x220) = 2;
  iVar1 = FUN_14083efc0(param_1,0x303);
  if ((((iVar1 != 0) && (iVar1 = FUN_14083f000(param_1,0x304), iVar1 != 0)) &&
      (iVar1 = FUN_1407ed260(param_1,
                             "TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384:TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384"
                            ), iVar1 != 0)) &&
     (((iVar1 = FUN_1407ee500(param_1,&DAT_1409ad494,1), iVar1 != 0 &&
       (iVar1 = FUN_1408146f0(param_1,&DAT_1409ae070,5), iVar1 != 0)) &&
      (iVar1 = FUN_140814e60(param_1,&DAT_1409ae070,5), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}


/* address=1407f4da0 name=FUN_1407f4da0 */

undefined4 FUN_1407f4da0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1407b7160(param_1 + 8);
  *(undefined4 *)(lVar2 + 0xe8) = 2;
  iVar1 = FUN_14083f080(param_1,0x303);
  if ((((iVar1 != 0) && (iVar1 = FUN_14083f0f0(param_1,0x304), iVar1 != 0)) &&
      (iVar1 = FUN_1407ed3a0(param_1,
                             "TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384:TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384"
                            ), iVar1 != 0)) &&
     (((iVar1 = FUN_1407ee570(param_1,&DAT_1409ad494,1), iVar1 != 0 &&
       (iVar1 = FUN_140814760(param_1,&DAT_1409ae070,5), iVar1 != 0)) &&
      (iVar1 = FUN_140814ed0(param_1,&DAT_1409ae070,5), iVar1 != 0)))) {
    return 1;
  }
  return 0;
}


/* address=1407f4e70 name=FUN_1407f4e70 */

undefined8 FUN_1407f4e70(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


/* address=1407f4e80 name=FUN_1407f4e80 */

undefined8 FUN_1407f4e80(void)

{
  return 0xffffffffffffffff;
}


/* address=1407f4e90 name=FUN_1407f4e90 */

uint FUN_1407f4e90(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=1407f4eb0 name=FUN_1407f4eb0 */

void FUN_1407f4eb0(undefined8 param_1)

{
  FUN_1407c0080(param_1);
  return;
}


/* address=1407f4ed0 name=FUN_1407f4ed0 */

void FUN_1407f4ed0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1407f72b0(uVar1,*param_1);
  }
  return;
}


/* address=1407f4f10 name=FUN_1407f4f10 */

void FUN_1407f4f10(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1407f72b0(uVar2,p_Var1);
  }
  return;
}


/* address=1407f4f60 name=FUN_1407f4f60 */

undefined8 FUN_1407f4f60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  if (param_2 != 0) {
    FUN_140750170(param_2);
  }
  uVar1 = FUN_1407b6fc0(local_18,param_2);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407b6f70(local_18);
  return param_1;
}


/* address=1407f4fc0 name=FUN_1407f4fc0 */

void FUN_1407f4fc0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1407b7e50(uVar2,p_Var1);
  }
  return;
}


/* address=1407f5010 name=FUN_1407f5010 */

undefined8 FUN_1407f5010(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_1407b7160(param_2);
  uVar1 = FUN_1407f4f60(local_18,uVar1);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407b6f70(local_18);
  return param_1;
}


/* address=1407f5060 name=FUN_1407f5060 */

undefined8 FUN_1407f5060(undefined8 param_1)

{
  FUN_1407b76f0(param_1,0,0);
  return param_1;
}


/* address=1407f5090 name=FUN_1407f5090 */

undefined8 FUN_1407f5090(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=1407f50a0 name=FUN_1407f50a0 */

bool FUN_1407f50a0(longlong param_1)

{
  return *(longlong *)(param_1 + 8) == 0;
}


/* address=1407f50d0 name=FUN_1407f50d0 */

longlong FUN_1407f50d0(longlong *param_1)

{
  return *param_1 + param_1[1];
}


/* address=1407f50f0 name=FUN_1407f50f0 */

undefined8 FUN_1407f50f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1407b76f0(param_1,param_2,param_3);
  return param_1;
}


/* address=1407f5130 name=FUN_1407f5130 */

void FUN_1407f5130(undefined8 param_1)

{
  FUN_1407eb6e0(param_1);
  return;
}


/* address=1407f5150 name=FUN_1407f5150 */

void FUN_1407f5150(undefined8 param_1)

{
  FUN_1407ead30(param_1);
  return;
}


/* address=1407f5170 name=FUN_1407f5170 */

undefined8 FUN_1407f5170(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  if (param_2 != 0) {
    FUN_1407ead00(param_2);
  }
  uVar1 = FUN_1407b6fc0(local_18,param_2);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407f51d0(local_18);
  return param_1;
}


/* address=1407f51d0 name=FUN_1407f51d0 */

void FUN_1407f51d0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1407f7290(uVar1,*param_1);
  }
  return;
}


/* address=1407f5210 name=FUN_1407f5210 */

void FUN_1407f5210(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1407f7290(uVar2,p_Var1);
  }
  return;
}


/* address=1407f5260 name=FUN_1407f5260 */

void FUN_1407f5260(undefined8 param_1)

{
  FUN_1407fb170(param_1);
  return;
}


/* address=1407f5280 name=FUN_1407f5280 */

void FUN_1407f5280(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1407f7270(uVar1,*param_1);
  }
  return;
}


/* address=1407f52c0 name=FUN_1407f52c0 */

undefined8 FUN_1407f52c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  if (param_2 != 0) {
    FUN_14081ac50(param_2);
  }
  uVar1 = FUN_1407b6fc0(local_18,param_2);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407b74e0(local_18);
  return param_1;
}


/* address=1407f5320 name=FUN_1407f5320 */

void FUN_1407f5320(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1407b7df0(uVar2,p_Var1);
  }
  return;
}


/* address=1407f5370 name=FUN_1407f5370 */

undefined8 FUN_1407f5370(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_1407b7160(param_2);
  uVar1 = FUN_1407f52c0(local_18,uVar1);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407b74e0(local_18);
  return param_1;
}


/* address=1407f53c0 name=FUN_1407f53c0 */

void FUN_1407f53c0(undefined8 param_1)

{
  FUN_1407c2920(param_1);
  return;
}


/* address=1407f53e0 name=FUN_1407f53e0 */

undefined8 FUN_1407f53e0(undefined8 param_1,uint param_2)

{
  FUN_140840c30(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,0x10);
  }
  return param_1;
}


/* address=1407f5420 name=FUN_1407f5420 */

undefined8 * FUN_1407f5420(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}


/* address=1407f5450 name=_Ptr_base<> */

/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::_Ptr_base<struct Concurrency::details::_Task_impl<unsigned char>
   >::_Ptr_base<struct Concurrency::details::_Task_impl<unsigned char> >(class std::_Ptr_base<struct
   Concurrency::details::_Task_impl<unsigned char> > && __ptr64) __ptr64
    public: __cdecl std::_Ptr_base<struct Concurrency::details::_Task_impl<struct std::pair<unsigned
   char,class Concurrency::details::_CancellationTokenState * __ptr64> > >::_Ptr_base<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState * __ptr64> > >(class std::_Ptr_base<struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState * __ptr64> > > && __ptr64) __ptr64
    public: __cdecl std::_Ptr_base<struct Concurrency::details::_ExceptionHolder>::_Ptr_base<struct
   Concurrency::details::_ExceptionHolder>(class std::_Ptr_base<struct
   Concurrency::details::_ExceptionHolder> && __ptr64) __ptr64
    public: __cdecl std::_Ptr_base<class __ExceptionPtr>::_Ptr_base<class __ExceptionPtr>(class
   std::_Ptr_base<class __ExceptionPtr> && __ptr64) __ptr64
     5 names - too many to list
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2012 Debug, Visual Studio 2012 Release */

undefined8 * _Ptr_base<>(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_1407b6fb0(param_2);
  FUN_1407f54c0(param_1,uVar1);
  return param_1;
}


/* address=1407f54a0 name=FUN_1407f54a0 */

void FUN_1407f54a0(undefined8 param_1)

{
  FUN_1407f5500(param_1);
  return;
}


/* address=1407f54c0 name=FUN_1407f54c0 */

longlong FUN_1407f54c0(longlong param_1,undefined8 param_2)

{
  FUN_1407f5500(param_1);
  FUN_1407f5590(param_2,param_1,param_1 + 8);
  return param_1;
}


/* address=1407f5500 name=FUN_1407f5500 */

void FUN_1407f5500(undefined8 param_1)

{
  FUN_1407f5520(param_1,0,0);
  return;
}


/* address=1407f5520 name=FUN_1407f5520 */

void FUN_1407f5520(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
  }
  FUN_1407cd0f0(*param_1);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* address=1407f5590 name=FUN_1407f5590 */

void FUN_1407f5590(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


/* address=1407f55e0 name=FUN_1407f55e0 */

undefined8 FUN_1407f55e0(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_18;
  
  FUN_1407f5500(param_1);
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = FUN_1407f4e80();
    if (uVar2 < param_2) {
      FUN_1407c2680(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                    ,0x138);
      uVar1 = 0;
    }
    else {
      lVar3 = FUN_1407ccfc0(param_2);
      *param_1 = lVar3;
      if (*param_1 == 0) {
        uVar1 = 0;
      }
      else {
        param_1[1] = param_2;
        for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
          FUN_1407f4e70(1,*param_1 + local_18);
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


/* address=1407f56c0 name=FUN_1407f56c0 */

bool FUN_1407f56c0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1407f5090(param_2);
  cVar1 = FUN_1407f55e0(param_1,uVar2);
  if (cVar1 != '\0') {
    uVar2 = FUN_1407f5090(param_2);
    uVar3 = FUN_1407b7160(param_2);
    FUN_1407f27e0(*param_1,uVar3,uVar2);
  }
  return cVar1 != '\0';
}


/* address=1407f5730 name=FUN_1407f5730 */

longlong FUN_1407f5730(longlong *param_1)

{
  return (ulonglong)*(ushort *)(param_1 + 1) + *param_1;
}


/* address=1407f5750 name=FUN_1407f5750 */

undefined2 FUN_1407f5750(longlong param_1)

{
  return *(undefined2 *)(param_1 + 10);
}


/* address=1407f5760 name=FUN_1407f5760 */

bool FUN_1407f5760(longlong param_1)

{
  return *(short *)(param_1 + 10) == 0;
}


/* address=1407f5790 name=FUN_1407f5790 */

undefined8 FUN_1407f5790(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1407f5750(param_1);
  uVar2 = FUN_1407f5730(param_1);
  FUN_1407f50f0(param_2,uVar2,uVar1);
  return param_2;
}


/* address=1407f57e0 name=FUN_1407f57e0 */

undefined8 FUN_1407f57e0(longlong *param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4)

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
  FUN_1407b76f0(param_2,*param_1 + param_3,*p_Var1);
  return param_2;
}


/* address=1407f5860 name=FUN_1407f5860 */

void FUN_1407f5860(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1407f7230(uVar2,p_Var1);
  }
  return;
}


/* address=1407f58b0 name=FUN_1407f58b0 */

undefined8 FUN_1407f58b0(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong local_18;
  
  FUN_1407f5500(param_1);
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = FUN_1407f4e80();
    if (uVar2 / 2 < param_2) {
      FUN_1407c2680(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                    ,0x138);
      uVar1 = 0;
    }
    else {
      lVar3 = FUN_1407ccfc0(param_2 << 1);
      *param_1 = lVar3;
      if (*param_1 == 0) {
        uVar1 = 0;
      }
      else {
        param_1[1] = param_2;
        for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
          FUN_1407f4e70(2,*param_1 + local_18 * 2);
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


/* address=1407f59a0 name=FUN_1407f59a0 */

bool FUN_1407f59a0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1407f5090(param_2);
  cVar1 = FUN_1407f58b0(param_1,uVar2);
  if (cVar1 != '\0') {
    lVar3 = FUN_1407f5090(param_2);
    uVar2 = FUN_1407b7160(param_2);
    FUN_1407f27e0(*param_1,uVar2,lVar3 << 1);
  }
  return cVar1 != '\0';
}


/* address=1407f5a10 name=FUN_1407f5a10 */

void FUN_1407f5a10(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1407b7d50(uVar2,p_Var1);
  }
  return;
}


/* address=1407f5a60 name=FUN_1407f5a60 */

undefined8 FUN_1407f5a60(undefined8 param_1,uint param_2)

{
  FUN_140849160(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,0x658);
  }
  return param_1;
}


/* address=1407f5aa0 name=FUN_1407f5aa0 */

undefined8 FUN_1407f5aa0(undefined8 param_1,uint param_2)

{
  FUN_1408193b0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,0xb0);
  }
  return param_1;
}


/* address=1407f5ae0 name=FUN_1407f5ae0 */

undefined * FUN_1407f5ae0(undefined *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x10;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x20;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  return param_1;
}


/* address=1407f5b40 name=FUN_1407f5b40 */

undefined8 * FUN_1407f5b40(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return param_1;
}


/* address=1407f5b70 name=FUN_1407f5b70 */

void FUN_1407f5b70(undefined8 param_1,undefined8 param_2)

{
  FUN_14083a4b0(param_1,param_2);
  return;
}


/* address=1407f5ba0 name=FUN_1407f5ba0 */

void FUN_1407f5ba0(undefined8 param_1)

{
  FUN_14083a590(param_1);
  return;
}


/* address=1407f5bc0 name=FUN_1407f5bc0 */

void FUN_1407f5bc0(undefined8 param_1)

{
  FUN_14083a640(param_1);
  return;
}


/* address=1407f5be0 name=FUN_1407f5be0 */

void FUN_1407f5be0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1407f7210(uVar1,*param_1);
  }
  return;
}


/* address=1407f5c20 name=FUN_1407f5c20 */

void FUN_1407f5c20(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1407f7210(uVar2,p_Var1);
  }
  return;
}


/* address=1407f5c70 name=FUN_1407f5c70 */

longlong FUN_1407f5c70(longlong param_1)

{
  FUN_1407f5420(param_1);
  FUN_1407f5420(param_1 + 0x10);
  return param_1;
}


/* address=1407f5cb0 name=FUN_1407f5cb0 */

void FUN_1407f5cb0(longlong param_1)

{
  FUN_1407f54a0(param_1 + 0x10);
  FUN_1407f54a0(param_1);
  return;
}


/* address=1407f5ce0 name=FUN_1407f5ce0 */

longlong FUN_1407f5ce0(longlong param_1,longlong param_2)

{
  _Ptr_base<>(param_1,param_2);
  _Ptr_base<>(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}


/* address=1407f5d30 name=FUN_1407f5d30 */

longlong FUN_1407f5d30(longlong param_1,longlong param_2)

{
  FUN_1407f54c0(param_1,param_2);
  FUN_1407f54c0(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}


/* address=1407f5d80 name=FUN_1407f5d80 */

undefined8 FUN_1407f5d80(undefined8 param_1,uint param_2)

{
  FUN_1407f5cb0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,0x20);
  }
  return param_1;
}


/* address=1407f5dc0 name=FUN_1407f5dc0 */

void FUN_1407f5dc0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1407f7250(uVar1,*param_1);
  }
  return;
}


/* address=1407f5e00 name=FUN_1407f5e00 */

void FUN_1407f5e00(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1407f71f0(uVar1,*param_1);
  }
  return;
}


/* address=1407f5e40 name=FUN_1407f5e40 */

void FUN_1407f5e40(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1407f71f0(uVar2,p_Var1);
  }
  return;
}


/* address=1407f5e90 name=FUN_1407f5e90 */

undefined8 * FUN_1407f5e90(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1407f5420(param_1 + 1);
  return param_1;
}


/* address=1407f5ed0 name=FUN_1407f5ed0 */

void FUN_1407f5ed0(longlong param_1)

{
  FUN_1407f6140(param_1 + 8);
  return;
}


/* address=1407f5ef0 name=FUN_1407f5ef0 */

bool FUN_1407f5ef0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1407f5f90(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_1407b6fb0(param_2);
    uVar3 = FUN_1407f61a0(param_1 + 1,*param_1);
    FUN_1407f5d30(uVar3,uVar2);
    *param_1 = *param_1 + 1;
    FUN_1407f5cb0(param_2);
  }
  else {
    FUN_1407f5cb0(param_2);
  }
  return cVar1 != '\0';
}


/* address=1407f5f90 name=FUN_1407f5f90 */

undefined8 FUN_1407f5f90(ulonglong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong local_30;
  undefined local_18 [24];
  
  lVar2 = FUN_1407f5090(param_1 + 1);
  if (lVar2 == 0) {
    uVar3 = FUN_1407f6270(param_1 + 1,0x10);
  }
  else {
    uVar4 = FUN_1407f5090(param_1 + 1);
    if (*param_1 < uVar4) {
      uVar3 = 1;
    }
    else {
      uVar4 = FUN_1407f5090(param_1 + 1);
      uVar5 = FUN_1407f4e80();
      if (uVar5 / 2 < uVar4) {
        FUN_1407c2680(0x10,0,0x45,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                      ,0x1ab);
        uVar3 = 0;
      }
      else {
        FUN_1407f5420(local_18);
        lVar2 = FUN_1407f5090(param_1 + 1);
        cVar1 = FUN_1407f6270(local_18,lVar2 << 1);
        if (cVar1 == '\0') {
          FUN_1407f6140(local_18);
          uVar3 = 0;
        }
        else {
          local_30 = 0;
          while( true ) {
            uVar4 = FUN_1407f5090(param_1 + 1);
            if (uVar4 <= local_30) break;
            uVar3 = FUN_1407f61a0(param_1 + 1,local_30);
            uVar3 = FUN_1407b6fb0(uVar3);
            uVar6 = FUN_1407f61a0(local_18,local_30);
            FUN_1407f5d30(uVar6,uVar3);
            local_30 = local_30 + 1;
          }
          uVar3 = FUN_1407b6fb0(local_18);
          FUN_1407f6160(param_1 + 1,uVar3);
          FUN_1407f6140(local_18);
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}


/* address=1407f6140 name=FUN_1407f6140 */

void FUN_1407f6140(undefined8 param_1)

{
  FUN_1407f61c0(param_1);
  return;
}


/* address=1407f6160 name=FUN_1407f6160 */

longlong FUN_1407f6160(longlong param_1,undefined8 param_2)

{
  FUN_1407f61c0(param_1);
  FUN_1407f5590(param_2,param_1,param_1 + 8);
  return param_1;
}


/* address=1407f61a0 name=FUN_1407f61a0 */

longlong FUN_1407f61a0(longlong *param_1,longlong param_2)

{
  return param_2 * 0x20 + *param_1;
}


/* address=1407f61c0 name=FUN_1407f61c0 */

void FUN_1407f61c0(undefined8 param_1)

{
  FUN_1407f61e0(param_1,0,0);
  return;
}


/* address=1407f61e0 name=FUN_1407f61e0 */

void FUN_1407f61e0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
    FUN_1407f5d80(local_18 * 0x20 + *param_1,0);
  }
  FUN_1407cd0f0(*param_1);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* address=1407f6270 name=FUN_1407f6270 */

undefined8 FUN_1407f6270(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  FUN_1407f61c0(param_1);
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_1407f4e80();
    if (uVar1 / 0x20 < param_2) {
      FUN_1407c2680(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                    ,0x138);
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_1407ccfc0(param_2 * 0x20);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        uVar3 = 0;
      }
      else {
        param_1[1] = param_2;
        for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
          uVar3 = FUN_1407f4e70(0x20,local_18 * 0x20 + *param_1);
          FUN_1407f5c70(uVar3);
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=1407f6370 name=FUN_1407f6370 */

void FUN_1407f6370(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1407f71d0(uVar1,*param_1);
  }
  return;
}


/* address=1407f63b0 name=FUN_1407f63b0 */

undefined8 FUN_1407f63b0(undefined8 param_1,uint param_2)

{
  FUN_1407f3190(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,0xf0);
  }
  return param_1;
}


/* address=1407f63f0 name=FUN_1407f63f0 */

void FUN_1407f63f0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1407f71b0(uVar1,*param_1);
  }
  return;
}


/* address=1407f6430 name=FUN_1407f6430 */

void FUN_1407f6430(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1407f71b0(uVar2,p_Var1);
  }
  return;
}


/* address=1407f6480 name=FUN_1407f6480 */

void FUN_1407f6480(longlong param_1)

{
  FUN_1407f54a0(param_1 + 8);
  return;
}


/* address=1407f64a0 name=FUN_1407f64a0 */

void FUN_1407f64a0(longlong param_1)

{
  FUN_1407b7160(param_1 + 8);
  return;
}


/* address=1407f64c0 name=FUN_1407f64c0 */

longlong FUN_1407f64c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1407b7160(param_1 + 1);
  return lVar1 + *param_1 * 0x18;
}


/* address=1407f64f0 name=FUN_1407f64f0 */

undefined8 FUN_1407f64f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  longlong lVar5;
  
  cVar1 = FUN_1407f6570(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined *)FUN_1407b6fb0(param_2);
    puVar4 = (undefined *)FUN_1407f6740(param_1 + 1,*param_1);
    for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    lVar5 = *param_1;
    *param_1 = lVar5 + 1;
    uVar2 = CONCAT71((int7)((ulonglong)(lVar5 + 1) >> 8),1);
  }
  return uVar2;
}


/* address=1407f6570 name=FUN_1407f6570 */

undefined8 FUN_1407f6570(ulonglong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulonglong local_40;
  undefined local_28 [24];
  
  lVar2 = FUN_1407f5090(param_1 + 1);
  if (lVar2 == 0) {
    uVar3 = FUN_1407f6760(param_1 + 1,0x10);
  }
  else {
    uVar4 = FUN_1407f5090(param_1 + 1);
    if (*param_1 < uVar4) {
      uVar3 = 1;
    }
    else {
      uVar4 = FUN_1407f5090(param_1 + 1);
      uVar5 = FUN_1407f4e80();
      if (uVar5 / 2 < uVar4) {
        FUN_1407c2680(0x10,0,0x45,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                      ,0x1ab);
        uVar3 = 0;
      }
      else {
        FUN_1407f5420(local_28);
        lVar2 = FUN_1407f5090(param_1 + 1);
        cVar1 = FUN_1407f6760(local_28,lVar2 << 1);
        if (cVar1 == '\0') {
          FUN_1407f54a0(local_28);
          uVar3 = 0;
        }
        else {
          local_40 = 0;
          while( true ) {
            uVar4 = FUN_1407f5090(param_1 + 1);
            if (uVar4 <= local_40) break;
            uVar3 = FUN_1407f6740(param_1 + 1,local_40);
            puVar6 = (undefined *)FUN_1407b6fb0(uVar3);
            puVar7 = (undefined *)FUN_1407f6740(local_28,local_40);
            for (lVar2 = 0x18; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            local_40 = local_40 + 1;
          }
          uVar3 = FUN_1407b6fb0(local_28);
          FUN_1407f54c0(param_1 + 1,uVar3);
          FUN_1407f54a0(local_28);
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}


/* address=1407f6740 name=FUN_1407f6740 */

longlong FUN_1407f6740(longlong *param_1,longlong param_2)

{
  return param_2 * 0x18 + *param_1;
}


/* address=1407f6760 name=FUN_1407f6760 */

undefined8 FUN_1407f6760(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  FUN_1407f5500(param_1);
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_1407f4e80();
    if (uVar1 / 0x18 < param_2) {
      FUN_1407c2680(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                    ,0x138);
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_1407ccfc0(param_2 * 0x18);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        uVar3 = 0;
      }
      else {
        param_1[1] = param_2;
        for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
          uVar3 = FUN_1407f4e70(0x18,local_18 * 0x18 + *param_1);
          FUN_1407f5b40(uVar3);
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=1407f6860 name=FUN_1407f6860 */

undefined8 FUN_1407f6860(undefined8 param_1,uint param_2)

{
  FUN_1407f3b80(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,0x240);
  }
  return param_1;
}


/* address=1407f68a0 name=FUN_1407f68a0 */

void FUN_1407f68a0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1407f7190(uVar1,*param_1);
  }
  return;
}


/* address=1407f68e0 name=FUN_1407f68e0 */

void FUN_1407f68e0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1407f7190(uVar2,p_Var1);
  }
  return;
}


/* address=1407f6930 name=FUN_1407f6930 */

undefined8 FUN_1407f6930(undefined8 param_1,uint param_2)

{
  FUN_1407f3fa0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,0xa8);
  }
  return param_1;
}


/* address=1407f6970 name=FUN_1407f6970 */

undefined8 FUN_1407f6970(undefined8 param_1)

{
  FUN_1407df110(param_1);
  return param_1;
}


/* address=1407f69a0 name=FUN_1407f69a0 */

void FUN_1407f69a0(undefined8 param_1)

{
  FUN_1407df200(param_1);
  return;
}


/* address=1407f69c0 name=FUN_1407f69c0 */

undefined8 FUN_1407f69c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407b76f0(param_1,param_2,0x20);
  return param_1;
}


/* address=1407f69f0 name=FUN_1407f69f0 */

undefined8 FUN_1407f69f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_1407b6fb0(param_2);
  uVar1 = FUN_1407f6f90(uVar1);
  uVar1 = FUN_1407b6fc0(local_18,uVar1);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407f51d0(local_18);
  return param_1;
}


/* address=1407f6a40 name=FUN_1407f6a40 */

undefined8 FUN_1407f6a40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_1407b6fb0(param_2);
  uVar1 = FUN_1407f6ff0(uVar1);
  uVar1 = FUN_1407b6fc0(local_18,uVar1);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407f5e00(local_18);
  return param_1;
}


/* address=1407f6a90 name=FUN_1407f6a90 */

undefined8
FUN_1407f6a90(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_1407f5e40(param_1,p_Var1);
  uVar2 = FUN_1407b6fb0(param_2);
  FUN_1407b6fb0(uVar2);
  FUN_1407b6fb0(param_1);
  return param_1;
}


/* address=1407f6af0 name=FUN_1407f6af0 */

void FUN_1407f6af0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1407f7170(uVar1,*param_1);
  }
  return;
}


/* address=1407f6b30 name=FUN_1407f6b30 */

undefined8 FUN_1407f6b30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_1407b6fb0(param_2);
  uVar1 = FUN_1407f7050(uVar1);
  uVar1 = FUN_1407b6fc0(local_18,uVar1);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407f6af0(local_18);
  return param_1;
}


/* address=1407f6b80 name=FUN_1407f6b80 */

undefined8 FUN_1407f6b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_1407b6fb0(param_2);
  uVar1 = FUN_1407f70b0(uVar1);
  uVar1 = FUN_1407b6fc0(local_18,uVar1);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407f68a0(local_18);
  return param_1;
}


/* address=1407f6bd0 name=FUN_1407f6bd0 */

undefined8
FUN_1407f6bd0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_1407f68e0(param_1,p_Var1);
  uVar2 = FUN_1407b6fb0(param_2);
  FUN_1407b6fb0(uVar2);
  FUN_1407b6fb0(param_1);
  return param_1;
}


/* address=1407f6c30 name=FUN_1407f6c30 */

undefined8 * FUN_1407f6c30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407b7160(param_2);
  *param_1 = uVar1;
  uVar1 = FUN_1407f5090(param_2);
  param_1[1] = uVar1;
  return param_1;
}


/* address=1407f6c70 name=FUN_1407f6c70 */

undefined8
FUN_1407f6c70(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_1407f4fc0(param_1,p_Var1);
  uVar2 = FUN_1407b6fb0(param_2);
  FUN_1407b6fb0(uVar2);
  FUN_1407b6fb0(param_1);
  return param_1;
}


/* address=1407f6cd0 name=FUN_1407f6cd0 */

void FUN_1407f6cd0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1407f6930(param_1,0);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407f6d00 name=std::_Min_value<unsigned___int64> */

/* Library Function - Single Match
    unsigned __int64 const & __ptr64 __cdecl std::_Min_value<unsigned __int64>(unsigned __int64
   const & __ptr64,unsigned __int64 const & __ptr64)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

__uint64 * __cdecl std::_Min_value<unsigned___int64>(__uint64 *param_1,__uint64 *param_2)

{
  __uint64 *local_18;
  
  local_18 = param_1;
  if (*param_2 < *param_1) {
    local_18 = param_2;
  }
  return local_18;
}


/* address=1407f6d50 name=FUN_1407f6d50 */

undefined8
FUN_1407f6d50(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_1407f5c20(param_1,p_Var1);
  uVar2 = FUN_1407b6fb0(param_2);
  FUN_1407b6fb0(uVar2);
  FUN_1407b6fb0(param_1);
  return param_1;
}


/* address=1407f6db0 name=FUN_1407f6db0 */

longlong * FUN_1407f6db0(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  if (*param_1 == 0) {
    FID_conflict__assert((wchar_t *)"m",(wchar_t *)"D",0x290);
  }
  FUN_1407e6070(*param_1);
  return param_1;
}


/* address=1407f6e10 name=FUN_1407f6e10 */

void FUN_1407f6e10(undefined8 *param_1)

{
  FUN_1407e60b0(*param_1);
  return;
}


/* address=1407f6e30 name=FUN_1407f6e30 */

undefined8 FUN_1407f6e30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_1407f7110();
  uVar1 = FUN_1407b6fc0(local_18,uVar1);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407f63f0(local_18);
  return param_1;
}


/* address=1407f6e70 name=FUN_1407f6e70 */

undefined8
FUN_1407f6e70(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_1407f6430(param_1,p_Var1);
  uVar2 = FUN_1407b6fb0(param_2);
  FUN_1407b6fb0(uVar2);
  FUN_1407b6fb0(param_1);
  return param_1;
}


/* address=1407f6ed0 name=FUN_1407f6ed0 */

undefined8
FUN_1407f6ed0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_1407f5210(param_1,p_Var1);
  uVar2 = FUN_1407b6fb0(param_2);
  FUN_1407b6fb0(uVar2);
  FUN_1407b6fb0(param_1);
  return param_1;
}


/* address=1407f6f30 name=FUN_1407f6f30 */

undefined8
FUN_1407f6f30(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_1407f5320(param_1,p_Var1);
  uVar2 = FUN_1407b6fb0(param_2);
  FUN_1407b6fb0(uVar2);
  FUN_1407b6fb0(param_1);
  return param_1;
}


/* address=1407f6f90 name=FUN_1407f6f90 */

undefined8 FUN_1407f6f90(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_1407ccfc0(0x240);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1407f4e70(0x240,lVar1);
    puVar3 = (undefined8 *)FUN_1407b6fb0(param_1);
    uVar2 = FUN_1407f35b0(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=1407f6ff0 name=FUN_1407f6ff0 */

undefined8 FUN_1407f6ff0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_1407ccfc0(0xb0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1407f4e70(0xb0,lVar1);
    puVar3 = (undefined8 *)FUN_1407b6fb0(param_1);
    uVar2 = FUN_140819270(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=1407f7050 name=FUN_1407f7050 */

undefined8 FUN_1407f7050(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_1407ccfc0(0xa8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1407f4e70(0xa8,lVar1);
    puVar3 = (undefined8 *)FUN_1407b6fb0(param_1);
    uVar2 = FUN_1407f3cf0(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=1407f70b0 name=FUN_1407f70b0 */

undefined8 FUN_1407f70b0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_1407ccfc0(0xf0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1407f4e70(0xf0,lVar1);
    puVar3 = (undefined8 *)FUN_1407b6fb0(param_1);
    uVar2 = FUN_1407f2ec0(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=1407f7110 name=FUN_1407f7110 */

undefined8 FUN_1407f7110(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = FUN_1407ccfc0(0x38);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined *)FUN_1407f4e70(0x38,lVar1);
    puVar4 = puVar2;
    for (lVar1 = 0x38; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uVar3 = FUN_1407f5ae0(puVar2);
  }
  return uVar3;
}


/* address=1407f7170 name=FUN_1407f7170 */

void FUN_1407f7170(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f5130(param_2);
  return;
}


/* address=1407f7190 name=FUN_1407f7190 */

void FUN_1407f7190(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f72d0(param_2);
  return;
}


/* address=1407f71b0 name=FUN_1407f71b0 */

void FUN_1407f71b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f72f0(param_2);
  return;
}


/* address=1407f71d0 name=FUN_1407f71d0 */

void FUN_1407f71d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f7310(param_2);
  return;
}


/* address=1407f71f0 name=FUN_1407f71f0 */

void FUN_1407f71f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f7330(param_2);
  return;
}


/* address=1407f7210 name=FUN_1407f7210 */

void FUN_1407f7210(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f7350(param_2);
  return;
}


/* address=1407f7230 name=FUN_1407f7230 */

void FUN_1407f7230(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f53c0(param_2);
  return;
}


/* address=1407f7250 name=FUN_1407f7250 */

void FUN_1407f7250(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f7370(param_2);
  return;
}


/* address=1407f7270 name=FUN_1407f7270 */

void FUN_1407f7270(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f5260(param_2);
  return;
}


/* address=1407f7290 name=FUN_1407f7290 */

void FUN_1407f7290(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f5150(param_2);
  return;
}


/* address=1407f72b0 name=FUN_1407f72b0 */

void FUN_1407f72b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407f4eb0(param_2);
  return;
}


/* address=1407f72d0 name=FUN_1407f72d0 */

void FUN_1407f72d0(undefined8 param_1)

{
  FUN_1407f7450(param_1);
  return;
}


/* address=1407f72f0 name=FUN_1407f72f0 */

void FUN_1407f72f0(undefined8 param_1)

{
  FUN_1407f7420(param_1);
  return;
}


/* address=1407f7310 name=FUN_1407f7310 */

void FUN_1407f7310(undefined8 param_1)

{
  FUN_1407ac770(param_1);
  return;
}


/* address=1407f7330 name=FUN_1407f7330 */

void FUN_1407f7330(undefined8 param_1)

{
  FUN_1407f73f0(param_1);
  return;
}


/* address=1407f7350 name=FUN_1407f7350 */

void FUN_1407f7350(undefined8 param_1)

{
  FUN_1407f73c0(param_1);
  return;
}


/* address=1407f7370 name=FUN_1407f7370 */

void FUN_1407f7370(undefined8 param_1)

{
  FUN_1407f7390(param_1);
  return;
}


/* address=1407f7390 name=FUN_1407f7390 */

void FUN_1407f7390(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1407f53e0(param_1,0);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407f73c0 name=FUN_1407f73c0 */

void FUN_1407f73c0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1407f5a60(param_1,0);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407f73f0 name=FUN_1407f73f0 */

void FUN_1407f73f0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1407f5aa0(param_1,0);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407f7420 name=FUN_1407f7420 */

void FUN_1407f7420(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407f7450 name=FUN_1407f7450 */

void FUN_1407f7450(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1407f63b0(param_1,0);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407f74b0 name=FUN_1407f74b0 */

void FUN_1407f74b0(void)

{
  FUN_1407ac640();
  return;
}


/* address=1407f74d0 name=FUN_1407f74d0 */

void FUN_1407f74d0(undefined8 param_1)

{
  FUN_1407ac660(param_1);
  return;
}


/* address=1407f74f0 name=FUN_1407f74f0 */

void FUN_1407f74f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac6e0(param_1,param_2);
  return;
}


/* address=1407f7520 name=FUN_1407f7520 */

void FUN_1407f7520(undefined8 param_1)

{
  FUN_1407ac770(param_1);
  return;
}


/* address=1407f7540 name=FUN_1407f7540 */

void FUN_1407f7540(undefined8 param_1,undefined8 param_2)

{
  FUN_1407ac7b0(param_1,&LAB_1407f7480,param_2);
  return;
}


/* address=1407f7570 name=FUN_1407f7570 */

void FUN_1407f7570(undefined8 param_1,undefined8 param_2)

{
  FUN_1407aca20(param_1,param_2);
  return;
}


/* address=1407f75a0 name=FUN_1407f75a0 */

void FUN_1407f75a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acf60(param_1,param_2);
  return;
}


/* address=1407f75d0 name=FUN_1407f75d0 */

void FUN_1407f75d0(undefined8 param_1)

{
  FUN_1407acf90(param_1);
  return;
}


/* address=1407f7610 name=FUN_1407f7610 */

void FUN_1407f7610(undefined8 param_1)

{
  FUN_1407d81e0(param_1,&DAT_1409ae178);
  return;
}


/* address=1407f7640 name=FUN_1407f7640 */

void FUN_1407f7640(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407d8880(param_1,param_2,param_3,&DAT_1409ae178);
  return;
}


/* address=1407f7680 name=FUN_1407f7680 */

void FUN_1407f7680(undefined8 param_1,undefined8 param_2)

{
  FUN_1407dab60(param_1,param_2,&DAT_1409ae178);
  return;
}


/* address=1407f76b0 name=FUN_1407f76b0 */

longlong FUN_1407f76b0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_30;
  longlong local_28;
  undefined local_20 [32];
  
  local_30 = 0;
  iVar1 = FUN_1407f7680(param_1,&local_30);
  if (-1 < iVar1) {
    FUN_1407dce80(local_20,local_30,(longlong)iVar1);
    local_28 = FUN_1407ab750(local_20);
    if ((local_28 != 0) && (lVar2 = FUN_1407dcf10(local_20), lVar2 == 0)) {
      FUN_1407cd0f0(local_30);
      return local_28;
    }
    FUN_1407c2680(0x13,0,0x68,s_D__a_1_s_target_release_build_bo_140c02970,0x71);
    FUN_140750120(local_28);
    FUN_1407cd0f0(local_30);
  }
  return 0;
}


/* address=1407f7780 name=FUN_1407f7780 */

longlong FUN_1407f7780(undefined8 param_1)

{
  int iVar1;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined local_38 [56];
  
  local_58 = 0;
  iVar1 = FUN_1407df140(local_38,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_1407ab8d0(local_38,param_1), iVar1 == 0)) ||
      (iVar1 = FUN_1407df270(local_38,&local_58,&local_50), iVar1 == 0)) ||
     (0x7fffffff < CONCAT44(uStack_4c,local_50))) {
    FUN_1407df200(local_38);
    FUN_1407c2680(0x13,0,0x69,s_D__a_1_s_target_release_build_bo_140c029e0,0x84);
  }
  else {
    local_40 = local_58;
    local_48 = FUN_1407f7640(0,&local_40,local_50);
    if ((local_48 != 0) && (local_40 == local_58 + CONCAT44(uStack_4c,local_50))) {
      FUN_1407cd0f0(local_58);
      return local_48;
    }
    FUN_1407f7610(local_48);
    FUN_1407c2680(0x13,0,0x68,s_D__a_1_s_target_release_build_bo_140c02a50,0x8c);
  }
  FUN_1407cd0f0(local_58);
  return 0;
}


/* address=1407f78b0 name=FUN_1407f78b0 */

longlong FUN_1407f78b0(undefined4 param_1,undefined8 param_2,char *param_3,int param_4,
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
  local_58 = FUN_1407f76b0(param_8);
  if (local_58 == 0) {
    return 0;
  }
  local_68 = 0;
  local_60 = 0;
  iVar1 = FUN_1407df140(local_38,0x80);
  if (iVar1 != 0) {
    sVar2 = local_50;
    iVar1 = FUN_14086ed70(local_38,param_1,param_2,param_3,local_50,param_5,param_6,param_7,local_58
                         );
    uVar3 = (undefined4)(sVar2 >> 0x20);
    if ((iVar1 != 0) && (iVar1 = FUN_1407df270(local_38,&local_60,&local_48), iVar1 != 0)) {
      local_40 = local_60;
      local_68 = FUN_14080bbe0(0,&local_40,local_48);
      if ((local_68 == 0) || (local_40 != local_60 + CONCAT44(uStack_44,local_48))) {
        FUN_1407c2680(0x13,0,0x44,s_D__a_1_s_target_release_build_bo_140c02ac0,CONCAT44(uVar3,0xdb))
        ;
        FUN_14080bbb0(local_68);
        local_68 = 0;
      }
      goto LAB_1407f7a48;
    }
  }
  FUN_1407df200(local_38);
LAB_1407f7a48:
  FUN_1407cd0f0(local_60);
  FUN_140750120(local_58);
  return local_68;
}


/* address=1407f7a70 name=FUN_1407f7a70 */

undefined8 FUN_1407f7a70(undefined8 param_1,char *param_2,int param_3)

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
  iVar1 = FUN_14080bc20(param_1,&local_38);
  if (-1 < iVar1) {
    FUN_1407dce80(local_20,local_38,(longlong)iVar1);
    local_40 = FUN_14086f100(local_20,param_2,local_30);
    if ((local_40 != 0) && (lVar2 = FUN_1407dcf10(local_20), lVar2 == 0)) {
      local_28 = FUN_1407f7780(local_40);
    }
  }
  FUN_1407cd0f0(local_38);
  FUN_140750120(local_40);
  return local_28;
}


/* address=1407f7b70 name=FUN_1407f7b70 */

int FUN_1407f7b70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

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
  local_a0 = FUN_1407f74d0(param_2);
  iVar1 = FUN_140870220(param_3,local_80,&local_d0);
  if (iVar1 == 0) {
    FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c03310,0x255);
    return 0;
  }
  *param_1 = 0;
  FUN_1407f93b0(&local_100,0,0x20);
  uVar2 = wcstoul(local_80,local_c8,0x20000010);
  if (((uVar2 == 0) || (lVar3 = FUN_1407dcf10(local_80), lVar3 != 0)) ||
     (iVar1 = FUN_1407dd900(local_c8,&local_a8), iVar1 == 0)) {
    FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c03380,0x261);
  }
  else if (local_a8 < 3) {
    FUN_1407c2680(0x13,0,0x65,s_D__a_1_s_target_release_build_bo_140c033f0,0x266);
  }
  else {
    uVar2 = wcstoul((wchar_t *)local_c8,local_70,0x20000010);
    if (uVar2 == 0) {
      FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c03460,0x26b);
    }
    else {
      lVar3 = FUN_1407dcf10(local_c8);
      if (lVar3 == 0) {
        FUN_1407c2680(0x13,0,0x70,s_D__a_1_s_target_release_build_bo_140c034d0,0x270);
      }
      else {
        uVar2 = wcstoul((wchar_t *)local_c8,local_b8,0x20000010);
        if (uVar2 == 0) {
          FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c03540,0x275);
        }
        else {
          uVar2 = wcstoul((wchar_t *)local_70,local_30,6);
          if ((uVar2 == 0) ||
             (uVar2 = wcstoul((wchar_t *)local_70,local_20,-0x60000000), uVar2 == 0)) {
            FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c035b0,0x27e);
          }
          else {
            iVar1 = FUN_1407dd0a0(local_30,&DAT_1409ae150,9);
            if (iVar1 == 0) {
              FUN_1407c2680(0x13,0,0x72,s_D__a_1_s_target_release_build_bo_140c03620,0x285);
            }
            else {
              uVar2 = wcstoul((wchar_t *)local_20,local_90,4);
              if (uVar2 == 0) {
                FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c03690,0x28a);
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
                  FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c03700,0x297);
                }
                else {
                  local_108 = FUN_140802c90(local_60);
                  if (local_108 != 0) {
                    uVar2 = wcstoul((wchar_t *)local_60,local_50,4);
                    if ((uVar2 == 0) ||
                       (uVar2 = wcstoul((wchar_t *)local_b8,local_40,4), uVar2 == 0)) {
                      FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c03770,0x2a2);
                    }
                    else {
                      local_110 = 1;
                      lVar3 = FUN_1407dcf10(local_b8);
                      if ((lVar3 == 0) ||
                         ((iVar1 = FUN_1407dd900(local_b8,&local_110), iVar1 != 0 &&
                          (iVar1 = FUN_1407f92e0(local_110), iVar1 != 0)))) {
                        iVar1 = FUN_1407f9fb0(&local_118,local_f0,local_e8,local_40,
                                              (undefined4)local_110,local_108,local_90,local_50);
                        if (iVar1 != 0) {
                          if ((local_118 == 0) && (local_e8 == 0)) {
                            if (local_f0 == (char *)0x0) {
                              local_d8 = &DAT_140c1bfe8;
                            }
                            else {
                              local_d8 = (char *)0x0;
                            }
                            local_f0 = local_d8;
                            iVar1 = FUN_1407f9fb0(&local_118,local_d8,0,local_40,
                                                  (undefined4)local_110,local_108,local_90,local_50)
                            ;
                            if (iVar1 == 0) goto LAB_1407f8139;
                          }
                          if (local_118 == 0) {
                            FUN_1407c2680(0x13,0,0x6c,s_D__a_1_s_target_release_build_bo_140c03850,
                                          0x2c2);
                          }
                          else {
                            iVar1 = FUN_1407f93f0(local_90,&local_100,&LAB_1407f9c70);
                            if (iVar1 != 0) {
                              local_114 = 1;
                            }
                          }
                        }
                      }
                      else {
                        FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c037e0,0x2ab)
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
LAB_1407f8139:
  FUN_1407cd0f0(local_d0);
  if (local_114 == 0) {
    FUN_140750120(*param_1);
    *param_1 = 0;
    while (uVar4 = FUN_1407f74d0(param_2), local_a0 < uVar4) {
      local_98 = FUN_1407f75d0(param_2);
      FUN_140750fe0(local_98);
    }
  }
  return local_114;
}


/* address=1407f81d0 name=FUN_1407f81d0 */

longlong * FUN_1407f81d0(longlong **param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1407ccfc0(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_1407ccfc0(param_3);
    *plVar1 = lVar2;
    if (*plVar1 == 0) {
      FUN_1407cd0f0(plVar1);
      plVar1 = (longlong *)0x0;
    }
    else {
      FUN_1407f9360(*plVar1,*param_2,param_3);
      plVar1[1] = param_3;
      *param_2 = *param_2 + param_3;
      if (param_1 != (longlong **)0x0) {
        FUN_1407f92a0(*param_1);
        *param_1 = plVar1;
      }
    }
  }
  return plVar1;
}


/* address=1407f82a0 name=FUN_1407f82a0 */

undefined8 FUN_1407f82a0(undefined8 param_1,undefined8 param_2)

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
  puVar1 = (ulonglong *)FUN_140824d30();
  if (puVar1 == (ulonglong *)0x0) {
    local_18 = 0;
  }
  else {
    lVar2 = FUN_140824ee0(puVar1,0x2000);
    if (lVar2 != 0) {
      while( true ) {
        if (*puVar1 - local_28 < 0x80000000) {
          local_20 = (undefined4)(*puVar1 - local_28);
          local_34 = local_20;
        }
        else {
          local_34 = 0x7fffffff;
        }
        local_38 = FUN_1407c0160(param_1,puVar1[1] + local_28,local_34);
        if (local_38 < 0) {
          if (local_28 == 0) goto LAB_1407f83f2;
          local_38 = 0;
        }
        if (local_38 == 0) break;
        local_28 = local_28 + (longlong)local_38;
        if ((*puVar1 <= local_28) &&
           ((DAT_1409ae170 < *puVar1 || (lVar2 = FUN_140824ee0(puVar1,*puVar1 << 1), lVar2 == 0))))
        goto LAB_1407f83f2;
      }
      local_10[0] = puVar1[1];
      local_18 = FUN_1407f81d0(param_2,local_10,local_28);
    }
LAB_1407f83f2:
    FUN_140824d80(puVar1);
  }
  return local_18;
}


/* address=1407f8570 name=_Reset<> */

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
  FUN_1407c0430(param_1,*param_2,param_2[1]);
  return;
}


/* address=1407f8610 name=FUN_1407f8610 */

undefined8
FUN_1407f8610(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
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
    local_40 = FUN_1407f74b0();
    if (local_40 == 0) {
      return 0;
    }
    bVar1 = true;
  }
  FUN_1407dce80(local_20,*param_1,param_1[1]);
  iVar2 = FUN_1407f7b70(param_3,local_40,local_20,param_2);
  if (iVar2 == 0) {
    if (bVar1) {
      FUN_1407f7520(local_40);
    }
    uVar4 = 0;
  }
  else {
    *param_4 = 0;
    uVar3 = FUN_1407f74d0(local_40);
    if ((*param_3 != 0) && (local_38 = uVar3, uVar3 != 0)) {
      while (local_38 = local_38 - 1, local_38 < uVar3) {
        uVar4 = FUN_1407f74f0(local_40,local_38);
        iVar2 = FUN_1407bd060(uVar4,*param_3);
        if (iVar2 != 0) {
          *param_4 = uVar4;
          FUN_1407f7570(local_40,local_38);
          break;
        }
        FUN_1407c2320();
      }
    }
    if (param_5 == (longlong *)0x0) {
      FUN_1407f7540(local_40,FUN_140750fe0);
    }
    else {
      *param_5 = local_40;
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=1407f92a0 name=FUN_1407f92a0 */

void FUN_1407f92a0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1407cd0f0(*param_1);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407f92e0 name=FUN_1407f92e0 */

undefined4 FUN_1407f92e0(ulonglong param_1)

{
  undefined4 local_18;
  
  if ((param_1 == 0) || (DAT_1409ae1a8 < param_1)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=1407f9320 name=FUN_1407f9320 */

undefined8 FUN_1407f9320(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1408d72a0(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=1407f9360 name=FUN_1407f9360 */

undefined8 FUN_1407f9360(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407f93b0 name=FUN_1407f93b0 */

undefined8 FUN_1407f93b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407f93f0 name=FUN_1407f93f0 */

undefined4 FUN_1407f93f0(undefined8 param_1,undefined8 param_2,code *param_3)

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
  iVar1 = FUN_140870220(param_1,local_38,&local_40);
  if (iVar1 == 0) {
    FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c02b30,0xfb);
    local_48 = 0;
  }
  else {
    uVar2 = wcstoul(local_38,local_28,0x20000010);
    if ((uVar2 == 0) || (lVar3 = FUN_1407dcf10(local_38), lVar3 != 0)) {
      FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c02ba0,0x102);
    }
    else {
      do {
        lVar3 = FUN_1407dcf10(local_28);
        if (lVar3 == 0) {
          local_48 = 1;
          break;
        }
        uVar2 = wcstoul((wchar_t *)local_28,local_18,0x20000010);
        if (uVar2 == 0) {
          FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c02c10,0x109);
          break;
        }
        iVar1 = (*param_3)(local_18,param_2);
      } while (iVar1 != 0);
    }
    FUN_1407cd0f0(local_40);
  }
  return local_48;
}


/* address=1407f9530 name=FUN_1407f9530 */

undefined8 FUN_1407f9530(wchar_t *param_1,longlong *param_2,undefined8 *param_3)

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
      lVar3 = FUN_1407dcf10(param_1);
      if (lVar3 == 0) {
        return 1;
      }
      uVar1 = wcstoul(param_1,local_70,0x20000010);
      if ((((uVar1 == 0) || (uVar1 = wcstoul((wchar_t *)local_70,local_50,6), uVar1 == 0)) ||
          (uVar1 = wcstoul((wchar_t *)local_70,local_60,0x20000011), uVar1 == 0)) ||
         (lVar3 = FUN_1407dcf10(local_70), lVar3 != 0)) {
        FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c02c80,0x141);
        goto LAB_1407f9744;
      }
      iVar2 = FUN_1407dd0a0(local_50,&DAT_1409ae120,9);
    } while (iVar2 == 0);
    if (((*param_2 != 0) || (uVar1 = wcstoul((wchar_t *)local_60,local_80,0x1e), uVar1 == 0)) ||
       ((lVar3 = FUN_1407dcf10(local_60), lVar3 != 0 ||
        (lVar3 = FUN_1407dcf10(local_80), lVar3 == 0)))) break;
    uVar4 = FUN_1407dcf10(local_80);
    iVar2 = FUN_1407df140(local_40,uVar4);
    if (iVar2 == 0) goto LAB_1407f9744;
    while (lVar3 = FUN_1407dcf10(local_80), lVar3 != 0) {
      iVar2 = FUN_14083a090(local_80,local_88);
      if ((iVar2 == 0) || (iVar2 = FUN_14083a190(local_40,local_88[0]), iVar2 == 0)) {
        FUN_1407c2680(0x13,0,0x83,s_D__a_1_s_target_release_build_bo_140c02d60,0x157);
        FUN_1407df200(local_40);
        goto LAB_1407f9744;
      }
    }
    iVar2 = FUN_1407df270(local_40,param_2,param_3);
    if (iVar2 == 0) {
      FUN_1407df200(local_40);
LAB_1407f9744:
      FUN_1407cd0f0(*param_2);
      *param_2 = 0;
      *param_3 = 0;
      return 0;
    }
  }
  FUN_1407c2680(0x13,0,100,s_D__a_1_s_target_release_build_bo_140c02cf0,0x14b);
  goto LAB_1407f9744;
}


/* address=1407f9fb0 name=FUN_1407f9fb0 */

void FUN_1407f9fb0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_118;
  local_c8 = 0;
  local_c0 = (undefined4 *)FUN_140756670(param_6);
  local_b8 = FUN_1407dcf10(param_4);
  uVar3 = FUN_1407dcef0(param_4);
  local_d8 = param_6;
  local_e0 = local_98;
  local_e8 = local_c0;
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,param_5);
  local_f8 = CONCAT71(local_f8._1_7_,3);
  iVar1 = FUN_14086f4f0(param_2,param_3,uVar3,local_b8);
  if (iVar1 != 0) {
    local_b0 = FUN_1407dcf10(param_7);
    local_a8 = FUN_1407dcef0(param_7);
    uVar3 = FUN_140756670(param_6);
    local_e8 = &local_c4;
    local_f0 = local_58;
    local_f8 = local_b0;
    lVar4 = FUN_1407568a0(param_6,local_98,uVar3,local_a8);
    if (lVar4 != 0) {
      uVar2 = FUN_1407dd0a0(param_8,local_58,local_c4);
      *param_1 = uVar2;
      local_c8 = 1;
    }
  }
  FUN_1407cd290(local_98,0x40);
  FUN_140805d70(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=1407fa150 name=FUN_1407fa150 */

undefined4
FUN_1407fa150(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    iVar1 = FUN_1407df890(param_1,local_40,0x20000011);
    if (iVar1 == 0) {
      local_118 = 0;
    }
    else if (param_3 == 0) {
LAB_1407fa2ce:
      if ((param_5 == 0) ||
         ((((iVar1 = FUN_1407df890(local_40,local_100,0x20000010), iVar1 != 0 &&
            (iVar1 = FUN_1407df890(local_100,local_d0,6), iVar1 != 0)) &&
           (iVar1 = FUN_1407df950(local_d0,&DAT_1409ae130,9), iVar1 != 0)) &&
          (((iVar1 = FUN_1407df890(local_100,local_a0,0x20000011), iVar1 != 0 &&
            (iVar1 = FUN_1407df890(local_a0,local_70,4), iVar1 != 0)) &&
           (iVar1 = FUN_1407df950(local_70,param_4,param_5), iVar1 != 0)))))) {
        iVar1 = FUN_1407e01e0(local_40);
        if ((iVar1 == 0) || (iVar1 = FUN_1407df350(param_1), iVar1 == 0)) {
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
      iVar1 = FUN_1407df890(local_40,local_100,0x20000010);
      if ((((iVar1 == 0) || (iVar1 = FUN_1407df890(local_100,local_d0,6), iVar1 == 0)) ||
          (iVar1 = FUN_1407df950(local_d0,&DAT_1409ae120,9), iVar1 == 0)) ||
         ((iVar1 = FUN_1407df890(local_100,local_a0,0x20000011), iVar1 == 0 ||
          (iVar1 = FUN_1407df890(local_a0,local_70,0x1e), iVar1 == 0)))) {
        local_118 = 0;
      }
      else {
        FUN_1407dce80(local_110,param_2,param_3);
        do {
          lVar2 = FUN_1407dcf10(local_110);
          if (lVar2 == 0) goto LAB_1407fa2ce;
          iVar1 = FUN_140839eb0(local_110,&local_114);
        } while ((iVar1 != 0) && (iVar1 = FUN_14083a3b0(local_70,local_114), iVar1 != 0));
        FUN_1407c2680(0x13,0,0x83,s_D__a_1_s_target_release_build_bo_140c03930,0x3ce);
        local_118 = 0;
      }
    }
  }
  return local_118;
}


/* address=1407fa3e0 name=FUN_1407fa3e0 */

undefined8
FUN_1407fa3e0(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
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
  iVar1 = FUN_1407df890(param_1,local_158,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_1407df890(local_158,local_f8,6), iVar1 == 0)) ||
      (iVar1 = FUN_1407df950(local_f8,&DAT_1409ae110,0xb), iVar1 == 0)) ||
     ((((iVar1 = FUN_1407df890(local_158,local_c8,0xa0000000), iVar1 == 0 ||
        (iVar1 = FUN_1407df890(local_c8,local_128,0x20000010), iVar1 == 0)) ||
       ((iVar1 = FUN_1407df890(local_128,local_98,6), iVar1 == 0 ||
        ((iVar1 = FUN_1407df950(local_98,&DAT_1409ae140,10), iVar1 == 0 ||
         (iVar1 = FUN_1407df890(local_128,local_68,0xa0000000), iVar1 == 0)))))) ||
      (iVar1 = FUN_1407df890(local_68,local_38,4), iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    local_174 = FUN_140751220(param_2,0);
    local_178 = 0;
    local_res18 = (char *)FUN_1407e6eb0(param_2,&local_178);
    local_170 = (size_t)local_178;
    local_168 = local_res18;
    if (param_3 != (char *)0x0) {
      if (local_170 != 0) {
        FUN_1407c2680(0x13,0,0x85,s_D__a_1_s_target_release_build_bo_140c039a0,CONCAT44(uVar3,0x3fc)
                     );
        return 0;
      }
      local_170 = strlen(param_3);
      local_res18 = param_3;
    }
    if ((((local_174 < 0) ||
         (iVar1 = FUN_1407dfa00(local_38,local_160,(longlong)local_174), iVar1 == 0)) ||
        (iVar1 = FUN_140751220(param_2,local_160), iVar1 < 0)) ||
       ((iVar1 = FUN_1407fa150(local_158,local_res18,local_170,param_4,param_5), iVar1 == 0 ||
        (iVar1 = FUN_1407df350(param_1), iVar1 == 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=1407fa650 name=FUN_1407fa650 */

undefined8
FUN_1407fa650(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_48;
  undefined local_40 [64];
  
  iVar1 = FUN_1407df890(param_1,local_40,0x20000010);
  if ((iVar1 == 0) ||
     ((param_2 != 0 && (iVar1 = FUN_1407fa3e0(local_40,param_2,param_4,param_5,param_6), iVar1 == 0)
      ))) {
    uVar3 = 0;
  }
  else {
    for (local_48 = 0; uVar2 = FUN_1407f74d0(param_3), local_48 < uVar2; local_48 = local_48 + 1) {
      uVar3 = FUN_1407f74f0(param_3,local_48);
      iVar1 = FUN_1407fa3e0(local_40,uVar3,0,0,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = FUN_1407df350(param_1);
  }
  return uVar3;
}


/* address=1407fa750 name=FUN_1407fa750 */

void FUN_1407fa750(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_10 = DAT_140c05940 ^ (ulonglong)auStack_268;
  iVar1 = FUN_14077f730(local_18,8);
  if (iVar1 != 0) {
    local_224 = 0;
    FUN_140781770(local_b8);
    iVar1 = FUN_1407df890(param_1,local_1d8,0x20000010);
    if (((((iVar1 != 0) && (iVar1 = FUN_1407df890(local_1d8,local_148,6), iVar1 != 0)) &&
         (iVar1 = FUN_1407df950(local_148,&DAT_1409ae160,9), iVar1 != 0)) &&
        (((iVar1 = FUN_1407df890(local_1d8,local_118,0xa0000000), iVar1 != 0 &&
          (iVar1 = FUN_1407df890(local_118,local_1a8,0x20000010), iVar1 != 0)) &&
         ((iVar1 = FUN_1407dfd50(local_1a8,0), iVar1 != 0 &&
          ((iVar1 = FUN_1407df890(local_1a8,local_208,0x20000010), iVar1 != 0 &&
           (iVar1 = FUN_1407df890(local_208,local_e8,6), iVar1 != 0)))))))) &&
       (iVar1 = FUN_1407df950(local_e8,&DAT_1409ae150,9), iVar1 != 0)) {
      local_230 = 8;
      local_238 = local_18;
      local_248 = param_3;
      local_240 = param_4;
      iVar1 = FUN_14086fb40(local_208,local_b8,param_2,param_5);
      if ((iVar1 != 0) && (iVar1 = FUN_1407df890(local_208,local_178,0x80000000), iVar1 != 0)) {
        uVar2 = FUN_140782c10(local_b8);
        local_218 = param_7 + uVar2;
        if (local_218 < param_7) {
          local_248 = CONCAT44(local_248._4_4_,0x44a);
          FUN_1407c2680(0x13,0,0x76,s_D__a_1_s_target_release_build_bo_140c03a10);
        }
        else {
          iVar1 = FUN_1407dfa60(local_178,&local_210,local_218);
          if (iVar1 != 0) {
            local_248 = CONCAT44(local_248._4_4_,(undefined4)param_7);
            iVar1 = FUN_140782ad0(local_b8,local_210,&local_228,param_6);
            if ((((iVar1 != 0) &&
                 (iVar1 = FUN_140782b50(local_b8,local_210 + local_228,local_220), iVar1 != 0)) &&
                (iVar1 = FUN_1407dfac0(local_178,(longlong)(local_228 + local_220[0])), iVar1 != 0))
               && (iVar1 = FUN_1407df350(param_1), iVar1 != 0)) {
              local_224 = 1;
            }
          }
        }
      }
    }
    FUN_1407817e0(local_b8);
  }
  FUN_140805d70(local_10 ^ (ulonglong)auStack_268);
  return;
}


/* address=1407fabf0 name=FUN_1407fabf0 */

void FUN_1407fabf0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1407b7160(*(longlong *)(param_1 + 0x30) + 0x118);
  if ((((*(byte *)(param_1 + 0xa4) & 1) == 0) && (lVar1 != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x30) + 0xd8) == 2)) {
    lVar2 = FUN_1407b7160(lVar1 + 0x5f8);
    uVar3 = FUN_1407b7160(lVar2 + 0x20);
    *param_2 = uVar3;
    lVar1 = FUN_1407b7160(lVar1 + 0x5f8);
    uVar3 = FUN_1407f5090(lVar1 + 0x20);
    *param_3 = uVar3;
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
  }
  return;
}


/* address=1407fb140 name=FUN_1407fb140 */

void FUN_1407fb140(longlong param_1)

{
  FUN_1407d3950(param_1 + 0x18);
  return;
}


/* address=1407fb170 name=FUN_1407fb170 */

void FUN_1407fb170(longlong param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_1407d39a0(param_1 + 0x18), iVar1 != 0)) {
    FUN_1407ffb90(param_1,0);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1407fb7c0 name=FUN_1407fb7c0 */

undefined8 FUN_1407fb7c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407fb810 name=FUN_1407fb810 */

undefined8 FUN_1407fb810(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1407fb850 name=FUN_1407fb850 */

void FUN_1407fb850(longlong param_1,undefined *param_2,undefined8 param_3,undefined param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined auStack_108 [32];
  undefined4 local_e8;
  char local_d8 [4];
  short local_d4 [2];
  undefined2 local_d0 [2];
  uint local_cc;
  undefined8 local_c8;
  undefined local_c0 [16];
  undefined local_b0 [24];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_140c05940 ^ (ulonglong)auStack_108;
  *(undefined *)(param_1 + 0x90) = param_4;
  puVar5 = local_98;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_1407f6c30(local_b0,local_98);
  cVar1 = FUN_1407fe5f0(local_b0,param_1,local_d8,1);
  if (cVar1 != '\0') {
    lVar6 = FUN_1407dcf10(local_b0);
    if (lVar6 == 0) {
      if (local_d8[0] == '\0') {
        local_e8 = 0x1f8;
        FUN_1407c2680(0x10,0,0x138,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                     );
      }
      else {
        puVar5 = (undefined *)(param_1 + 0x30);
        puVar7 = local_88;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_1407f6c30(local_c0,local_88);
        while (lVar6 = FUN_1407dcf10(local_c0), lVar6 != 0) {
          iVar3 = FUN_1407dd160(local_c0,local_d4);
          if ((iVar3 == 0) || (iVar3 = FUN_1407dd160(local_c0,local_d0), iVar3 == 0)) {
            local_e8 = 0x201;
            FUN_1407c2680(0x10,0,0x89,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                         );
            goto LAB_1407fbb3e;
          }
          if ((local_d4[0] != 1) || (lVar6 = FUN_1407fe080(local_d0[0]), lVar6 == 0))
          goto LAB_1407fb9fa;
        }
        iVar3 = FUN_1407e77c0(param_3,local_48,&local_c8,0x20);
        if (iVar3 == 0) goto LAB_1407fbb3e;
        local_cc = (uint)*(ushort *)(param_1 + 0x40);
        uVar4 = FUN_1407e77a0(param_3);
        uVar2 = FUN_1407e7490(uVar4);
        if (local_cc != uVar2) goto LAB_1407fbaeb;
        puVar5 = (undefined *)(param_1 + 0x10);
        puVar7 = local_78;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = (undefined *)FUN_1407f50f0(local_58,local_48,local_c8);
        puVar7 = local_68;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar1 = FUN_1407ff080(local_68,local_78);
        if (cVar1 != '\0') {
LAB_1407fbaeb:
          local_e8 = 0x217;
          FUN_1407c2680(0x10,0,0x136,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                       );
          goto LAB_1407fbb3e;
        }
        uVar4 = FUN_1407b6fb0(param_1 + 0x48);
        FUN_1407e7690(uVar4,param_3);
      }
    }
    else {
      local_e8 = 500;
      FUN_1407c2680(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                   );
    }
  }
LAB_1407fbb3e:
  FUN_140805d70(local_28 ^ (ulonglong)auStack_108);
  return;
LAB_1407fb9fa:
  local_e8 = 0x207;
  FUN_1407c2680(0x10,0,0x138,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
               );
  goto LAB_1407fbb3e;
}


/* address=1407fbb60 name=FUN_1407fbb60 */

ulonglong FUN_1407fbb60(longlong param_1,undefined8 param_2,short param_3,short param_4,
                       undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  short local_c4 [2];
  short local_c0 [4];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70 [16];
  undefined local_60 [56];
  undefined local_28 [24];
  
  puVar6 = (undefined *)(param_1 + 0x30);
  puVar7 = local_28;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_1407f6c30(local_70,local_28);
  bVar1 = false;
  do {
    lVar5 = FUN_1407dcf10(local_70);
    if (lVar5 == 0) goto LAB_1407fbc27;
    uVar3 = FUN_1407dd160(local_70,local_c4);
    if (((int)uVar3 == 0) || (uVar3 = FUN_1407dd160(local_70,local_c0), (int)uVar3 == 0)) {
      return uVar3 & 0xffffffffffffff00;
    }
  } while ((param_3 != local_c4[0]) || (param_4 != local_c0[0]));
  bVar1 = true;
LAB_1407fbc27:
  if (bVar1) {
    FUN_1407f6970(local_60);
    local_b8 = FUN_1407f5090(param_1);
    local_b8 = local_b8 + 8;
    uVar4 = FUN_1407b6fb0(local_60);
    iVar2 = FUN_1407df140(uVar4,local_b8);
    if (iVar2 != 0) {
      uVar4 = FUN_1407b6fb0(local_60);
      iVar2 = FUN_1407df950(uVar4,"tls ech",8);
      if (iVar2 != 0) {
        local_b0 = FUN_1407f5090(param_1);
        local_a8 = FUN_1407b7160(param_1);
        uVar4 = FUN_1407b6fb0(local_60);
        iVar2 = FUN_1407df950(uVar4,local_a8,local_b0);
        if (iVar2 != 0) {
          if (param_3 != 1) {
            FID_conflict__assert((wchar_t *)"k",(wchar_t *)"D",0x241);
          }
          lVar5 = FUN_1407fe080(param_4);
          if (lVar5 == 0) {
            FID_conflict__assert((wchar_t *)"g",(wchar_t *)"D",0x242);
          }
          uVar4 = FUN_1407b6fb0(local_60);
          local_a0 = FUN_1407df740(uVar4);
          uVar4 = FUN_1407b6fb0(local_60);
          local_98 = FUN_1407df6c0(uVar4);
          local_90 = FUN_1407f5090(param_5);
          local_88 = FUN_1407b7160(param_5);
          local_80 = FUN_1407fe080(param_4);
          local_78 = FUN_1407e7510();
          uVar4 = FUN_1407b6fb0(param_1 + 0x48);
          iVar2 = FUN_1407e7c60(param_2,uVar4,local_78,local_80,local_88,local_90,local_98,local_a0)
          ;
          FUN_1407f69a0(local_60);
          return (ulonglong)(iVar2 != 0);
        }
      }
    }
    FUN_1407f69a0(local_60);
  }
  return 0;
}


/* address=1407fbe80 name=FUN_1407fbe80 */

ulonglong FUN_1407fbe80(longlong *param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                       longlong param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined *puVar8;
  char local_228;
  byte local_227;
  byte local_226;
  byte local_225;
  byte local_224;
  byte local_223;
  byte local_222;
  byte local_221;
  byte local_220;
  byte local_21f;
  byte local_21e;
  byte local_21d;
  byte local_21c;
  byte local_21b;
  byte local_21a;
  short local_218 [2];
  short local_214 [2];
  longlong local_210;
  undefined local_208 [16];
  undefined local_1f8 [48];
  undefined local_1c8 [16];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  undefined local_180 [16];
  undefined local_170 [16];
  undefined local_160 [16];
  longlong local_150;
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [16];
  undefined local_118 [48];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [48];
  undefined local_98 [48];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_38;
  longlong local_30;
  undefined local_28 [24];
  
  puVar6 = local_e8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1407f6c30(local_128,local_e8);
  cVar1 = FUN_140860510(param_1,local_128,local_98);
  if (cVar1 == '\0') {
    uVar4 = FUN_1407c2680(0x10,0,0x89,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                          ,0x85);
    return uVar4 & 0xffffffffffffff00;
  }
  while (iVar3 = FUN_1407dd110(local_128,&local_228), iVar3 != 0) {
    if (local_228 != '\0') {
      FUN_1407c2680(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                    ,0x8c);
      *param_2 = 0x2f;
      return (ulonglong)param_2 & 0xffffffffffffff00;
    }
  }
  if ((local_30 == 0) || (local_60 != 0)) {
    uVar4 = FUN_1407c2680(0x10,0,0x89,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                          ,0x96);
    return uVar4 & 0xffffffffffffff00;
  }
  local_68 = *(undefined8 *)(param_5 + 0x30);
  local_60 = *(undefined8 *)(param_5 + 0x38);
  FUN_1407f6970(local_1f8);
  uVar5 = FUN_1407b6fb0(local_1f8);
  local_190 = *param_1;
  cVar1 = (**(code **)(local_190 + 0x58))(param_1,uVar5,local_c8,1);
  if (((cVar1 == '\0') || (cVar1 = FUN_1407fe120(local_98,local_c8), cVar1 == '\0')) ||
     (iVar3 = FUN_1407df830(local_c8,local_118), iVar3 == 0)) {
    FUN_1407c2680(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                  ,0xa2);
    local_227 = 0;
    FUN_1407f69a0(local_1f8);
    return (ulonglong)local_227;
  }
  FUN_1407f50f0(local_208,local_38,local_30);
  cVar1 = FUN_140860800(local_98,local_1c8,0xfd00);
  if (cVar1 == '\0') {
    local_188 = FUN_1407f5090(local_208);
    uVar5 = FUN_1407b7160(local_208);
    iVar3 = FUN_1407df950(local_118,uVar5,local_188);
    if (iVar3 == 0) {
      FUN_1407c2680(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                    ,0xae);
      local_226 = 0;
      FUN_1407f69a0(local_1f8);
      return (ulonglong)local_226;
    }
LAB_1407fc5ad:
    iVar3 = FUN_1407df350(local_c8);
    if (iVar3 == 0) {
      FUN_1407c2680(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                    ,0xf5);
      local_21d = 0;
      FUN_1407f69a0(local_1f8);
      return (ulonglong)local_21d;
    }
    local_1a0 = FUN_1407df740(local_c8);
    uVar5 = FUN_1407df6c0(local_c8);
    puVar6 = (undefined *)FUN_1407f50f0(local_28,uVar5,local_1a0);
    puVar8 = local_d8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar1 = FUN_1407fe230(param_1,param_2,local_d8);
    if (cVar1 == '\0') {
      local_21c = 0;
      FUN_1407f69a0(local_1f8);
      return (ulonglong)local_21c;
    }
    uVar5 = FUN_1407b6fb0(local_1f8);
    local_198 = *param_1;
    cVar1 = (**(code **)(local_198 + 0x60))(param_1,uVar5,param_3);
    if (cVar1 == '\0') {
      FUN_1407c2680(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                    ,0xff);
      local_21b = 0;
      FUN_1407f69a0(local_1f8);
      return (ulonglong)local_21b;
    }
    local_21a = 1;
    FUN_1407f69a0(local_1f8);
    return (ulonglong)local_21a;
  }
  local_150 = FUN_1407dcef0(local_1c8);
  local_210 = FUN_1407b7160(local_208);
  local_210 = local_150 - local_210;
  FUN_1407f57e0(local_208,local_148,0,local_210 + -4);
  lVar7 = FUN_1407dcf10(local_1c8);
  FUN_1407f57e0(local_208,local_138,local_210 + lVar7,0xffffffffffffffff);
  local_1b8 = FUN_1407f5090(local_148);
  uVar5 = FUN_1407b7160(local_148);
  iVar3 = FUN_1407df950(local_118,uVar5,local_1b8);
  if (iVar3 == 0) {
    FUN_1407c2680(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                  ,0xb9);
    local_225 = 0;
    FUN_1407f69a0(local_1f8);
    return (ulonglong)local_225;
  }
  iVar3 = FUN_1407dd490(local_1c8,local_180);
  if (((iVar3 == 0) || (lVar7 = FUN_1407dcf10(local_180), lVar7 == 0)) ||
     (lVar7 = FUN_1407dcf10(local_1c8), lVar7 != 0)) {
    FUN_1407c2680(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                  ,0xc1);
    local_224 = 0;
    FUN_1407f69a0(local_1f8);
    return (ulonglong)local_224;
  }
  FUN_1407dce80(local_170,*(undefined8 *)(param_5 + 0x60),*(undefined8 *)(param_5 + 0x68));
  do {
    lVar7 = FUN_1407dcf10(local_180);
    if (lVar7 == 0) {
      local_1a8 = FUN_1407f5090(local_138);
      uVar5 = FUN_1407b7160(local_138);
      iVar3 = FUN_1407df950(local_118,uVar5,local_1a8);
      if (iVar3 == 0) {
        FUN_1407c2680(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                      ,0xf0);
        local_21e = 0;
        FUN_1407f69a0(local_1f8);
        return (ulonglong)local_21e;
      }
      goto LAB_1407fc5ad;
    }
    iVar3 = FUN_1407dd160(local_180,local_218);
    if (iVar3 == 0) {
      FUN_1407c2680(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                    ,0xcb);
      local_223 = 0;
      FUN_1407f69a0(local_1f8);
      return (ulonglong)local_223;
    }
    if (local_218[0] == -499) {
      *param_2 = 0x2f;
      FUN_1407c2680(0x10,0,0x140,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                    ,0xd1);
      local_222 = 0;
      FUN_1407f69a0(local_1f8);
      return (ulonglong)local_222;
    }
    do {
      lVar7 = FUN_1407dcf10(local_170);
      if (lVar7 == 0) {
        *param_2 = 0x2f;
        FUN_1407c2680(0x10,0,0x140,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                      ,0xdb);
        local_221 = 0;
        FUN_1407f69a0(local_1f8);
        return (ulonglong)local_221;
      }
      iVar3 = FUN_1407dd160(local_170,local_214);
      if ((iVar3 == 0) || (iVar3 = FUN_1407dd4c0(local_170,local_160), iVar3 == 0)) {
        FUN_1407c2680(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                      ,0xe0);
        local_220 = 0;
        FUN_1407f69a0(local_1f8);
        return (ulonglong)local_220;
      }
    } while (local_214[0] != local_218[0]);
    iVar3 = FUN_1407dfb70(local_118,local_214[0]);
    if (iVar3 == 0) break;
    uVar2 = FUN_1407dcf10(local_160);
    iVar3 = FUN_1407dfb70(local_118,uVar2);
    if (iVar3 == 0) break;
    local_1b0 = FUN_1407dcf10(local_160);
    uVar5 = FUN_1407dcef0(local_160);
    iVar3 = FUN_1407df950(local_118,uVar5,local_1b0);
  } while (iVar3 != 0);
  FUN_1407c2680(0x10,0,0x89,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                ,0xe9);
  local_21f = 0;
  FUN_1407f69a0(local_1f8);
  return (ulonglong)local_21f;
}


/* address=1407fc730 name=FUN_1407fc730 */

undefined FUN_1407fc730(undefined8 *param_1,undefined *param_2,undefined *param_3,undefined8 param_4
                       ,longlong param_5,undefined8 param_6)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined local_130 [16];
  undefined local_120 [16];
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined local_a0 [24];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  *param_3 = 0;
  FUN_1407f5420(local_120);
  puVar4 = (undefined *)
           FUN_1407f50f0(local_58,*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10));
  puVar8 = local_88;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  cVar1 = FUN_1407f56c0(local_120,local_88);
  if (cVar1 == '\0') {
    *param_2 = 0x50;
    FUN_1407f54a0(local_120);
    uVar2 = 0;
  }
  else {
    uVar5 = FUN_1407b7160(param_6);
    if (uVar5 < *(ulonglong *)(param_5 + 0x60)) {
      FID_conflict__assert((wchar_t *)"r",(wchar_t *)"D",0x118);
    }
    local_108 = *(longlong *)(param_5 + 0x60) + *(longlong *)(param_5 + 0x68);
    local_110 = FUN_1407b7160(param_6);
    lVar7 = FUN_1407f5090(param_6);
    if (local_108 < (ulonglong)(local_110 + lVar7)) {
      FID_conflict__assert((wchar_t *)"r",(wchar_t *)"D",0x11b);
    }
    local_100 = FUN_1407f5090(param_6);
    local_f8 = FUN_1407b7160(param_6);
    local_f8 = local_f8 - *(longlong *)(param_5 + 8);
    uVar6 = FUN_1407ffbd0(local_48,local_120);
    FUN_1407f57e0(uVar6,local_a0,local_f8,local_100);
    local_f0 = FUN_1407f5090(local_a0);
    uVar6 = FUN_1407b7160(local_a0);
    FUN_1407fb810(uVar6,0,local_f0);
    FUN_1407f5420(local_130);
    uVar6 = FUN_1407f5090(param_6);
    cVar1 = FUN_1407f55e0(local_130,uVar6);
    if (cVar1 == '\0') {
      *param_2 = 0x50;
      FUN_1407f54a0(local_130);
      FUN_1407f54a0(local_120);
      uVar2 = 0;
    }
    else {
      local_e8 = FUN_1407f5090(local_120);
      local_e0 = FUN_1407b7160(local_120);
      local_d8 = FUN_1407f5090(param_6);
      local_d0 = FUN_1407b7160(param_6);
      local_c8 = FUN_1407f5090(local_130);
      local_c0 = FUN_1407b7160(local_130);
      uVar6 = FUN_1407b6fb0(param_1 + 0x5a);
      iVar3 = FUN_1407e81b0(uVar6,local_c0,&local_b8,local_c8,local_d0,local_d8,local_e0,local_e8);
      if (iVar3 == 0) {
        *param_2 = 0x33;
        *param_3 = 1;
        FUN_1407c2680(0x10,0,0x8a,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                      ,0x13c);
        FUN_1407f54a0(local_130);
        FUN_1407f54a0(local_120);
        uVar2 = 0;
      }
      else {
        FUN_1407ff2d0(local_130,local_b8);
        local_b0 = local_38;
        puVar4 = (undefined *)FUN_1407f6c30(local_b0,local_130);
        puVar8 = local_78;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        cVar1 = FUN_1407fbe80(*param_1,param_2,param_4,local_78,param_5);
        if (cVar1 == '\0') {
          FUN_1407f54a0(local_130);
          FUN_1407f54a0(local_120);
          uVar2 = 0;
        }
        else {
          local_a8 = local_28;
          puVar4 = (undefined *)FUN_1407f6c30(local_a8,param_4);
          puVar8 = local_68;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_1407f2980(*param_1,0,0x101,local_68);
          FUN_1407f54a0(local_130);
          FUN_1407f54a0(local_120);
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}


/* address=1407fcbf0 name=FUN_1407fcbf0 */

ulonglong FUN_1407fcbf0(undefined *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined local_d7 [7];
  undefined local_d0 [16];
  byte local_c0;
  char *local_b8;
  undefined local_b0 [16];
  longlong local_a0;
  undefined *local_98;
  undefined8 local_90;
  char *local_88;
  undefined local_80 [24];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar4 = local_d0;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  cVar1 = FUN_1407f50a0(local_d0);
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_1407f5060(local_80);
  while (cVar1 = FUN_1407f50a0(local_d0), cVar1 == '\0') {
    local_d7[0] = 0x2e;
    local_90 = FUN_1407f50d0(local_d0);
    uVar3 = FUN_1407b7160(local_d0);
    local_a0 = FUN_1407ffc20(uVar3,local_90,local_d7);
    FUN_1407f5060(local_b0);
    lVar7 = FUN_1407f50d0(local_d0);
    if (local_a0 == lVar7) {
      puVar4 = local_d0;
      puVar8 = local_b0;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = local_b0;
      puVar8 = local_80;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined *)FUN_1407f5060(local_48);
      puVar8 = local_d0;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    else {
      lVar7 = FUN_1407b7160(local_d0);
      puVar4 = (undefined *)FUN_1407f57e0(local_d0,local_38,0,local_a0 - lVar7);
      puVar8 = local_b0;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      lVar7 = FUN_1407b7160(local_d0);
      puVar4 = (undefined *)
               FUN_1407f57e0(local_d0,local_28,(local_a0 - lVar7) + 1,0xffffffffffffffff);
      puVar8 = local_d0;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      cVar1 = FUN_1407f50a0(local_d0);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    cVar1 = FUN_1407f50a0(local_b0);
    uVar5 = 0;
    if ((cVar1 != '\0') || (uVar5 = FUN_1407f5090(local_b0), 0x3f < uVar5)) {
LAB_1407fcdd5:
      return uVar5 & 0xffffffffffffff00;
    }
    pcVar6 = (char *)FUN_1407ff0f0(local_b0);
    uVar5 = 0;
    if (*pcVar6 == '-') goto LAB_1407fcdd5;
    pcVar6 = (char *)FUN_1407ff130(local_b0);
    uVar5 = 0;
    if (*pcVar6 == '-') goto LAB_1407fcdd5;
    local_98 = local_b0;
    local_b8 = (char *)FUN_1407b7160(local_98);
    local_88 = (char *)FUN_1407f50d0(local_98);
    for (; local_b8 != local_88; local_b8 = local_b8 + 1) {
      cVar1 = *local_b8;
      iVar2 = FUN_1407cd660(cVar1);
      if ((iVar2 == 0) && (cVar1 != '-')) {
        return 0;
      }
    }
  }
  puVar4 = local_80;
  puVar8 = local_68;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar8 = puVar8 + 1;
  }
  cVar1 = FUN_1407fe460(local_68);
  if (cVar1 == '\0') {
    puVar4 = local_80;
    puVar8 = local_58;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar1 = FUN_1407fe550(local_58);
    if (cVar1 == '\0') {
      local_c0 = 1;
      goto LAB_1407fcebe;
    }
  }
  local_c0 = 0;
LAB_1407fcebe:
  return (ulonglong)local_c0;
}


/* address=1407fcee0 name=FUN_1407fcee0 */

ulonglong FUN_1407fcee0(undefined *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_a7 [7];
  undefined local_a0 [16];
  undefined local_90 [24];
  undefined local_78 [16];
  undefined local_68 [88];
  
  puVar4 = local_78;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1407f6c30(local_90,local_78);
  uVar2 = FUN_1407dd4c0(local_90,local_a0);
  if ((((int)uVar2 != 0) && (uVar2 = FUN_1407dcf10(local_a0), uVar2 != 0)) &&
     (uVar2 = FUN_1407dcf10(local_90), uVar2 == 0)) {
    while( true ) {
      lVar3 = FUN_1407dcf10(local_a0);
      if (lVar3 == 0) {
        return 1;
      }
      FUN_1407ff340(local_68);
      cVar1 = FUN_1407fe5f0(local_a0,local_68,local_a7,0);
      if (cVar1 == '\0') break;
      FUN_1407ff3b0(local_68);
    }
    FUN_1407ff3b0(local_68);
    return 0;
  }
  return uVar2 & 0xffffffffffffff00;
}


/* address=1407fcfc0 name=FUN_1407fcfc0 */

undefined FUN_1407fcfc0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  char local_166;
  undefined local_165;
  undefined local_164;
  undefined local_163;
  uint local_160;
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
  undefined local_f8 [8];
  undefined local_f0 [24];
  undefined local_d8 [16];
  undefined local_c8 [32];
  undefined local_a8 [16];
  short local_98;
  undefined local_88 [16];
  undefined local_78 [48];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  *param_3 = 0;
  if ((0x303 < *(ushort *)((longlong)param_1 + 0x1e)) &&
     (cVar1 = FUN_1407f50a0(param_1[1] + 0xd8), cVar1 == '\0')) {
    puVar3 = (undefined *)FUN_1407ffbd0(local_28,param_1[1] + 0xd8);
    puVar6 = local_48;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_1407f6c30(local_88,local_48);
    iVar2 = FUN_1407dd4c0(local_88,local_f0);
    if (((iVar2 == 0) || (lVar5 = FUN_1407dcf10(local_f0), lVar5 == 0)) ||
       (lVar5 = FUN_1407dcf10(local_88), lVar5 != 0)) {
      return 0;
    }
    while (lVar5 = FUN_1407dcf10(local_f0), lVar5 != 0) {
      FUN_1407ff340(local_d8);
      cVar1 = FUN_1407fe5f0(local_f0,local_d8,&local_166,0);
      if (cVar1 == '\0') {
        FUN_1407ff3b0(local_d8);
        return 0;
      }
      local_110 = FUN_1407e7480();
      if ((local_166 != '\0') && (local_98 == 0x20)) {
        lVar5 = FUN_1407b7160(*param_1 + 8);
        if ((*(byte *)(lVar5 + 0xee) >> 3 & 1) == 0) {
          local_160 = FUN_140780880();
        }
        else {
          lVar5 = FUN_1407b7160(*param_1 + 8);
          local_160 = (uint)(*(byte *)(lVar5 + 0xee) >> 4 & 1);
        }
        puVar3 = local_a8;
        puVar6 = local_38;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        cVar1 = FUN_1407fea80(&local_118,&local_120,local_38);
        if (cVar1 != '\0') {
          FUN_1407f6970(local_78);
          local_158 = FUN_1407f5090(local_d8);
          local_158 = local_158 + 8;
          uVar4 = FUN_1407b6fb0(local_78);
          iVar2 = FUN_1407df140(uVar4,local_158);
          if (iVar2 != 0) {
            uVar4 = FUN_1407b6fb0(local_78);
            iVar2 = FUN_1407df950(uVar4,"tls ech",8);
            if (iVar2 != 0) {
              local_150 = FUN_1407f5090(local_d8);
              local_148 = FUN_1407b7160(local_d8);
              uVar4 = FUN_1407b6fb0(local_78);
              iVar2 = FUN_1407df950(uVar4,local_148,local_150);
              if (iVar2 != 0) {
                uVar4 = FUN_1407b6fb0(local_78);
                local_140 = FUN_1407df740(uVar4);
                uVar4 = FUN_1407b6fb0(local_78);
                local_138 = FUN_1407df6c0(uVar4);
                local_130 = FUN_1407f5090(local_c8);
                local_128 = FUN_1407b7160(local_c8);
                local_108 = FUN_1407f5090(param_2);
                local_100 = FUN_1407b7160(param_2);
                uVar4 = FUN_1407b6fb0(param_1 + 0x5a);
                iVar2 = FUN_1407e79f0(uVar4,local_100,param_3,local_108,local_110,local_118,
                                      local_120,local_128,local_130,local_138,local_140);
                if ((iVar2 != 0) && (cVar1 = FUN_140870ac0(param_1 + 0x38), cVar1 != '\0')) {
                  uVar4 = FUN_1407b6fb0(local_d8);
                  uVar4 = FUN_1407ffc90(local_f8,uVar4);
                  FUN_1407ffce0(param_1 + 0xbf,uVar4);
                  FUN_1407ff5e0(local_f8);
                  local_163 = FUN_1407b7610(param_1 + 0xbf,0);
                  FUN_1407f69a0(local_78);
                  FUN_1407ff3b0(local_d8);
                  return local_163;
                }
                local_164 = 0;
                FUN_1407f69a0(local_78);
                FUN_1407ff3b0(local_d8);
                return local_164;
              }
            }
          }
          local_165 = 0;
          FUN_1407f69a0(local_78);
          FUN_1407ff3b0(local_d8);
          return local_165;
        }
      }
      FUN_1407ff3b0(local_d8);
    }
  }
  return 1;
}


/* address=1407fd500 name=FUN_1407fd500 */

ulonglong FUN_1407fd500(longlong **param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char *_Str;
  longlong lVar6;
  undefined *puVar7;
  undefined8 in_stack_fffffffffffffce8;
  undefined4 uVar9;
  undefined8 uVar8;
  char local_2f8;
  byte local_2f7;
  byte local_2f6;
  byte local_2f5;
  byte local_2f4;
  byte local_2f3;
  byte local_2f2;
  byte local_2f1;
  byte local_2f0;
  undefined2 local_2ee;
  undefined2 local_2ec;
  longlong *local_2e8;
  longlong local_2e0;
  undefined local_2d8 [16];
  longlong local_2c8;
  undefined local_2c0 [16];
  undefined8 local_2b0;
  ulonglong local_2a8;
  size_t local_2a0;
  undefined8 local_298;
  undefined local_290 [48];
  undefined local_260 [48];
  undefined8 local_230;
  undefined *local_228;
  undefined *local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong **local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined local_1a8 [16];
  longlong local_198;
  undefined8 local_190;
  undefined local_188 [48];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [16];
  undefined local_118 [16];
  undefined local_108 [48];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [48];
  undefined local_48 [56];
  
  uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffce8 >> 0x20);
  local_2e8 = *param_1;
  cVar1 = FUN_1407b7170(param_1 + 0xbf);
  if (cVar1 == '\0') {
    uVar3 = FUN_1407fec40(param_1);
    return uVar3;
  }
  FUN_1407f6970(local_290);
  FUN_1407f6970(local_260);
  FUN_1407f5420(local_2d8);
  uVar4 = FUN_1407b6fb0(local_290);
  local_1b8 = *local_2e8;
  cVar1 = (**(code **)(local_1b8 + 0x58))(local_2e8,uVar4,local_108,1);
  if (cVar1 != '\0') {
    uVar4 = FUN_1407b6fb0(local_260);
    iVar2 = FUN_1407df140(uVar4,0x100);
    if ((iVar2 != 0) && (cVar1 = FUN_14084ba70(param_1,local_108,1,0), cVar1 != '\0')) {
      uVar4 = FUN_1407b6fb0(local_260);
      cVar1 = FUN_14084ba70(param_1,uVar4,1,1);
      if (cVar1 != '\0') {
        local_1b0 = FUN_1407df740(local_108);
        uVar4 = FUN_1407b6fb0(local_260);
        uVar8 = CONCAT44(uVar9,1);
        cVar1 = FUN_1408614c0(param_1,local_108,uVar4,&local_2f8,uVar8,local_1b0);
        uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (cVar1 != '\0') {
          uVar4 = FUN_1407b6fb0(local_290);
          local_198 = *local_2e8;
          cVar1 = (**(code **)(local_198 + 0x60))(local_2e8,uVar4,local_2d8);
          if (cVar1 != '\0') {
            if (local_2f8 != '\0') {
              puVar5 = (undefined *)FUN_1407ffbd0(local_d8,local_2d8);
              puVar7 = local_128;
              for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              cVar1 = FUN_140872f40(param_1,param_1 + 0x38,local_128,&local_2b0);
              if (cVar1 == '\0') {
                local_2f6 = 0;
                FUN_1407f54a0(local_2d8);
                FUN_1407f69a0(local_260);
                FUN_1407f69a0(local_290);
                return (ulonglong)local_2f6;
              }
              uVar4 = FUN_1407b6fb0(local_260);
              local_190 = FUN_1407df740(uVar4);
              uVar4 = FUN_1407b6fb0(local_260);
              uVar4 = FUN_1407df6c0(uVar4);
              uVar4 = FUN_1407f50f0(local_c8,uVar4,local_190);
              FUN_1407ff1b0(uVar4,local_158,local_2b0);
              uVar4 = FUN_1407ffbd0(local_b8,local_2d8);
              FUN_1407ff1b0(uVar4,local_118,local_2b0);
              local_230 = FUN_1407b7160(local_118);
              uVar4 = FUN_1407b7160(local_158);
              FUN_1407fb7c0(uVar4,local_230,local_2b0);
            }
            local_228 = local_a8;
            puVar5 = (undefined *)FUN_1407f6c30(local_228,local_2d8);
            puVar7 = local_148;
            for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            FUN_1407f2980(local_2e8,1,0x101,local_148);
            local_220 = local_98;
            puVar5 = (undefined *)FUN_1407f6c30(local_220,local_2d8);
            puVar7 = local_138;
            for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            cVar1 = FUN_140870f40(param_1 + 0x38);
            if (cVar1 == '\0') {
              local_2f5 = 0;
              FUN_1407f54a0(local_2d8);
              FUN_1407f69a0(local_260);
              FUN_1407f69a0(local_290);
              return (ulonglong)local_2f5;
            }
            local_2e0 = 0;
            lVar6 = FUN_1407b7160(param_1 + 0xbf);
            local_2a8 = (ulonglong)*(byte *)(lVar6 + 0x42);
            cVar1 = FUN_1407b7170(local_2e8 + 0x12);
            if (cVar1 == '\0') {
              local_2e0 = local_2a8 + 9;
            }
            else {
              _Str = (char *)FUN_1407b7160(local_2e8 + 0x12);
              local_2a0 = strlen(_Str);
              if (local_2a0 <= local_2a8) {
                local_2e0 = local_2a8 - local_2a0;
              }
            }
            uVar4 = FUN_1407b6fb0(local_260);
            lVar6 = FUN_1407df740(uVar4);
            local_2e0 = local_2e0 + (0x1f - (ulonglong)(lVar6 + -1 + local_2e0) % 0x20);
            FUN_1407f5420(local_2c0);
            uVar4 = FUN_1407b6fb0(local_260);
            iVar2 = FUN_1407df9b0(uVar4,local_2e0);
            if (iVar2 != 0) {
              uVar4 = FUN_1407b6fb0(local_260);
              cVar1 = FUN_1407f2870(uVar4,local_2c0);
              if (cVar1 != '\0') {
                uVar4 = FUN_1407b6fb0(param_1 + 0x5a);
                local_210 = FUN_1407e8670(uVar4);
                uVar4 = FUN_1407b6fb0(param_1 + 0x5a);
                local_298 = FUN_1407e8650(uVar4);
                local_218 = FUN_1407f5090(local_2c0);
                local_2c8 = FUN_1407feb90(local_298);
                local_2c8 = local_218 + local_2c8;
                uVar4 = FUN_1407b6fb0(local_290);
                iVar2 = FUN_1407df140(uVar4,0x100);
                if (iVar2 != 0) {
                  local_2ee = FUN_1407e7520(local_210);
                  uVar4 = FUN_1407b6fb0(local_290);
                  iVar2 = FUN_1407dfb70(uVar4,local_2ee);
                  if (iVar2 != 0) {
                    local_2ec = FUN_1407e7590(local_298);
                    uVar4 = FUN_1407b6fb0(local_290);
                    iVar2 = FUN_1407dfb70(uVar4,local_2ec);
                    if (iVar2 != 0) {
                      local_208 = FUN_1407b7160(param_1 + 0xbf);
                      uVar4 = FUN_1407b6fb0(local_290);
                      iVar2 = FUN_1407dfb40(uVar4,*(undefined *)(local_208 + 0x43));
                      if (iVar2 != 0) {
                        uVar4 = FUN_1407b6fb0(local_290);
                        iVar2 = FUN_1407df830(uVar4,local_78);
                        if (iVar2 != 0) {
                          local_200 = FUN_1407f5090(param_2);
                          uVar4 = FUN_1407b7160(param_2);
                          iVar2 = FUN_1407df950(local_78,uVar4,local_200);
                          if (iVar2 != 0) {
                            uVar4 = FUN_1407b6fb0(local_290);
                            iVar2 = FUN_1407df830(uVar4,local_48);
                            if ((iVar2 != 0) &&
                               (iVar2 = FUN_1407df9b0(local_48,local_2c8), iVar2 != 0)) {
                              local_1f8 = param_1 + 0x45;
                              uVar4 = FUN_1407b6fb0(local_290);
                              cVar1 = FUN_1407f2870(uVar4,local_1f8);
                              if (cVar1 != '\0') {
                                FUN_1407f6970(local_188);
                                uVar4 = FUN_1407b6fb0(local_188);
                                iVar2 = FUN_1407df140(uVar4,0x100);
                                if (iVar2 != 0) {
                                  uVar4 = FUN_1407b6fb0(local_188);
                                  cVar1 = FUN_14084ba70(param_1,uVar4,2,0);
                                  if (cVar1 != '\0') {
                                    uVar4 = FUN_1407b6fb0(local_188);
                                    local_1f0 = FUN_1407df740(uVar4);
                                    uVar4 = FUN_1407b6fb0(local_188);
                                    uVar8 = CONCAT44(uVar9,2);
                                    cVar1 = FUN_1408614c0(param_1,uVar4,0,&local_2f8,uVar8,local_1f0
                                                         );
                                    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                                    if (cVar1 != '\0') {
                                      if (local_2f8 != '\0') {
                                        FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x36c);
                                      }
                                      uVar4 = FUN_1407ffbd0(local_88,param_1 + 0x45);
                                      FUN_1407ff1b0(uVar4,local_1a8,local_2c8);
                                      uVar4 = FUN_1407b6fb0(local_188);
                                      local_1e8 = FUN_1407df740(uVar4);
                                      uVar4 = FUN_1407b6fb0(local_188);
                                      local_1e0 = FUN_1407df6c0(uVar4);
                                      local_1d8 = FUN_1407f5090(local_2c0);
                                      local_1d0 = FUN_1407b7160(local_2c0);
                                      local_1c8 = FUN_1407f5090(local_1a8);
                                      local_1c0 = FUN_1407b7160(local_1a8);
                                      uVar4 = FUN_1407b6fb0(param_1 + 0x5a);
                                      iVar2 = FUN_1407e8340(uVar4,local_1c0,&local_2c8,local_1c8,
                                                            local_1d0,local_1d8,local_1e0,local_1e8)
                                      ;
                                      if ((iVar2 != 0) &&
                                         (lVar6 = FUN_1407f5090(local_1a8), local_2c8 == lVar6)) {
                                        local_2f0 = 1;
                                        FUN_1407f69a0(local_188);
                                        FUN_1407f54a0(local_2c0);
                                        FUN_1407f54a0(local_2d8);
                                        FUN_1407f69a0(local_260);
                                        FUN_1407f69a0(local_290);
                                        return (ulonglong)local_2f0;
                                      }
                                      local_2f1 = 0;
                                      FUN_1407f69a0(local_188);
                                      FUN_1407f54a0(local_2c0);
                                      FUN_1407f54a0(local_2d8);
                                      FUN_1407f69a0(local_260);
                                      FUN_1407f69a0(local_290);
                                      return (ulonglong)local_2f1;
                                    }
                                  }
                                }
                                FUN_1407c2680(0x10,0,0x44,
                                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                                              ,CONCAT44(uVar9,0x366));
                                local_2f2 = 0;
                                FUN_1407f69a0(local_188);
                                FUN_1407f54a0(local_2c0);
                                FUN_1407f54a0(local_2d8);
                                FUN_1407f69a0(local_260);
                                FUN_1407f69a0(local_290);
                                return (ulonglong)local_2f2;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                local_2f3 = 0;
                FUN_1407f54a0(local_2c0);
                FUN_1407f54a0(local_2d8);
                FUN_1407f69a0(local_260);
                FUN_1407f69a0(local_290);
                return (ulonglong)local_2f3;
              }
            }
            local_2f4 = 0;
            FUN_1407f54a0(local_2c0);
            FUN_1407f54a0(local_2d8);
            FUN_1407f69a0(local_260);
            FUN_1407f69a0(local_290);
            return (ulonglong)local_2f4;
          }
        }
      }
    }
  }
  FUN_1407c2680(0x10,0,0x44,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                ,CONCAT44(uVar9,0x318));
  local_2f7 = 0;
  FUN_1407f54a0(local_2d8);
  FUN_1407f69a0(local_260);
  FUN_1407f69a0(local_290);
  return (ulonglong)local_2f7;
}


/* address=1407fe080 name=FUN_1407fe080 */

undefined8 FUN_1407fe080(short param_1)

{
  short sVar1;
  undefined8 uVar2;
  undefined **local_30;
  
  local_30 = &PTR_FUN_1409ae230;
  while( true ) {
    if (local_30 == (undefined **)&DAT_1409ae248) {
      return 0;
    }
    uVar2 = (*(code *)*local_30)();
    sVar1 = FUN_1407e7590(uVar2);
    if (param_1 == sVar1) break;
    local_30 = local_30 + 1;
  }
  return uVar2;
}


/* address=1407fe120 name=FUN_1407fe120 */

undefined8 FUN_1407fe120(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_1407dfb70(param_2,*(undefined2 *)(param_1 + 0x18));
  if ((((((iVar1 != 0) &&
         (iVar1 = FUN_1407df950(param_2,*(undefined8 *)(param_1 + 0x20),
                                *(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) &&
        (iVar1 = FUN_1407df800(param_2,local_38), iVar1 != 0)) &&
       ((iVar1 = FUN_1407df950(local_38,*(undefined8 *)(param_1 + 0x30),
                               *(undefined8 *)(param_1 + 0x38)), iVar1 != 0 &&
        (iVar1 = FUN_1407df830(param_2,local_38), iVar1 != 0)))) &&
      ((iVar1 = FUN_1407df950(local_38,*(undefined8 *)(param_1 + 0x40),
                              *(undefined8 *)(param_1 + 0x48)), iVar1 != 0 &&
       ((iVar1 = FUN_1407df800(param_2,local_38), iVar1 != 0 &&
        (iVar1 = FUN_1407df950(local_38,*(undefined8 *)(param_1 + 0x50),
                               *(undefined8 *)(param_1 + 0x58)), iVar1 != 0)))))) &&
     (iVar1 = FUN_1407df350(param_2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=1407fe230 name=FUN_1407fe230 */

ulonglong FUN_1407fe230(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined *puVar6;
  short local_c8 [4];
  undefined local_c0 [16];
  undefined local_b0 [24];
  undefined local_98 [16];
  undefined local_88 [120];
  
  puVar6 = local_98;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar1 = FUN_140860490(param_1,local_88,local_98);
  if ((((cVar1 != '\0') && (cVar1 = FUN_140860800(local_88,local_c0,0xfe0d), cVar1 != '\0')) &&
      (lVar5 = FUN_1407dcf10(local_c0), lVar5 == 1)) &&
     ((pcVar3 = (char *)FUN_1407dcef0(local_c0), *pcVar3 == '\x01' &&
      (cVar1 = FUN_140860800(local_88,local_c0,0x2b), cVar1 != '\0')))) {
    iVar2 = FUN_1407dd490(local_c0,local_b0);
    if ((iVar2 == 0) ||
       ((lVar5 = FUN_1407dcf10(local_c0), lVar5 != 0 ||
        (lVar5 = FUN_1407dcf10(local_b0), lVar5 == 0)))) {
      *param_2 = 0x32;
      uVar4 = FUN_1407c2680(0x10,0,0x89,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                            ,0x68);
      return uVar4 & 0xffffffffffffff00;
    }
    while( true ) {
      lVar5 = FUN_1407dcf10(local_b0);
      if (lVar5 == 0) {
        return 1;
      }
      iVar2 = FUN_1407dd160(local_b0,local_c8);
      if (iVar2 == 0) break;
      if (((((local_c8[0] == 0x300) || (local_c8[0] == 0x301)) || (local_c8[0] == 0x302)) ||
          ((local_c8[0] == 0x303 || (local_c8[0] == -0x101)))) || (local_c8[0] == -0x103)) {
        *param_2 = 0x2f;
        uVar4 = FUN_1407c2680(0x10,0,0x13a,
                              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                              ,0x76);
        return uVar4 & 0xffffffffffffff00;
      }
    }
    *param_2 = 0x32;
    uVar4 = FUN_1407c2680(0x10,0,0x89,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                          ,0x6f);
    return uVar4 & 0xffffffffffffff00;
  }
  *param_2 = 0x2f;
  uVar4 = FUN_1407c2680(0x10,0,0x13a,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                        ,0x5e);
  return uVar4 & 0xffffffffffffff00;
}


/* address=1407fe460 name=FUN_1407fe460 */

undefined8 FUN_1407fe460(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined local_18 [24];
  
  uVar2 = FUN_1407f5090(param_1);
  if ((uVar2 < 2) || (pcVar3 = (char *)FUN_1407ff170(param_1,0), *pcVar3 != '0')) {
    return 0;
  }
  pcVar3 = (char *)FUN_1407ff170(param_1,1);
  if ((*pcVar3 != 'x') && (pcVar3 = (char *)FUN_1407ff170(param_1,1), *pcVar3 != 'X')) {
    return 0;
  }
  FUN_1407f57e0(param_1,local_18,2,0xffffffffffffffff);
  local_30 = (undefined *)FUN_1407b7160(local_18);
  puVar4 = (undefined *)FUN_1407f50d0(local_18);
  while( true ) {
    if (local_30 == puVar4) {
      return 1;
    }
    iVar1 = FUN_1407cd570(*local_30);
    if (iVar1 == 0) break;
    local_30 = local_30 + 1;
  }
  return 0;
}


/* address=1407fe550 name=FUN_1407fe550 */

undefined8 FUN_1407fe550(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *local_20;
  
  cVar1 = FUN_1407f50a0(param_1);
  if (cVar1 == '\0') {
    local_20 = (byte *)FUN_1407b7160(param_1);
    pbVar3 = (byte *)FUN_1407f50d0(param_1);
    for (; local_20 != pbVar3; local_20 = local_20 + 1) {
      if ((*local_20 < 0x30) || (0x39 < *local_20)) {
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


/* address=1407fe5f0 name=FUN_1407fe5f0 */

undefined8 FUN_1407fe5f0(undefined *param_1,longlong param_2,undefined *param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined *puVar8;
  short local_154 [2];
  ushort local_150 [4];
  undefined local_148 [16];
  longlong local_138;
  longlong local_130;
  undefined *local_128;
  undefined local_120 [16];
  undefined local_110 [16];
  undefined local_100 [16];
  undefined local_f0 [16];
  undefined local_e0 [16];
  undefined local_d0 [24];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar5 = param_1;
  puVar8 = local_f0;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar3 = FUN_1407dd160(param_1,local_154);
  if ((iVar3 == 0) || (iVar3 = FUN_1407dd4c0(param_1,local_148), iVar3 == 0)) {
    FUN_1407c2680(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                  ,0x19d);
    uVar4 = 0;
  }
  else if (local_154[0] == -499) {
    local_138 = FUN_1407dcf10(local_f0);
    local_130 = FUN_1407dcf10(param_1);
    local_130 = local_138 - local_130;
    uVar4 = FUN_1407dcef0(local_f0);
    puVar5 = (undefined *)FUN_1407f50f0(local_88,uVar4,local_130);
    puVar8 = local_b8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar2 = FUN_1407f56c0(param_2,local_b8);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      local_128 = local_78;
      puVar5 = (undefined *)FUN_1407f6c30(local_128,param_2);
      puVar8 = local_a8;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_1407f6c30(local_e0,local_a8);
      iVar3 = FUN_1407dcec0(local_e0,2);
      if ((((((iVar3 == 0) || (iVar3 = FUN_1407dd4c0(local_e0,local_148), iVar3 == 0)) ||
            (iVar3 = FUN_1407dd110(local_148,param_2 + 0x43), iVar3 == 0)) ||
           ((iVar3 = FUN_1407dd160(local_148,param_2 + 0x40), iVar3 == 0 ||
            (iVar3 = FUN_1407dd4c0(local_148,local_d0), iVar3 == 0)))) ||
          ((lVar7 = FUN_1407dcf10(local_d0), lVar7 == 0 ||
           ((iVar3 = FUN_1407dd4c0(local_148), iVar3 == 0 ||
            (lVar7 = FUN_1407dcf10(local_110), lVar7 == 0)))))) ||
         ((uVar6 = FUN_1407dcf10(local_110), uVar6 % 4 != 0 ||
          ((((iVar3 = FUN_1407dd110(local_148,param_2 + 0x42), iVar3 == 0 ||
             (iVar3 = FUN_1407dd490(local_148,local_120), iVar3 == 0)) ||
            (lVar7 = FUN_1407dcf10(local_120), lVar7 == 0)) ||
           ((iVar3 = FUN_1407dd4c0(local_148,local_100), iVar3 == 0 ||
            (lVar7 = FUN_1407dcf10(local_148), lVar7 != 0)))))))) {
        FUN_1407c2680(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                      ,0x1bc);
        uVar4 = 0;
      }
      else {
        puVar5 = (undefined *)FUN_1407fef80(local_120,local_68);
        puVar8 = local_98;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
        cVar2 = FUN_1407fcbf0(local_98);
        if (cVar2 == '\0') {
          *param_3 = 0;
          uVar4 = 1;
        }
        else {
          puVar5 = (undefined *)FUN_1407fef80(local_d0,local_58);
          puVar8 = (undefined *)(param_2 + 0x10);
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar5 = (undefined *)FUN_1407fef80(local_120,local_48);
          puVar8 = (undefined *)(param_2 + 0x20);
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar5 = (undefined *)FUN_1407fef80(local_110,local_38);
          puVar8 = (undefined *)(param_2 + 0x30);
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar8 = puVar8 + 1;
          }
          bVar1 = false;
          while (lVar7 = FUN_1407dcf10(local_100), lVar7 != 0) {
            iVar3 = FUN_1407dd160(local_100,local_150);
            if ((iVar3 == 0) || (iVar3 = FUN_1407dd4c0(local_100,local_28), iVar3 == 0)) {
              FUN_1407c2680(0x10,0,0x89,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\encrypted_client_hello.cc"
                            ,0x1d4);
              return 0;
            }
            if (((local_150[0] & 0x8000) != 0) || (param_4 != '\0')) {
              bVar1 = true;
            }
          }
          *param_3 = !bVar1;
          uVar4 = 1;
        }
      }
    }
  }
  else {
    *param_3 = 0;
    uVar4 = 1;
  }
  return uVar4;
}


/* address=1407fea80 name=FUN_1407fea80 */

bool FUN_1407fea80(undefined8 *param_1,longlong *param_2,undefined *param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  bool bVar5;
  short local_58 [2];
  short local_54 [2];
  longlong local_50;
  longlong local_48;
  undefined local_40 [24];
  undefined local_28 [24];
  
  local_50 = 0;
  puVar4 = local_28;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1407f6c30(local_40,local_28);
  while( true ) {
    lVar3 = FUN_1407dcf10(local_40);
    if (lVar3 == 0) {
      bVar5 = local_50 != 0;
      if (bVar5) {
        uVar2 = FUN_1407e7510();
        *param_1 = uVar2;
        *param_2 = local_50;
      }
      return bVar5;
    }
    iVar1 = FUN_1407dd160(local_40,local_54);
    if ((iVar1 == 0) || (iVar1 = FUN_1407dd160(local_40,local_58), iVar1 == 0)) break;
    local_48 = FUN_1407fe080(local_58[0]);
    if (((local_54[0] == 1) && (local_48 != 0)) &&
       ((local_50 == 0 || ((param_4 == '\0' && (local_58[0] == 3)))))) {
      local_50 = local_48;
    }
  }
  return false;
}


/* address=1407feb90 name=FUN_1407feb90 */

void FUN_1407feb90(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407e75b0(param_1);
  FUN_140780900(uVar1);
  return;
}


/* address=1407febc0 name=FUN_1407febc0 */

longlong FUN_1407febc0(ulonglong param_1,ulonglong param_2)

{
  ulonglong local_18 [3];
  
  if (param_2 <= param_1) {
    FID_conflict__assert((wchar_t *)"m",(wchar_t *)"D",0x2c3);
  }
  FUN_14077f730(local_18,8);
  return local_18[0] % ((param_2 - param_1) + 1) + param_1;
}


/* address=1407fec40 name=FUN_1407fec40 */

void FUN_1407fec40(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined auStack_148 [32];
  undefined local_128;
  undefined local_127;
  undefined local_126;
  undefined local_125;
  undefined local_124;
  undefined2 local_122;
  uint local_120;
  undefined2 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined local_e8 [48];
  undefined local_b8 [48];
  undefined local_88 [48];
  undefined local_58 [32];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_148;
  cVar1 = FUN_1407b7170(param_1 + 0xbf);
  if (cVar1 != '\0') {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x2ca);
  }
  if ((0x303 < *(ushort *)((longlong)param_1 + 0x1e)) && ((*(byte *)(param_1[1] + 0xed) & 1) != 0))
  {
    local_11c = 1;
    lVar3 = FUN_1407b7160(*param_1 + 8);
    if ((*(byte *)(lVar3 + 0xee) >> 3 & 1) == 0) {
      local_120 = FUN_140780880();
    }
    else {
      lVar3 = FUN_1407b7160(*param_1 + 8);
      local_120 = (uint)(*(byte *)(lVar3 + 0xee) >> 4 & 1);
    }
    local_128 = local_120 != 0;
    local_127 = local_128;
    if ((bool)local_128) {
      local_118 = FUN_1407e7560();
    }
    else {
      local_118 = FUN_1407e7580();
    }
    local_110 = local_118;
    local_126 = *(undefined *)((longlong)param_1 + 0x652);
    FUN_14082bfd0(local_58,local_38);
    local_100 = FUN_1407febc0(4,7);
    local_100 = local_100 * 0x20;
    local_108 = FUN_1407feb90(local_110);
    local_108 = local_100 + local_108;
    FUN_1407f6970(local_e8);
    uVar4 = FUN_1407b6fb0(local_e8);
    iVar2 = FUN_1407df140(uVar4,0x100);
    if (iVar2 != 0) {
      uVar4 = FUN_1407b6fb0(local_e8);
      iVar2 = FUN_1407dfb70(uVar4,1);
      if (iVar2 != 0) {
        local_122 = FUN_1407e7590(local_110);
        uVar4 = FUN_1407b6fb0(local_e8);
        iVar2 = FUN_1407dfb70(uVar4,local_122);
        if (iVar2 != 0) {
          uVar4 = FUN_1407b6fb0(local_e8);
          iVar2 = FUN_1407dfb40(uVar4,local_126);
          if (iVar2 != 0) {
            uVar4 = FUN_1407b6fb0(local_e8);
            iVar2 = FUN_1407df830(uVar4,local_b8);
            if ((iVar2 != 0) && (iVar2 = FUN_1407df950(local_b8,local_58,0x20), iVar2 != 0)) {
              uVar4 = FUN_1407b6fb0(local_e8);
              iVar2 = FUN_1407df830(uVar4,local_88);
              if ((iVar2 != 0) &&
                 ((iVar2 = FUN_1407dfa00(local_88,&local_f8,local_108), iVar2 != 0 &&
                  (iVar2 = FUN_14077f730(local_f8,local_108), iVar2 != 0)))) {
                local_f0 = param_1 + 0x45;
                uVar4 = FUN_1407b6fb0(local_e8);
                cVar1 = FUN_1407f2870(uVar4,local_f0);
                if (cVar1 != '\0') {
                  local_124 = 1;
                  FUN_1407f69a0(local_e8);
                  goto LAB_1407fef65;
                }
              }
            }
          }
        }
      }
    }
    local_125 = 0;
    FUN_1407f69a0(local_e8);
  }
LAB_1407fef65:
  FUN_140805d70(local_18 ^ (ulonglong)auStack_148);
  return;
}


/* address=1407fef80 name=FUN_1407fef80 */

undefined8 FUN_1407fef80(undefined8 *param_1,undefined8 param_2)

{
  FUN_1407f50f0(param_2,*param_1,param_1[1]);
  return param_2;
}


/* address=1407fefc0 name=FUN_1407fefc0 */

undefined8 FUN_1407fefc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *local_28;
  char *local_20;
  
  lVar1 = FUN_1407f5090(param_1);
  lVar2 = FUN_1407f5090(param_2);
  if (lVar1 == lVar2) {
    local_28 = (char *)FUN_1407b7160(param_1);
    for (local_20 = (char *)FUN_1407b7160(param_2);
        (pcVar4 = (char *)FUN_1407f50d0(param_1), local_28 != pcVar4 &&
        (pcVar4 = (char *)FUN_1407f50d0(param_2), local_20 != pcVar4)); local_20 = local_20 + 1) {
      if (*local_28 != *local_20) {
        return 0;
      }
      local_28 = local_28 + 1;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* address=1407ff080 name=FUN_1407ff080 */

bool FUN_1407ff080(undefined *param_1,undefined *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar3 = local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_28;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  cVar1 = FUN_1407fefc0(local_28,local_38);
  return cVar1 == '\0';
}


/* address=1407ff0f0 name=FUN_1407ff0f0 */

undefined8 FUN_1407ff0f0(undefined8 *param_1)

{
  if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *param_1;
}


/* address=1407ff130 name=FUN_1407ff130 */

longlong FUN_1407ff130(longlong *param_1)

{
  if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *param_1 + -1 + param_1[1];
}


/* address=1407ff170 name=FUN_1407ff170 */

longlong FUN_1407ff170(longlong *param_1,ulonglong param_2)

{
  if ((ulonglong)param_1[1] <= param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *param_1 + param_2;
}


/* address=1407ff1b0 name=FUN_1407ff1b0 */

undefined8 FUN_1407ff1b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  if ((ulonglong)param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_1407b76f0(param_2,(*param_1 + param_1[1]) - param_3,param_3);
  return param_2;
}


/* address=1407ff210 name=FUN_1407ff210 */

undefined8 FUN_1407ff210(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  if (param_2 != 0) {
    FUN_1407fb140(param_2);
  }
  uVar1 = FUN_1407b6fc0(local_18,param_2);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407f5280(local_18);
  return param_1;
}


/* address=1407ff270 name=FUN_1407ff270 */

void FUN_1407ff270(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  swap<>(param_1,param_2);
  uVar1 = FUN_1407b6fb0(param_2);
  uVar2 = FUN_1407b6fb0(param_1);
  FUN_140800140(uVar2,uVar1);
  return;
}


/* address=1407ff2d0 name=FUN_1407ff2d0 */

void FUN_1407ff2d0(longlong param_1,ulonglong param_2)

{
  ulonglong local_18;
  
  local_18 = param_2;
  if (param_2 <= *(ulonglong *)(param_1 + 8)) {
    for (; local_18 < *(ulonglong *)(param_1 + 8); local_18 = local_18 + 1) {
    }
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=1407ff340 name=FUN_1407ff340 */

longlong FUN_1407ff340(longlong param_1)

{
  FUN_1407f5420(param_1);
  FUN_1407f5060(param_1 + 0x10);
  FUN_1407f5060(param_1 + 0x20);
  FUN_1407f5060(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined *)(param_1 + 0x42) = 0;
  *(undefined *)(param_1 + 0x43) = 0;
  return param_1;
}


/* address=1407ff3b0 name=FUN_1407ff3b0 */

void FUN_1407ff3b0(undefined8 param_1)

{
  FUN_1407f54a0(param_1);
  return;
}


/* address=1407ff3d0 name=FUN_1407ff3d0 */

longlong FUN_1407ff3d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _Ptr_base<>(param_1,param_2);
  puVar2 = (undefined *)(param_2 + 0x10);
  puVar3 = (undefined *)(param_1 + 0x10);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined *)(param_2 + 0x20);
  puVar3 = (undefined *)(param_1 + 0x20);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined *)(param_2 + 0x30);
  puVar3 = (undefined *)(param_1 + 0x30);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  *(undefined *)(param_1 + 0x42) = *(undefined *)(param_2 + 0x42);
  *(undefined *)(param_1 + 0x43) = *(undefined *)(param_2 + 0x43);
  return param_1;
}


/* address=1407ff480 name=FUN_1407ff480 */

undefined8 FUN_1407ff480(undefined8 param_1,uint param_2)

{
  FUN_1407ff3b0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,0x48);
  }
  return param_1;
}


/* address=1407ff4c0 name=FUN_1407ff4c0 */

longlong FUN_1407ff4c0(longlong param_1)

{
  FUN_1407ff340(param_1);
  FUN_1407ff520(param_1 + 0x48);
  *(undefined *)(param_1 + 0x90) = 0;
  return param_1;
}


/* address=1407ff500 name=FUN_1407ff500 */

undefined FUN_1407ff500(longlong param_1)

{
  return *(undefined *)(param_1 + 0x90);
}


/* address=1407ff520 name=FUN_1407ff520 */

undefined8 FUN_1407ff520(undefined8 param_1)

{
  FUN_1407e75d0(param_1);
  return param_1;
}


/* address=1407ff550 name=FUN_1407ff550 */

void FUN_1407ff550(undefined8 param_1)

{
  FUN_1407e7600(param_1);
  return;
}


/* address=1407ff570 name=FUN_1407ff570 */

void FUN_1407ff570(longlong param_1)

{
  FUN_1407ff550(param_1 + 0x48);
  FUN_1407ff3b0(param_1);
  return;
}


/* address=1407ff5a0 name=FUN_1407ff5a0 */

undefined8 FUN_1407ff5a0(undefined8 param_1,uint param_2)

{
  FUN_1407ff570(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,0x98);
  }
  return param_1;
}


/* address=1407ff5e0 name=FUN_1407ff5e0 */

void FUN_1407ff5e0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1408000d0(uVar1,*param_1);
  }
  return;
}


/* address=1407ff620 name=FUN_1407ff620 */

void FUN_1407ff620(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1408000d0(uVar2,p_Var1);
  }
  return;
}


/* address=1407ff670 name=FUN_1407ff670 */

longlong FUN_1407ff670(longlong param_1)

{
  FUN_1407f5e90(param_1);
  *(undefined4 *)(param_1 + 0x18) = 1;
  return param_1;
}


/* address=1407ff6a0 name=FUN_1407ff6a0 */

void FUN_1407ff6a0(longlong param_1)

{
  FUN_1407ff940(param_1 + 8);
  return;
}


/* address=1407ff6c0 name=FUN_1407ff6c0 */

longlong FUN_1407ff6c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1407b7160(param_1 + 1);
  return lVar1 + *param_1 * 8;
}


/* address=1407ff6f0 name=FUN_1407ff6f0 */

bool FUN_1407ff6f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1407ff790(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_1407b6fb0(param_2);
    uVar3 = FUN_1407ff9a0(param_1 + 1,*param_1);
    FUN_140800050(uVar3,uVar2);
    *param_1 = *param_1 + 1;
    FUN_1407ffda0(param_2);
  }
  else {
    FUN_1407ffda0(param_2);
  }
  return cVar1 != '\0';
}


/* address=1407ff790 name=FUN_1407ff790 */

undefined8 FUN_1407ff790(ulonglong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong local_30;
  undefined local_18 [24];
  
  lVar2 = FUN_1407f5090(param_1 + 1);
  if (lVar2 == 0) {
    uVar3 = FUN_1407ffa70(param_1 + 1,0x10);
  }
  else {
    uVar4 = FUN_1407f5090(param_1 + 1);
    if (*param_1 < uVar4) {
      uVar3 = 1;
    }
    else {
      uVar4 = FUN_1407f5090(param_1 + 1);
      uVar5 = FUN_1407f4e80();
      if (uVar5 / 2 < uVar4) {
        FUN_1407c2680(0x10,0,0x45,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                      ,0x1ab);
        uVar3 = 0;
      }
      else {
        FUN_1407f5420(local_18);
        lVar2 = FUN_1407f5090(param_1 + 1);
        cVar1 = FUN_1407ffa70(local_18,lVar2 << 1);
        if (cVar1 == '\0') {
          FUN_1407ff940(local_18);
          uVar3 = 0;
        }
        else {
          local_30 = 0;
          while( true ) {
            uVar4 = FUN_1407f5090(param_1 + 1);
            if (uVar4 <= local_30) break;
            uVar3 = FUN_1407ff9a0(param_1 + 1,local_30);
            uVar3 = FUN_1407b6fb0(uVar3);
            uVar6 = FUN_1407ff9a0(local_18,local_30);
            FUN_140800050(uVar6,uVar3);
            local_30 = local_30 + 1;
          }
          uVar3 = FUN_1407b6fb0(local_18);
          FUN_1407ff960(param_1 + 1,uVar3);
          FUN_1407ff940(local_18);
          uVar3 = 1;
        }
      }
    }
  }
  return uVar3;
}


/* address=1407ff940 name=FUN_1407ff940 */

void FUN_1407ff940(undefined8 param_1)

{
  FUN_1407ff9c0(param_1);
  return;
}


/* address=1407ff960 name=FUN_1407ff960 */

longlong FUN_1407ff960(longlong param_1,undefined8 param_2)

{
  FUN_1407ff9c0(param_1);
  FUN_1407f5590(param_2,param_1,param_1 + 8);
  return param_1;
}


/* address=1407ff9a0 name=FUN_1407ff9a0 */

longlong FUN_1407ff9a0(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2 * 8;
}


/* address=1407ff9c0 name=FUN_1407ff9c0 */

void FUN_1407ff9c0(undefined8 param_1)

{
  FUN_1407ff9e0(param_1,0,0);
  return;
}


/* address=1407ff9e0 name=FUN_1407ff9e0 */

void FUN_1407ff9e0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
    FUN_1407ffe30(*param_1 + local_18 * 8,0);
  }
  FUN_1407cd0f0(*param_1);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* address=1407ffa70 name=FUN_1407ffa70 */

undefined8 FUN_1407ffa70(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  FUN_1407ff9c0(param_1);
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar1 = FUN_1407f4e80();
    if (uVar1 / 8 < param_2) {
      FUN_1407c2680(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                    ,0x138);
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_1407ccfc0(param_2 << 3);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        uVar3 = 0;
      }
      else {
        param_1[1] = param_2;
        for (local_18 = 0; local_18 < (ulonglong)param_1[1]; local_18 = local_18 + 1) {
          uVar3 = FUN_1407f4e70(8,*param_1 + local_18 * 8);
          FUN_1407b75e0(uVar3);
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=1407ffb70 name=FUN_1407ffb70 */

void FUN_1407ffb70(undefined8 param_1)

{
  FUN_1407ff6a0(param_1);
  return;
}


/* address=1407ffb90 name=FUN_1407ffb90 */

undefined8 FUN_1407ffb90(undefined8 param_1,uint param_2)

{
  FUN_1407ffb70(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,0x20);
  }
  return param_1;
}


/* address=1407ffbd0 name=FUN_1407ffbd0 */

undefined8 FUN_1407ffbd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1407f5090(param_2);
  uVar2 = FUN_1407b7160(param_2);
  FUN_1407f50f0(param_1,uVar2,uVar1);
  return param_1;
}


/* address=1407ffc20 name=FUN_1407ffc20 */

undefined8 FUN_1407ffc20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_10 [2];
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_1407b6f40(&local_res8,&local_res10);
  uVar1 = FUN_1407b7160(&local_res10);
  uVar2 = FUN_1407b7160(&local_res8);
  local_10[0] = FUN_1407ffeb0(uVar2,uVar1,local_res18);
  FUN_1407fff60(&local_res8,local_10);
  return local_res8;
}


/* address=1407ffc90 name=FUN_1407ffc90 */

undefined8 FUN_1407ffc90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_1407b6fb0(param_2);
  uVar1 = FUN_1407fff90(uVar1);
  uVar1 = FUN_1407b6fc0(local_18,uVar1);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407ff5e0(local_18);
  return param_1;
}


/* address=1407ffce0 name=FUN_1407ffce0 */

undefined8
FUN_1407ffce0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_1407ff620(param_1,p_Var1);
  uVar2 = FUN_1407b6fb0(param_2);
  FUN_1407b6fb0(uVar2);
  FUN_1407b6fb0(param_1);
  return param_1;
}


/* address=1407ffd40 name=FUN_1407ffd40 */

undefined8 FUN_1407ffd40(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = FUN_1407ccfc0(0x20);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined *)FUN_1407f4e70(0x20,lVar1);
    puVar4 = puVar2;
    for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uVar3 = FUN_1407ff670(puVar2);
  }
  return uVar3;
}


/* address=1407ffda0 name=FUN_1407ffda0 */

void FUN_1407ffda0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1407b6fb0(param_1);
    FUN_1408000b0(uVar1,*param_1);
  }
  return;
}


/* address=1407ffde0 name=FUN_1407ffde0 */

void FUN_1407ffde0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1407b6fb0(param_1);
    FUN_1408000b0(uVar2,p_Var1);
  }
  return;
}


/* address=1407ffe30 name=FUN_1407ffe30 */

undefined8 FUN_1407ffe30(undefined8 param_1,uint param_2)

{
  FUN_1407ffda0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1408c7230(param_1,8);
  }
  return param_1;
}


/* address=1407ffe70 name=FUN_1407ffe70 */

undefined8 FUN_1407ffe70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_1407ffff0();
  uVar1 = FUN_1407b6fc0(local_18,uVar1);
  FUN_1407b71d0(param_1,uVar1);
  FUN_1407ffda0(local_18);
  return param_1;
}


/* address=1407ffeb0 name=FUN_1407ffeb0 */

undefined8 FUN_1407ffeb0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined *local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  cVar1 = FUN_140800180(param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_1407b7160(&local_res8);
    uVar3 = FUN_1407b7160(&local_res10);
    local_res10 = FUN_1408001d0(uVar2,uVar3,*local_res18);
  }
  return local_res10;
}


/* address=1407fff60 name=FUN_1407fff60 */

void FUN_1407fff60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1407b6fb0(param_2);
  *param_1 = *puVar1;
  return;
}


/* address=1407fff90 name=FUN_1407fff90 */

undefined8 FUN_1407fff90(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1407ccfc0(0x48);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1407f4e70(0x48,lVar1);
    uVar3 = FUN_1407b6fb0(param_1);
    uVar2 = FUN_1407ff3d0(uVar2,uVar3);
  }
  return uVar2;
}


/* address=1407ffff0 name=FUN_1407ffff0 */

undefined8 FUN_1407ffff0(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = FUN_1407ccfc0(0x98);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined *)FUN_1407f4e70(0x98,lVar1);
    puVar4 = puVar2;
    for (lVar1 = 0x98; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uVar3 = FUN_1407ff4c0(puVar2);
  }
  return uVar3;
}


/* address=140800050 name=FUN_140800050 */

undefined8
FUN_140800050(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_1407ffde0(param_1,p_Var1);
  uVar2 = FUN_1407b6fb0(param_2);
  FUN_1407b6fb0(uVar2);
  FUN_1407b6fb0(param_1);
  return param_1;
}


/* address=1408000b0 name=FUN_1408000b0 */

void FUN_1408000b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140800200(param_2);
  return;
}


/* address=1408000d0 name=FUN_1408000d0 */

void FUN_1408000d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140800220(param_2);
  return;
}


/* address=1408000f0 name=swap<> */

/* Library Function - Multiple Matches With Same Base Name
    void __cdecl std::swap<char * __ptr64,void>(char * __ptr64 & __ptr64,char * __ptr64 & __ptr64)
    void __cdecl std::swap<struct Concurrency::details::_Task_impl<unsigned char> * __ptr64>(struct
   Concurrency::details::_Task_impl<unsigned char> * __ptr64 & __ptr64,struct
   Concurrency::details::_Task_impl<unsigned char> * __ptr64 & __ptr64)
    void __cdecl std::swap<struct Concurrency::details::_Task_impl<struct std::pair<unsigned
   char,class Concurrency::details::_CancellationTokenState * __ptr64> > * __ptr64>(struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState * __ptr64> > * __ptr64 & __ptr64,struct
   Concurrency::details::_Task_impl<struct std::pair<unsigned char,class
   Concurrency::details::_CancellationTokenState * __ptr64> > * __ptr64 & __ptr64)
    void __cdecl std::swap<struct std::_Container_proxy * __ptr64>(struct std::_Container_proxy *
   __ptr64 & __ptr64,struct std::_Container_proxy * __ptr64 & __ptr64)
     18 names - too many to list
   
   Library: Visual Studio */

void swap<>(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_18 [3];
  
  puVar1 = (undefined8 *)FUN_1407b6fb0(param_1);
  local_18[0] = *puVar1;
  puVar1 = (undefined8 *)FUN_1407b6fb0(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_1407b6fb0(local_18);
  *param_2 = *puVar1;
  return;
}


/* address=140800140 name=FUN_140800140 */

void FUN_140800140(undefined8 param_1,undefined8 param_2)

{
  undefined local_18 [24];
  
  FUN_1407b6fb0(param_1);
  FUN_1407b6fb0(param_2);
  FUN_1407b6fb0(local_18);
  return;
}


/* address=140800180 name=FUN_140800180 */

undefined FUN_140800180(char *param_1)

{
  undefined local_14;
  
  if ((*param_1 < '\0') || (0xff < *param_1)) {
    local_14 = 0;
  }
  else {
    local_14 = 1;
  }
  return local_14;
}


/* address=1408001d0 name=FUN_1408001d0 */

void FUN_1408001d0(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  thunk_FUN_140881860(param_1,param_2,param_3);
  return;
}


/* address=140800200 name=FUN_140800200 */

void FUN_140800200(undefined8 param_1)

{
  FUN_140800270(param_1);
  return;
}


/* address=140800220 name=FUN_140800220 */

void FUN_140800220(undefined8 param_1)

{
  FUN_140800240(param_1);
  return;
}


/* address=140800240 name=FUN_140800240 */

void FUN_140800240(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1407ff480(param_1,0);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=140800270 name=FUN_140800270 */

void FUN_140800270(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1407ff5a0(param_1,0);
    FUN_1407cd0f0(param_1);
  }
  return;
}


/* address=1408002a0 name=FUN_1408002a0 */

undefined4
FUN_1408002a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined8 local_18 [3];
  
  lVar2 = FUN_14078ffb0(param_2,param_3,param_4,0,0,param_5);
  if (lVar2 == 0) {
    local_28 = 0;
  }
  else {
    iVar1 = FUN_1407dfa00(param_1,local_18,lVar2);
    if ((iVar1 == 0) ||
       (lVar3 = FUN_14078ffb0(param_2,param_3,param_4,local_18[0],lVar2,param_5), lVar3 != lVar2)) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
  }
  return local_28;
}


/* address=140800370 name=FUN_140800370 */

longlong FUN_140800370(wchar_t *param_1,longlong param_2)

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
  if ((((uVar1 == 0) || (iVar2 = FUN_1407dd900(local_78,&local_58), iVar2 == 0)) || (local_58 != 1))
     || (uVar1 = wcstoul((wchar_t *)local_78,local_30,4), uVar1 == 0)) {
    FUN_1407c2680(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_140c03af0,0x52);
    return 0;
  }
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  iVar2 = FUN_1407dd730(local_78,DAT_1409afe98);
  local_res10 = param_2;
  if (iVar2 != 0) {
    uVar1 = wcstoul((wchar_t *)local_78,local_40,DAT_1409afe98);
    if (uVar1 == 0) {
      FUN_1407c2680(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_140c03b60,0x61);
      goto LAB_1408007cf;
    }
    local_res10 = FUN_140800d30(local_40);
    local_88 = local_res10;
    if (local_res10 == 0) goto LAB_1408007cf;
    if ((param_2 != 0) &&
       (iVar2 = FUN_14078f420(param_2,local_res10,0), local_res10 = param_2, iVar2 != 0)) {
      FUN_1407c2680(0xf,0,0x82,s_D__a_1_s_target_release_build_bo_140c03bd0,CONCAT44(uVar6,0x6c));
      goto LAB_1408007cf;
    }
    lVar3 = FUN_1407dcf10(local_40);
    if (lVar3 != 0) {
      FUN_1407c2680(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_140c03c40,CONCAT44(uVar6,0x70));
      goto LAB_1408007cf;
    }
  }
  if (local_res10 == 0) {
    FUN_1407c2680(0xf,0,0x72,s_D__a_1_s_target_release_build_bo_140c03cb0,CONCAT44(uVar6,0x76));
    goto LAB_1408007cf;
  }
  local_90 = FUN_140790f50();
  if ((local_90 == 0) || (iVar2 = FUN_140791380(local_90,local_res10), iVar2 == 0))
  goto LAB_1408007cf;
  local_50 = FUN_1407dcf10(local_30);
  uVar4 = FUN_1407dcef0(local_30);
  local_80 = FUN_140761830(uVar4,local_50,0);
  uVar4 = FUN_14078f7f0(local_res10);
  *(undefined8 *)(local_90 + 8) = uVar4;
  if ((local_80 == 0) ||
     ((*(longlong *)(local_90 + 8) == 0 || (iVar2 = FUN_1407914c0(local_90,local_80), iVar2 == 0))))
  goto LAB_1408007cf;
  iVar2 = FUN_1407dd730(local_78,DAT_1409afe9c);
  if (iVar2 == 0) {
    iVar2 = FUN_1407939b0(local_res10,*(longlong *)(local_90 + 8) + 8,
                          *(longlong *)(local_90 + 0x10) + 0x18);
    if (iVar2 == 0) goto LAB_1408007cf;
    *(uint *)(local_90 + 0x18) = *(uint *)(local_90 + 0x18) | 2;
LAB_140800771:
    lVar3 = FUN_1407dcf10(local_78);
    if (lVar3 == 0) {
      iVar2 = FUN_140791740(local_90);
      if (iVar2 != 0) {
        FUN_1407613e0(local_80);
        FUN_14078f330(local_88);
        return local_90;
      }
    }
    else {
      FUN_1407c2680(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_140c03d90,CONCAT44(uVar6,0xac));
    }
  }
  else {
    uVar1 = wcstoul((wchar_t *)local_78,local_20,DAT_1409afe9c);
    if ((((uVar1 != 0) && (uVar1 = wcstoul((wchar_t *)local_20,local_68,3), uVar1 != 0)) &&
        (iVar2 = FUN_1407dd110(local_68,local_98), iVar2 != 0)) &&
       ((local_98[0] == '\0' && (lVar3 = FUN_1407dcf10(local_68), lVar3 != 0)))) {
      local_48 = FUN_1407dcf10(local_68);
      uVar4 = FUN_1407dcef0(local_68);
      uVar6 = 0;
      iVar2 = FUN_1407901e0(local_res10,*(undefined8 *)(local_90 + 8),uVar4,local_48,0);
      if ((iVar2 != 0) && (lVar3 = FUN_1407dcf10(local_20), lVar3 == 0)) {
        pbVar5 = (byte *)FUN_1407dcef0(local_68);
        *(uint *)(local_90 + 0x1c) = *pbVar5 & 0xfffffffe;
        goto LAB_140800771;
      }
    }
    FUN_1407c2680(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_140c03d20,0x98);
  }
LAB_1408007cf:
  FUN_140791100(local_90);
  FUN_1407613e0(local_80);
  FUN_14078f330(local_88);
  return 0;
}


/* address=140800800 name=FUN_140800800 */

undefined8 FUN_140800800(undefined8 param_1,longlong *param_2,uint param_3)

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
    FUN_1407c2680(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_140c03e00,0xc3);
    return 0;
  }
  iVar1 = FUN_1407df890(param_1,local_100,0x20000010);
  if (((iVar1 != 0) && (iVar1 = FUN_1407dfd50(local_100,1), iVar1 != 0)) &&
     (iVar1 = FUN_1407df890(local_100,local_a0,4), iVar1 != 0)) {
    uVar3 = FUN_140791480(param_2);
    uVar4 = FUN_14078f5b0(*param_2);
    uVar2 = FUN_140761660(uVar4);
    iVar1 = FUN_1407cf2a0(local_a0,uVar2,uVar3);
    if (iVar1 != 0) {
      if (((param_3 & 1) == 0) &&
         (((iVar1 = FUN_1407df890(local_100,local_70,DAT_1409afe98), iVar1 == 0 ||
           (iVar1 = FUN_140800bf0(local_70,*param_2), iVar1 == 0)) ||
          (iVar1 = FUN_1407df350(local_100), iVar1 == 0)))) {
        FUN_1407c2680(0xf,0,0x81,s_D__a_1_s_target_release_build_bo_140c03ee0,CONCAT44(uVar5,0xd7));
        return 0;
      }
      if (((param_3 & 2) == 0) && (param_2[1] != 0)) {
        iVar1 = FUN_1407df890(local_100,local_40,DAT_1409afe9c);
        if ((iVar1 != 0) &&
           ((iVar1 = FUN_1407df890(local_40,local_d0,3), iVar1 != 0 &&
            (iVar1 = FUN_1407dfb40(local_d0,0), iVar1 != 0)))) {
          uVar5 = 0;
          iVar1 = FUN_1408002a0(local_d0,*param_2,param_2[1],
                                *(undefined4 *)((longlong)param_2 + 0x1c),0);
          if ((iVar1 != 0) && (iVar1 = FUN_1407df350(local_100), iVar1 != 0)) goto LAB_140800a78;
        }
        FUN_1407c2680(0xf,0,0x81,s_D__a_1_s_target_release_build_bo_140c03f50,CONCAT44(uVar5,0xe7));
        return 0;
      }
LAB_140800a78:
      iVar1 = FUN_1407df350(param_1);
      if (iVar1 == 0) {
        FUN_1407c2680(0xf,0,0x81,s_D__a_1_s_target_release_build_bo_140c03fc0,CONCAT44(uVar5,0xed));
        return 0;
      }
      return 1;
    }
  }
  FUN_1407c2680(0xf,0,0x81,s_D__a_1_s_target_release_build_bo_140c03e70,CONCAT44(uVar5,0xce));
  return 0;
}


/* address=140800ad0 name=FUN_140800ad0 */

undefined8 FUN_140800ad0(wchar_t *param_1)

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
    FUN_1407c2680(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_140c041f0,0x147);
  }
  else {
    lVar4 = FUN_140797d40();
    for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
      puVar7 = (undefined4 *)(lVar4 + local_38 * 0x38);
      uVar5 = FUN_1407dcf10(local_18);
      if (uVar5 == *(byte *)(puVar7 + 4)) {
        uVar1 = *(undefined *)(puVar7 + 4);
        uVar6 = FUN_1407dcef0(local_18);
        iVar3 = FUN_140801470(uVar6,*(undefined8 *)(puVar7 + 2),uVar1);
        if (iVar3 == 0) {
          uVar6 = FUN_14078f190(*puVar7);
          return uVar6;
        }
      }
    }
    FUN_1407c2680(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_140c04260,0x156);
  }
  return 0;
}


/* address=140800bf0 name=FUN_140800bf0 */

undefined4 FUN_140800bf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong local_50;
  undefined local_38 [56];
  
  iVar1 = FUN_14078f6a0(param_2);
  if (iVar1 == 0) {
    FUN_1407c2680(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_140c042d0,0x15d);
  }
  else {
    lVar2 = FUN_140797d40();
    for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
      piVar3 = (int *)(lVar2 + local_50 * 0x38);
      if (*piVar3 == iVar1) {
        iVar1 = FUN_1407df890(param_1,local_38,6);
        if (((iVar1 != 0) &&
            (iVar1 = FUN_1407df950(local_38,*(undefined8 *)(piVar3 + 2),*(undefined *)(piVar3 + 4)),
            iVar1 != 0)) && (iVar1 = FUN_1407df350(param_1), iVar1 != 0)) {
          return 1;
        }
        return 0;
      }
    }
    FUN_1407c2680(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_140c04340,0x16c);
  }
  return 0;
}


/* address=140800d30 name=FUN_140800d30 */

undefined8 FUN_140800d30(undefined8 param_1)

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
  
  iVar2 = FUN_1407dd730(param_1,0x20000010);
  if (iVar2 == 0) {
    uVar4 = FUN_140800ad0(param_1);
  }
  else {
    iVar2 = FUN_1408014b0(param_1,local_68,local_58,local_48,local_38,local_28,local_18);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar5 = FUN_140797d40();
      for (local_78 = 0; local_78 < 4; local_78 = local_78 + 1) {
        puVar6 = (undefined4 *)(lVar5 + local_78 * 0x38);
        bVar1 = *(byte *)(puVar6 + 8);
        uVar3 = (uint)bVar1;
        iVar2 = FUN_140801860(local_68,*(undefined8 *)(puVar6 + 10),uVar3);
        if ((((iVar2 != 0) &&
             (iVar2 = FUN_140801860(local_58,(ulonglong)uVar3 + *(longlong *)(puVar6 + 10),uVar3),
             iVar2 != 0)) &&
            (iVar2 = FUN_140801860(local_48,(ulonglong)bVar1 * 2 + *(longlong *)(puVar6 + 10),uVar3)
            , iVar2 != 0)) &&
           (((iVar2 = FUN_140801860(local_38,(ulonglong)(uVar3 * 3) + *(longlong *)(puVar6 + 10),
                                    uVar3), iVar2 != 0 &&
             (iVar2 = FUN_140801860(local_28,(ulonglong)bVar1 * 4 + *(longlong *)(puVar6 + 10),uVar3
                                   ), iVar2 != 0)) &&
            (iVar2 = FUN_140801860(local_18,(ulonglong)(uVar3 * 5) + *(longlong *)(puVar6 + 10),
                                   uVar3), iVar2 != 0)))) {
          uVar4 = FUN_14078f190(*puVar6);
          return uVar4;
        }
      }
      FUN_1407c2680(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_140c043b0,0x193);
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* address=140800f50 name=FUN_140800f50 */

longlong FUN_140800f50(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined local_18 [24];
  
  local_20 = 0;
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    local_20 = FUN_140791360(*param_1);
  }
  if (param_3 < 0) {
    FUN_1407c2680(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_140c04420,0x1ab);
    lVar1 = 0;
  }
  else {
    FUN_1407dce80(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_140800370(local_18,local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140791100(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_1407dcef0(local_18);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140801040 name=FUN_140801040 */

undefined8 FUN_140801040(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined local_38 [56];
  
  iVar1 = FUN_1407df140(local_38,0);
  if (iVar1 != 0) {
    uVar2 = FUN_1407916c0(param_1);
    iVar1 = FUN_140800800(local_38,param_1,uVar2);
    if (iVar1 != 0) {
      uVar3 = FUN_1407e5eb0(local_38,param_2);
      return uVar3;
    }
  }
  FUN_1407df200(local_38);
  return 0xffffffff;
}


/* address=140801390 name=FUN_140801390 */

int FUN_140801390(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int local_44;
  undefined local_40 [64];
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1407c2680(0xf,0,0x43,s_D__a_1_s_target_release_build_bo_140c045e0,0x209);
    local_44 = 0;
  }
  else {
    iVar1 = FUN_1407df140(local_40,0);
    if ((iVar1 == 0) ||
       (iVar1 = FUN_1408002a0(local_40,*param_1,param_1[1],*(undefined4 *)((longlong)param_1 + 0x1c)
                              ,0), iVar1 == 0)) {
      FUN_1407df200(local_40);
      local_44 = -1;
    }
    else {
      local_44 = FUN_1407e5eb0(local_40,param_2);
      if (local_44 < 1) {
        local_44 = 0;
      }
    }
  }
  return local_44;
}


/* address=140801470 name=FUN_140801470 */

int FUN_140801470(void *param_1,void *param_2,size_t param_3)

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


/* address=1408014b0 name=FUN_1408014b0 */

undefined8
FUN_1408014b0(wchar_t *param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,
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
  if (((((uVar1 != 0) && (iVar2 = FUN_1407dd900(local_78,&local_48), iVar2 != 0)) && (local_48 == 1)
       ) && ((uVar1 = wcstoul((wchar_t *)local_78,local_40,0x20000010), uVar1 != 0 &&
             (uVar1 = wcstoul((wchar_t *)local_40,local_30,6), uVar1 != 0)))) &&
     (lVar3 = FUN_1407dcf10(local_30), lVar3 == 7)) {
    uVar4 = FUN_1407dcef0(local_30);
    iVar2 = FUN_140801470(uVar4,&DAT_1409afea0,7);
    if ((((iVar2 == 0) && (uVar1 = wcstoul((wchar_t *)local_40,param_2,2), uVar1 != 0)) &&
        ((iVar2 = FUN_1407de0c0(param_2), iVar2 != 0 &&
         (((lVar3 = FUN_1407dcf10(local_40), lVar3 == 0 &&
           (uVar1 = wcstoul((wchar_t *)local_78,local_58,0x20000010), uVar1 != 0)) &&
          (uVar1 = wcstoul((wchar_t *)local_58,param_3,4), uVar1 != 0)))))) &&
       (((uVar1 = wcstoul((wchar_t *)local_58,param_4,4), uVar1 != 0 &&
         (iVar2 = FUN_1407ddbc0(local_58,0,0,3), iVar2 != 0)) &&
        ((lVar3 = FUN_1407dcf10(local_58), lVar3 == 0 &&
         (((uVar1 = wcstoul((wchar_t *)local_78,local_68,4), uVar1 != 0 &&
           (uVar1 = wcstoul((wchar_t *)local_78,param_7,2), uVar1 != 0)) &&
          ((iVar2 = FUN_1407de0c0(param_7), iVar2 != 0 &&
           ((iVar2 = FUN_1407ddbc0(local_78,local_20,&local_84,2), iVar2 != 0 &&
            (lVar3 = FUN_1407dcf10(local_78), lVar3 == 0)))))))))))) {
      if ((local_84 != 0) &&
         ((lVar3 = FUN_1407dcf10(local_20), lVar3 != 1 ||
          (pcVar5 = (char *)FUN_1407dcef0(local_20), *pcVar5 != '\x01')))) {
        FUN_1407c2680(0xf,0,0x7b,s_D__a_1_s_target_release_build_bo_140c040a0,0x11e);
        return 0;
      }
      iVar2 = FUN_1407dd110(local_68);
      if ((iVar2 != 0) && (local_88 == '\x04')) {
        uVar6 = FUN_1407dcf10(local_68);
        if (uVar6 % 2 != 0) {
          FUN_1407c2680(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_140c04180,299);
          return 0;
        }
        uVar6 = FUN_1407dcf10(local_68);
        local_80 = uVar6 / 2;
        uVar4 = FUN_1407dcef0(local_68,uVar6 % 2);
        FUN_1407dce80(param_5,uVar4,local_80);
        lVar3 = FUN_1407dcef0(local_68);
        FUN_1407dce80(param_6,lVar3 + local_80,local_80);
        return 1;
      }
      FUN_1407c2680(0xf,0,0x6f,s_D__a_1_s_target_release_build_bo_140c04110,0x126);
      return 0;
    }
  }
  FUN_1407c2680(0xf,0,0x80,s_D__a_1_s_target_release_build_bo_140c04030,0x116);
  return 0;
}


/* address=140801860 name=FUN_140801860 */

void FUN_140801860(undefined *param_1,char *param_2,longlong param_3)

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
    lVar2 = FUN_1407dcf10(local_28);
    local_res10 = param_2;
    local_res18 = param_3;
    if (lVar2 == 0) break;
    pcVar1 = (char *)FUN_1407dcef0(local_28);
    if (*pcVar1 != '\0') break;
    FUN_1407dcec0(local_28,1);
  }
  for (; (local_res18 != 0 && (*local_res10 == '\0')); local_res10 = local_res10 + 1) {
    local_res18 = local_res18 + -1;
  }
  FUN_1407dd0a0(local_28,local_res10,local_res18);
  return;
}


/* address=140801920 name=FUN_140801920 */

void FUN_140801920(undefined8 param_1)

{
  FUN_140801ca0(0,param_1,1);
  return;
}


/* address=140801980 name=FUN_140801980 */

void FUN_140801980(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  longlong local_res8;
  undefined auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_a8;
  iVar1 = FUN_140802010(param_2,&local_50);
  if (((iVar1 != 0) &&
      (((param_3 == 0 && (param_4 == 0)) ||
       (iVar1 = FUN_1408021e0(&local_50,param_3,param_4), iVar1 != 0)))) &&
     ((0x31 < local_3c && (local_3c < 0x96)))) {
    local_88 = local_40 + 1;
    local_68 = local_50;
    local_70 = local_4c;
    local_78 = local_48;
    local_80 = local_44;
    local_54 = local_88;
    _snprintf(local_28,0xe,s__02d_02d_02d_02d_02d_02dZ_140c04648,
              (longlong)local_3c % 100 & 0xffffffff);
    local_58 = 0;
    local_res8 = param_1;
    if (param_1 == 0) {
      local_58 = 1;
      local_res8 = FUN_1407d7480();
      if (local_res8 == 0) goto LAB_140801b06;
    }
    sVar2 = strlen(local_28);
    iVar1 = FUN_1407cbdc0(local_res8,local_28,sVar2);
    if (iVar1 == 0) {
      if (local_58 != 0) {
        FUN_1407d74a0(local_res8);
      }
    }
    else {
      *(undefined4 *)(local_res8 + 4) = 0x17;
    }
  }
LAB_140801b06:
  FUN_140805d70(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140801b30 name=FUN_140801b30 */

undefined8 FUN_140801b30(longlong param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined local_20 [32];
  
  sVar2 = strlen(param_2);
  FUN_1407dce80(local_20,param_2,sVar2);
  iVar1 = FUN_1407de390(local_20,0,1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_1 != 0) {
      iVar1 = FUN_1407cbdc0(param_1,param_2,sVar2);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 0x17;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140801ca0 name=FUN_140801ca0 */

undefined8 FUN_140801ca0(undefined8 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_18 [24];
  
  if (param_2[1] == 0x17) {
    FUN_1407dce80(local_18,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
    iVar1 = FUN_1407de390(local_18,param_1,param_3);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140801d10 name=FUN_140801d10 */

void FUN_140801d10(undefined8 param_1)

{
  FUN_140801fb0(0,param_1);
  return;
}


/* address=140801d60 name=FUN_140801d60 */

void FUN_140801d60(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  longlong local_res8;
  undefined auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  int local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_a8;
  iVar1 = FUN_140802010(param_2,&local_50);
  if ((iVar1 != 0) &&
     (((param_3 == 0 && (param_4 == 0)) ||
      (iVar1 = FUN_1408021e0(&local_50,param_3,param_4), iVar1 != 0)))) {
    if ((local_3c < -0x76c) || (0x1fa3 < local_3c)) {
      local_88 = 0x79;
      FUN_1407c2680(0xc,0,0x8a,s_D__a_1_s_target_release_build_bo_140c04670);
    }
    else {
      local_88 = local_40 + 1;
      local_68 = local_50;
      local_70 = local_4c;
      local_78 = local_48;
      local_80 = local_44;
      _snprintf(local_28,0x10,s__04d_02d_02d_02d_02d_02dZ_140c046d8,(ulonglong)(local_3c + 0x76c));
      local_58 = 0;
      local_res8 = param_1;
      if (param_1 == 0) {
        local_58 = 1;
        local_res8 = FUN_1407d7480();
        if (local_res8 == 0) goto LAB_140801efe;
      }
      sVar2 = strlen(local_28);
      iVar1 = FUN_1407cbdc0(local_res8,local_28,sVar2);
      if (iVar1 == 0) {
        if (local_58 != 0) {
          FUN_1407d74a0(local_res8);
        }
      }
      else {
        *(undefined4 *)(local_res8 + 4) = 0x18;
      }
    }
  }
LAB_140801efe:
  FUN_140805d70(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140801f20 name=FUN_140801f20 */

undefined8 FUN_140801f20(longlong param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined local_20 [32];
  
  sVar2 = strlen(param_2);
  FUN_1407dce80(local_20,param_2,sVar2);
  iVar1 = FUN_1407de350(local_20,0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_1 != 0) {
      iVar1 = FUN_1407cbdc0(param_1,param_2,sVar2);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 0x18;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140801fb0 name=FUN_140801fb0 */

undefined8 FUN_140801fb0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_18 [24];
  
  if (param_2[1] == 0x18) {
    FUN_1407dce80(local_18,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
    iVar1 = FUN_1407de350(local_18,param_1,0);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140802010 name=FUN_140802010 */

bool FUN_140802010(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_1408d7ae0(param_2,0,0x24);
  iVar1 = FUN_140802890(param_1,param_2 + 0x14,param_2 + 0x10,param_2 + 0xc,param_2 + 8,param_2 + 4,
                        param_2);
  if (iVar1 != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -0x76c;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  }
  return iVar1 != 0;
}


/* address=1408020d0 name=FUN_1408020d0 */

void FUN_1408020d0(undefined4 *param_1,undefined8 param_2)

{
  FUN_1408026b0(param_1[5] + 0x76c,param_1[4] + 1,param_1[3],param_1[2],param_1[1],*param_1,param_2)
  ;
  return;
}


/* address=140802190 name=FUN_140802190 */

/* WARNING: Removing unreachable block (ram,0x0001408021bb) */

bool FUN_140802190(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_1408020d0(param_1,local_18);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=1408021e0 name=FUN_1408021e0 */

undefined8 FUN_1408021e0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined4 *local_10;
  
  iVar1 = FUN_1408026b0(param_1[5] + 0x76c,param_1[4] + 1,param_1[3],param_1[2],param_1[1],*param_1,
                        &local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_10 = param_1 + 4;
    iVar1 = FUN_140802890(local_18 + (longlong)param_2 * 0x15180 + (longlong)param_3,param_1 + 5,
                          local_10,param_1 + 3,param_1 + 2,param_1 + 1,param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      param_1[5] = param_1[5] + -0x76c;
      param_1[4] = param_1[4] + -1;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140802310 name=FUN_140802310 */

undefined8
FUN_140802310(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_20;
  longlong local_18;
  longlong local_10 [2];
  
  iVar1 = FUN_1408026b0(param_4[5] + 0x76c,param_4[4] + 1,param_4[3],param_4[2],param_4[1],*param_4,
                        local_10);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_1408026b0(param_3[5] + 0x76c,param_3[4] + 1,param_3[3],param_3[2],param_3[1],
                          *param_3,&local_18);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = (local_10[0] - local_18) / 0x15180;
      if ((lVar2 < 0x80000000) && (-0x80000001 < lVar2)) {
        local_28 = (undefined4)((local_10[0] - local_18) % 0x15180);
        *param_2 = local_28;
        local_20 = (undefined4)lVar2;
        *param_1 = local_20;
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


/* address=140802490 name=FUN_140802490 */

undefined4 FUN_140802490(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((((param_3 < 1) || (param_2 < 1)) || (param_1 < 0)) || (9999 < param_1)) {
    local_20 = 0;
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
      if ((param_3 < 1) || (0x1f < param_3)) {
        local_24 = 0;
        local_20 = local_24;
      }
      else {
        local_24 = 1;
        local_20 = local_24;
      }
      break;
    case 2:
      uVar1 = param_1 >> 0x1f & 3;
      if ((((param_1 + uVar1 & 3) == uVar1) && (param_1 % 100 != 0)) || (param_1 % 400 == 0)) {
        if ((param_3 < 1) || (0x1d < param_3)) {
          local_1c = 0;
          local_20 = local_1c;
        }
        else {
          local_1c = 1;
          local_20 = local_1c;
        }
      }
      else if ((param_3 < 1) || (0x1c < param_3)) {
        local_18 = 0;
        local_20 = local_18;
      }
      else {
        local_18 = 1;
        local_20 = local_18;
      }
      break;
    case 4:
    case 6:
    case 9:
    case 0xb:
      if ((param_3 < 1) || (0x1e < param_3)) {
        local_20 = 0;
      }
      else {
        local_20 = 1;
      }
      break;
    default:
      local_20 = 0;
    }
  }
  return local_20;
}


/* address=140802610 name=FUN_140802610 */

undefined8 FUN_140802610(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (param_3 < 0)) ||
     (((0x17 < param_1 || (0x3b < param_2)) || (0x3b < param_3)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140802660 name=FUN_140802660 */

undefined4 FUN_140802660(longlong param_1)

{
  undefined4 local_18;
  
  if ((param_1 < -0xe79747c00) || (0x3afff4417f < param_1)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=1408026b0 name=FUN_1408026b0 */

undefined8
FUN_1408026b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  int local_res8;
  int local_48;
  int local_44;
  
  iVar1 = FUN_140802490(param_1,param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_140802610(param_4,param_5,param_6), iVar1 != 0)) {
    local_res8 = param_1;
    if (param_2 < 3) {
      local_res8 = param_1 + -1;
    }
    if ((local_res8 < -1) || (9999 < local_res8)) {
      FID_conflict__assert((wchar_t *)s___140c047d0,(wchar_t *)s_D_140c04700,0x5c);
    }
    if (local_res8 < 0) {
      local_48 = local_res8 + -399;
    }
    else {
      local_48 = local_res8;
    }
    lVar2 = (longlong)local_res8 + (longlong)(local_48 / 400) * -400;
    if (param_2 < 3) {
      local_44 = param_2 + 9;
    }
    else {
      local_44 = param_2 + -3;
    }
    *param_7 = ((longlong)(local_48 / 400) * 0x23ab1 + -0xafa6c +
               ((lVar2 * 0x16d + ((longlong)(lVar2 + (lVar2 >> 0x3f & 3U)) >> 2)) - lVar2 / 100) +
               (longlong)((local_44 * 0x99 + 2) / 5 + -1 + param_3)) * 0x15180 +
               (longlong)(param_4 * 0xe10) + (longlong)(param_5 * 0x3c) + (longlong)param_6;
    return 1;
  }
  return 0;
}


/* address=140802890 name=FUN_140802890 */

undefined8
FUN_140802890(longlong param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
             undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_78;
  longlong local_70;
  longlong local_50;
  int local_40;
  
  iVar1 = FUN_140802660(param_1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    local_78 = param_1 / 0x15180;
    local_70 = param_1 % 0x15180;
    if (local_70 < 0) {
      local_78 = local_78 + -1;
      local_70 = local_70 + 0x15180;
    }
    lVar2 = local_78 + 0xafa6c;
    if ((lVar2 < -0x3d) || (0x37bb0c < lVar2)) {
      FID_conflict__assert((wchar_t *)s___140c048e0,(wchar_t *)s_D_140c04810,0x7a);
    }
    local_50 = lVar2;
    if (lVar2 < 1) {
      local_50 = local_78 + 0x8bfbc;
    }
    lVar2 = lVar2 + (local_50 / 0x23ab1) * -0x23ab1;
    lVar3 = (((lVar2 - lVar2 / 0x5b4) + lVar2 / 0x8eac) - lVar2 / 0x23ab0) / 0x16d;
    *param_2 = (int)lVar3 + (int)(local_50 / 0x23ab1) * 400;
    lVar2 = lVar2 - ((lVar3 * 0x16d + ((longlong)(lVar3 + (lVar3 >> 0x3f & 3U)) >> 2)) - lVar3 / 100
                    );
    lVar3 = (lVar2 * 5 + 2) / 0x99;
    if (lVar3 < 10) {
      local_40 = (int)lVar3 + 3;
    }
    else {
      local_40 = (int)lVar3 + -9;
    }
    *param_3 = local_40;
    if (*param_3 < 3) {
      *param_2 = *param_2 + 1;
    }
    *param_4 = ((int)lVar2 - (int)((lVar3 * 0x99 + 2) / 5)) + 1;
    *param_5 = (int)(local_70 / 0xe10);
    *param_6 = (int)((local_70 % 0xe10) / 0x3c);
    *param_7 = (int)((local_70 % 0xe10) % 0x3c);
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140802bb0 name=FUN_140802bb0 */

undefined8 FUN_140802bb0(int param_1)

{
  undefined8 uVar1;
  uint local_18;
  
  if (param_1 != 0) {
    for (local_18 = 0; local_18 < 0x12; local_18 = local_18 + 1) {
      if (*(int *)(&DAT_1409afeb0 + (ulonglong)local_18 * 0x20) == param_1) {
        uVar1 = (**(code **)(&UNK_1409afeb8 + (ulonglong)local_18 * 0x20))();
        return uVar1;
      }
    }
  }
  return 0;
}


/* address=140802c20 name=FUN_140802c20 */

void FUN_140802c20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_1407e1010(param_1);
    uVar2 = FUN_1407e0fe0(param_1);
    FUN_1407dce80(local_20,uVar2,uVar1);
    FUN_140803010(local_20);
  }
  else {
    FUN_140802bb0(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


/* address=140802c90 name=FUN_140802c90 */

longlong FUN_140802c90(wchar_t *param_1)

{
  ulong uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *local_40 [2];
  wchar_t *local_30 [2];
  wchar_t *local_20 [4];
  
  uVar1 = wcstoul(param_1,local_40,0x20000010);
  if ((uVar1 == 0) || (uVar1 = wcstoul((wchar_t *)local_40,local_30,6), uVar1 == 0)) {
    FUN_1407c2680(0x1d,0,0x65,s_D__a_1_s_target_release_build_bo_140c04af0,0xac);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140803010(local_30);
    if (lVar2 == 0) {
      FUN_1407c2680(0x1d,0,0x66,s_D__a_1_s_target_release_build_bo_140c04b60,0xb2);
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_1407dcf10(local_40);
      if ((lVar3 != 0) &&
         (((uVar1 = wcstoul((wchar_t *)local_40,local_20,5), uVar1 == 0 ||
           (lVar3 = FUN_1407dcf10(local_20), lVar3 != 0)) ||
          (lVar3 = FUN_1407dcf10(local_40), lVar3 != 0)))) {
        FUN_1407c2680(0x1d,0,0x65,s_D__a_1_s_target_release_build_bo_140c04bd0,0xbf);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


/* address=140802db0 name=FUN_140802db0 */

undefined8 FUN_140802db0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong local_a8;
  undefined local_98 [48];
  undefined local_68 [48];
  undefined local_38 [56];
  
  iVar2 = FUN_1407df890(param_1,local_98,0x20000010);
  if ((iVar2 == 0) || (iVar2 = FUN_1407df890(local_98,local_68,6), iVar2 == 0)) {
    return 0;
  }
  bVar1 = false;
  iVar2 = FUN_140756630(param_2);
  local_a8 = 0;
  do {
    if (6 < local_a8) {
LAB_140802e96:
      if (!bVar1) {
        FUN_1407c2680(0x1d,0,0x66,s_D__a_1_s_target_release_build_bo_140c04c40,0xdb);
        return 0;
      }
      iVar2 = FUN_1407df890(local_98,local_38,5);
      if ((iVar2 != 0) && (iVar2 = FUN_1407df350(param_1), iVar2 != 0)) {
        return 1;
      }
      return 0;
    }
    if (iVar2 == *(int *)(&DAT_1409b00fc + local_a8 * 0x10)) {
      iVar2 = FUN_1407df950(local_68,&DAT_1409b00f0 + local_a8 * 0x10,
                            (&DAT_1409b00f9)[local_a8 * 0x10]);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = true;
      goto LAB_140802e96;
    }
    local_a8 = local_a8 + 1;
  } while( true );
}


/* address=140802fd0 name=FUN_140802fd0 */

int FUN_140802fd0(void *param_1,void *param_2,size_t param_3)

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


/* address=140803010 name=FUN_140803010 */

undefined8 FUN_140803010(undefined8 param_1)

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
    uVar3 = FUN_1407dcf10(param_1);
    if (uVar3 == (byte)(&DAT_1409b00f9)[local_28 * 0x10]) {
      uVar1 = (&DAT_1409b00f9)[local_28 * 0x10];
      uVar4 = FUN_1407dcef0(param_1);
      iVar2 = FUN_140802fd0(uVar4,&DAT_1409b00f0 + local_28 * 0x10,uVar1);
      if (iVar2 == 0) {
        uVar4 = FUN_140802bb0(*(undefined4 *)(&DAT_1409b00fc + local_28 * 0x10));
        return uVar4;
      }
    }
    local_28 = local_28 + 1;
  } while( true );
}


/* address=140803240 name=FUN_140803240 */

longlong FUN_140803240(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *local_20 [4];
  
  lVar3 = FUN_14078c670();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = wcstoul(param_1,local_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_140803ba0(local_20,lVar3 + 8), iVar2 == 0)) ||
        (iVar2 = FUN_140803ba0(local_20,lVar3 + 0x10), iVar2 == 0)) ||
       (lVar4 = FUN_1407dcf10(local_20), lVar4 != 0)) {
      FUN_1407c2680(4,0,100,s_D__a_1_s_target_release_build_bo_140c04e10,100);
      FUN_14078c7d0(lVar3);
      lVar3 = 0;
    }
    else {
      iVar2 = FUN_14078d410(lVar3);
      if (iVar2 == 0) {
        FUN_1407c2680(4,0,0x68,s_D__a_1_s_target_release_build_bo_140c04e80,0x6a);
        FUN_14078c7d0(lVar3);
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}


/* address=140803340 name=FUN_140803340 */

longlong FUN_140803340(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined local_20 [32];
  
  FUN_1407dce80(local_20,param_1,param_2);
  lVar1 = FUN_140803240(local_20);
  if ((lVar1 == 0) || (lVar2 = FUN_1407dcf10(local_20), lVar2 != 0)) {
    FUN_1407c2680(4,0,100,s_D__a_1_s_target_release_build_bo_140c04ef0,0x77);
    FUN_14078c7d0(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=1408033d0 name=FUN_1408033d0 */

undefined8 FUN_1408033d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_1407df890(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_140803c10(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0))
      && (iVar1 = FUN_140803c10(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) &&
     (iVar1 = FUN_1407df350(param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_1407c2680(4,0,0x79,s_D__a_1_s_target_release_build_bo_140c04f60,0x84);
  return 0;
}


/* address=140803470 name=FUN_140803470 */

undefined8 FUN_140803470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  FUN_1407df110(local_38);
  iVar1 = FUN_1407df140(local_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_1408033d0(local_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_1407df270(local_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_1407c2680(4,0,0x79,s_D__a_1_s_target_release_build_bo_140c04fd0,0x91);
  FUN_1407df200(local_38);
  return 0;
}


/* address=140803510 name=FUN_140803510 */

longlong FUN_140803510(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_20;
  wchar_t *local_18 [3];
  
  lVar3 = FUN_14078c670();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,local_18,0x20000010);
    if ((uVar1 == 0) || (iVar2 = FUN_1407dd900(local_18,&local_20), iVar2 == 0)) {
      FUN_1407c2680(4,0,100,s_D__a_1_s_target_release_build_bo_140c05040,0xa6);
    }
    else if (local_20 == DAT_1409b0190) {
      iVar2 = FUN_140803ba0(local_18,lVar3 + 8);
      if (((((iVar2 != 0) && (iVar2 = FUN_140803ba0(local_18,lVar3 + 0x10), iVar2 != 0)) &&
           (iVar2 = FUN_140803ba0(local_18,lVar3 + 0x18), iVar2 != 0)) &&
          ((iVar2 = FUN_140803ba0(local_18,lVar3 + 0x20), iVar2 != 0 &&
           (iVar2 = FUN_140803ba0(local_18,lVar3 + 0x28), iVar2 != 0)))) &&
         ((iVar2 = FUN_140803ba0(local_18,lVar3 + 0x30), iVar2 != 0 &&
          ((iVar2 = FUN_140803ba0(local_18,lVar3 + 0x38), iVar2 != 0 &&
           (iVar2 = FUN_140803ba0(local_18,lVar3 + 0x40), iVar2 != 0)))))) {
        lVar4 = FUN_1407dcf10(local_18);
        if (lVar4 == 0) {
          iVar2 = FUN_14078d410(lVar3);
          if (iVar2 != 0) {
            return lVar3;
          }
          FUN_1407c2680(4,0,0x68,s_D__a_1_s_target_release_build_bo_140c05190,0xc0);
        }
        else {
          FUN_1407c2680(4,0,100,s_D__a_1_s_target_release_build_bo_140c05120,0xbb);
        }
      }
    }
    else {
      FUN_1407c2680(4,0,0x6a,s_D__a_1_s_target_release_build_bo_140c050b0,0xab);
    }
    FUN_14078c7d0(lVar3);
  }
  return 0;
}


/* address=140803720 name=FUN_140803720 */

longlong FUN_140803720(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined local_20 [32];
  
  FUN_1407dce80(local_20,param_1,param_2);
  lVar1 = FUN_140803510(local_20);
  if ((lVar1 == 0) || (lVar2 = FUN_1407dcf10(local_20), lVar2 != 0)) {
    FUN_1407c2680(4,0,100,s_D__a_1_s_target_release_build_bo_140c05200,0xd0);
    FUN_14078c7d0(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=1408037b0 name=FUN_1408037b0 */

undefined8 FUN_1408037b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_1407df890(param_1,local_38,0x20000010);
  if ((((((iVar1 != 0) && (iVar1 = FUN_1407dfd50(local_38,DAT_1409b0190), iVar1 != 0)) &&
        (iVar1 = FUN_140803c10(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
       ((iVar1 = FUN_140803c10(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0 &&
        (iVar1 = FUN_140803c10(local_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0)))) &&
      ((iVar1 = FUN_140803c10(local_38,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0 &&
       ((iVar1 = FUN_140803c10(local_38,*(undefined8 *)(param_2 + 0x28)), iVar1 != 0 &&
        (iVar1 = FUN_140803c10(local_38,*(undefined8 *)(param_2 + 0x30)), iVar1 != 0)))))) &&
     ((iVar1 = FUN_140803c10(local_38,*(undefined8 *)(param_2 + 0x38)), iVar1 != 0 &&
      ((iVar1 = FUN_140803c10(local_38,*(undefined8 *)(param_2 + 0x40)), iVar1 != 0 &&
       (iVar1 = FUN_1407df350(param_1), iVar1 != 0)))))) {
    return 1;
  }
  FUN_1407c2680(4,0,0x79,s_D__a_1_s_target_release_build_bo_140c05270,0xe4);
  return 0;
}


/* address=140803900 name=FUN_140803900 */

undefined8 FUN_140803900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  FUN_1407df110(local_38);
  iVar1 = FUN_1407df140(local_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_1408037b0(local_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_1407df270(local_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_1407c2680(4,0,0x79,s_D__a_1_s_target_release_build_bo_140c052e0,0xf1);
  FUN_1407df200(local_38);
  return 0;
}


/* address=1408039a0 name=FUN_1408039a0 */

longlong FUN_1408039a0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_1407dce80(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_140803240(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_14078c7d0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_1407dcef0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140803a40 name=FUN_140803a40 */

undefined8 FUN_140803a40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_1407df140(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_1408033d0(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_1407e5eb0(local_38,param_2);
    return uVar2;
  }
  FUN_1407df200(local_38);
  return 0xffffffff;
}


/* address=140803aa0 name=FUN_140803aa0 */

longlong FUN_140803aa0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_1407dce80(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_140803510(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_14078c7d0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_1407dcef0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140803b40 name=FUN_140803b40 */

undefined8 FUN_140803b40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_1407df140(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_1408037b0(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_1407e5eb0(local_38,param_2);
    return uVar2;
  }
  FUN_1407df200(local_38);
  return 0xffffffff;
}


/* address=140803ba0 name=FUN_140803ba0 */

undefined8 FUN_140803ba0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    FID_conflict__assert((wchar_t *)s___140c04d80,(wchar_t *)s_D_140c04cb0,0x49);
  }
  lVar1 = FUN_140761360();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14082be00(param_1,*param_2);
  }
  return uVar2;
}


/* address=140803c10 name=FUN_140803c10 */

undefined8 FUN_140803c10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1407c2680(4,0,0x90,s_D__a_1_s_target_release_build_bo_140c04da0,0x54);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14082bee0(param_1,param_2);
  }
  return uVar1;
}


/* address=140803c60 name=FUN_140803c60 */

void FUN_140803c60(undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_498;
  local_448 = (char *)0x0;
  local_440 = 0;
  local_420 = 0;
  local_450 = 0;
  local_478 = param_1;
  local_470 = param_3;
  local_468 = param_4;
  iVar1 = FUN_14080ed70(&local_420,&local_458,&local_448,s_ANY_PRIVATE_KEY_140c05350);
  if (iVar1 == 0) goto LAB_140803fdc;
  local_440 = local_420;
  iVar1 = strcmp(local_448,s_PRIVATE_KEY_140c05360);
  if (iVar1 == 0) {
    local_430 = FUN_1407f7640(0,&local_440,local_458);
    if (local_430 != 0) {
      local_450 = FUN_1407f76b0(local_430);
      if (param_2 != (longlong *)0x0) {
        if (*param_2 != 0) {
          FUN_140750120(*param_2);
        }
        *param_2 = local_450;
      }
      FUN_1407f7610(local_430);
    }
LAB_140803f99:
    if (local_450 == 0) {
      local_478 = CONCAT44(local_478._4_4_,0x90);
      FUN_1407c2680(9,0,0xc,s_D__a_1_s_target_release_build_bo_140c05430);
    }
  }
  else {
    iVar1 = strcmp(local_448,s_ENCRYPTED_PRIVATE_KEY_140c05370);
    if (iVar1 != 0) {
      iVar1 = strcmp(local_448,s_RSA_PRIVATE_KEY_140c053f8);
      if (iVar1 == 0) {
        local_450 = FUN_1407ab9f0(6,param_2,&local_440,local_458);
      }
      else {
        iVar1 = strcmp(local_448,s_EC_PRIVATE_KEY_140c05408);
        if (iVar1 == 0) {
          local_450 = FUN_1407ab9f0(0x198,param_2,&local_440,local_458);
        }
        else {
          iVar1 = strcmp(local_448,s_DSA_PRIVATE_KEY_140c05418);
          if (iVar1 == 0) {
            local_450 = FUN_1407ab9f0(0x74,param_2,&local_440,local_458);
          }
        }
      }
      goto LAB_140803f99;
    }
    local_438 = FUN_14080bbe0(0,&local_440,local_458);
    if (local_438 == 0) goto LAB_140803f99;
    local_454 = 0;
    local_res18 = param_3;
    if (param_3 == (code *)0x0) {
      local_res18 = FUN_14080f750;
    }
    local_454 = (*local_res18)(local_418,0x400,0,param_4);
    if (0 < local_454) {
      local_428 = FUN_1407f7a70(local_438,local_418,local_454);
      FUN_14080bbb0(local_438);
      FUN_1407cd290(local_418,(longlong)local_454);
      if (local_428 != 0) {
        local_450 = FUN_1407f76b0(local_428);
        if (param_2 != (longlong *)0x0) {
          if (*param_2 != 0) {
            FUN_140750120(*param_2);
          }
          *param_2 = local_450;
        }
        FUN_1407f7610(local_428);
      }
      goto LAB_140803f99;
    }
    local_478 = CONCAT44(local_478._4_4_,0x72);
    FUN_1407c2680(9,0,0x68,s_D__a_1_s_target_release_build_bo_140c05390);
    FUN_14080bbb0(local_438);
  }
  FUN_1407cd0f0(local_448);
  FUN_1407cd0f0(local_420);
LAB_140803fdc:
  FUN_140805d70(local_18 ^ (ulonglong)auStack_498);
  return;
}


/* address=140804000 name=FUN_140804000 */

undefined8
FUN_140804000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140809d80(param_1,0);
  if (lVar1 == 0) {
    FUN_1407c2680(9,0,7,s_D__a_1_s_target_release_build_bo_140c054a0,0xa3);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140803c60(lVar1,param_2,param_3,param_4);
    FUN_1407c0080(lVar1);
  }
  return uVar2;
}


/* address=140804090 name=FUN_140804090 */

void FUN_140804090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1407aaa80(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* address=1408041a0 name=FUN_1408041a0 */

longlong FUN_1408041a0(undefined *param_1,byte *param_2,ulonglong param_3)

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
      uVar2 = FUN_140805090(local_28 >> 0x12);
      *local_res8 = uVar2;
      uVar2 = FUN_140805090(local_28 >> 0xc & 0xff);
      local_res8[1] = uVar2;
      if (local_20 == 1) {
        uVar2 = 0x3d;
      }
      else {
        uVar2 = FUN_140805090(local_28 >> 6 & 0xff);
      }
      local_res8[2] = uVar2;
      local_res8[3] = 0x3d;
      local_20 = 0;
    }
    else {
      uVar3 = (uint)*local_res10 << 0x10 | (uint)local_res10[1] << 8;
      bVar1 = local_res10[2];
      uVar2 = FUN_140805090(((uint)*local_res10 << 0x10) >> 0x12);
      *local_res8 = uVar2;
      uVar2 = FUN_140805090((uVar3 & 0xff000) >> 0xc);
      local_res8[1] = uVar2;
      uVar2 = FUN_140805090((uVar3 | bVar1) >> 6 & 0xff);
      local_res8[2] = uVar2;
      uVar2 = FUN_140805090(bVar1);
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


/* address=140804480 name=FUN_140804480 */

bool FUN_140804480(longlong *param_1,ulonglong param_2)

{
  bool bVar1;
  
  bVar1 = param_2 % 4 == 0;
  if (bVar1) {
    *param_1 = (param_2 / 4) * 3;
  }
  return bVar1;
}


/* address=1408044d0 name=FUN_1408044d0 */

undefined8
FUN_1408044d0(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4,
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
    iVar1 = FUN_140804480(local_10,param_5);
    if ((iVar1 == 0) || (param_3 < local_10[0])) {
      uVar2 = 0;
    }
    else {
      local_18 = 0;
      local_res8 = param_1;
      for (local_28 = 0; local_28 < param_5; local_28 = local_28 + 4) {
        iVar1 = FUN_1408052d0(local_res8,&local_20,param_4 + local_28);
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


/* address=140804670 name=FUN_140804670 */

void FUN_140804670(undefined8 param_1)

{
  FUN_140804fb0(param_1,0,0x38);
  return;
}


/* address=1408046a0 name=FUN_1408046a0 */

void FUN_1408046a0(uint *param_1,undefined *param_2,undefined4 *param_3,longlong param_4,
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
      FID_conflict__assert((wchar_t *)s_c_140c05650,(wchar_t *)s_D_140c05580,0x95);
    }
    if (param_5 < 0x30 - (ulonglong)*param_1) {
      FUN_140804f60((longlong)param_1 + (ulonglong)*param_1 + 4,param_4,param_5);
      *param_1 = *param_1 + (uint)param_5;
    }
    else {
      local_res10 = param_2;
      local_res20 = param_4;
      if (*param_1 != 0) {
        lVar1 = 0x30 - (ulonglong)*param_1;
        FUN_140804f60((longlong)param_1 + (ulonglong)*param_1 + 4,param_4,lVar1);
        local_res20 = param_4 + lVar1;
        param_5 = param_5 - lVar1;
        lVar1 = FUN_1408041a0(param_2,param_1 + 1,0x30);
        *param_1 = 0;
        param_2[lVar1] = 10;
        local_res10 = param_2 + lVar1 + 1;
        *local_res10 = 0;
        local_28 = lVar1 + 1;
      }
      while (0x2f < param_5) {
        lVar1 = FUN_1408041a0(local_res10,local_res20,0x30);
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
        FUN_140804f60(param_1 + 1,local_res20,param_5);
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


/* address=140804940 name=FUN_140804940 */

void FUN_140804940(int *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_18;
  
  if (*param_1 == 0) {
    *param_3 = 0;
  }
  else {
    lVar1 = FUN_1408041a0(param_2,param_1 + 1,*param_1);
    *(undefined *)(param_2 + lVar1) = 10;
    uVar2 = lVar1 + 1;
    *(undefined *)(param_2 + uVar2) = 0;
    *param_1 = 0;
    if (0x7fffffff < uVar2) {
      FID_conflict__assert((wchar_t *)s_e_140c05768,(wchar_t *)s_D_140c056a0,0xd9);
    }
    local_18 = (undefined4)uVar2;
    *param_3 = local_18;
  }
  return;
}


/* address=140804a10 name=FUN_140804a10 */

void FUN_140804a10(undefined8 param_1)

{
  FUN_140804fb0(param_1,0,0x38);
  return;
}


/* address=140804a40 name=FUN_140804a40 */

undefined8
FUN_140804a40(uint *param_1,longlong param_2,undefined4 *param_3,longlong param_4,ulonglong param_5)

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
          iVar2 = FUN_1408052d0(local_res10,local_10,param_1 + 1);
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


/* address=140804c10 name=FUN_140804c10 */

undefined8 FUN_140804c10(int *param_1,undefined8 param_2,undefined4 *param_3)

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


/* address=140804de0 name=FUN_140804de0 */

undefined8 FUN_140804de0(undefined8 param_1)

{
  return param_1;
}


/* address=140804e00 name=FUN_140804e00 */

longlong FUN_140804e00(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=140804e20 name=FUN_140804e20 */

void FUN_140804e20(ulonglong param_1)

{
  FUN_140804e00(~param_1 & param_1 - 1);
  return;
}


/* address=140804e50 name=FUN_140804e50 */

void FUN_140804e50(ulonglong param_1,ulonglong param_2)

{
  FUN_140804e20(param_1 ^ param_2);
  return;
}


/* address=140804e90 name=FUN_140804e90 */

void FUN_140804e90(undefined8 param_1,undefined8 param_2)

{
  FUN_140804e50(param_1,param_2);
  return;
}


/* address=140804ec0 name=FUN_140804ec0 */

ulonglong FUN_140804ec0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_140804de0(param_1);
  uVar2 = FUN_140804de0(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=140804f10 name=FUN_140804f10 */

void FUN_140804f10(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_140804ec0(param_1,param_2,param_3);
  return;
}


/* address=140804f60 name=FUN_140804f60 */

undefined8 FUN_140804f60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140804fb0 name=FUN_140804fb0 */

undefined8 FUN_140804fb0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140804ff0 name=FUN_140804ff0 */

void FUN_140804ff0(byte param_1,byte param_2)

{
  FUN_140804e00((ulonglong)param_1 - (ulonglong)param_2);
  return;
}


/* address=140805040 name=FUN_140805040 */

void FUN_140805040(char param_1,char param_2,char param_3)

{
  FUN_140804ff0(param_1 - param_2,(param_3 - param_2) + '\x01');
  return;
}


/* address=140805090 name=FUN_140805090 */

undefined FUN_140805090(byte param_1)

{
  undefined uVar1;
  undefined uVar2;
  
  param_1 = param_1 & 0x3f;
  uVar1 = FUN_140804e90(param_1,0x3e);
  uVar1 = FUN_140804f10(uVar1,0x2b,0x2f);
  uVar2 = FUN_140804ff0(param_1,0x3e);
  uVar1 = FUN_140804f10(uVar2,param_1 - 4,uVar1);
  uVar2 = FUN_140804ff0(param_1,0x34);
  uVar1 = FUN_140804f10(uVar2,param_1 + 0x47,uVar1);
  uVar2 = FUN_140804ff0(param_1,0x1a);
  uVar1 = FUN_140804f10(uVar2,param_1 + 0x41,uVar1);
  return uVar1;
}


/* address=140805170 name=FUN_140805170 */

byte FUN_140805170(char param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  bVar1 = FUN_140805040(param_1,0x41,0x5a);
  bVar2 = FUN_140805040(param_1,0x61,0x7a);
  bVar3 = FUN_140805040(param_1,0x30,0x39);
  bVar4 = FUN_140804e90(param_1,0x2b);
  bVar5 = FUN_140804e90(param_1,0x2f);
  bVar6 = FUN_140804e90(param_1,0x3d);
  return bVar1 & param_1 + 0xbfU | bVar2 & param_1 + 0xb9U | bVar3 & param_1 + 4U | bVar4 & 0x3e |
         bVar5 & 0x3f | ~(bVar1 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6);
}


/* address=1408052d0 name=FUN_1408052d0 */

undefined8 FUN_1408052d0(byte *param_1,undefined8 *param_2,char *param_3)

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
  
  bVar1 = FUN_140805170(*param_3);
  bVar2 = FUN_140805170(param_3[1]);
  bVar3 = FUN_140805170(param_3[2]);
  local_24 = FUN_140805170(param_3[3]);
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


/* address=140805560 name=FUN_140805560 */

void FUN_140805560(void)

{
  return;
}


/* address=1408055b0 name=FUN_1408055b0 */

char * FUN_1408055b0(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    pcVar1 = s_BoringSSL_140c05880;
  }
  else if (param_1 == 1) {
    pcVar1 = s_compiler__n_a_140c05890;
  }
  else if (param_1 == 2) {
    pcVar1 = s_built_on__n_a_140c058a0;
  }
  else if (param_1 == 3) {
    pcVar1 = s_platform__n_a_140c058b0;
  }
  else if (param_1 == 4) {
    pcVar1 = s_OPENSSLDIR__n_a_140c058c0;
  }
  else {
    pcVar1 = s_not_available_140c058d0;
  }
  return pcVar1;
}


/* address=1408056f0 name=FUN_1408056f0 */

void FUN_1408056f0(void)

{
  return;
}


/* address=14080573c name=FUN_14080573c */

void FUN_14080573c(ulonglong param_1,longlong param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*(byte *)param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = param_1 + ((ulonglong)*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0);
  }
  FUN_140805d70(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}


/* address=1408057d0 name=__chkstk */

/* WARNING: This is an inlined function */
/* Library Function - Single Match
    __chkstk
   
   Libraries: Visual Studio 2005, Visual Studio 2008, Visual Studio 2010, Visual Studio 2012 */

void __chkstk(void)

{
  undefined *in_RAX;
  undefined *puVar1;
  undefined *puVar2;
  longlong unaff_GS_OFFSET;
  undefined local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined *)0x0;
  }
  puVar2 = *(undefined **)(unaff_GS_OFFSET + 0x10);
  if (puVar1 < puVar2) {
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}


/* address=140805820 name=FUN_140805820 */

/* WARNING: Removing unreachable block (ram,0x000140805911) */
/* WARNING: Removing unreachable block (ram,0x000140805901) */
/* WARNING: Removing unreachable block (ram,0x0001408058dc) */
/* WARNING: Removing unreachable block (ram,0x00014080585a) */
/* WARNING: Removing unreachable block (ram,0x000140805838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140805820(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] ^ 0x49656e69U | piVar1[3] ^ 0x6c65746eU | piVar1[1] ^ 0x756e6547U) == 0) {
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_140c05910 = 0x8000;
    DAT_140c05918 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_140c1c024 = DAT_140c1c024 | 1;
    }
  }
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  if (6 < *piVar1) {
    piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar8 = piVar3[1];
    uVar9 = piVar3[2];
    if ((uVar8 >> 9 & 1) != 0) {
      DAT_140c1c024 = DAT_140c1c024 | 2;
    }
    if (0 < *piVar3) {
      lVar4 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar10 = *(uint *)(lVar4 + 8);
    }
    if (0x23 < *piVar1) {
      lVar4 = cpuid(0x24);
      uVar11 = (ulonglong)*(uint *)(lVar4 + 4);
    }
  }
  DAT_140c05908 = 1;
  DAT_140c0590c = 2;
  uVar7 = DAT_140c05900 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_140c05908 = 2;
    DAT_140c0590c = 6;
    uVar7 = DAT_140c05900 & 0xffffffffffffffee;
  }
  DAT_140c05900 = uVar7;
  if ((uVar5 >> 0x1b & 1) != 0) {
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)in_XCR0, (bVar6 & 6) == 6)) {
      DAT_140c05908 = 3;
      uVar7 = DAT_140c05900;
      uVar5 = DAT_140c0590c | 8;
      if ((uVar8 & 0x20) != 0) {
        DAT_140c05908 = 5;
        uVar7 = DAT_140c05900 & 0xfffffffffffffffd;
        uVar5 = DAT_140c0590c | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
          DAT_140c0590c = DAT_140c0590c | 0x68;
          DAT_140c05908 = 6;
          uVar7 = DAT_140c05900 & 0xffffffffffffffd9;
          uVar5 = DAT_140c0590c;
        }
      }
      DAT_140c0590c = uVar5;
      DAT_140c05900 = uVar7;
      if ((uVar9 >> 0x17 & 1) != 0) {
        DAT_140c05900 = DAT_140c05900 & 0xfffffffffeffffff;
      }
      if (((uVar10 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
        _DAT_140c1c020 = (uint)uVar11 & 0x400ff;
        DAT_140c05900 = ~((ulonglong)((uint)(uVar11 >> 0x10) & 6) | 0x1000029) & DAT_140c05900;
        if (1 < (byte)_DAT_140c1c020) {
          DAT_140c05900 = DAT_140c05900 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar10 >> 0x15 & 1) != 0) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_140c05900 = DAT_140c05900 & 0xffffffffffffff7f;
    }
  }
  return 0;
}


/* address=140805ab8 name=FUN_140805ab8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140805ab8(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined auStack_28 [8];
  undefined auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x140805ae3;
  FUN_140805c40(&DAT_140c1c0d0);
  _DAT_140c1c040 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_140c1c168 = puVar3 + 0x30;
  _DAT_140c1c030 = 0xc0000409;
  _DAT_140c1c034 = 1;
  _DAT_140c1c048 = 1;
  DAT_140c1c050 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x140805b4f;
  DAT_140c1c1c8 = _DAT_140c1c040;
  __raise_securityfailure(&PTR_DAT_1409cf168);
  return;
}


/* address=140805b58 name=FUN_140805b58 */

void FUN_140805b58(void)

{
  FUN_140805ab8(8);
  return;
}


/* address=140805b6c name=FUN_140805b6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140805b6c(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined *puVar3;
  undefined auStack_38 [8];
  undefined auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x140805b97;
  FUN_140805cb0(&DAT_140c1c0d0);
  _DAT_140c1c040 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_140c1c168 = puVar3 + 0x40;
  _DAT_140c1c150 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_140c1c030 = 0xc0000409;
  _DAT_140c1c034 = 1;
  _DAT_140c1c048 = 1;
  DAT_140c1c050 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140c05940;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140c05980;
  *(undefined8 *)(puVar3 + -8) = 0x140805c39;
  DAT_140c1c1c8 = _DAT_140c1c040;
  __raise_securityfailure(&PTR_DAT_1409cf168);
  return;
}


/* address=140805c40 name=FUN_140805c40 */

void FUN_140805c40(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}


/* address=140805cb0 name=FUN_140805cb0 */

void FUN_140805cb0(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}


/* address=140805d24 name=__raise_securityfailure */

/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000140805d51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}


/* address=140805d70 name=FUN_140805d70 */

void FUN_140805d70(longlong param_1)

{
  if ((param_1 == DAT_140c05940) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_140805b6c(param_1);
  return;
}


/* address=140805d90 name=atexit */

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


/* address=140805da8 name=_onexit */

/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_140c1c5c0 == -1) {
    iVar1 = FUN_1408bb048();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_140c1c5c0);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}


/* address=140805de4 name=FUN_140805de4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140805de4(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (_s_M_140000000 == 0x5a4d) {
    lVar3 = (longlong)_DAT_14000003c;
    if ((*(int *)("M" + lVar3) == 0x4550) &&
       (uVar1 = 0x20b, *(short *)(&UNK_140000018 + lVar3) == 0x20b)) {
      lVar4 = (ulonglong)*(ushort *)(&UNK_140000014 + lVar3) + 0x18 + (longlong)("M" + lVar3);
      uVar1 = (ulonglong)*(ushort *)(&UNK_140000006 + lVar3);
      lVar3 = lVar4 + uVar1 * 0x28;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
        if (((ulonglong)*(uint *)(lVar4 + 0xc) <= param_1 - 0x140000000U) &&
           (uVar1 = (ulonglong)(*(int *)(lVar4 + 8) + *(uint *)(lVar4 + 0xc)),
           param_1 - 0x140000000U < uVar1)) goto LAB_140805e5a;
      }
      lVar4 = 0;
LAB_140805e5a:
      if (lVar4 == 0) {
        return uVar1 & 0xffffffffffffff00;
      }
      uVar2 = (uint7)(uVar1 >> 8);
      if (*(int *)(lVar4 + 0x24) < 0) {
        return (ulonglong)uVar2 << 8;
      }
      return CONCAT71(uVar2,1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}


/* address=140805e7c name=__scrt_acquire_startup_lock */

/* Library Function - Single Match
    __scrt_acquire_startup_lock
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_acquire_startup_lock(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_GS_OFFSET;
  bool bVar6;
  
  iVar3 = __scrt_is_ucrt_dll_in_use();
  if (iVar3 == 0) {
LAB_140805eaa:
    uVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x30) + 8);
    do {
      lVar4 = 0;
      LOCK();
      bVar6 = DAT_140c1c5b0 == 0;
      lVar2 = lVar1;
      if (!bVar6) {
        lVar4 = DAT_140c1c5b0;
        lVar2 = DAT_140c1c5b0;
      }
      DAT_140c1c5b0 = lVar2;
      UNLOCK();
      if (bVar6) goto LAB_140805eaa;
    } while (lVar1 != lVar4);
    uVar5 = 1;
  }
  return uVar5;
}


/* address=140805eb8 name=__scrt_release_startup_lock */

/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Library: Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_140c1c5b0 = 0;
    UNLOCK();
  }
  return;
}


/* address=140805edc name=FUN_140805edc */

undefined FUN_140805edc(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_140c1c5b8 = 1;
  }
  FUN_140805820();
  cVar1 = __vcrt_initialize();
  if (cVar1 != '\0') {
    cVar1 = FUN_1408af83c();
    if (cVar1 != '\0') {
      return 1;
    }
    __vcrt_uninitialize(0);
  }
  return 0;
}


/* address=140805f18 name=__scrt_uninitialize_crt */

/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined __scrt_uninitialize_crt(undefined param_1,char param_2)

{
  if ((DAT_140c1c5b8 == '\0') || (param_2 == '\0')) {
    __acrt_uninitialize();
    __vcrt_uninitialize(param_1);
  }
  return 1;
}


/* address=140805f44 name=__scrt_initialize_onexit_tables */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_140c1c5b9 == '\0') {
    if (1 < param_1) {
      FUN_140875660(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = __scrt_is_ucrt_dll_in_use();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_140c1c5c0._0_4_ = _DAT_14094ef30;
      DAT_140c1c5c0._4_4_ = _UNK_14094ef34;
      uRam0000000140c1c5c8 = _UNK_14094ef38;
      uRam0000000140c1c5cc = _UNK_14094ef3c;
      _DAT_140c1c5d0 = 0xffffffffffffffff;
      _DAT_140c1c5d8 = _DAT_14094ef30;
      uRam0000000140c1c5dc = _UNK_14094ef34;
      uRam0000000140c1c5e0 = _UNK_14094ef38;
      uRam0000000140c1c5e4 = _UNK_14094ef3c;
      _DAT_140c1c5e8 = 0xffffffffffffffff;
    }
    else {
      iVar2 = _initialize_onexit_table(&DAT_140c1c5c0);
      if ((iVar2 != 0) || (iVar2 = _initialize_onexit_table(&DAT_140c1c5d8), iVar2 != 0)) {
        return 0;
      }
    }
    DAT_140c1c5b9 = '\x01';
  }
  return 1;
}


/* address=140805fd0 name=FUN_140805fd0 */

void FUN_140805fd0(void)

{
  FUN_1407ac640();
  return;
}


/* address=140805ff0 name=FUN_140805ff0 */

void FUN_140805ff0(undefined8 param_1)

{
  FUN_1407ac770(param_1);
  return;
}


/* address=140806010 name=FUN_140806010 */

void FUN_140806010(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acaf0(param_1,param_2);
  return;
}


/* address=140806040 name=FUN_140806040 */

void FUN_140806040(undefined8 param_1,undefined8 param_2)

{
  FUN_1407acf60(param_1,param_2);
  return;
}


/* address=140806220 name=FUN_140806220 */

undefined8 FUN_140806220(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140807290(param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}


/* address=140806270 name=FUN_140806270 */

undefined8 FUN_140806270(undefined8 *param_1,char *param_2,undefined8 param_3)

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
  FUN_140806530(&local_20,0,0x18);
  local_20 = local_res10;
  local_18 = param_3;
  lVar1 = FUN_140806620(*param_1,&local_20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}


/* address=140806350 name=FUN_140806350 */

longlong FUN_140806350(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1407ccfc0(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140806530(lVar1,0,0x18);
  }
  return lVar1;
}


/* address=1408063a0 name=FUN_1408063a0 */

int FUN_1408063a0(char *param_1,char param_2,int param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int local_28;
  char *local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 == (char *)0x0) {
    FUN_1407c2680(0xd,0,100,s_D__a_1_s_target_release_build_bo_140c05dc0,0x303);
    iVar1 = 0;
  }
  else {
    while( true ) {
      if (param_3 != 0) {
        while ((*local_20 != '\0' && (iVar1 = FUN_1407cd6e0(*local_20), iVar1 != 0))) {
          local_20 = local_20 + 1;
        }
      }
      pcVar2 = (char *)FUN_1408af560(local_20,(int)param_2);
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
          while (iVar1 = FUN_1407cd6e0(*local_18), iVar1 != 0) {
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


/* address=140806530 name=FUN_140806530 */

undefined8 FUN_140806530(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7ae0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1408065d0 name=FUN_1408065d0 */

void FUN_1408065d0(undefined8 param_1,undefined8 param_2)

{
  FUN_14083a4b0(param_1,param_2);
  return;
}


/* address=140806600 name=FUN_140806600 */

void FUN_140806600(undefined8 param_1)

{
  FUN_14083a590(param_1);
  return;
}


/* address=140806620 name=FUN_140806620 */

void FUN_140806620(undefined8 param_1,undefined8 param_2)

{
  FUN_14083a660(param_1,param_2,&LAB_1408065a0,&LAB_140806570);
  return;
}


/* address=140806660 name=FUN_140806660 */

undefined4 FUN_140806660(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_14083a750(param_1,local_10,param_3,&LAB_1408065a0,&LAB_140806570);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=140806710 name=FUN_140806710 */

void FUN_140806710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_14083a900(param_1,&LAB_1408066d0,&local_18);
  return;
}


/* address=1408068a0 name=FUN_1408068a0 */

void FUN_1408068a0(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_1407cd0f0(*param_1);
  }
  if (param_1[1] == 0) {
    if (param_1[2] != 0) {
      FUN_140805ff0(param_1[2]);
    }
  }
  else {
    FUN_1407cd0f0(param_1[1]);
    if (param_1[2] != 0) {
      FUN_1407cd0f0(param_1[2]);
    }
  }
  return;
}


/* address=140806920 name=FUN_140806920 */

void FUN_140806920(undefined8 param_1)

{
  FUN_1408068a0(param_1);
  FUN_1407cd0f0(param_1);
  return;
}


/* address=140806980 name=FUN_140806980 */

longlong * FUN_140806980(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_20;
  longlong local_10 [2];
  
  bVar1 = false;
  lVar3 = FUN_140805fd0();
  local_20 = (longlong *)FUN_140806350();
  if ((lVar3 != 0) && (local_20 != (longlong *)0x0)) {
    lVar4 = FUN_1407cd410(param_2);
    *local_20 = lVar4;
    if (*local_20 != 0) {
      local_20[1] = 0;
      local_20[2] = lVar3;
      iVar2 = FUN_140806660(*param_1,local_10,local_20);
      if (iVar2 != 0) {
        if (local_10[0] != 0) {
          FUN_140806920(local_10[0]);
        }
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    if (lVar3 != 0) {
      FUN_140805ff0(lVar3);
    }
    if (local_20 != (longlong *)0x0) {
      FUN_1407cd0f0(local_20);
    }
    local_20 = (longlong *)0x0;
  }
  return local_20;
}


/* address=140806a90 name=FUN_140806a90 */

undefined8 FUN_140806a90(undefined8 param_1,byte *param_2,longlong *param_3,byte *param_4)

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
  plVar5 = (longlong *)FUN_140824d30();
  if (plVar5 == (longlong *)0x0) {
    uVar9 = 0;
  }
  else {
    sVar6 = strlen((char *)param_4);
    lVar7 = FUN_140824ee0(plVar5,(longlong)((int)sVar6 + 1));
    local_res20 = param_4;
    if (lVar7 == 0) {
LAB_140807269:
      if (plVar5 != (longlong *)0x0) {
        FUN_140824d80(plVar5);
      }
      uVar9 = 0;
    }
    else {
LAB_140806b0c:
      while( true ) {
        while ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res20 * 2) & 0x40) != 0) {
          bVar1 = *local_res20;
          pbVar4 = local_res20;
          while (((local_res20 = pbVar4 + 1,
                  (*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0 &&
                  (*local_res20 != bVar1)) &&
                 (((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res20 * 2) & 0x20) == 0
                  || (local_res20 = pbVar4 + 2,
                     (*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0)
                  )))) {
            *(byte *)(plVar5[1] + (longlong)local_74) = *local_res20;
            local_74 = local_74 + 1;
            pbVar4 = local_res20;
          }
          if (*local_res20 == bVar1) {
            local_res20 = local_res20 + 1;
          }
        }
        if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res20 * 2) & 0x400) == 0)
        break;
        bVar1 = *local_res20;
        pbVar4 = local_res20;
        while (local_res20 = pbVar4 + 1,
              (*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0) {
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
      if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res20 * 2) & 0x20) == 0) {
        if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res20 * 2) & 8) != 0)
        goto LAB_140807213;
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
          while ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_68 * 2) & 0x107) != 0) {
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
            while ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_68 * 2) & 0x107) != 0)
            {
              local_68 = local_68 + 1;
            }
          }
          pbVar4 = local_68;
          bVar3 = *local_68;
          *local_68 = 0;
          if (bVar1 != 0) {
            if (bVar3 != bVar1) {
              FUN_1407c2680(0xd,0,0x67,s_D__a_1_s_target_release_build_bo_140c05990,0x13a);
              goto LAB_140807269;
            }
            local_68 = local_68 + 1;
          }
          local_50 = (char *)FUN_140806270(param_1,local_28,local_38);
          if (local_30 != (byte *)0x0) {
            *local_30 = bVar2;
          }
          *pbVar4 = bVar3;
          if (local_50 == (char *)0x0) {
            FUN_1407c2680(0xd,0,0x69,s_D__a_1_s_target_release_build_bo_140c059f0,0x14d);
            goto LAB_140807269;
          }
          sVar6 = strlen(local_50);
          uVar8 = (sVar6 + *plVar5) - ((longlong)local_68 - (longlong)local_res20);
          if (0x10000 < uVar8) {
            FUN_1407c2680(0xd,0,0x6a,s_D__a_1_s_target_release_build_bo_140c05a50,0x152);
            goto LAB_140807269;
          }
          lVar7 = FUN_140824f60(plVar5,uVar8);
          if (lVar7 == 0) goto LAB_140807269;
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
        goto LAB_140806b0c;
      }
      local_78 = local_res20[1];
      local_res20 = local_res20 + 2;
      if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)local_78 * 2) & 8) == 0) {
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
        goto LAB_140806b0c;
      }
LAB_140807213:
      *(undefined *)(plVar5[1] + (longlong)local_74) = 0;
      if (*param_3 != 0) {
        FUN_1407cd0f0(*param_3);
      }
      *param_3 = plVar5[1];
      FUN_1407cd0f0(plVar5);
      uVar9 = 1;
    }
  }
  return uVar9;
}


/* address=140807290 name=FUN_140807290 */

void FUN_140807290(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_28 [5];
  
  FUN_140806530(local_28,0,0x18);
  local_28[0] = param_2;
  FUN_140806620(*param_1,local_28);
  return;
}


/* address=1408072e0 name=FUN_1408072e0 */

undefined8 FUN_1408072e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = param_2[2];
  uVar2 = FUN_1407cd410(*param_2);
  *param_3 = uVar2;
  lVar3 = FUN_140806040(local_10,param_3);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_140806660(*param_1,&local_18,param_3);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (local_18 != 0) {
        FUN_140806010(local_10,local_18);
        FUN_140806920(local_18);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140807380 name=FUN_140807380 */

byte * FUN_140807380(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  
  local_res10 = param_2;
  while (((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 0x10) != 0 &&
         ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 8) == 0))) {
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=1408073f0 name=FUN_1408073f0 */

byte * FUN_1408073f0(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  byte *local_18;
  
  local_res10 = param_2;
  while( true ) {
    while ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) != 0) {
      if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)local_res10[1] * 2) & 8) == 0) {
        local_18 = local_res10 + 2;
      }
      else {
        local_18 = local_res10 + 1;
      }
      local_res10 = local_18;
    }
    if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 0x307) == 0) break;
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=1408074c0 name=FUN_1408074c0 */

byte * FUN_1408074c0(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  
  local_res10 = param_2 + 1;
  while( true ) {
    if (((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0) ||
       (*local_res10 == *param_2)) {
      if (*local_res10 == *param_2) {
        local_res10 = local_res10 + 1;
      }
      return local_res10;
    }
    if (((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) != 0) &&
       (local_res10 = local_res10 + 1,
       (*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0)) break;
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=1408075b0 name=FUN_1408075b0 */

byte * FUN_1408075b0(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte *local_res10;
  
  bVar1 = *param_2;
  local_res10 = param_2 + 1;
  while ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 8) == 0) {
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


/* address=140807660 name=FUN_140807660 */

void FUN_140807660(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  byte *local_18;
  
  local_res10 = param_2;
  while( true ) {
    if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 0x800) != 0) {
      *local_res10 = 0;
      return;
    }
    if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 0x10) == 0) break;
    local_res10 = local_res10 + 1;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 0x80) != 0) {
            *local_res10 = 0;
            return;
          }
          if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 0x400) == 0)
          break;
          local_res10 = (byte *)FUN_1408075b0(param_1,local_res10);
        }
        if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 0x40) == 0)
        break;
        local_res10 = (byte *)FUN_1408074c0(param_1,local_res10);
      }
      if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) == 0) break;
      if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)local_res10[1] * 2) & 8) == 0) {
        local_18 = local_res10 + 2;
      }
      else {
        local_18 = local_res10 + 1;
      }
      local_res10 = local_18;
    }
    if ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0) break;
    local_res10 = local_res10 + 1;
  }
  return;
}


/* address=140807830 name=FUN_140807830 */

void FUN_140807830(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  
  local_10 = DAT_140c05940 ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  local_58 = 0;
  local_88 = (byte *)0x0;
  local_78 = FUN_140824d30();
  if (local_78 == 0) {
    local_b8 = 0x223;
    FUN_1407c2680(0xd,0,7,s_D__a_1_s_target_release_build_bo_140c05ab0);
  }
  else {
    local_88 = (byte *)FUN_1407cd410("default");
    if (local_88 != (byte *)0x0) {
      local_58 = FUN_140806980(param_1,local_88);
      if (local_58 == 0) {
        local_b8 = 0x22e;
        FUN_1407c2680(0xd,0,0x68,s_D__a_1_s_target_release_build_bo_140c05b10);
      }
      else {
        local_a0 = 0;
        local_80 = 0;
        do {
          while( true ) {
            do {
              do {
                lVar3 = FUN_140824ee0(local_78,local_a0 + DAT_1409cf388);
                if (lVar3 == 0) {
                  local_b8 = 0x236;
                  FUN_1407c2680(0xd,0,7,s_D__a_1_s_target_release_build_bo_140c05b70);
                  goto LAB_140808052;
                }
                local_a8 = (byte *)(*(longlong *)(local_78 + 8) + (longlong)local_a0);
                *local_a8 = 0;
                FUN_1407c0250(param_2,local_a8,(int)DAT_1409cf388 + -1);
                local_a8[DAT_1409cf388 + -1] = 0;
                sVar4 = strlen((char *)local_a8);
                local_50 = (int)sVar4;
                local_9c = local_50;
                if ((local_50 == 0) && (local_80 == 0)) {
                  if (local_78 != 0) {
                    FUN_140824d80(local_78);
                  }
                  if (local_88 != (byte *)0x0) {
                    FUN_1407cd0f0(local_88);
                  }
                  goto LAB_14080811b;
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
                    (*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_a8 * 2) & 0x20) != 0))
                   && ((local_a0 < 2 ||
                       ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)local_a8[-1] * 2) & 0x20)
                        == 0)))) {
                  local_a0 = local_a0 + -1;
                  local_80 = 1;
                }
              } while (local_80 != 0);
              local_a0 = 0;
              local_28 = *(undefined8 *)(local_78 + 8);
              FUN_140807660(param_1,local_28);
              local_68 = (byte *)FUN_140807380(param_1,local_28);
            } while ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_68 * 2) & 8) != 0);
            if (*local_68 == 0x5b) break;
            local_60 = (byte *)0x0;
            local_30 = local_68;
            local_90 = (byte *)FUN_1408073f0(param_1,local_68);
            if ((*local_90 == ':') && (((char *)local_90)[1] == ':')) {
              *local_90 = '\0';
              local_90 = (byte *)((char *)local_90 + 2);
              local_60 = local_30;
              local_30 = local_90;
              local_90 = (byte *)FUN_1408073f0(param_1,local_90);
            }
            local_a8 = (byte *)FUN_140807380(param_1,local_90);
            if (*local_a8 != 0x3d) {
              local_b8 = 0x297;
              FUN_1407c2680(0xd,0,0x66,s_D__a_1_s_target_release_build_bo_140c05c90);
              goto LAB_140808052;
            }
            *local_90 = '\0';
            local_a8 = local_a8 + 1;
            local_48 = (byte *)FUN_140807380(param_1,local_a8);
            while ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_a8 * 2) & 8) == 0) {
              local_a8 = local_a8 + 1;
            }
            do {
              pbVar1 = local_a8;
              local_a8 = pbVar1 + -1;
              if (local_a8 == local_48) break;
            } while ((*(ushort *)(&DAT_1409cf180 + (longlong)(int)(uint)*local_a8 * 2) & 0x10) != 0)
            ;
            *pbVar1 = 0;
            local_a8 = pbVar1;
            local_98 = FUN_140806350();
            if (local_98 == 0) goto LAB_140808052;
            if (local_60 == (byte *)0x0) {
              local_60 = local_88;
            }
            uVar5 = FUN_1407cd410(local_30);
            *(undefined8 *)(local_98 + 8) = uVar5;
            if ((*(longlong *)(local_98 + 8) == 0) ||
               (iVar2 = FUN_140806a90(param_1,local_60,local_98 + 0x10,local_48), iVar2 == 0))
            goto LAB_140808052;
            iVar2 = strcmp((char *)local_60,(char *)local_88);
            if (iVar2 == 0) {
              local_40 = local_58;
            }
            else {
              local_40 = FUN_140807290(param_1,local_60);
              if (local_40 == 0) {
                local_40 = FUN_140806980(param_1,local_60);
              }
              if (local_40 == 0) {
                local_b8 = 0x2ba;
                FUN_1407c2680(0xd,0,0x68,s_D__a_1_s_target_release_build_bo_140c05cf0);
                goto LAB_140808052;
              }
            }
            iVar2 = FUN_1408072e0(param_1,local_40,local_98);
            if (iVar2 == 0) goto LAB_140808052;
            local_98 = 0;
          }
          local_68 = local_68 + 1;
          local_48 = (byte *)FUN_140807380(param_1,local_68);
          pbVar1 = local_48;
          while( true ) {
            local_38 = pbVar1;
            local_90 = (byte *)FUN_1408073f0(param_1,local_38);
            local_a8 = (byte *)FUN_140807380(param_1,local_90);
            if (*local_a8 == 0x5d) break;
            if ((*local_a8 == 0) || (pbVar1 = local_a8, local_38 == local_a8)) {
              local_b8 = 0x27b;
              FUN_1407c2680(0xd,0,0x65,s_D__a_1_s_target_release_build_bo_140c05bd0);
              goto LAB_140808052;
            }
          }
          *local_90 = '\0';
          iVar2 = FUN_140806a90(param_1,0,&local_88,local_48);
          if (iVar2 == 0) goto LAB_140808052;
          local_58 = FUN_140807290(param_1,local_88);
          if (local_58 == 0) {
            local_58 = FUN_140806980(param_1,local_88);
          }
        } while (local_58 != 0);
        local_b8 = 0x286;
        FUN_1407c2680(0xd,0,0x68,s_D__a_1_s_target_release_build_bo_140c05c30);
      }
    }
  }
LAB_140808052:
  if (local_78 != 0) {
    FUN_140824d80(local_78);
  }
  if (local_88 != (byte *)0x0) {
    FUN_1407cd0f0(local_88);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_70;
  }
  _snprintf(local_20,0xd,&DAT_140c05d50,(ulonglong)local_70);
  FUN_1407c27a0(2,s_line_140c05d54,local_20);
  if (local_98 != 0) {
    if (*(longlong *)(local_98 + 8) != 0) {
      FUN_1407cd0f0(*(undefined8 *)(local_98 + 8));
    }
    if (*(longlong *)(local_98 + 0x10) != 0) {
      FUN_1407cd0f0(*(undefined8 *)(local_98 + 0x10));
    }
    if (local_98 != 0) {
      FUN_1407cd0f0(local_98);
    }
  }
LAB_14080811b:
  FUN_140805d70(local_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140808140 name=FUN_140808140 */

void FUN_140808140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_128;
  local_d8 = 0;
  local_d0 = FUN_140756670(param_6);
  local_f8 = 1;
  FUN_140756990(local_c8);
  local_108 = 0;
  iVar1 = FUN_140756b30(local_c8,param_1,param_2,param_6);
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
      iVar1 = FUN_140756b30(local_c8,0,0,0);
      if ((((iVar1 == 0) || (iVar1 = FUN_140756e90(local_c8,param_3,param_4), iVar1 == 0)) ||
          (iVar1 = FUN_140756e90(local_c8,&local_f4,4), iVar1 == 0)) ||
         (iVar1 = FUN_140756ed0(local_c8,local_58,0), iVar1 == 0)) goto LAB_14080842f;
      FUN_1408084d0(param_8);
      for (local_f0 = 1; local_f0 < param_5; local_f0 = local_f0 + 1) {
        local_108 = 0;
        iVar1 = FUN_140756b30(local_c8,0,0,0);
        if (((iVar1 == 0) || (iVar1 = FUN_140756e90(local_c8,local_58), iVar1 == 0)) ||
           (iVar1 = FUN_140756ed0(local_c8), iVar1 == 0)) goto LAB_14080842f;
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
LAB_14080842f:
  FUN_140756a30(local_c8);
  FUN_140805d70(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=1408084d0 name=FUN_1408084d0 */

undefined8 FUN_1408084d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140808510 name=FUN_140808510 */

void FUN_140808510(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_94 = 0;
  local_84 = 0;
  local_90 = FUN_140782ee0(param_1);
  local_8c = FUN_140782f00(param_1);
  if (0x40 < local_90) {
    FID_conflict__assert((wchar_t *)s_n_140c05f00,(wchar_t *)s_D_140c05e20,0x4f);
  }
  if (0x10 < local_8c) {
    FID_conflict__assert((wchar_t *)s_n_140c06020,(wchar_t *)s_D_140c05f40,0x50);
  }
  if (param_4 != 0) {
    FUN_140755ee0(local_78);
    do {
      iVar1 = FUN_140756320(local_78,param_2,0);
      if (iVar1 == 0) goto LAB_140808809;
      local_80 = local_88;
      iVar1 = local_88 + 1;
      bVar2 = local_88 != 0;
      local_88 = iVar1;
      if (((((bVar2) && (iVar1 = FUN_140756450(local_78,local_58,local_94), iVar1 == 0)) ||
           (iVar1 = FUN_140756450(local_78,param_4,param_5), iVar1 == 0)) ||
          ((param_3 != 0 && (iVar1 = FUN_140756450(local_78,param_3,8), iVar1 == 0)))) ||
         (iVar1 = FUN_140756490(local_78,local_58), iVar1 == 0)) goto LAB_140808809;
      for (local_98 = 1; local_98 < param_6; local_98 = local_98 + 1) {
        iVar1 = FUN_140756320(local_78,param_2,0);
        if (((iVar1 == 0) || (iVar1 = FUN_140756450(local_78,local_58,local_94), iVar1 == 0)) ||
           (iVar1 = FUN_140756490(local_78,local_58), iVar1 == 0)) goto LAB_140808809;
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
    local_84 = FUN_140782ee0(param_1);
LAB_140808809:
    FUN_140755f50(local_78);
    FUN_1407cd290(local_58,0x40);
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140808be0 name=FUN_140808be0 */

undefined8 FUN_140808be0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1408d7440(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140808c30 name=FUN_140808c30 */

uint FUN_140808c30(uint param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f) | param_1 >> 0x20 - (param_2 & 0x1f);
}


/* address=140808c50 name=FUN_140808c50 */

void FUN_140808c50(longlong param_1)

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
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_188;
  FUN_140808be0(local_58,param_1,0x40);
  for (local_164 = 8; 0 < local_164; local_164 = local_164 + -2) {
    local_160 = 0x10;
    local_58[4] = FUN_140808c30(local_58[0] + local_58[12],7);
    local_58[4] = *(uint *)((longlong)local_58 + local_160) ^ local_58[4];
    local_158 = 0x20;
    local_58[8] = FUN_140808c30(local_58[4] + local_58[0],9);
    local_58[8] = *(uint *)((longlong)local_58 + local_158) ^ local_58[8];
    local_150 = 0x30;
    local_58[12] = FUN_140808c30(local_58[8] + local_58[4],0xd);
    local_58[12] = *(uint *)((longlong)local_58 + local_150) ^ local_58[12];
    local_148 = 0;
    local_58[0] = FUN_140808c30(local_58[12] + local_58[8],0x12);
    local_58[0] = *(uint *)((longlong)local_58 + local_148) ^ local_58[0];
    local_140 = 0x24;
    local_58[9] = FUN_140808c30(local_58[5] + local_58[1],7);
    local_58[9] = *(uint *)((longlong)local_58 + local_140) ^ local_58[9];
    local_138 = 0x34;
    local_58[13] = FUN_140808c30(local_58[9] + local_58[5],9);
    local_58[13] = *(uint *)((longlong)local_58 + local_138) ^ local_58[13];
    local_130 = 4;
    local_58[1] = FUN_140808c30(local_58[13] + local_58[9],0xd);
    local_58[1] = *(uint *)((longlong)local_58 + local_130) ^ local_58[1];
    local_128 = 0x14;
    local_58[5] = FUN_140808c30(local_58[1] + local_58[13],0x12);
    local_58[5] = *(uint *)((longlong)local_58 + local_128) ^ local_58[5];
    local_120 = 0x38;
    local_58[14] = FUN_140808c30(local_58[10] + local_58[6],7);
    local_58[14] = *(uint *)((longlong)local_58 + local_120) ^ local_58[14];
    local_118 = 8;
    local_58[2] = FUN_140808c30(local_58[14] + local_58[10],9);
    local_58[2] = *(uint *)((longlong)local_58 + local_118) ^ local_58[2];
    local_110 = 0x18;
    local_58[6] = FUN_140808c30(local_58[2] + local_58[14],0xd);
    local_58[6] = *(uint *)((longlong)local_58 + local_110) ^ local_58[6];
    local_108 = 0x28;
    local_58[10] = FUN_140808c30(local_58[6] + local_58[2],0x12);
    local_58[10] = *(uint *)((longlong)local_58 + local_108) ^ local_58[10];
    local_100 = 0xc;
    local_58[3] = FUN_140808c30(local_58[15] + local_58[11],7);
    local_58[3] = *(uint *)((longlong)local_58 + local_100) ^ local_58[3];
    local_f8 = 0x1c;
    local_58[7] = FUN_140808c30(local_58[3] + local_58[15],9);
    local_58[7] = *(uint *)((longlong)local_58 + local_f8) ^ local_58[7];
    local_f0 = 0x2c;
    local_58[11] = FUN_140808c30(local_58[7] + local_58[3],0xd);
    local_58[11] = *(uint *)((longlong)local_58 + local_f0) ^ local_58[11];
    local_e8 = 0x3c;
    local_58[15] = FUN_140808c30(local_58[11] + local_58[7],0x12);
    local_58[15] = *(uint *)((longlong)local_58 + local_e8) ^ local_58[15];
    local_e0 = 4;
    local_58[1] = FUN_140808c30(local_58[0] + local_58[3],7);
    local_58[1] = *(uint *)((longlong)local_58 + local_e0) ^ local_58[1];
    local_d8 = 8;
    local_58[2] = FUN_140808c30(local_58[1] + local_58[0],9);
    local_58[2] = *(uint *)((longlong)local_58 + local_d8) ^ local_58[2];
    local_d0 = 0xc;
    local_58[3] = FUN_140808c30(local_58[2] + local_58[1],0xd);
    local_58[3] = *(uint *)((longlong)local_58 + local_d0) ^ local_58[3];
    local_c8 = 0;
    local_58[0] = FUN_140808c30(local_58[3] + local_58[2],0x12);
    local_58[0] = *(uint *)((longlong)local_58 + local_c8) ^ local_58[0];
    local_c0 = 0x18;
    local_58[6] = FUN_140808c30(local_58[5] + local_58[4],7);
    local_58[6] = *(uint *)((longlong)local_58 + local_c0) ^ local_58[6];
    local_b8 = 0x1c;
    local_58[7] = FUN_140808c30(local_58[6] + local_58[5],9);
    local_58[7] = *(uint *)((longlong)local_58 + local_b8) ^ local_58[7];
    local_b0 = 0x10;
    local_58[4] = FUN_140808c30(local_58[7] + local_58[6],0xd);
    local_58[4] = *(uint *)((longlong)local_58 + local_b0) ^ local_58[4];
    local_a8 = 0x14;
    local_58[5] = FUN_140808c30(local_58[4] + local_58[7],0x12);
    local_58[5] = *(uint *)((longlong)local_58 + local_a8) ^ local_58[5];
    local_a0 = 0x2c;
    local_58[11] = FUN_140808c30(local_58[10] + local_58[9],7);
    local_58[11] = *(uint *)((longlong)local_58 + local_a0) ^ local_58[11];
    local_98 = 0x20;
    local_58[8] = FUN_140808c30(local_58[11] + local_58[10],9);
    local_58[8] = *(uint *)((longlong)local_58 + local_98) ^ local_58[8];
    local_90 = 0x24;
    local_58[9] = FUN_140808c30(local_58[8] + local_58[11],0xd);
    local_58[9] = *(uint *)((longlong)local_58 + local_90) ^ local_58[9];
    local_88 = 0x28;
    local_58[10] = FUN_140808c30(local_58[9] + local_58[8],0x12);
    local_58[10] = *(uint *)((longlong)local_58 + local_88) ^ local_58[10];
    local_80 = 0x30;
    local_58[12] = FUN_140808c30(local_58[15] + local_58[14],7);
    local_58[12] = *(uint *)((longlong)local_58 + local_80) ^ local_58[12];
    local_78 = 0x34;
    local_58[13] = FUN_140808c30(local_58[12] + local_58[15],9);
    local_58[13] = *(uint *)((longlong)local_58 + local_78) ^ local_58[13];
    local_70 = 0x38;
    local_58[14] = FUN_140808c30(local_58[13] + local_58[12],0xd);
    local_58[14] = *(uint *)((longlong)local_58 + local_70) ^ local_58[14];
    local_68 = 0x3c;
    uVar1 = FUN_140808c30(local_58[14] + local_58[13],0x12);
    local_58[15] = *(uint *)((longlong)local_58 + local_68) ^ uVar1;
  }
  for (local_168 = 0; local_168 < 0x10; local_168 = local_168 + 1) {
    *(uint *)(param_1 + (longlong)local_168 * 4) =
         *(int *)(param_1 + (longlong)local_168 * 4) + local_58[local_168];
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_188);
  return;
}


/* address=1408098a0 name=FUN_1408098a0 */

void FUN_1408098a0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    *(uint *)(param_1 + local_18 * 4) =
         *(uint *)(param_2 + local_18 * 4) ^ *(uint *)(param_3 + local_18 * 4);
  }
  return;
}


/* address=140809910 name=FUN_140809910 */

void FUN_140809910(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_88 [32];
  ulonglong local_68;
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_140c05940 ^ (ulonglong)auStack_88;
  if (param_1 == param_2) {
    FID_conflict__assert((wchar_t *)s_o_140c06120,(wchar_t *)s_D_140c06060,0x5c);
  }
  FUN_140808be0(local_58,param_2 + (param_3 * 2 + -1) * 0x40,0x40);
  for (local_68 = 0; local_68 < (ulonglong)(param_3 << 1); local_68 = local_68 + 1) {
    FUN_1408098a0(local_58,local_58,param_2 + local_68 * 0x40);
    FUN_140808c50(local_58);
    FUN_140808be0(param_1 + (local_68 / 2 + (local_68 & 1) * param_3) * 0x40,local_58,0x40);
  }
  FUN_140805d70(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=140809a60 name=FUN_140809a60 */

void FUN_140809a60(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  FUN_140808be0(param_5,param_1,param_2 << 7);
  for (local_28 = 1; local_28 < param_3; local_28 = local_28 + 1) {
    FUN_140809910(param_5 + param_2 * 2 * local_28 * 0x40,
                  param_5 + param_2 * 2 * (local_28 - 1) * 0x40,param_2);
  }
  FUN_140809910(param_1,param_5 + param_2 * 2 * (param_3 - 1) * 0x40,param_2);
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    uVar1 = *(uint *)(param_1 + (param_2 * 2 + -1) * 0x40);
    for (local_30 = 0; local_30 < (ulonglong)(param_2 << 1); local_30 = local_30 + 1) {
      FUN_1408098a0(param_4 + local_30 * 0x40,param_1 + local_30 * 0x40,
                    param_5 + (param_2 * 2 * (ulonglong)(uVar1 & (int)param_3 - 1U) + local_30) *
                              0x40);
    }
    FUN_140809910(param_1,param_4,param_2);
  }
  return;
}


/* address=140809c60 name=FUN_140809c60 */

undefined * FUN_140809c60(void)

{
  return &DAT_1409da340;
}


/* address=140809c70 name=FUN_140809c70 */

longlong FUN_140809c70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_1408bfde0(param_1,param_2);
  if (lVar1 == 0) {
    FUN_1407c2680(2,0,0,s_D__a_1_s_target_release_build_bo_140c062b0,CONCAT44(uVar4,0x62));
    FUN_1407c27a0(5,s_fopen___140c06318,param_1,&DAT_140c06314,param_2,&DAT_140c06310);
    uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
    piVar2 = (int *)FUN_1408bb398();
    if (*piVar2 == 2) {
      FUN_1407c2680(0x11,0,0x6e,s_D__a_1_s_target_release_build_bo_140c06320,CONCAT44(uVar4,0x66));
    }
    else {
      FUN_1407c2680(0x11,0,0x70,s_D__a_1_s_target_release_build_bo_140c06380,CONCAT44(uVar4,0x68));
    }
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_140809d80(lVar1,1);
    if (lVar3 == 0) {
      FUN_1408bf6f0(lVar1);
      lVar3 = 0;
    }
  }
  return lVar3;
}


/* address=140809d80 name=FUN_140809d80 */

longlong FUN_140809d80(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140809c60();
  lVar2 = FUN_1407bffe0(uVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_140809e00(lVar2,param_1,param_2);
  }
  return lVar2;
}


/* address=140809e00 name=FUN_140809e00 */

void FUN_140809e00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1407c0580(param_1,0x6a,param_3,param_2);
  return;
}


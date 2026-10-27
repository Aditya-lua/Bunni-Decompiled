/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=18053c100 name=FUN_18053c100 */

void FUN_18053c100(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar15 = *param_1;
  uVar16 = param_1[1];
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  uVar7 = FUN_18053bbe0(uVar15);
  uVar7 = FUN_180539cf0(uVar15,uVar7);
  uVar8 = FUN_18053bbe0(uVar16);
  uVar8 = FUN_180539cf0(uVar16,uVar8);
  uVar9 = FUN_18053bbe0(uVar1);
  uVar9 = FUN_180539cf0(uVar1,uVar9);
  uVar10 = FUN_18053bbe0(uVar2);
  uVar10 = FUN_180539cf0(uVar2,uVar10);
  uVar11 = FUN_18053bbe0(uVar3);
  uVar11 = FUN_180539cf0(uVar3,uVar11);
  uVar12 = FUN_18053bbe0(uVar4);
  uVar12 = FUN_180539cf0(uVar4,uVar12);
  uVar13 = FUN_18053bbe0(uVar5);
  uVar13 = FUN_180539cf0(uVar5,uVar13);
  uVar14 = FUN_18053bbe0(uVar6);
  uVar14 = FUN_180539cf0(uVar6,uVar14);
  uVar15 = FUN_180539cf0(uVar15,uVar13);
  *param_1 = uVar15;
  uVar15 = FUN_180539cf0(uVar13,uVar14);
  uVar15 = FUN_180539cf0(uVar16,uVar15);
  param_1[1] = uVar15;
  uVar15 = FUN_180539cf0(uVar7,uVar14);
  uVar15 = FUN_180539cf0(uVar1,uVar15);
  param_1[2] = uVar15;
  uVar15 = FUN_180539cf0(uVar8,uVar13);
  uVar15 = FUN_180539cf0(uVar2,uVar15);
  param_1[3] = uVar15;
  uVar15 = FUN_180539cf0(uVar13,uVar14);
  uVar16 = FUN_180539cf0(uVar3,uVar9);
  uVar15 = FUN_180539cf0(uVar16,uVar15);
  param_1[4] = uVar15;
  uVar15 = FUN_180539cf0(uVar10,uVar14);
  uVar15 = FUN_180539cf0(uVar4,uVar15);
  param_1[5] = uVar15;
  uVar15 = FUN_180539cf0(uVar5,uVar11);
  param_1[6] = uVar15;
  uVar15 = FUN_180539cf0(uVar6,uVar12);
  param_1[7] = uVar15;
  FUN_18053bc20(param_1);
  return;
}


/* address=18053c470 name=FUN_18053c470 */

void FUN_18053c470(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong local_18;
  
  FUN_18053a630(param_3,param_1);
  for (local_18 = 1; local_18 < param_2; local_18 = local_18 + 1) {
    FUN_18053a6a0(param_3);
    FUN_18053b820(param_3);
    FUN_18053bc20(param_3);
    FUN_18053a630(param_3,param_1 + local_18 * 0x40);
  }
  FUN_18053a6a0(param_3);
  FUN_18053b820(param_3);
  FUN_18053a630(param_3,param_1 + param_2 * 0x40);
  return;
}


/* address=18053c550 name=FUN_18053c550 */

void FUN_18053c550(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong local_18;
  
  FUN_18053a630(param_3,param_1 + param_2 * 0x40);
  FUN_18053b9e0(param_3);
  FUN_18053b7e0(param_3);
  for (local_18 = param_2 + -1; local_18 != 0; local_18 = local_18 + -1) {
    FUN_18053a630(param_3,param_1 + local_18 * 0x40);
    FUN_18053c100(param_3);
    FUN_18053b9e0(param_3);
    FUN_18053b7e0(param_3);
  }
  FUN_18053a630(param_3,param_1);
  return;
}


/* address=18053c630 name=FUN_18053c630 */

void FUN_18053c630(longlong param_1,longlong param_2)

{
  ulonglong local_28;
  ulonglong local_20;
  undefined local_18 [24];
  
  for (local_28 = 0; local_28 <= *(uint *)(param_2 + 0xf0); local_28 = local_28 + 1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      FUN_180691e40(local_18,param_2 + local_28 * 0x10,0x10);
      FUN_180539da0(param_1 + local_28 * 0x40,local_18,local_20);
    }
    FUN_18053a280(param_1 + local_28 * 0x40);
  }
  return;
}


/* address=18053c710 name=FUN_18053c710 */

byte FUN_18053c710(byte param_1,longlong param_2)

{
  return (byte)((int)(uint)param_1 >> ((byte)(param_2 << 2) & 0x1f)) & 0xf;
}


/* address=18053c740 name=FUN_18053c740 */

void FUN_18053c740(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_78 [32];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_78;
  FUN_1806924e0(local_58,0,0x40);
  FUN_180539da0(local_58,param_2,0);
  FUN_18053a280(local_58);
  FUN_18053a6a0(local_58);
  FUN_18053a280(local_58);
  FUN_180539e30(local_58,param_1,0);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=18053c7d0 name=FUN_18053c7d0 */

void FUN_18053c7d0(longlong param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 local_28 [5];
  
  *(undefined4 *)(param_1 + 0xf0) = 10;
  FUN_18053a030(local_28,param_2);
  FUN_180691e40(param_1,local_28,0x10);
  for (local_38 = 1; local_38 < 0xb; local_38 = local_38 + 1) {
    FUN_18053c740(local_28 + 2,local_28);
    uVar1 = (&UNK_18074cfff)[local_38];
    for (local_40 = 0; local_40 < 2; local_40 = local_40 + 1) {
      uVar2 = FUN_18053c710(uVar1,local_40);
      uVar2 = FUN_180539cf0(local_28[local_40],uVar2);
      local_28[local_40] = uVar2;
      uVar2 = FUN_18053bba0(local_28[local_40 + 2]);
      uVar2 = FUN_180539d70(uVar2,0xc);
      uVar2 = FUN_180539cf0(local_28[local_40],uVar2);
      local_28[local_40] = uVar2;
      uVar2 = local_28[local_40];
      uVar3 = FUN_180539d40(uVar2,4);
      uVar3 = FUN_180539cf0(local_28[local_40],uVar3);
      local_28[local_40] = uVar3;
      uVar3 = FUN_180539d40(uVar2,8);
      uVar3 = FUN_180539cf0(local_28[local_40],uVar3);
      local_28[local_40] = uVar3;
      uVar2 = FUN_180539d40(uVar2,0xc);
      uVar2 = FUN_180539cf0(local_28[local_40],uVar2);
      local_28[local_40] = uVar2;
    }
    FUN_180691e40(param_1 + local_38 * 0x10,local_28,0x10);
  }
  return;
}


/* address=18053c9b0 name=FUN_18053c9b0 */

void FUN_18053c9b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined auStack_b8 [32];
  undefined local_98;
  ulonglong local_90;
  undefined *local_88;
  undefined *local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50 [2];
  undefined local_40 [16];
  undefined local_30 [16];
  undefined local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0xf0) = 0xc;
  local_80 = local_40;
  local_88 = local_30;
  FUN_18053a030(local_80,param_2);
  FUN_180691e40(param_1,local_80,0x10);
  puVar3 = local_20;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_180691e40(local_20,param_2 + 0x10,8);
  FUN_18053a030(local_88,local_20);
  for (local_70 = 0; local_70 < 4; local_70 = local_70 + 1) {
    FUN_18053c740(local_50,local_88);
    local_98 = (&DAT_18074d000)[local_70 * 2];
    for (local_78 = 0; local_78 < 2; local_78 = local_78 + 1) {
      uVar1 = FUN_18053c710(local_98,local_78);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      uVar1 = FUN_180539d40(uVar1,8);
      uVar1 = FUN_180539cc0(*(undefined8 *)(local_88 + local_78 * 8),uVar1);
      *(undefined8 *)(local_88 + local_78 * 8) = uVar1;
      uVar1 = FUN_18053bba0(local_50[local_78]);
      uVar1 = FUN_180539d40(uVar1,4);
      uVar1 = FUN_180539c90(uVar1,0xffff00000000);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_88 + local_78 * 8),uVar1);
      *(undefined8 *)(local_88 + local_78 * 8) = uVar1;
      uVar1 = FUN_180539d40(*(undefined8 *)(local_88 + local_78 * 8),4);
      uVar1 = FUN_180539c90(uVar1,0xffff000000000000);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_88 + local_78 * 8),uVar1);
      *(undefined8 *)(local_88 + local_78 * 8) = uVar1;
      uVar1 = FUN_180539d70(*(undefined8 *)(local_80 + local_78 * 8),8);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
      uVar1 = FUN_180539d40(*(undefined8 *)(local_88 + local_78 * 8),8);
      uVar1 = FUN_180539cc0(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
      uVar1 = FUN_180539d70(*(undefined8 *)(local_88 + local_78 * 8),0xc);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
      local_68 = *(undefined8 *)(local_80 + local_78 * 8);
      uVar1 = FUN_180539d40(local_68,4);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
      uVar1 = FUN_180539d40(local_68,8);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
      uVar1 = FUN_180539d40(local_68,0xc);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_80 + local_78 * 8),uVar1);
      *(undefined8 *)(local_80 + local_78 * 8) = uVar1;
    }
    FUN_180691e40(param_1 + (local_70 * 0xc + 4) * 4,local_88,0x10);
    FUN_180691e40(param_1 + (local_70 * 0xc + 8) * 4,local_80,0x10);
    FUN_18053c740(local_50,local_80);
    local_98 = (&DAT_18074d001)[local_70 * 2];
    for (local_90 = 0; local_90 < 2; local_90 = local_90 + 1) {
      uVar1 = FUN_180539d70(*(undefined8 *)(local_88 + local_90 * 8),8);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_180539d40(*(undefined8 *)(local_80 + local_90 * 8),8);
      uVar1 = FUN_180539cc0(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_18053c710(local_98,local_90);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_18053bba0(local_50[local_90]);
      uVar1 = FUN_180539d70(uVar1,0xc);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      local_60 = *(undefined8 *)(local_88 + local_90 * 8);
      uVar1 = FUN_180539d40(local_60,4);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_180539d40(local_60,8);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_180539d40(local_60,0xc);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_88 + local_90 * 8),uVar1);
      *(undefined8 *)(local_88 + local_90 * 8) = uVar1;
      uVar1 = FUN_180539d70(*(undefined8 *)(local_80 + local_90 * 8),8);
      *(undefined8 *)(local_80 + local_90 * 8) = uVar1;
      uVar1 = FUN_180539d70(*(undefined8 *)(local_88 + local_90 * 8),0xc);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_80 + local_90 * 8),uVar1);
      *(undefined8 *)(local_80 + local_90 * 8) = uVar1;
      uVar1 = FUN_180539d40(*(undefined8 *)(local_80 + local_90 * 8),4);
      uVar1 = FUN_180539cf0(*(undefined8 *)(local_80 + local_90 * 8),uVar1);
      *(undefined8 *)(local_80 + local_90 * 8) = uVar1;
      uVar1 = FUN_180539c90(*(undefined8 *)(local_80 + local_90 * 8),0xffffffff);
      *(undefined8 *)(local_80 + local_90 * 8) = uVar1;
    }
    FUN_180691e40(param_1 + (local_70 * 0xc + 0xc) * 4,local_88,0x10);
    local_58 = local_80;
    puVar3 = local_88;
    local_88 = local_80;
    local_80 = puVar3;
  }
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_b8);
  return;
}


/* address=18053d080 name=FUN_18053d080 */

void FUN_18053d080(longlong param_1,longlong param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  ulonglong local_68;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48 [4];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  *(undefined4 *)(param_1 + 0xf0) = 0xe;
  FUN_18053a030(local_48,param_2);
  FUN_180691e40(param_1,local_48,0x10);
  FUN_18053a030(local_48 + 2,param_2 + 0x10);
  FUN_180691e40(param_1 + 0x10,local_48 + 2,0x10);
  local_50 = 2;
  while( true ) {
    if (0xe < local_50) {
      return;
    }
    FUN_18053c740(local_18);
    uVar1 = (&UNK_18074cfff)[local_50 / 2];
    for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
      uVar2 = FUN_18053c710(uVar1,local_68);
      uVar2 = FUN_180539cf0(local_48[local_68],uVar2);
      local_48[local_68] = uVar2;
      uVar2 = FUN_18053bba0(local_18[local_68]);
      uVar2 = FUN_180539d70(uVar2,0xc);
      uVar2 = FUN_180539cf0(local_48[local_68],uVar2);
      local_48[local_68] = uVar2;
      local_28 = local_48[local_68];
      uVar2 = FUN_180539d40(local_28,4);
      uVar2 = FUN_180539cf0(local_48[local_68],uVar2);
      local_48[local_68] = uVar2;
      uVar2 = FUN_180539d40(local_28,8);
      uVar2 = FUN_180539cf0(local_48[local_68],uVar2);
      local_48[local_68] = uVar2;
      uVar2 = FUN_180539d40(local_28,0xc);
      uVar2 = FUN_180539cf0(local_48[local_68],uVar2);
      local_48[local_68] = uVar2;
    }
    FUN_180691e40(param_1 + local_50 * 0x10,local_48,0x10);
    if (local_50 == 0xe) break;
    FUN_18053c740(local_18,local_48);
    for (local_58 = 0; local_58 < 2; local_58 = local_58 + 1) {
      uVar2 = FUN_180539d70(local_18[local_58],0xc);
      uVar2 = FUN_180539cf0(local_48[local_58 + 2],uVar2);
      local_48[local_58 + 2] = uVar2;
      local_20 = local_48[local_58 + 2];
      uVar2 = FUN_180539d40(local_20,4);
      uVar2 = FUN_180539cf0(local_48[local_58 + 2],uVar2);
      local_48[local_58 + 2] = uVar2;
      uVar2 = FUN_180539d40(local_20,8);
      uVar2 = FUN_180539cf0(local_48[local_58 + 2],uVar2);
      local_48[local_58 + 2] = uVar2;
      uVar2 = FUN_180539d40(local_20,0xc);
      uVar2 = FUN_180539cf0(local_48[local_58 + 2],uVar2);
      local_48[local_58 + 2] = uVar2;
    }
    FUN_180691e40(param_1 + (local_50 * 4 + 4) * 4,local_48 + 2,0x10);
    local_50 = local_50 + 2;
  }
  return;
}


/* address=18053d3f0 name=FUN_18053d3f0 */

void FUN_18053d3f0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong local_28;
  undefined8 local_20;
  undefined8 local_18 [3];
  
  for (local_28 = 0; local_28 < 0x10; local_28 = local_28 + 8) {
    FUN_180691e40(&local_20,param_2 + local_28,8);
    FUN_180691e40(local_18,param_3 + local_28,8);
    local_20 = FUN_180539cf0(local_20,local_18[0]);
    FUN_180691e40(param_1 + local_28,&local_20,8);
  }
  return;
}


/* address=18053d4e0 name=FUN_18053d4e0 */

void FUN_18053d4e0(void)

{
  return;
}


/* address=18053d4f0 name=FUN_18053d4f0 */

void FUN_18053d4f0(void)

{
  return;
}


/* address=18053d500 name=FUN_18053d500 */

void FUN_18053d500(void)

{
  return;
}


/* address=18053d510 name=FUN_18053d510 */

void FUN_18053d510(void)

{
  return;
}


/* address=18053d520 name=FUN_18053d520 */

void FUN_18053d520(void)

{
  return;
}


/* address=18053d530 name=FUN_18053d530 */

void FUN_18053d530(void)

{
  return;
}


/* address=18053d540 name=FUN_18053d540 */

void FUN_18053d540(void)

{
  return;
}


/* address=18053d550 name=FUN_18053d550 */

void FUN_18053d550(void)

{
  return;
}


/* address=18053d560 name=FUN_18053d560 */

void FUN_18053d560(void)

{
  return;
}


/* address=18053d570 name=FUN_18053d570 */

void FUN_18053d570(void)

{
  return;
}


/* address=18053d580 name=FUN_18053d580 */

void FUN_18053d580(void)

{
  return;
}


/* address=18053d590 name=FUN_18053d590 */

void FUN_18053d590(void)

{
  return;
}


/* address=18053d5a0 name=FUN_18053d5a0 */

void FUN_18053d5a0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_58;
  if (((param_5 < 0x80000000) && (0x17 < param_5)) && (param_5 % 8 == 0)) {
    FUN_180533ab0(local_20,param_4,8);
    FUN_180533b00(param_2,param_4 + 8,param_5 - 8);
    local_28 = param_5 / 8 - 1;
    local_38 = DAT_180727228;
    while (local_38 = local_38 - 1, local_38 < DAT_180727228) {
      for (local_30 = local_28; local_30 != 0; local_30 = local_30 + -1) {
        local_34 = (int)local_28 * local_38 + (int)local_30;
        bStack_19 = bStack_19 ^ (byte)local_34;
        bStack_1a = bStack_1a ^ (byte)((uint)local_34 >> 8);
        bStack_1b = bStack_1b ^ (byte)((uint)local_34 >> 0x10);
        bStack_1c = bStack_1c ^ (byte)((uint)local_34 >> 0x18);
        FUN_180533ab0(local_18,param_2 + -8 + local_30 * 8,8);
        FUN_180534330(local_20,local_20,param_1);
        FUN_180533ab0(param_2 + -8 + local_30 * 8,local_18,8);
      }
    }
    FUN_180691e40(param_3,local_20,8);
  }
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=18053d800 name=FUN_18053d800 */

longlong FUN_18053d800(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18058f4e0(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_180533b50(lVar1,0,0x18);
    *(undefined4 *)(lVar1 + 0x14) = 1;
  }
  return lVar1;
}


/* address=18053d850 name=FUN_18053d850 */

void FUN_18053d850(undefined8 param_1)

{
  FUN_180533b50(param_1,0,0x18);
  return;
}


/* address=18053d880 name=FUN_18053d880 */

void FUN_18053d880(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
      FUN_18058f610(*param_1);
    }
    if ((*(uint *)((longlong)param_1 + 0x14) & 1) == 0) {
      *param_1 = 0;
    }
    else {
      FUN_18058f610(param_1);
    }
  }
  return;
}


/* address=18053d8f0 name=FUN_18053d8f0 */

void FUN_18053d8f0(undefined8 param_1)

{
  FUN_18053d880(param_1);
  return;
}


/* address=18053d910 name=FUN_18053d910 */

longlong FUN_18053d910(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18053d800();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar2 = FUN_18053d970(lVar1,param_1);
      if (lVar2 == 0) {
        FUN_18053d880(lVar1);
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}


/* address=18053d970 name=FUN_18053d970 */

undefined8 * FUN_18053d970(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (param_2 != param_1) {
    iVar1 = FUN_180545950(param_1,(longlong)*(int *)(param_2 + 1));
    if (iVar1 == 0) {
      param_1 = (undefined8 *)0x0;
    }
    else {
      FUN_180533ab0(*param_1,*param_2,(longlong)*(int *)(param_2 + 1) << 3);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    }
  }
  return param_1;
}


/* address=18053da70 name=FUN_18053da70 */

void FUN_18053da70(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1805564d0();
  FUN_18059e1b0(uVar1,&LAB_180556530);
  FUN_1805564c0();
  return;
}


/* address=18053daa0 name=FUN_18053daa0 */

int FUN_18053daa0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1805458c0(param_1);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_1805455e0(*(undefined8 *)(*param_1 + (longlong)(iVar1 + -1) * 8));
    iVar2 = (iVar1 + -1) * 0x40 + iVar2;
  }
  return iVar2;
}


/* address=18053db00 name=FUN_18053db00 */

ulonglong FUN_18053db00(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_18053daa0(param_1);
  return (ulonglong)(iVar1 + 7) / 8;
}


/* address=18053db30 name=FUN_18053db30 */

void FUN_18053db30(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* address=18053db60 name=FUN_18053db60 */

void FUN_18053db60(undefined8 param_1)

{
  FUN_18053db90(param_1,1);
  return;
}


/* address=18053db90 name=FUN_18053db90 */

undefined8 FUN_18053db90(longlong **param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_18053db30(param_1);
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_180545950(param_1,1);
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


/* address=18053dc40 name=FUN_18053dc40 */

void FUN_18053dc40(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = FUN_18053fc40(param_1), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* address=18053dc90 name=FUN_18053dc90 */

bool FUN_18053dc90(longlong param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}


/* address=18053dcd0 name=FUN_18053dcd0 */

undefined8 * FUN_18053dcd0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *local_res18;
  undefined8 *local_18;
  undefined4 local_10;
  
  local_18 = (undefined8 *)0x0;
  local_res18 = param_3;
  if ((param_3 == (undefined8 *)0x0) &&
     (local_res18 = (undefined8 *)FUN_18053d800(), local_18 = local_res18,
     local_res18 == (undefined8 *)0x0)) {
    local_res18 = (undefined8 *)0x0;
  }
  else if (param_2 == 0) {
    *(undefined4 *)(local_res18 + 1) = 0;
  }
  else {
    uVar2 = (param_2 - 1U) / 8 + 1;
    iVar1 = FUN_180545950(local_res18,uVar2);
    if (iVar1 == 0) {
      FUN_18053d880(local_18);
      local_res18 = (undefined8 *)0x0;
    }
    else {
      if (0x7fffffff < uVar2) {
        FID_conflict__assert
                  (u_num_words_<__INT_MAX_180941c50,u_D__a_1_s_target_x86_64_pc_window_180941b50,
                   0x6f);
      }
      local_10 = (undefined4)uVar2;
      *(undefined4 *)(local_res18 + 1) = local_10;
      *(undefined4 *)(local_res18 + 2) = 0;
      FUN_180556260(*local_res18,(longlong)*(int *)(local_res18 + 1),param_1,param_2);
    }
  }
  return local_res18;
}


/* address=18053ddf0 name=FUN_18053ddf0 */

undefined4 FUN_18053ddf0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18053db00(param_1);
  FUN_1805563c0(param_2,uVar1,*param_1,(longlong)*(int *)(param_1 + 1));
  return uVar1;
}


/* address=18053e010 name=FUN_18053e010 */

bool FUN_18053e010(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_180556550(*param_3,(longlong)*(int *)(param_3 + 1),param_2);
  if (iVar1 != 0) {
    FUN_1805563c0(param_1,param_2,*param_3,(longlong)*(int *)(param_3 + 1));
  }
  return iVar1 != 0;
}


/* address=18053e0e0 name=FUN_18053e0e0 */

undefined8 FUN_18053e0e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1805458c0(param_1);
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


/* address=18053e150 name=FUN_18053e150 */

undefined8 * FUN_18053e150(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18058f4e0(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    FUN_180556820(puVar1 + 1);
    puVar1[4] = 0;
    *(undefined *)(puVar1 + 5) = 0;
    *(undefined *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}


/* address=18053e1c0 name=FUN_18053e1c0 */

void FUN_18053e1c0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((param_1[4] != 0) && (*(char *)(param_1 + 5) == '\0')) {
      FID_conflict__assert
                (u_ctx_>used____0____ctx_>error_180941ff0,
                 u_D__a_1_s_target_x86_64_pc_window_180941ef0,0x83);
    }
    FUN_180556ab0(*param_1,FUN_18053d880);
    FUN_180556860(param_1 + 1);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=18053e250 name=FUN_18053e250 */

void FUN_18053e250(longlong param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (iVar1 = FUN_180556890(param_1 + 8,*(undefined8 *)(param_1 + 0x20)), iVar1 == 0)) {
    *(undefined *)(param_1 + 0x28) = 1;
    *(undefined *)(param_1 + 0x29) = 1;
  }
  return;
}


/* address=18053e2b0 name=FUN_18053e2b0 */

undefined8 FUN_18053e2b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(char *)((longlong)param_1 + 0x29) != '\0') {
      FUN_18050f6f0(3,0,0x74,s_D__a_1_s_target_x86_64_pc_window_180942030,0x9b);
      *(undefined *)((longlong)param_1 + 0x29) = 0;
    }
    return 0;
  }
  if (*param_1 == 0) {
    lVar1 = FUN_180556a40();
    *param_1 = lVar1;
    if (*param_1 == 0) {
      *(undefined *)(param_1 + 5) = 1;
      return 0;
    }
  }
  lVar1 = FUN_180556a60(*param_1);
  if ((param_1[4] == lVar1) &&
     ((lVar1 = FUN_18053d800(), lVar1 == 0 || (lVar2 = FUN_180556ae0(*param_1,lVar1), lVar2 == 0))))
  {
    FUN_18050f6f0(3,0,0x74,s_D__a_1_s_target_x86_64_pc_window_1809420b0,0xac);
    FUN_18053d880(lVar1);
    *(undefined *)(param_1 + 5) = 1;
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_180556a80(*param_1,param_1[4]);
    FUN_18053db30(uVar3);
    param_1[4] = param_1[4] + 1;
  }
  return uVar3;
}


/* address=18053e400 name=FUN_18053e400 */

void FUN_18053e400(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = FUN_1805569a0(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return;
}


/* address=18053e440 name=FUN_18053e440 */

undefined4 FUN_18053e440(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res10;
  longlong local_res18;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == *(int *)(param_3 + 0x10)) {
    uVar2 = FUN_18053e540(param_1,param_2,param_3);
    *(int *)(param_1 + 0x10) = iVar1;
  }
  else {
    local_res10 = param_2;
    local_res18 = param_3;
    if (iVar1 != 0) {
      local_res10 = param_3;
      local_res18 = param_2;
    }
    iVar1 = FUN_18053f9a0(local_res10,local_res18);
    if (iVar1 < 0) {
      iVar1 = FUN_18053e870(param_1,local_res18,local_res10);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      iVar1 = FUN_18053e870(param_1,local_res10,local_res18);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=18053e540 name=FUN_18053e540 */

bool FUN_18053e540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_180553560(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_180545910(param_1);
  }
  return iVar1 != 0;
}


/* address=18053e590 name=FUN_18053e590 */

ulonglong FUN_18053e590(longlong *param_1,ulonglong param_2)

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
    iVar1 = FUN_18053fc40(param_1);
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
          iVar1 = FUN_180545950(param_1,(longlong)(*(int *)(param_1 + 1) + 1));
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
        uVar2 = FUN_18053e8c0(param_1,param_2);
        iVar1 = FUN_18053fc40(param_1);
        if (iVar1 == 0) {
          local_24 = (uint)(*(int *)(param_1 + 2) == 0);
          *(uint *)(param_1 + 2) = local_24;
        }
        uVar3 = (ulonglong)uVar2;
      }
    }
    else {
      uVar3 = FUN_18053db90(param_1,param_2);
    }
  }
  return uVar3;
}


/* address=18053e730 name=FUN_18053e730 */

undefined8 FUN_18053e730(longlong param_1,longlong param_2,longlong param_3)

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
    iVar1 = FUN_18053e540(param_1,local_res10,local_res18);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(uint *)(param_1 + 0x10) = local_14;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_18053f9a0(local_res10,local_res18);
    if (iVar1 < 0) {
      iVar1 = FUN_18053e870(param_1,local_res18,local_res10);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      iVar1 = FUN_18053e870(param_1,local_res10,local_res18);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=18053e870 name=FUN_18053e870 */

bool FUN_18053e870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1805536d0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_180545910(param_1);
  }
  return iVar1 != 0;
}


/* address=18053e8c0 name=FUN_18053e8c0 */

int FUN_18053e8c0(ulonglong **param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong local_res10;
  int local_18;
  
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_18053fc40(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 2) == 0) {
        iVar1 = FUN_1805458c0(param_1);
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
        iVar1 = FUN_18053e590(param_1,param_2);
        *(undefined4 *)(param_1 + 2) = 1;
      }
    }
    else {
      iVar1 = FUN_18053db90(param_1,param_2);
      if (iVar1 != 0) {
        FUN_18053dc40(param_1,1);
      }
    }
  }
  return iVar1;
}


/* address=18053eab0 name=FUN_18053eab0 */

bool FUN_18053eab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_18055ac80(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_180545910(param_1);
  }
  return iVar1 != 0;
}


/* address=18053eb10 name=FUN_18053eb10 */

undefined8 FUN_18053eb10(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 1) != 0) {
    if (param_2 == 0) {
      FUN_18053db30(param_1);
    }
    else {
      lVar2 = FUN_180546620(*param_1,*param_1,(longlong)*(int *)(param_1 + 1),param_2);
      if (lVar2 != 0) {
        iVar1 = FUN_180545950(param_1,(longlong)(*(int *)(param_1 + 1) + 1));
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


/* address=18053ebe0 name=FUN_18053ebe0 */

bool FUN_18053ebe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_180553a90(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_180545910(param_1);
  }
  return iVar1 != 0;
}


/* address=18053ec30 name=FUN_18053ec30 */

undefined8
FUN_18053ec30(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
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
  local_90 = FUN_1805458c0(param_3);
  local_8c = FUN_1805458c0(param_4);
  if (((0 < local_90) && (*(longlong *)(*param_3 + (longlong)(local_90 + -1) * 8) == 0)) ||
     ((0 < local_8c && (*(longlong *)(*param_4 + (longlong)(local_8c + -1) * 8) == 0)))) {
    FUN_18050f6f0(3,0,0x6f,s_D__a_1_s_target_x86_64_pc_window_1809423b0,CONCAT44(uVar12,0xd4));
    return 0;
  }
  iVar4 = FUN_18053fc40(param_4);
  if (iVar4 != 0) {
    FUN_18050f6f0(3,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180942430,CONCAT44(uVar12,0xd9));
    return 0;
  }
  FUN_18053e250(param_5);
  local_60 = (longlong *)FUN_18053e2b0(param_5);
  plVar7 = (longlong *)FUN_18053e2b0(param_5);
  plVar8 = (longlong *)FUN_18053e2b0(param_5);
  local_c0 = param_1;
  if (param_1 == (longlong *)0x0) {
    local_c0 = (longlong *)FUN_18053e2b0(param_5);
  }
  if ((plVar8 != (longlong *)0x0) && (local_c0 != (longlong *)0x0)) {
    uVar9 = FUN_18053daa0(param_4);
    iVar4 = -(int)((uVar9 & 0xffffffff) % 0x40);
    iVar5 = FUN_18053fe30(plVar8,param_4,iVar4 + 0x40);
    if (iVar5 != 0) {
      FUN_180545910(plVar8);
      *(undefined4 *)(plVar8 + 2) = 0;
      iVar4 = iVar4 + 0x80;
      iVar5 = FUN_18053fe30(plVar7,param_3,iVar4);
      if (iVar5 != 0) {
        FUN_180545910(plVar7);
        *(undefined4 *)(plVar7 + 2) = 0;
        if (*(int *)(plVar8 + 1) + 1 < *(int *)(plVar7 + 1)) {
          iVar5 = FUN_180545950(plVar7,(longlong)(*(int *)(plVar7 + 1) + 1));
          if (iVar5 == 0) goto LAB_18053f40c;
          *(undefined8 *)(*plVar7 + (longlong)*(int *)(plVar7 + 1) * 8) = 0;
          *(int *)(plVar7 + 1) = *(int *)(plVar7 + 1) + 1;
        }
        else {
          iVar5 = FUN_180545950(plVar7,(longlong)(*(int *)(plVar8 + 1) + 2));
          if (iVar5 == 0) goto LAB_18053f40c;
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
        iVar6 = FUN_180545950(local_c0,(longlong)(iVar11 + 1));
        if (iVar6 != 0) {
          *(int *)(local_c0 + 1) = iVar11 + -1;
          local_80 = (ulonglong *)(*local_c0 + (longlong)(iVar11 + -1) * 8);
          iVar6 = FUN_180545950(local_60,(longlong)(iVar5 + 1));
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
                FUN_180556ee0(&local_b0,&local_98,local_30,local_28,local_78);
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
              local_18 = FUN_180546620(*local_60,*plVar8,(longlong)iVar5,local_b0);
              *(undefined8 *)(*local_60 + (longlong)iVar5 * 8) = local_18;
              local_50 = local_50 + -8;
              lVar10 = FUN_180546fa0(local_50,local_50,*local_60,(longlong)(iVar5 + 1));
              if (lVar10 != 0) {
                local_b0 = local_b0 - 1;
                lVar10 = FUN_180546d70(local_50,local_50,*plVar8,(longlong)iVar5);
                if (lVar10 != 0) {
                  *local_a0 = *local_a0 + 1;
                }
              }
              *local_80 = local_b0;
              local_a0 = local_a0 + -1;
              local_80 = local_80 + -1;
            }
            FUN_180545910(plVar7);
            if (param_2 != 0) {
              iVar4 = FUN_1805401b0(param_2,plVar7,iVar4);
              if (iVar4 == 0) goto LAB_18053f40c;
              iVar4 = FUN_18053fc40(param_2);
              if (iVar4 == 0) {
                *(uint *)(param_2 + 0x10) = local_84;
              }
            }
            FUN_180545910(local_c0);
            FUN_18053e400(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_18053f40c:
  FUN_18053e400(param_5);
  return 0;
}


/* address=18053f430 name=FUN_18053f430 */

ulonglong FUN_18053f430(longlong *param_1,longlong param_2)

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
    iVar2 = FUN_1805455e0(param_2);
    bVar3 = (byte)(0x40 - iVar2);
    param_2 = param_2 << (bVar3 & 0x3f);
    iVar2 = FUN_18053fe30(param_1,param_1,0x40 - iVar2);
    if (iVar2 == 0) {
      local_30 = 0xffffffffffffffff;
    }
    else {
      local_38 = *(int *)(param_1 + 1);
      while (local_38 = local_38 + -1, -1 < local_38) {
        lVar1 = *(longlong *)(*param_1 + (longlong)local_38 * 8);
        FUN_180556ee0(&local_20,local_18,local_30,lVar1,param_2);
        local_30 = lVar1 - local_20 * param_2;
        *(longlong *)(*param_1 + (longlong)local_38 * 8) = local_20;
      }
      FUN_180545910(param_1);
      local_30 = local_30 >> (bVar3 & 0x3f);
    }
  }
  return local_30;
}


/* address=18053f880 name=FUN_18053f880 */

int FUN_18053f880(longlong param_1,longlong param_2)

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
    iVar1 = FUN_18053f9a0(param_1,param_2);
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


/* address=18053f930 name=FUN_18053f930 */

void FUN_18053f930(undefined8 param_1,longlong param_2)

{
  longlong local_res10 [3];
  uint local_28;
  longlong *local_20;
  uint local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  local_res10[0] = param_2;
  FUN_18053d850(&local_20);
  local_20 = local_res10;
  local_28 = (uint)(local_res10[0] != 0);
  local_18 = local_28;
  local_14 = 1;
  local_c = 2;
  FUN_18053f880(param_1,&local_20);
  return;
}


/* address=18053f9a0 name=FUN_18053f9a0 */

void FUN_18053f9a0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1805565f0(*param_1,(longlong)*(int *)(param_1 + 1),*param_2,(longlong)*(int *)(param_2 + 1));
  return;
}


/* address=18053f9f0 name=FUN_18053f9f0 */

bool FUN_18053f9f0(longlong *param_1,longlong *param_2)

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


/* address=18053fb70 name=FUN_18053fb70 */

bool FUN_18053fb70(ulonglong **param_1,ulonglong param_2)

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


/* address=18053fc40 name=FUN_18053fc40 */

void FUN_18053fc40(undefined8 param_1)

{
  FUN_180545d50(param_1,0);
  return;
}


/* address=18053fc60 name=FUN_18053fc60 */

undefined4 FUN_18053fc60(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) && (iVar1 = FUN_18053fb70(param_1,1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=18053fcb0 name=FUN_18053fcb0 */

undefined4 FUN_18053fcb0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_18053fb70(param_1,param_2);
  if ((iVar1 == 0) || ((param_2 != 0 && (*(int *)(param_1 + 0x10) != 0)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=18053fd10 name=FUN_18053fd10 */

undefined4 FUN_18053fd10(ulonglong **param_1)

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


/* address=18053fd70 name=FUN_18053fd70 */

bool FUN_18053fd70(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  int local_18;
  
  iVar1 = FUN_1805458c0(param_1);
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


/* address=18053fe30 name=FUN_18053fe30 */

undefined8 FUN_18053fe30(longlong *param_1,longlong *param_2,int param_3)

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
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180948830,0x49);
    uVar7 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    iVar5 = (int)(param_3 + (param_3 >> 0x1f & 0x3fU)) >> 6;
    iVar6 = FUN_180545950(param_1,(longlong)(*(int *)(param_2 + 1) + 1 + iVar5));
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
      FUN_180533b50(lVar2,0,(longlong)iVar5 << 3);
      *(int *)(param_1 + 1) = *(int *)(param_2 + 1) + 1 + iVar5;
      FUN_180545910(param_1);
      uVar7 = 1;
    }
  }
  return uVar7;
}


/* address=180540060 name=FUN_180540060 */

undefined8 FUN_180540060(ulonglong **param_1,ulonglong **param_2)

{
  ulonglong uVar1;
  int iVar2;
  int local_38;
  ulonglong *local_30;
  ulonglong *local_28;
  ulonglong local_20;
  
  if (param_1 == param_2) {
    iVar2 = FUN_180545950(param_1,(longlong)(*(int *)(param_2 + 1) + 1));
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    iVar2 = FUN_180545950(param_1,(longlong)(*(int *)(param_2 + 1) + 1));
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


/* address=1805401b0 name=FUN_1805401b0 */

undefined8 FUN_1805401b0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 < 0) {
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_1809488b0,0x9e);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_180545950(param_1,(longlong)*(int *)(param_2 + 1));
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_1805530f0(*param_1,*param_2,param_3,(longlong)*(int *)(param_2 + 1));
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      FUN_180545910(param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=180540270 name=FUN_180540270 */

bool FUN_180540270(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_180545950(param_1,(longlong)*(int *)(param_2 + 1));
  if (iVar1 != 0) {
    FUN_180553050(*param_1,*param_2,(longlong)*(int *)(param_2 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    FUN_180545910(param_1);
  }
  return iVar1 != 0;
}


/* address=180540300 name=FUN_180540300 */

undefined8 FUN_180540300(longlong *param_1,int param_2)

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
      iVar3 = FUN_180545950(param_1,(longlong)(iVar2 + 1));
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


/* address=180540410 name=FUN_180540410 */

undefined8 FUN_180540410(longlong *param_1,int param_2)

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
      FUN_180545910(param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=1805404d0 name=FUN_1805404d0 */

undefined8 FUN_1805404d0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1805528f0(*param_1,(longlong)*(int *)(param_1 + 1),(longlong)param_2);
  }
  return uVar1;
}


/* address=180540520 name=FUN_180540520 */

undefined8 FUN_180540520(longlong *param_1,int param_2)

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
      FUN_180545910(param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=180540600 name=FUN_180540600 */

uint FUN_180540600(longlong *param_1)

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
    uVar2 = FUN_1805338a0(*(undefined8 *)(*param_1 + (longlong)local_38 * 8));
    uVar1 = ~uVar4;
    uVar4 = uVar4 | ~uVar2;
    iVar3 = FUN_18055c9c0(*(undefined8 *)(*param_1 + (longlong)local_38 * 8));
    local_34 = local_34 | uVar1 & ~uVar2 & local_38 * 0x40 + iVar3;
  }
  return local_34;
}


/* address=1805406e0 name=FUN_1805406e0 */

ulonglong FUN_1805406e0(longlong *param_1,ulonglong param_2)

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
    lVar1 = FUN_18053d910(param_1);
    if (lVar1 == 0) {
      local_20 = 0xffffffffffffffff;
    }
    else {
      local_20 = FUN_18053f430(lVar1,param_2);
      FUN_18053d880(lVar1);
    }
  }
  return local_20;
}


/* address=180540810 name=FUN_180540810 */

bool FUN_180540810(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 local_20;
  
  if ((param_3 == 0) || (*(int *)(param_2 + 1) == 0)) {
    FUN_18053db30(param_1);
    bVar4 = true;
  }
  else {
    uVar2 = (param_3 - 1) / 0x40 + 1;
    if ((ulonglong)(longlong)*(int *)(param_2 + 1) < uVar2) {
      lVar3 = FUN_18053d970(param_1,param_2);
      bVar4 = lVar3 != 0;
    }
    else {
      iVar1 = FUN_180545950(param_1,uVar2);
      if (iVar1 == 0) {
        bVar4 = false;
      }
      else {
        FUN_180533ab0(*param_1,*param_2,uVar2 * 8);
        if (param_3 % 0x40 != 0) {
          *(ulonglong *)(*param_1 + -8 + uVar2 * 8) =
               *(ulonglong *)(*param_1 + -8 + uVar2 * 8) & (1L << (sbyte)(param_3 % 0x40)) - 1U;
        }
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
        local_20 = (undefined4)uVar2;
        *(undefined4 *)(param_1 + 1) = local_20;
        FUN_180545910(param_1);
        bVar4 = true;
      }
    }
  }
  return bVar4;
}


/* address=180540b40 name=FUN_180540b40 */

undefined8 FUN_180540b40(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  code *local_18;
  
  iVar1 = FUN_18053ec30(0,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_3 + 0x10) == 0) {
      local_18 = FUN_18053e440;
    }
    else {
      local_18 = FUN_18053e730;
    }
    uVar2 = (*local_18)(param_1,param_1,param_3);
  }
  return uVar2;
}


/* address=180540dc0 name=FUN_180540dc0 */

undefined4
FUN_180540dc0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  local_18 = 0;
  FUN_18053e250(param_5);
  lVar2 = FUN_18053e2b0(param_5);
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_18053ebe0(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_18053eab0(lVar2,param_2,param_3,param_5);
    }
    if ((iVar1 != 0) && (iVar1 = FUN_180540b40(param_1,lVar2,param_4,param_5), iVar1 != 0)) {
      local_18 = 1;
    }
  }
  FUN_18053e400(param_5);
  return local_18;
}


/* address=180540e90 name=FUN_180540e90 */

undefined8
FUN_180540e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18053ebe0(param_1,param_2,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18053ec30(0,param_1,param_1,param_3,param_4);
  }
  return uVar2;
}


/* address=180541140 name=FUN_180541140 */

longlong FUN_180541140(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

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
  iVar1 = FUN_18053fd10(param_3);
  local_70 = param_1;
  if ((iVar1 == 0) || (iVar1 = FUN_18053fb70(param_3,1), iVar1 != 0)) {
    iVar1 = FUN_18053fb70(param_3,2);
    if (iVar1 == 0) {
      FUN_18050f6f0(3,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180948930,CONCAT44(uVar11,0x58));
      return 0;
    }
    if (param_1 == 0) {
      local_70 = FUN_18053d800();
    }
    if (local_70 != 0) {
      iVar1 = FUN_1805404d0(param_2,0);
      iVar1 = FUN_18053db90(local_70,(longlong)iVar1);
      if (iVar1 != 0) {
        return local_70;
      }
    }
    if (local_70 != param_1) {
      FUN_18053d880(local_70);
    }
    return 0;
  }
  iVar1 = FUN_18053fc40(param_2);
  if ((iVar1 != 0) || (iVar1 = FUN_18053fc60(param_2), iVar1 != 0)) {
    if (param_1 == 0) {
      local_70 = FUN_18053d800();
    }
    if (local_70 != 0) {
      iVar1 = FUN_18053fc60(param_2);
      iVar1 = FUN_18053db90(local_70,(longlong)iVar1);
      if (iVar1 != 0) {
        return local_70;
      }
    }
    if (local_70 != param_1) {
      FUN_18053d880(local_70);
    }
    return 0;
  }
  FUN_18053e250(param_4);
  uVar3 = FUN_18053e2b0(param_4);
  uVar4 = FUN_18053e2b0(param_4);
  lVar5 = FUN_18053e2b0(param_4);
  uVar6 = FUN_18053e2b0(param_4);
  uVar7 = FUN_18053e2b0(param_4);
  this = (CMFCTabCtrl *)FUN_18053e2b0(param_4);
  if (this != (CMFCTabCtrl *)0x0) {
    if (param_1 == 0) {
      local_70 = FUN_18053d800();
    }
    if ((local_70 != 0) && (iVar1 = FUN_180540b40(uVar3,param_2), iVar1 != 0)) {
      local_68 = 1;
      while (iVar1 = FUN_1805404d0(param_3,local_68), iVar1 == 0) {
        local_68 = local_68 + 1;
      }
      if (local_68 == 1) {
        iVar1 = FUN_1805401b0(lVar5,param_3,2);
        if (iVar1 == 0) goto LAB_180541c56;
        *(undefined4 *)(lVar5 + 0x10) = 0;
        iVar1 = FUN_18053e590(lVar5,1);
        if (iVar1 == 0) goto LAB_180541c56;
        uVar4 = param_4;
        iVar1 = FUN_180543dc0(local_70,uVar3,lVar5,param_3,param_4,0);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if (iVar1 == 0) goto LAB_180541c56;
      }
      else {
        if (local_68 == 2) {
          iVar1 = FUN_180554800(uVar6,uVar3,param_3,param_4);
          if ((iVar1 == 0) || (iVar1 = FUN_1805401b0(lVar5,param_3,3), iVar1 == 0))
          goto LAB_180541c56;
          *(undefined4 *)(lVar5 + 0x10) = 0;
          iVar1 = FUN_180543dc0(uVar4,uVar6,lVar5,param_3,param_4,0);
          if ((iVar1 == 0) ||
             ((((iVar1 = FUN_180540e90(this,uVar4,param_3,param_4), iVar1 == 0 ||
                (iVar1 = FUN_180540dc0(uVar6,uVar6,this,param_3,param_4), iVar1 == 0)) ||
               (iVar1 = FUN_18053e8c0(uVar6,1), iVar1 == 0)) ||
              (iVar1 = FUN_180540dc0(uVar7,uVar3,uVar4,param_3,param_4), iVar1 == 0))))
          goto LAB_180541c56;
          uVar4 = param_4;
          iVar1 = FUN_180540dc0(uVar7,uVar7,uVar6,param_3,param_4);
          uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if (iVar1 == 0) goto LAB_180541c56;
          lVar5 = FUN_18053d970(local_70,uVar7);
        }
        else {
          lVar8 = FUN_18053d970(lVar5,param_3);
          if (lVar8 == 0) goto LAB_180541c56;
          *(undefined4 *)(lVar5 + 0x10) = 0;
          local_78 = 2;
          do {
            if (local_78 < 0x16) {
              iVar1 = FUN_18053db90(this,(longlong)local_78);
joined_r0x0001805416f6:
              if (iVar1 == 0) goto LAB_180541c56;
            }
            else {
              uVar2 = FUN_18053daa0(param_3);
              iVar1 = CMFCTabCtrl::SetImageList(this,uVar2,0,0);
              if (iVar1 == 0) goto LAB_180541c56;
              iVar1 = FUN_18053f9a0(this,param_3);
              if (-1 < iVar1) {
                if (*(int *)(param_3 + 0x10) == 0) {
                  local_18 = FUN_18053e730;
                }
                else {
                  local_18 = FUN_18053e440;
                }
                iVar1 = (*local_18)(this,this,param_3);
                if (iVar1 == 0) goto LAB_180541c56;
              }
              iVar1 = FUN_18053fc40(this);
              if (iVar1 != 0) {
                iVar1 = FUN_18053db90(this,(longlong)local_78);
                goto joined_r0x0001805416f6;
              }
            }
            iVar1 = FUN_180552590(this,lVar5);
            if (iVar1 < -1) goto LAB_180541c56;
            if (iVar1 == 0) {
              FUN_18050f6f0(3,0,0x72,s_D__a_1_s_target_x86_64_pc_window_1809489b0,0x101);
              goto LAB_180541c56;
            }
          } while ((iVar1 == 1) && (local_78 = local_78 + 1, local_78 < 0x52));
          if (iVar1 != -1) {
            FUN_18050f6f0(3,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180948a30,0x10b);
            goto LAB_180541c56;
          }
          iVar1 = FUN_1805401b0(lVar5,lVar5,local_68);
          if (iVar1 == 0) goto LAB_180541c56;
          uVar10 = param_4;
          iVar1 = FUN_180543dc0(this,this,lVar5,param_3,param_4,0);
          uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if (iVar1 == 0) goto LAB_180541c56;
          iVar1 = FUN_18053fc60(this);
          if (iVar1 != 0) {
            FUN_18050f6f0(3,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180948ab0,
                          CONCAT44(uVar11,0x11a));
            goto LAB_180541c56;
          }
          iVar1 = FUN_180540270(uVar6,lVar5);
          if (iVar1 == 0) goto LAB_180541c56;
          iVar1 = FUN_18053fc40(uVar6);
          if (iVar1 == 0) {
            iVar1 = FUN_180543dc0(uVar7,uVar3,uVar6,param_3,param_4,0);
            if (iVar1 == 0) goto LAB_180541c56;
            iVar1 = FUN_18053fc40(uVar7);
            if (iVar1 != 0) {
              FUN_18053db30(local_70);
              bVar9 = false;
              goto LAB_180541c56;
            }
          }
          else {
            iVar1 = FUN_180540b40(uVar6,uVar3,param_3,param_4);
            if (iVar1 == 0) goto LAB_180541c56;
            iVar1 = FUN_18053fc40(uVar6);
            if (iVar1 != 0) {
              FUN_18053db30(local_70);
              bVar9 = false;
              goto LAB_180541c56;
            }
            iVar1 = FUN_18053db60(uVar7);
            if (iVar1 == 0) goto LAB_180541c56;
          }
          iVar1 = FUN_180540e90(uVar4,uVar7,param_3,param_4);
          if (((iVar1 == 0) ||
              (iVar1 = FUN_180540dc0(uVar4,uVar4,uVar3,param_3,param_4), iVar1 == 0)) ||
             (uVar10 = param_4, iVar1 = FUN_180540dc0(uVar7,uVar7,uVar3,param_3,param_4), iVar1 == 0
             )) goto LAB_180541c56;
          while( true ) {
            iVar1 = FUN_18053fc60(uVar4);
            uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if (iVar1 != 0) break;
            for (local_78 = 1; uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20), local_78 < local_68
                ; local_78 = local_78 + 1) {
              if (local_78 == 1) {
                iVar1 = FUN_180540e90(uVar6,uVar4,param_3,param_4);
              }
              else {
                uVar10 = param_4;
                iVar1 = FUN_180540dc0(uVar6,uVar6,uVar6,param_3,param_4);
              }
              if (iVar1 == 0) goto LAB_180541c56;
              iVar1 = FUN_18053fc60(uVar6);
              uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
              if (iVar1 != 0) break;
            }
            if (local_68 <= local_78) {
              FUN_18050f6f0(3,0,0x6e,s_D__a_1_s_target_x86_64_pc_window_180948b30,
                            CONCAT44(uVar11,0x179));
              goto LAB_180541c56;
            }
            lVar5 = FUN_18053d970(uVar6,this);
            if (lVar5 == 0) goto LAB_180541c56;
            local_20 = local_68 - local_78;
            while (local_20 = local_20 + -1, 0 < local_20) {
              iVar1 = FUN_180540e90(uVar6,uVar6,param_3,param_4);
              if (iVar1 == 0) goto LAB_180541c56;
            }
            iVar1 = FUN_180540dc0(this,uVar6,uVar6,param_3,param_4);
            if (((iVar1 == 0) ||
                (iVar1 = FUN_180540dc0(uVar7,uVar7,uVar6,param_3,param_4), iVar1 == 0)) ||
               (uVar10 = param_4, iVar1 = FUN_180540dc0(uVar4,uVar4,this,param_3,param_4),
               iVar1 == 0)) goto LAB_180541c56;
            if (local_68 <= local_78) {
              FID_conflict__assert
                        (u_i_<_e_180948cb0,u_D__a_1_s_target_x86_64_pc_window_180948bb0,0x18d);
            }
            local_68 = local_78;
          }
          lVar5 = FUN_18053d970(local_70,uVar7);
        }
        if (lVar5 == 0) goto LAB_180541c56;
      }
      iVar1 = FUN_180540e90(uVar7,local_70,param_3,param_4);
      bVar9 = iVar1 == 0;
      if ((!bVar9) && (iVar1 = FUN_18053f880(uVar7,uVar3), iVar1 != 0)) {
        FUN_18050f6f0(3,0,0x6e,s_D__a_1_s_target_x86_64_pc_window_180948cc0,CONCAT44(uVar11,0x199));
        bVar9 = true;
      }
    }
  }
LAB_180541c56:
  if (bVar9) {
    if (local_70 != param_1) {
      FUN_18053d8f0(local_70);
    }
    local_70 = 0;
  }
  FUN_18053e400(param_4);
  return local_70;
}


/* address=180541ca0 name=FUN_180541ca0 */

undefined8 FUN_180541ca0(ulonglong **param_1,int param_2,int param_3,int param_4)

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
        FUN_18053db30(param_1);
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
        iVar4 = FUN_180545950(param_1,(longlong)iVar2);
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          FUN_18053d4f0();
          FUN_18055bbd0(*param_1,(longlong)iVar2 << 3);
          FUN_18053d500();
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
        FUN_18050f6f0(3,0,0x66,s_D__a_1_s_target_x86_64_pc_window_1809480d0,0x92);
        uVar5 = 0;
      }
    }
    else {
      FUN_18050f6f0(3,0,0x42,s_D__a_1_s_target_x86_64_pc_window_180948040,0x88);
      uVar5 = 0;
    }
  }
  else {
    FUN_18050f6f0(3,0,0x42,s_D__a_1_s_target_x86_64_pc_window_180947fb0,0x83);
    uVar5 = 0;
  }
  return uVar5;
}


/* address=180542050 name=CMFCTabCtrl::SetImageList */

/* Library Function - Single Match
    public: virtual int __cdecl CMFCTabCtrl::SetImageList(unsigned int,int,unsigned long) __ptr64
   
   Library: Visual Studio 2010 Debug */

int __thiscall CMFCTabCtrl::SetImageList(CMFCTabCtrl *this,uint param_1,int param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = FUN_180541ca0(this,param_1,param_2,param_3);
  return iVar1;
}


/* address=180542090 name=FUN_180542090 */

void FUN_180542090(undefined8 param_1,undefined8 param_2)

{
  FUN_1805420c0(param_1,0,param_2);
  return;
}


/* address=1805420c0 name=FUN_1805420c0 */

undefined8 FUN_1805420c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_180545950(param_1,(longlong)*(int *)(param_3 + 1));
  if ((iVar1 != 0) &&
     (iVar1 = FUN_180551fa0(*param_1,param_2,*param_3,(longlong)*(int *)(param_3 + 1),&DAT_180726f60
                           ), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
    return 1;
  }
  return 0;
}


/* address=180542240 name=FUN_180542240 */

undefined8 FUN_180542240(longlong param_1,undefined4 param_2,undefined4 param_3)

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


/* address=1805425b0 name=FUN_1805425b0 */

undefined4
FUN_1805425b0(undefined4 *param_1,undefined8 param_2,int param_3,undefined8 param_4,
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
  iVar1 = FUN_18053fd10(param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_18053f930(param_2,3), iVar1 < 1)) {
    FUN_18050f6f0(3,0,0x77,s_D__a_1_s_target_x86_64_pc_window_180947f30,CONCAT44(uVar2,0x327));
    local_58 = 0;
  }
  else {
    local_res18 = param_3;
    if (param_3 == 0) {
      uVar2 = FUN_18053daa0(param_2);
      local_res18 = FUN_18055b630(uVar2);
    }
    local_58 = 0;
    local_20 = 0;
    FUN_18053e250(param_4);
    lVar3 = FUN_18053e2b0(param_4);
    if (((lVar3 != 0) && (lVar4 = FUN_18053d970(lVar3,param_2), lVar4 != 0)) &&
       (iVar1 = FUN_18053e8c0(lVar3,1), iVar1 != 0)) {
      local_60 = 0;
      while (iVar1 = FUN_1805404d0(lVar3,local_60), iVar1 == 0) {
        local_60 = local_60 + 1;
      }
      lVar4 = FUN_18053e2b0(param_4);
      if ((lVar4 != 0) && (iVar1 = FUN_1805401b0(lVar4,lVar3,local_60), iVar1 != 0)) {
        lVar5 = FUN_18053e2b0(param_4);
        lVar6 = FUN_18053e2b0(param_4);
        lVar7 = FUN_18053e2b0(param_4);
        lVar8 = FUN_18053e2b0(param_4);
        lVar9 = FUN_18053e2b0(param_4);
        if ((((lVar5 != 0) && ((lVar6 != 0 && (lVar7 != 0)))) && (lVar8 != 0)) &&
           ((lVar9 != 0 && (local_20 = FUN_180543670(param_2,param_4), local_20 != 0)))) {
          for (local_5c = 1; local_5c <= local_res18; local_5c = local_5c + 1) {
            iVar1 = FUN_1805420c0(lVar5,2,lVar3);
            if ((iVar1 == 0) || (iVar1 = FUN_180542ee0(lVar6,lVar5,param_2,param_4), iVar1 == 0))
            goto LAB_180542a78;
            iVar1 = FUN_18053f930(lVar6,1);
            if (0 < iVar1) {
              *param_1 = 1;
              local_58 = 1;
              goto LAB_180542a78;
            }
            iVar1 = FUN_180543dc0(lVar7,lVar5,lVar4,param_2,param_4,local_20);
            if (iVar1 == 0) goto LAB_180542a78;
            iVar1 = FUN_18053fc60(lVar7);
            if ((iVar1 == 0) && (iVar1 = FUN_18053f880(lVar7,lVar3), iVar1 != 0)) {
              local_40 = 1;
              do {
                if (local_60 <= local_40) {
                  lVar3 = FUN_18053d970(lVar8,lVar7);
                  if (((lVar3 != 0) &&
                      (iVar1 = FUN_180540dc0(lVar7,lVar8,lVar8,param_2,param_4), iVar1 != 0)) &&
                     ((iVar1 = FUN_18053fc60(lVar7), iVar1 != 0 ||
                      (lVar3 = FUN_18053d970(lVar8,lVar7), lVar3 != 0)))) {
LAB_1805429b5:
                    lVar3 = FUN_18053d970(lVar9,lVar8);
                    if (((lVar3 != 0) && (iVar1 = FUN_18053e8c0(lVar9,1), iVar1 != 0)) &&
                       (iVar1 = FUN_180542ee0(lVar6,lVar9,param_2,param_4), iVar1 != 0)) {
                      iVar1 = FUN_18053f930(lVar6,1);
                      if (iVar1 < 1) {
                        *param_1 = 2;
                      }
                      else {
                        *param_1 = 1;
                      }
                      local_58 = 1;
                    }
                  }
                  goto LAB_180542a78;
                }
                lVar10 = FUN_18053d970(lVar8,lVar7);
                if ((lVar10 == 0) ||
                   (iVar1 = FUN_180540dc0(lVar7,lVar8,lVar8,param_2,param_4), iVar1 == 0))
                goto LAB_180542a78;
                iVar1 = FUN_18053f880(lVar7,lVar3);
                if (iVar1 == 0) break;
                iVar1 = FUN_18053fc60(lVar7);
                if (iVar1 != 0) goto LAB_1805429b5;
                local_40 = local_40 + 1;
              } while( true );
            }
            iVar1 = FUN_180542240(param_5,1,local_5c + -1);
            if (iVar1 == 0) goto LAB_180542a78;
          }
          *param_1 = 0;
          local_58 = 1;
        }
      }
    }
LAB_180542a78:
    FUN_180543780(local_20);
    FUN_18053e400(param_4);
  }
  return local_58;
}


/* address=180542ab0 name=FUN_180542ab0 */

undefined4
FUN_180542ab0(undefined4 *param_1,undefined8 param_2,int param_3,longlong param_4,int param_5,
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
  uVar3 = FUN_18053da70();
  iVar1 = FUN_18053f880(param_2,uVar3);
  if (iVar1 < 1) {
    local_70 = 1;
  }
  else {
    iVar1 = FUN_18053fd10(param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_18053fcb0(param_2,2);
      *param_1 = uVar2;
      local_70 = 1;
    }
    else {
      iVar1 = FUN_18053fcb0(param_2,3);
      if (iVar1 == 0) {
        if (param_5 != 0) {
          iVar1 = FUN_18055bb40(local_74,param_2);
          if (iVar1 != 0) {
            uVar2 = FUN_18053fcb0(param_2,local_74[0]);
            *param_1 = uVar2;
            return 1;
          }
          iVar1 = FUN_180542240(param_6,1,0xffffffff);
          if (iVar1 == 0) {
            return 0;
          }
        }
        local_res18 = param_3;
        if (param_3 == 0) {
          uVar2 = FUN_18053daa0(param_2);
          local_res18 = FUN_18055b630(uVar2);
        }
        local_58 = 0;
        local_res20 = param_4;
        if ((param_4 == 0) &&
           (local_res20 = FUN_18053e150(), local_58 = local_res20, local_res20 == 0)) {
          local_70 = 0;
        }
        else {
          local_70 = 0;
          FUN_18053e250(local_res20);
          local_48 = FUN_18053e2b0(local_res20);
          local_60 = FUN_1805436d0(param_2,local_res20);
          if ((local_48 != 0) &&
             ((local_60 != 0 && (iVar1 = FUN_180552cb0(local_38,local_60,local_res20), iVar1 != 0)))
             ) {
            local_68 = 0;
            local_78 = 1;
            while( true ) {
              local_40 = (ulonglong)(local_78 < 0x11);
              uVar4 = FUN_1805337e0(local_68,(longlong)local_res18);
              if ((local_40 | uVar4) == 0) break;
              iVar1 = FUN_1805520d0(local_48,local_50,2,local_38[0]);
              if (iVar1 == 0) goto LAB_180542df1;
              local_68 = local_68 + (longlong)local_50[0];
              local_6c = 0;
              iVar1 = FUN_180552e20(local_38,&local_6c,local_48,local_60,local_res20);
              if (iVar1 == 0) goto LAB_180542df1;
              if (local_6c == 0) {
                *param_1 = 0;
                local_70 = 1;
                goto LAB_180542df1;
              }
              iVar1 = FUN_180542240(param_6,1,local_78 + -1);
              if (iVar1 == 0) goto LAB_180542df1;
              local_78 = local_78 + 1;
            }
            if (local_68 < (ulonglong)(longlong)local_res18) {
              FID_conflict__assert
                        (u_uniform_iterations_>___crypto_wo_180947ed0,
                         u_D__a_1_s_target_x86_64_pc_window_180947dd0,0x308);
            }
            *param_1 = 1;
            local_70 = 1;
          }
LAB_180542df1:
          FUN_180543780(local_60);
          FUN_18053e400(local_res20);
          FUN_18053e1c0(local_58);
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


/* address=180542e30 name=FUN_180542e30 */

undefined4
FUN_180542e30(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined4 local_18 [6];
  
  iVar1 = FUN_180542ab0(local_18,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    local_18[0] = 0xffffffff;
  }
  return local_18[0];
}


/* address=180542e90 name=FUN_180542e90 */

void FUN_180542e90(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180542e30(param_1,param_2,param_3,0,param_4);
  return;
}


/* address=180542ee0 name=FUN_180542ee0 */

undefined4
FUN_180542ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_14 [5];
  
  iVar1 = FUN_1805586d0(param_1,local_14,param_2,param_3,param_4);
  if ((iVar1 != 0) && (iVar1 = FUN_18053fe30(param_1,param_1,local_14[0]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=180542f60 name=FUN_180542f60 */

longlong FUN_180542f60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
  if ((param_1 == 0) && (local_res8 = FUN_18053d800(), local_18 = local_res8, local_res8 == 0)) {
    return 0;
  }
  bVar1 = false;
  local_20 = 0;
  if ((*(int *)(param_2 + 0x10) != 0) ||
     (iVar2 = FUN_18053f9a0(param_2,param_3), local_res10 = param_2, -1 < iVar2)) {
    local_20 = FUN_18053d910(param_2);
    if ((local_20 == 0) || (iVar2 = FUN_180540b40(local_20,local_20,param_3,param_4), iVar2 == 0))
    goto LAB_18054308a;
    local_res10 = local_20;
  }
  iVar2 = FUN_18053fd10(param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_1805548e0(local_res8,local_24,local_res10,param_3,param_4);
  }
  else {
    iVar2 = FUN_180543240(local_res8,local_24,local_res10,param_3,param_4);
  }
  if (iVar2 != 0) {
    bVar1 = true;
  }
LAB_18054308a:
  if (!bVar1) {
    FUN_18053d880(local_18);
    local_res8 = 0;
  }
  FUN_18053d880(local_20);
  return local_res8;
}


/* address=1805430c0 name=FUN_1805430c0 */

undefined4
FUN_1805430c0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
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
  iVar1 = FUN_18053dc90(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_18053f880(param_3,param_4 + 0x18), -1 < iVar1)) {
    FUN_18050f6f0(3,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_180944bd0,CONCAT44(uVar3,0x14c));
    return 0;
  }
  local_28 = 0;
  FUN_18053d850(local_20);
  iVar1 = FUN_1805420c0(local_20,1,param_4 + 0x18);
  if (iVar1 != 0) {
    uVar2 = param_5;
    iVar1 = FUN_180543970(param_1,local_20,param_3,param_4,param_5);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (iVar1 != 0) {
      uVar2 = param_5;
      iVar1 = FUN_180543240(param_1,param_2,param_1,param_4 + 0x18,param_5);
      uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if (iVar1 != 0) {
        iVar1 = FUN_180543970(param_1,local_20,param_1,param_4,param_5);
        uVar3 = (undefined4)((ulonglong)param_5 >> 0x20);
        if (iVar1 != 0) {
          local_28 = 1;
          goto LAB_180543219;
        }
      }
    }
  }
  FUN_18050f6f0(3,0,3,s_D__a_1_s_target_x86_64_pc_window_180944c50,CONCAT44(uVar3,0x158));
LAB_180543219:
  FUN_18053d880(local_20);
  return local_28;
}


/* address=180543240 name=FUN_180543240 */

undefined4
FUN_180543240(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
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
  iVar1 = FUN_18053fd10(param_4);
  if (iVar1 == 0) {
    FUN_18050f6f0(3,0,0x68,s_D__a_1_s_target_x86_64_pc_window_180944a50,0x79);
    return 0;
  }
  iVar1 = FUN_18053dc90(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_18053f880(param_3,param_4), -1 < iVar1)) {
    FUN_18050f6f0(3,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_180944ad0,0x7e);
    return 0;
  }
  local_44 = 0;
  FUN_18053e250(param_5);
  lVar2 = FUN_18053e2b0(param_5);
  uVar3 = FUN_18053e2b0(param_5);
  uVar4 = FUN_18053e2b0(param_5);
  lVar5 = FUN_18053e2b0(param_5);
  if (lVar5 != 0) {
    FUN_18053db30(lVar5);
    iVar1 = FUN_18053db60(uVar4);
    if (((iVar1 != 0) && (lVar6 = FUN_18053d970(uVar3,param_3), lVar6 != 0)) &&
       (lVar6 = FUN_18053d970(lVar2,param_4), lVar6 != 0)) {
      *(undefined4 *)(lVar2 + 0x10) = 0;
      while (iVar1 = FUN_18053fc40(uVar3), iVar1 == 0) {
        local_48 = 0;
        while (iVar1 = FUN_1805404d0(uVar3,local_48), iVar1 == 0) {
          local_48 = local_48 + 1;
          iVar1 = FUN_18053fd10(uVar4);
          if (((iVar1 != 0) && (iVar1 = FUN_18053e540(uVar4,uVar4,param_4), iVar1 == 0)) ||
             (iVar1 = FUN_180540270(uVar4,uVar4), iVar1 == 0)) goto LAB_180543654;
        }
        if ((0 < local_48) && (iVar1 = FUN_1805401b0(uVar3,uVar3,local_48), iVar1 == 0))
        goto LAB_180543654;
        local_48 = 0;
        while (iVar1 = FUN_1805404d0(lVar2,local_48), iVar1 == 0) {
          local_48 = local_48 + 1;
          iVar1 = FUN_18053fd10(lVar5);
          if (((iVar1 != 0) && (iVar1 = FUN_18053e540(lVar5,lVar5,param_4), iVar1 == 0)) ||
             (iVar1 = FUN_180540270(lVar5,lVar5), iVar1 == 0)) goto LAB_180543654;
        }
        if ((0 < local_48) && (iVar1 = FUN_1805401b0(lVar2,lVar2,local_48), iVar1 == 0))
        goto LAB_180543654;
        iVar1 = FUN_18053f9a0(uVar3,lVar2);
        if (iVar1 < 0) {
          iVar1 = FUN_18053e540(lVar5,lVar5,uVar4);
          if (iVar1 == 0) goto LAB_180543654;
          iVar1 = FUN_18053e870(lVar2,lVar2,uVar3);
        }
        else {
          iVar1 = FUN_18053e540(uVar4,uVar4,lVar5);
          if (iVar1 == 0) goto LAB_180543654;
          iVar1 = FUN_18053e870(uVar3,uVar3,lVar2);
        }
        if (iVar1 == 0) goto LAB_180543654;
      }
      iVar1 = FUN_18053fc60(lVar2);
      if (iVar1 == 0) {
        *param_2 = 1;
        FUN_18050f6f0(3,0,0x70,s_D__a_1_s_target_x86_64_pc_window_180944b50,0xf8);
      }
      else {
        iVar1 = FUN_18053e730(lVar5,param_4,lVar5);
        if (iVar1 != 0) {
          if ((*(int *)(lVar5 + 0x10) == 0) && (iVar1 = FUN_18053f9a0(lVar5,param_4), iVar1 < 0)) {
            lVar2 = FUN_18053d970(param_1,lVar5);
            if (lVar2 == 0) goto LAB_180543654;
          }
          else {
            iVar1 = FUN_180540b40(param_1,lVar5,param_4,param_5);
            if (iVar1 == 0) goto LAB_180543654;
          }
          local_44 = 1;
        }
      }
    }
  }
LAB_180543654:
  FUN_18053e400(param_5);
  return local_44;
}


/* address=180543670 name=FUN_180543670 */

longlong FUN_180543670(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_180545450();
  if ((lVar2 == 0) || (iVar1 = FUN_1805454b0(lVar2,param_1,param_2), iVar1 == 0)) {
    FUN_180543780(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


/* address=1805436d0 name=FUN_1805436d0 */

longlong FUN_1805436d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_180545450();
  if ((((lVar2 == 0) || (iVar1 = FUN_180558d70(lVar2,param_1), iVar1 == 0)) ||
      (iVar1 = FUN_180552430(lVar2,*(int *)(lVar2 + 0x20) << 7,lVar2 + 0x18,param_2), iVar1 == 0))
     || (iVar1 = FUN_180545ad0(lVar2,(longlong)*(int *)(lVar2 + 0x20)), iVar1 == 0)) {
    FUN_180543780(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


/* address=180543780 name=FUN_180543780 */

void FUN_180543780(longlong param_1)

{
  if (param_1 != 0) {
    FUN_18053d880(param_1);
    FUN_18053d880(param_1 + 0x18);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=180543890 name=FUN_180543890 */

void FUN_180543890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180543970(param_1,param_2,param_3,param_3,param_4);
  return;
}


/* address=1805438e0 name=FUN_1805438e0 */

undefined4
FUN_1805438e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_18;
  
  local_18 = 0;
  FUN_18053e250(param_4);
  lVar1 = FUN_18053e2b0(param_4);
  if ((lVar1 != 0) && (lVar2 = FUN_18053d970(lVar1,param_2), lVar2 != 0)) {
    local_18 = FUN_180559170(param_1,lVar1,param_3);
  }
  FUN_18053e400(param_4);
  return local_18;
}


/* address=180543970 name=FUN_180543970 */

undefined8
FUN_180543970(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_2 + 2) == 0) && (*(int *)(param_3 + 2) == 0)) {
    uVar1 = *(uint *)(param_4 + 0x20);
    if ((((int)uVar1 < 2) || (*(uint *)(param_2 + 1) != uVar1)) || (*(uint *)(param_3 + 1) != uVar1)
       ) {
      uVar3 = FUN_180559290(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar2 = FUN_180545950(param_1,(longlong)(int)uVar1);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        if (0x400 < uVar1) {
          FID_conflict__assert
                    (u__size_t_num_<__BN_MONTGOMERY_MAX_180945e60,
                     u_D__a_1_s_target_x86_64_pc_window_180945d50,0x1b5);
        }
        iVar2 = FUN_1804e2a80(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x18),
                              param_4 + 0x30,(longlong)(int)uVar1);
        if (iVar2 == 0) {
          FID_conflict__assert
                    ((wchar_t *)&DAT_180940d44,u_D__a_1_s_target_x86_64_pc_window_180945eb0,0x1b8);
          FUN_18050f6f0(3,0,0x44,s_D__a_1_s_target_x86_64_pc_window_180945fc0,0x1b9);
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
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180945cc0,0x1a6);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=180543dc0 name=FUN_180543dc0 */

void FUN_180543dc0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_198;
  iVar1 = FUN_18053fd10(param_4);
  if (iVar1 == 0) {
    local_178 = CONCAT44(local_178._4_4_,0x24e);
    FUN_18050f6f0(3,0,0x68,s_D__a_1_s_target_x86_64_pc_window_1809430a0);
    goto LAB_1805443c8;
  }
  if (*(int *)(param_4 + 0x10) != 0) {
    local_178 = CONCAT44(local_178._4_4_,0x252);
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180943130);
    goto LAB_1805443c8;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar2 = FUN_18053f9a0(param_2,param_4);
    iVar1 = FUN_1805339d0(uVar2);
    if (iVar1 < 0) {
      local_144 = FUN_18053daa0(param_3);
      if (local_144 == 0) {
        iVar1 = FUN_18053fb70(param_4,1);
        if (iVar1 == 0) {
          FUN_18053db60(param_1);
        }
        else {
          FUN_18053db30(param_1);
        }
        goto LAB_1805443c8;
      }
      local_13c = 0;
      local_138 = 0;
      FUN_18053e250(param_5);
      local_150 = FUN_18053e2b0(param_5);
      alStack_118[0] = FUN_18053e2b0(param_5);
      if (((local_150 != 0) && (alStack_118[0] != 0)) &&
         ((param_6 != 0 ||
          (param_6 = FUN_1805436d0(param_4,param_5), local_138 = param_6, param_6 != 0)))) {
        local_148 = FUN_180557e20((longlong)local_144);
        iVar1 = FUN_180543890(alStack_118[0],param_2,param_6,param_5);
        if (iVar1 != 0) {
          if (local_148 < 2) {
LAB_180544114:
            local_154 = 1;
            local_168 = local_144 + -1;
            while( true ) {
              while (iVar1 = FUN_1805404d0(param_3,local_168), iVar1 != 0) {
                local_164 = 1;
                local_158 = 0;
                for (local_15c = 1; (local_15c < local_148 && (local_15c <= local_168));
                    local_15c = local_15c + 1) {
                  iVar1 = FUN_1805404d0(param_3,local_168 - local_15c);
                  if (iVar1 != 0) {
                    local_164 = local_164 << ((char)local_15c - (char)local_158 & 0x1fU) | 1;
                    local_158 = local_15c;
                  }
                }
                if (local_154 == 0) {
                  for (local_140 = 0; local_140 < local_158 + 1; local_140 = local_140 + 1) {
                    local_178 = param_5;
                    iVar1 = FUN_180543970(local_150,local_150,local_150,param_6);
                    if (iVar1 == 0) goto LAB_1805443ad;
                  }
                }
                if ((local_164 & 1) == 0) {
                  FID_conflict__assert
                            (u_wvalue___1_180943368,u_D__a_1_s_target_x86_64_pc_window_180943250,
                             0x2b4);
                }
                local_12c = 1;
                if (1 << ((byte)local_148 & 0x1f) <= (int)local_164) {
                  FID_conflict__assert
                            (u_wvalue_<_(1_<<_window)_180943498,
                             u_D__a_1_s_target_x86_64_pc_window_180943380,0x2b5);
                }
                if (local_154 == 0) {
                  local_178 = param_5;
                  iVar1 = FUN_180543970(local_150,local_150,alStack_118[(int)local_164 >> 1],param_6
                                       );
                  if (iVar1 == 0) goto LAB_1805443ad;
                }
                else {
                  lVar3 = FUN_18053d970(local_150,alStack_118[(int)local_164 >> 1]);
                  if (lVar3 == 0) goto LAB_1805443ad;
                }
                local_154 = 0;
                if (local_168 == local_158) goto LAB_18054435b;
                local_168 = local_168 - (local_158 + 1);
              }
              if (local_154 == 0) {
                local_178 = param_5;
                iVar1 = FUN_180543970(local_150,local_150,local_150,param_6);
                if (iVar1 == 0) goto LAB_1805443ad;
              }
              if (local_168 == 0) break;
              local_168 = local_168 + -1;
            }
LAB_18054435b:
            if (local_154 != 0) {
              FID_conflict__assert
                        (u__r_is_one_1809435e8,u_D__a_1_s_target_x86_64_pc_window_1809434d0,0x2c6);
            }
            iVar1 = FUN_1805438e0(param_1,local_150,param_6,param_5);
            if (iVar1 != 0) {
              local_13c = 1;
            }
          }
          else {
            local_128 = FUN_18053e2b0(param_5);
            if (local_128 != 0) {
              local_178 = param_5;
              iVar1 = FUN_180543970(local_128,alStack_118[0],alStack_118[0],param_6);
              if (iVar1 != 0) {
                for (local_160 = 1; local_130 = 1, local_160 < 1 << ((char)local_148 - 1U & 0x1f);
                    local_160 = local_160 + 1) {
                  lVar3 = FUN_18053e2b0(param_5);
                  alStack_118[local_160] = lVar3;
                  if (alStack_118[local_160] == 0) goto LAB_1805443ad;
                  local_178 = param_5;
                  iVar1 = FUN_180543970(alStack_118[local_160],alStack_118[local_160 + -1],local_128
                                        ,param_6);
                  if (iVar1 == 0) goto LAB_1805443ad;
                }
                goto LAB_180544114;
              }
            }
          }
        }
      }
LAB_1805443ad:
      FUN_180543780(local_138);
      FUN_18053e400(param_5);
      goto LAB_1805443c8;
    }
  }
  local_178 = CONCAT44(local_178._4_4_,599);
  FUN_18050f6f0(3,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_1809431c0);
LAB_1805443c8:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_198);
  return;
}


/* address=1805443f0 name=FUN_1805443f0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1805443f0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
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
  
  uStack_10 = 0x18054440f;
  local_40 = DAT_18093c100 ^ (ulonglong)auStack_1718;
  local_165c = 0;
  local_1620 = (undefined8 *)0x0;
  local_1628 = 0;
  local_1668 = 0;
  local_16a8 = (undefined *)0x0;
  iVar1 = FUN_18053fd10(param_4);
  if (iVar1 == 0) {
    local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,0x37e);
    FUN_18050f6f0(3,0,0x68,s_D__a_1_s_target_x86_64_pc_window_180943d40);
    goto LAB_1805451bb;
  }
  if (*(int *)(param_4 + 2) != 0) {
    local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,0x382);
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180943dd0);
    goto LAB_1805451bb;
  }
  if ((*(int *)(param_2 + 2) != 0) || (iVar1 = FUN_18053f9a0(param_2,param_4), -1 < iVar1)) {
    local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,0x386);
    FUN_18050f6f0(3,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_180943e60);
    goto LAB_1805451bb;
  }
  local_16bc = *(int *)(param_3 + 1) * 0x40;
  local_166c = local_16bc;
  if (local_16bc == 0) {
    iVar1 = FUN_18053fb70(param_4,1);
    if (iVar1 == 0) {
      FUN_18053db60(param_1);
    }
    else {
      FUN_18053db30(param_1);
    }
    goto LAB_1805451bb;
  }
  if ((param_6 != (undefined8 *)0x0) ||
     (param_6 = (undefined8 *)FUN_1805436d0(param_4,param_5), local_1620 = param_6,
     param_6 != (undefined8 *)0x0)) {
    local_16b8 = *(uint *)(param_6 + 4);
    if ((*(int *)(param_2 + 1) == 0x10) &&
       (((*(int *)(param_3 + 1) == 0x10 && (iVar1 = FUN_18053daa0(param_4), iVar1 == 0x400)) &&
        (iVar1 = FUN_180557780(), iVar1 != 0)))) {
      iVar1 = FUN_180545950(param_1,0x10);
      if (iVar1 != 0) {
        local_16e8 = local_1600;
        local_16f0 = param_6[6];
        local_16f8 = (undefined8 *)*param_6;
        FUN_1805571b0(*param_1,*param_2,*param_3,*param_4);
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
        FID_conflict__assert
                  (u_window_<__BN_MAX_MOD_EXP_CTIME_W_180944010,
                   u_D__a_1_s_target_x86_64_pc_window_180943ef0,0x3bf);
      }
      if (0x400 < local_16b8) {
        FID_conflict__assert
                  (u__size_t_top_<__BN_MONTGOMERY_MAX_180944180,
                   u_D__a_1_s_target_x86_64_pc_window_180944060,0x3c3);
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
        FID_conflict__assert
                  (u_powerbuf____NULL____top___BN_BIT_1809442f0,
                   u_D__a_1_s_target_x86_64_pc_window_1809441d0,0x3db);
      }
      if (local_16a8 == (undefined *)0x0) {
        local_1628 = FUN_18058f4e0(local_1668 + 0x40);
        if (local_1628 == 0) goto LAB_180545181;
        local_16a8 = (undefined *)FUN_1805336d0(local_1628,0x40);
      }
      FUN_180533b50(local_16a8,0,local_1668);
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
      iVar1 = FUN_180552970(&local_1698,param_6,param_5);
      if ((iVar1 != 0) && (iVar1 = FUN_180545ad0(&local_1698,(longlong)(int)local_16b8), iVar1 != 0)
         ) {
        if (*(int *)(param_2 + 2) != 0) {
          FID_conflict__assert
                    (u__a_>neg_180944468,u_D__a_1_s_target_x86_64_pc_window_180944350,0x3f5);
        }
        iVar1 = FUN_18053f9a0(param_2,param_4);
        if (-1 < iVar1) {
          FID_conflict__assert
                    (u_BN_ucmp_a__m__<_0_180944598,u_D__a_1_s_target_x86_64_pc_window_180944480,
                     0x3f6);
        }
        iVar1 = FUN_180543890(&local_1658,param_2,param_6,param_5);
        if ((iVar1 != 0) &&
           (iVar1 = FUN_180545ad0(&local_1658,(longlong)(int)local_16b8), iVar1 != 0)) {
          if ((local_16b0 == 5) && (1 < (int)local_16b8)) {
            local_1680 = local_1658 + (longlong)(int)local_16b8 * 8;
            for (local_16c0 = 0; local_16c0 < (int)local_16b8; local_16c0 = local_16c0 + 1) {
              *(undefined8 *)(local_1680 + (longlong)local_16c0 * 8) =
                   *(undefined8 *)(param_6[3] + (longlong)local_16c0 * 8);
            }
            local_1678 = param_6 + 6;
            FUN_1804e6d50(local_1698,(longlong)(int)local_16b8,local_16a8,0);
            FUN_1804e6d50(local_1658,(longlong)local_1650,local_16a8,1);
            local_16f0 = (longlong)(int)local_16b8;
            local_16f8 = local_1678;
            FUN_1804e2a80(local_1698,local_1658,local_1658,local_1680);
            FUN_1804e6d50(local_1698,(longlong)(int)local_16b8,local_16a8,2);
            for (local_16c0 = 4; local_16c0 < 0x20; local_16c0 = local_16c0 << 1) {
              local_16f0 = (longlong)(int)local_16b8;
              local_16f8 = local_1678;
              FUN_1804e2a80(local_1698,local_1698,local_1698,local_1680);
              FUN_1804e6d50(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)local_16c0);
            }
            for (local_16c0 = 3; local_16c0 < 0x20; local_16c0 = local_16c0 + 2) {
              local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,local_16c0 + -1);
              local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
              local_16f8 = local_1678;
              FUN_1804e3d40(local_1698,local_1658,local_16a8,local_1680);
              FUN_1804e6d50(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)local_16c0);
              local_1670 = local_16c0;
              while (local_1670 = local_1670 << 1, local_1670 < 0x20) {
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_1804e2a80(local_1698,local_1698,local_1698,local_1680);
                FUN_1804e6d50(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)local_1670);
              }
            }
            local_16bc = local_16bc + -1;
            local_16b4 = 0;
            for (local_16c0 = local_16bc % 5; -1 < local_16c0; local_16c0 = local_16c0 + -1) {
              iVar1 = FUN_1805404d0(param_3,local_16bc);
              local_16b4 = iVar1 + local_16b4 * 2;
              local_16bc = local_16bc + -1;
            }
            FUN_1804e6d80(local_1698,(longlong)(int)local_16b8,local_16a8,(longlong)(int)local_16b4)
            ;
            if ((local_16bc < -1) || ((local_16bc != -1 && (local_16bc % 5 != 4)))) {
              FID_conflict__assert
                        (u_bits_>___1_____bits_____1____bit_1809446e0,
                         u_D__a_1_s_target_x86_64_pc_window_1809445c0,0x434);
            }
            if ((local_16b8 & 7) == 0) {
              local_1610 = *param_3;
              if (local_166c <= local_16bc) {
                FID_conflict__assert
                          (u_bits_<_max_bits_180944858,u_D__a_1_s_target_x86_64_pc_window_180944740,
                           0x447);
              }
              if (local_166c < 0x40) {
                FID_conflict__assert
                          (u_max_bits_>__64_180944998,u_D__a_1_s_target_x86_64_pc_window_180944880,
                           0x44a);
              }
              if (local_166c + -8 <= local_16bc + -4) {
                uVar2 = (int)(uint)*(byte *)(local_1610 + (*(int *)(param_3 + 1) * 8 + -1)) >>
                        ((char)local_16bc - 4U & 7);
                local_16b4 = uVar2 & 0x1f;
                local_16bc = local_16bc + -5;
                local_16e8 = (undefined *)(CONCAT44(local_16e8._4_4_,uVar2) & 0xffffffff0000001f);
                local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
                local_16f8 = local_1678;
                FUN_1804e4d00(local_1698,local_1698,local_16a8,local_1680);
              }
              while (-1 < local_16bc) {
                local_1630 = local_16bc + -4;
                FUN_180533ab0(local_16a0,local_1610 + (local_1630 >> 3),2);
                local_16a0[0] = local_16a0[0] >> ((byte)local_1630 & 7) & 0x1f;
                local_16bc = local_16bc + -5;
                local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,(uint)local_16a0[0]);
                local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
                local_16f8 = local_1678;
                FUN_1804e4d00(local_1698,local_1698,local_16a8,local_1680);
              }
            }
            else {
              while (-1 < local_16bc) {
                local_16b4 = 0;
                for (local_16c0 = 0; local_16c0 < 5; local_16c0 = local_16c0 + 1) {
                  iVar1 = FUN_1805404d0(param_3,local_16bc);
                  local_16b4 = iVar1 + local_16b4 * 2;
                  local_16bc = local_16bc + -1;
                }
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_1804e2a80(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_1804e2a80(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_1804e2a80(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_1804e2a80(local_1698,local_1698,local_1698,local_1680);
                local_16f0 = (longlong)(int)local_16b8;
                local_16f8 = local_1678;
                FUN_1804e2a80(local_1698,local_1698,local_1698,local_1680);
                local_16e8 = (undefined *)CONCAT44(local_16e8._4_4_,local_16b4);
                local_16f0 = CONCAT44(local_16f0._4_4_,local_16b8);
                local_16f8 = local_1678;
                FUN_1804e3d40(local_1698,local_1698,local_16a8,local_1680);
              }
            }
LAB_180545153:
            iVar1 = FUN_1805438e0(param_1,&local_1698,param_6,param_5);
            if (iVar1 != 0) {
              local_165c = 1;
            }
          }
          else {
            local_16f8._0_4_ = local_16b0;
            FUN_1805583a0(&local_1698,local_16b8,local_16a8,0);
            local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
            FUN_1805583a0(&local_1658,local_16b8,local_16a8,1);
            if (1 < (int)local_16b0) {
              local_16f8 = param_5;
              iVar1 = FUN_180543970(&local_1698,&local_1658,&local_1658,param_6);
              if (iVar1 == 0) goto LAB_180545181;
              local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
              FUN_1805583a0(&local_1698,local_16b8,local_16a8,2);
              for (local_16c0 = 3; local_16c0 < local_1660; local_16c0 = local_16c0 + 1) {
                local_16f8 = param_5;
                iVar1 = FUN_180543970(&local_1698,&local_1658,&local_1698,param_6);
                if (iVar1 == 0) goto LAB_180545181;
                local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
                FUN_1805583a0(&local_1698,local_16b8,local_16a8,local_16c0);
              }
            }
            local_16bc = local_16bc + -1;
            local_16b4 = 0;
            for (local_16c0 = local_16bc % (int)local_16b0; -1 < local_16c0;
                local_16c0 = local_16c0 + -1) {
              iVar1 = FUN_1805404d0(param_3,local_16bc);
              local_16b4 = iVar1 + local_16b4 * 2;
              local_16bc = local_16bc + -1;
            }
            local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
            iVar1 = FUN_180558410(&local_1698,local_16b8,local_16a8,local_16b4);
            while (iVar1 != 0) {
              if (local_16bc < 0) goto LAB_180545153;
              local_16b4 = 0;
              for (local_16c0 = 0; local_16c0 < (int)local_16b0; local_16c0 = local_16c0 + 1) {
                local_16f8 = param_5;
                iVar1 = FUN_180543970(&local_1698,&local_1698,&local_1698,param_6);
                if (iVar1 == 0) goto LAB_180545181;
                iVar1 = FUN_1805404d0(param_3,local_16bc);
                local_16b4 = iVar1 + local_16b4 * 2;
                local_16bc = local_16bc + -1;
              }
              local_16f8 = (undefined8 *)CONCAT44(local_16f8._4_4_,local_16b0);
              iVar1 = FUN_180558410(&local_1658,local_16b8,local_16a8,local_16b4);
              if (iVar1 == 0) break;
              local_16f8 = param_5;
              iVar1 = FUN_180543970(&local_1698,&local_1698,&local_1658,param_6);
            }
          }
        }
      }
    }
  }
LAB_180545181:
  FUN_180543780(local_1620);
  if ((local_16a8 != (undefined *)0x0) && (local_1628 == 0)) {
    FUN_18058f7b0(local_16a8,local_1668);
  }
  FUN_18058f610(local_1628);
LAB_1805451bb:
  FUN_18050ec30(local_40 ^ (ulonglong)auStack_1718);
  return;
}


/* address=1805452e0 name=FUN_1805452e0 */

undefined4
FUN_1805452e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  undefined4 local_38;
  longlong local_30;
  undefined local_28 [40];
  
  FUN_18053d850(local_28);
  local_38 = 0;
  local_30 = 0;
  if ((((param_8 != 0) ||
       (param_8 = FUN_180543670(param_6,param_7), local_30 = param_8, param_8 != 0)) &&
      (iVar1 = FUN_180543dc0(param_1,param_2,param_3,param_6,param_7,param_8), iVar1 != 0)) &&
     (((iVar1 = FUN_180543dc0(local_28,param_4,param_5,param_6,param_7,param_8), iVar1 != 0 &&
       (iVar1 = FUN_180543890(param_1,param_1,param_8,param_7), iVar1 != 0)) &&
      (iVar1 = FUN_180543970(param_1,param_1,local_28,param_8,param_7), iVar1 != 0)))) {
    local_38 = 1;
  }
  FUN_180543780(local_30);
  FUN_18053d880(local_28);
  return local_38;
}


/* address=180545450 name=FUN_180545450 */

longlong FUN_180545450(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18058f4e0(0x40);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_180533b50(lVar1,0,0x40);
    FUN_18053d850(lVar1);
    FUN_18053d850(lVar1 + 0x18);
  }
  return lVar1;
}


/* address=1805454b0 name=FUN_1805454b0 */

undefined4 FUN_1805454b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong local_res18;
  undefined4 local_28;
  longlong local_18;
  
  iVar1 = FUN_180558d70(param_1,param_2);
  if (iVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_18 = 0;
    local_res18 = param_3;
    if ((param_3 == 0) && (local_res18 = FUN_18053e150(), local_18 = local_res18, local_res18 == 0))
    {
      local_28 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x20);
      FUN_18053db30(param_1);
      iVar1 = FUN_180540300(param_1,iVar1 << 7);
      if (((iVar1 == 0) ||
          (iVar1 = FUN_18053ec30(0,param_1,param_1,param_1 + 0x18,local_res18), iVar1 == 0)) ||
         (iVar1 = FUN_180545ad0(param_1,(longlong)*(int *)(param_1 + 0x20)), iVar1 == 0)) {
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
      FUN_18053e1c0(local_18);
    }
  }
  return local_28;
}


/* address=1805455e0 name=FUN_1805455e0 */

int FUN_1805455e0(ulonglong param_1)

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


/* address=180545880 name=FUN_180545880 */

uint FUN_180545880(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=1805458a0 name=FUN_1805458a0 */

uint FUN_1805458a0(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=1805458c0 name=FUN_1805458c0 */

int FUN_1805458c0(longlong *param_1)

{
  int local_18;
  
  local_18 = *(int *)(param_1 + 1);
  while ((0 < local_18 && (*(longlong *)(*param_1 + (longlong)(local_18 + -1) * 8) == 0))) {
    local_18 = local_18 + -1;
  }
  return local_18;
}


/* address=180545910 name=FUN_180545910 */

void FUN_180545910(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1805458c0(param_1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


/* address=180545950 name=FUN_180545950 */

undefined8 FUN_180545950(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_res10;
  
  if ((ulonglong)(longlong)*(int *)((longlong)param_1 + 0xc) < param_2) {
    if (param_2 < 0x800000) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
        lVar2 = FUN_18058f4e0(param_2 << 3);
        if (lVar2 == 0) {
          uVar1 = 0;
        }
        else {
          FUN_180533ab0(lVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
          FUN_18058f610(*param_1);
          *param_1 = lVar2;
          local_res10 = (undefined4)param_2;
          *(undefined4 *)((longlong)param_1 + 0xc) = local_res10;
          uVar1 = 1;
        }
      }
      else {
        FUN_18050f6f0(3,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_1809418b0,0x168);
        uVar1 = 0;
      }
    }
    else {
      FUN_18050f6f0(3,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180941830,0x163);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=180545a60 name=FUN_180545a60 */

undefined8 FUN_180545a60(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 + 0x3f < param_2) {
    FUN_18050f6f0(3,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180941930,0x17c);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180545950(param_1,(param_2 + 0x3f) / 0x40);
  }
  return uVar1;
}


/* address=180545ad0 name=FUN_180545ad0 */

undefined8 FUN_180545ad0(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_res10;
  
  local_res10 = (undefined4)param_2;
  if (param_2 < (ulonglong)(longlong)*(int *)(param_1 + 1)) {
    iVar1 = FUN_180545d50(param_1,param_2);
    if (iVar1 == 0) {
      FUN_18050f6f0(3,0,0x66,s_D__a_1_s_target_x86_64_pc_window_1809419b0,399);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = local_res10;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_180545950(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_180533b50(*param_1 + (longlong)*(int *)(param_1 + 1) * 8,0,
                    (param_2 - (longlong)*(int *)(param_1 + 1)) * 8);
      *(undefined4 *)(param_1 + 1) = local_res10;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=180545bb0 name=FUN_180545bb0 */

void FUN_180545bb0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < param_5; local_18 = local_18 + 1) {
    uVar1 = FUN_180533940(param_2,*(undefined8 *)(param_3 + local_18 * 8),
                          *(undefined8 *)(param_4 + local_18 * 8));
    *(undefined8 *)(param_1 + local_18 * 8) = uVar1;
  }
  return;
}


/* address=180545c30 name=FUN_180545c30 */

bool FUN_180545c30(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 local_res18;
  
  iVar1 = FUN_180545950(param_1,param_3);
  if (iVar1 != 0) {
    FUN_180533b00(*param_1,param_2,param_3 << 3);
    local_res18 = (undefined4)param_3;
    *(undefined4 *)(param_1 + 1) = local_res18;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return iVar1 != 0;
}


/* address=180545ca0 name=FUN_180545ca0 */

void FUN_180545ca0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 local_res18;
  
  if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
    FUN_18058f610(*param_1);
  }
  *param_1 = param_2;
  if (0x7fffff < param_3) {
    FID_conflict__assert
              (u_num_<__BN_MAX_WORDS_180941700,u_D__a_1_s_target_x86_64_pc_window_180941600,299);
  }
  local_res18 = (undefined4)param_3;
  *(undefined4 *)(param_1 + 1) = local_res18;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_res18;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 2;
  return;
}


/* address=180545d50 name=FUN_180545d50 */

bool FUN_180545d50(longlong *param_1,ulonglong param_2)

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


/* address=180545de0 name=FUN_180545de0 */

undefined8 FUN_180545de0(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong local_18;
  
  if (*(int *)(param_3 + 2) == 0) {
    local_18 = (ulonglong)*(int *)(param_3 + 1);
    if ((param_2 < local_18) &&
       (iVar1 = FUN_180545d50(param_3,param_2), local_18 = param_2, iVar1 == 0)) {
      FUN_18050f6f0(3,0,0x66,s_D__a_1_s_target_x86_64_pc_window_1809417b0,0x144);
      uVar2 = 0;
    }
    else {
      FUN_180533b50(param_1,0,param_2 << 3);
      FUN_180533ab0(param_1,*param_3,local_18 << 3);
      uVar2 = 1;
    }
  }
  else {
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180941730,0x13d);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=180545ed0 name=FUN_180545ed0 */

void FUN_180545ed0(longlong *param_1,ulonglong param_2)

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
        FID_conflict__assert
                  (u_bytes_i_____0_180941d80,u_D__a_1_s_target_x86_64_pc_window_180941c80,0xab);
      }
    }
  }
  return;
}


/* address=180545f70 name=FUN_180545f70 */

ulonglong FUN_180545f70(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

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


/* address=180546620 name=FUN_180546620 */

longlong FUN_180546620(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

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


/* address=180546ae0 name=FUN_180546ae0 */

void FUN_180546ae0(undefined (*param_1) [16],ulonglong *param_2,ulonglong param_3)

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


/* address=180546d70 name=FUN_180546d70 */

undefined8
FUN_180546d70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

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
      uVar1 = FUN_180558bb0(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      uVar1 = FUN_180558bb0(local_res10[1],local_res18[1],local_18[0],local_18);
      local_res8[1] = uVar1;
      uVar1 = FUN_180558bb0(local_res10[2],local_res18[2],local_18[0],local_18);
      local_res8[2] = uVar1;
      uVar1 = FUN_180558bb0(local_res10[3],local_res18[3],local_18[0],local_18);
      local_res8[3] = uVar1;
      local_res10 = local_res10 + 4;
      local_res18 = local_res18 + 4;
      local_res8 = local_res8 + 4;
    }
    for (; local_res20 != 0; local_res20 = local_res20 - 1) {
      uVar1 = FUN_180558bb0(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 1;
      local_res8 = local_res8 + 1;
    }
  }
  return local_18[0];
}


/* address=180546fa0 name=FUN_180546fa0 */

undefined8
FUN_180546fa0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

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
      uVar1 = FUN_180558ca0(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      uVar1 = FUN_180558ca0(local_res10[1],local_res18[1],local_18[0],local_18);
      local_res8[1] = uVar1;
      uVar1 = FUN_180558ca0(local_res10[2],local_res18[2],local_18[0],local_18);
      local_res8[2] = uVar1;
      uVar1 = FUN_180558ca0(local_res10[3],local_res18[3],local_18[0],local_18);
      local_res8[3] = uVar1;
      local_res10 = local_res10 + 4;
      local_res18 = local_res18 + 4;
      local_res8 = local_res8 + 4;
    }
    for (; local_res20 != 0; local_res20 = local_res20 - 1) {
      uVar1 = FUN_180558ca0(*local_res10,*local_res18,local_18[0],local_18);
      *local_res8 = uVar1;
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 1;
      local_res8 = local_res8 + 1;
    }
  }
  return local_18[0];
}


/* address=1805471d0 name=FUN_1805471d0 */

/* WARNING: Removing unreachable block (ram,0x0001805472f1) */
/* WARNING: Removing unreachable block (ram,0x000180547294) */
/* WARNING: Removing unreachable block (ram,0x000180547440) */

void FUN_1805471d0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

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


/* address=1805484e0 name=FUN_1805484e0 */

/* WARNING: Removing unreachable block (ram,0x000180548601) */
/* WARNING: Removing unreachable block (ram,0x0001805485a7) */
/* WARNING: Removing unreachable block (ram,0x00018054874f) */

void FUN_1805484e0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

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


/* address=18054d120 name=FUN_18054d120 */

/* WARNING: Removing unreachable block (ram,0x00018054d21f) */
/* WARNING: Removing unreachable block (ram,0x00018054d1c5) */
/* WARNING: Removing unreachable block (ram,0x00018054d36d) */

void FUN_18054d120(undefined8 *param_1,ulonglong *param_2)

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


/* address=180550f20 name=FUN_180550f20 */

/* WARNING: Removing unreachable block (ram,0x00018055101f) */
/* WARNING: Removing unreachable block (ram,0x000180550fc2) */
/* WARNING: Removing unreachable block (ram,0x00018055116e) */

void FUN_180550f20(undefined8 *param_1,ulonglong *param_2)

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


/* address=180551ee0 name=FUN_180551ee0 */

bool FUN_180551ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1805565f0(param_1,param_3,param_2,param_3);
  return iVar1 < 0;
}


/* address=180551f40 name=FUN_180551f40 */

ulonglong FUN_180551f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_18055c780(param_1,param_4,param_2);
  iVar1 = FUN_180551ee0(param_1,param_3,param_4);
  return ~uVar2 & (longlong)iVar1;
}


/* address=180551fa0 name=FUN_180551fa0 */

undefined8
FUN_180551fa0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  int local_28;
  longlong local_20;
  ulonglong local_18 [3];
  
  iVar1 = FUN_18055c850(&local_20,local_18,param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_180533b50(param_1 + local_20 * 8,0,(param_4 - local_20) * 8);
    local_28 = 100;
    do {
      local_28 = local_28 + -1;
      if (local_28 == 0) {
        FUN_18050f6f0(3,0,0x73,s_D__a_1_s_target_x86_64_pc_window_1809481f0,0x10f);
        return 0;
      }
      FUN_18053d4f0();
      FUN_18055c160(param_1,local_20 << 3,param_5);
      FUN_18053d500();
      *(ulonglong *)(param_1 + -8 + local_20 * 8) =
           *(ulonglong *)(param_1 + -8 + local_20 * 8) & local_18[0];
      iVar1 = FUN_180551f40(param_1,param_2,param_3,local_20);
    } while (iVar1 == 0);
    uVar2 = 1;
  }
  return uVar2;
}


/* address=1805520d0 name=FUN_1805520d0 */

undefined8 FUN_1805520d0(ulonglong **param_1,int *param_2,ulonglong param_3,undefined8 *param_4)

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
  
  iVar1 = FUN_18055c850(&local_38,&local_30,param_3,*param_4,(longlong)*(int *)(param_4 + 1));
  if ((iVar1 == 0) || (iVar1 = FUN_180545950(param_1,CONCAT44(uStack_34,local_38)), iVar1 == 0)) {
    return 0;
  }
  if (CONCAT44(uStack_34,local_38) == 0) {
    FID_conflict__assert(u_words_>_0_180948388,u_D__a_1_s_target_x86_64_pc_window_180948280,0x139);
  }
  if (local_30 == 0) {
    FID_conflict__assert(u_mask____0_1809484a8,u_D__a_1_s_target_x86_64_pc_window_1809483a0,0x13a);
  }
  if ((CONCAT44(uStack_34,local_38) == 1) && (local_30 >> 1 < param_3)) {
    FUN_18050f6f0(3,0,0x6c,s_D__a_1_s_target_x86_64_pc_window_1809484c0,0x13d);
    return 0;
  }
  FUN_18053d4f0();
  FUN_18055bbd0(*param_1,CONCAT44(uStack_34,local_38) << 3);
  FUN_18053d500();
  (*param_1)[CONCAT44(uStack_34,local_38) + -1] =
       (*param_1)[CONCAT44(uStack_34,local_38) + -1] & local_30;
  iVar1 = FUN_180551f40(*param_1,param_3,*param_4,CONCAT44(uStack_34,local_38));
  *param_2 = iVar1;
  local_28 = -(longlong)*param_2;
  local_18 = 0;
  local_20 = *param_1;
  uVar2 = FUN_180533940(local_28,0,param_3);
  **param_1 = *(ulonglong *)((longlong)local_20 + local_18) | uVar2;
  local_10 = *param_1;
  uVar2 = FUN_180533940(local_28,0xffffffffffffffff,local_30 >> 1);
  (*param_1)[CONCAT44(uStack_34,local_38) + -1] =
       local_10[CONCAT44(uStack_34,local_38) + -1] & uVar2;
  iVar1 = FUN_180551f40(*param_1,param_3,*param_4,CONCAT44(uStack_34,local_38));
  if (iVar1 == 0) {
    FID_conflict__assert
              (u_bn_in_range_words_r_>d__min_incl_180948660,
               u_D__a_1_s_target_x86_64_pc_window_180948550,0x150);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 1) = local_38;
  return 1;
}


/* address=180552370 name=FUN_180552370 */

void FUN_180552370(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_18053fc40(param_1);
  if (iVar1 != 0) {
    FID_conflict__assert
              (u__BN_is_zero_n__180946168,u_D__a_1_s_target_x86_64_pc_window_180946050,0x24);
  }
  iVar1 = FUN_18053dc90(param_1);
  if (iVar1 != 0) {
    FID_conflict__assert
              (u__BN_is_negative_n__1809462a8,u_D__a_1_s_target_x86_64_pc_window_180946190,0x25);
  }
  iVar1 = FUN_18053fd10(param_1);
  if (iVar1 == 0) {
    FID_conflict__assert(u_BN_is_odd_n__1809463e8,u_D__a_1_s_target_x86_64_pc_window_1809462d0,0x26)
    ;
  }
  FUN_180559360(*(undefined8 *)*param_1);
  return;
}


/* address=180552430 name=FUN_180552430 */

undefined8 FUN_180552430(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_18053fc40(param_3);
  if (iVar1 != 0) {
    FID_conflict__assert
              (u__BN_is_zero_n__180946658,u_D__a_1_s_target_x86_64_pc_window_180946540,0xa4);
  }
  iVar1 = FUN_18053dc90(param_3);
  if (iVar1 != 0) {
    FID_conflict__assert
              (u__BN_is_negative_n__180946798,u_D__a_1_s_target_x86_64_pc_window_180946680,0xa5);
  }
  iVar1 = FUN_18053fd10(param_3);
  if (iVar1 == 0) {
    FID_conflict__assert(u_BN_is_odd_n__1809468d8,u_D__a_1_s_target_x86_64_pc_window_1809467c0,0xa6)
    ;
  }
  FUN_18053db30(param_1);
  uVar2 = FUN_18053daa0(param_3);
  if (uVar2 == 0) {
    FID_conflict__assert(u_n_bits____0_180946a18,u_D__a_1_s_target_x86_64_pc_window_180946900,0xab);
  }
  if (param_2 <= uVar2) {
    FID_conflict__assert(u_p_>_n_bits_180946b48,u_D__a_1_s_target_x86_64_pc_window_180946a30,0xac);
  }
  if (uVar2 == 1) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_180540300(param_1,uVar2 - 1);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_180554850(param_1,param_1,param_2 - (uVar2 - 1),param_3,param_4), iVar1 != 0)) {
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* address=180552590 name=FUN_180552590 */

int FUN_180552590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  iVar2 = FUN_18053fd10(param_2);
  if (iVar2 == 0) {
    FUN_18050f6f0(3,0,0x68,s_D__a_1_s_target_x86_64_pc_window_1809457b0,0x49);
    local_68 = -2;
  }
  else {
    iVar2 = FUN_18053dc90(param_2);
    if (iVar2 == 0) {
      local_68 = -2;
      FUN_18053e250(param_3);
      local_60 = (ulonglong **)FUN_18053e2b0(param_3);
      local_50 = (ulonglong **)FUN_18053e2b0(param_3);
      if (((local_50 != (ulonglong **)0x0) && (lVar3 = FUN_18053d970(local_60,param_1), lVar3 != 0))
         && (lVar3 = FUN_18053d970(local_50,param_2), lVar3 != 0)) {
        local_68 = 1;
        while (ppuVar1 = local_60, iVar2 = FUN_18053fc40(local_60), iVar2 == 0) {
          local_58 = 0;
          while (iVar2 = FUN_1805404d0(local_60,local_58), iVar2 == 0) {
            local_58 = local_58 + 1;
          }
          iVar2 = FUN_1805401b0(local_60,local_60,local_58);
          if (iVar2 == 0) {
            local_68 = -2;
            goto LAB_1805528c2;
          }
          if ((local_58 & 1) != 0) {
            if (*(int *)(local_50 + 1) == 0) {
              local_40 = 0;
            }
            else {
              local_40 = **local_50;
            }
            local_68 = local_68 * *(int *)(&DAT_180726688 + (local_40 & 7) * 4);
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
          iVar2 = FUN_180540b40(local_50,local_50,local_60,param_3);
          if (iVar2 == 0) {
            local_68 = -2;
            goto LAB_1805528c2;
          }
          local_60 = local_50;
          local_50 = ppuVar1;
          *(undefined4 *)(ppuVar1 + 2) = 0;
        }
        iVar2 = FUN_18053fc60(local_50);
        if (iVar2 == 0) {
          local_48 = 0;
        }
        else {
          local_48 = local_68;
        }
        local_68 = local_48;
      }
LAB_1805528c2:
      FUN_18053e400(param_3);
    }
    else {
      FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180945840,0x4f);
      local_68 = -2;
    }
  }
  return local_68;
}


/* address=1805528f0 name=FUN_1805528f0 */

ulonglong FUN_1805528f0(longlong param_1,ulonglong param_2,ulonglong param_3)

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


/* address=180552970 name=FUN_180552970 */

undefined8 FUN_180552970(longlong **param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  int local_18;
  
  pplVar2 = (longlong **)(param_2 + 0x18);
  if ((*(int *)(param_2 + 0x20) < 1) || (-1 < (*pplVar2)[*(int *)(param_2 + 0x20) + -1])) {
    uVar3 = FUN_1805438e0(param_1,param_2,param_2,param_3);
  }
  else {
    iVar1 = FUN_180545950(param_1);
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


/* address=180552ab0 name=FUN_180552ab0 */

undefined4 FUN_180552ab0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_18053dc90(param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_180545d50(param_1,(longlong)*(int *)(param_2 + 0x20)), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=180552b10 name=FUN_180552b10 */

undefined2 FUN_180552b10(longlong *param_1,ushort param_2)

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
    uVar3 = FUN_1805455e0((longlong)(int)(param_2 - 1));
    if (0x10 < uVar3) {
      FID_conflict__assert(u_p_<__16_180942e28,u_D__a_1_s_target_x86_64_pc_window_180942d20,0x48);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (1L << ((char)uVar3 + 0x20U & 0x3f)) + -1 + (ulonglong)param_2;
    uVar4 = SUB164(auVar1 / ZEXT216(param_2),0);
    local_28 = 0;
    local_24 = *(int *)(param_1 + 1);
    while (local_24 = local_24 + -1, -1 < local_24) {
      uVar2 = FUN_180557100(local_28,*(ulonglong *)(*param_1 + (longlong)local_24 * 8) >> 0x20,
                            param_2,uVar3,uVar4);
      local_28 = FUN_180557100(uVar2,*(ulonglong *)(*param_1 + (longlong)local_24 * 8) & 0xffffffff,
                               param_2,uVar3,uVar4);
    }
  }
  return local_28;
}


/* address=180552c50 name=FUN_180552c50 */

undefined4 FUN_180552c50(undefined8 param_1)

{
  int iVar1;
  undefined2 local_18 [12];
  
  iVar1 = FUN_18055bb40(local_18,param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_18053fcb0(param_1,local_18[0]), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* address=180552cb0 name=FUN_180552cb0 */

undefined8 FUN_180552cb0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = param_2 + 0x18;
  lVar4 = FUN_18053e2b0(param_3);
  *param_1 = lVar4;
  lVar4 = FUN_18053e2b0(param_3);
  param_1[1] = lVar4;
  lVar4 = FUN_18053e2b0(param_3);
  param_1[2] = lVar4;
  lVar4 = FUN_18053e2b0(param_3);
  param_1[3] = lVar4;
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) && (param_1[3] != 0)) {
    uVar5 = FUN_18053da70();
    iVar1 = FUN_1805536d0(*param_1,lVar3,uVar5);
    if (iVar1 != 0) {
      uVar2 = FUN_180540600(*param_1);
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
      iVar1 = FUN_180553290(param_1[1],*param_1,*(undefined4 *)((longlong)param_1 + 0x24),param_3);
      if (iVar1 != 0) {
        uVar2 = FUN_18053daa0(lVar3);
        *(undefined4 *)(param_1 + 4) = uVar2;
        iVar1 = FUN_180552970(param_1[2],param_2,param_3);
        if ((iVar1 != 0) && (iVar1 = FUN_1805536d0(param_1[3],lVar3,param_1[2]), iVar1 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* address=180552e20 name=FUN_180552e20 */

undefined4
FUN_180552e20(longlong param_1,uint *param_2,undefined8 param_3,longlong param_4,undefined8 param_5)

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
  FUN_18053e250(param_5);
  lVar4 = FUN_18053e2b0(param_5);
  if (((lVar4 != 0) &&
      (iVar1 = FUN_1805443f0(lVar4,param_3,*(undefined8 *)(param_1 + 8),param_4 + 0x18,param_5,
                             param_4), iVar1 != 0)) &&
     (iVar1 = FUN_180543890(lVar4,lVar4,param_4,param_5), iVar1 != 0)) {
    uVar2 = FUN_18053f9f0(lVar4,*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_18053f9f0(lVar4,*(undefined8 *)(param_1 + 0x18));
    local_20 = -(longlong)(int)(uVar2 | uVar3);
    local_38 = 1;
    while ((local_38 < *(int *)(param_1 + 0x20) &&
           (uVar5 = FUN_180533910(local_38,*(undefined4 *)(param_1 + 0x24)),
           (uVar5 & ~local_20) == 0))) {
      iVar1 = FUN_180543970(lVar4,lVar4,lVar4,param_4,param_5);
      if (iVar1 == 0) goto LAB_180553026;
      iVar1 = FUN_18053f9f0(lVar4,*(undefined8 *)(param_1 + 0x18));
      local_20 = local_20 | -(longlong)iVar1;
      iVar1 = FUN_18053f9f0(lVar4,*(undefined8 *)(param_1 + 0x10));
      if (((longlong)iVar1 & ~local_20) != 0) break;
      local_38 = local_38 + 1;
    }
    *param_2 = (uint)local_20 & 1;
    local_34 = 1;
  }
LAB_180553026:
  FUN_18053e400(param_5);
  return local_34;
}


/* address=180553050 name=FUN_180553050 */

void FUN_180553050(longlong param_1,longlong param_2,longlong param_3)

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


/* address=1805530f0 name=FUN_1805530f0 */

void FUN_1805530f0(longlong param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  ulonglong uVar1;
  sbyte sVar2;
  ulonglong local_28;
  
  uVar1 = (ulonglong)param_3 / 0x40;
  if (uVar1 < param_4) {
    local_28 = uVar1;
    if (param_3 % 0x40 == 0) {
      FUN_180533b00(param_1,param_2 + uVar1 * 8,(param_4 - uVar1) * 8);
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
    FUN_180533b50(param_1 + param_4 * 8 + uVar1 * -8,0,uVar1 << 3);
  }
  else {
    FUN_180533b50(param_1,0,param_4 << 3);
  }
  return;
}


/* address=180553290 name=FUN_180553290 */

undefined4 FUN_180553290(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 local_24;
  
  local_24 = 0;
  FUN_18053e250(param_4);
  puVar3 = (undefined8 *)FUN_18053e2b0(param_4);
  if (((puVar3 != (undefined8 *)0x0) && (lVar4 = FUN_18053d970(param_1,param_2), lVar4 != 0)) &&
     (iVar2 = FUN_180545950(puVar3,(longlong)*(int *)(param_1 + 1)), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 1);
    for (bVar1 = 0; (uint)(iVar2 * 0x40) >> (bVar1 & 0x1f) != 0; bVar1 = bVar1 + 1) {
      FUN_1805530f0(*puVar3,*param_1,1 << (bVar1 & 0x1f),(longlong)*(int *)(param_1 + 1));
      FUN_180545bb0(*param_1,-(ulonglong)(param_3 >> (bVar1 & 0x1f) & 1),*puVar3,*param_1,
                    (longlong)*(int *)(param_1 + 1));
    }
    local_24 = 1;
  }
  FUN_18053e400(param_4);
  return local_24;
}


/* address=1805533f0 name=FUN_1805533f0 */

longlong FUN_1805533f0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  
  if (param_1 == param_2) {
    FID_conflict__assert(u_r____a_1809425b0,u_D__a_1_s_target_x86_64_pc_window_1809424b0,0x19f);
  }
  lVar1 = FUN_180546fa0(param_1,param_2,param_4,param_5);
  param_3 = param_3 - lVar1;
  if ((param_3 != 0) && (param_3 != -1)) {
    FID_conflict__assert
              (u_carry____0____carry_____BN_ULONG_1809426c0,
               u_D__a_1_s_target_x86_64_pc_window_1809425c0,0x1ac);
  }
  FUN_180545bb0(param_1,param_3,param_2,param_1,param_5);
  return param_3;
}


/* address=1805534c0 name=FUN_1805534c0 */

longlong FUN_1805534c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_180546fa0(param_4,param_1,param_3,param_5);
  param_2 = param_2 - lVar1;
  if ((param_2 != 0) && (param_2 != -1)) {
    FID_conflict__assert
              (u_carry____0____carry_____BN_ULONG_180942810,
               u_D__a_1_s_target_x86_64_pc_window_180942710,0x1b5);
  }
  FUN_180545bb0(param_1,param_2,param_1,param_4,param_5);
  return param_2;
}


/* address=180553560 name=FUN_180553560 */

undefined8 FUN_180553560(longlong *param_1,longlong *param_2,longlong *param_3)

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
  iVar2 = FUN_180545950(param_1,(longlong)(iVar1 + 1));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 1) = iVar1 + 1;
    local_28 = FUN_180546d70(*param_1,*local_res10,*local_res18,(longlong)local_38);
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


/* address=1805536d0 name=FUN_1805536d0 */

undefined8 FUN_1805536d0(longlong *param_1,longlong *param_2,undefined8 *param_3)

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
    iVar2 = FUN_180545d50(param_3,(longlong)*(int *)(param_2 + 1));
    if (iVar2 == 0) {
      FUN_18050f6f0(3,0,100,s_D__a_1_s_target_x86_64_pc_window_180941500,0xe8);
      return 0;
    }
    local_24 = *(int *)(param_2 + 1);
  }
  iVar2 = FUN_180545950(param_1,(longlong)*(int *)(param_2 + 1));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_18 = FUN_180546fa0(*param_1,*param_2,*param_3,(longlong)local_24);
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
      FUN_18050f6f0(3,0,100,s_D__a_1_s_target_x86_64_pc_window_180941580,0xfb);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=180553890 name=FUN_180553890 */

int FUN_180553890(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_18053e250(param_4);
  puVar4 = (undefined8 *)FUN_18053e2b0(param_4);
  if (puVar4 != (undefined8 *)0x0) {
    iVar3 = FUN_180545950(param_1,(longlong)local_30);
    if (iVar3 != 0) {
      iVar3 = FUN_180545950(puVar4,(longlong)local_30);
      if (iVar3 != 0) {
        local_2c = 1;
        goto LAB_18055399a;
      }
    }
  }
  local_2c = 0;
LAB_18055399a:
  if (local_2c != 0) {
    FUN_180559980(*param_1,*param_2,*param_3,local_34,iVar2 - iVar1,*puVar4);
    *(int *)(param_1 + 1) = local_30;
  }
  FUN_18053e400(param_4);
  return local_2c;
}


/* address=180553a10 name=FUN_180553a10 */

undefined8 FUN_180553a10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_2 + 0x10) == 0) && (*(int *)(param_3 + 0x10) == 0)) {
    uVar1 = FUN_18055ac80(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180947a00,0x210);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=180553a90 name=FUN_180553a90 */

void FUN_180553a90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_168;
  local_148 = *(uint *)(param_2 + 1);
  if ((int)local_148 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_180553d0d;
  }
  local_134 = 0;
  FUN_18053e250(param_3);
  local_128 = param_1;
  if (param_2 == param_1) {
    local_128 = (undefined8 *)FUN_18053e2b0(param_3);
  }
  local_140 = local_128;
  local_130 = (undefined8 *)FUN_18053e2b0(param_3);
  if ((local_140 != (undefined8 *)0x0) && (local_130 != (undefined8 *)0x0)) {
    local_138 = local_148 << 1;
    iVar1 = FUN_180545950(local_140,(longlong)local_138);
    if (iVar1 != 0) {
      if (local_148 == 4) {
        FUN_180550f20(*local_140,*param_2);
      }
      else if (local_148 == 8) {
        FUN_18054d120(*local_140,*param_2);
      }
      else {
        if (0xf < (int)local_148) {
          if ((local_148 == 0) || ((local_148 & local_148 - 1) != 0)) {
            iVar1 = FUN_180545950(local_130,(longlong)local_138);
            if (iVar1 != 0) {
              FUN_18055b0d0(*local_140,*param_2,(longlong)(int)local_148,*local_130);
              goto LAB_180553cb4;
            }
          }
          else {
            iVar1 = FUN_180545950(local_130,(longlong)(int)(local_148 << 2));
            if (iVar1 != 0) {
              FUN_18055b280(*local_140,*param_2,(longlong)(int)local_148,*local_130);
              goto LAB_180553cb4;
            }
          }
          goto LAB_180553cfc;
        }
        FUN_18055b0d0(*local_140,*param_2,(longlong)(int)local_148,local_118);
      }
LAB_180553cb4:
      *(undefined4 *)(local_140 + 2) = 0;
      *(int *)(local_140 + 1) = local_138;
      if ((local_140 == param_1) || (lVar2 = FUN_18053d970(param_1,local_140), lVar2 != 0)) {
        local_134 = 1;
      }
    }
  }
LAB_180553cfc:
  FUN_18053e400(param_3);
LAB_180553d0d:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_168);
  return;
}


/* address=180553d30 name=FUN_180553d30 */

undefined4
FUN_180553d30(ulonglong **param_1,ulonglong **param_2,ulonglong **param_3,ulonglong **param_4,
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
  iVar1 = FUN_18053dc90(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_18053dc90(param_4), iVar1 == 0)) {
    iVar1 = FUN_18053fc40(param_4);
    if (iVar1 == 0) {
      local_38 = 0;
      FUN_18053e250(param_6);
      if (((param_1 == (ulonglong **)0x0) || (param_1 == param_3)) ||
         (local_40 = param_1, param_1 == param_4)) {
        local_40 = (ulonglong **)FUN_18053e2b0(param_6);
      }
      if (((param_2 == (ulonglong **)0x0) || (param_2 == param_3)) ||
         (local_58 = param_2, param_2 == param_4)) {
        local_58 = (ulonglong **)FUN_18053e2b0(param_6);
      }
      puVar3 = (undefined8 *)FUN_18053e2b0(param_6);
      if (((local_40 != (ulonglong **)0x0) && (local_58 != (ulonglong **)0x0)) &&
         ((puVar3 != (undefined8 *)0x0 &&
          (((iVar1 = FUN_180545950(local_40,(longlong)*(int *)(param_3 + 1)), iVar1 != 0 &&
            (iVar1 = FUN_180545950(local_58,(longlong)*(int *)(param_4 + 1)), iVar1 != 0)) &&
           (iVar1 = FUN_180545950(puVar3), iVar1 != 0)))))) {
        FUN_180533b50(*local_40,0,(longlong)*(int *)(param_3 + 1) << 3);
        *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
        *(undefined4 *)(local_40 + 2) = 0;
        FUN_180533b50(*local_58,0,(longlong)*(int *)(param_4 + 1) << 3);
        *(undefined4 *)(local_58 + 1) = *(undefined4 *)(param_4 + 1);
        *(undefined4 *)(local_58 + 2) = 0;
        uVar2 = FUN_18053daa0(param_4);
        if (uVar2 < param_5) {
          FID_conflict__assert
                    (u_divisor_min_bits_<__BN_num_bits(_180942a60,
                     u_D__a_1_s_target_x86_64_pc_window_180942960,0x1fb);
        }
        local_50 = 0;
        if (param_5 != 0) {
          local_50 = (param_5 - 1) / 0x40;
          if (*(int *)(param_3 + 1) < (int)local_50) {
            local_50 = *(uint *)(param_3 + 1);
          }
          FUN_180533ab0(*local_58,
                        *param_3 + ((longlong)*(int *)(param_3 + 1) - (longlong)(int)local_50),
                        (longlong)(int)local_50 << 3);
        }
        local_4c = *(int *)(param_3 + 1) - local_50;
        while (local_4c = local_4c + -1, -1 < local_4c) {
          for (local_48 = 0x3f; -1 < local_48; local_48 = local_48 + -1) {
            uVar4 = FUN_180546d70(*local_58,*local_58,*local_58,(longlong)*(int *)(param_4 + 1));
            **local_58 = **local_58 | (*param_3)[local_4c] >> ((byte)local_48 & 0x3f) & 1;
            uVar5 = FUN_1805534c0(*local_58,uVar4,*param_4,*puVar3,(longlong)*(int *)(param_4 + 1));
            (*local_40)[local_4c] = (*local_40)[local_4c] | (~uVar5 & 1) << ((byte)local_48 & 0x3f);
          }
        }
        if (((param_1 == (ulonglong **)0x0) || (lVar6 = FUN_18053d970(param_1,local_40), lVar6 != 0)
            ) && ((param_2 == (ulonglong **)0x0 ||
                  (lVar6 = FUN_18053d970(param_2,local_58), lVar6 != 0)))) {
          local_38 = 1;
        }
      }
      FUN_18053e400(param_6);
    }
    else {
      FUN_18050f6f0(3,0,0x69,s_D__a_1_s_target_x86_64_pc_window_1809428e0,CONCAT44(uVar7,0x1d1));
      local_38 = 0;
    }
  }
  else {
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180942860,CONCAT44(uVar7,0x1cd));
    local_38 = 0;
  }
  return local_38;
}


/* address=180554220 name=FUN_180554220 */

undefined4 FUN_180554220(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  ulonglong **local_18;
  ulonglong local_10;
  
  local_20 = 0;
  FUN_18053e250(param_4);
  local_18 = (ulonglong **)FUN_18053e2b0(param_4);
  if ((local_18 != (ulonglong **)0x0) &&
     (iVar1 = FUN_1805586d0(local_18,&local_1c,param_2,param_3,param_4), iVar1 != 0)) {
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
  FUN_18053e400(param_4);
  return local_20;
}


/* address=180554360 name=FUN_180554360 */

undefined4 FUN_180554360(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  longlong local_18;
  
  FUN_18053e250(param_4);
  local_18 = FUN_18053e2b0(param_4);
  if (local_18 != 0) {
    iVar1 = FUN_180553a10(param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      uVar2 = param_4;
      iVar1 = FUN_1805586d0(local_18,&local_24,param_2,param_3,param_4);
      if (iVar1 != 0) {
        iVar1 = FUN_180553d30(param_1,0,param_1,local_18,uVar2 & 0xffffffff00000000,param_4);
        if (iVar1 != 0) {
          iVar1 = FUN_180553290(param_1,param_1,local_24,param_4);
          if (iVar1 != 0) {
            local_28 = 1;
            goto LAB_18055443c;
          }
        }
      }
    }
  }
  local_28 = 0;
LAB_18055443c:
  local_20 = local_28;
  FUN_18053e400(param_4);
  return local_20;
}


/* address=180554460 name=FUN_180554460 */

void FUN_180554460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180546d70(param_1,param_2,param_3,param_6);
  FUN_1805534c0(param_1,uVar1,param_4,param_5,param_6);
  return;
}


/* address=1805544d0 name=FUN_1805544d0 */

int FUN_1805544d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_18;
  
  FUN_18053e250(param_5);
  puVar2 = (undefined8 *)FUN_180556fb0(param_2,(longlong)*(int *)(param_4 + 1),param_5);
  puVar3 = (undefined8 *)FUN_180556fb0(param_3,(longlong)*(int *)(param_4 + 1),param_5);
  puVar4 = (undefined8 *)FUN_180556f40((longlong)*(int *)(param_4 + 1),param_5);
  if (((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) &&
     (puVar4 != (undefined8 *)0x0)) {
    iVar1 = FUN_180545950(param_1,(longlong)*(int *)(param_4 + 1));
    if (iVar1 != 0) {
      local_18 = 1;
      goto LAB_180554591;
    }
  }
  local_18 = 0;
LAB_180554591:
  if (local_18 != 0) {
    FUN_180554460(*param_1,*puVar2,*puVar3,*param_4,*puVar4,(longlong)*(int *)(param_4 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  FUN_18053e400(param_5);
  return local_18;
}


/* address=180554620 name=FUN_180554620 */

void FUN_180554620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_180546fa0(param_1,param_2,param_3,param_6);
  FUN_180546d70(param_5,param_1,param_4,param_6);
  FUN_180545bb0(param_1,-lVar1,param_5,param_1,param_6);
  return;
}


/* address=1805546b0 name=FUN_1805546b0 */

int FUN_1805546b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_18;
  
  FUN_18053e250(param_5);
  puVar2 = (undefined8 *)FUN_180556fb0(param_2,(longlong)*(int *)(param_4 + 1),param_5);
  puVar3 = (undefined8 *)FUN_180556fb0(param_3,(longlong)*(int *)(param_4 + 1),param_5);
  puVar4 = (undefined8 *)FUN_180556f40((longlong)*(int *)(param_4 + 1),param_5);
  if (((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) &&
     (puVar4 != (undefined8 *)0x0)) {
    iVar1 = FUN_180545950(param_1,(longlong)*(int *)(param_4 + 1));
    if (iVar1 != 0) {
      local_18 = 1;
      goto LAB_180554771;
    }
  }
  local_18 = 0;
LAB_180554771:
  if (local_18 != 0) {
    FUN_180554620(*param_1,*puVar2,*puVar3,*param_4,*puVar4,(longlong)*(int *)(param_4 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  FUN_18053e400(param_5);
  return local_18;
}


/* address=180554800 name=FUN_180554800 */

void FUN_180554800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1805544d0(param_1,param_2,param_2,param_3,param_4);
  return;
}


/* address=180554850 name=FUN_180554850 */

undefined8
FUN_180554850(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_18;
  
  lVar2 = FUN_18053d970(param_1,param_2);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
      iVar1 = FUN_180554800(param_1,param_1,param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=1805548e0 name=FUN_1805548e0 */

bool FUN_1805548e0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  iVar1 = FUN_18053dc90(param_3);
  uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
  if (iVar1 == 0) {
    iVar1 = FUN_18053f9a0(param_3,param_4);
    uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
    if (iVar1 < 0) {
      iVar1 = FUN_18053fc40(param_3);
      uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
      if (iVar1 != 0) {
        iVar1 = FUN_18053fc60(param_4);
        if (iVar1 != 0) {
          FUN_18053db30(param_1);
          return true;
        }
        *param_2 = 1;
        FUN_18050f6f0(3,0,0x70,s_D__a_1_s_target_x86_64_pc_window_180945080,CONCAT44(uVar21,0xb7));
        return false;
      }
      iVar1 = FUN_18053fd10(param_3);
      if ((iVar1 == 0) && (iVar1 = FUN_18053fd10(param_4), iVar1 == 0)) {
        *param_2 = 1;
        FUN_18050f6f0(3,0,0x70,s_D__a_1_s_target_x86_64_pc_window_180945110,199);
        return false;
      }
      uVar2 = (ulonglong)*(int *)(param_4 + 1);
      local_e8 = (longlong)*(int *)(param_3 + 1);
      if (uVar2 < (ulonglong)(longlong)*(int *)(param_3 + 1)) {
        local_e8 = uVar2;
      }
      bVar20 = false;
      FUN_18053e250(param_5);
      puVar3 = (undefined8 *)FUN_18053e2b0(param_5);
      puVar4 = (undefined8 *)FUN_18053e2b0(param_5);
      puVar5 = (undefined8 *)FUN_18053e2b0(param_5);
      puVar6 = (undefined8 *)FUN_18053e2b0(param_5);
      puVar7 = (undefined8 *)FUN_18053e2b0(param_5);
      puVar8 = (undefined8 *)FUN_18053e2b0(param_5);
      puVar9 = (undefined8 *)FUN_18053e2b0(param_5);
      puVar10 = (undefined8 *)FUN_18053e2b0(param_5);
      if (((((((puVar3 != (undefined8 *)0x0) && (puVar4 != (undefined8 *)0x0)) &&
             (puVar5 != (undefined8 *)0x0)) &&
            ((puVar6 != (undefined8 *)0x0 && (puVar7 != (undefined8 *)0x0)))) &&
           (((puVar8 != (undefined8 *)0x0 &&
             ((puVar9 != (undefined8 *)0x0 && (puVar10 != (undefined8 *)0x0)))) &&
            (lVar11 = FUN_18053d970(puVar3,param_3), lVar11 != 0)))) &&
          ((((lVar11 = FUN_18053d970(puVar4,param_4), lVar11 != 0 &&
             (iVar1 = FUN_18053db60(puVar5), iVar1 != 0)) &&
            (iVar1 = FUN_18053db60(puVar8), iVar1 != 0)) &&
           (((iVar1 = FUN_180545ad0(puVar3,uVar2), iVar1 != 0 &&
             (iVar1 = FUN_180545ad0(puVar4,uVar2), iVar1 != 0)) &&
            ((iVar1 = FUN_180545ad0(puVar5,uVar2), iVar1 != 0 &&
             ((iVar1 = FUN_180545ad0(puVar7,uVar2), iVar1 != 0 &&
              (iVar1 = FUN_180545ad0(puVar6,local_e8), iVar1 != 0)))))))))) &&
         ((iVar1 = FUN_180545ad0(puVar8,local_e8), iVar1 != 0 &&
          ((iVar1 = FUN_180545ad0(puVar9,uVar2), iVar1 != 0 &&
           (iVar1 = FUN_180545ad0(puVar10,uVar2), iVar1 != 0)))))) {
        uVar19 = local_e8 * 0x40 + uVar2 * 0x40;
        if (uVar19 < local_e8 * 0x40) {
          FUN_18050f6f0(3,0,0x66,s_D__a_1_s_target_x86_64_pc_window_1809451a0,0xf8);
        }
        else {
          for (local_78 = 0; uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20),
              local_78 < uVar19; local_78 = local_78 + 1) {
            uVar12 = FUN_180558540(*(undefined8 *)*puVar3);
            uVar13 = FUN_180558540(*(undefined8 *)*puVar4);
            uVar12 = uVar12 & uVar13;
            lVar11 = FUN_180546fa0(*puVar9,*puVar4,*puVar3,uVar2);
            uVar13 = -lVar11;
            FUN_180545bb0(*puVar4,uVar12 & ~uVar13,*puVar9,*puVar4,uVar2);
            FUN_180546fa0(*puVar9,*puVar3,*puVar4,uVar2);
            FUN_180545bb0(*puVar3,uVar12 & uVar13,*puVar9,*puVar3,uVar2);
            lVar11 = FUN_180546d70(*puVar9,*puVar5,*puVar7,uVar2);
            lVar14 = FUN_180546fa0(*puVar10,*puVar9,*param_4,uVar2);
            FUN_180545bb0(*puVar9,lVar11 - lVar14,*puVar9,*puVar10,uVar2);
            FUN_180545bb0(*puVar5,uVar12 & uVar13,*puVar9,*puVar5,uVar2);
            FUN_180545bb0(*puVar7,uVar12 & ~uVar13,*puVar9,*puVar7,uVar2);
            FUN_180546d70(*puVar9,*puVar6,*puVar8,local_e8);
            FUN_180546fa0(*puVar10,*puVar9,*param_3,local_e8);
            FUN_180545bb0(*puVar9,lVar11 - lVar14,*puVar9,*puVar10,local_e8);
            FUN_180545bb0(*puVar6,uVar12 & uVar13,*puVar9,*puVar6,local_e8);
            FUN_180545bb0(*puVar8,uVar12 & ~uVar13,*puVar9,*puVar8,local_e8);
            uVar13 = FUN_180558540(*(undefined8 *)*puVar3);
            uVar13 = ~uVar13;
            uVar12 = FUN_180558540(*(undefined8 *)*puVar4);
            uVar12 = ~uVar12;
            if (uVar13 == uVar12) {
              FID_conflict__assert
                        (u_u_is_even____v_is_even_180945338,
                         u_D__a_1_s_target_x86_64_pc_window_180945230,0x124);
            }
            FUN_180558560(*puVar3,uVar13,*puVar9,uVar2);
            uVar15 = FUN_180558540(*(undefined8 *)*puVar5);
            uVar16 = FUN_180558540(*(undefined8 *)*puVar6);
            uVar17 = FUN_180558650(*puVar5,(uVar15 | uVar16) & uVar13,*param_4,*puVar9,uVar2);
            uVar18 = FUN_180558650(*puVar6,(uVar15 | uVar16) & uVar13,*param_3,*puVar9,local_e8);
            FUN_1805585c0(*puVar5,uVar17,uVar13,*puVar9,uVar2);
            FUN_1805585c0(*puVar6,uVar18,uVar13,*puVar9,local_e8);
            FUN_180558560(*puVar4,uVar12,*puVar9,uVar2);
            uVar13 = FUN_180558540(*(undefined8 *)*puVar7);
            uVar15 = FUN_180558540(*(undefined8 *)*puVar8);
            uVar17 = FUN_180558650(*puVar7,(uVar13 | uVar15) & uVar12,*param_4,*puVar9,uVar2);
            uVar18 = FUN_180558650(*puVar8,(uVar13 | uVar15) & uVar12,*param_3,*puVar9,local_e8);
            FUN_1805585c0(*puVar7,uVar17,uVar12,*puVar9,uVar2);
            in_stack_fffffffffffffef8 = local_e8;
            FUN_1805585c0(*puVar8,uVar18,uVar12,*puVar9,local_e8);
          }
          iVar1 = FUN_18053fc40(puVar4);
          if (iVar1 == 0) {
            FID_conflict__assert
                      (u_BN_is_zero_v__180945478,u_D__a_1_s_target_x86_64_pc_window_180945370,0x13c)
            ;
          }
          iVar1 = FUN_18053fc60(puVar3);
          if (iVar1 == 0) {
            *param_2 = 1;
            FUN_18050f6f0(3,0,0x70,s_D__a_1_s_target_x86_64_pc_window_1809454a0,
                          CONCAT44(uVar21,0x13f));
          }
          else {
            lVar11 = FUN_18053d970(param_1,puVar5);
            bVar20 = lVar11 != 0;
          }
        }
      }
      FUN_18053e400(param_5);
      return bVar20;
    }
  }
  FUN_18050f6f0(3,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_180944ff0,CONCAT44(uVar21,0xae));
  return false;
}


/* address=180555460 name=FUN_180555460 */

undefined4
FUN_180555460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_18;
  
  FUN_18053e250(param_4);
  lVar2 = FUN_18053e2b0(param_4);
  if (lVar2 != 0) {
    lVar3 = FUN_18053d970(lVar2,param_3);
    if (lVar3 != 0) {
      iVar1 = FUN_18053e8c0(lVar2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_180543dc0(param_1,param_2,lVar2,param_3,param_4,param_5);
        if (iVar1 != 0) {
          local_18 = 1;
          goto LAB_180555503;
        }
      }
    }
  }
  local_18 = 0;
LAB_180555503:
  FUN_18053e400(param_4);
  return local_18;
}


/* address=180555530 name=FUN_180555530 */

undefined4
FUN_180555530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_18;
  
  FUN_18053e250(param_4);
  lVar2 = FUN_18053e2b0(param_4);
  if (lVar2 != 0) {
    lVar3 = FUN_18053d970(lVar2,param_3);
    if (lVar3 != 0) {
      iVar1 = FUN_18053e8c0(lVar2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_1805443f0(param_1,param_2,lVar2,param_3,param_4,param_5);
        if (iVar1 != 0) {
          local_18 = 1;
          goto LAB_1805555d3;
        }
      }
    }
  }
  local_18 = 0;
LAB_1805555d3:
  FUN_18053e400(param_4);
  return local_18;
}


/* address=180555600 name=FUN_180555600 */

bool FUN_180555600(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  
  FUN_18059e210(param_2);
  lVar1 = *param_1;
  FUN_18059e250(param_2);
  if (lVar1 == 0) {
    FUN_18059e230(param_2);
    if (*param_1 == 0) {
      lVar1 = FUN_180543670(param_3,param_4);
      *param_1 = lVar1;
    }
    bVar2 = *param_1 != 0;
    FUN_18059e270(param_2);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


/* address=1805556c0 name=FUN_1805556c0 */

void FUN_1805556c0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  if (param_2 != param_4 + param_6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((param_4 == 8) && (param_6 == 8)) {
    FUN_1805484e0(param_1,param_3,param_5);
  }
  else {
    FUN_180559500(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}


/* address=180555750 name=FUN_180555750 */

void FUN_180555750(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined auStack_c8 [32];
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_c8;
  if ((param_2 == param_4 * 2) && (param_4 < 10)) {
    if (param_4 == 4) {
      FUN_180550f20(param_1,param_3);
    }
    else if (param_4 == 8) {
      FUN_18054d120(param_1,param_3);
    }
    else {
      FUN_18055b0d0(param_1,param_3,param_4,local_a8);
      FUN_18058f7b0(local_a8,param_4 << 4);
    }
    FUN_18050ec30(local_18 ^ (ulonglong)auStack_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=180555850 name=FUN_180555850 */

void FUN_180555850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_1805559c0(param_1,param_2,*param_4,param_3,param_4);
  return;
}


/* address=1805558a0 name=FUN_1805558a0 */

void FUN_1805558a0(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined auStack_d8 [32];
  longlong local_b8;
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_d8;
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
  FUN_180533ab0(local_a8,param_3,param_4 << 3);
  local_b8 = param_5;
  iVar1 = FUN_180558f10(param_1,param_2,local_a8,param_2 << 1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_18058f7b0(local_a8,param_2 << 4);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=1805559c0 name=FUN_1805559c0 */

void FUN_1805559c0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  undefined auStack_d8 [32];
  longlong local_b8;
  ulonglong local_b0;
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_d8;
  if ((param_4 != (longlong)*(int *)(param_5 + 0x20)) || (9 < param_4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_4 < 2) {
    if (param_2 == param_3) {
      FUN_180555750(local_a8,param_4 << 1,param_2,param_4);
    }
    else {
      local_b8 = param_3;
      local_b0 = param_4;
      FUN_1805556c0(local_a8,param_4 << 1,param_2,param_4);
    }
    local_b8 = param_5;
    iVar1 = FUN_180558f10(param_1,param_4,local_a8,param_4 << 1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_18058f7b0(local_a8,param_4 << 4);
  }
  else {
    local_b8 = param_5 + 0x30;
    local_b0 = param_4;
    iVar1 = FUN_1804e2a80(param_1,param_2,param_3,*(undefined8 *)(param_5 + 0x18));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=180555b70 name=FUN_180555b70 */

void FUN_180555b70(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_558;
  if (((param_3 != (longlong)*(int *)(param_6 + 4)) || (9 < param_3)) ||
     (0x3ffffffffffffff < param_5)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = FUN_18053fd10(param_6 + 3);
  if (iVar1 == 0) {
    FID_conflict__assert
              (u_BN_is_odd__mont_>N__180943718,u_D__a_1_s_target_x86_64_pc_window_180943600,0x2da);
  }
  for (; (param_5 != 0 && (*(longlong *)(param_4 + -8 + param_5 * 8) == 0)); param_5 = param_5 - 1)
  {
  }
  if (param_5 == 0) {
    local_538 = param_6;
    FUN_1805558a0(param_1,param_3,*param_6,param_3);
  }
  else {
    uVar2 = FUN_1805455e0(*(undefined8 *)(param_4 + -8 + param_5 * 8));
    local_4f8 = (ulonglong)uVar2 + (param_5 - 1) * 0x40;
    if (local_4f8 == 0) {
      FID_conflict__assert(u_bits____0_180943858,u_D__a_1_s_target_x86_64_pc_window_180943740,0x2e6)
      ;
    }
    local_520 = FUN_180557e20(local_4f8);
    if (5 < local_520) {
      local_520 = 5;
    }
    FUN_180533ab0(local_498,param_2,param_3 << 3);
    if (1 < local_520) {
      local_538 = param_6;
      FUN_1805559c0(local_4e8,local_498,local_498,param_3);
      for (local_51c = 1; local_504 = 1, local_51c < (uint)(1 << ((char)local_520 - 1U & 0x1f));
          local_51c = local_51c + 1) {
        local_538 = param_6;
        FUN_1805559c0(local_498 + (ulonglong)local_51c * 0x48,
                      local_498 + (ulonglong)(local_51c - 1) * 0x48,local_4e8,param_3);
      }
    }
    local_514 = 1;
    local_510 = local_4f8 - 1;
    while( true ) {
      while (iVar1 = FUN_1805528f0(param_4,param_5,local_510), iVar1 != 0) {
        local_528 = 1;
        local_518 = 0;
        for (local_524 = 1; (local_524 < local_520 && (local_524 <= local_510));
            local_524 = local_524 + 1) {
          iVar1 = FUN_1805528f0(param_4,param_5,local_510 - local_524);
          if (iVar1 != 0) {
            local_528 = local_528 << ((char)local_524 - (char)local_518 & 0x1fU) | 1;
            local_518 = local_524;
          }
        }
        if (local_514 == 0) {
          for (local_508 = 0; local_508 < local_518 + 1; local_508 = local_508 + 1) {
            local_538 = param_6;
            FUN_1805559c0(param_1,param_1,param_1,param_3);
          }
        }
        if ((local_528 & 1) == 0) {
          FID_conflict__assert
                    (u_wvalue___1_180943988,u_D__a_1_s_target_x86_64_pc_window_180943870,0x31c);
        }
        local_500 = 1;
        if ((uint)(1 << ((byte)local_520 & 0x1f)) <= local_528) {
          FID_conflict__assert
                    (u_wvalue_<_(1u_<<_window)_180943ab8,
                     u_D__a_1_s_target_x86_64_pc_window_1809439a0,0x31d);
        }
        if (local_514 == 0) {
          local_538 = param_6;
          FUN_1805559c0(param_1,param_1,local_498 + (ulonglong)(local_528 >> 1) * 0x48,param_3);
        }
        else {
          FUN_180533ab0(param_1,local_498 + (ulonglong)(local_528 >> 1) * 0x48,param_3 << 3);
        }
        local_514 = 0;
        if (local_510 == local_518) goto LAB_18055607c;
        local_510 = local_510 - (local_518 + 1);
      }
      if (local_514 == 0) {
        local_538 = param_6;
        FUN_1805559c0(param_1,param_1,param_1,param_3);
      }
      if (local_510 == 0) break;
      local_510 = local_510 - 1;
    }
LAB_18055607c:
    if (local_514 != 0) {
      FID_conflict__assert(u__r_is_one_180943c08,u_D__a_1_s_target_x86_64_pc_window_180943af0,0x32b)
      ;
    }
    FUN_18058f7b0(local_498,0x480);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_558);
  return;
}


/* address=1805560d0 name=FUN_1805560d0 */

void FUN_1805560d0(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  undefined auStack_b8 [32];
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_68 [10];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  if ((param_3 != (longlong)*(int *)(param_4 + 0x20)) || (9 < param_3)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_80 = *(undefined8 *)(param_4 + 0x18);
  FUN_180533ab0(local_68,local_80,param_3 << 3);
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
  FUN_180555b70(param_1,param_2,param_3,local_68);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=180556260 name=FUN_180556260 */

ulonglong FUN_180556260(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong local_res20;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_28 = 0;
  local_res20 = param_4;
  while( true ) {
    if (param_2 <= local_28) goto LAB_180556388;
    if (local_res20 < 8) break;
    local_res20 = local_res20 - 8;
    uVar1 = FUN_180533db0(param_3 + local_res20);
    *(undefined8 *)(param_1 + local_28 * 8) = uVar1;
    local_28 = local_28 + 1;
  }
  local_18 = 0;
  for (local_20 = 0; local_20 < local_res20; local_20 = local_20 + 1) {
    local_18 = local_18 << 8 | (ulonglong)*(byte *)(param_3 + local_20);
  }
  local_res20 = 0;
  *(ulonglong *)(param_1 + local_28 * 8) = local_18;
  param_2 = FUN_180533b50(param_1 + 8 + local_28 * 8,0,(param_2 - local_28) * 8 + -8);
LAB_180556388:
  if (local_res20 != 0) {
    FID_conflict__assert(u_in_len____0_180941b30,u_D__a_1_s_target_x86_64_pc_window_180941a30,0x55);
    param_2 = 0;
  }
  return param_2;
}


/* address=1805563c0 name=FUN_1805563c0 */

void FUN_1805563c0(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  ulonglong local_28;
  ulonglong local_20;
  
  iVar1 = FUN_180556550(param_3,param_4,param_2);
  if (iVar1 == 0) {
    FID_conflict__assert
              (u_fits_in_bytes_in__in_len__out_le_180941ea0,
               u_D__a_1_s_target_x86_64_pc_window_180941da0,0xb4);
  }
  local_20 = param_4 << 3;
  if (param_2 < local_20) {
    local_20 = param_2;
  }
  for (local_28 = 0; local_28 < local_20; local_28 = local_28 + 1) {
    *(undefined *)(param_1 + -1 + (param_2 - local_28)) = *(undefined *)(param_3 + local_28);
  }
  FUN_180533b50(param_1,0,param_2 - local_20);
  return;
}


/* address=1805564c0 name=FUN_1805564c0 */

undefined * FUN_1805564c0(void)

{
  return &DAT_1809912f0;
}


/* address=1805564d0 name=FUN_1805564d0 */

undefined * FUN_1805564d0(void)

{
  return &DAT_180991308;
}


/* address=1805564e0 name=FUN_1805564e0 */

void FUN_1805564e0(undefined8 *param_1)

{
  *param_1 = &DAT_18074d028;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  return;
}


/* address=180556550 name=FUN_180556550 */

bool FUN_180556550(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte local_28;
  ulonglong local_20;
  
  local_28 = 0;
  for (local_20 = param_3; local_20 < (ulonglong)(param_2 << 3); local_20 = local_20 + 1) {
    local_28 = local_28 | *(byte *)(param_1 + local_20);
  }
  return local_28 == 0;
}


/* address=1805565f0 name=FUN_1805565f0 */

undefined4 FUN_1805565f0(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

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
    uVar2 = FUN_1805338d0(*(undefined8 *)(param_1 + local_50 * 8),
                          *(undefined8 *)(param_3 + local_50 * 8));
    uVar3 = FUN_1805337e0(*(undefined8 *)(param_1 + local_50 * 8),
                          *(undefined8 *)(param_3 + local_50 * 8));
    uVar1 = FUN_180533990(uVar3,0xffffffff,1);
    local_58 = FUN_180533990(uVar2,local_58,uVar1);
  }
  if (param_2 < param_4) {
    local_38 = 0;
    for (local_48 = param_2; local_48 < param_4; local_48 = local_48 + 1) {
      local_38 = local_38 | *(ulonglong *)(param_3 + local_48 * 8);
    }
    uVar2 = FUN_1805338a0(local_38);
    local_58 = FUN_180533990(uVar2,local_58,0xffffffff);
  }
  else if (param_4 < param_2) {
    local_30 = 0;
    for (local_40 = param_4; local_40 < param_2; local_40 = local_40 + 1) {
      local_30 = local_30 | *(ulonglong *)(param_1 + local_40 * 8);
    }
    uVar2 = FUN_1805338a0(local_30);
    local_58 = FUN_180533990(uVar2,local_58,1);
  }
  return local_58;
}


/* address=180556820 name=FUN_180556820 */

void FUN_180556820(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


/* address=180556860 name=FUN_180556860 */

void FUN_180556860(undefined8 *param_1)

{
  FUN_18058f610(*param_1);
  return;
}


/* address=180556890 name=FUN_180556890 */

undefined8 FUN_180556890(longlong *param_1,undefined8 param_2)

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
    lVar1 = FUN_18058f6c0(*param_1,local_20 << 3);
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


/* address=1805569a0 name=FUN_1805569a0 */

undefined8 FUN_1805569a0(longlong *param_1)

{
  if (param_1[1] == 0) {
    FID_conflict__assert
              (u_st_>depth_>_0_180942230,u_D__a_1_s_target_x86_64_pc_window_180942130,0xe7);
  }
  param_1[1] = param_1[1] + -1;
  return *(undefined8 *)(*param_1 + param_1[1] * 8);
}


/* address=180556a40 name=FUN_180556a40 */

void FUN_180556a40(void)

{
  FUN_180514f00();
  return;
}


/* address=180556a60 name=FUN_180556a60 */

void FUN_180556a60(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180556a80 name=FUN_180556a80 */

void FUN_180556a80(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180556ab0 name=FUN_180556ab0 */

void FUN_180556ab0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_180556a10,param_2);
  return;
}


/* address=180556ae0 name=FUN_180556ae0 */

void FUN_180556ae0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=180556b10 name=FUN_180556b10 */

ulonglong FUN_180556b10(ulonglong param_1,ulonglong param_2,ulonglong param_3)

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
    iVar1 = FUN_1805455e0(param_3);
    if ((iVar1 != 0x40) && ((ulonglong)(1L << ((byte)iVar1 & 0x3f)) < param_1)) {
      FID_conflict__assert
                (u__i____BN_BITS2______h_<__(BN_ULO_180942350,
                 u_D__a_1_s_target_x86_64_pc_window_180942250,0x4f);
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


/* address=180556ee0 name=FUN_180556ee0 */

void FUN_180556ee0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_180556b10(param_3,param_4,param_5);
  *param_1 = lVar1;
  *param_2 = param_4 - *param_1 * param_5;
  return;
}


/* address=180556f40 name=FUN_180556f40 */

longlong FUN_180556f40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_res8;
  
  lVar2 = FUN_18053e2b0(param_2);
  if ((lVar2 != 0) && (iVar1 = FUN_180545950(lVar2,param_1), iVar1 != 0)) {
    *(undefined4 *)(lVar2 + 0x10) = 0;
    local_res8 = (undefined4)param_1;
    *(undefined4 *)(lVar2 + 8) = local_res8;
    return lVar2;
  }
  return 0;
}


/* address=180556fb0 name=FUN_180556fb0 */

longlong FUN_180556fb0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((ulonglong)(longlong)*(int *)(param_1 + 8) < param_2) {
    lVar2 = FUN_180556f40(param_2,param_3);
    if (((lVar2 == 0) || (lVar3 = FUN_18053d970(lVar2,param_1), lVar3 == 0)) ||
       (iVar1 = FUN_180545ad0(lVar2,param_2), param_1 = lVar2, iVar1 == 0)) {
      param_1 = 0;
    }
  }
  else {
    iVar1 = FUN_180545d50(param_1,param_2);
    if (iVar1 == 0) {
      FID_conflict__assert
                (u_bn_fits_in_words_bn__width__180942bc0,
                 u_D__a_1_s_target_x86_64_pc_window_180942ac0,0x238);
    }
  }
  return param_1;
}


/* address=180557060 name=FUN_180557060 */

undefined2 FUN_180557060(uint param_1,ushort param_2,char param_3,uint param_4)

{
  int iVar1;
  undefined2 local_res8;
  
  iVar1 = (int)((ulonglong)param_4 * (ulonglong)param_1 >> 0x20);
  param_1 = param_1 - (uint)param_2 * ((param_1 - iVar1 >> 1) + iVar1 >> (param_3 - 1U & 0x1f));
  if (param_2 <= param_1) {
    FID_conflict__assert(u_n_<_d_180942d08,u_D__a_1_s_target_x86_64_pc_window_180942c00,0x2a);
  }
  local_res8 = (undefined2)param_1;
  return local_res8;
}


/* address=180557100 name=FUN_180557100 */

undefined2
FUN_180557100(ushort param_1,uint param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_180557060((uint)param_1 << 0x10 | param_2 >> 0x10,param_3,param_4,param_5);
  uVar2 = FUN_180557060((uint)uVar1 << 0x10 | param_2 & 0xffff,param_3,param_4,param_5);
  return uVar2;
}


/* address=1805571b0 name=FUN_1805571b0 */

void FUN_1805571b0(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_118;
  if (param_7 % 0x40 != 0) {
    FID_conflict__assert
              (u__uintptr_t_storage___64____0_1809487e8,u_D__a_1_s_target_x86_64_pc_window_1809486e0
               ,0x2d);
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
  FUN_1804e8a60(local_e0,param_4);
  FUN_1804e8a60(local_c0,param_2);
  FUN_1804e8a60(local_b0,param_5);
  local_f8 = param_6;
  FUN_1804e7dc0(local_b0,local_b0,local_b0,local_e0);
  local_f8 = param_6;
  FUN_1804e7dc0(local_b0,local_b0,&DAT_1807270c0,local_e0);
  local_f8 = param_6;
  FUN_1804e7dc0(local_e8,local_b0,&DAT_180726f80,local_e0);
  local_f8 = param_6;
  FUN_1804e7dc0(local_c0,local_c0,local_b0,local_e0);
  FUN_1804e8cc0(local_d0,local_e8,0);
  FUN_1804e8cc0(local_d0,local_c0,1);
  local_f8._0_4_ = 1;
  FUN_1804e7140(local_e8,local_c0,local_e0,param_6);
  FUN_1804e8cc0(local_d0,local_e8,2);
  local_f8._0_4_ = 1;
  FUN_1804e7140(local_e8,local_e8,local_e0,param_6);
  FUN_1804e8cc0(local_d0,local_e8,4);
  local_f8._0_4_ = 1;
  FUN_1804e7140(local_e8,local_e8,local_e0,param_6);
  FUN_1804e8cc0(local_d0,local_e8,8);
  local_f8 = CONCAT44(local_f8._4_4_,1);
  FUN_1804e7140(local_e8,local_e8,local_e0,param_6);
  FUN_1804e8cc0(local_d0,local_e8,0x10);
  for (local_d4 = 3; local_d4 < 0x20; local_d4 = local_d4 + 2) {
    FUN_1804e8d20(local_e8,local_d0,local_d4 + -1);
    local_f8 = param_6;
    FUN_1804e7dc0(local_e8,local_e8,local_c0,local_e0);
    FUN_1804e8cc0(local_d0,local_e8,local_d4);
    local_b8 = local_d4;
    while (local_b8 = local_b8 << 1, local_b8 < 0x20) {
      local_f8 = CONCAT44(local_f8._4_4_,1);
      FUN_1804e7140(local_e8,local_e8,local_e0,param_6);
      FUN_1804e8cc0(local_d0,local_e8,local_b8);
    }
  }
  local_d8 = (int)(uint)param_3[0x7f] >> 3;
  local_a0 = param_3;
  FUN_1804e8d20(local_e8,local_d0,local_d8);
  local_c8 = 0x3f6;
  while (-1 < local_c8) {
    local_f8 = CONCAT44(local_f8._4_4_,5);
    FUN_1804e7140(local_e8,local_e8,local_e0,param_6);
    FUN_180691e40(local_a8,local_a0 + ((int)(local_c8 + (local_c8 >> 0x1f & 7U)) >> 3),2);
    bVar1 = (byte)(local_c8 >> 0x1f) & 7;
    local_d8 = (int)(uint)local_a8[0] >> (((char)local_c8 + bVar1 & 7) - bVar1 & 0x1f) & 0x1f;
    local_c8 = local_c8 + -5;
    FUN_1804e8d20(local_c0,local_d0,local_d8);
    local_f8 = param_6;
    FUN_1804e7dc0(local_e8,local_e8,local_c0,local_e0);
  }
  local_f8 = CONCAT44(local_f8._4_4_,4);
  FUN_1804e7140(local_e8,local_e8,local_e0,param_6);
  local_d8 = *local_a0 & 0xf;
  FUN_1804e8d20(local_c0,local_d0,local_d8);
  local_f8 = param_6;
  FUN_1804e7dc0(local_e8,local_e8,local_c0,local_e0);
  local_f8 = param_6;
  FUN_1804e7dc0(local_e8,local_e8,&DAT_180726f80,local_e0);
  FUN_1804e87a0(param_1,local_e8);
  local_f8 = 0x10;
  FUN_1805534c0(param_1,0,param_4,local_98);
  FUN_18058f7b0(param_7,0x15c0);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=180557780 name=FUN_180557780 */

undefined8 FUN_180557780(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_180534070();
  if (((iVar1 != 0) && (iVar1 = FUN_1805340f0(), iVar1 != 0)) &&
     (iVar1 = FUN_180534130(), iVar1 != 0)) {
    return 0;
  }
  uVar2 = FUN_1805340b0();
  return uVar2;
}


/* address=1805577c0 name=FUN_1805577c0 */

void FUN_1805577c0(longlong param_1)

{
  FUN_18053d850(param_1);
  FUN_18053d850(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


/* address=180557820 name=FUN_180557820 */

void FUN_180557820(longlong param_1)

{
  if (param_1 != 0) {
    FUN_18053d880(param_1);
    FUN_18053d880(param_1 + 0x18);
  }
  return;
}


/* address=180557860 name=FUN_180557860 */

bool FUN_180557860(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_18053d970(param_1,param_2);
  if (lVar2 != 0) {
    FUN_18053db30(param_1 + 0x18);
    uVar1 = FUN_18053daa0(param_2);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return lVar2 != 0;
}


/* address=1805578d0 name=FUN_1805578d0 */

undefined4
FUN_1805578d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_18;
  
  local_18 = 0xffffffff;
  FUN_18053e250(param_4);
  lVar3 = FUN_18053e2b0(param_4);
  uVar1 = local_18;
  if (((lVar3 != 0) && (iVar2 = FUN_180540300(lVar3,param_3), iVar2 != 0)) &&
     (iVar2 = FUN_18053ec30(param_1,0,lVar3,param_2,param_4), uVar1 = param_3, iVar2 == 0)) {
    uVar1 = local_18;
  }
  local_18 = uVar1;
  FUN_18053e400(param_4);
  return local_18;
}


/* address=180557970 name=FUN_180557970 */

undefined4
FUN_180557970(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
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
  FUN_18053e250(param_5);
  lVar3 = FUN_18053e2b0(param_5);
  lVar4 = FUN_18053e2b0(param_5);
  local_38 = param_1;
  if (param_1 == 0) {
    local_38 = FUN_18053e2b0(param_5);
  }
  local_40 = param_2;
  if (param_2 == 0) {
    local_40 = FUN_18053e2b0(param_5);
  }
  if ((((lVar3 != 0) && (lVar4 != 0)) && (local_38 != 0)) && (local_40 != 0)) {
    iVar1 = FUN_18053f9a0(param_3,param_4);
    if (iVar1 < 0) {
      FUN_18053db30(local_38);
      lVar3 = FUN_18053d970(local_40,param_3);
      if (lVar3 != 0) {
        FUN_18053e400(param_5);
        return 1;
      }
    }
    else {
      local_44 = FUN_18053daa0(param_3);
      iVar1 = *(int *)(param_4 + 0x30) << 1;
      if (local_44 < iVar1) {
        local_44 = iVar1;
      }
      if (local_44 != *(int *)(param_4 + 0x34)) {
        uVar2 = FUN_1805578d0(param_4 + 0x18,param_4,local_44,param_5);
        *(undefined4 *)(param_4 + 0x34) = uVar2;
      }
      if (((*(int *)(param_4 + 0x34) != -1) &&
          (iVar1 = FUN_1805401b0(lVar3,param_3,*(undefined4 *)(param_4 + 0x30)), iVar1 != 0)) &&
         ((iVar1 = FUN_18053eab0(lVar4,lVar3,param_4 + 0x18,param_5), iVar1 != 0 &&
          (iVar1 = FUN_1805401b0(local_38,lVar4,local_44 - *(int *)(param_4 + 0x30)), iVar1 != 0))))
      {
        *(undefined4 *)(local_38 + 0x10) = 0;
        iVar1 = FUN_18053eab0(lVar4,param_4,local_38,param_5);
        if ((iVar1 != 0) && (iVar1 = FUN_18053e870(local_40,param_3,lVar4), iVar1 != 0)) {
          *(undefined4 *)(local_40 + 0x10) = 0;
          local_48 = 0;
          while (iVar1 = FUN_18053f9a0(local_40,param_4), -1 < iVar1) {
            if (2 < local_48) {
              FUN_18050f6f0(3,0,0x65,s_D__a_1_s_target_x86_64_pc_window_180942e40,0x143);
              goto LAB_180557d00;
            }
            iVar1 = FUN_18053e870(local_40,local_40,param_4);
            if ((iVar1 == 0) ||
               (iVar1 = FUN_18053e590(local_38,1), local_48 = local_48 + 1, iVar1 == 0))
            goto LAB_180557d00;
          }
          iVar1 = FUN_18053fc40(local_40);
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
LAB_180557d00:
  FUN_18053e400(param_5);
  return local_2c;
}


/* address=180557d20 name=FUN_180557d20 */

undefined4
FUN_180557d20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  longlong local_18;
  
  local_28 = 0;
  FUN_18053e250(param_5);
  lVar2 = FUN_18053e2b0(param_5);
  if (lVar2 != 0) {
    local_18 = param_2;
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = FUN_18053ebe0(lVar2,param_2,param_5);
      }
      else {
        iVar1 = FUN_18053eab0(lVar2,param_2,param_3,param_5);
      }
      local_18 = lVar2;
      if (iVar1 == 0) goto LAB_180557dfe;
    }
    local_28 = FUN_180557970(0,param_1,local_18,param_4,param_5);
  }
LAB_180557dfe:
  FUN_18053e400(param_5);
  return local_28;
}


/* address=180557e20 name=FUN_180557e20 */

undefined8 FUN_180557e20(ulonglong param_1)

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


/* address=180557e80 name=FUN_180557e80 */

void FUN_180557e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_1c8;
  local_178 = 0;
  local_188 = 1;
  iVar1 = FUN_18053fd10(param_4);
  if (iVar1 != 0) {
    FID_conflict__assert
              (u__BN_is_odd_m__180942fe8,u_D__a_1_s_target_x86_64_pc_window_180942ed0,0x1b8);
  }
  local_184 = FUN_18053daa0(param_3);
  if (local_184 == 0) {
    FUN_18053db60(param_1);
    goto LAB_180558380;
  }
  FUN_1805577c0(local_158);
  FUN_18053e250(param_5);
  local_170 = FUN_18053e2b0(param_5);
  alStack_118[0] = FUN_18053e2b0(param_5);
  if ((local_170 != 0) && (alStack_118[0] != 0)) {
    if (*(int *)(param_4 + 0x10) == 0) {
      iVar1 = FUN_180557860(local_158,param_4,param_5);
    }
    else {
      lVar2 = FUN_18053d970(local_170,param_4);
      if (lVar2 == 0) goto LAB_180558365;
      *(undefined4 *)(local_170 + 0x10) = 0;
      iVar1 = FUN_180557860(local_158,local_170,param_5);
    }
    if ((0 < iVar1) && (iVar1 = FUN_180540b40(alStack_118[0],param_2,param_4,param_5), iVar1 != 0))
    {
      iVar1 = FUN_18053fc40(alStack_118[0]);
      if (iVar1 == 0) {
        local_180 = FUN_180557e20((longlong)local_184);
        if (1 < local_180) {
          local_1a8 = param_5;
          iVar1 = FUN_180557d20(local_170,alStack_118[0],alStack_118[0],local_158);
          if (iVar1 == 0) goto LAB_180558365;
          local_168 = 1;
          local_17c = 1 << ((char)local_180 - 1U & 0x1f);
          for (local_198 = 1; local_198 < local_17c; local_198 = local_198 + 1) {
            local_160 = FUN_18053e2b0(param_5);
            alStack_118[local_198] = local_160;
            if (local_160 == 0) goto LAB_180558365;
            local_1a8 = param_5;
            iVar1 = FUN_180557d20(alStack_118[local_198],alStack_118[local_198 + -1],local_170,
                                  local_158);
            if (iVar1 == 0) goto LAB_180558365;
          }
        }
        local_188 = 1;
        local_194 = local_184 + -1;
        iVar1 = FUN_18053db60(param_1);
        if (iVar1 != 0) {
          do {
            while (iVar1 = FUN_1805404d0(param_3,local_194), iVar1 == 0) {
              if (local_188 == 0) {
                local_1a8 = param_5;
                iVar1 = FUN_180557d20(param_1,param_1,param_1,local_158);
                if (iVar1 == 0) goto LAB_180558365;
              }
              if (local_194 == 0) goto LAB_18055835d;
              local_194 = local_194 + -1;
            }
            local_190 = 1;
            local_18c = 0;
            for (local_198 = 1; (local_198 < local_180 && (-1 < local_194 - local_198));
                local_198 = local_198 + 1) {
              iVar1 = FUN_1805404d0(param_3,local_194 - local_198);
              if (iVar1 != 0) {
                local_190 = local_190 << ((char)local_198 - (char)local_18c & 0x1fU) | 1;
                local_18c = local_198;
              }
            }
            local_17c = local_18c + 1;
            if (local_188 == 0) {
              for (local_198 = 0; local_198 < local_17c; local_198 = local_198 + 1) {
                local_1a8 = param_5;
                iVar1 = FUN_180557d20(param_1,param_1,param_1,local_158);
                if (iVar1 == 0) goto LAB_180558365;
              }
            }
            local_1a8 = param_5;
            iVar1 = FUN_180557d20(param_1,param_1,alStack_118[(int)local_190 >> 1],local_158);
            if (iVar1 == 0) goto LAB_180558365;
            local_194 = local_194 - (local_18c + 1);
            local_188 = 0;
          } while (-1 < local_194);
LAB_18055835d:
          local_178 = 1;
        }
      }
      else {
        FUN_18053db30(param_1);
        local_178 = 1;
      }
    }
  }
LAB_180558365:
  FUN_18053e400(param_5);
  FUN_180557820(local_158);
LAB_180558380:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=1805583a0 name=FUN_1805583a0 */

undefined8 FUN_1805583a0(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180545de0(param_3 + (longlong)(param_4 * param_2) * 8,(longlong)param_2,param_1);
  if ((int)uVar1 == 0) {
    FID_conflict__assert
              ((wchar_t *)&DAT_180943d38,u_D__a_1_s_target_x86_64_pc_window_180943c20,0x34a);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=180558410 name=FUN_180558410 */

undefined8
FUN_180558410(longlong *param_1,int param_2,longlong param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong local_res18;
  int local_28;
  int local_24;
  
  iVar1 = FUN_180545950(param_1,(longlong)param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_180533b50(*param_1,0,(longlong)param_2 << 3);
    local_res18 = param_3;
    for (local_24 = 0; local_24 < 1 << (param_5 & 0x1f); local_24 = local_24 + 1) {
      uVar2 = FUN_180533910(local_24,param_4);
      uVar3 = FUN_180533790(uVar2);
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


/* address=180558540 name=FUN_180558540 */

longlong FUN_180558540(ulonglong param_1)

{
  return -(param_1 & 1);
}


/* address=180558560 name=FUN_180558560 */

void FUN_180558560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180553050(param_3,param_1,param_4);
  FUN_180545bb0(param_1,param_2,param_3,param_1,param_4);
  return;
}


/* address=1805585c0 name=FUN_1805585c0 */

void FUN_1805585c0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  FUN_180558560(param_1,param_3,param_4,param_5);
  if (param_5 != 0) {
    *(ulonglong *)(param_1 + -8 + param_5 * 8) =
         *(ulonglong *)(param_1 + -8 + param_5 * 8) | (param_2 & param_3) << 0x3f;
  }
  return;
}


/* address=180558650 name=FUN_180558650 */

ulonglong FUN_180558650(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180546d70(param_4,param_1,param_3,param_5);
  FUN_180545bb0(param_1,param_2,param_4,param_1,param_5);
  return uVar1 & param_2;
}


/* address=1805586d0 name=FUN_1805586d0 */

undefined4
FUN_1805586d0(undefined8 param_1,int *param_2,longlong param_3,longlong param_4,undefined8 param_5)

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
    FUN_18053db30(param_1);
    local_3c = 1;
  }
  else {
    local_3c = 0;
    FUN_18053e250(param_5);
    plVar4 = (longlong *)FUN_18053e2b0(param_5);
    plVar5 = (longlong *)FUN_18053e2b0(param_5);
    puVar6 = (undefined8 *)FUN_18053e2b0(param_5);
    if (((((plVar4 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) &&
         (puVar6 != (undefined8 *)0x0)) &&
        ((lVar7 = FUN_18053d970(plVar4,param_3), lVar7 != 0 &&
         (lVar7 = FUN_18053d970(plVar5,param_4), lVar7 != 0)))) &&
       ((iVar1 = FUN_180545ad0(plVar4,uVar3), iVar1 != 0 &&
        ((iVar1 = FUN_180545ad0(plVar5,uVar3), iVar1 != 0 &&
         (iVar1 = FUN_180545ad0(puVar6,uVar3), iVar1 != 0)))))) {
      uVar2 = *(int *)(param_3 + 8) * 0x40;
      uVar10 = uVar2 + *(int *)(param_4 + 8) * 0x40;
      if (uVar10 < uVar2) {
        FUN_18050f6f0(3,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180944cd0,CONCAT44(uVar11,0x4e));
      }
      else {
        local_54 = 0;
        for (local_58 = 0; local_58 < uVar10; local_58 = local_58 + 1) {
          uVar8 = FUN_180558540(*(undefined8 *)*plVar4);
          uVar9 = FUN_180558540(*(undefined8 *)*plVar5);
          lVar7 = FUN_180546fa0(*puVar6,*plVar4,*plVar5,uVar3);
          FUN_180545bb0(*plVar4,uVar8 & uVar9 & ~-lVar7,*puVar6,*plVar4,uVar3);
          FUN_180546fa0(*puVar6,*plVar5,*plVar4,uVar3);
          FUN_180545bb0(*plVar5,uVar8 & uVar9 & -lVar7,*puVar6,*plVar5,uVar3);
          uVar8 = FUN_180558540(*(undefined8 *)*plVar4);
          uVar9 = FUN_180558540(*(undefined8 *)*plVar5);
          if ((uVar8 & uVar9) != 0) {
            FID_conflict__assert
                      (u___u_is_odd___v_is_odd__180944e68,
                       u_D__a_1_s_target_x86_64_pc_window_180944d60,0x60);
          }
          local_54 = local_54 + (~(uint)uVar8 & ~(uint)uVar9 & 1);
          FUN_180558560(*plVar4,~uVar8,*puVar6,uVar3);
          FUN_180558560(*plVar5,~uVar9,*puVar6,uVar3);
        }
        iVar1 = FUN_18053fc40(plVar4);
        if ((iVar1 == 0) && (iVar1 = FUN_18053fc40(plVar5), iVar1 == 0)) {
          FID_conflict__assert
                    (u_BN_is_zero_u_____BN_is_zero_v__180944fa8,
                     u_D__a_1_s_target_x86_64_pc_window_180944ea0,0x6d);
        }
        for (local_50 = 0; local_50 < uVar3; local_50 = local_50 + 1) {
          *(ulonglong *)(*plVar5 + local_50 * 8) =
               *(ulonglong *)(*plVar5 + local_50 * 8) | *(ulonglong *)(*plVar4 + local_50 * 8);
        }
        *param_2 = local_54;
        local_3c = FUN_180545c30(param_1,*plVar5,uVar3);
      }
    }
    FUN_18053e400(param_5);
  }
  return local_3c;
}


/* address=180558bb0 name=FUN_180558bb0 */

ulonglong FUN_180558bb0(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint local_28;
  ulonglong local_20;
  
  if ((param_3 != 0) && (param_3 != 1)) {
    FID_conflict__assert
              (u_carry____0____carry____1_180945638,u_D__a_1_s_target_x86_64_pc_window_180945530,
               0x23e);
  }
  uVar1 = param_1 + param_3;
  local_28 = (uint)(uVar1 < param_3);
  local_20 = (ulonglong)(uVar1 + param_2 < uVar1);
  *param_4 = (longlong)(int)local_28 + local_20;
  return uVar1 + param_2;
}


/* address=180558ca0 name=FUN_180558ca0 */

longlong FUN_180558ca0(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong *param_4)

{
  ulonglong local_28;
  ulonglong local_20;
  
  if ((param_3 != 0) && (param_3 != 1)) {
    FID_conflict__assert
              (u_borrow____0____borrow____1_180945778,u_D__a_1_s_target_x86_64_pc_window_180945670,
               0x253);
  }
  local_20 = (ulonglong)(param_1 < param_2);
  local_28 = (ulonglong)(param_1 == param_2);
  *param_4 = local_20 | local_28 & param_3;
  return (param_1 - param_2) - param_3;
}


/* address=180558d70 name=FUN_180558d70 */

undefined8 FUN_180558d70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_18053fc40(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_18053fd10(param_2);
    if (iVar1 == 0) {
      FUN_18050f6f0(3,0,0x68,s_D__a_1_s_target_x86_64_pc_window_180945960,0xa8);
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_18053dc90(param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_180545d50(param_2,0x400);
        if (iVar1 == 0) {
          FUN_18050f6f0(3,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180945a80,0xb0);
          uVar2 = 0;
        }
        else {
          lVar3 = FUN_18053d970(param_1 + 0x18,param_2);
          if (lVar3 == 0) {
            FUN_18050f6f0(3,0,0x44,s_D__a_1_s_target_x86_64_pc_window_180945b10,0xb6);
            uVar2 = 0;
          }
          else {
            FUN_180545910(param_1 + 0x18);
            uVar2 = FUN_180552370(param_1 + 0x18);
            *(undefined8 *)(param_1 + 0x30) = uVar2;
            *(undefined8 *)(param_1 + 0x38) = 0;
            uVar2 = 1;
          }
        }
      }
      else {
        FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_1809459f0,0xac);
        uVar2 = 0;
      }
    }
  }
  else {
    FUN_18050f6f0(3,0,0x69,s_D__a_1_s_target_x86_64_pc_window_1809458d0,0xa4);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=180558f10 name=FUN_180558f10 */

undefined8
FUN_180558f10(undefined8 param_1,ulonglong param_2,longlong param_3,longlong param_4,
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
      lVar3 = FUN_180545f70(param_3 + local_40 * 8,uVar4,uVar2,
                            *(longlong *)(param_3 + local_40 * 8) * lVar1);
      uVar5 = lVar3 + local_38 + *(longlong *)(param_3 + (local_40 + uVar2) * 8);
      local_28 = (ulonglong)(uVar5 != *(ulonglong *)(param_3 + (local_40 + uVar2) * 8));
      local_20 = (ulonglong)(uVar5 <= *(ulonglong *)(param_3 + (local_40 + uVar2) * 8));
      local_38 = (local_38 | local_28) & local_20;
      *(ulonglong *)(param_3 + (local_40 + uVar2) * 8) = uVar5;
    }
    FUN_1805533f0(param_1,param_3 + uVar2 * 8,local_38,uVar4,uVar2);
    uVar4 = 1;
  }
  else {
    FUN_18050f6f0(3,0,0x42,s_D__a_1_s_target_x86_64_pc_window_180945ba0,0x127);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=180559170 name=FUN_180559170 */

undefined8 FUN_180559170(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 2) == 0) {
    if (*(int *)(param_3 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_180545ad0(param_2,(longlong)(*(int *)(param_3 + 0x20) << 1));
      if ((iVar1 != 0) &&
         (iVar1 = FUN_180545950(param_1,(longlong)*(int *)(param_3 + 0x20)), iVar1 != 0)) {
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x20);
        *(undefined4 *)(param_1 + 2) = 0;
        uVar2 = FUN_180558f10(*param_1,(longlong)*(int *)(param_1 + 1),*param_2,
                              (longlong)*(int *)(param_2 + 1),param_3);
        return uVar2;
      }
      uVar2 = 0;
    }
  }
  else {
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180945c30,0x144);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=180559290 name=FUN_180559290 */

undefined4
FUN_180559290(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  local_18 = 0;
  FUN_18053e250(param_5);
  lVar2 = FUN_18053e2b0(param_5);
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_180553a90(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_180553a10(lVar2,param_2,param_3,param_5);
    }
    if ((iVar1 != 0) && (iVar1 = FUN_180559170(param_1,lVar2,param_4), iVar1 != 0)) {
      local_18 = 1;
    }
  }
  FUN_18053e400(param_5);
  return local_18;
}


/* address=180559360 name=FUN_180559360 */

ulonglong FUN_180559360(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  if (param_1 % 2 != 1) {
    FID_conflict__assert(u_n___2____1_180946528,u_D__a_1_s_target_x86_64_pc_window_180946410,0x69);
  }
  local_48 = 1;
  local_38 = 0;
  for (local_40 = 0; local_40 < 0x40; local_40 = local_40 + 1) {
    uVar1 = local_48 & 1;
    uVar2 = param_1 & -uVar1;
    local_48 = ((local_48 ^ uVar2) >> 1) + (local_48 & uVar2);
    local_38 = (local_38 >> 1) + (DAT_180726738 & -uVar1);
  }
  return local_38;
}


/* address=180559470 name=FUN_180559470 */

void FUN_180559470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_180546fa0(param_5,param_2,param_3,param_4);
  FUN_180546fa0(param_1,param_3,param_2,param_4);
  FUN_180545bb0(param_1,-lVar1,param_1,param_5,param_4);
  return;
}


/* address=180559500 name=FUN_180559500 */

void FUN_180559500(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4,
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
    FUN_180533b50(param_1,0,local_res18 << 3);
  }
  else {
    uVar1 = FUN_180546620(param_1,local_res10,local_res18,*local_res20);
    *local_28 = uVar1;
    local_res8 = param_1;
    while (param_5 != 1) {
      uVar1 = FUN_180545f70(local_res8 + 8,local_res10,local_res18,local_res20[1]);
      local_28[1] = uVar1;
      if (param_5 == 2) {
        return;
      }
      uVar1 = FUN_180545f70(local_res8 + 0x10,local_res10,local_res18,local_res20[2]);
      local_28[2] = uVar1;
      if (param_5 == 3) {
        return;
      }
      uVar1 = FUN_180545f70(local_res8 + 0x18,local_res10,local_res18,local_res20[3]);
      local_28[3] = uVar1;
      param_5 = param_5 - 4;
      if (param_5 == 0) {
        return;
      }
      uVar1 = FUN_180545f70(local_res8 + 0x20,local_res10,local_res18,local_res20[4]);
      local_28[4] = uVar1;
      local_28 = local_28 + 4;
      local_res8 = local_res8 + 0x20;
      local_res20 = local_res20 + 4;
    }
  }
  return;
}


/* address=180559790 name=FUN_180559790 */

ulonglong FUN_180559790(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  int local_38;
  int local_34;
  uint local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  if (param_4 < 0) {
    FID_conflict__assert(u_cl_>__0_180946c60,u_D__a_1_s_target_x86_64_pc_window_180946b60,0x83);
  }
  local_28 = FUN_180546fa0(param_1,param_2,param_3,(longlong)param_4);
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


/* address=180559980 name=FUN_180559980 */

longlong FUN_180559980(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      int param_5,undefined8 param_6)

{
  longlong lVar1;
  int local_18;
  
  lVar1 = FUN_180559790(param_6,param_2,param_3,param_4,param_5);
  FUN_180559790(param_1,param_3,param_2,param_4,-param_5);
  if (param_5 < 0) {
    local_18 = -param_5;
  }
  else {
    local_18 = param_5;
  }
  FUN_180545bb0(param_1,-lVar1,param_1,param_6,(longlong)(param_4 + local_18));
  return -lVar1;
}


/* address=180559a50 name=FUN_180559a50 */

ulonglong FUN_180559a50(longlong param_1,longlong param_2,longlong param_3,uint param_4,int param_5,
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
    FID_conflict__assert
              (u_n2____0_____n2____n2___1______0_180946d70,
               u_D__a_1_s_target_x86_64_pc_window_180946c70,0xd5);
  }
  if ((param_5 < -8) || (0 < param_5)) {
    FID_conflict__assert
              (u__BN_MUL_RECURSIVE_SIZE_NORMAL_2_<_180946eb0,
               u_D__a_1_s_target_x86_64_pc_window_180946db0,0xd7);
  }
  if ((param_6 < -8) || (0 < param_6)) {
    FID_conflict__assert
              (u__BN_MUL_RECURSIVE_SIZE_NORMAL_2_<_180947020,
               u_D__a_1_s_target_x86_64_pc_window_180946f20,0xd8);
  }
  if (((param_4 == 8) && (param_5 == 0)) && (param_6 == 0)) {
    uVar1 = FUN_1805484e0(param_1,param_2,param_3);
  }
  else if ((int)param_4 < 0x10) {
    FUN_180559500(param_1,param_2,(longlong)(int)(param_4 + param_5),param_3,
                  (longlong)(int)(param_4 + param_6));
    uVar1 = (ulonglong)(uint)(param_5 + param_6);
    if (param_5 + param_6 < 0) {
      uVar1 = FUN_180533b50(param_1 + (longlong)(int)(param_5 + param_4 * 2 + param_6) * 8,0,
                            (longlong)-(param_5 + param_6) << 3);
    }
  }
  else {
    local_94 = (int)param_4 / 2;
    uVar7 = CONCAT44(uVar9,local_94 - (local_94 + param_5));
    uVar2 = FUN_180559980(param_7,param_2,param_2 + (longlong)local_94 * 8,local_94 + param_5,uVar7,
                          param_7 + (longlong)(int)param_4 * 8);
    uVar1 = param_7 + (longlong)(int)param_4 * 8;
    uVar8 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),(local_94 + param_6) - local_94);
    uVar3 = FUN_180559980(param_7 + (longlong)local_94 * 8,param_3 + (longlong)local_94 * 8,param_3,
                          local_94 + param_6,uVar8,uVar1);
    if (((local_94 == 4) && (param_5 == 0)) && (param_6 == 0)) {
      FUN_1805471d0(param_7 + (longlong)(int)param_4 * 8,param_7,param_7 + 0x20);
      FUN_1805471d0(param_1,param_2,param_3);
      FUN_1805471d0(param_1 + (longlong)(int)param_4 * 8,param_2 + 0x20,param_3 + 0x20);
    }
    else if (((local_94 == 8) && (param_5 == 0)) && (param_6 == 0)) {
      FUN_1805484e0(param_7 + (longlong)(int)param_4 * 8,param_7,param_7 + 0x40);
      FUN_1805484e0(param_1,param_2,param_3);
      FUN_1805484e0(param_1 + (longlong)(int)param_4 * 8,param_2 + 0x40,param_3 + 0x40);
    }
    else {
      lVar4 = param_7 + (longlong)(int)(param_4 << 1) * 8;
      uVar1 = uVar1 & 0xffffffff00000000;
      uVar8 = uVar8 & 0xffffffff00000000;
      FUN_180559a50(param_7 + (longlong)(int)param_4 * 8,param_7,param_7 + (longlong)local_94 * 8,
                    local_94,uVar8,uVar1,lVar4);
      FUN_180559a50(param_1,param_2,param_3,local_94,uVar8 & 0xffffffff00000000,
                    uVar1 & 0xffffffff00000000,lVar4);
      FUN_180559a50(param_1 + (longlong)(int)param_4 * 8,param_2 + (longlong)local_94 * 8,
                    param_3 + (longlong)local_94 * 8,local_94,param_5,param_6,lVar4);
    }
    lVar4 = FUN_180546d70(param_7,param_1,param_1 + (longlong)(int)param_4 * 8,
                          (longlong)(int)param_4);
    lVar5 = FUN_180546fa0(param_7 + (longlong)(int)(param_4 << 1) * 8,param_7,
                          param_7 + (longlong)(int)param_4 * 8,(longlong)(int)param_4);
    lVar6 = FUN_180546d70(param_7 + (longlong)(int)param_4 * 8,param_7,
                          param_7 + (longlong)(int)param_4 * 8,(longlong)(int)param_4);
    FUN_180545bb0(param_7 + (longlong)(int)param_4 * 8,uVar2 ^ uVar3,
                  param_7 + (longlong)(int)(param_4 << 1) * 8,param_7 + (longlong)(int)param_4 * 8,
                  (longlong)(int)param_4);
    local_90 = FUN_180533940(uVar2 ^ uVar3,lVar4 - lVar5,lVar4 + lVar6);
    lVar4 = FUN_180546d70(param_1 + (longlong)local_94 * 8,param_1 + (longlong)local_94 * 8,
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
      FID_conflict__assert(u_c____0_180947190,u_D__a_1_s_target_x86_64_pc_window_180947090,299);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* address=18055a2d0 name=FUN_18055a2d0 */

ulonglong FUN_18055a2d0(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5
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
    FID_conflict__assert
              (u_n____0_____n____n___1______0_1809472a0,u_D__a_1_s_target_x86_64_pc_window_1809471a0
               ,0x13a);
  }
  if (((int)param_5 < 0) || ((int)param_4 <= (int)param_5)) {
    FID_conflict__assert
              (u_0_<__tna_&&_tna_<_n_1809473e0,u_D__a_1_s_target_x86_64_pc_window_1809472e0,0x13c);
  }
  if (((int)param_6 < 0) || ((int)param_4 <= (int)param_6)) {
    FID_conflict__assert
              (u_0_<__tnb_&&_tnb_<_n_180947510,u_D__a_1_s_target_x86_64_pc_window_180947410,0x13d);
  }
  if (((int)(param_5 - param_6) < -1) || (1 < (int)(param_5 - param_6))) {
    FID_conflict__assert
              (u__1_<__tna___tnb_&&_tna___tnb_<__1_180947640,
               u_D__a_1_s_target_x86_64_pc_window_180947540,0x13e);
  }
  iVar1 = param_4 * 2;
  if ((int)param_4 < 8) {
    FUN_180559500(param_1,param_2,(longlong)(int)(param_4 + param_5),param_3,
                  (longlong)(int)(param_4 + param_6));
    uVar2 = FUN_180533b50(param_1 + (longlong)iVar1 * 8 + (longlong)(int)param_5 * 8 +
                          (longlong)(int)param_6 * 8,0,(longlong)(int)((iVar1 - param_5) - param_6))
    ;
  }
  else {
    uVar8 = CONCAT44(uVar10,param_4 - param_5);
    uVar3 = FUN_180559980(param_7,param_2,param_2 + (longlong)(int)param_4 * 8,param_5,uVar8,
                          param_7 + (longlong)iVar1 * 8);
    uVar2 = param_7 + (longlong)iVar1 * 8;
    uVar9 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),param_6 - param_4);
    uVar4 = FUN_180559980(param_7 + (longlong)(int)param_4 * 8,param_3 + (longlong)(int)param_4 * 8,
                          param_3,param_6,uVar9,uVar2);
    if (param_4 == 8) {
      FUN_1805484e0(param_7 + (longlong)iVar1 * 8,param_7,param_7 + 0x40);
      FUN_1805484e0(param_1,param_2,param_3);
      FUN_180559500(param_1 + (longlong)iVar1 * 8,param_2 + 0x40,(longlong)(int)param_5,
                    param_3 + 0x40,(longlong)(int)param_6);
      FUN_180533b50(param_1 + (longlong)(int)(iVar1 + param_5 + param_6) * 8,0,
                    (longlong)(int)((iVar1 - param_5) - param_6) << 3);
    }
    else {
      lVar5 = param_7 + (longlong)(int)(param_4 << 2) * 8;
      uVar2 = uVar2 & 0xffffffff00000000;
      uVar9 = uVar9 & 0xffffffff00000000;
      FUN_180559a50(param_7 + (longlong)iVar1 * 8,param_7,param_7 + (longlong)(int)param_4 * 8,
                    param_4,uVar9,uVar2,lVar5);
      uVar2 = uVar2 & 0xffffffff00000000;
      uVar9 = uVar9 & 0xffffffff00000000;
      FUN_180559a50(param_1,param_2,param_3,param_4,uVar9,uVar2,lVar5);
      uVar10 = (undefined4)(uVar9 >> 0x20);
      uVar11 = (undefined4)(uVar2 >> 0x20);
      FUN_180533b50(param_1 + (longlong)iVar1 * 8,0,(longlong)iVar1 << 3);
      local_b4 = param_4;
      if (((int)param_5 < 0x10) && ((int)param_6 < 0x10)) {
        FUN_180559500(param_1 + (longlong)iVar1 * 8,param_2 + (longlong)(int)param_4 * 8,
                      (longlong)(int)param_5,param_3 + (longlong)(int)param_4 * 8,
                      (longlong)(int)param_6);
      }
      else {
        do {
          local_b4 = (int)local_b4 / 2;
          if (((int)local_b4 < (int)param_5) || ((int)local_b4 < (int)param_6)) {
            FUN_18055a2d0(param_1 + (longlong)iVar1 * 8,param_2 + (longlong)(int)param_4 * 8,
                          param_3 + (longlong)(int)param_4 * 8,local_b4,
                          CONCAT44(uVar10,param_5 - local_b4),CONCAT44(uVar11,param_6 - local_b4),
                          lVar5);
            goto LAB_18055a9be;
          }
        } while ((local_b4 != param_5) && (local_b4 != param_6));
        FUN_180559a50(param_1 + (longlong)iVar1 * 8,param_2 + (longlong)(int)param_4 * 8,
                      param_3 + (longlong)(int)param_4 * 8,local_b4,
                      CONCAT44(uVar10,param_5 - local_b4),CONCAT44(uVar11,param_6 - local_b4),lVar5)
        ;
      }
    }
LAB_18055a9be:
    lVar5 = FUN_180546d70(param_7,param_1,param_1 + (longlong)iVar1 * 8,(longlong)iVar1);
    lVar6 = FUN_180546fa0(param_7 + (longlong)(int)(param_4 << 2) * 8,param_7,
                          param_7 + (longlong)iVar1 * 8,(longlong)iVar1);
    lVar7 = FUN_180546d70(param_7 + (longlong)iVar1 * 8,param_7,param_7 + (longlong)iVar1 * 8,
                          (longlong)iVar1);
    FUN_180545bb0(param_7 + (longlong)iVar1 * 8,uVar3 ^ uVar4,
                  param_7 + (longlong)(int)(param_4 << 2) * 8,param_7 + (longlong)iVar1 * 8,
                  (longlong)iVar1);
    local_a8 = FUN_180533940(uVar3 ^ uVar4,lVar5 - lVar6,lVar5 + lVar7);
    lVar5 = FUN_180546d70(param_1 + (longlong)(int)param_4 * 8,param_1 + (longlong)(int)param_4 * 8,
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
      FID_conflict__assert(u_c____0_180947790,u_D__a_1_s_target_x86_64_pc_window_180947690,0x19d);
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* address=18055ac80 name=FUN_18055ac80 */

undefined4
FUN_18055ac80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

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
    FUN_18053db30(param_1);
    return 1;
  }
  local_28 = 0;
  FUN_18053e250(param_4);
  if (((param_1 != param_2) && (local_38 = param_1, param_1 != param_3)) ||
     (local_38 = (undefined8 *)FUN_18053e2b0(param_4), local_38 != (undefined8 *)0x0)) {
    *(uint *)(local_38 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
    iVar6 = iVar2 - iVar1;
    if ((iVar2 == iVar1) && (iVar2 == 8)) {
      iVar2 = FUN_180545950(local_38,0x10);
      if (iVar2 == 0) goto LAB_18055b0ac;
      *(undefined4 *)(local_38 + 1) = 0x10;
      FUN_1805484e0(*local_38,*param_2,*param_3);
    }
    else {
      iVar7 = iVar2 + iVar1;
      if (((iVar2 < DAT_1807266a8) || ((iVar1 < DAT_1807266a8 || (iVar6 < -1)))) || (1 < iVar6)) {
        iVar6 = FUN_180545950(local_38,(longlong)iVar7);
        if (iVar6 == 0) goto LAB_18055b0ac;
        *(int *)(local_38 + 1) = iVar7;
        FUN_180559500(*local_38,*param_2,(longlong)iVar2,*param_3,(longlong)iVar1);
      }
      else {
        if (iVar6 < 0) {
          local_48 = FUN_1805455e0((longlong)iVar1);
        }
        else {
          local_48 = FUN_1805455e0((longlong)iVar2);
        }
        iVar6 = 1 << (local_48 - 1U & 0x1f);
        if ((iVar2 < iVar6) && (iVar1 < iVar6)) {
          FID_conflict__assert
                    (u_j_<__al____j_<__bl_1809478a0,u_D__a_1_s_target_x86_64_pc_window_1809477a0,
                     0x1d1);
        }
        puVar4 = (undefined8 *)FUN_18053e2b0(param_4);
        if (puVar4 == (undefined8 *)0x0) goto LAB_18055b0ac;
        if ((iVar6 < iVar2) || (iVar6 < iVar1)) {
          if ((iVar2 < iVar6) || (iVar1 < iVar6)) {
            FID_conflict__assert
                      (u_al_>__j____bl_>__j_1809479d0,u_D__a_1_s_target_x86_64_pc_window_1809478d0,
                       0x1dd);
          }
          iVar3 = FUN_180545950(puVar4,(longlong)(iVar6 << 3));
          if ((iVar3 == 0) || (iVar3 = FUN_180545950(local_38,(longlong)(iVar6 << 2)), iVar3 == 0))
          goto LAB_18055b0ac;
          FUN_18055a2d0(*local_38,*param_2,*param_3,iVar6,CONCAT44(uVar8,iVar2 - iVar6),
                        iVar1 - iVar6,*puVar4);
        }
        else {
          iVar3 = FUN_180545950(puVar4,(longlong)(iVar6 << 2));
          if ((iVar3 == 0) || (iVar3 = FUN_180545950(local_38,(longlong)(iVar6 << 1)), iVar3 == 0))
          goto LAB_18055b0ac;
          FUN_180559a50(*local_38,*param_2,*param_3,iVar6,CONCAT44(uVar8,iVar2 - iVar6),
                        iVar1 - iVar6,*puVar4);
        }
        *(int *)(local_38 + 1) = iVar7;
      }
    }
    if ((param_1 == local_38) || (lVar5 = FUN_18053d970(param_1,local_38), lVar5 != 0)) {
      local_28 = 1;
    }
  }
LAB_18055b0ac:
  FUN_18053e400(param_4);
  return local_28;
}


/* address=18055b0d0 name=FUN_18055b0d0 */

void FUN_18055b0d0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

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
      uVar1 = FUN_180546620(local_28,local_20,param_3 - 1,*param_2);
      param_1[param_3] = uVar1;
      local_28 = param_1 + 3;
    }
    if (2 < param_3) {
      for (local_18 = param_3 - 2; local_18 != 0; local_18 = local_18 + -1) {
        uVar1 = FUN_180545f70(local_28,local_20 + 1,local_18,*local_20);
        local_28[local_18] = uVar1;
        local_28 = local_28 + 2;
        local_20 = local_20 + 1;
      }
    }
    FUN_180546d70(param_1,param_1,param_1,param_3 * 2);
    FUN_180546ae0(param_4,param_2,param_3);
    FUN_180546d70(param_1,param_1,param_4,param_3 * 2);
  }
  return;
}


/* address=18055b280 name=FUN_18055b280 */

ulonglong FUN_18055b280(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_48;
  longlong local_38;
  ulonglong local_30;
  
  if ((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) {
    FID_conflict__assert
              (u_n2____0_____n2____n2___1______0_180947b80,
               u_D__a_1_s_target_x86_64_pc_window_180947a80,0x251);
  }
  if (param_3 == 4) {
    uVar1 = FUN_180550f20(param_1,param_2);
  }
  else if (param_3 == 8) {
    uVar1 = FUN_18054d120(param_1,param_2);
  }
  else if (param_3 < 0x10) {
    uVar1 = FUN_18055b0d0(param_1,param_2,param_3,param_4);
  }
  else {
    local_30 = param_3 / 2;
    lVar2 = param_4 + param_3 * 0x10;
    FUN_180559470(param_4,param_2,param_2 + local_30 * 8,local_30,param_4 + local_30 * 8);
    FUN_18055b280(param_4 + param_3 * 8,param_4,local_30,lVar2);
    FUN_18055b280(param_1,param_2,local_30,lVar2);
    FUN_18055b280(param_1 + param_3 * 8,param_2 + local_30 * 8,local_30,lVar2);
    lVar2 = FUN_180546d70(param_4,param_1,param_1 + param_3 * 8,param_3);
    lVar3 = FUN_180546fa0(param_4 + param_3 * 8,param_4,param_4 + param_3 * 8,param_3);
    local_38 = FUN_180546d70(param_1 + local_30 * 8,param_1 + local_30 * 8,param_4 + param_3 * 8,
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
      FID_conflict__assert(u_c____0_180947cc0,u_D__a_1_s_target_x86_64_pc_window_180947bc0,0x284);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* address=18055b630 name=FUN_18055b630 */

undefined8 FUN_18055b630(int param_1)

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


/* address=18055b6c0 name=FUN_18055b6c0 */

undefined8 FUN_18055b6c0(longlong param_1)

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


/* address=18055b6f0 name=FUN_18055b6f0 */

undefined8 FUN_18055b6f0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  do {
    iVar1 = FUN_180541ca0(param_1,param_2,1,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_180552c50(param_1);
  } while (iVar1 != 0);
  return 1;
}


/* address=18055b740 name=FUN_18055b740 */

undefined4
FUN_18055b740(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_28;
  ulonglong local_20;
  
  local_28 = 0;
  FUN_18053e250(param_5);
  lVar3 = FUN_18053e2b0(param_5);
  if ((((lVar3 != 0) && (iVar2 = FUN_180541ca0(param_1,param_2,0,1), iVar2 != 0)) &&
      (iVar2 = FUN_18053ec30(0,lVar3,param_1,param_3,param_5), iVar2 != 0)) &&
     (iVar2 = FUN_18053e730(param_1,param_1,lVar3), iVar2 != 0)) {
    if (param_4 == 0) {
      iVar2 = FUN_18053e590(param_1,1);
    }
    else {
      iVar2 = FUN_18053e440(param_1,param_1,param_4);
    }
    if (iVar2 != 0) {
      uVar4 = FUN_18055b6c0(param_1);
      do {
        local_20 = 1;
        while( true ) {
          if (uVar4 <= local_20) {
            local_28 = 1;
            goto LAB_18055b8ab;
          }
          uVar1 = FUN_180552b10(param_1,*(undefined2 *)(&DAT_180726760 + local_20 * 2));
          if (uVar1 < 2) break;
          local_20 = local_20 + 1;
        }
        iVar2 = FUN_18053e440(param_1,param_1,param_3);
      } while (iVar2 != 0);
    }
  }
LAB_18055b8ab:
  FUN_18053e400(param_5);
  return local_28;
}


/* address=18055b8d0 name=FUN_18055b8d0 */

undefined4
FUN_18055b8d0(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,undefined8 param_5)

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
  FUN_18053e250(param_5);
  uVar3 = FUN_18053e2b0(param_5);
  uVar4 = FUN_18053e2b0(param_5);
  lVar5 = FUN_18053e2b0(param_5);
  if ((((lVar5 != 0) && (iVar2 = FUN_180540270(lVar5,param_3), iVar2 != 0)) &&
      (iVar2 = FUN_180541ca0(uVar4,param_2 + -1,0,1), iVar2 != 0)) &&
     ((iVar2 = FUN_18053ec30(0,uVar3,uVar4,lVar5,param_5), iVar2 != 0 &&
      (iVar2 = FUN_18053e730(uVar4,uVar4,uVar3), iVar2 != 0)))) {
    if (param_4 == 0) {
      iVar2 = FUN_18053e590(uVar4,1);
    }
    else {
      iVar2 = FUN_180540270(uVar3,param_4);
      if (iVar2 == 0) goto LAB_18055bb1c;
      iVar2 = FUN_18053e440(uVar4,uVar4,uVar3);
    }
    if (((iVar2 != 0) && (iVar2 = FUN_180540060(param_1,uVar4), iVar2 != 0)) &&
       (iVar2 = FUN_18053e590(param_1,1), iVar2 != 0)) {
      uVar6 = FUN_18055b6c0(param_1);
      do {
        local_28 = 1;
        while( true ) {
          if (uVar6 <= local_28) {
            local_38 = 1;
            goto LAB_18055bb1c;
          }
          sVar1 = FUN_180552b10(param_1,*(undefined2 *)(&DAT_180726760 + local_28 * 2));
          if ((sVar1 == 0) ||
             (sVar1 = FUN_180552b10(uVar4,*(undefined2 *)(&DAT_180726760 + local_28 * 2)),
             sVar1 == 0)) break;
          local_28 = local_28 + 1;
        }
        iVar2 = FUN_18053e440(param_1,param_1,param_3);
      } while ((iVar2 != 0) && (iVar2 = FUN_18053e440(uVar4,uVar4,lVar5), iVar2 != 0));
    }
  }
LAB_18055bb1c:
  FUN_18053e400(param_5);
  return local_38;
}


/* address=18055bb40 name=FUN_18055bb40 */

undefined8 FUN_18055bb40(undefined2 *param_1,undefined8 param_2)

{
  short sVar1;
  ulonglong uVar2;
  ulonglong local_18;
  
  uVar2 = FUN_18055b6c0(param_2);
  local_18 = 1;
  while( true ) {
    if (uVar2 <= local_18) {
      return 0;
    }
    sVar1 = FUN_180552b10(param_2,*(undefined2 *)(&DAT_180726760 + local_18 * 2));
    if (sVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  *param_1 = *(undefined2 *)(&DAT_180726760 + local_18 * 2);
  return 1;
}


/* address=18055bbd0 name=FUN_18055bbd0 */

undefined8 FUN_18055bbd0(undefined8 param_1,undefined8 param_2)

{
  FUN_18055c160(param_1,param_2,&DAT_180726050);
  return 1;
}


/* address=18055bcf0 name=FUN_18055bcf0 */

void FUN_18055bcf0(undefined8 param_1)

{
  FUN_18058f610(param_1);
  return;
}


/* address=18055bd10 name=FUN_18055bd10 */

void FUN_18055bd10(longlong param_1,byte *param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  byte *local_res10;
  undefined auStack_68 [32];
  ulonglong local_48;
  byte local_40 [48];
  ulonglong local_10;
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_68;
  local_res10 = param_2;
  if (param_4 != 0) {
    if (0x30 < param_4) goto LAB_18055be00;
    FUN_180533ab0(local_40,param_2,0x30);
    for (local_48 = 0; local_48 < param_4; local_48 = local_48 + 1) {
      local_40[local_48] = local_40[local_48] ^ *(byte *)(param_3 + local_48);
    }
    local_res10 = local_40;
  }
  iVar1 = FUN_180581cd0(param_1,local_res10,0x30);
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0x118) = 1;
  }
LAB_18055be00:
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=18055be20 name=FUN_18055be20 */

void FUN_18055be20(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_78;
  if (((param_3 < 0x10001) && (*(ulonglong *)(param_1 + 0x118) <= DAT_180726008)) &&
     ((local_res10 = param_2, local_res18 = param_3, param_5 == 0 ||
      (iVar1 = FUN_180581cd0(param_1,param_4,param_5), iVar1 != 0)))) {
    for (; 0xf < local_res18; local_res18 = local_res18 - local_48) {
      local_48 = DAT_180726040;
      if (local_res18 < DAT_180726040) {
        local_48 = local_res18;
      }
      local_48 = local_48 & 0xfffffffffffffff0;
      local_38 = local_48 / 0x10;
      if (*(longlong *)(param_1 + 0x100) == 0) {
        for (local_40 = 0; local_40 < local_48; local_40 = local_40 + 0x10) {
          FUN_180581c80(param_1,1);
          local_30 = param_1 + 0x108;
          (**(code **)(param_1 + 0xf8))(local_30,local_res10 + local_40,param_1);
        }
      }
      else {
        FUN_180533b50(local_res10,0,local_48);
        FUN_180581c80(param_1,1);
        local_58 = param_1 + 0x108;
        (**(code **)(param_1 + 0x100))(local_res10,local_res10,local_38,param_1);
        FUN_180581c80(param_1);
      }
      local_res10 = local_res10 + local_48;
    }
    if (local_res18 != 0) {
      FUN_180581c80(param_1,1);
      (**(code **)(param_1 + 0xf8))(param_1 + 0x108,local_28,param_1);
      FUN_180533ab0(local_res10,local_28,local_res18);
    }
    iVar1 = FUN_180581cd0(param_1,param_4,param_5);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 1;
      FUN_18053d4e0();
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=18055c130 name=FUN_18055c130 */

void FUN_18055c130(undefined8 param_1)

{
  FUN_18058f7b0(param_1,0x120);
  return;
}


/* address=18055c160 name=FUN_18055c160 */

void FUN_18055c160(longlong param_1,ulonglong param_2,longlong param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_298;
  if (param_2 != 0) {
    local_248 = FUN_180581e60();
    iVar1 = FUN_18055c740();
    if ((iVar1 == 0) || (iVar1 = FUN_180581eb0(local_f8,0x20), iVar1 == 0)) {
      if ((local_248 == 0) && (iVar1 = FUN_1806091a0(), iVar1 == 0)) {
        iVar1 = FUN_18055c720();
        if (iVar1 == 0) {
          FUN_1806090e0(local_f8,0x20);
        }
        else {
          iVar1 = FUN_18055c560(local_f8,0x20);
          if ((iVar1 == 0) && (iVar1 = FUN_180581eb0(local_f8,0x20), iVar1 == 0)) {
            FUN_1806090e0(local_f8,0x20);
          }
        }
      }
      else {
        FUN_180533b50(local_f8,0,0x20);
      }
    }
    for (local_260 = 0; local_260 < 0x20; local_260 = local_260 + 1) {
      local_f8[local_260] = local_f8[local_260] ^ *(byte *)(param_3 + local_260);
    }
    local_268 = (undefined *)FUN_18059e360(1);
    if (local_268 == (undefined *)0x0) {
      local_268 = (undefined *)FUN_18058f4e0(0x130);
      if ((local_268 == (undefined *)0x0) ||
         (iVar1 = FUN_18059e3c0(1,local_268,&LAB_180581e70), iVar1 == 0)) {
        local_268 = local_228;
      }
      *(undefined4 *)(local_268 + 300) = 0;
      puVar3 = local_d8;
      for (lVar2 = 0x30; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_240 = 0;
      FUN_180581f90(local_268,local_78,local_d8,&local_240);
      iVar1 = FUN_18055c590(local_268,local_78,local_d8,local_240);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(local_268 + 0x128) = 0;
      *(longlong *)(local_268 + 0x120) = local_248;
    }
    if ((DAT_180726048 <= *(uint *)(local_268 + 0x128)) ||
       (*(longlong *)(local_268 + 0x120) != local_248)) {
      puVar3 = local_a8;
      for (lVar2 = 0x30; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_238 = 0;
      FUN_180581f90(local_268,local_48,local_a8,&local_238);
      iVar1 = FUN_18055bd10(local_268,local_48,local_a8,local_238);
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
      iVar1 = FUN_18055be20(local_268,local_res8,local_250,local_f8);
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
      FUN_18055c130(local_268);
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_298);
  return;
}


/* address=18055c560 name=FUN_18055c560 */

undefined8 FUN_18055c560(undefined8 param_1,undefined8 param_2)

{
  FUN_1806090e0(param_1,param_2);
  return 1;
}


/* address=18055c590 name=FUN_18055c590 */

void FUN_18055c590(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined auStack_88 [32];
  undefined8 local_68;
  ulonglong local_58;
  ulonglong local_50;
  byte local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_88;
  if (param_4 < 0x31) {
    FUN_180533ab0(local_48,param_2,0x30);
    for (local_58 = 0; local_58 < param_4; local_58 = local_58 + 1) {
      local_48[local_58] = local_48[local_58] ^ *(byte *)(param_3 + local_58);
    }
    for (local_50 = 0; local_50 < 0x30; local_50 = local_50 + 1) {
      local_48[local_50] = local_48[local_50] ^ (&DAT_180726010)[local_50];
    }
    local_68 = 0x20;
    uVar1 = FUN_18055f7b0(param_1,0,param_1 + 0xf8,local_48);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    FUN_180533ab0(param_1 + 0x108,local_48 + 0x20,0x10);
    *(undefined8 *)(param_1 + 0x118) = 1;
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=18055c720 name=FUN_18055c720 */

void FUN_18055c720(void)

{
  FUN_180534030();
  return;
}


/* address=18055c740 name=FUN_18055c740 */

undefined4 FUN_18055c740(void)

{
  int iVar1;
  
  iVar1 = FUN_180534030();
  if ((iVar1 != 0) && (iVar1 = FUN_180533eb0(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=18055c780 name=FUN_18055c780 */

ulonglong FUN_18055c780(undefined8 *param_1,ulonglong param_2,longlong param_3)

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
    uVar1 = FUN_1805338a0(local_18);
    uVar2 = FUN_1805337e0(*param_1,param_3);
    uVar1 = uVar1 & uVar2;
  }
  return uVar1;
}


/* address=18055c850 name=FUN_18055c850 */

undefined8
FUN_18055c850(longlong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong *param_4,
             longlong param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong local_10;
  
  for (local_10 = param_5; (local_10 != 0 && (param_4[local_10 + -1] == 0));
      local_10 = local_10 + -1) {
  }
  if ((local_10 == 0) || ((local_10 == 1 && (*param_4 <= param_3)))) {
    FUN_18050f6f0(3,0,0x6c,s_D__a_1_s_target_x86_64_pc_window_180948160,0xe6);
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


/* address=18055c9c0 name=FUN_18055c9c0 */

int FUN_18055c9c0(ulonglong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar2 = FUN_1805338a0(param_1 << 0x20);
  uVar3 = FUN_180533940(uVar2,param_1 >> 0x20,param_1);
  uVar4 = FUN_1805338a0(uVar3 << 0x30);
  uVar3 = FUN_180533940(uVar4,uVar3 >> 0x10,uVar3);
  uVar5 = FUN_1805338a0(uVar3 << 0x38);
  uVar3 = FUN_180533940(uVar5,uVar3 >> 8,uVar3);
  uVar6 = FUN_1805338a0(uVar3 << 0x3c);
  uVar3 = FUN_180533940(uVar6,uVar3 >> 4,uVar3);
  uVar7 = FUN_1805338a0(uVar3 << 0x3e);
  lVar8 = FUN_180533940(uVar7,uVar3 >> 2,uVar3);
  uVar1 = FUN_1805338a0(lVar8 << 0x3f);
  return ((uint)uVar2 & 0x20) + ((uint)uVar4 & 0x10) + ((uint)uVar5 & 8) + ((uint)uVar6 & 4) +
         ((uint)uVar7 & 2) + (uVar1 & 1);
}


/* address=18055cba0 name=FUN_18055cba0 */

void FUN_18055cba0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180562790();
  FUN_18059e1b0(uVar1,&LAB_180562840);
  FUN_180562780();
  return;
}


/* address=18055cc00 name=FUN_18055cc00 */

void FUN_18055cc00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180562950();
  FUN_18059e1b0(uVar1,&LAB_180562a00);
  FUN_180562940();
  return;
}


/* address=18055cd20 name=FUN_18055cd20 */

undefined4 FUN_18055cd20(void)

{
  int iVar1;
  
  iVar1 = FUN_180534fa0();
  if ((iVar1 != 0) && (iVar1 = FUN_180535e80(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=18055cd60 name=FUN_18055cd60 */

undefined FUN_18055cd60(undefined *param_1)

{
  return *param_1;
}


/* address=18055cd80 name=FUN_18055cd80 */

undefined FUN_18055cd80(longlong param_1)

{
  return *(undefined *)(param_1 + 1);
}


/* address=18055cda0 name=FUN_18055cda0 */

undefined FUN_18055cda0(longlong param_1)

{
  return *(undefined *)(param_1 + 2);
}


/* address=18055cdc0 name=FUN_18055cdc0 */

undefined FUN_18055cdc0(longlong param_1)

{
  return *(undefined *)(param_1 + 3);
}


/* address=18055cde0 name=FUN_18055cde0 */

void FUN_18055cde0(undefined8 param_1)

{
  FUN_180533b50(param_1,0,0x248);
  return;
}


/* address=18055ce90 name=FUN_18055ce90 */

void FUN_18055ce90(longlong param_1)

{
  if (param_1 != 0) {
    FUN_18055cf60(param_1);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=18055ced0 name=FUN_18055ced0 */

undefined8
FUN_18055ced0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    FUN_18050f6f0(0x1e,0,0x7c,s_D__a_1_s_target_x86_64_pc_window_180948ec0,0x41);
    *param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_18055d860(param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar1;
}


/* address=18055cf60 name=FUN_18055cf60 */

void FUN_18055cf60(longlong *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    *param_1 = 0;
  }
  return;
}


/* address=18055cfa0 name=FUN_18055cfa0 */

undefined8
FUN_18055cfa0(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar2;
  longlong local_10 [2];
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (param_8 + *(byte *)(*param_1 + 2) < param_8) {
    FUN_18050f6f0(0x1e,0,0x75,s_D__a_1_s_target_x86_64_pc_window_180948fe0,CONCAT44(uVar2,0x7b));
  }
  else if (param_4 < param_8) {
    FUN_18050f6f0(0x1e,0,0x67,s_D__a_1_s_target_x86_64_pc_window_180949070,CONCAT44(uVar2,0x80));
  }
  else {
    iVar1 = FUN_18055f930(param_7,param_8,param_2,param_4);
    if (iVar1 == 0) {
      FUN_18050f6f0(0x1e,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180949100,CONCAT44(uVar2,0x85));
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
  FUN_180533b50(param_2,0,param_4);
  *param_3 = 0;
  return 0;
}


/* address=18055d1c0 name=FUN_18055d1c0 */

undefined8
FUN_18055d1c0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,longlong param_7,ulonglong param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  iVar1 = FUN_18055f930(param_7,param_8,param_2,param_4);
  if (iVar1 == 0) {
    FUN_18050f6f0(0x1e,0,0x73,s_D__a_1_s_target_x86_64_pc_window_1809492b0,CONCAT44(uVar2,0xbf));
  }
  else if (*(longlong *)(*param_1 + 0x20) == 0) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      FID_conflict__assert
                (u_ctx_>tag_len_180949448,u_D__a_1_s_target_x86_64_pc_window_180949340,0xcd);
    }
    if (param_8 < *(byte *)(param_1 + 0x48)) {
      FUN_18050f6f0(0x1e,0,0x65,s_D__a_1_s_target_x86_64_pc_window_180949470,0xd0);
    }
    else {
      param_8 = param_8 - *(byte *)(param_1 + 0x48);
      if (param_4 < param_8) {
        FUN_18050f6f0(0x1e,0,0x67,s_D__a_1_s_target_x86_64_pc_window_180949500,0xd6);
      }
      else {
        iVar1 = FUN_18055d640(param_1,param_2,param_5,param_6,param_7,param_8,param_7 + param_8,
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
  FUN_180533b50(param_2,0,param_4);
  *param_3 = 0;
  return 0;
}


/* address=18055d440 name=FUN_18055d440 */

undefined8
FUN_18055d440(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12,
             undefined8 param_13)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar1 = FUN_18055f930(param_8,param_9,param_2,param_9);
  if (((iVar1 == 0) || (iVar1 = FUN_180533650(param_2,param_9,param_3,param_5), iVar1 != 0)) ||
     (iVar1 = FUN_180533650(param_8,param_9,param_3,param_5), iVar1 != 0)) {
    FUN_18050f6f0(0x1e,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180949190,CONCAT44(uVar2,0xa2));
  }
  else if ((*(int *)(*param_1 + 4) == 0) && (param_11 != 0)) {
    FUN_18050f6f0(0x1e,0,0x70,s_D__a_1_s_target_x86_64_pc_window_180949220,CONCAT44(uVar2,0xa7));
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x28))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12,param_13);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_180533b50(param_2,0,param_9);
  FUN_180533b50(param_3,0,param_5);
  *param_4 = 0;
  return 0;
}


/* address=18055d640 name=FUN_18055d640 */

undefined8
FUN_18055d640(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  iVar1 = FUN_18055f930(param_5,param_6,param_2,param_6);
  if (iVar1 == 0) {
    FUN_18050f6f0(0x1e,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180949590,CONCAT44(uVar2,0xee));
  }
  else if (*(longlong *)(*param_1 + 0x30) == 0) {
    FUN_18050f6f0(0x1e,0,0x68,s_D__a_1_s_target_x86_64_pc_window_180949620,CONCAT44(uVar2,0xf3));
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x30))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_180533b50(param_2,0,param_6);
  return 0;
}


/* address=18055d780 name=FUN_18055d780 */

undefined8 FUN_18055d780(undefined8 *param_1)

{
  return *param_1;
}


/* address=18055d7a0 name=FUN_18055d7a0 */

void FUN_18055d7a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180563250();
  FUN_18059e1b0(uVar1,&LAB_180563300);
  FUN_180563240();
  return;
}


/* address=18055d7d0 name=FUN_18055d7d0 */

void FUN_18055d7d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180563330();
  FUN_18059e1b0(uVar1,&LAB_1805633e0);
  FUN_180563320();
  return;
}


/* address=18055d800 name=FUN_18055d800 */

void FUN_18055d800(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180563690();
  FUN_18059e1b0(uVar1,&LAB_180563740);
  FUN_180563680();
  return;
}


/* address=18055d830 name=FUN_18055d830 */

void FUN_18055d830(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180563770();
  FUN_18059e1b0(uVar1,&LAB_180563820);
  FUN_180563760();
  return;
}


/* address=18055d860 name=FUN_18055d860 */

int FUN_18055d860(byte **param_1,byte *param_2,undefined8 param_3,ulonglong param_4,
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
    FUN_18050f6f0(0x1e,0,0x78,s_D__a_1_s_target_x86_64_pc_window_180948f50,0x4e);
    *param_1 = (byte *)0x0;
    local_18 = 0;
  }
  return local_18;
}


/* address=18055d940 name=FUN_18055d940 */

undefined8 FUN_18055d940(longlong *param_1,undefined8 param_2,undefined8 param_3)

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


/* address=18055d990 name=FUN_18055d990 */

undefined8 FUN_18055d990(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*param_1 + 4) == 0) && (param_4 != 0)) {
    FID_conflict__assert
              (u_ctx_>aead_>seal_scatter_supports_1809497c0,
               u_D__a_1_s_target_x86_64_pc_window_1809496b0,0x111);
  }
  if (*(longlong *)(*param_1 + 0x40) == 0) {
    if (param_4 + *(byte *)(param_1 + 0x48) < param_4) {
      FUN_18050f6f0(0x1e,0,0x45,s_D__a_1_s_target_x86_64_pc_window_180949840,0x119);
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


/* address=18055dac0 name=FUN_18055dac0 */

void FUN_18055dac0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180560de0();
  FUN_18059e1b0(uVar1,&LAB_180560e80);
  FUN_180560dd0();
  return;
}


/* address=18055db80 name=FUN_18055db80 */

void FUN_18055db80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1805616a0();
  FUN_18059e1b0(uVar1,&LAB_180561740);
  FUN_180561690();
  return;
}


/* address=18055dc10 name=FUN_18055dc10 */

void FUN_18055dc10(undefined8 param_1)

{
  FUN_180533b50(param_1,0,0x98);
  return;
}


/* address=18055dc80 name=FUN_18055dc80 */

undefined8 FUN_18055dc80(longlong *param_1)

{
  if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x30) != 0)) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  FUN_18058f610(param_1[2]);
  FUN_180533b50(param_1,0,0x98);
  return 1;
}


/* address=18055dd30 name=FUN_18055dd30 */

undefined8 FUN_18055dd30(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    FUN_18050f6f0(0x1e,0,0x6c,s_D__a_1_s_target_x86_64_pc_window_1809498d0,0x67);
    uVar2 = 0;
  }
  else if (*(int *)(param_2 + 0x12) == 0) {
    FUN_18055dc80(param_1);
    FUN_180533ab0(param_1,param_2,0x98);
    if ((param_2[2] != 0) && (*(int *)(*param_2 + 0x10) != 0)) {
      uVar2 = FUN_18058f4e0(*(undefined4 *)(*param_2 + 0x10));
      param_1[2] = uVar2;
      if (param_1[2] == 0) {
        *param_1 = 0;
        return 0;
      }
      FUN_180533ab0(param_1[2],param_2[2],*(undefined4 *)(*param_2 + 0x10));
    }
    if (((*(uint *)(*param_2 + 0x14) & 0x1000) != 0) &&
       (iVar1 = (**(code **)(*param_2 + 0x38))(param_2,8,0,param_1), iVar1 == 0)) {
      *param_1 = 0;
      return 0;
    }
    uVar2 = 1;
  }
  else {
    FUN_18050f6f0(0x1e,0,0x42,s_D__a_1_s_target_x86_64_pc_window_180949960,0x6c);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=18055ded0 name=FUN_18055ded0 */

undefined8
FUN_18055ded0(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
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
      FUN_18050f6f0(0x1e,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180949a80,0xb8);
      return 0;
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_18055dc80(param_1);
      *(int *)((longlong)param_1 + 0x1c) = param_6;
    }
    *param_1 = param_2;
    if (*(int *)(*param_1 + 0x10) == 0) {
      param_1[2] = 0;
    }
    else {
      lVar4 = FUN_18058f4e0(*(undefined4 *)(*param_1 + 0x10));
      param_1[2] = lVar4;
      if (param_1[2] == 0) {
        *param_1 = 0;
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 4) = 0;
    if (((*(uint *)(*param_1 + 0x14) & 0x200) != 0) &&
       (iVar1 = FUN_18055f190(param_1,0,0,0), iVar1 == 0)) {
      *param_1 = 0;
      FUN_18050f6f0(0x1e,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_1809499f0,0xb3);
      return 0;
    }
  }
  if (((*(int *)(*param_1 + 4) != 1) && (*(int *)(*param_1 + 4) != 8)) &&
     (*(int *)(*param_1 + 4) != 0x10)) {
    FID_conflict__assert
              (u_ctx_>cipher_>block_size____1____c_180949c20,
               u_D__a_1_s_target_x86_64_pc_window_180949b10,0xbe);
  }
  uVar2 = FUN_18055f150(param_1);
  if ((uVar2 & 0x100) == 0) {
    uVar3 = FUN_18055f170(param_1);
    switch(uVar3) {
    case 0:
    case 1:
      break;
    case 3:
      *(undefined4 *)(param_1 + 0xd) = 0;
    case 2:
      uVar2 = FUN_18055f0f0(param_1);
      if (0x10 < uVar2) {
        FID_conflict__assert
                  (u_EVP_CIPHER_CTX_iv_length_ctx__<__180949df0,
                   u_D__a_1_s_target_x86_64_pc_window_180949ce0,0xcb);
      }
      if (param_5 != 0) {
        uVar3 = FUN_18055f0f0(param_1);
        FUN_180533ab0((longlong)param_1 + 0x24,param_5,uVar3);
      }
      uVar3 = FUN_18055f0f0(param_1);
      FUN_180533ab0((longlong)param_1 + 0x34,(longlong)param_1 + 0x24,uVar3);
      break;
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0xd) = 0;
      if (param_5 != 0) {
        uVar3 = FUN_18055f0f0(param_1);
        FUN_180533ab0((longlong)param_1 + 0x34,param_5,uVar3);
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


/* address=18055e260 name=FUN_18055e260 */

void FUN_18055e260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_18055ded0(param_1,param_2,param_3,param_4,param_5,1);
  return;
}


/* address=18055e2b0 name=FUN_18055e2b0 */

void FUN_18055e2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_18055ded0(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


/* address=18055e300 name=FUN_18055e300 */

undefined8
FUN_18055e300(longlong *param_1,longlong param_2,int *param_3,longlong param_4,int param_5)

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
             (iVar2 = FUN_18055f9a0(param_1,param_5), iVar2 == 0)) {
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
            FID_conflict__assert
                      (u_bl_<__(int)sizeof(ctx_>buf__18094a370,
                       u_D__a_1_s_target_x86_64_pc_window_18094a260,0x134);
          }
          if (iVar2 == 0) {
            *param_3 = 0;
            local_res10 = param_2;
            local_res20 = param_4;
          }
          else {
            if (param_5 < iVar1 - iVar2) {
              FUN_180533ab0((longlong)param_1 + (longlong)iVar2 + 0x44,param_4,(longlong)param_5);
              *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + param_5;
              *param_3 = 0;
              *(undefined4 *)(param_1 + 0x12) = 0;
              return 1;
            }
            iVar4 = iVar1 - iVar2;
            FUN_180533ab0((longlong)param_1 + (longlong)iVar2 + 0x44,param_4,(longlong)iVar4);
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
          iVar1 = FUN_18055f9a0(param_1,param_5);
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
            FUN_180533ab0((longlong)param_1 + 0x44,local_res20 + param_5,(longlong)iVar1);
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
      FUN_18050f6f0(0x1e,0,0x45,s_D__a_1_s_target_x86_64_pc_window_18094a1d0,0x110);
      uVar3 = 0;
    }
  }
  else {
    FUN_18050f6f0(0x1e,0,0x42,s_D__a_1_s_target_x86_64_pc_window_18094a140,0x104);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=18055e800 name=FUN_18055e800 */

undefined8 FUN_18055e800(longlong *param_1,undefined8 param_2,uint *param_3)

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
        FID_conflict__assert
                  (u_b_<__sizeof(ctx_>buf__18094a550,u_D__a_1_s_target_x86_64_pc_window_18094a440,
                   0x172);
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
            FUN_18050f6f0(0x1e,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_18094a580,0x17b);
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
    FUN_18053d550(param_1);
    uVar3 = 1;
  }
  else {
    FUN_18050f6f0(0x1e,0,0x42,s_D__a_1_s_target_x86_64_pc_window_18094a3b0,0x161);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=18055e9f0 name=FUN_18055e9f0 */

ulonglong FUN_18055e9f0(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4,
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
            FID_conflict__assert
                      (u_b_<__sizeof(ctx_>final__18094a840,
                       u_D__a_1_s_target_x86_64_pc_window_18094a730,0x1b3);
          }
          bVar4 = *(int *)((longlong)param_1 + 0x6c) != 0;
          local_res10 = param_2;
          if (bVar4) {
            FUN_180533ab0(param_2,param_1 + 0xe,uVar1);
            local_res10 = param_2 + (ulonglong)uVar1;
          }
          iVar2 = FUN_18055e300(param_1,local_res10,param_3,param_4,param_5);
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
              FUN_180533ab0(param_1 + 0xe,local_res10 + *param_3,uVar1);
            }
            if (bVar4) {
              *param_3 = *param_3 + uVar1;
            }
            uVar3 = 1;
          }
        }
        else {
          uVar3 = FUN_18055e300(param_1,param_2,param_3,param_4,param_5);
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
      FUN_18050f6f0(0x1e,0,0x45,s_D__a_1_s_target_x86_64_pc_window_18094a6a0,0x19b);
      uVar3 = 0;
    }
  }
  else {
    FUN_18050f6f0(0x1e,0,0x42,s_D__a_1_s_target_x86_64_pc_window_18094a610,0x193);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=18055ecc0 name=FUN_18055ecc0 */

undefined8 FUN_18055ecc0(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int local_18;
  uint local_10;
  
  *param_3 = 0;
  if (*(int *)(param_1 + 0x12) != 0) {
    FUN_18050f6f0(0x1e,0,0x42,s_D__a_1_s_target_x86_64_pc_window_18094a870,0x1d6);
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
          FUN_18050f6f0(0x1e,0,0x7b,s_D__a_1_s_target_x86_64_pc_window_18094a990,0x1f0);
          return 0;
        }
        if (0x20 < local_10) {
          FID_conflict__assert
                    (u_b_<__sizeof(ctx_>final__18094ab30,
                     u_D__a_1_s_target_x86_64_pc_window_18094aa20,499);
        }
        uVar2 = (uint)*(byte *)((longlong)param_1 + (ulonglong)(local_10 - 1) + 0x70);
        if ((uVar2 == 0) || ((int)local_10 < (int)uVar2)) {
          FUN_18050f6f0(0x1e,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18094ab60,0x1f9);
          return 0;
        }
        for (local_18 = 0; local_18 < (int)uVar2; local_18 = local_18 + 1) {
          local_10 = local_10 - 1;
          if (*(byte *)((longlong)param_1 + (ulonglong)local_10 + 0x70) != uVar2) {
            FUN_18050f6f0(0x1e,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18094abf0,0x1ff);
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
        FUN_18050f6f0(0x1e,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_18094a900,0x1e7);
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
  FUN_18053d550(param_1);
  return 1;
}


/* address=18055ef70 name=FUN_18055ef70 */

void FUN_18055ef70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_18055e9f0(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_18055e300(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


/* address=18055eff0 name=FUN_18055eff0 */

void FUN_18055eff0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_18055ecc0(param_1,param_2,param_3);
  }
  else {
    FUN_18055e800(param_1,param_2,param_3);
  }
  return;
}


/* address=18055f0b0 name=FUN_18055f0b0 */

undefined4 FUN_18055f0b0(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}


/* address=18055f0d0 name=FUN_18055f0d0 */

undefined4 FUN_18055f0d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


/* address=18055f0f0 name=FUN_18055f0f0 */

undefined4 FUN_18055f0f0(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 0xc);
}


/* address=18055f150 name=FUN_18055f150 */

uint FUN_18055f150(longlong *param_1)

{
  return *(uint *)(*param_1 + 0x14) & 0xffffffc0;
}


/* address=18055f170 name=FUN_18055f170 */

uint FUN_18055f170(longlong *param_1)

{
  return *(uint *)(*param_1 + 0x14) & 0x3f;
}


/* address=18055f190 name=FUN_18055f190 */

int FUN_18055f190(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (*param_1 == 0) {
    FUN_18050f6f0(0x1e,0,0x72,s_D__a_1_s_target_x86_64_pc_window_18094ac80,0x263);
    iVar1 = 0;
  }
  else if (*(longlong *)(*param_1 + 0x38) == 0) {
    FUN_18050f6f0(0x1e,0,0x68,s_D__a_1_s_target_x86_64_pc_window_18094ad10,0x268);
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4);
    if (iVar1 == -1) {
      FUN_18050f6f0(0x1e,0,0x69,s_D__a_1_s_target_x86_64_pc_window_18094ada0,0x26e);
      iVar1 = 0;
    }
  }
  return iVar1;
}


/* address=18055f270 name=FUN_18055f270 */

undefined8 FUN_18055f270(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x800;
  }
  else {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffff7ff;
  }
  return 1;
}


/* address=18055f340 name=FUN_18055f340 */

undefined4 FUN_18055f340(undefined4 *param_1)

{
  return *param_1;
}


/* address=18055f360 name=FUN_18055f360 */

undefined4 FUN_18055f360(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* address=18055f380 name=FUN_18055f380 */

undefined4 FUN_18055f380(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


/* address=18055f3a0 name=FUN_18055f3a0 */

undefined4 FUN_18055f3a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


/* address=18055f400 name=FUN_18055f400 */

void FUN_18055f400(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  if (param_2 != 0) {
    FUN_18055dc10(param_1);
  }
  FUN_18055ded0(param_1,param_2,0,param_3,param_4,param_5);
  return;
}


/* address=18055f5c0 name=FUN_18055f5c0 */

int FUN_18055f5c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4);
  if (((*(uint *)(*param_1 + 0x14) & 0x400) == 0) && (iVar1 != 0)) {
    FUN_18053d550(param_1);
  }
  return iVar1;
}


/* address=18055f6e0 name=FUN_18055f6e0 */

void FUN_18055f6e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180561240();
  FUN_18059e1b0(uVar1,&LAB_1805612e0);
  FUN_180561230();
  return;
}


/* address=18055f7b0 name=FUN_18055f7b0 */

undefined *
FUN_18055f7b0(undefined8 param_1,longlong param_2,code **param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined *puVar2;
  
  if (((param_5 != 0x10) && (param_5 != 0x18)) && (param_5 != 0x20)) {
    FID_conflict__assert
              (u_key_bytes____128___8____key_byte_18094b190,
               u_D__a_1_s_target_x86_64_pc_window_18094b080,0x126);
  }
  iVar1 = FUN_180534fa0();
  if (iVar1 == 0) {
    iVar1 = FUN_180534fc0();
    if (iVar1 == 0) {
      FUN_180535040(param_4,(int)param_5 << 3,param_1);
      if (param_2 != 0) {
        FUN_180536000(param_2,param_1,FUN_180535100,0);
      }
      if (param_3 != (code **)0x0) {
        *param_3 = FUN_180535100;
      }
      puVar2 = &LAB_180535260;
    }
    else {
      FUN_1804dfd10(param_4,(int)param_5 << 3,param_1);
      if (param_3 != (code **)0x0) {
        *param_3 = FUN_1804dfee0;
      }
      if (param_2 != 0) {
        FUN_180536000(param_2,param_1,FUN_1804dfee0,0);
      }
      puVar2 = &DAT_1804e01e0;
    }
  }
  else {
    FUN_1804dec20(param_4,(int)param_5 << 3,param_1);
    if (param_2 != 0) {
      FUN_180536000(param_2,param_1,FUN_1804dc9c0,1);
    }
    if (param_3 != (code **)0x0) {
      *param_3 = FUN_1804dc9c0;
    }
    puVar2 = &DAT_1804dd720;
  }
  return puVar2;
}


/* address=18055f930 name=FUN_18055f930 */

bool FUN_18055f930(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_180533650(param_1,param_2,param_3,param_4);
  return iVar1 == 0 || param_1 == param_3;
}


/* address=18055f9a0 name=FUN_18055f9a0 */

uint FUN_18055f9a0(longlong *param_1,uint param_2)

{
  if (*(int *)(*param_1 + 4) == 0) {
    FID_conflict__assert
              (u_ctx_>cipher_>block_size____0_180949f70,u_D__a_1_s_target_x86_64_pc_window_180949e60
               ,0xfc);
  }
  if ((*(uint *)(*param_1 + 4) & *(int *)(*param_1 + 4) - 1U) != 0) {
    FID_conflict__assert
              (u__ctx_>cipher_>block_size____ctx__18094a0c0,
               u_D__a_1_s_target_x86_64_pc_window_180949fb0,0xfd);
  }
  return param_2 & *(int *)(*param_1 + 4) - 1U;
}


/* address=1805601e0 name=FUN_1805601e0 */

longlong FUN_1805601e0(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(*param_1 + 0x10) != 0x2a8) {
    FID_conflict__assert
              (u_ctx_>cipher_>ctx_size____sizeof__18094b330,
               u_D__a_1_s_target_x86_64_pc_window_18094b220,0x15c);
  }
  uVar1 = param_1[2];
  if (uVar1 % 8 != 0) {
    FID_conflict__assert
              (u__uintptr_t_ptr___8____0_18094b4d8,u_D__a_1_s_target_x86_64_pc_window_18094b3d0,
               0x163);
  }
  return uVar1 + (uVar1 & 8);
}


/* address=180560500 name=FUN_180560500 */

void FUN_180560500(longlong param_1)

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


/* address=180560dd0 name=FUN_180560dd0 */

undefined * FUN_180560dd0(void)

{
  return &DAT_180991310;
}


/* address=180560de0 name=FUN_180560de0 */

undefined * FUN_180560de0(void)

{
  return &DAT_180991350;
}


/* address=180560df0 name=FUN_180560df0 */

void FUN_180560df0(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1a3;
  param_1[1] = 0x10;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 2;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_18055fe60;
  return;
}


/* address=180560ea0 name=FUN_180560ea0 */

undefined * FUN_180560ea0(void)

{
  return &DAT_180991360;
}


/* address=180560eb0 name=FUN_180560eb0 */

undefined * FUN_180560eb0(void)

{
  return &DAT_180991358;
}


/* address=180560ec0 name=FUN_180560ec0 */

void FUN_180560ec0(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x388;
  param_1[1] = 1;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 5;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_180560060;
  return;
}


/* address=180560f70 name=FUN_180560f70 */

undefined * FUN_180560f70(void)

{
  return &DAT_1809913a0;
}


/* address=180560f80 name=FUN_180560f80 */

undefined * FUN_180560f80(void)

{
  return &DAT_1809913e0;
}


/* address=180560f90 name=FUN_180560f90 */

void FUN_180560f90(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1a2;
  param_1[1] = 0x10;
  param_1[2] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_18055ff70;
  return;
}


/* address=180561040 name=FUN_180561040 */

void FUN_180561040(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180560f80();
  FUN_18059e1b0(uVar1,&LAB_180561020);
  FUN_180560f70();
  return;
}


/* address=180561070 name=FUN_180561070 */

undefined * FUN_180561070(void)

{
  return &DAT_1809913f0;
}


/* address=180561080 name=FUN_180561080 */

undefined * FUN_180561080(void)

{
  return &DAT_1809913e8;
}


/* address=180561090 name=FUN_180561090 */

void FUN_180561090(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1a4;
  param_1[1] = 1;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 4;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_180560160;
  return;
}


/* address=180561140 name=FUN_180561140 */

undefined * FUN_180561140(void)

{
  return &DAT_180991430;
}


/* address=180561150 name=FUN_180561150 */

undefined * FUN_180561150(void)

{
  return &DAT_180991470;
}


/* address=180561160 name=FUN_180561160 */

void FUN_180561160(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x37f;
  param_1[1] = 1;
  param_1[2] = 0x10;
  param_1[3] = 0xc;
  param_1[4] = 0x2a8;
  param_1[5] = 0x1f86;
  *(undefined **)(param_1 + 8) = &LAB_180560280;
  *(undefined **)(param_1 + 10) = &LAB_180560b20;
  *(undefined **)(param_1 + 0xc) = &LAB_1805604a0;
  *(undefined **)(param_1 + 0xe) = &LAB_180560570;
  return;
}


/* address=180561230 name=FUN_180561230 */

undefined * FUN_180561230(void)

{
  return &DAT_180991480;
}


/* address=180561240 name=FUN_180561240 */

undefined * FUN_180561240(void)

{
  return &DAT_180991478;
}


/* address=180561250 name=FUN_180561250 */

void FUN_180561250(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1a7;
  param_1[1] = 0x10;
  param_1[2] = 0x18;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 2;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_18055fe60;
  return;
}


/* address=180561300 name=FUN_180561300 */

undefined * FUN_180561300(void)

{
  return &DAT_1809914c0;
}


/* address=180561310 name=FUN_180561310 */

undefined * FUN_180561310(void)

{
  return &DAT_180991500;
}


/* address=180561320 name=FUN_180561320 */

void FUN_180561320(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x389;
  param_1[1] = 1;
  param_1[2] = 0x18;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 5;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_180560060;
  return;
}


/* address=1805613d0 name=FUN_1805613d0 */

undefined * FUN_1805613d0(void)

{
  return &DAT_180991510;
}


/* address=1805613e0 name=FUN_1805613e0 */

undefined * FUN_1805613e0(void)

{
  return &DAT_180991508;
}


/* address=1805613f0 name=FUN_1805613f0 */

void FUN_1805613f0(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1a6;
  param_1[1] = 0x10;
  param_1[2] = 0x18;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_18055ff70;
  return;
}


/* address=1805614a0 name=FUN_1805614a0 */

void FUN_1805614a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1805613e0();
  FUN_18059e1b0(uVar1,&LAB_180561480);
  FUN_1805613d0();
  return;
}


/* address=1805614d0 name=FUN_1805614d0 */

undefined * FUN_1805614d0(void)

{
  return &DAT_180991550;
}


/* address=1805614e0 name=FUN_1805614e0 */

undefined * FUN_1805614e0(void)

{
  return &DAT_180991590;
}


/* address=1805614f0 name=FUN_1805614f0 */

void FUN_1805614f0(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1a8;
  param_1[1] = 1;
  param_1[2] = 0x18;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 4;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_180560160;
  return;
}


/* address=1805615a0 name=FUN_1805615a0 */

undefined * FUN_1805615a0(void)

{
  return &DAT_1809915a0;
}


/* address=1805615b0 name=FUN_1805615b0 */

undefined * FUN_1805615b0(void)

{
  return &DAT_180991598;
}


/* address=1805615c0 name=FUN_1805615c0 */

void FUN_1805615c0(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x382;
  param_1[1] = 1;
  param_1[2] = 0x18;
  param_1[3] = 0xc;
  param_1[4] = 0x2a8;
  param_1[5] = 0x1f86;
  *(undefined **)(param_1 + 8) = &LAB_180560280;
  *(undefined **)(param_1 + 10) = &LAB_180560b20;
  *(undefined **)(param_1 + 0xc) = &LAB_1805604a0;
  *(undefined **)(param_1 + 0xe) = &LAB_180560570;
  return;
}


/* address=180561690 name=FUN_180561690 */

undefined * FUN_180561690(void)

{
  return &DAT_1809915e0;
}


/* address=1805616a0 name=FUN_1805616a0 */

undefined * FUN_1805616a0(void)

{
  return &DAT_180991620;
}


/* address=1805616b0 name=FUN_1805616b0 */

void FUN_1805616b0(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1ab;
  param_1[1] = 0x10;
  param_1[2] = 0x20;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 2;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_18055fe60;
  return;
}


/* address=180561760 name=FUN_180561760 */

undefined * FUN_180561760(void)

{
  return &DAT_180991630;
}


/* address=180561770 name=FUN_180561770 */

undefined * FUN_180561770(void)

{
  return &DAT_180991628;
}


/* address=180561780 name=FUN_180561780 */

void FUN_180561780(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x38a;
  param_1[1] = 1;
  param_1[2] = 0x20;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 5;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_180560060;
  return;
}


/* address=180561830 name=FUN_180561830 */

undefined * FUN_180561830(void)

{
  return &DAT_180991670;
}


/* address=180561840 name=FUN_180561840 */

undefined * FUN_180561840(void)

{
  return &DAT_1809916b0;
}


/* address=180561850 name=FUN_180561850 */

void FUN_180561850(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1aa;
  param_1[1] = 0x10;
  param_1[2] = 0x20;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_18055ff70;
  return;
}


/* address=180561900 name=FUN_180561900 */

void FUN_180561900(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180561840();
  FUN_18059e1b0(uVar1,&LAB_1805618e0);
  FUN_180561830();
  return;
}


/* address=180561930 name=FUN_180561930 */

undefined * FUN_180561930(void)

{
  return &DAT_1809916c0;
}


/* address=180561940 name=FUN_180561940 */

undefined * FUN_180561940(void)

{
  return &DAT_1809916b8;
}


/* address=180561950 name=FUN_180561950 */

void FUN_180561950(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1ac;
  param_1[1] = 1;
  param_1[2] = 0x20;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 4;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_180560160;
  return;
}


/* address=180561a00 name=FUN_180561a00 */

undefined * FUN_180561a00(void)

{
  return &DAT_180991700;
}


/* address=180561a10 name=FUN_180561a10 */

undefined * FUN_180561a10(void)

{
  return &DAT_180991740;
}


/* address=180561a20 name=FUN_180561a20 */

void FUN_180561a20(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x385;
  param_1[1] = 1;
  param_1[2] = 0x20;
  param_1[3] = 0xc;
  param_1[4] = 0x2a8;
  param_1[5] = 0x1f86;
  *(undefined **)(param_1 + 8) = &LAB_180560280;
  *(undefined **)(param_1 + 10) = &LAB_180560b20;
  *(undefined **)(param_1 + 0xc) = &LAB_1805604a0;
  *(undefined **)(param_1 + 0xe) = &LAB_180560570;
  return;
}


/* address=180561b70 name=FUN_180561b70 */

undefined * FUN_180561b70(void)

{
  return &DAT_180991750;
}


/* address=180561b80 name=FUN_180561b80 */

undefined * FUN_180561b80(void)

{
  return &DAT_180991748;
}


/* address=180561b90 name=FUN_180561b90 */

void FUN_180561b90(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1a2;
  param_1[1] = 0x10;
  param_1[2] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_180561af0;
  return;
}


/* address=180561c40 name=FUN_180561c40 */

void FUN_180561c40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180561b80();
  FUN_18059e1b0(uVar1,&LAB_180561c20);
  FUN_180561b70();
  return;
}


/* address=180561c70 name=FUN_180561c70 */

undefined * FUN_180561c70(void)

{
  return &DAT_180991790;
}


/* address=180561c80 name=FUN_180561c80 */

undefined * FUN_180561c80(void)

{
  return &DAT_1809917d0;
}


/* address=180561c90 name=FUN_180561c90 */

void FUN_180561c90(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1a6;
  param_1[1] = 0x10;
  param_1[2] = 0x18;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_180561af0;
  return;
}


/* address=180561d40 name=FUN_180561d40 */

void FUN_180561d40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180561c80();
  FUN_18059e1b0(uVar1,&LAB_180561d20);
  FUN_180561c70();
  return;
}


/* address=180561d70 name=FUN_180561d70 */

undefined * FUN_180561d70(void)

{
  return &DAT_1809917e0;
}


/* address=180561d80 name=FUN_180561d80 */

undefined * FUN_180561d80(void)

{
  return &DAT_1809917d8;
}


/* address=180561d90 name=FUN_180561d90 */

void FUN_180561d90(undefined4 *param_1)

{
  FUN_1806924e0(param_1,0,0x40);
  *param_1 = 0x1aa;
  param_1[1] = 0x10;
  param_1[2] = 0x20;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_18055fa30;
  *(undefined **)(param_1 + 10) = &LAB_180561af0;
  return;
}


/* address=180561e40 name=FUN_180561e40 */

void FUN_180561e40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180561d80();
  FUN_18059e1b0(uVar1,&LAB_180561e20);
  FUN_180561d70();
  return;
}


/* address=180561e70 name=FUN_180561e70 */

undefined8
FUN_180561e70(longlong param_1,ulonglong *param_2,undefined8 param_3,longlong param_4,
             ulonglong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_4 << 3;
  if (lVar1 == 0x80) {
    FUN_180533e40(0);
  }
  else if (lVar1 == 0x100) {
    FUN_180533e40(1);
  }
  if (((lVar1 == 0x80) || (lVar1 == 0xc0)) || (lVar1 == 0x100)) {
    if (param_5 == 0) {
      param_5 = 0x10;
    }
    if (param_5 < 0x11) {
      uVar2 = FUN_18055f7b0(param_1,param_1 + 0xf8,0,param_3,param_4);
      *(undefined8 *)(param_1 + 0x218) = uVar2;
      *param_2 = param_5;
      uVar2 = 1;
    }
    else {
      FUN_18050f6f0(0x1e,0,0x74,s_D__a_1_s_target_x86_64_pc_window_18094b5a0,0x39c);
      uVar2 = 0;
    }
  }
  else {
    FUN_18050f6f0(0x1e,0,0x66,s_D__a_1_s_target_x86_64_pc_window_18094b510,0x393);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=180561fb0 name=FUN_180561fb0 */

bool FUN_180561fb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined local_10 [16];
  
  iVar1 = FUN_180561e70(param_1 + 8,local_10,param_2,param_3,param_4);
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0x240) = local_10[0];
  }
  return iVar1 != 0;
}


/* address=180562040 name=FUN_180562040 */

void FUN_180562040(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_1d8;
  if (param_11 + param_14 < param_14) {
    local_1b8 = CONCAT44(local_1b8._4_4_,0x3c6);
    FUN_18050f6f0(0x1e,0,0x75,s_D__a_1_s_target_x86_64_pc_window_18094b630);
  }
  else if (param_5 < param_11 + param_14) {
    local_1b8 = CONCAT44(local_1b8._4_4_,0x3ca);
    FUN_18050f6f0(0x1e,0,0x67,s_D__a_1_s_target_x86_64_pc_window_18094b6c0);
  }
  else if (param_7 == 0) {
    local_1b8 = CONCAT44(local_1b8._4_4_,0x3ce);
    FUN_18050f6f0(0x1e,0,0x6f,s_D__a_1_s_target_x86_64_pc_window_18094b750);
  }
  else {
    local_1a8 = param_1;
    FUN_180533b50(local_198,0,0x180);
    FUN_180533ab0(local_148,param_1 + 0xf8,0x120);
    FUN_180536120(local_198,local_1a8,param_6,param_7);
    if ((param_13 == 0) || (iVar1 = FUN_1805363c0(local_198,param_12,param_13), iVar1 != 0)) {
      if (*(longlong *)(param_1 + 0x218) == 0) {
        local_1b8 = param_9;
        iVar1 = FUN_180536610(local_198,local_1a8,param_8,param_2);
      }
      else {
        local_1b0 = *(undefined8 *)(param_1 + 0x218);
        local_1b8 = param_9;
        iVar1 = FUN_180537110(local_198,local_1a8,param_8,param_2);
      }
      if (iVar1 != 0) {
        if (param_11 != 0) {
          if (*(longlong *)(param_1 + 0x218) == 0) {
            local_1b8 = param_11;
            iVar1 = FUN_180536610(local_198,local_1a8,param_10,param_3);
          }
          else {
            local_1b0 = *(undefined8 *)(param_1 + 0x218);
            local_1b8 = param_11;
            iVar1 = FUN_180537110(local_198,local_1a8,param_10,param_3);
          }
          if (iVar1 == 0) goto LAB_18056234b;
        }
        FUN_180537e90(local_198,param_3 + param_11,param_14);
        *param_4 = param_14 + param_11;
      }
    }
  }
LAB_18056234b:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_1d8);
  return;
}


/* address=180562370 name=FUN_180562370 */

void FUN_180562370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  FUN_180562040(param_1 + 8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10
                ,param_11,param_12,param_13,*(undefined *)(param_1 + 0x240));
  return;
}


/* address=180562460 name=FUN_180562460 */

void FUN_180562460(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_1e8;
  if (param_4 == 0) {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x415);
    FUN_18050f6f0(0x1e,0,0x6f,s_D__a_1_s_target_x86_64_pc_window_18094b7e0);
  }
  else if (param_8 == param_11) {
    local_1b8 = param_1;
    FUN_180533b50(local_1a8,0,0x180);
    FUN_180533ab0(local_158,param_1 + 0xf8,0x120);
    FUN_180536120(local_1a8,local_1b8,param_3,param_4);
    iVar1 = FUN_1805363c0(local_1a8,param_9,param_10);
    if (iVar1 != 0) {
      if (*(longlong *)(param_1 + 0x218) == 0) {
        local_1c8 = param_6;
        iVar1 = FUN_180536bb0(local_1a8,local_1b8,param_5,param_2);
      }
      else {
        local_1c0 = *(undefined8 *)(param_1 + 0x218);
        local_1c8 = param_6;
        iVar1 = FUN_180537720(local_1a8,local_1b8,param_5,param_2);
      }
      if (iVar1 != 0) {
        FUN_180537e90(local_1a8,local_28,param_11);
        iVar1 = FUN_18058f7e0(local_28,param_7,param_11);
        if (iVar1 != 0) {
          local_1c8 = CONCAT44(local_1c8._4_4_,0x436);
          FUN_18050f6f0(0x1e,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18094b900);
        }
      }
    }
  }
  else {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x41a);
    FUN_18050f6f0(0x1e,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18094b870);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_1e8);
  return;
}


/* address=180562780 name=FUN_180562780 */

undefined * FUN_180562780(void)

{
  return &DAT_180991820;
}


/* address=180562790 name=FUN_180562790 */

undefined * FUN_180562790(void)

{
  return &DAT_180991868;
}


/* address=1805627a0 name=FUN_1805627a0 */

void FUN_1805627a0(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(code **)(param_1 + 8) = FUN_180561fb0;
  *(undefined **)(param_1 + 0x18) = &LAB_180562030;
  *(code **)(param_1 + 0x28) = FUN_180562370;
  *(undefined **)(param_1 + 0x30) = &LAB_1805626a0;
  return;
}


/* address=180562860 name=FUN_180562860 */

undefined * FUN_180562860(void)

{
  return &DAT_180991870;
}


/* address=180562870 name=FUN_180562870 */

undefined * FUN_180562870(void)

{
  return &DAT_1809918b8;
}


/* address=180562880 name=FUN_180562880 */

void FUN_180562880(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x18;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(code **)(param_1 + 8) = FUN_180561fb0;
  *(undefined **)(param_1 + 0x18) = &LAB_180562030;
  *(code **)(param_1 + 0x28) = FUN_180562370;
  *(undefined **)(param_1 + 0x30) = &LAB_1805626a0;
  return;
}


/* address=180562940 name=FUN_180562940 */

undefined * FUN_180562940(void)

{
  return &DAT_1809918c0;
}


/* address=180562950 name=FUN_180562950 */

undefined * FUN_180562950(void)

{
  return &DAT_180991908;
}


/* address=180562960 name=FUN_180562960 */

void FUN_180562960(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x20;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(code **)(param_1 + 8) = FUN_180561fb0;
  *(undefined **)(param_1 + 0x18) = &LAB_180562030;
  *(code **)(param_1 + 0x28) = FUN_180562370;
  *(undefined **)(param_1 + 0x30) = &LAB_1805626a0;
  return;
}


/* address=180562e50 name=FUN_180562e50 */

undefined * FUN_180562e50(void)

{
  return &DAT_180991910;
}


/* address=180562e60 name=FUN_180562e60 */

undefined * FUN_180562e60(void)

{
  return &DAT_180991958;
}


/* address=180562e70 name=FUN_180562e70 */

void FUN_180562e70(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0;
  param_1[2] = 0x1c;
  param_1[3] = 0x1c;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_180562a20;
  *(undefined **)(param_1 + 0x18) = &LAB_180562030;
  *(undefined **)(param_1 + 0x28) = &LAB_180562ad0;
  *(undefined **)(param_1 + 0x30) = &LAB_180562cf0;
  return;
}


/* address=180562f30 name=FUN_180562f30 */

undefined * FUN_180562f30(void)

{
  return &DAT_180991960;
}


/* address=180562f40 name=FUN_180562f40 */

undefined * FUN_180562f40(void)

{
  return &DAT_1809919a8;
}


/* address=180562f50 name=FUN_180562f50 */

void FUN_180562f50(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x20;
  param_1[1] = 0;
  param_1[2] = 0x1c;
  param_1[3] = 0x1c;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_180562a20;
  *(undefined **)(param_1 + 0x18) = &LAB_180562030;
  *(undefined **)(param_1 + 0x28) = &LAB_180562ad0;
  *(undefined **)(param_1 + 0x30) = &LAB_180562cf0;
  return;
}


/* address=180563240 name=FUN_180563240 */

undefined * FUN_180563240(void)

{
  return &DAT_1809919b0;
}


/* address=180563250 name=FUN_180563250 */

undefined * FUN_180563250(void)

{
  return &DAT_1809919f8;
}


/* address=180563260 name=FUN_180563260 */

void FUN_180563260(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_180563010;
  *(undefined **)(param_1 + 0x18) = &LAB_180562030;
  *(undefined **)(param_1 + 0x28) = &LAB_1805630a0;
  *(undefined **)(param_1 + 0x30) = &LAB_1805626a0;
  return;
}


/* address=180563320 name=FUN_180563320 */

undefined * FUN_180563320(void)

{
  return &DAT_180991a00;
}


/* address=180563330 name=FUN_180563330 */

undefined * FUN_180563330(void)

{
  return &DAT_180991a48;
}


/* address=180563340 name=FUN_180563340 */

void FUN_180563340(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x20;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_180563010;
  *(undefined **)(param_1 + 0x18) = &LAB_180562030;
  *(undefined **)(param_1 + 0x28) = &LAB_1805630a0;
  *(undefined **)(param_1 + 0x30) = &LAB_1805626a0;
  return;
}


/* address=180563680 name=FUN_180563680 */

undefined * FUN_180563680(void)

{
  return &DAT_180991a50;
}


/* address=180563690 name=FUN_180563690 */

undefined * FUN_180563690(void)

{
  return &DAT_180991a98;
}


/* address=1805636a0 name=FUN_1805636a0 */

void FUN_1805636a0(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_180563400;
  *(undefined **)(param_1 + 0x18) = &LAB_180562030;
  *(undefined **)(param_1 + 0x28) = &LAB_180563490;
  *(undefined **)(param_1 + 0x30) = &LAB_1805626a0;
  return;
}


/* address=180563760 name=FUN_180563760 */

undefined * FUN_180563760(void)

{
  return &DAT_180991aa0;
}


/* address=180563770 name=FUN_180563770 */

undefined * FUN_180563770(void)

{
  return &DAT_180991ae8;
}


/* address=180563780 name=FUN_180563780 */

void FUN_180563780(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x20;
  param_1[1] = 0xc;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined **)(param_1 + 8) = &LAB_180563400;
  *(undefined **)(param_1 + 0x18) = &LAB_180562030;
  *(undefined **)(param_1 + 0x28) = &LAB_180563490;
  *(undefined **)(param_1 + 0x30) = &LAB_1805626a0;
  return;
}


/* address=180563840 name=FUN_180563840 */

undefined8
FUN_180563840(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


/* address=1805638c0 name=FUN_1805638c0 */

longlong FUN_1805638c0(longlong param_1)

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


/* address=180563920 name=FUN_180563920 */

undefined8
FUN_180563920(code **param_1,byte *param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5,
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
  uVar5 = FUN_1805638c0(param_1);
  if ((uVar5 < param_8) || (param_5 != 0xf - uVar3)) {
    uVar6 = 0;
  }
  else {
    FUN_180533b50(param_2,0,0x20);
    *param_2 = (char)uVar3 - 1U | (byte)((iVar2 - 2U) / 2 << 3);
    if (param_7 != 0) {
      *param_2 = *param_2 | 0x40;
    }
    FUN_180533ab0(param_2 + 1,param_4,param_5);
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


/* address=180563fc0 name=FUN_180563fc0 */

void FUN_180563fc0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_68;
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
    FUN_180535910(param_5,param_4,param_6,param_3);
  }
  else {
    local_30 = param_1[1];
    local_38 = &local_24;
    local_40 = local_20;
    FUN_180535b30(param_5,param_4,param_6,param_3);
  }
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=180564110 name=FUN_180564110 */

void FUN_180564110(code **param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,longlong param_6,ulonglong param_7)

{
  undefined auStack_58 [32];
  uint local_38;
  ulonglong local_30;
  code *local_28;
  ulonglong local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_58;
  local_28 = *param_1;
  if (param_5 == *(uint *)(param_1 + 2)) {
    for (; 0xf < param_7; param_7 = param_7 - 0x10) {
      FUN_180533ab0(&local_20,param_6,0x10);
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
    FUN_180533ab0(param_4,param_2 + 0x10,param_5);
  }
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=1805643d0 name=FUN_1805643d0 */

void FUN_1805643d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_78;
  local_40 = param_9;
  local_48 = param_11;
  local_50 = param_10;
  local_58 = param_7;
  iVar1 = FUN_180563920(param_1,local_30,param_2,param_6);
  if (iVar1 != 0) {
    local_48 = param_9;
    local_50 = param_8;
    local_58 = param_5;
    iVar1 = FUN_180564110(param_1,local_30,param_2,param_4);
    if (iVar1 != 0) {
      local_50 = param_9;
      local_58 = param_8;
      iVar1 = FUN_180563fc0(param_1,local_30,param_2,param_3);
      if (iVar1 != 0) {
        local_38 = 1;
        goto LAB_1805644f4;
      }
    }
  }
  local_38 = 0;
LAB_1805644f4:
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_78);
  return;
}


/* address=180564510 name=FUN_180564510 */

void FUN_180564510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_78;
  local_40 = param_9;
  local_48 = param_11;
  local_50 = param_10;
  local_58 = param_7;
  iVar1 = FUN_180563920(param_1,local_30,param_2,param_6);
  if (iVar1 != 0) {
    local_50 = param_9;
    local_58 = param_8;
    iVar1 = FUN_180563fc0(param_1,local_30,param_2,param_3);
    if (iVar1 != 0) {
      local_48 = param_9;
      local_58 = param_5;
      local_50 = param_3;
      iVar1 = FUN_180564110(param_1,local_30,param_2,param_4);
      if (iVar1 != 0) {
        local_38 = 1;
        goto LAB_180564634;
      }
    }
  }
  local_38 = 0;
LAB_180564634:
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_78);
  return;
}


/* address=180564650 name=FUN_180564650 */

undefined8
FUN_180564650(undefined8 *param_1,undefined8 param_2,longlong param_3,ulonglong param_4,uint param_5
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
  uVar2 = FUN_18055cda0(*param_1);
  if (param_5 != uVar2) {
    FID_conflict__assert
              (u_M____EVP_AEAD_max_overhead_ctx_>_18094c120,
               u_D__a_1_s_target_x86_64_pc_window_18094c010,0x121);
  }
  uVar2 = FUN_18055cdc0(*param_1);
  if (param_5 != uVar2) {
    FID_conflict__assert
              (u_M____EVP_AEAD_max_tag_len_ctx_>a_18094c280,
               u_D__a_1_s_target_x86_64_pc_window_18094c170,0x122);
  }
  uVar2 = FUN_18055cd80(*param_1);
  if (0xf - param_6 != uVar2) {
    FID_conflict__assert
              (u_15___L____EVP_AEAD_nonce_length__18094c3e0,
               u_D__a_1_s_target_x86_64_pc_window_18094c2d0,0x123);
  }
  lVar3 = FUN_18055cd60(*param_1);
  if (param_3 == lVar3) {
    local_res20 = param_4;
    if (param_4 == 0) {
      local_res20 = (ulonglong)param_5;
    }
    if (local_res20 == param_5) {
      uVar4 = FUN_18055f7b0(param_1 + 1,0,local_10,param_2,param_3);
      *(undefined *)(param_1 + 0x48) = (undefined)local_res20;
      iVar1 = FUN_180563840(param_1 + 0x20,param_1 + 1,local_10[0],uVar4,param_5,param_6);
      if (iVar1 == 0) {
        FUN_18050f6f0(0x1e,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18094c560,0x139);
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      FUN_18050f6f0(0x1e,0,0x74,s_D__a_1_s_target_x86_64_pc_window_18094c4d0,CONCAT44(uVar5,0x12f));
      uVar4 = 0;
    }
  }
  else {
    FUN_18050f6f0(0x1e,0,0x66,s_D__a_1_s_target_x86_64_pc_window_18094c440,CONCAT44(uVar5,0x126));
    uVar4 = 0;
  }
  return uVar4;
}


/* address=180564d40 name=FUN_180564d40 */

undefined * FUN_180564d40(void)

{
  return &DAT_180991af0;
}


/* address=180564d50 name=FUN_180564d50 */

undefined * FUN_180564d50(void)

{
  return &DAT_180991b38;
}


/* address=180564d60 name=FUN_180564d60 */

void FUN_180564d60(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xd;
  param_1[2] = 4;
  param_1[3] = 4;
  *(undefined **)(param_1 + 8) = &LAB_180564cf0;
  *(undefined **)(param_1 + 0x18) = &LAB_180564880;
  *(undefined **)(param_1 + 0x28) = &LAB_180564890;
  *(undefined **)(param_1 + 0x30) = &LAB_180564a80;
  return;
}


/* address=180564e60 name=FUN_180564e60 */

undefined * FUN_180564e60(void)

{
  return &DAT_180991b40;
}


/* address=180564e70 name=FUN_180564e70 */

undefined * FUN_180564e70(void)

{
  return &DAT_180991b88;
}


/* address=180564e80 name=FUN_180564e80 */

void FUN_180564e80(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xd;
  param_1[2] = 8;
  param_1[3] = 8;
  *(undefined **)(param_1 + 8) = &LAB_180564e10;
  *(undefined **)(param_1 + 0x18) = &LAB_180564880;
  *(undefined **)(param_1 + 0x28) = &LAB_180564890;
  *(undefined **)(param_1 + 0x30) = &LAB_180564a80;
  return;
}


/* address=180564f80 name=FUN_180564f80 */

undefined * FUN_180564f80(void)

{
  return &DAT_180991b90;
}


/* address=180564f90 name=FUN_180564f90 */

undefined * FUN_180564f90(void)

{
  return &DAT_180991bd8;
}


/* address=180564fa0 name=FUN_180564fa0 */

void FUN_180564fa0(undefined *param_1)

{
  FUN_1806924e0(param_1,0,0x48);
  *param_1 = 0x10;
  param_1[1] = 0xd;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  *(undefined **)(param_1 + 8) = &LAB_180564f30;
  *(undefined **)(param_1 + 0x18) = &LAB_180564880;
  *(undefined **)(param_1 + 0x28) = &LAB_180564890;
  *(undefined **)(param_1 + 0x30) = &LAB_180564a80;
  return;
}


/* address=1805652d0 name=FUN_1805652d0 */

void FUN_1805652d0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined auStack_68 [32];
  undefined *local_48;
  undefined4 local_38;
  ulonglong local_30;
  undefined local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_18053d4f0();
  uVar1 = FUN_18055f360(param_4);
  local_30 = (ulonglong)uVar1;
  if (((local_30 == 0x10) || (local_30 == 8)) && (uVar1 = FUN_18055f380(param_4), uVar1 == param_3))
  {
    local_48 = &DAT_18074d018;
    iVar2 = FUN_18055e260(param_1,param_4,0,param_2);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_18055f5c0(param_1,local_28,&DAT_18074d018,local_30), iVar2 != 0)) {
      local_48 = &DAT_18074d018;
      iVar2 = FUN_18055e260(param_1,0,0,0);
      if (iVar2 != 0) {
        if (local_30 == 0x10) {
          FUN_180565930(param_1 + 0x98,local_28);
          FUN_180565930(param_1 + 0xa8,param_1 + 0x98);
        }
        else {
          FUN_1805659e0(param_1 + 0x98,local_28);
          FUN_1805659e0(param_1 + 0xa8,param_1 + 0x98);
        }
        *(undefined4 *)(param_1 + 200) = 0;
        local_38 = 1;
      }
    }
  }
  FUN_18053d500();
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_68);
  return;
}


/* address=1805654c0 name=FUN_1805654c0 */

void FUN_1805654c0(longlong param_1,longlong param_2,ulonglong param_3)

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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_18053d4f0();
  uVar1 = FUN_18055f0b0(param_1);
  local_38 = (ulonglong)uVar1;
  if (0x10 < local_38) {
    FID_conflict__assert
              (u_block_size_<__AES_BLOCK_SIZE_18094cd78,u_D__a_1_s_target_x86_64_pc_window_18094cc70
               ,0xe8);
  }
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(int *)(param_1 + 200) != 0) {
    local_28 = local_38 - *(uint *)(param_1 + 200);
    if (param_3 < local_28) {
      local_28 = param_3;
    }
    FUN_180533ab0(param_1 + 0xb8 + (ulonglong)*(uint *)(param_1 + 200),param_2,local_28);
    local_res10 = param_2 + local_28;
    local_res18 = param_3 - local_28;
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + (int)local_28;
    if (local_res18 == 0) {
      local_30 = 1;
      goto LAB_1805656d3;
    }
    if (*(uint *)(param_1 + 200) != local_38) {
      FID_conflict__assert
                (u_ctx_>block_used____block_size_18094cec8,
                 u_D__a_1_s_target_x86_64_pc_window_18094cdc0,0x100);
    }
    iVar2 = FUN_18055f5c0(param_1,local_20,param_1 + 0xb8,local_38);
    if (iVar2 == 0) goto LAB_1805656d3;
  }
  for (; local_38 < local_res18; local_res18 = local_res18 - local_38) {
    iVar2 = FUN_18055f5c0(param_1,local_20,local_res10,local_38);
    if (iVar2 == 0) goto LAB_1805656d3;
    local_res10 = local_res10 + local_38;
  }
  FUN_180533ab0(param_1 + 0xb8,local_res10,local_res18);
  *(undefined4 *)(param_1 + 200) = (undefined4)local_res18;
  local_30 = 1;
LAB_1805656d3:
  FUN_18053d500();
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=180565700 name=FUN_180565700 */

int FUN_180565700(longlong param_1,longlong param_2,ulonglong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint local_28;
  int local_24;
  longlong local_18;
  
  uVar1 = FUN_18055f0b0(param_1);
  uVar2 = (ulonglong)uVar1;
  if (0x10 < uVar2) {
    FID_conflict__assert
              (u_block_size_<__AES_BLOCK_SIZE_18094d018,u_D__a_1_s_target_x86_64_pc_window_18094cf10
               ,0x11f);
  }
  FUN_18053d4f0();
  *param_3 = uVar2;
  if (param_2 == 0) {
    local_24 = 1;
  }
  else {
    local_18 = param_1 + 0x98;
    if (*(uint *)(param_1 + 200) != uVar2) {
      *(undefined *)(param_1 + 0xb8 + (ulonglong)*(uint *)(param_1 + 200)) = 0x80;
      FUN_180533b50(param_1 + 0xb9 + (ulonglong)*(uint *)(param_1 + 200),0,
                    uVar2 - (*(int *)(param_1 + 200) + 1));
      local_18 = param_1 + 0xa8;
    }
    for (local_28 = 0; local_28 < uVar2; local_28 = local_28 + 1) {
      *(byte *)(param_2 + (ulonglong)local_28) =
           *(byte *)(param_1 + 0xb8 + (ulonglong)local_28) ^
           *(byte *)(local_18 + (ulonglong)local_28);
    }
    local_24 = FUN_18055f5c0(param_1,param_2,param_2,uVar2);
  }
  FUN_18053d500();
  if (local_24 != 0) {
    FUN_18053d4e0();
  }
  return local_24;
}


/* address=180565890 name=FUN_180565890 */

void FUN_180565890(undefined8 param_1)

{
  FUN_18055dc10(param_1);
  return;
}


/* address=1805658c0 name=FUN_1805658c0 */

void FUN_1805658c0(longlong param_1)

{
  FUN_18055dc80(param_1);
  FUN_18058f7b0(param_1 + 0x98,0x10);
  FUN_18058f7b0(param_1 + 0xa8,0x10);
  FUN_18058f7b0(param_1 + 0xb8,0x10);
  return;
}


/* address=180565930 name=FUN_180565930 */

void FUN_180565930(longlong param_1,byte *param_2)

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


/* address=1805659e0 name=FUN_1805659e0 */

void FUN_1805659e0(longlong param_1,byte *param_2)

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


/* address=180565a90 name=FUN_180565a90 */

longlong FUN_180565a90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18058f4e0(0x48);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_180533b50(lVar1,0,0x48);
    FUN_18059e1f0(lVar1 + 0x30);
    *(undefined4 *)(lVar1 + 0x44) = 1;
  }
  return lVar1;
}


/* address=180565af0 name=FUN_180565af0 */

void FUN_180565af0(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) &&
     (iVar1 = FUN_18059b000((longlong)param_1 + 0x44), iVar1 != 0)) {
    FUN_180543780(param_1[7]);
    FUN_18053d8f0(*param_1);
    FUN_18053d8f0(param_1[1]);
    FUN_18053d8f0(param_1[2]);
    FUN_18053d8f0(param_1[3]);
    FUN_18053d8f0(param_1[4]);
    FUN_18059e290(param_1 + 6);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=180565dd0 name=FUN_180565dd0 */

undefined8 FUN_180565dd0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (((*param_1 == 0) && (param_2 == 0)) || ((param_1[1] == 0 && (param_4 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      FUN_18053d880(*param_1);
      *param_1 = param_2;
    }
    if (param_3 != 0) {
      FUN_18053d880(param_1[2]);
      param_1[2] = param_3;
    }
    if (param_4 != 0) {
      FUN_18053d880(param_1[1]);
      param_1[1] = param_4;
    }
    FUN_180543780(param_1[7]);
    param_1[7] = 0;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=180566260 name=FUN_180566260 */

void FUN_180566260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180533e30();
  FUN_1805669e0(param_1,param_2,param_3);
  return;
}


/* address=1805663b0 name=FUN_1805663b0 */

void FUN_1805663b0(undefined8 *param_1)

{
  FUN_18053db00(*param_1);
  return;
}


/* address=1805667b0 name=FUN_1805667b0 */

undefined4 FUN_1805667b0(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_28;
  
  *param_3 = 0;
  lVar2 = FUN_18053e150();
  if (lVar2 == 0) {
    return 0;
  }
  FUN_18053e250(lVar2);
  local_28 = 0;
  lVar3 = FUN_18053e2b0(lVar2);
  if ((lVar3 != 0) && (iVar1 = FUN_18053db90(lVar3,1), iVar1 != 0)) {
    iVar1 = FUN_18053f880(param_2,lVar3);
    if (iVar1 < 1) {
      *param_3 = *param_3 | 1;
    }
    lVar4 = FUN_18053d970(lVar3,*param_1);
    if ((lVar4 != 0) && (iVar1 = FUN_18053e8c0(lVar3,1), iVar1 != 0)) {
      iVar1 = FUN_18053f880(param_2,lVar3);
      if (-1 < iVar1) {
        *param_3 = *param_3 | 2;
      }
      if (param_1[2] != 0) {
        iVar1 = FUN_180543dc0(lVar3,param_2,param_1[2],*param_1,lVar2,0);
        if (iVar1 == 0) goto LAB_18056690b;
        iVar1 = FUN_18053fc60(lVar3);
        if (iVar1 == 0) {
          *param_3 = *param_3 | 4;
        }
      }
      local_28 = 1;
    }
  }
LAB_18056690b:
  FUN_18053e400(lVar2);
  FUN_18053e1c0(lVar2);
  return local_28;
}


/* address=1805669e0 name=FUN_1805669e0 */

int FUN_1805669e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_24;
  
  lVar3 = FUN_18053e150();
  if (lVar3 == 0) {
    local_24 = -1;
  }
  else {
    FUN_18053e250(lVar3);
    iVar1 = FUN_1805663b0(param_3);
    local_24 = -1;
    lVar4 = FUN_18053e2b0(lVar3);
    if (lVar4 != 0) {
      iVar2 = FUN_180566ab0(param_3,lVar4,param_2,lVar3);
      if (iVar2 != 0) {
        iVar2 = FUN_18053e010(param_1,(longlong)iVar1,lVar4);
        if (iVar2 != 0) {
          local_24 = iVar1;
        }
      }
    }
    FUN_18053e400(lVar3);
    FUN_18053e1c0(lVar3);
  }
  return local_24;
}


/* address=180566ab0 name=FUN_180566ab0 */

undefined4
FUN_180566ab0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = FUN_18053daa0(*param_1);
  if (uVar1 < 0x2711) {
    if (param_1[4] == 0) {
      FUN_18050f6f0(5,0,0x67,s_D__a_1_s_target_x86_64_pc_window_18094d1e0,CONCAT44(uVar5,0x120));
      local_18 = 0;
    }
    else {
      iVar2 = FUN_1805667b0(param_1,param_3,&local_14);
      if ((iVar2 == 0) || (local_14 != 0)) {
        FUN_18050f6f0(5,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18094d260,CONCAT44(uVar5,0x126));
        local_18 = 0;
      }
      else {
        local_18 = 0;
        FUN_18053e250(param_4);
        local_10 = FUN_18053e2b0(param_4);
        if ((local_10 != 0) &&
           (iVar2 = FUN_180555600(param_1 + 7,param_1 + 6,*param_1,param_4), iVar2 != 0)) {
          uVar4 = param_4;
          iVar2 = FUN_1805443f0(param_2,param_3,param_1[4],*param_1,param_4,param_1[7]);
          uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if ((iVar2 == 0) ||
             ((lVar3 = FUN_18053d970(local_10,*param_1), lVar3 == 0 ||
              (iVar2 = FUN_18053e8c0(local_10,1), iVar2 == 0)))) {
            FUN_18050f6f0(5,0,3,s_D__a_1_s_target_x86_64_pc_window_18094d2e0,CONCAT44(uVar5,0x138));
          }
          else {
            iVar2 = FUN_18053f930(param_2,1);
            if ((iVar2 < 1) || (iVar2 = FUN_18053f880(param_2,local_10), iVar2 == 0)) {
              FUN_18050f6f0(5,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18094d360,
                            CONCAT44(uVar5,0x13f));
            }
            else {
              local_18 = 1;
            }
          }
        }
        FUN_18053e400(param_4);
      }
    }
  }
  else {
    FUN_18050f6f0(5,0,0x66,s_D__a_1_s_target_x86_64_pc_window_18094d160,CONCAT44(uVar5,0x11b));
    local_18 = 0;
  }
  return local_18;
}


/* address=180566cd0 name=FUN_180566cd0 */

undefined8 FUN_180566cd0(undefined4 *param_1)

{
  FUN_180533b50(param_1,0,0x5c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}


/* address=180566d50 name=FUN_180566d50 */

undefined8 FUN_180566d50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18057fc10(FUN_180580010,param_1,param_1 + 0x18,0x40,param_1 + 0x58,param_1 + 0x14,
                param_1 + 0x10,param_2,param_3);
  return 1;
}


/* address=180566df0 name=FUN_180566df0 */

undefined8 FUN_180566df0(longlong param_1,undefined4 *param_2)

{
  FUN_18057fe70(FUN_180580010,param_2,param_2 + 6,0x40,param_2 + 0x16,param_2[5],param_2[4],0);
  FUN_180533bc0(param_1,*param_2);
  FUN_180533bc0(param_1 + 4,param_2[1]);
  FUN_180533bc0(param_1 + 8,param_2[2]);
  FUN_180533bc0(param_1 + 0xc,param_2[3]);
  return 1;
}


/* address=180566fb0 name=FUN_180566fb0 */

undefined8 FUN_180566fb0(undefined4 *param_1)

{
  FUN_180533b50(param_1,0,0x5c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}


/* address=180567030 name=FUN_180567030 */

undefined8 FUN_180567030(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18057fc10(FUN_1804ed780,param_1,param_1 + 0x18,0x40,param_1 + 0x58,param_1 + 0x14,
                param_1 + 0x10,param_2,param_3);
  return 1;
}


/* address=1805670d0 name=FUN_1805670d0 */

undefined8 FUN_1805670d0(longlong param_1,undefined4 *param_2)

{
  FUN_18057fe70(FUN_1804ed780,param_2,param_2 + 6,0x40,param_2 + 0x16,param_2[5],param_2[4],0);
  FUN_180533bc0(param_1,*param_2);
  FUN_180533bc0(param_1 + 4,param_2[1]);
  FUN_180533bc0(param_1 + 8,param_2[2]);
  FUN_180533bc0(param_1 + 0xc,param_2[3]);
  return 1;
}


/* address=180567390 name=FUN_180567390 */

undefined * FUN_180567390(void)

{
  return &DAT_180991be0;
}


/* address=1805673a0 name=FUN_1805673a0 */

undefined * FUN_1805673a0(void)

{
  return &DAT_180991c10;
}


/* address=1805673b0 name=FUN_1805673b0 */

void FUN_1805673b0(undefined4 *param_1)

{
  *param_1 = 0x101;
  param_1[1] = 0x10;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_180567290;
  *(undefined **)(param_1 + 6) = &LAB_1805672e0;
  *(undefined **)(param_1 + 8) = &LAB_180567340;
  param_1[10] = 0x40;
  param_1[0xb] = 0x5c;
  return;
}


/* address=180567550 name=FUN_180567550 */

undefined * FUN_180567550(void)

{
  return &DAT_180991c18;
}


/* address=180567560 name=FUN_180567560 */

undefined * FUN_180567560(void)

{
  return &DAT_180991c48;
}


/* address=180567570 name=FUN_180567570 */

void FUN_180567570(undefined4 *param_1)

{
  *param_1 = 4;
  param_1[1] = 0x10;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_180567450;
  *(undefined **)(param_1 + 6) = &LAB_1805674a0;
  *(undefined **)(param_1 + 8) = &LAB_180567500;
  param_1[10] = 0x40;
  param_1[0xb] = 0x5c;
  return;
}


/* address=180567710 name=FUN_180567710 */

undefined * FUN_180567710(void)

{
  return &DAT_180991c50;
}


/* address=180567720 name=FUN_180567720 */

undefined * FUN_180567720(void)

{
  return &DAT_180991c80;
}


/* address=180567730 name=FUN_180567730 */

void FUN_180567730(undefined4 *param_1)

{
  *param_1 = 0x40;
  param_1[1] = 0x14;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_180567610;
  *(undefined **)(param_1 + 6) = &LAB_180567660;
  *(undefined **)(param_1 + 8) = &LAB_1805676c0;
  param_1[10] = 0x40;
  param_1[0xb] = 0x60;
  return;
}


/* address=1805678d0 name=FUN_1805678d0 */

undefined * FUN_1805678d0(void)

{
  return &DAT_180991c88;
}


/* address=1805678e0 name=FUN_1805678e0 */

undefined * FUN_1805678e0(void)

{
  return &DAT_180991cb8;
}


/* address=1805678f0 name=FUN_1805678f0 */

void FUN_1805678f0(undefined4 *param_1)

{
  *param_1 = 0x2a3;
  param_1[1] = 0x1c;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_1805677d0;
  *(undefined **)(param_1 + 6) = &LAB_180567820;
  *(undefined **)(param_1 + 8) = &LAB_180567880;
  param_1[10] = 0x40;
  param_1[0xb] = 0x70;
  return;
}


/* address=180567a90 name=FUN_180567a90 */

undefined * FUN_180567a90(void)

{
  return &DAT_180991cc0;
}


/* address=180567aa0 name=FUN_180567aa0 */

undefined * FUN_180567aa0(void)

{
  return &DAT_180991cf0;
}


/* address=180567ab0 name=FUN_180567ab0 */

void FUN_180567ab0(undefined4 *param_1)

{
  *param_1 = 0x2a0;
  param_1[1] = 0x20;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_180567990;
  *(undefined **)(param_1 + 6) = &LAB_1805679e0;
  *(undefined **)(param_1 + 8) = &LAB_180567a40;
  param_1[10] = 0x40;
  param_1[0xb] = 0x70;
  return;
}


/* address=180567c50 name=FUN_180567c50 */

undefined * FUN_180567c50(void)

{
  return &DAT_180991cf8;
}


/* address=180567c60 name=FUN_180567c60 */

undefined * FUN_180567c60(void)

{
  return &DAT_180991d28;
}


/* address=180567c70 name=FUN_180567c70 */

void FUN_180567c70(undefined4 *param_1)

{
  *param_1 = 0x2a1;
  param_1[1] = 0x30;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_180567b50;
  *(undefined **)(param_1 + 6) = &LAB_180567ba0;
  *(undefined **)(param_1 + 8) = &LAB_180567c00;
  param_1[10] = 0x80;
  param_1[0xb] = 0xd8;
  return;
}


/* address=180567e10 name=FUN_180567e10 */

undefined * FUN_180567e10(void)

{
  return &DAT_180991d30;
}


/* address=180567e20 name=FUN_180567e20 */

undefined * FUN_180567e20(void)

{
  return &DAT_180991d60;
}


/* address=180567e30 name=FUN_180567e30 */

void FUN_180567e30(undefined4 *param_1)

{
  *param_1 = 0x2a2;
  param_1[1] = 0x40;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_180567d10;
  *(undefined **)(param_1 + 6) = &LAB_180567d60;
  *(undefined **)(param_1 + 8) = &LAB_180567dc0;
  param_1[10] = 0x80;
  param_1[0xb] = 0xd8;
  return;
}


/* address=180567fd0 name=FUN_180567fd0 */

undefined * FUN_180567fd0(void)

{
  return &DAT_180991d68;
}


/* address=180567fe0 name=FUN_180567fe0 */

undefined * FUN_180567fe0(void)

{
  return &DAT_180991d98;
}


/* address=180567ff0 name=FUN_180567ff0 */

void FUN_180567ff0(undefined4 *param_1)

{
  *param_1 = 0x3c2;
  param_1[1] = 0x20;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_180567ed0;
  *(undefined **)(param_1 + 6) = &LAB_180567f20;
  *(undefined **)(param_1 + 8) = &LAB_180567f80;
  param_1[10] = 0x80;
  param_1[0xb] = 0xd8;
  return;
}


/* address=180568210 name=FUN_180568210 */

undefined * FUN_180568210(void)

{
  return &DAT_180991da0;
}


/* address=180568220 name=FUN_180568220 */

undefined * FUN_180568220(void)

{
  return &DAT_180991dd0;
}


/* address=180568230 name=FUN_180568230 */

void FUN_180568230(undefined4 *param_1)

{
  *param_1 = 0x72;
  param_1[1] = 0x24;
  param_1[2] = 0;
  *(undefined **)(param_1 + 4) = &LAB_180568090;
  *(undefined **)(param_1 + 6) = &LAB_180568100;
  *(undefined **)(param_1 + 8) = &LAB_180568190;
  param_1[10] = 0x40;
  param_1[0xb] = 0xbc;
  return;
}


/* address=1805682d0 name=FUN_1805682d0 */

void FUN_1805682d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_18056b4f0(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


/* address=180568320 name=FUN_180568320 */

undefined8 FUN_180568320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18056b470(param_1,0);
  if (iVar1 == 0) {
    FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_180950420,0x87);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805328f0(param_1,param_2,param_3);
  }
  return uVar2;
}


/* address=180568390 name=FUN_180568390 */

void FUN_180568390(undefined8 *param_1,longlong param_2,undefined8 param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_c8;
  iVar1 = FUN_18056b470(param_1,0);
  if (iVar1 == 0) {
    local_a8 = CONCAT44(local_a8._4_4_,0x9a);
    FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_180950540);
    goto LAB_1805684fb;
  }
  if (param_2 == 0) {
    local_a8 = FUN_180532b10(*param_1);
    local_88 = local_a8;
    FUN_1805879a0(param_1[2],0,param_3,0);
    goto LAB_1805684fb;
  }
  FUN_18053d4f0();
  FUN_180532380(local_80);
  iVar1 = FUN_180532500(local_80,param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_180532930(local_80,local_58,local_90), iVar1 == 0)) {
LAB_18056847c:
    local_98 = 0;
  }
  else {
    local_a8 = (ulonglong)local_90[0];
    iVar1 = FUN_1805879a0(param_1[2],param_2,param_3,local_58);
    if (iVar1 == 0) goto LAB_18056847c;
    local_98 = 1;
  }
  local_94 = local_98;
  FUN_1805323f0(local_80);
  FUN_18053d500();
  if (local_94 != 0) {
    FUN_18053d560(param_1);
  }
LAB_1805684fb:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=180568520 name=FUN_180568520 */

int FUN_180568520(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  int local_18;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  FUN_18053d4f0();
  local_18 = 0;
  iVar1 = FUN_18056b470(param_1,0);
  if (iVar1 == 0) {
    if (*(longlong *)(**(longlong **)(param_1 + 0x10) + 0x30) == 0) {
      FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_180950660,CONCAT44(uVar2,0xe4));
    }
    else {
      local_18 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                           (*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
    }
  }
  else if ((param_2 == 0) || (iVar1 = FUN_180568320(param_1,param_4,param_5), iVar1 != 0)) {
    local_18 = FUN_180568390(param_1,param_2,param_3);
  }
  FUN_18053d500();
  if (local_18 != 0) {
    FUN_18053d560(param_1);
  }
  return local_18;
}


/* address=180568630 name=FUN_180568630 */

void FUN_180568630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_18056b4f0(param_1,param_2,param_3,param_4,param_5,1);
  return;
}


/* address=180568680 name=FUN_180568680 */

undefined8 FUN_180568680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18056b470(param_1,1);
  if (iVar1 == 0) {
    FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_1809504b0,0x90);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805328f0(param_1,param_2,param_3);
  }
  return uVar2;
}


/* address=1805686f0 name=FUN_1805686f0 */

void FUN_1805686f0(longlong param_1,undefined8 param_2,undefined8 param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  iVar1 = FUN_18056b470(param_1,1);
  if (iVar1 == 0) {
    local_98 = CONCAT44(local_98._4_4_,0xba);
    FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_1809505d0);
    goto LAB_180568808;
  }
  FUN_18053d4f0();
  FUN_180532380(local_78);
  iVar1 = FUN_180532500(local_78,param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_180532930(local_78,local_58,local_80), iVar1 == 0)) {
LAB_1805687d0:
    local_88 = 0;
  }
  else {
    local_98 = (ulonglong)local_80[0];
    iVar1 = FUN_180587af0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,local_58);
    if (iVar1 == 0) goto LAB_1805687d0;
    local_88 = 1;
  }
  local_84 = local_88;
  FUN_18053d500();
  FUN_1805323f0(local_78);
  if (local_84 != 0) {
    FUN_18053d570(param_1);
  }
LAB_180568808:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=180568830 name=FUN_180568830 */

int FUN_180568830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  int local_18;
  int local_14;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  FUN_18053d4f0();
  local_18 = 0;
  iVar1 = FUN_18056b470(param_1,1);
  if (iVar1 == 0) {
    if (*(longlong *)(**(longlong **)(param_1 + 0x10) + 0x40) == 0) {
      FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_1809506f0,CONCAT44(uVar2,0xff));
    }
    else {
      local_18 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
                           (*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,param_5);
    }
    goto LAB_180568920;
  }
  iVar1 = FUN_180568680(param_1,param_4,param_5);
  if (iVar1 == 0) {
LAB_1805688a2:
    local_14 = 0;
  }
  else {
    iVar1 = FUN_1805686f0(param_1,param_2,param_3);
    if (iVar1 == 0) goto LAB_1805688a2;
    local_14 = 1;
  }
  local_18 = local_14;
LAB_180568920:
  FUN_18053d500();
  if (local_18 != 0) {
    FUN_18053d570(param_1);
  }
  return local_18;
}


/* address=180568b10 name=FUN_180568b10 */

void FUN_180568b10(void)

{
  FUN_180568b30(0);
  return;
}


/* address=180568b30 name=FUN_180568b30 */

longlong * FUN_180568b30(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_18058f4e0(0xc0);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_180533b50(plVar2,0,0xc0);
    if (param_1 != 0) {
      lVar3 = FUN_180609290(param_1);
      *plVar2 = lVar3;
    }
    if (*plVar2 == 0) {
      lVar3 = FUN_180581fd0();
      *plVar2 = lVar3;
    }
    FUN_180609310(*plVar2);
    *(undefined4 *)(plVar2 + 10) = 1;
    *(undefined4 *)((longlong)plVar2 + 0x54) = *(undefined4 *)(*plVar2 + 0x48);
    FUN_18059e1f0(plVar2 + 0xb);
    FUN_1805ad770(plVar2 + 9);
    if ((*(longlong *)(*plVar2 + 0x10) != 0) &&
       (iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2), iVar1 == 0)) {
      uVar4 = FUN_180583d90();
      FUN_1805ad790(uVar4,plVar2,plVar2 + 9);
      FUN_18059e290(plVar2 + 0xb);
      FUN_180609350(*plVar2);
      FUN_18058f610(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}


/* address=180568c70 name=FUN_180568c70 */

void FUN_180568c70(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != (longlong *)0x0) && (iVar1 = FUN_18059b000(param_1 + 10), iVar1 != 0)) {
    if (*(longlong *)(*param_1 + 0x18) != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    FUN_180609350(*param_1);
    uVar2 = FUN_180583d90();
    FUN_1805ad790(uVar2,param_1,param_1 + 9);
    FUN_18053d880(param_1[1]);
    FUN_18053d880(param_1[2]);
    FUN_18053d880(param_1[3]);
    FUN_18053d880(param_1[4]);
    FUN_18053d880(param_1[5]);
    FUN_18053d880(param_1[6]);
    FUN_18053d880(param_1[7]);
    FUN_18053d880(param_1[8]);
    FUN_180583250(param_1);
    FUN_18059e290(param_1 + 0xb);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=180568da0 name=FUN_180568da0 */

undefined8 FUN_180568da0(longlong param_1)

{
  FUN_18059afb0(param_1 + 0x50);
  return 1;
}


/* address=180568dd0 name=FUN_180568dd0 */

void FUN_180568dd0(longlong param_1)

{
  FUN_18053daa0(*(undefined8 *)(param_1 + 8));
  return;
}


/* address=180568e00 name=FUN_180568e00 */

undefined8 FUN_180568e00(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=180568e20 name=FUN_180568e20 */

undefined8 FUN_180568e20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=180569290 name=FUN_180569290 */

void FUN_180569290(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180585e10(param_1,param_2,param_3,param_4,0);
  return;
}


/* address=1805693c0 name=FUN_1805693c0 */

void FUN_1805693c0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_180533e10();
  FUN_180583990(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* address=180569420 name=FUN_180569420 */

undefined4
FUN_180569420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  lVar3 = FUN_180532b10(param_7);
  if (param_6 != lVar3) {
    FUN_18050f6f0(4,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_18095a890,CONCAT44(uVar1,0x292));
    return 0;
  }
  uVar1 = FUN_1805697e0(param_1);
  lVar3 = FUN_18058f4e0(uVar1);
  if (lVar3 != 0) {
    iVar2 = FUN_18056a7e0(param_1,lVar3,param_5,param_7,param_8,CONCAT44(uVar4,param_9));
    if ((iVar2 == 0) ||
       (iVar2 = FUN_180569560(param_1,param_2,param_3,param_4,lVar3,uVar1,3), iVar2 == 0)) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    FUN_18058f610(lVar3);
    return local_28;
  }
  return 0;
}


/* address=180569560 name=FUN_180569560 */

void FUN_180569560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_180533e10();
  FUN_180583e30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* address=1805695c0 name=FUN_1805695c0 */

void FUN_1805695c0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_180533e10();
  FUN_180583400(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* address=180569620 name=FUN_180569620 */

undefined4
FUN_180569620(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
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
  lVar3 = FUN_180532b10(param_4);
  if (param_3 == lVar3) {
    uVar1 = FUN_1805697e0(param_1);
    local_20 = (ulonglong)uVar1;
    local_18 = FUN_18058f4e0(local_20);
    if (local_18 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = 0;
      iVar2 = FUN_180569780(param_1,&local_20,local_18,local_20,param_7,param_8,3);
      uVar5 = (undefined4)((ulonglong)param_8 >> 0x20);
      uVar4 = (undefined4)((ulonglong)param_7 >> 0x20);
      if (iVar2 != 0) {
        uVar1 = FUN_1805697e0(param_1);
        if (local_20 == uVar1) {
          local_28 = FUN_18056a2a0(param_1,param_2,param_4,param_5,local_18,CONCAT44(uVar5,param_6))
          ;
        }
        else {
          FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095ab10,CONCAT44(uVar4,0x2f1))
          ;
        }
      }
      FUN_18058f610(local_18);
    }
  }
  else {
    FUN_18050f6f0(4,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_18095aa90,CONCAT44(uVar4,0x2e1));
    local_28 = 0;
  }
  return local_28;
}


/* address=180569780 name=FUN_180569780 */

void FUN_180569780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_180533e10();
  FUN_180583600(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* address=1805697e0 name=FUN_1805697e0 */

ulonglong FUN_1805697e0(longlong *param_1)

{
  ulonglong local_18;
  
  if (*(longlong *)(*param_1 + 0x20) == 0) {
    local_18 = FUN_180582000(param_1);
  }
  else {
    local_18 = (**(code **)(*param_1 + 0x20))(param_1);
  }
  if (0xfffffffe < local_18) {
    FID_conflict__assert
              (u_ret_<_UINT_MAX_18095a1a0,u_D__a_1_s_target_x86_64_pc_window_18095a0a0,0x1b2);
  }
  return local_18 & 0xffffffff;
}


/* address=180569860 name=FUN_180569860 */

undefined4 FUN_180569860(longlong *param_1)

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


/* address=1805698b0 name=FUN_1805698b0 */

undefined4 FUN_1805698b0(longlong param_1)

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
  
  iVar1 = FUN_180569860(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_180582f00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) != (*(longlong *)(param_1 + 0x28) != 0)) {
    FUN_18050f6f0(4,0,0x86,s_D__a_1_s_target_x86_64_pc_window_18095ab90,0x324);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     ((iVar1 = FUN_18053dc90(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0 ||
      (iVar1 = FUN_18053f880(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8)),
      -1 < iVar1)))) {
    FUN_18050f6f0(4,0,0x93,s_D__a_1_s_target_x86_64_pc_window_18095ac10,0x32c);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    return 1;
  }
  lVar4 = FUN_18053e150();
  if (lVar4 == 0) {
    return 0;
  }
  local_b0 = 0;
  FUN_18053d850(local_88);
  FUN_18053d850(local_a0);
  FUN_18053d850(local_70);
  FUN_18053d850(local_58);
  FUN_18053d850(local_40);
  FUN_18053d850(local_28);
  iVar1 = FUN_18053dc90(*(undefined8 *)(param_1 + 0x20));
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_18053f880(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8)),
       iVar1 < 0)) && (iVar1 = FUN_18053dc90(*(undefined8 *)(param_1 + 0x28)), iVar1 == 0)) &&
     (iVar1 = FUN_18053f880(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8)), iVar1 < 0
     )) {
    iVar1 = FUN_180553a10(local_88,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                          lVar4);
    if (iVar1 == 0) {
      FUN_18050f6f0(4,0,3,s_D__a_1_s_target_x86_64_pc_window_18095ad10,0x34e);
    }
    else {
      iVar1 = FUN_18053f880(local_88,*(undefined8 *)(param_1 + 8));
      if (iVar1 == 0) {
        uVar5 = FUN_18053da70();
        iVar1 = FUN_1805536d0(local_70,*(undefined8 *)(param_1 + 0x20),uVar5);
        if (iVar1 != 0) {
          uVar5 = FUN_18053da70();
          iVar1 = FUN_1805536d0(local_58,*(undefined8 *)(param_1 + 0x28),uVar5);
          if (iVar1 != 0) {
            uVar2 = FUN_18053daa0(local_70);
            uVar3 = FUN_18053daa0(local_58);
            iVar1 = FUN_180553a10(local_a0,*(undefined8 *)(param_1 + 0x18),
                                  *(undefined8 *)(param_1 + 0x10),lVar4);
            if (((iVar1 == 0) ||
                (iVar1 = FUN_180553d30(0,local_88,local_a0,local_70,uVar2,lVar4), iVar1 == 0)) ||
               (iVar1 = FUN_180553d30(0,local_a0,local_a0,local_58,uVar3,lVar4), iVar1 == 0)) {
              FUN_18050f6f0(4,0,3,s_D__a_1_s_target_x86_64_pc_window_18095ae90,0x364);
            }
            else {
              iVar1 = FUN_18053fc60(local_88);
              if ((iVar1 == 0) || (iVar1 = FUN_18053fc60(local_a0), iVar1 == 0)) {
                FUN_18050f6f0(4,0,0x77,s_D__a_1_s_target_x86_64_pc_window_18095af10,0x369);
              }
              else {
                bVar6 = *(longlong *)(param_1 + 0x30) != 0;
                if ((bVar6 == (*(longlong *)(param_1 + 0x38) != 0)) &&
                   (bVar6 == (*(longlong *)(param_1 + 0x40) != 0))) {
                  if (bVar6) {
                    iVar1 = FUN_180584000(&local_ac,*(undefined8 *)(param_1 + 0x10),
                                          *(undefined8 *)(param_1 + 0x30),local_70,uVar2,lVar4);
                    if (((iVar1 == 0) ||
                        (iVar1 = FUN_180584000(&local_a8,*(undefined8 *)(param_1 + 0x10),
                                               *(undefined8 *)(param_1 + 0x38),local_58,uVar3,lVar4)
                        , iVar1 == 0)) ||
                       (iVar1 = FUN_180584000(&local_a4,*(undefined8 *)(param_1 + 0x28),
                                              *(undefined8 *)(param_1 + 0x40),
                                              *(undefined8 *)(param_1 + 0x20),uVar2,lVar4),
                       iVar1 == 0)) {
                      FUN_18050f6f0(4,0,3,s_D__a_1_s_target_x86_64_pc_window_18095b010,0x37c);
                      goto LAB_180569efa;
                    }
                    if (((local_ac == 0) || (local_a8 == 0)) || (local_a4 == 0)) {
                      FUN_18050f6f0(4,0,0x6f,s_D__a_1_s_target_x86_64_pc_window_18095b090,0x381);
                      goto LAB_180569efa;
                    }
                  }
                  local_b0 = 1;
                }
                else {
                  FUN_18050f6f0(4,0,0x7b,s_D__a_1_s_target_x86_64_pc_window_18095af90,0x370);
                }
              }
            }
            goto LAB_180569efa;
          }
        }
        FUN_18050f6f0(4,0,3,s_D__a_1_s_target_x86_64_pc_window_18095ae10,0x35c);
      }
      else {
        FUN_18050f6f0(4,0,0x84,s_D__a_1_s_target_x86_64_pc_window_18095ad90,0x352);
      }
    }
  }
  else {
    FUN_18050f6f0(4,0,0x84,s_D__a_1_s_target_x86_64_pc_window_18095ac90,0x34a);
  }
LAB_180569efa:
  FUN_18053d880(local_88);
  FUN_18053d880(local_a0);
  FUN_18053d880(local_70);
  FUN_18053d880(local_58);
  FUN_18053d880(local_40);
  FUN_18053d880(local_28);
  FUN_18053e1c0(lVar4);
  return local_b0;
}


/* address=180569f70 name=FUN_180569f70 */

void FUN_180569f70(longlong param_1)

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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_98;
  iVar1 = FUN_180569860(param_1);
  if (iVar1 != 0) {
    local_78 = (uint *)CONCAT44(local_78._4_4_,0x3ad);
    FUN_18050f6f0(4,0,0x92,s_D__a_1_s_target_x86_64_pc_window_18095b110);
    goto LAB_18056a279;
  }
  iVar1 = FUN_1805698b0(param_1);
  if ((iVar1 == 0) || (local_60 = FUN_18053e150(), local_60 == 0)) goto LAB_18056a279;
  FUN_18053d850(local_48);
  local_68 = 1;
  uVar2 = FUN_18053daa0(*(undefined8 *)(param_1 + 0x10));
  if ((uVar2 < 0x11) ||
     (((uVar2 = FUN_18053daa0(*(undefined8 *)(param_1 + 0x10)), 0x100 < uVar2 ||
       (iVar1 = FUN_18053fd10(*(undefined8 *)(param_1 + 8)), iVar1 == 0)) ||
      (iVar1 = FUN_18053fd10(*(undefined8 *)(param_1 + 0x10)), iVar1 == 0)))) {
LAB_18056a0d2:
    local_78 = (uint *)CONCAT44(local_78._4_4_,0x3d0);
    FUN_18050f6f0(4,0,0x92,s_D__a_1_s_target_x86_64_pc_window_18095b190);
    local_68 = 0;
  }
  else {
    uVar3 = FUN_1805841a0();
    iVar1 = FUN_180542ee0(local_48,*(undefined8 *)(param_1 + 8),uVar3,local_60);
    if ((iVar1 == 0) || (iVar1 = FUN_18053fc60(local_48), iVar1 == 0)) goto LAB_18056a0d2;
    local_78 = (uint *)0x0;
    iVar1 = FUN_1805425b0(local_50,*(undefined8 *)(param_1 + 8),0,local_60);
    if ((iVar1 == 0) || (local_50[0] != 2)) goto LAB_18056a0d2;
  }
  FUN_18053d880(local_48);
  FUN_18053e1c0(local_60);
  if (((local_68 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (*(longlong *)(param_1 + 0x20) != 0)) {
    pbVar5 = local_30;
    for (lVar4 = 0x20; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
    }
    local_64 = FUN_1805697e0(param_1);
    local_58 = FUN_18058f4e0(local_64);
    if (local_58 != 0) {
      local_78 = &local_64;
      local_70 = param_1;
      iVar1 = FUN_1805693c0(0x2a0,local_30,0x20,local_58);
      if (iVar1 == 0) {
        local_78 = (uint *)CONCAT44(local_78._4_4_,0x3e9);
        FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095b210);
        local_68 = 0;
      }
      else {
        iVar1 = FUN_180533e50(s_RSA_PWCT_18095b290);
        if (iVar1 != 0) {
          local_30[0] = ~local_30[0];
        }
        local_78 = (uint *)(ulonglong)local_64;
        local_70 = param_1;
        iVar1 = FUN_1805695c0(0x2a0,local_30,0x20,local_58);
        if (iVar1 == 0) {
          local_78 = (uint *)CONCAT44(local_78._4_4_,0x3f1);
          FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095b2a0);
          local_68 = 0;
        }
      }
      FUN_18058f610(local_58);
    }
  }
LAB_18056a279:
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_98);
  return;
}


/* address=18056a2a0 name=FUN_18056a2a0 */

void FUN_18056a2a0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_f8;
  local_res20 = param_4;
  if (param_4 == 0) {
    local_res20 = param_3;
  }
  local_90 = 0;
  local_c8 = (byte *)0x0;
  FUN_180532380(local_80);
  FUN_18053d4f0();
  local_a8 = FUN_180532b10(param_3);
  if (param_6 == -1) {
    param_6 = (int)local_a8;
  }
  else if (param_6 == -2) {
    param_6 = -2;
  }
  else if (param_6 < -2) {
    local_d8 = CONCAT44(local_d8._4_4_,0xe9);
    FUN_18050f6f0(4,0,0x8a,s_D__a_1_s_target_x86_64_pc_window_1809598d0);
    goto LAB_18056a79d;
  }
  iVar2 = FUN_18053daa0(*(undefined8 *)(param_1 + 8));
  local_b8 = iVar2 - 1U & 7;
  uVar3 = FUN_1805697e0(param_1);
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
      FUN_18050f6f0(4,0 << bVar1,0x71,s_D__a_1_s_target_x86_64_pc_window_1809599f0);
    }
    else if (param_5[local_a0 - 1] == 0xbc) {
      local_b0 = (local_a0 - local_a8) - 1;
      local_88 = param_5 + local_b0;
      local_c8 = (byte *)FUN_18058f4e0(local_b0);
      if (local_c8 != (byte *)0x0) {
        local_d8 = local_res20;
        iVar2 = FUN_180582910(local_c8,local_b0,local_88,local_a8);
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
              iVar2 = FUN_1805327c0(local_80,param_3,0);
              if (((iVar2 != 0) &&
                  (((iVar2 = FUN_1805328f0(local_80,&DAT_180726178,8), iVar2 != 0 &&
                    (iVar2 = FUN_1805328f0(local_80,param_2,local_a8), iVar2 != 0)) &&
                   (iVar2 = FUN_1805328f0(local_80,local_c8 + local_c0,local_b0 - local_c0),
                   iVar2 != 0)))) && (iVar2 = FUN_180532930(local_80,local_58,0), iVar2 != 0)) {
                iVar2 = FUN_180533a70(local_58,local_88,local_a8);
                if (iVar2 == 0) {
                  local_90 = 1;
                }
                else {
                  local_d8 = CONCAT44(local_d8._4_4_,299);
                  FUN_18050f6f0(4,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180959c30);
                }
              }
            }
            else {
              local_d8 = CONCAT44(local_d8._4_4_,0x11f);
              FUN_18050f6f0(4,0,0x8a,s_D__a_1_s_target_x86_64_pc_window_180959ba0);
            }
          }
          else {
            local_d8 = CONCAT44(local_d8._4_4_,0x119);
            FUN_18050f6f0(4,0,0x8b,s_D__a_1_s_target_x86_64_pc_window_180959b10);
          }
        }
      }
    }
    else {
      local_d8 = CONCAT44(local_d8._4_4_,0xfe);
      FUN_18050f6f0(4,0 << bVar1,0x7f,s_D__a_1_s_target_x86_64_pc_window_180959a80);
    }
  }
  else {
    local_d8 = CONCAT44(local_d8._4_4_,0xf0);
    FUN_18050f6f0(4,0 << bVar1,0x7a,s_D__a_1_s_target_x86_64_pc_window_180959960);
  }
LAB_18056a79d:
  FUN_18058f610(local_c8);
  FUN_1805323f0(local_80);
  FUN_18053d500();
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_f8);
  return;
}


/* address=18056a7e0 name=FUN_18056a7e0 */

undefined4
FUN_18056a7e0(longlong param_1,byte *param_2,undefined8 param_3,longlong param_4,longlong param_5,
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
  FUN_18053d4f0();
  uVar6 = FUN_180532b10(param_4);
  iVar4 = FUN_18053fc40(*(undefined8 *)(param_1 + 8));
  if (iVar4 == 0) {
    cVar2 = FUN_18053daa0(*(undefined8 *)(param_1 + 8));
    bVar3 = cVar2 - 1U & 7;
    uVar5 = FUN_1805697e0(param_1);
    local_78 = (ulonglong)uVar5;
    local_res10 = param_2;
    if (bVar3 == 0) {
      if (local_78 == 0) {
        FID_conflict__assert
                  (u_emLen_>__1_180959e58,u_D__a_1_s_target_x86_64_pc_window_180959d50,0x150);
      }
      *param_2 = 0;
      local_res10 = param_2 + 1;
      local_78 = local_78 - 1;
    }
    if (local_78 < uVar6 + 2) {
      FUN_18050f6f0(4,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180959e70,0x156);
    }
    else {
      local_88 = uVar6;
      if (param_6 != -1) {
        if (param_6 == -2) {
          local_88 = (local_78 - uVar6) - 2;
        }
        else {
          if (param_6 < 0) {
            FUN_18050f6f0(4,0,0x8a,s_D__a_1_s_target_x86_64_pc_window_180959f00,0x164);
            goto LAB_18056ac7e;
          }
          local_88 = (longlong)param_6;
        }
      }
      if ((local_78 - uVar6) - 2 < local_88) {
        FUN_18050f6f0(4,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180959f90,0x16b);
      }
      else if ((local_88 == 0) ||
              ((local_68 = FUN_18058f4e0(local_88), local_68 != 0 &&
               (iVar4 = FUN_18055bbd0(local_68,local_88), iVar4 != 0)))) {
        lVar7 = (local_78 - uVar6) + -1;
        FUN_180532380(local_30);
        iVar4 = FUN_1805327c0(local_30,param_4,0);
        if ((iVar4 == 0) ||
           ((((iVar4 = FUN_1805328f0(local_30,&DAT_180726178,8), iVar4 == 0 ||
              (iVar4 = FUN_1805328f0(local_30,param_3,uVar6), iVar4 == 0)) ||
             (iVar4 = FUN_1805328f0(local_30,local_68,local_88), iVar4 == 0)) ||
            (iVar4 = FUN_180532930(local_30,local_res10 + lVar7,0), iVar4 == 0)))) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        FUN_1805323f0(local_30);
        if ((bVar1) &&
           (iVar4 = FUN_180582910(local_res10,lVar7,local_res10 + lVar7,uVar6,param_5), iVar4 != 0))
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
    FUN_18050f6f0(4,0,0x78,s_D__a_1_s_target_x86_64_pc_window_180959cc0,CONCAT44(uVar8,0x149));
  }
LAB_18056ac7e:
  FUN_18058f610(local_68);
  FUN_18053d500();
  return local_5c;
}


/* address=18056aca0 name=FUN_18056aca0 */

undefined8
FUN_18056aca0(longlong *param_1,ulonglong *param_2,undefined4 *param_3,int param_4,longlong param_5,
             ulonglong param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_38;
  
  iVar1 = FUN_180583ee0(param_4,param_6);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_4 == 0x72) {
    if (param_6 != DAT_180726228) {
      FID_conflict__assert
                (u_digest_len____SSL_SIG_LENGTH_18095a440,
                 u_D__a_1_s_target_x86_64_pc_window_18095a340,0x231);
    }
    *param_1 = param_5;
    *param_2 = param_6;
    *param_3 = 0;
    uVar2 = 1;
  }
  else {
    for (local_38 = 0; *(int *)(&DAT_1807265c0 + local_38 * 0x1c) != 0; local_38 = local_38 + 1) {
      lVar3 = local_38 * 0x1c;
      if (*(int *)(&DAT_1807265c0 + lVar3) == param_4) {
        if (param_6 != (byte)(&DAT_1807265c4)[lVar3]) {
          FID_conflict__assert
                    (u_digest_len____sig_prefix_>hash_l_18095a580,
                     u_D__a_1_s_target_x86_64_pc_window_18095a480,0x23f);
        }
        uVar4 = (ulonglong)(byte)(&DAT_1807265c5)[lVar3];
        uVar6 = uVar4 + param_6;
        if (uVar6 < uVar4) {
          FUN_18050f6f0(4,0,0x8c,s_D__a_1_s_target_x86_64_pc_window_18095a5d0,0x244);
          return 0;
        }
        lVar5 = FUN_18058f4e0(uVar6);
        if (lVar5 == 0) {
          return 0;
        }
        FUN_180533ab0(lVar5,&UNK_1807265c6 + lVar3,uVar4);
        FUN_180533ab0(lVar5 + uVar4,param_5,param_6);
        *param_1 = lVar5;
        *param_2 = uVar6;
        *param_3 = 1;
        return 1;
      }
    }
    FUN_18050f6f0(4,0,0x8e,s_D__a_1_s_target_x86_64_pc_window_18095a650,599);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=18056b3d0 name=FUN_18056b3d0 */

undefined * FUN_18056b3d0(void)

{
  return &DAT_180991dd8;
}


/* address=18056b3e0 name=FUN_18056b3e0 */

undefined * FUN_18056b3e0(void)

{
  return &DAT_180991de8;
}


/* address=18056b3f0 name=FUN_18056b3f0 */

void FUN_18056b3f0(code **param_1)

{
  *param_1 = FUN_180587740;
  param_1[1] = (code *)&LAB_1805877b0;
  return;
}


/* address=18056b440 name=FUN_18056b440 */

void FUN_18056b440(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18056b3e0();
  FUN_18059e1b0(uVar1,&LAB_18056b420);
  FUN_18056b3d0();
  return;
}


/* address=18056b470 name=FUN_18056b470 */

bool FUN_18056b470(longlong param_1,int param_2)

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


/* address=18056b4f0 name=FUN_18056b4f0 */

undefined8
FUN_18056b4f0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar2 = FUN_180587600(param_5,param_4);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18056b440();
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    if (param_6 == 1) {
      iVar1 = FUN_180587a70(*(undefined8 *)(param_1 + 0x10));
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_180587920(*(undefined8 *)(param_1 + 0x10));
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_3 == 0) ||
       (iVar1 = FUN_18050e470(*(undefined8 *)(param_1 + 0x10),param_3), iVar1 != 0)) {
      iVar1 = FUN_18056b470(param_1,param_6);
      if (iVar1 != 0) {
        if (param_3 == 0) {
          FUN_18050f6f0(6,0,0x77,s_D__a_1_s_target_x86_64_pc_window_180950390,0x6d);
          return 0;
        }
        iVar1 = FUN_1805327c0(param_1,param_3,param_4);
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


/* address=18056b630 name=FUN_18056b630 */

longlong FUN_18056b630(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_48;
  ulonglong local_40;
  longlong *local_38;
  longlong local_30;
  longlong local_20;
  
  lVar1 = FUN_180575700();
  local_38 = (longlong *)0x0;
  lVar2 = FUN_1805741e0();
  local_30 = 0;
  local_40 = 0;
  do {
    if (3 < local_40) {
LAB_18056b6c2:
      if (local_30 == 0) {
        FUN_18050f6f0(0xf,0,0x7b,s_D__a_1_s_target_x86_64_pc_window_180951890,0x207);
        local_48 = 0;
      }
      else {
        uVar3 = FUN_180575710();
        FUN_18059e2a0(uVar3);
        local_48 = *local_38;
        uVar3 = FUN_180575710();
        FUN_18059e300(uVar3);
        if (local_48 == 0) {
          lVar1 = FUN_180575400(local_30);
          if (lVar1 == 0) {
            local_48 = 0;
          }
          else {
            local_20 = 0;
            uVar3 = FUN_180575710();
            FUN_18059e2d0(uVar3);
            if (*local_38 == 0) {
              *local_38 = lVar1;
              *(int *)(lVar1 + 0x28) = param_1;
              local_48 = lVar1;
            }
            else {
              local_48 = *local_38;
              local_20 = lVar1;
            }
            uVar3 = FUN_180575710();
            FUN_18059e330(uVar3);
            FUN_18056b7d0(local_20);
          }
        }
      }
      return local_48;
    }
    if (*(int *)(lVar2 + local_40 * 0x38) == param_1) {
      local_30 = lVar2 + local_40 * 0x38;
      local_38 = (longlong *)(lVar1 + local_40 * 8);
      goto LAB_18056b6c2;
    }
    local_40 = local_40 + 1;
  } while( true );
}


/* address=18056b7d0 name=FUN_18056b7d0 */

void FUN_18056b7d0(longlong *param_1)

{
  int iVar1;
  
  if (((param_1 != (longlong *)0x0) && (*(int *)(param_1 + 5) == 0)) &&
     (iVar1 = FUN_18059b000(param_1 + 0x26), iVar1 != 0)) {
    if (*(longlong *)(*param_1 + 8) != 0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
    FUN_180574e80(param_1[1],0);
    FUN_18053d880(param_1 + 2);
    FUN_180543780(param_1[6]);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=18056b870 name=FUN_18056b870 */

longlong FUN_18056b870(longlong param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 0)) {
    FUN_18059afb0(param_1 + 0x130);
  }
  return param_1;
}


/* address=18056b8c0 name=FUN_18056b8c0 */

undefined4 FUN_18056b8c0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 local_18;
  
  if (param_1 == param_2) {
    local_18 = 0;
  }
  else if (*(int *)(param_1 + 5) == *(int *)(param_2 + 5)) {
    if (*(int *)(param_1 + 5) == 0) {
      if (((((*param_1 == *param_2) && (param_1[1] != 0)) && (param_2[1] != 0)) &&
          ((iVar1 = FUN_18053f880(param_1 + 2,param_2 + 2), iVar1 == 0 &&
           (iVar1 = FUN_18053f880(param_1 + 7,param_2 + 7), iVar1 == 0)))) &&
         ((iVar1 = FUN_18056f6c0(param_1,param_1 + 10,param_2 + 10), iVar1 != 0 &&
          ((iVar1 = FUN_18056f6c0(param_1,param_1 + 0x13,param_2 + 0x13), iVar1 != 0 &&
           (iVar1 = FUN_180573820(param_1,param_1[1] + 8,param_2[1] + 8), iVar1 != 0)))))) {
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


/* address=18056ba50 name=FUN_18056ba50 */

longlong FUN_18056ba50(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_18053fc40(param_1 + 0x10);
  if (iVar1 != 0) {
    FID_conflict__assert
              (u__BN_is_zero__group_>order__180951a10,u_D__a_1_s_target_x86_64_pc_window_180951910,
               0x269);
  }
  return param_1 + 0x10;
}


/* address=18056bb00 name=FUN_18056bb00 */

void FUN_18056bb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180572470(param_1,param_2,param_3,param_4);
  return;
}


/* address=18056bb40 name=FUN_18056bb40 */

undefined4 FUN_18056bb40(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


/* address=18056bb60 name=FUN_18056bb60 */

void FUN_18056bb60(longlong param_1)

{
  FUN_18053daa0(param_1 + 0x38);
  return;
}


/* address=18056bb90 name=FUN_18056bb90 */

char * FUN_18056bb90(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 0x19f) {
    pcVar1 = s_P_256_180940fd4;
  }
  else if (param_1 == 0x2c9) {
    pcVar1 = s_P_224_180940ea4;
  }
  else if (param_1 == 0x2cb) {
    pcVar1 = s_P_384_180951a48;
  }
  else if (param_1 == 0x2cc) {
    pcVar1 = s_P_521_180951a50;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}


/* address=18056bc90 name=FUN_18056bc90 */

undefined8 * FUN_18056bc90(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    FUN_18050f6f0(0xf,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180951a80,0x2a9);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_18058f4e0(0xe0);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_18056b870(param_1);
      *puVar1 = uVar2;
      FUN_180572510(puVar1 + 1);
    }
  }
  return puVar1;
}


/* address=18056bd20 name=FUN_18056bd20 */

void FUN_18056bd20(undefined8 param_1)

{
  FUN_180574e80(param_1,1);
  return;
}


/* address=18056bd50 name=FUN_18056bd50 */

undefined8 FUN_18056bd50(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18056b8c0(*param_1,*param_2,0);
  if (iVar1 == 0) {
    if (param_1 == param_2) {
      uVar2 = 1;
    }
    else {
      FUN_180572570(param_1 + 1,param_2 + 1);
      uVar2 = 1;
    }
  }
  else {
    FUN_18050f6f0(0xf,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180951b00,0x2c9);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=18056bde0 name=FUN_18056bde0 */

longlong FUN_18056bde0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18056bc90(param_2);
    if ((lVar2 == 0) || (iVar1 = FUN_18056bd50(lVar2,param_1), iVar1 == 0)) {
      FUN_18056bd20(lVar2);
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* address=18056bed0 name=FUN_18056bed0 */

undefined8 FUN_18056bed0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18056b8c0(param_1,*param_2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_180573520(param_1,param_2 + 1);
  }
  else {
    FUN_18050f6f0(0xf,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180951c00,0x2ed);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=18056bf40 name=FUN_18056bf40 */

undefined8 FUN_18056bf40(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18056b8c0(param_1,*param_2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_180573570(param_1,param_2 + 1);
  }
  else {
    FUN_18050f6f0(0xf,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180951c80,0x2f6);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=18056bfc0 name=FUN_18056bfc0 */

uint FUN_18056bfc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint local_18;
  
  iVar1 = FUN_18056b8c0(param_1,*param_2,0);
  if ((iVar1 == 0) && (iVar1 = FUN_18056b8c0(param_1,*param_3,0), iVar1 == 0)) {
    iVar1 = FUN_180573820(param_1,param_2 + 1,param_3 + 1);
    local_18 = (uint)(iVar1 == 0);
  }
  else {
    FUN_18050f6f0(0xf,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180951d00,0x300);
    local_18 = 0xffffffff;
  }
  return local_18;
}


/* address=18056c080 name=FUN_18056c080 */

void FUN_18056c080(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_108;
  if (*(longlong *)(*param_1 + 0x18) == 0) {
    local_e8 = 0x30c;
    FUN_18050f6f0(0xf,0,0x42,s_D__a_1_s_target_x86_64_pc_window_180951d80);
  }
  else {
    iVar1 = FUN_18056b8c0(param_1,*param_2,0);
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
         (((param_3 == 0 || (iVar1 = FUN_18056f280(param_1,param_3,local_b8), iVar1 != 0)) &&
          (param_4 != 0)))) {
        FUN_18056f280(param_1,param_4,local_68);
      }
    }
    else {
      local_e8 = 0x310;
      FUN_18050f6f0(0xf,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180951e00);
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_108);
  return;
}


/* address=18056c280 name=FUN_18056c280 */

void FUN_18056c280(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined auStack_178 [32];
  undefined4 local_158;
  undefined local_148 [80];
  undefined local_f8 [80];
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_178;
  iVar1 = FUN_18056b8c0(param_1,*param_2,0);
  if (iVar1 == 0) {
    if ((param_3 == 0) || (param_4 == 0)) {
      local_158 = 0x363;
      FUN_18050f6f0(0xf,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180952180);
    }
    else {
      iVar1 = FUN_18056f160(param_1,local_f8,param_3);
      if (iVar1 != 0) {
        iVar1 = FUN_18056f160(param_1,local_148,param_4);
        if (iVar1 != 0) {
          iVar1 = FUN_18056f880(param_1,local_a8,local_f8,local_148);
          if (iVar1 != 0) {
            FUN_18056f730(param_1,param_2 + 1,local_a8);
            goto LAB_18056c3e0;
          }
        }
      }
      FUN_180570b00(param_1,param_2 + 1);
    }
  }
  else {
    local_158 = 0x35e;
    FUN_18050f6f0(0xf,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180952100);
  }
LAB_18056c3e0:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_178);
  return;
}


/* address=18056c450 name=FUN_18056c450 */

void FUN_18056c450(undefined8 param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined auStack_d8 [32];
  undefined8 local_b8;
  undefined local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_d8;
  iVar1 = FUN_18056b8c0(param_1,*param_2,0);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      iVar1 = FUN_180573520(param_1,param_2 + 1);
      if (iVar1 == 0) {
        FUN_180570720(param_1,param_3);
      }
      else {
        local_b8 = CONCAT44(local_b8._4_4_,0xde);
        FUN_18050f6f0(0xf,0,0x77,s_D__a_1_s_target_x86_64_pc_window_180954720);
      }
    }
    else {
      iVar1 = FUN_18056f7a0(param_1,local_a8,param_2 + 1);
      if (iVar1 != 0) {
        local_b8 = param_5;
        FUN_1805707c0(param_1,local_a8,param_3,param_4);
      }
    }
  }
  else {
    local_b8 = CONCAT44(local_b8._4_4_,0xd7);
    FUN_18050f6f0(0xf,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_1809546a0);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=18056c5a0 name=FUN_18056c5a0 */

longlong FUN_18056c5a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_4 = 0;
  lVar1 = FUN_18056c450(param_1,param_2,param_3,0,0,param_5);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_18058f4e0(lVar1);
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_18056c450(param_1,param_2,param_3,lVar2,lVar1,param_5);
      if (lVar1 == 0) {
        FUN_18058f610(lVar2);
        lVar1 = 0;
      }
      else {
        *param_4 = lVar2;
      }
    }
  }
  return lVar1;
}


/* address=18056c680 name=FUN_18056c680 */

undefined8
FUN_18056c680(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  iVar1 = FUN_18056b8c0(param_1,*param_2,0);
  if (iVar1 == 0) {
    uVar2 = FUN_1805762c0(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_18050f6f0(0xf,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180954620,CONCAT44(uVar3,0xcd));
    uVar2 = 0;
  }
  return uVar2;
}


/* address=18056c710 name=FUN_18056c710 */

undefined4
FUN_18056c710(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4,longlong param_5)

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
  iVar1 = FUN_18056b8c0(param_1,*param_2,0);
  if (iVar1 != 0) {
    FUN_18050f6f0(0xf,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_1809547a0,CONCAT44(uVar10,0x103));
    return 0;
  }
  iVar1 = FUN_18053dc90(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_18053f880(param_3,param_1 + 0x38), -1 < iVar1)) {
    FUN_18050f6f0(0xf,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_180954820,CONCAT44(uVar10,0x108));
    return 0;
  }
  local_20 = 0;
  local_28 = 0;
  FUN_18050f390();
  if ((param_5 == 0) && (param_5 = FUN_18053e150(), local_20 = param_5, param_5 == 0)) {
    return 0;
  }
  local_30 = (uint)(param_4 != 0);
  FUN_18053e250(param_5);
  uVar4 = FUN_18053e2b0(param_5);
  uVar5 = FUN_18053e2b0(param_5);
  uVar6 = FUN_18053e2b0(param_5);
  uVar7 = FUN_18053e2b0(param_5);
  lVar8 = FUN_18053e2b0(param_5);
  if ((((lVar8 != 0) && (iVar1 = FUN_18056bb00(param_1,0,uVar6,uVar7,param_5), iVar1 != 0)) &&
      (iVar1 = FUN_180540e90(uVar5,param_3,param_1 + 0x38,param_5), iVar1 != 0)) &&
     (iVar1 = FUN_180540dc0(uVar4,uVar5,param_3,param_1 + 0x38,param_5), iVar1 != 0)) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      iVar1 = FUN_180540dc0(uVar5,uVar6,param_3,param_1 + 0x38,param_5);
      if (iVar1 == 0) goto LAB_18056cc1d;
      iVar1 = FUN_1805544d0(uVar4,uVar4,uVar5,param_1 + 0x38,param_5);
    }
    else {
      iVar1 = FUN_180554800(uVar5,param_3,param_1 + 0x38,param_5);
      if ((iVar1 == 0) ||
         (iVar1 = FUN_1805544d0(uVar5,uVar5,param_3,param_1 + 0x38,param_5), iVar1 == 0))
      goto LAB_18056cc1d;
      iVar1 = FUN_1805546b0(uVar4,uVar4,uVar5,param_1 + 0x38,param_5);
    }
    if (iVar1 != 0) {
      lVar9 = param_5;
      iVar1 = FUN_1805544d0(uVar4,uVar4,uVar7,param_1 + 0x38,param_5);
      uVar10 = (undefined4)((ulonglong)lVar9 >> 0x20);
      if (iVar1 != 0) {
        lVar9 = FUN_180541140(lVar8,uVar4,param_1 + 0x38,param_5);
        if (lVar9 == 0) {
          uVar2 = FUN_18050ee80();
          iVar1 = FUN_180545880(uVar2);
          if ((iVar1 == 3) && (iVar1 = FUN_1805458a0(uVar2), iVar1 == 0x6e)) {
            FUN_18050f390();
            FUN_18050f6f0(0xf,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_1809548a0,
                          CONCAT44(uVar10,0x147));
          }
          else {
            FUN_18050f6f0(0xf,0,3,s_D__a_1_s_target_x86_64_pc_window_180954920,
                          CONCAT44(uVar10,0x149));
          }
        }
        else {
          uVar3 = FUN_18053fd10(lVar8);
          if (local_30 != uVar3) {
            iVar1 = FUN_18053fc40(lVar8);
            if (iVar1 != 0) {
              FUN_18050f6f0(0xf,0,0x6c,s_D__a_1_s_target_x86_64_pc_window_1809549a0,
                            CONCAT44(uVar10,0x150));
              goto LAB_18056cc1d;
            }
            iVar1 = FUN_18053e870(lVar8,param_1 + 0x38,lVar8);
            if (iVar1 == 0) goto LAB_18056cc1d;
          }
          uVar3 = FUN_18053fd10(lVar8);
          if (local_30 == uVar3) {
            iVar1 = FUN_18056c280(param_1,param_2,param_3,lVar8,param_5);
            if (iVar1 != 0) {
              local_28 = 1;
            }
          }
          else {
            FUN_18050f6f0(0xf,0,0x44,s_D__a_1_s_target_x86_64_pc_window_180954a20,
                          CONCAT44(uVar10,0x158));
          }
        }
      }
    }
  }
LAB_18056cc1d:
  FUN_18053e400(param_5);
  FUN_18053e1c0(local_20);
  return local_28;
}


/* address=18056ce70 name=FUN_18056ce70 */

void FUN_18056ce70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_180533e20();
  FUN_18056fac0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


/* address=18056d3f0 name=FUN_18056d3f0 */

void FUN_18056d3f0(void)

{
  FUN_18056d410(0);
  return;
}


/* address=18056d410 name=FUN_18056d410 */

longlong FUN_18056d410(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_18058f4e0(0x38);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_180533b50(lVar2,0,0x38);
    if (param_1 != 0) {
      uVar3 = FUN_1806092f0(param_1);
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
    }
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      FUN_180609310(*(undefined8 *)(lVar2 + 0x28));
    }
    *(undefined4 *)(lVar2 + 0x1c) = 4;
    *(undefined4 *)(lVar2 + 0x20) = 1;
    FUN_1805ad770(lVar2 + 0x30);
    if (((*(longlong *)(lVar2 + 0x28) != 0) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x10) != 0)) &&
       (iVar1 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2), iVar1 == 0)) {
      uVar3 = FUN_180575800();
      FUN_1805ad790(uVar3,lVar2,lVar2 + 0x30);
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FUN_180609350(*(undefined8 *)(lVar2 + 0x28));
      }
      FUN_18058f610(lVar2);
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* address=18056d5a0 name=FUN_18056d5a0 */

void FUN_18056d5a0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = FUN_18059b000(param_1 + 4), iVar1 != 0)) {
    if (param_1[5] != 0) {
      if (*(longlong *)(param_1[5] + 0x18) != 0) {
        (**(code **)(param_1[5] + 0x18))(param_1);
      }
      FUN_180609350(param_1[5]);
    }
    FUN_18056b7d0(*param_1);
    FUN_18056bd20(param_1[1]);
    FUN_1805758a0(param_1[2]);
    uVar2 = FUN_180575800();
    FUN_1805ad790(uVar2,param_1,param_1 + 6);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=18056d780 name=FUN_18056d780 */

undefined8 FUN_18056d780(longlong param_1)

{
  FUN_18059afb0(param_1 + 0x20);
  return 1;
}


/* address=18056d7b0 name=FUN_18056d7b0 */

undefined4 FUN_18056d7b0(longlong param_1)

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


/* address=18056d800 name=FUN_18056d800 */

undefined8 FUN_18056d800(undefined8 *param_1)

{
  return *param_1;
}


/* address=18056d820 name=FUN_18056d820 */

bool FUN_18056d820(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (*param_1 == 0) {
    if (param_1[2] != 0) {
      FID_conflict__assert
                (u_key_>priv_key____NULL_180952dd8,u_D__a_1_s_target_x86_64_pc_window_180952cd0,0xe1
                );
    }
    if (param_1[1] != 0) {
      FID_conflict__assert
                (u_key_>pub_key____NULL_180952f18,u_D__a_1_s_target_x86_64_pc_window_180952e10,0xe2)
      ;
    }
    FUN_18056b7d0(*param_1);
    lVar2 = FUN_18056b870(param_2);
    *param_1 = lVar2;
    bVar3 = *param_1 != 0;
  }
  else {
    iVar1 = FUN_18056b8c0(*param_1,param_2,0);
    if (iVar1 == 0) {
      bVar3 = true;
    }
    else {
      FUN_18050f6f0(0xf,0,0x82,s_D__a_1_s_target_x86_64_pc_window_180952c40,0xdb);
      bVar3 = false;
    }
  }
  return bVar3;
}


/* address=18056d920 name=FUN_18056d920 */

undefined8 FUN_18056d920(longlong param_1)

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


/* address=18056d960 name=FUN_18056d960 */

undefined8 FUN_18056d960(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    FUN_18050f6f0(0xf,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180952f50,0xef);
  }
  else {
    lVar2 = FUN_180575810(*param_1);
    if (lVar2 != 0) {
      iVar1 = FUN_18056e9a0(*param_1,lVar2 + 0x18,param_2);
      if ((iVar1 != 0) && (iVar1 = FUN_18056eca0(*param_1,lVar2 + 0x18), iVar1 == 0)) {
        FUN_1805758a0(param_1[2]);
        param_1[2] = lVar2;
        return 1;
      }
      FUN_18050f6f0(0xf,0,0x71,s_D__a_1_s_target_x86_64_pc_window_180952fe0,0xf9);
      FUN_1805758a0(lVar2);
    }
  }
  return 0;
}


/* address=18056da60 name=FUN_18056da60 */

undefined8 FUN_18056da60(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=18056da80 name=FUN_18056da80 */

bool FUN_18056da80(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (*param_1 == 0) {
    FUN_18050f6f0(0xf,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180953070,0x108);
    bVar3 = false;
  }
  else if ((param_2 == (undefined8 *)0x0) ||
          (iVar1 = FUN_18056b8c0(*param_1,*param_2,0), iVar1 == 0)) {
    FUN_18056bd20(param_1[1]);
    lVar2 = FUN_18056bde0(param_2,*param_1);
    param_1[1] = lVar2;
    bVar3 = param_1[1] != 0;
  }
  else {
    FUN_18050f6f0(0xf,0,0x82,s_D__a_1_s_target_x86_64_pc_window_180953100,0x10d);
    bVar3 = false;
  }
  return bVar3;
}


/* address=18056db60 name=FUN_18056db60 */

undefined4 FUN_18056db60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


/* address=18056dba0 name=FUN_18056dba0 */

undefined4 FUN_18056dba0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}


/* address=18056dbe0 name=FUN_18056dbe0 */

void FUN_18056dbe0(longlong *param_1)

{
  int iVar1;
  undefined auStack_128 [32];
  undefined4 local_108;
  undefined local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_128;
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) {
    local_108 = 0x126;
    FUN_18050f6f0(0xf,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180953190);
  }
  else {
    iVar1 = FUN_18056bed0(*param_1,param_1[1]);
    if (iVar1 == 0) {
      iVar1 = FUN_18056bf40(*param_1,param_1[1],0);
      if (iVar1 == 0) {
        local_108 = 0x131;
        FUN_18050f6f0(0xf,0,0x78,s_D__a_1_s_target_x86_64_pc_window_1809532b0);
      }
      else if (param_1[2] != 0) {
        iVar1 = FUN_18056fe50(*param_1,local_f8,param_1[2] + 0x18);
        if (iVar1 == 0) {
          local_108 = 0x13d;
          FUN_18050f6f0(0xf,0,0xf,s_D__a_1_s_target_x86_64_pc_window_180953340);
        }
        else {
          iVar1 = FUN_180573820(*param_1,local_f8,param_1[1] + 8);
          if (iVar1 == 0) {
            local_108 = 0x142;
            FUN_18050f6f0(0xf,0,0x71,s_D__a_1_s_target_x86_64_pc_window_1809533d0);
          }
        }
      }
    }
    else {
      local_108 = 299;
      FUN_18050f6f0(0xf,0,0x77,s_D__a_1_s_target_x86_64_pc_window_180953220);
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=18056ddc0 name=FUN_18056ddc0 */

void FUN_18056ddc0(longlong param_1)

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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_18053d4f0();
  iVar1 = FUN_18056d7b0(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_18056dbe0(param_1);
    if (iVar1 != 0) {
      if (*(longlong *)(param_1 + 0x10) != 0) {
        pbVar3 = local_20;
        for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
          *pbVar3 = 0;
          pbVar3 = pbVar3 + 1;
        }
        local_28 = FUN_1805743d0(local_20,0x10,param_1);
        iVar1 = FUN_180533e50(s_ECDSA_PWCT_1809534e8);
        if (iVar1 != 0) {
          local_20[0] = ~local_20[0];
        }
        if ((local_28 == 0) || (iVar1 = FUN_180574610(local_20,0x10,local_28,param_1), iVar1 == 0))
        {
          local_34 = 0;
        }
        else {
          local_34 = 1;
        }
        local_30 = local_34;
        FUN_180574280(local_28);
        if (local_30 == 0) {
          local_48 = 0x162;
          FUN_18050f6f0(0xf,0,0x84,s_D__a_1_s_target_x86_64_pc_window_180953500);
          goto LAB_18056df11;
        }
      }
      local_38 = 1;
    }
  }
  else {
    local_48 = 0x150;
    FUN_18050f6f0(0xf,0,0x84,s_D__a_1_s_target_x86_64_pc_window_180953460);
  }
LAB_18056df11:
  FUN_18053d500();
  if (local_38 != 0) {
    FUN_18053d530(param_1);
  }
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=18056e050 name=FUN_18056e050 */

undefined4 FUN_18056e050(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (*param_1 != 0) {
    lVar2 = FUN_18056bc90(*param_1);
    if (((lVar2 == 0) || (iVar1 = FUN_18056c680(*param_1,lVar2,param_2,param_3,param_4), iVar1 == 0)
        ) || (iVar1 = FUN_18056da80(param_1,lVar2), iVar1 == 0)) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    FUN_18056bd20(lVar2);
    return local_18;
  }
  FUN_18050f6f0(0xf,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180953620,0x18d);
  return 0;
}


/* address=18056e130 name=FUN_18056e130 */

undefined8 FUN_18056e130(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (param_1[1] == 0)) || (*param_1 == 0)) {
    FUN_18050f6f0(0xf,0,0x72,s_D__a_1_s_target_x86_64_pc_window_1809536b0,0x19c);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_18056c5a0(*param_1,param_1[1],param_2,param_3,param_4);
  }
  return uVar1;
}


/* address=18056e2b0 name=FUN_18056e2b0 */

ulonglong FUN_18056e2b0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_10 [2];
  
  if ((*param_1 == 0) || (param_1[2] == 0)) {
    FUN_18050f6f0(0xf,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180953860,0x1b7);
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_18056ba50(*param_1);
    uVar1 = FUN_18053db00(uVar3);
    uVar2 = (ulonglong)uVar1;
    if (param_2 != 0) {
      if (param_3 < uVar2) {
        FUN_18050f6f0(0xf,0,100,s_D__a_1_s_target_x86_64_pc_window_1809538f0,0x1c1);
        uVar2 = 0;
      }
      else {
        FUN_18056ea30(*param_1,param_2,local_10,param_1[2] + 0x18);
        if (local_10[0] != uVar2) {
          FID_conflict__assert
                    (u_bytes_written____len_180953a88,u_D__a_1_s_target_x86_64_pc_window_180953980,
                     0x1c7);
        }
      }
    }
  }
  return uVar2;
}


/* address=18056e470 name=FUN_18056e470 */

undefined8 FUN_18056e470(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    FUN_18050f6f0(0xf,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180953ac0,0x1e3);
  }
  else {
    uVar3 = FUN_18056ba50(*param_1);
    uVar1 = FUN_18053daa0(uVar3);
    if (uVar1 < 0xa0) {
      FUN_18050f6f0(0xf,0,0x70,s_D__a_1_s_target_x86_64_pc_window_180953b50,0x1e9);
    }
    else {
      lVar4 = FUN_180575810(*param_1);
      lVar5 = FUN_18056bc90(*param_1);
      if ((((lVar4 != 0) && (lVar5 != 0)) &&
          (iVar2 = FUN_18056ebe0(*param_1,lVar4 + 0x18,&DAT_180726740), iVar2 != 0)) &&
         (iVar2 = FUN_18056fe50(*param_1,lVar5 + 8,lVar4 + 0x18), iVar2 != 0)) {
        FUN_1805758a0(param_1[2]);
        param_1[2] = lVar4;
        FUN_18056bd20(param_1[1]);
        param_1[1] = lVar5;
        return 1;
      }
      FUN_18056bd20(lVar5);
      FUN_1805758a0(lVar4);
    }
  }
  return 0;
}


/* address=18056e9a0 name=FUN_18056e9a0 */

undefined8 FUN_18056e9a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_180545de0(param_2,(longlong)*(int *)(param_1 + 0x18),param_3);
  if ((iVar1 != 0) &&
     (iVar1 = FUN_180551ee0(param_2,*(undefined8 *)(param_1 + 0x10),
                            (longlong)*(int *)(param_1 + 0x18)), iVar1 != 0)) {
    return 1;
  }
  FUN_18050f6f0(0xf,0,0x85,s_D__a_1_s_target_x86_64_pc_window_180955e80,0x1c);
  return 0;
}


/* address=18056ea30 name=FUN_18056ea30 */

void FUN_18056ea30(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_18053db00(param_1 + 0x10);
  FUN_1805563c0(param_2,(ulonglong)uVar1,param_4,(longlong)*(int *)(param_1 + 0x18));
  *param_3 = (ulonglong)uVar1;
  return;
}


/* address=18056eaa0 name=FUN_18056eaa0 */

undefined8 FUN_18056eaa0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_18053db00(param_1 + 0x10);
  if (param_4 == uVar1) {
    FUN_180556260(param_2,(longlong)*(int *)(param_1 + 0x18),param_3,param_4);
    iVar2 = FUN_180551ee0(param_2,*(undefined8 *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0x18)
                         );
    if (iVar2 == 0) {
      FUN_18050f6f0(0xf,0,0x85,s_D__a_1_s_target_x86_64_pc_window_180955fa0,0x47);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    FUN_18050f6f0(0xf,0,0x85,s_D__a_1_s_target_x86_64_pc_window_180955f10,0x40);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=18056ebe0 name=FUN_18056ebe0 */

void FUN_18056ebe0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180551fa0(param_2,1,*(undefined8 *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0x18),param_3
               );
  return;
}


/* address=18056ec30 name=FUN_18056ec30 */

bool FUN_18056ec30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_180533a70(param_2,param_3,(longlong)*(int *)(param_1 + 0x18) << 3);
  return iVar1 == 0;
}


/* address=18056eca0 name=FUN_18056eca0 */

bool FUN_18056eca0(longlong param_1,longlong param_2)

{
  int local_18;
  ulonglong local_10;
  
  local_10 = 0;
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x18); local_18 = local_18 + 1) {
    local_10 = local_10 | *(ulonglong *)(param_2 + (longlong)local_18 * 8);
  }
  return local_10 == 0;
}


/* address=18056ed20 name=FUN_18056ed20 */

void FUN_18056ed20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  local_78 = (undefined8 *)(param_1 + 0x10);
  local_80 = (longlong)*(int *)(param_1 + 0x18);
  local_88 = local_68;
  local_70 = param_2;
  FUN_180554460(param_2,param_3,param_4,*local_78);
  FUN_18058f7b0(local_68,0x48);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=18056ede0 name=FUN_18056ede0 */

void FUN_18056ede0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  local_78 = (undefined8 *)(param_1 + 0x10);
  local_80 = (longlong)*(int *)(param_1 + 0x18);
  local_88 = local_68;
  local_70 = param_2;
  FUN_180554620(param_2,param_3,param_4,*local_78);
  FUN_18058f7b0(local_68,0x48);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=18056ef20 name=FUN_18056ef20 */

void FUN_18056ef20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180555850(param_2,param_3,(longlong)*(int *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30));
  return;
}


/* address=18056ef90 name=FUN_18056ef90 */

void FUN_18056ef90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805558a0(param_2,(longlong)*(int *)(param_1 + 0x18),param_3,
                (longlong)*(int *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30));
  return;
}


/* address=18056f000 name=FUN_18056f000 */

void FUN_18056f000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1805559c0(param_2,param_3,param_4,(longlong)*(int *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x30));
  return;
}


/* address=18056f070 name=FUN_18056f070 */

void FUN_18056f070(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3);
  return;
}


/* address=18056f0b0 name=FUN_18056f0b0 */

void FUN_18056f0b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3);
  return;
}


/* address=18056f160 name=FUN_18056f160 */

void FUN_18056f160(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined auStack_a8 [32];
  undefined4 local_88;
  ulonglong local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_18053db00(param_1 + 0x38);
  local_78 = (ulonglong)uVar1;
  if (0x42 < local_78) {
    FID_conflict__assert
              (u_sizeof_bytes__>__len_180953e90,u_D__a_1_s_target_x86_64_pc_window_180953d90,0x1d);
  }
  iVar2 = FUN_18053dc90(param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_18053f880(param_3,param_1 + 0x38);
    if (iVar2 < 0) {
      iVar2 = FUN_18053e010(local_68,local_78,param_3);
      if (iVar2 != 0) {
        FUN_18056f370(param_1,param_2,local_68,local_78);
        goto LAB_18056f256;
      }
    }
  }
  local_88 = 0x21;
  FUN_18050f6f0(0xf,0,0x65,s_D__a_1_s_target_x86_64_pc_window_180953ec0);
LAB_18056f256:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=18056f280 name=FUN_18056f280 */

void FUN_18056f280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined auStack_98 [32];
  uint local_78;
  undefined8 local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_98;
  FUN_18056f320(param_1,local_68,&local_70,param_3);
  lVar1 = FUN_18053dcd0(local_68,local_70,param_2);
  local_78 = (uint)(lVar1 != 0);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=18056f320 name=FUN_18056f320 */

void FUN_18056f320(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_4);
  return;
}


/* address=18056f370 name=FUN_18056f370 */

void FUN_18056f370(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3,param_4);
  return;
}


/* address=18056f3c0 name=FUN_18056f3c0 */

void FUN_18056f3c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int local_28;
  
  uVar1 = FUN_18056f5e0(param_1,param_3);
  lVar2 = FUN_180546fa0(param_2,*(undefined8 *)(param_1 + 0x38),param_3,
                        (longlong)*(int *)(param_1 + 0x40));
  if (lVar2 != 0) {
    FID_conflict__assert(u_borrow____0_180954040,u_D__a_1_s_target_x86_64_pc_window_180953f40,0x3e);
  }
  for (local_28 = 0; local_28 < *(int *)(param_1 + 0x40); local_28 = local_28 + 1) {
    *(ulonglong *)(param_2 + (longlong)local_28 * 8) =
         *(ulonglong *)(param_2 + (longlong)local_28 * 8) & uVar1;
  }
  return;
}


/* address=18056f4a0 name=FUN_18056f4a0 */

void FUN_18056f4a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  local_80 = (longlong)*(int *)(param_1 + 0x40);
  local_88 = local_68;
  local_78 = param_2;
  FUN_180554460(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x38));
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=18056f540 name=FUN_18056f540 */

void FUN_18056f540(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_a8 [32];
  undefined *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  local_80 = (longlong)*(int *)(param_1 + 0x40);
  local_88 = local_68;
  local_78 = param_2;
  FUN_180554620(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x38));
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=18056f5e0 name=FUN_18056f5e0 */

ulonglong FUN_18056f5e0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int local_18;
  ulonglong local_10;
  
  local_10 = 0;
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x40); local_18 = local_18 + 1) {
    local_10 = local_10 | *(ulonglong *)(param_2 + (longlong)local_18 * 8);
  }
  uVar1 = FUN_1805338a0(local_10);
  return ~uVar1;
}


/* address=18056f660 name=FUN_18056f660 */

void FUN_18056f660(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_180545bb0(param_2,param_3,param_4,param_5,(longlong)*(int *)(param_1 + 0x40));
  return;
}


/* address=18056f6c0 name=FUN_18056f6c0 */

bool FUN_18056f6c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_18058f7e0(param_2,param_3,(longlong)*(int *)(param_1 + 0x40) << 3);
  return iVar1 == 0;
}


/* address=18056f730 name=FUN_18056f730 */

void FUN_18056f730(longlong param_1,undefined *param_2,undefined *param_3)

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


/* address=18056f7a0 name=FUN_18056f7a0 */

void FUN_18056f7a0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x18))(param_1,param_3,param_2,param_2 + 0x48);
  return;
}


/* address=18056f800 name=FUN_18056f800 */

undefined8 FUN_18056f800(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*param_1 + 0x20) == 0) {
    FUN_18050f6f0(0xf,0,0x42,s_D__a_1_s_target_x86_64_pc_window_180951e80,0x333);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}


/* address=18056f880 name=FUN_18056f880 */

void FUN_18056f880(longlong *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_108;
  local_d0 = *(code **)(*param_1 + 0x70);
  local_d8 = *(code **)(*param_1 + 0x78);
  (*local_d8)(param_1,local_78,param_4);
  (*local_d8)(param_1,local_c8,param_3);
  FUN_18056f4a0(param_1,local_c8,local_c8,param_1 + 10);
  (*local_d0)(param_1,local_c8,local_c8,param_3);
  FUN_18056f4a0(param_1,local_c8,local_c8,param_1 + 0x13);
  iVar1 = FUN_18056f6c0(param_1,local_78,local_c8);
  if (iVar1 == 0) {
    local_e8 = 0x348;
    FUN_18050f6f0(0xf,0,0x78,s_D__a_1_s_target_x86_64_pc_window_180951f00);
    if (param_1[1] != 0) {
      iVar1 = FUN_18056f6c0(param_1,param_1 + 0x28,param_1[1] + 0x98);
      if (iVar1 == 0) {
        FID_conflict__assert
                  (u_ec_felem_equal_group___group_>on_180952080,
                   u_D__a_1_s_target_x86_64_pc_window_180951f80,0x34e);
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
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_108);
  return;
}


/* address=18056fac0 name=FUN_18056fac0 */

void FUN_18056fac0(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_1e8;
  if ((param_3 != 0) || (param_5 != 0)) {
    local_1b4 = (uint)(param_4 == (undefined8 *)0x0);
    local_1b8 = (uint)(param_5 == 0);
    if (local_1b4 == local_1b8) {
      iVar1 = FUN_18056b8c0(param_1,*param_2,0);
      if ((iVar1 != 0) ||
         ((param_4 != (undefined8 *)0x0 && (iVar1 = FUN_18056b8c0(param_1,*param_4,0), iVar1 != 0)))
         ) {
        local_1c8 = 0x3be;
        FUN_18050f6f0(0xf,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180952400);
        goto LAB_18056fd72;
      }
      local_1b0 = 0;
      local_1a8 = 0;
      if (((param_6 != 0) || (param_6 = FUN_18053e150(), local_1a8 = param_6, param_6 != 0)) &&
         ((param_3 == 0 ||
          ((iVar1 = FUN_180575720(param_1,local_198,param_3,param_6), iVar1 != 0 &&
           (iVar1 = FUN_18056fe50(param_1,param_2 + 1,local_198), iVar1 != 0)))))) {
        if (param_5 != 0) {
          iVar1 = FUN_180575720(param_1,local_148,param_5,param_6);
          if ((iVar1 == 0) ||
             (iVar1 = FUN_18056fd90(param_1,local_f8,param_4 + 1,local_148), iVar1 == 0))
          goto LAB_18056fd64;
          if (param_3 == 0) {
            FUN_180533ab0(param_2 + 1,local_f8,0xd8);
          }
          else {
            local_1a0 = *param_1;
            (**(code **)(local_1a0 + 0x28))(param_1,param_2 + 1,param_2 + 1,local_f8);
          }
        }
        local_1b0 = 1;
      }
LAB_18056fd64:
      FUN_18053e1c0(local_1a8);
      goto LAB_18056fd72;
    }
  }
  local_1c8 = 0x3b8;
  FUN_18050f6f0(0xf,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180952380);
LAB_18056fd72:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_1e8);
  return;
}


/* address=18056fd90 name=FUN_18056fd90 */

undefined8 FUN_18056fd90(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    FUN_18050f6f0(0xf,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180952580,0x41b);
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4);
    iVar1 = FUN_180573570(param_1,param_2);
    if (iVar1 == 0) {
      FUN_18050f6f0(0xf,0,0x44,s_D__a_1_s_target_x86_64_pc_window_180952600,0x424);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=18056fe50 name=FUN_18056fe50 */

undefined8 FUN_18056fe50(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    FUN_18050f6f0(0xf,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180952680,0x42e);
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
    iVar1 = FUN_180573570(param_1,param_2);
    if (iVar1 == 0) {
      FUN_18050f6f0(0xf,0,0x44,s_D__a_1_s_target_x86_64_pc_window_180952700,0x437);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=180570150 name=FUN_180570150 */

undefined8
FUN_180570150(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  undefined8 uVar1;
  
  if (((param_3 == 0) || (param_5 == 0)) || (param_4 == 0)) {
    FUN_18050f6f0(0xf,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180952480,0x3ff);
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


/* address=1805702c0 name=FUN_1805702c0 */

void FUN_1805702c0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  FUN_18056f660(param_1,param_2,param_3,param_4,param_5);
  FUN_18056f660(param_1,param_2 + 0x48,param_3,param_4 + 0x48,param_5 + 0x48);
  FUN_18056f660(param_1,param_2 + 0x90,param_3,param_4 + 0x90,param_5 + 0x90);
  return;
}


/* address=180570380 name=FUN_180570380 */

void FUN_180570380(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  FUN_18056f660(param_1,param_2,param_3,param_4,param_5);
  FUN_18056f660(param_1,param_2 + 0x48,param_3,param_4 + 0x48,param_5 + 0x48);
  return;
}


/* address=1805704a0 name=Read */

/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __cdecl CSettingsStore::Read(char const * __ptr64,int & __ptr64) __ptr64
    public: virtual int __cdecl CSettingsStore::Read(wchar_t const * __ptr64,int & __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

void Read(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3);
  return;
}


/* address=1805704e0 name=FUN_1805704e0 */

void FUN_1805704e0(longlong param_1,undefined8 param_2,longlong param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_108;
  local_e8 = param_3;
  iVar1 = FUN_1805705f0(param_1,local_68,&local_d0,0x42);
  if (iVar1 != 0) {
    local_d8 = (undefined8 *)(param_1 + 0x10);
    puVar3 = local_b8;
    for (lVar2 = 0x50; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined *)puVar3 = 0;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    }
    FUN_180556260(local_b8,(longlong)(*(int *)(param_1 + 0x18) + 1),local_68,local_d0);
    local_e8 = (longlong)*(int *)(local_d8 + 1);
    local_c8 = param_2;
    FUN_1805533f0(param_2,local_b8,local_b8[*(int *)(local_d8 + 1)],*local_d8);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_108);
  return;
}


/* address=1805705f0 name=FUN_1805705f0 */

void FUN_1805705f0(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined auStack_a8 [32];
  undefined4 local_88;
  ulonglong local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_18053db00(param_1 + 7);
  local_78 = (ulonglong)uVar1;
  if (0x42 < local_78) {
    FID_conflict__assert
              (u_len_<__EC_MAX_BYTES_180952b00,u_D__a_1_s_target_x86_64_pc_window_180952a00,0x4b6);
  }
  if (param_4 < local_78) {
    local_88 = 0x4b8;
    FUN_18050f6f0(0xf,0,100,s_D__a_1_s_target_x86_64_pc_window_180952b30);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_5,local_68,0);
    if (iVar2 != 0) {
      FUN_18056f320(param_1,param_2,param_3,local_68);
      *param_3 = local_78;
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=180570720 name=FUN_180570720 */

longlong FUN_180570720(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if ((param_2 == 2) || (param_2 == 4)) {
    uVar1 = FUN_18053db00(param_1 + 0x38);
    lVar2 = (ulonglong)uVar1 + 1;
    if (param_2 == 4) {
      lVar2 = lVar2 + (ulonglong)uVar1;
    }
  }
  else {
    FUN_18050f6f0(0xf,0,0x6f,s_D__a_1_s_target_x86_64_pc_window_180954060,0x4f);
    lVar2 = 0;
  }
  return lVar2;
}


/* address=1805707c0 name=FUN_1805707c0 */

void FUN_1805707c0(longlong param_1,longlong param_2,int param_3,char *param_4,ulonglong param_5)

{
  uint uVar1;
  char local_res18;
  undefined auStack_a8 [32];
  undefined4 local_88;
  ulonglong local_78;
  undefined8 local_70;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  local_70 = FUN_180570720(param_1,param_3);
  if (param_5 < local_70) {
    local_88 = 0x61;
    FUN_18050f6f0(0xf,0,100,s_D__a_1_s_target_x86_64_pc_window_1809540e0);
  }
  else {
    FUN_18056f320(param_1,param_4 + 1,&local_78,param_2);
    uVar1 = FUN_18053db00(param_1 + 0x38);
    if (local_78 != uVar1) {
      FID_conflict__assert
                (u_field_len____BN_num_bytes__group_180954260,
                 u_D__a_1_s_target_x86_64_pc_window_180954160,0x67);
    }
    local_res18 = (char)param_3;
    if (param_3 == 4) {
      FUN_18056f320(param_1,param_4 + local_78 + 1,&local_78,param_2 + 0x48);
      uVar1 = FUN_18053db00(param_1 + 0x38);
      if (local_78 != uVar1) {
        FID_conflict__assert
                  (u_field_len____BN_num_bytes__group_1809543c0,
                   u_D__a_1_s_target_x86_64_pc_window_1809542c0,0x6b);
      }
      *param_4 = local_res18;
    }
    else {
      FUN_18056f320(param_1,local_68,&local_78,param_2 + 0x48);
      *param_4 = local_res18 + (local_68[local_78 - 1] & 1);
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=1805709b0 name=FUN_1805709b0 */

void FUN_1805709b0(longlong param_1,undefined8 param_2,char *param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  undefined auStack_f8 [32];
  undefined4 local_d8;
  ulonglong local_c8;
  undefined local_b8 [80];
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_f8;
  uVar1 = FUN_18053db00(param_1 + 0x38);
  local_c8 = (ulonglong)uVar1;
  if ((param_4 == local_c8 * 2 + 1) && (*param_3 == '\x04')) {
    iVar2 = FUN_18056f370(param_1,local_68,param_3 + 1,local_c8);
    if ((iVar2 != 0) &&
       (iVar2 = FUN_18056f370(param_1,local_b8,param_3 + local_c8 + 1,local_c8), iVar2 != 0)) {
      FUN_18056f880(param_1,param_2,local_68,local_b8);
    }
  }
  else {
    local_d8 = 0x7a;
    FUN_18050f6f0(0xf,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180954420);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_f8);
  return;
}


/* address=180570b00 name=FUN_180570b00 */

void FUN_180570b00(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_1805725f0(param_1,param_2);
  }
  else {
    FUN_180572570(param_2,*(longlong *)(param_1 + 8) + 8);
  }
  return;
}


/* address=180570d40 name=FUN_180570d40 */

void FUN_180570d40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180576110();
  FUN_18059e1b0(uVar1,&LAB_1805762a0);
  FUN_180576100();
  return;
}


/* address=180570d70 name=FUN_180570d70 */

undefined8 * FUN_180570d70(code **param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == (code **)0x0) {
    FUN_18050f6f0(0xf,0,0x79,s_D__a_1_s_target_x86_64_pc_window_180951030,0x115);
    puVar2 = (undefined8 *)0x0;
  }
  else if (*param_1 == (code *)0x0) {
    FUN_18050f6f0(0xf,0,0x42,s_D__a_1_s_target_x86_64_pc_window_1809510b0,0x11a);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_18058f4e0(0x188);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      FUN_180533b50(puVar2,0,0x188);
      *(undefined4 *)(puVar2 + 0x26) = 1;
      *puVar2 = param_1;
      FUN_18053d850(puVar2 + 2);
      iVar1 = (**param_1)(puVar2);
      if (iVar1 == 0) {
        FUN_18058f610(puVar2);
        puVar2 = (undefined8 *)0x0;
      }
    }
  }
  return puVar2;
}


/* address=180570e70 name=FUN_180570e70 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180570e70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  uStack_8 = 0x180570e8e;
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_1c68;
  FUN_1805725f0(param_1,local_1b18);
  FUN_180572570(local_1a40);
  for (local_1c28 = 2; local_1c28 < 0x20; local_1c28 = local_1c28 + 1) {
    if ((local_1c28 & 1) == 0) {
      FUN_180572ce0(param_1,local_1b18 + local_1c28 * 0xd8,local_1b18 + (local_1c28 / 2) * 0xd8);
    }
    else {
      FUN_180572620(param_1,local_1b18 + local_1c28 * 0xd8,local_1a40,
                    local_1b18 + (local_1c28 - 1) * 0xd8);
    }
  }
  local_1c20 = FUN_18053daa0(param_1 + 0x10);
  local_1c30 = 1;
  local_1c34 = local_1c20;
  while (local_1c34 = local_1c34 - 1, local_1c34 < local_1c20) {
    if (local_1c30 == 0) {
      FUN_180572ce0(param_1,param_2,param_2);
    }
    if (local_1c34 % 5 == 0) {
      local_1c18 = (longlong)*(int *)(param_1 + 0x18);
      iVar2 = FUN_1805528f0(param_4,local_1c18,local_1c34 + 4);
      local_1c38 = (byte)(iVar2 << 4);
      iVar2 = FUN_1805528f0(param_4,local_1c18,local_1c34 + 3);
      local_1c38 = local_1c38 | (byte)(iVar2 << 3);
      iVar2 = FUN_1805528f0(param_4,local_1c18,local_1c34 + 2);
      local_1c38 = local_1c38 | (byte)(iVar2 << 2);
      iVar2 = FUN_1805528f0(param_4,local_1c18,local_1c34 + 1);
      local_1c38 = local_1c38 | (byte)(iVar2 << 1);
      bVar1 = FUN_1805528f0(param_4,local_1c18,local_1c34);
      local_1c38 = local_1c38 | bVar1;
      FUN_180533b50(local_1bf8,0,0xd8);
      for (local_1c10 = 0; local_1c10 < 0x20; local_1c10 = local_1c10 + 1) {
        local_1c08 = FUN_1805338d0(local_1c10,local_1c38);
        local_1c48 = local_1bf8;
        FUN_1805702c0(param_1,local_1bf8,local_1c08,local_1b18 + local_1c10 * 0xd8);
      }
      if (local_1c30 == 0) {
        FUN_180572620(param_1,param_2,param_2,local_1bf8);
      }
      else {
        FUN_180572570(param_2);
        local_1c30 = 0;
      }
    }
  }
  if (local_1c30 != 0) {
    FUN_1805725f0(param_1,param_2);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_1c68);
  return;
}


/* address=180571a20 name=FUN_180571a20 */

ulonglong FUN_180571a20(longlong param_1,longlong param_2,undefined8 *param_3,ulonglong param_4,
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
    FID_conflict__assert
              (u_0_<_w_&&_w_<__7_180956400,u_D__a_1_s_target_x86_64_pc_window_180956300,0x5b);
  }
  if (param_4 == 0) {
    FID_conflict__assert(u_bits____0_180956520,u_D__a_1_s_target_x86_64_pc_window_180956420,0x5c);
  }
  uVar1 = 1 << ((byte)param_5 & 0x1f);
  uVar2 = uVar1 * 2;
  local_38 = (uint)*param_3 & uVar2 - 1;
  for (local_20 = 0; uVar4 = param_4 + 1, local_20 < uVar4; local_20 = local_20 + 1) {
    if (((int)local_38 < 0) || ((int)uVar2 < (int)local_38)) {
      FID_conflict__assert
                (u_0_<__window_val_&&_window_val_<__180956640,
                 u_D__a_1_s_target_x86_64_pc_window_180956540,99);
    }
    local_34 = 0;
    if ((local_38 & 1) != 0) {
      if (((int)local_38 < 1) || ((int)uVar2 <= (int)local_38)) {
        FID_conflict__assert
                  (u_0_<_window_val_&&_window_val_<_n_1809567a0,
                   u_D__a_1_s_target_x86_64_pc_window_1809566a0,0x66);
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
        FID_conflict__assert
                  (u_window_val____0____window_val____1809568f0,
                   u_D__a_1_s_target_x86_64_pc_window_1809567f0,0x80);
      }
      if (((int)local_34 <= (int)-uVar1) || ((int)uVar1 <= (int)local_34)) {
        FID_conflict__assert
                  (u__bit_<_digit_&&_digit_<_bit_180956a70,
                   u_D__a_1_s_target_x86_64_pc_window_180956970,0x81);
      }
      if ((local_34 & 1) == 0) {
        FID_conflict__assert
                  (u_digit___1_180956bb0,u_D__a_1_s_target_x86_64_pc_window_180956ab0,0x84);
      }
    }
    *(undefined *)(param_2 + local_20) = (undefined)local_34;
    iVar3 = FUN_1805528f0(param_3,(longlong)*(int *)(param_1 + 0x18),
                          local_20 + 1 + (longlong)param_5);
    local_38 = ((int)local_38 >> 1) + uVar1 * iVar3;
    if ((int)uVar2 < (int)local_38) {
      FID_conflict__assert
                (u_window_val_<__next_bit_180956cd0,u_D__a_1_s_target_x86_64_pc_window_180956bd0,
                 0x8f);
    }
  }
  if (local_38 != 0) {
    FID_conflict__assert
              (u_window_val____0_180956e00,u_D__a_1_s_target_x86_64_pc_window_180956d00,0x93);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=180572240 name=FUN_180572240 */

undefined8 FUN_180572240(longlong param_1)

{
  FUN_18053d850(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return 1;
}


/* address=180572280 name=FUN_180572280 */

void FUN_180572280(longlong param_1)

{
  FUN_18053d880(param_1 + 0x38);
  return;
}


/* address=1805722b0 name=FUN_1805722b0 */

undefined4
FUN_1805722b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint local_18;
  undefined4 local_14;
  
  uVar1 = FUN_18053daa0(param_2);
  if ((uVar1 < 3) || (iVar2 = FUN_18053fd10(param_2), iVar2 == 0)) {
    FUN_18050f6f0(0xf,0,0x6e,s_D__a_1_s_target_x86_64_pc_window_180956030,0x6a);
    local_14 = 0;
  }
  else {
    local_14 = 0;
    FUN_18053e250(param_5);
    lVar3 = FUN_18053e2b0(param_5);
    if ((lVar3 != 0) && (lVar4 = FUN_18053d970(param_1 + 0x38,param_2), lVar4 != 0)) {
      FUN_18053dc40(param_1 + 0x38,0);
      FUN_180545910(param_1 + 0x38);
      iVar2 = FUN_18056f160(param_1,param_1 + 0x50,param_3);
      if ((iVar2 != 0) && (iVar2 = FUN_18056f160(param_1,param_1 + 0x98,param_4), iVar2 != 0)) {
        uVar5 = FUN_18053da70();
        iVar2 = FUN_18056f160(param_1,param_1 + 0x140,uVar5);
        if (((iVar2 != 0) && (lVar4 = FUN_18053d970(lVar3,param_3), lVar4 != 0)) &&
           (iVar2 = FUN_18053e590(lVar3,3), iVar2 != 0)) {
          iVar2 = FUN_18053f880(lVar3,param_1 + 0x38);
          local_18 = (uint)(iVar2 == 0);
          *(uint *)(param_1 + 0xe0) = local_18;
          local_14 = 1;
        }
      }
    }
    FUN_18053e400(param_5);
  }
  return local_14;
}


/* address=180572470 name=FUN_180572470 */

undefined8 FUN_180572470(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
LAB_1805724ab:
    if (param_3 != 0) {
      iVar1 = FUN_18056f280(param_1,param_3,param_1 + 0x50);
      if (iVar1 == 0) goto LAB_1805724fb;
    }
    if (param_4 != 0) {
      iVar1 = FUN_18056f280(param_1,param_4,param_1 + 0x98);
      if (iVar1 == 0) goto LAB_1805724fb;
    }
    uVar3 = 1;
  }
  else {
    lVar2 = FUN_18053d970(param_2,param_1 + 0x38);
    if (lVar2 != 0) goto LAB_1805724ab;
LAB_1805724fb:
    uVar3 = 0;
  }
  return uVar3;
}


/* address=180572510 name=FUN_180572510 */

void FUN_180572510(longlong param_1)

{
  FUN_180533b50(param_1,0,0x48);
  FUN_180533b50(param_1 + 0x48,0,0x48);
  FUN_180533b50(param_1 + 0x90,0,0x48);
  return;
}


/* address=180572570 name=FUN_180572570 */

void FUN_180572570(longlong param_1,longlong param_2)

{
  FUN_180533ab0(param_1,param_2,0x48);
  FUN_180533ab0(param_1 + 0x48,param_2 + 0x48,0x48);
  FUN_180533ab0(param_1 + 0x90,param_2 + 0x90,0x48);
  return;
}


/* address=1805725f0 name=FUN_1805725f0 */

void FUN_1805725f0(undefined8 param_1,undefined8 param_2)

{
  FUN_180572510(param_2);
  return;
}


/* address=180572620 name=FUN_180572620 */

void FUN_180572620(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_5c8;
  if (param_3 == param_4) {
    FUN_180572ce0(param_1,param_2,param_3);
  }
  else {
    local_598 = FUN_18056f5e0(param_1,param_3 + 0x90);
    local_590 = FUN_18056f5e0(param_1,param_4 + 0x90);
    FUN_180573f90(param_1,local_2e8,param_3 + 0x90);
    FUN_180573f90(param_1,local_338,param_4 + 0x90);
    FUN_180573f20(param_1,local_1f8,param_3,local_338);
    FUN_18056f4a0(param_1,local_4c8,param_3 + 0x90,param_4 + 0x90);
    FUN_180573f90(param_1,local_4c8,local_4c8);
    FUN_18056f540(param_1,local_4c8,local_4c8,local_2e8);
    FUN_18056f540(param_1,local_4c8,local_4c8,local_338);
    FUN_180573f20(param_1,local_388,param_4 + 0x90,local_338);
    FUN_180573f20(param_1,local_388,local_388,param_3 + 0x48);
    FUN_180573f20(param_1,local_108,param_4,local_2e8);
    FUN_18056f540(param_1,local_428,local_108,local_1f8);
    local_588 = FUN_18056f5e0(param_1,local_428);
    FUN_180573f20(param_1,local_248,local_428,local_4c8);
    FUN_180573f20(param_1,local_b8,param_3 + 0x90,local_2e8);
    FUN_180573f20(param_1,local_68,param_4 + 0x48,local_b8);
    FUN_18056f540(param_1,local_478,local_68,local_388);
    FUN_18056f4a0(param_1,local_478,local_478,local_478);
    local_580 = FUN_18056f5e0(param_1,local_478);
    local_578 = ~local_588 & ~local_580 & local_598 & local_590;
    if (local_578 == 0) {
      FUN_18056f4a0(param_1,local_3d8,local_428,local_428);
      FUN_180573f90(param_1,local_3d8,local_3d8);
      FUN_180573f20(param_1,local_1a8,local_428,local_3d8);
      FUN_180573f20(param_1,local_298,local_1f8,local_3d8);
      FUN_180573f90(param_1,local_568,local_478);
      FUN_18056f540(param_1,local_568,local_568,local_1a8);
      FUN_18056f540(param_1,local_568,local_568,local_298);
      FUN_18056f540(param_1,local_568,local_568,local_298);
      FUN_18056f540(param_1,local_518,local_298,local_568);
      FUN_180573f20(param_1,local_518,local_518,local_478);
      FUN_180573f20(param_1,local_158,local_388,local_1a8);
      FUN_18056f540(param_1,local_518,local_518,local_158);
      FUN_18056f540(param_1,local_518,local_518,local_158);
      local_5a8 = param_4;
      FUN_18056f660(param_1,local_568,local_598,local_568);
      local_5a8 = param_3;
      FUN_18056f660(param_1,param_2,local_590,local_568);
      local_5a8 = param_4 + 0x48;
      FUN_18056f660(param_1,local_518,local_598,local_518);
      local_5a8 = param_3 + 0x48;
      FUN_18056f660(param_1,param_2 + 0x48,local_590,local_518);
      local_5a8 = param_4 + 0x90;
      FUN_18056f660(param_1,local_248,local_598,local_248);
      local_5a8 = param_3 + 0x90;
      FUN_18056f660(param_1,param_2 + 0x90,local_590,local_248);
    }
    else {
      FUN_180572ce0(param_1,param_2,param_3);
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_5c8);
  return;
}


/* address=180572ce0 name=FUN_180572ce0 */

void FUN_180572ce0(longlong param_1,longlong param_2,longlong param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_498;
  if (*(int *)(param_1 + 0xe0) == 0) {
    FUN_180573f90(param_1,local_248,param_3);
    FUN_180573f90(param_1,local_158,param_3 + 0x48);
    FUN_180573f90(param_1,local_3d8,local_158);
    FUN_180573f90(param_1,local_68,param_3 + 0x90);
    FUN_18056f4a0(param_1,local_478,param_3,local_158);
    FUN_180573f90(param_1,local_478,local_478);
    FUN_18056f540(param_1,local_478,local_478,local_248);
    FUN_18056f540(param_1,local_478,local_478,local_3d8);
    FUN_18056f4a0(param_1,local_478,local_478,local_478);
    FUN_180573f90(param_1,local_388,local_68);
    FUN_180573f20(param_1,local_388,param_1 + 0x50,local_388);
    FUN_18056f4a0(param_1,local_388,local_388,local_248);
    FUN_18056f4a0(param_1,local_388,local_388,local_248);
    FUN_18056f4a0(param_1,local_388,local_388,local_248);
    FUN_180573f90(param_1,param_2,local_388);
    FUN_18056f540(param_1,param_2,param_2,local_478);
    FUN_18056f540(param_1,param_2,param_2,local_478);
    FUN_18056f4a0(param_1,param_2 + 0x90,param_3 + 0x48,param_3 + 0x90);
    FUN_180573f90(param_1,param_2 + 0x90,param_2 + 0x90);
    FUN_18056f540(param_1,param_2 + 0x90,param_2 + 0x90,local_158);
    FUN_18056f540(param_1,param_2 + 0x90,param_2 + 0x90,local_68);
    FUN_18056f4a0(param_1,local_3d8,local_3d8,local_3d8);
    FUN_18056f4a0(param_1,local_3d8,local_3d8,local_3d8);
    FUN_18056f4a0(param_1,local_3d8,local_3d8,local_3d8);
    FUN_18056f540(param_1,param_2 + 0x48,local_478,param_2);
    FUN_180573f20(param_1,param_2 + 0x48,param_2 + 0x48,local_388);
    FUN_18056f540(param_1,param_2 + 0x48,param_2 + 0x48,local_3d8);
  }
  else {
    FUN_180573f90(param_1,local_298,param_3 + 0x90);
    FUN_180573f90(param_1,local_428,param_3 + 0x48);
    FUN_180573f20(param_1,local_108,param_3,local_428);
    FUN_18056f540(param_1,local_1a8,param_3,local_298);
    FUN_18056f4a0(param_1,local_2e8,param_3,local_298);
    FUN_18056f4a0(param_1,local_1f8,local_2e8,local_2e8);
    FUN_18056f4a0(param_1,local_2e8,local_2e8,local_1f8);
    FUN_180573f20(param_1,local_b8,local_1a8,local_2e8);
    FUN_180573f90(param_1,param_2,local_b8);
    FUN_18056f4a0(param_1,local_338,local_108,local_108);
    FUN_18056f4a0(param_1,local_338,local_338,local_338);
    FUN_18056f4a0(param_1,local_1f8,local_338,local_338);
    FUN_18056f540(param_1,param_2,param_2,local_1f8);
    FUN_18056f4a0(param_1,local_298,local_428,local_298);
    FUN_18056f4a0(param_1,local_1a8,param_3 + 0x48,param_3 + 0x90);
    FUN_180573f90(param_1,param_2 + 0x90,local_1a8);
    FUN_18056f540(param_1,param_2 + 0x90,param_2 + 0x90,local_298);
    FUN_18056f540(param_1,param_2 + 0x48,local_338,param_2);
    FUN_18056f4a0(param_1,local_428,local_428,local_428);
    FUN_180573f90(param_1,local_428,local_428);
    FUN_180573f20(param_1,param_2 + 0x48,local_b8,param_2 + 0x48);
    FUN_18056f4a0(param_1,local_428,local_428,local_428);
    FUN_18056f540(param_1,param_2 + 0x48,param_2 + 0x48,local_428);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_498);
  return;
}


/* address=1805734e0 name=FUN_1805734e0 */

void FUN_1805734e0(undefined8 param_1,longlong param_2)

{
  FUN_18056f3c0(param_1,param_2 + 0x48,param_2 + 0x48);
  return;
}


/* address=180573520 name=FUN_180573520 */

bool FUN_180573520(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18056f5e0(param_1,param_2 + 0x90);
  return lVar1 == 0;
}


/* address=180573570 name=FUN_180573570 */

void FUN_180573570(longlong *param_1,longlong param_2)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_198;
  local_178 = *(code **)(*param_1 + 0x70);
  local_170 = *(code **)(*param_1 + 0x78);
  (*local_170)(param_1,local_108,param_2);
  (*local_170)(param_1,local_158,param_2 + 0x90);
  (*local_170)(param_1,local_b8,local_158);
  (*local_178)(param_1,local_68,local_b8,local_158);
  if (*(int *)(param_1 + 0x1c) == 0) {
    (*local_178)(param_1,local_158,local_b8,param_1 + 10);
    FUN_18056f4a0(param_1,local_108,local_108,local_158);
  }
  else {
    FUN_18056f4a0(param_1,local_158,local_b8,local_b8);
    FUN_18056f4a0(param_1,local_158,local_158,local_b8);
    FUN_18056f540(param_1,local_108,local_108,local_158);
  }
  (*local_178)(param_1,local_108,local_108,param_2);
  (*local_178)(param_1,local_158,param_1 + 0x13,local_68);
  FUN_18056f4a0(param_1,local_108,local_108,local_158);
  (*local_170)(param_1,local_158,param_2 + 0x48);
  FUN_18056f540(param_1,local_158,local_158,local_108);
  local_168 = FUN_18056f5e0(param_1,local_158);
  local_160 = FUN_18056f5e0(param_1,param_2 + 0x90);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_198);
  return;
}


/* address=180573820 name=FUN_180573820 */

void FUN_180573820(longlong *param_1,longlong param_2,longlong param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_1c8;
  local_1a8 = *(code **)(*param_1 + 0x70);
  local_1a0 = *(code **)(*param_1 + 0x78);
  (*local_1a0)(param_1,local_108,param_3 + 0x90);
  (*local_1a8)(param_1,local_158,param_2,local_108);
  (*local_1a0)(param_1,local_b8,param_2 + 0x90);
  (*local_1a8)(param_1,local_68,param_3,local_b8);
  FUN_18056f540(param_1,local_158,local_158,local_68);
  local_180 = FUN_18056f5e0(param_1,local_158);
  (*local_1a8)(param_1,local_108,local_108,param_3 + 0x90);
  (*local_1a8)(param_1,local_158,param_2 + 0x48,local_108);
  (*local_1a8)(param_1,local_b8,local_b8,param_2 + 0x90);
  (*local_1a8)(param_1,local_68,param_3 + 0x48,local_b8);
  FUN_18056f540(param_1,local_158,local_158,local_68);
  local_188 = FUN_18056f5e0(param_1,local_158);
  local_178 = ~(local_180 | local_188);
  local_190 = FUN_18056f5e0(param_1,param_2 + 0x90);
  local_198 = FUN_18056f5e0(param_1,param_3 + 0x90);
  local_170 = ~(local_190 | local_198);
  local_168 = local_170 | local_190 & local_198 & local_178;
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=180573b50 name=FUN_180573b50 */

bool FUN_180573b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_18056eca0(param_1,param_3);
  if (iVar1 == 0) {
    FUN_18056f070(param_1,param_2,param_3);
    FUN_18056ef90(param_1,param_2,param_2);
  }
  return iVar1 == 0;
}


/* address=180573bc0 name=FUN_180573bc0 */

void FUN_180573bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined auStack_98 [32];
  undefined4 local_78;
  undefined local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_98;
  iVar1 = FUN_180573520(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1805704e0(param_1,local_68,param_2);
    if ((iVar1 == 0) || (iVar1 = FUN_18056ec30(param_1,local_68,param_3), iVar1 == 0)) {
      local_78 = 0;
    }
    else {
      local_78 = 1;
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=180573c80 name=FUN_180573c80 */

void FUN_180573c80(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_18053db00(param_1 + 0x38);
  FUN_1805563c0(param_2,(ulonglong)uVar1,param_4,(longlong)*(int *)(param_1 + 0x40));
  *param_3 = (ulonglong)uVar1;
  return;
}


/* address=180573cf0 name=FUN_180573cf0 */

undefined8 FUN_180573cf0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_18053db00(param_1 + 0x38);
  if (param_4 == uVar1) {
    FUN_180556260(param_2,(longlong)*(int *)(param_1 + 0x40),param_3,param_4);
    iVar2 = FUN_180551ee0(param_2,*(undefined8 *)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x40)
                         );
    if (iVar2 == 0) {
      FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180956150,0x15b);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_1809560c0,0x154);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=180573f20 name=FUN_180573f20 */

void FUN_180573f20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1805559c0(param_2,param_3,param_4,(longlong)*(int *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x138));
  return;
}


/* address=180573f90 name=FUN_180573f90 */

void FUN_180573f90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805559c0(param_2,param_3,param_3,(longlong)*(int *)(param_1 + 0x40),
                *(undefined8 *)(param_1 + 0x138));
  return;
}


/* address=1805740e0 name=FUN_1805740e0 */

void FUN_1805740e0(ulonglong *param_1,longlong *param_2,ulonglong param_3)

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


/* address=1805741b0 name=FUN_1805741b0 */

void FUN_1805741b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18057eea0();
  FUN_18059e1b0(uVar1,&LAB_18057eff0);
  FUN_18057ee90();
  return;
}


/* address=1805741e0 name=FUN_1805741e0 */

void FUN_1805741e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180574ee0();
  FUN_18059e1b0(uVar1,&LAB_180575190);
  FUN_180574ed0();
  return;
}


/* address=180574210 name=FUN_180574210 */

longlong * FUN_180574210(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_18058f4e0(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_18053d800();
    *plVar1 = lVar2;
    lVar2 = FUN_18053d800();
    plVar1[1] = lVar2;
    if ((*plVar1 == 0) || (plVar1[1] == 0)) {
      FUN_180574280(plVar1);
      plVar1 = (longlong *)0x0;
    }
  }
  return plVar1;
}


/* address=180574280 name=FUN_180574280 */

void FUN_180574280(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_18053d880(*param_1);
    FUN_18053d880(param_1[1]);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=1805743d0 name=FUN_1805743d0 */

void FUN_1805743d0(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_1e8;
  FUN_180533e20();
  if ((*(longlong *)(param_3 + 0x28) == 0) ||
     (*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x28) == 0)) {
    local_1b0 = FUN_18056d800(param_3);
    if ((local_1b0 == 0) || (*(longlong *)(param_3 + 0x10) == 0)) {
      local_1c8 = CONCAT44(local_1c8._4_4_,0x13c);
      FUN_18050f6f0(0x1a,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180950ed0);
    }
    else {
      local_190 = FUN_18056ba50(local_1b0);
      local_198 = *(longlong *)(param_3 + 0x10) + 0x18;
      FUN_18053d4f0();
      FUN_180531a10(local_138);
      FUN_180531b40(local_138,local_198,(longlong)*(int *)(local_190 + 8) << 3);
      FUN_180531b40(local_138,param_1,param_2);
      FUN_180531da0(local_58,local_138);
      local_1b8 = 0;
      do {
        local_1a8 = 0;
        iVar1 = FUN_18056ebe0(local_1b0,local_188,local_58);
        if (iVar1 == 0) {
          local_1a8 = 0;
          goto LAB_1805745e7;
        }
        local_1c8 = param_1;
        local_1c0 = param_2;
        local_1a8 = FUN_180574bf0(local_1b0,local_1a0,local_198,local_188);
        if ((local_1a8 != 0) || (local_1a0[0] == 0)) goto LAB_1805745e7;
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 <= DAT_18072604c);
      local_1c8 = CONCAT44(local_1c8._4_4_,0x166);
      FUN_18050f6f0(0x1a,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180950f60);
LAB_1805745e7:
      FUN_18053d500();
    }
  }
  else {
    local_1c8 = CONCAT44(local_1c8._4_4_,0x136);
    FUN_18050f6f0(0x1a,0,0x67,s_D__a_1_s_target_x86_64_pc_window_180950e40);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_1e8);
  return;
}


/* address=180574610 name=FUN_180574610 */

void FUN_180574610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180533e20();
  FUN_180574810(param_1,param_2,param_3,param_4);
  return;
}


/* address=1805746b0 name=FUN_1805746b0 */

void FUN_1805746b0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_3 + 0x28) == 0) ||
     (*(longlong *)(*(longlong *)(param_3 + 0x28) + 0x28) == 0)) {
    local_88 = FUN_18056d800(param_3);
    if ((local_88 == 0) || (*(longlong *)(param_3 + 0x10) == 0)) {
      local_98 = CONCAT44(local_98._4_4_,0x118);
      FUN_18050f6f0(0x1a,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180950db0);
    }
    else {
      local_78 = *(longlong *)(param_3 + 0x10) + 0x18;
      iVar1 = FUN_18056eaa0(local_88,local_68,param_4,param_5);
      if (iVar1 != 0) {
        local_98 = param_1;
        local_90 = param_2;
        FUN_180574bf0(local_88,local_80,local_78,local_68);
      }
    }
  }
  else {
    local_98 = CONCAT44(local_98._4_4_,0x112);
    FUN_18050f6f0(0x1a,0,0x67,s_D__a_1_s_target_x86_64_pc_window_180950d20);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=180574810 name=FUN_180574810 */

void FUN_180574810(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_318;
  local_2e8 = FUN_18056d800(param_4);
  local_2e0 = FUN_18056da60(param_4);
  if (((local_2e8 == 0) || (local_2e0 == 0)) || (param_3 == (undefined8 *)0x0)) {
    local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,0x9c);
    FUN_18050f6f0(0x1a,0,0x65,s_D__a_1_s_target_x86_64_pc_window_1809509c0);
  }
  else {
    iVar1 = FUN_18053fc40(*param_3);
    if (((iVar1 == 0) && (iVar1 = FUN_18056e9a0(local_2e8,local_288,*param_3), iVar1 != 0)) &&
       ((iVar1 = FUN_18053fc40(param_3[1]), iVar1 == 0 &&
        (iVar1 = FUN_18056e9a0(local_2e8,local_238,param_3[1]), iVar1 != 0)))) {
      iVar1 = FUN_18056f0b0(local_2e8,local_2d8,local_238);
      if (iVar1 == 0) {
        local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,0xab);
        FUN_18050f6f0(0x1a,0,0x44,s_D__a_1_s_target_x86_64_pc_window_180950ae0);
      }
      else {
        FUN_180574aa0(local_2e8,local_1e8,param_1,param_2);
        FUN_18056f000(local_2e8,local_148,local_1e8,local_2d8);
        FUN_18056f000(local_2e8,local_198,local_288,local_2d8);
        local_2f8 = local_198;
        iVar1 = FUN_180570150(local_2e8,local_f8,local_148,local_2e0 + 8);
        if (iVar1 == 0) {
          local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,0xba);
          FUN_18050f6f0(0x1a,0,0xf,s_D__a_1_s_target_x86_64_pc_window_180950b70);
        }
        else {
          iVar1 = Read(local_2e8,local_f8,local_288);
          if (iVar1 == 0) {
            local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,0xbf);
            FUN_18050f6f0(0x1a,0,100,s_D__a_1_s_target_x86_64_pc_window_180950c00);
          }
        }
      }
    }
    else {
      local_2f8 = (undefined *)CONCAT44(local_2f8._4_4_,0xa5);
      FUN_18050f6f0(0x1a,0,100,s_D__a_1_s_target_x86_64_pc_window_180950a50);
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_318);
  return;
}


/* address=180574aa0 name=FUN_180574aa0 */

void FUN_180574aa0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  local_88 = (undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_18053daa0(local_88);
  local_80 = (ulonglong)uVar1;
  local_78 = (local_80 + 7) / 8;
  local_res20 = param_4;
  if (local_78 < param_4) {
    local_res20 = local_78;
  }
  FUN_180556260(param_2,(longlong)*(int *)(local_88 + 1),param_3,local_res20);
  if (local_80 < local_res20 << 3) {
    local_70 = param_2;
    FUN_1805530f0(param_2,param_2,8 - (local_80 & 7) & 0xffffffff,(longlong)*(int *)(local_88 + 1));
  }
  local_98 = (longlong)*(int *)(local_88 + 1);
  FUN_1805534c0(param_2,0,*local_88,local_68);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=180574bf0 name=FUN_180574bf0 */

void FUN_180574bf0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_228;
  *param_2 = 0;
  local_1f0 = FUN_18056ba50(param_1);
  uVar1 = FUN_18053daa0(local_1f0);
  if (uVar1 < 0xa0) {
    local_208 = 0xd6;
    FUN_18050f6f0(0x1a,0,0x70,s_D__a_1_s_target_x86_64_pc_window_180950c90);
  }
  else {
    iVar2 = FUN_18056fe50(param_1,local_f8,param_4);
    if ((iVar2 != 0) && (iVar2 = FUN_1805704e0(param_1,local_148,local_f8), iVar2 != 0)) {
      iVar2 = FUN_18056eca0(param_1,local_148);
      if (iVar2 == 0) {
        FUN_18056ef20(param_1,local_1e8,local_148);
        FUN_18056f000(param_1,local_1e8,param_3,local_1e8);
        FUN_180574aa0(param_1,local_198,param_5,param_6);
        FUN_18056ed20(param_1,local_1e8,local_1e8,local_198);
        FUN_18056f070(param_1,local_198,param_4);
        FUN_18056ef90(param_1,local_198,local_198);
        FUN_18056f000(param_1,local_1e8,local_1e8,local_198);
        iVar2 = FUN_18056eca0(param_1,local_1e8);
        if (iVar2 == 0) {
          local_1f8 = (undefined8 *)FUN_180574210();
          if (((local_1f8 == (undefined8 *)0x0) ||
              (iVar2 = FUN_180545c30(*local_1f8,local_148,(longlong)*(int *)(local_1f0 + 8)),
              iVar2 == 0)) ||
             (iVar2 = FUN_180545c30(local_1f8[1],local_1e8,(longlong)*(int *)(local_1f0 + 8)),
             iVar2 == 0)) {
            FUN_180574280(local_1f8);
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
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_228);
  return;
}


/* address=180574e80 name=FUN_180574e80 */

void FUN_180574e80(undefined8 *param_1,int param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    if (param_2 != 0) {
      FUN_18056b7d0(*param_1);
    }
    FUN_18058f610(param_1);
  }
  return;
}


/* address=180574ed0 name=FUN_180574ed0 */

undefined * FUN_180574ed0(void)

{
  return &DAT_180991df0;
}


/* address=180574ee0 name=FUN_180574ee0 */

undefined * FUN_180574ee0(void)

{
  return &DAT_180991ed0;
}


/* address=180574ef0 name=FUN_180574ef0 */

void FUN_180574ef0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x2cc;
  *(undefined **)(param_1 + 2) = &DAT_18072659c;
  *(undefined *)(param_1 + 4) = 5;
  *(char **)(param_1 + 6) = s_NIST_P_521_180950fe8;
  *(undefined *)(param_1 + 8) = 0x42;
  *(undefined **)(param_1 + 10) = &DAT_180726410;
  uVar1 = FUN_180570d40();
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  param_1[0xe] = 0x2cb;
  *(undefined **)(param_1 + 0x10) = &DAT_1807265a4;
  *(undefined *)(param_1 + 0x12) = 5;
  *(char **)(param_1 + 0x14) = s_NIST_P_384_180950ff8;
  *(undefined *)(param_1 + 0x16) = 0x30;
  *(undefined **)(param_1 + 0x18) = &DAT_1807262f0;
  uVar1 = FUN_180570d40();
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  param_1[0x1c] = 0x19f;
  *(undefined **)(param_1 + 0x1e) = &DAT_1807265b0;
  *(undefined *)(param_1 + 0x20) = 8;
  *(char **)(param_1 + 0x22) = s_NIST_P_256_180951008;
  *(undefined *)(param_1 + 0x24) = 0x20;
  *(undefined **)(param_1 + 0x26) = &DAT_180726230;
  uVar1 = FUN_1805741b0();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  param_1[0x2a] = 0x2c9;
  *(undefined **)(param_1 + 0x2c) = &DAT_1807265b8;
  *(undefined *)(param_1 + 0x2e) = 5;
  *(char **)(param_1 + 0x30) = s_NIST_P_224_180951018;
  *(undefined *)(param_1 + 0x32) = 0x1c;
  *(undefined **)(param_1 + 0x34) = &DAT_180726180;
  uVar1 = FUN_180570d40();
  *(undefined8 *)(param_1 + 0x36) = uVar1;
  return;
}


/* address=1805751b0 name=FUN_1805751b0 */

undefined8 FUN_1805751b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint local_38;
  undefined local_28 [40];
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FID_conflict__assert
              (u_group_>generator____NULL_180951230,u_D__a_1_s_target_x86_64_pc_window_180951130,
               0x132);
  }
  lVar3 = FUN_18053d970(param_1 + 0x10,param_3);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_180545910(param_1 + 0x10);
    FUN_180543780(*(undefined8 *)(param_1 + 0x30));
    uVar4 = FUN_180543670(param_1 + 0x10,0);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_18053f880(param_1 + 0x38,param_3);
      local_38 = (uint)(0 < iVar2);
      *(uint *)(param_1 + 0xe4) = local_38;
      if (*(int *)(param_1 + 0xe4) != 0) {
        FUN_18053d850(local_28);
        iVar2 = FUN_18053e730(local_28,param_1 + 0x38,param_3);
        if ((iVar2 == 0) ||
           (iVar2 = FUN_180545de0(param_1 + 0xe8,(longlong)*(int *)(param_1 + 0x40),local_28),
           iVar2 == 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        FUN_18053d880(local_28);
        if (!bVar1) {
          return 0;
        }
      }
      uVar4 = FUN_18056bc90(param_1);
      *(undefined8 *)(param_1 + 8) = uVar4;
      if (*(longlong *)(param_1 + 8) == 0) {
        uVar4 = 0;
      }
      else {
        FUN_18056f730(param_1,*(longlong *)(param_1 + 8) + 8,param_2);
        iVar2 = FUN_18056f6c0(param_1,param_1 + 0x140,*(longlong *)(param_1 + 8) + 0x98);
        if (iVar2 == 0) {
          FID_conflict__assert
                    (u_ec_felem_equal_group___group_>on_180951370,
                     u_D__a_1_s_target_x86_64_pc_window_180951270,0x152);
        }
        iVar2 = FUN_18059b000(param_1 + 0x130);
        if (iVar2 != 0) {
          FID_conflict__assert
                    (u__is_zero_1809514f0,u_D__a_1_s_target_x86_64_pc_window_1809513f0,0x158);
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


/* address=180575400 name=FUN_180575400 */

void FUN_180575400(longlong param_1)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_1c8;
  local_190 = (longlong *)0x0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_180 = 0;
  local_158 = FUN_18053e150();
  if (local_158 != 0) {
    local_198 = (uint)*(byte *)(param_1 + 0x20);
    local_188 = *(longlong *)(param_1 + 0x28);
    local_178 = FUN_18053dcd0(local_188,local_198,0);
    if (local_178 != 0) {
      local_170 = FUN_18053dcd0(local_188 + (ulonglong)local_198,local_198,0);
      if (local_170 != 0) {
        local_168 = FUN_18053dcd0(local_188 + (ulonglong)(local_198 << 1),local_198,0);
        if (local_168 != 0) {
          local_160 = FUN_18053dcd0(local_188 + (ulonglong)(local_198 * 5),local_198,0);
          if (local_160 != 0) {
            local_190 = (longlong *)FUN_180570d70(*(undefined8 *)(param_1 + 0x30));
            if (local_190 != (longlong *)0x0) {
              local_1a8 = local_158;
              iVar1 = (**(code **)(*local_190 + 0x10))(local_190,local_178,local_170,local_168);
              if (iVar1 != 0) {
                iVar1 = FUN_18056f370(local_190,local_f8,local_188 + (ulonglong)(local_198 * 3),
                                      local_198);
                if ((((iVar1 != 0) &&
                     (iVar1 = FUN_18056f370(local_190,local_148,
                                            local_188 + (ulonglong)(local_198 << 2),local_198),
                     iVar1 != 0)) &&
                    (iVar1 = FUN_18056f880(local_190,local_a8,local_f8,local_148), iVar1 != 0)) &&
                   (iVar1 = FUN_1805751b0(local_190,local_a8,local_160), iVar1 != 0)) {
                  local_180 = 1;
                }
                goto LAB_18057568d;
              }
            }
            local_1a8 = CONCAT44(local_1a8._4_4_,0x1d2);
            FUN_18050f6f0(0xf,0,0xf,s_D__a_1_s_target_x86_64_pc_window_180951810);
            goto LAB_18057568d;
          }
        }
      }
    }
    local_1a8 = CONCAT44(local_1a8._4_4_,0x1cb);
    FUN_18050f6f0(0xf,0,3,s_D__a_1_s_target_x86_64_pc_window_180951790);
  }
LAB_18057568d:
  if (local_180 == 0) {
    FUN_18056b7d0(local_190);
    local_190 = (longlong *)0x0;
  }
  FUN_18053e1c0(local_158);
  FUN_18053d880(local_178);
  FUN_18053d880(local_170);
  FUN_18053d880(local_168);
  FUN_18053d880(local_160);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=180575700 name=FUN_180575700 */

undefined * FUN_180575700(void)

{
  return &DAT_180991ed8;
}


/* address=180575710 name=FUN_180575710 */

undefined * FUN_180575710(void)

{
  return &DAT_180991ef8;
}


/* address=180575720 name=FUN_180575720 */

undefined4 FUN_180575720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  
  iVar1 = FUN_18056e9a0(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_18050f390();
    FUN_18053e250(param_4);
    lVar2 = FUN_18053e2b0(param_4);
    if (((lVar2 == 0) || (iVar1 = FUN_180540b40(lVar2,param_3,param_1 + 0x10,param_4), iVar1 == 0))
       || (iVar1 = FUN_18056e9a0(param_1,param_2,lVar2), iVar1 == 0)) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    FUN_18053e400(param_4);
    return local_28;
  }
  return 1;
}


/* address=180575800 name=FUN_180575800 */

undefined * FUN_180575800(void)

{
  return &DAT_180991f00;
}


/* address=180575810 name=FUN_180575810 */

longlong * FUN_180575810(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_18058f4e0(0x60);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_180533b50(plVar1,0,0x60);
    *plVar1 = (longlong)(plVar1 + 3);
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)plVar1 + 0x14) = 2;
  }
  return plVar1;
}


/* address=1805758a0 name=FUN_1805758a0 */

void FUN_1805758a0(undefined8 param_1)

{
  FUN_18058f610(param_1);
  return;
}


/* address=1805758c0 name=FUN_1805758c0 */

void FUN_1805758c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180555850(param_2,param_3,(longlong)*(int *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x138))
  ;
  return;
}


/* address=180575920 name=FUN_180575920 */

void FUN_180575920(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805558a0(param_2,(longlong)*(int *)(param_1 + 0x40),param_3,
                (longlong)*(int *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x138));
  return;
}


/* address=180575990 name=FUN_180575990 */

void FUN_180575990(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805560d0(param_2,param_3,(longlong)*(int *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x138))
  ;
  return;
}


/* address=180576100 name=FUN_180576100 */

undefined * FUN_180576100(void)

{
  return &DAT_180991f20;
}


/* address=180576110 name=FUN_180576110 */

undefined * FUN_180576110(void)

{
  return &DAT_180991f18;
}


/* address=180576120 name=FUN_180576120 */

void FUN_180576120(undefined8 *param_1)

{
  *param_1 = &LAB_180573dc0;
  param_1[1] = &LAB_180573ee0;
  param_1[2] = &LAB_180573e00;
  param_1[3] = &LAB_1805759f0;
  param_1[4] = &LAB_180575b50;
  param_1[5] = FUN_180572620;
  param_1[6] = FUN_180572ce0;
  param_1[7] = FUN_180570e70;
  param_1[8] = &LAB_180571220;
  param_1[9] = &LAB_180571270;
  param_1[0xb] = &LAB_180571d30;
  param_1[0xc] = &LAB_180571540;
  param_1[0xd] = &LAB_180571740;
  param_1[0xe] = FUN_180573f20;
  param_1[0xf] = FUN_180573f90;
  param_1[0x10] = &LAB_180573ff0;
  param_1[0x11] = &LAB_180574080;
  param_1[0x12] = &LAB_180571930;
  param_1[0x13] = &LAB_1805719b0;
  param_1[0x14] = &LAB_180573ae0;
  param_1[0x15] = FUN_180573b50;
  param_1[0x16] = &LAB_180575ed0;
  return;
}


/* address=1805762c0 name=FUN_1805762c0 */

void FUN_1805762c0(longlong param_1,longlong param_2,byte *param_3,longlong param_4,longlong param_5
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_108;
  if (param_4 == 0) {
    local_e8 = CONCAT44(local_e8._4_4_,0x8c);
    FUN_18050f6f0(0xf,0,100,s_D__a_1_s_target_x86_64_pc_window_1809544a0);
  }
  else {
    local_d8 = (uint)*param_3;
    if (local_d8 == 4) {
      iVar1 = FUN_1805709b0(param_1,local_a8,param_3,param_4);
      if (iVar1 == 0) {
        FUN_180570b00(param_1,param_2 + 8);
      }
      else {
        FUN_18056f730(param_1,param_2 + 8,local_a8);
      }
    }
    else {
      local_c8 = local_d8 & 1;
      uVar2 = FUN_18053db00(param_1 + 0x38);
      local_b8 = (ulonglong)uVar2;
      local_d8 = local_d8 & 0xfffffffe;
      if ((local_d8 == 2) && (param_4 == local_b8 + 1)) {
        local_c0 = 0;
        if ((param_5 != 0) || (param_5 = FUN_18053e150(), local_c0 = param_5, param_5 != 0)) {
          local_d4 = 0;
          FUN_18053e250(param_5);
          local_d0 = FUN_18053e2b0(param_5);
          if ((local_d0 != 0) && (lVar3 = FUN_18053dcd0(param_3 + 1,local_b8,local_d0), lVar3 != 0))
          {
            iVar1 = FUN_18053f9a0(local_d0,param_1 + 0x38);
            if (iVar1 < 0) {
              local_e8 = param_5;
              iVar1 = FUN_18056c710(param_1,param_2,local_d0,local_c8);
              if (iVar1 != 0) {
                local_d4 = 1;
              }
            }
            else {
              local_e8 = CONCAT44(local_e8._4_4_,0xba);
              FUN_18050f6f0(0xf,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_1809545a0);
            }
          }
          FUN_18053e400(param_5);
          FUN_18053e1c0(local_c0);
        }
      }
      else {
        local_e8 = CONCAT44(local_e8._4_4_,0xa2);
        FUN_18050f6f0(0xf,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180954520);
      }
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_108);
  return;
}


/* address=180576570 name=FUN_180576570 */

void FUN_180576570(longlong *param_1,undefined8 param_2,char param_3,ulonglong param_4,
                  ulonglong param_5)

{
  *param_1 = param_4 + param_5 + (ulonglong)(param_3 != '\0');
  *(bool *)param_2 =
       CARRY8(param_4,param_5) || CARRY8(param_4 + param_5,(ulonglong)(param_3 != '\0'));
  return;
}


/* address=1805765b0 name=FUN_1805765b0 */

void FUN_1805765b0(longlong *param_1,undefined8 param_2,char param_3,ulonglong param_4,
                  ulonglong param_5)

{
  *param_1 = (param_4 - param_5) - (ulonglong)(param_3 != '\0');
  *(bool *)param_2 = param_4 < param_5 || param_4 - param_5 < (ulonglong)(param_3 != '\0');
  return;
}


/* address=1805765f0 name=FUN_1805765f0 */

void FUN_1805765f0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

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


/* address=180576640 name=FUN_180576640 */

void FUN_180576640(ulonglong *param_1,char param_2,ulonglong param_3,ulonglong param_4)

{
  *param_1 = (longlong)-(param_2 != '\0') & param_4 | ~(longlong)-(param_2 != '\0') & param_3;
  return;
}


/* address=1805766d0 name=FUN_1805766d0 */

void FUN_1805766d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  FUN_1805765f0(&local_3a0,&local_390,local_420,param_3[3]);
  FUN_1805765f0(&local_3b0,&local_398,local_420,param_3[2]);
  FUN_1805765f0(&local_3c0,&local_3a8,local_420,param_3[1]);
  FUN_1805765f0(&local_418,&local_3b8,local_420,*param_3);
  FUN_180576570(&local_360,&local_457,0,local_3b8,local_3c0);
  FUN_180576570(&local_350,&local_456,local_457,local_3a8,local_3b0);
  FUN_180576570(&local_340,&local_455,local_456,local_398,local_3a0);
  local_330 = (ulonglong)local_455 + local_390;
  FUN_1805765f0(&local_348,&local_338,local_418,0xffffffff00000001);
  FUN_1805765f0(&local_388,&local_378,local_418,0xffffffff);
  FUN_1805765f0(&local_370,&local_380,local_418,0xffffffffffffffff);
  FUN_180576570(&local_368,&local_454,0,local_380,local_388);
  local_358 = (ulonglong)local_454 + local_378;
  FUN_180576570(local_30,&local_453,0,local_418,local_370);
  FUN_180576570(&local_2e8,&local_452,local_453,local_360,local_368);
  FUN_180576570(&local_2d8,&local_451,local_452,local_350,local_358);
  FUN_180576570(&local_2c8,&local_450,local_451,local_340,local_348);
  FUN_180576570(&local_2b8,&local_449,local_450,local_330,local_338);
  FUN_1805765f0(&local_308,&local_2f8,local_410,param_3[3]);
  FUN_1805765f0(&local_318,&local_300,local_410,param_3[2]);
  FUN_1805765f0(&local_328,&local_310,local_410,param_3[1]);
  FUN_1805765f0(&local_2f0,&local_320,local_410,*param_3);
  FUN_180576570(&local_2e0,&local_44f,0,local_320,local_328);
  FUN_180576570(&local_2d0,&local_44e,local_44f,local_310,local_318);
  FUN_180576570(&local_2c0,&local_44d,local_44e,local_300,local_308);
  local_2b0 = (ulonglong)local_44d + local_2f8;
  FUN_180576570(&local_408,&local_44c,0,local_2e8,local_2f0);
  FUN_180576570(&local_280,&local_44b,local_44c,local_2d8,local_2e0);
  FUN_180576570(&local_270,&local_44a,local_44b,local_2c8,local_2d0);
  FUN_180576570(&local_260,&local_448,local_44a,local_2b8,local_2c0);
  FUN_180576570(&local_250,&local_441,local_448,local_449,local_2b0);
  FUN_1805765f0(&local_268,&local_258,local_408,0xffffffff00000001);
  FUN_1805765f0(&local_2a8,&local_298,local_408,0xffffffff);
  FUN_1805765f0(&local_290,&local_2a0,local_408,0xffffffffffffffff);
  FUN_180576570(&local_288,&local_447,0,local_2a0,local_2a8);
  local_278 = (ulonglong)local_447 + local_298;
  FUN_180576570(local_28,&local_446,0,local_408,local_290);
  FUN_180576570(&local_208,&local_445,local_446,local_280,local_288);
  FUN_180576570(&local_1f8,&local_444,local_445,local_270,local_278);
  FUN_180576570(&local_1e8,&local_443,local_444,local_260,local_268);
  FUN_180576570(&local_1d8,&local_442,local_443,local_250,local_258);
  local_1c8 = (ulonglong)local_442 + (ulonglong)local_441;
  FUN_1805765f0(&local_228,&local_218,local_400,param_3[3]);
  FUN_1805765f0(&local_238,&local_220,local_400,param_3[2]);
  FUN_1805765f0(&local_248,&local_230,local_400,param_3[1]);
  FUN_1805765f0(&local_210,&local_240,local_400,*param_3);
  FUN_180576570(&local_200,&local_440,0,local_240,local_248);
  FUN_180576570(&local_1f0,&local_43f,local_440,local_230,local_238);
  FUN_180576570(&local_1e0,&local_43e,local_43f,local_220,local_228);
  local_1d0 = (ulonglong)local_43e + local_218;
  FUN_180576570(&local_3f8,&local_43d,0,local_208,local_210);
  FUN_180576570(&local_198,&local_43c,local_43d,local_1f8,local_200);
  FUN_180576570(&local_188,&local_43b,local_43c,local_1e8,local_1f0);
  FUN_180576570(&local_178,&local_43a,local_43b,local_1d8,local_1e0);
  FUN_180576570(&local_168,&local_433,local_43a,local_1c8,local_1d0);
  FUN_1805765f0(&local_180,&local_170,local_3f8,0xffffffff00000001);
  FUN_1805765f0(&local_1c0,&local_1b0,local_3f8,0xffffffff);
  FUN_1805765f0(&local_1a8,&local_1b8,local_3f8,0xffffffffffffffff);
  FUN_180576570(&local_1a0,&local_439,0,local_1b8,local_1c0);
  local_190 = (ulonglong)local_439 + local_1b0;
  FUN_180576570(local_20,&local_438,0,local_3f8,local_1a8);
  FUN_180576570(&local_120,&local_437,local_438,local_198,local_1a0);
  FUN_180576570(&local_110,&local_436,local_437,local_188,local_190);
  FUN_180576570(&local_100,&local_435,local_436,local_178,local_180);
  FUN_180576570(&local_f0,&local_434,local_435,local_168,local_170);
  local_e0 = (ulonglong)local_434 + (ulonglong)local_433;
  FUN_1805765f0(&local_140,&local_130,local_3f0,param_3[3]);
  FUN_1805765f0(&local_150,&local_138,local_3f0,param_3[2]);
  FUN_1805765f0(&local_160,&local_148,local_3f0,param_3[1]);
  FUN_1805765f0(&local_128,&local_158,local_3f0,*param_3);
  FUN_180576570(&local_118,&local_432,0,local_158,local_160);
  FUN_180576570(&local_108,&local_431,local_432,local_148,local_150);
  FUN_180576570(&local_f8,&local_430,local_431,local_138,local_140);
  local_e8 = (ulonglong)local_430 + local_130;
  FUN_180576570(&local_3e8,&local_42f,0,local_120,local_128);
  FUN_180576570(&local_b0,&local_42e,local_42f,local_110,local_118);
  FUN_180576570(&local_a0,&local_42d,local_42e,local_100,local_108);
  FUN_180576570(&local_90,&local_42c,local_42d,local_f0,local_f8);
  FUN_180576570(&local_80,&local_425,local_42c,local_e0,local_e8);
  FUN_1805765f0(&local_98,&local_88,local_3e8,0xffffffff00000001);
  FUN_1805765f0(&local_d8,&local_c8,local_3e8,0xffffffff);
  FUN_1805765f0(&local_c0,&local_d0,local_3e8,0xffffffffffffffff);
  FUN_180576570(&local_b8,&local_42b,0,local_d0,local_d8);
  local_a8 = (ulonglong)local_42b + local_c8;
  FUN_180576570(local_18,&local_42a,0,local_3e8,local_c0);
  FUN_180576570(&local_3e0,&local_429,local_42a,local_b0,local_b8);
  FUN_180576570(&local_3d8,&local_428,local_429,local_a0,local_a8);
  FUN_180576570(&local_3d0,&local_427,local_428,local_90,local_98);
  FUN_180576570(&local_3c8,&local_426,local_427,local_80,local_88);
  local_78 = (ulonglong)local_426 + (ulonglong)local_425;
  FUN_1805765b0(&local_70,&local_424,0,local_3e0,0xffffffffffffffff);
  FUN_1805765b0(&local_68,&local_423,local_424,local_3d8,0xffffffff);
  FUN_1805765b0(&local_60,&local_422,local_423,local_3d0,0);
  FUN_1805765b0(&local_58,&local_421,local_422,local_3c8,0xffffffff00000001);
  FUN_1805765b0(local_10,&local_458,local_421,local_78,0);
  FUN_180576640(&local_50,local_458,local_70,local_3e0);
  FUN_180576640(&local_48,local_458,local_68,local_3d8);
  FUN_180576640(&local_40,local_458,local_60,local_3d0);
  FUN_180576640(&local_38,local_458,local_58,local_3c8);
  *param_1 = local_50;
  param_1[1] = local_48;
  param_1[2] = local_40;
  param_1[3] = local_38;
  return;
}


/* address=1805777a0 name=FUN_1805777a0 */

void FUN_1805777a0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1805765f0(&local_3a0,&local_390,local_420,param_2[3]);
  FUN_1805765f0(&local_3b0,&local_398,local_420,param_2[2]);
  FUN_1805765f0(&local_3c0,&local_3a8,local_420,param_2[1]);
  FUN_1805765f0(&local_418,&local_3b8,local_420,*param_2);
  FUN_180576570(&local_360,&local_457,0,local_3b8,local_3c0);
  FUN_180576570(&local_350,&local_456,local_457,local_3a8,local_3b0);
  FUN_180576570(&local_340,&local_455,local_456,local_398,local_3a0);
  local_330 = (ulonglong)local_455 + local_390;
  FUN_1805765f0(&local_348,&local_338,local_418,0xffffffff00000001);
  FUN_1805765f0(&local_388,&local_378,local_418,0xffffffff);
  FUN_1805765f0(&local_370,&local_380,local_418,0xffffffffffffffff);
  FUN_180576570(&local_368,&local_454,0,local_380,local_388);
  local_358 = (ulonglong)local_454 + local_378;
  FUN_180576570(local_30,&local_453,0,local_418,local_370);
  FUN_180576570(&local_2e8,&local_452,local_453,local_360,local_368);
  FUN_180576570(&local_2d8,&local_451,local_452,local_350,local_358);
  FUN_180576570(&local_2c8,&local_450,local_451,local_340,local_348);
  FUN_180576570(&local_2b8,&local_449,local_450,local_330,local_338);
  FUN_1805765f0(&local_308,&local_2f8,local_410,param_2[3]);
  FUN_1805765f0(&local_318,&local_300,local_410,param_2[2]);
  FUN_1805765f0(&local_328,&local_310,local_410,param_2[1]);
  FUN_1805765f0(&local_2f0,&local_320,local_410,*param_2);
  FUN_180576570(&local_2e0,&local_44f,0,local_320,local_328);
  FUN_180576570(&local_2d0,&local_44e,local_44f,local_310,local_318);
  FUN_180576570(&local_2c0,&local_44d,local_44e,local_300,local_308);
  local_2b0 = (ulonglong)local_44d + local_2f8;
  FUN_180576570(&local_408,&local_44c,0,local_2e8,local_2f0);
  FUN_180576570(&local_280,&local_44b,local_44c,local_2d8,local_2e0);
  FUN_180576570(&local_270,&local_44a,local_44b,local_2c8,local_2d0);
  FUN_180576570(&local_260,&local_448,local_44a,local_2b8,local_2c0);
  FUN_180576570(&local_250,&local_441,local_448,local_449,local_2b0);
  FUN_1805765f0(&local_268,&local_258,local_408,0xffffffff00000001);
  FUN_1805765f0(&local_2a8,&local_298,local_408,0xffffffff);
  FUN_1805765f0(&local_290,&local_2a0,local_408,0xffffffffffffffff);
  FUN_180576570(&local_288,&local_447,0,local_2a0,local_2a8);
  local_278 = (ulonglong)local_447 + local_298;
  FUN_180576570(local_28,&local_446,0,local_408,local_290);
  FUN_180576570(&local_208,&local_445,local_446,local_280,local_288);
  FUN_180576570(&local_1f8,&local_444,local_445,local_270,local_278);
  FUN_180576570(&local_1e8,&local_443,local_444,local_260,local_268);
  FUN_180576570(&local_1d8,&local_442,local_443,local_250,local_258);
  local_1c8 = (ulonglong)local_442 + (ulonglong)local_441;
  FUN_1805765f0(&local_228,&local_218,local_400,param_2[3]);
  FUN_1805765f0(&local_238,&local_220,local_400,param_2[2]);
  FUN_1805765f0(&local_248,&local_230,local_400,param_2[1]);
  FUN_1805765f0(&local_210,&local_240,local_400,*param_2);
  FUN_180576570(&local_200,&local_440,0,local_240,local_248);
  FUN_180576570(&local_1f0,&local_43f,local_440,local_230,local_238);
  FUN_180576570(&local_1e0,&local_43e,local_43f,local_220,local_228);
  local_1d0 = (ulonglong)local_43e + local_218;
  FUN_180576570(&local_3f8,&local_43d,0,local_208,local_210);
  FUN_180576570(&local_198,&local_43c,local_43d,local_1f8,local_200);
  FUN_180576570(&local_188,&local_43b,local_43c,local_1e8,local_1f0);
  FUN_180576570(&local_178,&local_43a,local_43b,local_1d8,local_1e0);
  FUN_180576570(&local_168,&local_433,local_43a,local_1c8,local_1d0);
  FUN_1805765f0(&local_180,&local_170,local_3f8,0xffffffff00000001);
  FUN_1805765f0(&local_1c0,&local_1b0,local_3f8,0xffffffff);
  FUN_1805765f0(&local_1a8,&local_1b8,local_3f8,0xffffffffffffffff);
  FUN_180576570(&local_1a0,&local_439,0,local_1b8,local_1c0);
  local_190 = (ulonglong)local_439 + local_1b0;
  FUN_180576570(local_20,&local_438,0,local_3f8,local_1a8);
  FUN_180576570(&local_120,&local_437,local_438,local_198,local_1a0);
  FUN_180576570(&local_110,&local_436,local_437,local_188,local_190);
  FUN_180576570(&local_100,&local_435,local_436,local_178,local_180);
  FUN_180576570(&local_f0,&local_434,local_435,local_168,local_170);
  local_e0 = (ulonglong)local_434 + (ulonglong)local_433;
  FUN_1805765f0(&local_140,&local_130,local_3f0,param_2[3]);
  FUN_1805765f0(&local_150,&local_138,local_3f0,param_2[2]);
  FUN_1805765f0(&local_160,&local_148,local_3f0,param_2[1]);
  FUN_1805765f0(&local_128,&local_158,local_3f0,*param_2);
  FUN_180576570(&local_118,&local_432,0,local_158,local_160);
  FUN_180576570(&local_108,&local_431,local_432,local_148,local_150);
  FUN_180576570(&local_f8,&local_430,local_431,local_138,local_140);
  local_e8 = (ulonglong)local_430 + local_130;
  FUN_180576570(&local_3e8,&local_42f,0,local_120,local_128);
  FUN_180576570(&local_b0,&local_42e,local_42f,local_110,local_118);
  FUN_180576570(&local_a0,&local_42d,local_42e,local_100,local_108);
  FUN_180576570(&local_90,&local_42c,local_42d,local_f0,local_f8);
  FUN_180576570(&local_80,&local_425,local_42c,local_e0,local_e8);
  FUN_1805765f0(&local_98,&local_88,local_3e8,0xffffffff00000001);
  FUN_1805765f0(&local_d8,&local_c8,local_3e8,0xffffffff);
  FUN_1805765f0(&local_c0,&local_d0,local_3e8,0xffffffffffffffff);
  FUN_180576570(&local_b8,&local_42b,0,local_d0,local_d8);
  local_a8 = (ulonglong)local_42b + local_c8;
  FUN_180576570(local_18,&local_42a,0,local_3e8,local_c0);
  FUN_180576570(&local_3e0,&local_429,local_42a,local_b0,local_b8);
  FUN_180576570(&local_3d8,&local_428,local_429,local_a0,local_a8);
  FUN_180576570(&local_3d0,&local_427,local_428,local_90,local_98);
  FUN_180576570(&local_3c8,&local_426,local_427,local_80,local_88);
  local_78 = (ulonglong)local_426 + (ulonglong)local_425;
  FUN_1805765b0(&local_70,&local_424,0,local_3e0,0xffffffffffffffff);
  FUN_1805765b0(&local_68,&local_423,local_424,local_3d8,0xffffffff);
  FUN_1805765b0(&local_60,&local_422,local_423,local_3d0,0);
  FUN_1805765b0(&local_58,&local_421,local_422,local_3c8,0xffffffff00000001);
  FUN_1805765b0(local_10,&local_458,local_421,local_78,0);
  FUN_180576640(&local_50,local_458,local_70,local_3e0);
  FUN_180576640(&local_48,local_458,local_68,local_3d8);
  FUN_180576640(&local_40,local_458,local_60,local_3d0);
  FUN_180576640(&local_38,local_458,local_58,local_3c8);
  *param_1 = local_50;
  param_1[1] = local_48;
  param_1[2] = local_40;
  param_1[3] = local_38;
  return;
}


/* address=180578860 name=FUN_180578860 */

void FUN_180578860(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  FUN_180576570(&local_78,&local_87,0,*param_2,*param_3);
  FUN_180576570(&local_70,&local_86,local_87,param_2[1],param_3[1]);
  FUN_180576570(&local_68,&local_85,local_86,param_2[2],param_3[2]);
  FUN_180576570(&local_60,&local_81,local_85,param_2[3],param_3[3]);
  FUN_1805765b0(&local_58,&local_84,0,local_78,0xffffffffffffffff);
  FUN_1805765b0(&local_50,&local_83,local_84,local_70,0xffffffff);
  FUN_1805765b0(&local_48,&local_82,local_83,local_68,0);
  FUN_1805765b0(&local_40,local_80,local_82,local_60,0xffffffff00000001);
  FUN_1805765b0(local_18,&local_88,local_80[0],local_81,0);
  FUN_180576640(&local_38,local_88,local_58,local_78);
  FUN_180576640(&local_30,local_88,local_50,local_70);
  FUN_180576640(&local_28,local_88,local_48,local_68);
  FUN_180576640(&local_20,local_88,local_40,local_60);
  *param_1 = local_38;
  param_1[1] = local_30;
  param_1[2] = local_28;
  param_1[3] = local_20;
  return;
}


/* address=180578b30 name=FUN_180578b30 */

void FUN_180578b30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  FUN_1805765b0(&local_48,&local_58,0,*param_2,*param_3);
  FUN_1805765b0(&local_40,&local_57,local_58,param_2[1],param_3[1]);
  FUN_1805765b0(&local_38,&local_56,local_57,param_2[2],param_3[2]);
  FUN_1805765b0(&local_30,&local_55,local_56,param_2[3],param_3[3]);
  FUN_180576640(&local_50,local_55,0,0xffffffffffffffff);
  FUN_180576570(&local_28,&local_54,0,local_48,local_50);
  FUN_180576570(&local_20,&local_53,local_54,local_40,local_50 & 0xffffffff);
  FUN_180576570(&local_18,&local_52,local_53,local_38,0);
  FUN_180576570(local_10,&local_51,local_52,local_30,local_50 & 0xffffffff00000001);
  *param_1 = local_28;
  param_1[1] = local_20;
  param_1[2] = local_18;
  param_1[3] = local_10[0];
  return;
}


/* address=180578d90 name=FUN_180578d90 */

void FUN_180578d90(undefined8 *param_1,undefined8 *param_2)

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
  
  FUN_1805765b0(&local_48,&local_58,0,0,*param_2);
  FUN_1805765b0(&local_40,&local_57,local_58,0,param_2[1]);
  FUN_1805765b0(&local_38,&local_56,local_57,0,param_2[2]);
  FUN_1805765b0(&local_30,&local_55,local_56,0,param_2[3]);
  FUN_180576640(&local_50,local_55,0,0xffffffffffffffff);
  FUN_180576570(&local_28,&local_54,0,local_48,local_50);
  FUN_180576570(&local_20,&local_53,local_54,local_40,local_50 & 0xffffffff);
  FUN_180576570(&local_18,&local_52,local_53,local_38,0);
  FUN_180576570(local_10,&local_51,local_52,local_30,local_50 & 0xffffffff00000001);
  *param_1 = local_28;
  param_1[1] = local_20;
  param_1[2] = local_18;
  param_1[3] = local_10[0];
  return;
}


/* address=180578fa0 name=FUN_180578fa0 */

void FUN_180578fa0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1805765f0(&local_150,&local_140,local_1e8,0xffffffff00000001);
  FUN_1805765f0(&local_1a8,&local_168,local_1e8,0xffffffff);
  FUN_1805765f0(&local_198,&local_1a0,local_1e8,0xffffffffffffffff);
  FUN_180576570(&local_190,&local_204,0,local_1a0,local_1a8);
  FUN_180576570(local_30,&local_207,0,local_1e8,local_198);
  FUN_180576570(&local_188,&local_205,local_207,0,local_190);
  FUN_180576570(&local_1e0,&local_206,0,local_188,param_2[1]);
  FUN_1805765f0(&local_148,&local_e8,local_1e0,0xffffffff00000001);
  FUN_1805765f0(&local_180,&local_158,local_1e0,0xffffffff);
  FUN_1805765f0(&local_170,&local_178,local_1e0,0xffffffffffffffff);
  FUN_180576570(&local_160,&local_202,0,local_178,local_180);
  FUN_180576570(local_28,&local_203,0,local_1e0,local_170);
  FUN_180576570(&local_138,&local_201,local_203,
                (ulonglong)local_206 + (ulonglong)local_204 + (ulonglong)local_205 + local_168,
                local_160);
  FUN_180576570(&local_130,&local_200,local_201,local_150,(ulonglong)local_202 + local_158);
  FUN_180576570(&local_128,&local_1f9,local_200,local_140,local_148);
  FUN_180576570(&local_1d8,&local_1ff,0,local_138,param_2[2]);
  FUN_180576570(&local_100,&local_1fe,local_1ff,local_130,0);
  FUN_180576570(&local_f0,&local_1fa,local_1fe,local_128,0);
  FUN_1805765f0(&local_e0,&local_88,local_1d8,0xffffffff00000001);
  FUN_1805765f0(&local_120,&local_f8,local_1d8,0xffffffff);
  FUN_1805765f0(&local_110,&local_118,local_1d8,0xffffffffffffffff);
  FUN_180576570(&local_108,&local_1fc,0,local_118,local_120);
  FUN_180576570(local_20,&local_1fd,0,local_1d8,local_110);
  FUN_180576570(&local_d8,&local_1fb,local_1fd,local_100,local_108);
  FUN_180576570(&local_d0,&local_1f8,local_1fb,local_f0,(ulonglong)local_1fc + local_f8);
  FUN_180576570(&local_c8,&local_1f1,local_1f8,
                (ulonglong)local_1f9 + (ulonglong)local_1fa + local_e8,local_e0);
  FUN_180576570(&local_1d0,&local_1f7,0,local_d8,param_2[3]);
  FUN_180576570(&local_a0,&local_1f6,local_1f7,local_d0,0);
  FUN_180576570(&local_90,&local_1f2,local_1f6,local_c8,0);
  FUN_1805765f0(&local_80,&local_78,local_1d0,0xffffffff00000001);
  FUN_1805765f0(&local_c0,&local_98,local_1d0,0xffffffff);
  FUN_1805765f0(&local_b0,&local_b8,local_1d0,0xffffffffffffffff);
  FUN_180576570(&local_a8,&local_1f4,0,local_b8,local_c0);
  FUN_180576570(local_18,&local_1f5,0,local_1d0,local_b0);
  FUN_180576570(&local_1c8,&local_1f3,local_1f5,local_a0,local_a8);
  FUN_180576570(&local_1c0,&local_1f0,local_1f3,local_90,(ulonglong)local_1f4 + local_98);
  FUN_180576570(&local_1b8,&local_1ef,local_1f0,
                (ulonglong)local_1f1 + (ulonglong)local_1f2 + local_88,local_80);
  local_1b0 = (ulonglong)local_1ef + local_78;
  FUN_1805765b0(&local_70,&local_1ee,0,local_1c8,0xffffffffffffffff);
  FUN_1805765b0(&local_68,&local_1ed,local_1ee,local_1c0,0xffffffff);
  FUN_1805765b0(&local_60,&local_1ec,local_1ed,local_1b8,0);
  FUN_1805765b0(&local_58,local_1eb,local_1ec,local_1b0,0xffffffff00000001);
  FUN_1805765b0(local_10,&local_208,local_1eb[0],0,0);
  FUN_180576640(&local_50,local_208,local_70,local_1c8);
  FUN_180576640(&local_48,local_208,local_68,local_1c0);
  FUN_180576640(&local_40,local_208,local_60,local_1b8);
  FUN_180576640(&local_38,local_208,local_58,local_1b0);
  *param_1 = local_50;
  param_1[1] = local_48;
  param_1[2] = local_40;
  param_1[3] = local_38;
  return;
}


/* address=1805797d0 name=FUN_1805797d0 */

void FUN_1805797d0(ulonglong *param_1,ulonglong *param_2)

{
  *param_1 = *param_2 | param_2[1] | param_2[2] | param_2[3];
  return;
}


/* address=180579850 name=FUN_180579850 */

void FUN_180579850(undefined8 *param_1,undefined param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10 [2];
  
  FUN_180576640(&local_28,param_2,*param_3,*param_4);
  FUN_180576640(&local_20,param_2,param_3[1],param_4[1]);
  FUN_180576640(&local_18,param_2,param_3[2],param_4[2]);
  FUN_180576640(local_10,param_2,param_3[3],param_4[3]);
  *param_1 = local_28;
  param_1[1] = local_20;
  param_1[2] = local_18;
  param_1[3] = local_10[0];
  return;
}


/* address=1805799a0 name=FUN_1805799a0 */

undefined8 FUN_1805799a0(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_1805797d0(local_18,param_1);
  return local_18[0];
}


/* address=1805799d0 name=FUN_1805799d0 */

void FUN_1805799d0(longlong param_1,longlong param_2)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    *(undefined8 *)(param_1 + local_18 * 8) = *(undefined8 *)(param_2 + local_18 * 8);
  }
  return;
}


/* address=180579a30 name=FUN_180579a30 */

void FUN_180579a30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180579850(param_1,param_2 != 0,param_3,param_4);
  return;
}


/* address=180579a90 name=FUN_180579a90 */

void FUN_180579a90(undefined8 param_1,undefined8 param_2)

{
  FUN_180533ab0(param_1,param_2,0x20);
  return;
}


/* address=180579ac0 name=FUN_180579ac0 */

void FUN_180579ac0(undefined8 param_1,undefined8 param_2)

{
  FUN_180579a90(param_1,param_2);
  return;
}


/* address=180579af0 name=FUN_180579af0 */

void FUN_180579af0(undefined8 param_1,undefined8 param_2)

{
  FUN_180533ab0(param_1,param_2,0x20);
  return;
}


/* address=180579b30 name=FUN_180579b30 */

void FUN_180579b30(undefined8 param_1,undefined8 param_2)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_158;
  FUN_1805777a0(local_38,param_2);
  FUN_1805766d0(local_38,local_38,param_2);
  FUN_1805777a0(local_58,local_38);
  FUN_1805766d0(local_58,local_58,param_2);
  FUN_1805777a0(local_d8,local_58);
  for (local_138 = 1; local_138 < 3; local_138 = local_138 + 1) {
    FUN_1805777a0(local_d8,local_d8);
  }
  FUN_1805766d0(local_d8,local_d8,local_58);
  FUN_1805777a0(local_78,local_d8);
  for (local_134 = 1; local_134 < 6; local_134 = local_134 + 1) {
    FUN_1805777a0(local_78,local_78);
  }
  FUN_1805766d0(local_78,local_78,local_d8);
  FUN_1805777a0(local_b8,local_78);
  for (local_130 = 1; local_130 < 3; local_130 = local_130 + 1) {
    FUN_1805777a0(local_b8,local_b8);
  }
  FUN_1805766d0(local_b8,local_b8,local_58);
  FUN_1805777a0(local_98,local_b8);
  for (local_12c = 1; local_12c < 0xf; local_12c = local_12c + 1) {
    FUN_1805777a0(local_98,local_98);
  }
  FUN_1805766d0(local_98,local_98,local_b8);
  FUN_1805777a0(local_f8,local_98);
  FUN_1805777a0(local_f8,local_f8);
  FUN_1805766d0(local_f8,local_f8,local_38);
  FUN_1805777a0(local_118,local_f8);
  for (local_128 = 1; local_128 < 0x20; local_128 = local_128 + 1) {
    FUN_1805777a0(local_118,local_118);
  }
  FUN_1805766d0(local_118,local_118,param_2);
  for (local_124 = 0; local_124 < 0x80; local_124 = local_124 + 1) {
    FUN_1805777a0(local_118,local_118);
  }
  FUN_1805766d0(local_118,local_118,local_f8);
  for (local_120 = 0; local_120 < 0x20; local_120 = local_120 + 1) {
    FUN_1805777a0(local_118,local_118);
  }
  FUN_1805766d0(local_118,local_118,local_f8);
  for (local_11c = 0; local_11c < 0x1e; local_11c = local_11c + 1) {
    FUN_1805777a0(local_118,local_118);
  }
  FUN_1805766d0(local_118,local_118,local_98);
  FUN_1805777a0(local_118,local_118);
  FUN_1805777a0(param_1,local_118);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_158);
  return;
}


/* address=180579ef0 name=FUN_180579ef0 */

void FUN_180579ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_138;
  FUN_1805777a0(local_b8,param_6);
  FUN_1805777a0(local_118,param_5);
  FUN_1805766d0(local_58,param_4,local_118);
  FUN_180578b30(local_78,param_4,local_b8);
  FUN_180578860(local_d8,param_4,local_b8);
  FUN_180578860(local_98,local_d8,local_d8);
  FUN_180578860(local_d8,local_d8,local_98);
  FUN_1805766d0(local_38,local_78,local_d8);
  FUN_1805777a0(param_1,local_38);
  FUN_180578860(local_f8,local_58,local_58);
  FUN_180578860(local_f8,local_f8,local_f8);
  FUN_180578860(local_98,local_f8,local_f8);
  FUN_180578b30(param_1,param_1,local_98);
  FUN_180578860(local_b8,local_118,local_b8);
  FUN_180578860(local_78,param_5,param_6);
  FUN_1805777a0(param_3,local_78);
  FUN_180578b30(param_3,param_3,local_b8);
  FUN_180578b30(param_2,local_f8,param_1);
  FUN_180578860(local_118,local_118,local_118);
  FUN_1805777a0(local_118,local_118);
  FUN_1805766d0(param_2,local_38,param_2);
  FUN_180578860(local_118,local_118,local_118);
  FUN_180578b30(param_2,param_2,local_118);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_138);
  return;
}


/* address=18057a170 name=FUN_18057a170 */

void FUN_18057a170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_298;
  local_268 = FUN_1805799a0(param_6);
  local_260 = FUN_1805799a0(param_10);
  FUN_1805777a0(local_130,param_6);
  if (param_7 == 0) {
    FUN_1805777a0(local_150,param_10);
    FUN_1805766d0(local_110,param_4,local_150);
    FUN_180578860(local_1f0,param_6,param_10);
    FUN_1805777a0(local_1f0,local_1f0);
    FUN_180578b30(local_1f0,local_1f0,local_130);
    FUN_180578b30(local_1f0,local_1f0,local_150);
    FUN_1805766d0(local_190,param_10,local_150);
    FUN_1805766d0(local_190,local_190,param_5);
  }
  else {
    FUN_1805799d0(local_110,param_4);
    FUN_180578860(local_1f0,param_6,param_6);
    FUN_1805799d0(local_190,param_5);
  }
  FUN_1805766d0(local_70,param_8,local_130);
  FUN_180578b30(local_1b0,local_70,local_110);
  local_250 = FUN_1805799a0(local_1b0);
  FUN_1805766d0(local_d0,local_1b0,local_1f0);
  FUN_1805766d0(local_50,param_6,local_130);
  FUN_1805766d0(local_30,param_9,local_50);
  FUN_180578b30(local_1d0,local_30,local_190);
  FUN_180578860(local_1d0,local_1d0,local_1d0);
  local_258 = FUN_1805799a0(local_1d0);
  local_248 = FUN_1805338a0(local_250 | local_258);
  uVar1 = FUN_1805338a0(local_268);
  local_240 = local_248 & ~uVar1;
  uVar1 = FUN_1805338a0(local_260);
  local_238 = local_240 & ~uVar1;
  if (local_238 == 0) {
    FUN_180578860(local_170,local_1b0,local_1b0);
    FUN_1805777a0(local_170,local_170);
    FUN_1805766d0(local_b0,local_1b0,local_170);
    FUN_1805766d0(local_f0,local_110,local_170);
    FUN_1805777a0(local_230,local_1d0);
    FUN_180578b30(local_230,local_230,local_b0);
    FUN_180578b30(local_230,local_230,local_f0);
    FUN_180578b30(local_230,local_230,local_f0);
    FUN_180578b30(local_210,local_f0,local_230);
    FUN_1805766d0(local_210,local_210,local_1d0);
    FUN_1805766d0(local_90,local_190,local_b0);
    FUN_180578b30(local_210,local_210,local_90);
    FUN_180578b30(local_210,local_210,local_90);
    FUN_180579a30(local_230,local_268,param_8,local_230);
    FUN_180579a30(param_1,local_260,param_4,local_230);
    FUN_180579a30(local_210,local_268,param_9,local_210);
    FUN_180579a30(param_2,local_260,param_5,local_210);
    FUN_180579a30(local_d0,local_268,param_10,local_d0);
    FUN_180579a30(param_3,local_260,param_6,local_d0);
  }
  else {
    local_270 = param_6;
    local_278 = param_5;
    FUN_180579ef0(param_1,param_2,param_3,param_4);
  }
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_298);
  return;
}


/* address=18057a6d0 name=FUN_18057a6d0 */

void FUN_18057a6d0(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong local_28;
  
  FUN_180533b50(param_4,0,0x60);
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    uVar1 = local_28 ^ param_1 - 1U;
    FUN_180579a30(param_4,uVar1,param_3 + local_28 * 0x40,param_4);
    FUN_180579a30(param_4 + 0x20,uVar1,param_3 + local_28 * 0x40 + 0x20,param_4 + 0x20);
  }
  FUN_180579a30(param_4 + 0x40,param_1,param_4 + 0x40,&DAT_180727208);
  return;
}


/* address=18057a850 name=FUN_18057a850 */

void FUN_18057a850(ulonglong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong local_38;
  
  FUN_180533b50(param_4,0,0x60);
  for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
    uVar1 = local_38 ^ param_1;
    FUN_180579a30(param_4,uVar1,param_3 + local_38 * 0x60,param_4);
    FUN_180579a30(param_4 + 0x20,uVar1,param_3 + local_38 * 0x60 + 0x20,param_4 + 0x20);
    FUN_180579a30(param_4 + 0x40,uVar1,param_3 + local_38 * 0x60 + 0x40,param_4 + 0x40);
  }
  return;
}


/* address=18057a9f0 name=FUN_18057a9f0 */

ulonglong FUN_18057a9f0(longlong param_1,int param_2)

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


/* address=18057c950 name=FUN_18057c950 */

undefined * FUN_18057c950(void)

{
  return &DAT_180991fe0;
}


/* address=18057c960 name=FUN_18057c960 */

undefined * FUN_18057c960(void)

{
  return &DAT_180991fd8;
}


/* address=18057c970 name=FUN_18057c970 */

void FUN_18057c970(undefined8 *param_1)

{
  *param_1 = &LAB_180573dc0;
  param_1[1] = &LAB_180573ee0;
  param_1[2] = &LAB_180573e00;
  param_1[3] = &LAB_18057aa40;
  param_1[5] = &LAB_18057abc0;
  param_1[6] = &LAB_18057ad60;
  param_1[7] = &LAB_18057ae70;
  param_1[8] = &LAB_18057b690;
  param_1[10] = &LAB_18057bc60;
  param_1[0xe] = FUN_180573f20;
  param_1[0xf] = FUN_180573f90;
  param_1[0x10] = &LAB_180573ff0;
  param_1[0x11] = &LAB_180574080;
  param_1[0x12] = &LAB_180571930;
  param_1[0x13] = &LAB_1805719b0;
  param_1[0x14] = &LAB_180573ae0;
  param_1[0x15] = FUN_180573b50;
  param_1[0x16] = &LAB_18057c720;
  return;
}


/* address=18057cad0 name=FUN_18057cad0 */

void FUN_18057cad0(undefined8 param_1,undefined8 param_2)

{
  FUN_1804e9fc0(param_1,param_2,&DAT_1807279b0);
  return;
}


/* address=18057cb00 name=FUN_18057cb00 */

longlong FUN_18057cb00(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (param_1 >> 5) - 1;
  uVar2 = ~uVar1;
  uVar1 = 0x3f - param_1 & uVar2 | param_1 & uVar1;
  return (uVar2 & 1) + ((uVar1 >> 1) + (uVar1 & 1)) * 2;
}


/* address=18057cb90 name=FUN_18057cb90 */

longlong FUN_18057cb90(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (param_1 >> 7) - 1;
  uVar2 = ~uVar1;
  uVar1 = 0xff - param_1 & uVar2 | param_1 & uVar1;
  return (uVar2 & 1) + ((uVar1 >> 1) + (uVar1 & 1)) * 2;
}


/* address=18057cc20 name=FUN_18057cc20 */

/* WARNING: Removing unreachable block (ram,0x00018057cd74) */

void FUN_18057cc20(ulonglong *param_1,ulonglong *param_2,longlong param_3)

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


/* address=18057cea0 name=FUN_18057cea0 */

ulonglong FUN_18057cea0(ulonglong param_1)

{
  return (param_1 | -param_1) >> 0x3f;
}


/* address=18057cee0 name=FUN_18057cee0 */

void FUN_18057cee0(undefined8 param_1,undefined8 param_2)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_158;
  FUN_1804ea2c0(local_38,param_2);
  FUN_1804e9fc0(local_38,local_38,param_2);
  FUN_1804ea2c0(local_58,local_38);
  FUN_1804e9fc0(local_58,local_58,param_2);
  FUN_1804ea2c0(local_d8,local_58);
  for (local_138 = 1; local_138 < 3; local_138 = local_138 + 1) {
    FUN_1804ea2c0(local_d8,local_d8);
  }
  FUN_1804e9fc0(local_d8,local_d8,local_58);
  FUN_1804ea2c0(local_78,local_d8);
  for (local_134 = 1; local_134 < 6; local_134 = local_134 + 1) {
    FUN_1804ea2c0(local_78,local_78);
  }
  FUN_1804e9fc0(local_78,local_78,local_d8);
  FUN_1804ea2c0(local_b8,local_78);
  for (local_130 = 1; local_130 < 3; local_130 = local_130 + 1) {
    FUN_1804ea2c0(local_b8,local_b8);
  }
  FUN_1804e9fc0(local_b8,local_b8,local_58);
  FUN_1804ea2c0(local_98,local_b8);
  for (local_12c = 1; local_12c < 0xf; local_12c = local_12c + 1) {
    FUN_1804ea2c0(local_98,local_98);
  }
  FUN_1804e9fc0(local_98,local_98,local_b8);
  FUN_1804ea2c0(local_f8,local_98);
  FUN_1804ea2c0(local_f8,local_f8);
  FUN_1804e9fc0(local_f8,local_f8,local_38);
  FUN_1804ea2c0(local_118,local_f8);
  for (local_128 = 1; local_128 < 0x20; local_128 = local_128 + 1) {
    FUN_1804ea2c0(local_118,local_118);
  }
  FUN_1804e9fc0(local_118,local_118,param_2);
  for (local_124 = 0; local_124 < 0x80; local_124 = local_124 + 1) {
    FUN_1804ea2c0(local_118,local_118);
  }
  FUN_1804e9fc0(local_118,local_118,local_f8);
  for (local_120 = 0; local_120 < 0x20; local_120 = local_120 + 1) {
    FUN_1804ea2c0(local_118,local_118);
  }
  FUN_1804e9fc0(local_118,local_118,local_f8);
  for (local_11c = 0; local_11c < 0x1e; local_11c = local_11c + 1) {
    FUN_1804ea2c0(local_118,local_118);
  }
  FUN_1804e9fc0(local_118,local_118,local_98);
  FUN_1804ea2c0(local_118,local_118);
  FUN_1804ea2c0(param_1,local_118);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_158);
  return;
}


/* address=18057d2a0 name=FUN_18057d2a0 */

/* WARNING: Removing unreachable block (ram,0x00018057d37f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18057d2a0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_798;
  if (param_3 == 0) {
    FID_conflict__assert(u_p____NULL_180954eb0,u_D__a_1_s_target_x86_64_pc_window_180954da0,0xc0);
  }
  if (param_4 == 0) {
    FID_conflict__assert
              (u_p_scalar____NULL_180954fe0,u_D__a_1_s_target_x86_64_pc_window_180954ed0,0xc1);
  }
  if (*(int *)(param_1 + 0x40) != 4) {
    FID_conflict__assert
              (u_group_>field_width____P256_LIMBS_180955120,
               u_D__a_1_s_target_x86_64_pc_window_180955010,0xc2);
  }
  FUN_180533ab0(local_40,param_4,0x20);
  local_728 = 0x20;
  uStack_20 = 0;
  local_740 = local_640;
  if (*(int *)(param_1 + 0x40) != 4) {
    FID_conflict__assert
              (u_group_>field_width____P256_LIMBS_180955280,
               u_D__a_1_s_target_x86_64_pc_window_180955170,0xd3);
  }
  FUN_180533ab0(local_740,param_3,0x20);
  FUN_180533ab0(local_740 + 0x20,param_3 + 0x48,0x20);
  FUN_180533ab0(local_740 + 0x40,param_3 + 0x90,0x20);
  FUN_1804eb060(local_740 + 0x60,local_740);
  local_718 = local_740 + 0xc0;
  FUN_1804eb3a0(local_718,local_740 + 0x60,local_740);
  FUN_1804eb060(local_740 + 0x120,local_740 + 0x60);
  FUN_1804eb060(local_740 + 0x1e0,local_740 + 0xc0);
  FUN_1804eb060(local_740 + 0x2a0,local_740 + 0x120);
  FUN_1804eb060(local_740 + 0x420,local_740 + 0x1e0);
  local_710 = local_740 + 0x180;
  FUN_1804eb3a0(local_710,local_740 + 0x120,local_740);
  local_708 = local_740 + 0x240;
  FUN_1804eb3a0(local_708,local_740 + 0x1e0,local_740);
  local_700 = local_740 + 0x300;
  FUN_1804eb3a0(local_700,local_740 + 0x2a0,local_740);
  local_6f8 = local_740 + 0x480;
  FUN_1804eb3a0(local_6f8,local_740 + 0x420,local_740);
  FUN_1804eb060(local_740 + 0x4e0,local_740 + 0x240);
  FUN_1804eb060(local_740 + 0x360,local_740 + 0x180);
  local_6f0 = local_740 + 0x540;
  FUN_1804eb3a0(local_6f0,local_740 + 0x4e0,local_740);
  local_6e8 = local_740 + 0x3c0;
  FUN_1804eb3a0(local_6e8,local_740 + 0x360,local_740);
  FUN_1804eb060(local_740 + 0x5a0);
  local_730 = 0xff;
  local_738 = bStack_21 >> SUB161(ZEXT816(0xfe) % ZEXT816(8),0) & _DAT_18074d138;
  uVar2 = FUN_18057cb00(local_738);
  FUN_1804ea960(param_2,local_640,uVar2 >> 1 & 0xffffffff);
  while (4 < local_730) {
    if (local_730 != 0xff) {
      local_720 = (local_730 - 1) / 8;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_730 - 1;
      local_738 = (ushort)(CONCAT11(local_40[local_720 + 1],local_40[local_720]) >>
                          SUB161(auVar1 % ZEXT816(8),0)) & _DAT_18074d138;
      local_738 = FUN_18057cb00(local_738);
      FUN_1804ea960(local_6e0,local_640,local_738 >> 1 & 0xffffffff);
      FUN_1804e9180(local_680,local_6c0);
      FUN_18057cc20(local_6c0,local_680,local_738 & 1);
      FUN_1804eb3a0(param_2,param_2,local_6e0);
    }
    local_730 = local_730 - DAT_18074d130;
    FUN_1804eb060(param_2,param_2);
    FUN_1804eb060(param_2,param_2);
    FUN_1804eb060(param_2,param_2);
    FUN_1804eb060(param_2,param_2);
    FUN_1804eb060(param_2);
  }
  local_738 = (ulonglong)local_40[0] << 1 & _DAT_18074d138;
  local_738 = FUN_18057cb00(local_738);
  FUN_1804ea960(local_6e0,local_640,local_738 >> 1 & 0xffffffff);
  FUN_1804e9180(local_680,local_6c0);
  FUN_18057cc20(local_6c0,local_680,local_738 & 1);
  FUN_1804eb3a0(param_2,param_2,local_6e0);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_798);
  return;
}


/* address=18057da80 name=FUN_18057da80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18057da80(undefined8 *param_1,byte *param_2)

{
  *param_1 = DAT_18074d140;
  FUN_18057cb90((longlong)(int)((uint)*param_2 << 1) & _DAT_18074d148);
  return;
}


/* address=18057dae0 name=FUN_18057dae0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18057dae0(longlong *param_1,longlong param_2)

{
  undefined auVar1 [16];
  ulonglong uVar2;
  
  uVar2 = (*param_1 - 1U) / 8;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_1 - 1;
  uVar2 = (ushort)(CONCAT11(*(undefined *)(param_2 + uVar2 + 1),*(undefined *)(param_2 + uVar2)) >>
                  SUB161(auVar1 % ZEXT816(8),0)) & _DAT_18074d158;
  *param_1 = *param_1 + _DAT_18074d150;
  FUN_18057cb90(uVar2);
  return;
}


/* address=18057ee90 name=FUN_18057ee90 */

undefined * FUN_18057ee90(void)

{
  return &DAT_1809920a0;
}


/* address=18057eea0 name=FUN_18057eea0 */

undefined * FUN_18057eea0(void)

{
  return &DAT_180992098;
}


/* address=18057eeb0 name=FUN_18057eeb0 */

void FUN_18057eeb0(undefined8 *param_1)

{
  *param_1 = &LAB_180573dc0;
  param_1[1] = &LAB_180573ee0;
  param_1[2] = &LAB_180573e00;
  param_1[3] = &LAB_18057e290;
  param_1[5] = &LAB_18057e3e0;
  param_1[6] = &LAB_18057e560;
  param_1[7] = &LAB_18057dba0;
  param_1[8] = &LAB_18057dca0;
  param_1[10] = &LAB_18057df40;
  param_1[0xe] = FUN_180573f20;
  param_1[0xf] = FUN_180573f90;
  param_1[0x10] = &LAB_180573ff0;
  param_1[0x11] = &LAB_180574080;
  param_1[0x12] = &LAB_180571930;
  param_1[0x13] = &LAB_1805719b0;
  param_1[0x14] = &LAB_18057e670;
  param_1[0x15] = &LAB_18057ec30;
  param_1[0x16] = &LAB_18057ecd0;
  return;
}


/* address=18057f010 name=FUN_18057f010 */

void FUN_18057f010(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong local_18;
  
  if (param_3 < 2) {
    FID_conflict__assert(u_num_>_1_1809562f0,u_D__a_1_s_target_x86_64_pc_window_1809561e0,0x56);
  }
  FUN_1805725f0(param_1,param_2);
  FUN_180572570(param_2 + 0xd8,param_4);
  for (local_18 = 2; local_18 < param_3; local_18 = local_18 + 1) {
    if ((local_18 & 1) == 0) {
      FUN_180572ce0(param_1,param_2 + local_18 * 0xd8,param_2 + (local_18 / 2) * 0xd8);
    }
    else {
      FUN_180572620(param_1,param_2 + local_18 * 0xd8,param_2 + 0xd8,param_2 + (local_18 - 1) * 0xd8
                   );
    }
  }
  return;
}


/* address=18057f170 name=FUN_18057f170 */

void FUN_18057f170(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_d8;
  local_a0 = (longlong)*(int *)(param_1 + 0x18);
  iVar2 = FUN_1805528f0(param_4,local_a0,param_5 + 4);
  local_a8 = (byte)(iVar2 << 5);
  iVar2 = FUN_1805528f0(param_4,local_a0,param_5 + 3);
  local_a8 = local_a8 | (byte)(iVar2 << 4);
  iVar2 = FUN_1805528f0(param_4,local_a0,param_5 + 2);
  local_a8 = local_a8 | (byte)(iVar2 << 3);
  iVar2 = FUN_1805528f0(param_4,local_a0,param_5 + 1);
  local_a8 = local_a8 | (byte)(iVar2 << 2);
  iVar2 = FUN_1805528f0(param_4,local_a0,param_5);
  local_a8 = local_a8 | (byte)(iVar2 << 1);
  if (param_5 != 0) {
    bVar1 = FUN_1805528f0(param_4,local_a0,param_5 + -1);
    local_a8 = local_a8 | bVar1;
  }
  FUN_1805740e0(local_78,&local_88,local_a8);
  FUN_180533b50(param_2,0,0xd8);
  for (local_98 = 0; local_98 < 0x11; local_98 = local_98 + 1) {
    local_80 = FUN_1805338d0(local_98,local_88);
    local_b8 = param_2;
    FUN_1805702c0(param_1,param_2,local_80,param_3 + local_98 * 0xd8);
  }
  FUN_18056f3c0(param_1,local_68,param_2 + 0x48);
  local_90 = -local_78[0];
  local_b8 = param_2 + 0x48;
  FUN_18056f660(param_1,param_2 + 0x48,local_90,local_68);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=18057f400 name=FUN_18057f400 */

ulonglong FUN_18057f400(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_18053daa0(param_1 + 0x38);
  return (ulonglong)(iVar1 + 4) / 5;
}


/* address=18057f440 name=FUN_18057f440 */

void FUN_18057f440(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5
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
  iVar2 = FUN_18057f400(param_1);
  local_30 = 0;
  for (local_34 = 0; local_34 < 5; local_34 = local_34 + 1) {
    iVar3 = FUN_1805528f0(param_4,(longlong)iVar1,local_34 * iVar2 + param_5);
    local_30 = local_30 | iVar3 << ((byte)local_34 & 0x1f);
  }
  FUN_180533b50(param_2,0,0xd8);
  for (local_38 = 0; local_38 < 0x1f; local_38 = local_38 + 1) {
    uVar4 = FUN_1805338d0(local_30,local_38 + 1);
    FUN_18056f660(param_1,param_2,uVar4,param_3 + (ulonglong)local_38 * 0x90,param_2);
    FUN_18056f660(param_1,param_2 + 0x48,uVar4,param_3 + 0x48 + (ulonglong)local_38 * 0x90,
                  param_2 + 0x48);
  }
  uVar4 = FUN_1805338a0(local_30);
  FUN_18056f660(param_1,param_2 + 0x90,uVar4,param_2 + 0x90,param_1 + 0x140);
  return;
}


/* address=18057f600 name=FUN_18057f600 */

void FUN_18057f600(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined auStack_128 [32];
  ulonglong local_108;
  undefined local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_128;
  FUN_180572570(param_2,param_3);
  FUN_180572ce0(param_1,local_f8,param_3);
  for (local_108 = 1; local_108 < param_4; local_108 = local_108 + 1) {
    FUN_180572620(param_1,param_2 + local_108 * 0xd8,param_2 + (local_108 - 1) * 0xd8,local_f8);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=18057f710 name=FUN_18057f710 */

void FUN_18057f710(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  if (param_4 < 0) {
    FUN_180572570(param_2,param_3 + (longlong)(-param_4 >> 1) * 0xd8);
    FUN_1805734e0(param_1,param_2);
  }
  else {
    FUN_180572570(param_2,param_3 + (longlong)(param_4 >> 1) * 0xd8);
  }
  return;
}


/* address=18057f7b0 name=FUN_18057f7b0 */

void FUN_18057f7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  local_78 = param_7;
  local_80 = param_6;
  local_88 = param_5;
  iVar1 = FUN_18057f8a0(local_58,local_68,param_3,param_4);
  if (iVar1 != 0) {
    local_78 = param_9;
    local_80 = param_8;
    local_88 = local_68[0];
    FUN_18057f970(param_1,param_2,param_3,local_58);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=18057f8a0 name=FUN_18057f8a0 */

undefined8
FUN_18057f8a0(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint local_18 [6];
  
  lVar1 = FUN_180532d40(param_3,param_6,param_7,param_4,param_5,param_1,local_18);
  if (lVar1 == 0) {
    FUN_18050f6f0(0x1f,0,0x1c,s_D__a_1_s_target_x86_64_pc_window_180957140,0x33);
    uVar3 = 0;
  }
  else {
    *param_2 = (ulonglong)local_18[0];
    uVar2 = FUN_180532b10(param_3);
    if (*param_2 != uVar2) {
      FID_conflict__assert
                (u__out_len____EVP_MD_size_digest__1809572e0,
                 u_D__a_1_s_target_x86_64_pc_window_1809571d0,0x37);
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=18057f970 name=FUN_18057f970 */

void FUN_18057f970(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_128;
  local_e8 = FUN_180532b10(param_3);
  local_e0 = 0;
  local_f0 = 0;
  local_d0 = ((param_2 - 1) + local_e8) / local_e8;
  if ((param_2 + local_e8 < param_2) || (0xff < local_d0)) {
    local_108 = CONCAT44(local_108._4_4_,0x49);
    FUN_18050f6f0(0x1f,0,100,s_D__a_1_s_target_x86_64_pc_window_180957320);
  }
  else {
    FUN_180532e30(local_c8);
    local_108 = 0;
    iVar1 = FUN_180532fd0(local_c8,param_4,param_5,param_3);
    if (iVar1 != 0) {
      for (local_f4 = 0; local_f4 < local_d0; local_f4 = local_f4 + 1) {
        local_f8[0] = (char)local_f4 + '\x01';
        if (local_f4 != 0) {
          local_108 = 0;
          iVar1 = FUN_180532fd0(local_c8,0,0,0);
          if ((iVar1 == 0) || (iVar1 = FUN_180533330(local_c8,local_58,local_e8), iVar1 == 0))
          goto LAB_18057fbba;
        }
        iVar1 = FUN_180533330(local_c8,param_6,param_7);
        if ((iVar1 == 0) ||
           ((iVar1 = FUN_180533330(local_c8,local_f8,1), iVar1 == 0 ||
            (iVar1 = FUN_180533370(local_c8,local_58,0), iVar1 == 0)))) goto LAB_18057fbba;
        local_d8 = local_e8;
        if (param_2 < local_e0 + local_e8) {
          local_d8 = param_2 - local_e0;
        }
        FUN_180533ab0(param_1 + local_e0);
        local_e0 = local_e0 + local_d8;
      }
      local_f0 = 1;
    }
LAB_18057fbba:
    FUN_180532ed0(local_c8);
    if (local_f0 != 1) {
      local_108 = CONCAT44(local_108._4_4_,0x6d);
      FUN_18050f6f0(0x1f,0,0x1c,s_D__a_1_s_target_x86_64_pc_window_1809573b0);
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=18057fc10 name=FUN_18057fc10 */

void FUN_18057fc10(code *param_1,undefined8 param_2,longlong param_3,ulonglong param_4,uint *param_5
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
        FUN_180533ab0(param_3 + uVar2,param_8,param_9);
        *param_5 = *param_5 + (uint)param_9;
        return;
      }
      FUN_180533ab0(param_3 + uVar2,param_8,param_4 - uVar2);
      (*param_1)(param_2,param_3,1);
      param_8 = param_8 + (param_4 - uVar2);
      param_9 = param_9 - (param_4 - uVar2);
      *param_5 = 0;
      FUN_180533b50(param_3,0,param_4);
    }
    uVar2 = param_9 / param_4;
    if (uVar2 != 0) {
      (*param_1)(param_2,param_8,uVar2);
      param_8 = param_8 + uVar2 * param_4;
      param_9 = param_9 - uVar2 * param_4;
    }
    if (param_9 != 0) {
      *param_5 = (uint)param_9;
      FUN_180533ab0(param_3,param_8,param_9);
    }
  }
  return;
}


/* address=18057fe70 name=FUN_18057fe70 */

void FUN_18057fe70(code *param_1,undefined8 param_2,longlong param_3,ulonglong param_4,uint *param_5
                  ,undefined4 param_6,undefined4 param_7,int param_8)

{
  ulonglong local_18;
  
  local_18 = (ulonglong)*param_5;
  if (param_4 <= local_18) {
    FID_conflict__assert
              (u_n_<_block_size_180957958,u_D__a_1_s_target_x86_64_pc_window_180957830,0xa5);
  }
  *(undefined *)(param_3 + local_18) = 0x80;
  local_18 = local_18 + 1;
  if (param_4 - 8 < local_18) {
    FUN_180533b50(param_3 + local_18,0,param_4 - local_18);
    local_18 = 0;
    (*param_1)(param_2,param_3,1);
  }
  FUN_180533b50(param_3 + local_18,0,(param_4 - 8) - local_18);
  if (param_8 == 0) {
    FUN_180533bc0(param_3 + -8 + param_4,param_7);
    FUN_180533bc0(param_3 + -4 + param_4,param_6);
  }
  else {
    FUN_180533c30(param_3 + -8 + param_4,param_6);
    FUN_180533c30(param_3 + -4 + param_4,param_7);
  }
  (*param_1)(param_2,param_3,1);
  *param_5 = 0;
  FUN_180533b50(param_3,0,param_4);
  return;
}


/* address=180580010 name=FUN_180580010 */

void FUN_180580010(int *param_1,longlong param_2,longlong param_3)

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
    iVar1 = FUN_180533b90(local_res10);
    iVar2 = FUN_180533b90(local_res10 + 4);
    uVar3 = FUN_180533df0(local_78 + iVar1 + ((local_70 ^ local_6c) & local_74 ^ local_6c),3);
    iVar4 = FUN_180533b90(local_res10 + 8);
    uVar5 = FUN_180533df0(local_6c + iVar2 + ((local_74 ^ local_70) & uVar3 ^ local_70),7);
    iVar6 = FUN_180533b90(local_res10 + 0xc);
    uVar7 = FUN_180533df0(local_70 + iVar4 + ((uVar3 ^ local_74) & uVar5 ^ local_74),0xb);
    iVar8 = FUN_180533b90(local_res10 + 0x10);
    uVar9 = FUN_180533df0(local_74 + iVar6 + ((uVar5 ^ uVar3) & uVar7 ^ uVar3),0x13);
    iVar10 = FUN_180533b90(local_res10 + 0x14);
    uVar3 = FUN_180533df0(uVar3 + iVar8 + ((uVar7 ^ uVar5) & uVar9 ^ uVar5),3);
    iVar11 = FUN_180533b90(local_res10 + 0x18);
    uVar5 = FUN_180533df0(uVar5 + iVar10 + ((uVar9 ^ uVar7) & uVar3 ^ uVar7),7);
    iVar12 = FUN_180533b90(local_res10 + 0x1c);
    uVar7 = FUN_180533df0(uVar7 + iVar11 + ((uVar3 ^ uVar9) & uVar5 ^ uVar9),0xb);
    iVar13 = FUN_180533b90(local_res10 + 0x20);
    uVar9 = FUN_180533df0(uVar9 + iVar12 + ((uVar5 ^ uVar3) & uVar7 ^ uVar3),0x13);
    iVar14 = FUN_180533b90(local_res10 + 0x24);
    uVar3 = FUN_180533df0(uVar3 + iVar13 + ((uVar7 ^ uVar5) & uVar9 ^ uVar5),3);
    iVar15 = FUN_180533b90(local_res10 + 0x28);
    uVar5 = FUN_180533df0(uVar5 + iVar14 + ((uVar9 ^ uVar7) & uVar3 ^ uVar7),7);
    iVar16 = FUN_180533b90(local_res10 + 0x2c);
    uVar7 = FUN_180533df0(uVar7 + iVar15 + ((uVar3 ^ uVar9) & uVar5 ^ uVar9),0xb);
    iVar17 = FUN_180533b90(local_res10 + 0x30);
    uVar9 = FUN_180533df0(uVar9 + iVar16 + ((uVar5 ^ uVar3) & uVar7 ^ uVar3),0x13);
    iVar18 = FUN_180533b90(local_res10 + 0x34);
    uVar3 = FUN_180533df0(uVar3 + iVar17 + ((uVar7 ^ uVar5) & uVar9 ^ uVar5),3);
    iVar19 = FUN_180533b90(local_res10 + 0x38);
    uVar5 = FUN_180533df0(uVar5 + iVar18 + ((uVar9 ^ uVar7) & uVar3 ^ uVar7),7);
    iVar20 = FUN_180533b90(local_res10 + 0x3c);
    local_res10 = local_res10 + 0x40;
    uVar7 = FUN_180533df0(uVar7 + iVar19 + ((uVar3 ^ uVar9) & uVar5 ^ uVar9),0xb);
    uVar9 = FUN_180533df0(uVar9 + iVar20 + ((uVar5 ^ uVar3) & uVar7 ^ uVar3),0x13);
    uVar3 = FUN_180533df0((uVar9 & (uVar7 | uVar5) | uVar7 & uVar5) + uVar3 + 0x5a827999 + iVar1,3);
    uVar5 = FUN_180533df0((uVar3 & (uVar9 | uVar7) | uVar9 & uVar7) + uVar5 + 0x5a827999 + iVar8,5);
    uVar7 = FUN_180533df0((uVar5 & (uVar3 | uVar9) | uVar3 & uVar9) + uVar7 + 0x5a827999 + iVar13,9)
    ;
    uVar9 = FUN_180533df0((uVar7 & (uVar5 | uVar3) | uVar5 & uVar3) + uVar9 + 0x5a827999 + iVar17,
                          0xd);
    uVar3 = FUN_180533df0((uVar9 & (uVar7 | uVar5) | uVar7 & uVar5) + uVar3 + 0x5a827999 + iVar2,3);
    uVar5 = FUN_180533df0((uVar3 & (uVar9 | uVar7) | uVar9 & uVar7) + uVar5 + 0x5a827999 + iVar10,5)
    ;
    uVar7 = FUN_180533df0((uVar5 & (uVar3 | uVar9) | uVar3 & uVar9) + uVar7 + 0x5a827999 + iVar14,9)
    ;
    uVar9 = FUN_180533df0((uVar7 & (uVar5 | uVar3) | uVar5 & uVar3) + uVar9 + 0x5a827999 + iVar18,
                          0xd);
    uVar3 = FUN_180533df0((uVar9 & (uVar7 | uVar5) | uVar7 & uVar5) + uVar3 + 0x5a827999 + iVar4,3);
    uVar5 = FUN_180533df0((uVar3 & (uVar9 | uVar7) | uVar9 & uVar7) + uVar5 + 0x5a827999 + iVar11,5)
    ;
    uVar7 = FUN_180533df0((uVar5 & (uVar3 | uVar9) | uVar3 & uVar9) + uVar7 + 0x5a827999 + iVar15,9)
    ;
    uVar9 = FUN_180533df0((uVar7 & (uVar5 | uVar3) | uVar5 & uVar3) + uVar9 + 0x5a827999 + iVar19,
                          0xd);
    uVar3 = FUN_180533df0((uVar9 & (uVar7 | uVar5) | uVar7 & uVar5) + uVar3 + 0x5a827999 + iVar6,3);
    uVar5 = FUN_180533df0((uVar3 & (uVar9 | uVar7) | uVar9 & uVar7) + uVar5 + 0x5a827999 + iVar12,5)
    ;
    uVar7 = FUN_180533df0((uVar5 & (uVar3 | uVar9) | uVar3 & uVar9) + uVar7 + 0x5a827999 + iVar16,9)
    ;
    uVar9 = FUN_180533df0((uVar7 & (uVar5 | uVar3) | uVar5 & uVar3) + uVar9 + 0x5a827999 + iVar20,
                          0xd);
    uVar3 = FUN_180533df0((uVar9 ^ uVar7 ^ uVar5) + uVar3 + 0x6ed9eba1 + iVar1,3);
    uVar5 = FUN_180533df0((uVar3 ^ uVar9 ^ uVar7) + uVar5 + 0x6ed9eba1 + iVar13,9);
    uVar7 = FUN_180533df0((uVar5 ^ uVar3 ^ uVar9) + uVar7 + 0x6ed9eba1 + iVar8,0xb);
    uVar9 = FUN_180533df0((uVar7 ^ uVar5 ^ uVar3) + uVar9 + 0x6ed9eba1 + iVar17,0xf);
    uVar3 = FUN_180533df0((uVar9 ^ uVar7 ^ uVar5) + uVar3 + 0x6ed9eba1 + iVar4,3);
    uVar5 = FUN_180533df0((uVar3 ^ uVar9 ^ uVar7) + uVar5 + 0x6ed9eba1 + iVar15,9);
    uVar7 = FUN_180533df0((uVar5 ^ uVar3 ^ uVar9) + uVar7 + 0x6ed9eba1 + iVar11,0xb);
    uVar9 = FUN_180533df0((uVar7 ^ uVar5 ^ uVar3) + uVar9 + 0x6ed9eba1 + iVar19,0xf);
    uVar3 = FUN_180533df0((uVar9 ^ uVar7 ^ uVar5) + uVar3 + 0x6ed9eba1 + iVar2,3);
    uVar5 = FUN_180533df0((uVar3 ^ uVar9 ^ uVar7) + uVar5 + 0x6ed9eba1 + iVar14,9);
    uVar7 = FUN_180533df0((uVar5 ^ uVar3 ^ uVar9) + uVar7 + 0x6ed9eba1 + iVar10,0xb);
    uVar9 = FUN_180533df0((uVar7 ^ uVar5 ^ uVar3) + uVar9 + 0x6ed9eba1 + iVar18,0xf);
    uVar3 = FUN_180533df0((uVar9 ^ uVar7 ^ uVar5) + uVar3 + 0x6ed9eba1 + iVar6,3);
    local_6c = FUN_180533df0((uVar3 ^ uVar9 ^ uVar7) + uVar5 + 0x6ed9eba1 + iVar16,9);
    local_70 = FUN_180533df0((local_6c ^ uVar3 ^ uVar9) + uVar7 + 0x6ed9eba1 + iVar12,0xb);
    iVar1 = FUN_180533df0((local_70 ^ local_6c ^ uVar3) + uVar9 + 0x6ed9eba1 + iVar20,0xf);
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


/* address=180581100 name=FUN_180581100 */

void FUN_180581100(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_78;
  if ((param_3 != 0) && (param_3 < 0x81)) {
    FUN_180533ab0(local_40,param_5,0x10);
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
      FUN_180533ab0(param_5,local_40 + (int)local_54,0x10);
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
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=180581360 name=FUN_180581360 */

void FUN_180581360(longlong param_1)

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


/* address=1805813d0 name=FUN_1805813d0 */

void FUN_1805813d0(longlong param_1)

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


/* address=180581440 name=FUN_180581440 */

/* WARNING: Removing unreachable block (ram,0x0001805814b5) */

void FUN_180581440(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[1] << 0x3f | *param_1 >> 1;
  param_1[1] = param_1[1] >> 1 ^ -(uVar1 & 1) & 0xe100000000000000;
  return;
}


/* address=180581520 name=FUN_180581520 */

void FUN_180581520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1804e25c0(param_1,param_2,param_3,param_4,param_5,param_7,param_6);
  return;
}


/* address=180581580 name=FUN_180581580 */

void FUN_180581580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1804e2260(param_1,param_2,param_3,param_4,param_5,param_7,param_6);
  return;
}


/* address=1805815e0 name=FUN_1805815e0 */

ulonglong FUN_1805815e0(uint param_1,uint param_2)

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


/* address=1805817b0 name=FUN_1805817b0 */

void FUN_1805817b0(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = (uint)(param_4 >> 0x20);
  uVar3 = FUN_1805815e0(param_3 & 0xffffffff,param_4 & 0xffffffff);
  uVar4 = FUN_1805815e0(uVar1,uVar2);
  uVar5 = FUN_1805815e0((uint)param_3 ^ uVar1,(uint)param_4 ^ uVar2);
  uVar5 = uVar5 ^ uVar3 ^ uVar4;
  *param_1 = uVar3 ^ uVar5 << 0x20;
  *param_2 = uVar4 ^ uVar5 >> 0x20;
  return;
}


/* address=1805818a0 name=FUN_1805818a0 */

void FUN_1805818a0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10 [2];
  
  FUN_1805817b0(&local_20,&local_30,*param_1,param_2[1]);
  FUN_1805817b0(&local_38,&local_28,param_1[1],*param_2);
  FUN_1805817b0(local_10,&local_18,*param_1 ^ param_1[1],*param_2 ^ param_2[1]);
  uVar1 = local_30 ^ local_10[0] ^ local_20 ^ local_38;
  uVar2 = uVar1 ^ local_20 << 0x3f ^ local_20 << 0x3e ^ local_20 << 0x39;
  *param_1 = local_38 ^ local_18 ^ local_30 ^ local_28 ^ local_20 ^ local_20 >> 1 ^ uVar1 << 0x3f ^
             local_20 >> 2 ^ uVar1 << 0x3e ^ local_20 >> 7 ^ uVar1 << 0x39;
  param_1[1] = local_28 ^ uVar2 ^ uVar2 >> 1 ^ uVar2 >> 2 ^ uVar2 >> 7;
  return;
}


/* address=180581b30 name=FUN_180581b30 */

void FUN_180581b30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_180533c70(param_1);
  uVar2 = FUN_180533c70(param_1 + 8);
  uVar2 = FUN_180533a10(uVar2);
  FUN_180533ca0(param_1,uVar2);
  uVar1 = FUN_180533a10(uVar1);
  FUN_180533ca0(param_1 + 8,uVar1);
  return;
}


/* address=180581ba0 name=FUN_180581ba0 */

void FUN_180581ba0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = FUN_180533c70(param_1);
  uVar2 = FUN_180533c70(param_1 + 8);
  uVar3 = FUN_1805338d0(uVar1 & 1,1);
  lVar4 = FUN_180533940(uVar3,0xe1,0);
  uVar3 = FUN_180533a10(uVar2 >> 1 ^ lVar4 << 0x38);
  FUN_180533ca0(param_1,uVar3);
  uVar3 = FUN_180533a10(uVar1 >> 1 | uVar2 << 0x3f);
  FUN_180533ca0(param_1 + 8,uVar3);
  return;
}


/* address=180581c80 name=FUN_180581c80 */

void FUN_180581c80(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_180533bf0(param_1 + 0x114);
  FUN_180533c30(param_1 + 0x114,iVar1 + param_2);
  return;
}


/* address=180581cd0 name=FUN_180581cd0 */

void FUN_180581cd0(longlong param_1,longlong param_2,ulonglong param_3)

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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_88;
  if (param_3 < 0x31) {
    for (local_50 = 0; local_50 < 0x30; local_50 = local_50 + 0x10) {
      FUN_180581c80(param_1,1);
      local_48 = param_1 + 0x108;
      (**(code **)(param_1 + 0xf8))(local_48,local_40 + local_50,param_1);
    }
    for (local_58 = 0; local_58 < param_3; local_58 = local_58 + 1) {
      local_40[local_58] = local_40[local_58] ^ *(byte *)(param_2 + local_58);
    }
    local_68 = 0x20;
    uVar1 = FUN_18055f7b0(param_1,0,param_1 + 0xf8,local_40);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    FUN_180533ab0(param_1 + 0x108,local_20,0x10);
  }
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_88);
  return;
}


/* address=180581e60 name=FUN_180581e60 */

undefined8 FUN_180581e60(void)

{
  return 0;
}


/* address=180581eb0 name=FUN_180581eb0 */

void FUN_180581eb0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  undefined local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_48;
  local_28 = param_2 & 0xfffffffffffffff8;
  iVar1 = FUN_1804e9110(param_1,local_28);
  if ((iVar1 != 0) && (local_20 = param_2 - local_28, local_20 != 0)) {
    if (7 < local_20) {
      FID_conflict__assert
                (u_remainder_<_8_180959278,u_D__a_1_s_target_x86_64_pc_window_180959170,0x8e);
    }
    iVar1 = FUN_1804e9100(local_18);
    if (iVar1 != 0) {
      FUN_180533ab0(param_1 + local_28,local_18,local_20);
    }
  }
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=180581f90 name=FUN_180581f90 */

void FUN_180581f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_180609170(param_2,0x30);
  *param_4 = 0;
  return;
}


/* address=180581fd0 name=FUN_180581fd0 */

void FUN_180581fd0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1805860f0();
  FUN_18059e1b0(uVar1,&LAB_180586130);
  FUN_1805860e0();
  return;
}


/* address=180582000 name=FUN_180582000 */

undefined4 FUN_180582000(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_18053db00(*(undefined8 *)(param_1 + 8));
  return uVar1;
}


/* address=180582030 name=FUN_180582030 */

undefined4
FUN_180582030(undefined8 param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int local_20;
  undefined4 local_1c;
  
  uVar1 = FUN_1805697e0(param_1);
  local_1c = 0;
  if (param_4 < uVar1) {
    FUN_18050f6f0(4,0,0x87,s_D__a_1_s_target_x86_64_pc_window_18095bf70,0x1c4);
    return 0;
  }
  lVar3 = FUN_18058f4e0(uVar1);
  if (lVar3 != 0) {
    if (param_7 == 1) {
      local_20 = FUN_180582b10(lVar3,uVar1,param_5,param_6);
    }
    else {
      if (param_7 != 3) {
        FUN_18050f6f0(4,0,0x8f,s_D__a_1_s_target_x86_64_pc_window_18095c000,0x1d5);
        goto LAB_180582180;
      }
      local_20 = FUN_180582e60(lVar3,uVar1,param_5,param_6);
    }
    if ((0 < local_20) && (iVar2 = FUN_180583190(param_1,param_3,lVar3,uVar1), iVar2 != 0)) {
      *param_2 = (ulonglong)uVar1;
      local_1c = 1;
    }
  }
LAB_180582180:
  FUN_18058f610(lVar3);
  return local_1c;
}


/* address=1805821a0 name=FUN_1805821a0 */

undefined4 FUN_1805821a0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

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
    FUN_18050f6f0(4,0,0x90,s_D__a_1_s_target_x86_64_pc_window_18095c480,0x25a);
    return 0;
  }
  local_10[0] = 0;
  local_28 = 0;
  uVar11 = 0;
  lVar4 = FUN_18053e150();
  if (lVar4 == 0) goto LAB_1805826d7;
  FUN_18053e250(lVar4);
  lVar5 = FUN_18053e2b0(lVar4);
  lVar6 = FUN_18053e2b0(lVar4);
  if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_1805826d7;
  uVar1 = FUN_18053db00(*(undefined8 *)(param_1 + 8));
  if (param_4 != uVar1) {
    FID_conflict__assert
              (u_len____BN_num_bytes_rsa_>n__18095c618,u_D__a_1_s_target_x86_64_pc_window_18095c510,
               0x271);
  }
  lVar7 = FUN_18053dcd0(param_3,param_4,lVar5);
  if (lVar7 == 0) goto LAB_1805826d7;
  iVar2 = FUN_18053f9a0(lVar5,*(undefined8 *)(param_1 + 8));
  if (-1 < iVar2) {
    FUN_18050f6f0(4,0,0x73,s_D__a_1_s_target_x86_64_pc_window_18095c650,CONCAT44(uVar10,0x278));
    goto LAB_1805826d7;
  }
  iVar2 = FUN_180584250(param_1,lVar4);
  if (iVar2 == 0) {
    FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095c6e0,CONCAT44(uVar10,0x27d));
    goto LAB_1805826d7;
  }
  bVar8 = (*(uint *)(param_1 + 0x54) & 0x48) != 0;
  if ((*(longlong *)(param_1 + 0x10) == 0) && (!bVar8)) {
    FUN_18050f6f0(4,0,0x82,s_D__a_1_s_target_x86_64_pc_window_18095c770,CONCAT44(uVar10,0x28d));
    goto LAB_1805826d7;
  }
  if (!bVar8) {
    local_28 = FUN_180584720(param_1,local_10,lVar4);
    if (local_28 == 0) {
      FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095c800,CONCAT44(uVar10,0x294));
      goto LAB_1805826d7;
    }
    lVar7 = lVar4;
    iVar2 = FUN_180582840(lVar5,local_28,*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x60),lVar4);
    uVar10 = (undefined4)((ulonglong)lVar7 >> 0x20);
    if (iVar2 == 0) goto LAB_1805826d7;
  }
  if (((((*(longlong *)(param_1 + 0x20) == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
       (*(longlong *)(param_1 + 0x10) == 0)) ||
      ((*(longlong *)(param_1 + 0x30) == 0 || (*(longlong *)(param_1 + 0x38) == 0)))) ||
     ((*(longlong *)(param_1 + 0x40) == 0 ||
      ((iVar2 = FUN_180552ab0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x68)),
       iVar2 == 0 ||
       (iVar2 = FUN_180552ab0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x70)),
       iVar2 == 0)))))) {
    lVar7 = lVar4;
    iVar2 = FUN_1805443f0(lVar6,lVar5,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 8),
                          lVar4,*(undefined8 *)(param_1 + 0x60));
    uVar10 = (undefined4)((ulonglong)lVar7 >> 0x20);
  }
  else {
    iVar2 = FUN_180584c80(lVar6,lVar5,param_1,lVar4);
  }
  if (iVar2 == 0) goto LAB_1805826d7;
  if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_180582617:
    if ((bVar8) ||
       (iVar2 = FUN_1805828c0(lVar6,local_28,*(undefined8 *)(param_1 + 0x60),lVar4), iVar2 != 0)) {
      if (*(int *)(lVar6 + 8) != *(int *)(*(longlong *)(param_1 + 0x60) + 0x20)) {
        FID_conflict__assert
                  (u_result_>width____rsa_>mont_n_>N__18095ca30,
                   u_D__a_1_s_target_x86_64_pc_window_18095c920,0x2ca);
      }
      FUN_180545ed0(lVar6,param_4);
      iVar2 = FUN_18053e010(param_2,param_4,lVar6);
      if (iVar2 == 0) {
        FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095ca80,CONCAT44(uVar10,0x2cd));
      }
      else {
        uVar11 = 1;
      }
    }
  }
  else {
    lVar7 = FUN_18053e2b0(lVar4);
    if (lVar7 != 0) {
      lVar9 = lVar4;
      iVar2 = FUN_180543dc0(lVar7,lVar6,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8)
                            ,lVar4,*(undefined8 *)(param_1 + 0x60));
      uVar10 = (undefined4)((ulonglong)lVar9 >> 0x20);
      if (iVar2 != 0) {
        uVar3 = FUN_18053f9f0(lVar7,lVar5);
        iVar2 = FUN_1805339d0(uVar3);
        if (iVar2 != 0) goto LAB_180582617;
      }
    }
    FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095c890,CONCAT44(uVar10,699));
  }
LAB_1805826d7:
  if (lVar4 != 0) {
    FUN_18053e400(lVar4);
    FUN_18053e1c0(lVar4);
  }
  if (local_28 != 0) {
    FUN_180584c10(param_1,local_28,local_10[0]);
  }
  return uVar11;
}


/* address=180582730 name=FUN_180582730 */

longlong * FUN_180582730(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_18058f4e0(0x18);
  if (plVar1 != (longlong *)0x0) {
    FUN_180533b50(plVar1,0,0x18);
    lVar2 = FUN_18053d800();
    *plVar1 = lVar2;
    if (*plVar1 != 0) {
      lVar2 = FUN_18053d800();
      plVar1[1] = lVar2;
      if (plVar1[1] != 0) {
        *(undefined4 *)(plVar1 + 2) = 0x1f;
        return plVar1;
      }
    }
    FUN_1805827d0(plVar1);
  }
  return (longlong *)0x0;
}


/* address=1805827d0 name=FUN_1805827d0 */

void FUN_1805827d0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_18053d880(*param_1);
    FUN_18053d880(param_1[1]);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=180582820 name=FUN_180582820 */

void FUN_180582820(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0x1f;
  return;
}


/* address=180582840 name=FUN_180582840 */

undefined8
FUN_180582840(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  
  iVar1 = FUN_180583ca0(param_2,param_3,param_4,param_5);
  if ((iVar1 != 0) && (iVar1 = FUN_180543970(param_1,param_1,*param_2,param_4,param_5), iVar1 != 0))
  {
    return 1;
  }
  return 0;
}


/* address=1805828c0 name=FUN_1805828c0 */

void FUN_1805828c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180543970(param_1,param_1,*(undefined8 *)(param_2 + 8),param_3,param_4);
  return;
}


/* address=180582910 name=FUN_180582910 */

void FUN_180582910(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  local_90 = 0;
  FUN_180532380(local_80);
  FUN_18053d4f0();
  local_88 = FUN_180532b10(param_5);
  local_98 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  while (local_res10 != 0) {
    local_94 = (undefined)((uint)local_98 >> 0x18);
    local_93 = (undefined)((uint)local_98 >> 0x10);
    uStack_92 = (undefined)((uint)local_98 >> 8);
    uStack_91 = (undefined)local_98;
    iVar1 = FUN_1805327c0(local_80,param_5,0);
    if (((iVar1 == 0) || (iVar1 = FUN_1805328f0(local_80,param_3,param_4), iVar1 == 0)) ||
       (iVar1 = FUN_1805328f0(local_80,&local_94), iVar1 == 0)) goto LAB_180582adc;
    if (local_res10 < local_88) {
      iVar1 = FUN_180532930(local_80,local_58,0);
      if (iVar1 == 0) goto LAB_180582adc;
      FUN_180533ab0(local_res8,local_58);
      local_res10 = 0;
    }
    else {
      iVar1 = FUN_180532930(local_80,local_res8);
      if (iVar1 == 0) goto LAB_180582adc;
      local_res8 = local_res8 + local_88;
      local_res10 = local_res10 - local_88;
    }
    local_98 = local_98 + 1;
  }
  local_90 = 1;
LAB_180582adc:
  FUN_1805323f0(local_80);
  FUN_18053d500();
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=180582b10 name=FUN_180582b10 */

undefined8 FUN_180582b10(undefined *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (param_2 < 0xb) {
    FUN_18050f6f0(4,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_180959330,0x4e);
    uVar1 = 0;
  }
  else if (param_2 - 0xb < param_4) {
    FUN_18050f6f0(4,0,0x76,s_D__a_1_s_target_x86_64_pc_window_1809593c0,0x53);
    uVar1 = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 1;
    FUN_180533b50(param_1 + 2,0xff,(param_2 - 3) - param_4);
    param_1[(param_2 - param_4) + -1] = 0;
    FUN_180533ab0(param_1 + (param_2 - param_4),param_3,param_4);
    uVar1 = 1;
  }
  return uVar1;
}


/* address=180582c30 name=FUN_180582c30 */

undefined8
FUN_180582c30(undefined8 param_1,longlong *param_2,ulonglong param_3,char *param_4,ulonglong param_5
             )

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong local_18;
  
  if (param_5 < 2) {
    FUN_18050f6f0(4,0,0x74,s_D__a_1_s_target_x86_64_pc_window_180959450,0x65);
    uVar1 = 0;
  }
  else if ((*param_4 == '\0') && (param_4[1] == '\x01')) {
    for (local_18 = 2; (local_18 < param_5 && (param_4[local_18] != '\0')); local_18 = local_18 + 1)
    {
      if (param_4[local_18] != -1) {
        FUN_18050f6f0(4,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180959570,0x77);
        return 0;
      }
    }
    if (local_18 == param_5) {
      FUN_18050f6f0(4,0,0x83,s_D__a_1_s_target_x86_64_pc_window_180959600,0x7d);
      uVar1 = 0;
    }
    else if (local_18 < 10) {
      FUN_18050f6f0(4,0,0x67,s_D__a_1_s_target_x86_64_pc_window_180959690,0x82);
      uVar1 = 0;
    }
    else {
      lVar2 = local_18 + 1;
      if (param_3 < param_5 - lVar2) {
        FUN_18050f6f0(4,0,0x71,s_D__a_1_s_target_x86_64_pc_window_180959720,0x8a);
        uVar1 = 0;
      }
      else {
        FUN_180533ab0(param_1,param_4 + lVar2,param_5 - lVar2);
        *param_2 = param_5 - lVar2;
        uVar1 = 1;
      }
    }
  }
  else {
    FUN_18050f6f0(4,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_1809594e0,0x6b);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=180582e60 name=FUN_180582e60 */

undefined8 FUN_180582e60(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (param_2 < param_4) {
    FUN_18050f6f0(4,0,0x72,s_D__a_1_s_target_x86_64_pc_window_1809597b0,0x96);
    uVar1 = 0;
  }
  else if (param_4 < param_2) {
    FUN_18050f6f0(4,0,0x74,s_D__a_1_s_target_x86_64_pc_window_180959840,0x9b);
    uVar1 = 0;
  }
  else {
    FUN_180533ab0(param_1,param_3,param_4);
    uVar1 = 1;
  }
  return uVar1;
}


/* address=180582f00 name=FUN_180582f00 */

undefined8 FUN_180582f00(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_18050f6f0(4,0,0x90,s_D__a_1_s_target_x86_64_pc_window_18095b320,0x4e);
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_18053daa0(*(undefined8 *)(param_1 + 8));
    if (uVar1 < 0x4001) {
      iVar2 = FUN_18053fd10(*(undefined8 *)(param_1 + 8));
      if ((iVar2 == 0) || (iVar2 = FUN_18053dc90(*(undefined8 *)(param_1 + 8)), iVar2 != 0)) {
        FUN_18050f6f0(4,0,0x68,s_D__a_1_s_target_x86_64_pc_window_18095b440,0x5b);
        uVar4 = 0;
      }
      else {
        if (*(longlong *)(param_1 + 0x10) == 0) {
          if ((*(uint *)(param_1 + 0x54) & 0x40) == 0) {
            FUN_18050f6f0(4,0,0x90,s_D__a_1_s_target_x86_64_pc_window_18095b680,0x7f);
            return 0;
          }
        }
        else {
          uVar3 = FUN_18053daa0(*(undefined8 *)(param_1 + 0x10));
          if (((uVar3 < 2) || (iVar2 = FUN_18053dc90(*(undefined8 *)(param_1 + 0x10)), iVar2 != 0))
             || (iVar2 = FUN_18053fd10(*(undefined8 *)(param_1 + 0x10)), iVar2 == 0)) {
            FUN_18050f6f0(4,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18095b4d0,0x65);
            return 0;
          }
          if ((*(uint *)(param_1 + 0x54) & 0x80) == 0) {
            if (DAT_18072622c < uVar3) {
              FUN_18050f6f0(4,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18095b5f0,0x7a);
              return 0;
            }
          }
          else {
            iVar2 = FUN_18053f9a0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
            if (iVar2 < 1) {
              FUN_18050f6f0(4,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18095b560,0x6c);
              return 0;
            }
          }
        }
        if (DAT_18072622c < uVar1) {
          if ((*(longlong *)(param_1 + 0x10) != 0) &&
             (iVar2 = FUN_18053f9a0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10)),
             iVar2 < 1)) {
            FID_conflict__assert
                      (u_rsa_>e____NULL____BN_ucmp_rsa_>n_18095b8b0,
                       u_D__a_1_s_target_x86_64_pc_window_18095b7a0,0x8b);
          }
          uVar4 = 1;
        }
        else {
          FUN_18050f6f0(4,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_18095b710,0x88);
          uVar4 = 0;
        }
      }
    }
    else {
      FUN_18050f6f0(4,0,0x80,s_D__a_1_s_target_x86_64_pc_window_18095b3b0,0x54);
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* address=180583190 name=FUN_180583190 */

void FUN_180583190(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(*param_1 + 0x40) == 0) {
    FUN_1805821a0(param_1,param_2,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4);
  }
  return;
}


/* address=180583200 name=FUN_180583200 */

void FUN_180583200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180533e10();
  FUN_180583190(param_1,param_2,param_3,param_4);
  return;
}


/* address=180583250 name=FUN_180583250 */

void FUN_180583250(longlong param_1)

{
  ulonglong local_18;
  
  *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
  FUN_180543780(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_180543780(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_180543780(*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_18053d880(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_18053d880(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_18053d880(*(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_18053d880(*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x90) = 0;
  for (local_18 = 0; local_18 < *(ulonglong *)(param_1 + 0x98); local_18 = local_18 + 1) {
    FUN_1805827d0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + local_18 * 8));
  }
  FUN_18058f610(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_18058f610(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}


/* address=180583400 name=FUN_180583400 */

undefined4
FUN_180583400(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5
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
    FUN_18050f6f0(4,0,0x90,s_D__a_1_s_target_x86_64_pc_window_18095a910,CONCAT44(uVar3,0x2a8));
    local_34 = 0;
  }
  else {
    uVar1 = FUN_1805697e0(param_6);
    local_20 = (ulonglong)uVar1;
    local_30 = 0;
    local_34 = 0;
    local_28 = 0;
    local_18 = 0;
    local_38 = 0;
    if ((param_1 == 0x72) && (param_3 != DAT_180726228)) {
      FUN_18050f6f0(4,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_18095a990,CONCAT44(uVar3,0x2b4));
      local_34 = 0;
    }
    else {
      local_30 = FUN_18058f4e0(local_20);
      if (local_30 == 0) {
        local_34 = 0;
      }
      else {
        iVar2 = FUN_180583600(param_6,local_10,local_30,local_20,param_4,param_5,1);
        if (iVar2 != 0) {
          iVar2 = FUN_18056aca0(&local_28,&local_18,&local_38,param_1,param_2,param_3);
          uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
          if (iVar2 != 0) {
            if ((local_10[0] == local_18) &&
               (iVar2 = FUN_180533a70(local_30,local_28,local_10[0]), iVar2 == 0)) {
              local_34 = 1;
            }
            else {
              FUN_18050f6f0(4,0,0x69,s_D__a_1_s_target_x86_64_pc_window_18095aa10,
                            CONCAT44(uVar3,0x2c8));
            }
          }
        }
        FUN_18058f610(local_30);
        if (local_38 != 0) {
          FUN_18058f610(local_28);
        }
      }
    }
  }
  return local_34;
}


/* address=180583600 name=FUN_180583600 */

int FUN_180583600(longlong param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,
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
    FUN_18050f6f0(4,0,0x90,s_D__a_1_s_target_x86_64_pc_window_18095c090,0x1f2);
    return 0;
  }
  iVar1 = FUN_180582f00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1805697e0(param_1);
  if (param_4 < uVar2) {
    FUN_18050f6f0(4,0,0x87,s_D__a_1_s_target_x86_64_pc_window_18095c120,CONCAT44(uVar9,0x1fe));
    return 0;
  }
  if (param_6 != uVar2) {
    FUN_18050f6f0(4,0,0x70,s_D__a_1_s_target_x86_64_pc_window_18095c1b0,CONCAT44(uVar9,0x203));
    return 0;
  }
  lVar4 = FUN_18053e150();
  if (lVar4 == 0) {
    return 0;
  }
  iVar1 = 0;
  local_20 = 0;
  FUN_18053e250(lVar4);
  lVar5 = FUN_18053e2b0(lVar4);
  lVar6 = FUN_18053e2b0(lVar4);
  if ((((lVar5 != 0) && (lVar6 != 0)) &&
      ((local_20 = param_3, param_7 == 3 || (local_20 = FUN_18058f4e0(uVar2), local_20 != 0)))) &&
     (lVar7 = FUN_18053dcd0(param_5,param_6,lVar5), lVar7 != 0)) {
    iVar3 = FUN_18053f9a0(lVar5,*(undefined8 *)(param_1 + 8));
    if (iVar3 < 0) {
      iVar3 = FUN_180555600(param_1 + 0x60,param_1 + 0x58,*(undefined8 *)(param_1 + 8),lVar4);
      if (iVar3 != 0) {
        lVar7 = lVar4;
        iVar3 = FUN_180543dc0(lVar6,lVar5,*(undefined8 *)(param_1 + 0x10),
                              *(longlong *)(param_1 + 0x60) + 0x18,lVar4,
                              *(undefined8 *)(param_1 + 0x60));
        uVar9 = (undefined4)((ulonglong)lVar7 >> 0x20);
        if (iVar3 != 0) {
          iVar3 = FUN_18053e010(local_20,uVar2,lVar6);
          if (iVar3 == 0) {
            FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095c2d0,
                          CONCAT44(uVar9,0x22f));
          }
          else {
            if (param_7 == 1) {
              uVar8 = (ulonglong)uVar2;
              iVar1 = FUN_180582c30(param_3,param_2,uVar2,local_20,uVar8);
              uVar9 = (undefined4)(uVar8 >> 0x20);
            }
            else {
              if (param_7 != 3) {
                FUN_18050f6f0(4,0,0x8f,s_D__a_1_s_target_x86_64_pc_window_18095c360,
                              CONCAT44(uVar9,0x23d));
                goto LAB_180583946;
              }
              iVar1 = 1;
              *param_2 = (ulonglong)uVar2;
            }
            if (iVar1 == 0) {
              FUN_18050f6f0(4,0,0x88,s_D__a_1_s_target_x86_64_pc_window_18095c3f0,
                            CONCAT44(uVar9,0x242));
            }
          }
        }
      }
    }
    else {
      FUN_18050f6f0(4,0,0x73,s_D__a_1_s_target_x86_64_pc_window_18095c240,CONCAT44(uVar9,0x225));
    }
  }
LAB_180583946:
  FUN_18053e400(lVar4);
  FUN_18053e1c0(lVar4);
  if (local_20 != param_3) {
    FUN_18058f610(local_20);
  }
  return iVar1;
}


/* address=180583990 name=FUN_180583990 */

ulonglong FUN_180583990(undefined4 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
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
    local_30 = FUN_1805697e0(param_6);
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    local_38 = 0;
    iVar1 = FUN_18056aca0(&local_28,&local_20,&local_38,param_1,param_2,param_3);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_180583e30(param_6,&local_18,param_4,local_30,local_28,local_20,1), iVar1 != 0))
    {
      if (CONCAT44(uStack_14,local_18) < 0x100000000) {
        *param_5 = local_18;
        local_34 = 1;
      }
      else {
        FUN_18050f6f0(4,0,0x45,s_D__a_1_s_target_x86_64_pc_window_18095a810,0x279);
      }
    }
    if (local_38 != 0) {
      FUN_18058f610(local_28);
    }
    uVar2 = (ulonglong)local_34;
  }
  else {
    iVar1 = FUN_180583ee0(param_1,param_3);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (0x40 < param_3) {
        FID_conflict__assert
                  (u_digest_len_<__EVP_MAX_MD_SIZE_18095a7d0,
                   u_D__a_1_s_target_x86_64_pc_window_18095a6d0,0x263);
      }
      uVar2 = (**(code **)(*param_6 + 0x28))
                        (param_1,param_2,param_3 & 0xffffffff,param_4,param_5,param_6);
    }
  }
  return uVar2;
}


/* address=180583b70 name=FUN_180583b70 */

undefined8 FUN_180583b70(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar2;
  undefined local_18 [24];
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  iVar1 = FUN_1805420c0(*param_1,1,param_3 + 0x18);
  if ((iVar1 != 0) && (iVar1 = FUN_1805438e0(param_1[1],*param_1,param_3,param_4), iVar1 != 0)) {
    uVar2 = param_4;
    iVar1 = FUN_1805430c0(param_1[1],local_18,param_1[1],param_3,param_4);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (iVar1 != 0) {
      uVar2 = param_4;
      iVar1 = FUN_180543dc0(*param_1,*param_1,param_2,param_3 + 0x18,param_4,param_3);
      uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if ((iVar1 != 0) && (iVar1 = FUN_180543890(*param_1,*param_1,param_3,param_4), iVar1 != 0)) {
        return 1;
      }
    }
  }
  FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_1809592a0,CONCAT44(uVar3,0xed));
  return 0;
}


/* address=180583ca0 name=FUN_180583ca0 */

undefined8
FUN_180583ca0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 2);
  *(int *)(param_1 + 2) = iVar1 + 1;
  if (iVar1 + 1 == 0x20) {
    iVar1 = FUN_180583b70(param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      return 1;
    }
  }
  else {
    iVar1 = FUN_180543970(*param_1,*param_1,*param_1,param_3,param_4);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_180543970(param_1[1],param_1[1],param_1[1],param_3,param_4), iVar1 != 0)) {
      return 1;
    }
  }
  *(undefined4 *)(param_1 + 2) = 0x1f;
  return 0;
}


/* address=180583d90 name=FUN_180583d90 */

undefined * FUN_180583d90(void)

{
  return &DAT_180992158;
}


/* address=180583da0 name=FUN_180583da0 */

bool FUN_180583da0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    FUN_18050f6f0(4,0,0x43,s_D__a_1_s_target_x86_64_pc_window_18095a020,0x58);
    bVar2 = false;
  }
  else {
    FUN_18053d880(*param_1);
    lVar1 = FUN_18053d910(param_2);
    *param_1 = lVar1;
    bVar2 = *param_1 != 0;
  }
  return bVar2;
}


/* address=180583e30 name=FUN_180583e30 */

void FUN_180583e30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  if (*(longlong *)(*param_1 + 0x30) == 0) {
    FUN_180582030(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


/* address=180583ee0 name=FUN_180583ee0 */

undefined8 FUN_180583ee0(int param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong local_18;
  
  if (param_1 == 0x72) {
    if (param_2 == DAT_180726228) {
      uVar1 = 1;
    }
    else {
      FUN_18050f6f0(4,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_18095a1c0,0x212);
      uVar1 = 0;
    }
  }
  else {
    for (local_18 = 0; *(int *)(&DAT_1807265c0 + local_18 * 0x1c) != 0; local_18 = local_18 + 1) {
      if (*(int *)(&DAT_1807265c0 + local_18 * 0x1c) == param_1) {
        if (param_2 != (byte)(&DAT_1807265c4)[local_18 * 0x1c]) {
          FUN_18050f6f0(4,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_18095a240,0x21c);
          return 0;
        }
        return 1;
      }
    }
    FUN_18050f6f0(4,0,0x8e,s_D__a_1_s_target_x86_64_pc_window_18095a2c0,0x223);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=180584000 name=FUN_180584000 */

int FUN_180584000(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int local_18;
  
  iVar1 = FUN_18053dc90(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_18053f880(param_3,param_4), iVar1 < 0)) {
    FUN_18053e250(param_6);
    lVar3 = FUN_18053e2b0(param_6);
    if ((lVar3 == 0) ||
       ((iVar1 = FUN_180553a10(lVar3,param_2,param_3,param_6), iVar1 == 0 ||
        (iVar1 = FUN_180553d30(0,lVar3,lVar3,param_4,param_5,param_6), iVar1 == 0)))) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    if (local_18 != 0) {
      uVar2 = FUN_18053fc60(lVar3);
      *param_1 = uVar2;
    }
    FUN_18053e400(param_6);
    return local_18;
  }
  *param_1 = 0;
  return 1;
}


/* address=180584110 name=FUN_180584110 */

undefined * FUN_180584110(void)

{
  return &DAT_180992170;
}


/* address=180584120 name=FUN_180584120 */

undefined * FUN_180584120(void)

{
  return &DAT_180992188;
}


/* address=180584130 name=FUN_180584130 */

void FUN_180584130(undefined8 *param_1)

{
  *param_1 = &DAT_1807266b0;
  *(undefined4 *)(param_1 + 1) = 0x11;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  return;
}


/* address=1805841a0 name=FUN_1805841a0 */

void FUN_1805841a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180584120();
  FUN_18059e1b0(uVar1,&LAB_180584180);
  FUN_180584110();
  return;
}


/* address=1805841d0 name=FUN_1805841d0 */

undefined8 FUN_1805841d0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*param_1 == 0) {
    lVar3 = FUN_18053d910(param_2);
    if ((lVar3 != 0) && (iVar1 = FUN_180545ad0(lVar3,(longlong)param_3), iVar1 != 0)) {
      *param_1 = lVar3;
      return 1;
    }
    FUN_18053d880(lVar3);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* address=180584250 name=FUN_180584250 */

undefined4 FUN_180584250(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_40;
  
  FUN_18059e210(param_1 + 0x58);
  uVar1 = *(uint *)(param_1 + 0xb8);
  FUN_18059e250(param_1 + 0x58);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  local_40 = 0;
  FUN_18059e230(param_1 + 0x58);
  if ((*(uint *)(param_1 + 0xb8) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      uVar5 = FUN_180543670(*(undefined8 *)(param_1 + 8),param_2);
      *(undefined8 *)(param_1 + 0x60) = uVar5;
      if (*(longlong *)(param_1 + 0x60) == 0) goto LAB_1805846f3;
    }
    if ((*(longlong *)(param_1 + 0x18) == 0) ||
       (iVar4 = FUN_1805841d0(param_1 + 0x78,*(undefined8 *)(param_1 + 0x18),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x20)), iVar4 != 0)) {
      if ((*(longlong *)(param_1 + 0x10) != 0) &&
         ((*(longlong *)(param_1 + 0x20) != 0 && (*(longlong *)(param_1 + 0x28) != 0)))) {
        if (*(longlong *)(param_1 + 0x68) == 0) {
          uVar5 = FUN_1805436d0(*(undefined8 *)(param_1 + 0x20),param_2);
          *(undefined8 *)(param_1 + 0x68) = uVar5;
          if (*(longlong *)(param_1 + 0x68) == 0) goto LAB_1805846f3;
        }
        lVar7 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          uVar5 = FUN_1805436d0(*(undefined8 *)(param_1 + 0x28),param_2);
          *(undefined8 *)(param_1 + 0x70) = uVar5;
          if (*(longlong *)(param_1 + 0x70) == 0) goto LAB_1805846f3;
        }
        lVar2 = *(longlong *)(param_1 + 0x70);
        if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
          if (*(longlong *)(param_1 + 0x40) == 0) {
            lVar6 = FUN_18053d800();
            if ((lVar6 == 0) ||
               (iVar4 = FUN_180555530(lVar6,*(undefined8 *)(param_1 + 0x28),
                                      *(undefined8 *)(param_1 + 0x20),param_2,
                                      *(undefined8 *)(param_1 + 0x68)), iVar4 == 0)) {
              FUN_18053d880(lVar6);
              goto LAB_1805846f3;
            }
            *(longlong *)(param_1 + 0x40) = lVar6;
          }
          iVar4 = FUN_1805841d0(param_1 + 0x80,*(undefined8 *)(param_1 + 0x30),
                                *(undefined4 *)(lVar7 + 0x20));
          if ((iVar4 == 0) ||
             (iVar4 = FUN_1805841d0(param_1 + 0x88,*(undefined8 *)(param_1 + 0x38),
                                    *(undefined4 *)(lVar2 + 0x20)), iVar4 == 0)) goto LAB_1805846f3;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            lVar7 = FUN_18053d800();
            iVar4 = FUN_18053f880(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
            if (iVar4 < 0) {
              if (((lVar7 == 0) ||
                  (iVar4 = FUN_180555530(lVar7,*(undefined8 *)(param_1 + 0x20),
                                         *(undefined8 *)(param_1 + 0x28),param_2,
                                         *(undefined8 *)(param_1 + 0x70)), iVar4 == 0)) ||
                 (iVar4 = FUN_180543890(lVar7,lVar7,*(undefined8 *)(param_1 + 0x70),param_2),
                 iVar4 == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
            }
            else if ((lVar7 == 0) ||
                    (iVar4 = FUN_180543890(lVar7,*(undefined8 *)(param_1 + 0x40),
                                           *(undefined8 *)(param_1 + 0x68),param_2), iVar4 == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) {
              FUN_18053d880(lVar7);
              goto LAB_1805846f3;
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
LAB_1805846f3:
  FUN_18059e270(param_1 + 0x58);
  return local_40;
}


/* address=180584720 name=FUN_180584720 */

undefined8 FUN_180584720(longlong param_1,longlong *param_2,longlong param_3)

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
    FID_conflict__assert(u_ctx____NULL_18095ba18,u_D__a_1_s_target_x86_64_pc_window_18095b910,0x14e)
    ;
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    FID_conflict__assert
              (u_rsa_>mont_n____NULL_18095bb38,u_D__a_1_s_target_x86_64_pc_window_18095ba30,0x14f);
  }
  local_28 = 0;
  lVar1 = FUN_180581e60();
  FUN_18059e230(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0xb0) != lVar1) {
    for (local_38 = 0; local_38 < *(ulonglong *)(param_1 + 0x98); local_38 = local_38 + 1) {
      if (*(char *)(*(longlong *)(param_1 + 0xa8) + local_38) != '\0') {
        FID_conflict__assert
                  (u_rsa_>blindings_inuse_i_____0_18095bc68,
                   u_D__a_1_s_target_x86_64_pc_window_18095bb60,0x15b);
      }
      FUN_180582820(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + local_38 * 8));
    }
    *(longlong *)(param_1 + 0xb0) = lVar1;
  }
  puVar2 = (undefined *)
           FUN_180533a30(*(undefined8 *)(param_1 + 0xa8),0,*(undefined8 *)(param_1 + 0x98));
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
        FID_conflict__assert
                  (u_new_num_blindings_>_rsa_>num_bli_18095bdc0,
                   u_D__a_1_s_target_x86_64_pc_window_18095bcb0,0x17d);
      }
      lVar1 = FUN_18058f4e0(local_58 << 3);
      lVar3 = FUN_18058f4e0(local_58);
      if ((lVar1 == 0) || (lVar3 == 0)) {
LAB_180584bd7:
        FUN_18058f610(lVar3);
        FUN_18058f610(lVar1);
      }
      else {
        FUN_180533ab0(lVar1,*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0x98) << 3);
        FUN_180533ab0(lVar3,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98));
        local_48 = *(ulonglong *)(param_1 + 0x98);
LAB_180584a39:
        if (local_48 < local_58) {
          uVar4 = FUN_180582730();
          *(undefined8 *)(lVar1 + local_48 * 8) = uVar4;
          if (*(longlong *)(lVar1 + local_48 * 8) != 0) goto LAB_180584a2c;
          for (local_30 = *(ulonglong *)(param_1 + 0x98); local_30 < local_48;
              local_30 = local_30 + 1) {
            FUN_1805827d0(*(undefined8 *)(lVar1 + local_30 * 8));
          }
          goto LAB_180584bd7;
        }
        FUN_1806924e0(lVar3 + *(longlong *)(param_1 + 0x98),0,
                      local_58 - *(longlong *)(param_1 + 0x98));
        *(undefined *)(lVar3 + *(longlong *)(param_1 + 0x98)) = 1;
        *param_2 = *(longlong *)(param_1 + 0x98);
        if (*param_2 == 0x400) {
          FID_conflict__assert
                    (u__index_used____MAX_BLINDINGS_PER_18095bf20,
                     u_D__a_1_s_target_x86_64_pc_window_18095be10,0x198);
        }
        local_28 = *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x98) * 8);
        FUN_18058f610(*(undefined8 *)(param_1 + 0xa0));
        *(longlong *)(param_1 + 0xa0) = lVar1;
        FUN_18058f610(*(undefined8 *)(param_1 + 0xa8));
        *(longlong *)(param_1 + 0xa8) = lVar3;
        *(ulonglong *)(param_1 + 0x98) = local_58;
      }
    }
    else {
      *param_2 = 0x400;
      local_28 = FUN_180582730();
    }
  }
  else {
    *puVar2 = 1;
    *param_2 = (longlong)puVar2 - *(longlong *)(param_1 + 0xa8);
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + *param_2 * 8);
  }
  FUN_18059e270(param_1 + 0x58);
  return local_28;
LAB_180584a2c:
  local_48 = local_48 + 1;
  goto LAB_180584a39;
}


/* address=180584c10 name=FUN_180584c10 */

void FUN_180584c10(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 == 0x400) {
    FUN_1805827d0(param_2);
  }
  else {
    FUN_18059e230(param_1 + 0x58);
    *(undefined *)(*(longlong *)(param_1 + 0xa8) + param_3) = 0;
    FUN_18059e270(param_1 + 0x58);
  }
  return;
}


/* address=180584c80 name=FUN_180584c80 */

undefined4 FUN_180584c80(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

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
    FID_conflict__assert(u_ctx____NULL_18095cca8,u_D__a_1_s_target_x86_64_pc_window_18095cba0,0x2ff)
    ;
  }
  if (*(longlong *)(param_3 + 8) == 0) {
    FID_conflict__assert
              (u_rsa_>n____NULL_18095cdc8,u_D__a_1_s_target_x86_64_pc_window_18095ccc0,0x301);
  }
  if (*(longlong *)(param_3 + 0x10) == 0) {
    FID_conflict__assert
              (u_rsa_>e____NULL_18095cef8,u_D__a_1_s_target_x86_64_pc_window_18095cdf0,0x302);
  }
  if (*(longlong *)(param_3 + 0x18) == 0) {
    FID_conflict__assert
              (u_rsa_>d____NULL_18095d028,u_D__a_1_s_target_x86_64_pc_window_18095cf20,0x303);
  }
  if (*(longlong *)(param_3 + 0x20) == 0) {
    FID_conflict__assert
              (u_rsa_>p____NULL_18095d158,u_D__a_1_s_target_x86_64_pc_window_18095d050,0x304);
  }
  if (*(longlong *)(param_3 + 0x28) == 0) {
    FID_conflict__assert
              (u_rsa_>q____NULL_18095d288,u_D__a_1_s_target_x86_64_pc_window_18095d180,0x305);
  }
  if (*(longlong *)(param_3 + 0x30) == 0) {
    FID_conflict__assert
              (u_rsa_>dmp1____NULL_18095d3b8,u_D__a_1_s_target_x86_64_pc_window_18095d2b0,0x306);
  }
  if (*(longlong *)(param_3 + 0x38) == 0) {
    FID_conflict__assert
              (u_rsa_>dmq1____NULL_18095d4e8,u_D__a_1_s_target_x86_64_pc_window_18095d3e0,0x307);
  }
  if (*(longlong *)(param_3 + 0x40) == 0) {
    FID_conflict__assert
              (u_rsa_>iqmp____NULL_18095d618,u_D__a_1_s_target_x86_64_pc_window_18095d510,0x308);
  }
  local_58 = 0;
  FUN_18053e250(param_4);
  lVar4 = FUN_18053e2b0(param_4);
  lVar5 = FUN_18053e2b0(param_4);
  if (((lVar4 != 0) && (lVar5 != 0)) && (iVar2 = FUN_180584250(param_3,param_4), iVar2 != 0)) {
    local_10 = *(undefined8 *)(param_3 + 0x80);
    local_18 = *(undefined8 *)(param_3 + 0x88);
    local_48 = *(longlong *)(param_3 + 0x68);
    local_40 = *(longlong *)(param_3 + 0x70);
    iVar2 = FUN_18053f880(*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
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
    iVar2 = FUN_18053f9a0(param_2,lVar6);
    if (-1 < iVar2) {
      FID_conflict__assert
                (u_BN_ucmp_I__n__<_0_18095d748,u_D__a_1_s_target_x86_64_pc_window_18095d640,0x32d);
    }
    iVar2 = FUN_1805851c0(lVar4,param_2,lVar8,local_40,lVar7,param_4);
    if (((((iVar2 != 0) &&
          (iVar2 = FUN_1805443f0(lVar5,lVar4,local_18,lVar8,param_4,local_40), iVar2 != 0)) &&
         ((iVar2 = FUN_1805851c0(lVar4,param_2,lVar7,local_48,lVar8,param_4), iVar2 != 0 &&
          ((iVar2 = FUN_1805443f0(param_1,lVar4,local_10,lVar7,param_4,local_48), iVar2 != 0 &&
           (iVar2 = FUN_1805546b0(param_1,param_1,lVar5,lVar7,param_4), iVar2 != 0)))))) &&
        (iVar2 = FUN_180543970(param_1,param_1,*(undefined8 *)(param_3 + 0x90),local_48,param_4),
        iVar2 != 0)) &&
       ((iVar2 = FUN_180553a10(param_1,param_1,lVar8,param_4), iVar2 != 0 &&
        (iVar2 = FUN_180553560(param_1,param_1,lVar5), iVar2 != 0)))) {
      iVar2 = FUN_18053f880(param_1,lVar6);
      if (-1 < iVar2) {
        FID_conflict__assert
                  (u_BN_cmp_r0__n__<_0_18095d878,u_D__a_1_s_target_x86_64_pc_window_18095d770,0x34b)
        ;
      }
      uVar3 = FUN_18053db00(lVar6);
      FUN_180545ed0(param_1,uVar3);
      iVar2 = FUN_180545ad0(param_1,(longlong)*(int *)(lVar1 + 0x20));
      if (iVar2 != 0) {
        local_58 = 1;
      }
    }
  }
  FUN_18053e400(param_4);
  return local_58;
}


/* address=1805851c0 name=FUN_1805851c0 */

undefined8
FUN_1805851c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = FUN_180552ab0(param_5,param_4);
  if (iVar1 == 0) {
    FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095cb10,0x2e8);
  }
  else {
    iVar1 = FUN_1805438e0(param_1,param_2,param_4,param_6);
    if ((iVar1 != 0) && (iVar1 = FUN_180543890(param_1,param_1,param_4,param_6), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}


/* address=180585260 name=FUN_180585260 */

bool FUN_180585260(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_18053d800();
    *param_1 = lVar1;
  }
  return *param_1 != 0;
}


/* address=1805852b0 name=FUN_1805852b0 */

undefined4
FUN_1805852b0(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,undefined8 param_5,
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
    FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095d8a0,0x3ac);
    local_2c = 0;
  }
  else {
    iVar1 = FUN_18053fd70(param_6);
    if (iVar1 == 0) {
      FID_conflict__assert
                (u_BN_is_pow2_pow2_bits_100__18095da38,u_D__a_1_s_target_x86_64_pc_window_18095d930,
                 0x3af);
    }
    iVar1 = FUN_1805404d0(param_6,param_2 + -100);
    if (iVar1 == 0) {
      FID_conflict__assert
                (u_BN_is_bit_set_pow2_bits_100__bit_18095db80,
                 u_D__a_1_s_target_x86_64_pc_window_18095da70,0x3b0);
    }
    if (param_2 < 0x3ffffff) {
      iVar1 = FUN_18053fcb0(param_3,3);
      if (iVar1 == 0) {
        local_30 = param_2 * 5;
      }
      else {
        local_30 = param_2 << 3;
      }
      local_10 = local_30;
      local_2c = 0;
      local_38 = 0;
      FUN_18053e250(param_7);
      lVar2 = FUN_18053e2b0(param_7);
      if (lVar2 != 0) {
LAB_180585417:
        do {
          do {
            iVar1 = FUN_180541ca0(param_1,param_2,0,1);
            if ((iVar1 == 0) || (iVar1 = FUN_180542240(param_8,0), iVar1 == 0)) goto LAB_1805855cd;
            if (param_4 != 0) {
              iVar1 = FUN_180553890(lVar2,param_1,param_4,param_7);
              if (iVar1 == 0) goto LAB_1805855cd;
              iVar1 = FUN_18053f880(lVar2,param_6);
              if (iVar1 < 1) goto LAB_180585417;
            }
            iVar1 = FUN_18053f880(param_1,param_5);
          } while (iVar1 < 1);
          iVar1 = FUN_180552c50(param_1);
          if (iVar1 == 0) {
            uVar3 = FUN_18053da70();
            iVar1 = FUN_18053e730(lVar2,param_1,uVar3);
            if ((iVar1 == 0) || (iVar1 = FUN_180554220(&local_18,lVar2,param_3,param_7), iVar1 == 0)
               ) break;
            if (local_18 != 0) {
              iVar1 = FUN_180542ab0(&local_14,param_1,0,param_7,0,param_8);
              if (iVar1 == 0) break;
              if (local_14 != 0) {
                local_2c = 1;
                break;
              }
            }
          }
          local_38 = local_38 + 1;
          if (local_10 <= local_38) {
            FUN_18050f6f0(4,0,0x8d,s_D__a_1_s_target_x86_64_pc_window_18095dc70,0x416);
            break;
          }
          iVar1 = FUN_180542240(param_8,2);
        } while (iVar1 != 0);
      }
LAB_1805855cd:
      FUN_18053e400(param_7);
    }
    else {
      FUN_18050f6f0(4,0,0x80,s_D__a_1_s_target_x86_64_pc_window_18095dbe0,0x3d1);
      local_2c = 0;
    }
  }
  return local_2c;
}


/* address=1805855f0 name=FUN_1805855f0 */

int FUN_1805855f0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_18050f6f0(4,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_18095dd00,0x435);
    return 0;
  }
  uVar1 = FUN_18053daa0(param_3);
  if (0x20 < uVar1) {
    FUN_18050f6f0(4,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18095dd90,CONCAT44(uVar15,0x440));
    return 0;
  }
  iVar16 = 0;
  iVar2 = (int)param_2 / 2;
  lVar6 = FUN_18053e150();
  if (lVar6 != 0) {
    FUN_18053e250(lVar6);
    lVar7 = FUN_18053e2b0(lVar6);
    lVar8 = FUN_18053e2b0(lVar6);
    lVar9 = FUN_18053e2b0(lVar6);
    lVar10 = FUN_18053e2b0(lVar6);
    lVar11 = FUN_18053e2b0(lVar6);
    lVar12 = FUN_18053e2b0(lVar6);
    if (((((lVar7 != 0) && (lVar8 != 0)) && (lVar9 != 0)) && ((lVar10 != 0 && (lVar11 != 0)))) &&
       ((((lVar12 != 0 &&
          ((iVar3 = FUN_180540300(lVar11,iVar2 + -100), iVar3 != 0 &&
           (iVar3 = FUN_180540300(lVar12,iVar2), iVar3 != 0)))) &&
         (iVar3 = FUN_180585260(param_1 + 8), iVar3 != 0)) &&
        ((((iVar3 = FUN_180585260(param_1 + 0x18), iVar3 != 0 &&
           (iVar3 = FUN_180585260(param_1 + 0x10), iVar3 != 0)) &&
          (iVar3 = FUN_180585260(param_1 + 0x20), iVar3 != 0)) &&
         (((iVar3 = FUN_180585260(param_1 + 0x28), iVar3 != 0 &&
           (iVar3 = FUN_180585260(param_1 + 0x30), iVar3 != 0)) &&
          ((iVar3 = FUN_180585260(param_1 + 0x38), iVar3 != 0 &&
           ((lVar13 = FUN_18053d970(*(undefined8 *)(param_1 + 0x10),param_3), lVar13 != 0 &&
            (iVar3 = FUN_180545c30(lVar10,&DAT_180726070,DAT_180726170), iVar3 != 0)))))))))))) {
      iVar3 = (int)DAT_180726170;
      iVar4 = iVar3 * 0x40;
      iVar5 = FUN_18053daa0(lVar10);
      if (iVar4 != iVar5) {
        FID_conflict__assert
                  (u_sqrt2_bits_____int_BN_num_bits_s_18095df30,
                   u_D__a_1_s_target_x86_64_pc_window_18095de20,0x46c);
      }
      if (iVar2 < iVar4) {
        iVar3 = FUN_1805401b0(lVar10,lVar10,iVar4 - iVar2);
joined_r0x000180585926:
        if (iVar3 == 0) goto LAB_180585d10;
      }
      else if (iVar4 < iVar2) {
        iVar4 = FUN_18053e590(lVar10,1);
        if (iVar4 == 0) goto LAB_180585d10;
        iVar3 = FUN_18053fe30(lVar10,lVar10,iVar2 + iVar3 * -0x40);
        goto joined_r0x000180585926;
      }
      iVar3 = FUN_18053daa0(lVar10);
      if (iVar2 != iVar3) {
        FID_conflict__assert
                  (u_prime_bits_____int_BN_num_bits_s_18095e090,
                   u_D__a_1_s_target_x86_64_pc_window_18095df80,0x47b);
      }
      do {
        lVar13 = lVar10;
        iVar3 = FUN_1805852b0(*(undefined8 *)(param_1 + 0x20),iVar2,*(undefined8 *)(param_1 + 0x10),
                              0,lVar10,lVar11,lVar6,param_4);
        uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        if ((iVar3 == 0) || (iVar3 = FUN_180542240(param_4,3,0), iVar3 == 0)) goto LAB_180585d10;
        lVar13 = lVar10;
        iVar3 = FUN_1805852b0(*(undefined8 *)(param_1 + 0x28),iVar2,*(undefined8 *)(param_1 + 0x10),
                              *(undefined8 *)(param_1 + 0x20),lVar10,lVar11,lVar6,param_4);
        uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        if ((iVar3 == 0) || (iVar3 = FUN_180542240(param_4,3,1), iVar3 == 0)) goto LAB_180585d10;
        iVar3 = FUN_18053f880(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
        if (iVar3 < 0) {
          local_10 = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
          *(undefined8 *)(param_1 + 0x28) = local_10;
        }
        uVar14 = FUN_18053da70();
        iVar3 = FUN_1805536d0(lVar8,*(undefined8 *)(param_1 + 0x20),uVar14);
        if (iVar3 == 0) goto LAB_180585d10;
        uVar14 = FUN_18053da70();
        iVar3 = FUN_1805536d0(lVar9,*(undefined8 *)(param_1 + 0x28),uVar14);
        if ((iVar3 == 0) || (iVar3 = FUN_180554360(lVar7,lVar8,lVar9,lVar6), iVar3 == 0))
        goto LAB_180585d10;
        lVar13 = lVar6;
        iVar3 = FUN_1805548e0(*(undefined8 *)(param_1 + 0x18),local_18,
                              *(undefined8 *)(param_1 + 0x10),lVar7,lVar6);
        uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        if (iVar3 == 0) goto LAB_180585d10;
        iVar3 = FUN_18053f880(*(undefined8 *)(param_1 + 0x18),lVar12);
      } while (iVar3 < 1);
      iVar3 = FUN_18053daa0(lVar8);
      if (iVar3 != iVar2) {
        FID_conflict__assert
                  (u_BN_num_bits_pm1______unsigned_pr_18095e1f0,
                   u_D__a_1_s_target_x86_64_pc_window_18095e0e0,0x4a5);
      }
      iVar3 = FUN_18053daa0(lVar9);
      if (iVar3 != iVar2) {
        FID_conflict__assert
                  (u_BN_num_bits_qm1______unsigned_pr_18095e360,
                   u_D__a_1_s_target_x86_64_pc_window_18095e250,0x4a6);
      }
      iVar3 = FUN_180553a10(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20),
                            *(undefined8 *)(param_1 + 0x28),lVar6);
      if (iVar3 != 0) {
        uVar14 = CONCAT44(uVar15,iVar2);
        iVar3 = FUN_180553d30(0,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x18),
                              lVar8,uVar14,lVar6);
        uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
        if (iVar3 != 0) {
          uVar14 = CONCAT44(uVar15,iVar2);
          iVar2 = FUN_180553d30(0,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x18),
                                lVar9,uVar14,lVar6);
          uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
          if (iVar2 != 0) {
            FUN_180545910(*(undefined8 *)(param_1 + 8));
            uVar1 = FUN_18053daa0(*(undefined8 *)(param_1 + 8));
            if (uVar1 != param_2) {
              FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_18095e3c0,
                            CONCAT44(uVar15,0x4b4));
              goto LAB_180585d39;
            }
            iVar2 = FUN_180584250(param_1,lVar6);
            if (iVar2 != 0) {
              iVar2 = FUN_1805698b0(param_1);
              if (iVar2 == 0) {
                FUN_18050f6f0(4,0,0x7c,s_D__a_1_s_target_x86_64_pc_window_18095e450,
                              CONCAT44(uVar15,0x4c2));
                goto LAB_180585d39;
              }
              iVar16 = 1;
            }
          }
        }
      }
    }
  }
LAB_180585d10:
  if (iVar16 == 0) {
    FUN_18050f6f0(4,0,3,s_D__a_1_s_target_x86_64_pc_window_18095e4e0,CONCAT44(uVar15,0x4ca));
  }
LAB_180585d39:
  if (lVar6 != 0) {
    FUN_18053e400(lVar6);
    FUN_18053e1c0(lVar6);
  }
  return iVar16;
}


/* address=180585d70 name=FUN_180585d70 */

void FUN_180585d70(undefined8 *param_1,undefined8 *param_2)

{
  FUN_18053d880(*param_1);
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}


/* address=180585dc0 name=FUN_180585dc0 */

void FUN_180585dc0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_180543780(*param_1);
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}


/* address=180585e10 name=FUN_180585e10 */

undefined4
FUN_180585e10(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 local_20;
  longlong local_18;
  
  FUN_180533e10();
  local_20 = 0;
  local_28 = 0;
  while( true ) {
    FUN_18050f390();
    local_18 = FUN_180568b10();
    if (local_18 == 0) goto LAB_1805860c5;
    iVar1 = FUN_1805855f0(local_18,param_2,param_3,param_4);
    if (iVar1 != 0) break;
    uVar2 = FUN_18050edc0();
    FUN_180568c70(local_18);
    local_18 = 0;
    local_28 = local_28 + 1;
    if (((3 < local_28) || (iVar1 = FUN_180545880(uVar2), iVar1 != 4)) ||
       (iVar1 = FUN_1805458a0(uVar2), iVar1 != 0x8d)) break;
  }
  if ((local_18 != 0) && ((param_5 == 0 || (iVar1 = FUN_180569f70(local_18), iVar1 != 0)))) {
    FUN_180583250(param_1);
    FUN_180585d70(param_1 + 8,local_18 + 8);
    FUN_180585d70(param_1 + 0x10,local_18 + 0x10);
    FUN_180585d70(param_1 + 0x18,local_18 + 0x18);
    FUN_180585d70(param_1 + 0x20,local_18 + 0x20);
    FUN_180585d70(param_1 + 0x28,local_18 + 0x28);
    FUN_180585d70(param_1 + 0x30,local_18 + 0x30);
    FUN_180585d70(param_1 + 0x38,local_18 + 0x38);
    FUN_180585d70(param_1 + 0x40,local_18 + 0x40);
    FUN_180585dc0(param_1 + 0x60,local_18 + 0x60);
    FUN_180585dc0(param_1 + 0x68,local_18 + 0x68);
    FUN_180585dc0(param_1 + 0x70,local_18 + 0x70);
    FUN_180585d70(param_1 + 0x78,local_18 + 0x78);
    FUN_180585d70(param_1 + 0x80,local_18 + 0x80);
    FUN_180585d70(param_1 + 0x88,local_18 + 0x88);
    FUN_180585d70(param_1 + 0x90,local_18 + 0x90);
    *(uint *)(param_1 + 0xb8) =
         *(uint *)(param_1 + 0xb8) & 0xfffffffe | *(uint *)(local_18 + 0xb8) & 1;
    local_20 = 1;
  }
LAB_1805860c5:
  FUN_180568c70(local_18);
  return local_20;
}


/* address=1805860e0 name=FUN_1805860e0 */

undefined * FUN_1805860e0(void)

{
  return &DAT_180992190;
}


/* address=1805860f0 name=FUN_1805860f0 */

undefined * FUN_1805860f0(void)

{
  return &DAT_1809921e0;
}


/* address=180586100 name=FUN_180586100 */

void FUN_180586100(longlong param_1)

{
  FUN_180533b50(param_1,0,0x50);
  *(undefined *)(param_1 + 4) = 1;
  return;
}


/* address=180586150 name=FUN_180586150 */

int FUN_180586150(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
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
  FUN_180533b50(param_2,0,param_3);
  FUN_18053d4f0();
  iVar5 = 0;
  lVar2 = FUN_180532350();
  local_res8 = param_1;
  local_res20 = param_4;
  if (param_1 == lVar2) {
    uVar4 = param_5 - param_5 / 2;
    uVar3 = FUN_180532200(uVar4,param_5 % 2);
    iVar1 = FUN_1805867e0(param_2,param_3,uVar3,param_4,uVar4,param_6,param_7,param_8,param_9,
                          param_10,param_11);
    if (iVar1 == 0) goto LAB_180586336;
    local_res20 = param_4 + (param_5 - uVar4);
    local_res8 = FUN_180532230();
    param_5 = uVar4;
  }
  iVar5 = FUN_1805867e0(param_2,param_3,local_res8,local_res20,param_5,param_6,param_7,param_8,
                        param_9,param_10,param_11);
LAB_180586336:
  FUN_18053d500();
  if (iVar5 != 0) {
    FUN_18053d590(param_1);
  }
  return iVar5;
}


/* address=180586360 name=FUN_180586360 */

undefined4
FUN_180586360(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_1805905e0(local_70);
  iVar1 = FUN_180590610(local_70,param_7 + 10 + param_9);
  if (((((iVar1 != 0) && (iVar1 = FUN_180591040(local_70,param_2 & 0xffff), iVar1 != 0)) &&
       (iVar1 = FUN_180590cd0(local_70,local_40), iVar1 != 0)) &&
      ((iVar1 = FUN_180590e20(local_40,"tls13 ",6), iVar1 != 0 &&
       (iVar1 = FUN_180590e20(local_40,param_6,param_7), iVar1 != 0)))) &&
     ((iVar1 = FUN_180590cd0(local_70,local_40), iVar1 != 0 &&
      ((iVar1 = FUN_180590e20(local_40,param_8,param_9), iVar1 != 0 &&
       (iVar1 = FUN_180590740(local_70,&local_80,&local_78), iVar1 != 0)))))) {
    uVar2 = FUN_18057f970(param_1,param_2,param_3,param_4,param_5,local_80,local_78);
    FUN_18058f610(local_80);
    return uVar2;
  }
  FUN_1805906d0(local_70);
  return 0;
}


/* address=1805864f0 name=FUN_1805864f0 */

undefined8 FUN_1805864f0(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong local_res8;
  ulonglong local_18;
  
  FUN_18057fe70(FUN_1804f2dc0,param_3,param_3 + 0x28,0x40,param_3 + 0x68,
                *(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x20),1);
  if (param_2 < 0x21) {
    if (param_2 % 4 != 0) {
      FID_conflict__assert
                (u_md_len___4____0_18095e718,u_D__a_1_s_target_x86_64_pc_window_18095e610,0x94);
    }
    local_res8 = param_1;
    for (local_18 = 0; local_18 < param_2 / 4; local_18 = local_18 + 1) {
      FUN_180533c30(local_res8,*(undefined4 *)(param_3 + local_18 * 4));
      local_res8 = local_res8 + 4;
    }
    FUN_18053d4e0();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=180586610 name=FUN_180586610 */

undefined8 FUN_180586610(longlong param_1,ulonglong param_2,longlong param_3)

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
    FUN_180533b50(lVar2 + local_28,0,0x80 - local_28);
    local_28 = 0;
    FUN_1804f63c0(param_3,lVar2,1);
  }
  FUN_180533b50(lVar2 + local_28,0,0x70 - local_28);
  FUN_180533d10(param_3 + 0xc0,*(undefined8 *)(param_3 + 0x48));
  FUN_180533d10(param_3 + 200,*(undefined8 *)(param_3 + 0x40));
  FUN_1804f63c0(param_3,lVar2,1);
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_2 % 8 != 0) {
      FID_conflict__assert
                (u_md_len___8____0_18095ec68,u_D__a_1_s_target_x86_64_pc_window_18095eb60,0x10f);
    }
    local_res8 = param_1;
    for (local_18 = 0; local_18 < param_2 / 8; local_18 = local_18 + 1) {
      FUN_180533d10(local_res8,*(undefined8 *)(param_3 + local_18 * 8));
      local_res8 = local_res8 + 8;
    }
    FUN_18053d4e0();
    uVar3 = 1;
  }
  return uVar3;
}


/* address=1805867e0 name=FUN_1805867e0 */

void FUN_1805867e0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_248;
  local_204 = 0;
  local_1f8 = FUN_180532b10(param_3);
  FUN_180532e30(local_1e8);
  FUN_180532e30(local_108);
  FUN_180532e30(local_178);
  local_228 = 0;
  iVar1 = FUN_180532fd0(local_178,param_4,param_5,param_3);
  if ((((iVar1 != 0) && (iVar1 = FUN_1805334e0(local_1e8,local_178), iVar1 != 0)) &&
      (iVar1 = FUN_180533330(local_1e8,param_6,param_7), iVar1 != 0)) &&
     ((iVar1 = FUN_180533330(local_1e8,param_8,param_9), iVar1 != 0 &&
      (iVar1 = FUN_180533330(local_1e8,param_10,param_11), iVar1 != 0)))) {
    iVar1 = FUN_180533370(local_1e8,local_98,&local_208);
    while( true ) {
      if ((((iVar1 == 0) || (iVar1 = FUN_1805334e0(local_1e8,local_178), iVar1 == 0)) ||
          ((iVar1 = FUN_180533330(local_1e8,local_98,local_208), iVar1 == 0 ||
           ((((local_1f8 < param_2 && (iVar1 = FUN_1805334e0(local_108,local_1e8), iVar1 == 0)) ||
             (iVar1 = FUN_180533330(local_1e8,param_6,param_7), iVar1 == 0)) ||
            ((iVar1 = FUN_180533330(local_1e8,param_8,param_9), iVar1 == 0 ||
             (iVar1 = FUN_180533330(local_1e8,param_10,param_11), iVar1 == 0)))))))) ||
         (iVar1 = FUN_180533370(local_1e8,local_58,local_200), iVar1 == 0)) goto LAB_180586b09;
      local_210 = (ulonglong)local_200[0];
      if (local_210 != local_1f8) {
        FID_conflict__assert
                  (u_len____chunk_18095ed90,u_D__a_1_s_target_x86_64_pc_window_18095ec90,0x6d);
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
      iVar1 = FUN_180533370(local_108,local_98,&local_208);
    }
    local_204 = 1;
  }
LAB_180586b09:
  FUN_18058f7b0(local_98,0x40);
  FUN_180532ed0(local_1e8);
  FUN_180532ed0(local_108);
  FUN_180532ed0(local_178);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_248);
  return;
}


/* address=180586ca0 name=FUN_180586ca0 */

void FUN_180586ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180587360(param_1,param_2,0,param_3);
  return;
}


/* address=180586d90 name=FUN_180586d90 */

void FUN_180586d90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_18059e7c0(param_1);
  uVar2 = FUN_18059e7a0(param_1);
  FUN_180586ca0(uVar2,uVar1,param_2);
  return;
}


/* address=180586e20 name=FUN_180586e20 */

void FUN_180586e20(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      iVar2 = FUN_18059b000(param_1 + 3);
      if (iVar2 != 0) {
        FUN_180587320(param_1);
      }
    }
    else {
      FUN_18059e230(puVar1 + 1);
      iVar2 = FUN_18059b000(param_1 + 3);
      if (iVar2 == 0) {
        FUN_18059e270(*param_1 + 8);
      }
      else {
        plVar3 = (longlong *)FUN_180587140(*puVar1,param_1);
        if ((plVar3 == param_1) &&
           (plVar3 = (longlong *)FUN_1805871f0(*puVar1,param_1), plVar3 != param_1)) {
          FID_conflict__assert
                    (u_found____buf_18095f220,u_D__a_1_s_target_x86_64_pc_window_18095f130,0xeb);
        }
        FUN_18059e270(*param_1 + 8);
        FUN_180587320(param_1);
      }
    }
  }
  return;
}


/* address=180586f40 name=FUN_180586f40 */

undefined8 FUN_180586f40(longlong param_1)

{
  FUN_18059afb0(param_1 + 0x18);
  return 1;
}


/* address=180586f70 name=FUN_180586f70 */

undefined8 FUN_180586f70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=180586f90 name=FUN_180586f90 */

undefined8 FUN_180586f90(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=180586fb0 name=FUN_180586fb0 */

void FUN_180586fb0(longlong param_1,undefined8 param_2)

{
  FUN_18059e730(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


/* address=180586ff0 name=FUN_180586ff0 */

int FUN_180586ff0(void *param_1,void *param_2,size_t param_3)

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


/* address=180587030 name=FUN_180587030 */

undefined8 FUN_180587030(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805870d0 name=FUN_1805870d0 */

void FUN_1805870d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1805bb190(param_1,param_2);
  return;
}


/* address=180587100 name=FUN_180587100 */

void FUN_180587100(undefined8 param_1)

{
  FUN_1805bb270(param_1);
  return;
}


/* address=180587120 name=FUN_180587120 */

void FUN_180587120(undefined8 param_1)

{
  FUN_1805bb320(param_1);
  return;
}


/* address=180587140 name=FUN_180587140 */

void FUN_180587140(undefined8 param_1,undefined8 param_2)

{
  FUN_1805bb340(param_1,param_2,&LAB_1805870a0,&LAB_180587070);
  return;
}


/* address=180587180 name=FUN_180587180 */

undefined4 FUN_180587180(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_1805bb430(param_1,local_10,param_3,&LAB_1805870a0,&LAB_180587070);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=1805871f0 name=FUN_1805871f0 */

void FUN_1805871f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1805bb530(param_1,param_2,&LAB_1805870a0,&LAB_180587070);
  return;
}


/* address=180587320 name=FUN_180587320 */

void FUN_180587320(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_18058f610(*(undefined8 *)(param_1 + 8));
  }
  FUN_18058f610(param_1);
  return;
}


/* address=180587360 name=FUN_180587360 */

undefined8 * FUN_180587360(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

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
    FUN_18059e210(param_4 + 1);
    local_48 = (undefined8 *)FUN_180587140(*param_4,&local_30);
    if (((param_3 != 0) && (local_48 != (undefined8 *)0x0)) &&
       (*(int *)((longlong)local_48 + 0x1c) == 0)) {
      local_48 = (undefined8 *)0x0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_18059afb0(local_48 + 3);
    }
    FUN_18059e250(param_4 + 1);
    if (local_48 != (undefined8 *)0x0) {
      return local_48;
    }
  }
  puVar1 = (undefined8 *)FUN_18058f4e0(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_180587030(puVar1,0,0x20);
    if (param_3 == 0) {
      uVar2 = FUN_18058ffb0(param_1,param_2);
      puVar1[1] = uVar2;
      if ((param_2 != 0) && (puVar1[1] == 0)) {
        FUN_18058f610(puVar1);
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
      FUN_18059e230(param_4 + 1);
      local_40 = (undefined8 *)FUN_180587140(*param_4,puVar1);
      if (((param_3 != 0) && (local_40 != (undefined8 *)0x0)) &&
         (*(int *)((longlong)local_40 + 0x1c) == 0)) {
        local_40 = (undefined8 *)0x0;
      }
      local_58 = 0;
      if (local_40 == (undefined8 *)0x0) {
        local_38 = 0;
        local_58 = FUN_180587180(*param_4,&local_38,puVar1);
      }
      else {
        FUN_18059afb0(local_40 + 3);
      }
      FUN_18059e270(param_4 + 1);
      if (local_58 == 0) {
        FUN_180587320(puVar1);
        puVar1 = local_40;
      }
    }
  }
  return puVar1;
}


/* address=180587600 name=FUN_180587600 */

undefined8 FUN_180587600(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    FUN_18050f6f0(6,0,0x43,s_D__a_1_s_target_x86_64_pc_window_18095f240,0x75);
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar1 == 0) {
      FUN_18050f6f0(6,0,0x80,s_D__a_1_s_target_x86_64_pc_window_18095f2c0,0x7b);
      FUN_18050f860(s_algorithm__d_18095f338,**(undefined4 **)(param_1 + 0x10));
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_180588820(param_1,param_2,lVar1);
    }
  }
  return uVar2;
}


/* address=180587740 name=FUN_180587740 */

void FUN_180587740(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x18) != 0)) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    FUN_18050d980(param_1[2]);
    FUN_18050d980(param_1[3]);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=180587900 name=FUN_180587900 */

undefined8 FUN_180587900(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=180587920 name=FUN_180587920 */

undefined8 FUN_180587920(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
     ((*(longlong *)(*param_1 + 0x28) == 0 && (*(longlong *)(*param_1 + 0x30) == 0)))) {
    FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_18095f660,0xdb);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 8;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=1805879a0 name=FUN_1805879a0 */

undefined8
FUN_1805879a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x28) == 0)) {
    FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_18095f6e0,0xe6);
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 8) {
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_18050f6f0(6,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_18095f760,0xea);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=180587a70 name=FUN_180587a70 */

undefined8 FUN_180587a70(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
     ((*(longlong *)(*param_1 + 0x38) == 0 && (*(longlong *)(*param_1 + 0x40) == 0)))) {
    FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_18095f7e0,0xf3);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x10;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=180587af0 name=FUN_180587af0 */

undefined8
FUN_180587af0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x38) == 0)) {
    FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_18095f860,0xfd);
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 0x10) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_18050f6f0(6,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_18095f8e0,0x101);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=180588640 name=FUN_180588640 */

undefined8 FUN_180588640(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180588680 name=FUN_180588680 */

undefined8
FUN_180588680(int **param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  
  if (((param_1 == (int **)0x0) || (*param_1 == (int *)0x0)) ||
     (*(longlong *)(*param_1 + 0x1c) == 0)) {
    FUN_18050f6f0(6,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18095f460,0xc3);
    uVar1 = 0;
  }
  else if ((param_2 == -1) || (**param_1 == param_2)) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_18050f6f0(6,0,0x7b,s_D__a_1_s_target_x86_64_pc_window_18095f560,0xcc);
      uVar1 = 0;
    }
    else if ((param_3 == 0xffffffff) || ((*(uint *)(param_1 + 4) & param_3) != 0)) {
      uVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_4,param_5,param_6);
    }
    else {
      FUN_18050f6f0(6,0,0x72,s_D__a_1_s_target_x86_64_pc_window_18095f5e0,0xd1);
      uVar1 = 0;
    }
  }
  else {
    FUN_18050f6f0(6,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_18095f4e0,199);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=1805887c0 name=FUN_1805887c0 */

undefined * FUN_1805887c0(int param_1)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (4 < local_18) {
      return (undefined *)0x0;
    }
    if (*(int *)(&PTR_DAT_18074d198)[local_18] == param_1) break;
    local_18 = local_18 + 1;
  }
  return (&PTR_DAT_18074d198)[local_18];
}


/* address=180588820 name=FUN_180588820 */

longlong * FUN_180588820(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18058f4e0(0x30);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_180588640(plVar2,0,0x30);
    plVar2[1] = param_2;
    *plVar2 = param_3;
    *(undefined4 *)(plVar2 + 4) = 0;
    if (param_1 != 0) {
      FUN_18050d9d0(param_1);
      plVar2[2] = param_1;
    }
    if ((*(longlong *)(param_3 + 8) != 0) && (iVar1 = (**(code **)(param_3 + 8))(plVar2), iVar1 < 1)
       ) {
      FUN_18050d980(plVar2[2]);
      FUN_18058f610(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}


/* address=1805888f0 name=FUN_1805888f0 */

longlong FUN_1805888f0(wchar_t *param_1)

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
     (lVar3 = FUN_18059e7c0(local_38), lVar3 != 0)) {
    FUN_18050f6f0(6,0,0x66,s_D__a_1_s_target_x86_64_pc_window_1809605e0,0x6b);
  }
  else {
    iVar2 = FUN_180589670(local_18,&local_44);
    if (iVar2 == 0) {
      FUN_18050f6f0(6,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180960660,0x6f);
    }
    else {
      iVar2 = FUN_18059e9c0(local_28,local_48);
      if ((iVar2 == 0) || (local_48[0] != '\0')) {
        FUN_18050f6f0(6,0,0x66,s_D__a_1_s_target_x86_64_pc_window_1809606e0,0x76);
      }
      else {
        local_40 = FUN_18050d920();
        if ((local_40 != 0) && (iVar2 = FUN_18050e100(local_40,local_44), iVar2 != 0)) {
          if (*(longlong *)(*(longlong *)(local_40 + 0x10) + 0x18) == 0) {
            FUN_18050f6f0(6,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180960760,0x83);
          }
          else {
            iVar2 = (**(code **)(*(longlong *)(local_40 + 0x10) + 0x18))(local_40,local_18,local_28)
            ;
            if (iVar2 != 0) {
              return local_40;
            }
          }
        }
        FUN_18050d980(local_40);
      }
    }
  }
  return 0;
}


/* address=180588aa0 name=FUN_180588aa0 */

undefined8 FUN_180588aa0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20) == 0)) {
    FUN_18050f6f0(6,0,0x80,s_D__a_1_s_target_x86_64_pc_window_1809607e0,0x93);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x20))(param_1,param_2);
  }
  return uVar1;
}


/* address=180588b10 name=FUN_180588b10 */

longlong FUN_180588b10(wchar_t *param_1)

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
  if ((((uVar1 == 0) || (iVar2 = FUN_18059f1b0(local_40,&local_48), iVar2 == 0)) || (local_48 != 0))
     || ((uVar1 = wcstoul((wchar_t *)local_40,local_30,0x20000010), uVar1 == 0 ||
         (uVar1 = wcstoul((wchar_t *)local_40,local_20,4), uVar1 == 0)))) {
    FUN_18050f6f0(6,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180960860,0xa4);
  }
  else {
    iVar2 = FUN_180589670(local_30,local_58);
    if (iVar2 == 0) {
      FUN_18050f6f0(6,0,0x80,s_D__a_1_s_target_x86_64_pc_window_1809608e0,0xa8);
    }
    else {
      local_50 = FUN_18050d920();
      if ((local_50 != 0) && (iVar2 = FUN_18050e100(local_50,local_58[0]), iVar2 != 0)) {
        if (*(longlong *)(*(longlong *)(local_50 + 0x10) + 0x30) == 0) {
          FUN_18050f6f0(6,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180960960,0xb7);
        }
        else {
          iVar2 = (**(code **)(*(longlong *)(local_50 + 0x10) + 0x30))(local_50,local_30,local_20);
          if (iVar2 != 0) {
            return local_50;
          }
        }
      }
      FUN_18050d980(local_50);
    }
  }
  return 0;
}


/* address=180588c90 name=FUN_180588c90 */

undefined8 FUN_180588c90(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38) == 0)) {
    FUN_18050f6f0(6,0,0x80,s_D__a_1_s_target_x86_64_pc_window_1809609e0,199);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x38))(param_1,param_2);
  }
  return uVar1;
}


/* address=180588db0 name=FUN_180588db0 */

longlong FUN_180588db0(int param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  longlong local_28;
  undefined local_20 [32];
  
  if (param_4 < 0) {
    FUN_18050f6f0(6,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180960ae0,0xfa);
    return 0;
  }
  FUN_18059e730(local_20,*param_3,(longlong)param_4);
  local_28 = FUN_180589760(local_20,param_1);
  if (local_28 == 0) {
    FUN_18050f390();
    FUN_18059e730(local_20,*param_3,(longlong)param_4);
    local_28 = FUN_180588b10(local_20);
    if (local_28 == 0) {
      return 0;
    }
    if (*(int *)(local_28 + 4) != param_1) {
      FUN_18050f6f0(6,0,0x67,s_D__a_1_s_target_x86_64_pc_window_180960b60,0x10b);
      FUN_18050d980(local_28);
      return 0;
    }
  }
  if (param_2 != (longlong *)0x0) {
    FUN_18050d980(*param_2);
    *param_2 = local_28;
  }
  uVar1 = FUN_18059e7a0(local_20);
  *param_3 = uVar1;
  return local_28;
}


/* address=180588ef0 name=FUN_180588ef0 */

longlong FUN_180588ef0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    FUN_18050f6f0(6,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180960be0,0x131);
    lVar1 = 0;
  }
  else {
    FUN_18059e730(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_180588b10(local_18);
    if (lVar1 == 0) {
      FUN_18050f390();
      lVar1 = FUN_1805898b0(*param_2,(longlong)param_3);
      if (lVar1 == 4) {
        lVar1 = FUN_180588db0(0x198,param_1,param_2,param_3);
      }
      else if (lVar1 == 6) {
        lVar1 = FUN_180588db0(0x74,param_1,param_2,param_3);
      }
      else {
        lVar1 = FUN_180588db0(6,param_1,param_2,param_3);
      }
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_18050d980(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_18059e7a0(local_18);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=180589160 name=FUN_180589160 */

undefined8 FUN_180589160(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_180590610(local_38,0x80);
    if ((iVar1 != 0) && (iVar1 = FUN_180588aa0(local_38,param_1), iVar1 != 0)) {
      uVar2 = FUN_1805ad270(local_38,param_2);
      return uVar2;
    }
    FUN_1805906d0(local_38);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* address=1805891d0 name=FUN_1805891d0 */

longlong FUN_1805891d0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_18059e730(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_1805888f0(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_18050d980(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_18059e7a0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=180589270 name=FUN_180589270 */

undefined4 FUN_180589270(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0xffffffff;
    lVar2 = FUN_18050d920();
    if ((lVar2 != 0) && (iVar1 = FUN_18050dda0(lVar2,param_1), iVar1 != 0)) {
      local_18 = FUN_180589160(lVar2,param_2);
    }
    FUN_18050d980(lVar2);
  }
  return local_18;
}


/* address=1805892f0 name=FUN_1805892f0 */

longlong FUN_1805892f0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    lVar2 = 0;
  }
  else {
    FUN_18059e730(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_1805888f0(local_18);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18050de60(lVar1);
      FUN_18050d980(lVar1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_180568c70(*param_1);
          *param_1 = lVar2;
        }
        uVar3 = FUN_18059e7a0(local_18);
        *param_2 = uVar3;
      }
    }
  }
  return lVar2;
}


/* address=1805893b0 name=FUN_1805893b0 */

undefined4 FUN_1805893b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0xffffffff;
    lVar2 = FUN_18050d920();
    if ((lVar2 != 0) && (iVar1 = FUN_18050dea0(lVar2,param_1), iVar1 != 0)) {
      local_18 = FUN_180589160(lVar2,param_2);
    }
    FUN_18050d980(lVar2);
  }
  return local_18;
}


/* address=180589430 name=FUN_180589430 */

longlong FUN_180589430(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    lVar2 = 0;
  }
  else {
    FUN_18059e730(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_1805888f0(local_18);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18050df60(lVar1);
      FUN_18050d980(lVar1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_180598c60(*param_1);
          *param_1 = lVar2;
        }
        uVar3 = FUN_18059e7a0(local_18);
        *param_2 = uVar3;
      }
    }
  }
  return lVar2;
}


/* address=1805894f0 name=FUN_1805894f0 */

undefined4 FUN_1805894f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0xffffffff;
    lVar2 = FUN_18050d920();
    if ((lVar2 != 0) && (iVar1 = FUN_18050dfa0(lVar2,param_1), iVar1 != 0)) {
      local_18 = FUN_180589160(lVar2,param_2);
    }
    FUN_18050d980(lVar2);
  }
  return local_18;
}


/* address=180589570 name=FUN_180589570 */

longlong FUN_180589570(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    lVar2 = 0;
  }
  else {
    FUN_18059e730(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_1805888f0(local_18);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_18050e060(lVar1);
      FUN_18050d980(lVar1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_18056d5a0(*param_1);
          *param_1 = lVar2;
        }
        uVar3 = FUN_18059e7a0(local_18);
        *param_2 = uVar3;
      }
    }
  }
  return lVar2;
}


/* address=180589630 name=FUN_180589630 */

int FUN_180589630(void *param_1,void *param_2,size_t param_3)

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


/* address=180589670 name=FUN_180589670 */

undefined8 FUN_180589670(wchar_t *param_1,undefined4 *param_2)

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
      puVar2 = (undefined4 *)(&PTR_DAT_18074d1c0)[local_38];
      uVar5 = FUN_18059e7c0(local_18);
      if (uVar5 == *(byte *)((longlong)puVar2 + 0xd)) {
        uVar1 = *(undefined *)((longlong)puVar2 + 0xd);
        uVar6 = FUN_18059e7a0(local_18);
        iVar4 = FUN_180589630(uVar6,puVar2 + 1,uVar1);
        if (iVar4 == 0) {
          *param_2 = *puVar2;
          return 1;
        }
      }
    }
  }
  return 0;
}


/* address=180589760 name=FUN_180589760 */

longlong FUN_180589760(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_18050d920();
  if (lVar2 != 0) {
    if (param_2 == 6) {
      lVar3 = FUN_180594490(param_1);
      if ((lVar3 != 0) && (iVar1 = FUN_18050dde0(lVar2,lVar3), iVar1 != 0)) {
        return lVar2;
      }
      FUN_180568c70(lVar3);
    }
    else if (param_2 == 0x74) {
      lVar3 = FUN_180593480(param_1);
      if ((lVar3 != 0) && (iVar1 = FUN_18050dee0(lVar2,lVar3), iVar1 != 0)) {
        return lVar2;
      }
      FUN_180598c60(lVar3);
    }
    else if (param_2 == 0x198) {
      lVar3 = FUN_18058df30(param_1,0);
      if ((lVar3 != 0) && (iVar1 = FUN_18050dfe0(lVar2,lVar3), iVar1 != 0)) {
        return lVar2;
      }
      FUN_18056d5a0(lVar3);
    }
    else {
      FUN_18050f6f0(6,0,0x7f,s_D__a_1_s_target_x86_64_pc_window_180960a60,0xee);
    }
    FUN_18050d980(lVar2);
  }
  return 0;
}


/* address=1805898b0 name=FUN_1805898b0 */

longlong FUN_1805898b0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong local_38;
  wchar_t *local_30 [2];
  wchar_t local_20 [16];
  
  FUN_18059e730(local_20,param_1,param_2);
  uVar1 = wcstoul(local_20,local_30,0x20000010);
  if (uVar1 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = 0;
    while (lVar2 = FUN_18059e7c0(local_30), lVar2 != 0) {
      pvVar3 = _aligned_recalloc(local_30,0,0,0);
      if ((int)pvVar3 == 0) {
        return 0;
      }
      local_38 = local_38 + 1;
    }
  }
  return local_38;
}


/* address=180589940 name=FUN_180589940 */

undefined * FUN_180589940(void)

{
  return &DAT_18074d1f0;
}


/* address=180589b90 name=FUN_180589b90 */

undefined8 FUN_180589b90(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180691ca0(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=180589bd0 name=FUN_180589bd0 */

undefined8 FUN_180589bd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180589c20 name=FUN_180589c20 */

undefined8 FUN_180589c20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180589c70 name=FUN_180589c70 */

undefined8 FUN_180589c70(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180589d20 name=FUN_180589d20 */

undefined8 FUN_180589d20(longlong param_1)

{
  longlong lVar1;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 8) != 0)) &&
     (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if ((*(uint *)(param_1 + 0x10) & 0x200) != 0) {
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    FUN_1805a7210(lVar1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return 1;
}


/* address=180589db0 name=FUN_180589db0 */

int FUN_180589db0(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  int local_18;
  
  FUN_18058cdf0(param_1);
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
        FUN_18058cd90(param_1);
      }
    }
    else {
      FUN_180589bd0(param_2,puVar1[1],(longlong)local_18);
      *puVar1 = *puVar1 - (longlong)local_18;
      if ((*(uint *)(param_1 + 0x10) & 0x200) == 0) {
        FUN_180589c20(puVar1[1],puVar1[1] + (longlong)local_18,*puVar1);
      }
      else {
        puVar1[1] = (longlong)local_18 + puVar1[1];
      }
    }
  }
  return local_18;
}


/* address=18058a5a0 name=FUN_18058a5a0 */

void FUN_18058a5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_18060c630(&LAB_18058bbe0,s_X509_CRL_180960ef8,param_1,param_2,param_3,param_4);
  return;
}


/* address=18058b920 name=FUN_18058b920 */

longlong FUN_18058b920(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18050de60(param_1);
    FUN_18050d980(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_180568c70(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=18058b9a0 name=FUN_18058b9a0 */

longlong FUN_18058b9a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18050df60(param_1);
    FUN_18050d980(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_180598c60(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=18058ba20 name=FUN_18058ba20 */

longlong FUN_18058ba20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18050e060(param_1);
    FUN_18050d980(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_18056d5a0(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=18058c4e0 name=FUN_18058c4e0 */

longlong * FUN_18058c4e0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_18058f4e0(0x40);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_18058dab0(plVar2,0,0x40);
    *plVar2 = param_1;
    *(undefined4 *)((longlong)plVar2 + 0xc) = 1;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 1;
    if ((*(longlong *)(param_1 + 0x38) != 0) &&
       (iVar1 = (**(code **)(param_1 + 0x38))(plVar2), iVar1 == 0)) {
      FUN_18058f610(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}


/* address=18058c580 name=FUN_18058c580 */

undefined8 FUN_18058c580(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_res8;
  
  local_res8 = param_1;
  while( true ) {
    if (local_res8 == (longlong *)0x0) {
      return 1;
    }
    iVar1 = FUN_18059b000((longlong)local_res8 + 0x1c);
    if (iVar1 == 0) break;
    plVar2 = (longlong *)FUN_18058d090(local_res8);
    if ((*local_res8 != 0) && (*(longlong *)(*local_res8 + 0x40) != 0)) {
      (**(code **)(*local_res8 + 0x40))(local_res8);
    }
    FUN_18058f610(local_res8);
    local_res8 = plVar2;
  }
  return 0;
}


/* address=18058c630 name=FUN_18058c630 */

undefined8 FUN_18058c630(longlong param_1)

{
  FUN_18059afb0(param_1 + 0x1c);
  return 1;
}


/* address=18058c660 name=FUN_18058c660 */

int FUN_18058c660(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x18) == 0)) {
    FUN_18050f6f0(0x11,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180961180,0x7d);
    iVar1 = -2;
  }
  else if (*(int *)(param_1 + 1) == 0) {
    FUN_18050f6f0(0x11,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180961200,0x81);
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


/* address=18058c750 name=FUN_18058c750 */

int FUN_18058c750(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x28) == 0)) {
    FUN_18050f6f0(0x11,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180961280,0x90);
    iVar1 = -2;
  }
  else if (*(int *)(param_1 + 1) == 0) {
    FUN_18050f6f0(0x11,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180961300,0x94);
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


/* address=18058c840 name=FUN_18058c840 */

int FUN_18058c840(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    FUN_18050f6f0(0x11,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180961380,0xa3);
    iVar1 = -2;
  }
  else if (*(int *)(param_1 + 1) == 0) {
    FUN_18050f6f0(0x11,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180961400,0xa7);
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


/* address=18058c930 name=FUN_18058c930 */

undefined8 FUN_18058c930(undefined8 param_1,longlong param_2,ulonglong param_3)

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
    iVar1 = FUN_18058c840(param_1,local_10,local_14);
    if (iVar1 < 1) break;
    local_10 = local_10 + iVar1;
    local_res18 = local_res18 - (longlong)iVar1;
  }
  return 0;
}


/* address=18058c9e0 name=FUN_18058c9e0 */

undefined8 FUN_18058c9e0(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_2);
  if (sVar1 < 0x80000000) {
    uVar2 = FUN_18058c840(param_1,param_2,sVar1 & 0xffffffff);
  }
  else {
    FUN_18050f6f0(0x11,0,0x45,s_D__a_1_s_target_x86_64_pc_window_180961480,0xc5);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* address=18058ca50 name=FUN_18058ca50 */

void FUN_18058ca50(undefined8 param_1)

{
  FUN_18058ca80(param_1,0xb,0,0);
  return;
}


/* address=18058ca80 name=FUN_18058ca80 */

undefined8 FUN_18058ca80(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x30) == 0)) {
    FUN_18050f6f0(0x11,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180961500,0xd5);
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}


/* address=18058cb60 name=FUN_18058cb60 */

void FUN_18058cb60(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_18 [6];
  
  local_18[0] = param_4;
  FUN_18058ca80(param_1,param_2,param_3,local_18);
  return;
}


/* address=18058cc10 name=FUN_18058cc10 */

void FUN_18058cc10(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2;
  return;
}


/* address=18058cc40 name=FUN_18058cc40 */

uint FUN_18058cc40(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x10) & param_2;
}


/* address=18058cc60 name=FUN_18058cc60 */

void FUN_18058cc60(undefined8 param_1)

{
  FUN_18058cc40(param_1,1);
  return;
}


/* address=18058cc90 name=FUN_18058cc90 */

void FUN_18058cc90(undefined8 param_1)

{
  FUN_18058cc40(param_1,2);
  return;
}


/* address=18058ccf0 name=FUN_18058ccf0 */

void FUN_18058ccf0(undefined8 param_1)

{
  FUN_18058cc40(param_1,4);
  return;
}


/* address=18058cd20 name=FUN_18058cd20 */

undefined4 FUN_18058cd20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


/* address=18058cd90 name=FUN_18058cd90 */

void FUN_18058cd90(longlong param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 9;
  return;
}


/* address=18058cdb0 name=FUN_18058cdb0 */

void FUN_18058cdb0(longlong param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 10;
  return;
}


/* address=18058cdd0 name=FUN_18058cdd0 */

uint FUN_18058cdd0(longlong param_1)

{
  return *(uint *)(param_1 + 0x10) & DAT_18074d240;
}


/* address=18058cdf0 name=FUN_18058cdf0 */

void FUN_18058cdf0(longlong param_1)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~DAT_18074d240;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


/* address=18058ce30 name=FUN_18058ce30 */

undefined4 FUN_18058ce30(undefined8 *param_1)

{
  return *(undefined4 *)*param_1;
}


/* address=18058cee0 name=FUN_18058cee0 */

longlong FUN_18058cee0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18058ca80(param_1,10,0,0);
  if (iVar1 < 0) {
    FID_conflict__assert(u_r_>__0_1809616e8,u_D__a_1_s_target_x86_64_pc_window_180961600,0x13e);
  }
  if (iVar1 < 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)iVar1;
  }
  return lVar2;
}


/* address=18058d090 name=FUN_18058d090 */

undefined8 FUN_18058d090(longlong param_1)

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


/* address=18058d120 name=FUN_18058d120 */

uint ** FUN_18058d120(uint **param_1,uint param_2)

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


/* address=18058d200 name=FUN_18058d200 */

undefined8 FUN_18058d200(undefined8 param_1,uint param_2,uint param_3)

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
    iVar1 = FUN_18058c9e0(param_1,&DAT_1809611f4);
    local_res10 = local_res10 - 1;
  } while (iVar1 == 1);
  return 0;
}


/* address=18058d270 name=FUN_18058d270 */

void FUN_18058d270(undefined8 param_1)

{
  FUN_18050f240(&LAB_18058daf0,param_1);
  return;
}


/* address=18058d2a0 name=FUN_18058d2a0 */

void FUN_18058d2a0(undefined8 param_1,longlong *param_2,ulonglong *param_3,ulonglong param_4)

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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_78;
  iVar1 = FUN_18058dd70(param_1,local_1c,&local_20,DAT_18074d250);
  if (iVar1 == 0) {
    if (local_20 == 0) {
      local_58 = CONCAT44(local_58._4_4_,0x21a);
      FUN_18050f6f0(0xc,0,0xa2,s_D__a_1_s_target_x86_64_pc_window_180961880);
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,0x218);
      FUN_18050f6f0(0xc,0,0x7b,s_D__a_1_s_target_x86_64_pc_window_180961800);
    }
  }
  else {
    local_47 = local_1c[0];
    local_48 = local_1c[1];
    if ((local_1c[0] & 0x1f) == 0x1f) {
      local_58 = CONCAT44(local_58._4_4_,0x224);
      FUN_18050f6f0(0xc,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180961900);
    }
    else {
      if ((local_1c[1] & 0x80) == 0) {
        local_40 = (ulonglong)local_1c[1];
        local_28 = DAT_18074d250;
      }
      else {
        local_30 = (ulonglong)(int)(local_1c[1] & 0x7f);
        if (((local_1c[0] & 0x20) != 0) && (local_30 == 0)) {
          local_58 = DAT_18074d250;
          local_50 = param_4;
          iVar1 = FUN_18058db30(param_1,param_2,param_3,local_1c);
          if (iVar1 == 0) {
            local_58 = CONCAT44(local_58._4_4_,0x234);
            FUN_18050f6f0(0xc,0,0xa2,s_D__a_1_s_target_x86_64_pc_window_180961980);
          }
          goto LAB_18058d706;
        }
        if ((local_30 == 0) || (4 < local_30)) {
          local_58 = CONCAT44(local_58._4_4_,0x23b);
          FUN_18050f6f0(0xc,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180961a00);
          goto LAB_18058d706;
        }
        iVar1 = FUN_18058dd70(param_1,local_1c + DAT_18074d250,0,local_30);
        if (iVar1 == 0) {
          local_58 = CONCAT44(local_58._4_4_,0x240);
          FUN_18050f6f0(0xc,0,0xa2,s_D__a_1_s_target_x86_64_pc_window_180961a80);
          goto LAB_18058d706;
        }
        local_28 = DAT_18074d250 + local_30;
        local_44 = 0;
        for (local_38 = 0; local_38 < local_30; local_38 = local_38 + 1) {
          local_44 = local_44 << 8 | (uint)local_1c[DAT_18074d250 + (ulonglong)local_38];
        }
        if (local_44 < 0x80) {
          local_58 = CONCAT44(local_58._4_4_,0x24d);
          FUN_18050f6f0(0xc,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180961b00);
          goto LAB_18058d706;
        }
        if (local_44 >> ((char)local_30 * '\b' - 8U & 0x1f) == 0) {
          local_58 = CONCAT44(local_58._4_4_,0x253);
          FUN_18050f6f0(0xc,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180961b80);
          goto LAB_18058d706;
        }
        local_40 = (ulonglong)local_44;
      }
      if (((local_40 + local_28 < local_40) || (param_4 < local_40 + local_28)) ||
         (0x7fffffff < local_40)) {
        local_58 = CONCAT44(local_58._4_4_,0x25d);
        FUN_18050f6f0(0xc,0,0xb1,s_D__a_1_s_target_x86_64_pc_window_180961c00);
      }
      else {
        local_40 = local_40 + local_28;
        *param_3 = local_40;
        lVar2 = FUN_18058f4e0(local_40);
        *param_2 = lVar2;
        if (*param_2 != 0) {
          FUN_18058da60(*param_2,local_1c,local_28);
          iVar1 = FUN_18058dd70(param_1,*param_2 + local_28,0,local_40 - local_28);
          if (iVar1 == 0) {
            local_58 = CONCAT44(local_58._4_4_,0x269);
            FUN_18050f6f0(0xc,0,0xa2,s_D__a_1_s_target_x86_64_pc_window_180961c80);
            FUN_18058f610(*param_2);
          }
        }
      }
    }
  }
LAB_18058d706:
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_78);
  return;
}


/* address=18058da60 name=FUN_18058da60 */

undefined8 FUN_18058da60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18058dab0 name=FUN_18058dab0 */

undefined8 FUN_18058dab0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18058db30 name=FUN_18058db30 */

undefined8
FUN_18058db30(undefined8 param_1,longlong *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong param_5,ulonglong param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_30 = param_5 + DAT_18074d248;
  if (param_6 < local_30) {
    local_30 = param_6;
  }
  if (param_5 <= local_30) {
    lVar2 = FUN_18058f4e0(local_30);
    *param_2 = lVar2;
    if (*param_2 != 0) {
      FUN_18058da60(*param_2,param_4,param_5);
      local_28 = param_5;
      while (local_28 != local_30) {
        local_20 = local_30 - local_28;
        if (0x7fffffff < local_20) {
          local_20 = 0x7fffffff;
        }
        iVar1 = FUN_18058c660(param_1,*param_2 + local_28,local_20 & 0xffffffff);
        if (iVar1 == 0) {
          *param_3 = local_28;
          return 1;
        }
        if (iVar1 == -1) {
          FUN_18058f610(*param_2);
          return 0;
        }
        local_28 = local_28 + (longlong)iVar1;
        if ((local_30 < param_6) && (local_30 - local_28 < DAT_18074d248 / 2)) {
          local_30 = local_30 + DAT_18074d248;
          if ((local_30 < DAT_18074d248) || (param_6 < local_30)) {
            local_30 = param_6;
          }
          lVar2 = FUN_18058f6c0(*param_2,local_30);
          if (lVar2 == 0) {
            FUN_18058f610(*param_2);
            return 0;
          }
          *param_2 = lVar2;
        }
      }
      FUN_18058f610(*param_2);
    }
  }
  return 0;
}


/* address=18058dd70 name=FUN_18058dd70 */

undefined8 FUN_18058dd70(undefined8 param_1,longlong param_2,undefined4 *param_3,ulonglong param_4)

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
    iVar2 = FUN_18058c660(param_1,local_res10,local_24);
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


/* address=18058de60 name=FUN_18058de60 */

undefined4
FUN_18058de60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_28;
  undefined8 local_18 [3];
  
  lVar2 = FUN_18056c450(param_2,param_3,param_4,0,0,param_5);
  if (lVar2 == 0) {
    local_28 = 0;
  }
  else {
    iVar1 = FUN_180590ed0(param_1,local_18,lVar2);
    if ((iVar1 == 0) ||
       (lVar3 = FUN_18056c450(param_2,param_3,param_4,local_18[0],lVar2,param_5), lVar3 != lVar2)) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
  }
  return local_28;
}


/* address=18058df30 name=FUN_18058df30 */

longlong FUN_18058df30(wchar_t *param_1,longlong param_2)

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
  if ((((uVar1 == 0) || (iVar2 = FUN_18059f1b0(local_78,&local_58), iVar2 == 0)) || (local_58 != 1))
     || (uVar1 = wcstoul((wchar_t *)local_78,local_30,4), uVar1 == 0)) {
    FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180961d00,0x52);
    return 0;
  }
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  iVar2 = FUN_18059efe0(local_78,DAT_18074d258);
  local_res10 = param_2;
  if (iVar2 != 0) {
    uVar1 = wcstoul((wchar_t *)local_78,local_40,DAT_18074d258);
    if (uVar1 == 0) {
      FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180961d80,0x61);
      goto LAB_18058e38f;
    }
    local_res10 = FUN_18058e8f0(local_40);
    local_88 = local_res10;
    if (local_res10 == 0) goto LAB_18058e38f;
    if ((param_2 != 0) &&
       (iVar2 = FUN_18056b8c0(param_2,local_res10,0), local_res10 = param_2, iVar2 != 0)) {
      FUN_18050f6f0(0xf,0,0x82,s_D__a_1_s_target_x86_64_pc_window_180961e00,CONCAT44(uVar6,0x6c));
      goto LAB_18058e38f;
    }
    lVar3 = FUN_18059e7c0(local_40);
    if (lVar3 != 0) {
      FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180961e80,CONCAT44(uVar6,0x70));
      goto LAB_18058e38f;
    }
  }
  if (local_res10 == 0) {
    FUN_18050f6f0(0xf,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180961f00,CONCAT44(uVar6,0x76));
    goto LAB_18058e38f;
  }
  local_90 = FUN_18056d3f0();
  if ((local_90 == 0) || (iVar2 = FUN_18056d820(local_90,local_res10), iVar2 == 0))
  goto LAB_18058e38f;
  local_50 = FUN_18059e7c0(local_30);
  uVar4 = FUN_18059e7a0(local_30);
  local_80 = FUN_18053dcd0(uVar4,local_50,0);
  uVar4 = FUN_18056bc90(local_res10);
  *(undefined8 *)(local_90 + 8) = uVar4;
  if ((local_80 == 0) ||
     ((*(longlong *)(local_90 + 8) == 0 || (iVar2 = FUN_18056d960(local_90,local_80), iVar2 == 0))))
  goto LAB_18058e38f;
  iVar2 = FUN_18059efe0(local_78,DAT_18074d25c);
  if (iVar2 == 0) {
    iVar2 = FUN_18056fe50(local_res10,*(longlong *)(local_90 + 8) + 8,
                          *(longlong *)(local_90 + 0x10) + 0x18);
    if (iVar2 == 0) goto LAB_18058e38f;
    *(uint *)(local_90 + 0x18) = *(uint *)(local_90 + 0x18) | 2;
LAB_18058e331:
    lVar3 = FUN_18059e7c0(local_78);
    if (lVar3 == 0) {
      iVar2 = FUN_18056dbe0(local_90);
      if (iVar2 != 0) {
        FUN_18053d880(local_80);
        FUN_18056b7d0(local_88);
        return local_90;
      }
    }
    else {
      FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180962000,CONCAT44(uVar6,0xac));
    }
  }
  else {
    uVar1 = wcstoul((wchar_t *)local_78,local_20,DAT_18074d25c);
    if ((((uVar1 != 0) && (uVar1 = wcstoul((wchar_t *)local_20,local_68,3), uVar1 != 0)) &&
        (iVar2 = FUN_18059e9c0(local_68,local_98), iVar2 != 0)) &&
       ((local_98[0] == '\0' && (lVar3 = FUN_18059e7c0(local_68), lVar3 != 0)))) {
      local_48 = FUN_18059e7c0(local_68);
      uVar4 = FUN_18059e7a0(local_68);
      uVar6 = 0;
      iVar2 = FUN_18056c680(local_res10,*(undefined8 *)(local_90 + 8),uVar4,local_48,0);
      if ((iVar2 != 0) && (lVar3 = FUN_18059e7c0(local_20), lVar3 == 0)) {
        pbVar5 = (byte *)FUN_18059e7a0(local_68);
        *(uint *)(local_90 + 0x1c) = *pbVar5 & 0xfffffffe;
        goto LAB_18058e331;
      }
    }
    FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180961f80,0x98);
  }
LAB_18058e38f:
  FUN_18056d5a0(local_90);
  FUN_18053d880(local_80);
  FUN_18056b7d0(local_88);
  return 0;
}


/* address=18058e3c0 name=FUN_18058e3c0 */

undefined8 FUN_18058e3c0(undefined8 param_1,longlong *param_2,uint param_3)

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
    FUN_18050f6f0(0xf,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180962080,0xc3);
    return 0;
  }
  iVar1 = FUN_180590d60(param_1,local_100,0x20000010);
  if (((iVar1 != 0) && (iVar1 = FUN_180591220(local_100,1), iVar1 != 0)) &&
     (iVar1 = FUN_180590d60(local_100,local_a0,4), iVar1 != 0)) {
    uVar3 = FUN_18056d920(param_2);
    uVar4 = FUN_18056ba50(*param_2);
    uVar2 = FUN_18053db00(uVar4);
    iVar1 = FUN_180614bd0(local_a0,uVar2,uVar3);
    if (iVar1 != 0) {
      if (((param_3 & 1) == 0) &&
         (((iVar1 = FUN_180590d60(local_100,local_70,DAT_18074d258), iVar1 == 0 ||
           (iVar1 = FUN_18058e7b0(local_70,*param_2), iVar1 == 0)) ||
          (iVar1 = FUN_180590820(local_100), iVar1 == 0)))) {
        FUN_18050f6f0(0xf,0,0x81,s_D__a_1_s_target_x86_64_pc_window_180962180,CONCAT44(uVar5,0xd7));
        return 0;
      }
      if (((param_3 & 2) == 0) && (param_2[1] != 0)) {
        iVar1 = FUN_180590d60(local_100,local_40,DAT_18074d25c);
        if ((iVar1 != 0) &&
           ((iVar1 = FUN_180590d60(local_40,local_d0,3), iVar1 != 0 &&
            (iVar1 = FUN_180591010(local_d0,0), iVar1 != 0)))) {
          uVar5 = 0;
          iVar1 = FUN_18058de60(local_d0,*param_2,param_2[1],
                                *(undefined4 *)((longlong)param_2 + 0x1c),0);
          if ((iVar1 != 0) && (iVar1 = FUN_180590820(local_100), iVar1 != 0)) goto LAB_18058e638;
        }
        FUN_18050f6f0(0xf,0,0x81,s_D__a_1_s_target_x86_64_pc_window_180962200,CONCAT44(uVar5,0xe7));
        return 0;
      }
LAB_18058e638:
      iVar1 = FUN_180590820(param_1);
      if (iVar1 == 0) {
        FUN_18050f6f0(0xf,0,0x81,s_D__a_1_s_target_x86_64_pc_window_180962280,CONCAT44(uVar5,0xed));
        return 0;
      }
      return 1;
    }
  }
  FUN_18050f6f0(0xf,0,0x81,s_D__a_1_s_target_x86_64_pc_window_180962100,CONCAT44(uVar5,0xce));
  return 0;
}


/* address=18058e690 name=FUN_18058e690 */

undefined8 FUN_18058e690(wchar_t *param_1)

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
    FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180962500,0x147);
  }
  else {
    lVar4 = FUN_1805741e0();
    for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
      puVar7 = (undefined4 *)(lVar4 + local_38 * 0x38);
      uVar5 = FUN_18059e7c0(local_18);
      if (uVar5 == *(byte *)(puVar7 + 4)) {
        uVar1 = *(undefined *)(puVar7 + 4);
        uVar6 = FUN_18059e7a0(local_18);
        iVar3 = FUN_18058f030(uVar6,*(undefined8 *)(puVar7 + 2),uVar1);
        if (iVar3 == 0) {
          uVar6 = FUN_18056b630(*puVar7);
          return uVar6;
        }
      }
    }
    FUN_18050f6f0(0xf,0,0x7b,s_D__a_1_s_target_x86_64_pc_window_180962580,0x156);
  }
  return 0;
}


/* address=18058e7b0 name=FUN_18058e7b0 */

undefined4 FUN_18058e7b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong local_50;
  undefined local_38 [56];
  
  iVar1 = FUN_18056bb40(param_2);
  if (iVar1 == 0) {
    FUN_18050f6f0(0xf,0,0x7b,s_D__a_1_s_target_x86_64_pc_window_180962600,0x15d);
  }
  else {
    lVar2 = FUN_1805741e0();
    for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
      piVar3 = (int *)(lVar2 + local_50 * 0x38);
      if (*piVar3 == iVar1) {
        iVar1 = FUN_180590d60(param_1,local_38,6);
        if (((iVar1 != 0) &&
            (iVar1 = FUN_180590e20(local_38,*(undefined8 *)(piVar3 + 2),*(undefined *)(piVar3 + 4)),
            iVar1 != 0)) && (iVar1 = FUN_180590820(param_1), iVar1 != 0)) {
          return 1;
        }
        return 0;
      }
    }
    FUN_18050f6f0(0xf,0,0x7b,s_D__a_1_s_target_x86_64_pc_window_180962680,0x16c);
  }
  return 0;
}


/* address=18058e8f0 name=FUN_18058e8f0 */

undefined8 FUN_18058e8f0(undefined8 param_1)

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
  
  iVar2 = FUN_18059efe0(param_1,0x20000010);
  if (iVar2 == 0) {
    uVar4 = FUN_18058e690(param_1);
  }
  else {
    iVar2 = FUN_18058f070(param_1,local_68,local_58,local_48,local_38,local_28,local_18);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      lVar5 = FUN_1805741e0();
      for (local_78 = 0; local_78 < 4; local_78 = local_78 + 1) {
        puVar6 = (undefined4 *)(lVar5 + local_78 * 0x38);
        bVar1 = *(byte *)(puVar6 + 8);
        uVar3 = (uint)bVar1;
        iVar2 = FUN_18058f420(local_68,*(undefined8 *)(puVar6 + 10),uVar3);
        if ((((iVar2 != 0) &&
             (iVar2 = FUN_18058f420(local_58,(ulonglong)uVar3 + *(longlong *)(puVar6 + 10),uVar3),
             iVar2 != 0)) &&
            (iVar2 = FUN_18058f420(local_48,(ulonglong)bVar1 * 2 + *(longlong *)(puVar6 + 10),uVar3)
            , iVar2 != 0)) &&
           (((iVar2 = FUN_18058f420(local_38,(ulonglong)(uVar3 * 3) + *(longlong *)(puVar6 + 10),
                                    uVar3), iVar2 != 0 &&
             (iVar2 = FUN_18058f420(local_28,(ulonglong)bVar1 * 4 + *(longlong *)(puVar6 + 10),uVar3
                                   ), iVar2 != 0)) &&
            (iVar2 = FUN_18058f420(local_18,(ulonglong)(uVar3 * 5) + *(longlong *)(puVar6 + 10),
                                   uVar3), iVar2 != 0)))) {
          uVar4 = FUN_18056b630(*puVar6);
          return uVar4;
        }
      }
      FUN_18050f6f0(0xf,0,0x7b,s_D__a_1_s_target_x86_64_pc_window_180962700,0x193);
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* address=18058eb10 name=FUN_18058eb10 */

longlong FUN_18058eb10(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined local_18 [24];
  
  local_20 = 0;
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    local_20 = FUN_18056d800(*param_1);
  }
  if (param_3 < 0) {
    FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180962780,0x1ab);
    lVar1 = 0;
  }
  else {
    FUN_18059e730(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_18058df30(local_18,local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_18056d5a0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_18059e7a0(local_18);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=18058ec00 name=FUN_18058ec00 */

undefined8 FUN_18058ec00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined local_38 [56];
  
  iVar1 = FUN_180590610(local_38,0);
  if (iVar1 != 0) {
    uVar2 = FUN_18056db60(param_1);
    iVar1 = FUN_18058e3c0(local_38,param_1,uVar2);
    if (iVar1 != 0) {
      uVar3 = FUN_1805ad270(local_38,param_2);
      return uVar3;
    }
  }
  FUN_1805906d0(local_38);
  return 0xffffffff;
}


/* address=18058ef50 name=FUN_18058ef50 */

int FUN_18058ef50(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int local_44;
  undefined local_40 [64];
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_18050f6f0(0xf,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180962980,0x209);
    local_44 = 0;
  }
  else {
    iVar1 = FUN_180590610(local_40,0);
    if ((iVar1 == 0) ||
       (iVar1 = FUN_18058de60(local_40,*param_1,param_1[1],*(undefined4 *)((longlong)param_1 + 0x1c)
                              ,0), iVar1 == 0)) {
      FUN_1805906d0(local_40);
      local_44 = -1;
    }
    else {
      local_44 = FUN_1805ad270(local_40,param_2);
      if (local_44 < 1) {
        local_44 = 0;
      }
    }
  }
  return local_44;
}


/* address=18058f030 name=FUN_18058f030 */

int FUN_18058f030(void *param_1,void *param_2,size_t param_3)

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


/* address=18058f070 name=FUN_18058f070 */

undefined8
FUN_18058f070(wchar_t *param_1,wchar_t **param_2,wchar_t **param_3,wchar_t **param_4,
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
  if (((((uVar1 != 0) && (iVar2 = FUN_18059f1b0(local_78,&local_48), iVar2 != 0)) && (local_48 == 1)
       ) && ((uVar1 = wcstoul((wchar_t *)local_78,local_40,0x20000010), uVar1 != 0 &&
             (uVar1 = wcstoul((wchar_t *)local_40,local_30,6), uVar1 != 0)))) &&
     (lVar3 = FUN_18059e7c0(local_30), lVar3 == 7)) {
    uVar4 = FUN_18059e7a0(local_30);
    iVar2 = FUN_18058f030(uVar4,&DAT_18074d260,7);
    if ((((iVar2 == 0) && (uVar1 = wcstoul((wchar_t *)local_40,param_2,2), uVar1 != 0)) &&
        ((iVar2 = FUN_18059f970(param_2), iVar2 != 0 &&
         (((lVar3 = FUN_18059e7c0(local_40), lVar3 == 0 &&
           (uVar1 = wcstoul((wchar_t *)local_78,local_58,0x20000010), uVar1 != 0)) &&
          (uVar1 = wcstoul((wchar_t *)local_58,param_3,4), uVar1 != 0)))))) &&
       (((uVar1 = wcstoul((wchar_t *)local_58,param_4,4), uVar1 != 0 &&
         (iVar2 = FUN_18059f470(local_58,0,0,3), iVar2 != 0)) &&
        ((lVar3 = FUN_18059e7c0(local_58), lVar3 == 0 &&
         (((uVar1 = wcstoul((wchar_t *)local_78,local_68,4), uVar1 != 0 &&
           (uVar1 = wcstoul((wchar_t *)local_78,param_7,2), uVar1 != 0)) &&
          ((iVar2 = FUN_18059f970(param_7), iVar2 != 0 &&
           ((iVar2 = FUN_18059f470(local_78,local_20,&local_84,2), iVar2 != 0 &&
            (lVar3 = FUN_18059e7c0(local_78), lVar3 == 0)))))))))))) {
      if ((local_84 != 0) &&
         ((lVar3 = FUN_18059e7c0(local_20), lVar3 != 1 ||
          (pcVar5 = (char *)FUN_18059e7a0(local_20), *pcVar5 != '\x01')))) {
        FUN_18050f6f0(0xf,0,0x7b,s_D__a_1_s_target_x86_64_pc_window_180962380,0x11e);
        return 0;
      }
      iVar2 = FUN_18059e9c0(local_68);
      if ((iVar2 != 0) && (local_88 == '\x04')) {
        uVar6 = FUN_18059e7c0(local_68);
        if (uVar6 % 2 != 0) {
          FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180962480,299);
          return 0;
        }
        uVar6 = FUN_18059e7c0(local_68);
        local_80 = uVar6 / 2;
        uVar4 = FUN_18059e7a0(local_68,uVar6 % 2);
        FUN_18059e730(param_5,uVar4,local_80);
        lVar3 = FUN_18059e7a0(local_68);
        FUN_18059e730(param_6,lVar3 + local_80,local_80);
        return 1;
      }
      FUN_18050f6f0(0xf,0,0x6f,s_D__a_1_s_target_x86_64_pc_window_180962400,0x126);
      return 0;
    }
  }
  FUN_18050f6f0(0xf,0,0x80,s_D__a_1_s_target_x86_64_pc_window_180962300,0x116);
  return 0;
}


/* address=18058f420 name=FUN_18058f420 */

void FUN_18058f420(undefined *param_1,char *param_2,longlong param_3)

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
    lVar2 = FUN_18059e7c0(local_28);
    local_res10 = param_2;
    local_res18 = param_3;
    if (lVar2 == 0) break;
    pcVar1 = (char *)FUN_18059e7a0(local_28);
    if (*pcVar1 != '\0') break;
    FUN_18059e770(local_28,1);
  }
  for (; (local_res18 != 0 && (*local_res10 == '\0')); local_res10 = local_res10 + 1) {
    local_res18 = local_res18 + -1;
  }
  FUN_18059e950(local_28,local_res10,local_res18);
  return;
}


/* address=18058f4e0 name=FUN_18058f4e0 */

ulonglong * FUN_18058f4e0(ulonglong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  
  iVar1 = FUN_180590520();
  if (iVar1 == 0) {
    if (DAT_1809921f8 == (code *)0x0) {
      if ((param_1 <= param_1 + 8) &&
         (puVar2 = (ulonglong *)_malloc_base(param_1 + 8), puVar2 != (ulonglong *)0x0)) {
        *puVar2 = param_1;
        FUN_1805904e0(puVar2,8);
        return puVar2 + 1;
      }
    }
    else {
      if (DAT_180992200 == 0) {
        FID_conflict__assert
                  (u_OPENSSL_memory_free____NULL_180962ae0,
                   u_D__a_1_s_target_x86_64_pc_window_180962a00,0xea);
      }
      if (DAT_180992208 == 0) {
        FID_conflict__assert
                  (u_OPENSSL_memory_get_size____NULL_180962c00,
                   u_D__a_1_s_target_x86_64_pc_window_180962b20,0xeb);
      }
      puVar2 = (ulonglong *)(*DAT_1809921f8)(param_1);
      if (puVar2 != (ulonglong *)0x0) {
        return puVar2;
      }
      if (param_1 == 0) {
        return (ulonglong *)0x0;
      }
    }
  }
  FUN_18050f6f0(0xe,0,0x41,s_D__a_1_s_target_x86_64_pc_window_180962c40,0x10b);
  return (ulonglong *)0x0;
}


/* address=18058f610 name=FUN_18058f610 */

void FUN_18058f610(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    if (DAT_180992200 == (code *)0x0) {
      plVar2 = (longlong *)(param_1 + -8);
      FUN_180590500(plVar2,8);
      lVar1 = *plVar2;
      FUN_18058f7b0(plVar2,lVar1 + 8);
      if (DAT_1809921f0 == (code *)0x0) {
        thunk_FUN_180681d50(plVar2);
      }
      else {
        (*DAT_1809921f0)(plVar2,lVar1 + 8,0);
      }
    }
    else {
      (*DAT_180992200)(param_1);
    }
  }
  return;
}


/* address=18058f6c0 name=FUN_18058f6c0 */

longlong FUN_18058f6c0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong local_20;
  ulonglong local_18;
  
  if (param_1 == 0) {
    lVar1 = FUN_18058f4e0(param_2);
  }
  else {
    if (DAT_180992208 == (code *)0x0) {
      puVar2 = (ulonglong *)(param_1 + -8);
      FUN_180590500(puVar2,8);
      local_20 = *puVar2;
      FUN_1805904e0(puVar2,8);
    }
    else {
      local_20 = (*DAT_180992208)(param_1);
    }
    lVar1 = FUN_18058f4e0(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      local_18 = param_2;
      if (local_20 < param_2) {
        local_18 = local_20;
      }
      FUN_180691e40(lVar1,param_1,local_18);
      FUN_18058f610(param_1);
    }
  }
  return lVar1;
}


/* address=18058f7b0 name=FUN_18058f7b0 */

void FUN_18058f7b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1805905b0(param_1,param_2);
  return;
}


/* address=18058f7e0 name=FUN_18058f7e0 */

byte FUN_18058f7e0(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte local_28;
  ulonglong local_20;
  
  local_28 = 0;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    local_28 = local_28 | *(byte *)(param_1 + local_20) ^ *(byte *)(param_2 + local_20);
  }
  return local_28;
}


/* address=18058f880 name=FUN_18058f880 */

uint FUN_18058f880(longlong param_1,ulonglong param_2)

{
  uint local_28;
  ulonglong local_20;
  
  local_28 = DAT_18074d280;
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    local_28 = (local_28 ^ *(byte *)(param_1 + local_20)) * DAT_18074d27c;
  }
  return local_28;
}


/* address=18058f900 name=FUN_18058f900 */

void FUN_18058f900(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_18058f880(param_1,sVar1);
  return;
}


/* address=18058f930 name=FUN_18058f930 */

longlong FUN_18058f930(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  
  if (param_1 == (char *)0x0) {
    lVar2 = 0;
  }
  else {
    sVar1 = strlen(param_1);
    lVar2 = FUN_18058f4e0(sVar1 + 1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1805902b0(lVar2,param_1,sVar1 + 1);
    }
  }
  return lVar2;
}


/* address=18058f9a0 name=FUN_18058f9a0 */

ulonglong FUN_18058f9a0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong local_18;
  
  for (local_18 = 0;
      (uVar1 = param_2, local_18 < param_2 &&
      (uVar1 = local_18, *(char *)(param_1 + local_18) != '\0')); local_18 = local_18 + 1) {
  }
  return uVar1;
}


/* address=18058fa00 name=__ascii_iswalpha */

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


/* address=18058fa50 name=FUN_18058fa50 */

undefined4 FUN_18058fa50(int param_1)

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


/* address=18058fa90 name=FUN_18058fa90 */

undefined4 FUN_18058fa90(int param_1)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_18058fa50(param_1);
  if (((iVar1 == 0) && ((param_1 < 0x61 || (0x66 < param_1)))) &&
     ((param_1 < 0x41 || (0x46 < param_1)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=18058faf0 name=FUN_18058faf0 */

undefined8 FUN_18058faf0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_18058fa50(param_2);
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


/* address=18058fb80 name=FUN_18058fb80 */

undefined4 FUN_18058fb80(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = __ascii_iswalpha(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_18058fa50(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}


/* address=18058fbd0 name=__ascii_tolower */

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


/* address=18058fc00 name=FUN_18058fc00 */

undefined4 FUN_18058fc00(int param_1)

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


/* address=18058fc50 name=FUN_18058fc50 */

undefined8 FUN_18058fc50(longlong param_1,longlong param_2)

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


/* address=18058fcf0 name=FUN_18058fcf0 */

undefined8 FUN_18058fcf0(longlong param_1,longlong param_2,ulonglong param_3)

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


/* address=18058fdb0 name=_snprintf */

/* Library Function - Single Match
    _snprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  undefined8 in_R9;
  undefined8 local_res20;
  
  local_res20 = in_R9;
  iVar1 = FUN_18058fe10(_Dest,_Count,_Format,&local_res20);
  return iVar1;
}


/* address=18058fe10 name=FUN_18058fe10 */

void FUN_18058fe10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180590530(param_1,param_2,param_3,param_4);
  return;
}


/* address=18058fe50 name=FUN_18058fe50 */

void FUN_18058fe50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180590300(param_1,param_2,param_3,0);
  return;
}


/* address=18058fef0 name=FUN_18058fef0 */

longlong FUN_18058fef0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_18058f9a0(param_1,param_2);
  if (uVar1 + 1 < uVar1) {
    FUN_18050f6f0(0xe,0,0x41,s_D__a_1_s_target_x86_64_pc_window_180962cb0,0x22f);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18058f4e0(uVar1 + 1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1805902b0(lVar2,param_1,uVar1);
      *(undefined *)(lVar2 + uVar1) = 0;
    }
  }
  return lVar2;
}


/* address=18058ffb0 name=FUN_18058ffb0 */

longlong FUN_18058ffb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18058f4e0(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1805902b0(lVar1,param_1,param_2);
    }
  }
  return lVar1;
}


/* address=180590010 name=FUN_180590010 */

longlong FUN_180590010(char *param_1,char *param_2,ulonglong param_3)

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


/* address=1805900c0 name=FUN_1805900c0 */

longlong FUN_1805900c0(char *param_1,undefined8 param_2,longlong param_3)

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
  lVar1 = FUN_180590010(local_res8,param_2,local_res18);
  return local_18 + lVar1;
}


/* address=1805901f0 name=FUN_1805901f0 */

void FUN_1805901f0(undefined8 param_1)

{
  FUN_18058f610(param_1);
  return;
}


/* address=1805902b0 name=FUN_1805902b0 */

undefined8 FUN_1805902b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180590300 name=FUN_180590300 */

uint FUN_180590300(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
    local_50 = FUN_18058f4e0;
    local_48 = FUN_18058f610;
    local_40 = FUN_18058f6c0;
  }
  else {
    local_50 = _malloc_base;
    local_48 = thunk_FUN_180681d50;
    local_40 = _realloc_base;
  }
  local_58 = 0x40;
  lVar1 = (*local_50)(0x40);
  if ((lVar1 != 0) && (local_68 = FUN_180590530(lVar1,0x40,param_2,param_3), -1 < (int)local_68)) {
    local_60 = lVar1;
    if (0x3f < local_68) {
      local_58 = (longlong)(int)local_68 + 1;
      local_60 = (*local_40)(lVar1,local_58);
      if (local_60 == 0) goto LAB_1805904a2;
      local_68 = FUN_180590530(local_60,local_58,param_2,param_3);
    }
    lVar1 = local_60;
    if ((-1 < (int)local_68) && ((ulonglong)(longlong)(int)local_68 < local_58)) {
      *param_1 = local_60;
      return local_68;
    }
  }
LAB_1805904a2:
  local_60 = lVar1;
  (*local_48)(local_60);
  *param_1 = 0;
  puVar2 = (undefined4 *)FUN_180677424();
  *puVar2 = 0xc;
  return 0xffffffff;
}


/* address=1805904e0 name=FUN_1805904e0 */

void FUN_1805904e0(void)

{
  return;
}


/* address=180590500 name=FUN_180590500 */

void FUN_180590500(void)

{
  return;
}


/* address=180590520 name=FUN_180590520 */

undefined8 FUN_180590520(void)

{
  return 0;
}


/* address=180590530 name=FUN_180590530 */

int FUN_180590530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int local_14;
  
  puVar1 = (ulonglong *)FUN_18050b570();
  local_14 = FUN_18066b484(*puVar1 | 2,param_1,param_2,param_3,0,param_4);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}


/* address=1805905b0 name=FUN_1805905b0 */

undefined * FUN_1805905b0(undefined *param_1,longlong param_2)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}


/* address=1805905e0 name=FUN_1805905e0 */

void FUN_1805905e0(undefined8 param_1)

{
  FUN_180591af0(param_1,0,0x30);
  return;
}


/* address=180590610 name=FUN_180590610 */

undefined8 FUN_180590610(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1805905e0(param_1);
  lVar1 = FUN_18058f4e0(param_2);
  if ((param_2 == 0) || (lVar1 != 0)) {
    FUN_180591b30(param_1,lVar1,param_2,1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=180590680 name=FUN_180590680 */

undefined8 FUN_180590680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805905e0(param_1);
  FUN_180591b30(param_1,param_2,param_3,0);
  return 1;
}


/* address=1805906d0 name=FUN_1805906d0 */

void FUN_1805906d0(longlong param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    FID_conflict__assert
              (u__cbb_>is_child_180962e18,u_D__a_1_s_target_x86_64_pc_window_180962d20,0x3e);
  }
  if ((*(char *)(param_1 + 8) == '\0') && ((*(uint *)(param_1 + 0x28) & 1) != 0)) {
    FUN_18058f610(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}


/* address=180590740 name=FUN_180590740 */

undefined8 FUN_180590740(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = FUN_180590820(param_1);
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
      FUN_1805906d0(param_1);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    FUN_18050f6f0(0xe,0,0x42,s_D__a_1_s_target_x86_64_pc_window_180962f40,0x7f);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=180590820 name=FUN_180590820 */

undefined8 FUN_180590820(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte local_48;
  undefined local_47;
  ulonglong local_38;
  ulonglong local_20;
  
  plVar3 = (longlong *)FUN_180591da0(param_1);
  if ((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 3) >> 1 & 1) != 0)) {
    return 0;
  }
  if (*param_1 == 0) {
    return 1;
  }
  if (*(char *)(*param_1 + 8) == '\0') {
    FID_conflict__assert
              (u_cbb_>child_>is_child_1809630b8,u_D__a_1_s_target_x86_64_pc_window_180962fc0,0xaf);
  }
  lVar1 = *param_1;
  if (*(longlong **)(lVar1 + 0x10) != plVar3) {
    FID_conflict__assert
              (u_child_>base____base_1809631e8,u_D__a_1_s_target_x86_64_pc_window_1809630f0,0xb1);
  }
  uVar4 = (ulonglong)*(byte *)(lVar1 + 0x20) + *(longlong *)(lVar1 + 0x18);
  iVar2 = FUN_180590820(*param_1);
  if (((iVar2 != 0) && (*(ulonglong *)(lVar1 + 0x18) <= uVar4)) && (uVar4 <= (ulonglong)plVar3[1]))
  {
    local_38 = plVar3[1] - uVar4;
    if ((*(uint *)(lVar1 + 0x24) & 1) != 0) {
      if (*(char *)(lVar1 + 0x20) != '\x01') {
        FID_conflict__assert
                  (u_child_>pending_len_len____1_180963308,
                   u_D__a_1_s_target_x86_64_pc_window_180963210,0xc3);
      }
      if (0xfffffffe < local_38) {
        FUN_18050f6f0(0xe,0,0x45,s_D__a_1_s_target_x86_64_pc_window_180963340,0xc6);
        goto LAB_180590b6f;
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
        iVar2 = FUN_180591d40(plVar3,0,(longlong)(int)(local_48 - 1));
        if (iVar2 == 0) goto LAB_180590b6f;
        FUN_180591aa0(*plVar3 + uVar4 + (longlong)(int)(local_48 - 1),*plVar3 + uVar4,local_38);
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
    FUN_18050f6f0(0xe,0,0x45,s_D__a_1_s_target_x86_64_pc_window_1809633c0,0xed);
  }
LAB_180590b6f:
  *(uint *)(plVar3 + 3) = *(uint *)(plVar3 + 3) | 2;
  return 0;
}


/* address=180590b90 name=FUN_180590b90 */

longlong FUN_180590b90(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    FID_conflict__assert
              (u_cbb_>child____NULL_180963538,u_D__a_1_s_target_x86_64_pc_window_180963440,0xfc);
  }
  if (*(char *)(param_1 + 1) == '\0') {
    lVar1 = param_1[2];
  }
  else {
    lVar1 = *(longlong *)param_1[2] + param_1[3] + (ulonglong)*(byte *)(param_1 + 4);
  }
  return lVar1;
}


/* address=180590c10 name=FUN_180590c10 */

longlong FUN_180590c10(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    FID_conflict__assert
              (u_cbb_>child____NULL_180963658,u_D__a_1_s_target_x86_64_pc_window_180963560,0x105);
  }
  if (*(char *)(param_1 + 1) == '\0') {
    lVar1 = param_1[3];
  }
  else {
    if (*(ulonglong *)(param_1[2] + 8) < (ulonglong)*(byte *)(param_1 + 4) + param_1[3]) {
      FID_conflict__assert
                (u_cbb_>u_child_offset___cbb_>u_chi_180963780,
                 u_D__a_1_s_target_x86_64_pc_window_180963680,0x108);
    }
    lVar1 = (*(longlong *)(param_1[2] + 8) - param_1[3]) - (ulonglong)*(byte *)(param_1 + 4);
  }
  return lVar1;
}


/* address=180590cd0 name=FUN_180590cd0 */

void FUN_180590cd0(undefined8 param_1,undefined8 param_2)

{
  FUN_180591f10(param_1,param_2,1);
  return;
}


/* address=180590d00 name=FUN_180590d00 */

void FUN_180590d00(undefined8 param_1,undefined8 param_2)

{
  FUN_180591f10(param_1,param_2,2);
  return;
}


/* address=180590d30 name=FUN_180590d30 */

void FUN_180590d30(undefined8 param_1,undefined8 param_2)

{
  FUN_180591f10(param_1,param_2,3);
  return;
}


/* address=180590d60 name=FUN_180590d60 */

undefined8 FUN_180590d60(undefined8 param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_180590820(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    bVar1 = (byte)(param_3 >> 0x18) & 0xe0;
    if ((param_3 & 0x1fffffff) < 0x1f) {
      iVar2 = FUN_180591010(param_1,(uint)bVar1 | param_3 & 0xff);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_180591010(param_1,bVar1 | 0x1f);
      if ((iVar2 == 0) || (iVar2 = FUN_180591f60(param_1,param_3 & 0x1fffffff), iVar2 == 0)) {
        return 0;
      }
    }
    uVar3 = FUN_180591dd0(param_1,param_2,1,1);
  }
  return uVar3;
}


/* address=180590e20 name=FUN_180590e20 */

bool FUN_180590e20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_180590ed0(param_1,local_18,param_3);
  if (iVar1 != 0) {
    FUN_180591a50(local_18[0],param_2,param_3);
  }
  return iVar1 != 0;
}


/* address=180590e80 name=FUN_180590e80 */

bool FUN_180590e80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_180590ed0(param_1,local_18,param_2);
  if (iVar1 != 0) {
    FUN_180591af0(local_18[0],0,param_2);
  }
  return iVar1 != 0;
}


/* address=180590ed0 name=FUN_180590ed0 */

undefined8 FUN_180590ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_180590820(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_180591da0(param_1);
    iVar1 = FUN_180591d40(uVar2,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=180590f30 name=FUN_180590f30 */

undefined8 FUN_180590f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_180590820(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_180591da0(param_1);
    iVar1 = FUN_180591bc0(uVar2,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=180590f90 name=FUN_180590f90 */

undefined8 FUN_180590f90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_180591da0(param_1);
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


/* address=180591010 name=FUN_180591010 */

void FUN_180591010(undefined8 param_1,undefined param_2)

{
  FUN_180592030(param_1,param_2,1);
  return;
}


/* address=180591040 name=FUN_180591040 */

void FUN_180591040(undefined8 param_1,undefined2 param_2)

{
  FUN_180592030(param_1,param_2,2);
  return;
}


/* address=1805910a0 name=FUN_1805910a0 */

void FUN_1805910a0(undefined8 param_1,undefined4 param_2)

{
  FUN_180592030(param_1,param_2,3);
  return;
}


/* address=1805910d0 name=FUN_1805910d0 */

void FUN_1805910d0(undefined8 param_1,undefined4 param_2)

{
  FUN_180592030(param_1,param_2,4);
  return;
}


/* address=180591130 name=FUN_180591130 */

void FUN_180591130(undefined8 param_1,undefined8 param_2)

{
  FUN_180592030(param_1,param_2,8);
  return;
}


/* address=180591190 name=FUN_180591190 */

void FUN_180591190(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = FUN_180591da0(param_1);
    if (*(char *)(*param_1 + 8) == '\0') {
      FID_conflict__assert
                (u_cbb_>child_>is_child_180963b68,u_D__a_1_s_target_x86_64_pc_window_180963a70,0x1d4
                );
    }
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*param_1 + 0x18);
    *(undefined8 *)(*param_1 + 0x10) = 0;
    *param_1 = 0;
  }
  return;
}


/* address=180591220 name=FUN_180591220 */

void FUN_180591220(undefined8 param_1,undefined8 param_2)

{
  FUN_180591250(param_1,param_2,2);
  return;
}


/* address=180591250 name=FUN_180591250 */

undefined8 FUN_180591250(undefined8 param_1,ulonglong param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_40;
  undefined local_38 [56];
  
  iVar3 = FUN_180590d60(param_1,local_38,param_3);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    bVar2 = false;
    for (local_40 = 0; local_40 < 8; local_40 = local_40 + 1) {
      uVar4 = param_2 >> (('\a' - (char)local_40) * '\b' & 0x3fU);
      cVar1 = (char)uVar4;
      if (bVar2) {
LAB_18059130c:
        iVar3 = FUN_180591010(local_38,cVar1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else if (cVar1 != '\0') {
        if (((uVar4 & 0x80) != 0) && (iVar3 = FUN_180591010(local_38,0), iVar3 == 0)) {
          return 0;
        }
        bVar2 = true;
        goto LAB_18059130c;
      }
    }
    if ((bVar2) || (iVar3 = FUN_180591010(local_38,0), iVar3 != 0)) {
      uVar5 = FUN_180590820(param_1);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}


/* address=180591390 name=FUN_180591390 */

void FUN_180591390(undefined8 param_1,longlong param_2,undefined4 param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_78;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 < 0) {
    FUN_180691e40(local_20,&local_res10,8);
    local_58 = 7;
    while (((0 < local_58 && (local_20[local_58] == 0xff)) &&
           ((local_20[local_58 + -1] & 0x80) != 0))) {
      local_58 = local_58 + -1;
    }
    iVar1 = FUN_180590d60(param_1,local_50,local_res18);
    if (iVar1 != 0) {
      for (local_54 = local_58; -1 < local_54; local_54 = local_54 + -1) {
        iVar1 = FUN_180591010(local_50,local_20[local_54]);
        if (iVar1 == 0) goto LAB_1805914a1;
      }
      FUN_180590820(param_1);
    }
  }
  else {
    FUN_180591250(param_1,param_2,param_3);
  }
LAB_1805914a1:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=1805914c0 name=FUN_1805914c0 */

undefined8 FUN_1805914c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_180590d60(param_1,local_38,4);
  if (((iVar1 != 0) && (iVar1 = FUN_180590e20(local_38,param_2,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_180590820(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=180591530 name=FUN_180591530 */

undefined8 FUN_180591530(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined local_48;
  undefined local_40 [64];
  
  iVar1 = FUN_180590d60(param_1,local_40,1);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = 0xff;
    }
    iVar1 = FUN_180591010(local_40,local_48);
    if ((iVar1 != 0) && (iVar1 = FUN_180590820(param_1), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}


/* address=1805915b0 name=FUN_1805915b0 */

undefined8 FUN_1805915b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong local_28;
  ulonglong local_20;
  undefined local_18 [24];
  
  iVar1 = FUN_180590820(param_1);
  if (iVar1 != 0) {
    FUN_18059e730(local_18,param_2,param_3);
    iVar1 = FUN_180592100(local_18,&local_28);
    if ((((iVar1 != 0) && (iVar1 = FUN_180592100(local_18,&local_20), iVar1 != 0)) && (local_28 < 3)
        ) && (((1 < local_28 || (local_20 < 0x28)) && (local_20 < 0xffffffffffffffb0)))) {
      iVar1 = FUN_180591f60(param_1,local_28 * 0x28 + local_20);
      while (iVar1 != 0) {
        lVar2 = FUN_18059e7c0(local_18);
        if (lVar2 == 0) {
          return 1;
        }
        iVar1 = FUN_180592100(local_18,&local_28);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_180591f60(param_1,local_28);
      }
    }
  }
  return 0;
}


/* address=1805916b0 name=FUN_1805916b0 */

undefined4 FUN_1805916b0(undefined8 param_1)

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
  
  iVar1 = FUN_180590820(param_1);
  if (iVar1 == 0) {
    local_60 = 0;
  }
  else {
    local_78 = 0;
    local_28 = FUN_180590c10(param_1);
    FUN_180590b90(param_1);
    FUN_18059e730(local_38);
    while (lVar2 = FUN_18059e7c0(local_38), lVar2 != 0) {
      pvVar3 = _aligned_recalloc(local_38,0,0,0);
      if ((int)pvVar3 == 0) {
        FUN_18050f6f0(0xe,0,0x42,s_D__a_1_s_target_x86_64_pc_window_180963ba0,0x283);
        return 0;
      }
      local_78 = local_78 + 1;
    }
    if (local_78 < 2) {
      local_60 = 1;
    }
    else if (local_78 < 0x1000000000000000) {
      local_60 = 0;
      lVar2 = FUN_180590c10(param_1);
      uVar4 = FUN_180590b90(param_1);
      lVar5 = FUN_18058ffb0(uVar4,lVar2);
      lVar6 = FUN_18058f4e0(local_78 * 0x10);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        FUN_18059e730(local_38,lVar5);
        for (local_58 = 0; local_58 < local_78; local_58 = local_58 + 1) {
          pvVar3 = _aligned_recalloc(local_38,lVar6 + local_58 * 0x10,0,0);
          if ((int)pvVar3 == 0) goto LAB_180591983;
        }
        FUN_18067d670(lVar6,local_78,0x10,&LAB_180592180);
        local_20 = FUN_180590b90(param_1);
        local_50 = 0;
        for (local_68 = 0; local_68 < local_78; local_68 = local_68 + 1) {
          local_18 = FUN_18059e7c0(lVar6 + local_68 * 0x10);
          uVar4 = FUN_18059e7a0(lVar6 + local_68 * 0x10);
          FUN_180591a50(local_20 + local_50,uVar4,local_18);
          lVar7 = FUN_18059e7c0(lVar6 + local_68 * 0x10);
          local_50 = local_50 + lVar7;
        }
        if (local_50 != lVar2) {
          FID_conflict__assert
                    (u_offset____buf_len_180963d18,u_D__a_1_s_target_x86_64_pc_window_180963c20,
                     0x2a8);
        }
        local_60 = 1;
      }
LAB_180591983:
      FUN_18058f610(lVar5);
      FUN_18058f610(lVar6);
    }
    else {
      local_60 = 0;
    }
  }
  return local_60;
}


/* address=1805919b0 name=FUN_1805919b0 */

ushort FUN_1805919b0(ushort param_1)

{
  return param_1 >> 8 | param_1 << 8;
}


/* address=1805919d0 name=FUN_1805919d0 */

uint FUN_1805919d0(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=1805919f0 name=FUN_1805919f0 */

ulonglong FUN_1805919f0(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=180591a10 name=FUN_180591a10 */

int FUN_180591a10(void *param_1,void *param_2,size_t param_3)

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


/* address=180591a50 name=FUN_180591a50 */

undefined8 FUN_180591a50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180591aa0 name=FUN_180591aa0 */

undefined8 FUN_180591aa0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180591af0 name=FUN_180591af0 */

undefined8 FUN_180591af0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180591b30 name=FUN_180591b30 */

void FUN_180591b30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

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


/* address=180591bc0 name=FUN_180591bc0 */

undefined8 FUN_180591bc0(longlong *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong local_28;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = param_1[1] + param_3;
  if (uVar1 < (ulonglong)param_1[1]) {
    FUN_18050f6f0(0xe,0,0x45,s_D__a_1_s_target_x86_64_pc_window_180962e40,0x51);
  }
  else {
    if (uVar1 <= (ulonglong)param_1[2]) {
LAB_180591ce9:
      if (param_2 != (longlong *)0x0) {
        *param_2 = *param_1 + param_1[1];
      }
      return 1;
    }
    if ((*(uint *)(param_1 + 3) & 1) == 0) {
      FUN_18050f6f0(0xe,0,0x45,s_D__a_1_s_target_x86_64_pc_window_180962ec0,0x57);
    }
    else {
      local_28 = param_1[2] << 1;
      if ((local_28 < (ulonglong)param_1[2]) || (local_28 < uVar1)) {
        local_28 = uVar1;
      }
      lVar2 = FUN_18058f6c0(*param_1,local_28);
      if (lVar2 != 0) {
        *param_1 = lVar2;
        param_1[2] = local_28;
        goto LAB_180591ce9;
      }
    }
  }
  *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 2;
  return 0;
}


/* address=180591d40 name=FUN_180591d40 */

bool FUN_180591d40(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_180591bc0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_3;
  }
  return iVar1 != 0;
}


/* address=180591da0 name=FUN_180591da0 */

longlong FUN_180591da0(longlong param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x10);
  }
  return param_1;
}


/* address=180591dd0 name=FUN_180591dd0 */

bool FUN_180591dd0(longlong *param_1,longlong param_2,char param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*param_1 != 0) {
    FID_conflict__assert
              (u_cbb_>child____NULL_180963918,u_D__a_1_s_target_x86_64_pc_window_180963820,0x111);
  }
  if ((param_4 != 0) && (param_3 != '\x01')) {
    FID_conflict__assert
              (u__is_asn1____len_len____1_180963a38,u_D__a_1_s_target_x86_64_pc_window_180963940,
               0x112);
  }
  lVar2 = FUN_180591da0(param_1);
  local_18 = *(undefined8 *)(lVar2 + 8);
  iVar1 = FUN_180591d40(lVar2,&local_20,param_3);
  if (iVar1 != 0) {
    FUN_180591af0(local_20,0,param_3);
    FUN_1805905e0(param_2);
    *(undefined *)(param_2 + 8) = 1;
    *(longlong *)(param_2 + 0x10) = lVar2;
    *(undefined8 *)(param_2 + 0x18) = local_18;
    *(char *)(param_2 + 0x20) = param_3;
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe | param_4 & 1;
    *param_1 = param_2;
  }
  return iVar1 != 0;
}


/* address=180591f10 name=FUN_180591f10 */

undefined8 FUN_180591f10(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_180590820(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180591dd0(param_1,param_2,param_3,0);
  }
  return uVar2;
}


/* address=180591f60 name=FUN_180591f60 */

undefined8 FUN_180591f60(undefined8 param_1,ulonglong param_2)

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
    iVar1 = FUN_180591010(param_1,local_28);
  } while (iVar1 != 0);
  return 0;
}


/* address=180592030 name=FUN_180592030 */

undefined8 FUN_180592030(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_res10;
  ulonglong local_28;
  longlong local_18 [3];
  
  iVar1 = FUN_180590ed0(param_1,local_18,param_3);
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
      lVar2 = FUN_180591da0(param_1);
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) | 2;
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=180592100 name=FUN_180592100 */

undefined4 FUN_180592100(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char local_18 [4];
  undefined4 local_14;
  
  iVar1 = FUN_18059ee60(param_1,param_2);
  if (iVar1 == 0) {
    local_14 = 0;
  }
  else {
    iVar1 = FUN_18059e9c0(param_1,local_18);
    if ((iVar1 == 0) || ((local_18[0] == '.' && (lVar2 = FUN_18059e7c0(param_1), lVar2 != 0)))) {
      local_14 = 1;
    }
    else {
      local_14 = 0;
    }
  }
  return local_14;
}


/* address=180592270 name=FUN_180592270 */

undefined * FUN_180592270(void)

{
  return &DAT_18074d290;
}


/* address=180592280 name=FUN_180592280 */

longlong FUN_180592280(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_18067b854(param_1,param_2);
  if (lVar1 == 0) {
    FUN_18050f6f0(2,0,0,s_D__a_1_s_target_x86_64_pc_window_180963d50,CONCAT44(uVar4,0x62));
    FUN_18050f810(5,s_fopen___180963dd0,param_1,&DAT_180963dcc,param_2,&DAT_180963dc8);
    uVar4 = (undefined4)((ulonglong)param_2 >> 0x20);
    piVar2 = (int *)FUN_180677424();
    if (*piVar2 == 2) {
      FUN_18050f6f0(0x11,0,0x6e,s_D__a_1_s_target_x86_64_pc_window_180963de0,CONCAT44(uVar4,0x66));
    }
    else {
      FUN_18050f6f0(0x11,0,0x70,s_D__a_1_s_target_x86_64_pc_window_180963e60,CONCAT44(uVar4,0x68));
    }
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_180592390(lVar1,1);
    if (lVar3 == 0) {
      FUN_18067b170(lVar1);
      lVar3 = 0;
    }
  }
  return lVar3;
}


/* address=180592390 name=FUN_180592390 */

longlong FUN_180592390(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180592270();
  lVar2 = FUN_18058c4e0(uVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_180592410(lVar2,param_1,param_2);
  }
  return lVar2;
}


/* address=180592410 name=FUN_180592410 */

void FUN_180592410(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_18058ca80(param_1,0x6a,param_3,param_2);
  return;
}


/* address=180592450 name=FUN_180592450 */

void FUN_180592450(undefined8 param_1,undefined8 param_2)

{
  FUN_18058ca80(param_1,0x6c,3,param_2);
  return;
}


/* address=1805925b0 name=FUN_1805925b0 */

undefined8 FUN_1805925b0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if ((*(int *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      FUN_18067b170(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 1;
}


/* address=180592bb0 name=FUN_180592bb0 */

undefined8 FUN_180592bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_180592390(param_2,0);
  if (lVar1 == 0) {
    FUN_18050f6f0(0xc,0,7,s_D__a_1_s_target_x86_64_pc_window_180964180,0x53);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180592c40(param_1,lVar1,param_3);
    FUN_18058c580(lVar1);
  }
  return uVar2;
}


/* address=180592c40 name=FUN_180592c40 */

undefined8 FUN_180592c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_18058d2a0(param_2,&local_28,local_20,0x7fffffff);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_1805a22c0(param_3,&local_18,local_20[0],param_1);
    FUN_18058f610(local_28);
  }
  return local_10;
}


/* address=180592cc0 name=FUN_180592cc0 */

undefined4 FUN_180592cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_180592390(param_2,0);
  if (lVar2 == 0) {
    FUN_18050f6f0(0xc,0,7,s_D__a_1_s_target_x86_64_pc_window_180964200,0x43);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180592d50(param_1,lVar2,param_3);
    FUN_18058c580(lVar2);
  }
  return uVar1;
}


/* address=180592d50 name=FUN_180592d50 */

undefined4 FUN_180592d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_1805a45a0(param_3,local_10,param_1);
  if (local_10[0] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18058c930(param_2,local_10[0],(longlong)iVar1);
    FUN_18058f610(local_10[0]);
  }
  return uVar2;
}


/* address=180592dc0 name=FUN_180592dc0 */

longlong FUN_180592dc0(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  wchar_t *local_18 [3];
  
  lVar3 = FUN_180565a90();
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = wcstoul(param_1,local_18,0x20000010);
  if (((uVar1 != 0) && (iVar2 = FUN_180593080(local_18,lVar3), iVar2 != 0)) &&
     (iVar2 = FUN_180593080(local_18,lVar3 + 8), iVar2 != 0)) {
    lVar4 = FUN_18059e7c0(local_18);
    if (lVar4 != 0) {
      iVar2 = FUN_18059f1b0(local_18,&local_20);
      if ((iVar2 == 0) || (0xffffffff < CONCAT44(uStack_1c,local_20))) goto LAB_180592e81;
      *(undefined4 *)(lVar3 + 0x28) = local_20;
    }
    lVar4 = FUN_18059e7c0(local_18);
    if (lVar4 == 0) {
      return lVar3;
    }
  }
LAB_180592e81:
  FUN_18050f6f0(5,0,0x68,s_D__a_1_s_target_x86_64_pc_window_180964420,0x74);
  FUN_180565af0(lVar3);
  return 0;
}


/* address=180592ec0 name=FUN_180592ec0 */

undefined8 FUN_180592ec0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_180590d60(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_1805930f0(local_38,*param_2), iVar1 != 0)) &&
      (iVar1 = FUN_1805930f0(local_38,param_2[1]), iVar1 != 0)) &&
     (((*(int *)(param_2 + 5) == 0 ||
       (iVar1 = FUN_180591220(local_38,*(undefined4 *)(param_2 + 5)), iVar1 != 0)) &&
      (iVar1 = FUN_180590820(param_1), iVar1 != 0)))) {
    return 1;
  }
  FUN_18050f6f0(5,0,0x69,s_D__a_1_s_target_x86_64_pc_window_1809644a0,0x81);
  return 0;
}


/* address=180592f80 name=FUN_180592f80 */

longlong FUN_180592f80(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_18059e730(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_180592dc0(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_180565af0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_18059e7a0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=180593020 name=FUN_180593020 */

undefined8 FUN_180593020(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_180590610(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_180592ec0(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_1805ad270(local_38,param_2);
    return uVar2;
  }
  FUN_1805906d0(local_38);
  return 0xffffffff;
}


/* address=180593080 name=FUN_180593080 */

undefined8 FUN_180593080(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    FID_conflict__assert(u__out____NULL_180964380,u_D__a_1_s_target_x86_64_pc_window_180964280,0x46)
    ;
  }
  lVar1 = FUN_18053d800();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180615bd0(param_1,*param_2);
  }
  return uVar2;
}


/* address=1805930f0 name=FUN_1805930f0 */

undefined8 FUN_1805930f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_18050f6f0(5,0,0x43,s_D__a_1_s_target_x86_64_pc_window_1809643a0,0x51);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180615cb0(param_1,param_2);
  }
  return uVar1;
}


/* address=180593140 name=FUN_180593140 */

longlong FUN_180593140(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *local_20 [4];
  
  lVar3 = FUN_180599d90();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = wcstoul(param_1,local_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_180593f90(local_20,lVar3), iVar2 == 0)) ||
        (iVar2 = FUN_180593f90(local_20,lVar3 + 8), iVar2 == 0)) ||
       (lVar4 = FUN_18059e7c0(local_20), lVar4 != 0)) {
      FUN_18050f6f0(10,0,0x69,s_D__a_1_s_target_x86_64_pc_window_1809649c0,0xa0);
      FUN_180599de0(lVar3);
      lVar3 = 0;
    }
  }
  return lVar3;
}


/* address=180593200 name=FUN_180593200 */

undefined8 FUN_180593200(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_180590d60(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_180594000(local_38,*param_2), iVar1 != 0)) &&
      (iVar1 = FUN_180594000(local_38,param_2[1]), iVar1 != 0)) &&
     (iVar1 = FUN_180590820(param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_18050f6f0(10,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180964a40,0xad);
  return 0;
}


/* address=1805932a0 name=FUN_1805932a0 */

longlong FUN_1805932a0(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *local_20 [4];
  
  lVar3 = FUN_180598bf0();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,local_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_180593f90(local_20,lVar3 + 0x20), iVar2 == 0)) ||
        (iVar2 = FUN_180593f90(local_20,lVar3 + 8), iVar2 == 0)) ||
       (((iVar2 = FUN_180593f90(local_20,lVar3 + 0x10), iVar2 == 0 ||
         (iVar2 = FUN_180593f90(local_20,lVar3 + 0x18), iVar2 == 0)) ||
        (lVar4 = FUN_18059e7c0(local_20), lVar4 != 0)))) {
      FUN_18050f6f0(10,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180964ac0,0xbf);
    }
    else {
      iVar2 = FUN_180593cb0(lVar3);
      if (iVar2 != 0) {
        return lVar3;
      }
    }
    FUN_180598c60(lVar3);
  }
  return 0;
}


/* address=1805933b0 name=FUN_1805933b0 */

undefined8 FUN_1805933b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_180590d60(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) &&
       (iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0)) &&
      (iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
     (((iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0 &&
       (iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0)) &&
      (iVar1 = FUN_180590820(param_1), iVar1 != 0)))) {
    return 1;
  }
  FUN_18050f6f0(10,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180964b40,0xd4);
  return 0;
}


/* address=180593480 name=FUN_180593480 */

longlong FUN_180593480(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_20;
  wchar_t *local_18 [3];
  
  lVar3 = FUN_180598bf0();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,local_18,0x20000010);
    if ((uVar1 == 0) || (iVar2 = FUN_18059f1b0(local_18,&local_20), iVar2 == 0)) {
      FUN_18050f6f0(10,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180964cc0,0x109);
    }
    else if (local_20 == 0) {
      iVar2 = FUN_180593f90(local_18,lVar3 + 8);
      if ((((iVar2 == 0) || (iVar2 = FUN_180593f90(local_18,lVar3 + 0x10), iVar2 == 0)) ||
          (iVar2 = FUN_180593f90(local_18,lVar3 + 0x18), iVar2 == 0)) ||
         (((iVar2 = FUN_180593f90(local_18,lVar3 + 0x20), iVar2 == 0 ||
           (iVar2 = FUN_180593f90(local_18,lVar3 + 0x28), iVar2 == 0)) ||
          (lVar4 = FUN_18059e7c0(local_18), lVar4 != 0)))) {
        FUN_18050f6f0(10,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180964dc0,0x118);
      }
      else {
        iVar2 = FUN_180593cb0(lVar3);
        if (iVar2 != 0) {
          return lVar3;
        }
      }
    }
    else {
      FUN_18050f6f0(10,0,0x68,s_D__a_1_s_target_x86_64_pc_window_180964d40,0x10e);
    }
    FUN_180598c60(lVar3);
  }
  return 0;
}


/* address=180593610 name=FUN_180593610 */

undefined8 FUN_180593610(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_180590d60(param_1,local_38,0x20000010);
  if (((((iVar1 != 0) && (iVar1 = FUN_180591220(local_38,0), iVar1 != 0)) &&
       (iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
      ((iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0 &&
       (iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0)))) &&
     ((iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0 &&
      ((iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 0x28)), iVar1 != 0 &&
       (iVar1 = FUN_180590820(param_1), iVar1 != 0)))))) {
    return 1;
  }
  FUN_18050f6f0(10,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180964e40,0x130);
  return 0;
}


/* address=180593710 name=FUN_180593710 */

longlong FUN_180593710(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *local_20 [4];
  
  lVar3 = FUN_180598bf0();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,local_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_180593f90(local_20,lVar3 + 8), iVar2 == 0)) ||
        (iVar2 = FUN_180593f90(local_20,lVar3 + 0x10), iVar2 == 0)) ||
       ((iVar2 = FUN_180593f90(local_20,lVar3 + 0x18), iVar2 == 0 ||
        (lVar4 = FUN_18059e7c0(local_20), lVar4 != 0)))) {
      FUN_18050f6f0(10,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180964bc0,0xe5);
    }
    else {
      iVar2 = FUN_180593cb0(lVar3);
      if (iVar2 != 0) {
        return lVar3;
      }
    }
    FUN_180598c60(lVar3);
  }
  return 0;
}


/* address=180593800 name=FUN_180593800 */

undefined8 FUN_180593800(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_180590d60(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0))
      && (iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) &&
     ((iVar1 = FUN_180594000(local_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0 &&
      (iVar1 = FUN_180590820(param_1), iVar1 != 0)))) {
    return 1;
  }
  FUN_18050f6f0(10,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180964c40,0xf9);
  return 0;
}


/* address=1805938b0 name=FUN_1805938b0 */

longlong FUN_1805938b0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_18059e730(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_180593140(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_180599de0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_18059e7a0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=180593950 name=FUN_180593950 */

undefined8 FUN_180593950(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_180590610(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_180593200(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_1805ad270(local_38,param_2);
    return uVar2;
  }
  FUN_1805906d0(local_38);
  return 0xffffffff;
}


/* address=180593a50 name=FUN_180593a50 */

undefined8 FUN_180593a50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_180590610(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_1805933b0(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_1805ad270(local_38,param_2);
    return uVar2;
  }
  FUN_1805906d0(local_38);
  return 0xffffffff;
}


/* address=180593ab0 name=FUN_180593ab0 */

longlong FUN_180593ab0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_18059e730(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_180593480(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_180598c60(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_18059e7a0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=180593b50 name=FUN_180593b50 */

undefined8 FUN_180593b50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_180590610(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_180593610(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_1805ad270(local_38,param_2);
    return uVar2;
  }
  FUN_1805906d0(local_38);
  return 0xffffffff;
}


/* address=180593bb0 name=FUN_180593bb0 */

longlong FUN_180593bb0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_18059e730(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_180593710(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_180598c60(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_18059e7a0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=180593c50 name=FUN_180593c50 */

undefined8 FUN_180593c50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_180590610(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_180593800(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_1805ad270(local_38,param_2);
    return uVar2;
  }
  FUN_1805906d0(local_38);
  return 0xffffffff;
}


/* address=180593cb0 name=FUN_180593cb0 */

undefined8 FUN_180593cb0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(longlong *)(param_1 + 0x18) == 0)) {
    FUN_18050f6f0(10,0,0x65,s_D__a_1_s_target_x86_64_pc_window_180964520,0x4b);
    return 0;
  }
  iVar1 = FUN_18053dc90(*(undefined8 *)(param_1 + 8));
  if ((((((iVar1 != 0) || (iVar1 = FUN_18053dc90(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) ||
        ((iVar1 = FUN_18053fc40(*(undefined8 *)(param_1 + 8)), iVar1 != 0 ||
         ((iVar1 = FUN_18053fc40(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0 ||
          (iVar1 = FUN_18053fd10(*(undefined8 *)(param_1 + 8)), iVar1 == 0)))))) ||
       (iVar1 = FUN_18053fd10(*(undefined8 *)(param_1 + 0x10)), iVar1 == 0)) ||
      (((iVar1 = FUN_18053f880(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8)),
        -1 < iVar1 || (iVar1 = FUN_18053dc90(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) ||
       (iVar1 = FUN_18053fc40(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)))) ||
     (iVar1 = FUN_18053f880(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8)),
     -1 < iVar1)) {
    FUN_18050f6f0(10,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_1809645a0,0x5c);
    return 0;
  }
  iVar1 = FUN_18053daa0(*(undefined8 *)(param_1 + 0x10));
  if (((iVar1 != 0xa0) && (iVar1 != 0xe0)) && (iVar1 != 0x100)) {
    FUN_18050f6f0(10,0,100,s_D__a_1_s_target_x86_64_pc_window_180964620,99);
    return 0;
  }
  uVar2 = FUN_18053daa0(*(undefined8 *)(param_1 + 8));
  if (10000 < uVar2) {
    FUN_18050f6f0(10,0,0x66,s_D__a_1_s_target_x86_64_pc_window_1809646a0,0x6a);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (((iVar1 = FUN_18053dc90(*(undefined8 *)(param_1 + 0x20)), iVar1 != 0 ||
       (iVar1 = FUN_18053fc40(*(undefined8 *)(param_1 + 0x20)), iVar1 != 0)) ||
      (iVar1 = FUN_18053f880(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8)),
      -1 < iVar1)))) {
    FUN_18050f6f0(10,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_180964720,0x72);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (((iVar1 = FUN_18053dc90(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0 ||
       (iVar1 = FUN_18053fc40(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) ||
      (iVar1 = FUN_18053f880(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10)),
      -1 < iVar1)))) {
    FUN_18050f6f0(10,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_1809647a0,0x7c);
    return 0;
  }
  return 1;
}


/* address=180593f90 name=FUN_180593f90 */

undefined8 FUN_180593f90(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    FID_conflict__assert(u__out____NULL_180964918,u_D__a_1_s_target_x86_64_pc_window_180964820,0x85)
    ;
  }
  lVar1 = FUN_18053d800();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180615bd0(param_1,*param_2);
  }
  return uVar2;
}


/* address=180594000 name=FUN_180594000 */

undefined8 FUN_180594000(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_18050f6f0(10,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180964940,0x90);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180615cb0(param_1,param_2);
  }
  return uVar1;
}


/* address=180594050 name=FUN_180594050 */

undefined8 FUN_180594050(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_18050dd40(param_1);
  if (iVar1 == 6) {
    uVar2 = FUN_18050de10(param_1);
    uVar2 = FUN_180594ac0(uVar2,param_2);
  }
  else if (iVar1 == 0x74) {
    uVar2 = FUN_18050df10(param_1);
    uVar2 = FUN_180593b50(uVar2,param_2);
  }
  else if (iVar1 == 0x198) {
    uVar2 = FUN_18050e010(param_1);
    uVar2 = FUN_18058ec00(uVar2,param_2);
  }
  else {
    FUN_18050f6f0(0xc,0,0xbb,s_D__a_1_s_target_x86_64_pc_window_180964ec0,0x4c);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* address=1805941c0 name=FUN_1805941c0 */

longlong FUN_1805941c0(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *local_20 [4];
  
  lVar3 = FUN_180568b10();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = wcstoul(param_1,local_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_180594b20(local_20,lVar3 + 8), iVar2 == 0)) ||
        (iVar2 = FUN_180594b20(local_20,lVar3 + 0x10), iVar2 == 0)) ||
       (lVar4 = FUN_18059e7c0(local_20), lVar4 != 0)) {
      FUN_18050f6f0(4,0,100,s_D__a_1_s_target_x86_64_pc_window_1809650e0,100);
      FUN_180568c70(lVar3);
      lVar3 = 0;
    }
    else {
      iVar2 = FUN_1805698b0(lVar3);
      if (iVar2 == 0) {
        FUN_18050f6f0(4,0,0x68,s_D__a_1_s_target_x86_64_pc_window_180965160,0x6a);
        FUN_180568c70(lVar3);
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}


/* address=1805942c0 name=FUN_1805942c0 */

longlong FUN_1805942c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined local_20 [32];
  
  FUN_18059e730(local_20,param_1,param_2);
  lVar1 = FUN_1805941c0(local_20);
  if ((lVar1 == 0) || (lVar2 = FUN_18059e7c0(local_20), lVar2 != 0)) {
    FUN_18050f6f0(4,0,100,s_D__a_1_s_target_x86_64_pc_window_1809651e0,0x77);
    FUN_180568c70(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=180594350 name=FUN_180594350 */

undefined8 FUN_180594350(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_180590d60(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_180594b90(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0))
      && (iVar1 = FUN_180594b90(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) &&
     (iVar1 = FUN_180590820(param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_18050f6f0(4,0,0x79,s_D__a_1_s_target_x86_64_pc_window_180965260,0x84);
  return 0;
}


/* address=1805943f0 name=FUN_1805943f0 */

undefined8 FUN_1805943f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  FUN_1805905e0(local_38);
  iVar1 = FUN_180590610(local_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_180594350(local_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_180590740(local_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_18050f6f0(4,0,0x79,s_D__a_1_s_target_x86_64_pc_window_1809652e0,0x91);
  FUN_1805906d0(local_38);
  return 0;
}


/* address=180594490 name=FUN_180594490 */

longlong FUN_180594490(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_20;
  wchar_t *local_18 [3];
  
  lVar3 = FUN_180568b10();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,local_18,0x20000010);
    if ((uVar1 == 0) || (iVar2 = FUN_18059f1b0(local_18,&local_20), iVar2 == 0)) {
      FUN_18050f6f0(4,0,100,s_D__a_1_s_target_x86_64_pc_window_180965360,0xa6);
    }
    else if (local_20 == DAT_18074d2e0) {
      iVar2 = FUN_180594b20(local_18,lVar3 + 8);
      if (((((iVar2 != 0) && (iVar2 = FUN_180594b20(local_18,lVar3 + 0x10), iVar2 != 0)) &&
           (iVar2 = FUN_180594b20(local_18,lVar3 + 0x18), iVar2 != 0)) &&
          ((iVar2 = FUN_180594b20(local_18,lVar3 + 0x20), iVar2 != 0 &&
           (iVar2 = FUN_180594b20(local_18,lVar3 + 0x28), iVar2 != 0)))) &&
         ((iVar2 = FUN_180594b20(local_18,lVar3 + 0x30), iVar2 != 0 &&
          ((iVar2 = FUN_180594b20(local_18,lVar3 + 0x38), iVar2 != 0 &&
           (iVar2 = FUN_180594b20(local_18,lVar3 + 0x40), iVar2 != 0)))))) {
        lVar4 = FUN_18059e7c0(local_18);
        if (lVar4 == 0) {
          iVar2 = FUN_1805698b0(lVar3);
          if (iVar2 != 0) {
            return lVar3;
          }
          FUN_18050f6f0(4,0,0x68,s_D__a_1_s_target_x86_64_pc_window_1809654e0,0xc0);
        }
        else {
          FUN_18050f6f0(4,0,100,s_D__a_1_s_target_x86_64_pc_window_180965460,0xbb);
        }
      }
    }
    else {
      FUN_18050f6f0(4,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_1809653e0,0xab);
    }
    FUN_180568c70(lVar3);
  }
  return 0;
}


/* address=1805946a0 name=FUN_1805946a0 */

longlong FUN_1805946a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined local_20 [32];
  
  FUN_18059e730(local_20,param_1,param_2);
  lVar1 = FUN_180594490(local_20);
  if ((lVar1 == 0) || (lVar2 = FUN_18059e7c0(local_20), lVar2 != 0)) {
    FUN_18050f6f0(4,0,100,s_D__a_1_s_target_x86_64_pc_window_180965560,0xd0);
    FUN_180568c70(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=180594730 name=FUN_180594730 */

undefined8 FUN_180594730(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_180590d60(param_1,local_38,0x20000010);
  if ((((((iVar1 != 0) && (iVar1 = FUN_180591220(local_38,DAT_18074d2e0), iVar1 != 0)) &&
        (iVar1 = FUN_180594b90(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
       ((iVar1 = FUN_180594b90(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0 &&
        (iVar1 = FUN_180594b90(local_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0)))) &&
      ((iVar1 = FUN_180594b90(local_38,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0 &&
       ((iVar1 = FUN_180594b90(local_38,*(undefined8 *)(param_2 + 0x28)), iVar1 != 0 &&
        (iVar1 = FUN_180594b90(local_38,*(undefined8 *)(param_2 + 0x30)), iVar1 != 0)))))) &&
     ((iVar1 = FUN_180594b90(local_38,*(undefined8 *)(param_2 + 0x38)), iVar1 != 0 &&
      ((iVar1 = FUN_180594b90(local_38,*(undefined8 *)(param_2 + 0x40)), iVar1 != 0 &&
       (iVar1 = FUN_180590820(param_1), iVar1 != 0)))))) {
    return 1;
  }
  FUN_18050f6f0(4,0,0x79,s_D__a_1_s_target_x86_64_pc_window_1809655e0,0xe4);
  return 0;
}


/* address=180594880 name=FUN_180594880 */

undefined8 FUN_180594880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  FUN_1805905e0(local_38);
  iVar1 = FUN_180590610(local_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_180594730(local_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_180590740(local_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_18050f6f0(4,0,0x79,s_D__a_1_s_target_x86_64_pc_window_180965660,0xf1);
  FUN_1805906d0(local_38);
  return 0;
}


/* address=180594920 name=FUN_180594920 */

longlong FUN_180594920(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_18059e730(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_1805941c0(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_180568c70(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_18059e7a0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=1805949c0 name=FUN_1805949c0 */

undefined8 FUN_1805949c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_180590610(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_180594350(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_1805ad270(local_38,param_2);
    return uVar2;
  }
  FUN_1805906d0(local_38);
  return 0xffffffff;
}


/* address=180594a20 name=FUN_180594a20 */

longlong FUN_180594a20(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_18059e730(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_180594490(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_180568c70(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_18059e7a0(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=180594ac0 name=FUN_180594ac0 */

undefined8 FUN_180594ac0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_180590610(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_180594730(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_1805ad270(local_38,param_2);
    return uVar2;
  }
  FUN_1805906d0(local_38);
  return 0xffffffff;
}


/* address=180594b20 name=FUN_180594b20 */

undefined8 FUN_180594b20(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    FID_conflict__assert(u__out____NULL_180965040,u_D__a_1_s_target_x86_64_pc_window_180964f40,0x49)
    ;
  }
  lVar1 = FUN_18053d800();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180615bd0(param_1,*param_2);
  }
  return uVar2;
}


/* address=180594b90 name=FUN_180594b90 */

undefined8 FUN_180594b90(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_18050f6f0(4,0,0x90,s_D__a_1_s_target_x86_64_pc_window_180965060,0x54);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180615cb0(param_1,param_2);
  }
  return uVar1;
}


/* address=180594be0 name=FUN_180594be0 */

void FUN_180594be0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180594c00 name=FUN_180594c00 */

void FUN_180594c00(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180594c30 name=FUN_180594c30 */

void FUN_180594c30(undefined8 param_1)

{
  FUN_1805158a0(param_1);
  return;
}


/* address=180594c50 name=FUN_180594c50 */

longlong FUN_180594c50(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  lVar1 = FUN_180594c30(param_1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    for (local_18 = 0; uVar2 = FUN_180594be0(lVar1), local_18 < uVar2; local_18 = local_18 + 1) {
      uVar3 = FUN_180594c00(lVar1,local_18);
      FUN_180515dc0(uVar3);
    }
  }
  return lVar1;
}


/* address=180594cd0 name=FUN_180594cd0 */

undefined8 FUN_180594cd0(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 8);
}


/* address=180594cf0 name=FUN_180594cf0 */

undefined8 FUN_180594cf0(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x18);
}


/* address=180594d10 name=FUN_180594d10 */

undefined8 FUN_180594d10(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x28);
}


/* address=180594d30 name=FUN_180594d30 */

undefined8 FUN_180594d30(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180514b10(*(undefined8 *)(*param_1 + 0x30));
  }
  return uVar1;
}


/* address=180594d70 name=FUN_180594d70 */

undefined8 FUN_180594d70(longlong *param_1)

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


/* address=180594ee0 name=FUN_180594ee0 */

undefined8 FUN_180594ee0(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 8);
}


/* address=180594f00 name=FUN_180594f00 */

bool FUN_180594f00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_14;
  
  lVar1 = FUN_180594d30(param_1);
  if (lVar1 == 0) {
    local_14 = -2;
  }
  else {
    local_14 = FUN_18050da50(lVar1,param_2);
  }
  if (local_14 == -2) {
    FUN_18050f6f0(0xb,0,0x80,s_D__a_1_s_target_x86_64_pc_window_1809657e0,0x110);
  }
  else if (local_14 == -1) {
    FUN_18050f6f0(0xb,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180965760,0x10d);
  }
  else if (local_14 == 0) {
    FUN_18050f6f0(0xb,0,0x74,s_D__a_1_s_target_x86_64_pc_window_1809656e0,0x10a);
  }
  if (lVar1 != 0) {
    FUN_18050d980(lVar1);
  }
  return 0 < local_14;
}


/* address=180595070 name=FUN_180595070 */

void FUN_180595070(longlong *param_1,longlong *param_2)

{
  FUN_180595190(*(undefined8 *)(*param_1 + 0x28),*(undefined8 *)(*param_2 + 0x28));
  return;
}


/* address=180595140 name=FUN_180595140 */

void FUN_180595140(longlong param_1,longlong param_2)

{
  FUN_180616b20(param_1);
  FUN_180616b20(param_2);
  FUN_1805954c0(param_1 + 0x68,param_2 + 0x68,0x20);
  return;
}


/* address=180595190 name=FUN_180595190 */

ulonglong FUN_180595190(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) &&
     (iVar1 = FUN_180513900(param_1,0), iVar1 < 0)) {
    return 0xfffffffe;
  }
  if (((*(longlong *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) &&
     (iVar1 = FUN_180513900(param_2,0), iVar1 < 0)) {
    return 0xfffffffe;
  }
  uVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x20);
  if (uVar2 == 0) {
    uVar3 = FUN_1805954c0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
                          (longlong)*(int *)(param_1 + 0x20));
  }
  else {
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}


/* address=180595260 name=FUN_180595260 */

void FUN_180595260(longlong param_1)

{
  int iVar1;
  undefined auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30 [6];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_180513900(param_1,0);
  local_48 = FUN_180532230();
  local_40 = 0;
  iVar1 = FUN_180532a20(*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20),local_30,
                        0);
  if (iVar1 != 0) {
    local_38 = local_30[0];
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_68);
  return;
}


/* address=180595330 name=FUN_180595330 */

void FUN_180595330(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_68 [32];
  undefined4 local_48;
  undefined local_40 [32];
  undefined4 local_20 [4];
  ulonglong local_10;
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_180513900(param_1,0);
  FUN_180532380(local_40);
  uVar2 = FUN_180532200();
  iVar1 = FUN_1805327c0(local_40,uVar2,0);
  if (iVar1 != 0) {
    iVar1 = FUN_1805328f0(local_40,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),
                          **(undefined8 **)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_180532930(local_40,local_20,0);
      if (iVar1 != 0) {
        local_48 = local_20[0];
      }
    }
  }
  FUN_1805323f0(local_40);
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=180595440 name=FUN_180595440 */

void FUN_180595440(longlong *param_1,longlong *param_2)

{
  FUN_180595190(*(undefined8 *)(*param_1 + 0x10),*(undefined8 *)(*param_2 + 0x10));
  return;
}


/* address=180595480 name=FUN_180595480 */

void FUN_180595480(longlong param_1,longlong param_2)

{
  FUN_1805954c0(param_1 + 0x48,param_2 + 0x48,0x20);
  return;
}


/* address=1805954c0 name=FUN_1805954c0 */

int FUN_1805954c0(void *param_1,void *param_2,size_t param_3)

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


/* address=180595500 name=FUN_180595500 */

void FUN_180595500(void)

{
  FUN_1805a1340(&DAT_18074d2f0);
  return;
}


/* address=180595520 name=FUN_180595520 */

void FUN_180595520(undefined8 param_1)

{
  FUN_1805a76a0(&DAT_18074d2f0,param_1);
  return;
}


/* address=180595550 name=FUN_180595550 */

void FUN_180595550(undefined8 param_1)

{
  FUN_1805a1c20(param_1,&DAT_18074d2f0);
  return;
}


/* address=180595580 name=FUN_180595580 */

void FUN_180595580(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1805a22c0(param_1,param_2,param_3,&DAT_18074d2f0);
  return;
}


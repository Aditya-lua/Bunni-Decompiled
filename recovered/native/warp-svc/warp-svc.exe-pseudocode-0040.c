/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=142c26710 name=FUN_142c26710 */

void FUN_142c26710(undefined8 param_1,byte *param_2)

{
  FUN_142b3b560(param_2,0x20);
  *param_2 = *param_2 | 7;
  param_2[0x1f] = param_2[0x1f] & 0xbf;
  param_2[0x1f] = param_2[0x1f] | 0x80;
  FUN_142c26830(param_1,param_2);
  return;
}


/* address=142c267c0 name=FUN_142c267c0 */

bool FUN_142c267c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_142c345c0(param_1,param_2,param_3);
  iVar1 = FUN_142b0ec70(&DAT_143299820,param_1,0x20);
  return iVar1 != 0;
}


/* address=142c26830 name=FUN_142c26830 */

void FUN_142c26830(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_178 [32];
  undefined auStack_158 [40];
  undefined auStack_130 [40];
  undefined auStack_108 [48];
  undefined auStack_d8 [40];
  undefined auStack_b0 [40];
  undefined auStack_88 [80];
  byte abStack_38 [31];
  byte bStack_19;
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_178;
  FUN_142c26fb0(abStack_38,param_2,0x20);
  abStack_38[0] = abStack_38[0] & 0xf8;
  bStack_19 = bStack_19 & 0x7f | 0x40;
  FUN_142c27d40(auStack_d8,abStack_38);
  FUN_142c2e260(auStack_108,auStack_88,auStack_b0);
  FUN_142c2e3b0(auStack_130,auStack_88,auStack_b0);
  FUN_142c2ee70(auStack_158,auStack_130);
  FUN_142c2e810(auStack_158,auStack_108,auStack_158);
  FUN_142c2e0f0(param_1,auStack_158);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_178);
  return;
}


/* address=142c26980 name=FUN_142c26980 */

void FUN_142c26980(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  FUN_142b3b560(auStack_38,0x20);
  FUN_142c26e80(param_1,param_2,auStack_38);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c269e0 name=FUN_142c269e0 */

void FUN_142c269e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined auStack_278 [32];
  undefined auStack_258 [224];
  undefined auStack_178 [160];
  byte abStack_d8 [31];
  byte bStack_b9;
  undefined auStack_b8 [32];
  undefined auStack_98 [64];
  undefined auStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_278;
  FUN_142b11770(param_4,0x20,abStack_d8);
  abStack_d8[0] = abStack_d8[0] & 0xf8;
  bStack_b9 = bStack_b9 & 0x3f | 0x40;
  FUN_142b113a0(auStack_258);
  FUN_142b114d0(auStack_258,auStack_b8,0x20);
  FUN_142b114d0(auStack_258,param_2,param_3);
  FUN_142b11730(auStack_98,auStack_258);
  FUN_142c28380(auStack_98);
  FUN_142c27d40(auStack_178,auStack_98);
  FUN_142c2f710(param_1,auStack_178);
  FUN_142b113a0(auStack_258);
  FUN_142b114d0(auStack_258,param_1,0x20);
  FUN_142b114d0(auStack_258,param_4 + 0x20,0x20);
  FUN_142b114d0(auStack_258,param_2,param_3);
  FUN_142b11730(auStack_58,auStack_258);
  FUN_142c28380(auStack_58);
  FUN_142c30d60(param_1 + 0x20,auStack_58,abStack_d8,auStack_98);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_278);
  return;
}


/* address=142c26bf0 name=FUN_142c26bf0 */

void FUN_142c26bf0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined auStack_338 [32];
  longlong lStack_318;
  uint uStack_310;
  ulonglong uStack_308;
  undefined auStack_300 [40];
  undefined auStack_2d8 [120];
  undefined auStack_260 [40];
  undefined auStack_238 [224];
  undefined auStack_158 [128];
  undefined auStack_d8 [32];
  undefined auStack_b8 [32];
  undefined auStack_98 [32];
  undefined auStack_78 [64];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_338;
  if (((*(byte *)(param_3 + 0x3f) & 0xe0) == 0) &&
     (iVar1 = FUN_142c271b0(auStack_2d8,param_4), iVar1 != 0)) {
    FUN_142c2ec60(auStack_300,auStack_2d8);
    FUN_142c2e500(auStack_2d8,auStack_300);
    FUN_142c2ec60(auStack_300,auStack_260);
    FUN_142c2e500(auStack_260,auStack_300);
    FUN_142c26fb0(auStack_38,param_4,0x20);
    FUN_142c26fb0(auStack_b8,param_3,0x20);
    FUN_142c26fb0(auStack_d8,param_3 + 0x20,0x20);
    lStack_318 = 3;
    while (uStack_308 = FUN_142c27090(auStack_d8 + lStack_318 * 8),
          uStack_308 <= *(ulonglong *)(&DAT_143299800 + lStack_318 * 8)) {
      if (uStack_308 < *(ulonglong *)(&DAT_143299800 + lStack_318 * 8)) {
        FUN_142b113a0(auStack_238);
        FUN_142b114d0(auStack_238,param_3,0x20);
        FUN_142b114d0(auStack_238,param_4,0x20);
        FUN_142b114d0(auStack_238,param_1,param_2);
        FUN_142b11730(auStack_78,auStack_238);
        FUN_142c28380(auStack_78);
        FUN_142c30800(auStack_158,auStack_78,auStack_2d8,auStack_d8);
        FUN_142c270c0(auStack_98,auStack_158);
        iVar1 = FUN_142b0ec70(auStack_98,auStack_b8,0x20);
        uStack_310 = (uint)(iVar1 == 0);
        break;
      }
      if (lStack_318 == 0) break;
      lStack_318 = lStack_318 + -1;
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_338);
  return;
}


/* address=142c26e80 name=FUN_142c26e80 */

void FUN_142c26e80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined auStack_118 [32];
  undefined auStack_f8 [160];
  byte abStack_58 [31];
  byte bStack_39;
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  FUN_142b11770(param_3,0x20,abStack_58);
  abStack_58[0] = abStack_58[0] & 0xf8;
  bStack_39 = bStack_39 & 0x7f | 0x40;
  FUN_142c27d40(auStack_f8,abStack_58);
  FUN_142c2f710(param_1,auStack_f8);
  FUN_142c26fb0(param_2,param_3,0x20);
  FUN_142c26fb0(param_2 + 0x20,param_1,0x20);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=142c26fb0 name=FUN_142c26fb0 */

undefined8 FUN_142c26fb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c27000 name=FUN_142c27000 */

undefined8 FUN_142c27000(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c27050 name=FUN_142c27050 */

undefined8 FUN_142c27050(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c27090 name=FUN_142c27090 */

undefined8 FUN_142c27090(undefined8 param_1)

{
  undefined8 auStack_18 [3];
  
  FUN_142c26fb0(auStack_18,param_1,8);
  return auStack_18[0];
}


/* address=142c270c0 name=FUN_142c270c0 */

void FUN_142c270c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_b8 [32];
  longlong lStack_98;
  undefined auStack_90 [40];
  undefined auStack_68 [40];
  undefined auStack_40 [40];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_b8;
  FUN_142c2f1f0(auStack_90,param_2 + 0x50);
  FUN_142c2e7c0(auStack_40,param_2,auStack_90);
  FUN_142c2e7c0(auStack_68,param_2 + 0x28,auStack_90);
  FUN_142c2e0f0(param_1,auStack_68);
  lStack_98 = 0x1f;
  iVar1 = FUN_142c2f2e0(auStack_40);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + lStack_98) ^ (byte)(iVar1 << 7);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=142c271b0 name=FUN_142c271b0 */

void FUN_142c271b0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_128 [32];
  longlong lStack_108;
  undefined auStack_100 [40];
  undefined auStack_d8 [40];
  undefined auStack_b0 [40];
  undefined auStack_88 [40];
  undefined auStack_60 [40];
  undefined auStack_38 [40];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_128;
  FUN_142c2e070(param_1 + 0x28,param_2);
  FUN_142c2e1e0(param_1 + 0x50);
  FUN_142c2e9e0(auStack_d8,param_1 + 0x28);
  FUN_142c2e7c0(auStack_100,auStack_d8,&DAT_143299840);
  FUN_142c2e3b0(auStack_b0,auStack_d8,param_1 + 0x50);
  FUN_142c2e500(auStack_88,auStack_b0);
  FUN_142c2e260(auStack_b0,auStack_100,param_1 + 0x50);
  FUN_142c2e860(auStack_d8,auStack_88,auStack_b0);
  FUN_142c2f3a0(param_1,auStack_d8);
  FUN_142c2e7c0(param_1,param_1,auStack_88);
  FUN_142c2e9e0(auStack_100,param_1);
  FUN_142c2e860(auStack_100,auStack_100,auStack_b0);
  FUN_142c2e3b0(auStack_60,auStack_100,auStack_88);
  iVar1 = FUN_142c2f250(auStack_60);
  if (iVar1 != 0) {
    FUN_142c2e260(auStack_60,auStack_100,auStack_88);
    iVar1 = FUN_142c2f250(auStack_60);
    if (iVar1 != 0) goto LAB_142c2740c;
    FUN_142c2e7c0(param_1,param_1,&DAT_143299868);
  }
  iVar1 = FUN_142c2f2e0(param_1);
  if (iVar1 != (int)(uint)*(byte *)(param_2 + 0x1f) >> 7) {
    FUN_142c2ec60(auStack_38,param_1);
    FUN_142c2e500(param_1,auStack_38);
  }
  lStack_108 = param_1 + 0x78;
  FUN_142c2e7c0(lStack_108,param_1,param_1 + 0x28);
LAB_142c2740c:
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_128);
  return;
}


/* address=142c27430 name=FUN_142c27430 */

void FUN_142c27430(longlong param_1,longlong param_2)

{
  FUN_142c2e260(param_1,param_2 + 0x28,param_2);
  FUN_142c2e3b0(param_1 + 0x28,param_2 + 0x28,param_2);
  FUN_142c2ee10(param_1 + 0x50,param_2 + 0x50);
  FUN_142c2e720(param_1 + 0x78,param_2 + 0x78,&DAT_143299890);
  return;
}


/* address=142c274e0 name=FUN_142c274e0 */

void FUN_142c274e0(longlong param_1,longlong param_2)

{
  FUN_142c2e8b0(param_1,param_2,param_2 + 0x78);
  FUN_142c2e8b0(param_1 + 0x28,param_2 + 0x28,param_2 + 0x50);
  FUN_142c2e8b0(param_1 + 0x50,param_2 + 0x50,param_2 + 0x78);
  return;
}


/* address=142c27590 name=FUN_142c27590 */

void FUN_142c27590(longlong param_1,longlong param_2)

{
  FUN_142c2e8b0(param_1,param_2,param_2 + 0x78);
  FUN_142c2e8b0(param_1 + 0x28,param_2 + 0x28,param_2 + 0x50);
  FUN_142c2e8b0(param_1 + 0x50,param_2 + 0x50,param_2 + 0x78);
  FUN_142c2e8b0(param_1 + 0x78,param_2,param_2 + 0x28);
  return;
}


/* address=142c27670 name=FUN_142c27670 */

void FUN_142c27670(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_e8 [32];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined auStack_b8 [40];
  undefined auStack_90 [40];
  undefined auStack_68 [40];
  undefined auStack_40 [40];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_e8;
  lStack_c8 = param_1;
  FUN_142c2e260(param_1,param_2 + 0x28,param_2);
  lStack_c0 = param_1 + 0x28;
  FUN_142c2e3b0(lStack_c0,param_2 + 0x28,param_2);
  FUN_142c2e8b0(auStack_b8,param_1,param_3);
  FUN_142c2e8b0(auStack_68,param_1 + 0x28,param_3 + 0x28);
  FUN_142c2e810(auStack_40,param_3 + 0x78,param_2 + 0x78);
  FUN_142c2e860(auStack_90,param_2 + 0x50,param_3 + 0x50);
  FUN_142c2e260(param_1 + 0x78,auStack_90,auStack_90);
  FUN_142c2e3b0(param_1,auStack_b8,auStack_68);
  FUN_142c2e260(param_1 + 0x28,auStack_b8,auStack_68);
  FUN_142c2e500(auStack_b8,param_1 + 0x78);
  FUN_142c2e260(param_1 + 0x50,auStack_b8,auStack_40);
  FUN_142c2e3b0(param_1 + 0x78,auStack_b8,auStack_40);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_e8);
  return;
}


/* address=142c27880 name=FUN_142c27880 */

void FUN_142c27880(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_e8 [32];
  longlong lStack_c8;
  longlong lStack_c0;
  undefined auStack_b8 [40];
  undefined auStack_90 [40];
  undefined auStack_68 [40];
  undefined auStack_40 [40];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_e8;
  lStack_c8 = param_1;
  FUN_142c2e260(param_1,param_2 + 0x28,param_2);
  lStack_c0 = param_1 + 0x28;
  FUN_142c2e3b0(lStack_c0,param_2 + 0x28,param_2);
  FUN_142c2e8b0(auStack_b8,param_1,param_3 + 0x28);
  FUN_142c2e8b0(auStack_68,param_1 + 0x28,param_3);
  FUN_142c2e810(auStack_40,param_3 + 0x78,param_2 + 0x78);
  FUN_142c2e860(auStack_90,param_2 + 0x50,param_3 + 0x50);
  FUN_142c2e260(param_1 + 0x78,auStack_90,auStack_90);
  FUN_142c2e3b0(param_1,auStack_b8,auStack_68);
  FUN_142c2e260(param_1 + 0x28,auStack_b8,auStack_68);
  FUN_142c2e500(auStack_b8,param_1 + 0x78);
  FUN_142c2e3b0(param_1 + 0x50,auStack_b8,auStack_40);
  FUN_142c2e260(param_1 + 0x78,auStack_b8,auStack_40);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_e8);
  return;
}


/* address=142c27d40 name=FUN_142c27d40 */

void FUN_142c27d40(undefined8 param_1,longlong param_2)

{
  undefined auStack_238 [32];
  int iStack_218;
  char cStack_214;
  longlong lStack_210;
  longlong lStack_208;
  undefined auStack_1f8 [160];
  undefined auStack_158 [128];
  undefined auStack_d8 [128];
  byte abStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_238;
  for (iStack_218 = 0; iStack_218 < 0x20; iStack_218 = iStack_218 + 1) {
    abStack_58[iStack_218 * 2] = *(byte *)(param_2 + iStack_218) & 0xf;
    abStack_58[iStack_218 * 2 + 1] = (byte)((int)(uint)*(byte *)(param_2 + iStack_218) >> 4);
  }
  cStack_214 = '\0';
  for (iStack_218 = 0; iStack_218 < 0x3f; iStack_218 = iStack_218 + 1) {
    abStack_58[iStack_218] = abStack_58[iStack_218] + cStack_214;
    cStack_214 = (char)(abStack_58[iStack_218] + 8) >> 4;
    abStack_58[iStack_218] = abStack_58[iStack_218] - (char)((int)cStack_214 << 4);
  }
  abStack_58[63] = abStack_58[63] + cStack_214;
  FUN_142c2f850(param_1);
  for (iStack_218 = 1; iStack_218 < 0x40; iStack_218 = iStack_218 + 2) {
    lStack_210 = (longlong)iStack_218;
    FUN_142c30170(auStack_d8,iStack_218 / 2,abStack_58[lStack_210]);
    FUN_142c2fc30(auStack_1f8,param_1,auStack_d8);
    FUN_142c27590(param_1,auStack_1f8);
  }
  FUN_142c2fbc0(auStack_1f8,param_1);
  FUN_142c274e0(auStack_158,auStack_1f8);
  FUN_142c2fa30(auStack_1f8,auStack_158);
  FUN_142c274e0(auStack_158,auStack_1f8);
  FUN_142c2fa30(auStack_1f8,auStack_158);
  FUN_142c274e0(auStack_158,auStack_1f8);
  FUN_142c2fa30(auStack_1f8,auStack_158);
  FUN_142c27590(param_1,auStack_1f8);
  for (iStack_218 = 0; iStack_218 < 0x40; iStack_218 = iStack_218 + 2) {
    lStack_208 = (longlong)iStack_218;
    FUN_142c30170(auStack_d8,iStack_218 / 2,abStack_58[lStack_208]);
    FUN_142c2fc30(auStack_1f8,param_1,auStack_d8);
    FUN_142c27590(param_1,auStack_1f8);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_238);
  return;
}


/* address=142c28380 name=FUN_142c28380 */

void FUN_142c28380(undefined *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  undefined uStack_140;
  undefined uStack_e8;
  
  uVar1 = FUN_142c2de90(param_1);
  uVar2 = FUN_142c2df10(param_1 + 2);
  uVar3 = FUN_142c2de90(param_1 + 5);
  uVar4 = FUN_142c2df10(param_1 + 7);
  uVar5 = FUN_142c2df10(param_1 + 10);
  uVar6 = FUN_142c2de90(param_1 + 0xd);
  uVar7 = FUN_142c2df10(param_1 + 0xf);
  uVar8 = FUN_142c2de90(param_1 + 0x12);
  uVar9 = FUN_142c2de90(param_1 + 0x15);
  uVar10 = FUN_142c2df10(param_1 + 0x17);
  uVar11 = FUN_142c2de90(param_1 + 0x1a);
  uVar12 = FUN_142c2df10(param_1 + 0x1c);
  uVar13 = FUN_142c2df10(param_1 + 0x1f);
  uVar14 = FUN_142c2de90(param_1 + 0x22);
  uVar15 = FUN_142c2df10(param_1 + 0x24);
  uVar16 = FUN_142c2de90(param_1 + 0x27);
  uVar17 = FUN_142c2de90(param_1 + 0x2a);
  uVar18 = FUN_142c2df10(param_1 + 0x2c);
  uVar19 = FUN_142c2de90(param_1 + 0x2f);
  uVar19 = uVar19 >> 2 & 0x1fffff;
  uVar20 = FUN_142c2df10(param_1 + 0x31);
  uVar20 = uVar20 >> 7 & 0x1fffff;
  uVar21 = FUN_142c2df10(param_1 + 0x34);
  uVar21 = uVar21 >> 4 & 0x1fffff;
  uVar22 = FUN_142c2de90(param_1 + 0x37);
  uVar22 = uVar22 >> 1 & 0x1fffff;
  uVar23 = FUN_142c2df10(param_1 + 0x39);
  uVar23 = uVar23 >> 6 & 0x1fffff;
  uVar24 = FUN_142c2df10(param_1 + 0x3c);
  uVar24 = uVar24 >> 3;
  lVar36 = (uVar17 & 0x1fffff) + uVar24 * -0xa6f7d;
  lVar37 = (uVar15 >> 6 & 0x1fffff) + uVar24 * -0xf39ad + uVar23 * 0x215d1 + uVar22 * -0xa6f7d;
  lVar38 = (uVar13 >> 4 & 0x1fffff) + uVar24 * 0x72d18 + uVar23 * 0x9fb67 + uVar22 * -0xf39ad +
           uVar21 * 0x215d1 + uVar20 * -0xa6f7d;
  lVar39 = (uVar7 >> 6 & 0x1fffff) + uVar19 * 0xa2c13;
  lVar40 = (uVar9 & 0x1fffff) + uVar21 * 0xa2c13 + uVar20 * 0x72d18 + uVar19 * 0x9fb67;
  lVar41 = (uVar11 >> 2 & 0x1fffff) + uVar23 * 0xa2c13 + uVar22 * 0x72d18 + uVar21 * 0x9fb67 +
           uVar20 * -0xf39ad + uVar19 * 0x215d1;
  lVar25 = lVar39 + 0x100000 >> 0x15;
  lVar42 = (uVar8 >> 3 & 0x1fffff) + uVar20 * 0xa2c13 + uVar19 * 0x72d18 + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar26 = lVar40 + 0x100000 >> 0x15;
  lVar43 = (uVar10 >> 5 & 0x1fffff) + uVar22 * 0xa2c13 + uVar21 * 0x72d18 + uVar20 * 0x9fb67 +
           uVar19 * -0xf39ad + lVar26;
  lVar26 = FUN_142c30d40(lVar26);
  lVar27 = lVar41 + 0x100000 >> 0x15;
  lVar44 = (uVar12 >> 7 & 0x1fffff) + uVar24 * 0xa2c13 + uVar23 * 0x72d18 + uVar22 * 0x9fb67 +
           uVar21 * -0xf39ad + uVar20 * 0x215d1 + uVar19 * -0xa6f7d + lVar27;
  lVar27 = FUN_142c30d40(lVar27);
  lVar28 = lVar38 + 0x100000 >> 0x15;
  lVar45 = (uVar14 >> 1 & 0x1fffff) + uVar24 * 0x9fb67 + uVar23 * -0xf39ad + uVar22 * 0x215d1 +
           uVar21 * -0xa6f7d + lVar28;
  lVar28 = FUN_142c30d40(lVar28);
  lVar29 = lVar37 + 0x100000 >> 0x15;
  lVar46 = (uVar16 >> 3 & 0x1fffff) + uVar24 * 0x215d1 + uVar23 * -0xa6f7d + lVar29;
  lVar29 = FUN_142c30d40(lVar29);
  lVar30 = lVar36 + 0x100000 >> 0x15;
  lVar47 = (uVar18 >> 5 & 0x1fffff) + lVar30;
  lVar30 = FUN_142c30d40(lVar30);
  lVar31 = lVar42 + 0x100000 >> 0x15;
  lVar32 = FUN_142c30d40(lVar31);
  lVar33 = lVar43 + 0x100000 >> 0x15;
  lVar34 = FUN_142c30d40(lVar33);
  lVar35 = lVar44 + 0x100000 >> 0x15;
  lVar38 = (lVar38 - lVar28) + lVar35;
  lVar28 = FUN_142c30d40(lVar35);
  lVar35 = lVar45 + 0x100000 >> 0x15;
  lVar37 = (lVar37 - lVar29) + lVar35;
  lVar29 = FUN_142c30d40(lVar35);
  lVar45 = lVar45 - lVar29;
  lVar29 = lVar46 + 0x100000 >> 0x15;
  lVar35 = (lVar36 - lVar30) + lVar29;
  lVar29 = FUN_142c30d40(lVar29);
  lVar46 = lVar46 - lVar29;
  lVar48 = (lVar41 - lVar27) + lVar33 + lVar47 * -0xa6f7d;
  lVar49 = (lVar40 - lVar26) + lVar31 + lVar47 * -0xf39ad + lVar35 * 0x215d1 + lVar46 * -0xa6f7d;
  lVar50 = (lVar39 - lVar25) + lVar47 * 0x72d18 + lVar35 * 0x9fb67 + lVar46 * -0xf39ad +
           lVar37 * 0x215d1 + lVar45 * -0xa6f7d;
  lVar51 = (uVar1 & 0x1fffff) + lVar38 * 0xa2c13;
  lVar52 = (uVar3 >> 2 & 0x1fffff) + lVar37 * 0xa2c13 + lVar45 * 0x72d18 + lVar38 * 0x9fb67;
  lVar53 = (uVar5 >> 4 & 0x1fffff) + lVar35 * 0xa2c13 + lVar46 * 0x72d18 + lVar37 * 0x9fb67 +
           lVar45 * -0xf39ad + lVar38 * 0x215d1;
  lVar25 = lVar51 + 0x100000 >> 0x15;
  lVar54 = (uVar2 >> 5 & 0x1fffff) + lVar45 * 0xa2c13 + lVar38 * 0x72d18 + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar26 = lVar52 + 0x100000 >> 0x15;
  lVar55 = (uVar4 >> 7 & 0x1fffff) + lVar46 * 0xa2c13 + lVar37 * 0x72d18 + lVar45 * 0x9fb67 +
           lVar38 * -0xf39ad + lVar26;
  lVar26 = FUN_142c30d40(lVar26);
  lVar27 = lVar53 + 0x100000 >> 0x15;
  lVar45 = (uVar6 >> 1 & 0x1fffff) + lVar47 * 0xa2c13 + lVar35 * 0x72d18 + lVar46 * 0x9fb67 +
           lVar37 * -0xf39ad + lVar45 * 0x215d1 + lVar38 * -0xa6f7d + lVar27;
  lVar27 = FUN_142c30d40(lVar27);
  lVar29 = lVar50 + 0x100000 >> 0x15;
  lVar46 = (lVar42 - lVar32) + lVar47 * 0x9fb67 + lVar35 * -0xf39ad + lVar46 * 0x215d1 +
           lVar37 * -0xa6f7d + lVar29;
  lVar29 = FUN_142c30d40(lVar29);
  lVar30 = lVar49 + 0x100000 >> 0x15;
  lVar43 = (lVar43 - lVar34) + lVar47 * 0x215d1 + lVar35 * -0xa6f7d + lVar30;
  lVar30 = FUN_142c30d40(lVar30);
  lVar31 = lVar48 + 0x100000 >> 0x15;
  lVar44 = (lVar44 - lVar28) + lVar31;
  lVar28 = FUN_142c30d40(lVar31);
  lVar31 = lVar54 + 0x100000 >> 0x15;
  lVar32 = FUN_142c30d40(lVar31);
  lVar33 = lVar55 + 0x100000 >> 0x15;
  lVar34 = FUN_142c30d40(lVar33);
  lVar35 = lVar45 + 0x100000 >> 0x15;
  lVar36 = FUN_142c30d40(lVar35);
  lVar37 = lVar46 + 0x100000 >> 0x15;
  lVar38 = FUN_142c30d40(lVar37);
  lVar39 = lVar43 + 0x100000 >> 0x15;
  lVar40 = FUN_142c30d40(lVar39);
  lVar41 = lVar44 + 0x100000 >> 0x15;
  lVar42 = FUN_142c30d40(lVar41);
  lVar47 = (lVar51 - lVar25) + lVar41 * 0xa2c13;
  lVar25 = lVar47 >> 0x15;
  lVar51 = (lVar54 - lVar32) + lVar41 * 0x72d18 + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar32 = lVar51 >> 0x15;
  lVar52 = (lVar52 - lVar26) + lVar31 + lVar41 * 0x9fb67 + lVar32;
  lVar26 = FUN_142c30d40(lVar32);
  lVar31 = lVar52 >> 0x15;
  lVar54 = (lVar55 - lVar34) + lVar41 * -0xf39ad + lVar31;
  lVar31 = FUN_142c30d40(lVar31);
  lVar32 = lVar54 >> 0x15;
  lVar53 = (lVar53 - lVar27) + lVar33 + lVar41 * 0x215d1 + lVar32;
  lVar27 = FUN_142c30d40(lVar32);
  lVar32 = lVar53 >> 0x15;
  lVar41 = (lVar45 - lVar36) + lVar41 * -0xa6f7d + lVar32;
  lVar32 = FUN_142c30d40(lVar32);
  lVar33 = lVar41 >> 0x15;
  lVar45 = (lVar50 - lVar29) + lVar35 + lVar33;
  lVar29 = FUN_142c30d40(lVar33);
  lVar33 = lVar45 >> 0x15;
  lVar38 = (lVar46 - lVar38) + lVar33;
  lVar33 = FUN_142c30d40(lVar33);
  lVar34 = lVar38 >> 0x15;
  lVar46 = (lVar49 - lVar30) + lVar37 + lVar34;
  lVar30 = FUN_142c30d40(lVar34);
  lVar34 = lVar46 >> 0x15;
  lVar40 = (lVar43 - lVar40) + lVar34;
  lVar34 = FUN_142c30d40(lVar34);
  lVar35 = lVar40 >> 0x15;
  lVar39 = (lVar48 - lVar28) + lVar39 + lVar35;
  lVar28 = FUN_142c30d40(lVar35);
  lVar35 = lVar39 >> 0x15;
  lVar42 = (lVar44 - lVar42) + lVar35;
  lVar35 = FUN_142c30d40(lVar35);
  lVar36 = lVar42 >> 0x15;
  lVar37 = FUN_142c30d40(lVar36);
  lVar43 = (lVar47 - lVar25) + lVar36 * 0xa2c13;
  lVar25 = lVar43 >> 0x15;
  lVar26 = (lVar51 - lVar26) + lVar36 * 0x72d18 + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar43 = lVar43 - lVar25;
  lVar25 = lVar26 >> 0x15;
  lVar31 = (lVar52 - lVar31) + lVar36 * 0x9fb67 + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar26 = lVar26 - lVar25;
  lVar25 = lVar31 >> 0x15;
  lVar27 = (lVar54 - lVar27) + lVar36 * -0xf39ad + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar31 = lVar31 - lVar25;
  lVar25 = lVar27 >> 0x15;
  lVar32 = (lVar53 - lVar32) + lVar36 * 0x215d1 + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar27 = lVar27 - lVar25;
  lVar25 = lVar32 >> 0x15;
  lVar29 = (lVar41 - lVar29) + lVar36 * -0xa6f7d + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar32 = lVar32 - lVar25;
  lVar25 = lVar29 >> 0x15;
  lVar33 = (lVar45 - lVar33) + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar29 = lVar29 - lVar25;
  lVar25 = lVar33 >> 0x15;
  lVar30 = (lVar38 - lVar30) + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar33 = lVar33 - lVar25;
  lVar25 = lVar30 >> 0x15;
  lVar34 = (lVar46 - lVar34) + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar30 = lVar30 - lVar25;
  lVar25 = lVar34 >> 0x15;
  lVar28 = (lVar40 - lVar28) + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar34 = lVar34 - lVar25;
  lVar25 = lVar28 >> 0x15;
  lVar36 = (lVar39 - lVar35) + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar28 = lVar28 - lVar25;
  lVar25 = lVar36 >> 0x15;
  lVar35 = (lVar42 - lVar37) + lVar25;
  lVar25 = FUN_142c30d40(lVar25);
  lVar36 = lVar36 - lVar25;
  uStack_e8 = (undefined)lVar43;
  *param_1 = uStack_e8;
  param_1[1] = (char)((ulonglong)lVar43 >> 8);
  param_1[2] = (byte)((ulonglong)lVar43 >> 0x10) | (char)lVar26 * ' ';
  param_1[3] = (char)(lVar26 >> 3);
  param_1[4] = (char)(lVar26 >> 0xb);
  param_1[5] = (byte)(lVar26 >> 0x13) | (char)lVar31 * '\x04';
  param_1[6] = (char)(lVar31 >> 6);
  param_1[7] = (byte)(lVar31 >> 0xe) | (char)lVar27 * -0x80;
  param_1[8] = (char)(lVar27 >> 1);
  param_1[9] = (char)(lVar27 >> 9);
  param_1[10] = (byte)(lVar27 >> 0x11) | (char)lVar32 * '\x10';
  param_1[0xb] = (char)(lVar32 >> 4);
  param_1[0xc] = (char)(lVar32 >> 0xc);
  param_1[0xd] = (byte)(lVar32 >> 0x14) | (char)lVar29 * '\x02';
  param_1[0xe] = (char)(lVar29 >> 7);
  param_1[0xf] = (byte)(lVar29 >> 0xf) | (char)lVar33 * '@';
  param_1[0x10] = (char)(lVar33 >> 2);
  param_1[0x11] = (char)(lVar33 >> 10);
  param_1[0x12] = (byte)(lVar33 >> 0x12) | (char)lVar30 * '\b';
  param_1[0x13] = (char)(lVar30 >> 5);
  param_1[0x14] = (char)(lVar30 >> 0xd);
  uStack_140 = (undefined)lVar34;
  param_1[0x15] = uStack_140;
  param_1[0x16] = (char)((ulonglong)lVar34 >> 8);
  param_1[0x17] = (byte)((ulonglong)lVar34 >> 0x10) | (char)lVar28 * ' ';
  param_1[0x18] = (char)(lVar28 >> 3);
  param_1[0x19] = (char)(lVar28 >> 0xb);
  param_1[0x1a] = (byte)(lVar28 >> 0x13) | (char)lVar36 * '\x04';
  param_1[0x1b] = (char)(lVar36 >> 6);
  param_1[0x1c] = (byte)(lVar36 >> 0xe) | (char)lVar35 * -0x80;
  param_1[0x1d] = (char)(lVar35 >> 1);
  param_1[0x1e] = (char)(lVar35 >> 9);
  param_1[0x1f] = (char)(lVar35 >> 0x11);
  return;
}


/* address=142c2a270 name=FUN_142c2a270 */

void FUN_142c2a270(longlong *param_1,undefined8 param_2,char param_3,ulonglong param_4,
                  ulonglong param_5)

{
  *param_1 = param_4 + param_5 + (ulonglong)(param_3 != '\0');
  *(bool *)param_2 =
       CARRY8(param_4,param_5) || CARRY8(param_4 + param_5,(ulonglong)(param_3 != '\0'));
  return;
}


/* address=142c2a2b0 name=FUN_142c2a2b0 */

void FUN_142c2a2b0(ulonglong *param_1,undefined *param_2,byte param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3 + param_4 + param_5;
  *param_1 = uVar1 & 0x7ffffffffffff;
  *param_2 = (char)(uVar1 >> 0x33);
  return;
}


/* address=142c2a330 name=FUN_142c2a330 */

void FUN_142c2a330(ulonglong *param_1,char *param_2,byte param_3,longlong param_4,longlong param_5)

{
  ulonglong uVar1;
  
  uVar1 = (param_4 - (ulonglong)param_3) - param_5;
  *param_1 = uVar1 & 0x7ffffffffffff;
  *param_2 = -(char)((longlong)uVar1 >> 0x33);
  return;
}


/* address=142c2a3c0 name=FUN_142c2a3c0 */

void FUN_142c2a3c0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

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


/* address=142c2a410 name=FUN_142c2a410 */

void FUN_142c2a410(ulonglong *param_1,char param_2,ulonglong param_3,ulonglong param_4)

{
  *param_1 = (longlong)-(param_2 != '\0') & param_4 | ~(longlong)-(param_2 != '\0') & param_3;
  return;
}


/* address=142c2a4a0 name=FUN_142c2a4a0 */

void FUN_142c2a4a0(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined uStack_3d8;
  undefined uStack_3d7;
  undefined uStack_3d6;
  undefined uStack_3d5;
  undefined uStack_3d4;
  undefined uStack_3d3;
  undefined uStack_3d2;
  undefined uStack_3d1;
  undefined uStack_3d0;
  undefined uStack_3cf;
  undefined uStack_3ce;
  undefined uStack_3cd;
  undefined uStack_3cc;
  undefined uStack_3cb;
  undefined uStack_3ca;
  undefined uStack_3c9;
  undefined uStack_3c8;
  undefined uStack_3c7;
  undefined uStack_3c6;
  undefined uStack_3c5;
  byte bStack_3c4;
  byte bStack_3c3;
  byte bStack_3c2;
  byte abStack_3c1 [2];
  undefined uStack_3bf;
  undefined uStack_3be;
  undefined uStack_3bd;
  undefined uStack_3bc;
  undefined uStack_3bb;
  undefined uStack_3ba;
  undefined uStack_3b9;
  undefined uStack_3b8;
  undefined uStack_3b7;
  undefined uStack_3b6;
  undefined uStack_3b5;
  undefined uStack_3b4;
  undefined uStack_3b3;
  undefined uStack_3b2;
  undefined uStack_3b1;
  undefined uStack_3b0;
  undefined uStack_3af;
  undefined uStack_3ae;
  undefined uStack_3ad;
  undefined auStack_3ac [4];
  ulonglong uStack_3a8;
  ulonglong uStack_3a0;
  ulonglong uStack_398;
  ulonglong uStack_390;
  ulonglong auStack_388 [3];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  longlong lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  longlong alStack_78 [4];
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_40;
  ulonglong uStack_20;
  
  FUN_142c2a3c0(&uStack_268,&uStack_258,param_2[4],param_3[4] * 0x13);
  FUN_142c2a3c0(&uStack_1e8,&uStack_1d8,param_2[4],param_3[3] * 0x13);
  FUN_142c2a3c0(&uStack_168,&uStack_158,param_2[4],param_3[2] * 0x13);
  FUN_142c2a3c0(&uStack_370,&uStack_360,param_2[4],param_3[1] * 0x13);
  FUN_142c2a3c0(&uStack_1e0,&uStack_1d0,param_2[3],param_3[4] * 0x13);
  FUN_142c2a3c0(&uStack_160,&uStack_150,param_2[3],param_3[3] * 0x13);
  FUN_142c2a3c0(&uStack_368,&uStack_358,param_2[3],param_3[2] * 0x13);
  FUN_142c2a3c0(&uStack_140,&uStack_130,param_2[2],param_3[4] * 0x13);
  FUN_142c2a3c0(&uStack_348,&uStack_338,param_2[2],param_3[3] * 0x13);
  FUN_142c2a3c0(&uStack_328,&uStack_318,param_2[1],param_3[4] * 0x13);
  FUN_142c2a3c0(&uStack_2e8,&uStack_2d8,param_2[4],*param_3);
  FUN_142c2a3c0(&uStack_2e0,&uStack_2d0,param_2[3],param_3[1]);
  FUN_142c2a3c0(&uStack_260,&uStack_250,param_2[3],*param_3);
  FUN_142c2a3c0(&uStack_2c0,&uStack_2b0,param_2[2],param_3[2]);
  FUN_142c2a3c0(&uStack_240,&uStack_230,param_2[2],param_3[1]);
  FUN_142c2a3c0(&uStack_1c0,&uStack_1b0,param_2[2],*param_3);
  FUN_142c2a3c0(&uStack_2a0,&uStack_290,param_2[1],param_3[3]);
  FUN_142c2a3c0(&uStack_220,&uStack_210,param_2[1],param_3[2]);
  FUN_142c2a3c0(&uStack_1a0,&uStack_190,param_2[1],param_3[1]);
  FUN_142c2a3c0(&uStack_120,&uStack_110,param_2[1],*param_3);
  FUN_142c2a3c0(&uStack_280,&uStack_270,*param_2,param_3[4]);
  FUN_142c2a3c0(&uStack_200,&uStack_1f0,*param_2,param_3[3]);
  FUN_142c2a3c0(&uStack_180,&uStack_170,*param_2,param_3[2]);
  FUN_142c2a3c0(&uStack_100,&uStack_f0,*param_2,param_3[1]);
  FUN_142c2a3c0(&uStack_308,&uStack_2f8,*param_2,*param_3);
  FUN_142c2a270(&uStack_350,&uStack_3d8,0,uStack_368,uStack_370);
  FUN_142c2a270(&uStack_340,&uStack_3bf,uStack_3d8,uStack_358,uStack_360);
  FUN_142c2a270(&uStack_330,&uStack_3d7,0,uStack_348,uStack_350);
  FUN_142c2a270(&uStack_320,&uStack_3be,uStack_3d7,uStack_338,uStack_340);
  FUN_142c2a270(&uStack_310,&uStack_3d6,0,uStack_328,uStack_330);
  FUN_142c2a270(&uStack_300,&uStack_3bd,uStack_3d6,uStack_318,uStack_320);
  FUN_142c2a270(&uStack_3a8,&uStack_3d5,0,uStack_308,uStack_310);
  FUN_142c2a270(&lStack_2f0,&uStack_3bc,uStack_3d5,uStack_2f8,uStack_300);
  uStack_e0 = uStack_3a8 >> 0x33 | lStack_2f0 << 0xd;
  uStack_58 = uStack_3a8 & 0x7ffffffffffff;
  FUN_142c2a270(&uStack_2c8,&uStack_3d4,0,uStack_2e0,uStack_2e8);
  FUN_142c2a270(&uStack_2b8,&uStack_3bb,uStack_3d4,uStack_2d0,uStack_2d8);
  FUN_142c2a270(&uStack_2a8,&uStack_3d3,0,uStack_2c0,uStack_2c8);
  FUN_142c2a270(&uStack_298,&uStack_3ba,uStack_3d3,uStack_2b0,uStack_2b8);
  FUN_142c2a270(&uStack_288,&uStack_3d2,0,uStack_2a0,uStack_2a8);
  FUN_142c2a270(&uStack_278,&uStack_3b9,uStack_3d2,uStack_290,uStack_298);
  FUN_142c2a270(&uStack_88,&uStack_3d1,0,uStack_280,uStack_288);
  FUN_142c2a270(alStack_78,&uStack_3b8,uStack_3d1,uStack_270,uStack_278);
  FUN_142c2a270(&uStack_248,&uStack_3d0,0,uStack_260,uStack_268);
  FUN_142c2a270(&uStack_238,&uStack_3b7,uStack_3d0,uStack_250,uStack_258);
  FUN_142c2a270(&uStack_228,&uStack_3cf,0,uStack_240,uStack_248);
  FUN_142c2a270(&uStack_218,&uStack_3b6,uStack_3cf,uStack_230,uStack_238);
  FUN_142c2a270(&uStack_208,&uStack_3ce,0,uStack_220,uStack_228);
  FUN_142c2a270(&uStack_1f8,&uStack_3b5,uStack_3ce,uStack_210,uStack_218);
  FUN_142c2a270(&uStack_a8,&uStack_3cd,0,uStack_200,uStack_208);
  FUN_142c2a270(&lStack_98,&uStack_3b4,uStack_3cd,uStack_1f0,uStack_1f8);
  FUN_142c2a270(&uStack_1c8,&uStack_3cc,0,uStack_1e0,uStack_1e8);
  FUN_142c2a270(&uStack_1b8,&uStack_3b3,uStack_3cc,uStack_1d0,uStack_1d8);
  FUN_142c2a270(&uStack_1a8,&uStack_3cb,0,uStack_1c0,uStack_1c8);
  FUN_142c2a270(&uStack_198,&uStack_3b2,uStack_3cb,uStack_1b0,uStack_1b8);
  FUN_142c2a270(&uStack_188,&uStack_3ca,0,uStack_1a0,uStack_1a8);
  FUN_142c2a270(&uStack_178,&uStack_3b1,uStack_3ca,uStack_190,uStack_198);
  FUN_142c2a270(&uStack_c8,&uStack_3c9,0,uStack_180,uStack_188);
  FUN_142c2a270(&lStack_b8,&uStack_3b0,uStack_3c9,uStack_170,uStack_178);
  FUN_142c2a270(&uStack_148,&uStack_3c8,0,uStack_160,uStack_168);
  FUN_142c2a270(&uStack_138,&uStack_3af,uStack_3c8,uStack_150,uStack_158);
  FUN_142c2a270(&uStack_128,&uStack_3c7,0,uStack_140,uStack_148);
  FUN_142c2a270(&uStack_118,&uStack_3ae,uStack_3c7,uStack_130,uStack_138);
  FUN_142c2a270(&uStack_108,&uStack_3c6,0,uStack_120,uStack_128);
  FUN_142c2a270(&uStack_f8,&uStack_3ad,uStack_3c6,uStack_110,uStack_118);
  FUN_142c2a270(&uStack_e8,&uStack_3c5,0,uStack_100,uStack_108);
  FUN_142c2a270(&lStack_d8,auStack_3ac,uStack_3c5,uStack_f0,uStack_f8);
  FUN_142c2a270(&uStack_3a0,&bStack_3c4,0,uStack_e0,uStack_e8);
  lStack_d0 = (ulonglong)bStack_3c4 + lStack_d8;
  uStack_c0 = uStack_3a0 >> 0x33 | lStack_d0 * 0x2000;
  uStack_50 = uStack_3a0 & 0x7ffffffffffff;
  FUN_142c2a270(&uStack_398,&bStack_3c3,0,uStack_c0,uStack_c8);
  lStack_b0 = (ulonglong)bStack_3c3 + lStack_b8;
  uStack_a0 = uStack_398 >> 0x33 | lStack_b0 * 0x2000;
  uStack_40 = uStack_398 & 0x7ffffffffffff;
  FUN_142c2a270(&uStack_390,&bStack_3c2,0,uStack_a0,uStack_a8);
  lStack_90 = (ulonglong)bStack_3c2 + lStack_98;
  uStack_80 = uStack_390 >> 0x33 | lStack_90 * 0x2000;
  uStack_20 = uStack_390 & 0x7ffffffffffff;
  FUN_142c2a270(auStack_388,abStack_3c1,0,uStack_80,uStack_88);
  uStack_58 = uStack_58 +
              (auStack_388[0] >> 0x33 | ((ulonglong)abStack_3c1[0] + alStack_78[0]) * 0x2000) * 0x13
  ;
  uStack_50 = (uStack_58 >> 0x33) + uStack_50;
  *param_1 = uStack_58 & 0x7ffffffffffff;
  param_1[1] = uStack_50 & 0x7ffffffffffff;
  param_1[2] = (uStack_50 >> 0x33 & 0xff) + uStack_40;
  param_1[3] = uStack_20;
  param_1[4] = auStack_388[0] & 0x7ffffffffffff;
  return;
}


/* address=142c2b560 name=FUN_142c2b560 */

void FUN_142c2b560(ulonglong *param_1,undefined8 *param_2)

{
  undefined uStack_2c8;
  undefined uStack_2c7;
  undefined uStack_2c6;
  undefined uStack_2c5;
  undefined uStack_2c4;
  undefined uStack_2c3;
  undefined uStack_2c2;
  undefined uStack_2c1;
  undefined uStack_2c0;
  undefined uStack_2bf;
  byte bStack_2be;
  byte bStack_2bd;
  byte bStack_2bc;
  byte abStack_2bb [2];
  undefined uStack_2b9;
  undefined uStack_2b8;
  undefined uStack_2b7;
  undefined uStack_2b6;
  undefined uStack_2b5;
  undefined uStack_2b4;
  undefined uStack_2b3;
  undefined uStack_2b2;
  undefined uStack_2b1;
  undefined auStack_2b0 [8];
  longlong lStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  longlong lStack_288;
  ulonglong uStack_280;
  ulonglong uStack_278;
  ulonglong uStack_270;
  ulonglong uStack_268;
  ulonglong auStack_260 [3];
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  longlong alStack_78 [4];
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_40;
  ulonglong uStack_20;
  
  lStack_2a0 = param_2[4] * 0x13;
  lStack_2a8 = param_2[4] * 0x26;
  lStack_240 = param_2[4] << 1;
  lStack_298 = param_2[3] * 0x13;
  lStack_248 = param_2[3] * 0x26;
  lStack_290 = param_2[3] << 1;
  lStack_288 = param_2[2] << 1;
  lStack_238 = param_2[1] << 1;
  FUN_142c2a3c0(&uStack_1a8,&uStack_198,param_2[4],lStack_2a0);
  FUN_142c2a3c0(&uStack_168,&uStack_158,param_2[3],lStack_2a8);
  FUN_142c2a3c0(&uStack_128,&uStack_118,param_2[3],lStack_298);
  FUN_142c2a3c0(&uStack_120,&uStack_110,param_2[2],lStack_2a8);
  FUN_142c2a3c0(&uStack_230,&uStack_220,param_2[2],lStack_248);
  FUN_142c2a3c0(&uStack_1e8,&uStack_1d8,param_2[2],param_2[2]);
  FUN_142c2a3c0(&uStack_228,&uStack_218,param_2[1],lStack_2a8);
  FUN_142c2a3c0(&uStack_1e0,&uStack_1d0,param_2[1],lStack_290);
  FUN_142c2a3c0(&uStack_1a0,&uStack_190,param_2[1],lStack_288);
  FUN_142c2a3c0(&uStack_160,&uStack_150,param_2[1],param_2[1]);
  FUN_142c2a3c0(&uStack_1c0,&uStack_1b0,*param_2,lStack_240);
  FUN_142c2a3c0(&uStack_180,&uStack_170,*param_2,lStack_290);
  FUN_142c2a3c0(&uStack_140,&uStack_130,*param_2,lStack_288);
  FUN_142c2a3c0(&uStack_100,&uStack_f0,*param_2,lStack_238);
  FUN_142c2a3c0(&uStack_208,&uStack_1f8,*param_2,*param_2);
  FUN_142c2a270(&uStack_210,&uStack_2c8,0,uStack_228,uStack_230);
  FUN_142c2a270(&uStack_200,&uStack_2b9,uStack_2c8,uStack_218,uStack_220);
  FUN_142c2a270(&uStack_280,&uStack_2c7,0,uStack_208,uStack_210);
  FUN_142c2a270(&lStack_1f0,&uStack_2b8,uStack_2c7,uStack_1f8,uStack_200);
  uStack_e0 = uStack_280 >> 0x33 | lStack_1f0 << 0xd;
  uStack_58 = uStack_280 & 0x7ffffffffffff;
  FUN_142c2a270(&uStack_1c8,&uStack_2c6,0,uStack_1e0,uStack_1e8);
  FUN_142c2a270(&uStack_1b8,&uStack_2b7,uStack_2c6,uStack_1d0,uStack_1d8);
  FUN_142c2a270(&uStack_88,&uStack_2c5,0,uStack_1c0,uStack_1c8);
  FUN_142c2a270(alStack_78,&uStack_2b6,uStack_2c5,uStack_1b0,uStack_1b8);
  FUN_142c2a270(&uStack_188,&uStack_2c4,0,uStack_1a0,uStack_1a8);
  FUN_142c2a270(&uStack_178,&uStack_2b5,uStack_2c4,uStack_190,uStack_198);
  FUN_142c2a270(&uStack_a8,&uStack_2c3,0,uStack_180,uStack_188);
  FUN_142c2a270(&lStack_98,&uStack_2b4,uStack_2c3,uStack_170,uStack_178);
  FUN_142c2a270(&uStack_148,&uStack_2c2,0,uStack_160,uStack_168);
  FUN_142c2a270(&uStack_138,&uStack_2b3,uStack_2c2,uStack_150,uStack_158);
  FUN_142c2a270(&uStack_c8,&uStack_2c1,0,uStack_140,uStack_148);
  FUN_142c2a270(&lStack_b8,&uStack_2b2,uStack_2c1,uStack_130,uStack_138);
  FUN_142c2a270(&uStack_108,&uStack_2c0,0,uStack_120,uStack_128);
  FUN_142c2a270(&uStack_f8,&uStack_2b1,uStack_2c0,uStack_110,uStack_118);
  FUN_142c2a270(&uStack_e8,&uStack_2bf,0,uStack_100,uStack_108);
  FUN_142c2a270(&lStack_d8,auStack_2b0,uStack_2bf,uStack_f0,uStack_f8);
  FUN_142c2a270(&uStack_278,&bStack_2be,0,uStack_e0,uStack_e8);
  lStack_d0 = (ulonglong)bStack_2be + lStack_d8;
  uStack_c0 = uStack_278 >> 0x33 | lStack_d0 * 0x2000;
  uStack_50 = uStack_278 & 0x7ffffffffffff;
  FUN_142c2a270(&uStack_270,&bStack_2bd,0,uStack_c0,uStack_c8);
  lStack_b0 = (ulonglong)bStack_2bd + lStack_b8;
  uStack_a0 = uStack_270 >> 0x33 | lStack_b0 * 0x2000;
  uStack_40 = uStack_270 & 0x7ffffffffffff;
  FUN_142c2a270(&uStack_268,&bStack_2bc,0,uStack_a0,uStack_a8);
  lStack_90 = (ulonglong)bStack_2bc + lStack_98;
  uStack_80 = uStack_268 >> 0x33 | lStack_90 * 0x2000;
  uStack_20 = uStack_268 & 0x7ffffffffffff;
  FUN_142c2a270(auStack_260,abStack_2bb,0,uStack_80,uStack_88);
  uStack_58 = uStack_58 +
              (auStack_260[0] >> 0x33 | ((ulonglong)abStack_2bb[0] + alStack_78[0]) * 0x2000) * 0x13
  ;
  uStack_50 = (uStack_58 >> 0x33) + uStack_50;
  *param_1 = uStack_58 & 0x7ffffffffffff;
  param_1[1] = uStack_50 & 0x7ffffffffffff;
  param_1[2] = (uStack_50 >> 0x33 & 0xff) + uStack_40;
  param_1[3] = uStack_20;
  param_1[4] = auStack_260[0] & 0x7ffffffffffff;
  return;
}


/* address=142c2c050 name=FUN_142c2c050 */

void FUN_142c2c050(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = (*param_2 >> 0x33) + param_2[1];
  uVar2 = (uVar1 >> 0x33) + param_2[2];
  uVar3 = (uVar2 >> 0x33) + param_2[3];
  uVar4 = (uVar3 >> 0x33) + param_2[4];
  uVar5 = (*param_2 & 0x7ffffffffffff) + (uVar4 >> 0x33) * 0x13;
  uVar1 = (uVar5 >> 0x33) + (uVar1 & 0x7ffffffffffff);
  *param_1 = uVar5 & 0x7ffffffffffff;
  param_1[1] = uVar1 & 0x7ffffffffffff;
  param_1[2] = (uVar1 >> 0x33) + (uVar2 & 0x7ffffffffffff);
  param_1[3] = uVar3 & 0x7ffffffffffff;
  param_1[4] = uVar4 & 0x7ffffffffffff;
  return;
}


/* address=142c2c260 name=FUN_142c2c260 */

void FUN_142c2c260(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar1 = param_2[1];
  lVar2 = param_3[1];
  lVar3 = param_2[2];
  lVar4 = param_3[2];
  lVar5 = param_2[3];
  lVar6 = param_3[3];
  lVar7 = param_2[4];
  lVar8 = param_3[4];
  *param_1 = *param_2 + *param_3;
  param_1[1] = lVar1 + lVar2;
  param_1[2] = lVar3 + lVar4;
  param_1[3] = lVar5 + lVar6;
  param_1[4] = lVar7 + lVar8;
  return;
}


/* address=142c2c3c0 name=FUN_142c2c3c0 */

void FUN_142c2c3c0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar1 = param_2[1];
  lVar2 = param_3[1];
  lVar3 = param_2[2];
  lVar4 = param_3[2];
  lVar5 = param_2[3];
  lVar6 = param_3[3];
  lVar7 = param_2[4];
  lVar8 = param_3[4];
  *param_1 = (*param_2 + 0xfffffffffffda) - *param_3;
  param_1[1] = (lVar1 + 0xffffffffffffe) - lVar2;
  param_1[2] = (lVar3 + 0xffffffffffffe) - lVar4;
  param_1[3] = (lVar5 + 0xffffffffffffe) - lVar6;
  param_1[4] = (lVar7 + 0xffffffffffffe) - lVar8;
  return;
}


/* address=142c2c560 name=FUN_142c2c560 */

void FUN_142c2c560(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  lVar4 = param_2[4];
  *param_1 = 0xfffffffffffda - *param_2;
  param_1[1] = 0xffffffffffffe - lVar1;
  param_1[2] = 0xffffffffffffe - lVar2;
  param_1[3] = 0xffffffffffffe - lVar3;
  param_1[4] = 0xffffffffffffe - lVar4;
  return;
}


/* address=142c2c6a0 name=FUN_142c2c6a0 */

void FUN_142c2c6a0(undefined *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined uStack_1a8;
  undefined uStack_1a7;
  undefined uStack_1a6;
  undefined uStack_1a5;
  undefined uStack_1a4;
  undefined uStack_1a3;
  undefined uStack_1a2;
  undefined uStack_1a1;
  undefined auStack_1a0 [37];
  undefined auStack_17b [3];
  ulonglong uStack_178;
  ulonglong auStack_170 [31];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong alStack_38 [7];
  
  FUN_142c2a330(&uStack_78,&uStack_1a8,0,*param_2,0x7ffffffffffed);
  FUN_142c2a330(&uStack_70,&uStack_1a7,uStack_1a8,param_2[1],0x7ffffffffffff);
  FUN_142c2a330(&uStack_68,&uStack_1a6,uStack_1a7,param_2[2],0x7ffffffffffff);
  FUN_142c2a330(&uStack_60,&uStack_1a5,uStack_1a6,param_2[3],0x7ffffffffffff);
  FUN_142c2a330(&uStack_58,&uStack_1a4,uStack_1a5,param_2[4],0x7ffffffffffff);
  FUN_142c2a410(&uStack_178,uStack_1a4,0,0xffffffffffffffff);
  FUN_142c2a2b0(auStack_170,&uStack_1a3,0,uStack_78,uStack_178 & 0x7ffffffffffed);
  FUN_142c2a2b0(alStack_38,&uStack_1a2,uStack_1a3,uStack_70,uStack_178 & 0x7ffffffffffff);
  FUN_142c2a2b0(&lStack_40,&uStack_1a1,uStack_1a2,uStack_68,uStack_178 & 0x7ffffffffffff);
  FUN_142c2a2b0(&lStack_48,auStack_1a0,uStack_1a1,uStack_60,uStack_178 & 0x7ffffffffffff);
  FUN_142c2a2b0(&lStack_50,auStack_17b,auStack_1a0[0],uStack_58,uStack_178 & 0x7ffffffffffff);
  uVar1 = alStack_38[0] * 8 + (auStack_170[0] >> 0x30 & 0xff);
  uVar2 = lStack_40 * 0x40 + (uVar1 >> 0x30 & 0xff);
  uVar3 = lStack_48 * 2 + (uVar2 >> 0x38);
  lVar4 = lStack_50 * 0x10 + (uVar3 >> 0x30 & 0xff);
  *param_1 = (char)auStack_170[0];
  param_1[1] = (char)(auStack_170[0] >> 8);
  param_1[2] = (char)(auStack_170[0] >> 0x10);
  param_1[3] = (char)(auStack_170[0] >> 0x18);
  param_1[4] = (char)(auStack_170[0] >> 0x20);
  param_1[5] = (char)(auStack_170[0] >> 0x28);
  param_1[6] = (char)uVar1;
  param_1[7] = (char)(uVar1 >> 8);
  param_1[8] = (char)(uVar1 >> 0x10);
  param_1[9] = (char)(uVar1 >> 0x18);
  param_1[10] = (char)(uVar1 >> 0x20);
  param_1[0xb] = (char)(uVar1 >> 0x28);
  param_1[0xc] = (char)uVar2;
  param_1[0xd] = (char)(uVar2 >> 8);
  param_1[0xe] = (char)(uVar2 >> 0x10);
  param_1[0xf] = (char)(uVar2 >> 0x18);
  param_1[0x10] = (char)(uVar2 >> 0x20);
  param_1[0x11] = (char)(uVar2 >> 0x28);
  param_1[0x12] = (char)(uVar2 >> 0x30);
  param_1[0x13] = (char)uVar3;
  param_1[0x14] = (char)(uVar3 >> 8);
  param_1[0x15] = (char)(uVar3 >> 0x10);
  param_1[0x16] = (char)(uVar3 >> 0x18);
  param_1[0x17] = (char)(uVar3 >> 0x20);
  param_1[0x18] = (char)(uVar3 >> 0x28);
  param_1[0x19] = (char)lVar4;
  param_1[0x1a] = (char)((ulonglong)lVar4 >> 8);
  param_1[0x1b] = (char)((ulonglong)lVar4 >> 0x10);
  param_1[0x1c] = (char)((ulonglong)lVar4 >> 0x18);
  param_1[0x1d] = (char)((ulonglong)lVar4 >> 0x20);
  param_1[0x1e] = (char)((ulonglong)lVar4 >> 0x28);
  param_1[0x1f] = (char)((ulonglong)lVar4 >> 0x30);
  return;
}


/* address=142c2d170 name=FUN_142c2d170 */

void FUN_142c2d170(ulonglong *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  bVar1 = param_2[0x1f];
  bVar2 = param_2[0x1e];
  bVar3 = param_2[0x1d];
  bVar4 = param_2[0x1c];
  bVar5 = param_2[0x1b];
  bVar6 = param_2[0x1a];
  uVar7 = ((ulonglong)param_2[6] << 0x30) +
          ((ulonglong)param_2[5] << 0x28) +
          ((ulonglong)param_2[4] << 0x20) +
          (ulonglong)param_2[3] * 0x1000000 +
          (ulonglong)param_2[2] * 0x10000 + (ulonglong)param_2[1] * 0x100 + (ulonglong)*param_2;
  uVar8 = ((ulonglong)param_2[0xc] << 0x2d) +
          ((ulonglong)param_2[0xb] << 0x25) +
          (ulonglong)param_2[10] * 0x20000000 +
          (ulonglong)param_2[9] * 0x200000 +
          (ulonglong)param_2[8] * 0x2000 + (ulonglong)param_2[7] * 0x20 + (uVar7 >> 0x33);
  uVar9 = ((ulonglong)param_2[0x13] << 0x32) +
          ((ulonglong)param_2[0x12] << 0x2a) +
          ((ulonglong)param_2[0x11] << 0x22) +
          (ulonglong)param_2[0x10] * 0x4000000 +
          (ulonglong)param_2[0xf] * 0x40000 +
          (ulonglong)param_2[0xe] * 0x400 + (ulonglong)param_2[0xd] * 4 + (uVar8 >> 0x33);
  uVar10 = ((ulonglong)param_2[0x19] << 0x2f) +
           ((ulonglong)param_2[0x18] << 0x27) +
           (ulonglong)param_2[0x17] * 0x80000000 +
           (ulonglong)param_2[0x16] * 0x800000 +
           (ulonglong)param_2[0x15] * 0x8000 + (ulonglong)param_2[0x14] * 0x80 + (uVar9 >> 0x33);
  *param_1 = uVar7 & 0x7ffffffffffff;
  param_1[1] = uVar8 & 0x7ffffffffffff;
  param_1[2] = uVar9 & 0x7ffffffffffff;
  param_1[3] = uVar10 & 0x7ffffffffffff;
  param_1[4] = ((ulonglong)bVar1 << 0x2c) +
               ((ulonglong)bVar2 << 0x24) +
               (ulonglong)bVar3 * 0x10000000 +
               (ulonglong)bVar4 * 0x100000 +
               (ulonglong)bVar5 * 0x1000 + (ulonglong)bVar6 * 0x10 + (uVar10 >> 0x33);
  return;
}


/* address=142c2da30 name=FUN_142c2da30 */

void FUN_142c2da30(ulonglong *param_1,undefined8 *param_2)

{
  byte bStack_128;
  byte bStack_127;
  byte bStack_126;
  byte abStack_125 [5];
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong auStack_100 [3];
  longlong lStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  longlong alStack_70 [4];
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_20;
  
  FUN_142c2a3c0(&uStack_80,alStack_70,0x1db42,param_2[4]);
  FUN_142c2a3c0(&uStack_a0,&lStack_90,0x1db42,param_2[3]);
  FUN_142c2a3c0(&uStack_c0,&lStack_b0,0x1db42,param_2[2]);
  FUN_142c2a3c0(&uStack_e0,&lStack_d0,0x1db42,param_2[1]);
  FUN_142c2a3c0(&uStack_120,&lStack_e8,0x1db42,*param_2);
  uStack_d8 = uStack_120 >> 0x33 | lStack_e8 << 0xd;
  uStack_50 = uStack_120 & 0x7ffffffffffff;
  FUN_142c2a270(&uStack_118,&bStack_128,0,uStack_d8,uStack_e0);
  lStack_c8 = (ulonglong)bStack_128 + lStack_d0;
  uStack_b8 = uStack_118 >> 0x33 | lStack_c8 * 0x2000;
  uStack_48 = uStack_118 & 0x7ffffffffffff;
  FUN_142c2a270(&uStack_110,&bStack_127,0,uStack_b8,uStack_c0);
  lStack_a8 = (ulonglong)bStack_127 + lStack_b0;
  uStack_98 = uStack_110 >> 0x33 | lStack_a8 * 0x2000;
  uStack_40 = uStack_110 & 0x7ffffffffffff;
  FUN_142c2a270(&uStack_108,&bStack_126,0,uStack_98,uStack_a0);
  lStack_88 = (ulonglong)bStack_126 + lStack_90;
  uStack_78 = uStack_108 >> 0x33 | lStack_88 * 0x2000;
  uStack_20 = uStack_108 & 0x7ffffffffffff;
  FUN_142c2a270(auStack_100,abStack_125,0,uStack_78,uStack_80);
  uStack_50 = uStack_50 +
              (auStack_100[0] >> 0x33 | ((ulonglong)abStack_125[0] + alStack_70[0]) * 0x2000) * 0x13
  ;
  uStack_48 = (uStack_50 >> 0x33 & 0xff) + uStack_48;
  *param_1 = uStack_50 & 0x7ffffffffffff;
  param_1[1] = uStack_48 & 0x7ffffffffffff;
  param_1[2] = (uStack_48 >> 0x33 & 0xff) + uStack_40;
  param_1[3] = uStack_20;
  param_1[4] = auStack_100[0] & 0x7ffffffffffff;
  return;
}


/* address=142c2de90 name=FUN_142c2de90 */

ulonglong FUN_142c2de90(uint3 *param_1)

{
  return (ulonglong)*param_1;
}


/* address=142c2df10 name=FUN_142c2df10 */

undefined4 FUN_142c2df10(undefined4 *param_1)

{
  return *param_1;
}


/* address=142c2dfb0 name=FUN_142c2dfb0 */

void FUN_142c2dfb0(longlong param_1,longlong param_2)

{
  uint uStack_18;
  
  if ((*(byte *)(param_2 + 0x1f) & 0x80) != 0) {
    FID_conflict__assert((wchar_t *)s___143ceaa98,(wchar_t *)s_D_143cea9c0,0x9c);
  }
  FUN_142c2d170(param_1,param_2);
  for (uStack_18 = 0; uStack_18 < 5; uStack_18 = uStack_18 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)uStack_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_143ceaba0,(wchar_t *)s_D_143ceaac0,0x9e);
    }
  }
  return;
}


/* address=142c2e070 name=FUN_142c2e070 */

void FUN_142c2e070(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined auStack_38 [31];
  byte bStack_19;
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  FUN_142c26fb0(auStack_38,param_2,0x20);
  bStack_19 = bStack_19 & 0x7f;
  FUN_142c2dfb0(param_1,auStack_38);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c2e0f0 name=FUN_142c2e0f0 */

void FUN_142c2e0f0(undefined8 param_1,longlong param_2)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 5; uStack_18 = uStack_18 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_143ceace0,(wchar_t *)s_D_143ceac00,0xa9);
    }
  }
  FUN_142c2c6a0(param_1,param_2);
  return;
}


/* address=142c2e180 name=FUN_142c2e180 */

void FUN_142c2e180(undefined8 param_1)

{
  FUN_142c27050(param_1,0,0x28);
  return;
}


/* address=142c2e1b0 name=FUN_142c2e1b0 */

void FUN_142c2e1b0(undefined8 param_1)

{
  FUN_142c27050(param_1,0,0x28);
  return;
}


/* address=142c2e1e0 name=FUN_142c2e1e0 */

void FUN_142c2e1e0(undefined8 *param_1)

{
  FUN_142c27050(param_1,0,0x28);
  *param_1 = 1;
  return;
}


/* address=142c2e220 name=FUN_142c2e220 */

void FUN_142c2e220(undefined8 *param_1)

{
  FUN_142c27050(param_1,0,0x28);
  *param_1 = 1;
  return;
}


/* address=142c2e260 name=FUN_142c2e260 */

void FUN_142c2e260(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  
  for (uStack_28 = 0; uStack_28 < 5; uStack_28 = uStack_28 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)uStack_28 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_143ceae20,(wchar_t *)s_D_143cead40,0xc4);
    }
  }
  for (uStack_24 = 0; uStack_24 < 5; uStack_24 = uStack_24 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_3 + (ulonglong)uStack_24 * 8)) {
      FID_conflict__assert((wchar_t *)s_g_143ceaf60,(wchar_t *)s_D_143ceae80,0xc5);
    }
  }
  FUN_142c2c260(param_1,param_2,param_3);
  for (uStack_20 = 0; uStack_20 < 5; uStack_20 = uStack_20 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_1 + (ulonglong)uStack_20 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_143ceb0a0,(wchar_t *)s_D_143ceafc0,199);
    }
  }
  return;
}


/* address=142c2e3b0 name=FUN_142c2e3b0 */

void FUN_142c2e3b0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  
  for (uStack_28 = 0; uStack_28 < 5; uStack_28 = uStack_28 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)uStack_28 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_143ceb1f0,(wchar_t *)s_D_143ceb110,0xcd);
    }
  }
  for (uStack_24 = 0; uStack_24 < 5; uStack_24 = uStack_24 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_3 + (ulonglong)uStack_24 * 8)) {
      FID_conflict__assert((wchar_t *)s_g_143ceb330,(wchar_t *)s_D_143ceb250,0xce);
    }
  }
  FUN_142c2c3c0(param_1,param_2,param_3);
  for (uStack_20 = 0; uStack_20 < 5; uStack_20 = uStack_20 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_1 + (ulonglong)uStack_20 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_143ceb470,(wchar_t *)s_D_143ceb390,0xd0);
    }
  }
  return;
}


/* address=142c2e500 name=FUN_142c2e500 */

void FUN_142c2e500(longlong param_1,longlong param_2)

{
  uint uStack_18;
  uint uStack_14;
  
  for (uStack_18 = 0; uStack_18 < 5; uStack_18 = uStack_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_143ceb5c0,(wchar_t *)s_D_143ceb4e0,0xd4);
    }
  }
  FUN_142c2c050(param_1,param_2);
  for (uStack_14 = 0; uStack_14 < 5; uStack_14 = uStack_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)uStack_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_143ceb710,(wchar_t *)s_D_143ceb630,0xd6);
    }
  }
  return;
}


/* address=142c2e5e0 name=FUN_142c2e5e0 */

void FUN_142c2e5e0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  for (uStack_18 = 0; uStack_18 < 5; uStack_18 = uStack_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_i_143ceb850,(wchar_t *)s_D_143ceb770,0xdc);
    }
  }
  for (uStack_14 = 0; uStack_14 < 5; uStack_14 = uStack_14 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_3 + (ulonglong)uStack_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_i_143ceb990,(wchar_t *)s_D_143ceb8b0,0xdd);
    }
  }
  FUN_142c2a4a0(param_1,param_2,param_3);
  for (uStack_10 = 0; uStack_10 < 5; uStack_10 = uStack_10 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)uStack_10 * 8)) {
      FID_conflict__assert((wchar_t *)s_o_143cebad0,(wchar_t *)s_D_143ceb9f0,0xdf);
    }
  }
  return;
}


/* address=142c2e720 name=FUN_142c2e720 */

void FUN_142c2e720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c2e5e0(param_1,param_2,param_3);
  return;
}


/* address=142c2e770 name=FUN_142c2e770 */

void FUN_142c2e770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c2e5e0(param_1,param_2,param_3);
  return;
}


/* address=142c2e7c0 name=FUN_142c2e7c0 */

void FUN_142c2e7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c2e5e0(param_1,param_2,param_3);
  return;
}


/* address=142c2e810 name=FUN_142c2e810 */

void FUN_142c2e810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c2e5e0(param_1,param_2,param_3);
  return;
}


/* address=142c2e860 name=FUN_142c2e860 */

void FUN_142c2e860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c2e5e0(param_1,param_2,param_3);
  return;
}


/* address=142c2e8b0 name=FUN_142c2e8b0 */

void FUN_142c2e8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c2e5e0(param_1,param_2,param_3);
  return;
}


/* address=142c2e900 name=FUN_142c2e900 */

void FUN_142c2e900(longlong param_1,longlong param_2)

{
  uint uStack_18;
  uint uStack_14;
  
  for (uStack_18 = 0; uStack_18 < 5; uStack_18 = uStack_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_143cebc10,(wchar_t *)s_D_143cebb30,0xfb);
    }
  }
  FUN_142c2b560(param_1,param_2);
  for (uStack_14 = 0; uStack_14 < 5; uStack_14 = uStack_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)uStack_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_143cebd60,(wchar_t *)s_D_143cebc80,0xfd);
    }
  }
  return;
}


/* address=142c2e9e0 name=FUN_142c2e9e0 */

void FUN_142c2e9e0(longlong param_1,longlong param_2)

{
  uint uStack_18;
  uint uStack_14;
  
  for (uStack_18 = 0; uStack_18 < 5; uStack_18 = uStack_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_143cebea0,(wchar_t *)s_D_143cebdc0,0x101);
    }
  }
  FUN_142c2b560(param_1,param_2);
  for (uStack_14 = 0; uStack_14 < 5; uStack_14 = uStack_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)uStack_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_143cebff0,(wchar_t *)s_D_143cebf10,0x103);
    }
  }
  return;
}


/* address=142c2eac0 name=FUN_142c2eac0 */

void FUN_142c2eac0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 5; uStack_18 = uStack_18 + 1) {
    uVar1 = (*(ulonglong *)(param_1 + (ulonglong)uStack_18 * 8) ^
            *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8)) & -param_3;
    *(ulonglong *)(param_1 + (ulonglong)uStack_18 * 8) =
         *(ulonglong *)(param_1 + (ulonglong)uStack_18 * 8) ^ uVar1;
    *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8) =
         *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8) ^ uVar1;
  }
  return;
}


/* address=142c2eb80 name=FUN_142c2eb80 */

void FUN_142c2eb80(longlong param_1,longlong param_2)

{
  uint uStack_18;
  uint uStack_14;
  
  for (uStack_18 = 0; uStack_18 < 5; uStack_18 = uStack_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_143cec130,(wchar_t *)s_D_143cec050,0x115);
    }
  }
  FUN_142c2da30(param_1,param_2);
  for (uStack_14 = 0; uStack_14 < 5; uStack_14 = uStack_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)uStack_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_143cec280,(wchar_t *)s_D_143cec1a0,0x117);
    }
  }
  return;
}


/* address=142c2ec60 name=FUN_142c2ec60 */

void FUN_142c2ec60(longlong param_1,longlong param_2)

{
  uint uStack_18;
  uint uStack_14;
  
  for (uStack_18 = 0; uStack_18 < 5; uStack_18 = uStack_18 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_143cec3c0,(wchar_t *)s_D_143cec2e0,0x11c);
    }
  }
  FUN_142c2c560(param_1,param_2);
  for (uStack_14 = 0; uStack_14 < 5; uStack_14 = uStack_14 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_1 + (ulonglong)uStack_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_143cec500,(wchar_t *)s_D_143cec420,0x11e);
    }
  }
  return;
}


/* address=142c2ed40 name=FUN_142c2ed40 */

void FUN_142c2ed40(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 5; uStack_18 = uStack_18 + 1) {
    *(ulonglong *)(param_1 + (ulonglong)uStack_18 * 8) =
         *(ulonglong *)(param_1 + (ulonglong)uStack_18 * 8) ^
         (*(ulonglong *)(param_1 + (ulonglong)uStack_18 * 8) ^
         *(ulonglong *)(param_2 + (ulonglong)uStack_18 * 8)) & -param_3;
  }
  return;
}


/* address=142c2ede0 name=FUN_142c2ede0 */

void FUN_142c2ede0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c27000(param_1,param_2,0x28);
  return;
}


/* address=142c2ee10 name=FUN_142c2ee10 */

void FUN_142c2ee10(undefined8 param_1,undefined8 param_2)

{
  FUN_142c27000(param_1,param_2,0x28);
  return;
}


/* address=142c2ee40 name=FUN_142c2ee40 */

void FUN_142c2ee40(undefined8 param_1,undefined8 param_2)

{
  FUN_142c27000(param_1,param_2,0x28);
  return;
}


/* address=142c2ee70 name=FUN_142c2ee70 */

void FUN_142c2ee70(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_d8 [32];
  int iStack_b8;
  undefined auStack_b0 [40];
  undefined auStack_88 [40];
  undefined auStack_60 [40];
  undefined auStack_38 [40];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_d8;
  FUN_142c2e900(auStack_38,param_2);
  FUN_142c2e9e0(auStack_88,auStack_38);
  for (iStack_b8 = 1; iStack_b8 < 2; iStack_b8 = iStack_b8 + 1) {
    FUN_142c2e9e0(auStack_88,auStack_88);
  }
  FUN_142c2e810(auStack_88,param_2,auStack_88);
  FUN_142c2e7c0(auStack_38,auStack_38,auStack_88);
  FUN_142c2e9e0(auStack_b0,auStack_38);
  FUN_142c2e7c0(auStack_88,auStack_88,auStack_b0);
  FUN_142c2e9e0(auStack_b0,auStack_88);
  for (iStack_b8 = 1; iStack_b8 < 5; iStack_b8 = iStack_b8 + 1) {
    FUN_142c2e9e0(auStack_b0,auStack_b0);
  }
  FUN_142c2e7c0(auStack_88,auStack_b0,auStack_88);
  FUN_142c2e9e0(auStack_b0,auStack_88);
  for (iStack_b8 = 1; iStack_b8 < 10; iStack_b8 = iStack_b8 + 1) {
    FUN_142c2e9e0(auStack_b0,auStack_b0);
  }
  FUN_142c2e7c0(auStack_b0,auStack_b0,auStack_88);
  FUN_142c2e9e0(auStack_60,auStack_b0);
  for (iStack_b8 = 1; iStack_b8 < 0x14; iStack_b8 = iStack_b8 + 1) {
    FUN_142c2e9e0(auStack_60,auStack_60);
  }
  FUN_142c2e7c0(auStack_b0,auStack_60,auStack_b0);
  FUN_142c2e9e0(auStack_b0,auStack_b0);
  for (iStack_b8 = 1; iStack_b8 < 10; iStack_b8 = iStack_b8 + 1) {
    FUN_142c2e9e0(auStack_b0,auStack_b0);
  }
  FUN_142c2e7c0(auStack_88,auStack_b0,auStack_88);
  FUN_142c2e9e0(auStack_b0,auStack_88);
  for (iStack_b8 = 1; iStack_b8 < 0x32; iStack_b8 = iStack_b8 + 1) {
    FUN_142c2e9e0(auStack_b0,auStack_b0);
  }
  FUN_142c2e7c0(auStack_b0,auStack_b0,auStack_88);
  FUN_142c2e9e0(auStack_60,auStack_b0);
  for (iStack_b8 = 1; iStack_b8 < 100; iStack_b8 = iStack_b8 + 1) {
    FUN_142c2e9e0(auStack_60,auStack_60);
  }
  FUN_142c2e7c0(auStack_b0,auStack_60,auStack_b0);
  FUN_142c2e9e0(auStack_b0,auStack_b0);
  for (iStack_b8 = 1; iStack_b8 < 0x32; iStack_b8 = iStack_b8 + 1) {
    FUN_142c2e9e0(auStack_b0,auStack_b0);
  }
  FUN_142c2e7c0(auStack_88,auStack_b0,auStack_88);
  FUN_142c2e9e0(auStack_88,auStack_88);
  for (iStack_b8 = 1; iStack_b8 < 5; iStack_b8 = iStack_b8 + 1) {
    FUN_142c2e9e0(auStack_88,auStack_88);
  }
  FUN_142c2e7c0(param_1,auStack_88,auStack_38);
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=142c2f1f0 name=FUN_142c2f1f0 */

void FUN_142c2f1f0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined auStack_38 [40];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  FUN_142c2ee10(auStack_38,param_2);
  FUN_142c2ee70(param_1,auStack_38);
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c2f250 name=FUN_142c2f250 */

void FUN_142c2f250(undefined8 param_1)

{
  int iVar1;
  undefined auStack_88 [32];
  uint uStack_68;
  undefined auStack_60 [40];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_88;
  FUN_142c2e500(auStack_60,param_1);
  FUN_142c2e0f0(auStack_38,auStack_60);
  iVar1 = FUN_142b0ec70(auStack_38,&DAT_1432997e0,0x20);
  uStack_68 = (uint)(iVar1 != 0);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=142c2f2e0 name=FUN_142c2f2e0 */

void FUN_142c2f2e0(undefined8 param_1)

{
  undefined auStack_58 [32];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  FUN_142c2e0f0(auStack_38,param_1);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c2f330 name=FUN_142c2f330 */

void FUN_142c2f330(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined auStack_38 [40];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  FUN_142c2e9e0(param_1,param_2);
  FUN_142c2e260(auStack_38,param_1,param_1);
  FUN_142c2e500(param_1,auStack_38);
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c2f3a0 name=FUN_142c2f3a0 */

void FUN_142c2f3a0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_b8 [32];
  int iStack_98;
  undefined auStack_90 [40];
  undefined auStack_68 [40];
  undefined auStack_40 [40];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_b8;
  FUN_142c2e9e0(auStack_68,param_2);
  FUN_142c2e9e0(auStack_90,auStack_68);
  for (iStack_98 = 1; iStack_98 < 2; iStack_98 = iStack_98 + 1) {
    FUN_142c2e9e0(auStack_90,auStack_90);
  }
  FUN_142c2e7c0(auStack_90,param_2,auStack_90);
  FUN_142c2e7c0(auStack_68,auStack_68,auStack_90);
  FUN_142c2e9e0(auStack_68,auStack_68);
  FUN_142c2e7c0(auStack_68,auStack_90,auStack_68);
  FUN_142c2e9e0(auStack_90,auStack_68);
  for (iStack_98 = 1; iStack_98 < 5; iStack_98 = iStack_98 + 1) {
    FUN_142c2e9e0(auStack_90,auStack_90);
  }
  FUN_142c2e7c0(auStack_68,auStack_90,auStack_68);
  FUN_142c2e9e0(auStack_90,auStack_68);
  for (iStack_98 = 1; iStack_98 < 10; iStack_98 = iStack_98 + 1) {
    FUN_142c2e9e0(auStack_90,auStack_90);
  }
  FUN_142c2e7c0(auStack_90,auStack_90,auStack_68);
  FUN_142c2e9e0(auStack_40,auStack_90);
  for (iStack_98 = 1; iStack_98 < 0x14; iStack_98 = iStack_98 + 1) {
    FUN_142c2e9e0(auStack_40,auStack_40);
  }
  FUN_142c2e7c0(auStack_90,auStack_40,auStack_90);
  FUN_142c2e9e0(auStack_90,auStack_90);
  for (iStack_98 = 1; iStack_98 < 10; iStack_98 = iStack_98 + 1) {
    FUN_142c2e9e0(auStack_90,auStack_90);
  }
  FUN_142c2e7c0(auStack_68,auStack_90,auStack_68);
  FUN_142c2e9e0(auStack_90,auStack_68);
  for (iStack_98 = 1; iStack_98 < 0x32; iStack_98 = iStack_98 + 1) {
    FUN_142c2e9e0(auStack_90,auStack_90);
  }
  FUN_142c2e7c0(auStack_90,auStack_90,auStack_68);
  FUN_142c2e9e0(auStack_40,auStack_90);
  for (iStack_98 = 1; iStack_98 < 100; iStack_98 = iStack_98 + 1) {
    FUN_142c2e9e0(auStack_40,auStack_40);
  }
  FUN_142c2e7c0(auStack_90,auStack_40,auStack_90);
  FUN_142c2e9e0(auStack_90,auStack_90);
  for (iStack_98 = 1; iStack_98 < 0x32; iStack_98 = iStack_98 + 1) {
    FUN_142c2e9e0(auStack_90,auStack_90);
  }
  FUN_142c2e7c0(auStack_68,auStack_90,auStack_68);
  FUN_142c2e9e0(auStack_68,auStack_68);
  for (iStack_98 = 1; iStack_98 < 2; iStack_98 = iStack_98 + 1) {
    FUN_142c2e9e0(auStack_68,auStack_68);
  }
  FUN_142c2e7c0(param_1,auStack_68,param_2);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=142c2f710 name=FUN_142c2f710 */

void FUN_142c2f710(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_b8 [32];
  longlong lStack_98;
  undefined auStack_90 [40];
  undefined auStack_68 [40];
  undefined auStack_40 [40];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_b8;
  FUN_142c2f1f0(auStack_90,param_2 + 0x50);
  FUN_142c2e7c0(auStack_40,param_2,auStack_90);
  FUN_142c2e7c0(auStack_68,param_2 + 0x28,auStack_90);
  FUN_142c2e0f0(param_1,auStack_68);
  lStack_98 = 0x1f;
  iVar1 = FUN_142c2f2e0(auStack_40);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + lStack_98) ^ (byte)(iVar1 << 7);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=142c2f800 name=FUN_142c2f800 */

void FUN_142c2f800(longlong param_1)

{
  FUN_142c2e180(param_1);
  FUN_142c2e1e0(param_1 + 0x28);
  FUN_142c2e1e0(param_1 + 0x50);
  return;
}


/* address=142c2f850 name=FUN_142c2f850 */

void FUN_142c2f850(longlong param_1)

{
  FUN_142c2e180(param_1);
  FUN_142c2e1e0(param_1 + 0x28);
  FUN_142c2e1e0(param_1 + 0x50);
  FUN_142c2e180(param_1 + 0x78);
  return;
}


/* address=142c2f8b0 name=FUN_142c2f8b0 */

void FUN_142c2f8b0(longlong param_1)

{
  FUN_142c2e220(param_1);
  FUN_142c2e220(param_1 + 0x28);
  FUN_142c2e220(param_1 + 0x50);
  FUN_142c2e1b0(param_1 + 0x78);
  return;
}


/* address=142c2f910 name=FUN_142c2f910 */

void FUN_142c2f910(longlong param_1)

{
  FUN_142c2e220(param_1);
  FUN_142c2e220(param_1 + 0x28);
  FUN_142c2e1b0(param_1 + 0x50);
  return;
}


/* address=142c2f960 name=FUN_142c2f960 */

void FUN_142c2f960(longlong param_1,longlong param_2)

{
  FUN_142c2ede0(param_1,param_2);
  FUN_142c2ede0(param_1 + 0x28,param_2 + 0x28);
  FUN_142c2ede0(param_1 + 0x50,param_2 + 0x50);
  return;
}


/* address=142c2f9c0 name=FUN_142c2f9c0 */

void FUN_142c2f9c0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_d8 [32];
  undefined auStack_b8 [160];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_d8;
  FUN_142c27590(auStack_b8,param_2);
  FUN_142c27430(param_1,auStack_b8);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=142c2fa30 name=FUN_142c2fa30 */

void FUN_142c2fa30(longlong param_1,longlong param_2)

{
  undefined auStack_d8 [32];
  longlong lStack_b8;
  undefined auStack_b0 [40];
  undefined auStack_88 [40];
  undefined auStack_60 [40];
  undefined auStack_38 [40];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_d8;
  FUN_142c2e9e0(auStack_88,param_2);
  FUN_142c2e9e0(auStack_b0,param_2 + 0x28);
  FUN_142c2f330(auStack_38,param_2 + 0x50);
  lStack_b8 = param_1 + 0x28;
  FUN_142c2e260(lStack_b8,param_2,param_2 + 0x28);
  FUN_142c2e900(auStack_60,param_1 + 0x28);
  FUN_142c2e260(param_1 + 0x28,auStack_b0,auStack_88);
  FUN_142c2e3b0(param_1 + 0x50,auStack_b0,auStack_88);
  FUN_142c2e500(auStack_b0,param_1 + 0x28);
  FUN_142c2e3b0(param_1,auStack_60,auStack_b0);
  FUN_142c2e500(auStack_b0,param_1 + 0x50);
  FUN_142c2e3b0(param_1 + 0x78,auStack_38,auStack_b0);
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=142c2fbc0 name=FUN_142c2fbc0 */

void FUN_142c2fbc0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_b8 [32];
  undefined auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_b8;
  FUN_142c2f960(auStack_98,param_2);
  FUN_142c2fa30(param_1,auStack_98);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=142c2fc30 name=FUN_142c2fc30 */

void FUN_142c2fc30(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_c8 [32];
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined auStack_90 [40];
  undefined auStack_68 [40];
  undefined auStack_40 [40];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_c8;
  lStack_a8 = param_1;
  FUN_142c2e260(param_1,param_2 + 0x28,param_2);
  lStack_a0 = param_1 + 0x28;
  FUN_142c2e3b0(lStack_a0,param_2 + 0x28,param_2);
  FUN_142c2e8b0(auStack_90,param_1,param_3);
  FUN_142c2e8b0(auStack_68,param_1 + 0x28,param_3 + 0x28);
  FUN_142c2e810(auStack_40,param_3 + 0x50,param_2 + 0x78);
  lStack_98 = param_1 + 0x78;
  FUN_142c2e260(lStack_98,param_2 + 0x50,param_2 + 0x50);
  FUN_142c2e3b0(param_1,auStack_90,auStack_68);
  FUN_142c2e260(param_1 + 0x28,auStack_90,auStack_68);
  FUN_142c2e500(auStack_90,param_1 + 0x78);
  FUN_142c2e260(param_1 + 0x50,auStack_90,auStack_40);
  FUN_142c2e3b0(param_1 + 0x78,auStack_90,auStack_40);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=142c2fe30 name=FUN_142c2fe30 */

void FUN_142c2fe30(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_c8 [32];
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined auStack_90 [40];
  undefined auStack_68 [40];
  undefined auStack_40 [40];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_c8;
  lStack_a8 = param_1;
  FUN_142c2e260(param_1,param_2 + 0x28,param_2);
  lStack_a0 = param_1 + 0x28;
  FUN_142c2e3b0(lStack_a0,param_2 + 0x28,param_2);
  FUN_142c2e8b0(auStack_90,param_1,param_3 + 0x28);
  FUN_142c2e8b0(auStack_68,param_1 + 0x28,param_3);
  FUN_142c2e810(auStack_40,param_3 + 0x50,param_2 + 0x78);
  lStack_98 = param_1 + 0x78;
  FUN_142c2e260(lStack_98,param_2 + 0x50,param_2 + 0x50);
  FUN_142c2e3b0(param_1,auStack_90,auStack_68);
  FUN_142c2e260(param_1 + 0x28,auStack_90,auStack_68);
  FUN_142c2e500(auStack_90,param_1 + 0x78);
  FUN_142c2e3b0(param_1 + 0x50,auStack_90,auStack_40);
  FUN_142c2e260(param_1 + 0x78,auStack_90,auStack_40);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=142c30030 name=FUN_142c30030 */

byte FUN_142c30030(byte param_1,byte param_2)

{
  byte bStack_14;
  
  bStack_14 = (byte)((param_1 ^ param_2) - 1 >> 0x1f);
  return bStack_14;
}


/* address=142c30090 name=FUN_142c30090 */

void FUN_142c30090(longlong param_1,longlong param_2,undefined param_3)

{
  FUN_142c2ed40(param_1,param_2,param_3);
  FUN_142c2ed40(param_1 + 0x28,param_2 + 0x28,param_3);
  FUN_142c2ed40(param_1 + 0x50,param_2 + 0x50,param_3);
  return;
}


/* address=142c30140 name=FUN_142c30140 */

byte FUN_142c30140(char param_1)

{
  byte bStack_18;
  
  bStack_18 = (byte)(param_1 >> 7) >> 7;
  return bStack_18;
}


/* address=142c30170 name=FUN_142c30170 */

void FUN_142c30170(longlong param_1,int param_2,byte param_3)

{
  undefined uVar1;
  undefined auStack_e8 [32];
  char cStack_c8;
  char cStack_c7;
  undefined auStack_c0 [40];
  undefined auStack_98 [40];
  undefined auStack_70 [40];
  undefined auStack_48 [48];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_e8;
  cStack_c7 = FUN_142c30140(param_3);
  cStack_c8 = param_3 + (-cStack_c7 & param_3) * -2;
  FUN_142c2f910(param_1);
  uVar1 = FUN_142c30030(cStack_c8,1);
  FUN_142c30090(param_1,&DAT_1432998c0 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_142c30030(cStack_c8,2);
  FUN_142c30090(param_1,&UNK_143299938 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_142c30030(cStack_c8,3);
  FUN_142c30090(param_1,&UNK_1432999b0 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_142c30030(cStack_c8,4);
  FUN_142c30090(param_1,&UNK_143299a28 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_142c30030(cStack_c8,5);
  FUN_142c30090(param_1,&UNK_143299aa0 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_142c30030(cStack_c8,6);
  FUN_142c30090(param_1,&UNK_143299b18 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_142c30030(cStack_c8,7);
  FUN_142c30090(param_1,&UNK_143299b90 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_142c30030(cStack_c8,8);
  FUN_142c30090(param_1,&UNK_143299c08 + (longlong)param_2 * 0x3c0,uVar1);
  FUN_142c2ee40(auStack_98,param_1 + 0x28);
  FUN_142c2ee40(auStack_70,param_1);
  FUN_142c2e500(auStack_c0,param_1 + 0x50);
  FUN_142c2ec60(auStack_48,auStack_c0);
  FUN_142c30090(param_1,auStack_98,cStack_c7);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_e8);
  return;
}


/* address=142c304b0 name=FUN_142c304b0 */

void FUN_142c304b0(longlong param_1,longlong param_2,undefined param_3)

{
  FUN_142c2ed40(param_1,param_2,param_3);
  FUN_142c2ed40(param_1 + 0x28,param_2 + 0x28,param_3);
  FUN_142c2ed40(param_1 + 0x50,param_2 + 0x50,param_3);
  FUN_142c2ed40(param_1 + 0x78,param_2 + 0x78,param_3);
  return;
}


/* address=142c30590 name=FUN_142c30590 */

void FUN_142c30590(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  for (iStack_28 = 0; iStack_28 < 0x100; iStack_28 = iStack_28 + 1) {
    *(byte *)(param_1 + iStack_28) =
         (byte)((int)(uint)*(byte *)(param_2 + (iStack_28 >> 3)) >> ((byte)iStack_28 & 7)) & 1;
  }
  iStack_28 = 0;
  while( true ) {
    if (0xff < iStack_28) {
      return;
    }
    if (*(char *)(param_1 + iStack_28) != '\0') break;
LAB_142c305eb:
    iStack_28 = iStack_28 + 1;
  }
  iStack_24 = 1;
  do {
    if ((6 < iStack_24) || (0xff < iStack_28 + iStack_24)) goto LAB_142c305eb;
    if (*(char *)(param_1 + (iStack_28 + iStack_24)) != '\0') {
      bVar1 = (byte)iStack_24;
      if ((int)*(char *)(param_1 + iStack_28) +
          ((int)*(char *)(param_1 + (iStack_28 + iStack_24)) << (bVar1 & 0x1f)) < 0x10) {
        *(char *)(param_1 + iStack_28) =
             *(char *)(param_1 + iStack_28) +
             (char)((int)*(char *)(param_1 + (iStack_28 + iStack_24)) << (bVar1 & 0x1f));
        *(undefined *)(param_1 + (iStack_28 + iStack_24)) = 0;
      }
      else {
        if ((int)*(char *)(param_1 + iStack_28) -
            ((int)*(char *)(param_1 + (iStack_28 + iStack_24)) << (bVar1 & 0x1f)) < -0xf)
        goto LAB_142c305eb;
        *(char *)(param_1 + iStack_28) =
             *(char *)(param_1 + iStack_28) -
             (char)((int)*(char *)(param_1 + (iStack_28 + iStack_24)) << (bVar1 & 0x1f));
        for (iStack_20 = iStack_28 + iStack_24; iStack_20 < 0x100; iStack_20 = iStack_20 + 1) {
          if (*(char *)(param_1 + iStack_20) == '\0') {
            *(undefined *)(param_1 + iStack_20) = 1;
            break;
          }
          *(undefined *)(param_1 + iStack_20) = 0;
        }
      }
    }
    iStack_24 = iStack_24 + 1;
  } while( true );
}


/* address=142c30800 name=FUN_142c30800 */

void FUN_142c30800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_928 [32];
  int iStack_908;
  undefined auStack_8f8 [160];
  undefined auStack_858 [160];
  undefined auStack_7b8 [160];
  undefined auStack_718 [160];
  undefined auStack_678 [160];
  undefined auStack_5d8 [160];
  undefined auStack_538 [160];
  undefined auStack_498 [160];
  undefined auStack_3f8 [160];
  undefined auStack_358 [160];
  undefined auStack_2b8 [160];
  char acStack_218 [256];
  char acStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_928;
  FUN_142c30590(acStack_218,param_2);
  FUN_142c30590(acStack_118,param_4);
  FUN_142c27430(auStack_718,param_3);
  FUN_142c2fbc0(auStack_8f8,param_3);
  FUN_142c27590(auStack_7b8,auStack_8f8);
  FUN_142c27670(auStack_8f8,auStack_7b8,auStack_718);
  FUN_142c27590(auStack_858,auStack_8f8);
  FUN_142c27430(auStack_678,auStack_858);
  FUN_142c27670(auStack_8f8,auStack_7b8,auStack_678);
  FUN_142c27590(auStack_858,auStack_8f8);
  FUN_142c27430(auStack_5d8,auStack_858);
  FUN_142c27670(auStack_8f8,auStack_7b8,auStack_5d8);
  FUN_142c27590(auStack_858,auStack_8f8);
  FUN_142c27430(auStack_538,auStack_858);
  FUN_142c27670(auStack_8f8,auStack_7b8,auStack_538);
  FUN_142c27590(auStack_858,auStack_8f8);
  FUN_142c27430(auStack_498,auStack_858);
  FUN_142c27670(auStack_8f8,auStack_7b8,auStack_498);
  FUN_142c27590(auStack_858,auStack_8f8);
  FUN_142c27430(auStack_3f8,auStack_858);
  FUN_142c27670(auStack_8f8,auStack_7b8,auStack_3f8);
  FUN_142c27590(auStack_858,auStack_8f8);
  FUN_142c27430(auStack_358,auStack_858);
  FUN_142c27670(auStack_8f8,auStack_7b8,auStack_358);
  FUN_142c27590(auStack_858,auStack_8f8);
  FUN_142c27430(auStack_2b8,auStack_858);
  FUN_142c2f800(param_1);
  for (iStack_908 = 0xff;
      ((-1 < iStack_908 && (acStack_218[iStack_908] == '\0')) && (acStack_118[iStack_908] == '\0'));
      iStack_908 = iStack_908 + -1) {
  }
  for (; -1 < iStack_908; iStack_908 = iStack_908 + -1) {
    FUN_142c2fa30(auStack_8f8,param_1);
    if (acStack_218[iStack_908] < '\x01') {
      if (acStack_218[iStack_908] < '\0') {
        FUN_142c27590(auStack_858,auStack_8f8);
        FUN_142c27880(auStack_8f8,auStack_858,
                      auStack_718 + (longlong)(-(int)acStack_218[iStack_908] / 2) * 0xa0);
      }
    }
    else {
      FUN_142c27590(auStack_858,auStack_8f8);
      FUN_142c27670(auStack_8f8,auStack_858,
                    auStack_718 + (longlong)((int)acStack_218[iStack_908] / 2) * 0xa0);
    }
    if (acStack_118[iStack_908] < '\x01') {
      if (acStack_118[iStack_908] < '\0') {
        FUN_142c27590(auStack_858,auStack_8f8);
        FUN_142c2fe30(auStack_8f8,auStack_858,
                      &DAT_1432a10c0 + (longlong)(-(int)acStack_118[iStack_908] / 2) * 0x78);
      }
    }
    else {
      FUN_142c27590(auStack_858,auStack_8f8);
      FUN_142c2fc30(auStack_8f8,auStack_858,
                    &DAT_1432a10c0 + (longlong)((int)acStack_118[iStack_908] / 2) * 0x78);
    }
    FUN_142c274e0(param_1,auStack_8f8);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_928);
  return;
}


/* address=142c30d40 name=FUN_142c30d40 */

longlong FUN_142c30d40(longlong param_1)

{
  return param_1 << 0x15;
}


/* address=142c30d60 name=FUN_142c30d60 */

void FUN_142c30d60(undefined *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  longlong lVar68;
  longlong lVar69;
  longlong lVar70;
  longlong lVar71;
  longlong lVar72;
  longlong lVar73;
  longlong lVar74;
  longlong lVar75;
  longlong lVar76;
  longlong lVar77;
  longlong lVar78;
  longlong lVar79;
  longlong lVar80;
  longlong lVar81;
  longlong lVar82;
  longlong lVar83;
  longlong lVar84;
  longlong lVar85;
  longlong lVar86;
  longlong lVar87;
  longlong lVar88;
  longlong lVar89;
  undefined uStack_290;
  undefined uStack_230;
  
  uVar1 = FUN_142c2de90(param_2);
  uVar1 = uVar1 & 0x1fffff;
  uVar2 = FUN_142c2df10(param_2 + 2);
  uVar2 = uVar2 >> 5 & 0x1fffff;
  uVar3 = FUN_142c2de90(param_2 + 5);
  uVar3 = uVar3 >> 2 & 0x1fffff;
  uVar4 = FUN_142c2df10(param_2 + 7);
  uVar4 = uVar4 >> 7 & 0x1fffff;
  uVar5 = FUN_142c2df10(param_2 + 10);
  uVar5 = uVar5 >> 4 & 0x1fffff;
  uVar6 = FUN_142c2de90(param_2 + 0xd);
  uVar6 = uVar6 >> 1 & 0x1fffff;
  uVar7 = FUN_142c2df10(param_2 + 0xf);
  uVar7 = uVar7 >> 6 & 0x1fffff;
  uVar8 = FUN_142c2de90(param_2 + 0x12);
  uVar8 = uVar8 >> 3 & 0x1fffff;
  uVar9 = FUN_142c2de90(param_2 + 0x15);
  uVar9 = uVar9 & 0x1fffff;
  uVar10 = FUN_142c2df10(param_2 + 0x17);
  uVar10 = uVar10 >> 5 & 0x1fffff;
  uVar11 = FUN_142c2de90(param_2 + 0x1a);
  uVar11 = uVar11 >> 2 & 0x1fffff;
  uVar12 = FUN_142c2df10(param_2 + 0x1c);
  uVar12 = uVar12 >> 7;
  uVar13 = FUN_142c2de90(param_3);
  uVar13 = uVar13 & 0x1fffff;
  uVar14 = FUN_142c2df10(param_3 + 2);
  uVar14 = uVar14 >> 5 & 0x1fffff;
  uVar15 = FUN_142c2de90(param_3 + 5);
  uVar15 = uVar15 >> 2 & 0x1fffff;
  uVar16 = FUN_142c2df10(param_3 + 7);
  uVar16 = uVar16 >> 7 & 0x1fffff;
  uVar17 = FUN_142c2df10(param_3 + 10);
  uVar17 = uVar17 >> 4 & 0x1fffff;
  uVar18 = FUN_142c2de90(param_3 + 0xd);
  uVar18 = uVar18 >> 1 & 0x1fffff;
  uVar19 = FUN_142c2df10(param_3 + 0xf);
  uVar19 = uVar19 >> 6 & 0x1fffff;
  uVar20 = FUN_142c2de90(param_3 + 0x12);
  uVar20 = uVar20 >> 3 & 0x1fffff;
  uVar21 = FUN_142c2de90(param_3 + 0x15);
  uVar21 = uVar21 & 0x1fffff;
  uVar22 = FUN_142c2df10(param_3 + 0x17);
  uVar22 = uVar22 >> 5 & 0x1fffff;
  uVar23 = FUN_142c2de90(param_3 + 0x1a);
  uVar23 = uVar23 >> 2 & 0x1fffff;
  uVar24 = FUN_142c2df10(param_3 + 0x1c);
  uVar24 = uVar24 >> 7;
  uVar25 = FUN_142c2de90(param_4);
  uVar26 = FUN_142c2df10(param_4 + 2);
  uVar27 = FUN_142c2de90(param_4 + 5);
  uVar28 = FUN_142c2df10(param_4 + 7);
  uVar29 = FUN_142c2df10(param_4 + 10);
  uVar30 = FUN_142c2de90(param_4 + 0xd);
  uVar31 = FUN_142c2df10(param_4 + 0xf);
  uVar32 = FUN_142c2de90(param_4 + 0x12);
  uVar33 = FUN_142c2de90(param_4 + 0x15);
  uVar34 = FUN_142c2df10(param_4 + 0x17);
  uVar35 = FUN_142c2de90(param_4 + 0x1a);
  uVar36 = FUN_142c2df10(param_4 + 0x1c);
  lVar77 = (uVar25 & 0x1fffff) + uVar1 * uVar13;
  lVar37 = (uVar27 >> 2 & 0x1fffff) + uVar1 * uVar15 + uVar2 * uVar14 + uVar3 * uVar13;
  lVar38 = (uVar29 >> 4 & 0x1fffff) + uVar1 * uVar17 + uVar2 * uVar16 + uVar3 * uVar15 +
           uVar4 * uVar14 + uVar5 * uVar13;
  lVar39 = (uVar31 >> 6 & 0x1fffff) + uVar1 * uVar19 + uVar2 * uVar18 + uVar3 * uVar17 +
           uVar4 * uVar16 + uVar5 * uVar15 + uVar6 * uVar14 + uVar7 * uVar13;
  lVar40 = (uVar33 & 0x1fffff) + uVar1 * uVar21 + uVar2 * uVar20 + uVar3 * uVar19 + uVar4 * uVar18 +
           uVar5 * uVar17 + uVar6 * uVar16 + uVar7 * uVar15 + uVar8 * uVar14 + uVar9 * uVar13;
  lVar41 = (uVar35 >> 2 & 0x1fffff) + uVar1 * uVar23 + uVar2 * uVar22 + uVar3 * uVar21 +
           uVar4 * uVar20 + uVar5 * uVar19 + uVar6 * uVar18 + uVar7 * uVar17 + uVar8 * uVar16 +
           uVar9 * uVar15 + uVar10 * uVar14 + uVar11 * uVar13;
  lVar42 = uVar2 * uVar24 + uVar3 * uVar23 + uVar4 * uVar22 + uVar5 * uVar21 + uVar6 * uVar20 +
           uVar7 * uVar19 + uVar8 * uVar18 + uVar9 * uVar17 + uVar10 * uVar16 + uVar11 * uVar15 +
           uVar12 * uVar14;
  lVar43 = uVar4 * uVar24 + uVar5 * uVar23 + uVar6 * uVar22 + uVar7 * uVar21 + uVar8 * uVar20 +
           uVar9 * uVar19 + uVar10 * uVar18 + uVar11 * uVar17 + uVar12 * uVar16;
  lVar44 = uVar6 * uVar24 + uVar7 * uVar23 + uVar8 * uVar22 + uVar9 * uVar21 + uVar10 * uVar20 +
           uVar11 * uVar19 + uVar12 * uVar18;
  lVar45 = uVar8 * uVar24 + uVar9 * uVar23 + uVar10 * uVar22 + uVar11 * uVar21 + uVar12 * uVar20;
  lVar46 = uVar10 * uVar24 + uVar11 * uVar23 + uVar12 * uVar22;
  lVar47 = lVar77 + 0x100000 >> 0x15;
  lVar78 = (uVar26 >> 5 & 0x1fffff) + uVar1 * uVar14 + uVar2 * uVar13 + lVar47;
  lVar47 = FUN_142c30d40(lVar47);
  lVar48 = lVar37 + 0x100000 >> 0x15;
  lVar79 = (uVar28 >> 7 & 0x1fffff) + uVar1 * uVar16 + uVar2 * uVar15 + uVar3 * uVar14 +
           uVar4 * uVar13 + lVar48;
  lVar48 = FUN_142c30d40(lVar48);
  lVar49 = lVar38 + 0x100000 >> 0x15;
  lVar80 = (uVar30 >> 1 & 0x1fffff) + uVar1 * uVar18 + uVar2 * uVar17 + uVar3 * uVar16 +
           uVar4 * uVar15 + uVar5 * uVar14 + uVar6 * uVar13 + lVar49;
  lVar49 = FUN_142c30d40(lVar49);
  lVar50 = lVar39 + 0x100000 >> 0x15;
  lVar81 = (uVar32 >> 3 & 0x1fffff) + uVar1 * uVar20 + uVar2 * uVar19 + uVar3 * uVar18 +
           uVar4 * uVar17 + uVar5 * uVar16 + uVar6 * uVar15 + uVar7 * uVar14 + uVar8 * uVar13 +
           lVar50;
  lVar50 = FUN_142c30d40(lVar50);
  lVar51 = lVar40 + 0x100000 >> 0x15;
  lVar82 = (uVar34 >> 5 & 0x1fffff) + uVar1 * uVar22 + uVar2 * uVar21 + uVar3 * uVar20 +
           uVar4 * uVar19 + uVar5 * uVar18 + uVar6 * uVar17 + uVar7 * uVar16 + uVar8 * uVar15 +
           uVar9 * uVar14 + uVar10 * uVar13 + lVar51;
  lVar51 = FUN_142c30d40(lVar51);
  lVar52 = lVar41 + 0x100000 >> 0x15;
  lVar83 = (uVar36 >> 7) + uVar1 * uVar24 + uVar2 * uVar23 + uVar3 * uVar22 + uVar4 * uVar21 +
           uVar5 * uVar20 + uVar6 * uVar19 + uVar7 * uVar18 + uVar8 * uVar17 + uVar9 * uVar16 +
           uVar10 * uVar15 + uVar11 * uVar14 + uVar12 * uVar13 + lVar52;
  lVar52 = FUN_142c30d40(lVar52);
  lVar53 = lVar42 + 0x100000 >> 0x15;
  lVar84 = uVar3 * uVar24 + uVar4 * uVar23 + uVar5 * uVar22 + uVar6 * uVar21 + uVar7 * uVar20 +
           uVar8 * uVar19 + uVar9 * uVar18 + uVar10 * uVar17 + uVar11 * uVar16 + uVar12 * uVar15 +
           lVar53;
  lVar53 = FUN_142c30d40(lVar53);
  lVar54 = lVar43 + 0x100000 >> 0x15;
  lVar85 = uVar5 * uVar24 + uVar6 * uVar23 + uVar7 * uVar22 + uVar8 * uVar21 + uVar9 * uVar20 +
           uVar10 * uVar19 + uVar11 * uVar18 + uVar12 * uVar17 + lVar54;
  lVar54 = FUN_142c30d40(lVar54);
  lVar55 = lVar44 + 0x100000 >> 0x15;
  lVar86 = uVar7 * uVar24 + uVar8 * uVar23 + uVar9 * uVar22 + uVar10 * uVar21 + uVar11 * uVar20 +
           uVar12 * uVar19 + lVar55;
  lVar55 = FUN_142c30d40(lVar55);
  lVar56 = lVar45 + 0x100000 >> 0x15;
  lVar87 = uVar9 * uVar24 + uVar10 * uVar23 + uVar11 * uVar22 + uVar12 * uVar21 + lVar56;
  lVar56 = FUN_142c30d40(lVar56);
  lVar57 = lVar46 + 0x100000 >> 0x15;
  lVar88 = uVar11 * uVar24 + uVar12 * uVar23 + lVar57;
  lVar57 = FUN_142c30d40(lVar57);
  lVar58 = (longlong)(uVar12 * uVar24 + 0x100000) >> 0x15;
  lVar59 = FUN_142c30d40(lVar58);
  lVar60 = lVar78 + 0x100000 >> 0x15;
  lVar61 = FUN_142c30d40(lVar60);
  lVar62 = lVar79 + 0x100000 >> 0x15;
  lVar63 = FUN_142c30d40(lVar62);
  lVar64 = lVar80 + 0x100000 >> 0x15;
  lVar65 = FUN_142c30d40(lVar64);
  lVar66 = lVar81 + 0x100000 >> 0x15;
  lVar67 = FUN_142c30d40(lVar66);
  lVar68 = lVar82 + 0x100000 >> 0x15;
  lVar69 = FUN_142c30d40(lVar68);
  lVar70 = lVar83 + 0x100000 >> 0x15;
  lVar71 = FUN_142c30d40(lVar70);
  lVar72 = lVar84 + 0x100000 >> 0x15;
  lVar73 = FUN_142c30d40(lVar72);
  lVar74 = lVar85 + 0x100000 >> 0x15;
  lVar75 = FUN_142c30d40(lVar74);
  lVar76 = lVar86 + 0x100000 >> 0x15;
  lVar89 = (lVar45 - lVar56) + lVar76;
  lVar45 = FUN_142c30d40(lVar76);
  lVar56 = lVar87 + 0x100000 >> 0x15;
  lVar57 = (lVar46 - lVar57) + lVar56;
  lVar46 = FUN_142c30d40(lVar56);
  lVar87 = lVar87 - lVar46;
  lVar46 = lVar88 + 0x100000 >> 0x15;
  lVar56 = (uVar12 * uVar24 - lVar59) + lVar46;
  lVar46 = FUN_142c30d40(lVar46);
  lVar88 = lVar88 - lVar46;
  lVar55 = (lVar44 - lVar55) + lVar74 + lVar58 * -0xa6f7d;
  lVar54 = (lVar43 - lVar54) + lVar72 + lVar58 * -0xf39ad + lVar56 * 0x215d1 + lVar88 * -0xa6f7d;
  lVar53 = (lVar42 - lVar53) + lVar70 + lVar58 * 0x72d18 + lVar56 * 0x9fb67 + lVar88 * -0xf39ad +
           lVar57 * 0x215d1 + lVar87 * -0xa6f7d;
  lVar59 = (lVar39 - lVar50) + lVar64 + lVar89 * 0xa2c13;
  lVar64 = (lVar40 - lVar51) + lVar66 + lVar57 * 0xa2c13 + lVar87 * 0x72d18 + lVar89 * 0x9fb67;
  lVar66 = (lVar41 - lVar52) + lVar68 + lVar56 * 0xa2c13 + lVar88 * 0x72d18 + lVar57 * 0x9fb67 +
           lVar87 * -0xf39ad + lVar89 * 0x215d1;
  lVar39 = lVar59 + 0x100000 >> 0x15;
  lVar67 = (lVar81 - lVar67) + lVar87 * 0xa2c13 + lVar89 * 0x72d18 + lVar39;
  lVar39 = FUN_142c30d40(lVar39);
  lVar40 = lVar64 + 0x100000 >> 0x15;
  lVar68 = (lVar82 - lVar69) + lVar88 * 0xa2c13 + lVar57 * 0x72d18 + lVar87 * 0x9fb67 +
           lVar89 * -0xf39ad + lVar40;
  lVar40 = FUN_142c30d40(lVar40);
  lVar41 = lVar66 + 0x100000 >> 0x15;
  lVar69 = (lVar83 - lVar71) + lVar58 * 0xa2c13 + lVar56 * 0x72d18 + lVar88 * 0x9fb67 +
           lVar57 * -0xf39ad + lVar87 * 0x215d1 + lVar89 * -0xa6f7d + lVar41;
  lVar41 = FUN_142c30d40(lVar41);
  lVar42 = lVar53 + 0x100000 >> 0x15;
  lVar57 = (lVar84 - lVar73) + lVar58 * 0x9fb67 + lVar56 * -0xf39ad + lVar88 * 0x215d1 +
           lVar57 * -0xa6f7d + lVar42;
  lVar42 = FUN_142c30d40(lVar42);
  lVar43 = lVar54 + 0x100000 >> 0x15;
  lVar58 = (lVar85 - lVar75) + lVar58 * 0x215d1 + lVar56 * -0xa6f7d + lVar43;
  lVar43 = FUN_142c30d40(lVar43);
  lVar44 = lVar55 + 0x100000 >> 0x15;
  lVar56 = (lVar86 - lVar45) + lVar44;
  lVar44 = FUN_142c30d40(lVar44);
  lVar45 = lVar67 + 0x100000 >> 0x15;
  lVar46 = FUN_142c30d40(lVar45);
  lVar50 = lVar68 + 0x100000 >> 0x15;
  lVar51 = FUN_142c30d40(lVar50);
  lVar52 = lVar69 + 0x100000 >> 0x15;
  lVar53 = (lVar53 - lVar42) + lVar52;
  lVar42 = FUN_142c30d40(lVar52);
  lVar52 = lVar57 + 0x100000 >> 0x15;
  lVar54 = (lVar54 - lVar43) + lVar52;
  lVar43 = FUN_142c30d40(lVar52);
  lVar57 = lVar57 - lVar43;
  lVar43 = lVar58 + 0x100000 >> 0x15;
  lVar44 = (lVar55 - lVar44) + lVar43;
  lVar43 = FUN_142c30d40(lVar43);
  lVar58 = lVar58 - lVar43;
  lVar55 = (lVar66 - lVar41) + lVar50 + lVar56 * -0xa6f7d;
  lVar64 = (lVar64 - lVar40) + lVar45 + lVar56 * -0xf39ad + lVar44 * 0x215d1 + lVar58 * -0xa6f7d;
  lVar59 = (lVar59 - lVar39) + lVar56 * 0x72d18 + lVar44 * 0x9fb67 + lVar58 * -0xf39ad +
           lVar54 * 0x215d1 + lVar57 * -0xa6f7d;
  lVar66 = (lVar77 - lVar47) + lVar53 * 0xa2c13;
  lVar60 = (lVar37 - lVar48) + lVar60 + lVar54 * 0xa2c13 + lVar57 * 0x72d18 + lVar53 * 0x9fb67;
  lVar62 = (lVar38 - lVar49) + lVar62 + lVar44 * 0xa2c13 + lVar58 * 0x72d18 + lVar54 * 0x9fb67 +
           lVar57 * -0xf39ad + lVar53 * 0x215d1;
  lVar37 = lVar66 + 0x100000 >> 0x15;
  lVar61 = (lVar78 - lVar61) + lVar57 * 0xa2c13 + lVar53 * 0x72d18 + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar38 = lVar60 + 0x100000 >> 0x15;
  lVar63 = (lVar79 - lVar63) + lVar58 * 0xa2c13 + lVar54 * 0x72d18 + lVar57 * 0x9fb67 +
           lVar53 * -0xf39ad + lVar38;
  lVar38 = FUN_142c30d40(lVar38);
  lVar39 = lVar62 + 0x100000 >> 0x15;
  lVar57 = (lVar80 - lVar65) + lVar56 * 0xa2c13 + lVar44 * 0x72d18 + lVar58 * 0x9fb67 +
           lVar54 * -0xf39ad + lVar57 * 0x215d1 + lVar53 * -0xa6f7d + lVar39;
  lVar39 = FUN_142c30d40(lVar39);
  lVar40 = lVar59 + 0x100000 >> 0x15;
  lVar58 = (lVar67 - lVar46) + lVar56 * 0x9fb67 + lVar44 * -0xf39ad + lVar58 * 0x215d1 +
           lVar54 * -0xa6f7d + lVar40;
  lVar40 = FUN_142c30d40(lVar40);
  lVar41 = lVar64 + 0x100000 >> 0x15;
  lVar56 = (lVar68 - lVar51) + lVar56 * 0x215d1 + lVar44 * -0xa6f7d + lVar41;
  lVar41 = FUN_142c30d40(lVar41);
  lVar43 = lVar55 + 0x100000 >> 0x15;
  lVar65 = (lVar69 - lVar42) + lVar43;
  lVar42 = FUN_142c30d40(lVar43);
  lVar43 = lVar61 + 0x100000 >> 0x15;
  lVar44 = FUN_142c30d40(lVar43);
  lVar45 = lVar63 + 0x100000 >> 0x15;
  lVar46 = FUN_142c30d40(lVar45);
  lVar47 = lVar57 + 0x100000 >> 0x15;
  lVar48 = FUN_142c30d40(lVar47);
  lVar49 = lVar58 + 0x100000 >> 0x15;
  lVar50 = FUN_142c30d40(lVar49);
  lVar51 = lVar56 + 0x100000 >> 0x15;
  lVar52 = FUN_142c30d40(lVar51);
  lVar53 = lVar65 + 0x100000 >> 0x15;
  lVar54 = FUN_142c30d40(lVar53);
  lVar66 = (lVar66 - lVar37) + lVar53 * 0xa2c13;
  lVar37 = lVar66 >> 0x15;
  lVar61 = (lVar61 - lVar44) + lVar53 * 0x72d18 + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar44 = lVar61 >> 0x15;
  lVar60 = (lVar60 - lVar38) + lVar43 + lVar53 * 0x9fb67 + lVar44;
  lVar38 = FUN_142c30d40(lVar44);
  lVar43 = lVar60 >> 0x15;
  lVar63 = (lVar63 - lVar46) + lVar53 * -0xf39ad + lVar43;
  lVar43 = FUN_142c30d40(lVar43);
  lVar44 = lVar63 >> 0x15;
  lVar62 = (lVar62 - lVar39) + lVar45 + lVar53 * 0x215d1 + lVar44;
  lVar39 = FUN_142c30d40(lVar44);
  lVar44 = lVar62 >> 0x15;
  lVar53 = (lVar57 - lVar48) + lVar53 * -0xa6f7d + lVar44;
  lVar44 = FUN_142c30d40(lVar44);
  lVar45 = lVar53 >> 0x15;
  lVar57 = (lVar59 - lVar40) + lVar47 + lVar45;
  lVar40 = FUN_142c30d40(lVar45);
  lVar45 = lVar57 >> 0x15;
  lVar50 = (lVar58 - lVar50) + lVar45;
  lVar45 = FUN_142c30d40(lVar45);
  lVar46 = lVar50 >> 0x15;
  lVar58 = (lVar64 - lVar41) + lVar49 + lVar46;
  lVar41 = FUN_142c30d40(lVar46);
  lVar46 = lVar58 >> 0x15;
  lVar52 = (lVar56 - lVar52) + lVar46;
  lVar46 = FUN_142c30d40(lVar46);
  lVar47 = lVar52 >> 0x15;
  lVar51 = (lVar55 - lVar42) + lVar51 + lVar47;
  lVar42 = FUN_142c30d40(lVar47);
  lVar47 = lVar51 >> 0x15;
  lVar54 = (lVar65 - lVar54) + lVar47;
  lVar47 = FUN_142c30d40(lVar47);
  lVar48 = lVar54 >> 0x15;
  lVar49 = FUN_142c30d40(lVar48);
  lVar55 = (lVar66 - lVar37) + lVar48 * 0xa2c13;
  lVar37 = lVar55 >> 0x15;
  lVar38 = (lVar61 - lVar38) + lVar48 * 0x72d18 + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar55 = lVar55 - lVar37;
  lVar37 = lVar38 >> 0x15;
  lVar43 = (lVar60 - lVar43) + lVar48 * 0x9fb67 + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar38 = lVar38 - lVar37;
  lVar37 = lVar43 >> 0x15;
  lVar39 = (lVar63 - lVar39) + lVar48 * -0xf39ad + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar43 = lVar43 - lVar37;
  lVar37 = lVar39 >> 0x15;
  lVar44 = (lVar62 - lVar44) + lVar48 * 0x215d1 + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar39 = lVar39 - lVar37;
  lVar37 = lVar44 >> 0x15;
  lVar40 = (lVar53 - lVar40) + lVar48 * -0xa6f7d + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar44 = lVar44 - lVar37;
  lVar37 = lVar40 >> 0x15;
  lVar45 = (lVar57 - lVar45) + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar40 = lVar40 - lVar37;
  lVar37 = lVar45 >> 0x15;
  lVar41 = (lVar50 - lVar41) + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar45 = lVar45 - lVar37;
  lVar37 = lVar41 >> 0x15;
  lVar46 = (lVar58 - lVar46) + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar41 = lVar41 - lVar37;
  lVar37 = lVar46 >> 0x15;
  lVar42 = (lVar52 - lVar42) + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar46 = lVar46 - lVar37;
  lVar37 = lVar42 >> 0x15;
  lVar48 = (lVar51 - lVar47) + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar42 = lVar42 - lVar37;
  lVar37 = lVar48 >> 0x15;
  lVar47 = (lVar54 - lVar49) + lVar37;
  lVar37 = FUN_142c30d40(lVar37);
  lVar48 = lVar48 - lVar37;
  uStack_230 = (undefined)lVar55;
  *param_1 = uStack_230;
  param_1[1] = (char)((ulonglong)lVar55 >> 8);
  param_1[2] = (byte)((ulonglong)lVar55 >> 0x10) | (char)lVar38 * ' ';
  param_1[3] = (char)(lVar38 >> 3);
  param_1[4] = (char)(lVar38 >> 0xb);
  param_1[5] = (byte)(lVar38 >> 0x13) | (char)lVar43 * '\x04';
  param_1[6] = (char)(lVar43 >> 6);
  param_1[7] = (byte)(lVar43 >> 0xe) | (char)lVar39 * -0x80;
  param_1[8] = (char)(lVar39 >> 1);
  param_1[9] = (char)(lVar39 >> 9);
  param_1[10] = (byte)(lVar39 >> 0x11) | (char)lVar44 * '\x10';
  param_1[0xb] = (char)(lVar44 >> 4);
  param_1[0xc] = (char)(lVar44 >> 0xc);
  param_1[0xd] = (byte)(lVar44 >> 0x14) | (char)lVar40 * '\x02';
  param_1[0xe] = (char)(lVar40 >> 7);
  param_1[0xf] = (byte)(lVar40 >> 0xf) | (char)lVar45 * '@';
  param_1[0x10] = (char)(lVar45 >> 2);
  param_1[0x11] = (char)(lVar45 >> 10);
  param_1[0x12] = (byte)(lVar45 >> 0x12) | (char)lVar41 * '\b';
  param_1[0x13] = (char)(lVar41 >> 5);
  param_1[0x14] = (char)(lVar41 >> 0xd);
  uStack_290 = (undefined)lVar46;
  param_1[0x15] = uStack_290;
  param_1[0x16] = (char)((ulonglong)lVar46 >> 8);
  param_1[0x17] = (byte)((ulonglong)lVar46 >> 0x10) | (char)lVar42 * ' ';
  param_1[0x18] = (char)(lVar42 >> 3);
  param_1[0x19] = (char)(lVar42 >> 0xb);
  param_1[0x1a] = (byte)(lVar42 >> 0x13) | (char)lVar48 * '\x04';
  param_1[0x1b] = (char)(lVar48 >> 6);
  param_1[0x1c] = (byte)(lVar48 >> 0xe) | (char)lVar47 * -0x80;
  param_1[0x1d] = (char)(lVar47 >> 1);
  param_1[0x1e] = (char)(lVar47 >> 9);
  param_1[0x1f] = (char)(lVar47 >> 0x11);
  return;
}


/* address=142c341e0 name=FUN_142c341e0 */

void FUN_142c341e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_248 [32];
  uint uStack_228;
  int iStack_224;
  uint uStack_220;
  undefined auStack_218 [40];
  undefined auStack_1f0 [40];
  undefined auStack_1c8 [40];
  undefined auStack_1a0 [40];
  undefined auStack_178 [40];
  undefined auStack_150 [40];
  undefined auStack_128 [40];
  undefined auStack_100 [40];
  undefined auStack_d8 [40];
  undefined auStack_b0 [40];
  undefined auStack_88 [40];
  undefined auStack_60 [40];
  byte abStack_38 [31];
  byte bStack_19;
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_248;
  FUN_142c26fb0(abStack_38,param_2,0x20);
  abStack_38[0] = abStack_38[0] & 0xf8;
  bStack_19 = bStack_19 & 0x7f | 0x40;
  FUN_142c2e070(auStack_88,param_3);
  FUN_142c2e1e0(auStack_1c8);
  FUN_142c2e180(auStack_218);
  FUN_142c2ede0(auStack_178,auStack_88);
  FUN_142c2e1e0(auStack_1f0);
  uStack_228 = 0;
  for (iStack_224 = 0xfe; -1 < iStack_224; iStack_224 = iStack_224 + -1) {
    uStack_220 = (int)(uint)abStack_38[(int)(iStack_224 + (iStack_224 >> 0x1f & 7U)) >> 3] >>
                 ((byte)iStack_224 & 7) & 1;
    uStack_228 = uStack_228 ^ uStack_220;
    FUN_142c2eac0(auStack_1c8,auStack_178,uStack_228);
    FUN_142c2eac0(auStack_218,auStack_1f0,uStack_228);
    uStack_228 = uStack_220;
    FUN_142c2e3b0(auStack_100,auStack_178,auStack_1f0);
    FUN_142c2e3b0(auStack_1a0,auStack_1c8,auStack_218);
    FUN_142c2e260(auStack_d8,auStack_1c8,auStack_218);
    FUN_142c2e260(auStack_150,auStack_178,auStack_1f0);
    FUN_142c2e8b0(auStack_1f0,auStack_100,auStack_d8);
    FUN_142c2e8b0(auStack_218,auStack_150,auStack_1a0);
    FUN_142c2e900(auStack_128,auStack_1a0);
    FUN_142c2e900(auStack_b0,auStack_d8);
    FUN_142c2e260(auStack_60,auStack_1f0,auStack_218);
    FUN_142c2e3b0(auStack_150,auStack_1f0,auStack_218);
    FUN_142c2e7c0(auStack_1c8,auStack_b0,auStack_128);
    FUN_142c2e3b0(auStack_1a0,auStack_b0,auStack_128);
    FUN_142c2e900(auStack_218,auStack_150);
    FUN_142c2eb80(auStack_1f0,auStack_1a0);
    FUN_142c2e900(auStack_178,auStack_60);
    FUN_142c2e260(auStack_100,auStack_128,auStack_1f0);
    FUN_142c2e7c0(auStack_1f0,auStack_88,auStack_218);
    FUN_142c2e8b0(auStack_218,auStack_1a0,auStack_100);
  }
  FUN_142c2eac0(auStack_1c8,auStack_178,uStack_228);
  FUN_142c2eac0(auStack_218,auStack_1f0,uStack_228);
  FUN_142c2f1f0(auStack_218,auStack_218);
  FUN_142c2e7c0(auStack_1c8,auStack_1c8,auStack_218);
  FUN_142c2e0f0(param_1,auStack_1c8);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_248);
  return;
}


/* address=142c345c0 name=FUN_142c345c0 */

void FUN_142c345c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c341e0(param_1,param_2,param_3);
  return;
}


/* address=142c345f0 name=FUN_142c345f0 */

void FUN_142c345f0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uStack_28;
  
  FUN_142c365a0(param_1,param_2,param_3);
  for (uStack_28 = 0; uStack_28 < 800; uStack_28 = uStack_28 + 1) {
    *(undefined *)(param_2 + uStack_28 + 0x300) = *(undefined *)(param_1 + uStack_28);
  }
  FUN_142c36ec0(param_2 + 0x620,param_1,800);
  FUN_142cbd3c0(param_2 + 0x640,param_3 + 0x20,0x20);
  return;
}


/* address=142c346f0 name=FUN_142c346f0 */

void FUN_142c346f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  undefined auStack_c8 [32];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined auStack_98 [32];
  undefined auStack_78 [32];
  undefined auStack_58 [32];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_c8;
  uStack_a8 = param_3;
  uStack_a0 = param_1;
  FUN_142cbd3c0(auStack_98,param_4,0x20);
  FUN_142c36ec0(auStack_98,auStack_98,0x20);
  FUN_142c36ec0(auStack_78,uStack_a8,800);
  FUN_142c36f80(auStack_58,auStack_98,0x40);
  iVar1 = FUN_142c367e0(uStack_a0,auStack_98,uStack_a8,auStack_38);
  if (iVar1 != 0) {
    if (param_5 == 1) {
      FUN_142cbd3c0(param_2,auStack_58,0x20);
    }
    else {
      FUN_142c36ec0(auStack_38,uStack_a0,0x300);
      FUN_142c36dd0(param_2,0x20,auStack_58,0x40);
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=142c34850 name=FUN_142c34850 */

void FUN_142c34850(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  int param_5)

{
  undefined auStack_4d8 [32];
  int iStack_4b8;
  ulonglong uStack_4b0;
  longlong lStack_4a8;
  undefined8 uStack_4a0;
  longlong lStack_498;
  undefined auStack_488 [208];
  undefined auStack_3b8 [32];
  undefined auStack_398 [32];
  undefined auStack_378 [32];
  undefined auStack_358 [32];
  undefined auStack_338 [32];
  undefined auStack_318 [768];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_4d8;
  iStack_4b8 = 1;
  lStack_498 = param_2 + 0x300;
  lStack_4a8 = param_2;
  uStack_4a0 = param_1;
  if (param_4 == 0x300) {
    FUN_142c36a90(auStack_358,param_3,param_2);
    for (uStack_4b0 = 0; uStack_4b0 < 0x20; uStack_4b0 = uStack_4b0 + 1) {
      auStack_338[uStack_4b0] = *(undefined *)(lStack_4a8 + uStack_4b0 + 0x620);
    }
    FUN_142c36f80(auStack_398,auStack_358,0x40);
    FUN_142c367e0(auStack_318,auStack_358,lStack_498,auStack_378);
    iStack_4b8 = FUN_142c34b60(param_3,auStack_318,0x300);
  }
  if (param_5 == 1) {
    FUN_142c36da0(auStack_488);
    FUN_142c36cf0(auStack_488,lStack_4a8 + 0x640,0x20);
    FUN_142c36cf0(auStack_488,param_3,param_4);
    FUN_142c36d50(auStack_488);
    FUN_142c36c00(auStack_3b8,0x20,auStack_488);
    FUN_142c34bf0(auStack_3b8,auStack_398,0x20,1U - iStack_4b8 & 0xff);
    FUN_142cbd3c0(uStack_4a0,auStack_3b8,0x20);
  }
  else {
    FUN_142c36ec0(auStack_378,param_3,param_4);
    FUN_142c34bf0(auStack_398,lStack_4a8 + 0x640,0x20,(undefined)iStack_4b8);
    FUN_142c36dd0(uStack_4a0,0x20,auStack_398,0x40);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_4d8);
  return;
}


/* address=142c34ad0 name=FUN_142c34ad0 */

void FUN_142c34ad0(undefined8 param_1,undefined8 param_2)

{
  FUN_142cbd3c0(param_1,param_2,800);
  return;
}


/* address=142c34b10 name=FUN_142c34b10 */

void FUN_142c34b10(undefined8 param_1,undefined8 param_2)

{
  FUN_142cbd3c0(param_1,param_2,800);
  return;
}


/* address=142c34b50 name=FUN_142c34b50 */

undefined4 FUN_142c34b50(undefined4 param_1)

{
  return param_1;
}


/* address=142c34b60 name=FUN_142c34b60 */

ulonglong FUN_142c34b60(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte bStack_18;
  ulonglong uStack_10;
  
  bStack_18 = 0;
  for (uStack_10 = 0; uStack_10 < param_3; uStack_10 = uStack_10 + 1) {
    bStack_18 = bStack_18 | *(byte *)(param_1 + uStack_10) ^ *(byte *)(param_2 + uStack_10);
  }
  return -(ulonglong)bStack_18 >> 0x3f;
}


/* address=142c34bf0 name=FUN_142c34bf0 */

void FUN_142c34bf0(longlong param_1,longlong param_2,ulonglong param_3,char param_4)

{
  ulonglong uStack_18;
  
  for (uStack_18 = 0; uStack_18 < param_3; uStack_18 = uStack_18 + 1) {
    *(byte *)(param_1 + uStack_18) =
         *(byte *)(param_1 + uStack_18) ^
         -param_4 & (*(byte *)(param_1 + uStack_18) ^ *(byte *)(param_2 + uStack_18));
  }
  return;
}


/* address=142c34ca0 name=FUN_142c34ca0 */

undefined2 FUN_142c34ca0(int param_1)

{
  short sStackX_8;
  
  sStackX_8 = (short)param_1;
  return (short)((uint)(param_1 + (short)(sStackX_8 * -0xcff) * -0xd01) >> 0x10);
}


/* address=142c34ce0 name=FUN_142c34ce0 */

int FUN_142c34ce0(short param_1)

{
  return (int)param_1 - (int)(short)((short)(param_1 * 0x4ebf + 0x2000000 >> 0x1a) * 0xd01);
}


/* address=142c34d30 name=FUN_142c34d30 */

void FUN_142c34d30(longlong param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  uStack_14 = 1;
  for (uStack_1c = 0x80; 1 < uStack_1c; uStack_1c = uStack_1c >> 1) {
    uStack_18 = 0;
    while (uStack_18 < 0x100) {
      uVar1 = *(undefined2 *)(&DAT_1432a1480 + (ulonglong)uStack_14 * 2);
      uStack_14 = uStack_14 + 1;
      for (uStack_20 = uStack_18; uStack_20 < uStack_18 + uStack_1c; uStack_20 = uStack_20 + 1) {
        sVar2 = FUN_142c37470(uVar1,*(undefined2 *)
                                     (param_1 + (ulonglong)(uStack_20 + uStack_1c) * 2));
        *(short *)(param_1 + (ulonglong)(uStack_20 + uStack_1c) * 2) =
             *(short *)(param_1 + (ulonglong)uStack_20 * 2) - sVar2;
        *(short *)(param_1 + (ulonglong)uStack_20 * 2) =
             *(short *)(param_1 + (ulonglong)uStack_20 * 2) + sVar2;
      }
      uStack_18 = uStack_20 + uStack_1c;
    }
  }
  return;
}


/* address=142c34e60 name=FUN_142c34e60 */

void FUN_142c34e60(longlong param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  uStack_10 = 0x7f;
  for (uStack_18 = 2; uStack_18 < 0x81; uStack_18 = uStack_18 << 1) {
    uStack_14 = 0;
    while (uStack_14 < 0x100) {
      uVar3 = *(undefined2 *)(&DAT_1432a1480 + (ulonglong)uStack_10 * 2);
      uStack_10 = uStack_10 - 1;
      for (uStack_1c = uStack_14; uStack_1c < uStack_14 + uStack_18; uStack_1c = uStack_1c + 1) {
        sVar1 = *(short *)(param_1 + (ulonglong)uStack_1c * 2);
        uVar2 = FUN_142c34ce0(sVar1 + *(short *)(param_1 + (ulonglong)(uStack_1c + uStack_18) * 2));
        *(undefined2 *)(param_1 + (ulonglong)uStack_1c * 2) = uVar2;
        *(short *)(param_1 + (ulonglong)(uStack_1c + uStack_18) * 2) =
             *(short *)(param_1 + (ulonglong)(uStack_1c + uStack_18) * 2) - sVar1;
        uVar2 = FUN_142c37470(uVar3,*(undefined2 *)
                                     (param_1 + (ulonglong)(uStack_1c + uStack_18) * 2));
        *(undefined2 *)(param_1 + (ulonglong)(uStack_1c + uStack_18) * 2) = uVar2;
      }
      uStack_14 = uStack_1c + uStack_18;
    }
  }
  for (uStack_1c = 0; uStack_1c < 0x100; uStack_1c = uStack_1c + 1) {
    uVar3 = FUN_142c37470(*(undefined2 *)(param_1 + (ulonglong)uStack_1c * 2),0x5a1);
    *(undefined2 *)(param_1 + (ulonglong)uStack_1c * 2) = uVar3;
  }
  return;
}


/* address=142c35020 name=FUN_142c35020 */

void FUN_142c35020(short *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 param_4)

{
  short sVar1;
  
  sVar1 = FUN_142c37470(param_2[1],param_3[1]);
  *param_1 = sVar1;
  sVar1 = FUN_142c37470(*param_1,param_4);
  *param_1 = sVar1;
  sVar1 = FUN_142c37470(*param_2,*param_3);
  *param_1 = *param_1 + sVar1;
  sVar1 = FUN_142c37470(*param_2,param_3[1]);
  param_1[1] = sVar1;
  sVar1 = FUN_142c37470(param_2[1],*param_3);
  param_1[1] = param_1[1] + sVar1;
  return;
}


/* address=142c351c0 name=FUN_142c351c0 */

void FUN_142c351c0(byte *param_1,longlong param_2)

{
  uint uVar1;
  byte *pbStackX_8;
  short asStack_28 [2];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  byte abStack_18 [8];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)asStack_28;
  pbStackX_8 = param_1;
  for (uStack_1c = 0; uStack_1c < 0x20; uStack_1c = uStack_1c + 1) {
    for (uStack_20 = 0; uStack_20 < 8; uStack_20 = uStack_20 + 1) {
      asStack_28[0] = *(short *)(param_2 + (ulonglong)(uStack_20 + uStack_1c * 8) * 2);
      asStack_28[0] = asStack_28[0] + (asStack_28[0] >> 0xf & 0xd01U);
      uVar1 = (asStack_28[0] * 0x10 + 0x681) * 0x13afb;
      uStack_24 = uVar1 >> 0x1c;
      abStack_18[uStack_20] = (byte)(uVar1 >> 0x1c);
    }
    *pbStackX_8 = abStack_18[0] | abStack_18[1] << 4;
    pbStackX_8[1] = abStack_18[2] | abStack_18[3] << 4;
    pbStackX_8[2] = abStack_18[4] | abStack_18[5] << 4;
    pbStackX_8[3] = abStack_18[6] | abStack_18[7] << 4;
    pbStackX_8 = pbStackX_8 + 4;
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)asStack_28);
  return;
}


/* address=142c35380 name=FUN_142c35380 */

void FUN_142c35380(longlong param_1,byte *param_2)

{
  byte *pbStackX_10;
  uint uStack_18;
  
  pbStackX_10 = param_2;
  for (uStack_18 = 0; uStack_18 < 0x80; uStack_18 = uStack_18 + 1) {
    *(short *)(param_1 + (ulonglong)(uStack_18 * 2) * 2) =
         (short)((int)((*pbStackX_10 & 0xf) * 0xd01 + 8) >> 4);
    *(short *)(param_1 + (ulonglong)(uStack_18 * 2 + 1) * 2) =
         (short)(((int)(uint)*pbStackX_10 >> 4) * 0xd01 + 8 >> 4);
    pbStackX_10 = pbStackX_10 + 1;
  }
  return;
}


/* address=142c35430 name=FUN_142c35430 */

void FUN_142c35430(longlong param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  undefined uStack_18;
  uint uStack_10;
  
  for (uStack_10 = 0; uStack_10 < 0x80; uStack_10 = uStack_10 + 1) {
    sVar2 = *(short *)(param_2 + (ulonglong)(uStack_10 * 2) * 2);
    sVar2 = sVar2 + (sVar2 >> 0xf & 0xd01U);
    sVar1 = *(short *)(param_2 + (ulonglong)(uStack_10 * 2 + 1) * 2);
    uVar3 = sVar1 + (sVar1 >> 0xf & 0xd01U);
    uStack_18 = (undefined)sVar2;
    *(undefined *)(param_1 + (ulonglong)(uStack_10 * 3)) = uStack_18;
    *(byte *)(param_1 + (ulonglong)(uStack_10 * 3 + 1)) =
         (byte)((ushort)sVar2 >> 8) | (char)uVar3 << 4;
    *(char *)(param_1 + (ulonglong)(uStack_10 * 3 + 2)) = (char)((int)(uint)uVar3 >> 4);
  }
  return;
}


/* address=142c35520 name=FUN_142c35520 */

void FUN_142c35520(longlong param_1,longlong param_2)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x80; uStack_18 = uStack_18 + 1) {
    *(ushort *)(param_1 + (ulonglong)(uStack_18 * 2) * 2) =
         CONCAT11(*(undefined *)(param_2 + (ulonglong)(uStack_18 * 3 + 1)),
                  *(undefined *)(param_2 + (ulonglong)(uStack_18 * 3))) & 0xfff;
    *(ushort *)(param_1 + (ulonglong)(uStack_18 * 2 + 1) * 2) =
         (ushort)((int)(uint)*(byte *)(param_2 + (ulonglong)(uStack_18 * 3 + 1)) >> 4) |
         (ushort)*(byte *)(param_2 + (ulonglong)(uStack_18 * 3 + 2)) << 4;
  }
  return;
}


/* address=142c355e0 name=FUN_142c355e0 */

void FUN_142c355e0(longlong param_1,longlong param_2)

{
  short sVar1;
  uint uStack_14;
  uint uStack_10;
  
  for (uStack_10 = 0; uStack_10 < 0x20; uStack_10 = uStack_10 + 1) {
    for (uStack_14 = 0; uStack_14 < 8; uStack_14 = uStack_14 + 1) {
      sVar1 = FUN_142c34b50((int)(uint)*(byte *)(param_2 + (ulonglong)uStack_10) >>
                            ((byte)uStack_14 & 0x1f) & 1);
      *(ushort *)(param_1 + (ulonglong)(uStack_14 + uStack_10 * 8) * 2) = -sVar1 & 0x681;
    }
  }
  return;
}


/* address=142c35680 name=FUN_142c35680 */

void FUN_142c35680(longlong param_1,longlong param_2)

{
  uint uStack_14;
  uint uStack_10;
  
  for (uStack_14 = 0; uStack_14 < 0x20; uStack_14 = uStack_14 + 1) {
    *(undefined *)(param_1 + (ulonglong)uStack_14) = 0;
    for (uStack_10 = 0; uStack_10 < 8; uStack_10 = uStack_10 + 1) {
      *(byte *)(param_1 + (ulonglong)uStack_14) =
           *(byte *)(param_1 + (ulonglong)uStack_14) |
           (byte)(((uint)((*(short *)(param_2 + (ulonglong)(uStack_10 + uStack_14 * 8) * 2) * 2 +
                          0x681) * 0x13afb) >> 0x1c & 1) << ((byte)uStack_10 & 0x1f));
    }
  }
  return;
}


/* address=142c35760 name=FUN_142c35760 */

void FUN_142c35760(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  undefined auStack_f8 [32];
  undefined auStack_d8 [192];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_f8;
  FUN_142c370d0(auStack_d8,0xc0,param_2,param_3);
  FUN_142c35b80(param_1,auStack_d8);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_f8);
  return;
}


/* address=142c357e0 name=FUN_142c357e0 */

void FUN_142c357e0(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  undefined auStack_b8 [32];
  undefined auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_b8;
  FUN_142c370d0(auStack_98,0x80,param_2,param_3);
  FUN_142c35bb0(param_1,auStack_98);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=142c35860 name=FUN_142c35860 */

void FUN_142c35860(undefined8 param_1)

{
  FUN_142c34d30(param_1);
  FUN_142c35a60(param_1);
  return;
}


/* address=142c35890 name=FUN_142c35890 */

void FUN_142c35890(undefined8 param_1)

{
  FUN_142c34e60(param_1);
  return;
}


/* address=142c358c0 name=FUN_142c358c0 */

void FUN_142c358c0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_28;
  
  for (uStack_28 = 0; uStack_28 < 0x40; uStack_28 = uStack_28 + 1) {
    FUN_142c35020(param_1 + (ulonglong)(uStack_28 << 2) * 2,
                  param_2 + (ulonglong)(uStack_28 << 2) * 2,
                  param_3 + (ulonglong)(uStack_28 << 2) * 2,
                  *(undefined2 *)(&DAT_1432a1480 + (ulonglong)(uStack_28 + 0x40) * 2));
    FUN_142c35020(param_1 + (ulonglong)(uStack_28 * 4 + 2) * 2,
                  param_2 + (ulonglong)(uStack_28 * 4 + 2) * 2,
                  param_3 + (ulonglong)(uStack_28 * 4 + 2) * 2,
                  -*(short *)(&DAT_1432a1480 + (ulonglong)(uStack_28 + 0x40) * 2));
  }
  return;
}


/* address=142c359f0 name=FUN_142c359f0 */

void FUN_142c359f0(longlong param_1)

{
  undefined2 uVar1;
  uint uStack_14;
  
  for (uStack_14 = 0; uStack_14 < 0x100; uStack_14 = uStack_14 + 1) {
    uVar1 = FUN_142c34ca0(*(short *)(param_1 + (ulonglong)uStack_14 * 2) * 0x549);
    *(undefined2 *)(param_1 + (ulonglong)uStack_14 * 2) = uVar1;
  }
  return;
}


/* address=142c35a60 name=FUN_142c35a60 */

void FUN_142c35a60(longlong param_1)

{
  undefined2 uVar1;
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x100; uStack_18 = uStack_18 + 1) {
    uVar1 = FUN_142c34ce0(*(undefined2 *)(param_1 + (ulonglong)uStack_18 * 2));
    *(undefined2 *)(param_1 + (ulonglong)uStack_18 * 2) = uVar1;
  }
  return;
}


/* address=142c35ac0 name=FUN_142c35ac0 */

void FUN_142c35ac0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x100; uStack_18 = uStack_18 + 1) {
    *(short *)(param_1 + (ulonglong)uStack_18 * 2) =
         *(short *)(param_2 + (ulonglong)uStack_18 * 2) +
         *(short *)(param_3 + (ulonglong)uStack_18 * 2);
  }
  return;
}


/* address=142c35b20 name=FUN_142c35b20 */

void FUN_142c35b20(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x100; uStack_18 = uStack_18 + 1) {
    *(short *)(param_1 + (ulonglong)uStack_18 * 2) =
         *(short *)(param_2 + (ulonglong)uStack_18 * 2) -
         *(short *)(param_3 + (ulonglong)uStack_18 * 2);
  }
  return;
}


/* address=142c35b80 name=FUN_142c35b80 */

void FUN_142c35b80(undefined8 param_1,undefined8 param_2)

{
  FUN_142c37360(param_1,param_2);
  return;
}


/* address=142c35bb0 name=FUN_142c35bb0 */

void FUN_142c35bb0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c37260(param_1,param_2);
  return;
}


/* address=142c35be0 name=FUN_142c35be0 */

void FUN_142c35be0(undefined *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined *puStackX_8;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  ulonglong uStack_28;
  ushort auStack_20 [4];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)&uStack_38;
  puStackX_8 = param_1;
  for (uStack_34 = 0; uStack_34 < 2; uStack_34 = uStack_34 + 1) {
    for (uStack_30 = 0; uStack_30 < 0x40; uStack_30 = uStack_30 + 1) {
      for (uStack_38 = 0; uStack_38 < 4; uStack_38 = uStack_38 + 1) {
        auStack_20[uStack_38] =
             *(ushort *)
              (param_2 + (ulonglong)uStack_34 * 0x200 + (ulonglong)(uStack_38 + uStack_30 * 4) * 2);
        auStack_20[uStack_38] =
             auStack_20[uStack_38] + ((short)auStack_20[uStack_38] >> 0xf & 0xd01U);
        uVar1 = ((ulonglong)auStack_20[uStack_38] * 0x400 + 0x681) * 0x13afb7;
        uStack_28 = uVar1 >> 0x20;
        auStack_20[uStack_38] = (ushort)(uVar1 >> 0x20) & 0x3ff;
      }
      *puStackX_8 = (undefined)auStack_20[0];
      puStackX_8[1] = (byte)(auStack_20[0] >> 8) | (char)auStack_20[1] << 2;
      puStackX_8[2] = (byte)((int)(uint)auStack_20[1] >> 6) | (char)auStack_20[2] << 4;
      puStackX_8[3] = (byte)((int)(uint)auStack_20[2] >> 4) | (char)auStack_20[3] << 6;
      puStackX_8[4] = (char)((int)(uint)auStack_20[3] >> 2);
      puStackX_8 = puStackX_8 + 5;
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)&uStack_38);
  return;
}


/* address=142c35e20 name=FUN_142c35e20 */

void FUN_142c35e20(longlong param_1,ushort *param_2)

{
  ushort *puStackX_10;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  ushort auStack_18 [4];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)&uStack_28;
  puStackX_10 = param_2;
  for (uStack_24 = 0; uStack_24 < 2; uStack_24 = uStack_24 + 1) {
    for (uStack_20 = 0; uStack_20 < 0x40; uStack_20 = uStack_20 + 1) {
      auStack_18[0] = *puStackX_10;
      auStack_18[1] =
           (ushort)((int)(uint)*(byte *)((longlong)puStackX_10 + 1) >> 2) |
           (ushort)*(byte *)(puStackX_10 + 1) << 6;
      auStack_18[2] =
           (ushort)((int)(uint)*(byte *)(puStackX_10 + 1) >> 4) |
           (ushort)*(byte *)((longlong)puStackX_10 + 3) << 4;
      auStack_18[3] =
           (ushort)((int)(uint)*(byte *)((longlong)puStackX_10 + 3) >> 6) |
           (ushort)*(byte *)(puStackX_10 + 2) << 2;
      puStackX_10 = (ushort *)((longlong)puStackX_10 + 5);
      for (uStack_28 = 0; uStack_28 < 4; uStack_28 = uStack_28 + 1) {
        *(short *)(param_1 + (ulonglong)uStack_24 * 0x200 +
                  (ulonglong)(uStack_28 + uStack_20 * 4) * 2) =
             (short)((auStack_18[uStack_28] & 0x3ff) * 0xd01 + 0x200 >> 10);
      }
    }
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)&uStack_28);
  return;
}


/* address=142c35ff0 name=FUN_142c35ff0 */

void FUN_142c35ff0(longlong param_1,longlong param_2)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    FUN_142c35430(param_1 + (ulonglong)(uStack_18 * 0x180),param_2 + (ulonglong)uStack_18 * 0x200);
  }
  return;
}


/* address=142c36060 name=FUN_142c36060 */

void FUN_142c36060(longlong param_1,longlong param_2)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    FUN_142c35520(param_1 + (ulonglong)uStack_18 * 0x200,param_2 + (ulonglong)(uStack_18 * 0x180));
  }
  return;
}


/* address=142c360d0 name=FUN_142c360d0 */

void FUN_142c360d0(longlong param_1)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    FUN_142c35860(param_1 + (ulonglong)uStack_18 * 0x200);
  }
  return;
}


/* address=142c36120 name=FUN_142c36120 */

void FUN_142c36120(longlong param_1)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    FUN_142c35890(param_1 + (ulonglong)uStack_18 * 0x200);
  }
  return;
}


/* address=142c36170 name=FUN_142c36170 */

void FUN_142c36170(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined auStack_248 [32];
  uint uStack_228;
  undefined auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_248;
  FUN_142c358c0(param_1,param_2,param_3);
  for (uStack_228 = 1; uStack_228 < 2; uStack_228 = uStack_228 + 1) {
    FUN_142c358c0(auStack_218,param_2 + (ulonglong)uStack_228 * 0x200,
                  param_3 + (ulonglong)uStack_228 * 0x200);
    FUN_142c35ac0(param_1,param_1,auStack_218);
  }
  FUN_142c35a60(param_1);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_248);
  return;
}


/* address=142c36280 name=FUN_142c36280 */

void FUN_142c36280(longlong param_1)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    FUN_142c35a60(param_1 + (ulonglong)uStack_18 * 0x200);
  }
  return;
}


/* address=142c362d0 name=FUN_142c362d0 */

void FUN_142c362d0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 2; uStack_18 = uStack_18 + 1) {
    FUN_142c35ac0(param_1 + (ulonglong)uStack_18 * 0x200,param_2 + (ulonglong)uStack_18 * 0x200,
                  param_3 + (ulonglong)uStack_18 * 0x200);
  }
  return;
}


/* address=142c36370 name=FUN_142c36370 */

void FUN_142c36370(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined auStack_328 [32];
  uint uStack_308;
  uint uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  undefined auStack_2e8 [208];
  undefined auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_328;
  for (uStack_308 = 0; uStack_308 < 2; uStack_308 = uStack_308 + 1) {
    for (uStack_304 = 0; uStack_304 < 2; uStack_304 = uStack_304 + 1) {
      if (param_3 == 0) {
        FUN_142c37040(auStack_2e8,param_2,(undefined)uStack_304,(undefined)uStack_308);
      }
      else {
        FUN_142c37040(auStack_2e8,param_2,(undefined)uStack_308,(undefined)uStack_304);
      }
      FUN_142c36bc0(auStack_218,3,auStack_2e8);
      uStack_2fc = 0x1f8;
      for (uStack_2f8 = FUN_142c37710(param_1 + (ulonglong)uStack_308 * 0x400 +
                                      (ulonglong)uStack_304 * 0x200,0x100,auStack_218,0x1f8);
          uStack_2f8 < 0x100; uStack_2f8 = uStack_2f8 + iVar1) {
        uStack_2f4 = uStack_2fc % 3;
        for (uStack_300 = 0; uStack_300 < uStack_2f4; uStack_300 = uStack_300 + 1) {
          auStack_218[uStack_300] = auStack_218[(uStack_2fc - uStack_2f4) + uStack_300];
        }
        FUN_142c36bc0(auStack_218 + uStack_2f4,1,auStack_2e8);
        uStack_2fc = uStack_2f4 + 0xa8;
        iVar1 = FUN_142c37710(param_1 + (ulonglong)uStack_308 * 0x400 +
                              (ulonglong)uStack_304 * 0x200 + (ulonglong)uStack_2f8 * 2,
                              0x100 - uStack_2f8,auStack_218,uStack_2fc);
      }
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_328);
  return;
}


/* address=142c365a0 name=FUN_142c365a0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142c365a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_1498 [32];
  char cStack_1478;
  uint uStack_1474;
  char cStack_1470;
  char cStack_146f;
  undefined *puStack_1468;
  undefined *puStack_1460;
  undefined auStack_1458 [1024];
  undefined auStack_1058 [1024];
  undefined auStack_c58 [1024];
  undefined auStack_858 [2048];
  undefined auStack_58 [32];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x142c365b9;
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_1498;
  puStack_1460 = auStack_58;
  puStack_1468 = auStack_38;
  cStack_1478 = '\0';
  FUN_142cbd3c0(auStack_58,param_3,0x20);
  FUN_142c36f80(auStack_58,auStack_58,0x20);
  FUN_142c36370(auStack_858,puStack_1460,0);
  for (uStack_1474 = 0; uStack_1474 < 2; uStack_1474 = uStack_1474 + 1) {
    cStack_1470 = cStack_1478;
    FUN_142c35760(auStack_1058 + (ulonglong)uStack_1474 * 0x200,puStack_1468,cStack_1478);
    cStack_1478 = cStack_1478 + '\x01';
  }
  for (uStack_1474 = 0; uStack_1474 < 2; uStack_1474 = uStack_1474 + 1) {
    cStack_146f = cStack_1478;
    FUN_142c35760(auStack_c58 + (ulonglong)uStack_1474 * 0x200,puStack_1468,cStack_1478);
    cStack_1478 = cStack_1478 + '\x01';
  }
  FUN_142c360d0(auStack_1058);
  FUN_142c360d0(auStack_c58);
  for (uStack_1474 = 0; uStack_1474 < 2; uStack_1474 = uStack_1474 + 1) {
    FUN_142c36170(auStack_1458 + (ulonglong)uStack_1474 * 0x200,
                  auStack_858 + (ulonglong)uStack_1474 * 0x400,auStack_1058);
    FUN_142c359f0(auStack_1458 + (ulonglong)uStack_1474 * 0x200);
  }
  FUN_142c362d0(auStack_1458,auStack_1458,auStack_c58);
  FUN_142c36280(auStack_1458);
  FUN_142c37610(param_2,auStack_1058);
  FUN_142c374a0(param_1,auStack_1458,puStack_1460);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_1498);
  return;
}


/* address=142c367e0 name=FUN_142c367e0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142c367e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined auStack_1e68 [32];
  char cStack_1e48;
  uint uStack_1e44;
  char cStack_1e40;
  char cStack_1e3f;
  char cStack_1e3e;
  undefined auStack_1e38 [512];
  undefined auStack_1c38 [1024];
  undefined auStack_1838 [512];
  undefined auStack_1638 [512];
  undefined auStack_1438 [1024];
  undefined auStack_1038 [1024];
  undefined auStack_c38 [1024];
  undefined auStack_838 [2048];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x142c367fe;
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_1e68;
  cStack_1e48 = '\0';
  iVar1 = FUN_142c37520(auStack_1038,auStack_38,param_3);
  if (iVar1 != 0) {
    FUN_142c355e0(auStack_1638,param_2);
    FUN_142c36370(auStack_838,auStack_38,1);
    for (uStack_1e44 = 0; uStack_1e44 < 2; uStack_1e44 = uStack_1e44 + 1) {
      cStack_1e40 = cStack_1e48;
      FUN_142c35760(auStack_1438 + (ulonglong)uStack_1e44 * 0x200,param_4,cStack_1e48);
      cStack_1e48 = cStack_1e48 + '\x01';
    }
    for (uStack_1e44 = 0; uStack_1e44 < 2; uStack_1e44 = uStack_1e44 + 1) {
      cStack_1e3f = cStack_1e48;
      FUN_142c357e0(auStack_c38 + (ulonglong)uStack_1e44 * 0x200,param_4,cStack_1e48);
      cStack_1e48 = cStack_1e48 + '\x01';
    }
    cStack_1e3e = cStack_1e48;
    FUN_142c357e0(auStack_1838,param_4,cStack_1e48);
    cStack_1e48 = cStack_1e48 + '\x01';
    FUN_142c360d0(auStack_1438);
    for (uStack_1e44 = 0; uStack_1e44 < 2; uStack_1e44 = uStack_1e44 + 1) {
      FUN_142c36170(auStack_1c38 + (ulonglong)uStack_1e44 * 0x200,
                    auStack_838 + (ulonglong)uStack_1e44 * 0x400,auStack_1438);
    }
    FUN_142c36170(auStack_1e38,auStack_1038,auStack_1438);
    FUN_142c36120(auStack_1c38);
    FUN_142c35890(auStack_1e38);
    FUN_142c362d0(auStack_1c38,auStack_1c38,auStack_c38);
    FUN_142c35ac0(auStack_1e38,auStack_1e38,auStack_1838);
    FUN_142c35ac0(auStack_1e38,auStack_1e38,auStack_1638);
    FUN_142c36280(auStack_1c38);
    FUN_142c35a60(auStack_1e38);
    FUN_142c37670(param_1,auStack_1c38,auStack_1e38);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_1e68);
  return;
}


/* address=142c36a90 name=FUN_142c36a90 */

void FUN_142c36a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_c38 [32];
  undefined auStack_c18 [512];
  undefined auStack_a18 [512];
  undefined auStack_818 [1024];
  undefined auStack_418 [1024];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_c38;
  FUN_142c376c0(auStack_818,auStack_a18,param_2);
  FUN_142c37640(auStack_418,param_3);
  FUN_142c360d0(auStack_818);
  FUN_142c36170(auStack_c18,auStack_418,auStack_818);
  FUN_142c35890(auStack_c18);
  FUN_142c35b20(auStack_c18,auStack_a18,auStack_c18);
  FUN_142c35a60(auStack_c18);
  FUN_142c35680(param_1,auStack_c18);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_c38);
  return;
}


/* address=142c36b70 name=FUN_142c36b70 */

void FUN_142c36b70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c39770(param_1,0xa8,param_2,param_3,0x1f);
  *(undefined4 *)(param_1 + 200) = 0xa8;
  return;
}


/* address=142c36bc0 name=FUN_142c36bc0 */

void FUN_142c36bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c39a30(param_1,param_2,param_3,0xa8);
  return;
}


/* address=142c36c00 name=FUN_142c36c00 */

void FUN_142c36c00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_142c39380(param_1,param_2,param_3,*(undefined4 *)(param_3 + 200),0x88);
  *(undefined4 *)(param_3 + 200) = uVar1;
  return;
}


/* address=142c36c60 name=FUN_142c36c60 */

void FUN_142c36c60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c39770(param_1,0x88,param_2,param_3,0x1f);
  *(undefined4 *)(param_1 + 200) = 0x88;
  return;
}


/* address=142c36cb0 name=FUN_142c36cb0 */

void FUN_142c36cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c39a30(param_1,param_2,param_3,0x88);
  return;
}


/* address=142c36cf0 name=FUN_142c36cf0 */

void FUN_142c36cf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_142c39490(param_1,*(undefined4 *)(param_1 + 200),0x88,param_2,param_3);
  *(undefined4 *)(param_1 + 200) = uVar1;
  return;
}


/* address=142c36d50 name=FUN_142c36d50 */

void FUN_142c36d50(longlong param_1)

{
  FUN_142c39690(param_1,*(undefined4 *)(param_1 + 200),0x88,0x1f);
  *(undefined4 *)(param_1 + 200) = 0x88;
  return;
}


/* address=142c36da0 name=FUN_142c36da0 */

void FUN_142c36da0(longlong param_1)

{
  FUN_142c39ae0(param_1);
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}


/* address=142c36dd0 name=FUN_142c36dd0 */

void FUN_142c36dd0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_118 [32];
  ulonglong uStack_f8;
  undefined auStack_e8 [208];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  FUN_142c36c60(auStack_e8,param_3,param_4);
  uStack_f8 = param_2 / 0x88;
  FUN_142c36cb0(param_1,uStack_f8,auStack_e8);
  FUN_142c36c00(param_1 + uStack_f8 * 0x88,param_2 + uStack_f8 * -0x88,auStack_e8);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=142c36ec0 name=FUN_142c36ec0 */

void FUN_142c36ec0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_128 [32];
  undefined uStack_108;
  uint uStack_f8;
  undefined8 auStack_e8 [26];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_128;
  uStack_108 = 6;
  FUN_142c39770(auStack_e8,0x88,param_2,param_3);
  FUN_142c378e0(auStack_e8);
  for (uStack_f8 = 0; uStack_f8 < 4; uStack_f8 = uStack_f8 + 1) {
    FUN_142c37890(param_1 + (ulonglong)(uStack_f8 << 3),auStack_e8[uStack_f8]);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=142c36f80 name=FUN_142c36f80 */

void FUN_142c36f80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_128 [32];
  undefined uStack_108;
  uint uStack_f8;
  undefined8 auStack_e8 [26];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_128;
  uStack_108 = 6;
  FUN_142c39770(auStack_e8,0x48,param_2,param_3);
  FUN_142c378e0(auStack_e8);
  for (uStack_f8 = 0; uStack_f8 < 8; uStack_f8 = uStack_f8 + 1) {
    FUN_142c37890(param_1 + (ulonglong)(uStack_f8 << 3),auStack_e8[uStack_f8]);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=142c37040 name=FUN_142c37040 */

void FUN_142c37040(undefined8 param_1,undefined8 param_2,undefined param_3,undefined param_4)

{
  undefined auStack_58 [32];
  undefined auStack_38 [32];
  undefined uStack_18;
  undefined uStack_17;
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  FUN_142cbd3c0(auStack_38,param_2,0x20);
  uStack_18 = param_3;
  uStack_17 = param_4;
  FUN_142c36b70(param_1,auStack_38,0x22);
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c370d0 name=FUN_142c370d0 */

void FUN_142c370d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  undefined auStack_58 [32];
  undefined auStack_38 [32];
  undefined uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  FUN_142cbd3c0(auStack_38,param_3,0x20);
  uStack_18 = param_4;
  FUN_142c36dd0(param_1,param_2,auStack_38,0x21);
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c37160 name=FUN_142c37160 */

undefined4 FUN_142c37160(undefined4 *param_1)

{
  return *param_1;
}


/* address=142c371f0 name=FUN_142c371f0 */

uint FUN_142c371f0(uint3 *param_1)

{
  return (uint)*param_1;
}


/* address=142c37260 name=FUN_142c37260 */

void FUN_142c37260(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uStack_20;
  uint uStack_1c;
  
  for (uStack_1c = 0; uStack_1c < 0x20; uStack_1c = uStack_1c + 1) {
    uVar1 = FUN_142c37160(param_2 + (ulonglong)(uStack_1c << 2));
    uVar1 = (uVar1 & 0x55555555) + (uVar1 >> 1 & 0x55555555);
    for (uStack_20 = 0; uStack_20 < 8; uStack_20 = uStack_20 + 1) {
      *(ushort *)(param_1 + (ulonglong)(uStack_20 + uStack_1c * 8) * 2) =
           ((ushort)(uVar1 >> ((byte)(uStack_20 << 2) & 0x1f)) & 3) -
           ((ushort)(uVar1 >> ((char)uStack_20 * '\x04' + 2U & 0x1f)) & 3);
    }
  }
  return;
}


/* address=142c37360 name=FUN_142c37360 */

void FUN_142c37360(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uStack_1c;
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x40; uStack_18 = uStack_18 + 1) {
    uVar1 = FUN_142c371f0(param_2 + (ulonglong)(uStack_18 * 3));
    uVar1 = (uVar1 & 0x249249) + (uVar1 >> 1 & 0x249249) + (uVar1 >> 2 & 0x249249);
    for (uStack_1c = 0; uStack_1c < 4; uStack_1c = uStack_1c + 1) {
      *(ushort *)(param_1 + (ulonglong)(uStack_1c + uStack_18 * 4) * 2) =
           ((ushort)(uVar1 >> ((char)uStack_1c * '\x06' & 0x1fU)) & 7) -
           ((ushort)(uVar1 >> ((char)uStack_1c * '\x06' + 3U & 0x1f)) & 7);
    }
  }
  return;
}


/* address=142c37470 name=FUN_142c37470 */

void FUN_142c37470(short param_1,short param_2)

{
  FUN_142c34ca0((int)param_1 * (int)param_2);
  return;
}


/* address=142c374a0 name=FUN_142c374a0 */

void FUN_142c374a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uStack_18;
  
  FUN_142c35ff0(param_1,param_2);
  for (uStack_18 = 0; uStack_18 < 0x20; uStack_18 = uStack_18 + 1) {
    *(undefined *)(param_1 + uStack_18 + 0x300) = *(undefined *)(param_3 + uStack_18);
  }
  return;
}


/* address=142c37520 name=FUN_142c37520 */

void FUN_142c37520(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined auStack_348 [32];
  ulonglong uStack_328;
  undefined auStack_318 [768];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_348;
  FUN_142c36060(param_1,param_3);
  FUN_142c35ff0(auStack_318,param_1);
  iVar1 = FUN_142c34b60(auStack_318,param_3,0x300);
  if (iVar1 == 0) {
    for (uStack_328 = 0; uStack_328 < 0x20; uStack_328 = uStack_328 + 1) {
      *(undefined *)(param_2 + uStack_328) = *(undefined *)(param_3 + uStack_328 + 0x300);
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_348);
  return;
}


/* address=142c37610 name=FUN_142c37610 */

void FUN_142c37610(undefined8 param_1,undefined8 param_2)

{
  FUN_142c35ff0(param_1,param_2);
  return;
}


/* address=142c37640 name=FUN_142c37640 */

void FUN_142c37640(undefined8 param_1,undefined8 param_2)

{
  FUN_142c36060(param_1,param_2);
  return;
}


/* address=142c37670 name=FUN_142c37670 */

void FUN_142c37670(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c35be0(param_1,param_2);
  FUN_142c351c0(param_1 + 0x280,param_3);
  return;
}


/* address=142c376c0 name=FUN_142c376c0 */

void FUN_142c376c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_142c35e20(param_1,param_3);
  FUN_142c35380(param_2,param_3 + 0x280);
  return;
}


/* address=142c37710 name=FUN_142c37710 */

uint FUN_142c37710(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = 0;
  uStack_10 = 0;
  while ((uStack_10 < param_2 && (uStack_c + 3 <= param_4))) {
    uVar2 = CONCAT11(*(undefined *)(param_3 + (ulonglong)(uStack_c + 1)),
                     *(undefined *)(param_3 + (ulonglong)uStack_c)) & 0xfff;
    uVar1 = (ushort)((int)(uint)*(byte *)(param_3 + (ulonglong)(uStack_c + 1)) >> 4) |
            (ushort)*(byte *)(param_3 + (ulonglong)(uStack_c + 2)) << 4;
    uStack_c = uStack_c + 3;
    if (uVar2 < 0xd01) {
      *(ushort *)(param_1 + (ulonglong)uStack_10 * 2) = uVar2;
      uStack_10 = uStack_10 + 1;
    }
    if ((uStack_10 < param_2) && (uVar1 < 0xd01)) {
      *(ushort *)(param_1 + (ulonglong)uStack_10 * 2) = uVar1;
      uStack_10 = uStack_10 + 1;
    }
  }
  return uStack_10;
}


/* address=142c37830 name=FUN_142c37830 */

ulonglong FUN_142c37830(longlong param_1)

{
  uint uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = 0;
  for (uStack_18 = 0; uStack_18 < 8; uStack_18 = uStack_18 + 1) {
    uStack_10 = uStack_10 |
                (ulonglong)*(byte *)(param_1 + (ulonglong)uStack_18) <<
                ((byte)(uStack_18 << 3) & 0x3f);
  }
  return uStack_10;
}


/* address=142c37890 name=FUN_142c37890 */

void FUN_142c37890(longlong param_1,ulonglong param_2)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 8; uStack_18 = uStack_18 + 1) {
    *(char *)(param_1 + (ulonglong)uStack_18) = (char)(param_2 >> ((byte)(uStack_18 << 3) & 0x3f));
  }
  return;
}


/* address=142c378e0 name=FUN_142c378e0 */

void FUN_142c378e0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int iStack_1d0;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  
  uStack_1a0 = *param_1;
  uStack_198 = param_1[1];
  uStack_190 = param_1[2];
  uStack_188 = param_1[3];
  uStack_180 = param_1[4];
  uStack_178 = param_1[5];
  uStack_170 = param_1[6];
  uStack_168 = param_1[7];
  uStack_160 = param_1[8];
  uStack_158 = param_1[9];
  uStack_150 = param_1[10];
  uStack_148 = param_1[0xb];
  uStack_140 = param_1[0xc];
  uStack_138 = param_1[0xd];
  uStack_130 = param_1[0xe];
  uStack_128 = param_1[0xf];
  uStack_120 = param_1[0x10];
  uStack_118 = param_1[0x11];
  uStack_110 = param_1[0x12];
  uStack_108 = param_1[0x13];
  uStack_100 = param_1[0x14];
  uStack_f8 = param_1[0x15];
  uStack_f0 = param_1[0x16];
  uStack_e8 = param_1[0x17];
  uStack_e0 = param_1[0x18];
  for (iStack_1d0 = 0; iStack_1d0 < 0x18; iStack_1d0 = iStack_1d0 + 2) {
    uVar1 = uStack_1a0 ^ uStack_178 ^ uStack_150 ^ uStack_128 ^ uStack_100;
    uVar2 = uStack_198 ^ uStack_170 ^ uStack_148 ^ uStack_120 ^ uStack_f8;
    uVar3 = uStack_190 ^ uStack_168 ^ uStack_140 ^ uStack_118 ^ uStack_f0;
    uVar4 = uStack_188 ^ uStack_160 ^ uStack_138 ^ uStack_110 ^ uStack_e8;
    uVar5 = uStack_180 ^ uStack_158 ^ uStack_130 ^ uStack_108 ^ uStack_e0;
    uVar19 = uVar5 ^ uVar2 << 1 ^ uVar2 >> 0x3f;
    uVar20 = uVar1 ^ uVar3 << 1 ^ uVar3 >> 0x3f;
    uVar2 = uVar2 ^ uVar4 << 1 ^ uVar4 >> 0x3f;
    uVar3 = uVar3 ^ uVar5 << 1 ^ uVar5 >> 0x3f;
    uVar4 = uVar4 ^ uVar1 << 1 ^ uVar1 >> 0x3f;
    uStack_1a0 = uStack_1a0 ^ uVar19;
    uVar1 = (uStack_170 ^ uVar20) << 0x2c ^ (uStack_170 ^ uVar20) >> 0x14;
    uVar5 = (uStack_140 ^ uVar2) << 0x2b ^ (uStack_140 ^ uVar2) >> 0x15;
    uVar6 = (uStack_110 ^ uVar3) << 0x15 ^ (uStack_110 ^ uVar3) >> 0x2b;
    uVar7 = (uStack_e0 ^ uVar4) << 0xe ^ (uStack_e0 ^ uVar4) >> 0x32;
    uVar21 = uStack_1a0 ^ ~uVar1 & uVar5 ^ *(ulonglong *)(&DAT_1432a1580 + (longlong)iStack_1d0 * 8)
    ;
    uVar22 = uVar1 ^ ~uVar5 & uVar6;
    uVar5 = uVar5 ^ ~uVar6 & uVar7;
    uVar6 = uVar6 ^ ~uVar7 & uStack_1a0;
    uVar7 = uVar7 ^ ~uStack_1a0 & uVar1;
    uVar1 = (uStack_188 ^ uVar3) << 0x1c ^ (uStack_188 ^ uVar3) >> 0x24;
    uVar8 = (uStack_158 ^ uVar4) << 0x14 ^ (uStack_158 ^ uVar4) >> 0x2c;
    uVar9 = (uStack_150 ^ uVar19) << 3 ^ (uStack_150 ^ uVar19) >> 0x3d;
    uVar10 = (uStack_120 ^ uVar20) << 0x2d ^ (uStack_120 ^ uVar20) >> 0x13;
    uVar11 = (uStack_f0 ^ uVar2) << 0x3d ^ (uStack_f0 ^ uVar2) >> 3;
    uVar23 = uVar1 ^ ~uVar8 & uVar9;
    uVar24 = uVar8 ^ ~uVar9 & uVar10;
    uVar9 = uVar9 ^ ~uVar10 & uVar11;
    uVar10 = uVar10 ^ ~uVar11 & uVar1;
    uVar11 = uVar11 ^ ~uVar1 & uVar8;
    uVar1 = (uStack_198 ^ uVar20) << 1 ^ (uStack_198 ^ uVar20) >> 0x3f;
    uVar8 = (uStack_168 ^ uVar2) << 6 ^ (uStack_168 ^ uVar2) >> 0x3a;
    uVar12 = (uStack_138 ^ uVar3) << 0x19 ^ (uStack_138 ^ uVar3) >> 0x27;
    uVar13 = (uStack_108 ^ uVar4) << 8 ^ (uStack_108 ^ uVar4) >> 0x38;
    uVar14 = (uStack_100 ^ uVar19) << 0x12 ^ (uStack_100 ^ uVar19) >> 0x2e;
    uVar25 = uVar1 ^ ~uVar8 & uVar12;
    uVar26 = uVar8 ^ ~uVar12 & uVar13;
    uVar12 = uVar12 ^ ~uVar13 & uVar14;
    uVar13 = uVar13 ^ ~uVar14 & uVar1;
    uVar14 = uVar14 ^ ~uVar1 & uVar8;
    uVar1 = (uStack_180 ^ uVar4) << 0x1b ^ (uStack_180 ^ uVar4) >> 0x25;
    uVar8 = (uStack_178 ^ uVar19) << 0x24 ^ (uStack_178 ^ uVar19) >> 0x1c;
    uVar15 = (uStack_148 ^ uVar20) << 10 ^ (uStack_148 ^ uVar20) >> 0x36;
    uVar16 = (uStack_118 ^ uVar2) << 0xf ^ (uStack_118 ^ uVar2) >> 0x31;
    uVar17 = (uStack_e8 ^ uVar3) << 0x38 ^ (uStack_e8 ^ uVar3) >> 8;
    uVar27 = uVar1 ^ ~uVar8 & uVar15;
    uVar28 = uVar8 ^ ~uVar15 & uVar16;
    uVar15 = uVar15 ^ ~uVar16 & uVar17;
    uVar16 = uVar16 ^ ~uVar17 & uVar1;
    uVar17 = uVar17 ^ ~uVar1 & uVar8;
    uVar1 = (uStack_190 ^ uVar2) << 0x3e ^ (uStack_190 ^ uVar2) >> 2;
    uVar2 = (uStack_160 ^ uVar3) << 0x37 ^ (uStack_160 ^ uVar3) >> 9;
    uVar3 = (uStack_130 ^ uVar4) << 0x27 ^ (uStack_130 ^ uVar4) >> 0x19;
    uVar4 = (uStack_128 ^ uVar19) << 0x29 ^ (uStack_128 ^ uVar19) >> 0x17;
    uVar8 = (uStack_f8 ^ uVar20) << 2 ^ (uStack_f8 ^ uVar20) >> 0x3e;
    uVar29 = uVar1 ^ ~uVar2 & uVar3;
    uVar30 = uVar2 ^ ~uVar3 & uVar4;
    uVar3 = uVar3 ^ ~uVar4 & uVar8;
    uVar4 = uVar4 ^ ~uVar8 & uVar1;
    uVar8 = uVar8 ^ ~uVar1 & uVar2;
    uVar1 = uVar21 ^ uVar23 ^ uVar25 ^ uVar27 ^ uVar29;
    uVar2 = uVar22 ^ uVar24 ^ uVar26 ^ uVar28 ^ uVar30;
    uVar19 = uVar5 ^ uVar9 ^ uVar12 ^ uVar15 ^ uVar3;
    uVar20 = uVar6 ^ uVar10 ^ uVar13 ^ uVar16 ^ uVar4;
    uVar18 = uVar7 ^ uVar11 ^ uVar14 ^ uVar17 ^ uVar8;
    uVar31 = uVar18 ^ uVar2 << 1 ^ uVar2 >> 0x3f;
    uVar32 = uVar1 ^ uVar19 << 1 ^ uVar19 >> 0x3f;
    uVar2 = uVar2 ^ uVar20 << 1 ^ uVar20 >> 0x3f;
    uVar19 = uVar19 ^ uVar18 << 1 ^ uVar18 >> 0x3f;
    uVar20 = uVar20 ^ uVar1 << 1 ^ uVar1 >> 0x3f;
    uVar21 = uVar21 ^ uVar31;
    uVar24 = uVar24 ^ uVar32;
    uVar1 = uVar24 << 0x2c ^ uVar24 >> 0x14;
    uVar12 = uVar12 ^ uVar2;
    uStack_190 = uVar12 << 0x2b ^ uVar12 >> 0x15;
    uVar16 = uVar16 ^ uVar19;
    uStack_188 = uVar16 << 0x15 ^ uVar16 >> 0x2b;
    uVar8 = uVar8 ^ uVar20;
    uStack_180 = uVar8 << 0xe ^ uVar8 >> 0x32;
    uStack_1a0 = uVar21 ^ ~uVar1 & uStack_190 ^
                 *(ulonglong *)(&DAT_1432a1580 + (longlong)(iStack_1d0 + 1) * 8);
    uStack_198 = uVar1 ^ ~uStack_190 & uStack_188;
    uStack_190 = uStack_190 ^ ~uStack_188 & uStack_180;
    uStack_188 = uStack_188 ^ ~uStack_180 & uVar21;
    uStack_180 = uStack_180 ^ ~uVar21 & uVar1;
    uVar6 = uVar6 ^ uVar19;
    uVar1 = uVar6 << 0x1c ^ uVar6 >> 0x24;
    uVar11 = uVar11 ^ uVar20;
    uVar6 = uVar11 << 0x14 ^ uVar11 >> 0x2c;
    uVar25 = uVar25 ^ uVar31;
    uStack_168 = uVar25 << 3 ^ uVar25 >> 0x3d;
    uVar28 = uVar28 ^ uVar32;
    uStack_160 = uVar28 << 0x2d ^ uVar28 >> 0x13;
    uVar3 = uVar3 ^ uVar2;
    uStack_158 = uVar3 << 0x3d ^ uVar3 >> 3;
    uStack_178 = uVar1 ^ ~uVar6 & uStack_168;
    uStack_170 = uVar6 ^ ~uStack_168 & uStack_160;
    uStack_168 = uStack_168 ^ ~uStack_160 & uStack_158;
    uStack_160 = uStack_160 ^ ~uStack_158 & uVar1;
    uStack_158 = uStack_158 ^ ~uVar1 & uVar6;
    uVar22 = uVar22 ^ uVar32;
    uVar1 = uVar22 << 1 ^ uVar22 >> 0x3f;
    uVar9 = uVar9 ^ uVar2;
    uVar3 = uVar9 << 6 ^ uVar9 >> 0x3a;
    uVar13 = uVar13 ^ uVar19;
    uStack_140 = uVar13 << 0x19 ^ uVar13 >> 0x27;
    uVar17 = uVar17 ^ uVar20;
    uStack_138 = uVar17 << 8 ^ uVar17 >> 0x38;
    uVar29 = uVar29 ^ uVar31;
    uStack_130 = uVar29 << 0x12 ^ uVar29 >> 0x2e;
    uStack_150 = uVar1 ^ ~uVar3 & uStack_140;
    uStack_148 = uVar3 ^ ~uStack_140 & uStack_138;
    uStack_140 = uStack_140 ^ ~uStack_138 & uStack_130;
    uStack_138 = uStack_138 ^ ~uStack_130 & uVar1;
    uStack_130 = uStack_130 ^ ~uVar1 & uVar3;
    uVar7 = uVar7 ^ uVar20;
    uVar1 = uVar7 << 0x1b ^ uVar7 >> 0x25;
    uVar23 = uVar23 ^ uVar31;
    uVar3 = uVar23 << 0x24 ^ uVar23 >> 0x1c;
    uVar26 = uVar26 ^ uVar32;
    uStack_118 = uVar26 << 10 ^ uVar26 >> 0x36;
    uVar15 = uVar15 ^ uVar2;
    uStack_110 = uVar15 << 0xf ^ uVar15 >> 0x31;
    uVar4 = uVar4 ^ uVar19;
    uStack_108 = uVar4 << 0x38 ^ uVar4 >> 8;
    uStack_128 = uVar1 ^ ~uVar3 & uStack_118;
    uStack_120 = uVar3 ^ ~uStack_118 & uStack_110;
    uStack_118 = uStack_118 ^ ~uStack_110 & uStack_108;
    uStack_110 = uStack_110 ^ ~uStack_108 & uVar1;
    uStack_108 = uStack_108 ^ ~uVar1 & uVar3;
    uVar5 = uVar5 ^ uVar2;
    uVar1 = uVar5 << 0x3e ^ uVar5 >> 2;
    uVar10 = uVar10 ^ uVar19;
    uVar2 = uVar10 << 0x37 ^ uVar10 >> 9;
    uVar14 = uVar14 ^ uVar20;
    uStack_f0 = uVar14 << 0x27 ^ uVar14 >> 0x19;
    uVar27 = uVar27 ^ uVar31;
    uStack_e8 = uVar27 << 0x29 ^ uVar27 >> 0x17;
    uVar30 = uVar30 ^ uVar32;
    uStack_e0 = uVar30 << 2 ^ uVar30 >> 0x3e;
    uStack_100 = uVar1 ^ ~uVar2 & uStack_f0;
    uStack_f8 = uVar2 ^ ~uStack_f0 & uStack_e8;
    uStack_f0 = uStack_f0 ^ ~uStack_e8 & uStack_e0;
    uStack_e8 = uStack_e8 ^ ~uStack_e0 & uVar1;
    uStack_e0 = uStack_e0 ^ ~uVar1 & uVar2;
  }
  *param_1 = uStack_1a0;
  param_1[1] = uStack_198;
  param_1[2] = uStack_190;
  param_1[3] = uStack_188;
  param_1[4] = uStack_180;
  param_1[5] = uStack_178;
  param_1[6] = uStack_170;
  param_1[7] = uStack_168;
  param_1[8] = uStack_160;
  param_1[9] = uStack_158;
  param_1[10] = uStack_150;
  param_1[0xb] = uStack_148;
  param_1[0xc] = uStack_140;
  param_1[0xd] = uStack_138;
  param_1[0xe] = uStack_130;
  param_1[0xf] = uStack_128;
  param_1[0x10] = uStack_120;
  param_1[0x11] = uStack_118;
  param_1[0x12] = uStack_110;
  param_1[0x13] = uStack_108;
  param_1[0x14] = uStack_100;
  param_1[0x15] = uStack_f8;
  param_1[0x16] = uStack_f0;
  param_1[0x17] = uStack_e8;
  param_1[0x18] = uStack_e0;
  return;
}


/* address=142c39380 name=FUN_142c39380 */

uint FUN_142c39380(undefined *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined *puStackX_8;
  longlong lStackX_10;
  uint uStackX_20;
  uint uStack_28;
  
  puStackX_8 = param_1;
  uStackX_20 = param_4;
  for (lStackX_10 = param_2; lStackX_10 != 0; lStackX_10 = lStackX_10 - (ulonglong)uVar1) {
    if (uStackX_20 == param_5) {
      FUN_142c378e0(param_3);
      uStackX_20 = 0;
    }
    for (uStack_28 = uStackX_20;
        (uStack_28 < param_5 && ((ulonglong)uStack_28 < (ulonglong)uStackX_20 + lStackX_10));
        uStack_28 = uStack_28 + 1) {
      *puStackX_8 = (char)(*(ulonglong *)(param_3 + ((ulonglong)uStack_28 / 8) * 8) >>
                          (sbyte)(uStack_28 % 8 << 3));
      puStackX_8 = puStackX_8 + 1;
    }
    uVar1 = uStack_28 - uStackX_20;
    uStackX_20 = uStack_28;
  }
  return uStackX_20;
}


/* address=142c39490 name=FUN_142c39490 */

uint FUN_142c39490(longlong param_1,uint param_2,uint param_3,byte *param_4,longlong param_5)

{
  uint uStackX_10;
  byte *pbStackX_20;
  uint uStack_48;
  
  uStackX_10 = param_2;
  pbStackX_20 = param_4;
  while ((ulonglong)param_3 <= (ulonglong)uStackX_10 + param_5) {
    for (uStack_48 = uStackX_10; uStack_48 < param_3; uStack_48 = uStack_48 + 1) {
      *(ulonglong *)(param_1 + ((ulonglong)uStack_48 / 8) * 8) =
           *(ulonglong *)(param_1 + ((ulonglong)uStack_48 / 8) * 8) ^
           (ulonglong)*pbStackX_20 << (sbyte)(uStack_48 % 8 << 3);
      pbStackX_20 = pbStackX_20 + 1;
    }
    param_5 = param_5 - (ulonglong)(param_3 - uStackX_10);
    FUN_142c378e0(param_1);
    uStackX_10 = 0;
  }
  for (uStack_48 = uStackX_10; (ulonglong)uStack_48 < (ulonglong)uStackX_10 + param_5;
      uStack_48 = uStack_48 + 1) {
    *(ulonglong *)(param_1 + ((ulonglong)uStack_48 / 8) * 8) =
         *(ulonglong *)(param_1 + ((ulonglong)uStack_48 / 8) * 8) ^
         (ulonglong)*pbStackX_20 << (sbyte)(uStack_48 % 8 << 3);
    pbStackX_20 = pbStackX_20 + 1;
  }
  return uStack_48;
}


/* address=142c39690 name=FUN_142c39690 */

void FUN_142c39690(longlong param_1,uint param_2,uint param_3,byte param_4)

{
  *(ulonglong *)(param_1 + ((ulonglong)param_2 / 8) * 8) =
       *(ulonglong *)(param_1 + ((ulonglong)param_2 / 8) * 8) ^
       (ulonglong)param_4 << (sbyte)(param_2 % 8 << 3);
  *(ulonglong *)(param_1 + (ulonglong)(param_3 / 8 - 1) * 8) =
       *(ulonglong *)(param_1 + (ulonglong)(param_3 / 8 - 1) * 8) ^ 0x8000000000000000;
  return;
}


/* address=142c39770 name=FUN_142c39770 */

void FUN_142c39770(longlong param_1,uint param_2,longlong param_3,ulonglong param_4,byte param_5)

{
  ulonglong uVar1;
  longlong lStackX_18;
  ulonglong uStackX_20;
  uint uStack_58;
  
  for (uStack_58 = 0; lStackX_18 = param_3, uStackX_20 = param_4, uStack_58 < 0x19;
      uStack_58 = uStack_58 + 1) {
    *(undefined8 *)(param_1 + (ulonglong)uStack_58 * 8) = 0;
  }
  while (param_2 <= uStackX_20) {
    for (uStack_58 = 0; uStack_58 < param_2 / 8; uStack_58 = uStack_58 + 1) {
      uVar1 = FUN_142c37830(lStackX_18 + (ulonglong)(uStack_58 << 3));
      *(ulonglong *)(param_1 + (ulonglong)uStack_58 * 8) =
           *(ulonglong *)(param_1 + (ulonglong)uStack_58 * 8) ^ uVar1;
    }
    lStackX_18 = lStackX_18 + (ulonglong)param_2;
    uStackX_20 = uStackX_20 - param_2;
    FUN_142c378e0(param_1);
  }
  for (uStack_58 = 0; uStack_58 < uStackX_20; uStack_58 = uStack_58 + 1) {
    *(ulonglong *)(param_1 + ((ulonglong)uStack_58 / 8) * 8) =
         *(ulonglong *)(param_1 + ((ulonglong)uStack_58 / 8) * 8) ^
         (ulonglong)*(byte *)(lStackX_18 + (ulonglong)uStack_58) << (sbyte)(uStack_58 % 8 << 3);
  }
  *(ulonglong *)(param_1 + ((ulonglong)uStack_58 / 8) * 8) =
       *(ulonglong *)(param_1 + ((ulonglong)uStack_58 / 8) * 8) ^
       (ulonglong)param_5 << (sbyte)(uStack_58 % 8 << 3);
  *(ulonglong *)(param_1 + ((ulonglong)(param_2 - 1) / 8) * 8) =
       *(ulonglong *)(param_1 + ((ulonglong)(param_2 - 1) / 8) * 8) ^ 0x8000000000000000;
  return;
}


/* address=142c39a30 name=FUN_142c39a30 */

void FUN_142c39a30(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lStackX_8;
  longlong lStackX_10;
  uint uStack_18;
  
  lStackX_8 = param_1;
  for (lStackX_10 = param_2; lStackX_10 != 0; lStackX_10 = lStackX_10 + -1) {
    FUN_142c378e0(param_3);
    for (uStack_18 = 0; uStack_18 < param_4 / 8; uStack_18 = uStack_18 + 1) {
      FUN_142c37890(lStackX_8 + (ulonglong)(uStack_18 << 3));
    }
    lStackX_8 = lStackX_8 + (ulonglong)param_4;
  }
  return;
}


/* address=142c39ae0 name=FUN_142c39ae0 */

void FUN_142c39ae0(longlong param_1)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x19; uStack_18 = uStack_18 + 1) {
    *(undefined8 *)(param_1 + (ulonglong)uStack_18 * 8) = 0;
  }
  return;
}


/* address=142c39b20 name=FUN_142c39b20 */

void FUN_142c39b20(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uStack_28;
  
  FUN_142c3bad0(param_1,param_2,param_3);
  for (uStack_28 = 0; uStack_28 < 0x4a0; uStack_28 = uStack_28 + 1) {
    *(undefined *)(param_2 + uStack_28 + 0x480) = *(undefined *)(param_1 + uStack_28);
  }
  FUN_142c3c400(param_2 + 0x920,param_1,0x4a0);
  FUN_142cbd3c0(param_2 + 0x940,param_3 + 0x20,0x20);
  return;
}


/* address=142c39c20 name=FUN_142c39c20 */

void FUN_142c39c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  undefined auStack_c8 [32];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined auStack_98 [32];
  undefined auStack_78 [32];
  undefined auStack_58 [32];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_c8;
  uStack_a8 = param_3;
  uStack_a0 = param_1;
  FUN_142cbd3c0(auStack_98,param_4,0x20);
  FUN_142c3c400(auStack_98,auStack_98,0x20);
  FUN_142c3c400(auStack_78,uStack_a8,0x4a0);
  FUN_142c3c4c0(auStack_58,auStack_98,0x40);
  iVar1 = FUN_142c3bd10(uStack_a0,auStack_98,uStack_a8,auStack_38);
  if (iVar1 != 0) {
    if (param_5 == 1) {
      FUN_142cbd3c0(param_2,auStack_58,0x20);
    }
    else {
      FUN_142c3c400(auStack_38,uStack_a0,0x440);
      FUN_142c3c310(param_2,0x20,auStack_58,0x40);
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=142c39d80 name=FUN_142c39d80 */

void FUN_142c39d80(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  int param_5)

{
  undefined auStack_618 [32];
  int iStack_5f8;
  ulonglong uStack_5f0;
  longlong lStack_5e8;
  undefined8 uStack_5e0;
  longlong lStack_5d8;
  undefined auStack_5c8 [208];
  undefined auStack_4f8 [32];
  undefined auStack_4d8 [32];
  undefined auStack_4b8 [32];
  undefined auStack_498 [32];
  undefined auStack_478 [32];
  undefined auStack_458 [1088];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_618;
  iStack_5f8 = 1;
  lStack_5d8 = param_2 + 0x480;
  lStack_5e8 = param_2;
  uStack_5e0 = param_1;
  if (param_4 == 0x440) {
    FUN_142c3bfc0(auStack_498,param_3,param_2);
    for (uStack_5f0 = 0; uStack_5f0 < 0x20; uStack_5f0 = uStack_5f0 + 1) {
      auStack_478[uStack_5f0] = *(undefined *)(lStack_5e8 + uStack_5f0 + 0x920);
    }
    FUN_142c3c4c0(auStack_4d8,auStack_498,0x40);
    FUN_142c3bd10(auStack_458,auStack_498,lStack_5d8,auStack_4b8);
    iStack_5f8 = FUN_142c3a090(param_3,auStack_458,0x440);
  }
  if (param_5 == 1) {
    FUN_142c3c2e0(auStack_5c8);
    FUN_142c3c230(auStack_5c8,lStack_5e8 + 0x940,0x20);
    FUN_142c3c230(auStack_5c8,param_3,param_4);
    FUN_142c3c290(auStack_5c8);
    FUN_142c3c140(auStack_4f8,0x20,auStack_5c8);
    FUN_142c3a120(auStack_4f8,auStack_4d8,0x20,1U - iStack_5f8 & 0xff);
    FUN_142cbd3c0(uStack_5e0,auStack_4f8,0x20);
  }
  else {
    FUN_142c3c400(auStack_4b8,param_3,param_4);
    FUN_142c3a120(auStack_4d8,lStack_5e8 + 0x940,0x20,(undefined)iStack_5f8);
    FUN_142c3c310(uStack_5e0,0x20,auStack_4d8,0x40);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_618);
  return;
}


/* address=142c3a000 name=FUN_142c3a000 */

void FUN_142c3a000(undefined8 param_1,undefined8 param_2)

{
  FUN_142cbd3c0(param_1,param_2,0x4a0);
  return;
}


/* address=142c3a040 name=FUN_142c3a040 */

void FUN_142c3a040(undefined8 param_1,undefined8 param_2)

{
  FUN_142cbd3c0(param_1,param_2,0x4a0);
  return;
}


/* address=142c3a080 name=FUN_142c3a080 */

undefined4 FUN_142c3a080(undefined4 param_1)

{
  return param_1;
}


/* address=142c3a090 name=FUN_142c3a090 */

ulonglong FUN_142c3a090(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte bStack_18;
  ulonglong uStack_10;
  
  bStack_18 = 0;
  for (uStack_10 = 0; uStack_10 < param_3; uStack_10 = uStack_10 + 1) {
    bStack_18 = bStack_18 | *(byte *)(param_1 + uStack_10) ^ *(byte *)(param_2 + uStack_10);
  }
  return -(ulonglong)bStack_18 >> 0x3f;
}


/* address=142c3a120 name=FUN_142c3a120 */

void FUN_142c3a120(longlong param_1,longlong param_2,ulonglong param_3,char param_4)

{
  ulonglong uStack_18;
  
  for (uStack_18 = 0; uStack_18 < param_3; uStack_18 = uStack_18 + 1) {
    *(byte *)(param_1 + uStack_18) =
         *(byte *)(param_1 + uStack_18) ^
         -param_4 & (*(byte *)(param_1 + uStack_18) ^ *(byte *)(param_2 + uStack_18));
  }
  return;
}


/* address=142c3a1d0 name=FUN_142c3a1d0 */

undefined2 FUN_142c3a1d0(int param_1)

{
  short sStackX_8;
  
  sStackX_8 = (short)param_1;
  return (short)((uint)(param_1 + (short)(sStackX_8 * -0xcff) * -0xd01) >> 0x10);
}


/* address=142c3a210 name=FUN_142c3a210 */

int FUN_142c3a210(short param_1)

{
  return (int)param_1 - (int)(short)((short)(param_1 * 0x4ebf + 0x2000000 >> 0x1a) * 0xd01);
}


/* address=142c3a260 name=FUN_142c3a260 */

void FUN_142c3a260(longlong param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  uStack_14 = 1;
  for (uStack_1c = 0x80; 1 < uStack_1c; uStack_1c = uStack_1c >> 1) {
    uStack_18 = 0;
    while (uStack_18 < 0x100) {
      uVar1 = *(undefined2 *)(&DAT_1432a1640 + (ulonglong)uStack_14 * 2);
      uStack_14 = uStack_14 + 1;
      for (uStack_20 = uStack_18; uStack_20 < uStack_18 + uStack_1c; uStack_20 = uStack_20 + 1) {
        sVar2 = FUN_142c3c830(uVar1,*(undefined2 *)
                                     (param_1 + (ulonglong)(uStack_20 + uStack_1c) * 2));
        *(short *)(param_1 + (ulonglong)(uStack_20 + uStack_1c) * 2) =
             *(short *)(param_1 + (ulonglong)uStack_20 * 2) - sVar2;
        *(short *)(param_1 + (ulonglong)uStack_20 * 2) =
             *(short *)(param_1 + (ulonglong)uStack_20 * 2) + sVar2;
      }
      uStack_18 = uStack_20 + uStack_1c;
    }
  }
  return;
}


/* address=142c3a390 name=FUN_142c3a390 */

void FUN_142c3a390(longlong param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  uStack_10 = 0x7f;
  for (uStack_18 = 2; uStack_18 < 0x81; uStack_18 = uStack_18 << 1) {
    uStack_14 = 0;
    while (uStack_14 < 0x100) {
      uVar3 = *(undefined2 *)(&DAT_1432a1640 + (ulonglong)uStack_10 * 2);
      uStack_10 = uStack_10 - 1;
      for (uStack_1c = uStack_14; uStack_1c < uStack_14 + uStack_18; uStack_1c = uStack_1c + 1) {
        sVar1 = *(short *)(param_1 + (ulonglong)uStack_1c * 2);
        uVar2 = FUN_142c3a210(sVar1 + *(short *)(param_1 + (ulonglong)(uStack_1c + uStack_18) * 2));
        *(undefined2 *)(param_1 + (ulonglong)uStack_1c * 2) = uVar2;
        *(short *)(param_1 + (ulonglong)(uStack_1c + uStack_18) * 2) =
             *(short *)(param_1 + (ulonglong)(uStack_1c + uStack_18) * 2) - sVar1;
        uVar2 = FUN_142c3c830(uVar3,*(undefined2 *)
                                     (param_1 + (ulonglong)(uStack_1c + uStack_18) * 2));
        *(undefined2 *)(param_1 + (ulonglong)(uStack_1c + uStack_18) * 2) = uVar2;
      }
      uStack_14 = uStack_1c + uStack_18;
    }
  }
  for (uStack_1c = 0; uStack_1c < 0x100; uStack_1c = uStack_1c + 1) {
    uVar3 = FUN_142c3c830(*(undefined2 *)(param_1 + (ulonglong)uStack_1c * 2),0x5a1);
    *(undefined2 *)(param_1 + (ulonglong)uStack_1c * 2) = uVar3;
  }
  return;
}


/* address=142c3a550 name=FUN_142c3a550 */

void FUN_142c3a550(short *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 param_4)

{
  short sVar1;
  
  sVar1 = FUN_142c3c830(param_2[1],param_3[1]);
  *param_1 = sVar1;
  sVar1 = FUN_142c3c830(*param_1,param_4);
  *param_1 = sVar1;
  sVar1 = FUN_142c3c830(*param_2,*param_3);
  *param_1 = *param_1 + sVar1;
  sVar1 = FUN_142c3c830(*param_2,param_3[1]);
  param_1[1] = sVar1;
  sVar1 = FUN_142c3c830(param_2[1],*param_3);
  param_1[1] = param_1[1] + sVar1;
  return;
}


/* address=142c3a6f0 name=FUN_142c3a6f0 */

void FUN_142c3a6f0(byte *param_1,longlong param_2)

{
  uint uVar1;
  byte *pbStackX_8;
  short asStack_28 [2];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  byte abStack_18 [8];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)asStack_28;
  pbStackX_8 = param_1;
  for (uStack_1c = 0; uStack_1c < 0x20; uStack_1c = uStack_1c + 1) {
    for (uStack_20 = 0; uStack_20 < 8; uStack_20 = uStack_20 + 1) {
      asStack_28[0] = *(short *)(param_2 + (ulonglong)(uStack_20 + uStack_1c * 8) * 2);
      asStack_28[0] = asStack_28[0] + (asStack_28[0] >> 0xf & 0xd01U);
      uVar1 = (asStack_28[0] * 0x10 + 0x681) * 0x13afb;
      uStack_24 = uVar1 >> 0x1c;
      abStack_18[uStack_20] = (byte)(uVar1 >> 0x1c);
    }
    *pbStackX_8 = abStack_18[0] | abStack_18[1] << 4;
    pbStackX_8[1] = abStack_18[2] | abStack_18[3] << 4;
    pbStackX_8[2] = abStack_18[4] | abStack_18[5] << 4;
    pbStackX_8[3] = abStack_18[6] | abStack_18[7] << 4;
    pbStackX_8 = pbStackX_8 + 4;
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)asStack_28);
  return;
}


/* address=142c3a8b0 name=FUN_142c3a8b0 */

void FUN_142c3a8b0(longlong param_1,byte *param_2)

{
  byte *pbStackX_10;
  uint uStack_18;
  
  pbStackX_10 = param_2;
  for (uStack_18 = 0; uStack_18 < 0x80; uStack_18 = uStack_18 + 1) {
    *(short *)(param_1 + (ulonglong)(uStack_18 * 2) * 2) =
         (short)((int)((*pbStackX_10 & 0xf) * 0xd01 + 8) >> 4);
    *(short *)(param_1 + (ulonglong)(uStack_18 * 2 + 1) * 2) =
         (short)(((int)(uint)*pbStackX_10 >> 4) * 0xd01 + 8 >> 4);
    pbStackX_10 = pbStackX_10 + 1;
  }
  return;
}


/* address=142c3a960 name=FUN_142c3a960 */

void FUN_142c3a960(longlong param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  undefined uStack_18;
  uint uStack_10;
  
  for (uStack_10 = 0; uStack_10 < 0x80; uStack_10 = uStack_10 + 1) {
    sVar2 = *(short *)(param_2 + (ulonglong)(uStack_10 * 2) * 2);
    sVar2 = sVar2 + (sVar2 >> 0xf & 0xd01U);
    sVar1 = *(short *)(param_2 + (ulonglong)(uStack_10 * 2 + 1) * 2);
    uVar3 = sVar1 + (sVar1 >> 0xf & 0xd01U);
    uStack_18 = (undefined)sVar2;
    *(undefined *)(param_1 + (ulonglong)(uStack_10 * 3)) = uStack_18;
    *(byte *)(param_1 + (ulonglong)(uStack_10 * 3 + 1)) =
         (byte)((ushort)sVar2 >> 8) | (char)uVar3 << 4;
    *(char *)(param_1 + (ulonglong)(uStack_10 * 3 + 2)) = (char)((int)(uint)uVar3 >> 4);
  }
  return;
}


/* address=142c3aa50 name=FUN_142c3aa50 */

void FUN_142c3aa50(longlong param_1,longlong param_2)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x80; uStack_18 = uStack_18 + 1) {
    *(ushort *)(param_1 + (ulonglong)(uStack_18 * 2) * 2) =
         CONCAT11(*(undefined *)(param_2 + (ulonglong)(uStack_18 * 3 + 1)),
                  *(undefined *)(param_2 + (ulonglong)(uStack_18 * 3))) & 0xfff;
    *(ushort *)(param_1 + (ulonglong)(uStack_18 * 2 + 1) * 2) =
         (ushort)((int)(uint)*(byte *)(param_2 + (ulonglong)(uStack_18 * 3 + 1)) >> 4) |
         (ushort)*(byte *)(param_2 + (ulonglong)(uStack_18 * 3 + 2)) << 4;
  }
  return;
}


/* address=142c3ab10 name=FUN_142c3ab10 */

void FUN_142c3ab10(longlong param_1,longlong param_2)

{
  short sVar1;
  uint uStack_14;
  uint uStack_10;
  
  for (uStack_10 = 0; uStack_10 < 0x20; uStack_10 = uStack_10 + 1) {
    for (uStack_14 = 0; uStack_14 < 8; uStack_14 = uStack_14 + 1) {
      sVar1 = FUN_142c3a080((int)(uint)*(byte *)(param_2 + (ulonglong)uStack_10) >>
                            ((byte)uStack_14 & 0x1f) & 1);
      *(ushort *)(param_1 + (ulonglong)(uStack_14 + uStack_10 * 8) * 2) = -sVar1 & 0x681;
    }
  }
  return;
}


/* address=142c3abb0 name=FUN_142c3abb0 */

void FUN_142c3abb0(longlong param_1,longlong param_2)

{
  uint uStack_14;
  uint uStack_10;
  
  for (uStack_14 = 0; uStack_14 < 0x20; uStack_14 = uStack_14 + 1) {
    *(undefined *)(param_1 + (ulonglong)uStack_14) = 0;
    for (uStack_10 = 0; uStack_10 < 8; uStack_10 = uStack_10 + 1) {
      *(byte *)(param_1 + (ulonglong)uStack_14) =
           *(byte *)(param_1 + (ulonglong)uStack_14) |
           (byte)(((uint)((*(short *)(param_2 + (ulonglong)(uStack_10 + uStack_14 * 8) * 2) * 2 +
                          0x681) * 0x13afb) >> 0x1c & 1) << ((byte)uStack_10 & 0x1f));
    }
  }
  return;
}


/* address=142c3ac90 name=FUN_142c3ac90 */

void FUN_142c3ac90(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  undefined auStack_b8 [32];
  undefined auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_b8;
  FUN_142c3c610(auStack_98,0x80,param_2,param_3);
  FUN_142c3b0b0(param_1,auStack_98);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=142c3ad10 name=FUN_142c3ad10 */

void FUN_142c3ad10(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  undefined auStack_b8 [32];
  undefined auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_b8;
  FUN_142c3c610(auStack_98,0x80,param_2,param_3);
  FUN_142c3b0e0(param_1,auStack_98);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=142c3ad90 name=FUN_142c3ad90 */

void FUN_142c3ad90(undefined8 param_1)

{
  FUN_142c3a260(param_1);
  FUN_142c3af90(param_1);
  return;
}


/* address=142c3adc0 name=FUN_142c3adc0 */

void FUN_142c3adc0(undefined8 param_1)

{
  FUN_142c3a390(param_1);
  return;
}


/* address=142c3adf0 name=FUN_142c3adf0 */

void FUN_142c3adf0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_28;
  
  for (uStack_28 = 0; uStack_28 < 0x40; uStack_28 = uStack_28 + 1) {
    FUN_142c3a550(param_1 + (ulonglong)(uStack_28 << 2) * 2,
                  param_2 + (ulonglong)(uStack_28 << 2) * 2,
                  param_3 + (ulonglong)(uStack_28 << 2) * 2,
                  *(undefined2 *)(&DAT_1432a1640 + (ulonglong)(uStack_28 + 0x40) * 2));
    FUN_142c3a550(param_1 + (ulonglong)(uStack_28 * 4 + 2) * 2,
                  param_2 + (ulonglong)(uStack_28 * 4 + 2) * 2,
                  param_3 + (ulonglong)(uStack_28 * 4 + 2) * 2,
                  -*(short *)(&DAT_1432a1640 + (ulonglong)(uStack_28 + 0x40) * 2));
  }
  return;
}


/* address=142c3af20 name=FUN_142c3af20 */

void FUN_142c3af20(longlong param_1)

{
  undefined2 uVar1;
  uint uStack_14;
  
  for (uStack_14 = 0; uStack_14 < 0x100; uStack_14 = uStack_14 + 1) {
    uVar1 = FUN_142c3a1d0(*(short *)(param_1 + (ulonglong)uStack_14 * 2) * 0x549);
    *(undefined2 *)(param_1 + (ulonglong)uStack_14 * 2) = uVar1;
  }
  return;
}


/* address=142c3af90 name=FUN_142c3af90 */

void FUN_142c3af90(longlong param_1)

{
  undefined2 uVar1;
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x100; uStack_18 = uStack_18 + 1) {
    uVar1 = FUN_142c3a210(*(undefined2 *)(param_1 + (ulonglong)uStack_18 * 2));
    *(undefined2 *)(param_1 + (ulonglong)uStack_18 * 2) = uVar1;
  }
  return;
}


/* address=142c3aff0 name=FUN_142c3aff0 */

void FUN_142c3aff0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x100; uStack_18 = uStack_18 + 1) {
    *(short *)(param_1 + (ulonglong)uStack_18 * 2) =
         *(short *)(param_2 + (ulonglong)uStack_18 * 2) +
         *(short *)(param_3 + (ulonglong)uStack_18 * 2);
  }
  return;
}


/* address=142c3b050 name=FUN_142c3b050 */

void FUN_142c3b050(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x100; uStack_18 = uStack_18 + 1) {
    *(short *)(param_1 + (ulonglong)uStack_18 * 2) =
         *(short *)(param_2 + (ulonglong)uStack_18 * 2) -
         *(short *)(param_3 + (ulonglong)uStack_18 * 2);
  }
  return;
}


/* address=142c3b0b0 name=FUN_142c3b0b0 */

void FUN_142c3b0b0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c3c730(param_1,param_2);
  return;
}


/* address=142c3b0e0 name=FUN_142c3b0e0 */

void FUN_142c3b0e0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c3c730(param_1,param_2);
  return;
}


/* address=142c3b110 name=FUN_142c3b110 */

void FUN_142c3b110(undefined *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined *puStackX_8;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  ulonglong uStack_28;
  ushort auStack_20 [4];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)&uStack_38;
  puStackX_8 = param_1;
  for (uStack_34 = 0; uStack_34 < 3; uStack_34 = uStack_34 + 1) {
    for (uStack_30 = 0; uStack_30 < 0x40; uStack_30 = uStack_30 + 1) {
      for (uStack_38 = 0; uStack_38 < 4; uStack_38 = uStack_38 + 1) {
        auStack_20[uStack_38] =
             *(ushort *)
              (param_2 + (ulonglong)uStack_34 * 0x200 + (ulonglong)(uStack_38 + uStack_30 * 4) * 2);
        auStack_20[uStack_38] =
             auStack_20[uStack_38] + ((short)auStack_20[uStack_38] >> 0xf & 0xd01U);
        uVar1 = ((ulonglong)auStack_20[uStack_38] * 0x400 + 0x681) * 0x13afb7;
        uStack_28 = uVar1 >> 0x20;
        auStack_20[uStack_38] = (ushort)(uVar1 >> 0x20) & 0x3ff;
      }
      *puStackX_8 = (undefined)auStack_20[0];
      puStackX_8[1] = (byte)(auStack_20[0] >> 8) | (char)auStack_20[1] << 2;
      puStackX_8[2] = (byte)((int)(uint)auStack_20[1] >> 6) | (char)auStack_20[2] << 4;
      puStackX_8[3] = (byte)((int)(uint)auStack_20[2] >> 4) | (char)auStack_20[3] << 6;
      puStackX_8[4] = (char)((int)(uint)auStack_20[3] >> 2);
      puStackX_8 = puStackX_8 + 5;
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)&uStack_38);
  return;
}


/* address=142c3b350 name=FUN_142c3b350 */

void FUN_142c3b350(longlong param_1,ushort *param_2)

{
  ushort *puStackX_10;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  ushort auStack_18 [4];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)&uStack_28;
  puStackX_10 = param_2;
  for (uStack_24 = 0; uStack_24 < 3; uStack_24 = uStack_24 + 1) {
    for (uStack_20 = 0; uStack_20 < 0x40; uStack_20 = uStack_20 + 1) {
      auStack_18[0] = *puStackX_10;
      auStack_18[1] =
           (ushort)((int)(uint)*(byte *)((longlong)puStackX_10 + 1) >> 2) |
           (ushort)*(byte *)(puStackX_10 + 1) << 6;
      auStack_18[2] =
           (ushort)((int)(uint)*(byte *)(puStackX_10 + 1) >> 4) |
           (ushort)*(byte *)((longlong)puStackX_10 + 3) << 4;
      auStack_18[3] =
           (ushort)((int)(uint)*(byte *)((longlong)puStackX_10 + 3) >> 6) |
           (ushort)*(byte *)(puStackX_10 + 2) << 2;
      puStackX_10 = (ushort *)((longlong)puStackX_10 + 5);
      for (uStack_28 = 0; uStack_28 < 4; uStack_28 = uStack_28 + 1) {
        *(short *)(param_1 + (ulonglong)uStack_24 * 0x200 +
                  (ulonglong)(uStack_28 + uStack_20 * 4) * 2) =
             (short)((auStack_18[uStack_28] & 0x3ff) * 0xd01 + 0x200 >> 10);
      }
    }
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)&uStack_28);
  return;
}


/* address=142c3b520 name=FUN_142c3b520 */

void FUN_142c3b520(longlong param_1,longlong param_2)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 3; uStack_18 = uStack_18 + 1) {
    FUN_142c3a960(param_1 + (ulonglong)(uStack_18 * 0x180),param_2 + (ulonglong)uStack_18 * 0x200);
  }
  return;
}


/* address=142c3b590 name=FUN_142c3b590 */

void FUN_142c3b590(longlong param_1,longlong param_2)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 3; uStack_18 = uStack_18 + 1) {
    FUN_142c3aa50(param_1 + (ulonglong)uStack_18 * 0x200,param_2 + (ulonglong)(uStack_18 * 0x180));
  }
  return;
}


/* address=142c3b600 name=FUN_142c3b600 */

void FUN_142c3b600(longlong param_1)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 3; uStack_18 = uStack_18 + 1) {
    FUN_142c3ad90(param_1 + (ulonglong)uStack_18 * 0x200);
  }
  return;
}


/* address=142c3b650 name=FUN_142c3b650 */

void FUN_142c3b650(longlong param_1)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 3; uStack_18 = uStack_18 + 1) {
    FUN_142c3adc0(param_1 + (ulonglong)uStack_18 * 0x200);
  }
  return;
}


/* address=142c3b6a0 name=FUN_142c3b6a0 */

void FUN_142c3b6a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined auStack_248 [32];
  uint uStack_228;
  undefined auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_248;
  FUN_142c3adf0(param_1,param_2,param_3);
  for (uStack_228 = 1; uStack_228 < 3; uStack_228 = uStack_228 + 1) {
    FUN_142c3adf0(auStack_218,param_2 + (ulonglong)uStack_228 * 0x200,
                  param_3 + (ulonglong)uStack_228 * 0x200);
    FUN_142c3aff0(param_1,param_1,auStack_218);
  }
  FUN_142c3af90(param_1);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_248);
  return;
}


/* address=142c3b7b0 name=FUN_142c3b7b0 */

void FUN_142c3b7b0(longlong param_1)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 3; uStack_18 = uStack_18 + 1) {
    FUN_142c3af90(param_1 + (ulonglong)uStack_18 * 0x200);
  }
  return;
}


/* address=142c3b800 name=FUN_142c3b800 */

void FUN_142c3b800(longlong param_1,longlong param_2,longlong param_3)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 3; uStack_18 = uStack_18 + 1) {
    FUN_142c3aff0(param_1 + (ulonglong)uStack_18 * 0x200,param_2 + (ulonglong)uStack_18 * 0x200,
                  param_3 + (ulonglong)uStack_18 * 0x200);
  }
  return;
}


/* address=142c3b8a0 name=FUN_142c3b8a0 */

void FUN_142c3b8a0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined auStack_328 [32];
  uint uStack_308;
  uint uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  undefined auStack_2e8 [208];
  undefined auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_328;
  for (uStack_308 = 0; uStack_308 < 3; uStack_308 = uStack_308 + 1) {
    for (uStack_304 = 0; uStack_304 < 3; uStack_304 = uStack_304 + 1) {
      if (param_3 == 0) {
        FUN_142c3c580(auStack_2e8,param_2,(undefined)uStack_304,(undefined)uStack_308);
      }
      else {
        FUN_142c3c580(auStack_2e8,param_2,(undefined)uStack_308,(undefined)uStack_304);
      }
      FUN_142c3c100(auStack_218,3,auStack_2e8);
      uStack_2fc = 0x1f8;
      for (uStack_2f8 = FUN_142c3cad0(param_1 + (ulonglong)uStack_308 * 0x600 +
                                      (ulonglong)uStack_304 * 0x200,0x100,auStack_218,0x1f8);
          uStack_2f8 < 0x100; uStack_2f8 = uStack_2f8 + iVar1) {
        uStack_2f4 = uStack_2fc % 3;
        for (uStack_300 = 0; uStack_300 < uStack_2f4; uStack_300 = uStack_300 + 1) {
          auStack_218[uStack_300] = auStack_218[(uStack_2fc - uStack_2f4) + uStack_300];
        }
        FUN_142c3c100(auStack_218 + uStack_2f4,1,auStack_2e8);
        uStack_2fc = uStack_2f4 + 0xa8;
        iVar1 = FUN_142c3cad0(param_1 + (ulonglong)uStack_308 * 0x600 +
                              (ulonglong)uStack_304 * 0x200 + (ulonglong)uStack_2f8 * 2,
                              0x100 - uStack_2f8,auStack_218,uStack_2fc);
      }
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_328);
  return;
}


/* address=142c3bad0 name=FUN_142c3bad0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142c3bad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_2498 [32];
  char cStack_2478;
  uint uStack_2474;
  char cStack_2470;
  char cStack_246f;
  undefined *puStack_2468;
  undefined *puStack_2460;
  undefined auStack_2458 [1536];
  undefined auStack_1e58 [1536];
  undefined auStack_1858 [1536];
  undefined auStack_1258 [4608];
  undefined auStack_58 [32];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x142c3bae9;
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_2498;
  puStack_2460 = auStack_58;
  puStack_2468 = auStack_38;
  cStack_2478 = '\0';
  FUN_142cbd3c0(auStack_58,param_3,0x20);
  FUN_142c3c4c0(auStack_58,auStack_58,0x20);
  FUN_142c3b8a0(auStack_1258,puStack_2460,0);
  for (uStack_2474 = 0; uStack_2474 < 3; uStack_2474 = uStack_2474 + 1) {
    cStack_2470 = cStack_2478;
    FUN_142c3ac90(auStack_1e58 + (ulonglong)uStack_2474 * 0x200,puStack_2468,cStack_2478);
    cStack_2478 = cStack_2478 + '\x01';
  }
  for (uStack_2474 = 0; uStack_2474 < 3; uStack_2474 = uStack_2474 + 1) {
    cStack_246f = cStack_2478;
    FUN_142c3ac90(auStack_1858 + (ulonglong)uStack_2474 * 0x200,puStack_2468,cStack_2478);
    cStack_2478 = cStack_2478 + '\x01';
  }
  FUN_142c3b600(auStack_1e58);
  FUN_142c3b600(auStack_1858);
  for (uStack_2474 = 0; uStack_2474 < 3; uStack_2474 = uStack_2474 + 1) {
    FUN_142c3b6a0(auStack_2458 + (ulonglong)uStack_2474 * 0x200,
                  auStack_1258 + (ulonglong)uStack_2474 * 0x600,auStack_1e58);
    FUN_142c3af20(auStack_2458 + (ulonglong)uStack_2474 * 0x200);
  }
  FUN_142c3b800(auStack_2458,auStack_2458,auStack_1858);
  FUN_142c3b7b0(auStack_2458);
  FUN_142c3c9d0(param_2,auStack_1e58);
  FUN_142c3c860(param_1,auStack_2458,puStack_2460);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_2498);
  return;
}


/* address=142c3bd10 name=FUN_142c3bd10 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142c3bd10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined auStack_3068 [32];
  char cStack_3048;
  uint uStack_3044;
  char cStack_3040;
  char cStack_303f;
  char cStack_303e;
  undefined auStack_3038 [512];
  undefined auStack_2e38 [512];
  undefined auStack_2c38 [512];
  undefined auStack_2a38 [1536];
  undefined auStack_2438 [1536];
  undefined auStack_1e38 [1536];
  undefined auStack_1838 [1536];
  undefined auStack_1238 [4608];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x142c3bd2e;
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_3068;
  cStack_3048 = '\0';
  iVar1 = FUN_142c3c8e0(auStack_1e38,auStack_38,param_3);
  if (iVar1 != 0) {
    FUN_142c3ab10(auStack_2c38,param_2);
    FUN_142c3b8a0(auStack_1238,auStack_38,1);
    for (uStack_3044 = 0; uStack_3044 < 3; uStack_3044 = uStack_3044 + 1) {
      cStack_3040 = cStack_3048;
      FUN_142c3ac90(auStack_2438 + (ulonglong)uStack_3044 * 0x200,param_4,cStack_3048);
      cStack_3048 = cStack_3048 + '\x01';
    }
    for (uStack_3044 = 0; uStack_3044 < 3; uStack_3044 = uStack_3044 + 1) {
      cStack_303f = cStack_3048;
      FUN_142c3ad10(auStack_1838 + (ulonglong)uStack_3044 * 0x200,param_4,cStack_3048);
      cStack_3048 = cStack_3048 + '\x01';
    }
    cStack_303e = cStack_3048;
    FUN_142c3ad10(auStack_2e38,param_4,cStack_3048);
    cStack_3048 = cStack_3048 + '\x01';
    FUN_142c3b600(auStack_2438);
    for (uStack_3044 = 0; uStack_3044 < 3; uStack_3044 = uStack_3044 + 1) {
      FUN_142c3b6a0(auStack_2a38 + (ulonglong)uStack_3044 * 0x200,
                    auStack_1238 + (ulonglong)uStack_3044 * 0x600,auStack_2438);
    }
    FUN_142c3b6a0(auStack_3038,auStack_1e38,auStack_2438);
    FUN_142c3b650(auStack_2a38);
    FUN_142c3adc0(auStack_3038);
    FUN_142c3b800(auStack_2a38,auStack_2a38,auStack_1838);
    FUN_142c3aff0(auStack_3038,auStack_3038,auStack_2e38);
    FUN_142c3aff0(auStack_3038,auStack_3038,auStack_2c38);
    FUN_142c3b7b0(auStack_2a38);
    FUN_142c3af90(auStack_3038);
    FUN_142c3ca30(param_1,auStack_2a38,auStack_3038);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_3068);
  return;
}


/* address=142c3bfc0 name=FUN_142c3bfc0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142c3bfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_1038 [32];
  undefined auStack_1018 [512];
  undefined auStack_e18 [512];
  undefined auStack_c18 [1536];
  undefined auStack_618 [1536];
  ulonglong uStack_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x142c3bfd9;
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_1038;
  FUN_142c3ca80(auStack_c18,auStack_e18,param_2);
  FUN_142c3ca00(auStack_618,param_3);
  FUN_142c3b600(auStack_c18);
  FUN_142c3b6a0(auStack_1018,auStack_618,auStack_c18);
  FUN_142c3adc0(auStack_1018);
  FUN_142c3b050(auStack_1018,auStack_e18,auStack_1018);
  FUN_142c3af90(auStack_1018);
  FUN_142c3abb0(param_1,auStack_1018);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_1038);
  return;
}


/* address=142c3c0b0 name=FUN_142c3c0b0 */

void FUN_142c3c0b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c3eb30(param_1,0xa8,param_2,param_3,0x1f);
  *(undefined4 *)(param_1 + 200) = 0xa8;
  return;
}


/* address=142c3c100 name=FUN_142c3c100 */

void FUN_142c3c100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c3edf0(param_1,param_2,param_3,0xa8);
  return;
}


/* address=142c3c140 name=FUN_142c3c140 */

void FUN_142c3c140(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_142c3e740(param_1,param_2,param_3,*(undefined4 *)(param_3 + 200),0x88);
  *(undefined4 *)(param_3 + 200) = uVar1;
  return;
}


/* address=142c3c1a0 name=FUN_142c3c1a0 */

void FUN_142c3c1a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c3eb30(param_1,0x88,param_2,param_3,0x1f);
  *(undefined4 *)(param_1 + 200) = 0x88;
  return;
}


/* address=142c3c1f0 name=FUN_142c3c1f0 */

void FUN_142c3c1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c3edf0(param_1,param_2,param_3,0x88);
  return;
}


/* address=142c3c230 name=FUN_142c3c230 */

void FUN_142c3c230(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_142c3e850(param_1,*(undefined4 *)(param_1 + 200),0x88,param_2,param_3);
  *(undefined4 *)(param_1 + 200) = uVar1;
  return;
}


/* address=142c3c290 name=FUN_142c3c290 */

void FUN_142c3c290(longlong param_1)

{
  FUN_142c3ea50(param_1,*(undefined4 *)(param_1 + 200),0x88,0x1f);
  *(undefined4 *)(param_1 + 200) = 0x88;
  return;
}


/* address=142c3c2e0 name=FUN_142c3c2e0 */

void FUN_142c3c2e0(longlong param_1)

{
  FUN_142c3eea0(param_1);
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}


/* address=142c3c310 name=FUN_142c3c310 */

void FUN_142c3c310(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_118 [32];
  ulonglong uStack_f8;
  undefined auStack_e8 [208];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  FUN_142c3c1a0(auStack_e8,param_3,param_4);
  uStack_f8 = param_2 / 0x88;
  FUN_142c3c1f0(param_1,uStack_f8,auStack_e8);
  FUN_142c3c140(param_1 + uStack_f8 * 0x88,param_2 + uStack_f8 * -0x88,auStack_e8);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=142c3c400 name=FUN_142c3c400 */

void FUN_142c3c400(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_128 [32];
  undefined uStack_108;
  uint uStack_f8;
  undefined8 auStack_e8 [26];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_128;
  uStack_108 = 6;
  FUN_142c3eb30(auStack_e8,0x88,param_2,param_3);
  FUN_142c3cca0(auStack_e8);
  for (uStack_f8 = 0; uStack_f8 < 4; uStack_f8 = uStack_f8 + 1) {
    FUN_142c3cc50(param_1 + (ulonglong)(uStack_f8 << 3),auStack_e8[uStack_f8]);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=142c3c4c0 name=FUN_142c3c4c0 */

void FUN_142c3c4c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_128 [32];
  undefined uStack_108;
  uint uStack_f8;
  undefined8 auStack_e8 [26];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_128;
  uStack_108 = 6;
  FUN_142c3eb30(auStack_e8,0x48,param_2,param_3);
  FUN_142c3cca0(auStack_e8);
  for (uStack_f8 = 0; uStack_f8 < 8; uStack_f8 = uStack_f8 + 1) {
    FUN_142c3cc50(param_1 + (ulonglong)(uStack_f8 << 3),auStack_e8[uStack_f8]);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=142c3c580 name=FUN_142c3c580 */

void FUN_142c3c580(undefined8 param_1,undefined8 param_2,undefined param_3,undefined param_4)

{
  undefined auStack_58 [32];
  undefined auStack_38 [32];
  undefined uStack_18;
  undefined uStack_17;
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  FUN_142cbd3c0(auStack_38,param_2,0x20);
  uStack_18 = param_3;
  uStack_17 = param_4;
  FUN_142c3c0b0(param_1,auStack_38,0x22);
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c3c610 name=FUN_142c3c610 */

void FUN_142c3c610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined param_4)

{
  undefined auStack_58 [32];
  undefined auStack_38 [32];
  undefined uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  FUN_142cbd3c0(auStack_38,param_3,0x20);
  uStack_18 = param_4;
  FUN_142c3c310(param_1,param_2,auStack_38,0x21);
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c3c6a0 name=FUN_142c3c6a0 */

undefined4 FUN_142c3c6a0(undefined4 *param_1)

{
  return *param_1;
}


/* address=142c3c730 name=FUN_142c3c730 */

void FUN_142c3c730(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uStack_20;
  uint uStack_1c;
  
  for (uStack_1c = 0; uStack_1c < 0x20; uStack_1c = uStack_1c + 1) {
    uVar1 = FUN_142c3c6a0(param_2 + (ulonglong)(uStack_1c << 2));
    uVar1 = (uVar1 & 0x55555555) + (uVar1 >> 1 & 0x55555555);
    for (uStack_20 = 0; uStack_20 < 8; uStack_20 = uStack_20 + 1) {
      *(ushort *)(param_1 + (ulonglong)(uStack_20 + uStack_1c * 8) * 2) =
           ((ushort)(uVar1 >> ((byte)(uStack_20 << 2) & 0x1f)) & 3) -
           ((ushort)(uVar1 >> ((char)uStack_20 * '\x04' + 2U & 0x1f)) & 3);
    }
  }
  return;
}


/* address=142c3c830 name=FUN_142c3c830 */

void FUN_142c3c830(short param_1,short param_2)

{
  FUN_142c3a1d0((int)param_1 * (int)param_2);
  return;
}


/* address=142c3c860 name=FUN_142c3c860 */

void FUN_142c3c860(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uStack_18;
  
  FUN_142c3b520(param_1,param_2);
  for (uStack_18 = 0; uStack_18 < 0x20; uStack_18 = uStack_18 + 1) {
    *(undefined *)(param_1 + uStack_18 + 0x480) = *(undefined *)(param_3 + uStack_18);
  }
  return;
}


/* address=142c3c8e0 name=FUN_142c3c8e0 */

void FUN_142c3c8e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined auStack_4c8 [32];
  ulonglong uStack_4a8;
  undefined auStack_498 [1152];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_4c8;
  FUN_142c3b590(param_1,param_3);
  FUN_142c3b520(auStack_498,param_1);
  iVar1 = FUN_142c3a090(auStack_498,param_3,0x480);
  if (iVar1 == 0) {
    for (uStack_4a8 = 0; uStack_4a8 < 0x20; uStack_4a8 = uStack_4a8 + 1) {
      *(undefined *)(param_2 + uStack_4a8) = *(undefined *)(param_3 + uStack_4a8 + 0x480);
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_4c8);
  return;
}


/* address=142c3c9d0 name=FUN_142c3c9d0 */

void FUN_142c3c9d0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c3b520(param_1,param_2);
  return;
}


/* address=142c3ca00 name=FUN_142c3ca00 */

void FUN_142c3ca00(undefined8 param_1,undefined8 param_2)

{
  FUN_142c3b590(param_1,param_2);
  return;
}


/* address=142c3ca30 name=FUN_142c3ca30 */

void FUN_142c3ca30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c3b110(param_1,param_2);
  FUN_142c3a6f0(param_1 + 0x3c0,param_3);
  return;
}


/* address=142c3ca80 name=FUN_142c3ca80 */

void FUN_142c3ca80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_142c3b350(param_1,param_3);
  FUN_142c3a8b0(param_2,param_3 + 0x3c0);
  return;
}


/* address=142c3cad0 name=FUN_142c3cad0 */

uint FUN_142c3cad0(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = 0;
  uStack_10 = 0;
  while ((uStack_10 < param_2 && (uStack_c + 3 <= param_4))) {
    uVar2 = CONCAT11(*(undefined *)(param_3 + (ulonglong)(uStack_c + 1)),
                     *(undefined *)(param_3 + (ulonglong)uStack_c)) & 0xfff;
    uVar1 = (ushort)((int)(uint)*(byte *)(param_3 + (ulonglong)(uStack_c + 1)) >> 4) |
            (ushort)*(byte *)(param_3 + (ulonglong)(uStack_c + 2)) << 4;
    uStack_c = uStack_c + 3;
    if (uVar2 < 0xd01) {
      *(ushort *)(param_1 + (ulonglong)uStack_10 * 2) = uVar2;
      uStack_10 = uStack_10 + 1;
    }
    if ((uStack_10 < param_2) && (uVar1 < 0xd01)) {
      *(ushort *)(param_1 + (ulonglong)uStack_10 * 2) = uVar1;
      uStack_10 = uStack_10 + 1;
    }
  }
  return uStack_10;
}


/* address=142c3cbf0 name=FUN_142c3cbf0 */

ulonglong FUN_142c3cbf0(longlong param_1)

{
  uint uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = 0;
  for (uStack_18 = 0; uStack_18 < 8; uStack_18 = uStack_18 + 1) {
    uStack_10 = uStack_10 |
                (ulonglong)*(byte *)(param_1 + (ulonglong)uStack_18) <<
                ((byte)(uStack_18 << 3) & 0x3f);
  }
  return uStack_10;
}


/* address=142c3cc50 name=FUN_142c3cc50 */

void FUN_142c3cc50(longlong param_1,ulonglong param_2)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 8; uStack_18 = uStack_18 + 1) {
    *(char *)(param_1 + (ulonglong)uStack_18) = (char)(param_2 >> ((byte)(uStack_18 << 3) & 0x3f));
  }
  return;
}


/* address=142c3cca0 name=FUN_142c3cca0 */

void FUN_142c3cca0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int iStack_1d0;
  ulonglong uStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  
  uStack_1a0 = *param_1;
  uStack_198 = param_1[1];
  uStack_190 = param_1[2];
  uStack_188 = param_1[3];
  uStack_180 = param_1[4];
  uStack_178 = param_1[5];
  uStack_170 = param_1[6];
  uStack_168 = param_1[7];
  uStack_160 = param_1[8];
  uStack_158 = param_1[9];
  uStack_150 = param_1[10];
  uStack_148 = param_1[0xb];
  uStack_140 = param_1[0xc];
  uStack_138 = param_1[0xd];
  uStack_130 = param_1[0xe];
  uStack_128 = param_1[0xf];
  uStack_120 = param_1[0x10];
  uStack_118 = param_1[0x11];
  uStack_110 = param_1[0x12];
  uStack_108 = param_1[0x13];
  uStack_100 = param_1[0x14];
  uStack_f8 = param_1[0x15];
  uStack_f0 = param_1[0x16];
  uStack_e8 = param_1[0x17];
  uStack_e0 = param_1[0x18];
  for (iStack_1d0 = 0; iStack_1d0 < 0x18; iStack_1d0 = iStack_1d0 + 2) {
    uVar1 = uStack_1a0 ^ uStack_178 ^ uStack_150 ^ uStack_128 ^ uStack_100;
    uVar2 = uStack_198 ^ uStack_170 ^ uStack_148 ^ uStack_120 ^ uStack_f8;
    uVar3 = uStack_190 ^ uStack_168 ^ uStack_140 ^ uStack_118 ^ uStack_f0;
    uVar4 = uStack_188 ^ uStack_160 ^ uStack_138 ^ uStack_110 ^ uStack_e8;
    uVar5 = uStack_180 ^ uStack_158 ^ uStack_130 ^ uStack_108 ^ uStack_e0;
    uVar19 = uVar5 ^ uVar2 << 1 ^ uVar2 >> 0x3f;
    uVar20 = uVar1 ^ uVar3 << 1 ^ uVar3 >> 0x3f;
    uVar2 = uVar2 ^ uVar4 << 1 ^ uVar4 >> 0x3f;
    uVar3 = uVar3 ^ uVar5 << 1 ^ uVar5 >> 0x3f;
    uVar4 = uVar4 ^ uVar1 << 1 ^ uVar1 >> 0x3f;
    uStack_1a0 = uStack_1a0 ^ uVar19;
    uVar1 = (uStack_170 ^ uVar20) << 0x2c ^ (uStack_170 ^ uVar20) >> 0x14;
    uVar5 = (uStack_140 ^ uVar2) << 0x2b ^ (uStack_140 ^ uVar2) >> 0x15;
    uVar6 = (uStack_110 ^ uVar3) << 0x15 ^ (uStack_110 ^ uVar3) >> 0x2b;
    uVar7 = (uStack_e0 ^ uVar4) << 0xe ^ (uStack_e0 ^ uVar4) >> 0x32;
    uVar21 = uStack_1a0 ^ ~uVar1 & uVar5 ^ *(ulonglong *)(&DAT_1432a1740 + (longlong)iStack_1d0 * 8)
    ;
    uVar22 = uVar1 ^ ~uVar5 & uVar6;
    uVar5 = uVar5 ^ ~uVar6 & uVar7;
    uVar6 = uVar6 ^ ~uVar7 & uStack_1a0;
    uVar7 = uVar7 ^ ~uStack_1a0 & uVar1;
    uVar1 = (uStack_188 ^ uVar3) << 0x1c ^ (uStack_188 ^ uVar3) >> 0x24;
    uVar8 = (uStack_158 ^ uVar4) << 0x14 ^ (uStack_158 ^ uVar4) >> 0x2c;
    uVar9 = (uStack_150 ^ uVar19) << 3 ^ (uStack_150 ^ uVar19) >> 0x3d;
    uVar10 = (uStack_120 ^ uVar20) << 0x2d ^ (uStack_120 ^ uVar20) >> 0x13;
    uVar11 = (uStack_f0 ^ uVar2) << 0x3d ^ (uStack_f0 ^ uVar2) >> 3;
    uVar23 = uVar1 ^ ~uVar8 & uVar9;
    uVar24 = uVar8 ^ ~uVar9 & uVar10;
    uVar9 = uVar9 ^ ~uVar10 & uVar11;
    uVar10 = uVar10 ^ ~uVar11 & uVar1;
    uVar11 = uVar11 ^ ~uVar1 & uVar8;
    uVar1 = (uStack_198 ^ uVar20) << 1 ^ (uStack_198 ^ uVar20) >> 0x3f;
    uVar8 = (uStack_168 ^ uVar2) << 6 ^ (uStack_168 ^ uVar2) >> 0x3a;
    uVar12 = (uStack_138 ^ uVar3) << 0x19 ^ (uStack_138 ^ uVar3) >> 0x27;
    uVar13 = (uStack_108 ^ uVar4) << 8 ^ (uStack_108 ^ uVar4) >> 0x38;
    uVar14 = (uStack_100 ^ uVar19) << 0x12 ^ (uStack_100 ^ uVar19) >> 0x2e;
    uVar25 = uVar1 ^ ~uVar8 & uVar12;
    uVar26 = uVar8 ^ ~uVar12 & uVar13;
    uVar12 = uVar12 ^ ~uVar13 & uVar14;
    uVar13 = uVar13 ^ ~uVar14 & uVar1;
    uVar14 = uVar14 ^ ~uVar1 & uVar8;
    uVar1 = (uStack_180 ^ uVar4) << 0x1b ^ (uStack_180 ^ uVar4) >> 0x25;
    uVar8 = (uStack_178 ^ uVar19) << 0x24 ^ (uStack_178 ^ uVar19) >> 0x1c;
    uVar15 = (uStack_148 ^ uVar20) << 10 ^ (uStack_148 ^ uVar20) >> 0x36;
    uVar16 = (uStack_118 ^ uVar2) << 0xf ^ (uStack_118 ^ uVar2) >> 0x31;
    uVar17 = (uStack_e8 ^ uVar3) << 0x38 ^ (uStack_e8 ^ uVar3) >> 8;
    uVar27 = uVar1 ^ ~uVar8 & uVar15;
    uVar28 = uVar8 ^ ~uVar15 & uVar16;
    uVar15 = uVar15 ^ ~uVar16 & uVar17;
    uVar16 = uVar16 ^ ~uVar17 & uVar1;
    uVar17 = uVar17 ^ ~uVar1 & uVar8;
    uVar1 = (uStack_190 ^ uVar2) << 0x3e ^ (uStack_190 ^ uVar2) >> 2;
    uVar2 = (uStack_160 ^ uVar3) << 0x37 ^ (uStack_160 ^ uVar3) >> 9;
    uVar3 = (uStack_130 ^ uVar4) << 0x27 ^ (uStack_130 ^ uVar4) >> 0x19;
    uVar4 = (uStack_128 ^ uVar19) << 0x29 ^ (uStack_128 ^ uVar19) >> 0x17;
    uVar8 = (uStack_f8 ^ uVar20) << 2 ^ (uStack_f8 ^ uVar20) >> 0x3e;
    uVar29 = uVar1 ^ ~uVar2 & uVar3;
    uVar30 = uVar2 ^ ~uVar3 & uVar4;
    uVar3 = uVar3 ^ ~uVar4 & uVar8;
    uVar4 = uVar4 ^ ~uVar8 & uVar1;
    uVar8 = uVar8 ^ ~uVar1 & uVar2;
    uVar1 = uVar21 ^ uVar23 ^ uVar25 ^ uVar27 ^ uVar29;
    uVar2 = uVar22 ^ uVar24 ^ uVar26 ^ uVar28 ^ uVar30;
    uVar19 = uVar5 ^ uVar9 ^ uVar12 ^ uVar15 ^ uVar3;
    uVar20 = uVar6 ^ uVar10 ^ uVar13 ^ uVar16 ^ uVar4;
    uVar18 = uVar7 ^ uVar11 ^ uVar14 ^ uVar17 ^ uVar8;
    uVar31 = uVar18 ^ uVar2 << 1 ^ uVar2 >> 0x3f;
    uVar32 = uVar1 ^ uVar19 << 1 ^ uVar19 >> 0x3f;
    uVar2 = uVar2 ^ uVar20 << 1 ^ uVar20 >> 0x3f;
    uVar19 = uVar19 ^ uVar18 << 1 ^ uVar18 >> 0x3f;
    uVar20 = uVar20 ^ uVar1 << 1 ^ uVar1 >> 0x3f;
    uVar21 = uVar21 ^ uVar31;
    uVar24 = uVar24 ^ uVar32;
    uVar1 = uVar24 << 0x2c ^ uVar24 >> 0x14;
    uVar12 = uVar12 ^ uVar2;
    uStack_190 = uVar12 << 0x2b ^ uVar12 >> 0x15;
    uVar16 = uVar16 ^ uVar19;
    uStack_188 = uVar16 << 0x15 ^ uVar16 >> 0x2b;
    uVar8 = uVar8 ^ uVar20;
    uStack_180 = uVar8 << 0xe ^ uVar8 >> 0x32;
    uStack_1a0 = uVar21 ^ ~uVar1 & uStack_190 ^
                 *(ulonglong *)(&DAT_1432a1740 + (longlong)(iStack_1d0 + 1) * 8);
    uStack_198 = uVar1 ^ ~uStack_190 & uStack_188;
    uStack_190 = uStack_190 ^ ~uStack_188 & uStack_180;
    uStack_188 = uStack_188 ^ ~uStack_180 & uVar21;
    uStack_180 = uStack_180 ^ ~uVar21 & uVar1;
    uVar6 = uVar6 ^ uVar19;
    uVar1 = uVar6 << 0x1c ^ uVar6 >> 0x24;
    uVar11 = uVar11 ^ uVar20;
    uVar6 = uVar11 << 0x14 ^ uVar11 >> 0x2c;
    uVar25 = uVar25 ^ uVar31;
    uStack_168 = uVar25 << 3 ^ uVar25 >> 0x3d;
    uVar28 = uVar28 ^ uVar32;
    uStack_160 = uVar28 << 0x2d ^ uVar28 >> 0x13;
    uVar3 = uVar3 ^ uVar2;
    uStack_158 = uVar3 << 0x3d ^ uVar3 >> 3;
    uStack_178 = uVar1 ^ ~uVar6 & uStack_168;
    uStack_170 = uVar6 ^ ~uStack_168 & uStack_160;
    uStack_168 = uStack_168 ^ ~uStack_160 & uStack_158;
    uStack_160 = uStack_160 ^ ~uStack_158 & uVar1;
    uStack_158 = uStack_158 ^ ~uVar1 & uVar6;
    uVar22 = uVar22 ^ uVar32;
    uVar1 = uVar22 << 1 ^ uVar22 >> 0x3f;
    uVar9 = uVar9 ^ uVar2;
    uVar3 = uVar9 << 6 ^ uVar9 >> 0x3a;
    uVar13 = uVar13 ^ uVar19;
    uStack_140 = uVar13 << 0x19 ^ uVar13 >> 0x27;
    uVar17 = uVar17 ^ uVar20;
    uStack_138 = uVar17 << 8 ^ uVar17 >> 0x38;
    uVar29 = uVar29 ^ uVar31;
    uStack_130 = uVar29 << 0x12 ^ uVar29 >> 0x2e;
    uStack_150 = uVar1 ^ ~uVar3 & uStack_140;
    uStack_148 = uVar3 ^ ~uStack_140 & uStack_138;
    uStack_140 = uStack_140 ^ ~uStack_138 & uStack_130;
    uStack_138 = uStack_138 ^ ~uStack_130 & uVar1;
    uStack_130 = uStack_130 ^ ~uVar1 & uVar3;
    uVar7 = uVar7 ^ uVar20;
    uVar1 = uVar7 << 0x1b ^ uVar7 >> 0x25;
    uVar23 = uVar23 ^ uVar31;
    uVar3 = uVar23 << 0x24 ^ uVar23 >> 0x1c;
    uVar26 = uVar26 ^ uVar32;
    uStack_118 = uVar26 << 10 ^ uVar26 >> 0x36;
    uVar15 = uVar15 ^ uVar2;
    uStack_110 = uVar15 << 0xf ^ uVar15 >> 0x31;
    uVar4 = uVar4 ^ uVar19;
    uStack_108 = uVar4 << 0x38 ^ uVar4 >> 8;
    uStack_128 = uVar1 ^ ~uVar3 & uStack_118;
    uStack_120 = uVar3 ^ ~uStack_118 & uStack_110;
    uStack_118 = uStack_118 ^ ~uStack_110 & uStack_108;
    uStack_110 = uStack_110 ^ ~uStack_108 & uVar1;
    uStack_108 = uStack_108 ^ ~uVar1 & uVar3;
    uVar5 = uVar5 ^ uVar2;
    uVar1 = uVar5 << 0x3e ^ uVar5 >> 2;
    uVar10 = uVar10 ^ uVar19;
    uVar2 = uVar10 << 0x37 ^ uVar10 >> 9;
    uVar14 = uVar14 ^ uVar20;
    uStack_f0 = uVar14 << 0x27 ^ uVar14 >> 0x19;
    uVar27 = uVar27 ^ uVar31;
    uStack_e8 = uVar27 << 0x29 ^ uVar27 >> 0x17;
    uVar30 = uVar30 ^ uVar32;
    uStack_e0 = uVar30 << 2 ^ uVar30 >> 0x3e;
    uStack_100 = uVar1 ^ ~uVar2 & uStack_f0;
    uStack_f8 = uVar2 ^ ~uStack_f0 & uStack_e8;
    uStack_f0 = uStack_f0 ^ ~uStack_e8 & uStack_e0;
    uStack_e8 = uStack_e8 ^ ~uStack_e0 & uVar1;
    uStack_e0 = uStack_e0 ^ ~uVar1 & uVar2;
  }
  *param_1 = uStack_1a0;
  param_1[1] = uStack_198;
  param_1[2] = uStack_190;
  param_1[3] = uStack_188;
  param_1[4] = uStack_180;
  param_1[5] = uStack_178;
  param_1[6] = uStack_170;
  param_1[7] = uStack_168;
  param_1[8] = uStack_160;
  param_1[9] = uStack_158;
  param_1[10] = uStack_150;
  param_1[0xb] = uStack_148;
  param_1[0xc] = uStack_140;
  param_1[0xd] = uStack_138;
  param_1[0xe] = uStack_130;
  param_1[0xf] = uStack_128;
  param_1[0x10] = uStack_120;
  param_1[0x11] = uStack_118;
  param_1[0x12] = uStack_110;
  param_1[0x13] = uStack_108;
  param_1[0x14] = uStack_100;
  param_1[0x15] = uStack_f8;
  param_1[0x16] = uStack_f0;
  param_1[0x17] = uStack_e8;
  param_1[0x18] = uStack_e0;
  return;
}


/* address=142c3e740 name=FUN_142c3e740 */

uint FUN_142c3e740(undefined *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined *puStackX_8;
  longlong lStackX_10;
  uint uStackX_20;
  uint uStack_28;
  
  puStackX_8 = param_1;
  uStackX_20 = param_4;
  for (lStackX_10 = param_2; lStackX_10 != 0; lStackX_10 = lStackX_10 - (ulonglong)uVar1) {
    if (uStackX_20 == param_5) {
      FUN_142c3cca0(param_3);
      uStackX_20 = 0;
    }
    for (uStack_28 = uStackX_20;
        (uStack_28 < param_5 && ((ulonglong)uStack_28 < (ulonglong)uStackX_20 + lStackX_10));
        uStack_28 = uStack_28 + 1) {
      *puStackX_8 = (char)(*(ulonglong *)(param_3 + ((ulonglong)uStack_28 / 8) * 8) >>
                          (sbyte)(uStack_28 % 8 << 3));
      puStackX_8 = puStackX_8 + 1;
    }
    uVar1 = uStack_28 - uStackX_20;
    uStackX_20 = uStack_28;
  }
  return uStackX_20;
}


/* address=142c3e850 name=FUN_142c3e850 */

uint FUN_142c3e850(longlong param_1,uint param_2,uint param_3,byte *param_4,longlong param_5)

{
  uint uStackX_10;
  byte *pbStackX_20;
  uint uStack_48;
  
  uStackX_10 = param_2;
  pbStackX_20 = param_4;
  while ((ulonglong)param_3 <= (ulonglong)uStackX_10 + param_5) {
    for (uStack_48 = uStackX_10; uStack_48 < param_3; uStack_48 = uStack_48 + 1) {
      *(ulonglong *)(param_1 + ((ulonglong)uStack_48 / 8) * 8) =
           *(ulonglong *)(param_1 + ((ulonglong)uStack_48 / 8) * 8) ^
           (ulonglong)*pbStackX_20 << (sbyte)(uStack_48 % 8 << 3);
      pbStackX_20 = pbStackX_20 + 1;
    }
    param_5 = param_5 - (ulonglong)(param_3 - uStackX_10);
    FUN_142c3cca0(param_1);
    uStackX_10 = 0;
  }
  for (uStack_48 = uStackX_10; (ulonglong)uStack_48 < (ulonglong)uStackX_10 + param_5;
      uStack_48 = uStack_48 + 1) {
    *(ulonglong *)(param_1 + ((ulonglong)uStack_48 / 8) * 8) =
         *(ulonglong *)(param_1 + ((ulonglong)uStack_48 / 8) * 8) ^
         (ulonglong)*pbStackX_20 << (sbyte)(uStack_48 % 8 << 3);
    pbStackX_20 = pbStackX_20 + 1;
  }
  return uStack_48;
}


/* address=142c3ea50 name=FUN_142c3ea50 */

void FUN_142c3ea50(longlong param_1,uint param_2,uint param_3,byte param_4)

{
  *(ulonglong *)(param_1 + ((ulonglong)param_2 / 8) * 8) =
       *(ulonglong *)(param_1 + ((ulonglong)param_2 / 8) * 8) ^
       (ulonglong)param_4 << (sbyte)(param_2 % 8 << 3);
  *(ulonglong *)(param_1 + (ulonglong)(param_3 / 8 - 1) * 8) =
       *(ulonglong *)(param_1 + (ulonglong)(param_3 / 8 - 1) * 8) ^ 0x8000000000000000;
  return;
}


/* address=142c3eb30 name=FUN_142c3eb30 */

void FUN_142c3eb30(longlong param_1,uint param_2,longlong param_3,ulonglong param_4,byte param_5)

{
  ulonglong uVar1;
  longlong lStackX_18;
  ulonglong uStackX_20;
  uint uStack_58;
  
  for (uStack_58 = 0; lStackX_18 = param_3, uStackX_20 = param_4, uStack_58 < 0x19;
      uStack_58 = uStack_58 + 1) {
    *(undefined8 *)(param_1 + (ulonglong)uStack_58 * 8) = 0;
  }
  while (param_2 <= uStackX_20) {
    for (uStack_58 = 0; uStack_58 < param_2 / 8; uStack_58 = uStack_58 + 1) {
      uVar1 = FUN_142c3cbf0(lStackX_18 + (ulonglong)(uStack_58 << 3));
      *(ulonglong *)(param_1 + (ulonglong)uStack_58 * 8) =
           *(ulonglong *)(param_1 + (ulonglong)uStack_58 * 8) ^ uVar1;
    }
    lStackX_18 = lStackX_18 + (ulonglong)param_2;
    uStackX_20 = uStackX_20 - param_2;
    FUN_142c3cca0(param_1);
  }
  for (uStack_58 = 0; uStack_58 < uStackX_20; uStack_58 = uStack_58 + 1) {
    *(ulonglong *)(param_1 + ((ulonglong)uStack_58 / 8) * 8) =
         *(ulonglong *)(param_1 + ((ulonglong)uStack_58 / 8) * 8) ^
         (ulonglong)*(byte *)(lStackX_18 + (ulonglong)uStack_58) << (sbyte)(uStack_58 % 8 << 3);
  }
  *(ulonglong *)(param_1 + ((ulonglong)uStack_58 / 8) * 8) =
       *(ulonglong *)(param_1 + ((ulonglong)uStack_58 / 8) * 8) ^
       (ulonglong)param_5 << (sbyte)(uStack_58 % 8 << 3);
  *(ulonglong *)(param_1 + ((ulonglong)(param_2 - 1) / 8) * 8) =
       *(ulonglong *)(param_1 + ((ulonglong)(param_2 - 1) / 8) * 8) ^ 0x8000000000000000;
  return;
}


/* address=142c3edf0 name=FUN_142c3edf0 */

void FUN_142c3edf0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lStackX_8;
  longlong lStackX_10;
  uint uStack_18;
  
  lStackX_8 = param_1;
  for (lStackX_10 = param_2; lStackX_10 != 0; lStackX_10 = lStackX_10 + -1) {
    FUN_142c3cca0(param_3);
    for (uStack_18 = 0; uStack_18 < param_4 / 8; uStack_18 = uStack_18 + 1) {
      FUN_142c3cc50(lStackX_8 + (ulonglong)(uStack_18 << 3));
    }
    lStackX_8 = lStackX_8 + (ulonglong)param_4;
  }
  return;
}


/* address=142c3eea0 name=FUN_142c3eea0 */

void FUN_142c3eea0(longlong param_1)

{
  uint uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x19; uStack_18 = uStack_18 + 1) {
    *(undefined8 *)(param_1 + (ulonglong)uStack_18 * 8) = 0;
  }
  return;
}


/* address=142c3eee0 name=FUN_142c3eee0 */

void FUN_142c3eee0(undefined8 param_1,undefined4 param_2)

{
  FUN_142c4aea0(param_1,6,0xffffffff,0x1001,param_2,0);
  return;
}


/* address=142c3ef30 name=FUN_142c3ef30 */

void FUN_142c3ef30(undefined8 param_1,undefined8 param_2)

{
  FUN_142c4aea0(param_1,6,0xffffffff,0x1002,0,param_2);
  return;
}


/* address=142c3ef80 name=FUN_142c3ef80 */

void FUN_142c3ef80(undefined8 param_1,undefined4 param_2)

{
  FUN_142c4aea0(param_1,6,0x18,0x1003,param_2,0);
  return;
}


/* address=142c3efd0 name=FUN_142c3efd0 */

void FUN_142c3efd0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c4aea0(param_1,6,0x18,0x1004,0,param_2);
  return;
}


/* address=142c3f160 name=FUN_142c3f160 */

void FUN_142c3f160(undefined8 param_1,undefined8 param_2)

{
  FUN_142c4aea0(param_1,6,0xf8,0x1009,0,param_2);
  return;
}


/* address=142c3f1b0 name=FUN_142c3f1b0 */

void FUN_142c3f1b0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c4aea0(param_1,6,0xf8,0x100a,0,param_2);
  return;
}


/* address=142c3f370 name=FUN_142c3f370 */

undefined8 FUN_142c3f370(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c3f3c0 name=FUN_142c3f3c0 */

undefined8 FUN_142c3f3c0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c3f400 name=FUN_142c3f400 */

bool FUN_142c3f400(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_142b0e970(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_142c3f3c0(puVar1,0,0x48);
    *puVar1 = 0x800;
    puVar1[4] = 1;
    puVar1[10] = 0xfffffffe;
    *(undefined4 **)(param_1 + 0x28) = puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}


/* address=142c3f630 name=FUN_142c3f630 */

undefined8 FUN_142c3f630(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    iVar1 = FUN_142b0fdf0(*(undefined8 *)(param_2 + 0x10));
    uVar2 = FUN_142b0e970((longlong)iVar1);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142c400f0 name=FUN_142c400f0 */

undefined8 FUN_142c400f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else if (param_2 == 3) {
    FUN_142afa690(6,0,0x73,s_D__a_1_s_target_release_build_bo_143cec6f0,0x179);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142c40150 name=FUN_142c40150 */

undefined8 FUN_142c40150(int param_1)

{
  undefined8 uVar1;
  
  if ((((param_1 == 1) || (param_1 == 3)) || (param_1 == 4)) || (param_1 == 6)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142c40720 name=FUN_142c40720 */

undefined4
FUN_142c40720(longlong param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar7;
  int iStack_30;
  undefined4 uStack_2c;
  longlong lStack_20;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    FUN_142afa690(4,0,0x90,s_D__a_1_s_target_release_build_bo_143ced060,0x17c);
    return 0;
  }
  iVar1 = FUN_142b62890(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_142b49170(param_1);
  lStack_20 = 0;
  uStack_2c = 0;
  if (param_4 < uVar2) {
    FUN_142afa690(4,0,0x87,s_D__a_1_s_target_release_build_bo_143ced0d0,CONCAT44(uVar7,0x18b));
    return 0;
  }
  lVar3 = FUN_142b1dae0();
  if (lVar3 != 0) {
    FUN_142b1dbe0(lVar3);
    lVar4 = FUN_142b1dc40(lVar3);
    lVar5 = FUN_142b1dc40(lVar3);
    lStack_20 = FUN_142b0e970(uVar2);
    if (((lVar4 != 0) && (lVar5 != 0)) && (lStack_20 != 0)) {
      if (param_7 == 1) {
        iStack_30 = FUN_142c419f0(lStack_20,uVar2,param_5,param_6);
      }
      else if (param_7 == 3) {
        iStack_30 = FUN_142b627f0(lStack_20,uVar2,param_5,param_6);
      }
      else {
        if (param_7 != 4) {
          FUN_142afa690(4,0,0x8f,s_D__a_1_s_target_release_build_bo_143ced140,CONCAT44(uVar7,0x1a9))
          ;
          goto LAB_142c40a8f;
        }
        uVar7 = 0;
        iStack_30 = FUN_142c40e40(lStack_20,uVar2,param_5,param_6,0,0,0,0);
      }
      if ((0 < iStack_30) && (lVar6 = FUN_142b1d660(lStack_20,uVar2,lVar4), lVar6 != 0)) {
        iVar1 = FUN_142b1f330(lVar4,*(undefined8 *)(param_1 + 8));
        if (iVar1 < 0) {
          iVar1 = FUN_142b34f90(param_1 + 0x60,param_1 + 0x58,*(undefined8 *)(param_1 + 8),lVar3);
          if (iVar1 != 0) {
            lVar6 = lVar3;
            iVar1 = FUN_142b23750(lVar5,lVar4,*(undefined8 *)(param_1 + 0x10),
                                  *(longlong *)(param_1 + 0x60) + 0x18,lVar3,
                                  *(undefined8 *)(param_1 + 0x60));
            uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
            if (iVar1 != 0) {
              iVar1 = FUN_142b1d9a0(param_3,uVar2,lVar5);
              if (iVar1 == 0) {
                FUN_142afa690(4,0,0x44,s_D__a_1_s_target_release_build_bo_143ced220,
                              CONCAT44(uVar7,0x1c3));
              }
              else {
                *param_2 = (ulonglong)uVar2;
                uStack_2c = 1;
              }
            }
          }
        }
        else {
          FUN_142afa690(4,0,0x73,s_D__a_1_s_target_release_build_bo_143ced1b0,CONCAT44(uVar7,0x1b7))
          ;
        }
      }
    }
  }
LAB_142c40a8f:
  if (lVar3 != 0) {
    FUN_142b1dd90(lVar3);
    FUN_142b1db50(lVar3);
  }
  FUN_142b0eaa0(lStack_20);
  return uStack_2c;
}


/* address=142c40ad0 name=FUN_142c40ad0 */

void FUN_142c40ad0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  if (*(longlong *)(*param_1 + 0x38) == 0) {
    FUN_142c41da0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


/* address=142c40e40 name=FUN_142c40e40 */

void FUN_142c40e40(undefined *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,longlong param_8)

{
  int iVar1;
  undefined auStack_c8 [32];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined *puStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  undefined4 uStack_70;
  longlong lStack_68;
  undefined *puStack_60;
  byte abStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_c8;
  if (param_7 == 0) {
    param_7 = FUN_142b11bc0();
  }
  if (param_8 == 0) {
    param_8 = param_7;
  }
  uStack_98 = FUN_142b124a0(param_7);
  if (param_2 < uStack_98 * 2 + 2) {
    uStack_a8 = CONCAT44(uStack_a8._4_4_,0x62);
    FUN_142afa690(4,0,0x7e,s_D__a_1_s_target_release_build_bo_143cecab0);
  }
  else {
    uStack_90 = param_2 - 1;
    if ((uStack_90 + uStack_98 * -2) - 1 < param_4) {
      uStack_a8 = CONCAT44(uStack_a8._4_4_,0x68);
      FUN_142afa690(4,0,0x72,s_D__a_1_s_target_release_build_bo_143cecb20);
    }
    else if (uStack_90 < uStack_98 * 2 + 1) {
      uStack_a8 = CONCAT44(uStack_a8._4_4_,0x6d);
      FUN_142afa690(4,0,0x7e,s_D__a_1_s_target_release_build_bo_143cecb90);
    }
    else {
      *param_1 = 0;
      puStack_60 = param_1 + 1;
      puStack_88 = param_1 + uStack_98 + 1;
      lStack_68 = 0;
      uStack_70 = 0;
      uStack_a0 = 0;
      uStack_a8 = param_7;
      iVar1 = FUN_142b123b0(param_5,param_6,puStack_88,0);
      if (iVar1 != 0) {
        FUN_142c41450(puStack_88 + uStack_98,0,(uStack_90 - param_4) + uStack_98 * -2 + -1);
        puStack_88[((uStack_90 - param_4) - uStack_98) + -1] = 1;
        FUN_142c41400(puStack_88 + ((uStack_90 - param_4) - uStack_98),param_3,param_4);
        iVar1 = FUN_142b3b560(puStack_60,uStack_98);
        if ((iVar1 != 0) && (lStack_68 = FUN_142b0e970(uStack_90 - uStack_98), lStack_68 != 0)) {
          uStack_a8 = param_8;
          iVar1 = FUN_142b622a0(lStack_68,uStack_90 - uStack_98,puStack_60,uStack_98);
          if (iVar1 != 0) {
            for (uStack_80 = 0; uStack_80 < uStack_90 - uStack_98; uStack_80 = uStack_80 + 1) {
              puStack_88[uStack_80] = puStack_88[uStack_80] ^ *(byte *)(lStack_68 + uStack_80);
            }
            uStack_a8 = param_8;
            iVar1 = FUN_142b622a0(abStack_58,uStack_98,puStack_88,uStack_90 - uStack_98);
            if (iVar1 != 0) {
              for (uStack_78 = 0; uStack_78 < uStack_98; uStack_78 = uStack_78 + 1) {
                puStack_60[uStack_78] = puStack_60[uStack_78] ^ abStack_58[uStack_78];
              }
              uStack_70 = 1;
            }
          }
        }
      }
      FUN_142b0eaa0(lStack_68);
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=142c41250 name=FUN_142c41250 */

undefined8 FUN_142c41250(undefined8 param_1)

{
  return param_1;
}


/* address=142c41270 name=FUN_142c41270 */

longlong FUN_142c41270(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=142c41290 name=FUN_142c41290 */

void FUN_142c41290(ulonglong param_1,ulonglong param_2)

{
  FUN_142c41270(param_1 ^ (param_1 ^ param_2 | param_1 - param_2 ^ param_1));
  return;
}


/* address=142c412f0 name=FUN_142c412f0 */

ulonglong FUN_142c412f0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142c41290(param_1,param_2);
  return ~uVar1;
}


/* address=142c41320 name=FUN_142c41320 */

void FUN_142c41320(ulonglong param_1)

{
  FUN_142c41270(~param_1 & param_1 - 1);
  return;
}


/* address=142c41350 name=FUN_142c41350 */

void FUN_142c41350(ulonglong param_1,ulonglong param_2)

{
  FUN_142c41320(param_1 ^ param_2);
  return;
}


/* address=142c41390 name=FUN_142c41390 */

ulonglong FUN_142c41390(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_142c41250(param_1);
  uVar2 = FUN_142c41250(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=142c413e0 name=FUN_142c413e0 */

void FUN_142c413e0(undefined8 param_1)

{
  FUN_142c41250(param_1);
  return;
}


/* address=142c41400 name=FUN_142c41400 */

undefined8 FUN_142c41400(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c41450 name=FUN_142c41450 */

undefined8 FUN_142c41450(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c41490 name=FUN_142c41490 */

void FUN_142c41490(undefined8 param_1,ulonglong *param_2,ulonglong param_3,undefined *param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  longlong param_9)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined auStack_138 [32];
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  ulonglong uStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined *puStack_b8;
  ulonglong uStack_b0;
  undefined *puStack_a8;
  ulonglong uStack_a0;
  byte abStack_98 [64];
  undefined auStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_138;
  lStack_108 = 0;
  if (param_8 == 0) {
    param_8 = FUN_142b11bc0();
  }
  if (param_9 == 0) {
    param_9 = param_8;
  }
  uStack_100 = FUN_142b124a0(param_8);
  if (param_5 < uStack_100 * 2 + 2) {
LAB_142c4190b:
    uStack_118 = CONCAT44(uStack_118._4_4_,0xfb);
    FUN_142afa690(4,0,0x85,s_D__a_1_s_target_release_build_bo_143cecc70);
  }
  else {
    uStack_d0 = (param_5 - uStack_100) - 1;
    lStack_108 = FUN_142b0e970(uStack_d0);
    if (lStack_108 != 0) {
      puStack_a8 = param_4 + 1;
      puStack_b8 = param_4 + uStack_100 + 1;
      uStack_118 = param_9;
      iVar1 = FUN_142b622a0(abStack_98,uStack_100,puStack_b8,uStack_d0);
      if (iVar1 != 0) {
        for (uStack_e8 = 0; uStack_e8 < uStack_100; uStack_e8 = uStack_e8 + 1) {
          abStack_98[uStack_e8] = abStack_98[uStack_e8] ^ puStack_a8[uStack_e8];
        }
        uStack_118 = param_9;
        iVar1 = FUN_142b622a0(lStack_108,uStack_d0,abStack_98,uStack_100);
        if (iVar1 != 0) {
          for (uStack_e0 = 0; uStack_e0 < uStack_d0; uStack_e0 = uStack_e0 + 1) {
            *(byte *)(lStack_108 + uStack_e0) =
                 *(byte *)(lStack_108 + uStack_e0) ^ puStack_b8[uStack_e0];
          }
          uStack_110 = 0;
          uStack_118 = param_8;
          iVar1 = FUN_142b123b0(param_6,param_7,auStack_58,0);
          if (iVar1 != 0) {
            iVar1 = FUN_142b0ec70(lStack_108,auStack_58,uStack_100);
            uStack_f0 = FUN_142c41320((longlong)iVar1);
            uStack_f0 = ~uStack_f0;
            uVar2 = FUN_142c41320(*param_4);
            uStack_f0 = uStack_f0 | ~uVar2;
            uStack_c8 = 0xffffffffffffffff;
            lStack_f8 = 0;
            for (uStack_d8 = uStack_100; uStack_d8 < uStack_d0; uStack_d8 = uStack_d8 + 1) {
              uStack_b0 = FUN_142c41350(*(undefined *)(lStack_108 + uStack_d8),1);
              uStack_a0 = FUN_142c41350(*(undefined *)(lStack_108 + uStack_d8),0);
              lStack_f8 = FUN_142c41390(uStack_c8 & uStack_b0,uStack_d8,lStack_f8);
              uStack_c8 = FUN_142c41390(uStack_b0,0,uStack_c8);
              uStack_f0 = uStack_f0 | uStack_c8 & ~uStack_a0;
            }
            uStack_f0 = uStack_f0 | uStack_c8;
            lVar3 = FUN_142c413e0(uStack_f0);
            if (lVar3 != 0) goto LAB_142c4190b;
            lStack_f8 = FUN_142c413e0(lStack_f8);
            lStack_f8 = lStack_f8 + 1;
            uStack_c0 = uStack_d0 - lStack_f8;
            if (uStack_c0 <= param_3) {
              FUN_142c41400(param_1,lStack_108 + lStack_f8,uStack_c0);
              *param_2 = uStack_c0;
              FUN_142b0eaa0(lStack_108);
              goto LAB_142c41939;
            }
            uStack_118 = CONCAT44(uStack_118._4_4_,0xef);
            FUN_142afa690(4,0,0x71,s_D__a_1_s_target_release_build_bo_143cecc00);
          }
        }
      }
    }
  }
  FUN_142b0eaa0(lStack_108);
LAB_142c41939:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_138);
  return;
}


/* address=142c41960 name=FUN_142c41960 */

void FUN_142c41960(longlong param_1,ulonglong param_2)

{
  ulonglong uStack_18;
  
  FUN_142b3b560(param_1,param_2);
  for (uStack_18 = 0; uStack_18 < param_2; uStack_18 = uStack_18 + 1) {
    while (*(char *)(param_1 + uStack_18) == '\0') {
      FUN_142b3b560(param_1 + uStack_18,1);
    }
  }
  return;
}


/* address=142c419f0 name=FUN_142c419f0 */

undefined8 FUN_142c419f0(undefined *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 < 0xb) {
    FUN_142afa690(4,0,0x7e,s_D__a_1_s_target_release_build_bo_143cecce0,0x105);
    uVar2 = 0;
  }
  else if (param_2 - 0xb < param_4) {
    FUN_142afa690(4,0,0x72,s_D__a_1_s_target_release_build_bo_143cecd50,0x10a);
    uVar2 = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 2;
    lVar1 = (param_2 - 3) - param_4;
    FUN_142c41960(param_1 + 2,lVar1);
    param_1[lVar1 + 2] = 0;
    FUN_142c41400(param_1 + (param_2 - param_4),param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142c41b10 name=FUN_142c41b10 */

undefined8
FUN_142c41b10(undefined8 param_1,ulonglong *param_2,ulonglong param_3,undefined *param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  if (param_5 == 0) {
    FUN_142afa690(4,0,0x78,s_D__a_1_s_target_release_build_bo_143cecdc0,0x11c);
    uVar4 = 0;
  }
  else if (param_5 < 0xb) {
    FUN_142afa690(4,0,0x7e,s_D__a_1_s_target_release_build_bo_143cece30,0x125);
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_142c41350(*param_4,0);
    uVar2 = FUN_142c41350(param_4[1],2);
    lStack_40 = 0;
    uStack_30 = 0xffffffffffffffff;
    for (uStack_38 = 2; uStack_38 < param_5; uStack_38 = uStack_38 + 1) {
      uVar3 = FUN_142c41320(param_4[uStack_38]);
      lStack_40 = FUN_142c41390(uStack_30 & uVar3,uStack_38,lStack_40);
      uStack_30 = FUN_142c41390(uVar3,0,uStack_30);
    }
    uVar3 = FUN_142c412f0(lStack_40,10);
    if ((uVar1 & uVar2 & ~uStack_30 & uVar3) == 0) {
      FUN_142afa690(4,0,0x89,s_D__a_1_s_target_release_build_bo_143cecea0,0x14a);
      uVar4 = 0;
    }
    else {
      param_5 = param_5 - (lStack_40 + 1);
      if (param_3 < param_5) {
        FUN_142afa690(4,0,0x89,s_D__a_1_s_target_release_build_bo_143cecf10,0x152);
        uVar4 = 0;
      }
      else {
        FUN_142c41400(param_1,param_4 + lStack_40 + 1,param_5);
        *param_2 = param_5;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


/* address=142c41da0 name=FUN_142c41da0 */

int FUN_142c41da0(undefined8 param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,
                 undefined8 param_5,ulonglong param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar4;
  int iVar5;
  longlong lStack_18;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar1 = FUN_142b49170(param_1);
  iVar5 = 0;
  if (param_4 < uVar1) {
    FUN_142afa690(4,0,0x87,s_D__a_1_s_target_release_build_bo_143ced290,CONCAT44(uVar4,0x1dc));
    return 0;
  }
  lStack_18 = param_3;
  if ((param_7 == 3) || (lStack_18 = FUN_142b0e970(uVar1), lStack_18 != 0)) {
    if (param_6 == uVar1) {
      iVar2 = FUN_142b62b90(param_1,lStack_18,param_5,uVar1);
      if (iVar2 != 0) {
        if (param_7 == 1) {
          uVar3 = (ulonglong)uVar1;
          iVar5 = FUN_142c41b10(param_3,param_2,uVar1,lStack_18,uVar3);
          uVar4 = (undefined4)(uVar3 >> 0x20);
        }
        else if (param_7 == 3) {
          *param_2 = (ulonglong)uVar1;
          iVar5 = 1;
        }
        else {
          if (param_7 != 4) {
            FUN_142afa690(4,0,0x8f,s_D__a_1_s_target_release_build_bo_143ced370,
                          CONCAT44(uVar4,0x202));
            goto LAB_142c41fbb;
          }
          uVar3 = (ulonglong)uVar1;
          iVar5 = FUN_142c41490(param_3,param_2,uVar1,lStack_18,uVar3,0,0,0,0);
          uVar4 = (undefined4)(uVar3 >> 0x20);
        }
        if (iVar5 == 0) {
          FUN_142afa690(4,0,0x88,s_D__a_1_s_target_release_build_bo_143ced3e0,CONCAT44(uVar4,0x208))
          ;
        }
      }
    }
    else {
      FUN_142afa690(4,0,0x70,s_D__a_1_s_target_release_build_bo_143ced300,CONCAT44(uVar4,0x1eb));
    }
  }
LAB_142c41fbb:
  if (param_7 != 3) {
    FUN_142b0eaa0(lStack_18);
  }
  return iVar5;
}


/* address=142c420a0 name=FUN_142c420a0 */

longlong FUN_142c420a0(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *apwStack_20 [4];
  
  lVar3 = FUN_142b484a0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = wcstoul(param_1,apwStack_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_142c42a00(apwStack_20,lVar3 + 8), iVar2 == 0)) ||
        (iVar2 = FUN_142c42a00(apwStack_20,lVar3 + 0x10), iVar2 == 0)) ||
       (lVar4 = FUN_142b782f0(apwStack_20), lVar4 != 0)) {
      FUN_142afa690(4,0,100,s_D__a_1_s_target_release_build_bo_143ced690,100);
      FUN_142b48600(lVar3);
      lVar3 = 0;
    }
    else {
      iVar2 = FUN_142b49240(lVar3);
      if (iVar2 == 0) {
        FUN_142afa690(4,0,0x68,s_D__a_1_s_target_release_build_bo_143ced700,0x6a);
        FUN_142b48600(lVar3);
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}


/* address=142c421a0 name=FUN_142c421a0 */

longlong FUN_142c421a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined auStack_20 [32];
  
  FUN_142b78260(auStack_20,param_1,param_2);
  lVar1 = FUN_142c420a0(auStack_20);
  if ((lVar1 == 0) || (lVar2 = FUN_142b782f0(auStack_20), lVar2 != 0)) {
    FUN_142afa690(4,0,100,s_D__a_1_s_target_release_build_bo_143ced770,0x77);
    FUN_142b48600(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=142c42230 name=FUN_142c42230 */

undefined8 FUN_142c42230(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_142c42a70(auStack_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)
       ) && (iVar1 = FUN_142c42a70(auStack_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) &&
     (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_142afa690(4,0,0x79,s_D__a_1_s_target_release_build_bo_143ced7e0,0x84);
  return 0;
}


/* address=142c422d0 name=FUN_142c422d0 */

undefined8 FUN_142c422d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined auStack_38 [56];
  
  FUN_142b7a4f0(auStack_38);
  iVar1 = FUN_142b7a520(auStack_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_142c42230(auStack_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_142b7a650(auStack_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_142afa690(4,0,0x79,s_D__a_1_s_target_release_build_bo_143ced850,0x91);
  FUN_142b7a5e0(auStack_38);
  return 0;
}


/* address=142c42370 name=FUN_142c42370 */

longlong FUN_142c42370(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lStack_20;
  wchar_t *apwStack_18 [3];
  
  lVar3 = FUN_142b484a0();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,apwStack_18,0x20000010);
    if ((uVar1 == 0) || (iVar2 = FUN_142b78ce0(apwStack_18,&lStack_20), iVar2 == 0)) {
      FUN_142afa690(4,0,100,s_D__a_1_s_target_release_build_bo_143ced8c0,0xa6);
    }
    else if (lStack_20 == DAT_1432a18c0) {
      iVar2 = FUN_142c42a00(apwStack_18,lVar3 + 8);
      if (((((iVar2 != 0) && (iVar2 = FUN_142c42a00(apwStack_18,lVar3 + 0x10), iVar2 != 0)) &&
           (iVar2 = FUN_142c42a00(apwStack_18,lVar3 + 0x18), iVar2 != 0)) &&
          ((iVar2 = FUN_142c42a00(apwStack_18,lVar3 + 0x20), iVar2 != 0 &&
           (iVar2 = FUN_142c42a00(apwStack_18,lVar3 + 0x28), iVar2 != 0)))) &&
         ((iVar2 = FUN_142c42a00(apwStack_18,lVar3 + 0x30), iVar2 != 0 &&
          ((iVar2 = FUN_142c42a00(apwStack_18,lVar3 + 0x38), iVar2 != 0 &&
           (iVar2 = FUN_142c42a00(apwStack_18,lVar3 + 0x40), iVar2 != 0)))))) {
        lVar4 = FUN_142b782f0(apwStack_18);
        if (lVar4 == 0) {
          iVar2 = FUN_142b49240(lVar3);
          if (iVar2 != 0) {
            return lVar3;
          }
          FUN_142afa690(4,0,0x68,s_D__a_1_s_target_release_build_bo_143ceda10,0xc0);
        }
        else {
          FUN_142afa690(4,0,100,s_D__a_1_s_target_release_build_bo_143ced9a0,0xbb);
        }
      }
    }
    else {
      FUN_142afa690(4,0,0x6a,s_D__a_1_s_target_release_build_bo_143ced930,0xab);
    }
    FUN_142b48600(lVar3);
  }
  return 0;
}


/* address=142c42580 name=FUN_142c42580 */

longlong FUN_142c42580(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined auStack_20 [32];
  
  FUN_142b78260(auStack_20,param_1,param_2);
  lVar1 = FUN_142c42370(auStack_20);
  if ((lVar1 == 0) || (lVar2 = FUN_142b782f0(auStack_20), lVar2 != 0)) {
    FUN_142afa690(4,0,100,s_D__a_1_s_target_release_build_bo_143ceda80,0xd0);
    FUN_142b48600(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=142c42610 name=FUN_142c42610 */

undefined8 FUN_142c42610(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_38,0x20000010);
  if ((((((iVar1 != 0) && (iVar1 = FUN_142b7b130(auStack_38,DAT_1432a18c0), iVar1 != 0)) &&
        (iVar1 = FUN_142c42a70(auStack_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
       ((iVar1 = FUN_142c42a70(auStack_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0 &&
        (iVar1 = FUN_142c42a70(auStack_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0)))) &&
      ((iVar1 = FUN_142c42a70(auStack_38,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0 &&
       ((iVar1 = FUN_142c42a70(auStack_38,*(undefined8 *)(param_2 + 0x28)), iVar1 != 0 &&
        (iVar1 = FUN_142c42a70(auStack_38,*(undefined8 *)(param_2 + 0x30)), iVar1 != 0)))))) &&
     ((iVar1 = FUN_142c42a70(auStack_38,*(undefined8 *)(param_2 + 0x38)), iVar1 != 0 &&
      ((iVar1 = FUN_142c42a70(auStack_38,*(undefined8 *)(param_2 + 0x40)), iVar1 != 0 &&
       (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)))))) {
    return 1;
  }
  FUN_142afa690(4,0,0x79,s_D__a_1_s_target_release_build_bo_143cedaf0,0xe4);
  return 0;
}


/* address=142c42760 name=FUN_142c42760 */

undefined8 FUN_142c42760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined auStack_38 [56];
  
  FUN_142b7a4f0(auStack_38);
  iVar1 = FUN_142b7a520(auStack_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_142c42610(auStack_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_142b7a650(auStack_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_142afa690(4,0,0x79,s_D__a_1_s_target_release_build_bo_143cedb60,0xf1);
  FUN_142b7a5e0(auStack_38);
  return 0;
}


/* address=142c42800 name=FUN_142c42800 */

longlong FUN_142c42800(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined auStack_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_142b78260(auStack_20,*param_2,(longlong)param_3);
    lVar1 = FUN_142c420a0(auStack_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_142b48600(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_142b782d0(auStack_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=142c428a0 name=FUN_142c428a0 */

undefined8 FUN_142c428a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7a520(auStack_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_142c42230(auStack_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_142c1a0e0(auStack_38,param_2);
    return uVar2;
  }
  FUN_142b7a5e0(auStack_38);
  return 0xffffffff;
}


/* address=142c42900 name=FUN_142c42900 */

longlong FUN_142c42900(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined auStack_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_142b78260(auStack_20,*param_2,(longlong)param_3);
    lVar1 = FUN_142c42370(auStack_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_142b48600(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_142b782d0(auStack_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=142c429a0 name=FUN_142c429a0 */

undefined8 FUN_142c429a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7a520(auStack_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_142c42610(auStack_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_142c1a0e0(auStack_38,param_2);
    return uVar2;
  }
  FUN_142b7a5e0(auStack_38);
  return 0xffffffff;
}


/* address=142c42a00 name=FUN_142c42a00 */

undefined8 FUN_142c42a00(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    FID_conflict__assert((wchar_t *)s___143ced600,(wchar_t *)s_D_143ced530,0x49);
  }
  lVar1 = FUN_142b1d190();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c76c80(param_1,*param_2);
  }
  return uVar2;
}


/* address=142c42a70 name=FUN_142c42a70 */

undefined8 FUN_142c42a70(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_142afa690(4,0,0x90,s_D__a_1_s_target_release_build_bo_143ced620,0x54);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142c76d60(param_1,param_2);
  }
  return uVar1;
}


/* address=142c42ad0 name=FUN_142c42ad0 */

undefined8 FUN_142c42ad0(int param_1)

{
  undefined8 uVar1;
  uint uStack_18;
  
  if (param_1 != 0) {
    for (uStack_18 = 0; uStack_18 < 0x12; uStack_18 = uStack_18 + 1) {
      if (*(int *)(&DAT_1432ac210 + (ulonglong)uStack_18 * 0x20) == param_1) {
        uVar1 = (**(code **)(&UNK_1432ac218 + (ulonglong)uStack_18 * 0x20))();
        return uVar1;
      }
    }
  }
  return 0;
}


/* address=142c42b40 name=FUN_142c42b40 */

void FUN_142c42b40(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auStack_20 [32];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_142c15ce0(param_1);
    uVar2 = FUN_142c15cb0(param_1);
    FUN_142b78260(auStack_20,uVar2,uVar1);
    FUN_142c42f30(auStack_20);
  }
  else {
    FUN_142c42ad0(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


/* address=142c42bb0 name=FUN_142c42bb0 */

longlong FUN_142c42bb0(wchar_t *param_1)

{
  ulong uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *apwStack_40 [2];
  wchar_t *apwStack_30 [2];
  wchar_t *apwStack_20 [4];
  
  uVar1 = wcstoul(param_1,apwStack_40,0x20000010);
  if ((uVar1 == 0) || (uVar1 = wcstoul((wchar_t *)apwStack_40,apwStack_30,6), uVar1 == 0)) {
    FUN_142afa690(0x1d,0,0x65,s_D__a_1_s_target_release_build_bo_143cee1b0,0xac);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_142c42f30(apwStack_30);
    if (lVar2 == 0) {
      FUN_142afa690(0x1d,0,0x66,s_D__a_1_s_target_release_build_bo_143cee220,0xb2);
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_142b782f0(apwStack_40);
      if ((lVar3 != 0) &&
         (((uVar1 = wcstoul((wchar_t *)apwStack_40,apwStack_20,5), uVar1 == 0 ||
           (lVar3 = FUN_142b782f0(apwStack_20), lVar3 != 0)) ||
          (lVar3 = FUN_142b782f0(apwStack_40), lVar3 != 0)))) {
        FUN_142afa690(0x1d,0,0x65,s_D__a_1_s_target_release_build_bo_143cee290,0xbf);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


/* address=142c42cd0 name=FUN_142c42cd0 */

undefined8 FUN_142c42cd0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uStack_a8;
  undefined auStack_98 [48];
  undefined auStack_68 [48];
  undefined auStack_38 [56];
  
  iVar2 = FUN_142b7ac70(param_1,auStack_98,0x20000010);
  if ((iVar2 == 0) || (iVar2 = FUN_142b7ac70(auStack_98,auStack_68,6), iVar2 == 0)) {
    return 0;
  }
  bVar1 = false;
  iVar2 = FUN_142b12460(param_2);
  uStack_a8 = 0;
  do {
    if (6 < uStack_a8) {
LAB_142c42db6:
      if (!bVar1) {
        FUN_142afa690(0x1d,0,0x66,s_D__a_1_s_target_release_build_bo_143cee300,0xdb);
        return 0;
      }
      iVar2 = FUN_142b7ac70(auStack_98,auStack_38,5);
      if ((iVar2 != 0) && (iVar2 = FUN_142b7a730(param_1), iVar2 != 0)) {
        return 1;
      }
      return 0;
    }
    if (iVar2 == *(int *)(&DAT_1432ac45c + uStack_a8 * 0x10)) {
      iVar2 = FUN_142b7ad30(auStack_68,&DAT_1432ac450 + uStack_a8 * 0x10,
                            (&DAT_1432ac459)[uStack_a8 * 0x10]);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = true;
      goto LAB_142c42db6;
    }
    uStack_a8 = uStack_a8 + 1;
  } while( true );
}


/* address=142c42ef0 name=FUN_142c42ef0 */

int FUN_142c42ef0(void *param_1,void *param_2,size_t param_3)

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


/* address=142c42f30 name=FUN_142c42f30 */

undefined8 FUN_142c42f30(undefined8 param_1)

{
  undefined uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uStack_28;
  
  uStack_28 = 0;
  do {
    if (6 < uStack_28) {
      return 0;
    }
    uVar3 = FUN_142b782f0(param_1);
    if (uVar3 == (byte)(&DAT_1432ac459)[uStack_28 * 0x10]) {
      uVar1 = (&DAT_1432ac459)[uStack_28 * 0x10];
      uVar4 = FUN_142b782d0(param_1);
      iVar2 = FUN_142c42ef0(uVar4,&DAT_1432ac450 + uStack_28 * 0x10,uVar1);
      if (iVar2 == 0) {
        uVar4 = FUN_142c42ad0(*(undefined4 *)(&DAT_1432ac45c + uStack_28 * 0x10));
        return uVar4;
      }
    }
    uStack_28 = uStack_28 + 1;
  } while( true );
}


/* address=142c430d0 name=FUN_142c430d0 */

void FUN_142c430d0(void)

{
  FUN_142b05960();
  return;
}


/* address=142c430f0 name=FUN_142c430f0 */

void FUN_142c430f0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c43110 name=FUN_142c43110 */

void FUN_142c43110(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c43140 name=FUN_142c43140 */

void FUN_142c43140(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142c43160 name=FUN_142c43160 */

void FUN_142c43160(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c430a0,param_2);
  return;
}


/* address=142c43190 name=FUN_142c43190 */

void FUN_142c43190(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05d40(param_1,param_2);
  return;
}


/* address=142c431c0 name=FUN_142c431c0 */

void FUN_142c431c0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c431f0 name=FUN_142c431f0 */

void FUN_142c431f0(undefined8 param_1)

{
  FUN_142b062b0(param_1);
  return;
}


/* address=142c43230 name=FUN_142c43230 */

void FUN_142c43230(undefined8 param_1)

{
  FUN_142c0f130(param_1,&DAT_1432ac578);
  return;
}


/* address=142c43260 name=FUN_142c43260 */

void FUN_142c43260(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_142c0f7d0(param_1,param_2,param_3,&DAT_1432ac578);
  return;
}


/* address=142c432a0 name=FUN_142c432a0 */

void FUN_142c432a0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c11ab0(param_1,param_2,&DAT_1432ac578);
  return;
}


/* address=142c432d0 name=FUN_142c432d0 */

longlong FUN_142c432d0(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uStack_30;
  longlong lStack_28;
  undefined auStack_20 [32];
  
  uStack_30 = 0;
  iVar1 = FUN_142c432a0(param_1,&uStack_30);
  if (-1 < iVar1) {
    FUN_142b78260(auStack_20,uStack_30,(longlong)iVar1);
    lStack_28 = FUN_142b76520(auStack_20);
    if ((lStack_28 != 0) && (lVar2 = FUN_142b782f0(auStack_20), lVar2 == 0)) {
      FUN_142b0eaa0(uStack_30);
      return lStack_28;
    }
    FUN_142afa690(0x13,0,0x68,s_D__a_1_s_target_release_build_bo_143cee3b0,0x71);
    FUN_142b0fae0(lStack_28);
    FUN_142b0eaa0(uStack_30);
  }
  return 0;
}


/* address=142c433a0 name=FUN_142c433a0 */

longlong FUN_142c433a0(undefined8 param_1)

{
  int iVar1;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  longlong lStack_40;
  undefined auStack_38 [56];
  
  lStack_58 = 0;
  iVar1 = FUN_142b7a520(auStack_38,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_142b766a0(auStack_38,param_1), iVar1 == 0)) ||
      (iVar1 = FUN_142b7a650(auStack_38,&lStack_58,&uStack_50), iVar1 == 0)) ||
     (0x7fffffff < CONCAT44(uStack_4c,uStack_50))) {
    FUN_142b7a5e0(auStack_38);
    FUN_142afa690(0x13,0,0x69,s_D__a_1_s_target_release_build_bo_143cee420,0x84);
  }
  else {
    lStack_40 = lStack_58;
    lStack_48 = FUN_142c43260(0,&lStack_40,uStack_50);
    if ((lStack_48 != 0) && (lStack_40 == lStack_58 + CONCAT44(uStack_4c,uStack_50))) {
      FUN_142b0eaa0(lStack_58);
      return lStack_48;
    }
    FUN_142c43230(lStack_48);
    FUN_142afa690(0x13,0,0x68,s_D__a_1_s_target_release_build_bo_143cee490,0x8c);
  }
  FUN_142b0eaa0(lStack_58);
  return 0;
}


/* address=142c434d0 name=FUN_142c434d0 */

longlong FUN_142c434d0(undefined4 param_1,undefined8 param_2,char *param_3,int param_4,
                      undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  size_t sStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong lStack_40;
  undefined auStack_38 [56];
  
  if ((param_4 == -1) && (param_3 != (char *)0x0)) {
    sStack_50 = strlen(param_3);
  }
  else {
    sStack_50 = (size_t)param_4;
  }
  lStack_58 = FUN_142c432d0(param_8);
  if (lStack_58 == 0) {
    return 0;
  }
  lStack_68 = 0;
  lStack_60 = 0;
  iVar1 = FUN_142b7a520(auStack_38,0x80);
  if (iVar1 != 0) {
    sVar2 = sStack_50;
    iVar1 = FUN_142c77bc0(auStack_38,param_1,param_2,param_3,sStack_50,param_5,param_6,param_7,
                          lStack_58);
    uVar3 = (undefined4)(sVar2 >> 0x20);
    if ((iVar1 != 0) && (iVar1 = FUN_142b7a650(auStack_38,&lStack_60,&uStack_48), iVar1 != 0)) {
      lStack_40 = lStack_60;
      lStack_68 = FUN_142c5bdb0(0,&lStack_40,uStack_48);
      if ((lStack_68 == 0) || (lStack_40 != lStack_60 + CONCAT44(uStack_44,uStack_48))) {
        FUN_142afa690(0x13,0,0x44,s_D__a_1_s_target_release_build_bo_143cee500,CONCAT44(uVar3,0xdb))
        ;
        FUN_142c5bd80(lStack_68);
        lStack_68 = 0;
      }
      goto LAB_142c43668;
    }
  }
  FUN_142b7a5e0(auStack_38);
LAB_142c43668:
  FUN_142b0eaa0(lStack_60);
  FUN_142b0fae0(lStack_58);
  return lStack_68;
}


/* address=142c43690 name=FUN_142c43690 */

undefined8 FUN_142c43690(undefined8 param_1,char *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lStack_40;
  undefined8 uStack_38;
  size_t sStack_30;
  undefined8 uStack_28;
  undefined auStack_20 [32];
  
  if ((param_3 == -1) && (param_2 != (char *)0x0)) {
    sStack_30 = strlen(param_2);
  }
  else {
    sStack_30 = (size_t)param_3;
  }
  uStack_28 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  iVar1 = FUN_142c5bdf0(param_1,&uStack_38);
  if (-1 < iVar1) {
    FUN_142b78260(auStack_20,uStack_38,(longlong)iVar1);
    lStack_40 = FUN_142c77f50(auStack_20,param_2,sStack_30);
    if ((lStack_40 != 0) && (lVar2 = FUN_142b782f0(auStack_20), lVar2 == 0)) {
      uStack_28 = FUN_142c433a0(lStack_40);
    }
  }
  FUN_142b0eaa0(uStack_38);
  FUN_142b0fae0(lStack_40);
  return uStack_28;
}


/* address=142c43790 name=FUN_142c43790 */

int FUN_142c43790(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iStack_118;
  int iStack_114;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  char *pcStack_f0;
  size_t sStack_e8;
  size_t sStack_e0;
  char *pcStack_d8;
  undefined8 uStack_d0;
  wchar_t *apwStack_c8 [2];
  wchar_t *apwStack_b8 [2];
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  wchar_t *apwStack_90 [2];
  wchar_t awStack_80 [8];
  wchar_t *apwStack_70 [2];
  wchar_t *apwStack_60 [2];
  wchar_t *apwStack_50 [2];
  wchar_t *apwStack_40 [2];
  wchar_t *apwStack_30 [2];
  wchar_t *apwStack_20 [4];
  
  uStack_d0 = 0;
  iStack_114 = 0;
  uStack_a0 = FUN_142c430f0(param_2);
  iVar1 = FUN_142c79070(param_3,awStack_80,&uStack_d0);
  if (iVar1 == 0) {
    FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143ceed50,0x255);
    return 0;
  }
  *param_1 = 0;
  FUN_142c44fd0(&puStack_100,0,0x20);
  uVar2 = wcstoul(awStack_80,apwStack_c8,0x20000010);
  if (((uVar2 == 0) || (lVar3 = FUN_142b782f0(awStack_80), lVar3 != 0)) ||
     (iVar1 = FUN_142b78ce0(apwStack_c8,&uStack_a8), iVar1 == 0)) {
    FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143ceedc0,0x261);
  }
  else if (uStack_a8 < 3) {
    FUN_142afa690(0x13,0,0x65,s_D__a_1_s_target_release_build_bo_143ceee30,0x266);
  }
  else {
    uVar2 = wcstoul((wchar_t *)apwStack_c8,apwStack_70,0x20000010);
    if (uVar2 == 0) {
      FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143ceeea0,0x26b);
    }
    else {
      lVar3 = FUN_142b782f0(apwStack_c8);
      if (lVar3 == 0) {
        FUN_142afa690(0x13,0,0x70,s_D__a_1_s_target_release_build_bo_143ceef10,0x270);
      }
      else {
        uVar2 = wcstoul((wchar_t *)apwStack_c8,apwStack_b8,0x20000010);
        if (uVar2 == 0) {
          FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143ceef80,0x275);
        }
        else {
          uVar2 = wcstoul((wchar_t *)apwStack_70,apwStack_30,6);
          if ((uVar2 == 0) ||
             (uVar2 = wcstoul((wchar_t *)apwStack_70,apwStack_20,-0x60000000), uVar2 == 0)) {
            FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143ceeff0,0x27e);
          }
          else {
            iVar1 = FUN_142b78480(apwStack_30,&DAT_1432ac550,9);
            if (iVar1 == 0) {
              FUN_142afa690(0x13,0,0x72,s_D__a_1_s_target_release_build_bo_143cef060,0x285);
            }
            else {
              uVar2 = wcstoul((wchar_t *)apwStack_20,apwStack_90,4);
              if (uVar2 == 0) {
                FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143cef0d0,0x28a);
              }
              else {
                puStack_100 = param_1;
                uStack_f8 = param_2;
                pcStack_f0 = param_4;
                if (param_4 == (char *)0x0) {
                  sStack_e0 = 0;
                }
                else {
                  sStack_e0 = strlen(param_4);
                }
                sStack_e8 = sStack_e0;
                uVar2 = wcstoul((wchar_t *)apwStack_b8,apwStack_60,0x20000010);
                if (uVar2 == 0) {
                  FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143cef140,0x297);
                }
                else {
                  lStack_108 = FUN_142c42bb0(apwStack_60);
                  if (lStack_108 != 0) {
                    uVar2 = wcstoul((wchar_t *)apwStack_60,apwStack_50,4);
                    if ((uVar2 == 0) ||
                       (uVar2 = wcstoul((wchar_t *)apwStack_b8,apwStack_40,4), uVar2 == 0)) {
                      FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143cef1b0,0x2a2);
                    }
                    else {
                      uStack_110 = 1;
                      lVar3 = FUN_142b782f0(apwStack_b8);
                      if ((lVar3 == 0) ||
                         ((iVar1 = FUN_142b78ce0(apwStack_b8,&uStack_110), iVar1 != 0 &&
                          (iVar1 = FUN_142c44f00(uStack_110), iVar1 != 0)))) {
                        iVar1 = FUN_142c45bd0(&iStack_118,pcStack_f0,sStack_e8,apwStack_40,
                                              (undefined4)uStack_110,lStack_108,apwStack_90,
                                              apwStack_50);
                        if (iVar1 != 0) {
                          if ((iStack_118 == 0) && (sStack_e8 == 0)) {
                            if (pcStack_f0 == (char *)0x0) {
                              pcStack_d8 = &DAT_143d03bb0;
                            }
                            else {
                              pcStack_d8 = (char *)0x0;
                            }
                            pcStack_f0 = pcStack_d8;
                            iVar1 = FUN_142c45bd0(&iStack_118,pcStack_d8,0,apwStack_40,
                                                  (undefined4)uStack_110,lStack_108,apwStack_90,
                                                  apwStack_50);
                            if (iVar1 == 0) goto LAB_142c43d59;
                          }
                          if (iStack_118 == 0) {
                            FUN_142afa690(0x13,0,0x6c,s_D__a_1_s_target_release_build_bo_143cef290,
                                          0x2c2);
                          }
                          else {
                            iVar1 = FUN_142c45010(apwStack_90,&puStack_100,&LAB_142c45890);
                            if (iVar1 != 0) {
                              iStack_114 = 1;
                            }
                          }
                        }
                      }
                      else {
                        FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143cef220,0x2ab)
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
LAB_142c43d59:
  FUN_142b0eaa0(uStack_d0);
  if (iStack_114 == 0) {
    FUN_142b0fae0(*param_1);
    *param_1 = 0;
    while (uVar4 = FUN_142c430f0(param_2), uStack_a0 < uVar4) {
      uStack_98 = FUN_142c431f0(param_2);
      FUN_142af5df0(uStack_98);
    }
  }
  return iStack_114;
}


/* address=142c43df0 name=FUN_142c43df0 */

longlong * FUN_142c43df0(longlong **param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_142b0e970(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_142b0e970(param_3);
    *plVar1 = lVar2;
    if (*plVar1 == 0) {
      FUN_142b0eaa0(plVar1);
      plVar1 = (longlong *)0x0;
    }
    else {
      FUN_142c44f80(*plVar1,*param_2,param_3);
      plVar1[1] = param_3;
      *param_2 = *param_2 + param_3;
      if (param_1 != (longlong **)0x0) {
        FUN_142c44ec0(*param_1);
        *param_1 = plVar1;
      }
    }
  }
  return plVar1;
}


/* address=142c43ec0 name=FUN_142c43ec0 */

undefined8 FUN_142c43ec0(undefined8 param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iStack_38;
  undefined4 uStack_34;
  ulonglong uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_18;
  ulonglong auStack_10 [2];
  
  uStack_28 = 0;
  uStack_18 = 0;
  puVar1 = (ulonglong *)FUN_142c0ca50();
  if (puVar1 == (ulonglong *)0x0) {
    uStack_18 = 0;
  }
  else {
    lVar2 = FUN_142c0cc00(puVar1,0x2000);
    if (lVar2 != 0) {
      while( true ) {
        if (*puVar1 - uStack_28 < 0x80000000) {
          uStack_20 = (undefined4)(*puVar1 - uStack_28);
          uStack_34 = uStack_20;
        }
        else {
          uStack_34 = 0x7fffffff;
        }
        iStack_38 = FUN_142b6be20(param_1,puVar1[1] + uStack_28,uStack_34);
        if (iStack_38 < 0) {
          if (uStack_28 == 0) goto LAB_142c44012;
          iStack_38 = 0;
        }
        if (iStack_38 == 0) break;
        uStack_28 = uStack_28 + (longlong)iStack_38;
        if ((*puVar1 <= uStack_28) &&
           ((DAT_1432ac570 < *puVar1 || (lVar2 = FUN_142c0cc00(puVar1,*puVar1 << 1), lVar2 == 0))))
        goto LAB_142c44012;
      }
      auStack_10[0] = puVar1[1];
      uStack_18 = FUN_142c43df0(param_2,auStack_10,uStack_28);
    }
LAB_142c44012:
    FUN_142c0caa0(puVar1);
  }
  return uStack_18;
}


/* address=142c44190 name=_Reset<> */

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
  FUN_142b6c0f0(param_1,*param_2,param_2[1]);
  return;
}


/* address=142c44230 name=FUN_142c44230 */

undefined8
FUN_142c44230(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
             longlong *param_5)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lStack_40;
  ulonglong uStack_38;
  undefined auStack_20 [32];
  
  lStack_40 = 0;
  bVar1 = false;
  if ((param_5 != (longlong *)0x0) && (*param_5 != 0)) {
    lStack_40 = *param_5;
  }
  if (lStack_40 == 0) {
    lStack_40 = FUN_142c430d0();
    if (lStack_40 == 0) {
      return 0;
    }
    bVar1 = true;
  }
  FUN_142b78260(auStack_20,*param_1,param_1[1]);
  iVar2 = FUN_142c43790(param_3,lStack_40,auStack_20,param_2);
  if (iVar2 == 0) {
    if (bVar1) {
      FUN_142c43140(lStack_40);
    }
    uVar4 = 0;
  }
  else {
    *param_4 = 0;
    uVar3 = FUN_142c430f0(lStack_40);
    if ((*param_3 != 0) && (uStack_38 = uVar3, uVar3 != 0)) {
      while (uStack_38 = uStack_38 - 1, uStack_38 < uVar3) {
        uVar4 = FUN_142c43110(lStack_40,uStack_38);
        iVar2 = FUN_142c04c60(uVar4,*param_3);
        if (iVar2 != 0) {
          *param_4 = uVar4;
          FUN_142c43190(lStack_40,uStack_38);
          break;
        }
        FUN_142afa330();
      }
    }
    if (param_5 == (longlong *)0x0) {
      FUN_142c43160(lStack_40,FUN_142af5df0);
    }
    else {
      *param_5 = lStack_40;
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=142c44ec0 name=FUN_142c44ec0 */

void FUN_142c44ec0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_142b0eaa0(*param_1);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142c44f00 name=FUN_142c44f00 */

undefined4 FUN_142c44f00(ulonglong param_1)

{
  undefined4 uStack_18;
  
  if ((param_1 == 0) || (DAT_1432ac5a8 < param_1)) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = 1;
  }
  return uStack_18;
}


/* address=142c44f40 name=FUN_142c44f40 */

undefined8 FUN_142c44f40(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142cbd220(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=142c44f80 name=FUN_142c44f80 */

undefined8 FUN_142c44f80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c44fd0 name=FUN_142c44fd0 */

undefined8 FUN_142c44fd0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c45010 name=FUN_142c45010 */

undefined4 FUN_142c45010(undefined8 param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  ulong uVar2;
  longlong lVar3;
  undefined4 uStack_48;
  undefined8 uStack_40;
  wchar_t awStack_38 [8];
  wchar_t *apwStack_28 [2];
  wchar_t *apwStack_18 [3];
  
  uStack_40 = 0;
  uStack_48 = 0;
  iVar1 = FUN_142c79070(param_1,awStack_38,&uStack_40);
  if (iVar1 == 0) {
    FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143cee570,0xfb);
    uStack_48 = 0;
  }
  else {
    uVar2 = wcstoul(awStack_38,apwStack_28,0x20000010);
    if ((uVar2 == 0) || (lVar3 = FUN_142b782f0(awStack_38), lVar3 != 0)) {
      FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143cee5e0,0x102);
    }
    else {
      do {
        lVar3 = FUN_142b782f0(apwStack_28);
        if (lVar3 == 0) {
          uStack_48 = 1;
          break;
        }
        uVar2 = wcstoul((wchar_t *)apwStack_28,apwStack_18,0x20000010);
        if (uVar2 == 0) {
          FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143cee650,0x109);
          break;
        }
        iVar1 = (*param_3)(apwStack_18,param_2);
      } while (iVar1 != 0);
    }
    FUN_142b0eaa0(uStack_40);
  }
  return uStack_48;
}


/* address=142c45150 name=FUN_142c45150 */

undefined8 FUN_142c45150(wchar_t *param_1,longlong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 auStack_88 [2];
  wchar_t *apwStack_80 [2];
  wchar_t *apwStack_70 [2];
  wchar_t *apwStack_60 [2];
  wchar_t *apwStack_50 [2];
  undefined auStack_40 [64];
  
  *param_2 = 0;
  *param_3 = 0;
  while( true ) {
    do {
      lVar3 = FUN_142b782f0(param_1);
      if (lVar3 == 0) {
        return 1;
      }
      uVar1 = wcstoul(param_1,apwStack_70,0x20000010);
      if ((((uVar1 == 0) || (uVar1 = wcstoul((wchar_t *)apwStack_70,apwStack_50,6), uVar1 == 0)) ||
          (uVar1 = wcstoul((wchar_t *)apwStack_70,apwStack_60,0x20000011), uVar1 == 0)) ||
         (lVar3 = FUN_142b782f0(apwStack_70), lVar3 != 0)) {
        FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143cee6c0,0x141);
        goto LAB_142c45364;
      }
      iVar2 = FUN_142b78480(apwStack_50,&DAT_1432ac520,9);
    } while (iVar2 == 0);
    if (((*param_2 != 0) || (uVar1 = wcstoul((wchar_t *)apwStack_60,apwStack_80,0x1e), uVar1 == 0))
       || ((lVar3 = FUN_142b782f0(apwStack_60), lVar3 != 0 ||
           (lVar3 = FUN_142b782f0(apwStack_80), lVar3 == 0)))) break;
    uVar4 = FUN_142b782f0(apwStack_80);
    iVar2 = FUN_142b7a520(auStack_40,uVar4);
    if (iVar2 == 0) goto LAB_142c45364;
    while (lVar3 = FUN_142b782f0(apwStack_80), lVar3 != 0) {
      iVar2 = FUN_142c72b30(apwStack_80,auStack_88);
      if ((iVar2 == 0) || (iVar2 = FUN_142c72c30(auStack_40,auStack_88[0]), iVar2 == 0)) {
        FUN_142afa690(0x13,0,0x83,s_D__a_1_s_target_release_build_bo_143cee7a0,0x157);
        FUN_142b7a5e0(auStack_40);
        goto LAB_142c45364;
      }
    }
    iVar2 = FUN_142b7a650(auStack_40,param_2,param_3);
    if (iVar2 == 0) {
      FUN_142b7a5e0(auStack_40);
LAB_142c45364:
      FUN_142b0eaa0(*param_2);
      *param_2 = 0;
      *param_3 = 0;
      return 0;
    }
  }
  FUN_142afa690(0x13,0,100,s_D__a_1_s_target_release_build_bo_143cee730,0x14b);
  goto LAB_142c45364;
}


/* address=142c45bd0 name=FUN_142c45bd0 */

void FUN_142c45bd0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined auStack_118 [32];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined auStack_98 [64];
  undefined auStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  uStack_c8 = 0;
  puStack_c0 = (undefined4 *)FUN_142b124a0(param_6);
  uStack_b8 = FUN_142b782f0(param_4);
  uVar3 = FUN_142b782d0(param_4);
  uStack_d8 = param_6;
  puStack_e0 = auStack_98;
  puStack_e8 = puStack_c0;
  uStack_f0 = (undefined *)CONCAT44(uStack_f0._4_4_,param_5);
  uStack_f8 = CONCAT71(uStack_f8._1_7_,3);
  iVar1 = FUN_142c78340(param_2,param_3,uVar3,uStack_b8);
  if (iVar1 != 0) {
    uStack_b0 = FUN_142b782f0(param_7);
    uStack_a8 = FUN_142b782d0(param_7);
    uVar3 = FUN_142b124a0(param_6);
    puStack_e8 = &uStack_c4;
    uStack_f0 = auStack_58;
    uStack_f8 = uStack_b0;
    lVar4 = FUN_142b126d0(param_6,auStack_98,uVar3,uStack_a8);
    if (lVar4 != 0) {
      uVar2 = FUN_142b78480(param_8,auStack_58,uStack_c4);
      *param_1 = uVar2;
      uStack_c8 = 1;
    }
  }
  FUN_142b0ec40(auStack_98,0x40);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=142c45d70 name=FUN_142c45d70 */

undefined4
FUN_142c45d70(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined auStack_110 [16];
  undefined auStack_100 [48];
  undefined auStack_d0 [48];
  undefined auStack_a0 [48];
  undefined auStack_70 [48];
  undefined auStack_40 [64];
  
  if ((param_2 == 0) && (param_5 == 0)) {
    uStack_118 = 1;
  }
  else {
    iVar1 = FUN_142b7ac70(param_1,auStack_40,0x20000011);
    if (iVar1 == 0) {
      uStack_118 = 0;
    }
    else if (param_3 == 0) {
LAB_142c45eee:
      if ((param_5 == 0) ||
         ((((iVar1 = FUN_142b7ac70(auStack_40,auStack_100,0x20000010), iVar1 != 0 &&
            (iVar1 = FUN_142b7ac70(auStack_100,auStack_d0,6), iVar1 != 0)) &&
           (iVar1 = FUN_142b7ad30(auStack_d0,&DAT_1432ac530,9), iVar1 != 0)) &&
          (((iVar1 = FUN_142b7ac70(auStack_100,auStack_a0,0x20000011), iVar1 != 0 &&
            (iVar1 = FUN_142b7ac70(auStack_a0,auStack_70,4), iVar1 != 0)) &&
           (iVar1 = FUN_142b7ad30(auStack_70,param_4,param_5), iVar1 != 0)))))) {
        iVar1 = FUN_142b7b5c0(auStack_40);
        if ((iVar1 == 0) || (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)) {
          uStack_118 = 0;
        }
        else {
          uStack_118 = 1;
        }
      }
      else {
        uStack_118 = 0;
      }
    }
    else {
      iVar1 = FUN_142b7ac70(auStack_40,auStack_100,0x20000010);
      if ((((iVar1 == 0) || (iVar1 = FUN_142b7ac70(auStack_100,auStack_d0,6), iVar1 == 0)) ||
          (iVar1 = FUN_142b7ad30(auStack_d0,&DAT_1432ac520,9), iVar1 == 0)) ||
         ((iVar1 = FUN_142b7ac70(auStack_100,auStack_a0,0x20000011), iVar1 == 0 ||
          (iVar1 = FUN_142b7ac70(auStack_a0,auStack_70,0x1e), iVar1 == 0)))) {
        uStack_118 = 0;
      }
      else {
        FUN_142b78260(auStack_110,param_2,param_3);
        do {
          lVar2 = FUN_142b782f0(auStack_110);
          if (lVar2 == 0) goto LAB_142c45eee;
          iVar1 = FUN_142c72950(auStack_110,&uStack_114);
        } while ((iVar1 != 0) && (iVar1 = FUN_142c72e50(auStack_70,uStack_114), iVar1 != 0));
        FUN_142afa690(0x13,0,0x83,s_D__a_1_s_target_release_build_bo_143cef370,0x3ce);
        uStack_118 = 0;
      }
    }
  }
  return uStack_118;
}


/* address=142c46000 name=FUN_142c46000 */

undefined8
FUN_142c46000(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  char *pcStackX_18;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar3;
  int iStack_178;
  int iStack_174;
  size_t sStack_170;
  char *pcStack_168;
  undefined auStack_160 [8];
  undefined auStack_158 [48];
  undefined auStack_128 [48];
  undefined auStack_f8 [48];
  undefined auStack_c8 [48];
  undefined auStack_98 [48];
  undefined auStack_68 [48];
  undefined auStack_38 [56];
  
  uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  iVar1 = FUN_142b7ac70(param_1,auStack_158,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_142b7ac70(auStack_158,auStack_f8,6), iVar1 == 0)) ||
      (iVar1 = FUN_142b7ad30(auStack_f8,&DAT_1432ac510,0xb), iVar1 == 0)) ||
     ((((iVar1 = FUN_142b7ac70(auStack_158,auStack_c8,0xa0000000), iVar1 == 0 ||
        (iVar1 = FUN_142b7ac70(auStack_c8,auStack_128,0x20000010), iVar1 == 0)) ||
       ((iVar1 = FUN_142b7ac70(auStack_128,auStack_98,6), iVar1 == 0 ||
        ((iVar1 = FUN_142b7ad30(auStack_98,&DAT_1432ac540,10), iVar1 == 0 ||
         (iVar1 = FUN_142b7ac70(auStack_128,auStack_68,0xa0000000), iVar1 == 0)))))) ||
      (iVar1 = FUN_142b7ac70(auStack_68,auStack_38,4), iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    iStack_174 = FUN_142af6030(param_2,0);
    iStack_178 = 0;
    pcStackX_18 = (char *)FUN_142c1a4d0(param_2,&iStack_178);
    sStack_170 = (size_t)iStack_178;
    pcStack_168 = pcStackX_18;
    if (param_3 != (char *)0x0) {
      if (sStack_170 != 0) {
        FUN_142afa690(0x13,0,0x85,s_D__a_1_s_target_release_build_bo_143cef3e0,CONCAT44(uVar3,0x3fc)
                     );
        return 0;
      }
      sStack_170 = strlen(param_3);
      pcStackX_18 = param_3;
    }
    if ((((iStack_174 < 0) ||
         (iVar1 = FUN_142b7ade0(auStack_38,auStack_160,(longlong)iStack_174), iVar1 == 0)) ||
        (iVar1 = FUN_142af6030(param_2,auStack_160), iVar1 < 0)) ||
       ((iVar1 = FUN_142c45d70(auStack_158,pcStackX_18,sStack_170,param_4,param_5), iVar1 == 0 ||
        (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=142c46270 name=FUN_142c46270 */

undefined8
FUN_142c46270(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uStack_48;
  undefined auStack_40 [64];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_40,0x20000010);
  if ((iVar1 == 0) ||
     ((param_2 != 0 &&
      (iVar1 = FUN_142c46000(auStack_40,param_2,param_4,param_5,param_6), iVar1 == 0)))) {
    uVar3 = 0;
  }
  else {
    for (uStack_48 = 0; uVar2 = FUN_142c430f0(param_3), uStack_48 < uVar2; uStack_48 = uStack_48 + 1
        ) {
      uVar3 = FUN_142c43110(param_3,uStack_48);
      iVar1 = FUN_142c46000(auStack_40,uVar3,0,0,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = FUN_142b7a730(param_1);
  }
  return uVar3;
}


/* address=142c46370 name=FUN_142c46370 */

void FUN_142c46370(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,ulonglong param_7)

{
  int iVar1;
  uint uVar2;
  undefined auStack_268 [32];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  int iStack_228;
  undefined4 uStack_224;
  int aiStack_220 [2];
  ulonglong uStack_218;
  longlong lStack_210;
  undefined auStack_208 [48];
  undefined auStack_1d8 [48];
  undefined auStack_1a8 [48];
  undefined auStack_178 [48];
  undefined auStack_148 [48];
  undefined auStack_118 [48];
  undefined auStack_e8 [48];
  undefined auStack_b8 [160];
  undefined auStack_18 [8];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_268;
  iVar1 = FUN_142b3b560(auStack_18,8);
  if (iVar1 != 0) {
    uStack_224 = 0;
    FUN_142b3d5a0(auStack_b8);
    iVar1 = FUN_142b7ac70(param_1,auStack_1d8,0x20000010);
    if (((((iVar1 != 0) && (iVar1 = FUN_142b7ac70(auStack_1d8,auStack_148,6), iVar1 != 0)) &&
         (iVar1 = FUN_142b7ad30(auStack_148,&DAT_1432ac560,9), iVar1 != 0)) &&
        (((iVar1 = FUN_142b7ac70(auStack_1d8,auStack_118,0xa0000000), iVar1 != 0 &&
          (iVar1 = FUN_142b7ac70(auStack_118,auStack_1a8,0x20000010), iVar1 != 0)) &&
         ((iVar1 = FUN_142b7b130(auStack_1a8,0), iVar1 != 0 &&
          ((iVar1 = FUN_142b7ac70(auStack_1a8,auStack_208,0x20000010), iVar1 != 0 &&
           (iVar1 = FUN_142b7ac70(auStack_208,auStack_e8,6), iVar1 != 0)))))))) &&
       (iVar1 = FUN_142b7ad30(auStack_e8,&DAT_1432ac550,9), iVar1 != 0)) {
      uStack_230 = 8;
      puStack_238 = auStack_18;
      uStack_248 = param_3;
      uStack_240 = param_4;
      iVar1 = FUN_142c78990(auStack_208,auStack_b8,param_2,param_5);
      if ((iVar1 != 0) && (iVar1 = FUN_142b7ac70(auStack_208,auStack_178,0x80000000), iVar1 != 0)) {
        uVar2 = FUN_142b3ea40(auStack_b8);
        uStack_218 = param_7 + uVar2;
        if (uStack_218 < param_7) {
          uStack_248 = CONCAT44(uStack_248._4_4_,0x44a);
          FUN_142afa690(0x13,0,0x76,s_D__a_1_s_target_release_build_bo_143cef450);
        }
        else {
          iVar1 = FUN_142b7ae40(auStack_178,&lStack_210,uStack_218);
          if (iVar1 != 0) {
            uStack_248 = CONCAT44(uStack_248._4_4_,(undefined4)param_7);
            iVar1 = FUN_142b3e900(auStack_b8,lStack_210,&iStack_228,param_6);
            if ((((iVar1 != 0) &&
                 (iVar1 = FUN_142b3e980(auStack_b8,lStack_210 + iStack_228,aiStack_220), iVar1 != 0)
                 ) && (iVar1 = FUN_142b7aea0(auStack_178,(longlong)(iStack_228 + aiStack_220[0])),
                      iVar1 != 0)) && (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)) {
              uStack_224 = 1;
            }
          }
        }
      }
    }
    FUN_142b3d610(auStack_b8);
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_268);
  return;
}


/* address=142c466a0 name=FUN_142c466a0 */

longlong FUN_142c466a0(undefined *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  undefined *puStackX_8;
  byte *pbStackX_10;
  uint uStack_28;
  ulonglong uStack_20;
  longlong lStack_18;
  
  lStack_18 = 0;
  puStackX_8 = param_1;
  pbStackX_10 = param_2;
  uStack_20 = param_3;
  while (uStack_20 != 0) {
    if (uStack_20 < 3) {
      uStack_28 = (uint)*pbStackX_10 << 0x10;
      if (uStack_20 == 2) {
        uStack_28 = uStack_28 | (uint)pbStackX_10[1] << 8;
      }
      uVar2 = FUN_142c47590(uStack_28 >> 0x12);
      *puStackX_8 = uVar2;
      uVar2 = FUN_142c47590(uStack_28 >> 0xc & 0xff);
      puStackX_8[1] = uVar2;
      if (uStack_20 == 1) {
        uVar2 = 0x3d;
      }
      else {
        uVar2 = FUN_142c47590(uStack_28 >> 6 & 0xff);
      }
      puStackX_8[2] = uVar2;
      puStackX_8[3] = 0x3d;
      uStack_20 = 0;
    }
    else {
      uVar3 = (uint)*pbStackX_10 << 0x10 | (uint)pbStackX_10[1] << 8;
      bVar1 = pbStackX_10[2];
      uVar2 = FUN_142c47590(((uint)*pbStackX_10 << 0x10) >> 0x12);
      *puStackX_8 = uVar2;
      uVar2 = FUN_142c47590((uVar3 & 0xff000) >> 0xc);
      puStackX_8[1] = uVar2;
      uVar2 = FUN_142c47590((uVar3 | bVar1) >> 6 & 0xff);
      puStackX_8[2] = uVar2;
      uVar2 = FUN_142c47590(bVar1);
      puStackX_8[3] = uVar2;
      uStack_20 = uStack_20 - 3;
    }
    puStackX_8 = puStackX_8 + 4;
    lStack_18 = lStack_18 + 4;
    pbStackX_10 = pbStackX_10 + 3;
  }
  *puStackX_8 = 0;
  return lStack_18;
}


/* address=142c46980 name=FUN_142c46980 */

bool FUN_142c46980(longlong *param_1,ulonglong param_2)

{
  bool bVar1;
  
  bVar1 = param_2 % 4 == 0;
  if (bVar1) {
    *param_1 = (param_2 / 4) * 3;
  }
  return bVar1;
}


/* address=142c469d0 name=FUN_142c469d0 */

undefined8
FUN_142c469d0(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4,
             ulonglong param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lStackX_8;
  ulonglong uStack_28;
  longlong lStack_20;
  longlong lStack_18;
  ulonglong auStack_10 [2];
  
  *param_2 = 0;
  if (param_5 % 4 == 0) {
    iVar1 = FUN_142c46980(auStack_10,param_5);
    if ((iVar1 == 0) || (param_3 < auStack_10[0])) {
      uVar2 = 0;
    }
    else {
      lStack_18 = 0;
      lStackX_8 = param_1;
      for (uStack_28 = 0; uStack_28 < param_5; uStack_28 = uStack_28 + 4) {
        iVar1 = FUN_142c477d0(lStackX_8,&lStack_20,param_4 + uStack_28);
        if (iVar1 == 0) {
          return 0;
        }
        lStack_18 = lStack_18 + lStack_20;
        lStackX_8 = lStackX_8 + lStack_20;
        if ((lStack_20 != 3) && (uStack_28 != param_5 - 4)) {
          return 0;
        }
      }
      *param_2 = lStack_18;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142c46b70 name=FUN_142c46b70 */

void FUN_142c46b70(undefined8 param_1)

{
  FUN_142c474b0(param_1,0,0x38);
  return;
}


/* address=142c46ba0 name=FUN_142c46ba0 */

void FUN_142c46ba0(uint *param_1,undefined *param_2,undefined4 *param_3,longlong param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  undefined *puStackX_10;
  longlong lStackX_20;
  ulonglong uStack_28;
  
  uStack_28 = 0;
  *param_3 = 0;
  if (param_5 != 0) {
    if (0x2f < *param_1) {
      FID_conflict__assert((wchar_t *)s_c_143cef600,(wchar_t *)s_D_143cef530,0x95);
    }
    if (param_5 < 0x30 - (ulonglong)*param_1) {
      FUN_142c47460((longlong)param_1 + (ulonglong)*param_1 + 4,param_4,param_5);
      *param_1 = *param_1 + (uint)param_5;
    }
    else {
      puStackX_10 = param_2;
      lStackX_20 = param_4;
      if (*param_1 != 0) {
        lVar1 = 0x30 - (ulonglong)*param_1;
        FUN_142c47460((longlong)param_1 + (ulonglong)*param_1 + 4,param_4,lVar1);
        lStackX_20 = param_4 + lVar1;
        param_5 = param_5 - lVar1;
        lVar1 = FUN_142c466a0(param_2,param_1 + 1,0x30);
        *param_1 = 0;
        param_2[lVar1] = 10;
        puStackX_10 = param_2 + lVar1 + 1;
        *puStackX_10 = 0;
        uStack_28 = lVar1 + 1;
      }
      while (0x2f < param_5) {
        lVar1 = FUN_142c466a0(puStackX_10,lStackX_20,0x30);
        lStackX_20 = lStackX_20 + 0x30;
        param_5 = param_5 - 0x30;
        puStackX_10[lVar1] = 10;
        puStackX_10 = puStackX_10 + lVar1 + 1;
        *puStackX_10 = 0;
        if (uStack_28 + 1 + lVar1 < uStack_28) {
          *param_3 = 0;
          return;
        }
        uStack_28 = uStack_28 + 1 + lVar1;
      }
      if (param_5 != 0) {
        FUN_142c47460(param_1 + 1,lStackX_20,param_5);
      }
      *param_1 = (uint)param_5;
      if (0x7fffffff < uStack_28) {
        uStack_28 = 0;
      }
      *param_3 = (undefined4)uStack_28;
    }
  }
  return;
}


/* address=142c46e40 name=FUN_142c46e40 */

void FUN_142c46e40(int *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uStack_18;
  
  if (*param_1 == 0) {
    *param_3 = 0;
  }
  else {
    lVar1 = FUN_142c466a0(param_2,param_1 + 1,*param_1);
    *(undefined *)(param_2 + lVar1) = 10;
    uVar2 = lVar1 + 1;
    *(undefined *)(param_2 + uVar2) = 0;
    *param_1 = 0;
    if (0x7fffffff < uVar2) {
      FID_conflict__assert((wchar_t *)s_e_143cef718,(wchar_t *)s_D_143cef650,0xd9);
    }
    uStack_18 = (undefined4)uVar2;
    *param_3 = uStack_18;
  }
  return;
}


/* address=142c46f10 name=FUN_142c46f10 */

void FUN_142c46f10(undefined8 param_1)

{
  FUN_142c474b0(param_1,0,0x38);
  return;
}


/* address=142c46f40 name=FUN_142c46f40 */

undefined8
FUN_142c46f40(uint *param_1,longlong param_2,undefined4 *param_3,longlong param_4,ulonglong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lStackX_10;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong auStack_10 [2];
  
  *param_3 = 0;
  if (*(char *)((longlong)param_1 + 0x35) == '\0') {
    uStack_18 = 0;
    lStackX_10 = param_2;
    for (uStack_20 = 0; uStack_20 < param_5; uStack_20 = uStack_20 + 1) {
      cVar1 = *(char *)(param_4 + uStack_20);
      if ((((cVar1 != '\t') && (cVar1 != '\n')) && (cVar1 != '\r')) && (cVar1 != ' ')) {
        if (*(char *)(param_1 + 0xd) != '\0') {
          *(undefined *)((longlong)param_1 + 0x35) = 1;
          return 0xffffffff;
        }
        *(char *)((longlong)param_1 + (ulonglong)*param_1 + 4) = cVar1;
        *param_1 = *param_1 + 1;
        if (*param_1 == 4) {
          iVar2 = FUN_142c477d0(lStackX_10,auStack_10,param_1 + 1);
          if (iVar2 == 0) {
            *(undefined *)((longlong)param_1 + 0x35) = 1;
            return 0xffffffff;
          }
          *param_1 = 0;
          uStack_18 = uStack_18 + auStack_10[0];
          lStackX_10 = lStackX_10 + auStack_10[0];
          if (auStack_10[0] < 3) {
            *(undefined *)(param_1 + 0xd) = 1;
          }
        }
      }
    }
    if (uStack_18 < 0x80000000) {
      *param_3 = (undefined4)uStack_18;
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


/* address=142c47110 name=FUN_142c47110 */

undefined8 FUN_142c47110(int *param_1,undefined8 param_2,undefined4 *param_3)

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


/* address=142c472e0 name=FUN_142c472e0 */

undefined8 FUN_142c472e0(undefined8 param_1)

{
  return param_1;
}


/* address=142c47300 name=FUN_142c47300 */

longlong FUN_142c47300(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=142c47320 name=FUN_142c47320 */

void FUN_142c47320(ulonglong param_1)

{
  FUN_142c47300(~param_1 & param_1 - 1);
  return;
}


/* address=142c47350 name=FUN_142c47350 */

void FUN_142c47350(ulonglong param_1,ulonglong param_2)

{
  FUN_142c47320(param_1 ^ param_2);
  return;
}


/* address=142c47390 name=FUN_142c47390 */

void FUN_142c47390(undefined8 param_1,undefined8 param_2)

{
  FUN_142c47350(param_1,param_2);
  return;
}


/* address=142c473c0 name=FUN_142c473c0 */

ulonglong FUN_142c473c0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_142c472e0(param_1);
  uVar2 = FUN_142c472e0(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=142c47410 name=FUN_142c47410 */

void FUN_142c47410(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_142c473c0(param_1,param_2,param_3);
  return;
}


/* address=142c47460 name=FUN_142c47460 */

undefined8 FUN_142c47460(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c474b0 name=FUN_142c474b0 */

undefined8 FUN_142c474b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c474f0 name=FUN_142c474f0 */

void FUN_142c474f0(byte param_1,byte param_2)

{
  FUN_142c47300((ulonglong)param_1 - (ulonglong)param_2);
  return;
}


/* address=142c47540 name=FUN_142c47540 */

void FUN_142c47540(char param_1,char param_2,char param_3)

{
  FUN_142c474f0(param_1 - param_2,(param_3 - param_2) + '\x01');
  return;
}


/* address=142c47590 name=FUN_142c47590 */

undefined FUN_142c47590(byte param_1)

{
  undefined uVar1;
  undefined uVar2;
  
  param_1 = param_1 & 0x3f;
  uVar1 = FUN_142c47390(param_1,0x3e);
  uVar1 = FUN_142c47410(uVar1,0x2b,0x2f);
  uVar2 = FUN_142c474f0(param_1,0x3e);
  uVar1 = FUN_142c47410(uVar2,param_1 - 4,uVar1);
  uVar2 = FUN_142c474f0(param_1,0x34);
  uVar1 = FUN_142c47410(uVar2,param_1 + 0x47,uVar1);
  uVar2 = FUN_142c474f0(param_1,0x1a);
  uVar1 = FUN_142c47410(uVar2,param_1 + 0x41,uVar1);
  return uVar1;
}


/* address=142c47670 name=FUN_142c47670 */

byte FUN_142c47670(char param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  bVar1 = FUN_142c47540(param_1,0x41,0x5a);
  bVar2 = FUN_142c47540(param_1,0x61,0x7a);
  bVar3 = FUN_142c47540(param_1,0x30,0x39);
  bVar4 = FUN_142c47390(param_1,0x2b);
  bVar5 = FUN_142c47390(param_1,0x2f);
  bVar6 = FUN_142c47390(param_1,0x3d);
  return bVar1 & param_1 + 0xbfU | bVar2 & param_1 + 0xb9U | bVar3 & param_1 + 4U | bVar4 & 0x3e |
         bVar5 & 0x3f | ~(bVar1 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6);
}


/* address=142c477d0 name=FUN_142c477d0 */

undefined8 FUN_142c477d0(byte *param_1,undefined8 *param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bStack_24;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar1 = FUN_142c47670(*param_3);
  bVar2 = FUN_142c47670(param_3[1]);
  bVar3 = FUN_142c47670(param_3[2]);
  bStack_24 = FUN_142c47670(param_3[3]);
  if ((((bVar1 == 0xff) || (bVar2 == 0xff)) || (bVar3 == 0xff)) || (bStack_24 == 0xff)) {
    uVar4 = 0;
  }
  else {
    bVar1 = (byte)(((uint)bVar1 << 0x12) >> 0x10) | (byte)(((uint)bVar2 << 0xc) >> 0x10);
    bVar2 = (byte)(((uint)bVar2 << 0xc) >> 8) | (byte)(((uint)bVar3 << 6) >> 8);
    bStack_24 = (byte)((uint)bVar3 << 6) | bStack_24;
    uStack_1c = (uint)(*param_3 == '=');
    uStack_18 = (uint)(param_3[1] == '=');
    uStack_14 = (uint)(param_3[2] == '=');
    uStack_10 = (uint)(param_3[3] == '=');
    uStack_10 = uStack_1c << 3 | uStack_18 << 2 | uStack_14 << 1 | uStack_10;
    if (uStack_10 == 0) {
      *param_2 = 3;
      *param_1 = bVar1;
      param_1[1] = bVar2;
      param_1[2] = bStack_24;
    }
    else if (uStack_10 == 1) {
      *param_2 = 2;
      *param_1 = bVar1;
      param_1[1] = bVar2;
    }
    else {
      if (uStack_10 != 3) {
        return 0;
      }
      *param_2 = 1;
      *param_1 = bVar1;
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=142c47a60 name=FUN_142c47a60 */

longlong FUN_142c47a60(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b0e970(0x60);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_142c49ac0(lVar1,0,0x60);
    *(undefined4 *)(lVar1 + 0x50) = 1;
    FUN_142b81a60(lVar1 + 0x38);
    FUN_142b82340(lVar1 + 0x58);
  }
  return lVar1;
}


/* address=142c47ad0 name=FUN_142c47ad0 */

void FUN_142c47ad0(longlong param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_142b819a0(param_1 + 0x50), iVar1 != 0)) {
    FUN_142b82360(&DAT_143d03bb8,param_1,param_1 + 0x58);
    FUN_142b1d280(*(undefined8 *)(param_1 + 8));
    FUN_142b1d280(*(undefined8 *)(param_1 + 0x10));
    FUN_142b1d280(*(undefined8 *)(param_1 + 0x18));
    FUN_142b1d280(*(undefined8 *)(param_1 + 0x20));
    FUN_142b1d280(*(undefined8 *)(param_1 + 0x28));
    FUN_142b23110(*(undefined8 *)(param_1 + 0x40));
    FUN_142b23110(*(undefined8 *)(param_1 + 0x48));
    FUN_142b81b00(param_1 + 0x38);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142c47bb0 name=FUN_142c47bb0 */

undefined8 FUN_142c47bb0(longlong param_1)

{
  FUN_142b81950(param_1 + 0x50);
  return 1;
}


/* address=142c47c10 name=FUN_142c47c10 */

undefined8 FUN_142c47c10(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


/* address=142c47c50 name=FUN_142c47c50 */

undefined8 FUN_142c47c50(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=142c47c70 name=FUN_142c47c70 */

undefined8 FUN_142c47c70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=142c47c90 name=FUN_142c47c90 */

undefined8 FUN_142c47c90(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


/* address=142c48c00 name=FUN_142c48c00 */

undefined8 * FUN_142c48c00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_142b0e970(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return puVar1;
}


/* address=142c48c50 name=FUN_142c48c50 */

void FUN_142c48c50(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_142b1d210(*param_1);
    FUN_142b1d210(param_1[1]);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142c48d60 name=FUN_142c48d60 */

undefined8 * FUN_142c48d60(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uStackX_10;
  longlong in_stack_ffffffffffffff78;
  undefined4 uVar6;
  undefined8 uVar5;
  int iStack_70;
  longlong lStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [3];
  undefined8 auStack_28 [5];
  
  iVar1 = FUN_142c5b870(param_3);
  if (iVar1 == 0) {
    puStack_60 = (undefined8 *)0x0;
  }
  else if (*(longlong *)(param_3 + 0x28) == 0) {
    FUN_142afa690(10,0,0x65,s_D__a_1_s_target_release_build_bo_143cef830,600);
    puStack_60 = (undefined8 *)0x0;
  }
  else {
    uStack_48 = 0;
    uStack_58 = 0;
    lStack_68 = 0;
    puStack_60 = (undefined8 *)0x0;
    FUN_142b1d1e0(auStack_40);
    FUN_142b1d1e0(auStack_28);
    lVar3 = FUN_142b1d190();
    uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    if (lVar3 != 0) {
      lStack_68 = FUN_142b1dae0();
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
      if (lStack_68 != 0) {
        iStack_70 = 0;
        uStackX_10 = param_2;
        do {
          uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
          iVar1 = FUN_142c49b00(param_3,lStack_68,&uStack_48,&uStack_58);
          if (iVar1 == 0) goto LAB_142c49059;
          uVar2 = FUN_142b1d490(*(undefined8 *)(param_3 + 0x10));
          if (uVar2 < uStackX_10) {
            uVar2 = FUN_142b1d490(*(undefined8 *)(param_3 + 0x10));
            uStackX_10 = (ulonglong)uVar2;
          }
          lVar4 = FUN_142b1d660(param_1,uStackX_10,auStack_40);
          if (lVar4 == 0) goto LAB_142c49059;
          iVar1 = FUN_142b25250(*(undefined8 *)(param_3 + 0x10));
          lStack_50 = (longlong)iVar1;
          iVar1 = FUN_142b25460(auStack_40,lStack_50);
          if ((iVar1 == 0) || (iVar1 = FUN_142b25460(auStack_28,lStack_50), iVar1 == 0))
          goto LAB_142c49059;
          FUN_142b32e50(auStack_40[0],0,**(undefined8 **)(param_3 + 0x10),auStack_28[0],lStack_50);
          lVar4 = lStack_68;
          iVar1 = FUN_142c49d20(auStack_28,*(undefined8 *)(param_3 + 0x28),uStack_58,
                                *(undefined8 *)(param_3 + 0x48),lStack_68);
          uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
          if (iVar1 == 0) goto LAB_142c49059;
          lVar4 = lStack_68;
          iVar1 = FUN_142b33e60(lVar3,auStack_28,auStack_40,*(undefined8 *)(param_3 + 0x10),
                                lStack_68);
          uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
          if (iVar1 == 0) goto LAB_142c49059;
          in_stack_ffffffffffffff78 = lStack_68;
          iVar1 = FUN_142c49d20(lVar3,lVar3,uStack_48,*(undefined8 *)(param_3 + 0x48),lStack_68);
          uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
          if (iVar1 == 0) goto LAB_142c49059;
          iVar1 = FUN_142b1f5d0(uStack_58);
          if (iVar1 == 0) {
            iVar1 = FUN_142b1f5d0(lVar3);
            uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
            if (iVar1 == 0) {
              puStack_60 = (undefined8 *)FUN_142c48c00();
              if (puStack_60 != (undefined8 *)0x0) {
                *puStack_60 = uStack_58;
                puStack_60[1] = lVar3;
              }
              goto LAB_142c49059;
            }
          }
          iStack_70 = iStack_70 + 1;
        } while (iStack_70 <= DAT_1432ac630);
        uVar5 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff78 >> 0x20),0x29e);
        FUN_142afa690(10,0,0x6c,s_D__a_1_s_target_release_build_bo_143cef890,uVar5);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
    }
LAB_142c49059:
    if (puStack_60 == (undefined8 *)0x0) {
      FUN_142afa690(10,0,3,s_D__a_1_s_target_release_build_bo_143cef8f0,CONCAT44(uVar6,0x2ad));
      FUN_142b1d210(uStack_58);
      FUN_142b1d210(lVar3);
    }
    FUN_142b1db50(lStack_68);
    FUN_142b1d280(auStack_40);
    FUN_142b1d280(auStack_28);
    FUN_142b1d280(uStack_48);
  }
  return puStack_60;
}


/* address=142c49140 name=FUN_142c49140 */

int FUN_142c49140(uint *param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4,
                 longlong param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uStackX_18;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar6;
  undefined *puVar5;
  int iStack_68;
  uint uStack_54;
  undefined auStack_50 [24];
  undefined auStack_38 [24];
  undefined auStack_20 [32];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  *param_1 = 0;
  iVar1 = FUN_142c5b870(param_5);
  if (iVar1 == 0) {
    iStack_68 = 0;
  }
  else if (*(longlong *)(param_5 + 0x20) == 0) {
    FUN_142afa690(10,0,0x65,s_D__a_1_s_target_release_build_bo_143cef950,CONCAT44(uVar6,0x2ca));
    iStack_68 = 0;
  }
  else {
    iStack_68 = 0;
    FUN_142b1d1e0(auStack_50);
    FUN_142b1d1e0(auStack_38);
    FUN_142b1d1e0(auStack_20);
    lVar3 = FUN_142b1dae0();
    if (lVar3 != 0) {
      iVar1 = FUN_142b1f5d0(*param_4);
      if (((iVar1 == 0) && (iVar1 = FUN_142b1d620(*param_4), iVar1 == 0)) &&
         (iVar1 = FUN_142b1f330(*param_4,*(undefined8 *)(param_5 + 0x10)), iVar1 < 0)) {
        iVar1 = FUN_142b1f5d0(param_4[1]);
        if (((iVar1 == 0) && (iVar1 = FUN_142b1d620(param_4[1]), iVar1 == 0)) &&
           (iVar1 = FUN_142b1f330(param_4[1],*(undefined8 *)(param_5 + 0x10)), iVar1 < 0)) {
          lVar4 = FUN_142b228f0(auStack_38,param_4[1],*(undefined8 *)(param_5 + 0x10),lVar3);
          if (lVar4 != 0) {
            uVar2 = FUN_142b1d430(*(undefined8 *)(param_5 + 0x10));
            uStackX_18 = param_3;
            if (uVar2 >> 3 < param_3) {
              uStackX_18 = (ulonglong)(uVar2 >> 3);
            }
            lVar4 = FUN_142b1d660(param_2,uStackX_18,auStack_50);
            if (lVar4 != 0) {
              lVar4 = lVar3;
              iVar1 = FUN_142b20750(auStack_50,auStack_50,auStack_38,*(undefined8 *)(param_5 + 0x10)
                                    ,lVar3);
              uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
              if (iVar1 != 0) {
                lVar4 = lVar3;
                iVar1 = FUN_142b20750(auStack_38,*param_4,auStack_38,*(undefined8 *)(param_5 + 0x10)
                                      ,lVar3);
                uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
                if ((iVar1 != 0) &&
                   (iVar1 = FUN_142b34f90(param_5 + 0x40,param_5 + 0x38,*(undefined8 *)(param_5 + 8)
                                          ,lVar3), iVar1 != 0)) {
                  puVar5 = auStack_38;
                  iVar1 = FUN_142b24c70(auStack_20,*(undefined8 *)(param_5 + 0x18),auStack_50,
                                        *(undefined8 *)(param_5 + 0x20),puVar5,
                                        *(undefined8 *)(param_5 + 8),lVar3,
                                        *(undefined8 *)(param_5 + 0x40));
                  uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
                  if (iVar1 != 0) {
                    lVar4 = lVar3;
                    iVar1 = FUN_142b1e5c0(0,auStack_50,auStack_20,*(undefined8 *)(param_5 + 0x10),
                                          lVar3);
                    uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
                    if (iVar1 != 0) {
                      iVar1 = FUN_142b1f330(auStack_50,*param_4);
                      uStack_54 = (uint)(iVar1 == 0);
                      *param_1 = uStack_54;
                      iStack_68 = 1;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          iStack_68 = 1;
        }
      }
      else {
        iStack_68 = 1;
      }
    }
    if (iStack_68 != 1) {
      FUN_142afa690(10,0,3,s_D__a_1_s_target_release_build_bo_143cef9b0,CONCAT44(uVar6,0x318));
    }
    FUN_142b1db50(lVar3);
    FUN_142b1d210(auStack_50);
    FUN_142b1d210(auStack_38);
    FUN_142b1d210(auStack_20);
  }
  return iStack_68;
}


/* address=142c49600 name=FUN_142c49600 */

undefined4
FUN_142c49600(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_24;
  longlong lStack_20;
  undefined8 uStack_18;
  longlong alStack_10 [2];
  
  lStack_20 = 0;
  uStack_24 = 0;
  uStack_18 = 0;
  lStack_20 = FUN_142c48c00();
  if ((((lStack_20 != 0) &&
       (alStack_10[0] = param_4, lVar2 = FUN_142c5b470(&lStack_20,alStack_10,(undefined4)param_5),
       lVar2 != 0)) && (alStack_10[0] == param_4 + param_5)) &&
     (((iVar1 = FUN_142c5b510(lStack_20,&uStack_18), -1 < iVar1 && (iVar1 == param_5)) &&
      (iVar1 = FUN_142c49a30(param_4,uStack_18,param_5), iVar1 == 0)))) {
    uStack_24 = FUN_142c49140(param_1,param_2,param_3,lStack_20,param_6);
  }
  FUN_142b0eaa0(uStack_18);
  FUN_142c48c50(lStack_20);
  return uStack_24;
}


/* address=142c49720 name=FUN_142c49720 */

ulonglong FUN_142c49720(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_142b1d490(*(undefined8 *)(param_1 + 0x10));
    uVar3 = (ulonglong)uVar1;
    lVar2 = FUN_142c49dd0(uVar3 + 1);
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
        lVar2 = FUN_142c49dd0(uVar3);
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


/* address=142c49a30 name=FUN_142c49a30 */

int FUN_142c49a30(void *param_1,void *param_2,size_t param_3)

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


/* address=142c49a70 name=FUN_142c49a70 */

undefined8 FUN_142c49a70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c49ac0 name=FUN_142c49ac0 */

undefined8 FUN_142c49ac0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c49b00 name=FUN_142c49b00 */

undefined4 FUN_142c49b00(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar2;
  undefined4 uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined auStack_20 [32];
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_38 = 0;
  FUN_142b1d1e0(auStack_20);
  lStack_30 = FUN_142b1d190();
  lStack_28 = FUN_142b1d190();
  if ((lStack_30 != 0) && (lStack_28 != 0)) {
    iVar1 = FUN_142b21a50(auStack_20,1,*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_142b34f90(param_1 + 0x40,param_1 + 0x38,*(undefined8 *)(param_1 + 8),param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_142b34f90(param_1 + 0x48,param_1 + 0x38,*(undefined8 *)(param_1 + 0x10),param_2)
        ;
        if (iVar1 != 0) {
          uVar2 = param_2;
          iVar1 = FUN_142b23d80(lStack_30,*(undefined8 *)(param_1 + 0x18),auStack_20,
                                *(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x40)
                               );
          uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
          if (iVar1 != 0) {
            uVar2 = param_2;
            iVar1 = FUN_142b1e5c0(0,lStack_30,lStack_30,*(undefined8 *)(param_1 + 0x10),param_2);
            uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
            if (iVar1 != 0) {
              uVar2 = *(undefined8 *)(param_1 + 0x48);
              iVar1 = FUN_142b34df0(lStack_28,auStack_20,*(undefined8 *)(param_1 + 0x10),param_2,
                                    uVar2);
              uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
              if (iVar1 != 0) {
                FUN_142b1d280(*param_3);
                *param_3 = lStack_28;
                lStack_28 = 0;
                FUN_142b1d280(*param_4);
                *param_4 = lStack_30;
                lStack_30 = 0;
                uStack_38 = 1;
                goto LAB_142c49ce8;
              }
            }
          }
        }
      }
    }
  }
  FUN_142afa690(10,0,3,s_D__a_1_s_target_release_build_bo_143cefa10,CONCAT44(uVar3,0x39f));
LAB_142c49ce8:
  FUN_142b1d280(auStack_20);
  FUN_142b1d280(lStack_30);
  FUN_142b1d280(lStack_28);
  return uStack_38;
}


/* address=142c49d20 name=FUN_142c49d20 */

undefined4
FUN_142c49d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_18;
  
  FUN_142b1dbe0(param_5);
  lVar2 = FUN_142b1dc40(param_5);
  if (lVar2 != 0) {
    iVar1 = FUN_142b23220(lVar2,param_2,param_4,param_5);
    if (iVar1 != 0) {
      iVar1 = FUN_142b23300(param_1,lVar2,param_3,param_4,param_5);
      if (iVar1 != 0) {
        uStack_18 = 1;
        goto LAB_142c49daf;
      }
    }
  }
  uStack_18 = 0;
LAB_142c49daf:
  FUN_142b1dd90(param_5);
  return uStack_18;
}


/* address=142c49dd0 name=FUN_142c49dd0 */

longlong FUN_142c49dd0(ulonglong param_1)

{
  ulonglong uStackX_8;
  longlong lStack_18;
  
  if (param_1 < 0x80) {
    lStack_18 = 1;
  }
  else {
    lStack_18 = 1;
    for (uStackX_8 = param_1; uStackX_8 != 0; uStackX_8 = uStackX_8 >> 8) {
      lStack_18 = lStack_18 + 1;
    }
  }
  return lStack_18;
}


/* address=142c49e20 name=FUN_142c49e20 */

undefined8 FUN_142c49e20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    FUN_142afa690(6,0,0x43,s_D__a_1_s_target_release_build_bo_143cefa70,0x75);
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar1 == 0) {
      FUN_142afa690(6,0,0x80,s_D__a_1_s_target_release_build_bo_143cefae0,0x7b);
      FUN_142afa800(s_algorithm__d_143cefb48,**(undefined4 **)(param_1 + 0x10));
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_142c4b040(param_1,param_2,lVar1);
    }
  }
  return uVar2;
}


/* address=142c49f60 name=FUN_142c49f60 */

void FUN_142c49f60(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x18) != 0)) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    FUN_142b0fae0(param_1[2]);
    FUN_142b0fae0(param_1[3]);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142c4a120 name=FUN_142c4a120 */

undefined8 FUN_142c4a120(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=142c4a140 name=FUN_142c4a140 */

undefined8 FUN_142c4a140(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
     ((*(longlong *)(*param_1 + 0x28) == 0 && (*(longlong *)(*param_1 + 0x30) == 0)))) {
    FUN_142afa690(6,0,0x7d,s_D__a_1_s_target_release_build_bo_143cefe10,0xdb);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 8;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142c4a1c0 name=FUN_142c4a1c0 */

undefined8
FUN_142c4a1c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x28) == 0)) {
    FUN_142afa690(6,0,0x7d,s_D__a_1_s_target_release_build_bo_143cefe80,0xe6);
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 8) {
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_142afa690(6,0,0x7e,s_D__a_1_s_target_release_build_bo_143cefef0,0xea);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142c4a290 name=FUN_142c4a290 */

undefined8 FUN_142c4a290(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
     ((*(longlong *)(*param_1 + 0x38) == 0 && (*(longlong *)(*param_1 + 0x40) == 0)))) {
    FUN_142afa690(6,0,0x7d,s_D__a_1_s_target_release_build_bo_143ceff60,0xf3);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x10;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142c4a310 name=FUN_142c4a310 */

undefined8
FUN_142c4a310(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x38) == 0)) {
    FUN_142afa690(6,0,0x7d,s_D__a_1_s_target_release_build_bo_143ceffd0,0xfd);
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 0x10) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_142afa690(6,0,0x7e,s_D__a_1_s_target_release_build_bo_143cf0040,0x101);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142c4ae60 name=FUN_142c4ae60 */

undefined8 FUN_142c4ae60(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c4aea0 name=FUN_142c4aea0 */

undefined8
FUN_142c4aea0(int **param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  
  if (((param_1 == (int **)0x0) || (*param_1 == (int *)0x0)) ||
     (*(longlong *)(*param_1 + 0x1c) == 0)) {
    FUN_142afa690(6,0,0x65,s_D__a_1_s_target_release_build_bo_143cefc50,0xc3);
    uVar1 = 0;
  }
  else if ((param_2 == -1) || (**param_1 == param_2)) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_142afa690(6,0,0x7b,s_D__a_1_s_target_release_build_bo_143cefd30,0xcc);
      uVar1 = 0;
    }
    else if ((param_3 == 0xffffffff) || ((*(uint *)(param_1 + 4) & param_3) != 0)) {
      uVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_4,param_5,param_6);
    }
    else {
      FUN_142afa690(6,0,0x72,s_D__a_1_s_target_release_build_bo_143cefda0,0xd1);
      uVar1 = 0;
    }
  }
  else {
    FUN_142afa690(6,0,0x7d,s_D__a_1_s_target_release_build_bo_143cefcc0,199);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142c4afe0 name=FUN_142c4afe0 */

undefined * FUN_142c4afe0(int param_1)

{
  ulonglong uStack_18;
  
  uStack_18 = 0;
  while( true ) {
    if (4 < uStack_18) {
      return (undefined *)0x0;
    }
    if (*(int *)(&PTR_DAT_1432ac638)[uStack_18] == param_1) break;
    uStack_18 = uStack_18 + 1;
  }
  return (&PTR_DAT_1432ac638)[uStack_18];
}


/* address=142c4b040 name=FUN_142c4b040 */

longlong * FUN_142c4b040(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_142b0e970(0x30);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_142c4ae60(plVar2,0,0x30);
    plVar2[1] = param_2;
    *plVar2 = param_3;
    *(undefined4 *)(plVar2 + 4) = 0;
    if (param_1 != 0) {
      FUN_142b0fb30(param_1);
      plVar2[2] = param_1;
    }
    if ((*(longlong *)(param_3 + 8) != 0) && (iVar1 = (**(code **)(param_3 + 8))(plVar2), iVar1 < 1)
       ) {
      FUN_142b0fae0(plVar2[2]);
      FUN_142b0eaa0(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}


/* address=142c4b850 name=FUN_142c4b850 */

bool FUN_142c4b850(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142b1d2a0(param_2);
  if (lVar1 != 0) {
    FUN_142b1d210(*param_1);
    *param_1 = lVar1;
  }
  return lVar1 != 0;
}


/* address=142c4c9f0 name=FUN_142c4c9f0 */

int FUN_142c4c9f0(void *param_1,void *param_2,size_t param_3)

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


/* address=142c4ca30 name=FUN_142c4ca30 */

undefined8 FUN_142c4ca30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c4ca80 name=FUN_142c4ca80 */

void FUN_142c4ca80(longlong param_1)

{
  FUN_142b0eaa0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* address=142c4cab0 name=FUN_142c4cab0 */

void FUN_142c4cab0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined auStack_68 [32];
  undefined4 uStack_48;
  longlong lStack_38;
  undefined auStack_30 [32];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_68;
  if (param_3 == 0x20) {
    lStack_38 = FUN_142b0e970(0x41);
    if (lStack_38 != 0) {
      FUN_142c26e80(auStack_30,lStack_38,param_2);
      *(undefined *)(lStack_38 + 0x40) = 1;
      FUN_142c4ca80(param_1);
      *(longlong *)(param_1 + 8) = lStack_38;
    }
  }
  else {
    uStack_48 = 0x21;
    FUN_142afa690(6,0,0x66,s_D__a_1_s_target_release_build_bo_143cf1690);
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=142c4cb80 name=FUN_142c4cb80 */

undefined8 FUN_142c4cb80(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x20) {
    lVar1 = FUN_142b0e970(0x41);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_142c4ca30(lVar1 + 0x20,param_2,0x20);
      *(undefined *)(lVar1 + 0x40) = 0;
      FUN_142c4ca80(param_1);
      *(longlong *)(param_1 + 8) = lVar1;
      uVar2 = 1;
    }
  }
  else {
    FUN_142afa690(6,0,0x66,s_D__a_1_s_target_release_build_bo_143cf1700,0x37);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142c4d260 name=FUN_142c4d260 */

int FUN_142c4d260(void *param_1,void *param_2,size_t param_3)

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


/* address=142c4d2a0 name=FUN_142c4d2a0 */

undefined8 FUN_142c4d2a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c4d2f0 name=FUN_142c4d2f0 */

void FUN_142c4d2f0(longlong param_1)

{
  FUN_142b0eaa0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* address=142c4d320 name=FUN_142c4d320 */

undefined8 FUN_142c4d320(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x20) {
    lVar1 = FUN_142b0e970(0x41);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_142c4d2a0(lVar1 + 0x20,param_2,0x20);
      FUN_142c26830(lVar1,lVar1 + 0x20);
      *(undefined *)(lVar1 + 0x40) = 1;
      FUN_142c4d2f0(param_1);
      *(longlong *)(param_1 + 8) = lVar1;
      uVar2 = 1;
    }
  }
  else {
    FUN_142afa690(6,0,0x66,s_D__a_1_s_target_release_build_bo_143cf1af0,0x21);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142c4d3e0 name=FUN_142c4d3e0 */

undefined8 FUN_142c4d3e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x20) {
    lVar1 = FUN_142b0e970(0x41);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_142c4d2a0(lVar1,param_2,0x20);
      *(undefined *)(lVar1 + 0x40) = 0;
      FUN_142c4d2f0(param_1);
      *(longlong *)(param_1 + 8) = lVar1;
      uVar2 = 1;
    }
  }
  else {
    FUN_142afa690(6,0,0x66,s_D__a_1_s_target_release_build_bo_143cf1b60,0x35);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142c4db90 name=FUN_142c4db90 */

void FUN_142c4db90(PVOID param_1,ulonglong param_2)

{
  BOOLEAN BVar1;
  PVOID pvStackX_8;
  ulonglong uStackX_10;
  uint uStack_18;
  
  pvStackX_8 = param_1;
  uStackX_10 = param_2;
  while( true ) {
    if (uStackX_10 == 0) {
      return;
    }
    uStack_18 = 0xffffffff;
    if (uStackX_10 < 0xffffffff) {
      uStack_18 = (uint)uStackX_10;
    }
    BVar1 = SystemFunction036(pvStackX_8,uStack_18);
    if (BVar1 == '\0') break;
    uStackX_10 = uStackX_10 - uStack_18;
    pvStackX_8 = (PVOID)((longlong)pvStackX_8 + (ulonglong)uStack_18);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=142c4dc20 name=FUN_142c4dc20 */

void FUN_142c4dc20(undefined8 param_1,undefined8 param_2)

{
  FUN_142c4db90(param_1,param_2);
  return;
}


/* address=142c4dc50 name=FUN_142c4dc50 */

undefined4 FUN_142c4dc50(void)

{
  undefined4 uVar1;
  
  FUN_142b81b10(&DAT_143d03bd8);
  uVar1 = DAT_143d03bd0;
  FUN_142b81b70(&DAT_143d03bd8);
  return uVar1;
}


/* address=142c4dd40 name=FUN_142c4dd40 */

undefined8 FUN_142c4dd40(undefined8 *param_1)

{
  return *param_1;
}


/* address=142c4dda0 name=FUN_142c4dda0 */

undefined8 FUN_142c4dda0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=142c4ddc0 name=FUN_142c4ddc0 */

int FUN_142c4ddc0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 4);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s___143cf2090,(wchar_t *)s_D_143cf1fc0,0x57);
    iVar1 = 0;
  }
  return iVar1;
}


/* address=142c4de00 name=FUN_142c4de00 */

int FUN_142c4de00(longlong param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(param_1 + 4);
    if (iVar1 == 0) {
      FID_conflict__assert((wchar_t *)s_m_143cf21d8,(wchar_t *)s_D_143cf2110,0x60);
      iVar1 = 0;
    }
  }
  return iVar1;
}


/* address=142c4de50 name=FUN_142c4de50 */

undefined8 FUN_142c4de50(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c4de90 name=FUN_142c4de90 */

undefined8 FUN_142c4de90(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((param_3 == param_4) && (*(char *)(param_2 + 4) != '\0')) {
    *param_1 = param_2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142c4def0 name=FUN_142c4def0 */

undefined * FUN_142c4def0(void)

{
  return &DAT_1432adbc0;
}


/* address=142c4df00 name=FUN_142c4df00 */

undefined2 FUN_142c4df00(undefined2 *param_1)

{
  return *param_1;
}


/* address=142c4df80 name=FUN_142c4df80 */

undefined * FUN_142c4df80(void)

{
  return &DAT_1432adc18;
}


/* address=142c4df90 name=FUN_142c4df90 */

undefined2 FUN_142c4df90(undefined2 *param_1)

{
  return *param_1;
}


/* address=142c4dfd0 name=FUN_142c4dfd0 */

undefined * FUN_142c4dfd0(void)

{
  return &DAT_1432adc28;
}


/* address=142c4dff0 name=FUN_142c4dff0 */

undefined * FUN_142c4dff0(void)

{
  return &DAT_1432adc48;
}


/* address=142c4e000 name=FUN_142c4e000 */

undefined2 FUN_142c4e000(undefined2 *param_1)

{
  return *param_1;
}


/* address=142c4e020 name=FUN_142c4e020 */

void FUN_142c4e020(longlong param_1)

{
  (**(code **)(param_1 + 8))();
  return;
}


/* address=142c4e040 name=FUN_142c4e040 */

void FUN_142c4e040(undefined8 param_1)

{
  FUN_142c4f150(param_1,0,0x48);
  return;
}


/* address=142c4e070 name=FUN_142c4e070 */

void FUN_142c4e070(void)

{
  return;
}


/* address=142c4e100 name=FUN_142c4e100 */

undefined8 FUN_142c4e100(undefined8 param_1,undefined8 param_2)

{
  FUN_142c4f100(param_1,param_2,0x48);
  return 1;
}


/* address=142c4e210 name=FUN_142c4e210 */

undefined8 FUN_142c4e210(undefined8 *param_1)

{
  return *param_1;
}


/* address=142c4e230 name=FUN_142c4e230 */

bool FUN_142c4e230(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  bool bVar1;
  
  bVar1 = *(ulonglong *)(*param_1 + 8) <= param_4;
  if (bVar1) {
    FUN_142c4f100(param_2,param_1 + 5,*(undefined8 *)(*param_1 + 8));
    *param_3 = *(undefined8 *)(*param_1 + 8);
  }
  else {
    FUN_142afa690(6,0,0x89,s_D__a_1_s_target_release_build_bo_143cf2580,0x17f);
  }
  return bVar1;
}


/* address=142c4e370 name=FUN_142c4e370 */

void FUN_142c4e370(longlong param_1)

{
  FUN_142c4f150(param_1,0,0x2c8);
  FUN_142b3c770(param_1 + 0x18);
  return;
}


/* address=142c4e3b0 name=FUN_142c4e3b0 */

void FUN_142c4e3b0(longlong param_1)

{
  FUN_142b3c8f0(param_1 + 0x18);
  return;
}


/* address=142c4e460 name=FUN_142c4e460 */

void FUN_142c4e460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined auStack_a8 [32];
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_a8;
  FUN_142b3b560(auStack_38,*(undefined8 *)(param_5 + 0x18));
  uStack_48 = *(undefined8 *)(param_5 + 0x18);
  puStack_50 = auStack_38;
  uStack_58 = param_11;
  uStack_60 = param_10;
  uStack_68 = param_9;
  uStack_70 = param_8;
  uStack_78 = param_7;
  uStack_80 = param_6;
  lStack_88 = param_5;
  FUN_142c4e560(param_1,param_2,param_3,param_4);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=142c4e560 name=FUN_142c4e560 */

void FUN_142c4e560(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  int iVar1;
  undefined auStack_88 [32];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined auStack_30 [32];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_88;
  FUN_142c4e370(param_1);
  *(undefined4 *)(param_1 + 0x58) = 1;
  *param_1 = param_5;
  param_1[2] = param_6;
  param_1[1] = param_7;
  uStack_40 = param_13;
  uStack_48 = param_12;
  uStack_50 = param_9;
  uStack_58 = param_8;
  uStack_68 = param_3;
  uStack_60 = param_4;
  iVar1 = (**(code **)(param_5 + 0x38))(param_5,auStack_30,&uStack_38,param_2);
  if (iVar1 != 0) {
    uStack_60 = param_11;
    uStack_68 = param_10;
    iVar1 = FUN_142c4fe20(param_1,0,auStack_30,uStack_38);
    if (iVar1 != 0) goto LAB_142c4e6a8;
  }
  FUN_142c4e3b0(param_1);
LAB_142c4e6a8:
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_88);
  return;
}


/* address=142c4e6d0 name=FUN_142c4e6d0 */

void FUN_142c4e6d0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined auStack_68 [32];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined auStack_30 [32];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_68;
  FUN_142c4e370(param_1);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *param_1 = *param_2;
  param_1[2] = param_3;
  param_1[1] = param_4;
  uStack_48 = param_6;
  iVar1 = (**(code **)(*param_2 + 0x40))(param_2,auStack_30,&uStack_38,param_5);
  if (iVar1 != 0) {
    uStack_40 = param_8;
    uStack_48 = param_7;
    iVar1 = FUN_142c4fe20(param_1,0,auStack_30,uStack_38);
    if (iVar1 != 0) goto LAB_142c4e7bc;
  }
  FUN_142c4e3b0(param_1);
LAB_142c4e7bc:
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=142c4e8f0 name=FUN_142c4e8f0 */

void FUN_142c4e8f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,longlong param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  int iVar1;
  undefined auStack_88 [32];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined auStack_30 [32];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_88;
  if (*(longlong *)(*param_5 + 0x48) == 0) {
    uStack_68 = CONCAT44(uStack_68._4_4_,0x285);
    FUN_142afa690(6,0,0x7d,s_D__a_1_s_target_release_build_bo_143cf2680);
  }
  else {
    FUN_142c4e370(param_1);
    *(undefined4 *)(param_1 + 0x58) = 1;
    *param_1 = *param_5;
    param_1[2] = param_6;
    param_1[1] = param_7;
    uStack_40 = param_13;
    uStack_48 = param_12;
    uStack_50 = param_9;
    uStack_58 = param_8;
    uStack_68 = param_3;
    uStack_60 = param_4;
    iVar1 = (**(code **)(*param_5 + 0x48))(param_5,auStack_30,&uStack_38,param_2);
    if (iVar1 != 0) {
      uStack_60 = param_11;
      uStack_68 = param_10;
      iVar1 = FUN_142c4fe20(param_1,2,auStack_30,uStack_38);
      if (iVar1 != 0) goto LAB_142c4ea78;
    }
    FUN_142c4e3b0(param_1);
  }
LAB_142c4ea78:
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_88);
  return;
}


/* address=142c4ec20 name=FUN_142c4ec20 */

void FUN_142c4ec20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined auStack_88 [32];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined auStack_30 [24];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x2c0) == 0) {
    if (*(longlong *)(param_1 + 0x2b8) == -1) {
      uStack_68 = (undefined *)CONCAT44(uStack_68._4_4_,0x2d1);
      FUN_142afa690(6,0,0x45,s_D__a_1_s_target_release_build_bo_143cf2880);
    }
    else {
      uStack_38 = FUN_142b3c710(*(undefined8 *)(param_1 + 0x18));
      FUN_142c50240(param_1,auStack_30,uStack_38);
      uStack_40 = param_8;
      uStack_48 = param_7;
      uStack_50 = param_6;
      uStack_58 = param_5;
      uStack_60 = uStack_38;
      uStack_68 = auStack_30;
      iVar1 = FUN_142b3cb50(param_1 + 0x18,param_2,param_3,param_4);
      if (iVar1 != 0) {
        *(longlong *)(param_1 + 0x2b8) = *(longlong *)(param_1 + 0x2b8) + 1;
      }
    }
  }
  else {
    uStack_68 = (undefined *)CONCAT44(uStack_68._4_4_,0x2cd);
    FUN_142afa690(6,0,0x42,s_D__a_1_s_target_release_build_bo_143cf2820);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=142c4edb0 name=FUN_142c4edb0 */

void FUN_142c4edb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined auStack_88 [32];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined auStack_30 [24];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x2c0) == 0) {
    uStack_68 = (undefined *)CONCAT44(uStack_68._4_4_,0x2e5);
    FUN_142afa690(6,0,0x42,s_D__a_1_s_target_release_build_bo_143cf28e0);
  }
  else if (*(longlong *)(param_1 + 0x2b8) == -1) {
    uStack_68 = (undefined *)CONCAT44(uStack_68._4_4_,0x2e9);
    FUN_142afa690(6,0,0x45,s_D__a_1_s_target_release_build_bo_143cf2940);
  }
  else {
    uStack_38 = FUN_142b3c710(*(undefined8 *)(param_1 + 0x18));
    FUN_142c50240(param_1,auStack_30,uStack_38);
    uStack_40 = param_8;
    uStack_48 = param_7;
    uStack_50 = param_6;
    uStack_58 = param_5;
    uStack_60 = uStack_38;
    uStack_68 = auStack_30;
    iVar1 = FUN_142b3c930(param_1 + 0x18,param_2,param_3,param_4);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x2b8) = *(longlong *)(param_1 + 0x2b8) + 1;
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=142c4f0c0 name=FUN_142c4f0c0 */

undefined8 FUN_142c4f0c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=142c4f0e0 name=FUN_142c4f0e0 */

undefined8 FUN_142c4f0e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=142c4f100 name=FUN_142c4f100 */

undefined8 FUN_142c4f100(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c4f150 name=FUN_142c4f150 */

undefined8 FUN_142c4f150(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c4f190 name=FUN_142c4f190 */

void FUN_142c4f190(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_142b7ad30(param_1,param_2,sVar1);
  return;
}


/* address=142c4f1d0 name=FUN_142c4f1d0 */

undefined4
FUN_142c4f1d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_48;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7a520(auStack_38,0);
  if (iVar1 != 0) {
    iVar1 = FUN_142c4f190(auStack_38,"HPKE-v1");
    if (iVar1 != 0) {
      iVar1 = FUN_142b7ad30(auStack_38,param_6,param_7);
      if (iVar1 != 0) {
        iVar1 = FUN_142c4f190(auStack_38,param_8);
        if (iVar1 != 0) {
          iVar1 = FUN_142b7ad30(auStack_38,param_9,param_10);
          if (iVar1 != 0) {
            uVar2 = FUN_142b7ab20(auStack_38);
            uVar3 = FUN_142b7aaa0(auStack_38);
            iVar1 = FUN_142b5f230(param_2,param_3,param_1,uVar3,uVar2,param_4,param_5);
            if (iVar1 != 0) {
              uStack_48 = 1;
              goto LAB_142c4f2e5;
            }
          }
        }
      }
    }
  }
  uStack_48 = 0;
LAB_142c4f2e5:
  FUN_142b7a5e0(auStack_38);
  return uStack_48;
}


/* address=142c4f310 name=FUN_142c4f310 */

undefined4
FUN_142c4f310(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_48;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7a520(auStack_38,0);
  if (iVar1 != 0) {
    iVar1 = FUN_142b7af50(auStack_38,param_3 & 0xffff);
    if (iVar1 != 0) {
      iVar1 = FUN_142c4f190(auStack_38,"HPKE-v1");
      if (iVar1 != 0) {
        iVar1 = FUN_142b7ad30(auStack_38,param_6,param_7);
        if (iVar1 != 0) {
          iVar1 = FUN_142c4f190(auStack_38,param_8);
          if (iVar1 != 0) {
            iVar1 = FUN_142b7ad30(auStack_38,param_9,param_10);
            if (iVar1 != 0) {
              uVar2 = FUN_142b7ab20(auStack_38);
              uVar3 = FUN_142b7aaa0(auStack_38);
              iVar1 = FUN_142b5f300(param_2,param_3,param_1,param_4,param_5,uVar3,uVar2);
              if (iVar1 != 0) {
                uStack_48 = 1;
                goto LAB_142c4f43c;
              }
            }
          }
        }
      }
    }
  }
  uStack_48 = 0;
LAB_142c4f43c:
  FUN_142b7a5e0(auStack_38);
  return uStack_48;
}


/* address=142c4f460 name=FUN_142c4f460 */

void FUN_142c4f460(undefined2 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined auStack_c8 [32];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined uStack_68;
  undefined uStack_67;
  undefined uStack_66;
  undefined uStack_65;
  undefined uStack_64;
  undefined auStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_c8;
  uStack_68 = 0x4b;
  uStack_67 = 0x45;
  uStack_66 = 0x4d;
  uStack_65 = (undefined)((ushort)param_1 >> 8);
  uStack_64 = (undefined)param_1;
  uStack_80 = param_6;
  uStack_88 = param_5;
  pcStack_90 = s_eae_prk_143cf2200;
  uStack_98 = 5;
  puStack_a0 = &uStack_68;
  uStack_a8 = 0;
  iVar1 = FUN_142c4f1d0(param_2,auStack_58,&uStack_70,0);
  if (iVar1 != 0) {
    uStack_80 = param_8;
    uStack_88 = param_7;
    pcStack_90 = s_shared_secret_143cf2208;
    uStack_98 = 5;
    puStack_a0 = &uStack_68;
    uStack_a8 = uStack_70;
    iVar1 = FUN_142c4f310(param_2,param_3,param_4,auStack_58);
    if (iVar1 != 0) {
      uStack_78 = 1;
      goto LAB_142c4f597;
    }
  }
  uStack_78 = 0;
LAB_142c4f597:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=142c4fd70 name=FUN_142c4fd70 */

undefined4 FUN_142c4fd70(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined auStack_40 [64];
  
  FUN_142b7a590(auStack_40,param_2,10);
  iVar1 = FUN_142c4f190(auStack_40,&DAT_143cf2640);
  if ((((iVar1 != 0) && (iVar1 = FUN_142b7af50(auStack_40,*(undefined2 *)*param_1), iVar1 != 0)) &&
      (iVar1 = FUN_142b7af50(auStack_40,*(undefined2 *)param_1[2]), iVar1 != 0)) &&
     (iVar1 = FUN_142b7af50(auStack_40,*(undefined2 *)param_1[1]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142c4fe20 name=FUN_142c4fe20 */

void FUN_142c4fe20(longlong param_1,undefined param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_288 [32];
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  char *pcStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined auStack_200 [48];
  undefined auStack_1d0 [24];
  undefined auStack_1b8 [64];
  undefined auStack_178 [64];
  undefined auStack_138 [64];
  undefined auStack_f8 [144];
  undefined auStack_68 [80];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_288;
  iVar1 = FUN_142c4fd70(param_1,auStack_1d0);
  if (iVar1 != 0) {
    uStack_238 = (**(code **)(*(longlong *)(param_1 + 0x10) + 8))();
    uStack_240 = 0;
    puStack_248 = (undefined *)0x0;
    pcStack_250 = s_psk_id_hash_143cf2648;
    uStack_258 = 10;
    puStack_260 = auStack_1d0;
    uStack_268 = 0;
    iVar1 = FUN_142c4f1d0(uStack_238,auStack_178,&uStack_210,0);
    if (iVar1 != 0) {
      uStack_240 = param_6;
      puStack_248 = param_5;
      pcStack_250 = s_info_hash_143cf2658;
      uStack_258 = 10;
      puStack_260 = auStack_1d0;
      uStack_268 = 0;
      iVar1 = FUN_142c4f1d0(uStack_238,auStack_138,&uStack_208,0);
      if (iVar1 != 0) {
        FUN_142b7a590(auStack_200,auStack_f8,0x81);
        iVar1 = FUN_142b7af20(auStack_200,param_2);
        if ((((iVar1 != 0) &&
             (iVar1 = FUN_142b7ad30(auStack_200,auStack_178,uStack_210), iVar1 != 0)) &&
            (iVar1 = FUN_142b7ad30(auStack_200,auStack_138,uStack_208), iVar1 != 0)) &&
           (iVar1 = FUN_142b7a650(auStack_200,0,&uStack_228), iVar1 != 0)) {
          uStack_240 = 0;
          puStack_248 = (undefined *)0x0;
          pcStack_250 = s_secret_143cf2664;
          uStack_258 = 10;
          puStack_260 = auStack_1d0;
          uStack_268 = param_4;
          iVar1 = FUN_142c4f1d0(uStack_238,auStack_1b8,&uStack_220,param_3);
          if (iVar1 != 0) {
            uStack_230 = FUN_142c4e020(*(undefined8 *)(param_1 + 8));
            uStack_218 = FUN_142b3c6f0(uStack_230);
            uStack_240 = uStack_228;
            puStack_248 = auStack_f8;
            pcStack_250 = &DAT_143cf266c;
            uStack_258 = 10;
            puStack_260 = auStack_1d0;
            uStack_268 = uStack_220;
            iVar1 = FUN_142c4f310(uStack_238,auStack_68,uStack_218,auStack_1b8);
            if (iVar1 != 0) {
              puStack_260 = (undefined *)0x0;
              uStack_268 = 0;
              iVar1 = FUN_142b3c860(param_1 + 0x18,uStack_230,auStack_68,uStack_218);
              if (iVar1 != 0) {
                uVar2 = FUN_142b3c710(uStack_230);
                uStack_240 = uStack_228;
                puStack_248 = auStack_f8;
                pcStack_250 = s_base_nonce_143cf2670;
                uStack_258 = 10;
                puStack_260 = auStack_1d0;
                uStack_268 = uStack_220;
                iVar1 = FUN_142c4f310(uStack_238,param_1 + 0x260,uVar2,auStack_1b8);
                if (iVar1 != 0) {
                  uVar2 = FUN_142b124a0(uStack_238);
                  uStack_240 = uStack_228;
                  puStack_248 = auStack_f8;
                  pcStack_250 = &DAT_143cf267c;
                  uStack_258 = 10;
                  puStack_260 = auStack_1d0;
                  uStack_268 = uStack_220;
                  FUN_142c4f310(uStack_238,param_1 + 0x278,uVar2,auStack_1b8);
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_288);
  return;
}


/* address=142c50240 name=FUN_142c50240 */

void FUN_142c50240(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  if (param_3 < 8) {
    FID_conflict__assert((wchar_t *)s_n_143cf2800,(wchar_t *)s_D_143cf2740,0x2b9);
  }
  FUN_142c4f150(param_2,0,param_3);
  uStack_18 = *(ulonglong *)(param_1 + 0x2b8);
  for (uStack_20 = 0; uStack_20 < 8; uStack_20 = uStack_20 + 1) {
    *(char *)(param_2 + -1 + (param_3 - uStack_20)) = (char)uStack_18;
    uStack_18 = uStack_18 >> 8;
  }
  for (uStack_28 = 0; uStack_28 < param_3; uStack_28 = uStack_28 + 1) {
    *(byte *)(param_2 + uStack_28) =
         *(byte *)(param_2 + uStack_28) ^ *(byte *)(param_1 + uStack_28 + 0x260);
  }
  return;
}


/* address=142c50360 name=FUN_142c50360 */

void FUN_142c50360(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c50380 name=FUN_142c50380 */

void FUN_142c50380(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c503b0 name=FUN_142c503b0 */

void FUN_142c503b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05b60(param_1,param_2,param_3);
  return;
}


/* address=142c503f0 name=FUN_142c503f0 */

void FUN_142c503f0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05d40(param_1,param_2);
  return;
}


/* address=142c50420 name=FUN_142c50420 */

undefined8 FUN_142c50420(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142c50360(*param_1);
  }
  return uVar1;
}


/* address=142c50450 name=FUN_142c50450 */

undefined8 FUN_142c50450(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142c16060(param_2);
  if (lVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = FUN_142c504a0(param_1,lVar1,param_3);
  }
  return uVar2;
}


/* address=142c504a0 name=FUN_142c504a0 */

int FUN_142c504a0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iStackX_18;
  
  if (param_1 == (undefined8 *)0x0) {
    iStackX_18 = -1;
  }
  else {
    iStackX_18 = param_3;
    if (param_3 < 0) {
      iStackX_18 = -1;
    }
    uVar1 = *param_1;
    iVar2 = FUN_142c50360(uVar1);
    do {
      iStackX_18 = iStackX_18 + 1;
      if (iVar2 <= iStackX_18) {
        return -1;
      }
      puVar4 = (undefined8 *)FUN_142c50380(uVar1,(longlong)iStackX_18);
      iVar3 = FUN_142c15c50(*puVar4,param_2);
    } while (iVar3 != 0);
  }
  return iStackX_18;
}


/* address=142c50560 name=FUN_142c50560 */

undefined8 FUN_142c50560(undefined8 *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((param_1 != (undefined8 *)0x0) && (-1 < param_2)) &&
     (uVar1 = FUN_142c50360(*param_1), (ulonglong)(longlong)param_2 < uVar1)) {
    uVar2 = FUN_142c50380(*param_1,(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=142c505c0 name=FUN_142c505c0 */

longlong FUN_142c505c0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iStack_38;
  int iStack_34;
  
  if (((param_1 == (undefined8 *)0x0) || (param_2 < 0)) ||
     (uVar3 = FUN_142c50360(*param_1), uVar3 <= (ulonglong)(longlong)param_2)) {
    lVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar4 = FUN_142c503f0(uVar1,(longlong)param_2);
    iVar2 = FUN_142c50360(uVar1);
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_2 != iVar2) {
      if (param_2 == 0) {
        iStack_34 = *(int *)(lVar4 + 0x10) + -1;
      }
      else {
        lVar5 = FUN_142c50380(uVar1,(longlong)(param_2 + -1));
        iStack_34 = *(int *)(lVar5 + 0x10);
      }
      lVar5 = FUN_142c50380(uVar1,(longlong)param_2);
      iStack_38 = param_2;
      if (iStack_34 + 1 < *(int *)(lVar5 + 0x10)) {
        for (; iStack_38 < iVar2; iStack_38 = iStack_38 + 1) {
          lVar5 = FUN_142c50380(uVar1,(longlong)iStack_38);
          *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
        }
      }
    }
  }
  return lVar4;
}


/* address=142c50700 name=FUN_142c50700 */

undefined8 FUN_142c50700(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iStackX_18;
  int iStackX_20;
  int iStack_34;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    iVar2 = FUN_142c50360(uVar1);
    iStackX_18 = iVar2;
    if ((param_3 <= iVar2) && (iStackX_18 = param_3, param_3 < 0)) {
      iStackX_18 = iVar2;
    }
    bVar5 = param_4 == 0;
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_4 == -1) {
      if (iStackX_18 != 0) {
        lVar3 = FUN_142c50380(uVar1,(longlong)(iStackX_18 + -1));
        iStackX_20 = *(int *)(lVar3 + 0x10);
      }
      else {
        iStackX_20 = 0;
      }
      bVar5 = iStackX_18 == 0 || bVar5;
    }
    else if (iStackX_18 < iVar2) {
      lVar3 = FUN_142c50380(uVar1,(longlong)iStackX_18);
      iStackX_20 = *(int *)(lVar3 + 0x10);
    }
    else if (iStackX_18 == 0) {
      iStackX_20 = 0;
    }
    else {
      lVar3 = FUN_142c50380(uVar1,(longlong)(iStackX_18 + -1));
      iStackX_20 = *(int *)(lVar3 + 0x10) + 1;
    }
    lVar3 = FUN_142c05690(param_2);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x10) = iStackX_20;
      lVar4 = FUN_142c503b0(uVar1,lVar3,(longlong)iStackX_18);
      if (lVar4 != 0) {
        if (bVar5) {
          iVar2 = FUN_142c50360(uVar1);
          while (iStack_34 = iStackX_18 + 1, iStack_34 < iVar2) {
            lVar3 = FUN_142c50380(uVar1,(longlong)iStack_34);
            *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
            iStackX_18 = iStack_34;
          }
        }
        return 1;
      }
    }
    if (lVar3 != 0) {
      FUN_142c055f0(lVar3);
    }
  }
  return 0;
}


/* address=142c50a10 name=FUN_142c50a10 */

undefined4
FUN_142c50a10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142c50de0(0,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142c50700(param_1,lVar2,param_6,param_7);
    FUN_142c055f0(lVar2);
  }
  return uVar1;
}


/* address=142c50aa0 name=FUN_142c50aa0 */

undefined8 FUN_142c50aa0(undefined8 *param_1)

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


/* address=142c50ac0 name=FUN_142c50ac0 */

bool FUN_142c50ac0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    FUN_142afa690(0xb,0,0x43,s_D__a_1_s_target_release_build_bo_143cf2b70,0x15a);
    bVar2 = false;
  }
  else {
    FUN_142b6d6c0(*param_1);
    lVar1 = FUN_142c15a70(param_2);
    *param_1 = lVar1;
    bVar2 = *param_1 != 0;
  }
  return bVar2;
}


/* address=142c50b50 name=FUN_142c50b50 */

undefined8 FUN_142c50b50(longlong param_1)

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


/* address=142c50b80 name=FUN_142c50b80 */

bool FUN_142c50b80(undefined8 *param_1,uint param_2,char *param_3,size_t param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  size_t sStackX_20;
  
  if ((param_1 == (undefined8 *)0x0) || ((param_3 == (char *)0x0 && (param_4 != 0)))) {
    bVar4 = false;
  }
  else if (((int)param_2 < 1) || ((param_2 & 0x1000) == 0)) {
    sStackX_20 = param_4;
    if ((longlong)param_4 < 0) {
      sStackX_20 = strlen(param_3);
    }
    iVar2 = FUN_142c137a0(param_1[1],param_3,sStackX_20);
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
    uVar1 = FUN_142c15d10(*param_1);
    lVar3 = FUN_142c7add0(param_1 + 1,param_3,param_4,param_2,uVar1);
    bVar4 = lVar3 != 0;
  }
  return bVar4;
}


/* address=142c50c80 name=FUN_142c50c80 */

longlong FUN_142c50c80(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  int iVar1;
  longlong lStack_18;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    lStack_18 = FUN_142c055d0();
    if (lStack_18 == 0) {
      return 0;
    }
  }
  else {
    lStack_18 = *param_1;
  }
  iVar1 = FUN_142c50ac0(lStack_18,param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_142c50b80(lStack_18,param_3,param_4,param_5), iVar1 == 0)) {
    if ((param_1 == (longlong *)0x0) || (lStack_18 != *param_1)) {
      FUN_142c055f0(lStack_18);
    }
    lStack_18 = 0;
  }
  else if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    *param_1 = lStack_18;
  }
  return lStack_18;
}


/* address=142c50d60 name=FUN_142c50d60 */

undefined8
FUN_142c50d60(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_142c16060(param_2);
  if (lVar1 == 0) {
    FUN_142afa690(0xb,0,0x81,s_D__a_1_s_target_release_build_bo_143cf2b00,CONCAT44(uVar3,0x132));
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c50c80(param_1,lVar1,param_3,param_4,param_5);
  }
  return uVar2;
}


/* address=142c50de0 name=FUN_142c50de0 */

undefined8
FUN_142c50de0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_142c16250(param_2,0);
  if (lVar1 == 0) {
    FUN_142afa690(0xb,0,0x6f,s_D__a_1_s_target_release_build_bo_143cf2a90,CONCAT44(uVar3,0x123));
    FUN_142afa7b0(2,s_name__143cf2af4,param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c50c80(param_1,lVar1,param_3,param_4,param_5);
    FUN_142b6d6c0(lVar1);
  }
  return uVar2;
}


/* address=142c50e90 name=FUN_142c50e90 */

int FUN_142c50e90(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iStack_14;
  
  iVar1 = FUN_142c504a0(param_1,param_2,0xffffffff);
  if (iVar1 < 0) {
    iStack_14 = -1;
  }
  else {
    uVar2 = FUN_142c50560(param_1,iVar1);
    piVar3 = (int *)FUN_142c50b50(uVar2);
    if (param_4 + -1 < *piVar3) {
      iStack_14 = param_4 + -1;
    }
    else {
      iStack_14 = *piVar3;
    }
    if (param_3 == 0) {
      iStack_14 = *piVar3;
    }
    else {
      FUN_142c50fd0(param_3,*(undefined8 *)(piVar3 + 2),(longlong)iStack_14);
      *(undefined *)(param_3 + iStack_14) = 0;
    }
  }
  return iStack_14;
}


/* address=142c50fd0 name=FUN_142c50fd0 */

undefined8 FUN_142c50fd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c51010 name=FUN_142c51010 */

undefined8 FUN_142c51010(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uStack_18;
  
  uStack_18 = 0;
  while( true ) {
    if (0x11 < uStack_18) {
      return 0;
    }
    if (*(int *)(&DAT_1432adc60 + uStack_18 * 0xc) == param_1) break;
    uStack_18 = uStack_18 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(&DAT_1432adc64 + uStack_18 * 0xc);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(&DAT_1432adc68 + uStack_18 * 0xc);
  }
  return 1;
}


/* address=142c510b0 name=FUN_142c510b0 */

undefined8 FUN_142c510b0(undefined4 *param_1,int param_2,int param_3)

{
  ulonglong uStack_18;
  
  uStack_18 = 0;
  while( true ) {
    if (0x11 < uStack_18) {
      return 0;
    }
    if ((*(int *)(&DAT_1432adc64 + uStack_18 * 0xc) == param_2) &&
       (*(int *)(&DAT_1432adc68 + uStack_18 * 0xc) == param_3)) break;
    uStack_18 = uStack_18 + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(&DAT_1432adc60 + uStack_18 * 0xc);
  }
  return 1;
}


/* address=142c51140 name=FUN_142c51140 */

int FUN_142c51140(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piStack_30;
  int aiStack_28 [2];
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  if (param_2 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_142c52200(param_2[1]);
    if (iVar1 == -1) {
      FUN_142afa690(0xc,0,0xb9,s_D__a_1_s_target_release_build_bo_143cf2df0,0x17e);
      iVar1 = -1;
    }
    else {
      piStack_30 = aiStack_28;
      uStack_20 = 0;
      aiStack_28[0] = 0;
      uStack_18 = 0;
      iVar1 = FUN_142c7b420(&piStack_30,*(undefined8 *)(param_2 + 2),(longlong)*param_2,iVar1,0x2000
                           );
      if (-1 < iVar1) {
        *param_1 = uStack_20;
        iVar1 = aiStack_28[0];
      }
    }
  }
  return iVar1;
}


/* address=142c51220 name=FUN_142c51220 */

void FUN_142c51220(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  int iStack_60;
  uint uStack_58;
  undefined auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_98;
  FUN_142b78260(auStack_50,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  iVar1 = FUN_142b79770(auStack_50,&uStack_40,0);
  if (iVar1 == 0) {
    FUN_142b6c1a0(param_1,s_Bad_time_value_143cf2e98);
  }
  else {
    iStack_60 = iStack_2c + 0x76c;
    uStack_68 = uStack_40;
    uStack_70 = uStack_3c;
    uStack_78 = uStack_38;
    iVar1 = FUN_142c72f50(param_1,s__s__2d__02d__02d__02d__d_GMT_143cf2ea8,
                          (&PTR_DAT_1432add60)[iStack_30],uStack_34);
    uStack_58 = (uint)(0 < iVar1);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=142c51320 name=FUN_142c51320 */

void FUN_142c51320(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  int iStack_60;
  uint uStack_58;
  undefined auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_98;
  FUN_142b78260(auStack_50,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
  iVar1 = FUN_142b79730(auStack_50,&uStack_40,0);
  if (iVar1 == 0) {
    FUN_142b6c1a0(param_1,s_Bad_time_value_143cf2e68);
  }
  else {
    iStack_60 = iStack_2c + 0x76c;
    uStack_68 = uStack_40;
    uStack_70 = uStack_3c;
    uStack_78 = uStack_38;
    iVar1 = FUN_142c72f50(param_1,s__s__2d__02d__02d__02d__d_GMT_143cf2e78,
                          (&PTR_DAT_1432add60)[iStack_30],uStack_34);
    uStack_58 = (uint)(0 < iVar1);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=142c51420 name=FUN_142c51420 */

undefined8 FUN_142c51420(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) == 0x17) {
    uVar1 = FUN_142c51220(param_1,param_2);
  }
  else if (*(int *)(param_2 + 4) == 0x18) {
    uVar1 = FUN_142c51320(param_1,param_2);
  }
  else {
    FUN_142b6c1a0(param_1,s_Bad_time_value_143cf2e58);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142c51490 name=FUN_142c51490 */

void FUN_142c51490(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined auStack_98 [32];
  int iStack_78;
  int iStack_74;
  longlong lStack_70;
  undefined auStack_68 [80];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_98;
  if (param_2 != (int *)0x0) {
    iStack_78 = 0;
    lStack_70 = *(longlong *)(param_2 + 2);
    for (iStack_74 = 0; iStack_74 < *param_2; iStack_74 = iStack_74 + 1) {
      if ((*(char *)(lStack_70 + iStack_74) < '\x7f') &&
         ((('\x1f' < *(char *)(lStack_70 + iStack_74) || (*(char *)(lStack_70 + iStack_74) == '\n'))
          || (*(char *)(lStack_70 + iStack_74) == '\r')))) {
        auStack_68[iStack_78] = *(undefined *)(lStack_70 + iStack_74);
      }
      else {
        auStack_68[iStack_78] = 0x2e;
      }
      iStack_78 = iStack_78 + 1;
      if (0x4f < iStack_78) {
        iVar1 = FUN_142b6c000(param_1,auStack_68,iStack_78);
        if (iVar1 < 1) goto LAB_142c515dd;
        iStack_78 = 0;
      }
    }
    if (0 < iStack_78) {
      FUN_142b6c000(param_1,auStack_68,iStack_78);
    }
  }
LAB_142c515dd:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_98);
  return;
}


/* address=142c51600 name=FUN_142c51600 */

int FUN_142c51600(longlong param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  size_t sVar2;
  char acStack_28 [4];
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_14;
  char *pcStack_10;
  
  uStack_1c = param_2[1];
  iStack_24 = 0;
  if ((param_3 & 0x40) != 0) {
    pcStack_10 = (char *)FUN_142c7b3d0(uStack_1c);
    sVar2 = strlen(pcStack_10);
    iStack_24 = iStack_24 + (int)sVar2;
    iVar1 = FUN_142c518e0(param_1,pcStack_10,iStack_24);
    if ((iVar1 == 0) || (iVar1 = FUN_142c518e0(param_1,&DAT_143cf2d08,1), iVar1 == 0)) {
      return -1;
    }
    iStack_24 = iStack_24 + 1;
  }
  if ((param_3 & 0x80) == 0) {
    if ((param_3 & 0x20) == 0) {
      iStack_20 = FUN_142c52200(uStack_1c);
      if ((iStack_20 == -1) && ((param_3 & 0x100) == 0)) {
        iStack_20 = 0x1001;
      }
    }
    else {
      iStack_20 = 0x1001;
    }
  }
  else {
    iStack_20 = -1;
  }
  if (iStack_20 == -1) {
    iVar1 = FUN_142c520d0(param_3,param_1,param_2);
    if (iVar1 < 0) {
      iStack_24 = -1;
    }
    else {
      iStack_24 = iStack_24 + iVar1;
    }
  }
  else {
    acStack_28[0] = '\0';
    iStack_14 = FUN_142c51c60(*(undefined8 *)(param_2 + 2),*param_2,iStack_20,param_3,acStack_28,0);
    if (iStack_14 < 0) {
      iStack_24 = -1;
    }
    else {
      iStack_24 = iStack_24 + iStack_14;
      if (acStack_28[0] != '\0') {
        iStack_24 = iStack_24 + 2;
      }
      if ((param_1 != 0) &&
         ((((acStack_28[0] != '\0' && (iVar1 = FUN_142c518e0(param_1,&DAT_143cf2de4,1), iVar1 == 0))
           || (iVar1 = FUN_142c51c60(*(undefined8 *)(param_2 + 2),*param_2,iStack_20,param_3,0,
                                     param_1), iVar1 < 0)) ||
          ((acStack_28[0] != '\0' && (iVar1 = FUN_142c518e0(param_1,&DAT_143cf2de8,1), iVar1 == 0)))
          ))) {
        iStack_24 = -1;
      }
    }
  }
  return iStack_24;
}


/* address=142c518e0 name=FUN_142c518e0 */

undefined4 FUN_142c518e0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_142b6c000(param_1,param_2,param_3), iVar1 != param_3)) {
    return 0;
  }
  return 1;
}


/* address=142c51940 name=FUN_142c51940 */

undefined4 FUN_142c51940(byte param_1)

{
  undefined4 uStack_18;
  
  if ((param_1 < 0x20) || (param_1 == 0x7f)) {
    uStack_18 = 1;
  }
  else {
    uStack_18 = 0;
  }
  return uStack_18;
}


/* address=142c51980 name=FUN_142c51980 */

void FUN_142c51980(uint param_1,uint param_2,undefined *param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  int iVar1;
  size_t sVar2;
  undefined uStackX_8;
  undefined auStack_58 [32];
  undefined auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  char acStack_20 [16];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  uStackX_8 = (undefined)param_1;
  auStack_38[0] = uStackX_8;
  if (param_1 < 0x10000) {
    if (param_1 < 0x100) {
      if (((param_2 & 4) == 0) || (param_1 < 0x80)) {
        if (((param_2 & 2) == 0) || (iVar1 = FUN_142c51940(uStackX_8), iVar1 == 0)) {
          if ((param_2 & 1) == 0) {
            if (((param_2 & 0xf) == 0) || (param_1 != 0x5c)) {
              iVar1 = FUN_142c518e0(param_4,auStack_38,1);
              if (iVar1 == 0) {
                uStack_2c = 0xffffffff;
              }
              else {
                uStack_2c = 1;
              }
              goto LAB_142c51c3b;
            }
            _snprintf(acStack_20,0x10,&DAT_143cf2c38,0x5c);
          }
          else if ((param_1 == 0x5c) || (param_1 == 0x22)) {
            _snprintf(acStack_20,0x10,&DAT_143cf2c30,(ulonglong)param_1);
          }
          else {
            if ((((((param_1 != 0x2c) && (param_1 != 0x2b)) && (param_1 != 0x3c)) &&
                 ((param_1 != 0x3e && (param_1 != 0x3b)))) &&
                ((param_5 == 0 || ((param_1 != 0x20 && (param_1 != 0x23)))))) &&
               ((param_6 == 0 || (param_1 != 0x20)))) {
              iVar1 = FUN_142c518e0(param_4,auStack_38,1);
              if (iVar1 == 0) {
                uStack_30 = 0xffffffff;
              }
              else {
                uStack_30 = 1;
              }
              goto LAB_142c51c3b;
            }
            if ((param_2 & 8) != 0) {
              if (param_3 != (undefined *)0x0) {
                *param_3 = 1;
              }
              iVar1 = FUN_142c518e0(param_4,auStack_38,1);
              if (iVar1 == 0) {
                uStack_34 = 0xffffffff;
              }
              else {
                uStack_34 = 1;
              }
              goto LAB_142c51c3b;
            }
            _snprintf(acStack_20,0x10,&DAT_143cf2c34,(ulonglong)param_1);
          }
        }
        else {
          _snprintf(acStack_20,0x10,s___02X_143cf2c28,(ulonglong)param_1);
        }
      }
      else {
        _snprintf(acStack_20,0x10,s___02X_143cf2c20,(ulonglong)param_1);
      }
    }
    else {
      _snprintf(acStack_20,0x10,s__U_04X_143cf2c18,(ulonglong)param_1);
    }
  }
  else {
    _snprintf(acStack_20,0x10,s__W_08X_143cf2c10,(ulonglong)param_1);
  }
  sVar2 = strlen(acStack_20);
  uStack_28 = (undefined4)sVar2;
  iVar1 = FUN_142c518e0(param_4,acStack_20,sVar2 & 0xffffffff);
  if (iVar1 == 0) {
    uStack_24 = 0xffffffff;
  }
  else {
    uStack_24 = uStack_28;
  }
LAB_142c51c3b:
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c51c60 name=FUN_142c51c60 */

void FUN_142c51c60(longlong param_1,int param_2,int param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined auStack_d8 [32];
  uint uStack_b8;
  uint uStack_b0;
  int iStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  ulonglong uStack_98;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  code *pcStack_68;
  ulonglong uStack_60;
  undefined auStack_58 [16];
  undefined auStack_48 [48];
  undefined auStack_18 [8];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_d8;
  iStack_a4 = param_3;
  if (param_3 == 0x1000) {
    pcStack_68 = FUN_142c72950;
    uStack_a0 = 0x96;
  }
  else if (param_3 == 0x1001) {
    pcStack_68 = (code *)&LAB_142c72ae0;
    uStack_a0 = 0x44;
  }
  else if (param_3 == 0x1002) {
    pcStack_68 = FUN_142c72b30;
    uStack_a0 = 0x8e;
  }
  else {
    if (param_3 != 0x1004) {
      FID_conflict__assert((wchar_t *)&DAT_143cf2d04,(wchar_t *)s_D_143cf2c40,0x9c);
      goto LAB_142c51fcd;
    }
    pcStack_68 = FUN_142c72b90;
    uStack_a0 = 0x95;
  }
  FUN_142b78260(auStack_58,param_1,(longlong)param_2);
  iStack_a8 = 0;
  while (lVar2 = FUN_142b782f0(auStack_58), lVar2 != 0) {
    lVar2 = FUN_142b782d0(auStack_58);
    uStack_90 = (uint)(lVar2 == param_1);
    uStack_78 = uStack_90;
    iVar1 = (*pcStack_68)(auStack_58,&uStack_74);
    if (iVar1 == 0) {
      uStack_b8 = 0xa7;
      FUN_142afa690(0xc,0,uStack_a0,s_D__a_1_s_target_release_build_bo_143cf2d10);
      break;
    }
    lVar2 = FUN_142b782f0(auStack_58);
    uStack_8c = (uint)(lVar2 == 0);
    uStack_7c = uStack_8c;
    if ((param_4 & 0x10) == 0) {
      uStack_b0 = uStack_8c;
      uStack_b8 = uStack_78;
      iStack_70 = FUN_142c51980(uStack_74,param_4,param_5,param_6);
      if (iStack_70 < 0) break;
      iStack_a8 = iStack_a8 + iStack_70;
    }
    else {
      FUN_142b7a590(auStack_48,auStack_18,6);
      iVar1 = FUN_142c72c30(auStack_48,uStack_74);
      if (iVar1 == 0) {
        uStack_b8 = 0xb0;
        FUN_142afa690(0xc,0,0x44,s_D__a_1_s_target_release_build_bo_143cf2d80);
        break;
      }
      uStack_60 = FUN_142b7ab20(auStack_48);
      for (uStack_98 = 0; uStack_98 < uStack_60; uStack_98 = uStack_98 + 1) {
        if ((uStack_7c == 0) || (uStack_98 != uStack_60 - 1)) {
          uStack_88 = 0;
        }
        else {
          uStack_88 = 1;
        }
        if ((uStack_78 == 0) || (uStack_98 != 0)) {
          uStack_84 = 0;
        }
        else {
          uStack_84 = 1;
        }
        uStack_b0 = uStack_88;
        uStack_b8 = uStack_84;
        iStack_80 = FUN_142c51980(auStack_18[uStack_98],param_4,param_5,param_6);
        if (iStack_80 < 0) goto LAB_142c51fcd;
        iStack_a8 = iStack_a8 + iStack_80;
      }
    }
  }
LAB_142c51fcd:
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=142c51ff0 name=FUN_142c51ff0 */

int FUN_142c51ff0(longlong param_1,byte *param_2,int param_3)

{
  int iVar1;
  char cStack_28;
  char cStack_27;
  byte *pbStack_20;
  byte *pbStack_18;
  
  if (param_1 != 0) {
    pbStack_18 = param_2 + param_3;
    for (pbStack_20 = param_2; pbStack_20 != pbStack_18; pbStack_20 = pbStack_20 + 1) {
      cStack_28 = "0123456789ABCDEF"[(int)(uint)*pbStack_20 >> 4];
      cStack_27 = "0123456789ABCDEF"[(int)(*pbStack_20 & 0xf)];
      iVar1 = FUN_142c518e0(param_1,&cStack_28,2);
      if (iVar1 == 0) {
        return -1;
      }
    }
  }
  return param_3 << 1;
}


/* address=142c520d0 name=FUN_142c520d0 */

int FUN_142c520d0(uint param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uStack_28;
  int aiStack_20 [2];
  undefined4 *puStack_18;
  
  iVar1 = FUN_142c518e0(param_2,&DAT_143cf2c3c,1);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else if ((param_1 & 0x200) == 0) {
    iVar1 = FUN_142c51ff0(param_2,*(undefined8 *)(param_3 + 2),*param_3);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  else {
    aiStack_20[0] = param_3[1];
    if (aiStack_20[0] == 0x102) {
      aiStack_20[0] = 2;
    }
    else if (aiStack_20[0] == 0x10a) {
      aiStack_20[0] = 10;
    }
    uStack_28 = 0;
    puStack_18 = param_3;
    iVar1 = FUN_142c0e680(aiStack_20,&uStack_28);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_142c51ff0(param_2,uStack_28,iVar1);
      FUN_142b0eaa0(uStack_28);
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


/* address=142c52200 name=FUN_142c52200 */

undefined8 FUN_142c52200(undefined4 param_1)

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


/* address=142c522d0 name=FUN_142c522d0 */

void FUN_142c522d0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c13670(param_1,param_2);
  return;
}


/* address=142c52300 name=FUN_142c52300 */

void FUN_142c52300(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_142c137a0(param_1,param_2,(longlong)param_3);
  return;
}


/* address=142c52330 name=FUN_142c52330 */

void FUN_142c52330(longlong *param_1)

{
  FUN_142c52e20(*(undefined8 *)(*param_1 + 0x48));
  return;
}


/* address=142c52360 name=FUN_142c52360 */

void FUN_142c52360(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_142c52e50(*(undefined8 *)(*param_1 + 0x48),param_2,param_3);
  return;
}


/* address=142c52420 name=FUN_142c52420 */

void FUN_142c52420(longlong *param_1,undefined4 param_2)

{
  FUN_142c53020(*(undefined8 *)(*param_1 + 0x48),param_2);
  return;
}


/* address=142c524e0 name=FUN_142c524e0 */

void FUN_142c524e0(longlong *param_1)

{
  FUN_142c52e20(*(undefined8 *)(*param_1 + 0x30));
  return;
}


/* address=142c52510 name=FUN_142c52510 */

void FUN_142c52510(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_142c52e50(*(undefined8 *)(*param_1 + 0x30),param_2,param_3);
  return;
}


/* address=142c525d0 name=FUN_142c525d0 */

void FUN_142c525d0(longlong *param_1,undefined4 param_2)

{
  FUN_142c53020(*(undefined8 *)(*param_1 + 0x30),param_2);
  return;
}


/* address=142c52630 name=FUN_142c52630 */

bool FUN_142c52630(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c530e0(*param_1 + 0x30,param_2,param_3);
  return lVar1 != 0;
}


/* address=142c52690 name=FUN_142c52690 */

void FUN_142c52690(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142c58240(*(undefined8 *)(*param_1 + 0x48),param_2,param_3,param_4);
  return;
}


/* address=142c52730 name=FUN_142c52730 */

void FUN_142c52730(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142c58240(*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4);
  return;
}


/* address=142c52780 name=FUN_142c52780 */

void FUN_142c52780(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_142c58440(*param_1 + 0x30,param_2,param_3,param_4,param_5);
  return;
}


/* address=142c52980 name=FUN_142c52980 */

void FUN_142c52980(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142c58240(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}


/* address=142c52a10 name=FUN_142c52a10 */

undefined8
FUN_142c52a10(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142c16060(param_2);
  if (lVar1 == 0) {
    FUN_142afa690(0xb,0,0x81,s_D__a_1_s_target_release_build_bo_143cf3060,0xc9);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c52a90(param_1,lVar1,param_3,param_4);
  }
  return uVar2;
}


/* address=142c52a90 name=FUN_142c52a90 */

longlong FUN_142c52a90(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lStack_18;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    lStack_18 = FUN_142c0cff0();
    if (lStack_18 == 0) {
      return 0;
    }
  }
  else {
    lStack_18 = *param_1;
  }
  iVar1 = FUN_142c52c00(lStack_18,param_2);
  if (((iVar1 == 0) || (iVar1 = FUN_142c52c70(lStack_18,param_3), iVar1 == 0)) ||
     (iVar1 = FUN_142c52cc0(lStack_18,param_4), iVar1 == 0)) {
    if ((param_1 == (longlong *)0x0) || (lStack_18 != *param_1)) {
      FUN_142c0d010(lStack_18);
    }
    lStack_18 = 0;
  }
  else if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    *param_1 = lStack_18;
  }
  return lStack_18;
}


/* address=142c52b80 name=FUN_142c52b80 */

undefined8 FUN_142c52b80(undefined8 *param_1)

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


/* address=142c52ba0 name=FUN_142c52ba0 */

undefined8 FUN_142c52ba0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}


/* address=142c52bd0 name=FUN_142c52bd0 */

undefined8 FUN_142c52bd0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 8) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142c52c00 name=FUN_142c52c00 */

bool FUN_142c52c00(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    bVar2 = false;
  }
  else {
    FUN_142b6d6c0(*param_1);
    lVar1 = FUN_142c15a70(param_2);
    *param_1 = lVar1;
    bVar2 = *param_1 != 0;
  }
  return bVar2;
}


/* address=142c52c70 name=FUN_142c52c70 */

undefined8 FUN_142c52c70(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uStack_18;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      uStack_18 = 0xffffffff;
    }
    else {
      uStack_18 = 0xff;
    }
    *(undefined4 *)(param_1 + 8) = uStack_18;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142c52cc0 name=FUN_142c52cc0 */

undefined8 FUN_142c52cc0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_142c52300(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 2),*param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=142c52d20 name=FUN_142c52d20 */

void FUN_142c52d20(void)

{
  FUN_142b05960();
  return;
}


/* address=142c52d40 name=FUN_142c52d40 */

void FUN_142c52d40(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c52d60 name=FUN_142c52d60 */

void FUN_142c52d60(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c52d90 name=FUN_142c52d90 */

void FUN_142c52d90(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142c52db0 name=FUN_142c52db0 */

void FUN_142c52db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05b60(param_1,param_2,param_3);
  return;
}


/* address=142c52df0 name=FUN_142c52df0 */

void FUN_142c52df0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05d40(param_1,param_2);
  return;
}


/* address=142c52e20 name=FUN_142c52e20 */

undefined8 FUN_142c52e20(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142c52d40(param_1);
  }
  return uVar1;
}


/* address=142c52e50 name=FUN_142c52e50 */

undefined8 FUN_142c52e50(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142c16060(param_2);
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_142c52ea0(param_1,lVar1,param_3);
  }
  return uVar2;
}


/* address=142c52ea0 name=FUN_142c52ea0 */

int FUN_142c52ea0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iStackX_18;
  
  if (param_1 != 0) {
    iStackX_18 = param_3 + 1;
    if (iStackX_18 < 0) {
      iStackX_18 = 0;
    }
    iVar1 = FUN_142c52d40(param_1);
    for (; iStackX_18 < iVar1; iStackX_18 = iStackX_18 + 1) {
      puVar3 = (undefined8 *)FUN_142c52d60(param_1,(longlong)iStackX_18);
      iVar2 = FUN_142c15c50(*puVar3,param_2);
      if (iVar2 == 0) {
        return iStackX_18;
      }
    }
  }
  return -1;
}


/* address=142c52f50 name=FUN_142c52f50 */

int FUN_142c52f50(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iStackX_18;
  uint uStack_18;
  
  if (param_1 != 0) {
    iStackX_18 = param_3 + 1;
    if (iStackX_18 < 0) {
      iStackX_18 = 0;
    }
    uStack_18 = (uint)(param_2 != 0);
    iVar1 = FUN_142c52d40(param_1);
    for (; iStackX_18 < iVar1; iStackX_18 = iStackX_18 + 1) {
      uVar3 = FUN_142c52d60(param_1,(longlong)iStackX_18);
      uVar2 = FUN_142c52bd0(uVar3);
      if (uVar2 == uStack_18) {
        return iStackX_18;
      }
    }
  }
  return -1;
}


/* address=142c53020 name=FUN_142c53020 */

undefined8 FUN_142c53020(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (-1 < param_2)) &&
     (uVar1 = FUN_142c52d40(param_1), (ulonglong)(longlong)param_2 < uVar1)) {
    uVar2 = FUN_142c52d60(param_1,(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=142c53080 name=FUN_142c53080 */

undefined8 FUN_142c53080(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (-1 < param_2)) &&
     (uVar1 = FUN_142c52d40(param_1), (ulonglong)(longlong)param_2 < uVar1)) {
    uVar2 = FUN_142c52df0(param_1,(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=142c530e0 name=FUN_142c530e0 */

longlong FUN_142c530e0(longlong *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int iStackX_18;
  longlong lStack_20;
  longlong lStack_18;
  
  lStack_18 = 0;
  lStack_20 = 0;
  bVar1 = false;
  if (param_1 == (longlong *)0x0) {
    FUN_142afa690(0xb,0,0x43,s_D__a_1_s_target_release_build_bo_143cf2ff0,0x9a);
  }
  else {
    if (*param_1 == 0) {
      lStack_20 = FUN_142c52d20();
      if (lStack_20 == 0) goto LAB_142c531fc;
      bVar1 = true;
    }
    else {
      lStack_20 = *param_1;
    }
    iVar2 = FUN_142c52d40(lStack_20);
    iStackX_18 = iVar2;
    if ((param_3 <= iVar2) && (iStackX_18 = param_3, param_3 < 0)) {
      iStackX_18 = iVar2;
    }
    lStack_18 = FUN_142c0d0b0(param_2);
    if ((lStack_18 != 0) &&
       (lVar3 = FUN_142c52db0(lStack_20,lStack_18,(longlong)iStackX_18), lVar3 != 0)) {
      if (*param_1 != 0) {
        return lStack_20;
      }
      *param_1 = lStack_20;
      return lStack_20;
    }
  }
LAB_142c531fc:
  FUN_142c0d010(lStack_18);
  if (bVar1) {
    FUN_142c52d90(lStack_20);
  }
  return 0;
}


/* address=142c532a0 name=FUN_142c532a0 */

void FUN_142c532a0(void)

{
  FUN_142b05960();
  return;
}


/* address=142c532c0 name=FUN_142c532c0 */

void FUN_142c532c0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c532e0 name=FUN_142c532e0 */

void FUN_142c532e0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c53310 name=FUN_142c53310 */

void FUN_142c53310(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142c53330 name=FUN_142c53330 */

void FUN_142c53330(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c53220,param_2);
  return;
}


/* address=142c53360 name=FUN_142c53360 */

void FUN_142c53360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05f60(param_1,param_2,param_3,&LAB_142c53250);
  return;
}


/* address=142c533a0 name=FUN_142c533a0 */

void FUN_142c533a0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c533d0 name=FUN_142c533d0 */

void FUN_142c533d0(undefined8 param_1)

{
  FUN_142b06300(param_1);
  return;
}


/* address=142c533f0 name=FUN_142c533f0 */

void FUN_142c533f0(undefined8 param_1)

{
  FUN_142b06400(param_1,&LAB_142c53250);
  return;
}


/* address=142c53420 name=FUN_142c53420 */

void FUN_142c53420(undefined8 param_1)

{
  FUN_142b064a0(param_1);
  return;
}


/* address=142c53440 name=FUN_142c53440 */

void FUN_142c53440(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06500(param_1,param_2);
  return;
}


/* address=142c53470 name=FUN_142c53470 */

void FUN_142c53470(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c53490 name=FUN_142c53490 */

void FUN_142c53490(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c53510 name=FUN_142c53510 */

void FUN_142c53510(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c53530 name=FUN_142c53530 */

void FUN_142c53530(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c53560 name=FUN_142c53560 */

void FUN_142c53560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05f60(param_1,param_2,param_3,&LAB_142c534c0);
  return;
}


/* address=142c535a0 name=FUN_142c535a0 */

void FUN_142c535a0(undefined8 param_1)

{
  FUN_142b06400(param_1,&LAB_142c534c0);
  return;
}


/* address=142c535d0 name=FUN_142c535d0 */

void FUN_142c535d0(undefined8 param_1)

{
  FUN_142b064a0(param_1);
  return;
}


/* address=142c535f0 name=FUN_142c535f0 */

void FUN_142c535f0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06500(param_1,param_2);
  return;
}


/* address=142c536a0 name=FUN_142c536a0 */

void FUN_142c536a0(void)

{
  FUN_142b05960();
  return;
}


/* address=142c536c0 name=FUN_142c536c0 */

void FUN_142c536c0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c536e0 name=FUN_142c536e0 */

void FUN_142c536e0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c53710 name=FUN_142c53710 */

void FUN_142c53710(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c53620,param_2);
  return;
}


/* address=142c53740 name=FUN_142c53740 */

void FUN_142c53740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05f60(param_1,param_2,param_3,&LAB_142c53650);
  return;
}


/* address=142c53780 name=FUN_142c53780 */

void FUN_142c53780(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c537b0 name=FUN_142c537b0 */

void FUN_142c537b0(undefined8 param_1)

{
  FUN_142b06400(param_1,&LAB_142c53650);
  return;
}


/* address=142c537e0 name=FUN_142c537e0 */

void FUN_142c537e0(undefined8 param_1)

{
  FUN_142b064a0(param_1);
  return;
}


/* address=142c53800 name=FUN_142c53800 */

void FUN_142c53800(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06500(param_1,param_2);
  return;
}


/* address=142c53830 name=FUN_142c53830 */

undefined8 FUN_142c53830(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c53870 name=FUN_142c53870 */

undefined4 FUN_142c53870(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  longlong lStack_70;
  longlong lStack_68;
  uint uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_54;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined4 uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  
  *param_4 = 0;
  uStack_98 = 0x11;
  lStack_90 = 0;
  lStack_40 = 0;
  lStack_68 = 0;
  uVar3 = FUN_142c53470(param_1);
  if (uVar3 < 2) {
    return 0;
  }
  if ((param_3 & 0x100) == 0) {
    lStack_30 = uVar3 + 1;
  }
  else {
    lStack_30 = 0;
  }
  lStack_70 = lStack_30;
  if ((param_3 & 0x200) == 0) {
    lStack_28 = uVar3 + 1;
  }
  else {
    lStack_28 = 0;
  }
  lStack_50 = lStack_28;
  if ((param_3 & 0x400) == 0) {
    lStack_20 = uVar3 + 1;
  }
  else {
    lStack_20 = 0;
  }
  lStack_48 = lStack_20;
  lStack_40 = FUN_142c53fd0();
  if (lStack_40 != 0) {
    for (uStack_88 = uVar3 - 2; uStack_88 < uVar3; uStack_88 = uStack_88 - 1) {
      lVar4 = FUN_142c53490(param_1,uStack_88);
      iVar2 = FUN_142c1dba0(lVar4);
      if (iVar2 == 0) goto LAB_142c53c97;
      uStack_60 = (uint)((*(uint *)(lVar4 + 0x2c) & 0x20) != 0);
      uStack_54 = uStack_60;
      if (lStack_90 == 0) {
        if (uStack_88 != uVar3 - 2) {
          FID_conflict__assert((wchar_t *)s_i_143cf3b68,(wchar_t *)s_D_143cf3aa0,0x2b8);
        }
        lStack_90 = FUN_142c54270();
        if (lStack_90 == 0) goto LAB_142c53c97;
        *(undefined4 *)(lStack_90 + 8) = 1;
      }
      lVar1 = lStack_90;
      if ((lStack_50 == 0) && ((uStack_88 == 0 || (uStack_54 == 0)))) {
        uStack_5c = 0;
      }
      else {
        uStack_5c = 1;
      }
      uStack_38 = uStack_5c;
      iVar2 = FUN_142c54630(lVar4,lStack_90,uStack_5c);
      if (iVar2 == 0) {
        uStack_98 = 0x2a;
        *param_4 = lVar4;
        goto LAB_142c53c97;
      }
      if ((lStack_70 == 0) && (iVar2 = FUN_142c542e0(lStack_90), iVar2 != 0)) {
        uStack_98 = 0x2b;
        goto LAB_142c53c97;
      }
      lVar5 = FUN_142c54070(lStack_40,lStack_90);
      if (lVar5 == 0) goto LAB_142c53c97;
      lStack_18 = lStack_90;
      lStack_90 = 0;
      if (uStack_88 != 0) {
        uStack_58 = (uint)(lStack_48 != 0);
        lStack_90 = FUN_142c54a30(lVar4,lVar1,uStack_58);
        if (lStack_90 == 0) {
          uStack_98 = 0x2a;
          *param_4 = lVar4;
          goto LAB_142c53c97;
        }
      }
      if ((uStack_88 == 0) || (uStack_54 == 0)) {
        if (lStack_70 != 0) {
          lStack_70 = lStack_70 + -1;
        }
        if (lStack_48 != 0) {
          lStack_48 = lStack_48 + -1;
        }
        if (lStack_50 != 0) {
          lStack_50 = lStack_50 + -1;
        }
      }
      iVar2 = FUN_142c55070(lVar4,&lStack_70,&lStack_48,&lStack_50);
      if (iVar2 == 0) {
        uStack_98 = 0x2a;
        *param_4 = lVar4;
        goto LAB_142c53c97;
      }
    }
    if (lStack_70 == 0) {
      if (param_2 != 0) {
        lStack_68 = FUN_142c533d0(param_2);
        if (lStack_68 == 0) goto LAB_142c53c97;
        FUN_142c53440(lStack_68,&LAB_142c554d0);
        FUN_142c533f0(lStack_68);
      }
      iVar2 = FUN_142c551d0(lStack_40,lStack_68);
      if (iVar2 == 0) {
        uStack_98 = 0x2b;
        goto LAB_142c53c97;
      }
    }
    uStack_98 = 0;
  }
LAB_142c53c97:
  FUN_142c54230(lStack_90);
  FUN_142c53310(lStack_68);
  FUN_142c54040(lStack_40,FUN_142c54230);
  return uStack_98;
}


/* address=142c53d80 name=FUN_142c53d80 */

void FUN_142c53d80(undefined8 param_1)

{
  FUN_142b058a0(param_1);
  return;
}


/* address=142c53da0 name=FUN_142c53da0 */

void FUN_142c53da0(void)

{
  FUN_142b05960();
  return;
}


/* address=142c53dc0 name=FUN_142c53dc0 */

void FUN_142c53dc0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c53de0 name=FUN_142c53de0 */

void FUN_142c53de0(undefined8 param_1)

{
  FUN_142b059a0(param_1);
  return;
}


/* address=142c53e00 name=FUN_142c53e00 */

void FUN_142c53e00(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c53e30 name=FUN_142c53e30 */

void FUN_142c53e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05a40(param_1,param_2,param_3);
  return;
}


/* address=142c53e70 name=FUN_142c53e70 */

void FUN_142c53e70(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c53cd0,param_2);
  return;
}


/* address=142c53ea0 name=FUN_142c53ea0 */

void FUN_142c53ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05e90(param_1,&LAB_142c53d50,param_2,param_3);
  return;
}


/* address=142c53ee0 name=FUN_142c53ee0 */

void FUN_142c53ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05f60(param_1,param_2,param_3,&LAB_142c53d00);
  return;
}


/* address=142c53f20 name=FUN_142c53f20 */

void FUN_142c53f20(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c53f50 name=FUN_142c53f50 */

void FUN_142c53f50(undefined8 param_1)

{
  FUN_142b06400(param_1,&LAB_142c53d00);
  return;
}


/* address=142c53f80 name=FUN_142c53f80 */

void FUN_142c53f80(undefined8 param_1)

{
  FUN_142b064a0(param_1);
  return;
}


/* address=142c53fd0 name=FUN_142c53fd0 */

void FUN_142c53fd0(void)

{
  FUN_142b05960();
  return;
}


/* address=142c53ff0 name=FUN_142c53ff0 */

void FUN_142c53ff0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c54010 name=FUN_142c54010 */

void FUN_142c54010(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c54040 name=FUN_142c54040 */

void FUN_142c54040(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c53fa0,param_2);
  return;
}


/* address=142c54070 name=FUN_142c54070 */

void FUN_142c54070(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c540a0 name=FUN_142c540a0 */

bool FUN_142c540a0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_142c15d10(param_1);
  return iVar1 == 0x2ea;
}


/* address=142c540e0 name=FUN_142c540e0 */

void FUN_142c540e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_142b6d6c0(*param_1);
    FUN_142c53330(param_1[1],FUN_142b6d6c0);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142c54130 name=FUN_142c54130 */

longlong * FUN_142c54130(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = FUN_142c540a0(param_1);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___143cf3198,(wchar_t *)s_D_143cf30d0,0x6d);
  }
  plVar2 = (longlong *)FUN_142b0e970(0x18);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_142c53830(plVar2,0,0x18);
    lVar3 = FUN_142c15a70(param_1);
    *plVar2 = lVar3;
    lVar3 = FUN_142c532a0();
    plVar2[1] = lVar3;
    if ((*plVar2 == 0) || (plVar2[1] == 0)) {
      FUN_142c540e0(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}


/* address=142c54230 name=FUN_142c54230 */

void FUN_142c54230(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_142c53e70(*param_1,FUN_142c540e0);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142c54270 name=FUN_142c54270 */

longlong * FUN_142c54270(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_142b0e970(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_142c53830(plVar1,0,0x10);
    lVar2 = FUN_142c53d80(&LAB_142c541f0);
    *plVar1 = lVar2;
    if (*plVar1 == 0) {
      FUN_142c54230(plVar1);
      plVar1 = (longlong *)0x0;
    }
  }
  return plVar1;
}


/* address=142c542e0 name=FUN_142c542e0 */

undefined4 FUN_142c542e0(undefined8 *param_1)

{
  longlong lVar1;
  
  if ((*(int *)(param_1 + 1) == 0) && (lVar1 = FUN_142c53dc0(*param_1), lVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* address=142c54330 name=FUN_142c54330 */

void FUN_142c54330(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uStack_18;
  
  *(undefined4 *)(param_1 + 1) = 0;
  uStack_18 = 0;
  while( true ) {
    uVar1 = FUN_142c53dc0(*param_1);
    if (uVar1 <= uStack_18) break;
    uVar2 = FUN_142c53e00(*param_1,uStack_18);
    FUN_142c540e0(uVar2);
    uStack_18 = uStack_18 + 1;
  }
  FUN_142c53de0(*param_1);
  return;
}


/* address=142c543b0 name=FUN_142c543b0 */

undefined8 FUN_142c543b0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  undefined8 auStack_20 [4];
  
  iVar1 = FUN_142c53f80(*param_1);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_s_143cf32a0,(wchar_t *)s_D_143cf31d0,0xa6);
  }
  auStack_20[0] = param_2;
  iVar1 = FUN_142c53ee0(*param_1,&uStack_28,auStack_20);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c53e00(*param_1,uStack_28);
  }
  return uVar2;
}


/* address=142c54430 name=FUN_142c54430 */

undefined8 FUN_142c54430(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  uStack_28 = 0;
  while( true ) {
    uVar2 = FUN_142c53dc0(param_2);
    if (uVar2 <= uStack_28) {
      FUN_142c53f50(*param_1);
      for (uStack_20 = 1; uVar2 = FUN_142c53dc0(*param_1), uStack_20 < uVar2;
          uStack_20 = uStack_20 + 1) {
        puVar5 = (undefined8 *)FUN_142c53e00(*param_1,uStack_20);
        puVar6 = (undefined8 *)FUN_142c53e00(*param_1,uStack_20 - 1);
        iVar1 = FUN_142c15c50(*puVar6,*puVar5);
        if (iVar1 == 0) {
          FID_conflict__assert((wchar_t *)s_O_143cf33d0,(wchar_t *)s_D_143cf3300,0xc6);
        }
      }
      return 1;
    }
    uVar3 = FUN_142c53e00(param_2,uStack_28);
    lVar4 = FUN_142c53f20(*param_1,uVar3);
    if (lVar4 == 0) break;
    FUN_142c53e30(param_2,uStack_28,0);
    uStack_28 = uStack_28 + 1;
  }
  return 0;
}


/* address=142c54630 name=FUN_142c54630 */

undefined4 FUN_142c54630(undefined8 param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uStack_50;
  undefined4 uStack_44;
  longlong lStack_40;
  ulonglong uStack_38;
  int iStack_30;
  int iStack_2c;
  undefined8 *puStack_28;
  longlong lStack_20;
  undefined8 *puStack_18;
  
  uStack_44 = 0;
  lStack_40 = 0;
  lVar3 = FUN_142c52690(param_1,0x59,&iStack_30,0);
  if (lVar3 == 0) {
    if (iStack_30 != -1) {
      return 0;
    }
    FUN_142c54330(param_2);
    return 1;
  }
  lVar4 = FUN_142c53510(lVar3);
  if (lVar4 == 0) {
    FUN_142afa690(0xb,0,0x90,s_D__a_1_s_target_release_build_bo_143cf35f0,0xf9);
    goto LAB_142c548e8;
  }
  FUN_142c535f0(lVar3,&LAB_142c54560);
  FUN_142c535a0(lVar3);
  bVar1 = false;
  for (uStack_50 = 0; uVar5 = FUN_142c53510(lVar3), uStack_50 < uVar5; uStack_50 = uStack_50 + 1) {
    puStack_18 = (undefined8 *)FUN_142c53530(lVar3,uStack_50);
    iVar2 = FUN_142c540a0(*puStack_18);
    if (iVar2 != 0) {
      bVar1 = true;
    }
    if (uStack_50 != 0) {
      puVar6 = (undefined8 *)FUN_142c53530(lVar3,uStack_50 - 1);
      iVar2 = FUN_142c15c50(*puVar6,*puStack_18);
      if (iVar2 == 0) {
        FUN_142afa690(0xb,0,0x90,s_D__a_1_s_target_release_build_bo_143cf3660,0x108);
        goto LAB_142c548e8;
      }
    }
  }
  iStack_2c = *(int *)(param_2 + 1);
  if ((!bVar1) || (param_3 == 0)) {
    FUN_142c53ea0(*param_2,&LAB_142c545a0,lVar3);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (iStack_2c != 0) {
    lStack_40 = FUN_142c53da0();
    if (lStack_40 == 0) goto LAB_142c548e8;
    for (uStack_38 = 0; uVar5 = FUN_142c53510(lVar3), uStack_38 < uVar5; uStack_38 = uStack_38 + 1)
    {
      puStack_28 = (undefined8 *)FUN_142c53530(lVar3,uStack_38);
      iVar2 = FUN_142c540a0(*puStack_28);
      if (((iVar2 == 0) && (lVar4 = FUN_142c543b0(param_2,*puStack_28), lVar4 == 0)) &&
         ((lStack_20 = FUN_142c54130(*puStack_28), lStack_20 == 0 ||
          (lVar4 = FUN_142c53f20(lStack_40,lStack_20), lVar4 == 0)))) {
        FUN_142c540e0(lStack_20);
        goto LAB_142c548e8;
      }
    }
    iVar2 = FUN_142c54430(param_2,lStack_40);
    if (iVar2 == 0) goto LAB_142c548e8;
  }
  uStack_44 = 1;
LAB_142c548e8:
  FUN_142c53e70(lStack_40,FUN_142c540e0);
  FUN_142c7bf60(lVar3);
  return uStack_44;
}


/* address=142c54a30 name=FUN_142c54a30 */

undefined8 * FUN_142c54a30(undefined8 param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_80;
  longlong lStack_78;
  longlong lStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_40;
  ulonglong uStack_38;
  int aiStack_30 [2];
  longlong lStack_28;
  undefined8 *puStack_20;
  undefined8 *puStack_18;
  
  bVar1 = false;
  lStack_60 = 0;
  puStack_90 = (undefined8 *)0x0;
  lStack_98 = FUN_142c52690(param_1,0x2eb,aiStack_30,0);
  if ((lStack_98 == 0) && (aiStack_30[0] != -1)) goto LAB_142c54f78;
  if (lStack_98 != 0) {
    lVar3 = FUN_142c536c0(lStack_98);
    if (lVar3 == 0) {
      FUN_142afa690(0xb,0,0x90,s_D__a_1_s_target_release_build_bo_143cf37f0,0x175);
      goto LAB_142c54f78;
    }
    for (uStack_58 = 0; uVar4 = FUN_142c536c0(lStack_98), uStack_58 < uVar4;
        uStack_58 = uStack_58 + 1) {
      puStack_18 = (undefined8 *)FUN_142c536e0(lStack_98,uStack_58);
      iVar2 = FUN_142c540a0(*puStack_18);
      if ((iVar2 != 0) || (iVar2 = FUN_142c540a0(puStack_18[1]), iVar2 != 0)) goto LAB_142c54f78;
    }
    FUN_142c53800(lStack_98,&LAB_142c54920);
    FUN_142c537b0(lStack_98);
    if (param_3 == 0) {
      FUN_142c53ea0(*param_2,&LAB_142c549a0,lStack_98);
      FUN_142c53710(lStack_98,FUN_142c7d5b0);
      lStack_98 = 0;
    }
    else {
      lStack_60 = FUN_142c53da0();
      if (lStack_60 == 0) goto LAB_142c54f78;
      lStack_28 = 0;
      for (uStack_50 = 0; uVar4 = FUN_142c536c0(lStack_98), uStack_50 < uVar4;
          uStack_50 = uStack_50 + 1) {
        plVar5 = (longlong *)FUN_142c536e0(lStack_98,uStack_50);
        if ((lStack_28 == 0) || (iVar2 = FUN_142c15c50(*plVar5,lStack_28), iVar2 != 0)) {
          lStack_28 = *plVar5;
          lStack_78 = FUN_142c543b0(param_2,*plVar5);
          if (lStack_78 == 0) {
            if (*(int *)(param_2 + 1) == 0) goto LAB_142c54ba2;
            lStack_78 = FUN_142c54130(*plVar5);
            if ((lStack_78 == 0) || (lVar3 = FUN_142c53f20(lStack_60,lStack_78), lVar3 == 0)) {
              FUN_142c540e0(lStack_78);
              goto LAB_142c54f78;
            }
          }
          *(undefined4 *)(lStack_78 + 0x10) = 1;
        }
LAB_142c54ba2:
      }
      iVar2 = FUN_142c54430(param_2,lStack_60);
      if (iVar2 == 0) goto LAB_142c54f78;
    }
  }
  if ((lStack_98 != 0) || (lStack_98 = FUN_142c536a0(), lStack_98 != 0)) {
    for (uStack_40 = 0; uVar4 = FUN_142c53dc0(*param_2), uStack_40 < uVar4;
        uStack_40 = uStack_40 + 1) {
      puStack_20 = (undefined8 *)FUN_142c53e00(*param_2,uStack_40);
      if (*(int *)(puStack_20 + 2) == 0) {
        plVar5 = (longlong *)FUN_142c7d590();
        if (plVar5 == (longlong *)0x0) goto LAB_142c54f78;
        lVar3 = FUN_142c15a70(*puStack_20);
        *plVar5 = lVar3;
        lVar3 = FUN_142c15a70(*puStack_20);
        plVar5[1] = lVar3;
        if (((*plVar5 == 0) || (plVar5[1] == 0)) ||
           (lVar3 = FUN_142c53780(lStack_98,plVar5), lVar3 == 0)) {
          FUN_142c7d5b0(plVar5);
          goto LAB_142c54f78;
        }
      }
    }
    FUN_142c53800(lStack_98,&LAB_142c54960);
    FUN_142c537b0(lStack_98);
    puStack_90 = (undefined8 *)FUN_142c54270();
    if (puStack_90 != (undefined8 *)0x0) {
      *(undefined4 *)(puStack_90 + 1) = *(undefined4 *)(param_2 + 1);
      puStack_80 = (undefined8 *)0x0;
      for (uStack_38 = 0; uVar4 = FUN_142c536c0(lStack_98), uStack_38 < uVar4;
          uStack_38 = uStack_38 + 1) {
        puVar6 = (undefined8 *)FUN_142c536e0(lStack_98,uStack_38);
        if ((*(int *)(param_2 + 1) != 0) || (lVar3 = FUN_142c543b0(param_2,*puVar6), lVar3 != 0)) {
          if (((puStack_80 == (undefined8 *)0x0) ||
              (iVar2 = FUN_142c15c50(*puStack_80,puVar6[1]), iVar2 != 0)) &&
             ((puStack_80 = (undefined8 *)FUN_142c54130(puVar6[1]), puStack_80 == (undefined8 *)0x0
              || (lVar3 = FUN_142c53f20(*puStack_90,puStack_80), lVar3 == 0)))) {
            FUN_142c540e0(puStack_80);
            goto LAB_142c54f78;
          }
          lVar3 = FUN_142c533a0(puStack_80[1],*puVar6);
          if (lVar3 == 0) goto LAB_142c54f78;
          *puVar6 = 0;
        }
      }
      FUN_142c53f50(*puStack_90);
      bVar1 = true;
    }
  }
LAB_142c54f78:
  if (!bVar1) {
    FUN_142c54230(puStack_90);
    puStack_90 = (undefined8 *)0x0;
  }
  FUN_142c53710(lStack_98,FUN_142c7d5b0);
  FUN_142c53e70(lStack_60,FUN_142c540e0);
  return puStack_90;
}


/* address=142c54fd0 name=FUN_142c54fd0 */

undefined8 FUN_142c54fd0(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong auStack_18 [3];
  
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else if ((*(uint *)(param_1 + 4) & 0x100) == 0) {
    iVar1 = FUN_142c14f80(auStack_18,param_1);
    if ((iVar1 != 0) && (auStack_18[0] < *param_2)) {
      *param_2 = auStack_18[0];
    }
    FUN_142afa330();
    uVar2 = 1;
  }
  else {
    FUN_142afa690(0xb,0,0x90,s_D__a_1_s_target_release_build_bo_143cf3860,0x209);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142c55070 name=FUN_142c55070 */

undefined4
FUN_142c55070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  longlong *plStack_18;
  longlong lStack_10;
  
  plStack_18 = (longlong *)FUN_142c52690(param_1,0x191,&iStack_28,0);
  if ((plStack_18 == (longlong *)0x0) && (iStack_28 != -1)) {
    return 0;
  }
  if (plStack_18 != (longlong *)0x0) {
    if ((*plStack_18 == 0) && (plStack_18[1] == 0)) {
      FUN_142afa690(0xb,0,0x90,s_D__a_1_s_target_release_build_bo_143cf38d0,0x228);
      FUN_142c7d950(plStack_18);
      return 0;
    }
    iVar1 = FUN_142c54fd0(*plStack_18,param_2);
    if ((iVar1 == 0) || (iVar1 = FUN_142c54fd0(plStack_18[1],param_3), iVar1 == 0)) {
      iStack_24 = 0;
    }
    else {
      iStack_24 = 1;
    }
    iStack_20 = iStack_24;
    FUN_142c7d950(plStack_18);
    if (iStack_20 == 0) {
      return 0;
    }
  }
  lStack_10 = FUN_142c52690(param_1,0x2ec,&iStack_28,0);
  if ((lStack_10 == 0) && (iStack_28 != -1)) {
    uStack_1c = 0;
  }
  else {
    uStack_1c = FUN_142c54fd0(lStack_10,param_4);
    FUN_142c0e290(lStack_10);
  }
  return uStack_1c;
}


/* address=142c551d0 name=FUN_142c551d0 */

undefined8 FUN_142c551d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  ulonglong uStack_60;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  if ((param_2 != 0) && (iVar1 = FUN_142c53420(param_2), iVar1 == 0)) {
    FID_conflict__assert((wchar_t *)s_u_143cf3a10,(wchar_t *)s_D_143cf3940,0x246);
  }
  uVar2 = FUN_142c53ff0(param_1);
  puVar3 = (undefined8 *)FUN_142c54010(param_1,uVar2 - 1);
  iVar1 = FUN_142c542e0(puVar3);
  if (iVar1 == 0) {
    lVar4 = FUN_142c532c0(param_2);
    bVar10 = lVar4 == 0;
    for (uStack_48 = 0; uVar5 = FUN_142c532c0(param_2), uStack_48 < uVar5; uStack_48 = uStack_48 + 1
        ) {
      uVar6 = FUN_142c532e0(param_2,uStack_48);
      iVar1 = FUN_142c540a0(uVar6);
      if (iVar1 != 0) {
        bVar10 = true;
        break;
      }
    }
    if (bVar10) {
      uVar6 = 1;
    }
    else if (*(int *)(puVar3 + 1) == 0) {
      for (uStack_40 = 0; uVar5 = FUN_142c53dc0(*puVar3), uStack_60 = uVar2, uStack_40 < uVar5;
          uStack_40 = uStack_40 + 1) {
        lVar4 = FUN_142c53e00(*puVar3,uStack_40);
        *(undefined4 *)(lVar4 + 0x14) = 1;
      }
      while (uVar5 = uStack_60, uStack_60 = uVar5 - 1, uStack_60 < uVar2) {
        puVar3 = (undefined8 *)FUN_142c54010(param_1,uStack_60);
        for (uStack_38 = 0; uVar7 = FUN_142c53dc0(*puVar3), uStack_38 < uVar7;
            uStack_38 = uStack_38 + 1) {
          puVar8 = (undefined8 *)FUN_142c53e00(*puVar3,uStack_38);
          if (*(int *)((longlong)puVar8 + 0x14) != 0) {
            lVar4 = FUN_142c532c0(puVar8[1]);
            if (lVar4 == 0) {
              iVar1 = FUN_142c53360(param_2,0,*puVar8);
              if (iVar1 != 0) {
                return 1;
              }
            }
            else if (uStack_60 != 0) {
              uVar6 = FUN_142c54010(param_1,uVar5 - 2);
              for (uStack_30 = 0; uVar7 = FUN_142c532c0(puVar8[1]), uStack_30 < uVar7;
                  uStack_30 = uStack_30 + 1) {
                uVar9 = FUN_142c532e0(puVar8[1],uStack_30);
                lVar4 = FUN_142c543b0(uVar6,uVar9);
                if (lVar4 != 0) {
                  *(undefined4 *)(lVar4 + 0x14) = 1;
                }
              }
            }
          }
        }
      }
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


/* address=142c55500 name=FUN_142c55500 */

void FUN_142c55500(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    FUN_142c7e450(param_1,param_2,param_3);
  }
  else {
    FUN_142c556a0(param_1,param_2,param_3,param_4);
  }
  return;
}


/* address=142c555e0 name=FUN_142c555e0 */

undefined4 FUN_142c555e0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_142b6c000(param_1,param_2,param_3), iVar1 != param_3)) {
    return 0;
  }
  return 1;
}


/* address=142c55640 name=FUN_142c55640 */

undefined8 FUN_142c55640(undefined8 param_1,int param_2)

{
  int iVar1;
  int iStack_18;
  
  iStack_18 = 0;
  while( true ) {
    if (param_2 <= iStack_18) {
      return 1;
    }
    iVar1 = FUN_142c555e0(param_1,&DAT_143cf3b90,1);
    if (iVar1 == 0) break;
    iStack_18 = iStack_18 + 1;
  }
  return 0;
}


/* address=142c556a0 name=FUN_142c556a0 */

void FUN_142c556a0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  size_t sVar2;
  int iStackX_18;
  undefined auStack_f8 [32];
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  uint uStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  uint uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  char acStack_68 [80];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_f8;
  iStack_c4 = -1;
  iStackX_18 = param_3;
  if (param_3 < 0) {
    iStackX_18 = 0;
  }
  iStack_d8 = iStackX_18;
  iVar1 = FUN_142c55640(param_1,iStackX_18);
  if (iVar1 != 0) {
    uStack_c8 = param_4 & 0xf0000;
    if (uStack_c8 == 0x10000) {
      puStack_98 = &DAT_143cf3b9c;
      iStack_cc = 1;
      puStack_a0 = &DAT_143cf3ba0;
      iStack_d0 = 1;
      iStackX_18 = 0;
    }
    else if (uStack_c8 == 0x20000) {
      puStack_98 = &DAT_143cf3ba4;
      iStack_cc = 2;
      puStack_a0 = &DAT_143cf3ba8;
      iStack_d0 = 3;
      iStackX_18 = 0;
    }
    else if (uStack_c8 == 0x30000) {
      puStack_98 = &DAT_143cf3bac;
      iStack_cc = 2;
      puStack_a0 = &DAT_143cf3bb0;
      iStack_d0 = 3;
      iStackX_18 = 0;
    }
    else {
      if (uStack_c8 != 0x40000) goto LAB_142c55b2b;
      puStack_98 = &DAT_143cf3b94;
      iStack_cc = 1;
      puStack_a0 = &DAT_143cf3b98;
      iStack_d0 = 3;
    }
    if ((param_4 & 0x800000) == 0) {
      puStack_80 = &DAT_143cf3bb8;
      iStack_c0 = 1;
    }
    else {
      puStack_80 = &DAT_143cf3bb4;
      iStack_c0 = 3;
    }
    iStack_b8 = FUN_142c50420(param_2);
    for (iStack_d4 = 0; iStack_d4 < iStack_b8; iStack_d4 = iStack_d4 + 1) {
      if ((param_4 & 0x100000) == 0) {
        uStack_a8 = FUN_142c50560(param_2,iStack_d4);
      }
      else {
        uStack_a8 = FUN_142c50560(param_2,(iStack_b8 - iStack_d4) + -1);
      }
      if (iStack_c4 != -1) {
        iVar1 = FUN_142c056c0(uStack_a8);
        if (iStack_c4 == iVar1) {
          iVar1 = FUN_142c555e0(param_1,puStack_a0,iStack_d0);
          if (iVar1 == 0) break;
          iStack_d8 = iStack_d8 + iStack_d0;
        }
        else {
          iVar1 = FUN_142c555e0(param_1,puStack_98,iStack_cc);
          if (iVar1 == 0) break;
          iStack_d8 = iStack_d8 + iStack_cc;
          iVar1 = FUN_142c55640(param_1,iStackX_18);
          if (iVar1 == 0) break;
          iStack_d8 = iStack_d8 + iStackX_18;
        }
      }
      iStack_c4 = FUN_142c056c0(uStack_a8);
      uStack_88 = FUN_142c50aa0(uStack_a8);
      uStack_78 = FUN_142c50b50(uStack_a8);
      if ((param_4 & 0x600000) != 0) {
        FID_conflict__assert((wchar_t *)s___143cf3c90,(wchar_t *)s_D_143cf3bc0,0xad);
      }
      iStack_bc = FUN_142c15d10(uStack_88);
      if (iStack_bc == 0) {
        FUN_142c162c0(acStack_68,0x50,uStack_88,1);
        pcStack_90 = acStack_68;
      }
      else {
        pcStack_90 = (char *)FUN_142c16140(iStack_bc);
      }
      sVar2 = strlen(pcStack_90);
      iStack_b4 = (int)sVar2;
      iVar1 = FUN_142c555e0(param_1,pcStack_90,sVar2 & 0xffffffff);
      if ((iVar1 == 0) || (iVar1 = FUN_142c555e0(param_1,puStack_80,iStack_c0), iVar1 == 0)) break;
      iStack_d8 = iStack_d8 + iStack_b4 + iStack_c0;
      if ((iStack_bc == 0) && ((param_4 & 0x1000000) != 0)) {
        uStack_b0 = 0x80;
      }
      else {
        uStack_b0 = 0;
      }
      iStack_ac = FUN_142c51600(param_1,uStack_78,param_4 | uStack_b0);
      if (iStack_ac < 0) break;
      iStack_d8 = iStack_d8 + iStack_ac;
    }
  }
LAB_142c55b2b:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_f8);
  return;
}


/* address=142c55d70 name=FUN_142c55d70 */

undefined8 FUN_142c55d70(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x20);
}


/* address=142c55d90 name=FUN_142c55d90 */

undefined8 FUN_142c55d90(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142c0d6e0(*(undefined8 *)(*param_1 + 0x28));
  }
  return uVar1;
}


/* address=142c55e00 name=FUN_142c55e00 */

undefined8 FUN_142c55e00(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(*param_1 + 0x30) != 0) && (-1 < param_2)) &&
     (uVar1 = FUN_142c56480(*(undefined8 *)(*param_1 + 0x30)), (ulonglong)(longlong)param_2 < uVar1)
     ) {
    uVar2 = FUN_142c564a0(*(undefined8 *)(*param_1 + 0x30),(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=142c55e70 name=FUN_142c55e70 */

undefined8 FUN_142c55e70(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142c16060(param_2);
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_142c55ec0(param_1,lVar1,param_3);
  }
  return uVar2;
}


/* address=142c55ec0 name=FUN_142c55ec0 */

int FUN_142c55ec0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iStackX_18;
  
  if (*(longlong *)(*param_1 + 0x30) != 0) {
    iStackX_18 = param_3 + 1;
    if (iStackX_18 < 0) {
      iStackX_18 = 0;
    }
    iVar1 = FUN_142c56480(*(undefined8 *)(*param_1 + 0x30));
    for (; iStackX_18 < iVar1; iStackX_18 = iStackX_18 + 1) {
      puVar3 = (undefined8 *)FUN_142c564a0(*(undefined8 *)(*param_1 + 0x30),(longlong)iStackX_18);
      iVar2 = FUN_142c15c50(*puVar3,param_2);
      if (iVar2 == 0) {
        return iStackX_18;
      }
    }
  }
  return -1;
}


/* address=142c55fc0 name=FUN_142c55fc0 */

undefined8 FUN_142c55fc0(longlong *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  int iStack_28;
  undefined8 auStack_10 [2];
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    iStack_28 = FUN_142c55e70(param_1,0xac,0xffffffff);
    if (iStack_28 == -1) {
      iStack_28 = FUN_142c55e70(param_1,0xab,0xffffffff);
    }
    if (iStack_28 == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_142c55e00(param_1,iStack_28);
      piVar2 = (int *)FUN_142c7eca0(uVar1,0);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0x10)) {
        uVar1 = 0;
      }
      else {
        auStack_10[0] = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
        uVar1 = FUN_142c0f7d0(0,auStack_10,**(undefined4 **)(piVar2 + 2),&DAT_1432877f0);
      }
    }
  }
  return uVar1;
}


/* address=142c56270 name=FUN_142c56270 */

undefined8
FUN_142c56270(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_142c7e790(0,param_2,param_3,param_4,param_5);
  if ((lVar2 != 0) && (iVar1 = FUN_142c56660(param_1,lVar2), iVar1 != 0)) {
    return 1;
  }
  FUN_142c77a70(lVar2);
  return 0;
}


/* address=142c56370 name=FUN_142c56370 */

undefined4 FUN_142c56370(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 auStack_10 [2];
  
  auStack_10[0] = 0;
  iVar1 = FUN_142c11ab0(param_2,auStack_10,&DAT_1432877f0);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c56270(param_1,param_3,0x10,auStack_10[0],iVar1);
    FUN_142b0eaa0(auStack_10[0]);
  }
  return uVar2;
}


/* address=142c563f0 name=FUN_142c563f0 */

void FUN_142c563f0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c56370(param_1,param_2,0xac);
  return;
}


/* address=142c56460 name=FUN_142c56460 */

void FUN_142c56460(void)

{
  FUN_142b05960();
  return;
}


/* address=142c56480 name=FUN_142c56480 */

void FUN_142c56480(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c564a0 name=FUN_142c564a0 */

void FUN_142c564a0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c564d0 name=FUN_142c564d0 */

void FUN_142c564d0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05d40(param_1,param_2);
  return;
}


/* address=142c56500 name=FUN_142c56500 */

void FUN_142c56500(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c56660 name=FUN_142c56660 */

undefined8 FUN_142c56660(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(*param_1 + 0x30) == 0) {
    uVar1 = FUN_142c56460();
    *(undefined8 *)(*param_1 + 0x30) = uVar1;
  }
  if ((*(longlong *)(*param_1 + 0x30) != 0) &&
     (lVar2 = FUN_142c56500(*(undefined8 *)(*param_1 + 0x30),param_2), lVar2 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142c56730 name=FUN_142c56730 */

void FUN_142c56730(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_142c0f7d0(param_1,param_2,param_3,&DAT_1432b0af0);
  return;
}


/* address=142c56770 name=FUN_142c56770 */

void FUN_142c56770(undefined8 param_1,undefined8 param_2)

{
  FUN_142c11ab0(param_1,param_2,&DAT_1432b0af0);
  return;
}


/* address=142c567c0 name=FUN_142c567c0 */

void FUN_142c567c0(void)

{
  FUN_142b05960();
  return;
}


/* address=142c56870 name=FUN_142c56870 */

void FUN_142c56870(undefined8 param_1,undefined8 param_2)

{
  FUN_142c11ab0(param_1,param_2,&DAT_1432b0b20);
  return;
}


/* address=142c56940 name=FUN_142c56940 */

char * FUN_142c56940(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    pcVar1 = (char *)0x143cf3ff0;
    break;
  default:
    pcVar1 = s_unknown_certificate_verification_143cf4880;
    break;
  case 2:
    pcVar1 = s_unable_to_get_issuer_certificate_143cf3ff8;
    break;
  case 3:
    pcVar1 = s_unable_to_get_certificate_CRL_143cf4020;
    break;
  case 4:
    pcVar1 = s_unable_to_decrypt_certificate_s_s_143cf4040;
    break;
  case 5:
    pcVar1 = s_unable_to_decrypt_CRL_s_signatur_143cf4070;
    break;
  case 6:
    pcVar1 = s_unable_to_decode_issuer_public_k_143cf4098;
    break;
  case 7:
    pcVar1 = s_certificate_signature_failure_143cf40c0;
    break;
  case 8:
    pcVar1 = s_CRL_signature_failure_143cf40e0;
    break;
  case 9:
    pcVar1 = s_certificate_is_not_yet_valid_143cf40f8;
    break;
  case 10:
    pcVar1 = s_certificate_has_expired_143cf4130;
    break;
  case 0xb:
    pcVar1 = s_CRL_is_not_yet_valid_143cf4118;
    break;
  case 0xc:
    pcVar1 = s_CRL_has_expired_143cf4148;
    break;
  case 0xd:
    pcVar1 = s_format_error_in_certificate_s_no_143cf4158;
    break;
  case 0xe:
    pcVar1 = s_format_error_in_certificate_s_no_143cf4188;
    break;
  case 0xf:
    pcVar1 = s_format_error_in_CRL_s_lastUpdate_143cf41b8;
    break;
  case 0x10:
    pcVar1 = s_format_error_in_CRL_s_nextUpdate_143cf41e0;
    break;
  case 0x11:
    pcVar1 = s_out_of_memory_143cf4208;
    break;
  case 0x12:
    pcVar1 = s_self_signed_certificate_143cf4218;
    break;
  case 0x13:
    pcVar1 = s_self_signed_certificate_in_certi_143cf4230;
    break;
  case 0x14:
    pcVar1 = s_unable_to_get_local_issuer_certi_143cf4260;
    break;
  case 0x15:
    pcVar1 = s_unable_to_verify_the_first_certi_143cf4288;
    break;
  case 0x16:
    pcVar1 = s_certificate_chain_too_long_143cf42b0;
    break;
  case 0x17:
    pcVar1 = s_certificate_revoked_143cf42d0;
    break;
  case 0x18:
    pcVar1 = s_invalid_CA_certificate_143cf42e8;
    break;
  case 0x19:
    pcVar1 = s_path_length_constraint_exceeded_143cf4330;
    break;
  case 0x1a:
    pcVar1 = s_unsupported_certificate_purpose_143cf43c0;
    break;
  case 0x1b:
    pcVar1 = s_certificate_not_trusted_143cf43e0;
    break;
  case 0x1c:
    pcVar1 = s_certificate_rejected_143cf43f8;
    break;
  case 0x1d:
    pcVar1 = s_subject_issuer_mismatch_143cf4438;
    break;
  case 0x1e:
    pcVar1 = s_authority_and_subject_key_identi_143cf4450;
    break;
  case 0x1f:
    pcVar1 = s_authority_and_issuer_serial_numb_143cf4480;
    break;
  case 0x20:
    pcVar1 = s_key_usage_does_not_include_certi_143cf44b0;
    break;
  case 0x21:
    pcVar1 = s_unable_to_get_CRL_issuer_certifi_143cf44e0;
    break;
  case 0x22:
    pcVar1 = s_unhandled_critical_extension_143cf4508;
    break;
  case 0x23:
    pcVar1 = s_key_usage_does_not_include_CRL_s_143cf4528;
    break;
  case 0x24:
    pcVar1 = s_unhandled_critical_CRL_extension_143cf4580;
    break;
  case 0x25:
    pcVar1 = s_invalid_non_CA_certificate__has_C_143cf4300;
    break;
  case 0x26:
    pcVar1 = s_proxy_path_length_constraint_exc_143cf4350;
    break;
  case 0x27:
    pcVar1 = s_key_usage_does_not_include_digit_143cf4550;
    break;
  case 0x28:
    pcVar1 = s_proxy_certificates_not_allowed__p_143cf4380;
    break;
  case 0x29:
    pcVar1 = s_invalid_or_inconsistent_certific_143cf45a8;
    break;
  case 0x2a:
    pcVar1 = s_invalid_or_inconsistent_certific_143cf45d8;
    break;
  case 0x2b:
    pcVar1 = s_no_explicit_policy_143cf4610;
    break;
  case 0x2c:
    pcVar1 = s_Different_CRL_scope_143cf4628;
    break;
  case 0x2d:
    pcVar1 = s_Unsupported_extension_feature_143cf4640;
    break;
  case 0x2e:
    pcVar1 = s_RFC_3779_resource_not_subset_of_p_143cf4660;
    break;
  case 0x2f:
    pcVar1 = s_permitted_subtree_violation_143cf4698;
    break;
  case 0x30:
    pcVar1 = s_excluded_subtree_violation_143cf46b8;
    break;
  case 0x31:
    pcVar1 = s_name_constraints_minimum_and_max_143cf46d8;
    break;
  case 0x32:
    pcVar1 = s_application_verification_failure_143cf4410;
    break;
  case 0x33:
    pcVar1 = s_unsupported_name_constraint_type_143cf4710;
    break;
  case 0x34:
    pcVar1 = s_unsupported_or_invalid_name_cons_143cf4738;
    break;
  case 0x35:
    pcVar1 = s_unsupported_or_invalid_name_synt_143cf4768;
    break;
  case 0x36:
    pcVar1 = s_CRL_path_validation_error_143cf4790;
    break;
  case 0x3e:
    pcVar1 = s_Hostname_mismatch_143cf47b0;
    break;
  case 0x3f:
    pcVar1 = s_Email_address_mismatch_143cf47c8;
    break;
  case 0x40:
    pcVar1 = s_IP_address_mismatch_143cf47e0;
    break;
  case 0x41:
    pcVar1 = s_Invalid_certificate_verification_143cf47f8;
    break;
  case 0x42:
    pcVar1 = s_Issuer_certificate_lookup_error_143cf4828;
    break;
  case 0x43:
    pcVar1 = s_Issuer_has_name_constraints_but_l_143cf4848;
  }
  return pcVar1;
}


/* address=142c56d40 name=FUN_142c56d40 */

undefined * FUN_142c56d40(void)

{
  return &DAT_1432b0c50;
}


/* address=142c56d70 name=FUN_142c56d70 */

undefined * FUN_142c56d70(void)

{
  return &DAT_1432b0d90;
}


/* address=142c56d90 name=FUN_142c56d90 */

undefined * FUN_142c56d90(void)

{
  return &DAT_1432b0cd0;
}


/* address=142c574d0 name=FUN_142c574d0 */

ulonglong FUN_142c574d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 *param_5,longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar5;
  uint uStack_58;
  undefined4 auStack_48 [2];
  undefined auStack_40 [64];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if ((*(longlong *)(param_6 + 0x28) != 0) &&
     (*(longlong *)(*(longlong *)(param_6 + 0x28) + 0x28) != 0)) {
    uVar2 = (**(code **)(*(longlong *)(param_6 + 0x28) + 0x28))
                      (param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  uStack_58 = 0;
  lVar3 = FUN_142b53d60(param_2,param_3,param_6);
  if (lVar3 == 0) {
    *param_5 = 0;
  }
  else {
    uVar4 = FUN_142c57740(param_6);
    FUN_142b7a590(auStack_40,param_4,uVar4);
    iVar1 = FUN_142c57930(auStack_40,lVar3);
    if ((iVar1 == 0) || (iVar1 = FUN_142b7a650(auStack_40,0,auStack_48), iVar1 == 0)) {
      FUN_142afa690(0x1a,0,0x69,s_D__a_1_s_target_release_build_bo_143cf49f0,CONCAT44(uVar5,0x58));
      *param_5 = 0;
    }
    else {
      *param_5 = auStack_48[0];
      uStack_58 = 1;
    }
  }
  FUN_142b53c10(lVar3);
  return (ulonglong)uStack_58;
}


/* address=142c57640 name=FUN_142c57640 */

undefined4
FUN_142c57640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_28;
  undefined8 uStack_18;
  longlong alStack_10 [2];
  
  uStack_28 = 0;
  uStack_18 = 0;
  lVar2 = FUN_142c578a0(param_4,param_5);
  if (lVar2 != 0) {
    iVar1 = FUN_142c579d0(&uStack_18,alStack_10,lVar2);
    if (((iVar1 == 0) || (alStack_10[0] != param_5)) ||
       (iVar1 = FUN_142c57c00(param_4,uStack_18,param_5), iVar1 != 0)) {
      FUN_142afa690(0x1a,0,0x44,s_D__a_1_s_target_release_build_bo_143cf4a60,0x75);
    }
    else {
      uStack_28 = FUN_142b53fa0(param_2,param_3,lVar2,param_6);
    }
  }
  FUN_142b0eaa0(uStack_18);
  FUN_142b53c10(lVar2);
  return uStack_28;
}


/* address=142c57740 name=FUN_142c57740 */

undefined8 FUN_142c57740(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uStack_10;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(longlong *)(param_1 + 0x28) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20) == 0)) {
      lVar2 = FUN_142b4d190(param_1);
      if (lVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_142b4b3e0(lVar2);
      uVar1 = FUN_142b1d490(uVar3);
      uStack_10 = (ulonglong)uVar1;
    }
    else {
      uStack_10 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(param_1);
    }
    uVar3 = FUN_142c57a70(uStack_10);
  }
  return uVar3;
}


/* address=142c577e0 name=FUN_142c577e0 */

undefined8 * FUN_142c577e0(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  wchar_t *apwStack_20 [4];
  
  puVar3 = (undefined8 *)FUN_142b53ba0();
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar1 = wcstoul(param_1,apwStack_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_142c76c80(apwStack_20,*puVar3), iVar2 == 0)) ||
        (iVar2 = FUN_142c76c80(apwStack_20,puVar3[1]), iVar2 == 0)) ||
       (lVar4 = FUN_142b782f0(apwStack_20), lVar4 != 0)) {
      FUN_142afa690(0x1a,0,100,s_D__a_1_s_target_release_build_bo_143cf4ad0,0xa0);
      FUN_142b53c10(puVar3);
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}


/* address=142c578a0 name=FUN_142c578a0 */

longlong FUN_142c578a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined auStack_20 [32];
  
  FUN_142b78260(auStack_20,param_1,param_2);
  lVar1 = FUN_142c577e0(auStack_20);
  if ((lVar1 == 0) || (lVar2 = FUN_142b782f0(auStack_20), lVar2 != 0)) {
    FUN_142afa690(0x1a,0,100,s_D__a_1_s_target_release_build_bo_143cf4b40,0xac);
    FUN_142b53c10(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=142c57930 name=FUN_142c57930 */

undefined8 FUN_142c57930(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_142c76d60(auStack_38,*param_2), iVar1 != 0)) &&
      (iVar1 = FUN_142c76d60(auStack_38,param_2[1]), iVar1 != 0)) &&
     (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_142afa690(0x1a,0,0x69,s_D__a_1_s_target_release_build_bo_143cf4bb0,0xb9);
  return 0;
}


/* address=142c579d0 name=FUN_142c579d0 */

undefined8 FUN_142c579d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined auStack_38 [56];
  
  FUN_142b7a4f0(auStack_38);
  iVar1 = FUN_142b7a520(auStack_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_142c57930(auStack_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_142b7a650(auStack_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_142afa690(0x1a,0,0x69,s_D__a_1_s_target_release_build_bo_143cf4c20,0xc6);
  FUN_142b7a5e0(auStack_38);
  return 0;
}


/* address=142c57a70 name=FUN_142c57a70 */

ulonglong FUN_142c57a70(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_142c57c40(param_1 + 1);
  uVar2 = lVar1 + 2 + param_1;
  if (uVar2 < param_1) {
    uVar2 = 0;
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar2) {
      uVar2 = 0;
    }
    else {
      lVar1 = FUN_142c57c40(uVar3);
      uVar2 = lVar1 + 1 + uVar3;
      if (uVar2 < uVar3) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


/* address=142c57c00 name=FUN_142c57c00 */

int FUN_142c57c00(void *param_1,void *param_2,size_t param_3)

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


/* address=142c57c40 name=FUN_142c57c40 */

longlong FUN_142c57c40(ulonglong param_1)

{
  ulonglong uStackX_8;
  longlong lStack_18;
  
  if (param_1 < 0x80) {
    lStack_18 = 1;
  }
  else {
    lStack_18 = 1;
    for (uStackX_8 = param_1; uStackX_8 != 0; uStackX_8 = uStackX_8 >> 8) {
      lStack_18 = lStack_18 + 1;
    }
  }
  return lStack_18;
}


/* address=142c57c90 name=FUN_142c57c90 */

void FUN_142c57c90(void)

{
  FUN_142b05960();
  return;
}


/* address=142c57cb0 name=FUN_142c57cb0 */

void FUN_142c57cb0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c57cd0 name=FUN_142c57cd0 */

void FUN_142c57cd0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c57d00 name=FUN_142c57d00 */

void FUN_142c57d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05a40(param_1,param_2,param_3);
  return;
}


/* address=142c57d40 name=FUN_142c57d40 */

void FUN_142c57d40(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142c57d60 name=FUN_142c57d60 */

void FUN_142c57d60(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05d40(param_1,param_2);
  return;
}


/* address=142c57d90 name=FUN_142c57d90 */

void FUN_142c57d90(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c57e10 name=FUN_142c57e10 */

void FUN_142c57e10(undefined8 param_1)

{
  FUN_142b058a0(param_1);
  return;
}


/* address=142c57e30 name=FUN_142c57e30 */

void FUN_142c57e30(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c57e60 name=FUN_142c57e60 */

void FUN_142c57e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05f60(param_1,param_2,param_3,&LAB_142c57dc0);
  return;
}


/* address=142c57ea0 name=FUN_142c57ea0 */

void FUN_142c57ea0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c57ed0 name=FUN_142c57ed0 */

void FUN_142c57ed0(undefined8 param_1)

{
  FUN_142b06400(param_1,&LAB_142c57dc0);
  return;
}


/* address=142c57f00 name=FUN_142c57f00 */

bool FUN_142c57f00(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    FID_conflict__assert((wchar_t *)s_e_143cf5278,(wchar_t *)s_D_143cf51b0,0x51);
  }
  if ((DAT_143d03be0 == 0) && (DAT_143d03be0 = FUN_142c57e10(FUN_142c586a0), DAT_143d03be0 == 0)) {
    return false;
  }
  lVar1 = FUN_142c57ea0(DAT_143d03be0,param_1);
  if (lVar1 != 0) {
    FUN_142c57ed0(DAT_143d03be0);
  }
  return lVar1 != 0;
}


/* address=142c58050 name=FUN_142c58050 */

undefined8 FUN_142c58050(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_142c15d10(*param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c58090(iVar1);
  }
  return uVar2;
}


/* address=142c58090 name=FUN_142c58090 */

undefined8 FUN_142c58090(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int *piStack_90;
  undefined8 auStack_88 [2];
  int aiStack_78 [30];
  
  piStack_90 = aiStack_78;
  if (param_1 < 0) {
    uVar3 = 0;
  }
  else {
    aiStack_78[0] = param_1;
    puVar2 = (undefined8 *)FUN_142ca3fb8(&piStack_90,&PTR_DAT_1432b68f0,0x1f,8,&LAB_142c586d0);
    if (puVar2 == (undefined8 *)0x0) {
      if (DAT_143d03be0 == 0) {
        uVar3 = 0;
      }
      else {
        iVar1 = FUN_142c57e60(DAT_143d03be0,auStack_88,aiStack_78);
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_142c57e30(DAT_143d03be0,auStack_88[0]);
        }
      }
    }
    else {
      uVar3 = *puVar2;
    }
  }
  return uVar3;
}


/* address=142c58160 name=FUN_142c58160 */

longlong FUN_142c58160(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong alStack_18 [3];
  
  lVar1 = FUN_142c58050(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    alStack_18[0] = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
    lVar2 = FUN_142c0f7d0(0,alStack_18,**(undefined4 **)(param_1 + 0x10),*(undefined8 *)(lVar1 + 8))
    ;
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else if (alStack_18[0] !=
             (longlong)**(int **)(param_1 + 0x10) + *(longlong *)(*(longlong *)(param_1 + 0x10) + 8)
            ) {
      FUN_142c0f130(lVar2,*(undefined8 *)(lVar1 + 8));
      FUN_142afa690(0x14,0,0xa4,s_D__a_1_s_target_release_build_bo_143cf5380,0xbd);
      lVar2 = 0;
    }
  }
  return lVar2;
}


/* address=142c58240 name=FUN_142c58240 */

undefined8 FUN_142c58240(longlong param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iStack_28;
  undefined8 *puStack_20;
  ulonglong uStack_18;
  
  puStack_20 = (undefined8 *)0x0;
  if (param_1 == 0) {
    if (param_4 != (int *)0x0) {
      *param_4 = -1;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffff;
    }
    uVar5 = 0;
  }
  else {
    if (param_4 == (int *)0x0) {
      iStack_28 = 0;
    }
    else {
      iStack_28 = *param_4 + 1;
    }
    if (iStack_28 < 0) {
      iStack_28 = 0;
    }
    for (uStack_18 = (ulonglong)iStack_28; uVar3 = FUN_142c57cb0(param_1), uStack_18 < uVar3;
        uStack_18 = uStack_18 + 1) {
      puVar4 = (undefined8 *)FUN_142c57cd0(param_1,uStack_18);
      iVar1 = FUN_142c15d10(*puVar4);
      if (iVar1 == param_2) {
        if (param_4 != (int *)0x0) {
          *param_4 = (int)uStack_18;
          puStack_20 = puVar4;
          break;
        }
        bVar6 = puStack_20 != (undefined8 *)0x0;
        puStack_20 = puVar4;
        if (bVar6) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 0xfffffffe;
          }
          return 0;
        }
      }
    }
    if (puStack_20 == (undefined8 *)0x0) {
      if (param_4 != (int *)0x0) {
        *param_4 = -1;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0xffffffff;
      }
      uVar5 = 0;
    }
    else {
      if (param_3 != (undefined4 *)0x0) {
        uVar2 = FUN_142c52bd0(puStack_20);
        *param_3 = uVar2;
      }
      uVar5 = FUN_142c58160(puStack_20);
    }
  }
  return uVar5;
}


/* address=142c58440 name=FUN_142c58440 */

undefined8
FUN_142c58440(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             uint param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iStack_34;
  undefined4 uStack_30;
  longlong lStack_28;
  
  iStack_34 = -1;
  uVar1 = param_5 & 0xf;
  if (uVar1 != 1) {
    iStack_34 = FUN_142c52e50(*param_1,param_2,0xffffffff);
  }
  if (iStack_34 < 0) {
    if ((uVar1 != 3) && (uVar1 != 5)) goto LAB_142c58531;
    uStack_30 = 0x72;
  }
  else {
    if (uVar1 == 4) {
      return 1;
    }
    if (uVar1 != 0) {
      if (uVar1 == 5) {
        lVar2 = FUN_142c57d60(*param_1,(longlong)iStack_34);
        if (lVar2 == 0) {
          return 0xffffffff;
        }
        FUN_142c0d010(lVar2);
        return 1;
      }
LAB_142c58531:
      lVar2 = FUN_142b6e3e0(param_2,param_4,param_3);
      if (lVar2 == 0) {
        FUN_142afa690(0x14,0,0x6d,s_D__a_1_s_target_release_build_bo_143cf53f0,0x132);
        return 0;
      }
      if (iStack_34 < 0) {
        lStack_28 = *param_1;
        if (((lStack_28 != 0) || (lStack_28 = FUN_142c57c90(), lStack_28 != 0)) &&
           (lVar4 = FUN_142c57d90(lStack_28,lVar2), lVar4 != 0)) {
          *param_1 = lStack_28;
          return 1;
        }
        if (lStack_28 != *param_1) {
          FUN_142c57d40(lStack_28);
        }
        FUN_142c0d010(lVar2);
        return 0xffffffff;
      }
      uVar3 = FUN_142c57cd0(*param_1,(longlong)iStack_34);
      FUN_142c0d010(uVar3);
      lVar2 = FUN_142c57d00(*param_1,(longlong)iStack_34,lVar2);
      if (lVar2 == 0) {
        return 0xffffffff;
      }
      return 1;
    }
    uStack_30 = 0x70;
  }
  if ((param_5 & 0x10) == 0) {
    FUN_142afa690(0x14,0,uStack_30,s_D__a_1_s_target_release_build_bo_143cf5460,0x153);
  }
  return 0;
}


/* address=142c586a0 name=FUN_142c586a0 */

int FUN_142c586a0(int **param_1,int **param_2)

{
  return **param_1 - **param_2;
}


/* address=142c58710 name=FUN_142c58710 */

void FUN_142c58710(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c58730 name=FUN_142c58730 */

void FUN_142c58730(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c58760 name=FUN_142c58760 */

int FUN_142c58760(void *param_1,void *param_2,size_t param_3)

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


/* address=142c587a0 name=FUN_142c587a0 */

undefined8 FUN_142c587a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7a520(auStack_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_142c58890(auStack_38,param_1,param_2,0,1,0), iVar1 != 0)) {
    uVar3 = FUN_142b7ab20(auStack_38);
    if (0x10000 < uVar3) {
      FUN_142afa690(0xc,0,0xb1,s_D__a_1_s_target_release_build_bo_143cf5620,0x75);
      FUN_142b7a5e0(auStack_38);
      return 0;
    }
    uStack_48 = FUN_142b7aaa0(auStack_38);
    uVar2 = FUN_142b7ab20(auStack_38);
    uStack_40 = FUN_142c0e640(0,&uStack_48,uVar2);
    FUN_142b7a5e0(auStack_38);
    return uStack_40;
  }
  FUN_142b7a5e0(auStack_38);
  return 0;
}


/* address=142c58890 name=FUN_142c58890 */

ulonglong FUN_142c58890(undefined8 param_1,char *param_2,longlong param_3,uint param_4,int param_5,
                       int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  size_t sVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcStackX_10;
  uint uStackX_20;
  ulonglong in_stack_fffffffffffffe38;
  uint uVar9;
  undefined8 in_stack_fffffffffffffe40;
  undefined8 in_stack_fffffffffffffe48;
  undefined4 uVar10;
  uint uStack_1a8;
  undefined auStack_1a4 [4];
  uint uStack_1a0;
  char *pcStack_198;
  int iStack_190;
  int iStack_18c;
  longlong lStack_188;
  undefined auStack_180 [16];
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  int iStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  ulonglong uStack_120;
  longlong lStack_118;
  undefined auStack_110 [16];
  longlong lStack_100;
  int *piStack_f8;
  ulonglong uStack_f0;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  int iStack_dc;
  uint uStack_d8;
  int iStack_d4;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined auStack_a8 [48];
  char *pcStack_78;
  undefined auStack_70 [8];
  undefined auStack_68 [8];
  undefined8 uStack_60;
  longlong lStack_58;
  undefined auStack_50 [16];
  undefined auStack_40 [16];
  undefined auStack_30 [32];
  
  if ((param_4 & 0x20000000) != 0) {
    FID_conflict__assert((wchar_t *)s___143cf5920,(wchar_t *)s_D_143cf5850,0xc2);
  }
  pcStackX_10 = param_2;
  uStackX_20 = param_4;
  if (0x32 < param_6) {
    FUN_142afa690(0xc,0,0x83,s_D__a_1_s_target_release_build_bo_143cf5970,0xc4);
    return 0;
  }
  while( true ) {
    while ((*pcStackX_10 != '\0' && (iVar1 = FUN_142b0f090(*pcStackX_10), iVar1 != 0))) {
      pcStackX_10 = pcStackX_10 + 1;
    }
    lStack_d0 = FUN_142c93ff0(pcStackX_10,0x2c);
    if (lStack_d0 == 0) break;
    FUN_142b78260(auStack_180,pcStackX_10,lStack_d0 - (longlong)pcStackX_10);
    while( true ) {
      puVar7 = auStack_180;
      puVar8 = auStack_50;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar1 = FUN_142b78750(auStack_50,auStack_1a4);
      if ((iVar1 == 0) || (iVar1 = FUN_142b0f090(auStack_1a4[0]), iVar1 == 0)) break;
      puVar7 = auStack_50;
      puVar8 = auStack_180;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    pcStack_78 = pcStackX_10;
    pcStackX_10 = (char *)(lStack_d0 + 1);
    iStack_b0 = FUN_142b78900(auStack_180,auStack_110,0x3a);
    if (iStack_b0 == 0) {
      puVar7 = auStack_180;
      puVar8 = auStack_110;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_142b78260(auStack_180,0,0);
    }
    else {
      FUN_142b782a0(auStack_180,1);
    }
    iVar1 = FUN_142c59cf0(auStack_110,s_FORMAT_143cf59d4);
    if ((iVar1 == 0) && (iVar1 = FUN_142c59cf0(auStack_110,&DAT_143cf59dc), iVar1 == 0)) {
      iVar1 = FUN_142c59cf0(auStack_110,&DAT_143cf5a64);
      if (iVar1 == 0) {
        iVar1 = FUN_142c59cf0(auStack_110,s_IMPLICIT_143cf5a68);
        uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
        if (iVar1 == 0) {
          iVar1 = FUN_142c59cf0(auStack_110,&DAT_143cf5ae4);
          uVar9 = (uint)(in_stack_fffffffffffffe38 >> 0x20);
          uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe40 >> 0x20);
          if (iVar1 != 0) {
LAB_142c58c26:
            if (uStackX_20 == 0) {
              uVar2 = FUN_142c59d80(auStack_180);
              if ((uVar2 == 0) ||
                 (iVar1 = FUN_142c59f00(param_1,pcStackX_10,param_3,uVar2 | 0x20000000,
                                        (ulonglong)uVar9 << 0x20,CONCAT44(uVar3,param_5),
                                        CONCAT44(uVar10,param_6)), iVar1 == 0)) {
                uStack_170 = 0;
              }
              else {
                uStack_170 = 1;
              }
              return (ulonglong)uStack_170;
            }
            FUN_142afa690(0xc,0,0x83,s_D__a_1_s_target_release_build_bo_143cf5b00,
                          CONCAT44(uVar9,0x10e));
            return 0;
          }
          iVar1 = FUN_142c59cf0(auStack_110,s_EXPLICIT_143cf5ae8);
          uVar9 = (uint)(in_stack_fffffffffffffe38 >> 0x20);
          uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe40 >> 0x20);
          if (iVar1 != 0) goto LAB_142c58c26;
          iVar1 = FUN_142c59cf0(auStack_110,s_OCTWRAP_143cf5b68);
          if (iVar1 != 0) {
            if (uStackX_20 == 0) {
              uStack_16c = 4;
            }
            else {
              uStack_16c = uStackX_20;
            }
            uVar5 = FUN_142c59f00(param_1,pcStackX_10,param_3,uStack_16c,
                                  in_stack_fffffffffffffe38 & 0xffffffff00000000,param_5,
                                  CONCAT44(uVar10,param_6));
            return uVar5;
          }
          iVar1 = FUN_142c59cf0(auStack_110,s_BITWRAP_143cf5b70);
          if (iVar1 != 0) {
            if (uStackX_20 == 0) {
              uStack_168 = 3;
            }
            else {
              uStack_168 = uStackX_20;
            }
            uVar5 = FUN_142c59f00(param_1,pcStackX_10,param_3,uStack_168,1,param_5,
                                  CONCAT44(uVar10,param_6));
            return uVar5;
          }
          iVar1 = FUN_142c59cf0(auStack_110,s_SEQWRAP_143cf5b78);
          if (iVar1 != 0) {
            if (uStackX_20 == 0) {
              uStack_164 = 0x20000010;
            }
            else {
              uStack_164 = uStackX_20 | 0x20000000;
            }
            uVar5 = FUN_142c59f00(param_1,pcStackX_10,param_3,uStack_164 | 0x20000000,
                                  in_stack_fffffffffffffe38 & 0xffffffff00000000,param_5,
                                  CONCAT44(uVar10,param_6));
            return uVar5;
          }
          iVar1 = FUN_142c59cf0(auStack_110,s_SETWRAP_143cf5b80);
          if (iVar1 != 0) {
            if (uStackX_20 == 0) {
              uStack_160 = 0x20000011;
            }
            else {
              uStack_160 = uStackX_20 | 0x20000000;
            }
            uVar5 = FUN_142c59f00(param_1,pcStackX_10,param_3,uStack_160,
                                  in_stack_fffffffffffffe38 & 0xffffffff00000000,param_5,
                                  CONCAT44(uVar10,param_6));
            return uVar5;
          }
          pcStackX_10 = pcStack_78;
          break;
        }
      }
      if (uStackX_20 != 0) {
        FUN_142afa690(0xc,0,0x83,s_D__a_1_s_target_release_build_bo_143cf5a80,0x102);
        return 0;
      }
      uStackX_20 = FUN_142c59d80(auStack_180);
      if (uStackX_20 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = FUN_142c59cf0(auStack_180,s_ASCII_143cf59e4);
      if (iVar1 == 0) {
        iVar1 = FUN_142c59cf0(auStack_180,&DAT_143cf59ec);
        if (iVar1 == 0) {
          iVar1 = FUN_142c59cf0(auStack_180,&DAT_143cf561c);
          if (iVar1 == 0) {
            iVar1 = FUN_142c59cf0(auStack_180,s_BITLIST_143cf59f8);
            if (iVar1 == 0) {
              FUN_142afa690(0xc,0,0xb6,s_D__a_1_s_target_release_build_bo_143cf5a00,0xfc);
              return 0;
            }
            param_5 = 4;
          }
          else {
            param_5 = 3;
          }
        }
        else {
          param_5 = 2;
        }
      }
      else {
        param_5 = 1;
      }
    }
  }
  lStack_c8 = FUN_142c93ff0(pcStackX_10,0x3a);
  uStack_15c = (uint)(lStack_c8 != 0);
  uStack_12c = uStack_15c;
  if (uStack_15c == 0) {
    sVar4 = strlen(pcStackX_10);
    FUN_142b78260(auStack_40,pcStackX_10,sVar4);
    pcStack_198 = &DAT_143d03be8;
  }
  else {
    FUN_142b78260(auStack_40,pcStackX_10,lStack_c8 - (longlong)pcStackX_10);
    pcStack_198 = (char *)(lStack_c8 + 1);
  }
  uStack_1a8 = 0;
  for (uStack_120 = 0; uStack_120 < 0x21; uStack_120 = uStack_120 + 1) {
    iVar1 = FUN_142c59cf0(auStack_40,(&PTR_DAT_1432b69f0)[uStack_120 * 2]);
    if (iVar1 != 0) {
      uStack_1a8 = *(uint *)(&DAT_1432b69f8 + uStack_120 * 0x10);
      break;
    }
  }
  if (uStack_1a8 == 0) {
    FUN_142afa690(0xc,0,0xb9,s_D__a_1_s_target_release_build_bo_143cf5b90,0x166);
    return 0;
  }
  if (uStackX_20 == 0) {
    uStack_158 = uStack_1a8;
  }
  else {
    uStack_158 = uStackX_20 | uStack_1a8 & 0x20000000;
  }
  iVar1 = FUN_142b7ac70(param_1,auStack_a8,uStack_158);
  uVar10 = (undefined4)(in_stack_fffffffffffffe38 >> 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  uStack_1a0 = uStack_1a8;
  if (uStack_1a8 < 0x20000011) {
    if (uStack_1a8 != 0x20000010) {
      uStack_1a0 = uStack_1a8 - 1;
      switch(uStack_1a0) {
      case 0:
        if (param_5 != 1) {
          FUN_142afa690(0xc,0,0xa1,s_D__a_1_s_target_release_build_bo_143cf5c70,
                        CONCAT44(uVar10,0x17b));
          return 0;
        }
        iVar1 = FUN_142c203a0(pcStack_198,&iStack_dc);
        if (iVar1 != 0) {
          if (iStack_dc == 0) {
            uStack_154 = 0;
          }
          else {
            uStack_154 = 0xff;
          }
          iVar1 = FUN_142b7af20(auStack_a8,(undefined)uStack_154);
          if ((iVar1 == 0) || (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)) {
            uStack_150 = 0;
          }
          else {
            uStack_150 = 1;
          }
          return (ulonglong)uStack_150;
        }
        FUN_142afa690(0xc,0,0x7d,s_D__a_1_s_target_release_build_bo_143cf5ce0,CONCAT44(uVar10,0x180)
                     );
        return 0;
      case 1:
      case 9:
        if (param_5 != 1) {
          FUN_142afa690(0xc,0,0x8b,s_D__a_1_s_target_release_build_bo_143cf5d50,
                        CONCAT44(uVar10,0x189));
          return 0;
        }
        lStack_100 = FUN_142c1f280(0,pcStack_198);
        if (lStack_100 != 0) {
          iStack_190 = FUN_142c14bb0(lStack_100,0);
          if ((((iStack_190 < 1) ||
               (iVar1 = FUN_142b7ade0(auStack_a8,auStack_70,(longlong)iStack_190), iVar1 == 0)) ||
              (iVar1 = FUN_142c14bb0(lStack_100,auStack_70), iVar1 != iStack_190)) ||
             (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)) {
            uStack_14c = 0;
          }
          else {
            uStack_14c = 1;
          }
          uStack_e0 = uStack_14c;
          FUN_142c0e290(lStack_100);
          return (ulonglong)uStack_e0;
        }
        FUN_142afa690(0xc,0,0x82,s_D__a_1_s_target_release_build_bo_143cf5dc0,CONCAT44(uVar10,0x18e)
                     );
        return 0;
      case 2:
        if (param_5 == 4) {
          lStack_188 = FUN_142c0e1c0();
          if (lStack_188 == 0) {
            return 0;
          }
          iVar1 = FUN_142b6f8b0(pcStack_198,0x2c,1,&LAB_142c59c40,lStack_188);
          if (iVar1 == 0) {
            FUN_142afa690(0xc,0,0x97,s_D__a_1_s_target_release_build_bo_143cf6060,0x1e5);
            FUN_142c0e1e0(lStack_188);
            return 0;
          }
          iStack_18c = func_0x000142c141d0(lStack_188,0);
          if ((((iStack_18c < 1) ||
               (iVar1 = FUN_142b7ade0(auStack_a8,auStack_68,(longlong)iStack_18c), iVar1 == 0)) ||
              (iVar1 = func_0x000142c141d0(lStack_188,auStack_68), iVar1 != iStack_18c)) ||
             (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)) {
            uStack_134 = 0;
          }
          else {
            uStack_134 = 1;
          }
          uStack_e8 = uStack_134;
          FUN_142c0e1e0(lStack_188);
          return (ulonglong)uStack_e8;
        }
        iVar1 = FUN_142b7af20(auStack_a8,0);
        if (iVar1 == 0) {
          return 0;
        }
      case 3:
        if (param_5 == 1) {
          sVar4 = strlen(pcStack_198);
          iVar1 = FUN_142b7ad30(auStack_a8,pcStack_198,sVar4);
          if ((iVar1 == 0) || (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)) {
            uStack_124 = 0;
          }
          else {
            uStack_124 = 1;
          }
          return (ulonglong)uStack_124;
        }
        if (param_5 == 3) {
          lStack_c0 = FUN_142c1fd80(pcStack_198,&uStack_60);
          if (lStack_c0 != 0) {
            iVar1 = FUN_142b7ad30(auStack_a8,lStack_c0,uStack_60);
            if ((iVar1 == 0) || (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)) {
              uStack_130 = 0;
            }
            else {
              uStack_130 = 1;
            }
            uStack_e4 = uStack_130;
            FUN_142b0eaa0(lStack_c0);
            return (ulonglong)uStack_e4;
          }
          FUN_142afa690(0xc,0,0x80,s_D__a_1_s_target_release_build_bo_143cf60d0,
                        CONCAT44(uVar10,0x203));
          return 0;
        }
        FUN_142afa690(0xc,0,0x7c,s_D__a_1_s_target_release_build_bo_143cf6140,CONCAT44(uVar10,0x20b)
                     );
        return 0;
      case 4:
        if (*pcStack_198 != '\0') {
          FUN_142afa690(0xc,0,0x85,s_D__a_1_s_target_release_build_bo_143cf5c00,
                        CONCAT44(uVar10,0x174));
          return 0;
        }
        uVar5 = FUN_142b7a730(param_1);
        return uVar5;
      case 5:
        if (param_5 != 1) {
          FUN_142afa690(0xc,0,0xa5,s_D__a_1_s_target_release_build_bo_143cf5e30,
                        CONCAT44(uVar10,0x19d));
          return 0;
        }
        lStack_118 = FUN_142c16250(pcStack_198,0);
        if ((lStack_118 != 0) && (*(int *)(lStack_118 + 0x14) != 0)) {
          iVar1 = FUN_142b7ad30(auStack_a8,*(undefined8 *)(lStack_118 + 0x18),
                                (longlong)*(int *)(lStack_118 + 0x14));
          if ((iVar1 == 0) || (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)) {
            uStack_148 = 0;
          }
          else {
            uStack_148 = 1;
          }
          uStack_d8 = uStack_148;
          FUN_142b6d6c0(lStack_118);
          return (ulonglong)uStack_d8;
        }
        FUN_142afa690(0xc,0,0x86,s_D__a_1_s_target_release_build_bo_143cf5ea0,CONCAT44(uVar10,0x1a2)
                     );
        return 0;
      case 0xb:
      case 0x12:
      case 0x13:
      case 0x15:
      case 0x1b:
      case 0x1d:
        if (param_5 == 1) {
          uStack_13c = 0x1001;
        }
        else {
          if (param_5 != 2) {
            FUN_142afa690(0xc,0,0x7f,s_D__a_1_s_target_release_build_bo_143cf5ff0,
                          CONCAT44(uVar10,0x1cb));
            return 0;
          }
          uStack_13c = 0x1000;
        }
        piStack_f8 = (int *)0x0;
        uVar3 = FUN_142c0f7a0(uStack_1a8);
        iVar1 = FUN_142c7b480(&piStack_f8,pcStack_198,0xffffffffffffffff,uStack_13c,
                              CONCAT44(uVar10,uVar3),0,0x10000);
        if (0 < iVar1) {
          iVar1 = FUN_142b7ad30(auStack_a8,*(undefined8 *)(piStack_f8 + 2),(longlong)*piStack_f8);
          if ((iVar1 == 0) || (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)) {
            uStack_138 = 0;
          }
          else {
            uStack_138 = 1;
          }
          uStack_ac = uStack_138;
          FUN_142c134e0(piStack_f8);
          return (ulonglong)uStack_ac;
        }
        return 0;
      case 0x16:
      case 0x17:
        if (param_5 != 1) {
          FUN_142afa690(0xc,0,0xb0,s_D__a_1_s_target_release_build_bo_143cf5f10,
                        CONCAT44(uVar10,0x1ad));
          return 0;
        }
        sVar4 = strlen(pcStack_198);
        FUN_142b78260(auStack_30,pcStack_198,sVar4);
        if (uStack_1a8 == 0x17) {
          iStack_144 = FUN_142b79770(auStack_30,0,0);
        }
        else {
          iStack_144 = FUN_142b79730(auStack_30,0,0);
        }
        iStack_d4 = iStack_144;
        if (iStack_144 != 0) {
          sVar4 = strlen(pcStack_198);
          iVar1 = FUN_142b7ad30(auStack_a8,pcStack_198,sVar4);
          if ((iVar1 == 0) || (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)) {
            uStack_140 = 0;
          }
          else {
            uStack_140 = 1;
          }
          return (ulonglong)uStack_140;
        }
        FUN_142afa690(0xc,0,0x8a,s_D__a_1_s_target_release_build_bo_143cf5f80,CONCAT44(uVar10,0x1b8)
                     );
        return 0;
      }
LAB_142c59b8c:
      FUN_142afa690(0xc,0,0x44,s_D__a_1_s_target_release_build_bo_143cf6300,CONCAT44(uVar10,0x230));
      return 0;
    }
  }
  else if (uStack_1a8 != 0x20000011) goto LAB_142c59b8c;
  if (uStack_12c != 0) {
    if (param_3 == 0) {
      FUN_142afa690(0xc,0,0xaa,s_D__a_1_s_target_release_build_bo_143cf61b0,CONCAT44(uVar10,0x212));
      return 0;
    }
    lStack_b8 = FUN_142b6e490(param_3,pcStack_198);
    if (lStack_b8 == 0) {
      FUN_142afa690(0xc,0,0xaa,s_D__a_1_s_target_release_build_bo_143cf6220,0x217);
      return 0;
    }
    uStack_f0 = 0;
    while( true ) {
      uVar10 = (undefined4)(in_stack_fffffffffffffe38 >> 0x20);
      uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffe40 >> 0x20);
      uVar5 = FUN_142c58710(lStack_b8);
      if (uVar5 <= uStack_f0) break;
      lStack_58 = FUN_142c58730(lStack_b8,uStack_f0);
      in_stack_fffffffffffffe40 = CONCAT44(uVar3,param_6 + 1);
      in_stack_fffffffffffffe38 = CONCAT44(uVar10,1);
      iVar1 = FUN_142c58890(auStack_a8,*(undefined8 *)(lStack_58 + 0x10),param_3,0,
                            in_stack_fffffffffffffe38,in_stack_fffffffffffffe40);
      if (iVar1 == 0) {
        return 0;
      }
      uVar5 = FUN_142b7ab20(auStack_a8);
      if (0x10000 < uVar5) {
        FUN_142afa690(0xc,0,0xb1,s_D__a_1_s_target_release_build_bo_143cf6290,0x224);
        return 0;
      }
      uStack_f0 = uStack_f0 + 1;
    }
  }
  if (uStack_1a8 == 0x20000011) {
    iVar1 = FUN_142b7b5c0(auStack_a8);
    if ((iVar1 == 0) || (iVar1 = FUN_142b7a730(param_1), iVar1 == 0)) {
      uStack_128 = 0;
    }
    else {
      uStack_128 = 1;
    }
    uVar5 = (ulonglong)uStack_128;
  }
  else {
    uVar5 = FUN_142b7a730(param_1);
  }
  return uVar5;
}


/* address=142c59cf0 name=FUN_142c59cf0 */

undefined4 FUN_142c59cf0(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar4;
  
  sVar2 = FUN_142b782f0(param_1);
  sVar3 = strlen(param_2);
  if (sVar2 == sVar3) {
    sVar2 = strlen(param_2);
    uVar4 = FUN_142b782d0(param_1);
    iVar1 = FUN_142c58760(uVar4,param_2,sVar2);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


/* address=142c59d80 name=FUN_142c59d80 */

uint FUN_142c59d80(undefined *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  char acStack_48 [4];
  uint uStack_44;
  char cStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  undefined auStack_30 [32];
  
  puVar3 = auStack_30;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar1 = FUN_142b78990(auStack_30,&uStack_38);
  if ((iVar1 == 0) || (0x1fffffff < CONCAT44(uStack_34,uStack_38))) {
    FUN_142afa690(0xc,0,0x91,s_D__a_1_s_target_release_build_bo_143cf5690,0x8c);
    uStack_44 = 0;
  }
  else {
    uStack_44 = 0x80000000;
    iVar1 = FUN_142b784f0(auStack_30,acStack_48);
    if (iVar1 != 0) {
      cStack_40 = acStack_48[0];
      if (acStack_48[0] == 'A') {
        uStack_44 = 0x40000000;
      }
      else if (acStack_48[0] == 'C') {
        uStack_44 = 0x80000000;
      }
      else if (acStack_48[0] == 'P') {
        uStack_44 = 0xc0000000;
      }
      else {
        if (acStack_48[0] != 'U') {
          FUN_142afa690(0xc,0,0x90,s_D__a_1_s_target_release_build_bo_143cf5700,0xa2);
          return 0;
        }
        uStack_44 = 0;
      }
      lVar2 = FUN_142b782f0(auStack_30);
      if (lVar2 != 0) {
        FUN_142afa690(0xc,0,0x90,s_D__a_1_s_target_release_build_bo_143cf5770,0xa7);
        return 0;
      }
    }
    if ((uStack_44 == 0) && (CONCAT44(uStack_34,uStack_38) == 0)) {
      FUN_142afa690(0xc,0,0x91,s_D__a_1_s_target_release_build_bo_143cf57e0,0xaf);
      uStack_44 = 0;
    }
    else {
      uStack_44 = uStack_44 | uStack_38;
    }
  }
  return uStack_44;
}


/* address=142c59f00 name=FUN_142c59f00 */

undefined4
FUN_142c59f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined auStack_40 [64];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_40,param_4);
  if (((iVar1 != 0) &&
      (((param_5 == 0 || (iVar1 = FUN_142b7af20(auStack_40,0), iVar1 != 0)) &&
       (iVar1 = FUN_142c58890(auStack_40,param_2,param_3,0,param_6,param_7 + 1), iVar1 != 0)))) &&
     (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142c59fc0 name=FUN_142c59fc0 */

longlong FUN_142c59fc0(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  wchar_t *apwStack_18 [3];
  
  lVar3 = FUN_142b45420();
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = wcstoul(param_1,apwStack_18,0x20000010);
  if (((uVar1 != 0) && (iVar2 = FUN_142c5a280(apwStack_18,lVar3), iVar2 != 0)) &&
     (iVar2 = FUN_142c5a280(apwStack_18,lVar3 + 8), iVar2 != 0)) {
    lVar4 = FUN_142b782f0(apwStack_18);
    if (lVar4 != 0) {
      iVar2 = FUN_142b78ce0(apwStack_18,&uStack_20);
      if ((iVar2 == 0) || (0xffffffff < CONCAT44(uStack_1c,uStack_20))) goto LAB_142c5a081;
      *(undefined4 *)(lVar3 + 0x28) = uStack_20;
    }
    lVar4 = FUN_142b782f0(apwStack_18);
    if (lVar4 == 0) {
      return lVar3;
    }
  }
LAB_142c5a081:
  FUN_142afa690(5,0,0x68,s_D__a_1_s_target_release_build_bo_143cf6540,0x74);
  FUN_142b45480(lVar3);
  return 0;
}


/* address=142c5a0c0 name=FUN_142c5a0c0 */

undefined8 FUN_142c5a0c0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_142c5a2f0(auStack_38,*param_2), iVar1 != 0)) &&
      (iVar1 = FUN_142c5a2f0(auStack_38,param_2[1]), iVar1 != 0)) &&
     (((*(int *)(param_2 + 5) == 0 ||
       (iVar1 = FUN_142b7b130(auStack_38,*(undefined4 *)(param_2 + 5)), iVar1 != 0)) &&
      (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)))) {
    return 1;
  }
  FUN_142afa690(5,0,0x69,s_D__a_1_s_target_release_build_bo_143cf65b0,0x81);
  return 0;
}


/* address=142c5a180 name=FUN_142c5a180 */

longlong FUN_142c5a180(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined auStack_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_142b78260(auStack_20,*param_2,(longlong)param_3);
    lVar1 = FUN_142c59fc0(auStack_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_142b45480(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_142b782d0(auStack_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=142c5a220 name=FUN_142c5a220 */

undefined8 FUN_142c5a220(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7a520(auStack_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_142c5a0c0(auStack_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_142c1a0e0(auStack_38,param_2);
    return uVar2;
  }
  FUN_142b7a5e0(auStack_38);
  return 0xffffffff;
}


/* address=142c5a280 name=FUN_142c5a280 */

undefined8 FUN_142c5a280(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    FID_conflict__assert((wchar_t *)s___143cf64b0,(wchar_t *)s_D_143cf63e0,0x46);
  }
  lVar1 = FUN_142b1d190();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c76c80(param_1,*param_2);
  }
  return uVar2;
}


/* address=142c5a2f0 name=FUN_142c5a2f0 */

undefined8 FUN_142c5a2f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_142afa690(5,0,0x43,s_D__a_1_s_target_release_build_bo_143cf64d0,0x51);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142c76d60(param_1,param_2);
  }
  return uVar1;
}


/* address=142c5a340 name=FUN_142c5a340 */

undefined8 FUN_142c5a340(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lStack_20;
  longlong lStack_18;
  undefined8 uStack_10;
  
  lStack_20 = 0;
  if (param_2 == 0) {
    uStack_10 = 0;
  }
  else {
    uVar1 = FUN_142c11ab0(param_2,&lStack_20,param_1);
    if (lStack_20 == 0) {
      uStack_10 = 0;
    }
    else {
      lStack_18 = lStack_20;
      uStack_10 = FUN_142c0f7d0(0,&lStack_18,uVar1,param_1);
      FUN_142b0eaa0(lStack_20);
    }
  }
  return uStack_10;
}


/* address=142c5a3c0 name=FUN_142c5a3c0 */

int FUN_142c5a3c0(int *param_1)

{
  int iVar1;
  int iStack_14;
  int iStack_10;
  
  iVar1 = *param_1;
  if ((iVar1 == 1) || (iVar1 == 5)) {
    iStack_14 = *param_1;
  }
  else if (iVar1 == 6) {
    if (*(longlong *)(param_1 + 2) == 0) {
      iStack_14 = 0;
    }
    else {
      iStack_14 = *param_1;
    }
  }
  else if (*(longlong *)(param_1 + 2) == 0) {
    iStack_10 = 0;
    iStack_14 = iStack_10;
  }
  else {
    iStack_14 = *param_1;
  }
  return iStack_14;
}


/* address=142c5a450 name=FUN_142c5a450 */

void FUN_142c5a450(int *param_1,int param_2,longlong param_3)

{
  int iStack_14;
  
  FUN_142c5a7a0(param_1);
  *param_1 = param_2;
  if (param_2 == 1) {
    if (param_3 == 0) {
      iStack_14 = 0;
    }
    else {
      iStack_14 = 0xff;
    }
    param_1[2] = iStack_14;
  }
  else if (param_2 == 5) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  else if (param_2 == 6) {
    *(longlong *)(param_1 + 2) = param_3;
  }
  else {
    *(longlong *)(param_1 + 2) = param_3;
  }
  return;
}


/* address=142c5a500 name=FUN_142c5a500 */

undefined8 FUN_142c5a500(undefined8 param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_3 == 0) || (param_2 == 1)) {
    FUN_142c5a450(param_1,param_2,param_3);
  }
  else if (param_2 == 6) {
    lVar1 = FUN_142c15a70(param_3);
    if (lVar1 == 0) {
      return 0;
    }
    FUN_142c5a450(param_1,6,lVar1);
  }
  else {
    lVar1 = FUN_142c13590(param_3);
    if (lVar1 == 0) {
      return 0;
    }
    FUN_142c5a450(param_1,param_2,lVar1);
  }
  return 1;
}


/* address=142c5a5c0 name=FUN_142c5a5c0 */

int FUN_142c5a5c0(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (*param_1 != *param_2)) {
    iVar1 = -1;
  }
  else {
    switch(*param_1) {
    case 1:
      iVar1 = param_1[2] - param_2[2];
      break;
    case 5:
      iVar1 = 0;
      break;
    case 6:
      iVar1 = FUN_142c15c50(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2),param_3,
                            param_4,0xffffffff);
      break;
    default:
      iVar1 = FUN_142c13670(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    }
  }
  return iVar1;
}


/* address=142c5a730 name=FUN_142c5a730 */

undefined8 FUN_142c5a730(int *param_1)

{
  int iVar1;
  undefined8 uStack_10;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    if (param_1[2] == 0) {
      uStack_10 = 0;
    }
    else {
      uStack_10 = 0xff;
    }
  }
  else if (iVar1 == 5) {
    uStack_10 = 0;
  }
  else if (iVar1 == 6) {
    uStack_10 = *(undefined8 *)(param_1 + 2);
  }
  else {
    uStack_10 = *(undefined8 *)(param_1 + 2);
  }
  return uStack_10;
}


/* address=142c5a7a0 name=FUN_142c5a7a0 */

void FUN_142c5a7a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    param_1[2] = -1;
  }
  else if (iVar1 == 5) {
    *(undefined8 *)(param_1 + 2) = 0;
  }
  else if (iVar1 == 6) {
    FUN_142b6d6c0(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
  }
  else {
    FUN_142c134e0(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
  }
  return;
}


/* address=142c5a830 name=FUN_142c5a830 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142c5a830(ulonglong *param_1,ulonglong param_2,longlong *param_3,longlong param_4,
             ulonglong *param_5,ulonglong param_6,longlong *param_7)

{
  undefined (*pauVar1) [16];
  ulonglong *puVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined (*pauVar20) [16];
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  bool bVar27;
  undefined auVar28 [16];
  uint uVar29;
  uint uVar31;
  uint uVar33;
  uint uVar35;
  uint uVar30;
  uint uVar32;
  uint uVar34;
  uint uVar36;
  
  if (((param_6 == 0) || (param_2 != param_6)) || (param_4 != param_6 * 2)) {
    return 0;
  }
  uVar21 = 0;
  lVar23 = *param_7;
  if (param_6 != 0) {
    plVar22 = param_3;
    uVar25 = param_6;
    do {
      lVar18 = FUN_142bbac40(plVar22,param_5,lVar23 * *plVar22,param_6);
      uVar5 = plVar22[param_6];
      uVar19 = uVar5 + lVar18 + uVar21;
      plVar22[param_6] = uVar19;
      if (uVar19 != uVar5) {
        uVar21 = 1;
      }
      plVar22 = plVar22 + 1;
      uVar21 = uVar21 & uVar19 <= uVar5;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  puVar26 = (ulonglong *)(param_3 + param_6);
  bVar27 = *puVar26 < *param_5;
  *param_1 = *puVar26 - *param_5;
  if (param_6 < 2) {
    uVar21 = uVar21 - bVar27;
    auVar28._8_8_ = uVar21;
    auVar28._0_8_ = uVar21;
    if (param_6 == 0) {
      return 1;
    }
  }
  else {
    lVar23 = param_6 - 1;
    puVar24 = puVar26;
    do {
      puVar24 = puVar24 + 1;
      puVar2 = (ulonglong *)((longlong)puVar24 + ((longlong)param_5 - (longlong)puVar26));
      uVar25 = (ulonglong)bVar27;
      uVar5 = *puVar24 - *puVar2;
      bVar27 = *puVar24 < *puVar2 || uVar5 < uVar25;
      *(ulonglong *)(((longlong)param_1 - (longlong)puVar26) + (longlong)puVar24) = uVar5 - uVar25;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    uVar21 = uVar21 - bVar27;
    auVar28._8_8_ = uVar21;
    auVar28._0_8_ = uVar21;
  }
  uVar25 = 0;
  if (7 < param_6) {
    uVar25 = 0;
    if ((param_1 + (param_6 - 1) < puVar26) || (puVar26 + (param_6 - 1) < param_1)) {
      uVar30 = auVar28._0_4_;
      uVar29 = ~uVar30 & _DAT_143042990;
      uVar32 = auVar28._4_4_;
      uVar31 = ~uVar32 & _UNK_143042994;
      uVar34 = auVar28._8_4_;
      uVar36 = auVar28._12_4_;
      uVar33 = ~uVar34 & _UNK_143042998;
      uVar35 = ~uVar36 & _UNK_14304299c;
      pauVar20 = (undefined (*) [16])(puVar26 + 2);
      do {
        uVar6 = *(uint *)pauVar20[-1];
        uVar7 = *(uint *)((longlong)pauVar20[-1] + 4);
        uVar8 = *(uint *)((longlong)pauVar20[-1] + 8);
        uVar9 = *(uint *)((longlong)pauVar20[-1] + 0xc);
        uVar25 = uVar25 + 8;
        puVar3 = (uint *)((longlong)param_1 + (-0x10 - (longlong)puVar26) + (longlong)pauVar20);
        uVar10 = *puVar3;
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar13 = puVar3[3];
        pauVar20[-1] = ZEXT816(0);
        pauVar1 = pauVar20 + 4;
        puVar3 = (uint *)((longlong)param_1 + (-0x50 - (longlong)puVar26) + (longlong)pauVar1);
        *puVar3 = uVar10 & uVar29 | uVar30 & uVar6;
        puVar3[1] = uVar11 & uVar31 | uVar32 & uVar7;
        puVar3[2] = uVar12 & uVar33 | uVar34 & uVar8;
        puVar3[3] = uVar13 & uVar35 | uVar36 & uVar9;
        puVar3 = (uint *)((longlong)param_1 + (-0x40 - (longlong)puVar26) + (longlong)pauVar1);
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        uVar9 = *(uint *)((longlong)*pauVar20 + 4);
        uVar10 = *(uint *)((longlong)*pauVar20 + 8);
        uVar11 = *(uint *)((longlong)*pauVar20 + 0xc);
        puVar4 = (uint *)((longlong)param_1 + (-0x40 - (longlong)puVar26) + (longlong)pauVar1);
        *puVar4 = *(uint *)*pauVar20 & uVar30 | uVar29 & *puVar3;
        puVar4[1] = uVar9 & uVar32 | uVar31 & uVar6;
        puVar4[2] = uVar10 & uVar34 | uVar33 & uVar7;
        puVar4[3] = uVar11 & uVar36 | uVar35 & uVar8;
        puVar3 = (uint *)((longlong)param_1 + (-0x30 - (longlong)puVar26) + (longlong)pauVar1);
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        *pauVar20 = ZEXT816(0);
        uVar10 = *(uint *)pauVar20[1];
        uVar11 = *(uint *)((longlong)pauVar20[1] + 4);
        uVar12 = *(uint *)((longlong)pauVar20[1] + 8);
        uVar13 = *(uint *)((longlong)pauVar20[1] + 0xc);
        pauVar20[1] = ZEXT816(0);
        uVar14 = *(uint *)pauVar20[2];
        uVar15 = *(uint *)((longlong)pauVar20[2] + 4);
        uVar16 = *(uint *)((longlong)pauVar20[2] + 8);
        uVar17 = *(uint *)((longlong)pauVar20[2] + 0xc);
        puVar3 = (uint *)((longlong)param_1 + (-0x30 - (longlong)puVar26) + (longlong)pauVar1);
        *puVar3 = uVar6 & uVar29 | uVar30 & uVar10;
        puVar3[1] = uVar7 & uVar31 | uVar32 & uVar11;
        puVar3[2] = uVar8 & uVar33 | uVar34 & uVar12;
        puVar3[3] = uVar9 & uVar35 | uVar36 & uVar13;
        puVar3 = (uint *)((longlong)param_1 + (-0x20 - (longlong)puVar26) + (longlong)pauVar1);
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        pauVar20[2] = ZEXT816(0);
        puVar3 = (uint *)((longlong)param_1 + (-0x20 - (longlong)puVar26) + (longlong)pauVar1);
        *puVar3 = uVar6 & uVar29 | uVar30 & uVar14;
        puVar3[1] = uVar7 & uVar31 | uVar32 & uVar15;
        puVar3[2] = uVar8 & uVar33 | uVar34 & uVar16;
        puVar3[3] = uVar9 & uVar35 | uVar36 & uVar17;
        pauVar20 = pauVar1;
      } while (uVar25 < (param_6 & 0xfffffffffffffff8));
      if (param_6 <= uVar25) {
        return 1;
      }
    }
  }
  lVar23 = param_6 - uVar25;
  puVar24 = puVar26 + uVar25;
  do {
    *(ulonglong *)(((longlong)param_1 - (longlong)puVar26) + -8 + (longlong)(puVar24 + 1)) =
         ~uVar21 & *(ulonglong *)(((longlong)param_1 - (longlong)puVar26) + (longlong)puVar24) |
         uVar21 & *puVar24;
    *puVar24 = 0;
    lVar23 = lVar23 + -1;
    puVar24 = puVar24 + 1;
  } while (lVar23 != 0);
  return 1;
}


/* address=142c5aaf0 name=FUN_142c5aaf0 */

undefined8 FUN_142c5aaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142c08be0(param_2,0);
  if (lVar1 == 0) {
    FUN_142afa690(0xc,0,7,s_D__a_1_s_target_release_build_bo_143cf6620,0x53);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c5ab80(param_1,lVar1,param_3);
    FUN_142b6bd40(lVar1);
  }
  return uVar2;
}


/* address=142c5ab80 name=FUN_142c5ab80 */

undefined8 FUN_142c5ab80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStack_28;
  undefined4 auStack_20 [2];
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  iVar1 = FUN_142b6ca60(param_2,&uStack_28,auStack_20,0x7fffffff);
  if (iVar1 == 0) {
    uStack_10 = 0;
  }
  else {
    uStack_18 = uStack_28;
    uStack_10 = FUN_142c0f7d0(param_3,&uStack_18,auStack_20[0],param_1);
    FUN_142b0eaa0(uStack_28);
  }
  return uStack_10;
}


/* address=142c5ac00 name=FUN_142c5ac00 */

undefined4 FUN_142c5ac00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142c08be0(param_2,0);
  if (lVar2 == 0) {
    FUN_142afa690(0xc,0,7,s_D__a_1_s_target_release_build_bo_143cf6690,0x43);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142c5ac90(param_1,lVar2,param_3);
    FUN_142b6bd40(lVar2);
  }
  return uVar1;
}


/* address=142c5ac90 name=FUN_142c5ac90 */

undefined4 FUN_142c5ac90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong alStack_10 [2];
  
  alStack_10[0] = 0;
  iVar1 = FUN_142c11ab0(param_3,alStack_10,param_1);
  if (alStack_10[0] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142b6c0f0(param_2,alStack_10[0],(longlong)iVar1);
    FUN_142b0eaa0(alStack_10[0]);
  }
  return uVar2;
}


/* address=142c5ad00 name=FUN_142c5ad00 */

longlong FUN_142c5ad00(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *apwStack_20 [4];
  
  lVar3 = FUN_142c48c00();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = wcstoul(param_1,apwStack_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_142c5bb50(apwStack_20,lVar3), iVar2 == 0)) ||
        (iVar2 = FUN_142c5bb50(apwStack_20,lVar3 + 8), iVar2 == 0)) ||
       (lVar4 = FUN_142b782f0(apwStack_20), lVar4 != 0)) {
      FUN_142afa690(10,0,0x69,s_D__a_1_s_target_release_build_bo_143cf6b00,0xa0);
      FUN_142c48c50(lVar3);
      lVar3 = 0;
    }
  }
  return lVar3;
}


/* address=142c5adc0 name=FUN_142c5adc0 */

undefined8 FUN_142c5adc0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_142c5bbc0(auStack_38,*param_2), iVar1 != 0)) &&
      (iVar1 = FUN_142c5bbc0(auStack_38,param_2[1]), iVar1 != 0)) &&
     (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_142afa690(10,0,0x6a,s_D__a_1_s_target_release_build_bo_143cf6b70,0xad);
  return 0;
}


/* address=142c5ae60 name=FUN_142c5ae60 */

longlong FUN_142c5ae60(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *apwStack_20 [4];
  
  lVar3 = FUN_142c47a60();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,apwStack_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_142c5bb50(apwStack_20,lVar3 + 0x20), iVar2 == 0)) ||
        (iVar2 = FUN_142c5bb50(apwStack_20,lVar3 + 8), iVar2 == 0)) ||
       (((iVar2 = FUN_142c5bb50(apwStack_20,lVar3 + 0x10), iVar2 == 0 ||
         (iVar2 = FUN_142c5bb50(apwStack_20,lVar3 + 0x18), iVar2 == 0)) ||
        (lVar4 = FUN_142b782f0(apwStack_20), lVar4 != 0)))) {
      FUN_142afa690(10,0,0x69,s_D__a_1_s_target_release_build_bo_143cf6be0,0xbf);
    }
    else {
      iVar2 = FUN_142c5b870(lVar3);
      if (iVar2 != 0) {
        return lVar3;
      }
    }
    FUN_142c47ad0(lVar3);
  }
  return 0;
}


/* address=142c5af70 name=FUN_142c5af70 */

undefined8 FUN_142c5af70(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_38,0x20000010);
  if ((((iVar1 != 0) &&
       (iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0)) &&
      (iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
     (((iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0 &&
       (iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0)) &&
      (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)))) {
    return 1;
  }
  FUN_142afa690(10,0,0x6a,s_D__a_1_s_target_release_build_bo_143cf6c50,0xd4);
  return 0;
}


/* address=142c5b040 name=FUN_142c5b040 */

longlong FUN_142c5b040(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lStack_20;
  wchar_t *apwStack_18 [3];
  
  lVar3 = FUN_142c47a60();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,apwStack_18,0x20000010);
    if ((uVar1 == 0) || (iVar2 = FUN_142b78ce0(apwStack_18,&lStack_20), iVar2 == 0)) {
      FUN_142afa690(10,0,0x69,s_D__a_1_s_target_release_build_bo_143cf6da0,0x109);
    }
    else if (lStack_20 == 0) {
      iVar2 = FUN_142c5bb50(apwStack_18,lVar3 + 8);
      if ((((iVar2 == 0) || (iVar2 = FUN_142c5bb50(apwStack_18,lVar3 + 0x10), iVar2 == 0)) ||
          (iVar2 = FUN_142c5bb50(apwStack_18,lVar3 + 0x18), iVar2 == 0)) ||
         (((iVar2 = FUN_142c5bb50(apwStack_18,lVar3 + 0x20), iVar2 == 0 ||
           (iVar2 = FUN_142c5bb50(apwStack_18,lVar3 + 0x28), iVar2 == 0)) ||
          (lVar4 = FUN_142b782f0(apwStack_18), lVar4 != 0)))) {
        FUN_142afa690(10,0,0x69,s_D__a_1_s_target_release_build_bo_143cf6e80,0x118);
      }
      else {
        iVar2 = FUN_142c5b870(lVar3);
        if (iVar2 != 0) {
          return lVar3;
        }
      }
    }
    else {
      FUN_142afa690(10,0,0x68,s_D__a_1_s_target_release_build_bo_143cf6e10,0x10e);
    }
    FUN_142c47ad0(lVar3);
  }
  return 0;
}


/* address=142c5b1d0 name=FUN_142c5b1d0 */

undefined8 FUN_142c5b1d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_38,0x20000010);
  if (((((iVar1 != 0) && (iVar1 = FUN_142b7b130(auStack_38,0), iVar1 != 0)) &&
       (iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
      ((iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0 &&
       (iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0)))) &&
     ((iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0 &&
      ((iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 0x28)), iVar1 != 0 &&
       (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)))))) {
    return 1;
  }
  FUN_142afa690(10,0,0x6a,s_D__a_1_s_target_release_build_bo_143cf6ef0,0x130);
  return 0;
}


/* address=142c5b2d0 name=FUN_142c5b2d0 */

longlong FUN_142c5b2d0(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *apwStack_20 [4];
  
  lVar3 = FUN_142c47a60();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,apwStack_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_142c5bb50(apwStack_20,lVar3 + 8), iVar2 == 0)) ||
        (iVar2 = FUN_142c5bb50(apwStack_20,lVar3 + 0x10), iVar2 == 0)) ||
       ((iVar2 = FUN_142c5bb50(apwStack_20,lVar3 + 0x18), iVar2 == 0 ||
        (lVar4 = FUN_142b782f0(apwStack_20), lVar4 != 0)))) {
      FUN_142afa690(10,0,0x69,s_D__a_1_s_target_release_build_bo_143cf6cc0,0xe5);
    }
    else {
      iVar2 = FUN_142c5b870(lVar3);
      if (iVar2 != 0) {
        return lVar3;
      }
    }
    FUN_142c47ad0(lVar3);
  }
  return 0;
}


/* address=142c5b3c0 name=FUN_142c5b3c0 */

undefined8 FUN_142c5b3c0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)
       ) && (iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) &&
     ((iVar1 = FUN_142c5bbc0(auStack_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0 &&
      (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)))) {
    return 1;
  }
  FUN_142afa690(10,0,0x6a,s_D__a_1_s_target_release_build_bo_143cf6d30,0xf9);
  return 0;
}


/* address=142c5b470 name=FUN_142c5b470 */

longlong FUN_142c5b470(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined auStack_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_142b78260(auStack_20,*param_2,(longlong)param_3);
    lVar1 = FUN_142c5ad00(auStack_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_142c48c50(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_142b782d0(auStack_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=142c5b510 name=FUN_142c5b510 */

undefined8 FUN_142c5b510(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7a520(auStack_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_142c5adc0(auStack_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_142c1a0e0(auStack_38,param_2);
    return uVar2;
  }
  FUN_142b7a5e0(auStack_38);
  return 0xffffffff;
}


/* address=142c5b610 name=FUN_142c5b610 */

undefined8 FUN_142c5b610(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7a520(auStack_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_142c5af70(auStack_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_142c1a0e0(auStack_38,param_2);
    return uVar2;
  }
  FUN_142b7a5e0(auStack_38);
  return 0xffffffff;
}


/* address=142c5b670 name=FUN_142c5b670 */

longlong FUN_142c5b670(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined auStack_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_142b78260(auStack_20,*param_2,(longlong)param_3);
    lVar1 = FUN_142c5b040(auStack_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_142c47ad0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_142b782d0(auStack_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=142c5b710 name=FUN_142c5b710 */

undefined8 FUN_142c5b710(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7a520(auStack_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_142c5b1d0(auStack_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_142c1a0e0(auStack_38,param_2);
    return uVar2;
  }
  FUN_142b7a5e0(auStack_38);
  return 0xffffffff;
}


/* address=142c5b770 name=FUN_142c5b770 */

longlong FUN_142c5b770(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined auStack_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_142b78260(auStack_20,*param_2,(longlong)param_3);
    lVar1 = FUN_142c5b2d0(auStack_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_142c47ad0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_142b782d0(auStack_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=142c5b810 name=FUN_142c5b810 */

undefined8 FUN_142c5b810(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7a520(auStack_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_142c5b3c0(auStack_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_142c1a0e0(auStack_38,param_2);
    return uVar2;
  }
  FUN_142b7a5e0(auStack_38);
  return 0xffffffff;
}


/* address=142c5b870 name=FUN_142c5b870 */

undefined8 FUN_142c5b870(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(longlong *)(param_1 + 0x18) == 0)) {
    FUN_142afa690(10,0,0x65,s_D__a_1_s_target_release_build_bo_143cf6700,0x4b);
    return 0;
  }
  iVar1 = FUN_142b1d620(*(undefined8 *)(param_1 + 8));
  if ((((((iVar1 != 0) || (iVar1 = FUN_142b1d620(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) ||
        ((iVar1 = FUN_142b1f5d0(*(undefined8 *)(param_1 + 8)), iVar1 != 0 ||
         ((iVar1 = FUN_142b1f5d0(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0 ||
          (iVar1 = FUN_142b1f6a0(*(undefined8 *)(param_1 + 8)), iVar1 == 0)))))) ||
       (iVar1 = FUN_142b1f6a0(*(undefined8 *)(param_1 + 0x10)), iVar1 == 0)) ||
      (((iVar1 = FUN_142b1f210(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8)),
        -1 < iVar1 || (iVar1 = FUN_142b1d620(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) ||
       (iVar1 = FUN_142b1f5d0(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)))) ||
     (iVar1 = FUN_142b1f210(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8)),
     -1 < iVar1)) {
    FUN_142afa690(10,0,0x6b,s_D__a_1_s_target_release_build_bo_143cf6770,0x5c);
    return 0;
  }
  iVar1 = FUN_142b1d430(*(undefined8 *)(param_1 + 0x10));
  if (((iVar1 != 0xa0) && (iVar1 != 0xe0)) && (iVar1 != 0x100)) {
    FUN_142afa690(10,0,100,s_D__a_1_s_target_release_build_bo_143cf67e0,99);
    return 0;
  }
  uVar2 = FUN_142b1d430(*(undefined8 *)(param_1 + 8));
  if (10000 < uVar2) {
    FUN_142afa690(10,0,0x66,s_D__a_1_s_target_release_build_bo_143cf6850,0x6a);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (((iVar1 = FUN_142b1d620(*(undefined8 *)(param_1 + 0x20)), iVar1 != 0 ||
       (iVar1 = FUN_142b1f5d0(*(undefined8 *)(param_1 + 0x20)), iVar1 != 0)) ||
      (iVar1 = FUN_142b1f210(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8)),
      -1 < iVar1)))) {
    FUN_142afa690(10,0,0x6b,s_D__a_1_s_target_release_build_bo_143cf68c0,0x72);
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (((iVar1 = FUN_142b1d620(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0 ||
       (iVar1 = FUN_142b1f5d0(*(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) ||
      (iVar1 = FUN_142b1f210(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10)),
      -1 < iVar1)))) {
    FUN_142afa690(10,0,0x6b,s_D__a_1_s_target_release_build_bo_143cf6930,0x7c);
    return 0;
  }
  return 1;
}


/* address=142c5bb50 name=FUN_142c5bb50 */

undefined8 FUN_142c5bb50(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    FID_conflict__assert((wchar_t *)s___143cf6a68,(wchar_t *)s_D_143cf69a0,0x85);
  }
  lVar1 = FUN_142b1d190();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c76c80(param_1,*param_2);
  }
  return uVar2;
}


/* address=142c5bbc0 name=FUN_142c5bbc0 */

undefined8 FUN_142c5bbc0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_142afa690(10,0,0x43,s_D__a_1_s_target_release_build_bo_143cf6a90,0x90);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142c76d60(param_1,param_2);
  }
  return uVar1;
}


/* address=142c5bc10 name=FUN_142c5bc10 */

undefined8 FUN_142c5bc10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_142b0fea0(param_1);
  if (iVar1 == 6) {
    uVar2 = FUN_142b0ff70(param_1);
    uVar2 = FUN_142c429a0(uVar2,param_2);
  }
  else if (iVar1 == 0x74) {
    uVar2 = FUN_142b10070(param_1);
    uVar2 = FUN_142c5b710(uVar2,param_2);
  }
  else if (iVar1 == 0x198) {
    uVar2 = FUN_142b10170(param_1);
    uVar2 = FUN_142c25e30(uVar2,param_2);
  }
  else {
    FUN_142afa690(0xc,0,0xbb,s_D__a_1_s_target_release_build_bo_143cf6f60,0x4c);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* address=142c5bd80 name=FUN_142c5bd80 */

void FUN_142c5bd80(undefined8 param_1)

{
  FUN_142c0f130(param_1,&DAT_1432b6fe0);
  return;
}


/* address=142c5bdb0 name=FUN_142c5bdb0 */

void FUN_142c5bdb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_142c0f7d0(param_1,param_2,param_3,&DAT_1432b6fe0);
  return;
}


/* address=142c5bdf0 name=FUN_142c5bdf0 */

void FUN_142c5bdf0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c11ab0(param_1,param_2,&DAT_1432b6fe0);
  return;
}


/* address=142c5bed0 name=FUN_142c5bed0 */

undefined4
FUN_142c5bed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong alStack_10 [2];
  
  alStack_10[0] = 0;
  iVar1 = FUN_142c11ab0(param_3,alStack_10,param_1);
  if (alStack_10[0] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142b123b0(alStack_10[0],(longlong)iVar1,param_4,param_5,param_2,0);
    FUN_142b0eaa0(alStack_10[0]);
  }
  return uVar2;
}


/* address=142c5bf60 name=FUN_142c5bf60 */

undefined4
FUN_142c5bf60(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar3;
  undefined4 uStack_44;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined auStack_28 [40];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if (param_5 == 0) {
    FUN_142afa690(0xb,0,0x43,s_D__a_1_s_target_release_build_bo_143cf6ff0,0x4b);
    uStack_44 = 0;
  }
  else {
    if (*(int *)(param_3 + 4) == 3) {
      iVar1 = FUN_142c14300(param_3,&lStack_38);
      if (iVar1 == 0) {
        FUN_142afa690(0xb,0,0x6d,s_D__a_1_s_target_release_build_bo_143cf7060,CONCAT44(uVar3,0x52));
        return 0;
      }
    }
    else {
      iVar1 = FUN_142c13650(param_3);
      lStack_38 = (longlong)iVar1;
    }
    lStack_40 = 0;
    uStack_44 = 0;
    FUN_142b11d10(auStack_28);
    iVar1 = FUN_142c8c7f0(auStack_28,param_2,param_5);
    if ((iVar1 != 0) && (iVar1 = FUN_142c11ab0(param_4,&lStack_40,param_1), lStack_40 != 0)) {
      lStack_30 = (longlong)iVar1;
      uVar2 = FUN_142c13610(param_3);
      iVar1 = FUN_142b481c0(auStack_28,uVar2,lStack_38,lStack_40,lStack_30);
      if (iVar1 == 0) {
        FUN_142afa690(0xb,0,6,s_D__a_1_s_target_release_build_bo_143cf70d0,0x6a);
      }
      else {
        uStack_44 = 1;
      }
    }
    FUN_142b0eaa0(lStack_40);
    FUN_142b11d80(auStack_28);
  }
  return uStack_44;
}


/* address=142c5c100 name=FUN_142c5c100 */

undefined8
FUN_142c5c100(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_28 [40];
  
  if (*(int *)(param_4 + 4) == 3) {
    FUN_142b11d10(auStack_28);
    iVar1 = FUN_142b47c60(auStack_28,0,param_7,0,param_6);
    if (iVar1 == 0) {
      FUN_142b11d80(auStack_28);
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_142c5c1d0(param_1,param_2,param_3,param_4,param_5,auStack_28);
    }
  }
  else {
    FUN_142afa690(0xc,0,0xbf,s_D__a_1_s_target_release_build_bo_143cf7140,0x49);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142c5c1d0 name=FUN_142c5c1d0 */

undefined4
FUN_142c5c1d0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,longlong param_6)

{
  int iVar1;
  int iVar2;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar3;
  undefined4 uStack_34;
  longlong lStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uStack_34 = 0;
  uStack_20 = 0;
  lStack_30 = 0;
  if (*(int *)(param_4 + 4) == 3) {
    if ((((param_2 == 0) || (iVar1 = FUN_142c8c620(param_6,param_2), iVar1 != 0)) &&
        ((param_3 == 0 || (iVar1 = FUN_142c8c620(param_6,param_3), iVar1 != 0)))) &&
       (iVar1 = FUN_142c11ab0(param_5,&uStack_20,param_1), -1 < iVar1)) {
      uStack_18 = FUN_142c4a120(*(undefined8 *)(param_6 + 0x10));
      iVar2 = FUN_142b0fdf0(uStack_18);
      uStack_28 = (ulonglong)iVar2;
      if (uStack_28 < 0x80000000) {
        lStack_30 = FUN_142b0e970(uStack_28);
        if (lStack_30 != 0) {
          iVar1 = FUN_142b47eb0(param_6,lStack_30,&uStack_28,uStack_20,(longlong)iVar1);
          if (iVar1 == 0) {
            FUN_142afa690(0xb,0,6,s_D__a_1_s_target_release_build_bo_143cf7290,0x79);
          }
          else {
            FUN_142c13910(param_4,lStack_30,uStack_28 & 0xffffffff);
            lStack_30 = 0;
            *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) & 0xfffffff0;
            *(uint *)(param_4 + 0x10) = *(uint *)(param_4 + 0x10) | 8;
            uStack_34 = (undefined4)uStack_28;
          }
        }
      }
      else {
        FUN_142afa690(0xb,0,0x45,s_D__a_1_s_target_release_build_bo_143cf7220,CONCAT44(uVar3,0x6f));
      }
    }
  }
  else {
    FUN_142afa690(0xc,0,0xbf,s_D__a_1_s_target_release_build_bo_143cf71b0,0x5b);
  }
  FUN_142b11d80(param_6);
  FUN_142b0eaa0(uStack_20);
  FUN_142b0eaa0(lStack_30);
  return uStack_34;
}


/* address=142c5c580 name=FUN_142c5c580 */

void FUN_142c5c580(undefined8 param_1)

{
  FUN_142c5c900(0,param_1,1);
  return;
}


/* address=142c5c5e0 name=FUN_142c5c5e0 */

void FUN_142c5c5e0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  longlong lStackX_8;
  undefined auStack_a8 [32];
  int iStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  char acStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_a8;
  iVar1 = FUN_142c5cc70(param_2,&uStack_50);
  if (((iVar1 != 0) &&
      (((param_3 == 0 && (param_4 == 0)) ||
       (iVar1 = FUN_142c5ce40(&uStack_50,param_3,param_4), iVar1 != 0)))) &&
     ((0x31 < iStack_3c && (iStack_3c < 0x96)))) {
    iStack_88 = iStack_40 + 1;
    uStack_68 = uStack_50;
    uStack_70 = uStack_4c;
    uStack_78 = uStack_48;
    uStack_80 = uStack_44;
    iStack_54 = iStack_88;
    _snprintf(acStack_28,0xe,s__02d_02d_02d_02d_02d_02dZ_143cf7410,
              (longlong)iStack_3c % 100 & 0xffffffff);
    iStack_58 = 0;
    lStackX_8 = param_1;
    if (param_1 == 0) {
      iStack_58 = 1;
      lStackX_8 = FUN_142c0e3d0();
      if (lStackX_8 == 0) goto LAB_142c5c766;
    }
    sVar2 = strlen(acStack_28);
    iVar1 = FUN_142c137a0(lStackX_8,acStack_28,sVar2);
    if (iVar1 == 0) {
      if (iStack_58 != 0) {
        FUN_142c0e3f0(lStackX_8);
      }
    }
    else {
      *(undefined4 *)(lStackX_8 + 4) = 0x17;
    }
  }
LAB_142c5c766:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=142c5c790 name=FUN_142c5c790 */

undefined8 FUN_142c5c790(longlong param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined auStack_20 [32];
  
  sVar2 = strlen(param_2);
  FUN_142b78260(auStack_20,param_2,sVar2);
  iVar1 = FUN_142b79770(auStack_20,0,1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_1 != 0) {
      iVar1 = FUN_142c137a0(param_1,param_2,sVar2);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 0x17;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=142c5c900 name=FUN_142c5c900 */

undefined8 FUN_142c5c900(undefined8 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_18 [24];
  
  if (param_2[1] == 0x17) {
    FUN_142b78260(auStack_18,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
    iVar1 = FUN_142b79770(auStack_18,param_1,param_3);
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


/* address=142c5c970 name=FUN_142c5c970 */

void FUN_142c5c970(undefined8 param_1)

{
  FUN_142c5cc10(0,param_1);
  return;
}


/* address=142c5c9c0 name=FUN_142c5c9c0 */

void FUN_142c5c9c0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  longlong lStackX_8;
  undefined auStack_a8 [32];
  int iStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  int iStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  char acStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_a8;
  iVar1 = FUN_142c5cc70(param_2,&uStack_50);
  if ((iVar1 != 0) &&
     (((param_3 == 0 && (param_4 == 0)) ||
      (iVar1 = FUN_142c5ce40(&uStack_50,param_3,param_4), iVar1 != 0)))) {
    if ((iStack_3c < -0x76c) || (0x1fa3 < iStack_3c)) {
      iStack_88 = 0x79;
      FUN_142afa690(0xc,0,0x8a,s_D__a_1_s_target_release_build_bo_143cf7430);
    }
    else {
      iStack_88 = iStack_40 + 1;
      uStack_68 = uStack_50;
      uStack_70 = uStack_4c;
      uStack_78 = uStack_48;
      uStack_80 = uStack_44;
      _snprintf(acStack_28,0x10,s__04d_02d_02d_02d_02d_02dZ_143cf7498,(ulonglong)(iStack_3c + 0x76c)
               );
      iStack_58 = 0;
      lStackX_8 = param_1;
      if (param_1 == 0) {
        iStack_58 = 1;
        lStackX_8 = FUN_142c0e3d0();
        if (lStackX_8 == 0) goto LAB_142c5cb5e;
      }
      sVar2 = strlen(acStack_28);
      iVar1 = FUN_142c137a0(lStackX_8,acStack_28,sVar2);
      if (iVar1 == 0) {
        if (iStack_58 != 0) {
          FUN_142c0e3f0(lStackX_8);
        }
      }
      else {
        *(undefined4 *)(lStackX_8 + 4) = 0x18;
      }
    }
  }
LAB_142c5cb5e:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=142c5cb80 name=FUN_142c5cb80 */

undefined8 FUN_142c5cb80(longlong param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined auStack_20 [32];
  
  sVar2 = strlen(param_2);
  FUN_142b78260(auStack_20,param_2,sVar2);
  iVar1 = FUN_142b79730(auStack_20,0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_1 != 0) {
      iVar1 = FUN_142c137a0(param_1,param_2,sVar2);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 0x18;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=142c5cc10 name=FUN_142c5cc10 */

undefined8 FUN_142c5cc10(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_18 [24];
  
  if (param_2[1] == 0x18) {
    FUN_142b78260(auStack_18,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
    iVar1 = FUN_142b79730(auStack_18,param_1,0);
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


/* address=142c5cc70 name=FUN_142c5cc70 */

bool FUN_142c5cc70(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_142cbda60(param_2,0,0x24);
  iVar1 = FUN_142c5d4f0(param_1,param_2 + 0x14,param_2 + 0x10,param_2 + 0xc,param_2 + 8,param_2 + 4,
                        param_2);
  if (iVar1 != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -0x76c;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  }
  return iVar1 != 0;
}


/* address=142c5cd30 name=FUN_142c5cd30 */

void FUN_142c5cd30(undefined4 *param_1,undefined8 param_2)

{
  FUN_142c5d310(param_1[5] + 0x76c,param_1[4] + 1,param_1[3],param_1[2],param_1[1],*param_1,param_2)
  ;
  return;
}


/* address=142c5cdf0 name=FUN_142c5cdf0 */

/* WARNING: Removing unreachable block (ram,0x000142c5ce1b) */

bool FUN_142c5cdf0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 auStack_18 [3];
  
  iVar1 = FUN_142c5cd30(param_1,auStack_18);
  if (iVar1 != 0) {
    *param_2 = auStack_18[0];
  }
  return iVar1 != 0;
}


/* address=142c5ce40 name=FUN_142c5ce40 */

undefined8 FUN_142c5ce40(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lStack_18;
  undefined4 *puStack_10;
  
  iVar1 = FUN_142c5d310(param_1[5] + 0x76c,param_1[4] + 1,param_1[3],param_1[2],param_1[1],*param_1,
                        &lStack_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_10 = param_1 + 4;
    iVar1 = FUN_142c5d4f0(lStack_18 + (longlong)param_2 * 0x15180 + (longlong)param_3,param_1 + 5,
                          puStack_10,param_1 + 3,param_1 + 2,param_1 + 1,param_1);
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


/* address=142c5cf70 name=FUN_142c5cf70 */

undefined8
FUN_142c5cf70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_20;
  longlong lStack_18;
  longlong alStack_10 [2];
  
  iVar1 = FUN_142c5d310(param_4[5] + 0x76c,param_4[4] + 1,param_4[3],param_4[2],param_4[1],*param_4,
                        alStack_10);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_142c5d310(param_3[5] + 0x76c,param_3[4] + 1,param_3[3],param_3[2],param_3[1],
                          *param_3,&lStack_18);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = (alStack_10[0] - lStack_18) / 0x15180;
      if ((lVar2 < 0x80000000) && (-0x80000001 < lVar2)) {
        uStack_28 = (undefined4)((alStack_10[0] - lStack_18) % 0x15180);
        *param_2 = uStack_28;
        uStack_20 = (undefined4)lVar2;
        *param_1 = uStack_20;
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


/* address=142c5d0f0 name=FUN_142c5d0f0 */

undefined4 FUN_142c5d0f0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((((param_3 < 1) || (param_2 < 1)) || (param_1 < 0)) || (9999 < param_1)) {
    uStack_20 = 0;
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
        uStack_24 = 0;
        uStack_20 = uStack_24;
      }
      else {
        uStack_24 = 1;
        uStack_20 = uStack_24;
      }
      break;
    case 2:
      uVar1 = param_1 >> 0x1f & 3;
      if ((((param_1 + uVar1 & 3) == uVar1) && (param_1 % 100 != 0)) || (param_1 % 400 == 0)) {
        if ((param_3 < 1) || (0x1d < param_3)) {
          uStack_1c = 0;
          uStack_20 = uStack_1c;
        }
        else {
          uStack_1c = 1;
          uStack_20 = uStack_1c;
        }
      }
      else if ((param_3 < 1) || (0x1c < param_3)) {
        uStack_18 = 0;
        uStack_20 = uStack_18;
      }
      else {
        uStack_18 = 1;
        uStack_20 = uStack_18;
      }
      break;
    case 4:
    case 6:
    case 9:
    case 0xb:
      if ((param_3 < 1) || (0x1e < param_3)) {
        uStack_20 = 0;
      }
      else {
        uStack_20 = 1;
      }
      break;
    default:
      uStack_20 = 0;
    }
  }
  return uStack_20;
}


/* address=142c5d270 name=FUN_142c5d270 */

undefined8 FUN_142c5d270(int param_1,int param_2,int param_3)

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


/* address=142c5d2c0 name=FUN_142c5d2c0 */

undefined4 FUN_142c5d2c0(longlong param_1)

{
  undefined4 uStack_18;
  
  if ((param_1 < -0xe79747c00) || (0x3afff4417f < param_1)) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = 1;
  }
  return uStack_18;
}


/* address=142c5d310 name=FUN_142c5d310 */

undefined8
FUN_142c5d310(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  int iStackX_8;
  int iStack_48;
  int iStack_44;
  
  iVar1 = FUN_142c5d0f0(param_1,param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_142c5d270(param_4,param_5,param_6), iVar1 != 0)) {
    iStackX_8 = param_1;
    if (param_2 < 3) {
      iStackX_8 = param_1 + -1;
    }
    if ((iStackX_8 < -1) || (9999 < iStackX_8)) {
      FID_conflict__assert((wchar_t *)s___143cf7590,(wchar_t *)s_D_143cf74c0,0x5c);
    }
    if (iStackX_8 < 0) {
      iStack_48 = iStackX_8 + -399;
    }
    else {
      iStack_48 = iStackX_8;
    }
    lVar2 = (longlong)iStackX_8 + (longlong)(iStack_48 / 400) * -400;
    if (param_2 < 3) {
      iStack_44 = param_2 + 9;
    }
    else {
      iStack_44 = param_2 + -3;
    }
    *param_7 = ((longlong)(iStack_48 / 400) * 0x23ab1 + -0xafa6c +
               ((lVar2 * 0x16d + ((longlong)(lVar2 + (lVar2 >> 0x3f & 3U)) >> 2)) - lVar2 / 100) +
               (longlong)((iStack_44 * 0x99 + 2) / 5 + -1 + param_3)) * 0x15180 +
               (longlong)(param_4 * 0xe10) + (longlong)(param_5 * 0x3c) + (longlong)param_6;
    return 1;
  }
  return 0;
}


/* address=142c5d4f0 name=FUN_142c5d4f0 */

undefined8
FUN_142c5d4f0(longlong param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
             undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_50;
  int iStack_40;
  
  iVar1 = FUN_142c5d2c0(param_1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lStack_78 = param_1 / 0x15180;
    lStack_70 = param_1 % 0x15180;
    if (lStack_70 < 0) {
      lStack_78 = lStack_78 + -1;
      lStack_70 = lStack_70 + 0x15180;
    }
    lVar2 = lStack_78 + 0xafa6c;
    if ((lVar2 < -0x3d) || (0x37bb0c < lVar2)) {
      FID_conflict__assert((wchar_t *)s___143cf76a0,(wchar_t *)s_D_143cf75d0,0x7a);
    }
    lStack_50 = lVar2;
    if (lVar2 < 1) {
      lStack_50 = lStack_78 + 0x8bfbc;
    }
    lVar2 = lVar2 + (lStack_50 / 0x23ab1) * -0x23ab1;
    lVar3 = (((lVar2 - lVar2 / 0x5b4) + lVar2 / 0x8eac) - lVar2 / 0x23ab0) / 0x16d;
    *param_2 = (int)lVar3 + (int)(lStack_50 / 0x23ab1) * 400;
    lVar2 = lVar2 - ((lVar3 * 0x16d + ((longlong)(lVar3 + (lVar3 >> 0x3f & 3U)) >> 2)) - lVar3 / 100
                    );
    lVar3 = (lVar2 * 5 + 2) / 0x99;
    if (lVar3 < 10) {
      iStack_40 = (int)lVar3 + 3;
    }
    else {
      iStack_40 = (int)lVar3 + -9;
    }
    *param_3 = iStack_40;
    if (*param_3 < 3) {
      *param_2 = *param_2 + 1;
    }
    *param_4 = ((int)lVar2 - (int)((lVar3 * 0x99 + 2) / 5)) + 1;
    *param_5 = (int)(lStack_70 / 0xe10);
    *param_6 = (int)((lStack_70 % 0xe10) / 0x3c);
    *param_7 = (int)((lStack_70 % 0xe10) % 0x3c);
    uVar4 = 1;
  }
  return uVar4;
}


/* address=142c5da20 name=FUN_142c5da20 */

void FUN_142c5da20(void)

{
  return;
}


/* address=142c5da90 name=FUN_142c5da90 */

undefined8 FUN_142c5da90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c5dae0 name=FUN_142c5dae0 */

undefined8 FUN_142c5dae0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c5db20 name=FUN_142c5db20 */

undefined * FUN_142c5db20(DWORD param_1)

{
  FormatMessageA(0x12ff,(LPCVOID)0x0,param_1,0x400,&DAT_143d03c00,0x400,(va_list *)0x0);
  return &DAT_143d03c00;
}


/* address=142c5db70 name=FUN_142c5db70 */

void FUN_142c5db70(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  ulonglong uStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  FUN_142c5df90(&uStack_60,&uStack_5c,&uStack_68,&uStack_64,0);
  uStack_3c = uStack_60;
  if (((uStack_5c == 0x756e6547) && (uStack_64 == 0x49656e69)) && (uStack_68 == 0x6c65746e)) {
    iStack_48 = 1;
  }
  else {
    iStack_48 = 0;
  }
  iStack_28 = iStack_48;
  if (((uStack_5c == 0x68747541) && (uStack_64 == 0x69746e65)) && (uStack_68 == 0x444d4163)) {
    iStack_44 = 1;
  }
  else {
    iStack_44 = 0;
  }
  iStack_38 = iStack_44;
  puVar4 = &uStack_58;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined *)puVar4 = 0;
    puVar4 = (uint *)((longlong)puVar4 + 1);
  }
  if (6 < uStack_3c) {
    FUN_142c5df90(&uStack_60,&uStack_5c,&uStack_68,&uStack_64,7);
    uStack_58 = uStack_5c;
    uStack_54 = uStack_68;
  }
  FUN_142c5df90(&uStack_60,&uStack_5c,&uStack_68,&uStack_64,1);
  if (iStack_38 != 0) {
    uStack_40 = uStack_60 >> 8 & 0xf;
    uStack_34 = uStack_60 >> 4 & 0xf;
    uStack_50 = uStack_40;
    uStack_4c = uStack_34;
    if (uStack_40 == 0xf) {
      uStack_30 = uStack_60 >> 0x14 & 0xff;
      uStack_50 = uStack_30 + 0xf;
      uStack_2c = uStack_60 >> 0x10 & 0xf;
      uStack_4c = uStack_34 | uStack_2c << 4;
    }
    if ((uStack_50 < 0x17) || (((uStack_50 == 0x17 && (0x6f < uStack_4c)) && (uStack_4c < 0x80)))) {
      uStack_68 = uStack_68 & 0xbfffffff;
    }
  }
  if (iStack_28 == 0) {
    uStack_64 = uStack_64 & 0xbfefffff | 0x10000000;
  }
  else {
    uStack_64 = uStack_64 & 0xffefffff | 0x50000000;
    if (((uStack_60 & 0xfff0ff0) == 0x50670) || ((uStack_60 & 0xfff0ff0) == 0x80650)) {
      uStack_68 = uStack_68 & 0xfbffffff;
    }
  }
  uVar1 = uStack_68 & 0xfffff7ff;
  uStack_20 = 0;
  uVar2 = uStack_68 & 0x8000000;
  uStack_68 = uVar1;
  if (uVar2 != 0) {
    uStack_20 = FUN_142c5e040(0);
  }
  if ((uStack_20 & 6) != 6) {
    uStack_68 = uStack_68 & 0xefffe7ff;
    uStack_58 = uStack_58 & 0x3fdeffdf;
  }
  if ((uStack_20 & 0xe6) != 0xe6) {
    uStack_58 = uStack_58 & 0xfffeffff;
  }
  if ((uStack_68 & 0x4000000) == 0) {
    uStack_58 = uStack_58 & 0xfff7ffff;
  }
  DAT_143d03a80 = uStack_64;
  DAT_143d03a84 = uStack_68;
  DAT_143d03a88._0_4_ = uStack_58;
  DAT_143d03a88._4_4_ = uStack_54;
  lStack_18 = common_getenv<>(s_OPENSSL_ia32cap_143cf77d8);
  if (lStack_18 != 0) {
    FUN_142c5e060(&DAT_143d03a80,lStack_18);
    lStack_10 = FUN_142c93ff0(lStack_18,0x3a);
    if (lStack_10 != 0) {
      FUN_142c5e060(&DAT_143d03a88,lStack_10 + 1);
    }
  }
  return;
}


/* address=142c5df90 name=FUN_142c5df90 */

void FUN_142c5df90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  int param_5)

{
  undefined4 *puVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)&uStack_28;
  if (param_5 == 0) {
    puVar1 = (undefined4 *)cpuid_basic_info(0);
  }
  else if (param_5 == 1) {
    puVar1 = (undefined4 *)cpuid_Version_info(1);
  }
  else if (param_5 == 2) {
    puVar1 = (undefined4 *)cpuid_cache_tlb_info(2);
  }
  else if (param_5 == 3) {
    puVar1 = (undefined4 *)cpuid_serial_info(3);
  }
  else if (param_5 == 4) {
    puVar1 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (param_5 == 5) {
    puVar1 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (param_5 == 6) {
    puVar1 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (param_5 == 7) {
    puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (param_5 == 9) {
    puVar1 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (param_5 == 10) {
    puVar1 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (param_5 == 0xb) {
    puVar1 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
  }
  else if (param_5 == 0xd) {
    puVar1 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (param_5 == 0xf) {
    puVar1 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (param_5 == -0x7ffffffe) {
    puVar1 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
  }
  else if (param_5 == -0x7ffffffd) {
    puVar1 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
  }
  else if (param_5 == -0x7ffffffc) {
    puVar1 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar1 = (undefined4 *)cpuid(param_5);
  }
  uStack_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_1c = puVar1[2];
  uStack_20 = puVar1[3];
  *param_1 = uStack_28;
  *param_2 = uStack_24;
  *param_3 = uStack_20;
  *param_4 = uStack_1c;
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)&uStack_28);
  return;
}


/* address=142c5e040 name=FUN_142c5e040 */

ulonglong FUN_142c5e040(void)

{
  undefined8 in_RAX;
  undefined4 in_XCR0;
  uint in_register_00000604;
  
  return (ulonglong)in_register_00000604 << 0x20 |
         CONCAT44((int)((ulonglong)in_RAX >> 0x20),in_XCR0);
}


/* address=142c5e060 name=FUN_142c5e060 */

void FUN_142c5e060(uint *param_1,char *param_2)

{
  uint uVar1;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  
  uStack_28 = (uint)(*param_2 == '~');
  uVar1 = uStack_28;
  uStack_24 = (uint)(*param_2 == '|');
  uStack_10 = uStack_24;
  if ((uStack_28 == 0) && (uStack_24 == 0)) {
    iStack_20 = 0;
  }
  else {
    iStack_20 = 1;
  }
  iStack_1c = iStack_20;
  if ((param_2[iStack_20] == '0') && (param_2[iStack_20 + 1] == 'x')) {
    iStack_18 = 1;
  }
  else {
    iStack_18 = 0;
  }
  iStack_c = iStack_18;
  if (iStack_18 == 0) {
    iStack_14 = FUN_142c22290(param_2 + (int)uStack_28,&DAT_143cf77d0,&uStack_30);
  }
  else {
    iStack_14 = FUN_142c22290(param_2 + (longlong)(int)uStack_28 + 2,&DAT_143cf77c8,&uStack_30);
  }
  if (iStack_14 != 0) {
    if (uVar1 == 0) {
      if (uStack_10 == 0) {
        *param_1 = uStack_30;
        param_1[1] = uStack_2c;
      }
      else {
        *param_1 = *param_1 | uStack_30;
        param_1[1] = param_1[1] | uStack_2c;
      }
    }
    else {
      *param_1 = *param_1 & ~uStack_30;
      param_1[1] = param_1[1] & ~uStack_2c;
    }
  }
  return;
}


/* address=142c5e2a0 name=FUN_142c5e2a0 */

longlong FUN_142c5e2a0(longlong param_1)

{
  FUN_142994b40(param_1);
  FUN_142b0e870(param_1 + 8);
  return param_1;
}


/* address=142c5e2e0 name=FUN_142c5e2e0 */

void FUN_142c5e2e0(longlong param_1)

{
  FUN_142b0e8a0(param_1 + 8);
  FUN_142b87650(param_1);
  return;
}


/* address=142c5e320 name=FUN_142c5e320 */

bool FUN_142c5e320(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_142c0ca50();
  FUN_142af5b40(param_1,uVar2);
  cVar1 = FUN_142993030(param_1);
  if (cVar1 != '\0') {
    FUN_142c5eb60(param_1 + 8);
  }
  return cVar1 != '\0';
}


/* address=142c5e380 name=FUN_142c5e380 */

undefined FUN_142c5e380(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar2 = FUN_142afd8d0(param_2,param_3);
  lVar3 = FUN_142c5e770(param_1);
  if (lVar3 == lVar2) {
    return 1;
  }
  uVar4 = FUN_142992cb0(param_1 + 8);
  iVar1 = FUN_142b12150(uVar4,lVar2,0);
  if (iVar1 != 0) {
    puVar5 = (undefined8 *)FUN_142992c50(param_1);
    lVar2 = FUN_142992c50(param_1);
    uVar4 = FUN_142992cb0(param_1 + 8);
    iVar1 = FUN_142b12280(uVar4,*(undefined8 *)(lVar2 + 8),*puVar5);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=142c5e460 name=FUN_142c5e460 */

void FUN_142c5e460(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined auStack_e8 [32];
  undefined uStack_c8;
  undefined uStack_c7;
  undefined uStack_c6;
  undefined uStack_c5;
  undefined uStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_142993030(param_1);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)FUN_142992c50(param_1);
    *puVar3 = 0;
  }
  cVar1 = FUN_142c5e880(param_1,auStack_68,&uStack_c0);
  if (cVar1 != '\0') {
    uStack_c8 = 0xfe;
    uStack_c7 = 0;
    uStack_c6 = 0;
    uStack_c5 = uStack_c0;
    uStack_b8 = FUN_142c5e770(param_1);
    uVar4 = FUN_142992cb0(param_1 + 8);
    iVar2 = FUN_142b12150(uVar4,uStack_b8,0);
    if (iVar2 != 0) {
      puStack_b0 = auStack_88;
      puVar5 = (undefined *)FUN_142af3e40(puStack_b0,&uStack_c8);
      puVar7 = auStack_a8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_142c5e7a0(param_1,auStack_a8);
      if (cVar1 != '\0') {
        puVar5 = (undefined *)FUN_142992fc0(auStack_78,auStack_68,CONCAT71(uStack_bf,uStack_c0));
        puVar7 = auStack_98;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_142c5e7a0(param_1,auStack_98);
      }
    }
  }
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_e8);
  return;
}


/* address=142c5e5e0 name=FUN_142c5e5e0 */

ulonglong FUN_142c5e5e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  byte bStack_24;
  
  lVar4 = FUN_142c5e770(param_1);
  if (lVar4 != 0) {
    iVar2 = FUN_142b12460(lVar4);
    iVar3 = FUN_142b12460(param_3);
    if (iVar2 == iVar3) {
      uVar5 = FUN_142992cb0(param_1 + 8);
      iVar2 = FUN_142b11e90(param_2,uVar5);
      return (ulonglong)(iVar2 != 0);
    }
  }
  cVar1 = FUN_142993030(param_1);
  if (cVar1 == '\0') {
    uVar7 = FUN_142afa690(0x10,0,0x44,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_transcript.cc"
                          ,0xd8);
    return uVar7 & 0xffffffffffffff00;
  }
  iVar2 = FUN_142b12150(param_2,param_3,0);
  if (iVar2 != 0) {
    puVar6 = (undefined8 *)FUN_142992c50(param_1);
    lVar4 = FUN_142992c50(param_1);
    iVar2 = FUN_142b12280(param_2,*(undefined8 *)(lVar4 + 8),*puVar6);
    if (iVar2 != 0) {
      bStack_24 = 1;
      goto LAB_142c5e6d4;
    }
  }
  bStack_24 = 0;
LAB_142c5e6d4:
  return (ulonglong)bStack_24;
}


/* address=142c5e710 name=FUN_142c5e710 */

void FUN_142c5e710(undefined8 param_1)

{
  FUN_142af5b40(param_1,0);
  return;
}


/* address=142c5e740 name=FUN_142c5e740 */

void FUN_142c5e740(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142c5e770(param_1);
  FUN_142b124a0(uVar1);
  return;
}


/* address=142c5e770 name=FUN_142c5e770 */

void FUN_142c5e770(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142992cb0(param_1 + 8);
  FUN_142b124e0(uVar1);
  return;
}


/* address=142c5e7a0 name=FUN_142c5e7a0 */

undefined8 FUN_142c5e7a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar1 = FUN_142993030(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_142992f60(param_2);
    uVar4 = FUN_142992c50(param_2);
    uVar5 = FUN_142992c50(param_1);
    iVar2 = FUN_142c0ccb0(uVar5,uVar4,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar3 = FUN_142992cb0(param_1 + 8);
  lVar6 = FUN_142b124e0(uVar3);
  if (lVar6 != 0) {
    uVar3 = FUN_142992f60(param_2);
    uVar4 = FUN_142992c50(param_2);
    uVar5 = FUN_142992cb0(param_1 + 8);
    FUN_142b12280(uVar5,uVar4,uVar3);
  }
  return 1;
}


/* address=142c5e880 name=FUN_142c5e880 */

undefined FUN_142c5e880(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uStack_34;
  undefined8 uStack_30;
  undefined auStack_28 [40];
  
  FUN_142b0e870(auStack_28);
  uStack_30 = FUN_142992cb0(param_1 + 8);
  uVar2 = FUN_142992cb0(auStack_28);
  iVar1 = FUN_142b11e90(uVar2,uStack_30);
  if (iVar1 != 0) {
    uVar2 = FUN_142992cb0(auStack_28);
    iVar1 = FUN_142b122c0(uVar2,param_2,&uStack_34);
    if (iVar1 != 0) {
      *param_3 = (ulonglong)uStack_34;
      FUN_142b0e8a0(auStack_28);
      return 1;
    }
  }
  FUN_142b0e8a0(auStack_28);
  return 0;
}


/* address=142c5e940 name=FUN_142c5e940 */

void FUN_142c5e940(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  char param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_178 [32];
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined auStack_128 [16];
  undefined auStack_118 [16];
  undefined auStack_108 [16];
  undefined auStack_f8 [16];
  undefined auStack_e8 [16];
  undefined auStack_d8 [16];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_178;
  if (param_5 == '\0') {
    puStack_148 = (undefined *)FUN_142992fc0(auStack_b8,"client finished",0xf);
  }
  else {
    puStack_148 = (undefined *)FUN_142992fc0(auStack_c8,"server finished",0xf);
  }
  puStack_140 = puStack_148;
  puVar2 = puStack_148;
  puVar5 = auStack_128;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar1 = FUN_142c5e880(param_1,auStack_68,&uStack_130);
  if (cVar1 != '\0') {
    puStack_138 = auStack_a8;
    puVar2 = (undefined *)FUN_142992f00(puStack_138);
    puVar5 = auStack_118;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined *)FUN_142992fc0(auStack_98,auStack_68,uStack_130);
    puVar5 = auStack_108;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = auStack_128;
    puVar5 = auStack_f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined *)FUN_142992fc0(auStack_88,param_4 + 0xb,*(undefined *)(param_4 + 10));
    puVar5 = auStack_e8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined *)FUN_142992fc0(auStack_78,param_2,0xc);
    puVar5 = auStack_d8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_142c5e770(param_1);
    puStack_150 = auStack_118;
    puStack_158 = auStack_108;
    cVar1 = FUN_142bafa40(uVar3,auStack_d8,auStack_e8,auStack_f8);
    if (cVar1 != '\0') {
      *param_3 = 0xc;
    }
  }
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_178);
  return;
}


/* address=142c5eb60 name=FUN_142c5eb60 */

void FUN_142c5eb60(undefined8 param_1)

{
  FUN_142b11d80(param_1);
  FUN_142b11d10(param_1);
  return;
}


/* address=142c5eb90 name=FUN_142c5eb90 */

undefined8 FUN_142c5eb90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c5ebe0 name=FUN_142c5ebe0 */

undefined8 FUN_142c5ebe0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c5ec30 name=FUN_142c5ec30 */

undefined8 FUN_142c5ec30(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c5ec70 name=FUN_142c5ec70 */

undefined8 FUN_142c5ec70(undefined8 *param_1,undefined *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_28 [24];
  
  uVar2 = FUN_142afbfd0(*param_1);
  cVar1 = FUN_142c60f60(param_1,param_1 + 0x33,uVar2,param_1[0xc0]);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x622) >> 3 & 1) == 0) {
      FUN_142c5e710(param_1 + 0x33);
    }
    puVar5 = auStack_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_142c61010(param_1,param_1 + 0x33,auStack_28);
  }
  return uVar3;
}


/* address=142c5ed30 name=FUN_142c5ed30 */

undefined FUN_142c5ed30(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plStack_50;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  if ((*(byte *)(*param_1 + 0xa4) & 1) != 0) {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x4e);
  }
  cVar1 = FUN_142993030(param_1 + 0xbf);
  if (cVar1 == '\0') {
    plStack_50 = param_1 + 0x33;
  }
  else {
    plStack_50 = param_1 + 0x38;
  }
  uVar2 = FUN_142af1120(param_2);
  cVar1 = FUN_142c60f60(param_1,plStack_50,uVar2,*(undefined8 *)(param_2 + 200));
  if (cVar1 != '\0') {
    puVar3 = (undefined *)FUN_142992fc0(auStack_28,param_2 + 0xb,*(undefined *)(param_2 + 10));
    puVar5 = auStack_38;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_142c61010(param_1,plStack_50,auStack_38);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* address=142c5ee80 name=FUN_142c5ee80 */

void FUN_142c5ee80(longlong param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined auStack_158 [32];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined auStack_108 [16];
  undefined auStack_f8 [16];
  undefined auStack_e8 [16];
  undefined auStack_d8 [16];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_158;
  puStack_138 = (undefined *)FUN_142c5e770(param_1 + 0x198);
  uStack_130 = 0;
  iVar2 = FUN_142b123b0(0,0,auStack_68,&uStack_124);
  if (iVar2 != 0) {
    puStack_120 = auStack_b8;
    puVar3 = (undefined *)FUN_142992fc0(auStack_a8,auStack_68,uStack_124);
    puVar6 = auStack_108;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = (undefined *)FUN_142c61150(auStack_98,"derived");
    puVar6 = auStack_f8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar4 = FUN_142c61a80(param_1,auStack_88);
    puVar3 = (undefined *)FUN_142994db0(puStack_120,uVar4);
    puVar6 = auStack_e8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uStack_118 = FUN_142c5e770(param_1 + 0x198);
    puVar3 = (undefined *)FUN_142c61a80(param_1,auStack_78);
    puVar6 = auStack_d8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    puStack_138 = auStack_108;
    cVar1 = FUN_142c61190(auStack_d8,uStack_118,auStack_e8,auStack_f8);
    if (cVar1 != '\0') {
      puVar3 = auStack_c8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      cVar1 = FUN_142c61010(param_1,param_1 + 0x198,auStack_c8);
      if (cVar1 != '\0') {
        uStack_128 = 1;
        goto LAB_142c5f04a;
      }
    }
  }
  uStack_128 = 0;
LAB_142c5f04a:
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_158);
  return;
}


/* address=142c5f070 name=FUN_142c5f070 */

void FUN_142c5f070(longlong *param_1,undefined4 param_2,int param_3,longlong param_4,
                  undefined *param_5)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined auStack_308 [32];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined uStack_2c8;
  undefined uStack_2c7;
  undefined uStack_2c6;
  undefined uStack_2c5;
  undefined uStack_2c4;
  undefined uStack_2c3;
  undefined uStack_2c2;
  undefined uStack_2c1;
  undefined uStack_2c0;
  undefined uStack_2bf;
  undefined auStack_2b8 [8];
  undefined2 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined auStack_298 [8];
  undefined auStack_290 [8];
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined auStack_258 [8];
  undefined *puStack_250;
  longlong lStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined auStack_220 [16];
  undefined auStack_210 [16];
  undefined auStack_200 [16];
  undefined auStack_1f0 [8];
  undefined auStack_1e8 [16];
  undefined auStack_1d8 [16];
  undefined auStack_1c8 [16];
  undefined auStack_1b8 [16];
  undefined auStack_1a8 [16];
  undefined auStack_198 [16];
  undefined auStack_188 [16];
  undefined auStack_178 [16];
  undefined auStack_168 [16];
  undefined auStack_158 [16];
  undefined auStack_148 [16];
  undefined auStack_138 [16];
  undefined auStack_128 [16];
  undefined auStack_118 [16];
  undefined auStack_108 [16];
  undefined auStack_f8 [16];
  undefined auStack_e8 [16];
  undefined auStack_d8 [16];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [32];
  undefined auStack_78 [80];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_308;
  uStack_2b0 = FUN_142af1120(param_4);
  FUN_142994b40(auStack_2b8);
  FUN_142992f00(auStack_220);
  if (param_1[0x13] == 0) {
    iVar3 = FUN_142989500(param_1);
    uStack_2c8 = iVar3 != 0;
    uStack_2e0 = (undefined *)CONCAT71(uStack_2e0._1_7_,uStack_2c8);
    uStack_2e8 = (undefined *)CONCAT62(uStack_2e8._2_6_,uStack_2b0);
    cVar1 = FUN_142afd600(&uStack_2a8,auStack_290,auStack_290,*(undefined8 *)(param_4 + 200));
    if (cVar1 == '\0') {
      uStack_2c6 = 0;
      FUN_142af5bd0(auStack_2b8);
      goto LAB_142c5f7c7;
    }
    uStack_2a0 = FUN_142af1180(param_4);
    uStack_288 = FUN_142b3c6f0(uStack_2a8);
    FUN_142992fc0(auStack_200,auStack_78,uStack_288);
    puStack_280 = auStack_108;
    puVar5 = (undefined *)FUN_142992f00(puStack_280);
    puVar8 = auStack_1d8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_142c61150(auStack_f8,&DAT_1432c3840);
    puVar8 = auStack_1c8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = param_5;
    puVar8 = auStack_1b8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = auStack_200;
    puVar8 = auStack_1a8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    uStack_2e8 = auStack_1d8;
    cVar1 = FUN_142c61190(auStack_1a8,uStack_2a0,auStack_1b8,auStack_1c8);
    if (cVar1 == '\0') {
      uStack_2c5 = 0;
      FUN_142af5bd0(auStack_2b8);
      goto LAB_142c5f7c7;
    }
    uStack_278 = FUN_142b3c710(uStack_2a8);
    FUN_142992fc0(auStack_210,auStack_98,uStack_278);
    puStack_270 = auStack_e8;
    puVar5 = (undefined *)FUN_142992f00(puStack_270);
    puVar8 = auStack_198;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_142c61150(auStack_d8,&DAT_1432c3844);
    puVar8 = auStack_188;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = param_5;
    puVar8 = auStack_178;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = auStack_210;
    puVar8 = auStack_168;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    uStack_2e8 = auStack_198;
    cVar1 = FUN_142c61190(auStack_168,uStack_2a0,auStack_178,auStack_188);
    if (cVar1 == '\0') {
      uStack_2c4 = 0;
      FUN_142af5bd0(auStack_2b8);
      goto LAB_142c5f7c7;
    }
    puStack_268 = auStack_c8;
    puStack_260 = auStack_b8;
    iVar3 = FUN_142989500(param_1);
    uStack_2c7 = iVar3 != 0;
    puVar5 = (undefined *)FUN_142994db0(puStack_268,auStack_210);
    puVar8 = auStack_158;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_142992f00(auStack_a8);
    puVar8 = auStack_148;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_142994db0(puStack_260,auStack_200);
    puVar8 = auStack_138;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puStack_2d0 = auStack_158;
    puStack_2d8 = auStack_148;
    uStack_2e0 = auStack_138;
    uStack_2e8 = *(undefined **)(param_4 + 200);
    uVar4 = FUN_142b832f0(auStack_258,param_3,*(undefined2 *)(param_4 + 4),uStack_2c7);
    FUN_142af5c60(auStack_2b8,uVar4);
    FUN_142af5bd0(auStack_258);
  }
  else {
    uVar4 = FUN_142b83b80(auStack_298,uStack_2b0,*(undefined8 *)(param_4 + 200));
    FUN_142af5c60(auStack_2b8,uVar4);
    FUN_142af5bd0(auStack_298);
    puVar5 = param_5;
    puVar8 = auStack_220;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  cVar1 = FUN_142993030(auStack_2b8);
  if (cVar1 == '\0') {
    uStack_2c3 = 0;
    FUN_142af5bd0(auStack_2b8);
  }
  else {
    uVar6 = FUN_142992f60(param_5);
    if ((uVar6 < 0x31) && (uVar6 = FUN_142992f60(param_5), uVar6 < 0x31)) {
      if (param_3 == 0) {
        puStack_250 = auStack_1e8;
        puVar5 = auStack_220;
        puVar8 = auStack_128;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
        uVar4 = FUN_142992cb0(auStack_2b8);
        uVar4 = FUN_142992e50(puStack_250,uVar4);
        lStack_248 = *param_1;
        cVar1 = (**(code **)(lStack_248 + 0x88))(param_1,param_2,uVar4,auStack_128);
        if (cVar1 == '\0') {
          uStack_2c1 = 0;
          FUN_142af5bd0(auStack_2b8);
          goto LAB_142c5f7c7;
        }
        uStack_240 = FUN_142992f60(param_5);
        uVar4 = FUN_142992c50(param_5);
        FUN_142c5ebe0(param_1[6] + 0x150,uVar4,uStack_240);
        uVar2 = FUN_142992f60(param_5);
        *(undefined *)(param_1[6] + 0x1b1) = uVar2;
      }
      else {
        puStack_238 = auStack_1f0;
        puVar5 = auStack_220;
        puVar8 = auStack_118;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
        uVar4 = FUN_142992cb0(auStack_2b8);
        uVar4 = FUN_142992e50(puStack_238,uVar4);
        lStack_230 = *param_1;
        cVar1 = (**(code **)(lStack_230 + 0x90))(param_1,param_2,uVar4,auStack_118);
        if (cVar1 == '\0') {
          uStack_2c0 = 0;
          FUN_142af5bd0(auStack_2b8);
          goto LAB_142c5f7c7;
        }
        uStack_228 = FUN_142992f60(param_5);
        uVar4 = FUN_142992c50(param_5);
        FUN_142c5ebe0(param_1[6] + 0x120,uVar4,uStack_228);
        uVar2 = FUN_142992f60(param_5);
        *(undefined *)(param_1[6] + 0x1b0) = uVar2;
      }
      uStack_2bf = 1;
      FUN_142af5bd0(auStack_2b8);
    }
    else {
      uStack_2e8 = (undefined *)CONCAT44(uStack_2e8._4_4_,0xc3);
      FUN_142afa690(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                   );
      uStack_2c2 = 0;
      FUN_142af5bd0(auStack_2b8);
    }
  }
LAB_142c5f7c7:
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_308);
  return;
}


/* address=142c5f7f0 name=FUN_142c5f7f0 */

undefined8 FUN_142c5f7f0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong *plStack_b8;
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  lVar1 = *param_1;
  if (((*(byte *)(lVar1 + 0xa4) & 1) == 0) && (cVar2 = FUN_142993030(param_1 + 0xbf), cVar2 != '\0')
     ) {
    plStack_b8 = param_1 + 0x38;
  }
  else {
    plStack_b8 = param_1 + 0x33;
  }
  puVar3 = (undefined *)FUN_142c61150(auStack_58,"c e traffic");
  puVar6 = auStack_88;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = (undefined *)FUN_142b91070(param_1,auStack_48);
  puVar6 = auStack_78;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar2 = FUN_142c612c0(param_1,auStack_78,plStack_b8,auStack_88);
  if (cVar2 != '\0') {
    uVar4 = FUN_142b91070(param_1,auStack_28);
    puVar3 = (undefined *)FUN_142994db0(auStack_38,uVar4);
    puVar6 = auStack_68;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar2 = FUN_142990780(lVar1,"CLIENT_EARLY_TRAFFIC_SECRET",auStack_68);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* address=142c5f960 name=FUN_142c5f960 */

undefined8 FUN_142c5f960(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined auStack_f8 [16];
  undefined auStack_e8 [16];
  undefined auStack_d8 [16];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  uVar1 = *param_1;
  puVar3 = (undefined *)FUN_142c61150(auStack_98,"c hs traffic");
  puVar6 = auStack_f8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = (undefined *)FUN_142b9e2e0(param_1,auStack_88);
  puVar6 = auStack_e8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar2 = FUN_142c613f0(param_1,auStack_e8,auStack_f8);
  if (cVar2 != '\0') {
    uVar4 = FUN_142b9e2e0(param_1,auStack_68);
    puVar3 = (undefined *)FUN_142994db0(auStack_78,uVar4);
    puVar6 = auStack_d8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar2 = FUN_142990780(uVar1,"CLIENT_HANDSHAKE_TRAFFIC_SECRET",auStack_d8);
    if (cVar2 != '\0') {
      puVar3 = (undefined *)FUN_142c61150(auStack_58,"s hs traffic");
      puVar6 = auStack_c8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3 = (undefined *)FUN_142b9e320(param_1,auStack_48);
      puVar6 = auStack_b8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      cVar2 = FUN_142c613f0(param_1,auStack_b8,auStack_c8);
      if (cVar2 != '\0') {
        uVar4 = FUN_142b9e320(param_1,auStack_28);
        puVar3 = (undefined *)FUN_142994db0(auStack_38,uVar4);
        puVar6 = auStack_a8;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        cVar2 = FUN_142990780(uVar1,"SERVER_HANDSHAKE_TRAFFIC_SECRET",auStack_a8);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* address=142c5fb40 name=FUN_142c5fb40 */

undefined FUN_142c5fb40(longlong param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_f8 [16];
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  FUN_142992f00(auStack_f8);
  if (param_2 == 0) {
    puVar2 = (undefined *)
             FUN_142992fc0(auStack_78,*(longlong *)(param_1 + 0x30) + 0x150,
                           *(undefined *)(*(longlong *)(param_1 + 0x30) + 0x1b1));
    puVar5 = auStack_f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    puVar2 = (undefined *)
             FUN_142992fc0(auStack_68,*(longlong *)(param_1 + 0x30) + 0x120,
                           *(undefined *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
    puVar5 = auStack_f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  uVar3 = FUN_142af01d0(param_1);
  uStack_d8 = FUN_142af1180(uVar3);
  puStack_e8 = auStack_58;
  puStack_e0 = auStack_48;
  puVar2 = (undefined *)FUN_142992f00(puStack_e8);
  puVar5 = auStack_c8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined *)FUN_142c61150(auStack_38,"traffic upd");
  puVar5 = auStack_b8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined *)FUN_142994db0(puStack_e0,auStack_f8);
  puVar5 = auStack_a8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = auStack_f8;
  puVar5 = auStack_98;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar1 = FUN_142c61190(auStack_98,uStack_d8,auStack_a8,auStack_b8,auStack_c8);
  if (cVar1 != '\0') {
    puStack_d0 = auStack_28;
    puVar2 = (undefined *)FUN_142994db0(puStack_d0,auStack_f8);
    puVar5 = auStack_88;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_142c5f070(param_1,3,param_2,uVar3,auStack_88);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* address=142c5fd80 name=FUN_142c5fd80 */

undefined8 FUN_142c5fd80(longlong *param_1)

{
  longlong lVar1;
  undefined uVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined auStack_158 [16];
  undefined auStack_148 [16];
  undefined auStack_138 [16];
  undefined auStack_128 [16];
  undefined auStack_118 [16];
  undefined auStack_108 [16];
  undefined auStack_f8 [16];
  undefined auStack_e8 [16];
  undefined auStack_d8 [16];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  lVar1 = *param_1;
  uVar2 = FUN_142c5e740(param_1 + 0x33);
  *(undefined *)(*(longlong *)(lVar1 + 0x30) + 0x1b2) = uVar2;
  puVar4 = (undefined *)FUN_142c61150(auStack_c8,"c ap traffic");
  puVar7 = auStack_158;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar4 = (undefined *)FUN_142b9e360(param_1,auStack_b8);
  puVar7 = auStack_148;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  cVar3 = FUN_142c613f0(param_1,auStack_148,auStack_158);
  if (cVar3 != '\0') {
    uVar5 = FUN_142b9e360(param_1,auStack_98);
    puVar4 = (undefined *)FUN_142994db0(auStack_a8,uVar5);
    puVar7 = auStack_138;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar3 = FUN_142990780(lVar1,"CLIENT_TRAFFIC_SECRET_0",auStack_138);
    if (cVar3 != '\0') {
      puVar4 = (undefined *)FUN_142c61150(auStack_88,"s ap traffic");
      puVar7 = auStack_128;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = (undefined *)FUN_142b9e3a0(param_1,auStack_78);
      puVar7 = auStack_118;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar3 = FUN_142c613f0(param_1,auStack_118,auStack_128);
      if (cVar3 != '\0') {
        uVar5 = FUN_142b9e3a0(param_1,auStack_58);
        puVar4 = (undefined *)FUN_142994db0(auStack_68,uVar5);
        puVar7 = auStack_108;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar3 = FUN_142990780(lVar1,"SERVER_TRAFFIC_SECRET_0",auStack_108);
        if (cVar3 != '\0') {
          puVar4 = (undefined *)FUN_142c61150(auStack_48,"exp master");
          puVar7 = auStack_f8;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (undefined *)
                   FUN_142992fc0(auStack_38,*(longlong *)(lVar1 + 0x30) + 0x180,
                                 *(undefined *)(*(longlong *)(lVar1 + 0x30) + 0x1b2));
          puVar7 = auStack_e8;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
          cVar3 = FUN_142c613f0(param_1,auStack_e8,auStack_f8);
          if (cVar3 != '\0') {
            puVar4 = (undefined *)
                     FUN_142992fc0(auStack_28,*(longlong *)(lVar1 + 0x30) + 0x180,
                                   *(undefined *)(*(longlong *)(lVar1 + 0x30) + 0x1b2));
            puVar7 = auStack_d8;
            for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar7 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar7 = puVar7 + 1;
            }
            cVar3 = FUN_142990780(lVar1,"EXPORTER_SECRET",auStack_d8);
            if (cVar3 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


/* address=142c60090 name=FUN_142c60090 */

ulonglong FUN_142c60090(longlong param_1)

{
  undefined uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  uVar2 = FUN_142c5e740(param_1 + 0x198);
  if (uVar2 < 0x31) {
    uVar1 = FUN_142c5e740(param_1 + 0x198);
    lVar3 = FUN_142992c50(param_1 + 0x5e0);
    *(undefined *)(lVar3 + 10) = uVar1;
    puVar4 = (undefined *)FUN_142c61150(auStack_38,"res master");
    puVar5 = auStack_58;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_142992c50(param_1 + 0x5e0);
    uVar1 = *(undefined *)(lVar3 + 10);
    lVar3 = FUN_142992c50(param_1 + 0x5e0);
    puVar4 = (undefined *)FUN_142992fc0(auStack_28,lVar3 + 0xb,uVar1);
    puVar5 = auStack_48;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_142c613f0(param_1,auStack_48,auStack_58);
  }
  else {
    uVar2 = FUN_142afa690(0x10,0,0x44,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                          ,0x135);
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}


/* address=142c601d0 name=FUN_142c601d0 */

void FUN_142c601d0(undefined8 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined auStack_218 [32];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined *puStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined auStack_1c0 [16];
  undefined auStack_1b0 [24];
  undefined auStack_198 [16];
  undefined auStack_188 [16];
  undefined auStack_178 [16];
  undefined auStack_168 [16];
  undefined auStack_158 [16];
  undefined auStack_148 [16];
  undefined auStack_138 [16];
  undefined auStack_128 [16];
  undefined auStack_118 [16];
  undefined auStack_108 [16];
  undefined auStack_f8 [16];
  undefined auStack_e8 [64];
  undefined auStack_a8 [64];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_218;
  cVar1 = FUN_142992f70(param_3);
  if (cVar1 == '\0') {
    uVar3 = FUN_142af01d0(param_1);
    puStack_1e0 = (undefined *)FUN_142af1180(uVar3);
    uStack_1d0 = FUN_142992f60(param_5);
    uVar3 = FUN_142992c50(param_5);
    uStack_1f0 = 0;
    uStack_1f8 = puStack_1e0;
    iVar2 = FUN_142b123b0(uVar3,uStack_1d0,auStack_e8,&uStack_1d8);
    if (iVar2 != 0) {
      uStack_1f0 = 0;
      uStack_1f8 = puStack_1e0;
      iVar2 = FUN_142b123b0(0,0,auStack_a8,&uStack_1d4);
      if (iVar2 != 0) {
        FUN_142992fc0(auStack_158,auStack_e8,uStack_1d8);
        FUN_142992fc0(auStack_1b0,auStack_a8,uStack_1d4);
        uVar3 = FUN_142b124a0(puStack_1e0);
        FUN_142992fc0(auStack_1c0,auStack_68,uVar3);
        puVar4 = auStack_1b0;
        puVar6 = auStack_198;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = auStack_188;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar4 = *param_4;
          param_4 = param_4 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar4 = auStack_178;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar4 = *param_3;
          param_3 = param_3 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar4 = auStack_1c0;
        puVar6 = auStack_168;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        uStack_1f8 = auStack_198;
        cVar1 = FUN_142c61190(auStack_168,puStack_1e0,auStack_178,auStack_188);
        if (cVar1 != '\0') {
          puStack_1c8 = auStack_108;
          puVar4 = auStack_158;
          puVar6 = auStack_148;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = (undefined *)FUN_142c61150(auStack_f8,"exporter");
          puVar6 = auStack_138;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = (undefined *)FUN_142994db0(puStack_1c8,auStack_1c0);
          puVar6 = auStack_128;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = auStack_118;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar4 = *param_2;
            param_2 = param_2 + 1;
            puVar4 = puVar4 + 1;
          }
          uStack_1f8 = auStack_148;
          cVar1 = FUN_142c61190(auStack_118,puStack_1e0,auStack_128,auStack_138);
          if (cVar1 != '\0') {
            uStack_1e8 = 1;
            goto LAB_142c604d2;
          }
        }
        uStack_1e8 = 0;
      }
    }
  }
  else {
    FID_conflict__assert(L"0",(wchar_t *)"D",0x176);
    uStack_1f8 = (undefined *)CONCAT44(uStack_1f8._4_4_,0x177);
    FUN_142afa690(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
LAB_142c604d2:
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_218);
  return;
}


/* address=142c60500 name=FUN_142c60500 */

void FUN_142c60500(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_118 [32];
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  if (param_4 == '\0') {
    uStack_e8 = FUN_142b9e2e0(param_1,auStack_88);
  }
  else {
    uStack_e8 = FUN_142b9e320(param_1,auStack_98);
  }
  uStack_e0 = uStack_e8;
  FUN_142994db0(auStack_c8,uStack_e8);
  cVar1 = FUN_142c5e880(param_1 + 0x33,auStack_68,&uStack_d8);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_142992fc0(auStack_78,auStack_68,uStack_d8);
    puVar5 = auStack_b8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = auStack_c8;
    puVar5 = auStack_a8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    lStack_d0 = *param_1;
    uVar3 = FUN_142c5e770(param_1 + 0x33);
    puStack_f0 = auStack_b8;
    puStack_f8 = auStack_a8;
    FUN_142c61460(param_2,param_3,uVar3,*(undefined2 *)(lStack_d0 + 0x10));
  }
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_118);
  return;
}


/* address=142c60690 name=FUN_142c60690 */

void FUN_142c60690(longlong param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  uVar1 = FUN_142af1180(param_1);
  FUN_142992fc0(auStack_88,param_1 + 0xb,*(undefined *)(param_1 + 10));
  puVar2 = auStack_78;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined *)FUN_142c61150(auStack_28,"resumption");
  puVar4 = auStack_68;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined *)FUN_142994db0(auStack_38,auStack_88);
  puVar4 = auStack_58;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = auStack_88;
  puVar4 = auStack_48;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_142c61190(auStack_48,uVar1,auStack_58,auStack_68,auStack_78);
  return;
}


/* address=142c607a0 name=FUN_142c607a0 */

void FUN_142c607a0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_f8 [32];
  undefined8 uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  longlong lStack_a0;
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_f8;
  lStack_c0 = *param_1;
  uVar2 = FUN_142992c50(lStack_c0 + 0x58);
  uStack_b0 = FUN_142af1180(uVar2);
  lStack_b8 = FUN_142b124a0(uStack_b0);
  lStack_a0 = lStack_b8 + 3;
  puStack_a8 = auStack_78;
  puVar3 = (undefined *)FUN_142994db0(puStack_a8,param_3);
  puVar5 = auStack_98;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_142992c50(lStack_c0 + 0x58);
  lStack_d0 = lStack_a0;
  uStack_d8 = auStack_98;
  cVar1 = FUN_142c61640(auStack_68,&lStack_c8,uVar2,param_2);
  if ((cVar1 == '\0') || (lStack_c8 != lStack_b8)) {
    uStack_d8 = (undefined *)CONCAT44(uStack_d8._4_4_,0x1d8);
    FUN_142afa690(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
  else {
    FUN_142b80920(param_3,auStack_88,lStack_c8);
    uVar2 = FUN_142992c50(auStack_88);
    FUN_142c5eb90(uVar2,auStack_68,lStack_c8);
    if (param_4 != (longlong *)0x0) {
      *param_4 = lStack_c8;
    }
  }
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_f8);
  return;
}


/* address=142c60940 name=FUN_142c60940 */

void FUN_142c60940(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined auStack_e8 [32];
  undefined8 uStack_c8;
  longlong lStack_c0;
  char cStack_b8;
  undefined4 uStack_b4;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined auStack_a0 [24];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_e8;
  lStack_a8 = FUN_142b782f0(param_4);
  lStack_a8 = lStack_a8 + 2;
  puVar3 = (undefined *)FUN_142af39c0(param_3 + 0x18,auStack_78);
  puVar6 = auStack_88;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  lStack_c0 = lStack_a8;
  uStack_c8 = auStack_88;
  cVar1 = FUN_142c61640(auStack_68,&lStack_b0,param_2,param_1 + 0x198);
  if ((cVar1 == '\0') || (iVar2 = FUN_142b78870(param_4,auStack_a0), iVar2 == 0)) {
    uStack_c8 = (undefined *)CONCAT44(uStack_c8._4_4_,0x1f1);
    FUN_142afa690(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
    goto LAB_142c60aad;
  }
  lVar5 = FUN_142b782f0(auStack_a0);
  if (lVar5 == lStack_b0) {
    uVar4 = FUN_142b782d0(auStack_a0);
    iVar2 = FUN_142b0ec70(uVar4,auStack_68,lStack_b0);
    if (iVar2 != 0) goto LAB_142c60a6c;
    uStack_b4 = 1;
  }
  else {
LAB_142c60a6c:
    uStack_b4 = 0;
  }
  cStack_b8 = (char)uStack_b4;
  if ((char)uStack_b4 == '\0') {
    uStack_c8 = (undefined *)CONCAT44(uStack_c8._4_4_,0x1fc);
    FUN_142afa690(0x10,0,0x8e,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
LAB_142c60aad:
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_e8);
  return;
}


/* address=142c60ad0 name=FUN_142c60ad0 */

longlong FUN_142c60ad0(undefined8 param_1)

{
  int iVar1;
  int iStack_18;
  
  iVar1 = FUN_142989500(param_1);
  if (iVar1 == 0) {
    iStack_18 = 4;
  }
  else {
    iStack_18 = 0xc;
  }
  return (longlong)iStack_18 + 0x1a;
}


/* address=142c60b20 name=FUN_142c60b20 */

void FUN_142c60b20(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined8 param_6,longlong param_7)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined auStack_208 [32];
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined uStack_1c8;
  undefined uStack_1c7;
  undefined uStack_1c6;
  undefined4 uStack_1c4;
  undefined *puStack_1c0;
  undefined auStack_1b8 [32];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined auStack_150 [16];
  undefined auStack_140 [24];
  undefined auStack_128 [16];
  undefined auStack_118 [16];
  undefined auStack_108 [16];
  undefined auStack_f8 [16];
  undefined auStack_e8 [16];
  undefined auStack_d8 [16];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [64];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_208;
  uVar3 = FUN_142992f60(param_6);
  if (uVar3 < param_7 + 8U) {
    uStack_1e8 = (undefined *)CONCAT44(uStack_1e8._4_4_,0x215);
    FUN_142afa690(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
  else {
    FUN_1429937e0(param_6,auStack_150,0,param_7);
    FUN_1429937e0(param_6,auStack_140,param_7 + 8,0xffffffffffffffff);
    FUN_142b0e870(auStack_1b8);
    uStack_198 = FUN_142c5e770(param_4);
    uVar4 = FUN_142992cb0(auStack_1b8);
    cVar1 = FUN_142c5e5e0(param_4,uVar4,uStack_198);
    if (cVar1 != '\0') {
      uStack_190 = FUN_142992f60(auStack_150);
      uStack_188 = FUN_142992c50(auStack_150);
      uVar4 = FUN_142992cb0(auStack_1b8);
      iVar2 = FUN_142b12280(uVar4,uStack_188,uStack_190);
      if (iVar2 != 0) {
        uVar4 = FUN_142992cb0(auStack_1b8);
        iVar2 = FUN_142b12280(uVar4,&DAT_1432c3fc0,8);
        if (iVar2 != 0) {
          uStack_180 = FUN_142992f60(auStack_140);
          uStack_178 = FUN_142992c50(auStack_140);
          uVar4 = FUN_142992cb0(auStack_1b8);
          iVar2 = FUN_142b12280(uVar4,uStack_178,uStack_180);
          if (iVar2 != 0) {
            uVar4 = FUN_142992cb0(auStack_1b8);
            iVar2 = FUN_142b122c0(uVar4,auStack_a8,&uStack_1c4);
            if (iVar2 != 0) {
              uStack_170 = FUN_142c5e740(param_4);
              puStack_168 = (undefined *)FUN_142992f60(param_3);
              uStack_160 = FUN_142992c50(param_3);
              uVar4 = FUN_142c5e770(param_4);
              uStack_1d8 = uStack_170;
              puStack_1e0 = &DAT_1432c3fc0;
              uStack_1e8 = puStack_168;
              iVar2 = FUN_142b5f230(auStack_68,&uStack_158,uVar4,uStack_160);
              if (iVar2 == 0) {
                uStack_1c7 = 0;
                FUN_142b0e8a0(auStack_1b8);
              }
              else {
                lVar5 = FUN_142992f60(param_2);
                if (lVar5 != 8) {
                  FID_conflict__assert((wchar_t *)"o",(wchar_t *)"D",0x22e);
                }
                if (param_5 == '\0') {
                  puStack_1c0 = (undefined *)FUN_142c61150(auStack_d8,"ech accept confirmation");
                }
                else {
                  puStack_1c0 = (undefined *)FUN_142c61150(auStack_e8,"hrr ech accept confirmation")
                  ;
                }
                puVar6 = (undefined *)FUN_142992fc0(auStack_c8,auStack_a8,uStack_1c4);
                puVar7 = auStack_128;
                for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                }
                puVar6 = puStack_1c0;
                puVar7 = auStack_118;
                for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                }
                puVar6 = (undefined *)FUN_142992fc0(auStack_b8,auStack_68,uStack_158);
                puVar7 = auStack_108;
                for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                }
                uVar4 = FUN_142c5e770(param_4);
                puVar6 = auStack_f8;
                for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar6 = *param_2;
                  param_2 = param_2 + 1;
                  puVar6 = puVar6 + 1;
                }
                uStack_1e8 = auStack_128;
                uStack_1c6 = FUN_142c61190(auStack_f8,uVar4,auStack_108,auStack_118);
                FUN_142b0e8a0(auStack_1b8);
              }
              goto LAB_142c60f34;
            }
          }
        }
      }
    }
    uStack_1c8 = 0;
    FUN_142b0e8a0(auStack_1b8);
  }
LAB_142c60f34:
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_208);
  return;
}


/* address=142c60f60 name=FUN_142c60f60 */

bool FUN_142c60f60(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auStack_30 [16];
  undefined auStack_20 [32];
  
  cVar1 = FUN_142c5e380(param_2,param_3,param_4);
  if (cVar1 != '\0') {
    uVar2 = FUN_142c5e740(param_2);
    FUN_142b88f60(param_1,uVar2);
    uVar2 = FUN_142c61a80(param_1,auStack_30);
    uVar2 = FUN_142992f60(uVar2);
    uVar3 = FUN_142c61a80(param_1,auStack_20);
    uVar3 = FUN_142992c50(uVar3);
    FUN_142c5ec30(uVar3,0,uVar2);
  }
  return cVar1 != '\0';
}


/* address=142c61010 name=FUN_142c61010 */

undefined8 FUN_142c61010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lStack_50;
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [16];
  undefined auStack_18 [24];
  
  uVar2 = FUN_142c61a80(param_1,auStack_48);
  uVar2 = FUN_142992f60(uVar2);
  uVar3 = FUN_142c61a80(param_1,auStack_38);
  uVar3 = FUN_142992c50(uVar3);
  uVar4 = FUN_142992f60(param_3);
  uVar5 = FUN_142992c50(param_3);
  uVar6 = FUN_142c5e770(param_2);
  uVar7 = FUN_142c61a80(param_1,auStack_28);
  uVar7 = FUN_142992c50(uVar7);
  iVar1 = FUN_142b5f230(uVar7,&lStack_50,uVar6,uVar5,uVar4,uVar3,uVar2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142c61a80(param_1,auStack_18);
    lVar8 = FUN_142992f60(uVar2);
    if (lStack_50 != lVar8) {
      FID_conflict__assert((wchar_t *)"l",(wchar_t *)"D",0x3a);
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142c61150 name=FUN_142c61150 */

undefined8 FUN_142c61150(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_142992fc0(param_1,param_2,sVar1);
  return param_1;
}


/* address=142c61190 name=FUN_142c61190 */

bool FUN_142c61190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = FUN_142992f60(param_5);
  uVar3 = FUN_142992c50(param_5);
  uVar4 = FUN_142992f60(param_4);
  uVar5 = FUN_142992c50(param_4);
  uVar6 = FUN_142992f60(param_3);
  uVar7 = FUN_142992c50(param_3);
  uVar8 = FUN_142992f60(param_1);
  uVar9 = FUN_142992c50(param_1);
  iVar1 = FUN_142b65cf0(uVar9,uVar8,param_2,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  return iVar1 == 1;
}


/* address=142c612c0 name=FUN_142c612c0 */

void FUN_142c612c0(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_108 [32];
  undefined *puStack_e8;
  undefined8 auStack_d8 [2];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_108;
  cVar1 = FUN_142c5e880(param_3,auStack_68,auStack_d8);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_142992fc0(auStack_88,auStack_68,auStack_d8[0]);
    puVar5 = auStack_c8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = auStack_b8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar2 = *param_4;
      param_4 = param_4 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar2 = (undefined *)FUN_142c61a80(param_1,auStack_78);
    puVar5 = auStack_a8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_142c5e770(param_3);
    puVar2 = auStack_98;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    puStack_e8 = auStack_c8;
    FUN_142c61190(auStack_98,uVar3,auStack_a8,auStack_b8);
  }
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_108);
  return;
}


/* address=142c613f0 name=FUN_142c613f0 */

void FUN_142c613f0(longlong param_1,undefined *param_2,undefined *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  puVar2 = auStack_38;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = auStack_28;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_142c612c0(param_1,auStack_28,param_1 + 0x198,auStack_38);
  return;
}


/* address=142c61460 name=FUN_142c61460 */

void FUN_142c61460(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_148 [32];
  undefined *puStack_128;
  undefined8 uStack_120;
  uint *puStack_118;
  uint auStack_108 [2];
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_e0 [24];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_148;
  uVar2 = FUN_142b124a0(param_3);
  FUN_142992fc0(auStack_e0,auStack_68,uVar2);
  puStack_100 = auStack_88;
  puVar3 = (undefined *)FUN_142992f00(puStack_100);
  puVar5 = auStack_c8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined *)FUN_142c61150(auStack_78,"finished");
  puVar5 = auStack_b8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = auStack_a8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar3 = *param_5;
    param_5 = param_5 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = auStack_e0;
  puVar5 = auStack_98;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_128 = auStack_c8;
  cVar1 = FUN_142c61190(auStack_98,param_3,auStack_a8,auStack_b8);
  if (cVar1 != '\0') {
    puStack_f8 = (undefined *)FUN_142992f60(param_6);
    uStack_f0 = FUN_142992c50(param_6);
    uStack_e8 = FUN_142992f60(auStack_e0);
    uVar2 = FUN_142992c50(auStack_e0);
    puStack_118 = auStack_108;
    puStack_128 = puStack_f8;
    uStack_120 = param_1;
    lVar4 = FUN_142b126d0(param_3,uVar2,uStack_e8,uStack_f0);
    if (lVar4 != 0) {
      *param_2 = (ulonglong)auStack_108[0];
    }
  }
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_148);
  return;
}


/* address=142c61640 name=FUN_142c61640 */

void FUN_142c61640(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined auStack_298 [32];
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined uStack_258;
  undefined uStack_257;
  undefined uStack_256;
  undefined *puStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined auStack_220 [32];
  undefined auStack_200 [16];
  undefined auStack_1f0 [24];
  undefined auStack_1d8 [16];
  undefined auStack_1c8 [16];
  undefined auStack_1b8 [16];
  undefined auStack_1a8 [16];
  undefined auStack_198 [16];
  undefined auStack_188 [16];
  undefined auStack_178 [16];
  undefined auStack_168 [16];
  undefined auStack_158 [16];
  undefined auStack_148 [16];
  undefined auStack_138 [16];
  undefined auStack_128 [64];
  undefined auStack_e8 [64];
  undefined auStack_a8 [64];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_298;
  puStack_250 = (undefined *)FUN_142af1180(param_3);
  puVar4 = auStack_128;
  for (lVar6 = 0x40; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = auStack_e8;
  for (lVar6 = 0x40; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar3 = FUN_142b124a0(puStack_250);
  FUN_142992fc0(auStack_1f0,auStack_e8,uVar3);
  puStack_270 = (undefined *)0x0;
  uStack_278 = puStack_250;
  iVar2 = FUN_142b123b0(0,0,auStack_a8,&uStack_248);
  if (iVar2 != 0) {
    uStack_278 = (undefined *)(ulonglong)*(byte *)(param_3 + 10);
    uStack_268 = 0;
    puStack_270 = (undefined *)0x0;
    iVar2 = FUN_142b5f230(auStack_128,&uStack_240,puStack_250,param_3 + 0xb);
    if (iVar2 != 0) {
      puVar4 = (undefined *)FUN_142992fc0(auStack_178,auStack_a8,uStack_248);
      puVar7 = auStack_1d8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = (undefined *)FUN_142c61150(auStack_168,"res binder");
      puVar7 = auStack_1c8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = (undefined *)FUN_142992fc0(auStack_158,auStack_128,uStack_240);
      puVar7 = auStack_1b8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = auStack_1f0;
      puVar7 = auStack_1a8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      uStack_278 = auStack_1d8;
      cVar1 = FUN_142c61190(auStack_1a8,puStack_250,auStack_1b8,auStack_1c8);
      if (cVar1 != '\0') {
        uVar5 = FUN_142992f60(param_5);
        if (uVar5 < param_6) {
          uStack_278 = (undefined *)CONCAT44(uStack_278._4_4_,0x1b2);
          FUN_142afa690(0x10,0,0x44,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                       );
        }
        else {
          lVar6 = FUN_142992f60(param_5);
          FUN_1429937e0(param_5,auStack_200,0,lVar6 - param_6);
          FUN_142b0e870(auStack_220);
          uVar3 = FUN_142992cb0(auStack_220);
          cVar1 = FUN_142c5e5e0(param_4,uVar3,puStack_250);
          if (cVar1 != '\0') {
            uStack_238 = FUN_142992f60(auStack_200);
            uStack_230 = FUN_142992c50(auStack_200);
            uVar3 = FUN_142992cb0(auStack_220);
            iVar2 = FUN_142b12280(uVar3,uStack_230,uStack_238);
            if (iVar2 != 0) {
              uVar3 = FUN_142992cb0(auStack_220);
              iVar2 = FUN_142b122c0(uVar3,auStack_68,&uStack_244);
              if (iVar2 != 0) {
                puStack_228 = auStack_148;
                puVar4 = (undefined *)FUN_142992fc0(auStack_138,auStack_68,uStack_244);
                puVar7 = auStack_198;
                for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *puVar7 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar7 = puVar7 + 1;
                }
                puVar4 = (undefined *)FUN_142994db0(puStack_228,auStack_1f0);
                puVar7 = auStack_188;
                for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *puVar7 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar7 = puVar7 + 1;
                }
                puStack_270 = auStack_198;
                uStack_278 = auStack_188;
                cVar1 = FUN_142c61460(param_1,param_2,puStack_250,*(undefined2 *)(param_3 + 4));
                if (cVar1 == '\0') {
                  uStack_257 = 0;
                  FUN_142b0e8a0(auStack_220);
                }
                else {
                  lVar6 = FUN_142b124a0(puStack_250);
                  if (*param_2 != lVar6) {
                    FID_conflict__assert((wchar_t *)"*",(wchar_t *)"D",0x1c5);
                  }
                  uStack_256 = 1;
                  FUN_142b0e8a0(auStack_220);
                }
                goto LAB_142c61a60;
              }
            }
          }
          uStack_258 = 0;
          FUN_142b0e8a0(auStack_220);
        }
      }
    }
  }
LAB_142c61a60:
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_298);
  return;
}


/* address=142c61a80 name=FUN_142c61a80 */

undefined8 FUN_142c61a80(longlong param_1,undefined8 param_2)

{
  FUN_142992fc0(param_2,param_1 + 0x28,*(undefined8 *)(param_1 + 0x20));
  return param_2;
}


/* address=142c61ac0 name=FUN_142c61ac0 */

longlong FUN_142c61ac0(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lStack_18;
  
  iVar3 = FUN_142989500(param_1);
  if (iVar3 == 0) {
    uVar4 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar5 = FUN_142b83d60(uVar4);
    lStack_18 = lVar5 + 5;
    uVar4 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
    cVar1 = FUN_142b84f90(uVar4);
    if (cVar1 == '\0') {
      uVar4 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar2 = FUN_142b83c20(uVar4);
      if (0x303 < uVar2) {
        lStack_18 = lVar5 + 6;
      }
    }
    cVar1 = FUN_142c62c90(param_1);
    if (cVar1 != '\0') {
      lStack_18 = lStack_18 << 1;
    }
  }
  else {
    lStack_18 = FUN_142c68e30(param_1,1);
  }
  return lStack_18;
}


/* address=142c61bb0 name=FUN_142c61bb0 */

undefined4 FUN_142c61bb0(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  undefined4 uStack_28;
  
  if ((param_3 < param_1 + param_2) && (param_1 < param_3 + param_4)) {
    uStack_28 = 1;
  }
  else {
    uStack_28 = 0;
  }
  return uStack_28;
}


/* address=142c61c30 name=FUN_142c61c30 */

undefined8 FUN_142c61c30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c61c80 name=FUN_142c61c80 */

longlong FUN_142c61c80(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lStack_18;
  
  iVar1 = FUN_142989500(param_1);
  if (iVar1 == 0) {
    lStack_18 = 5;
  }
  else {
    lStack_18 = 0xd;
  }
  uVar2 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
  lVar3 = FUN_142b83d20(uVar2);
  return lStack_18 + lVar3;
}


/* address=142c61ce0 name=FUN_142c61ce0 */

undefined8
FUN_142c61ce0(longlong param_1,char *param_2,undefined *param_3,longlong *param_4,undefined *param_5
             ,undefined8 param_6)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined *puVar10;
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar11;
  char cStack_138;
  undefined uStack_137;
  char cStack_136;
  ushort auStack_134 [2];
  ushort auStack_130 [2];
  uint uStack_12c;
  uint uStack_128;
  undefined4 uStack_124;
  int iStack_120;
  uint uStack_11c;
  undefined auStack_118 [16];
  undefined *puStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  ulonglong uStack_e8;
  undefined *puStack_e0;
  undefined auStack_d8 [16];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  *param_4 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0xac) == 1) {
    return 3;
  }
  cVar1 = FUN_142b85490(param_1,param_5);
  if (cVar1 == '\0') {
    return 4;
  }
  puStack_108 = auStack_68;
  puVar4 = (undefined *)FUN_142994db0(puStack_108,param_6);
  puVar10 = auStack_b8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_142994db0(auStack_118,auStack_b8);
  iVar3 = FUN_142b784f0(auStack_118,&cStack_138);
  if (((iVar3 == 0) || (iVar3 = FUN_142b78540(auStack_118,auStack_130), iVar3 == 0)) ||
     (iVar3 = FUN_142b78540(auStack_118,auStack_134), iVar3 == 0)) {
    *param_4 = 5;
    return 2;
  }
  uVar5 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
  cVar1 = FUN_142b84f90(uVar5);
  if (cVar1 == '\0') {
    uStack_11c = (uint)auStack_130[0];
    uVar5 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
    uVar2 = FUN_142b83c80(uVar5);
    uStack_137 = uStack_11c == uVar2;
    uStack_128 = (uint)(byte)uStack_137;
  }
  else {
    uStack_137 = (int)(uint)auStack_130[0] >> 8 == 3;
    uStack_12c = (uint)(byte)uStack_137;
  }
  if ((bool)uStack_137 == false) {
    FUN_142afa690(0x10,0,0xf7,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0xe7));
    *param_5 = 0x46;
    return 4;
  }
  if (0x4140 < auStack_134[0]) {
    FUN_142afa690(0x10,0,0x92,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0xee));
    *param_5 = 0x16;
    return 4;
  }
  iVar3 = FUN_142b787b0(auStack_118,auStack_d8,auStack_134[0]);
  if (iVar3 == 0) {
    *param_4 = (ulonglong)auStack_134[0] + 5;
    return 2;
  }
  uVar5 = FUN_1429937e0(param_6,auStack_58,0,5);
  FUN_142994db0(auStack_c8,uVar5);
  puVar4 = auStack_c8;
  puVar10 = auStack_a8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_1429906b0(param_1,0,0x100,auStack_a8);
  lStack_100 = FUN_142992f60(param_6);
  lVar9 = FUN_142b782f0(auStack_118);
  *param_4 = lStack_100 - lVar9;
  if (((((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 1 & 1) != 0) &&
       (uVar2 = FUN_142afbfd0(param_1), 0x303 < uVar2)) &&
      ((iVar3 = FUN_14298b470(param_1), iVar3 != 0 &&
       ((cStack_138 == '\x14' && (auStack_134[0] == 1)))))) &&
     (pcVar6 = (char *)FUN_142b782d0(auStack_d8), *pcVar6 == '\x01')) {
    *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) =
         *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) + '\x01';
    if (0x20 < *(byte *)(*(longlong *)(param_1 + 0x30) + 0xd2)) {
      FUN_142afa690(0x10,0,0xdb,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,CONCAT44(uVar11,0x107));
      *param_5 = 10;
      return 4;
    }
    return 1;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) & 1) != 0) {
    uVar5 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
    cVar1 = FUN_142b84f90(uVar5);
    if ((cVar1 != '\0') && (cStack_138 == '\x17')) {
      uVar5 = FUN_142c62d50(param_1,param_5,*param_4);
      return uVar5;
    }
  }
  if (**(longlong **)(param_1 + 0x30) == -1) {
    FUN_142afa690(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0x118));
    *param_5 = 0x50;
    return 4;
  }
  uStack_f8 = FUN_142b782f0(auStack_d8);
  uVar5 = FUN_142b782d0(auStack_d8);
  puVar4 = (undefined *)FUN_142992fc0(auStack_48,uVar5,uStack_f8);
  puVar10 = auStack_98;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar4 = auStack_c8;
  puVar10 = auStack_88;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  puStack_f0 = *(undefined8 **)(param_1 + 0x30);
  uVar7 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
  uVar5 = *puStack_f0;
  cVar1 = FUN_142b83f30(uVar7,param_3,cStack_138,auStack_130[0],uVar5,auStack_88,auStack_98);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (cVar1 == '\0') {
    if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) & 1) != 0) {
      uVar5 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
      cVar1 = FUN_142b84f90(uVar5);
      if (cVar1 == '\0') {
        FUN_142afa330();
        uVar5 = FUN_142c62d50(param_1,param_5,*param_4);
        return uVar5;
      }
    }
    FUN_142afa690(0x10,0,0x8b,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0x126));
    *param_5 = 0x14;
    return 4;
  }
  *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) =
       *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) & 0xfe;
  **(longlong **)(param_1 + 0x30) = **(longlong **)(param_1 + 0x30) + 1;
  uVar7 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
  cVar1 = FUN_142b84f90(uVar7);
  if (cVar1 == '\0') {
    uVar7 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
    uVar2 = FUN_142b83c20(uVar7);
    if (0x303 < uVar2) {
      uStack_124 = 1;
      goto LAB_142c623f1;
    }
  }
  uStack_124 = 0;
LAB_142c623f1:
  cStack_136 = (char)uStack_124;
  if ((char)uStack_124 == '\0') {
    iStack_120 = 0x4000;
  }
  else {
    iStack_120 = 0x4001;
  }
  uStack_e8 = (ulonglong)iStack_120;
  uVar8 = FUN_142992f60(param_3);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (uStack_e8 < uVar8) {
    FUN_142afa690(0x10,0,0x88,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0x138));
    *param_5 = 0x16;
    uVar5 = 4;
  }
  else {
    if (cStack_136 != '\0') {
      if (cStack_138 != '\x17') {
        FUN_142afa690(0x10,0,0xfb,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                      ,CONCAT44(uVar11,0x140));
        *param_5 = 0x32;
        return 4;
      }
      do {
        cVar1 = FUN_142992f70(param_3);
        if (cVar1 != '\0') {
          FUN_142afa690(0x10,0,0x8b,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                        ,0x147);
          *param_5 = 0x33;
          return 4;
        }
        pcVar6 = (char *)FUN_142b808e0(param_3);
        cStack_138 = *pcVar6;
        lVar9 = FUN_142992f60(param_3);
        puVar4 = (undefined *)FUN_1429937e0(param_3,auStack_38,0,lVar9 + -1);
        uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
        puVar10 = param_3;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar10 = puVar10 + 1;
        }
      } while (cStack_138 == '\0');
    }
    cVar1 = FUN_142992f70(param_3);
    if (cVar1 == '\0') {
      *(undefined *)(*(longlong *)(param_1 + 0x30) + 0xd2) = 0;
    }
    else {
      *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) =
           *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) + '\x01';
      if (0x20 < *(byte *)(*(longlong *)(param_1 + 0x30) + 0xd2)) {
        FUN_142afa690(0x10,0,0xdb,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                      ,CONCAT44(uVar11,0x154));
        *param_5 = 10;
        return 4;
      }
    }
    if (cStack_138 == '\x15') {
      puStack_e0 = auStack_28;
      puVar4 = (undefined *)FUN_142994db0(puStack_e0,param_3);
      puVar10 = auStack_78;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar10 = puVar10 + 1;
      }
      uVar5 = FUN_142c62a00(param_1,param_5,auStack_78);
    }
    else if ((cStack_138 == '\x16') || (cVar1 = FUN_142b85540(param_1), cVar1 == '\0')) {
      *(undefined *)(*(longlong *)(param_1 + 0x30) + 0xd3) = 0;
      *param_2 = cStack_138;
      uVar5 = 0;
    }
    else {
      FUN_142afa690(0x10,0,0xe1,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,CONCAT44(uVar11,0x165));
      *param_5 = 10;
      uVar5 = 4;
    }
  }
  return uVar5;
}


/* address=142c626f0 name=FUN_142c626f0 */

longlong FUN_142c626f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = FUN_142989500(param_1);
  if (iVar2 == 0) {
    uVar3 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar5 = FUN_142b83d20(uVar3);
    lVar4 = lVar5 + 5;
    cVar1 = FUN_142c62c90(param_1);
    if (cVar1 != '\0') {
      uVar3 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar3 = FUN_142992c50(uVar3);
      lVar4 = FUN_142afe2e0(uVar3);
      lVar4 = lVar5 + 10 + lVar4;
    }
  }
  else {
    uVar3 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar4 = FUN_142b83d20(uVar3);
    lVar4 = lVar4 + 0xd;
  }
  return lVar4;
}


/* address=142c627c0 name=FUN_142c627c0 */

ulonglong FUN_142c627c0(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                       undefined param_5,undefined8 param_6,ulonglong param_7)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  
  iVar2 = FUN_142c61bb0(param_6,param_7,param_2,param_4);
  if (iVar2 == 0) {
    lVar4 = FUN_142c63260(param_1,param_5,param_7);
    cVar1 = FUN_142c63330(param_1,&lStack_30,param_5,param_7);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else if ((param_7 + lVar4 < param_7) || (lVar4 + param_7 + lStack_30 < lVar4 + param_7)) {
      uVar3 = FUN_142afa690(0x10,0,200,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                            ,0x20f);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else if (param_4 < param_7 + lVar4 + lStack_30) {
      uVar3 = FUN_142afa690(0x10,0,0x79,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                            ,0x213);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      lStack_28 = param_2 + lVar4;
      lStack_20 = lStack_28 + param_7;
      lStack_18 = param_2;
      cVar1 = FUN_142c63420(param_1,param_2,lStack_28,lStack_20,param_5,param_6,param_7);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      else {
        lStack_30 = lVar4 + param_7 + lStack_30;
        *param_3 = lStack_30;
        uVar3 = CONCAT71((int7)((ulonglong)lStack_30 >> 8),1);
      }
    }
  }
  else {
    uVar3 = FUN_142afa690(0x10,0,0xbd,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                          ,0x204);
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}


/* address=142c62a00 name=FUN_142c62a00 */

undefined8 FUN_142c62a00(longlong param_1,undefined *param_2,undefined *param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uStack_38;
  undefined auStack_28 [24];
  
  lVar4 = FUN_142992f60(param_3);
  if (lVar4 == 2) {
    puVar8 = param_3;
    puVar9 = auStack_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_1429906b0(param_1,0,0x15,auStack_28);
    pcVar6 = (char *)FUN_142af3ac0(param_3,0);
    cVar1 = *pcVar6;
    pbVar7 = (byte *)FUN_142af3ac0(param_3,1);
    bVar2 = *pbVar7;
    uStack_38 = CONCAT11(cVar1,bVar2);
    FUN_142990610(param_1,0x4004,uStack_38);
    if (cVar1 == '\x01') {
      if (bVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xac) = 1;
        uVar5 = 3;
      }
      else {
        if ((((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 1 & 1) != 0) &&
            (uVar3 = FUN_142afbfd0(param_1), 0x303 < uVar3)) && (bVar2 != 0x5a)) {
          *param_2 = 0x32;
          FUN_142afa690(0x10,0,0x66,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                        ,0x242);
          return 4;
        }
        *(char *)(*(longlong *)(param_1 + 0x30) + 0xd3) =
             *(char *)(*(longlong *)(param_1 + 0x30) + 0xd3) + '\x01';
        if (*(byte *)(*(longlong *)(param_1 + 0x30) + 0xd3) < 5) {
          uVar5 = 1;
        }
        else {
          *param_2 = 10;
          FUN_142afa690(0x10,0,0xdc,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                        ,0x249);
          uVar5 = 4;
        }
      }
    }
    else if (cVar1 == '\x02') {
      FUN_142afa690(0x10,0,bVar2 + 1000,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,0x250);
      FUN_142afa800("SSL alert number %d",bVar2);
      *param_2 = 0;
      uVar5 = 4;
    }
    else {
      *param_2 = 0x2f;
      FUN_142afa690(0x10,0,0xe3,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,599);
      uVar5 = 4;
    }
  }
  else {
    *param_2 = 0x32;
    FUN_142afa690(0x10,0,0x66,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0x227);
    uVar5 = 4;
  }
  return uVar5;
}


/* address=142c62c90 name=FUN_142c62c90 */

undefined FUN_142c62c90(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
  cVar1 = FUN_142b84f90(uVar4);
  if (cVar1 == '\0') {
    uVar4 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
    uVar2 = FUN_142b83c20(uVar4);
    if ((uVar2 < 0x302) && ((*(uint *)(param_1 + 0x84) & 0x100) != 0)) {
      uVar4 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar4 = FUN_142992c50(uVar4);
      iVar3 = FUN_142afc5b0(uVar4);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* address=142c62d50 name=FUN_142c62d50 */

undefined8 FUN_142c62d50(longlong param_1,undefined *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  *(short *)(*(longlong *)(param_1 + 0x30) + 0xd0) =
       *(short *)(*(longlong *)(param_1 + 0x30) + 0xd0) + (short)param_3;
  if (*(ushort *)(*(longlong *)(param_1 + 0x30) + 0xd0) < param_3) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x30) + 0xd0) = 0x4001;
  }
  if (*(ushort *)(*(longlong *)(param_1 + 0x30) + 0xd0) < 0x4001) {
    uVar1 = 1;
  }
  else {
    FUN_142afa690(0x10,0,0x10e,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0xbb);
    *param_2 = 10;
    uVar1 = 4;
  }
  return uVar1;
}


/* address=142c62e10 name=FUN_142c62e10 */

undefined8
FUN_142c62e10(longlong param_1,undefined *param_2,longlong param_3,undefined8 param_4,
             undefined param_5,longlong param_6,undefined8 param_7)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined *puVar9;
  longlong lStack_78;
  undefined2 auStack_70 [4];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  uVar5 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
  puStack_68 = (undefined *)0x0;
  lStack_78 = 0;
  cVar1 = FUN_142b84f90(uVar5);
  if ((cVar1 == '\0') && (uVar2 = FUN_142b83c20(uVar5), 0x303 < uVar2)) {
    puStack_68 = &param_5;
    lStack_78 = 1;
  }
  cVar1 = FUN_142b83dd0(uVar5,&uStack_60,param_7,lStack_78);
  if ((cVar1 == '\0') || (cVar1 = FUN_142b83e60(uVar5,auStack_70,param_7,lStack_78), cVar1 == '\0'))
  {
    FUN_142afa690(0x10,0,200,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0x180);
    return 0;
  }
  if ((param_6 != param_3) && (iVar4 = FUN_142c61bb0(param_6,param_7,param_3,param_7), iVar4 != 0))
  {
    FID_conflict__assert((wchar_t *)"i",(wchar_t *)"D",0x184);
  }
  uVar6 = FUN_142c61c80(param_1);
  iVar4 = FUN_142c61bb0(param_6,param_7,param_2,uVar6);
  if (iVar4 != 0) {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x185);
  }
  iVar4 = FUN_142c61bb0(param_6,param_7,param_4,uStack_60);
  if (iVar4 != 0) {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x186);
  }
  if (lStack_78 == 0) {
    *param_2 = param_5;
  }
  else {
    *param_2 = 0x17;
  }
  uVar3 = FUN_142b83c80(uVar5);
  param_2[1] = (char)((ushort)uVar3 >> 8);
  param_2[2] = (char)uVar3;
  param_2[3] = (char)((ushort)auStack_70[0] >> 8);
  param_2[4] = (char)auStack_70[0];
  uVar6 = FUN_142992fc0(auStack_28,param_2,5);
  FUN_142994db0(auStack_58,uVar6);
  if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) == -1) {
    FUN_142afa690(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0x198);
    return 0;
  }
  puVar8 = auStack_58;
  puVar9 = auStack_48;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  cVar1 = FUN_142b846f0(uVar5,param_2 + 5,param_3,param_4,*param_2,uVar3,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8),auStack_48,param_6,
                        param_7,puStack_68,lStack_78);
  if (cVar1 == '\0') {
    return 0;
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) =
       *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) + 1;
  puVar8 = auStack_58;
  puVar9 = auStack_38;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_1429906b0(param_1,1,0x100,auStack_38);
  return 1;
}


/* address=142c63260 name=FUN_142c63260 */

longlong FUN_142c63260(longlong param_1,char param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((param_2 == '\x17') && (1 < param_3)) && (cVar1 = FUN_142c62c90(param_1), cVar1 != '\0')) {
    uVar2 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
    uVar2 = FUN_142992c50(uVar2);
    lVar3 = FUN_142afe2e0(uVar2);
    return lVar3 + 9;
  }
  uVar2 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
  lVar3 = FUN_142b83d20(uVar2);
  return lVar3 + 5;
}


/* address=142c63330 name=FUN_142c63330 */

void FUN_142c63330(longlong param_1,undefined8 param_2,char param_3,ulonglong param_4)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulonglong uStackX_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uVar3 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
  cVar1 = FUN_142b84f90(uVar3);
  if (cVar1 == '\0') {
    uVar3 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
    uVar2 = FUN_142b83c20(uVar3);
    if (0x303 < uVar2) {
      uStack_18 = 1;
    }
  }
  uStackX_20 = param_4;
  if ((param_3 == '\x17') && (1 < param_4)) {
    cVar1 = FUN_142c62c90(param_1);
    if (cVar1 != '\0') {
      uStackX_20 = param_4 - 1;
    }
  }
  uVar3 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
  FUN_142b83dd0(uVar3,param_2,uStackX_20,uStack_18);
  return;
}


/* address=142c63420 name=FUN_142c63420 */

void FUN_142c63420(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  char param_5,longlong param_6,ulonglong param_7)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined auStack_88 [32];
  char cStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_88;
  if (((param_5 == '\x17') && (1 < param_7)) && (cVar1 = FUN_142c62c90(param_1), cVar1 != '\0')) {
    uVar2 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar3 = FUN_142b83d20(uVar2);
    if (lVar3 != 0) {
      FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x1d8);
    }
    uStack_28 = 5;
    lStack_40 = param_2 + 5;
    lStack_38 = param_2 + 6;
    uStack_58 = 1;
    lStack_60 = param_6;
    cStack_68 = param_5;
    cVar1 = FUN_142c62e10(param_1,param_2,lStack_40,lStack_38);
    if (cVar1 != '\0') {
      uVar2 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
      cVar1 = FUN_142b83dd0(uVar2,&lStack_30,1,0);
      if (cVar1 == '\0') {
        FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x1e6);
      }
      else {
        lStack_48 = lStack_30 + 6;
        uVar2 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
        uVar2 = FUN_142992c50(uVar2);
        lVar3 = FUN_142afe2e0(uVar2);
        if (lVar3 + 5 != lStack_48) {
          FID_conflict__assert((wchar_t *)"S",(wchar_t *)"D",0x1ec);
        }
        uStack_58 = param_7 - 1;
        lStack_60 = param_6 + 1;
        cStack_68 = param_5;
        cVar1 = FUN_142c62e10(param_1,auStack_20,param_3 + 1,param_4);
        if (cVar1 != '\0') {
          lVar3 = FUN_142c63260(param_1,0x17,param_7);
          if (lVar3 != lStack_48 + 4) {
            FID_conflict__assert((wchar_t *)"t",(wchar_t *)"D",0x1f6);
          }
          FUN_142c61c30(param_2 + lStack_48,auStack_20,4);
          FUN_142c61c30(param_3,auStack_1c,1);
        }
      }
    }
  }
  else {
    uStack_58 = param_7;
    lStack_60 = param_6;
    cStack_68 = param_5;
    FUN_142c62e10(param_1,param_2,param_3,param_4);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=142c63750 name=FUN_142c63750 */

undefined8 FUN_142c63750(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c637a0 name=FUN_142c637a0 */

int FUN_142c637a0(undefined8 *param_1)

{
  int iVar1;
  int iStack_18;
  
  do {
    if (*(int *)(param_1 + 3) == 0x10) {
      return 1;
    }
    iStack_18 = 0;
    iVar1 = *(int *)(param_1 + 3);
    switch(iVar1) {
    case 0:
      iStack_18 = func_0x000142c647a0(param_1);
      break;
    case 1:
      iStack_18 = func_0x000142c64ef0(param_1);
      break;
    case 2:
      iStack_18 = func_0x000142c65d00(param_1);
      break;
    case 3:
      iStack_18 = func_0x000142c66290(param_1);
      break;
    case 4:
      iStack_18 = func_0x000142c668d0(param_1);
      break;
    case 5:
      iStack_18 = func_0x000142c67550(param_1);
      break;
    case 6:
      iStack_18 = func_0x000142c675e0(param_1);
      break;
    case 7:
      iStack_18 = func_0x000142c677a0(param_1);
      break;
    case 8:
      iStack_18 = func_0x000142c67ab0(param_1);
      break;
    case 9:
      iStack_18 = func_0x000142c67d00(param_1);
      break;
    case 10:
      iStack_18 = func_0x000142c67ea0(param_1);
      break;
    case 0xb:
      iStack_18 = func_0x000142c68180(param_1);
      break;
    case 0xc:
      iStack_18 = func_0x000142c682d0(param_1);
      break;
    case 0xd:
      iStack_18 = func_0x000142c68410(param_1);
      break;
    case 0xe:
      iStack_18 = func_0x000142c684f0(param_1);
      break;
    case 0xf:
      iStack_18 = func_0x000142c686a0(param_1);
    }
    if (*(int *)(param_1 + 3) != iVar1) {
      FUN_142990610(*param_1,0x2001,1);
    }
  } while (iStack_18 == 1);
  return iStack_18;
}


/* address=142c63af0 name=FUN_142c63af0 */

ulonglong FUN_142c63af0(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined uStack_188;
  char cStack_187;
  byte bStack_186;
  byte bStack_185;
  byte bStack_184;
  byte bStack_183;
  short sStack_180;
  longlong lStack_178;
  undefined8 uStack_170;
  undefined auStack_168 [8];
  undefined auStack_160 [16];
  longlong *plStack_150;
  undefined *puStack_148;
  undefined auStack_140 [8];
  longlong lStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined auStack_108 [16];
  undefined auStack_f8 [48];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  uStack_170 = *param_1;
  lVar3 = FUN_142992c50(param_1 + 0xbc);
  sStack_180 = *(short *)(lVar3 + 6);
  FUN_142992f00(auStack_108);
  uStack_188 = 0x32;
  cVar1 = FUN_142b9ee60(param_1,&cStack_187,auStack_108,&uStack_188,param_2);
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (cVar1 == '\0') {
    uVar4 = FUN_142baa680(uStack_170,2,uStack_188);
    return uVar4 & 0xffffffffffffff00;
  }
  if (cStack_187 == '\0') {
    FUN_142baa680(uStack_170,2,0x2f);
    uVar4 = FUN_142afa690(0x10,0,0xf3,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                          ,CONCAT44(uVar8,0x3d));
    return uVar4 & 0xffffffffffffff00;
  }
  FUN_142993420(auStack_160);
  lStack_178 = FUN_142992c50(param_1 + 0xc3);
  if ((((lStack_178 == 0) || ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) ||
      (*(short *)(lStack_178 + 0x20) != sStack_180)) ||
     (cVar1 = FUN_142992f70(lStack_178 + 0x38), cVar1 != '\0')) {
    FUN_142994a40(auStack_f8);
    uVar6 = FUN_142b073f0(auStack_140,sStack_180);
    FUN_142992e50(auStack_168,uVar6);
    FUN_142b0b180(auStack_140);
    cVar1 = FUN_142993030(auStack_168);
    if (cVar1 != '\0') {
      uVar6 = FUN_142992cb0(auStack_f8);
      iVar2 = FUN_142b7a520(uVar6,0x20);
      if (iVar2 != 0) {
        plStack_150 = (longlong *)FUN_142992c50(auStack_168);
        puVar5 = auStack_108;
        puVar7 = auStack_a8;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar6 = FUN_142992cb0(auStack_f8);
        lStack_138 = *plStack_150;
        cVar1 = (**(code **)(lStack_138 + 0x18))
                          (plStack_150,uVar6,auStack_160,&uStack_188,auStack_a8);
        if (cVar1 != '\0') {
          puStack_130 = param_1 + 0x4d;
          uVar6 = FUN_142992cb0(auStack_f8);
          cVar1 = FUN_1429905a0(uVar6,puStack_130);
          if (cVar1 != '\0') {
            if ((lStack_178 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) {
              *(short *)(lStack_178 + 0x20) = sStack_180;
              puStack_128 = auStack_48;
              puVar5 = (undefined *)FUN_142994db0(puStack_128,param_1 + 0x4d);
              puVar7 = auStack_98;
              for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              cVar1 = FUN_1429936c0(lStack_178 + 0x28,auStack_98);
              if (cVar1 == '\0') {
LAB_142c63fa3:
                FUN_142baa680(uStack_170,2,0x50);
                bStack_184 = 0;
                FUN_142b0b180(auStack_168);
                FUN_142994a70(auStack_f8);
                FUN_1429934a0(auStack_160);
                return (ulonglong)bStack_184;
              }
              puStack_120 = auStack_38;
              puVar5 = (undefined *)FUN_142994db0(puStack_120,auStack_160);
              puVar7 = auStack_88;
              for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              cVar1 = FUN_1429936c0(lStack_178 + 0x38,auStack_88);
              if (cVar1 == '\0') goto LAB_142c63fa3;
            }
            FUN_142b0b180(auStack_168);
            FUN_142994a70(auStack_f8);
            goto LAB_142c63ffe;
          }
        }
      }
    }
    FUN_142baa680(uStack_170,2,uStack_188);
    bStack_185 = 0;
    FUN_142b0b180(auStack_168);
    FUN_142994a70(auStack_f8);
    FUN_1429934a0(auStack_160);
    bStack_186 = bStack_185;
  }
  else {
    puStack_110 = auStack_68;
    puVar5 = (undefined *)FUN_142994db0(puStack_110,lStack_178 + 0x28);
    puVar7 = auStack_c8;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = FUN_1429936c0(param_1 + 0x4d,auStack_c8);
    if (cVar1 != '\0') {
      puStack_148 = auStack_58;
      puVar5 = (undefined *)FUN_142994db0(puStack_148,lStack_178 + 0x38);
      puVar7 = auStack_b8;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_1429936c0(auStack_160,auStack_b8);
      if (cVar1 != '\0') {
LAB_142c63ffe:
        puStack_118 = auStack_28;
        puVar5 = (undefined *)FUN_142994db0(puStack_118,auStack_160);
        puVar7 = auStack_78;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        bStack_183 = FUN_142c5ee80(param_1,auStack_78);
        FUN_1429934a0(auStack_160);
        return (ulonglong)bStack_183;
      }
    }
    FUN_142baa680(uStack_170,2,0x50);
    bStack_186 = 0;
    FUN_1429934a0(auStack_160);
  }
  return (ulonglong)bStack_186;
}


/* address=142c64070 name=FUN_142c64070 */

undefined8 FUN_142c64070(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b7af50(param_2,0x2b);
  if ((((iVar1 != 0) && (iVar1 = FUN_142b7ac10(param_2,auStack_38), iVar1 != 0)) &&
      (iVar1 = FUN_142b7af50(auStack_38,*(undefined2 *)(*param_1 + 0x10)), iVar1 != 0)) &&
     (iVar1 = FUN_142b7a730(param_2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142c640e0 name=FUN_142c640e0 */

void FUN_142c640e0(longlong param_1,longlong param_2,undefined2 param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uStack_40;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  FUN_142b78260(auStack_38,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48));
  uVar1 = FUN_142afbfd0(param_1);
  lVar2 = FUN_142992c50(param_1 + 8);
  if ((*(byte *)(lVar2 + 0xee) >> 3 & 1) == 0) {
    uStack_40 = FUN_142b3c6b0();
  }
  else {
    lVar2 = FUN_142992c50(param_1 + 8);
    uStack_40 = (uint)(*(byte *)(lVar2 + 0xee) >> 4 & 1);
  }
  lVar2 = FUN_142992c50(param_1 + 8);
  puVar4 = auStack_38;
  puVar5 = auStack_28;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_142b85210(auStack_28,uStack_40 != 0,uVar1,param_3,*(undefined4 *)(lVar2 + 0xe8));
  return;
}


/* address=142c64200 name=FUN_142c64200 */

undefined FUN_142c64200(longlong **param_1,undefined *param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined uStack_1b8;
  char cStack_1b7;
  undefined auStack_1b0 [8];
  undefined uStack_1a8;
  undefined uStack_1a7;
  undefined uStack_1a6;
  undefined uStack_1a5;
  undefined uStack_1a4;
  undefined uStack_1a3;
  longlong *plStack_1a0;
  undefined4 uStack_198;
  ulonglong uStack_190;
  byte *pbStack_188;
  undefined8 uStack_180;
  undefined auStack_178 [8];
  longlong lStack_170;
  undefined *puStack_168;
  undefined auStack_160 [56];
  undefined auStack_128 [16];
  undefined auStack_118 [48];
  undefined auStack_e8 [48];
  undefined auStack_b8 [16];
  undefined auStack_a8 [48];
  undefined auStack_78 [48];
  undefined auStack_48 [56];
  
  plStack_1a0 = *param_1;
  if (((*(byte *)(param_1 + 0xc4) >> 4 & 1) == 0) ||
     (uVar3 = FUN_14298a8f0(plStack_1a0), (uVar3 & 0x4000) != 0)) {
    *param_2 = 0;
    return 1;
  }
  uVar5 = FUN_142992c50(param_1 + 0xbc);
  FUN_142af1f60(plStack_1a0,uVar5);
  lVar6 = FUN_142992c50(plStack_1a0 + 0xe);
  if (0x10 < *(byte *)(lVar6 + 0x1c)) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x8e);
  }
  uStack_190 = 0;
  do {
    lVar6 = FUN_142992c50(plStack_1a0 + 0xe);
    if (*(byte *)(lVar6 + 0x1c) <= uStack_190) {
      *param_2 = 1;
      return 1;
    }
    uVar5 = FUN_142992c50(param_1 + 0xbc);
    uVar5 = FUN_142af14d0(auStack_178,uVar5,2);
    FUN_142992e50(auStack_1b0,uVar5);
    FUN_1429932e0(auStack_178);
    cVar1 = FUN_142993030(auStack_1b0);
    if (cVar1 == '\0') {
      uStack_1a8 = 0;
      FUN_1429932e0(auStack_1b0);
      return uStack_1a8;
    }
    lVar6 = FUN_142992c50(auStack_1b0);
    iVar4 = FUN_142b3b560(lVar6 + 0x170,4);
    if (iVar4 == 0) {
      uStack_1a7 = 0;
      FUN_1429932e0(auStack_1b0);
      return uStack_1a7;
    }
    lVar6 = FUN_142992c50(auStack_1b0);
    pbStack_188 = (byte *)(lVar6 + 0x1a8);
    *pbStack_188 = *pbStack_188 | 8;
    if ((*(byte *)((longlong)plStack_1a0 + 0xa4) >> 2 & 1) == 0) {
LAB_142c64416:
      uStack_198 = 0;
    }
    else {
      if (plStack_1a0[0x13] != 0) {
        lVar6 = FUN_142992c50(plStack_1a0 + 1);
        cVar1 = FUN_142992f70(lVar6 + 0xb0);
        if (cVar1 != '\0') goto LAB_142c64416;
      }
      uStack_198 = 1;
    }
    cStack_1b7 = (char)uStack_198;
    if ((char)uStack_198 != '\0') {
      if (plStack_1a0[0x13] == 0) {
        uStack_180 = 0x3800;
      }
      else {
        uStack_180 = 0xffffffff;
      }
      lVar6 = FUN_142992c50(auStack_1b0);
      *(undefined4 *)(lVar6 + 0x174) = (undefined4)uStack_180;
    }
    if (0xff < uStack_190) {
      FID_conflict__assert((wchar_t *)"i",(wchar_t *)"D",0xa5);
    }
    uStack_1b8 = (undefined)uStack_190;
    FUN_142994a40(auStack_160);
    uVar5 = FUN_142992cb0(auStack_160);
    lStack_170 = *plStack_1a0;
    cVar1 = (**(code **)(lStack_170 + 0x58))(plStack_1a0,uVar5,auStack_118,4);
    if (cVar1 == '\0') {
LAB_142c64617:
      uStack_1a6 = 0;
      FUN_142994a70(auStack_160);
      FUN_1429932e0(auStack_1b0);
      return uStack_1a6;
    }
    lVar6 = FUN_142992c50(auStack_1b0);
    iVar4 = FUN_142b7afe0(auStack_118,*(undefined4 *)(lVar6 + 0xb4));
    if (iVar4 == 0) goto LAB_142c64617;
    lVar6 = FUN_142992c50(auStack_1b0);
    iVar4 = FUN_142b7afe0(auStack_118,*(undefined4 *)(lVar6 + 0x170));
    if ((((iVar4 == 0) || (iVar4 = FUN_142b7abe0(auStack_118,auStack_a8), iVar4 == 0)) ||
        (iVar4 = FUN_142b7ad30(auStack_a8,&uStack_1b8,1), iVar4 == 0)) ||
       (iVar4 = FUN_142b7ac10(auStack_118,auStack_78), iVar4 == 0)) goto LAB_142c64617;
    puStack_168 = auStack_b8;
    puVar7 = (undefined *)FUN_142b87690(puStack_168,&uStack_1b8);
    puVar8 = auStack_128;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar5 = FUN_142992c50(auStack_1b0);
    cVar1 = FUN_142c60690(uVar5,auStack_128);
    if (cVar1 == '\0') goto LAB_142c64617;
    uVar5 = FUN_142992c50(auStack_1b0);
    cVar1 = FUN_142af0840(param_1,auStack_78,uVar5);
    if (cVar1 == '\0') goto LAB_142c64617;
    iVar4 = FUN_142b7ac10(auStack_118,auStack_e8);
    if (iVar4 == 0) goto LAB_142c64617;
    if (cStack_1b7 != '\0') {
      iVar4 = FUN_142b7af50(auStack_e8,0x2a);
      if ((iVar4 == 0) || (iVar4 = FUN_142b7ac10(auStack_e8,auStack_48), iVar4 == 0)) {
LAB_142c646a7:
        uStack_1a5 = 0;
        FUN_142994a70(auStack_160);
        FUN_1429932e0(auStack_1b0);
        return uStack_1a5;
      }
      lVar6 = FUN_142992c50(auStack_1b0);
      iVar4 = FUN_142b7afe0(auStack_48,*(undefined4 *)(lVar6 + 0x174));
      if ((iVar4 == 0) || (iVar4 = FUN_142b7a730(auStack_e8), iVar4 == 0)) goto LAB_142c646a7;
    }
    uVar2 = FUN_142b8aa30(param_1,5);
    iVar4 = FUN_142b7af50(auStack_e8,uVar2);
    if ((iVar4 == 0) || (iVar4 = FUN_142b7af50(auStack_e8,0), iVar4 == 0)) {
      uStack_1a4 = 0;
      FUN_142994a70(auStack_160);
      FUN_1429932e0(auStack_1b0);
      return uStack_1a4;
    }
    uVar5 = FUN_142992cb0(auStack_160);
    cVar1 = FUN_142b8aaa0(plStack_1a0,uVar5);
    if (cVar1 == '\0') {
      uStack_1a3 = 0;
      FUN_142994a70(auStack_160);
      FUN_1429932e0(auStack_1b0);
      return uStack_1a3;
    }
    FUN_142994a70(auStack_160);
    FUN_1429932e0(auStack_1b0);
    uStack_190 = uStack_190 + 1;
  } while( true );
}


/* address=142c649d0 name=FUN_142c649d0 */

void FUN_142c649d0(undefined8 *param_1,undefined *param_2,undefined8 param_3,int *param_4,
                  char *param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_148 [32];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined auStack_108 [8];
  uint uStack_100;
  undefined auStack_fc [4];
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined auStack_c0 [16];
  undefined auStack_b0 [24];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  ulonglong auStack_38 [2];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_148;
  uStack_c8 = *param_1;
  FUN_142c68700(param_3,0);
  cVar1 = FUN_142ba02c0(param_7,auStack_c0,0x29);
  *param_5 = cVar1;
  if (*param_5 != '\0') {
    cVar1 = FUN_142ba02c0(param_7,auStack_68,0x2d);
    if (cVar1 == '\0') {
      *param_2 = 0x6d;
      uStack_128 = (undefined *)CONCAT44(uStack_128._4_4_,0x118);
      FUN_142afa690(0x10,0,0xa4,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                   );
    }
    else {
      puStack_118 = auStack_c0;
      uStack_120 = param_7;
      uStack_128 = param_2;
      cVar1 = FUN_142b9f240(param_1,auStack_b0,auStack_78,&uStack_100);
      if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0xc4) >> 4 & 1) != 0)) {
        FUN_142994b40(auStack_108);
        puStack_d0 = auStack_58;
        puVar2 = (undefined *)FUN_142992f00(puStack_d0);
        puVar5 = auStack_98;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar2 = (undefined *)FUN_142af39c0(auStack_b0,auStack_48);
        puVar5 = auStack_88;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        uStack_128 = auStack_98;
        iStack_f8 = FUN_142ba17e0(param_1,auStack_108,auStack_fc,auStack_88);
        iStack_f4 = iStack_f8;
        if (iStack_f8 == 0) {
          FUN_142992c50(auStack_108);
          cVar1 = FUN_142af0fa0(param_1);
          if ((cVar1 == '\0') ||
             (lVar4 = FUN_142992c50(auStack_108), (*(byte *)(lVar4 + 0x1a8) >> 3 & 1) == 0)) {
            uStack_e8 = 2;
            FUN_1429932e0(auStack_108);
          }
          else {
            lVar4 = FUN_142992c50(auStack_108);
            uStack_100 = (uStack_100 - *(int *)(lVar4 + 0x170)) / 1000;
            FUN_1429910e0(uStack_c8,auStack_38);
            lVar4 = FUN_142992c50(auStack_108);
            if (auStack_38[0] < *(ulonglong *)(lVar4 + 0xc0)) {
              FID_conflict__assert((wchar_t *)"n",(wchar_t *)"D",0x147);
            }
            lVar4 = FUN_142992c50(auStack_108);
            uStack_d8 = auStack_38[0] - *(longlong *)(lVar4 + 0xc0);
            if (uStack_d8 < 0x80000000) {
              *param_4 = uStack_100 - (int)uStack_d8;
              uVar3 = FUN_142992c50(auStack_108);
              cVar1 = FUN_142c60940(param_1,uVar3,param_6,auStack_78);
              if (cVar1 == '\0') {
                *param_2 = 0x33;
                uStack_e0 = 3;
                FUN_1429932e0(auStack_108);
              }
              else {
                uVar3 = FUN_142992cb0(auStack_108);
                FUN_1429950b0(param_3,uVar3);
                uStack_dc = 0;
                FUN_1429932e0(auStack_108);
              }
            }
            else {
              uStack_e4 = 2;
              FUN_1429932e0(auStack_108);
            }
          }
        }
        else if (iStack_f8 == 3) {
          *param_2 = 0x50;
          iStack_f0 = iStack_f8;
          FUN_1429932e0(auStack_108);
        }
        else {
          iStack_ec = iStack_f8;
          FUN_1429932e0(auStack_108);
        }
      }
    }
  }
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_148);
  return;
}


/* address=142c64e00 name=FUN_142c64e00 */

undefined8 FUN_142c64e00(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((*(byte *)(param_1 + 0x1a8) >> 5 & 1) == 0) {
    uVar5 = 1;
  }
  else {
    cVar1 = FUN_142992f70(param_1 + 0x1b0);
    if (cVar1 == '\0') {
      lVar3 = FUN_142992f60(param_2 + 0xb0);
      lVar4 = FUN_142992f60(param_1 + 0x1b0);
      if (lVar3 == lVar4) {
        uVar5 = FUN_142992f60(param_1 + 0x1b0);
        uVar6 = FUN_142992c50(param_1 + 0x1b0);
        uVar7 = FUN_142992c50(param_2 + 0xb0);
        iVar2 = FUN_142b0ec70(uVar7,uVar6,uVar5);
        if (iVar2 == 0) {
          return 1;
        }
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


/* address=142c68700 name=FUN_142c68700 */

undefined8 FUN_142c68700(undefined8 param_1)

{
  FUN_142993320(param_1,0);
  return param_1;
}


/* address=142c68730 name=FUN_142c68730 */

undefined4 FUN_142c68730(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  undefined4 uStack_28;
  
  if ((param_3 < param_1 + param_2) && (param_1 < param_3 + param_4)) {
    uStack_28 = 1;
  }
  else {
    uStack_28 = 0;
  }
  return uStack_28;
}


/* address=142c687b0 name=FUN_142c687b0 */

ulonglong FUN_142c687b0(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=142c687d0 name=FUN_142c687d0 */

undefined8 FUN_142c687d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c68820 name=FUN_142c68820 */

void FUN_142c68820(undefined8 param_1)

{
  undefined8 auStack_18 [3];
  
  FUN_142c687d0(auStack_18,param_1,8);
  FUN_142c687b0(auStack_18[0]);
  return;
}


/* address=142c68860 name=FUN_142c68860 */

void FUN_142c68860(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  auStackX_10[0] = FUN_142c687b0(param_2);
  FUN_142c687d0(param_1,auStackX_10,8);
  return;
}


/* address=142c688a0 name=FUN_142c688a0 */

void FUN_142c688a0(longlong param_1,char *param_2,undefined8 param_3,longlong *param_4,
                  undefined *param_5,undefined8 param_6)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined auStack_188 [32];
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  char cStack_148;
  undefined uStack_147;
  ushort auStack_144 [2];
  short sStack_140;
  uint uStack_13c;
  uint uStack_138;
  undefined8 uStack_130;
  uint uStack_128;
  undefined auStack_120 [16];
  undefined *puStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined *puStack_e8;
  undefined auStack_e0 [16];
  undefined auStack_d0 [24];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [8];
  ulonglong uStack_20;
  
  uStack_20 = DAT_143cf7840 ^ (ulonglong)auStack_188;
  *param_4 = 0;
  if ((*(int *)(*(longlong *)(param_1 + 0x30) + 0xac) != 1) &&
     (cVar1 = FUN_142992f70(param_6), cVar1 == '\0')) {
    puStack_110 = auStack_68;
    puVar4 = (undefined *)FUN_142994db0(puStack_110,param_6);
    puVar8 = auStack_b8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_142994db0(auStack_120,auStack_b8);
    iVar3 = FUN_142b784f0(auStack_120,&cStack_148);
    if ((((iVar3 == 0) || (iVar3 = FUN_142b78540(auStack_120,auStack_144), iVar3 == 0)) ||
        (iVar3 = FUN_142b78810(auStack_120,auStack_28,8), iVar3 == 0)) ||
       ((iVar3 = FUN_142b788a0(auStack_120,auStack_e0), iVar3 == 0 ||
        (uVar5 = FUN_142b782f0(auStack_e0), 0x4140 < uVar5)))) {
      lVar7 = FUN_142992f60(param_6);
      *param_4 = lVar7;
    }
    else {
      uVar6 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
      cVar1 = FUN_142b84f90(uVar6);
      if (cVar1 == '\0') {
        uStack_128 = (uint)auStack_144[0];
        uVar6 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
        uVar2 = FUN_142b83c80(uVar6);
        uStack_147 = uStack_128 == uVar2;
        uStack_138 = (uint)(byte)uStack_147;
      }
      else {
        uStack_147 = (int)(uint)auStack_144[0] >> 8 == 0xfe;
        uStack_13c = (uint)(byte)uStack_147;
      }
      if ((bool)uStack_147 == false) {
        lVar7 = FUN_142992f60(param_6);
        *param_4 = lVar7;
      }
      else {
        uVar6 = FUN_1429937e0(param_6,auStack_58,0,0xd);
        FUN_142994db0(auStack_d0,uVar6);
        puVar4 = auStack_d0;
        puVar8 = auStack_a8;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_1429906b0(param_1,0,0x100,auStack_a8);
        uStack_130 = FUN_142c68820(auStack_28);
        sStack_140 = (short)((ulonglong)uStack_130 >> 0x30);
        if ((sStack_140 == *(short *)(*(longlong *)(param_1 + 0x38) + 2)) &&
           (cVar1 = FUN_142c69360(*(longlong *)(param_1 + 0x38) + 8,uStack_130), cVar1 == '\0')) {
          uStack_100 = FUN_142b782f0(auStack_e0);
          uVar6 = FUN_142b782d0(auStack_e0);
          puVar4 = (undefined *)FUN_142992fc0(auStack_48,uVar6,uStack_100);
          puVar8 = auStack_98;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar4 = auStack_d0;
          puVar8 = auStack_88;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          uVar6 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x108);
          puStack_158 = auStack_98;
          puStack_160 = auStack_88;
          uStack_168 = uStack_130;
          cVar1 = FUN_142b83f30(uVar6,param_3,cStack_148,auStack_144[0]);
          if (cVar1 == '\0') {
            FUN_142afa330();
            lStack_f8 = FUN_142992f60(param_6);
            lVar7 = FUN_142b782f0(auStack_120);
            *param_4 = lStack_f8 - lVar7;
          }
          else {
            lStack_f0 = FUN_142992f60(param_6);
            lVar7 = FUN_142b782f0(auStack_120);
            *param_4 = lStack_f0 - lVar7;
            uVar5 = FUN_142992f60(param_3);
            if (uVar5 < 0x4001) {
              FUN_142c69400(*(longlong *)(param_1 + 0x38) + 8,uStack_130);
              if (cStack_148 == '\x15') {
                puStack_e8 = auStack_38;
                puVar4 = (undefined *)FUN_142994db0(puStack_e8,param_3);
                puVar8 = auStack_78;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar8 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar8 = puVar8 + 1;
                }
                FUN_142c62a00(param_1,param_5,auStack_78);
              }
              else {
                *(undefined *)(*(longlong *)(param_1 + 0x30) + 0xd3) = 0;
                *param_2 = cStack_148;
              }
            }
            else {
              uStack_168 = CONCAT44(uStack_168._4_4_,0xf0);
              FUN_142afa690(0x10,0,0x88,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                           );
              *param_5 = 0x16;
            }
          }
        }
        else {
          lStack_108 = FUN_142992f60(param_6);
          lVar7 = FUN_142b782f0(auStack_120);
          *param_4 = lStack_108 - lVar7;
        }
      }
    }
  }
  FUN_142c6a7d0(uStack_20 ^ (ulonglong)auStack_188);
  return;
}


/* address=142c68e30 name=FUN_142c68e30 */

longlong FUN_142c68e30(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_142c694e0(param_1,param_2);
  lVar2 = FUN_142b83d60(uVar1);
  return lVar2 + 0xd;
}


/* address=142c68e70 name=FUN_142c68e70 */

longlong FUN_142c68e70(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_142c694e0(param_1,param_2);
  lVar2 = FUN_142b83d20(uVar1);
  return lVar2 + 0xd;
}


/* address=142c68eb0 name=FUN_142c68eb0 */

undefined8
FUN_142c68eb0(longlong param_1,undefined *param_2,longlong *param_3,ulonglong param_4,
             undefined param_5,undefined *param_6,undefined8 param_7,int param_8)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uStack_84;
  ulonglong *puStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  longlong lStack_58;
  undefined auStack_50 [16];
  undefined8 uStack_40;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  uStack_68 = FUN_142c68e70(param_1,param_8);
  iVar3 = FUN_142c68730(param_6,param_7,param_2,param_4);
  if ((iVar3 == 0) || ((uStack_68 <= param_4 && (param_2 + uStack_68 == param_6)))) {
    uStack_84 = *(ushort *)(*(longlong *)(param_1 + 0x38) + 4);
    uStack_70 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
    puStack_80 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 8);
    if (param_8 == 0) {
      if (*(short *)(*(longlong *)(param_1 + 0x38) + 4) == 0) {
        FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x127);
      }
      uStack_84 = *(short *)(*(longlong *)(param_1 + 0x38) + 4) - 1;
      uStack_70 = FUN_142992c50(*(longlong *)(param_1 + 0x38) + 0x28);
      puStack_80 = (ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    if (param_4 < 0xd) {
      FUN_142afa690(0x10,0,0x79,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                    ,0x12e);
      uVar4 = 0;
    }
    else {
      *param_2 = param_5;
      uVar4 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar2 = FUN_142b83c80(uVar4);
      param_2[1] = (char)((ushort)uVar2 >> 8);
      param_2[2] = (char)uVar2;
      uStack_40 = 0xffffffffffff;
      if (*puStack_80 + 1 < 0x1000000000000) {
        uStack_60 = (ulonglong)uStack_84 << 0x30 | *puStack_80;
        FUN_142c68860(param_2 + 3,uStack_60);
        cVar1 = FUN_142b83e60(uStack_70,&lStack_78,param_7,0);
        if (cVar1 == '\0') {
          FUN_142afa690(0x10,0,200,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                        ,0x144);
          uVar4 = 0;
        }
        else {
          param_2[0xb] = (char)((ulonglong)lStack_78 >> 8);
          param_2[0xc] = (char)lStack_78;
          FUN_142992fc0(auStack_50,param_2,0xd);
          puVar6 = auStack_50;
          puVar7 = auStack_38;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          cVar1 = FUN_142b844b0(uStack_70,param_2 + 0xd,&lStack_58,param_4 - 0xd,param_5,uVar2,
                                uStack_60,auStack_38,param_6,param_7);
          if (cVar1 == '\0') {
            uVar4 = 0;
          }
          else {
            if (lStack_78 != lStack_58) {
              FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x151);
            }
            *puStack_80 = *puStack_80 + 1;
            *param_3 = lStack_78 + 0xd;
            puVar6 = auStack_50;
            puVar7 = auStack_28;
            for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            FUN_1429906b0(param_1,1,0x100,auStack_28);
            uVar4 = 1;
          }
        }
      }
      else {
        FUN_142afa690(0x10,0,0x45,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                      ,0x13b);
        uVar4 = 0;
      }
    }
  }
  else {
    FUN_142afa690(0x10,0,0xbd,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                  ,0x11e);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=142c69360 name=FUN_142c69360 */

ulonglong FUN_142c69360(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  byte bStack_28;
  
  if (param_1[1] < param_2) {
    uVar1 = param_1[1] & 0xffffffffffffff00;
  }
  else {
    if ((param_1[1] - param_2 < 0x40) &&
       ((*param_1 & 1L << ((byte)(param_1[1] - param_2) & 0x3f)) == 0)) {
      bStack_28 = 0;
    }
    else {
      bStack_28 = 1;
    }
    uVar1 = (ulonglong)bStack_28;
  }
  return uVar1;
}


/* address=142c69400 name=FUN_142c69400 */

void FUN_142c69400(ulonglong *param_1,ulonglong param_2)

{
  if (param_1[1] < param_2) {
    if (param_2 - param_1[1] < 0x40) {
      *param_1 = *param_1 << ((byte)(param_2 - param_1[1]) & 0x3f);
    }
    else {
      *param_1 = 0;
    }
    param_1[1] = param_2;
  }
  if (param_1[1] - param_2 < 0x40) {
    *param_1 = *param_1 | 1L << ((byte)(param_1[1] - param_2) & 0x3f);
  }
  return;
}


/* address=142c694e0 name=FUN_142c694e0 */

void FUN_142c694e0(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(short *)(*(longlong *)(param_1 + 0x38) + 4) == 0) {
      FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x107);
    }
    FUN_142992c50(*(longlong *)(param_1 + 0x38) + 0x28);
  }
  else {
    FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x110);
  }
  return;
}


/* address=142c69580 name=FUN_142c69580 */

void FUN_142c69580(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined auStack_58 [32];
  ulonglong uStack_38;
  uint uStack_30;
  ulonglong uStack_28;
  uint uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  iVar1 = FUN_142989500(param_1);
  if ((iVar1 != 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) != 0 ||
      (*(int *)(*(longlong *)(param_1 + 0x38) + 0x128) != 0)))) {
    FUN_1429910e0(param_1,&uStack_28);
    if ((*(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x120) < uStack_28) ||
       ((*(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x120) == uStack_28 &&
        (*(uint *)(*(longlong *)(param_1 + 0x38) + 0x128) <= uStack_20)))) {
      FUN_142c69840(param_2,0,8);
    }
    else {
      FUN_142c697f0(&uStack_38,*(longlong *)(param_1 + 0x38) + 0x120,0x10);
      uStack_38 = uStack_38 - uStack_28;
      if (uStack_30 < uStack_20) {
        uStack_30 = (uStack_30 + 1000000) - uStack_20;
        uStack_38 = uStack_38 - 1;
      }
      else {
        uStack_30 = uStack_30 - uStack_20;
      }
      if ((uStack_38 == 0) && (uStack_30 < 15000)) {
        FUN_142c69840(&uStack_38,0,0x10);
      }
      if (uStack_38 < 0x80000000) {
        *param_2 = (undefined4)uStack_38;
      }
      else {
        FID_conflict__assert(L"0",(wchar_t *)"D",0xee);
        *param_2 = 0x7fffffff;
      }
      param_2[1] = uStack_30;
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=142c697f0 name=FUN_142c697f0 */

undefined8 FUN_142c697f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c69840 name=FUN_142c69840 */

undefined8 FUN_142c69840(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c69880 name=FUN_142c69880 */

byte * FUN_142c69880(byte *param_1)

{
  *param_1 = *param_1 & 0xfe;
  *param_1 = *param_1 & 0xfd;
  *param_1 = *param_1 & 0xfb;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_142993420(param_1 + 8);
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_142994b40(param_1 + 0x28);
  FUN_142b8ac20(param_1 + 0x30,8,7,FUN_142994b40);
  FUN_142b8ac20(param_1 + 0x68,0x18,7,&LAB_142c69ea0);
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  return param_1;
}


/* address=142c699e0 name=FUN_142c699e0 */

void FUN_142c699e0(longlong param_1)

{
  FUN_142b8ac80(param_1 + 0x68,0x18,7,FUN_142b80ab0);
  FUN_142b8ac80(param_1 + 0x30,8,7,FUN_142bae4c0);
  FUN_142af5bd0(param_1 + 0x28);
  return;
}


/* address=142c69a50 name=FUN_142c69a50 */

ulonglong FUN_142c69a50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *(int *)(*(longlong *)(param_1 + 0x38) + 0x11c) =
       *(int *)(*(longlong *)(param_1 + 0x38) + 0x11c) + 1;
  if (2 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x11c)) {
    uVar1 = FUN_14298a8f0(param_1);
    if ((uVar1 & 0x1000) == 0) {
      uVar3 = FUN_142992c50(param_1 + 0x20);
      uVar1 = FUN_142b6c240(uVar3,0x2f,0,0);
      if ((-1 < (int)uVar1) && ((int)uVar1 < 0x40000001)) {
        uVar2 = FUN_142bac240();
        if (uVar2 <= uVar1) {
          *(uint *)(*(longlong *)(param_1 + 0x38) + 0x118) = uVar1;
        }
      }
    }
  }
  if (*(uint *)(*(longlong *)(param_1 + 0x38) + 0x11c) < 0xd) {
    uVar4 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x38) >> 8),1);
  }
  else {
    uVar4 = FUN_142afa690(0x10,0,0xc6,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_lib.cc"
                          ,0xb7);
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}


/* address=142c69b40 name=FUN_142c69b40 */

void FUN_142c69b40(longlong param_1)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) == 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x38) + 0x128) == 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x130) = *(undefined4 *)(param_1 + 0x50);
  }
  FUN_1429910e0(param_1);
  *(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x120) =
       (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x130) / 1000 +
       *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120);
  *(uint *)(*(longlong *)(param_1 + 0x38) + 0x128) =
       (*(uint *)(*(longlong *)(param_1 + 0x38) + 0x130) % 1000) * 1000 +
       *(int *)(*(longlong *)(param_1 + 0x38) + 0x128);
  if (999999 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x128)) {
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) =
         *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) + 1;
    *(int *)(*(longlong *)(param_1 + 0x38) + 0x128) =
         *(int *)(*(longlong *)(param_1 + 0x38) + 0x128) + -1000000;
  }
  return;
}


/* address=142c69ca0 name=FUN_142c69ca0 */

void FUN_142c69ca0(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x11c) = 0;
  FUN_142c69840(*(longlong *)(param_1 + 0x38) + 0x120,0,0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x130) = *(undefined4 *)(param_1 + 0x50);
  return;
}


/* address=142c69d00 name=FUN_142c69d00 */

undefined4 FUN_142c69d00(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_18;
  int iStack_14;
  
  iVar1 = FUN_142c69580(param_1,&iStack_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if ((iStack_18 < 1) && (iStack_14 < 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142c69e50 name=FUN_142c69e50 */

void FUN_142c69e50(longlong param_1)

{
  *(int *)(*(longlong *)(param_1 + 0x38) + 0x130) =
       *(int *)(*(longlong *)(param_1 + 0x38) + 0x130) << 1;
  if (60000 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x130)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x130) = 60000;
  }
  return;
}


/* address=142c69ee0 name=FUN_142c69ee0 */

undefined8 FUN_142c69ee0(undefined8 param_1,uint param_2)

{
  FUN_142c699e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_142cacf70(param_1,0x138);
  }
  return param_1;
}


/* address=142c69f20 name=FUN_142c69f20 */

void FUN_142c69f20(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142992cb0(param_1);
    FUN_142c6a020(uVar1,*param_1);
  }
  return;
}


/* address=142c69f60 name=FUN_142c69f60 */

undefined8 FUN_142c69f60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_18 [24];
  
  uVar1 = FUN_142c69fd0();
  uVar1 = FUN_142992e20(auStack_18,uVar1);
  FUN_142992e50(param_1,uVar1);
  FUN_142c69f20(auStack_18);
  return param_1;
}


/* address=142c69fa0 name=FUN_142c69fa0 */

void FUN_142c69fa0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_142c69ee0(param_1,0);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142c69fd0 name=FUN_142c69fd0 */

undefined8 FUN_142c69fd0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142b0e970(0x138);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142992bb0(0x138,lVar1);
    uVar2 = FUN_142c69880(uVar2);
  }
  return uVar2;
}


/* address=142c6a020 name=FUN_142c6a020 */

void FUN_142c6a020(undefined8 param_1,undefined8 param_2)

{
  FUN_142c6a040(param_2);
  return;
}


/* address=142c6a040 name=FUN_142c6a040 */

void FUN_142c6a040(undefined8 param_1)

{
  FUN_142c69fa0(param_1);
  return;
}


/* address=142c6a060 name=thunk_FUN_142c6a070 */

undefined (*) [32]
thunk_FUN_142c6a070(undefined (*param_1) [32],undefined (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined auVar6 [16];
  undefined in_YMM0 [32];
  undefined auVar7 [16];
  undefined auVar8 [32];
  undefined auVar9 [32];
  undefined auVar10 [32];
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_143cf77fc & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_143cf77fc & 4) != 0)) {
      puVar2 = *param_1;
      auVar7 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar6[0] = -((*param_1)[0] == auVar7[0]);
        auVar6[1] = -((*param_1)[1] == auVar7[1]);
        auVar6[2] = -((*param_1)[2] == auVar7[2]);
        auVar6[3] = -((*param_1)[3] == auVar7[3]);
        auVar6[4] = -((*param_1)[4] == auVar7[4]);
        auVar6[5] = -((*param_1)[5] == auVar7[5]);
        auVar6[6] = -((*param_1)[6] == auVar7[6]);
        auVar6[7] = -((*param_1)[7] == auVar7[7]);
        auVar6[8] = -((*param_1)[8] == auVar7[8]);
        auVar6[9] = -((*param_1)[9] == auVar7[9]);
        auVar6[10] = -((*param_1)[10] == auVar7[10]);
        auVar6[11] = -((*param_1)[0xb] == auVar7[11]);
        auVar6[12] = -((*param_1)[0xc] == auVar7[12]);
        auVar6[13] = -((*param_1)[0xd] == auVar7[13]);
        auVar6[14] = -((*param_1)[0xe] == auVar7[14]);
        auVar6[15] = -((*param_1)[0xf] == auVar7[15]);
        uVar1 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[15] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar3 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          return (undefined (*) [32])(*param_1 + uVar3);
        }
        param_1 = (undefined (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined (*) [32])(puVar2 + (uVar5 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar2 = *param_1;
    auVar7 = vmovd_avx((int)(char)param_3);
    auVar6 = vpxor_avx(in_YMM0._0_16_,in_YMM0._0_16_);
    auVar7 = vpshufb_avx(auVar7,auVar6);
    auVar10 = vinsertf128_avx(ZEXT1632(auVar7),auVar7,1);
    do {
      auVar8 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar3 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar8 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar8 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar8 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar8 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar8 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar8 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar8[31] >> 7) << 0x1f;
      if (uVar3 != 0) goto LAB_142c6a111;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined (*) [32])(puVar2 + (uVar5 & 0xffffffffffffffe0)));
    uVar4 = (uint)uVar5 & 0x1c;
    if ((uVar5 & 0x1c) != 0) {
      auVar9 = vmovdqu_avx(*(undefined (*) [32])(&DAT_1432c9990 + -(ulonglong)uVar4));
      auVar8 = vpmaskmovd_avx2(auVar9,*param_1);
      auVar10 = vpcmpeqb_avx2(auVar8,auVar10);
      auVar10 = vpand_avx2(auVar10,auVar9);
      uVar3 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar10[31] >> 7) << 0x1f
      ;
      if (uVar3 != 0) {
LAB_142c6a111:
        uVar4 = 0;
        for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        return (undefined (*) [32])(*param_1 + uVar4);
      }
      param_1 = (undefined (*) [32])(*param_1 + uVar4);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}


/* address=142c6a070 name=FUN_142c6a070 */

undefined (*) [32] FUN_142c6a070(undefined (*param_1) [32],undefined (*param_2) [32],byte param_3)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined auVar6 [16];
  undefined in_YMM0 [32];
  undefined auVar7 [16];
  undefined auVar8 [32];
  undefined auVar9 [32];
  undefined auVar10 [32];
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_143cf77fc & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_143cf77fc & 4) != 0)) {
      puVar2 = *param_1;
      auVar7 = pshufb(ZEXT116(param_3),ZEXT816(0));
      do {
        auVar6[0] = -((*param_1)[0] == auVar7[0]);
        auVar6[1] = -((*param_1)[1] == auVar7[1]);
        auVar6[2] = -((*param_1)[2] == auVar7[2]);
        auVar6[3] = -((*param_1)[3] == auVar7[3]);
        auVar6[4] = -((*param_1)[4] == auVar7[4]);
        auVar6[5] = -((*param_1)[5] == auVar7[5]);
        auVar6[6] = -((*param_1)[6] == auVar7[6]);
        auVar6[7] = -((*param_1)[7] == auVar7[7]);
        auVar6[8] = -((*param_1)[8] == auVar7[8]);
        auVar6[9] = -((*param_1)[9] == auVar7[9]);
        auVar6[10] = -((*param_1)[10] == auVar7[10]);
        auVar6[11] = -((*param_1)[0xb] == auVar7[11]);
        auVar6[12] = -((*param_1)[0xc] == auVar7[12]);
        auVar6[13] = -((*param_1)[0xd] == auVar7[13]);
        auVar6[14] = -((*param_1)[0xe] == auVar7[14]);
        auVar6[15] = -((*param_1)[0xf] == auVar7[15]);
        uVar1 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[15] >> 7) << 0xf;
        if (uVar1 != 0) {
          uVar3 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          return (undefined (*) [32])(*param_1 + uVar3);
        }
        param_1 = (undefined (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined (*) [32])(puVar2 + (uVar5 & 0xfffffffffffffff0)));
    }
  }
  else {
    puVar2 = *param_1;
    auVar7 = vmovd_avx((int)(char)param_3);
    auVar6 = vpxor_avx(in_YMM0._0_16_,in_YMM0._0_16_);
    auVar7 = vpshufb_avx(auVar7,auVar6);
    auVar10 = vinsertf128_avx(ZEXT1632(auVar7),auVar7,1);
    do {
      auVar8 = vpcmpeqb_avx2(auVar10,*param_1);
      uVar3 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar8 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar8 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar8 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar8 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar8 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar8 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar8[31] >> 7) << 0x1f;
      if (uVar3 != 0) goto LAB_142c6a111;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined (*) [32])(puVar2 + (uVar5 & 0xffffffffffffffe0)));
    uVar4 = (uint)uVar5 & 0x1c;
    if ((uVar5 & 0x1c) != 0) {
      auVar9 = vmovdqu_avx(*(undefined (*) [32])(&DAT_1432c9990 + -(ulonglong)uVar4));
      auVar8 = vpmaskmovd_avx2(auVar9,*param_1);
      auVar10 = vpcmpeqb_avx2(auVar8,auVar10);
      auVar10 = vpand_avx2(auVar10,auVar9);
      uVar3 = (uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
              (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
              (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
              (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
              (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
              (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
              (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar10 >> 0x7f,0) << 0xf
              | (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
              (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar10 >> 199,0) & 1) << 0x18
              | (uint)(SUB321(auVar10 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar10 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar10 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar10 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar10 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar10 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar10[31] >> 7) << 0x1f
      ;
      if (uVar3 != 0) {
LAB_142c6a111:
        uVar4 = 0;
        for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        return (undefined (*) [32])(*param_1 + uVar4);
      }
      param_1 = (undefined (*) [32])(*param_1 + uVar4);
    }
  }
  for (; (param_1 != param_2 && ((*param_1)[0] != param_3));
      param_1 = (undefined (*) [32])(*param_1 + 1)) {
  }
  return param_1;
}


/* address=142c6a164 name=thunk_FUN_142cacf70 */

void thunk_FUN_142cacf70(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_143d04c10,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_142c9fe98(DVar3);
    puVar1 = (undefined4 *)FUN_142c9fe28();
    *puVar1 = uVar4;
  }
  return;
}


/* address=142c6a198 name=FUN_142c6a198 */

void FUN_142c6a198(ulonglong param_1,longlong param_2,uint *param_3)

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
  FUN_142c6a7d0(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}


/* address=142c6a230 name=__chkstk */

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
  undefined auStackX_8 [32];
  
  puVar1 = auStackX_8 + -(longlong)in_RAX;
  if (auStackX_8 < in_RAX) {
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


/* address=142c6a280 name=FUN_142c6a280 */

/* WARNING: Removing unreachable block (ram,0x000142c6a371) */
/* WARNING: Removing unreachable block (ram,0x000142c6a361) */
/* WARNING: Removing unreachable block (ram,0x000142c6a33c) */
/* WARNING: Removing unreachable block (ram,0x000142c6a2ba) */
/* WARNING: Removing unreachable block (ram,0x000142c6a298) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142c6a280(void)

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
    DAT_143cf7800 = 0x8000;
    DAT_143cf7808 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_143d04008 = DAT_143d04008 | 1;
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
      DAT_143d04008 = DAT_143d04008 | 2;
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
  DAT_143cf77f8 = 1;
  DAT_143cf77fc = 2;
  uVar7 = DAT_143cf77f0 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_143cf77f8 = 2;
    DAT_143cf77fc = 6;
    uVar7 = DAT_143cf77f0 & 0xffffffffffffffee;
  }
  DAT_143cf77f0 = uVar7;
  if ((uVar5 >> 0x1b & 1) != 0) {
    if (((uVar5 >> 0x1c & 1) != 0) && (bVar6 = (byte)in_XCR0, (bVar6 & 6) == 6)) {
      DAT_143cf77f8 = 3;
      uVar7 = DAT_143cf77f0;
      uVar5 = DAT_143cf77fc | 8;
      if ((uVar8 & 0x20) != 0) {
        DAT_143cf77f8 = 5;
        uVar7 = DAT_143cf77f0 & 0xfffffffffffffffd;
        uVar5 = DAT_143cf77fc | 0x28;
        if (((uVar8 & 0xd0030000) == 0xd0030000) && ((bVar6 & 0xe0) == 0xe0)) {
          DAT_143cf77fc = DAT_143cf77fc | 0x68;
          DAT_143cf77f8 = 6;
          uVar7 = DAT_143cf77f0 & 0xffffffffffffffd9;
          uVar5 = DAT_143cf77fc;
        }
      }
      DAT_143cf77fc = uVar5;
      DAT_143cf77f0 = uVar7;
      if ((uVar9 >> 0x17 & 1) != 0) {
        DAT_143cf77f0 = DAT_143cf77f0 & 0xfffffffffeffffff;
      }
      if (((uVar10 >> 0x13 & 1) != 0) && ((bVar6 & 0xe0) == 0xe0)) {
        _DAT_143d04004 = (uint)uVar11 & 0x400ff;
        DAT_143cf77f0 = ~((ulonglong)((uint)(uVar11 >> 0x10) & 6) | 0x1000029) & DAT_143cf77f0;
        if (1 < (byte)_DAT_143d04004) {
          DAT_143cf77f0 = DAT_143cf77f0 & 0xffffffffffffffbf;
        }
      }
    }
    if (((uVar10 >> 0x15 & 1) != 0) && ((in_XCR0 >> 0x13 & 1) != 0)) {
      DAT_143cf77f0 = DAT_143cf77f0 & 0xffffffffffffff7f;
    }
  }
  return 0;
}


/* address=142c6a518 name=FUN_142c6a518 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6a518(undefined4 param_1)

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
  *(undefined8 *)(puVar3 + -8) = 0x142c6a543;
  FUN_142c6a6a0(&DAT_143d040b0);
  _DAT_143d04020 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_143d04148 = puVar3 + 0x30;
  _DAT_143d04010 = 0xc0000409;
  _DAT_143d04014 = 1;
  _DAT_143d04028 = 1;
  DAT_143d04030 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x142c6a5af;
  DAT_143d041a8 = _DAT_143d04020;
  __raise_securityfailure(&PTR_DAT_1432c99c0);
  return;
}


/* address=142c6a5b8 name=FUN_142c6a5b8 */

void FUN_142c6a5b8(void)

{
  FUN_142c6a518(8);
  return;
}


/* address=142c6a5cc name=FUN_142c6a5cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6a5cc(void)

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
  *(undefined8 *)(puVar3 + -8) = 0x142c6a5f7;
  FUN_142c6a710(&DAT_143d040b0);
  _DAT_143d04020 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_143d04148 = puVar3 + 0x40;
  _DAT_143d04130 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_143d04010 = 0xc0000409;
  _DAT_143d04014 = 1;
  _DAT_143d04028 = 1;
  DAT_143d04030 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_143cf7840;
  *(undefined8 *)(puVar3 + 0x28) = DAT_143cf7880;
  *(undefined8 *)(puVar3 + -8) = 0x142c6a699;
  DAT_143d041a8 = _DAT_143d04020;
  __raise_securityfailure(&PTR_DAT_1432c99c0);
  return;
}


/* address=142c6a6a0 name=FUN_142c6a6a0 */

void FUN_142c6a6a0(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 DStackX_8;
  ulonglong uStackX_10;
  PVOID pvStackX_18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&DStackX_8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,DStackX_8,ControlPc,FunctionEntry,param_1,&pvStackX_18,&uStackX_10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}


/* address=142c6a710 name=FUN_142c6a710 */

void FUN_142c6a710(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 DStackX_8;
  ulonglong uStackX_10;
  PVOID apvStackX_18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&DStackX_8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,DStackX_8,ControlPc,FunctionEntry,param_1,apvStackX_18,&uStackX_10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}


/* address=142c6a784 name=__raise_securityfailure */

/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000142c6a7b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}


/* address=142c6a7d0 name=FUN_142c6a7d0 */

void FUN_142c6a7d0(longlong param_1)

{
  if ((param_1 == DAT_143cf7840) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_142c6a5cc(param_1);
  return;
}


/* address=142c6a7f0 name=atexit */

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


/* address=142c6a808 name=_onexit */

/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_143d045a0 == -1) {
    iVar1 = FUN_142c9fad8();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_143d045a0);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}


/* address=142c6a844 name=FUN_142c6a844 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142c6a844(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0x5a4d;
  if (s_MZ_140000000 == (char  [2])0x5a4d) {
    lVar3 = (longlong)_DAT_14000003c;
    if ((*(int *)("MZ" + lVar3) == 0x4550) &&
       (uVar1 = 0x20b, *(short *)(&UNK_140000018 + lVar3) == 0x20b)) {
      lVar4 = (ulonglong)*(ushort *)(&UNK_140000014 + lVar3) + 0x18 + (longlong)("MZ" + lVar3);
      uVar1 = (ulonglong)*(ushort *)(&UNK_140000006 + lVar3);
      lVar3 = lVar4 + uVar1 * 0x28;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
        if (((ulonglong)*(uint *)(lVar4 + 0xc) <= param_1 - 0x140000000U) &&
           (uVar1 = (ulonglong)(*(int *)(lVar4 + 8) + *(uint *)(lVar4 + 0xc)),
           param_1 - 0x140000000U < uVar1)) goto LAB_142c6a8ba;
      }
      lVar4 = 0;
LAB_142c6a8ba:
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


/* address=142c6a8dc name=__scrt_acquire_startup_lock */

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
LAB_142c6a90a:
    uVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x30) + 8);
    do {
      lVar4 = 0;
      LOCK();
      bVar6 = DAT_143d04590 == 0;
      lVar2 = lVar1;
      if (!bVar6) {
        lVar4 = DAT_143d04590;
        lVar2 = DAT_143d04590;
      }
      DAT_143d04590 = lVar2;
      UNLOCK();
      if (bVar6) goto LAB_142c6a90a;
    } while (lVar1 != lVar4);
    uVar5 = 1;
  }
  return uVar5;
}


/* address=142c6a918 name=__scrt_release_startup_lock */

/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Library: Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_143d04590 = 0;
    UNLOCK();
  }
  return;
}


/* address=142c6a93c name=FUN_142c6a93c */

undefined FUN_142c6a93c(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_143d04598 = 1;
  }
  FUN_142c6a280();
  cVar1 = __vcrt_initialize();
  if (cVar1 != '\0') {
    cVar1 = FUN_142c942cc();
    if (cVar1 != '\0') {
      return 1;
    }
    __vcrt_uninitialize(0);
  }
  return 0;
}


/* address=142c6a978 name=__scrt_uninitialize_crt */

/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined __scrt_uninitialize_crt(undefined param_1,char param_2)

{
  if ((DAT_143d04598 == '\0') || (param_2 == '\0')) {
    __acrt_uninitialize();
    __vcrt_uninitialize(param_1);
  }
  return 1;
}


/* address=142c6a9a4 name=__scrt_initialize_onexit_tables */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_143d04599 == '\0') {
    if (1 < param_1) {
      FUN_142c8d464(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = __scrt_is_ucrt_dll_in_use();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_143d045a0._0_4_ = _DAT_143042990;
      DAT_143d045a0._4_4_ = _UNK_143042994;
      uRam0000000143d045a8 = _UNK_143042998;
      uRam0000000143d045ac = _UNK_14304299c;
      _DAT_143d045b0 = 0xffffffffffffffff;
      _DAT_143d045b8 = _DAT_143042990;
      uRam0000000143d045bc = _UNK_143042994;
      uRam0000000143d045c0 = _UNK_143042998;
      uRam0000000143d045c4 = _UNK_14304299c;
      _DAT_143d045c8 = 0xffffffffffffffff;
    }
    else {
      iVar2 = _initialize_onexit_table(&DAT_143d045a0);
      if ((iVar2 != 0) || (iVar2 = _initialize_onexit_table(&DAT_143d045b8), iVar2 != 0)) {
        return 0;
      }
    }
    DAT_143d04599 = '\x01';
  }
  return 1;
}


/* address=142c6adf0 name=FUN_142c6adf0 */

int FUN_142c6adf0(longlong param_1,undefined param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_30;
  undefined auStack_28 [16];
  undefined auStack_18 [24];
  
  lVar3 = *(longlong *)(param_1 + 0x30) + 0x68;
  uVar4 = FUN_142992f60(param_3);
  if (0x4000 < uVar4) {
    FID_conflict__assert((wchar_t *)"i",(wchar_t *)"D",0xde);
  }
  cVar1 = FUN_142993760(lVar3);
  if (cVar1 == '\0') {
    FID_conflict__assert((wchar_t *)"b",(wchar_t *)"D",0xe2);
  }
  uVar4 = FUN_142992f60(param_3);
  if (uVar4 < 0x4001) {
    lVar5 = FUN_142992f60(param_3);
    lVar6 = FUN_142c61ac0(param_1);
    uVar7 = FUN_142c626f0(param_1);
    cVar1 = FUN_142b87b90(lVar3,uVar7,lVar5 + lVar6);
    if (cVar1 != '\0') {
      uVar7 = FUN_142992f60(param_3);
      uVar8 = FUN_142992c50(param_3);
      uVar9 = FUN_142babae0(lVar3,auStack_28);
      uVar9 = FUN_142992f60(uVar9);
      uVar10 = FUN_142babae0(lVar3,auStack_18);
      uVar10 = FUN_142992c50(uVar10);
      cVar1 = FUN_142c68eb0(param_1,uVar10,&uStack_30,uVar9,param_2,uVar8,uVar7,param_4);
      if (cVar1 != '\0') {
        FUN_142b87d20(lVar3,uStack_30);
        iVar2 = FUN_142b880a0(param_1);
        if (iVar2 < 1) {
          return iVar2;
        }
        return 1;
      }
    }
    FUN_142b87b20(lVar3);
  }
  else {
    FUN_142afa690(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_pkt.cc"
                  ,0xe5);
  }
  return -1;
}


/* address=142c6b1d0 name=FUN_142c6b1d0 */

void FUN_142c6b1d0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = (uint *)FUN_142c6bc30(param_1);
  uVar1 = FUN_142c6bbb0(param_2);
  uVar2 = FUN_142c6bbb0(param_2 + 4);
  uVar3 = FUN_142c6bbb0(param_2 + 8);
  uVar4 = FUN_142c6bbb0(param_2 + 0xc);
  *puVar5 = uVar1 & 0x3ffffff;
  puVar5[1] = (uVar1 >> 0x1a | uVar2 << 6) & 0x3ffff03;
  puVar5[2] = (uVar2 >> 0x14 | uVar3 << 0xc) & 0x3ffc0ff;
  puVar5[3] = (uVar3 >> 0xe | uVar4 << 0x12) & 0x3f03fff;
  puVar5[4] = uVar4 >> 8 & 0xfffff;
  puVar5[5] = puVar5[1] * 5;
  puVar5[6] = puVar5[2] * 5;
  puVar5[7] = puVar5[3] * 5;
  puVar5[8] = puVar5[4] * 5;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  FUN_142c6bb60(puVar5 + 0x14,param_2 + 0x10,0x10);
  return;
}


/* address=142c6b3b0 name=FUN_142c6b3b0 */

void FUN_142c6b3b0(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lStackX_10;
  ulonglong uStackX_18;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  lVar1 = FUN_142c6bc30(param_1);
  if (param_3 != 0) {
    lStackX_10 = param_2;
    uStackX_18 = param_3;
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      uStack_30 = 0x10 - *(longlong *)(lVar1 + 0x48);
      if (param_3 < uStack_30) {
        uStack_30 = param_3;
      }
      for (uStack_28 = 0; uStack_28 < uStack_30; uStack_28 = uStack_28 + 1) {
        *(undefined *)(lVar1 + 0x38 + *(longlong *)(lVar1 + 0x48) + uStack_28) =
             *(undefined *)(param_2 + uStack_28);
      }
      *(ulonglong *)(lVar1 + 0x48) = *(longlong *)(lVar1 + 0x48) + uStack_30;
      uStackX_18 = param_3 - uStack_30;
      lStackX_10 = param_2 + uStack_30;
      if (*(longlong *)(lVar1 + 0x48) == 0x10) {
        FUN_142c6bc60(lVar1,lVar1 + 0x38,0x10);
        *(undefined8 *)(lVar1 + 0x48) = 0;
      }
    }
    if (0xf < uStackX_18) {
      FUN_142c6bc60(lVar1,lStackX_10,uStackX_18 & 0xfffffffffffffff0);
      lStackX_10 = lStackX_10 + (uStackX_18 & 0xfffffffffffffff0);
      uStackX_18 = uStackX_18 & 0xf;
    }
    if (uStackX_18 != 0) {
      for (uStack_20 = 0; uStack_20 < uStackX_18; uStack_20 = uStack_20 + 1) {
        *(undefined *)(lVar1 + uStack_20 + 0x38) = *(undefined *)(lStackX_10 + uStack_20);
      }
      *(ulonglong *)(lVar1 + 0x48) = uStackX_18;
    }
  }
  return;
}


/* address=142c6b5a0 name=FUN_142c6b5a0 */

void FUN_142c6b5a0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar11 = FUN_142c6bc30(param_1);
  if (*(longlong *)(lVar11 + 0x48) != 0) {
    FUN_142c6bc60(lVar11,lVar11 + 0x38,*(undefined8 *)(lVar11 + 0x48));
  }
  uVar1 = *(uint *)(lVar11 + 0x24);
  *(uint *)(lVar11 + 0x24) = *(uint *)(lVar11 + 0x24) & 0x3ffffff;
  *(uint *)(lVar11 + 0x28) = *(int *)(lVar11 + 0x28) + (uVar1 >> 0x1a);
  uVar1 = *(uint *)(lVar11 + 0x28);
  *(uint *)(lVar11 + 0x28) = *(uint *)(lVar11 + 0x28) & 0x3ffffff;
  *(uint *)(lVar11 + 0x2c) = *(int *)(lVar11 + 0x2c) + (uVar1 >> 0x1a);
  uVar1 = *(uint *)(lVar11 + 0x2c);
  *(uint *)(lVar11 + 0x2c) = *(uint *)(lVar11 + 0x2c) & 0x3ffffff;
  *(uint *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + (uVar1 >> 0x1a);
  uVar1 = *(uint *)(lVar11 + 0x30);
  *(uint *)(lVar11 + 0x30) = *(uint *)(lVar11 + 0x30) & 0x3ffffff;
  *(uint *)(lVar11 + 0x34) = *(int *)(lVar11 + 0x34) + (uVar1 >> 0x1a);
  uVar1 = *(uint *)(lVar11 + 0x34);
  *(uint *)(lVar11 + 0x34) = *(uint *)(lVar11 + 0x34) & 0x3ffffff;
  *(uint *)(lVar11 + 0x24) = (uVar1 >> 0x1a) * 5 + *(int *)(lVar11 + 0x24);
  uVar5 = *(int *)(lVar11 + 0x24) + 5;
  uVar6 = *(int *)(lVar11 + 0x28) + (uVar5 >> 0x1a);
  uVar7 = *(int *)(lVar11 + 0x2c) + (uVar6 >> 0x1a);
  uVar8 = *(int *)(lVar11 + 0x30) + (uVar7 >> 0x1a);
  uVar1 = *(int *)(lVar11 + 0x34) + -0x4000000 + (uVar8 >> 0x1a);
  uVar9 = 0xffffffff - ((int)uVar1 >> 0x1f);
  uVar10 = ~uVar9;
  *(uint *)(lVar11 + 0x24) = *(uint *)(lVar11 + 0x24) & uVar10 | uVar5 & 0x3ffffff & uVar9;
  *(uint *)(lVar11 + 0x28) = *(uint *)(lVar11 + 0x28) & uVar10 | uVar6 & 0x3ffffff & uVar9;
  *(uint *)(lVar11 + 0x2c) = *(uint *)(lVar11 + 0x2c) & uVar10 | uVar7 & 0x3ffffff & uVar9;
  *(uint *)(lVar11 + 0x30) = *(uint *)(lVar11 + 0x30) & uVar10 | uVar8 & 0x3ffffff & uVar9;
  *(uint *)(lVar11 + 0x34) = *(uint *)(lVar11 + 0x34) & uVar10 | uVar1 & uVar9;
  iVar2 = *(int *)(lVar11 + 0x28);
  uVar1 = *(uint *)(lVar11 + 0x24);
  uVar5 = FUN_142c6bbb0(lVar11 + 0x50);
  uVar12 = (ulonglong)(uVar1 | iVar2 << 0x1a) + (ulonglong)uVar5;
  uVar1 = *(uint *)(lVar11 + 0x28);
  iVar2 = *(int *)(lVar11 + 0x2c);
  uVar7 = FUN_142c6bbb0(lVar11 + 0x54);
  uVar5 = *(uint *)(lVar11 + 0x2c);
  iVar3 = *(int *)(lVar11 + 0x30);
  uVar8 = FUN_142c6bbb0(lVar11 + 0x58);
  uVar6 = *(uint *)(lVar11 + 0x30);
  iVar4 = *(int *)(lVar11 + 0x34);
  uVar9 = FUN_142c6bbb0(lVar11 + 0x5c);
  FUN_142c6bbe0(param_2,uVar12 & 0xffffffff);
  uVar12 = (ulonglong)(uVar1 >> 6 | iVar2 << 0x14) + (ulonglong)uVar7 + (uVar12 >> 0x20);
  FUN_142c6bbe0(param_2 + 4,uVar12 & 0xffffffff);
  uVar12 = (ulonglong)(uVar5 >> 0xc | iVar3 << 0xe) + (ulonglong)uVar8 + (uVar12 >> 0x20);
  FUN_142c6bbe0(param_2 + 8,uVar12 & 0xffffffff);
  FUN_142c6bbe0(param_2 + 0xc,
                (ulonglong)(uVar6 >> 0x12 | iVar4 << 8) + (ulonglong)uVar9 + (uVar12 >> 0x20) &
                0xffffffff);
  return;
}


/* address=142c6baa0 name=FUN_142c6baa0 */

ulonglong FUN_142c6baa0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    FID_conflict__assert((wchar_t *)s_a_143cf7970,(wchar_t *)s_D_143cf7890,0x102);
  }
  uVar1 = param_1 + (-param_1 & param_2 - 1);
  if ((uVar1 & param_2 - 1) != 0) {
    FID_conflict__assert((wchar_t *)s___143cf7ac0,(wchar_t *)s_D_143cf79e0,0x10a);
  }
  return uVar1;
}


/* address=142c6bb60 name=FUN_142c6bb60 */

undefined8 FUN_142c6bb60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c6bbb0 name=FUN_142c6bbb0 */

undefined4 FUN_142c6bbb0(undefined8 param_1)

{
  undefined4 auStack_18 [6];
  
  FUN_142c6bb60(auStack_18,param_1,4);
  return auStack_18[0];
}


/* address=142c6bbe0 name=FUN_142c6bbe0 */

void FUN_142c6bbe0(undefined8 param_1,undefined4 param_2)

{
  undefined4 auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  FUN_142c6bb60(param_1,auStackX_10,4);
  return;
}


/* address=142c6bc10 name=FUN_142c6bc10 */

longlong FUN_142c6bc10(uint param_1,uint param_2)

{
  return (ulonglong)param_1 * (ulonglong)param_2;
}


/* address=142c6bc30 name=FUN_142c6bc30 */

void FUN_142c6bc30(undefined8 param_1)

{
  FUN_142c6baa0(param_1,0x40);
  return;
}


/* address=142c6bc60 name=FUN_142c6bc60 */

void FUN_142c6bc60(undefined4 *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lStackX_10;
  ulonglong uStackX_18;
  undefined auStack_138 [32];
  int iStack_118;
  ulonglong uStack_110;
  uint uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  ulonglong uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  undefined auStack_18 [4];
  undefined auStack_14 [4];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_138;
  lStackX_10 = param_2;
  uStackX_18 = param_3;
  if (0xf < param_3) goto LAB_142c6bc98;
  while (uStackX_18 != 0) {
    for (uStack_110 = 0; uStack_110 < uStackX_18; uStack_110 = uStack_110 + 1) {
      auStack_20[uStack_110] = *(undefined *)(lStackX_10 + uStack_110);
    }
    auStack_20[uStack_110] = 1;
    while (uStack_110 = uStack_110 + 1, uStack_110 < 0x10) {
      uStack_f8 = uStack_110;
      if (0xf < uStack_110) {
        FUN_142c6a5b8();
      }
      auStack_20[uStack_f8] = 0;
    }
    uStackX_18 = 0;
    uStack_108 = FUN_142c6bbb0(auStack_20);
    uStack_104 = FUN_142c6bbb0(auStack_1c);
    uStack_100 = FUN_142c6bbb0(auStack_18);
    uStack_fc = FUN_142c6bbb0(auStack_14);
    param_1[9] = (uStack_108 & 0x3ffffff) + param_1[9];
    param_1[10] = param_1[10] + ((uint)(CONCAT44(uStack_104,uStack_108) >> 0x1a) & 0x3ffffff);
    param_1[0xb] = param_1[0xb] + ((uint)(CONCAT44(uStack_100,uStack_104) >> 0x14) & 0x3ffffff);
    param_1[0xc] = param_1[0xc] + ((uint)(CONCAT44(uStack_fc,uStack_100) >> 0xe) & 0x3ffffff);
    param_1[0xd] = (uStack_fc >> 8) + param_1[0xd];
    while( true ) {
      lStack_f0 = FUN_142c6bc10(param_1[9],*param_1);
      lStack_e8 = FUN_142c6bc10(param_1[10],param_1[8]);
      lStack_e8 = lStack_f0 + lStack_e8;
      lStack_e0 = FUN_142c6bc10(param_1[0xb],param_1[7]);
      lStack_e0 = lStack_e8 + lStack_e0;
      lStack_d8 = FUN_142c6bc10(param_1[0xc],param_1[6]);
      lStack_d8 = lStack_e0 + lStack_d8;
      lVar1 = FUN_142c6bc10(param_1[0xd],param_1[5]);
      uStack_48 = lStack_d8 + lVar1;
      lStack_d0 = FUN_142c6bc10(param_1[9],param_1[1]);
      lStack_c8 = FUN_142c6bc10(param_1[10],*param_1);
      lStack_c8 = lStack_d0 + lStack_c8;
      lStack_c0 = FUN_142c6bc10(param_1[0xb],param_1[8]);
      lStack_c0 = lStack_c8 + lStack_c0;
      lStack_b8 = FUN_142c6bc10(param_1[0xc],param_1[7]);
      lStack_b8 = lStack_c0 + lStack_b8;
      lVar1 = FUN_142c6bc10(param_1[0xd],param_1[6]);
      uStack_40 = lStack_b8 + lVar1;
      lStack_b0 = FUN_142c6bc10(param_1[9],param_1[2]);
      lStack_a8 = FUN_142c6bc10(param_1[10],param_1[1]);
      lStack_a8 = lStack_b0 + lStack_a8;
      lStack_a0 = FUN_142c6bc10(param_1[0xb],*param_1);
      lStack_a0 = lStack_a8 + lStack_a0;
      lStack_98 = FUN_142c6bc10(param_1[0xc],param_1[8]);
      lStack_98 = lStack_a0 + lStack_98;
      lVar1 = FUN_142c6bc10(param_1[0xd],param_1[7]);
      uStack_38 = lStack_98 + lVar1;
      lStack_90 = FUN_142c6bc10(param_1[9],param_1[3]);
      lStack_88 = FUN_142c6bc10(param_1[10],param_1[2]);
      lStack_88 = lStack_90 + lStack_88;
      lStack_80 = FUN_142c6bc10(param_1[0xb],param_1[1]);
      lStack_80 = lStack_88 + lStack_80;
      lStack_78 = FUN_142c6bc10(param_1[0xc],*param_1);
      lStack_78 = lStack_80 + lStack_78;
      lVar1 = FUN_142c6bc10(param_1[0xd],param_1[8]);
      uStack_30 = lStack_78 + lVar1;
      lStack_70 = FUN_142c6bc10(param_1[9],param_1[4]);
      lStack_68 = FUN_142c6bc10(param_1[10],param_1[3]);
      lStack_68 = lStack_70 + lStack_68;
      lStack_60 = FUN_142c6bc10(param_1[0xb],param_1[2]);
      lStack_60 = lStack_68 + lStack_60;
      lStack_58 = FUN_142c6bc10(param_1[0xc],param_1[1]);
      lStack_58 = lStack_60 + lStack_58;
      lVar1 = FUN_142c6bc10(param_1[0xd],*param_1);
      param_1[9] = (uint)uStack_48 & 0x3ffffff;
      uStack_50 = uStack_48 >> 0x1a;
      uStack_40 = uStack_40 + uStack_50;
      param_1[10] = (uint)uStack_40 & 0x3ffffff;
      uStack_38 = (uStack_40 >> 0x1a & 0xffffffff) + uStack_38;
      param_1[0xb] = (uint)uStack_38 & 0x3ffffff;
      uStack_30 = (uStack_38 >> 0x1a & 0xffffffff) + uStack_30;
      param_1[0xc] = (uint)uStack_30 & 0x3ffffff;
      uStack_28 = (uStack_30 >> 0x1a & 0xffffffff) + lStack_58 + lVar1;
      param_1[0xd] = (uint)uStack_28 & 0x3ffffff;
      iStack_118 = (int)(uStack_28 >> 0x1a);
      param_1[9] = iStack_118 * 5 + param_1[9];
      if (uStackX_18 < 0x10) break;
LAB_142c6bc98:
      uStack_108 = FUN_142c6bbb0(lStackX_10);
      uStack_104 = FUN_142c6bbb0(lStackX_10 + 4);
      uStack_100 = FUN_142c6bbb0(lStackX_10 + 8);
      uStack_fc = FUN_142c6bbb0(lStackX_10 + 0xc);
      lStackX_10 = lStackX_10 + 0x10;
      uStackX_18 = uStackX_18 - 0x10;
      param_1[9] = (uStack_108 & 0x3ffffff) + param_1[9];
      param_1[10] = param_1[10] + ((uint)(CONCAT44(uStack_104,uStack_108) >> 0x1a) & 0x3ffffff);
      param_1[0xb] = param_1[0xb] + ((uint)(CONCAT44(uStack_100,uStack_104) >> 0x14) & 0x3ffffff);
      param_1[0xc] = param_1[0xc] + ((uint)(CONCAT44(uStack_fc,uStack_100) >> 0xe) & 0x3ffffff);
      param_1[0xd] = (uStack_fc >> 8 | 0x1000000) + param_1[0xd];
    }
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_138);
  return;
}


/* address=142c6c670 name=FUN_142c6c670 */

void FUN_142c6c670(ulonglong *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar2 = param_2[5];
  uVar1 = *(uint *)param_2;
  uVar10 = uVar2 >> 1;
  param_1[5] = uVar10;
  uVar3 = param_2[4];
  uVar7 = 0xffffffffffffffff - ((longlong)((ulonglong)(uVar1 & 1) - 1) >> 0x3f);
  uVar9 = uVar3 >> 1 | uVar2 << 0x3f;
  param_1[4] = uVar9;
  uVar8 = ~uVar7;
  uVar2 = param_2[3];
  uVar12 = uVar2 >> 1 | uVar3 << 0x3f;
  param_1[3] = uVar12;
  uVar3 = param_2[2];
  uVar11 = uVar3 >> 1 | uVar2 << 0x3f;
  param_1[2] = uVar11;
  uVar2 = param_2[1];
  uVar6 = uVar2 >> 1 | uVar3 << 0x3f;
  param_1[1] = uVar6;
  uVar5 = uVar2 << 0x3f | *param_2 >> 1;
  uVar2 = (ulonglong)
          (0x800000007fffffff < uVar6 ||
          CARRY8(uVar6 + 0x7fffffff80000000,(ulonglong)(0xffffffff7fffffff < uVar5)));
  uVar3 = (ulonglong)(uVar11 != 0 || CARRY8(uVar11 - 1,uVar2));
  uVar4 = (ulonglong)(uVar12 != 0 || CARRY8(uVar12 - 1,uVar3));
  *param_1 = uVar8 & uVar5 | uVar7 & uVar5 + 0x80000000;
  param_1[1] = uVar8 & uVar6 |
               uVar7 & uVar6 + 0x7fffffff80000000 + (ulonglong)(0xffffffff7fffffff < uVar5);
  param_1[2] = uVar8 & uVar11 | uVar7 & (uVar11 - 1) + uVar2;
  param_1[3] = uVar8 & uVar12 | uVar7 & (uVar12 - 1) + uVar3;
  param_1[4] = uVar8 & uVar9 | uVar7 & (uVar9 - 1) + uVar4;
  param_1[5] = uVar8 & uVar10 |
               uVar7 & uVar10 + 0x7fffffffffffffff +
                       (ulonglong)(uVar9 != 0 || CARRY8(uVar9 - 1,uVar4));
  return;
}


/* address=142c6c7f0 name=FUN_142c6c7f0 */

void FUN_142c6c7f0(void)

{
  FUN_14264cd80();
  return;
}


/* address=142c6c820 name=FUN_142c6c820 */

void FUN_142c6c820(void)

{
  FUN_14264cd80();
  return;
}


/* address=142c6c850 name=FUN_142c6c850 */

void FUN_142c6c850(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  
  uStack_70 = 0;
  uStack_108 = 0;
  uVar2 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_d0 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar4 = (ulonglong *)(param_2 + 0x60);
  do {
    uVar2 = uVar2 + 1;
    uVar1 = (longlong)((uVar2 ^ param_3) - 1 & ~(uVar2 ^ param_3)) >> 0x3f;
    uVar3 = ~uVar1;
    uStack_b8 = puVar4[-0xc] & uVar1 | uVar3 & uStack_b8;
    uStack_118 = puVar4[-6] & uVar1 | uVar3 & uStack_118;
    uStack_100 = *puVar4 & uVar1 | uVar3 & uStack_100;
    uStack_b0 = puVar4[-0xb] & uVar1 | uVar3 & uStack_b0;
    uStack_110 = puVar4[-5] & uVar1 | uVar3 & uStack_110;
    uStack_f8 = puVar4[1] & uVar1 | uVar3 & uStack_f8;
    uStack_a8 = puVar4[-10] & uVar1 | uVar3 & uStack_a8;
    uStack_108 = puVar4[-4] & uVar1 | uVar3 & uStack_108;
    uStack_f0 = puVar4[2] & uVar1 | uVar3 & uStack_f0;
    uStack_a0 = puVar4[-9] & uVar1 | uVar3 & uStack_a0;
    uStack_70 = puVar4[-3] & uVar1 | uVar3 & uStack_70;
    uStack_e8 = puVar4[3] & uVar1 | uVar3 & uStack_e8;
    uStack_98 = puVar4[-8] & uVar1 | uVar3 & uStack_98;
    uStack_68 = puVar4[-2] & uVar1 | uVar3 & uStack_68;
    uStack_e0 = puVar4[4] & uVar1 | uVar3 & uStack_e0;
    uStack_90 = puVar4[-7] & uVar1 | uVar3 & uStack_90;
    uStack_60 = puVar4[-1] & uVar1 | uVar3 & uStack_60;
    uStack_d0 = puVar4[5] & uVar1 | uVar3 & uStack_d0;
    puVar4 = puVar4 + 0x12;
  } while (uVar2 < 0x10);
  param_1[2] = uStack_a8;
  param_1[3] = uStack_a0;
  param_1[4] = uStack_98;
  param_1[5] = uStack_90;
  *param_1 = uStack_b8;
  param_1[1] = uStack_b0;
  param_1[6] = uStack_118;
  param_1[7] = uStack_110;
  param_1[8] = uStack_108;
  param_1[9] = uStack_70;
  param_1[10] = uStack_68;
  param_1[0xb] = uStack_60;
  param_1[0xc] = uStack_100;
  param_1[0xd] = uStack_f8;
  param_1[0xe] = uStack_f0;
  param_1[0xf] = uStack_e8;
  param_1[0x10] = uStack_e0;
  param_1[0x11] = uStack_d0;
  return;
}


/* address=142c6cb90 name=FUN_142c6cb90 */

void FUN_142c6cb90(longlong param_1,longlong param_2)

{
  undefined auStack_168 [32];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined auStack_138 [48];
  undefined auStack_108 [48];
  undefined auStack_d8 [48];
  undefined auStack_a8 [48];
  undefined auStack_78 [48];
  ulonglong uStack_48;
  
  uStack_48 = DAT_143cf7840 ^ (ulonglong)auStack_168;
  FUN_142bbab00(auStack_138,param_2 + 0x30,&DAT_14333b0d8,6);
  uStack_140 = 6;
  puStack_148 = &DAT_14333b198;
  FUN_14264cd80(auStack_d8,param_2 + 0x60,param_2 + 0x60,&DAT_14333b0d8);
  uStack_140 = 6;
  puStack_148 = &DAT_14333b198;
  FUN_14264cd80(auStack_138,auStack_138,auStack_138,&DAT_14333b0d8);
  uStack_140 = 6;
  puStack_148 = &DAT_14333b198;
  FUN_14264cd80(param_1 + 0x60,param_2 + 0x60,param_2 + 0x30,&DAT_14333b0d8);
  FUN_142bbab00(param_1 + 0x60,param_1 + 0x60,&DAT_14333b0d8,6);
  puStack_148 = (undefined *)0x6;
  FUN_142bba8f0(auStack_108,param_2,auStack_d8,&DAT_14333b0d8);
  puStack_148 = (undefined *)0x6;
  FUN_142bbaa20(auStack_d8,param_2,auStack_d8,&DAT_14333b0d8);
  uStack_140 = 6;
  puStack_148 = &DAT_14333b198;
  FUN_14264cd80(param_1 + 0x30,auStack_138,auStack_138,&DAT_14333b0d8);
  FUN_142c6c670(param_1 + 0x30,param_1 + 0x30);
  uStack_140 = 6;
  puStack_148 = &DAT_14333b198;
  FUN_14264cd80(auStack_108,auStack_108,auStack_d8,&DAT_14333b0d8);
  puStack_148 = (undefined *)0x6;
  FUN_142bba8f0(auStack_a8,auStack_108,auStack_108,&DAT_14333b0d8);
  puStack_148 = (undefined *)0x6;
  FUN_142bba8f0(auStack_108,auStack_a8,auStack_108,&DAT_14333b0d8);
  uStack_140 = 6;
  puStack_148 = &DAT_14333b198;
  FUN_14264cd80(auStack_138,auStack_138,param_2,&DAT_14333b0d8);
  FUN_142bbab00(auStack_78,auStack_138,&DAT_14333b0d8,6);
  uStack_140 = 6;
  puStack_148 = &DAT_14333b198;
  FUN_14264cd80(param_1,auStack_108,auStack_108,&DAT_14333b0d8);
  puStack_148 = (undefined *)0x6;
  FUN_142bbaa20(param_1,param_1,auStack_78,&DAT_14333b0d8);
  puStack_148 = (undefined *)0x6;
  FUN_142bbaa20(auStack_138,auStack_138,param_1,&DAT_14333b0d8);
  uStack_140 = 6;
  puStack_148 = &DAT_14333b198;
  FUN_14264cd80(auStack_138,auStack_138,auStack_108,&DAT_14333b0d8);
  puStack_148 = (undefined *)0x6;
  FUN_142bbaa20(param_1 + 0x30,auStack_138,param_1 + 0x30,&DAT_14333b0d8);
  FUN_142c6a7d0(uStack_48 ^ (ulonglong)auStack_168);
  return;
}


/* address=142c6ce80 name=FUN_142c6ce80 */

void FUN_142c6ce80(undefined (*param_1) [16],ulonglong *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  undefined auStack_378 [32];
  undefined *puStack_358;
  undefined8 uStack_350;
  ulonglong uStack_348;
  ulonglong uStack_340;
  ulonglong uStack_338;
  ulonglong *puStack_330;
  ulonglong *puStack_328;
  ulonglong uStack_320;
  ulonglong uStack_318;
  ulonglong uStack_310;
  ulonglong uStack_308;
  undefined (*pauStack_300) [16];
  ulonglong uStack_2f8;
  ulonglong uStack_2f0;
  ulonglong uStack_2e8;
  ulonglong uStack_2e0;
  ulonglong uStack_2d8;
  ulonglong uStack_2d0;
  ulonglong uStack_2c8;
  ulonglong uStack_2c0;
  ulonglong uStack_2b8;
  ulonglong uStack_2b0;
  ulonglong uStack_2a8;
  ulonglong uStack_2a0;
  ulonglong uStack_298;
  ulonglong uStack_290;
  ulonglong uStack_288;
  ulonglong uStack_280;
  ulonglong uStack_278;
  ulonglong uStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  undefined auStack_258 [48];
  undefined auStack_228 [48];
  undefined auStack_1f8 [48];
  undefined auStack_1c8 [48];
  undefined auStack_198 [48];
  undefined auStack_168 [48];
  undefined auStack_138 [48];
  undefined auStack_108 [48];
  undefined auStack_d8 [48];
  undefined auStack_a8 [48];
  undefined auStack_78 [48];
  ulonglong uStack_48;
  
  uStack_48 = DAT_143cf7840 ^ (ulonglong)auStack_378;
  puVar25 = param_3 + 0xc;
  puStack_330 = param_3;
  puStack_328 = param_2;
  pauStack_300 = param_1;
  uVar12 = FUN_142bba690(param_2 + 0xc,6);
  uStack_340 = uVar12;
  uVar13 = FUN_142bba690(puVar25,6);
  uStack_350 = 6;
  puStack_358 = &DAT_14333b198;
  uStack_348 = uVar13;
  FUN_14264cd80(auStack_108,puVar25,puVar25,&DAT_14333b0d8);
  uStack_350 = 6;
  puStack_358 = &DAT_14333b198;
  FUN_14264cd80(auStack_d8,param_2 + 0xc,param_2 + 0xc,&DAT_14333b0d8);
  uStack_350 = 6;
  puStack_358 = &DAT_14333b198;
  FUN_14264cd80(auStack_1f8,auStack_108,puVar25,&DAT_14333b0d8);
  uStack_350 = 6;
  puStack_358 = &DAT_14333b198;
  FUN_14264cd80(auStack_258,auStack_d8,param_2 + 0xc,&DAT_14333b0d8);
  uStack_350 = 6;
  puStack_358 = &DAT_14333b198;
  FUN_14264cd80(auStack_1f8,auStack_1f8,param_2 + 6,&DAT_14333b0d8);
  uStack_350 = 6;
  puStack_358 = &DAT_14333b198;
  FUN_14264cd80(auStack_258,auStack_258,param_3 + 6,&DAT_14333b0d8);
  puStack_358 = (undefined *)0x6;
  FUN_142bbaa20(auStack_138,auStack_258,auStack_1f8,&DAT_14333b0d8);
  uStack_350 = 6;
  puStack_358 = &DAT_14333b198;
  FUN_14264cd80(auStack_168,param_2,auStack_108,&DAT_14333b0d8);
  uStack_350 = 6;
  puStack_358 = &DAT_14333b198;
  FUN_14264cd80(auStack_228,param_3,auStack_d8,&DAT_14333b0d8);
  puStack_358 = (undefined *)0x6;
  FUN_142bbaa20(auStack_1c8,auStack_228,auStack_168,&DAT_14333b0d8);
  uVar12 = ~uVar12;
  uStack_338 = uVar12;
  uStack_320 = ~uVar13;
  uVar14 = FUN_142bba710(auStack_168,auStack_228,6);
  if ((~uVar13 & uVar14 & uVar12) == 0) {
    uStack_350 = 6;
    puStack_358 = &DAT_14333b198;
    FUN_14264cd80(auStack_78,auStack_138,auStack_138,&DAT_14333b0d8);
    uStack_350 = 6;
    puStack_358 = &DAT_14333b198;
    FUN_14264cd80(&uStack_288,auStack_1c8,param_2 + 0xc,&DAT_14333b0d8);
    uStack_350 = 6;
    puStack_358 = &DAT_14333b198;
    FUN_14264cd80(auStack_198,auStack_1c8,auStack_1c8,&DAT_14333b0d8);
    uStack_350 = 6;
    puStack_358 = &DAT_14333b198;
    FUN_14264cd80(&uStack_288,&uStack_288,puVar25,&DAT_14333b0d8);
    uStack_350 = 6;
    puStack_358 = &DAT_14333b198;
    FUN_14264cd80(auStack_a8,auStack_198,auStack_1c8,&DAT_14333b0d8);
    uStack_350 = 6;
    puStack_358 = &DAT_14333b198;
    FUN_14264cd80(auStack_228,auStack_168,auStack_198,&DAT_14333b0d8);
    FUN_142bbab00(auStack_198,auStack_228,&DAT_14333b0d8,6);
    puStack_358 = (undefined *)0x6;
    FUN_142bbaa20(&uStack_2b8,auStack_78,auStack_198,&DAT_14333b0d8);
    puStack_358 = (undefined *)0x6;
    FUN_142bbaa20(&uStack_2b8,&uStack_2b8,auStack_a8,&DAT_14333b0d8);
    puStack_358 = (undefined *)0x6;
    FUN_142bbaa20(&uStack_2e8,auStack_228,&uStack_2b8,&DAT_14333b0d8);
    uStack_350 = 6;
    puStack_358 = &DAT_14333b198;
    FUN_14264cd80(auStack_258,auStack_1f8,auStack_a8,&DAT_14333b0d8);
    uStack_350 = 6;
    puStack_358 = &DAT_14333b198;
    FUN_14264cd80(&uStack_2e8,auStack_138,&uStack_2e8,&DAT_14333b0d8);
    puStack_358 = (undefined *)0x6;
    FUN_142bbaa20(&uStack_2e8,&uStack_2e8,auStack_258,&DAT_14333b0d8);
    uVar13 = *puStack_330;
    puVar25 = puStack_330 + 2;
    uVar14 = puStack_330[4] & uStack_340;
    uVar26 = puStack_330[5] & uStack_340;
    uVar19 = puStack_330[7] & uStack_340;
    uVar20 = puStack_330[8] & uStack_340;
    uVar18 = puStack_330[9] & uStack_340;
    uVar24 = puStack_330[10] & uStack_340;
    puVar1 = puStack_330 + 1;
    uVar23 = puStack_330[0xb] & uStack_340;
    puVar2 = puStack_330 + 3;
    uVar16 = puStack_330[6] & uStack_340;
    uVar22 = puStack_330[0xc] & uStack_340;
    uVar21 = puStack_330[0xd] & uStack_340;
    uStack_278 = uStack_278 & uStack_338;
    uVar17 = puStack_330[0xe] & uStack_340;
    uStack_2f8 = puStack_330[0xf] & uStack_340 | uStack_270 & uStack_338;
    uStack_2f0 = puStack_330[0x10] & uStack_340 | uStack_268 & uStack_338;
    puStack_330 = (ulonglong *)(puStack_330[0x11] & uStack_340 | uStack_260 & uStack_338);
    uStack_310 = *puStack_328 & uStack_348 |
                 (uVar13 & uStack_340 | uStack_2b8 & uVar12) & uStack_320;
    uStack_308 = puStack_328[1] & uStack_348 |
                 (*puVar1 & uStack_340 | uStack_2b0 & uVar12) & uStack_320;
    uStack_338 = puStack_328[2] & uStack_348 |
                 (*puVar25 & uStack_340 | uStack_2a8 & uVar12) & uStack_320;
    uStack_340 = puStack_328[3] & uStack_348 |
                 (*puVar2 & uStack_340 | uStack_2a0 & uVar12) & uStack_320;
    puVar25 = (ulonglong *)
              (puStack_328[4] & uStack_348 | (uVar14 | uStack_298 & uVar12) & uStack_320);
    uVar13 = puStack_328[5];
    uVar14 = puStack_328[7];
    uStack_318 = (uStack_2e8 & uVar12 | uVar16) & uStack_320 | uStack_348 & puStack_328[6];
    uVar16 = puStack_328[8];
    uVar3 = puStack_328[9];
    uVar4 = puStack_328[0x10];
    uVar5 = puStack_328[10];
    uVar6 = puStack_328[0xb];
    uVar7 = puStack_328[0xc];
    uVar8 = puStack_328[0xd];
    uVar9 = puStack_328[0xe];
    uVar10 = puStack_328[0xf];
    uVar11 = puStack_328[0x11];
    *(ulonglong *)*pauStack_300 = uStack_310;
    *(ulonglong *)(*pauStack_300 + 8) = uStack_308;
    *(ulonglong *)pauStack_300[1] = uStack_338;
    *(ulonglong *)(pauStack_300[1] + 8) = uStack_340;
    *(ulonglong *)(pauStack_300[2] + 8) =
         uVar13 & uStack_348 | (uVar26 | uStack_290 & uVar12) & uStack_320;
    *(ulonglong **)pauStack_300[2] = puVar25;
    *(ulonglong *)pauStack_300[3] = uStack_318;
    *(ulonglong *)(pauStack_300[3] + 8) =
         uVar14 & uStack_348 | (uVar19 | uStack_2e0 & uVar12) & uStack_320;
    *(ulonglong *)pauStack_300[4] =
         uVar16 & uStack_348 | (uVar20 | uStack_2d8 & uVar12) & uStack_320;
    *(ulonglong *)(pauStack_300[4] + 8) =
         uVar3 & uStack_348 | (uVar18 | uStack_2d0 & uVar12) & uStack_320;
    *(ulonglong *)pauStack_300[5] = uVar5 & uStack_348 | (uVar24 | uStack_2c8 & uVar12) & uStack_320
    ;
    *(ulonglong *)(pauStack_300[5] + 8) =
         uVar6 & uStack_348 | (uVar23 | uStack_2c0 & uVar12) & uStack_320;
    *(ulonglong *)pauStack_300[6] = uVar7 & uStack_348 | (uVar22 | uStack_288 & uVar12) & uStack_320
    ;
    *(ulonglong *)(pauStack_300[6] + 8) =
         uVar8 & uStack_348 | (uVar21 | uStack_280 & uVar12) & uStack_320;
    *(ulonglong *)pauStack_300[7] = uVar9 & uStack_348 | (uVar17 | uStack_278) & uStack_320;
    *(ulonglong *)(pauStack_300[7] + 8) = uVar10 & uStack_348 | uStack_2f8 & uStack_320;
    *(ulonglong *)pauStack_300[8] = uVar4 & uStack_348 | uStack_2f0 & uStack_320;
    *(ulonglong *)(pauStack_300[8] + 8) = uVar11 & uStack_348 | (ulonglong)puStack_330 & uStack_320;
    puStack_328 = puVar25;
  }
  else {
    lVar15 = FUN_142bba710(auStack_1f8,auStack_258,6);
    if (lVar15 == 0) {
      *param_1 = ZEXT816(0);
      param_1[1] = ZEXT816(0);
      param_1[2] = ZEXT816(0);
      *(undefined8 *)param_1[3] = 0;
      *(undefined8 *)(param_1[3] + 8) = 0;
      *(undefined8 *)param_1[4] = 0;
      *(undefined8 *)(param_1[4] + 8) = 0;
      *(undefined8 *)param_1[5] = 0;
      *(undefined8 *)(param_1[5] + 8) = 0;
      *(undefined8 *)param_1[6] = 0;
      *(undefined8 *)(param_1[6] + 8) = 0;
      *(undefined8 *)param_1[7] = 0;
      *(undefined8 *)(param_1[7] + 8) = 0;
      *(undefined8 *)param_1[8] = 0;
      *(undefined8 *)(param_1[8] + 8) = 0;
    }
    else {
      FUN_142c6cb90(param_1,param_2);
    }
  }
  FUN_142c6a7d0(uStack_48 ^ (ulonglong)auStack_378);
  return;
}


/* address=142c6d710 name=FUN_142c6d710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6d710(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined auStack_188 [72];
  undefined auStack_140 [48];
  undefined auStack_110 [8];
  undefined8 uStack_108;
  undefined auStack_100 [8];
  undefined8 uStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_40;
  
  uStack_40 = DAT_143cf7840 ^ (ulonglong)auStack_188;
  uVar2 = (param_2 >> 5) - 1;
  uVar10 = ~uVar2;
  uVar2 = 0x3f - param_2 & uVar10 | uVar2 & param_2;
  FUN_142c6c850(auStack_140,param_3,(uVar2 >> 1) + (ulonglong)((uint)uVar2 & 1));
  uVar3 = FUN_142bba690(auStack_110,6);
  lVar4 = 0xffffffff - (longlong)auStack_110;
  lVar5 = (-uStack_108 - 0x100000000) - (ulonglong)(0xffffffff < (ulonglong)auStack_110);
  uVar2 = (ulonglong)
          (0xffffffff00000000 < uStack_108 ||
          -uStack_108 - 0x100000000 < (ulonglong)(0xffffffff < (ulonglong)auStack_110));
  lVar6 = (-(longlong)auStack_100 - 2U) - uVar2;
  uVar2 = (ulonglong)
          (0xfffffffffffffffe < (ulonglong)auStack_100 || -(longlong)auStack_100 - 2U < uVar2);
  lVar7 = (-uStack_f8 - 1U) - uVar2;
  uVar22 = ~(uint)uVar3 & _DAT_143042990;
  uVar16 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar23 = ~uVar16 & _UNK_143042994;
  uVar24 = ~(uint)uVar3 & _UNK_143042998;
  uVar25 = ~uVar16 & _UNK_14304299c;
  uStack_80._0_4_ = (uint)lVar4;
  uStack_80._4_4_ = (uint)((ulonglong)lVar4 >> 0x20);
  uStack_78._0_4_ = (uint)lVar5;
  uStack_78._4_4_ = (uint)((ulonglong)lVar5 >> 0x20);
  uStack_70._0_4_ = (uint)lVar6;
  uStack_70._4_4_ = (uint)((ulonglong)lVar6 >> 0x20);
  uStack_68._0_4_ = (uint)lVar7;
  uStack_68._4_4_ = (uint)((ulonglong)lVar7 >> 0x20);
  uVar2 = (ulonglong)(-uStack_f8 - 1U < uVar2);
  uVar1 = -CONCAT44(uStack_ec,uStack_f0) - 1;
  lVar8 = uVar1 - uVar2;
  lVar9 = (-1 - CONCAT44(uStack_e4,uStack_e8)) - (ulonglong)(uVar1 < uVar2);
  uStack_60._0_4_ = (uint)lVar8;
  uStack_60._4_4_ = (uint)((ulonglong)lVar8 >> 0x20);
  uStack_58._0_4_ = (uint)lVar9;
  uStack_58._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
  lVar11 = -1 - ((longlong)((ulonglong)((uint)uVar10 & 1) - 1) >> 0x3f);
  uVar16 = (uint)lVar11;
  auVar14._0_4_ = uVar22 & (uint)uStack_80 & uVar16;
  uVar17 = (uint)((ulonglong)lVar11 >> 0x20);
  auVar14._4_4_ = uVar23 & uStack_80._4_4_ & uVar17;
  auVar14._8_4_ = uVar24 & (uint)uStack_78 & uVar16;
  auVar14._12_4_ = uVar25 & uStack_78._4_4_ & uVar17;
  uVar18 = ~uVar16 & _DAT_143042990;
  uVar19 = ~uVar17 & _UNK_143042994;
  uVar20 = ~uVar16 & _UNK_143042998;
  uVar21 = ~uVar17 & _UNK_14304299c;
  auVar15._0_4_ = uVar22 & (uint)uStack_70 & uVar16;
  auVar15._4_4_ = uVar23 & uStack_70._4_4_ & uVar17;
  auVar15._8_4_ = uVar24 & (uint)uStack_68 & uVar16;
  auVar15._12_4_ = uVar25 & uStack_68._4_4_ & uVar17;
  auVar12._0_4_ = uVar18 & auStack_110._0_4_;
  auVar12._4_4_ = uVar19 & auStack_110._4_4_;
  auVar12._8_4_ = uVar20 & (uint)uStack_108;
  auVar12._12_4_ = uVar21 & uStack_108._4_4_;
  _auStack_110 = auVar14 | auVar12;
  auVar13._0_4_ = uVar18 & auStack_100._0_4_;
  auVar13._4_4_ = uVar19 & auStack_100._4_4_;
  auVar13._8_4_ = uVar20 & (uint)uStack_f8;
  auVar13._12_4_ = uVar21 & uStack_f8._4_4_;
  _auStack_100 = auVar15 | auVar13;
  uStack_f0 = uVar22 & (uint)uStack_60 & uVar16 | uVar18 & uStack_f0;
  uStack_ec = uVar23 & uStack_60._4_4_ & uVar17 | uVar19 & uStack_ec;
  uStack_e8 = uVar24 & (uint)uStack_58 & uVar16 | uVar20 & uStack_e8;
  uStack_e4 = uVar25 & uStack_58._4_4_ & uVar17 | uVar21 & uStack_e4;
  uStack_80 = lVar4;
  uStack_78 = lVar5;
  uStack_70 = lVar6;
  uStack_68 = lVar7;
  uStack_60 = lVar8;
  uStack_58 = lVar9;
  FUN_142c6ce80(param_1,param_1,auStack_140);
  FUN_142c6a7d0(uStack_40 ^ (ulonglong)auStack_188);
  return;
}


/* address=142c6d8a0 name=FUN_142c6d8a0 */

void FUN_142c6d8a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined auStack_9b8 [56];
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined auStack_8f0 [144];
  undefined auStack_860 [144];
  undefined auStack_7d0 [144];
  undefined auStack_740 [144];
  undefined auStack_6b0 [144];
  undefined auStack_620 [144];
  undefined auStack_590 [144];
  undefined auStack_500 [144];
  undefined auStack_470 [144];
  undefined auStack_3e0 [144];
  undefined auStack_350 [144];
  undefined auStack_2c0 [144];
  undefined auStack_230 [144];
  undefined auStack_1a0 [144];
  undefined auStack_110 [144];
  byte abStack_80 [47];
  byte bStack_51;
  ulonglong uStack_48;
  
  uStack_48 = DAT_143cf7840 ^ (ulonglong)auStack_9b8;
  FUN_142c8d620(abStack_80,0x31,param_2,6);
  uStack_980 = *param_3;
  uStack_978 = param_3[1];
  uStack_970 = param_3[2];
  uStack_968 = param_3[3];
  uStack_960 = param_3[4];
  uStack_958 = param_3[5];
  uStack_950 = *param_4;
  uStack_948 = param_4[1];
  uStack_940 = param_4[2];
  uStack_938 = param_4[3];
  uStack_930 = param_4[4];
  uStack_928 = param_4[5];
  uStack_920 = 0xffffffff00000001;
  uStack_918 = 0xffffffff;
  uStack_908 = 0;
  uStack_900 = 0;
  uStack_8f8 = DAT_14333b160;
  uStack_910 = 1;
  FUN_142c6cb90(auStack_8f0,&uStack_980);
  FUN_142c6ce80(auStack_860,auStack_8f0,&uStack_980);
  FUN_142c6cb90(auStack_7d0,auStack_8f0);
  FUN_142c6cb90(auStack_6b0,auStack_860);
  FUN_142c6cb90(auStack_590,auStack_7d0);
  FUN_142c6cb90(auStack_350,auStack_6b0);
  FUN_142c6ce80(auStack_740,auStack_7d0,&uStack_980);
  FUN_142c6ce80(auStack_620,auStack_6b0,&uStack_980);
  FUN_142c6ce80(auStack_500,auStack_590,&uStack_980);
  FUN_142c6ce80(auStack_2c0,auStack_350,&uStack_980);
  FUN_142c6cb90(auStack_230,auStack_620);
  FUN_142c6cb90(auStack_470,auStack_740);
  FUN_142c6ce80(auStack_1a0,auStack_230,&uStack_980);
  FUN_142c6ce80(auStack_3e0,auStack_470,&uStack_980);
  FUN_142c6cb90(auStack_110,auStack_590);
  uVar2 = 0x17c;
  FUN_142c6c850(param_1,&uStack_980,(bStack_51 >> 4) + (bStack_51 >> 3 & 1));
  do {
    if (uVar2 != 0x17c) {
      uVar1 = uVar2 - 1 >> 3;
      FUN_142c6d710(param_1,CONCAT11(abStack_80[uVar1 + 1],abStack_80[uVar1]) >>
                            ((byte)(uVar2 - 1) & 7) & 0x3f,&uStack_980);
    }
    uVar2 = uVar2 - 5;
    FUN_142c6cb90(param_1,param_1);
    FUN_142c6cb90(param_1,param_1);
    FUN_142c6cb90(param_1,param_1);
    FUN_142c6cb90(param_1,param_1);
    FUN_142c6cb90(param_1,param_1);
  } while (4 < uVar2);
  FUN_142c6d710(param_1,(abStack_80[0] & 0x1f) * '\x02',&uStack_980);
  FUN_142c6a7d0(uStack_48 ^ (ulonglong)auStack_9b8);
  return;
}


/* address=142c6dbb0 name=FUN_142c6dbb0 */

void FUN_142c6dbb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined auStack_158 [32];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_158;
  uStack_138 = *param_2;
  uStack_130 = param_2[1];
  uStack_128 = param_2[2];
  uStack_120 = param_2[3];
  uStack_118 = param_2[4];
  uStack_110 = param_2[5];
  uStack_108 = param_2[6];
  uStack_100 = param_2[7];
  uStack_f8 = param_2[8];
  uStack_f0 = param_2[9];
  uStack_e8 = param_2[10];
  uStack_e0 = param_2[0xb];
  uStack_d8 = param_2[0xc];
  uStack_d0 = param_2[0xd];
  uStack_c8 = param_2[0xe];
  uStack_c0 = param_2[0xf];
  uStack_b8 = param_2[0x10];
  uStack_b0 = param_2[0x11];
  uStack_a8 = *param_3;
  uStack_a0 = param_3[1];
  uStack_98 = param_3[2];
  uStack_90 = param_3[3];
  uStack_88 = param_3[4];
  uStack_80 = param_3[5];
  uStack_78 = param_3[6];
  uStack_70 = param_3[7];
  uStack_68 = param_3[8];
  uStack_60 = param_3[9];
  uStack_58 = param_3[10];
  uStack_50 = param_3[0xb];
  uStack_48 = param_3[0xc];
  uStack_40 = param_3[0xd];
  uStack_38 = param_3[0xe];
  uStack_30 = param_3[0xf];
  uStack_28 = param_3[0x10];
  uStack_20 = param_3[0x11];
  FUN_142c6ce80(&uStack_138,&uStack_138,&uStack_a8);
  *param_1 = uStack_138;
  param_1[1] = uStack_130;
  param_1[2] = uStack_128;
  param_1[3] = uStack_120;
  param_1[4] = uStack_118;
  param_1[5] = uStack_110;
  param_1[6] = uStack_108;
  param_1[7] = uStack_100;
  param_1[8] = uStack_f8;
  param_1[9] = uStack_f0;
  param_1[10] = uStack_e8;
  param_1[0xb] = uStack_e0;
  param_1[0xc] = uStack_d8;
  param_1[0xd] = uStack_d0;
  param_1[0xe] = uStack_c8;
  param_1[0xf] = uStack_c0;
  param_1[0x10] = uStack_b8;
  param_1[0x11] = uStack_b0;
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_158);
  return;
}


/* address=142c6dde0 name=FUN_142c6dde0 */

void FUN_142c6dde0(undefined8 *param_1)

{
  undefined auStack_148 [72];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_40;
  
  uStack_40 = DAT_143cf7840 ^ (ulonglong)auStack_148;
  FUN_142c6d8a0(&uStack_100);
  *param_1 = uStack_100;
  param_1[1] = uStack_f8;
  param_1[2] = uStack_f0;
  param_1[3] = uStack_e8;
  param_1[4] = uStack_e0;
  param_1[5] = uStack_d8;
  param_1[6] = uStack_d0;
  param_1[7] = uStack_c8;
  param_1[8] = uStack_c0;
  param_1[9] = uStack_b8;
  param_1[10] = uStack_b0;
  param_1[0xb] = uStack_a8;
  param_1[0xc] = uStack_a0;
  param_1[0xd] = uStack_98;
  param_1[0xe] = uStack_90;
  param_1[0xf] = uStack_88;
  param_1[0x10] = uStack_80;
  param_1[0x11] = uStack_78;
  FUN_142c6a7d0(uStack_40 ^ (ulonglong)auStack_148);
  return;
}


/* address=142c6ded0 name=FUN_142c6ded0 */

void FUN_142c6ded0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (DAT_143d03bf0 == 0) {
    FUN_14296e8c0();
    return;
  }
  FUN_14296ee00(param_1,*param_3,param_3,*param_2);
  return;
}


/* address=142c6def0 name=FUN_142c6def0 */

void FUN_142c6def0(undefined8 param_1,undefined8 *param_2)

{
  if (DAT_143d03bf0 == 0) {
    FUN_14296eb80();
    return;
  }
  FUN_14296f0e0(param_1,*param_2,param_2[3]);
  return;
}


/* address=142c6df10 name=FUN_142c6df10 */

undefined8 FUN_142c6df10(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  unkint9 Var1;
  unkint9 Var2;
  unkint9 Var3;
  unkint9 Var4;
  unkint9 Var5;
  unkint9 Var6;
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
  undefined8 uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  ulonglong uVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  ulonglong uVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  ulonglong uVar84;
  ulonglong uVar85;
  
  if (DAT_143d03bf0 != 0) {
    uVar77 = *param_3;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar77;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = *param_2;
    uVar79 = SUB168(auVar7 * auVar40,0);
    uVar80 = SUB168(auVar7 * auVar40,8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar77;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = param_2[1];
    uVar74 = SUB168(auVar8 * auVar41,0);
    uVar81 = SUB168(auVar8 * auVar41,8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar77;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = param_2[2];
    uVar78 = SUB168(auVar9 * auVar42,0);
    uVar82 = SUB168(auVar9 * auVar42,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar77;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = param_2[3];
    uVar75 = SUB168(auVar10 * auVar43,0);
    uVar76 = uVar79 * DAT_143373840;
    uVar77 = (ulonglong)CARRY8(uVar80,uVar74);
    uVar84 = uVar81 + uVar78;
    uVar78 = (ulonglong)(CARRY8(uVar81,uVar78) || CARRY8(uVar84,uVar77));
    uVar81 = uVar82 + uVar75;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar76;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = DAT_143373820;
    Var1 = (unkuint9)uVar79 + (unkuint9)SUB168(auVar11 * auVar44,0) + (unkuint9)0;
    uVar79 = (ulonglong)Var1;
    Var2 = (unkuint9)(uVar80 + uVar74) + (unkuint9)SUB168(auVar11 * auVar44,8) + (unkuint9)0;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar76;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = DAT_143373828;
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar12 * auVar45,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var3 = (unkuint9)(uVar84 + uVar77) + (unkuint9)SUB168(auVar12 * auVar45,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar76;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = DAT_143373830;
    Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar13 * auVar46,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var4 = (unkuint9)(uVar81 + uVar78) + (unkuint9)SUB168(auVar13 * auVar46,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar76;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = DAT_143373838;
    uVar77 = param_3[1];
    Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar14 * auVar47,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var5 = (unkuint9)
           (SUB168(auVar10 * auVar43,8) +
           (ulonglong)(CARRY8(uVar82,uVar75) || CARRY8(uVar81,uVar78))) +
           (unkuint9)SUB168(auVar14 * auVar47,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)uVar79 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar84 = uVar79 + ((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar78 = (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar77;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = *param_2;
    Var1 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar15 * auVar48,0) +
           (unkuint9)CARRY8(uVar84,uVar78);
    uVar81 = (ulonglong)Var1;
    Var2 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar15 * auVar48,8) +
           (unkuint9)(SCARRY8(uVar84,0) != SCARRY8(uVar84,uVar78));
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar77;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = param_2[1];
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar16 * auVar49,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar16 * auVar49,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar77;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = param_2[2];
    Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar17 * auVar50,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar17 * auVar50,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar77;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = param_2[3];
    uVar77 = uVar81 * DAT_143373840;
    Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar18 * auVar51,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var5 = (unkuint9)(uVar84 + uVar78) + (unkuint9)SUB168(auVar18 * auVar51,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)uVar79 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar84 = uVar79 * 2 + (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar78 = (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar77;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = DAT_143373820;
    Var5 = (unkuint9)uVar81 + (unkuint9)SUB168(auVar19 * auVar52,0) +
           (unkuint9)CARRY8(uVar84,uVar78);
    uVar81 = (ulonglong)Var5;
    Var6 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar19 * auVar52,8) +
           (unkuint9)(SCARRY8(uVar84,0) != SCARRY8(uVar84,uVar78));
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar77;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = DAT_143373828;
    Var1 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar20 * auVar53,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar20 * auVar53,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar77;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = DAT_143373830;
    Var2 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar21 * auVar54,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar21 * auVar54,8) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar77;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = DAT_143373838;
    uVar77 = param_3[2];
    Var3 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar22 * auVar55,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar22 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)uVar81 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar84 = uVar84 + uVar78 + uVar81 + (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar78 = (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar77;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = *param_2;
    Var1 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar23 * auVar56,0) +
           (unkuint9)CARRY8(uVar84,uVar78);
    uVar74 = (ulonglong)Var1;
    Var2 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar23 * auVar56,8) +
           (unkuint9)(SCARRY8(uVar84,0) != SCARRY8(uVar84,uVar78));
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar77;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = param_2[1];
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar24 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar24 * auVar57,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar77;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = param_2[2];
    Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar25 * auVar58,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar25 * auVar58,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar77;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = param_2[3];
    uVar77 = uVar74 * DAT_143373840;
    Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar26 * auVar59,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var5 = (unkuint9)(uVar84 + uVar78) + (unkuint9)SUB168(auVar26 * auVar59,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)uVar81 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar84 = uVar81 * 2 + (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar78 = (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar77;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = DAT_143373820;
    Var5 = (unkuint9)uVar74 + (unkuint9)SUB168(auVar27 * auVar60,0) +
           (unkuint9)CARRY8(uVar84,uVar78);
    uVar74 = (ulonglong)Var5;
    Var6 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar27 * auVar60,8) +
           (unkuint9)(SCARRY8(uVar84,0) != SCARRY8(uVar84,uVar78));
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar77;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = DAT_143373828;
    Var1 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar28 * auVar61,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar28 * auVar61,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar77;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = DAT_143373830;
    Var2 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar29 * auVar62,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar29 * auVar62,8) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar77;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = DAT_143373838;
    uVar77 = param_3[3];
    Var3 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar30 * auVar63,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar30 * auVar63,8) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)uVar74 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar81 = uVar84 + uVar78 + uVar74 + (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar78 = (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar77;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = *param_2;
    Var1 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar31 * auVar64,0) +
           (unkuint9)CARRY8(uVar81,uVar78);
    uVar75 = (ulonglong)Var1;
    Var2 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar31 * auVar64,8) +
           (unkuint9)(SCARRY8(uVar81,0) != SCARRY8(uVar81,uVar78));
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar77;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = param_2[1];
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar32 * auVar65,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar32 * auVar65,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar77;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = param_2[2];
    Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar33 * auVar66,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar33 * auVar66,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar77;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = param_2[3];
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar75;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = DAT_143373840;
    uVar84 = SUB168(auVar35 * auVar68,0);
    Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar34 * auVar67,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var5 = (unkuint9)(uVar81 + uVar78) + (unkuint9)SUB168(auVar34 * auVar67,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)uVar74 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar80 = uVar74 * 2 + (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar77 = (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar84;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = DAT_143373820;
    Var5 = (unkuint9)uVar75 + (unkuint9)SUB168(auVar36 * auVar69,0) +
           (unkuint9)CARRY8(uVar80,uVar77);
    uVar82 = (ulonglong)Var5;
    Var6 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar36 * auVar69,8) +
           (unkuint9)(SCARRY8(uVar80,0) != SCARRY8(uVar80,uVar77));
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar84;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = DAT_143373828;
    Var1 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar37 * auVar70,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar83 = (ulonglong)Var1;
    Var2 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar37 * auVar70,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar84;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = DAT_143373830;
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar38 * auVar71,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    uVar85 = (ulonglong)Var1;
    Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar38 * auVar71,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar84;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = DAT_143373838;
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar39 * auVar72,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    uVar76 = (ulonglong)Var1;
    Var2 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar39 * auVar72,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var1 = (unkuint9)(ulonglong)Var2 + (unkuint9)uVar82 +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    uVar79 = (ulonglong)Var1;
    uVar78 = (ulonglong)
             (uVar85 < DAT_143373828 || uVar85 - DAT_143373828 < (ulonglong)(uVar83 < DAT_143373820)
             );
    uVar84 = (ulonglong)(uVar76 < DAT_143373830 || uVar76 - DAT_143373830 < uVar78);
    uVar75 = (uVar79 - DAT_143373838) - uVar84;
    uVar81 = (uVar85 - DAT_143373828) - (ulonglong)(uVar83 < DAT_143373820);
    uVar74 = uVar83 - DAT_143373820;
    uVar78 = (uVar76 - DAT_143373830) - uVar78;
    if (uVar80 + uVar77 + uVar82 + (ulonglong)((char)((unkuint9)Var2 >> 0x40) != '\0') +
        (ulonglong)((char)((unkuint9)Var1 >> 0x40) != '\0') <
        (ulonglong)(uVar79 < DAT_143373838 || uVar79 - DAT_143373838 < uVar84)) {
      uVar75 = uVar79;
      uVar81 = uVar85;
      uVar74 = uVar83;
      uVar78 = uVar76;
    }
    *param_1 = uVar74;
    param_1[1] = uVar81;
    param_1[2] = uVar78;
    param_1[3] = uVar75;
    return SUB168(auVar35 * auVar68,8);
  }
  uVar73 = FUN_14296db60();
  return uVar73;
}


/* address=142c6df30 name=FUN_142c6df30 */

longlong FUN_142c6df30(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  unkint9 Var1;
  unkint9 Var2;
  unkint9 Var3;
  unkint9 Var4;
  unkint9 Var5;
  unkint9 Var6;
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
  longlong lVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  ulonglong uVar70;
  
  if (DAT_143d03bf0 != 0) {
    uVar61 = *param_2;
    uVar64 = param_2[1];
    uVar70 = param_2[2];
    uVar69 = param_2[3];
    do {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar61;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar64;
      uVar63 = SUB168(auVar7 * auVar33,0);
      uVar65 = SUB168(auVar7 * auVar33,8);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar61;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar70;
      uVar60 = SUB168(auVar8 * auVar34,0);
      uVar67 = SUB168(auVar8 * auVar34,8);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar61;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar69;
      uVar62 = SUB168(auVar9 * auVar35,0);
      uVar66 = uVar65 + uVar60;
      uVar60 = (ulonglong)CARRY8(uVar65,uVar60);
      uVar65 = uVar67 + uVar62;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar64;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar70;
      Var1 = (unkuint9)(uVar65 + uVar60) + (unkuint9)SUB168(auVar10 * auVar36,0) + (unkuint9)0;
      uVar68 = (ulonglong)Var1;
      Var3 = (unkuint9)
             (SUB168(auVar9 * auVar35,8) +
             (ulonglong)(CARRY8(uVar67,uVar62) || CARRY8(uVar65,uVar60))) +
             (unkuint9)SUB168(auVar10 * auVar36,8) + (unkuint9)0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar64;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar69;
      Var1 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar11 * auVar37,0) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      uVar65 = (ulonglong)Var1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar70;
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar69;
      Var2 = (unkuint9)uVar63 + (unkuint9)uVar63 + (unkuint9)0;
      Var3 = (unkuint9)
             (SUB168(auVar11 * auVar37,8) + (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0') +
             (ulonglong)((char)((unkuint9)Var1 >> 0x40) != '\0')) +
             (unkuint9)SUB168(auVar12 * auVar38,0) + (unkuint9)0;
      uVar62 = (ulonglong)Var3;
      Var1 = (unkuint9)uVar66 + (unkuint9)uVar66 +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      Var4 = (unkuint9)SUB168(auVar12 * auVar38,8) + (unkuint9)0 +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      uVar63 = (ulonglong)Var4;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar61;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar61;
      uVar60 = SUB168(auVar13 * auVar39,0);
      Var3 = (unkuint9)uVar68 + (unkuint9)uVar68 +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      Var5 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar13 * auVar39,8) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      Var2 = (unkuint9)uVar65 + (unkuint9)uVar65 +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar64;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar64;
      Var4 = (unkuint9)uVar62 + (unkuint9)uVar62 +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      Var6 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar14 * auVar40,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      Var1 = (unkuint9)uVar63 + (unkuint9)uVar63 +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar70;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar70;
      Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar14 * auVar40,8) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var2 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar15 * auVar41,0) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      uVar70 = (ulonglong)Var2;
      Var2 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar15 * auVar41,8) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      uVar63 = (ulonglong)Var2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar69;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar69;
      Var2 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar16 * auVar42,0) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      uVar66 = (ulonglong)Var2;
      uVar67 = (ulonglong)((char)((unkuint9)Var1 >> 0x40) != '\0') + SUB168(auVar16 * auVar42,8) +
               (ulonglong)((char)((unkuint9)Var2 >> 0x40) != '\0');
      uVar61 = uVar60 * DAT_143373840;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar61;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = DAT_143373820;
      Var1 = (unkuint9)uVar60 + (unkuint9)SUB168(auVar17 * auVar43,0) + (unkuint9)0;
      Var4 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar17 * auVar43,8) + (unkuint9)0;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar61;
      auVar44._8_8_ = 0;
      auVar44._0_8_ = DAT_143373828;
      Var2 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar18 * auVar44,0) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      uVar64 = (ulonglong)Var2;
      Var4 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar18 * auVar44,8) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar61;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = DAT_143373830;
      Var2 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar19 * auVar45,0) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      Var4 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar19 * auVar45,8) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar61;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = DAT_143373838;
      Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar20 * auVar46,0) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      Var4 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar20 * auVar46,8) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      Var1 = (unkuint9)(ulonglong)Var4 + (unkuint9)0 +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      uVar61 = uVar64 * DAT_143373840;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar61;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = DAT_143373820;
      Var4 = (unkuint9)uVar64 + (unkuint9)SUB168(auVar21 * auVar47,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      Var2 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar21 * auVar47,8) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar61;
      auVar48._8_8_ = 0;
      auVar48._0_8_ = DAT_143373828;
      Var5 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar22 * auVar48,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar64 = (ulonglong)Var5;
      Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar22 * auVar48,8) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar61;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = DAT_143373830;
      Var3 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar23 * auVar49,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      Var1 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar23 * auVar49,8) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar61;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = DAT_143373838;
      Var5 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar24 * auVar50,0) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      Var1 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar24 * auVar50,8) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      Var4 = (unkuint9)(ulonglong)Var1 + (unkuint9)0 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar61 = uVar64 * DAT_143373840;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar61;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = DAT_143373820;
      Var1 = (unkuint9)uVar64 + (unkuint9)SUB168(auVar25 * auVar51,0) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar25 * auVar51,8) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar61;
      auVar52._8_8_ = 0;
      auVar52._0_8_ = DAT_143373828;
      Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar26 * auVar52,0) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      uVar64 = (ulonglong)Var2;
      Var3 = (unkuint9)(ulonglong)Var5 + (unkuint9)SUB168(auVar26 * auVar52,8) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar61;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = DAT_143373830;
      Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar27 * auVar53,0) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar27 * auVar53,8) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar61;
      auVar54._8_8_ = 0;
      auVar54._0_8_ = DAT_143373838;
      Var3 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar28 * auVar54,0) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      Var4 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar28 * auVar54,8) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      Var1 = (unkuint9)(ulonglong)Var4 + (unkuint9)0 +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      uVar61 = uVar64 * DAT_143373840;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar61;
      auVar55._8_8_ = 0;
      auVar55._0_8_ = DAT_143373820;
      Var4 = (unkuint9)uVar64 + (unkuint9)SUB168(auVar29 * auVar55,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      Var2 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar29 * auVar55,8) +
             (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar61;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = DAT_143373828;
      Var5 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar30 * auVar56,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar64 = (ulonglong)Var5;
      Var2 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar30 * auVar56,8) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar61;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = DAT_143373830;
      Var3 = (unkuint9)(ulonglong)Var2 + (unkuint9)SUB168(auVar31 * auVar57,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      uVar60 = (ulonglong)Var3;
      Var1 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar31 * auVar57,8) +
             (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar61;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = DAT_143373838;
      Var2 = (unkuint9)(ulonglong)Var1 + (unkuint9)SUB168(auVar32 * auVar58,0) +
             (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
      uVar65 = (ulonglong)Var2;
      uVar62 = (longlong)Var4 + SUB168(auVar32 * auVar58,8) +
               (ulonglong)((char)((unkuint9)Var1 >> 0x40) != '\0') +
               (ulonglong)((char)((unkuint9)Var2 >> 0x40) != '\0');
      uVar61 = uVar70 + uVar64;
      uVar70 = (ulonglong)CARRY8(uVar70,uVar64);
      uVar69 = uVar60 + uVar63;
      uVar64 = uVar69 + uVar70;
      uVar69 = (ulonglong)(CARRY8(uVar60,uVar63) || CARRY8(uVar69,uVar70));
      uVar60 = uVar65 + uVar66;
      uVar70 = uVar60 + uVar69;
      uVar60 = (ulonglong)(CARRY8(uVar65,uVar66) || CARRY8(uVar60,uVar69));
      uVar65 = uVar62 + uVar67;
      uVar69 = uVar65 + uVar60;
      uVar60 = (ulonglong)(CARRY8(uVar62,uVar67) || CARRY8(uVar65,uVar60));
      uVar65 = (ulonglong)
               (uVar64 < DAT_143373828 ||
               uVar64 - DAT_143373828 < (ulonglong)(uVar61 < DAT_143373820));
      uVar62 = (ulonglong)(uVar70 < DAT_143373830 || uVar70 - DAT_143373830 < uVar65);
      uVar63 = (ulonglong)(uVar69 < DAT_143373838 || uVar69 - DAT_143373838 < uVar62);
      if (uVar63 <= uVar60) {
        uVar69 = (uVar69 - DAT_143373838) - uVar62;
        uVar64 = (uVar64 - DAT_143373828) - (ulonglong)(uVar61 < DAT_143373820);
        uVar61 = uVar61 - DAT_143373820;
        uVar70 = (uVar70 - DAT_143373830) - uVar65;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    *param_1 = uVar61;
    param_1[1] = uVar64;
    param_1[2] = uVar70;
    param_1[3] = uVar69;
    return uVar60 - uVar63;
  }
  lVar59 = FUN_14296dec0();
  return lVar59;
}


/* address=142c6df50 name=FUN_142c6df50 */

/* WARNING: Type propagation algorithm not settling */

void FUN_142c6df50(undefined8 param_1,uint *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  ulonglong uVar12;
  undefined auVar13 [16];
  undefined *puVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  ulonglong unaff_RBP;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong unaff_R13;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined (*pauVar26) [16];
  undefined (*pauVar27) [16];
  undefined auVar28 [16];
  ulonglong uVar29;
  uint uVar30;
  undefined auVar31 [16];
  uint uVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined8 uStack_278;
  ulonglong uStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  ulonglong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1d8;
  undefined8 uStack_1a8;
  ulonglong uStack_178;
  ulonglong uStack_160;
  undefined auStack_158 [16];
  undefined auStack_148 [16];
  longlong lStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined auStack_108 [16];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (DAT_143d03bf0 == 0) {
    FUN_14296fca0();
    return;
  }
  uStack_f8 = *param_2;
  uStack_f4 = param_2[1];
  uStack_f0 = param_2[2];
  uStack_ec = param_2[3];
  uStack_e8 = param_2[4];
  uStack_e4 = param_2[5];
  uStack_e0 = param_2[6];
  uStack_dc = param_2[7];
  uStack_d8 = param_2[8];
  uStack_d4 = param_2[9];
  uStack_d0 = param_2[10];
  uStack_cc = param_2[0xb];
  uStack_c8 = param_2[0xc];
  uStack_c4 = param_2[0xd];
  uStack_c0 = param_2[0xe];
  uStack_bc = param_2[0xf];
  auStack_b8 = *(undefined (*) [16])(param_2 + 0x10);
  auStack_a8 = *(undefined (*) [16])(param_2 + 0x14);
  auVar33 = auStack_a8 | auStack_b8;
  uStack_98 = *param_3;
  uStack_94 = param_3[1];
  uStack_90 = param_3[2];
  uStack_8c = param_3[3];
  auVar28._4_4_ = auVar33._0_4_;
  auVar28._0_4_ = auVar33._4_4_;
  auVar28._8_4_ = auVar33._12_4_;
  auVar28._12_4_ = auVar33._8_4_;
  uStack_88 = param_3[4];
  uStack_84 = param_3[5];
  uStack_80 = param_3[6];
  uStack_7c = param_3[7];
  uStack_58 = *(undefined8 *)(param_3 + 0x10);
  uStack_50 = *(undefined8 *)(param_3 + 0x12);
  uStack_48 = *(undefined8 *)(param_3 + 0x14);
  uStack_40 = *(undefined8 *)(param_3 + 0x16);
  uStack_78 = (uint)*(undefined8 *)(param_3 + 8);
  uStack_74 = (uint)((ulonglong)*(undefined8 *)(param_3 + 8) >> 0x20);
  uStack_70 = (uint)*(undefined8 *)(param_3 + 10);
  uStack_6c = (uint)((ulonglong)*(undefined8 *)(param_3 + 10) >> 0x20);
  uStack_68 = (uint)*(undefined8 *)(param_3 + 0xc);
  uStack_64 = (uint)((ulonglong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
  uStack_60 = (uint)*(undefined8 *)(param_3 + 0xe);
  uStack_5c = (uint)((ulonglong)*(undefined8 *)(param_3 + 0xe) >> 0x20);
  uVar32 = SUB164(auVar33 | auVar28,0) | SUB164(auVar33 | auVar28,8);
  uVar30 = 0;
  auVar28 = *(undefined (*) [16])(param_3 + 0x14) | *(undefined (*) [16])(param_3 + 0x10);
  uVar25 = FUN_14296f0e0(param_1);
  auVar34._0_4_ = -(uint)(uVar32 == uVar30);
  auVar33._4_4_ = auVar28._0_4_;
  auVar33._0_4_ = auVar28._4_4_;
  auVar33._8_4_ = auVar28._12_4_;
  auVar33._12_4_ = auVar28._8_4_;
  auVar34._4_4_ = auVar34._0_4_;
  auVar34._8_4_ = auVar34._0_4_;
  auVar34._12_4_ = auVar34._0_4_;
  auVar31._0_4_ = -(uint)((SUB164(auVar33 | auVar28,0) | SUB164(auVar33 | auVar28,8)) == 0);
  auVar31._4_4_ = auVar31._0_4_;
  auVar31._8_4_ = auVar31._0_4_;
  auVar31._12_4_ = auVar31._0_4_;
  uVar18 = *(ulonglong *)(param_2 + 0x16);
  uVar25 = FUN_14296f0e0(uVar25,*(undefined8 *)(param_2 + 0x10));
  uVar25 = FUN_14296ee00(uVar25,uStack_58);
  uVar25 = FUN_14296ee00(uVar25,auStack_b8._0_8_);
  uVar25 = FUN_14296ee00(uVar25,CONCAT44(uStack_d4,uStack_d8));
  FUN_14296ee00(uVar25,CONCAT44(uStack_74,uStack_78));
  uVar25 = FUN_142970a00();
  uStack_178 = uStack_160 | unaff_R13 | uVar18 | uStack_178;
  uVar29 = auVar31._0_8_ | auVar34._0_8_;
  uVar25 = FUN_14296ee00(uVar25,CONCAT44(uStack_f4,uStack_f8),uVar29,uStack_218);
  uVar21 = uStack_258;
  FUN_14296ee00(uVar25,CONCAT44(uStack_94,uStack_98));
  pauVar26 = (undefined (*) [16])FUN_142970a00();
  if ((uStack_240 | unaff_R13 | uVar18 | uVar21 | uVar29) == 0) {
    if (uStack_178 == 0) {
      uStack_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      uStack_68 = param_2[4];
      uStack_64 = param_2[5];
      uStack_60 = param_2[6];
      uStack_5c = param_2[7];
      pauVar27 = pauVar26 + 2;
      uStack_e0 = 0x42970b9a;
      uStack_dc = 1;
      uVar25 = FUN_142970ac0(pauVar26,pauVar27,pauVar26 + 4,*(undefined8 *)(param_2 + 0xe));
      uStack_e0 = 0x42970bb8;
      uStack_dc = 1;
      uVar25 = FUN_14296f0e0(uVar25,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x16))
      ;
      uStack_e0 = 0x42970bd9;
      uStack_dc = 1;
      uVar25 = FUN_14296f0e0(uVar25,CONCAT44(uStack_d4,uStack_d8),CONCAT44(uStack_bc,uStack_c0));
      uStack_e0 = 0x42970bff;
      uStack_dc = 1;
      FUN_14296ee00(uVar25,*(undefined8 *)(param_2 + 8));
      uStack_e0 = 0x42970c04;
      uStack_dc = 1;
      FUN_142970ac0();
      uStack_e0 = 0x42970c27;
      uStack_dc = 1;
      FUN_1429709a0();
      uVar30 = uStack_78;
      uVar12 = CONCAT44(uStack_74,uStack_78);
      puVar14 = (undefined *)CONCAT44(uStack_6c,uStack_70);
      uStack_e0 = 0x42970c4a;
      uStack_dc = 1;
      uVar25 = FUN_142970a00();
      uVar22 = CONCAT44(uStack_cc,uStack_d0);
      uVar23 = CONCAT44(uStack_c4,uStack_c8);
      uStack_e0 = 0x42970c6c;
      uStack_dc = 1;
      FUN_14296f0e0(uVar25,CONCAT44(uStack_d4,uStack_d8),CONCAT44(uStack_bc,uStack_c0));
      uVar18 = (ulonglong)
               (CARRY8((ulonglong)puVar14,(ulonglong)auStack_158) ||
               CARRY8((ulonglong)(puVar14 + (longlong)auStack_158),(ulonglong)(uVar12 != 0)));
      uVar21 = (ulonglong)CARRY8(uVar22,uVar18);
      uVar29 = (ulonglong)(CARRY8(uVar23,unaff_RBP) || CARRY8(uVar23 + unaff_RBP,uVar21));
      uVar18 = uVar22 + uVar18;
      uVar19 = uVar12 - 1;
      puVar2 = puVar14 + (longlong)auStack_158 + (uVar12 != 0);
      uVar21 = uVar23 + unaff_RBP + uVar21;
      if ((uVar30 & 1) == 0) {
        uVar29 = 0;
        uVar18 = uVar22;
        uVar19 = uVar12;
        puVar2 = puVar14;
        uVar21 = uVar23;
      }
      uVar22 = (ulonglong)puVar2 >> 1 | uVar18 << 0x3f;
      *(ulonglong *)*pauVar27 = uVar19 >> 1 | (longlong)puVar2 << 0x3f;
      *(ulonglong *)(*pauVar27 + 8) = uVar22;
      *(ulonglong *)pauVar27[1] = uVar18 >> 1 | uVar21 << 0x3f;
      *(ulonglong *)(pauVar27[1] + 8) = uVar21 >> 1 | uVar29 << 0x3f;
      uStack_e0 = 0x42970d17;
      uStack_dc = 1;
      FUN_14296ee00(uVar21 << 0x3f,CONCAT44(uStack_94,uStack_98),uVar23,auStack_b8._0_8_);
      uStack_e0 = 0x42970d24;
      uStack_dc = 1;
      FUN_142970ac0();
      uStack_e0 = 0x42970d33;
      uStack_dc = 1;
      uVar25 = FUN_1429709a0();
      uVar32 = uStack_bc;
      uVar30 = uStack_c0;
      uStack_e0 = 0x42970d5e;
      uStack_dc = 1;
      FUN_14296ee00(uVar25,CONCAT44(uStack_74,uStack_78));
      uStack_e0 = 0x42970d6b;
      uStack_dc = 1;
      uVar24 = FUN_142970ac0();
      uVar25 = auStack_b8._8_8_;
      uVar20 = auStack_a8._0_8_;
      uStack_e0 = 0x42970d8e;
      uStack_dc = 1;
      FUN_14296f0e0(uVar24,auStack_b8._0_8_,auStack_a8._8_8_);
      uStack_e0 = 0x42970da7;
      uStack_dc = 1;
      FUN_142970a00();
      uStack_e0 = 0x42970dc3;
      uStack_dc = 1;
      FUN_142970a60();
      uStack_d8 = uVar30;
      uStack_d4 = uVar32;
      uStack_d0 = (uint)((ulonglong)puVar2 >> 1);
      uStack_cc = (uint)(uVar22 >> 0x20);
      uStack_c8 = (uint)uVar25;
      uStack_c4 = (uint)((ulonglong)uVar25 >> 0x20);
      uStack_c0 = (uint)uVar20;
      uStack_bc = (uint)((ulonglong)uVar20 >> 0x20);
      uStack_e0 = 0x42970e01;
      uStack_dc = 1;
      FUN_14296ee00(0,auStack_b8._0_8_);
      uStack_e0 = 0x42970e10;
      uStack_dc = 1;
      FUN_142970a00();
      return;
    }
    *pauVar26 = (undefined  [16])0x0;
    pauVar26[1] = (undefined  [16])0x0;
    pauVar26[2] = (undefined  [16])0x0;
    pauVar26[3] = (undefined  [16])0x0;
    pauVar26[4] = (undefined  [16])0x0;
    pauVar26[5] = (undefined  [16])0x0;
  }
  else {
    uVar25 = FUN_14296f0e0(pauVar26,uStack_238,uStack_220);
    uVar25 = FUN_14296ee00(uVar25,auStack_b8._0_8_);
    uVar25 = FUN_14296f0e0(uVar25,uStack_278);
    uVar25 = FUN_14296ee00(uVar25,uStack_58);
    uVar25 = FUN_14296ee00(uVar25,uStack_278);
    FUN_14296ee00(uVar25,uStack_1d8);
    lVar1 = uStack_240 * 2;
    uVar23 = unaff_R13 * 2 + (ulonglong)CARRY8(uStack_240,uStack_240);
    uVar18 = (ulonglong)
             (CARRY8(unaff_R13,unaff_R13) ||
             CARRY8(unaff_R13 * 2,(ulonglong)CARRY8(uStack_240,uStack_240)));
    uVar19 = uStack_260 * 2 + uVar18;
    uVar18 = (ulonglong)(CARRY8(uStack_260,uStack_260) || CARRY8(uStack_260 * 2,uVar18));
    uVar22 = uStack_258 * 2 + uVar18;
    uVar21 = (ulonglong)(uVar23 < uStack_270 || uVar23 - uStack_270 < (ulonglong)(lVar1 != -1));
    uVar29 = (ulonglong)(uVar19 < uVar21);
    uStack_120 = (uVar22 - uStack_268) - uVar29;
    uStack_130 = (uVar23 - uStack_270) - (ulonglong)(lVar1 != -1);
    lStack_138 = lVar1 + 1;
    uStack_128 = uVar19 - uVar21;
    if ((CARRY8(uStack_258,uStack_258) || CARRY8(uStack_258 * 2,uVar18)) <
        (uVar22 < uStack_268 || uVar22 - uStack_268 < uVar29)) {
      uStack_120 = uVar22;
      uStack_130 = uVar23;
      lStack_138 = lVar1;
      uStack_128 = uVar19;
    }
    FUN_142970a60(uStack_208);
    FUN_142970a00();
    uVar25 = FUN_142970a60(uStack_1a8);
    uVar25 = FUN_14296ee00(uVar25,uStack_1f8);
    FUN_14296ee00(uVar25,lStack_138);
    pauVar26 = (undefined (*) [16])FUN_142970a00();
    auVar5._8_8_ = uStack_110;
    auVar5._0_8_ = uStack_118;
    auVar16._8_8_ = uStack_50;
    auVar16._0_8_ = uStack_58;
    auVar17._8_8_ = uStack_40;
    auVar17._0_8_ = uStack_48;
    pauVar26[4] = auVar31 & auStack_b8 | ~auVar31 & (auVar34 & auVar16 | ~auVar34 & auVar5);
    pauVar26[5] = auVar31 & auStack_a8 | ~auVar31 & (auVar34 & auVar17 | ~auVar34 & auStack_108);
    auVar10._4_4_ = uStack_94;
    auVar10._0_4_ = uStack_98;
    auVar10._8_4_ = uStack_90;
    auVar10._12_4_ = uStack_8c;
    auVar11._4_4_ = uStack_84;
    auVar11._0_4_ = uStack_88;
    auVar11._8_4_ = uStack_80;
    auVar11._12_4_ = uStack_7c;
    auVar6._4_4_ = uStack_f4;
    auVar6._0_4_ = uStack_f8;
    auVar6._8_4_ = uStack_f0;
    auVar6._12_4_ = uStack_ec;
    auVar7._4_4_ = uStack_e4;
    auVar7._0_4_ = uStack_e8;
    auVar7._8_4_ = uStack_e0;
    auVar7._12_4_ = uStack_dc;
    *pauVar26 = auVar31 & auVar6 | ~auVar31 & (auVar34 & auVar10 | ~auVar34 & auStack_158);
    pauVar26[1] = auVar31 & auVar7 | ~auVar31 & (auVar34 & auVar11 | ~auVar34 & auStack_148);
    auVar3._8_8_ = uStack_130;
    auVar3._0_8_ = lStack_138;
    auVar4._8_8_ = uStack_120;
    auVar4._0_8_ = uStack_128;
    auVar13._4_4_ = uStack_74;
    auVar13._0_4_ = uStack_78;
    auVar13._8_4_ = uStack_70;
    auVar13._12_4_ = uStack_6c;
    auVar15._4_4_ = uStack_64;
    auVar15._0_4_ = uStack_68;
    auVar15._8_4_ = uStack_60;
    auVar15._12_4_ = uStack_5c;
    auVar8._4_4_ = uStack_d4;
    auVar8._0_4_ = uStack_d8;
    auVar8._8_4_ = uStack_d0;
    auVar8._12_4_ = uStack_cc;
    auVar9._4_4_ = uStack_c4;
    auVar9._0_4_ = uStack_c8;
    auVar9._8_4_ = uStack_c0;
    auVar9._12_4_ = uStack_bc;
    pauVar26[2] = auVar31 & auVar8 | ~auVar31 & (auVar34 & auVar13 | ~auVar34 & auVar3);
    pauVar26[3] = auVar31 & auVar9 | ~auVar31 & (auVar34 & auVar15 | ~auVar34 & auVar4);
  }
  return;
}


/* address=142c6df70 name=FUN_142c6df70 */

void FUN_142c6df70(undefined8 param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined auStack_768 [40];
  undefined4 uStack_740;
  uint uStack_73c;
  uint uStack_738;
  uint uStack_734;
  undefined uStack_730;
  undefined uStack_72f;
  undefined uStack_72e;
  undefined uStack_72d;
  undefined uStack_72c;
  undefined uStack_72b;
  undefined uStack_72a;
  undefined uStack_729;
  undefined uStack_728;
  undefined uStack_727;
  undefined uStack_726;
  undefined uStack_725;
  undefined uStack_724;
  undefined uStack_723;
  undefined uStack_722;
  byte bStack_721;
  undefined uStack_720;
  undefined auStack_700 [32];
  uint uStack_6e0;
  uint uStack_6dc;
  uint uStack_6d8;
  uint uStack_6d4;
  uint uStack_6d0;
  uint uStack_6cc;
  uint uStack_6c8;
  uint uStack_6c4;
  uint uStack_6a0;
  uint uStack_69c;
  uint uStack_698;
  uint uStack_694;
  uint uStack_690;
  uint uStack_68c;
  uint uStack_688;
  uint uStack_684;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined auStack_620 [96];
  undefined auStack_5c0 [96];
  undefined auStack_560 [96];
  undefined auStack_500 [96];
  undefined auStack_4a0 [96];
  undefined auStack_440 [96];
  undefined auStack_3e0 [96];
  undefined auStack_380 [96];
  undefined auStack_320 [96];
  undefined auStack_2c0 [96];
  undefined auStack_260 [96];
  undefined auStack_200 [96];
  undefined auStack_1a0 [96];
  undefined auStack_140 [96];
  undefined auStack_e0 [96];
  ulonglong uStack_80;
  
  uStack_80 = DAT_143cf7840 ^ (ulonglong)auStack_768;
  uStack_680 = *param_3;
  uVar6 = *param_2;
  uStack_73c = param_2[1];
  uStack_738 = param_2[2];
  uStack_734 = param_2[3];
  uStack_678 = param_3[1];
  uStack_730 = *(undefined *)(param_2 + 4);
  uStack_72f = *(undefined *)((longlong)param_2 + 0x11);
  uStack_72e = *(undefined *)((longlong)param_2 + 0x12);
  uStack_72d = *(undefined *)((longlong)param_2 + 0x13);
  uStack_72c = *(undefined *)(param_2 + 5);
  uStack_72b = *(undefined *)((longlong)param_2 + 0x15);
  uStack_72a = *(undefined *)((longlong)param_2 + 0x16);
  uStack_729 = *(undefined *)((longlong)param_2 + 0x17);
  uStack_728 = *(undefined *)(param_2 + 6);
  uStack_727 = *(undefined *)((longlong)param_2 + 0x19);
  uStack_726 = *(undefined *)((longlong)param_2 + 0x1a);
  uStack_725 = *(undefined *)((longlong)param_2 + 0x1b);
  uStack_724 = *(undefined *)(param_2 + 7);
  uStack_723 = *(undefined *)((longlong)param_2 + 0x1d);
  uStack_722 = *(undefined *)((longlong)param_2 + 0x1e);
  bVar1 = *(byte *)((longlong)param_2 + 0x1f);
  uStack_670 = param_3[2];
  uStack_668 = param_3[3];
  uStack_660 = *param_4;
  uStack_658 = param_4[1];
  uStack_650 = param_4[2];
  uStack_648 = param_4[3];
  uStack_638 = 0xffffffff00000000;
  uStack_628 = 0xfffffffe;
  uStack_720 = 0;
  uStack_640 = 1;
  uStack_630 = 0xffffffffffffffff;
  uStack_740 = uVar6;
  bStack_721 = bVar1;
  if (DAT_143d03bf0 == 0) {
    FUN_14296f980(auStack_620,&uStack_680);
  }
  else {
    FUN_142970b20();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296fca0(auStack_5c0,auStack_620,&uStack_680);
  }
  else {
    FUN_142970e40();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296f980(auStack_560,auStack_620);
  }
  else {
    FUN_142970b20();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296f980(auStack_4a0,auStack_5c0);
  }
  else {
    FUN_142970b20();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296f980(auStack_3e0,auStack_560);
  }
  else {
    FUN_142970b20();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296f980(auStack_260,auStack_4a0);
  }
  else {
    FUN_142970b20();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296fca0(auStack_500,auStack_560,&uStack_680);
  }
  else {
    FUN_142970e40();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296fca0(auStack_440,auStack_4a0,&uStack_680);
  }
  else {
    FUN_142970e40();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296fca0(auStack_380,auStack_3e0,&uStack_680);
  }
  else {
    FUN_142970e40();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296fca0(auStack_200,auStack_260,&uStack_680);
  }
  else {
    FUN_142970e40();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296f980(auStack_1a0,auStack_440);
  }
  else {
    FUN_142970b20();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296f980(auStack_320,auStack_500);
  }
  else {
    FUN_142970b20();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296fca0(auStack_140,auStack_1a0,&uStack_680);
  }
  else {
    FUN_142970e40();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296fca0(auStack_2c0,auStack_320,&uStack_680);
  }
  else {
    FUN_142970e40();
  }
  if (DAT_143d03bf0 == 0) {
    FUN_14296f980(auStack_e0,auStack_3e0);
  }
  else {
    FUN_142970b20();
  }
  uVar4 = 0xff;
  if (DAT_143d03bec == 0) {
    FUN_14296f2a0(param_1,&uStack_680,(bVar1 >> 6 & 1) - ((char)bVar1 >> 7));
  }
  else {
    FUN_14296f540();
  }
  do {
    if (uVar4 != 0xff) {
      uVar2 = uVar4 - 1 >> 3;
      uVar5 = (ushort)(CONCAT11(*(undefined *)((longlong)&uStack_740 + uVar2 + 1),
                                *(undefined *)((longlong)&uStack_740 + uVar2)) >>
                      ((byte)(uVar4 - 1) & 7)) & 0x3f;
      uVar2 = (ulonglong)(uVar5 >> 5) - 1;
      uVar3 = ~uVar2;
      uVar2 = 0x3f - (ulonglong)uVar5 & uVar3 | uVar2 & uVar5;
      uVar2 = (ulonglong)((uint)uVar3 & 1) + ((uVar2 >> 1) + (ulonglong)((uint)uVar2 & 1)) * 2;
      if (DAT_143d03bec == 0) {
        FUN_14296f2a0(auStack_700,&uStack_680,uVar2 >> 1);
      }
      else {
        FUN_14296f540();
      }
      FUN_14296dac0(&uStack_6a0,&uStack_6e0);
      uVar2 = -(ulonglong)((uint)uVar2 & 1);
      uVar8 = (uint)uVar2;
      uVar9 = (uint)(uVar2 >> 0x20);
      uVar5 = (uint)~uVar2;
      uVar7 = (uint)(~uVar2 >> 0x20);
      uStack_6e0 = uStack_6e0 & uVar5 ^ uStack_6a0 & uVar8;
      uStack_6dc = uStack_6dc & uVar7 ^ uStack_69c & uVar9;
      uStack_6d8 = uStack_6d8 & uVar5 ^ uStack_698 & uVar8;
      uStack_6d4 = uStack_6d4 & uVar7 ^ uStack_694 & uVar9;
      uStack_6d0 = uStack_6d0 & uVar5 ^ uStack_690 & uVar8;
      uStack_6cc = uStack_6cc & uVar7 ^ uStack_68c & uVar9;
      uStack_6c8 = uStack_6c8 & uVar5 ^ uStack_688 & uVar8;
      uStack_6c4 = uStack_6c4 & uVar7 ^ uStack_684 & uVar9;
      if (DAT_143d03bf0 == 0) {
        FUN_14296fca0(param_1,param_1,auStack_700);
      }
      else {
        FUN_142970e40();
      }
    }
    uVar4 = uVar4 - 5;
    if (DAT_143d03bf0 == 0) {
      FUN_14296f980(param_1,param_1);
    }
    else {
      FUN_142970b20();
    }
    if (DAT_143d03bf0 == 0) {
      FUN_14296f980(param_1,param_1);
    }
    else {
      FUN_142970b20();
    }
    if (DAT_143d03bf0 == 0) {
      FUN_14296f980(param_1,param_1);
    }
    else {
      FUN_142970b20();
    }
    if (DAT_143d03bf0 == 0) {
      FUN_14296f980(param_1,param_1);
    }
    else {
      FUN_142970b20();
    }
    if (DAT_143d03bf0 == 0) {
      FUN_14296f980(param_1,param_1);
    }
    else {
      FUN_142970b20();
    }
  } while (4 < uVar4);
  uVar4 = (ulonglong)(uVar6 & 0x1f) * 2;
  uVar2 = (uVar4 >> 5) - 1;
  uVar3 = ~uVar2;
  uVar4 = (ulonglong)(uVar6 & 0x1f) * -2 + 0x3f & uVar3 | uVar4 & uVar2;
  uVar4 = (ulonglong)((uint)uVar3 & 1) + ((uVar4 >> 1) + (ulonglong)((uint)uVar4 & 1)) * 2;
  if (DAT_143d03bec == 0) {
    FUN_14296f2a0(auStack_700,&uStack_680,uVar4 >> 1);
  }
  else {
    FUN_14296f540();
  }
  FUN_14296dac0(&uStack_6a0,&uStack_6e0);
  uVar4 = -(ulonglong)((uint)uVar4 & 1);
  uVar7 = (uint)uVar4;
  uVar8 = (uint)(uVar4 >> 0x20);
  uVar6 = (uint)~uVar4;
  uVar5 = (uint)(~uVar4 >> 0x20);
  uStack_6e0 = uStack_6e0 & uVar6 ^ uStack_6a0 & uVar7;
  uStack_6dc = uStack_6dc & uVar5 ^ uStack_69c & uVar8;
  uStack_6d8 = uStack_6d8 & uVar6 ^ uStack_698 & uVar7;
  uStack_6d4 = uStack_6d4 & uVar5 ^ uStack_694 & uVar8;
  uStack_6d0 = uStack_6d0 & uVar6 ^ uStack_690 & uVar7;
  uStack_6cc = uStack_6cc & uVar5 ^ uStack_68c & uVar8;
  uStack_6c8 = uStack_6c8 & uVar6 ^ uStack_688 & uVar7;
  uStack_6c4 = uStack_6c4 & uVar5 ^ uStack_684 & uVar8;
  if (DAT_143d03bf0 == 0) {
    FUN_14296fca0(param_1,param_1,auStack_700);
  }
  else {
    FUN_142970e40();
  }
  FUN_142c6a7d0(uStack_80 ^ (ulonglong)auStack_768);
  return;
}


/* address=142c6e590 name=FUN_142c6e590 */

void FUN_142c6e590(undefined8 *param_1)

{
  undefined auStack_c8 [40];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = DAT_143cf7840 ^ (ulonglong)auStack_c8;
  FUN_142c6df70(&uStack_a0);
  *param_1 = uStack_a0;
  param_1[1] = uStack_98;
  param_1[2] = uStack_90;
  param_1[3] = uStack_88;
  param_1[4] = uStack_80;
  param_1[5] = uStack_78;
  param_1[6] = uStack_70;
  param_1[7] = uStack_68;
  param_1[8] = uStack_60;
  param_1[9] = uStack_58;
  param_1[10] = uStack_50;
  param_1[0xb] = uStack_48;
  FUN_142c6a7d0(uStack_40 ^ (ulonglong)auStack_c8);
  return;
}


/* address=142c6e640 name=FUN_142c6e640 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6e640(undefined8 *param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined auStack_178 [56];
  undefined4 uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined uStack_120;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  ulonglong uStack_40;
  
  uStack_40 = DAT_143cf7840 ^ (ulonglong)auStack_178;
  uStack_140 = *param_2;
  uStack_13c = param_2[1];
  uStack_138 = param_2[2];
  uStack_134 = param_2[3];
  uStack_120 = 0;
  uStack_130 = param_2[4];
  uStack_12c = param_2[5];
  uStack_128 = param_2[6];
  uStack_124 = param_2[7];
  uVar3 = (ulonglong)(uStack_140 & 0x7f) * 2;
  uVar2 = (uVar3 >> 7) - 1;
  uVar6 = ~uVar2;
  uVar3 = (ulonglong)(uStack_140 & 0x7f) * -2 + 0xff & uVar6 | uVar2 & uVar3;
  uVar3 = (ulonglong)((uint)uVar6 & 1) + ((uVar3 >> 1) + (ulonglong)((uint)uVar3 & 1)) * 2;
  uVar2 = uVar3 >> 1;
  if (DAT_143d03bec == 0) {
    FUN_14296f400(&uStack_a0,&DAT_14333d000,uVar2 & 0xffffffff);
  }
  else {
    FUN_14296f6a0();
  }
  FUN_14296dac0(&uStack_c0,&uStack_80);
  uVar3 = -(ulonglong)((uint)uVar3 & 1);
  lVar4 = -uVar2;
  lVar1 = lVar4 >> 0x3f;
  uVar2 = 6;
  lVar9 = 0x24;
  uVar12 = (uint)uVar3;
  uVar13 = (uint)(uVar3 >> 0x20);
  puVar5 = &DAT_14333e000;
  uVar10 = (uint)~uVar3;
  uVar11 = (uint)(~uVar3 >> 0x20);
  uStack_80 = uStack_80 & uVar10 ^ (uint)uStack_c0 & uVar12;
  uStack_7c = uStack_7c & uVar11 ^ uStack_c0._4_4_ & uVar13;
  uStack_78 = uStack_78 & uVar10 ^ (uint)uStack_b8 & uVar12;
  uStack_74 = uStack_74 & uVar11 ^ uStack_b8._4_4_ & uVar13;
  uStack_f0 = uStack_90;
  uStack_ec = uStack_8c;
  uStack_e8 = uStack_88;
  uStack_e4 = uStack_84;
  uStack_70 = uStack_70 & uVar10 ^ (uint)uStack_b0 & uVar12;
  uStack_6c = uStack_6c & uVar11 ^ uStack_b0._4_4_ & uVar13;
  uStack_68 = uStack_68 & uVar10 ^ (uint)uStack_a8 & uVar12;
  uStack_64 = uStack_64 & uVar11 ^ uStack_a8._4_4_ & uVar13;
  uStack_e0 = uStack_80;
  uStack_dc = uStack_7c;
  uStack_d8 = uStack_78;
  uStack_d4 = uStack_74;
  uStack_d0 = uStack_70;
  uStack_cc = uStack_6c;
  uStack_c8 = uStack_68;
  uStack_c4 = uStack_64;
  uStack_100 = uStack_a0;
  uStack_fc = uStack_9c;
  uStack_f8 = uStack_98;
  uStack_f4 = uStack_94;
  uVar10 = (uint)lVar1;
  uVar11 = (uint)(lVar4 >> 0x3f);
  uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
  uStack_c0 = CONCAT44(uVar11 & _UNK_14333c004,uVar10 & _DAT_14333c000);
  uStack_b8 = CONCAT44(uVar12 & _UNK_14333c00c,uVar11 & _UNK_14333c008);
  uStack_b0 = CONCAT44(uVar11 & SUB164(_DAT_14333c010,4),uVar10 & SUB164(_DAT_14333c010,0));
  uStack_a8 = CONCAT44(uVar12 & SUB164(_DAT_14333c010,0xc),uVar11 & SUB164(_DAT_14333c010,8));
  do {
    bVar8 = (byte)uVar2;
    uVar3 = uVar2 >> 3;
    uVar2 = uVar2 + 7;
    uVar7 = (ulonglong)
            (ushort)(CONCAT11(*(undefined *)((longlong)&uStack_140 + uVar3 + 1),
                              *(undefined *)((longlong)&uStack_140 + uVar3)) >> (bVar8 & 7)) & 0xff;
    uVar3 = (uVar7 >> 7) - 1;
    uVar6 = ~uVar3;
    uVar3 = 0xff - uVar7 & uVar6 | uVar7 & uVar3;
    uVar3 = (ulonglong)((uint)uVar6 & 1) + ((uVar3 >> 1) + (ulonglong)((uint)uVar3 & 1)) * 2;
    if (DAT_143d03bec == 0) {
      FUN_14296f400(&uStack_a0,puVar5,uVar3 >> 1);
    }
    else {
      FUN_14296f6a0();
    }
    FUN_14296dac0(&uStack_60,&uStack_80);
    uVar3 = -(ulonglong)((uint)uVar3 & 1);
    uVar12 = (uint)uVar3;
    uVar13 = (uint)(uVar3 >> 0x20);
    uVar10 = (uint)~uVar3;
    uVar11 = (uint)(~uVar3 >> 0x20);
    uStack_80 = uStack_80 & uVar10 ^ uStack_60 & uVar12;
    uStack_7c = uStack_7c & uVar11 ^ uStack_5c & uVar13;
    uStack_78 = uStack_78 & uVar10 ^ uStack_58 & uVar12;
    uStack_74 = uStack_74 & uVar11 ^ uStack_54 & uVar13;
    uStack_70 = uStack_70 & uVar10 ^ uStack_50 & uVar12;
    uStack_6c = uStack_6c & uVar11 ^ uStack_4c & uVar13;
    uStack_68 = uStack_68 & uVar10 ^ uStack_48 & uVar12;
    uStack_64 = uStack_64 & uVar11 ^ uStack_44 & uVar13;
    if (DAT_143d03bf0 == 0) {
      FUN_142970420(&uStack_100,&uStack_100,&uStack_a0);
    }
    else {
      FUN_1429715c0();
    }
    puVar5 = puVar5 + 0x1000;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *param_1 = CONCAT44(uStack_fc,uStack_100);
  param_1[1] = CONCAT44(uStack_f4,uStack_f8);
  param_1[2] = CONCAT44(uStack_ec,uStack_f0);
  param_1[3] = CONCAT44(uStack_e4,uStack_e8);
  param_1[4] = CONCAT44(uStack_dc,uStack_e0);
  param_1[5] = CONCAT44(uStack_d4,uStack_d8);
  param_1[6] = CONCAT44(uStack_cc,uStack_d0);
  param_1[7] = CONCAT44(uStack_c4,uStack_c8);
  param_1[8] = uStack_c0;
  param_1[9] = uStack_b8;
  param_1[10] = uStack_b0;
  param_1[0xb] = uStack_a8;
  FUN_142c6a7d0(uStack_40 ^ (ulonglong)auStack_178);
  return;
}


/* address=142c6e9e0 name=FUN_142c6e9e0 */

void FUN_142c6e9e0(undefined8 *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined auStack_148 [40];
  undefined4 uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined uStack_100;
  undefined auStack_e0 [16];
  undefined auStack_d0 [16];
  undefined auStack_c0 [16];
  undefined auStack_b0 [16];
  undefined auStack_a0 [16];
  undefined auStack_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  
  uStack_40 = DAT_143cf7840 ^ (ulonglong)auStack_148;
  uStack_100 = 0;
  uStack_120 = *param_2;
  uStack_11c = param_2[1];
  uStack_118 = param_2[2];
  uStack_114 = param_2[3];
  uVar5 = (ulonglong)(*param_2 & 0x7f);
  uVar4 = uVar5 * 2;
  uVar1 = (uVar4 >> 7) - 1;
  uVar7 = ~uVar1;
  uVar4 = uVar5 * -2 + 0xff & uVar7 | uVar1 & uVar4;
  uStack_110 = param_2[4];
  uStack_10c = param_2[5];
  uStack_108 = param_2[6];
  uStack_104 = param_2[7];
  uVar4 = (ulonglong)((uint)uVar7 & 1) + ((uVar4 >> 1) + (ulonglong)((uint)uVar4 & 1)) * 2;
  if (uVar4 < 2) {
    auStack_e0 = ZEXT816(0);
    auStack_d0 = ZEXT816(0);
    auStack_c0 = ZEXT816(0);
    auStack_b0 = ZEXT816(0);
    auStack_a0 = ZEXT816(0);
    auStack_90 = ZEXT816(0);
  }
  else {
    lVar2 = (uVar4 >> 1) * 0x40;
    auStack_e0 = *(undefined (*) [16])(&DAT_14333cfc0 + lVar2);
    auStack_d0 = *(undefined (*) [16])(&DAT_14333cfd0 + lVar2);
    auStack_c0 = *(undefined (*) [16])(&DAT_14333cfe0 + lVar2);
    auStack_a0._8_8_ = 0xffffffff00000000;
    auStack_a0._0_8_ = 1;
    auStack_90._8_8_ = 0xfffffffe;
    auStack_90._0_8_ = 0xffffffffffffffff;
    auStack_b0 = *(undefined (*) [16])(&DAT_14333cff0 + lVar2);
  }
  if ((uVar4 & 1) != 0) {
    FUN_14296dac0(auStack_c0,auStack_c0);
  }
  lVar2 = 0x40;
  uVar4 = 6;
  do {
    bVar6 = (byte)uVar4;
    uVar1 = uVar4 >> 3;
    uVar4 = uVar4 + 7;
    uVar7 = (ulonglong)
            (ushort)(CONCAT11(*(undefined *)((longlong)&uStack_120 + uVar1 + 1),
                              *(undefined *)((longlong)&uStack_120 + uVar1)) >> (bVar6 & 7)) & 0xff;
    uVar1 = (uVar7 >> 7) - 1;
    uVar5 = ~uVar1;
    uVar1 = 0xff - uVar7 & uVar5 | uVar7 & uVar1;
    uVar1 = (ulonglong)((uint)uVar5 & 1) + ((uVar1 >> 1) + (ulonglong)((uint)uVar1 & 1)) * 2;
    if (1 < uVar1) {
      lVar3 = ((uVar1 >> 1) + lVar2) * 0x40;
      uStack_80 = *(undefined4 *)(&DAT_14333cfc0 + lVar3);
      uStack_7c = *(undefined4 *)(&UNK_14333cfc4 + lVar3);
      uStack_78 = *(undefined4 *)(&UNK_14333cfc8 + lVar3);
      uStack_74 = *(undefined4 *)(&UNK_14333cfcc + lVar3);
      uStack_70 = *(undefined4 *)(&DAT_14333cfd0 + lVar3);
      uStack_6c = *(undefined4 *)(&UNK_14333cfd4 + lVar3);
      uStack_68 = *(undefined4 *)(&UNK_14333cfd8 + lVar3);
      uStack_64 = *(undefined4 *)(&UNK_14333cfdc + lVar3);
      uStack_60 = *(undefined4 *)(&DAT_14333cfe0 + lVar3);
      uStack_5c = *(undefined4 *)(&UNK_14333cfe4 + lVar3);
      uStack_58 = *(undefined4 *)(&UNK_14333cfe8 + lVar3);
      uStack_54 = *(undefined4 *)(&UNK_14333cfec + lVar3);
      uStack_50 = *(undefined4 *)(&DAT_14333cff0 + lVar3);
      uStack_4c = *(undefined4 *)(&UNK_14333cff4 + lVar3);
      uStack_48 = *(undefined4 *)(&UNK_14333cff8 + lVar3);
      uStack_44 = *(undefined4 *)(&UNK_14333cffc + lVar3);
      if ((uVar1 & 1) != 0) {
        FUN_14296dac0(&uStack_60,&uStack_60);
      }
      if (DAT_143d03bf0 == 0) {
        FUN_142970420(auStack_e0,auStack_e0,&uStack_80);
      }
      else {
        FUN_1429715c0();
      }
    }
    lVar2 = lVar2 + 0x40;
  } while (lVar2 < 0x940);
  *param_1 = auStack_e0._0_8_;
  param_1[1] = auStack_e0._8_8_;
  param_1[2] = auStack_d0._0_8_;
  param_1[3] = auStack_d0._8_8_;
  param_1[4] = auStack_c0._0_8_;
  param_1[5] = auStack_c0._8_8_;
  param_1[6] = auStack_b0._0_8_;
  param_1[7] = auStack_b0._8_8_;
  param_1[8] = auStack_a0._0_8_;
  param_1[9] = auStack_a0._8_8_;
  param_1[10] = auStack_90._0_8_;
  param_1[0xb] = auStack_90._8_8_;
  FUN_142c6a7d0(uStack_40 ^ (ulonglong)auStack_148);
  return;
}


/* address=142c6ecb0 name=thunk_FUN_142c6ef50 */

undefined *
thunk_FUN_142c6ef50(undefined *param_1,longlong param_2,longlong param_3,longlong param_4,
                   uint param_5,longlong param_6,ulonglong param_7)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  undefined *puVar21;
  bool bVar22;
  int aiStackX_18 [2];
  ushort *puStackX_20;
  ulonglong in_stack_ffffffffffffff90;
  
  uVar9 = param_7;
  lVar5 = param_6;
  aiStackX_18[0] = 0xff;
  puVar1 = (ushort *)(param_6 + 0x200);
  if (param_7 < 0x200) {
    return (undefined *)0xffffffffffffffff;
  }
  puStackX_20 = puVar1;
  puVar7 = (undefined *)
           thunk_FUN_142bfbe40(param_6,aiStackX_18,&param_6,param_3,param_4,
                               in_stack_ffffffffffffff90 & 0xffffffff00000000);
  if ((undefined *)0xffffffffffffff88 < puVar7) {
    return puVar7;
  }
  if (param_5 < (uint)param_6) {
    return (undefined *)0xffffffffffffffd4;
  }
  puVar20 = (ulonglong *)(puVar7 + param_3);
  puVar7 = (undefined *)(param_4 - (longlong)puVar7);
  iVar15 = 1 << ((byte)(uint)param_6 & 0x1f);
  if (uVar9 < (((ulonglong)(aiStackX_18[0] + 1) * 2 + 0xb + (1L << ((byte)(uint)param_6 & 0x3f)) >>
               2) + (longlong)(iVar15 + 2)) * 4 + 0x204) {
    return (undefined *)0xffffffffffffffd4;
  }
  lVar10 = (longlong)(iVar15 + 1);
  puVar8 = (undefined *)
           FUN_142c6ecc0(puVar1,lVar5,aiStackX_18[0],(uint)param_6,lVar5 + (lVar10 + 0x80) * 4,
                         uVar9 + lVar10 * -4 + -0x200);
  if ((undefined *)0xffffffffffffff88 < puVar8) {
    return puVar8;
  }
  iVar15 = (int)puVar20;
  if (*(short *)(lVar5 + 0x202) == 0) {
    if (puVar7 == (undefined *)0x0) {
      return (undefined *)0xffffffffffffffb8;
    }
    puVar17 = puVar20 + 1;
    if (puVar7 < (undefined *)0x8) {
      uVar9 = (ulonglong)*(byte *)puVar20;
      switch(puVar7) {
      case (undefined *)0x7:
        uVar9 = ((ulonglong)*(byte *)((longlong)puVar20 + 6) << 0x30) + uVar9;
      case (undefined *)0x6:
        uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 5) << 0x28);
      case (undefined *)0x5:
        uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 4) << 0x20);
      case (undefined *)0x4:
        uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 3) * 0x1000000;
      case (undefined *)0x3:
        uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 0x10000;
      case (undefined *)0x2:
        uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 1) * 0x100;
      }
      bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
      if (bVar2 == 0) {
        return (undefined *)0xffffffffffffffec;
      }
      iVar14 = 0x1f;
      if (bVar2 != 0) {
        for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar6 = (9 - (int)puVar7) * 8;
      puVar12 = puVar20;
    }
    else {
      bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
      uVar9 = *(ulonglong *)(puVar7 + -8 + (longlong)puVar20);
      if (bVar2 == 0) {
        return (undefined *)0xffffffffffffffff;
      }
      iVar14 = 0x1f;
      if (bVar2 != 0) {
        for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar6 = 8;
      puVar12 = (ulonglong *)(puVar7 + -8 + (longlong)puVar20);
    }
    if ((undefined *)0xffffffffffffff88 < puVar7) {
      return puVar7;
    }
    uVar3 = *puVar1;
    uVar18 = (1L << ((byte)uVar3 & 0x3f)) - 1;
    uVar11 = (uint)uVar3 + (iVar6 - iVar14);
    uVar19 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
    if (uVar11 < 0x41) {
      if (puVar12 < puVar17) {
        if (puVar12 == puVar20) goto LAB_142c6f71b;
        uVar9 = (ulonglong)(uVar11 >> 3);
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
        }
        uVar11 = uVar11 + (int)uVar9 * -8;
      }
      else {
        uVar9 = (ulonglong)(uVar11 >> 3);
        uVar11 = uVar11 & 7;
      }
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    else {
      puVar12 = (ulonglong *)&DAT_143364710;
    }
LAB_142c6f71b:
    uVar11 = uVar11 + uVar3;
    uVar18 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
    if (0x40 < uVar11) {
      return (undefined *)0xffffffffffffffec;
    }
    if (puVar12 < puVar17) {
      if (puVar12 != puVar20) {
        uVar9 = (ulonglong)(uVar11 >> 3);
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
        }
        uVar11 = uVar11 + (int)uVar9 * -8;
        goto LAB_142c6f790;
      }
      if (uVar11 < 0x40) goto LAB_142c6f796;
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
LAB_142c6f790:
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
LAB_142c6f796:
      if (0x40 < uVar11) {
        return (undefined *)0xffffffffffffffec;
      }
    }
    puVar7 = param_1;
    if (puVar12 < puVar17) {
      if (puVar12 == puVar20) goto LAB_142c6f7e5;
      uVar13 = uVar11 >> 3;
      uVar9 = (ulonglong)uVar13;
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar13 = (int)puVar12 - iVar15;
        uVar9 = (ulonglong)uVar13;
      }
      uVar11 = uVar11 + uVar13 * -8;
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
    }
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
LAB_142c6f7e5:
    do {
      if (uVar11 < 0x41) {
        if (puVar12 < puVar17) {
          if (puVar12 == puVar20) {
            uVar13 = 2 - (uVar11 < 0x40);
            goto LAB_142c6f847;
          }
          uVar9 = (ulonglong)(uVar11 >> 3);
          bVar22 = (ulonglong *)((longlong)puVar12 - uVar9) < puVar20;
          if (bVar22) {
            uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
          }
          uVar13 = (uint)bVar22;
          uVar11 = uVar11 + (int)uVar9 * -8;
        }
        else {
          uVar9 = (ulonglong)(uVar11 >> 3);
          uVar13 = 0;
          uVar11 = uVar11 & 7;
        }
        puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
        uVar9 = *puVar12;
      }
      else {
        puVar12 = (ulonglong *)&DAT_143364710;
        uVar13 = 3;
      }
LAB_142c6f847:
      if (uVar13 != 0 || param_1 + param_2 + -3 <= puVar7) goto LAB_142c6f965;
      uVar13 = *(uint *)(puStackX_20 + uVar19 * 2 + 2);
      *puVar7 = (char)(uVar13 >> 0x10);
      uVar4 = *(uint *)(puStackX_20 + uVar18 * 2 + 2);
      puVar7[1] = (char)(uVar4 >> 0x10);
      iVar14 = (uVar13 >> 0x18) + uVar11;
      iVar6 = iVar14 + (uVar4 >> 0x18);
      uVar11 = *(uint *)(puStackX_20 +
                        ((uVar9 >> (-(char)iVar14 & 0x3fU) &
                         (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
                        (ulonglong)(uVar13 & 0xffff)) * 2 + 2);
      iVar14 = iVar6 + (uVar11 >> 0x18);
      uVar19 = (uVar9 >> (-(char)iVar14 & 0x3fU) & (1L << ((byte)(uVar11 >> 0x18) & 0x3f)) - 1U) +
               (ulonglong)(uVar11 & 0xffff);
      puVar7[2] = (char)(uVar11 >> 0x10);
      uVar13 = *(uint *)(puStackX_20 +
                        ((uVar9 >> (-(char)iVar6 & 0x3fU) &
                         (1L << ((byte)(uVar4 >> 0x18) & 0x3f)) - 1U) + (ulonglong)(uVar4 & 0xffff))
                        * 2 + 2);
      uVar11 = (uVar13 >> 0x18) + iVar14;
      uVar18 = (uVar9 >> (-(char)uVar11 & 0x3fU) & (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
               (ulonglong)(uVar13 & 0xffff);
      puVar7[3] = (char)(uVar13 >> 0x10);
      puVar7 = puVar7 + 4;
    } while( true );
  }
  if (puVar7 == (undefined *)0x0) {
    return (undefined *)0xffffffffffffffb8;
  }
  puVar17 = puVar20 + 1;
  if (puVar7 < (undefined *)0x8) {
    uVar9 = (ulonglong)*(byte *)puVar20;
    switch(puVar7) {
    case (undefined *)0x7:
      uVar9 = ((ulonglong)*(byte *)((longlong)puVar20 + 6) << 0x30) + uVar9;
    case (undefined *)0x6:
      uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 5) << 0x28);
    case (undefined *)0x5:
      uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 4) << 0x20);
    case (undefined *)0x4:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 3) * 0x1000000;
    case (undefined *)0x3:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 0x10000;
    case (undefined *)0x2:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 1) * 0x100;
    }
    bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
    if (bVar2 == 0) {
      return (undefined *)0xffffffffffffffec;
    }
    iVar14 = 0x1f;
    if (bVar2 != 0) {
      for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = (9 - (int)puVar7) * 8;
    puVar12 = puVar20;
  }
  else {
    bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
    uVar9 = *(ulonglong *)(puVar7 + -8 + (longlong)puVar20);
    if (bVar2 == 0) {
      return (undefined *)0xffffffffffffffff;
    }
    iVar14 = 0x1f;
    if (bVar2 != 0) {
      for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 8;
    puVar12 = (ulonglong *)(puVar7 + -8 + (longlong)puVar20);
  }
  if ((undefined *)0xffffffffffffff88 < puVar7) {
    return puVar7;
  }
  uVar3 = *puVar1;
  uVar18 = (1L << ((byte)uVar3 & 0x3f)) - 1;
  uVar11 = (uint)uVar3 + (iVar6 - iVar14);
  uVar19 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
  if (uVar11 < 0x41) {
    if (puVar12 < puVar17) {
      if (puVar12 == puVar20) goto LAB_142c6f200;
      uVar9 = (ulonglong)(uVar11 >> 3);
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
      }
      uVar11 = uVar11 + (int)uVar9 * -8;
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
    }
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
  }
  else {
    puVar12 = (ulonglong *)&DAT_143364710;
  }
LAB_142c6f200:
  lVar10 = lVar5 + 0x204;
  uVar11 = uVar3 + uVar11;
  uVar18 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
  if (0x40 < uVar11) {
    return (undefined *)0xffffffffffffffec;
  }
  if (puVar12 < puVar17) {
    if (puVar12 != puVar20) {
      uVar9 = (ulonglong)(uVar11 >> 3);
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
      }
      uVar11 = uVar11 + (int)uVar9 * -8;
      goto LAB_142c6f275;
    }
    if (uVar11 < 0x40) goto LAB_142c6f27a;
  }
  else {
    uVar9 = (ulonglong)(uVar11 >> 3);
    uVar11 = uVar11 & 7;
LAB_142c6f275:
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
LAB_142c6f27a:
    if (0x40 < uVar11) {
      return (undefined *)0xffffffffffffffec;
    }
  }
  puVar7 = param_1;
  if (puVar12 < puVar17) {
    if (puVar12 == puVar20) goto LAB_142c6f2d0;
    uVar13 = uVar11 >> 3;
    uVar9 = (ulonglong)uVar13;
    if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
      uVar13 = (int)puVar12 - iVar15;
      uVar9 = (ulonglong)uVar13;
    }
    uVar11 = uVar11 + uVar13 * -8;
  }
  else {
    uVar9 = (ulonglong)(uVar11 >> 3);
    uVar11 = uVar11 & 7;
  }
  puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
  uVar9 = *puVar12;
LAB_142c6f2d0:
  do {
    puVar17 = puVar20 + 1;
    if (uVar11 < 0x41) {
      if (puVar12 < puVar17) {
        if (puVar12 == puVar20) {
          uVar13 = 2 - (uVar11 < 0x40);
          goto LAB_142c6f32c;
        }
        uVar9 = (ulonglong)(uVar11 >> 3);
        bVar22 = (ulonglong *)((longlong)puVar12 - uVar9) < puVar20;
        if (bVar22) {
          uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
        }
        uVar13 = (uint)bVar22;
        uVar11 = uVar11 + (int)uVar9 * -8;
      }
      else {
        uVar9 = (ulonglong)(uVar11 >> 3);
        uVar13 = 0;
        uVar11 = uVar11 & 7;
      }
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    else {
      puVar12 = (ulonglong *)&DAT_143364710;
      uVar13 = 3;
    }
LAB_142c6f32c:
    if (uVar13 != 0 || param_1 + param_2 + -3 <= puVar7) goto LAB_142c6f457;
    uVar13 = *(uint *)(lVar10 + uVar19 * 4);
    *puVar7 = (char)(uVar13 >> 0x10);
    uVar4 = *(uint *)(lVar10 + uVar18 * 4);
    puVar7[1] = (char)(uVar4 >> 0x10);
    iVar14 = (uVar13 >> 0x18) + uVar11;
    iVar6 = iVar14 + (uVar4 >> 0x18);
    uVar11 = *(uint *)(lVar10 + (((uVar9 << ((byte)uVar11 & 0x3f)) >>
                                 (-(char)(uVar13 >> 0x18) & 0x3fU)) + (ulonglong)(uVar13 & 0xffff))
                                * 4);
    iVar16 = (uVar11 >> 0x18) + iVar6;
    uVar19 = ((uVar9 << ((byte)iVar6 & 0x3f)) >> (-(char)(uVar11 >> 0x18) & 0x3fU)) +
             (ulonglong)(uVar11 & 0xffff);
    puVar7[2] = (char)(uVar11 >> 0x10);
    uVar13 = *(uint *)(lVar10 + (((uVar9 << ((byte)iVar14 & 0x3f)) >>
                                 (-(char)(uVar4 >> 0x18) & 0x3fU)) + (ulonglong)(uVar4 & 0xffff)) *
                                4);
    uVar11 = iVar16 + (uVar13 >> 0x18);
    puVar7[3] = (char)(uVar13 >> 0x10);
    uVar18 = ((uVar9 << ((byte)iVar16 & 0x3f)) >> (-(char)(uVar13 >> 0x18) & 0x3fU)) +
             (ulonglong)(uVar13 & 0xffff);
    puVar7 = puVar7 + 4;
  } while( true );
LAB_142c6f965:
  puVar8 = param_1 + param_2 + -2;
  if (puVar8 < puVar7) {
    return (undefined *)0xffffffffffffffba;
  }
  do {
    uVar13 = *(uint *)(puStackX_20 + uVar19 * 2 + 2);
    uVar11 = uVar11 + (uVar13 >> 0x18);
    uVar19 = (uVar9 >> (-(char)uVar11 & 0x3fU) & (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
             (ulonglong)(uVar13 & 0xffff);
    *puVar7 = (char)(uVar13 >> 0x10);
    puVar21 = puVar7 + 1;
    if (0x40 < uVar11) {
      *puVar21 = *(undefined *)(puStackX_20 + uVar18 * 2 + 3);
      return puVar21 + (1 - (longlong)param_1);
    }
    if (puVar12 < puVar17) {
      if (puVar12 != puVar20) {
        uVar13 = uVar11 >> 3;
        uVar9 = (ulonglong)uVar13;
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar13 = (int)puVar12 - iVar15;
          uVar9 = (ulonglong)uVar13;
        }
        uVar11 = uVar11 + uVar13 * -8;
        goto LAB_142c6f9fd;
      }
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
LAB_142c6f9fd:
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    if (puVar8 < puVar21) {
      return (undefined *)0xffffffffffffffba;
    }
    uVar13 = *(uint *)(puStackX_20 + uVar18 * 2 + 2);
    uVar11 = uVar11 + (uVar13 >> 0x18);
    uVar18 = (uVar9 >> (-(char)uVar11 & 0x3fU) & (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
             (ulonglong)(uVar13 & 0xffff);
    *puVar21 = (char)(uVar13 >> 0x10);
    puVar7 = puVar7 + 2;
    if (0x40 < uVar11) {
      *puVar7 = *(undefined *)(puStackX_20 + uVar19 * 2 + 3);
      return puVar7 + (1 - (longlong)param_1);
    }
    if (puVar12 < puVar17) {
      if (puVar12 != puVar20) {
        uVar13 = uVar11 >> 3;
        uVar9 = (ulonglong)uVar13;
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar13 = (int)puVar12 - iVar15;
          uVar9 = (ulonglong)uVar13;
        }
        uVar11 = uVar11 + uVar13 * -8;
        goto LAB_142c6fa8f;
      }
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
LAB_142c6fa8f:
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    if (puVar8 < puVar7) {
      return (undefined *)0xffffffffffffffba;
    }
  } while( true );
LAB_142c6f457:
joined_r0x000142c6f45e:
  if (param_1 + param_2 + -2 < puVar7) {
    return (undefined *)0xffffffffffffffba;
  }
  uVar4 = *(uint *)(lVar10 + uVar19 * 4);
  *puVar7 = (char)(uVar4 >> 0x10);
  uVar13 = (uVar4 >> 0x18) + uVar11;
  uVar19 = (ulonglong)(uVar4 & 0xffff) +
           ((uVar9 << ((byte)uVar11 & 0x3f)) >> (-(char)(uVar4 >> 0x18) & 0x3fU));
  puVar8 = puVar7 + 1;
  if (0x40 < uVar13) {
    *puVar8 = *(undefined *)(lVar5 + 0x206 + uVar18 * 4);
    return puVar8 + (1 - (longlong)param_1);
  }
  if (puVar12 < puVar17) {
    if (puVar12 != puVar20) {
      uVar11 = uVar13 >> 3;
      uVar9 = (ulonglong)uVar11;
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar11 = (int)puVar12 - iVar15;
        uVar9 = (ulonglong)uVar11;
      }
      uVar13 = uVar13 + uVar11 * -8;
      goto LAB_142c6f4f2;
    }
  }
  else {
    uVar9 = (ulonglong)(uVar13 >> 3);
    uVar13 = uVar13 & 7;
LAB_142c6f4f2:
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
  }
  if (param_1 + param_2 + -2 < puVar8) {
    return (undefined *)0xffffffffffffffba;
  }
  uVar4 = *(uint *)(lVar10 + uVar18 * 4);
  *puVar8 = (char)(uVar4 >> 0x10);
  uVar11 = (uVar4 >> 0x18) + uVar13;
  uVar18 = (ulonglong)(uVar4 & 0xffff) +
           ((uVar9 << ((byte)uVar13 & 0x3f)) >> (-(char)(uVar4 >> 0x18) & 0x3fU));
  puVar7 = puVar7 + 2;
  if (0x40 < uVar11) {
    *puVar7 = *(undefined *)(lVar5 + 0x206 + uVar19 * 4);
    return puVar7 + (1 - (longlong)param_1);
  }
  if (puVar12 < puVar17) goto LAB_142c6f546;
  uVar9 = (ulonglong)(uVar11 >> 3);
  uVar11 = uVar11 & 7;
  goto LAB_142c6f578;
LAB_142c6f546:
  if (puVar12 != puVar20) {
    uVar13 = uVar11 >> 3;
    uVar9 = (ulonglong)uVar13;
    if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
      uVar13 = (int)puVar12 - iVar15;
      uVar9 = (ulonglong)uVar13;
    }
    uVar11 = uVar11 + uVar13 * -8;
LAB_142c6f578:
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
  }
  goto joined_r0x000142c6f45e;
}


/* address=142c6ecc0 name=FUN_142c6ecc0 */

undefined8
FUN_142c6ecc0(uint *param_1,short *param_2,uint param_3,uint param_4,short *param_5,
             ulonglong param_6)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  short *psVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong *puVar16;
  uint uVar17;
  byte *pbVar18;
  short *psVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uStackX_18;
  ulonglong uVar15;
  
  uVar20 = param_3 + 1;
  uVar22 = (ulonglong)uVar20;
  psVar19 = param_5 + (ulonglong)param_3 + 1;
  bVar6 = (byte)param_4;
  uVar21 = 1 << (bVar6 & 0x1f);
  uVar12 = uVar21 - 1;
  uVar10 = (ulonglong)uVar12;
  if ((param_6 < (1L << (bVar6 & 0x3f)) + (ulonglong)uVar20 * 2 + 8) || (0xff < param_3)) {
    return 0xffffffffffffffd2;
  }
  if (0xc < param_4) {
    return 0xffffffffffffffd4;
  }
  uVar13 = 0;
  uStackX_18 = CONCAT22(1,(short)param_4);
  if (uVar20 != 0) {
    psVar8 = param_5;
    uVar15 = uVar13;
    do {
      sVar3 = *(short *)(((longlong)param_2 - (longlong)param_5) + (longlong)psVar8);
      if (sVar3 == -1) {
        *(char *)((longlong)param_1 + uVar10 * 4 + 6) = (char)uVar15;
        sVar3 = 1;
        uVar10 = (ulonglong)((int)uVar10 - 1);
      }
      else if ((short)(1 << (bVar6 - 1 & 0x1f)) <= sVar3) {
        uStackX_18 = uStackX_18 & 0xffff;
      }
      uVar12 = (uint)uVar10;
      *psVar8 = sVar3;
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      psVar8 = psVar8 + 1;
    } while (uVar14 < uVar20);
  }
  uVar17 = uVar21 - 1;
  uVar14 = (uVar21 >> 1) + 3 + (uVar21 >> 3);
  *param_1 = uStackX_18;
  if (uVar12 == uVar17) {
    uVar11 = (ulonglong)uVar17;
    uVar10 = uVar13;
    uVar15 = uVar13;
    if (uVar20 != 0) {
      do {
        lVar5 = (longlong)*param_2;
        *(ulonglong *)((longlong)psVar19 + uVar15) = uVar10;
        if (8 < lVar5) {
          puVar16 = (ulonglong *)((longlong)psVar19 + uVar15 + 8);
          for (lVar9 = (lVar5 - 9U >> 3) + 1; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar16 = uVar10;
            puVar16 = puVar16 + 1;
          }
        }
        param_2 = param_2 + 1;
        uVar22 = uVar22 - 1;
        uVar10 = uVar10 + 0x101010101010101;
        uVar15 = uVar15 + lVar5;
      } while (uVar22 != 0);
    }
    if (uVar21 != 0) {
      lVar5 = ((ulonglong)uVar21 - 1 >> 1) + 1;
      uVar10 = uVar13;
      do {
        *(undefined *)((longlong)param_1 + (uVar10 & uVar11) * 4 + 6) = *(undefined *)psVar19;
        uVar22 = uVar10 + uVar14;
        uVar10 = uVar10 + (ulonglong)uVar14 * 2 & uVar11;
        *(undefined *)((longlong)param_1 + (uVar22 & uVar11) * 4 + 6) =
             *(undefined *)((longlong)psVar19 + 1);
        lVar5 = lVar5 + -1;
        psVar19 = psVar19 + 1;
      } while (lVar5 != 0);
    }
  }
  else {
    uVar10 = uVar13;
    uVar22 = uVar13;
    if (uVar20 != 0) {
      do {
        uVar15 = uVar13;
        if (0 < *param_2) {
          do {
            uVar4 = (uint)uVar10;
            *(char *)((longlong)param_1 + uVar10 * 4 + 6) = (char)uVar22;
            do {
              uVar4 = uVar4 + uVar14 & uVar17;
              uVar10 = (ulonglong)uVar4;
            } while (uVar12 < uVar4);
            uVar4 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar4;
          } while ((int)uVar4 < (int)*param_2);
        }
        uVar4 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar4;
        param_2 = param_2 + 1;
      } while (uVar4 < uVar20);
      if ((int)uVar10 != 0) {
        return 0xffffffffffffffff;
      }
    }
  }
  if (uVar21 != 0) {
    pbVar18 = (byte *)((longlong)param_1 + 7);
    do {
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar1 = param_5[pbVar18[-1]];
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      param_5[pbVar18[-1]] = uVar1 + 1;
      bVar7 = bVar6 - (char)iVar2;
      *pbVar18 = bVar7;
      *(ushort *)(pbVar18 + -3) = (uVar1 << (bVar7 & 0x1f)) - (short)uVar21;
      pbVar18 = pbVar18 + 4;
    } while (uVar12 < uVar21);
  }
  return 0;
}


/* address=142c6ef50 name=FUN_142c6ef50 */

undefined *
FUN_142c6ef50(undefined *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
             longlong param_6,ulonglong param_7)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  undefined *puVar21;
  bool bVar22;
  int aiStackX_18 [2];
  ushort *puStackX_20;
  ulonglong in_stack_ffffffffffffff90;
  
  uVar9 = param_7;
  lVar5 = param_6;
  aiStackX_18[0] = 0xff;
  puVar1 = (ushort *)(param_6 + 0x200);
  if (param_7 < 0x200) {
    return (undefined *)0xffffffffffffffff;
  }
  puStackX_20 = puVar1;
  puVar7 = (undefined *)
           thunk_FUN_142bfbe40(param_6,aiStackX_18,&param_6,param_3,param_4,
                               in_stack_ffffffffffffff90 & 0xffffffff00000000);
  if ((undefined *)0xffffffffffffff88 < puVar7) {
    return puVar7;
  }
  if (param_5 < (uint)param_6) {
    return (undefined *)0xffffffffffffffd4;
  }
  puVar20 = (ulonglong *)(puVar7 + param_3);
  puVar7 = (undefined *)(param_4 - (longlong)puVar7);
  iVar15 = 1 << ((byte)(uint)param_6 & 0x1f);
  if (uVar9 < (((ulonglong)(aiStackX_18[0] + 1) * 2 + 0xb + (1L << ((byte)(uint)param_6 & 0x3f)) >>
               2) + (longlong)(iVar15 + 2)) * 4 + 0x204) {
    return (undefined *)0xffffffffffffffd4;
  }
  lVar10 = (longlong)(iVar15 + 1);
  puVar8 = (undefined *)
           FUN_142c6ecc0(puVar1,lVar5,aiStackX_18[0],(uint)param_6,lVar5 + (lVar10 + 0x80) * 4,
                         uVar9 + lVar10 * -4 + -0x200);
  if ((undefined *)0xffffffffffffff88 < puVar8) {
    return puVar8;
  }
  iVar15 = (int)puVar20;
  if (*(short *)(lVar5 + 0x202) == 0) {
    if (puVar7 == (undefined *)0x0) {
      return (undefined *)0xffffffffffffffb8;
    }
    puVar17 = puVar20 + 1;
    if (puVar7 < (undefined *)0x8) {
      uVar9 = (ulonglong)*(byte *)puVar20;
      switch(puVar7) {
      case (undefined *)0x7:
        uVar9 = ((ulonglong)*(byte *)((longlong)puVar20 + 6) << 0x30) + uVar9;
      case (undefined *)0x6:
        uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 5) << 0x28);
      case (undefined *)0x5:
        uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 4) << 0x20);
      case (undefined *)0x4:
        uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 3) * 0x1000000;
      case (undefined *)0x3:
        uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 0x10000;
      case (undefined *)0x2:
        uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 1) * 0x100;
      }
      bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
      if (bVar2 == 0) {
        return (undefined *)0xffffffffffffffec;
      }
      iVar14 = 0x1f;
      if (bVar2 != 0) {
        for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar6 = (9 - (int)puVar7) * 8;
      puVar12 = puVar20;
    }
    else {
      bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
      uVar9 = *(ulonglong *)(puVar7 + -8 + (longlong)puVar20);
      if (bVar2 == 0) {
        return (undefined *)0xffffffffffffffff;
      }
      iVar14 = 0x1f;
      if (bVar2 != 0) {
        for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
        }
      }
      iVar6 = 8;
      puVar12 = (ulonglong *)(puVar7 + -8 + (longlong)puVar20);
    }
    if ((undefined *)0xffffffffffffff88 < puVar7) {
      return puVar7;
    }
    uVar3 = *puVar1;
    uVar18 = (1L << ((byte)uVar3 & 0x3f)) - 1;
    uVar11 = (uint)uVar3 + (iVar6 - iVar14);
    uVar19 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
    if (uVar11 < 0x41) {
      if (puVar12 < puVar17) {
        if (puVar12 == puVar20) goto LAB_142c6f71b;
        uVar9 = (ulonglong)(uVar11 >> 3);
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
        }
        uVar11 = uVar11 + (int)uVar9 * -8;
      }
      else {
        uVar9 = (ulonglong)(uVar11 >> 3);
        uVar11 = uVar11 & 7;
      }
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    else {
      puVar12 = (ulonglong *)&DAT_143364710;
    }
LAB_142c6f71b:
    uVar11 = uVar11 + uVar3;
    uVar18 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
    if (0x40 < uVar11) {
      return (undefined *)0xffffffffffffffec;
    }
    if (puVar12 < puVar17) {
      if (puVar12 != puVar20) {
        uVar9 = (ulonglong)(uVar11 >> 3);
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
        }
        uVar11 = uVar11 + (int)uVar9 * -8;
        goto LAB_142c6f790;
      }
      if (uVar11 < 0x40) goto LAB_142c6f796;
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
LAB_142c6f790:
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
LAB_142c6f796:
      if (0x40 < uVar11) {
        return (undefined *)0xffffffffffffffec;
      }
    }
    puVar7 = param_1;
    if (puVar12 < puVar17) {
      if (puVar12 == puVar20) goto LAB_142c6f7e5;
      uVar13 = uVar11 >> 3;
      uVar9 = (ulonglong)uVar13;
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar13 = (int)puVar12 - iVar15;
        uVar9 = (ulonglong)uVar13;
      }
      uVar11 = uVar11 + uVar13 * -8;
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
    }
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
LAB_142c6f7e5:
    do {
      if (uVar11 < 0x41) {
        if (puVar12 < puVar17) {
          if (puVar12 == puVar20) {
            uVar13 = 2 - (uVar11 < 0x40);
            goto LAB_142c6f847;
          }
          uVar9 = (ulonglong)(uVar11 >> 3);
          bVar22 = (ulonglong *)((longlong)puVar12 - uVar9) < puVar20;
          if (bVar22) {
            uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
          }
          uVar13 = (uint)bVar22;
          uVar11 = uVar11 + (int)uVar9 * -8;
        }
        else {
          uVar9 = (ulonglong)(uVar11 >> 3);
          uVar13 = 0;
          uVar11 = uVar11 & 7;
        }
        puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
        uVar9 = *puVar12;
      }
      else {
        puVar12 = (ulonglong *)&DAT_143364710;
        uVar13 = 3;
      }
LAB_142c6f847:
      if (uVar13 != 0 || param_1 + param_2 + -3 <= puVar7) goto LAB_142c6f965;
      uVar13 = *(uint *)(puStackX_20 + uVar19 * 2 + 2);
      *puVar7 = (char)(uVar13 >> 0x10);
      uVar4 = *(uint *)(puStackX_20 + uVar18 * 2 + 2);
      puVar7[1] = (char)(uVar4 >> 0x10);
      iVar14 = (uVar13 >> 0x18) + uVar11;
      iVar6 = iVar14 + (uVar4 >> 0x18);
      uVar11 = *(uint *)(puStackX_20 +
                        ((uVar9 >> (-(char)iVar14 & 0x3fU) &
                         (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
                        (ulonglong)(uVar13 & 0xffff)) * 2 + 2);
      iVar14 = iVar6 + (uVar11 >> 0x18);
      uVar19 = (uVar9 >> (-(char)iVar14 & 0x3fU) & (1L << ((byte)(uVar11 >> 0x18) & 0x3f)) - 1U) +
               (ulonglong)(uVar11 & 0xffff);
      puVar7[2] = (char)(uVar11 >> 0x10);
      uVar13 = *(uint *)(puStackX_20 +
                        ((uVar9 >> (-(char)iVar6 & 0x3fU) &
                         (1L << ((byte)(uVar4 >> 0x18) & 0x3f)) - 1U) + (ulonglong)(uVar4 & 0xffff))
                        * 2 + 2);
      uVar11 = (uVar13 >> 0x18) + iVar14;
      uVar18 = (uVar9 >> (-(char)uVar11 & 0x3fU) & (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
               (ulonglong)(uVar13 & 0xffff);
      puVar7[3] = (char)(uVar13 >> 0x10);
      puVar7 = puVar7 + 4;
    } while( true );
  }
  if (puVar7 == (undefined *)0x0) {
    return (undefined *)0xffffffffffffffb8;
  }
  puVar17 = puVar20 + 1;
  if (puVar7 < (undefined *)0x8) {
    uVar9 = (ulonglong)*(byte *)puVar20;
    switch(puVar7) {
    case (undefined *)0x7:
      uVar9 = ((ulonglong)*(byte *)((longlong)puVar20 + 6) << 0x30) + uVar9;
    case (undefined *)0x6:
      uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 5) << 0x28);
    case (undefined *)0x5:
      uVar9 = uVar9 + ((ulonglong)*(byte *)((longlong)puVar20 + 4) << 0x20);
    case (undefined *)0x4:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 3) * 0x1000000;
    case (undefined *)0x3:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 2) * 0x10000;
    case (undefined *)0x2:
      uVar9 = uVar9 + (ulonglong)*(byte *)((longlong)puVar20 + 1) * 0x100;
    }
    bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
    if (bVar2 == 0) {
      return (undefined *)0xffffffffffffffec;
    }
    iVar14 = 0x1f;
    if (bVar2 != 0) {
      for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = (9 - (int)puVar7) * 8;
    puVar12 = puVar20;
  }
  else {
    bVar2 = *(byte *)((longlong)puVar20 + (longlong)(puVar7 + -1));
    uVar9 = *(ulonglong *)(puVar7 + -8 + (longlong)puVar20);
    if (bVar2 == 0) {
      return (undefined *)0xffffffffffffffff;
    }
    iVar14 = 0x1f;
    if (bVar2 != 0) {
      for (; bVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 8;
    puVar12 = (ulonglong *)(puVar7 + -8 + (longlong)puVar20);
  }
  if ((undefined *)0xffffffffffffff88 < puVar7) {
    return puVar7;
  }
  uVar3 = *puVar1;
  uVar18 = (1L << ((byte)uVar3 & 0x3f)) - 1;
  uVar11 = (uint)uVar3 + (iVar6 - iVar14);
  uVar19 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
  if (uVar11 < 0x41) {
    if (puVar12 < puVar17) {
      if (puVar12 == puVar20) goto LAB_142c6f200;
      uVar9 = (ulonglong)(uVar11 >> 3);
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
      }
      uVar11 = uVar11 + (int)uVar9 * -8;
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
    }
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
  }
  else {
    puVar12 = (ulonglong *)&DAT_143364710;
  }
LAB_142c6f200:
  lVar10 = lVar5 + 0x204;
  uVar11 = uVar3 + uVar11;
  uVar18 = uVar9 >> (-(char)uVar11 & 0x3fU) & uVar18;
  if (0x40 < uVar11) {
    return (undefined *)0xffffffffffffffec;
  }
  if (puVar12 < puVar17) {
    if (puVar12 != puVar20) {
      uVar9 = (ulonglong)(uVar11 >> 3);
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
      }
      uVar11 = uVar11 + (int)uVar9 * -8;
      goto LAB_142c6f275;
    }
    if (uVar11 < 0x40) goto LAB_142c6f27a;
  }
  else {
    uVar9 = (ulonglong)(uVar11 >> 3);
    uVar11 = uVar11 & 7;
LAB_142c6f275:
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
LAB_142c6f27a:
    if (0x40 < uVar11) {
      return (undefined *)0xffffffffffffffec;
    }
  }
  puVar7 = param_1;
  if (puVar12 < puVar17) {
    if (puVar12 == puVar20) goto LAB_142c6f2d0;
    uVar13 = uVar11 >> 3;
    uVar9 = (ulonglong)uVar13;
    if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
      uVar13 = (int)puVar12 - iVar15;
      uVar9 = (ulonglong)uVar13;
    }
    uVar11 = uVar11 + uVar13 * -8;
  }
  else {
    uVar9 = (ulonglong)(uVar11 >> 3);
    uVar11 = uVar11 & 7;
  }
  puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
  uVar9 = *puVar12;
LAB_142c6f2d0:
  do {
    puVar17 = puVar20 + 1;
    if (uVar11 < 0x41) {
      if (puVar12 < puVar17) {
        if (puVar12 == puVar20) {
          uVar13 = 2 - (uVar11 < 0x40);
          goto LAB_142c6f32c;
        }
        uVar9 = (ulonglong)(uVar11 >> 3);
        bVar22 = (ulonglong *)((longlong)puVar12 - uVar9) < puVar20;
        if (bVar22) {
          uVar9 = (ulonglong)(uint)((int)puVar12 - iVar15);
        }
        uVar13 = (uint)bVar22;
        uVar11 = uVar11 + (int)uVar9 * -8;
      }
      else {
        uVar9 = (ulonglong)(uVar11 >> 3);
        uVar13 = 0;
        uVar11 = uVar11 & 7;
      }
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    else {
      puVar12 = (ulonglong *)&DAT_143364710;
      uVar13 = 3;
    }
LAB_142c6f32c:
    if (uVar13 != 0 || param_1 + param_2 + -3 <= puVar7) goto LAB_142c6f457;
    uVar13 = *(uint *)(lVar10 + uVar19 * 4);
    *puVar7 = (char)(uVar13 >> 0x10);
    uVar4 = *(uint *)(lVar10 + uVar18 * 4);
    puVar7[1] = (char)(uVar4 >> 0x10);
    iVar14 = (uVar13 >> 0x18) + uVar11;
    iVar6 = iVar14 + (uVar4 >> 0x18);
    uVar11 = *(uint *)(lVar10 + (((uVar9 << ((byte)uVar11 & 0x3f)) >>
                                 (-(char)(uVar13 >> 0x18) & 0x3fU)) + (ulonglong)(uVar13 & 0xffff))
                                * 4);
    iVar16 = (uVar11 >> 0x18) + iVar6;
    uVar19 = ((uVar9 << ((byte)iVar6 & 0x3f)) >> (-(char)(uVar11 >> 0x18) & 0x3fU)) +
             (ulonglong)(uVar11 & 0xffff);
    puVar7[2] = (char)(uVar11 >> 0x10);
    uVar13 = *(uint *)(lVar10 + (((uVar9 << ((byte)iVar14 & 0x3f)) >>
                                 (-(char)(uVar4 >> 0x18) & 0x3fU)) + (ulonglong)(uVar4 & 0xffff)) *
                                4);
    uVar11 = iVar16 + (uVar13 >> 0x18);
    puVar7[3] = (char)(uVar13 >> 0x10);
    uVar18 = ((uVar9 << ((byte)iVar16 & 0x3f)) >> (-(char)(uVar13 >> 0x18) & 0x3fU)) +
             (ulonglong)(uVar13 & 0xffff);
    puVar7 = puVar7 + 4;
  } while( true );
LAB_142c6f965:
  puVar8 = param_1 + param_2 + -2;
  if (puVar8 < puVar7) {
    return (undefined *)0xffffffffffffffba;
  }
  do {
    uVar13 = *(uint *)(puStackX_20 + uVar19 * 2 + 2);
    uVar11 = uVar11 + (uVar13 >> 0x18);
    uVar19 = (uVar9 >> (-(char)uVar11 & 0x3fU) & (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
             (ulonglong)(uVar13 & 0xffff);
    *puVar7 = (char)(uVar13 >> 0x10);
    puVar21 = puVar7 + 1;
    if (0x40 < uVar11) {
      *puVar21 = *(undefined *)(puStackX_20 + uVar18 * 2 + 3);
      return puVar21 + (1 - (longlong)param_1);
    }
    if (puVar12 < puVar17) {
      if (puVar12 != puVar20) {
        uVar13 = uVar11 >> 3;
        uVar9 = (ulonglong)uVar13;
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar13 = (int)puVar12 - iVar15;
          uVar9 = (ulonglong)uVar13;
        }
        uVar11 = uVar11 + uVar13 * -8;
        goto LAB_142c6f9fd;
      }
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
LAB_142c6f9fd:
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    if (puVar8 < puVar21) {
      return (undefined *)0xffffffffffffffba;
    }
    uVar13 = *(uint *)(puStackX_20 + uVar18 * 2 + 2);
    uVar11 = uVar11 + (uVar13 >> 0x18);
    uVar18 = (uVar9 >> (-(char)uVar11 & 0x3fU) & (1L << ((byte)(uVar13 >> 0x18) & 0x3f)) - 1U) +
             (ulonglong)(uVar13 & 0xffff);
    *puVar21 = (char)(uVar13 >> 0x10);
    puVar7 = puVar7 + 2;
    if (0x40 < uVar11) {
      *puVar7 = *(undefined *)(puStackX_20 + uVar19 * 2 + 3);
      return puVar7 + (1 - (longlong)param_1);
    }
    if (puVar12 < puVar17) {
      if (puVar12 != puVar20) {
        uVar13 = uVar11 >> 3;
        uVar9 = (ulonglong)uVar13;
        if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
          uVar13 = (int)puVar12 - iVar15;
          uVar9 = (ulonglong)uVar13;
        }
        uVar11 = uVar11 + uVar13 * -8;
        goto LAB_142c6fa8f;
      }
    }
    else {
      uVar9 = (ulonglong)(uVar11 >> 3);
      uVar11 = uVar11 & 7;
LAB_142c6fa8f:
      puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
      uVar9 = *puVar12;
    }
    if (puVar8 < puVar7) {
      return (undefined *)0xffffffffffffffba;
    }
  } while( true );
LAB_142c6f457:
joined_r0x000142c6f45e:
  if (param_1 + param_2 + -2 < puVar7) {
    return (undefined *)0xffffffffffffffba;
  }
  uVar4 = *(uint *)(lVar10 + uVar19 * 4);
  *puVar7 = (char)(uVar4 >> 0x10);
  uVar13 = (uVar4 >> 0x18) + uVar11;
  uVar19 = (ulonglong)(uVar4 & 0xffff) +
           ((uVar9 << ((byte)uVar11 & 0x3f)) >> (-(char)(uVar4 >> 0x18) & 0x3fU));
  puVar8 = puVar7 + 1;
  if (0x40 < uVar13) {
    *puVar8 = *(undefined *)(lVar5 + 0x206 + uVar18 * 4);
    return puVar8 + (1 - (longlong)param_1);
  }
  if (puVar12 < puVar17) {
    if (puVar12 != puVar20) {
      uVar11 = uVar13 >> 3;
      uVar9 = (ulonglong)uVar11;
      if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
        uVar11 = (int)puVar12 - iVar15;
        uVar9 = (ulonglong)uVar11;
      }
      uVar13 = uVar13 + uVar11 * -8;
      goto LAB_142c6f4f2;
    }
  }
  else {
    uVar9 = (ulonglong)(uVar13 >> 3);
    uVar13 = uVar13 & 7;
LAB_142c6f4f2:
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
  }
  if (param_1 + param_2 + -2 < puVar8) {
    return (undefined *)0xffffffffffffffba;
  }
  uVar4 = *(uint *)(lVar10 + uVar18 * 4);
  *puVar8 = (char)(uVar4 >> 0x10);
  uVar11 = (uVar4 >> 0x18) + uVar13;
  uVar18 = (ulonglong)(uVar4 & 0xffff) +
           ((uVar9 << ((byte)uVar13 & 0x3f)) >> (-(char)(uVar4 >> 0x18) & 0x3fU));
  puVar7 = puVar7 + 2;
  if (0x40 < uVar11) {
    *puVar7 = *(undefined *)(lVar5 + 0x206 + uVar19 * 4);
    return puVar7 + (1 - (longlong)param_1);
  }
  if (puVar12 < puVar17) goto LAB_142c6f546;
  uVar9 = (ulonglong)(uVar11 >> 3);
  uVar11 = uVar11 & 7;
  goto LAB_142c6f578;
LAB_142c6f546:
  if (puVar12 != puVar20) {
    uVar13 = uVar11 >> 3;
    uVar9 = (ulonglong)uVar13;
    if ((ulonglong *)((longlong)puVar12 - uVar9) < puVar20) {
      uVar13 = (int)puVar12 - iVar15;
      uVar9 = (ulonglong)uVar13;
    }
    uVar11 = uVar11 + uVar13 * -8;
LAB_142c6f578:
    puVar12 = (ulonglong *)((longlong)puVar12 - uVar9);
    uVar9 = *puVar12;
  }
  goto joined_r0x000142c6f45e;
}


/* address=142c6fb80 name=FUN_142c6fb80 */

void FUN_142c6fb80(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c6fbb0 name=FUN_142c6fbb0 */

void FUN_142c6fbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05f60(param_1,param_2,param_3,&LAB_142c6fb30);
  return;
}


/* address=142c6fbf0 name=FUN_142c6fbf0 */

void FUN_142c6fbf0(undefined8 param_1)

{
  FUN_142b06400(param_1,&LAB_142c6fb30);
  return;
}


/* address=142c6fc20 name=FUN_142c6fc20 */

undefined ** FUN_142c6fc20(void)

{
  return &PTR_s_Load_certs_from_files_in_a_direc_143cf7b88;
}


/* address=142c6fc30 name=FUN_142c6fc30 */

undefined8 FUN_142c6fc30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c6fd00 name=FUN_142c6fd00 */

void FUN_142c6fd00(undefined8 param_1)

{
  FUN_142b058a0(param_1);
  return;
}


/* address=142c6fd20 name=FUN_142c6fd20 */

void FUN_142c6fd20(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c6fd50 name=FUN_142c6fd50 */

void FUN_142c6fd50(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c6fc80,param_2);
  return;
}


/* address=142c6fd80 name=FUN_142c6fd80 */

void FUN_142c6fd80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05f60(param_1,param_2,param_3,&LAB_142c6fcb0);
  return;
}


/* address=142c6fdc0 name=FUN_142c6fdc0 */

void FUN_142c6fdc0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c6fdf0 name=FUN_142c6fdf0 */

void FUN_142c6fdf0(undefined8 param_1)

{
  FUN_142b06400(param_1,&LAB_142c6fcb0);
  return;
}


/* address=142c6fe50 name=FUN_142c6fe50 */

void FUN_142c6fe50(void)

{
  FUN_142b05960();
  return;
}


/* address=142c6fe70 name=FUN_142c6fe70 */

void FUN_142c6fe70(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c6fe90 name=FUN_142c6fe90 */

void FUN_142c6fe90(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c6fec0 name=FUN_142c6fec0 */

void FUN_142c6fec0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c6fe20,param_2);
  return;
}


/* address=142c6fef0 name=FUN_142c6fef0 */

void FUN_142c6fef0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c70100 name=FUN_142c70100 */

undefined8 FUN_142c70100(longlong param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  char **ppcVar5;
  size_t sVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  size_t _MaxCount;
  char *pcStack_38;
  ulonglong uStack_30;
  char *pcStack_20;
  
  if ((param_2 == (char *)0x0) || (pcStack_38 = param_2, pcStack_20 = param_2, *param_2 == '\0')) {
    FUN_142afa690(0xb,0,0x6e,s_D__a_1_s_target_release_build_bo_143cf7c30,0xbc);
    uVar9 = 0;
  }
  else {
    do {
      if ((*pcStack_38 == ':') || (pcVar3 = pcStack_20, *pcStack_38 == '\0')) {
        pcVar3 = pcStack_38 + 1;
        _MaxCount = (longlong)pcStack_38 - (longlong)pcStack_20;
        if (_MaxCount != 0) {
          for (uStack_30 = 0; uVar4 = FUN_142c6fe70(*(undefined8 *)(param_1 + 8)), uStack_30 < uVar4
              ; uStack_30 = uStack_30 + 1) {
            ppcVar5 = (char **)FUN_142c6fe90(*(undefined8 *)(param_1 + 8),uStack_30);
            sVar6 = strlen(*ppcVar5);
            if ((sVar6 == _MaxCount) && (iVar2 = strncmp(*ppcVar5,pcStack_20,_MaxCount), iVar2 == 0)
               ) break;
          }
          uVar4 = FUN_142c6fe70(*(undefined8 *)(param_1 + 8));
          if (uVar4 <= uStack_30) {
            if (*(longlong *)(param_1 + 8) == 0) {
              uVar9 = FUN_142c6fe50();
              *(undefined8 *)(param_1 + 8) = uVar9;
              if (*(longlong *)(param_1 + 8) == 0) {
                return 0;
              }
            }
            plVar7 = (longlong *)FUN_142b0e970(0x18);
            if (plVar7 == (longlong *)0x0) {
              return 0;
            }
            *(undefined4 *)(plVar7 + 1) = param_3;
            lVar8 = FUN_142c6fd00(&LAB_142c709f0);
            plVar7[2] = lVar8;
            lVar8 = FUN_142b0e970(_MaxCount + 1);
            *plVar7 = lVar8;
            if ((*plVar7 == 0) || (plVar7[2] == 0)) {
              FUN_142c70a40(plVar7);
              return 0;
            }
            FUN_142b0f4a0(*plVar7,pcStack_20,_MaxCount + 1);
            lVar8 = FUN_142c6fef0(*(undefined8 *)(param_1 + 8),plVar7);
            if (lVar8 == 0) {
              FUN_142c70a40(plVar7);
              return 0;
            }
          }
        }
      }
      pcStack_20 = pcVar3;
      cVar1 = *pcStack_38;
      pcStack_38 = pcStack_38 + 1;
    } while (cVar1 != '\0');
    uVar9 = 1;
  }
  return uVar9;
}


/* address=142c70a40 name=FUN_142c70a40 */

void FUN_142c70a40(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_142b0eaa0(*param_1);
    FUN_142c6fd50(param_1[2],&LAB_142c709d0);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142c70a90 name=FUN_142c70a90 */

uint FUN_142c70a90(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=142c70ab0 name=FUN_142c70ab0 */

uint FUN_142c70ab0(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=142c70b00 name=FUN_142c70b00 */

void FUN_142c70b00(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c70b20 name=FUN_142c70b20 */

void FUN_142c70b20(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c70b50 name=FUN_142c70b50 */

void FUN_142c70b50(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c70ad0,param_2);
  return;
}


/* address=142c70b80 name=FUN_142c70b80 */

undefined ** FUN_142c70b80(void)

{
  return &PTR_s_Load_file_into_cache_143cf7da8;
}


/* address=142c70b90 name=FUN_142c70b90 */

int FUN_142c70b90(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iStack_28;
  int iStack_20;
  longlong lStack_18;
  
  iStack_20 = 0;
  iStack_28 = 0;
  lStack_18 = 0;
  uVar3 = FUN_142c08ac0();
  lVar4 = FUN_142b6bca0(uVar3);
  if ((lVar4 == 0) || (iVar1 = FUN_142c08ca0(lVar4,param_2), iVar1 < 1)) {
    FUN_142afa690(0xb,0,2,s_D__a_1_s_target_release_build_bo_143cf7e50,0x7b);
    goto LAB_142c70dab;
  }
  if (param_3 == 1) {
    while (lStack_18 = FUN_142c09680(lVar4,0,0,0), lStack_18 != 0) {
      iVar1 = FUN_142af82f0(*(undefined8 *)(param_1 + 0x18));
      if (iVar1 == 0) goto LAB_142c70dab;
      iStack_28 = iStack_28 + 1;
      FUN_142af5df0(lStack_18);
    }
    uVar2 = FUN_142af9e20();
    iVar1 = FUN_142c70a90(uVar2);
    if (((iVar1 != 9) || (iVar1 = FUN_142c70ab0(uVar2), iVar1 != 0x6e)) || (iStack_28 < 1)) {
      FUN_142afa690(0xb,0,9,s_D__a_1_s_target_release_build_bo_143cf7ec0,0x89);
      goto LAB_142c70dab;
    }
    FUN_142afa330();
    iStack_20 = iStack_28;
    iVar1 = iStack_20;
  }
  else {
    if (param_3 != 2) {
      FUN_142afa690(0xb,0,0x66,s_D__a_1_s_target_release_build_bo_143cf7fa0,0xa1);
      goto LAB_142c70dab;
    }
    lStack_18 = FUN_142b73df0(lVar4,0);
    if (lStack_18 == 0) {
      FUN_142afa690(0xb,0,0xc,s_D__a_1_s_target_release_build_bo_143cf7f30,0x98);
      goto LAB_142c70dab;
    }
    iVar1 = FUN_142af82f0(*(undefined8 *)(param_1 + 0x18),lStack_18);
    if (iVar1 == 0) goto LAB_142c70dab;
  }
  iStack_20 = iVar1;
  if (iStack_20 == 0) {
    FUN_142afa690(0xb,0,0x8d,s_D__a_1_s_target_release_build_bo_143cf8010,0xa6);
  }
LAB_142c70dab:
  FUN_142af5df0(lStack_18);
  FUN_142b6bd40(lVar4);
  return iStack_20;
}


/* address=142c70dd0 name=FUN_142c70dd0 */

int FUN_142c70dd0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iStack_28;
  int iStack_20;
  longlong lStack_18;
  
  iStack_20 = 0;
  iStack_28 = 0;
  lStack_18 = 0;
  uVar3 = FUN_142c08ac0();
  lVar4 = FUN_142b6bca0(uVar3);
  if ((lVar4 == 0) || (iVar1 = FUN_142c08ca0(lVar4,param_2), iVar1 < 1)) {
    FUN_142afa690(0xb,0,2,s_D__a_1_s_target_release_build_bo_143cf8080,0xb8);
    goto LAB_142c70feb;
  }
  if (param_3 == 1) {
    while (lStack_18 = FUN_142c09b80(lVar4,0,0,0), lStack_18 != 0) {
      iVar1 = FUN_142af8320(*(undefined8 *)(param_1 + 0x18));
      if (iVar1 == 0) goto LAB_142c70feb;
      iStack_28 = iStack_28 + 1;
      FUN_142c1b1d0(lStack_18);
    }
    uVar2 = FUN_142af9e20();
    iVar1 = FUN_142c70a90(uVar2);
    if (((iVar1 != 9) || (iVar1 = FUN_142c70ab0(uVar2), iVar1 != 0x6e)) || (iStack_28 < 1)) {
      FUN_142afa690(0xb,0,9,s_D__a_1_s_target_release_build_bo_143cf80f0,0xc6);
      goto LAB_142c70feb;
    }
    FUN_142afa330();
    iStack_20 = iStack_28;
    iVar1 = iStack_20;
  }
  else {
    if (param_3 != 2) {
      FUN_142afa690(0xb,0,0x66,s_D__a_1_s_target_release_build_bo_143cf81d0,0xde);
      goto LAB_142c70feb;
    }
    lStack_18 = FUN_142b73e60(lVar4,0);
    if (lStack_18 == 0) {
      FUN_142afa690(0xb,0,0xc,s_D__a_1_s_target_release_build_bo_143cf8160,0xd5);
      goto LAB_142c70feb;
    }
    iVar1 = FUN_142af8320(*(undefined8 *)(param_1 + 0x18),lStack_18);
    if (iVar1 == 0) goto LAB_142c70feb;
  }
  iStack_20 = iVar1;
  if (iStack_20 == 0) {
    FUN_142afa690(0xb,0,0x8f,s_D__a_1_s_target_release_build_bo_143cf8240,0xe3);
  }
LAB_142c70feb:
  FUN_142c1b1d0(lStack_18);
  FUN_142b6bd40(lVar4);
  return iStack_20;
}


/* address=142c71010 name=FUN_142c71010 */

ulonglong FUN_142c71010(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uStack_38;
  ulonglong uStack_30;
  
  uStack_38 = 0;
  if (param_3 == 1) {
    lVar3 = FUN_142c08ad0(param_2,&DAT_143cf82a4);
    if (lVar3 == 0) {
      FUN_142afa690(0xb,0,2,s_D__a_1_s_target_release_build_bo_143cf82b0,0xf8);
      uVar2 = 0;
    }
    else {
      lVar4 = FUN_142c8d940(lVar3,0,0,0);
      FUN_142b6bd40(lVar3);
      if (lVar4 == 0) {
        FUN_142afa690(0xb,0,9,s_D__a_1_s_target_release_build_bo_143cf8320,0xfe);
        uVar2 = 0;
      }
      else {
        for (uStack_30 = 0; uVar2 = FUN_142c70b00(lVar4), uStack_30 < uVar2;
            uStack_30 = uStack_30 + 1) {
          plVar5 = (longlong *)FUN_142c70b20(lVar4);
          if (*plVar5 != 0) {
            iVar1 = FUN_142af82f0(*(undefined8 *)(param_1 + 0x18));
            if (iVar1 == 0) goto LAB_142c711b7;
            uStack_38 = uStack_38 + 1;
          }
          if (plVar5[1] != 0) {
            iVar1 = FUN_142af8320(*(undefined8 *)(param_1 + 0x18));
            if (iVar1 == 0) goto LAB_142c711b7;
            uStack_38 = uStack_38 + 1;
          }
        }
        if (uStack_38 == 0) {
          FUN_142afa690(0xb,0,0x8e,s_D__a_1_s_target_release_build_bo_143cf8390,0x112);
        }
LAB_142c711b7:
        FUN_142c70b50(lVar4,FUN_142c8d7c0);
        uVar2 = (ulonglong)uStack_38;
      }
    }
  }
  else {
    uVar2 = FUN_142c70b90(param_1,param_2,param_3);
  }
  return uVar2;
}


/* address=142c71350 name=FUN_142c71350 */

int FUN_142c71350(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iStack_48;
  ulonglong uStack_38;
  
  iStack_48 = 0;
  lVar2 = FUN_142c71ed0(param_1);
  lVar3 = FUN_142c71de0();
  if ((lVar3 != 0) && (iVar1 = FUN_142c8e0f0(lVar3,param_2,0), iVar1 != 0)) {
    for (uStack_38 = 0; uVar4 = FUN_142c71e00(lVar3), uStack_38 < uVar4; uStack_38 = uStack_38 + 1)
    {
      uVar7 = FUN_142c71e20(lVar3,uStack_38);
      lVar5 = FUN_142af5fb0(uVar7);
      if ((lVar5 == 0) || (lVar6 = FUN_142c71f70(param_1,lVar5), lVar6 == 0)) {
        FUN_142af5df0(lVar5);
        goto LAB_142c7141e;
      }
    }
    iStack_48 = 1;
  }
LAB_142c7141e:
  FUN_142c71e50(lVar3,FUN_142b06ae0);
  if (iStack_48 == 0) {
    while (lVar3 = FUN_142c71ed0(param_1), lVar3 != lVar2) {
      uVar7 = FUN_142c71fa0(param_1);
      FUN_142af5df0(uVar7);
    }
  }
  return iStack_48;
}


/* address=142c71480 name=FUN_142c71480 */

void FUN_142c71480(undefined8 param_1,undefined8 param_2)

{
  FUN_142c8e500(param_1,0,&LAB_142c72190,0,param_2);
  return;
}


/* address=142c714c0 name=FUN_142c714c0 */

int FUN_142c714c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iStack_68;
  int iStack_64;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined auStack_48 [16];
  longlong lStack_38;
  longlong lStack_30;
  undefined auStack_28 [16];
  undefined auStack_18 [24];
  
  uStack_50 = 0;
  iStack_68 = 0;
  lStack_30 = FUN_142c72010(param_1);
  iVar1 = FUN_142c8e330(&uStack_50,auStack_18,param_2);
  if (((iVar1 != 0) && (iVar1 = FUN_142b78fa0(auStack_18,0,0,0xa0000000), iVar1 != 0)) &&
     (iVar1 = FUN_142b78fa0(auStack_18,auStack_28,&iStack_64,0xa0000001), iVar1 != 0)) {
    if (iStack_64 == 0) {
      FUN_142b78260(auStack_28,0,0);
    }
    do {
      lVar4 = FUN_142b782f0(auStack_28);
      if (lVar4 == 0) {
        iStack_68 = 1;
        goto LAB_142c71658;
      }
      iVar1 = FUN_142b78ad0(auStack_28,auStack_48,0x20000010);
      if ((iVar1 == 0) || (uVar3 = FUN_142b782f0(auStack_48), 0x7fffffff < uVar3))
      goto LAB_142c71658;
      lStack_58 = FUN_142b782d0(auStack_48);
      uVar2 = FUN_142b782f0(auStack_48);
      lStack_60 = FUN_142c1b200(0,&lStack_58,uVar2);
      if (lStack_60 == 0) goto LAB_142c71658;
      lStack_38 = FUN_142b782d0(auStack_48);
      lVar4 = FUN_142b782f0(auStack_48);
      if (lStack_58 != lStack_38 + lVar4) {
        FID_conflict__assert((wchar_t *)s_i_143cf84d0,(wchar_t *)s_D_143cf8400,0x6b);
      }
      lVar4 = FUN_142c720b0(param_1,lStack_60);
    } while (lVar4 != 0);
    FUN_142c1b1d0(lStack_60);
  }
LAB_142c71658:
  FUN_142b0eaa0(uStack_50);
  if (iStack_68 == 0) {
    while (lVar4 = FUN_142c72010(param_1), lVar4 != lStack_30) {
      uVar5 = FUN_142c720e0(param_1);
      FUN_142c1b1d0(uVar5);
    }
  }
  return iStack_68;
}


/* address=142c71810 name=FUN_142c71810 */

longlong FUN_142c71810(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined auStack_20 [32];
  
  FUN_142b78260(auStack_20,*param_2,param_3);
  lVar1 = FUN_142c723b0(auStack_20);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = FUN_142b782d0(auStack_20);
    *param_2 = uVar2;
    if (param_1 != (longlong *)0x0) {
      FUN_142c71a80(*param_1);
      *param_1 = lVar1;
    }
  }
  return lVar1;
}


/* address=142c71940 name=FUN_142c71940 */

undefined4 FUN_142c71940(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((ulonglong)param_1[1] < 0x80000000) {
    if (param_2 == (longlong *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 1);
    }
    else {
      if (*param_2 == 0) {
        lVar2 = FUN_142b0e970(param_1[1]);
        *param_2 = lVar2;
        if (*param_2 == 0) {
          return 0xffffffff;
        }
        FUN_142c72100(*param_2,*param_1,param_1[1]);
      }
      else {
        FUN_142c72100(*param_2,*param_1,param_1[1]);
        *param_2 = *param_2 + param_1[1];
      }
      uVar1 = *(undefined4 *)(param_1 + 1);
    }
  }
  else {
    FUN_142afa690(0x13,0,0x45,s_D__a_1_s_target_release_build_bo_143cf8540,0x140);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* address=142c71a80 name=FUN_142c71a80 */

void FUN_142c71a80(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_142b0eaa0(*param_1);
    FUN_142b6d6c0(param_1[2]);
    if (param_1[3] != 0) {
      FUN_142c71f40(*(undefined8 *)param_1[3],FUN_142af5df0);
      FUN_142c72080(*(undefined8 *)(param_1[3] + 8),FUN_142c1b1d0);
      FUN_142b0eaa0(param_1[3]);
    }
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142c71de0 name=FUN_142c71de0 */

void FUN_142c71de0(void)

{
  FUN_142b05960();
  return;
}


/* address=142c71e00 name=FUN_142c71e00 */

void FUN_142c71e00(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c71e20 name=FUN_142c71e20 */

void FUN_142c71e20(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c71e50 name=FUN_142c71e50 */

void FUN_142c71e50(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c71db0,param_2);
  return;
}


/* address=142c71eb0 name=FUN_142c71eb0 */

void FUN_142c71eb0(void)

{
  FUN_142b05960();
  return;
}


/* address=142c71ed0 name=FUN_142c71ed0 */

void FUN_142c71ed0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c71ef0 name=FUN_142c71ef0 */

void FUN_142c71ef0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c71f20 name=FUN_142c71f20 */

void FUN_142c71f20(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142c71f40 name=FUN_142c71f40 */

void FUN_142c71f40(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c71e80,param_2);
  return;
}


/* address=142c71f70 name=FUN_142c71f70 */

void FUN_142c71f70(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c71fa0 name=FUN_142c71fa0 */

void FUN_142c71fa0(undefined8 param_1)

{
  FUN_142b062b0(param_1);
  return;
}


/* address=142c71ff0 name=FUN_142c71ff0 */

void FUN_142c71ff0(void)

{
  FUN_142b05960();
  return;
}


/* address=142c72010 name=FUN_142c72010 */

void FUN_142c72010(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c72030 name=FUN_142c72030 */

void FUN_142c72030(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c72060 name=FUN_142c72060 */

void FUN_142c72060(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142c72080 name=FUN_142c72080 */

void FUN_142c72080(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c71fc0,param_2);
  return;
}


/* address=142c720b0 name=FUN_142c720b0 */

void FUN_142c720b0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c720e0 name=FUN_142c720e0 */

void FUN_142c720e0(undefined8 param_1)

{
  FUN_142b062b0(param_1);
  return;
}


/* address=142c72100 name=FUN_142c72100 */

undefined8 FUN_142c72100(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c72150 name=FUN_142c72150 */

undefined8 FUN_142c72150(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c723b0 name=FUN_142c723b0 */

longlong * FUN_142c723b0(undefined *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  plVar2 = (longlong *)FUN_142b0e970(0x20);
  if (plVar2 != (longlong *)0x0) {
    FUN_142c72150(plVar2,0,0x20);
    lVar3 = FUN_142c16060(0x16);
    plVar2[2] = lVar3;
    lVar3 = FUN_142b0e970(0x10);
    plVar2[3] = lVar3;
    if (plVar2[3] != 0) {
      uVar4 = FUN_142c71eb0();
      *(undefined8 *)plVar2[3] = uVar4;
      uVar4 = FUN_142c71ff0();
      *(undefined8 *)(plVar2[3] + 8) = uVar4;
      puVar6 = param_1;
      puVar7 = auStack_28;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = param_1;
      puVar7 = auStack_38;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      if ((((*(longlong *)plVar2[3] != 0) && (*(longlong *)(plVar2[3] + 8) != 0)) &&
          (iVar1 = FUN_142c71350(*(undefined8 *)plVar2[3],auStack_28), iVar1 != 0)) &&
         (iVar1 = FUN_142c714c0(*(undefined8 *)(plVar2[3] + 8),param_1), iVar1 != 0)) {
        lVar3 = FUN_142c71ed0(*(undefined8 *)plVar2[3]);
        if (lVar3 == 0) {
          FUN_142c71f20(*(undefined8 *)plVar2[3]);
          *(undefined8 *)plVar2[3] = 0;
        }
        lVar3 = FUN_142c72010(*(undefined8 *)(plVar2[3] + 8));
        if (lVar3 == 0) {
          FUN_142c72060(*(undefined8 *)(plVar2[3] + 8));
          *(undefined8 *)(plVar2[3] + 8) = 0;
        }
        lVar3 = FUN_142b782f0(auStack_38);
        lVar5 = FUN_142b782f0(param_1);
        plVar2[1] = lVar3 - lVar5;
        uVar4 = FUN_142b782d0(auStack_38);
        lVar3 = FUN_142b0f440(uVar4,plVar2[1]);
        *plVar2 = lVar3;
        if (*plVar2 != 0) {
          return plVar2;
        }
      }
    }
    FUN_142c71a80(plVar2);
  }
  return (longlong *)0x0;
}


/* address=142c725c0 name=FUN_142c725c0 */

undefined4 FUN_142c725c0(undefined8 param_1)

{
  int iVar1;
  undefined auStack_40 [64];
  
  iVar1 = FUN_142b7ac70(param_1,auStack_40,0x20000010);
  if (((iVar1 != 0) && (iVar1 = FUN_142c161c0(auStack_40,0x2a0), iVar1 != 0)) &&
     (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142c72630 name=FUN_142c72630 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_142c72630(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uStack_34;
  undefined auStack_28 [40];
  
  lVar2 = FUN_142b0e970(CONCAT44(_UNK_1433648bc,DAT_1433648b8));
  if (lVar2 == 0) {
    uStack_34 = 0;
  }
  else {
    FUN_142b11d10(auStack_28);
    uStack_34 = 0;
    uVar3 = FUN_142b11c20();
    iVar1 = FUN_142b47c60(auStack_28,0,uVar3,0,param_4);
    if (iVar1 != 0) {
      while (iVar1 = FUN_142b6be20(param_5,lVar2,DAT_1433648b8), iVar1 != 0) {
        if ((iVar1 < 0) || (iVar1 = FUN_142b47cb0(auStack_28,lVar2,(longlong)iVar1), iVar1 == 0))
        goto LAB_142c72727;
      }
      *param_2 = param_3;
      iVar1 = FUN_142b47d20(auStack_28,param_1,param_2);
      if (iVar1 != 0) {
        uStack_34 = 1;
      }
    }
LAB_142c72727:
    FUN_142b11d80(auStack_28);
    FUN_142b0eaa0(lVar2);
  }
  return uStack_34;
}


/* address=142c72950 name=FUN_142c72950 */

undefined8 FUN_142c72950(undefined8 param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte abStack_28 [4];
  uint uStack_24;
  uint uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  iVar1 = FUN_142b784f0(param_1,abStack_28);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (abStack_28[0] < 0x80) {
    *param_2 = (uint)abStack_28[0];
    uVar2 = 1;
  }
  else {
    if ((abStack_28[0] & 0xe0) == 0xc0) {
      uStack_24 = abStack_28[0] & 0x1f;
      uStack_18 = 1;
      uStack_20 = 0x80;
    }
    else if ((abStack_28[0] & 0xf0) == 0xe0) {
      uStack_24 = abStack_28[0] & 0xf;
      uStack_18 = 2;
      uStack_20 = 0x800;
    }
    else {
      if ((abStack_28[0] & 0xf8) != 0xf0) {
        return 0;
      }
      uStack_24 = abStack_28[0] & 7;
      uStack_18 = 3;
      uStack_20 = 0x10000;
    }
    for (uStack_10 = 0; uStack_10 < uStack_18; uStack_10 = uStack_10 + 1) {
      iVar1 = FUN_142b784f0(param_1,abStack_28);
      if ((iVar1 == 0) || ((abStack_28[0] & 0xc0) != 0x80)) {
        return 0;
      }
      uStack_24 = uStack_24 << 6 | abStack_28[0] & 0x3f;
    }
    iVar1 = FUN_142c72f00(uStack_24);
    if ((iVar1 == 0) || (uStack_24 < uStack_20)) {
      uVar2 = 0;
    }
    else {
      *param_2 = uStack_24;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=142c72b30 name=FUN_142c72b30 */

undefined8 FUN_142c72b30(undefined8 param_1,uint *param_2)

{
  int iVar1;
  ushort auStack_18 [12];
  
  iVar1 = FUN_142b78540(param_1,auStack_18);
  if ((iVar1 != 0) && (iVar1 = FUN_142c72f00(auStack_18[0]), iVar1 != 0)) {
    *param_2 = (uint)auStack_18[0];
    return 1;
  }
  return 0;
}


/* address=142c72b90 name=FUN_142c72b90 */

undefined4 FUN_142c72b90(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_142b78630(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_142c72f00(*param_2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142c72bf0 name=FUN_142c72bf0 */

undefined8 FUN_142c72bf0(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x80) {
    uVar1 = 1;
  }
  else if (param_1 < 0x800) {
    uVar1 = 2;
  }
  else if (param_1 < 0x10000) {
    uVar1 = 3;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}


/* address=142c72c30 name=FUN_142c72c30 */

ulonglong FUN_142c72c30(undefined8 param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined uStackX_10;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  iVar1 = FUN_142c72f00(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 < 0x80) {
    uStackX_10 = (undefined)param_2;
    uVar2 = FUN_142b7af20(param_1,uStackX_10);
    return uVar2;
  }
  if (param_2 < 0x800) {
    iVar1 = FUN_142b7af20(param_1,param_2 >> 6 & 0xff | 0xc0);
    if ((iVar1 == 0) || (iVar1 = FUN_142b7af20(param_1,param_2 & 0x3f | 0x80), iVar1 == 0)) {
      uStack_18 = 0;
    }
    else {
      uStack_18 = 1;
    }
    return (ulonglong)uStack_18;
  }
  if (param_2 < 0x10000) {
    iVar1 = FUN_142b7af20(param_1,param_2 >> 0xc & 0xff | 0xe0);
    if (((iVar1 == 0) || (iVar1 = FUN_142b7af20(param_1,param_2 >> 6 & 0x3f | 0x80), iVar1 == 0)) ||
       (iVar1 = FUN_142b7af20(param_1,param_2 & 0x3f | 0x80), iVar1 == 0)) {
      uStack_14 = 0;
    }
    else {
      uStack_14 = 1;
    }
    return (ulonglong)uStack_14;
  }
  if (param_2 < 0x110000) {
    iVar1 = FUN_142b7af20(param_1,param_2 >> 0x12 & 0xff | 0xf0);
    if ((((iVar1 == 0) || (iVar1 = FUN_142b7af20(param_1,param_2 >> 0xc & 0x3f | 0x80), iVar1 == 0))
        || (iVar1 = FUN_142b7af20(param_1,param_2 >> 6 & 0x3f | 0x80), iVar1 == 0)) ||
       (iVar1 = FUN_142b7af20(param_1,param_2 & 0x3f | 0x80), iVar1 == 0)) {
      uStack_10 = 0;
    }
    else {
      uStack_10 = 1;
    }
    return (ulonglong)uStack_10;
  }
  return 0;
}


/* address=142c72e00 name=FUN_142c72e00 */

undefined4 FUN_142c72e00(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined uStackX_10;
  
  if (param_2 < 0x100) {
    uStackX_10 = (undefined)param_2;
    iVar1 = FUN_142b7af20(param_1,uStackX_10);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=142c72e50 name=FUN_142c72e50 */

undefined4 FUN_142c72e50(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined2 uStackX_10;
  
  if ((param_2 < 0x10000) && (iVar1 = FUN_142c72f00(param_2), iVar1 != 0)) {
    uStackX_10 = (undefined2)param_2;
    iVar1 = FUN_142b7af50(param_1,uStackX_10);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=142c72f00 name=FUN_142c72f00 */

undefined8 FUN_142c72f00(uint param_1)

{
  undefined8 uVar1;
  
  if ((((param_1 < 0x110000) && ((param_1 & 0xfffe) != 0xfffe)) &&
      ((param_1 < 0xfdd0 || (0xfdef < param_1)))) && ((param_1 < 0xd800 || (0xdfff < param_1)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142c72f50 name=FUN_142c72f50 */

void FUN_142c72f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined auStack_168 [32];
  char cStack_148;
  uint uStack_144;
  uint uStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined4 uStack_128;
  undefined auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_168;
  cStack_148 = '\0';
  puStack_138 = &uStackX_18;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  uStack_144 = FUN_142b0f9d0(auStack_118,0x100,param_2,puStack_138);
  puStack_138 = (undefined8 *)0x0;
  if (-1 < (int)uStack_144) {
    if (uStack_144 < 0x100) {
      puStack_130 = auStack_118;
    }
    else {
      uStack_140 = uStack_144;
      puStack_130 = (undefined *)FUN_142b0e970((longlong)(int)(uStack_144 + 1));
      cStack_148 = '\x01';
      if (puStack_130 == (undefined *)0x0) goto LAB_142c730ae;
      puStack_138 = &uStackX_18;
      uStack_144 = FUN_142b0f9d0(puStack_130,(longlong)(int)(uStack_140 + 1),param_2,puStack_138);
      puStack_138 = (undefined8 *)0x0;
      if (uStack_144 != uStack_140) {
        FID_conflict__assert((wchar_t *)s_o_143cf86e0,(wchar_t *)s_D_143cf8620,0x5b);
      }
    }
    uStack_128 = FUN_142b6c000(param_1,puStack_130,uStack_144);
    if (cStack_148 != '\0') {
      FUN_142b0eaa0(puStack_130);
    }
  }
LAB_142c730ae:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_168);
  return;
}


/* address=142c73100 name=FUN_142c73100 */

void FUN_142c73100(void)

{
  FUN_142b05960();
  return;
}


/* address=142c73120 name=FUN_142c73120 */

void FUN_142c73120(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c73140 name=FUN_142c73140 */

void FUN_142c73140(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c73170 name=FUN_142c73170 */

void FUN_142c73170(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c730d0,param_2);
  return;
}


/* address=142c731d0 name=FUN_142c731d0 */

void FUN_142c731d0(void)

{
  FUN_142b05960();
  return;
}


/* address=142c731f0 name=FUN_142c731f0 */

void FUN_142c731f0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c73210 name=FUN_142c73210 */

void FUN_142c73210(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c73240 name=FUN_142c73240 */

void FUN_142c73240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05a40(param_1,param_2,param_3);
  return;
}


/* address=142c73280 name=FUN_142c73280 */

void FUN_142c73280(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c731a0,param_2);
  return;
}


/* address=142c732b0 name=FUN_142c732b0 */

void FUN_142c732b0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c732e0 name=FUN_142c732e0 */

/* WARNING: Removing unreachable block (ram,0x000142c73560) */

void FUN_142c732e0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 auStackX_18 [2];
  undefined auStack_188 [32];
  uint uStack_168;
  uint uStack_160;
  uint uStack_158;
  int iStack_148;
  byte *pbStack_140;
  ushort uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  char acStack_128 [16];
  char acStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_188;
  uStack_134 = *param_2;
  auStackX_18[0] = param_3;
  switch(uStack_134) {
  case 0:
    FUN_142c20670(s_othername_143cf8730,s_<unsupported>_143cf8720,auStackX_18);
    break;
  case 1:
    func_0x000142c201d0(s_email_143cf8780,*(undefined8 *)(param_2 + 2),auStackX_18);
    break;
  case 2:
    func_0x000142c201d0(0x143cf8788,*(undefined8 *)(param_2 + 2),auStackX_18);
    break;
  case 3:
    FUN_142c20670(0x143cf8750,s_<unsupported>_143cf8740,auStackX_18);
    break;
  case 4:
    lVar1 = FUN_142c8e870(*(undefined8 *)(param_2 + 2),acStack_118,0x100);
    if (lVar1 != 0) {
      FUN_142c20670(s_DirName_143cf8790,acStack_118,auStackX_18);
    }
    break;
  case 5:
    FUN_142c20670(s_EdiPartyName_143cf8770,s_<unsupported>_143cf8760,auStackX_18);
    break;
  case 6:
    func_0x000142c201d0(0x143cf878c,*(undefined8 *)(param_2 + 2),auStackX_18);
    break;
  case 7:
    pbStack_140 = *(byte **)(*(longlong *)(param_2 + 2) + 8);
    if (**(int **)(param_2 + 2) == 4) {
      uStack_158 = (uint)pbStack_140[3];
      uStack_160 = (uint)pbStack_140[2];
      uStack_168 = (uint)pbStack_140[1];
      _snprintf(acStack_118,0x100,s__d__d__d__d_143cf8798,(ulonglong)*pbStack_140);
    }
    else {
      if (**(int **)(param_2 + 2) != 0x10) {
        FUN_142c20670(s_IP_Address_143cf87c0,s_<invalid>_143cf87b0,auStackX_18);
        break;
      }
      uStack_130 = 0;
      acStack_118[0] = '\0';
      for (iStack_148 = 0; iStack_148 < 8; iStack_148 = iStack_148 + 1) {
        uStack_138 = CONCAT11(*pbStack_140,pbStack_140[1]);
        _snprintf(acStack_128,5,(char *)0x143cf87a4,(ulonglong)uStack_138);
        pbStack_140 = pbStack_140 + 2;
        FUN_142b0f550(acStack_118,acStack_128,0x100);
        if (iStack_148 != 7) {
          FUN_142b0f550(acStack_118,0x143cf87a8,0x100);
        }
      }
    }
    FUN_142c20670(s_IP_Address_143cf87d0,acStack_118,auStackX_18);
    break;
  case 8:
    FUN_142b6dbf0(acStack_118,0x100,*(undefined8 *)(param_2 + 2));
    FUN_142c20670(s_Registered_ID_143cf87e0,acStack_118,auStackX_18);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_188);
  return;
}


/* address=142c73700 name=FUN_142c73700 */

undefined8 FUN_142c73700(undefined8 param_1,undefined4 *param_2)

{
  int iStack_24;
  undefined *puStack_18;
  
  switch(*param_2) {
  case 0:
    FUN_142c72f50(param_1,s_othername_<unsupported>_143cf87f0);
    break;
  case 1:
    FUN_142c72f50(param_1,0x143cf883c);
    FUN_142c51490(param_1,*(undefined8 *)(param_2 + 2));
    break;
  case 2:
    FUN_142c72f50(param_1,0x143cf8844);
    FUN_142c51490(param_1,*(undefined8 *)(param_2 + 2));
    break;
  case 3:
    FUN_142c72f50(param_1,s_X400Name_<unsupported>_143cf8808);
    break;
  case 4:
    FUN_142c72f50(param_1,s_DirName__143cf8858);
    FUN_142c55500(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
    break;
  case 5:
    FUN_142c72f50(param_1,s_EdiPartyName_<unsupported>_143cf8820);
    break;
  case 6:
    FUN_142c72f50(param_1,0x143cf884c);
    FUN_142c51490(param_1,*(undefined8 *)(param_2 + 2));
    break;
  case 7:
    puStack_18 = *(undefined **)(*(longlong *)(param_2 + 2) + 8);
    if (**(int **)(param_2 + 2) == 4) {
      FUN_142c72f50(param_1,s_IP_Address__d__d__d__d_143cf8868,*puStack_18,puStack_18[1],
                    puStack_18[2],puStack_18[3]);
    }
    else if (**(int **)(param_2 + 2) == 0x10) {
      FUN_142c72f50(param_1,s_IP_Address_143cf8880);
      for (iStack_24 = 0; iStack_24 < 8; iStack_24 = iStack_24 + 1) {
        FUN_142c72f50(param_1,0x143cf888c,CONCAT11(*puStack_18,puStack_18[1]));
        puStack_18 = puStack_18 + 2;
      }
      FUN_142b6c1a0(param_1,0x143cf8890);
    }
    else {
      FUN_142c72f50(param_1,s_IP_Address_<invalid>_143cf8898);
    }
    break;
  case 8:
    FUN_142c72f50(param_1,s_Registered_ID_143cf88b0);
    FUN_142b6dac0(param_1,*(undefined8 *)(param_2 + 2));
  }
  return 1;
}


/* address=142c739e0 name=FUN_142c739e0 */

longlong FUN_142c739e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lStackX_18;
  ulonglong uStack_20;
  
  uStack_20 = 0;
  lStackX_18 = param_3;
  while( true ) {
    uVar1 = FUN_142c731f0(param_2);
    if (uVar1 <= uStack_20) {
      if (lStackX_18 == 0) {
        lStackX_18 = FUN_142c73100();
      }
      return lStackX_18;
    }
    uVar2 = FUN_142c73210(param_2,uStack_20);
    lVar3 = FUN_142c732e0(param_1,uVar2,lStackX_18);
    if (lVar3 == 0) break;
    uStack_20 = uStack_20 + 1;
    lStackX_18 = lVar3;
  }
  if (param_3 == 0) {
    FUN_142c73170(lStackX_18,&LAB_142c1f1b0);
  }
  return 0;
}


/* address=142c73ac0 name=FUN_142c73ac0 */

longlong FUN_142c73ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uStack_28;
  
  lVar1 = FUN_142c731d0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    for (uStack_28 = 0; uVar2 = FUN_142c73120(param_3), uStack_28 < uVar2; uStack_28 = uStack_28 + 1
        ) {
      uVar3 = FUN_142c73140(param_3,uStack_28);
      lVar4 = FUN_142c73ec0(param_1,param_2,uVar3);
      if ((lVar4 == 0) || (lVar5 = FUN_142c732b0(lVar1,lVar4), lVar5 == 0)) {
        FUN_142b6ecc0(lVar4);
        FUN_142c73280(lVar1,FUN_142b6ecc0);
        return 0;
      }
    }
  }
  return lVar1;
}


/* address=142c73ba0 name=FUN_142c73ba0 */

undefined4 *
FUN_142c73ba0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char *param_5,int param_6)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puStack_20;
  
  if (param_5 == (char *)0x0) {
    FUN_142afa690(0x14,0,0x89,s_D__a_1_s_target_release_build_bo_143cf8a40,0x1c8);
  }
  else {
    puStack_20 = param_1;
    if ((param_1 != (undefined4 *)0x0) ||
       (puStack_20 = (undefined4 *)FUN_142b6eca0(), puStack_20 != (undefined4 *)0x0)) {
      switch(param_4) {
      case 0:
        iVar1 = func_0x000142c746f0(puStack_20,param_5,param_3);
        if (iVar1 != 0) {
          return puStack_20;
        }
        FUN_142afa690(0x14,0,0x94,s_D__a_1_s_target_release_build_bo_143cf8c00,0x207);
        break;
      case 1:
      case 2:
      case 6:
        lVar3 = FUN_142c0da50();
        if (lVar3 != 0) {
          sVar2 = strlen(param_5);
          iVar1 = FUN_142c137a0(lVar3,param_5,sVar2);
          if (iVar1 != 0) {
            *puStack_20 = param_4;
            *(longlong *)(puStack_20 + 2) = lVar3;
            return puStack_20;
          }
        }
        FUN_142c134e0(lVar3);
        break;
      default:
        FUN_142afa690(0x14,0,0xa1,s_D__a_1_s_target_release_build_bo_143cf8c70,0x20c);
        break;
      case 4:
        iVar1 = func_0x000142c74820(puStack_20,param_5,param_3);
        if (iVar1 != 0) {
          return puStack_20;
        }
        FUN_142afa690(0x14,0,0x69,s_D__a_1_s_target_release_build_bo_143cf8b90,0x200);
        break;
      case 7:
        *puStack_20 = 7;
        if (param_6 == 0) {
          uVar4 = func_0x000142c1f920(param_5);
          *(undefined8 *)(puStack_20 + 2) = uVar4;
        }
        else {
          uVar4 = func_0x000142c1f9b0(param_5);
          *(undefined8 *)(puStack_20 + 2) = uVar4;
        }
        if (*(longlong *)(puStack_20 + 2) != 0) {
          return puStack_20;
        }
        FUN_142afa690(0x14,0,100,s_D__a_1_s_target_release_build_bo_143cf8b20,0x1f8);
        FUN_142afa7b0(2,s_value__143cf8b84,param_5);
        break;
      case 8:
        lVar3 = FUN_142c16250(param_5,0);
        if (lVar3 != 0) {
          *puStack_20 = 8;
          *(longlong *)(puStack_20 + 2) = lVar3;
          return puStack_20;
        }
        FUN_142afa690(0x14,0,0x65,s_D__a_1_s_target_release_build_bo_143cf8ab0,0x1e7);
        FUN_142afa7b0(2,s_value__143cf8b14,param_5);
      }
      if (param_1 == (undefined4 *)0x0) {
        FUN_142b6ecc0(puStack_20);
      }
    }
  }
  return (undefined4 *)0x0;
}


/* address=142c73ec0 name=FUN_142c73ec0 */

void FUN_142c73ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c73f00(0,param_1,param_2,param_3,0);
  return;
}


/* address=142c73f00 name=FUN_142c73f00 */

undefined8
FUN_142c73f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  undefined4 uStack_28;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar3 = *(undefined8 *)(param_4 + 8);
  lVar1 = *(longlong *)(param_4 + 0x10);
  if (lVar1 == 0) {
    FUN_142afa690(0x14,0,0x89,s_D__a_1_s_target_release_build_bo_143cf8ce0,CONCAT44(uVar4,0x220));
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_142c1ff50(uVar3,s_email_143cf8d44);
    if (iVar2 == 0) {
      iVar2 = FUN_142c1ff50(uVar3,&DAT_143cf8d4c);
      if (iVar2 == 0) {
        iVar2 = FUN_142c1ff50(uVar3,&DAT_143cf8d50);
        if (iVar2 == 0) {
          iVar2 = FUN_142c1ff50(uVar3,&DAT_143cf8d54);
          if (iVar2 == 0) {
            iVar2 = FUN_142c1ff50(uVar3,&DAT_143cf8d58);
            if (iVar2 == 0) {
              iVar2 = FUN_142c1ff50(uVar3,s_dirName_143cf8d60);
              if (iVar2 == 0) {
                iVar2 = FUN_142c1ff50(uVar3,s_otherName_143cf8d68);
                if (iVar2 == 0) {
                  FUN_142afa690(0x14,0,0xa0,s_D__a_1_s_target_release_build_bo_143cf8d80,
                                CONCAT44(uVar4,0x234));
                  FUN_142afa7b0(2,s_name__143cf8de4,uVar3);
                  return 0;
                }
                uStack_28 = 0;
              }
              else {
                uStack_28 = 4;
              }
            }
            else {
              uStack_28 = 7;
            }
          }
          else {
            uStack_28 = 8;
          }
        }
        else {
          uStack_28 = 2;
        }
      }
      else {
        uStack_28 = 6;
      }
    }
    else {
      uStack_28 = 1;
    }
    uVar3 = FUN_142c73ba0(param_1,param_2,param_3,uStack_28,lVar1,param_5);
  }
  return uVar3;
}


/* address=142c74390 name=FUN_142c74390 */

undefined8 FUN_142c74390(int *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iStack_38;
  undefined4 *puStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  
  lStack_28 = 0;
  puStack_30 = (undefined4 *)0x0;
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    if ((param_1 == (int *)0x0) ||
       ((*(longlong *)(param_1 + 4) == 0 && (*(longlong *)(param_1 + 6) == 0)))) {
      FUN_142afa690(0x14,0,0x91,s_D__a_1_s_target_release_build_bo_143cf89d0,0x181);
    }
    else {
      if (*(longlong *)(param_1 + 4) == 0) {
        uStack_20 = FUN_142c55d70(*(undefined8 *)(param_1 + 6));
      }
      else {
        uStack_20 = FUN_142c04a70(*(undefined8 *)(param_1 + 4));
      }
      iStack_38 = -1;
      do {
        puStack_30 = (undefined4 *)0x0;
        iStack_38 = FUN_142c50450(uStack_20,0x30,iStack_38);
        if (iStack_38 < 0) {
          return 1;
        }
        uVar1 = FUN_142c50560(uStack_20,iStack_38);
        uVar2 = FUN_142c50b50(uVar1);
        lStack_28 = FUN_142c13590(uVar2);
        if (param_3 != 0) {
          FUN_142c505c0(uStack_20,iStack_38);
          FUN_142c055f0(uVar1);
          iStack_38 = iStack_38 + -1;
        }
        if ((lStack_28 == 0) ||
           (puStack_30 = (undefined4 *)FUN_142b6eca0(), puStack_30 == (undefined4 *)0x0)) break;
        *(longlong *)(puStack_30 + 2) = lStack_28;
        lStack_28 = 0;
        *puStack_30 = 1;
        lVar3 = FUN_142c732b0(param_2,puStack_30);
      } while (lVar3 != 0);
    }
    FUN_142b6ecc0(puStack_30);
    FUN_142c0db70(lStack_28);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142c74560 name=FUN_142c74560 */

undefined4 FUN_142c74560(int *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uStack_34;
  longlong lStack_30;
  ulonglong uStack_28;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    if ((param_1 == (int *)0x0) || (*(longlong *)(param_1 + 2) == 0)) {
      FUN_142afa690(0x14,0,0x8d,s_D__a_1_s_target_release_build_bo_143cf88d0,0x133);
      uStack_34 = 0;
    }
    else {
      iVar1 = FUN_142c52360(*(undefined8 *)(param_1 + 2),0x55,0xffffffff);
      if (iVar1 < 0) {
        uStack_34 = 1;
      }
      else {
        uStack_34 = 0;
        lStack_30 = 0;
        lVar2 = FUN_142c52420(*(undefined8 *)(param_1 + 2),iVar1);
        if ((lVar2 == 0) || (lStack_30 = FUN_142c58160(lVar2), lStack_30 == 0)) {
          FUN_142afa690(0x14,0,0x88,s_D__a_1_s_target_release_build_bo_143cf8940,0x140);
        }
        else {
          for (uStack_28 = 0; uVar3 = FUN_142c731f0(lStack_30), uStack_28 < uVar3;
              uStack_28 = uStack_28 + 1) {
            uVar4 = FUN_142c73210(lStack_30,uStack_28);
            lVar2 = FUN_142c732b0(param_2,uVar4);
            if (lVar2 == 0) goto LAB_142c746cf;
            FUN_142c73240(lStack_30,uStack_28,0);
          }
          uStack_34 = 1;
        }
LAB_142c746cf:
        FUN_142b6edb0(lStack_30);
      }
    }
  }
  else {
    uStack_34 = 1;
  }
  return uStack_34;
}


/* address=142c74940 name=FUN_142c74940 */

void FUN_142c74940(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c74960 name=FUN_142c74960 */

void FUN_142c74960(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c74990 name=FUN_142c74990 */

void FUN_142c74990(void)

{
  FUN_142c0e850(&DAT_143364a00);
  return;
}


/* address=142c749b0 name=FUN_142c749b0 */

void FUN_142c749b0(undefined8 param_1)

{
  FUN_142c0f130(param_1,&DAT_143364a00);
  return;
}


/* address=142c74c60 name=FUN_142c74c60 */

void FUN_142c74c60(void)

{
  FUN_142b05960();
  return;
}


/* address=142c74c80 name=FUN_142c74c80 */

void FUN_142c74c80(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c74ca0 name=FUN_142c74ca0 */

void FUN_142c74ca0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c74cd0 name=FUN_142c74cd0 */

void FUN_142c74cd0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c74c30,param_2);
  return;
}


/* address=142c74d30 name=FUN_142c74d30 */

void FUN_142c74d30(void)

{
  FUN_142b05960();
  return;
}


/* address=142c74d50 name=FUN_142c74d50 */

void FUN_142c74d50(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142c74d70 name=FUN_142c74d70 */

void FUN_142c74d70(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142c74da0 name=FUN_142c74da0 */

void FUN_142c74da0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142c74d00,param_2);
  return;
}


/* address=142c74dd0 name=FUN_142c74dd0 */

void FUN_142c74dd0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c74e30 name=FUN_142c74e30 */

void FUN_142c74e30(void)

{
  FUN_142c0e850(&DAT_143364ae0);
  return;
}


/* address=142c74f10 name=FUN_142c74f10 */

void FUN_142c74f10(undefined8 param_1)

{
  FUN_142c0f130(param_1,&DAT_143364b10);
  return;
}


/* address=142c753d0 name=FUN_142c753d0 */

undefined8 FUN_142c753d0(undefined8 param_1)

{
  return param_1;
}


/* address=142c753f0 name=FUN_142c753f0 */

longlong FUN_142c753f0(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=142c75410 name=FUN_142c75410 */

void FUN_142c75410(ulonglong param_1,ulonglong param_2)

{
  FUN_142c753f0(param_1 ^ (param_1 ^ param_2 | param_1 - param_2 ^ param_1));
  return;
}


/* address=142c75470 name=FUN_142c75470 */

void FUN_142c75470(undefined8 param_1,undefined8 param_2)

{
  FUN_142c75410(param_1,param_2);
  return;
}


/* address=142c754a0 name=FUN_142c754a0 */

ulonglong FUN_142c754a0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142c75410(param_1,param_2);
  return ~uVar1;
}


/* address=142c754d0 name=FUN_142c754d0 */

void FUN_142c754d0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c754a0(param_1,param_2);
  return;
}


/* address=142c75500 name=FUN_142c75500 */

void FUN_142c75500(ulonglong param_1)

{
  FUN_142c753f0(~param_1 & param_1 - 1);
  return;
}


/* address=142c75530 name=FUN_142c75530 */

void FUN_142c75530(ulonglong param_1,ulonglong param_2)

{
  FUN_142c75500(param_1 ^ param_2);
  return;
}


/* address=142c75570 name=FUN_142c75570 */

void FUN_142c75570(undefined8 param_1,undefined8 param_2)

{
  FUN_142c75530(param_1,param_2);
  return;
}


/* address=142c755a0 name=FUN_142c755a0 */

ulonglong FUN_142c755a0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_142c753d0(param_1);
  uVar2 = FUN_142c753d0(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=142c755f0 name=FUN_142c755f0 */

void FUN_142c755f0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_142c755a0(param_1,param_2,param_3);
  return;
}


/* address=142c75640 name=FUN_142c75640 */

uint FUN_142c75640(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=142c75660 name=FUN_142c75660 */

undefined8 FUN_142c75660(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c756b0 name=FUN_142c756b0 */

undefined8 FUN_142c756b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c756f0 name=FUN_142c756f0 */

void FUN_142c756f0(undefined8 param_1,undefined4 param_2)

{
  undefined4 auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  auStackX_10[0] = FUN_142c75640(param_2);
  FUN_142c75660(param_1,auStackX_10,4);
  return;
}


/* address=142c75730 name=FUN_142c75730 */

undefined8
FUN_142c75730(ulonglong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
             undefined8 param_5,longlong param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  if (param_4 < param_6 + 1U) {
    uVar6 = 0;
  }
  else {
    bVar1 = *(byte *)(param_3 + param_4 + -1);
    uVar4 = (ulonglong)bVar1;
    bVar2 = FUN_142c754a0(param_4,param_6 + 1U + uVar4);
    uStack_18 = 0x100;
    if (param_4 < 0x100) {
      uStack_18 = param_4;
    }
    for (uStack_20 = 0; uStack_20 < uStack_18; uStack_20 = uStack_20 + 1) {
      bVar3 = FUN_142c754d0(uVar4,uStack_20);
      bVar2 = bVar2 & ~(bVar3 & (bVar1 ^ *(byte *)(param_3 + ((param_4 - 1) - uStack_20))));
    }
    uVar5 = FUN_142c75530(0xff,bVar2);
    *param_2 = param_4 - (uVar5 & uVar4 + 1);
    *param_1 = uVar5;
    uVar6 = 1;
  }
  return uVar6;
}


/* address=142c758b0 name=FUN_142c758b0 */

void FUN_142c758b0(undefined8 param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  undefined *puVar1;
  undefined uVar2;
  undefined auStack_128 [32];
  byte bStack_108;
  byte bStack_107;
  char cStack_106;
  ulonglong uStack_100;
  undefined *puStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined *puStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  longlong lStack_a8;
  undefined *puStack_a0;
  undefined auStack_98 [64];
  undefined auStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_128;
  puStack_f8 = auStack_98;
  puStack_c8 = auStack_58;
  lStack_a8 = param_4 - param_2;
  uStack_b8 = param_4;
  if (param_5 < param_4) {
    FID_conflict__assert((wchar_t *)s_o_143cf9158,(wchar_t *)s_D_143cf9080,0x7c);
  }
  if (param_4 < param_2) {
    FID_conflict__assert((wchar_t *)s_i_143cf9258,(wchar_t *)s_D_143cf9180,0x7d);
  }
  if (0x40 < param_2) {
    FID_conflict__assert((wchar_t *)s_m_143cf9358,(wchar_t *)s_D_143cf9280,0x7e);
  }
  if (param_2 == 0) {
    FID_conflict__assert((wchar_t *)s_m_143cf9468,(wchar_t *)s_D_143cf9390,0x7f);
  }
  uStack_c0 = 0;
  if (param_2 + 0x100 < param_5) {
    uStack_c0 = param_5 - (param_2 + 0x100);
  }
  uStack_e0 = 0;
  bStack_108 = 0;
  FUN_142c756b0(puStack_f8,0,param_2);
  uStack_100 = 0;
  for (uStack_f0 = uStack_c0; uStack_f0 < param_5; uStack_f0 = uStack_f0 + 1) {
    if (param_2 <= uStack_100) {
      uStack_100 = uStack_100 - param_2;
    }
    uStack_b0 = FUN_142c75530(uStack_f0,lStack_a8);
    bStack_108 = bStack_108 | (byte)uStack_b0;
    bStack_107 = FUN_142c754d0(uStack_f0,uStack_b8);
    puStack_f8[uStack_100] =
         puStack_f8[uStack_100] | *(byte *)(param_3 + uStack_f0) & bStack_108 & ~bStack_107;
    uStack_e0 = uStack_e0 | uStack_100 & uStack_b0;
    uStack_100 = uStack_100 + 1;
  }
  for (uStack_d0 = 1; uStack_d0 < param_2; uStack_d0 = uStack_d0 << 1) {
    cStack_106 = ((byte)uStack_e0 & 1) - 1;
    uStack_e8 = uStack_d0;
    for (uStack_d8 = 0; uStack_d8 < param_2; uStack_d8 = uStack_d8 + 1) {
      if (param_2 <= uStack_e8) {
        uStack_e8 = uStack_e8 - param_2;
      }
      uVar2 = FUN_142c755f0(cStack_106,puStack_f8[uStack_d8],puStack_f8[uStack_e8]);
      puStack_c8[uStack_d8] = uVar2;
      uStack_e8 = uStack_e8 + 1;
    }
    puStack_a0 = puStack_f8;
    puVar1 = puStack_c8;
    puStack_c8 = puStack_f8;
    uStack_e0 = uStack_e0 >> 1;
    puStack_f8 = puVar1;
  }
  FUN_142c75660(param_1,puStack_f8,param_2);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=142c75ca0 name=FUN_142c75ca0 */

undefined8 FUN_142c75ca0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_142b12460(param_1);
  if ((iVar1 == 0x40) || (iVar1 == 0x2a0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142c75ce0 name=FUN_142c75ce0 */

void FUN_142c75ce0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined auStack_118 [32];
  byte bStack_f8;
  byte bStack_f7;
  byte abStack_f4 [4];
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  uint auStack_78 [8];
  byte abStack_58 [60];
  byte abStack_1c [4];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  uStack_b8 = param_5 * 8;
  if ((((*(int *)(param_1 + 0x18) == 0) && ((param_5 & 0x1fffffffffffffff) == param_5)) &&
      (uStack_b8 <= *(uint *)(param_1 + 0x14) + uStack_b8)) &&
     (*(uint *)(param_1 + 0x14) + uStack_b8 < 0x100000000)) {
    uStack_90 = (ulonglong)*(uint *)(param_1 + 0x5c) + 0x48 + param_4 >> 6;
    lStack_80 = uStack_90 - 1;
    uStack_88 = (ulonglong)*(uint *)(param_1 + 0x5c) + 0x48 + param_5 >> 6;
    lStack_b0 = (ulonglong)*(uint *)(param_1 + 0x14) + param_4 * 8;
    abStack_f4[0] = (byte)((ulonglong)lStack_b0 >> 0x18);
    abStack_f4[1] = (char)((ulonglong)lStack_b0 >> 0x10);
    abStack_f4[2] = (char)((ulonglong)lStack_b0 >> 8);
    abStack_f4[3] = (undefined)lStack_b0;
    pbVar3 = abStack_58;
    for (lVar2 = 0x40; lVar2 != 0; lVar2 = lVar2 + -1) {
      *pbVar3 = 0;
      pbVar3 = pbVar3 + 1;
    }
    puVar4 = auStack_78;
    for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined *)puVar4 = 0;
      puVar4 = (uint *)((longlong)puVar4 + 1);
    }
    uStack_e8 = 0;
    for (uStack_c8 = 0; uStack_c8 < uStack_88; uStack_c8 = uStack_c8 + 1) {
      uStack_e0 = 0;
      if (uStack_c8 == 0) {
        FUN_142c75660(abStack_58,param_1 + 0x1c,*(undefined4 *)(param_1 + 0x5c));
        uStack_e0 = (ulonglong)*(uint *)(param_1 + 0x5c);
      }
      if (uStack_e8 < param_5) {
        uStack_a8 = 0x40 - uStack_e0;
        if (param_5 - uStack_e8 < uStack_a8) {
          uStack_a8 = param_5 - uStack_e8;
        }
        FUN_142c75660(abStack_58 + uStack_e0,param_3 + uStack_e8,uStack_a8);
      }
      for (uStack_f0 = uStack_e0; uStack_f0 < 0x40; uStack_f0 = uStack_f0 + 1) {
        lStack_a0 = (uStack_e8 + uStack_f0) - uStack_e0;
        uVar1 = FUN_142c753d0(param_4);
        bStack_f8 = FUN_142c75470(lStack_a0,uVar1);
        uVar1 = FUN_142c753d0(param_4);
        bStack_f7 = FUN_142c75570(lStack_a0,uVar1);
        abStack_58[uStack_f0] = abStack_58[uStack_f0] & bStack_f8;
        abStack_58[uStack_f0] = abStack_58[uStack_f0] | bStack_f7 & 0x80;
      }
      uStack_e8 = uStack_e8 + (0x40 - uStack_e0);
      uStack_98 = FUN_142c75530(uStack_c8,lStack_80);
      for (uStack_d8 = 0; uStack_d8 < 4; uStack_d8 = uStack_d8 + 1) {
        abStack_1c[uStack_d8] = abStack_1c[uStack_d8] | (byte)uStack_98 & abStack_f4[uStack_d8];
      }
      FUN_142b10bf0(param_1,abStack_58);
      for (uStack_d0 = 0; uStack_d0 < 5; uStack_d0 = uStack_d0 + 1) {
        auStack_78[uStack_d0] =
             auStack_78[uStack_d0] | (uint)uStack_98 & *(uint *)(param_1 + uStack_d0 * 4);
      }
    }
    for (uStack_c0 = 0; uStack_c0 < 5; uStack_c0 = uStack_c0 + 1) {
      FUN_142c756f0(param_2 + uStack_c0 * 4,auStack_78[uStack_c0]);
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=142c761b0 name=FUN_142c761b0 */

void FUN_142c761b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined auStack_118 [32];
  byte bStack_f8;
  byte bStack_f7;
  byte abStack_f4 [4];
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  uint auStack_78 [8];
  byte abStack_58 [60];
  byte abStack_1c [4];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  uStack_b8 = param_5 * 8;
  if ((((*(int *)(param_1 + 0x24) == 0) && ((param_5 & 0x1fffffffffffffff) == param_5)) &&
      (uStack_b8 <= *(uint *)(param_1 + 0x20) + uStack_b8)) &&
     (*(uint *)(param_1 + 0x20) + uStack_b8 < 0x100000000)) {
    uStack_90 = (ulonglong)*(uint *)(param_1 + 0x68) + 0x48 + param_4 >> 6;
    lStack_80 = uStack_90 - 1;
    uStack_88 = (ulonglong)*(uint *)(param_1 + 0x68) + 0x48 + param_5 >> 6;
    lStack_b0 = (ulonglong)*(uint *)(param_1 + 0x20) + param_4 * 8;
    abStack_f4[0] = (byte)((ulonglong)lStack_b0 >> 0x18);
    abStack_f4[1] = (char)((ulonglong)lStack_b0 >> 0x10);
    abStack_f4[2] = (char)((ulonglong)lStack_b0 >> 8);
    abStack_f4[3] = (undefined)lStack_b0;
    pbVar3 = abStack_58;
    for (lVar2 = 0x40; lVar2 != 0; lVar2 = lVar2 + -1) {
      *pbVar3 = 0;
      pbVar3 = pbVar3 + 1;
    }
    puVar4 = auStack_78;
    for (lVar2 = 0x20; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined *)puVar4 = 0;
      puVar4 = (uint *)((longlong)puVar4 + 1);
    }
    uStack_e8 = 0;
    for (uStack_c8 = 0; uStack_c8 < uStack_88; uStack_c8 = uStack_c8 + 1) {
      uStack_e0 = 0;
      if (uStack_c8 == 0) {
        FUN_142c75660(abStack_58,param_1 + 0x28,*(undefined4 *)(param_1 + 0x68));
        uStack_e0 = (ulonglong)*(uint *)(param_1 + 0x68);
      }
      if (uStack_e8 < param_5) {
        uStack_a8 = 0x40 - uStack_e0;
        if (param_5 - uStack_e8 < uStack_a8) {
          uStack_a8 = param_5 - uStack_e8;
        }
        FUN_142c75660(abStack_58 + uStack_e0,param_3 + uStack_e8,uStack_a8);
      }
      for (uStack_f0 = uStack_e0; uStack_f0 < 0x40; uStack_f0 = uStack_f0 + 1) {
        lStack_a0 = (uStack_e8 + uStack_f0) - uStack_e0;
        uVar1 = FUN_142c753d0(param_4);
        bStack_f8 = FUN_142c75470(lStack_a0,uVar1);
        uVar1 = FUN_142c753d0(param_4);
        bStack_f7 = FUN_142c75570(lStack_a0,uVar1);
        abStack_58[uStack_f0] = abStack_58[uStack_f0] & bStack_f8;
        abStack_58[uStack_f0] = abStack_58[uStack_f0] | bStack_f7 & 0x80;
      }
      uStack_e8 = uStack_e8 + (0x40 - uStack_e0);
      uStack_98 = FUN_142c75530(uStack_c8,lStack_80);
      for (uStack_d8 = 0; uStack_d8 < 4; uStack_d8 = uStack_d8 + 1) {
        abStack_1c[uStack_d8] = abStack_1c[uStack_d8] | (byte)uStack_98 & abStack_f4[uStack_d8];
      }
      FUN_142b110b0(param_1,abStack_58);
      for (uStack_d0 = 0; uStack_d0 < 8; uStack_d0 = uStack_d0 + 1) {
        auStack_78[uStack_d0] =
             auStack_78[uStack_d0] | (uint)uStack_98 & *(uint *)(param_1 + uStack_d0 * 4);
      }
    }
    for (uStack_c0 = 0; uStack_c0 < 8; uStack_c0 = uStack_c0 + 1) {
      FUN_142c756f0(param_2 + uStack_c0 * 4,auStack_78[uStack_c0]);
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=142c76680 name=FUN_142c76680 */

undefined8
FUN_142c76680(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_142b12460(param_1);
  if (iVar1 == 0x40) {
    uVar2 = FUN_142c767a0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  else if (iVar1 == 0x2a0) {
    uVar2 = FUN_142c76a10(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  else {
    FID_conflict__assert((wchar_t *)&DAT_143cf927c,(wchar_t *)s_D_143cf9640,0x1fe);
    *param_3 = 0;
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142c767a0 name=FUN_142c767a0 */

void FUN_142c767a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,ulonglong param_6,undefined8 param_7,uint param_8)

{
  int iVar1;
  undefined auStack_118 [32];
  longlong lStack_f8;
  ulonglong uStack_e8;
  longlong lStack_e0;
  ulonglong uStack_d8;
  undefined auStack_c8 [96];
  byte abStack_68 [64];
  undefined auStack_28 [24];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  if (param_8 < 0x41) {
    FUN_142c756b0(abStack_68,0,0x40);
    FUN_142c75660(abStack_68,param_7,param_8);
    for (uStack_e8 = 0; uStack_e8 < 0x40; uStack_e8 = uStack_e8 + 1) {
      abStack_68[uStack_e8] = abStack_68[uStack_e8] ^ 0x36;
    }
    FUN_142b10900(auStack_c8);
    FUN_142b109a0(auStack_c8,abStack_68,0x40);
    FUN_142b109a0(auStack_c8,param_3,0xd);
    lStack_e0 = 0;
    if (0x114 < param_6) {
      lStack_e0 = param_6 - 0x114;
    }
    FUN_142b109a0(auStack_c8,param_4,lStack_e0);
    lStack_f8 = param_6 - lStack_e0;
    iVar1 = FUN_142c75ce0(auStack_c8,auStack_28,param_4 + lStack_e0,param_5 - lStack_e0);
    if (iVar1 != 0) {
      FUN_142b10900(auStack_c8);
      for (uStack_d8 = 0; uStack_d8 < 0x40; uStack_d8 = uStack_d8 + 1) {
        abStack_68[uStack_d8] = abStack_68[uStack_d8] ^ 0x6a;
      }
      FUN_142b109a0(auStack_c8,abStack_68,0x40);
      FUN_142b109a0(auStack_c8,auStack_28,0x14);
      FUN_142b10a40(param_1,auStack_c8);
      *param_2 = 0x14;
    }
  }
  else {
    FID_conflict__assert((wchar_t *)&DAT_143cf9154,(wchar_t *)s_D_143cf9480,0x17e);
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_118);
  return;
}


/* address=142c76a10 name=FUN_142c76a10 */

void FUN_142c76a10(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,ulonglong param_6,undefined8 param_7,uint param_8)

{
  int iVar1;
  undefined auStack_138 [32];
  longlong lStack_118;
  ulonglong uStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  undefined auStack_e8 [112];
  byte abStack_78 [64];
  undefined auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_138;
  if (param_8 < 0x41) {
    FUN_142c756b0(abStack_78,0,0x40);
    FUN_142c75660(abStack_78,param_7,param_8);
    for (uStack_108 = 0; uStack_108 < 0x40; uStack_108 = uStack_108 + 1) {
      abStack_78[uStack_108] = abStack_78[uStack_108] ^ 0x36;
    }
    FUN_142b10e50(auStack_e8);
    FUN_142b10f30(auStack_e8,abStack_78,0x40);
    FUN_142b10f30(auStack_e8,param_3,0xd);
    lStack_100 = 0;
    if (0x120 < param_6) {
      lStack_100 = param_6 - 0x120;
    }
    FUN_142b10f30(auStack_e8,param_4,lStack_100);
    lStack_118 = param_6 - lStack_100;
    iVar1 = FUN_142c761b0(auStack_e8,auStack_38,param_4 + lStack_100,param_5 - lStack_100);
    if (iVar1 != 0) {
      FUN_142b10e50(auStack_e8);
      for (uStack_f8 = 0; uStack_f8 < 0x40; uStack_f8 = uStack_f8 + 1) {
        abStack_78[uStack_f8] = abStack_78[uStack_f8] ^ 0x6a;
      }
      FUN_142b10f30(auStack_e8,abStack_78,0x40);
      FUN_142b10f30(auStack_e8,auStack_38,0x20);
      FUN_142b10fd0(param_1,auStack_e8);
      *param_2 = 0x20;
    }
  }
  else {
    FID_conflict__assert((wchar_t *)&DAT_143cf9254,(wchar_t *)s_D_143cf9560,0x1b8);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_138);
  return;
}


/* address=142c76c80 name=FUN_142c76c80 */

bool FUN_142c76c80(wchar_t *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  int iStack_24;
  undefined8 uStack_20;
  wchar_t *apwStack_18 [3];
  
  uVar1 = wcstoul(param_1,apwStack_18,2);
  if ((uVar1 == 0) || (iVar2 = FUN_142b793c0(apwStack_18,&iStack_24), iVar2 == 0)) {
    FUN_142afa690(3,0,0x75,s_D__a_1_s_target_release_build_bo_143cf9720,0x1a);
    bVar5 = false;
  }
  else if (iStack_24 == 0) {
    uStack_20 = FUN_142b782f0(apwStack_18);
    uVar3 = FUN_142b782d0(apwStack_18);
    lVar4 = FUN_142b1d660(uVar3,uStack_20,param_2);
    bVar5 = lVar4 != 0;
  }
  else {
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cf9790,0x1f);
    bVar5 = false;
  }
  return bVar5;
}


/* address=142c76d60 name=FUN_142c76d60 */

undefined8 FUN_142c76d60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142b1d620(param_2);
  if (iVar1 != 0) {
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cf9800,0x29);
    return 0;
  }
  iVar1 = FUN_142b7ac70(param_1,auStack_38,2);
  if ((iVar1 != 0) &&
     ((uVar3 = FUN_142b1d430(param_2), (int)((uVar3 & 0xffffffff) % 8) != 0 ||
      (iVar1 = FUN_142b7af20(auStack_38,0), iVar1 != 0)))) {
    uVar2 = FUN_142b1d490(param_2);
    iVar1 = FUN_142c24090(auStack_38,uVar2,param_2);
    if ((iVar1 != 0) && (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)) {
      return 1;
    }
  }
  FUN_142afa690(3,0,0x76,s_D__a_1_s_target_release_build_bo_143cf9870,0x34);
  return 0;
}


/* address=142c76e50 name=FUN_142c76e50 */

void FUN_142c76e50(ulonglong *param_1)

{
  FUN_142c77260(param_1,0,0xd8);
  FUN_142c77210(param_1,&DAT_143364e30,0x40);
  *param_1 = *param_1 ^ 0x1010020;
  return;
}


/* address=142c76ec0 name=FUN_142c76ec0 */

void FUN_142c76ec0(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uStackX_18;
  undefined auStack_c8 [32];
  longlong lStack_a8;
  ulonglong uStack_a0;
  undefined auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_c8;
  if (param_3 != 0) {
    uStack_a0 = 0x80 - *(longlong *)(param_1 + 0xd0);
    if (param_3 < uStack_a0) {
      uStack_a0 = param_3;
    }
    lStack_a8 = param_2;
    FUN_142c77210(param_1 + 0x50 + *(longlong *)(param_1 + 0xd0),param_2,uStack_a0);
    *(ulonglong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + uStack_a0;
    lStack_a8 = lStack_a8 + uStack_a0;
    uStackX_18 = param_3 - uStack_a0;
    if (uStackX_18 != 0) {
      if (*(longlong *)(param_1 + 0xd0) != 0x80) {
        FID_conflict__assert((wchar_t *)s_b_143cf99b0,(wchar_t *)s_D_143cf98e0,0x80);
      }
      FUN_142c77480(param_1,param_1 + 0x50,0x80,0);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      for (; 0x80 < uStackX_18; uStackX_18 = uStackX_18 - 0x80) {
        FUN_142c77210(auStack_98,lStack_a8,0x80);
        FUN_142c77480(param_1,auStack_98,0x80,0);
        lStack_a8 = lStack_a8 + 0x80;
      }
      FUN_142c77210(param_1 + 0x50,lStack_a8,uStackX_18);
      *(ulonglong *)(param_1 + 0xd0) = uStackX_18;
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=142c77100 name=FUN_142c77100 */

void FUN_142c77100(undefined8 param_1,longlong param_2)

{
  FUN_142c77260(param_2 + 0x50 + *(longlong *)(param_2 + 0xd0),0,
                0x80 - *(longlong *)(param_2 + 0xd0));
  FUN_142c77480(param_2,param_2 + 0x50,*(undefined8 *)(param_2 + 0xd0),1);
  FUN_142cbd3c0(param_1,param_2,0x20);
  return;
}


/* address=142c77210 name=FUN_142c77210 */

undefined8 FUN_142c77210(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c77260 name=FUN_142c77260 */

undefined8 FUN_142c77260(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c772a0 name=FUN_142c772a0 */

ulonglong FUN_142c772a0(ulonglong param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x3f) | param_1 << 0x40 - (param_2 & 0x3f);
}


/* address=142c772c0 name=FUN_142c772c0 */

void FUN_142c772c0(longlong param_1,int param_2,int param_3,int param_4,int param_5,longlong param_6
                  ,longlong param_7)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + (longlong)param_2 * 8) =
       *(longlong *)(param_1 + (longlong)param_2 * 8) +
       *(longlong *)(param_1 + (longlong)param_3 * 8) + param_6;
  uVar1 = FUN_142c772a0(*(ulonglong *)(param_1 + (longlong)param_5 * 8) ^
                        *(ulonglong *)(param_1 + (longlong)param_2 * 8),0x20);
  *(undefined8 *)(param_1 + (longlong)param_5 * 8) = uVar1;
  *(longlong *)(param_1 + (longlong)param_4 * 8) =
       *(longlong *)(param_1 + (longlong)param_4 * 8) +
       *(longlong *)(param_1 + (longlong)param_5 * 8);
  uVar1 = FUN_142c772a0(*(ulonglong *)(param_1 + (longlong)param_3 * 8) ^
                        *(ulonglong *)(param_1 + (longlong)param_4 * 8),0x18);
  *(undefined8 *)(param_1 + (longlong)param_3 * 8) = uVar1;
  *(longlong *)(param_1 + (longlong)param_2 * 8) =
       *(longlong *)(param_1 + (longlong)param_2 * 8) +
       *(longlong *)(param_1 + (longlong)param_3 * 8) + param_7;
  uVar1 = FUN_142c772a0(*(ulonglong *)(param_1 + (longlong)param_5 * 8) ^
                        *(ulonglong *)(param_1 + (longlong)param_2 * 8),0x10);
  *(undefined8 *)(param_1 + (longlong)param_5 * 8) = uVar1;
  *(longlong *)(param_1 + (longlong)param_4 * 8) =
       *(longlong *)(param_1 + (longlong)param_4 * 8) +
       *(longlong *)(param_1 + (longlong)param_5 * 8);
  uVar1 = FUN_142c772a0(*(ulonglong *)(param_1 + (longlong)param_3 * 8) ^
                        *(ulonglong *)(param_1 + (longlong)param_4 * 8),0x3f);
  *(undefined8 *)(param_1 + (longlong)param_3 * 8) = uVar1;
  return;
}


/* address=142c77480 name=FUN_142c77480 */

void FUN_142c77480(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  undefined auStack_f8 [32];
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_b8;
  int iStack_b0;
  ulonglong uStack_a8;
  ulonglong auStack_98 [8];
  ulonglong auStack_58 [8];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_f8;
  FUN_142c77210(auStack_98,param_1,0x40);
  FUN_142c77210(auStack_58,&DAT_143364e30,0x40);
  *(ulonglong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + param_3;
  if (*(ulonglong *)(param_1 + 0x40) < param_3) {
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
  }
  auStack_58[4] = auStack_58[4] ^ *(ulonglong *)(param_1 + 0x40);
  auStack_58[5] = auStack_58[5] ^ *(ulonglong *)(param_1 + 0x48);
  if (param_4 != 0) {
    auStack_58[6] = ~auStack_58[6];
  }
  for (iStack_b0 = 0; iStack_b0 < 0xc; iStack_b0 = iStack_b0 + 1) {
    iVar1 = (iStack_b0 % 10) * 0x10;
    pbStack_b8 = &DAT_143364e70 + iVar1;
    uStack_c8 = *(undefined8 *)(param_2 + (ulonglong)(byte)(&DAT_143364e71)[iVar1] * 8);
    uStack_d0 = *(undefined8 *)(param_2 + (ulonglong)*pbStack_b8 * 8);
    uStack_d8 = 0xc;
    FUN_142c772c0(auStack_98,0,4,8);
    uStack_c8 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[3] * 8);
    uStack_d0 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[2] * 8);
    uStack_d8 = 0xd;
    FUN_142c772c0(auStack_98,1,5,9);
    uStack_c8 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[5] * 8);
    uStack_d0 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[4] * 8);
    uStack_d8 = 0xe;
    FUN_142c772c0(auStack_98,2,6,10);
    uStack_c8 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[7] * 8);
    uStack_d0 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[6] * 8);
    uStack_d8 = 0xf;
    FUN_142c772c0(auStack_98,3,7,0xb);
    uStack_c8 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[9] * 8);
    uStack_d0 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[8] * 8);
    uStack_d8 = 0xf;
    FUN_142c772c0(auStack_98,0,5,10);
    uStack_c8 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[0xb] * 8);
    uStack_d0 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[10] * 8);
    uStack_d8 = 0xc;
    FUN_142c772c0(auStack_98,1,6,0xb);
    uStack_c8 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[0xd] * 8);
    uStack_d0 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[0xc] * 8);
    uStack_d8 = 0xd;
    FUN_142c772c0(auStack_98,2,7,8);
    uStack_c8 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[0xf] * 8);
    uStack_d0 = *(undefined8 *)(param_2 + (ulonglong)pbStack_b8[0xe] * 8);
    uStack_d8 = 0xe;
    FUN_142c772c0(auStack_98,3,4,9);
  }
  for (uStack_a8 = 0; uStack_a8 < 8; uStack_a8 = uStack_a8 + 1) {
    *(ulonglong *)(param_1 + uStack_a8 * 8) =
         *(ulonglong *)(param_1 + uStack_a8 * 8) ^ auStack_98[uStack_a8];
    *(ulonglong *)(param_1 + uStack_a8 * 8) =
         *(ulonglong *)(param_1 + uStack_a8 * 8) ^ auStack_58[uStack_a8];
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_f8);
  return;
}


/* address=142c779f0 name=FUN_142c779f0 */

void FUN_142c779f0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142c77a20 name=FUN_142c77a20 */

void FUN_142c77a20(void)

{
  FUN_142c0e850(&DAT_143364f10);
  return;
}


/* address=142c77a40 name=FUN_142c77a40 */

void FUN_142c77a40(undefined8 param_1)

{
  FUN_142c5a340(&DAT_143364f10,param_1);
  return;
}


/* address=142c77a70 name=FUN_142c77a70 */

void FUN_142c77a70(undefined8 param_1)

{
  FUN_142c0f130(param_1,&DAT_143364f10);
  return;
}


/* address=142c77bc0 name=FUN_142c77bc0 */

void FUN_142c77bc0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,int param_8,
                  undefined8 param_9)

{
  int iVar1;
  uint uVar2;
  undefined auStack_1c8 [32];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  int iStack_188;
  int iStack_184;
  undefined4 uStack_180;
  longlong lStack_178;
  ulonglong uStack_170;
  int aiStack_168 [2];
  undefined8 uStack_160;
  ulonglong uStack_158;
  longlong lStack_150;
  undefined auStack_148 [48];
  undefined auStack_118 [48];
  undefined auStack_e8 [48];
  undefined auStack_b8 [160];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_1c8;
  uStack_180 = 0;
  uStack_160 = 0;
  lStack_178 = 0;
  uStack_170 = 0;
  FUN_142b3d5a0(auStack_b8);
  if (param_6 == 0) {
    if (param_7 == 0) {
      param_7 = 8;
    }
    lStack_178 = FUN_142b0e970(param_7);
    if ((lStack_178 == 0) || (iVar1 = FUN_142b3b560(lStack_178,param_7), iVar1 == 0))
    goto LAB_142c77f0a;
    param_6 = lStack_178;
  }
  if (param_8 < 1) {
    param_8 = 0x800;
  }
  iVar1 = FUN_142b7a520(auStack_148,0x80);
  if (((iVar1 == 0) || (iVar1 = FUN_142b766a0(auStack_148,param_9), iVar1 == 0)) ||
     (iVar1 = FUN_142b7a650(auStack_148,&uStack_160,&uStack_170), iVar1 == 0)) {
    FUN_142b7a5e0(auStack_148);
  }
  else {
    iVar1 = FUN_142b7ac70(param_1,auStack_118,0x20000010);
    if (iVar1 != 0) {
      uStack_1a8 = param_4;
      if (param_2 == -1) {
        lStack_190 = param_7;
        lStack_198 = param_6;
        uStack_1a0 = param_5;
        iStack_188 = FUN_142c8f560(auStack_118,auStack_b8,param_3,param_8);
      }
      else {
        lStack_190 = param_7;
        lStack_198 = param_6;
        uStack_1a0 = param_5;
        iStack_188 = FUN_142c78990(auStack_118,auStack_b8,param_2,param_8);
      }
      if (iStack_188 != 0) {
        uVar2 = FUN_142b3ea40(auStack_b8);
        uStack_158 = uStack_170 + uVar2;
        if (uStack_158 < uStack_170) {
          uStack_1a8 = CONCAT44(uStack_1a8._4_4_,0x1f8);
          FUN_142afa690(0x13,0,0x76,s_D__a_1_s_target_release_build_bo_143cfa0d0);
        }
        else {
          iVar1 = FUN_142b7ac70(auStack_118,auStack_e8,4);
          if ((iVar1 != 0) && (iVar1 = FUN_142b7ae40(auStack_e8,&lStack_150,uStack_158), iVar1 != 0)
             ) {
            uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_170);
            iVar1 = FUN_142b3e900(auStack_b8,lStack_150,&iStack_184,uStack_160);
            if (((iVar1 != 0) &&
                ((iVar1 = FUN_142b3e980(auStack_b8,lStack_150 + iStack_184,aiStack_168), iVar1 != 0
                 && (iVar1 = FUN_142b7aea0(auStack_e8,(longlong)(iStack_184 + aiStack_168[0])),
                    iVar1 != 0)))) && (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)) {
              uStack_180 = 1;
            }
          }
        }
      }
    }
  }
LAB_142c77f0a:
  FUN_142b0eaa0(uStack_160);
  FUN_142b0eaa0(lStack_178);
  FUN_142b3d610(auStack_b8);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=142c77f50 name=FUN_142c77f50 */

undefined8 FUN_142c77f50(wchar_t *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  wchar_t *apwStack_48 [2];
  wchar_t *apwStack_38 [2];
  wchar_t *apwStack_28 [2];
  undefined auStack_18 [24];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar1 = wcstoul(param_1,apwStack_48,0x20000010);
  if ((((uVar1 != 0) && (uVar1 = wcstoul((wchar_t *)apwStack_48,apwStack_28,0x20000010), uVar1 != 0)
       ) && (uVar1 = wcstoul((wchar_t *)apwStack_48,apwStack_38,4), uVar1 != 0)) &&
     (lVar3 = FUN_142b782f0(apwStack_48), lVar3 == 0)) {
    uStack_60 = FUN_142b782f0(apwStack_38);
    uVar4 = FUN_142b782d0(apwStack_38);
    iVar2 = FUN_142c78090(&uStack_68,&uStack_58,apwStack_28,param_2,param_3,uVar4,uStack_60);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_142b78260(auStack_18,uStack_68,uStack_58);
    uStack_50 = FUN_142b76520(auStack_18);
    FUN_142b0eaa0(uStack_68);
    return uStack_50;
  }
  FUN_142afa690(0x13,0,0x68,s_D__a_1_s_target_release_build_bo_143cfa060,CONCAT44(uVar5,0x1a8));
  return 0;
}


/* address=142c78090 name=FUN_142c78090 */

void FUN_142c78090(longlong *param_1,longlong *param_2,wchar_t *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  ulong uVar1;
  int iVar2;
  undefined auStack_128 [32];
  undefined8 uStack_108;
  uint uStack_f8;
  longlong lStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined *puStack_e0;
  int aiStack_d8 [2];
  wchar_t *apwStack_d0 [3];
  undefined auStack_b8 [160];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_128;
  uStack_e4 = 0;
  lStack_f0 = 0;
  FUN_142b3d5a0(auStack_b8);
  uVar1 = wcstoul(param_3,apwStack_d0,6);
  if (uVar1 == 0) {
    uStack_108 = (wchar_t *)CONCAT44(uStack_108._4_4_,0x170);
    FUN_142afa690(0x13,0,0x68,s_D__a_1_s_target_release_build_bo_143cf9ea0);
  }
  else {
    puStack_e0 = (undefined *)0x0;
    for (uStack_f8 = 0; uStack_f8 < 4; uStack_f8 = uStack_f8 + 1) {
      iVar2 = FUN_142b78480(apwStack_d0,&UNK_143364f84 + (ulonglong)uStack_f8 * 0x28,
                            (&DAT_143364f8e)[(ulonglong)uStack_f8 * 0x28]);
      if (iVar2 != 0) {
        puStack_e0 = &DAT_143364f80 + (ulonglong)uStack_f8 * 0x28;
        break;
      }
    }
    if (puStack_e0 == (undefined *)0x0) {
      uStack_108 = (wchar_t *)CONCAT44(uStack_108._4_4_,0x17c);
      FUN_142afa690(0x13,0,0x77,s_D__a_1_s_target_release_build_bo_143cf9f10);
    }
    else {
      uStack_108 = param_3;
      iVar2 = (**(code **)(puStack_e0 + 0x20))(puStack_e0,auStack_b8,param_4,param_5);
      if (iVar2 == 0) {
        uStack_108 = (wchar_t *)CONCAT44(uStack_108._4_4_,0x181);
        FUN_142afa690(0x13,0,0x6d,s_D__a_1_s_target_release_build_bo_143cf9f80);
      }
      else {
        lStack_f0 = FUN_142b0e970(param_7);
        if (lStack_f0 != 0) {
          if (param_7 < 0x80000000) {
            uStack_108 = (wchar_t *)CONCAT44(uStack_108._4_4_,(undefined4)param_7);
            iVar2 = FUN_142b3e380(auStack_b8,lStack_f0,&iStack_e8,param_6);
            if ((iVar2 != 0) &&
               (iVar2 = FUN_142b3e650(auStack_b8,lStack_f0 + iStack_e8,aiStack_d8), iVar2 != 0)) {
              *param_1 = lStack_f0;
              *param_2 = (longlong)(iStack_e8 + aiStack_d8[0]);
              uStack_e4 = 1;
              lStack_f0 = 0;
            }
          }
          else {
            uStack_108 = (wchar_t *)CONCAT44(uStack_108._4_4_,0x18b);
            FUN_142afa690(0x13,0,0x45,s_D__a_1_s_target_release_build_bo_143cf9ff0);
          }
        }
      }
    }
  }
  FUN_142b0eaa0(lStack_f0);
  FUN_142b3d610(auStack_b8);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=142c78340 name=FUN_142c78340 */

void FUN_142c78340(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  undefined param_5,uint param_6,ulonglong param_7,longlong param_8,
                  undefined8 param_9)

{
  ulonglong uVar1;
  int iVar2;
  undefined auStack_238 [32];
  undefined4 uStack_218;
  ulonglong uStack_208;
  uint uStack_200;
  uint uStack_1fc;
  longlong lStack_1f8;
  uint uStack_1f0;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  undefined4 uStack_1d8;
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  longlong lStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  undefined auStack_180 [32];
  ulonglong uStack_160;
  byte abStack_158 [64];
  undefined auStack_118 [127];
  byte abStack_99 [129];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_238;
  if (param_6 == 0) {
    uStack_218 = 0x73;
    FUN_142afa690(0x13,0,0x81,s_D__a_1_s_target_release_build_bo_143cf9a90);
  }
  else {
    uStack_1d8 = 0;
    FUN_142b11d10(auStack_180);
    lStack_198 = 0;
    lStack_1f8 = 0;
    uStack_1c8 = 0;
    uStack_1e8 = 0;
    if ((param_1 == 0) ||
       (iVar2 = FUN_142c78bd0(param_1,param_2,&lStack_198,&uStack_1c8), iVar2 != 0)) {
      uStack_208 = FUN_142b124c0(param_9);
      FUN_142c78b90(auStack_118,param_5,uStack_208);
      if (((param_4 - 1) + uStack_208 < param_4) || ((uStack_1c8 - 1) + uStack_208 < uStack_1c8)) {
        uStack_218 = 0x97;
        FUN_142afa690(0x13,0,0x45,s_D__a_1_s_target_release_build_bo_143cf9b00);
      }
      else {
        uStack_1a8 = uStack_208 * (((param_4 - 1) + uStack_208) / uStack_208);
        uStack_190 = uStack_208 * (((uStack_1c8 - 1) + uStack_208) / uStack_208);
        uStack_1e8 = uStack_1a8 + uStack_190;
        if (uStack_1e8 < uStack_1a8) {
          uStack_218 = 0x9e;
          FUN_142afa690(0x13,0,0x45,s_D__a_1_s_target_release_build_bo_143cf9b70);
        }
        else {
          lStack_1f8 = FUN_142b0e970(uStack_1e8);
          if ((uStack_1e8 == 0) || (lStack_1f8 != 0)) {
            for (uStack_1d0 = 0; uStack_1d0 < uStack_1a8; uStack_1d0 = uStack_1d0 + 1) {
              *(undefined *)(lStack_1f8 + uStack_1d0) =
                   *(undefined *)(param_3 + uStack_1d0 % param_4);
            }
            for (uStack_1c0 = 0; uStack_1c0 < uStack_190; uStack_1c0 = uStack_1c0 + 1) {
              *(undefined *)(lStack_1f8 + uStack_1c0 + uStack_1a8) =
                   *(undefined *)(lStack_198 + uStack_1c0 % uStack_1c8);
            }
            while (param_7 != 0) {
              iVar2 = FUN_142b12150(auStack_180,param_9,0);
              if ((((iVar2 == 0) ||
                   (iVar2 = FUN_142b12280(auStack_180,auStack_118,uStack_208), iVar2 == 0)) ||
                  (iVar2 = FUN_142b12280(auStack_180,lStack_1f8,uStack_1e8), iVar2 == 0)) ||
                 (iVar2 = FUN_142b122c0(auStack_180,abStack_158,&uStack_200), iVar2 == 0))
              goto LAB_142c78947;
              for (uStack_1f0 = 1; uStack_1f0 < param_6; uStack_1f0 = uStack_1f0 + 1) {
                iVar2 = FUN_142b12150(auStack_180,param_9,0);
                if (((iVar2 == 0) ||
                    (iVar2 = FUN_142b12280(auStack_180,abStack_158,uStack_200), iVar2 == 0)) ||
                   (iVar2 = FUN_142b122c0(auStack_180,abStack_158), iVar2 == 0)) goto LAB_142c78947;
              }
              if (param_7 < uStack_200) {
                uStack_188 = param_7;
              }
              else {
                uStack_188 = (ulonglong)uStack_200;
              }
              uStack_1a0 = uStack_188;
              FUN_142c78b40(param_8);
              param_8 = param_8 + uStack_1a0;
              param_7 = param_7 - uStack_1a0;
              if (param_7 == 0) break;
              for (uStack_1b8 = 0; uStack_1b8 < uStack_208; uStack_1b8 = uStack_1b8 + 1) {
                uStack_160 = (ulonglong)uStack_200;
                abStack_99[uStack_1b8 + 1] = abStack_158[uStack_1b8 % uStack_160];
              }
              if (uStack_1e8 % uStack_208 != 0) {
                FID_conflict__assert((wchar_t *)s_I_143cf9ca8,(wchar_t *)s_D_143cf9be0,0xd3);
              }
              for (uStack_1b0 = 0; uStack_1b0 < uStack_1e8; uStack_1b0 = uStack_1b0 + uStack_208) {
                uStack_1fc = 1;
                uVar1 = uStack_208;
                while (uStack_1e0 = uVar1 - 1, uStack_1e0 < uStack_208) {
                  uStack_1fc = abStack_99[uVar1] + uStack_1fc +
                               (uint)*(byte *)(lStack_1f8 + uStack_1b0 + uStack_1e0);
                  *(undefined *)(lStack_1f8 + uStack_1b0 + uStack_1e0) = (undefined)uStack_1fc;
                  uStack_1fc = uStack_1fc >> 8;
                  uVar1 = uStack_1e0;
                }
              }
            }
            uStack_1d8 = 1;
          }
        }
      }
    }
LAB_142c78947:
    FUN_142b0eaa0(lStack_1f8);
    FUN_142b0eaa0(lStack_198);
    FUN_142b11d80(auStack_180);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_238);
  return;
}


/* address=142c78990 name=FUN_142c78990 */

undefined8
FUN_142c78990(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar4;
  undefined auStack_d0 [48];
  undefined auStack_a0 [48];
  undefined auStack_70 [48];
  undefined auStack_40 [64];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  lVar2 = FUN_142c78fe0(param_3);
  if (lVar2 == 0) {
    FUN_142afa690(0x13,0,0x77,s_D__a_1_s_target_release_build_bo_143cf9e30,CONCAT44(uVar4,0x151));
  }
  else {
    iVar1 = FUN_142b7ac70(param_1,auStack_d0,0x20000010);
    if (((((iVar1 != 0) && (iVar1 = FUN_142b7ac70(auStack_d0,auStack_70,6), iVar1 != 0)) &&
         (iVar1 = FUN_142b7ad30(auStack_70,lVar2 + 4,*(undefined *)(lVar2 + 0xe)), iVar1 != 0)) &&
        ((iVar1 = FUN_142b7ac70(auStack_d0,auStack_a0,0x20000010), iVar1 != 0 &&
         (iVar1 = FUN_142b7ac70(auStack_a0,auStack_40,4), iVar1 != 0)))) &&
       ((iVar1 = FUN_142b7ad30(auStack_40,param_7,param_8), iVar1 != 0 &&
        ((iVar1 = FUN_142b7b130(auStack_a0,param_4), iVar1 != 0 &&
         (iVar1 = FUN_142b7a730(param_1), iVar1 != 0)))))) {
      uVar3 = FUN_142c78ce0(lVar2,param_2,param_4,param_5,param_6,param_7,param_8,1);
      return uVar3;
    }
  }
  return 0;
}


/* address=142c78b40 name=FUN_142c78b40 */

undefined8 FUN_142c78b40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c78b90 name=FUN_142c78b90 */

undefined8 FUN_142c78b90(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c78bd0 name=FUN_142c78bd0 */

undefined8 FUN_142c78bd0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 auStack_58 [2];
  undefined auStack_50 [16];
  undefined auStack_40 [64];
  
  iVar1 = FUN_142b7a520(auStack_40,param_2 << 1);
  if (iVar1 != 0) {
    FUN_142b78260(auStack_50,param_1,param_2);
    do {
      lVar2 = FUN_142b782f0(auStack_50);
      if (lVar2 == 0) {
        iVar1 = FUN_142c72e50(auStack_40,0);
        if ((iVar1 != 0) && (iVar1 = FUN_142b7a650(auStack_40,param_3,param_4), iVar1 != 0)) {
          return 1;
        }
        goto LAB_142c78cba;
      }
      iVar1 = FUN_142c72950(auStack_50,auStack_58);
    } while ((iVar1 != 0) && (iVar1 = FUN_142c72e50(auStack_40,auStack_58[0]), iVar1 != 0));
    FUN_142afa690(0x13,0,0x83,s_D__a_1_s_target_release_build_bo_143cf9a20,0x5a);
LAB_142c78cba:
    FUN_142b7a5e0(auStack_40);
  }
  return 0;
}


/* address=142c78ce0 name=FUN_142c78ce0 */

void FUN_142c78ce0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined auStack_d8 [32];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  ulonglong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined auStack_70 [24];
  undefined auStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_d8;
  uStack_80 = (**(code **)(param_1 + 0x10))();
  uStack_78 = (**(code **)(param_1 + 0x18))();
  uVar1 = FUN_142b3ed10(uStack_80);
  uStack_a8 = (ulonglong)uVar1;
  uStack_98 = uStack_78;
  puStack_a0 = auStack_58;
  uStack_b8 = (undefined *)CONCAT71(uStack_b8._1_7_,1);
  uStack_b0 = param_3;
  iVar2 = FUN_142c78340(param_4,param_5,param_6,param_7);
  if (iVar2 != 0) {
    uVar1 = FUN_142b3ed30(uStack_80);
    uStack_a8 = (ulonglong)uVar1;
    uStack_98 = uStack_78;
    puStack_a0 = auStack_70;
    uStack_b8 = (undefined *)CONCAT71(uStack_b8._1_7_,2);
    uStack_b0 = param_3;
    iVar2 = FUN_142c78340(param_4,param_5,param_6,param_7);
    if (iVar2 != 0) {
      uStack_b0 = param_8;
      uStack_b8 = auStack_70;
      uStack_88 = FUN_142b3d860(param_2,uStack_80,0,auStack_58);
      FUN_142b0ec40(auStack_58,0x40);
      FUN_142b0ec40(auStack_70,0x10);
      goto LAB_142c78e6c;
    }
  }
  uStack_b8 = (undefined *)CONCAT44(uStack_b8._4_4_,0xf5);
  FUN_142afa690(0x13,0,0x6e,s_D__a_1_s_target_release_build_bo_143cf9ce0);
LAB_142c78e6c:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=142c78fe0 name=FUN_142c78fe0 */

undefined * FUN_142c78fe0(int param_1)

{
  uint uStack_18;
  
  uStack_18 = 0;
  while( true ) {
    if (3 < uStack_18) {
      return (undefined *)0x0;
    }
    if (((*(int *)(&DAT_143364f80 + (ulonglong)uStack_18 * 0x28) == param_1) &&
        ((&PTR_LAB_143364f90)[(ulonglong)uStack_18 * 5] != (undefined *)0x0)) &&
       ((&PTR_FUN_143364f98)[(ulonglong)uStack_18 * 5] != (undefined *)0x0)) break;
    uStack_18 = uStack_18 + 1;
  }
  return &DAT_143364f80 + (ulonglong)uStack_18 * 0x28;
}


/* address=142c79070 name=FUN_142c79070 */

undefined8 FUN_142c79070(void *param_1,size_t param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  int aiStack_48 [2];
  undefined8 uStack_40;
  undefined auStack_38 [56];
  
  iVar1 = FUN_142c79440(param_1,aiStack_48);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else if (aiStack_48[0] == 0) {
    pvVar2 = _aligned_recalloc(param_1,param_2,0,0);
    if ((int)pvVar2 == 0) {
      uVar3 = 0;
    }
    else {
      *param_3 = 0;
      uVar3 = 1;
    }
  }
  else {
    uVar3 = FUN_142b782f0(param_1);
    iVar1 = FUN_142b7a520(auStack_38,uVar3);
    if (((iVar1 != 0) && (iVar1 = FUN_142c79600(param_1,auStack_38,0,0,0), iVar1 != 0)) &&
       (iVar1 = FUN_142b7a650(auStack_38,param_3,&uStack_40), iVar1 != 0)) {
      FUN_142b78260(param_2,*param_3,uStack_40);
      return 1;
    }
    FUN_142b7a5e0(auStack_38);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=142c79190 name=FUN_142c79190 */

ulong FUN_142c79190(wchar_t *param_1,wchar_t **param_2,undefined8 *param_3,uint param_4,uint param_5
                   )

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  wchar_t *apwStack_60 [2];
  wchar_t *apwStack_50 [2];
  undefined auStack_40 [64];
  
  if ((param_4 & 0x20000000) != 0) {
    FID_conflict__assert((wchar_t *)s___143cfa330,(wchar_t *)s_D_143cfa260,0xe2);
  }
  if ((param_5 & 0x20000000) != 0) {
    FID_conflict__assert((wchar_t *)s___143cfa450,(wchar_t *)s_D_143cfa380,0xe3);
  }
  iVar1 = FUN_142c79380(param_5);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_i_143cfa568,(wchar_t *)s_D_143cfa4a0,0xe4);
  }
  iVar1 = FUN_142b78b10(param_1,param_4);
  if (iVar1 == 0) {
    uVar3 = FUN_142b782f0(param_1);
    iVar1 = FUN_142b7a520(auStack_40,uVar3);
    if (iVar1 != 0) {
      uVar2 = wcstoul(param_1,apwStack_60,param_4 | 0x20000000);
      while (uVar2 != 0) {
        lVar4 = FUN_142b782f0(apwStack_60);
        if (lVar4 == 0) {
          iVar1 = FUN_142b7a650(auStack_40,&uStack_78,&uStack_68);
          if (iVar1 != 0) {
            FUN_142b78260(param_2,uStack_78,uStack_68);
            *param_3 = uStack_78;
            return 1;
          }
          break;
        }
        uVar2 = wcstoul((wchar_t *)apwStack_60,apwStack_50,param_5);
        if (uVar2 == 0) break;
        uStack_70 = FUN_142b782f0(apwStack_50);
        uVar3 = FUN_142b782d0(apwStack_50);
        uVar2 = FUN_142b7ad30(auStack_40,uVar3,uStack_70);
      }
    }
    FUN_142b7a5e0(auStack_40);
    uVar2 = 0;
  }
  else {
    *param_3 = 0;
    uVar2 = wcstoul(param_1,param_2,param_4);
  }
  return uVar2;
}


/* address=142c79380 name=FUN_142c79380 */

undefined8 FUN_142c79380(uint param_1)

{
  undefined8 uVar1;
  
  switch(param_1 & 0xdfffffff) {
  case 4:
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    uVar1 = 1;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142c79440 name=FUN_142c79440 */

undefined8 FUN_142c79440(undefined8 param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uStack_48;
  undefined auStack_44 [4];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined auStack_30 [16];
  undefined auStack_20 [32];
  
  if (param_3 <= DAT_143365020) {
    uStack_40 = FUN_142b782f0(param_1);
    uVar2 = FUN_142b782d0(param_1);
    FUN_142b78260(auStack_30,uVar2,uStack_40);
    *param_2 = 0;
    do {
      do {
        lVar3 = FUN_142b782f0(auStack_30);
        if (lVar3 == 0) {
          return 1;
        }
        iVar1 = FUN_142b78c60(auStack_30,auStack_20,&uStack_48,&uStack_38,param_2,auStack_44);
        if (iVar1 == 0) {
          return 0;
        }
        if (*param_2 != 0) {
          return 1;
        }
      } while ((uStack_48 & 0x20000000) == 0);
      iVar1 = FUN_142c79380(uStack_48);
      if (iVar1 != 0) {
        *param_2 = 1;
        return 1;
      }
      iVar1 = FUN_142b782a0(auStack_20,uStack_38);
    } while ((iVar1 != 0) && (iVar1 = FUN_142c79440(auStack_20,param_2,param_3 + 1), iVar1 != 0));
  }
  return 0;
}


/* address=142c79590 name=FUN_142c79590 */

undefined8 FUN_142c79590(undefined8 param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_142b782f0(param_1);
  if (((1 < uVar1) && (pcVar2 = (char *)FUN_142b782d0(param_1), *pcVar2 == '\0')) &&
     (lVar3 = FUN_142b782d0(param_1), *(char *)(lVar3 + 1) == '\0')) {
    uVar4 = FUN_142b782a0(param_1,2);
    return uVar4;
  }
  return 0;
}


/* address=142c79600 name=FUN_142c79600 */

bool FUN_142c79600(undefined8 param_1,undefined *param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  undefined *puStack_68;
  int aiStack_60 [2];
  undefined auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined auStack_38 [56];
  
  if ((param_3 & 0x20000000) != 0) {
    FID_conflict__assert((wchar_t *)s___143cfa210,(wchar_t *)s_D_143cfa140,0x73);
  }
  if (param_5 <= DAT_143365020) {
    do {
      while( true ) {
        lVar2 = FUN_142b782f0(param_1);
        if (lVar2 == 0) {
          return param_4 == 0;
        }
        if ((param_4 != 0) && (iVar1 = FUN_142c79590(param_1), iVar1 != 0)) {
          return true;
        }
        uVar4 = 0;
        uStack_70 = param_3;
        iVar1 = FUN_142b78c60(param_1,auStack_58,&uStack_78,&uStack_48,0,aiStack_60);
        if (iVar1 == 0) {
          return false;
        }
        if (param_3 == 0) {
          uStack_74 = uStack_78;
          if (((uStack_78 & 0x20000000) != 0) && (iVar1 = FUN_142c79380(uStack_78), iVar1 != 0)) {
            uStack_74 = uStack_74 & 0xdfffffff;
            uStack_70 = uStack_74;
          }
          iVar1 = FUN_142b7ac70(param_2,auStack_38,uStack_74);
          if (iVar1 == 0) {
            return false;
          }
          puStack_68 = auStack_38;
        }
        else {
          puStack_68 = param_2;
          if ((uStack_78 & 0xdfffffff) != param_3) {
            return false;
          }
        }
        if (aiStack_60[0] != 0) break;
        iVar1 = FUN_142b782a0(auStack_58,uStack_48);
        if (iVar1 == 0) {
          return false;
        }
        if ((uStack_78 & 0x20000000) == 0) {
          uStack_40 = FUN_142b782f0(auStack_58);
          uVar3 = FUN_142b782d0(auStack_58);
          iVar1 = FUN_142b7ad30(puStack_68,uVar3,uStack_40);
          if (iVar1 == 0) {
            return false;
          }
        }
        else {
          iVar1 = FUN_142c79600(auStack_58,puStack_68,uStack_70,0,CONCAT44(uVar4,param_5 + 1));
          if (iVar1 == 0) {
            return false;
          }
        }
        iVar1 = FUN_142b7a730(param_2);
        if (iVar1 == 0) {
          return false;
        }
      }
      iVar1 = FUN_142c79600(param_1,puStack_68,uStack_70,1,CONCAT44(uVar4,param_5 + 1));
    } while ((iVar1 != 0) && (iVar1 = FUN_142b7a730(param_2), iVar1 != 0));
  }
  return false;
}


/* address=142c79930 name=FUN_142c79930 */

undefined8 FUN_142c79930(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c79970 name=FUN_142c79970 */

bool FUN_142c79970(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_142b0e970(0x10);
  if (lVar1 != 0) {
    FUN_142c79930(lVar1,0,0x10);
    *(longlong *)(param_1 + 0x28) = lVar1;
  }
  return lVar1 != 0;
}


/* address=142c7a690 name=FUN_142c7a690 */

undefined8 FUN_142c7a690(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142c7a6d0 name=FUN_142c7a6d0 */

undefined8 FUN_142c7a6d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_142b0e970(0x60);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_142c7a690(lVar2,0,0x60);
    iVar1 = FUN_142b7a520(lVar2 + 0x30,0);
    if (iVar1 == 0) {
      FUN_142b0eaa0(lVar2);
      uVar3 = 0;
    }
    else {
      *(longlong *)(param_1 + 0x28) = lVar2;
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=142c7add0 name=FUN_142c7add0 */

undefined8
FUN_142c7add0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puStackX_8;
  uint uStack_28;
  int iStack_24;
  undefined8 auStack_18 [3];
  
  auStack_18[0] = 0;
  puStackX_8 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    puStackX_8 = auStack_18;
  }
  lVar1 = FUN_142c7b270(param_5);
  if (lVar1 == 0) {
    iStack_24 = FUN_142c7b420(puStackX_8,param_2,param_3,param_4,0x2000);
  }
  else {
    uStack_28 = *(uint *)(lVar1 + 0xc);
    if ((*(uint *)(lVar1 + 0x10) & 2) == 0) {
      uStack_28 = uStack_28 & 0x2000;
    }
    iStack_24 = FUN_142c7b480(puStackX_8,param_2,param_3,param_4,uStack_28,
                              (longlong)*(int *)(lVar1 + 4),(longlong)*(int *)(lVar1 + 8));
  }
  if (iStack_24 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puStackX_8;
  }
  return uVar2;
}


/* address=142c7b190 name=FUN_142c7b190 */

void FUN_142c7b190(undefined8 param_1,undefined8 param_2)

{
  FUN_142b82630(param_1,param_2);
  return;
}


/* address=142c7b1c0 name=FUN_142c7b1c0 */

void FUN_142c7b1c0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b827e0(param_1,param_2,&LAB_142c7b160,&LAB_142c7b130);
  return;
}


/* address=142c7b200 name=FUN_142c7b200 */

undefined4 FUN_142c7b200(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 auStack_10 [2];
  
  auStack_10[0] = 0;
  uVar1 = FUN_142b828d0(param_1,auStack_10,param_3,&LAB_142c7b160,&LAB_142c7b130);
  *param_2 = auStack_10[0];
  return uVar1;
}


/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=1406d5940 name=thunk_FUN_1406fdd60 */

undefined8 * thunk_FUN_1406fdd60(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong lStack_90;
  ulonglong uStack_88;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_70 = param_2;
  uStack_68 = param_3;
  FUN_140710cd0(&lStack_90,&uStack_70);
  uVar2 = uStack_88;
  lVar1 = lStack_90;
  if (lStack_90 == 0) {
    lStack_90 = 1;
    uStack_88 = 0;
LAB_1406fdddf:
    param_1[1] = lStack_90;
    param_1[2] = uStack_88;
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  if (lStack_78 == 0) goto LAB_1406fdddf;
  if (param_3 == 0) {
    lVar3 = 1;
  }
  else {
    FUN_140016610();
    lVar3 = thunk_FUN_1406dbaa0(param_3,1);
    if (lVar3 == 0) {
      FUN_142cdfdab(1,param_3);
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  lStack_50 = 0;
  uStack_60 = param_3;
  uStack_58 = lVar3;
  if (param_3 < uVar2) {
    FUN_142cdfc20(&uStack_60,0,uVar2);
  }
  else {
    lVar4 = 0;
    if (uVar2 == 0) goto LAB_1406fde28;
  }
  lVar4 = lStack_50;
  lVar3 = uStack_58;
  param_3 = uStack_60;
  FUN_142cbd3c0(uStack_58 + lStack_50,lVar1,uVar2);
LAB_1406fde28:
  lStack_50 = lVar4 + uVar2;
  if (param_3 - lStack_50 < 3) {
    FUN_142cdfc20(&uStack_60,lStack_50,3);
    lVar3 = uStack_58;
  }
  *(undefined *)(lVar3 + 2 + lStack_50) = 0xbd;
  *(undefined2 *)(lVar3 + lStack_50) = 0xbfef;
  lStack_50 = lStack_50 + 3;
  uStack_a0 = (undefined4)uStack_70;
  uStack_9c = uStack_70._4_4_;
  uStack_98 = (undefined4)uStack_68;
  uStack_94 = uStack_68._4_4_;
  do {
    lVar4 = lStack_50;
    FUN_140710cd0(&lStack_90,&uStack_a0);
    lVar3 = lStack_78;
    uVar2 = uStack_88;
    lVar1 = lStack_90;
    if (lStack_90 == 0) {
      param_1[2] = lStack_50;
      *(undefined4 *)param_1 = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_60._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_58;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_58._4_4_;
      return param_1;
    }
    if (uStack_60 - lVar4 < uStack_88) {
      FUN_142cdfc20(&uStack_60,lVar4,uStack_88);
      lVar4 = lStack_50;
LAB_1406fdea2:
      FUN_142cbd3c0(uStack_58 + lVar4,lVar1,uVar2);
    }
    else if (uStack_88 != 0) goto LAB_1406fdea2;
    lStack_50 = lVar4 + uVar2;
    if (lVar3 != 0) {
      if (uStack_60 - lStack_50 < 3) {
        FUN_142cdfc20(&uStack_60,lStack_50,3);
      }
      *(undefined *)(uStack_58 + 2 + lStack_50) = 0xbd;
      *(undefined2 *)(uStack_58 + lStack_50) = 0xbfef;
      lStack_50 = lStack_50 + 3;
    }
  } while( true );
}


/* address=1406d5950 name=FUN_1406d5950 */

void FUN_1406d5950(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001406d5965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_142e11a0c + *(int *)(&DAT_142e11a0c + (ulonglong)*param_1 * 4)))();
  return;
}


/* address=1406d61c0 name=FUN_1406d61c0 */

bool FUN_1406d61c0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = uVar3 + param_3;
  if (uVar1 <= uVar2) {
    if (uVar1 < uVar3) {
      FUN_142ce0350(uVar3,uVar1,uVar2,&PTR_s_C__Users_VssAdministrator__cargo_142e119c8);
      do {
        invalidInstructionException();
      } while( true );
    }
    FUN_142cbd3c0(uVar3 + *param_1);
    param_1[2] = uVar1;
  }
  return uVar2 < uVar1;
}


/* address=1406d62a0 name=FUN_1406d62a0 */

void FUN_1406d62a0(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    lVar1 = 1;
  }
  else {
    FUN_140016610();
    lVar1 = thunk_FUN_1406dbaa0(param_3,1);
    if (lVar1 == 0) {
      FUN_142cdfdab(1,param_3);
      do {
        invalidInstructionException();
      } while( true );
    }
    FUN_142cbd3c0(lVar1,param_2,param_3);
  }
  FUN_140016610();
  plVar2 = (longlong *)thunk_FUN_1406dbaa0(0x18,8);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_3;
    plVar2[1] = lVar1;
    plVar2[2] = param_3;
    uVar3 = FUN_1406fff50(param_1,plVar2,&PTR_FUN_142e156d8);
    FUN_140703750(uVar3);
    return;
  }
  FUN_142cdfd91(8,0x18);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406d63b0 name=FUN_1406d63b0 */

void FUN_1406d63b0(longlong *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  short sVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  
  lVar5 = param_2[3];
  uVar2 = *(ushort *)(lVar5 + 0x3d2);
  uVar32 = (ulonglong)uVar2;
  uVar29 = uVar32;
  if (param_3 == 1) {
    uVar29 = (ulonglong)*(ushort *)(param_2[5] + 0x3d2);
  }
  if (uVar29 < param_4) {
    FUN_142ce0300("assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\collections\\btree\\node.rs"
                  ,0x8e,&DAT_142e11d58);
    do {
      invalidInstructionException();
    } while( true );
  }
  lVar24 = param_2[5];
  uVar3 = *(ushort *)(lVar24 + 0x3d2);
  uVar29 = (ulonglong)uVar3;
  uVar31 = uVar32 + uVar29 + 1;
  if (0xb < uVar31) {
    FUN_142ce0300("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_142e11da0);
    do {
      invalidInstructionException();
    } while( true );
  }
  lVar6 = *param_2;
  uVar7 = param_2[1];
  lVar8 = param_2[4];
  uVar4 = *(ushort *)(lVar6 + 0x3d2);
  uVar30 = (ulonglong)uVar4;
  uVar9 = param_2[2];
  *(short *)(lVar5 + 0x3d2) = (short)uVar31;
  lVar23 = uVar9 * 0x38;
  uVar27 = *(undefined8 *)(lVar6 + 0x198 + lVar23);
  puVar1 = (undefined4 *)(lVar6 + 0x168 + lVar23);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
  puVar1 = (undefined4 *)(lVar6 + 0x178 + lVar23);
  uVar14 = *puVar1;
  uVar15 = puVar1[1];
  uVar16 = puVar1[2];
  uVar17 = puVar1[3];
  puVar1 = (undefined4 *)(lVar6 + 0x188 + lVar23);
  uVar18 = *puVar1;
  uVar19 = puVar1[1];
  uVar20 = puVar1[2];
  uVar21 = puVar1[3];
  lVar33 = ~uVar9 + uVar30;
  FUN_142cbd3c0(lVar6 + lVar23 + 0x168,lVar6 + lVar23 + 0x1a0,lVar33 * 0x38);
  lVar23 = uVar32 * 0x38;
  puVar1 = (undefined4 *)(lVar5 + 0x168 + lVar23);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  puVar1 = (undefined4 *)(lVar5 + 0x178 + lVar23);
  *puVar1 = uVar14;
  puVar1[1] = uVar15;
  puVar1[2] = uVar16;
  puVar1[3] = uVar17;
  puVar1 = (undefined4 *)(lVar5 + 0x188 + lVar23);
  *puVar1 = uVar18;
  puVar1[1] = uVar19;
  puVar1[2] = uVar20;
  puVar1[3] = uVar21;
  *(undefined8 *)(lVar5 + 0x198 + lVar23) = uVar27;
  FUN_142cbd3c0((uVar32 + 1) * 0x38 + lVar5 + 0x168,lVar24 + 0x168,uVar29 * 0x38);
  lVar23 = uVar9 * 0x20;
  puVar1 = (undefined4 *)(lVar6 + lVar23);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
  puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar23);
  uVar14 = *puVar1;
  uVar15 = puVar1[1];
  uVar16 = puVar1[2];
  uVar17 = puVar1[3];
  FUN_142cbd3c0(lVar6 + lVar23,lVar6 + lVar23 + 0x20,lVar33 * 0x20);
  lVar23 = (ulonglong)uVar2 * 0x20;
  puVar1 = (undefined4 *)(lVar5 + lVar23);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar23);
  *puVar1 = uVar14;
  puVar1[1] = uVar15;
  puVar1[2] = uVar16;
  puVar1[3] = uVar17;
  FUN_142cbd3c0((ulonglong)(uint)((int)(uVar32 + 1) << 5) + lVar5,lVar24,(ulonglong)uVar3 << 5);
  uVar28 = uVar9 + 1;
  lVar23 = lVar6 + uVar9 * 8 + 0x3e0;
  FUN_142cbd3c0(lVar23,lVar6 + uVar9 * 8 + 1000,lVar33 * 8);
  if (uVar28 < uVar30) {
    uVar25 = (uint)uVar4 + ~(uint)uVar9 & 3;
    if (uVar25 != 0) {
      uVar26 = 0;
      do {
        lVar33 = *(longlong *)(lVar23 + uVar26 * 8);
        *(longlong *)(lVar33 + 0x160) = lVar6;
        *(short *)(lVar33 + 0x3d0) = (short)uVar28 + (short)uVar26;
        uVar26 = uVar26 + 1;
      } while (uVar25 != uVar26);
      uVar28 = uVar28 + uVar26;
    }
    if (2 < (uVar30 - uVar9) - 2) {
      do {
        lVar23 = *(longlong *)(lVar6 + 0x3d8 + uVar28 * 8);
        *(longlong *)(lVar23 + 0x160) = lVar6;
        sVar22 = (short)uVar28;
        *(short *)(lVar23 + 0x3d0) = sVar22;
        lVar23 = *(longlong *)(lVar6 + 0x3e0 + uVar28 * 8);
        *(longlong *)(lVar23 + 0x160) = lVar6;
        *(short *)(lVar23 + 0x3d0) = sVar22 + 1;
        lVar23 = *(longlong *)(lVar6 + 1000 + uVar28 * 8);
        *(longlong *)(lVar23 + 0x160) = lVar6;
        *(short *)(lVar23 + 0x3d0) = sVar22 + 2;
        lVar23 = *(longlong *)(lVar6 + 0x3f0 + uVar28 * 8);
        *(longlong *)(lVar23 + 0x160) = lVar6;
        *(short *)(lVar23 + 0x3d0) = sVar22 + 3;
        uVar28 = uVar28 + 4;
      } while (uVar28 != uVar30);
    }
  }
  *(short *)(lVar6 + 0x3d2) = *(short *)(lVar6 + 0x3d2) + -1;
  uVar27 = 0x3d8;
  lVar6 = uVar32 + 1;
  if (1 < uVar7) {
    uVar29 = uVar29 + 1;
    if (uVar29 != uVar31 - uVar32) {
      FUN_142ce0300(&DAT_142e12578,0x28,&DAT_142e125a0);
      do {
        invalidInstructionException();
      } while( true );
    }
    FUN_142cbd3c0(lVar5 + 0x3d8 + lVar6 * 8,lVar24 + 0x3d8,(int)uVar29 * 8);
    lVar23 = lVar6;
    if ((uVar29 & 3) != 0) {
      uVar28 = 0;
      do {
        lVar23 = *(longlong *)(uVar32 * 8 + 0x3e0 + lVar5 + uVar28 * 8);
        *(longlong *)(lVar23 + 0x160) = lVar5;
        *(short *)(lVar23 + 0x3d0) = (short)lVar6 + (short)uVar28;
        uVar28 = uVar28 + 1;
      } while ((uVar29 & 3) != uVar28);
      lVar23 = uVar28 + lVar6;
    }
    uVar27 = 0x438;
    if (2 < uVar3) {
      do {
        lVar33 = *(longlong *)(lVar5 + 0x3d8 + lVar23 * 8);
        *(longlong *)(lVar33 + 0x160) = lVar5;
        sVar22 = (short)lVar23;
        *(short *)(lVar33 + 0x3d0) = sVar22;
        lVar33 = *(longlong *)(lVar5 + 0x3e0 + lVar23 * 8);
        *(longlong *)(lVar33 + 0x160) = lVar5;
        *(short *)(lVar33 + 0x3d0) = sVar22 + 1;
        lVar33 = *(longlong *)(lVar5 + 1000 + lVar23 * 8);
        *(longlong *)(lVar33 + 0x160) = lVar5;
        *(short *)(lVar33 + 0x3d0) = sVar22 + 2;
        lVar33 = *(longlong *)(lVar5 + 0x3f0 + lVar23 * 8);
        *(longlong *)(lVar33 + 0x160) = lVar5;
        uVar29 = lVar23 + 3;
        *(short *)(lVar33 + 0x3d0) = (short)uVar29;
        lVar23 = lVar23 + 4;
      } while (uVar29 != uVar31);
    }
  }
  thunk_FUN_1406dbb00(lVar24,uVar27,8);
  lVar24 = 0;
  if ((param_3 & 1) != 0) {
    lVar24 = lVar6;
  }
  *param_1 = lVar5;
  param_1[1] = lVar8;
  param_1[2] = lVar24 + param_4;
  return;
}


/* address=1406d6820 name=FUN_1406d6820 */

void FUN_1406d6820(undefined4 *param_1,longlong *param_2,undefined *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lStack_1c8;
  ulonglong uStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  ulonglong uStack_1a8;
  longlong lStack_1a0;
  ulonglong uStack_198;
  longlong lStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  longlong lStack_178;
  ulonglong uStack_170;
  longlong lStack_168;
  ulonglong uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulonglong uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined *puStack_d8;
  undefined4 *puStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong lStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar9 = *param_2;
  uVar13 = param_2[2];
  uVar6 = *(ushort *)(lVar9 + 0x3d2);
  lVar8 = uVar13 * 0x38;
  uStack_128 = *(undefined8 *)(lVar9 + 0x198 + lVar8);
  puVar1 = (undefined4 *)(lVar9 + 0x168 + lVar8);
  uStack_158 = *puVar1;
  uStack_154 = puVar1[1];
  uStack_150 = puVar1[2];
  uStack_14c = puVar1[3];
  puVar1 = (undefined4 *)(lVar9 + 0x178 + lVar8);
  uStack_148 = *puVar1;
  uStack_144 = puVar1[1];
  uStack_140 = puVar1[2];
  uStack_13c = puVar1[3];
  puVar1 = (undefined4 *)(lVar9 + 0x188 + lVar8);
  uStack_138 = *puVar1;
  uStack_134 = puVar1[1];
  uStack_130 = puVar1[2];
  uStack_12c = puVar1[3];
  puStack_d8 = param_3;
  FUN_142cbd3c0(lVar9 + lVar8 + 0x168,lVar9 + lVar8 + 0x1a0,(~uVar13 + (ulonglong)uVar6) * 0x38);
  lVar8 = uVar13 * 0x20;
  puVar1 = (undefined4 *)(lVar9 + lVar8);
  uStack_120 = *puVar1;
  uStack_11c = puVar1[1];
  uStack_118 = puVar1[2];
  uStack_114 = puVar1[3];
  puVar1 = (undefined4 *)(lVar9 + 0x10 + lVar8);
  uStack_110 = *puVar1;
  uStack_10c = puVar1[1];
  uStack_108 = puVar1[2];
  uStack_104 = puVar1[3];
  FUN_142cbd3c0(lVar9 + lVar8,lVar9 + lVar8 + 0x20,(~uVar13 + (ulonglong)uVar6) * 0x20);
  uVar5 = uVar6 - 1;
  *(ushort *)(lVar9 + 0x3d2) = uVar5;
  lVar8 = param_2[1];
  if (uVar5 < 5) {
    lVar18 = *(longlong *)(lVar9 + 0x160);
    puStack_d0 = param_1;
    if (lVar18 != 0) {
      uStack_a0 = lVar8 + 1;
      uVar10 = (ulonglong)*(ushort *)(lVar9 + 0x3d0);
      uStack_a8 = lVar18;
      uStack_88 = lVar8;
      lStack_78 = lVar8;
      if (uVar10 == 0) {
        if (*(short *)(lVar18 + 0x3d2) == 0) {
          FUN_142ce0320("internal error: entered unreachable code: empty internal node",0x7b,
                        &DAT_142e13890);
LAB_1406d70a1:
          do {
            invalidInstructionException();
          } while( true );
        }
        uStack_80 = *(longlong *)(lVar18 + 0x3e0);
        uStack_98 = 0;
        uStack_90 = lVar9;
        if ((uint)uVar6 + (uint)*(ushort *)(uStack_80 + 0x3d2) < 0xc) {
          FUN_1406d63b0(&lStack_68,&uStack_a8,0,uVar13);
          lVar9 = lStack_68;
          lVar8 = lStack_60;
          uVar13 = uStack_58;
        }
        else {
          FUN_1406dd5b0(&uStack_a8,1);
        }
      }
      else {
        uStack_90 = *(longlong *)(lVar18 + 0x3d0 + uVar10 * 8);
        uStack_98 = uVar10 - 1;
        uStack_80 = lVar9;
        if ((uint)uVar5 + (uint)*(ushort *)(uStack_90 + 0x3d2) + 1 < 0xc) {
          FUN_1406d63b0(&lStack_68,&uStack_a8,1,uVar13);
          lVar9 = lStack_68;
          lVar8 = lStack_60;
          uVar13 = uStack_58;
        }
        else {
          FUN_1406dd1d0(&uStack_a8,1);
          uVar13 = uVar13 + 1;
        }
      }
    }
    uStack_58 = uVar13;
    lStack_60 = lVar8;
    lStack_68 = lVar9;
    uStack_c8 = uStack_58;
    lVar18 = *(longlong *)(lStack_68 + 0x160);
    uVar13 = uStack_58;
    param_1 = puStack_d0;
    lVar9 = lStack_68;
    lVar8 = lStack_60;
    if ((lVar18 != 0) && (uVar6 = *(ushort *)(lVar18 + 0x3d2), uVar6 < 5)) {
      uVar10 = lStack_60 + 1;
      lStack_e8 = lStack_68;
      lStack_e0 = lStack_60;
      do {
        lVar3 = *(longlong *)(lVar18 + 0x160);
        if (lVar3 == 0) {
          uVar13 = uStack_c8;
          param_1 = puStack_d0;
          if (uVar6 == 0) {
            *puStack_d8 = 1;
          }
          break;
        }
        uVar13 = (ulonglong)uVar6;
        uStack_f8 = uVar10 + 1;
        uVar20 = (ulonglong)*(ushort *)(lVar18 + 0x3d0);
        if (uVar20 == 0) {
          if (*(short *)(lVar3 + 0x3d2) == 0) {
            FUN_142ce0320("internal error: entered unreachable code: empty internal node",0x7b,
                          &DAT_142e13890);
            goto LAB_1406d70a1;
          }
          lStack_1a0 = *(longlong *)(lVar3 + 0x3e0);
          uStack_1b8 = 0;
          uVar17 = uVar13 + *(ushort *)(lStack_1a0 + 0x3d2) + 1;
          lStack_1c8 = lVar3;
          uStack_1c0 = uStack_f8;
          lStack_1b0 = lVar18;
          uStack_1a8 = uVar10;
          uStack_198 = uVar10;
          if (0xb < uVar17) {
            FUN_1406dd5b0(&lStack_1c8,5 - uVar13);
            uVar13 = uStack_c8;
            param_1 = puStack_d0;
            break;
          }
          uVar20 = 0;
          lVar16 = lVar18;
          uVar11 = uVar13;
          uVar13 = (ulonglong)*(ushort *)(lStack_1a0 + 0x3d2);
          lVar18 = lStack_1a0;
        }
        else {
          lVar16 = *(longlong *)(lVar3 + 0x3d0 + uVar20 * 8);
          uVar20 = uVar20 - 1;
          uVar11 = (ulonglong)*(ushort *)(lVar16 + 0x3d2);
          lStack_190 = lVar3;
          uStack_188 = uStack_f8;
          uStack_180 = uVar20;
          lStack_178 = lVar16;
          uStack_170 = uVar10;
          lStack_168 = lVar18;
          uStack_160 = uVar10;
          if (0xb < (uint)uVar6 + (uint)*(ushort *)(lVar16 + 0x3d2) + 1) {
            FUN_1406dd1d0(&lStack_190,5 - uVar13);
            uVar13 = uStack_c8;
            param_1 = puStack_d0;
            break;
          }
          uVar17 = uVar11 + uVar13 + 1;
          if (0xb < uVar17) {
            FUN_142ce0300("assertion failed: new_left_len <= CAPACITY",0x2a,&DAT_142e11da0);
            goto LAB_1406d70a1;
          }
        }
        lStack_50 = lVar18;
        uStack_b0 = uVar13;
        lVar8 = uVar11 + 1;
        uVar6 = *(ushort *)(lVar3 + 0x3d2);
        uVar21 = (ulonglong)uVar6;
        *(short *)(lVar16 + 0x3d2) = (short)uVar17;
        lVar9 = uVar20 * 0x38;
        lStack_78 = *(longlong *)(lVar3 + 0x198 + lVar9);
        puVar1 = (undefined4 *)(lVar3 + 0x168 + lVar9);
        uStack_a8._0_4_ = *puVar1;
        uStack_a8._4_4_ = puVar1[1];
        uStack_a0._0_4_ = puVar1[2];
        uStack_a0._4_4_ = puVar1[3];
        puVar1 = (undefined4 *)(lVar3 + 0x178 + lVar9);
        uStack_98._0_4_ = *puVar1;
        uStack_98._4_4_ = puVar1[1];
        uStack_90._0_4_ = puVar1[2];
        uStack_90._4_4_ = puVar1[3];
        plVar2 = (longlong *)(lVar3 + 0x188 + lVar9);
        uStack_88 = *plVar2;
        uStack_80 = plVar2[1];
        lVar18 = ~uVar20 + uVar21;
        uStack_c0 = uVar11;
        uStack_b8 = uVar17;
        FUN_142cbd3c0(lVar3 + lVar9 + 0x168,lVar3 + lVar9 + 0x1a0,lVar18 * 0x38);
        uVar13 = uStack_b0;
        lVar9 = uVar11 * 0x38;
        puVar1 = (undefined4 *)(lVar16 + 0x168 + lVar9);
        *puVar1 = (undefined4)uStack_a8;
        puVar1[1] = uStack_a8._4_4_;
        puVar1[2] = (undefined4)uStack_a0;
        puVar1[3] = uStack_a0._4_4_;
        puVar1 = (undefined4 *)(lVar16 + 0x178 + lVar9);
        *puVar1 = (undefined4)uStack_98;
        puVar1[1] = uStack_98._4_4_;
        puVar1[2] = (undefined4)uStack_90;
        puVar1[3] = uStack_90._4_4_;
        puVar1 = (undefined4 *)(lVar16 + 0x188 + lVar9);
        *puVar1 = (undefined4)uStack_88;
        puVar1[1] = uStack_88._4_4_;
        puVar1[2] = (undefined4)uStack_80;
        puVar1[3] = uStack_80._4_4_;
        *(longlong *)(lVar16 + 0x198 + lVar9) = lStack_78;
        FUN_142cbd3c0(lVar16 + lVar8 * 0x38 + 0x168,lStack_50 + 0x168,uStack_b0 * 0x38);
        lVar9 = uVar20 * 0x20;
        uStack_a8 = *(longlong *)(lVar3 + lVar9);
        uStack_a0 = ((longlong *)(lVar3 + lVar9))[1];
        plVar2 = (longlong *)(lVar3 + 0x10 + lVar9);
        uStack_98 = *plVar2;
        uStack_90 = plVar2[1];
        FUN_142cbd3c0(lVar3 + lVar9,lVar3 + lVar9 + 0x20,lVar18 * 0x20);
        uVar10 = (ulonglong)(uint)((int)uStack_c0 << 5);
        puVar1 = (undefined4 *)(lVar16 + uVar10);
        *puVar1 = (undefined4)uStack_a8;
        puVar1[1] = uStack_a8._4_4_;
        puVar1[2] = (undefined4)uStack_a0;
        puVar1[3] = uStack_a0._4_4_;
        puVar1 = (undefined4 *)(lVar16 + 0x10 + uVar10);
        *puVar1 = (undefined4)uStack_98;
        puVar1[1] = uStack_98._4_4_;
        puVar1[2] = (undefined4)uStack_90;
        puVar1[3] = uStack_90._4_4_;
        lStack_f0 = lVar8;
        FUN_142cbd3c0((ulonglong)(uint)((int)lVar8 << 5) + lVar16,lStack_50,(int)uVar13 << 5);
        uVar13 = uVar20 + 1;
        FUN_142cbd3c0(lVar3 + uVar20 * 8 + 0x3e0,lVar3 + uVar20 * 8 + 1000,lVar18 * 8);
        lVar8 = lStack_e0;
        lVar9 = lStack_e8;
        lVar18 = lStack_f0;
        uVar10 = uStack_f8;
        if (uVar13 < uVar21) {
          uVar12 = (uint)uVar6 - (int)uVar13 & 3;
          uVar17 = (ulonglong)uVar12;
          if (uVar12 == 0) {
            iVar19 = (uint)uVar6 - (int)uVar20;
            uVar11 = uVar13;
          }
          else {
            do {
              uVar11 = uVar13 + 1;
              lVar15 = *(longlong *)(lVar3 + 0x3d8 + uVar13 * 8);
              *(longlong *)(lVar15 + 0x160) = lVar3;
              *(short *)(lVar15 + 0x3d0) = (short)uVar13;
              uVar17 = uVar17 - 1;
              uVar13 = uVar11;
            } while (uVar17 != 0);
            iVar19 = (uint)uVar6 - (int)uVar20;
          }
          if (2 < iVar19 - 2U) {
            do {
              lVar15 = *(longlong *)(lVar3 + 0x3d8 + uVar11 * 8);
              *(longlong *)(lVar15 + 0x160) = lVar3;
              sVar7 = (short)uVar11;
              *(short *)(lVar15 + 0x3d0) = sVar7;
              lVar15 = *(longlong *)(lVar3 + 0x3e0 + uVar11 * 8);
              *(longlong *)(lVar15 + 0x160) = lVar3;
              *(short *)(lVar15 + 0x3d0) = sVar7 + 1;
              lVar15 = *(longlong *)(lVar3 + 1000 + uVar11 * 8);
              *(longlong *)(lVar15 + 0x160) = lVar3;
              *(short *)(lVar15 + 0x3d0) = sVar7 + 2;
              lVar15 = *(longlong *)(lVar3 + 0x3f0 + uVar11 * 8);
              *(longlong *)(lVar15 + 0x160) = lVar3;
              *(short *)(lVar15 + 0x3d0) = sVar7 + 3;
              uVar11 = uVar11 + 4;
            } while (uVar11 != uVar21);
          }
        }
        *(short *)(lVar3 + 0x3d2) = *(short *)(lVar3 + 0x3d2) + -1;
        uVar14 = 0x3d8;
        if (1 < uStack_f8) {
          if (uStack_b0 + 1 != uStack_b8 - uStack_c0) {
            FUN_142ce0300(&DAT_142e12578,0x28,&DAT_142e125a0);
            goto LAB_1406d70a1;
          }
          FUN_142cbd3c0(lVar16 + 0x3d8 + lStack_f0 * 8,lStack_50 + 0x3d8,(int)(uStack_b0 + 1) << 3);
          iVar19 = (int)lVar18;
          uVar12 = ((int)uStack_b8 - iVar19) + 1U & 3;
          uVar13 = (ulonglong)uVar12;
          lVar15 = lVar18;
          if (uVar12 != 0) {
            do {
              lVar18 = lVar15 + 1;
              lVar4 = *(longlong *)(lVar16 + 0x3d8 + lVar15 * 8);
              *(longlong *)(lVar4 + 0x160) = lVar16;
              *(short *)(lVar4 + 0x3d0) = (short)lVar15;
              uVar13 = uVar13 - 1;
              lVar15 = lVar18;
            } while (uVar13 != 0);
          }
          uVar14 = 0x438;
          if (2 < (uint)((int)uStack_b8 - iVar19)) {
            do {
              lVar15 = *(longlong *)(lVar16 + 0x3d8 + lVar18 * 8);
              *(longlong *)(lVar15 + 0x160) = lVar16;
              sVar7 = (short)lVar18;
              *(short *)(lVar15 + 0x3d0) = sVar7;
              lVar15 = *(longlong *)(lVar16 + 0x3e0 + lVar18 * 8);
              *(longlong *)(lVar15 + 0x160) = lVar16;
              *(short *)(lVar15 + 0x3d0) = sVar7 + 1;
              lVar15 = *(longlong *)(lVar16 + 1000 + lVar18 * 8);
              *(longlong *)(lVar15 + 0x160) = lVar16;
              *(short *)(lVar15 + 0x3d0) = sVar7 + 2;
              lVar15 = *(longlong *)(lVar16 + 0x3f0 + lVar18 * 8);
              *(longlong *)(lVar15 + 0x160) = lVar16;
              uVar13 = lVar18 + 3;
              *(short *)(lVar15 + 0x3d0) = (short)uVar13;
              lVar18 = lVar18 + 4;
            } while (uVar13 != uStack_b8);
          }
        }
        thunk_FUN_1406dbb00(lStack_50,uVar14,8);
        uVar6 = *(ushort *)(lVar3 + 0x3d2);
        lVar18 = lVar3;
        uVar13 = uStack_c8;
        param_1 = puStack_d0;
      } while (uVar6 < 5);
    }
  }
  *(ulonglong *)(param_1 + 0x14) = CONCAT44(uStack_104,uStack_108);
  param_1[0x10] = uStack_118;
  param_1[0x11] = uStack_114;
  param_1[0x12] = uStack_110;
  param_1[0x13] = uStack_10c;
  param_1[0xc] = (undefined4)uStack_128;
  param_1[0xd] = uStack_128._4_4_;
  param_1[0xe] = uStack_120;
  param_1[0xf] = uStack_11c;
  param_1[8] = uStack_138;
  param_1[9] = uStack_134;
  param_1[10] = uStack_130;
  param_1[0xb] = uStack_12c;
  param_1[4] = uStack_148;
  param_1[5] = uStack_144;
  param_1[6] = uStack_140;
  param_1[7] = uStack_13c;
  *param_1 = uStack_158;
  param_1[1] = uStack_154;
  param_1[2] = uStack_150;
  param_1[3] = uStack_14c;
  *(longlong *)(param_1 + 0x16) = lVar9;
  *(longlong *)(param_1 + 0x18) = lVar8;
  *(ulonglong *)(param_1 + 0x1a) = uVar13;
  return;
}


/* address=1406d70f0 name=FUN_1406d70f0 */

void FUN_1406d70f0(undefined8 *param_1,longlong param_2,longlong param_3,LPCWSTR param_4,int param_5
                  )

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puStack_78;
  code *pcStack_70;
  ulonglong uStack_68;
  undefined8 *puStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_60 = param_1;
  while( true ) {
    lVar5 = param_2 + 0x168;
    uStack_68 = (ulonglong)*(ushort *)(param_2 + 0x3d2);
    lVar6 = uStack_68 * 0x38;
    uVar7 = 0xffffffffffffffff;
    lStack_50 = param_2;
    do {
      if (lVar6 == 0) goto joined_r0x0001406d71ac;
      iVar1 = CompareStringOrdinal
                        (param_4,param_5,*(LPCWSTR *)(lVar5 + 0x28),*(int *)(lVar5 + 0x30),1);
      uVar2 = iVar1 - 1;
      if (2 < uVar2) {
        DVar3 = GetLastError();
        if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
          FUN_142ce0560(&PTR_LAB_142e11c50);
        }
        uStack_58 = (ulonglong)DVar3 << 0x20 | 2;
        puStack_78 = &uStack_58;
        pcStack_70 = FUN_140711090;
        FUN_142ce0320(&DAT_142e15590,&puStack_78,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e155b8);
        do {
          invalidInstructionException();
        } while( true );
      }
      lVar5 = lVar5 + 0x38;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + -0x38;
    } while (uVar2 == 2);
    uStack_68 = uVar7;
    if (uVar2 == 1) break;
joined_r0x0001406d71ac:
    uVar7 = uStack_68;
    if (param_3 == 0) {
      uVar4 = 1;
      param_3 = 0;
LAB_1406d71c1:
      puStack_60[1] = lStack_50;
      puStack_60[2] = param_3;
      puStack_60[3] = uVar7;
      *puStack_60 = uVar4;
      return;
    }
    param_3 = param_3 + -1;
    param_2 = *(longlong *)(lStack_50 + 0x3d8 + uVar7 * 8);
  }
  uVar4 = 0;
  goto LAB_1406d71c1;
}


/* address=1406d72c0 name=FUN_1406d72c0 */

void FUN_1406d72c0(longlong *param_1,byte **param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
  
  uVar10 = (uint)*(ushort *)(param_2 + 2);
  pbVar5 = *param_2;
  pbVar3 = param_2[1];
  do {
    if ((short)uVar10 == 0) {
      if (pbVar5 == pbVar3) {
        return;
      }
      bVar2 = *pbVar5;
      uVar10 = (uint)bVar2;
      if (-1 < (char)bVar2) {
        pbVar5 = pbVar5 + 1;
        goto LAB_1406d7390;
      }
      uVar4 = bVar2 & 0x1f;
      pbVar1 = pbVar5 + 1;
      if (bVar2 < 0xe0) {
        pbVar5 = pbVar5 + 2;
        uVar10 = uVar4 << 6 | *pbVar1 & 0x3f;
        goto LAB_1406d7390;
      }
      uVar10 = pbVar5[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
      if (bVar2 < 0xf0) {
        pbVar5 = pbVar5 + 3;
        uVar10 = uVar10 | uVar4 << 0xc;
      }
      else {
        pbVar1 = pbVar5 + 3;
        pbVar5 = pbVar5 + 4;
        uVar10 = *pbVar1 & 0x3f | uVar10 << 6 | (bVar2 & 7) << 0x12;
      }
      if (uVar10 < 0x10000) goto LAB_1406d7390;
      uVar9 = (ushort)(uVar10 + 0xff0000 >> 10) | 0xd800;
      uVar10 = uVar10 & 0x3ff | 0xdc00;
      lVar6 = param_1[2];
      if (lVar6 == *param_1) goto LAB_1406d73a0;
    }
    else {
LAB_1406d7390:
      uVar9 = (ushort)uVar10;
      uVar10 = 0;
      lVar6 = param_1[2];
      if (lVar6 == *param_1) {
LAB_1406d73a0:
        uVar7 = (longlong)pbVar3 - (longlong)pbVar5;
        uVar8 = uVar7 + 3;
        if (0xfffffffffffffffc < uVar7) {
          uVar8 = 0xffffffffffffffff;
        }
        FUN_142cde5e0(param_1,lVar6,((uVar8 >> 2) - (ulonglong)((short)uVar10 == 0)) + 2,2,2);
      }
    }
    *(ushort *)(param_1[1] + lVar6 * 2) = uVar9;
    param_1[2] = lVar6 + 1;
  } while( true );
}


/* address=1406d7440 name=FUN_1406d7440 */

void FUN_1406d7440(char *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != '\0') {
    FUN_1406f4f00();
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1406ea000();
        return;
      }
    }
  }
  return;
}


/* address=1406d74c0 name=FUN_1406d74c0 */

void FUN_1406d74c0(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = *(char **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x10) == '\0') && ((DAT_143d00368 & 0x7fffffffffffffff) != 0)) {
    cVar2 = FUN_142cdf890();
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
                    /* WARNING: Could not recover jumptable at 0x0001406d7501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeByAddressSingle(pcVar1);
  return;
}


/* address=1406d7520 name=FUN_1406d7520 */

void FUN_1406d7520(int param_1,ulonglong param_2)

{
  longlong lStack_10;
  
  if (((param_1 != 0) && (1 < ((uint)param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    lStack_10 = param_2 - 1;
    FUN_140713290(&lStack_10);
  }
  return;
}


/* address=1406d7560 name=FUN_1406d7560 */

void FUN_1406d7560(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == -2) {
    lVar2 = param_1[1];
    lVar1 = 0x10;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    lVar1 = 8;
    if (lVar2 < 1) {
      return;
    }
  }
  thunk_FUN_1406dbb00(*(undefined8 *)((longlong)param_1 + lVar1),lVar2,1);
  return;
}


/* address=1406d75a0 name=FUN_1406d75a0 */

void FUN_1406d75a0(short param_1,ulonglong param_2)

{
  longlong lStack_10;
  
  if (((param_1 == 2) && (1 < ((uint)param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    lStack_10 = param_2 - 1;
    FUN_140713290(&lStack_10);
  }
  return;
}


/* address=1406d75e0 name=FUN_1406d75e0 */

void FUN_1406d75e0(longlong param_1,ulonglong param_2)

{
  longlong lStack_10;
  
  if (((param_1 != 0) && (1 < ((uint)param_2 & 3) - 2)) && ((param_2 & 3) != 0)) {
    lStack_10 = param_2 - 1;
    FUN_140713290(&lStack_10);
  }
  return;
}


/* address=1406d7620 name=FUN_1406d7620 */

void FUN_1406d7620(ulonglong param_1)

{
  longlong lStack_10;
  
  if (param_1 != 0) {
    if ((1 < ((uint)param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
      lStack_10 = param_1 - 1;
      FUN_140713290(&lStack_10);
    }
  }
  return;
}


/* address=1406d7660 name=FUN_1406d7660 */

void FUN_1406d7660(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code **ppcVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    plVar6 = (longlong *)(lVar1 + 8);
    lVar5 = 1;
    do {
      lVar3 = plVar6[-1];
      ppcVar4 = (code **)*plVar6;
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(lVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1406dbb00(lVar3,ppcVar4[1],ppcVar4[2]);
      }
      plVar6 = plVar6 + 2;
      bVar7 = lVar5 != lVar2;
      lVar5 = lVar5 + 1;
    } while (bVar7);
  }
  if (*param_1 != 0) {
    thunk_FUN_1406dbb00(lVar1,*param_1 << 4,8);
    return;
  }
  return;
}


/* address=1406d7800 name=FUN_1406d7800 */

void FUN_1406d7800(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_1[1];
  lVar2 = lVar1;
  for (lVar3 = param_1[2]; lVar3 != 0; lVar3 = lVar3 + -1) {
    FUN_1406d8400(lVar2);
    lVar2 = lVar2 + 0x38;
  }
  if (*param_1 != 0) {
    thunk_FUN_1406dbb00(lVar1,*param_1 * 0x38,8);
    return;
  }
  return;
}


/* address=1406d7870 name=FUN_1406d7870 */

void FUN_1406d7870(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = lVar4 * 8;
      lVar4 = lVar4 + 1;
      CloseHandle(*(HANDLE *)(lVar2 + lVar1));
    } while (lVar3 != lVar4);
  }
  if (*param_1 != 0) {
    thunk_FUN_1406dbb00(lVar2,*param_1 << 3,8);
    return;
  }
  return;
}


/* address=1406d78f0 name=FUN_1406d78f0 */

void FUN_1406d78f0(longlong **param_1)

{
  longlong *plVar1;
  
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1406e9ef0();
    return;
  }
  return;
}


/* address=1406d7900 name=FUN_1406d7900 */

void FUN_1406d7900(longlong **param_1)

{
  longlong *plVar1;
  
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1406ea000();
    return;
  }
  return;
}


/* address=1406d7910 name=FUN_1406d7910 */

void FUN_1406d7910(longlong **param_1)

{
  longlong *plVar1;
  code **ppcVar2;
  
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1406e9fa0(param_1);
  }
  plVar1 = param_1[1];
  ppcVar2 = (code **)param_1[2];
  if (*ppcVar2 != (code *)0x0) {
    (**ppcVar2)(plVar1);
  }
  if (ppcVar2[1] != (code *)0x0) {
    thunk_FUN_1406dbb00(plVar1,ppcVar2[1],ppcVar2[2]);
  }
  thunk_FUN_1406dbb00(param_1,0x18,8);
  return;
}


/* address=1406d79e0 name=FUN_1406d79e0 */

void FUN_1406d79e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = param_1 + 1;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (*(int *)puVar1 == 0) {
    *param_1 = 0;
    LOCK();
    cVar2 = *(char *)((longlong)param_1 + 0xc);
    *(char *)((longlong)param_1 + 0xc) = '\0';
    UNLOCK();
    if (cVar2 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0001406d79fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      WakeByAddressSingle((longlong)param_1 + 0xc);
      return;
    }
  }
  return;
}


/* address=1406d7a10 name=FUN_1406d7a10 */

void FUN_1406d7a10(longlong **param_1)

{
  char *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  code **ppcVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar3 = param_1[1];
  plVar4 = param_1[2];
  if ((plVar3 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) {
    ppcVar5 = (code **)param_1[3];
    if (*ppcVar5 != (code *)0x0) {
      (**ppcVar5)(plVar4);
    }
    if (ppcVar5[1] != (code *)0x0) {
      thunk_FUN_1406dbb00(plVar4,ppcVar5[1],ppcVar5[2]);
    }
  }
  param_1[1] = (longlong *)0x0;
  plVar6 = *param_1;
  if (plVar6 != (longlong *)0x0) {
    if (((byte)plVar3 & plVar4 != (longlong *)0x0) != 0) {
      *(undefined *)(plVar6 + 4) = 1;
    }
    LOCK();
    plVar3 = plVar6 + 3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar7 = plVar6[2];
      LOCK();
      pcVar1 = (char *)(lVar7 + 0x28);
      cVar2 = *pcVar1;
      *pcVar1 = '\x01';
      UNLOCK();
      if (cVar2 == -1) {
        WakeByAddressSingle(lVar7 + 0x28);
      }
    }
    plVar3 = *param_1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_1406e9f50(param_1);
      }
    }
  }
  if ((param_1[1] != (longlong *)0x0) && (plVar3 = param_1[2], plVar3 != (longlong *)0x0)) {
    ppcVar5 = (code **)param_1[3];
    if (*ppcVar5 != (code *)0x0) {
      (**ppcVar5)(plVar3);
    }
    if (ppcVar5[1] != (code *)0x0) {
      thunk_FUN_1406dbb00(plVar3,ppcVar5[1],ppcVar5[2]);
    }
  }
  return;
}


/* address=1406d7d00 name=FUN_1406d7d00 */

void FUN_1406d7d00(undefined8 *param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = param_1[3] - param_1[1];
  if (uVar3 != 0) {
    lVar5 = param_1[1] + 0x18;
    lVar4 = 1 - (uVar3 >> 4);
    do {
      uVar1 = *(undefined8 *)(lVar5 + -0x18);
      ppcVar2 = *(code ***)(lVar5 + -0x10);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(uVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1406dbb00(uVar1,ppcVar2[1],ppcVar2[2]);
      }
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 1);
  }
  if (param_1[2] != 0) {
    thunk_FUN_1406dbb00(*param_1,param_1[2] << 4,8);
    return;
  }
  return;
}


/* address=1406d7eb0 name=FUN_1406d7eb0 */

void FUN_1406d7eb0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lStack_20;
  longlong *plStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  if ((((*(char *)(param_1 + 3) == '\0') &&
       (plStack_18 = param_1, uVar1 = FUN_1406e6a20(), param_1 = plStack_18, uVar1 != 0)) &&
      (1 < ((uint)uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
    lStack_20 = uVar1 - 1;
    FUN_140713290(&lStack_20);
    param_1 = plStack_18;
  }
  if (*param_1 != 0) {
    thunk_FUN_1406dbb00(param_1[1],*param_1,1);
  }
  return;
}


/* address=1406d7f70 name=FUN_1406d7f70 */

void FUN_1406d7f70(char *param_1,byte param_2)

{
  char cVar1;
  
  if (((param_2 & 1) == 0) && ((DAT_143d00368 & 0x7fffffffffffffff) != 0)) {
    cVar1 = FUN_142cdf890();
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
                    /* WARNING: Could not recover jumptable at 0x0001406d7fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeByAddressSingle();
  return;
}


/* address=1406d7fc0 name=FUN_1406d7fc0 */

/* WARNING: Removing unreachable block (ram,0x000142cdee00) */
/* WARNING: Removing unreachable block (ram,0x000142cdee99) */
/* WARNING: Removing unreachable block (ram,0x000142cdeeb1) */
/* WARNING: Removing unreachable block (ram,0x000142cdee17) */
/* WARNING: Removing unreachable block (ram,0x000142cdee1d) */
/* WARNING: Removing unreachable block (ram,0x000142cdee24) */
/* WARNING: Removing unreachable block (ram,0x000142cdee2a) */
/* WARNING: Removing unreachable block (ram,0x000142cdee3f) */
/* WARNING: Removing unreachable block (ram,0x000142cdee41) */
/* WARNING: Removing unreachable block (ram,0x000142cdee49) */
/* WARNING: Removing unreachable block (ram,0x000142cdee51) */
/* WARNING: Removing unreachable block (ram,0x000142cdee5b) */
/* WARNING: Removing unreachable block (ram,0x000142cdee61) */
/* WARNING: Removing unreachable block (ram,0x000142cdee78) */
/* WARNING: Removing unreachable block (ram,0x000142cdee7f) */
/* WARNING: Removing unreachable block (ram,0x000142cdee85) */
/* WARNING: Removing unreachable block (ram,0x000142cdee92) */

int FUN_1406d7fc0(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  return -(iVar1 - 1U & 0xbfffffff);
}


/* address=1406d7fe0 name=FUN_1406d7fe0 */

void FUN_1406d7fe0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong alStack_48 [2];
  longlong lStack_38;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lStack_50 = 0;
  }
  else {
    lStack_78 = param_1[1];
    lStack_50 = param_1[2];
    uStack_88 = 0;
    uStack_68 = 0;
    lStack_80 = lVar1;
    lStack_60 = lVar1;
    lStack_58 = lStack_78;
  }
  uStack_90 = (ulonglong)(lVar1 != 0);
  uStack_70 = uStack_90;
  FUN_1406eb180(alStack_48,&uStack_90);
  if (alStack_48[0] != 0) {
    do {
      lVar4 = lStack_38;
      lVar3 = alStack_48[0];
      lVar1 = alStack_48[0] + lStack_38 * 0x38;
      lVar2 = *(longlong *)(alStack_48[0] + 0x168 + lStack_38 * 0x38);
      if (lVar2 != 0) {
        thunk_FUN_1406dbb00(*(undefined8 *)(lVar1 + 0x170),lVar2,1);
      }
      if (*(longlong *)(lVar1 + 0x188) != 0) {
        thunk_FUN_1406dbb00(*(undefined8 *)(lVar1 + 400),*(longlong *)(lVar1 + 0x188) * 2,2);
      }
      plVar5 = (longlong *)(lVar3 + lVar4 * 0x20);
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        thunk_FUN_1406dbb00(plVar5[1],lVar1,1);
      }
      FUN_1406eb180(alStack_48,&uStack_90);
    } while (alStack_48[0] != 0);
  }
  return;
}


/* address=1406d8100 name=FUN_1406d8100 */

void FUN_1406d8100(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong alStack_48 [2];
  longlong lStack_38;
  
  FUN_1406eb180(alStack_48,param_1);
  if (alStack_48[0] != 0) {
    do {
      lVar4 = lStack_38;
      lVar3 = alStack_48[0];
      lVar1 = alStack_48[0] + lStack_38 * 0x38;
      lVar2 = *(longlong *)(alStack_48[0] + 0x168 + lStack_38 * 0x38);
      if (lVar2 != 0) {
        thunk_FUN_1406dbb00(*(undefined8 *)(lVar1 + 0x170),lVar2,1);
      }
      if (*(longlong *)(lVar1 + 0x188) != 0) {
        thunk_FUN_1406dbb00(*(undefined8 *)(lVar1 + 400),*(longlong *)(lVar1 + 0x188) * 2,2);
      }
      plVar5 = (longlong *)(lVar3 + lVar4 * 0x20);
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        thunk_FUN_1406dbb00(plVar5[1],lVar1,1);
      }
      FUN_1406eb180(alStack_48,param_1);
    } while (alStack_48[0] != 0);
  }
  return;
}


/* address=1406d81d0 name=FUN_1406d81d0 */

void FUN_1406d81d0(longlong param_1)

{
  ulonglong uVar1;
  longlong lStack_10;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 != 0) {
    if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
      lStack_10 = uVar1 - 1;
      FUN_140713290(&lStack_10);
    }
  }
  return;
}


/* address=1406d8210 name=FUN_1406d8210 */

void FUN_1406d8210(longlong param_1)

{
  HANDLE hObject;
  longlong *plVar1;
  
  hObject = *(HANDLE *)(param_1 + 0x30);
  CloseHandle(*(HANDLE *)(param_1 + 0x28));
  CloseHandle(hObject);
  FUN_1406f4f00();
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1406ea000();
    }
  }
  FUN_1406d7660(param_1);
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1406e9e60(param_1 + 0x20);
    return;
  }
  return;
}


/* address=1406d8350 name=FUN_1406d8350 */

void FUN_1406d8350(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lStack_10;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  if (lVar1 == -1) {
    if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      lStack_10 = uVar2 - 1;
      FUN_140713290(&lStack_10);
    }
  }
  else if (lVar1 != 0) {
    thunk_FUN_1406dbb00(uVar2,lVar1,1);
    return;
  }
  return;
}


/* address=1406d83b0 name=FUN_1406d83b0 */

void FUN_1406d83b0(longlong *param_1)

{
  if (*param_1 != 0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if (param_1[2] != 0) {
    CloseHandle((HANDLE)param_1[3]);
  }
  if (param_1[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406d83f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[5]);
    return;
  }
  return;
}


/* address=1406d8400 name=FUN_1406d8400 */

void FUN_1406d8400(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)(lVar1 + 0x28);
    do {
      if (0 < (longlong)puVar6[-1]) {
        thunk_FUN_1406dbb00(*puVar6,puVar6[-1],1);
      }
      if (puVar6[-5] != 2) {
        if (puVar6[-5] == 0) {
          lVar3 = puVar6[-4];
          if (lVar3 != 0) {
            uVar2 = puVar6[-3];
            uVar5 = 1;
            goto LAB_1406d8430;
          }
        }
        else if (puVar6[-4] != 0) {
          uVar2 = puVar6[-3];
          lVar3 = puVar6[-4] * 2;
          uVar5 = 2;
LAB_1406d8430:
          thunk_FUN_1406dbb00(uVar2,lVar3,uVar5);
        }
      }
      puVar6 = puVar6 + 9;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_1406dbb00(lVar1,*param_1 * 0x48,8);
    return;
  }
  return;
}


/* address=1406d84d0 name=FUN_1406d84d0 */

void FUN_1406d84d0(longlong *param_1)

{
  if (0 < param_1[4]) {
    thunk_FUN_1406dbb00(param_1[5],param_1[4],1);
  }
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      if (param_1[1] != 0) {
        thunk_FUN_1406dbb00(param_1[2],param_1[1],1);
        return;
      }
    }
    else if (param_1[1] != 0) {
      thunk_FUN_1406dbb00(param_1[2],param_1[1] * 2,2);
      return;
    }
  }
  return;
}


/* address=1406d8550 name=FUN_1406d8550 */

void FUN_1406d8550(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong lStack_10;
  
  uVar1 = *param_1;
  if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
    lStack_10 = uVar1 - 1;
    FUN_140713290(&lStack_10);
  }
  return;
}


/* address=1406d85d0 name=FUN_1406d85d0 */

void FUN_1406d85d0(longlong **param_1)

{
  longlong *plVar1;
  code **ppcVar2;
  
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1406e9fa0(param_1);
  }
  plVar1 = param_1[1];
  ppcVar2 = (code **)param_1[2];
  if (*ppcVar2 != (code *)0x0) {
    (**ppcVar2)(plVar1);
  }
  if (ppcVar2[1] != (code *)0x0) {
    thunk_FUN_1406dbb00(plVar1,ppcVar2[1],ppcVar2[2]);
    return;
  }
  return;
}


/* address=1406d8680 name=FUN_1406d8680 */

void FUN_1406d8680(longlong **param_1)

{
  longlong *plVar1;
  
  FUN_1406f4f00();
  plVar1 = *param_1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1406ea000();
      return;
    }
  }
  return;
}


/* address=1406d86f0 name=FUN_1406d86f0 */

void FUN_1406d86f0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1406f4f00();
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1406ea000();
    }
  }
  FUN_1406d7660(param_1);
  return;
}


/* address=1406d8790 name=FUN_1406d8790 */

void FUN_1406d8790(undefined8 *param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  longlong *plVar3;
  
  uVar1 = *param_1;
  ppcVar2 = (code **)param_1[1];
  if (*ppcVar2 != (code *)0x0) {
    (**ppcVar2)(uVar1);
  }
  if (ppcVar2[1] != (code *)0x0) {
    thunk_FUN_1406dbb00(uVar1,ppcVar2[1],ppcVar2[2]);
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1406ea000(param_1 + 2);
      return;
    }
  }
  return;
}


/* address=1406d8860 name=FUN_1406d8860 */

void FUN_1406d8860(longlong *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1406dbb00(param_1[1],*param_1,1);
  }
  if (param_1[4] != 0) {
    thunk_FUN_1406dbb00(param_1[5],param_1[4] * 2,2);
    return;
  }
  return;
}


/* address=1406d88b0 name=FUN_1406d88b0 */

void FUN_1406d88b0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x10);
    uVar2 = uVar1 - param_2;
    if (uVar1 < param_2) {
      FUN_142ce0350(param_2,uVar1,uVar1,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e13df8);
      do {
        invalidInstructionException();
      } while( true );
    }
    FUN_142cbd3c0(*(longlong *)(param_1 + 8),param_2 + *(longlong *)(param_1 + 8),uVar2);
    if (uVar2 <= *(ulonglong *)(param_1 + 0x10)) {
      *(ulonglong *)(param_1 + 0x10) = uVar2;
    }
  }
  return;
}


/* address=1406d8910 name=FUN_1406d8910 */

void FUN_1406d8910(undefined8 *param_1)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)param_1[1];
  if (*ppcVar1 != (code *)0x0) {
    (**ppcVar1)();
  }
  if (ppcVar1[1] != (code *)0x0) {
    thunk_FUN_1406dbb00(*param_1,ppcVar1[1],ppcVar1[2]);
    return;
  }
  return;
}


/* address=1406d89f0 name=FUN_1406d89f0 */

void FUN_1406d89f0(longlong *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1406dbb00(param_1[1],*param_1,1);
  }
  if (param_1[4] != 0) {
    thunk_FUN_1406dbb00(param_1[5],param_1[4] * 2,2);
  }
  if (param_1[7] != 0) {
    thunk_FUN_1406dbb00(param_1[8],param_1[7],1);
    return;
  }
  return;
}


/* address=1406d8a60 name=FUN_1406d8a60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1406d8a60(HANDLE *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  HANDLE hHandle;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  HANDLE *ppvStack_88;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined uStack_74;
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar1 = *param_2;
  uVar11 = param_2[2];
  uStack_70 = 0x2000;
  uVar10 = uVar1;
  ppvStack_88 = param_1;
  uStack_80 = param_3;
  uStack_68 = uVar11;
  if (param_3 == 1) {
    if (0xfffffffffffffbff < param_4) {
      uStack_70 = 0x2000;
      goto LAB_1406d8b37;
    }
    uVar13 = param_4 + 0x400;
    uVar12 = (ulonglong)((uint)uVar13 & 0x1fff);
    uVar8 = (param_4 - uVar12) + 0x2400;
    uStack_70 = 0x2000;
    if (uVar13 <= uVar8) {
      uStack_70 = uVar8;
    }
    if (uVar12 == 0) {
      uStack_70 = uVar13;
    }
    if (param_4 != 0) goto LAB_1406d8b37;
  }
  if (uVar1 - uVar11 < 0x20) {
    puVar9 = param_2;
    lVar6 = FUN_1406d9c60(param_1);
    if (lVar6 == 1) {
      return 1;
    }
    if (puVar9 == (ulonglong *)0x0) {
      return 0;
    }
    uVar11 = param_2[2];
    uVar10 = *param_2;
  }
LAB_1406d8b37:
  uStack_80 = uStack_80 & 0xffffffffffffff01;
  if (uVar11 != uVar10) goto LAB_1406d8b7e;
  do {
    if (uVar10 == uVar1) {
      puVar9 = param_2;
      lVar6 = FUN_1406d9c60(ppvStack_88);
      if (lVar6 == 1) {
        return 1;
      }
      uVar11 = param_2[2];
      if (puVar9 == (ulonglong *)0x0) {
        return 0;
      }
      uVar10 = *param_2;
    }
LAB_1406d8b7e:
    do {
      uVar13 = param_2[1];
      if (uVar11 == uVar10) {
        uVar12 = uVar10 * 2;
        if (uVar10 * 2 < uVar10 + 0x20) {
          uVar12 = uVar10 + 0x20;
        }
        FUN_142cdf4a0(&iStack_a8,uVar10,uVar13,uVar12,1,1);
        if (iStack_a8 == 1) {
          return 1;
        }
        uVar13 = CONCAT44(uStack_9c,uStack_a0);
        param_2[1] = uVar13;
        *param_2 = uVar12;
        uVar10 = uVar12;
      }
      else {
        uVar10 = *param_2;
      }
      uVar12 = uVar10 - uVar11;
      if (uStack_70 < uVar10 - uVar11) {
        uVar12 = uStack_70;
      }
      if (0xfffffffe < uVar12) {
        uVar12 = 0xffffffff;
      }
      while( true ) {
        hHandle = *ppvStack_88;
        iStack_a8 = _DAT_142e134e8;
        uStack_a4 = _UNK_142e134ec;
        uStack_a0 = _UNK_142e134f0;
        uStack_9c = _UNK_142e134f4;
        iVar4 = NtReadFile(hHandle,0,0,0,&iStack_a8,uVar13 + uVar11,(int)uVar12,ZEXT816(0));
        if (iVar4 == 0x103) {
          WaitForSingleObject(hHandle,0xffffffff);
          iVar4 = iStack_a8;
        }
        if (iVar4 == -0x3fffffef) {
          param_2[2] = uVar11;
          return 0;
        }
        if (iVar4 == 0x103) {
          uStack_78 = 0;
          uStack_74 = 0;
          uVar7 = FUN_1406fd540(&uStack_78,
                                "fatal runtime error: I/O error: operation failed to complete synchronously, aborting\n"
                                ,0xab);
          FUN_1406d7620(uVar7);
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(7);
          do {
            invalidInstructionException();
          } while( true );
        }
        if (-1 < iVar4) break;
        uVar5 = RtlNtStatusToDosError(iVar4);
        if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
          FUN_142ce0560(&PTR_LAB_142e11c50);
        }
        lVar6 = FUN_140708a90();
        cVar3 = (**(code **)(lVar6 + 8))(uVar5);
        if (cVar3 == '\v') {
          param_2[2] = uVar11;
          return 0;
        }
        lVar6 = FUN_140708a90();
        cVar3 = (**(code **)(lVar6 + 0x10))(uVar5);
        if (cVar3 == '\0') {
          param_2[2] = uVar11;
          return 1;
        }
      }
      uVar11 = uVar11 + CONCAT44(uStack_9c,uStack_a0);
      param_2[2] = uVar11;
      if (CONCAT44(uStack_9c,uStack_a0) == 0) {
        return 0;
      }
      uStack_70 = uStack_70 | -(ulonglong)((char)uStack_80 == '\0');
    } while (uVar11 != uVar10);
  } while( true );
}


/* address=1406d8e80 name=FUN_1406d8e80 */

void FUN_1406d8e80(void)

{
  FUN_1406da370();
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406d8ea0 name=FUN_1406d8ea0 */

void FUN_1406d8ea0(void)

{
  FUN_1406db280();
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406d8ec0 name=FUN_1406d8ec0 */

void FUN_1406d8ec0(void)

{
  FUN_1406db430();
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406d8ee0 name=FUN_1406d8ee0 */

void FUN_1406d8ee0(void)

{
  FUN_1406e67f0();
  return;
}


/* address=1406d8f00 name=FUN_1406d8f00 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1406d8f00(HANDLE param_1,HANDLE param_2)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined auStack_1068 [4096];
  HANDLE pvStack_68;
  HANDLE pvStack_60;
  undefined uStack_58;
  HANDLE apvStack_50 [4];
  
  apvStack_50[3] = (HANDLE)0xfffffffffffffffe;
  pvStack_68 = param_1;
  pvStack_60 = param_2;
  apvStack_50[1] = param_2;
  apvStack_50[2] = param_1;
  FUN_142cbda60(auStack_1068,0,0x1000);
  while (puVar2 = auStack_1068, lVar1 = FUN_1406dcfd0(&pvStack_68,auStack_1068,0x1000), lVar1 != 1)
  {
    if (puVar2 == (undefined *)0x0) goto LAB_1406d8ffe;
    puVar4 = (undefined *)0x0;
    do {
      if (((undefined *)0x1000 < puVar2) || (puVar2 < puVar4)) {
        FUN_142ce0350(puVar4,puVar2,0x1000,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12a28);
        do {
          invalidInstructionException();
        } while( true );
      }
      puVar3 = puVar4 + (longlong)register0x00000020 + -0x1068;
      lVar1 = FUN_1406dd100(&pvStack_60,puVar3,(longlong)puVar2 - (longlong)puVar4);
      if (lVar1 == 1) {
        if ((1 < ((uint)puVar3 & 3) - 2) && (((ulonglong)puVar3 & 3) != 0)) {
          apvStack_50[0] = puVar3 + -1;
          uStack_58 = 3;
          FUN_140713290(apvStack_50);
        }
        goto LAB_1406d8ffe;
      }
      puVar4 = puVar4 + (longlong)puVar3;
    } while (puVar4 != puVar2);
  }
  if ((1 < ((uint)puVar2 & 3) - 2) && (((ulonglong)puVar2 & 3) != 0)) {
    apvStack_50[0] = puVar2 + -1;
    uStack_58 = 3;
    FUN_140713290(apvStack_50);
  }
LAB_1406d8ffe:
  CloseHandle(apvStack_50[2]);
  CloseHandle(apvStack_50[1]);
  return;
}


/* address=1406d90c0 name=FUN_1406d90c0 */

void FUN_1406d90c0(LPCWSTR *param_1,LPCWSTR *param_2,LPCWSTR *param_3)

{
  size_t _Size;
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  LPWSTR pWVar4;
  LPCWSTR pWVar5;
  LPCWSTR pWVar6;
  WCHAR *lpBuffer;
  LPCWSTR pWVar7;
  LPCWSTR pWVar8;
  LPCWSTR pWVar9;
  WCHAR aWStack_4a8 [512];
  LPCWSTR pWStack_a8;
  LPCWSTR pWStack_a0;
  LPWSTR pWStack_98;
  LPCWSTR pWStack_90;
  LPCWSTR *ppWStack_88;
  LPCWSTR pWStack_80;
  LPWSTR pWStack_78;
  LPCWSTR pWStack_70;
  LPCWSTR pWStack_68;
  LPCWSTR *ppWStack_60;
  LPWSTR pWStack_58;
  undefined uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pWStack_80 = (LPCWSTR)0x0;
  pWStack_78 = (LPWSTR)0x2;
  pWStack_70 = (LPCWSTR)0x0;
  pWStack_68 = *param_2;
  pWVar8 = (LPCWSTR)0x200;
  pWStack_58 = (LPWSTR)0x2;
  pWStack_a8 = (LPCWSTR)0x0;
  pWVar5 = (LPCWSTR)0x0;
  pWVar9 = (LPCWSTR)0x0;
  ppWStack_88 = param_3;
  ppWStack_60 = param_1;
  do {
    pWVar6 = pWVar8;
    lpBuffer = aWStack_4a8;
    pWVar7 = (LPCWSTR)0x200;
LAB_1406d91ac:
    SetLastError(0);
    DVar1 = GetFullPathNameW(pWStack_68,(DWORD)pWVar6,lpBuffer,(LPWSTR *)0x0);
    if ((DVar1 == 0) && (DVar2 = GetLastError(), DVar2 != 0)) {
      DVar1 = GetLastError();
      if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
        uStack_49 = 1;
        FUN_142ce0560(&PTR_LAB_142e11c50);
      }
      ppWStack_60[1] = (LPCWSTR)((ulonglong)DVar1 << 0x20 | 2);
      *ppWStack_60 = (LPCWSTR)0xffffffffffffffff;
      if (pWStack_80 != (LPCWSTR)0x0) {
        thunk_FUN_1406dbb00(pWStack_78,(longlong)pWStack_80 * 2,2);
      }
      if (*ppWStack_88 == (LPCWSTR)0x0) {
        return;
      }
      pWVar4 = ppWStack_88[1];
      pWVar8 = *ppWStack_88;
LAB_1406d9351:
      thunk_FUN_1406dbb00(pWVar4,(longlong)pWVar8 * 2,2);
      return;
    }
    pWVar8 = (LPCWSTR)(ulonglong)DVar1;
    if (pWVar6 == pWVar8) {
      DVar1 = GetLastError();
      if (DVar1 != 0x7a) {
        uStack_49 = 1;
        FUN_142ce0300("internal error: entered unreachable codenul byte found in provided data",0x28
                      ,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12460);
        goto LAB_1406d94cb;
      }
      pWVar8 = (LPCWSTR)((longlong)pWVar6 * 2);
      if ((LPCWSTR)0xfffffffe < pWVar8) {
        pWVar8 = (LPCWSTR)0xffffffff;
      }
    }
    else if (pWVar8 <= pWVar6) {
      if (pWVar7 < pWVar8) {
        uStack_49 = 1;
        FUN_142ce0350(0,pWVar8,pWVar7,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12448);
        goto LAB_1406d94cb;
      }
      pWVar5 = *ppWStack_88;
      pWVar4 = ppWStack_88[1];
      pWVar9 = ppWStack_88[2];
      if (pWVar9 < &DAT_00000005) {
        pWStack_68 = pWVar5;
        pWStack_58 = pWVar4;
        FUN_142ce0350(4,(undefined *)((longlong)pWVar9 + -1),pWVar9,
                      &PTR_s__rustc_48a229ceaefd4985c50990b14_142e12960);
        goto LAB_1406d94cb;
      }
      if ((LPCWSTR)((longlong)pWVar9 + -5) == pWVar8) {
        _Size = (longlong)pWVar8 * 2;
        iVar3 = memcmp(lpBuffer,pWVar4 + 4,_Size);
        if (iVar3 == 0) {
          if (DVar1 == 0) {
            pWStack_a0 = (LPCWSTR)0x0;
            pWStack_98 = (LPWSTR)0x2;
            pWStack_90 = (LPCWSTR)0x0;
            pWStack_68 = pWVar5;
            pWStack_58 = pWVar4;
          }
          else {
            pWStack_68 = pWVar5;
            pWStack_58 = pWVar4;
            FUN_140016610();
            pWStack_98 = (LPWSTR)thunk_FUN_1406dbaa0(_Size,2);
            if (pWStack_98 == (LPWSTR)0x0) {
              FUN_142cdfdab(2,_Size);
LAB_1406d94cb:
              do {
                invalidInstructionException();
              } while( true );
            }
            pWStack_a0 = pWVar8;
            FUN_142cbd3c0(pWStack_98,lpBuffer,_Size);
            pWStack_90 = pWVar8;
          }
          FUN_142cdf310(&pWStack_a0);
          pWVar4 = pWStack_98;
          pWVar5 = pWStack_a0;
          pWStack_98[(longlong)pWVar8] = L'\0';
          pWVar9 = (LPCWSTR)((longlong)pWVar8 + 1);
          if (pWStack_68 != (LPCWSTR)0x0) {
            thunk_FUN_1406dbb00(pWStack_58,(longlong)pWStack_68 * 2,2);
          }
        }
      }
      *ppWStack_60 = pWVar5;
      ppWStack_60[1] = pWVar4;
      ppWStack_60[2] = pWVar9;
      pWVar4 = pWStack_78;
      pWVar8 = pWStack_80;
      if (pWStack_80 == (LPCWSTR)0x0) {
        return;
      }
      goto LAB_1406d9351;
    }
  } while (pWVar8 < (LPCWSTR)0x201);
  if ((ulonglong)((longlong)pWVar5 - (longlong)pWVar9) <
      (ulonglong)((longlong)pWVar8 - (longlong)pWVar9)) {
    uStack_49 = 1;
    FUN_142cde5e0(&pWStack_80,pWVar9,(longlong)pWVar8 - (longlong)pWVar9,2,2);
    pWStack_a8 = pWStack_80;
    pWStack_58 = pWStack_78;
  }
  pWStack_70 = (LPCWSTR)0xffffffff;
  pWVar5 = pWStack_a8;
  pWVar6 = pWStack_70;
  lpBuffer = pWStack_58;
  pWVar7 = pWStack_70;
  pWVar9 = pWStack_70;
  if (pWStack_a8 < (LPCWSTR)0xffffffff) {
    pWVar6 = pWStack_a8;
    pWVar7 = pWStack_a8;
    pWVar9 = pWStack_a8;
    pWStack_70 = pWStack_a8;
  }
  goto LAB_1406d91ac;
}


/* address=1406d9600 name=FUN_1406d9600 */

void FUN_1406d9600(LPCWSTR *param_1,LPCWSTR *param_2,LPCWSTR *param_3)

{
  size_t _Size;
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  LPWSTR pWVar4;
  LPCWSTR pWVar5;
  LPCWSTR pWVar6;
  WCHAR *lpBuffer;
  LPCWSTR pWVar7;
  LPCWSTR pWVar8;
  LPCWSTR pWVar9;
  WCHAR aWStack_4a8 [512];
  LPCWSTR pWStack_a8;
  LPCWSTR *ppWStack_a0;
  LPCWSTR pWStack_98;
  LPWSTR pWStack_90;
  LPCWSTR pWStack_88;
  LPCWSTR *ppWStack_80;
  LPCWSTR pWStack_78;
  LPWSTR pWStack_70;
  LPCWSTR pWStack_68;
  LPCWSTR pWStack_60;
  LPWSTR pWStack_58;
  undefined uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pWStack_78 = (LPCWSTR)0x0;
  pWStack_70 = (LPWSTR)0x2;
  pWStack_68 = (LPCWSTR)0x0;
  pWStack_60 = *param_2;
  pWVar8 = (LPCWSTR)0x200;
  pWStack_58 = (LPWSTR)0x2;
  pWStack_a8 = (LPCWSTR)0x0;
  pWVar5 = (LPCWSTR)0x0;
  pWVar9 = (LPCWSTR)0x0;
  ppWStack_a0 = param_1;
  ppWStack_80 = param_3;
  do {
    pWVar6 = pWVar8;
    lpBuffer = aWStack_4a8;
    pWVar7 = (LPCWSTR)0x200;
LAB_1406d96ec:
    SetLastError(0);
    DVar1 = GetFullPathNameW(pWStack_60,(DWORD)pWVar6,lpBuffer,(LPWSTR *)0x0);
    if ((DVar1 == 0) && (DVar2 = GetLastError(), DVar2 != 0)) {
      DVar1 = GetLastError();
      if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
        uStack_49 = 1;
        FUN_142ce0560(&PTR_LAB_142e11c50);
      }
      ppWStack_a0[1] = (LPCWSTR)((ulonglong)DVar1 << 0x20 | 2);
      *ppWStack_a0 = (LPCWSTR)0xffffffffffffffff;
      if (pWStack_78 != (LPCWSTR)0x0) {
        thunk_FUN_1406dbb00(pWStack_70,(longlong)pWStack_78 * 2,2);
      }
      if (*ppWStack_80 == (LPCWSTR)0x0) {
        return;
      }
      pWVar4 = ppWStack_80[1];
      pWVar8 = *ppWStack_80;
      goto LAB_1406d988f;
    }
    pWVar8 = (LPCWSTR)(ulonglong)DVar1;
    if (pWVar6 == pWVar8) {
      DVar1 = GetLastError();
      if (DVar1 != 0x7a) {
        uStack_49 = 1;
        FUN_142ce0300("internal error: entered unreachable codenul byte found in provided data",0x28
                      ,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12460);
        goto LAB_1406d9a0e;
      }
      pWVar8 = (LPCWSTR)((longlong)pWVar6 * 2);
      if ((LPCWSTR)0xfffffffe < pWVar8) {
        pWVar8 = (LPCWSTR)0xffffffff;
      }
    }
    else if (pWVar8 <= pWVar6) {
      if (pWVar7 < pWVar8) {
        uStack_49 = 1;
        FUN_142ce0350(0,pWVar8,pWVar7,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12448);
        goto LAB_1406d9a0e;
      }
      pWVar5 = *ppWStack_80;
      pWVar4 = ppWStack_80[1];
      pWVar9 = ppWStack_80[2];
      if (pWVar9 < &DAT_00000007) {
        pWStack_60 = pWVar5;
        pWStack_58 = pWVar4;
        FUN_142ce0350(6,(undefined *)((longlong)pWVar9 + -1),pWVar9,
                      &PTR_s__rustc_48a229ceaefd4985c50990b14_142e12948);
        goto LAB_1406d9a0e;
      }
      if ((LPCWSTR)((longlong)pWVar9 + -7) == pWVar8) {
        _Size = (longlong)pWVar8 * 2;
        iVar3 = memcmp(lpBuffer,pWVar4 + 6,_Size);
        if (iVar3 != 0) goto LAB_1406d97ef;
        if (DVar1 == 0) {
          pWStack_98 = (LPCWSTR)0x0;
          pWStack_90 = (LPWSTR)0x2;
          pWStack_88 = (LPCWSTR)0x0;
          pWStack_60 = pWVar5;
          pWStack_58 = pWVar4;
        }
        else {
          pWStack_60 = pWVar5;
          pWStack_58 = pWVar4;
          FUN_140016610();
          pWStack_90 = (LPWSTR)thunk_FUN_1406dbaa0(_Size,2);
          if (pWStack_90 == (LPWSTR)0x0) {
            FUN_142cdfdab(2,_Size);
LAB_1406d9a0e:
            do {
              invalidInstructionException();
            } while( true );
          }
          pWStack_98 = pWVar8;
          FUN_142cbd3c0(pWStack_90,lpBuffer,_Size);
          pWStack_88 = pWVar8;
        }
        FUN_142cdf310(&pWStack_98);
        pWVar4 = pWStack_90;
        pWVar5 = pWStack_98;
        pWStack_90[(longlong)pWVar8] = L'\0';
        pWVar9 = (LPCWSTR)((longlong)pWVar8 + 1);
        if (pWStack_60 != (LPCWSTR)0x0) {
          thunk_FUN_1406dbb00(pWStack_58,(longlong)pWStack_60 * 2,2);
        }
      }
      else {
LAB_1406d97ef:
        pWVar4[6] = L'C';
      }
      *ppWStack_a0 = pWVar5;
      ppWStack_a0[1] = pWVar4;
      ppWStack_a0[2] = pWVar9;
      pWVar4 = pWStack_70;
      pWVar8 = pWStack_78;
      if (pWStack_78 == (LPCWSTR)0x0) {
        return;
      }
LAB_1406d988f:
      thunk_FUN_1406dbb00(pWVar4,(longlong)pWVar8 * 2,2);
      return;
    }
  } while (pWVar8 < (LPCWSTR)0x201);
  if ((ulonglong)((longlong)pWVar5 - (longlong)pWVar9) <
      (ulonglong)((longlong)pWVar8 - (longlong)pWVar9)) {
    uStack_49 = 1;
    FUN_142cde5e0(&pWStack_78,pWVar9,(longlong)pWVar8 - (longlong)pWVar9,2,2);
    pWStack_a8 = pWStack_78;
    pWStack_58 = pWStack_70;
  }
  pWStack_68 = (LPCWSTR)0xffffffff;
  pWVar5 = pWStack_a8;
  pWVar6 = pWStack_68;
  lpBuffer = pWStack_58;
  pWVar7 = pWStack_68;
  pWVar9 = pWStack_68;
  if (pWStack_a8 < (LPCWSTR)0xffffffff) {
    pWVar6 = pWStack_a8;
    pWVar7 = pWStack_a8;
    pWVar9 = pWStack_a8;
    pWStack_68 = pWStack_a8;
  }
  goto LAB_1406d96ec;
}


/* address=1406d9b40 name=FUN_1406d9b40 */

void FUN_1406d9b40(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  DWORD DVar2;
  
  if (param_2 == 0) {
    DVar2 = GetLastError();
    if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
      FUN_142ce0560(&PTR_LAB_142e11c50);
    }
    *(ulonglong *)(param_1 + 2) = (ulonglong)DVar2 << 0x20 | 2;
    uVar1 = 1;
  }
  else {
    param_1[1] = param_2;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}


/* address=1406d9c60 name=FUN_1406d9c60 */

undefined8 FUN_1406d9c60(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined uStack_70;
  undefined *puStack_68;
  longlong lStack_60;
  undefined *puStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  auStack_88 = ZEXT816(0);
  auStack_98 = ZEXT816(0);
LAB_1406d9cc7:
  puVar3 = auStack_98;
  lStack_60 = FUN_1406df800(param_1,auStack_98,0x20);
  puStack_58 = puVar3;
  lStack_50 = lStack_60;
  if (lStack_60 != 1) {
    if (&DAT_00000020 < puVar3) {
      FUN_142ce0350(0,puVar3,0x20,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e125b8);
      do {
        invalidInstructionException();
      } while( true );
    }
    lVar2 = param_2[2];
    if ((undefined *)(*param_2 - lVar2) < puVar3) {
      FUN_142cde5e0(param_2,lVar2,puVar3,1,1);
      lVar2 = param_2[2];
    }
    else if (puVar3 == (undefined *)0x0) goto LAB_1406d9d7b;
    FUN_142cbd3c0(param_2[1] + lVar2,auStack_98,puVar3);
LAB_1406d9d7b:
    param_2[2] = (longlong)(puVar3 + lVar2);
    return 0;
  }
  switch((uint)puVar3 & 3) {
  case 0:
    cVar1 = puVar3[0x10];
    break;
  case 1:
    if (puVar3[0x1f] != '#') {
      return 1;
    }
    puStack_68 = puVar3 + -1;
    uStack_70 = 3;
    FUN_140713290(&puStack_68);
    goto LAB_1406d9cc7;
  case 2:
    goto code_r0x0001406d9d10;
  case 3:
    cVar1 = (char)((ulonglong)puVar3 >> 0x20);
    if (0x2a < (ulonglong)puVar3 >> 0x20) {
      cVar1 = -1;
    }
  }
  if (cVar1 != '#') {
    return 1;
  }
  goto LAB_1406d9cc7;
code_r0x0001406d9d10:
  lVar2 = FUN_140708a90();
  cVar1 = (**(code **)(lVar2 + 0x10))((ulonglong)puVar3 >> 0x20);
  if (cVar1 == '\0') {
    return 1;
  }
  goto LAB_1406d9cc7;
}


/* address=1406d9f40 name=FUN_1406d9f40 */

void FUN_1406d9f40(longlong **param_1,longlong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uStack_88;
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
  uint uStack_3c;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar1 = (undefined4 *)**param_1;
  **param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_142ce00a0(&PTR_s__rustc_48a229ceaefd4985c50990b14_142e125d0);
    do {
      invalidInstructionException();
    } while( true );
  }
  if (*(char *)(param_2 + 4) != '\0') {
    FUN_142cdf6d0();
    do {
      invalidInstructionException();
    } while( true );
  }
  uStack_68 = *puVar1;
  uStack_64 = puVar1[1];
  uStack_60 = puVar1[2];
  uStack_5c = puVar1[3];
  uStack_58 = puVar1[4];
  uStack_54 = puVar1[5];
  uStack_50 = puVar1[6];
  uStack_4c = puVar1[7];
  LOCK();
  bVar5 = DAT_143d003b0 == '\0';
  if (bVar5) {
    DAT_143d003b0 = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_142cdea40(&DAT_143d003b0);
  }
  if ((DAT_143d00368 & 0x7fffffffffffffff) == 0) {
    uStack_3c = 0;
    lVar4 = CONCAT44(uStack_54,uStack_58);
  }
  else {
    uStack_3c = FUN_142cdf890();
    uStack_3c = uStack_3c ^ 1;
    lVar4 = CONCAT44(uStack_54,uStack_58);
  }
  if (lVar4 != 0) {
    lVar3 = CONCAT44(uStack_5c,uStack_60);
    lVar4 = lVar4 * 0x38 + lVar3;
    do {
      uStack_88 = lVar3;
      FUN_1406ef4a0(1,lVar3 + 0x18,&uStack_88,&DAT_142e122c8);
      lVar3 = lVar3 + 0x38;
    } while (lVar3 != lVar4);
  }
  uStack_78 = uStack_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uStack_88 = CONCAT44(uStack_64,uStack_68);
  uStack_80 = uStack_60;
  uStack_7c = uStack_5c;
  if ((((char)uStack_3c == '\0') && ((DAT_143d00368 & 0x7fffffffffffffff) != 0)) &&
     (cVar2 = FUN_142cdf890(), cVar2 == '\0')) {
    DAT_143d003b1 = 1;
  }
  cVar2 = DAT_143d003b0;
  LOCK();
  DAT_143d003b0 = 0;
  UNLOCK();
  if (cVar2 == '\x02') {
    WakeByAddressSingle(&DAT_143d003b0);
  }
  puVar1[4] = uStack_78;
  puVar1[5] = uStack_74;
  puVar1[6] = uStack_70;
  puVar1[7] = uStack_6c;
  *puVar1 = (undefined4)uStack_88;
  puVar1[1] = uStack_88._4_4_;
  puVar1[2] = uStack_80;
  puVar1[3] = uStack_7c;
  return;
}


/* address=1406da120 name=FUN_1406da120 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1406da120(char **param_1)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong unaff_GS_OFFSET;
  bool bVar8;
  ushort uStack_1a;
  char cStack_11;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  cVar1 = **param_1;
  **param_1 = '\0';
  if (cVar1 != '\x01') {
    FUN_142ce00a0(&PTR_s__rustc_48a229ceaefd4985c50990b14_142e125e8);
    do {
      invalidInstructionException();
    } while( true );
  }
  cStack_11 = '\0';
  if ((DAT_143ca1fd0 != 0) && (uVar6 = FUN_142cde384(&cStack_11), cStack_11 != '\0')) {
    return uVar6;
  }
  lVar2 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  lVar7 = *(longlong *)(lVar2 + 400);
  if (lVar7 == 0) {
    lVar5 = DAT_143d00378;
    do {
      if (lVar5 == -1) {
        FUN_142cdfba0();
        do {
          invalidInstructionException();
        } while( true );
      }
      lVar7 = lVar5 + 1;
      LOCK();
      bVar8 = lVar5 != DAT_143d00378;
      lVar4 = lVar7;
      if (bVar8) {
        lVar5 = DAT_143d00378;
        lVar4 = DAT_143d00378;
      }
      DAT_143d00378 = lVar4;
      UNLOCK();
    } while (bVar8);
    *(longlong *)(lVar2 + 400) = lVar7;
    if (lVar7 == DAT_143ca1f98) goto LAB_1406da18b;
  }
  else if (lVar7 == DAT_143ca1f98) {
LAB_1406da18b:
    if (DAT_143ca1fa0 == 0xffffffff) {
      return (ulonglong)DAT_143ca1fa0;
    }
    DAT_143ca1fa0 = DAT_143ca1fa0 + 1;
    goto LAB_1406da1f6;
  }
  uVar6 = 0;
  LOCK();
  bVar8 = DAT_143ca1fa4 == 0;
  if (bVar8) {
    DAT_143ca1fa4 = 1;
  }
  else {
    uVar6 = (ulonglong)DAT_143ca1fa4;
  }
  UNLOCK();
  if (!bVar8) {
    return uVar6;
  }
  DAT_143ca1fa0 = 1;
  DAT_143ca1f98 = lVar7;
LAB_1406da1f6:
  if (DAT_143ca1fa8 != 0) {
    FUN_142cdffe0(&PTR_s__rustc_48a229ceaefd4985c50990b14_142e13f50);
    do {
      invalidInstructionException();
    } while( true );
  }
  DAT_143ca1fa8 = -1;
  uVar6 = FUN_1406d7eb0(&DAT_143ca1fb0);
  bVar3 = DAT_143ca1fa4;
  iRam0000000143ca1fcc = (uint)uStack_1a << 0x10;
  _DAT_143ca1fc0 = 0;
  uRam0000000143ca1fc4 = 0;
  uRam0000000143ca1fc8 = 0;
  _DAT_143ca1fb0 = 0;
  uRam0000000143ca1fb4 = 0;
  uRam0000000143ca1fb8 = 1;
  uRam0000000143ca1fbc = 0;
  DAT_143ca1fa8 = DAT_143ca1fa8 + 1;
  DAT_143ca1fa0 = DAT_143ca1fa0 + -1;
  if (DAT_143ca1fa0 == 0) {
    DAT_143ca1f98 = 0;
    LOCK();
    DAT_143ca1fa4 = 0;
    uVar6 = (ulonglong)bVar3;
    UNLOCK();
    if (bVar3 == 2) {
      uVar6 = WakeByAddressSingle(&DAT_143ca1fa4);
      return uVar6;
    }
  }
  return uVar6;
}


/* address=1406da370 name=FUN_1406da370 */

void FUN_1406da370(undefined4 *param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_1406ecdb4(&uStack_18,&DAT_142e12618,*(undefined8 *)(param_1 + 4),1,0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406da3a0 name=FUN_1406da3a0 */

void FUN_1406da3a0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  DWORD DVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong unaff_GS_OFFSET;
  bool bVar11;
  undefined auStack_2d8 [512];
  undefined uStack_d8;
  longlong lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  char *pcStack_b0;
  longlong lStack_a8;
  undefined **ppuStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  ulonglong *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (param_2 == (longlong *)0x0) {
    lVar10 = DAT_143d00360;
    if (DAT_143d00360 == 0) {
LAB_1406da42e:
      pcVar8 = (char *)0x0;
      goto LAB_1406da430;
    }
    lVar10 = *(longlong *)
              (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              400);
  }
  else {
    lVar10 = *param_2;
    pcVar8 = *(char **)(lVar10 + 0x18);
    if (pcVar8 != (char *)0x0) {
      lVar10 = *(longlong *)(lVar10 + 0x20) + -1;
      goto LAB_1406da430;
    }
    if (DAT_143d00360 == 0) goto LAB_1406da42e;
    lVar10 = *(longlong *)(lVar10 + 0x10);
  }
  pcVar8 = (char *)0x0;
  if (DAT_143d00360 == lVar10) {
    pcVar8 = &DAT_142e12650;
  }
  lVar10 = 4;
LAB_1406da430:
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  lVar4 = param_1[3];
  pcStack_b0 = 
  "<unnamed>/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\panicking.rs";
  if (pcVar8 != (char *)0x0) {
    pcStack_b0 = pcVar8;
  }
  lStack_a8 = 9;
  if (pcVar8 != (char *)0x0) {
    lStack_a8 = lVar10;
  }
  DVar7 = GetCurrentThreadId();
  if (DVar7 == 0) {
    lVar10 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
    uStack_90 = *(ulonglong *)(lVar10 + 400);
    if (uStack_90 == 0) {
      uVar9 = DAT_143d00378;
      do {
        if (uVar9 == 0xffffffffffffffff) {
          FUN_142cdfba0();
          do {
            invalidInstructionException();
          } while( true );
        }
        uStack_90 = uVar9 + 1;
        LOCK();
        bVar11 = uVar9 != DAT_143d00378;
        uVar5 = uStack_90;
        if (bVar11) {
          uVar9 = DAT_143d00378;
          uVar5 = DAT_143d00378;
        }
        DAT_143d00378 = uVar5;
        UNLOCK();
      } while (bVar11);
      *(ulonglong *)(lVar10 + 400) = uStack_90;
    }
  }
  else {
    uStack_90 = (ulonglong)DVar7;
  }
  FUN_142cbda60(auStack_2d8,0,0x200);
  uStack_c0 = 0x200;
  uStack_b8 = 0;
  uStack_88 = &pcStack_b0;
  puStack_80 = &DAT_1401fc090;
  puStack_78 = &uStack_90;
  pcStack_70 = FUN_1407132a0;
  puStack_60 = &LAB_1406f6ca0;
  puStack_50 = &DAT_1401fc090;
  ppuStack_a0 = &puStack_c8;
  uStack_98 = 0;
  puStack_c8 = auStack_2d8;
  uStack_68 = uVar1;
  uStack_58 = uVar2;
  cVar6 = FUN_140707940(&ppuStack_a0,&PTR_FUN_142e121a0,&DAT_142e126a7,&uStack_88);
  if (cVar6 == '\0') {
    if (((uStack_98 != 0) && (1 < ((uint)uStack_98 & 3) - 2)) && ((uStack_98 & 3) != 0)) {
      lStack_d0 = uStack_98 - 1;
      uStack_d8 = 3;
      FUN_140713290(&lStack_d0);
    }
    if (0x200 < uStack_b8) {
      FUN_142ce0350(0,uStack_b8,0x200,&DAT_142e12728);
      do {
        invalidInstructionException();
      } while( true );
    }
    uVar9 = (**(code **)(lVar4 + 0x38))(uVar3,auStack_2d8);
  }
  else {
    if (uStack_98 == 0) {
      FUN_142ce0320("a formatting trait implementation returned an error when the underlying stream did not"
                    ,0xad,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12188);
      do {
        invalidInstructionException();
      } while( true );
    }
    if ((1 < ((uint)uStack_98 & 3) - 2) && ((uStack_98 & 3) != 0)) {
      puStack_80 = (undefined8 *)(uStack_98 - 1);
      uStack_88 = (char **)CONCAT71(uStack_88._1_7_,3);
      FUN_140713290(&puStack_80);
    }
    uStack_88 = &pcStack_b0;
    puStack_80 = &DAT_1401fc090;
    puStack_78 = &uStack_90;
    pcStack_70 = FUN_1407132a0;
    puStack_60 = &LAB_1406f6ca0;
    puStack_50 = &DAT_1401fc090;
    uStack_68 = uVar1;
    uStack_58 = uVar2;
    uVar9 = (**(code **)(lVar4 + 0x48))(uVar3,&DAT_142e126a7,&uStack_88);
  }
  if (((uVar9 != 0) && (1 < ((uint)uVar9 & 3) - 2)) && ((uVar9 & 3) != 0)) {
    puStack_80 = (undefined8 *)(uVar9 - 1);
    uStack_88._1_7_ = (undefined7)((ulonglong)uStack_88 >> 8);
    uStack_88 = (char **)CONCAT71(uStack_88._1_7_,3);
    FUN_140713290(&puStack_80);
  }
  return;
}


/* address=1406da750 name=FUN_1406da750 */

void FUN_1406da750(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  DWORD DVar3;
  undefined *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong unaff_GS_OFFSET;
  bool bVar7;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  ulonglong *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  undefined4 *puStack_38;
  ulonglong uStack_30;
  undefined uStack_28;
  longlong lStack_20;
  undefined4 uStack_18;
  undefined uStack_14;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  if (param_1 == (longlong *)0x0) {
    lVar6 = DAT_143d00360;
    if (DAT_143d00360 == 0) {
LAB_1406da7d0:
      puVar4 = (undefined *)0x0;
      goto LAB_1406da7d2;
    }
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 400
             );
  }
  else {
    lVar6 = *param_1;
    puVar4 = *(undefined **)(lVar6 + 0x18);
    if (puVar4 != (undefined *)0x0) {
      lVar6 = *(longlong *)(lVar6 + 0x20) + -1;
      goto LAB_1406da7d2;
    }
    if (DAT_143d00360 == 0) goto LAB_1406da7d0;
    lVar6 = *(longlong *)(lVar6 + 0x10);
  }
  puVar4 = (undefined *)0x0;
  if (DAT_143d00360 == lVar6) {
    puVar4 = &DAT_142e12650;
  }
  lVar6 = 4;
LAB_1406da7d2:
  puStack_50 = &DAT_142e12990;
  if (puVar4 != (undefined *)0x0) {
    puStack_50 = puVar4;
  }
  lStack_48 = 9;
  if (puVar4 != (undefined *)0x0) {
    lStack_48 = lVar6;
  }
  DVar3 = GetCurrentThreadId();
  if (DVar3 == 0) {
    lVar6 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
    uStack_40 = *(ulonglong *)(lVar6 + 400);
    if (uStack_40 == 0) {
      uVar5 = DAT_143d00378;
      do {
        if (uVar5 == 0xffffffffffffffff) {
          FUN_142cdfba0();
          do {
            invalidInstructionException();
          } while( true );
        }
        uStack_40 = uVar5 + 1;
        LOCK();
        bVar7 = uVar5 != DAT_143d00378;
        uVar1 = uStack_40;
        if (bVar7) {
          uVar5 = DAT_143d00378;
          uVar1 = DAT_143d00378;
        }
        DAT_143d00378 = uVar1;
        UNLOCK();
      } while (bVar7);
      *(ulonglong *)(lVar6 + 400) = uStack_40;
    }
  }
  else {
    uStack_40 = (ulonglong)DVar3;
  }
  uStack_18 = 0;
  uStack_14 = 0;
  ppuStack_70 = &puStack_50;
  puStack_68 = &DAT_1401fc090;
  puStack_60 = &uStack_40;
  pcStack_58 = FUN_1407132a0;
  uStack_30 = 0;
  puStack_38 = &uStack_18;
  cVar2 = FUN_140707940(&puStack_38,&PTR_FUN_142e12230,&DAT_142e12999,&ppuStack_70);
  if (cVar2 == '\0') {
    if (uStack_30 == 0) {
      return;
    }
  }
  else if (uStack_30 == 0) {
    FUN_142ce0320("a formatting trait implementation returned an error when the underlying stream did not"
                  ,0xad,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12188);
    do {
      invalidInstructionException();
    } while( true );
  }
  if ((1 < ((uint)uStack_30 & 3) - 2) && ((uStack_30 & 3) != 0)) {
    lStack_20 = uStack_30 - 1;
    uStack_28 = 3;
    FUN_140713290(&lStack_20);
  }
  return;
}


/* address=1406da940 name=FUN_1406da940 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1406da940(LPCWSTR *param_1,LPCWSTR param_2,longlong param_3)

{
  LPCWSTR lpExistingFileName;
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  ulonglong uVar4;
  undefined4 *lpFileInformation;
  undefined4 *hFile;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined auStack_68 [16];
  undefined uStack_58;
  undefined uStack_50;
  longlong lStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lpExistingFileName = *param_1;
  BVar2 = MoveFileExW(lpExistingFileName,param_2,1);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 5) {
      auStack_68 = ZEXT416(DAT_142e11a70);
      uStack_58 = 0;
      uStack_78 = _DAT_142e11a60;
      uStack_74 = _UNK_142e11a64;
      uStack_70 = _UNK_142e11a68;
      uStack_6c = _UNK_142e11a6c;
      hFile = &uStack_78;
      uVar4 = FUN_1406e01e0(lpExistingFileName);
      if ((uVar4 & 1) == 0) {
        uVar4 = param_3 * 2 - 2;
        puStack_40 = hFile;
        if (uVar4 >> 0x20 == 0) {
          iVar1 = (int)uVar4;
          DVar3 = iVar1 + 0x16;
          FUN_140016610();
          lpFileInformation = (undefined4 *)thunk_FUN_1406dbaa0(DVar3,8);
          if (lpFileInformation == (undefined4 *)0x0) {
            uVar4 = 0x2600000003;
          }
          else {
            *lpFileInformation = 3;
            *(undefined8 *)(lpFileInformation + 2) = 0;
            lpFileInformation[4] = iVar1;
            FUN_142cbd3c0(lpFileInformation + 5,param_2,param_3 * 2);
            BVar2 = SetFileInformationByHandle(hFile,0x16,lpFileInformation,DVar3);
            thunk_FUN_1406dbb00(lpFileInformation,DVar3,8);
            if (BVar2 != 0) {
              CloseHandle(hFile);
              return 0;
            }
            DVar3 = GetLastError();
            if (DVar3 == 0x91) {
              uVar4 = 0x9100000002;
              if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
                FUN_142ce0560(&PTR_LAB_142e11c50);
              }
            }
            else {
              uVar4 = 0x500000002;
              if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
                FUN_142ce0560(&PTR_LAB_142e11c50);
              }
            }
          }
        }
        else {
          uVar4 = 0x500000002;
          if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
            FUN_142ce0560(&PTR_LAB_142e11c50);
          }
        }
        CloseHandle(puStack_40);
      }
      else {
        if ((1 < ((uint)hFile & 3) - 2) && (((ulonglong)hFile & 3) != 0)) {
          lStack_48 = (longlong)hFile + -1;
          uStack_50 = 3;
          FUN_140713290(&lStack_48);
        }
        uVar4 = 0x500000002;
        if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
          FUN_142ce0560(&PTR_LAB_142e11c50);
        }
      }
    }
    else {
      if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
        FUN_142ce0560(&PTR_LAB_142e11c50);
      }
      uVar4 = (ulonglong)DVar3 << 0x20 | 2;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


/* address=1406daeb0 name=FUN_1406daeb0 */

void FUN_1406daeb0(longlong **param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_R12;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar2 = *param_1;
  lVar5 = param_2[4];
  lVar7 = param_2[5];
  FUN_140708660(&uStack_a0,lVar5,lVar7);
  if ((int)uStack_a0 != 1) {
    FUN_141c79147(&uStack_a0,uStack_98,uStack_90);
  }
  if (lVar7 == 0) {
    lVar3 = *param_2;
    uStack_78 = 1;
  }
  else {
    FUN_140016610();
    lVar4 = thunk_FUN_1406dbaa0(lVar7,1);
    if (lVar4 == 0) {
      FUN_142cdfdab(1,lVar7);
      do {
        invalidInstructionException();
      } while( true );
    }
    FUN_142cbd3c0(lVar4,lVar5,lVar7);
    lVar3 = *param_2;
    uStack_78 = lVar4;
  }
  if (lVar3 == 1) {
    unaff_R12 = param_2[2];
    uVar6 = 1;
    if (unaff_R12 == 0) {
      lVar5 = 2;
      unaff_R12 = 0;
    }
    else {
      lVar3 = param_2[1];
      lVar4 = unaff_R12 * 2;
      lStack_58 = uStack_78;
      lStack_50 = lVar7;
      FUN_140016610();
      lVar5 = thunk_FUN_1406dbaa0(lVar4,2);
      if (lVar5 == 0) {
        FUN_142cdfdab(2,lVar4);
        do {
          invalidInstructionException();
        } while( true );
      }
      FUN_142cbd3c0(lVar5,lVar3,lVar4);
      lVar7 = lStack_50;
      uStack_78 = lStack_58;
    }
  }
  else {
    uVar6 = 2;
  }
  uStack_68 = param_2[3];
  uStack_60 = 0;
  lVar3 = plVar2[2];
  uStack_a0 = uVar6;
  uStack_98 = unaff_R12;
  uStack_90 = lVar5;
  uStack_88 = unaff_R12;
  uStack_80 = lVar7;
  uStack_70 = lVar7;
  if (lVar3 == *plVar2) {
    FUN_142cdf120(plVar2);
  }
  lVar5 = plVar2[1];
  *(ulonglong *)(lVar5 + 0x40 + lVar3 * 0x48) = CONCAT44(uStack_5c,uStack_60);
  puVar1 = (undefined4 *)(lVar5 + 0x30 + lVar3 * 0x48);
  *puVar1 = (undefined4)uStack_70;
  puVar1[1] = uStack_70._4_4_;
  puVar1[2] = (undefined4)uStack_68;
  puVar1[3] = uStack_68._4_4_;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar3 * 0x48);
  *puVar1 = (undefined4)uStack_80;
  puVar1[1] = uStack_80._4_4_;
  puVar1[2] = (undefined4)uStack_78;
  puVar1[3] = uStack_78._4_4_;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar3 * 0x48);
  *puVar1 = (undefined4)uStack_90;
  puVar1[1] = uStack_90._4_4_;
  puVar1[2] = (undefined4)uStack_88;
  puVar1[3] = uStack_88._4_4_;
  puVar1 = (undefined4 *)(lVar5 + lVar3 * 0x48);
  *puVar1 = (int)uStack_a0;
  puVar1[1] = uStack_a0._4_4_;
  puVar1[2] = (undefined4)uStack_98;
  puVar1[3] = uStack_98._4_4_;
  plVar2[2] = lVar3 + 1;
  return;
}


/* address=1406db280 name=FUN_1406db280 */

void FUN_1406db280(undefined8 *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)&LAB_1406ec6fd;
  if (DAT_143d002d8 != (code *)0x0) {
    pcVar1 = DAT_143d002d8;
  }
  (*pcVar1)(*param_1,param_1[1]);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406db2b5 name=FUN_1406db2b5 */

void FUN_1406db2b5(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong unaff_GS_OFFSET;
  undefined8 *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar4 = param_2;
  uStack_38 = FUN_1406ee940();
  bStack_29 = (byte)uVar4 & 1;
  puStack_68 = (undefined8 *)*param_1;
  puStack_60 = (undefined *)param_1[1];
  uVar2 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x188
           );
  uStack_58 = param_2;
  lStack_50 = param_3;
  if (uVar2 < 3) {
    FUN_1406da3a0(&puStack_68,0);
  }
  else {
    uStack_40 = uVar2 - 0x10;
    FUN_1406da3a0(&puStack_68);
  }
  cVar3 = DAT_143ca1f90;
  cVar1 = *(char *)param_1[2];
  if (cVar1 == '\0') {
    puStack_68 = &uStack_40;
    uStack_40 = (ulonglong)uStack_40._1_7_ << 8;
    puStack_60 = &LAB_1406f5a70;
    uVar4 = (**(code **)(param_3 + 0x48))(param_2,&DAT_142e12cf0);
    FUN_1406d7620(uVar4);
  }
  else if (cVar1 == '\x01') {
    puStack_68 = &uStack_40;
    uStack_40 = CONCAT71(uStack_40._1_7_,1);
    puStack_60 = &LAB_1406f5a70;
    uVar4 = (**(code **)(param_3 + 0x48))(param_2,&DAT_142e12cf0);
    FUN_1406d7620(uVar4);
  }
  else if (cVar1 == '\x02') {
    LOCK();
    DAT_143ca1f90 = '\0';
    UNLOCK();
    if (cVar3 != '\0') {
      uVar4 = (**(code **)(param_3 + 0x48))
                        (param_2,
                         "note: run with `RUST_BACKTRACE=1` environment variable to display a backtrace\n"
                         ,0x9d);
      FUN_1406d7620(uVar4);
    }
  }
  FUN_1406d7f70(uStack_38,bStack_29);
  return;
}


/* address=1406db430 name=FUN_1406db430 */

void FUN_1406db430(longlong *param_1)

{
  undefined8 uStack_30;
  ulonglong uStack_28;
  longlong *plStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  uStack_28 = ((undefined8 *)*param_1)[1];
  if ((uStack_28 & 1) == 0) {
    uStack_30 = 0xffffffffffffffff;
    plStack_18 = param_1;
    FUN_1406ecdb4(&uStack_30,&PTR_LAB_142e128f8,param_1[1],*(undefined *)(param_1[2] + 0x10),
                  *(undefined *)(param_1[2] + 0x11));
    do {
      invalidInstructionException();
    } while( true );
  }
  uStack_30 = *(undefined8 *)*param_1;
  uStack_28 = uStack_28 >> 1;
  FUN_1406ecdb4(&uStack_30,&DAT_142e128c0,param_1[1],*(undefined *)(param_1[2] + 0x10),
                *(undefined *)(param_1[2] + 0x11));
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406db510 name=FUN_1406db510 */

longlong FUN_1406db510(void)

{
  longlong unaff_GS_OFFSET;
  
  return *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x158;
}


/* address=1406db530 name=FUN_1406db530 */

longlong FUN_1406db530(void)

{
  longlong unaff_GS_OFFSET;
  
  return *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x170;
}


/* address=1406db550 name=FUN_1406db550 */

longlong FUN_1406db550(void)

{
  longlong unaff_GS_OFFSET;
  
  return *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x180;
}


/* address=1406dba40 name=FUN_1406dba40 */

void FUN_1406dba40(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puStack_28;
  code *pcStack_20;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined uStack_c;
  
  uStack_14 = FUN_1406fd790();
  uStack_10 = 0;
  uStack_c = 0;
  puStack_28 = &uStack_14;
  pcStack_20 = FUN_140712040;
  uVar2 = FUN_1406fd540(&uStack_10,&DAT_142e12a40,&puStack_28);
  FUN_1406d7620(uVar2);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406dbaa0 name=FUN_1406dbaa0 */

longlong FUN_1406dbaa0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 < 0x11) {
    lVar1 = FUN_1406f2780(param_1,0,param_1);
    return lVar1;
  }
  lVar1 = 0;
  uVar2 = FUN_1406f2780(param_1 + param_2,0,param_1 + param_2);
  if (uVar2 != 0) {
    lVar3 = param_2 - (param_2 - 1 & uVar2);
    lVar1 = uVar2 + lVar3;
    *(ulonglong *)((uVar2 - 8) + lVar3) = uVar2;
  }
  return lVar1;
}


/* address=1406dbb00 name=FUN_1406dbb00 */

void FUN_1406dbb00(LPVOID param_1,undefined8 param_2,ulonglong param_3)

{
  HANDLE hHeap;
  
  if (0x10 < param_3) {
    param_1 = *(LPVOID *)((longlong)param_1 + -8);
  }
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,param_1);
  return;
}


/* address=1406dbb40 name=FUN_1406dbb40 */

LPVOID FUN_1406dbb40(LPVOID param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  LPVOID lpMem;
  HANDLE pvVar1;
  LPVOID pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_3 < 0x11) {
    pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = HeapReAlloc(pvVar1,0,param_1,param_4);
    return pvVar2;
  }
  pvVar2 = (LPVOID)0x0;
  uVar3 = FUN_1406f2780(param_1,0,param_3 + param_4);
  if (uVar3 != 0) {
    lVar4 = param_3 - (param_3 - 1 & uVar3);
    pvVar2 = (LPVOID)(uVar3 + lVar4);
    *(ulonglong *)((uVar3 - 8) + lVar4) = uVar3;
    if (param_4 < param_2) {
      param_2 = param_4;
    }
    FUN_142cbd3c0(pvVar2,param_1,param_2);
    lpMem = *(LPVOID *)((longlong)param_1 + -8);
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,0,lpMem);
  }
  return pvVar2;
}


/* address=1406dbbf0 name=FUN_1406dbbf0 */

void FUN_1406dbbf0(void)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  longlong lStack_20;
  undefined4 uStack_18;
  undefined uStack_14;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  uStack_18 = 0;
  uStack_14 = 0;
  lVar2 = FUN_1406fd3d0(&uStack_18,"fatal runtime error: Rust panics must be rethrown, aborting\n",
                        0x3c);
  if (lVar2 != 0) {
    bVar3 = ((uint)lVar2 & 3) == 1;
    if (bVar3) {
      lStack_20 = lVar2 + -1;
      FUN_140713290(&lStack_20);
    }
    else if (bVar3) goto LAB_1406dbc54;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
LAB_1406dbc54:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406dbc80 name=FUN_1406dbc80 */

void FUN_1406dbc80(undefined4 *param_1)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  uStack_20 = *param_1;
  uStack_1c = param_1[1];
  uStack_18 = param_1[2];
  uStack_14 = param_1[3];
  puStack_10 = param_1;
  FUN_1406d8ec0(&uStack_20);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406dbca0 name=FUN_1406dbca0 */

longlong FUN_1406dbca0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x11) {
    lVar1 = FUN_1406f2780(param_1,8,param_1);
    return lVar1;
  }
  uVar2 = FUN_1406f2780(param_1 + param_2,8,param_1 + param_2);
  if (uVar2 != 0) {
    lVar1 = param_2 - (param_2 - 1 & uVar2);
    *(ulonglong *)((uVar2 - 8) + lVar1) = uVar2;
    return uVar2 + lVar1;
  }
  return 0;
}


/* address=1406dbd10 name=FUN_1406dbd10 */

void FUN_1406dbd10(void)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  longlong lStack_20;
  undefined4 uStack_18;
  undefined uStack_14;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  uStack_18 = 0;
  uStack_14 = 0;
  lVar2 = FUN_1406fd3d0(&uStack_18,
                        "fatal runtime error: Rust cannot catch foreign exceptions, aborting\n",0x44
                       );
  if (lVar2 != 0) {
    bVar3 = ((uint)lVar2 & 3) == 1;
    if (bVar3) {
      lStack_20 = lVar2 + -1;
      FUN_140713290(&lStack_20);
    }
    else if (bVar3) goto LAB_1406dbd74;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(7);
LAB_1406dbd74:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406dbda0 name=FUN_1406dbda0 */

void FUN_1406dbda0(undefined8 param_1,undefined8 param_2)

{
  FUN_1406ec890(param_2,param_1);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406dbdc0 name=FUN_1406dbdc0 */

longlong FUN_1406dbdc0(ulonglong *param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = param_2 + *param_1;
  if (CARRY8(param_2,*param_1)) {
    return lVar1;
  }
  if (999999999 < (uint)(param_3 + *(int *)(param_1 + 1))) {
    if (lVar1 == -1) {
      return -1;
    }
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}


/* address=1406dbdf0 name=FUN_1406dbdf0 */

longlong FUN_1406dbdf0(ulonglong *param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *param_1 - param_2;
  if (param_2 <= *param_1) {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 < param_3) {
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = lVar1 + -1;
      uVar2 = uVar2 + 1000000000;
    }
    if (999999999 < uVar2 - param_3) {
      if (lVar1 == -1) {
        FUN_142ce0060("overflow in Duration::new/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\core\\src\\time.rs"
                      ,0x19,&DAT_142e12b68);
        do {
          invalidInstructionException();
        } while( true );
      }
      return lVar1 + 1;
    }
  }
  return lVar1;
}


/* address=1406dbe70 name=FUN_1406dbe70 */

undefined8 FUN_1406dbe70(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1406dbea0();
  if (param_2 == -1) {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=1406dbea0 name=FUN_1406dbea0 */

ulonglong FUN_1406dbea0(ulonglong *param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (DAT_143d003c0 == 0) {
    uVar3 = FUN_142cdfae0();
    if (uVar3 < 0x3b9aca01) goto LAB_1406dbec5;
LAB_1406dbeee:
    uVar5 = 0;
  }
  else {
    uVar3 = DAT_143d003c0;
    if (1000000000 < DAT_143d003c0) goto LAB_1406dbeee;
LAB_1406dbec5:
    uVar5 = (uint)(1000000000 / (uVar3 & 0xffffffff));
  }
  uVar1 = uVar5 + 0xc4653600;
  if (uVar3 >= 2) {
    uVar1 = uVar5;
  }
  uVar4 = *param_1;
  uVar5 = *(uint *)(param_1 + 1);
  bVar2 = uVar4 < param_2;
  if (param_2 == uVar4) {
    bVar2 = uVar5 < param_3;
  }
  if (bVar2) {
    uVar7 = param_2 - uVar4;
    if (param_2 < uVar4) {
LAB_1406dbffa:
      FUN_142ce0060("overflow when subtracting durations",0x23,&DAT_142e12ea8);
      do {
        invalidInstructionException();
      } while( true );
    }
    if (param_3 < uVar5) {
      if (uVar7 == 0) goto LAB_1406dbffa;
      uVar7 = uVar7 - 1;
      uVar6 = (param_3 + 1000000000) - uVar5;
    }
    else {
      uVar6 = param_3 - uVar5;
    }
    if (999999999 < uVar6) {
      if (uVar7 == 0xffffffffffffffff) goto LAB_1406dbfe0;
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 + 0xc4653600;
    }
    uVar3 = (ulonglong)(uVar3 < 2);
    bVar2 = uVar7 <= uVar3;
    if (uVar7 == uVar3) {
      bVar2 = uVar6 <= uVar1;
    }
    if (bVar2) {
      return 0;
    }
  }
  if (param_2 <= uVar4) {
    uVar4 = uVar4 - param_2;
    if (uVar5 < param_3) {
      if (uVar4 == 0) {
        return 0;
      }
      uVar4 = uVar4 - 1;
      uVar5 = uVar5 + 1000000000;
    }
    if (999999999 < uVar5 - param_3) {
      if (uVar4 == 0xffffffffffffffff) {
LAB_1406dbfe0:
        FUN_142ce0060("overflow in Duration::new/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\core\\src\\time.rs"
                      ,0x19,&DAT_142e12b68);
        do {
          invalidInstructionException();
        } while( true );
      }
      uVar4 = uVar4 + 1;
    }
  }
  return uVar4;
}


/* address=1406dc020 name=FUN_1406dc020 */

ulonglong FUN_1406dc020(void)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uStack_28;
  LARGE_INTEGER LStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uVar4 = DAT_143d003c0;
  if (DAT_143d003c0 == 0) {
    uVar4 = FUN_142cdfae0();
  }
  LStack_20.QuadPart = 0;
  BVar1 = QueryPerformanceCounter(&LStack_20);
  if (BVar1 != 0) {
    if ((LStack_20.QuadPart | uVar4) >> 0x20 == 0) {
      uVar3 = (LStack_20.QuadPart & 0xffffffffU) / (uVar4 & 0xffffffff);
      uVar5 = (LStack_20.QuadPart & 0xffffffffU) % (uVar4 & 0xffffffff);
    }
    else {
      uVar3 = (ulonglong)LStack_20.QuadPart / uVar4;
      uVar5 = (ulonglong)LStack_20.QuadPart % uVar4;
    }
    uVar5 = uVar5 * 1000000000;
    if ((uVar5 | uVar4) >> 0x20 == 0) {
      uVar5 = (uVar5 & 0xffffffff) / (uVar4 & 0xffffffff);
    }
    else {
      uVar5 = uVar5 / uVar4;
    }
    return (uVar3 * 1000000000 + 0x3fffffffffffffff + uVar5) / 1000000000;
  }
  DVar2 = GetLastError();
  if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
    FUN_142ce0560(&PTR_LAB_142e11c50);
  }
  uStack_28 = (ulonglong)DVar2 << 0x20 | 2;
  FUN_142ce00c0("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_28,&PTR_FUN_142e12bd8,
                &PTR_s__rustc_48a229ceaefd4985c50990b14_142e14de0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406dc170 name=FUN_1406dc170 */

undefined8 FUN_1406dc170(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_18 = param_2;
  uStack_20 = FUN_1406dc020();
  uVar2 = *param_1;
  uVar1 = FUN_1406dbea0(&uStack_20,uVar2,*(undefined4 *)(param_1 + 1));
  if ((int)uVar2 == -1) {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=1406dc1b0 name=FUN_1406dc1b0 */

ulonglong FUN_1406dc1b0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  if (uVar2 < uVar1) {
    if (uVar2 == 0) {
      thunk_FUN_1406dbb00(uVar3,uVar1,1);
      uVar3 = 1;
    }
    else {
      uVar3 = thunk_FUN_1406dbb40(uVar3,uVar1,1,uVar2);
      if (uVar3 == 0) {
        FUN_142cdfdab(1,uVar2);
        do {
          invalidInstructionException();
        } while( true );
      }
    }
  }
  return uVar3;
}


/* address=1406dc260 name=FUN_1406dc260 */

void FUN_1406dc260(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puStack_20;
  code *pcStack_18;
  ulonglong uStack_10;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (param_2 <= uVar1) {
    lVar2 = *(longlong *)(param_1 + 8);
    if ((param_2 != 0) && (param_2 < uVar1)) {
      uStack_10 = param_2;
      if (*(char *)(lVar2 + param_2) == -0x13) {
        if (uVar1 <= param_2 + 1) {
          FUN_142ce0143(param_2 + 1,uVar1,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12cd8);
          do {
            invalidInstructionException();
          } while( true );
        }
        if ((((2 < param_2) && (0x9f < *(byte *)(lVar2 + 1 + param_2))) &&
            (*(char *)(lVar2 + -3 + param_2) == -0x13)) && (0x9f < *(byte *)(lVar2 + -2 + param_2)))
        {
          puStack_20 = &uStack_10;
          pcStack_18 = FUN_1407132a0;
          FUN_142ce0320(&DAT_142e13732,&puStack_20,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12cd8
                       );
          do {
            invalidInstructionException();
          } while( true );
        }
      }
      else if (*(char *)(lVar2 + param_2) < -0x40) {
        puStack_20 = &uStack_10;
        pcStack_18 = FUN_1407132a0;
        FUN_142ce0320(&DAT_142e13707,&puStack_20,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12cd8);
        do {
          invalidInstructionException();
        } while( true );
      }
      if (*(char *)(lVar2 + param_2) < -0x40) {
        FUN_142ce0300("assertion failed: self.is_code_point_boundary(new_len)/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\alloc\\src\\wtf8\\mod.rs"
                      ,0x36,&DAT_142e13430);
        do {
          invalidInstructionException();
        } while( true );
      }
    }
    *(ulonglong *)(param_1 + 0x10) = param_2;
  }
  return;
}


/* address=1406dc360 name=FUN_1406dc360 */

undefined8 FUN_1406dc360(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406deff0(param_1,*param_2);
  return param_1;
}


/* address=1406dc450 name=FUN_1406dc450 */

ulonglong FUN_1406dc450(SOCKET *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint uStack_14;
  
  uStack_14 = (uint)param_2;
  iVar1 = setsockopt(*param_1,6,1,(char *)&uStack_14,4);
  if (iVar1 != -1) {
    return 0;
  }
  uVar2 = WSAGetLastError();
  if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
    FUN_142ce0560(&PTR_LAB_142e11c50);
  }
  return (ulonglong)uVar2 << 0x20 | 2;
}


/* address=1406dc4d0 name=FUN_1406dc4d0 */

ulonglong FUN_1406dc4d0(SOCKET *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  uint uStack_14;
  
  uStack_14 = (uint)param_2;
  iVar1 = ioctlsocket(*param_1,-0x7ffb9982,&uStack_14);
  if (iVar1 != -1) {
    return 0;
  }
  uVar2 = WSAGetLastError();
  if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
    FUN_142ce0560(&PTR_LAB_142e11c50);
  }
  return (ulonglong)uVar2 << 0x20 | 2;
}


/* address=1406dc540 name=FUN_1406dc540 */

ulonglong FUN_1406dc540(SOCKET *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = shutdown(*param_1,(uint)param_2);
  if (iVar1 != -1) {
    return 0;
  }
  uVar2 = WSAGetLastError();
  if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
    FUN_142ce0560(&PTR_LAB_142e11c50);
  }
  return (ulonglong)uVar2 << 0x20 | 2;
}


/* address=1406dc5b0 name=FUN_1406dc5b0 */

undefined8 FUN_1406dc5b0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406df150(param_1,*param_2);
  return param_1;
}


/* address=1406dc5d0 name=FUN_1406dc5d0 */

undefined8 FUN_1406dc5d0(SOCKET *param_1,char *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  iVar1 = recv(*param_1,param_2,(int)param_3,0);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    uVar2 = 0;
    if (iVar1 != 0x274a) {
      if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
        FUN_142ce0560(&PTR_LAB_142e11c50);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=1406dc660 name=FUN_1406dc660 */

undefined8 FUN_1406dc660(SOCKET *param_1,char *param_2,ulonglong param_3)

{
  int iVar1;
  
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  iVar1 = send(*param_1,param_2,(int)param_3,0);
  if (iVar1 != -1) {
    return 0;
  }
  iVar1 = WSAGetLastError();
  if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
    FUN_142ce0560(&PTR_LAB_142e11c50,iVar1);
  }
  return 1;
}


/* address=1406dc6e0 name=FUN_1406dc6e0 */

undefined2 * FUN_1406dc6e0(undefined2 *param_1,SOCKET *param_2)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  sockaddr sStack_b8;
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_1e;
  uint uStack_1c;
  
  auStack_48 = ZEXT816(0);
  auStack_58 = ZEXT816(0);
  auStack_68 = ZEXT816(0);
  auStack_78 = ZEXT816(0);
  auStack_88 = ZEXT816(0);
  auStack_98 = ZEXT816(0);
  auStack_a8 = ZEXT816(0);
  sStack_b8 = (sockaddr)ZEXT816(0);
  uStack_1c = 0x80;
  iVar1 = getpeername(*param_2,&sStack_b8,(int *)&uStack_1c);
  if (iVar1 == -1) {
    uVar2 = WSAGetLastError();
    if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
      FUN_142ce0560(&PTR_LAB_142e11c50);
    }
    ppuVar3 = (undefined **)((ulonglong)uVar2 << 0x20 | 2);
  }
  else {
    if (sStack_b8.sa_family == 0x17) {
      if (0x1b < uStack_1c) {
        uStack_2c = sStack_b8.sa_data._6_2_;
        uStack_26 = sStack_b8.sa_data._12_2_;
        uStack_24 = auStack_a8._0_2_;
        uStack_1e = auStack_a8._6_2_;
        *param_1 = 1;
        *(uint *)(param_1 + 1) = CONCAT22(uStack_2c,uStack_2e);
        *(int *)(param_1 + 3) = sStack_b8.sa_data._8_4_;
        *(uint *)(param_1 + 5) = CONCAT22(uStack_24,uStack_26);
        *(int *)(param_1 + 7) = auStack_a8._2_4_;
        param_1[9] = uStack_1e;
        *(undefined4 *)(param_1 + 10) = sStack_b8.sa_data._2_4_;
        *(undefined4 *)(param_1 + 0xc) = auStack_a8._8_4_;
        param_1[0xe] = sStack_b8.sa_data._0_2_ << 8 | (ushort)sStack_b8.sa_data._0_2_ >> 8;
        return param_1;
      }
      FUN_142ce0300("assertion failed: len >= size_of::<c::sockaddr_in6>()",0x35,&DAT_142e14be8);
      do {
        invalidInstructionException();
      } while( true );
    }
    if (sStack_b8.sa_family == 2) {
      if (0xf < uStack_1c) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = sStack_b8.sa_data._2_4_;
        param_1[3] = sStack_b8.sa_data._0_2_ << 8 | (ushort)sStack_b8.sa_data._0_2_ >> 8;
        return param_1;
      }
      FUN_142ce0300("assertion failed: len >= size_of::<c::sockaddr_in>()/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\sys\\net\\connection\\socket\\mod.rs"
                    ,0x34,&DAT_142e14b98);
      do {
        invalidInstructionException();
      } while( true );
    }
    ppuVar3 = &PTR_DAT_142e14c10;
  }
  *(undefined ***)(param_1 + 4) = ppuVar3;
  *param_1 = 2;
  return param_1;
}


/* address=1406dc840 name=FUN_1406dc840 */

undefined8
FUN_1406dc840(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1406dcbf0(param_1,*param_2,param_3,param_4,0);
  return param_1;
}


/* address=1406dc870 name=FUN_1406dc870 */

longlong FUN_1406dc870(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = DAT_143d00378;
  do {
    if (lVar3 == -1) {
      FUN_142cdfba0();
      do {
        invalidInstructionException();
      } while( true );
    }
    lVar1 = lVar3 + 1;
    LOCK();
    bVar4 = lVar3 != DAT_143d00378;
    lVar2 = lVar1;
    if (bVar4) {
      lVar3 = DAT_143d00378;
      lVar2 = DAT_143d00378;
    }
    DAT_143d00378 = lVar2;
    UNLOCK();
  } while (bVar4);
  return lVar1;
}


/* address=1406dc8c0 name=FUN_1406dc8c0 */

void FUN_1406dc8c0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  
  if (param_2 != '\0') {
    *(undefined *)(param_1 + 2) = 1;
  }
  LOCK();
  plVar1 = param_1 + 1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar4 = *param_1;
    LOCK();
    pcVar2 = (char *)(lVar4 + 0x28);
    cVar3 = *pcVar2;
    *pcVar2 = '\x01';
    UNLOCK();
    if (cVar3 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0001406dc8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      WakeByAddressSingle(lVar4 + 0x28);
      return;
    }
  }
  return;
}


/* address=1406dc8f0 name=FUN_1406dc8f0 */

void FUN_1406dc8f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  LOCK();
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 != 0 && SCARRY8(lVar2,1) == *plVar1 < 0) {
    return;
  }
  FUN_142cde670();
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406dc910 name=FUN_1406dc910 */

undefined4 * FUN_1406dc910(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  
  if (0 < *(longlong *)(param_2 + 4)) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_2 + 6),*(longlong *)(param_2 + 4),1);
  }
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_2[4] = *param_3;
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return param_1;
}


/* address=1406dc980 name=FUN_1406dc980 */

undefined8 FUN_1406dc980(SIZE_T param_1,LPVOID param_2)

{
  HANDLE pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_1,(LPTHREAD_START_ROUTINE)&LAB_1406f4440,
                        param_2,0x10000,(LPDWORD)0x0);
  if (pvVar1 == (HANDLE)0x0) {
    FUN_1406d7910(param_2);
    GetLastError();
    if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
      FUN_142ce0560(&PTR_LAB_142e11c50);
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=1406dca10 name=FUN_1406dca10 */

void FUN_1406dca10(HANDLE param_1)

{
  DWORD DVar1;
  ulonglong *puStack_38;
  code *pcStack_30;
  HANDLE pvStack_28;
  ulonglong uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  DVar1 = WaitForSingleObject(param_1,0xffffffff);
  if (DVar1 != 0xffffffff) {
                    /* WARNING: Could not recover jumptable at 0x0001406dca3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle(param_1);
    return;
  }
  pvStack_28 = param_1;
  DVar1 = GetLastError();
  if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
    FUN_142ce0560(&PTR_LAB_142e11c50);
  }
  uStack_20 = (ulonglong)DVar1 << 0x20 | 2;
  puStack_38 = &uStack_20;
  pcStack_30 = FUN_140711090;
  FUN_142ce0320(&DAT_142e12f15,&puStack_38,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e12f88);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406dcb00 name=FUN_1406dcb00 */

void FUN_1406dcb00(int *param_1)

{
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001406dcb03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeByAddressSingle();
  return;
}


/* address=1406dcb10 name=FUN_1406dcb10 */

ulonglong FUN_1406dcb10(undefined4 *param_1,char *param_2,ulonglong param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined auVar3 [16];
  uint3 uVar4;
  int iVar5;
  DWORD DVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uStack_34;
  
  uVar2 = *param_1;
  LOCK();
  cVar1 = *param_2;
  *param_2 = '\0';
  UNLOCK();
  if (cVar1 == '\x02') {
    WakeByAddressSingle(param_2);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  uVar7 = SUB168(auVar3 * ZEXT816(1000),0);
  uVar10 = 0xffffffff;
  if ((((SUB168(auVar3 * ZEXT816(1000),8) == 0) &&
       (uVar8 = uVar7 + (ulonglong)param_4 / 1000000, !CARRY8(uVar7,(ulonglong)param_4 / 1000000)))
      && (uVar9 = (ulonglong)(param_4 != (param_4 / 1000000) * 1000000), uVar7 = uVar8 + uVar9,
         !CARRY8(uVar8,uVar9))) && (uVar10 = 0xffffffff, uVar7 < 0xffffffff)) {
    uVar10 = uVar7;
  }
  uStack_34 = uVar2;
  iVar5 = WaitOnAddress(param_1,&uStack_34,4,uVar10);
  uVar4 = (uint3)((uint)uVar2 >> 8);
  uVar10 = CONCAT71((uint7)uVar4,1);
  if (iVar5 != 1) {
    DVar6 = GetLastError();
    uVar10 = (ulonglong)CONCAT31(uVar4,DVar6 != 0x5b4);
  }
  LOCK();
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    *param_2 = '\x01';
  }
  UNLOCK();
  if (cVar1 != '\0') {
    FUN_142cdea40(param_2);
  }
  return uVar10;
}


/* address=1406dcbf0 name=FUN_1406dcbf0 */

void FUN_1406dcbf0(longlong *param_1,SOCKET param_2,char *param_3,ulonglong param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  longlong unaff_RBX;
  ulonglong unaff_RDI;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined2 uVar7;
  uint in_R11D;
  sockaddr sStack_a8;
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined auStack_88 [16];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  uint uStack_24;
  
  auStack_38 = ZEXT816(0);
  auStack_48 = ZEXT816(0);
  auStack_58 = ZEXT816(0);
  auStack_68 = ZEXT816(0);
  auStack_78 = ZEXT816(0);
  auStack_88 = ZEXT816(0);
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  sStack_a8.sa_family = 0;
  sStack_a8.sa_data._0_2_ = 0;
  sStack_a8.sa_data._2_4_ = 0;
  sStack_a8.sa_data[6] = '\0';
  sStack_a8.sa_data[7] = '\0';
  sStack_a8.sa_data._8_2_ = 0;
  sStack_a8.sa_data[10] = '\0';
  sStack_a8.sa_data[11] = '\0';
  sStack_a8.sa_data[12] = '\0';
  sStack_a8.sa_data[13] = '\0';
  uStack_24 = 0x80;
  uVar5 = 0x7fffffff;
  if (param_4 < 0x7fffffff) {
    uVar5 = param_4;
  }
  iVar4 = (int)uVar5;
  iVar1 = recvfrom(param_2,param_3,iVar4,param_5,&sStack_a8,(int *)&uStack_24);
  iVar6 = (int)param_3;
  if (iVar1 == -1) {
    uVar2 = WSAGetLastError();
    if (uVar2 == 0x274a) {
      if (sStack_a8.sa_family == 0x17) {
        if (uStack_24 < 0x1c) goto LAB_1406dcded;
        uStack_24 = (uint)(ushort)(sStack_a8.sa_data._0_2_ << 8 |
                                  (ushort)sStack_a8.sa_data._0_2_ >> 8);
        iVar4 = CONCAT22(sStack_a8.sa_data._8_2_,sStack_a8.sa_data._6_2_) << 0x10;
        unaff_RDI = CONCAT44(uStack_98,sStack_a8.sa_data._10_4_);
        uVar7 = 1;
LAB_1406dcda0:
        *param_1 = 0;
        *(undefined2 *)(param_1 + 1) = uVar7;
        *(int *)((longlong)param_1 + 10) = iVar4;
        *(undefined2 *)((longlong)param_1 + 0xe) = sStack_a8.sa_data._8_2_;
        param_1[2] = unaff_RDI;
        *(uint *)(param_1 + 3) = uStack_94;
        *(undefined4 *)((longlong)param_1 + 0x1c) = sStack_a8.sa_data._2_4_;
        *(uint *)(param_1 + 4) = uStack_90;
        *(short *)((longlong)param_1 + 0x24) = (short)uStack_24;
        return;
      }
      if (sStack_a8.sa_family == 2) {
        if (uStack_24 < 0x10) goto LAB_1406dcdd3;
        sStack_a8.sa_data._8_2_ =
             sStack_a8.sa_data._0_2_ << 8 | (ushort)sStack_a8.sa_data._0_2_ >> 8;
        uVar7 = 0;
        iVar4 = sStack_a8.sa_data._2_4_;
        uStack_90 = (uint)sStack_a8.sa_family;
        uStack_94 = in_R11D;
        sStack_a8.sa_data._2_4_ = iVar6;
        goto LAB_1406dcda0;
      }
LAB_1406dcce2:
      ppuVar3 = &PTR_DAT_142e14c10;
    }
    else {
      if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
        FUN_142ce0560(&PTR_LAB_142e11c50);
      }
      ppuVar3 = (undefined **)((ulonglong)uVar2 << 0x20 | 2);
    }
    *param_1 = (longlong)ppuVar3;
    *(undefined2 *)(param_1 + 1) = 2;
  }
  else {
    if (sStack_a8.sa_family == 0x17) {
      if (uStack_24 < 0x1c) {
LAB_1406dcded:
        FUN_142ce0300("assertion failed: len >= size_of::<c::sockaddr_in6>()",0x35,&DAT_142e14be8);
        do {
          invalidInstructionException();
        } while( true );
      }
      uStack_24 = (uint)(ushort)(sStack_a8.sa_data._0_2_ << 8 | (ushort)sStack_a8.sa_data._0_2_ >> 8
                                );
      iVar6 = CONCAT22(sStack_a8.sa_data._8_2_,sStack_a8.sa_data._6_2_) << 0x10;
      unaff_RBX = CONCAT44(uStack_98,sStack_a8.sa_data._10_4_);
      uVar7 = 1;
      unaff_RDI = (ulonglong)uStack_94;
    }
    else {
      if (sStack_a8.sa_family != 2) goto LAB_1406dcce2;
      if (uStack_24 < 0x10) {
LAB_1406dcdd3:
        FUN_142ce0300("assertion failed: len >= size_of::<c::sockaddr_in>()/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\sys\\net\\connection\\socket\\mod.rs"
                      ,0x34,&DAT_142e14b98);
        do {
          invalidInstructionException();
        } while( true );
      }
      sStack_a8.sa_data._8_2_ = sStack_a8.sa_data._0_2_ << 8 | (ushort)sStack_a8.sa_data._0_2_ >> 8;
      uVar7 = 0;
      iVar6 = sStack_a8.sa_data._2_4_;
      uStack_90 = (uint)sStack_a8.sa_family;
      sStack_a8.sa_data._2_4_ = iVar4;
    }
    *param_1 = (longlong)iVar1;
    *(undefined2 *)(param_1 + 1) = uVar7;
    *(int *)((longlong)param_1 + 10) = iVar6;
    *(undefined2 *)((longlong)param_1 + 0xe) = sStack_a8.sa_data._8_2_;
    param_1[2] = unaff_RBX;
    *(int *)(param_1 + 3) = (int)unaff_RDI;
    *(undefined4 *)((longlong)param_1 + 0x1c) = sStack_a8.sa_data._2_4_;
    *(uint *)(param_1 + 4) = uStack_90;
    *(short *)((longlong)param_1 + 0x24) = (short)uStack_24;
  }
  return;
}


/* address=1406dce20 name=FUN_1406dce20 */

undefined8 FUN_1406dce20(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  BOOL BVar2;
  longlong lVar3;
  HANDLE hObject;
  
  lVar3 = WSASocketW(param_1,param_2,0,0,0,0x81);
  if (lVar3 != -1) {
    return 0;
  }
  iVar1 = WSAGetLastError();
  if ((iVar1 == 0x2739) || (iVar1 == 0x2726)) {
    hObject = (HANDLE)WSASocketW(param_1 & 0xffffffff,param_2 & 0xffffffff,0,0,0,1);
    if (hObject != (HANDLE)0xffffffffffffffff) {
      BVar2 = SetHandleInformation(hObject,1,0);
      if (BVar2 == 0) {
        GetLastError();
        if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
          FUN_142ce0560(&PTR_LAB_142e11c50);
        }
        closesocket((SOCKET)hObject);
        return 1;
      }
      return 0;
    }
    WSAGetLastError();
  }
  if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
    FUN_142ce0560(&PTR_LAB_142e11c50);
  }
  return 1;
}


/* address=1406dcf90 name=FUN_1406dcf90 */

longlong FUN_1406dcf90(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *(ulonglong *)(*param_1 + 0x10);
  if (uVar1 <= uVar2) {
    return uVar1 + *(longlong *)(*param_1 + 8);
  }
  FUN_142ce0350(uVar1,uVar2,uVar2,&PTR_s__rustc_48a229ceaefd4985c50990b14_142e130d8);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1406dcfd0 name=FUN_1406dcfd0 */

bool FUN_1406dcfd0(HANDLE *param_1,LPVOID param_2,ulonglong param_3)

{
  char cVar1;
  BOOL BVar2;
  uint uVar3;
  longlong lVar4;
  undefined auStack_58 [16];
  _union_540 _Stack_48;
  int *piStack_40;
  ulonglong uStack_30;
  int iStack_24;
  uint uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (0xfffffffe < param_3) {
    param_3 = 0xffffffff;
  }
  iStack_24 = 0;
  auStack_58 = ZEXT816(0);
  _Stack_48.Pointer = (PVOID)0x0;
  piStack_40 = &iStack_24;
  BVar2 = ReadFileEx(*param_1,param_2,(DWORD)param_3,(LPOVERLAPPED)auStack_58,
                     (LPOVERLAPPED_COMPLETION_ROUTINE)&LAB_1406f4760);
  if (BVar2 == 0) {
    uVar3 = GetLastError();
  }
  else {
    do {
      SleepEx(0xffffffff,1);
    } while (iStack_24 != 1);
    uVar3 = uStack_20;
    if (uStack_20 == 0) {
      return false;
    }
  }
  if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
    FUN_142ce0560(&PTR_LAB_142e11c50);
  }
  uStack_30 = (ulonglong)uVar3 << 0x20 | 2;
  lVar4 = FUN_140708a90();
  cVar1 = (**(code **)(lVar4 + 8))(uVar3);
  return cVar1 != '\v';
}


/* address=1406dd100 name=FUN_1406dd100 */

undefined8 FUN_1406dd100(HANDLE *param_1,LPCVOID param_2,ulonglong param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  undefined auStack_48 [16];
  _union_540 _Stack_38;
  int *piStack_30;
  int iStack_1c;
  int iStack_18;
  
  if (0xfffffffe < param_3) {
    param_3 = 0xffffffff;
  }
  iStack_1c = 0;
  auStack_48 = ZEXT816(0);
  _Stack_38.Pointer = (PVOID)0x0;
  piStack_30 = &iStack_1c;
  BVar1 = WriteFileEx(*param_1,param_2,(DWORD)param_3,(LPOVERLAPPED)auStack_48,
                      (LPOVERLAPPED_COMPLETION_ROUTINE)&LAB_1406f4760);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    uVar3 = (ulonglong)DVar2;
  }
  else {
    do {
      SleepEx(0xffffffff,1);
    } while (iStack_1c != 1);
    uVar3 = (ulonglong)iStack_18;
    if (uVar3 == 0) {
      return 0;
    }
  }
  if (*(undefined ***)PTR_PTR_143ca2070 != &PTR_LAB_142e11c50) {
    FUN_142ce0560(&PTR_LAB_142e11c50,uVar3);
  }
  return 1;
}


/* address=1406dd1d0 name=FUN_1406dd1d0 */

void FUN_1406dd1d0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  short sVar42;
  uint uVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong lVar49;
  ulonglong uVar50;
  
  lVar5 = param_1[5];
  uVar4 = *(ushort *)(lVar5 + 0x3d2);
  uVar41 = (ulonglong)uVar4;
  uVar40 = uVar41 + param_2;
  if (0xb < uVar40) {
    FUN_142ce0300("assertion failed: old_right_len + count <= CAPACITY",0x33,&DAT_142e13228);
    do {
      invalidInstructionException();
    } while( true );
  }
  lVar6 = param_1[3];
  uVar47 = (ulonglong)*(ushort *)(lVar6 + 0x3d2);
  lVar49 = uVar47 - param_2;
  if (uVar47 < param_2) {
    FUN_142ce0300("assertion failed: old_left_len >= count",0x27,&DAT_142e13268);
    do {
      invalidInstructionException();
    } while( true );
  }
  *(short *)(lVar6 + 0x3d2) = (short)lVar49;
  *(short *)(lVar5 + 0x3d2) = (short)uVar40;
  FUN_142cbd3c0(lVar5 + param_2 * 0x38 + 0x168,lVar5 + 0x168,uVar41 * 0x38);
  FUN_142cbd3c0(param_2 * 0x20 + lVar5,lVar5,(ulonglong)uVar4 << 5);
  lVar1 = lVar49 + 1;
  lVar48 = uVar47 - lVar1;
  if (lVar48 != param_2 - 1) {
    FUN_142ce0300(&DAT_142e12578,0x28,&DAT_142e125a0);
    do {
      invalidInstructionException();
    } while( true );
  }
  lVar46 = lVar48 * 0x38;
  FUN_142cbd3c0(lVar5 + 0x168,lVar6 + lVar1 * 0x38 + 0x168,lVar46);
  uVar47 = (ulonglong)(uint)((int)lVar48 << 5);
  FUN_142cbd3c0(lVar5,(ulonglong)(uint)((int)lVar1 << 5) + lVar6,uVar47);
  lVar48 = lVar49 * 0x38;
  uVar50 = (ulonglong)(uint)((int)lVar49 << 5);
  puVar2 = (undefined4 *)(lVar6 + uVar50);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar2 = (undefined4 *)(lVar6 + 0x10 + uVar50);
  uVar13 = *puVar2;
  uVar14 = puVar2[1];
  uVar15 = puVar2[2];
  uVar16 = puVar2[3];
  lVar49 = *param_1;
  lVar45 = param_1[2] * 0x38;
  lVar44 = param_1[2] * 0x20;
  uVar7 = *(undefined8 *)(lVar49 + 0x198 + lVar45);
  puVar2 = (undefined4 *)(lVar49 + 0x168 + lVar45);
  uVar17 = *puVar2;
  uVar18 = puVar2[1];
  uVar19 = puVar2[2];
  uVar20 = puVar2[3];
  puVar2 = (undefined4 *)(lVar49 + 0x178 + lVar45);
  uVar21 = *puVar2;
  uVar22 = puVar2[1];
  uVar23 = puVar2[2];
  uVar24 = puVar2[3];
  puVar2 = (undefined4 *)(lVar49 + 0x188 + lVar45);
  uVar25 = *puVar2;
  uVar26 = puVar2[1];
  uVar27 = puVar2[2];
  uVar28 = puVar2[3];
  uVar8 = *(undefined8 *)(lVar6 + 0x198 + lVar48);
  puVar2 = (undefined4 *)(lVar6 + 0x168 + lVar48);
  uVar29 = puVar2[1];
  uVar30 = puVar2[2];
  uVar31 = puVar2[3];
  puVar3 = (undefined4 *)(lVar6 + 0x178 + lVar48);
  uVar32 = *puVar3;
  uVar33 = puVar3[1];
  uVar34 = puVar3[2];
  uVar35 = puVar3[3];
  puVar3 = (undefined4 *)(lVar6 + 0x188 + lVar48);
  uVar36 = *puVar3;
  uVar37 = puVar3[1];
  uVar38 = puVar3[2];
  uVar39 = puVar3[3];
  puVar3 = (undefined4 *)(lVar49 + 0x168 + lVar45);
  *puVar3 = *puVar2;
  puVar3[1] = uVar29;
  puVar3[2] = uVar30;
  puVar3[3] = uVar31;
  *(undefined8 *)(lVar49 + 0x198 + lVar45) = uVar8;
  puVar2 = (undefined4 *)(lVar49 + 0x188 + lVar45);
  *puVar2 = uVar36;
  puVar2[1] = uVar37;
  puVar2[2] = uVar38;
  puVar2[3] = uVar39;
  puVar2 = (undefined4 *)(lVar49 + 0x178 + lVar45);
  *puVar2 = uVar32;
  puVar2[1] = uVar33;
  puVar2[2] = uVar34;
  puVar2[3] = uVar35;
  puVar2 = (undefined4 *)(lVar49 + lVar44);
  uVar29 = *puVar2;
  uVar30 = puVar2[1];
  uVar31 = puVar2[2];
  uVar32 = puVar2[3];
  puVar2 = (undefined4 *)(lVar49 + 0x10 + lVar44);
  uVar33 = *puVar2;
  uVar34 = puVar2[1];
  uVar35 = puVar2[2];
  uVar36 = puVar2[3];
  puVar2 = (undefined4 *)(lVar49 + 0x10 + lVar44);
  *puVar2 = uVar13;
  puVar2[1] = uVar14;
  puVar2[2] = uVar15;
  puVar2[3] = uVar16;
  puVar2 = (undefined4 *)(lVar49 + lVar44);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  *(undefined8 *)(lVar5 + 0x198 + lVar46) = uVar7;
  puVar2 = (undefined4 *)(lVar5 + 0x188 + lVar46);
  *puVar2 = uVar25;
  puVar2[1] = uVar26;
  puVar2[2] = uVar27;
  puVar2[3] = uVar28;
  puVar2 = (undefined4 *)(lVar5 + 0x178 + lVar46);
  *puVar2 = uVar21;
  puVar2[1] = uVar22;
  puVar2[2] = uVar23;
  puVar2[3] = uVar24;
  puVar2 = (undefined4 *)(lVar5 + 0x168 + lVar46);
  *puVar2 = uVar17;
  puVar2[1] = uVar18;
  puVar2[2] = uVar19;
  puVar2[3] = uVar20;
  puVar2 = (undefined4 *)(lVar5 + 0x10 + uVar47);
  *puVar2 = uVar33;
  puVar2[1] = uVar34;
  puVar2[2] = uVar35;
  puVar2[3] = uVar36;
  puVar2 = (undefined4 *)(lVar5 + uVar47);
  *puVar2 = uVar29;
  puVar2[1] = uVar30;
  puVar2[2] = uVar31;
  puVar2[3] = uVar32;
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_1406dd485;
  }
  else {
    if (param_1[6] == 0) {
LAB_1406dd485:
      FUN_142ce0300("internal e
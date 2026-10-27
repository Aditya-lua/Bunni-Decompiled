/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=140a44770 name=FUN_140a44770 */

void FUN_140a44770(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  code **ppcVar7;
  bool bVar8;
  char *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  code **local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x10);
  pcVar1 = (char *)(lVar2 + 0x10);
  LOCK();
  bVar8 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar8) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar8) {
    FUN_140e4a290(pcVar1);
  }
  puVar3 = PTR_DAT_14139cb28;
  if ((*(ulonglong *)PTR_DAT_14139cb28 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    cVar5 = *(char *)(lVar2 + 0x11);
  }
  else {
    bVar4 = FUN_140e4b070();
    bVar4 = bVar4 ^ 1;
    cVar5 = *(char *)(lVar2 + 0x11);
  }
  if (cVar5 != '\0') {
    local_50._1_3_ = (undefined3)((uint)local_50 >> 8);
    local_50 = CONCAT31(local_50._1_3_,bVar4);
    local_58 = pcVar1;
    FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_58,&PTR_FUN_1410631b8,
                  &PTR_s_C__Users_VssAdministrator__cargo_141063320);
    goto LAB_140a4496f;
  }
  ppcVar7 = (code **)0x0;
  *(undefined *)(lVar2 + 0x12) = 1;
  if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = FUN_140e4b070(), cVar5 == '\0')) {
    *(undefined *)(lVar2 + 0x11) = 1;
  }
  LOCK();
  cVar5 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar5 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  FUN_140705e90(lVar2 + 0x14);
  pcVar1 = *(char **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (pcVar1 != (char *)0x0) {
    local_50 = *(undefined4 *)(param_1 + 0x20);
    uStack_4c = *(undefined4 *)(param_1 + 0x24);
    uStack_48 = *(undefined4 *)(param_1 + 0x28);
    uStack_44 = *(undefined4 *)(param_1 + 0x2c);
    local_58 = pcVar1;
    local_40 = FUN_140a56330(&local_58);
    if (local_40 != 0) {
      local_38 = ppcVar7;
      if (*ppcVar7 != (code *)0x0) {
        (**ppcVar7)(local_40);
      }
      if (local_38[1] != (code *)0x0) {
        thunk_FUN_140704e90(local_40,local_38[1],local_38[2]);
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 8);
  LOCK();
  bVar8 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar8) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (bVar8) {
    if ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) == 0) goto LAB_140a44874;
LAB_140a44922:
    uVar6 = FUN_140e4b070();
    uVar6 = uVar6 ^ 1;
    cVar5 = *(char *)(lVar2 + 0x11);
  }
  else {
    FUN_140e4a290();
    if ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0) goto LAB_140a44922;
LAB_140a44874:
    uVar6 = 0;
    cVar5 = *(char *)(lVar2 + 0x11);
  }
  if (cVar5 == '\0') {
    FUN_140a42730((char *)(lVar2 + 0x10),uVar6,param_1);
    return;
  }
  local_50._1_3_ = (undefined3)((uint)local_50 >> 8);
  local_50 = CONCAT31(local_50._1_3_,(char)uVar6);
  local_58 = (char *)(lVar2 + 0x10);
  FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_58,&PTR_FUN_141063198,
                &PTR_s_C__Users_VssAdministrator__cargo_141063338);
LAB_140a4496f:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140a44a30 name=FUN_140a44a30 */

longlong * FUN_140a44a30(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong unaff_R14;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_50;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar1 = *param_2;
  if (lVar1 == param_2[1]) {
    *param_1 = -1;
  }
  else {
    *param_2 = lVar1 + 0x60;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    if (lVar3 < 0) {
      unaff_R14 = 0;
LAB_140a44a6e:
      FUN_140e4b58b(unaff_R14,lVar3);
      do {
        invalidInstructionException();
      } while( true );
    }
    local_40 = lVar3;
    if (lVar3 == 0) {
      local_50 = 1;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 8);
      FUN_140081a90();
      unaff_R14 = 1;
      local_50 = thunk_FUN_140704e30(lVar3,1);
      if (local_50 == 0) goto LAB_140a44a6e;
      FUN_140e286a0(local_50,uVar2,lVar3);
    }
    FUN_140728970(&local_88,lVar1 + 0x18);
    if (*(longlong *)(lVar1 + 0x30) == -1) {
      local_70 = -1;
      lVar1 = *(longlong *)(lVar1 + 0x48);
    }
    else {
      FUN_140728970(&local_70,lVar1 + 0x30);
      lVar1 = *(longlong *)(lVar1 + 0x48);
      param_4 = local_68;
      unaff_R14 = local_60;
    }
    if (lVar1 != -1) {
      lVar3 = 5;
      if (lVar1 < 0) {
        lVar3 = lVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x000140a44b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar4 = (longlong *)(*(code *)(&DAT_141063390 + *(int *)(&DAT_141063390 + lVar3 * 4)))();
      return plVar4;
    }
    param_1[5] = local_78;
    *(undefined4 *)(param_1 + 3) = local_88;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_84;
    *(undefined4 *)(param_1 + 4) = uStack_80;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_7c;
    *param_1 = local_40;
    param_1[1] = local_50;
    param_1[2] = local_40;
    param_1[6] = local_70;
    param_1[7] = param_4;
    param_1[8] = unaff_R14;
    param_1[9] = -1;
    *(undefined4 *)(param_1 + 10) = local_98;
    *(undefined4 *)((longlong)param_1 + 0x54) = uStack_94;
    *(undefined4 *)(param_1 + 0xb) = uStack_90;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_8c;
  }
  return param_1;
}


/* address=140a44cd0 name=FUN_140a44cd0 */

void FUN_140a44cd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined uVar19;
  undefined uVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong unaff_R14;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined local_72;
  undefined local_71;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (param_2[4] == -1) {
    local_d8 = 0xffffffffffffffff;
  }
  else {
    FUN_140728970(&local_d8,param_2 + 4);
  }
  uVar22 = *param_2;
  uVar9 = param_2[1];
  uVar6 = *(undefined4 *)(param_2 + 0x17);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xbc);
  uVar8 = *(undefined4 *)(param_2 + 0x18);
  uVar1 = param_2[0x15];
  uVar3 = *(undefined *)((longlong)param_2 + 0xc4);
  uVar10 = param_2[2];
  uVar2 = param_2[3];
  uVar4 = *(undefined *)((longlong)param_2 + 0xc5);
  uVar11 = param_2[0x16];
  lVar21 = param_2[8];
  lVar12 = param_2[9];
  uVar15 = local_a0;
  uVar16 = local_98;
  uVar17 = local_90;
  uVar14 = local_7c;
  uVar18 = local_78;
  uVar19 = local_72;
  uVar20 = local_71;
  if (param_2[7] == -1) {
    local_a8 = -1;
    lVar13 = param_2[0xd];
    local_b8 = uVar9;
    local_c0 = lVar21;
  }
  else {
    if (lVar12 < 0) {
      unaff_R14 = 0;
LAB_140a44d79:
      FUN_140e4b58b(unaff_R14,lVar12);
      goto LAB_140a44ead;
    }
    if (lVar12 == 0) {
      local_a8 = 0;
      lVar13 = param_2[0xd];
      local_c0 = 1;
      local_b8 = uVar9;
    }
    else {
      local_b8 = uVar9;
      local_a0 = uVar22;
      local_98 = uVar10;
      local_90 = uVar11;
      local_7c = uVar7;
      local_78 = uVar8;
      local_72 = uVar3;
      local_71 = uVar4;
      FUN_140081a90();
      unaff_R14 = 1;
      local_c0 = thunk_FUN_140704e30(lVar12,1);
      if (local_c0 == 0) goto LAB_140a44d79;
      FUN_140e286a0(local_c0,lVar21,lVar12);
      lVar13 = param_2[0xd];
      uVar22 = local_a0;
      uVar7 = local_7c;
      uVar8 = local_78;
      uVar3 = local_72;
      uVar10 = local_98;
      uVar4 = local_71;
      uVar11 = local_90;
      local_a8 = lVar12;
      uVar15 = local_a0;
      uVar16 = local_98;
      uVar17 = local_90;
      uVar14 = local_7c;
      uVar18 = local_78;
      uVar19 = local_72;
      uVar20 = local_71;
    }
  }
  local_90 = uVar11;
  local_71 = uVar4;
  local_98 = uVar10;
  local_72 = uVar3;
  local_78 = uVar8;
  local_7c = uVar7;
  local_a0 = uVar22;
  if (lVar13 == -2) {
    local_b0 = -2;
    cVar5 = *(char *)(param_2 + 0x10);
  }
  else {
    local_88 = param_2[0xe];
    unaff_R14 = param_2[0xf];
    if (lVar13 != -1) {
      if (unaff_R14 < 0) {
        uVar22 = 0;
        local_a0 = uVar15;
        local_98 = uVar16;
        local_90 = uVar17;
        local_7c = uVar14;
        local_78 = uVar18;
        local_72 = uVar19;
        local_71 = uVar20;
      }
      else {
        if (unaff_R14 == 0) {
          local_88 = 1;
          unaff_R14 = 0;
          cVar5 = *(char *)(param_2 + 0x10);
          local_b0 = unaff_R14;
          goto joined_r0x000140a45074;
        }
        FUN_140081a90();
        uVar22 = 1;
        lVar21 = thunk_FUN_140704e30(unaff_R14,1);
        if (lVar21 != 0) {
          FUN_140e286a0(lVar21,local_88,unaff_R14);
          cVar5 = *(char *)(param_2 + 0x10);
          local_b0 = unaff_R14;
          local_88 = lVar21;
          goto joined_r0x000140a45074;
        }
      }
      FUN_140e4b58b(uVar22,unaff_R14);
LAB_140a44ead:
      do {
        invalidInstructionException();
      } while( true );
    }
    local_b0 = -1;
    cVar5 = *(char *)(param_2 + 0x10);
  }
joined_r0x000140a45074:
  if (cVar5 != '\x02') {
    local_e8 = *(undefined4 *)((longlong)param_2 + 0x81);
    uStack_e4 = *(undefined4 *)((longlong)param_2 + 0x85);
    uStack_e0 = *(undefined4 *)((longlong)param_2 + 0x89);
    uStack_dc = *(undefined4 *)((longlong)param_2 + 0x8d);
  }
  if (param_2[10] == -1) {
    local_110 = 0xffffffffffffffff;
  }
  else {
    FUN_140728970(&local_110,param_2 + 10);
    local_f8 = local_108;
    uStack_f4 = uStack_104;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
  }
  param_1[7] = local_a8;
  param_1[8] = local_c0;
  param_1[9] = lVar12;
  param_1[0xd] = local_b0;
  param_1[0xe] = local_88;
  param_1[0xf] = unaff_R14;
  *(undefined4 *)((longlong)param_1 + 0x81) = local_e8;
  *(undefined4 *)((longlong)param_1 + 0x85) = uStack_e4;
  *(undefined4 *)((longlong)param_1 + 0x89) = uStack_e0;
  *(undefined4 *)((longlong)param_1 + 0x8d) = uStack_dc;
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x9c);
  uVar8 = *(undefined4 *)(param_2 + 0x14);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar7;
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar14;
  param_1[6] = local_c8;
  *(undefined4 *)(param_1 + 4) = (undefined4)local_d8;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_d8._4_4_;
  *(undefined4 *)(param_1 + 5) = uStack_d0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_cc;
  *param_1 = local_a0;
  param_1[1] = local_b8;
  *(undefined4 *)(param_1 + 0x17) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xbc) = local_7c;
  *(undefined4 *)(param_1 + 0x18) = local_78;
  param_1[0x15] = uVar1;
  *(undefined *)((longlong)param_1 + 0xc4) = local_72;
  param_1[2] = local_98;
  param_1[3] = uVar2;
  *(undefined *)((longlong)param_1 + 0xc5) = local_71;
  param_1[0x16] = local_90;
  param_1[10] = local_110;
  *(undefined4 *)(param_1 + 0xb) = local_f8;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_f4;
  *(undefined4 *)(param_1 + 0xc) = uStack_f0;
  *(undefined4 *)((longlong)param_1 + 100) = uStack_ec;
  *(char *)(param_1 + 0x10) = cVar5;
  return;
}


/* address=140a451e0 name=FUN_140a451e0 */

void FUN_140a451e0(undefined8 *param_1)

{
  longlong lVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  longlong *local_20;
  
  pplVar2 = (longlong **)(param_1 + 1);
  switch(*param_1) {
  case 0:
    local_20 = *pplVar2;
    lVar1 = local_20[0xe];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0xf],lVar1,1);
    }
    lVar1 = local_20[0x11];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x12],lVar1,1);
    }
    lVar1 = local_20[0x14];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x15],lVar1,1);
    }
    lVar1 = local_20[0x17];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x18],lVar1,1);
    }
    lVar1 = local_20[0x1a];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x1b],lVar1,1);
    }
    lVar1 = local_20[0x1d];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x1e],lVar1,1);
    }
    FUN_140a49770(local_20 + 0x21);
    uVar3 = 0x130;
    break;
  case 1:
    local_20 = *pplVar2;
    lVar1 = *local_20;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[1],lVar1,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    lVar1 = local_20[6];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[7],lVar1,1);
    }
    lVar1 = local_20[9];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[10],lVar1,1);
    }
    FUN_140a49770(local_20 + 0xc);
    uVar3 = 0x80;
    break;
  case 2:
    local_20 = *pplVar2;
    lVar1 = *local_20;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[1],lVar1,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    FUN_140a49770(local_20 + 6);
    goto LAB_140a454a3;
  case 3:
    local_20 = *pplVar2;
    lVar1 = *local_20;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[1],lVar1,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    lVar1 = local_20[6];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[7],lVar1,1);
    }
    lVar1 = local_20[9];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[10],lVar1,1);
    }
    lVar1 = local_20[0xc];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0xd],lVar1,1);
    }
    lVar1 = local_20[0xf];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x10],lVar1,1);
    }
    FUN_140a49770(local_20 + 0x12);
    uVar3 = 0xb8;
    break;
  case 4:
    local_20 = *pplVar2;
    lVar1 = *local_20;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[1],lVar1,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    FUN_140a49770(local_20 + 6);
    goto LAB_140a454a3;
  case 5:
    local_20 = *pplVar2;
    lVar1 = *local_20;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[1],lVar1,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    lVar1 = local_20[6];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[7],lVar1,1);
    }
    FUN_140a49770(local_20 + 0xc);
    uVar3 = 0x88;
    break;
  case 6:
    local_20 = *pplVar2;
    if (*local_20 != 0) {
      thunk_FUN_140704e90(local_20[1],*local_20,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    lVar1 = local_20[6];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[7],lVar1,1);
    }
    lVar1 = local_20[9];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[10],lVar1,1);
    }
    lVar1 = local_20[0xc];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0xd],lVar1,1);
    }
    lVar1 = local_20[0xf];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x10],lVar1,1);
    }
    lVar1 = local_20[0x12];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x13],lVar1,1);
    }
    lVar1 = local_20[0x15];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x16],lVar1,1);
    }
    FUN_140a49770(local_20 + 0x1a);
    uVar3 = 0xf0;
    break;
  case 7:
    local_20 = *pplVar2;
    FUN_140a49770();
    FUN_140a49770(local_20 + 3);
    FUN_140a49770(local_20 + 6);
LAB_140a454a3:
    uVar3 = 0x48;
    break;
  case 8:
    local_20 = *pplVar2;
    lVar1 = local_20[4];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[5],lVar1,1);
    }
    FUN_140a49670(local_20 + 0x10);
    if (local_20[7] != -1) {
      FUN_14096b090(local_20 + 7);
    }
    uVar3 = 0x98;
    break;
  default:
    FUN_140a49770();
    return;
  }
  thunk_FUN_140704e90(local_20,uVar3,8);
  return;
}


/* address=140a45980 name=FUN_140a45980 */

undefined8 * FUN_140a45980(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  undefined4 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_50 = param_2[4];
  local_40 = param_2;
  local_48 = param_3;
  if (local_50 == 0) {
    puVar12 = (undefined8 *)param_2[3];
    FUN_140081a90();
    local_a0 = (undefined8 *)thunk_FUN_140704e30(0x220,8);
    if (local_a0 == (undefined8 *)0x0) {
      FUN_140e4b571(8,0x220);
      do {
        invalidInstructionException();
      } while( true );
    }
    *local_a0 = 0;
    *puVar12 = local_a0;
    puVar12[1] = 0;
    uVar2 = *param_2;
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar6 = *(undefined4 *)(param_2 + 2);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar8 = *param_3;
    uVar9 = param_3[1];
    uVar10 = param_3[2];
    uVar11 = param_3[3];
    uVar1 = *(undefined8 *)(param_3 + 4);
    *(undefined2 *)((longlong)local_a0 + 0x21a) = 1;
    local_a0[1] = uVar2;
    *(undefined4 *)(local_a0 + 2) = uVar4;
    *(undefined4 *)((longlong)local_a0 + 0x14) = uVar5;
    *(undefined4 *)(local_a0 + 3) = uVar6;
    *(undefined4 *)((longlong)local_a0 + 0x1c) = uVar7;
    *(undefined4 *)(local_a0 + 0x22) = uVar8;
    *(undefined4 *)((longlong)local_a0 + 0x114) = uVar9;
    *(undefined4 *)(local_a0 + 0x23) = uVar10;
    *(undefined4 *)((longlong)local_a0 + 0x11c) = uVar11;
    local_a0[0x24] = uVar1;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
  }
  else {
    local_58 = param_2[6];
    local_68 = *(undefined4 *)(param_2 + 4);
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_60 = *(undefined4 *)(param_2 + 5);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_78 = param_2[2];
    local_88 = *(undefined4 *)param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = *(undefined4 *)(param_2 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_140b85ba0(&local_a0,&local_68,&local_88,param_3,param_2 + 3,param_2 + 7);
    puVar12 = (undefined8 *)param_2[3];
  }
  puVar12[2] = puVar12[2] + 1;
  uVar2 = local_40[3];
  *param_1 = local_a0;
  auVar3._4_4_ = uStack_94;
  auVar3._0_4_ = local_98;
  auVar3._8_4_ = uStack_90;
  auVar3._12_4_ = uStack_8c;
  *(undefined (*) [16])(param_1 + 1) = auVar3;
  param_1[3] = uVar2;
  return param_1;
}


/* address=140a45b30 name=FUN_140a45b30 */

undefined8 * FUN_140a45b30(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
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
  undefined8 *puVar18;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_50 = *(longlong *)(param_2 + 8);
  local_40 = param_2;
  local_48 = param_3;
  if (local_50 == 0) {
    puVar18 = *(undefined8 **)(param_2 + 6);
    FUN_140081a90();
    local_a0 = (undefined8 *)thunk_FUN_140704e30(0x430,8);
    if (local_a0 == (undefined8 *)0x0) {
      FUN_140e4b571(8,0x430);
      do {
        invalidInstructionException();
      } while( true );
    }
    *local_a0 = 0;
    *puVar18 = local_a0;
    puVar18[1] = 0;
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar1 = *(undefined8 *)(param_2 + 4);
    *(undefined2 *)((longlong)local_a0 + 0x42a) = 1;
    *(undefined4 *)(local_a0 + 1) = uVar3;
    *(undefined4 *)((longlong)local_a0 + 0xc) = uVar4;
    *(undefined4 *)(local_a0 + 2) = uVar5;
    *(undefined4 *)((longlong)local_a0 + 0x14) = uVar6;
    local_a0[3] = uVar1;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    uVar14 = param_3[0xc];
    uVar15 = param_3[0xd];
    uVar16 = param_3[0xe];
    uVar17 = param_3[0xf];
    *(undefined4 *)(local_a0 + 0x22) = *param_3;
    *(undefined4 *)((longlong)local_a0 + 0x114) = uVar3;
    *(undefined4 *)(local_a0 + 0x23) = uVar4;
    *(undefined4 *)((longlong)local_a0 + 0x11c) = uVar5;
    *(undefined4 *)(local_a0 + 0x24) = uVar6;
    *(undefined4 *)((longlong)local_a0 + 0x124) = uVar7;
    *(undefined4 *)(local_a0 + 0x25) = uVar8;
    *(undefined4 *)((longlong)local_a0 + 300) = uVar9;
    *(undefined4 *)(local_a0 + 0x26) = uVar10;
    *(undefined4 *)((longlong)local_a0 + 0x134) = uVar11;
    *(undefined4 *)(local_a0 + 0x27) = uVar12;
    *(undefined4 *)((longlong)local_a0 + 0x13c) = uVar13;
    *(undefined4 *)(local_a0 + 0x28) = uVar14;
    *(undefined4 *)((longlong)local_a0 + 0x144) = uVar15;
    *(undefined4 *)(local_a0 + 0x29) = uVar16;
    *(undefined4 *)((longlong)local_a0 + 0x14c) = uVar17;
    local_a0[0x2a] = *(undefined8 *)(param_3 + 0x10);
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
  }
  else {
    local_58 = *(undefined8 *)(param_2 + 0xc);
    local_68 = param_2[8];
    uStack_64 = param_2[9];
    uStack_60 = param_2[10];
    uStack_5c = param_2[0xb];
    local_78 = *(undefined8 *)(param_2 + 4);
    local_88 = *param_2;
    uStack_84 = param_2[1];
    uStack_80 = param_2[2];
    uStack_7c = param_2[3];
    FUN_140b86b70(&local_a0,&local_68,&local_88,param_3,param_2 + 6,param_2 + 0xe);
    puVar18 = *(undefined8 **)(param_2 + 6);
  }
  puVar18[2] = puVar18[2] + 1;
  uVar1 = *(undefined8 *)(local_40 + 6);
  *param_1 = local_a0;
  auVar2._4_4_ = uStack_94;
  auVar2._0_4_ = local_98;
  auVar2._8_4_ = uStack_90;
  auVar2._12_4_ = uStack_8c;
  *(undefined (*) [16])(param_1 + 1) = auVar2;
  param_1[3] = uVar1;
  return param_1;
}


/* address=140a45d00 name=FUN_140a45d00 */

undefined8 * FUN_140a45d00(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined4 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_50 = *(longlong *)(param_2 + 8);
  local_40 = param_2;
  local_48 = param_3;
  if (local_50 == 0) {
    puVar10 = *(undefined8 **)(param_2 + 6);
    FUN_140081a90();
    local_a0 = (undefined4 *)thunk_FUN_140704e30(0x278,8);
    if (local_a0 == (undefined4 *)0x0) {
      FUN_140e4b571(8,0x278);
      do {
        invalidInstructionException();
      } while( true );
    }
    *(undefined8 *)(local_a0 + 0x58) = 0;
    *puVar10 = local_a0;
    puVar10[1] = 0;
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar1 = *(undefined8 *)(param_2 + 4);
    *(undefined2 *)((longlong)local_a0 + 0x272) = 1;
    local_a0[0x5a] = uVar3;
    local_a0[0x5b] = uVar4;
    local_a0[0x5c] = uVar5;
    local_a0[0x5d] = uVar6;
    *(undefined8 *)(local_a0 + 0x5e) = uVar1;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    *local_a0 = *param_3;
    local_a0[1] = uVar3;
    local_a0[2] = uVar4;
    local_a0[3] = uVar5;
    local_a0[4] = uVar6;
    local_a0[5] = uVar7;
    local_a0[6] = uVar8;
    local_a0[7] = uVar9;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
  }
  else {
    local_58 = *(undefined8 *)(param_2 + 0xc);
    local_68 = param_2[8];
    uStack_64 = param_2[9];
    uStack_60 = param_2[10];
    uStack_5c = param_2[0xb];
    local_78 = *(undefined8 *)(param_2 + 4);
    local_88 = *param_2;
    uStack_84 = param_2[1];
    uStack_80 = param_2[2];
    uStack_7c = param_2[3];
    FUN_140b880c0(&local_a0,&local_68,&local_88,param_3,param_2 + 6,param_2 + 0xe);
    puVar10 = *(undefined8 **)(param_2 + 6);
  }
  puVar10[2] = puVar10[2] + 1;
  uVar1 = *(undefined8 *)(local_40 + 6);
  *param_1 = local_a0;
  auVar2._4_4_ = uStack_94;
  auVar2._0_4_ = local_98;
  auVar2._8_4_ = uStack_90;
  auVar2._12_4_ = uStack_8c;
  *(undefined (*) [16])(param_1 + 1) = auVar2;
  param_1[3] = uVar1;
  return param_1;
}


/* address=140a45ea0 name=FUN_140a45ea0 */

void FUN_140a45ea0(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = param_3[2];
  local_60 = param_3;
  if (local_68 < param_2) {
    lVar4 = param_3[1];
    if (local_68 != 0) {
LAB_140a45f13:
      *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(param_1 + 0x60);
      local_50 = lVar4;
      FUN_140728900(lVar4,param_1);
      uVar3 = *(ulonglong *)(param_1 + 0x18) ^ 0x8000000000000000;
      if (-1 < (longlong)*(ulonglong *)(param_1 + 0x18)) {
        uVar3 = 5;
      }
                    /* WARNING: Could not recover jumptable at 0x000140a45f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_14106346c + *(int *)(&DAT_14106346c + uVar3 * 4)))(uVar3,0);
      return;
    }
    local_68 = 0;
  }
  else {
    lVar4 = param_3[1];
    param_3[2] = param_2;
    FUN_140a4c420(param_2 * 0x68 + lVar4,local_68 - param_2);
    local_68 = param_2;
    if (param_2 != 0) goto LAB_140a45f13;
  }
  plVar2 = local_60;
  uVar3 = local_68;
  local_50 = local_68;
  plVar1 = local_60;
  if (*local_60 - local_68 < param_2 - local_68) {
    FUN_140e2e4d0(local_60,local_68,param_2 - local_68,8,0x68);
    lVar4 = plVar2[1];
    local_50 = plVar2[2];
    plVar1 = local_60;
  }
  local_60 = plVar2;
  if (uVar3 != param_2) {
    param_1 = param_1 + uVar3 * 0x68;
    puVar5 = (undefined4 *)(lVar4 + local_50 * 0x68);
    local_58 = 0;
    local_60 = plVar1;
    do {
      FUN_140a46240(&local_d0,param_1);
      *(undefined8 *)(puVar5 + 0x18) = local_70;
      puVar5[0x14] = local_80;
      puVar5[0x15] = uStack_7c;
      puVar5[0x16] = uStack_78;
      puVar5[0x17] = uStack_74;
      puVar5[0x10] = local_90;
      puVar5[0x11] = uStack_8c;
      puVar5[0x12] = uStack_88;
      puVar5[0x13] = uStack_84;
      puVar5[0xc] = local_a0;
      puVar5[0xd] = uStack_9c;
      puVar5[0xe] = uStack_98;
      puVar5[0xf] = uStack_94;
      puVar5[8] = local_b0;
      puVar5[9] = uStack_ac;
      puVar5[10] = uStack_a8;
      puVar5[0xb] = uStack_a4;
      puVar5[4] = local_c0;
      puVar5[5] = uStack_bc;
      puVar5[6] = uStack_b8;
      puVar5[7] = uStack_b4;
      *puVar5 = local_d0;
      puVar5[1] = uStack_cc;
      puVar5[2] = uStack_c8;
      puVar5[3] = uStack_c4;
      local_58 = local_58 + -1;
      puVar5 = puVar5 + 0x1a;
      param_1 = param_1 + 0x68;
    } while (uVar3 - param_2 != local_58);
    local_50 = local_50 - local_58;
  }
  local_60[2] = local_50;
  return;
}


/* address=140a46240 name=FUN_140a46240 */

void FUN_140a46240(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined local_40 [24];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140728970(local_40);
  lVar1 = 5;
  if (*(longlong *)(param_2 + 0x18) < 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a4629c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_141063484 + *(int *)(&DAT_141063484 + lVar1 * 4)))
            (&DAT_141063484 + *(int *)(&DAT_141063484 + lVar1 * 4));
  return;
}


/* address=140a463b0 name=FUN_140a463b0 */

undefined ** FUN_140a463b0(undefined8 param_1,undefined **param_2,undefined **param_3)

{
  char cVar1;
  longlong lVar2;
  undefined **ppuVar3;
  longlong local_60;
  ulonglong local_58;
  undefined **local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
LAB_140a4640a:
  while( true ) {
    if (param_3 == (undefined **)0x0) {
      return (undefined **)0x0;
    }
    ppuVar3 = param_2;
    local_58 = FUN_140721110(param_1,param_2,param_3);
    if ((local_58 & 1) != 0) break;
    if (ppuVar3 == (undefined **)0x0) {
      return &PTR_s_failed_to_write_whole_buffer_1410633c8;
    }
    if (param_3 < ppuVar3) {
      local_50 = ppuVar3;
      FUN_140e4bb30(ppuVar3,param_3,param_3,&PTR_s__rustc_48a229ceaefd4985c50990b14_141063430);
      do {
        invalidInstructionException();
      } while( true );
    }
    param_2 = (undefined **)((longlong)param_2 + (longlong)ppuVar3);
    param_3 = (undefined **)((longlong)param_3 - (longlong)ppuVar3);
  }
  switch((uint)ppuVar3 & 3) {
  case 0:
    cVar1 = *(char *)(ppuVar3 + 2);
    break;
  case 1:
    if (*(char *)((longlong)ppuVar3 + 0x1f) != '#') {
      return ppuVar3;
    }
    local_60 = (longlong)ppuVar3 - 1;
    FUN_14073adf0(&local_60);
    goto LAB_140a4640a;
  case 2:
    goto switchD_140a46438_caseD_2;
  case 3:
    cVar1 = (char)((ulonglong)ppuVar3 >> 0x20);
    if (0x2a < (ulonglong)ppuVar3 >> 0x20) {
      cVar1 = -1;
    }
  }
  if (cVar1 != '#') {
    return ppuVar3;
  }
  goto LAB_140a4640a;
switchD_140a46438_caseD_2:
  local_50 = ppuVar3;
  lVar2 = FUN_140730b30();
  cVar1 = (**(code **)(lVar2 + 0x10))((ulonglong)local_50 >> 0x20);
  if (cVar1 == '\0') {
    return local_50;
  }
  goto LAB_140a4640a;
}


/* address=140a46520 name=FUN_140a46520 */

ulonglong FUN_140a46520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = 0;
  local_20 = param_1;
  cVar1 = FUN_14072f9e0(&local_20,&PTR_FUN_141063e30,param_2,param_3);
  if (cVar1 == '\0') {
    if (local_18 != 0) {
      if ((1 < ((uint)local_18 & 3) - 2) && ((local_18 & 3) != 0)) {
        local_28 = local_18 - 1;
        FUN_14073adf0(&local_28);
      }
    }
    return 0;
  }
  if (local_18 != 0) {
    return local_18;
  }
  FUN_140e4bb00("a formatting trait implementation returned an error when the underlying stream did not/rustc/48a229ceaefd4985c50990b14116b6d856af0985/library\\std\\src\\io\\mod.rs"
                ,0xad,&DAT_141063f00);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140a465e0 name=FUN_140a465e0 */

void FUN_140a465e0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38 [2];
  longlong local_28;
  
  FUN_140a48ab0(local_38,param_1);
  if (local_38[0] != 0) {
    do {
      lVar3 = local_28;
      lVar2 = local_38[0];
      lVar1 = *(longlong *)(local_38[0] + 8 + local_28 * 0x18);
      if (lVar1 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(local_38[0] + local_28 * 0x18 + 0x10),lVar1,1);
      }
      FUN_14096b090(lVar2 + lVar3 * 0x48 + 0x110);
      FUN_140a48ab0(local_38,param_1);
    } while (local_38[0] != 0);
  }
  return;
}


/* address=140a46670 name=FUN_140a46670 */

void FUN_140a46670(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38 [2];
  longlong local_28;
  
  FUN_140a49270(local_38,param_1);
  if (local_38[0] != 0) {
    do {
      lVar3 = local_28;
      lVar2 = local_38[0];
      lVar1 = *(longlong *)(local_38[0] + 0x168 + local_28 * 0x18);
      if (lVar1 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(local_38[0] + local_28 * 0x18 + 0x170),lVar1,1);
      }
      FUN_140a46700(lVar2 + lVar3 * 0x20);
      FUN_140a49270(local_38,param_1);
    } while (local_38[0] != 0);
  }
  return;
}


/* address=140a46700 name=FUN_140a46700 */

void FUN_140a46700(undefined8 *param_1)

{
  longlong lVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  longlong *local_20;
  
  pplVar2 = (longlong **)(param_1 + 1);
  switch(*param_1) {
  case 0:
    local_20 = *pplVar2;
    lVar1 = local_20[0xe];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0xf],lVar1,1);
    }
    lVar1 = local_20[0x11];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x12],lVar1,1);
    }
    lVar1 = local_20[0x14];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x15],lVar1,1);
    }
    lVar1 = local_20[0x17];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x18],lVar1,1);
    }
    lVar1 = local_20[0x1a];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x1b],lVar1,1);
    }
    lVar1 = local_20[0x1d];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x1e],lVar1,1);
    }
    FUN_140a49770(local_20 + 0x21);
    uVar3 = 0x130;
    break;
  case 1:
    local_20 = *pplVar2;
    lVar1 = *local_20;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[1],lVar1,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    lVar1 = local_20[6];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[7],lVar1,1);
    }
    lVar1 = local_20[9];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[10],lVar1,1);
    }
    FUN_140a49770(local_20 + 0xc);
    uVar3 = 0x80;
    break;
  case 2:
    local_20 = *pplVar2;
    lVar1 = *local_20;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[1],lVar1,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    FUN_140a49770(local_20 + 6);
    goto LAB_140a469c3;
  case 3:
    local_20 = *pplVar2;
    lVar1 = *local_20;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[1],lVar1,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    lVar1 = local_20[6];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[7],lVar1,1);
    }
    lVar1 = local_20[9];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[10],lVar1,1);
    }
    lVar1 = local_20[0xc];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0xd],lVar1,1);
    }
    lVar1 = local_20[0xf];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x10],lVar1,1);
    }
    FUN_140a49770(local_20 + 0x12);
    uVar3 = 0xb8;
    break;
  case 4:
    local_20 = *pplVar2;
    lVar1 = *local_20;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[1],lVar1,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    FUN_140a49770(local_20 + 6);
    goto LAB_140a469c3;
  case 5:
    local_20 = *pplVar2;
    lVar1 = *local_20;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[1],lVar1,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    lVar1 = local_20[6];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[7],lVar1,1);
    }
    FUN_140a49770(local_20 + 0xc);
    uVar3 = 0x88;
    break;
  case 6:
    local_20 = *pplVar2;
    if (*local_20 != 0) {
      thunk_FUN_140704e90(local_20[1],*local_20,1);
    }
    lVar1 = local_20[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[4],lVar1,1);
    }
    lVar1 = local_20[6];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[7],lVar1,1);
    }
    lVar1 = local_20[9];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[10],lVar1,1);
    }
    lVar1 = local_20[0xc];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0xd],lVar1,1);
    }
    lVar1 = local_20[0xf];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x10],lVar1,1);
    }
    lVar1 = local_20[0x12];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x13],lVar1,1);
    }
    lVar1 = local_20[0x15];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[0x16],lVar1,1);
    }
    FUN_140a49770(local_20 + 0x1a);
    uVar3 = 0xf0;
    break;
  case 7:
    local_20 = *pplVar2;
    FUN_140a49770();
    FUN_140a49770(local_20 + 3);
    FUN_140a49770(local_20 + 6);
LAB_140a469c3:
    uVar3 = 0x48;
    break;
  case 8:
    local_20 = *pplVar2;
    lVar1 = local_20[4];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(local_20[5],lVar1,1);
    }
    FUN_140a49670(local_20 + 0x10);
    if (local_20[7] != -1) {
      FUN_14096b090(local_20 + 7);
    }
    uVar3 = 0x98;
    break;
  default:
    FUN_140a49770();
    return;
  }
  thunk_FUN_140704e90(local_20,uVar3,8);
  return;
}


/* address=140a46ea0 name=FUN_140a46ea0 */

void FUN_140a46ea0(undefined (*param_1) [16],longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined8 *local_c8;
  undefined (*local_c0) [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined auStack_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_c0 = param_1;
  if (param_3 == 0) {
    FUN_140081a90();
    puVar8 = (undefined8 *)thunk_FUN_140704e30(0x220,8);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_140e4b571(8,0x220);
      do {
        invalidInstructionException();
      } while( true );
    }
    *puVar8 = 0;
    *(undefined2 *)((longlong)puVar8 + 0x21a) = 0;
    _auStack_98 = ZEXT816(0);
    lVar10 = 0;
    uVar11 = 0;
    local_a0 = puVar8;
    if (*(short *)(param_2 + 0x21a) != 0) {
      do {
        FUN_140728970(&local_68,param_2 + 8 + uVar11 * 0x18);
        local_4b = 1;
        FUN_140728970(&local_e0,param_2 + 0x110 + uVar11 * 0x18);
        uVar1 = *(ushort *)((longlong)puVar8 + 0x21a);
        if (10 < uVar1) {
          FUN_140e4bae0(&DAT_1410c3ad0,0x20,&PTR_s__rustc_48a229ceaefd4985c50990b14_1410c3af0);
          goto LAB_140a472db;
        }
        uVar11 = uVar11 + 1;
        *(ushort *)((longlong)puVar8 + 0x21a) = uVar1 + 1;
        uVar3 = (ulonglong)uVar1;
        puVar8[uVar3 * 3 + 3] = local_58;
        puVar9 = puVar8 + uVar3 * 3 + 1;
        *(undefined4 *)puVar9 = local_68;
        *(undefined4 *)((longlong)puVar9 + 4) = uStack_64;
        *(undefined4 *)(puVar9 + 1) = uStack_60;
        *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_5c;
        puVar8[uVar3 * 3 + 0x24] = local_d0;
        puVar9 = puVar8 + uVar3 * 3 + 0x22;
        *(undefined4 *)puVar9 = local_e0;
        *(undefined4 *)((longlong)puVar9 + 4) = uStack_dc;
        *(undefined4 *)(puVar9 + 1) = uStack_d8;
        *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_d4;
        lVar10 = lVar10 + 1;
        uStack_90 = lVar10;
      } while (uVar11 < *(ushort *)(param_2 + 0x21a));
    }
    *(undefined8 *)local_c0[1] = uStack_90;
    local_b8._0_4_ = (undefined4)local_a0;
    local_b8._4_4_ = local_a0._4_4_;
    uStack_b0._0_4_ = auStack_98._0_4_;
    uStack_b0._4_4_ = auStack_98._4_4_;
LAB_140a4722f:
    auVar2._4_4_ = local_b8._4_4_;
    auVar2._0_4_ = (undefined4)local_b8;
    auVar2._8_4_ = (undefined4)uStack_b0;
    auVar2._12_4_ = uStack_b0._4_4_;
    *local_c0 = auVar2;
    return;
  }
  FUN_140a46ea0(&local_b8,*(undefined8 *)(param_2 + 0x220),param_3 + -1);
  lVar10 = uStack_b0;
  if (local_b8 == (undefined8 *)0x0) {
    FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063588);
  }
  else {
    FUN_140081a90();
    puVar8 = (undefined8 *)thunk_FUN_140704e30(0x280,8);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_140e4b571(8,0x280);
    }
    else {
      *puVar8 = 0;
      *(undefined2 *)((longlong)puVar8 + 0x21a) = 0;
      puVar8[0x44] = local_b8;
      uStack_b0 = uStack_b0 + 1;
      local_c8 = puVar8;
      if (uStack_b0 != 0) {
        *local_b8 = puVar8;
        *(undefined2 *)(local_b8 + 0x43) = 0;
        uVar11 = 0;
        local_b8 = puVar8;
        if (*(short *)(param_2 + 0x21a) != 0) {
          do {
            FUN_140728970(&local_a0,param_2 + 8 + uVar11 * 0x18);
            local_49 = 1;
            FUN_140728970(&local_68,param_2 + 0x110 + uVar11 * 0x18);
            uVar11 = uVar11 + 1;
            local_4a = 1;
            FUN_140a46ea0(&local_e0,*(undefined8 *)(param_2 + 0x220 + uVar11 * 8),param_3 + -1);
            uVar7 = local_58;
            lVar5 = local_d0;
            puVar9 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
            local_88 = local_a0;
            local_78 = auStack_98;
            uVar6 = uStack_90;
            local_80 = CONCAT44(uStack_64,local_68);
            local_70 = CONCAT44(uStack_5c,uStack_60);
            if (puVar9 == (undefined8 *)0x0) {
              FUN_140081a90();
              puVar9 = (undefined8 *)thunk_FUN_140704e30(0x220,8);
              if (puVar9 == (undefined8 *)0x0) {
                local_4c = 1;
                FUN_140e4b571(8,0x220);
                goto LAB_140a472db;
              }
              *puVar9 = 0;
              *(undefined2 *)((longlong)puVar9 + 0x21a) = 0;
              if (lVar10 != 0) goto LAB_140a47246;
            }
            else if (CONCAT44(uStack_d4,uStack_d8) != lVar10) {
LAB_140a47246:
              FUN_140e4bae0(&DAT_1410c3b08,0x30,&PTR_s__rustc_48a229ceaefd4985c50990b14_1410c3b38);
              goto LAB_140a472db;
            }
            uVar1 = *(ushort *)((longlong)local_c8 + 0x21a);
            if (10 < uVar1) {
              FUN_140e4bae0(&DAT_1410c3ad0,0x20,&PTR_s__rustc_48a229ceaefd4985c50990b14_1410c3b50);
              goto LAB_140a472db;
            }
            *(ushort *)((longlong)local_c8 + 0x21a) = uVar1 + 1;
            lVar4 = (ulonglong)((uint)uVar1 * 8) * 3;
            *(undefined8 *)((longlong)puVar8 + lVar4 + 8) = local_88;
            *(undefined8 *)((longlong)puVar8 + lVar4 + 0x10) = local_78;
            *(undefined8 *)((longlong)puVar8 + lVar4 + 0x18) = uVar6;
            *(undefined8 *)((longlong)puVar8 + lVar4 + 0x110) = local_80;
            *(undefined8 *)((longlong)puVar8 + lVar4 + 0x118) = local_70;
            *(undefined8 *)((longlong)puVar8 + lVar4 + 0x120) = uVar7;
            *(undefined8 **)((longlong)local_c8 + (ulonglong)((uint)uVar1 * 8) + 0x228) = puVar9;
            *puVar9 = local_c8;
            *(ushort *)(puVar9 + 0x43) = uVar1 + 1;
            local_a8 = local_a8 + lVar5 + 1;
          } while (uVar11 < *(ushort *)(param_2 + 0x21a));
        }
        *(longlong *)local_c0[1] = local_a8;
        goto LAB_140a4722f;
      }
      FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_1410c3978);
    }
  }
LAB_140a472db:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140a47670 name=FUN_140a47670 */

void FUN_140a47670(undefined (*param_1) [16],longlong param_2,longlong param_3)

{
  undefined auVar1 [16];
  longlong lVar2;
  undefined local_160 [24];
  longlong local_148;
  longlong local_140;
  undefined local_e8 [72];
  undefined8 *local_a0;
  undefined (*local_98) [16];
  undefined8 local_90;
  undefined auStack_88 [16];
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = param_1;
  if (param_3 == 0) {
    FUN_140081a90();
    local_90 = (undefined8 *)thunk_FUN_140704e30(0x430,8);
    if (local_90 == (undefined8 *)0x0) {
      FUN_140e4b571(8,0x430);
      do {
        invalidInstructionException();
      } while( true );
    }
    *local_90 = 0;
    *(undefined2 *)((longlong)local_90 + 0x42a) = 0;
    auStack_88 = ZEXT816(0);
    if (*(short *)(param_2 + 0x42a) != 0) {
      FUN_140728970(local_e8,param_2 + 8);
      lVar2 = *(longlong *)(param_2 + 0x110);
      if (-1 < lVar2) {
        lVar2 = 5;
      }
                    /* WARNING: Could not recover jumptable at 0x000140a47a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_14106363c + *(int *)(&DAT_14106363c + lVar2 * 4)))
                (&DAT_14106363c + *(int *)(&DAT_14106363c + lVar2 * 4));
      return;
    }
    *(undefined8 *)local_98[1] = 0;
    local_90._4_4_ = (undefined4)((ulonglong)local_90 >> 0x20);
    lVar2 = 0;
    local_78._0_4_ = (undefined4)local_90;
    local_78._4_4_ = local_90._4_4_;
LAB_140a47bf7:
    auVar1._4_4_ = local_78._4_4_;
    auVar1._0_4_ = (undefined4)local_78;
    auVar1._8_4_ = (int)lVar2;
    auVar1._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    *local_98 = auVar1;
    return;
  }
  FUN_140a47670(&local_78,*(undefined8 *)(param_2 + 0x430),param_3 + -1);
  if (local_78 == (undefined8 *)0x0) {
    FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063588);
  }
  else {
    FUN_140081a90();
    local_a0 = (undefined8 *)thunk_FUN_140704e30(0x490,8);
    if (local_a0 == (undefined8 *)0x0) {
      FUN_140e4b571(8,0x490);
    }
    else {
      *local_a0 = 0;
      *(undefined2 *)((longlong)local_a0 + 0x42a) = 0;
      local_a0[0x86] = local_78;
      lVar2 = lStack_70 + 1;
      if (lVar2 != 0) {
        local_140 = lStack_70;
        *local_78 = local_a0;
        *(undefined2 *)(local_78 + 0x85) = 0;
        if (*(short *)(param_2 + 0x42a) != 0) {
          local_148 = param_3 + -1;
          local_78 = local_a0;
          lStack_70 = lVar2;
          FUN_140728970(local_160,param_2 + 8);
          lVar2 = *(longlong *)(param_2 + 0x110);
          if (-1 < lVar2) {
            lVar2 = 5;
          }
                    /* WARNING: Could not recover jumptable at 0x000140a477bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_141063624 + *(int *)(&DAT_141063624 + lVar2 * 4)))
                    (&DAT_141063624 + *(int *)(&DAT_141063624 + lVar2 * 4));
          return;
        }
        *(undefined8 *)local_98[1] = local_68;
        local_78._0_4_ = SUB84(local_a0,0);
        local_78._4_4_ = (undefined4)((ulonglong)local_a0 >> 0x20);
        goto LAB_140a47bf7;
      }
      FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_1410c3978);
    }
  }
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140a48000 name=FUN_140a48000 */

undefined8 * FUN_140a48000(undefined8 *param_1,void **param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  void *_Buf1;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  void *pvVar16;
  longlong lVar17;
  ulonglong _Size;
  void *pvVar18;
  void **unaff_R13;
  void **ppvVar19;
  bool bVar20;
  longlong local_b8;
  void *pvStack_b0;
  longlong local_a8;
  void **local_a0;
  void *local_98;
  undefined8 local_90;
  void **local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [32];
  
  pvVar18 = *param_2;
  if (pvVar18 != (void *)0x0) {
    pvVar16 = param_2[1];
    _Buf1 = (void *)param_3[1];
    uVar3 = param_3[2];
    do {
      uVar2 = *(ushort *)((longlong)pvVar18 + 0x21a);
      lVar15 = (ulonglong)((uint)uVar2 * 8) * 3;
      ppvVar19 = (void **)0xffffffffffffffff;
      lVar14 = (longlong)pvVar18 + 8;
      do {
        local_88 = (void **)(ulonglong)uVar2;
        if (lVar15 == 0) goto LAB_140a480c5;
        uVar4 = *(ulonglong *)(lVar14 + 0x10);
        _Size = uVar4;
        if (uVar3 < uVar4) {
          _Size = uVar3;
        }
        iVar13 = memcmp(_Buf1,*(void **)(lVar14 + 8),_Size);
        lVar17 = uVar3 - uVar4;
        if (iVar13 != 0) {
          lVar17 = (longlong)iVar13;
        }
        ppvVar19 = (void **)((longlong)ppvVar19 + 1);
        lVar15 = lVar15 + -0x18;
        lVar14 = lVar14 + 0x18;
      } while ((char)((0 < lVar17) - (lVar17 < 0)) == '\x01');
      local_88 = ppvVar19;
      if (0 < lVar17 == lVar17 < 0) {
        param_2 = ppvVar19;
        if (*param_3 != 0) {
          thunk_FUN_140704e90(_Buf1,*param_3,1);
        }
        goto LAB_140a481aa;
      }
LAB_140a480c5:
      bVar20 = pvVar16 == (void *)0x0;
      pvVar16 = (void *)((longlong)pvVar16 + -1);
      if (bVar20) goto LAB_140a48186;
      pvVar18 = *(void **)((longlong)pvVar18 + (longlong)local_88 * 8 + 0x220);
    } while( true );
  }
  local_b8 = *param_3;
  _Buf1 = (void *)param_3[1];
  local_98 = (void *)0x0;
  local_88 = unaff_R13;
joined_r0x000140a48117:
  pvVar18 = _Buf1;
  if (local_b8 == -1) {
LAB_140a481aa:
    uVar5 = *(undefined8 *)((longlong)pvVar18 + (longlong)param_2 * 0x18 + 0x120);
    puVar1 = (undefined4 *)((longlong)pvVar18 + (longlong)param_2 * 0x18 + 0x110);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    *(undefined8 *)((longlong)pvVar18 + (longlong)param_2 * 0x18 + 0x120) =
         *(undefined8 *)(param_4 + 4);
    uVar10 = param_4[1];
    uVar11 = param_4[2];
    uVar12 = param_4[3];
    puVar1 = (undefined4 *)((longlong)pvVar18 + (longlong)param_2 * 0x18 + 0x110);
    *puVar1 = *param_4;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    param_1[2] = uVar5;
    *(undefined4 *)param_1 = uVar6;
    *(undefined4 *)((longlong)param_1 + 4) = uVar7;
    *(undefined4 *)(param_1 + 1) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar9;
  }
  else {
    local_a8 = param_3[2];
    local_90 = 0;
    local_68 = *(undefined8 *)(param_4 + 4);
    local_78 = *param_4;
    uStack_74 = param_4[1];
    uStack_70 = param_4[2];
    uStack_6c = param_4[3];
    pvStack_b0 = pvVar18;
    local_a0 = param_2;
    FUN_140a45980(local_60,&local_b8,&local_78);
    *param_1 = 0xffffffffffffffff;
  }
  return param_1;
LAB_140a48186:
  local_b8 = *param_3;
  local_98 = pvVar18;
  goto joined_r0x000140a48117;
}


/* address=140a48210 name=FUN_140a48210 */

undefined8 * FUN_140a48210(undefined8 *param_1,void **param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  void *_Buf1;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
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
  int iVar37;
  longlong lVar38;
  void *pvVar39;
  longlong lVar40;
  ulonglong _Size;
  void *pvVar41;
  void **unaff_R13;
  void **ppvVar42;
  longlong lVar43;
  bool bVar44;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_98;
  void *local_90;
  longlong local_88;
  void **local_80;
  void *local_78;
  undefined8 local_70;
  void **local_68;
  undefined local_60 [32];
  
  pvVar41 = *param_2;
  if (pvVar41 != (void *)0x0) {
    pvVar39 = param_2[1];
    _Buf1 = (void *)param_3[1];
    uVar3 = param_3[2];
    do {
      uVar2 = *(ushort *)((longlong)pvVar41 + 0x42a);
      lVar43 = (ulonglong)((uint)uVar2 * 8) * 3;
      ppvVar42 = (void **)0xffffffffffffffff;
      lVar38 = (longlong)pvVar41 + 8;
      do {
        local_68 = (void **)(ulonglong)uVar2;
        if (lVar43 == 0) goto LAB_140a482d5;
        uVar4 = *(ulonglong *)(lVar38 + 0x10);
        _Size = uVar4;
        if (uVar3 < uVar4) {
          _Size = uVar3;
        }
        iVar37 = memcmp(_Buf1,*(void **)(lVar38 + 8),_Size);
        lVar40 = uVar3 - uVar4;
        if (iVar37 != 0) {
          lVar40 = (longlong)iVar37;
        }
        ppvVar42 = (void **)((longlong)ppvVar42 + 1);
        lVar43 = lVar43 + -0x18;
        lVar38 = lVar38 + 0x18;
      } while ((char)((0 < lVar40) - (lVar40 < 0)) == '\x01');
      local_68 = ppvVar42;
      if (0 < lVar40 == lVar40 < 0) {
        param_2 = ppvVar42;
        if (*param_3 != 0) {
          thunk_FUN_140704e90(_Buf1,*param_3,1);
        }
        goto LAB_140a483ed;
      }
LAB_140a482d5:
      bVar44 = pvVar39 == (void *)0x0;
      pvVar39 = (void *)((longlong)pvVar39 + -1);
      if (bVar44) goto LAB_140a483c9;
      pvVar41 = *(void **)((longlong)pvVar41 + (longlong)local_68 * 8 + 0x430);
    } while( true );
  }
  local_98 = *param_3;
  _Buf1 = (void *)param_3[1];
  local_78 = (void *)0x0;
  local_68 = unaff_R13;
joined_r0x000140a48327:
  pvVar41 = _Buf1;
  if (local_98 == -1) {
LAB_140a483ed:
    uVar5 = *(undefined8 *)((longlong)pvVar41 + (longlong)param_2 * 0x48 + 0x150);
    puVar1 = (undefined4 *)((longlong)pvVar41 + (longlong)param_2 * 0x48 + 0x110);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar1 = (undefined4 *)((longlong)pvVar41 + (longlong)param_2 * 0x48 + 0x120);
    uVar10 = *puVar1;
    uVar11 = puVar1[1];
    uVar12 = puVar1[2];
    uVar13 = puVar1[3];
    puVar1 = (undefined4 *)((longlong)pvVar41 + (longlong)param_2 * 0x48 + 0x130);
    uVar14 = *puVar1;
    uVar15 = puVar1[1];
    uVar16 = puVar1[2];
    uVar17 = puVar1[3];
    puVar1 = (undefined4 *)((longlong)pvVar41 + (longlong)param_2 * 0x48 + 0x140);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    uVar20 = puVar1[2];
    uVar21 = puVar1[3];
    *(undefined8 *)((longlong)pvVar41 + (longlong)param_2 * 0x48 + 0x150) =
         *(undefined8 *)(param_4 + 0x10);
    uVar22 = *param_4;
    uVar23 = param_4[1];
    uVar24 = param_4[2];
    uVar25 = param_4[3];
    uVar26 = param_4[4];
    uVar27 = param_4[5];
    uVar28 = param_4[6];
    uVar29 = param_4[7];
    uVar30 = param_4[8];
    uVar31 = param_4[9];
    uVar32 = param_4[10];
    uVar33 = param_4[0xb];
    uVar34 = param_4[0xd];
    uVar35 = param_4[0xe];
    uVar36 = param_4[0xf];
    puVar1 = (undefined4 *)((longlong)pvVar41 + (longlong)param_2 * 0x48 + 0x140);
    *puVar1 = param_4[0xc];
    puVar1[1] = uVar34;
    puVar1[2] = uVar35;
    puVar1[3] = uVar36;
    puVar1 = (undefined4 *)((longlong)pvVar41 + (longlong)param_2 * 0x48 + 0x130);
    *puVar1 = uVar30;
    puVar1[1] = uVar31;
    puVar1[2] = uVar32;
    puVar1[3] = uVar33;
    puVar1 = (undefined4 *)((longlong)pvVar41 + (longlong)param_2 * 0x48 + 0x120);
    *puVar1 = uVar26;
    puVar1[1] = uVar27;
    puVar1[2] = uVar28;
    puVar1[3] = uVar29;
    puVar1 = (undefined4 *)((longlong)pvVar41 + (longlong)param_2 * 0x48 + 0x110);
    *puVar1 = uVar22;
    puVar1[1] = uVar23;
    puVar1[2] = uVar24;
    puVar1[3] = uVar25;
    param_1[8] = uVar5;
    *(undefined4 *)param_1 = uVar6;
    *(undefined4 *)((longlong)param_1 + 4) = uVar7;
    *(undefined4 *)(param_1 + 1) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar9;
    *(undefined4 *)(param_1 + 2) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar11;
    *(undefined4 *)(param_1 + 3) = uVar12;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar13;
    *(undefined4 *)(param_1 + 4) = uVar14;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar15;
    *(undefined4 *)(param_1 + 5) = uVar16;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar17;
    *(undefined4 *)(param_1 + 6) = uVar18;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar19;
    *(undefined4 *)(param_1 + 7) = uVar20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar21;
  }
  else {
    local_88 = param_3[2];
    local_70 = 0;
    local_a8 = *(undefined8 *)(param_4 + 0x10);
    local_e8 = *param_4;
    uStack_e4 = param_4[1];
    uStack_e0 = param_4[2];
    uStack_dc = param_4[3];
    local_d8 = param_4[4];
    uStack_d4 = param_4[5];
    uStack_d0 = param_4[6];
    uStack_cc = param_4[7];
    local_c8 = param_4[8];
    uStack_c4 = param_4[9];
    uStack_c0 = param_4[10];
    uStack_bc = param_4[0xb];
    local_b8 = param_4[0xc];
    uStack_b4 = param_4[0xd];
    uStack_b0 = param_4[0xe];
    uStack_ac = param_4[0xf];
    local_90 = pvVar41;
    local_80 = param_2;
    FUN_140a45b30(local_60,&local_98,&local_e8);
    *param_1 = 0xffffffffffffffff;
  }
  return param_1;
LAB_140a483c9:
  local_98 = *param_3;
  local_78 = pvVar41;
  goto joined_r0x000140a48327;
}


/* address=140a484d0 name=FUN_140a484d0 */

undefined8 * FUN_140a484d0(undefined8 *param_1,void **param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  void *_Buf1;
  ulonglong uVar3;
  ulonglong uVar4;
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
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  longlong lVar21;
  void *pvVar22;
  longlong lVar23;
  ulonglong _Size;
  void *pvVar24;
  void **unaff_R13;
  void **ppvVar25;
  longlong lVar26;
  bool bVar27;
  longlong local_c8;
  void *pvStack_c0;
  longlong local_b8;
  void **ppvStack_b0;
  void *local_a8;
  undefined8 local_a0;
  void **local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined local_60 [32];
  
  pvVar24 = *param_2;
  if (pvVar24 != (void *)0x0) {
    pvVar22 = param_2[1];
    _Buf1 = (void *)param_3[1];
    uVar3 = param_3[2];
    do {
      uVar2 = *(ushort *)((longlong)pvVar24 + 0x272);
      lVar26 = (ulonglong)((uint)uVar2 * 8) * 3;
      ppvVar25 = (void **)0xffffffffffffffff;
      lVar21 = (longlong)pvVar24 + 0x168;
      do {
        local_98 = (void **)(ulonglong)uVar2;
        if (lVar26 == 0) goto LAB_140a48595;
        uVar4 = *(ulonglong *)(lVar21 + 0x10);
        _Size = uVar4;
        if (uVar3 < uVar4) {
          _Size = uVar3;
        }
        iVar20 = memcmp(_Buf1,*(void **)(lVar21 + 8),_Size);
        lVar23 = uVar3 - uVar4;
        if (iVar20 != 0) {
          lVar23 = (longlong)iVar20;
        }
        ppvVar25 = (void **)((longlong)ppvVar25 + 1);
        lVar26 = lVar26 + -0x18;
        lVar21 = lVar21 + 0x18;
      } while ((char)((0 < lVar23) - (lVar23 < 0)) == '\x01');
      local_98 = ppvVar25;
      if (0 < lVar23 == lVar23 < 0) {
        param_2 = ppvVar25;
        if (*param_3 != 0) {
          thunk_FUN_140704e90(_Buf1,*param_3,1);
        }
        goto LAB_140a4867b;
      }
LAB_140a48595:
      bVar27 = pvVar22 == (void *)0x0;
      pvVar22 = (void *)((longlong)pvVar22 + -1);
      if (bVar27) goto LAB_140a48657;
      pvVar24 = *(void **)((longlong)pvVar24 + (longlong)local_98 * 8 + 0x278);
    } while( true );
  }
  local_c8 = *param_3;
  _Buf1 = (void *)param_3[1];
  local_a8 = (void *)0x0;
  local_98 = unaff_R13;
joined_r0x000140a485e7:
  pvVar24 = _Buf1;
  if (local_c8 == -1) {
LAB_140a4867b:
    lVar26 = (longlong)param_2 * 0x20;
    puVar1 = (undefined4 *)((longlong)pvVar24 + lVar26);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar1 = (undefined4 *)((longlong)pvVar24 + lVar26 + 0x10);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    uVar11 = puVar1[2];
    uVar12 = puVar1[3];
    uVar13 = *param_4;
    uVar14 = param_4[1];
    uVar15 = param_4[2];
    uVar16 = param_4[3];
    uVar17 = param_4[5];
    uVar18 = param_4[6];
    uVar19 = param_4[7];
    puVar1 = (undefined4 *)((longlong)pvVar24 + lVar26 + 0x10);
    *puVar1 = param_4[4];
    puVar1[1] = uVar17;
    puVar1[2] = uVar18;
    puVar1[3] = uVar19;
    puVar1 = (undefined4 *)((longlong)pvVar24 + lVar26);
    *puVar1 = uVar13;
    puVar1[1] = uVar14;
    puVar1[2] = uVar15;
    puVar1[3] = uVar16;
    *(undefined4 *)(param_1 + 2) = uVar9;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar10;
    *(undefined4 *)(param_1 + 3) = uVar11;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar12;
    *(undefined4 *)param_1 = uVar5;
    *(undefined4 *)((longlong)param_1 + 4) = uVar6;
    *(undefined4 *)(param_1 + 1) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
  }
  else {
    local_b8 = param_3[2];
    local_a0 = 0;
    local_88 = *param_4;
    uStack_84 = param_4[1];
    uStack_80 = param_4[2];
    uStack_7c = param_4[3];
    local_78 = param_4[4];
    uStack_74 = param_4[5];
    uStack_70 = param_4[6];
    uStack_6c = param_4[7];
    pvStack_c0 = pvVar24;
    ppvStack_b0 = param_2;
    FUN_140a45d00(local_60,&local_c8,&local_88);
    *param_1 = 0xffffffffffffffff;
  }
  return param_1;
LAB_140a48657:
  local_c8 = *param_3;
  local_a8 = pvVar24;
  goto joined_r0x000140a485e7;
}


/* address=140a486d0 name=FUN_140a486d0 */

void FUN_140a486d0(longlong **param_1,longlong *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  if (param_2[8] == 0) {
    lVar12 = *param_2;
    puVar2 = (undefined8 *)param_2[1];
    puVar7 = (undefined8 *)param_2[2];
    uVar15 = param_2[3];
    *param_2 = 0;
    if (lVar12 == 1) {
      if (puVar2 == (undefined8 *)0x0) {
        if (uVar15 != 0) {
          uVar14 = uVar15;
          if ((uVar15 & 7) != 0) {
            uVar14 = 0;
            do {
              puVar7 = (undefined8 *)puVar7[0x44];
              uVar14 = uVar14 + 1;
            } while ((uVar15 & 7) != uVar14);
            uVar14 = uVar15 - uVar14;
          }
          if (7 < uVar15) {
            do {
              puVar7 = *(undefined8 **)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar7[0x44] + 0x220) + 0x220) + 0x220)
                              + 0x220) + 0x220) + 0x220) + 0x220);
              uVar14 = uVar14 - 8;
            } while (uVar14 != 0);
          }
        }
        puVar4 = (undefined8 *)*puVar7;
        puVar2 = puVar7;
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)*puVar2;
      }
      while (puVar3 = puVar4, puVar3 != (undefined8 *)0x0) {
        bVar16 = puVar7 == (undefined8 *)0x0;
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        uVar10 = 0x280;
        if (bVar16) {
          uVar10 = 0x220;
        }
        thunk_FUN_140704e90(puVar2,uVar10,8);
        puVar2 = puVar3;
        puVar4 = (undefined8 *)*puVar3;
      }
      uVar10 = 0x280;
      if (puVar7 == (undefined8 *)0x0) {
        uVar10 = 0x220;
      }
      thunk_FUN_140704e90(puVar2,uVar10,8);
    }
    *param_1 = (longlong *)0x0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*(int *)param_2 != 1) {
    FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063510);
    do {
      invalidInstructionException();
    } while( true );
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)param_2[2];
    uVar15 = param_2[3];
    if (uVar15 != 0) {
      uVar14 = uVar15;
      if ((uVar15 & 7) != 0) {
        uVar14 = 0;
        do {
          plVar9 = (longlong *)plVar9[0x44];
          uVar14 = uVar14 + 1;
        } while ((uVar15 & 7) != uVar14);
        uVar14 = uVar15 - uVar14;
      }
      if (7 < uVar15) {
        do {
          plVar9 = *(longlong **)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(plVar9[0x44] + 0x220) + 0x220) + 0x220) +
                          0x220) + 0x220) + 0x220) + 0x220);
          uVar14 = uVar14 - 8;
        } while (uVar14 != 0);
      }
    }
    *param_2 = 1;
    param_2[1] = (longlong)plVar9;
    *(undefined (*) [16])(param_2 + 2) = ZEXT816(0);
  }
  plVar5 = (longlong *)param_2[2];
  plVar11 = (longlong *)param_2[3];
  if ((longlong *)(ulonglong)*(ushort *)((longlong)plVar9 + 0x21a) <= plVar11) {
    do {
      plVar6 = (longlong *)*plVar9;
      if (plVar6 == (longlong *)0x0) {
        uVar10 = 0x280;
        if (plVar5 == (longlong *)0x0) {
          uVar10 = 0x220;
        }
        thunk_FUN_140704e90(plVar9,uVar10,8);
        FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_1410635a0);
        do {
          invalidInstructionException();
        } while( true );
      }
      plVar13 = (longlong *)((longlong)plVar5 + 1);
      uVar1 = *(ushort *)(plVar9 + 0x43);
      plVar11 = (longlong *)(ulonglong)uVar1;
      uVar10 = 0x280;
      if (plVar5 == (longlong *)0x0) {
        uVar10 = 0x220;
      }
      thunk_FUN_140704e90(plVar9,uVar10,8);
      plVar5 = plVar13;
      plVar9 = plVar6;
    } while (*(ushort *)((longlong)plVar6 + 0x21a) <= uVar1);
  }
  if (plVar5 == (longlong *)0x0) {
    lVar12 = (longlong)plVar11 + 1;
    plVar6 = plVar9;
  }
  else {
    pplVar8 = (longlong **)(plVar9 + (longlong)plVar11 + 0x45);
    plVar6 = plVar5;
    plVar13 = plVar5;
    if (((ulonglong)plVar5 & 7) != 0) {
      uVar15 = 0;
      do {
        plVar6 = *pplVar8;
        pplVar8 = (longlong **)(plVar6 + 0x44);
        uVar15 = uVar15 + 1;
      } while (((ulonglong)plVar5 & 7) != uVar15);
      plVar13 = (longlong *)((longlong)plVar5 - uVar15);
    }
    lVar12 = 0;
    if ((longlong *)0x7 < plVar5) {
      do {
        lVar12 = 0;
        plVar6 = *(longlong **)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)((*pplVar8)[0x44] + 0x220) + 0x220) + 0x220) +
                      0x220) + 0x220) + 0x220);
        pplVar8 = (longlong **)(plVar6 + 0x44);
        plVar13 = plVar13 + -1;
      } while (plVar13 != (longlong *)0x0);
    }
  }
  *param_1 = plVar9;
  param_1[1] = plVar5;
  param_1[2] = plVar11;
  param_2[1] = (longlong)plVar6;
  param_2[2] = 0;
  param_2[3] = lVar12;
  return;
}


/* address=140a48ab0 name=FUN_140a48ab0 */

void FUN_140a48ab0(longlong **param_1,longlong *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  if (param_2[8] == 0) {
    lVar12 = *param_2;
    puVar2 = (undefined8 *)param_2[1];
    puVar7 = (undefined8 *)param_2[2];
    uVar15 = param_2[3];
    *param_2 = 0;
    if (lVar12 == 1) {
      if (puVar2 == (undefined8 *)0x0) {
        if (uVar15 != 0) {
          uVar14 = uVar15;
          if ((uVar15 & 7) != 0) {
            uVar14 = 0;
            do {
              puVar7 = (undefined8 *)puVar7[0x86];
              uVar14 = uVar14 + 1;
            } while ((uVar15 & 7) != uVar14);
            uVar14 = uVar15 - uVar14;
          }
          if (7 < uVar15) {
            do {
              puVar7 = *(undefined8 **)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar7[0x86] + 0x430) + 0x430) + 0x430)
                              + 0x430) + 0x430) + 0x430) + 0x430);
              uVar14 = uVar14 - 8;
            } while (uVar14 != 0);
          }
        }
        puVar4 = (undefined8 *)*puVar7;
        puVar2 = puVar7;
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)*puVar2;
      }
      while (puVar3 = puVar4, puVar3 != (undefined8 *)0x0) {
        bVar16 = puVar7 == (undefined8 *)0x0;
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        uVar10 = 0x490;
        if (bVar16) {
          uVar10 = 0x430;
        }
        thunk_FUN_140704e90(puVar2,uVar10,8);
        puVar2 = puVar3;
        puVar4 = (undefined8 *)*puVar3;
      }
      uVar10 = 0x490;
      if (puVar7 == (undefined8 *)0x0) {
        uVar10 = 0x430;
      }
      thunk_FUN_140704e90(puVar2,uVar10,8);
    }
    *param_1 = (longlong *)0x0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*(int *)param_2 != 1) {
    FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063510);
    do {
      invalidInstructionException();
    } while( true );
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)param_2[2];
    uVar15 = param_2[3];
    if (uVar15 != 0) {
      uVar14 = uVar15;
      if ((uVar15 & 7) != 0) {
        uVar14 = 0;
        do {
          plVar9 = (longlong *)plVar9[0x86];
          uVar14 = uVar14 + 1;
        } while ((uVar15 & 7) != uVar14);
        uVar14 = uVar15 - uVar14;
      }
      if (7 < uVar15) {
        do {
          plVar9 = *(longlong **)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(plVar9[0x86] + 0x430) + 0x430) + 0x430) +
                          0x430) + 0x430) + 0x430) + 0x430);
          uVar14 = uVar14 - 8;
        } while (uVar14 != 0);
      }
    }
    *param_2 = 1;
    param_2[1] = (longlong)plVar9;
    *(undefined (*) [16])(param_2 + 2) = ZEXT816(0);
  }
  plVar5 = (longlong *)param_2[2];
  plVar11 = (longlong *)param_2[3];
  if ((longlong *)(ulonglong)*(ushort *)((longlong)plVar9 + 0x42a) <= plVar11) {
    do {
      plVar6 = (longlong *)*plVar9;
      if (plVar6 == (longlong *)0x0) {
        uVar10 = 0x490;
        if (plVar5 == (longlong *)0x0) {
          uVar10 = 0x430;
        }
        thunk_FUN_140704e90(plVar9,uVar10,8);
        FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_1410635a0);
        do {
          invalidInstructionException();
        } while( true );
      }
      plVar13 = (longlong *)((longlong)plVar5 + 1);
      uVar1 = *(ushort *)(plVar9 + 0x85);
      plVar11 = (longlong *)(ulonglong)uVar1;
      uVar10 = 0x490;
      if (plVar5 == (longlong *)0x0) {
        uVar10 = 0x430;
      }
      thunk_FUN_140704e90(plVar9,uVar10,8);
      plVar5 = plVar13;
      plVar9 = plVar6;
    } while (*(ushort *)((longlong)plVar6 + 0x42a) <= uVar1);
  }
  if (plVar5 == (longlong *)0x0) {
    lVar12 = (longlong)plVar11 + 1;
    plVar6 = plVar9;
  }
  else {
    pplVar8 = (longlong **)(plVar9 + (longlong)plVar11 + 0x87);
    plVar6 = plVar5;
    plVar13 = plVar5;
    if (((ulonglong)plVar5 & 7) != 0) {
      uVar15 = 0;
      do {
        plVar6 = *pplVar8;
        pplVar8 = (longlong **)(plVar6 + 0x86);
        uVar15 = uVar15 + 1;
      } while (((ulonglong)plVar5 & 7) != uVar15);
      plVar13 = (longlong *)((longlong)plVar5 - uVar15);
    }
    lVar12 = 0;
    if ((longlong *)0x7 < plVar5) {
      do {
        lVar12 = 0;
        plVar6 = *(longlong **)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)((*pplVar8)[0x86] + 0x430) + 0x430) + 0x430) +
                      0x430) + 0x430) + 0x430);
        pplVar8 = (longlong **)(plVar6 + 0x86);
        plVar13 = plVar13 + -1;
      } while (plVar13 != (longlong *)0x0);
    }
  }
  *param_1 = plVar9;
  param_1[1] = plVar5;
  param_1[2] = plVar11;
  param_2[1] = (longlong)plVar6;
  param_2[2] = 0;
  param_2[3] = lVar12;
  return;
}


/* address=140a48e90 name=FUN_140a48e90 */

void FUN_140a48e90(longlong **param_1,longlong *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  if (param_2[8] == 0) {
    lVar12 = *param_2;
    puVar2 = (undefined8 *)param_2[1];
    puVar7 = (undefined8 *)param_2[2];
    uVar15 = param_2[3];
    *param_2 = 0;
    if (lVar12 == 1) {
      if (puVar2 == (undefined8 *)0x0) {
        if (uVar15 != 0) {
          uVar14 = uVar15;
          if ((uVar15 & 7) != 0) {
            uVar14 = 0;
            do {
              puVar7 = (undefined8 *)puVar7[0x2e];
              uVar14 = uVar14 + 1;
            } while ((uVar15 & 7) != uVar14);
            uVar14 = uVar15 - uVar14;
          }
          if (7 < uVar15) {
            do {
              puVar7 = *(undefined8 **)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(puVar7[0x2e] + 0x170) + 0x170) + 0x170)
                              + 0x170) + 0x170) + 0x170) + 0x170);
              uVar14 = uVar14 - 8;
            } while (uVar14 != 0);
          }
        }
        puVar4 = (undefined8 *)*puVar7;
        puVar2 = puVar7;
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar4 = (undefined8 *)*puVar2;
      }
      while (puVar3 = puVar4, puVar3 != (undefined8 *)0x0) {
        bVar16 = puVar7 == (undefined8 *)0x0;
        puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        uVar10 = 0x1d0;
        if (bVar16) {
          uVar10 = 0x170;
        }
        thunk_FUN_140704e90(puVar2,uVar10,8);
        puVar2 = puVar3;
        puVar4 = (undefined8 *)*puVar3;
      }
      uVar10 = 0x1d0;
      if (puVar7 == (undefined8 *)0x0) {
        uVar10 = 0x170;
      }
      thunk_FUN_140704e90(puVar2,uVar10,8);
    }
    *param_1 = (longlong *)0x0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*(int *)param_2 != 1) {
    FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063510);
    do {
      invalidInstructionException();
    } while( true );
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)param_2[2];
    uVar15 = param_2[3];
    if (uVar15 != 0) {
      uVar14 = uVar15;
      if ((uVar15 & 7) != 0) {
        uVar14 = 0;
        do {
          plVar9 = (longlong *)plVar9[0x2e];
          uVar14 = uVar14 + 1;
        } while ((uVar15 & 7) != uVar14);
        uVar14 = uVar15 - uVar14;
      }
      if (7 < uVar15) {
        do {
          plVar9 = *(longlong **)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(plVar9[0x2e] + 0x170) + 0x170) + 0x170) +
                          0x170) + 0x170) + 0x170) + 0x170);
          uVar14 = uVar14 - 8;
        } while (uVar14 != 0);
      }
    }
    *param_2 = 1;
    param_2[1] = (longlong)plVar9;
    *(undefined (*) [16])(param_2 + 2) = ZEXT816(0);
  }
  plVar5 = (longlong *)param_2[2];
  plVar11 = (longlong *)param_2[3];
  if ((longlong *)(ulonglong)*(ushort *)((longlong)plVar9 + 0x16a) <= plVar11) {
    do {
      plVar6 = (longlong *)*plVar9;
      if (plVar6 == (longlong *)0x0) {
        uVar10 = 0x1d0;
        if (plVar5 == (longlong *)0x0) {
          uVar10 = 0x170;
        }
        thunk_FUN_140704e90(plVar9,uVar10,8);
        FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_1410635a0);
        do {
          invalidInstructionException();
        } while( true );
      }
      plVar13 = (longlong *)((longlong)plVar5 + 1);
      uVar1 = *(ushort *)(plVar9 + 0x2d);
      plVar11 = (longlong *)(ulonglong)uVar1;
      uVar10 = 0x1d0;
      if (plVar5 == (longlong *)0x0) {
        uVar10 = 0x170;
      }
      thunk_FUN_140704e90(plVar9,uVar10,8);
      plVar5 = plVar13;
      plVar9 = plVar6;
    } while (*(ushort *)((longlong)plVar6 + 0x16a) <= uVar1);
  }
  if (plVar5 == (longlong *)0x0) {
    lVar12 = (longlong)plVar11 + 1;
    plVar6 = plVar9;
  }
  else {
    pplVar8 = (longlong **)(plVar9 + (longlong)plVar11 + 0x2f);
    plVar6 = plVar5;
    plVar13 = plVar5;
    if (((ulonglong)plVar5 & 7) != 0) {
      uVar15 = 0;
      do {
        plVar6 = *pplVar8;
        pplVar8 = (longlong **)(plVar6 + 0x2e);
        uVar15 = uVar15 + 1;
      } while (((ulonglong)plVar5 & 7) != uVar15);
      plVar13 = (longlong *)((longlong)plVar5 - uVar15);
    }
    lVar12 = 0;
    if ((longlong *)0x7 < plVar5) {
      do {
        lVar12 = 0;
        plVar6 = *(longlong **)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)((*pplVar8)[0x2e] + 0x170) + 0x170) + 0x170) +
                      0x170) + 0x170) + 0x170);
        pplVar8 = (longlong **)(plVar6 + 0x2e);
        plVar13 = plVar13 + -1;
      } while (plVar13 != (longlong *)0x0);
    }
  }
  *param_1 = plVar9;
  param_1[1] = plVar5;
  param_1[2] = plVar11;
  param_2[1] = (longlong)plVar6;
  param_2[2] = 0;
  param_2[3] = lVar12;
  return;
}


/* address=140a49270 name=FUN_140a49270 */

void FUN_140a49270(ulonglong *param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  if (param_2[8] == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar6 = param_2[2];
    uVar8 = param_2[3];
    *param_2 = 0;
    if (lVar2 == 1) {
      if (lVar3 == 0) {
        if (uVar8 != 0) {
          uVar10 = uVar8;
          if ((uVar8 & 7) != 0) {
            uVar10 = 0;
            do {
              lVar6 = *(longlong *)(lVar6 + 0x278);
              uVar10 = uVar10 + 1;
            } while ((uVar8 & 7) != uVar10);
            uVar10 = uVar8 - uVar10;
          }
          if (7 < uVar8) {
            do {
              lVar6 = *(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar6 + 0x278) + 0x278) + 0x278) +
                               0x278) + 0x278) + 0x278) + 0x278) + 0x278);
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
        }
        lVar2 = *(longlong *)(lVar6 + 0x160);
        lVar3 = lVar6;
        lVar6 = 0;
      }
      else {
        lVar2 = *(longlong *)(lVar3 + 0x160);
      }
      while (lVar4 = lVar2, lVar4 != 0) {
        bVar13 = lVar6 == 0;
        lVar6 = lVar6 + 1;
        uVar9 = 0x2d8;
        if (bVar13) {
          uVar9 = 0x278;
        }
        thunk_FUN_140704e90(lVar3,uVar9,8);
        lVar3 = lVar4;
        lVar2 = *(longlong *)(lVar4 + 0x160);
      }
      uVar9 = 0x2d8;
      if (lVar6 == 0) {
        uVar9 = 0x278;
      }
      thunk_FUN_140704e90(lVar3,uVar9,8);
    }
    *param_1 = 0;
    return;
  }
  param_2[8] = param_2[8] + -1;
  if (*(int *)param_2 != 1) {
    FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063510);
    do {
      invalidInstructionException();
    } while( true );
  }
  uVar8 = param_2[1];
  if (uVar8 == 0) {
    uVar8 = param_2[2];
    uVar10 = param_2[3];
    if (uVar10 != 0) {
      uVar11 = uVar10;
      if ((uVar10 & 7) != 0) {
        uVar11 = 0;
        do {
          uVar8 = *(ulonglong *)(uVar8 + 0x278);
          uVar11 = uVar11 + 1;
        } while ((uVar10 & 7) != uVar11);
        uVar11 = uVar10 - uVar11;
      }
      if (7 < uVar10) {
        do {
          uVar8 = *(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(uVar8 + 0x278) + 0x278) + 0x278) + 0x278)
                         + 0x278) + 0x278) + 0x278) + 0x278);
          uVar11 = uVar11 - 8;
        } while (uVar11 != 0);
      }
    }
    *param_2 = 1;
    param_2[1] = uVar8;
    *(undefined (*) [16])(param_2 + 2) = ZEXT816(0);
  }
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  if (*(ushort *)(uVar8 + 0x272) <= uVar11) {
    do {
      uVar5 = *(ulonglong *)(uVar8 + 0x160);
      if (uVar5 == 0) {
        uVar9 = 0x2d8;
        if (uVar10 == 0) {
          uVar9 = 0x278;
        }
        thunk_FUN_140704e90(uVar8,uVar9,8);
        FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_1410635a0);
        do {
          invalidInstructionException();
        } while( true );
      }
      uVar12 = uVar10 + 1;
      uVar1 = *(ushort *)(uVar8 + 0x270);
      uVar11 = (ulonglong)uVar1;
      uVar9 = 0x2d8;
      if (uVar10 == 0) {
        uVar9 = 0x278;
      }
      thunk_FUN_140704e90(uVar8,uVar9,8);
      uVar10 = uVar12;
      uVar8 = uVar5;
    } while (*(ushort *)(uVar5 + 0x272) <= uVar1);
  }
  if (uVar10 == 0) {
    lVar6 = uVar11 + 1;
    uVar5 = uVar8;
  }
  else {
    puVar7 = (ulonglong *)(uVar8 + uVar11 * 8 + 0x280);
    uVar5 = uVar10;
    uVar12 = uVar10;
    if ((uVar10 & 7) != 0) {
      uVar12 = 0;
      do {
        uVar5 = *puVar7;
        puVar7 = (ulonglong *)(uVar5 + 0x278);
        uVar12 = uVar12 + 1;
      } while ((uVar10 & 7) != uVar12);
      uVar12 = uVar10 - uVar12;
    }
    lVar6 = 0;
    if (7 < uVar10) {
      do {
        lVar6 = 0;
        uVar5 = *(ulonglong *)
                 (*(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(*puVar7 + 0x278) + 0x278) + 0x278)
                       + 0x278) + 0x278) + 0x278) + 0x278);
        puVar7 = (ulonglong *)(uVar5 + 0x278);
        uVar12 = uVar12 - 8;
      } while (uVar12 != 0);
    }
  }
  *param_1 = uVar8;
  param_1[1] = uVar10;
  param_1[2] = uVar11;
  param_2[1] = uVar5;
  param_2[2] = 0;
  param_2[3] = lVar6;
  return;
}


/* address=140a49670 name=FUN_140a49670 */

void FUN_140a49670(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_80 [2];
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_50 = param_1[1];
    local_28 = param_1[2];
    local_60 = 0;
    local_40 = 0;
    local_58 = lVar1;
    local_38 = lVar1;
    local_30 = local_50;
  }
  local_68 = (ulonglong)(lVar1 != 0);
  local_48 = local_68;
  FUN_140a486d0(local_80,&local_68);
  if (local_80[0] != 0) {
    do {
      lVar3 = local_70;
      lVar1 = local_80[0];
      lVar2 = *(longlong *)(local_80[0] + 8 + local_70 * 0x18);
      if (lVar2 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(local_80[0] + local_70 * 0x18 + 0x10),lVar2,1);
      }
      lVar1 = lVar1 + lVar3 * 0x18;
      lVar2 = *(longlong *)(lVar1 + 0x110);
      if (lVar2 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 0x118),lVar2,1);
      }
      FUN_140a486d0(local_80,&local_68);
    } while (local_80[0] != 0);
  }
  return;
}


/* address=140a49770 name=FUN_140a49770 */

void FUN_140a49770(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_50 = 0;
  }
  else {
    local_78 = param_1[1];
    local_50 = param_1[2];
    local_88 = 0;
    local_68 = 0;
    local_80 = lVar1;
    local_60 = lVar1;
    local_58 = local_78;
  }
  local_90 = (ulonglong)(lVar1 != 0);
  local_70 = local_90;
  FUN_140a48ab0(local_48,&local_90);
  if (local_48[0] != 0) {
    do {
      lVar3 = local_38;
      lVar2 = local_48[0];
      lVar1 = *(longlong *)(local_48[0] + 8 + local_38 * 0x18);
      if (lVar1 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(local_48[0] + local_38 * 0x18 + 0x10),lVar1,1);
      }
      FUN_14096b090(lVar2 + lVar3 * 0x48 + 0x110);
      FUN_140a48ab0(local_48,&local_90);
    } while (local_48[0] != 0);
  }
  return;
}


/* address=140a498a0 name=FUN_140a498a0 */

void FUN_140a498a0(longlong *param_1)

{
  longlong lVar1;
  longlong local_70 [2];
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_40 = param_1[1];
    local_18 = param_1[2];
    local_50 = 0;
    local_30 = 0;
    local_48 = lVar1;
    local_28 = lVar1;
    local_20 = local_40;
  }
  local_58 = (ulonglong)(lVar1 != 0);
  local_38 = local_58;
  FUN_140a48e90(local_70,&local_58);
  if (local_70[0] != 0) {
    do {
      lVar1 = *(longlong *)(local_70[0] + 8 + local_60 * 0x18);
      if (lVar1 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(local_70[0] + local_60 * 0x18 + 0x10),lVar1,1);
      }
      FUN_140a48e90(local_70,&local_58);
    } while (local_70[0] != 0);
  }
  return;
}


/* address=140a49980 name=FUN_140a49980 */

void FUN_140a49980(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_50 = 0;
  }
  else {
    local_78 = param_1[1];
    local_50 = param_1[2];
    local_88 = 0;
    local_68 = 0;
    local_80 = lVar1;
    local_60 = lVar1;
    local_58 = local_78;
  }
  local_90 = (ulonglong)(lVar1 != 0);
  local_70 = local_90;
  FUN_140a49270(local_48,&local_90);
  if (local_48[0] != 0) {
    do {
      lVar3 = local_38;
      lVar2 = local_48[0];
      lVar1 = *(longlong *)(local_48[0] + 0x168 + local_38 * 0x18);
      if (lVar1 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(local_48[0] + local_38 * 0x18 + 0x170),lVar1,1);
      }
      FUN_140a46700(lVar2 + lVar3 * 0x20);
      FUN_140a49270(local_48,&local_90);
    } while (local_48[0] != 0);
  }
  return;
}


/* address=140a49ab0 name=FUN_140a49ab0 */

longlong * FUN_140a49ab0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong **pplVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *in_R10;
  
  if (param_1[8] == 0) {
    return (longlong *)0x0;
  }
  param_1[8] = param_1[8] + -1;
  if (*(int *)param_1 != 1) {
    FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_1410635e8);
    do {
      invalidInstructionException();
    } while( true );
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
    uVar7 = param_1[3];
    if (uVar7 != 0) {
      uVar6 = uVar7;
      if ((longlong *)(uVar7 & 7) != (longlong *)0x0) {
        in_R10 = (longlong *)0x0;
        do {
          plVar2 = (longlong *)plVar2[0x86];
          in_R10 = (longlong *)((longlong)in_R10 + 1);
        } while ((longlong *)(uVar7 & 7) != in_R10);
        uVar6 = uVar7 - (longlong)in_R10;
      }
      if (7 < uVar7) {
        do {
          plVar2 = *(longlong **)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(plVar2[0x86] + 0x430) + 0x430) + 0x430) +
                          0x430) + 0x430) + 0x430) + 0x430);
          uVar6 = uVar6 - 8;
        } while (uVar6 != 0);
      }
    }
    *param_1 = 1;
    param_1[1] = plVar2;
    *(undefined (*) [16])(param_1 + 2) = ZEXT816(0);
  }
  uVar7 = param_1[2];
  uVar6 = param_1[3];
  plVar3 = plVar2;
  if (*(ushort *)((longlong)plVar2 + 0x42a) <= uVar6) {
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 == (longlong *)0x0) {
        FUN_140e4b880(&PTR_s__rustc_48a229ceaefd4985c50990b14_1410635b8);
        do {
          invalidInstructionException();
        } while( true );
      }
      uVar7 = uVar7 + 1;
      plVar1 = plVar3 + 0x85;
      uVar6 = (ulonglong)*(ushort *)plVar1;
      plVar3 = plVar2;
    } while (*(ushort *)((longlong)plVar2 + 0x42a) <= *(ushort *)plVar1);
  }
  if (uVar7 == 0) {
    lVar8 = uVar6 + 1;
    in_R10 = plVar2;
  }
  else {
    pplVar4 = (longlong **)(plVar2 + uVar6 + 0x87);
    uVar5 = uVar7;
    if ((uVar7 & 7) != 0) {
      uVar5 = 0;
      do {
        in_R10 = *pplVar4;
        pplVar4 = (longlong **)(in_R10 + 0x86);
        uVar5 = uVar5 + 1;
      } while ((uVar7 & 7) != uVar5);
      uVar5 = uVar7 - uVar5;
    }
    if (uVar7 < 8) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      do {
        in_R10 = *(longlong **)
                  (*(longlong *)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)((*pplVar4)[0x86] + 0x430) + 0x430) + 0x430) +
                      0x430) + 0x430) + 0x430);
        pplVar4 = (longlong **)(in_R10 + 0x86);
        uVar5 = uVar5 - 8;
      } while (uVar5 != 0);
    }
  }
  param_1[1] = in_R10;
  param_1[2] = 0;
  param_1[3] = lVar8;
  return plVar2 + uVar6 * 3 + 1;
}


/* address=140a49cf0 name=FUN_140a49cf0 */

void FUN_140a49cf0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong **local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar7 = *param_2;
  lVar6 = param_2[1];
  lVar8 = ((ulonglong)(lVar6 - lVar7) >> 4) * 0x6db6db6db6db6db7;
  lVar3 = param_2[3];
  lVar4 = param_2[2];
  lVar5 = ((ulonglong)(lVar3 - lVar4) >> 4) * 0x6db6db6db6db6db7;
  uVar2 = lVar5 + lVar8;
  plVar1 = param_1 + 2;
  local_68 = param_1[2];
  if ((ulonglong)(*param_1 - local_68) < uVar2) {
    local_58 = param_1;
    FUN_140e2e4d0(param_1,local_68,uVar2,8,0x70);
    local_68 = local_58[2];
    param_1 = local_58;
  }
  local_60 = param_1[1];
  local_50 = &local_70;
  local_70 = plVar1;
  if (lVar7 != lVar6) {
    lVar6 = 0;
    do {
      FUN_140a54f60(&local_50,lVar6 * 0x70 + lVar7);
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar8);
  }
  local_50 = &local_70;
  if (lVar4 != lVar3) {
    lVar7 = 0;
    do {
      FUN_140a54f60(&local_50,lVar7 * 0x70 + lVar4);
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar5);
  }
  *local_70 = local_68;
  return;
}


/* address=140a49e60 name=FUN_140a49e60 */

void FUN_140a49e60(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_28;
  
  if (*param_1 != 0) {
    thunk_FUN_140704e90(param_1[1],*param_1,1);
  }
  uVar1 = param_1[3];
  uVar2 = 5;
  if ((longlong)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x8000000000000000;
  }
  if (2 < uVar2) {
    if (uVar2 == 3) {
      lVar4 = param_1[4];
      if (lVar4 != 0) {
        lVar3 = param_1[5];
        uVar6 = 1;
        goto LAB_140a49fc6;
      }
    }
    else if (uVar2 == 4) {
      lVar3 = param_1[5];
      FUN_140a4c750(lVar3,param_1[6]);
      if (param_1[4] != 0) {
        lVar4 = param_1[4] * 0x48;
        uVar6 = 8;
LAB_140a49fc6:
        thunk_FUN_140704e90(lVar3,lVar4,uVar6);
        return;
      }
    }
    else {
      lVar4 = param_1[7];
      if (lVar4 != 0) {
        uVar2 = lVar4 * 8 + 0x17U & 0xfffffffffffffff0;
        lVar4 = lVar4 + uVar2 + 0x11;
        if (lVar4 != 0) {
          thunk_FUN_140704e90(param_1[6] - uVar2,lVar4,0x10);
        }
      }
      lVar3 = param_1[4];
      lVar4 = param_1[5];
      local_28 = 0;
      lVar5 = lVar3 + 0x18;
      while (lVar4 != local_28) {
        if (*(longlong *)(lVar5 + -0x18) != 0) {
          thunk_FUN_140704e90(*(undefined8 *)(lVar5 + -0x10),*(longlong *)(lVar5 + -0x18),1);
        }
        local_28 = local_28 + 1;
        FUN_140a4a7c0(lVar5);
        lVar5 = lVar5 + 0x68;
      }
      if (uVar1 != 0) {
        lVar4 = uVar1 * 0x68;
        uVar6 = 8;
        goto LAB_140a49fc6;
      }
    }
  }
  return;
}


/* address=140a4a0a0 name=FUN_140a4a0a0 */

void FUN_140a4a0a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if (lVar1 != 0) {
      thunk_FUN_140704e90(param_1[1],lVar1,1);
    }
    lVar1 = param_1[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(param_1[4],lVar1,1);
    }
    lVar1 = param_1[6];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(param_1[7],lVar1,1);
    }
    FUN_140a49770(param_1 + 0x23);
    FUN_140608c50(param_1 + 0x11);
    return;
  }
  return;
}


/* address=140a4a170 name=FUN_140a4a170 */

void FUN_140a4a170(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  FUN_140a4c750(lVar1,param_1[2]);
  if (*param_1 != 0) {
    thunk_FUN_140704e90(lVar1,*param_1 * 0x48,8);
    return;
  }
  return;
}


/* address=140a4a210 name=FUN_140a4a210 */

void FUN_140a4a210(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_38;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  local_38 = 0;
  while (local_38 != lVar3) {
    lVar1 = lVar2 + local_38 * 0x98;
    lVar4 = *(longlong *)(lVar2 + local_38 * 0x98);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 8),lVar4,1);
    }
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 0x20),lVar4,1);
    }
    local_38 = local_38 + 1;
    FUN_140a49670(lVar1 + 0x50);
    FUN_140a49770(lVar1 + 0x68);
  }
  if (*param_1 != 0) {
    thunk_FUN_140704e90(lVar2,*param_1 * 0x98,8);
    return;
  }
  return;
}


/* address=140a4a3f0 name=FUN_140a4a3f0 */

void FUN_140a4a3f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_40;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  local_40 = 0;
  lVar4 = lVar1 + 0x50;
  while (lVar2 != local_40) {
    if (*(longlong *)(lVar4 + -0x50) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar4 + -0x48),*(longlong *)(lVar4 + -0x50),1);
    }
    lVar3 = *(longlong *)(lVar4 + -0x38);
    if ((lVar3 != -1) && (lVar3 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar4 + -0x30),lVar3,1);
    }
    lVar3 = *(longlong *)(lVar4 + -0x20);
    if ((lVar3 != -1) && (lVar3 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar4 + -0x18),lVar3,1);
    }
    local_40 = local_40 + 1;
    FUN_140a49770(lVar4);
    lVar4 = lVar4 + 0x70;
  }
  if (*param_1 != 0) {
    thunk_FUN_140704e90(lVar1,*param_1 * 0x70,8);
    return;
  }
  return;
}


/* address=140a4a5c0 name=FUN_140a4a5c0 */

void FUN_140a4a5c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_38;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  local_38 = 0;
  while (local_38 != lVar3) {
    lVar1 = lVar2 + local_38 * 200;
    uVar4 = *(ulonglong *)(lVar2 + 0xa8 + local_38 * 200);
    if ((uVar4 < 0xfffffffffffffffe) && (uVar4 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 0xb0),uVar4,1);
    }
    lVar5 = *(longlong *)(lVar1 + 0x90);
    if ((lVar5 != -1) && (lVar5 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 0x98),lVar5,1);
    }
    local_38 = local_38 + 1;
    FUN_14096a150(lVar1);
    FUN_14096a150(lVar1 + 0x48);
  }
  if (*param_1 != 0) {
    thunk_FUN_140704e90(lVar2,*param_1 * 200,8);
    return;
  }
  return;
}


/* address=140a4a7c0 name=FUN_140a4a7c0 */

void FUN_140a4a7c0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong local_28;
  
  uVar4 = *param_1;
  uVar1 = 5;
  if ((longlong)uVar4 < 0) {
    uVar1 = uVar4 ^ 0x8000000000000000;
  }
  if (2 < uVar1) {
    if (uVar1 == 3) {
      uVar4 = param_1[1];
      if (uVar4 != 0) {
        uVar1 = param_1[2];
        uVar5 = 1;
        goto LAB_140a4a8f2;
      }
    }
    else if (uVar1 == 4) {
      uVar1 = param_1[2];
      uVar4 = param_1[3];
      local_28 = 0;
      uVar2 = uVar1;
      while (uVar4 != local_28) {
        local_28 = local_28 + 1;
        FUN_140a4a7c0(uVar2);
        uVar2 = uVar2 + 0x48;
      }
      if (param_1[1] != 0) {
        uVar4 = param_1[1] * 0x48;
        uVar5 = 8;
LAB_140a4a8f2:
        thunk_FUN_140704e90(uVar1,uVar4,uVar5);
        return;
      }
    }
    else {
      uVar1 = param_1[4];
      if (uVar1 != 0) {
        uVar2 = uVar1 * 8 + 0x17 & 0xfffffffffffffff0;
        lVar3 = uVar1 + uVar2 + 0x11;
        if (lVar3 != 0) {
          thunk_FUN_140704e90(param_1[3] - uVar2,lVar3,0x10);
        }
      }
      uVar1 = param_1[1];
      FUN_140a4c420(uVar1,param_1[2]);
      if (uVar4 != 0) {
        uVar4 = uVar4 * 0x68;
        uVar5 = 8;
        goto LAB_140a4a8f2;
      }
    }
  }
  return;
}


/* address=140a4a9c0 name=FUN_140a4a9c0 */

void FUN_140a4a9c0(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    thunk_FUN_140704e90(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    thunk_FUN_140704e90(param_1[4],param_1[3],1);
  }
  lVar1 = param_1[6];
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(param_1[7],lVar1,1);
  }
  lVar1 = param_1[9];
  if (((-0x7ffffffffffffffc < lVar1) && (lVar1 != -1)) && (lVar1 != 0)) {
    thunk_FUN_140704e90(param_1[10],lVar1,1);
    return;
  }
  return;
}


/* address=140a4aa50 name=FUN_140a4aa50 */

void FUN_140a4aa50(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    thunk_FUN_140704e90(param_1[1],*param_1,1);
  }
  lVar1 = param_1[3];
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(param_1[4],lVar1,1);
  }
  lVar1 = param_1[6];
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(param_1[7],lVar1,1);
  }
  FUN_140a49770(param_1 + 10);
  return;
}


/* address=140a4aac0 name=FUN_140a4aac0 */

void FUN_140a4aac0(longlong *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_140704e90(param_1[1],*param_1,1);
  }
  FUN_140a49770(param_1 + 4);
  return;
}


/* address=140a4b7c0 name=FUN_140a4b7c0 */

void FUN_140a4b7c0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x88),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xa0),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xb8),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xd0),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xe8),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x100),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar2[-1] != 0) {
        thunk_FUN_140704e90(*puVar2,puVar2[-1],1);
      }
      puVar2 = puVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    thunk_FUN_140704e90(lVar1,*(longlong *)(param_1 + 0x50) * 0x18,8);
  }
  lVar1 = *(longlong *)(param_1 + 0x110);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x118),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar3 = *(longlong *)(param_1 + 0x78);
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar2[-1] != 0) {
        thunk_FUN_140704e90(*puVar2,puVar2[-1],1);
      }
      puVar2 = puVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    thunk_FUN_140704e90(lVar1,*(longlong *)(param_1 + 0x68) * 0x18,8);
  }
  FUN_140a49770(param_1 + 0x140);
  lVar1 = *(longlong *)(param_1 + 0x128);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x130),lVar1,1);
    return;
  }
  return;
}


/* address=140a4ba30 name=FUN_140a4ba30 */

void FUN_140a4ba30(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0xa8);
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xb0),uVar1,1);
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  if ((lVar2 != -1) && (lVar2 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x98),lVar2,1);
  }
  FUN_14096a150(param_1);
  FUN_14096a150(param_1 + 0x48);
  return;
}


/* address=140a4bae0 name=FUN_140a4bae0 */

void FUN_140a4bae0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x98),*(longlong *)(param_1 + 0x90),1);
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xb0),lVar1,1);
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 200),lVar1,1);
  }
  FUN_14096a150(param_1);
  FUN_14096a150(param_1 + 0x48);
  uVar2 = *(ulonglong *)(param_1 + 0x210);
  if ((uVar2 < 0xfffffffffffffffe) && (uVar2 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x218),uVar2,1);
  }
  FUN_140a4a0a0(param_1 + 0xd8);
  return;
}


/* address=140a4bc40 name=FUN_140a4bc40 */

void FUN_140a4bc40(ulonglong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong local_48;
  ulonglong local_40;
  
  lVar2 = 0;
  if (1 < *param_1) {
    lVar2 = *param_1 - 2;
  }
  switch(lVar2) {
  case 0:
    uVar5 = param_1[0x25];
    if (uVar5 != 0xffffffffffffffff) {
      uVar3 = param_1[0x26];
      uVar4 = param_1[0x27];
      if (uVar4 != 0) {
        puVar7 = (undefined8 *)(uVar3 + 8);
        do {
          lVar2 = puVar7[-1];
          if ((lVar2 != -1) && (lVar2 != 0)) {
            thunk_FUN_140704e90(*puVar7,lVar2,1);
          }
          puVar7 = puVar7 + 3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uVar5 != 0) {
        thunk_FUN_140704e90(uVar3,uVar5 * 0x18,8);
      }
    }
    uVar5 = param_1[0x28];
    if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0x29],uVar5,1);
    }
    uVar5 = param_1[0x2b];
    if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0x2c],uVar5,1);
    }
    uVar5 = param_1[0x2e];
    if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0x2f],uVar5,1);
    }
    uVar5 = param_1[0x31];
    if (uVar5 != 0xffffffffffffffff) {
      if (uVar5 != 0) {
        thunk_FUN_140704e90(param_1[0x32],uVar5,1);
      }
      uVar5 = param_1[0x35];
      FUN_140a4c750(uVar5,param_1[0x36]);
      if (param_1[0x34] != 0) {
        thunk_FUN_140704e90(uVar5,param_1[0x34] * 0x48,8);
      }
    }
    uVar5 = param_1[0x37];
    if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0x38],uVar5,1);
    }
    FUN_140a49670(param_1 + 0x8b);
    uVar5 = param_1[0x3a];
    if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0x3b],uVar5,1);
    }
    uVar5 = param_1[0x45];
    if ((uVar5 < 0xfffffffffffffffe) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0x46],uVar5,1);
    }
    uVar5 = param_1[0x48];
    if ((uVar5 < 0xfffffffffffffffe) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0x49],uVar5,1);
    }
    uVar5 = param_1[0x4b];
    if ((uVar5 < 0xfffffffffffffffe) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0x4c],uVar5,1);
    }
    uVar5 = param_1[0x4e];
    if ((uVar5 < 0xfffffffffffffffe) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0x4f],uVar5,1);
    }
    uVar5 = param_1[0x51];
    if (uVar5 != 0xfffffffffffffffe) {
      if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
        thunk_FUN_140704e90(param_1[0x52],uVar5,1);
      }
      uVar5 = param_1[0x54];
      if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
        thunk_FUN_140704e90(param_1[0x55],uVar5,1);
      }
      uVar5 = param_1[0x57];
      if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
        thunk_FUN_140704e90(param_1[0x58],uVar5,1);
      }
      FUN_140a49770(param_1 + 0x5a);
    }
    FUN_140741100(param_1 + 0x60);
    FUN_140a49980(param_1 + 0x8f);
    uVar5 = param_1[0x1d];
    uVar3 = param_1[0x1e];
    local_48 = 0;
    lVar2 = uVar5 + 0x50;
    while (uVar3 != local_48) {
      if (*(longlong *)(lVar2 + -0x50) != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar2 + -0x48),*(longlong *)(lVar2 + -0x50),1);
      }
      lVar1 = *(longlong *)(lVar2 + -0x38);
      if ((lVar1 != -1) && (lVar1 != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar2 + -0x30),lVar1,1);
      }
      lVar1 = *(longlong *)(lVar2 + -0x20);
      if ((lVar1 != -1) && (lVar1 != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar2 + -0x18),lVar1,1);
      }
      local_48 = local_48 + 1;
      FUN_140a49770(lVar2);
      lVar2 = lVar2 + 0x70;
    }
    if (param_1[0x1c] != 0) {
      thunk_FUN_140704e90(uVar5,param_1[0x1c] * 0x70,8);
    }
    uVar5 = param_1[0x20];
    uVar3 = param_1[0x21];
    local_48 = 0;
    uVar4 = uVar5;
    while (uVar3 != local_48) {
      local_48 = local_48 + 1;
      FUN_140a4bae0(uVar4);
      uVar4 = uVar4 + 0x228;
    }
    if (param_1[0x1f] != 0) {
      thunk_FUN_140704e90(uVar5,param_1[0x1f] * 0x228,8);
    }
    FUN_14096a150(param_1);
    FUN_140605b80(param_1 + 9);
    uVar5 = param_1[0x23];
    uVar3 = param_1[0x24];
    local_48 = 0;
    while (local_48 != uVar3) {
      lVar2 = uVar5 + local_48 * 200;
      uVar4 = *(ulonglong *)(uVar5 + 0xa8 + local_48 * 200);
      if ((uVar4 < 0xfffffffffffffffe) && (uVar4 != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar2 + 0xb0),uVar4,1);
      }
      lVar1 = *(longlong *)(lVar2 + 0x90);
      if ((lVar1 != -1) && (lVar1 != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar2 + 0x98),lVar1,1);
      }
      local_48 = local_48 + 1;
      FUN_14096a150(lVar2);
      FUN_14096a150(lVar2 + 0x48);
    }
    if (param_1[0x22] != 0) {
      thunk_FUN_140704e90(uVar5,param_1[0x22] * 200,8);
    }
    FUN_140a49670(param_1 + 0x92);
    FUN_140a49770(param_1 + 0x95);
    uVar5 = param_1[0x3d];
    if (uVar5 != 0xffffffffffffffff) {
      uVar3 = param_1[0x40];
      if ((uVar3 != 0xffffffffffffffff) && (uVar3 != 0)) {
        thunk_FUN_140704e90(param_1[0x41],uVar3,1);
      }
      uVar3 = param_1[0x3e];
      uVar6 = uVar3;
      for (uVar4 = param_1[0x3f]; uVar4 != 0; uVar4 = uVar4 - 1) {
        FUN_140608af0(uVar6);
        uVar6 = uVar6 + 0x98;
      }
      if (uVar5 != 0) {
        thunk_FUN_140704e90(uVar3,uVar5 * 0x98,8);
      }
    }
    if (0xfffffffffffffffd < param_1[0x7d]) {
      return;
    }
    FUN_1407416e0(param_1 + 0x7d);
    return;
  case 1:
    FUN_140741800(param_1 + 1);
    return;
  case 2:
    uVar5 = param_1[3];
    if (uVar5 != 0) {
      puVar7 = (undefined8 *)(param_1[2] + 8);
      do {
        lVar2 = puVar7[-1];
        if ((lVar2 != -1) && (lVar2 != 0)) {
          thunk_FUN_140704e90(*puVar7,lVar2,1);
        }
        puVar7 = puVar7 + 6;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_1[1] != 0) {
      thunk_FUN_140704e90(param_1[2],param_1[1] * 0x30,8);
    }
    uVar5 = param_1[4];
    if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[5],uVar5,1);
    }
    uVar5 = param_1[10];
    if ((uVar5 < 0xfffffffffffffffe) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0xb],uVar5,1);
    }
    uVar5 = param_1[7];
    if (uVar5 == 0xffffffffffffffff) {
      return;
    }
    if (uVar5 == 0) {
      return;
    }
    uVar3 = param_1[8];
    break;
  case 3:
    uVar5 = param_1[4];
    if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[5],uVar5,1);
    }
    uVar5 = param_1[10];
    if ((uVar5 < 0xfffffffffffffffe) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0xb],uVar5,1);
    }
    uVar5 = param_1[0xd];
    if ((uVar5 < 0xfffffffffffffffe) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0xe],uVar5,1);
    }
    uVar5 = param_1[0x10];
    if (uVar5 != 0xfffffffffffffffe) {
      if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
        thunk_FUN_140704e90(param_1[0x11],uVar5,1);
      }
      uVar5 = param_1[0x13];
      if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
        thunk_FUN_140704e90(param_1[0x14],uVar5,1);
      }
      uVar5 = param_1[0x16];
      if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
        thunk_FUN_140704e90(param_1[0x17],uVar5,1);
      }
      FUN_140a49770(param_1 + 0x19);
    }
    FUN_140a49670(param_1 + 0x4d);
    FUN_140a49770(param_1 + 0x50);
    if (param_1[0x1f] < 0xfffffffffffffffe) {
      FUN_1407416e0(param_1 + 0x1f);
    }
    uVar5 = param_1[7];
    if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[8],uVar5,1);
    }
    uVar5 = param_1[2];
    uVar3 = param_1[3];
    local_40 = 0;
    while (local_40 != uVar3) {
      lVar2 = uVar5 + local_40 * 0x98;
      lVar1 = *(longlong *)(uVar5 + local_40 * 0x98);
      if ((lVar1 != -1) && (lVar1 != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar2 + 8),lVar1,1);
      }
      lVar1 = *(longlong *)(lVar2 + 0x18);
      if ((lVar1 != -1) && (lVar1 != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar2 + 0x20),lVar1,1);
      }
      local_40 = local_40 + 1;
      FUN_140a49670(lVar2 + 0x50);
      FUN_140a49770(lVar2 + 0x68);
    }
    if (param_1[1] != 0) {
      thunk_FUN_140704e90(param_1[2],param_1[1] * 0x98,8);
    }
    FUN_140a49980(param_1 + 0x54);
    FUN_140741100(param_1 + 0x2b);
    uVar5 = param_1[0x48];
    if (0xfffffffffffffffd < uVar5) {
      return;
    }
    if (uVar5 == 0) {
      return;
    }
    uVar3 = param_1[0x49];
    break;
  case 4:
    FUN_140a4a9c0(param_1 + 1);
    return;
  case 5:
    if (param_1[0x11] != 0) {
      thunk_FUN_140704e90(param_1[0x12],param_1[0x11],1);
    }
    uVar5 = param_1[0x14];
    if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0x15],uVar5,1);
    }
    if (*(int *)(param_1 + 3) == 2) {
      return;
    }
    uVar5 = param_1[0xb];
    if ((uVar5 != 0xffffffffffffffff) && (uVar5 != 0)) {
      thunk_FUN_140704e90(param_1[0xc],uVar5,1);
    }
    uVar5 = param_1[0xe];
    if (uVar5 == 0xffffffffffffffff) {
      return;
    }
    if (uVar5 == 0) {
      return;
    }
    uVar3 = param_1[0xf];
    break;
  case 6:
    uVar5 = param_1[3];
    local_40 = 0;
    lVar2 = param_1[2] + 0x20;
    while (uVar5 != local_40) {
      if (*(longlong *)(lVar2 + -0x20) != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar2 + -0x18),*(longlong *)(lVar2 + -0x20),1);
      }
      local_40 = local_40 + 1;
      FUN_140a49770(lVar2);
      lVar2 = lVar2 + 0x50;
    }
    if (param_1[1] == 0) {
      return;
    }
    uVar3 = param_1[2];
    uVar5 = param_1[1] * 0x50;
    uVar8 = 8;
    goto LAB_140a4c0c4;
  default:
    return;
  }
  uVar8 = 1;
LAB_140a4c0c4:
  thunk_FUN_140704e90(uVar3,uVar5,uVar8);
  return;
}


/* address=140a4c420 name=FUN_140a4c420 */

void FUN_140a4c420(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_50;
  
  if (param_2 != 0) {
    lVar8 = 0;
    do {
      lVar1 = param_1 + lVar8 * 0x68;
      lVar6 = *(longlong *)(param_1 + lVar8 * 0x68);
      if (lVar6 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 8),lVar6,1);
      }
      lVar8 = lVar8 + 1;
      uVar2 = *(ulonglong *)(lVar1 + 0x18);
      uVar3 = uVar2 ^ 0x8000000000000000;
      if (-1 < (longlong)uVar2) {
        uVar3 = 5;
      }
      if (2 < uVar3) {
        if (uVar3 == 3) {
          lVar6 = *(longlong *)(lVar1 + 0x20);
          if (lVar6 != 0) {
            lVar4 = *(longlong *)(lVar1 + 0x28);
            uVar7 = 1;
            goto LAB_140a4c475;
          }
        }
        else if (uVar3 == 4) {
          lVar4 = *(longlong *)(lVar1 + 0x28);
          lVar6 = *(longlong *)(lVar1 + 0x30);
          local_50 = 0;
          lVar5 = lVar4;
          while (lVar6 != local_50) {
            local_50 = local_50 + 1;
            FUN_140a4a7c0(lVar5);
            lVar5 = lVar5 + 0x48;
          }
          if (*(longlong *)(lVar1 + 0x20) != 0) {
            lVar6 = *(longlong *)(lVar1 + 0x20) * 0x48;
            uVar7 = 8;
LAB_140a4c475:
            thunk_FUN_140704e90(lVar4,lVar6,uVar7);
          }
        }
        else {
          lVar6 = *(longlong *)(lVar1 + 0x38);
          if (lVar6 != 0) {
            uVar3 = lVar6 * 8 + 0x17U & 0xfffffffffffffff0;
            lVar6 = lVar6 + uVar3 + 0x11;
            if (lVar6 != 0) {
              thunk_FUN_140704e90(*(longlong *)(lVar1 + 0x30) - uVar3,lVar6,0x10);
            }
          }
          lVar4 = *(longlong *)(lVar1 + 0x20);
          FUN_140a4c420(lVar4,*(undefined8 *)(lVar1 + 0x28));
          if (uVar2 != 0) {
            lVar6 = uVar2 * 0x68;
            uVar7 = 8;
            goto LAB_140a4c475;
          }
        }
      }
    } while (lVar8 != param_2);
  }
  return;
}


/* address=140a4c750 name=FUN_140a4c750 */

void FUN_140a4c750(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_50;
  
  if (param_2 != 0) {
    lVar7 = 0;
    do {
      lVar8 = lVar7 + 1;
      uVar1 = *(ulonglong *)(param_1 + lVar7 * 0x48);
      uVar2 = uVar1 ^ 0x8000000000000000;
      if (-1 < (longlong)uVar1) {
        uVar2 = 5;
      }
      if (2 < uVar2) {
        lVar7 = param_1 + lVar7 * 0x48;
        if (uVar2 == 3) {
          lVar5 = *(longlong *)(lVar7 + 8);
          if (lVar5 != 0) {
            lVar3 = *(longlong *)(lVar7 + 0x10);
            uVar6 = 1;
            goto LAB_140a4c7af;
          }
        }
        else if (uVar2 == 4) {
          lVar3 = *(longlong *)(lVar7 + 0x10);
          lVar5 = *(longlong *)(lVar7 + 0x18);
          local_50 = 0;
          lVar4 = lVar3;
          while (lVar5 != local_50) {
            local_50 = local_50 + 1;
            FUN_140a4a7c0(lVar4);
            lVar4 = lVar4 + 0x48;
          }
          if (*(longlong *)(lVar7 + 8) != 0) {
            lVar5 = *(longlong *)(lVar7 + 8) * 0x48;
            uVar6 = 8;
LAB_140a4c7af:
            thunk_FUN_140704e90(lVar3,lVar5,uVar6);
          }
        }
        else {
          lVar5 = *(longlong *)(lVar7 + 0x20);
          if (lVar5 != 0) {
            uVar2 = lVar5 * 8 + 0x17U & 0xfffffffffffffff0;
            lVar5 = lVar5 + uVar2 + 0x11;
            if (lVar5 != 0) {
              thunk_FUN_140704e90(*(longlong *)(lVar7 + 0x18) - uVar2,lVar5,0x10);
            }
          }
          lVar3 = *(longlong *)(lVar7 + 8);
          FUN_140a4c420(lVar3,*(undefined8 *)(lVar7 + 0x10));
          if (uVar1 != 0) {
            lVar5 = uVar1 * 0x68;
            uVar6 = 8;
            goto LAB_140a4c7af;
          }
        }
      }
      lVar7 = lVar8;
    } while (lVar8 != param_2);
  }
  return;
}


/* address=140a4ca60 name=FUN_140a4ca60 */

undefined8 * FUN_140a4ca60(undefined8 *param_1,undefined (*param_2) [16])

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined (*pauVar20) [16];
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lStack_108;
  longlong lStack_100;
  ushort uStack_d8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  uVar21 = *(ulonglong *)(param_2[3] + 8);
  if (uVar21 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    uVar16 = (uint)*(ushort *)param_2[3];
    lVar15 = *(longlong *)(param_2[1] + 8);
    if (*(ushort *)param_2[3] == 0) {
      pauVar20 = *(undefined (**) [16])param_2[2];
      do {
        auVar3 = *pauVar20;
        lVar15 = lVar15 + -0x300;
        pauVar20 = pauVar20 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
      } while (uVar16 == 0);
      *(undefined (**) [16])param_2[2] = pauVar20;
      *(longlong *)(param_2[1] + 8) = lVar15;
    }
    uVar9 = (ushort)uVar16;
    uVar7 = 0;
    for (; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    *(ushort *)param_2[3] = uVar9 - 1 & uVar9;
    lVar17 = (ulonglong)uVar7 * -0x30;
    lVar19 = uVar21 - 1;
    *(longlong *)(param_2[3] + 8) = lVar19;
    lVar23 = *(longlong *)(lVar15 + -0x30 + lVar17);
    if (lVar23 != -2) {
      lVar19 = *(longlong *)(lVar15 + -0x28 + lVar17);
      uVar22 = 4;
      if (4 < uVar21) {
        uVar22 = uVar21;
      }
      lVar6 = uVar22 * 0x30;
      if (0x2aaaaaaaaaaaaaa < uVar21) {
        uVar18 = 0;
        lStack_80 = lVar19;
LAB_140a4cc36:
        uStack_88 = lVar23;
        FUN_140e4b58b(uVar18,lVar6);
        do {
          invalidInstructionException();
        } while( true );
      }
      lVar5 = *(longlong *)(lVar15 + -0x20 + lVar17);
      puVar1 = (undefined4 *)(lVar15 + -0x18 + lVar17);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      lVar15 = *(longlong *)(lVar15 + -8 + lVar17);
      if (lVar6 == 0) {
        plVar14 = (longlong *)&DAT_00000008;
        uVar22 = 0;
      }
      else {
        lStack_80 = lVar19;
        FUN_140081a90();
        uVar18 = 8;
        plVar14 = (longlong *)thunk_FUN_140704e30(lVar6,8);
        lVar19 = lStack_80;
        if (plVar14 == (longlong *)0x0) goto LAB_140a4cc36;
      }
      *plVar14 = lVar23;
      plVar14[1] = lVar19;
      plVar14[2] = lVar5;
      *(undefined4 *)(plVar14 + 3) = uVar10;
      *(undefined4 *)((longlong)plVar14 + 0x1c) = uVar11;
      *(undefined4 *)(plVar14 + 4) = uVar12;
      *(undefined4 *)((longlong)plVar14 + 0x24) = uVar13;
      plVar14[5] = lVar15;
      uStack_90 = 1;
      auVar3 = *param_2;
      uVar18 = *(undefined8 *)param_2[1];
      lVar15 = *(longlong *)(param_2[1] + 8);
      pauVar20 = *(undefined (**) [16])param_2[2];
      uStack_a0 = uVar22;
      uStack_98 = plVar14;
      if (*(longlong *)(param_2[3] + 8) != 0) {
        uStack_d8 = (ushort)*(undefined4 *)param_2[3];
        lVar19 = *(longlong *)(param_2[3] + 8);
        uVar21 = (ulonglong)uStack_d8;
        do {
          uVar22 = uStack_90;
          uVar16 = (uint)uVar21;
          if ((short)uVar21 == 0) {
            do {
              auVar4 = *pauVar20;
              lVar15 = lVar15 + -0x300;
              pauVar20 = pauVar20 + 1;
              uVar16 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar4[15] >> 7) << 0xf) ^ 0xffff;
            } while (uVar16 == 0);
          }
          uVar7 = 0;
          for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar21 = (ulonglong)(uVar16 - 1 & uVar16);
          lVar17 = (ulonglong)uVar7 * -0x30;
          lVar23 = lVar19 + -1;
          lStack_80 = *(longlong *)(lVar15 + -0x30 + lVar17);
          if (lStack_80 == -2) goto joined_r0x000140a4ce20;
          lVar6 = *(longlong *)(lVar15 + -0x28 + lVar17);
          lVar5 = *(longlong *)(lVar15 + -0x20 + lVar17);
          puVar1 = (undefined4 *)(lVar15 + -0x18 + lVar17);
          uVar10 = *puVar1;
          uVar11 = puVar1[1];
          uVar12 = puVar1[2];
          uVar13 = puVar1[3];
          lVar17 = *(longlong *)(lVar15 + -8 + lVar17);
          uStack_88 = uVar21;
          if (uStack_90 == uStack_a0) {
            FUN_140e2e4d0(&uStack_a0,uStack_90,lVar19,8,0x30);
            plVar14 = uStack_98;
          }
          plVar14[uVar22 * 6] = lStack_80;
          plVar14[uVar22 * 6 + 1] = lVar6;
          plVar14[uVar22 * 6 + 2] = lVar5;
          plVar2 = plVar14 + uVar22 * 6 + 3;
          *(undefined4 *)plVar2 = uVar10;
          *(undefined4 *)((longlong)plVar2 + 4) = uVar11;
          *(undefined4 *)(plVar2 + 1) = uVar12;
          *(undefined4 *)((longlong)plVar2 + 0xc) = uVar13;
          plVar14[uVar22 * 6 + 5] = lVar17;
          uStack_90 = uVar22 + 1;
          lVar19 = lVar23;
          uVar21 = uStack_88;
        } while (lVar23 != 0);
      }
      goto LAB_140a4ce22;
    }
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    if (lVar19 != 0) {
      uVar16 = (uint)*(ushort *)param_2[3];
      lVar15 = *(longlong *)(param_2[1] + 8);
      pauVar20 = *(undefined (**) [16])param_2[2];
      do {
        if ((short)uVar16 == 0) {
          do {
            auVar3 = *pauVar20;
            lVar15 = lVar15 + -0x300;
            pauVar20 = pauVar20 + 1;
            uVar16 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          } while (uVar16 == 0);
        }
        uVar7 = 0;
        for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar23 = *(longlong *)(lVar15 + -0x30 + (ulonglong)uVar7 * -0x30);
        if ((lVar23 != -1) && (lVar23 != 0)) {
          thunk_FUN_140704e90(*(undefined8 *)((ulonglong)uVar7 * -0x30 + lVar15 + -0x28),lVar23,1);
        }
        uVar16 = uVar16 - 1 & uVar16;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  if (*(longlong *)*param_2 == 0) {
    return param_1;
  }
  if (*(longlong *)(*param_2 + 8) == 0) {
    return param_1;
  }
  thunk_FUN_140704e90(*(undefined8 *)param_2[1]);
  return param_1;
joined_r0x000140a4ce20:
  for (; lVar23 != 0; lVar23 = lVar23 + -1) {
    uVar16 = (uint)uVar21;
    if ((short)uVar21 == 0) {
      do {
        auVar4 = *pauVar20;
        lVar15 = lVar15 + -0x300;
        pauVar20 = pauVar20 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar4[15] >> 7) << 0xf) ^ 0xffff;
      } while (uVar16 == 0);
    }
    uVar7 = 0;
    for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar19 = *(longlong *)(lVar15 + -0x30 + (ulonglong)uVar7 * -0x30);
    if ((lVar19 != -1) && (lVar19 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)((ulonglong)uVar7 * -0x30 + lVar15 + -0x28),lVar19,1);
    }
    uVar21 = (ulonglong)(uVar16 - 1 & uVar16);
  }
LAB_140a4ce22:
  lStack_108 = auVar3._0_8_;
  if ((lStack_108 != 0) && (lStack_100 = auVar3._8_8_, lStack_100 != 0)) {
    thunk_FUN_140704e90(uVar18);
  }
  param_1[2] = uStack_90;
  *(undefined4 *)param_1 = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_a0._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_98;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_98._4_4_;
  return param_1;
}


/* address=140a4d090 name=FUN_140a4d090 */

undefined4 * FUN_140a4d090(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar7 = param_3 - param_2;
  uVar5 = uVar7 * 2;
  if (0x7ffffffffffffff8 < uVar5 || 0x7ffffffffffffff0 < uVar7) {
    uVar8 = 0;
LAB_140a4d0e1:
    FUN_140e4b58b(uVar8,uVar5);
    do {
      invalidInstructionException();
    } while( true );
  }
  uVar7 = uVar7 >> 4;
  if (uVar5 == 0) {
    local_70 = 0;
    uStack_68 = 8;
    lVar6 = uStack_68;
  }
  else {
    FUN_140081a90();
    uVar8 = 8;
    lVar6 = thunk_FUN_140704e30(uVar5,8);
    local_70 = uVar7;
    if (lVar6 == 0) goto LAB_140a4d0e1;
  }
  uStack_68 = lVar6;
  if (param_2 == param_3) {
    uVar7 = 0;
  }
  else {
    lVar9 = 8;
    local_50 = 0;
    local_58 = param_1;
    do {
      plVar3 = *(longlong **)(param_2 + -8 + lVar9);
      lVar4 = *(longlong *)(param_2 + lVar9);
      (**(code **)(lVar4 + 0x18))
                (&local_80,
                 (longlong)plVar3 + (*(longlong *)(lVar4 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
      LOCK();
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + 1;
      UNLOCK();
      if (*plVar3 == 0 || SCARRY8(lVar2,1) != *plVar3 < 0) {
        do {
          invalidInstructionException();
        } while( true );
      }
      puVar1 = (undefined4 *)(lVar6 + -0x10 + lVar9 * 2);
      *puVar1 = local_80;
      puVar1[1] = uStack_7c;
      puVar1[2] = uStack_78;
      puVar1[3] = uStack_74;
      *(longlong **)(lVar6 + lVar9 * 2) = plVar3;
      *(longlong *)(lVar6 + 8 + lVar9 * 2) = lVar4;
      local_50 = local_50 + 1;
      lVar9 = lVar9 + 0x10;
      param_1 = local_58;
    } while (uVar7 != local_50);
  }
  *(ulonglong *)(param_1 + 4) = uVar7;
  *param_1 = (undefined4)local_70;
  param_1[1] = local_70._4_4_;
  param_1[2] = (undefined4)uStack_68;
  param_1[3] = uStack_68._4_4_;
  return param_1;
}


/* address=140a4d230 name=FUN_140a4d230 */

void FUN_140a4d230(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  lVar1 = uVar3 * 0x18;
  if (0x555555555555555 < uVar3) {
    uVar8 = 0;
LAB_140a4d26f:
    FUN_140e4b58b(uVar8,lVar1);
    do {
      invalidInstructionException();
    } while( true );
  }
  lVar5 = *(longlong *)(param_2 + 8);
  local_58 = param_1;
  if (lVar1 == 0) {
    lVar4 = 8;
    uVar6 = 0;
  }
  else {
    FUN_140081a90();
    uVar8 = 8;
    lVar4 = thunk_FUN_140704e30(lVar1,8);
    uVar6 = uVar3;
    if (lVar4 == 0) goto LAB_140a4d26f;
  }
  lVar1 = lVar5 + uVar3 * 0x18;
  local_50 = 0;
  uStack_68 = lVar4;
  uVar7 = uVar6;
  local_70 = uVar6;
  for (; (uVar7 != 0 && (uVar7 = uVar7 - 1, lVar5 != lVar1)); lVar5 = lVar5 + 0x18) {
    if (uVar6 <= local_50) {
      FUN_140e4b923(local_50,uVar6,&PTR_s__rustc_48a229ceaefd4985c50990b14_1410636a0);
      do {
        invalidInstructionException();
      } while( true );
    }
    FUN_140728970(&local_88,lVar5);
    *(undefined8 *)(lVar4 + 0x10 + local_50 * 0x18) = local_78;
    puVar2 = (undefined4 *)(lVar4 + local_50 * 0x18);
    *puVar2 = local_88;
    puVar2[1] = uStack_84;
    puVar2[2] = uStack_80;
    puVar2[3] = uStack_7c;
    local_50 = local_50 + 1;
  }
  *(ulonglong *)(local_58 + 4) = uVar3;
  local_70._4_4_ = (undefined4)(local_70 >> 0x20);
  uStack_68._4_4_ = (undefined4)((ulonglong)uStack_68 >> 0x20);
  *local_58 = (undefined4)local_70;
  local_58[1] = local_70._4_4_;
  local_58[2] = (undefined4)uStack_68;
  local_58[3] = uStack_68._4_4_;
  return;
}


/* address=140a4d640 name=FUN_140a4d640 */

void FUN_140a4d640(undefined4 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar6 = *(ulonglong *)(param_2 + 0x10);
  lVar4 = uVar6 * 0x30;
  if (0x2aaaaaaaaaaaaaa < uVar6) {
    uVar7 = 0;
LAB_140a4d684:
    FUN_140e4b58b(uVar7,lVar4);
    do {
      invalidInstructionException();
    } while( true );
  }
  lVar5 = *(longlong *)(param_2 + 8);
  local_60 = param_1;
  if (lVar4 == 0) {
    lVar2 = 8;
    uVar8 = 0;
  }
  else {
    FUN_140081a90();
    uVar7 = 8;
    lVar2 = thunk_FUN_140704e30(lVar4,8);
    uVar8 = uVar6;
    if (lVar2 == 0) goto LAB_140a4d684;
  }
  lVar4 = uVar6 * 0x30 + lVar5;
  local_50 = 0;
  local_58 = uVar6;
  uStack_70 = lVar2;
  uVar6 = uVar8;
  local_78 = uVar8;
  for (; (uVar6 != 0 && (uVar6 = uVar6 - 1, lVar5 != lVar4)); lVar5 = lVar5 + 0x30) {
    if (uVar8 <= local_50) {
      FUN_140e4b923(local_50,uVar8,&PTR_s__rustc_48a229ceaefd4985c50990b14_1410636a0);
      do {
        invalidInstructionException();
      } while( true );
    }
    FUN_140728970(&local_90,lVar5);
    FUN_140728970(&local_e0,lVar5 + 0x18);
    lVar3 = local_50 * 0x30;
    local_b8 = (undefined4)local_80;
    uStack_b4 = (undefined4)((ulonglong)local_80 >> 0x20);
    uStack_a0 = (undefined4)local_d0;
    uStack_9c = (undefined4)((ulonglong)local_d0 >> 0x20);
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar3);
    *puVar1 = uStack_d8;
    puVar1[1] = uStack_d4;
    puVar1[2] = uStack_a0;
    puVar1[3] = uStack_9c;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar3);
    *puVar1 = local_b8;
    puVar1[1] = uStack_b4;
    puVar1[2] = local_e0;
    puVar1[3] = uStack_dc;
    puVar1 = (undefined4 *)(lVar2 + lVar3);
    *puVar1 = local_90;
    puVar1[1] = uStack_8c;
    puVar1[2] = uStack_88;
    puVar1[3] = uStack_84;
    local_50 = local_50 + 1;
  }
  *(ulonglong *)(local_60 + 4) = local_58;
  local_78._4_4_ = (undefined4)(local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *local_60 = (undefined4)local_78;
  local_60[1] = local_78._4_4_;
  local_60[2] = (undefined4)uStack_70;
  local_60[3] = uStack_70._4_4_;
  return;
}


/* address=140a4d860 name=FUN_140a4d860 */

void FUN_140a4d860(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar5 = 0;
  while (lVar5 != lVar2) {
    lVar4 = lVar5 * 0x10;
    lVar5 = lVar5 + 1;
    plVar3 = *(longlong **)(lVar1 + 8 + lVar4);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_140742a40(lVar1 + lVar4 + 8);
      }
    }
    plVar3 = *(longlong **)(lVar1 + lVar4);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1407432d0();
    }
  }
  return;
}


/* address=140a4d980 name=FUN_140a4d980 */

void FUN_140a4d980(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_30;
  longlong *local_28;
  
  local_28 = *(longlong **)(param_1 + 8);
  local_30 = *(longlong *)(param_1 + 0x10);
  while (local_30 != 0) {
    if (*local_28 != 0) {
      thunk_FUN_140704e90(local_28[1],*local_28,1);
    }
    lVar2 = local_28[3];
    if ((lVar2 != -1) && (lVar2 != 0)) {
      thunk_FUN_140704e90(local_28[4],lVar2,1);
    }
    lVar2 = local_28[6];
    if ((lVar2 != -1) && (lVar2 != 0)) {
      thunk_FUN_140704e90(local_28[7],lVar2,1);
    }
    plVar1 = local_28 + 10;
    local_28 = local_28 + 0xe;
    local_30 = local_30 + -1;
    FUN_140a49770(plVar1);
  }
  return;
}


/* address=140a4da80 name=FUN_140a4da80 */

void FUN_140a4da80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_48;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x10);
  local_48 = 0;
  while( true ) {
    if (local_48 == lVar3) break;
    lVar1 = lVar2 + local_48 * 0x98;
    lVar4 = *(longlong *)(lVar2 + local_48 * 0x98);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 8),lVar4,1);
    }
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 0x20),lVar4,1);
    }
    local_48 = local_48 + 1;
    FUN_140a49670(lVar1 + 0x50);
    FUN_140a49770(lVar1 + 0x68);
  }
  return;
}


/* address=140a4dbf0 name=FUN_140a4dbf0 */

void FUN_140a4dbf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong local_48;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x10);
  local_48 = 0;
  while( true ) {
    if (local_48 == lVar3) break;
    lVar1 = lVar2 + local_48 * 200;
    uVar4 = *(ulonglong *)(lVar2 + 0xa8 + local_48 * 200);
    if ((uVar4 < 0xfffffffffffffffe) && (uVar4 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 0xb0),uVar4,1);
    }
    lVar5 = *(longlong *)(lVar1 + 0x90);
    if ((lVar5 != -1) && (lVar5 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 0x98),lVar5,1);
    }
    local_48 = local_48 + 1;
    FUN_14096a150(lVar1);
    FUN_14096a150(lVar1 + 0x48);
  }
  return;
}


/* address=140a4dd70 name=FUN_140a4dd70 */

void FUN_140a4dd70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if (lVar1 != 0) {
      thunk_FUN_140704e90(param_1[1],lVar1,1);
    }
    lVar1 = param_1[0xc];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(param_1[0xd],lVar1,1);
    }
    if (param_1[3] != 0) {
      thunk_FUN_140704e90(param_1[4],param_1[3],1);
    }
    if (param_1[6] != 0) {
      thunk_FUN_140704e90(param_1[7],param_1[6],1);
    }
    if (param_1[9] != 0) {
      thunk_FUN_140704e90(param_1[10],param_1[9],1);
      return;
    }
  }
  return;
}


/* address=140a4de10 name=FUN_140a4de10 */

void FUN_140a4de10(longlong **param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 6) != '\x02') {
    FUN_140a44770();
    plVar1 = *param_1;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_140742760(param_1);
    }
    plVar1 = param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_140742350(param_1 + 1);
    }
    plVar1 = param_1[2];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1403536c0(param_1 + 2);
    }
    plVar1 = param_1[3];
    if (plVar1 != (longlong *)0x0) {
      CloseHandle(param_1[5]);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_140712f10(param_1 + 3);
      }
      plVar1 = param_1[4];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_140712dd0(param_1 + 4);
        return;
      }
    }
  }
  return;
}


/* address=140a4e000 name=FUN_140a4e000 */

void FUN_140a4e000(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 2) {
    lVar1 = *(longlong *)(param_1 + 8);
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 10),lVar1,1);
    }
    lVar1 = *(longlong *)(param_1 + 0xe);
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x10),lVar1,1);
    }
    lVar1 = *(longlong *)(param_1 + 0x14);
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x16),lVar1,1);
    }
    lVar1 = *(longlong *)(param_1 + 0x1a);
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x1c),lVar1,1);
      return;
    }
  }
  return;
}


/* address=140a4e0a0 name=FUN_140a4e0a0 */

void FUN_140a4e0a0(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong **pplVar5;
  bool bVar6;
  
  FUN_140a4dd70(param_1 + 0x58);
  uVar1 = *(ulonglong *)(param_1 + 0xf0);
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xf8),uVar1,1);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x108);
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x110),uVar1,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x178);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1403fd050(param_1 + 0x178);
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x120);
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x128),uVar1,1);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x10) << 4,8);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x28) << 4,8);
  }
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != 0) {
    pplVar5 = *(longlong ***)(param_1 + 0x48);
    lVar4 = 1;
    do {
      plVar2 = *pplVar5;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1403fd050(pplVar5);
      }
      pplVar5 = pplVar5 + 2;
      bVar6 = lVar4 != lVar3;
      lVar4 = lVar4 + 1;
    } while (bVar6);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x48),*(longlong *)(param_1 + 0x40) << 4,8);
  }
  plVar2 = *(longlong **)(param_1 + 400);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1403fd050(param_1 + 400);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x1a0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1403fd050(param_1 + 0x1a0);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x1b0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1403fd050(param_1 + 0x1b0);
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x138);
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x140),uVar1,1);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x150);
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x158),uVar1,1);
  }
  lVar3 = *(longlong *)(param_1 + 0xd8);
  if ((lVar3 != -1) && (lVar3 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xe0),lVar3,1);
    return;
  }
  return;
}


/* address=140a4e5f0 name=FUN_140a4e5f0 */

void FUN_140a4e5f0(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [2];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  int *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar5 = *(longlong *)(param_1 + 0x4a);
  if (lVar5 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x4c);
    lVar6 = *(longlong *)(param_1 + 0x4e);
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)(lVar1 + 8);
      do {
        lVar2 = puVar8[-1];
        if ((lVar2 != -1) && (lVar2 != 0)) {
          thunk_FUN_140704e90(*puVar8,lVar2,1);
        }
        puVar8 = puVar8 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar5 != 0) {
      thunk_FUN_140704e90(lVar1,lVar5 * 0x18,8);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x50);
  if ((lVar5 != -1) && (lVar5 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x52),lVar5,1);
  }
  lVar5 = *(longlong *)(param_1 + 0x56);
  if ((lVar5 != -1) && (lVar5 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x58),lVar5,1);
  }
  lVar5 = *(longlong *)(param_1 + 0x5c);
  if ((lVar5 != -1) && (lVar5 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x5e),lVar5,1);
  }
  local_40 = param_1;
  FUN_14096aaf0(param_1 + 0x62);
  piVar7 = local_40;
  lVar5 = *(longlong *)(local_40 + 0x6e);
  if ((lVar5 != -1) && (lVar5 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(local_40 + 0x70),lVar5,1);
  }
  FUN_140a49670(piVar7 + 0x116);
  piVar7 = local_40;
  lVar5 = *(longlong *)(local_40 + 0x74);
  if ((lVar5 != -1) && (lVar5 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(local_40 + 0x76),lVar5,1);
  }
  uVar3 = *(ulonglong *)(piVar7 + 0x8a);
  if ((uVar3 < 0xfffffffffffffffe) && (uVar3 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(piVar7 + 0x8c),uVar3,1);
  }
  uVar3 = *(ulonglong *)(piVar7 + 0x90);
  if ((uVar3 < 0xfffffffffffffffe) && (uVar3 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(piVar7 + 0x92),uVar3,1);
  }
  uVar3 = *(ulonglong *)(piVar7 + 0x96);
  if ((uVar3 < 0xfffffffffffffffe) && (uVar3 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(piVar7 + 0x98),uVar3,1);
  }
  uVar3 = *(ulonglong *)(piVar7 + 0x9c);
  if ((uVar3 < 0xfffffffffffffffe) && (uVar3 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(piVar7 + 0x9e),uVar3,1);
  }
  piVar4 = local_40;
  lVar5 = *(longlong *)(piVar7 + 0xa2);
  if (lVar5 != -2) {
    if ((lVar5 != -1) && (lVar5 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(local_40 + 0xa4),lVar5,1);
    }
    lVar5 = *(longlong *)(piVar4 + 0xa8);
    if ((lVar5 != -1) && (lVar5 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(piVar4 + 0xaa),lVar5,1);
    }
    lVar5 = *(longlong *)(piVar4 + 0xae);
    if ((lVar5 != -1) && (lVar5 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(piVar4 + 0xb0),lVar5,1);
    }
    FUN_140a49770(piVar4 + 0xb4);
  }
  FUN_140741100(local_40 + 0xc0);
  FUN_140a49980(local_40 + 0x11e);
  local_48 = (longlong *)(local_40 + 0x38);
  FUN_140a4d980();
  piVar7 = local_40;
  if (*local_48 != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(local_40 + 0x3a),*local_48 * 0x70,8);
  }
  local_50 = *(longlong *)(piVar7 + 0x40);
  local_58 = *(longlong *)(piVar7 + 0x42);
  local_48 = (longlong *)0x0;
  lVar5 = local_50;
  while (piVar7 = local_40, (longlong *)local_58 != local_48) {
    local_48 = (longlong *)((longlong)local_48 + 1);
    FUN_140a4bae0(lVar5);
    lVar5 = lVar5 + 0x228;
  }
  if (*(longlong *)(local_40 + 0x3e) != 0) {
    thunk_FUN_140704e90(local_50,*(longlong *)(local_40 + 0x3e) * 0x228,8);
  }
  if (*piVar7 != 2) {
    local_50 = *(longlong *)(piVar7 + 8);
    local_58 = *(longlong *)(piVar7 + 10);
    local_48 = (longlong *)0x0;
    lVar5 = local_50;
    while (piVar7 = local_40, (longlong *)local_58 != local_48) {
      local_48 = (longlong *)((longlong)local_48 + 1);
      FUN_140a4b7c0(lVar5);
      lVar5 = lVar5 + 0x160;
    }
    if (*(longlong *)(local_40 + 6) != 0) {
      thunk_FUN_140704e90(local_50,*(longlong *)(local_40 + 6) * 0x160,8);
    }
    lVar5 = *(longlong *)(piVar7 + 0xc);
    if (lVar5 == 0) {
      local_78 = 0;
    }
    else {
      local_a0 = *(undefined8 *)(piVar7 + 0xe);
      local_78 = *(undefined8 *)(piVar7 + 0x10);
      local_b0 = 0;
      local_90 = 0;
      local_a8 = lVar5;
      local_88 = lVar5;
      local_80 = local_a0;
    }
    local_b8 = (ulonglong)(lVar5 != 0);
    local_98 = local_b8;
    FUN_140a48e90(local_70,&local_b8);
    piVar7 = local_40;
    if (local_70[0] != 0) {
      do {
        lVar5 = *(longlong *)(local_70[0] + 8 + local_60 * 0x18);
        if (lVar5 != 0) {
          thunk_FUN_140704e90(*(undefined8 *)(local_70[0] + local_60 * 0x18 + 0x10),lVar5,1);
        }
        FUN_140a48e90(local_70,&local_b8);
        piVar7 = local_40;
      } while (local_70[0] != 0);
    }
  }
  FUN_140605b80(piVar7 + 0x12);
  local_48 = (longlong *)(piVar7 + 0x44);
  FUN_140a4dbf0();
  piVar7 = local_40;
  if (*local_48 != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(local_40 + 0x46),*local_48 * 200,8);
  }
  FUN_140a49670(piVar7 + 0x124);
  FUN_140a49770(local_40 + 0x12a);
  FUN_14096ace0(local_40 + 0x7a);
  if (*(ulonglong *)(local_40 + 0xfa) < 0xfffffffffffffffe) {
    FUN_1407416e0(local_40 + 0xfa);
    return;
  }
  return;
}


/* address=140a4f150 name=FUN_140a4f150 */

void FUN_140a4f150(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_38;
  
  FUN_140a4dd70(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0x140) != -1) {
    FUN_1407416e0(param_1 + 0x140);
  }
  FUN_140a4e000(param_1 + 0x20);
  if (*param_1 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    local_38 = 0;
    lVar1 = lVar2;
    while (lVar3 != local_38) {
      local_38 = local_38 + 1;
      FUN_140a4bc40(lVar1);
      lVar1 = lVar1 + 0x4c8;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 8) * 0x4c8;
    uVar4 = 8;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 == 0) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar4 = 1;
  }
  thunk_FUN_140704e90(lVar2,lVar3,uVar4);
  return;
}


/* address=140a4f340 name=FUN_140a4f340 */

/* WARNING: Removing unreachable block (ram,0x000140a4f3a3) */

bool FUN_140a4f340(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong local_30;
  uint *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x58) == -1) {
    return false;
  }
  lVar5 = *(longlong *)(param_1 + 0x248);
  puVar1 = (uint *)(lVar5 + 0x10);
  uVar4 = *(uint *)(lVar5 + 0x10);
  if (uVar4 < 0x3ffffffe) {
    LOCK();
    uVar2 = *puVar1;
    if (uVar4 == uVar2) {
      *puVar1 = uVar4 + 1;
    }
    UNLOCK();
    if (uVar4 == uVar2) {
      cVar3 = *(char *)(lVar5 + 0x18);
      goto joined_r0x000140a4f3cd;
    }
  }
  FUN_140e4a360(puVar1);
  cVar3 = *(char *)(lVar5 + 0x18);
joined_r0x000140a4f3cd:
  if (cVar3 == '\0') {
    LOCK();
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    return *(longlong *)(lVar5 + 0x20) != 0;
  }
  local_30 = lVar5 + 0x20;
  local_28 = puVar1;
  FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_30,&PTR_LAB_141063870,
                &PTR_s_C__Users_VssAdministrator__cargo_1410638f0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140a4f450 name=FUN_140a4f450 */

longlong FUN_140a4f450(longlong param_1,longlong param_2)

{
  undefined7 uVar1;
  longlong *plVar2;
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
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong unaff_R12;
  longlong lVar17;
  longlong lVar18;
  longlong unaff_GS_OFFSET;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined3 local_f8;
  undefined4 uStack_f5;
  undefined4 uStack_f1;
  undefined4 uStack_ed;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar18 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  lVar17 = lVar18 + 0x208;
  local_50 = param_2;
  if ((*(char *)(lVar18 + 0x218) != '\x01') && (lVar17 = FUN_140e5a160(lVar17,0), lVar17 == 0)) {
    FUN_140e4aee0(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063aa0);
    goto LAB_140a4f8f1;
  }
  if ((*(char *)(lVar17 + 8) == '\x01') && (DAT_14139cbb0 != 0)) {
    local_128 = 0x4139cba0;
    uStack_124 = 1;
    local_e8 = &local_128;
    FUN_140e4a710(&DAT_14139cbb0,1,&local_e8,&DAT_1410639c0,
                  &PTR_s__rustc_48a229ceaefd4985c50990b14_141063a38);
    if (*(longlong *)(local_50 + 0x58) == -1) goto LAB_140a4f564;
LAB_140a4f4be:
    if (*(longlong *)(local_50 + 0x1b0) == 0) goto LAB_140a4f564;
    lVar17 = local_50;
    uVar14 = (**(code **)(*(longlong *)(local_50 + 0x1b8) + 0x18))
                       ((*(longlong *)(*(longlong *)(local_50 + 0x1b8) + 0x10) - 1U &
                        0xfffffffffffffff0) + *(longlong *)(local_50 + 0x1b0) + 0x10);
    uStack_c0 = lVar17;
  }
  else {
    if (*(longlong *)(local_50 + 0x58) != -1) goto LAB_140a4f4be;
LAB_140a4f564:
    uVar14 = 0;
    uStack_c0 = local_50;
  }
  local_e8 = (undefined4 *)0x1;
  uStack_e0 = 1;
  local_d8 = 0;
  uStack_d0 = uStack_d0 & 0xffffff00;
  local_c8 = uVar14;
  FUN_140081a90();
  local_68 = (longlong *)thunk_FUN_140704e30(0x30,8);
  if (local_68 == (longlong *)0x0) {
    local_58 = uVar14;
    FUN_140e4b571(8,0x30);
  }
  else {
    *(undefined4 *)(local_68 + 4) = (undefined4)local_c8;
    *(undefined4 *)((longlong)local_68 + 0x24) = local_c8._4_4_;
    *(undefined4 *)(local_68 + 5) = (undefined4)uStack_c0;
    *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_c0._4_4_;
    *(undefined4 *)(local_68 + 2) = (undefined4)local_d8;
    *(undefined4 *)((longlong)local_68 + 0x14) = local_d8._4_4_;
    *(uint *)(local_68 + 3) = uStack_d0;
    *(undefined4 *)((longlong)local_68 + 0x1c) = uStack_cc;
    *(undefined4 *)local_68 = (undefined4)local_e8;
    *(undefined4 *)((longlong)local_68 + 4) = local_e8._4_4_;
    *(undefined4 *)(local_68 + 1) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)local_68 + 0xc) = uStack_e0._4_4_;
    if (DAT_1413ba7e8 != 0) {
      local_128 = 0x413ba788;
      uStack_124 = 1;
      local_e8 = &local_128;
      FUN_140e4a710(&DAT_1413ba7e8,1,&local_e8,&DAT_1410636f0,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_141063768);
    }
    FUN_140728970(&local_140,&PTR_LAB_1413ba788);
    FUN_140728970(&local_80,&DAT_1413ba7a0);
    FUN_140a4d230(&local_178,&DAT_1413ba7b8);
    FUN_140a4d640(&local_128,&DAT_1413ba7d0);
    local_d8 = local_130;
    local_e8 = (undefined4 *)CONCAT44(uStack_13c,local_140);
    uStack_e0 = CONCAT44(uStack_134,uStack_138);
    uStack_d0 = local_80;
    uStack_cc = uStack_7c;
    local_c8 = CONCAT44(uStack_74,uStack_78);
    uStack_c0 = local_70;
    local_b8 = local_178;
    uStack_b4 = uStack_174;
    uStack_b0 = uStack_170;
    uStack_ac = uStack_16c;
    local_a8 = local_168;
    uStack_a0 = local_128;
    uStack_9c = uStack_124;
    uStack_98 = uStack_120;
    uStack_94 = uStack_11c;
    uStack_90 = CONCAT44(uStack_114,local_118);
    FUN_140a4d090(&local_80,*(longlong *)(local_50 + 0x48),
                  *(longlong *)(local_50 + 0x50) * 0x10 + *(longlong *)(local_50 + 0x48));
    lVar17 = CONCAT44(uStack_74,uStack_78);
    lVar18 = local_70 * 0x20 + lVar17;
    plVar2 = local_68;
    for (; local_68 = plVar2, lVar17 != lVar18; lVar17 = lVar17 + 0x20) {
      (**(code **)(*(longlong *)(lVar17 + 0x18) + 0x38))
                ((*(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x10) - 1U & 0xfffffffffffffff0) +
                 *(longlong *)(lVar17 + 0x10) + 0x10,local_50);
      lVar16 = *(longlong *)(lVar17 + 0x18);
      uVar14 = (**(code **)(lVar16 + 0x30))
                         ((*(longlong *)(lVar16 + 0x10) - 1U & 0xfffffffffffffff0) +
                          *(longlong *)(lVar17 + 0x10) + 0x10);
      if (lVar16 < 0) {
        uVar14 = 0;
LAB_140a4f8cf:
        FUN_140e4b58b(uVar14,unaff_R12);
        goto LAB_140a4f8f1;
      }
      local_58 = lVar16;
      if (lVar16 == 0) {
        local_60 = 1;
        if (local_a8 == CONCAT44(uStack_b4,local_b8)) {
LAB_140a4f764:
          lVar16 = local_a8;
          FUN_140e31950(&local_b8);
          local_a8 = lVar16;
        }
      }
      else {
        FUN_140081a90();
        lVar15 = thunk_FUN_140704e30(lVar16,1);
        if (lVar15 == 0) {
          uVar14 = 1;
          unaff_R12 = lVar16;
          goto LAB_140a4f8cf;
        }
        local_60 = lVar15;
        FUN_140e286a0(lVar15,uVar14,lVar16);
        if (local_a8 == CONCAT44(uStack_b4,local_b8)) goto LAB_140a4f764;
      }
      lVar16 = CONCAT44(uStack_ac,uStack_b0);
      *(longlong *)(lVar16 + local_a8 * 0x18) = local_58;
      *(longlong *)(lVar16 + 8 + local_a8 * 0x18) = local_60;
      *(longlong *)(lVar16 + 0x10 + local_a8 * 0x18) = local_58;
      local_a8 = local_a8 + 1;
      unaff_R12 = local_60;
      plVar2 = local_68;
    }
    LOCK();
    lVar17 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 != 0 && SCARRY8(lVar17,1) == *plVar2 < 0) {
      FUN_140a436b0(&local_128,plVar2,*(undefined *)(local_50 + 0x1ce));
      uVar13 = uStack_fc;
      uVar12 = uStack_100;
      uVar11 = uStack_104;
      uVar10 = local_108;
      uVar9 = uStack_10c;
      uVar8 = uStack_110;
      uVar7 = uStack_114;
      uVar6 = local_118;
      uVar5 = uStack_11c;
      uVar4 = uStack_120;
      uVar3 = uStack_124;
      uVar1 = CONCAT43(uStack_f5,local_f8);
      local_148 = CONCAT17((undefined)uStack_f1,uVar1);
      uStack_120._3_1_ = (undefined)uVar3;
      uStack_120 = CONCAT13(uStack_120._3_1_,(int3)((uint)local_128 >> 8));
      uStack_11c._3_1_ = (undefined)uVar4;
      uStack_11c = CONCAT13(uStack_11c._3_1_,(int3)((uint)uVar3 >> 8));
      local_118._3_1_ = (undefined)uVar5;
      local_118 = CONCAT13(local_118._3_1_,(int3)((uint)uVar4 >> 8));
      uStack_114._3_1_ = (undefined)uVar6;
      uStack_114 = CONCAT13(uStack_114._3_1_,(int3)((uint)uVar5 >> 8));
      uStack_110._3_1_ = (undefined)uVar7;
      uStack_110 = CONCAT13(uStack_110._3_1_,(int3)((uint)uVar6 >> 8));
      uStack_10c._3_1_ = (undefined)uVar8;
      uStack_10c = CONCAT13(uStack_10c._3_1_,(int3)((uint)uVar7 >> 8));
      local_108._3_1_ = (undefined)uVar9;
      local_108 = CONCAT13(local_108._3_1_,(int3)((uint)uVar8 >> 8));
      uStack_104._3_1_ = (undefined)uVar10;
      uStack_104 = CONCAT13(uStack_104._3_1_,(int3)((uint)uVar9 >> 8));
      uStack_100._3_1_ = (undefined)uVar11;
      uStack_100 = CONCAT13(uStack_100._3_1_,(int3)((uint)uVar10 >> 8));
      uStack_fc._3_1_ = (undefined)uVar12;
      uStack_fc = CONCAT13(uStack_fc._3_1_,(int3)((uint)uVar11 >> 8));
      local_f8 = (undefined3)((uint)uVar12 >> 8);
      uStack_f5 = uVar13;
      uStack_f1 = (undefined4)uVar1;
      uStack_ed = (undefined4)((ulonglong)local_148 >> 0x20);
      FUN_140e286a0(param_1,local_50,0x1d0);
      *(longlong *)(param_1 + 0x1e0) = local_70;
      *(undefined4 *)(param_1 + 0x1d0) = local_80;
      *(undefined4 *)(param_1 + 0x1d4) = uStack_7c;
      *(undefined4 *)(param_1 + 0x1d8) = uStack_78;
      *(undefined4 *)(param_1 + 0x1dc) = uStack_74;
      *(undefined4 *)(param_1 + 0x1e8) = (undefined4)local_e8;
      *(undefined4 *)(param_1 + 0x1ec) = local_e8._4_4_;
      *(undefined4 *)(param_1 + 0x1f0) = (undefined4)uStack_e0;
      *(undefined4 *)(param_1 + 500) = uStack_e0._4_4_;
      *(undefined4 *)(param_1 + 0x1f8) = (undefined4)local_d8;
      *(undefined4 *)(param_1 + 0x1fc) = local_d8._4_4_;
      *(uint *)(param_1 + 0x200) = uStack_d0;
      *(undefined4 *)(param_1 + 0x204) = uStack_cc;
      *(undefined4 *)(param_1 + 0x208) = (undefined4)local_c8;
      *(undefined4 *)(param_1 + 0x20c) = local_c8._4_4_;
      *(undefined4 *)(param_1 + 0x210) = (undefined4)uStack_c0;
      *(undefined4 *)(param_1 + 0x214) = uStack_c0._4_4_;
      *(undefined4 *)(param_1 + 0x218) = local_b8;
      *(undefined4 *)(param_1 + 0x21c) = uStack_b4;
      *(undefined4 *)(param_1 + 0x220) = uStack_b0;
      *(undefined4 *)(param_1 + 0x224) = uStack_ac;
      *(undefined4 *)(param_1 + 0x228) = (undefined4)local_a8;
      *(undefined4 *)(param_1 + 0x22c) = local_a8._4_4_;
      *(undefined4 *)(param_1 + 0x230) = uStack_a0;
      *(undefined4 *)(param_1 + 0x234) = uStack_9c;
      *(undefined4 *)(param_1 + 0x238) = uStack_98;
      *(undefined4 *)(param_1 + 0x23c) = uStack_94;
      *(undefined4 *)(param_1 + 0x240) = (undefined4)uStack_90;
      *(undefined4 *)(param_1 + 0x244) = uStack_90._4_4_;
      *(longlong **)(param_1 + 0x248) = plVar2;
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined *)(param_1 + 600) = 0;
      *(undefined4 *)(param_1 + 0x259) = local_128;
      *(undefined4 *)(param_1 + 0x25d) = uStack_124;
      *(undefined4 *)(param_1 + 0x261) = uStack_120;
      *(undefined4 *)(param_1 + 0x265) = uStack_11c;
      *(undefined4 *)(param_1 + 0x269) = local_118;
      *(undefined4 *)(param_1 + 0x26d) = uStack_114;
      *(undefined4 *)(param_1 + 0x271) = uStack_110;
      *(undefined4 *)(param_1 + 0x275) = uStack_10c;
      *(undefined4 *)(param_1 + 0x279) = local_108;
      *(undefined4 *)(param_1 + 0x27d) = uStack_104;
      *(undefined4 *)(param_1 + 0x281) = uStack_100;
      *(undefined4 *)(param_1 + 0x285) = uStack_fc;
      *(uint *)(param_1 + 0x288) = CONCAT31(local_f8,uStack_fc._3_1_);
      *(undefined4 *)(param_1 + 0x28c) = uStack_f5;
      *(undefined4 *)(param_1 + 0x290) = uStack_f1;
      *(undefined4 *)(param_1 + 0x294) = uStack_ed;
      return param_1;
    }
  }
LAB_140a4f8f1:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140a4fbe0 name=FUN_140a4fbe0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000140a50164) */
/* WARNING: Removing unreachable block (ram,0x000140a4fffd) */
/* WARNING: Removing unreachable block (ram,0x000140a5014f) */

undefined (*) [16]
FUN_140a4fbe0(undefined (*param_1) [16],longlong param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  undefined8 local_15d0;
  undefined4 local_15c8;
  undefined4 uStack_15c4;
  undefined4 uStack_15c0;
  undefined4 uStack_15bc;
  undefined4 local_15b8;
  undefined4 uStack_15b4;
  undefined4 uStack_15b0;
  undefined4 uStack_15ac;
  undefined4 local_15a8;
  undefined4 uStack_15a4;
  undefined4 uStack_15a0;
  undefined4 uStack_159c;
  undefined4 local_1598;
  undefined4 uStack_1594;
  undefined4 uStack_1590;
  undefined4 uStack_158c;
  undefined4 local_1588;
  undefined4 uStack_1584;
  undefined4 uStack_1580;
  undefined4 uStack_157c;
  undefined4 local_1578;
  undefined4 uStack_1574;
  undefined4 uStack_1570;
  undefined4 uStack_156c;
  undefined8 local_1108;
  undefined local_1100 [1216];
  int local_c40 [274];
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined local_778 [9];
  undefined7 uStack_76f;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_6b8;
  undefined8 local_638;
  undefined4 local_5d8;
  undefined local_5cc;
  char local_2a8 [8];
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined (*local_70) [16];
  longlong local_68;
  undefined8 local_60;
  uint *local_58;
  undefined4 local_50;
  undefined local_4a;
  undefined local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_2 + 0x248);
  puVar1 = (uint *)(lVar3 + 0x10);
  uVar2 = *(uint *)(lVar3 + 0x10);
  local_60 = param_3;
  if (uVar2 < 0x3ffffffe) {
    LOCK();
    uVar8 = *puVar1;
    if (uVar2 == uVar8) {
      *puVar1 = uVar2 + 1;
    }
    UNLOCK();
    if (uVar2 != uVar8) goto LAB_140a5007a;
  }
  else {
LAB_140a5007a:
    local_4a = 1;
    FUN_140e4a360(puVar1);
  }
  if (*(char *)(lVar3 + 0x18) != '\0') {
    stack0xfffffffffffff890 = puVar1;
    local_778._0_8_ = lVar3 + 0x20;
    FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,local_778,&PTR_LAB_141063870,
                  &PTR_s_C__Users_VssAdministrator__cargo_141063910);
LAB_140a50138:
    do {
      invalidInstructionException();
    } while( true );
  }
  local_70 = param_1;
  if (*(longlong *)(lVar3 + 0x20) == 0) {
    LOCK();
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    *param_1 = ZEXT816(0);
    FUN_140a4e5f0(local_60);
  }
  else {
    local_58 = puVar1;
    FUN_140e286a0(local_778,local_60,0x4c8);
    FUN_140a50480(local_c40,param_2,local_778,param_4);
    if (local_c40[0] == -1) {
      LOCK();
      *local_58 = *local_58 - 1;
      UNLOCK();
      *param_1 = ZEXT816(0);
    }
    else {
      *(undefined4 *)*param_1 = local_7f8;
      *(undefined4 *)(*param_1 + 4) = uStack_7f4;
      *(undefined4 *)(*param_1 + 8) = uStack_7f0;
      *(undefined4 *)(*param_1 + 0xc) = uStack_7ec;
      local_758 = 2;
      local_6b8 = 0xffffffffffffffff;
      local_638 = 0xffffffffffffffff;
      local_5d8 = 0;
      local_5cc = 0;
      _local_778 = ZEXT816(0);
      local_768 = 8;
      local_760 = 0;
      local_78 = lVar3;
      FUN_140af9cd0(local_778,local_c40);
      FUN_140e286a0(local_2a8,local_778,0x1c0);
      if (*(char *)(param_2 + 0x1ce) == '\0' && param_4 != 0) {
        lVar4 = *(longlong *)(param_4 + 0x50);
        lVar3 = lVar4 + 0x10;
        LOCK();
        bVar10 = *(char *)(lVar4 + 0x10) == '\0';
        if (bVar10) {
          *(char *)(lVar4 + 0x10) = '\x01';
        }
        UNLOCK();
        if (!bVar10) {
          local_49 = 1;
          FUN_140e4a290(lVar3);
        }
        puVar6 = PTR_DAT_14139cb28;
        if ((*(ulonglong *)PTR_DAT_14139cb28 & 0x7fffffffffffffff) == 0) {
          cVar7 = *(char *)(lVar4 + 0x11);
          uVar2 = local_50;
          local_50 = 0;
        }
        else {
          local_49 = 1;
          uVar8 = FUN_140e4b070();
          cVar7 = *(char *)(lVar4 + 0x11);
          uVar2 = local_50;
          local_50 = uVar8 ^ 1;
        }
        if (cVar7 != '\0') {
          uStack_76f = (undefined7)((ulonglong)unique0x100009bc >> 8);
          local_778[8] = (char)local_50;
          local_778._0_8_ = lVar3;
          FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,local_778,
                        &PTR_FUN_141063820,&PTR_s_C__Users_VssAdministrator__cargo_141063808);
          goto LAB_140a50138;
        }
        local_1108 = 0xffffffffffffffff;
        uVar8 = local_50;
        if ((*(int *)(lVar4 + 0x18) != 2) && (*(char *)(lVar4 + 0xf8) == '\x01')) {
          local_68 = lVar3;
          FUN_140a44cd0(local_1100,lVar4 + 0x18);
          *(undefined *)(lVar4 + 0xdc) = 0;
          *(undefined *)(lVar4 + 0xf8) = 0;
          local_1108 = 3;
          uVar2 = local_50;
          uVar8 = local_50;
        }
        local_50 = uVar2;
        pcVar9 = (char *)(lVar4 + 0x10);
        if (((char)uVar8 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) {
          local_49 = 1;
          cVar7 = FUN_140e4b070();
          if (cVar7 == '\0') {
            *(undefined *)(lVar4 + 0x11) = 1;
          }
        }
        LOCK();
        cVar7 = *pcVar9;
        *pcVar9 = '\0';
        UNLOCK();
        if (cVar7 == '\x02') {
          local_49 = 1;
          WakeByAddressSingle(pcVar9);
        }
        if ((int)local_1108 != -1) {
          local_49 = 1;
          FUN_140af9cd0(local_2a8,&local_1108);
        }
      }
      if (param_4 != 0) {
        local_88 = *(longlong *)(*(longlong *)(param_4 + 0x60) + 0x18);
        local_80 = *(longlong *)(*(longlong *)(param_4 + 0x60) + 0x20) * 0x60 + local_88;
        while( true ) {
          local_49 = 1;
          FUN_140a44a30(&local_e8,&local_88);
          if (CONCAT44(uStack_e4,local_e8) == -1) break;
          local_1578 = local_98;
          uStack_1574 = uStack_94;
          uStack_1570 = uStack_90;
          uStack_156c = uStack_8c;
          local_1588 = local_a8;
          uStack_1584 = uStack_a4;
          uStack_1580 = uStack_a0;
          uStack_157c = uStack_9c;
          local_1598 = local_b8;
          uStack_1594 = uStack_b4;
          uStack_1590 = uStack_b0;
          uStack_158c = uStack_ac;
          local_15a8 = local_c8;
          uStack_15a4 = uStack_c4;
          uStack_15a0 = uStack_c0;
          uStack_159c = uStack_bc;
          local_15b8 = local_d8;
          uStack_15b4 = uStack_d4;
          uStack_15b0 = uStack_d0;
          uStack_15ac = uStack_cc;
          local_15c8 = local_e8;
          uStack_15c4 = uStack_e4;
          uStack_15c0 = uStack_e0;
          uStack_15bc = uStack_dc;
          local_15d0 = 6;
          local_50 = CONCAT31(local_50._1_3_,local_2a8[0]);
          if (local_2a8[0] == '\0') {
            FUN_140e286a0(local_778,&local_15d0,0x4c8);
            lVar3 = local_290;
            if (local_290 == local_2a0) {
              FUN_140e3d360(&local_2a0);
            }
            FUN_140e286a0(lVar3 * 0x4c8 + local_298,local_778,0x4c8);
            local_290 = lVar3 + 1;
          }
          else {
            FUN_1407170b0(&DAT_1410a1b30,0x99);
            local_49 = 1;
            FUN_140afa2c0(&local_15d0);
          }
        }
      }
      lVar3 = *(longlong *)(local_78 + 0x20);
      lVar4 = *(longlong *)(local_78 + 0x28);
      lVar5 = *(longlong *)(lVar4 + 0x10);
      FUN_140e286a0(local_778,local_2a8,0x1c0);
      local_49 = 0;
      (**(code **)(lVar4 + 0x18))(lVar3 + (lVar5 - 1U & 0xfffffffffffffff0) + 0x10,local_778);
      LOCK();
      *local_58 = *local_58 - 1;
      UNLOCK();
    }
  }
  return local_70;
}


/* address=140a50480 name=FUN_140a50480 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a50480(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined local_18d0 [1224];
  int local_1408 [306];
  int local_f40 [306];
  int local_a78;
  int iStack_a74;
  int iStack_a70;
  int iStack_a6c;
  undefined4 local_a68;
  undefined4 uStack_a64;
  undefined4 uStack_a60;
  undefined4 uStack_a5c;
  undefined4 local_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 local_a48;
  undefined4 uStack_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  ulonglong local_a38;
  ulonglong local_a30;
  int local_a28;
  int iStack_a24;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined8 local_5a8;
  int iStack_5a0;
  int iStack_59c;
  undefined8 local_598;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined8 uStack_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  ulonglong local_568;
  int local_560;
  int iStack_55c;
  int iStack_558;
  int iStack_554;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong local_70;
  undefined local_61;
  undefined8 local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x140a50496;
  local_60 = 0xfffffffffffffffe;
  local_78 = (longlong *)(param_3 + 0x448);
  local_88 = param_4;
  local_80 = param_1;
  local_70 = param_3;
  if ((*(ulonglong *)(param_3 + 0x448) | *(ulonglong *)(param_3 + 0x450)) == 0) {
    local_61 = 1;
    FUN_140afccb0(&local_5a8);
    *(int *)local_78 = (int)local_5a8;
    *(int *)((longlong)local_78 + 4) = local_5a8._4_4_;
    *(int *)((longlong)local_78 + 8) = iStack_5a0;
    *(int *)((longlong)local_78 + 0xc) = iStack_59c;
    local_90 = (ulonglong *)(local_70 + 1000);
    lVar16 = *(longlong *)(local_70 + 1000);
  }
  else {
    local_90 = (ulonglong *)(param_3 + 1000);
    lVar16 = *(longlong *)(param_3 + 1000);
  }
  if (lVar16 == -2) {
    local_61 = 1;
    FUN_140728970(&local_a8,param_2 + 0x1e8);
    FUN_140728970(&local_c0,param_2 + 0x200);
    FUN_140a4d230(&local_d8,param_2 + 0x218);
    puVar10 = local_90;
    FUN_140a4d640(&local_a78,param_2 + 0x230);
    local_598 = local_98;
    uVar18 = local_598;
    local_5a8 = (longlong *)CONCAT44(iStack_a4,local_a8);
    iStack_5a0 = iStack_a0;
    iStack_59c = iStack_9c;
    uStack_590 = local_c0;
    uStack_58c = uStack_bc;
    uStack_588 = uStack_b8;
    uStack_584 = uStack_b4;
    uStack_580 = local_b0;
    uVar9 = uStack_580;
    local_578 = local_d8;
    uStack_574 = uStack_d4;
    uStack_570 = uStack_d0;
    uStack_56c = uStack_cc;
    local_568 = local_c8;
    local_560 = local_a78;
    iStack_55c = iStack_a74;
    iStack_558 = iStack_a70;
    iStack_554 = iStack_a6c;
    uStack_a20 = local_a68;
    uStack_a1c = uStack_a64;
    local_a28 = iStack_a70;
    iStack_a24 = iStack_a6c;
    local_a38 = local_c8;
    local_a30 = CONCAT44(iStack_a74,local_a78);
    local_598._0_4_ = (undefined4)local_98;
    local_598._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_580._0_4_ = (undefined4)local_b0;
    uStack_580._4_4_ = (undefined4)((ulonglong)local_b0 >> 0x20);
    local_a48 = local_d8;
    uStack_a44 = uStack_d4;
    uStack_a40 = uStack_d0;
    uStack_a3c = uStack_cc;
    local_a58 = uStack_b8;
    uStack_a54 = uStack_b4;
    uStack_a50 = (undefined4)uStack_580;
    uStack_a4c = uStack_580._4_4_;
    local_a68 = (undefined4)local_598;
    uStack_a64 = local_598._4_4_;
    uStack_a60 = local_c0;
    uStack_a5c = uStack_bc;
    local_a78 = local_a8;
    iStack_a74 = iStack_a4;
    iStack_a70 = iStack_a0;
    iStack_a6c = iStack_9c;
    local_598 = uVar18;
    uStack_580 = uVar9;
    if (*puVar10 < 0xfffffffffffffffe) {
      FUN_1407416e0(puVar10);
    }
    *(int *)(puVar10 + 10) = local_a28;
    *(int *)((longlong)puVar10 + 0x54) = iStack_a24;
    *(undefined4 *)(puVar10 + 0xb) = uStack_a20;
    *(undefined4 *)((longlong)puVar10 + 0x5c) = uStack_a1c;
    puVar10[8] = local_a38;
    puVar10[9] = local_a30;
    *(undefined4 *)(puVar10 + 6) = local_a48;
    *(undefined4 *)((longlong)puVar10 + 0x34) = uStack_a44;
    *(undefined4 *)(puVar10 + 7) = uStack_a40;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_a3c;
    *(undefined4 *)(puVar10 + 4) = local_a58;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_a54;
    *(undefined4 *)(puVar10 + 5) = uStack_a50;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_a4c;
    *(undefined4 *)(puVar10 + 2) = local_a68;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_a64;
    *(undefined4 *)(puVar10 + 3) = uStack_a60;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_a5c;
    *(int *)puVar10 = local_a78;
    *(int *)((longlong)puVar10 + 4) = iStack_a74;
    *(int *)(puVar10 + 1) = iStack_a70;
    *(int *)((longlong)puVar10 + 0xc) = iStack_a6c;
  }
  if (local_88 != 0) {
    FUN_140e286a0(&local_5a8,local_70,0x4c8);
    local_61 = 0;
    FUN_14096b390(&local_a78,local_88,&local_5a8);
    if (local_a78 == -1) goto LAB_140a5087f;
    FUN_140e286a0(local_18d0,&local_a78,0x4c8);
    FUN_140e286a0(local_70,local_18d0,0x4c8);
  }
  lVar16 = *(longlong *)(param_2 + 0x1d8);
  lVar15 = *(longlong *)(param_2 + 0x1e0) * 0x20 + lVar16;
  puVar17 = &local_5a8;
  piVar11 = local_1408;
  lVar8 = local_70;
  for (; local_70 = lVar8, lVar16 != lVar15; lVar16 = lVar16 + 0x20) {
    local_a78 = *(int *)local_78;
    iStack_a74 = *(int *)((longlong)local_78 + 4);
    iStack_a70 = *(int *)((longlong)local_78 + 8);
    iStack_a6c = *(int *)((longlong)local_78 + 0xc);
    lVar3 = *(longlong *)(lVar16 + 0x10);
    lVar4 = *(longlong *)(lVar16 + 0x18);
    lVar5 = *(longlong *)(lVar4 + 0x10);
    FUN_140e286a0(puVar17,lVar8,0x4c8);
    local_61 = 0;
    (**(code **)(lVar4 + 0x40))
              (piVar11,lVar3 + (lVar5 - 1U & 0xfffffffffffffff0) + 0x10,puVar17,param_2);
    if (local_1408[0] == -1) {
      local_61 = 0;
      FUN_140a53600(&PTR_FUN_141063908,&local_a78);
      goto LAB_140a5087f;
    }
    FUN_140e286a0(local_70,piVar11,0x4c8);
    lVar8 = local_70;
  }
  if (*(longlong *)(lVar8 + 0x240) == -2) {
    if (*(longlong *)(param_2 + 0xf0) == -2) {
      puVar12 = (undefined8 *)0xfffffffffffffffe;
    }
    else {
      piVar6 = *(int **)(param_2 + 0xf8);
      puVar17 = *(undefined8 **)(param_2 + 0x100);
      if (*(longlong *)(param_2 + 0xf0) == -1) {
        puVar12 = (undefined8 *)0xffffffffffffffff;
        piVar11 = piVar6;
      }
      else {
        if ((longlong)puVar17 < 0) {
          uVar18 = 0;
LAB_140a508c4:
          local_61 = 1;
          FUN_140e4b58b(uVar18,puVar17);
          goto LAB_140a50a97;
        }
        if (puVar17 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)0x0;
          puVar12 = (undefined8 *)0x0;
          piVar11 = (int *)0x1;
        }
        else {
          FUN_140081a90();
          uVar18 = 1;
          piVar11 = (int *)thunk_FUN_140704e30(puVar17,1);
          if (piVar11 == (int *)0x0) goto LAB_140a508c4;
          FUN_140e286a0(piVar11,piVar6,puVar17);
          uVar14 = *(ulonglong *)(lVar8 + 0x240);
          puVar12 = puVar17;
          if ((uVar14 < 0xfffffffffffffffe) && (uVar14 != 0)) {
            thunk_FUN_140704e90(*(undefined8 *)(lVar8 + 0x248),uVar14,1);
          }
        }
      }
    }
    *(undefined8 **)(lVar8 + 0x240) = puVar12;
    *(int **)(lVar8 + 0x248) = piVar11;
    *(undefined8 **)(lVar8 + 0x250) = puVar17;
  }
  if (*(longlong *)(lVar8 + 0x270) == -2) {
    if (*(longlong *)(param_2 + 0x108) == -2) {
      puVar12 = (undefined8 *)0xfffffffffffffffe;
    }
    else {
      piVar6 = *(int **)(param_2 + 0x110);
      puVar17 = *(undefined8 **)(param_2 + 0x118);
      if (*(longlong *)(param_2 + 0x108) == -1) {
        puVar12 = (undefined8 *)0xffffffffffffffff;
        piVar11 = piVar6;
      }
      else {
        if ((longlong)puVar17 < 0) {
          uVar18 = 0;
LAB_140a509a4:
          local_61 = 1;
          FUN_140e4b58b(uVar18,puVar17);
          goto LAB_140a50a97;
        }
        if (puVar17 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)0x0;
          puVar12 = (undefined8 *)0x0;
          piVar11 = (int *)0x1;
        }
        else {
          FUN_140081a90();
          uVar18 = 1;
          piVar11 = (int *)thunk_FUN_140704e30(puVar17,1);
          if (piVar11 == (int *)0x0) goto LAB_140a509a4;
          FUN_140e286a0(piVar11,piVar6,puVar17);
          uVar14 = *(ulonglong *)(lVar8 + 0x270);
          puVar12 = puVar17;
          if ((uVar14 < 0xfffffffffffffffe) && (uVar14 != 0)) {
            thunk_FUN_140704e90(*(undefined8 *)(lVar8 + 0x278),uVar14,1);
          }
        }
      }
    }
    *(undefined8 **)(lVar8 + 0x270) = puVar12;
    *(int **)(lVar8 + 0x278) = piVar11;
    *(undefined8 **)(lVar8 + 0x280) = puVar17;
  }
  if (*(longlong *)(lVar8 + 0x228) == -2) {
    if (*(longlong *)(param_2 + 0x120) == -2) {
      puVar12 = (undefined8 *)0xfffffffffffffffe;
    }
    else {
      piVar6 = *(int **)(param_2 + 0x128);
      puVar17 = *(undefined8 **)(param_2 + 0x130);
      if (*(longlong *)(param_2 + 0x120) == -1) {
        puVar12 = (undefined8 *)0xffffffffffffffff;
        piVar11 = piVar6;
      }
      else {
        if ((longlong)puVar17 < 0) {
          uVar18 = 0;
LAB_140a50a84:
          local_61 = 1;
          FUN_140e4b58b(uVar18,puVar17);
LAB_140a50a97:
          do {
            invalidInstructionException();
          } while( true );
        }
        if (puVar17 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)0x0;
          puVar12 = (undefined8 *)0x0;
          piVar11 = (int *)0x1;
        }
        else {
          FUN_140081a90();
          uVar18 = 1;
          piVar11 = (int *)thunk_FUN_140704e30(puVar17,1);
          if (piVar11 == (int *)0x0) goto LAB_140a50a84;
          FUN_140e286a0(piVar11,piVar6,puVar17);
          uVar14 = *(ulonglong *)(lVar8 + 0x228);
          puVar12 = puVar17;
          if ((uVar14 < 0xfffffffffffffffe) && (uVar14 != 0)) {
            thunk_FUN_140704e90(*(undefined8 *)(lVar8 + 0x230),uVar14,1);
          }
        }
      }
    }
    *(undefined8 **)(lVar8 + 0x228) = puVar12;
    *(int **)(lVar8 + 0x230) = piVar11;
    *(undefined8 **)(lVar8 + 0x238) = puVar17;
  }
  if ((*(longlong *)(lVar8 + 0x1e0) == 5) &&
     (puVar7 = *(uint **)(lVar8 + 0x1d8), (*(byte *)(puVar7 + 1) ^ 0x72 | *puVar7 ^ 0x6568746f) == 0
     )) {
    if (*(longlong *)(lVar8 + 0x1d0) - 1U < 0xfffffffffffffffe) {
      thunk_FUN_140704e90(puVar7,*(longlong *)(lVar8 + 0x1d0),1);
    }
    *(undefined8 *)(lVar8 + 0x1d0) = 0xffffffffffffffff;
    *(char **)(lVar8 + 0x1d8) = "native";
    *(undefined8 *)(lVar8 + 0x1e0) = 6;
    lVar16 = *(longlong *)(param_2 + 400);
  }
  else {
    lVar16 = *(longlong *)(param_2 + 400);
  }
  if (lVar16 != 0) {
    local_61 = 1;
    FUN_140a53900(&PTR_FUN_141063908);
    local_a78 = *(int *)local_78;
    iStack_a74 = *(int *)((longlong)local_78 + 4);
    iStack_a70 = *(int *)((longlong)local_78 + 8);
    iStack_a6c = *(int *)((longlong)local_78 + 0xc);
    lVar16 = *(longlong *)(param_2 + 400);
    lVar8 = *(longlong *)(param_2 + 0x198);
    lVar15 = *(longlong *)(lVar8 + 0x10);
    FUN_140e286a0(&local_5a8,local_70,0x4c8);
    local_61 = 0;
    (**(code **)(lVar8 + 0x28))
              (local_f40,lVar16 + (lVar15 - 1U & 0xfffffffffffffff0) + 0x10,&local_5a8);
    if (local_f40[0] == -1) {
      local_61 = 0;
      FUN_140a53780(&PTR_FUN_141063908,&local_a78);
LAB_140a5087f:
      *local_80 = 0xffffffffffffffff;
      return local_80;
    }
    FUN_140e286a0(local_70,local_f40,0x4c8);
  }
  if (local_88 != 0) {
    local_61 = 1;
    FUN_14096c4a0(local_88,local_70);
  }
  fVar1 = *(float *)(param_2 + 0x1c0);
  if (_s__140eadbf0 <= fVar1) {
LAB_140a50d5f:
    puVar17 = local_80;
    FUN_140e286a0(local_80,local_70,0x4c8);
  }
  else {
    if (0.0 < fVar1) {
      local_61 = 1;
      plVar13 = (longlong *)FUN_140afd2c0();
      uVar14 = plVar13[0x2a];
      local_5a8 = plVar13;
      if (0x3f < uVar14) {
        if (plVar13[0x29] < 1) {
          FUN_140af9bf0(plVar13 + 0x22,plVar13 + 2);
        }
        else {
          plVar13[0x29] = plVar13[0x29] + -0x100;
          FUN_140af8070(plVar13 + 0x22,6);
        }
        uVar14 = 0;
      }
      uVar2 = *(uint *)((longlong)plVar13 + uVar14 * 4 + 0x10);
      plVar13[0x2a] = uVar14 + 1;
      *local_5a8 = *local_5a8 + -1;
      if (*local_5a8 == 0) {
        local_61 = 1;
        FUN_140afd2a0(&local_5a8);
      }
      if ((float)(uVar2 >> 8) * _DAT_14103c678 < fVar1) goto LAB_140a50d5f;
    }
    lVar8 = local_70;
    *local_80 = 0xffffffffffffffff;
    lVar16 = *(longlong *)(local_70 + 0x128);
    puVar17 = local_80;
    if (lVar16 != -1) {
      lVar15 = *(longlong *)(local_70 + 0x138);
      if (lVar15 != 0) {
        puVar17 = (undefined8 *)(*(longlong *)(local_70 + 0x130) + 8);
        do {
          lVar16 = puVar17[-1];
          if ((lVar16 != -1) && (lVar16 != 0)) {
            thunk_FUN_140704e90(*puVar17,lVar16,1);
          }
          puVar17 = puVar17 + 3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar16 = *(longlong *)(lVar8 + 0x128);
      }
      puVar17 = local_80;
      if (lVar16 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar8 + 0x130),lVar16 * 0x18,8);
      }
    }
    lVar16 = *(longlong *)(lVar8 + 0x140);
    if ((lVar16 != -1) && (lVar16 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar8 + 0x148),lVar16,1);
    }
    lVar16 = *(longlong *)(lVar8 + 0x158);
    if ((lVar16 != -1) && (lVar16 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar8 + 0x160),lVar16,1);
    }
    lVar16 = *(longlong *)(lVar8 + 0x170);
    if ((lVar16 != -1) && (lVar16 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar8 + 0x178),lVar16,1);
    }
    FUN_14096aaf0(lVar8 + 0x188);
    lVar8 = local_70;
    lVar16 = *(longlong *)(local_70 + 0x1b8);
    if ((lVar16 != -1) && (lVar16 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(local_70 + 0x1c0),lVar16,1);
    }
    FUN_140a49670(lVar8 + 0x458);
    lVar16 = local_70;
    if (0 < *(longlong *)(local_70 + 0x1d0)) {
      thunk_FUN_140704e90(*(undefined8 *)(local_70 + 0x1d8),*(longlong *)(local_70 + 0x1d0),1);
    }
    uVar14 = *(ulonglong *)(lVar16 + 0x228);
    if ((uVar14 < 0xfffffffffffffffe) && (uVar14 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar16 + 0x230),uVar14,1);
    }
    uVar14 = *(ulonglong *)(lVar16 + 0x240);
    if ((uVar14 < 0xfffffffffffffffe) && (uVar14 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar16 + 0x248),uVar14,1);
    }
    uVar14 = *(ulonglong *)(lVar16 + 600);
    if ((uVar14 < 0xfffffffffffffffe) && (uVar14 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar16 + 0x260),uVar14,1);
    }
    uVar14 = *(ulonglong *)(lVar16 + 0x270);
    if ((uVar14 < 0xfffffffffffffffe) && (uVar14 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar16 + 0x278),uVar14,1);
    }
    lVar8 = local_70;
    lVar16 = *(longlong *)(lVar16 + 0x288);
    if (lVar16 != -2) {
      if ((lVar16 != -1) && (lVar16 != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(local_70 + 0x290),lVar16,1);
      }
      lVar16 = *(longlong *)(lVar8 + 0x2a0);
      if ((lVar16 != -1) && (lVar16 != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar8 + 0x2a8),lVar16,1);
      }
      lVar16 = *(longlong *)(lVar8 + 0x2b8);
      if ((lVar16 != -1) && (lVar16 != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar8 + 0x2c0),lVar16,1);
      }
      FUN_140a49770(lVar8 + 0x2d0);
    }
    FUN_140741100(local_70 + 0x300);
    FUN_140a49980(local_70 + 0x478);
    local_78 = (longlong *)(local_70 + 0xe0);
    FUN_140a4d980();
    lVar16 = local_70;
    if (*local_78 != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(local_70 + 0xe8),*local_78 * 0x70,8);
    }
    local_80 = *(undefined8 **)(lVar16 + 0x100);
    local_88 = *(longlong *)(lVar16 + 0x108);
    local_78 = (longlong *)0x0;
    lVar16 = (longlong)local_80;
    while (lVar8 = local_70, (longlong *)local_88 != local_78) {
      local_78 = (longlong *)((longlong)local_78 + 1);
      FUN_140a4bae0(lVar16);
      lVar16 = lVar16 + 0x228;
    }
    if (*(longlong *)(local_70 + 0xf8) != 0) {
      thunk_FUN_140704e90(local_80,*(longlong *)(local_70 + 0xf8) * 0x228,8);
    }
    FUN_14096a150(lVar8);
    lVar16 = local_70;
    FUN_140605b80(local_70 + 0x48);
    local_78 = (longlong *)(lVar16 + 0x110);
    FUN_140a4dbf0();
    lVar16 = local_70;
    if (*local_78 != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(local_70 + 0x118),*local_78 * 200,8);
    }
    FUN_140a49670(lVar16 + 0x490);
    FUN_140a49770(local_70 + 0x4a8);
    FUN_14096ace0(local_70 + 0x1e8);
    if (*local_90 < 0xfffffffffffffffe) {
      FUN_1407416e0();
    }
  }
  return puVar17;
}


/* address=140a51ce0 name=FUN_140a51ce0 */

/* WARNING: Removing unreachable block (ram,0x000140a51e39) */
/* WARNING: Removing unreachable block (ram,0x000140a51e27) */

ulonglong FUN_140a51ce0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *local_200;
  uint *local_1f8;
  undefined8 local_40;
  uint *local_38;
  undefined local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar4 = *(longlong *)(param_1 + 0x248);
  puVar1 = (uint *)(lVar4 + 0x10);
  uVar3 = *(uint *)(lVar4 + 0x10);
  local_40 = param_2;
  if (uVar3 < 0x3ffffffe) {
    LOCK();
    uVar2 = *puVar1;
    if (uVar3 == uVar2) {
      *puVar1 = uVar3 + 1;
    }
    UNLOCK();
    if (uVar3 == uVar2) goto LAB_140a51d2b;
  }
  local_29 = 1;
  FUN_140e4a360(puVar1);
LAB_140a51d2b:
  local_200 = (longlong *)(lVar4 + 0x20);
  if (*(char *)(lVar4 + 0x18) != '\0') {
    local_1f8 = puVar1;
    FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_200,&PTR_LAB_141063870,
                  &PTR_s_C__Users_VssAdministrator__cargo_141063930);
    do {
      invalidInstructionException();
    } while( true );
  }
  lVar5 = *local_200;
  if (lVar5 == 0) {
    LOCK();
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    uVar7 = FUN_140a4f150(local_40);
    return uVar7;
  }
  lVar4 = *(longlong *)(lVar4 + 0x28);
  lVar6 = *(longlong *)(lVar4 + 0x10);
  local_38 = puVar1;
  FUN_140e286a0(&local_200,local_40,0x1c0);
  (**(code **)(lVar4 + 0x18))(lVar5 + (lVar6 - 1U & 0xfffffffffffffff0) + 0x10,&local_200);
  LOCK();
  uVar3 = *local_38;
  *local_38 = *local_38 - 1;
  UNLOCK();
  return (ulonglong)-(uVar3 - 1 & 0xbfffffff);
}


/* address=140a51f30 name=FUN_140a51f30 */

/* WARNING: Removing unreachable block (ram,0x000140a520d6) */
/* WARNING: Removing unreachable block (ram,0x000140a520eb) */

ulonglong FUN_140a51f30(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_100;
  uint *local_f8;
  uint *local_38;
  longlong local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  puVar1 = (uint *)(param_1 + 0x250);
  uVar3 = *(uint *)(param_1 + 0x250);
  local_30 = param_2;
  if (uVar3 < 0x3ffffffe) {
    LOCK();
    uVar2 = *puVar1;
    if (uVar3 == uVar2) {
      *puVar1 = uVar3 + 1;
    }
    UNLOCK();
    if (uVar3 == uVar2) goto LAB_140a51f76;
  }
  local_21 = 1;
  FUN_140e4a360(puVar1);
LAB_140a51f76:
  lVar6 = local_30;
  local_100 = param_1 + 0x260;
  if (*(char *)(param_1 + 600) != '\0') {
    local_f8 = puVar1;
    FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_100,&PTR_LAB_141063890,
                  &PTR_s_C__Users_VssAdministrator__cargo_141063948);
    do {
      invalidInstructionException();
    } while( true );
  }
  if (*(char *)(param_1 + 0x290) == '\x02') {
    LOCK();
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    uVar7 = (ulonglong)-(uVar3 - 1 & 0xbfffffff);
    lVar4 = *(longlong *)(local_30 + 0x20);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      uVar7 = thunk_FUN_140704e90(*(undefined8 *)(local_30 + 0x28),lVar4,1);
    }
    lVar4 = *(longlong *)(lVar6 + 0x38);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      uVar7 = thunk_FUN_140704e90(*(undefined8 *)(lVar6 + 0x40),lVar4,1);
    }
    uVar5 = *(ulonglong *)(lVar6 + 0x68);
    if ((uVar5 < 0xfffffffffffffffe) && (uVar5 != 0)) {
      uVar7 = thunk_FUN_140704e90(*(undefined8 *)(lVar6 + 0x70),uVar5,1);
    }
    lVar6 = *(longlong *)(lVar6 + 0x50);
    if ((lVar6 != -1) && (lVar6 != 0)) {
      uVar7 = thunk_FUN_140704e90(*(undefined8 *)(local_30 + 0x58),lVar6,1);
      return uVar7;
    }
  }
  else {
    local_38 = puVar1;
    FUN_140e286a0(&local_100,local_30,200);
    FUN_140a43c90(local_100,&local_100);
    LOCK();
    uVar3 = *local_38;
    *local_38 = *local_38 - 1;
    UNLOCK();
    uVar7 = (ulonglong)-(uVar3 - 1 & 0xbfffffff);
  }
  return uVar7;
}


/* address=140a521d0 name=FUN_140a521d0 */

ulonglong FUN_140a521d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  undefined local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_1 + 0x250);
  LOCK();
  bVar11 = *(int *)(param_1 + 0x250) == 0;
  if (bVar11) {
    *(int *)(param_1 + 0x250) = 0x3fffffff;
  }
  UNLOCK();
  if (!bVar11) {
    FUN_140e4a520(plVar1);
  }
  puVar6 = PTR_DAT_14139cb28;
  if ((*(ulonglong *)PTR_DAT_14139cb28 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = *(char *)(param_1 + 600);
  }
  else {
    bVar7 = FUN_140e4b070();
    bVar7 = bVar7 ^ 1;
    cVar8 = *(char *)(param_1 + 600);
  }
  if (cVar8 != '\0') {
    uStack_90._1_7_ = (undefined7)((ulonglong)uStack_90 >> 8);
    uStack_90 = CONCAT71(uStack_90._1_7_,bVar7);
    local_98 = plVar1;
    FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_98,&PTR_FUN_1410638d0,
                  &PTR_s_C__Users_VssAdministrator__cargo_141063960);
    goto LAB_140a524ab;
  }
  uVar10 = (ulonglong)local_58 >> 8;
  local_58 = CONCAT71((int7)uVar10,bVar7);
  local_98 = *(longlong **)(param_1 + 0x260);
  uStack_90 = *(undefined8 *)(param_1 + 0x268);
  local_88 = *(undefined4 *)(param_1 + 0x270);
  uStack_84 = *(undefined4 *)(param_1 + 0x274);
  uStack_80 = *(undefined4 *)(param_1 + 0x278);
  uStack_7c = *(undefined4 *)(param_1 + 0x27c);
  local_78 = *(undefined4 *)(param_1 + 0x280);
  uStack_74 = *(undefined4 *)(param_1 + 0x284);
  uStack_70 = *(undefined4 *)(param_1 + 0x288);
  uStack_6c = *(undefined4 *)(param_1 + 0x28c);
  local_68 = *(undefined8 *)(param_1 + 0x290);
  *(undefined *)(param_1 + 0x290) = 2;
  local_60 = plVar1;
  FUN_140a4de10(&local_98);
  if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = FUN_140e4b070(), cVar8 == '\0')) {
    *(undefined *)(param_1 + 600) = 1;
  }
  LOCK();
  iVar2 = *(int *)plVar1;
  *(int *)plVar1 = *(int *)plVar1 + -0x3fffffff;
  UNLOCK();
  local_50 = param_3;
  if (0x3fffffff < iVar2 + 0xc0000001U) {
    FUN_140e4a650(plVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x248);
  plVar1 = (longlong *)(lVar3 + 0x10);
  LOCK();
  bVar11 = *(int *)(lVar3 + 0x10) == 0;
  if (bVar11) {
    *(int *)(lVar3 + 0x10) = 0x3fffffff;
  }
  UNLOCK();
  if (bVar11) {
    if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) goto LAB_140a522e8;
LAB_140a52467:
    bVar7 = FUN_140e4b070();
    bVar7 = bVar7 ^ 1;
    cVar8 = *(char *)(lVar3 + 0x18);
  }
  else {
    FUN_140e4a520(plVar1);
    if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0) goto LAB_140a52467;
LAB_140a522e8:
    bVar7 = 0;
    cVar8 = *(char *)(lVar3 + 0x18);
  }
  if (cVar8 == '\0') {
    plVar4 = *(longlong **)(lVar3 + 0x20);
    lVar5 = *(longlong *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = 0;
    local_60 = plVar4;
    local_58 = lVar5;
    if ((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) {
      local_49 = 1;
      cVar8 = FUN_140e4b070();
      if (cVar8 == '\0') {
        *(undefined *)(lVar3 + 0x18) = 1;
      }
    }
    LOCK();
    iVar2 = *(int *)plVar1;
    *(int *)plVar1 = *(int *)plVar1 + -0x3fffffff;
    UNLOCK();
    if (0x3fffffff < iVar2 + 0xc0000001U) {
      local_49 = 1;
      FUN_140e4a650(plVar1);
    }
    if (plVar4 == (longlong *)0x0) {
      local_49 = 1;
      uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      FUN_140a53bc0(&PTR_FUN_141063908);
    }
    else {
      local_98 = plVar4;
      uStack_90 = lVar5;
      FUN_140a53a60(&PTR_FUN_141063908);
      iVar2 = local_50;
      if (local_50 == -1) {
        param_2 = *(undefined8 *)(param_1 + 0x168);
        iVar2 = *(int *)(param_1 + 0x170);
      }
      uVar9 = (**(code **)(lVar5 + 0x28))
                        ((longlong)plVar4 +
                         (*(longlong *)(lVar5 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,param_2,
                         iVar2);
      uVar10 = (ulonglong)uVar9;
      LOCK();
      *local_98 = *local_98 + -1;
      UNLOCK();
      if (*local_98 == 0) {
        local_49 = 0;
        FUN_1403fd050(&local_98);
      }
    }
    return uVar10 & 0xffffffff;
  }
  uStack_90._1_7_ = (undefined7)((ulonglong)uStack_90 >> 8);
  uStack_90 = CONCAT71(uStack_90._1_7_,bVar7);
  local_98 = plVar1;
  FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_98,&PTR_FUN_1410638b0,
                &PTR_s_C__Users_VssAdministrator__cargo_141063978);
LAB_140a524ab:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140a52650 name=FUN_140a52650 */

/* WARNING: Removing unreachable block (ram,0x000140a5282a) */
/* WARNING: Removing unreachable block (ram,0x000140a52834) */

undefined8 FUN_140a52650(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong local_50;
  uint *local_48;
  uint *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  puVar7 = (uint *)(param_1 + 0x250);
  uVar3 = *(uint *)(param_1 + 0x250);
  if (uVar3 < 0x3ffffffe) {
    LOCK();
    uVar1 = *puVar7;
    if (uVar3 == uVar1) {
      *puVar7 = uVar3 + 1;
    }
    UNLOCK();
    if (uVar3 != uVar1) goto LAB_140a5278d;
    cVar2 = *(char *)(param_1 + 600);
  }
  else {
LAB_140a5278d:
    FUN_140e4a360(puVar7);
    cVar2 = *(char *)(param_1 + 600);
  }
  if (cVar2 != '\0') {
    local_50 = param_1 + 0x260;
    local_48 = puVar7;
    FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_LAB_141063890,
                  &PTR_s_C__Users_VssAdministrator__cargo_141063990);
    goto LAB_140a52828;
  }
  local_40 = puVar7;
  if (*(char *)(param_1 + 0x290) != '\x02') {
    FUN_140a43bb0();
  }
  LOCK();
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + -1;
  UNLOCK();
  lVar4 = *(longlong *)(param_1 + 0x248);
  puVar7 = (uint *)(lVar4 + 0x10);
  uVar3 = *(uint *)(lVar4 + 0x10);
  if (uVar3 < 0x3ffffffe) {
    LOCK();
    uVar1 = *puVar7;
    if (uVar3 == uVar1) {
      *puVar7 = uVar3 + 1;
    }
    UNLOCK();
    if (uVar3 != uVar1) goto LAB_140a527de;
    cVar2 = *(char *)(lVar4 + 0x18);
  }
  else {
LAB_140a527de:
    FUN_140e4a360(puVar7);
    cVar2 = *(char *)(lVar4 + 0x18);
  }
  if (cVar2 == '\0') {
    lVar5 = *(longlong *)(lVar4 + 0x20);
    if (lVar5 == 0) {
      uVar6 = CONCAT71((int7)((ulonglong)(longlong *)(lVar4 + 0x20) >> 8),1);
    }
    else {
      if (param_3 == -1) {
        param_2 = *(undefined8 *)(param_1 + 0x168);
        param_3 = *(int *)(param_1 + 0x170);
      }
      local_40 = puVar7;
      uVar6 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))
                        (lVar5 + (*(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x10) - 1U &
                                 0xfffffffffffffff0) + 0x10,param_2,param_3);
      puVar7 = local_40;
    }
    LOCK();
    *puVar7 = *puVar7 - 1;
    UNLOCK();
    return uVar6;
  }
  local_50 = lVar4 + 0x20;
  local_48 = puVar7;
  FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_LAB_141063870,
                &PTR_s_C__Users_VssAdministrator__cargo_1410639a8);
LAB_140a52828:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140a52990 name=FUN_140a52990 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140a52990(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  float extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x178) == 0) {
    if (*(char *)(param_2 + 0x99) == '\x02') {
      fVar5 = *(float *)(param_1 + 0x1c4);
    }
    else {
      fVar5 = (float)(int)*(char *)(param_2 + 0x99);
    }
    if (_s__140eadbf0 <= fVar5) {
      return true;
    }
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x180) + 0x28))
              ((*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x10) - 1U & 0xfffffffffffffff0) +
               *(longlong *)(param_1 + 0x178) + 0x10);
    fVar5 = extraout_XMM0_Da;
    if (_s__140eadbf0 <= extraout_XMM0_Da) {
      return true;
    }
  }
  if (fVar5 <= 0.0) {
    bVar2 = false;
  }
  else {
    plVar3 = (longlong *)FUN_140afd2c0();
    uVar4 = plVar3[0x2a];
    local_48 = plVar3;
    if (0x3f < uVar4) {
      if (plVar3[0x29] < 1) {
        FUN_140af9bf0(plVar3 + 0x22,plVar3 + 2);
      }
      else {
        plVar3[0x29] = plVar3[0x29] + -0x100;
        FUN_140af8070(plVar3 + 0x22,6);
      }
      uVar4 = 0;
    }
    uVar1 = *(uint *)((longlong)plVar3 + uVar4 * 4 + 0x10);
    plVar3[0x2a] = uVar4 + 1;
    fVar6 = (float)(uVar1 >> 8) * _DAT_14103c678;
    *local_48 = *local_48 + -1;
    if (*local_48 == 0) {
      FUN_140afd2a0(&local_48);
    }
    bVar2 = fVar6 < fVar5;
  }
  return bVar2;
}


/* address=140a52e60 name=FUN_140a52e60 */

/* WARNING: Removing unreachable block (ram,0x000140a52fd3) */
/* WARNING: Removing unreachable block (ram,0x000140a52fa7) */

longlong * FUN_140a52e60(code **param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined ***local_38;
  undefined **local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  plVar4 = (longlong *)(**param_1)(0);
  if (plVar4 == (longlong *)0x0) {
    FUN_140e4aee0(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063aa0);
    goto LAB_140a5303e;
  }
  if (*(char *)(plVar4 + 1) == '\0') {
    puVar5 = (undefined *)*plVar4;
    lVar6 = *(longlong *)(puVar5 + 0x10);
    uVar1 = *(uint *)(lVar6 + 0x10);
    if (uVar1 < 0x3ffffffe) {
      LOCK();
      bVar7 = uVar1 == *(uint *)(lVar6 + 0x10);
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar1 + 1;
      }
      UNLOCK();
      if (!bVar7) goto LAB_140a52f28;
      lVar2 = *(longlong *)(lVar6 + 0x40);
    }
    else {
LAB_140a52f28:
      FUN_140e4a360(lVar6 + 0x10);
      lVar2 = *(longlong *)(lVar6 + 0x40);
    }
    if (lVar2 == 0) goto LAB_140a52f3e;
    local_28 = lVar6;
    cVar3 = FUN_140a4f340(lVar2 + 0x10);
    lVar6 = local_28;
  }
  else {
    if (DAT_14139cbb0 != 0) {
      local_30 = &PTR_LAB_14139cba0;
      local_38 = &local_30;
      FUN_140e4a710(&DAT_14139cbb0,1,&local_38,&DAT_1410639c0,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_141063a38);
    }
    puVar5 = PTR_LAB_14139cba0;
    lVar6 = *(longlong *)(PTR_LAB_14139cba0 + 0x10);
    uVar1 = *(uint *)(lVar6 + 0x10);
    if (uVar1 < 0x3ffffffe) {
      LOCK();
      bVar7 = uVar1 == *(uint *)(lVar6 + 0x10);
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar1 + 1;
      }
      UNLOCK();
      if (!bVar7) goto LAB_140a52f10;
      lVar2 = *(longlong *)(lVar6 + 0x40);
    }
    else {
LAB_140a52f10:
      FUN_140e4a360(lVar6 + 0x10);
      lVar2 = *(longlong *)(lVar6 + 0x40);
    }
    if (lVar2 == 0) {
LAB_140a52f3e:
      cVar3 = '\0';
    }
    else {
      local_28 = lVar6;
      cVar3 = FUN_140a4f340(lVar2 + 0x10);
      lVar6 = local_28;
    }
  }
  LOCK();
  *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  UNLOCK();
  if (cVar3 == '\0') {
    return (longlong *)0x0;
  }
  lVar6 = *(longlong *)(puVar5 + 0x10);
  uVar1 = *(uint *)(lVar6 + 0x10);
  if (uVar1 < 0x3ffffffe) {
    LOCK();
    bVar7 = uVar1 == *(uint *)(lVar6 + 0x10);
    if (bVar7) {
      *(uint *)(lVar6 + 0x10) = uVar1 + 1;
    }
    UNLOCK();
    if (!bVar7) goto LAB_140a52fbb;
    plVar4 = *(longlong **)(lVar6 + 0x40);
  }
  else {
LAB_140a52fbb:
    FUN_140e4a360(lVar6 + 0x10);
    plVar4 = *(longlong **)(lVar6 + 0x40);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    if (*plVar4 == 0 || SCARRY8(lVar2,1) != *plVar4 < 0) {
LAB_140a5303e:
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  LOCK();
  *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  UNLOCK();
  return plVar4;
}


/* address=140a530e0 name=FUN_140a530e0 */

/* WARNING: Removing unreachable block (ram,0x000140a533cb) */
/* WARNING: Removing unreachable block (ram,0x000140a533b3) */

undefined4 * FUN_140a530e0(undefined4 *param_1,code **param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined local_eb0 [1224];
  undefined *local_9e8 [153];
  undefined local_520 [1224];
  undefined local_58 [8];
  undefined8 uStack_50;
  undefined8 local_48;
  uint *local_40;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_31 = 1;
  local_48 = param_3;
  plVar8 = (longlong *)(**param_2)(0);
  uVar6 = local_48;
  if (plVar8 == (longlong *)0x0) {
    FUN_1409880b0(local_48);
    FUN_140e4aee0(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063aa0);
    do {
      invalidInstructionException();
    } while( true );
  }
  FUN_140e286a0(local_eb0,local_48,0x4c8);
  if (*(char *)(plVar8 + 1) == '\0') {
    FUN_140e286a0(local_520,uVar6,0x4c8);
    lVar3 = *plVar8;
    lVar4 = *(longlong *)(lVar3 + 0x10);
    puVar9 = (uint *)(lVar4 + 0x10);
    uVar2 = *(uint *)(lVar4 + 0x10);
    if (uVar2 < 0x3ffffffe) {
      LOCK();
      uVar1 = *puVar9;
      if (uVar2 == uVar1) {
        *puVar9 = uVar2 + 1;
      }
      UNLOCK();
      if (uVar2 != uVar1) goto LAB_140a53338;
    }
    else {
LAB_140a53338:
      local_32 = 1;
      FUN_140e4a360(puVar9);
    }
    if (*(longlong *)(lVar4 + 0x40) == 0) {
      cVar7 = '\0';
    }
    else {
      local_40 = puVar9;
      cVar7 = FUN_140a4f340(*(longlong *)(lVar4 + 0x40) + 0x10);
      puVar9 = local_40;
    }
    LOCK();
    *puVar9 = *puVar9 - 1;
    UNLOCK();
    if (cVar7 == '\0') {
      _local_58 = ZEXT816(0);
      local_31 = 0;
      FUN_1409880b0(local_520);
    }
    else {
      FUN_140e286a0(local_9e8,local_eb0,0x4c8);
      local_32 = 0;
      FUN_140988bf0(local_58,lVar3 + 0x10,local_9e8);
    }
    goto LAB_140a5331d;
  }
  FUN_140e286a0(local_520,uVar6,0x4c8);
  if (DAT_14139cbb0 != 0) {
    local_58 = (undefined  [8])&PTR_LAB_14139cba0;
    local_9e8[0] = local_58;
    local_34 = 1;
    FUN_140e4a710(&DAT_14139cbb0,1,local_9e8,&DAT_1410639c0,
                  &PTR_s__rustc_48a229ceaefd4985c50990b14_141063a38);
  }
  puVar5 = PTR_LAB_14139cba0;
  lVar3 = *(longlong *)(PTR_LAB_14139cba0 + 0x10);
  puVar9 = (uint *)(lVar3 + 0x10);
  uVar2 = *(uint *)(lVar3 + 0x10);
  if (uVar2 < 0x3ffffffe) {
    LOCK();
    uVar1 = *puVar9;
    if (uVar2 == uVar1) {
      *puVar9 = uVar2 + 1;
    }
    UNLOCK();
    if (uVar2 != uVar1) goto LAB_140a5334d;
  }
  else {
LAB_140a5334d:
    local_33 = 1;
    FUN_140e4a360(puVar9);
  }
  if (*(longlong *)(lVar3 + 0x40) == 0) {
    cVar7 = '\0';
  }
  else {
    local_40 = puVar9;
    cVar7 = FUN_140a4f340(*(longlong *)(lVar3 + 0x40) + 0x10);
    puVar9 = local_40;
  }
  LOCK();
  *puVar9 = *puVar9 - 1;
  UNLOCK();
  if (cVar7 == '\0') {
    _local_58 = ZEXT816(0);
    local_34 = 0;
    FUN_1409880b0(local_520);
  }
  else {
    FUN_140e286a0(local_9e8,local_520,0x4c8);
    local_33 = 0;
    FUN_140988bf0(local_58,puVar5 + 0x10,local_9e8);
  }
LAB_140a5331d:
  *param_1 = local_58._0_4_;
  param_1[1] = local_58._4_4_;
  param_1[2] = (undefined4)uStack_50;
  param_1[3] = uStack_50._4_4_;
  return param_1;
}


/* address=140a53600 name=FUN_140a53600 */

/* WARNING: Removing unreachable block (ram,0x000140a5370d) */
/* WARNING: Removing unreachable block (ram,0x000140a53722) */

ulonglong FUN_140a53600(code **param_1,undefined ***param_2)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined ***local_30;
  undefined *local_28;
  undefined **local_20;
  
  puVar7 = (undefined8 *)(**param_1)(0);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_140e4aee0(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063aa0);
    goto LAB_140a53771;
  }
  if (*(char *)(puVar7 + 1) == '\0') {
    puVar8 = (undefined *)*puVar7;
  }
  else {
    puVar8 = PTR_LAB_14139cba0;
    if (DAT_14139cbb0 != 0) {
      local_20 = &PTR_LAB_14139cba0;
      local_30 = &local_20;
      FUN_140e4a710(&DAT_14139cbb0,1,&local_30,&DAT_1410639c0,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_141063a38);
      puVar8 = PTR_LAB_14139cba0;
    }
  }
  lVar6 = *(longlong *)(puVar8 + 0x10);
  uVar5 = *(uint *)(lVar6 + 0x10);
  if (uVar5 < 0x3ffffffe) {
    LOCK();
    bVar10 = uVar5 == *(uint *)(lVar6 + 0x10);
    if (bVar10) {
      *(uint *)(lVar6 + 0x10) = uVar5 + 1;
    }
    UNLOCK();
    if (!bVar10) goto LAB_140a536ee;
    local_30 = *(undefined ****)(lVar6 + 0x40);
  }
  else {
LAB_140a536ee:
    FUN_140e4a360(lVar6 + 0x10);
    local_30 = *(undefined ****)(lVar6 + 0x40);
  }
  if (local_30 != (undefined ***)0x0) {
    LOCK();
    ppuVar3 = *local_30;
    *local_30 = (undefined **)((longlong)*local_30 + 1);
    UNLOCK();
    if (*local_30 == (undefined **)0x0 || SCARRY8((longlong)ppuVar3,1) != (longlong)*local_30 < 0) {
LAB_140a53771:
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  LOCK();
  piVar1 = (int *)(lVar6 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar9 = (ulonglong)-(iVar2 - 1U & 0xbfffffff);
  if (local_30 != (undefined ***)0x0) {
    cVar4 = *(char *)(local_30 + 0x3b);
    LOCK();
    *local_30 = (undefined **)((longlong)*local_30 + -1);
    UNLOCK();
    if (*local_30 == (undefined **)0x0) {
      uVar9 = FUN_140742a40(&local_30);
    }
    if (cVar4 != '\0') {
      FUN_1407170b0(&DAT_141063ad0,0x13);
      local_28 = &LAB_1406102b0;
      local_30 = param_2;
      uVar9 = FUN_1407170b0(&DAT_141063ad9,&local_30);
    }
  }
  return uVar9;
}


/* address=140a53780 name=FUN_140a53780 */

/* WARNING: Removing unreachable block (ram,0x000140a5388d) */
/* WARNING: Removing unreachable block (ram,0x000140a538a2) */

ulonglong FUN_140a53780(code **param_1,undefined ***param_2)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined ***local_30;
  undefined *local_28;
  undefined **local_20;
  
  puVar7 = (undefined8 *)(**param_1)(0);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_140e4aee0(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063aa0);
    goto LAB_140a538f1;
  }
  if (*(char *)(puVar7 + 1) == '\0') {
    puVar8 = (undefined *)*puVar7;
  }
  else {
    puVar8 = PTR_LAB_14139cba0;
    if (DAT_14139cbb0 != 0) {
      local_20 = &PTR_LAB_14139cba0;
      local_30 = &local_20;
      FUN_140e4a710(&DAT_14139cbb0,1,&local_30,&DAT_1410639c0,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_141063a38);
      puVar8 = PTR_LAB_14139cba0;
    }
  }
  lVar6 = *(longlong *)(puVar8 + 0x10);
  uVar5 = *(uint *)(lVar6 + 0x10);
  if (uVar5 < 0x3ffffffe) {
    LOCK();
    bVar10 = uVar5 == *(uint *)(lVar6 + 0x10);
    if (bVar10) {
      *(uint *)(lVar6 + 0x10) = uVar5 + 1;
    }
    UNLOCK();
    if (!bVar10) goto LAB_140a5386e;
    local_30 = *(undefined ****)(lVar6 + 0x40);
  }
  else {
LAB_140a5386e:
    FUN_140e4a360(lVar6 + 0x10);
    local_30 = *(undefined ****)(lVar6 + 0x40);
  }
  if (local_30 != (undefined ***)0x0) {
    LOCK();
    ppuVar3 = *local_30;
    *local_30 = (undefined **)((longlong)*local_30 + 1);
    UNLOCK();
    if (*local_30 == (undefined **)0x0 || SCARRY8((longlong)ppuVar3,1) != (longlong)*local_30 < 0) {
LAB_140a538f1:
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  LOCK();
  piVar1 = (int *)(lVar6 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar9 = (ulonglong)-(iVar2 - 1U & 0xbfffffff);
  if (local_30 != (undefined ***)0x0) {
    cVar4 = *(char *)(local_30 + 0x3b);
    LOCK();
    *local_30 = (undefined **)((longlong)*local_30 + -1);
    UNLOCK();
    if (*local_30 == (undefined **)0x0) {
      uVar9 = FUN_140742a40(&local_30);
    }
    if (cVar4 != '\0') {
      FUN_1407170b0(&DAT_141063ad0,0x13);
      local_28 = &LAB_1406102b0;
      local_30 = param_2;
      uVar9 = FUN_1407170b0(&DAT_141063af8,&local_30);
    }
  }
  return uVar9;
}


/* address=140a53900 name=FUN_140a53900 */

/* WARNING: Removing unreachable block (ram,0x000140a539f0) */
/* WARNING: Removing unreachable block (ram,0x000140a53a01) */

ulonglong FUN_140a53900(code **param_1)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined ***local_28;
  undefined **local_20;
  
  puVar7 = (undefined8 *)(**param_1)(0);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_140e4aee0(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063aa0);
    goto LAB_140a53a50;
  }
  if (*(char *)(puVar7 + 1) == '\0') {
    puVar8 = (undefined *)*puVar7;
  }
  else {
    puVar8 = PTR_LAB_14139cba0;
    if (DAT_14139cbb0 != 0) {
      local_20 = &PTR_LAB_14139cba0;
      local_28 = &local_20;
      FUN_140e4a710(&DAT_14139cbb0,1,&local_28,&DAT_1410639c0,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_141063a38);
      puVar8 = PTR_LAB_14139cba0;
    }
  }
  lVar6 = *(longlong *)(puVar8 + 0x10);
  uVar5 = *(uint *)(lVar6 + 0x10);
  if (uVar5 < 0x3ffffffe) {
    LOCK();
    bVar10 = uVar5 == *(uint *)(lVar6 + 0x10);
    if (bVar10) {
      *(uint *)(lVar6 + 0x10) = uVar5 + 1;
    }
    UNLOCK();
    if (!bVar10) goto LAB_140a539d1;
    local_28 = *(undefined ****)(lVar6 + 0x40);
  }
  else {
LAB_140a539d1:
    FUN_140e4a360(lVar6 + 0x10);
    local_28 = *(undefined ****)(lVar6 + 0x40);
  }
  if (local_28 != (undefined ***)0x0) {
    LOCK();
    ppuVar3 = *local_28;
    *local_28 = (undefined **)((longlong)*local_28 + 1);
    UNLOCK();
    if (*local_28 == (undefined **)0x0 || SCARRY8((longlong)ppuVar3,1) != (longlong)*local_28 < 0) {
LAB_140a53a50:
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  LOCK();
  piVar1 = (int *)(lVar6 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar9 = (ulonglong)-(iVar2 - 1U & 0xbfffffff);
  if (local_28 != (undefined ***)0x0) {
    cVar4 = *(char *)(local_28 + 0x3b);
    LOCK();
    *local_28 = (undefined **)((longlong)*local_28 + -1);
    UNLOCK();
    if (*local_28 == (undefined **)0x0) {
      uVar9 = FUN_140742a40(&local_28);
    }
    if (cVar4 != '\0') {
      FUN_1407170b0(&DAT_141063ad0,0x13);
      uVar9 = FUN_1407170b0(&DAT_141063b17,0x3d);
    }
  }
  return uVar9;
}


/* address=140a53a60 name=FUN_140a53a60 */

/* WARNING: Removing unreachable block (ram,0x000140a53b50) */
/* WARNING: Removing unreachable block (ram,0x000140a53b61) */

ulonglong FUN_140a53a60(code **param_1)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined ***local_28;
  undefined **local_20;
  
  puVar7 = (undefined8 *)(**param_1)(0);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_140e4aee0(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063aa0);
    goto LAB_140a53bb0;
  }
  if (*(char *)(puVar7 + 1) == '\0') {
    puVar8 = (undefined *)*puVar7;
  }
  else {
    puVar8 = PTR_LAB_14139cba0;
    if (DAT_14139cbb0 != 0) {
      local_20 = &PTR_LAB_14139cba0;
      local_28 = &local_20;
      FUN_140e4a710(&DAT_14139cbb0,1,&local_28,&DAT_1410639c0,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_141063a38);
      puVar8 = PTR_LAB_14139cba0;
    }
  }
  lVar6 = *(longlong *)(puVar8 + 0x10);
  uVar5 = *(uint *)(lVar6 + 0x10);
  if (uVar5 < 0x3ffffffe) {
    LOCK();
    bVar10 = uVar5 == *(uint *)(lVar6 + 0x10);
    if (bVar10) {
      *(uint *)(lVar6 + 0x10) = uVar5 + 1;
    }
    UNLOCK();
    if (!bVar10) goto LAB_140a53b31;
    local_28 = *(undefined ****)(lVar6 + 0x40);
  }
  else {
LAB_140a53b31:
    FUN_140e4a360(lVar6 + 0x10);
    local_28 = *(undefined ****)(lVar6 + 0x40);
  }
  if (local_28 != (undefined ***)0x0) {
    LOCK();
    ppuVar3 = *local_28;
    *local_28 = (undefined **)((longlong)*local_28 + 1);
    UNLOCK();
    if (*local_28 == (undefined **)0x0 || SCARRY8((longlong)ppuVar3,1) != (longlong)*local_28 < 0) {
LAB_140a53bb0:
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  LOCK();
  piVar1 = (int *)(lVar6 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar9 = (ulonglong)-(iVar2 - 1U & 0xbfffffff);
  if (local_28 != (undefined ***)0x0) {
    cVar4 = *(char *)(local_28 + 0x3b);
    LOCK();
    *local_28 = (undefined **)((longlong)*local_28 + -1);
    UNLOCK();
    if (*local_28 == (undefined **)0x0) {
      uVar9 = FUN_140742a40(&local_28);
    }
    if (cVar4 != '\0') {
      FUN_1407170b0(&DAT_141063ad0,0x13);
      uVar9 = FUN_1407170b0(&DAT_141063b35,0x5b);
    }
  }
  return uVar9;
}


/* address=140a53bc0 name=FUN_140a53bc0 */

/* WARNING: Removing unreachable block (ram,0x000140a53cb0) */
/* WARNING: Removing unreachable block (ram,0x000140a53cc1) */

ulonglong FUN_140a53bc0(code **param_1)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined ***local_28;
  undefined **local_20;
  
  puVar7 = (undefined8 *)(**param_1)(0);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_140e4aee0(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063aa0);
    goto LAB_140a53d10;
  }
  if (*(char *)(puVar7 + 1) == '\0') {
    puVar8 = (undefined *)*puVar7;
  }
  else {
    puVar8 = PTR_LAB_14139cba0;
    if (DAT_14139cbb0 != 0) {
      local_20 = &PTR_LAB_14139cba0;
      local_28 = &local_20;
      FUN_140e4a710(&DAT_14139cbb0,1,&local_28,&DAT_1410639c0,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_141063a38);
      puVar8 = PTR_LAB_14139cba0;
    }
  }
  lVar6 = *(longlong *)(puVar8 + 0x10);
  uVar5 = *(uint *)(lVar6 + 0x10);
  if (uVar5 < 0x3ffffffe) {
    LOCK();
    bVar10 = uVar5 == *(uint *)(lVar6 + 0x10);
    if (bVar10) {
      *(uint *)(lVar6 + 0x10) = uVar5 + 1;
    }
    UNLOCK();
    if (!bVar10) goto LAB_140a53c91;
    local_28 = *(undefined ****)(lVar6 + 0x40);
  }
  else {
LAB_140a53c91:
    FUN_140e4a360(lVar6 + 0x10);
    local_28 = *(undefined ****)(lVar6 + 0x40);
  }
  if (local_28 != (undefined ***)0x0) {
    LOCK();
    ppuVar3 = *local_28;
    *local_28 = (undefined **)((longlong)*local_28 + 1);
    UNLOCK();
    if (*local_28 == (undefined **)0x0 || SCARRY8((longlong)ppuVar3,1) != (longlong)*local_28 < 0) {
LAB_140a53d10:
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  LOCK();
  piVar1 = (int *)(lVar6 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar9 = (ulonglong)-(iVar2 - 1U & 0xbfffffff);
  if (local_28 != (undefined ***)0x0) {
    cVar4 = *(char *)(local_28 + 0x3b);
    LOCK();
    *local_28 = (undefined **)((longlong)*local_28 + -1);
    UNLOCK();
    if (*local_28 == (undefined **)0x0) {
      uVar9 = FUN_140742a40(&local_28);
    }
    if (cVar4 != '\0') {
      FUN_1407170b0(&DAT_141063ad0,0x13);
      uVar9 = FUN_1407170b0(&DAT_141063b62,0x51);
    }
  }
  return uVar9;
}


/* address=140a53e80 name=FUN_140a53e80 */

/* WARNING: Removing unreachable block (ram,0x000140a53f8d) */
/* WARNING: Removing unreachable block (ram,0x000140a53fa2) */

ulonglong FUN_140a53e80(code **param_1,undefined ***param_2)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined ***local_30;
  code *local_28;
  undefined **local_20;
  
  puVar7 = (undefined8 *)(**param_1)(0);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_140e4aee0(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063aa0);
    goto LAB_140a53ff1;
  }
  if (*(char *)(puVar7 + 1) == '\0') {
    puVar8 = (undefined *)*puVar7;
  }
  else {
    puVar8 = PTR_LAB_14139cba0;
    if (DAT_14139cbb0 != 0) {
      local_20 = &PTR_LAB_14139cba0;
      local_30 = &local_20;
      FUN_140e4a710(&DAT_14139cbb0,1,&local_30,&DAT_1410639c0,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_141063a38);
      puVar8 = PTR_LAB_14139cba0;
    }
  }
  lVar6 = *(longlong *)(puVar8 + 0x10);
  uVar5 = *(uint *)(lVar6 + 0x10);
  if (uVar5 < 0x3ffffffe) {
    LOCK();
    bVar10 = uVar5 == *(uint *)(lVar6 + 0x10);
    if (bVar10) {
      *(uint *)(lVar6 + 0x10) = uVar5 + 1;
    }
    UNLOCK();
    if (!bVar10) goto LAB_140a53f6e;
    local_30 = *(undefined ****)(lVar6 + 0x40);
  }
  else {
LAB_140a53f6e:
    FUN_140e4a360(lVar6 + 0x10);
    local_30 = *(undefined ****)(lVar6 + 0x40);
  }
  if (local_30 != (undefined ***)0x0) {
    LOCK();
    ppuVar3 = *local_30;
    *local_30 = (undefined **)((longlong)*local_30 + 1);
    UNLOCK();
    if (*local_30 == (undefined **)0x0 || SCARRY8((longlong)ppuVar3,1) != (longlong)*local_30 < 0) {
LAB_140a53ff1:
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  LOCK();
  piVar1 = (int *)(lVar6 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar9 = (ulonglong)-(iVar2 - 1U & 0xbfffffff);
  if (local_30 != (undefined ***)0x0) {
    cVar4 = *(char *)(local_30 + 0x3b);
    LOCK();
    *local_30 = (undefined **)((longlong)*local_30 + -1);
    UNLOCK();
    if (*local_30 == (undefined **)0x0) {
      uVar9 = FUN_140742a40(&local_30);
    }
    if (cVar4 != '\0') {
      FUN_1407170b0(&DAT_141063ad0,0x13);
      local_28 = FUN_1406d3b50;
      local_30 = param_2;
      uVar9 = FUN_1407170b0(&DAT_141063bbd,&local_30);
    }
  }
  return uVar9;
}


/* address=140a54000 name=FUN_140a54000 */

longlong * FUN_140a54000(code **param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  longlong *local_30;
  longlong *local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  pplVar2 = (longlong **)(**param_1)(0);
  if (pplVar2 == (longlong **)0x0) {
    LOCK();
    *param_2 = *param_2 + -1;
    UNLOCK();
    if (*param_2 == 0) {
      FUN_1407429a0(&local_28);
    }
    FUN_140e4aee0(&PTR_s__rustc_48a229ceaefd4985c50990b14_141063aa0);
    do {
      invalidInstructionException();
    } while( true );
  }
  plVar1 = *pplVar2;
  if (plVar1 != param_2) {
    *pplVar2 = param_2;
    *(undefined *)(pplVar2 + 1) = 0;
    return plVar1;
  }
  LOCK();
  *param_2 = *param_2 + -1;
  UNLOCK();
  if (*param_2 == 0) {
    local_19 = 0;
    local_30 = param_2;
    FUN_1407429a0(&local_30,2);
  }
  return plVar1;
}


/* address=140a54110 name=FUN_140a54110 */

void FUN_140a54110(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  
  if (param_2 == (byte *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)0x0;
    pbVar6 = param_1;
    do {
      bVar2 = *pbVar6;
      uVar5 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xe0) {
          pbVar1 = pbVar6 + 2;
          uVar5 = (uVar5 & 0x1f) << 6 | pbVar6[1] & 0x3f;
        }
        else {
          uVar7 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            pbVar1 = pbVar6 + 3;
            uVar5 = uVar7 | (uVar5 & 0x1f) << 0xc;
          }
          else {
            pbVar1 = pbVar6 + 4;
            uVar5 = pbVar6[3] & 0x3f | uVar7 << 6 | (uVar5 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar1 = pbVar6 + 1;
      }
      pbVar4 = pbVar3;
    } while ((((0x28 < uVar5) || ((0x10100002400U >> ((ulonglong)uVar5 & 0x3f) & 1) == 0)) &&
             (uVar5 != 0x7b)) &&
            (pbVar3 = pbVar1 + ((longlong)pbVar3 - (longlong)pbVar6), pbVar4 = param_2,
            pbVar6 = pbVar1, pbVar1 != param_1 + (longlong)param_2));
  }
  FUN_1400503a0(param_1,pbVar4);
  return;
}


/* address=140a54220 name=FUN_140a54220 */

longlong FUN_140a54220(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong _Size;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined *)(param_1 + 8) = 1;
    lVar6 = FUN_140a54220(param_1);
    if ((lVar6 != 0) && (param_2 != 0)) {
      return lVar6;
    }
    if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
      return 0;
    }
  }
  lVar6 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  uVar9 = param_1[5];
  if (uVar9 <= uVar2 && uVar3 <= uVar9) {
    _Size = (ulonglong)*(byte *)(param_1 + 7);
    uVar1 = _Size - 1;
    if (_Size < 5) {
      do {
        lVar7 = lVar6 + uVar3;
        lVar5 = FUN_140730a00(*(undefined *)((longlong)param_1 + _Size + 0x2f),lVar7,uVar9 - uVar3);
        if (lVar5 != 1) goto LAB_140a5438f;
        uVar9 = lVar7 + uVar3;
        uVar8 = uVar9 - uVar1;
        if (((uVar1 <= uVar9) && ((byte)(uVar2 < uVar8 + _Size | CARRY8(uVar8,_Size)) == 0)) &&
           (iVar4 = memcmp((void *)(lVar6 + uVar8),param_1 + 6,_Size), iVar4 == 0)) {
          param_1[5] = uVar8;
          param_1[1] = uVar8;
          return lVar6 + uVar8 + _Size;
        }
        param_1[5] = uVar9;
      } while ((uVar3 <= uVar9) && (uVar9 <= uVar2));
    }
    else {
      do {
        lVar7 = lVar6 + uVar3;
        lVar5 = FUN_140730a00(*(undefined *)((longlong)param_1 + _Size + 0x2f),lVar7,uVar9 - uVar3);
        if (lVar5 != 1) goto LAB_140a5438f;
        uVar9 = lVar7 + uVar3;
        if ((uVar1 <= uVar9) &&
           ((byte)(uVar2 < (uVar9 - uVar1) + _Size | CARRY8(uVar9 - uVar1,_Size)) == 0)) {
          FUN_140e4bb30(0,_Size,4,&PTR_s__rustc_48a229ceaefd4985c50990b14_141063c38);
          do {
            invalidInstructionException();
          } while( true );
        }
        param_1[5] = uVar9;
      } while ((uVar3 <= uVar9) && (uVar9 <= uVar2));
    }
  }
LAB_140a54393:
  *(undefined *)((longlong)param_1 + 0x41) = 1;
  return lVar6 + *param_1;
LAB_140a5438f:
  param_1[5] = uVar3;
  goto LAB_140a54393;
}


/* address=140a54540 name=FUN_140a54540 */

undefined8 * FUN_140a54540(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *_Buf1;
  undefined5 uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 unaff_R13;
  undefined4 uVar15;
  char **local_1a0;
  undefined2 *local_198;
  char *local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined local_170;
  undefined4 uStack_16f;
  undefined4 uStack_16b;
  undefined4 uStack_167;
  uint uStack_163;
  undefined4 local_15f;
  uint uStack_15b;
  undefined4 uStack_157;
  undefined4 uStack_153;
  undefined4 uStack_14f;
  int iStack_14b;
  undefined4 uStack_147;
  undefined4 uStack_143;
  undefined4 local_13f;
  undefined4 uStack_13b;
  undefined4 uStack_137;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong local_120;
  undefined local_118;
  undefined4 uStack_117;
  undefined4 uStack_113;
  undefined4 uStack_10f;
  undefined4 uStack_10b;
  undefined4 uStack_107;
  undefined4 uStack_103;
  undefined4 uStack_ff;
  uint uStack_fb;
  undefined4 local_f7;
  int iStack_f3;
  undefined4 uStack_ef;
  undefined4 uStack_eb;
  undefined4 uStack_e7;
  undefined4 uStack_e3;
  undefined4 uStack_df;
  undefined4 uStack_db;
  char cStack_d7;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c4;
  longlong local_c0;
  undefined *local_b8;
  char local_b0;
  undefined7 uStack_af;
  undefined *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined *local_90;
  undefined *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  uStack_15b = (uint)(uint3)uStack_15b;
  uStack_157 = 0;
  uStack_153 = uStack_153 & 0xff000000;
  local_178 = 0;
  uStack_16b = (uint)(uint3)uStack_16b;
  uStack_167 = 0;
  uStack_163 = uStack_163 & 0xff000000;
  plVar10 = &local_178;
  FUN_1406817b0(&local_120,plVar10,param_2,param_3);
  if (local_120 == -1) {
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  uStack_16f = uStack_117;
  uStack_16b = uStack_113;
  uStack_167 = uStack_10f;
  uStack_163 = uStack_10b;
  local_15f = uStack_107;
  uStack_15b = uStack_103;
  uStack_157 = uStack_ff;
  uStack_153 = uStack_fb;
  uStack_14f = local_f7;
  iStack_14b = iStack_f3;
  uStack_147 = uStack_ef;
  uStack_143 = uStack_eb;
  local_13f = uStack_e7;
  uStack_13b = uStack_e3;
  uStack_137 = uStack_df;
  uStack_12c = uStack_d4;
  uStack_128 = uStack_d0;
  uStack_124 = uStack_cc;
  local_68 = local_120;
  local_178 = local_120;
  local_170 = local_118;
  pcVar5 = (char *)FUN_1406828a0(&local_178);
  if ((plVar10 != (longlong *)0x1) || (*pcVar5 != '/')) {
    uVar6 = FUN_1406828a0(&local_178);
    uVar6 = FUN_140050620(uVar6);
    local_118 = 0;
    uStack_117 = 0;
    uStack_113._3_1_ = (byte)plVar10;
    bVar3 = uStack_113._3_1_;
    uStack_113 = (uint)uStack_113._3_1_ << 0x18;
    uStack_10f = (undefined4)((ulonglong)plVar10 >> 8);
    uStack_10b._0_3_ = (uint3)((ulonglong)plVar10 >> 0x28);
    uStack_10b._3_1_ = (undefined)uVar6;
    uStack_107 = (undefined4)((ulonglong)uVar6 >> 8);
    uStack_103._0_3_ = (undefined3)((ulonglong)uVar6 >> 0x28);
    uStack_103 = CONCAT13(bVar3,(undefined3)uStack_103);
    uStack_fb = (uint)(uint3)uStack_10b;
    local_f7 = 0;
    iStack_f3 = (uint)bVar3 << 0x18;
    uStack_eb = CONCAT13(0x2f,(uint3)uStack_10b);
    uStack_e7 = 0x2f000000;
    uStack_e3 = 0x1000000;
    uStack_db = CONCAT13(1,(undefined3)uStack_db);
    cStack_d7 = '\0';
    local_120 = 1;
    uStack_ff = uStack_10f;
    uStack_ef = uStack_10f;
    lVar7 = FUN_140a54220(&local_118);
    if (lVar7 != 0) {
      if (plVar10 == (longlong *)0x0) {
        *(undefined *)(param_1 + 1) = 4;
        *param_1 = 0xffffffffffffffff;
        lVar14 = local_68;
        goto joined_r0x000140a54af1;
      }
      if ((longlong)plVar10 < 0) {
        uVar6 = 0;
      }
      else {
        FUN_140081a90();
        uVar6 = 1;
        local_c0 = thunk_FUN_140704e30(plVar10,1);
        if (local_c0 != 0) {
          FUN_140e286a0(local_c0,lVar7,plVar10);
          local_98 = plVar10;
          if (local_120 == 0) {
LAB_140a54791:
            FUN_140081a90();
            puVar11 = (undefined *)0x1;
            local_90 = (undefined *)thunk_FUN_140704e30(1);
            if (local_90 == (undefined *)0x0) {
              FUN_140e4b58b(1,1);
              goto LAB_140a54b63;
            }
            *local_90 = 0x2f;
            local_80 = 1;
            uVar6 = 1;
          }
          else {
            if (local_120 == 1) {
              if (cStack_d7 == '\0') {
                lVar14 = CONCAT35((undefined3)uStack_113,CONCAT41(uStack_117,local_118));
                lVar7 = CONCAT35((uint3)uStack_10b,CONCAT41(uStack_10f,uStack_113._3_1_)) - lVar14;
                if ((lVar7 != 0 | uStack_db._3_1_) == 1) {
                  pcVar5 = (char *)(lVar14 + CONCAT35((undefined3)uStack_103,
                                                      CONCAT41(uStack_107,uStack_10b._3_1_)));
                  if (pcVar5 != (char *)0x0) goto LAB_140a54786;
                }
              }
              goto LAB_140a54791;
            }
            local_120 = local_120 + -1;
            pcVar5 = (char *)FUN_140a54220(&local_118);
            if (pcVar5 == (char *)0x0) goto LAB_140a54791;
LAB_140a54786:
            if (lVar7 == 1) {
              if (*pcVar5 == '/') goto LAB_140a54791;
            }
            else if (lVar7 == 0) goto LAB_140a54791;
            local_1a0 = &local_190;
            local_198 = &DAT_1400c4960;
            puVar11 = &DAT_141063c60;
            local_190 = pcVar5;
            local_188 = lVar7;
            FUN_1407284e0(&local_b0,&DAT_141063c60,&local_1a0);
            local_80 = CONCAT71(uStack_af,local_b0);
            local_90 = local_a8;
            uVar6 = local_a0;
          }
          uVar8 = FUN_140682be0(&local_178);
          if (puVar11 != (undefined *)0x0) {
            if ((longlong)puVar11 < 0) {
              uVar13 = 0;
            }
            else {
              FUN_140081a90();
              uVar13 = 1;
              lVar7 = thunk_FUN_140704e30(puVar11,1);
              if (lVar7 != 0) {
                FUN_140e286a0(lVar7,uVar8,puVar11);
                lVar14 = local_68;
                uVar2 = CONCAT31((undefined3)iStack_14b,uStack_14f._3_1_);
                pcVar5 = (char *)(ulonglong)uVar2;
                if (pcVar5 == (char *)0x0) goto LAB_140a54923;
                _Buf1 = (int *)CONCAT35((uint3)uStack_16b,CONCAT41(uStack_16f,local_170));
                pcVar12 = (char *)CONCAT35((undefined3)uStack_163,
                                           CONCAT41(uStack_167,uStack_16b._3_1_));
                if (pcVar5 < pcVar12) {
                  if (-0x41 < *(char *)((longlong)_Buf1 + (longlong)pcVar5)) {
LAB_140a548e6:
                    if (uVar2 == 5) {
                      pcVar12 = "https";
                      iVar4 = memcmp(_Buf1,"https",(size_t)pcVar5);
                      if (iVar4 != 0) goto LAB_140a54923;
                      uVar15 = (undefined4)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
LAB_140a5499b:
                      local_88 = puVar11;
                      local_70 = lVar7;
                      pcVar5 = (char *)FUN_140682af0(&local_178);
                      if (pcVar5 == (char *)0x0) {
                        local_78 = -1;
                        local_180 = unaff_R13;
                      }
                      else {
                        FUN_1400c4ad0(&local_b0,pcVar5,pcVar12);
                        local_78 = CONCAT71(uStack_af,local_b0);
                        local_b8 = local_a8;
                        pcVar12 = pcVar5;
                        local_180 = local_a0;
                      }
                      uVar1 = CONCAT41(uStack_14f,uStack_153._3_1_);
                      lVar9 = FUN_140682a80(&local_178);
                      lVar14 = local_68;
                      lVar7 = local_70;
                      puVar11 = local_88;
                      if (lVar9 != 0) {
                        local_c4 = uVar15;
                        FUN_14027fd50(&local_b0);
                        if (local_b0 != '\0') {
                          FUN_140e4b58b(local_a8,local_a0);
                          goto LAB_140a54b63;
                        }
                        if (pcVar12 != (char *)0x0) {
                          FUN_140e286a0(local_a0,lVar9,pcVar12);
                        }
                        *param_1 = puVar11;
                        param_1[1] = local_70;
                        param_1[2] = puVar11;
                        param_1[0xc] = local_78;
                        param_1[0xd] = local_b8;
                        param_1[0xe] = local_180;
                        param_1[6] = local_80;
                        param_1[7] = local_90;
                        param_1[8] = uVar6;
                        param_1[9] = local_98;
                        param_1[10] = local_c0;
                        param_1[0xb] = local_98;
                        param_1[3] = local_a8;
                        param_1[4] = local_a0;
                        param_1[5] = pcVar12;
                        *(int *)(param_1 + 0xf) = (int)uVar1;
                        *(char *)((longlong)param_1 + 0x7c) = (char)local_c4;
                        lVar14 = local_68;
                        goto joined_r0x000140a54af1;
                      }
                      *(undefined *)(param_1 + 1) = 0;
                      *param_1 = 0xffffffffffffffff;
                      if (local_78 - 1U < 0xfffffffffffffffe) {
                        thunk_FUN_140704e90(local_b8,local_78,1);
                      }
                    }
                    else {
                      if ((uVar2 == 4) && (*_Buf1 == 0x70747468)) {
                        uVar15 = 0;
                        goto LAB_140a5499b;
                      }
LAB_140a54923:
                      *(undefined *)(param_1 + 1) = 1;
                      *param_1 = 0xffffffffffffffff;
                    }
                    thunk_FUN_140704e90(lVar7,puVar11,1);
                    goto LAB_140a5493f;
                  }
                }
                else if (pcVar12 == pcVar5) goto LAB_140a548e6;
                local_88 = puVar11;
                local_70 = lVar7;
                FUN_140e4b7a0(_Buf1,pcVar12,0,pcVar5,
                              &PTR_s_C__Users_VssAdministrator__cargo_141063cd8);
                goto LAB_140a54b63;
              }
            }
            FUN_140e4b58b(uVar13,puVar11);
            goto LAB_140a54b63;
          }
          *(undefined *)(param_1 + 1) = 2;
          *param_1 = 0xffffffffffffffff;
          lVar14 = local_68;
LAB_140a5493f:
          plVar10 = local_98;
          if (local_80 != 0) {
            thunk_FUN_140704e90(local_90,local_80,1);
          }
          thunk_FUN_140704e90(local_c0,plVar10,1);
          goto joined_r0x000140a54af1;
        }
      }
      FUN_140e4b58b(uVar6,plVar10);
LAB_140a54b63:
      do {
        invalidInstructionException();
      } while( true );
    }
  }
  *(undefined *)(param_1 + 1) = 3;
  *param_1 = 0xffffffffffffffff;
  lVar14 = local_68;
joined_r0x0
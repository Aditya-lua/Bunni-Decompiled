/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=1800bfd40 name=FUN_1800bfd40 */

void FUN_1800bfd40(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800bfd85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1806b0c50 + *(int *)(&DAT_1806b0c50 + (ulonglong)*(byte *)(param_1 + 0x50) * 4)))
            ();
  return;
}


/* address=1800c1e20 name=FUN_1800c1e20 */

void FUN_1800c1e20(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x10));
  local_30 = (undefined4 *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) == 1) {
    FUN_180001300(param_1 + 0x20);
  }
  else if (((*(int *)(param_1 + 0x18) == 0) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != -1))
          && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x28),lVar1,1);
  }
  *(undefined8 *)(local_30 + 8) = *(undefined8 *)(local_28 + 8);
  uVar2 = *local_28;
  uVar3 = local_28[1];
  uVar4 = local_28[2];
  uVar5 = local_28[3];
  uVar6 = local_28[5];
  uVar7 = local_28[6];
  uVar8 = local_28[7];
  local_30[4] = local_28[4];
  local_30[5] = uVar6;
  local_30[6] = uVar7;
  local_30[7] = uVar8;
  *local_30 = uVar2;
  local_30[1] = uVar3;
  local_30[2] = uVar4;
  local_30[3] = uVar5;
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c2060 name=FUN_1800c2060 */

void FUN_1800c2060(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
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
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 0x10));
  local_30 = (undefined4 *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) == 1) {
    FUN_1800010f0(param_1 + 0x20);
  }
  else if (((*(int *)(param_1 + 0x18) == 0) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != -1))
          && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x28),lVar1,1);
  }
  *(undefined8 *)(local_30 + 0xc) = *(undefined8 *)(local_28 + 0xc);
  uVar2 = *local_28;
  uVar3 = local_28[1];
  uVar4 = local_28[2];
  uVar5 = local_28[3];
  uVar6 = local_28[4];
  uVar7 = local_28[5];
  uVar8 = local_28[6];
  uVar9 = local_28[7];
  uVar10 = local_28[9];
  uVar11 = local_28[10];
  uVar12 = local_28[0xb];
  local_30[8] = local_28[8];
  local_30[9] = uVar10;
  local_30[10] = uVar11;
  local_30[0xb] = uVar12;
  local_30[4] = uVar6;
  local_30[5] = uVar7;
  local_30[6] = uVar8;
  local_30[7] = uVar9;
  *local_30 = uVar2;
  local_30[1] = uVar3;
  local_30[2] = uVar4;
  local_30[3] = uVar5;
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c2340 name=FUN_1800c2340 */

void FUN_1800c2340(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_180099760(local_30);
  FUN_180691e40(local_30,local_28,0xe0);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c25d0 name=FUN_1800c25d0 */

void FUN_1800c25d0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_1800998b0(local_30);
  FUN_180691e40(local_30,local_28,0x250);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c2860 name=FUN_1800c2860 */

void FUN_1800c2860(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_180099a00(local_30);
  FUN_180691e40(local_30,local_28,0x240);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c2ca0 name=FUN_1800c2ca0 */

void FUN_1800c2ca0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_180099b50(local_30);
  FUN_180691e40(local_30,local_28,0x240);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c3290 name=FUN_1800c3290 */

void FUN_1800c3290(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_180099ca0(local_30);
  FUN_180691e40(local_30,local_28,0x2c8);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c3880 name=FUN_1800c3880 */

void FUN_1800c3880(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_180099df0(local_30);
  FUN_180691e40(local_30,local_28,0x250);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c3b10 name=FUN_1800c3b10 */

void FUN_1800c3b10(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_180099f40(local_30);
  FUN_180691e40(local_30,local_28,0x240);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c3f50 name=FUN_1800c3f50 */

void FUN_1800c3f50(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009a090(local_30);
  FUN_180691e40(local_30,local_28,0x390);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c4390 name=FUN_1800c4390 */

void FUN_1800c4390(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009a1e0(local_30);
  FUN_180691e40(local_30,local_28,0x268);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c4620 name=FUN_1800c4620 */

void FUN_1800c4620(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009a330(local_30);
  FUN_180691e40(local_30,local_28,0x330);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c52d0 name=FUN_1800c52d0 */

void FUN_1800c52d0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009a410(local_30);
  FUN_180691e40(local_30,local_28,0x2a0);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c58c0 name=FUN_1800c58c0 */

void FUN_1800c58c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009a560(local_30);
  FUN_180691e40(local_30,local_28,0x2f0);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c5b50 name=FUN_1800c5b50 */

void FUN_1800c5b50(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009a6b0(local_30);
  FUN_180691e40(local_30,local_28,0x2c8);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c5de0 name=FUN_1800c5de0 */

void FUN_1800c5de0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009a790(local_30);
  FUN_180691e40(local_30,local_28,0x280);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c5ec0 name=FUN_1800c5ec0 */

void FUN_1800c5ec0(longlong param_1,undefined8 param_2)

{
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  code **local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_38 = param_2;
  local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1800a6170(param_1 + 0x18);
  }
  FUN_180691e40(local_40,local_38,0x330);
  local_19 = 0;
  FUN_1803ba480(&local_48);
  return;
}


/* address=1800c66f0 name=FUN_1800c66f0 */

void FUN_1800c66f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009a9a0(local_30);
  FUN_180691e40(local_30,local_28,0x250);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c6b30 name=FUN_1800c6b30 */

void FUN_1800c6b30(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009aaf0(local_30);
  FUN_180691e40(local_30,local_28,0x250);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c7630 name=FUN_1800c7630 */

void FUN_1800c7630(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009ac40(local_30);
  FUN_180691e40(local_30,local_28,0x250);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c7f80 name=FUN_1800c7f80 */

void FUN_1800c7f80(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009ad90(local_30);
  FUN_180691e40(local_30,local_28,0x250);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c8de0 name=FUN_1800c8de0 */

void FUN_1800c8de0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009aee0(local_30);
  FUN_180691e40(local_30,local_28,0x268);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c9070 name=FUN_1800c9070 */

void FUN_1800c9070(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009afc0(local_30);
  FUN_180691e40(local_30,local_28,0x2e0);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c94b0 name=FUN_1800c94b0 */

void FUN_1800c94b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009b110(local_30);
  FUN_180691e40(local_30,local_28,0x2b8);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800c9740 name=FUN_1800c9740 */

void FUN_1800c9740(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009b1f0(local_30);
  FUN_180691e40(local_30,local_28,0x250);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800cbef0 name=FUN_1800cbef0 */

void FUN_1800cbef0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009b340(local_30);
  FUN_180691e40(local_30,local_28,0x330);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800cc180 name=FUN_1800cc180 */

void FUN_1800cc180(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009b420(local_30);
  FUN_180691e40(local_30,local_28,0x260);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800cdbb0 name=FUN_1800cdbb0 */

void FUN_1800cdbb0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009b570(local_30);
  FUN_180691e40(local_30,local_28,0x3a0);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800ce1a0 name=FUN_1800ce1a0 */

void FUN_1800ce1a0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009b6f0(local_30);
  FUN_180691e40(local_30,local_28,0x2b8);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800ce790 name=FUN_1800ce790 */

void FUN_1800ce790(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009b7d0(local_30);
  FUN_180691e40(local_30,local_28,0x250);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800cef30 name=FUN_1800cef30 */

void FUN_1800cef30(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009b920(local_30);
  FUN_180691e40(local_30,local_28,0x2c8);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800cfa30 name=FUN_1800cfa30 */

void FUN_1800cfa30(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009ba70(local_30);
  FUN_180691e40(local_30,local_28,0x250);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800cfb10 name=FUN_1800cfb10 */

void FUN_1800cfb10(longlong param_1,undefined4 *param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined8 local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  longlong local_38;
  code **local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_21 = 1;
  local_40 = param_2;
  local_50 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  puVar16 = (undefined4 *)(param_1 + 0x10);
  if (((*(int *)(param_1 + 0x10) == 1) && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (local_38 = *(longlong *)(param_1 + 0x20), local_38 != 0)) {
    local_30 = *(code ***)(param_1 + 0x28);
    local_48 = puVar16;
    if (*local_30 != (code *)0x0) {
      (**local_30)(local_38);
    }
    puVar16 = local_48;
    if (local_30[1] != (code *)0x0) {
      thunk_FUN_1803e4c80(local_38,local_30[1],local_30[2]);
    }
  }
  uVar1 = local_40[0x11];
  uVar2 = local_40[0x12];
  uVar3 = local_40[0x13];
  puVar16[0x10] = local_40[0x10];
  puVar16[0x11] = uVar1;
  puVar16[0x12] = uVar2;
  puVar16[0x13] = uVar3;
  uVar1 = *local_40;
  uVar2 = local_40[1];
  uVar3 = local_40[2];
  uVar4 = local_40[3];
  uVar5 = local_40[4];
  uVar6 = local_40[5];
  uVar7 = local_40[6];
  uVar8 = local_40[7];
  uVar9 = local_40[8];
  uVar10 = local_40[9];
  uVar11 = local_40[10];
  uVar12 = local_40[0xb];
  uVar13 = local_40[0xd];
  uVar14 = local_40[0xe];
  uVar15 = local_40[0xf];
  puVar16[0xc] = local_40[0xc];
  puVar16[0xd] = uVar13;
  puVar16[0xe] = uVar14;
  puVar16[0xf] = uVar15;
  puVar16[8] = uVar9;
  puVar16[9] = uVar10;
  puVar16[10] = uVar11;
  puVar16[0xb] = uVar12;
  puVar16[4] = uVar5;
  puVar16[5] = uVar6;
  puVar16[6] = uVar7;
  puVar16[7] = uVar8;
  *puVar16 = uVar1;
  puVar16[1] = uVar2;
  puVar16[2] = uVar3;
  puVar16[3] = uVar4;
  local_21 = 0;
  FUN_1803ba480(&local_50);
  return;
}


/* address=1800cfff0 name=FUN_1800cfff0 */

void FUN_1800cfff0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009bbc0(local_30);
  FUN_180691e40(local_30,local_28,0x308);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800d00d0 name=FUN_1800d00d0 */

void FUN_1800d00d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  code **local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_38 = param_2;
  local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    if (*(char *)(param_1 + 0x340) == '\x03') {
      FUN_1800a55e0(param_1 + 0x58);
    }
    else if (*(char *)(param_1 + 0x340) == '\0') {
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x28),1);
      }
      plVar1 = *(longlong **)(param_1 + 0x40);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180397b10(param_1 + 0x40);
      }
    }
  }
  FUN_180691e40(local_40,local_38,0x338);
  local_19 = 0;
  FUN_1803ba480(&local_48);
  return;
}


/* address=1800d05f0 name=FUN_1800d05f0 */

void FUN_1800d05f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_18009bdc0(local_30);
  FUN_180691e40(local_30,local_28,0x2f8);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800d0880 name=FUN_1800d0880 */

void FUN_1800d0880(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  code **local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_38 = param_2;
  local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    if (*(char *)(param_1 + 0x110) == '\x03') {
      FUN_1800a5e70(param_1 + 0x58);
    }
    else if (*(char *)(param_1 + 0x110) == '\0') {
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x28),1);
      }
      plVar1 = *(longlong **)(param_1 + 0x40);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180397b10(param_1 + 0x40);
      }
    }
  }
  FUN_180691e40(local_40,local_38,0x108);
  local_19 = 0;
  FUN_1803ba480(&local_48);
  return;
}


/* address=1800d0a40 name=FUN_1800d0a40 */

void FUN_1800d0a40(longlong param_1,undefined4 *param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  longlong local_30;
  code **local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_38 = param_2;
  local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_40 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_180019d90(param_1 + 0x18);
  }
  uVar1 = local_38[0x1d];
  uVar2 = local_38[0x1e];
  uVar3 = local_38[0x1f];
  local_40[0x1c] = local_38[0x1c];
  local_40[0x1d] = uVar1;
  local_40[0x1e] = uVar2;
  local_40[0x1f] = uVar3;
  uVar1 = local_38[0x19];
  uVar2 = local_38[0x1a];
  uVar3 = local_38[0x1b];
  local_40[0x18] = local_38[0x18];
  local_40[0x19] = uVar1;
  local_40[0x1a] = uVar2;
  local_40[0x1b] = uVar3;
  uVar1 = local_38[0x15];
  uVar2 = local_38[0x16];
  uVar3 = local_38[0x17];
  local_40[0x14] = local_38[0x14];
  local_40[0x15] = uVar1;
  local_40[0x16] = uVar2;
  local_40[0x17] = uVar3;
  uVar1 = local_38[0x11];
  uVar2 = local_38[0x12];
  uVar3 = local_38[0x13];
  local_40[0x10] = local_38[0x10];
  local_40[0x11] = uVar1;
  local_40[0x12] = uVar2;
  local_40[0x13] = uVar3;
  uVar1 = *local_38;
  uVar2 = local_38[1];
  uVar3 = local_38[2];
  uVar4 = local_38[3];
  uVar5 = local_38[4];
  uVar6 = local_38[5];
  uVar7 = local_38[6];
  uVar8 = local_38[7];
  uVar9 = local_38[8];
  uVar10 = local_38[9];
  uVar11 = local_38[10];
  uVar12 = local_38[0xb];
  uVar13 = local_38[0xd];
  uVar14 = local_38[0xe];
  uVar15 = local_38[0xf];
  local_40[0xc] = local_38[0xc];
  local_40[0xd] = uVar13;
  local_40[0xe] = uVar14;
  local_40[0xf] = uVar15;
  local_40[8] = uVar9;
  local_40[9] = uVar10;
  local_40[10] = uVar11;
  local_40[0xb] = uVar12;
  local_40[4] = uVar5;
  local_40[5] = uVar6;
  local_40[6] = uVar7;
  local_40[7] = uVar8;
  *local_40 = uVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  local_19 = 0;
  FUN_1803ba480(&local_48);
  return;
}


/* address=1800d0c10 name=FUN_1800d0c10 */

void FUN_1800d0c10(longlong param_1,undefined4 *param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  longlong local_30;
  code **local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_38 = param_2;
  local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_40 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_180019fb0(param_1 + 0x18);
  }
  uVar1 = local_38[0x1d];
  uVar2 = local_38[0x1e];
  uVar3 = local_38[0x1f];
  local_40[0x1c] = local_38[0x1c];
  local_40[0x1d] = uVar1;
  local_40[0x1e] = uVar2;
  local_40[0x1f] = uVar3;
  uVar1 = local_38[0x19];
  uVar2 = local_38[0x1a];
  uVar3 = local_38[0x1b];
  local_40[0x18] = local_38[0x18];
  local_40[0x19] = uVar1;
  local_40[0x1a] = uVar2;
  local_40[0x1b] = uVar3;
  uVar1 = local_38[0x15];
  uVar2 = local_38[0x16];
  uVar3 = local_38[0x17];
  local_40[0x14] = local_38[0x14];
  local_40[0x15] = uVar1;
  local_40[0x16] = uVar2;
  local_40[0x17] = uVar3;
  uVar1 = local_38[0x11];
  uVar2 = local_38[0x12];
  uVar3 = local_38[0x13];
  local_40[0x10] = local_38[0x10];
  local_40[0x11] = uVar1;
  local_40[0x12] = uVar2;
  local_40[0x13] = uVar3;
  uVar1 = *local_38;
  uVar2 = local_38[1];
  uVar3 = local_38[2];
  uVar4 = local_38[3];
  uVar5 = local_38[4];
  uVar6 = local_38[5];
  uVar7 = local_38[6];
  uVar8 = local_38[7];
  uVar9 = local_38[8];
  uVar10 = local_38[9];
  uVar11 = local_38[10];
  uVar12 = local_38[0xb];
  uVar13 = local_38[0xd];
  uVar14 = local_38[0xe];
  uVar15 = local_38[0xf];
  local_40[0xc] = local_38[0xc];
  local_40[0xd] = uVar13;
  local_40[0xe] = uVar14;
  local_40[0xf] = uVar15;
  local_40[8] = uVar9;
  local_40[9] = uVar10;
  local_40[10] = uVar11;
  local_40[0xb] = uVar12;
  local_40[4] = uVar5;
  local_40[5] = uVar6;
  local_40[6] = uVar7;
  local_40[7] = uVar8;
  *local_40 = uVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  local_19 = 0;
  FUN_1803ba480(&local_48);
  return;
}


/* address=1800d0de0 name=FUN_1800d0de0 */

void FUN_1800d0de0(longlong param_1,undefined8 param_2)

{
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  code **local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_38 = param_2;
  local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_18001a1d0(param_1 + 0x18);
  }
  FUN_180691e40(local_40,local_38,0x88);
  local_19 = 0;
  FUN_1803ba480(&local_48);
  return;
}


/* address=1800d0f50 name=FUN_1800d0f50 */

void FUN_1800d0f50(longlong param_1,undefined8 param_2)

{
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  code **local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_38 = param_2;
  local_48 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_18001a3f0(param_1 + 0x18);
  }
  FUN_180691e40(local_40,local_38,0x108);
  local_19 = 0;
  FUN_1803ba480(&local_48);
  return;
}


/* address=1800d11c0 name=FUN_1800d11c0 */

void FUN_1800d11c0(longlong param_1,undefined4 *param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_180001400(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_18001a5e0(param_1 + 0x18);
  }
  uVar1 = *local_28;
  uVar2 = local_28[1];
  uVar3 = local_28[2];
  uVar4 = local_28[3];
  uVar5 = local_28[4];
  uVar6 = local_28[5];
  uVar7 = local_28[6];
  uVar8 = local_28[7];
  uVar9 = local_28[8];
  uVar10 = local_28[9];
  uVar11 = local_28[10];
  uVar12 = local_28[0xb];
  uVar13 = local_28[0xd];
  uVar14 = local_28[0xe];
  uVar15 = local_28[0xf];
  local_30[0xc] = local_28[0xc];
  local_30[0xd] = uVar13;
  local_30[0xe] = uVar14;
  local_30[0xf] = uVar15;
  local_30[8] = uVar9;
  local_30[9] = uVar10;
  local_30[10] = uVar11;
  local_30[0xb] = uVar12;
  local_30[4] = uVar5;
  local_30[5] = uVar6;
  local_30[6] = uVar7;
  local_30[7] = uVar8;
  *local_30 = uVar1;
  local_30[1] = uVar2;
  local_30[2] = uVar3;
  local_30[3] = uVar4;
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800d13f0 name=FUN_1800d13f0 */

void FUN_1800d13f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_180001400(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1800a62a0(param_1 + 0x18);
  }
  FUN_180691e40(local_30,local_28,0x120);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800d15f0 name=FUN_1800d15f0 */

void FUN_1800d15f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1803b6560(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_180001400(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_18001b4e0(param_1 + 0x18);
  }
  FUN_180691e40(local_30,local_28,0x98);
  local_19 = 0;
  FUN_1803ba480(&local_38);
  return;
}


/* address=1800d16f0 name=FUN_1800d16f0 */

void FUN_1800d16f0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_18000e980(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d17b0 name=FUN_1800d17b0 */

void FUN_1800d17b0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d3580(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d1870 name=FUN_1800d1870 */

void FUN_1800d1870(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d3a80(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d1930 name=FUN_1800d1930 */

void FUN_1800d1930(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d3f80(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d19f0 name=FUN_1800d19f0 */

void FUN_1800d19f0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d4450(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d1ab0 name=FUN_1800d1ab0 */

void FUN_1800d1ab0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d4950(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d1b70 name=FUN_1800d1b70 */

void FUN_1800d1b70(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d4e30(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d1c30 name=FUN_1800d1c30 */

void FUN_1800d1c30(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d53e0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d1cf0 name=FUN_1800d1cf0 */

void FUN_1800d1cf0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d58f0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d1db0 name=FUN_1800d1db0 */

void FUN_1800d1db0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d5df0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d1e70 name=FUN_1800d1e70 */

void FUN_1800d1e70(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d63c0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d1f30 name=FUN_1800d1f30 */

void FUN_1800d1f30(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d68c0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d1ff0 name=FUN_1800d1ff0 */

void FUN_1800d1ff0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d6dc0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d20b0 name=FUN_1800d20b0 */

void FUN_1800d20b0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d74e0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2170 name=FUN_1800d2170 */

void FUN_1800d2170(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d7a00(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2230 name=FUN_1800d2230 */

void FUN_1800d2230(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d80f0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d22f0 name=FUN_1800d22f0 */

void FUN_1800d22f0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d85f0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d23b0 name=FUN_1800d23b0 */

void FUN_1800d23b0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d8ad0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2470 name=FUN_1800d2470 */

void FUN_1800d2470(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d8fd0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2530 name=FUN_1800d2530 */

void FUN_1800d2530(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d94d0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d25f0 name=FUN_1800d25f0 */

void FUN_1800d25f0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d9a60(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d26b0 name=FUN_1800d26b0 */

void FUN_1800d26b0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800d9f60(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2770 name=FUN_1800d2770 */

void FUN_1800d2770(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800da520(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2830 name=FUN_1800d2830 */

void FUN_1800d2830(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800daa20(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d28f0 name=FUN_1800d28f0 */

void FUN_1800d28f0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800db280(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d29b0 name=FUN_1800d29b0 */

void FUN_1800d29b0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800db790(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2a70 name=FUN_1800d2a70 */

void FUN_1800d2a70(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800dc110(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2b30 name=FUN_1800d2b30 */

void FUN_1800d2b30(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800dc6e0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2bf0 name=FUN_1800d2bf0 */

void FUN_1800d2bf0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800182c0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2cb0 name=FUN_1800d2cb0 */

void FUN_1800d2cb0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800dcbc0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2d70 name=FUN_1800d2d70 */

void FUN_1800d2d70(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800dd0c0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2e30 name=FUN_1800d2e30 */

void FUN_1800d2e30(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_180019290(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2ef0 name=FUN_1800d2ef0 */

void FUN_1800d2ef0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_1800dd6c0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d2fb0 name=FUN_1800d2fb0 */

void FUN_1800d2fb0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_180019bd0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d3070 name=FUN_1800d3070 */

void FUN_1800d3070(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_180019d90(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d3130 name=FUN_1800d3130 */

void FUN_1800d3130(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_180019fb0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d31f0 name=FUN_1800d31f0 */

void FUN_1800d31f0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_18001a1d0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d32b0 name=FUN_1800d32b0 */

void FUN_1800d32b0(int *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
      ppcVar2 = *(code ***)(param_1 + 6);
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    FUN_18001a3f0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d3370 name=FUN_1800d3370 */

void FUN_1800d3370(int *param_1)

{
  if (*param_1 == 1) {
    FUN_180001400(param_1 + 2);
    return;
  }
  if (*param_1 == 0) {
    FUN_18001a5e0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d3390 name=FUN_1800d3390 */

void FUN_1800d3390(int *param_1)

{
  if (*param_1 == 1) {
    FUN_180001400(param_1 + 2);
    return;
  }
  if (*param_1 == 0) {
    FUN_1800ddcc0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d33b0 name=FUN_1800d33b0 */

void FUN_1800d33b0(int *param_1)

{
  if (*param_1 == 1) {
    FUN_180001400(param_1 + 2);
    return;
  }
  if (*param_1 == 0) {
    FUN_18001b4e0(param_1 + 2);
    return;
  }
  return;
}


/* address=1800d33d0 name=FUN_1800d33d0 */

void FUN_1800d33d0(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    FUN_1800de110(param_1 + 0x10);
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


/* address=1800d34a0 name=FUN_1800d34a0 */

void FUN_1800d34a0(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*(char *)(param_1 + 0x148) == '\0') {
LAB_1800d34d6:
    FUN_1800de110(param_1);
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
      goto LAB_1800d34d6;
    }
  }
  return;
}


/* address=1800d3580 name=FUN_1800d3580 */

void FUN_1800d3580(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x128);
        }
        else if (*(char *)(param_1 + 0x218) == '\0') {
          FUN_1800de110(param_1 + 0xd0);
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
        goto LAB_1800d3825;
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
LAB_1800d3825:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800d3a80 name=FUN_1800d3a80 */

void FUN_1800d3a80(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x120);
        }
        else if (*(char *)(param_1 + 0x210) == '\0') {
          FUN_1800de110(param_1 + 200);
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
        goto LAB_1800d3d1c;
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
LAB_1800d3d1c:
        FUN_180239850(param_1 + 0x90);
        return;
      }
    }
  }
  return;
}


/* address=1800d3f80 name=FUN_1800d3f80 */

void FUN_1800d3f80(longlong param_1)

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
        FUN_1800d34a0(param_1 + 200);
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
        goto LAB_1800d41f9;
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
LAB_1800d41f9:
        FUN_180239850(param_1 + 0x90);
        return;
      }
    }
  }
  return;
}


/* address=1800d4450 name=FUN_1800d4450 */

void FUN_1800d4450(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x168);
        }
        else if (*(char *)(param_1 + 600) == '\0') {
          FUN_1800de110(param_1 + 0x110);
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
        goto LAB_1800d46f8;
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
LAB_1800d46f8:
        FUN_180239850(param_1 + 0xd0);
        return;
      }
    }
  }
  return;
}


/* address=1800d4950 name=FUN_1800d4950 */

void FUN_1800d4950(longlong param_1)

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
        FUN_1800d34a0(param_1 + 0xd0);
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
        goto LAB_1800d4bd2;
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
LAB_1800d4bd2:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800d4e30 name=FUN_1800d4e30 */

void FUN_1800d4e30(longlong param_1)

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
            FUN_1800de110(param_1 + 0x130);
          }
        }
        else if (*(char *)(param_1 + 0x210) == '\0') {
          FUN_1800de110(param_1 + 200);
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
        goto LAB_1800d5146;
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
LAB_1800d5146:
        FUN_180239850(param_1 + 0x90);
        return;
      }
    }
  }
  return;
}


/* address=1800d53e0 name=FUN_1800d53e0 */

void FUN_1800d53e0(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x1e8);
        }
        else if (*(char *)(param_1 + 0x2d8) == '\0') {
          FUN_1800de110(param_1 + 400);
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
        goto LAB_1800d5694;
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
LAB_1800d5694:
        FUN_180239850(param_1 + 0x120);
        return;
      }
    }
  }
  return;
}


/* address=1800d58f0 name=FUN_1800d58f0 */

void FUN_1800d58f0(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x138);
        }
        else if (*(char *)(param_1 + 0x228) == '\0') {
          FUN_1800de110(param_1 + 0xe0);
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
        goto LAB_1800d5b95;
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
LAB_1800d5b95:
        FUN_180239850(param_1 + 0xa8);
        return;
      }
    }
  }
  return;
}


/* address=1800d5df0 name=FUN_1800d5df0 */

void FUN_1800d5df0(longlong param_1)

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
    goto LAB_1800d60d1;
  }
  if (*(char *)(param_1 + 0x310) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x168);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x308) == '\x03') {
      if (*(char *)(param_1 + 0x300) == '\x03') {
        FUN_1800d33d0(param_1 + 0x210);
      }
      else if (*(char *)(param_1 + 0x300) == '\0') {
        FUN_1800de110(param_1 + 0x1b8);
      }
    }
    else if (((*(char *)(param_1 + 0x308) == '\0') &&
             (lVar5 = *(longlong *)(param_1 + 0x180), lVar5 != -1)) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x188),lVar5,1);
    }
    FUN_1803aa820(*(undefined8 *)(param_1 + 0x170),1);
LAB_1800d6038:
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
      goto LAB_1800d6038;
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
LAB_1800d60d1:
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar5,1);
  return;
}


/* address=1800d63c0 name=FUN_1800d63c0 */

void FUN_1800d63c0(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x158);
        }
        else if (*(char *)(param_1 + 0x248) == '\0') {
          FUN_1800de110(param_1 + 0x100);
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
        goto LAB_1800d6668;
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
LAB_1800d6668:
        FUN_180239850(param_1 + 0xc0);
        return;
      }
    }
  }
  return;
}


/* address=1800d68c0 name=FUN_1800d68c0 */

void FUN_1800d68c0(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x188);
        }
        else if (*(char *)(param_1 + 0x278) == '\0') {
          FUN_1800de110(param_1 + 0x130);
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
        goto LAB_1800d6b68;
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
LAB_1800d6b68:
        FUN_180239850(param_1 + 0xe0);
        return;
      }
    }
  }
  return;
}


/* address=1800d6dc0 name=FUN_1800d6dc0 */

void FUN_1800d6dc0(longlong param_1)

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
LAB_1800d6e09:
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
    goto LAB_1800d6e09;
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
    goto LAB_1800d70d4;
  }
  if (*(char *)(param_1 + 0x2a9) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x119);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x291) == '\x03') {
      FUN_1800d34a0(param_1 + 0x140);
    }
    else if (*(char *)(param_1 + 0x291) == '\0') {
      FUN_18024e7c0();
      if (*(longlong *)(param_1 + 0x120) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x128),*(longlong *)(param_1 + 0x120) * 0x18,8
                           );
      }
    }
    FUN_1803aa820(*(undefined8 *)(param_1 + 0x298),1);
LAB_1800d703e:
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
      goto LAB_1800d703e;
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
LAB_1800d70d4:
  if (*local_40 == 0) {
    return;
  }
  thunk_FUN_1803e4c80(local_40[1],*local_40 * 0x18,8);
  return;
}


/* address=1800d74e0 name=FUN_1800d74e0 */

void FUN_1800d74e0(longlong param_1)

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
                FUN_1800d33d0(param_1 + 0x150);
              }
              else if (*(char *)(param_1 + 0x240) == '\0') {
                FUN_1800de110(param_1 + 0xf8);
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


/* address=1800d7a00 name=FUN_1800d7a00 */

void FUN_1800d7a00(longlong param_1)

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
    goto joined_r0x0001800d7d5c;
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
    goto joined_r0x0001800d7d5c;
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
          FUN_1800d33d0(param_1 + 0x210);
        }
        else if (*(char *)(param_1 + 0x300) == '\0') {
          FUN_1800de110(param_1 + 0x1b8);
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
        goto LAB_1800d7d53;
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
LAB_1800d7d53:
  plVar4 = (longlong *)((longlong)(int *)(param_1 + 200) + lVar5);
  lVar5 = *plVar4;
joined_r0x0001800d7d5c:
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


/* address=1800d80f0 name=FUN_1800d80f0 */

void FUN_1800d80f0(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x130);
        }
        else if (*(char *)(param_1 + 0x220) == '\0') {
          FUN_1800de110(param_1 + 0xd8);
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
        goto LAB_1800d8395;
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
LAB_1800d8395:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800d85f0 name=FUN_1800d85f0 */

void FUN_1800d85f0(longlong param_1)

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
        FUN_1800d34a0(param_1 + 0xd8);
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
        goto LAB_1800d8872;
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
LAB_1800d8872:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800d8ad0 name=FUN_1800d8ad0 */

void FUN_1800d8ad0(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x128);
        }
        else if (*(char *)(param_1 + 0x218) == '\0') {
          FUN_1800de110(param_1 + 0xd0);
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
        goto LAB_1800d8d75;
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
LAB_1800d8d75:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800d8fd0 name=FUN_1800d8fd0 */

void FUN_1800d8fd0(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x128);
        }
        else if (*(char *)(param_1 + 0x218) == '\0') {
          FUN_1800de110(param_1 + 0xd0);
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
        goto LAB_1800d9275;
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
LAB_1800d9275:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800d94d0 name=FUN_1800d94d0 */

void FUN_1800d94d0(longlong param_1)

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
        FUN_1800d33d0(param_1 + 0x140);
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
        goto LAB_1800d9760;
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
LAB_1800d9760:
  if (*(longlong *)(param_1 + lVar5) == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8 + lVar5),*(longlong *)(param_1 + lVar5),1);
  return;
}


/* address=1800d9a60 name=FUN_1800d9a60 */

void FUN_1800d9a60(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x1c0);
        }
        else if (*(char *)(param_1 + 0x2b0) == '\0') {
          FUN_1800de110(param_1 + 0x168);
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
        goto LAB_1800d9d08;
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
LAB_1800d9d08:
        FUN_180239850(param_1 + 0xf0);
        return;
      }
    }
  }
  return;
}


/* address=1800d9f60 name=FUN_1800d9f60 */

void FUN_1800d9f60(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x188);
        }
        else if (*(char *)(param_1 + 0x278) == '\0') {
          FUN_1800de110(param_1 + 0x130);
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
        goto LAB_1800da217;
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
LAB_1800da217:
  if (*(longlong *)(param_1 + lVar5) == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8 + lVar5),*(longlong *)(param_1 + lVar5),1);
  return;
}


/* address=1800da520 name=FUN_1800da520 */

void FUN_1800da520(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x130);
        }
        else if (*(char *)(param_1 + 0x220) == '\0') {
          FUN_1800de110(param_1 + 0xd8);
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
        goto LAB_1800da7c5;
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
LAB_1800da7c5:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800daa20 name=FUN_1800daa20 */

void FUN_1800daa20(longlong param_1)

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
LAB_1800daa67:
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
    goto LAB_1800daa67;
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
    goto LAB_1800dadef;
  }
  if (*(char *)(param_1 + 0x310) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x168);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x308) == '\x03') {
      FUN_1800d34a0(param_1 + 0x1b8);
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
LAB_1800dad22:
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
      goto LAB_1800dad22;
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
LAB_1800dadef:
  if (*local_38 == 0) {
    return;
  }
  thunk_FUN_1803e4c80(local_38[1],*local_38 * 0x18,8);
  return;
}


/* address=1800db280 name=FUN_1800db280 */

void FUN_1800db280(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x128);
        }
        else if (*(char *)(param_1 + 0x218) == '\0') {
          FUN_1800de110(param_1 + 0xd0);
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
        goto LAB_1800db536;
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
LAB_1800db536:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800db790 name=FUN_1800db790 */

void FUN_1800db790(longlong param_1)

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
        FUN_1800d33d0(param_1 + 0x1a8);
      }
      else if (*(char *)(param_1 + 0x298) == '\0') {
        FUN_1800de110(param_1 + 0x150);
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
      goto LAB_1800dbb2a;
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
LAB_1800dbb2a:
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


/* address=1800dc110 name=FUN_1800dc110 */

void FUN_1800dc110(longlong param_1)

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
    goto LAB_1800dc3f1;
  }
  if (*(char *)(param_1 + 0x298) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x108);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x280) == '\x03') {
      if (*(char *)(param_1 + 0x278) == '\x03') {
        FUN_1800d33d0(param_1 + 0x188);
      }
      else if (*(char *)(param_1 + 0x278) == '\0') {
        FUN_1800de110(param_1 + 0x130);
      }
    }
    else if (((*(char *)(param_1 + 0x280) == '\0') &&
             (lVar5 = *(longlong *)(param_1 + 0x110), lVar5 != -1)) && (lVar5 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x118),lVar5,1);
    }
    FUN_1803aa820(*(undefined8 *)(param_1 + 0x288),1);
LAB_1800dc358:
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
      goto LAB_1800dc358;
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
LAB_1800dc3f1:
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar5,1);
  return;
}


/* address=1800dc6e0 name=FUN_1800dc6e0 */

void FUN_1800dc6e0(longlong param_1)

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
        FUN_1800d34a0(param_1 + 200);
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
        goto LAB_1800dc966;
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
LAB_1800dc966:
        FUN_180239850(param_1 + 0x90);
        return;
      }
    }
  }
  return;
}


/* address=1800dcbc0 name=FUN_1800dcbc0 */

void FUN_1800dcbc0(longlong param_1)

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
          FUN_1800d33d0(param_1 + 0x128);
        }
        else if (*(char *)(param_1 + 0x218) == '\0') {
          FUN_1800de110(param_1 + 0xd0);
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
        goto LAB_1800dce65;
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
LAB_1800dce65:
        FUN_180239850(param_1 + 0xa0);
        return;
      }
    }
  }
  return;
}


/* address=1800dd0c0 name=FUN_1800dd0c0 */

void FUN_1800dd0c0(longlong param_1)

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
                FUN_1800d33d0(param_1 + 0x1e0);
              }
              else if (*(char *)(param_1 + 0x2d0) == '\0') {
                FUN_1800de110(param_1 + 0x188);
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
              goto LAB_1800dd203;
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
LAB_1800dd203:
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
          goto LAB_1800dd203;
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


/* address=1800dd6c0 name=FUN_1800dd6c0 */

void FUN_1800dd6c0(longlong param_1)

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
                FUN_1800d33d0(param_1 + 0x1d0);
              }
              else if (*(char *)(param_1 + 0x2c0) == '\0') {
                FUN_1800de110(param_1 + 0x178);
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
              goto LAB_1800dd803;
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
LAB_1800dd803:
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
          goto LAB_1800dd803;
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


/* address=1800ddcc0 name=FUN_1800ddcc0 */

void FUN_1800ddcc0(undefined8 *param_1)

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
      FUN_1800de110(param_1 + 0x17);
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


/* address=1800de110 name=FUN_1800de110 */

void FUN_1800de110(undefined *param_1)

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
LAB_1800de13d:
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
    if (0 < lVar2) goto LAB_1800de13d;
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


/* address=1800ed260 name=FUN_1800ed260 */

void FUN_1800ed260(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != -1) {
    plVar1 = (longlong *)param_1[6];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1803a4110(param_1 + 6);
    }
    if (*param_1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],*param_1,1);
    }
    if (param_1[3] != 0) {
      thunk_FUN_1803e4c80(param_1[4],param_1[3],1);
      return;
    }
  }
  return;
}


/* address=1800ed300 name=FUN_1800ed300 */

void FUN_1800ed300(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if (lVar1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],lVar1,1);
    }
    lVar1 = param_1[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_1803e4c80(param_1[4],lVar1,1);
      return;
    }
  }
  return;
}


/* address=1800ed350 name=FUN_1800ed350 */

void FUN_1800ed350(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != -2) {
    if (lVar1 == -1) {
      lVar1 = param_1[1];
      lVar2 = 0x10;
    }
    else {
      if (lVar1 != 0) {
        thunk_FUN_1803e4c80(param_1[1],lVar1,1);
      }
      if (param_1[3] != 0) {
        thunk_FUN_1803e4c80(param_1[4],param_1[3],1);
      }
      if (param_1[6] != 0) {
        thunk_FUN_1803e4c80(param_1[7],param_1[6],1);
      }
      lVar1 = param_1[9];
      lVar2 = 0x50;
    }
    if (lVar1 != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)((longlong)param_1 + lVar2),lVar1,1);
      return;
    }
  }
  return;
}


/* address=1800ed3f0 name=FUN_1800ed3f0 */

void FUN_1800ed3f0(longlong param_1,undefined8 param_2)

{
  if ((1 < param_1 + 1U) && (-0x7fffffffffffffff < param_1)) {
    thunk_FUN_1803e4c80(param_2,param_1,1);
    return;
  }
  return;
}


/* address=1800ed420 name=FUN_1800ed420 */

void FUN_1800ed420(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if (lVar1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],lVar1,1);
    }
    if (param_1[0xb] != 0) {
      thunk_FUN_1803e4c80(param_1[0xc],param_1[0xb],1);
      return;
    }
  }
  return;
}


/* address=1800ed470 name=FUN_1800ed470 */

void FUN_1800ed470(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x38);
    do {
      if (puVar4[-7] != 0) {
        thunk_FUN_1803e4c80(puVar4[-6],puVar4[-7],1);
      }
      lVar2 = puVar4[-4];
      if ((lVar2 != -1) && (lVar2 != 0)) {
        thunk_FUN_1803e4c80(puVar4[-3],lVar2,1);
      }
      lVar2 = puVar4[-1];
      if ((lVar2 != -1) && (lVar2 != 0)) {
        thunk_FUN_1803e4c80(*puVar4,lVar2 * 0x11,1);
      }
      puVar4 = puVar4 + 9;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(lVar1,*param_1 * 0x48,8);
    return;
  }
  return;
}


/* address=1800ed530 name=FUN_1800ed530 */

void FUN_1800ed530(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x20);
    do {
      if (puVar4[-4] != 0) {
        thunk_FUN_1803e4c80(puVar4[-3],puVar4[-4],1);
      }
      lVar2 = puVar4[-1];
      if ((lVar2 != -1) && (lVar2 != 0)) {
        thunk_FUN_1803e4c80(*puVar4,lVar2,1);
      }
      puVar4 = puVar4 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(lVar1,*param_1 * 0x30,8);
    return;
  }
  return;
}


/* address=1800ed5d0 name=FUN_1800ed5d0 */

void FUN_1800ed5d0(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  puVar1 = (ulonglong *)param_1[1];
  lVar4 = param_1[2];
  puVar6 = puVar1;
  do {
    if (lVar4 == 0) {
      if (*param_1 != 0) {
        thunk_FUN_1803e4c80(puVar1,*param_1 * 0x48,8);
        return;
      }
      return;
    }
    uVar2 = *puVar6;
    uVar3 = uVar2 ^ 0x8000000000000000;
    if (-1 < (longlong)uVar2) {
      uVar3 = 9;
    }
    lVar5 = 8;
    if (0x10 < uVar3) goto LAB_1800ed68d;
    if ((0xec7fUL >> (uVar3 & 0x3f) & 1) == 0) {
      if (uVar3 == 9) {
        if (uVar2 != 0) {
          thunk_FUN_1803e4c80(puVar6[1],uVar2,1);
        }
        lVar5 = 0x30;
        if (puVar6[3] != 0) {
          thunk_FUN_1803e4c80(puVar6[4],puVar6[3],1);
        }
LAB_1800ed68d:
        uVar2 = *(ulonglong *)((longlong)puVar6 + lVar5);
      }
      else {
        if (uVar3 != 0x10) goto LAB_1800ed68d;
        uVar2 = puVar6[1];
        if (uVar2 == 0xffffffffffffffff) goto LAB_1800ed610;
      }
      if (uVar2 != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(lVar5 + 8 + (longlong)puVar6),uVar2,1);
      }
    }
LAB_1800ed610:
    puVar6 = puVar6 + 9;
    lVar4 = lVar4 + -1;
  } while( true );
}


/* address=1800ed6f0 name=FUN_1800ed6f0 */

void FUN_1800ed6f0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x20);
    do {
      uVar2 = puVar4[-1];
      if ((uVar2 < 0xfffffffffffffffe) && (uVar2 != 0)) {
        thunk_FUN_1803e4c80(*puVar4,uVar2,1);
      }
      puVar4 = puVar4 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(lVar1,*param_1 * 0x30,8);
    return;
  }
  return;
}


/* address=1800ed770 name=FUN_1800ed770 */

void FUN_1800ed770(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  ppcVar2 = *(code ***)(param_1 + 0x20);
  if (*ppcVar2 != (code *)0x0) {
    (**ppcVar2)(uVar1);
  }
  if (ppcVar2[1] != (code *)0x0) {
    thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  ppcVar2 = *(code ***)(param_1 + 0x38);
  if (*ppcVar2 != (code *)0x0) {
    (**ppcVar2)(uVar1);
  }
  if (ppcVar2[1] != (code *)0x0) {
    thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  ppcVar2 = *(code ***)(param_1 + 0x50);
  if (*ppcVar2 != (code *)0x0) {
    (**ppcVar2)(uVar1);
  }
  if (ppcVar2[1] != (code *)0x0) {
    thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
    return;
  }
  return;
}


/* address=1800ed950 name=FUN_1800ed950 */

void FUN_1800ed950(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar4 = *(longlong *)(param_1 + 0x418);
  if (lVar4 == 0) {
    local_50 = 0;
  }
  else {
    local_78 = *(undefined8 *)(param_1 + 0x420);
    local_50 = *(undefined8 *)(param_1 + 0x428);
    local_88 = 0;
    local_68 = 0;
    local_80 = lVar4;
    local_60 = lVar4;
    local_58 = local_78;
  }
  local_90 = (ulonglong)(lVar4 != 0);
  local_70 = local_90;
  local_30 = param_1;
  FUN_180333710(local_48,&local_90);
  if (local_48[0] != 0) {
    do {
      lVar4 = *(longlong *)(local_48[0] + 8 + local_38 * 0x18);
      if (lVar4 != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(local_48[0] + local_38 * 0x18 + 0x10),lVar4,1);
      }
      FUN_180333710(local_48,&local_90);
    } while (local_48[0] != 0);
  }
  lVar3 = local_30;
  lVar4 = *(longlong *)(local_30 + 0x1b8);
  if ((lVar4 != -1) && (lVar4 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(local_30 + 0x1c0),lVar4,1);
  }
  FUN_1800f7710(lVar3 + 0x10);
  lVar4 = *(longlong *)(lVar3 + 0x90);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x88) + 0x38);
    do {
      if (puVar5[-7] != 0) {
        thunk_FUN_1803e4c80(puVar5[-6],puVar5[-7],1);
      }
      lVar1 = puVar5[-4];
      if ((lVar1 != -1) && (lVar1 != 0)) {
        thunk_FUN_1803e4c80(puVar5[-3],lVar1,1);
      }
      lVar1 = puVar5[-1];
      if ((lVar1 != -1) && (lVar1 != 0)) {
        thunk_FUN_1803e4c80(*puVar5,lVar1 * 0x11,1);
      }
      puVar5 = puVar5 + 9;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(longlong *)(lVar3 + 0x80) != 0) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x88),*(longlong *)(lVar3 + 0x80) * 0x48,8);
  }
  lVar4 = *(longlong *)(lVar3 + 0x1d0);
  if ((lVar4 != -1) && (lVar4 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x1d8),lVar4,1);
  }
  lVar4 = *(longlong *)(lVar3 + 0x1e8);
  if ((lVar4 != -1) && (lVar4 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x1f0),lVar4,1);
  }
  lVar4 = *(longlong *)(lVar3 + 0x398);
  if (((-0x7fffffffffffffff < lVar4) && (lVar4 != -1)) && (lVar4 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x3a0),lVar4,1);
  }
  lVar4 = *(longlong *)(lVar3 + 0x200);
  if ((lVar4 != -1) && (lVar4 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x208),lVar4,1);
  }
  lVar4 = *(longlong *)(lVar3 + 0x218);
  if ((lVar4 != -1) && (lVar4 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x220),lVar4,1);
  }
  lVar4 = *(longlong *)(lVar3 + 0x230);
  if ((lVar4 != -1) && (lVar4 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x238),lVar4,1);
  }
  FUN_1800ed350(lVar3 + 0x338);
  if (*(longlong *)(lVar3 + 0x248) != -1) {
    plVar2 = *(longlong **)(lVar3 + 0x278);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1803a4110(local_30 + 0x278);
    }
    lVar3 = local_30;
    if (*(longlong *)(local_30 + 0x248) != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(local_30 + 0x250),*(longlong *)(local_30 + 0x248),1);
    }
    if (*(longlong *)(lVar3 + 0x260) != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x268),*(longlong *)(lVar3 + 0x260),1);
    }
  }
  if (*(longlong *)(lVar3 + 0x98) != 0) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0xa0),*(longlong *)(lVar3 + 0x98) * 0x11,1);
  }
  if (*(longlong *)(lVar3 + 0xb0) != 0) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0xb8),*(longlong *)(lVar3 + 0xb0) * 0x11,1);
  }
  FUN_1800f7940(lVar3 + 200);
  lVar4 = *(longlong *)(lVar3 + 0x288);
  if (lVar4 != -1) {
    if (lVar4 != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x290),lVar4,1);
    }
    if (*(longlong *)(lVar3 + 0x2e0) != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x2e8),*(longlong *)(lVar3 + 0x2e0),1);
    }
  }
  if (*(longlong *)(lVar3 + 0x188) != 0) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 400),*(longlong *)(lVar3 + 0x188) * 0x11,1);
  }
  lVar4 = *(longlong *)(lVar3 + 0x448);
  if (lVar4 == 0) {
    local_50 = 0;
  }
  else {
    local_78 = *(undefined8 *)(lVar3 + 0x450);
    local_50 = *(undefined8 *)(lVar3 + 0x458);
    local_88 = 0;
    local_68 = 0;
    local_80 = lVar4;
    local_60 = lVar4;
    local_58 = local_78;
  }
  local_90 = (ulonglong)(lVar4 != 0);
  local_70 = local_90;
  FUN_180333af0(local_48,&local_90);
  if (local_48[0] != 0) {
    do {
      lVar4 = *(longlong *)(local_48[0] + 0x168 + local_38 * 0x18);
      if (lVar4 != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(local_48[0] + local_38 * 0x18 + 0x170),lVar4,1);
      }
      FUN_180333af0(local_48,&local_90);
    } while (local_48[0] != 0);
  }
  lVar3 = local_30;
  lVar4 = *(longlong *)(local_30 + 0x1b0);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(*(longlong *)(local_30 + 0x1a8) + 0x20);
    do {
      if (puVar5[-4] != 0) {
        thunk_FUN_1803e4c80(puVar5[-3],puVar5[-4],1);
      }
      lVar1 = puVar5[-1];
      if ((lVar1 != -1) && (lVar1 != 0)) {
        thunk_FUN_1803e4c80(*puVar5,lVar1,1);
      }
      puVar5 = puVar5 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(longlong *)(lVar3 + 0x1a0) != 0) {
    thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x1a8),*(longlong *)(lVar3 + 0x1a0) * 0x30,8);
  }
  lVar4 = *(longlong *)(lVar3 + 0x308);
  if (lVar4 != -1) {
    if (lVar4 != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x310),lVar4,1);
    }
    lVar4 = *(longlong *)(lVar3 + 800);
    if ((lVar4 != -1) && (lVar4 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(lVar3 + 0x328),lVar4,1);
    }
  }
  thunk_FUN_1803e4c80(lVar3,0x4d8,8);
  return;
}


/* address=1800ee150 name=FUN_1800ee150 */

void FUN_1800ee150(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  ppcVar2 = *(code ***)(param_1 + 0x78);
  if (*ppcVar2 != (code *)0x0) {
    (**ppcVar2)(uVar1);
  }
  if (ppcVar2[1] != (code *)0x0) {
    thunk_FUN_1803e4c80(uVar1,ppcVar2[1],ppcVar2[2]);
  }
  FUN_18001bdd0(param_1);
  return;
}


/* address=1800ee1f0 name=FUN_1800ee1f0 */

void FUN_1800ee1f0(longlong param_1)

{
  ulonglong uVar1;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x128) == '\x03') {
    local_18 = param_1;
    FUN_18001bdd0(param_1 + 0xb8);
    uVar1 = *(ulonglong *)(local_18 + 0xb0);
    param_1 = local_18;
    if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
      local_20 = uVar1 - 1;
      FUN_180404230(&local_20);
      param_1 = local_18;
    }
  }
  FUN_18001bdd0(param_1);
  return;
}


/* address=1800ee2b0 name=FUN_1800ee2b0 */

void FUN_1800ee2b0(longlong **param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *param_1;
  LOCK();
  plVar1 = plVar2 + 0x3e;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180224c20(plVar2 + 0x10);
    FUN_1803ac440(plVar2 + 0x20);
  }
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18023a030(param_1);
    return;
  }
  return;
}


/* address=1800ee350 name=FUN_1800ee350 */

void FUN_1800ee350(longlong **param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *param_1;
  LOCK();
  plVar2 = plVar1 + 0x39;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180224820(plVar1 + 0x10);
    FUN_1803ac440(plVar1 + 0x20);
  }
  plVar2 = *param_1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180239ea0();
    return;
  }
  return;
}


/* address=1800ee3e0 name=FUN_1800ee3e0 */

void FUN_1800ee3e0(longlong **param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *param_1;
  LOCK();
  plVar2 = plVar1 + 0x39;
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
    FUN_18023a030();
    return;
  }
  return;
}


/* address=1800ee470 name=FUN_1800ee470 */

void FUN_1800ee470(longlong **param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *param_1;
  LOCK();
  plVar2 = plVar1 + 0x39;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180224de0(plVar1 + 0x10);
    FUN_1803ac440(plVar1 + 0x20);
  }
  plVar2 = *param_1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18023a1b0();
    return;
  }
  return;
}


/* address=1800ee500 name=FUN_1800ee500 */

void FUN_1800ee500(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = *(char *)(param_1 + 4);
  if (cVar3 == '\0') {
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
  else {
    if (cVar3 == '\x03') {
      lVar1 = param_1[6];
      cVar3 = FUN_1803aab30(lVar1);
      if (cVar3 != '\0') {
        FUN_1803bea90(lVar1);
      }
    }
    else {
      if (cVar3 != '\x04') {
        return;
      }
      FUN_1800f60d0(param_1 + 0x10);
      FUN_18001bbc0(param_1 + 5);
      *(undefined2 *)((longlong)param_1 + 0x22) = 0;
      *(undefined *)((longlong)param_1 + 0x24) = 0;
    }
    *(undefined *)((longlong)param_1 + 0x25) = 0;
    if (*(char *)((longlong)param_1 + 0x21) != '\0') {
      plVar2 = (longlong *)param_1[5];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180397b10(param_1 + 5);
      }
    }
    *(undefined *)((longlong)param_1 + 0x21) = 0;
  }
  return;
}


/* address=1800ee6c0 name=FUN_1800ee6c0 */

void FUN_1800ee6c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\0') {
    lVar2 = *param_1;
    if ((lVar2 != -1) && (lVar2 != 0)) {
      thunk_FUN_1803e4c80(param_1[1],lVar2,1);
    }
    plVar3 = (longlong *)param_1[3];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180397b10(param_1 + 3);
    }
    plVar3 = (longlong *)param_1[4];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180397b10(param_1 + 4);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_1800f7330(param_1 + 0x10);
      cVar1 = *(char *)((longlong)param_1 + 0x61);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x3a) == '\x03') {
        if (*(char *)(param_1 + 0x38) == '\x03') {
          FUN_1800eea70(param_1 + 0x1a);
        }
        else if (*(char *)(param_1 + 0x38) == '\0') {
          FUN_1800f7b40(param_1 + 0xf);
        }
      }
      *(undefined4 *)((longlong)param_1 + 99) = 0;
      FUN_18001b9c0(param_1 + 5);
      *(undefined *)((longlong)param_1 + 0x67) = 0;
      cVar1 = *(char *)((longlong)param_1 + 0x61);
    }
    if (cVar1 != '\0') {
      plVar3 = (longlong *)param_1[0xf];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180397b10(param_1 + 0xf);
      }
    }
    *(undefined *)((longlong)param_1 + 0x61) = 0;
    if (*(char *)((longlong)param_1 + 0x62) != '\0') {
      plVar3 = (longlong *)param_1[0xe];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180397b10(param_1 + 0xe);
      }
    }
    *(undefined *)((longlong)param_1 + 0x62) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return;
}


/* address=1800ee990 name=FUN_1800ee990 */

void FUN_1800ee990(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x140) == '\x03') {
    lVar2 = param_1 + 0x10;
    if (*(char *)(param_1 + 0x138) == '\x03') {
      local_20 = param_1 + 0x10;
      local_18 = param_1;
      FUN_18001bdd0(param_1 + 200);
      uVar1 = *(ulonglong *)(local_18 + 0xc0);
      lVar2 = local_20;
      if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
        local_28 = uVar1 - 1;
        FUN_180404230(&local_28);
        lVar2 = local_20;
      }
    }
    FUN_18001bdd0(lVar2);
  }
  return;
}


/* address=1800eea70 name=FUN_1800eea70 */

void FUN_1800eea70(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    FUN_1800f7b40(param_1 + 0x10);
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


/* address=1800eeb40 name=FUN_1800eeb40 */

void FUN_1800eeb40(undefined *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1[0x148] != '\0') {
    if (param_1[0x148] == '\x03') {
      FUN_1800eea70(param_1 + 0x58);
      return;
    }
    return;
  }
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
LAB_1800f7b6d:
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
    if (0 < lVar2) goto LAB_1800f7b6d;
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


/* address=1800eeb60 name=FUN_1800eeb60 */

void FUN_1800eeb60(longlong param_1)

{
  if (*(char *)(param_1 + 0x188) == '\x03') {
    FUN_1800ee990(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x20),1);
      return;
    }
  }
  return;
}


/* address=1800eebf0 name=FUN_1800eebf0 */

void FUN_1800eebf0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
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
  else if ((*(char *)(param_1 + 0xe) == '\x03') && (*(char *)(param_1 + 0xc) == '\0')) {
    if (param_1[6] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
    }
    plVar1 = *(longlong **)(param_1 + 10);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180239850(param_1 + 10);
        return;
      }
    }
  }
  return;
}


/* address=1800eed10 name=FUN_1800eed10 */

void FUN_1800eed10(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0x29);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      ppcVar3 = *(code ***)(param_1 + 0xe);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x14) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x14) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x66) == '\x03') {
        if (*(char *)(param_1 + 0x62) == '\x03') {
          FUN_1800eea70(param_1 + 0x26);
        }
        else if (*(char *)(param_1 + 0x62) == '\0') {
          FUN_1800f7b40(param_1 + 0x10);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc),1);
    }
    if ((*(char *)((longlong)param_1 + 0x2a) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x2a) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800ef000 name=FUN_1800ef000 */

void FUN_1800ef000(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      ppcVar3 = *(code ***)(param_1 + 0xe);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x14) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x14) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x66) == '\x03') {
        if (*(char *)(param_1 + 100) == '\x03') {
          FUN_1800eea70(param_1 + 0x28);
        }
        else if (*(char *)(param_1 + 100) == '\0') {
          FUN_1800f7b40(param_1 + 0x12);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc),1);
    }
    if ((*(char *)((longlong)param_1 + 0x29) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x29) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800ef2f0 name=FUN_1800ef2f0 */

void FUN_1800ef2f0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0x42);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0x12);
      ppcVar3 = *(code ***)(param_1 + 0x14);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x1a) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x16),*(longlong *)(param_1 + 0x1a) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x1ba) == '\x03') {
        if (*(char *)(param_1 + 0x66) == '\x03') {
          FUN_1800eea70(param_1 + 0x2a);
        }
        else if (*(char *)(param_1 + 0x66) == '\0') {
          FUN_1800f7b40(param_1 + 0x14);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x70),1);
    }
    if ((*(char *)((longlong)param_1 + 0x43) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x43) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800ef5e0 name=FUN_1800ef5e0 */

void FUN_1800ef5e0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0x1c);
      ppcVar3 = *(code ***)(param_1 + 0x1e);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x24) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x24) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x219) == '\x03') {
        if (*(char *)(param_1 + 0x72) == '\x03') {
          FUN_1800eea70(param_1 + 0x36);
        }
        else if (*(char *)(param_1 + 0x72) == '\0') {
          FUN_1800f7b40(param_1 + 0x20);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x1c),1);
    }
    if ((*(char *)((longlong)param_1 + 0x6a) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x6a) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800ef8e0 name=FUN_1800ef8e0 */

void FUN_1800ef8e0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xe);
      ppcVar3 = *(code ***)(param_1 + 0x10);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x16) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x12),*(longlong *)(param_1 + 0x16) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x66) == '\x03') {
        if (*(char *)(param_1 + 100) == '\x03') {
          FUN_1800eea70(param_1 + 0x28);
        }
        else if (*(char *)(param_1 + 100) == '\0') {
          FUN_1800f7b40(param_1 + 0x12);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x68),1);
    }
    if ((*(char *)((longlong)param_1 + 0x31) != '\0') && (*(longlong *)(param_1 + 8) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 8),1);
    }
    *(undefined *)((longlong)param_1 + 0x31) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800efbd0 name=FUN_1800efbd0 */

void FUN_1800efbd0(int *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong *plVar5;
  
  cVar1 = *(char *)(param_1 + 0x16);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar5 = *(longlong **)(param_1 + 4);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        FUN_180239850(param_1 + 4);
      }
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      ppcVar4 = *(code ***)(param_1 + 0x1a);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x20) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x1c),*(longlong *)(param_1 + 0x20) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x7e) == '\x03') {
        if (*(char *)(param_1 + 0x7c) == '\x03') {
          FUN_1800eea70(param_1 + 0x40);
        }
        else if (*(char *)(param_1 + 0x7c) == '\0') {
          FUN_1800f7b40(param_1 + 0x2a);
        }
      }
      else if (((*(char *)(param_1 + 0x7e) == '\0') &&
               (lVar2 = *(longlong *)(param_1 + 0x1c), lVar2 != -1)) && (lVar2 != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x1e),lVar2,1);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x18),1);
    }
    if ((*(char *)((longlong)param_1 + 0x59) != '\0') && (*(longlong *)(param_1 + 0x12) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x12),1);
    }
    *(undefined *)((longlong)param_1 + 0x59) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar5 = *(longlong **)(param_1 + 4);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        FUN_180239850(param_1 + 4);
      }
    }
    if (*(char *)((longlong)param_1 + 0x5a) != '\x01') {
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 6);
  if ((lVar2 != -1) && (lVar2 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar2,1);
    return;
  }
  return;
}


/* address=1800efff0 name=FUN_1800efff0 */

void FUN_1800efff0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0x39);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      ppcVar3 = *(code ***)(param_1 + 0x12);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x18) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x14),*(longlong *)(param_1 + 0x18) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x6a) == '\x03') {
        if (*(char *)(param_1 + 0x66) == '\x03') {
          FUN_1800eea70(param_1 + 0x2a);
        }
        else if (*(char *)(param_1 + 0x66) == '\0') {
          FUN_1800f7b40(param_1 + 0x14);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x10),1);
    }
    if ((*(char *)((longlong)param_1 + 0x3a) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x3a) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f02e0 name=FUN_1800f02e0 */

void FUN_1800f02e0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0x14);
      ppcVar3 = *(code ***)(param_1 + 0x16);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x1c) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x1c) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x1d9) == '\x03') {
        if (*(char *)(param_1 + 0x6a) == '\x03') {
          FUN_1800eea70(param_1 + 0x2e);
        }
        else if (*(char *)(param_1 + 0x6a) == '\0') {
          FUN_1800f7b40(param_1 + 0x18);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x14),1);
    }
    if ((*(char *)((longlong)param_1 + 0x4a) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x4a) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f05d0 name=FUN_1800f05d0 */

void FUN_1800f05d0(int *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  cVar1 = *(char *)((longlong)param_1 + 0x41);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar5 = *(longlong **)(param_1 + 4);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        FUN_180239850(param_1 + 4);
      }
    }
    lVar6 = *(longlong *)(param_1 + 10);
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      do {
        lVar2 = puVar7[-1];
        if ((-0x7ffffffffffffffe < lVar2) && (lVar2 != 0)) {
          thunk_FUN_1803e4c80(*puVar7,lVar2,1);
        }
        puVar7 = puVar7 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0x12);
      ppcVar4 = *(code ***)(param_1 + 0x14);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x1a) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x16),*(longlong *)(param_1 + 0x1a) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x1b9) == '\x03') {
        if (*(char *)(param_1 + 0x6c) == '\x03') {
          FUN_1800eea70(param_1 + 0x30);
        }
        else if (*(char *)(param_1 + 0x6c) == '\0') {
          FUN_1800f7b40(param_1 + 0x1a);
        }
      }
      else if (*(char *)((longlong)param_1 + 0x1b9) == '\0') {
        lVar6 = *(longlong *)(param_1 + 0x16);
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x14) + 8);
          do {
            lVar2 = puVar7[-1];
            if ((-0x7ffffffffffffffe < lVar2) && (lVar2 != 0)) {
              thunk_FUN_1803e4c80(*puVar7,lVar2,1);
            }
            puVar7 = puVar7 + 3;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        if (*(longlong *)(param_1 + 0x12) != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x14),*(longlong *)(param_1 + 0x12) * 0x18,8
                             );
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x70),1);
    }
    if ((*(char *)((longlong)param_1 + 0x42) != '\0') && (*(longlong *)(param_1 + 0xc) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xc),1);
    }
    *(undefined *)((longlong)param_1 + 0x42) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar5 = *(longlong **)(param_1 + 4);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        FUN_180239850(param_1 + 4);
      }
    }
    if (*(char *)((longlong)param_1 + 0x43) != '\x01') {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 10);
    if (lVar6 != 0) {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      do {
        lVar2 = puVar7[-1];
        if ((-0x7ffffffffffffffe < lVar2) && (lVar2 != 0)) {
          thunk_FUN_1803e4c80(*puVar7,lVar2,1);
        }
        puVar7 = puVar7 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  if (*(longlong *)(param_1 + 6) == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6) * 0x18,8);
  return;
}


/* address=1800f0b10 name=FUN_1800f0b10 */

void FUN_1800f0b10(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x1c9) == '\0') {
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
  else if (*(char *)((longlong)param_1 + 0x1c9) == '\x03') {
    FUN_1800f6230(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f0bc0 name=FUN_1800f0bc0 */

void FUN_1800f0bc0(int *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong *plVar5;
  
  cVar1 = *(char *)(param_1 + 0x16);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar5 = *(longlong **)(param_1 + 4);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        FUN_180239850(param_1 + 4);
      }
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      ppcVar4 = *(code ***)(param_1 + 0x1a);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x20) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x1c),*(longlong *)(param_1 + 0x20) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x7e) == '\x03') {
        if (*(char *)(param_1 + 0x7c) == '\x03') {
          FUN_1800eea70(param_1 + 0x40);
        }
        else if (*(char *)(param_1 + 0x7c) == '\0') {
          FUN_1800f7b40(param_1 + 0x2a);
        }
      }
      else if (*(char *)(param_1 + 0x7e) == '\0') {
        if (*(longlong *)(param_1 + 0x1c) != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x1e),*(longlong *)(param_1 + 0x1c),1);
        }
        lVar2 = *(longlong *)(param_1 + 0x22);
        if ((lVar2 != -1) && (lVar2 != 0)) {
          thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x24),lVar2,1);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x18),1);
    }
    if ((*(char *)((longlong)param_1 + 0x59) != '\0') && (*(longlong *)(param_1 + 0x12) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x12),1);
    }
    *(undefined *)((longlong)param_1 + 0x59) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar5 = *(longlong **)(param_1 + 4);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        FUN_180239850(param_1 + 4);
      }
    }
    if (*(char *)((longlong)param_1 + 0x5a) == '\0') {
      return;
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


/* address=1800f1010 name=FUN_1800f1010 */

void FUN_1800f1010(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 0xb);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      ppcVar3 = *(code ***)(param_1 + 0xe);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x14) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x14) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x67) == '\x03') {
        if (*(char *)(param_1 + 100) == '\x03') {
          FUN_1800eea70(param_1 + 0x28);
        }
        else if (*(char *)(param_1 + 100) == '\0') {
          FUN_1800f7b40(param_1 + 0x12);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc),1);
    }
    if ((*(char *)((longlong)param_1 + 0x2d) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x2d) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f1300 name=FUN_1800f1300 */

void FUN_1800f1300(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0x29);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      ppcVar3 = *(code ***)(param_1 + 0xe);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x14) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x14) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x199) == '\x03') {
        if (*(char *)(param_1 + 0x62) == '\x03') {
          FUN_1800eea70(param_1 + 0x26);
        }
        else if (*(char *)(param_1 + 0x62) == '\0') {
          FUN_1800f7b40(param_1 + 0x10);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc),1);
    }
    if ((*(char *)((longlong)param_1 + 0x2a) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x2a) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f15f0 name=FUN_1800f15f0 */

void FUN_1800f15f0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      ppcVar3 = *(code ***)(param_1 + 0xe);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x14) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x14) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x199) == '\x03') {
        if (*(char *)(param_1 + 0x62) == '\x03') {
          FUN_1800eea70(param_1 + 0x26);
        }
        else if (*(char *)(param_1 + 0x62) == '\0') {
          FUN_1800f7b40(param_1 + 0x10);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc),1);
    }
    if ((*(char *)((longlong)param_1 + 0x2a) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x2a) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f18e0 name=FUN_1800f18e0 */

void FUN_1800f18e0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0x41);
  if (cVar1 == '\0') {
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
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0x12);
      ppcVar3 = *(code ***)(param_1 + 0x14);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x1a) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x16),*(longlong *)(param_1 + 0x1a) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x159) == '\x03') {
        FUN_1800eea70(param_1 + 0x1a);
      }
      else if ((*(char *)((longlong)param_1 + 0x159) == '\0') &&
              (*(longlong *)(param_1 + 0x12) != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x14),*(longlong *)(param_1 + 0x12),1);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x58),1);
    }
    if ((*(char *)((longlong)param_1 + 0x42) != '\0') && (*(longlong *)(param_1 + 0xc) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xc),1);
    }
    *(undefined *)((longlong)param_1 + 0x42) = 0;
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
    if (*(char *)((longlong)param_1 + 0x43) == '\0') {
      return;
    }
  }
  if (*(longlong *)(param_1 + 6) == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6),1);
  return;
}


/* address=1800f1cd0 name=FUN_1800f1cd0 */

void FUN_1800f1cd0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0x14);
      ppcVar3 = *(code ***)(param_1 + 0x16);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x1c) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x1c) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x76) == '\x03') {
        if (*(char *)(param_1 + 0x74) == '\x03') {
          FUN_1800eea70(param_1 + 0x38);
        }
        else if (*(char *)(param_1 + 0x74) == '\0') {
          FUN_1800f7b40(param_1 + 0x22);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x14),1);
    }
    if ((*(char *)((longlong)param_1 + 0x49) != '\0') && (*(longlong *)(param_1 + 0xe) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xe),1);
    }
    *(undefined *)((longlong)param_1 + 0x49) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f1fc0 name=FUN_1800f1fc0 */

void FUN_1800f1fc0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
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
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0x12);
      ppcVar3 = *(code ***)(param_1 + 0x14);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x1a) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x16),*(longlong *)(param_1 + 0x1a) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x6e) == '\x03') {
        if (*(char *)(param_1 + 0x6c) == '\x03') {
          FUN_1800eea70(param_1 + 0x30);
        }
        else if (*(char *)(param_1 + 0x6c) == '\0') {
          FUN_1800f7b40(param_1 + 0x1a);
        }
      }
      else if ((*(char *)(param_1 + 0x6e) == '\0') && (*(longlong *)(param_1 + 0x12) != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x14),*(longlong *)(param_1 + 0x12),1);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x70),1);
    }
    if ((*(char *)((longlong)param_1 + 0x41) != '\0') && (*(longlong *)(param_1 + 0xc) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xc),1);
    }
    *(undefined *)((longlong)param_1 + 0x41) = 0;
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
    if (*(char *)((longlong)param_1 + 0x42) == '\0') {
      return;
    }
  }
  if (*(longlong *)(param_1 + 6) == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6),1);
  return;
}


/* address=1800f23e0 name=FUN_1800f23e0 */

void FUN_1800f23e0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0x2a);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      ppcVar3 = *(code ***)(param_1 + 0xe);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x14) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x14) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x19a) == '\x03') {
        if (*(char *)(param_1 + 100) == '\x03') {
          FUN_1800eea70(param_1 + 0x28);
        }
        else if (*(char *)(param_1 + 100) == '\0') {
          FUN_1800f7b40(param_1 + 0x12);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc),1);
    }
    if ((*(char *)((longlong)param_1 + 0x2b) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x2b) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f26d0 name=FUN_1800f26d0 */

void FUN_1800f26d0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  cVar1 = *(char *)(param_1 + 0x16);
  if (cVar1 == '\0') {
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
    lVar6 = *(longlong *)(param_1 + 6);
    if ((lVar6 != -1) && (lVar6 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar6,1);
    }
    if (*(longlong *)(param_1 + 0xc) == -1) {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xe) + 8);
      do {
        if (puVar5[-1] != 0) {
          thunk_FUN_1803e4c80(*puVar5,puVar5[-1],1);
        }
        puVar5 = puVar5 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      ppcVar3 = *(code ***)(param_1 + 0x1a);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x20) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x1c),*(longlong *)(param_1 + 0x20) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_1800f6c60(param_1 + 0x1c);
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x18),1);
    }
    if ((*(char *)((longlong)param_1 + 0x59) != '\0') && (*(longlong *)(param_1 + 0x12) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0x12),1);
    }
    *(undefined *)((longlong)param_1 + 0x59) = 0;
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
    if (((*(char *)((longlong)param_1 + 0x5b) != '\0') &&
        (lVar6 = *(longlong *)(param_1 + 6), lVar6 != -1)) && (lVar6 != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar6,1);
    }
    if (*(char *)((longlong)param_1 + 0x5a) == '\0') {
      return;
    }
    if (*(longlong *)(param_1 + 0xc) == -1) {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0xe) + 8);
      do {
        if (puVar5[-1] != 0) {
          thunk_FUN_1803e4c80(*puVar5,puVar5[-1],1);
        }
        puVar5 = puVar5 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  if (*(longlong *)(param_1 + 0xc) == 0) {
    return;
  }
  thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0xe),*(longlong *)(param_1 + 0xc) * 0x18,8);
  return;
}


/* address=1800f2c20 name=FUN_1800f2c20 */

void FUN_1800f2c20(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0x29);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      ppcVar3 = *(code ***)(param_1 + 0xe);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x14) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x14) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if ((*(char *)(param_1 + 0x6a) == '\x03') && (*(char *)(param_1 + 0x66) == '\x03')) {
        if (*(char *)(param_1 + 0x62) == '\x03') {
          FUN_1800eea70(param_1 + 0x26);
        }
        else if (*(char *)(param_1 + 0x62) == '\0') {
          FUN_1800f7b40(param_1 + 0x10);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc),1);
    }
    if ((*(char *)((longlong)param_1 + 0x2a) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x2a) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f2f20 name=FUN_1800f2f20 */

void FUN_1800f2f20(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x59) == '\0') {
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
  }
  else if (*(char *)(param_1 + 0x59) == '\x03') {
    FUN_1800ee6c0(param_1 + 5);
    return;
  }
  return;
}


/* address=1800f3000 name=FUN_1800f3000 */

void FUN_1800f3000(int *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  code **ppcVar4;
  longlong *plVar5;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar5 = *(longlong **)(param_1 + 4);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        FUN_180239850(param_1 + 4);
      }
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0x12);
      ppcVar4 = *(code ***)(param_1 + 0x14);
      if (*ppcVar4 != (code *)0x0) {
        (**ppcVar4)(uVar3);
      }
      if (ppcVar4[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar3,ppcVar4[1],ppcVar4[2]);
      }
      if (*(longlong *)(param_1 + 0x1a) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x16),*(longlong *)(param_1 + 0x1a) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x6e) == '\x03') {
        if (*(char *)(param_1 + 0x6c) == '\x03') {
          FUN_1800eea70(param_1 + 0x30);
        }
        else if (*(char *)(param_1 + 0x6c) == '\0') {
          FUN_1800f7b40(param_1 + 0x1a);
        }
      }
      else if (((*(char *)(param_1 + 0x6e) == '\0') &&
               (lVar2 = *(longlong *)(param_1 + 0x12), lVar2 != -1)) && (lVar2 != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x14),lVar2,1);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x70),1);
    }
    if ((*(char *)((longlong)param_1 + 0x41) != '\0') && (*(longlong *)(param_1 + 0xc) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 0xc),1);
    }
    *(undefined *)((longlong)param_1 + 0x41) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
    plVar5 = *(longlong **)(param_1 + 4);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        FUN_180239850(param_1 + 4);
      }
    }
    if (*(char *)((longlong)param_1 + 0x42) != '\x01') {
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 6);
  if ((lVar2 != -1) && (lVar2 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar2,1);
    return;
  }
  return;
}


/* address=1800f3420 name=FUN_1800f3420 */

void FUN_1800f3420(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      ppcVar3 = *(code ***)(param_1 + 0xe);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x14) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x14) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if ((*(char *)(param_1 + 0x6a) == '\x03') && (*(char *)(param_1 + 0x68) == '\x03')) {
        if (*(char *)(param_1 + 100) == '\x03') {
          FUN_1800eea70(param_1 + 0x28);
        }
        else if (*(char *)(param_1 + 100) == '\0') {
          FUN_1800f7b40(param_1 + 0x12);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc),1);
    }
    if ((*(char *)((longlong)param_1 + 0x29) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x29) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f3720 name=FUN_1800f3720 */

void FUN_1800f3720(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802de5f0(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      ppcVar3 = *(code ***)(param_1 + 0xe);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x14) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x14) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x84) == '\x03') {
        FUN_1800f60d0(param_1 + 0xe);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x86),1);
    }
    if ((*(char *)((longlong)param_1 + 0x29) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x29) = 0;
    if (*param_1 == 1) {
      FUN_1802de5f0(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239c40(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f39e0 name=FUN_1800f39e0 */

void FUN_1800f39e0(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  cVar1 = *(char *)((longlong)param_1 + 0x2a);
  if (cVar1 == '\0') {
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(undefined8 *)(param_1 + 0xc);
      ppcVar3 = *(code ***)(param_1 + 0xe);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1803e4c80(uVar2,ppcVar3[1],ppcVar3[2]);
      }
      if (*(longlong *)(param_1 + 0x14) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x14) << 3,8);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x66) == '\x03') {
        if (*(char *)(param_1 + 0x62) == '\x03') {
          FUN_1800eea70(param_1 + 0x26);
        }
        else if (*(char *)(param_1 + 0x62) == '\0') {
          FUN_1800f7b40(param_1 + 0x10);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc),1);
    }
    if ((*(char *)((longlong)param_1 + 0x2b) != '\0') && (*(longlong *)(param_1 + 6) != 0)) {
      FUN_1803aa820(*(longlong *)(param_1 + 6),1);
    }
    *(undefined *)((longlong)param_1 + 0x2b) = 0;
    if (*param_1 == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 2));
    }
  }
  plVar4 = *(longlong **)(param_1 + 4);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180239850(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f3cd0 name=FUN_1800f3cd0 */

void FUN_1800f3cd0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x209) == '\0') {
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
  }
  else if (*(char *)((longlong)param_1 + 0x209) == '\x03') {
    FUN_1800f64a0(param_1 + 0xc);
    return;
  }
  return;
}


/* address=1800f3de0 name=FUN_1800f3de0 */

void FUN_1800f3de0(longlong *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x4f) == '\0') {
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
  else if (*(char *)(param_1 + 0x4f) == '\x03') {
    FUN_1800ee500(param_1 + 4);
    return;
  }
  return;
}


/* address=1800f3e50 name=FUN_1800f3e50 */

void FUN_1800f3e50(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x82) == '\0') {
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
  }
  else if (*(char *)(param_1 + 0x82) == '\x03') {
    FUN_1800f6830(param_1 + 0xc);
    return;
  }
  return;
}


/* address=1800f3f60 name=FUN_1800f3f60 */

void FUN_1800f3f60(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x16) == '\0') {
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
  else if (*(char *)(param_1 + 0x16) == '\x03') {
    FUN_1800eebf0(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f4010 name=FUN_1800f4010 */

void FUN_1800f4010(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x1b9) == '\0') {
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
  else if (*(char *)((longlong)param_1 + 0x1b9) == '\x03') {
    FUN_1800eed10(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f40c0 name=FUN_1800f40c0 */

void FUN_1800f40c0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x6e) == '\0') {
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
  else if (*(char *)(param_1 + 0x6e) == '\x03') {
    FUN_1800ef000(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f4170 name=FUN_1800f4170 */

void FUN_1800f4170(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x202) == '\0') {
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
  else if (*(char *)((longlong)param_1 + 0x202) == '\x03') {
    FUN_1800ef2f0(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f4220 name=FUN_1800f4220 */

void FUN_1800f4220(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x8e) == '\0') {
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
  else if (*(char *)(param_1 + 0x8e) == '\x03') {
    FUN_1800ef5e0(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f42d0 name=FUN_1800f42d0 */

void FUN_1800f42d0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
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
  else if (*(char *)(param_1 + 0x74) == '\x03') {
    FUN_1800ef8e0(param_1 + 8);
    return;
  }
  return;
}


/* address=1800f4380 name=FUN_1800f4380 */

void FUN_1800f4380(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x92) == '\0') {
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
  }
  else if (*(char *)(param_1 + 0x92) == '\x03') {
    FUN_1800efbd0(param_1 + 0x12);
    return;
  }
  return;
}


/* address=1800f44a0 name=FUN_1800f44a0 */

void FUN_1800f44a0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x1e9) == '\0') {
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
  else if (*(char *)((longlong)param_1 + 0x1e9) == '\x03') {
    FUN_1800efff0(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f4550 name=FUN_1800f4550 */

void FUN_1800f4550(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x7e) == '\0') {
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
  else if (*(char *)(param_1 + 0x7e) == '\x03') {
    FUN_1800f02e0(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f4600 name=FUN_1800f4600 */

void FUN_1800f4600(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  if (*(char *)((longlong)param_1 + 0x201) == '\0') {
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
  }
  else if (*(char *)((longlong)param_1 + 0x201) == '\x03') {
    FUN_1800f05d0(param_1 + 0xc);
    return;
  }
  return;
}


/* address=1800f4770 name=FUN_1800f4770 */

void FUN_1800f4770(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x1e9) == '\0') {
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
  else if (*(char *)((longlong)param_1 + 0x1e9) == '\x03') {
    if (*(char *)((longlong)param_1 + 0x1e1) == '\x03') {
      FUN_1800f6230(param_1 + 0xc);
      return;
    }
    if (*(char *)((longlong)param_1 + 0x1e1) == '\0') {
      if (param_1[6] == 1) {
        FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
      }
      plVar1 = *(longlong **)(param_1 + 10);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_180239850(param_1 + 10);
          return;
        }
      }
    }
  }
  return;
}


/* address=1800f48b0 name=FUN_1800f48b0 */

void FUN_1800f48b0(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x92) == '\0') {
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
  }
  else if (*(char *)(param_1 + 0x92) == '\x03') {
    FUN_1800f0bc0(param_1 + 0x12);
    return;
  }
  return;
}


/* address=1800f49e0 name=FUN_1800f49e0 */

void FUN_1800f49e0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x6f) == '\0') {
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
  else if (*(char *)(param_1 + 0x6f) == '\x03') {
    FUN_1800f1010(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f4a90 name=FUN_1800f4a90 */

void FUN_1800f4a90(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x1b9) == '\0') {
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
  else if (*(char *)((longlong)param_1 + 0x1b9) == '\x03') {
    FUN_1800f1300(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f4b40 name=FUN_1800f4b40 */

void FUN_1800f4b40(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x6e) == '\0') {
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
  else if (*(char *)(param_1 + 0x6e) == '\x03') {
    FUN_1800f15f0(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f4bf0 name=FUN_1800f4bf0 */

void FUN_1800f4bf0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x1a1) == '\0') {
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
  }
  else if (*(char *)((longlong)param_1 + 0x1a1) == '\x03') {
    FUN_1800f18e0(param_1 + 0xc);
    return;
  }
  return;
}


/* address=1800f4d00 name=FUN_1800f4d00 */

void FUN_1800f4d00(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x86) == '\0') {
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
  else if (*(char *)(param_1 + 0x86) == '\x03') {
    FUN_1800f1cd0(param_1 + 0xe);
    return;
  }
  return;
}


/* address=1800f4db0 name=FUN_1800f4db0 */

void FUN_1800f4db0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
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
  }
  else if (*(char *)(param_1 + 0x80) == '\x03') {
    FUN_1800f1fc0(param_1 + 0xc);
    return;
  }
  return;
}


/* address=1800f4ec0 name=FUN_1800f4ec0 */

void FUN_1800f4ec0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x1ba) == '\0') {
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
  else if (*(char *)((longlong)param_1 + 0x1ba) == '\x03') {
    FUN_1800f23e0(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f4f70 name=FUN_1800f4f70 */

void FUN_1800f4f70(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x92) == '\0') {
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
  }
  else if (*(char *)(param_1 + 0x92) == '\x03') {
    FUN_1800f26d0(param_1 + 0x12);
    return;
  }
  return;
}


/* address=1800f5120 name=FUN_1800f5120 */

void FUN_1800f5120(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x1c9) == '\0') {
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
  else if (*(char *)((longlong)param_1 + 0x1c9) == '\x03') {
    FUN_1800f2c20(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f51d0 name=FUN_1800f51d0 */

void FUN_1800f51d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x5f) == '\0') {
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
  }
  else if (*(char *)(param_1 + 0x5f) == '\x03') {
    FUN_1800f2f20(param_1 + 5);
    return;
  }
  return;
}


/* address=1800f52b0 name=FUN_1800f52b0 */

void FUN_1800f52b0(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
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
  }
  else if (*(char *)(param_1 + 0x80) == '\x03') {
    FUN_1800f3000(param_1 + 0xc);
    return;
  }
  return;
}


/* address=1800f53d0 name=FUN_1800f53d0 */

void FUN_1800f53d0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x72) == '\0') {
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
  else if (*(char *)(param_1 + 0x72) == '\x03') {
    FUN_1800f3420(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f5480 name=FUN_1800f5480 */

void FUN_1800f5480(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
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
  }
  else if (*(char *)(param_1 + 0x90) == '\x03') {
    FUN_1800f3720(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f5530 name=FUN_1800f5530 */

void FUN_1800f5530(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x1ba) == '\0') {
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
  else if (*(char *)((longlong)param_1 + 0x1ba) == '\x03') {
    FUN_1800f39e0(param_1 + 6);
    return;
  }
  return;
}


/* address=1800f55e0 name=FUN_1800f55e0 */

void FUN_1800f55e0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x241) == '\0') {
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
  }
  else if (*(char *)((longlong)param_1 + 0x241) == '\x03') {
    FUN_1800f3cd0(param_1 + 0xc);
    return;
  }
  return;
}


/* address=1800f56f0 name=FUN_1800f56f0 */

void FUN_1800f56f0(longlong *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
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
  else if (*(char *)(param_1 + 0x54) == '\x03') {
    if (*(char *)(param_1 + 0x53) == '\x03') {
      FUN_1800ee500(param_1 + 8);
      return;
    }
    if (*(char *)(param_1 + 0x53) == '\0') {
      if (param_1[4] != 0) {
        thunk_FUN_1803e4c80(param_1[5],param_1[4],1);
      }
      plVar1 = (longlong *)param_1[7];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180397b10(param_1 + 7);
        return;
      }
    }
  }
  return;
}


/* address=1800f57a0 name=FUN_1800f57a0 */

void FUN_1800f57a0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
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
  }
  else if (*(char *)(param_1 + 0x90) == '\x03') {
    FUN_1800f3e50(param_1 + 0xc);
    return;
  }
  return;
}


/* address=1800f58b0 name=FUN_1800f58b0 */

void FUN_1800f58b0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x60) == '\x03') && (*(char *)(param_1 + 0x18) == '\x04')) {
    FUN_1803abc90(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f58f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  return;
}


/* address=1800f5940 name=FUN_1800f5940 */

void FUN_1800f5940(longlong param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x03') {
    FUN_1803abc90(param_1 + 8);
    if (*(longlong *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f597c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
      return;
    }
  }
  return;
}


/* address=1800f59c0 name=FUN_1800f59c0 */

void FUN_1800f59c0(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
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
  lVar2 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(param_1 + 10);
  if (lVar5 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 8);
    do {
      lVar3 = puVar4[-1];
      if ((-0x7ffffffffffffffe < lVar3) && (lVar3 != 0)) {
        thunk_FUN_1803e4c80(*puVar4,lVar3,1);
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*(longlong *)(param_1 + 6) != 0) {
    thunk_FUN_1803e4c80(lVar2,*(longlong *)(param_1 + 6) * 0x18,8);
    return;
  }
  return;
}


/* address=1800f5b20 name=FUN_1800f5b20 */

void FUN_1800f5b20(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
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
  piVar6 = param_1;
  if ((lVar2 != -1) && (lVar2 != 0)) {
    thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),lVar2,1,param_4,param_1,uVar7);
  }
  lVar2 = *(longlong *)(param_1 + 0xc);
  if (lVar2 != -1) {
    lVar3 = *(longlong *)(param_1 + 0xe);
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar5[-1] != 0) {
          thunk_FUN_1803e4c80(*puVar5,puVar5[-1],1,param_4,piVar6,uVar7);
        }
        puVar5 = puVar5 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar2 != 0) {
      thunk_FUN_1803e4c80(lVar3,lVar2 * 0x18,8);
      return;
    }
  }
  return;
}


/* address=1800f5ca0 name=FUN_1800f5ca0 */

void FUN_1800f5ca0(longlong param_1)

{
  if (((*(char *)(param_1 + 0x68) == '\x03') && (*(char *)(param_1 + 0x60) == '\x03')) &&
     (*(char *)(param_1 + 0x58) == '\x03')) {
    FUN_1803abc90(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f5ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x20) + 0x18))(*(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}


/* address=1800f5d30 name=FUN_1800f5d30 */

void FUN_1800f5d30(longlong param_1)

{
  if (*(char *)(param_1 + 0x158) == '\x03') {
    if (*(char *)(param_1 + 0x148) == '\x03') {
      FUN_1800eea70(param_1 + 0x58);
      return;
    }
    if (*(char *)(param_1 + 0x148) == '\0') {
      FUN_1800f7b40();
      return;
    }
  }
  return;
}


/* address=1800f5d60 name=FUN_1800f5d60 */

void FUN_1800f5d60(longlong param_1)

{
  if (*(char *)(param_1 + 0x160) == '\x03') {
    if (*(char *)(param_1 + 0x158) == '\x03') {
      FUN_1800eea70(param_1 + 0x68);
      return;
    }
    if (*(char *)(param_1 + 0x158) == '\0') {
      FUN_1800f7b40(param_1 + 0x10);
      return;
    }
  }
  return;
}


/* address=1800f5d90 name=FUN_1800f5d90 */

void FUN_1800f5d90(longlong param_1)

{
  if (*(char *)(param_1 + 0x158) == '\x03') {
    if (*(char *)(param_1 + 0x150) == '\x03') {
      FUN_1800eea70(param_1 + 0x60);
      return;
    }
    if (*(char *)(param_1 + 0x150) == '\0') {
      FUN_1800f7b40(param_1 + 8);
      return;
    }
  }
  return;
}


/* address=1800f5dc0 name=FUN_1800f5dc0 */

void FUN_1800f5dc0(longlong param_1)

{
  if (*(char *)(param_1 + 0x15c) == '\x03') {
    if (*(char *)(param_1 + 0x150) == '\x03') {
      FUN_1800eea70(param_1 + 0x60);
      return;
    }
    if (*(char *)(param_1 + 0x150) == '\0') {
      FUN_1800f7b40(param_1 + 8);
      return;
    }
  }
  return;
}


/* address=1800f5df0 name=FUN_1800f5df0 */

void FUN_1800f5df0(longlong *param_1)

{
  if (*(char *)(param_1 + 0x2e) == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],*param_1,1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x2e) == '\x03') {
    if (*(char *)(param_1 + 0x2d) == '\x03') {
      FUN_1800eea70(param_1 + 0xf);
      return;
    }
    if (*(char *)(param_1 + 0x2d) == '\0') {
      FUN_1800f7b40(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f5e40 name=FUN_1800f5e40 */

void FUN_1800f5e40(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x171) == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],*param_1,1);
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x171) == '\x03') {
    if (*(char *)(param_1 + 0x2d) == '\x03') {
      FUN_1800eea70(param_1 + 0xf);
      return;
    }
    if (*(char *)(param_1 + 0x2d) == '\0') {
      FUN_1800f7b40(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f5e90 name=FUN_1800f5e90 */

void FUN_1800f5e90(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x111) == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],*param_1,1);
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x111) == '\x03') {
    FUN_1800eea70(param_1 + 4);
    return;
  }
  return;
}


/* address=1800f5ed0 name=FUN_1800f5ed0 */

void FUN_1800f5ed0(longlong param_1)

{
  if (*(char *)(param_1 + 0x172) == '\x03') {
    if (*(char *)(param_1 + 0x150) == '\x03') {
      FUN_1800eea70(param_1 + 0x60);
      return;
    }
    if (*(char *)(param_1 + 0x150) == '\0') {
      FUN_1800f7b40(param_1 + 8);
      return;
    }
  }
  return;
}


/* address=1800f5f00 name=FUN_1800f5f00 */

void FUN_1800f5f00(longlong *param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x2e) == '\0') {
    lVar1 = *param_1;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_1803e4c80(param_1[1],lVar1,1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x2e) == '\x03') {
    if (*(char *)(param_1 + 0x2d) == '\x03') {
      FUN_1800eea70(param_1 + 0xf);
      return;
    }
    if (*(char *)(param_1 + 0x2d) == '\0') {
      FUN_1800f7b40(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f5f50 name=FUN_1800f5f50 */

void FUN_1800f5f50(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*(char *)((longlong)param_1 + 0x171) == '\0') {
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)(param_1[1] + 8);
      do {
        lVar1 = puVar2[-1];
        if ((-0x7ffffffffffffffe < lVar1) && (lVar1 != 0)) {
          thunk_FUN_1803e4c80(*puVar2,lVar1,1);
        }
        puVar2 = puVar2 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*param_1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],*param_1 * 0x18,8);
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x171) == '\x03') {
    if (*(char *)(param_1 + 0x2d) == '\x03') {
      FUN_1800eea70(param_1 + 0xf);
      return;
    }
    if (*(char *)(param_1 + 0x2d) == '\0') {
      FUN_1800f7b40(param_1 + 4);
      return;
    }
  }
  return;
}


/* address=1800f6030 name=FUN_1800f6030 */

void FUN_1800f6030(longlong param_1)

{
  if (*(char *)(param_1 + 0x159) == '\x03') {
    if (*(char *)(param_1 + 0x148) == '\x03') {
      FUN_1800eea70(param_1 + 0x58);
      return;
    }
    if (*(char *)(param_1 + 0x148) == '\0') {
      FUN_1800f7b40();
      return;
    }
  }
  return;
}


/* address=1800f6060 name=FUN_1800f6060 */

void FUN_1800f6060(longlong param_1)

{
  if ((*(char *)(param_1 + 0x168) == '\x03') && (*(char *)(param_1 + 0x158) == '\x03')) {
    if (*(char *)(param_1 + 0x148) == '\x03') {
      FUN_1800eea70(param_1 + 0x58);
      return;
    }
    if (*(char *)(param_1 + 0x148) == '\0') {
      FUN_1800f7b40();
      return;
    }
  }
  return;
}


/* address=1800f60a0 name=FUN_1800f60a0 */

void FUN_1800f60a0(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (*(char *)(param_1 + 0x170) == '\x03') {
      FUN_1800eea70(param_1 + 0x80);
      return;
    }
    if (*(char *)(param_1 + 0x170) == '\0') {
      FUN_1800f7b40(param_1 + 0x28);
      return;
    }
  }
  return;
}


/* address=1800f60d0 name=FUN_1800f60d0 */

void FUN_1800f60d0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x19);
  if (cVar2 != '\x03') {
    if (cVar2 == '\x04') {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      cVar2 = FUN_1803aab30(uVar1);
      if (cVar2 != '\0') {
        FUN_1803bea90(uVar1);
      }
    }
    else {
      if (cVar2 != '\x05') {
        return;
      }
      FUN_1800f6f40(param_1 + 0xb8);
      FUN_18024e1f0(param_1 + 0x98);
    }
    *(undefined *)(param_1 + 0x18) = 0;
    FUN_1803aa820(*(undefined8 *)(param_1 + 8),1);
    return;
  }
  if (((*(char *)(param_1 + 0x90) == '\x03') && (*(char *)(param_1 + 0x88) == '\x03')) &&
     (*(char *)(param_1 + 0x40) == '\x04')) {
    FUN_1803abc90(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f6195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x50) + 0x18))(*(undefined8 *)(param_1 + 0x58));
      return;
    }
  }
  return;
}


/* address=1800f6230 name=FUN_1800f6230 */

void FUN_1800f6230(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x49);
  if (cVar1 == '\0') {
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
    if (cVar1 == '\x03') {
      if (((*(char *)(param_1 + 0x2e) == '\x03') && (*(char *)(param_1 + 0x2c) == '\x03')) &&
         (*(char *)(param_1 + 0x2a) == '\x03')) {
        FUN_1803abc90(param_1 + 0x1a);
        if (*(longlong *)(param_1 + 0x1c) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x1c) + 0x18))(*(undefined8 *)(param_1 + 0x1e));
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x6a) == '\x03') {
        if (*(char *)(param_1 + 0x66) == '\x03') {
          FUN_1800eea70(param_1 + 0x2a);
        }
        else if (*(char *)(param_1 + 0x66) == '\0') {
          FUN_1800f7b40(param_1 + 0x14);
        }
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0xc),param_1[0x10]);
    }
    if (param_1[6] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 8));
    }
    plVar2 = *(longlong **)(param_1 + 10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 10);
        return;
      }
    }
  }
  return;
}


/* address=1800f64a0 name=FUN_1800f64a0 */

void FUN_1800f64a0(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x59);
  if (cVar1 == '\0') {
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
      }
    }
    if (*(longlong *)(param_1 + 6) != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6),1);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      if (((*(char *)(param_1 + 0x38) == '\x03') && (*(char *)(param_1 + 0x36) == '\x03')) &&
         (*(char *)(param_1 + 0x34) == '\x03')) {
        FUN_1803abc90(param_1 + 0x24);
        if (*(longlong *)(param_1 + 0x26) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x26) + 0x18))(*(undefined8 *)(param_1 + 0x28));
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x1d1) == '\x03') {
        if (*(char *)(param_1 + 0x72) == '\x03') {
          FUN_1800eea70(param_1 + 0x36);
        }
        else if (*(char *)(param_1 + 0x72) == '\0') {
          FUN_1800f7b40(param_1 + 0x20);
        }
      }
      else if ((*(char *)((longlong)param_1 + 0x1d1) == '\0') &&
              (*(longlong *)(param_1 + 0x18) != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x1a),*(longlong *)(param_1 + 0x18),1);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x12),1);
    }
    if ((*(char *)((longlong)param_1 + 0x5b) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x1a),*(longlong *)(param_1 + 0x18),1);
    }
    *(undefined *)((longlong)param_1 + 0x5b) = 0;
    if (param_1[0xc] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe));
    }
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x10);
        return;
      }
    }
  }
  return;
}


/* address=1800f6830 name=FUN_1800f6830 */

void FUN_1800f6830(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 0x16);
  if (cVar1 == '\0') {
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
      }
    }
    if (*(longlong *)(param_1 + 6) != 0) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 6),1);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      if (((*(char *)(param_1 + 0x38) == '\x03') && (*(char *)(param_1 + 0x36) == '\x03')) &&
         (*(char *)(param_1 + 0x34) == '\x03')) {
        FUN_1803abc90(param_1 + 0x24);
        if (*(longlong *)(param_1 + 0x26) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x26) + 0x18))(*(undefined8 *)(param_1 + 0x28));
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x74) == '\x03') {
        if (*(char *)(param_1 + 0x72) == '\x03') {
          FUN_1800eea70(param_1 + 0x36);
        }
        else if (*(char *)(param_1 + 0x72) == '\0') {
          FUN_1800f7b40(param_1 + 0x20);
        }
      }
      else if ((*(char *)(param_1 + 0x74) == '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x1a),*(longlong *)(param_1 + 0x18),1);
      }
      FUN_1803aa820(*(undefined8 *)(param_1 + 0x12),1);
    }
    if ((*(char *)((longlong)param_1 + 0x59) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
      thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x1a),*(longlong *)(param_1 + 0x18),1);
    }
    *(undefined *)((longlong)param_1 + 0x59) = 0;
    if (param_1[0xc] == 1) {
      FUN_1802dfb40(*(undefined8 *)(param_1 + 0xe));
    }
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180239850(param_1 + 0x10);
        return;
      }
    }
  }
  return;
}


/* address=1800f6bc0 name=FUN_1800f6bc0 */

void FUN_1800f6bc0(int *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
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
  return;
}


/* address=1800f6c60 name=FUN_1800f6c60 */

void FUN_1800f6c60(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    lVar1 = *param_1;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_1803e4c80(param_1[1],lVar1,1);
    }
    lVar1 = param_1[3];
    if (lVar1 != -1) {
      lVar3 = param_1[5];
      if (lVar3 != 0) {
        puVar2 = (undefined8 *)(param_1[4] + 8);
        do {
          if (puVar2[-1] != 0) {
            thunk_FUN_1803e4c80(*puVar2,puVar2[-1],1);
          }
          puVar2 = puVar2 + 3;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar1 = param_1[3];
      }
      if (lVar1 != 0) {
        thunk_FUN_1803e4c80(param_1[4],lVar1 * 0x18,8);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x31) == '\x03') {
    if (*(char *)(param_1 + 0x30) == '\x03') {
      FUN_1800eea70(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_1800f7b40(param_1 + 7);
      return;
    }
  }
  return;
}


/* address=1800f6d60 name=FUN_1800f6d60 */

void FUN_1800f6d60(longlong param_1)

{
  if ((*(char *)(param_1 + 0x168) == '\x03') && (*(char *)(param_1 + 0x160) == '\x03')) {
    if (*(char *)(param_1 + 0x150) == '\x03') {
      FUN_1800eea70(param_1 + 0x60);
      return;
    }
    if (*(char *)(param_1 + 0x150) == '\0') {
      FUN_1800f7b40(param_1 + 8);
      return;
    }
  }
  return;
}


/* address=1800f6da0 name=FUN_1800f6da0 */

void FUN_1800f6da0(longlong *param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    lVar1 = *param_1;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_1803e4c80(param_1[1],lVar1,1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x31) == '\x03') {
    if (*(char *)(param_1 + 0x30) == '\x03') {
      FUN_1800eea70(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_1800f7b40(param_1 + 7);
      return;
    }
  }
  return;
}


/* address=1800f6e00 name=FUN_1800f6e00 */

void FUN_1800f6e00(longlong param_1)

{
  if (*(char *)(param_1 + 0x179) == '\x03') {
    if (*(char *)(param_1 + 0x148) == '\x03') {
      FUN_1800eea70(param_1 + 0x58);
      return;
    }
    if (*(char *)(param_1 + 0x148) == '\0') {
      FUN_1800f7b40();
      return;
    }
  }
  return;
}


/* address=1800f6e30 name=FUN_1800f6e30 */

void FUN_1800f6e30(longlong *param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],*param_1,1);
    }
    lVar1 = param_1[3];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_1803e4c80(param_1[4],lVar1,1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x31) == '\x03') {
    if (*(char *)(param_1 + 0x30) == '\x03') {
      FUN_1800eea70(param_1 + 0x12);
      return;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_1800f7b40(param_1 + 7);
      return;
    }
  }
  return;
}


/* address=1800f6ec0 name=FUN_1800f6ec0 */

void FUN_1800f6ec0(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x04') {
    FUN_1803abc90(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f6efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18))(*(undefined8 *)(param_1 + 0x38));
      return;
    }
  }
  return;
}


/* address=1800f6f40 name=FUN_1800f6f40 */

void FUN_1800f6f40(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x23) == '\0') {
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
        goto LAB_1800f70b4;
      }
    }
    uVar2 = *(ulonglong *)((longlong)param_1 + lVar3);
LAB_1800f70b4:
    if (uVar2 == 0) {
      return;
    }
    thunk_FUN_1803e4c80(*(undefined8 *)((longlong)param_1 + lVar3 + 8),uVar2,1);
    return;
  }
  if (*(char *)(param_1 + 0x23) != '\x03') {
    return;
  }
  if ((*(char *)(param_1 + 0x22) == '\x03') && (*(char *)(param_1 + 0x19) == '\x04')) {
    FUN_1803abc90(param_1 + 0x1a);
    if (param_1[0x1b] != 0) {
      (**(code **)(param_1[0x1b] + 0x18))(param_1[0x1c]);
    }
  }
  uVar2 = param_1[10];
  uVar1 = 9;
  if ((longlong)uVar2 < 0) {
    uVar1 = uVar2 ^ 0x8000000000000000;
  }
  lVar3 = 8;
  puVar4 = param_1;
  if (0x10 < uVar1) goto LAB_1800f7105;
  if ((0xec7fUL >> (uVar1 & 0x3f) & 1) != 0) goto LAB_1800f6ff1;
  if (uVar1 == 9) {
    if (uVar2 != 0) {
      thunk_FUN_1803e4c80(param_1[0xb],uVar2,1,param_4,param_1,uVar5);
    }
    lVar3 = 0x30;
    if (param_1[0xd] != 0) {
      thunk_FUN_1803e4c80(param_1[0xe],param_1[0xd],1,param_4,puVar4,uVar5);
    }
LAB_1800f7105:
    uVar2 = *(ulonglong *)((longlong)param_1 + lVar3 + 0x50);
  }
  else {
    if (uVar1 != 0x10) goto LAB_1800f7105;
    uVar2 = param_1[0xb];
    if (uVar2 == 0xffffffffffffffff) goto LAB_1800f6ff1;
  }
  if (uVar2 != 0) {
    thunk_FUN_1803e4c80(*(undefined8 *)((longlong)param_1 + lVar3 + 0x58),uVar2,1,param_4,puVar4,
                        uVar5);
  }
LAB_1800f6ff1:
  *(undefined *)((longlong)param_1 + 0x119) = 0;
  return;
}


/* address=1800f71a0 name=FUN_1800f71a0 */

void FUN_1800f71a0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x78) == '\x03') && (*(char *)(param_1 + 0x30) == '\x04')) {
    FUN_1803abc90(param_1 + 0x38);
    if (*(longlong *)(param_1 + 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f71e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x40) + 0x18))(*(undefined8 *)(param_1 + 0x48));
      return;
    }
  }
  return;
}


/* address=1800f7220 name=FUN_1800f7220 */

void FUN_1800f7220(longlong param_1)

{
  if (((*(char *)(param_1 + 0x70) == '\x03') && (*(char *)(param_1 + 0x68) == '\x03')) &&
     (*(char *)(param_1 + 0x20) == '\x04')) {
    FUN_1803abc90(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f7268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18))(*(undefined8 *)(param_1 + 0x38));
      return;
    }
  }
  return;
}


/* address=1800f72b0 name=FUN_1800f72b0 */

void FUN_1800f72b0(longlong param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x04') {
    FUN_1803abc90(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f72ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x20) + 0x18))(*(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}


/* address=1800f7330 name=FUN_1800f7330 */

void FUN_1800f7330(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x43) == '\0') {
    lVar1 = *param_1;
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_1803e4c80(param_1[1],lVar1,1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x43) == '\x03') {
    if (*(char *)((longlong)param_1 + 0x211) == '\x03') {
      FUN_1800f7520(param_1 + 10);
      *(undefined *)(param_1 + 0x42) = 0;
      plVar2 = (longlong *)param_1[9];
      LOCK();
      *plVar2 = *plVar2 + -1;
      lVar1 = *plVar2;
      UNLOCK();
    }
    else {
      if (*(char *)((longlong)param_1 + 0x211) == '\0') {
        plVar2 = (longlong *)param_1[0x41];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_18023a420(param_1 + 0x41);
        }
      }
      plVar2 = (longlong *)param_1[9];
      LOCK();
      *plVar2 = *plVar2 + -1;
      lVar1 = *plVar2;
      UNLOCK();
    }
    if (lVar1 == 0) {
      FUN_18023a420(param_1 + 9);
    }
    plVar2 = (longlong *)param_1[8];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18023a340(param_1 + 8);
    }
    *(undefined *)((longlong)param_1 + 0x219) = 0;
  }
  return;
}


/* address=1800f74c0 name=FUN_1800f74c0 */

void FUN_1800f74c0(longlong param_1)

{
  if (*(char *)(param_1 + 0x199) == '\x03') {
    if (*(char *)(param_1 + 0x148) == '\x03') {
      FUN_1800eea70(param_1 + 0x58);
      return;
    }
    if (*(char *)(param_1 + 0x148) == '\0') {
      FUN_1800f7b40();
      return;
    }
  }
  return;
}


/* address=1800f74f0 name=FUN_1800f74f0 */

void FUN_1800f74f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x15a) == '\x03') {
    if (*(char *)(param_1 + 0x150) == '\x03') {
      FUN_1800eea70(param_1 + 0x60);
      return;
    }
    if (*(char *)(param_1 + 0x150) == '\0') {
      FUN_1800f7b40(param_1 + 8);
      return;
    }
  }
  return;
}


/* address=1800f7520 name=FUN_1800f7520 */

void FUN_1800f7520(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x10);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18023a420(param_1 + 0x10);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1b0) == '\x03') {
    if (*(char *)(param_1 + 0x1a8) == '\x03') {
      FUN_1800ee990(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x40) != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(param_1 + 0x48),*(longlong *)(param_1 + 0x40),1);
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x18);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18023a420(param_1 + 0x18);
      return;
    }
  }
  return;
}


/* address=1800f7610 name=FUN_1800f7610 */

void FUN_1800f7610(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x1c1) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x1b8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18023a420(param_1 + 0x1b8);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1c1) == '\x03') {
    FUN_1800f7520();
    *(undefined *)(param_1 + 0x1c0) = 0;
  }
  return;
}


/* address=1800f7690 name=FUN_1800f7690 */

void FUN_1800f7690(longlong param_1)

{
  if ((*(char *)(param_1 + 0x58) == '\x03') && (*(char *)(param_1 + 0x50) == '\x03')) {
    FUN_1803abc90(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f76d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(*(undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


/* address=1800f7710 name=FUN_1800f7710 */

void FUN_1800f7710(char *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*param_1 == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x20);
      do {
        uVar1 = puVar5[-1];
        if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
          thunk_FUN_1803e4c80(*puVar5,uVar1,1);
        }
        puVar5 = puVar5 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      thunk_FUN_1803e4c80(lVar4,*(longlong *)(param_1 + 8) * 0x30,8);
    }
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x20);
      do {
        lVar2 = puVar5[-4];
        if ((lVar2 != -1) && (lVar2 != 0)) {
          thunk_FUN_1803e4c80(puVar5[-3],lVar2,1);
        }
        uVar1 = puVar5[-1];
        if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
          thunk_FUN_1803e4c80(*puVar5,uVar1,1);
        }
        puVar5 = puVar5 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x20);
      do {
        uVar1 = puVar5[-1];
        if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
          thunk_FUN_1803e4c80(*puVar5,uVar1,1);
        }
        puVar5 = puVar5 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      thunk_FUN_1803e4c80(lVar4,*(longlong *)(param_1 + 8) * 0x30,8);
    }
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x20);
      do {
        lVar2 = puVar5[-4];
        if ((lVar2 != -1) && (lVar2 != 0)) {
          thunk_FUN_1803e4c80(puVar5[-3],lVar2,1);
        }
        uVar1 = puVar5[-1];
        if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
          thunk_FUN_1803e4c80(*puVar5,uVar1,1);
        }
        puVar5 = puVar5 + 6;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    thunk_FUN_1803e4c80(lVar4,*(longlong *)(param_1 + 0x20) * 0x30,8);
    return;
  }
  return;
}


/* address=1800f78e0 name=FUN_1800f78e0 */

void FUN_1800f78e0(longlong *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],*param_1 * 0x11,1);
  }
  if (param_1[3] != 0) {
    thunk_FUN_1803e4c80(param_1[4],param_1[3] * 0x11,1);
    return;
  }
  return;
}


/* address=1800f7940 name=FUN_1800f7940 */

void FUN_1800f7940(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[6];
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(param_1[7],lVar1,1);
  }
  lVar1 = param_1[9];
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(param_1[10],lVar1,1);
  }
  uVar2 = param_1[0xc];
  if ((uVar2 < 0xfffffffffffffffe) && (uVar2 != 0)) {
    thunk_FUN_1803e4c80(param_1[0xd],uVar2,1);
  }
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],*param_1 * 0x11,1);
  }
  lVar1 = param_1[0xf];
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(param_1[0x10],lVar1,1);
  }
  lVar1 = param_1[0x12];
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(param_1[0x13],lVar1,1);
  }
  uVar2 = param_1[0x15];
  if ((uVar2 < 0xfffffffffffffffe) && (uVar2 != 0)) {
    thunk_FUN_1803e4c80(param_1[0x16],uVar2,1);
  }
  if (param_1[3] != 0) {
    thunk_FUN_1803e4c80(param_1[4],param_1[3] * 0x11,1);
    return;
  }
  return;
}


/* address=1800f7a60 name=FUN_1800f7a60 */

void FUN_1800f7a60(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(param_1[1],lVar1,1);
  }
  lVar1 = param_1[3];
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_1803e4c80(param_1[4],lVar1,1);
  }
  uVar2 = param_1[6];
  if ((uVar2 < 0xfffffffffffffffe) && (uVar2 != 0)) {
    thunk_FUN_1803e4c80(param_1[7],uVar2,1);
    return;
  }
  return;
}


/* address=1800f7ad0 name=FUN_1800f7ad0 */

void FUN_1800f7ad0(longlong *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    thunk_FUN_1803e4c80(param_1[4],param_1[3],1);
    return;
  }
  return;
}


/* address=1800f7b40 name=FUN_1800f7b40 */

void FUN_1800f7b40(undefined *param_1)

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
LAB_1800f7b6d:
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
    if (0 < lVar2) goto LAB_1800f7b6d;
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


/* address=1800f7c40 name=FUN_1800f7c40 */

void FUN_1800f7c40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  iVar1 = (int)*param_1;
  if (iVar1 - 1U < 2) {
switchD_1800f7c73_caseD_5:
    return;
  }
  if ((*param_1 == 0) || (iVar1 != 3)) {
    if (param_1[1] == 0) {
      return;
    }
    thunk_FUN_1803e4c80(param_1[2],param_1[1],1);
    return;
  }
  switch(*(undefined4 *)(param_1 + 1)) {
  case 2:
    thunk_FUN_1803e4c80(param_1[2],4,2);
    plVar3 = (longlong *)param_1[3];
    lVar2 = *plVar3;
    if (lVar2 == -1) goto LAB_1800f7d0e;
    break;
  case 3:
    thunk_FUN_1803e4c80(param_1[2],0x10,8);
    return;
  case 4:
    thunk_FUN_1803e4c80(param_1[2],1,1);
    return;
  default:
    goto switchD_1800f7c73_caseD_5;
  case 0x25:
    plVar3 = (longlong *)param_1[2];
    lVar2 = *plVar3;
  }
  if (lVar2 != 0) {
    thunk_FUN_1803e4c80(plVar3[1],lVar2,1);
  }
LAB_1800f7d0e:
  thunk_FUN_1803e4c80(plVar3,0x18,8);
  return;
}


/* address=1800f7d30 name=FUN_1800f7d30 */

void FUN_1800f7d30(longlong param_1)

{
  FUN_1803abc90();
  if (*(longlong *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800f7d62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}


/* address=1800f7da0 name=FUN_1800f7da0 */

void FUN_1800f7da0(longlong **param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *param_1;
  LOCK();
  plVar2 = plVar1 + 0x39;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180224de0(plVar1 + 0x10);
    FUN_1803ac440(plVar1 + 0x20);
  }
  plVar2 = *param_1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18023a1b0(param_1);
  }
  plVar2 = param_1[1];
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18023a420(param_1 + 1);
    return;
  }
  return;
}


/* address=1800f7e90 name=FUN_1800f7e90 */

void FUN_1800f7e90(longlong *param_1)

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
    return;
  }
  return;
}


/* address=1801a87a0 name=FUN_1801a87a0 */

undefined4 * FUN_1801a87a0(undefined4 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong local_50;
  int local_44;
  undefined8 local_40;
  longlong *local_38;
  code *local_30;
  undefined local_28 [24];
  
  if (*param_2 == 0) {
    local_50 = param_2[1];
    FUN_1803cea00(&local_44);
    if (local_44 == 1) {
      *(undefined8 *)(param_1 + 1) = local_40;
      *param_1 = 0;
      return param_1;
    }
    local_30 = (code *)&DAT_180403070;
LAB_1801a886b:
    local_38 = &local_50;
    FUN_1803f6380(local_28,&DAT_1806bc8a9,&local_38);
    uVar1 = FUN_180697d00(local_28);
    *(undefined8 *)(param_1 + 2) = uVar1;
    *param_1 = 1;
    return param_1;
  }
  if ((int)*param_2 == 1) {
    local_50 = param_2[1];
    FUN_1803e6d50(&local_44,&DAT_1806bc890,local_50,0);
    if (local_44 != 1) {
      local_30 = FUN_180404240;
      goto LAB_1801a886b;
    }
  }
  else {
    local_50 = param_2[1];
    if (local_50 < 0) {
      uVar1 = FUN_1806984a0();
      *(undefined8 *)(param_1 + 2) = uVar1;
      *param_1 = 1;
      return param_1;
    }
    FUN_1803e6d50(&local_44,&DAT_1806bc890,local_50,0);
    if (local_44 != 1) {
      local_38 = &local_50;
      local_30 = FUN_180404240;
      FUN_1803f6380(local_28,&DAT_1806bc8a9,&local_38);
      uVar1 = FUN_180697d00(local_28);
      *(undefined8 *)(param_1 + 2) = uVar1;
      uVar2 = 1;
      goto LAB_1801a884e;
    }
  }
  uVar2 = 0;
  *(undefined8 *)(param_1 + 1) = local_40;
LAB_1801a884e:
  *param_1 = uVar2;
  return param_1;
}


/* address=1801a8900 name=FUN_1801a8900 */

void FUN_1801a8900(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60 [2];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  int *local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_1 != 2) {
    local_30 = *(longlong *)(param_1 + 8);
    local_48 = *(longlong *)(param_1 + 10);
    local_40 = 0;
    lVar2 = local_30;
    local_38 = param_1;
    while (piVar1 = local_38, local_48 != local_40) {
      local_40 = local_40 + 1;
      FUN_1801abf70(lVar2);
      lVar2 = lVar2 + 0x160;
    }
    if (*(longlong *)(local_38 + 6) != 0) {
      thunk_FUN_1803e4c80(local_30,*(longlong *)(local_38 + 6) * 0x160,8);
    }
    lVar2 = *(longlong *)(piVar1 + 0xc);
    if (lVar2 == 0) {
      local_68 = 0;
    }
    else {
      local_90 = *(undefined8 *)(piVar1 + 0xe);
      local_68 = *(undefined8 *)(piVar1 + 0x10);
      local_a0 = 0;
      local_80 = 0;
      local_98 = lVar2;
      local_78 = lVar2;
      local_70 = local_90;
    }
    local_a8 = (ulonglong)(lVar2 != 0);
    local_88 = local_a8;
    FUN_1803342d0(local_60,&local_a8);
    if (local_60[0] != 0) {
      do {
        lVar2 = *(longlong *)(local_60[0] + 8 + local_50 * 0x18);
        if (lVar2 != 0) {
          thunk_FUN_1803e4c80(*(undefined8 *)(local_60[0] + local_50 * 0x18 + 0x10),lVar2,1);
        }
        FUN_1803342d0(local_60,&local_a8);
      } while (local_60[0] != 0);
    }
  }
  return;
}


/* address=1801a8af0 name=FUN_1801a8af0 */

void FUN_1801a8af0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if (lVar1 != 0) {
      thunk_FUN_1803e4c80(param_1[1],lVar1,1);
    }
    FUN_18024e820();
    if (param_1[3] != 0) {
      thunk_FUN_1803e4c80(param_1[4],param_1[3] * 0x48,8);
      return;
    }
  }
  return;
}


/* address=1801a8bb0 name=FUN_1801a8bb0 */

void FUN_1801a8bb0(char *param_1)

{
  if (*param_1 != -1) {
    FUN_1801ace30();
    FUN_1801ace30(param_1 + 0x20);
    return;
  }
  return;
}


/* address=1801a8c20 name=FUN_1801a8c20 */

void FUN_1801a8c20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  lVar2 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar2 + 8);
    do {
      lVar3 = puVar5[-1];
      if ((lVar3 != -1) && (lVar3 != 0)) {
        thunk_FUN_1803e4c80(*puVar5,lVar3,1);
      }
      puVar5 = puVar5 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(lVar2,lVar1 * 0x18,8);
    return;
  }
  return;
}


/* address=1801a8cc0 name=FUN_1801a8cc0 */

void FUN_1801a8cc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
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
  return;
}


/* address=1801a8d60 name=FUN_1801a8d60 */

void FUN_1801a8d60(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  FUN_18024e720();
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],lVar1 * 0x68,8);
    return;
  }
  return;
}


/* address=1801a8e10 name=FUN_1801a8e10 */

void FUN_1801a8e10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 0x20);
    do {
      if (puVar4[-4] != 0) {
        thunk_FUN_1803e4c80(puVar4[-3],puVar4[-4],1);
      }
      if (puVar4[-1] != 0) {
        thunk_FUN_1803e4c80(*puVar4,puVar4[-1],1);
      }
      puVar4 = puVar4 + 9;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(lVar2,lVar1 * 0x48,8);
    return;
  }
  return;
}


/* address=1801a8ec0 name=FUN_1801a8ec0 */

void FUN_1801a8ec0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  FUN_18024e820();
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],lVar1 * 0x48,8);
    return;
  }
  return;
}


/* address=1801a8f70 name=FUN_1801a8f70 */

void FUN_1801a8f70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  FUN_18024e930();
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],lVar1 * 0x70,8);
    return;
  }
  return;
}


/* address=1801a9020 name=FUN_1801a9020 */

void FUN_1801a9020(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_40;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  local_40 = 0;
  lVar4 = lVar2;
  while (lVar3 != local_40) {
    local_40 = local_40 + 1;
    FUN_180242520(lVar4);
    lVar4 = lVar4 + 0x98;
  }
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(lVar2,lVar1 * 0x98,8);
    return;
  }
  return;
}


/* address=1801a9160 name=FUN_1801a9160 */

void FUN_1801a9160(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 0x20);
    do {
      if (puVar4[-4] != 0) {
        thunk_FUN_1803e4c80(puVar4[-3],puVar4[-4],1);
      }
      if (puVar4[-1] != 0) {
        thunk_FUN_1803e4c80(*puVar4,puVar4[-1],1);
      }
      puVar4 = puVar4 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(lVar2,lVar1 * 0x30,8);
    return;
  }
  return;
}


/* address=1801a9210 name=FUN_1801a9210 */

void FUN_1801a9210(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_40;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  local_40 = 0;
  lVar4 = lVar2;
  while (lVar3 != local_40) {
    local_40 = local_40 + 1;
    FUN_1801abf70(lVar4);
    lVar4 = lVar4 + 0x160;
  }
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(lVar2,lVar1 * 0x160,8);
    return;
  }
  return;
}


/* address=1801a9350 name=FUN_1801a9350 */

void FUN_1801a9350(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  FUN_18024ead0();
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(param_1[1],lVar1 * 200,8);
    return;
  }
  return;
}


/* address=1801a9400 name=FUN_1801a9400 */

void FUN_1801a9400(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_40;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  local_40 = 0;
  lVar4 = lVar2;
  while (lVar3 != local_40) {
    local_40 = local_40 + 1;
    FUN_180242730(lVar4);
    lVar4 = lVar4 + 0x228;
  }
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(lVar2,lVar1 * 0x228,8);
    return;
  }
  return;
}


/* address=1801a9540 name=FUN_1801a9540 */

void FUN_1801a9540(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  lVar2 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar2 + 0x20);
    do {
      if (puVar5[-4] != 0) {
        thunk_FUN_1803e4c80(puVar5[-3],puVar5[-4],1);
      }
      lVar3 = puVar5[-1];
      if ((lVar3 != -1) && (lVar3 != 0)) {
        thunk_FUN_1803e4c80(*puVar5,lVar3,1);
      }
      puVar5 = puVar5 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(lVar2,lVar1 * 0x30,8);
    return;
  }
  return;
}


/* address=1801a95f0 name=FUN_1801a95f0 */

void FUN_1801a95f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_1800a6db0(param_1[1]);
    return;
  }
  lVar2 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar2 + 8);
    do {
      lVar3 = puVar5[-1];
      if ((lVar3 != -1) && (lVar3 != 0)) {
        thunk_FUN_1803e4c80(*puVar5,lVar3,1);
      }
      puVar5 = puVar5 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar1 != 0) {
    thunk_FUN_1803e4c80(lVar2,lVar1 * 0x30,8);
    return;
  }
  return;
}


/* address=1801a9690 name=FUN_1801a9690 */

void FUN_1801a9690(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_1800a6db0(*(undefined8 *)(param_1 + 8));
    return;
  }
  FUN_180334890();
  return;
}


/* address=1801a96b0 name=FUN_1801a96b0 */

void FUN_1801a96b0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_1800a6db0(*(undefined8 *)(param_1 + 8));
    return;
  }
  FUN_180334b50();
  return;
}


/* address=1801a96d0 name=FUN_1801a96d0 */

void FUN_1801a96d0(char *param_1)

{
  longlong lVar1;
  longlong local_70 [2];
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*param_1 != '\0') {
    FUN_1800a6db0(*(undefined8 *)(param_1 + 8));
    return;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_40 = *(undefined8 *)(param_1 + 0x10);
    local_18 = *(undefined8 *)(param_1 + 0x18);
    local_50 = 0;
    local_30 = 0;
    local_48 = lVar1;
    local_28 = lVar1;
    local_20 = local_40;
  }
  local_58 = (ulonglong)(lVar1 != 0);
  local_38 = local_58;
  FUN_1803342d0(local_70,&local_58);
  if (local_70[0] != 0) {
    do {
      lVar1 = *(longlong *)(local_70[0] + 8 + local_60 * 0x18);
      if (lVar1 != 0) {
        thunk_FUN_1803e4c80(*(undefined8 *)(local_70[0] + local_60 * 0x18 + 0x10),lVar1,1);
      }
      FUN_1803342d0(local_70,&local_58);
    } while (local_70[0] != 0);
  }
  return;
}


/* address=1801a97c0 name=FUN_1801a97c0 */

void FUN_1801a97c0(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_1800a6db0(*(undefined8 *)(param_1 + 8));
    return;
  }
  FUN_180334d50();
  return;
}


/* address=1801a97e0 name=FUN
/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=140201190 name=FUN_140201190 */

longlong FUN_140201190(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined **local_5f0;
  undefined8 local_5e8;
  longlong local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined local_5cc [660];
  undefined local_338 [16];
  undefined8 local_328;
  undefined local_318 [16];
  undefined local_2f4 [4];
  undefined local_2f0 [656];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_5f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402012e2;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_2f0,param_1,0x290);
  local_5f8 = 0;
  local_5f0 = &PTR_LAB_140e85480;
  local_5e8 = 0;
  local_5d0 = 0;
  local_600 = param_3;
  local_5e0 = param_2;
  local_5d8 = param_4;
  FUN_140e286a0(local_5cc,local_2f4,0x294);
  local_338 = ZEXT816(0);
  local_328 = 0;
  local_318._4_4_ = uVar4;
  local_318._0_4_ = uVar3;
  local_318._8_4_ = uVar5;
  local_318._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x300,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_600,0x300);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x300);
LAB_1402012e2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140201340 name=FUN_140201340 */

longlong FUN_140201340(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined **local_5f0;
  undefined8 local_5e8;
  longlong local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined local_5cc [660];
  undefined local_338 [16];
  undefined8 local_328;
  undefined local_318 [16];
  undefined local_2f4 [4];
  undefined local_2f0 [656];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_5f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140201492;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_2f0,param_1,0x290);
  local_5f8 = 0;
  local_5f0 = &PTR_LAB_140e854d0;
  local_5e8 = 0;
  local_5d0 = 0;
  local_600 = param_3;
  local_5e0 = param_2;
  local_5d8 = param_4;
  FUN_140e286a0(local_5cc,local_2f4,0x294);
  local_338 = ZEXT816(0);
  local_328 = 0;
  local_318._4_4_ = uVar4;
  local_318._0_4_ = uVar3;
  local_318._8_4_ = uVar5;
  local_318._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x300,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_600,0x300);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x300);
LAB_140201492:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402014f0 name=FUN_1402014f0 */

longlong FUN_1402014f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined **local_4f0;
  undefined8 local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined local_4cc [420];
  undefined local_328 [16];
  undefined8 local_318;
  undefined local_308 [16];
  undefined local_204 [4];
  undefined local_200 [416];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_4f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140201642;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_200,param_1,0x1a0);
  local_4f8 = 0;
  local_4f0 = &PTR_LAB_140e85520;
  local_4e8 = 0;
  local_4d0 = 0;
  local_500 = param_3;
  local_4e0 = param_2;
  local_4d8 = param_4;
  FUN_140e286a0(local_4cc,local_204,0x1a4);
  local_328 = ZEXT816(0);
  local_318 = 0;
  local_308._4_4_ = uVar4;
  local_308._0_4_ = uVar3;
  local_308._8_4_ = uVar5;
  local_308._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x280,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_500,0x280);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x280);
LAB_140201642:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402016a0 name=FUN_1402016a0 */

longlong FUN_1402016a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined **local_4f0;
  undefined8 local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined local_4cc [420];
  undefined local_328 [16];
  undefined8 local_318;
  undefined local_308 [16];
  undefined local_204 [4];
  undefined local_200 [416];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_4f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402017f2;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_200,param_1,0x1a0);
  local_4f8 = 0;
  local_4f0 = &PTR_LAB_140e85570;
  local_4e8 = 0;
  local_4d0 = 0;
  local_500 = param_3;
  local_4e0 = param_2;
  local_4d8 = param_4;
  FUN_140e286a0(local_4cc,local_204,0x1a4);
  local_328 = ZEXT816(0);
  local_318 = 0;
  local_308._4_4_ = uVar4;
  local_308._0_4_ = uVar3;
  local_308._8_4_ = uVar5;
  local_308._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x280,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_500,0x280);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x280);
LAB_1402017f2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140201850 name=FUN_140201850 */

longlong FUN_140201850(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined **local_3f0;
  undefined8 local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined local_3cc [364];
  undefined local_260 [16];
  undefined8 local_250;
  undefined local_240 [16];
  undefined local_1cc [4];
  undefined local_1c8 [360];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_3f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402019a2;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_1c8,param_1,0x168);
  local_3f8 = 0;
  local_3f0 = &PTR_LAB_140e855c0;
  local_3e8 = 0;
  local_3d0 = 0;
  local_400 = param_3;
  local_3e0 = param_2;
  local_3d8 = param_4;
  FUN_140e286a0(local_3cc,local_1cc,0x16c);
  local_260 = ZEXT816(0);
  local_250 = 0;
  local_240._4_4_ = uVar4;
  local_240._0_4_ = uVar3;
  local_240._8_4_ = uVar5;
  local_240._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x200,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_400,0x200);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x200);
LAB_1402019a2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140201a00 name=FUN_140201a00 */

longlong FUN_140201a00(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined **local_3f0;
  undefined8 local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined local_3cc [364];
  undefined local_260 [16];
  undefined8 local_250;
  undefined local_240 [16];
  undefined local_1cc [4];
  undefined local_1c8 [360];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_3f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140201b52;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_1c8,param_1,0x168);
  local_3f8 = 0;
  local_3f0 = &PTR_LAB_140e85610;
  local_3e8 = 0;
  local_3d0 = 0;
  local_400 = param_3;
  local_3e0 = param_2;
  local_3d8 = param_4;
  FUN_140e286a0(local_3cc,local_1cc,0x16c);
  local_260 = ZEXT816(0);
  local_250 = 0;
  local_240._4_4_ = uVar4;
  local_240._0_4_ = uVar3;
  local_240._8_4_ = uVar5;
  local_240._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x200,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_400,0x200);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x200);
LAB_140201b52:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140201bb0 name=FUN_140201bb0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140201bb0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_1100;
  undefined8 local_10f8;
  undefined **local_10f0;
  undefined8 local_10e8;
  longlong local_10e0;
  undefined8 local_10d8;
  undefined4 local_10d0;
  undefined local_10cc [1956];
  undefined local_928 [16];
  undefined8 local_918;
  undefined local_908 [16];
  undefined local_804 [4];
  undefined local_800 [1952];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_10f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140201d08;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_800,param_1,0x7a0);
  local_10f8 = 0;
  local_10f0 = &PTR_LAB_140e85660;
  local_10e8 = 0;
  local_10d0 = 0;
  local_1100 = param_3;
  local_10e0 = param_2;
  local_10d8 = param_4;
  FUN_140e286a0(local_10cc,local_804,0x7a4);
  local_928 = ZEXT816(0);
  local_918 = 0;
  local_908._4_4_ = uVar4;
  local_908._0_4_ = uVar3;
  local_908._8_4_ = uVar5;
  local_908._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x880,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_1100,0x880);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x880);
LAB_140201d08:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140201d60 name=FUN_140201d60 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140201d60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_1100;
  undefined8 local_10f8;
  undefined **local_10f0;
  undefined8 local_10e8;
  longlong local_10e0;
  undefined8 local_10d8;
  undefined4 local_10d0;
  undefined local_10cc [1956];
  undefined local_928 [16];
  undefined8 local_918;
  undefined local_908 [16];
  undefined local_804 [4];
  undefined local_800 [1952];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_10f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140201eb8;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_800,param_1,0x7a0);
  local_10f8 = 0;
  local_10f0 = &PTR_LAB_140e856b0;
  local_10e8 = 0;
  local_10d0 = 0;
  local_1100 = param_3;
  local_10e0 = param_2;
  local_10d8 = param_4;
  FUN_140e286a0(local_10cc,local_804,0x7a4);
  local_928 = ZEXT816(0);
  local_918 = 0;
  local_908._4_4_ = uVar4;
  local_908._0_4_ = uVar3;
  local_908._8_4_ = uVar5;
  local_908._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x880,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_1100,0x880);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x880);
LAB_140201eb8:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140201f10 name=FUN_140201f10 */

longlong FUN_140201f10(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined **local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined local_2cc [180];
  undefined local_218 [16];
  undefined8 local_208;
  undefined local_1f8 [16];
  undefined local_114 [4];
  undefined local_110 [176];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_2f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140202062;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_110,param_1,0xb0);
  local_2f8 = 0;
  local_2f0 = &PTR_LAB_140e85700;
  local_2e8 = 0;
  local_2d0 = 0;
  local_300 = param_3;
  local_2e0 = param_2;
  local_2d8 = param_4;
  FUN_140e286a0(local_2cc,local_114,0xb4);
  local_218 = ZEXT816(0);
  local_208 = 0;
  local_1f8._4_4_ = uVar4;
  local_1f8._0_4_ = uVar3;
  local_1f8._8_4_ = uVar5;
  local_1f8._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x180,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_300,0x180);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x180);
LAB_140202062:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402020c0 name=FUN_1402020c0 */

longlong FUN_1402020c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined **local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined local_2cc [180];
  undefined local_218 [16];
  undefined8 local_208;
  undefined local_1f8 [16];
  undefined local_114 [4];
  undefined local_110 [176];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_2f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140202212;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_110,param_1,0xb0);
  local_2f8 = 0;
  local_2f0 = &PTR_LAB_140e85750;
  local_2e8 = 0;
  local_2d0 = 0;
  local_300 = param_3;
  local_2e0 = param_2;
  local_2d8 = param_4;
  FUN_140e286a0(local_2cc,local_114,0xb4);
  local_218 = ZEXT816(0);
  local_208 = 0;
  local_1f8._4_4_ = uVar4;
  local_1f8._0_4_ = uVar3;
  local_1f8._8_4_ = uVar5;
  local_1f8._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x180,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_300,0x180);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x180);
LAB_140202212:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140202270 name=FUN_140202270 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140202270(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_1200;
  undefined8 local_11f8;
  undefined **local_11f0;
  undefined8 local_11e8;
  longlong local_11e0;
  undefined8 local_11d8;
  undefined4 local_11d0;
  undefined local_11cc [2132];
  undefined local_978 [16];
  undefined8 local_968;
  undefined local_958 [16];
  undefined local_8b4 [4];
  undefined local_8b0 [2128];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_11f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402023c8;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_8b0,param_1,0x850);
  local_11f8 = 0;
  local_11f0 = &PTR_LAB_140e857a0;
  local_11e8 = 0;
  local_11d0 = 0;
  local_1200 = param_3;
  local_11e0 = param_2;
  local_11d8 = param_4;
  FUN_140e286a0(local_11cc,local_8b4,0x854);
  local_978 = ZEXT816(0);
  local_968 = 0;
  local_958._4_4_ = uVar4;
  local_958._0_4_ = uVar3;
  local_958._8_4_ = uVar5;
  local_958._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x900,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_1200,0x900);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x900);
LAB_1402023c8:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140202420 name=FUN_140202420 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140202420(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_1200;
  undefined8 local_11f8;
  undefined **local_11f0;
  undefined8 local_11e8;
  longlong local_11e0;
  undefined8 local_11d8;
  undefined4 local_11d0;
  undefined local_11cc [2132];
  undefined local_978 [16];
  undefined8 local_968;
  undefined local_958 [16];
  undefined local_8b4 [4];
  undefined local_8b0 [2128];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_11f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140202578;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_8b0,param_1,0x850);
  local_11f8 = 0;
  local_11f0 = &PTR_LAB_140e857f0;
  local_11e8 = 0;
  local_11d0 = 0;
  local_1200 = param_3;
  local_11e0 = param_2;
  local_11d8 = param_4;
  FUN_140e286a0(local_11cc,local_8b4,0x854);
  local_978 = ZEXT816(0);
  local_968 = 0;
  local_958._4_4_ = uVar4;
  local_958._0_4_ = uVar3;
  local_958._8_4_ = uVar5;
  local_958._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x900,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_1200,0x900);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x900);
LAB_140202578:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402025d0 name=FUN_1402025d0 */

longlong FUN_1402025d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined **local_7f0;
  undefined8 local_7e8;
  longlong local_7e0;
  undefined8 local_7d8;
  undefined4 local_7d0;
  undefined local_7cc [820];
  undefined local_498 [16];
  undefined8 local_488;
  undefined local_478 [16];
  undefined local_394 [4];
  undefined local_390 [816];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_7f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140202722;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_390,param_1,0x330);
  local_7f8 = 0;
  local_7f0 = &PTR_LAB_140e85840;
  local_7e8 = 0;
  local_7d0 = 0;
  local_800 = param_3;
  local_7e0 = param_2;
  local_7d8 = param_4;
  FUN_140e286a0(local_7cc,local_394,0x334);
  local_498 = ZEXT816(0);
  local_488 = 0;
  local_478._4_4_ = uVar4;
  local_478._0_4_ = uVar3;
  local_478._8_4_ = uVar5;
  local_478._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x400,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_800,0x400);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x400);
LAB_140202722:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140202780 name=FUN_140202780 */

longlong FUN_140202780(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined **local_7f0;
  undefined8 local_7e8;
  longlong local_7e0;
  undefined8 local_7d8;
  undefined4 local_7d0;
  undefined local_7cc [820];
  undefined local_498 [16];
  undefined8 local_488;
  undefined local_478 [16];
  undefined local_394 [4];
  undefined local_390 [816];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_7f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402028d2;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_390,param_1,0x330);
  local_7f8 = 0;
  local_7f0 = &PTR_LAB_140e85890;
  local_7e8 = 0;
  local_7d0 = 0;
  local_800 = param_3;
  local_7e0 = param_2;
  local_7d8 = param_4;
  FUN_140e286a0(local_7cc,local_394,0x334);
  local_498 = ZEXT816(0);
  local_488 = 0;
  local_478._4_4_ = uVar4;
  local_478._0_4_ = uVar3;
  local_478._8_4_ = uVar5;
  local_478._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x400,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_800,0x400);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x400);
LAB_1402028d2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140202930 name=FUN_140202930 */

longlong FUN_140202930(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined **local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined local_2cc [188];
  undefined local_210 [16];
  undefined8 local_200;
  undefined local_1f0 [16];
  undefined local_11c [4];
  undefined local_118 [184];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_2f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140202a82;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_118,param_1,0xb8);
  local_2f8 = 0;
  local_2f0 = &PTR_LAB_140e858e0;
  local_2e8 = 0;
  local_2d0 = 0;
  local_300 = param_3;
  local_2e0 = param_2;
  local_2d8 = param_4;
  FUN_140e286a0(local_2cc,local_11c,0xbc);
  local_210 = ZEXT816(0);
  local_200 = 0;
  local_1f0._4_4_ = uVar4;
  local_1f0._0_4_ = uVar3;
  local_1f0._8_4_ = uVar5;
  local_1f0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x180,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_300,0x180);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x180);
LAB_140202a82:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140202ae0 name=FUN_140202ae0 */

longlong FUN_140202ae0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined **local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined local_2cc [188];
  undefined local_210 [16];
  undefined8 local_200;
  undefined local_1f0 [16];
  undefined local_11c [4];
  undefined local_118 [184];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_2f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140202c32;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_118,param_1,0xb8);
  local_2f8 = 0;
  local_2f0 = &PTR_LAB_140e85930;
  local_2e8 = 0;
  local_2d0 = 0;
  local_300 = param_3;
  local_2e0 = param_2;
  local_2d8 = param_4;
  FUN_140e286a0(local_2cc,local_11c,0xbc);
  local_210 = ZEXT816(0);
  local_200 = 0;
  local_1f0._4_4_ = uVar4;
  local_1f0._0_4_ = uVar3;
  local_1f0._8_4_ = uVar5;
  local_1f0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x180,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_300,0x180);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x180);
LAB_140202c32:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140202c90 name=FUN_140202c90 */

longlong FUN_140202c90(undefined param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined local_148;
  undefined local_110 [16];
  undefined8 local_100;
  undefined local_f0 [16];
  undefined8 *local_30;
  undefined8 local_20;
  
  local_30 = &local_178;
  local_20 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140202d8f;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  local_178 = 0;
  local_170 = &PTR_LAB_140e85980;
  local_168 = 0;
  local_150 = 0;
  local_110 = ZEXT816(0);
  local_100 = 0;
  local_f0._4_4_ = uVar4;
  local_f0._0_4_ = uVar3;
  local_f0._8_4_ = uVar5;
  local_f0._12_4_ = uVar6;
  local_180 = param_3;
  local_160 = param_2;
  local_158 = param_4;
  local_148 = param_1;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x100,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_180,0x100);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x100);
LAB_140202d8f:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140202dd0 name=FUN_140202dd0 */

longlong FUN_140202dd0(undefined param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined local_148;
  undefined local_110 [16];
  undefined8 local_100;
  undefined local_f0 [16];
  undefined8 *local_30;
  undefined8 local_20;
  
  local_30 = &local_178;
  local_20 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140202ecf;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  local_178 = 0;
  local_170 = &PTR_LAB_140e859d0;
  local_168 = 0;
  local_150 = 0;
  local_110 = ZEXT816(0);
  local_100 = 0;
  local_f0._4_4_ = uVar4;
  local_f0._0_4_ = uVar3;
  local_f0._8_4_ = uVar5;
  local_f0._12_4_ = uVar6;
  local_180 = param_3;
  local_160 = param_2;
  local_158 = param_4;
  local_148 = param_1;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x100,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_180,0x100);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x100);
LAB_140202ecf:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140202f10 name=FUN_140202f10 */

longlong FUN_140202f10(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined **local_cf0;
  undefined8 local_ce8;
  longlong local_ce0;
  undefined8 local_cd8;
  undefined4 local_cd0;
  undefined local_ccc [1508];
  undefined local_6e8 [16];
  undefined8 local_6d8;
  undefined local_6c8 [16];
  undefined local_644 [4];
  undefined local_640 [1504];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_cf8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140203062;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_640,param_1,0x5e0);
  local_cf8 = 0;
  local_cf0 = &PTR_LAB_140e85a20;
  local_ce8 = 0;
  local_cd0 = 0;
  local_d00 = param_3;
  local_ce0 = param_2;
  local_cd8 = param_4;
  FUN_140e286a0(local_ccc,local_644,0x5e4);
  local_6e8 = ZEXT816(0);
  local_6d8 = 0;
  local_6c8._4_4_ = uVar4;
  local_6c8._0_4_ = uVar3;
  local_6c8._8_4_ = uVar5;
  local_6c8._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x680,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_d00,0x680);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x680);
LAB_140203062:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402030c0 name=FUN_1402030c0 */

longlong FUN_1402030c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined **local_cf0;
  undefined8 local_ce8;
  longlong local_ce0;
  undefined8 local_cd8;
  undefined4 local_cd0;
  undefined local_ccc [1508];
  undefined local_6e8 [16];
  undefined8 local_6d8;
  undefined local_6c8 [16];
  undefined local_644 [4];
  undefined local_640 [1504];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_cf8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140203212;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_640,param_1,0x5e0);
  local_cf8 = 0;
  local_cf0 = &PTR_LAB_140e85a70;
  local_ce8 = 0;
  local_cd0 = 0;
  local_d00 = param_3;
  local_ce0 = param_2;
  local_cd8 = param_4;
  FUN_140e286a0(local_ccc,local_644,0x5e4);
  local_6e8 = ZEXT816(0);
  local_6d8 = 0;
  local_6c8._4_4_ = uVar4;
  local_6c8._0_4_ = uVar3;
  local_6c8._8_4_ = uVar5;
  local_6c8._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x680,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_d00,0x680);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x680);
LAB_140203212:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140203270 name=FUN_140203270 */

longlong FUN_140203270(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined **local_4f0;
  undefined8 local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined local_4cc [500];
  undefined local_2d8 [16];
  undefined8 local_2c8;
  undefined local_2b8 [16];
  undefined local_254 [4];
  undefined local_250 [496];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_4f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402033c2;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_250,param_1,0x1f0);
  local_4f8 = 0;
  local_4f0 = &PTR_LAB_140e85ac0;
  local_4e8 = 0;
  local_4d0 = 0;
  local_500 = param_3;
  local_4e0 = param_2;
  local_4d8 = param_4;
  FUN_140e286a0(local_4cc,local_254,500);
  local_2d8 = ZEXT816(0);
  local_2c8 = 0;
  local_2b8._4_4_ = uVar4;
  local_2b8._0_4_ = uVar3;
  local_2b8._8_4_ = uVar5;
  local_2b8._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x280,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_500,0x280);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x280);
LAB_1402033c2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140203420 name=FUN_140203420 */

longlong FUN_140203420(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined **local_4f0;
  undefined8 local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined local_4cc [500];
  undefined local_2d8 [16];
  undefined8 local_2c8;
  undefined local_2b8 [16];
  undefined local_254 [4];
  undefined local_250 [496];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_4f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140203572;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_250,param_1,0x1f0);
  local_4f8 = 0;
  local_4f0 = &PTR_LAB_140e85b10;
  local_4e8 = 0;
  local_4d0 = 0;
  local_500 = param_3;
  local_4e0 = param_2;
  local_4d8 = param_4;
  FUN_140e286a0(local_4cc,local_254,500);
  local_2d8 = ZEXT816(0);
  local_2c8 = 0;
  local_2b8._4_4_ = uVar4;
  local_2b8._0_4_ = uVar3;
  local_2b8._8_4_ = uVar5;
  local_2b8._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x280,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_500,0x280);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x280);
LAB_140203572:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402035d0 name=FUN_1402035d0 */

longlong FUN_1402035d0(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined local_d0 [16];
  undefined8 local_c0;
  undefined local_b0 [16];
  undefined4 *local_30;
  undefined8 local_20;
  
  local_30 = &local_1f8;
  local_20 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar3,1) != *plVar1 < 0) goto LAB_140203790;
    uVar4 = *(undefined4 *)(param_2 + 0x210);
    uVar5 = *(undefined4 *)(param_2 + 0x214);
    uVar6 = *(undefined4 *)(param_2 + 0x218);
    uVar7 = *(undefined4 *)(param_2 + 0x21c);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  local_198 = param_1[0x18];
  uStack_194 = param_1[0x19];
  uStack_190 = param_1[0x1a];
  uStack_18c = param_1[0x1b];
  local_1a8 = param_1[0x14];
  uStack_1a4 = param_1[0x15];
  uStack_1a0 = param_1[0x16];
  uStack_19c = param_1[0x17];
  local_1b8 = param_1[0x10];
  uStack_1b4 = param_1[0x11];
  uStack_1b0 = param_1[0x12];
  uStack_1ac = param_1[0x13];
  local_1f8 = *param_1;
  uStack_1f4 = param_1[1];
  uStack_1f0 = param_1[2];
  uStack_1ec = param_1[3];
  local_1e8 = param_1[4];
  uStack_1e4 = param_1[5];
  uStack_1e0 = param_1[6];
  uStack_1dc = param_1[7];
  local_1d8 = param_1[8];
  uStack_1d4 = param_1[9];
  uStack_1d0 = param_1[10];
  uStack_1cc = param_1[0xb];
  local_1c8 = param_1[0xc];
  uStack_1c4 = param_1[0xd];
  uStack_1c0 = param_1[0xe];
  uStack_1bc = param_1[0xf];
  local_178 = 0;
  local_170 = &PTR_LAB_140e85b60;
  local_168 = 0;
  local_150 = 0;
  local_188._0_4_ = (undefined4)uVar2;
  local_188._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_d8 = (undefined4)local_188;
  uStack_d4 = local_188._4_4_;
  local_d0 = ZEXT816(0);
  local_c0 = 0;
  local_b0._4_4_ = uVar5;
  local_b0._0_4_ = uVar4;
  local_b0._8_4_ = uVar6;
  local_b0._12_4_ = uVar7;
  local_188 = uVar2;
  local_180 = param_3;
  local_160 = param_2;
  local_158 = param_4;
  uStack_148 = local_1f8;
  uStack_144 = uStack_1f4;
  uStack_140 = uStack_1f0;
  local_13c = uStack_1ec;
  uStack_138 = local_1e8;
  uStack_134 = uStack_1e4;
  uStack_130 = uStack_1e0;
  local_12c = uStack_1dc;
  uStack_128 = local_1d8;
  uStack_124 = uStack_1d4;
  uStack_120 = uStack_1d0;
  local_11c = uStack_1cc;
  uStack_118 = local_1c8;
  uStack_114 = uStack_1c4;
  uStack_110 = uStack_1c0;
  local_10c = uStack_1bc;
  uStack_108 = local_1b8;
  uStack_104 = uStack_1b4;
  uStack_100 = uStack_1b0;
  local_fc = uStack_1ac;
  uStack_f8 = local_1a8;
  uStack_f4 = uStack_1a4;
  uStack_f0 = uStack_1a0;
  local_ec = uStack_19c;
  uStack_e8 = local_198;
  uStack_e4 = uStack_194;
  uStack_e0 = uStack_190;
  uStack_dc = uStack_18c;
  FUN_140081a90();
  lVar3 = thunk_FUN_140704e30(0x100,0x80);
  if (lVar3 != 0) {
    FUN_140e286a0(lVar3,&local_180,0x100);
    return lVar3;
  }
  FUN_140e4b571(0x80,0x100);
LAB_140203790:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402037d0 name=FUN_1402037d0 */

longlong FUN_1402037d0(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined local_d0 [16];
  undefined8 local_c0;
  undefined local_b0 [16];
  undefined4 *local_30;
  undefined8 local_20;
  
  local_30 = &local_1f8;
  local_20 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar3,1) != *plVar1 < 0) goto LAB_140203990;
    uVar4 = *(undefined4 *)(param_2 + 0x240);
    uVar5 = *(undefined4 *)(param_2 + 0x244);
    uVar6 = *(undefined4 *)(param_2 + 0x248);
    uVar7 = *(undefined4 *)(param_2 + 0x24c);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  local_198 = param_1[0x18];
  uStack_194 = param_1[0x19];
  uStack_190 = param_1[0x1a];
  uStack_18c = param_1[0x1b];
  local_1a8 = param_1[0x14];
  uStack_1a4 = param_1[0x15];
  uStack_1a0 = param_1[0x16];
  uStack_19c = param_1[0x17];
  local_1b8 = param_1[0x10];
  uStack_1b4 = param_1[0x11];
  uStack_1b0 = param_1[0x12];
  uStack_1ac = param_1[0x13];
  local_1f8 = *param_1;
  uStack_1f4 = param_1[1];
  uStack_1f0 = param_1[2];
  uStack_1ec = param_1[3];
  local_1e8 = param_1[4];
  uStack_1e4 = param_1[5];
  uStack_1e0 = param_1[6];
  uStack_1dc = param_1[7];
  local_1d8 = param_1[8];
  uStack_1d4 = param_1[9];
  uStack_1d0 = param_1[10];
  uStack_1cc = param_1[0xb];
  local_1c8 = param_1[0xc];
  uStack_1c4 = param_1[0xd];
  uStack_1c0 = param_1[0xe];
  uStack_1bc = param_1[0xf];
  local_178 = 0;
  local_170 = &PTR_LAB_140e85bb0;
  local_168 = 0;
  local_150 = 0;
  local_188._0_4_ = (undefined4)uVar2;
  local_188._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_d8 = (undefined4)local_188;
  uStack_d4 = local_188._4_4_;
  local_d0 = ZEXT816(0);
  local_c0 = 0;
  local_b0._4_4_ = uVar5;
  local_b0._0_4_ = uVar4;
  local_b0._8_4_ = uVar6;
  local_b0._12_4_ = uVar7;
  local_188 = uVar2;
  local_180 = param_3;
  local_160 = param_2;
  local_158 = param_4;
  uStack_148 = local_1f8;
  uStack_144 = uStack_1f4;
  uStack_140 = uStack_1f0;
  local_13c = uStack_1ec;
  uStack_138 = local_1e8;
  uStack_134 = uStack_1e4;
  uStack_130 = uStack_1e0;
  local_12c = uStack_1dc;
  uStack_128 = local_1d8;
  uStack_124 = uStack_1d4;
  uStack_120 = uStack_1d0;
  local_11c = uStack_1cc;
  uStack_118 = local_1c8;
  uStack_114 = uStack_1c4;
  uStack_110 = uStack_1c0;
  local_10c = uStack_1bc;
  uStack_108 = local_1b8;
  uStack_104 = uStack_1b4;
  uStack_100 = uStack_1b0;
  local_fc = uStack_1ac;
  uStack_f8 = local_1a8;
  uStack_f4 = uStack_1a4;
  uStack_f0 = uStack_1a0;
  local_ec = uStack_19c;
  uStack_e8 = local_198;
  uStack_e4 = uStack_194;
  uStack_e0 = uStack_190;
  uStack_dc = uStack_18c;
  FUN_140081a90();
  lVar3 = thunk_FUN_140704e30(0x100,0x80);
  if (lVar3 != 0) {
    FUN_140e286a0(lVar3,&local_180,0x100);
    return lVar3;
  }
  FUN_140e4b571(0x80,0x100);
LAB_140203990:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402039d0 name=FUN_1402039d0 */

longlong FUN_1402039d0(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined local_110 [16];
  undefined8 local_100;
  undefined local_f0 [16];
  undefined8 *local_30;
  undefined8 local_20;
  
  local_30 = &local_178;
  local_20 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140203af7;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  uStack_148 = *param_1;
  uStack_144 = param_1[1];
  uStack_140 = param_1[2];
  local_13c = param_1[3];
  uStack_138 = param_1[4];
  uStack_134 = param_1[5];
  uStack_130 = param_1[6];
  local_12c = param_1[7];
  local_178 = 0;
  local_170 = &PTR_LAB_140e85c00;
  local_168 = 0;
  local_150 = 0;
  local_110 = ZEXT816(0);
  local_100 = 0;
  local_f0._4_4_ = uVar4;
  local_f0._0_4_ = uVar3;
  local_f0._8_4_ = uVar5;
  local_f0._12_4_ = uVar6;
  local_180 = param_3;
  local_160 = param_2;
  local_158 = param_4;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x100,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_180,0x100);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x100);
LAB_140203af7:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140203b30 name=FUN_140203b30 */

longlong FUN_140203b30(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined local_110 [16];
  undefined8 local_100;
  undefined local_f0 [16];
  undefined8 *local_30;
  undefined8 local_20;
  
  local_30 = &local_178;
  local_20 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140203c57;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  uStack_148 = *param_1;
  uStack_144 = param_1[1];
  uStack_140 = param_1[2];
  local_13c = param_1[3];
  uStack_138 = param_1[4];
  uStack_134 = param_1[5];
  uStack_130 = param_1[6];
  local_12c = param_1[7];
  local_178 = 0;
  local_170 = &PTR_LAB_140e85c50;
  local_168 = 0;
  local_150 = 0;
  local_110 = ZEXT816(0);
  local_100 = 0;
  local_f0._4_4_ = uVar4;
  local_f0._0_4_ = uVar3;
  local_f0._8_4_ = uVar5;
  local_f0._12_4_ = uVar6;
  local_180 = param_3;
  local_160 = param_2;
  local_158 = param_4;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x100,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_180,0x100);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x100);
LAB_140203c57:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140203c90 name=FUN_140203c90 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140203c90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_2700;
  undefined8 local_26f8;
  undefined **local_26f0;
  undefined8 local_26e8;
  longlong local_26e0;
  undefined8 local_26d8;
  undefined4 local_26d0;
  undefined local_26cc [4796];
  undefined local_1410 [16];
  undefined8 local_1400;
  undefined local_13f0 [16];
  undefined local_131c [4];
  undefined local_1318 [4792];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_26f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140203de8;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_1318,param_1,0x12b8);
  local_26f8 = 0;
  local_26f0 = &PTR_LAB_140e85ca0;
  local_26e8 = 0;
  local_26d0 = 0;
  local_2700 = param_3;
  local_26e0 = param_2;
  local_26d8 = param_4;
  FUN_140e286a0(local_26cc,local_131c,0x12bc);
  local_1410 = ZEXT816(0);
  local_1400 = 0;
  local_13f0._4_4_ = uVar4;
  local_13f0._0_4_ = uVar3;
  local_13f0._8_4_ = uVar5;
  local_13f0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x1380,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_2700,0x1380);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x1380);
LAB_140203de8:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140203e40 name=FUN_140203e40 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140203e40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_2700;
  undefined8 local_26f8;
  undefined **local_26f0;
  undefined8 local_26e8;
  longlong local_26e0;
  undefined8 local_26d8;
  undefined4 local_26d0;
  undefined local_26cc [4796];
  undefined local_1410 [16];
  undefined8 local_1400;
  undefined local_13f0 [16];
  undefined local_131c [4];
  undefined local_1318 [4792];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_26f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140203f98;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_1318,param_1,0x12b8);
  local_26f8 = 0;
  local_26f0 = &PTR_LAB_140e85cf0;
  local_26e8 = 0;
  local_26d0 = 0;
  local_2700 = param_3;
  local_26e0 = param_2;
  local_26d8 = param_4;
  FUN_140e286a0(local_26cc,local_131c,0x12bc);
  local_1410 = ZEXT816(0);
  local_1400 = 0;
  local_13f0._4_4_ = uVar4;
  local_13f0._0_4_ = uVar3;
  local_13f0._8_4_ = uVar5;
  local_13f0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x1380,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_2700,0x1380);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x1380);
LAB_140203f98:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140203ff0 name=FUN_140203ff0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140203ff0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_2000;
  undefined8 local_1ff8;
  undefined **local_1ff0;
  undefined8 local_1fe8;
  longlong local_1fe0;
  undefined8 local_1fd8;
  undefined4 local_1fd0;
  undefined local_1fcc [3948];
  undefined local_1060 [16];
  undefined8 local_1050;
  undefined local_1040 [16];
  undefined local_fcc [12];
  undefined local_fc0 [3936];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_1ff8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140204148;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_fc0,param_1,0xf60);
  local_1ff8 = 0;
  local_1ff0 = &PTR_LAB_140e85d40;
  local_1fe8 = 0;
  local_1fd0 = 0;
  local_2000 = param_3;
  local_1fe0 = param_2;
  local_1fd8 = param_4;
  FUN_140e286a0(local_1fcc,local_fcc,0xf6c);
  local_1060 = ZEXT816(0);
  local_1050 = 0;
  local_1040._4_4_ = uVar4;
  local_1040._0_4_ = uVar3;
  local_1040._8_4_ = uVar5;
  local_1040._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x1000,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_2000,0x1000);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x1000);
LAB_140204148:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402041a0 name=FUN_1402041a0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1402041a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_2000;
  undefined8 local_1ff8;
  undefined **local_1ff0;
  undefined8 local_1fe8;
  longlong local_1fe0;
  undefined8 local_1fd8;
  undefined4 local_1fd0;
  undefined local_1fcc [3948];
  undefined local_1060 [16];
  undefined8 local_1050;
  undefined local_1040 [16];
  undefined local_fcc [12];
  undefined local_fc0 [3936];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_1ff8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402042f8;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_fc0,param_1,0xf60);
  local_1ff8 = 0;
  local_1ff0 = &PTR_LAB_140e85d90;
  local_1fe8 = 0;
  local_1fd0 = 0;
  local_2000 = param_3;
  local_1fe0 = param_2;
  local_1fd8 = param_4;
  FUN_140e286a0(local_1fcc,local_fcc,0xf6c);
  local_1060 = ZEXT816(0);
  local_1050 = 0;
  local_1040._4_4_ = uVar4;
  local_1040._0_4_ = uVar3;
  local_1040._8_4_ = uVar5;
  local_1040._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x1000,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_2000,0x1000);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x1000);
LAB_1402042f8:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140204350 name=FUN_140204350 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140204350(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_1600;
  undefined8 local_15f8;
  undefined **local_15f0;
  undefined8 local_15e8;
  longlong local_15e0;
  undefined8 local_15d8;
  undefined4 local_15d0;
  undefined local_15cc [2684];
  undefined local_b50 [16];
  undefined8 local_b40;
  undefined local_b30 [16];
  undefined local_adc [4];
  undefined local_ad8 [2680];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_15f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402044a8;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_ad8,param_1,0xa78);
  local_15f8 = 0;
  local_15f0 = &PTR_LAB_140e85de0;
  local_15e8 = 0;
  local_15d0 = 0;
  local_1600 = param_3;
  local_15e0 = param_2;
  local_15d8 = param_4;
  FUN_140e286a0(local_15cc,local_adc,0xa7c);
  local_b50 = ZEXT816(0);
  local_b40 = 0;
  local_b30._4_4_ = uVar4;
  local_b30._0_4_ = uVar3;
  local_b30._8_4_ = uVar5;
  local_b30._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0xb00,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_1600,0xb00);
    return lVar2;
  }
  FUN_140e4b571(0x80,0xb00);
LAB_1402044a8:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140204500 name=FUN_140204500 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140204500(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_1600;
  undefined8 local_15f8;
  undefined **local_15f0;
  undefined8 local_15e8;
  longlong local_15e0;
  undefined8 local_15d8;
  undefined4 local_15d0;
  undefined local_15cc [2684];
  undefined local_b50 [16];
  undefined8 local_b40;
  undefined local_b30 [16];
  undefined local_adc [4];
  undefined local_ad8 [2680];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_15f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140204658;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_ad8,param_1,0xa78);
  local_15f8 = 0;
  local_15f0 = &PTR_LAB_140e85e30;
  local_15e8 = 0;
  local_15d0 = 0;
  local_1600 = param_3;
  local_15e0 = param_2;
  local_15d8 = param_4;
  FUN_140e286a0(local_15cc,local_adc,0xa7c);
  local_b50 = ZEXT816(0);
  local_b40 = 0;
  local_b30._4_4_ = uVar4;
  local_b30._0_4_ = uVar3;
  local_b30._8_4_ = uVar5;
  local_b30._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0xb00,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_1600,0xb00);
    return lVar2;
  }
  FUN_140e4b571(0x80,0xb00);
LAB_140204658:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402046b0 name=FUN_1402046b0 */

longlong FUN_1402046b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined **local_bf0;
  undefined8 local_be8;
  longlong local_be0;
  undefined8 local_bd8;
  undefined4 local_bd0;
  undefined local_bcc [1380];
  undefined local_668 [16];
  undefined8 local_658;
  undefined local_648 [16];
  undefined local_5c4 [4];
  undefined local_5c0 [1376];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_bf8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140204802;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_5c0,param_1,0x560);
  local_bf8 = 0;
  local_bf0 = &PTR_LAB_140e85e80;
  local_be8 = 0;
  local_bd0 = 0;
  local_c00 = param_3;
  local_be0 = param_2;
  local_bd8 = param_4;
  FUN_140e286a0(local_bcc,local_5c4,0x564);
  local_668 = ZEXT816(0);
  local_658 = 0;
  local_648._4_4_ = uVar4;
  local_648._0_4_ = uVar3;
  local_648._8_4_ = uVar5;
  local_648._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x600,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_c00,0x600);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x600);
LAB_140204802:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140204860 name=FUN_140204860 */

longlong FUN_140204860(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined **local_bf0;
  undefined8 local_be8;
  longlong local_be0;
  undefined8 local_bd8;
  undefined4 local_bd0;
  undefined local_bcc [1380];
  undefined local_668 [16];
  undefined8 local_658;
  undefined local_648 [16];
  undefined local_5c4 [4];
  undefined local_5c0 [1376];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_bf8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402049b2;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_5c0,param_1,0x560);
  local_bf8 = 0;
  local_bf0 = &PTR_LAB_140e85ed0;
  local_be8 = 0;
  local_bd0 = 0;
  local_c00 = param_3;
  local_be0 = param_2;
  local_bd8 = param_4;
  FUN_140e286a0(local_bcc,local_5c4,0x564);
  local_668 = ZEXT816(0);
  local_658 = 0;
  local_648._4_4_ = uVar4;
  local_648._0_4_ = uVar3;
  local_648._8_4_ = uVar5;
  local_648._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x600,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_c00,0x600);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x600);
LAB_1402049b2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140204a10 name=FUN_140204a10 */

longlong FUN_140204a10(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined **local_9f0;
  undefined8 local_9e8;
  longlong local_9e0;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined local_9cc [1108];
  undefined local_578 [16];
  undefined8 local_568;
  undefined local_558 [16];
  undefined local_4b4 [4];
  undefined local_4b0 [1104];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_9f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140204b62;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_4b0,param_1,0x450);
  local_9f8 = 0;
  local_9f0 = &PTR_LAB_140e85f20;
  local_9e8 = 0;
  local_9d0 = 0;
  local_a00 = param_3;
  local_9e0 = param_2;
  local_9d8 = param_4;
  FUN_140e286a0(local_9cc,local_4b4,0x454);
  local_578 = ZEXT816(0);
  local_568 = 0;
  local_558._4_4_ = uVar4;
  local_558._0_4_ = uVar3;
  local_558._8_4_ = uVar5;
  local_558._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x500,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_a00,0x500);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x500);
LAB_140204b62:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140204bc0 name=FUN_140204bc0 */

longlong FUN_140204bc0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined **local_9f0;
  undefined8 local_9e8;
  longlong local_9e0;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined local_9cc [1108];
  undefined local_578 [16];
  undefined8 local_568;
  undefined local_558 [16];
  undefined local_4b4 [4];
  undefined local_4b0 [1104];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_9f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140204d12;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_4b0,param_1,0x450);
  local_9f8 = 0;
  local_9f0 = &PTR_LAB_140e85f70;
  local_9e8 = 0;
  local_9d0 = 0;
  local_a00 = param_3;
  local_9e0 = param_2;
  local_9d8 = param_4;
  FUN_140e286a0(local_9cc,local_4b4,0x454);
  local_578 = ZEXT816(0);
  local_568 = 0;
  local_558._4_4_ = uVar4;
  local_558._0_4_ = uVar3;
  local_558._8_4_ = uVar5;
  local_558._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x500,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_a00,0x500);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x500);
LAB_140204d12:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140204d70 name=FUN_140204d70 */

longlong FUN_140204d70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined **local_9f0;
  undefined8 local_9e8;
  longlong local_9e0;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined local_9cc [1084];
  undefined local_590 [16];
  undefined8 local_580;
  undefined local_570 [16];
  undefined local_49c [4];
  undefined local_498 [1080];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_9f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140204ec2;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_498,param_1,0x438);
  local_9f8 = 0;
  local_9f0 = &PTR_LAB_140e85fc0;
  local_9e8 = 0;
  local_9d0 = 0;
  local_a00 = param_3;
  local_9e0 = param_2;
  local_9d8 = param_4;
  FUN_140e286a0(local_9cc,local_49c,0x43c);
  local_590 = ZEXT816(0);
  local_580 = 0;
  local_570._4_4_ = uVar4;
  local_570._0_4_ = uVar3;
  local_570._8_4_ = uVar5;
  local_570._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x500,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_a00,0x500);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x500);
LAB_140204ec2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140204f20 name=FUN_140204f20 */

longlong FUN_140204f20(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined **local_9f0;
  undefined8 local_9e8;
  longlong local_9e0;
  undefined8 local_9d8;
  undefined4 local_9d0;
  undefined local_9cc [1084];
  undefined local_590 [16];
  undefined8 local_580;
  undefined local_570 [16];
  undefined local_49c [4];
  undefined local_498 [1080];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_9f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140205072;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_498,param_1,0x438);
  local_9f8 = 0;
  local_9f0 = &PTR_LAB_140e86010;
  local_9e8 = 0;
  local_9d0 = 0;
  local_a00 = param_3;
  local_9e0 = param_2;
  local_9d8 = param_4;
  FUN_140e286a0(local_9cc,local_49c,0x43c);
  local_590 = ZEXT816(0);
  local_580 = 0;
  local_570._4_4_ = uVar4;
  local_570._0_4_ = uVar3;
  local_570._8_4_ = uVar5;
  local_570._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x500,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_a00,0x500);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x500);
LAB_140205072:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402050d0 name=FUN_1402050d0 */

longlong FUN_1402050d0(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined local_110 [16];
  undefined8 local_100;
  undefined local_f0 [16];
  undefined8 *local_30;
  undefined8 local_20;
  
  local_30 = &local_178;
  local_20 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_14020521f;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  uStack_148 = *param_1;
  uStack_144 = param_1[1];
  uStack_140 = param_1[2];
  local_13c = param_1[3];
  uStack_138 = param_1[4];
  uStack_134 = param_1[5];
  uStack_130 = param_1[6];
  local_12c = param_1[7];
  uStack_128 = param_1[8];
  uStack_124 = param_1[9];
  uStack_120 = *(undefined8 *)(param_1 + 10);
  local_118 = *(undefined8 *)(param_1 + 0xc);
  local_178 = 0;
  local_170 = &PTR_LAB_140e86060;
  local_168 = 0;
  local_150 = 0;
  local_110 = ZEXT816(0);
  local_100 = 0;
  local_f0._4_4_ = uVar4;
  local_f0._0_4_ = uVar3;
  local_f0._8_4_ = uVar5;
  local_f0._12_4_ = uVar6;
  local_180 = param_3;
  local_160 = param_2;
  local_158 = param_4;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x100,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_180,0x100);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x100);
LAB_14020521f:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140205260 name=FUN_140205260 */

longlong FUN_140205260(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined local_110 [16];
  undefined8 local_100;
  undefined local_f0 [16];
  undefined8 *local_30;
  undefined8 local_20;
  
  local_30 = &local_178;
  local_20 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402053af;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  uStack_148 = *param_1;
  uStack_144 = param_1[1];
  uStack_140 = param_1[2];
  local_13c = param_1[3];
  uStack_138 = param_1[4];
  uStack_134 = param_1[5];
  uStack_130 = param_1[6];
  local_12c = param_1[7];
  uStack_128 = param_1[8];
  uStack_124 = param_1[9];
  uStack_120 = *(undefined8 *)(param_1 + 10);
  local_118 = *(undefined8 *)(param_1 + 0xc);
  local_178 = 0;
  local_170 = &PTR_LAB_140e860b0;
  local_168 = 0;
  local_150 = 0;
  local_110 = ZEXT816(0);
  local_100 = 0;
  local_f0._4_4_ = uVar4;
  local_f0._0_4_ = uVar3;
  local_f0._8_4_ = uVar5;
  local_f0._12_4_ = uVar6;
  local_180 = param_3;
  local_160 = param_2;
  local_158 = param_4;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x100,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_180,0x100);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x100);
LAB_1402053af:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402053f0 name=FUN_1402053f0 */

longlong FUN_1402053f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined **local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined local_2cc [284];
  undefined local_1b0 [16];
  undefined8 local_1a0;
  undefined local_190 [16];
  undefined local_17c [4];
  undefined local_178 [280];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_2f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140205542;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_178,param_1,0x118);
  local_2f8 = 0;
  local_2f0 = &PTR_LAB_140e86100;
  local_2e8 = 0;
  local_2d0 = 0;
  local_300 = param_3;
  local_2e0 = param_2;
  local_2d8 = param_4;
  FUN_140e286a0(local_2cc,local_17c,0x11c);
  local_1b0 = ZEXT816(0);
  local_1a0 = 0;
  local_190._4_4_ = uVar4;
  local_190._0_4_ = uVar3;
  local_190._8_4_ = uVar5;
  local_190._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x180,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_300,0x180);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x180);
LAB_140205542:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402055a0 name=FUN_1402055a0 */

longlong FUN_1402055a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined **local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined local_2cc [284];
  undefined local_1b0 [16];
  undefined8 local_1a0;
  undefined local_190 [16];
  undefined local_17c [4];
  undefined local_178 [280];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_2f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402056f2;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_178,param_1,0x118);
  local_2f8 = 0;
  local_2f0 = &PTR_LAB_140e86150;
  local_2e8 = 0;
  local_2d0 = 0;
  local_300 = param_3;
  local_2e0 = param_2;
  local_2d8 = param_4;
  FUN_140e286a0(local_2cc,local_17c,0x11c);
  local_1b0 = ZEXT816(0);
  local_1a0 = 0;
  local_190._4_4_ = uVar4;
  local_190._0_4_ = uVar3;
  local_190._8_4_ = uVar5;
  local_190._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x180,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_300,0x180);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x180);
LAB_1402056f2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140205750 name=FUN_140205750 */

longlong FUN_140205750(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined **local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined local_1cc [148];
  undefined local_138 [16];
  undefined8 local_128;
  undefined local_118 [16];
  undefined local_f4 [4];
  undefined local_f0 [144];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_1f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402058a2;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_f0,param_1,0x90);
  local_1f8 = 0;
  local_1f0 = &PTR_LAB_140e861a0;
  local_1e8 = 0;
  local_1d0 = 0;
  local_200 = param_3;
  local_1e0 = param_2;
  local_1d8 = param_4;
  FUN_140e286a0(local_1cc,local_f4,0x94);
  local_138 = ZEXT816(0);
  local_128 = 0;
  local_118._4_4_ = uVar4;
  local_118._0_4_ = uVar3;
  local_118._8_4_ = uVar5;
  local_118._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x100,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_200,0x100);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x100);
LAB_1402058a2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140205900 name=FUN_140205900 */

longlong FUN_140205900(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined **local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined local_1cc [148];
  undefined local_138 [16];
  undefined8 local_128;
  undefined local_118 [16];
  undefined local_f4 [4];
  undefined local_f0 [144];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_1f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140205a52;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_f0,param_1,0x90);
  local_1f8 = 0;
  local_1f0 = &PTR_LAB_140e861f0;
  local_1e8 = 0;
  local_1d0 = 0;
  local_200 = param_3;
  local_1e0 = param_2;
  local_1d8 = param_4;
  FUN_140e286a0(local_1cc,local_f4,0x94);
  local_138 = ZEXT816(0);
  local_128 = 0;
  local_118._4_4_ = uVar4;
  local_118._0_4_ = uVar3;
  local_118._8_4_ = uVar5;
  local_118._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x100,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_200,0x100);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x100);
LAB_140205a52:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140205ab0 name=FUN_140205ab0 */

longlong FUN_140205ab0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined **local_4f0;
  undefined8 local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined local_4cc [460];
  undefined local_300 [16];
  undefined8 local_2f0;
  undefined local_2e0 [16];
  undefined local_22c [4];
  undefined local_228 [456];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_4f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140205c02;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_228,param_1,0x1c8);
  local_4f8 = 0;
  local_4f0 = &PTR_LAB_140e86240;
  local_4e8 = 0;
  local_4d0 = 0;
  local_500 = param_3;
  local_4e0 = param_2;
  local_4d8 = param_4;
  FUN_140e286a0(local_4cc,local_22c,0x1cc);
  local_300 = ZEXT816(0);
  local_2f0 = 0;
  local_2e0._4_4_ = uVar4;
  local_2e0._0_4_ = uVar3;
  local_2e0._8_4_ = uVar5;
  local_2e0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x280,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_500,0x280);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x280);
LAB_140205c02:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140205c60 name=FUN_140205c60 */

longlong FUN_140205c60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined **local_4f0;
  undefined8 local_4e8;
  longlong local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined local_4cc [460];
  undefined local_300 [16];
  undefined8 local_2f0;
  undefined local_2e0 [16];
  undefined local_22c [4];
  undefined local_228 [456];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_4f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140205db2;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_228,param_1,0x1c8);
  local_4f8 = 0;
  local_4f0 = &PTR_LAB_140e86290;
  local_4e8 = 0;
  local_4d0 = 0;
  local_500 = param_3;
  local_4e0 = param_2;
  local_4d8 = param_4;
  FUN_140e286a0(local_4cc,local_22c,0x1cc);
  local_300 = ZEXT816(0);
  local_2f0 = 0;
  local_2e0._4_4_ = uVar4;
  local_2e0._0_4_ = uVar3;
  local_2e0._8_4_ = uVar5;
  local_2e0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x280,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_500,0x280);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x280);
LAB_140205db2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140205e10 name=FUN_140205e10 */

longlong FUN_140205e10(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined **local_af0;
  undefined8 local_ae8;
  longlong local_ae0;
  undefined8 local_ad8;
  undefined4 local_ad0;
  undefined local_acc [1284];
  undefined local_5c8 [16];
  undefined8 local_5b8;
  undefined local_5a8 [16];
  undefined local_564 [4];
  undefined local_560 [1280];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_af8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140205f62;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_560,param_1,0x500);
  local_af8 = 0;
  local_af0 = &PTR_LAB_140e862e0;
  local_ae8 = 0;
  local_ad0 = 0;
  local_b00 = param_3;
  local_ae0 = param_2;
  local_ad8 = param_4;
  FUN_140e286a0(local_acc,local_564,0x504);
  local_5c8 = ZEXT816(0);
  local_5b8 = 0;
  local_5a8._4_4_ = uVar4;
  local_5a8._0_4_ = uVar3;
  local_5a8._8_4_ = uVar5;
  local_5a8._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x580,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_b00,0x580);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x580);
LAB_140205f62:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140205fc0 name=FUN_140205fc0 */

longlong FUN_140205fc0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined **local_af0;
  undefined8 local_ae8;
  longlong local_ae0;
  undefined8 local_ad8;
  undefined4 local_ad0;
  undefined local_acc [1284];
  undefined local_5c8 [16];
  undefined8 local_5b8;
  undefined local_5a8 [16];
  undefined local_564 [4];
  undefined local_560 [1280];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_af8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140206112;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_560,param_1,0x500);
  local_af8 = 0;
  local_af0 = &PTR_LAB_140e86330;
  local_ae8 = 0;
  local_ad0 = 0;
  local_b00 = param_3;
  local_ae0 = param_2;
  local_ad8 = param_4;
  FUN_140e286a0(local_acc,local_564,0x504);
  local_5c8 = ZEXT816(0);
  local_5b8 = 0;
  local_5a8._4_4_ = uVar4;
  local_5a8._0_4_ = uVar3;
  local_5a8._8_4_ = uVar5;
  local_5a8._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x580,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_b00,0x580);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x580);
LAB_140206112:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140206170 name=FUN_140206170 */

longlong FUN_140206170(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined **local_5f0;
  undefined8 local_5e8;
  longlong local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined local_5cc [636];
  undefined local_350 [16];
  undefined8 local_340;
  undefined local_330 [16];
  undefined local_2dc [4];
  undefined local_2d8 [632];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_5f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402062c2;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_2d8,param_1,0x278);
  local_5f8 = 0;
  local_5f0 = &PTR_LAB_140e86380;
  local_5e8 = 0;
  local_5d0 = 0;
  local_600 = param_3;
  local_5e0 = param_2;
  local_5d8 = param_4;
  FUN_140e286a0(local_5cc,local_2dc,0x27c);
  local_350 = ZEXT816(0);
  local_340 = 0;
  local_330._4_4_ = uVar4;
  local_330._0_4_ = uVar3;
  local_330._8_4_ = uVar5;
  local_330._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x300,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_600,0x300);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x300);
LAB_1402062c2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140206320 name=FUN_140206320 */

longlong FUN_140206320(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined **local_5f0;
  undefined8 local_5e8;
  longlong local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined local_5cc [636];
  undefined local_350 [16];
  undefined8 local_340;
  undefined local_330 [16];
  undefined local_2dc [4];
  undefined local_2d8 [632];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_5f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140206472;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_2d8,param_1,0x278);
  local_5f8 = 0;
  local_5f0 = &PTR_LAB_140e863d0;
  local_5e8 = 0;
  local_5d0 = 0;
  local_600 = param_3;
  local_5e0 = param_2;
  local_5d8 = param_4;
  FUN_140e286a0(local_5cc,local_2dc,0x27c);
  local_350 = ZEXT816(0);
  local_340 = 0;
  local_330._4_4_ = uVar4;
  local_330._0_4_ = uVar3;
  local_330._8_4_ = uVar5;
  local_330._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x300,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_600,0x300);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x300);
LAB_140206472:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402064d0 name=FUN_1402064d0 */

longlong FUN_1402064d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined **local_6f0;
  undefined8 local_6e8;
  longlong local_6e0;
  undefined8 local_6d8;
  undefined4 local_6d0;
  undefined local_6cc [764];
  undefined local_3d0 [16];
  undefined8 local_3c0;
  undefined local_3b0 [16];
  undefined local_35c [4];
  undefined local_358 [760];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_6f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140206622;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_358,param_1,0x2f8);
  local_6f8 = 0;
  local_6f0 = &PTR_LAB_140e86420;
  local_6e8 = 0;
  local_6d0 = 0;
  local_700 = param_3;
  local_6e0 = param_2;
  local_6d8 = param_4;
  FUN_140e286a0(local_6cc,local_35c,0x2fc);
  local_3d0 = ZEXT816(0);
  local_3c0 = 0;
  local_3b0._4_4_ = uVar4;
  local_3b0._0_4_ = uVar3;
  local_3b0._8_4_ = uVar5;
  local_3b0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x380,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_700,0x380);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x380);
LAB_140206622:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140206680 name=FUN_140206680 */

longlong FUN_140206680(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined **local_6f0;
  undefined8 local_6e8;
  longlong local_6e0;
  undefined8 local_6d8;
  undefined4 local_6d0;
  undefined local_6cc [764];
  undefined local_3d0 [16];
  undefined8 local_3c0;
  undefined local_3b0 [16];
  undefined local_35c [4];
  undefined local_358 [760];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_6f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402067d2;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_358,param_1,0x2f8);
  local_6f8 = 0;
  local_6f0 = &PTR_LAB_140e86470;
  local_6e8 = 0;
  local_6d0 = 0;
  local_700 = param_3;
  local_6e0 = param_2;
  local_6d8 = param_4;
  FUN_140e286a0(local_6cc,local_35c,0x2fc);
  local_3d0 = ZEXT816(0);
  local_3c0 = 0;
  local_3b0._4_4_ = uVar4;
  local_3b0._0_4_ = uVar3;
  local_3b0._8_4_ = uVar5;
  local_3b0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x380,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_700,0x380);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x380);
LAB_1402067d2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140206830 name=FUN_140206830 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_140206830(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_1300;
  undefined8 local_12f8;
  undefined **local_12f0;
  undefined8 local_12e8;
  longlong local_12e0;
  undefined8 local_12d8;
  undefined4 local_12d0;
  undefined local_12cc [2284];
  undefined local_9e0 [16];
  undefined8 local_9d0;
  undefined local_9c0 [16];
  undefined local_94c [4];
  undefined local_948 [2280];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_12f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140206988;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_948,param_1,0x8e8);
  local_12f8 = 0;
  local_12f0 = &PTR_LAB_140e864c0;
  local_12e8 = 0;
  local_12d0 = 0;
  local_1300 = param_3;
  local_12e0 = param_2;
  local_12d8 = param_4;
  FUN_140e286a0(local_12cc,local_94c,0x8ec);
  local_9e0 = ZEXT816(0);
  local_9d0 = 0;
  local_9c0._4_4_ = uVar4;
  local_9c0._0_4_ = uVar3;
  local_9c0._8_4_ = uVar5;
  local_9c0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x980,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_1300,0x980);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x980);
LAB_140206988:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402069e0 name=FUN_1402069e0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1402069e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_1300;
  undefined8 local_12f8;
  undefined **local_12f0;
  undefined8 local_12e8;
  longlong local_12e0;
  undefined8 local_12d8;
  undefined4 local_12d0;
  undefined local_12cc [2284];
  undefined local_9e0 [16];
  undefined8 local_9d0;
  undefined local_9c0 [16];
  undefined local_94c [4];
  undefined local_948 [2280];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_12f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140206b38;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_948,param_1,0x8e8);
  local_12f8 = 0;
  local_12f0 = &PTR_LAB_140e86510;
  local_12e8 = 0;
  local_12d0 = 0;
  local_1300 = param_3;
  local_12e0 = param_2;
  local_12d8 = param_4;
  FUN_140e286a0(local_12cc,local_94c,0x8ec);
  local_9e0 = ZEXT816(0);
  local_9d0 = 0;
  local_9c0._4_4_ = uVar4;
  local_9c0._0_4_ = uVar3;
  local_9c0._8_4_ = uVar5;
  local_9c0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x980,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_1300,0x980);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x980);
LAB_140206b38:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140206b90 name=FUN_140206b90 */

longlong FUN_140206b90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_f00;
  undefined8 local_ef8;
  undefined **local_ef0;
  undefined8 local_ee8;
  longlong local_ee0;
  undefined8 local_ed8;
  undefined4 local_ed0;
  undefined local_ecc [1772];
  undefined local_7e0 [16];
  undefined8 local_7d0;
  undefined local_7c0 [16];
  undefined local_74c [4];
  undefined local_748 [1768];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_ef8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140206ce2;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_748,param_1,0x6e8);
  local_ef8 = 0;
  local_ef0 = &PTR_LAB_140e86560;
  local_ee8 = 0;
  local_ed0 = 0;
  local_f00 = param_3;
  local_ee0 = param_2;
  local_ed8 = param_4;
  FUN_140e286a0(local_ecc,local_74c,0x6ec);
  local_7e0 = ZEXT816(0);
  local_7d0 = 0;
  local_7c0._4_4_ = uVar4;
  local_7c0._0_4_ = uVar3;
  local_7c0._8_4_ = uVar5;
  local_7c0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x780,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_f00,0x780);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x780);
LAB_140206ce2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140206d40 name=FUN_140206d40 */

longlong FUN_140206d40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_f00;
  undefined8 local_ef8;
  undefined **local_ef0;
  undefined8 local_ee8;
  longlong local_ee0;
  undefined8 local_ed8;
  undefined4 local_ed0;
  undefined local_ecc [1772];
  undefined local_7e0 [16];
  undefined8 local_7d0;
  undefined local_7c0 [16];
  undefined local_74c [4];
  undefined local_748 [1768];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_ef8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140206e92;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_748,param_1,0x6e8);
  local_ef8 = 0;
  local_ef0 = &PTR_LAB_140e865b0;
  local_ee8 = 0;
  local_ed0 = 0;
  local_f00 = param_3;
  local_ee0 = param_2;
  local_ed8 = param_4;
  FUN_140e286a0(local_ecc,local_74c,0x6ec);
  local_7e0 = ZEXT816(0);
  local_7d0 = 0;
  local_7c0._4_4_ = uVar4;
  local_7c0._0_4_ = uVar3;
  local_7c0._8_4_ = uVar5;
  local_7c0._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x780,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_f00,0x780);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x780);
LAB_140206e92:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140206ef0 name=FUN_140206ef0 */

longlong FUN_140206ef0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined **local_5f0;
  undefined8 local_5e8;
  longlong local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined local_5cc [604];
  undefined local_370 [16];
  undefined8 local_360;
  undefined local_350 [16];
  undefined local_2bc [4];
  undefined local_2b8 [600];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_5f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x210);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_140207042;
    uVar3 = *(undefined4 *)(param_2 + 0x210);
    uVar4 = *(undefined4 *)(param_2 + 0x214);
    uVar5 = *(undefined4 *)(param_2 + 0x218);
    uVar6 = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140e286a0(local_2b8,param_1,600);
  local_5f8 = 0;
  local_5f0 = &PTR_LAB_140e86600;
  local_5e8 = 0;
  local_5d0 = 0;
  local_600 = param_3;
  local_5e0 = param_2;
  local_5d8 = param_4;
  FUN_140e286a0(local_5cc,local_2bc,0x25c);
  local_370 = ZEXT816(0);
  local_360 = 0;
  local_350._4_4_ = uVar4;
  local_350._0_4_ = uVar3;
  local_350._8_4_ = uVar5;
  local_350._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x300,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_600,0x300);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x300);
LAB_140207042:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=1402070a0 name=FUN_1402070a0 */

longlong FUN_1402070a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined **local_5f0;
  undefined8 local_5e8;
  longlong local_5e0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined local_5cc [604];
  undefined local_370 [16];
  undefined8 local_360;
  undefined local_350 [16];
  undefined local_2bc [4];
  undefined local_2b8 [600];
  undefined8 *local_60;
  undefined8 local_50;
  
  local_60 = &local_5f8;
  local_50 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_2 + 0x240);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_1402071f2;
    uVar3 = *(undefined4 *)(param_2 + 0x240);
    uVar4 = *(undefined4 *)(param_2 + 0x244);
    uVar5 = *(undefined4 *)(param_2 + 0x248);
    uVar6 = *(undefined4 *)(param_2 + 0x24c);
  }
  FUN_140e286a0(local_2b8,param_1,600);
  local_5f8 = 0;
  local_5f0 = &PTR_LAB_140e86650;
  local_5e8 = 0;
  local_5d0 = 0;
  local_600 = param_3;
  local_5e0 = param_2;
  local_5d8 = param_4;
  FUN_140e286a0(local_5cc,local_2bc,0x25c);
  local_370 = ZEXT816(0);
  local_360 = 0;
  local_350._4_4_ = uVar4;
  local_350._0_4_ = uVar3;
  local_350._8_4_ = uVar5;
  local_350._12_4_ = uVar6;
  FUN_140081a90();
  lVar2 = thunk_FUN_140704e30(0x300,0x80);
  if (lVar2 != 0) {
    FUN_140e286a0(lVar2,&local_600,0x300);
    return lVar2;
  }
  FUN_140e4b571(0x80,0x300);
LAB_1402071f2:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140207250 name=FUN_140207250 */

void FUN_140207250(char *param_1,ulonglong param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  char *local_50;
  undefined local_48;
  char *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 == 0xffffffffffffffff) {
    return;
  }
  LOCK();
  cVar6 = *param_1;
  if (cVar6 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar6 != '\0') {
    FUN_140e4a290(param_1);
  }
  puVar5 = PTR_DAT_14139cb28;
  if ((*(ulonglong *)PTR_DAT_14139cb28 & 0x7fffffffffffffff) == 0) {
    local_34 = 0;
    cVar6 = param_1[1];
  }
  else {
    local_34 = FUN_140e4b070();
    local_34 = local_34 ^ 1;
    cVar6 = param_1[1];
  }
  if (cVar6 != '\0') {
    local_48 = (undefined)local_34;
    local_50 = param_1;
    FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_FUN_140e84e10,
                  &PTR_s_C__Users_VssAdministrator__cargo_140e86718);
LAB_140207440:
    do {
      invalidInstructionException();
    } while( true );
  }
  if ((*(ulonglong *)(param_1 + 0x18) <= param_2) ||
     (*(char *)(*(longlong *)(param_1 + 0x10) + param_2 * 0x18) == '\0')) {
    local_40 = param_1;
    FUN_140e4b840("invalid key",0xb,&PTR_s_C__Users_VssAdministrator__cargo_140e86730);
    goto LAB_140207440;
  }
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + param_2 * 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar7 = puVar2[1];
  uVar4 = puVar2[2];
  *puVar2 = 0;
  puVar2[1] = uVar3;
  lVar8 = *(longlong *)(param_1 + 0x20) + -1;
  *(longlong *)(param_1 + 0x20) = lVar8;
  *(ulonglong *)(param_1 + 0x28) = param_2;
  if ((param_3 == '\0') || (lVar7 != 0)) {
    if (lVar7 == 0) goto LAB_140207353;
    local_40 = param_1;
    (**(code **)(lVar7 + 0x18))(uVar4);
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x18) * 0x18;
    lVar8 = *(longlong *)(param_1 + 0x10) + -0x10;
    do {
      local_40 = param_1;
      if (lVar7 == 0) goto LAB_14020734b;
      lVar7 = lVar7 + -0x18;
      piVar1 = (int *)(lVar8 + 0x10);
      lVar8 = lVar8 + 0x18;
    } while (*piVar1 != 1);
    FUN_140695980();
  }
LAB_14020734b:
  lVar8 = *(longlong *)(local_40 + 0x20);
  param_1 = local_40;
LAB_140207353:
  if (lVar8 == 0) {
    LOCK();
    *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x30) & 0xfffffffffffffffd;
    UNLOCK();
  }
  if ((((char)local_34 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = FUN_140e4b070(), cVar6 == '\0')) {
    param_1[1] = '\x01';
  }
  LOCK();
  cVar6 = *param_1;
  *param_1 = '\0';
  UNLOCK();
  if (cVar6 != '\x02') {
    return;
  }
  WakeByAddressSingle(param_1);
  return;
}


/* address=1402075c0 name=FUN_1402075c0 */

void FUN_1402075c0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  code *pcVar9;
  undefined4 *puVar10;
  code *pcVar11;
  undefined8 local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  longlong local_38;
  code **local_30;
  undefined local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_21 = 1;
  local_48 = param_2;
  local_50 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  puVar10 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 1) {
    if (*(int *)(param_1 + 0x18) == 2) {
      local_38 = *(longlong *)(param_1 + 0x28);
      if (local_38 == 0) goto LAB_1402076a0;
      local_30 = *(code ***)(param_1 + 0x30);
      local_40 = puVar10;
      if (*local_30 != (code *)0x0) {
        (**local_30)(local_38);
      }
      pcVar9 = local_30[1];
      puVar10 = local_40;
      if (pcVar9 == (code *)0x0) goto LAB_1402076a0;
      pcVar11 = local_30[2];
      lVar8 = local_38;
    }
    else {
      pcVar9 = *(code **)(param_1 + 0x20);
      if (pcVar9 == (code *)0x0) goto LAB_1402076a0;
      lVar8 = *(longlong *)(param_1 + 0x28);
      pcVar11 = (code *)0x1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_1402076a0;
    local_38 = *(longlong *)(param_1 + 0x18);
    local_30 = *(code ***)(param_1 + 0x20);
    local_40 = puVar10;
    if (*local_30 != (code *)0x0) {
      (**local_30)(local_38);
    }
    pcVar9 = local_30[1];
    puVar10 = local_40;
    if (pcVar9 == (code *)0x0) goto LAB_1402076a0;
    pcVar11 = local_30[2];
    lVar8 = local_38;
  }
  thunk_FUN_140704e90(lVar8,pcVar9,pcVar11);
LAB_1402076a0:
  *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(local_48 + 8);
  uVar1 = *local_48;
  uVar2 = local_48[1];
  uVar3 = local_48[2];
  uVar4 = local_48[3];
  uVar5 = local_48[5];
  uVar6 = local_48[6];
  uVar7 = local_48[7];
  puVar10[4] = local_48[4];
  puVar10[5] = uVar5;
  puVar10[6] = uVar6;
  puVar10[7] = uVar7;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  local_21 = 0;
  FUN_1406bd8a0(&local_50);
  return;
}


/* address=1402078f0 name=FUN_1402078f0 */

void FUN_1402078f0(longlong param_1,undefined4 *param_2)

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
  undefined8 local_30;
  code **local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_38 = param_2;
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003b20(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    local_30 = *(undefined8 *)(param_1 + 0x18);
    local_28 = *(code ***)(param_1 + 0x20);
    if (*local_28 != (code *)0x0) {
      (**local_28)(local_30);
    }
    if (local_28[1] != (code *)0x0) {
      thunk_FUN_140704e90(local_30,local_28[1],local_28[2]);
    }
  }
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
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=140207b90 name=FUN_140207b90 */

void FUN_140207b90(longlong param_1,undefined4 *param_2)

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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 0x20));
  local_30 = (undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_140002c30(param_1 + 0x30);
  }
  else if (((*(int *)(param_1 + 0x28) == 0) && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != -1))
          && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x38),lVar1,1);
  }
  uVar2 = local_28[0x11];
  uVar3 = local_28[0x12];
  uVar4 = local_28[0x13];
  local_30[0x10] = local_28[0x10];
  local_30[0x11] = uVar2;
  local_30[0x12] = uVar3;
  local_30[0x13] = uVar4;
  uVar2 = *local_28;
  uVar3 = local_28[1];
  uVar4 = local_28[2];
  uVar5 = local_28[3];
  uVar6 = local_28[4];
  uVar7 = local_28[5];
  uVar8 = local_28[6];
  uVar9 = local_28[7];
  uVar10 = local_28[8];
  uVar11 = local_28[9];
  uVar12 = local_28[10];
  uVar13 = local_28[0xb];
  uVar14 = local_28[0xd];
  uVar15 = local_28[0xe];
  uVar16 = local_28[0xf];
  local_30[0xc] = local_28[0xc];
  local_30[0xd] = uVar14;
  local_30[0xe] = uVar15;
  local_30[0xf] = uVar16;
  local_30[8] = uVar10;
  local_30[9] = uVar11;
  local_30[10] = uVar12;
  local_30[0xb] = uVar13;
  local_30[4] = uVar6;
  local_30[5] = uVar7;
  local_30[6] = uVar8;
  local_30[7] = uVar9;
  *local_30 = uVar2;
  local_30[1] = uVar3;
  local_30[2] = uVar4;
  local_30[3] = uVar5;
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=140207de0 name=FUN_140207de0 */

void FUN_140207de0(longlong param_1,undefined4 *param_2)

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
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 0x20));
  local_30 = (undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_140002b30(param_1 + 0x30);
  }
  else if (((*(int *)(param_1 + 0x28) == 0) && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != -1))
          && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x38),lVar1,1);
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
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=1402081c0 name=FUN_1402081c0 */

void FUN_1402081c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 0x20));
  local_30 = param_1 + 0x28;
  FUN_1401db690(local_30);
  FUN_140e286a0(local_30,local_28,0x2a0);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=1402084f0 name=FUN_1402084f0 */

void FUN_1402084f0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
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
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_30 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 0x20));
  uVar18 = local_30[0x14];
  uVar19 = local_30[0x15];
  uVar20 = local_30[0x16];
  uVar21 = local_30[0x17];
  uVar22 = local_30[0x10];
  uVar23 = local_30[0x11];
  uVar24 = local_30[0x12];
  uVar25 = local_30[0x13];
  uVar2 = *local_30;
  uVar3 = local_30[1];
  uVar4 = local_30[2];
  uVar5 = local_30[3];
  uVar6 = local_30[4];
  uVar7 = local_30[5];
  uVar8 = local_30[6];
  uVar9 = local_30[7];
  uVar10 = local_30[8];
  uVar11 = local_30[9];
  uVar12 = local_30[10];
  uVar13 = local_30[0xb];
  uVar14 = local_30[0xc];
  uVar15 = local_30[0xd];
  uVar16 = local_30[0xe];
  uVar17 = local_30[0xf];
  local_28 = (undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_140002de0(param_1 + 0x30);
  }
  else if ((*(int *)(param_1 + 0x28) == 0) &&
          (plVar1 = *(longlong **)(param_1 + 0x30), plVar1 != (longlong *)0x0)) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1406a8610(param_1 + 0x30);
    }
  }
  local_28[0x14] = uVar18;
  local_28[0x15] = uVar19;
  local_28[0x16] = uVar20;
  local_28[0x17] = uVar21;
  local_28[0x10] = uVar22;
  local_28[0x11] = uVar23;
  local_28[0x12] = uVar24;
  local_28[0x13] = uVar25;
  local_28[0xc] = uVar14;
  local_28[0xd] = uVar15;
  local_28[0xe] = uVar16;
  local_28[0xf] = uVar17;
  local_28[8] = uVar10;
  local_28[9] = uVar11;
  local_28[10] = uVar12;
  local_28[0xb] = uVar13;
  local_28[4] = uVar6;
  local_28[5] = uVar7;
  local_28[6] = uVar8;
  local_28[7] = uVar9;
  *local_28 = uVar2;
  local_28[1] = uVar3;
  local_28[2] = uVar4;
  local_28[3] = uVar5;
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=140208770 name=FUN_140208770 */

void FUN_140208770(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_30 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *local_30;
  uVar3 = local_30[1];
  uVar4 = local_30[2];
  uVar5 = local_30[3];
  uVar6 = local_30[4];
  uVar7 = local_30[5];
  uVar8 = local_30[6];
  uVar9 = local_30[7];
  local_28 = (undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_140002d10(param_1 + 0x30);
  }
  else if ((*(int *)(param_1 + 0x28) == 0) &&
          (plVar1 = *(longlong **)(param_1 + 0x30), plVar1 != (longlong *)0x0)) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1406a8610(param_1 + 0x30);
    }
  }
  local_28[4] = uVar6;
  local_28[5] = uVar7;
  local_28[6] = uVar8;
  local_28[7] = uVar9;
  *local_28 = uVar2;
  local_28[1] = uVar3;
  local_28[2] = uVar4;
  local_28[3] = uVar5;
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=140208990 name=FUN_140208990 */

void FUN_140208990(longlong param_1,undefined4 *param_2)

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
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 0x20));
  local_30 = (undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_140002c30(param_1 + 0x30);
  }
  else if (((*(int *)(param_1 + 0x28) == 0) && (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 != -1))
          && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x38),lVar1,1);
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
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=140208c30 name=FUN_140208c30 */

void FUN_140208c30(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 0x20));
  local_30 = (undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_140002ec0(param_1 + 0x30);
  }
  *(undefined8 *)(local_30 + 8) = *(undefined8 *)(local_28 + 8);
  uVar1 = *local_28;
  uVar2 = local_28[1];
  uVar3 = local_28[2];
  uVar4 = local_28[3];
  uVar5 = local_28[5];
  uVar6 = local_28[6];
  uVar7 = local_28[7];
  local_30[4] = local_28[4];
  local_30[5] = uVar5;
  local_30[6] = uVar6;
  local_30[7] = uVar7;
  *local_30 = uVar1;
  local_30[1] = uVar2;
  local_30[2] = uVar3;
  local_30[3] = uVar4;
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=140209030 name=FUN_140209030 */

void FUN_140209030(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_1401db770(local_30);
  FUN_140e286a0(local_30,local_28,0x9b8);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=140209110 name=FUN_140209110 */

void FUN_140209110(longlong param_1,undefined8 param_2)

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
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_140704e90(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401d1f30(param_1 + 0x18);
  }
  FUN_140e286a0(local_40,local_38,0x6f0);
  local_19 = 0;
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=140209280 name=FUN_140209280 */

void FUN_140209280(longlong param_1,undefined8 param_2)

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
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_140704e90(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_14000f4d0(param_1 + 0x18);
  }
  FUN_140e286a0(local_40,local_38,0x298);
  local_19 = 0;
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=1402093f0 name=FUN_1402093f0 */

void FUN_1402093f0(longlong param_1,undefined8 param_2)

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
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_140704e90(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_14000f8d0(param_1 + 0x18);
  }
  FUN_140e286a0(local_40,local_38,0x1a8);
  local_19 = 0;
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=140209560 name=FUN_140209560 */

void FUN_140209560(longlong param_1,undefined8 param_2)

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
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_140704e90(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_14000fa20(param_1 + 0x18);
  }
  FUN_140e286a0(local_40,local_38,0x170);
  local_19 = 0;
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=140209810 name=FUN_140209810 */

void FUN_140209810(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_1401d0ae0(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401d3850(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0x7a8);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=140209910 name=FUN_140209910 */

void FUN_140209910(longlong param_1,undefined8 param_2)

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
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_140704e90(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_140016570(param_1 + 0x18);
  }
  FUN_140e286a0(local_40,local_38,0xb8);
  local_19 = 0;
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=140209c30 name=FUN_140209c30 */

void FUN_140209c30(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_1401db970(local_30);
  FUN_140e286a0(local_30,local_28,0x858);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=140209e50 name=FUN_140209e50 */

void FUN_140209e50(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003b20(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401dd1e0(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0x338);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020a060 name=FUN_14020a060 */

void FUN_14020a060(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003350(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1400176f0(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0xc0);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020a350 name=FUN_14020a350 */

void FUN_14020a350(longlong param_1,undefined4 *param_2)

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
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003b20(param_1 + 0x18);
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
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020a5b0 name=FUN_14020a5b0 */

void FUN_14020a5b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003b20(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401dd4d0(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0x5e8);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020a7f0 name=FUN_14020a7f0 */

void FUN_14020a7f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003b20(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401dda50(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0x1f8);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020aa10 name=FUN_14020aa10 */

void FUN_14020aa10(longlong param_1,undefined4 *param_2)

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
  undefined8 local_40;
  undefined4 *local_38;
  longlong local_30;
  undefined4 *local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_40 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_38 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003b20(param_1 + 0x18);
  }
  else if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)(param_1 + 0x88) == '\x03')) {
    local_30 = param_1;
    FUN_1401d46a0(param_1 + 0x30);
    if (*(longlong *)(local_30 + 0x18) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(local_30 + 0x20),*(longlong *)(local_30 + 0x18),1);
    }
  }
  uVar1 = local_28[0x1d];
  uVar2 = local_28[0x1e];
  uVar3 = local_28[0x1f];
  local_38[0x1c] = local_28[0x1c];
  local_38[0x1d] = uVar1;
  local_38[0x1e] = uVar2;
  local_38[0x1f] = uVar3;
  uVar1 = local_28[0x19];
  uVar2 = local_28[0x1a];
  uVar3 = local_28[0x1b];
  local_38[0x18] = local_28[0x18];
  local_38[0x19] = uVar1;
  local_38[0x1a] = uVar2;
  local_38[0x1b] = uVar3;
  uVar1 = local_28[0x15];
  uVar2 = local_28[0x16];
  uVar3 = local_28[0x17];
  local_38[0x14] = local_28[0x14];
  local_38[0x15] = uVar1;
  local_38[0x16] = uVar2;
  local_38[0x17] = uVar3;
  uVar1 = local_28[0x11];
  uVar2 = local_28[0x12];
  uVar3 = local_28[0x13];
  local_38[0x10] = local_28[0x10];
  local_38[0x11] = uVar1;
  local_38[0x12] = uVar2;
  local_38[0x13] = uVar3;
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
  local_38[0xc] = local_28[0xc];
  local_38[0xd] = uVar13;
  local_38[0xe] = uVar14;
  local_38[0xf] = uVar15;
  local_38[8] = uVar9;
  local_38[9] = uVar10;
  local_38[10] = uVar11;
  local_38[0xb] = uVar12;
  local_38[4] = uVar5;
  local_38[5] = uVar6;
  local_38[6] = uVar7;
  local_38[7] = uVar8;
  *local_38 = uVar1;
  local_38[1] = uVar2;
  local_38[2] = uVar3;
  local_38[3] = uVar4;
  local_19 = 0;
  FUN_1406bd8a0(&local_40);
  return;
}


/* address=14020ad20 name=FUN_14020ad20 */

void FUN_14020ad20(longlong param_1,undefined4 *param_2)

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
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003b20(param_1 + 0x18);
  }
  else if (((*(int *)(param_1 + 0x10) == 0) && (*(char *)(param_1 + 0x30) == '\0')) &&
          (*(longlong *)(param_1 + 0x18) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x18),1);
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
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020ae50 name=FUN_14020ae50 */

void FUN_14020ae50(longlong param_1,undefined8 param_2)

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
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_140704e90(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401ddc50(param_1 + 0x18);
  }
  FUN_140e286a0(local_40,local_38,0x12c0);
  local_19 = 0;
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=14020afc0 name=FUN_14020afc0 */

void FUN_14020afc0(longlong param_1,undefined8 param_2)

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
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x28), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x30);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_140704e90(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_140018330(param_1 + 0x20);
  }
  FUN_140e286a0(local_40,local_38,0xf70);
  local_19 = 0;
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=14020b330 name=FUN_14020b330 */

void FUN_14020b330(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_1401dbc50(local_30);
  FUN_140e286a0(local_30,local_28,0xa80);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020b530 name=FUN_14020b530 */

void FUN_14020b530(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_1401d0760(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = param_1 + 0x18;
    if (*(char *)(param_1 + 0x570) == '\x03') {
      if (*(char *)(param_1 + 0x569) == '\x03') {
        local_38 = lVar1;
        local_30 = param_1;
        FUN_1401d1630(param_1 + 0x2c8);
        *(undefined *)(local_30 + 0x568) = 0;
        lVar1 = local_38;
      }
    }
    else if (*(char *)(param_1 + 0x570) != '\0') goto LAB_14020b5c8;
    FUN_1401d1420(lVar1);
  }
LAB_14020b5c8:
  FUN_140e286a0(local_40,local_28,0x568);
  local_19 = 0;
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=14020b7c0 name=FUN_14020b7c0 */

void FUN_14020b7c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003fa0(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401dddb0(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0x458);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020b9f0 name=FUN_14020b9f0 */

void FUN_14020b9f0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003fa0(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401ddef0(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0x440);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020bbf0 name=FUN_14020bbf0 */

void FUN_14020bbf0(longlong param_1,undefined4 *param_2)

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
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003520(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_140018c20(param_1 + 0x18);
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
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020be20 name=FUN_14020be20 */

void FUN_14020be20(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003520(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401de020(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0x120);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020c020 name=FUN_14020c020 */

void FUN_14020c020(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003520(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_140019d90(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0x98);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020c120 name=FUN_14020c120 */

void FUN_14020c120(longlong param_1,undefined8 param_2)

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
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (local_30 = *(longlong *)(param_1 + 0x20), local_30 != 0)) {
      local_28 = *(code ***)(param_1 + 0x28);
      if (*local_28 != (code *)0x0) {
        (**local_28)(local_30);
      }
      if (local_28[1] != (code *)0x0) {
        thunk_FUN_140704e90(local_30,local_28[1],local_28[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401df4f0(param_1 + 0x18);
  }
  FUN_140e286a0(local_40,local_38,0x1d0);
  local_19 = 0;
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=14020c3b0 name=FUN_14020c3b0 */

void FUN_14020c3b0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003420(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_1401dfe20(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0x508);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020c6a0 name=FUN_14020c6a0 */

void FUN_14020c6a0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_1401dbf80(local_30);
  FUN_140e286a0(local_30,local_28,0x280);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020c980 name=FUN_14020c980 */

void FUN_14020c980(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_1401dc0e0(local_30);
  FUN_140e286a0(local_30,local_28,0x300);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020cbb0 name=FUN_14020cbb0 */

void FUN_14020cbb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
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
  local_48 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_40 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_1401e0690(param_1 + 0x18);
    }
    goto LAB_14020cc58;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    pcVar2 = *(code **)(param_1 + 0x20);
    if (pcVar2 == (code *)0x0) goto LAB_14020cc58;
    lVar1 = *(longlong *)(param_1 + 0x28);
    pcVar3 = (code *)0x1;
  }
  else {
    local_30 = *(longlong *)(param_1 + 0x28);
    if (local_30 == 0) goto LAB_14020cc58;
    local_28 = *(code ***)(param_1 + 0x30);
    if (*local_28 != (code *)0x0) {
      (**local_28)(local_30);
    }
    pcVar2 = local_28[1];
    if (pcVar2 == (code *)0x0) goto LAB_14020cc58;
    pcVar3 = local_28[2];
    lVar1 = local_30;
  }
  thunk_FUN_140704e90(lVar1,pcVar2,pcVar3);
LAB_14020cc58:
  FUN_140e286a0(local_40,local_38,0x8f0);
  local_19 = 0;
  FUN_1406bd8a0(&local_48);
  return;
}


/* address=14020ce70 name=FUN_14020ce70 */

void FUN_14020ce70(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_140003b20(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    FUN_14001b200(param_1 + 0x18);
  }
  FUN_140e286a0(local_30,local_28,0x6f0);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020d180 name=FUN_14020d180 */

void FUN_14020d180(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_1406add00(*(undefined8 *)(param_1 + 8));
  local_30 = param_1 + 0x10;
  FUN_1401dc320(local_30);
  FUN_140e286a0(local_30,local_28,0x260);
  local_19 = 0;
  FUN_1406bd8a0(&local_38);
  return;
}


/* address=14020d260 name=FUN_14020d260 */

undefined4 * FUN_14020d260(undefined4 *param_1,ushort **param_2,ushort param_3)

{
  undefined4 uVar1;
  undefined uVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 in_R11;
  undefined8 uVar13;
  undefined2 uVar14;
  undefined local_1a0 [184];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  ushort **local_90;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  longlong local_78;
  longlong local_70;
  ushort local_64;
  ushort local_62;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  puVar5 = *param_2;
  uVar2 = *(undefined *)(puVar5 + 0x24);
  uVar3 = *puVar5;
  uStack_bc = (uint)uVar3;
  uVar7 = local_62;
  if (uVar3 == 1) {
    lVar10 = *(longlong *)(puVar5 + 0xc);
    if (lVar10 < 0) {
      uVar13 = 0;
LAB_14020d2b1:
      FUN_140e4b58b(uVar13,lVar10);
      do {
        invalidInstructionException();
      } while( true );
    }
    uVar12 = CONCAT62((int6)((ulonglong)in_R11 >> 0x10),1);
    if (lVar10 == 0) {
      lVar10 = 0;
      uVar3 = puVar5[0x14];
      uStack_e0 = lVar10;
      local_d8 = 1;
    }
    else {
      uVar6 = *(undefined8 *)(puVar5 + 8);
      local_62 = uVar3;
      FUN_140081a90();
      uVar13 = 1;
      lVar8 = thunk_FUN_140704e30(lVar10,1);
      if (lVar8 == 0) goto LAB_14020d2b1;
      lVar11 = lVar10;
      FUN_140e286a0(lVar8,uVar6);
      param_3 = (ushort)lVar11;
      uVar12 = CONCAT62((int6)(uVar12 >> 0x10),1);
      uStack_bc = (uint)local_62;
      uVar3 = puVar5[0x14];
      uStack_e0 = lVar10;
      local_d8 = lVar8;
      uVar7 = local_62;
    }
  }
  else {
    local_80 = *(undefined4 *)(puVar5 + 2);
    lVar10 = *(longlong *)(puVar5 + 0xc);
    local_98 = (ulonglong)*(uint *)(puVar5 + 0x10);
    local_64 = puVar5[1];
    uVar12 = 0;
    uVar3 = puVar5[0x14];
    uStack_e0 = *(longlong *)(puVar5 + 4);
    local_d8 = *(longlong *)(puVar5 + 8);
  }
  if (uVar3 == 1) {
    uVar9 = *(ulonglong *)(puVar5 + 0x20);
    local_62 = (ushort)uStack_bc;
    if ((longlong)uVar9 < 0) {
      uVar13 = 0;
      local_78 = uStack_e0;
      local_70 = local_d8;
LAB_14020d392:
      FUN_140e4b58b(uVar13,uVar9);
      do {
        invalidInstructionException();
      } while( true );
    }
    uVar14 = 1;
    if (uVar9 == 0) {
      lVar8 = 1;
      local_b8 = 0;
      uVar9 = 0;
      local_62 = uVar7;
    }
    else {
      local_7c = (uint)uVar12;
      local_88 = *(undefined8 *)(puVar5 + 0x1c);
      local_90 = param_2;
      local_78 = uStack_e0;
      local_70 = local_d8;
      FUN_140081a90();
      uVar13 = 1;
      lVar8 = thunk_FUN_140704e30(uVar9,1);
      if (lVar8 == 0) goto LAB_14020d392;
      uVar12 = uVar9;
      uStack_bc = FUN_140e286a0(lVar8,local_88);
      param_3 = (ushort)uVar12;
      uVar12 = (ulonglong)local_7c;
      param_2 = local_90;
      local_b8 = uVar9;
      local_d8 = local_70;
      uStack_e0 = local_78;
    }
  }
  else {
    uStack_bc = *(uint *)(puVar5 + 0x16);
    local_b8 = *(ulonglong *)(puVar5 + 0x18);
    lVar8 = *(longlong *)(puVar5 + 0x1c);
    uVar9 = (ulonglong)*(uint *)(puVar5 + 0x20);
    param_3 = puVar5[0x15];
    uVar14 = 0;
    local_62 = uVar7;
  }
  uStack_a0 = CONCAT31(uStack_a0._1_3_,uVar2);
  local_e8 = CONCAT22(local_64,(short)uVar12);
  uStack_e4 = local_80;
  local_c8 = local_98;
  uStack_c0 = CONCAT22(param_3,uVar14);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uStack_d0 = lVar10;
  uStack_b0 = lVar8;
  local_a8 = uVar9;
  FUN_1402110a0(local_1a0,param_2[1]);
  param_1[0x10] = (undefined4)local_a8;
  param_1[0x11] = local_a8._4_4_;
  param_1[0x12] = uStack_a0;
  param_1[0x13] = uStack_9c;
  param_1[0xc] = (undefined4)local_b8;
  param_1[0xd] = local_b8._4_4_;
  param_1[0xe] = (undefined4)uStack_b0;
  param_1[0xf] = uStack_b0._4_4_;
  param_1[8] = (undefined4)local_c8;
  param_1[9] = local_c8._4_4_;
  param_1[10] = uStack_c0;
  param_1[0xb] = uStack_bc;
  param_1[4] = (undefined4)local_d8;
  param_1[5] = local_d8._4_4_;
  param_1[6] = (undefined4)uStack_d0;
  param_1[7] = uStack_d0._4_4_;
  *param_1 = local_e8;
  param_1[1] = uStack_e4;
  param_1[2] = (undefined4)uStack_e0;
  param_1[3] = uStack_e0._4_4_;
  param_1[0x42] = uVar1;
  param_1[0x43] = uVar4;
  FUN_140e286a0(param_1 + 0x14,local_1a0,0xb8);
  return param_1;
}


/* address=14020df80 name=FUN_14020df80 */

undefined8 * FUN_14020df80(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  while( true ) {
    FUN_14030c740(&local_68,param_2,param_3);
    uVar5 = local_58;
    if (local_68 == -1) {
      param_1[2] = *(undefined8 *)(param_2 + 0x50);
      uVar2 = *(undefined4 *)(param_2 + 0x44);
      uVar3 = *(undefined4 *)(param_2 + 0x48);
      uVar4 = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 8;
      *(undefined8 *)(param_2 + 0x50) = 0;
      return param_1;
    }
    if (local_68 == -2) break;
    lVar6 = *(longlong *)(param_2 + 0x50);
    lVar7 = local_68;
    uVar8 = local_60;
    if (*(longlong *)(param_2 + 0x40) == lVar6) {
      local_50 = local_60;
      local_48 = local_68;
      FUN_140e2e4d0((undefined4 *)(param_2 + 0x40),lVar6,1,8,0x18);
      lVar6 = *(longlong *)(param_2 + 0x50);
      lVar7 = local_48;
      uVar8 = local_50;
    }
    lVar1 = *(longlong *)(param_2 + 0x48);
    *(longlong *)(lVar1 + lVar6 * 0x18) = lVar7;
    *(undefined8 *)(lVar1 + 8 + lVar6 * 0x18) = uVar8;
    *(undefined8 *)(lVar1 + 0x10 + lVar6 * 0x18) = uVar5;
    *(longlong *)(param_2 + 0x50) = lVar6 + 1;
  }
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


/* address=14020e0d0 name=FUN_14020e0d0 */

undefined8 * FUN_14020e0d0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  while( true ) {
    FUN_14030c970(&local_68,param_2,param_3);
    uVar5 = local_58;
    if (local_68 == -1) {
      param_1[2] = *(undefined8 *)(param_2 + 0x50);
      uVar2 = *(undefined4 *)(param_2 + 0x44);
      uVar3 = *(undefined4 *)(param_2 + 0x48);
      uVar4 = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 8;
      *(undefined8 *)(param_2 + 0x50) = 0;
      return param_1;
    }
    if (local_68 == -2) break;
    lVar6 = *(longlong *)(param_2 + 0x50);
    lVar7 = local_68;
    uVar8 = local_60;
    if (*(longlong *)(param_2 + 0x40) == lVar6) {
      local_50 = local_60;
      local_48 = local_68;
      FUN_140e2e4d0((undefined4 *)(param_2 + 0x40),lVar6,1,8,0x18);
      lVar6 = *(longlong *)(param_2 + 0x50);
      lVar7 = local_48;
      uVar8 = local_50;
    }
    lVar1 = *(longlong *)(param_2 + 0x48);
    *(longlong *)(lVar1 + lVar6 * 0x18) = lVar7;
    *(undefined8 *)(lVar1 + 8 + lVar6 * 0x18) = uVar8;
    *(undefined8 *)(lVar1 + 0x10 + lVar6 * 0x18) = uVar5;
    *(longlong *)(param_2 + 0x50) = lVar6 + 1;
  }
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


/* address=14020e220 name=FUN_14020e220 */

void FUN_14020e220(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  plVar3 = (longlong *)thunk_FUN_140680170(0);
  if (*plVar3 == 1) {
    local_48 = (longlong *)plVar3[1];
    uStack_40 = *(undefined4 *)(plVar3 + 2);
    uStack_3c = *(undefined4 *)((longlong)plVar3 + 0x14);
    local_38 = *(undefined4 *)(plVar3 + 3);
    uStack_34 = *(undefined4 *)((longlong)plVar3 + 0x1c);
    uStack_30 = *(undefined4 *)(plVar3 + 4);
    uStack_2c = *(undefined4 *)((longlong)plVar3 + 0x24);
  }
  else {
    FUN_140e44bf0(&local_48,plVar3);
  }
  lVar2 = *(longlong *)(lVar1 + CONCAT44(uStack_3c,uStack_40) * 8);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x20 + CONCAT44(uStack_2c,uStack_30) * 0x28) == '\0')) {
    local_68 = ZEXT816(0);
    local_58 = 8;
    local_50 = 0;
    local_20 = (longlong *)FUN_140e2f260(lVar1,&local_48,local_68);
    lVar1 = *local_20;
  }
  else {
    local_20 = (longlong *)(lVar2 + CONCAT44(uStack_2c,uStack_30) * 0x28);
    lVar1 = *local_20;
  }
  if (lVar1 == 0) {
    *local_20 = -1;
    lVar1 = local_20[3];
    if (lVar1 != 0) {
      local_20[3] = lVar1 + -1;
      local_48 = *(longlong **)(local_20[2] + -8 + lVar1 * 8);
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 == 0) {
        FUN_140675f90(&local_48);
      }
    }
    *local_20 = *local_20 + 1;
    return;
  }
  FUN_140e4b7c0(&PTR_s_C__Users_VssAdministrator__cargo_140e86a48);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=14020e340 name=FUN_14020e340 */

void FUN_14020e340(longlong *param_1)

{
  longlong **pplVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar4 = *param_1;
  plVar3 = (longlong *)thunk_FUN_140680170(0);
  if (*plVar3 == 1) {
    local_48 = *(undefined4 *)(plVar3 + 1);
    uStack_44 = *(undefined4 *)((longlong)plVar3 + 0xc);
    uStack_40 = *(undefined4 *)(plVar3 + 2);
    uStack_3c = *(undefined4 *)((longlong)plVar3 + 0x14);
    local_38 = plVar3[3];
    uStack_30 = *(undefined4 *)(plVar3 + 4);
    uStack_2c = *(undefined4 *)((longlong)plVar3 + 0x24);
  }
  else {
    FUN_140e44bf0(&local_48,plVar3);
  }
  lVar2 = *(longlong *)(lVar4 + CONCAT44(uStack_3c,uStack_40) * 8);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x20 + CONCAT44(uStack_2c,uStack_30) * 0x28) == '\0')) {
    local_68 = ZEXT816(0);
    local_58 = 8;
    local_50 = 0;
    local_20 = (longlong *)FUN_140e2f3b0(lVar4,&local_48,local_68);
    lVar4 = *local_20;
  }
  else {
    local_20 = (longlong *)(lVar2 + CONCAT44(uStack_2c,uStack_30) * 0x28);
    lVar4 = *local_20;
  }
  if (lVar4 == 0) {
    *local_20 = -1;
    if (local_20[3] != 0) {
      lVar4 = local_20[3] + -1;
      local_20[3] = lVar4;
      pplVar1 = (longlong **)(local_20[2] + lVar4 * 0x18);
      local_48 = *(undefined4 *)pplVar1;
      uStack_44 = *(undefined4 *)((longlong)pplVar1 + 4);
      plVar3 = *pplVar1;
      uStack_40 = *(undefined4 *)(pplVar1 + 1);
      uStack_3c = *(undefined4 *)((longlong)pplVar1 + 0xc);
      local_38 = *(undefined8 *)(local_20[2] + 0x10 + lVar4 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_140675cd0(&local_48);
        }
        plVar3 = (longlong *)CONCAT44(uStack_3c,uStack_40);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_1403fd050(&uStack_40);
        }
      }
    }
    *local_20 = *local_20 + 1;
    return;
  }
  FUN_140e4b7c0(&PTR_s_C__Users_VssAdministrator__cargo_140e86a48);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=14020e4c0 name=FUN_14020e4c0 */

void FUN_14020e4c0(longlong *param_1)

{
  longlong lVar1;
  longlong **pplVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  plVar4 = (longlong *)thunk_FUN_140680170(0);
  if (*plVar4 == 1) {
    local_48 = *(undefined4 *)(plVar4 + 1);
    uStack_44 = *(undefined4 *)((longlong)plVar4 + 0xc);
    uStack_40 = *(undefined4 *)(plVar4 + 2);
    uStack_3c = *(undefined4 *)((longlong)plVar4 + 0x14);
    local_38 = plVar4[3];
    uStack_30 = *(undefined4 *)(plVar4 + 4);
    uStack_2c = *(undefined4 *)((longlong)plVar4 + 0x24);
  }
  else {
    FUN_140e44bf0(&local_48,plVar4);
  }
  lVar5 = *(longlong *)(lVar1 + CONCAT44(uStack_3c,uStack_40) * 8);
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x20 + CONCAT44(uStack_2c,uStack_30) * 0x28) == '\0')) {
    local_68 = ZEXT816(0);
    local_58 = 8;
    local_50 = 0;
    local_20 = (longlong *)FUN_140e2f590(lVar1,&local_48,local_68);
    lVar1 = *local_20;
  }
  else {
    local_20 = (longlong *)(lVar5 + CONCAT44(uStack_2c,uStack_30) * 0x28);
    lVar1 = *local_20;
  }
  if (lVar1 == 0) {
    *local_20 = -1;
    if (local_20[3] != 0) {
      lVar5 = local_20[3] + -1;
      local_20[3] = lVar5;
      plVar4 = (longlong *)(local_20[2] + lVar5 * 0x18);
      local_48 = *(undefined4 *)plVar4;
      uStack_44 = *(undefined4 *)((longlong)plVar4 + 4);
      lVar1 = *plVar4;
      pplVar2 = (longlong **)(plVar4 + 1);
      uStack_40 = *(undefined4 *)pplVar2;
      uStack_3c = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar3 = *pplVar2;
      plVar4 = *pplVar2;
      local_38 = *(undefined8 *)(local_20[2] + 0x10 + lVar5 * 0x18);
      if (lVar1 != -1) {
        if (lVar1 == 1) {
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            FUN_140675db0(&uStack_40);
          }
        }
        else if (lVar1 == 0) {
          LOCK();
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            FUN_1406766b0();
          }
        }
      }
    }
    *local_20 = *local_20 + 1;
    return;
  }
  FUN_140e4b7c0(&PTR_s_C__Users_VssAdministrator__cargo_140e86a48);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=14020ff10 name=FUN_14020ff10 */

ulonglong FUN_14020ff10(longlong param_1,longlong param_2,longlong param_3)

{
  size_t _Size;
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    lVar3 = 0x18;
    do {
      if (((*(longlong *)(param_1 + lVar3) != *(longlong *)(param_2 + lVar3)) ||
          (_Size = *(size_t *)(param_1 + -8 + lVar3), _Size != *(size_t *)(param_2 + -8 + lVar3)))
         || (iVar1 = memcmp(*(void **)(param_1 + -0x10 + lVar3),*(void **)(param_2 + -0x10 + lVar3),
                            _Size), iVar1 != 0)) {
        uVar2 = 0;
        break;
      }
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar2 & 0xffffffff;
}


/* address=14020ffd0 name=FUN_14020ffd0 */

void FUN_14020ffd0(ulonglong **param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong local_30;
  
  puVar1 = param_1[4];
  if (puVar1 != (ulonglong *)0x0) {
    puVar2 = param_1[2];
    if (CARRY8((ulonglong)puVar2,(ulonglong)puVar1)) {
      FUN_140e4bb30(puVar2,(longlong)puVar2 + (longlong)puVar1,(longlong)puVar2 + (longlong)puVar1,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_140ea9110);
      do {
        invalidInstructionException();
      } while( true );
    }
    puVar4 = *param_1;
    uVar5 = *puVar4;
    uVar7 = uVar5;
    if (puVar4[2] + (longlong)puVar2 < uVar5) {
      uVar7 = 0;
    }
    uVar3 = puVar4[1];
    lVar6 = (puVar4[2] + (longlong)puVar2) - uVar7;
    puVar4 = (ulonglong *)(uVar5 - lVar6);
    uVar7 = lVar6 + (longlong)puVar1;
    if (puVar4 < puVar1) {
      uVar7 = uVar5;
    }
    local_30 = 0;
    uVar5 = (longlong)puVar1 - (longlong)puVar4;
    if (puVar1 < puVar4) {
      uVar5 = 0;
    }
    lVar8 = uVar7 - lVar6;
    param_1[2] = (ulonglong *)((longlong)puVar2 + lVar8);
    param_1[4] = (ulonglong *)((longlong)puVar1 - lVar8);
    lVar6 = uVar3 + lVar6 * 0x48 + 0x18;
    while (lVar8 != local_30) {
      local_30 = local_30 + 1;
      (**(code **)(*(longlong *)(lVar6 + -0x18) + 0x20))
                (lVar6,*(undefined8 *)(lVar6 + -0x10),*(undefined8 *)(lVar6 + -8));
      lVar6 = lVar6 + 0x48;
    }
    param_1[4] = (ulonglong *)0x0;
    local_30 = 0;
    lVar6 = uVar3 + 0x18;
    while (uVar5 != local_30) {
      local_30 = local_30 + 1;
      (**(code **)(*(longlong *)(lVar6 + -0x18) + 0x20))
                (lVar6,*(undefined8 *)(lVar6 + -0x10),*(undefined8 *)(lVar6 + -8));
      lVar6 = lVar6 + 0x48;
    }
  }
  FUN_1401dc5e0(param_1);
  return;
}


/* address=140210210 name=FUN_140210210 */

void FUN_140210210(ulonglong **param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong **pplVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  
  puVar1 = param_1[4];
  if (puVar1 != (ulonglong *)0x0) {
    puVar2 = param_1[2];
    if (CARRY8((ulonglong)puVar2,(ulonglong)puVar1)) {
      FUN_140e4bb30(puVar2,(longlong)puVar2 + (longlong)puVar1,(longlong)puVar2 + (longlong)puVar1,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_140ea9110);
      do {
        invalidInstructionException();
      } while( true );
    }
    puVar3 = *param_1;
    uVar4 = *puVar3;
    uVar10 = uVar4;
    if (puVar3[2] + (longlong)puVar2 < uVar4) {
      uVar10 = 0;
    }
    pplVar8 = (longlong **)puVar3[1];
    lVar6 = (puVar3[2] + (longlong)puVar2) - uVar10;
    uVar10 = lVar6 + (longlong)puVar1;
    if ((ulonglong *)(uVar4 - lVar6) < puVar1) {
      uVar10 = uVar4;
    }
    lVar11 = uVar10 - lVar6;
    param_1[2] = (ulonglong *)(lVar11 + (longlong)puVar2);
    param_1[4] = (ulonglong *)((longlong)puVar1 - (uVar10 - lVar6));
    if (lVar11 != 0) {
      pplVar9 = pplVar8 + lVar6 * 7;
      lVar7 = 1;
      do {
        plVar5 = *pplVar9;
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          FUN_140455e60(pplVar9);
        }
        pplVar9 = pplVar9 + 7;
        bVar12 = lVar7 != lVar11;
        lVar7 = lVar7 + 1;
      } while (bVar12);
    }
    param_1[4] = (ulonglong *)0x0;
    if ((ulonglong *)(uVar4 - lVar6) < puVar1) {
      lVar6 = 1;
      do {
        plVar5 = *pplVar8;
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          FUN_140455e60(pplVar8);
        }
        lVar7 = (lVar11 - (longlong)puVar1) + lVar6;
        lVar6 = lVar6 + 1;
        pplVar8 = pplVar8 + 7;
      } while (lVar7 != 0);
    }
  }
  FUN_1401dc800(param_1);
  return;
}


/* address=1402104a0 name=FUN_1402104a0 */

void FUN_1402104a0(ulonglong **param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong local_30;
  
  puVar1 = param_1[4];
  if (puVar1 != (ulonglong *)0x0) {
    puVar2 = param_1[2];
    if (CARRY8((ulonglong)puVar2,(ulonglong)puVar1)) {
      FUN_140e4bb30(puVar2,(longlong)puVar2 + (longlong)puVar1,(longlong)puVar2 + (longlong)puVar1,
                    &PTR_s__rustc_48a229ceaefd4985c50990b14_140ea9110);
      do {
        invalidInstructionException();
      } while( true );
    }
    puVar5 = *param_1;
    uVar6 = *puVar5;
    uVar3 = puVar5[1];
    uVar4 = uVar6;
    if (puVar5[2] + (longlong)puVar2 < uVar6) {
      uVar4 = 0;
    }
    lVar7 = (puVar5[2] + (longlong)puVar2) - uVar4;
    puVar5 = (ulonglong *)(uVar6 - lVar7);
    uVar4 = lVar7 + (longlong)puVar1;
    if (puVar5 < puVar1) {
      uVar4 = uVar6;
    }
    local_30 = 0;
    uVar6 = (longlong)puVar1 - (longlong)puVar5;
    if (puVar1 < puVar5) {
      uVar6 = 0;
    }
    lVar8 = uVar4 - lVar7;
    param_1[2] = (ulonglong *)((longlong)puVar2 + lVar8);
    param_1[4] = (ulonglong *)((longlong)puVar1 - lVar8);
    lVar7 = lVar7 * 0x30 + uVar3;
    while (lVar8 != local_30) {
      local_30 = local_30 + 1;
      FUN_1401e33c0(lVar7);
      lVar7 = lVar7 + 0x30;
    }
    param_1[4] = (ulonglong *)0x0;
    local_30 = 0;
    while (uVar6 != local_30) {
      local_30 = local_30 + 1;
      FUN_1401e33c0(uVar3);
      uVar3 = uVar3 + 0x30;
    }
  }
  FUN_1401dca50(param_1);
  return;
}


/* address=140210830 name=FUN_140210830 */

void FUN_140210830(longlong *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined local_73;
  undefined local_72;
  undefined local_71;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined uStack_5c;
  byte bStack_5b;
  undefined2 uStack_5a;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  uVar1 = *param_2;
  lVar9 = 9;
  uVar8 = uVar1;
  if ((uVar1 * -0x33333333 >> 1 | (uint)((uVar1 * -0x33333333 & 1) != 0) << 0x1f) < 0x1999999a) {
    uVar3 = (uVar1 / 10) * -0x33333333;
    lVar9 = 8;
    uVar8 = uVar1 / 10;
    if ((uVar3 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f) < 0x1999999a) {
      uVar3 = (uVar1 / 100) * -0x33333333;
      lVar9 = 7;
      uVar8 = uVar1 / 100;
      if ((uVar3 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f) < 0x1999999a) {
        uVar3 = (uVar1 / 1000) * -0x33333333;
        lVar9 = 6;
        uVar8 = uVar1 / 1000;
        if ((uVar3 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f) < 0x1999999a) {
          uVar3 = (uVar1 / 10000) * -0x33333333;
          lVar9 = 5;
          uVar8 = uVar1 / 10000;
          if ((uVar3 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f) < 0x1999999a) {
            uVar3 = ((uVar1 >> 5) / 0xc35) * -0x3333;
            lVar9 = 4;
            uVar8 = (uVar1 >> 5) / 0xc35;
            if ((ushort)((ushort)uVar3 >> 1 | (ushort)((uVar3 & 1) != 0) << 0xf) < 0x199a) {
              uVar3 = (uVar1 / 1000000) * -0x3333;
              lVar9 = 3;
              uVar8 = uVar1 / 1000000;
              if ((ushort)((ushort)uVar3 >> 1 | (ushort)((uVar3 & 1) != 0) << 0xf) < 0x199a) {
                cVar2 = (char)(uVar1 / 10000000);
                lVar9 = 2;
                uVar8 = uVar1 / 10000000;
                if ((byte)((byte)(cVar2 * -0x33) >> 1 | cVar2 * -0x80) < 0x1a) {
                  lVar9 = 1;
                  uVar8 = uVar1 / 100000000;
                }
              }
            }
          }
        }
      }
    }
  }
  local_73 = *(undefined *)((longlong)param_2 + 6);
  local_60 = 0x20;
  uStack_5c = 0xff;
  bStack_5b = 0;
  lVar4 = FUN_140681730(&local_73,&local_70);
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  local_72 = *(undefined *)((longlong)param_2 + 5);
  local_58 = 2;
  local_48 = CONCAT44((uint)(CONCAT26(uStack_5a,CONCAT15(bStack_5b,CONCAT14(uStack_5c,local_60))) >>
                            0x20) | 0x1000,0x30);
  uVar5 = FUN_140681730(&local_72,&local_58);
  if (uVar5 < 3) {
    uVar5 = 2;
  }
  bStack_5b = bStack_5b | 0x10;
  local_71 = *(undefined *)(param_2 + 1);
  local_70 = 2;
  local_60 = 0x30;
  uVar6 = FUN_140681730(&local_71,&local_70);
  uVar7 = 2;
  if (2 < uVar6) {
    uVar7 = uVar6;
  }
  *param_1 = lVar4 + lVar9 + uVar5 + uVar7 + 3;
  *(uint *)(param_1 + 1) = uVar8;
  *(char *)((longlong)param_1 + 0xc) = (char)lVar9;
  return;
}


/* address=140210cc0 name=FUN_140210cc0 */

undefined8 * FUN_140210cc0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char local_70 [8];
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(char *)(param_2 + 0x64a) == '\0') {
    lVar1 = param_2 + 0x628;
    lVar2 = param_2 + 0x5e0;
    if (*(char *)(param_2 + 0x649) == '\x01') {
      if (*(char *)(param_2 + 0x648) != '\0') {
LAB_140210d1b:
        FUN_140694b80(&local_98,lVar2,lVar1);
        local_68 = CONCAT44(uStack_8c,uStack_90);
        if (local_98 != 1) {
          local_38 = local_78;
          iVar3 = (int)local_88;
          uVar4 = local_88._4_4_;
          local_48 = (int)local_88;
          uStack_44 = local_88._4_4_;
          uStack_40 = uStack_80;
          uStack_3c = uStack_7c;
          if (local_68 != 0) {
            local_88 = local_78;
            local_98 = iVar3;
            uStack_94 = uVar4;
            uStack_90 = uStack_80;
            uStack_8c = uStack_7c;
            uVar7 = 1;
LAB_140210db3:
            *param_1 = uVar7;
            param_1[1] = local_68;
            *(int *)(param_1 + 2) = local_98;
            *(undefined4 *)((longlong)param_1 + 0x14) = uStack_94;
            *(undefined4 *)(param_1 + 3) = uStack_90;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_8c;
            param_1[4] = local_88;
            return param_1;
          }
          if (*(longlong *)(param_2 + 0x630) == 0) {
            *(undefined *)(param_2 + 0x649) = 0;
            uVar7 = 0;
            goto LAB_140210db3;
          }
          local_68 = FUN_1406fe7a0(0x29,"bytes remaining on stream",0x19);
        }
        *(undefined *)(param_2 + 0x64a) = 1;
LAB_140210d63:
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = local_68;
        return param_1;
      }
      FUN_140694b80(local_70,lVar2,lVar1);
      if (local_70[0] != '\0') {
LAB_140210d57:
        *(undefined *)(param_2 + 0x64a) = 1;
        goto LAB_140210d63;
      }
      if (local_68 != 0) {
LAB_140210ddb:
        param_1[4] = local_50;
        *(undefined4 *)(param_1 + 2) = local_60;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_5c;
        *(undefined4 *)(param_1 + 3) = uStack_58;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_54;
        *param_1 = 1;
        param_1[1] = local_68;
        return param_1;
      }
      *(undefined *)(param_2 + 0x649) = 0;
    }
    if (*(longlong *)(param_2 + 0x638) == *(longlong *)(param_2 + 0x630)) {
      FUN_1406ca0d0(lVar1,1,1);
    }
    lVar8 = param_3;
    lVar6 = FUN_140361ff0(param_2,param_3,lVar1);
    if (lVar6 == 2) {
LAB_140210f4f:
      *param_1 = 2;
      return param_1;
    }
    if (lVar6 != 0) {
LAB_140210f58:
      *(undefined *)(param_2 + 0x64a) = 1;
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = lVar8;
      return param_1;
    }
    if (lVar8 == 0) {
      cVar5 = '\x01';
      if (*(char *)(param_2 + 0x648) != '\0') goto LAB_140210ce8;
    }
    else {
      cVar5 = '\0';
    }
    *(char *)(param_2 + 0x648) = cVar5;
    *(undefined *)(param_2 + 0x649) = 1;
    if (*(char *)(param_2 + 0x64a) == '\0') {
      do {
        if (cVar5 != '\0') goto LAB_140210d1b;
        FUN_140694b80(local_70,lVar2,lVar1);
        if (local_70[0] != '\0') goto LAB_140210d57;
        if (local_68 != 0) goto LAB_140210ddb;
        *(undefined *)(param_2 + 0x649) = 0;
        if (*(longlong *)(param_2 + 0x638) == *(longlong *)(param_2 + 0x630)) {
          FUN_1406ca0d0(lVar1,1,1);
        }
        lVar8 = param_3;
        lVar6 = FUN_140361ff0(param_2,param_3,lVar1);
        if (lVar6 != 0) {
          if (lVar6 == 2) goto LAB_140210f4f;
          goto LAB_140210f58;
        }
        if (lVar8 == 0) {
          cVar5 = '\x01';
          if (*(char *)(param_2 + 0x648) == '\x01') goto LAB_140210ce8;
        }
        else {
          cVar5 = '\0';
        }
        *(char *)(param_2 + 0x648) = cVar5;
        *(undefined *)(param_2 + 0x649) = 1;
      } while (*(char *)(param_2 + 0x64a) == '\0');
    }
  }
  *(undefined2 *)(param_2 + 0x649) = 0;
LAB_140210ce8:
  *param_1 = 0;
  return param_1;
}


/* address=1402110a0 name=FUN_1402110a0 */

void FUN_1402110a0(undefined4 *param_1,short *param_2)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  short sVar17;
  short *psVar18;
  longlong lVar19;
  longlong lVar20;
  undefined2 uVar21;
  ulonglong in_R11;
  ulonglong uVar22;
  undefined2 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  undefined4 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_68;
  ushort local_4e;
  longlong lVar16;
  
  uVar1 = *(undefined *)(param_2 + 0x24);
  puVar15 = param_1;
  psVar18 = param_2;
  if (*param_2 == 1) {
    lVar20 = *(longlong *)(param_2 + 0xc);
    if (lVar20 < 0) {
      uVar27 = 0;
LAB_1402110e5:
      FUN_140e4b58b(uVar27,lVar20);
      do {
        invalidInstructionException();
      } while( true );
    }
    uVar21 = 1;
    if (lVar20 != 0) {
      psVar18 = *(short **)(param_2 + 8);
      FUN_140081a90();
      uVar27 = 1;
      puVar8 = (undefined4 *)thunk_FUN_140704e30(lVar20,1);
      if (puVar8 == (undefined4 *)0x0) goto LAB_1402110e5;
      puVar15 = puVar8;
      FUN_140e286a0(puVar8,psVar18,lVar20);
      uVar21 = 1;
      sVar17 = param_2[0x14];
      lVar19 = lVar20;
      goto joined_r0x000140211118;
    }
    puVar8 = (undefined4 *)0x1;
    lVar19 = 0;
    lVar20 = 0;
    if (param_2[0x14] != 1) goto LAB_140211222;
LAB_140211172:
    sVar17 = (short)psVar18;
    uVar14 = SUB84(puVar15,0);
    uVar13 = *(ulonglong *)(param_2 + 0x20);
    if ((longlong)uVar13 < 0) {
      uVar27 = 0;
LAB_14021118b:
      FUN_140e4b58b(uVar27,uVar13);
      goto LAB_140211354;
    }
    uVar23 = 1;
    if (uVar13 == 0) {
      lVar9 = 1;
      uVar25 = 0;
      uVar13 = 0;
    }
    else {
      uVar24 = *(undefined8 *)(param_2 + 0x1c);
      FUN_140081a90();
      uVar27 = 1;
      lVar9 = thunk_FUN_140704e30(uVar13,1);
      if (lVar9 == 0) goto LAB_14021118b;
      lVar16 = lVar9;
      FUN_140e286a0(lVar9,uVar24,uVar13);
      sVar17 = (short)uVar24;
      uVar14 = (undefined4)lVar16;
      uVar25 = uVar13;
    }
  }
  else {
    local_68 = *(undefined4 *)(param_2 + 2);
    lVar20 = *(longlong *)(param_2 + 4);
    puVar8 = *(undefined4 **)(param_2 + 8);
    in_R11 = (ulonglong)*(uint *)(param_2 + 0x10);
    local_4e = param_2[1];
    uVar21 = 0;
    sVar17 = param_2[0x14];
    lVar19 = *(longlong *)(param_2 + 0xc);
joined_r0x000140211118:
    if (sVar17 == 1) goto LAB_140211172;
LAB_140211222:
    uVar14 = *(undefined4 *)(param_2 + 0x16);
    uVar13 = *(ulonglong *)(param_2 + 0x18);
    lVar9 = *(longlong *)(param_2 + 0x1c);
    uVar25 = (ulonglong)*(uint *)(param_2 + 0x20);
    sVar17 = param_2[0x15];
    uVar23 = 0;
  }
  uStack_80 = CONCAT31(uStack_80._1_3_,uVar1);
  local_c8 = CONCAT22(local_4e,uVar21);
  uStack_a0 = CONCAT22(sVar17,uVar23);
  uVar1 = *(undefined *)(param_2 + 0x4c);
  if (param_2[0x28] == 1) {
    lVar16 = *(longlong *)(param_2 + 0x34);
    if (lVar16 < 0) {
      uVar27 = 0;
LAB_14021129b:
      FUN_140e4b58b(uVar27,lVar16);
      goto LAB_140211354;
    }
    uVar22 = in_R11;
    if (lVar16 == 0) {
      lVar10 = 1;
      lVar16 = 0;
      sVar2 = param_2[0x3c];
      uVar11 = uVar13;
    }
    else {
      uVar24 = *(undefined8 *)(param_2 + 0x30);
      FUN_140081a90();
      uVar27 = 1;
      lVar10 = thunk_FUN_140704e30(lVar16,1);
      if (lVar10 == 0) goto LAB_14021129b;
      uVar11 = FUN_140e286a0(lVar10,uVar24,lVar16);
      sVar17 = (short)uVar24;
      sVar2 = param_2[0x3c];
    }
    uVar21 = 1;
    uVar7 = (uint)uVar11;
    uVar3 = local_68;
    lVar6 = lVar16;
  }
  else {
    lVar16 = *(longlong *)(param_2 + 0x2c);
    lVar10 = *(longlong *)(param_2 + 0x30);
    uVar22 = (ulonglong)*(uint *)(param_2 + 0x38);
    local_4e = param_2[0x29];
    uVar7 = (uint)local_4e;
    uVar21 = 0;
    sVar2 = param_2[0x3c];
    uVar3 = *(undefined4 *)(param_2 + 0x2a);
    lVar6 = *(longlong *)(param_2 + 0x34);
  }
  if (sVar2 != 1) {
    uVar7 = *(uint *)(param_2 + 0x3e);
    uVar26 = *(ulonglong *)(param_2 + 0x40);
    lVar12 = *(longlong *)(param_2 + 0x44);
    uVar11 = (ulonglong)*(uint *)(param_2 + 0x48);
    sVar17 = param_2[0x3d];
    uVar23 = 0;
    goto LAB_14021140d;
  }
  uVar11 = *(ulonglong *)(param_2 + 0x48);
  if ((longlong)uVar11 < 0) {
    uVar24 = 0;
  }
  else {
    uVar23 = 1;
    if (uVar11 == 0) {
      lVar12 = 1;
      uVar26 = 0;
      uVar11 = 0;
LAB_14021140d:
      *(undefined2 *)(param_1 + 0x14) = uVar21;
      *(ushort *)((longlong)param_1 + 0x52) = local_4e;
      param_1[0x15] = uVar3;
      *(longlong *)(param_1 + 0x16) = lVar16;
      *(longlong *)(param_1 + 0x18) = lVar10;
      *(longlong *)(param_1 + 0x1a) = lVar6;
      *(ulonglong *)(param_1 + 0x1c) = uVar22;
      local_88 = (undefined4)uVar25;
      uStack_84 = (undefined4)(uVar25 >> 0x20);
      param_1[0x10] = local_88;
      param_1[0x11] = uStack_84;
      param_1[0x12] = uStack_80;
      param_1[0x13] = uStack_7c;
      uStack_c0 = (undefined4)lVar20;
      uStack_bc = (undefined4)((ulonglong)lVar20 >> 0x20);
      local_b8 = SUB84(puVar8,0);
      uStack_b4 = (undefined4)((ulonglong)puVar8 >> 0x20);
      uStack_b0 = (undefined4)lVar19;
      uStack_ac = (undefined4)((ulonglong)lVar19 >> 0x20);
      local_a8 = (undefined4)in_R11;
      uStack_a4 = (undefined4)(in_R11 >> 0x20);
      local_98 = (undefined4)uVar13;
      uStack_94 = (undefined4)(uVar13 >> 0x20);
      uStack_90 = (undefined4)lVar9;
      uStack_8c = (undefined4)((ulonglong)lVar9 >> 0x20);
      param_1[0xc] = local_98;
      param_1[0xd] = uStack_94;
      param_1[0xe] = uStack_90;
      param_1[0xf] = uStack_8c;
      param_1[8] = local_a8;
      param_1[9] = uStack_a4;
      param_1[10] = uStack_a0;
      param_1[0xb] = uVar14;
      param_1[4] = local_b8;
      param_1[5] = uStack_b4;
      param_1[6] = uStack_b0;
      param_1[7] = uStack_ac;
      *param_1 = local_c8;
      param_1[1] = local_68;
      param_1[2] = uStack_c0;
      param_1[3] = uStack_bc;
      *(undefined2 *)(param_1 + 0x1e) = uVar23;
      *(short *)((longlong)param_1 + 0x7a) = sVar17;
      param_1[0x1f] = uVar7;
      *(ulonglong *)(param_1 + 0x20) = uVar26;
      *(longlong *)(param_1 + 0x22) = lVar12;
      *(ulonglong *)(param_1 + 0x24) = uVar11;
      *(undefined *)(param_1 + 0x26) = uVar1;
      uVar3 = *(undefined4 *)(param_2 + 0x52);
      uVar4 = *(undefined4 *)(param_2 + 0x54);
      uVar5 = *(undefined4 *)(param_2 + 0x56);
      uVar14 = *(undefined4 *)(param_2 + 0x58);
      param_1[0x28] = *(undefined4 *)(param_2 + 0x50);
      param_1[0x29] = uVar3;
      param_1[0x2a] = uVar4;
      param_1[0x2b] = uVar5;
      param_1[0x2c] = uVar14;
      return;
    }
    uVar27 = *(undefined8 *)(param_2 + 0x44);
    FUN_140081a90();
    uVar24 = 1;
    lVar12 = thunk_FUN_140704e30(uVar11,1);
    if (lVar12 != 0) {
      uVar7 = FUN_140e286a0(lVar12,uVar27,uVar11);
      sVar17 = (short)uVar27;
      uVar26 = uVar11;
      goto LAB_14021140d;
    }
  }
  FUN_140e4b58b(uVar24,uVar11);
LAB_140211354:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=140214320 name=FUN_140214320 */

void FUN_140214320(char **param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  char *local_40;
  undefined local_38;
  char *local_30;
  uint local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  pcVar2 = *param_1;
  uVar5 = *(ulonglong *)(pcVar2 + 0x30);
  do {
    LOCK();
    uVar6 = *(ulonglong *)(pcVar2 + 0x30);
    bVar9 = uVar5 == uVar6;
    if (bVar9) {
      *(ulonglong *)(pcVar2 + 0x30) = uVar5 & 0xfffffffffffffffe;
      uVar6 = uVar5;
    }
    UNLOCK();
    uVar5 = uVar6;
  } while (!bVar9);
  if ((uVar6 & 2) != 0) {
    LOCK();
    cVar4 = *pcVar2;
    if (cVar4 == '\0') {
      *pcVar2 = '\x01';
    }
    UNLOCK();
    if (cVar4 != '\0') {
      FUN_140e4a290(pcVar2);
    }
    puVar3 = PTR_DAT_14139cb28;
    if ((*(ulonglong *)PTR_DAT_14139cb28 & 0x7fffffffffffffff) == 0) {
      local_24 = 0;
      cVar4 = pcVar2[1];
    }
    else {
      local_24 = FUN_140e4b070();
      local_24 = local_24 ^ 1;
      cVar4 = pcVar2[1];
    }
    if (cVar4 != '\0') {
      local_38 = (undefined)local_24;
      local_40 = pcVar2;
      FUN_140e4b8a0("called `Result::unwrap()` on an `Err` value",0x2b,&local_40,&PTR_FUN_140e84e10,
                    &PTR_s_C__Users_VssAdministrator__cargo_140e86748);
      do {
        invalidInstructionException();
      } while( true );
    }
    lVar8 = *(longlong *)(pcVar2 + 0x18) * 0x18;
    lVar7 = *(longlong *)(pcVar2 + 0x10) + -0x10;
    do {
      local_30 = pcVar2;
      if (lVar8 == 0) goto LAB_1402143bc;
      lVar8 = lVar8 + -0x18;
      pcVar1 = (char *)(lVar7 + 0x10);
      lVar7 = lVar7 + 0x18;
    } while (*pcVar1 == '\0');
    FUN_140695980();
LAB_1402143bc:
    pcVar2 = local_30;
    if ((((char)local_24 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = FUN_140e4b070(), cVar4 == '\0')) {
      pcVar2[1] = '\x01';
    }
    LOCK();
    cVar4 = *pcVar2;
    *pcVar2 = '\0';
    UNLOCK();
    if (cVar4 == '\x02') {
      WakeByAddressSingle(pcVar2);
      return;
    }
  }
  return;
}


/* address=1402144c0 name=FUN_1402144c0 */

void FUN_1402144c0(int **param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  piVar2 = *param_1;
  if ((*(char *)(param_1 + 1) == '\0') &&
     ((*(ulonglong *)PTR_DAT_14139cb28 & 0x7fffffffffffffff) != 0)) {
    cVar3 = FUN_140e4b070();
    if (cVar3 == '\0') {
      *(undefined *)(piVar2 + 2) = 1;
    }
  }
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -0x3fffffff;
  UNLOCK();
  if (iVar1 + 0xc0000001U < 0x40000000) {
    return;
  }
  FUN_140e4a650();
  return;
}


/* address=1402147a0 name=FUN_1402147a0 */

undefined * FUN_1402147a0(undefined *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  short sVar8;
  char cVar9;
  uint uVar10;
  undefined auVar11 [16];
  short *local_138;
  code *local_130;
  undefined8 *local_128;
  code *local_120;
  undefined *local_118;
  short **local_110;
  undefined **local_108;
  undefined *local_100;
  short local_f8;
  undefined8 local_f6;
  undefined8 uStack_ee;
  undefined2 local_e6;
  int local_e4;
  int local_e0;
  short local_dc;
  undefined2 local_da;
  undefined8 local_d8;
  longlong local_d0;
  undefined ***local_c8;
  undefined8 local_c0;
  short local_b8;
  int iStack_b6;
  short sStack_b2;
  undefined2 uStack_b0;
  undefined4 uStack_ae;
  undefined4 uStack_aa;
  undefined2 local_a6;
  int local_a4;
  int local_a0;
  short local_9c;
  undefined2 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  undefined2 local_68;
  undefined2 uStack_66;
  short sStack_64;
  undefined2 uStack_62;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1401ccad0(&local_d0);
  sVar8 = local_b8;
  puVar7 = PTR_PTR_DAT_1413993d8;
  if (local_d0 == -3) {
    *param_1 = 0xfd;
    return param_1;
  }
  if (local_d0 == -1) {
    FUN_14044beb0(param_1);
    return param_1;
  }
  if (local_d0 == -2) {
    *param_1 = 0xfe;
    return param_1;
  }
  local_78 = local_c8;
  local_70 = local_d0;
  local_d8 = local_c0;
  local_68 = (undefined2)iStack_b6;
  uStack_66 = (undefined2)((uint)iStack_b6 >> 0x10);
  sStack_64 = sStack_b2;
  uStack_62 = uStack_b0;
  uStack_60 = uStack_ae;
  uStack_5c = uStack_aa;
  local_58 = local_a6;
  uVar4 = *(undefined8 *)(param_2 + 0x518);
  uVar5 = *(undefined8 *)(param_2 + 0x520);
  uVar6 = *(undefined4 *)(param_2 + 0x528);
  iStack_84 = *(int *)(param_2 + 0x52c);
  iStack_80 = *(int *)(param_2 + 0x530);
  uStack_7c = *(undefined4 *)(param_2 + 0x534);
  local_98._0_2_ = (short)uVar4;
  if (local_b8 == (short)local_98) {
    if (local_b8 == 1) {
      if (((local_9c == (short)uStack_7c) && (local_a4 == iStack_84)) && (local_a0 == iStack_80)) {
        local_98._4_1_ = (char)((ulonglong)uVar4 >> 0x20);
        local_98._5_1_ = (char)((ulonglong)uVar4 >> 0x28);
        local_98._6_1_ = (char)((ulonglong)uVar4 >> 0x30);
        local_98._7_1_ = (char)((ulonglong)uVar4 >> 0x38);
        uStack_90._0_1_ = (char)uVar5;
        uStack_90._1_1_ = (char)((ulonglong)uVar5 >> 8);
        uStack_90._2_1_ = (char)((ulonglong)uVar5 >> 0x10);
        uStack_90._3_1_ = (char)((ulonglong)uVar5 >> 0x18);
        uStack_90._4_1_ = (char)((ulonglong)uVar5 >> 0x20);
        uStack_90._5_1_ = (char)((ulonglong)uVar5 >> 0x28);
        uStack_90._6_1_ = (char)((ulonglong)uVar5 >> 0x30);
        uStack_90._7_1_ = (char)((ulonglong)uVar5 >> 0x38);
        local_88._0_1_ = (char)uVar6;
        local_88._1_1_ = (char)((uint)uVar6 >> 8);
        local_88._2_1_ = (char)((uint)uVar6 >> 0x10);
        local_88._3_1_ = (char)((uint)uVar6 >> 0x18);
        auVar11[0] = -(local_98._4_1_ == (char)((uint)iStack_b6 >> 0x10));
        auVar11[1] = -(local_98._5_1_ == (char)((uint)iStack_b6 >> 0x18));
        auVar11[2] = -(local_98._6_1_ == (char)sStack_b2);
        auVar11[3] = -(local_98._7_1_ == (char)((ushort)sStack_b2 >> 8));
        auVar11[4] = -((char)uStack_90 == (char)uStack_b0);
        auVar11[5] = -(uStack_90._1_1_ == (char)((ushort)uStack_b0 >> 8));
        auVar11[6] = -(uStack_90._2_1_ == (char)uStack_ae);
        auVar11[7] = -(uStack_90._3_1_ == (char)((uint)uStack_ae >> 8));
        auVar11[8] = -(uStack_90._4_1_ == (char)((uint)uStack_ae >> 0x10));
        auVar11[9] = -(uStack_90._5_1_ == (char)((uint)uStack_ae >> 0x18));
        auVar11[10] = -(uStack_90._6_1_ == (char)uStack_aa);
        auVar11[11] = -(uStack_90._7_1_ == (char)((uint)uStack_aa >> 8));
        auVar11[12] = -((char)local_88 == (char)((uint)uStack_aa >> 0x10));
        auVar11[13] = -(local_88._1_1_ == (char)((uint)uStack_aa >> 0x18));
        auVar11[14] = -(local_88._2_1_ == (char)local_a6);
        auVar11[15] = -(local_88._3_1_ == (char)((ushort)local_a6 >> 8));
        if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar11[15] >> 7) << 0xf) == 0xffff) goto LAB_140214996;
      }
    }
    else {
      local_98._6_2_ = (short)((ulonglong)uVar4 >> 0x30);
      if ((sStack_b2 == local_98._6_2_) &&
         (local_98._2_4_ = (int)((ulonglong)uVar4 >> 0x10), iStack_b6 == local_98._2_4_))
      goto LAB_140214996;
    }
  }
  if (*(ulonglong *)PTR_DAT_14139ca10 < 4) {
    bVar2 = PTR_PTR_DAT_1413993d8[0x10];
    uVar10 = (uint)bVar2;
    local_98 = uVar4;
    uStack_90 = uVar5;
    local_88 = uVar6;
    if (((bVar2 - 1 < 2) ||
        ((bVar2 != 0 && (uVar10 = FUN_140e46040(PTR_PTR_DAT_1413993d8), (char)uVar10 != '\0')))) &&
       (cVar9 = FUN_1406912e0(*(undefined8 *)puVar7,uVar10), cVar9 != '\0')) {
      lVar3 = *(longlong *)puVar7;
      lVar1 = lVar3 + 0x30;
      local_f8 = local_b8;
      local_f6 = CONCAT26(uStack_62,CONCAT24(sStack_64,CONCAT22(uStack_66,local_68)));
      uStack_ee = CONCAT44(uStack_5c,uStack_60);
      local_e6 = local_58;
      local_e4 = local_a4;
      local_e0 = local_a0;
      local_dc = local_9c;
      local_da = local_9a;
      local_138 = &local_f8;
      local_130 = FUN_140739220;
      local_128 = &local_98;
      local_120 = FUN_140739220;
      local_118 = &DAT_140e86830;
      local_110 = &local_138;
      local_108 = &local_118;
      local_100 = &DAT_140e81940;
      local_d0 = 1;
      local_c8 = &local_108;
      local_c0 = 1;
      local_b8 = (short)lVar1;
      iStack_b6 = (int)((ulonglong)lVar1 >> 0x10);
      sStack_b2 = (short)((ulonglong)lVar1 >> 0x30);
      FUN_140692070(lVar3,&local_d0);
    }
  }
LAB_140214996:
  *(undefined2 *)(param_1 + 0x32) = local_58;
  *(uint *)(param_1 + 0x22) = CONCAT22(uStack_66,local_68);
  *(uint *)(param_1 + 0x26) = CONCAT22(uStack_62,sStack_64);
  *(undefined4 *)(param_1 + 0x2a) = uStack_60;
  *(undefined4 *)(param_1 + 0x2e) = uStack_5c;
  *param_1 = 0xff;
  *(longlong *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = local_78;
  *(undefined8 *)(param_1 + 0x18) = local_d8;
  *(short *)(param_1 + 0x20) = sVar8;
  *(int *)(param_1 + 0x34) = local_a4;
  *(int *)(param_1 + 0x38) = local_a0;
  *(short *)(param_1 + 0x3c) = local_9c;
  *(undefined2 *)(param_1 + 0x3e) = local_9a;
  return param_1;
}


/* address=140214a60 name=FUN_140214a60 */

undefined * FUN_140214a60(undefined *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  short sVar8;
  char cVar9;
  uint uVar10;
  undefined auVar11 [16];
  short *local_138;
  code *local_130;
  undefined8 *local_128;
  code *local_120;
  undefined *local_118;
  short **local_110;
  undefined **local_108;
  undefined *local_100;
  short local_f8;
  undefined8 local_f6;
  undefined8 uStack_ee;
  undefined2 local_e6;
  int local_e4;
  int local_e0;
  short local_dc;
  undefined2 local_da;
  undefined8 local_d8;
  longlong local_d0;
  undefined ***local_c8;
  undefined8 local_c0;
  short local_b8;
  int iStack_b6;
  short sStack_b2;
  undefined2 uStack_b0;
  undefined4 uStack_ae;
  undefined4 uStack_aa;
  undefined2 local_a6;
  int local_a4;
  int local_a0;
  short local_9c;
  undefined2 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  undefined2 local_68;
  undefined2 uStack_66;
  short sStack_64;
  undefined2 uStack_62;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1401cde60(&local_d0);
  sVar8 = local_b8;
  puVar7 = PTR_PTR_DAT_1413993d8;
  if (local_d0 == -3) {
    *param_1 = 0xfd;
    return param_1;
  }
  if (local_d0 == -1) {
    FUN_14044beb0(param_1);
    return param_1;
  }
  if (local_d0 == -2) {
    *param_1 = 0xfe;
    return param_1;
  }
  local_78 = local_c8;
  local_70 = local_d0;
  local_d8 = local_c0;
  local_68 = (undefined2)iStack_b6;
  uStack_66 = (undefined2)((uint)iStack_b6 >> 0x10);
  sStack_64 = sStack_b2;
  uStack_62 = uStack_b0;
  uStack_60 = uStack_ae;
  uStack_5c = uStack_aa;
  local_58 = local_a6;
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  uVar6 = *(undefined4 *)(param_2 + 0xd0);
  iStack_84 = *(int *)(param_2 + 0xd4);
  iStack_80 = *(int *)(param_2 + 0xd8);
  uStack_7c = *(undefined4 *)(param_2 + 0xdc);
  local_98._0_2_ = (short)uVar4;
  if (local_b8 == (short)local_98) {
    if (local_b8 == 1) {
      if (((local_9c == (short)uStack_7c) && (local_a4 == iStack_84)) && (local_a0 == iStack_80)) {
        local_98._4_1_ = (char)((ulonglong)uVar4 >> 0x20);
        local_98._5_1_ = (char)((ulonglong)uVar4 >> 0x28);
        local_98._6_1_ = (char)((ulonglong)uVar4 >> 0x30);
        local_98._7_1_ = (char)((ulonglong)uVar4 >> 0x38);
        uStack_90._0_1_ = (char)uVar5;
        uStack_90._1_1_ = (char)((ulonglong)uVar5 >> 8);
        uStack_90._2_1_ = (char)((ulonglong)uVar5 >> 0x10);
        uStack_90._3_1_ = (char)((ulonglong)uVar5 >> 0x18);
        uStack_90._4_1_ = (char)((ulonglong)uVar5 >> 0x20);
        uStack_90._5_1_ = (char)((ulonglong)uVar5 >> 0x28);
        uStack_90._6_1_ = (char)((ulonglong)uVar5 >> 0x30);
        uStack_90._7_1_ = (char)((ulonglong)uVar5 >> 0x38);
        local_88._0_1_ = (char)uVar6;
        local_88._1_1_ = (char)((uint)uVar6 >> 8);
        local_88._2_1_ = (char)((uint)uVar6 >> 0x10);
        local_88._3_1_ = (char)((uint)uVar6 >> 0x18);
        auVar11[0] = -(local_98._4_1_ == (char)((uint)iStack_b6 >> 0x10));
        auVar11[1] = -(local_98._5_1_ == (char)((uint)iStack_b6 >> 0x18));
        auVar11[2] = -(local_98._6_1_ == (char)sStack_b2);
        auVar11[3] = -(local_98._7_1_ == (char)((ushort)sStack_b2 >> 8));
        auVar11[4] = -((char)uStack_90 == (char)uStack_b0);
        auVar11[5] = -(uStack_90._1_1_ == (char)((ushort)uStack_b0 >> 8));
        auVar11[6] = -(uStack_90._2_1_ == (char)uStack_ae);
        auVar11[7] = -(uStack_90._3_1_ == (char)((uint)uStack_ae >> 8));
        auVar11[8] = -(uStack_90._4_1_ == (char)((uint)uStack_ae >> 0x10));
        auVar11[9] = -(uStack_90._5_1_ == (char)((uint)uStack_ae >> 0x18));
        auVar11[10] = -(uStack_90._6_1_ == (char)uStack_aa);
        auVar11[11] = -(uStack_90._7_1_ == (char)((uint)uStack_aa >> 8));
        auVar11[12] = -((char)local_88 == (char)((uint)uStack_aa >> 0x10));
        auVar11[13] = -(local_88._1_1_ == (char)((uint)uStack_aa >> 0x18));
        auVar11[14] = -(local_88._2_1_ == (char)local_a6);
        auVar11[15] = -(local_88._3_1_ == (char)((ushort)local_a6 >> 8));
        if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar11[15] >> 7) << 0xf) == 0xffff) goto LAB_140214c56;
      }
    }
    else {
      local_98._6_2_ = (short)((ulonglong)uVar4 >> 0x30);
      if ((sStack_b2 == local_98._6_2_) &&
         (local_98._2_4_ = (int)((ulonglong)uVar4 >> 0x10), iStack_b6 == local_98._2_4_))
      goto LAB_140214c56;
    }
  }
  if (*(ulonglong *)PTR_DAT_14139ca10 < 4) {
    bVar2 = PTR_PTR_DAT_1413993d8[0x10];
    uVar10 = (uint)bVar2;
    local_98 = uVar4;
    uStack_90 = uVar5;
    local_88 = uVar6;
    if (((bVar2 - 1 < 2) ||
        ((bVar2 != 0 && (uVar10 = FUN_140e46040(PTR_PTR_DAT_1413993d8), (char)uVar10 != '\0')))) &&
       (cVar9 = FUN_1406912e0(*(undefined8 *)puVar7,uVar10), cVar9 != '\0')) {
      lVar3 = *(longlong *)puVar7;
      lVar1 = lVar3 + 0x30;
      local_f8 = local_b8;
      local_f6 = CONCAT26(uStack_62,CONCAT24(sStack_64,CONCAT22(uStack_66,local_68)));
      uStack_ee = CONCAT44(uStack_5c,uStack_60);
      local_e6 = local_58;
      local_e4 = local_a4;
      local_e0 = local_a0;
      local_dc = local_9c;
      local_da = local_9a;
      local_138 = &local_f8;
      local_130 = FUN_140739220;
      local_128 = &local_98;
      local_120 = FUN_140739220;
      local_118 = &DAT_140e86830;
      local_110 = &local_138;
      local_108 = &local_118;
      local_100 = &DAT_140e81940;
      local_d0 = 1;
      local_c8 = &local_108;
      local_c0 = 1;
      local_b8 = (short)lVar1;
      iStack_b6 = (int)((ulonglong)lVar1 >> 0x10);
      sStack_b2 = (short)((ulonglong)lVar1 >> 0x30);
      FUN_140692070(lVar3,&local_d0);
    }
  }
LAB_140214c56:
  *(undefined2 *)(param_1 + 0x32) = local_58;
  *(uint *)(param_1 + 0x22) = CONCAT22(uStack_66,local_68);
  *(uint *)(param_1 + 0x26) = CONCAT22(uStack_62,sStack_64);
  *(undefined4 *)(param_1 + 0x2a) = uStack_60;
  *(undefined4 *)(param_1 + 0x2e) = uStack_5c;
  *param_1 = 0xff;
  *(longlong *)(param_1 + 8) = local_70;
  *(undefined8 *)(param_1 + 0x10) = local_78;
  *(undefined8 *)(param_1 + 0x18) = local_d8;
  *(short *)(param_1 + 0x20) = sVar8;
  *(int *)(param_1 + 0x34) = local_a4;
  *(int *)(param_1 + 0x38) = local_a0;
  *(short *)(param_1 + 0x3c) = local_9c;
  *(undefined2 *)(param_1 + 0x3e) = local_9a;
  return param_1;
}


/* address=140214e70 name=FUN_140214e70 */

void FUN_140214e70(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code **ppcVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_d0 [3];
  ulonglong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  code **local_68;
  longlong *local_60;
  longlong local_58;
  undefined local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = (longlong *)(param_1 + 0x3888);
  local_58 = param_1;
  FUN_1403dc770();
  lVar7 = local_58;
  if (*local_60 != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(local_58 + 0x3890),*local_60 * 0x50);
  }
  local_60 = (longlong *)(lVar7 + 0x38b0);
  FUN_1403dc770();
  lVar7 = local_58;
  if (*local_60 != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(local_58 + 0x38b8),*local_60 * 0x50);
  }
  if (*(longlong *)(lVar7 + 0x38d8) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x38e0),*(longlong *)(lVar7 + 0x38d8) << 3);
  }
  lVar1 = *(longlong *)(lVar7 + 0x3920);
  if ((lVar1 != 0) && (uVar4 = lVar1 * 8 + 0x17U & 0xfffffffffffffff0, lVar1 + uVar4 != -0x11)) {
    thunk_FUN_140704e90(*(longlong *)(lVar7 + 0x3918) - uVar4);
  }
  local_60 = (longlong *)(lVar7 + 0x38f8);
  FUN_1403dca10();
  lVar7 = local_58;
  if (*local_60 != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(local_58 + 0x3900),*local_60 * 0x18);
  }
  if (*(longlong *)(lVar7 + 0x3980) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x3988));
  }
  local_60 = (longlong *)(lVar7 + 0x200);
  if (*(longlong *)(lVar7 + 0x240) == 0) {
    if (4 < *(ulonglong *)(lVar7 + 0x288)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x248),*(ulonglong *)(lVar7 + 0x288) << 4);
    }
    lVar1 = *(longlong *)(lVar7 + 0x2f0);
  }
  else {
    lVar1 = *(longlong *)(lVar7 + 0x248);
    if (lVar1 == 0) {
      local_78 = 0;
    }
    else {
      local_a0 = *(undefined8 *)(lVar7 + 0x250);
      local_78 = *(undefined8 *)(lVar7 + 600);
      local_b0 = 0;
      local_90 = 0;
      local_a8 = lVar1;
      local_88 = lVar1;
      local_80 = local_a0;
    }
    local_b8 = (ulonglong)(lVar1 != 0);
    local_98 = local_b8;
    do {
      local_49 = 0;
      local_70 = 1;
      FUN_1400ec9f0(local_d0,&local_b8);
    } while (local_d0[0] != 0);
    lVar1 = *(longlong *)(local_58 + 0x2f0);
    local_d0[0] = 0;
    lVar7 = local_58;
  }
  if (lVar1 == 0) {
    if (4 < *(ulonglong *)(lVar7 + 0x338)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x2f8),*(ulonglong *)(lVar7 + 0x338) << 4);
    }
    lVar1 = *(longlong *)(lVar7 + 0x3a0);
  }
  else {
    lVar1 = *(longlong *)(lVar7 + 0x2f8);
    if (lVar1 == 0) {
      local_78 = 0;
    }
    else {
      local_a0 = *(undefined8 *)(lVar7 + 0x300);
      local_78 = *(undefined8 *)(lVar7 + 0x308);
      local_b0 = 0;
      local_90 = 0;
      local_a8 = lVar1;
      local_88 = lVar1;
      local_80 = local_a0;
    }
    local_b8 = (ulonglong)(lVar1 != 0);
    local_98 = local_b8;
    do {
      local_49 = 0;
      local_70 = 2;
      FUN_1400ec9f0(local_d0,&local_b8);
    } while (local_d0[0] != 0);
    lVar1 = *(longlong *)(local_58 + 0x3a0);
    local_d0[0] = 0;
    lVar7 = local_58;
  }
  if (lVar1 == 0) {
    if (4 < *(ulonglong *)(lVar7 + 1000)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x3a8),*(ulonglong *)(lVar7 + 1000) << 4);
    }
  }
  else {
    lVar1 = *(longlong *)(lVar7 + 0x3a8);
    if (lVar1 == 0) {
      local_78 = 0;
    }
    else {
      local_a0 = *(undefined8 *)(lVar7 + 0x3b0);
      local_78 = *(undefined8 *)(lVar7 + 0x3b8);
      local_b0 = 0;
      local_90 = 0;
      local_a8 = lVar1;
      local_88 = lVar1;
      local_80 = local_a0;
    }
    local_b8 = (ulonglong)(lVar1 != 0);
    local_98 = local_b8;
    do {
      local_49 = 1;
      local_70 = 3;
      FUN_1400ec9f0(local_d0,&local_b8);
      lVar7 = local_58;
    } while (local_d0[0] != 0);
  }
  local_68 = (code **)(lVar7 + 0x410);
  local_60 = (longlong *)0x0;
  ppcVar5 = local_68;
  while (lVar7 = local_58, local_60 != (longlong *)0x3) {
    local_60 = (longlong *)((longlong)local_60 + 1);
    FUN_14001e010(ppcVar5);
    ppcVar5 = ppcVar5 + 0x1fe;
  }
  FUN_14001dc20(local_58);
  FUN_14001dc20(lVar7 + 0x100);
  FUN_1404afd90(lVar7 + 0x3760);
  lVar7 = local_58;
  if ((*(longlong *)(local_58 + 0x39c8) != -1) && (*(longlong *)(local_58 + 0x39c8) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(local_58 + 0x39d0));
  }
  FUN_14001dd90(lVar7 + 0x3460);
  lVar1 = local_58;
  lVar7 = *(longlong *)(local_58 + 0x39a8);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(*(longlong *)(local_58 + 0x39a0) + 8);
    do {
      if (puVar8[-1] != 0) {
        thunk_FUN_140704e90(*puVar8);
      }
      puVar8 = puVar8 + 3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (*(longlong *)(lVar1 + 0x3998) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 0x39a0),*(longlong *)(lVar1 + 0x3998) * 0x18);
  }
  FUN_14000edd0(lVar1 + 0x3a78);
  lVar7 = local_58;
  if ((*(ulonglong *)(local_58 + 0x3a48) < 0xfffffffffffffffe) &&
     (*(ulonglong *)(local_58 + 0x3a48) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(local_58 + 0x3a50));
  }
  if ((*(ulonglong *)(lVar7 + 0x3a60) < 0xfffffffffffffffe) && (*(ulonglong *)(lVar7 + 0x3a60) != 0)
     ) {
    thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x3a68));
  }
  if ((*(longlong *)(lVar7 + 0x39e0) != -1) && (*(longlong *)(lVar7 + 0x39e0) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x39e8));
  }
  if ((*(longlong *)(lVar7 + 0x39f8) != -1) && (*(longlong *)(lVar7 + 0x39f8) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x3a00));
  }
  if ((*(longlong *)(lVar7 + 0x3a20) != -1) && (*(longlong *)(lVar7 + 0x3a20) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x3a28));
  }
  uVar4 = *(ulonglong *)(lVar7 + 0x34e8);
  if (uVar4 != 0) {
    uVar2 = *(ulonglong *)(lVar7 + 0x34e0);
    uVar3 = *(ulonglong *)(lVar7 + 0x34d0);
    lVar1 = *(longlong *)(lVar7 + 0x34d8);
    uVar6 = uVar3;
    if (uVar2 < uVar3) {
      uVar6 = 0;
    }
    lVar10 = uVar2 - uVar6;
    uVar11 = uVar3 - lVar10;
    uVar9 = uVar4 - uVar11;
    if (uVar4 < uVar11) {
      uVar9 = 0;
    }
    uVar12 = lVar10 + uVar4;
    if (uVar4 >= uVar11 && uVar4 - uVar11 != 0) {
      uVar12 = uVar3;
    }
    lVar10 = uVar12 - lVar10;
    if (lVar10 != 0) {
      puVar8 = (undefined8 *)(uVar2 * 0x58 + uVar6 * -0x58 + lVar1 + 8);
      do {
        if (puVar8[-1] != 0) {
          thunk_FUN_140704e90(*puVar8);
        }
        puVar8 = puVar8 + 0xb;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (uVar11 < uVar4) {
      puVar8 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar8[-1] != 0) {
          thunk_FUN_140704e90(*puVar8);
        }
        puVar8 = puVar8 + 0xb;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if (*(longlong *)(lVar7 + 0x34d0) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x34d8),*(longlong *)(lVar7 + 0x34d0) * 0x58);
  }
  if (*(longlong *)(lVar7 + 0x39b0) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x39b8));
  }
  local_60 = *(longlong **)(lVar7 + 0x3770);
  if (local_60 != (longlong *)0x0) {
    local_68 = *(code ***)(lVar7 + 0x3778);
    if (*local_68 != (code *)0x0) {
      (**local_68)(local_60);
    }
    lVar7 = local_58;
    if (local_68[1] != (code *)0x0) {
      thunk_FUN_140704e90(local_60);
    }
  }
  FUN_14001bd90(lVar7 + 0x3550);
  lVar7 = local_58;
  uVar4 = *(ulonglong *)(local_58 + 0x3508);
  if (uVar4 != 0) {
    uVar2 = *(ulonglong *)(local_58 + 0x3500);
    uVar3 = *(ulonglong *)(local_58 + 0x34f0);
    lVar1 = *(longlong *)(local_58 + 0x34f8);
    uVar6 = uVar3;
    if (uVar2 < uVar3) {
      uVar6 = 0;
    }
    lVar10 = uVar2 - uVar6;
    uVar11 = uVar3 - lVar10;
    uVar9 = uVar4 - uVar11;
    if (uVar4 < uVar11) {
      uVar9 = 0;
    }
    uVar12 = lVar10 + uVar4;
    if (uVar4 >= uVar11 && uVar4 - uVar11 != 0) {
      uVar12 = uVar3;
    }
    lVar10 = uVar12 - lVar10;
    if (lVar10 != 0) {
      puVar8 = (undefined8 *)(lVar1 + uVar2 * 0x20 + uVar6 * -0x20 + 8);
      do {
        if (puVar8[-1] != 0) {
          thunk_FUN_140704e90(*puVar8);
        }
        puVar8 = puVar8 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (uVar11 < uVar4) {
      puVar8 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar8[-1] != 0) {
          thunk_FUN_140704e90(*puVar8);
        }
        puVar8 = puVar8 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if (*(longlong *)(lVar7 + 0x34f0) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x34f8),*(longlong *)(lVar7 + 0x34f0) << 5);
  }
  uVar4 = *(ulonglong *)(lVar7 + 0x3538);
  if (uVar4 != 0) {
    uVar2 = *(ulonglong *)(lVar7 + 0x3530);
    uVar3 = *(ulonglong *)(lVar7 + 0x3520);
    lVar1 = *(longlong *)(lVar7 + 0x3528);
    uVar6 = uVar3;
    if (uVar2 < uVar3) {
      uVar6 = 0;
    }
    lVar10 = uVar2 - uVar6;
    uVar11 = uVar3 - lVar10;
    uVar9 = uVar4 - uVar11;
    if (uVar4 < uVar11) {
      uVar9 = 0;
    }
    uVar12 = lVar10 + uVar4;
    if (uVar4 >= uVar11 && uVar4 - uVar11 != 0) {
      uVar12 = uVar3;
    }
    lVar10 = uVar12 - lVar10;
    if (lVar10 != 0) {
      puVar8 = (undefined8 *)(lVar1 + uVar2 * 0x20 + uVar6 * -0x20 + 8);
      do {
        if (puVar8[-1] != 0) {
          thunk_FUN_140704e90(*puVar8,puVar8[-1],1);
        }
        puVar8 = puVar8 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (uVar11 < uVar4) {
      puVar8 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar8[-1] != 0) {
          thunk_FUN_140704e90(*puVar8,puVar8[-1],1);
        }
        puVar8 = puVar8 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  if (*(longlong *)(lVar7 + 0x3520) == 0) {
    return;
  }
  thunk_FUN_140704e90(*(undefined8 *)(lVar7 + 0x3528),*(longlong *)(lVar7 + 0x3520) << 5,8);
  return;
}


/* address=140215ec0 name=FUN_140215ec0 */

void FUN_140215ec0(undefined8 param_1)

{
  FUN_140219d90();
  thunk_FUN_140704e90(param_1,0x4b0,8);
  return;
}


/* address=140215f30 name=FUN_140215f30 */

void FUN_140215f30(int *param_1)

{
  ulonglong uVar1;
  longlong local_20;
  int *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*param_1 == 2) {
    uVar1 = *(ulonglong *)(param_1 + 2);
    if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
      local_20 = uVar1 - 1;
      FUN_14073adf0(&local_20);
    }
    return;
  }
  local_18 = param_1;
  FUN_1400995c0(param_1 + 0x104);
  FUN_1402191f0(local_18);
  local_18 = *(int **)(local_18 + 0x198);
  FUN_140214e70();
  thunk_FUN_140704e90(local_18,0x3cf0,0x10);
  return;
}


/* address=140216050 name=FUN_140216050 */

void FUN_140216050(int *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 8;
  if (*param_1 == 2) goto LAB_14021627b;
  if (*(char *)(param_1 + 0x7e) == -1) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x82),*(longlong *)(param_1 + 0x80),1);
    }
  }
  else {
    FUN_14021cb00(param_1 + 0x7e);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 == 0) {
LAB_140216104:
    if (*(char *)((longlong)param_1 + 0x1f5) == '\x02') goto LAB_14021610d;
LAB_14021614a:
    FUN_14021ca20(*(undefined8 *)(param_1 + 0x76),*(undefined8 *)(param_1 + 0x78));
    cVar1 = *(char *)(param_1 + 0x6b);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x3a);
    if (lVar3 == -1) {
      FUN_140106000();
      FUN_1400ed490(lVar2 + 0x4d8);
      thunk_FUN_140704e90(lVar2,0x4f0,8);
      goto LAB_140216104;
    }
    thunk_FUN_140704e90(lVar2,lVar3,1);
    if (*(char *)((longlong)param_1 + 0x1f5) != '\x02') goto LAB_14021614a;
LAB_14021610d:
    if (*(longlong *)(param_1 + 0x6c) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x6e),*(longlong *)(param_1 + 0x6c),1);
    }
    cVar1 = *(char *)(param_1 + 0x6b);
  }
  if ((cVar1 == '\x02') && (*(longlong *)(param_1 + 100) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x66),*(longlong *)(param_1 + 100),1);
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 4),*(longlong *)(param_1 + 2),1);
  }
  if (*(longlong *)(param_1 + 10) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xc),*(longlong *)(param_1 + 10),1);
  }
  if (*(longlong *)(param_1 + 0x12) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x14),*(longlong *)(param_1 + 0x12),1);
  }
  if (*(longlong *)(param_1 + 0x3e) == -1) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x42),*(longlong *)(param_1 + 0x40),1);
    }
  }
  else {
    FUN_14021cce0(param_1 + 0x3e);
  }
  if (*(longlong *)(param_1 + 0x1a) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x1c),*(longlong *)(param_1 + 0x1a),1);
  }
  if (*(longlong *)(param_1 + 0x22) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x22),1);
  }
  lVar3 = 0xa8;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if ((int)*(longlong *)(param_1 + 0x30) == 2) {
      if (*(longlong *)(param_1 + 0x32) != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x34),*(longlong *)(param_1 + 0x32),1);
      }
    }
    else {
      FUN_1400ed7c0(param_1 + 0x32);
    }
  }
LAB_14021627b:
  if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)((longlong)param_1 + lVar3 + 8),
                        *(longlong *)((longlong)param_1 + lVar3),1);
    return;
  }
  return;
}


/* address=140216480 name=FUN_140216480 */

void FUN_140216480(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0x45) != '\x02') {
    FUN_14021ca20(param_1[5],param_1[6]);
    return;
  }
  if (*param_1 != 0) {
    thunk_FUN_140704e90(param_1[1],*param_1,1);
    return;
  }
  return;
}


/* address=1402164b0 name=FUN_1402164b0 */

void FUN_1402164b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (*param_1 == -1) {
    if (param_1[1] != 0) {
      thunk_FUN_140704e90(param_1[2],param_1[1],1);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    thunk_FUN_140704e90(param_1[1],*param_1,1);
  }
  uVar4 = (ulonglong)((byte)(*(char *)(param_1 + 6) - 1U) < 2);
  if (param_1[uVar4 * 2 + 9] != 0) {
    thunk_FUN_140704e90(param_1[uVar4 * 2 + 10],param_1[uVar4 * 2 + 9],1);
  }
  lVar1 = param_1[3];
  if (lVar1 != -1) {
    lVar2 = param_1[4];
    lVar5 = param_1[5];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x38);
      do {
        lVar3 = puVar6[-7];
        if ((lVar3 != -1) && (lVar3 != 0)) {
          thunk_FUN_140704e90(puVar6[-6],lVar3,1);
        }
        lVar3 = puVar6[-4];
        if (lVar3 != -2) {
          if ((lVar3 != -1) && (lVar3 != 0)) {
            thunk_FUN_140704e90(puVar6[-3],lVar3,1);
          }
          lVar3 = puVar6[-1];
          if ((lVar3 != -1) && (lVar3 != 0)) {
            thunk_FUN_140704e90(*puVar6,lVar3,1);
          }
        }
        puVar6 = puVar6 + 9;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar1 != 0) {
      thunk_FUN_140704e90(lVar2,lVar1 * 0x48,8);
      return;
    }
  }
  return;
}


/* address=1402164e0 name=FUN_1402164e0 */

void FUN_1402164e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_14021c390(param_1 + 1);
    return;
  }
  lVar2 = param_1[1];
  lVar6 = param_1[2];
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)(lVar2 + 0x38);
    do {
      if ((*(short *)(puVar7 + -7) != 0) && (puVar7[-6] != 0)) {
        thunk_FUN_140704e90(puVar7[-5],puVar7[-6],1);
      }
      if ((*(short *)(puVar7 + -2) != 0) && (puVar7[-1] != 0)) {
        thunk_FUN_140704e90(*puVar7,puVar7[-1],1);
      }
      puVar7 = puVar7 + 0xb;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (lVar1 != 0) {
    thunk_FUN_140704e90(lVar2,lVar1 * 0x58,8);
  }
  lVar1 = param_1[4];
  FUN_1402f7310(lVar1,param_1[5]);
  if (param_1[3] != 0) {
    thunk_FUN_140704e90(lVar1,param_1[3] * 0x110,8);
  }
  lVar1 = param_1[7];
  FUN_1402f7310(lVar1,param_1[8]);
  if (param_1[6] != 0) {
    thunk_FUN_140704e90(lVar1,param_1[6] * 0x110,8);
  }
  lVar1 = param_1[10];
  FUN_1402f7310(lVar1,param_1[0xb]);
  if (param_1[9] != 0) {
    thunk_FUN_140704e90(lVar1,param_1[9] * 0x110,8);
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    if ((*(short *)(lVar1 + 0x90) != 0) && (*(longlong *)(lVar1 + 0x98) != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 0xa0),*(longlong *)(lVar1 + 0x98),1);
    }
    if ((*(short *)(lVar1 + 0xb8) != 0) && (*(longlong *)(lVar1 + 0xc0) != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(lVar1 + 200),*(longlong *)(lVar1 + 0xc0),1);
    }
    FUN_140020fd0(lVar1);
    thunk_FUN_140704e90(lVar1,0xe8,8);
  }
  lVar1 = param_1[0xc];
  if (lVar1 != -1) {
    lVar2 = param_1[0xd];
    lVar6 = param_1[0xe];
    if (lVar6 != 0) {
      puVar8 = (ulonglong *)(lVar2 + 8);
      do {
        uVar5 = *puVar8;
        uVar4 = uVar5 ^ 0x8000000000000000;
        if (-1 < (longlong)uVar5) {
          uVar4 = 2;
        }
        if (uVar4 != 0) {
          lVar3 = 8;
          if (uVar4 == 1) {
            uVar5 = puVar8[1];
            lVar3 = 0x10;
          }
          if (uVar5 != 0) {
            thunk_FUN_140704e90(*(undefined8 *)((longlong)puVar8 + lVar3),uVar5,1);
          }
        }
        puVar8 = puVar8 + 5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar1 != 0) {
      thunk_FUN_140704e90(lVar2,lVar1 * 0x28,8);
    }
  }
  if (param_1[0x13] != 0) {
    thunk_FUN_140704e90(param_1[0x14],param_1[0x13],1);
    return;
  }
  return;
}


/* address=140216940 name=FUN_140216940 */

void FUN_140216940(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x30) == -1) {
    FUN_14021d6f0();
    return;
  }
  FUN_140020040();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  cVar2 = FUN_1406b2a60(uVar1);
  if (cVar2 != '\0') {
    FUN_1406b6080(uVar1);
    return;
  }
  return;
}


/* address=1402169d0 name=FUN_1402169d0 */

void FUN_1402169d0(undefined8 param_1)

{
  FUN_140214e70();
  thunk_FUN_140704e90(param_1,0x3cf0,0x10);
  return;
}


/* address=140216a40 name=FUN_140216a40 */

void FUN_140216a40(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code **ppcVar4;
  
  if (*param_1 == 0) {
    if (((*(char *)(param_1 + 0x60) == '\x03') && (*(char *)(param_1 + 0x5e) == '\x03')) &&
       (*(char *)(param_1 + 0x5c) == '\x03')) {
      if (*(char *)(param_1 + 0x5a) == '\x03') {
        if (*(char *)(param_1 + 0x58) == '\x03') {
          uVar3 = *(undefined8 *)(param_1 + 0x54);
          ppcVar4 = *(code ***)(param_1 + 0x56);
          if (*ppcVar4 != (code *)0x0) {
            (**ppcVar4)(uVar3);
          }
          if (ppcVar4[1] != (code *)0x0) {
            thunk_FUN_140704e90(uVar3,ppcVar4[1],ppcVar4[2]);
          }
          FUN_14001f8a0(param_1 + 0x38);
          return;
        }
        if (*(char *)(param_1 + 0x58) == '\0') {
          FUN_14021d5f0(param_1 + 0x22);
          return;
        }
      }
      else if (*(char *)(param_1 + 0x5a) == '\0') {
        FUN_14021d5f0(param_1 + 8);
        return;
      }
    }
  }
  else if ((*param_1 == 1) && (lVar1 = *(longlong *)(param_1 + 2), lVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 4);
    if (lVar1 == -1) {
      FUN_140106000();
      FUN_1400ed490(lVar2 + 0x4d8);
      thunk_FUN_140704e90(lVar2,0x4f0,8);
      return;
    }
    thunk_FUN_140704e90(lVar2,lVar1,1);
    return;
  }
  return;
}


/* address=140216c20 name=FUN_140216c20 */

void FUN_140216c20(int *param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (((*(char *)(param_1 + 0x60) == '\x03') && (*(char *)(param_1 + 0x5e) == '\x03')) &&
       (*(char *)(param_1 + 0x5c) == '\x03')) {
      if (*(char *)(param_1 + 0x5a) == '\x03') {
        if (*(char *)(param_1 + 0x58) == '\x03') {
          uVar1 = *(undefined8 *)(param_1 + 0x54);
          ppcVar2 = *(code ***)(param_1 + 0x56);
          if (*ppcVar2 != (code *)0x0) {
            (**ppcVar2)(uVar1);
          }
          if (ppcVar2[1] != (code *)0x0) {
            thunk_FUN_140704e90(uVar1,ppcVar2[1],ppcVar2[2]);
          }
          FUN_14001f8a0(param_1 + 0x38);
          return;
        }
        if (*(char *)(param_1 + 0x58) == '\0') {
          FUN_14021d5f0(param_1 + 0x22);
          return;
        }
      }
      else if (*(char *)(param_1 + 0x5a) == '\0') {
        FUN_14021d5f0(param_1 + 8);
        return;
      }
    }
  }
  else if (((*param_1 == 1) && (*(char *)(param_1 + 9) == '\x02')) &&
          (*(longlong *)(param_1 + 2) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 4),*(longlong *)(param_1 + 2),1);
    return;
  }
  return;
}


/* address=140216d60 name=FUN_140216d60 */

void FUN_140216d60(int *param_1)

{
  if (*param_1 == 0) {
    if (((*(char *)(param_1 + 0x60) == '\x03') && (*(char *)(param_1 + 0x5e) == '\x03')) &&
       (*(char *)(param_1 + 0x5c) == '\x03')) {
      if (*(char *)(param_1 + 0x5a) == '\x03') {
        FUN_140219830(param_1 + 0x1e);
        return;
      }
      if (*(char *)(param_1 + 0x5a) == '\0') {
        FUN_14021d5f0(param_1 + 8);
        return;
      }
    }
  }
  else if ((*param_1 == 1) && (*(longlong *)(param_1 + 4) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 6),*(longlong *)(param_1 + 4),1);
    return;
  }
  return;
}


/* address=140216dd0 name=FUN_140216dd0 */

void FUN_140216dd0(int *param_1)

{
  if (*param_1 == 0) {
    if (((*(char *)(param_1 + 0x60) == '\x03') && (*(char *)(param_1 + 0x5e) == '\x03')) &&
       (*(char *)(param_1 + 0x5c) == '\x03')) {
      if (*(char *)(param_1 + 0x58) == '\x03') {
        FUN_140219830(param_1 + 0x1c);
        return;
      }
      if (*(char *)(param_1 + 0x58) == '\0') {
        FUN_14021d5f0(param_1 + 6);
        return;
      }
    }
  }
  else if ((*param_1 == 1) && (*(longlong *)(param_1 + 4) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 6),*(longlong *)(param_1 + 4),1);
    return;
  }
  return;
}


/* address=140216e40 name=FUN_140216e40 */

void FUN_140216e40(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    if ((*(char *)(param_1 + 0x6c) == '\x03') && (*(char *)(param_1 + 0x6a) == '\x03')) {
      if (*(char *)(param_1 + 0x68) == '\x03') {
        if (*(char *)(param_1 + 0x66) == '\x03') {
          FUN_140219830(param_1 + 0x2a);
          return;
        }
        if (*(char *)(param_1 + 0x66) == '\0') {
          FUN_14021d5f0(param_1 + 0x14);
          return;
        }
      }
      else if (*(char *)(param_1 + 0x68) == '\0') {
        lVar1 = *(longlong *)(param_1 + 6);
        if ((lVar1 != -1) && (lVar1 != 0)) {
          thunk_FUN_140704e90(*(undefined8 *)(param_1 + 8),lVar1,1);
        }
        if (*(longlong *)(param_1 + 0xc) != -1) {
          FUN_140317520();
          if (*(longlong *)(param_1 + 0xc) != 0) {
            thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xe),*(longlong *)(param_1 + 0xc) * 0x18,8
                               );
            return;
          }
        }
      }
    }
  }
  else if ((*param_1 == 1) && (*(longlong *)(param_1 + 4) != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 6),*(longlong *)(param_1 + 4),1);
    return;
  }
  return;
}


/* address=140216fa0 name=FUN_140216fa0 */

void FUN_140216fa0(int *param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (((*(char *)(param_1 + 0x60) == '\x03') && (*(char *)(param_1 + 0x5e) == '\x03')) &&
       (*(char *)(param_1 + 0x5c) == '\x03')) {
      if (*(char *)(param_1 + 0x5a) == '\x03') {
        if (*(char *)(param_1 + 0x58) == '\x03') {
          uVar1 = *(undefined8 *)(param_1 + 0x54);
          ppcVar2 = *(code ***)(param_1 + 0x56);
          if (*ppcVar2 != (code *)0x0) {
            (**ppcVar2)(uVar1);
          }
          if (ppcVar2[1] != (code *)0x0) {
            thunk_FUN_140704e90(uVar1,ppcVar2[1],ppcVar2[2]);
          }
          FUN_14001f8a0(param_1 + 0x38);
          return;
        }
        if (*(char *)(param_1 + 0x58) == '\0') {
          FUN_14021d5f0(param_1 + 0x22);
          return;
        }
      }
      else if (*(char *)(param_1 + 0x5a) == '\0') {
        FUN_14021d5f0(param_1 + 8);
        return;
      }
    }
  }
  else if (*param_1 == 1) {
    if (*(char *)((longlong)param_1 + 0x4d) != '\x02') {
      FUN_14021ca20(*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe));
      return;
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 4),*(longlong *)(param_1 + 2),1);
      return;
    }
  }
  return;
}


/* address=140217100 name=FUN_140217100 */

void FUN_140217100(int *param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (((*(char *)(param_1 + 0x60) == '\x03') && (*(char *)(param_1 + 0x5e) == '\x03')) &&
       (*(char *)(param_1 + 0x5c) == '\x03')) {
      if (*(char *)(param_1 + 0x5a) == '\x03') {
        if (*(char *)(param_1 + 0x58) == '\x03') {
          uVar1 = *(undefined8 *)(param_1 + 0x54);
          ppcVar2 = *(code ***)(param_1 + 0x56);
          if (*ppcVar2 != (code *)0x0) {
            (**ppcVar2)(uVar1);
          }
          if (ppcVar2[1] != (code *)0x0) {
            thunk_FUN_140704e90(uVar1,ppcVar2[1],ppcVar2[2]);
          }
          FUN_14001f8a0(param_1 + 0x38);
          return;
        }
        if (*(char *)(param_1 + 0x58) == '\0') {
          FUN_14021d5f0(param_1 + 0x22);
          return;
        }
      }
      else if (*(char *)(param_1 + 0x5a) == '\0') {
        FUN_14021d5f0(param_1 + 8);
        return;
      }
    }
  }
  else if (*param_1 == 1) {
    if (*(longlong *)(param_1 + 2) != -1) {
      FUN_14021cce0(param_1 + 2);
      return;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 6),*(longlong *)(param_1 + 4),1);
      return;
    }
  }
  return;
}


/* address=140217250 name=FUN_140217250 */

void FUN_140217250(int *param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*param_1 == 0) {
    if (((*(char *)(param_1 + 0x60) == '\x03') && (*(char *)(param_1 + 0x5e) == '\x03')) &&
       (*(char *)(param_1 + 0x5c) == '\x03')) {
      if (*(char *)(param_1 + 0x5a) == '\x03') {
        if (*(char *)(param_1 + 0x58) == '\x03') {
          uVar1 = *(undefined8 *)(param_1 + 0x54);
          ppcVar2 = *(code ***)(param_1 + 0x56);
          if (*ppcVar2 != (code *)0x0) {
            (**ppcVar2)(uVar1);
          }
          if (ppcVar2[1] != (code *)0x0) {
            thunk_FUN_140704e90(uVar1,ppcVar2[1],ppcVar2[2]);
          }
          FUN_14001f8a0(param_1 + 0x38);
          return;
        }
        if (*(char *)(param_1 + 0x58) == '\0') {
          FUN_14021d5f0(param_1 + 0x22);
          return;
        }
      }
      else if (*(char *)(param_1 + 0x5a) == '\0') {
        FUN_14021d5f0(param_1 + 8);
        return;
      }
    }
  }
  else if ((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) {
    if ((int)*(longlong *)(param_1 + 2) != 2) {
      FUN_1400ed7c0(param_1 + 4);
      return;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 6),*(longlong *)(param_1 + 4),1);
      return;
    }
  }
  return;
}


/* address=1402173b0 name=FUN_1402173b0 */

void FUN_1402173b0(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong local_20;
  
  if (*param_1 == 0) {
    FUN_14021a390(param_1 + 2);
    return;
  }
  if (*param_1 == 1) {
    lVar2 = *(longlong *)(param_1 + 2);
    if (lVar2 == -1) {
      uVar1 = *(ulonglong *)(param_1 + 4);
      if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
        local_20 = uVar1 - 1;
        FUN_14073adf0(&local_20);
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 6);
      if (lVar4 != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 4) + 0x20);
        do {
          if (puVar3[-4] != 0) {
            thunk_FUN_140704e90(puVar3[-3],puVar3[-4],1);
          }
          if (puVar3[-1] != 0) {
            thunk_FUN_140704e90(*puVar3,puVar3[-1],1);
          }
          puVar3 = puVar3 + 7;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar2 = *(longlong *)(param_1 + 2);
      }
      if (lVar2 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 4),lVar2 * 0x38,8);
        return;
      }
    }
  }
  return;
}


/* address=1402174a0 name=FUN_1402174a0 */

void FUN_1402174a0(int *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  int *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      if (*(longlong *)(param_1 + 2) != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 4),*(longlong *)(param_1 + 2),1);
      }
      FUN_1400c5990(param_1 + 8);
      return;
    }
    return;
  }
  local_28 = (longlong *)(param_1 + 2);
  local_20 = param_1;
  if (*(char *)((longlong)param_1 + 0x32) != '\x04') {
    if (*(char *)((longlong)param_1 + 0x32) != '\x03') {
      return;
    }
    local_30 = (longlong *)(param_1 + 0xe);
    FUN_1402de930();
    lVar1 = *local_30;
    if ((lVar1 != 2) && (FUN_1406936d0(local_30,*(undefined8 *)(local_20 + 0x14)), lVar1 != 0)) {
      plVar2 = *(longlong **)(local_20 + 0x10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1403fd050(local_20 + 0x10);
      }
    }
    goto switchD_140217595_caseD_4;
  }
  switch(*(undefined *)((longlong)param_1 + 0x389)) {
  case 3:
    if ((*(char *)(param_1 + 0xf8) == '\x03') && (*(char *)(param_1 + 0xf6) == '\x03')) {
      if (*(char *)(param_1 + 0xf4) == '\x03') {
        FUN_1402e4d50(param_1 + 0xf2);
      }
      else if ((*(char *)(param_1 + 0xf4) == '\0') && (*(longlong *)(param_1 + 0xea) != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xec),*(longlong *)(param_1 + 0xea),1);
      }
    }
    goto LAB_1402176e1;
  case 4:
    break;
  case 5:
    if (*(char *)(param_1 + 0xec) == '\x03') {
      if (*(char *)(param_1 + 0xea) == '\x03') {
        FUN_1402e4d50(param_1 + 0xe8);
      }
      else if (*(char *)(param_1 + 0xea) == '\0') {
        plVar2 = *(longlong **)(param_1 + 0xe6);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_1406a8610();
        }
      }
    }
    plVar2 = *(longlong **)(local_20 + 0xee);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1406a8610(local_20 + 0xee);
    }
    if (*(char *)(local_20 + 0x34) == -2) {
      uVar3 = *(ulonglong *)(local_20 + 0x32);
      if ((1 < ((uint)uVar3 & 3) - 2) && ((uVar3 & 3) != 0)) {
        local_38 = uVar3 - 1;
        FUN_14073adf0(&local_38);
      }
    }
    break;
  case 6:
    FUN_1400c5990(param_1 + 0xe4);
    break;
  default:
    goto switchD_140217595_caseD_4;
  }
  FUN_14005ac70(local_20 + 0x16);
  FUN_140063550(local_20 + 0x3c);
LAB_1402176e1:
  piVar4 = local_20;
  if (*(longlong *)(local_20 + 0x36) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(local_20 + 0x38),*(longlong *)(local_20 + 0x36),1);
  }
  *(undefined *)(piVar4 + 0xe2) = 0;
  lVar1 = *(longlong *)(piVar4 + 0xe);
  if (lVar1 != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(local_20 + 0x10),lVar1,1);
  }
switchD_140217595_caseD_4:
  *(undefined *)((longlong)local_20 + 0x31) = 0;
  if (((*(char *)(local_20 + 0xc) != '\0') && (lVar1 = *local_28, lVar1 != 2)) &&
     (FUN_1406936d0(local_28,*(undefined8 *)(local_20 + 8)), lVar1 != 0)) {
    plVar2 = *(longlong **)(local_20 + 4);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1403fd050(local_20 + 4);
    }
  }
  *(undefined *)(local_20 + 0xc) = 0;
  return;
}


/* address=1402179b0 name=FUN_1402179b0 */

void FUN_1402179b0(int *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong local_48;
  longlong *local_40;
  longlong **local_38;
  int *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    FUN_1400c5990(param_1 + 2);
    return;
  }
  local_40 = (longlong *)(param_1 + 2);
  local_30 = param_1;
  if (*(char *)((longlong)param_1 + 0x32) != '\x04') {
    if (*(char *)((longlong)param_1 + 0x32) != '\x03') {
      return;
    }
    local_38 = (longlong **)(param_1 + 0xe);
    FUN_1402decc0();
    plVar1 = *local_38;
    if ((plVar1 != (longlong *)0x2) &&
       (FUN_1406936d0(local_38,*(undefined8 *)(local_30 + 0x14)), plVar1 != (longlong *)0x0)) {
      plVar1 = *(longlong **)(local_30 + 0x10);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1403fd050(local_30 + 0x10);
      }
    }
    goto switchD_140217a8b_caseD_6;
  }
  switch(*(undefined *)((longlong)param_1 + 0x83)) {
  case 3:
    FUN_1402173b0(param_1 + 0x22);
    FUN_1402173b0(local_30 + 0x114);
    goto LAB_140217bc8;
  case 4:
    FUN_14021a390(param_1 + 0x22);
    break;
  case 5:
    FUN_14021a390(param_1 + 0x22);
    break;
  case 6:
    FUN_14021a390(param_1 + 0x22);
    break;
  case 7:
    FUN_14021a390(param_1 + 0x22);
    break;
  case 8:
    FUN_1400c5990(param_1 + 0x2c);
    local_38 = (longlong **)(local_30 + 0x28);
    FUN_14013a1d0();
    FUN_140140980(local_38);
    plVar1 = *local_38;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_140353150(local_38);
    }
    break;
  default:
    goto switchD_140217a8b_caseD_6;
  }
  if (*(longlong *)(local_30 + 0x1a) == -1) {
    uVar2 = *(ulonglong *)(local_30 + 0x1c);
    if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      local_48 = uVar2 - 1;
      FUN_14073adf0(&local_48);
    }
  }
  *(undefined *)((longlong)local_30 + 0x81) = 0;
  if (*(longlong *)(local_30 + 0x14) == -1) {
    uVar2 = *(ulonglong *)(local_30 + 0x16);
    if ((1 < ((uint)uVar2 & 3) - 2) && ((uVar2 & 3) != 0)) {
      local_48 = uVar2 - 1;
      FUN_14073adf0(&local_48);
    }
  }
  *(undefined *)((longlong)local_30 + 0x82) = 0;
LAB_140217bc8:
  piVar3 = local_30;
  if (*(char *)(local_30 + 0x20) != '\0') {
    lVar4 = *(longlong *)(local_30 + 0x12);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(*(longlong *)(local_30 + 0x10) + 0x20);
      do {
        if (puVar5[-4] != 0) {
          thunk_FUN_140704e90(puVar5[-3],puVar5[-4],1);
        }
        if (puVar5[-1] != 0) {
          thunk_FUN_140704e90(*puVar5,puVar5[-1],1);
        }
        puVar5 = puVar5 + 7;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*(longlong *)(piVar3 + 0xe) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(piVar3 + 0x10),*(longlong *)(piVar3 + 0xe) * 0x38,8);
    }
  }
  *(undefined *)(piVar3 + 0x20) = 0;
switchD_140217a8b_caseD_6:
  *(undefined *)((longlong)local_30 + 0x31) = 0;
  if (((*(char *)(local_30 + 0xc) != '\0') && (lVar4 = *local_40, lVar4 != 2)) &&
     (FUN_1406936d0(local_40,*(undefined8 *)(local_30 + 8)), lVar4 != 0)) {
    plVar1 = *(longlong **)(local_30 + 4);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1403fd050(local_30 + 4);
    }
  }
  *(undefined *)(local_30 + 0xc) = 0;
  return;
}


/* address=140217fb0 name=FUN_140217fb0 */

void FUN_140217fb0(int *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    if ((*param_1 == 1) && (*(longlong *)(param_1 + 4) != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 6),*(longlong *)(param_1 + 4),1);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x24c) != '\x03') {
    return;
  }
  cVar1 = *(char *)((longlong)param_1 + 0x113);
  if (cVar1 == '\x05') {
    FUN_14021b6d0(param_1 + 0x4c);
    lVar2 = *(longlong *)(param_1 + 0x46);
    if (lVar2 != -2) {
      if (lVar2 == -1) {
        FUN_1406fe610(param_1 + 0x48);
      }
      else if (lVar2 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x48),lVar2,1);
      }
    }
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x70) == '\x03') {
        if (*(short *)(param_1 + 0x68) == -1) {
          FUN_1402e4d50(param_1 + 0x6a);
        }
      }
      else if ((*(char *)(param_1 + 0x70) == '\0') && (*(longlong *)(param_1 + 0x62) != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 100),*(longlong *)(param_1 + 0x62),1);
      }
      FUN_14001f8a0(param_1 + 0x46);
      goto LAB_14021816d;
    }
    FUN_14021b6d0(param_1 + 0x48);
  }
  *(undefined *)((longlong)param_1 + 0x112) = 0;
  if (*(longlong *)(param_1 + 0x3e) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x40),*(longlong *)(param_1 + 0x3e) << 5,4);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x3a),*(longlong *)(param_1 + 0x38) << 5,4);
  }
  if (*(longlong *)(param_1 + 0x32) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x34),*(longlong *)(param_1 + 0x32) << 5,4);
  }
LAB_14021816d:
  FUN_140060540(param_1 + 0x14);
  return;
}


/* address=1402182b0 name=FUN_1402182b0 */

void FUN_1402182b0(int *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    if (*(longlong *)(param_1 + 4) == 0) {
      return;
    }
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 6),*(longlong *)(param_1 + 4),1);
    return;
  }
  if (*(char *)((longlong)param_1 + 0x4a) == '\x04') {
    if (*(char *)((longlong)param_1 + 0x122) == '\x04') {
      FUN_140059390(param_1 + 0x54);
      FUN_140059390(param_1 + 0x74);
      FUN_140217fb0(param_1 + 0x94);
      if (*(longlong *)(param_1 + 0x42) != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x44),*(longlong *)(param_1 + 0x42),1);
      }
    }
    else {
      if (*(char *)((longlong)param_1 + 0x122) != '\x03') goto LAB_1402184b9;
      FUN_14005f770(param_1 + 0x4e);
    }
    *(undefined *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x3c) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x3e),*(longlong *)(param_1 + 0x3c),1);
    }
    *(undefined *)((longlong)param_1 + 0x121) = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x2a),*(longlong *)(param_1 + 0x28) << 5,4);
    }
    lVar1 = *(longlong *)(param_1 + 0x2e);
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x30),lVar1 << 5,4);
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x1a),*(longlong *)(param_1 + 0x18) << 5,4);
    }
    lVar1 = *(longlong *)(param_1 + 0x1e);
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x20),lVar1 << 5,4);
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x4a) != '\x03') {
      return;
    }
    FUN_1402df440(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x2e4);
    if ((lVar1 != 2) &&
       (FUN_1406936d0(param_1 + 0x2e4,*(undefined8 *)(param_1 + 0x2ea)), lVar1 != 0)) {
      plVar2 = *(longlong **)(param_1 + 0x2e6);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1403fd050(param_1 + 0x2e6);
      }
    }
  }
LAB_1402184b9:
  *(undefined *)((longlong)param_1 + 0x49) = 0;
  if (((*(char *)(param_1 + 0x12) != '\0') && (lVar1 = *(longlong *)(param_1 + 8), lVar1 != 2)) &&
     (FUN_1406936d0(param_1 + 8,*(undefined8 *)(param_1 + 0xe)), lVar1 != 0)) {
    plVar2 = *(longlong **)(param_1 + 10);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1403fd050(param_1 + 10);
    }
  }
  *(undefined *)(param_1 + 0x12) = 0;
  return;
}


/* address=1402186f0 name=FUN_1402186f0 */

void FUN_1402186f0(int *param_1)

{
  longlong **pplVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code **ppcVar5;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    if (*(longlong *)(param_1 + 4) == 0) {
      return;
    }
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 6),*(longlong *)(param_1 + 4),1);
    return;
  }
  if (*(char *)((longlong)param_1 + 0x3a) == '\x04') {
    if (*(char *)(param_1 + 0x60) == '\x03') {
      if (*(char *)(param_1 + 0x18) != '\x04') {
        if (*(char *)(param_1 + 0x18) != '\x03') goto LAB_1402188e6;
        if (*(char *)(param_1 + 0x5e) == '\x03') {
          if (*(char *)(param_1 + 0x5c) == '\x03') {
            uVar4 = *(undefined8 *)(param_1 + 0x58);
            ppcVar5 = *(code ***)(param_1 + 0x5a);
            if (*ppcVar5 != (code *)0x0) {
              (**ppcVar5)(uVar4);
            }
            if (ppcVar5[1] != (code *)0x0) {
              thunk_FUN_140704e90(uVar4,ppcVar5[1],ppcVar5[2]);
            }
            FUN_14001f8a0(param_1 + 0x3c);
          }
          else if (*(char *)(param_1 + 0x5c) == '\0') {
            FUN_14021d5f0(param_1 + 0x26);
          }
        }
      }
      pplVar1 = (longlong **)(param_1 + 0x14);
      FUN_140138ac0();
      FUN_14013ecd0(pplVar1);
      plVar3 = *pplVar1;
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_140353150(pplVar1);
      }
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x3a) != '\x03') {
      return;
    }
    plVar3 = (longlong *)(param_1 + 0x10);
    if (param_1[0x10] != 2) {
      FUN_1406936a0(plVar3,param_1 + 0x16);
    }
    if (*(char *)(param_1 + 0x6a) == '\x03') {
      FUN_14029b790(param_1 + 0x1c);
    }
    if (*(int *)plVar3 != 2) {
      FUN_140693670(plVar3,param_1 + 0x16);
      lVar2 = *plVar3;
      if ((lVar2 != 2) && (FUN_1406936d0(plVar3,*(undefined8 *)(param_1 + 0x16)), lVar2 != 0)) {
        plVar3 = *(longlong **)(param_1 + 0x12);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_1403fd050(param_1 + 0x12);
        }
      }
    }
  }
LAB_1402188e6:
  *(undefined *)((longlong)param_1 + 0x39) = 0;
  if (((*(char *)(param_1 + 0xe) != '\0') && (lVar2 = *(longlong *)(param_1 + 2), lVar2 != 2)) &&
     (FUN_1406936d0(param_1 + 2,*(undefined8 *)(param_1 + 8)), lVar2 != 0)) {
    plVar3 = *(longlong **)(param_1 + 4);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1403fd050(param_1 + 4);
    }
  }
  *(undefined *)(param_1 + 0xe) = 0;
  return;
}


/* address=140218b50 name=FUN_140218b50 */

void FUN_140218b50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x498);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_1403fd110(param_1 + 0x498);
  }
  plVar4 = *(longlong **)(param_1 + 0x4a0);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_1403fe550(param_1 + 0x4a0);
  }
  FUN_1400204e0(param_1);
  FUN_1400edfc0(param_1 + 0x4c8);
  FUN_140219330(param_1 + 0x300);
  lVar3 = *(longlong *)(param_1 + 0x4e0);
  if (lVar3 != 0) {
    LOCK();
    plVar4 = (longlong *)(lVar3 + 0x1f0);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1400a2c20(lVar3 + 0x80);
      FUN_140695d10(lVar3 + 0x100);
    }
    plVar4 = *(longlong **)(param_1 + 0x4e0);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1403fd6b0();
    }
  }
  FUN_140190da0();
  plVar4 = *(longlong **)(param_1 + 0x4a8);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_1403fd6b0();
  }
  lVar3 = *(longlong *)(param_1 + 0x4b0);
  LOCK();
  plVar4 = (longlong *)(lVar3 + 0x1c8);
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_1400a1c40(lVar3 + 0x80);
    FUN_140695d10(lVar3 + 0x100);
  }
  plVar4 = *(longlong **)(param_1 + 0x4b0);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_1403fd5b0();
  }
  FUN_140190270();
  plVar4 = *(longlong **)(param_1 + 0x4b8);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_1403fd5b0();
  }
  lVar3 = *(longlong *)(param_1 + 0x490);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x488);
    do {
      lVar1 = *plVar4;
      if (lVar1 == -2) {
        lVar1 = plVar4[1];
        lVar2 = 8;
      }
      else {
        if ((lVar1 != -1) && (lVar1 != 0)) {
          thunk_FUN_140704e90(plVar4[1],lVar1,1);
        }
        lVar1 = plVar4[3];
        lVar2 = 0x18;
      }
      if ((lVar1 != -1) && (lVar1 != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(lVar2 + 8 + (longlong)plVar4),lVar1,1);
      }
      plVar4 = plVar4 + 6;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x488),*(longlong *)(param_1 + 0x480) * 0x30,8);
  }
  lVar3 = *(longlong *)(param_1 + 0x4c0);
  LOCK();
  plVar4 = (longlong *)(lVar3 + 0x1f0);
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_1400a10a0(lVar3 + 0x80);
    FUN_140695d10(lVar3 + 0x100);
  }
  plVar4 = *(longlong **)(param_1 + 0x4c0);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_1403fd270();
  }
  lVar3 = *(longlong *)(param_1 + 0x430);
  if (lVar3 != 0) {
    LOCK();
    plVar4 = (longlong *)(lVar3 + 0x1f0);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1400a1850(lVar3 + 0x80);
      FUN_140695d10(lVar3 + 0x100);
    }
    plVar4 = *(longlong **)(param_1 + 0x430);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1403fd420();
    }
    FUN_140004610(param_1 + 0x438);
    return;
  }
  return;
}


/* address=1402191f0 name=FUN_1402191f0 */

void FUN_1402191f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x390);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x398),lVar1,1);
  }
  FUN_14005ad80(param_1);
  FUN_1401900a0();
  plVar2 = *(longlong **)(param_1 + 0x400);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_14049d7d0();
  }
  plVar2 = *(longlong **)(param_1 + 0x408);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_140487030(param_1 + 0x408);
    return;
  }
  return;
}


/* address=140219330 name=FUN_140219330 */

void FUN_140219330(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_20;
  
  plVar1 = *(longlong **)(param_1 + 0x108);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1403fd110(param_1 + 0x108);
  }
  lVar2 = 1;
  if (1 < *(ulonglong *)(param_1 + 0xc0)) {
    lVar2 = *(ulonglong *)(param_1 + 0xc0) - 2;
  }
  if (lVar2 == 0) {
    local_20 = *(undefined8 *)(param_1 + 200);
    FUN_140214e70();
  }
  else {
    if (lVar2 != 1) goto LAB_1402193c6;
    local_20 = *(undefined8 *)(param_1 + 0xe0);
    FUN_140214e70();
  }
  thunk_FUN_140704e90(local_20,0x3cf0,0x10);
LAB_1402193c6:
  FUN_140012e90(param_1);
  return;
}


/* address=140219480 name=FUN_140219480 */

void FUN_140219480(longlong param_1)

{
  char cVar1;
  longlong *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  cVar1 = *(char *)(param_1 + 0x152);
  local_18 = param_1;
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x188) == '\x03') {
      FUN_1400cf050(param_1 + 400);
    }
    if (*(char *)(local_18 + 0x158) == '\0') {
      local_20 = (longlong *)FUN_1404950e0(local_18 + 0x159);
      LOCK();
      local_20[2] = local_20[2] + 1;
      UNLOCK();
      LOCK();
      *local_20 = *local_20 + -1;
      UNLOCK();
      if (*local_20 == 0) {
        FUN_1403536c0(&local_20);
      }
      FUN_14001f8a0(local_18 + 0x10);
      return;
    }
  }
  else {
    if (cVar1 == '\x04') {
      FUN_1400ce560(param_1 + 0x178);
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      if (*(char *)(param_1 + 0x188) == '\x03') {
        FUN_1400cf050(param_1 + 400);
      }
    }
    *(undefined *)(local_18 + 0x151) = 0;
  }
  FUN_14001f8a0(local_18 + 0x10);
  return;
}


/* address=1402195e0 name=FUN_1402195e0 */

void FUN_1402195e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0xf10);
  if (cVar1 == '\0') {
    FUN_14009a070(param_1 + 0x410);
    uVar2 = *(undefined8 *)(param_1 + 0x780);
    FUN_140214e70();
    thunk_FUN_140704e90(uVar2,0x3cf0,0x10);
    FUN_1402191f0(param_1);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_140219480(param_1 + 0xf18);
  }
  FUN_1402191f0(param_1 + 0xb00);
  *(undefined *)(param_1 + 0xf11) = 0;
  uVar2 = *(undefined8 *)(param_1 + 0xaf8);
  FUN_140214e70();
  thunk_FUN_140704e90(uVar2,0x3cf0,0x10);
  *(undefined *)(param_1 + 0xf12) = 0;
  FUN_14009a070(param_1 + 0x788);
  *(undefined *)(param_1 + 0xf13) = 0;
  return;
}


/* address=140219830 name=FUN_140219830 */

void FUN_140219830(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    FUN_14021d5f0(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xe8) == '\x03') {
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    ppcVar2 = *(code ***)(param_1 + 0xe0);
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(uVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_140704e90(uVar1,ppcVar2[1],ppcVar2[2]);
    }
    FUN_14001f8a0(param_1 + 0x68);
    return;
  }
  return;
}


/* address=140219900 name=FUN_140219900 */

void FUN_140219900(undefined *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1[0x148] != '\0') {
    if (param_1[0x148] == '\x03') {
      FUN_140219830(param_1 + 0x58);
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
LAB_14021d61d:
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x10),lVar2,1);
      return;
    }
    break;
  case 0x25:
  case 0x26:
    FUN_14000e2a0(*(undefined8 *)(param_1 + 8));
    return;
  case 0x29:
  case 0x2a:
    FUN_14000e1d0(*(undefined8 *)(param_1 + 8));
    return;
  case 0x2c:
  case 0x2d:
    FUN_14000e240(*(undefined8 *)(param_1 + 8));
    return;
  case 0x41:
    FUN_140004d10(param_1 + 0x28);
    return;
  case 0x48:
  case 0x69:
    lVar2 = *(longlong *)(param_1 + 8);
    if (0 < lVar2) goto LAB_14021d61d;
    break;
  case 0x54:
    if (0 < *(longlong *)(param_1 + 8)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 8),1);
    }
    FUN_140001660(param_1 + 0x20);
    return;
  case 0x59:
    if (0 < *(longlong *)(param_1 + 0x20)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x20),1);
    }
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1405dd5e0(param_1 + 8);
      return;
    }
    break;
  case 0x5e:
    FUN_140004d90(param_1 + 8);
    return;
  }
  return;
}


/* address=140219920 name=FUN_140219920 */

void FUN_140219920(ulonglong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong local_28;
  ulonglong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  switch(*(undefined *)((longlong)param_1 + 0xe3)) {
  case 3:
    FUN_140102e60(param_1 + 0x1d);
    return;
  case 4:
    if (*(char *)(param_1 + 0x48) == '\x03') {
      if (*(char *)(param_1 + 0x47) == '\x03') {
        FUN_140219830(param_1 + 0x29);
      }
      else if (*(char *)(param_1 + 0x47) == '\0') {
        FUN_14021d5f0(param_1 + 0x1e);
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x48) == '\x03') {
      if (*(char *)(param_1 + 0x47) == '\x03') {
        FUN_140219830(param_1 + 0x29);
      }
      else if (*(char *)(param_1 + 0x47) == '\0') {
        FUN_14021d5f0(param_1 + 0x1e);
      }
    }
    break;
  case 6:
    uVar1 = param_1[0x1d];
    cVar2 = FUN_1406b2a60(uVar1);
    if (cVar2 != '\0') {
      FUN_1406b6080(uVar1);
    }
    break;
  case 7:
    FUN_140102e60(param_1 + 0x1d);
    goto LAB_140219b4e;
  case 8:
    if (*(char *)(param_1 + 0x48) == '\x03') {
      if (*(char *)(param_1 + 0x46) == '\x03') {
        FUN_140219830(param_1 + 0x28);
      }
      else if (*(char *)(param_1 + 0x46) == '\0') {
        FUN_14021d5f0(param_1 + 0x1d);
      }
    }
    goto LAB_140219ae4;
  case 9:
    if (*(char *)(param_1 + 0x48) == '\x03') {
      if (*(char *)(param_1 + 0x46) == '\x03') {
        FUN_140219830(param_1 + 0x28);
      }
      else if (*(char *)(param_1 + 0x46) == '\0') {
        FUN_14021d5f0(param_1 + 0x1d);
      }
    }
LAB_140219ae4:
    uVar1 = local_20[0x1b];
    cVar2 = FUN_1406b2a60(uVar1);
    if (cVar2 != '\0') {
      FUN_1406b6080(uVar1);
    }
    FUN_140020040(local_20 + 0x14);
    if (*(int *)(local_20 + 6) == -1) {
      uVar1 = *local_20;
      if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
        local_28 = uVar1 - 1;
        FUN_14073adf0(&local_28);
      }
    }
LAB_140219b4e:
    if (local_20[0x13] != 0) {
      FUN_1406fe610(local_20 + 0x13);
    }
    break;
  default:
    return;
  }
  uVar1 = local_20[0x12];
  cVar2 = FUN_1406b2a60(uVar1);
  if (cVar2 != '\0') {
    FUN_1406b6080(uVar1);
  }
  if (*(char *)((longlong)local_20 + 0xe2) != '\0') {
    FUN_140020040(local_20 + 0xb);
  }
  *(undefined *)((longlong)local_20 + 0xe2) = 0;
  return;
}


/* address=140219d30 name=FUN_140219d30 */

void FUN_140219d30(longlong param_1)

{
  if (*(char *)(param_1 + 0x158) == '\x03') {
    if (*(char *)(param_1 + 0x148) == '\x03') {
      FUN_140219830(param_1 + 0x58);
      return;
    }
    if (*(char *)(param_1 + 0x148) == '\0') {
      FUN_14021d5f0();
      return;
    }
  }
  return;
}


/* address=140219d60 name=FUN_140219d60 */

void FUN_140219d60(longlong param_1)

{
  if (*(char *)(param_1 + 0x158) == '\x03') {
    if (*(char *)(param_1 + 0x150) == '\x03') {
      FUN_140219830(param_1 + 0x60);
      return;
    }
    if (*(char *)(param_1 + 0x150) == '\0') {
      FUN_14021d5f0(param_1 + 8);
      return;
    }
  }
  return;
}


/* address=140219d90 name=FUN_140219d90 */

void FUN_140219d90(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  code **ppcVar4;
  
  cVar1 = *(char *)(param_1 + 0x350);
  if (cVar1 == '\0') {
    if ((*(short *)(param_1 + 0xf8) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x108),*(longlong *)(param_1 + 0x100),1);
    }
    if ((*(short *)(param_1 + 0x120) != 0) && (*(longlong *)(param_1 + 0x128) != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x130),*(longlong *)(param_1 + 0x128),1);
    }
    FUN_1401e15f0(param_1);
    FUN_14000e510(param_1 + 0x40);
    FUN_1402f7310(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 200),*(longlong *)(param_1 + 0xc0) * 0x110,8);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      lVar3 = *(longlong *)(param_1 + 0x360);
      if (lVar3 != 0) {
        ppcVar4 = *(code ***)(param_1 + 0x368);
        if (*ppcVar4 != (code *)0x0) {
          (**ppcVar4)(lVar3);
        }
        if (ppcVar4[1] != (code *)0x0) {
          thunk_FUN_140704e90(lVar3,ppcVar4[1],ppcVar4[2]);
        }
      }
      *(undefined *)(param_1 + 0x357) = 0;
      cVar1 = *(char *)(param_1 + 0x358);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x3f8);
      FUN_140219d90();
      thunk_FUN_140704e90(uVar2,0x4b0,8);
      if (*(longlong *)(param_1 + 0x360) != -2) {
        *(undefined *)(param_1 + 0x354) = 0;
      }
      *(undefined *)(param_1 + 0x354) = 0;
      if (*(longlong *)(param_1 + 0x400) == -1) {
        if (*(char *)(param_1 + 0x355) != '\0') {
          if (*(char *)(param_1 + 0x408) == '\x02') {
            *(undefined *)(param_1 + 0x356) = 0;
          }
          else {
            FUN_14021c390(param_1 + 0x408);
          }
        }
        *(undefined *)(param_1 + 0x355) = 0;
        *(undefined2 *)(param_1 + 0x355) = 0;
        cVar1 = *(char *)(param_1 + 0x357);
      }
      else {
        *(undefined2 *)(param_1 + 0x355) = 0;
        cVar1 = *(char *)(param_1 + 0x357);
      }
      if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x2a0) == -1)) {
        FUN_14021c390(param_1 + 0x2a8);
      }
      *(undefined *)(param_1 + 0x357) = 0;
      *(undefined *)(param_1 + 0x357) = 0;
      cVar1 = *(char *)(param_1 + 0x358);
    }
    if (cVar1 != '\0') {
      FUN_1402f7310(*(undefined8 *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x298));
      if (*(longlong *)(param_1 + 0x288) != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x290),*(longlong *)(param_1 + 0x288) * 0x110,
                            8);
      }
    }
    *(undefined *)(param_1 + 0x358) = 0;
    FUN_1401e15f0(param_1 + 0x1c8);
    FUN_14000e510(param_1 + 0x208);
    if ((*(short *)(param_1 + 0x150) != 0) && (*(longlong *)(param_1 + 0x158) != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x160),*(longlong *)(param_1 + 0x158),1);
    }
    if ((*(short *)(param_1 + 0x178) != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x188),*(longlong *)(param_1 + 0x180),1);
    }
    *(undefined *)(param_1 + 0x359) = 0;
  }
  return;
}


/* address=14021a390 name=FUN_14021a390 */

void FUN_14021a390(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x77) == '\0') {
    lVar3 = *param_1;
    if (lVar3 < 0) {
      return;
    }
    goto joined_r0x00014021a408;
  }
  if (*(char *)(param_1 + 0x77) != '\x03') {
    return;
  }
  switch(*(undefined *)(param_1 + 0x6b)) {
  case 0:
    lVar3 = param_1[9];
    lVar2 = 0x48;
    if (lVar3 < 0) break;
    goto LAB_14021a5b7;
  case 3:
    if ((*(char *)(param_1 + 0x76) == '\x03') && (*(char *)(param_1 + 0x75) == '\x03')) {
      if (*(char *)(param_1 + 0x74) == '\x03') {
        FUN_1402e4d50(param_1 + 0x73);
      }
      else if ((*(char *)(param_1 + 0x74) == '\0') && (param_1[0x6f] != 0)) {
        thunk_FUN_140704e90(param_1[0x70],param_1[0x6f],1);
      }
    }
    goto LAB_14021a4fa;
  case 5:
    if (*(char *)(param_1 + 0x70) == '\x03') {
      if (*(char *)(param_1 + 0x6f) == '\x03') {
        FUN_1402e4d50(param_1 + 0x6e);
      }
      else if (*(char *)(param_1 + 0x6f) == '\0') {
        plVar1 = (longlong *)param_1[0x6d];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_1406a8610();
        }
      }
    }
    plVar1 = (longlong *)param_1[0x75];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1406a8610(param_1 + 0x75);
    }
  case 4:
    FUN_140063550(param_1 + 0x18);
LAB_14021a4fa:
    if (param_1[0x14] != 0) {
      thunk_FUN_140704e90(param_1[0x15],param_1[0x14],1);
    }
    lVar3 = param_1[0x13];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(param_1[0x12] + 0x28);
      do {
        if (puVar4[-5] != 0) {
          thunk_FUN_140704e90(puVar4[-4],puVar4[-5],1);
        }
        lVar2 = puVar4[-1];
        if ((-1 < lVar2) && (lVar2 != 0)) {
          thunk_FUN_140704e90(*puVar4,lVar2,1);
        }
        puVar4 = puVar4 + 10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[0x11] != 0) {
      thunk_FUN_140704e90(param_1[0x12],param_1[0x11] * 0x50,8);
    }
    *(undefined *)((longlong)param_1 + 0x359) = 0;
    lVar3 = param_1[0xd];
    lVar2 = 0x68;
    if (-1 < lVar3) {
LAB_14021a5b7:
      if (lVar3 != 0) {
        thunk_FUN_140704e90(*(undefined8 *)((longlong)param_1 + lVar2 + 8),lVar3,1);
      }
    }
  }
  lVar3 = param_1[4];
  if (lVar3 < 0) {
    return;
  }
  param_1 = param_1 + 4;
joined_r0x00014021a408:
  if (lVar3 == 0) {
    return;
  }
  thunk_FUN_140704e90(param_1[1],lVar3,1);
  return;
}


/* address=14021a730 name=FUN_14021a730 */

void FUN_14021a730(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x42) == '\x03') {
    plVar2 = (longlong *)(param_1 + 0x48);
    FUN_1402ddfa0();
    lVar1 = *plVar2;
    if ((lVar1 != 2) && (FUN_1406936d0(plVar2,*(undefined8 *)(param_1 + 0x60)), lVar1 != 0)) {
      plVar2 = *(longlong **)(param_1 + 0x50);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1403fd050(param_1 + 0x50);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x42) != '\x04') {
      return;
    }
    FUN_140219920(param_1 + 0x48);
  }
  *(undefined *)(param_1 + 0x41) = 0;
  if (((*(char *)(param_1 + 0x40) != '\0') && (lVar1 = *(longlong *)(param_1 + 0x18), lVar1 != 2))
     && (FUN_1406936d0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30),param_3,param_4,param_1 + 0x18
                       ,param_1,uVar3), lVar1 != 0)) {
    plVar2 = *(longlong **)(param_1 + 0x20);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1403fd050(param_1 + 0x20);
    }
  }
  *(undefined *)(param_1 + 0x40) = 0;
  return;
}


/* address=14021a8e0 name=FUN_14021a8e0 */

void FUN_14021a8e0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = *(char *)((longlong)param_1 + 0x81);
  if (cVar2 == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_140704e90(param_1[1],*param_1,1);
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
  else {
    if (cVar2 == '\x03') {
      FUN_140104190(param_1 + 0x1b);
      thunk_FUN_140704e90(param_1[0x1a],0x18,8);
      plVar3 = (longlong *)param_1[0xf];
      LOCK();
      *plVar3 = *plVar3 + -1;
      lVar1 = *plVar3;
      UNLOCK();
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      FUN_14021ace0(param_1 + 0x11);
      plVar3 = (longlong *)param_1[0xf];
      LOCK();
      *plVar3 = *plVar3 + -1;
      lVar1 = *plVar3;
      UNLOCK();
    }
    if (lVar1 == 0) {
      FUN_140527ce0(param_1 + 0xf);
    }
    *(undefined *)((longlong)param_1 + 0x86) = 0;
    if ((*(char *)((longlong)param_1 + 0x82) != '\0') && (param_1[0xc] != 0)) {
      thunk_FUN_140704e90(param_1[0xd],param_1[0xc],1);
    }
    *(undefined *)((longlong)param_1 + 0x82) = 0;
    if ((*(char *)((longlong)param_1 + 0x83) != '\0') && (param_1[0x17] != 0)) {
      thunk_FUN_140704e90(param_1[0x18],param_1[0x17],1);
    }
    *(undefined *)((longlong)param_1 + 0x83) = 0;
    if ((*(char *)((longlong)param_1 + 0x84) != '\0') && (param_1[0x14] != 0)) {
      thunk_FUN_140704e90(param_1[0x15],param_1[0x14],1);
    }
    *(undefined *)((longlong)param_1 + 0x84) = 0;
    if ((*(char *)((longlong)param_1 + 0x85) != '\0') && (param_1[0x11] != 0)) {
      thunk_FUN_140704e90(param_1[0x12],param_1[0x11],1);
    }
    *(undefined *)((longlong)param_1 + 0x85) = 0;
  }
  return;
}


/* address=14021ace0 name=FUN_14021ace0 */

void FUN_14021ace0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  switch(*(undefined *)(param_1 + 0x23)) {
  case 0:
    if (*param_1 != 0) {
      thunk_FUN_140704e90(param_1[1],*param_1,1);
    }
    if (param_1[3] != 0) {
      thunk_FUN_140704e90(param_1[4],param_1[3],1);
    }
    if (param_1[6] != 0) {
      thunk_FUN_140704e90(param_1[7],param_1[6],1);
    }
    lVar3 = param_1[0xb];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(param_1[10] + 8);
      do {
        if (puVar4[-1] != 0) {
          thunk_FUN_140704e90(*puVar4,puVar4[-1],1);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[9] == 0) {
      return;
    }
    lVar2 = param_1[10];
    lVar3 = param_1[9] * 0x18;
    uVar5 = 8;
    goto LAB_14021aff7;
  default:
    goto switchD_14021ad1b_caseD_1;
  case 3:
    FUN_14005b940(param_1 + 0x25);
    goto LAB_14021aebc;
  case 4:
    if (*(char *)(param_1 + 0x32) == '\x03') {
      if ((*(char *)(param_1 + 0x31) == '\x03') && (*(char *)(param_1 + 0x30) == '\x03')) {
        lVar3 = param_1[0x2f];
        cVar1 = FUN_1406b2a60(lVar3);
        if (cVar1 != '\0') {
          FUN_1406b6080(lVar3);
        }
      }
      if (param_1[0x25] != 0) {
        thunk_FUN_140704e90(param_1[0x26],param_1[0x25],1);
      }
    }
    break;
  case 5:
    FUN_140107650(param_1 + 0x3a);
    *(undefined *)((longlong)param_1 + 0x11d) = 0;
    FUN_1400611e0(param_1 + 0x28);
    *(undefined2 *)((longlong)param_1 + 0x11e) = 0;
    if (param_1[0x25] != 0) {
      thunk_FUN_140704e90(param_1[0x26],param_1[0x25],1);
    }
    *(undefined *)(param_1 + 0x24) = 0;
  }
  if (param_1[0x20] != 0) {
    thunk_FUN_140704e90(param_1[0x21],param_1[0x20],1);
  }
LAB_14021aebc:
  if ((*(char *)((longlong)param_1 + 0x119) != '\0') && (param_1[0x1d] != 0)) {
    thunk_FUN_140704e90(param_1[0x1e],param_1[0x1d],1);
  }
  *(undefined *)((longlong)param_1 + 0x119) = 0;
  if ((*(char *)((longlong)param_1 + 0x11a) != '\0') && (param_1[0x1a] != 0)) {
    thunk_FUN_140704e90(param_1[0x1b],param_1[0x1a],1);
  }
  *(undefined *)((longlong)param_1 + 0x11a) = 0;
  lVar3 = param_1[0x19];
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1[0x18] + 8);
    do {
      if (puVar4[-1] != 0) {
        thunk_FUN_140704e90(*puVar4,puVar4[-1],1);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_1[0x17] != 0) {
    thunk_FUN_140704e90(param_1[0x18],param_1[0x17] * 0x18,8);
  }
  if ((*(char *)((longlong)param_1 + 0x11b) != '\0') && (param_1[0x14] != 0)) {
    thunk_FUN_140704e90(param_1[0x15],param_1[0x14],1);
  }
  *(undefined *)((longlong)param_1 + 0x11b) = 0;
  if ((*(char *)((longlong)param_1 + 0x11c) != '\0') && (param_1[0x11] != 0)) {
    thunk_FUN_140704e90(param_1[0x12],param_1[0x11],1);
  }
  *(undefined *)((longlong)param_1 + 0x11c) = 0;
  lVar3 = param_1[0xe];
  if (lVar3 == 0) {
switchD_14021ad1b_caseD_1:
    return;
  }
  lVar2 = param_1[0xf];
  uVar5 = 1;
LAB_14021aff7:
  thunk_FUN_140704e90(lVar2,lVar3,uVar5);
  return;
}


/* address=14021b300 name=FUN_14021b300 */

void FUN_14021b300(longlong *param_1)

{
  if (*(char *)(param_1 + 0x9b) == '\0') {
    if (*param_1 != 0) {
      thunk_FUN_140704e90(param_1[1],*param_1,1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x9b) == '\x03') {
    FUN_14021a8e0(param_1 + 0x17);
    *(undefined *)((longlong)param_1 + 0x4d9) = 0;
    if (param_1[0x11] != 0) {
      thunk_FUN_140704e90(param_1[0x12],param_1[0x11],1);
    }
    *(undefined *)((longlong)param_1 + 0x4da) = 0;
    if (param_1[9] != 0) {
      thunk_FUN_140704e90(param_1[10],param_1[9],1);
    }
    *(undefined *)((longlong)param_1 + 0x4db) = 0;
    if (param_1[3] != 0) {
      thunk_FUN_140704e90(param_1[4],param_1[3],1);
    }
    *(undefined *)((longlong)param_1 + 0x4dc) = 0;
  }
  return;
}


/* address=14021b460 name=FUN_14021b460 */

void FUN_14021b460(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)((longlong)param_1 + 0x32) == '\x03') {
    plVar2 = param_1 + 7;
    if (*(int *)(param_1 + 7) != 2) {
      FUN_1406936a0(plVar2,param_1 + 10);
    }
    if (*(char *)(param_1 + 0x292) == '\x03') {
      FUN_1402a1f70(param_1 + 0xd);
    }
    if (*(int *)plVar2 != 2) {
      FUN_140693670(plVar2,param_1 + 10);
      lVar1 = *plVar2;
      if ((lVar1 != 2) && (FUN_1406936d0(plVar2,param_1[10]), lVar1 != 0)) {
        plVar2 = (longlong *)param_1[8];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_1403fd050(param_1 + 8);
        }
      }
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x32) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x28d) == '\x03') {
      FUN_14021d9b0(param_1 + 8);
    }
  }
  *(undefined *)((longlong)param_1 + 0x31) = 0;
  if (((*(char *)(param_1 + 6) != '\0') && (lVar1 = *param_1, lVar1 != 2)) &&
     (FUN_1406936d0(param_1,param_1[3]), lVar1 != 0)) {
    plVar2 = (longlong *)param_1[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1403fd050(param_1 + 1);
    }
  }
  *(undefined *)(param_1 + 6) = 0;
  return;
}


/* address=14021b6d0 name=FUN_14021b6d0 */

void FUN_14021b6d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong **pplVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong local_40;
  longlong **local_38;
  longlong local_30;
  longlong **local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = param_1;
  switch(*(undefined *)(param_1 + 0x530)) {
  case 0:
    FUN_140060540(param_1 + 0x280);
    return;
  default:
    goto switchD_14021b70a_caseD_1;
  case 3:
    if ((*(char *)(param_1 + 0x580) == '\x03') && (*(short *)(param_1 + 0x560) == -1)) {
      uVar5 = *(ulonglong *)(param_1 + 0x568);
      if ((1 < ((uint)uVar5 & 3) - 2) && ((uVar5 & 3) != 0)) {
        local_40 = uVar5 - 1;
        FUN_14073adf0(&local_40);
      }
    }
    goto LAB_14021bcc5;
  case 4:
    if ((*(char *)(param_1 + 0x590) == '\x03') && (*(short *)(param_1 + 0x570) == -1)) {
      uVar5 = *(ulonglong *)(param_1 + 0x578);
      if ((1 < ((uint)uVar5 & 3) - 2) && ((uVar5 & 3) != 0)) {
        local_40 = uVar5 - 1;
        FUN_14073adf0(&local_40);
      }
    }
    goto LAB_14021bca7;
  case 5:
    local_28 = *(longlong ***)(param_1 + 0x558);
    if (*(char *)(local_28 + 0x90c) == '\x03') {
      local_38 = local_28 + 0x908;
      FUN_140695970();
      if (*local_38 != (longlong *)0x0) {
        thunk_FUN_140a05bb0();
        plVar1 = *local_38;
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_1406955a0();
        }
      }
      *(undefined *)((longlong)local_28 + 0x4863) = 0;
      local_38 = local_28 + 0x906;
      FUN_14018fd10();
      plVar1 = *local_38;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1403fd270();
      }
      pplVar4 = local_28;
      if (local_28[0x902] != (longlong *)0x0) {
        thunk_FUN_140704e90(local_28[0x903],local_28[0x902],1);
      }
      FUN_14005ad80(pplVar4 + 0x8c);
      *(undefined *)((longlong)local_28 + 0x4864) = 0;
      *(undefined2 *)((longlong)local_28 + 0x4861) = 0;
    }
    else if (*(char *)(local_28 + 0x90c) == '\0') {
      plVar1 = local_28[0x7a];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1403fe550(local_28 + 0x7a);
      }
      plVar1 = local_28[0x7b];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1403fe550(local_28 + 0x7b);
      }
      FUN_14005ad80(local_28);
    }
    thunk_FUN_140704e90(local_28,0x4870,0x10);
    *(undefined2 *)(local_30 + 0x538) = 0;
    cVar2 = *(char *)(local_30 + 0x531);
    goto joined_r0x00014021bc7d;
  case 6:
    if (*(char *)(param_1 + 0x650) == '\x03') {
      local_28 = (longlong **)(param_1 + 0x648);
      FUN_140167970();
      plVar1 = *local_28;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_140486a00();
        }
      }
      *(undefined *)(local_30 + 0x651) = 0;
    }
    else if (*(char *)(param_1 + 0x650) == '\0') {
      if ((9 < *(byte *)(param_1 + 0x618)) && (*(longlong *)(param_1 + 0x628) != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x620),*(longlong *)(param_1 + 0x628),1);
      }
      local_28 = (longlong **)(param_1 + 0x540);
      FUN_140060540(param_1 + 0x5a0);
      FUN_14001f050(local_28);
      local_28 = *(longlong ***)(local_30 + 0x630);
      if (local_28 != (longlong **)0x0) {
        FUN_1400c5820();
        thunk_FUN_140704e90(local_28,0x20,8);
      }
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x67a) == '\x04') {
      FUN_14001f8a0(param_1 + 0x680);
    }
    else {
      if (*(char *)(param_1 + 0x67a) != '\x03') goto LAB_14021ba09;
      local_28 = (longlong **)(param_1 + 0x680);
      lVar3 = *(longlong *)(param_1 + 0x6f0);
      if (lVar3 != 0) {
        local_38 = (longlong **)(param_1 + 0x6f0);
        uVar5 = *(ulonglong *)(lVar3 + 0x40);
        do {
          LOCK();
          uVar6 = *(ulonglong *)(lVar3 + 0x40);
          bVar7 = uVar5 == uVar6;
          if (bVar7) {
            *(ulonglong *)(lVar3 + 0x40) = uVar5 | 4;
            uVar6 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar6;
        } while (!bVar7);
        if (((uint)uVar6 & 10) == 8) {
          (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x10))(*(undefined8 *)(lVar3 + 0x28));
        }
        if (((uint)uVar6 & 3) == 1) {
          LOCK();
          *(ulonglong *)(lVar3 + 0x40) = *(ulonglong *)(lVar3 + 0x40) & 0xfffffffffffffffe;
          UNLOCK();
          FUN_1406a4250(lVar3 + 0x30);
        }
        if ((uVar6 & 2) != 0) {
          *(undefined8 *)(lVar3 + 0x10) = 2;
        }
        plVar1 = *local_38;
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            FUN_1403fd1b0();
          }
        }
      }
      FUN_14001f8a0(local_28);
    }
    *(undefined *)(local_30 + 0x678) = 0;
    *(undefined *)(local_30 + 0x679) = 0;
LAB_14021ba09:
    if (*(char *)(local_30 + 0x535) != '\0') goto LAB_14021ba1a;
    break;
  case 8:
    if (*(char *)(param_1 + 0x7f0) != '\x03') {
      if (*(char *)(param_1 + 0x7f0) == '\0') {
        FUN_140055a70(param_1 + 0x540);
      }
      goto LAB_14021ba09;
    }
    if (*(longlong *)(param_1 + 2000) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x7d8),*(longlong *)(param_1 + 2000),1);
    }
    FUN_140063350(param_1 + 0x728);
    if (*(longlong ***)(local_30 + 0x718) != (longlong **)0x0) {
      local_28 = *(longlong ***)(local_30 + 0x718);
      FUN_1400c5820();
      thunk_FUN_140704e90(local_28,0x20,8);
    }
    *(undefined *)(local_30 + 0x7f1) = 0;
    if (*(char *)(local_30 + 0x535) == '\0') break;
LAB_14021ba1a:
    FUN_140055a70(local_30 + 0x540);
  }
  *(undefined2 *)(local_30 + 0x535) = 0;
  local_28 = (longlong **)(local_30 + 0x528);
  lVar3 = *(longlong *)(local_30 + 0x528);
  LOCK();
  plVar1 = (longlong *)(lVar3 + 0x1c8);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1400a2260(lVar3 + 0x80);
    FUN_140695d10(lVar3 + 0x100);
  }
  plVar1 = *local_28;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_140486c90();
  }
  local_28 = (longlong **)(local_30 + 0x520);
  lVar3 = *(longlong *)(local_30 + 0x520);
  LOCK();
  plVar1 = (longlong *)(lVar3 + 0x1c8);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1400a1c40(lVar3 + 0x80);
    FUN_140695d10(lVar3 + 0x100);
  }
  plVar1 = *local_28;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_14049dc90();
  }
  *(undefined *)(local_30 + 0x537) = 0;
  *(undefined2 *)(local_30 + 0x538) = 0;
  cVar2 = *(char *)(local_30 + 0x531);
joined_r0x00014021bc7d:
  if (cVar2 != '\0') {
    FUN_140013780(local_30 + 0x540);
  }
  *(undefined2 *)(local_30 + 0x531) = 0;
  FUN_140060f60(local_30 + 0x60);
LAB_14021bca7:
  if (*(char *)(local_30 + 0x533) != '\0') {
    FUN_1400ff290(local_30 + 0x370);
  }
LAB_14021bcc5:
  *(undefined *)(local_30 + 0x533) = 0;
  if (*(char *)(local_30 + 0x534) != '\0') {
    FUN_140060540(local_30 + 0x2f8);
  }
  *(undefined *)(local_30 + 0x534) = 0;
switchD_14021b70a_caseD_1:
  return;
}


/* address=14021c390 name=FUN_14021c390 */

void FUN_14021c390(undefined *param_1)

{
  short *psVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_30;
  
  switch(*param_1) {
  case 0:
  case 4:
  case 6:
  case 7:
  case 10:
  case 0xc:
    break;
  case 1:
    plVar3 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_140455990(param_1 + 8);
      return;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 8) != 2) {
      psVar1 = *(short **)(param_1 + 0x10);
      if ((*psVar1 != 0) && (*(longlong *)(psVar1 + 4) != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(psVar1 + 8),*(longlong *)(psVar1 + 4),1);
      }
      if ((psVar1[0x14] != 0) && (*(longlong *)(psVar1 + 0x18) != 0)) {
        thunk_FUN_140704e90(*(undefined8 *)(psVar1 + 0x1c),*(longlong *)(psVar1 + 0x18),1);
      }
      thunk_FUN_140704e90(psVar1,0x58,8);
      FUN_140001780(*(undefined8 *)(param_1 + 0x18));
      plVar3 = *(longlong **)(param_1 + 0x20);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_140455a70(param_1 + 0x20);
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x30);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_140455cb0(param_1 + 0x30);
          return;
        }
      }
    }
    break;
  case 3:
    plVar3 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1404558b0(param_1 + 8);
      return;
    }
    break;
  default:
    lVar8 = *(longlong *)(param_1 + 8);
    if (lVar8 == 0) {
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x10);
    goto LAB_14021c3d7;
  case 8:
    FUN_14021c900(param_1 + 8);
    return;
  case 9:
    plVar3 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1404559c0(param_1 + 8);
      return;
    }
    break;
  case 0xb:
    switch(param_1[8]) {
    case 0:
    case 1:
      if (*(longlong *)(param_1 + 0x10) == 0) {
        return;
      }
      lVar7 = *(longlong *)(param_1 + 0x18);
      lVar8 = *(longlong *)(param_1 + 0x10) * 2;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      goto switchD_14021c3bf_caseD_0;
    case 8:
      lVar8 = *(longlong *)(param_1 + 0x10);
      if (lVar8 == -1 || lVar8 < -0x7fffffffffffffeb) {
        return;
      }
      lVar7 = *(longlong *)(param_1 + 0x18);
      lVar2 = *(longlong *)(param_1 + 0x20);
      local_30 = 0;
      lVar6 = lVar7;
      while (lVar2 != local_30) {
        local_30 = local_30 + 1;
        FUN_1402f5220(lVar6);
        lVar6 = lVar6 + 0x70;
      }
      if (lVar8 == 0) {
        return;
      }
      lVar8 = lVar8 * 0x70;
      uVar9 = 8;
      goto LAB_14021c3dd;
    case 0xb:
      uVar5 = 0x10;
      if ((longlong)*(ulonglong *)(param_1 + 0x10) < 0) {
        uVar5 = *(ulonglong *)(param_1 + 0x10) ^ 0x8000000000000000;
      }
      switch(uVar5) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xf:
      case 0x11:
      case 0x13:
      case 0x14:
        goto switchD_14021c3bf_caseD_0;
      case 0xd:
        goto switchD_14021c609_caseD_d;
      case 0xe:
switchD_14021c609_caseD_e:
        if (*(longlong *)(param_1 + 0x18) != 0) {
          thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x18),1);
        }
        lVar8 = *(longlong *)(param_1 + 0x30);
        if (lVar8 == 0) {
          return;
        }
        lVar7 = *(longlong *)(param_1 + 0x38);
        goto LAB_14021c3d7;
      case 0x10:
        if (((param_1[0x28] == '\0') && (lVar8 = *(longlong *)(param_1 + 0x30), lVar8 != -1)) &&
           (lVar8 != 0)) {
          thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x38),lVar8,1);
        }
        FUN_140317520(param_1 + 0x10);
        lVar8 = *(longlong *)(param_1 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        lVar7 = *(longlong *)(param_1 + 0x18);
        break;
      case 0x12:
        lVar8 = *(longlong *)(param_1 + 0x30);
        if ((-0x7fffffffffffffff < lVar8) && (lVar8 != 0)) {
          thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x38),lVar8 << 3,8);
        }
        FUN_140317bf0();
        lVar8 = *(longlong *)(param_1 + 0x18);
        if (lVar8 == 0) {
          return;
        }
        lVar7 = *(longlong *)(param_1 + 0x20);
        break;
      default:
switchD_14021c609_caseD_15:
        plVar3 = *(longlong **)(param_1 + 0x18);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          param_1 = param_1 + 0x18;
LAB_14021c6fb:
          FUN_1403fd050(param_1);
          return;
        }
        goto switchD_14021c3bf_caseD_0;
      }
      lVar8 = lVar8 * 0x18;
      uVar9 = 8;
      goto LAB_14021c3dd;
    case 0xc:
      if (*(longlong *)(param_1 + 0x10) == 7) goto switchD_14021c609_caseD_15;
      iVar4 = (int)*(longlong *)(param_1 + 0x10);
      if (iVar4 == 3) goto switchD_14021c609_caseD_e;
      if (iVar4 != 2) {
        return;
      }
switchD_14021c609_caseD_d:
      if (*(longlong *)(param_1 + 0x18) != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x18),1);
      }
      if (*(longlong *)(param_1 + 0x30) == 0) {
        return;
      }
      lVar7 = *(longlong *)(param_1 + 0x38);
      lVar8 = *(longlong *)(param_1 + 0x30) << 4;
      uVar9 = 8;
      goto LAB_14021c3dd;
    case 0xd:
      lVar8 = *(longlong *)(param_1 + 0x10);
      if (lVar8 == 0) {
        return;
      }
      lVar7 = *(longlong *)(param_1 + 0x18);
      break;
    default:
      plVar3 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 != 0) {
        return;
      }
      param_1 = param_1 + 0x10;
      goto LAB_14021c6fb;
    }
LAB_14021c3d7:
    uVar9 = 1;
LAB_14021c3dd:
    thunk_FUN_140704e90(lVar7,lVar8,uVar9);
    return;
  }
switchD_14021c3bf_caseD_0:
  return;
}


/* address=14021c900 name=FUN_14021c900 */

void FUN_14021c900(undefined *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  switch(*param_1) {
  case 1:
    uVar3 = *(ulonglong *)(param_1 + 8);
    uVar1 = 0x1b;
    if ((longlong)uVar3 < 0) {
      uVar1 = uVar3 ^ 0x8000000000000000;
    }
    switch(uVar1) {
    case 0:
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      FUN_140021060(uVar2);
      thunk_FUN_140704e90(uVar2,0x50,8);
      return;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xc:
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
      goto switchD_14021c92b_caseD_3;
    case 0xb:
    case 0xd:
      uVar3 = *(ulonglong *)(param_1 + 0x10);
      if (uVar3 == 0) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      goto LAB_14021c93a;
    }
    break;
  case 2:
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_14021c900();
    thunk_FUN_140704e90(uVar2,0x30,8);
    return;
  default:
    goto switchD_14021c92b_caseD_3;
  case 5:
  case 10:
    uVar3 = *(ulonglong *)(param_1 + 8);
  }
  if (uVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
LAB_14021c93a:
    thunk_FUN_140704e90(uVar2,uVar3,1);
    return;
  }
switchD_14021c92b_caseD_3:
  return;
}


/* address=14021ca20 name=FUN_14021ca20 */

void FUN_14021ca20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if (lVar1 != 0) {
      thunk_FUN_140704e90(param_1[1],lVar1,1);
    }
    if (param_1[3] != 0) {
      thunk_FUN_140704e90(param_1[4],param_1[3],1);
    }
    if (param_1[6] != 0) {
      thunk_FUN_140704e90(param_1[7],param_1[6],1);
    }
    lVar1 = param_1[9];
    if ((lVar1 != -1) && (lVar1 != 0)) {
      thunk_FUN_140704e90(param_1[10],lVar1,1);
    }
  }
  thunk_FUN_140704e90(param_1,0x68,8);
  lVar1 = *param_2;
  if (lVar1 != -1) {
    if (lVar1 != 0) {
      thunk_FUN_140704e90(param_2[1],lVar1,1);
    }
    if (param_2[3] != 0) {
      thunk_FUN_140704e90(param_2[4],param_2[3],1);
    }
  }
  thunk_FUN_140704e90(param_2,0x30,8);
  return;
}


/* address=14021cb00 name=FUN_14021cb00 */

void FUN_14021cb00(byte *param_1)

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
      FUN_140612e10(param_1 + 0x18);
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
    FUN_140612e10(param_1 + 0x10);
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
          thunk_FUN_140704e90(*puVar5,puVar5[-1],1);
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
          thunk_FUN_140704e90(*puVar5,puVar5[-1],1);
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
    goto LAB_14021cc89;
  default:
    goto switchD_14021cbb3_caseD_7;
  case 0xb:
    if (0xfffffffffffffffc < uVar4) {
      return;
    }
    if (uVar4 == 0) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
LAB_14021cc89:
    uVar7 = 1;
    goto LAB_14021cc8f;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
switchD_14021cbb3_caseD_7:
    return;
  }
  uVar4 = *(longlong *)(param_1 + 8) * 0x18;
  uVar7 = 8;
LAB_14021cc8f:
  thunk_FUN_140704e90(lVar3,uVar4,uVar7);
  return;
}


/* address=14021cce0 name=FUN_14021cce0 */

void FUN_14021cce0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (*param_1 != 0) {
    thunk_FUN_140704e90(param_1[1],*param_1,1);
  }
  uVar4 = (ulonglong)((byte)(*(char *)(param_1 + 6) - 1U) < 2);
  if (param_1[uVar4 * 2 + 9] != 0) {
    thunk_FUN_140704e90(param_1[uVar4 * 2 + 10],param_1[uVar4 * 2 + 9],1);
  }
  lVar1 = param_1[3];
  if (lVar1 != -1) {
    lVar2 = param_1[4];
    lVar5 = param_1[5];
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x38);
      do {
        lVar3 = puVar6[-7];
        if ((lVar3 != -1) && (lVar3 != 0)) {
          thunk_FUN_140704e90(puVar6[-6],lVar3,1);
        }
        lVar3 = puVar6[-4];
        if (lVar3 != -2) {
          if ((lVar3 != -1) && (lVar3 != 0)) {
            thunk_FUN_140704e90(puVar6[-3],lVar3,1);
          }
          lVar3 = puVar6[-1];
          if ((lVar3 != -1) && (lVar3 != 0)) {
            thunk_FUN_140704e90(*puVar6,lVar3,1);
          }
        }
        puVar6 = puVar6 + 9;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar1 != 0) {
      thunk_FUN_140704e90(lVar2,lVar1 * 0x48,8);
      return;
    }
  }
  return;
}


/* address=14021ce00 name=FUN_14021ce00 */

void FUN_14021ce00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  longlong local_40;
  
  FUN_14001f050();
  if (*(int *)(param_1 + 0xb0) != -1) {
    lVar5 = *(longlong *)(param_1 + 0xb8);
    if ((lVar5 != -1) && (lVar5 != 0)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0xc0),lVar5,1);
    }
    lVar5 = *(longlong *)(param_1 + 0xd8);
    lVar7 = *(longlong *)(param_1 + 0xe0);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)(lVar5 + 8);
      do {
        lVar1 = puVar8[-1];
        if ((lVar1 != -1) && (lVar1 != 0)) {
          thunk_FUN_140704e90(*puVar8,lVar1,1);
        }
        puVar8 = puVar8 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      thunk_FUN_140704e90(lVar5,*(longlong *)(param_1 + 0xd0) * 0x18,8);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x250);
  local_40 = 0;
  lVar7 = *(longlong *)(param_1 + 0x248);
  while (lVar5 != local_40) {
    local_40 = local_40 + 1;
    FUN_1402f20b0(lVar7);
    lVar7 = lVar7 + 0x1d0;
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x248),*(longlong *)(param_1 + 0x240) * 0x1d0,8);
  }
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    ppcVar3 = *(code ***)(param_1 + 0x70);
    if (*ppcVar3 != (code *)0x0) {
      (**ppcVar3)(uVar2);
    }
    if (ppcVar3[1] != (code *)0x0) {
      thunk_FUN_140704e90(uVar2,ppcVar3[1],ppcVar3[2]);
    }
  }
  if (1 < *(uint *)(param_1 + 0x78)) {
    plVar4 = *(longlong **)(param_1 + 0x80);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1403fd050(param_1 + 0x80);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x98);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1403fd050(param_1 + 0x98);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x268);
  if (lVar5 != 0) {
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x260) + 0x10);
    do {
      if (puVar8[-1] != 0) {
        thunk_FUN_140704e90(*puVar8,puVar8[-1],1);
      }
      puVar8 = puVar8 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x260),*(longlong *)(param_1 + 600) << 5,8);
  }
  lVar5 = *(longlong *)(param_1 + 0x280);
  if (lVar5 != 0) {
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x278) + 8);
    do {
      lVar7 = puVar8[-1];
      if ((lVar7 != -1) && (lVar7 != 0)) {
        thunk_FUN_140704e90(*puVar8,lVar7,1);
      }
      puVar8 = puVar8 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x278),*(longlong *)(param_1 + 0x270) * 0x18,8);
  }
  if (*(uint *)(param_1 + 0xe8) < 2) {
    FUN_1401e2b30(param_1 + 0xe8);
  }
  lVar5 = *(longlong *)(param_1 + 0x298);
  if (lVar5 != 0) {
    pplVar6 = *(longlong ***)(param_1 + 0x290);
    lVar7 = 1;
    do {
      plVar4 = *pplVar6;
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_1403fd050(pplVar6);
      }
      pplVar6 = pplVar6 + 2;
      bVar9 = lVar7 != lVar5;
      lVar7 = lVar7 + 1;
    } while (bVar9);
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x290),*(longlong *)(param_1 + 0x288) << 4,8);
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_1401058c0(param_1 + 0x340);
  }
  FUN_1400c5ac0(param_1 + 0x308);
  plVar4 = *(longlong **)(param_1 + 0x348);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1403fd050(param_1 + 0x348);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x358);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_140455e60(param_1 + 0x358);
      return;
    }
  }
  return;
}


/* address=14021d5f0 name=FUN_14021d5f0 */

void FUN_14021d5f0(undefined *param_1)

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
LAB_14021d61d:
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x10),lVar2,1);
      return;
    }
    break;
  case 0x25:
  case 0x26:
    FUN_14000e2a0(*(undefined8 *)(param_1 + 8));
    return;
  case 0x29:
  case 0x2a:
    FUN_14000e1d0(*(undefined8 *)(param_1 + 8));
    return;
  case 0x2c:
  case 0x2d:
    FUN_14000e240(*(undefined8 *)(param_1 + 8));
    return;
  case 0x41:
    FUN_140004d10(param_1 + 0x28);
    return;
  case 0x48:
  case 0x69:
    lVar2 = *(longlong *)(param_1 + 8);
    if (0 < lVar2) goto LAB_14021d61d;
    break;
  case 0x54:
    if (0 < *(longlong *)(param_1 + 8)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 8),1);
    }
    FUN_140001660(param_1 + 0x20);
    return;
  case 0x59:
    if (0 < *(longlong *)(param_1 + 0x20)) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x20),1);
    }
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1405dd5e0(param_1 + 8);
      return;
    }
    break;
  case 0x5e:
    FUN_140004d90(param_1 + 8);
    return;
  }
  return;
}


/* address=14021d6f0 name=FUN_14021d6f0 */

void FUN_14021d6f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  iVar1 = (int)*param_1;
  if (iVar1 - 1U < 2) {
switchD_14021d723_caseD_5:
    return;
  }
  if ((*param_1 == 0) || (iVar1 != 3)) {
    if (param_1[1] == 0) {
      return;
    }
    thunk_FUN_140704e90(param_1[2],param_1[1],1);
    return;
  }
  switch(*(undefined4 *)(param_1 + 1)) {
  case 2:
    thunk_FUN_140704e90(param_1[2],4,2);
    plVar3 = (longlong *)param_1[3];
    lVar2 = *plVar3;
    if (lVar2 == -1) goto LAB_14021d7be;
    break;
  case 3:
    thunk_FUN_140704e90(param_1[2],0x10,8);
    return;
  case 4:
    thunk_FUN_140704e90(param_1[2],1,1);
    return;
  default:
    goto switchD_14021d723_caseD_5;
  case 0x25:
    plVar3 = (longlong *)param_1[2];
    lVar2 = *plVar3;
  }
  if (lVar2 != 0) {
    thunk_FUN_140704e90(plVar3[1],lVar2,1);
  }
LAB_14021d7be:
  thunk_FUN_140704e90(plVar3,0x18,8);
  return;
}


/* address=14021d7e0 name=FUN_14021d7e0 */

void FUN_14021d7e0(ulonglong param_1,ulonglong param_2)

{
  longlong local_8;
  
  if (1 < param_1) {
    if (param_1 == 2) {
      thunk_FUN_140704e90(param_2,0x18,8);
      return;
    }
    if ((1 < ((uint)param_2 & 3) - 2) && ((param_2 & 3) != 0)) {
      local_8 = param_2 - 1;
      FUN_14073adf0(&local_8);
      return;
    }
  }
  return;
}


/* address=14021d840 name=FUN_14021d840 */

void FUN_14021d840(longlong **param_1)

{
  longlong *plVar1;
  
  FUN_140695970();
  if (*param_1 != (longlong *)0x0) {
    thunk_FUN_140a05bb0();
    plVar1 = *param_1;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1406955a0();
      return;
    }
  }
  return;
}


/* address=14021d8e0 name=FUN_14021d8e0 */

void FUN_14021d8e0(ulonglong *param_1)

{
  longlong lVar1;
  ulonglong local_18;
  
  lVar1 = 1;
  if (1 < *param_1) {
    lVar1 = *param_1 - 2;
  }
  if (lVar1 == 0) {
    local_18 = param_1[1];
    FUN_140214e70();
  }
  else {
    if (lVar1 != 1) {
      return;
    }
    local_18 = param_1[4];
    FUN_140214e70();
  }
  thunk_FUN_140704e90(local_18,0x3cf0,0x10);
  return;
}


/* address=14021d9b0 name=FUN_14021d9b0 */

void FUN_14021d9b0(int *param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  
  if (*param_1 == 1) {
    if (*(char *)(param_1 + 2) == -1) {
      if (*(longlong *)(param_1 + 4) != 0) {
        thunk_FUN_140704e90(*(undefined8 *)(param_1 + 6),*(longlong *)(param_1 + 4),1);
      }
    }
    else {
      FUN_14021cb00(param_1 + 2);
    }
  }
  else if ((((*param_1 == 0) && (*(char *)(param_1 + 0x60) == '\x03')) &&
           (*(char *)(param_1 + 0x5e) == '\x03')) && (*(char *)(param_1 + 0x5c) == '\x03')) {
    if (*(char *)(param_1 + 0x5a) == '\x03') {
      if (*(char *)(param_1 + 0x58) == '\x03') {
        uVar1 = *(undefined8 *)(param_1 + 0x54);
        ppcVar2 = *(code ***)(param_1 + 0x56);
        if (*ppcVar2 != (code *)0x0) {
          (**ppcVar2)(uVar1);
        }
        if (ppcVar2[1] != (code *)0x0) {
          thunk_FUN_140704e90(uVar1,ppcVar2[1],ppcVar2[2]);
        }
        FUN_14001f8a0(param_1 + 0x38);
      }
      else if (*(char *)(param_1 + 0x58) == '\0') {
        FUN_14021d5f0(param_1 + 0x22);
      }
    }
    else if (*(char *)(param_1 + 0x5a) == '\0') {
      FUN_14021d5f0(param_1 + 8);
    }
  }
  FUN_140216a40(param_1 + 0x62);
  FUN_140216fa0(param_1 + 0xc4);
  FUN_140216c20(param_1 + 0x126);
  if (param_1[0x188] == 1) {
    if (*(longlong *)(param_1 + 0x18c) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x18e),*(longlong *)(param_1 + 0x18c),1);
    }
  }
  else if (((param_1[0x188] == 0) && (*(char *)(param_1 + 0x1e8) == '\x03')) &&
          ((*(char *)(param_1 + 0x1e6) == '\x03' && (*(char *)(param_1 + 0x1e4) == '\x03')))) {
    if (*(char *)(param_1 + 0x1e2) == '\x03') {
      FUN_140219830(param_1 + 0x1a6);
    }
    else if (*(char *)(param_1 + 0x1e2) == '\0') {
      FUN_14021d5f0(param_1 + 400);
    }
  }
  if (param_1[0x1ea] == 1) {
    if (*(longlong *)(param_1 + 0x1ee) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x1f0),*(longlong *)(param_1 + 0x1ee),1);
    }
  }
  else if (((param_1[0x1ea] == 0) && (*(char *)(param_1 + 0x24a) == '\x03')) &&
          ((*(char *)(param_1 + 0x248) == '\x03' && (*(char *)(param_1 + 0x246) == '\x03')))) {
    if (*(char *)(param_1 + 0x242) == '\x03') {
      FUN_140219830(param_1 + 0x206);
    }
    else if (*(char *)(param_1 + 0x242) == '\0') {
      FUN_14021d5f0(param_1 + 0x1f0);
    }
  }
  if (param_1[0x24c] == 1) {
    if (*(longlong *)(param_1 + 0x250) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x252),*(longlong *)(param_1 + 0x250),1);
    }
  }
  else if ((((param_1[0x24c] == 0) && (*(char *)(param_1 + 0x2ac) == '\x03')) &&
           (*(char *)(param_1 + 0x2aa) == '\x03')) && (*(char *)(param_1 + 0x2a8) == '\x03')) {
    if (*(char *)(param_1 + 0x2a6) == '\x03') {
      FUN_140219830(param_1 + 0x26a);
    }
    else if (*(char *)(param_1 + 0x2a6) == '\0') {
      FUN_14021d5f0(param_1 + 0x254);
    }
  }
  FUN_140217100(param_1 + 0x2ae);
  if (param_1[0x310] == 1) {
    if (*(longlong *)(param_1 + 0x314) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x316),*(longlong *)(param_1 + 0x314),1);
    }
  }
  else if (((param_1[0x310] == 0) && (*(char *)(param_1 + 0x370) == '\x03')) &&
          ((*(char *)(param_1 + 0x36e) == '\x03' && (*(char *)(param_1 + 0x36c) == '\x03')))) {
    if (*(char *)(param_1 + 0x368) == '\x03') {
      FUN_140219830(param_1 + 0x32c);
    }
    else if (*(char *)(param_1 + 0x368) == '\0') {
      FUN_14021d5f0(param_1 + 0x316);
    }
  }
  FUN_140216e40(param_1 + 0x372);
  FUN_140217250(param_1 + 0x3e0);
  if (param_1[0x442] == 1) {
    if (*(longlong *)(param_1 + 0x446) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x448),*(longlong *)(param_1 + 0x446),1);
    }
  }
  else if (((param_1[0x442] == 0) && (*(char *)(param_1 + 0x4a2) == '\x03')) &&
          ((*(char *)(param_1 + 0x4a0) == '\x03' && (*(char *)(param_1 + 0x49e) == '\x03')))) {
    if (*(char *)(param_1 + 0x49c) == '\x03') {
      FUN_140219830(param_1 + 0x460);
    }
    else if (*(char *)(param_1 + 0x49c) == '\0') {
      FUN_14021d5f0(param_1 + 0x44a);
    }
  }
  if (param_1[0x4a4] == 1) {
    if (*(longlong *)(param_1 + 0x4a8) != 0) {
      thunk_FUN_140704e90(*(undefined8 *)(param_1 + 0x4aa),*(longlong *)(param_1 + 0x4a8),1);
      return;
    }
  }
  else if ((((param_1[0x4a4] == 0) && (*(char *)(param_1 + 0x504) == '\x03')) &&
           (*(char *)(param_1 + 0x502) == '\x03')) && (*(char *)(param_1 + 0x500) == '\x03')) {
    if (*(char *)(param_1 + 0x4fe) == '\x03') {
      FUN_140219830(param_1 + 0x4c2);
      return;
    }
    if (*(char *)(param_1 + 0x4fe) == '\0') {
      FUN_14021d5f0(param_1 + 0x4ac);
      return;
    }
  }
  return;
}


/* address=14021e150 name=FUN_14021e150 */

void FUN_14021e150(int *param_1)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (*param_1 == 1) {
    lVar5 = *(longlong *)(param_1 + 4);
    if (lVar5 == 0) goto LAB_14021e569;
    FUN_14008e240(param_1 + 2);
    uVar3 = lVar5 * 0x48 + 0x57U & 0xfffffffffffffff0;
    lVar5 = lVar5 + uVar3 + 0x11;
    if (lVar5 == 0) goto LAB_14021e569;
    lVar4 = *(longlong *)(param_1 + 2) - uVar3;
    uVar7 = 0x10;
LAB_14021e395:
    thunk_FUN_140704e90(lVar4,lVar5,uVar7);
    goto LAB_14021e569;
  }
  if (*param_1 != 0) goto LAB_14021e569;
  cVar1 = *(char *)((longlong)param_1 + 0x72);
  if (cVar1 == '\x04') {
    if (*(char *)((longlong)param_1 + 0x1c2) != '\x03') {
      if (*(char *)((longlong)param_1 + 0x1c2) == '\0') {
        lVar5 = *(longlong *)(param_1 + 0x22);
        if (lVar5 != 0) {
          puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
          do {
            lVar4 = puVar6[-1];
            if ((lVar4 != -1)
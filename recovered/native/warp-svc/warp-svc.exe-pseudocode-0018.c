/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=14147eee0 name=FUN_14147eee0 */

void FUN_14147eee0(longlong **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong lVar3;
  
  pplVar1 = (longlong **)*param_1;
  if (*(char *)(param_1 + 1) != '\x01') {
    plVar2 = *pplVar1;
    lVar3 = plVar2[2];
    if (*plVar2 == lVar3) {
      FUN_142cbf5f0(plVar2,lVar3,1,1,1);
      lVar3 = plVar2[2];
    }
    *(undefined *)(plVar2[1] + lVar3) = 0x2c;
    plVar2[2] = lVar3 + 1;
  }
  *(undefined *)(param_1 + 1) = 2;
  plVar2 = *pplVar1;
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x22;
  plVar2[2] = lVar3 + 1;
  FUN_140227c10(plVar2,param_2,param_3);
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x22;
  plVar2[2] = lVar3 + 1;
  plVar2 = *pplVar1;
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x3a;
  plVar2[2] = lVar3 + 1;
  FUN_1412f9cb0(param_4,pplVar1);
  return;
}


/* address=14147f050 name=FUN_14147f050 */

void FUN_14147f050(longlong **param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong lVar3;
  
  pplVar1 = (longlong **)*param_1;
  if (*(char *)(param_1 + 1) != '\x01') {
    plVar2 = *pplVar1;
    lVar3 = plVar2[2];
    if (*plVar2 == lVar3) {
      FUN_142cbf5f0(plVar2,lVar3,1,1,1);
      lVar3 = plVar2[2];
    }
    *(undefined *)(plVar2[1] + lVar3) = 0x2c;
    plVar2[2] = lVar3 + 1;
  }
  *(undefined *)(param_1 + 1) = 2;
  plVar2 = *pplVar1;
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x22;
  plVar2[2] = lVar3 + 1;
  FUN_140227c10(plVar2,param_2,param_3);
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x22;
  plVar2[2] = lVar3 + 1;
  plVar2 = *pplVar1;
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x3a;
  plVar2[2] = lVar3 + 1;
  FUN_14044e1b0(*param_4,pplVar1);
  return;
}


/* address=14147f1c0 name=FUN_14147f1c0 */

undefined8
FUN_14147f1c0(longlong **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong lVar3;
  
  pplVar1 = (longlong **)*param_1;
  if (*(char *)(param_1 + 1) != '\x01') {
    plVar2 = *pplVar1;
    lVar3 = plVar2[2];
    if (*plVar2 == lVar3) {
      FUN_142cbf5f0(plVar2,lVar3,1,1,1);
      lVar3 = plVar2[2];
    }
    *(undefined *)(plVar2[1] + lVar3) = 0x2c;
    plVar2[2] = lVar3 + 1;
  }
  *(undefined *)(param_1 + 1) = 2;
  plVar2 = *pplVar1;
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x22;
  plVar2[2] = lVar3 + 1;
  FUN_140227c10(plVar2,param_2,param_3);
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x22;
  plVar2[2] = lVar3 + 1;
  plVar2 = *pplVar1;
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x3a;
  plVar2[2] = lVar3 + 1;
  plVar2 = *pplVar1;
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x22;
  plVar2[2] = lVar3 + 1;
  FUN_140227c10(plVar2,param_4,param_5);
  lVar3 = plVar2[2];
  if (*plVar2 == lVar3) {
    FUN_142cbf5f0(plVar2,lVar3,1,1,1);
    lVar3 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar3) = 0x22;
  plVar2[2] = lVar3 + 1;
  return 0;
}


/* address=14147f3d0 name=FUN_14147f3d0 */

undefined8
FUN_14147f3d0(longlong **param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong **pplVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined auStack_58 [40];
  
  pplVar2 = (longlong **)*param_1;
  if (*(char *)(param_1 + 1) != '\x01') {
    plVar3 = *pplVar2;
    lVar4 = plVar3[2];
    if (*plVar3 == lVar4) {
      FUN_142cbf5f0(plVar3,lVar4,1,1,1);
      lVar4 = plVar3[2];
    }
    *(undefined *)(plVar3[1] + lVar4) = 0x2c;
    plVar3[2] = lVar4 + 1;
  }
  *(undefined *)(param_1 + 1) = 2;
  plVar3 = *pplVar2;
  lVar4 = plVar3[2];
  if (*plVar3 == lVar4) {
    FUN_142cbf5f0(plVar3,lVar4,1,1,1);
    lVar4 = plVar3[2];
  }
  *(undefined *)(plVar3[1] + lVar4) = 0x22;
  plVar3[2] = lVar4 + 1;
  FUN_140227c10(plVar3,param_2,param_3);
  lVar4 = plVar3[2];
  if (*plVar3 == lVar4) {
    FUN_142cbf5f0(plVar3,lVar4,1,1,1);
    lVar4 = plVar3[2];
  }
  *(undefined *)(plVar3[1] + lVar4) = 0x22;
  plVar3[2] = lVar4 + 1;
  uVar1 = *param_4;
  plVar3 = *pplVar2;
  lVar4 = plVar3[2];
  if (*plVar3 == lVar4) {
    FUN_142cbf5f0(plVar3,lVar4,1,1,1);
    lVar4 = plVar3[2];
  }
  *(undefined *)(plVar3[1] + lVar4) = 0x3a;
  plVar3[2] = lVar4 + 1;
  plVar3 = *pplVar2;
  lVar5 = FUN_1406d53e0(uVar1,auStack_58);
  uVar6 = 10 - lVar5;
  lVar4 = plVar3[2];
  if ((ulonglong)(*plVar3 - lVar4) < uVar6) {
    FUN_142cbf5f0(plVar3,lVar4,uVar6,1,1);
    lVar4 = plVar3[2];
  }
  else if (lVar5 == 10) goto LAB_14147f4b6;
  FUN_142cbd3c0(plVar3[1] + lVar4,auStack_58 + lVar5,uVar6);
LAB_14147f4b6:
  plVar3[2] = lVar4 + uVar6;
  return 0;
}


/* address=14147f5c0 name=FUN_14147f5c0 */

longlong FUN_14147f5c0(longlong **param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  puVar10 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uVar3 = param_2[2];
  plVar4 = *param_1;
  lVar9 = plVar4[2];
  if (*plVar4 == lVar9) {
    FUN_142cbf5f0(plVar4,lVar9,1,1,1);
    lVar9 = plVar4[2];
  }
  *(undefined *)(plVar4[1] + lVar9) = 0x7b;
  lVar9 = lVar9 + 1;
  plVar4[2] = lVar9;
  if (puVar2 == puVar10) {
    if (*plVar4 == lVar9) {
      FUN_142cbf5f0(plVar4,lVar9,1,1,1);
      lVar9 = plVar4[2];
    }
    *(undefined *)(plVar4[1] + lVar9) = 0x7d;
    plVar4[2] = lVar9 + 1;
LAB_14147f8d0:
    lVar9 = 0;
  }
  else {
    ppuVar7 = (undefined **)(puVar10 + 9);
    if (puVar10[8] == 0) {
      puVar8 = (undefined8 *)(&DAT_142fb6aa0 + (ulonglong)*(byte *)ppuVar7 * 8);
      ppuVar7 = &PTR_s_accept_142fb6d28 + *(byte *)ppuVar7;
    }
    else {
      puVar8 = puVar10 + 10;
    }
    puVar5 = *ppuVar7;
    uVar6 = *puVar8;
    FUN_1404329e0(&uStack_58,uVar3,puVar10 + 8);
    uStack_78 = uStack_48;
    uStack_88 = uStack_58;
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
    plVar4 = *param_1;
    lVar9 = plVar4[2];
    if (*plVar4 == lVar9) {
      FUN_142cbf5f0(plVar4,lVar9,1,1,1);
      lVar9 = plVar4[2];
    }
    *(undefined *)(plVar4[1] + lVar9) = 0x22;
    plVar4[2] = lVar9 + 1;
    FUN_140227c10(plVar4,puVar5,uVar6);
    lVar9 = plVar4[2];
    if (*plVar4 == lVar9) {
      FUN_142cbf5f0(plVar4,lVar9,1,1,1);
      lVar9 = plVar4[2];
    }
    *(undefined *)(plVar4[1] + lVar9) = 0x22;
    plVar4[2] = lVar9 + 1;
    plVar4 = *param_1;
    lVar9 = plVar4[2];
    if (*plVar4 == lVar9) {
      FUN_142cbf5f0(plVar4,lVar9,1,1,1);
      lVar9 = plVar4[2];
    }
    *(undefined *)(plVar4[1] + lVar9) = 0x3a;
    plVar4[2] = lVar9 + 1;
    lVar9 = FUN_14044e4f0(&uStack_88,param_1);
    if (lVar9 == 0) {
      puVar10 = puVar10 + 0x17;
      do {
        if (puVar10 + -10 == puVar2) {
          plVar4 = *param_1;
          lVar9 = plVar4[2];
          if (*plVar4 == lVar9) {
            FUN_142cbf5f0(plVar4,lVar9,1,1,1);
            lVar9 = plVar4[2];
          }
          *(undefined *)(plVar4[1] + lVar9) = 0x7d;
          plVar4[2] = lVar9 + 1;
          goto LAB_14147f8d0;
        }
        ppuVar7 = (undefined **)(puVar10 + -1);
        puVar8 = puVar10;
        if (puVar10[-2] == 0) {
          bVar1 = *(byte *)ppuVar7;
          ppuVar7 = &PTR_s_accept_142fb6d28 + bVar1;
          puVar8 = (undefined8 *)(&DAT_142fb6aa0 + (ulonglong)bVar1 * 8);
        }
        puVar5 = *ppuVar7;
        uVar6 = *puVar8;
        FUN_1404329e0(&uStack_58,uVar3,puVar10 + -2);
        uStack_78 = uStack_48;
        uStack_88 = uStack_58;
        uStack_84 = uStack_54;
        uStack_80 = uStack_50;
        uStack_7c = uStack_4c;
        plVar4 = *param_1;
        lVar9 = plVar4[2];
        if (*plVar4 == lVar9) {
          FUN_142cbf5f0(plVar4,lVar9,1,1,1);
          lVar9 = plVar4[2];
        }
        *(undefined *)(plVar4[1] + lVar9) = 0x2c;
        plVar4[2] = lVar9 + 1;
        plVar4 = *param_1;
        lVar9 = plVar4[2];
        if (*plVar4 == lVar9) {
          FUN_142cbf5f0(plVar4,lVar9,1,1,1);
          lVar9 = plVar4[2];
        }
        *(undefined *)(plVar4[1] + lVar9) = 0x22;
        plVar4[2] = lVar9 + 1;
        FUN_140227c10(plVar4,puVar5,uVar6);
        lVar9 = plVar4[2];
        if (*plVar4 == lVar9) {
          FUN_142cbf5f0(plVar4,lVar9,1,1,1);
          lVar9 = plVar4[2];
        }
        *(undefined *)(plVar4[1] + lVar9) = 0x22;
        plVar4[2] = lVar9 + 1;
        plVar4 = *param_1;
        lVar9 = plVar4[2];
        if (*plVar4 == lVar9) {
          FUN_142cbf5f0(plVar4,lVar9,1,1,1);
          lVar9 = plVar4[2];
        }
        *(undefined *)(plVar4[1] + lVar9) = 0x3a;
        plVar4[2] = lVar9 + 1;
        lVar9 = FUN_14044e4f0(&uStack_88,param_1);
        puVar10 = puVar10 + 0xd;
      } while (lVar9 == 0);
    }
  }
  return lVar9;
}


/* address=14147f9d0 name=FUN_14147f9d0 */

undefined8 FUN_14147f9d0(longlong **param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar10 = *param_2;
  uVar9 = param_2[1];
  lVar13 = param_2[2];
  uVar1 = param_2[3];
  lVar2 = param_2[4];
  uVar3 = param_2[5];
  if (lVar10 == 2) {
    plVar11 = *param_1;
    lVar8 = plVar11[2];
    if (*plVar11 == lVar8) {
      FUN_142cbf5f0(plVar11,lVar8,1,1,1);
      lVar8 = plVar11[2];
    }
    *(undefined *)(plVar11[1] + lVar8) = 0x5b;
    lVar8 = lVar8 + 1;
    plVar11[2] = lVar8;
    if (*plVar11 == lVar8) {
      FUN_142cbf5f0(plVar11,lVar8,1,1,1);
      lVar8 = plVar11[2];
    }
    *(undefined *)(plVar11[1] + lVar8) = 0x5d;
    lVar8 = lVar8 + 1;
    plVar11[2] = lVar8;
    cVar7 = '\0';
  }
  else {
    plVar11 = *param_1;
    lVar8 = plVar11[2];
    if (*plVar11 == lVar8) {
      FUN_142cbf5f0(plVar11,lVar8,1,1,1);
      lVar8 = plVar11[2];
    }
    *(undefined *)(plVar11[1] + lVar8) = 0x5b;
    lVar8 = lVar8 + 1;
    plVar11[2] = lVar8;
    cVar7 = '\x01';
  }
LAB_14147fa70:
  do {
    if (lVar10 == 0) {
      if (*(ulonglong *)(lVar2 + 0x28) <= uVar3) {
        FUN_142ce0143(uVar3,*(ulonglong *)(lVar2 + 0x28),
                      &PTR_s_C__Users_VssAdministrator__cargo_142db6cb8);
        do {
          invalidInstructionException();
        } while( true );
      }
      pcVar6 = (char *)(*(longlong *)(lVar2 + 0x20) + uVar3 * 0x68);
      if (lVar13 == 0) {
        lVar13 = 2;
        lVar10 = 2;
      }
      else {
        if (*pcVar6 == '\0') {
          FUN_142ce0300("internal error: entered unreachable codeC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.52.1\\src\\sync\\mpsc\\list.rs"
                        ,0x28,&PTR_s_C__Users_VssAdministrator__cargo_142db6cd0);
          do {
            invalidInstructionException();
          } while( true );
        }
        uVar9 = *(ulonglong *)(pcVar6 + 8);
        lVar10 = 1;
      }
      lVar4 = *(longlong *)(pcVar6 + 0x20);
      lVar5 = *(longlong *)(pcVar6 + 0x28);
    }
    else {
      if (lVar10 == 2) {
        if (cVar7 != '\0') {
          if (*plVar11 == lVar8) {
            FUN_142cbf5f0(plVar11,lVar8,1,1,1);
            lVar8 = plVar11[2];
          }
          *(undefined *)(plVar11[1] + lVar8) = 0x5d;
          plVar11[2] = lVar8 + 1;
        }
        return 0;
      }
      if (*(ulonglong *)(lVar2 + 0x40) <= uVar9) {
        FUN_142ce0143(uVar9,*(ulonglong *)(lVar2 + 0x40),
                      &PTR_s_C__Users_VssAdministrator__cargo_142db6ce8);
        do {
          invalidInstructionException();
        } while( true );
      }
      lVar5 = uVar9 * 0x48 + *(longlong *)(lVar2 + 0x38);
      lVar12 = 2;
      if (((lVar13 == 2) || (lVar10 != lVar13)) || (uVar9 != uVar1)) {
        if (*(int *)(lVar5 + 0x10) == 1) {
          uVar9 = *(ulonglong *)(lVar5 + 0x18);
          lVar12 = 1;
        }
      }
      else {
        lVar13 = 2;
        uVar9 = uVar1;
      }
      lVar4 = *(longlong *)(lVar5 + 0x28);
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar10 = lVar12;
    }
    if (lVar5 != 0) {
      lVar12 = 0;
      do {
        if (*(char *)(lVar4 + lVar12) != '\t' && 0x5e < (byte)(*(char *)(lVar4 + lVar12) - 0x20U))
        goto LAB_14147fa70;
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
    }
    if (cVar7 != '\x01') {
      if (*plVar11 == lVar8) {
        FUN_142cbf5f0(plVar11,lVar8,1,1,1);
        lVar8 = plVar11[2];
      }
      *(undefined *)(plVar11[1] + lVar8) = 0x2c;
      lVar8 = lVar8 + 1;
      plVar11[2] = lVar8;
    }
    if (*plVar11 == lVar8) {
      FUN_142cbf5f0(plVar11,lVar8,1,1,1);
      lVar8 = plVar11[2];
    }
    *(undefined *)(plVar11[1] + lVar8) = 0x22;
    plVar11[2] = lVar8 + 1;
    FUN_140227c10(plVar11,lVar4,lVar5);
    lVar8 = plVar11[2];
    if (*plVar11 == lVar8) {
      FUN_142cbf5f0(plVar11,lVar8,1,1,1);
      lVar8 = plVar11[2];
    }
    *(undefined *)(plVar11[1] + lVar8) = 0x22;
    lVar8 = lVar8 + 1;
    plVar11[2] = lVar8;
    cVar7 = '\x02';
  } while( true );
}


/* address=14147fd60 name=FUN_14147fd60 */

longlong FUN_14147fd60(longlong **param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined uStack_38;
  
  plVar2 = *param_1;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_142cbf5f0(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar1) = 0x5b;
  lVar1 = lVar1 + 1;
  plVar2[2] = lVar1;
  if (param_3 == param_2) {
LAB_14147fe3d:
    if (*plVar2 == lVar1) {
      FUN_142cbf5f0(plVar2,lVar1,1,1,1);
      lVar1 = plVar2[2];
    }
    *(undefined *)(plVar2[1] + lVar1) = 0x5d;
    plVar2[2] = lVar1 + 1;
    lVar1 = 0;
  }
  else {
    uStack_38 = *(undefined *)(param_2 + 4);
    uStack_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    lVar1 = FUN_14040e070(&uStack_48,param_1);
    if (lVar1 == 0) {
      param_2 = (undefined4 *)((longlong)param_2 + 0x11);
      do {
        plVar2 = *param_1;
        if (param_2 == param_3) {
          lVar1 = plVar2[2];
          goto LAB_14147fe3d;
        }
        lVar1 = plVar2[2];
        if (*plVar2 == lVar1) {
          FUN_142cbf5f0(plVar2,lVar1,1,1,1);
          lVar1 = plVar2[2];
        }
        *(undefined *)(plVar2[1] + lVar1) = 0x2c;
        plVar2[2] = lVar1 + 1;
        uStack_38 = *(undefined *)(param_2 + 4);
        uStack_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        lVar1 = FUN_14040e070(&uStack_48,param_1);
        param_2 = (undefined4 *)((longlong)param_2 + 0x11);
      } while (lVar1 == 0);
    }
  }
  return lVar1;
}


/* address=14147feb0 name=FUN_14147feb0 */

undefined8 FUN_14147feb0(longlong **param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  bool bVar12;
  byte *pbVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  byte *pbVar20;
  
  lVar19 = *(longlong *)(param_2 + 8);
  lVar5 = *(longlong *)(param_2 + 0x10);
  plVar6 = *param_1;
  lVar16 = plVar6[2];
  if (*plVar6 == lVar16) {
    FUN_142cbf5f0(plVar6,lVar16,1,1,1);
    lVar16 = plVar6[2];
  }
  *(undefined *)(plVar6[1] + lVar16) = 0x5b;
  lVar16 = lVar16 + 1;
  plVar6[2] = lVar16;
  puVar11 = PTR_s_uuuuuuuubtnufruuuuuuuuuuuuuuuuuu_143ca1f70;
  if (lVar5 != 0) {
    lVar5 = lVar19 + lVar5 * 0x18;
    bVar12 = true;
    do {
      lVar7 = *(longlong *)(lVar19 + 8);
      lVar8 = *(longlong *)(lVar19 + 0x10);
      if (!bVar12) {
        if (*plVar6 == lVar16) {
          FUN_142cbf5f0(plVar6,lVar16,1,1,1);
          lVar16 = plVar6[2];
        }
        *(undefined *)(plVar6[1] + lVar16) = 0x2c;
        lVar16 = lVar16 + 1;
        plVar6[2] = lVar16;
      }
      if (*plVar6 == lVar16) {
        FUN_142cbf5f0(plVar6,lVar16,1,1,1);
        lVar16 = plVar6[2];
      }
      *(undefined *)(plVar6[1] + lVar16) = 0x5b;
      lVar16 = lVar16 + 1;
      plVar6[2] = lVar16;
      if (lVar8 != 0) {
        if (*plVar6 == lVar16) {
          FUN_142cbf5f0(plVar6,lVar16,1,1,1);
          lVar16 = plVar6[2];
        }
        *(undefined *)(plVar6[1] + lVar16) = 0x5b;
        lVar16 = lVar16 + 1;
        plVar6[2] = lVar16;
        uVar9 = *(undefined8 *)(lVar7 + 8);
        uVar10 = *(undefined8 *)(lVar7 + 0x10);
        if (*plVar6 == lVar16) {
          FUN_142cbf5f0(plVar6,lVar16,1,1,1);
          lVar16 = plVar6[2];
        }
        *(undefined *)(plVar6[1] + lVar16) = 0x22;
        plVar6[2] = lVar16 + 1;
        FUN_140227c10(plVar6,uVar9,uVar10);
        lVar16 = plVar6[2];
        if (*plVar6 == lVar16) {
          FUN_142cbf5f0(plVar6,lVar16,1,1,1);
          lVar16 = plVar6[2];
        }
        *(undefined *)(plVar6[1] + lVar16) = 0x22;
        lVar16 = lVar16 + 1;
        plVar6[2] = lVar16;
        uVar9 = *(undefined8 *)(lVar7 + 0x20);
        uVar10 = *(undefined8 *)(lVar7 + 0x28);
        if (*plVar6 == lVar16) {
          FUN_142cbf5f0(plVar6,lVar16,1,1,1);
          lVar16 = plVar6[2];
        }
        *(undefined *)(plVar6[1] + lVar16) = 0x2c;
        lVar16 = lVar16 + 1;
        plVar6[2] = lVar16;
        if (*plVar6 == lVar16) {
          FUN_142cbf5f0(plVar6,lVar16,1,1,1);
          lVar16 = plVar6[2];
        }
        *(undefined *)(plVar6[1] + lVar16) = 0x22;
        plVar6[2] = lVar16 + 1;
        FUN_140227c10(plVar6,uVar9,uVar10);
        lVar16 = plVar6[2];
        if (*plVar6 == lVar16) {
          FUN_142cbf5f0(plVar6,lVar16,1,1,1);
          lVar16 = plVar6[2];
        }
        *(undefined *)(plVar6[1] + lVar16) = 0x22;
        lVar16 = lVar16 + 1;
        plVar6[2] = lVar16;
        if (*plVar6 == lVar16) {
          FUN_142cbf5f0(plVar6,lVar16,1,1,1);
          lVar16 = plVar6[2];
        }
        *(undefined *)(plVar6[1] + lVar16) = 0x5d;
        lVar16 = lVar16 + 1;
        plVar6[2] = lVar16;
        if (lVar8 != 1) {
          lVar18 = lVar7 + 0x30;
LAB_141480090:
          if (*plVar6 == lVar16) {
            FUN_142cbf5f0(plVar6,lVar16,1,1,1);
            lVar16 = plVar6[2];
          }
          *(undefined *)(plVar6[1] + lVar16) = 0x2c;
          lVar16 = lVar16 + 1;
          plVar6[2] = lVar16;
          if (*plVar6 == lVar16) {
            FUN_142cbf5f0(plVar6,lVar16,1,1,1);
            lVar16 = plVar6[2];
          }
          *(undefined *)(plVar6[1] + lVar16) = 0x5b;
          lVar16 = lVar16 + 1;
          plVar6[2] = lVar16;
          pbVar13 = *(byte **)(lVar18 + 8);
          uVar14 = *(ulonglong *)(lVar18 + 0x10);
          if (*plVar6 == lVar16) {
            FUN_142cbf5f0(plVar6,lVar16,1,1,1);
            lVar16 = plVar6[2];
          }
          *(undefined *)(plVar6[1] + lVar16) = 0x22;
          lVar16 = lVar16 + 1;
          plVar6[2] = lVar16;
          do {
            lVar15 = 1;
            pbVar20 = pbVar13;
            do {
              if (uVar14 + lVar15 == 1) {
                if (uVar14 != 0) {
                  if ((ulonglong)(*plVar6 - lVar16) < uVar14) {
                    FUN_142cbf5f0(plVar6,lVar16,uVar14,1,1);
                    lVar16 = plVar6[2];
                  }
                  FUN_142cbd3c0(plVar6[1] + lVar16,pbVar13,uVar14);
                  lVar16 = lVar16 + uVar14;
                  plVar6[2] = lVar16;
                }
                if (*plVar6 == lVar16) {
                  FUN_142cbf5f0(plVar6,lVar16,1,1,1);
                  lVar16 = plVar6[2];
                }
                *(undefined *)(plVar6[1] + lVar16) = 0x22;
                lVar16 = lVar16 + 1;
                plVar6[2] = lVar16;
                pbVar13 = *(byte **)(lVar18 + 0x20);
                uVar14 = *(ulonglong *)(lVar18 + 0x28);
                if (*plVar6 == lVar16) {
                  FUN_142cbf5f0(plVar6,lVar16,1,1,1);
                  lVar16 = plVar6[2];
                }
                *(undefined *)(plVar6[1] + lVar16) = 0x2c;
                lVar16 = lVar16 + 1;
                plVar6[2] = lVar16;
                if (*plVar6 == lVar16) {
                  FUN_142cbf5f0(plVar6,lVar16,1,1,1);
                  lVar16 = plVar6[2];
                }
                lVar18 = lVar18 + 0x30;
                *(undefined *)(plVar6[1] + lVar16) = 0x22;
                lVar16 = lVar16 + 1;
                plVar6[2] = lVar16;
                goto LAB_1414802c8;
              }
              bVar1 = *pbVar20;
              cVar2 = puVar11[bVar1];
              pbVar20 = pbVar20 + 1;
              lVar15 = lVar15 + -1;
            } while (cVar2 == '\0');
            if (lVar15 != 0) {
              uVar17 = -lVar15;
              if ((ulonglong)(*plVar6 - lVar16) <= uVar17 && -(*plVar6 - lVar16) != lVar15) {
                FUN_142cbf5f0(plVar6,lVar16,uVar17,1,1);
                lVar16 = plVar6[2];
              }
              FUN_142cbd3c0(plVar6[1] + lVar16,pbVar13,uVar17);
              lVar16 = lVar16 - lVar15;
              plVar6[2] = lVar16;
            }
            uVar14 = (uVar14 + lVar15) - 1;
            if (cVar2 == 'u') {
              uVar3 = PTR_s_0123456789abcdef_143ca1f78[bVar1 >> 4];
              uVar4 = PTR_s_0123456789abcdef_143ca1f78[bVar1 & 0xf];
              if ((ulonglong)(*plVar6 - lVar16) < 6) {
                FUN_142cbf5f0(plVar6,lVar16,6,1,1);
                lVar16 = plVar6[2];
              }
              lVar15 = plVar6[1];
              *(undefined4 *)(lVar15 + lVar16) = 0x3030755c;
              *(undefined *)(lVar15 + 4 + lVar16) = uVar3;
              *(undefined *)(lVar15 + 5 + lVar16) = uVar4;
              lVar16 = lVar16 + 6;
            }
            else {
              if ((ulonglong)(*plVar6 - lVar16) < 2) {
                FUN_142cbf5f0(plVar6,lVar16,2,1,1);
                lVar16 = plVar6[2];
              }
              lVar15 = plVar6[1];
              *(undefined *)(lVar15 + lVar16) = 0x5c;
              *(char *)(lVar15 + 1 + lVar16) = cVar2;
              lVar16 = lVar16 + 2;
            }
            plVar6[2] = lVar16;
            pbVar13 = pbVar20;
          } while( true );
        }
      }
LAB_141480033:
      if (*plVar6 == lVar16) {
        FUN_142cbf5f0(plVar6,lVar16,1,1,1);
        lVar16 = plVar6[2];
      }
      lVar19 = lVar19 + 0x18;
      *(undefined *)(plVar6[1] + lVar16) = 0x5d;
      lVar16 = lVar16 + 1;
      plVar6[2] = lVar16;
      bVar12 = false;
    } while (lVar19 != lVar5);
  }
  if (*plVar6 == lVar16) {
    FUN_142cbf5f0(plVar6,lVar16,1,1,1);
    lVar16 = plVar6[2];
  }
  *(undefined *)(plVar6[1] + lVar16) = 0x5d;
  plVar6[2] = lVar16 + 1;
  return 0;
LAB_1414802c8:
  lVar15 = 1;
  pbVar20 = pbVar13;
  do {
    if (uVar14 + lVar15 == 1) {
      if (uVar14 == 0) {
        if (*plVar6 == lVar16) goto LAB_14148049a;
      }
      else {
        if ((ulonglong)(*plVar6 - lVar16) < uVar14) {
          FUN_142cbf5f0(plVar6,lVar16,uVar14,1,1);
          lVar16 = plVar6[2];
        }
        FUN_142cbd3c0(plVar6[1] + lVar16,pbVar13,uVar14);
        lVar16 = lVar16 + uVar14;
        plVar6[2] = lVar16;
        if (*plVar6 == lVar16) {
LAB_14148049a:
          FUN_142cbf5f0(plVar6,lVar16,1,1,1);
          lVar16 = plVar6[2];
        }
      }
      *(undefined *)(plVar6[1] + lVar16) = 0x22;
      lVar16 = lVar16 + 1;
      plVar6[2] = lVar16;
      if (*plVar6 == lVar16) {
        FUN_142cbf5f0(plVar6,lVar16,1,1,1);
        lVar16 = plVar6[2];
      }
      *(undefined *)(plVar6[1] + lVar16) = 0x5d;
      lVar16 = lVar16 + 1;
      plVar6[2] = lVar16;
      if (lVar18 == lVar8 * 0x30 + lVar7) goto LAB_141480033;
      goto LAB_141480090;
    }
    bVar1 = *pbVar20;
    cVar2 = puVar11[bVar1];
    pbVar20 = pbVar20 + 1;
    lVar15 = lVar15 + -1;
  } while (cVar2 == '\0');
  if (lVar15 != 0) {
    uVar17 = -lVar15;
    if ((ulonglong)(*plVar6 - lVar16) <= uVar17 && -(*plVar6 - lVar16) != lVar15) {
      FUN_142cbf5f0(plVar6,lVar16,uVar17,1,1);
      lVar16 = plVar6[2];
    }
    FUN_142cbd3c0(plVar6[1] + lVar16,pbVar13,uVar17);
    lVar16 = lVar16 - lVar15;
    plVar6[2] = lVar16;
  }
  uVar14 = (uVar14 + lVar15) - 1;
  if (cVar2 == 'u') {
    uVar3 = PTR_s_0123456789abcdef_143ca1f78[bVar1 >> 4];
    uVar4 = PTR_s_0123456789abcdef_143ca1f78[bVar1 & 0xf];
    if ((ulonglong)(*plVar6 - lVar16) < 6) {
      FUN_142cbf5f0(plVar6,lVar16,6,1,1);
      lVar16 = plVar6[2];
    }
    lVar15 = plVar6[1];
    *(undefined4 *)(lVar15 + lVar16) = 0x3030755c;
    *(undefined *)(lVar15 + 4 + lVar16) = uVar3;
    *(undefined *)(lVar15 + 5 + lVar16) = uVar4;
    lVar16 = lVar16 + 6;
  }
  else {
    if ((ulonglong)(*plVar6 - lVar16) < 2) {
      FUN_142cbf5f0(plVar6,lVar16,2,1,1);
      lVar16 = plVar6[2];
    }
    lVar15 = plVar6[1];
    *(undefined *)(lVar15 + lVar16) = 0x5c;
    *(char *)(lVar15 + 1 + lVar16) = cVar2;
    lVar16 = lVar16 + 2;
  }
  plVar6[2] = lVar16;
  pbVar13 = pbVar20;
  goto LAB_1414802c8;
}


/* address=141480870 name=FUN_141480870 */

longlong FUN_141480870(longlong **param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  plVar2 = *param_1;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_142cbf5f0(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar1) = 0x5b;
  lVar1 = lVar1 + 1;
  plVar2[2] = lVar1;
  if (lVar4 == 0) {
LAB_141480947:
    if (*plVar2 == lVar1) {
      FUN_142cbf5f0(plVar2,lVar1,1,1,1);
      lVar1 = plVar2[2];
    }
    *(undefined *)(plVar2[1] + lVar1) = 0x5d;
    plVar2[2] = lVar1 + 1;
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1412f2060(lVar3,param_1);
    if (lVar1 == 0) {
      lVar4 = lVar4 * 0xd8;
      do {
        lVar4 = lVar4 + -0xd8;
        lVar3 = lVar3 + 0xd8;
        plVar2 = *param_1;
        if (lVar4 == 0) {
          lVar1 = plVar2[2];
          goto LAB_141480947;
        }
        lVar1 = plVar2[2];
        if (*plVar2 == lVar1) {
          FUN_142cbf5f0(plVar2,lVar1,1,1,1);
          lVar1 = plVar2[2];
        }
        *(undefined *)(plVar2[1] + lVar1) = 0x2c;
        plVar2[2] = lVar1 + 1;
        lVar1 = FUN_1412f2060(lVar3,param_1);
      } while (lVar1 == 0);
    }
  }
  return lVar1;
}


/* address=1414809b0 name=FUN_1414809b0 */

longlong FUN_1414809b0(longlong **param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = *param_1;
  lVar1 = plVar2[2];
  if (*plVar2 == lVar1) {
    FUN_142cbf5f0(plVar2,lVar1,1,1,1);
    lVar1 = plVar2[2];
  }
  *(undefined *)(plVar2[1] + lVar1) = 0x5b;
  lVar1 = lVar1 + 1;
  plVar2[2] = lVar1;
  if (param_3 == 0) {
LAB_141480a71:
    if (*plVar2 == lVar1) {
      FUN_142cbf5f0(plVar2,lVar1,1,1,1);
      lVar1 = plVar2[2];
    }
    *(undefined *)(plVar2[1] + lVar1) = 0x5d;
    plVar2[2] = lVar1 + 1;
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1412f5590(param_2,param_1);
    if (lVar1 == 0) {
      param_3 = param_3 * 0x68;
      param_2 = param_2 + 0x68;
      do {
        param_3 = param_3 + -0x68;
        plVar2 = *param_1;
        if (param_3 == 0) {
          lVar1 = plVar2[2];
          goto LAB_141480a71;
        }
        lVar1 = plVar2[2];
        if (*plVar2 == lVar1) {
          FUN_142cbf5f0(plVar2,lVar1,1,1,1);
          lVar1 = plVar2[2];
        }
        *(undefined *)(plVar2[1] + lVar1) = 0x2c;
        plVar2[2] = lVar1 + 1;
        lVar1 = FUN_1412f5590(param_2,param_1);
        param_2 = param_2 + 0x68;
      } while (lVar1 == 0);
    }
  }
  return lVar1;
}


/* address=141485420 name=FUN_141485420 */

undefined *
FUN_141485420(undefined *param_1,undefined (**param_2) [16],longlong *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  void *_Buf1;
  size_t _Size;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  bool bVar16;
  ushort uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  byte bVar23;
  uint uVar24;
  byte bVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined (*pauVar28) [16];
  undefined unaff_XMM7_Ba;
  undefined unaff_XMM7_Bb;
  undefined unaff_XMM7_Bc;
  undefined unaff_XMM7_Bd;
  undefined unaff_XMM7_Be;
  undefined unaff_XMM7_Bf;
  undefined unaff_XMM7_Bg;
  undefined unaff_XMM7_Bh;
  undefined unaff_XMM7_Bi;
  undefined unaff_XMM7_Bj;
  undefined unaff_XMM7_Bk;
  undefined unaff_XMM7_Bl;
  undefined unaff_XMM7_Bm;
  undefined unaff_XMM7_Bn;
  undefined unaff_XMM7_Bo;
  undefined unaff_XMM7_Bp;
  undefined auVar29 [16];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulonglong uStack_a0;
  
  uVar20 = FUN_1402aae90();
  if (param_2[2] == (undefined (*) [16])0x0) {
    FUN_142d42780(param_2,1,param_2 + 4,1);
  }
  pauVar3 = *param_2;
  pauVar28 = param_2[1];
  bVar23 = (byte)(uVar20 >> 0x38);
  bVar25 = bVar23 >> 1;
  auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
  auVar26 = pshuflw(auVar26,auVar26,0);
  _Buf1 = (void *)param_3[1];
  _Size = param_3[2];
  bVar16 = false;
  iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                 CONCAT13(unaff_XMM7_Bl,
                          CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                 CONCAT13(unaff_XMM7_Bp,
                          CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  lVar22 = 0;
  do {
    uVar20 = uVar20 & (ulonglong)pauVar28;
    auVar2 = *(undefined (*) [16])(*pauVar3 + uVar20);
    auVar27[0] = -(auVar2[0] == auVar26[0]);
    auVar27[1] = -(auVar2[1] == auVar26[1]);
    auVar27[2] = -(auVar2[2] == auVar26[2]);
    auVar27[3] = -(auVar2[3] == auVar26[3]);
    auVar27[4] = -(auVar2[4] == auVar26[4]);
    auVar27[5] = -(auVar2[5] == auVar26[5]);
    auVar27[6] = -(auVar2[6] == auVar26[6]);
    auVar27[7] = -(auVar2[7] == auVar26[7]);
    auVar27[8] = -(auVar2[8] == auVar26[0]);
    auVar27[9] = -(auVar2[9] == auVar26[1]);
    auVar27[10] = -(auVar2[10] == auVar26[2]);
    auVar27[11] = -(auVar2[11] == auVar26[3]);
    auVar27[12] = -(auVar2[12] == auVar26[4]);
    auVar27[13] = -(auVar2[13] == auVar26[5]);
    bVar25 = auVar2[15];
    auVar27[14] = -(auVar2[14] == auVar26[6]);
    auVar27[15] = -(bVar25 == auVar26[7]);
    uVar17 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[15] >> 7) << 0xf;
    uVar24 = (uint)uVar17;
    while (uVar17 != 0) {
      uVar19 = 0;
      for (uVar4 = uVar24; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar19 = uVar19 + 1;
      }
      uVar21 = uVar19 + uVar20 & (ulonglong)pauVar28;
      if ((_Size == *(size_t *)((longlong)pauVar3 + uVar21 * -0x28 + -0x18)) &&
         (iVar18 = memcmp(_Buf1,*(void **)((longlong)pauVar3 + uVar21 * -0x28 + -0x20),_Size),
         iVar18 == 0)) {
        uVar9 = *(undefined4 *)((longlong)pauVar3 + uVar21 * -0x28 + -0xc);
        uVar10 = *(undefined4 *)((longlong)pauVar3 + uVar21 * -0x28 + -8);
        uVar11 = *(undefined4 *)((longlong)pauVar3 + uVar21 * -0x28 + -4);
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)pauVar3 + uVar21 * -0x28 + -0x10);
        *(undefined4 *)(param_1 + 5) = uVar9;
        *(undefined4 *)(param_1 + 9) = uVar10;
        *(undefined4 *)(param_1 + 0xd) = uVar11;
        uVar9 = param_4[1];
        uVar10 = param_4[2];
        uVar11 = param_4[3];
        *(undefined4 *)((longlong)pauVar3 + uVar21 * -0x28 + -0x10) = *param_4;
        *(undefined4 *)((longlong)pauVar3 + uVar21 * -0x28 + -0xc) = uVar9;
        *(undefined4 *)((longlong)pauVar3 + uVar21 * -0x28 + -8) = uVar10;
        *(undefined4 *)((longlong)pauVar3 + uVar21 * -0x28 + -4) = uVar11;
        *param_1 = 1;
        if (*param_3 == 0) {
          return param_1;
        }
        thunk_FUN_1406dbb00(param_3[1],*param_3,1);
        return param_1;
      }
      uVar17 = (ushort)(uVar24 - 1) & (ushort)uVar24;
      uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar17);
    }
    if (bVar16) {
LAB_14148556e:
      auVar29[0] = -(auVar2[0] == (char)iVar5);
      auVar29[1] = -(auVar2[1] == (char)((uint)iVar5 >> 8));
      auVar29[2] = -(auVar2[2] == (char)((uint)iVar5 >> 0x10));
      auVar29[3] = -(auVar2[3] == (char)((uint)iVar5 >> 0x18));
      auVar29[4] = -(auVar2[4] == (char)iVar6);
      auVar29[5] = -(auVar2[5] == (char)((uint)iVar6 >> 8));
      auVar29[6] = -(auVar2[6] == (char)((uint)iVar6 >> 0x10));
      auVar29[7] = -(auVar2[7] == (byte)((uint)iVar6 >> 0x18));
      auVar29[8] = -(auVar2[8] == (char)iVar7);
      auVar29[9] = -(auVar2[9] == (char)((uint)iVar7 >> 8));
      auVar29[10] = -(auVar2[10] == (char)((uint)iVar7 >> 0x10));
      auVar29[11] = -(auVar2[11] == (char)((uint)iVar7 >> 0x18));
      auVar29[12] = -(auVar2[12] == (char)iVar8);
      auVar29[13] = -(auVar2[13] == (char)((uint)iVar8 >> 8));
      auVar29[14] = -(auVar2[14] == (char)((uint)iVar8 >> 0x10));
      auVar29[15] = -(bVar25 == (byte)((uint)iVar8 >> 0x18));
      if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar29[15] >> 7) << 0xf) != 0) {
        bVar25 = (*pauVar3)[uStack_a0];
        if (-1 < (char)bVar25) {
          auVar26 = *pauVar3;
          uVar24 = 0;
          for (uVar19 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar26[15] >> 7) << 0xf); (uVar19 & 1) == 0;
              uVar19 = uVar19 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
          uStack_a0 = (ulonglong)uVar24;
          bVar25 = (*pauVar3)[uStack_a0];
        }
        lVar22 = param_3[2];
        uVar9 = *(undefined4 *)param_3;
        uVar10 = *(undefined4 *)((longlong)param_3 + 4);
        uVar11 = *(undefined4 *)(param_3 + 1);
        uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
        uVar13 = *param_4;
        uVar14 = param_4[1];
        uVar15 = *(undefined8 *)(param_4 + 2);
        bVar23 = bVar23 >> 1;
        (*pauVar3)[uStack_a0] = bVar23;
        pauVar3[1][uStack_a0 - 0x10 & (ulonglong)pauVar28] = bVar23;
        pauVar28 = (undefined (*) [16])((longlong)param_2[3] - DAT_142d770f8);
        param_2[2] = (undefined (*) [16])((longlong)param_2[2] - (ulonglong)(bVar25 & 1));
        param_2[3] = pauVar28;
        *(undefined8 *)((longlong)pauVar3 + uStack_a0 * -0x28 + -8) = uVar15;
        uStack_d8 = (undefined4)lVar22;
        uStack_d4 = (undefined4)((ulonglong)lVar22 >> 0x20);
        puVar1 = (undefined4 *)((longlong)pauVar3 + uStack_a0 * -0x28 + -0x18);
        *puVar1 = uStack_d8;
        puVar1[1] = uStack_d4;
        puVar1[2] = uVar13;
        puVar1[3] = uVar14;
        puVar1 = (undefined4 *)((longlong)pauVar3 + uStack_a0 * -0x28 + -0x28);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        *param_1 = 0;
        return param_1;
      }
      bVar16 = true;
    }
    else {
      uVar17 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(bVar25 >> 7) << 0xf;
      if (uVar17 != 0) {
        uVar24 = 0;
        for (uVar19 = (uint)uVar17; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
          uVar24 = uVar24 + 1;
        }
        uStack_a0 = uVar24 + uVar20 & (ulonglong)pauVar28;
        goto LAB_14148556e;
      }
      bVar16 = false;
    }
    uVar20 = uVar20 + lVar22 + 0x10;
    lVar22 = lVar22 + 0x10;
  } while( true );
}


/* address=141485730 name=FUN_141485730 */

ulonglong FUN_141485730(undefined (**param_1) [16],longlong *param_2)

{
  undefined4 *puVar1;
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  void *_Buf1;
  size_t _Size;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  uint uVar21;
  byte bVar22;
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined (*pauVar25) [16];
  undefined unaff_XMM7_Ba;
  undefined unaff_XMM7_Bb;
  undefined unaff_XMM7_Bc;
  undefined unaff_XMM7_Bd;
  undefined unaff_XMM7_Be;
  undefined unaff_XMM7_Bf;
  undefined unaff_XMM7_Bg;
  undefined unaff_XMM7_Bh;
  undefined unaff_XMM7_Bi;
  undefined unaff_XMM7_Bj;
  undefined unaff_XMM7_Bk;
  undefined unaff_XMM7_Bl;
  undefined unaff_XMM7_Bm;
  undefined unaff_XMM7_Bn;
  undefined unaff_XMM7_Bo;
  undefined unaff_XMM7_Bp;
  undefined auVar26 [16];
  ulonglong uStack_90;
  
  uVar17 = FUN_1402aae90(param_1 + 4);
  if (param_1[2] == (undefined (*) [16])0x0) {
    FUN_142d42e30(param_1,1,param_1 + 4,1);
  }
  pauVar3 = *param_1;
  pauVar25 = param_1[1];
  bVar20 = (byte)(uVar17 >> 0x38);
  bVar22 = bVar20 >> 1;
  auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar23 = pshuflw(auVar23,auVar23,0);
  _Buf1 = (void *)param_2[1];
  _Size = param_2[2];
  bVar13 = false;
  iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                 CONCAT13(unaff_XMM7_Bl,
                          CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                 CONCAT13(unaff_XMM7_Bp,
                          CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  lVar19 = 0;
  do {
    uVar17 = uVar17 & (ulonglong)pauVar25;
    auVar2 = *(undefined (*) [16])(*pauVar3 + uVar17);
    auVar24[0] = -(auVar2[0] == auVar23[0]);
    auVar24[1] = -(auVar2[1] == auVar23[1]);
    auVar24[2] = -(auVar2[2] == auVar23[2]);
    auVar24[3] = -(auVar2[3] == auVar23[3]);
    auVar24[4] = -(auVar2[4] == auVar23[4]);
    auVar24[5] = -(auVar2[5] == auVar23[5]);
    auVar24[6] = -(auVar2[6] == auVar23[6]);
    auVar24[7] = -(auVar2[7] == auVar23[7]);
    auVar24[8] = -(auVar2[8] == auVar23[0]);
    auVar24[9] = -(auVar2[9] == auVar23[1]);
    auVar24[10] = -(auVar2[10] == auVar23[2]);
    auVar24[11] = -(auVar2[11] == auVar23[3]);
    auVar24[12] = -(auVar2[12] == auVar23[4]);
    auVar24[13] = -(auVar2[13] == auVar23[5]);
    bVar22 = auVar2[15];
    auVar24[14] = -(auVar2[14] == auVar23[6]);
    auVar24[15] = -(bVar22 == auVar23[7]);
    uVar14 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[15] >> 7) << 0xf;
    uVar21 = (uint)uVar14;
    while (uVar14 != 0) {
      uVar16 = 0;
      for (uVar4 = uVar21; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      uVar18 = uVar16 + uVar17 & (ulonglong)pauVar25;
      if ((_Size == *(size_t *)((longlong)pauVar3 + uVar18 * -0x18 + -8)) &&
         (iVar15 = memcmp(_Buf1,*(void **)((longlong)pauVar3 + uVar18 * -0x18 + -0x10),_Size),
         iVar15 == 0)) {
        uVar17 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        if (*param_2 != 0) {
          thunk_FUN_1406dbb00(_Buf1,*param_2,1);
        }
        goto LAB_141485908;
      }
      uVar14 = (ushort)(uVar21 - 1) & (ushort)uVar21;
      uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar14);
    }
    if (bVar13) goto LAB_14148584e;
    uVar14 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(bVar22 >> 7) << 0xf;
    if (uVar14 == 0) {
      bVar13 = false;
    }
    else {
      uVar21 = 0;
      for (uVar16 = (uint)uVar14; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
        uVar21 = uVar21 + 1;
      }
      uStack_90 = uVar21 + uVar17 & (ulonglong)pauVar25;
LAB_14148584e:
      auVar26[0] = -(auVar2[0] == (char)iVar5);
      auVar26[1] = -(auVar2[1] == (char)((uint)iVar5 >> 8));
      auVar26[2] = -(auVar2[2] == (char)((uint)iVar5 >> 0x10));
      auVar26[3] = -(auVar2[3] == (char)((uint)iVar5 >> 0x18));
      auVar26[4] = -(auVar2[4] == (char)iVar6);
      auVar26[5] = -(auVar2[5] == (char)((uint)iVar6 >> 8));
      auVar26[6] = -(auVar2[6] == (char)((uint)iVar6 >> 0x10));
      auVar26[7] = -(auVar2[7] == (byte)((uint)iVar6 >> 0x18));
      auVar26[8] = -(auVar2[8] == (char)iVar7);
      auVar26[9] = -(auVar2[9] == (char)((uint)iVar7 >> 8));
      auVar26[10] = -(auVar2[10] == (char)((uint)iVar7 >> 0x10));
      auVar26[11] = -(auVar2[11] == (char)((uint)iVar7 >> 0x18));
      auVar26[12] = -(auVar2[12] == (char)iVar8);
      auVar26[13] = -(auVar2[13] == (char)((uint)iVar8 >> 8));
      auVar26[14] = -(auVar2[14] == (char)((uint)iVar8 >> 0x10));
      auVar26[15] = -(bVar22 == (byte)((uint)iVar8 >> 0x18));
      if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar26[15] >> 7) << 0xf) != 0) {
        bVar22 = (*pauVar3)[uStack_90];
        if (-1 < (char)bVar22) {
          auVar23 = *pauVar3;
          uVar21 = 0;
          for (uVar16 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar23[15] >> 7) << 0xf); (uVar16 & 1) == 0;
              uVar16 = uVar16 >> 1 | 0x80000000) {
            uVar21 = uVar21 + 1;
          }
          uStack_90 = (ulonglong)uVar21;
          bVar22 = (*pauVar3)[uStack_90];
        }
        lVar19 = param_2[2];
        uVar9 = *(undefined4 *)param_2;
        uVar10 = *(undefined4 *)((longlong)param_2 + 4);
        uVar11 = *(undefined4 *)(param_2 + 1);
        uVar12 = *(undefined4 *)((longlong)param_2 + 0xc);
        bVar20 = bVar20 >> 1;
        (*pauVar3)[uStack_90] = bVar20;
        pauVar3[1][uStack_90 - 0x10 & (ulonglong)pauVar25] = bVar20;
        pauVar25 = (undefined (*) [16])((longlong)param_1[3] - DAT_142d770f8);
        param_1[2] = (undefined (*) [16])((longlong)param_1[2] - (ulonglong)(bVar22 & 1));
        param_1[3] = pauVar25;
        *(longlong *)((longlong)pauVar3 + uStack_90 * -0x18 + -8) = lVar19;
        puVar1 = (undefined4 *)((longlong)pauVar3 + uStack_90 * -0x18 + -0x18);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        uVar17 = 0;
LAB_141485908:
        return uVar17 & 0xffffffff;
      }
      bVar13 = true;
    }
    uVar17 = uVar17 + lVar19 + 0x10;
    lVar19 = lVar19 + 0x10;
  } while( true );
}


/* address=141485ca0 name=FUN_141485ca0 */

ulonglong FUN_141485ca0(undefined (**param_1) [16],longlong *param_2,undefined param_3)

{
  undefined auVar1 [16];
  undefined (*pauVar2) [16];
  void *_Buf1;
  size_t _Size;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte bVar19;
  undefined (**ppauVar20) [16];
  uint uVar21;
  byte bVar22;
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined (*pauVar25) [16];
  undefined unaff_XMM7_Ba;
  undefined unaff_XMM7_Bb;
  undefined unaff_XMM7_Bc;
  undefined unaff_XMM7_Bd;
  undefined unaff_XMM7_Be;
  undefined unaff_XMM7_Bf;
  undefined unaff_XMM7_Bg;
  undefined unaff_XMM7_Bh;
  undefined unaff_XMM7_Bi;
  undefined unaff_XMM7_Bj;
  undefined unaff_XMM7_Bk;
  undefined unaff_XMM7_Bl;
  undefined unaff_XMM7_Bm;
  undefined unaff_XMM7_Bn;
  undefined unaff_XMM7_Bo;
  undefined unaff_XMM7_Bp;
  undefined auVar26 [16];
  
  ppauVar20 = param_1 + 4;
  uVar16 = FUN_1402aae90();
  if (param_1[2] == (undefined (*) [16])0x0) {
    FUN_142cd59a0(param_1,1,ppauVar20,1);
  }
  pauVar2 = *param_1;
  pauVar25 = param_1[1];
  bVar19 = (byte)(uVar16 >> 0x38);
  bVar22 = bVar19 >> 1;
  auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
  auVar23 = pshuflw(auVar23,auVar23,0);
  _Buf1 = (void *)param_2[1];
  _Size = param_2[2];
  bVar12 = false;
  iVar4 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                 CONCAT13(unaff_XMM7_Bl,
                          CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                 CONCAT13(unaff_XMM7_Bp,
                          CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  lVar18 = 0;
  do {
    uVar16 = uVar16 & (ulonglong)pauVar25;
    auVar1 = *(undefined (*) [16])(*pauVar2 + uVar16);
    auVar24[0] = -(auVar1[0] == auVar23[0]);
    auVar24[1] = -(auVar1[1] == auVar23[1]);
    auVar24[2] = -(auVar1[2] == auVar23[2]);
    auVar24[3] = -(auVar1[3] == auVar23[3]);
    auVar24[4] = -(auVar1[4] == auVar23[4]);
    auVar24[5] = -(auVar1[5] == auVar23[5]);
    auVar24[6] = -(auVar1[6] == auVar23[6]);
    auVar24[7] = -(auVar1[7] == auVar23[7]);
    auVar24[8] = -(auVar1[8] == auVar23[0]);
    auVar24[9] = -(auVar1[9] == auVar23[1]);
    auVar24[10] = -(auVar1[10] == auVar23[2]);
    auVar24[11] = -(auVar1[11] == auVar23[3]);
    auVar24[12] = -(auVar1[12] == auVar23[4]);
    auVar24[13] = -(auVar1[13] == auVar23[5]);
    bVar22 = auVar1[15];
    auVar24[14] = -(auVar1[14] == auVar23[6]);
    auVar24[15] = -(bVar22 == auVar23[7]);
    uVar13 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[15] >> 7) << 0xf;
    uVar21 = (uint)uVar13;
    while (uVar13 != 0) {
      uVar15 = 0;
      for (uVar3 = uVar21; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      uVar17 = uVar15 + uVar16 & (ulonglong)pauVar25;
      if ((_Size == *(size_t *)pauVar2[uVar17 * -2 + -1]) &&
         (iVar14 = memcmp(_Buf1,*(void **)(pauVar2[uVar17 * -2 + -2] + 8),_Size), iVar14 == 0)) {
        uVar16 = (ulonglong)(byte)pauVar2[uVar17 * -2 + -1][8];
        pauVar2[uVar17 * -2 + -1][8] = param_3;
        if (*param_2 != 0) {
          thunk_FUN_1406dbb00(param_2[1],*param_2,1);
        }
        goto LAB_141485ea1;
      }
      uVar13 = (ushort)(uVar21 - 1) & (ushort)uVar21;
      uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar13);
    }
    if (bVar12) goto LAB_141485dda;
    uVar13 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar22 >> 7) << 0xf;
    uVar21 = (uint)uVar13;
    if (uVar13 == 0) {
      bVar12 = false;
    }
    else {
      uVar15 = 0;
      for (; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      ppauVar20 = (undefined (**) [16])(uVar15 + uVar16 & (ulonglong)pauVar25);
LAB_141485dda:
      auVar26[0] = -(auVar1[0] == (char)iVar4);
      auVar26[1] = -(auVar1[1] == (char)((uint)iVar4 >> 8));
      auVar26[2] = -(auVar1[2] == (char)((uint)iVar4 >> 0x10));
      auVar26[3] = -(auVar1[3] == (char)((uint)iVar4 >> 0x18));
      auVar26[4] = -(auVar1[4] == (char)iVar5);
      auVar26[5] = -(auVar1[5] == (char)((uint)iVar5 >> 8));
      auVar26[6] = -(auVar1[6] == (char)((uint)iVar5 >> 0x10));
      auVar26[7] = -(auVar1[7] == (byte)((uint)iVar5 >> 0x18));
      auVar26[8] = -(auVar1[8] == (char)iVar6);
      auVar26[9] = -(auVar1[9] == (char)((uint)iVar6 >> 8));
      auVar26[10] = -(auVar1[10] == (char)((uint)iVar6 >> 0x10));
      auVar26[11] = -(auVar1[11] == (char)((uint)iVar6 >> 0x18));
      auVar26[12] = -(auVar1[12] == (char)iVar7);
      auVar26[13] = -(auVar1[13] == (char)((uint)iVar7 >> 8));
      auVar26[14] = -(auVar1[14] == (char)((uint)iVar7 >> 0x10));
      auVar26[15] = -(bVar22 == (byte)((uint)iVar7 >> 0x18));
      if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar26[15] >> 7) << 0xf) != 0) {
        bVar22 = (*pauVar2)[(longlong)ppauVar20];
        if (-1 < (char)bVar22) {
          auVar23 = *pauVar2;
          uVar21 = 0;
          for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar23[15] >> 7) << 0xf); (uVar15 & 1) == 0;
              uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar21 = uVar21 + 1;
          }
          ppauVar20 = (undefined (**) [16])(ulonglong)uVar21;
          bVar22 = (*pauVar2)[(longlong)ppauVar20];
        }
        lVar18 = param_2[2];
        uVar8 = *(undefined4 *)param_2;
        uVar9 = *(undefined4 *)((longlong)param_2 + 4);
        uVar10 = *(undefined4 *)(param_2 + 1);
        uVar11 = *(undefined4 *)((longlong)param_2 + 0xc);
        bVar19 = bVar19 >> 1;
        (*pauVar2)[(longlong)ppauVar20] = bVar19;
        pauVar2[1][(ulonglong)(ppauVar20 + -2) & (ulonglong)pauVar25] = bVar19;
        pauVar25 = (undefined (*) [16])((longlong)param_1[3] - DAT_142d770f8);
        param_1[2] = (undefined (*) [16])((longlong)param_1[2] - (ulonglong)(bVar22 & 1));
        param_1[3] = pauVar25;
        *(longlong *)pauVar2[(longlong)ppauVar20 * -2 + -1] = lVar18;
        *(undefined4 *)pauVar2[(longlong)ppauVar20 * -2 + -2] = uVar8;
        *(undefined4 *)(pauVar2[(longlong)ppauVar20 * -2 + -2] + 4) = uVar9;
        *(undefined4 *)(pauVar2[(longlong)ppauVar20 * -2 + -2] + 8) = uVar10;
        *(undefined4 *)(pauVar2[(longlong)ppauVar20 * -2 + -2] + 0xc) = uVar11;
        pauVar2[(longlong)ppauVar20 * -2 + -1][8] = param_3;
        uVar16 = CONCAT71((int7)((ulonglong)param_1 >> 8),2);
LAB_141485ea1:
        return uVar16 & 0xffffffff;
      }
      bVar12 = true;
    }
    uVar16 = uVar16 + lVar18 + 0x10;
    lVar18 = lVar18 + 0x10;
  } while( true );
}


/* address=141485f70 name=FUN_141485f70 */

undefined8 *
FUN_141485f70(undefined8 *param_1,undefined (**param_2) [16],longlong *param_3,undefined4 *param_4)

{
  undefined auVar1 [16];
  undefined (*pauVar2) [16];
  void *_Buf1;
  size_t _Size;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  bool bVar29;
  ushort uVar30;
  int iVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  byte bVar36;
  uint uVar37;
  byte bVar38;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined (*pauVar41) [16];
  undefined unaff_XMM7_Ba;
  undefined unaff_XMM7_Bb;
  undefined unaff_XMM7_Bc;
  undefined unaff_XMM7_Bd;
  undefined unaff_XMM7_Be;
  undefined unaff_XMM7_Bf;
  undefined unaff_XMM7_Bg;
  undefined unaff_XMM7_Bh;
  undefined unaff_XMM7_Bi;
  undefined unaff_XMM7_Bj;
  undefined unaff_XMM7_Bk;
  undefined unaff_XMM7_Bl;
  undefined unaff_XMM7_Bm;
  undefined unaff_XMM7_Bn;
  undefined unaff_XMM7_Bo;
  undefined unaff_XMM7_Bp;
  undefined auVar42 [16];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong uStack_a0;
  
  uVar33 = FUN_1402aae90(param_2 + 4,param_3);
  if (param_2[2] == (undefined (*) [16])0x0) {
    FUN_142d43b40(param_2,1,param_2 + 4,1);
  }
  pauVar2 = *param_2;
  pauVar41 = param_2[1];
  bVar36 = (byte)(uVar33 >> 0x38);
  bVar38 = bVar36 >> 1;
  auVar39 = ZEXT216(CONCAT11(bVar38,bVar38));
  auVar39 = pshuflw(auVar39,auVar39,0);
  _Buf1 = (void *)param_3[1];
  _Size = param_3[2];
  bVar29 = false;
  iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                 CONCAT13(unaff_XMM7_Bl,
                          CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                 CONCAT13(unaff_XMM7_Bp,
                          CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  lVar35 = 0;
  do {
    uVar33 = uVar33 & (ulonglong)pauVar41;
    auVar1 = *(undefined (*) [16])(*pauVar2 + uVar33);
    auVar40[0] = -(auVar1[0] == auVar39[0]);
    auVar40[1] = -(auVar1[1] == auVar39[1]);
    auVar40[2] = -(auVar1[2] == auVar39[2]);
    auVar40[3] = -(auVar1[3] == auVar39[3]);
    auVar40[4] = -(auVar1[4] == auVar39[4]);
    auVar40[5] = -(auVar1[5] == auVar39[5]);
    auVar40[6] = -(auVar1[6] == auVar39[6]);
    auVar40[7] = -(auVar1[7] == auVar39[7]);
    auVar40[8] = -(auVar1[8] == auVar39[0]);
    auVar40[9] = -(auVar1[9] == auVar39[1]);
    auVar40[10] = -(auVar1[10] == auVar39[2]);
    auVar40[11] = -(auVar1[11] == auVar39[3]);
    auVar40[12] = -(auVar1[12] == auVar39[4]);
    auVar40[13] = -(auVar1[13] == auVar39[5]);
    bVar38 = auVar1[15];
    auVar40[14] = -(auVar1[14] == auVar39[6]);
    auVar40[15] = -(bVar38 == auVar39[7]);
    uVar30 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[15] >> 7) << 0xf;
    uVar37 = (uint)uVar30;
    while (uVar30 != 0) {
      uVar32 = 0;
      for (uVar4 = uVar37; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar32 = uVar32 + 1;
      }
      uVar34 = uVar32 + uVar33 & (ulonglong)pauVar41;
      if ((_Size == *(size_t *)pauVar2[uVar34 * -6 + -5]) &&
         (iVar31 = memcmp(_Buf1,*(void **)(pauVar2[uVar34 * -6 + -6] + 8),_Size), iVar31 == 0)) {
        param_1[8] = *(undefined8 *)(pauVar2[uVar34 * -6 + -1] + 8);
        uVar9 = *(undefined4 *)(pauVar2[uVar34 * -6 + -5] + 8);
        uVar10 = *(undefined4 *)(pauVar2[uVar34 * -6 + -5] + 0xc);
        uVar11 = *(undefined4 *)pauVar2[uVar34 * -6 + -4];
        uVar12 = *(undefined4 *)(pauVar2[uVar34 * -6 + -4] + 4);
        uVar13 = *(undefined4 *)(pauVar2[uVar34 * -6 + -4] + 8);
        uVar14 = *(undefined4 *)(pauVar2[uVar34 * -6 + -4] + 0xc);
        uVar15 = *(undefined4 *)pauVar2[uVar34 * -6 + -3];
        uVar16 = *(undefined4 *)(pauVar2[uVar34 * -6 + -3] + 4);
        uVar17 = *(undefined4 *)(pauVar2[uVar34 * -6 + -3] + 8);
        uVar18 = *(undefined4 *)(pauVar2[uVar34 * -6 + -3] + 0xc);
        uVar19 = *(undefined4 *)pauVar2[uVar34 * -6 + -2];
        uVar20 = *(undefined4 *)(pauVar2[uVar34 * -6 + -2] + 4);
        uVar21 = *(undefined4 *)(pauVar2[uVar34 * -6 + -2] + 0xc);
        uVar22 = *(undefined4 *)pauVar2[uVar34 * -6 + -1];
        uVar23 = *(undefined4 *)(pauVar2[uVar34 * -6 + -1] + 4);
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(pauVar2[uVar34 * -6 + -2] + 8);
        *(undefined4 *)((longlong)param_1 + 0x34) = uVar21;
        *(undefined4 *)(param_1 + 7) = uVar22;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar23;
        *(undefined4 *)(param_1 + 4) = uVar17;
        *(undefined4 *)((longlong)param_1 + 0x24) = uVar18;
        *(undefined4 *)(param_1 + 5) = uVar19;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar20;
        *(undefined4 *)(param_1 + 2) = uVar13;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar14;
        *(undefined4 *)(param_1 + 3) = uVar15;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar16;
        *(undefined4 *)param_1 = uVar9;
        *(undefined4 *)((longlong)param_1 + 4) = uVar10;
        *(undefined4 *)(param_1 + 1) = uVar11;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar12;
        *(undefined8 *)(pauVar2[uVar34 * -6 + -1] + 8) = *(undefined8 *)(param_4 + 0x10);
        uVar16 = *param_4;
        uVar17 = param_4[1];
        uVar18 = param_4[2];
        uVar19 = param_4[3];
        uVar20 = param_4[4];
        uVar21 = param_4[5];
        uVar22 = param_4[6];
        uVar23 = param_4[7];
        uVar9 = param_4[8];
        uVar10 = param_4[9];
        uVar11 = param_4[10];
        uVar12 = param_4[0xb];
        uVar13 = param_4[0xd];
        uVar14 = param_4[0xe];
        uVar15 = param_4[0xf];
        *(undefined4 *)(pauVar2[uVar34 * -6 + -2] + 8) = param_4[0xc];
        *(undefined4 *)(pauVar2[uVar34 * -6 + -2] + 0xc) = uVar13;
        *(undefined4 *)pauVar2[uVar34 * -6 + -1] = uVar14;
        *(undefined4 *)(pauVar2[uVar34 * -6 + -1] + 4) = uVar15;
        *(undefined4 *)(pauVar2[uVar34 * -6 + -3] + 8) = uVar9;
        *(undefined4 *)(pauVar2[uVar34 * -6 + -3] + 0xc) = uVar10;
        *(undefined4 *)pauVar2[uVar34 * -6 + -2] = uVar11;
        *(undefined4 *)(pauVar2[uVar34 * -6 + -2] + 4) = uVar12;
        *(undefined4 *)(pauVar2[uVar34 * -6 + -4] + 8) = uVar20;
        *(undefined4 *)(pauVar2[uVar34 * -6 + -4] + 0xc) = uVar21;
        *(undefined4 *)pauVar2[uVar34 * -6 + -3] = uVar22;
        *(undefined4 *)(pauVar2[uVar34 * -6 + -3] + 4) = uVar23;
        *(undefined4 *)(pauVar2[uVar34 * -6 + -5] + 8) = uVar16;
        *(undefined4 *)(pauVar2[uVar34 * -6 + -5] + 0xc) = uVar17;
        *(undefined4 *)pauVar2[uVar34 * -6 + -4] = uVar18;
        *(undefined4 *)(pauVar2[uVar34 * -6 + -4] + 4) = uVar19;
        if (*param_3 == 0) {
          return param_1;
        }
        thunk_FUN_1406dbb00(param_3[1],*param_3,1);
        return param_1;
      }
      uVar30 = (ushort)(uVar37 - 1) & (ushort)uVar37;
      uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar30);
    }
    if (bVar29) {
LAB_1414860ae:
      auVar42[0] = -(auVar1[0] == (char)iVar5);
      auVar42[1] = -(auVar1[1] == (char)((uint)iVar5 >> 8));
      auVar42[2] = -(auVar1[2] == (char)((uint)iVar5 >> 0x10));
      auVar42[3] = -(auVar1[3] == (char)((uint)iVar5 >> 0x18));
      auVar42[4] = -(auVar1[4] == (char)iVar6);
      auVar42[5] = -(auVar1[5] == (char)((uint)iVar6 >> 8));
      auVar42[6] = -(auVar1[6] == (char)((uint)iVar6 >> 0x10));
      auVar42[7] = -(auVar1[7] == (byte)((uint)iVar6 >> 0x18));
      auVar42[8] = -(auVar1[8] == (char)iVar7);
      auVar42[9] = -(auVar1[9] == (char)((uint)iVar7 >> 8));
      auVar42[10] = -(auVar1[10] == (char)((uint)iVar7 >> 0x10));
      auVar42[11] = -(auVar1[11] == (char)((uint)iVar7 >> 0x18));
      auVar42[12] = -(auVar1[12] == (char)iVar8);
      auVar42[13] = -(auVar1[13] == (char)((uint)iVar8 >> 8));
      auVar42[14] = -(auVar1[14] == (char)((uint)iVar8 >> 0x10));
      auVar42[15] = -(bVar38 == (byte)((uint)iVar8 >> 0x18));
      if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar42[15] >> 7) << 0xf) != 0) {
        bVar38 = (*pauVar2)[uStack_a0];
        if (-1 < (char)bVar38) {
          auVar39 = *pauVar2;
          uVar37 = 0;
          for (uVar32 = (uint)(ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar39[15] >> 7) << 0xf); (uVar32 & 1) == 0;
              uVar32 = uVar32 >> 1 | 0x80000000) {
            uVar37 = uVar37 + 1;
          }
          uStack_a0 = (ulonglong)uVar37;
          bVar38 = (*pauVar2)[uStack_a0];
        }
        lVar35 = param_3[2];
        uVar9 = *(undefined4 *)param_3;
        uVar10 = *(undefined4 *)((longlong)param_3 + 4);
        uVar11 = *(undefined4 *)(param_3 + 1);
        uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
        uVar13 = *param_4;
        uVar14 = param_4[1];
        uVar15 = param_4[2];
        uVar16 = param_4[3];
        uVar17 = param_4[4];
        uVar18 = param_4[5];
        uVar19 = param_4[6];
        uVar20 = param_4[7];
        uVar21 = param_4[8];
        uVar22 = param_4[9];
        uVar23 = param_4[10];
        uVar24 = param_4[0xb];
        uVar25 = param_4[0xc];
        uVar26 = param_4[0xd];
        uVar27 = param_4[0xe];
        uVar28 = param_4[0xf];
        uVar3 = *(undefined8 *)(param_4 + 0x10);
        bVar36 = bVar36 >> 1;
        (*pauVar2)[uStack_a0] = bVar36;
        pauVar2[1][uStack_a0 - 0x10 & (ulonglong)pauVar41] = bVar36;
        pauVar41 = (undefined (*) [16])((longlong)param_2[3] - DAT_142d770f8);
        param_2[2] = (undefined (*) [16])((longlong)param_2[2] - (ulonglong)(bVar38 & 1));
        param_2[3] = pauVar41;
        uStack_d0 = (undefined4)uVar3;
        uStack_cc = (undefined4)((ulonglong)uVar3 >> 0x20);
        pauVar41 = pauVar2 + uStack_a0 * -6 + -1;
        *(undefined4 *)*pauVar41 = uVar27;
        *(undefined4 *)(*pauVar41 + 4) = uVar28;
        *(undefined4 *)(*pauVar41 + 8) = uStack_d0;
        *(undefined4 *)(*pauVar41 + 0xc) = uStack_cc;
        pauVar41 = pauVar2 + uStack_a0 * -6 + -2;
        *(undefined4 *)*pauVar41 = uVar23;
        *(undefined4 *)(*pauVar41 + 4) = uVar24;
        *(undefined4 *)(*pauVar41 + 8) = uVar25;
        *(undefined4 *)(*pauVar41 + 0xc) = uVar26;
        uStack_118 = (undefined4)lVar35;
        uStack_114 = (undefined4)((ulonglong)lVar35 >> 0x20);
        pauVar41 = pauVar2 + uStack_a0 * -6 + -3;
        *(undefined4 *)*pauVar41 = uVar19;
        *(undefined4 *)(*pauVar41 + 4) = uVar20;
        *(undefined4 *)(*pauVar41 + 8) = uVar21;
        *(undefined4 *)(*pauVar41 + 0xc) = uVar22;
        pauVar41 = pauVar2 + uStack_a0 * -6 + -4;
        *(undefined4 *)*pauVar41 = uVar15;
        *(undefined4 *)(*pauVar41 + 4) = uVar16;
        *(undefined4 *)(*pauVar41 + 8) = uVar17;
        *(undefined4 *)(*pauVar41 + 0xc) = uVar18;
        pauVar41 = pauVar2 + uStack_a0 * -6 + -5;
        *(undefined4 *)*pauVar41 = uStack_118;
        *(undefined4 *)(*pauVar41 + 4) = uStack_114;
        *(undefined4 *)(*pauVar41 + 8) = uVar13;
        *(undefined4 *)(*pauVar41 + 0xc) = uVar14;
        pauVar2 = pauVar2 + uStack_a0 * -6 + -6;
        *(undefined4 *)*pauVar2 = uVar9;
        *(undefined4 *)(*pauVar2 + 4) = uVar10;
        *(undefined4 *)(*pauVar2 + 8) = uVar11;
        *(undefined4 *)(*pauVar2 + 0xc) = uVar12;
        *param_1 = 0xfffffffffffffffe;
        return param_1;
      }
      bVar29 = true;
    }
    else {
      uVar30 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar38 >> 7) << 0xf;
      if (uVar30 != 0) {
        uVar37 = 0;
        for (uVar32 = (uint)uVar30; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
          uVar37 = uVar37 + 1;
        }
        uStack_a0 = uVar37 + uVar33 & (ulonglong)pauVar41;
        goto LAB_1414860ae;
      }
      bVar29 = false;
    }
    uVar33 = uVar33 + lVar35 + 0x10;
    lVar35 = lVar35 + 0x10;
  } while( true );
}


/* address=141486300 name=FUN_141486300 */

undefined4 *
FUN_141486300(undefined4 *param_1,undefined (**param_2) [16],undefined (**param_3) [16],
             undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined auVar2 [16];
  undefined (*pauVar3) [16];
  undefined8 uVar4;
  uint uVar5;
  short sVar6;
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
  bool bVar22;
  ulonglong uVar23;
  byte bVar24;
  uint uVar25;
  undefined (**ppauVar26) [16];
  longlong lVar27;
  uint uVar28;
  ushort uVar29;
  ulonglong uVar30;
  byte bVar31;
  undefined auVar32 [16];
  undefined (*pauVar33) [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined4 uStack_96;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  short sStack_3a;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  sVar6 = (short)param_3;
  ppauVar26 = param_2 + 4;
  sStack_3a = sVar6;
  uVar23 = FUN_140453280(ppauVar26,&sStack_3a);
  if (param_2[2] == (undefined (*) [16])0x0) {
    FUN_142d039b0(param_2,1);
    param_3 = ppauVar26;
  }
  pauVar3 = *param_2;
  pauVar33 = param_2[1];
  bVar24 = (byte)(uVar23 >> 0x38);
  bVar31 = bVar24 >> 1;
  auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
  auVar32 = pshuflw(auVar32,auVar32,0);
  bVar22 = false;
  lVar27 = 0;
  do {
    uVar23 = uVar23 & (ulonglong)pauVar33;
    auVar2 = *(undefined (*) [16])(*pauVar3 + uVar23);
    auVar35[0] = -(auVar2[0] == auVar32[0]);
    auVar35[1] = -(auVar2[1] == auVar32[1]);
    auVar35[2] = -(auVar2[2] == auVar32[2]);
    auVar35[3] = -(auVar2[3] == auVar32[3]);
    auVar35[4] = -(auVar2[4] == auVar32[4]);
    auVar35[5] = -(auVar2[5] == auVar32[5]);
    auVar35[6] = -(auVar2[6] == auVar32[6]);
    auVar35[7] = -(auVar2[7] == auVar32[7]);
    auVar35[8] = -(auVar2[8] == auVar32[0]);
    auVar35[9] = -(auVar2[9] == auVar32[1]);
    auVar35[10] = -(auVar2[10] == auVar32[2]);
    auVar35[11] = -(auVar2[11] == auVar32[3]);
    auVar35[12] = -(auVar2[12] == auVar32[4]);
    auVar35[13] = -(auVar2[13] == auVar32[5]);
    bVar31 = auVar2[15];
    auVar35[14] = -(auVar2[14] == auVar32[6]);
    auVar35[15] = -(bVar31 == auVar32[7]);
    uVar29 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[15] >> 7) << 0xf;
    uVar28 = (uint)uVar29;
    while (uVar29 != 0) {
      uVar25 = 0;
      for (uVar5 = uVar28; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar25 = uVar25 + 1;
      }
      uVar30 = uVar25 + uVar23 & (ulonglong)pauVar33;
      if (sVar6 == *(short *)pauVar3[uVar30 * -5 + -5]) {
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pauVar3[uVar30 * -5 + -1] + 8);
        uVar7 = *(undefined4 *)(pauVar3[uVar30 * -5 + -5] + 8);
        uVar8 = *(undefined4 *)(pauVar3[uVar30 * -5 + -5] + 0xc);
        uVar9 = *(undefined4 *)pauVar3[uVar30 * -5 + -4];
        uVar10 = *(undefined4 *)(pauVar3[uVar30 * -5 + -4] + 4);
        uVar11 = *(undefined4 *)(pauVar3[uVar30 * -5 + -4] + 8);
        uVar12 = *(undefined4 *)(pauVar3[uVar30 * -5 + -4] + 0xc);
        uVar13 = *(undefined4 *)pauVar3[uVar30 * -5 + -3];
        uVar14 = *(undefined4 *)(pauVar3[uVar30 * -5 + -3] + 4);
        uVar15 = *(undefined4 *)(pauVar3[uVar30 * -5 + -3] + 8);
        uVar16 = *(undefined4 *)(pauVar3[uVar30 * -5 + -3] + 0xc);
        uVar17 = *(undefined4 *)pauVar3[uVar30 * -5 + -2];
        uVar18 = *(undefined4 *)(pauVar3[uVar30 * -5 + -2] + 4);
        uVar19 = *(undefined4 *)(pauVar3[uVar30 * -5 + -2] + 0xc);
        uVar20 = *(undefined4 *)pauVar3[uVar30 * -5 + -1];
        uVar21 = *(undefined4 *)(pauVar3[uVar30 * -5 + -1] + 4);
        param_1[0xc] = *(undefined4 *)(pauVar3[uVar30 * -5 + -2] + 8);
        param_1[0xd] = uVar19;
        param_1[0xe] = uVar20;
        param_1[0xf] = uVar21;
        param_1[8] = uVar15;
        param_1[9] = uVar16;
        param_1[10] = uVar17;
        param_1[0xb] = uVar18;
        param_1[4] = uVar11;
        param_1[5] = uVar12;
        param_1[6] = uVar13;
        param_1[7] = uVar14;
        *param_1 = uVar7;
        param_1[1] = uVar8;
        param_1[2] = uVar9;
        param_1[3] = uVar10;
        uVar7 = param_4[1];
        uVar8 = param_4[2];
        uVar9 = param_4[3];
        uVar10 = param_4[4];
        uVar11 = param_4[5];
        uVar12 = param_4[6];
        uVar13 = param_4[7];
        uVar14 = param_4[8];
        uVar15 = param_4[9];
        uVar16 = param_4[10];
        uVar17 = param_4[0xb];
        uVar18 = param_4[0xc];
        uVar19 = param_4[0xd];
        uVar20 = param_4[0xe];
        uVar21 = param_4[0xf];
        *(undefined4 *)(pauVar3[uVar30 * -5 + -5] + 8) = *param_4;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -5] + 0xc) = uVar7;
        *(undefined4 *)pauVar3[uVar30 * -5 + -4] = uVar8;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -4] + 4) = uVar9;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -4] + 8) = uVar10;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -4] + 0xc) = uVar11;
        *(undefined4 *)pauVar3[uVar30 * -5 + -3] = uVar12;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -3] + 4) = uVar13;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -3] + 8) = uVar14;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -3] + 0xc) = uVar15;
        *(undefined4 *)pauVar3[uVar30 * -5 + -2] = uVar16;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -2] + 4) = uVar17;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -2] + 8) = uVar18;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -2] + 0xc) = uVar19;
        *(undefined4 *)pauVar3[uVar30 * -5 + -1] = uVar20;
        *(undefined4 *)(pauVar3[uVar30 * -5 + -1] + 4) = uVar21;
        *(undefined8 *)(pauVar3[uVar30 * -5 + -1] + 8) = *(undefined8 *)(param_4 + 0x10);
        return param_1;
      }
      uVar29 = (ushort)(uVar28 - 1) & (ushort)uVar28;
      uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar29);
    }
    if (bVar22) {
LAB_1414863db:
      auVar34[0] = -(auVar2[0] == -1);
      auVar34[1] = -(auVar2[1] == -1);
      auVar34[2] = -(auVar2[2] == -1);
      auVar34[3] = -(auVar2[3] == -1);
      auVar34[4] = -(auVar2[4] == -1);
      auVar34[5] = -(auVar2[5] == -1);
      auVar34[6] = -(auVar2[6] == -1);
      auVar34[7] = -(auVar2[7] == 0xff);
      auVar34[8] = -(auVar2[8] == -1);
      auVar34[9] = -(auVar2[9] == -1);
      auVar34[10] = -(auVar2[10] == -1);
      auVar34[11] = -(auVar2[11] == -1);
      auVar34[12] = -(auVar2[12] == -1);
      auVar34[13] = -(auVar2[13] == -1);
      auVar34[14] = -(auVar2[14] == -1);
      auVar34[15] = -(bVar31 == 0xff);
      if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar34[15] >> 7) << 0xf) != 0) {
        bVar31 = (*pauVar3)[(longlong)param_3];
        if (-1 < (char)bVar31) {
          auVar32 = *pauVar3;
          uVar28 = 0;
          for (uVar25 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar32[15] >> 7) << 0xf); (uVar25 & 1) == 0;
              uVar25 = uVar25 >> 1 | 0x80000000) {
            uVar28 = uVar28 + 1;
          }
          param_3 = (undefined (**) [16])(ulonglong)uVar28;
          bVar31 = (*pauVar3)[(longlong)param_3];
        }
        uVar4 = *(undefined8 *)(param_4 + 0x10);
        uVar7 = param_4[0xe];
        uVar8 = param_4[0xf];
        uStack_60 = (undefined2)param_4[0xc];
        uStack_5e = (undefined2)((uint)param_4[0xc] >> 0x10);
        uStack_5c = (undefined2)param_4[0xd];
        uStack_5a = (undefined2)((uint)param_4[0xd] >> 0x10);
        uStack_58 = (undefined2)uVar7;
        uStack_70 = (undefined2)param_4[8];
        uStack_6e = (undefined2)((uint)param_4[8] >> 0x10);
        uStack_6c = (undefined2)param_4[9];
        uStack_6a = (undefined2)((uint)param_4[9] >> 0x10);
        uStack_68 = (undefined2)param_4[10];
        uStack_66 = (undefined2)((uint)param_4[10] >> 0x10);
        uStack_64 = (undefined2)param_4[0xb];
        uStack_62 = (undefined2)((uint)param_4[0xb] >> 0x10);
        uStack_80 = (undefined2)param_4[4];
        uStack_7e = (undefined2)((uint)param_4[4] >> 0x10);
        uStack_7c = (undefined2)param_4[5];
        uStack_7a = (undefined2)((uint)param_4[5] >> 0x10);
        uStack_78 = (undefined2)param_4[6];
        uStack_76 = (undefined2)((uint)param_4[6] >> 0x10);
        uStack_74 = (undefined2)param_4[7];
        uStack_72 = (undefined2)((uint)param_4[7] >> 0x10);
        uStack_90 = (undefined2)*param_4;
        uStack_8e = (undefined2)((uint)*param_4 >> 0x10);
        uStack_8c = (undefined2)param_4[1];
        uStack_8a = (undefined2)((uint)param_4[1] >> 0x10);
        uStack_88 = (undefined2)param_4[2];
        uStack_86 = (undefined2)((uint)param_4[2] >> 0x10);
        uStack_84 = (undefined2)param_4[3];
        uStack_82 = (undefined2)((uint)param_4[3] >> 0x10);
        bVar24 = bVar24 >> 1;
        (*pauVar3)[(longlong)param_3] = bVar24;
        pauVar3[1][(ulonglong)(param_3 + -2) & (ulonglong)pauVar33] = bVar24;
        pauVar33 = (undefined (*) [16])((longlong)param_2[3] - DAT_142d770f8);
        param_2[2] = (undefined (*) [16])((longlong)param_2[2] - (ulonglong)(bVar31 & 1));
        param_2[3] = pauVar33;
        *(short *)pauVar3[(longlong)param_3 * -5 + -5] = sVar6;
        puVar1 = (undefined4 *)(pauVar3[(longlong)param_3 * -5 + -5] + 2);
        *puVar1 = uStack_96;
        puVar1[1] = CONCAT22(uStack_90,uStack_92);
        puVar1[2] = CONCAT22(uStack_8c,uStack_8e);
        puVar1[3] = CONCAT22(uStack_88,uStack_8a);
        puVar1 = (undefined4 *)(pauVar3[(longlong)param_3 * -5 + -4] + 2);
        *puVar1 = CONCAT22(uStack_84,uStack_86);
        puVar1[1] = CONCAT22(uStack_80,uStack_82);
        puVar1[2] = CONCAT22(uStack_7c,uStack_7e);
        puVar1[3] = CONCAT22(uStack_78,uStack_7a);
        puVar1 = (undefined4 *)(pauVar3[(longlong)param_3 * -5 + -3] + 2);
        *puVar1 = CONCAT22(uStack_74,uStack_76);
        puVar1[1] = CONCAT22(uStack_70,uStack_72);
        puVar1[2] = CONCAT22(uStack_6c,uStack_6e);
        puVar1[3] = CONCAT22(uStack_68,uStack_6a);
        puVar1 = (undefined4 *)(pauVar3[(longlong)param_3 * -5 + -2] + 2);
        *puVar1 = CONCAT22(uStack_64,uStack_66);
        puVar1[1] = CONCAT22(uStack_60,uStack_62);
        puVar1[2] = CONCAT22(uStack_5c,uStack_5e);
        puVar1[3] = CONCAT22(uStack_58,uStack_5a);
        uStack_50 = (undefined4)uVar4;
        uStack_4c = (undefined4)((ulonglong)uVar4 >> 0x20);
        pauVar3 = pauVar3 + (longlong)param_3 * -5 + -1;
        *(undefined4 *)*pauVar3 = uVar7;
        *(undefined4 *)(*pauVar3 + 4) = uVar8;
        *(undefined4 *)(*pauVar3 + 8) = uStack_50;
        *(undefined4 *)(*pauVar3 + 0xc) = uStack_4c;
        *(undefined *)param_1 = 0xff;
        return param_1;
      }
      bVar22 = true;
    }
    else {
      uVar29 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(bVar31 >> 7) << 0xf;
      param_3 = (undefined (**) [16])(ulonglong)uVar29;
      if (uVar29 != 0) {
        uVar28 = 0;
        for (uVar25 = (uint)uVar29; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        param_3 = (undefined (**) [16])(uVar28 + uVar23 & (ulonglong)pauVar33);
        goto LAB_1414863db;
      }
      bVar22 = false;
    }
    uVar23 = uVar23 + lVar27 + 0x10;
    lVar27 = lVar27 + 0x10;
  } while( true );
}


/* address=141486980 name=FUN_141486980 */

undefined8 FUN_141486980(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uStack_48;
  ulonglong uStack_40;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  uVar5 = uVar1;
  uVar3 = 2;
  if (2 < uVar1) {
    uVar5 = uVar2;
    uVar3 = uVar1;
  }
  if (param_2 < uVar5) {
    FUN_142ce0300(&DAT_142fb47e8,0x20,&PTR_s_C__Users_VssAdministrator__cargo_142fb4808);
    do {
      invalidInstructionException();
    } while( true );
  }
  lVar4 = *param_1;
  if (param_2 < 3) {
    if (uVar1 < 3) {
      return 0xffffffffffffffff;
    }
    FUN_142cbd3c0(param_1,lVar4,uVar2 * 8);
    param_1[2] = uVar2;
    uStack_40 = uVar3 << 3;
    if (uVar1 >> 0x3d != 0 || 0x7ffffffffffffff8 < uStack_40) {
      uStack_48 = 0;
      FUN_142ce00c0("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_48,&DAT_142fb4220,
                    &PTR_s_C__Users_VssAdministrator__cargo_142fb2b50);
      do {
        invalidInstructionException();
      } while( true );
    }
    thunk_FUN_1406dbb00(lVar4,uStack_40,8);
  }
  else {
    if (uVar1 == param_2) {
      return 0xffffffffffffffff;
    }
    uVar2 = param_2 * 8;
    if (0x7ffffffffffffff8 < uVar2 || param_2 >> 0x3d != 0) {
      return 0;
    }
    if (uVar1 < 3) {
      FUN_140016610();
      lVar4 = thunk_FUN_1406dbaa0(uVar2,8);
      if (lVar4 == 0) {
        return 8;
      }
      FUN_142cbd3c0(lVar4,param_1,uVar1 << 3);
    }
    else {
      if (uVar1 >> 0x3d != 0 || 0x7ffffffffffffff8 < uVar3 << 3) {
        return 0;
      }
      lVar4 = thunk_FUN_1406dbb40(lVar4,uVar3 << 3,8,uVar2);
      if (lVar4 == 0) {
        return 8;
      }
    }
    *param_1 = lVar4;
    param_1[1] = uVar5;
    param_1[2] = param_2;
  }
  return 0xffffffffffffffff;
}


/* address=141486b60 name=FUN_141486b60 */

void FUN_141486b60(byte *param_1,undefined *param_2)

{
  undefined uVar1;
  byte bVar2;
  undefined uVar3;
  byte bVar4;
  byte bVar5;
  
  uVar1 = (&DAT_142fb4820)[*param_1 & 0xf];
  bVar2 = param_1[1];
  *param_2 = (&DAT_142fb4820)[*param_1 >> 4];
  uVar3 = (&DAT_142fb4820)[bVar2 >> 4];
  param_2[1] = uVar1;
  uVar1 = (&DAT_142fb4820)[bVar2 & 0xf];
  bVar2 = param_1[2];
  param_2[2] = uVar3;
  uVar3 = (&DAT_142fb4820)[bVar2 >> 4];
  param_2[3] = uVar1;
  uVar1 = (&DAT_142fb4820)[bVar2 & 0xf];
  bVar2 = param_1[3];
  param_2[4] = uVar3;
  uVar3 = (&DAT_142fb4820)[bVar2 >> 4];
  param_2[5] = uVar1;
  uVar1 = (&DAT_142fb4820)[bVar2 & 0xf];
  bVar2 = param_1[4];
  param_2[6] = uVar3;
  uVar3 = (&DAT_142fb4820)[bVar2 >> 4];
  param_2[7] = uVar1;
  uVar1 = (&DAT_142fb4820)[bVar2 & 0xf];
  bVar2 = param_1[5];
  param_2[8] = 0x2d;
  param_2[9] = uVar3;
  uVar3 = (&DAT_142fb4820)[bVar2 >> 4];
  param_2[10] = uVar1;
  uVar1 = (&DAT_142fb4820)[bVar2 & 0xf];
  bVar2 = param_1[6];
  param_2[0xb] = uVar3;
  uVar3 = (&DAT_142fb4820)[bVar2 >> 4];
  param_2[0xc] = uVar1;
  uVar1 = (&DAT_142fb4820)[bVar2 & 0xf];
  bVar2 = param_1[7];
  param_2[0xd] = 0x2d;
  param_2[0xe] = uVar3;
  uVar3 = (&DAT_142fb4820)[bVar2 >> 4];
  param_2[0xf] = uVar1;
  uVar1 = (&DAT_142fb4820)[bVar2 & 0xf];
  bVar2 = param_1[8];
  param_2[0x10] = uVar3;
  uVar3 = (&DAT_142fb4820)[bVar2 >> 4];
  param_2[0x11] = uVar1;
  uVar1 = (&DAT_142fb4820)[bVar2 & 0xf];
  bVar2 = param_1[0xe];
  param_2[0x12] = 0x2d;
  param_2[0x13] = uVar3;
  uVar3 = (&DAT_142fb4820)[bVar2 & 0xf];
  bVar4 = param_1[9];
  param_2[0x14] = uVar1;
  param_2[0x15] = (&DAT_142fb4820)[bVar4 >> 4];
  bVar5 = param_1[10];
  param_2[0x16] = (&DAT_142fb4820)[bVar4 & 0xf];
  uVar1 = (&DAT_142fb4820)[bVar5 >> 4];
  param_2[0x17] = 0x2d;
  param_2[0x18] = uVar1;
  bVar4 = param_1[0xb];
  param_2[0x19] = (&DAT_142fb4820)[bVar5 & 0xf];
  param_2[0x1a] = (&DAT_142fb4820)[bVar4 >> 4];
  bVar5 = param_1[0xc];
  param_2[0x1b] = (&DAT_142fb4820)[bVar4 & 0xf];
  param_2[0x1c] = (&DAT_142fb4820)[bVar5 >> 4];
  bVar4 = param_1[0xd];
  param_2[0x1d] = (&DAT_142fb4820)[bVar5 & 0xf];
  param_2[0x1e] = (&DAT_142fb4820)[bVar4 >> 4];
  param_2[0x1f] = (&DAT_142fb4820)[bVar4 & 0xf];
  bVar4 = param_1[0xf];
  param_2[0x20] = (&DAT_142fb4820)[bVar2 >> 4];
  uVar1 = (&DAT_142fb4820)[bVar4 >> 4];
  param_2[0x21] = uVar3;
  uVar3 = (&DAT_142fb4820)[bVar4 & 0xf];
  param_2[0x22] = uVar1;
  param_2[0x23] = uVar3;
  return;
}


/* address=141486da0 name=FUN_141486da0 */

undefined8 FUN_141486da0(byte param_1,byte *param_2,ulonglong param_3)

{
  char cVar1;
  
  if (param_1 < 100) {
    if (param_1 < 10) {
      if (param_3 != 0) {
        *param_2 = param_1 | 0x30;
        return 1;
      }
      FUN_142ce0143(0,0,&DAT_142fb4830);
      do {
        invalidInstructionException();
      } while( true );
    }
    if (param_3 != 0) {
      *param_2 = (&DAT_142fb4848)[(ulonglong)param_1 * 2];
      if (param_3 != 1) {
        param_2[1] = (&DAT_142fb4849)[(ulonglong)param_1 * 2];
        return 2;
      }
      FUN_142ce0143(1,1,&DAT_142fb4928);
      do {
        invalidInstructionException();
      } while( true );
    }
    FUN_142ce0143(0,0,&DAT_142fb4910);
    do {
      invalidInstructionException();
    } while( true );
  }
  if (param_3 == 0) {
    FUN_142ce0143(0,0,&DAT_142fb4940);
    do {
      invalidInstructionException();
    } while( true );
  }
  cVar1 = (char)((uint)param_1 * 0x29 >> 0xc);
  *param_2 = cVar1 + 0x30;
  if (param_3 != 1) {
    param_1 = param_1 + cVar1 * -100;
    param_2[1] = (&DAT_142fb4848)[(uint)param_1 + (uint)param_1];
    if (2 < param_3) {
      param_2[2] = (&DAT_142fb4849)[(ulonglong)param_1 * 2];
      return 3;
    }
    FUN_142ce0143(2,2,&DAT_142fb4970);
    do {
      invalidInstructionException();
    } while( true );
  }
  FUN_142ce0143(1,1,&DAT_142fb4958);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=141486ee0 name=FUN_141486ee0 */

int * FUN_141486ee0(int *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint uVar3;
  
  FUN_14198c230(&iStack_50);
  if ((iStack_50 != 2) || (FUN_14198be60(&iStack_50), uVar1 = uStack_4c, iStack_50 != 2)) {
    param_1[10] = iStack_28;
    param_1[0xb] = iStack_24;
    param_1[0xc] = iStack_20;
    param_1[0xd] = iStack_1c;
    param_1[6] = iStack_38;
    param_1[7] = iStack_34;
    param_1[8] = iStack_30;
    param_1[9] = iStack_2c;
    param_1[2] = iStack_48;
    param_1[3] = iStack_44;
    param_1[4] = iStack_40;
    param_1[5] = iStack_3c;
    *param_1 = iStack_50;
    param_1[1] = uStack_4c;
    return param_1;
  }
  if (*(char *)(param_2 + 0x40) == -1) {
    uVar3 = 0;
  }
  else {
    uStack_4c = *(uint *)(param_2 + 0x38);
    iStack_50 = 2;
    FUN_14198be60(&iStack_50);
    uVar3 = uStack_4c;
    if (iStack_50 != 2) {
      param_1[10] = iStack_28;
      param_1[0xb] = iStack_24;
      param_1[0xc] = iStack_20;
      param_1[0xd] = iStack_1c;
      param_1[6] = iStack_38;
      param_1[7] = iStack_34;
      param_1[8] = iStack_30;
      param_1[9] = iStack_2c;
      param_1[2] = iStack_48;
      param_1[3] = iStack_44;
      param_1[4] = iStack_40;
      param_1[5] = iStack_3c;
      *param_1 = iStack_50;
      param_1[1] = uStack_4c;
      return param_1;
    }
  }
  uVar2 = uVar3 + uVar1;
  if ((!CARRY4(uVar3,uVar1)) && (uVar2 < 0x10000000)) {
    param_1[1] = uVar2;
    *param_1 = 2;
    FUN_14198be60(param_1);
    return param_1;
  }
  *param_1 = 0;
  *(undefined *)(param_1 + 2) = 0xc;
  return param_1;
}


/* address=141487190 name=FUN_141487190 */

longlong FUN_141487190(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 extraout_var;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (ulonglong)*param_1;
  lVar3 = 0;
  lVar4 = uVar5 - 5;
  if (uVar5 < 6) {
    lVar4 = lVar3;
  }
  bVar1 = *param_2;
  lVar6 = (ulonglong)bVar1 - 5;
  if ((ulonglong)bVar1 < 6) {
    lVar6 = lVar3;
  }
  if (lVar4 == lVar6) {
    lVar3 = 1;
    if (lVar4 == 0) {
      if (bVar1 < 6) {
        if (*param_1 != bVar1) {
          return 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000141487209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*(code *)(&DAT_142fb77c8 + *(int *)(&DAT_142fb77c8 + uVar5 * 4)))();
        return lVar4;
      }
    }
    else if ((int)lVar4 == 4) {
      if (*(size_t *)(param_1 + 0x10) != *(size_t *)(param_2 + 0x10)) {
        return 0;
      }
      iVar2 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),*(size_t *)(param_1 + 0x10));
      lVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
    }
  }
  return lVar3;
}


/* address=141487260 name=FUN_141487260 */

undefined8 FUN_141487260(longlong **param_1,longlong **param_2)

{
  ushort *puVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  
  puVar10 = (ulonglong *)**param_1;
  uVar5 = *puVar10;
  if ((uVar5 != 0) && (uVar4 = puVar10[2], uVar4 != 0)) {
    plVar3 = *param_2;
    uVar6 = 0;
    uVar7 = puVar10[1];
    do {
      if (uVar6 == 0) {
        if (uVar7 != 0) {
          uVar6 = uVar7;
          if ((uVar7 & 7) != 0) {
            uVar6 = 0;
            do {
              uVar5 = *(ulonglong *)(uVar5 + 0x118);
              uVar6 = uVar6 + 1;
            } while ((uVar7 & 7) != uVar6);
            uVar6 = uVar7 - uVar6;
          }
          if (7 < uVar7) {
            do {
              uVar5 = *(ulonglong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(uVar5 + 0x118) + 0x118) + 0x118) +
                               0x118) + 0x118) + 0x118) + 0x118) + 0x118);
              uVar6 = uVar6 - 8;
            } while (uVar6 != 0);
          }
        }
        uVar7 = 0;
        uVar9 = 0;
        uVar6 = uVar5;
        uVar8 = uVar5;
        if (*(short *)(uVar5 + 0x112) == 0) goto LAB_1414873a0;
      }
      else {
        uVar8 = uVar6;
        uVar9 = uVar5;
        if (*(ushort *)(uVar6 + 0x112) <= uVar7) {
LAB_1414873a0:
          do {
            uVar8 = *(ulonglong *)(uVar6 + 0xb0);
            if (uVar8 == 0) {
              FUN_142ce00a0(&PTR_s__rustc_48a229ceaefd4985c50990b14_142f92c28);
              do {
                invalidInstructionException();
              } while( true );
            }
            uVar9 = uVar9 + 1;
            puVar1 = (ushort *)(uVar6 + 0x110);
            uVar7 = (ulonglong)*puVar1;
            uVar6 = uVar8;
          } while (*(ushort *)(uVar8 + 0x112) <= *puVar1);
        }
      }
      uVar6 = uVar8;
      if (uVar9 == 0) {
        uVar9 = uVar7 + 1;
      }
      else {
        puVar10 = (ulonglong *)(uVar8 + uVar7 * 8 + 0x120);
        uVar5 = uVar9;
        if ((uVar9 & 7) != 0) {
          uVar5 = 0;
          do {
            uVar6 = *puVar10;
            puVar10 = (ulonglong *)(uVar6 + 0x118);
            uVar5 = uVar5 + 1;
          } while ((uVar9 & 7) != uVar5);
          uVar5 = uVar9 - uVar5;
        }
        if (7 < uVar9) {
          do {
            uVar6 = *(ulonglong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(*puVar10 + 0x118) + 0x118) + 0x118) +
                           0x118) + 0x118) + 0x118) + 0x118);
            puVar10 = (ulonglong *)(uVar6 + 0x118);
            uVar5 = uVar5 - 8;
          } while (uVar5 != 0);
        }
        uVar9 = 0;
      }
      uVar2 = *(uint *)(uVar8 + 0xc + uVar7 * 0x10);
      if ((uVar2 == 0xffffffff) || (*(uint *)((longlong)plVar3 + 0xc) == 0xffffffff)) {
        if ((*(uint *)((longlong)plVar3 + 0xc) & uVar2) == 0xffffffff) {
          return 0;
        }
      }
      else {
        plVar11 = (longlong *)(uVar8 + uVar7 * 0x10);
        if ((*plVar11 == *plVar3) && (*(int *)(plVar11 + 1) == *(int *)(plVar3 + 1))) {
          return 0;
        }
      }
      uVar5 = 0;
      uVar4 = uVar4 - 1;
      uVar7 = uVar9;
    } while (uVar4 != 0);
  }
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
}


/* address=141489a40 name=FUN_141489a40 */

void FUN_141489a40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plStack_28;
  char cStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  do {
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      return;
    }
    lVar5 = *(longlong *)(lVar2 + 0x2e8) + -1;
    lVar3 = *(longlong *)(lVar2 + 0x2d8);
    lVar4 = *(longlong *)(lVar2 + 0x2e0);
    *(longlong *)(lVar2 + 0x2d8) = *(longlong *)(*param_1 + 0x10) + 0x10;
    *(undefined8 *)(lVar2 + 0x2e0) = 0;
    if (lVar3 == 0) {
      if (lVar4 != 0) goto LAB_141489ad5;
      param_1[1] = 0;
    }
    else {
      *(longlong *)(lVar3 + 0x2e0) = lVar4;
      if (lVar4 == 0) {
        param_1[1] = lVar3;
        *(longlong *)(lVar3 + 0x2e8) = lVar5;
      }
      else {
LAB_141489ad5:
        *(longlong *)(lVar4 + 0x2d8) = lVar3;
        *(longlong *)(lVar2 + 0x2e8) = lVar5;
      }
    }
    plVar1 = (longlong *)(lVar2 + -0x10);
    LOCK();
    cStack_19 = *(char *)(lVar2 + 0x2f8);
    *(char *)(lVar2 + 0x2f8) = '\x01';
    UNLOCK();
    plStack_28 = plVar1;
    FUN_1414651a0();
    *(undefined8 *)(lVar2 + 8) = 0;
    if (cStack_19 == '\0') {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_140bf8890(&plStack_28);
      }
    }
  } while( true );
}


/* address=141489e00 name=FUN_141489e00 */

bool FUN_141489e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  void *pvStack_278;
  size_t sStack_270;
  byte bStack_268;
  undefined4 uStack_267;
  undefined4 uStack_263;
  undefined4 uStack_25f;
  undefined4 uStack_25b;
  undefined4 uStack_257;
  undefined4 uStack_253;
  undefined4 uStack_24f;
  undefined4 uStack_24b;
  char cStack_240;
  char cStack_23f;
  undefined uStack_23e;
  void *pvStack_238;
  size_t sStack_230;
  byte bStack_228;
  undefined4 uStack_227;
  undefined4 uStack_223;
  undefined4 uStack_21f;
  undefined4 uStack_21b;
  undefined4 uStack_217;
  undefined4 uStack_213;
  undefined4 uStack_20f;
  undefined4 uStack_20b;
  undefined2 uStack_200;
  undefined uStack_1fe;
  void *pvStack_1f8;
  size_t sStack_1f0;
  byte bStack_1e8;
  undefined4 uStack_1e7;
  undefined4 uStack_1e3;
  undefined4 uStack_1df;
  undefined4 uStack_1db;
  undefined4 uStack_1d7;
  undefined4 uStack_1d3;
  undefined4 uStack_1cf;
  undefined4 uStack_1cb;
  char cStack_1c0;
  char cStack_1bf;
  undefined uStack_1be;
  void *pvStack_1b8;
  size_t sStack_1b0;
  byte bStack_1a8;
  undefined4 uStack_1a7;
  undefined4 uStack_1a3;
  undefined4 uStack_19f;
  undefined4 uStack_19b;
  undefined4 uStack_197;
  undefined4 uStack_193;
  undefined4 uStack_18f;
  undefined4 uStack_18b;
  undefined2 uStack_180;
  undefined uStack_17e;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
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
  undefined8 uStack_40;
  
  FUN_1406dd9f0(&pvStack_278,param_1,param_2);
  FUN_1406dd9f0(&pvStack_238,param_3,param_4);
  if ((((sStack_270 == sStack_230) && (cStack_240 == (char)uStack_200)) && (cStack_23f == '\x02'))
     && (((uStack_200._1_1_ == '\x02' && (bStack_228 < 3 == bStack_268 < 3)) &&
         (iVar2 = memcmp(pvStack_278,pvStack_238,sStack_270), iVar2 == 0)))) {
    return true;
  }
  if (bStack_268 != 0xff) {
    uStack_168 = uStack_257;
    uStack_164 = uStack_253;
    uStack_160 = uStack_24f;
    uStack_15c = uStack_24b;
    uStack_178 = uStack_267;
    uStack_174 = uStack_263;
    uStack_170 = uStack_25f;
    uStack_16c = uStack_25b;
  }
  if (bStack_228 != 0xff) {
    uStack_138 = uStack_217;
    uStack_134 = uStack_213;
    uStack_130 = uStack_20f;
    uStack_12c = uStack_20b;
    uStack_148 = uStack_227;
    uStack_144 = uStack_223;
    uStack_140 = uStack_21f;
    uStack_13c = uStack_21b;
  }
  pvStack_1f8 = pvStack_278;
  sStack_1f0 = sStack_270;
  bStack_1e8 = bStack_268;
  uStack_1e7 = uStack_178;
  uStack_1e3 = uStack_174;
  uStack_1df = uStack_170;
  uStack_1db = uStack_16c;
  uStack_1d7 = uStack_168;
  uStack_1d3 = uStack_164;
  uStack_1cf = uStack_160;
  uStack_1cb = uStack_15c;
  cStack_1c0 = cStack_240;
  cStack_1bf = cStack_23f;
  uStack_1be = uStack_23e;
  pvStack_1b8 = pvStack_238;
  sStack_1b0 = sStack_230;
  bStack_1a8 = bStack_228;
  uStack_1a7 = uStack_148;
  uStack_1a3 = uStack_144;
  uStack_19f = uStack_140;
  uStack_19b = uStack_13c;
  uStack_197 = uStack_138;
  uStack_193 = uStack_134;
  uStack_18f = uStack_130;
  uStack_18b = uStack_12c;
  uStack_180 = uStack_200;
  uStack_17e = uStack_1fe;
  FUN_1406faa80(&uStack_118,&pvStack_1f8);
  if ((char)uStack_118 != -1) {
    do {
      FUN_1406faa80(&uStack_e0,&pvStack_1b8);
      if ((char)uStack_e0 == -1) {
        return false;
      }
      uStack_78 = uStack_e8;
      uStack_88 = uStack_f8;
      uStack_84 = uStack_f4;
      uStack_80 = uStack_f0;
      uStack_7c = uStack_ec;
      uStack_98 = uStack_108;
      uStack_94 = uStack_104;
      uStack_90 = uStack_100;
      uStack_8c = uStack_fc;
      uStack_a8 = uStack_118;
      uStack_a4 = uStack_114;
      uStack_a0 = uStack_110;
      uStack_9c = uStack_10c;
      uStack_40 = uStack_b0;
      uStack_50 = uStack_c0;
      uStack_4c = uStack_bc;
      uStack_48 = uStack_b8;
      uStack_44 = uStack_b4;
      uStack_60 = uStack_d0;
      uStack_5c = uStack_cc;
      uStack_58 = uStack_c8;
      uStack_54 = uStack_c4;
      uStack_70 = uStack_e0;
      uStack_6c = uStack_dc;
      uStack_68 = uStack_d8;
      uStack_64 = uStack_d4;
      cVar1 = FUN_141487190(&uStack_a8,&uStack_70);
      if (cVar1 == '\0') {
        return false;
      }
      FUN_1406faa80(&uStack_118,&pvStack_1f8);
    } while ((char)uStack_118 != -1);
  }
  FUN_1406faa80(&uStack_a8,&pvStack_1b8);
  return (char)uStack_a8 == -1;
}


/* address=14148a1b0 name=FUN_14148a1b0 */

longlong FUN_14148a1b0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined auStack_610 [272];
  undefined auStack_500 [168];
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulonglong uStack_298;
  longlong lStack_290;
  ulonglong uStack_288;
  ulonglong uStack_280;
  longlong lStack_278;
  ulonglong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  longlong *plStack_250;
  longlong *plStack_248;
  undefined uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
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
  longlong *plStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  undefined uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plStack_98 = *(longlong **)(param_1 + 0x50);
  LOCK();
  lVar17 = *plStack_98;
  *plStack_98 = *plStack_98 + 1;
  UNLOCK();
  if (*plStack_98 == 0 || SCARRY8(lVar17,1) != *plStack_98 < 0) goto LAB_14148aa6e;
  lVar17 = plStack_98[5];
  uVar18 = *(ulonglong *)(lVar17 + 0x270);
  lVar13 = uVar18 * 0x18;
  uStack_80 = param_2;
  plStack_78 = plStack_98;
  uStack_60 = lVar13;
  if (0x555555555555555 < uVar18) {
    uVar21 = 0;
LAB_14148a22c:
    uStack_49 = 1;
    FUN_142cdfdab(uVar21,uStack_60);
    goto LAB_14148aa6e;
  }
  uVar22 = *(undefined8 *)(lVar17 + 0x328);
  uVar5 = *(undefined8 *)(lVar17 + 0x330);
  uStack_58 = uVar18;
  if (lVar13 == 0) {
    lVar13 = 8;
  }
  else {
    puVar20 = *(undefined4 **)(lVar17 + 0x268);
    FUN_140016610();
    uVar21 = 8;
    lVar13 = thunk_FUN_1406dbaa0(lVar13,8);
    if (lVar13 == 0) goto LAB_14148a22c;
    if (uStack_58 != 0) {
      lVar14 = 0;
      uVar18 = uStack_58;
      do {
        if (uStack_60 == lVar14) break;
        uVar4 = puVar20[4];
        uVar3 = *(undefined2 *)(puVar20 + 5);
        uVar9 = *puVar20;
        uVar10 = puVar20[1];
        uVar11 = puVar20[2];
        uVar12 = puVar20[3];
        puVar20 = puVar20 + 6;
        puVar1 = (undefined4 *)(lVar13 + lVar14);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        *(undefined2 *)(lVar13 + 0x14 + lVar14) = uVar3;
        *(undefined4 *)(lVar13 + 0x10 + lVar14) = uVar4;
        lVar14 = lVar14 + 0x18;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  uVar19 = *(ulonglong *)(lVar17 + 600);
  uVar18 = uVar19 * 8;
  if (0x7ffffffffffffff8 < uVar18 || uVar19 >> 0x3d != 0) {
    uVar21 = 0;
LAB_14148a307:
    lStack_70 = lVar13;
    FUN_142cdfdab(uVar21,uVar18);
    goto LAB_14148aa6e;
  }
  uVar6 = *(undefined8 *)(lVar17 + 0x250);
  uStack_90 = uVar5;
  lStack_88 = param_1;
  lStack_70 = uVar22;
  if (uVar18 == 0) {
    lVar14 = 8;
    uVar15 = 0;
  }
  else {
    FUN_140016610();
    uVar21 = 8;
    lVar14 = thunk_FUN_1406dbaa0(uVar18,8);
    uVar15 = uVar19;
    if (lVar14 == 0) goto LAB_14148a307;
  }
  if (uVar19 != 0) {
    FUN_142cbd3c0(lVar14,uVar6,uVar18);
  }
  uStack_a0 = *(undefined8 *)(lVar17 + 0x278);
  uStack_b8 = uStack_58;
  uStack_a8 = uStack_58;
  uVar18 = *(ulonglong *)(lVar17 + 0x2a8);
  uVar8 = uVar18 * 0x18;
  uStack_d0 = uVar15;
  uStack_c8 = lVar14;
  uStack_c0 = uVar19;
  uStack_b0 = lVar13;
  if (0x555555555555555 < uVar18) {
    uVar21 = 0;
LAB_14148a3e0:
    FUN_142cdfdab(uVar21,uVar8);
    goto LAB_14148aa6e;
  }
  if (uVar8 == 0) {
    lVar13 = 8;
  }
  else {
    puVar20 = *(undefined4 **)(lVar17 + 0x2a0);
    FUN_140016610();
    uVar21 = 8;
    lVar13 = thunk_FUN_1406dbaa0(uVar8,8);
    if (lVar13 == 0) goto LAB_14148a3e0;
    if (uVar18 != 0) {
      uVar15 = 0;
      uVar19 = uVar18;
      do {
        if (uVar8 == uVar15) break;
        uVar4 = puVar20[4];
        uVar3 = *(undefined2 *)(puVar20 + 5);
        uVar9 = *puVar20;
        uVar10 = puVar20[1];
        uVar11 = puVar20[2];
        uVar12 = puVar20[3];
        puVar20 = puVar20 + 6;
        puVar1 = (undefined4 *)(lVar13 + uVar15);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        *(undefined2 *)(lVar13 + 0x14 + uVar15) = uVar3;
        *(undefined4 *)(lVar13 + 0x10 + uVar15) = uVar4;
        uVar15 = uVar15 + 0x18;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  uVar15 = *(ulonglong *)(lVar17 + 0x290);
  uVar19 = uVar15 * 8;
  uStack_60 = uVar18;
  if (0x7ffffffffffffff8 < uVar19 || uVar15 >> 0x3d != 0) {
    uVar21 = 0;
    uStack_58 = uVar8;
LAB_14148a4cc:
    lStack_70 = lVar13;
    FUN_142cdfdab(uVar21,uVar19);
    goto LAB_14148aa6e;
  }
  uVar22 = *(undefined8 *)(lVar17 + 0x288);
  if (uVar19 == 0) {
    lVar14 = 8;
    uVar18 = 0;
  }
  else {
    uStack_58 = uVar8;
    FUN_140016610();
    uVar21 = 8;
    lVar14 = thunk_FUN_1406dbaa0(uVar19,8);
    uVar18 = uVar15;
    if (lVar14 == 0) goto LAB_14148a4cc;
  }
  if (uVar15 != 0) {
    FUN_142cbd3c0(lVar14,uVar22,uVar19);
  }
  uStack_d8 = *(undefined8 *)(lVar17 + 0x2b0);
  uStack_f0 = uStack_60;
  uStack_e0 = uStack_60;
  uVar19 = *(ulonglong *)(lVar17 + 0x2e0);
  lVar16 = uVar19 * 0x28;
  uStack_108 = uVar18;
  uStack_100 = lVar14;
  uStack_f8 = uVar15;
  uStack_e8 = lVar13;
  if (0x333333333333333 < uVar19) {
    uVar21 = 0;
LAB_14148a597:
    FUN_142cdfdab(uVar21,lVar16);
    goto LAB_14148aa6e;
  }
  if (lVar16 == 0) {
    lVar13 = 8;
  }
  else {
    puVar20 = *(undefined4 **)(lVar17 + 0x2d8);
    FUN_140016610();
    uVar21 = 8;
    lVar13 = thunk_FUN_1406dbaa0(lVar16,8);
    if (lVar13 == 0) goto LAB_14148a597;
    if (uVar19 != 0) {
      lVar14 = 0;
      uVar18 = uVar19;
      do {
        if (lVar16 == lVar14) break;
        uVar2 = *(undefined *)((longlong)puVar20 + 0x21);
        uVar4 = puVar20[1];
        uVar9 = puVar20[2];
        uVar10 = puVar20[3];
        puVar1 = (undefined4 *)(lVar13 + lVar14);
        *puVar1 = *puVar20;
        puVar1[1] = uVar4;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        uVar4 = puVar20[5];
        uVar9 = puVar20[6];
        uVar10 = puVar20[7];
        puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar14);
        *puVar1 = puVar20[4];
        puVar1[1] = uVar4;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        puVar1 = puVar20 + 8;
        puVar20 = puVar20 + 10;
        *(undefined *)(lVar13 + 0x20 + lVar14) = *(undefined *)puVar1;
        *(undefined *)(lVar13 + 0x21 + lVar14) = uVar2;
        lVar14 = lVar14 + 0x28;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  uVar15 = *(ulonglong *)(lVar17 + 0x2c8);
  uVar18 = uVar15 * 8;
  uStack_60 = uVar19;
  uStack_58 = lVar13;
  if (0x7ffffffffffffff8 < uVar18 || uVar15 >> 0x3d != 0) {
    uVar21 = 0;
    lStack_68 = lVar16;
LAB_14148a688:
    FUN_142cdfdab(uVar21,uVar18);
    goto LAB_14148aa6e;
  }
  uVar22 = *(undefined8 *)(lVar17 + 0x2c0);
  if (uVar18 == 0) {
    lVar13 = 8;
    uVar19 = 0;
  }
  else {
    lStack_68 = lVar16;
    FUN_140016610();
    uVar21 = 8;
    lVar13 = thunk_FUN_1406dbaa0(uVar18,8);
    uVar19 = uVar15;
    if (lVar13 == 0) goto LAB_14148a688;
  }
  if (uVar15 != 0) {
    FUN_142cbd3c0(lVar13,uVar22,uVar18);
  }
  uStack_428 = *(undefined8 *)(lVar17 + 0x2e8);
  uStack_440 = uStack_60;
  uStack_438 = uStack_58;
  uStack_430 = uStack_60;
  uVar18 = *(ulonglong *)(lVar17 + 0x318);
  lVar14 = uVar18 * 0x28;
  uStack_458 = uVar19;
  uStack_450 = lVar13;
  uStack_448 = uVar15;
  if (0x333333333333333 < uVar18) {
    uVar21 = 0;
LAB_14148a750:
    FUN_142cdfdab(uVar21,lVar14);
    goto LAB_14148aa6e;
  }
  uStack_60 = uVar18;
  if (lVar14 == 0) {
    lVar13 = 8;
  }
  else {
    puVar20 = *(undefined4 **)(lVar17 + 0x310);
    FUN_140016610();
    uVar21 = 8;
    lVar13 = thunk_FUN_1406dbaa0(lVar14,8);
    if (lVar13 == 0) goto LAB_14148a750;
    if (uVar18 != 0) {
      lVar16 = 0;
      do {
        if (lVar14 == lVar16) break;
        uVar2 = *(undefined *)((longlong)puVar20 + 0x21);
        uVar4 = puVar20[1];
        uVar9 = puVar20[2];
        uVar10 = puVar20[3];
        puVar1 = (undefined4 *)(lVar13 + lVar16);
        *puVar1 = *puVar20;
        puVar1[1] = uVar4;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        uVar4 = puVar20[5];
        uVar9 = puVar20[6];
        uVar10 = puVar20[7];
        puVar1 = (undefined4 *)(lVar13 + 0x10 + lVar16);
        *puVar1 = puVar20[4];
        puVar1[1] = uVar4;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        puVar1 = puVar20 + 8;
        puVar20 = puVar20 + 10;
        *(undefined *)(lVar13 + 0x20 + lVar16) = *(undefined *)puVar1;
        *(undefined *)(lVar13 + 0x21 + lVar16) = uVar2;
        lVar16 = lVar16 + 0x28;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  uVar19 = *(ulonglong *)(lVar17 + 0x300);
  uVar18 = uVar19 * 8;
  uStack_58 = lVar13;
  if (uVar18 < 0x7ffffffffffffff9 && uVar19 >> 0x3d == 0) {
    uVar21 = *(undefined8 *)(lVar17 + 0x2f8);
    if (uVar18 == 0) {
      lVar13 = 8;
      uVar15 = 0;
    }
    else {
      lStack_68 = lVar14;
      FUN_140016610();
      uVar22 = 8;
      lVar13 = thunk_FUN_1406dbaa0(uVar18,8);
      uVar15 = uVar19;
      if (lVar13 == 0) goto LAB_14148a81c;
    }
    if (uVar19 != 0) {
      FUN_142cbd3c0(lVar13,uVar21,uVar18);
    }
    uVar21 = *(undefined8 *)(lVar17 + 800);
    uStack_188 = uStack_a0;
    uStack_198 = (undefined4)uStack_b0;
    uStack_194 = uStack_b0._4_4_;
    uStack_190 = (undefined4)uStack_a8;
    uStack_18c = uStack_a8._4_4_;
    uStack_1a8 = (undefined4)uStack_c0;
    uStack_1a4 = uStack_c0._4_4_;
    uStack_1a0 = (undefined4)uStack_b8;
    uStack_19c = uStack_b8._4_4_;
    uStack_1b8 = (undefined4)uStack_d0;
    uStack_1b4 = uStack_d0._4_4_;
    uStack_1b0 = (undefined4)uStack_c8;
    uStack_1ac = uStack_c8._4_4_;
    uStack_180 = (undefined4)uStack_108;
    uStack_17c = uStack_108._4_4_;
    uStack_178 = (undefined4)uStack_100;
    uStack_174 = uStack_100._4_4_;
    uStack_170 = (undefined4)uStack_f8;
    uStack_16c = uStack_f8._4_4_;
    uStack_168 = (undefined4)uStack_f0;
    uStack_164 = uStack_f0._4_4_;
    uStack_160 = (undefined4)uStack_e8;
    uStack_15c = uStack_e8._4_4_;
    uStack_158 = (undefined4)uStack_e0;
    uStack_154 = uStack_e0._4_4_;
    uStack_150 = uStack_d8;
    uStack_148 = (undefined4)uStack_458;
    uStack_144 = uStack_458._4_4_;
    uStack_140 = (undefined4)uStack_450;
    uStack_13c = uStack_450._4_4_;
    uStack_138 = (undefined4)uStack_448;
    uStack_134 = uStack_448._4_4_;
    uStack_130 = (undefined4)uStack_440;
    uStack_12c = uStack_440._4_4_;
    uStack_128 = (undefined4)uStack_438;
    uStack_124 = uStack_438._4_4_;
    uStack_120 = (undefined4)uStack_430;
    uStack_11c = uStack_430._4_4_;
    uStack_118 = uStack_428;
    plVar7 = *(longlong **)(lStack_88 + 0x58);
    LOCK();
    lVar17 = *plVar7;
    *plVar7 = *plVar7 + 1;
    UNLOCK();
    if (*plVar7 != 0 && SCARRY8(lVar17,1) == *plVar7 < 0) {
      FUN_142cbd3c0(auStack_610,uStack_80,0x110);
      FUN_142cbd3c0(auStack_500,&uStack_1b8,0xa8);
      uStack_458 = 1;
      FUN_142cbd3c0(&uStack_450,auStack_610,0x1b8);
      uStack_280 = uStack_60;
      lStack_278 = uStack_58;
      uStack_270 = uStack_60;
      uStack_260 = lStack_70;
      uStack_258 = uStack_90;
      plStack_248 = plStack_78;
      uStack_1c0 = 0;
      uStack_298 = uVar15;
      lStack_290 = lVar13;
      uStack_288 = uVar19;
      uStack_268 = uVar21;
      plStack_250 = plVar7;
      FUN_140016610();
      lVar17 = thunk_FUN_1406dbaa0(0x2a0,8);
      if (lVar17 != 0) {
        FUN_142cbd3c0(lVar17,&uStack_458,0x2a0);
        return lVar17;
      }
      FUN_142cdfd91(8,0x2a0);
    }
  }
  else {
    uVar22 = 0;
    lStack_68 = lVar14;
LAB_14148a81c:
    FUN_142cdfdab(uVar22,uVar18);
  }
LAB_14148aa6e:
  do {
    invalidInstructionException();
  } while( true );
}


/* address=14148c150 name=FUN_14148c150 */

ulonglong FUN_14148c150(longlong *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  size_t _Size;
  void *_Buf2;
  longlong lVar5;
  size_t _Size_00;
  void *_Buf2_00;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  void *_Buf2_01;
  void *_Buf2_02;
  longlong lVar12;
  size_t _Size_01;
  void *_Buf2_03;
  longlong lVar13;
  size_t _Size_02;
  void *_Buf2_04;
  size_t _Size_03;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  size_t _Size_04;
  void *_Buf2_05;
  size_t _Size_05;
  void *_Buf2_06;
  longlong lVar19;
  longlong lVar20;
  char cVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong unaff_RBP;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  
  if (param_3 != 0) {
    plVar26 = param_2 + param_3 * 0x23;
    lVar4 = param_1[3];
    _Size = param_1[5];
    _Buf2 = (void *)param_1[4];
    lVar5 = param_1[6];
    _Size_00 = param_1[8];
    _Buf2_00 = (void *)param_1[7];
    uVar6 = param_1[0x22];
    uVar7 = param_1[0x21];
    iVar2 = *(int *)((longlong)param_1 + 0x104);
    lVar8 = param_1[0x1f];
    uVar25 = param_1[9] ^ 0x8000000000000000;
    if (-1 < param_1[9]) {
      uVar25 = 8;
    }
    cVar1 = *(char *)(param_1 + 0x1e);
    iVar3 = *(int *)(param_1 + 0x20);
    lVar9 = *param_1;
    lVar10 = param_1[1];
    lVar11 = param_1[2];
    _Buf2_01 = (void *)param_1[0x11];
    _Buf2_02 = (void *)param_1[0x10];
    lVar12 = param_1[0x18];
    _Size_01 = param_1[0x1a];
    _Buf2_03 = (void *)param_1[0x19];
    lVar13 = param_1[0x1b];
    _Size_02 = param_1[0x1d];
    _Buf2_04 = (void *)param_1[0x1c];
    _Size_03 = param_1[0x12];
    lVar14 = param_1[0x14];
    lVar15 = param_1[0x13];
    uVar16 = param_1[0x15];
    lVar17 = param_1[0x17];
    lVar18 = param_1[0x16];
    _Size_04 = param_1[0xc];
    _Buf2_05 = (void *)param_1[0xb];
    _Size_05 = param_1[0xf];
    _Buf2_06 = (void *)param_1[0xe];
    do {
      if (param_2[3] == -2) {
        if (lVar4 == -2) {
LAB_14148c361:
          if (param_2[6] == -2) {
            if (lVar5 == -2) {
LAB_14148c372:
              if ((param_2[0x22] ^ uVar6 | param_2[0x21] ^ uVar7) == 0) {
                if (*(int *)((longlong)param_2 + 0x104) == -1) {
                  if (iVar2 == -1) goto LAB_14148c3c6;
                }
                else if (((iVar2 != -1) && (param_2[0x1f] == lVar8)) &&
                        (*(int *)(param_2 + 0x20) == iVar3)) {
LAB_14148c3c6:
                  if (*param_2 == -1) {
                    if (lVar9 == -1) goto LAB_14148c509;
                  }
                  else if ((lVar9 != -1) && (param_2[2] == lVar11)) {
                    if (lVar11 != 0) {
                      unaff_RBP = param_2[1];
                      lVar24 = 0x10;
                      lVar27 = lVar11;
                      do {
                        lVar19 = *(longlong *)((unaff_RBP - 0x10) + lVar24);
                        lVar20 = *(longlong *)(lVar10 + -0x10 + lVar24);
                        if ((lVar19 == -2) || (lVar20 == -2)) {
                          if ((lVar19 != -2) || (lVar20 != -2)) goto LAB_14148c340;
                        }
                        else if ((*(size_t *)(unaff_RBP + lVar24) != *(size_t *)(lVar10 + lVar24))
                                || (iVar22 = memcmp(*(void **)((unaff_RBP - 8) + lVar24),
                                                    *(void **)(lVar10 + -8 + lVar24),
                                                    *(size_t *)(unaff_RBP + lVar24)), iVar22 != 0))
                        goto LAB_14148c340;
                        lVar24 = lVar24 + 0x18;
                        lVar27 = lVar27 + -1;
                      } while (lVar27 != 0);
                    }
LAB_14148c509:
                    uVar23 = param_2[9] ^ 0x8000000000000000;
                    if (-1 < param_2[9]) {
                      uVar23 = 8;
                    }
                    if (uVar23 == uVar25) {
                      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
                      switch(uVar25) {
                      case 1:
                      case 2:
                        cVar21 = FUN_141489e00(param_2[0xb],param_2[0xc],_Buf2_05,_Size_04);
code_r0x00014148c576:
                        if (cVar21 != '\0') goto LAB_14148c841;
                        break;
                      default:
                        goto LAB_14148c841;
                      case 7:
                        if ((((param_2[0xc] == _Size_04) &&
                             (iVar22 = memcmp((void *)param_2[0xb],_Buf2_05,_Size_04), iVar22 == 0))
                            && (param_2[0xf] == _Size_05)) &&
                           (iVar22 = memcmp((void *)param_2[0xe],_Buf2_06,_Size_05), iVar22 == 0)) {
                          cVar21 = param_2[0x10] == -2 && _Buf2_02 == (void *)0xfffffffffffffffe;
                          if ((_Buf2_02 == (void *)0xfffffffffffffffe) || (param_2[0x10] == -2))
                          goto code_r0x00014148c576;
                          if ((param_2[0x12] == _Size_03) &&
                             (iVar22 = memcmp((void *)param_2[0x11],_Buf2_01,_Size_03), iVar22 == 0)
                             ) goto LAB_14148c841;
                        }
                        break;
                      case 8:
                        if (((*(char *)(param_2 + 0x1e) == cVar1) &&
                            ((void *)param_2[0x11] == _Buf2_01)) &&
                           (iVar22 = memcmp((void *)param_2[0x10],_Buf2_02,(size_t)_Buf2_01),
                           iVar22 == 0)) {
                          if (param_2[0x18] == -2) {
                            if (lVar12 == -2) {
code_r0x00014148c5e4:
                              if (param_2[0x1b] == -2) {
                                if (lVar13 == -2) {
code_r0x00014148c5fe:
                                  if (param_2[0x12] == -1) {
                                    if (_Size_03 == 0xffffffffffffffff) goto code_r0x00014148c7c6;
                                  }
                                  else if ((_Size_03 != 0xffffffffffffffff) &&
                                          (param_2[0x14] == lVar14)) {
                                    if (lVar14 != 0) {
                                      lVar27 = 0;
                                      do {
                                        if (*(char *)(param_2[0x13] + lVar27) !=
                                            *(char *)(lVar15 + lVar27)) goto LAB_14148c340;
                                        lVar27 = lVar27 + 1;
                                      } while (lVar14 != lVar27);
                                    }
code_r0x00014148c7c6:
                                    cVar21 = func_0x00014148ad80(param_2 + 9,param_1 + 9);
                                    if (cVar21 != '\0') {
                                      cVar21 = (param_2[0x15] & uVar16) == 0xffffffffffffffff;
                                      if ((uVar16 != 0xffffffffffffffff) &&
                                         (param_2[0x15] != 0xffffffffffffffff)) {
                                        if (param_2[0x17] != lVar17) break;
                                        cVar21 = func_0x000140efcdc0(param_2[0x16],lVar18,lVar17);
                                      }
                                      goto code_r0x00014148c576;
                                    }
                                  }
                                }
                              }
                              else if (((lVar13 != -2) && (param_2[0x1d] == _Size_02)) &&
                                      (iVar22 = memcmp((void *)param_2[0x1c],_Buf2_04,_Size_02),
                                      iVar22 == 0)) goto code_r0x00014148c5fe;
                            }
                          }
                          else if (((lVar12 != -2) && (param_2[0x1a] == _Size_01)) &&
                                  (iVar22 = memcmp((void *)param_2[0x19],_Buf2_03,_Size_01),
                                  iVar22 == 0)) goto code_r0x00014148c5e4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else if (((lVar5 != -2) && (param_2[8] == _Size_00)) &&
                  (iVar22 = memcmp((void *)param_2[7],_Buf2_00,_Size_00), iVar22 == 0))
          goto LAB_14148c372;
        }
      }
      else if (((lVar4 != -2) && (param_2[5] == _Size)) &&
              (iVar22 = memcmp((void *)param_2[4],_Buf2,_Size), iVar22 == 0)) goto LAB_14148c361;
LAB_14148c340:
      param_2 = param_2 + 0x23;
    } while (param_2 != plVar26);
  }
  unaff_RBP = 0;
LAB_14148c841:
  return unaff_RBP & 0xffffffff;
}


/* address=141491580 name=FUN_141491580 */

undefined8 * FUN_141491580(undefined8 *param_1,longlong *param_2,longlong **param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong alStack_568 [27];
  ulonglong uStack_490;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  longlong *plStack_3c0;
  longlong *plStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  undefined8 *puStack_2d8;
  longlong lStack_80;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uStack_3c8 = 0;
  }
  else {
    do {
    } while (*(longlong *)(lVar7 + 0x2d8) == *(longlong *)(*param_2 + 0x10) + 0x10);
    uStack_3c8 = *(undefined8 *)(lVar7 + 0x2e8);
  }
  plStack_3c0 = *param_3;
  FUN_140859050(*param_2 + 0x18);
  uStack_3d8 = 0;
  uStack_3d0 = 0;
LAB_141491640:
  lVar7 = *param_2;
  lStack_80 = *(longlong *)(lVar7 + 0x38);
  lVar6 = *(longlong *)(lStack_80 + 0x2f0);
  if (lStack_80 == *(longlong *)(lVar7 + 0x10) + 0x10) {
    if (lVar6 == 0) {
      if (param_2[1] == 0) {
        *(undefined *)(param_2 + 2) = 1;
        *param_1 = 0xfffffffffffffffe;
        return param_1;
      }
      goto LAB_141494c42;
    }
    *(longlong *)(lVar7 + 0x38) = lVar6;
    lStack_80 = lVar6;
    lVar6 = *(longlong *)(lVar6 + 0x2f0);
  }
  if (lVar6 == 0) {
    if (*(longlong *)(lVar7 + 0x30) == lStack_80) {
      lVar5 = *(longlong *)(lVar7 + 0x10);
      *(undefined8 *)(lVar5 + 0x300) = 0;
      lVar5 = lVar5 + 0x10;
      LOCK();
      lVar6 = *(longlong *)(lVar7 + 0x30);
      *(longlong *)(lVar7 + 0x30) = lVar5;
      UNLOCK();
      *(longlong *)(lVar6 + 0x2f0) = lVar5;
      lVar6 = *(longlong *)(lStack_80 + 0x2f0);
      if (lVar6 != 0) goto LAB_1414916c7;
    }
    (**(code **)(*plStack_3c0 + 0x10))(plStack_3c0[1]);
LAB_141494c42:
    *param_1 = 0xfffffffffffffffd;
    return param_1;
  }
LAB_1414916c7:
  *(longlong *)(lVar7 + 0x38) = lVar6;
  if (*(char *)(lStack_80 + 8) == '\0') {
    alStack_568[0] = lStack_80 + -0x10;
    LOCK();
    plVar1 = (longlong *)(lStack_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_140bf8890(alStack_568);
    }
    goto LAB_141491640;
  }
  lVar7 = param_2[1];
  lVar6 = *(longlong *)(lVar7 + 0x2e8);
  lVar5 = *(longlong *)(lStack_80 + 0x2d8);
  lVar3 = *(longlong *)(lStack_80 + 0x2e0);
  *(longlong *)(lStack_80 + 0x2d8) = *(longlong *)(*param_2 + 0x10) + 0x10;
  *(undefined8 *)(lStack_80 + 0x2e0) = 0;
  if (lVar5 == 0) {
    if (lVar3 == 0) {
      param_2[1] = 0;
      goto LAB_14149175e;
    }
LAB_14149174d:
    *(longlong *)(lVar3 + 0x2d8) = lVar5;
  }
  else {
    *(longlong *)(lVar5 + 0x2e0) = lVar3;
    if (lVar3 != 0) goto LAB_14149174d;
    param_2[1] = lVar5;
    lVar7 = lVar5;
  }
  *(longlong *)(lVar7 + 0x2e8) = lVar6 + -1;
LAB_14149175e:
  lStack_300 = lStack_80 + -0x10;
  LOCK();
  bVar2 = *(byte *)(lStack_80 + 0x2f8);
  *(byte *)(lStack_80 + 0x2f8) = 0;
  uStack_490 = (ulonglong)bVar2;
  UNLOCK();
  lStack_2f8 = lStack_300;
  if (bVar2 != 0) {
    *(undefined *)(lStack_80 + 0x2f9) = 0;
    plStack_308 = param_2;
    puStack_2d8 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001414917fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined8 *)
             (*(code *)(&DAT_142fb7af0 +
                       *(int *)(&DAT_142fb7af0 + (ulonglong)*(byte *)(lStack_80 + 0x263) * 4)))();
    return puVar4;
  }
  FUN_142ce0300("assertion failed: prevC:\\Users\\VssAdministrator\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.32\\src\\stream\\futures_unordered\\mod.rs"
                ,0x16,&DAT_142fb4eb0);
  do {
    invalidInstructionException();
  } while( true );
}


/* address=141496090 name=FUN_141496090 */

void FUN_141496090(undefined4 *param_1,longlong **param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong *plStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  plStack_38 = param_3;
  uVar3 = FUN_14091a060(&DAT_142fb81d0,3);
  lVar1 = plStack_38[1];
  uStack_40 = uVar3;
  uStack_48 = FUN_14091a060(lVar1,plStack_38[2]);
  uStack_68 = 0;
  iVar2 = (**(code **)(**param_2 + 0xa0))(*param_2,uVar3,uStack_48,0x30,param_2[1],&uStack_68);
  iVar5 = (int)uVar3;
  if (iVar2 < 0) {
    lVar4 = FUN_14067bd80(iVar2);
    if (iVar5 == 0) goto LAB_14149616e;
  }
  else {
    lVar4 = uStack_68;
    if (uStack_68 != 0) {
LAB_14149616e:
      *(longlong *)(param_1 + 2) = lVar4;
      *(undefined *)param_1 = 0xff;
      FUN_14091a8a0(&uStack_48);
      FUN_14091a8a0(&uStack_40);
      goto LAB_141496189;
    }
    lVar4 = 0;
    iVar5 = 0x535f4f4b;
  }
  FUN_14156a2f0(&uStack_68,lVar4,iVar5);
  param_1[4] = uStack_58;
  param_1[5] = uStack_54;
  param_1[6] = uStack_50;
  param_1[7] = uStack_4c;
  *param_1 = (undefined4)uStack_68;
  param_1[1] = uStack_68._4_4_;
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
  FUN_14091a8a0(&uStack_48);
  FUN_14091a8a0(&uStack_40);
LAB_141496189:
  if (*plStack_38 != 0) {
    thunk_FUN_1406dbb00(lVar1,*plStack_38,1);
  }
  return;
}


/* address=141496250 name=FUN_141496250 */

undefined4 *
FUN_141496250(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             int *param_5,undefined4 *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  ulonglong *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  ulonglong **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  puVar11 = PTR_PTR_DAT_143ca3350;
  uStack_48 = 0xfffffffffffffffe;
  if (*(char *)param_6 == '\0') {
    uVar2 = param_6[2];
    cVar12 = *(char *)((longlong)param_6 + 1);
    if ((*param_5 == 1) &&
       (uVar3 = *(ulonglong *)(param_5 + 2), uVar3 <= *(ulonglong *)(param_5 + 0x14))) {
      if (*(ulonglong *)PTR_DAT_143ca1f50 < 4) {
        bVar1 = PTR_PTR_DAT_143ca3350[0x10];
        uVar13 = (uint)bVar1;
        if (((bVar1 - 1 < 2) ||
            ((bVar1 != 0 && (uVar13 = FUN_142cdac40(PTR_PTR_DAT_143ca3350), (char)uVar13 != '\0'))))
           && (cVar12 = FUN_140679c40(*(undefined8 *)puVar11,uVar13), cVar12 != '\0')) {
          lVar4 = *(longlong *)puVar11;
          lStack_88 = lVar4 + 0x30;
          puStack_80 = &uStack_50;
          puStack_78 = &LAB_1401a4480;
          puStack_70 = &DAT_142fb81d3;
          ppuStack_68 = &puStack_80;
          ppuStack_60 = &puStack_70;
          puStack_58 = &DAT_142fb7c48;
          uStack_a0 = 1;
          pppuStack_98 = &ppuStack_60;
          uStack_90 = 1;
          uStack_50 = uVar3;
          FUN_1406ce260(lVar4,&uStack_a0);
        }
      }
      *(undefined2 *)param_1 = 0x101;
      param_1[1] = 0xb;
      *(undefined ***)(param_1 + 2) = &PTR_LAB_142fb7b18;
      *(undefined **)(param_1 + 4) = &DAT_142fb8217;
      *(undefined8 *)(param_1 + 6) = 0x18;
      *(undefined8 *)(param_1 + 8) = 0;
      cVar12 = *(char *)param_6;
    }
    else {
      FUN_140b19780(param_5);
      FUN_14132af20(param_2 + 0xa0,uVar2,cVar12,param_3,param_4,param_5,param_2 + 0x140);
      FUN_1417fe670(param_2,param_4,param_5);
      uVar14 = FUN_140b17770(param_4);
      FUN_140b18610(uVar14);
      *(undefined *)param_1 = 0xff;
      cVar12 = *(char *)param_6;
    }
    if ((cVar12 != -1) && (cVar12 != '\0')) {
      if (cVar12 == '\x01') {
        (**(code **)(*(longlong *)(param_6 + 2) + 0x20))
                  (param_6 + 8,*(undefined8 *)(param_6 + 4),*(undefined8 *)(param_6 + 6));
      }
      else if (0 < *(longlong *)(param_6 + 2)) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_6 + 4),*(longlong *)(param_6 + 2),1);
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_6 + 8);
    uVar2 = *param_6;
    uVar5 = param_6[1];
    uVar6 = param_6[2];
    uVar7 = param_6[3];
    uVar8 = param_6[5];
    uVar9 = param_6[6];
    uVar10 = param_6[7];
    param_1[4] = param_6[4];
    param_1[5] = uVar8;
    param_1[6] = uVar9;
    param_1[7] = uVar10;
    *param_1 = uVar2;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
  }
  return param_1;
}


/* address=1414964f0 name=FUN_1414964f0 */

void FUN_1414964f0(undefined8 param_1)

{
  FUN_14149a9d0();
  thunk_FUN_1406dbb00(param_1,0x4b0,8);
  return;
}


/* address=141496560 name=FUN_141496560 */

void FUN_141496560(longlong *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  lVar1 = *param_1;
  if (lVar1 != -2) {
    if (lVar1 == -3) {
      lVar1 = param_1[1];
      ppcVar2 = (code **)param_1[2];
      if (*ppcVar2 != (code *)0x0) {
        (**ppcVar2)(lVar1);
      }
      if (ppcVar2[1] != (code *)0x0) {
        thunk_FUN_1406dbb00(lVar1,ppcVar2[1],ppcVar2[2]);
        return;
      }
    }
    else {
      if (lVar1 == -1) {
        FUN_14149bbf0(param_1 + 1);
        return;
      }
      FUN_14134aeb0();
      if (param_1[0x13] != 0) {
        thunk_FUN_1406dbb00(param_1[0x14],param_1[0x13],1);
        return;
      }
    }
  }
  return;
}


/* address=141496690 name=FUN_141496690 */

void FUN_141496690(longlong param_1)

{
  if (param_1 != 0) {
    FUN_14149f2c0();
    thunk_FUN_1406dbb00(param_1,0x4e8,8);
    return;
  }
  return;
}


/* address=141496c70 name=FUN_141496c70 */

void FUN_141496c70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (lVar1 == -1) {
      return;
    }
    thunk_FUN_1406dbb00(param_1[1],lVar1 * 0x11,1);
  }
  if (param_1[3] == 0) {
    return;
  }
  thunk_FUN_1406dbb00(param_1[4],param_1[3] * 0x12,1);
  return;
}


/* address=141496cd0 name=FUN_141496cd0 */

void FUN_141496cd0(longlong *param_1)

{
  if (*param_1 != -1) {
    FUN_14134aeb0();
    return;
  }
  FUN_14149bbf0(param_1 + 1);
  return;
}


/* address=141496cf0 name=FUN_141496cf0 */

void FUN_141496cf0(longlong *param_1)

{
  if (*param_1 == -1) {
    FUN_14149bbf0(param_1 + 1);
    return;
  }
  FUN_14134aeb0();
  if (param_1[0x13] != 0) {
    thunk_FUN_1406dbb00(param_1[0x14],param_1[0x13],1);
    return;
  }
  return;
}


/* address=141496d90 name=FUN_141496d90 */

void FUN_141496d90(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 != -1) && (cVar1 != '\0')) {
    if (cVar1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000141496db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20))
                (param_1 + 0x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      return;
    }
    if (0 < *(longlong *)(param_1 + 8)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 8),1);
      return;
    }
  }
  return;
}


/* address=141496de0 name=FUN_141496de0 */

void FUN_141496de0(longlong param_1)

{
  FUN_141497ae0(param_1 + 0x48);
  FUN_140632a20(param_1);
  return;
}


/* address=141496e30 name=FUN_141496e30 */

void FUN_141496e30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lStack_40;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  lStack_40 = 0;
  while (lStack_40 != lVar2) {
    lVar3 = lStack_40 * 0x180 + lVar1;
    lStack_40 = lStack_40 + 1;
    FUN_14122f8a0();
    if (*(char *)(lVar3 + 0x11f) != -1) {
      FUN_141230010(lVar3 + 0x128);
    }
  }
  if (*param_1 != 0) {
    thunk_FUN_1406dbb00(lVar1,*param_1 * 0x180,8);
    return;
  }
  return;
}


/* address=141496fd0 name=FUN_141496fd0 */

void FUN_141496fd0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code **ppcVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != -2) {
    if (lVar1 == -3) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      ppcVar3 = *(code ***)(param_1 + 0x28);
      if (*ppcVar3 != (code *)0x0) {
        (**ppcVar3)(uVar2);
      }
      if (ppcVar3[1] != (code *)0x0) {
        thunk_FUN_1406dbb00(uVar2,ppcVar3[1],ppcVar3[2]);
      }
    }
    else if (lVar1 == -1) {
      FUN_14149bbf0(param_1 + 0x20);
    }
    else {
      FUN_14134aeb0(param_1 + 0x18);
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0xb8),*(longlong *)(param_1 + 0xb0),1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_14071cad0();
    return;
  }
  return;
}


/* address=141497150 name=FUN_141497150 */

void FUN_141497150(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lStack_38;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  lStack_38 = 0;
  lVar3 = lVar1;
  while (lVar2 != lStack_38) {
    lStack_38 = lStack_38 + 1;
    FUN_14122a520(lVar3);
    lVar3 = lVar3 + 0x138;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1406dbb00(lVar1,*(longlong *)(param_1 + 0x18) * 0x138,8);
    return;
  }
  return;
}


/* address=141497280 name=FUN_141497280 */

void FUN_141497280(undefined8 param_1)

{
  FUN_14149f720();
  thunk_FUN_1406dbb00(param_1,0xf0,8);
  return;
}


/* address=1414972f0 name=FUN_1414972f0 */

void FUN_1414972f0(longlong param_1)

{
  FUN_141231530();
  FUN_14036f620(param_1 + 0x40);
  return;
}


/* address=141497350 name=FUN_141497350 */

void FUN_141497350(longlong param_1)

{
  longlong *plVar1;
  
  FUN_141231530();
  FUN_14036f620(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0xe0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_140bf8f40(param_1 + 0xe0);
    return;
  }
  return;
}


/* address=141497420 name=FUN_141497420 */

void FUN_141497420(longlong param_1)

{
  FUN_141497930();
  FUN_1407eda10(param_1 + 0x628);
  FUN_1404953a0();
  if (*(longlong *)(param_1 + 0x660) != 0) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x668),*(longlong *)(param_1 + 0x660) * 0x48,8);
  }
  FUN_1407eda10(param_1 + 0x690);
  FUN_14036bf00(param_1 + 0x6b8);
  return;
}


/* address=1414975a0 name=FUN_1414975a0 */

void FUN_1414975a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  
  if (*param_1 == -2) {
    return;
  }
  if (*param_1 == -1) {
    FUN_14149bbf0(param_1 + 1);
    return;
  }
  lVar1 = param_1[1];
  lVar7 = param_1[2];
  if (lVar7 != 0) {
    puVar5 = (undefined8 *)(lVar1 + 0x38);
    do {
      if ((*(short *)(puVar5 + -7) != 0) && (puVar5[-6] != 0)) {
        thunk_FUN_1406dbb00(puVar5[-5],puVar5[-6],1);
      }
      if ((*(short *)(puVar5 + -2) != 0) && (puVar5[-1] != 0)) {
        thunk_FUN_1406dbb00(*puVar5,puVar5[-1],1);
      }
      puVar5 = puVar5 + 0xb;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_1406dbb00(lVar1,*param_1 * 0x58,8);
  }
  lVar1 = param_1[4];
  FUN_1412340b0(lVar1,param_1[5]);
  if (param_1[3] != 0) {
    thunk_FUN_1406dbb00(lVar1,param_1[3] * 0x110,8);
  }
  lVar1 = param_1[7];
  FUN_1412340b0(lVar1,param_1[8]);
  if (param_1[6] != 0) {
    thunk_FUN_1406dbb00(lVar1,param_1[6] * 0x110,8);
  }
  lVar1 = param_1[10];
  FUN_1412340b0(lVar1,param_1[0xb]);
  if (param_1[9] != 0) {
    thunk_FUN_1406dbb00(lVar1,param_1[9] * 0x110,8);
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    if ((*(short *)(lVar1 + 0x90) != 0) && (*(longlong *)(lVar1 + 0x98) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(lVar1 + 0xa0),*(longlong *)(lVar1 + 0x98),1);
    }
    if ((*(short *)(lVar1 + 0xb8) != 0) && (*(longlong *)(lVar1 + 0xc0) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(lVar1 + 200),*(longlong *)(lVar1 + 0xc0),1);
    }
    FUN_1402e3eb0(lVar1);
    thunk_FUN_1406dbb00(lVar1,0xe8,8);
  }
  lVar1 = param_1[0xc];
  if (lVar1 != -1) {
    lVar7 = param_1[0xd];
    lVar6 = param_1[0xe];
    if (lVar6 != 0) {
      puVar8 = (ulonglong *)(lVar7 + 8);
      do {
        uVar4 = *puVar8;
        uVar3 = uVar4 ^ 0x8000000000000000;
        if (-1 < (longlong)uVar4) {
          uVar3 = 2;
        }
        if (uVar3 != 0) {
          lVar2 = 8;
          if (uVar3 == 1) {
            uVar4 = puVar8[1];
            lVar2 = 0x10;
          }
          if (uVar4 != 0) {
            thunk_FUN_1406dbb00(*(undefined8 *)((longlong)puVar8 + lVar2),uVar4,1);
          }
        }
        puVar8 = puVar8 + 5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar1 != 0) {
      thunk_FUN_1406dbb00(lVar7,lVar1 * 0x28,8);
      return;
    }
  }
  return;
}


/* address=1414975c0 name=FUN_1414975c0 */

void FUN_1414975c0(longlong *param_1)

{
  if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xc3) == '\x03') {
      FUN_14149a9d0(param_1 + 0x2d);
      *(undefined *)((longlong)param_1 + 0x619) = 0;
    }
    else if (*(char *)(param_1 + 0xc3) == '\0') {
      if ((*(short *)(param_1 + 1) != 0) && (param_1[2] != 0)) {
        thunk_FUN_1406dbb00(param_1[3],param_1[2],1);
      }
      if ((*(short *)(param_1 + 6) != 0) && (param_1[7] != 0)) {
        thunk_FUN_1406dbb00(param_1[8],param_1[7],1);
        return;
      }
    }
  }
  else if ((int)*param_1 == 1) {
    if (param_1[1] != -1) {
      FUN_14134aeb0(param_1 + 1);
      return;
    }
    FUN_14149bbf0(param_1 + 2);
    return;
  }
  return;
}


/* address=1414976c0 name=FUN_1414976c0 */

void FUN_1414976c0(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 1) {
    if (param_1[1] == -1) {
      FUN_14149bbf0(param_1 + 2);
    }
    else {
      FUN_14134aeb0(param_1 + 1);
    }
  }
  else if (*param_1 == 0) {
    if (*(char *)(param_1 + 0xc3) == '\x03') {
      FUN_14149a9d0(param_1 + 0x2d);
      *(undefined *)((longlong)param_1 + 0x619) = 0;
      lVar1 = param_1[0xc4];
      goto joined_r0x00014149775e;
    }
    if (*(char *)(param_1 + 0xc3) == '\0') {
      if ((*(short *)(param_1 + 1) != 0) && (param_1[2] != 0)) {
        thunk_FUN_1406dbb00(param_1[3],param_1[2],1);
      }
      if ((*(short *)(param_1 + 6) != 0) && (param_1[7] != 0)) {
        thunk_FUN_1406dbb00(param_1[8],param_1[7],1);
        lVar1 = param_1[0xc4];
        goto joined_r0x00014149775e;
      }
    }
  }
  lVar1 = param_1[0xc4];
joined_r0x00014149775e:
  if (lVar1 == 1) {
    if (param_1[0xc5] != -1) {
      FUN_14134aeb0(param_1 + 0xc5);
      return;
    }
    FUN_14149bbf0(param_1 + 0xc6);
    return;
  }
  if (lVar1 == 0) {
    if (*(char *)(param_1 + 0x187) == '\x03') {
      FUN_14149a9d0(param_1 + 0xf1);
      *(undefined *)((longlong)param_1 + 0xc39) = 0;
    }
    else if (*(char *)(param_1 + 0x187) == '\0') {
      if ((*(short *)(param_1 + 0xc5) != 0) && (param_1[0xc6] != 0)) {
        thunk_FUN_1406dbb00(param_1[199],param_1[0xc6],1);
      }
      if ((*(short *)(param_1 + 0xca) != 0) && (param_1[0xcb] != 0)) {
        thunk_FUN_1406dbb00(param_1[0xcc],param_1[0xcb],1);
        return;
      }
    }
  }
  return;
}


/* address=141497930 name=FUN_141497930 */

void FUN_141497930(longlong param_1)

{
  FUN_140819570();
  FUN_140102de0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  FUN_140119f10(param_1);
  FUN_14149f960(param_1 + 0x28);
  if (0 < *(longlong *)(param_1 + 0x448)) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x450),*(longlong *)(param_1 + 0x448),1);
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x468) + 0x18))(*(undefined8 *)(param_1 + 0x470));
  }
  FUN_141332870(param_1 + 0x480);
  return;
}


/* address=141497ae0 name=FUN_141497ae0 */

void FUN_141497ae0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  switch(*(undefined *)(param_1 + 0x24)) {
  case 3:
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (*(char *)(lVar2 + 0x1b80) == '\x03') {
      FUN_141497ae0(lVar2 + 0x60);
      FUN_140632a20(lVar2 + 0x18);
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
    thunk_FUN_1406dbb00(lVar2,0x1b88,8);
    plVar1 = *(longlong **)(param_1 + 0x18);
    goto joined_r0x000141497d36;
  case 4:
    if (*(char *)(param_1 + 0x420) == '\x03') {
      if (*(char *)(param_1 + 0x418) == '\x03') {
        FUN_141499550(param_1 + 0x108);
      }
      else if (*(char *)(param_1 + 0x418) == '\0') {
        func_0x00014149e2f0(param_1 + 0xb8);
      }
      FUN_140403ed0(param_1 + 0xa0);
      FUN_140403ed0(param_1 + 0x88);
      *(undefined *)(param_1 + 0x421) = 0;
      plVar1 = *(longlong **)(param_1 + 0x18);
    }
    else {
      if (*(char *)(param_1 + 0x420) != '\0') break;
      func_0x00014149e2f0(param_1 + 0x28);
      plVar1 = *(longlong **)(param_1 + 0x18);
    }
    goto joined_r0x000141497d36;
  case 5:
    func_0x0001414987d0(param_1 + 0x28);
    break;
  case 6:
    if ((((*(char *)(param_1 + 0xf0) == '\x03') && (*(char *)(param_1 + 0xe8) == '\x03')) &&
        (*(char *)(param_1 + 0xe0) == '\x03')) && (*(char *)(param_1 + 0x98) == '\x04')) {
      FUN_140697f80(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0xa8) + 0x18))(*(undefined8 *)(param_1 + 0xb0));
      }
    }
    break;
  case 7:
    func_0x000141499950(param_1 + 0x40);
    FUN_140403ed0(param_1 + 0x28);
    break;
  case 8:
    func_0x0001414987d0(param_1 + 0x28);
    break;
  case 9:
    func_0x000141499950(param_1 + 0x40);
    FUN_140403ed0(param_1 + 0x28);
    break;
  case 10:
    func_0x000141499950(param_1 + 0x40);
    FUN_140403ed0(param_1 + 0x28);
    break;
  case 0xb:
    func_0x000141499950(param_1 + 0x40);
    FUN_140403ed0(param_1 + 0x28);
    break;
  default:
    goto LAB_141497c95;
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
joined_r0x000141497d36:
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x26) != '\0')) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1405be470(param_1 + 0x18);
    }
  }
  *(undefined *)(param_1 + 0x26) = 0;
LAB_141497c95:
  return;
}


/* address=141499550 name=FUN_141499550 */

void FUN_141499550(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lStack_30;
  undefined8 uStack_28;
  longlong lStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x308) == '\0') {
    FUN_14149ea10();
    return;
  }
  if (*(char *)(param_1 + 0x308) == '\x03') {
    lStack_20 = param_1;
    if (*(char *)(param_1 + 0x300) == '\x03') {
      if ((*(char *)(param_1 + 0x2f8) == '\x03') && (*(char *)(param_1 + 0x2b0) == '\x04')) {
        FUN_140697f80(param_1 + 0x2b8);
        if (*(longlong *)(lStack_20 + 0x2c0) != 0) {
          (**(code **)(*(longlong *)(lStack_20 + 0x2c0) + 0x18))(*(undefined8 *)(lStack_20 + 0x2c8))
          ;
        }
      }
      FUN_14149ea10(lStack_20 + 0x1f8);
      *(undefined *)(lStack_20 + 0x301) = 0;
    }
    else if (*(char *)(param_1 + 0x300) == '\0') {
      FUN_14149ea10(param_1 + 0x168);
    }
    lVar4 = lStack_20;
    lVar2 = *(longlong *)(lStack_20 + 0x108);
    lVar3 = *(longlong *)(lStack_20 + 0x118);
    if (lVar3 == -1) {
      uStack_28 = *(undefined8 *)(lStack_20 + 0x110);
      lStack_30 = lVar2 + -0x10;
      LOCK();
      plVar1 = (longlong *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_140677a70(&lStack_30);
      }
      lVar2 = *(longlong *)(lStack_20 + 0x120);
      lVar3 = *(longlong *)(lStack_20 + 0x130);
      lVar4 = lStack_20;
    }
    else {
      if (lVar3 != 0) {
        thunk_FUN_1406dbb00(lVar2,lVar3,1);
      }
      lVar2 = *(longlong *)(lVar4 + 0x120);
      lVar3 = *(longlong *)(lVar4 + 0x130);
    }
    if (lVar3 == -1) {
      uStack_28 = *(undefined8 *)(lVar4 + 0x128);
      lStack_30 = lVar2 + -0x10;
      LOCK();
      plVar1 = (longlong *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_140677a70(&lStack_30);
      }
      lVar2 = *(longlong *)(lStack_20 + 0x138);
      lVar3 = *(longlong *)(lStack_20 + 0x148);
      lVar4 = lStack_20;
    }
    else {
      if (lVar3 != 0) {
        thunk_FUN_1406dbb00(lVar2,lVar3,1);
      }
      lVar2 = *(longlong *)(lVar4 + 0x138);
      lVar3 = *(longlong *)(lVar4 + 0x148);
    }
    if (lVar3 == -1) {
      uStack_28 = *(undefined8 *)(lVar4 + 0x140);
      lStack_30 = lVar2 + -0x10;
      LOCK();
      plVar1 = (longlong *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_140677a70(&lStack_30);
      }
      lVar2 = *(longlong *)(lStack_20 + 0x150);
      lVar3 = *(longlong *)(lStack_20 + 0x160);
      lVar4 = lStack_20;
      lVar5 = lStack_20;
    }
    else {
      if (lVar3 != 0) {
        thunk_FUN_1406dbb00(lVar2,lVar3,1);
      }
      lVar2 = *(longlong *)(lVar4 + 0x150);
      lVar3 = *(longlong *)(lVar4 + 0x160);
      lVar5 = lStack_20;
    }
    lStack_20 = lVar5;
    if (lVar3 == -1) {
      uStack_28 = *(undefined8 *)(lVar4 + 0x158);
      lStack_30 = lVar2 + -0x10;
      LOCK();
      plVar1 = (longlong *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_140677a70(&lStack_30);
      }
    }
    else {
      lStack_20 = lVar4;
      if (lVar3 != 0) {
        lStack_20 = lVar5;
        thunk_FUN_1406dbb00(lVar2,lVar3,1);
        lStack_20 = lVar4;
      }
    }
    *(undefined2 *)(lStack_20 + 0x309) = 0;
    return;
  }
  return;
}


/* address=141499d50 name=FUN_141499d50 */

void FUN_141499d50(short *param_1)

{
  if (*(char *)(param_1 + 0x308) == '\0') {
    if ((*param_1 != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 4),1);
    }
    if ((param_1[0x14] != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x1c),*(longlong *)(param_1 + 0x18),1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x308) == '\x03') {
    FUN_14149a9d0(param_1 + 0xb0);
    *(undefined *)((longlong)param_1 + 0x611) = 0;
  }
  return;
}


/* address=141499e20 name=FUN_141499e20 */

void FUN_141499e20(short *param_1)

{
  if (*(char *)(param_1 + 0x678) == '\0') {
    if ((*param_1 != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 4),1);
    }
    if ((param_1[0x14] != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x1c),*(longlong *)(param_1 + 0x18),1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x678) == '\x03') {
    FUN_1414976c0(param_1 + 0x54);
    *(undefined *)((longlong)param_1 + 0xcf1) = 0;
  }
  return;
}


/* address=141499ef0 name=FUN_141499ef0 */

void FUN_141499ef0(short *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xb2);
  if (cVar1 == '\0') {
    if ((*param_1 != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 4),1);
    }
    if ((param_1[0x14] != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x1c),*(longlong *)(param_1 + 0x18),1);
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x3bc) == '\x03') {
        FUN_14149a9d0(param_1 + 0x164);
        *(undefined *)((longlong)param_1 + 0x779) = 0;
      }
      else if (*(char *)(param_1 + 0x3bc) == '\0') {
        if ((param_1[0xb4] != 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
          thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0xbc),*(longlong *)(param_1 + 0xb8),1);
        }
        if ((param_1[200] != 0) && (*(longlong *)(param_1 + 0xcc) != 0)) {
          thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xcc),1);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x3bc) == '\x03') {
        FUN_14149a9d0(param_1 + 0x164);
        *(undefined *)((longlong)param_1 + 0x779) = 0;
      }
      else if (*(char *)(param_1 + 0x3bc) == '\0') {
        if ((param_1[0xb4] != 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
          thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0xbc),*(longlong *)(param_1 + 0xb8),1);
        }
        if ((param_1[200] != 0) && (*(longlong *)(param_1 + 0xcc) != 0)) {
          thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0xd0),*(longlong *)(param_1 + 0xcc),1);
        }
      }
      if (*(longlong *)(param_1 + 0x58) == -1) {
        FUN_14149bbf0(param_1 + 0x5c);
      }
      else if (*(char *)((longlong)param_1 + 0x165) != '\0') {
        FUN_14134aeb0(param_1 + 0x58);
      }
    }
    *(undefined *)((longlong)param_1 + 0x165) = 0;
    if (*(char *)(param_1 + 0xb3) != '\0') {
      if ((param_1[0x30] != 0) && (*(longlong *)(param_1 + 0x34) != 0)) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x34),1);
      }
      if ((param_1[0x44] != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x4c),*(longlong *)(param_1 + 0x48),1);
      }
    }
    *(undefined *)(param_1 + 0xb3) = 0;
  }
  return;
}


/* address=14149a250 name=FUN_14149a250 */

void FUN_14149a250(short *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x6a8) == '\0') {
    if ((*param_1 != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 4),1);
    }
    if ((param_1[0x14] != 0) && (lVar2 = *(longlong *)(param_1 + 0x18), lVar2 != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x1c);
LAB_14149a30b:
      thunk_FUN_1406dbb00(uVar1,lVar2,1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x6a8) == '\x03') {
    if (*(char *)(param_1 + 0x6a4) == '\x03') {
      FUN_1414976c0(param_1 + 0x80);
      *(undefined *)((longlong)param_1 + 0xd49) = 0;
    }
    else if (*(char *)(param_1 + 0x6a4) == '\0') {
      if ((param_1[0x2c] != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x34),*(longlong *)(param_1 + 0x30),1);
      }
      if ((param_1[0x40] != 0) && (lVar2 = *(longlong *)(param_1 + 0x44), lVar2 != 0)) {
        uVar1 = *(undefined8 *)(param_1 + 0x48);
        goto LAB_14149a30b;
      }
    }
  }
  return;
}


/* address=14149a370 name=FUN_14149a370 */

void FUN_14149a370(short *param_1)

{
  if (*(char *)(param_1 + 0x3ec) == '\0') {
    if ((*param_1 != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 4),1);
    }
    if ((param_1[0x14] != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x1c),*(longlong *)(param_1 + 0x18),1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x3ec) == '\x03') {
    FUN_141499ef0(param_1 + 0x2c);
    return;
  }
  return;
}


/* address=14149a3f0 name=FUN_14149a3f0 */

/* WARNING: Removing unreachable block (ram,0x0001406dbb14) */

void FUN_14149a3f0(longlong param_1)

{
  LPVOID lpMem;
  longlong *plVar1;
  char cVar2;
  HANDLE hHeap;
  longlong lVar3;
  
  switch(*(undefined *)(param_1 + 0x221)) {
  case 0:
    FUN_141231530(param_1);
    FUN_14036f620(param_1 + 0x40);
    plVar1 = *(longlong **)(param_1 + 0xe0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_140bf8f40(param_1 + 0xe0);
    }
    if ((*(short *)(param_1 + 0xe8) != 0) && (*(longlong *)(param_1 + 0xf0) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0xf8),*(longlong *)(param_1 + 0xf0),1);
    }
    if (*(short *)(param_1 + 0x110) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x118) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0x120);
    hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(hHeap,0,lpMem);
    return;
  default:
    goto LAB_14149a69a;
  case 3:
    cVar2 = *(char *)(param_1 + 0x898);
    if (cVar2 == '\x03') {
      cVar2 = *(char *)(param_1 + 0x890);
      if (cVar2 != '\x03') goto code_r0x00014149a625;
      lVar3 = 0x891;
      FUN_14149a9d0(param_1 + 0x3e0);
code_r0x00014149a64d:
      *(undefined *)(param_1 + lVar3) = 0;
    }
    else {
code_r0x00014149a5b3:
      if (cVar2 == '\0') {
        if ((*(short *)(param_1 + 0x228) != 0) && (*(longlong *)(param_1 + 0x230) != 0)) {
          thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x238),*(longlong *)(param_1 + 0x230),1);
        }
        if ((*(short *)(param_1 + 0x250) != 0) && (*(longlong *)(param_1 + 600) != 0)) {
          thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x260),*(longlong *)(param_1 + 600),1);
        }
      }
    }
    break;
  case 4:
    cVar2 = *(char *)(param_1 + 0x898);
    if (cVar2 != '\x03') goto code_r0x00014149a5b3;
    cVar2 = *(char *)(param_1 + 0x890);
    if (cVar2 == '\x03') {
      lVar3 = 0x891;
      FUN_14149a9d0(param_1 + 0x3e0);
      goto code_r0x00014149a64d;
    }
    goto code_r0x00014149a625;
  case 5:
    cVar2 = *(char *)(param_1 + 0xf78);
    if (cVar2 != '\x03') goto code_r0x00014149a5b3;
    cVar2 = *(char *)(param_1 + 0xf70);
    if (cVar2 == '\x03') {
      lVar3 = 0xf71;
      FUN_1414976c0(param_1 + 0x328);
      goto code_r0x00014149a64d;
    }
    goto code_r0x00014149a625;
  case 6:
    cVar2 = *(char *)(param_1 + 0xf78);
    if (cVar2 != '\x03') goto code_r0x00014149a5b3;
    cVar2 = *(char *)(param_1 + 0xf70);
    if (cVar2 == '\x03') {
      lVar3 = 0xf71;
      FUN_1414976c0(param_1 + 0x328);
      goto code_r0x00014149a64d;
    }
code_r0x00014149a625:
    if (cVar2 == '\0') {
      FUN_1402e3f40(param_1 + 0x280);
    }
    break;
  case 7:
    cVar2 = *(char *)(param_1 + 0xa00);
    if (cVar2 != '\x03') goto code_r0x00014149a5b3;
    FUN_141499ef0(param_1 + 0x280);
    break;
  case 8:
    cVar2 = *(char *)(param_1 + 0xa00);
    if (cVar2 != '\x03') goto code_r0x00014149a5b3;
    FUN_141499ef0(param_1 + 0x280);
  }
  FUN_141231530(param_1 + 0x138);
  FUN_14036f620(param_1 + 0x178);
  plVar1 = *(longlong **)(param_1 + 0x218);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x218);
    FUN_1411edb30(lVar3 + 0x10);
    if (lVar3 != -1) {
      LOCK();
      plVar1 = (longlong *)(lVar3 + 8);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        thunk_FUN_1406dbb00(lVar3,0x40,8);
        return;
      }
    }
    return;
  }
LAB_14149a69a:
  return;
}


/* address=14149a8b0 name=FUN_14149a8b0 */

void FUN_14149a8b0(short *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x338) == '\0') {
    if ((*param_1 != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 4),1);
    }
    if ((param_1[0x14] != 0) && (lVar2 = *(longlong *)(param_1 + 0x18), lVar2 != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x1c);
LAB_14149a96b:
      thunk_FUN_1406dbb00(uVar1,lVar2,1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x338) == '\x03') {
    if (*(char *)(param_1 + 0x334) == '\x03') {
      FUN_14149a9d0(param_1 + 0xdc);
      *(undefined *)((longlong)param_1 + 0x669) = 0;
    }
    else if (*(char *)(param_1 + 0x334) == '\0') {
      if ((param_1[0x2c] != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x34),*(longlong *)(param_1 + 0x30),1);
      }
      if ((param_1[0x40] != 0) && (lVar2 = *(longlong *)(param_1 + 0x44), lVar2 != 0)) {
        uVar1 = *(undefined8 *)(param_1 + 0x48);
        goto LAB_14149a96b;
      }
    }
  }
  return;
}


/* address=14149a9d0 name=FUN_14149a9d0 */

void FUN_14149a9d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  code **ppcVar4;
  
  cVar1 = *(char *)(param_1 + 0x350);
  if (cVar1 == '\0') {
    if ((*(short *)(param_1 + 0xf8) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x108),*(longlong *)(param_1 + 0x100),1);
    }
    if ((*(short *)(param_1 + 0x120) != 0) && (*(longlong *)(param_1 + 0x128) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x130),*(longlong *)(param_1 + 0x128),1);
    }
    FUN_141231530(param_1);
    FUN_14036f620(param_1 + 0x40);
    FUN_1412340b0(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 200),*(longlong *)(param_1 + 0xc0) * 0x110,8);
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
          thunk_FUN_1406dbb00(lVar3,ppcVar4[1],ppcVar4[2]);
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
      FUN_14149a9d0();
      thunk_FUN_1406dbb00(uVar2,0x4b0,8);
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
            FUN_14149bbf0(param_1 + 0x408);
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
        FUN_14149bbf0(param_1 + 0x2a8);
      }
      *(undefined *)(param_1 + 0x357) = 0;
      *(undefined *)(param_1 + 0x357) = 0;
      cVar1 = *(char *)(param_1 + 0x358);
    }
    if (cVar1 != '\0') {
      FUN_1412340b0(*(undefined8 *)(param_1 + 0x290),*(undefined8 *)(param_1 + 0x298));
      if (*(longlong *)(param_1 + 0x288) != 0) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x290),*(longlong *)(param_1 + 0x288) * 0x110,
                            8);
      }
    }
    *(undefined *)(param_1 + 0x358) = 0;
    FUN_141231530(param_1 + 0x1c8);
    FUN_14036f620(param_1 + 0x208);
    if ((*(short *)(param_1 + 0x150) != 0) && (*(longlong *)(param_1 + 0x158) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x160),*(longlong *)(param_1 + 0x158),1);
    }
    if ((*(short *)(param_1 + 0x178) != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x188),*(longlong *)(param_1 + 0x180),1);
    }
    *(undefined *)(param_1 + 0x359) = 0;
  }
  return;
}


/* address=14149b500 name=FUN_14149b500 */

void FUN_14149b500(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x12) == '\x03') {
    if (*(char *)(param_1 + 0x30) == '\x03') {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      cVar2 = FUN_1406b4dc0(uVar1);
      if (cVar2 != '\0') {
        FUN_1406b9070(uVar1);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x12) == '\x04') {
    if (*(char *)(param_1 + 0x1a8) == '\x03') {
      if (*(char *)(param_1 + 0x1a0) == '\0') {
        if (*(longlong *)(param_1 + 0x170) != 0) {
          thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x178),*(longlong *)(param_1 + 0x170),1);
        }
      }
      else if (*(char *)(param_1 + 0x1a0) == '\x03') {
        uVar1 = *(undefined8 *)(param_1 + 0x198);
        cVar2 = FUN_1406b4dc0(uVar1);
        if (cVar2 != '\0') {
          FUN_1406b9070(uVar1);
        }
        *(undefined *)(param_1 + 0x1a1) = 0;
      }
    }
    FUN_14149e150(param_1 + 200);
    *(undefined *)(param_1 + 0x10) = 0;
    if (*(longlong *)(param_1 + 0xb0) == -1) {
      FUN_14018c8e0(*(undefined8 *)(param_1 + 0xb8));
    }
    FUN_14018c8e0(*(undefined8 *)(param_1 + 0xa8));
    *(undefined *)(param_1 + 0x11) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x18),1);
      return;
    }
  }
  return;
}


/* address=14149ba70 name=FUN_14149ba70 */

void FUN_14149ba70(longlong *param_1)

{
  longlong lVar1;
  code **ppcVar2;
  
  if ((*(short *)(param_1 + 0xb) == 3) && (param_1[0xc] != 0)) {
    (**(code **)(param_1[0xc] + 0x20))(param_1 + 0xf,param_1[0xd],param_1[0xe]);
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    ppcVar2 = (code **)param_1[0x11];
    if (*ppcVar2 != (code *)0x0) {
      (**ppcVar2)(lVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1406dbb00(lVar1,ppcVar2[1],ppcVar2[2]);
    }
  }
  if (0 < *param_1) {
    thunk_FUN_1406dbb00(param_1[1],*param_1,1);
  }
  thunk_FUN_1406dbb00(param_1,0x90,8);
  return;
}


/* address=14149bbf0 name=FUN_14149bbf0 */

/* WARNING: Possible PIC construction at 0x00014149ca4d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014149ca53) */

void FUN_14149bbf0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  short *psVar3;
  longlong *plVar4;
  int iVar5;
  HANDLE hHeap;
  ulonglong uVar6;
  longlong lVar7;
  LPVOID lpMem;
  undefined8 *puVar8;
  undefined8 *unaff_RBP;
  longlong lVar9;
  undefined8 unaff_RSI;
  ulonglong uVar10;
  longlong lVar11;
  longlong lStack_38;
  
  switch(*param_1) {
  case 0:
  case 4:
  case 6:
  case 7:
  case 10:
  case 0xc:
    break;
  case 1:
    plVar4 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar11 = *(longlong *)(param_1 + 8);
      if (lVar11 != -1) {
        LOCK();
        plVar4 = (longlong *)(lVar11 + 8);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          thunk_FUN_1406dbb00(lVar11,0x10,8);
          return;
        }
      }
      return;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 8) != 2) {
      psVar3 = *(short **)(param_1 + 0x10);
      if ((*psVar3 != 0) && (*(longlong *)(psVar3 + 4) != 0)) {
        thunk_FUN_1406dbb00(*(undefined8 *)(psVar3 + 8),*(longlong *)(psVar3 + 4),1);
      }
      if ((psVar3[0x14] != 0) && (*(longlong *)(psVar3 + 0x18) != 0)) {
        thunk_FUN_1406dbb00(*(undefined8 *)(psVar3 + 0x1c),*(longlong *)(psVar3 + 0x18),1);
      }
      thunk_FUN_1406dbb00(psVar3,0x58,8);
      FUN_1402df180(*(undefined8 *)(param_1 + 0x18));
      plVar4 = *(longlong **)(param_1 + 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          FUN_14086d710(param_1 + 0x20);
        }
      }
      plVar4 = *(longlong **)(param_1 + 0x30);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          lVar7 = *(longlong *)(param_1 + 0x30);
          lVar2 = *(longlong *)(param_1 + 0x38);
          lVar11 = lVar7 + 0x10;
          lStack_38 = 0;
          lVar9 = lVar7 + 0x60;
          while (lVar2 != lStack_38) {
            if ((*(short *)(lVar9 + -0x50) != 0) && (*(longlong *)(lVar9 + -0x48) != 0)) {
              thunk_FUN_1406dbb00(*(undefined8 *)(lVar9 + -0x40),*(longlong *)(lVar9 + -0x48),1,
                                  param_4,lVar11);
            }
            if ((*(short *)(lVar9 + -0x28) != 0) && (*(longlong *)(lVar9 + -0x20) != 0)) {
              thunk_FUN_1406dbb00(*(undefined8 *)(lVar9 + -0x18),*(longlong *)(lVar9 + -0x20),1,
                                  param_4,lVar11);
            }
            lStack_38 = lStack_38 + 1;
            FUN_14086c1e0(lVar9);
            lVar9 = lVar9 + 0x110;
          }
          if (lVar7 != -1) {
            LOCK();
            plVar4 = (longlong *)(lVar7 + 8);
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
              thunk_FUN_1406dbb00(lVar7,lVar2 * 0x110 + 0x10,8);
              return;
            }
          }
          return;
        }
      }
    }
    break;
  case 3:
    plVar4 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar11 = *(longlong *)(param_1 + 8);
      bVar1 = *(byte *)(lVar11 + 0x10);
      if ((1 < bVar1 - 2) && (bVar1 != 0)) {
        if (bVar1 == 1) {
          (**(code **)(*(longlong *)(lVar11 + 0x18) + 0x20))
                    (lVar11 + 0x30,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28));
        }
        else if ((1 < ((uint)*(ulonglong *)(lVar11 + 0x18) & 3) - 2) &&
                ((*(ulonglong *)(lVar11 + 0x18) & 3) != 0)) {
          FUN_140713290(&stack0xffffffffffffffe0);
        }
      }
      if (lVar11 != -1) {
        LOCK();
        plVar4 = (longlong *)(lVar11 + 8);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          thunk_FUN_1406dbb00(lVar11,0x38,8);
        }
      }
      return;
    }
    break;
  default:
    if (*(longlong *)(param_1 + 8) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 8),1);
      return;
    }
    break;
  case 8:
    param_1 = param_1 + 8;
    do {
      *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBP;
      *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RSI;
      unaff_RBP = (undefined8 *)((longlong)register0x00000020 + -0x18);
      *unaff_RBP = 0xfffffffffffffffe;
      switch(*param_1) {
      case 1:
        goto code_r0x00014149ca0b;
      case 2:
        param_1 = *(undefined **)(param_1 + 8);
        *(undefined **)((longlong)register0x00000020 + -0x20) = param_1;
        puVar8 = (undefined8 *)((longlong)register0x00000020 + -0x50);
        register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x50);
        *puVar8 = &UNK_14149ca52;
        break;
      default:
        goto LAB_14149ca3e;
      case 5:
      case 10:
        uVar10 = *(ulonglong *)(param_1 + 8);
        goto code_r0x00014149c9f1;
      }
    } while( true );
  case 9:
    plVar4 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      lVar11 = *(longlong *)(param_1 + 8);
      if ((1 < ((uint)*(ulonglong *)(lVar11 + 0x10) & 3) - 2) &&
         ((*(ulonglong *)(lVar11 + 0x10) & 3) != 0)) {
        FUN_140713290(&stack0xffffffffffffffe0);
      }
      if (lVar11 != -1) {
        LOCK();
        plVar4 = (longlong *)(lVar11 + 8);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          thunk_FUN_1406dbb00(lVar11,0x18,8);
        }
      }
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
      lpMem = *(LPVOID *)(param_1 + 0x18);
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
      goto LAB_14149cb15;
    case 8:
      if (*(longlong *)(param_1 + 0x10) == -1 || *(longlong *)(param_1 + 0x10) < -0x7fffffffffffffeb
         ) {
        return;
      }
      lVar11 = *(longlong *)(param_1 + 0x20);
      lStack_38 = 0;
      lVar7 = *(longlong *)(param_1 + 0x18);
      while (lVar11 != lStack_38) {
        lStack_38 = lStack_38 + 1;
        FUN_1408295c0(lVar7);
        lVar7 = lVar7 + 0x70;
      }
      if (*(longlong *)(param_1 + 0x10) == 0) {
        return;
      }
      lpMem = *(LPVOID *)(param_1 + 0x18);
      uVar10 = 8;
      goto code_r0x0001402b4560;
    case 0xb:
      uVar10 = 0x10;
      if ((longlong)*(ulonglong *)(param_1 + 0x10) < 0) {
        uVar10 = *(ulonglong *)(param_1 + 0x10) ^ 0x8000000000000000;
      }
      switch(uVar10) {
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
        goto LAB_14149cb15;
      case 0xd:
        goto code_r0x00014149cc65;
      case 0xe:
code_r0x00014149ccbb:
        if (*(longlong *)(param_1 + 0x18) != 0) {
          thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x18),1);
        }
        if (*(longlong *)(param_1 + 0x30) == 0) {
          return;
        }
        lpMem = *(LPVOID *)(param_1 + 0x38);
        goto code_r0x00014149cce4;
      case 0x10:
        if ((param_1[0x28] == '\0') && (0 < *(longlong *)(param_1 + 0x30))) {
          thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x30),1);
        }
        FUN_140287bf0(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x10) == 0) {
          return;
        }
        lpMem = *(LPVOID *)(param_1 + 0x18);
        break;
      case 0x12:
        if (0 < *(longlong *)(param_1 + 0x30)) {
          thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x30) << 3,8);
        }
        func_0x0001409af710();
        if (*(longlong *)(param_1 + 0x18) == 0) {
          return;
        }
        lpMem = *(LPVOID *)(param_1 + 0x20);
        break;
      default:
code_r0x00014149ccf7:
        plVar4 = *(longlong **)(param_1 + 0x18);
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          param_1 = param_1 + 0x18;
LAB_14149cd09:
          FUN_1402f5550(param_1);
          return;
        }
LAB_14149cb15:
        return;
      }
      uVar10 = 8;
      goto code_r0x0001402b4560;
    case 0xc:
      if (*(longlong *)(param_1 + 0x10) == 7) goto code_r0x00014149ccf7;
      iVar5 = (int)*(longlong *)(param_1 + 0x10);
      if (iVar5 == 3) goto code_r0x00014149ccbb;
      if (iVar5 != 2) {
        return;
      }
code_r0x00014149cc65:
      if (*(longlong *)(param_1 + 0x18) != 0) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x18),1);
      }
      if (*(longlong *)(param_1 + 0x30) == 0) {
        return;
      }
      lpMem = *(LPVOID *)(param_1 + 0x38);
      uVar10 = 8;
      goto code_r0x0001402b4560;
    case 0xd:
      if (*(longlong *)(param_1 + 0x10) == 0) {
        return;
      }
      lpMem = *(LPVOID *)(param_1 + 0x18);
      break;
    default:
      plVar4 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 != 0) {
        return;
      }
      param_1 = param_1 + 0x10;
      goto LAB_14149cd09;
    }
code_r0x00014149cce4:
    uVar10 = 1;
code_r0x0001402b4560:
    *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_RSI;
    if (0x10 < uVar10) {
      lpMem = *(LPVOID *)((longlong)lpMem + -8);
    }
    *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0x1406dbb1e;
    hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(hHeap,0,lpMem);
    return;
  }
  return;
code_r0x00014149ca0b:
  uVar10 = *(ulonglong *)(param_1 + 8);
  uVar6 = 0x1b;
  if ((longlong)uVar10 < 0) {
    uVar6 = uVar10 ^ 0x8000000000000000;
  }
  switch(uVar6) {
  case 0:
    lpMem = *(LPVOID *)(param_1 + 0x10);
    *(undefined **)((longlong)register0x00000020 + -0x50) = &UNK_14149ca8b;
    FUN_1402e3f40(lpMem);
    uVar10 = 8;
    unaff_RSI = *(undefined8 *)((longlong)register0x00000020 + -0x10);
    unaff_RBP = *(undefined8 **)((longlong)register0x00000020 + -8);
    goto code_r0x0001402b4560;
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
LAB_14149ca3e:
    return;
  case 0xb:
  case 0xd:
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0x18);
    break;
  default:
code_r0x00014149c9f1:
    if (uVar10 == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0x10);
  }
  uVar10 = 1;
  unaff_RSI = *(undefined8 *)((longlong)register0x00000020 + -0x10);
  unaff_RBP = *(undefined8 **)((longlong)register0x00000020 + -8);
  goto code_r0x0001402b4560;
}


/* address=14149c430 name=FUN_14149c430 */

void FUN_14149c430(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined *puVar3;
  HANDLE hHeap;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *lpMem;
  ulonglong uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  code **ppcStack_38;
  ulonglong *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar5 = 3;
  if (2 < *param_1) {
    lVar5 = *param_1 - 3;
  }
  switch(lVar5) {
  case 2:
    if (*(int *)(param_1 + 1) == 2) {
      return;
    }
    uVar4 = param_1[0x40];
    if ((-0x7fffffffffffffff < (longlong)uVar4) && (1 < uVar4 + 1)) {
      puStack_60 = &UNK_14149c4b2;
      thunk_FUN_1406dbb00(param_1[0x41],uVar4,1);
    }
    if (0 < (longlong)param_1[10]) {
      puStack_60 = &UNK_14149c4ca;
      thunk_FUN_1406dbb00(param_1[0xb],param_1[10],1);
    }
    if (0 < (longlong)param_1[0xd]) {
      puStack_60 = &UNK_14149c4e2;
      thunk_FUN_1406dbb00(param_1[0xe],param_1[0xd],1);
    }
    if (0 < (longlong)param_1[0x10]) {
      puStack_60 = &UNK_14149c500;
      thunk_FUN_1406dbb00(param_1[0x11],param_1[0x10],1);
    }
    if (0 < (longlong)param_1[0x13]) {
      puStack_60 = &UNK_14149c51e;
      thunk_FUN_1406dbb00(param_1[0x14],param_1[0x13],1);
    }
    if (0 < (longlong)param_1[0x16]) {
      puStack_60 = &UNK_14149c53c;
      thunk_FUN_1406dbb00(param_1[0x17],param_1[0x16],1);
    }
    if (*(int *)(param_1 + 3) != 2) {
      puStack_60 = &UNK_14149c54b;
      FUN_140019290(param_1 + 3);
    }
    uVar4 = param_1[0x19];
    if (uVar4 != 0xffffffffffffffff) {
      uVar6 = param_1[0x1b];
      if (uVar6 != 0) {
        puVar7 = (undefined8 *)(param_1[0x1a] + 0x38);
        do {
          if (puVar7[-7] != 0) {
            puStack_60 = &UNK_14149c5a5;
            thunk_FUN_1406dbb00(puVar7[-6],puVar7[-7],1);
          }
          lVar5 = puVar7[-4];
          if ((lVar5 != -1) && (lVar5 != 0)) {
            puStack_60 = &UNK_14149c5c3;
            thunk_FUN_1406dbb00(puVar7[-3],lVar5,1);
          }
          lVar5 = puVar7[-1];
          if ((lVar5 != -1) && (lVar5 != 0)) {
            puStack_60 = &UNK_14149c5ea;
            thunk_FUN_1406dbb00(*puVar7,lVar5 * 0x11,1);
          }
          puVar7 = puVar7 + 9;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        uVar4 = param_1[0x19];
      }
      if (uVar4 != 0) {
        puStack_60 = &UNK_14149c6a6;
        thunk_FUN_1406dbb00(param_1[0x1a],uVar4 * 0x48,8);
      }
    }
    if (param_1[0x34] != 0xfffffffffffffffe) {
      puStack_60 = &UNK_14149c6bc;
      FUN_1405d9500(param_1 + 0x34);
    }
    if (param_1[0x1c] != 0xffffffffffffffff) {
      plVar2 = (longlong *)param_1[0x22];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      puStack_30 = param_1;
      if (*plVar2 == 0) {
        puStack_60 = &UNK_14149c6e7;
        FUN_140677a70(param_1 + 0x22);
      }
      param_1 = puStack_30;
      if (puStack_30[0x1c] != 0) {
        puStack_60 = &UNK_14149c70a;
        thunk_FUN_1406dbb00(puStack_30[0x1d],puStack_30[0x1c],1);
      }
      if (param_1[0x1f] != 0) {
        puStack_60 = &UNK_14149c728;
        thunk_FUN_1406dbb00(param_1[0x20],param_1[0x1f],1);
      }
    }
    uVar4 = param_1[0x24];
    if (uVar4 == 0xffffffffffffffff) {
      return;
    }
    if (uVar4 != 0) {
      puStack_60 = &UNK_14149c74c;
      thunk_FUN_1406dbb00(param_1[0x25],uVar4,1);
    }
    if (param_1[0x2f] == 0) {
      return;
    }
    lpMem = (ulonglong *)param_1[0x30];
    pcVar8 = (code *)0x1;
    goto code_r0x0001402b4560;
  case 3:
    uStack_28 = 0xfffffffffffffffe;
    if (*(int *)param_1 != 2) {
      uVar4 = param_1[0x15];
      if (uVar4 != 0xffffffffffffffff) {
        uVar6 = param_1[0x17];
        if (uVar6 != 0) {
          puVar7 = (undefined8 *)(param_1[0x16] + 0x38);
          do {
            if (puVar7[-7] != 0) {
              thunk_FUN_1406dbb00(puVar7[-6],puVar7[-7],1);
            }
            lVar5 = puVar7[-4];
            if ((lVar5 != -1) && (lVar5 != 0)) {
              thunk_FUN_1406dbb00(puVar7[-3],lVar5,1);
            }
            lVar5 = puVar7[-1];
            if ((lVar5 != -1) && (lVar5 != 0)) {
              thunk_FUN_1406dbb00(*puVar7,lVar5 * 0x11,1);
            }
            puVar7 = puVar7 + 9;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          uVar4 = param_1[0x15];
        }
        if (uVar4 != 0) {
          thunk_FUN_1406dbb00(param_1[0x16],uVar4 * 0x48,8);
        }
      }
      if (*(int *)(param_1 + 0xb) != 2) {
        FUN_140019290(param_1 + 0xb);
      }
      if (0 < (longlong)param_1[0x18]) {
        thunk_FUN_1406dbb00(param_1[0x19],param_1[0x18],1);
      }
      if (0 < (longlong)param_1[0x1b]) {
        thunk_FUN_1406dbb00(param_1[0x1c],param_1[0x1b],1);
      }
      if (0 < (longlong)param_1[0x1e]) {
        thunk_FUN_1406dbb00(param_1[0x1f],param_1[0x1e],1);
      }
      if (0 < (longlong)param_1[0x21]) {
        thunk_FUN_1406dbb00(param_1[0x22],param_1[0x21],1);
      }
      puStack_30 = param_1;
      if (param_1[0x24] != 0xffffffffffffffff) {
        plVar2 = (longlong *)param_1[0x2a];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          FUN_140677a70(param_1 + 0x2a);
        }
        param_1 = puStack_30;
        if (puStack_30[0x24] != 0) {
          thunk_FUN_1406dbb00(puStack_30[0x25],puStack_30[0x24],1);
        }
        if (param_1[0x27] != 0) {
          thunk_FUN_1406dbb00(param_1[0x28],param_1[0x27],1);
        }
      }
      uVar4 = param_1[0x2c];
      if (uVar4 != 0xffffffffffffffff) {
        if (uVar4 != 0) {
          thunk_FUN_1406dbb00(param_1[0x2d],uVar4 * 0x11,1);
        }
        if (param_1[0x2f] != 0) {
          thunk_FUN_1406dbb00(param_1[0x30],param_1[0x2f] * 0x11,1);
        }
      }
      if (param_1[0x32] != 0xffffffffffffffff) {
        FUN_140219cb0(param_1 + 0x32);
      }
      uVar4 = param_1[0x4a];
      if (uVar4 != 0xffffffffffffffff) {
        if (uVar4 != 0) {
          thunk_FUN_1406dbb00(param_1[0x4b],uVar4,1);
        }
        if (param_1[0x55] != 0) {
          thunk_FUN_1406dbb00(param_1[0x56],param_1[0x55],1);
        }
      }
      if (0 < (longlong)param_1[0x5a]) {
        thunk_FUN_1406dbb00(param_1[0x5b],param_1[0x5a] * 0x11,1);
      }
      if (param_1[7] != 0) {
        puVar3 = (undefined *)param_1[8];
        if (puVar3 == (undefined *)0x0) {
          uStack_50 = 0;
        }
        else {
          uStack_78 = param_1[9];
          uStack_50 = param_1[10];
          uStack_88 = 0;
          uStack_68 = 0;
          puStack_80 = puVar3;
          puStack_60 = puVar3;
          uStack_58 = uStack_78;
        }
        uStack_90 = (ulonglong)(puVar3 != (undefined *)0x0);
        uStack_70 = uStack_90;
        FUN_141281b50(&lStack_48,&uStack_90);
        param_1 = puStack_30;
        if (lStack_48 != 0) {
          do {
            lVar5 = *(longlong *)(lStack_48 + 0x168 + (longlong)ppcStack_38 * 0x18);
            if (lVar5 != 0) {
              thunk_FUN_1406dbb00(*(undefined8 *)(lStack_48 + (longlong)ppcStack_38 * 0x18 + 0x170),
                                  lVar5,1);
            }
            FUN_141281b50(&lStack_48,&uStack_90);
            param_1 = puStack_30;
          } while (lStack_48 != 0);
        }
      }
      uVar4 = param_1[0x5d];
      if (uVar4 != 0xffffffffffffffff) {
        uVar6 = param_1[0x5f];
        if (uVar6 != 0) {
          puVar7 = (undefined8 *)(param_1[0x5e] + 0x20);
          do {
            if (puVar7[-4] != 0) {
              thunk_FUN_1406dbb00(puVar7[-3],puVar7[-4],1);
            }
            lVar5 = puVar7[-1];
            if ((lVar5 != -1) && (lVar5 != 0)) {
              thunk_FUN_1406dbb00(*puVar7,lVar5,1);
            }
            puVar7 = puVar7 + 6;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          uVar4 = param_1[0x5d];
        }
        if (uVar4 != 0) {
          thunk_FUN_1406dbb00(param_1[0x5e],uVar4 * 0x30,8);
        }
      }
      uVar4 = param_1[0x60];
      if (uVar4 != 0xffffffffffffffff) {
        if (uVar4 != 0) {
          thunk_FUN_1406dbb00(param_1[0x61],uVar4,1);
        }
        if (0 < (longlong)param_1[99]) {
          thunk_FUN_1406dbb00(param_1[100],param_1[99],1);
          return;
        }
      }
    }
    return;
  case 4:
    puStack_30 = (ulonglong *)param_1[1];
    ppcStack_38 = (code **)param_1[2];
    if (*ppcStack_38 != (code *)0x0) {
      puStack_60 = &UNK_14149c628;
      (**ppcStack_38)(puStack_30);
    }
    break;
  case 5:
    puStack_30 = (ulonglong *)param_1[1];
    ppcStack_38 = (code **)param_1[2];
    if (*ppcStack_38 != (code *)0x0) {
      puStack_60 = &UNK_14149c649;
      (**ppcStack_38)(puStack_30);
    }
    break;
  case 6:
    if (*(int *)(param_1 + 1) != 2) {
      if (*(char *)(param_1 + 1) == '\0') {
        uVar4 = param_1[3];
        uVar6 = param_1[4];
        if (uVar6 != 0) {
          puVar7 = (undefined8 *)(uVar4 + 0x20);
          do {
            uVar1 = puVar7[-1];
            if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
              uStack_50 = 0x1400193a6;
              thunk_FUN_1406dbb00(*puVar7,uVar1,1);
            }
            puVar7 = puVar7 + 6;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (param_1[2] != 0) {
          uStack_50 = 0x1400193c7;
          thunk_FUN_1406dbb00(uVar4,param_1[2] * 0x30,8);
        }
        uVar4 = param_1[6];
        uVar6 = param_1[7];
        if (uVar6 != 0) {
          puVar7 = (undefined8 *)(uVar4 + 0x20);
          do {
            lVar5 = puVar7[-4];
            if ((lVar5 != -1) && (lVar5 != 0)) {
              uStack_50 = 0x140019407;
              thunk_FUN_1406dbb00(puVar7[-3],lVar5,1);
            }
            uVar1 = puVar7[-1];
            if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
              uStack_50 = 0x140019424;
              thunk_FUN_1406dbb00(*puVar7,uVar1,1);
            }
            puVar7 = puVar7 + 6;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
        uVar4 = param_1[3];
        uVar6 = param_1[4];
        if (uVar6 != 0) {
          puVar7 = (undefined8 *)(uVar4 + 0x20);
          do {
            uVar1 = puVar7[-1];
            if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
              uStack_50 = 0x1400192e6;
              thunk_FUN_1406dbb00(*puVar7,uVar1,1);
            }
            puVar7 = puVar7 + 6;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (param_1[2] != 0) {
          uStack_50 = 0x140019307;
          thunk_FUN_1406dbb00(uVar4,param_1[2] * 0x30,8);
        }
        uVar4 = param_1[6];
        uVar6 = param_1[7];
        if (uVar6 != 0) {
          puVar7 = (undefined8 *)(uVar4 + 0x20);
          do {
            lVar5 = puVar7[-4];
            if ((lVar5 != -1) && (lVar5 != 0)) {
              uStack_50 = 0x14001934b;
              thunk_FUN_1406dbb00(puVar7[-3],lVar5,1);
            }
            uVar1 = puVar7[-1];
            if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
              uStack_50 = 0x140019368;
              thunk_FUN_1406dbb00(*puVar7,uVar1,1);
            }
            puVar7 = puVar7 + 6;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      if (param_1[5] == 0) {
        return;
      }
      thunk_FUN_1406dbb00(uVar4,param_1[5] * 0x30,8);
      return;
    }
  default:
    goto LAB_14149c76a;
  }
  if (ppcStack_38[1] != (code *)0x0) {
    pcVar8 = ppcStack_38[2];
    lpMem = puStack_30;
code_r0x0001402b4560:
    if (&DAT_00000010 < pcVar8) {
      lpMem = (ulonglong *)lpMem[-1];
    }
    uStack_40 = 0x1406dbb1e;
    hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(hHeap,0,lpMem);
    return;
  }
LAB_14149c76a:
  return;
}


/* address=14149c840 name=FUN_14149c840 */

void FUN_14149c840(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  FUN_14149c430(param_1 + 2);
  if ((*param_1 != 0) && (lVar1 = param_1[1], lVar1 != 0)) {
    uVar3 = FUN_14069e1b0(lVar1 + 0x30);
    if ((uVar3 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x10))(*(undefined8 *)(lVar1 + 0x28));
    }
    plVar2 = (longlong *)param_1[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1404a4140();
        return;
      }
    }
  }
  return;
}


/* address=14149cae0 name=FUN_14149cae0 */

void FUN_14149cae0(undefined *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  HANDLE hHeap;
  longlong lVar4;
  LPVOID lpMem;
  ulonglong uVar5;
  longlong lStack_38;
  
  switch(*param_1) {
  case 0:
  case 1:
    if (*(longlong *)(param_1 + 8) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0x10);
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
    goto LAB_14149cb15;
  case 8:
    if (*(longlong *)(param_1 + 8) == -1 || *(longlong *)(param_1 + 8) < -0x7fffffffffffffeb) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    lStack_38 = 0;
    lVar4 = *(longlong *)(param_1 + 0x10);
    while (lVar1 != lStack_38) {
      lStack_38 = lStack_38 + 1;
      FUN_1408295c0(lVar4);
      lVar4 = lVar4 + 0x70;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0x10);
    uVar5 = 8;
    goto code_r0x00014149ccea;
  case 0xb:
    uVar5 = 0x10;
    if ((longlong)*(ulonglong *)(param_1 + 8) < 0) {
      uVar5 = *(ulonglong *)(param_1 + 8) ^ 0x8000000000000000;
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
      goto LAB_14149cb15;
    case 0xd:
      goto code_r0x00014149cc65;
    case 0xe:
code_r0x00014149ccbb:
      if (*(longlong *)(param_1 + 0x10) != 0) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x10),1);
      }
      if (*(longlong *)(param_1 + 0x28) == 0) {
        return;
      }
      lpMem = *(LPVOID *)(param_1 + 0x30);
      goto code_r0x00014149cce4;
    case 0x10:
      if ((param_1[0x20] == '\0') && (0 < *(longlong *)(param_1 + 0x28))) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x28),1);
      }
      FUN_140287bf0(param_1 + 8);
      if (*(longlong *)(param_1 + 8) == 0) {
        return;
      }
      lpMem = *(LPVOID *)(param_1 + 0x10);
      break;
    case 0x12:
      if (0 < *(longlong *)(param_1 + 0x28)) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x28) << 3,8);
      }
      func_0x0001409af710();
      if (*(longlong *)(param_1 + 0x10) == 0) {
        return;
      }
      lpMem = *(LPVOID *)(param_1 + 0x18);
      break;
    default:
code_r0x00014149ccf7:
      plVar2 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        param_1 = param_1 + 0x10;
LAB_14149cd09:
        FUN_1402f5550(param_1);
        return;
      }
LAB_14149cb15:
      return;
    }
    uVar5 = 8;
    goto code_r0x00014149ccea;
  case 0xc:
    if (*(longlong *)(param_1 + 8) == 7) goto code_r0x00014149ccf7;
    iVar3 = (int)*(longlong *)(param_1 + 8);
    if (iVar3 == 3) goto code_r0x00014149ccbb;
    if (iVar3 != 2) {
      return;
    }
code_r0x00014149cc65:
    if (*(longlong *)(param_1 + 0x10) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x10),1);
    }
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0x30);
    uVar5 = 8;
    goto code_r0x00014149ccea;
  case 0xd:
    if (*(longlong *)(param_1 + 8) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0x10);
    break;
  default:
    plVar2 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 != 0) {
      return;
    }
    param_1 = param_1 + 8;
    goto LAB_14149cd09;
  }
code_r0x00014149cce4:
  uVar5 = 1;
code_r0x00014149ccea:
  if (0x10 < uVar5) {
    lpMem = *(LPVOID *)((longlong)lpMem + -8);
  }
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,lpMem);
  return;
}


/* address=14149cea0 name=FUN_14149cea0 */

void FUN_14149cea0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14149f720(param_1 + 0x4e8);
  FUN_14149f2c0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x5d8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1405bda40(param_1 + 0x5d8);
    return;
  }
  return;
}


/* address=14149cf60 name=FUN_14149cf60 */

void FUN_14149cf60(longlong *param_1)

{
  HANDLE hHeap;
  ulonglong uVar1;
  LPVOID lpMem;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar1 = param_1[3] ^ 0x8000000000000000;
  uVar3 = 0xb;
  if (uVar1 < 0xd) {
    uVar3 = uVar1;
  }
  switch(uVar3) {
  case 4:
    lpMem = (LPVOID)param_1[1];
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)((longlong)lpMem + 8);
      do {
        if (puVar4[-1] != 0) {
          thunk_FUN_1406dbb00(*puVar4,puVar4[-1],1);
        }
        puVar4 = puVar4 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    break;
  case 5:
    lpMem = (LPVOID)param_1[1];
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)((longlong)lpMem + 8);
      do {
        if (puVar4[-1] != 0) {
          thunk_FUN_1406dbb00(*puVar4,puVar4[-1],1);
        }
        puVar4 = puVar4 + 3;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    break;
  case 6:
    if (*param_1 < 1) {
      return;
    }
    lpMem = (LPVOID)param_1[1];
    goto code_r0x00014149d05b;
  default:
    goto LAB_14149d06f;
  case 0xb:
    if (0xfffffffffffffffb < param_1[3] - 1U) {
      return;
    }
    lpMem = (LPVOID)param_1[4];
code_r0x00014149d05b:
    uVar3 = 1;
    goto code_r0x00014149d061;
  }
  if (*param_1 == 0) {
LAB_14149d06f:
    return;
  }
  uVar3 = 8;
code_r0x00014149d061:
  if (0x10 < uVar3) {
    lpMem = *(LPVOID *)((longlong)lpMem + -8);
  }
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,lpMem);
  return;
}


/* address=14149d080 name=FUN_14149d080 */

void FUN_14149d080(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x60) != -1) {
    plVar1 = *(longlong **)(param_1 + 0x78);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_14052d620(param_1 + 0x78);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x68),*(longlong *)(param_1 + 0x60),1);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0xb8);
  if ((-0x7fffffffffffffff < lVar2) && (1 < lVar2 + 1U)) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0xc0),lVar2,1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xd0);
  FUN_14149f720();
  thunk_FUN_1406dbb00(uVar3,0xf0,8);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if (lVar2 != 0) {
    FUN_14149f2c0();
    thunk_FUN_1406dbb00(lVar2,0x4e8,8);
    return;
  }
  return;
}


/* address=14149d260 name=FUN_14149d260 */

void FUN_14149d260(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1406a7e10(param_1);
  }
  plVar1 = param_1[6];
  if (1 < (longlong)plVar1 + 1U) {
    if (plVar1 != (longlong *)0xfffffffffffffffe) {
      thunk_FUN_1406dbb00(param_1[7],plVar1,1);
      return;
    }
    plVar1 = param_1[7];
    cVar2 = FUN_1406b4dc0(plVar1);
    if (cVar2 != '\0') {
      FUN_1406b9070(plVar1);
      return;
    }
  }
  return;
}


/* address=14149d310 name=FUN_14149d310 */

void FUN_14149d310(ushort *param_1)

{
  ushort uVar1;
  HANDLE hHeap;
  longlong lVar2;
  LPVOID lpMem;
  ulonglong uVar3;
  short sVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lStack_48;
  
  uVar1 = *param_1;
  sVar4 = 0x11;
  if (1 < uVar1) {
    sVar4 = uVar1 - 2;
  }
  switch(sVar4) {
  case 3:
    if (*(longlong *)(param_1 + 4) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 4),1);
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0x14);
    break;
  case 4:
  case 0xb:
  case 0xd:
  case 0x10:
  case 0x13:
  case 0x15:
  case 0x18:
    if (*(longlong *)(param_1 + 4) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 8);
    break;
  case 6:
    FUN_141282c80(param_1 + 0x10);
    if (*(longlong *)(param_1 + 4) < 1) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 8);
    break;
  case 7:
    if (*(longlong *)(param_1 + 8) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 4),*(longlong *)(param_1 + 8),1);
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0xc);
    break;
  case 8:
    if ((param_1[0x10] != 0) && (*(longlong *)(param_1 + 0x14) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x14),1);
    }
    if ((param_1[0x24] != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x2c),*(longlong *)(param_1 + 0x28),1);
    }
    lVar8 = *(longlong *)(param_1 + 0xc);
    lStack_48 = 0;
    lVar2 = *(longlong *)(param_1 + 8);
    while (lVar8 != lStack_48) {
      lStack_48 = lStack_48 + 1;
      FUN_1412342a0(lVar2);
      lVar2 = lVar2 + 0x28;
    }
    goto code_r0x00014149d570;
  case 10:
    if (*(longlong *)(param_1 + 0x30) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x2c),*(longlong *)(param_1 + 0x30),1);
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x34),*(longlong *)(param_1 + 0x38),1);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x3c),*(longlong *)(param_1 + 0x40),1);
    }
  case 2:
  case 5:
  case 9:
  case 0xc:
  case 0xf:
  case 0x12:
    if ((param_1[4] != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0xc),*(longlong *)(param_1 + 8),1);
    }
    if ((param_1[0x18] == 0) || (*(longlong *)(param_1 + 0x1c) == 0)) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0x20);
    break;
  case 0xe:
    lVar8 = *(longlong *)(param_1 + 0xc);
    if (lVar8 != 0) {
      puVar6 = (ulonglong *)(*(longlong *)(param_1 + 8) + 8);
      do {
        uVar7 = *puVar6;
        uVar3 = uVar7 ^ 0x8000000000000000;
        if (-1 < (longlong)uVar7) {
          uVar3 = 2;
        }
        if (uVar3 != 0) {
          lVar2 = 8;
          if (uVar3 == 1) {
            uVar7 = puVar6[1];
            lVar2 = 0x10;
          }
          if (uVar7 != 0) {
            thunk_FUN_1406dbb00(*(undefined8 *)((longlong)puVar6 + lVar2),uVar7,1);
          }
        }
        puVar6 = puVar6 + 5;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (*(longlong *)(param_1 + 4) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 8);
    goto code_r0x00014149d659;
  case 0x11:
    if ((uVar1 != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 4),1);
    }
    if ((param_1[0x14] != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x1c),*(longlong *)(param_1 + 0x18),1);
    }
    if ((param_1[0x28] != 0) && (*(longlong *)(param_1 + 0x2c) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x2c),1);
    }
    if (param_1[0x3c] == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 0x44);
    break;
  case 0x14:
    if ((param_1[0x10] != 0) && (*(longlong *)(param_1 + 0x14) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x18),*(longlong *)(param_1 + 0x14),1);
    }
    if ((param_1[0x24] != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x2c),*(longlong *)(param_1 + 0x28),1);
    }
    lVar8 = *(longlong *)(param_1 + 0xc);
    lStack_48 = 0;
    lVar2 = *(longlong *)(param_1 + 8);
    while (lVar8 != lStack_48) {
      lStack_48 = lStack_48 + 1;
      FUN_1412342a0(lVar2);
      lVar2 = lVar2 + 0x28;
    }
code_r0x00014149d570:
    if (*(longlong *)(param_1 + 4) == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 8);
code_r0x00014149d659:
    uVar7 = 8;
    goto code_r0x00014149d4d8;
  case 0x16:
    if (param_1[0x1c] < 2) {
      if ((param_1[0x1c] != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x24),*(longlong *)(param_1 + 0x20),1);
      }
      if ((param_1[0x30] != 0) && (*(longlong *)(param_1 + 0x34) != 0)) {
        thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x34),1);
      }
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 4),1);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x14),*(longlong *)(param_1 + 0x10),1);
      return;
    }
    return;
  case 0x17:
    lVar8 = *(longlong *)(param_1 + 8);
    if (lVar8 == 0) {
      return;
    }
    lpMem = *(LPVOID *)(param_1 + 4);
    plVar5 = (longlong *)((longlong)lpMem + 8);
    do {
      if (*plVar5 != 0) {
        thunk_FUN_1406dbb00(plVar5[-1],*plVar5,1);
      }
      plVar5 = plVar5 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    uVar7 = 8;
    goto code_r0x00014149d4d8;
  default:
    return;
  }
  uVar7 = 1;
code_r0x00014149d4d8:
  if (0x10 < uVar7) {
    lpMem = *(LPVOID *)((longlong)lpMem + -8);
  }
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,lpMem);
  return;
}


/* address=14149d8e0 name=FUN_14149d8e0 */

void FUN_14149d8e0(short *param_1)

{
  if ((*param_1 != 0) && (*(longlong *)(param_1 + 4) != 0)) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 4),1);
  }
  if ((param_1[0x14] != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x1c),*(longlong *)(param_1 + 0x18),1);
  }
  FUN_14149d310(param_1 + 0x28);
  return;
}


/* address=14149d940 name=FUN_14149d940 */

void FUN_14149d940(ulonglong *param_1)

{
  HANDLE hHeap;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong **pplVar7;
  code *pcVar8;
  ulonglong *puVar9;
  code **ppcVar10;
  ulonglong *puStack_20;
  
  uVar6 = 0xe;
  if ((longlong)*param_1 < 0) {
    uVar6 = *param_1 ^ 0x8000000000000000;
  }
  switch(uVar6) {
  case 0:
    uVar6 = param_1[1];
    goto code_r0x00014149da9c;
  case 1:
    plVar4 = (longlong *)param_1[1];
    goto FUN_14018c8e0;
  case 2:
    puStack_20 = (ulonglong *)param_1[2];
    if (puStack_20 == (ulonglong *)0x0) {
      return;
    }
    ppcVar10 = (code **)param_1[3];
    if (*ppcVar10 != (code *)0x0) {
      (**ppcVar10)(puStack_20);
    }
code_r0x00014149dafa:
    if (ppcVar10[1] == (code *)0x0) {
      return;
    }
    pcVar8 = ppcVar10[2];
    goto code_r0x0001402b4560;
  case 3:
    uVar6 = param_1[1];
    uVar2 = 5;
    if ((longlong)uVar6 < 0) {
      uVar2 = uVar6 ^ 0x8000000000000000;
    }
    switch(uVar2) {
    case 0:
      puStack_20 = (ulonglong *)param_1[2];
      ppcVar10 = (code **)param_1[3];
      if (*ppcVar10 != (code *)0x0) {
        (**ppcVar10)(puStack_20);
      }
      break;
    case 1:
      puStack_20 = (ulonglong *)param_1[2];
      ppcVar10 = (code **)param_1[3];
      if (*ppcVar10 != (code *)0x0) {
        (**ppcVar10)(puStack_20);
      }
      break;
    case 2:
      return;
    case 3:
    case 4:
code_r0x00014149da82:
      if (param_1[2] == 0) {
        return;
      }
      puStack_20 = (ulonglong *)param_1[3];
      goto code_r0x00014149d9a0;
    case 5:
      if (uVar6 != 0) {
        thunk_FUN_1406dbb00(param_1[2],uVar6,1);
      }
code_r0x00014149dc08:
      if (param_1[4] == 0) {
        return;
      }
      puStack_20 = (ulonglong *)param_1[5];
      goto code_r0x00014149d9a0;
    default:
      puVar9 = param_1 + 2;
      FUN_1406a9490();
      if (*puVar9 == 0) {
        return;
      }
      puStack_20 = (ulonglong *)param_1[3];
      pcVar8 = (code *)&DAT_00000008;
      goto code_r0x0001402b4560;
    }
    if (ppcVar10[1] == (code *)0x0) {
      return;
    }
    pcVar8 = ppcVar10[2];
    goto code_r0x0001402b4560;
  case 4:
    if ((*(char *)(param_1 + 1) == '\x01') && (param_1[2] != 0)) {
      pplVar7 = (longlong **)(param_1 + 2);
code_r0x00014149db82:
                    /* WARNING: Could not recover jumptable at 0x00014067ad86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**pplVar7 + 0x10))();
      return;
    }
    break;
  case 5:
    lVar3 = 4;
    if (2 < param_1[1]) {
      lVar3 = param_1[1] - 3;
    }
    switch(lVar3) {
    case 0:
      uVar6 = param_1[2];
      break;
    case 1:
      plVar4 = (longlong *)param_1[2];
      goto FUN_14018c8e0;
    case 2:
      puStack_20 = (ulonglong *)param_1[3];
      if (puStack_20 == (ulonglong *)0x0) {
        return;
      }
      ppcVar10 = (code **)param_1[4];
      if (*ppcVar10 != (code *)0x0) {
        (**ppcVar10)(puStack_20);
      }
      goto code_r0x00014149dafa;
    case 3:
      goto code_r0x00014149da82;
    case 4:
      FUN_14037e860(param_1 + 1);
      if (0 < (longlong)param_1[0xd]) {
        thunk_FUN_1406dbb00(param_1[0xe],param_1[0xd],1);
      }
      if ((longlong)param_1[0x10] < 1) {
        return;
      }
      puStack_20 = (ulonglong *)param_1[0x11];
      goto code_r0x00014149d9a0;
    case 5:
    case 6:
    case 7:
    case 0xc:
    case 0xd:
      goto LAB_14149de18;
    case 8:
      plVar4 = (longlong *)param_1[2];
FUN_14149ba70:
      if ((*(short *)(plVar4 + 0xb) == 3) && (plVar4[0xc] != 0)) {
        (**(code **)(plVar4[0xc] + 0x20))(plVar4 + 0xf,plVar4[0xd],plVar4[0xe]);
      }
      lVar3 = plVar4[0x10];
      if (lVar3 != 0) {
        ppcVar10 = (code **)plVar4[0x11];
        if (*ppcVar10 != (code *)0x0) {
          (**ppcVar10)(lVar3);
        }
        if (ppcVar10[1] != (code *)0x0) {
          thunk_FUN_1406dbb00(lVar3,ppcVar10[1],ppcVar10[2]);
        }
      }
      if (0 < *plVar4) {
        thunk_FUN_1406dbb00(plVar4[1],*plVar4,1);
      }
      thunk_FUN_1406dbb00(plVar4,0x90,8);
      return;
    case 9:
      uVar6 = param_1[2];
      lVar3 = 2;
      if (2 < uVar6) {
        lVar3 = uVar6 - 3;
      }
      switch(lVar3) {
      case 0:
        if ((param_1[3] != 7) && ((int)param_1[3] != 10)) {
          return;
        }
        goto code_r0x00014149dc08;
      case 1:
        if (param_1[3] == 0) {
          return;
        }
        if (*(uint *)(param_1 + 4) < 4) {
          return;
        }
        uVar6 = param_1[5];
        break;
      case 2:
        if (uVar6 == 0) {
          return;
        }
        if (0x8000000000000014 < param_1[3]) {
          return;
        }
        if ((longlong)param_1[3] < 1) {
          return;
        }
code_r0x00014149dd0a:
        puStack_20 = (ulonglong *)param_1[4];
        goto code_r0x00014149d9a0;
      default:
        goto LAB_14149de18;
      case 5:
        uVar6 = param_1[3];
        break;
      case 6:
        if (param_1[3] == 0) {
          return;
        }
        pplVar7 = (longlong **)(param_1 + 3);
        goto code_r0x00014149db82;
      case 8:
        param_1 = param_1 + 3;
        goto code_r0x00014149ddb0;
      }
      break;
    case 10:
      param_1 = param_1 + 2;
code_r0x00014149ddb0:
      switch(*param_1) {
      case 0:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149be2f;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149be2f:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 1:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149c1af;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149c1af:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 2:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149c02f;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149c02f:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 3:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149c0af;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149c0af:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 4:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149bf2f;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149bf2f:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 5:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149c22f;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149c22f:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 6:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149c2af;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149c2af:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 7:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149c12f;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149c12f:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 8:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149c3af;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149c3af:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 9:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149bfaf;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149bfaf:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 10:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149c32f;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149c32f:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      case 0xb:
        puStack_20 = (ulonglong *)param_1[2];
        uVar6 = param_1[3];
        if (uVar6 != 0) {
          puVar9 = puStack_20 + 2;
          do {
            uVar2 = puVar9[-2];
            uVar1 = uVar2 ^ 0x8000000000000000;
            if (-1 < (longlong)uVar2) {
              uVar1 = 2;
            }
            if (uVar1 != 0) {
              if (uVar1 == 1) {
                puVar5 = (undefined *)puVar9[-1];
                uVar2 = *puVar9;
                *puVar5 = 0;
                if (uVar2 != 0) goto code_r0x00014149beaf;
              }
              else if (uVar2 != 0) {
                puVar5 = (undefined *)puVar9[-1];
code_r0x00014149beaf:
                thunk_FUN_1406dbb00(puVar5,uVar2,1);
              }
            }
            puVar9 = puVar9 + 5;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        break;
      default:
        goto LAB_14149c416;
      }
      if (param_1[1] == 0) {
LAB_14149c416:
        return;
      }
      pcVar8 = (code *)&DAT_00000008;
      goto code_r0x0001402b4560;
    case 0xb:
      lVar3 = 3;
      if (0x8000000000000007 < param_1[2]) {
        lVar3 = param_1[2] + 0x7ffffffffffffff8;
      }
      if (lVar3 == 0) {
        return;
      }
      if (lVar3 == 1) {
        plVar4 = (longlong *)param_1[3];
        goto FUN_14149ba70;
      }
      if (lVar3 == 2) goto code_r0x00014149dcfd;
    case 0x10:
      uVar6 = param_1[2];
      uVar2 = 8;
      if ((longlong)uVar6 < 0) {
        uVar2 = uVar6 ^ 0x8000000000000000;
      }
      switch(uVar2) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 7:
        goto LAB_14149c958;
      case 5:
      case 6:
        uVar6 = param_1[3];
        lVar3 = 0x10;
        break;
      default:
        if (0 < (longlong)param_1[5]) {
          thunk_FUN_1406dbb00(param_1[6],param_1[5],1);
        }
        lVar3 = 8;
      }
      if (uVar6 != 0) {
        thunk_FUN_1406dbb00(*(undefined8 *)((longlong)(param_1 + 2) + lVar3),uVar6,1);
        return;
      }
LAB_14149c958:
      return;
    case 0xe:
      uVar6 = param_1[2];
      if (-0x7fffffffffffffff < (longlong)uVar6) {
        if (uVar6 != 0) {
          thunk_FUN_1406dbb00(param_1[3],uVar6,1);
        }
        if (param_1[5] != 0) {
          thunk_FUN_1406dbb00(param_1[6],param_1[5],1);
          return;
        }
      }
      return;
    case 0xf:
      if ((param_1[2] == 0) || ((int)param_1[2] == 1)) {
code_r0x00014149dcfd:
        if (param_1[3] == 0) {
          return;
        }
        goto code_r0x00014149dd0a;
      }
      puStack_20 = (ulonglong *)param_1[3];
      uVar6 = *puStack_20;
      uVar2 = 0x11;
      if ((longlong)uVar6 < 0) {
        uVar2 = uVar6 ^ 0x8000000000000000;
      }
      switch(uVar2) {
      case 3:
      case 7:
        uVar6 = puStack_20[1];
        lVar3 = 0x10;
        goto code_r0x00014149ded9;
      case 0x10:
        plVar4 = (longlong *)puStack_20[1];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          func_0x0001415769b0(puStack_20 + 1);
        }
        break;
      case 0x11:
        lVar3 = 8;
code_r0x00014149ded9:
        if (uVar6 != 0) {
          thunk_FUN_1406dbb00(*(undefined8 *)((longlong)puStack_20 + lVar3),uVar6,1);
        }
      }
      pcVar8 = (code *)&DAT_00000008;
      goto code_r0x0001402b4560;
    default:
      if (*(uint *)(param_1 + 2) < 2) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014068c136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (***(code ***)param_1[3])();
      return;
    }
code_r0x00014149da9c:
    if ((1 < ((uint)uVar6 & 3) - 2) && ((uVar6 & 3) != 0)) {
      FUN_140713290(&stack0xffffffffffffffd0);
      return;
    }
    break;
  case 7:
  case 0xf:
    if (param_1[1] == 0) {
      return;
    }
    puStack_20 = (ulonglong *)param_1[2];
    goto code_r0x00014149d9a0;
  case 8:
    if (param_1[1] != 0) {
      pplVar7 = (longlong **)(param_1 + 1);
      goto code_r0x00014149db82;
    }
    break;
  case 0xd:
    FUN_14149f720(param_1 + 1);
    if ((longlong)param_1[0x1f] < -0x7ffffffffffffffe) {
      return;
    }
    if (param_1[0x1f] + 1 < 2) {
      return;
    }
    puStack_20 = (ulonglong *)param_1[0x20];
code_r0x00014149d9a0:
    pcVar8 = (code *)0x1;
code_r0x0001402b4560:
    if (&DAT_00000010 < pcVar8) {
      puStack_20 = (ulonglong *)puStack_20[-1];
    }
    hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(hHeap,0,puStack_20);
    return;
  case 0xe:
    FUN_14149f720(param_1);
    uVar6 = param_1[0x1e];
    if ((-0x7fffffffffffffff < (longlong)uVar6) && (1 < uVar6 + 1)) {
      thunk_FUN_1406dbb00(param_1[0x1f],uVar6,1);
    }
    plVar4 = (longlong *)param_1[0x21];
FUN_14018c8e0:
    if (*plVar4 == 1) {
      if ((1 < ((uint)plVar4[1] & 3) - 2) && ((plVar4[1] & 3U) != 0)) {
        FUN_140713290(&stack0xffffffffffffffd8);
      }
    }
    else if ((*plVar4 == 0) && (plVar4[2] != 0)) {
      thunk_FUN_1406dbb00(plVar4[1],plVar4[2],1);
    }
    thunk_FUN_1406dbb00(plVar4,0x28,8);
    return;
  }
LAB_14149de18:
  return;
}


/* address=14149e150 name=FUN_14149e150 */

void FUN_14149e150(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined (*pauVar6) [16];
  longlong lVar7;
  longlong lVar8;
  undefined (*pauVar9) [16];
  uint uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  FUN_1412608c0(param_1 + 3);
  plVar11 = param_1;
  if (0 < *param_1) {
    thunk_FUN_1406dbb00(param_1[1],*param_1,1,param_4,param_1,uVar12);
  }
  lVar7 = param_1[10];
  if (lVar7 != 0) {
    lVar8 = param_1[0xc];
    if (lVar8 != 0) {
      pauVar6 = (undefined (*) [16])param_1[9];
      auVar1 = *pauVar6;
      pauVar9 = pauVar6 + 1;
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[15] >> 7) << 0xf);
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar1 = *pauVar9;
            pauVar6 = pauVar6 + -0x28;
            pauVar9 = pauVar9 + 1;
            uVar10 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[15] >> 7) << 0xf) ^ 0xffff;
          } while (uVar10 == 0);
        }
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar2 = *(longlong *)((longlong)pauVar6 + (ulonglong)uVar3 * -0x28 + -0x28);
        if (lVar2 != 0) {
          thunk_FUN_1406dbb00(*(undefined8 *)((longlong)pauVar6 + (ulonglong)uVar3 * -0x28 + -0x20),
                              lVar2,1,param_4,plVar11,uVar12);
        }
        uVar10 = uVar10 - 1 & uVar10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar5 = lVar7 * 0x28 + 0x37U & 0xfffffffffffffff0;
    lVar7 = lVar7 + uVar5 + 0x11;
    if (lVar7 != 0) {
      thunk_FUN_1406dbb00(param_1[9] - uVar5,lVar7,0x10);
      return;
    }
  }
  return;
}


/* address=14149e3b0 name=FUN_14149e3b0 */

void FUN_14149e3b0(longlong **param_1)

{
  longlong lVar1;
  longlong **pplVar2;
  int iVar3;
  HANDLE hHeap;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  longlong lStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  longlong *plStack_40;
  longlong **pplStack_38;
  longlong *plStack_30;
  
  plStack_30 = (longlong *)0xfffffffffffffffe;
  iVar3 = 8;
  if (999999999 < *(uint *)(param_1 + 0x17)) {
    iVar3 = *(uint *)(param_1 + 0x17) + 0xc4653600;
  }
  switch(iVar3) {
  case 0:
    if (1 < *(byte *)param_1) {
      plVar5 = param_1[1];
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        plVar9 = param_1[1];
        plStack_30 = plVar9 + 2;
        plVar5 = plVar9 + 0x9f;
        plStack_60 = (longlong *)0x1405be4a2;
        thunk_FUN_141c1ac50();
        plVar6 = plVar9;
        if (*plVar5 != 0) {
          plStack_60 = (longlong *)0x1405be4c5;
          thunk_FUN_1406dbb00(plVar9[0xa0],*plVar5,1);
        }
        if (plVar9[0xa2] != 0) {
          plStack_60 = (longlong *)0x1405be4e3;
          thunk_FUN_1406dbb00(plVar9[0xa3],plVar9[0xa2],1);
        }
        lVar7 = plVar9[0xa5];
        if ((lVar7 != -1) && (lVar7 != 0)) {
          plStack_60 = (longlong *)0x1405be507;
          thunk_FUN_1406dbb00(plVar9[0xa6],lVar7,1);
        }
        lVar7 = plVar9[0xb0];
        if ((lVar7 != -1) && (-1 < lVar7)) {
          if (lVar7 != 0) {
            plStack_60 = (longlong *)0x1405be52d;
            thunk_FUN_1406dbb00(plVar9[0xb1],lVar7,1);
          }
          if (plVar9[0xb3] != 0) {
            plStack_60 = (longlong *)0x1405be54b;
            thunk_FUN_1406dbb00(plVar9[0xb4],plVar9[0xb3],1);
          }
        }
        if (plVar9[0xa9] != -1) {
          plVar5 = (longlong *)plVar9[0xac];
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            plStack_60 = (longlong *)0x1405be56e;
            FUN_14052d620(plVar9 + 0xac);
          }
          if (plVar9[0xa9] != 0) {
            plStack_60 = (longlong *)0x1405be58c;
            thunk_FUN_1406dbb00(plVar9[0xaa],plVar9[0xa9],1);
          }
        }
        lVar7 = plVar9[0xad];
        if ((lVar7 != -1) && (lVar7 != 0)) {
          plStack_60 = (longlong *)0x1405be5b0;
          thunk_FUN_1406dbb00(plVar9[0xae],lVar7,1);
        }
        plStack_60 = (longlong *)0x1405be5ba;
        FUN_1405bc390(plStack_30);
        plVar5 = (longlong *)plVar6[0xbd];
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          plStack_60 = (longlong *)0x1405be5d8;
          FUN_1405bda40(plVar6 + 0xbd);
        }
        if (plVar6 != (longlong *)0xffffffffffffffff) {
          LOCK();
          plVar5 = plVar6 + 1;
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            thunk_FUN_1406dbb00(plVar6,0x5f0,8);
            return;
          }
        }
        return;
      }
    }
    break;
  case 1:
    plVar5 = param_1[1];
    plVar9 = param_1[2];
    if (plVar9 != (longlong *)0x0) {
      plVar6 = plVar5 + 7;
      do {
        if (plVar6[-7] != 0) {
          thunk_FUN_1406dbb00(plVar6[-6],plVar6[-7],1);
        }
        lVar7 = plVar6[-1];
        if ((-1 < lVar7) && (lVar7 != 0)) {
          thunk_FUN_1406dbb00(*plVar6,lVar7,1);
        }
        lVar7 = plVar6[-4];
        if ((lVar7 != -1) && (lVar7 != 0)) {
          thunk_FUN_1406dbb00(plVar6[-3],lVar7,1);
        }
        plVar6 = plVar6 + 0x12;
        plVar9 = (longlong *)((longlong)plVar9 + -1);
      } while (plVar9 != (longlong *)0x0);
    }
    if (*param_1 != (longlong *)0x0) {
      thunk_FUN_1406dbb00(plVar5,(longlong)*param_1 * 0x90,8);
    }
    plVar5 = param_1[4];
    plVar9 = param_1[5];
    if (plVar9 != (longlong *)0x0) {
      plVar6 = plVar5 + 7;
      do {
        if (plVar6[-7] != 0) {
          thunk_FUN_1406dbb00(plVar6[-6],plVar6[-7],1);
        }
        lVar7 = plVar6[-1];
        if ((-1 < lVar7) && (lVar7 != 0)) {
          thunk_FUN_1406dbb00(*plVar6,lVar7,1);
        }
        lVar7 = plVar6[-4];
        if ((lVar7 != -1) && (lVar7 != 0)) {
          thunk_FUN_1406dbb00(plVar6[-3],lVar7,1);
        }
        plVar6 = plVar6 + 0x12;
        plVar9 = (longlong *)((longlong)plVar9 + -1);
      } while (plVar9 != (longlong *)0x0);
    }
    if (param_1[3] != (longlong *)0x0) {
      thunk_FUN_1406dbb00(plVar5,(longlong)param_1[3] * 0x90,8);
    }
    if (param_1[6] != (longlong *)0x0) {
      thunk_FUN_1406dbb00(param_1[7],(longlong)param_1[6] << 5,4);
    }
    plVar5 = param_1[0xc];
    if (plVar5 == (longlong *)0x0) {
      plStack_70 = (longlong *)0x0;
    }
    else {
      plStack_98 = param_1[0xd];
      plStack_70 = param_1[0xe];
      uStack_a8 = 0;
      uStack_88 = 0;
      plStack_a0 = plVar5;
      plStack_80 = plVar5;
      plStack_78 = plStack_98;
    }
    uStack_b0 = (ulonglong)(plVar5 != (longlong *)0x0);
    uStack_90 = uStack_b0;
    pplStack_38 = param_1;
    FUN_141280fd0(&lStack_68,&uStack_b0);
    if (lStack_68 != 0) {
      do {
        lVar7 = *(longlong *)(lStack_68 + 8 + (longlong)plStack_58 * 0x18);
        if (lVar7 != 0) {
          thunk_FUN_1406dbb00(*(undefined8 *)(lStack_68 + (longlong)plStack_58 * 0x18 + 0x10),lVar7,
                              1);
        }
        FUN_141280fd0(&lStack_68,&uStack_b0);
      } while (lStack_68 != 0);
    }
    plStack_48 = pplStack_38[10];
    plStack_50 = pplStack_38[0xb];
    plStack_40 = (longlong *)0x0;
    plVar5 = plStack_48;
    while (pplVar2 = pplStack_38, plStack_50 != plStack_40) {
      plStack_40 = (longlong *)((longlong)plStack_40 + 1);
      FUN_14027f5e0(plVar5);
      plVar5 = plVar5 + 0x1c;
    }
    if (pplStack_38[9] != (longlong *)0x0) {
      thunk_FUN_1406dbb00(plStack_48,(longlong)pplStack_38[9] * 0xe0,8);
    }
    plStack_48 = pplVar2[0x11];
    plStack_50 = pplVar2[0x12];
    plStack_40 = (longlong *)0x0;
    plVar5 = plStack_48;
    while (plStack_50 != plStack_40) {
      plStack_40 = (longlong *)((longlong)plStack_40 + 1);
      FUN_141230fb0(plVar5);
      plVar5 = plVar5 + 7;
    }
    if (pplStack_38[0x10] == (longlong *)0x0) {
      return;
    }
    plVar5 = pplStack_38[0x11];
    uVar10 = 8;
    goto code_r0x0001402b4560;
  case 3:
    if ((longlong)*param_1 < 1) {
      return;
    }
    goto code_r0x00014149e604;
  case 4:
    plVar5 = *param_1;
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
code_r0x0001405bdc30:
      plStack_30 = *param_1;
      plVar5 = (longlong *)plStack_30[0x85];
      if (plVar5 == (longlong *)0x0) {
        plStack_50 = (longlong *)0x0;
      }
      else {
        plStack_78 = (longlong *)plStack_30[0x86];
        plStack_50 = (longlong *)plStack_30[0x87];
        uStack_88 = 0;
        lStack_68 = 0;
        plStack_80 = plVar5;
        plStack_60 = plVar5;
        plStack_58 = plStack_78;
      }
      uStack_90 = (ulonglong)(plVar5 != (longlong *)0x0);
      plStack_70 = (longlong *)uStack_90;
      FUN_1405b8d90(&plStack_48,&uStack_90);
      if (plStack_48 != (longlong *)0x0) {
        do {
          if (plStack_48[(longlong)pplStack_38 * 3 + 1] != 0) {
            thunk_FUN_1406dbb00(plStack_48[(longlong)pplStack_38 * 3 + 2],
                                plStack_48[(longlong)pplStack_38 * 3 + 1],1);
          }
          FUN_1405b8d90(&plStack_48,&uStack_90);
        } while (plStack_48 != (longlong *)0x0);
      }
      plVar5 = plStack_30;
      lVar7 = plStack_30[0x39];
      if ((lVar7 != -1) && (lVar7 != 0)) {
        thunk_FUN_1406dbb00(plStack_30[0x3a],lVar7,1);
      }
      FUN_140019290(plVar5 + 4);
      lVar7 = plVar5[0x14];
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(plVar5[0x13] + 0x38);
        do {
          if (puVar8[-7] != 0) {
            thunk_FUN_1406dbb00(puVar8[-6],puVar8[-7],1);
          }
          lVar1 = puVar8[-4];
          if ((lVar1 != -1) && (lVar1 != 0)) {
            thunk_FUN_1406dbb00(puVar8[-3],lVar1,1);
          }
          lVar1 = puVar8[-1];
          if ((lVar1 != -1) && (lVar1 != 0)) {
            thunk_FUN_1406dbb00(*puVar8,lVar1 * 0x11,1);
          }
          puVar8 = puVar8 + 9;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (plVar5[0x12] != 0) {
        thunk_FUN_1406dbb00(plVar5[0x13],plVar5[0x12] * 0x48,8);
      }
      lVar7 = plVar5[0x3c];
      if ((lVar7 != -1) && (lVar7 != 0)) {
        thunk_FUN_1406dbb00(plVar5[0x3d],lVar7,1);
      }
      lVar7 = plVar5[0x3f];
      if ((lVar7 != -1) && (lVar7 != 0)) {
        thunk_FUN_1406dbb00(plVar5[0x40],lVar7,1);
      }
      lVar7 = plVar5[0x75];
      if (((-0x7fffffffffffffff < lVar7) && (lVar7 != -1)) && (lVar7 != 0)) {
        thunk_FUN_1406dbb00(plVar5[0x76],lVar7,1);
      }
      lVar7 = plVar5[0x42];
      if ((lVar7 != -1) && (lVar7 != 0)) {
        thunk_FUN_1406dbb00(plVar5[0x43],lVar7,1);
      }
      lVar7 = plVar5[0x45];
      if ((lVar7 != -1) && (lVar7 != 0)) {
        thunk_FUN_1406dbb00(plVar5[0x46],lVar7,1);
      }
      lVar7 = plVar5[0x48];
      if ((lVar7 != -1) && (lVar7 != 0)) {
        thunk_FUN_1406dbb00(plVar5[0x49],lVar7,1);
      }
      FUN_1400012e0(plVar5 + 0x69);
      if (plVar5[0x4b] != -1) {
        plVar5 = (longlong *)plVar5[0x51];
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          FUN_140677a70(plStack_30 + 0x51);
        }
        plVar5 = plStack_30;
        if (plStack_30[0x4b] != 0) {
          thunk_FUN_1406dbb00(plStack_30[0x4c],plStack_30[0x4b],1);
        }
        if (plVar5[0x4e] != 0) {
          thunk_FUN_1406dbb00(plVar5[0x4f],plVar5[0x4e],1);
        }
      }
      if (plVar5[0x15] != 0) {
        thunk_FUN_1406dbb00(plVar5[0x16],plVar5[0x15] * 0x11,1);
      }
      if (plVar5[0x18] != 0) {
        thunk_FUN_1406dbb00(plVar5[0x19],plVar5[0x18] * 0x11,1);
      }
      FUN_1400194c0(plVar5 + 0x1b);
      lVar7 = plVar5[0x53];
      if (lVar7 != -1) {
        if (lVar7 != 0) {
          thunk_FUN_1406dbb00(plVar5[0x54],lVar7,1);
        }
        if (plVar5[0x5e] != 0) {
          thunk_FUN_1406dbb00(plVar5[0x5f],plVar5[0x5e],1);
        }
      }
      if (plVar5[0x33] != 0) {
        thunk_FUN_1406dbb00(plVar5[0x34],plVar5[0x33] * 0x11,1);
      }
      plVar9 = (longlong *)plVar5[0x8b];
      if (plVar9 == (longlong *)0x0) {
        plStack_50 = (longlong *)0x0;
      }
      else {
        plStack_78 = (longlong *)plVar5[0x8c];
        plStack_50 = (longlong *)plVar5[0x8d];
        uStack_88 = 0;
        lStack_68 = 0;
        plStack_80 = plVar9;
        plStack_60 = plVar9;
        plStack_58 = plStack_78;
      }
      uStack_90 = (ulonglong)(plVar9 != (longlong *)0x0);
      plStack_70 = (longlong *)uStack_90;
      FUN_1405b9160(&plStack_48,&uStack_90);
      if (plStack_48 != (longlong *)0x0) {
        do {
          if (plStack_48[(longlong)pplStack_38 * 3 + 0x2d] != 0) {
            thunk_FUN_1406dbb00(plStack_48[(longlong)pplStack_38 * 3 + 0x2e],
                                plStack_48[(longlong)pplStack_38 * 3 + 0x2d],1);
          }
          FUN_1405b9160(&plStack_48,&uStack_90);
        } while (plStack_48 != (longlong *)0x0);
      }
      plVar5 = plStack_30;
      lVar7 = plStack_30[0x38];
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(plStack_30[0x37] + 0x20);
        do {
          if (puVar8[-4] != 0) {
            thunk_FUN_1406dbb00(puVar8[-3],puVar8[-4],1);
          }
          lVar1 = puVar8[-1];
          if ((lVar1 != -1) && (lVar1 != 0)) {
            thunk_FUN_1406dbb00(*puVar8,lVar1,1);
          }
          puVar8 = puVar8 + 6;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (plVar5[0x36] != 0) {
        thunk_FUN_1406dbb00(plVar5[0x37],plVar5[0x36] * 0x30,8);
      }
      lVar7 = plVar5[99];
      if (lVar7 != -1) {
        if (lVar7 != 0) {
          thunk_FUN_1406dbb00(plVar5[100],lVar7,1);
        }
        lVar7 = plVar5[0x66];
        if ((lVar7 != -1) && (lVar7 != 0)) {
          thunk_FUN_1406dbb00(plVar5[0x67],lVar7,1);
        }
      }
      if (plVar5 != (longlong *)0xffffffffffffffff) {
        LOCK();
        plVar9 = plVar5 + 1;
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          thunk_FUN_1406dbb00(plVar5,0x4e8,8);
          return;
        }
      }
      return;
    }
    break;
  case 7:
    if (*(byte *)param_1 - 1 < 2) {
      return;
    }
    if (*(byte *)param_1 == 0) {
      if (*(int *)(param_1 + 1) != 9) {
        return;
      }
      plVar5 = param_1[3];
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      pplStack_38 = param_1;
      if (*plVar5 == 0) {
        FUN_1405bdc30(param_1 + 3);
      }
      plVar5 = pplStack_38[2];
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 != 0) {
        return;
      }
      param_1 = pplStack_38 + 2;
      goto code_r0x0001405bdc30;
    }
    uVar4 = (ulonglong)param_1[4] ^ 0x8000000000000000;
    uVar10 = 0xb;
    if (uVar4 < 0xd) {
      uVar10 = uVar4;
    }
    switch(uVar10) {
    case 4:
      plVar5 = param_1[2];
      plVar9 = param_1[3];
      if (plVar9 != (longlong *)0x0) {
        plVar6 = plVar5 + 1;
        do {
          if (plVar6[-1] != 0) {
            plStack_50 = (longlong *)&UNK_14149cfe0;
            thunk_FUN_1406dbb00(*plVar6,plVar6[-1],1);
          }
          plVar6 = plVar6 + 3;
          plVar9 = (longlong *)((longlong)plVar9 + -1);
        } while (plVar9 != (longlong *)0x0);
      }
      break;
    case 5:
      plVar5 = param_1[2];
      plVar9 = param_1[3];
      if (plVar9 != (longlong *)0x0) {
        plVar6 = plVar5 + 1;
        do {
          if (plVar6[-1] != 0) {
            plStack_50 = (longlong *)&UNK_14149d030;
            thunk_FUN_1406dbb00(*plVar6,plVar6[-1],1);
          }
          plVar6 = plVar6 + 3;
          plVar9 = (longlong *)((longlong)plVar9 + -1);
        } while (plVar9 != (longlong *)0x0);
      }
      break;
    case 6:
      if ((longlong)param_1[1] < 1) {
        return;
      }
      plVar5 = param_1[2];
      goto code_r0x00014149d05b;
    default:
      goto LAB_14149d06f;
    case 0xb:
      if (0xfffffffffffffffb < (longlong)param_1[4] - 1U) {
        return;
      }
      plVar5 = param_1[5];
code_r0x00014149d05b:
      uVar10 = 1;
      goto code_r0x0001402b4560;
    }
    if (param_1[1] == (longlong *)0x0) {
LAB_14149d06f:
      return;
    }
    uVar10 = 8;
    goto code_r0x0001402b4560;
  case 0xc:
    if (0 < (longlong)*param_1) {
      thunk_FUN_1406dbb00(param_1[1],*param_1,1);
    }
    if ((longlong)param_1[3] < 1) {
      return;
    }
    plVar5 = param_1[4];
    goto code_r0x00014149e608;
  case 0xd:
    if (*param_1 == (longlong *)0x0) {
      return;
    }
code_r0x00014149e604:
    plVar5 = param_1[1];
code_r0x00014149e608:
    uVar10 = 1;
code_r0x0001402b4560:
    if (0x10 < uVar10) {
      plVar5 = (longlong *)plVar5[-1];
    }
    plStack_40 = (longlong *)0x1406dbb1e;
    hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(hHeap,0,plVar5);
    return;
  }
  return;
}


/* address=14149ea10 name=FUN_14149ea10 */

/* WARNING: Possible PIC construction at 0x00014149eb96: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014149eb9c) */
/* WARNING: Removing unreachable block (ram,0x00014149ebbe) */
/* WARNING: Removing unreachable block (ram,0x00014149ebc8) */
/* WARNING: Removing unreachable block (ram,0x000140560ee0) */
/* WARNING: Removing unreachable block (ram,0x000140560f0f) */
/* WARNING: Removing unreachable block (ram,0x000140560f20) */
/* WARNING: Removing unreachable block (ram,0x000140560f26) */
/* WARNING: Removing unreachable block (ram,0x000140560f37) */
/* WARNING: Removing unreachable block (ram,0x000140560f44) */
/* WARNING: Removing unreachable block (ram,0x000140560f64) */
/* WARNING: Removing unreachable block (ram,0x000140560f69) */
/* WARNING: Removing unreachable block (ram,0x000140560f76) */
/* WARNING: Removing unreachable block (ram,0x000140560f49) */
/* WARNING: Removing unreachable block (ram,0x000140560f54) */
/* WARNING: Removing unreachable block (ram,0x000140560f89) */
/* WARNING: Removing unreachable block (ram,0x000140560f93) */
/* WARNING: Removing unreachable block (ram,0x000140560fb0) */
/* WARNING: Removing unreachable block (ram,0x000140560f9a) */

void FUN_14149ea10(ulonglong *param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  HANDLE hHeap;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 unaff_RBX;
  undefined8 *unaff_RBP;
  ulonglong *unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 unaff_R14;
  undefined *apuStack_60 [2];
  undefined8 uStack_50;
  undefined8 uStack_40;
  longlong *plStack_38;
  undefined *puStack_30;
  longlong *plStack_28;
  longlong **pplStack_20;
  undefined8 uStack_18;
  
  puVar7 = &uStack_18;
  uStack_18 = 0xfffffffffffffffe;
  uVar9 = *param_1;
  lVar5 = 1;
  if (0x800000000000000b < uVar9) {
    lVar5 = uVar9 + 0x7ffffffffffffff4;
  }
  switch(lVar5) {
  case 0:
  case 2:
  case 8:
    break;
  case 1:
    lVar5 = 2;
    if (0x8000000000000007 < uVar9) {
      lVar5 = uVar9 + 0x7ffffffffffffff8;
    }
    if (lVar5 == 0) {
      return;
    }
    if (lVar5 == 1) {
      param_1 = param_1 + 1;
    }
    else {
      if (lVar5 != 2) {
        pplStack_20 = (longlong **)(param_1 + 1);
        apuStack_60[0] = &UNK_14149edc6;
        func_0x000140281330(pplStack_20);
        plVar6 = *pplStack_20;
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 != 0) {
          return;
        }
        uStack_18 = 0xfffffffffffffffe;
        pplStack_20 = (longlong **)*pplStack_20;
        plStack_28 = (longlong *)pplStack_20 + 2;
        uVar9 = ((longlong *)pplStack_20)[0x1a];
        if ((uVar9 & 1) != 0) {
          uStack_50 = 0x140560def;
          FUN_14069dd20((longlong *)pplStack_20 + 0x18);
        }
        if ((uVar9 & 8) != 0) {
          uStack_50 = 0x140560e06;
          FUN_14069dd20(pplStack_20 + 0x16);
        }
        if (*plStack_28 != -2) {
          uVar2 = (uint)*plStack_28;
          if (uVar2 == 0xffffffff) {
            uStack_50 = 0x140560e26;
            FUN_14068c130(pplStack_20 + 3);
          }
          else if ((4 < uVar2) && (pplStack_20[3] != (longlong *)0x0)) {
            uStack_50 = 0x140560e4e;
            thunk_FUN_1406dbb00(pplStack_20[4],pplStack_20[3],1);
          }
        }
        if (pplStack_20 != (longlong **)0xffffffffffffffff) {
          LOCK();
          plVar6 = (longlong *)(pplStack_20 + 1);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            thunk_FUN_1406dbb00(pplStack_20,0xd8,8);
            return;
          }
        }
        return;
      }
      register0x00000020 = (BADSPACEBASE *)apuStack_60;
      apuStack_60[0] = &UNK_14149eb9b;
      unaff_RBP = puVar7;
      unaff_RSI = param_1;
      pplStack_20 = (longlong **)param_1;
    }
    *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = unaff_R14;
    *(ulonglong **)((longlong)register0x00000020 + -0x18) = unaff_RSI;
    *(undefined8 *)((longlong)register0x00000020 + -0x20) = unaff_RDI;
    *(undefined8 *)((longlong)register0x00000020 + -0x28) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0xfffffffffffffffe;
    uVar9 = *param_1;
    lVar5 = 3;
    if (0x8000000000000004 < uVar9) {
      lVar5 = uVar9 + 0x7ffffffffffffffb;
    }
    if (lVar5 == 0) {
      return;
    }
    if (lVar5 == 1) {
      uVar3 = param_1[2];
      uVar9 = param_1[3];
      if (uVar9 != 0) {
        puVar7 = (undefined8 *)(uVar3 + 8);
        do {
          lVar5 = puVar7[-1];
          if (lVar5 != 0) {
            uVar8 = *puVar7;
            *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0x140119c50;
            thunk_FUN_1406dbb00(uVar8,lVar5,1);
          }
          puVar7 = puVar7 + 3;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else {
      if (lVar5 != 2) {
        uVar3 = 5;
        if ((longlong)uVar9 < 0) {
          uVar3 = uVar9 ^ 0x8000000000000000;
        }
        if (uVar3 < 3) {
          return;
        }
        if (uVar3 == 3) {
          uVar9 = param_1[1];
          if (uVar9 == 0) {
            return;
          }
          uVar3 = param_1[2];
          uVar8 = 1;
        }
        else {
          if (uVar3 == 4) {
            uVar9 = param_1[2];
            *(ulonglong **)((longlong)register0x00000020 + -0x48) = param_1;
            *(ulonglong *)((longlong)register0x00000020 + -0x50) = param_1[3];
            *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0;
            *(ulonglong *)((longlong)register0x00000020 + -0x38) = uVar9;
            while (*(longlong *)((longlong)register0x00000020 + -0x50) !=
                   *(longlong *)((longlong)register0x00000020 + -0x40)) {
              *(longlong *)((longlong)register0x00000020 + -0x40) =
                   *(longlong *)((longlong)register0x00000020 + -0x40) + 1;
              *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0x140119cee;
              FUN_14027d4f0(uVar9);
              uVar9 = uVar9 + 0x48;
            }
            if (*(longlong *)(*(longlong *)((longlong)register0x00000020 + -0x48) + 8) == 0) {
              return;
            }
            uVar9 = *(longlong *)(*(longlong *)((longlong)register0x00000020 + -0x48) + 8) * 0x48;
          }
          else {
            *(ulonglong *)((longlong)register0x00000020 + -0x48) = uVar9;
            uVar9 = param_1[4];
            if (uVar9 != 0) {
              uVar3 = uVar9 * 8 + 0x17 & 0xfffffffffffffff0;
              lVar5 = uVar9 + uVar3 + 0x11;
              if (lVar5 != 0) {
                uVar9 = param_1[3];
                *(undefined **)((longlong)register0x00000020 + -0x80) = &LAB_140119d40;
                thunk_FUN_1406dbb00(uVar9 - uVar3,lVar5,0x10);
              }
            }
            uVar9 = param_1[1];
            *(ulonglong *)((longlong)register0x00000020 + -0x50) = param_1[2];
            *(ulonglong *)((longlong)register0x00000020 + -0x38) = uVar9;
            *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0;
            lVar5 = uVar9 + 0x18;
            while (lVar4 = *(longlong *)((longlong)register0x00000020 + -0x40),
                  *(longlong *)((longlong)register0x00000020 + -0x50) != lVar4) {
              lVar1 = *(longlong *)(lVar5 + -0x18);
              if (lVar1 != 0) {
                uVar8 = *(undefined8 *)(lVar5 + -0x10);
                *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0x140119d99;
                thunk_FUN_1406dbb00(uVar8,lVar1,1);
              }
              *(longlong *)((longlong)register0x00000020 + -0x40) = lVar4 + 1;
              *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0x140119d73;
              FUN_14027d4f0(lVar5);
              lVar5 = lVar5 + 0x68;
            }
            if (*(longlong *)((longlong)register0x00000020 + -0x48) == 0) {
              return;
            }
            uVar9 = *(longlong *)((longlong)register0x00000020 + -0x48) * 0x68;
          }
          uVar8 = 8;
          uVar3 = *(ulonglong *)((longlong)register0x00000020 + -0x38);
        }
        goto LAB_140119c6c;
      }
      uVar3 = param_1[2];
      uVar9 = param_1[3];
      if (uVar9 != 0) {
        puVar7 = (undefined8 *)(uVar3 + 8);
        do {
          lVar5 = puVar7[-1];
          if (lVar5 != 0) {
            uVar8 = *puVar7;
            *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0x140119c10;
            thunk_FUN_1406dbb00(uVar8,lVar5,1);
          }
          puVar7 = puVar7 + 3;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    if (param_1[1] == 0) {
      return;
    }
    uVar9 = param_1[1] * 0x18;
    uVar8 = 8;
LAB_140119c6c:
    thunk_FUN_1406dbb00(uVar3,uVar9,uVar8);
    return;
  case 3:
    uVar9 = param_1[1];
    if (uVar9 == 0) {
      return;
    }
    uVar3 = param_1[3];
    if (uVar3 == 0xffffffffffffffff) {
      puStack_30 = (undefined *)param_1[2];
      plStack_38 = (longlong *)(uVar9 - 0x10);
      LOCK();
      plVar6 = (longlong *)(uVar9 - 0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      pplStack_20 = (longlong **)param_1;
      if (*plVar6 == 0) {
        apuStack_60[0] = &UNK_14149ee1b;
        FUN_140677a70(&plStack_38);
        param_1 = (ulonglong *)pplStack_20;
      }
    }
    else if (uVar3 != 0) {
      apuStack_60[0] = &UNK_14149ec02;
      thunk_FUN_1406dbb00(uVar9,uVar3,1);
    }
    plVar6 = (longlong *)param_1[4];
    if (param_1[6] == 0xffffffffffffffff) {
      puStack_30 = (undefined *)param_1[5];
      plStack_38 = plVar6 + -2;
      LOCK();
      plVar6 = plVar6 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 != 0) {
        return;
      }
      apuStack_60[0] = &UNK_14149ee60;
      FUN_140677a70(&plStack_38);
      return;
    }
    if (param_1[6] == 0) {
      return;
    }
    goto code_r0x00014149ef82;
  case 4:
    if (1 < *(byte *)(param_1 + 1)) {
      plVar6 = (longlong *)param_1[2];
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        uStack_18 = 0xfffffffffffffffe;
        pplStack_20 = (longlong **)param_1[2];
        puStack_30 = (undefined *)((longlong)pplStack_20 + 0x10);
        plStack_28 = (longlong *)((longlong)pplStack_20 + 0x4f8);
        apuStack_60[0] = (undefined *)0x1405be4a2;
        thunk_FUN_141c1ac50();
        uVar9 = (ulonglong)pplStack_20;
        if (*plStack_28 != 0) {
          apuStack_60[0] = (undefined *)0x1405be4c5;
          thunk_FUN_1406dbb00(*(undefined8 *)((longlong)pplStack_20 + 0x500),*plStack_28,1);
        }
        if (*(longlong *)(uVar9 + 0x510) != 0) {
          apuStack_60[0] = (undefined *)0x1405be4e3;
          thunk_FUN_1406dbb00(*(undefined8 *)(uVar9 + 0x518),*(longlong *)(uVar9 + 0x510),1);
        }
        lVar5 = *(longlong *)(uVar9 + 0x528);
        if ((lVar5 != -1) && (lVar5 != 0)) {
          apuStack_60[0] = (undefined *)0x1405be507;
          thunk_FUN_1406dbb00(*(undefined8 *)(uVar9 + 0x530),lVar5,1);
        }
        lVar5 = *(longlong *)(uVar9 + 0x580);
        if ((lVar5 != -1) && (-1 < lVar5)) {
          if (lVar5 != 0) {
            apuStack_60[0] = (undefined *)0x1405be52d;
            thunk_FUN_1406dbb00(*(undefined8 *)(uVar9 + 0x588),lVar5,1);
          }
          if (*(longlong *)(uVar9 + 0x598) != 0) {
            apuStack_60[0] = (undefined *)0x1405be54b;
            thunk_FUN_1406dbb00(*(undefined8 *)(uVar9 + 0x5a0),*(longlong *)(uVar9 + 0x598),1);
          }
        }
        if (*(longlong *)(uVar9 + 0x548) != -1) {
          plVar6 = *(longlong **)(uVar9 + 0x560);
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            apuStack_60[0] = (undefined *)0x1405be56e;
            FUN_14052d620(uVar9 + 0x560);
          }
          if (*(longlong *)(uVar9 + 0x548) != 0) {
            apuStack_60[0] = (undefined *)0x1405be58c;
            thunk_FUN_1406dbb00(*(undefined8 *)(uVar9 + 0x550),*(longlong *)(uVar9 + 0x548),1);
          }
        }
        lVar5 = *(longlong *)(uVar9 + 0x568);
        if ((lVar5 != -1) && (lVar5 != 0)) {
          apuStack_60[0] = (undefined *)0x1405be5b0;
          thunk_FUN_1406dbb00(*(undefined8 *)(uVar9 + 0x570),lVar5,1);
        }
        apuStack_60[0] = (undefined *)0x1405be5ba;
        FUN_1405bc390(puStack_30);
        uVar9 = (ulonglong)pplStack_20;
        plVar6 = *(longlong **)((longlong)pplStack_20 + 0x5e8);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          apuStack_60[0] = (undefined *)0x1405be5d8;
          FUN_1405bda40((longlong)pplStack_20 + 0x5e8);
        }
        if (uVar9 != 0xffffffffffffffff) {
          LOCK();
          plVar6 = (longlong *)(uVar9 + 8);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            thunk_FUN_1406dbb00(uVar9,0x5f0,8);
            return;
          }
        }
        return;
      }
    }
    break;
  case 5:
    plVar6 = (longlong *)param_1[5];
    lVar5 = *plVar6;
    if (lVar5 != -1) {
      if (lVar5 != 0) {
        apuStack_60[0] = &UNK_14149ea8e;
        thunk_FUN_1406dbb00(plVar6[1],lVar5,1);
      }
      if (plVar6[3] != 0) {
        apuStack_60[0] = &UNK_14149eaa6;
        thunk_FUN_1406dbb00(plVar6[4],plVar6[3],1);
      }
      if (plVar6[6] != 0) {
        apuStack_60[0] = &UNK_14149eabe;
        thunk_FUN_1406dbb00(plVar6[7],plVar6[6],1);
      }
      if (0 < plVar6[9]) {
        apuStack_60[0] = &UNK_14149ead6;
        thunk_FUN_1406dbb00(plVar6[10],plVar6[9],1);
      }
    }
    uVar9 = 8;
    goto code_r0x0001402b4560;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x00014149ec19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_142fba6f8 + *(int *)(&UNK_142fba6f8 + (ulonglong)*(byte *)(param_1 + 1) * 4)))()
    ;
    return;
  case 7:
    plVar6 = (longlong *)param_1[1];
    LOCK();
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    pplStack_20 = (longlong **)param_1;
    if (*plVar6 == 0) {
      apuStack_60[0] = &UNK_14149ec84;
      FUN_140583310(param_1 + 1);
    }
    uVar9 = (ulonglong)pplStack_20[2];
    if (uVar9 != 0) {
      pplStack_20 = pplStack_20 + 2;
      apuStack_60[0] = &UNK_14149eca7;
      uVar2 = FUN_14069e1b0(uVar9 + 0x30);
      if ((uVar2 & 5) == 1) {
        apuStack_60[0] = &UNK_14149ecbb;
        (**(code **)(*(longlong *)(uVar9 + 0x20) + 0x10))(*(undefined8 *)(uVar9 + 0x28));
      }
      plVar6 = *pplStack_20;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          uStack_18 = 0xfffffffffffffffe;
          pplStack_20 = (longlong **)*pplStack_20;
          uVar9 = ((longlong *)pplStack_20)[6];
          if ((uVar9 & 1) != 0) {
            uStack_50 = 0x1405614e1;
            FUN_14069dd20((longlong *)pplStack_20 + 4);
          }
          if ((uVar9 & 8) != 0) {
            uStack_50 = 0x1405614f5;
            FUN_14069dd20(pplStack_20 + 2);
          }
          uStack_50 = 0x140561503;
          FUN_14055e360(pplStack_20 + 7);
          if (pplStack_20 != (longlong **)0xffffffffffffffff) {
            LOCK();
            plVar6 = (longlong *)(pplStack_20 + 1);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              thunk_FUN_1406dbb00(pplStack_20,0x180,8);
              return;
            }
          }
          return;
        }
      }
    }
    break;
  case 9:
    if (*(char *)(param_1 + 1) == '\0') {
      plVar6 = (longlong *)param_1[4];
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        param_1 = param_1 + 4;
        goto code_r0x00014149ed70;
      }
    }
    else {
      plVar6 = (longlong *)param_1[2];
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        param_1 = param_1 + 2;
code_r0x00014149ed70:
        uVar9 = *param_1;
        lVar5 = *(longlong *)(uVar9 + 0x10);
        lVar4 = 0x10;
        if (lVar5 < 0) {
          lVar5 = *(longlong *)(uVar9 + 0x18);
          lVar4 = 0x18;
        }
        if (lVar5 != 0) {
          puStack_30 = (undefined *)0x14052d654;
          thunk_FUN_1406dbb00(*(undefined8 *)(uVar9 + 8 + lVar4),lVar5,1);
        }
        if (uVar9 != 0xffffffffffffffff) {
          LOCK();
          plVar6 = (longlong *)(uVar9 + 8);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            thunk_FUN_1406dbb00(uVar9,0x30,8);
            return;
          }
        }
        return;
      }
    }
    break;
  case 10:
    uVar9 = param_1[2];
    if (param_1[1] == 0) {
      if (uVar9 == 0) {
        return;
      }
      plVar6 = (longlong *)param_1[3];
      uVar9 = 4;
      goto code_r0x0001402b4560;
    }
    if ((int)param_1[1] == 1) {
      if (uVar9 == 0) {
        return;
      }
      plVar6 = (longlong *)param_1[3];
      uVar9 = 1;
      goto code_r0x0001402b4560;
    }
    if (uVar9 == 0) {
      return;
    }
    plVar6 = (longlong *)param_1[3];
code_r0x00014149ef82:
    uVar9 = 1;
code_r0x0001402b4560:
    if (0x10 < uVar9) {
      plVar6 = (longlong *)plVar6[-1];
    }
    uStack_40 = 0x1406dbb1e;
    hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001406dbb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(hHeap,0,plVar6);
    return;
  case 0xb:
    uVar9 = param_1[1];
    uVar3 = 9;
    if ((longlong)uVar9 < 0) {
      uVar3 = uVar9 ^ 0x8000000000000000;
    }
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 10:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0xf:
      goto LAB_14149e327;
    default:
      uVar9 = param_1[2];
      lVar5 = 0x10;
      break;
    case 9:
      if (uVar9 != 0) {
        puStack_30 = &UNK_14149e379;
        thunk_FUN_1406dbb00(param_1[2],uVar9,1);
      }
      if (param_1[4] != 0) {
        puStack_30 = &UNK_14149e39a;
        thunk_FUN_1406dbb00(param_1[5],param_1[4],1);
      }
      uVar9 = param_1[7];
      lVar5 = 0x38;
      break;
    case 0x10:
      uVar9 = param_1[2];
      lVar5 = 0x10;
      if ((longlong)uVar9 < 1) {
        return;
      }
      goto code_r0x00014149e33b;
    }
    if (uVar9 != 0) {
code_r0x00014149e33b:
      thunk_FUN_1406dbb00(*(undefined8 *)((longlong)(param_1 + 1) + lVar5),uVar9,1);
      return;
    }
LAB_14149e327:
    return;
  default:
    if (param_1[4] != 0xfffffffffffffffb) {
      if (param_1[4] != 0xfffffffffffffffc) {
        FUN_14149cf60();
        return;
      }
      if (*(int *)(param_1 + 1) == 9) {
        plVar6 = (longlong *)param_1[3];
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        pplStack_20 = (longlong **)param_1;
        if (*plVar6 == 0) {
          apuStack_60[0] = (undefined *)0x14149ed21;
          FUN_1405bdc30(param_1 + 3);
        }
        plVar6 = pplStack_20[2];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            FUN_1405bdc30(pplStack_20 + 2);
            return;
          }
        }
      }
    }
  }
  return;
}


/* address=14149f280 name=FUN_14149f280 */

void FUN_14149f280(char *param_1)

{
  if (*param_1 != '\0') {
    if (*param_1 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014149f2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20))
                (param_1 + 0x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      return;
    }
    if (0 < *(longlong *)(param_1 + 8)) {
      thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 8),1);
      return;
    }
  }
  return;
}


/* address=14149f2c0 name=FUN_14149f2c0 */

void FUN_14149f2c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x368) != 0) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x370),*(longlong *)(param_1 + 0x368),1);
  }
  if (*(longlong *)(param_1 + 0x380) != 0) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x388),*(longlong *)(param_1 + 0x380) * 0x24,4);
  }
  if (*(longlong *)(param_1 + 0x398) != 0) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x3a0),*(longlong *)(param_1 + 0x398),1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014149f34f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_142fba718 + *(int *)(&DAT_142fba718 + (ulonglong)*(byte *)(param_1 + 0x478) * 4)))
            ();
  return;
}


/* address=14149f720 name=FUN_14149f720 */

void FUN_14149f720(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  thunk_FUN_141c1ac50();
  if (*param_1 != 0) {
    thunk_FUN_1406dbb00(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    thunk_FUN_1406dbb00(param_1[4],param_1[3],1);
  }
  if (0 < param_1[6]) {
    thunk_FUN_1406dbb00(param_1[7],param_1[6],1);
  }
  lVar1 = param_1[0x11];
  if ((lVar1 != -1) && (-1 < lVar1)) {
    if (lVar1 != 0) {
      thunk_FUN_1406dbb00(param_1[0x12],lVar1,1);
    }
    if (param_1[0x14] != 0) {
      thunk_FUN_1406dbb00(param_1[0x15],param_1[0x14],1);
    }
  }
  if (param_1[10] != -1) {
    plVar2 = (longlong *)param_1[0xd];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_14052d620(param_1 + 0xd);
    }
    if (param_1[10] != 0) {
      thunk_FUN_1406dbb00(param_1[0xb],param_1[10],1);
    }
  }
  if (0 < param_1[0xe]) {
    thunk_FUN_1406dbb00(param_1[0xf],param_1[0xe],1);
    return;
  }
  return;
}


/* address=14149f960 name=FUN_14149f960 */

void FUN_14149f960(longlong param_1)

{
  undefined8 uVar1;
  code **ppcVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if (*(char *)(param_1 + 0x380) == -1) {
    uVar1 = *(undefined8 *)(param_1 + 0x388);
    ppcVar2 = *(code ***)(param_1 + 0x390);
    pcVar3 = *ppcVar2;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar1);
    }
    if (ppcVar2[1] != (code *)0x0) {
      thunk_FUN_1406dbb00(uVar1);
    }
  }
  else {
    FUN_14149cae0(param_1 + 0x380);
  }
  FUN_140a9cfa0(param_1);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x350),*(longlong *)(param_1 + 0x348) * 0x28);
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x408));
  }
  uVar4 = *(ulonglong *)(param_1 + 0x3f0);
  if (uVar4 != 0) {
    uVar5 = *(ulonglong *)(param_1 + 1000);
    uVar6 = *(ulonglong *)(param_1 + 0x3d8);
    lVar7 = *(longlong *)(param_1 + 0x3e0);
    uVar8 = uVar6;
    if (uVar5 < uVar6) {
      uVar8 = 0;
    }
    lVar11 = uVar5 - uVar8;
    uVar12 = uVar6 - lVar11;
    uVar10 = uVar4 - uVar12;
    if (uVar4 < uVar12) {
      uVar10 = 0;
    }
    uVar13 = lVar11 + uVar4;
    if (uVar4 >= uVar12 && uVar4 - uVar12 != 0) {
      uVar13 = uVar6;
    }
    lVar11 = uVar13 - lVar11;
    if (lVar11 != 0) {
      puVar9 = (undefined8 *)(uVar5 * 0x18 + uVar8 * -0x18 + lVar7 + 8);
      do {
        if (puVar9[-1] != 0) {
          thunk_FUN_1406dbb00(*puVar9,puVar9[-1],1);
        }
        puVar9 = puVar9 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (uVar12 < uVar4) {
      puVar9 = (undefined8 *)(lVar7 + 8);
      do {
        if (puVar9[-1] != 0) {
          thunk_FUN_1406dbb00(*puVar9,puVar9[-1],1);
        }
        puVar9 = puVar9 + 3;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    thunk_FUN_1406dbb00(*(undefined8 *)(param_1 + 0x3e0),*(longlong *)(param_1 + 0x3d8) * 0x18,8);
    return;
  }
  return;
}


/* address=1414a0090 name=FUN_1414a0090 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1414a0090(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  undefined4 uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined auVar28 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  byte bStack_d8;
  undefined2 uStack_d7;
  undefined uStack_d5;
  undefined uStack_d4;
  undefined2 uStack_d3;
  undefined uStack_d1;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  byte bStack_b8;
  undefined2 uStack_b7;
  undefined uStack_b5;
  undefined uStack_b4;
  undefined2 uStack_b3;
  undefined uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  ulonglong uStack_80;
  undefined4 uStack_74;
  ulonglong uStack_70;
  undefined uStack_61;
  undefined8 uStack_60;
  
  cVar23 = s_ProtectionStatus_rustc_48a229cea_142de2da0[15];
  cVar22 = s_ProtectionStatus_rustc_48a229cea_142de2da0[14];
  cVar21 = s_ProtectionStatus_rustc_48a229cea_142de2da0[13];
  cVar20 = s_ProtectionStatus_rustc_48a229cea_142de2da0[12];
  cVar19 = s_ProtectionStatus_rustc_48a229cea_142de2da0[11];
  cVar18 = s_ProtectionStatus_rustc_48a229cea_142de2da0[10];
  cVar17 = s_ProtectionStatus_rustc_48a229cea_142de2da0[9];
  cVar16 = s_ProtectionStatus_rustc_48a229cea_142de2da0[8];
  cVar15 = s_ProtectionStatus_rustc_48a229cea_142de2da0[7];
  cVar14 = s_ProtectionStatus_rustc_48a229cea_142de2da0[6];
  cVar13 = s_ProtectionStatus_rustc_48a229cea_142de2da0[5];
  cVar12 = s_ProtectionStatus_rustc_48a229cea_142de2da0[4];
  cVar11 = s_ProtectionStatus_rustc_48a229cea_142de2da0[3];
  cVar10 = s_ProtectionStatus_rustc_48a229cea_142de2da0[2];
  cVar9 = s_ProtectionStatus_rustc_48a229cea_142de2da0[1];
  cVar8 = s_ProtectionStatus_rustc_48a229cea_142de2da0[0];
  uStack_60 = 0xfffffffffffffffe;
  uStack_70 = 0xfffffffffffffffe;
  puVar1 = &uStack_108;
  uStack_88 = uStack_88 & 0xffffffff00000000;
  puVar25 = param_1;
  lVar27 = 0;
  uStack_118 = param_2;
LAB_1414a011a:
  do {
    while( true ) {
      if (lVar27 == 0x20) {
        if (uStack_70 == 0xfffffffffffffffe) {
          uVar24 = (undefined4)CONCAT71((int7)((ulonglong)puVar25 >> 8),1);
          uVar26 = 0xffffffffffffffff;
        }
        else {
          uVar24 = 0;
          puVar1 = puStack_120;
          uVar26 = uStack_70;
        }
        if ((uStack_88 & 1) == 0) {
          uStack_88 = uVar26;
          uStack_74 = uVar24;
          FUN_142cc8ac0(&uStack_108,"ProtectionStatus",0x10);
          if ((byte)uStack_108 != 0xff) {
            *(undefined *)((longlong)param_1 + 0xb) = uStack_108._3_1_;
            *(undefined2 *)((longlong)param_1 + 9) = uStack_108._1_2_;
            param_1[4] = CONCAT44(uStack_ec,uStack_f0);
            *(undefined4 *)(param_1 + 2) = uStack_100;
            *(undefined4 *)((longlong)param_1 + 0x14) = uStack_fc;
            *(undefined4 *)(param_1 + 3) = uStack_f8;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_f4;
            *(byte *)(param_1 + 1) = (byte)uStack_108;
            *(undefined4 *)((longlong)param_1 + 0xc) = uStack_108._4_4_;
            *param_1 = 1;
            uVar24 = uStack_74;
            if (uStack_88 - 1 < 0xfffffffffffffffe) {
              thunk_FUN_1406dbb00(uStack_110,uStack_88,1);
              uVar24 = uStack_74;
            }
            goto LAB_1414a04a2;
          }
          uStack_74 = uStack_108._4_4_;
          uVar26 = uStack_88;
        }
        param_1[1] = uVar26;
        param_1[2] = uStack_110;
        param_1[3] = puVar1;
        *(undefined4 *)(param_1 + 4) = uStack_74;
        *param_1 = 0;
        goto LAB_1414a04eb;
      }
      lVar2 = lVar27 + 0x10;
      puVar3 = *(ulonglong **)((longlong)&PTR_s_Dri_142fb84f8 + lVar27);
      puVar25 = puVar1;
      if (*(longlong *)((longlong)&DAT_142fb8500 + lVar27) != 0x10) break;
      auVar28[0] = -(*(char *)puVar3 == cVar8);
      auVar28[1] = -(*(char *)((longlong)puVar3 + 1) == cVar9);
      auVar28[2] = -(*(char *)((longlong)puVar3 + 2) == cVar10);
      auVar28[3] = -(*(char *)((longlong)puVar3 + 3) == cVar11);
      auVar28[4] = -(*(char *)((longlong)puVar3 + 4) == cVar12);
      auVar28[5] = -(*(char *)((longlong)puVar3 + 5) == cVar13);
      auVar28[6] = -(*(char *)((longlong)puVar3 + 6) == cVar14);
      auVar28[7] = -(*(char *)((longlong)puVar3 + 7) == cVar15);
      auVar28[8] = -(*(char *)(puVar3 + 1) == cVar16);
      auVar28[9] = -(*(char *)((longlong)puVar3 + 9) == cVar17);
      auVar28[10] = -(*(char *)((longlong)puVar3 + 10) == cVar18);
      auVar28[11] = -(*(char *)((longlong)puVar3 + 0xb) == cVar19);
      auVar28[12] = -(*(char *)((longlong)puVar3 + 0xc) == cVar20);
      auVar28[13] = -(*(char *)((longlong)puVar3 + 0xd) == cVar21);
      auVar28[14] = -(*(char *)((longlong)puVar3 + 0xe) == cVar22);
      auVar28[15] = -(*(char *)((longlong)puVar3 + 0xf) == cVar23);
      if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar28[15] >> 7) << 0xf) != 0xffff) goto LAB_1414a0204;
      if ((int)uStack_88 != 0) {
        uStack_80 = uStack_70;
        uStack_61 = 1;
        FUN_142cc8b40(&uStack_108,"ProtectionStatus",0x10);
LAB_1414a05b3:
        uVar24 = CONCAT13(uStack_108._3_1_,CONCAT21(uStack_108._1_2_,(byte)uStack_108));
        uVar32 = uStack_f8;
        uVar33 = uStack_f4;
        uStack_a0._0_4_ = uStack_f0;
        uStack_a0._4_4_ = uStack_ec;
        uVar29 = uStack_108._4_4_;
        uVar30 = uStack_100;
        uVar31 = uStack_fc;
        goto LAB_1414a03fb;
      }
      uStack_80 = uStack_70;
      uStack_61 = 1;
      FUN_141a14bb0(puVar1,&uStack_118,puVar3,0x10);
      uVar29 = uStack_f4;
      uVar24 = uStack_f8;
      bStack_d8 = (byte)uStack_100;
      uStack_d7 = (undefined2)((uint)uStack_100 >> 8);
      uStack_d5 = (undefined)((uint)uStack_100 >> 0x18);
      uStack_d4 = (undefined)uStack_fc;
      uStack_d3 = (undefined2)((uint)uStack_fc >> 8);
      uStack_d1 = (undefined)((uint)uStack_fc >> 0x18);
      uStack_d0 = CONCAT44(uStack_f4,uStack_f8);
      uStack_c8 = CONCAT44(uStack_ec,uStack_f0);
      if (CONCAT13(uStack_108._3_1_,CONCAT21(uStack_108._1_2_,(byte)uStack_108)) == 1) {
        uStack_a8 = CONCAT44(uStack_ec,uStack_f0);
        uStack_a0 = (undefined8 *)CONCAT44(uStack_e4,uStack_e8);
        uStack_b0 = CONCAT44(uStack_f4,uStack_f8);
        bStack_b8 = bStack_d8;
        uStack_b7 = uStack_d7;
        uStack_b5 = uStack_d5;
        uStack_b4 = uStack_d4;
        uStack_b3 = uStack_d3;
        uStack_b1 = uStack_d1;
      }
      else {
        uStack_108._4_4_ = uStack_fc;
        uStack_f8 = uStack_f0;
        uStack_f4 = uStack_ec;
        uStack_f0 = uStack_e8;
        uStack_ec = uStack_e4;
        uStack_100 = uVar24;
        uStack_fc = uVar29;
        uStack_80 = uStack_70;
        uStack_61 = 1;
        puVar25 = (undefined8 *)&bStack_b8;
        uStack_108._0_1_ = bStack_d8;
        uStack_108._1_2_ = uStack_d7;
        uStack_108._3_1_ = uStack_d5;
        FUN_14154f0c0(&bStack_b8,puVar1);
      }
      if (bStack_b8 != 0xff) {
        *(undefined *)((longlong)param_1 + 0xb) = uStack_b5;
        *(undefined2 *)((longlong)param_1 + 9) = uStack_b7;
        param_1[4] = uStack_a0;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_b0._4_4_;
        *(undefined4 *)(param_1 + 3) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_a8._4_4_;
        *(byte *)(param_1 + 1) = bStack_b8;
        *(uint *)((longlong)param_1 + 0xc) = CONCAT13(uStack_b1,CONCAT21(uStack_b3,uStack_b4));
        goto LAB_1414a0403;
      }
      uStack_74 = CONCAT13(uStack_b1,CONCAT21(uStack_b3,uStack_b4));
      uStack_88 = CON
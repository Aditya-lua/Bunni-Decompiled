/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=140dd6990 name=FUN_140dd6990 */

void FUN_140dd6990(undefined8 param_1,undefined8 param_2)

{
  FUN_140dd6660(param_2);
  return;
}


/* address=140dd69b0 name=FUN_140dd69b0 */

void FUN_140dd69b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140dd6500(param_2);
  return;
}


/* address=140dd69d0 name=FUN_140dd69d0 */

void FUN_140dd69d0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined local_18 [16];
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_140dd6b20(local_18);
  FUN_140d19780(param_1,uVar1,0);
  return;
}


/* address=140dd6a10 name=FUN_140dd6a10 */

void FUN_140dd6a10(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined local_18 [16];
  
  puVar3 = local_18;
  for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_140dd6ab0(local_18);
  FUN_140d19780(param_1,uVar1,0);
  return;
}


/* address=140dd6a50 name=FUN_140dd6a50 */

void FUN_140dd6a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dd6500(param_3);
  return;
}


/* address=140dd6ab0 name=FUN_140dd6ab0 */

undefined * FUN_140dd6ab0(void)

{
  return &LAB_140dd6a80;
}


/* address=140dd6ac0 name=FUN_140dd6ac0 */

void FUN_140dd6ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dd6660(param_3);
  return;
}


/* address=140dd6b20 name=FUN_140dd6b20 */

undefined * FUN_140dd6b20(void)

{
  return &LAB_140dd6af0;
}


/* address=140dd6b90 name=FUN_140dd6b90 */

void FUN_140dd6b90(void)

{
  FUN_140d19610();
  return;
}


/* address=140dd6bb0 name=FUN_140dd6bb0 */

void FUN_140dd6bb0(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140dd6bd0 name=FUN_140dd6bd0 */

void FUN_140dd6bd0(undefined8 param_1)

{
  FUN_140d19740(param_1);
  return;
}


/* address=140dd6bf0 name=FUN_140dd6bf0 */

void FUN_140dd6bf0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140dd6b30,param_2);
  return;
}


/* address=140dd6c20 name=FUN_140dd6c20 */

void FUN_140dd6c20(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140dd6c50 name=FUN_140dd6c50 */

void FUN_140dd6c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d1a210(param_1,&LAB_140dd6b60,param_2,&LAB_140dd6b30,param_3);
  return;
}


/* address=140dd6d00 name=FUN_140dd6d00 */

void FUN_140dd6d00(void)

{
  FUN_140d19610();
  return;
}


/* address=140dd6d20 name=FUN_140dd6d20 */

void FUN_140dd6d20(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140dd6ca0,param_2);
  return;
}


/* address=140dd6d50 name=FUN_140dd6d50 */

void FUN_140dd6d50(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140dd6d80 name=FUN_140dd6d80 */

void FUN_140dd6d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d1a210(param_1,&LAB_140dd6cd0,param_2,&LAB_140dd6ca0,param_3);
  return;
}


/* address=140dd6dd0 name=FUN_140dd6dd0 */

longlong FUN_140dd6dd0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140d76180(0x70);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140dd7800(lVar1,0,0x70);
    FUN_140dd79b0(lVar1);
  }
  return lVar1;
}


/* address=140dd6e20 name=FUN_140dd6e20 */

void FUN_140dd6e20(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140dd79b0(param_1);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140dd6e60 name=FUN_140dd6e60 */

undefined8 FUN_140dd6e60(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10) | *(uint *)(param_2 + 0x10);
    if ((uVar1 & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if ((uVar1 & 8) == 0) {
      bVar4 = (uVar1 & 1) != 0;
      bVar5 = (uVar1 & 2) != 0;
      if ((bVar5) ||
         ((*(int *)(param_2 + 0x18) != 0 && ((bVar4 || (*(int *)(param_1 + 0x18) == 0)))))) {
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      }
      if ((bVar5) ||
         ((*(int *)(param_2 + 0x1c) != 0 && ((bVar4 || (*(int *)(param_1 + 0x1c) == 0)))))) {
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      }
      if ((bVar5) ||
         ((*(int *)(param_2 + 0x20) != -1 && ((bVar4 || (*(int *)(param_1 + 0x20) == -1)))))) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      }
      if ((bVar5) || ((*(uint *)(param_1 + 0x14) & 2) == 0)) {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffd;
      }
      if ((uVar1 & 4) != 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | *(uint *)(param_2 + 0x14);
      if (((bVar5) ||
          ((*(longlong *)(param_2 + 0x28) != 0 && ((bVar4 || (*(longlong *)(param_1 + 0x28) == 0))))
          )) && (iVar2 = FUN_140dd7450(param_1,*(undefined8 *)(param_2 + 0x28)), iVar2 == 0)) {
        uVar3 = 0;
      }
      else {
        if ((bVar5) ||
           ((*(longlong *)(param_2 + 0x30) != 0 && ((bVar4 || (*(longlong *)(param_1 + 0x30) == 0)))
            ))) {
          if (*(longlong *)(param_1 + 0x30) != 0) {
            FUN_140dd6bf0(*(undefined8 *)(param_1 + 0x30),&LAB_140dd7840);
            *(undefined8 *)(param_1 + 0x30) = 0;
          }
          if (*(longlong *)(param_2 + 0x30) != 0) {
            uVar3 = FUN_140dd6c50(*(undefined8 *)(param_2 + 0x30),FUN_140d765d0,&LAB_140dd7840);
            *(undefined8 *)(param_1 + 0x30) = uVar3;
            if (*(longlong *)(param_1 + 0x30) == 0) {
              return 0;
            }
            *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
          }
        }
        if (((bVar5) ||
            ((*(longlong *)(param_2 + 0x48) != 0 &&
             ((bVar4 || (*(longlong *)(param_1 + 0x48) == 0)))))) &&
           (iVar2 = FUN_140dd75c0(param_1,*(undefined8 *)(param_2 + 0x48),
                                  *(undefined8 *)(param_2 + 0x50)), iVar2 == 0)) {
          uVar3 = 0;
        }
        else if (((bVar5) ||
                 ((*(longlong *)(param_2 + 0x58) != 0 &&
                  ((bVar4 || (*(longlong *)(param_1 + 0x58) == 0)))))) &&
                (iVar2 = FUN_140dd7630(param_1,*(undefined8 *)(param_2 + 0x58),
                                       *(undefined8 *)(param_2 + 0x60)), iVar2 == 0)) {
          uVar3 = 0;
        }
        else {
          *(undefined *)(param_1 + 0x68) = *(undefined *)(param_2 + 0x68);
          uVar3 = 1;
        }
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=140dd71b0 name=FUN_140dd71b0 */

undefined4 FUN_140dd71b0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  uVar2 = FUN_140dd6e60(param_1,param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return uVar2;
}


/* address=140dd7270 name=FUN_140dd7270 */

undefined8 FUN_140dd7270(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return 1;
}


/* address=140dd72f0 name=FUN_140dd72f0 */

void FUN_140dd72f0(longlong param_1,undefined4 param_2)

{
  FUN_140dfe130(param_1 + 0x18,param_2);
  return;
}


/* address=140dd7320 name=FUN_140dd7320 */

void FUN_140dd7320(longlong param_1,undefined4 param_2)

{
  FUN_140e2f480(param_1 + 0x1c,param_2);
  return;
}


/* address=140dd7350 name=FUN_140dd7350 */

void FUN_140dd7350(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


/* address=140dd73a0 name=FUN_140dd73a0 */

void FUN_140dd73a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 2;
  return;
}


/* address=140dd7450 name=FUN_140dd7450 */

undefined8 FUN_140dd7450(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_140dd6d20(*(undefined8 *)(param_1 + 0x28),FUN_140ddd5a0);
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_140dd6d80(param_2,FUN_140dba490,FUN_140ddd5a0);
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      if (*(longlong *)(param_1 + 0x28) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


/* address=140dd74e0 name=FUN_140dd74e0 */

bool FUN_140dd74e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_140dd7860(param_1,0,param_2,param_3);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x68) = 1;
  }
  return iVar1 != 0;
}


/* address=140dd7580 name=FUN_140dd7580 */

void FUN_140dd7580(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}


/* address=140dd75c0 name=FUN_140dd75c0 */

undefined8 FUN_140dd75c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140dd77c0(param_2,0,param_3);
  if ((lVar2 == 0) &&
     (iVar1 = FUN_140dd7b10(param_1 + 0x48,param_1 + 0x50,param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  *(undefined *)(param_1 + 0x68) = 1;
  return 0;
}


/* address=140dd7630 name=FUN_140dd7630 */

undefined8 FUN_140dd7630(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (((param_3 == 4) || (param_3 == 0x10)) &&
     (iVar1 = FUN_140dd7b10(param_1 + 0x58,param_1 + 0x60,param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  *(undefined *)(param_1 + 0x68) = 1;
  return 0;
}


/* address=140dd7710 name=FUN_140dd7710 */

undefined4 FUN_140dd7710(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


/* address=140dd7750 name=FUN_140dd7750 */

undefined ** FUN_140dd7750(char *param_1)

{
  int iVar1;
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (4 < local_18) {
      return (undefined **)0x0;
    }
    iVar1 = strcmp((&PTR_s_default_1410b49f0)[local_18 * 0xe],param_1);
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return &PTR_s_default_1410b49f0 + local_18 * 0xe;
}


/* address=140dd77c0 name=FUN_140dd77c0 */

undefined8 FUN_140dd77c0(undefined8 param_1,undefined4 param_2,longlong param_3)

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


/* address=140dd7800 name=FUN_140dd7800 */

undefined8 FUN_140dd7800(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140dd7860 name=FUN_140dd7860 */

undefined8 FUN_140dd7860(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) && (lVar1 = FUN_140dd77c0(param_3,0,param_4), lVar1 != 0)) {
      return 0;
    }
    if ((param_2 == 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_140dd6bf0(*(undefined8 *)(param_1 + 0x30),&LAB_140dd7840);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    lVar1 = FUN_140d76b90(param_3,param_4);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar2 = FUN_140dd6b90();
        *(longlong *)(param_1 + 0x30) = lVar2;
        if (lVar2 == 0) {
          FUN_140d762b0(lVar1);
          return 0;
        }
      }
      lVar2 = FUN_140dd6c20(*(undefined8 *)(param_1 + 0x30),lVar1);
      if (lVar2 == 0) {
        FUN_140d762b0(lVar1);
        lVar1 = FUN_140dd6bb0(*(undefined8 *)(param_1 + 0x30));
        if (lVar1 == 0) {
          FUN_140dd6bd0(*(undefined8 *)(param_1 + 0x30));
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=140dd79b0 name=FUN_140dd79b0 */

void FUN_140dd79b0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    if (param_1[5] != 0) {
      FUN_140dd6d20(param_1[5],FUN_140ddd5a0);
      param_1[5] = 0;
    }
    if (param_1[6] != 0) {
      FUN_140dd6bf0(param_1[6],&LAB_140dd7840);
      param_1[6] = 0;
    }
    if (param_1[8] != 0) {
      FUN_140d762b0(param_1[8]);
      param_1[8] = 0;
    }
    if (param_1[9] != 0) {
      FUN_140d762b0(param_1[9]);
      param_1[9] = 0;
      param_1[10] = 0;
    }
    if (param_1[0xb] != 0) {
      FUN_140d762b0(param_1[0xb]);
      param_1[0xb] = 0;
      param_1[0xc] = 0;
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return;
}


/* address=140dd7b10 name=FUN_140dd7b10 */

undefined8 FUN_140dd7b10(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_140d76c50(param_3,param_4);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (*param_1 != 0) {
        FUN_140d762b0(*param_1);
      }
      *param_1 = lVar1;
      if (param_2 != (longlong *)0x0) {
        *param_2 = param_4;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140dd7bb0 name=FUN_140dd7bb0 */

longlong FUN_140dd7bb0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140d76180(0x60);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140dd9c10(lVar1,0,0x60);
    *(undefined4 *)(lVar1 + 0x50) = 1;
    FUN_140d893c0(lVar1 + 0x38);
    FUN_140d89ca0(lVar1 + 0x58);
  }
  return lVar1;
}


/* address=140dd7c20 name=FUN_140dd7c20 */

void FUN_140dd7c20(longlong param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_140d89300(param_1 + 0x50), iVar1 != 0)) {
    FUN_140d89cc0(&DAT_1414109c8,param_1,param_1 + 0x58);
    FUN_140d276d0(*(undefined8 *)(param_1 + 8));
    FUN_140d276d0(*(undefined8 *)(param_1 + 0x10));
    FUN_140d276d0(*(undefined8 *)(param_1 + 0x18));
    FUN_140d276d0(*(undefined8 *)(param_1 + 0x20));
    FUN_140d276d0(*(undefined8 *)(param_1 + 0x28));
    FUN_140d2d560(*(undefined8 *)(param_1 + 0x40));
    FUN_140d2d560(*(undefined8 *)(param_1 + 0x48));
    FUN_140d89460(param_1 + 0x38);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140dd7d00 name=FUN_140dd7d00 */

undefined8 FUN_140dd7d00(longlong param_1)

{
  FUN_140d892b0(param_1 + 0x50);
  return 1;
}


/* address=140dd7d60 name=FUN_140dd7d60 */

undefined8 FUN_140dd7d60(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


/* address=140dd7da0 name=FUN_140dd7da0 */

undefined8 FUN_140dd7da0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=140dd7dc0 name=FUN_140dd7dc0 */

undefined8 FUN_140dd7dc0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=140dd7de0 name=FUN_140dd7de0 */

undefined8 FUN_140dd7de0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


/* address=140dd8d50 name=FUN_140dd8d50 */

undefined8 * FUN_140dd8d50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140d76180(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return puVar1;
}


/* address=140dd8da0 name=FUN_140dd8da0 */

void FUN_140dd8da0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_140d27660(*param_1);
    FUN_140d27660(param_1[1]);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140dd8eb0 name=FUN_140dd8eb0 */

undefined8 * FUN_140dd8eb0(undefined8 param_1,ulonglong param_2,longlong param_3)

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
  
  iVar1 = FUN_140e3f120(param_3);
  if (iVar1 == 0) {
    local_60 = (undefined8 *)0x0;
  }
  else if (*(longlong *)(param_3 + 0x28) == 0) {
    FUN_140d186f0(10,0,0x65,s_D__a_1_s_target_release_build_bo_1413ed810,600);
    local_60 = (undefined8 *)0x0;
  }
  else {
    local_48 = 0;
    local_58 = 0;
    local_68 = 0;
    local_60 = (undefined8 *)0x0;
    FUN_140d27630(local_40);
    FUN_140d27630(local_28);
    lVar3 = FUN_140d275e0();
    uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    if (lVar3 != 0) {
      local_68 = FUN_140d27f30();
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
      if (local_68 != 0) {
        local_70 = 0;
        local_res10 = param_2;
        do {
          uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
          iVar1 = FUN_140dd9c50(param_3,local_68,&local_48,&local_58);
          if (iVar1 == 0) goto LAB_140dd91a9;
          uVar2 = FUN_140d278e0(*(undefined8 *)(param_3 + 0x10));
          if (uVar2 < local_res10) {
            uVar2 = FUN_140d278e0(*(undefined8 *)(param_3 + 0x10));
            local_res10 = (ulonglong)uVar2;
          }
          lVar4 = FUN_140d27ab0(param_1,local_res10,local_40);
          if (lVar4 == 0) goto LAB_140dd91a9;
          iVar1 = FUN_140d2f6a0(*(undefined8 *)(param_3 + 0x10));
          local_50 = (longlong)iVar1;
          iVar1 = FUN_140d2f8b0(local_40,local_50);
          if ((iVar1 == 0) || (iVar1 = FUN_140d2f8b0(local_28,local_50), iVar1 == 0))
          goto LAB_140dd91a9;
          FUN_140d3d2a0(local_40[0],0,**(undefined8 **)(param_3 + 0x10),local_28[0],local_50);
          lVar4 = local_68;
          iVar1 = FUN_140dd9e70(local_28,*(undefined8 *)(param_3 + 0x28),local_58,
                                *(undefined8 *)(param_3 + 0x48),local_68);
          uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
          if (iVar1 == 0) goto LAB_140dd91a9;
          lVar4 = local_68;
          iVar1 = FUN_140d3e2b0(lVar3,local_28,local_40,*(undefined8 *)(param_3 + 0x10),local_68);
          uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
          if (iVar1 == 0) goto LAB_140dd91a9;
          in_stack_ffffffffffffff78 = local_68;
          iVar1 = FUN_140dd9e70(lVar3,lVar3,local_48,*(undefined8 *)(param_3 + 0x48),local_68);
          uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
          if (iVar1 == 0) goto LAB_140dd91a9;
          iVar1 = FUN_140d29a20(local_58);
          if (iVar1 == 0) {
            iVar1 = FUN_140d29a20(lVar3);
            uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
            if (iVar1 == 0) {
              local_60 = (undefined8 *)FUN_140dd8d50();
              if (local_60 != (undefined8 *)0x0) {
                *local_60 = local_58;
                local_60[1] = lVar3;
              }
              goto LAB_140dd91a9;
            }
          }
          local_70 = local_70 + 1;
        } while (local_70 <= DAT_1410b4c20);
        uVar5 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff78 >> 0x20),0x29e);
        FUN_140d186f0(10,0,0x6c,s_D__a_1_s_target_release_build_bo_1413ed870,uVar5);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      }
    }
LAB_140dd91a9:
    if (local_60 == (undefined8 *)0x0) {
      FUN_140d186f0(10,0,3,s_D__a_1_s_target_release_build_bo_1413ed8d0,CONCAT44(uVar6,0x2ad));
      FUN_140d27660(local_58);
      FUN_140d27660(lVar3);
    }
    FUN_140d27fa0(local_68);
    FUN_140d276d0(local_40);
    FUN_140d276d0(local_28);
    FUN_140d276d0(local_48);
  }
  return local_60;
}


/* address=140dd9290 name=FUN_140dd9290 */

int FUN_140dd9290(uint *param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4,
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
  iVar1 = FUN_140e3f120(param_5);
  if (iVar1 == 0) {
    local_68 = 0;
  }
  else if (*(longlong *)(param_5 + 0x20) == 0) {
    FUN_140d186f0(10,0,0x65,s_D__a_1_s_target_release_build_bo_1413ed930,CONCAT44(uVar6,0x2ca));
    local_68 = 0;
  }
  else {
    local_68 = 0;
    FUN_140d27630(local_50);
    FUN_140d27630(local_38);
    FUN_140d27630(local_20);
    lVar3 = FUN_140d27f30();
    if (lVar3 != 0) {
      iVar1 = FUN_140d29a20(*param_4);
      if (((iVar1 == 0) && (iVar1 = FUN_140d27a70(*param_4), iVar1 == 0)) &&
         (iVar1 = FUN_140d29780(*param_4,*(undefined8 *)(param_5 + 0x10)), iVar1 < 0)) {
        iVar1 = FUN_140d29a20(param_4[1]);
        if (((iVar1 == 0) && (iVar1 = FUN_140d27a70(param_4[1]), iVar1 == 0)) &&
           (iVar1 = FUN_140d29780(param_4[1],*(undefined8 *)(param_5 + 0x10)), iVar1 < 0)) {
          lVar4 = FUN_140d2cd40(local_38,param_4[1],*(undefined8 *)(param_5 + 0x10),lVar3);
          if (lVar4 != 0) {
            uVar2 = FUN_140d27880(*(undefined8 *)(param_5 + 0x10));
            local_res18 = param_3;
            if (uVar2 >> 3 < param_3) {
              local_res18 = (ulonglong)(uVar2 >> 3);
            }
            lVar4 = FUN_140d27ab0(param_2,local_res18,local_50);
            if (lVar4 != 0) {
              lVar4 = lVar3;
              iVar1 = FUN_140d2aba0(local_50,local_50,local_38,*(undefined8 *)(param_5 + 0x10),lVar3
                                   );
              uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
              if (iVar1 != 0) {
                lVar4 = lVar3;
                iVar1 = FUN_140d2aba0(local_38,*param_4,local_38,*(undefined8 *)(param_5 + 0x10),
                                      lVar3);
                uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
                if ((iVar1 != 0) &&
                   (iVar1 = FUN_140d3f3e0(param_5 + 0x40,param_5 + 0x38,*(undefined8 *)(param_5 + 8)
                                          ,lVar3), iVar1 != 0)) {
                  puVar5 = local_38;
                  iVar1 = FUN_140d2f0c0(local_20,*(undefined8 *)(param_5 + 0x18),local_50,
                                        *(undefined8 *)(param_5 + 0x20),puVar5,
                                        *(undefined8 *)(param_5 + 8),lVar3,
                                        *(undefined8 *)(param_5 + 0x40));
                  uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
                  if (iVar1 != 0) {
                    lVar4 = lVar3;
                    iVar1 = FUN_140d28a10(0,local_50,local_20,*(undefined8 *)(param_5 + 0x10),lVar3)
                    ;
                    uVar6 = (undefined4)((ulonglong)lVar4 >> 0x20);
                    if (iVar1 != 0) {
                      iVar1 = FUN_140d29780(local_50,*param_4);
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
      FUN_140d186f0(10,0,3,s_D__a_1_s_target_release_build_bo_1413ed990,CONCAT44(uVar6,0x318));
    }
    FUN_140d27fa0(lVar3);
    FUN_140d27660(local_50);
    FUN_140d27660(local_38);
    FUN_140d27660(local_20);
  }
  return local_68;
}


/* address=140dd9750 name=FUN_140dd9750 */

undefined4
FUN_140dd9750(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
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
  local_20 = FUN_140dd8d50();
  if ((((local_20 != 0) &&
       (local_10[0] = param_4, lVar2 = FUN_140e3ed20(&local_20,local_10,(undefined4)param_5),
       lVar2 != 0)) && (local_10[0] == param_4 + param_5)) &&
     (((iVar1 = FUN_140e3edc0(local_20,&local_18), -1 < iVar1 && (iVar1 == param_5)) &&
      (iVar1 = FUN_140dd9b80(param_4,local_18,param_5), iVar1 == 0)))) {
    local_24 = FUN_140dd9290(param_1,param_2,param_3,local_20,param_6);
  }
  FUN_140d762b0(local_18);
  FUN_140dd8da0(local_20);
  return local_24;
}


/* address=140dd9870 name=FUN_140dd9870 */

ulonglong FUN_140dd9870(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_140d278e0(*(undefined8 *)(param_1 + 0x10));
    uVar3 = (ulonglong)uVar1;
    lVar2 = FUN_140dd9f20(uVar3 + 1);
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
        lVar2 = FUN_140dd9f20(uVar3);
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


/* address=140dd9b80 name=FUN_140dd9b80 */

int FUN_140dd9b80(void *param_1,void *param_2,size_t param_3)

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


/* address=140dd9bc0 name=FUN_140dd9bc0 */

undefined8 FUN_140dd9bc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140dd9c10 name=FUN_140dd9c10 */

undefined8 FUN_140dd9c10(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140dd9c50 name=FUN_140dd9c50 */

undefined4 FUN_140dd9c50(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

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
  FUN_140d27630(local_20);
  local_30 = FUN_140d275e0();
  local_28 = FUN_140d275e0();
  if ((local_30 != 0) && (local_28 != 0)) {
    iVar1 = FUN_140d2bea0(local_20,1,*(undefined8 *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_140d3f3e0(param_1 + 0x40,param_1 + 0x38,*(undefined8 *)(param_1 + 8),param_2);
      if (iVar1 != 0) {
        iVar1 = FUN_140d3f3e0(param_1 + 0x48,param_1 + 0x38,*(undefined8 *)(param_1 + 0x10),param_2)
        ;
        if (iVar1 != 0) {
          uVar2 = param_2;
          iVar1 = FUN_140d2e1d0(local_30,*(undefined8 *)(param_1 + 0x18),local_20,
                                *(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x40)
                               );
          uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
          if (iVar1 != 0) {
            uVar2 = param_2;
            iVar1 = FUN_140d28a10(0,local_30,local_30,*(undefined8 *)(param_1 + 0x10),param_2);
            uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
            if (iVar1 != 0) {
              uVar2 = *(undefined8 *)(param_1 + 0x48);
              iVar1 = FUN_140d3f240(local_28,local_20,*(undefined8 *)(param_1 + 0x10),param_2,uVar2)
              ;
              uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
              if (iVar1 != 0) {
                FUN_140d276d0(*param_3);
                *param_3 = local_28;
                local_28 = 0;
                FUN_140d276d0(*param_4);
                *param_4 = local_30;
                local_30 = 0;
                local_38 = 1;
                goto LAB_140dd9e38;
              }
            }
          }
        }
      }
    }
  }
  FUN_140d186f0(10,0,3,s_D__a_1_s_target_release_build_bo_1413ed9f0,CONCAT44(uVar3,0x39f));
LAB_140dd9e38:
  FUN_140d276d0(local_20);
  FUN_140d276d0(local_30);
  FUN_140d276d0(local_28);
  return local_38;
}


/* address=140dd9e70 name=FUN_140dd9e70 */

undefined4
FUN_140dd9e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  FUN_140d28030(param_5);
  lVar2 = FUN_140d28090(param_5);
  if (lVar2 != 0) {
    iVar1 = FUN_140d2d670(lVar2,param_2,param_4,param_5);
    if (iVar1 != 0) {
      iVar1 = FUN_140d2d750(param_1,lVar2,param_3,param_4,param_5);
      if (iVar1 != 0) {
        local_18 = 1;
        goto LAB_140dd9eff;
      }
    }
  }
  local_18 = 0;
LAB_140dd9eff:
  FUN_140d281e0(param_5);
  return local_18;
}


/* address=140dd9f20 name=FUN_140dd9f20 */

longlong FUN_140dd9f20(ulonglong param_1)

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


/* address=140dd9f70 name=FUN_140dd9f70 */

longlong FUN_140dd9f70(wchar_t *param_1)

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
     (lVar3 = FUN_140d71850(local_38), lVar3 != 0)) {
    FUN_140d186f0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413eda50,0x6b);
  }
  else {
    iVar2 = FUN_140ddacf0(local_18,&local_44);
    if (iVar2 == 0) {
      FUN_140d186f0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413edac0,0x6f);
    }
    else {
      iVar2 = FUN_140d71a50(local_28,local_48);
      if ((iVar2 == 0) || (local_48[0] != '\0')) {
        FUN_140d186f0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413edb30,0x76);
      }
      else {
        local_40 = FUN_140d70940();
        if ((local_40 != 0) && (iVar2 = FUN_140d71120(local_40,local_44), iVar2 != 0)) {
          if (*(longlong *)(*(longlong *)(local_40 + 0x10) + 0x18) == 0) {
            FUN_140d186f0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413edba0,0x83);
          }
          else {
            iVar2 = (**(code **)(*(longlong *)(local_40 + 0x10) + 0x18))(local_40,local_18,local_28)
            ;
            if (iVar2 != 0) {
              return local_40;
            }
          }
        }
        FUN_140d709a0(local_40);
      }
    }
  }
  return 0;
}


/* address=140dda120 name=FUN_140dda120 */

undefined8 FUN_140dda120(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x20) == 0)) {
    FUN_140d186f0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413edc10,0x93);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x20))(param_1,param_2);
  }
  return uVar1;
}


/* address=140dda190 name=FUN_140dda190 */

longlong FUN_140dda190(wchar_t *param_1)

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
  if ((((uVar1 == 0) || (iVar2 = FUN_140d72240(local_40,&local_48), iVar2 == 0)) || (local_48 != 0))
     || ((uVar1 = wcstoul((wchar_t *)local_40,local_30,0x20000010), uVar1 == 0 ||
         (uVar1 = wcstoul((wchar_t *)local_40,local_20,4), uVar1 == 0)))) {
    FUN_140d186f0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413edc80,0xa4);
  }
  else {
    iVar2 = FUN_140ddacf0(local_30,local_58);
    if (iVar2 == 0) {
      FUN_140d186f0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413edcf0,0xa8);
    }
    else {
      local_50 = FUN_140d70940();
      if ((local_50 != 0) && (iVar2 = FUN_140d71120(local_50,local_58[0]), iVar2 != 0)) {
        if (*(longlong *)(*(longlong *)(local_50 + 0x10) + 0x30) == 0) {
          FUN_140d186f0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413edd60,0xb7);
        }
        else {
          iVar2 = (**(code **)(*(longlong *)(local_50 + 0x10) + 0x30))(local_50,local_30,local_20);
          if (iVar2 != 0) {
            return local_50;
          }
        }
      }
      FUN_140d709a0(local_50);
    }
  }
  return 0;
}


/* address=140dda310 name=FUN_140dda310 */

undefined8 FUN_140dda310(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38) == 0)) {
    FUN_140d186f0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413eddd0,199);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_2 + 0x10) + 0x38))(param_1,param_2);
  }
  return uVar1;
}


/* address=140dda430 name=FUN_140dda430 */

longlong FUN_140dda430(int param_1,longlong *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  longlong local_28;
  undefined local_20 [32];
  
  if (param_4 < 0) {
    FUN_140d186f0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413edeb0,0xfa);
    return 0;
  }
  FUN_140d717c0(local_20,*param_3,(longlong)param_4);
  local_28 = FUN_140ddade0(local_20,param_1);
  if (local_28 == 0) {
    FUN_140d18390();
    FUN_140d717c0(local_20,*param_3,(longlong)param_4);
    local_28 = FUN_140dda190(local_20);
    if (local_28 == 0) {
      return 0;
    }
    if (*(int *)(local_28 + 4) != param_1) {
      FUN_140d186f0(6,0,0x67,s_D__a_1_s_target_release_build_bo_1413edf20,0x10b);
      FUN_140d709a0(local_28);
      return 0;
    }
  }
  if (param_2 != (longlong *)0x0) {
    FUN_140d709a0(*param_2);
    *param_2 = local_28;
  }
  uVar1 = FUN_140d71830(local_20);
  *param_3 = uVar1;
  return local_28;
}


/* address=140dda570 name=FUN_140dda570 */

longlong FUN_140dda570(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    FUN_140d186f0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413edf90,0x131);
    lVar1 = 0;
  }
  else {
    FUN_140d717c0(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_140dda190(local_18);
    if (lVar1 == 0) {
      FUN_140d18390();
      lVar1 = FUN_140ddaf30(*param_2,(longlong)param_3);
      if (lVar1 == 4) {
        lVar1 = FUN_140dda430(0x198,param_1,param_2,param_3);
      }
      else if (lVar1 == 6) {
        lVar1 = FUN_140dda430(0x74,param_1,param_2,param_3);
      }
      else {
        lVar1 = FUN_140dda430(6,param_1,param_2,param_3);
      }
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140d709a0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_140d71830(local_18);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140dda7e0 name=FUN_140dda7e0 */

undefined8 FUN_140dda7e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_140d73a80(local_38,0x80);
    if ((iVar1 != 0) && (iVar1 = FUN_140dda120(local_38,param_1), iVar1 != 0)) {
      uVar2 = FUN_140e3a1f0(local_38,param_2);
      return uVar2;
    }
    FUN_140d73b40(local_38);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* address=140dda850 name=FUN_140dda850 */

longlong FUN_140dda850(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d717c0(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_140dd9f70(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140d709a0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_140d71830(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140dda8f0 name=FUN_140dda8f0 */

undefined4 FUN_140dda8f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0xffffffff;
    lVar2 = FUN_140d70940();
    if ((lVar2 != 0) && (iVar1 = FUN_140d70dc0(lVar2,param_1), iVar1 != 0)) {
      local_18 = FUN_140dda7e0(lVar2,param_2);
    }
    FUN_140d709a0(lVar2);
  }
  return local_18;
}


/* address=140dda970 name=FUN_140dda970 */

longlong FUN_140dda970(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    lVar2 = 0;
  }
  else {
    FUN_140d717c0(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_140dd9f70(local_18);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_140d70e80(lVar1);
      FUN_140d709a0(lVar1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_140d52a50(*param_1);
          *param_1 = lVar2;
        }
        uVar3 = FUN_140d71830(local_18);
        *param_2 = uVar3;
      }
    }
  }
  return lVar2;
}


/* address=140ddaa30 name=FUN_140ddaa30 */

undefined4 FUN_140ddaa30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0xffffffff;
    lVar2 = FUN_140d70940();
    if ((lVar2 != 0) && (iVar1 = FUN_140d70ec0(lVar2,param_1), iVar1 != 0)) {
      local_18 = FUN_140dda7e0(lVar2,param_2);
    }
    FUN_140d709a0(lVar2);
  }
  return local_18;
}


/* address=140ddaab0 name=FUN_140ddaab0 */

longlong FUN_140ddaab0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    lVar2 = 0;
  }
  else {
    FUN_140d717c0(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_140dd9f70(local_18);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_140d70f80(lVar1);
      FUN_140d709a0(lVar1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_140dd7c20(*param_1);
          *param_1 = lVar2;
        }
        uVar3 = FUN_140d71830(local_18);
        *param_2 = uVar3;
      }
    }
  }
  return lVar2;
}


/* address=140ddab70 name=FUN_140ddab70 */

undefined4 FUN_140ddab70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = 0xffffffff;
    lVar2 = FUN_140d70940();
    if ((lVar2 != 0) && (iVar1 = FUN_140d70fc0(lVar2,param_1), iVar1 != 0)) {
      local_18 = FUN_140dda7e0(lVar2,param_2);
    }
    FUN_140d709a0(lVar2);
  }
  return local_18;
}


/* address=140ddabf0 name=FUN_140ddabf0 */

longlong FUN_140ddabf0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    lVar2 = 0;
  }
  else {
    FUN_140d717c0(local_18,*param_2,(longlong)param_3);
    lVar1 = FUN_140dd9f70(local_18);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_140d71080(lVar1);
      FUN_140d709a0(lVar1);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_140d57380(*param_1);
          *param_1 = lVar2;
        }
        uVar3 = FUN_140d71830(local_18);
        *param_2 = uVar3;
      }
    }
  }
  return lVar2;
}


/* address=140ddacb0 name=FUN_140ddacb0 */

int FUN_140ddacb0(void *param_1,void *param_2,size_t param_3)

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


/* address=140ddacf0 name=FUN_140ddacf0 */

undefined8 FUN_140ddacf0(wchar_t *param_1,undefined4 *param_2)

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
      puVar2 = (undefined4 *)(&PTR_DAT_1410b4c28)[local_38];
      uVar5 = FUN_140d71850(local_18);
      if (uVar5 == *(byte *)((longlong)puVar2 + 0xd)) {
        uVar1 = *(undefined *)((longlong)puVar2 + 0xd);
        uVar6 = FUN_140d71830(local_18);
        iVar4 = FUN_140ddacb0(uVar6,puVar2 + 1,uVar1);
        if (iVar4 == 0) {
          *param_2 = *puVar2;
          return 1;
        }
      }
    }
  }
  return 0;
}


/* address=140ddade0 name=FUN_140ddade0 */

longlong FUN_140ddade0(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140d70940();
  if (lVar2 != 0) {
    if (param_2 == 6) {
      lVar3 = FUN_140ded040(param_1);
      if ((lVar3 != 0) && (iVar1 = FUN_140d70e00(lVar2,lVar3), iVar1 != 0)) {
        return lVar2;
      }
      FUN_140d52a50(lVar3);
    }
    else if (param_2 == 0x74) {
      lVar3 = FUN_140e3e8f0(param_1);
      if ((lVar3 != 0) && (iVar1 = FUN_140d70f00(lVar2,lVar3), iVar1 != 0)) {
        return lVar2;
      }
      FUN_140dd7c20(lVar3);
    }
    else if (param_2 == 0x198) {
      lVar3 = FUN_140e3ab50(param_1,0);
      if ((lVar3 != 0) && (iVar1 = FUN_140d71000(lVar2,lVar3), iVar1 != 0)) {
        return lVar2;
      }
      FUN_140d57380(lVar3);
    }
    else {
      FUN_140d186f0(6,0,0x7f,s_D__a_1_s_target_release_build_bo_1413ede40,0xee);
    }
    FUN_140d709a0(lVar2);
  }
  return 0;
}


/* address=140ddaf30 name=FUN_140ddaf30 */

longlong FUN_140ddaf30(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong local_38;
  wchar_t *local_30 [2];
  wchar_t local_20 [16];
  
  FUN_140d717c0(local_20,param_1,param_2);
  uVar1 = wcstoul(local_20,local_30,0x20000010);
  if (uVar1 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = 0;
    while (lVar2 = FUN_140d71850(local_30), lVar2 != 0) {
      pvVar3 = _aligned_recalloc(local_30,0,0,0);
      if ((int)pvVar3 == 0) {
        return 0;
      }
      local_38 = local_38 + 1;
    }
  }
  return local_38;
}


/* address=140ddb240 name=FUN_140ddb240 */

void FUN_140ddb240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e3c100(&LAB_140ddc880,s_X509_CRL_1413ee168,param_1,param_2,param_3,param_4);
  return;
}


/* address=140ddc5c0 name=FUN_140ddc5c0 */

longlong FUN_140ddc5c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140d70e80(param_1);
    FUN_140d709a0(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_140d52a50(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=140ddc640 name=FUN_140ddc640 */

longlong FUN_140ddc640(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140d70f80(param_1);
    FUN_140d709a0(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_140dd7c20(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=140ddc6c0 name=FUN_140ddc6c0 */

longlong FUN_140ddc6c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_140d71080(param_1);
    FUN_140d709a0(param_1);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else if (param_2 != (longlong *)0x0) {
      FUN_140d57380(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}


/* address=140ddd180 name=FUN_140ddd180 */

longlong FUN_140ddd180(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  wchar_t *local_18 [3];
  
  lVar3 = FUN_140d4f870();
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = wcstoul(param_1,local_18,0x20000010);
  if (((uVar1 != 0) && (iVar2 = FUN_140ddd440(local_18,lVar3), iVar2 != 0)) &&
     (iVar2 = FUN_140ddd440(local_18,lVar3 + 8), iVar2 != 0)) {
    lVar4 = FUN_140d71850(local_18);
    if (lVar4 != 0) {
      iVar2 = FUN_140d72240(local_18,&local_20);
      if ((iVar2 == 0) || (0xffffffff < CONCAT44(uStack_1c,local_20))) goto LAB_140ddd241;
      *(undefined4 *)(lVar3 + 0x28) = local_20;
    }
    lVar4 = FUN_140d71850(local_18);
    if (lVar4 == 0) {
      return lVar3;
    }
  }
LAB_140ddd241:
  FUN_140d186f0(5,0,0x68,s_D__a_1_s_target_release_build_bo_1413ee550,0x74);
  FUN_140d4f8d0(lVar3);
  return 0;
}


/* address=140ddd280 name=FUN_140ddd280 */

undefined8 FUN_140ddd280(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_140d741d0(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_140ddd4b0(local_38,*param_2), iVar1 != 0)) &&
      (iVar1 = FUN_140ddd4b0(local_38,param_2[1]), iVar1 != 0)) &&
     (((*(int *)(param_2 + 5) == 0 ||
       (iVar1 = FUN_140d74690(local_38,*(undefined4 *)(param_2 + 5)), iVar1 != 0)) &&
      (iVar1 = FUN_140d73c90(param_1), iVar1 != 0)))) {
    return 1;
  }
  FUN_140d186f0(5,0,0x69,s_D__a_1_s_target_release_build_bo_1413ee5c0,0x81);
  return 0;
}


/* address=140ddd340 name=FUN_140ddd340 */

longlong FUN_140ddd340(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d717c0(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_140ddd180(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140d4f8d0(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_140d71830(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140ddd3e0 name=FUN_140ddd3e0 */

undefined8 FUN_140ddd3e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_140d73a80(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_140ddd280(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_140e3a1f0(local_38,param_2);
    return uVar2;
  }
  FUN_140d73b40(local_38);
  return 0xffffffff;
}


/* address=140ddd440 name=FUN_140ddd440 */

undefined8 FUN_140ddd440(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    FID_conflict__assert((wchar_t *)s___1413ee4c0,(wchar_t *)s_D_1413ee3f0,0x46);
  }
  lVar1 = FUN_140d275e0();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140e40ac0(param_1,*param_2);
  }
  return uVar2;
}


/* address=140ddd4b0 name=FUN_140ddd4b0 */

undefined8 FUN_140ddd4b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_140d186f0(5,0,0x43,s_D__a_1_s_target_release_build_bo_1413ee4e0,0x51);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e40ba0(param_1,param_2);
  }
  return uVar1;
}


/* address=140ddd500 name=FUN_140ddd500 */

undefined8
FUN_140ddd500(undefined4 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
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
    uVar1 = FUN_140dba490(&local_38);
  }
  else {
    FUN_140d186f0(0xc,0,0xad,s_D__a_1_s_target_release_build_bo_1413ee9e0,0xde);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140ddd5a0 name=FUN_140ddd5a0 */

void FUN_140ddd5a0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)(param_1 + 4) & 4) != 0) {
      FUN_140d762b0(*param_1);
      FUN_140d762b0(param_1[1]);
      param_1[1] = 0;
      *param_1 = 0;
    }
    if ((*(uint *)(param_1 + 4) & 8) != 0) {
      FUN_140d762b0(param_1[3]);
      param_1[3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      FUN_140d762b0(param_1);
    }
  }
  return;
}


/* address=140ddd890 name=FUN_140ddd890 */

longlong FUN_140ddd890(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  undefined local_20 [32];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (param_3 < 0) {
    FUN_140d186f0(0xc,0,0x92,s_D__a_1_s_target_release_build_bo_1413ee900,CONCAT44(uVar3,0x9f));
    lVar2 = 0;
  }
  else {
    FUN_140d717c0(local_20,*param_2,(longlong)param_3);
    iVar1 = FUN_140d72a50(local_20);
    if (iVar1 == 0) {
      FUN_140d186f0(0xc,0,0x92,s_D__a_1_s_target_release_build_bo_1413ee970,CONCAT44(uVar3,0xa6));
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_140ddd500(0,*param_2,(longlong)param_3,0,0);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_140ddd5a0(*param_1);
          *param_1 = lVar2;
        }
        *param_2 = (longlong)param_3 + *param_2;
      }
    }
  }
  return lVar2;
}


/* address=140ddd9a0 name=FUN_140ddd9a0 */

void FUN_140ddd9a0(undefined8 param_1,longlong param_2)

{
  undefined auStack_a8 [32];
  int local_88;
  char *local_80;
  undefined4 local_78;
  char *local_70;
  char local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    FUN_140dddb90(param_1,&DAT_1413ee774);
  }
  else {
    local_80 = (char *)0x0;
    local_70 = local_68;
    local_88 = FUN_140dddad0(local_68,0x50,param_2);
    if (0x4f < local_88) {
      local_80 = (char *)FUN_140d76180((longlong)(local_88 + 1));
      if (local_80 == (char *)0x0) goto LAB_140dddaae;
      local_88 = FUN_140dddad0(local_80,local_88 + 1,param_2);
      local_70 = local_80;
    }
    if (local_88 < 1) {
      local_70 = s_<INVALID>_1413ee780;
    }
    local_78 = FUN_140dddb90(param_1,local_70);
    FUN_140d762b0(local_80);
  }
LAB_140dddaae:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140dddad0 name=FUN_140dddad0 */

void FUN_140dddad0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_140dbace0(param_1,param_2,param_3,0);
  return;
}


/* address=140dddb10 name=FUN_140dddb10 */

undefined8 * FUN_140dddb10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140d76180(0x28);
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


/* address=140dddb90 name=FUN_140dddb90 */

int FUN_140dddb90(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int local_18;
  int local_10;
  
  sVar2 = strlen(param_2);
  if (sVar2 < 0x80000000) {
    iVar1 = FUN_140d149f0(param_1,param_2,sVar2 & 0xffffffff);
    local_10 = (int)sVar2;
    local_18 = local_10;
    if (iVar1 != local_10) {
      local_18 = -1;
    }
  }
  else {
    FUN_140d186f0(0xc,0,0x45,s_D__a_1_s_target_release_build_bo_1413ee710,0x65);
    local_18 = -1;
  }
  return local_18;
}


/* address=140dddc20 name=FUN_140dddc20 */

void FUN_140dddc20(void)

{
  FUN_140e288b0(&DAT_1410b4c50);
  return;
}


/* address=140dddc40 name=FUN_140dddc40 */

void FUN_140dddc40(undefined8 param_1)

{
  FUN_140e29190(param_1,&DAT_1410b4c50);
  return;
}


/* address=140dddd10 name=FUN_140dddd10 */

void FUN_140dddd10(void)

{
  FUN_140e288b0(&DAT_1410b4c80);
  return;
}


/* address=140dddd30 name=FUN_140dddd30 */

void FUN_140dddd30(undefined8 param_1)

{
  FUN_140e29190(param_1,&DAT_1410b4c80);
  return;
}


/* address=140ddddd0 name=FUN_140ddddd0 */

void FUN_140ddddd0(void)

{
  FUN_140e288b0(&DAT_1410b4cb0);
  return;
}


/* address=140ddddf0 name=FUN_140ddddf0 */

void FUN_140ddddf0(undefined8 param_1)

{
  FUN_140e29190(param_1,&DAT_1410b4cb0);
  return;
}


/* address=140dddf50 name=FUN_140dddf50 */

void FUN_140dddf50(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

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


/* address=140dde200 name=FUN_140dde200 */

undefined8 FUN_140dde200(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (*param_1 != *param_2)) {
    uVar1 = 0xffffffff;
  }
  else {
    switch(*param_1) {
    case 0:
      uVar1 = FUN_140dde3e0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 1:
    case 2:
    case 6:
      uVar1 = FUN_140dc3340(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 3:
      uVar1 = FUN_140dc3340(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 4:
      uVar1 = FUN_140df63d0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 5:
      uVar1 = FUN_140dde360(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 7:
      uVar1 = FUN_140e2ea00(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    case 8:
      uVar1 = FUN_140dba670(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      break;
    default:
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


/* address=140dde360 name=FUN_140dde360 */

undefined8 FUN_140dde360(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == 0) {
    if (*param_2 != 0) {
      return 0xffffffff;
    }
  }
  else if ((*param_2 == 0) || (iVar1 = FUN_140dc3340(*param_1,*param_2), iVar1 != 0)) {
    return 0xffffffff;
  }
  uVar2 = FUN_140dc3340(param_1[1],param_2[1]);
  return uVar2;
}


/* address=140dde3e0 name=FUN_140dde3e0 */

int FUN_140dde3e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_140dba670(*param_1,*param_2,param_3,param_4,0xffffffff);
    if (iVar1 == 0) {
      iVar1 = FUN_140e40f10(param_1[1],param_2[1]);
    }
  }
  return iVar1;
}


/* address=140dde490 name=FUN_140dde490 */

void FUN_140dde490(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140dde4b0 name=FUN_140dde4b0 */

void FUN_140dde4b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140dde4e0 name=FUN_140dde4e0 */

void FUN_140dde4e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140dde460,param_2);
  return;
}


/* address=140dde540 name=FUN_140dde540 */

void FUN_140dde540(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140dde510,param_2);
  return;
}


/* address=140dde570 name=FUN_140dde570 */

void FUN_140dde570(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  FUN_140ddeb70(param_1,0,0x30);
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 8) = param_5;
  *(undefined8 *)(param_1 + 6) = param_4;
  *param_1 = param_6;
  return;
}


/* address=140dde5f0 name=FUN_140dde5f0 */

void FUN_140dde5f0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}


/* address=140dde610 name=FUN_140dde610 */

longlong FUN_140dde610(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_140dde570(local_38,0,0,0,0,0);
    FUN_140dde5f0(local_38,param_1);
    local_res10 = local_38;
  }
  uVar1 = FUN_140ddec10(&local_res20);
  iVar2 = FUN_140ddecb0(&local_res20);
  if (iVar2 == 0) {
    uVar3 = FUN_140dba890(param_3);
    lVar4 = FUN_140ddeda0(param_1,local_res10,uVar3,uVar1,local_res20);
    if (lVar4 == 0) {
      FUN_140d186f0(0x14,0,0x6e,s_D__a_1_s_target_release_build_bo_1413eeb70,0x68);
      FUN_140d18810(4,s_name__1413eebe4,param_3,s___value__1413eebd8,local_res20);
    }
  }
  else {
    lVar4 = FUN_140ddf0c0(param_3,local_res20,uVar1,iVar2,local_res10);
  }
  return lVar4;
}


/* address=140dde880 name=FUN_140dde880 */

undefined8 FUN_140dde880(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong local_30;
  
  lVar2 = FUN_140ddf610(param_1,param_3);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    for (local_30 = 0; uVar3 = FUN_140dde490(lVar2), local_30 < uVar3; local_30 = local_30 + 1) {
      lVar4 = FUN_140dde4b0(lVar2,local_30);
      lVar4 = FUN_140dde610(param_1,param_2,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10)
                           );
      if ((lVar4 == 0) ||
         ((param_4 != 0 && (lVar5 = FUN_140e2f130(param_4,lVar4,0xffffffff), lVar5 == 0)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      FUN_140df8970(lVar4);
      if (!bVar1) {
        return 0;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}


/* address=140ddeb00 name=FUN_140ddeb00 */

undefined8 FUN_140ddeb00(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140e41580(param_1);
  if (lVar1 == 0) {
    FUN_140d186f0(0x14,0,0x9d,s_D__a_1_s_target_release_build_bo_1413eeea0,0xe2);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140ddf290(lVar1,param_1,param_2,param_3);
  }
  return uVar2;
}


/* address=140ddeb70 name=FUN_140ddeb70 */

undefined8 FUN_140ddeb70(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140ddebb0 name=FUN_140ddebb0 */

undefined8 FUN_140ddebb0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_140d186f0(0x14,0,0x93,s_D__a_1_s_target_release_build_bo_1413ef070,400);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140ddf610(*(undefined8 *)(param_1 + 0x28),param_2);
  }
  return uVar1;
}


/* address=140ddec10 name=FUN_140ddec10 */

undefined8 FUN_140ddec10(char **param_1)

{
  int iVar1;
  size_t sVar2;
  char *local_18;
  
  local_18 = *param_1;
  sVar2 = strlen(local_18);
  if ((8 < sVar2) && (iVar1 = strncmp(local_18,s_critical__1413eef08,9), iVar1 == 0)) {
    local_18 = local_18 + 9;
    while (iVar1 = FUN_140d768a0(*local_18), iVar1 != 0) {
      local_18 = local_18 + 1;
    }
    *param_1 = local_18;
    return 1;
  }
  return 0;
}


/* address=140ddecb0 name=FUN_140ddecb0 */

undefined4 FUN_140ddecb0(char **param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 local_18;
  char *local_10;
  
  local_10 = *param_1;
  sVar2 = strlen(local_10);
  if (sVar2 < 4) {
LAB_140dded11:
    sVar2 = strlen(local_10);
    if (4 < sVar2) {
      iVar1 = strncmp(local_10,s_ASN1__1413eef14,5);
      if (iVar1 == 0) {
        local_10 = local_10 + 5;
        local_18 = 2;
        goto LAB_140dded58;
      }
    }
    local_18 = 0;
  }
  else {
    iVar1 = strncmp(local_10,&DAT_1413eec54,4);
    if (iVar1 != 0) goto LAB_140dded11;
    local_10 = local_10 + 4;
    local_18 = 1;
LAB_140dded58:
    while( true ) {
      iVar1 = FUN_140d768a0(*local_10);
      if (iVar1 == 0) break;
      local_10 = local_10 + 1;
    }
    *param_1 = local_10;
  }
  return local_18;
}


/* address=140ddeda0 name=FUN_140ddeda0 */

undefined8
FUN_140ddeda0(longlong param_1,longlong param_2,int param_3,undefined4 param_4,char *param_5)

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
    FUN_140d186f0(0x14,0,0x9e,s_D__a_1_s_target_release_build_bo_1413eebf0,CONCAT44(uVar4,0x8b));
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_140e41580(param_3);
    if (lVar1 == 0) {
      FUN_140d186f0(0x14,0,0x9d,s_D__a_1_s_target_release_build_bo_1413eec60,CONCAT44(uVar4,0x8f));
      uVar3 = 0;
    }
    else {
      if (*(longlong *)(lVar1 + 0x48) == 0) {
        if (*(longlong *)(lVar1 + 0x38) == 0) {
          if (*(longlong *)(lVar1 + 0x58) == 0) {
            FUN_140d186f0(0x14,0,0x73,s_D__a_1_s_target_release_build_bo_1413eee30,
                          CONCAT44(uVar4,0xbd));
            uVar3 = FUN_140dbab60(param_3);
            FUN_140d18810(2,s_name__1413eed34,uVar3);
            return 0;
          }
          if (*(longlong *)(param_2 + 0x28) == 0) {
            FUN_140d186f0(0x14,0,0x8b,s_D__a_1_s_target_release_build_bo_1413eedc0,
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
            FUN_140d186f0(0x14,0,0x8b,s_D__a_1_s_target_release_build_bo_1413eecd0,
                          CONCAT44(uVar4,0x99));
            return 0;
          }
          local_28 = FUN_140ddf610(param_1,param_5 + 1);
        }
        else {
          local_28 = FUN_140dfa4b0(param_5);
          local_20 = local_28;
        }
        if ((local_28 == 0) || (lVar2 = FUN_140dde490(local_28), lVar2 == 0)) {
          FUN_140d186f0(0x14,0,0x79,s_D__a_1_s_target_release_build_bo_1413eed40,
                        CONCAT44(uVar4,0xa2));
          uVar3 = FUN_140dbab60(param_3);
          FUN_140d18810(4,s_name__1413eecc4,uVar3,s__section__1413eeda8,param_5);
          FUN_140dde4e0(local_20,&LAB_140df8ea0);
          return 0;
        }
        local_30 = (**(code **)(lVar1 + 0x48))(lVar1,param_2,local_28);
        FUN_140dde4e0(local_20,&LAB_140df8ea0);
        if (local_30 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_140ddf290(lVar1,param_3,param_4,local_30);
      FUN_140e29190(local_30,*(undefined8 *)(lVar1 + 8));
    }
  }
  return uVar3;
}


/* address=140ddf0c0 name=FUN_140ddf0c0 */

undefined8
FUN_140ddf0c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
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
  local_20 = FUN_140dbac70(param_1,0);
  if (local_20 == 0) {
    FUN_140d186f0(0x14,0,0x71,s_D__a_1_s_target_release_build_bo_1413eef20,0x115);
    FUN_140d18810(2,s_name__1413eef84,param_1);
  }
  else {
    if (param_4 == 1) {
      local_38 = FUN_140df9a70(param_2,&local_28);
    }
    else if (param_4 == 2) {
      local_38 = FUN_140ddf340(param_2,param_5,&local_28);
    }
    if (local_38 == 0) {
      FUN_140d186f0(0x14,0,0x74,s_D__a_1_s_target_release_build_bo_1413eef90,0x121);
      FUN_140d18810(2,s_value__1413eeff4,param_2);
    }
    else if (local_28 < 0x80000000) {
      local_30 = FUN_140e2d900();
      if (local_30 != 0) {
        FUN_140dc35e0(local_30,local_38,local_28 & 0xffffffff);
        local_38 = 0;
        local_18 = FUN_140e2eae0(0,local_20,param_3,local_30);
      }
    }
    else {
      FUN_140d186f0(0x14,0,0x45,s_D__a_1_s_target_release_build_bo_1413ef000,0x127);
    }
  }
  FUN_140ddd5a0(local_20);
  FUN_140e2da20(local_30);
  FUN_140d762b0(local_38);
  return local_18;
}


/* address=140ddf290 name=FUN_140ddf290 */

undefined8 FUN_140ddf290(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  iVar1 = FUN_140e2bb10(param_4,&local_18,*(undefined8 *)(param_1 + 8));
  if (iVar1 < 0) {
    local_10 = 0;
  }
  else {
    lVar2 = FUN_140e2d900();
    if (lVar2 == 0) {
      FUN_140d762b0(local_18);
      local_10 = 0;
    }
    else {
      FUN_140dc35e0(lVar2,local_18,iVar1);
      local_10 = FUN_140e2ea60(0,param_2,param_3,lVar2);
      FUN_140e2da20(lVar2);
    }
  }
  return local_10;
}


/* address=140ddf340 name=FUN_140ddf340 */

undefined8 FUN_140ddf340(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_18 [3];
  
  lVar2 = FUN_140e41c90(param_1,param_2);
  if (lVar2 == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0;
    iVar1 = FUN_140e2e510(lVar2,local_18);
    FUN_140e2e4a0(lVar2);
    if (iVar1 < 0) {
      local_18[0] = 0;
    }
    else {
      *param_3 = (longlong)iVar1;
    }
  }
  return local_18[0];
}


/* address=140ddf3c0 name=FUN_140ddf3c0 */

void FUN_140ddf3c0(void)

{
  FUN_140d19610();
  return;
}


/* address=140ddf3e0 name=FUN_140ddf3e0 */

void FUN_140ddf3e0(undefined8 param_1)

{
  FUN_140d19740(param_1);
  return;
}


/* address=140ddf400 name=FUN_140ddf400 */

void FUN_140ddf400(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19ac0(param_1,param_2);
  return;
}


/* address=140ddf430 name=FUN_140ddf430 */

void FUN_140ddf430(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140ddf610 name=FUN_140ddf610 */

undefined8 FUN_140ddf610(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140de0680(param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}


/* address=140ddf660 name=FUN_140ddf660 */

undefined8 FUN_140ddf660(undefined8 *param_1,char *param_2,undefined8 param_3)

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
  FUN_140ddf920(&local_20,0,0x18);
  local_20 = local_res10;
  local_18 = param_3;
  lVar1 = FUN_140ddfa10(*param_1,&local_20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}


/* address=140ddf740 name=FUN_140ddf740 */

longlong FUN_140ddf740(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140d76180(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140ddf920(lVar1,0,0x18);
  }
  return lVar1;
}


/* address=140ddf790 name=FUN_140ddf790 */

int FUN_140ddf790(char *param_1,char param_2,int param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int local_28;
  char *local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 == (char *)0x0) {
    FUN_140d186f0(0xd,0,100,s_D__a_1_s_target_release_build_bo_1413ef510,0x303);
    iVar1 = 0;
  }
  else {
    while( true ) {
      if (param_3 != 0) {
        while ((*local_20 != '\0' && (iVar1 = FUN_140d768a0(*local_20), iVar1 != 0))) {
          local_20 = local_20 + 1;
        }
      }
      pcVar2 = (char *)FUN_140e73100(local_20,(int)param_2);
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
          while (iVar1 = FUN_140d768a0(*local_18), iVar1 != 0) {
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


/* address=140ddf920 name=FUN_140ddf920 */

undefined8 FUN_140ddf920(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140ddf9c0 name=FUN_140ddf9c0 */

void FUN_140ddf9c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d89f90(param_1,param_2);
  return;
}


/* address=140ddf9f0 name=FUN_140ddf9f0 */

void FUN_140ddf9f0(undefined8 param_1)

{
  FUN_140d8a070(param_1);
  return;
}


/* address=140ddfa10 name=FUN_140ddfa10 */

void FUN_140ddfa10(undefined8 param_1,undefined8 param_2)

{
  FUN_140d8a140(param_1,param_2,&LAB_140ddf990,&LAB_140ddf960);
  return;
}


/* address=140ddfa50 name=FUN_140ddfa50 */

undefined4 FUN_140ddfa50(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_140d8a230(param_1,local_10,param_3,&LAB_140ddf990,&LAB_140ddf960);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=140ddfb00 name=FUN_140ddfb00 */

void FUN_140ddfb00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_140d8a3e0(param_1,&LAB_140ddfac0,&local_18);
  return;
}


/* address=140ddfc90 name=FUN_140ddfc90 */

void FUN_140ddfc90(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_140d762b0(*param_1);
  }
  if (param_1[1] == 0) {
    if (param_1[2] != 0) {
      FUN_140ddf3e0(param_1[2]);
    }
  }
  else {
    FUN_140d762b0(param_1[1]);
    if (param_1[2] != 0) {
      FUN_140d762b0(param_1[2]);
    }
  }
  return;
}


/* address=140ddfd10 name=FUN_140ddfd10 */

void FUN_140ddfd10(undefined8 param_1)

{
  FUN_140ddfc90(param_1);
  FUN_140d762b0(param_1);
  return;
}


/* address=140ddfd70 name=FUN_140ddfd70 */

longlong * FUN_140ddfd70(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_20;
  longlong local_10 [2];
  
  bVar1 = false;
  lVar3 = FUN_140ddf3c0();
  local_20 = (longlong *)FUN_140ddf740();
  if ((lVar3 != 0) && (local_20 != (longlong *)0x0)) {
    lVar4 = FUN_140d765d0(param_2);
    *local_20 = lVar4;
    if (*local_20 != 0) {
      local_20[1] = 0;
      local_20[2] = lVar3;
      iVar2 = FUN_140ddfa50(*param_1,local_10,local_20);
      if (iVar2 != 0) {
        if (local_10[0] != 0) {
          FUN_140ddfd10(local_10[0]);
        }
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    if (lVar3 != 0) {
      FUN_140ddf3e0(lVar3);
    }
    if (local_20 != (longlong *)0x0) {
      FUN_140d762b0(local_20);
    }
    local_20 = (longlong *)0x0;
  }
  return local_20;
}


/* address=140ddfe80 name=FUN_140ddfe80 */

undefined8 FUN_140ddfe80(undefined8 param_1,byte *param_2,longlong *param_3,byte *param_4)

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
  plVar5 = (longlong *)FUN_140e1f100();
  if (plVar5 == (longlong *)0x0) {
    uVar9 = 0;
  }
  else {
    sVar6 = strlen((char *)param_4);
    lVar7 = FUN_140e1f2b0(plVar5,(longlong)((int)sVar6 + 1));
    local_res20 = param_4;
    if (lVar7 == 0) {
LAB_140de0659:
      if (plVar5 != (longlong *)0x0) {
        FUN_140e1f150(plVar5);
      }
      uVar9 = 0;
    }
    else {
LAB_140ddfefc:
      while( true ) {
        while ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res20 * 2) & 0x40) != 0) {
          bVar1 = *local_res20;
          pbVar4 = local_res20;
          while (((local_res20 = pbVar4 + 1,
                  (*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0 &&
                  (*local_res20 != bVar1)) &&
                 (((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res20 * 2) & 0x20) == 0
                  || (local_res20 = pbVar4 + 2,
                     (*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0)
                  )))) {
            *(byte *)(plVar5[1] + (longlong)local_74) = *local_res20;
            local_74 = local_74 + 1;
            pbVar4 = local_res20;
          }
          if (*local_res20 == bVar1) {
            local_res20 = local_res20 + 1;
          }
        }
        if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res20 * 2) & 0x400) == 0)
        break;
        bVar1 = *local_res20;
        pbVar4 = local_res20;
        while (local_res20 = pbVar4 + 1,
              (*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0) {
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
      if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res20 * 2) & 0x20) == 0) {
        if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res20 * 2) & 8) != 0)
        goto LAB_140de0603;
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
          while ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_68 * 2) & 0x107) != 0) {
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
            while ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_68 * 2) & 0x107) != 0)
            {
              local_68 = local_68 + 1;
            }
          }
          pbVar4 = local_68;
          bVar3 = *local_68;
          *local_68 = 0;
          if (bVar1 != 0) {
            if (bVar3 != bVar1) {
              FUN_140d186f0(0xd,0,0x67,s_D__a_1_s_target_release_build_bo_1413ef0e0,0x13a);
              goto LAB_140de0659;
            }
            local_68 = local_68 + 1;
          }
          local_50 = (char *)FUN_140ddf660(param_1,local_28,local_38);
          if (local_30 != (byte *)0x0) {
            *local_30 = bVar2;
          }
          *pbVar4 = bVar3;
          if (local_50 == (char *)0x0) {
            FUN_140d186f0(0xd,0,0x69,s_D__a_1_s_target_release_build_bo_1413ef140,0x14d);
            goto LAB_140de0659;
          }
          sVar6 = strlen(local_50);
          uVar8 = (sVar6 + *plVar5) - ((longlong)local_68 - (longlong)local_res20);
          if (0x10000 < uVar8) {
            FUN_140d186f0(0xd,0,0x6a,s_D__a_1_s_target_release_build_bo_1413ef1a0,0x152);
            goto LAB_140de0659;
          }
          lVar7 = FUN_140e1f330(plVar5,uVar8);
          if (lVar7 == 0) goto LAB_140de0659;
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
        goto LAB_140ddfefc;
      }
      local_78 = local_res20[1];
      local_res20 = local_res20 + 2;
      if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)local_78 * 2) & 8) == 0) {
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
        goto LAB_140ddfefc;
      }
LAB_140de0603:
      *(undefined *)(plVar5[1] + (longlong)local_74) = 0;
      if (*param_3 != 0) {
        FUN_140d762b0(*param_3);
      }
      *param_3 = plVar5[1];
      FUN_140d762b0(plVar5);
      uVar9 = 1;
    }
  }
  return uVar9;
}


/* address=140de0680 name=FUN_140de0680 */

void FUN_140de0680(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_28 [5];
  
  FUN_140ddf920(local_28,0,0x18);
  local_28[0] = param_2;
  FUN_140ddfa10(*param_1,local_28);
  return;
}


/* address=140de06d0 name=FUN_140de06d0 */

undefined8 FUN_140de06d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = param_2[2];
  uVar2 = FUN_140d765d0(*param_2);
  *param_3 = uVar2;
  lVar3 = FUN_140ddf430(local_10,param_3);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_140ddfa50(*param_1,&local_18,param_3);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (local_18 != 0) {
        FUN_140ddf400(local_10,local_18);
        FUN_140ddfd10(local_18);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140de0770 name=FUN_140de0770 */

byte * FUN_140de0770(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  
  local_res10 = param_2;
  while (((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 0x10) != 0 &&
         ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 8) == 0))) {
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=140de07e0 name=FUN_140de07e0 */

byte * FUN_140de07e0(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  byte *local_18;
  
  local_res10 = param_2;
  while( true ) {
    while ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) != 0) {
      if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)local_res10[1] * 2) & 8) == 0) {
        local_18 = local_res10 + 2;
      }
      else {
        local_18 = local_res10 + 1;
      }
      local_res10 = local_18;
    }
    if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 0x307) == 0) break;
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=140de08b0 name=FUN_140de08b0 */

byte * FUN_140de08b0(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  
  local_res10 = param_2 + 1;
  while( true ) {
    if (((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0) ||
       (*local_res10 == *param_2)) {
      if (*local_res10 == *param_2) {
        local_res10 = local_res10 + 1;
      }
      return local_res10;
    }
    if (((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) != 0) &&
       (local_res10 = local_res10 + 1,
       (*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0)) break;
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=140de09a0 name=FUN_140de09a0 */

byte * FUN_140de09a0(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte *local_res10;
  
  bVar1 = *param_2;
  local_res10 = param_2 + 1;
  while ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 8) == 0) {
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


/* address=140de0a50 name=FUN_140de0a50 */

void FUN_140de0a50(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  byte *local_18;
  
  local_res10 = param_2;
  while( true ) {
    if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 0x800) != 0) {
      *local_res10 = 0;
      return;
    }
    if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 0x10) == 0) break;
    local_res10 = local_res10 + 1;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 0x80) != 0) {
            *local_res10 = 0;
            return;
          }
          if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 0x400) == 0)
          break;
          local_res10 = (byte *)FUN_140de09a0(param_1,local_res10);
        }
        if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 0x40) == 0)
        break;
        local_res10 = (byte *)FUN_140de08b0(param_1,local_res10);
      }
      if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) == 0) break;
      if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)local_res10[1] * 2) & 8) == 0) {
        local_18 = local_res10 + 2;
      }
      else {
        local_18 = local_res10 + 1;
      }
      local_res10 = local_18;
    }
    if ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0) break;
    local_res10 = local_res10 + 1;
  }
  return;
}


/* address=140de0c20 name=FUN_140de0c20 */

void FUN_140de0c20(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  local_58 = 0;
  local_88 = (byte *)0x0;
  local_78 = FUN_140e1f100();
  if (local_78 == 0) {
    local_b8 = 0x223;
    FUN_140d186f0(0xd,0,7,s_D__a_1_s_target_release_build_bo_1413ef200);
  }
  else {
    local_88 = (byte *)FUN_140d765d0("default");
    if (local_88 != (byte *)0x0) {
      local_58 = FUN_140ddfd70(param_1,local_88);
      if (local_58 == 0) {
        local_b8 = 0x22e;
        FUN_140d186f0(0xd,0,0x68,s_D__a_1_s_target_release_build_bo_1413ef260);
      }
      else {
        local_a0 = 0;
        local_80 = 0;
        do {
          while( true ) {
            do {
              do {
                lVar3 = FUN_140e1f2b0(local_78,local_a0 + DAT_1410b50d8);
                if (lVar3 == 0) {
                  local_b8 = 0x236;
                  FUN_140d186f0(0xd,0,7,s_D__a_1_s_target_release_build_bo_1413ef2c0);
                  goto LAB_140de1442;
                }
                local_a8 = (byte *)(*(longlong *)(local_78 + 8) + (longlong)local_a0);
                *local_a8 = 0;
                FUN_140d14900(param_2,local_a8,(int)DAT_1410b50d8 + -1);
                local_a8[DAT_1410b50d8 + -1] = 0;
                sVar4 = strlen((char *)local_a8);
                local_50 = (int)sVar4;
                local_9c = local_50;
                if ((local_50 == 0) && (local_80 == 0)) {
                  if (local_78 != 0) {
                    FUN_140e1f150(local_78);
                  }
                  if (local_88 != (byte *)0x0) {
                    FUN_140d762b0(local_88);
                  }
                  goto LAB_140de150b;
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
                    (*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_a8 * 2) & 0x20) != 0))
                   && ((local_a0 < 2 ||
                       ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)local_a8[-1] * 2) & 0x20)
                        == 0)))) {
                  local_a0 = local_a0 + -1;
                  local_80 = 1;
                }
              } while (local_80 != 0);
              local_a0 = 0;
              local_28 = *(undefined8 *)(local_78 + 8);
              FUN_140de0a50(param_1,local_28);
              local_68 = (byte *)FUN_140de0770(param_1,local_28);
            } while ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_68 * 2) & 8) != 0);
            if (*local_68 == 0x5b) break;
            local_60 = (byte *)0x0;
            local_30 = local_68;
            local_90 = (byte *)FUN_140de07e0(param_1,local_68);
            if ((*local_90 == ':') && (((char *)local_90)[1] == ':')) {
              *local_90 = '\0';
              local_90 = (byte *)((char *)local_90 + 2);
              local_60 = local_30;
              local_30 = local_90;
              local_90 = (byte *)FUN_140de07e0(param_1,local_90);
            }
            local_a8 = (byte *)FUN_140de0770(param_1,local_90);
            if (*local_a8 != 0x3d) {
              local_b8 = 0x297;
              FUN_140d186f0(0xd,0,0x66,s_D__a_1_s_target_release_build_bo_1413ef3e0);
              goto LAB_140de1442;
            }
            *local_90 = '\0';
            local_a8 = local_a8 + 1;
            local_48 = (byte *)FUN_140de0770(param_1,local_a8);
            while ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_a8 * 2) & 8) == 0) {
              local_a8 = local_a8 + 1;
            }
            do {
              pbVar1 = local_a8;
              local_a8 = pbVar1 + -1;
              if (local_a8 == local_48) break;
            } while ((*(ushort *)(&DAT_1410b4ed0 + (longlong)(int)(uint)*local_a8 * 2) & 0x10) != 0)
            ;
            *pbVar1 = 0;
            local_a8 = pbVar1;
            local_98 = FUN_140ddf740();
            if (local_98 == 0) goto LAB_140de1442;
            if (local_60 == (byte *)0x0) {
              local_60 = local_88;
            }
            uVar5 = FUN_140d765d0(local_30);
            *(undefined8 *)(local_98 + 8) = uVar5;
            if ((*(longlong *)(local_98 + 8) == 0) ||
               (iVar2 = FUN_140ddfe80(param_1,local_60,local_98 + 0x10,local_48), iVar2 == 0))
            goto LAB_140de1442;
            iVar2 = strcmp((char *)local_60,(char *)local_88);
            if (iVar2 == 0) {
              local_40 = local_58;
            }
            else {
              local_40 = FUN_140de0680(param_1,local_60);
              if (local_40 == 0) {
                local_40 = FUN_140ddfd70(param_1,local_60);
              }
              if (local_40 == 0) {
                local_b8 = 0x2ba;
                FUN_140d186f0(0xd,0,0x68,s_D__a_1_s_target_release_build_bo_1413ef440);
                goto LAB_140de1442;
              }
            }
            iVar2 = FUN_140de06d0(param_1,local_40,local_98);
            if (iVar2 == 0) goto LAB_140de1442;
            local_98 = 0;
          }
          local_68 = local_68 + 1;
          local_48 = (byte *)FUN_140de0770(param_1,local_68);
          pbVar1 = local_48;
          while( true ) {
            local_38 = pbVar1;
            local_90 = (byte *)FUN_140de07e0(param_1,local_38);
            local_a8 = (byte *)FUN_140de0770(param_1,local_90);
            if (*local_a8 == 0x5d) break;
            if ((*local_a8 == 0) || (pbVar1 = local_a8, local_38 == local_a8)) {
              local_b8 = 0x27b;
              FUN_140d186f0(0xd,0,0x65,s_D__a_1_s_target_release_build_bo_1413ef320);
              goto LAB_140de1442;
            }
          }
          *local_90 = '\0';
          iVar2 = FUN_140ddfe80(param_1,0,&local_88,local_48);
          if (iVar2 == 0) goto LAB_140de1442;
          local_58 = FUN_140de0680(param_1,local_88);
          if (local_58 == 0) {
            local_58 = FUN_140ddfd70(param_1,local_88);
          }
        } while (local_58 != 0);
        local_b8 = 0x286;
        FUN_140d186f0(0xd,0,0x68,s_D__a_1_s_target_release_build_bo_1413ef380);
      }
    }
  }
LAB_140de1442:
  if (local_78 != 0) {
    FUN_140e1f150(local_78);
  }
  if (local_88 != (byte *)0x0) {
    FUN_140d762b0(local_88);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_70;
  }
  _snprintf(local_20,0xd,&DAT_1413ef4a0,(ulonglong)local_70);
  FUN_140d18810(2,s_line_1413ef4a4,local_20);
  if (local_98 != 0) {
    if (*(longlong *)(local_98 + 8) != 0) {
      FUN_140d762b0(*(undefined8 *)(local_98 + 8));
    }
    if (*(longlong *)(local_98 + 0x10) != 0) {
      FUN_140d762b0(*(undefined8 *)(local_98 + 0x10));
    }
    if (local_98 != 0) {
      FUN_140d762b0(local_98);
    }
  }
LAB_140de150b:
  FUN_140e28050(local_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140de1530 name=FUN_140de1530 */

void FUN_140de1530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_128;
  local_d8 = 0;
  local_d0 = FUN_140d1c8f0(param_6);
  local_f8 = 1;
  FUN_140d1cc10(local_c8);
  local_108 = 0;
  iVar1 = FUN_140d1cdb0(local_c8,param_1,param_2,param_6);
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
      iVar1 = FUN_140d1cdb0(local_c8,0,0,0);
      if ((((iVar1 == 0) || (iVar1 = FUN_140d1d110(local_c8,param_3,param_4), iVar1 == 0)) ||
          (iVar1 = FUN_140d1d110(local_c8,&local_f4,4), iVar1 == 0)) ||
         (iVar1 = FUN_140d1d150(local_c8,local_58,0), iVar1 == 0)) goto LAB_140de181f;
      FUN_140de18c0(param_8);
      for (local_f0 = 1; local_f0 < param_5; local_f0 = local_f0 + 1) {
        local_108 = 0;
        iVar1 = FUN_140d1cdb0(local_c8,0,0,0);
        if (((iVar1 == 0) || (iVar1 = FUN_140d1d110(local_c8,local_58), iVar1 == 0)) ||
           (iVar1 = FUN_140d1d150(local_c8), iVar1 == 0)) goto LAB_140de181f;
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
LAB_140de181f:
  FUN_140d1ccb0(local_c8);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=140de18c0 name=FUN_140de18c0 */

undefined8 FUN_140de18c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140de1900 name=FUN_140de1900 */

void FUN_140de1900(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
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
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_94 = 0;
  local_84 = 0;
  local_90 = FUN_140d49160(param_1);
  local_8c = FUN_140d49180(param_1);
  if (0x40 < local_90) {
    FID_conflict__assert((wchar_t *)s_n_1413ef650,(wchar_t *)s_D_1413ef570,0x4f);
  }
  if (0x10 < local_8c) {
    FID_conflict__assert((wchar_t *)s_n_1413ef770,(wchar_t *)s_D_1413ef690,0x50);
  }
  if (param_4 != 0) {
    FUN_140d1c160(local_78);
    do {
      iVar1 = FUN_140d1c5a0(local_78,param_2,0);
      if (iVar1 == 0) goto LAB_140de1bf9;
      local_80 = local_88;
      iVar1 = local_88 + 1;
      bVar2 = local_88 != 0;
      local_88 = iVar1;
      if (((((bVar2) && (iVar1 = FUN_140d1c6d0(local_78,local_58,local_94), iVar1 == 0)) ||
           (iVar1 = FUN_140d1c6d0(local_78,param_4,param_5), iVar1 == 0)) ||
          ((param_3 != 0 && (iVar1 = FUN_140d1c6d0(local_78,param_3,8), iVar1 == 0)))) ||
         (iVar1 = FUN_140d1c710(local_78,local_58), iVar1 == 0)) goto LAB_140de1bf9;
      for (local_98 = 1; local_98 < param_6; local_98 = local_98 + 1) {
        iVar1 = FUN_140d1c5a0(local_78,param_2,0);
        if (((iVar1 == 0) || (iVar1 = FUN_140d1c6d0(local_78,local_58,local_94), iVar1 == 0)) ||
           (iVar1 = FUN_140d1c710(local_78,local_58), iVar1 == 0)) goto LAB_140de1bf9;
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
    local_84 = FUN_140d49160(param_1);
LAB_140de1bf9:
    FUN_140d1c1d0(local_78);
    FUN_140d76450(local_58,0x40);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140de1fd0 name=FUN_140de1fd0 */

undefined8 FUN_140de1fd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140de2020 name=FUN_140de2020 */

uint FUN_140de2020(uint param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f) | param_1 >> 0x20 - (param_2 & 0x1f);
}


/* address=140de2040 name=FUN_140de2040 */

void FUN_140de2040(longlong param_1)

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
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_188;
  FUN_140de1fd0(local_58,param_1,0x40);
  for (local_164 = 8; 0 < local_164; local_164 = local_164 + -2) {
    local_160 = 0x10;
    local_58[4] = FUN_140de2020(local_58[0] + local_58[12],7);
    local_58[4] = *(uint *)((longlong)local_58 + local_160) ^ local_58[4];
    local_158 = 0x20;
    local_58[8] = FUN_140de2020(local_58[4] + local_58[0],9);
    local_58[8] = *(uint *)((longlong)local_58 + local_158) ^ local_58[8];
    local_150 = 0x30;
    local_58[12] = FUN_140de2020(local_58[8] + local_58[4],0xd);
    local_58[12] = *(uint *)((longlong)local_58 + local_150) ^ local_58[12];
    local_148 = 0;
    local_58[0] = FUN_140de2020(local_58[12] + local_58[8],0x12);
    local_58[0] = *(uint *)((longlong)local_58 + local_148) ^ local_58[0];
    local_140 = 0x24;
    local_58[9] = FUN_140de2020(local_58[5] + local_58[1],7);
    local_58[9] = *(uint *)((longlong)local_58 + local_140) ^ local_58[9];
    local_138 = 0x34;
    local_58[13] = FUN_140de2020(local_58[9] + local_58[5],9);
    local_58[13] = *(uint *)((longlong)local_58 + local_138) ^ local_58[13];
    local_130 = 4;
    local_58[1] = FUN_140de2020(local_58[13] + local_58[9],0xd);
    local_58[1] = *(uint *)((longlong)local_58 + local_130) ^ local_58[1];
    local_128 = 0x14;
    local_58[5] = FUN_140de2020(local_58[1] + local_58[13],0x12);
    local_58[5] = *(uint *)((longlong)local_58 + local_128) ^ local_58[5];
    local_120 = 0x38;
    local_58[14] = FUN_140de2020(local_58[10] + local_58[6],7);
    local_58[14] = *(uint *)((longlong)local_58 + local_120) ^ local_58[14];
    local_118 = 8;
    local_58[2] = FUN_140de2020(local_58[14] + local_58[10],9);
    local_58[2] = *(uint *)((longlong)local_58 + local_118) ^ local_58[2];
    local_110 = 0x18;
    local_58[6] = FUN_140de2020(local_58[2] + local_58[14],0xd);
    local_58[6] = *(uint *)((longlong)local_58 + local_110) ^ local_58[6];
    local_108 = 0x28;
    local_58[10] = FUN_140de2020(local_58[6] + local_58[2],0x12);
    local_58[10] = *(uint *)((longlong)local_58 + local_108) ^ local_58[10];
    local_100 = 0xc;
    local_58[3] = FUN_140de2020(local_58[15] + local_58[11],7);
    local_58[3] = *(uint *)((longlong)local_58 + local_100) ^ local_58[3];
    local_f8 = 0x1c;
    local_58[7] = FUN_140de2020(local_58[3] + local_58[15],9);
    local_58[7] = *(uint *)((longlong)local_58 + local_f8) ^ local_58[7];
    local_f0 = 0x2c;
    local_58[11] = FUN_140de2020(local_58[7] + local_58[3],0xd);
    local_58[11] = *(uint *)((longlong)local_58 + local_f0) ^ local_58[11];
    local_e8 = 0x3c;
    local_58[15] = FUN_140de2020(local_58[11] + local_58[7],0x12);
    local_58[15] = *(uint *)((longlong)local_58 + local_e8) ^ local_58[15];
    local_e0 = 4;
    local_58[1] = FUN_140de2020(local_58[0] + local_58[3],7);
    local_58[1] = *(uint *)((longlong)local_58 + local_e0) ^ local_58[1];
    local_d8 = 8;
    local_58[2] = FUN_140de2020(local_58[1] + local_58[0],9);
    local_58[2] = *(uint *)((longlong)local_58 + local_d8) ^ local_58[2];
    local_d0 = 0xc;
    local_58[3] = FUN_140de2020(local_58[2] + local_58[1],0xd);
    local_58[3] = *(uint *)((longlong)local_58 + local_d0) ^ local_58[3];
    local_c8 = 0;
    local_58[0] = FUN_140de2020(local_58[3] + local_58[2],0x12);
    local_58[0] = *(uint *)((longlong)local_58 + local_c8) ^ local_58[0];
    local_c0 = 0x18;
    local_58[6] = FUN_140de2020(local_58[5] + local_58[4],7);
    local_58[6] = *(uint *)((longlong)local_58 + local_c0) ^ local_58[6];
    local_b8 = 0x1c;
    local_58[7] = FUN_140de2020(local_58[6] + local_58[5],9);
    local_58[7] = *(uint *)((longlong)local_58 + local_b8) ^ local_58[7];
    local_b0 = 0x10;
    local_58[4] = FUN_140de2020(local_58[7] + local_58[6],0xd);
    local_58[4] = *(uint *)((longlong)local_58 + local_b0) ^ local_58[4];
    local_a8 = 0x14;
    local_58[5] = FUN_140de2020(local_58[4] + local_58[7],0x12);
    local_58[5] = *(uint *)((longlong)local_58 + local_a8) ^ local_58[5];
    local_a0 = 0x2c;
    local_58[11] = FUN_140de2020(local_58[10] + local_58[9],7);
    local_58[11] = *(uint *)((longlong)local_58 + local_a0) ^ local_58[11];
    local_98 = 0x20;
    local_58[8] = FUN_140de2020(local_58[11] + local_58[10],9);
    local_58[8] = *(uint *)((longlong)local_58 + local_98) ^ local_58[8];
    local_90 = 0x24;
    local_58[9] = FUN_140de2020(local_58[8] + local_58[11],0xd);
    local_58[9] = *(uint *)((longlong)local_58 + local_90) ^ local_58[9];
    local_88 = 0x28;
    local_58[10] = FUN_140de2020(local_58[9] + local_58[8],0x12);
    local_58[10] = *(uint *)((longlong)local_58 + local_88) ^ local_58[10];
    local_80 = 0x30;
    local_58[12] = FUN_140de2020(local_58[15] + local_58[14],7);
    local_58[12] = *(uint *)((longlong)local_58 + local_80) ^ local_58[12];
    local_78 = 0x34;
    local_58[13] = FUN_140de2020(local_58[12] + local_58[15],9);
    local_58[13] = *(uint *)((longlong)local_58 + local_78) ^ local_58[13];
    local_70 = 0x38;
    local_58[14] = FUN_140de2020(local_58[13] + local_58[12],0xd);
    local_58[14] = *(uint *)((longlong)local_58 + local_70) ^ local_58[14];
    local_68 = 0x3c;
    uVar1 = FUN_140de2020(local_58[14] + local_58[13],0x12);
    local_58[15] = *(uint *)((longlong)local_58 + local_68) ^ uVar1;
  }
  for (local_168 = 0; local_168 < 0x10; local_168 = local_168 + 1) {
    *(uint *)(param_1 + (longlong)local_168 * 4) =
         *(int *)(param_1 + (longlong)local_168 * 4) + local_58[local_168];
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_188);
  return;
}


/* address=140de2c90 name=FUN_140de2c90 */

void FUN_140de2c90(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    *(uint *)(param_1 + local_18 * 4) =
         *(uint *)(param_2 + local_18 * 4) ^ *(uint *)(param_3 + local_18 * 4);
  }
  return;
}


/* address=140de2d00 name=FUN_140de2d00 */

void FUN_140de2d00(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_88 [32];
  ulonglong local_68;
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_88;
  if (param_1 == param_2) {
    FID_conflict__assert((wchar_t *)s_o_1413ef870,(wchar_t *)s_D_1413ef7b0,0x5c);
  }
  FUN_140de1fd0(local_58,param_2 + (param_3 * 2 + -1) * 0x40,0x40);
  for (local_68 = 0; local_68 < (ulonglong)(param_3 << 1); local_68 = local_68 + 1) {
    FUN_140de2c90(local_58,local_58,param_2 + local_68 * 0x40);
    FUN_140de2040(local_58);
    FUN_140de1fd0(param_1 + (local_68 / 2 + (local_68 & 1) * param_3) * 0x40,local_58,0x40);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=140de2e50 name=FUN_140de2e50 */

void FUN_140de2e50(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  FUN_140de1fd0(param_5,param_1,param_2 << 7);
  for (local_28 = 1; local_28 < param_3; local_28 = local_28 + 1) {
    FUN_140de2d00(param_5 + param_2 * 2 * local_28 * 0x40,
                  param_5 + param_2 * 2 * (local_28 - 1) * 0x40,param_2);
  }
  FUN_140de2d00(param_1,param_5 + param_2 * 2 * (param_3 - 1) * 0x40,param_2);
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    uVar1 = *(uint *)(param_1 + (param_2 * 2 + -1) * 0x40);
    for (local_30 = 0; local_30 < (ulonglong)(param_2 << 1); local_30 = local_30 + 1) {
      FUN_140de2c90(param_4 + local_30 * 0x40,param_1 + local_30 * 0x40,
                    param_5 + (param_2 * 2 * (ulonglong)(uVar1 & (int)param_3 - 1U) + local_30) *
                              0x40);
    }
    FUN_140de2d00(param_1,param_4,param_2);
  }
  return;
}


/* address=140de3050 name=FUN_140de3050 */

undefined * FUN_140de3050(void)

{
  return &DAT_1410b56f0;
}


/* address=140de3070 name=FUN_140de3070 */

void FUN_140de3070(void)

{
  FUN_140de3050();
  return;
}


/* address=140de3090 name=FUN_140de3090 */

undefined * FUN_140de3090(void)

{
  return &DAT_1410b5750;
}


/* address=140de30a0 name=FUN_140de30a0 */

undefined * FUN_140de30a0(void)

{
  return &DAT_1410b5738;
}


/* address=140de30b0 name=FUN_140de30b0 */

undefined * FUN_140de30b0(void)

{
  return &DAT_1410b5720;
}


/* address=140de37e0 name=FUN_140de37e0 */

void FUN_140de37e0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140d11b30(param_1);
    FUN_140d8ff00(uVar2,p_Var1);
  }
  return;
}


/* address=140de3830 name=FUN_140de3830 */

undefined8
FUN_140de3830(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_140de37e0(param_1,p_Var1);
  uVar2 = FUN_140d11b30(param_2);
  FUN_140d11b30(uVar2);
  FUN_140d11b30(param_1);
  return param_1;
}


/* address=140de3890 name=FUN_140de3890 */

undefined * FUN_140de3890(void)

{
  return &DAT_1410b5ca8;
}


/* address=140de38b0 name=FUN_140de38b0 */

undefined * FUN_140de38b0(void)

{
  return &DAT_1410b5cf0;
}


/* address=140de38c0 name=FUN_140de38c0 */

undefined * FUN_140de38c0(void)

{
  return &DAT_1410b5cd8;
}


/* address=140de3990 name=FUN_140de3990 */

undefined8 FUN_140de3990(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140de3c90 name=FUN_140de3c90 */

undefined4 FUN_140de3c90(longlong param_1,longlong *param_2,size_t *param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined local_40 [64];
  
  if ((*(byte *)(param_1 + 0x1a8) >> 2 & 1) == 0) {
    FUN_140d138c0(local_40);
    uVar5 = FUN_140d11b30(local_40);
    iVar1 = FUN_140d73a80(uVar5,0x100);
    if (iVar1 != 0) {
      uVar5 = FUN_140d11b30(local_40);
      iVar1 = FUN_140de54e0(param_1,uVar5,0);
      if (iVar1 != 0) {
        uVar5 = FUN_140d11b30(local_40);
        iVar1 = FUN_140d73bb0(uVar5,param_2,param_3);
        if (iVar1 != 0) {
          FUN_140d138f0(local_40);
          return 1;
        }
      }
    }
    FUN_140d138f0(local_40);
    uVar2 = 0;
  }
  else {
    sVar3 = strlen("NOT RESUMABLE");
    *param_3 = sVar3;
    lVar4 = FUN_140d76c50("NOT RESUMABLE",*param_3);
    *param_2 = lVar4;
    if (*param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140de3db0 name=FUN_140de3db0 */

undefined4 FUN_140de3db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_40 [64];
  
  FUN_140d138c0(local_40);
  uVar2 = FUN_140d11b30(local_40);
  iVar1 = FUN_140d73a80(uVar2,0x100);
  if (iVar1 != 0) {
    uVar2 = FUN_140d11b30(local_40);
    iVar1 = FUN_140de54e0(param_1,uVar2,1);
    if (iVar1 != 0) {
      uVar2 = FUN_140d11b30(local_40);
      iVar1 = FUN_140d73bb0(uVar2,param_2,param_3);
      if (iVar1 != 0) {
        FUN_140d138f0(local_40);
        return 1;
      }
    }
  }
  FUN_140d138f0(local_40);
  return 0;
}


/* address=140de3e70 name=FUN_140de3e70 */

_Facet_base * FUN_140de3e70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  local_48 [8];
  undefined local_40 [8];
  _Facet_base *local_38;
  _Facet_base *local_30;
  _Facet_base *local_28;
  undefined local_20 [32];
  
  FUN_140d717c0(local_20,param_1,param_2);
  uVar2 = FUN_140de4090(local_40,local_20,*(undefined8 *)(param_3 + 8),
                        *(undefined8 *)(param_3 + 0x200));
  FUN_140d11cd0(local_48,uVar2);
  FUN_140d12160(local_40);
  cVar1 = FUN_140d11eb0(local_48);
  if (cVar1 == '\0') {
    local_38 = (_Facet_base *)0x0;
    FUN_140d12160(local_48);
  }
  else {
    lVar3 = FUN_140d71850(local_20);
    if (lVar3 == 0) {
      local_28 = std::
                 unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 ::release(local_48);
      FUN_140d12160(local_48);
      local_38 = local_28;
    }
    else {
      FUN_140d186f0(0x10,0,0xa0,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                    ,0x366);
      local_30 = (_Facet_base *)0x0;
      FUN_140d12160(local_48);
      local_38 = local_30;
    }
  }
  return local_38;
}


/* address=140de3f80 name=FUN_140de3f80 */

undefined4 FUN_140de3f80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10 [2];
  
  iVar1 = FUN_140de3c90(param_1,local_10,&local_18);
  if (iVar1 == 0) {
    local_18 = 0xffffffff;
  }
  else if (CONCAT44(uStack_14,local_18) < 0x80000000) {
    if (param_2 != (longlong *)0x0) {
      FUN_140de4040(*param_2,local_10[0],CONCAT44(uStack_14,local_18));
      *param_2 = *param_2 + CONCAT44(uStack_14,local_18);
    }
    FUN_140d762b0(local_10[0]);
  }
  else {
    FUN_140d762b0(local_10[0]);
    FUN_140d186f0(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x34f);
    local_18 = 0xffffffff;
  }
  return local_18;
}


/* address=140de4040 name=FUN_140de4040 */

undefined8 FUN_140de4040(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140de4090 name=FUN_140de4090 */

undefined8 FUN_140de4090(undefined8 param_1,wchar_t *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined local_258 [8];
  byte local_250;
  byte local_24f;
  byte local_24e;
  byte local_24d;
  byte local_24c;
  wchar_t *local_248 [2];
  int local_238;
  undefined2 local_234 [2];
  int local_230;
  int local_22c;
  int local_228 [2];
  undefined local_220 [8];
  undefined local_218 [8];
  undefined local_210 [4];
  int local_20c;
  int local_208;
  int local_204;
  int local_200 [2];
  undefined2 local_1f8;
  undefined6 uStack_1f6;
  wchar_t *local_1f0 [2];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  byte *local_1d8;
  byte *local_1d0;
  byte *local_1c8;
  byte *local_1c0;
  byte *local_1b8;
  byte *local_1b0;
  byte *local_1a8;
  wchar_t *local_1a0 [2];
  wchar_t *local_190 [2];
  undefined local_180 [16];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  longlong local_110;
  undefined local_108 [8];
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined local_e0 [16];
  wchar_t *local_d0 [2];
  wchar_t *local_c0 [2];
  undefined local_b0 [16];
  undefined local_a0 [16];
  undefined local_90 [16];
  undefined local_80 [8];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar4 = FUN_140d80b00(local_108,param_3);
  FUN_140d11cd0(local_258,uVar4);
  FUN_140d12160(local_108);
  cVar1 = FUN_140d11eb0(local_258);
  if (cVar1 == '\0') {
    FUN_140d7bba0(param_1,0);
    FUN_140d12160(local_258);
    return param_1;
  }
  uVar2 = wcstoul(param_2,local_248,0x20000010);
  if (((((uVar2 == 0) || (iVar3 = FUN_140d72240(local_248,&local_100), iVar3 == 0)) ||
       (local_100 != 1)) ||
      ((iVar3 = FUN_140d72240(local_248,&local_1f8), iVar3 == 0 ||
       (0xffff < CONCAT62(uStack_1f6,local_1f8))))) ||
     (cVar1 = FUN_140d778e0(local_210,local_1f8), cVar1 == '\0')) {
    FUN_140d186f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x229);
    FUN_140d7bba0(param_1,0);
    FUN_140d12160(local_258);
    return param_1;
  }
  lVar5 = FUN_140d11ad0(local_258);
  *(undefined2 *)(lVar5 + 4) = local_1f8;
  uVar2 = wcstoul((wchar_t *)local_248,local_d0,4);
  if (((uVar2 == 0) || (iVar3 = FUN_140d71aa0(local_d0,local_234), iVar3 == 0)) ||
     (lVar5 = FUN_140d71850(local_d0), lVar5 != 0)) {
    FUN_140d186f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x233);
    FUN_140d7bba0(param_1,0);
    FUN_140d12160(local_258);
    return param_1;
  }
  local_f8 = FUN_140d8a8e0(local_234[0]);
  lVar5 = FUN_140d11ad0(local_258);
  *(undefined8 *)(lVar5 + 200) = local_f8;
  lVar5 = FUN_140d11ad0(local_258);
  if (*(longlong *)(lVar5 + 200) == 0) {
    FUN_140d186f0(0x10,0,0xed,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x238);
    FUN_140d7bba0(param_1,0);
    FUN_140d12160(local_258);
    return param_1;
  }
  uVar2 = wcstoul((wchar_t *)local_248,local_1a0,4);
  if ((((uVar2 == 0) || (uVar6 = FUN_140d71850(local_1a0), 0x20 < uVar6)) ||
      (uVar2 = wcstoul((wchar_t *)local_248,local_190,4), uVar2 == 0)) ||
     (uVar6 = FUN_140d71850(local_190), 0x30 < uVar6)) {
    FUN_140d186f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x241);
    FUN_140d7bba0(param_1,0);
    FUN_140d12160(local_258);
    return param_1;
  }
  local_f0 = FUN_140d71850(local_1a0);
  local_e8 = FUN_140d71830(local_1a0);
  lVar5 = FUN_140d11ad0(local_258);
  FUN_140de4040(lVar5 + 0x3c,local_e8,local_f0);
  local_170 = FUN_140d71850(local_1a0);
  lVar5 = FUN_140d11ad0(local_258);
  *(char *)(lVar5 + 0x3b) = (char)local_170;
  local_168 = FUN_140d71850(local_190);
  local_160 = FUN_140d71830(local_190);
  lVar5 = FUN_140d11ad0(local_258);
  FUN_140de4040(lVar5 + 0xb,local_160,local_168);
  local_158 = FUN_140d71850(local_190);
  lVar5 = FUN_140d11ad0(local_258);
  *(char *)(lVar5 + 10) = (char)local_158;
  uVar2 = wcstoul((wchar_t *)local_248,local_1f0,-0x5fffffff);
  if (uVar2 != 0) {
    lVar5 = FUN_140d11ad0(local_258);
    iVar3 = FUN_140d72240(local_1f0,lVar5 + 0xc0);
    if (((iVar3 != 0) && (uVar2 = wcstoul((wchar_t *)local_248,local_1f0,-0x5ffffffe), uVar2 != 0))
       && ((iVar3 = FUN_140d72240(local_1f0,&local_1e0), iVar3 != 0 &&
           (CONCAT44(uStack_1dc,local_1e0) < 0x100000000)))) {
      lVar5 = FUN_140d11ad0(local_258);
      *(undefined4 *)(lVar5 + 0xb4) = local_1e0;
      iVar3 = FUN_140d72500(local_248,local_b0,&local_238,0xa0000003);
      if ((iVar3 == 0) || ((local_238 != 0 && (lVar5 = FUN_140d71850(local_b0), lVar5 == 0)))) {
        FUN_140d186f0(0x10,0,0xa0,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                      ,0x25e);
        FUN_140d7bba0(param_1,0);
        FUN_140d12160(local_258);
        return param_1;
      }
      local_150 = FUN_140d11ad0(local_258);
      local_150 = local_150 + 0x5c;
      lVar5 = FUN_140d11ad0(local_258);
      iVar3 = FUN_140de6400(local_248,lVar5 + 0x5d,local_150,0x20,0xa0000004);
      if (iVar3 != 0) {
        lVar5 = FUN_140d11ad0(local_258);
        iVar3 = FUN_140de64c0(local_248,lVar5 + 0xb0,0xa0000005,0);
        if (iVar3 != 0) {
          iVar3 = FUN_140d72500(local_248,local_48,0,0xa0000006);
          if (iVar3 == 0) {
            FUN_140d186f0(0x10,0,0xa0,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                          ,0x26f);
            FUN_140d7bba0(param_1,0);
            FUN_140d12160(local_258);
            return param_1;
          }
          lVar5 = FUN_140d11ad0(local_258);
          iVar3 = FUN_140de61a0(local_248,lVar5 + 0x80,0xa0000008);
          if (iVar3 != 0) {
            lVar5 = FUN_140d11ad0(local_258);
            iVar3 = FUN_140de6550(local_248,lVar5 + 0x16c,0xa0000009,0);
            if (iVar3 != 0) {
              lVar5 = FUN_140d11ad0(local_258);
              cVar1 = FUN_140de6280(local_248,lVar5 + 0xe8,0xa000000a);
              if (cVar1 != '\0') {
                iVar3 = FUN_140d72070(local_248,0xa000000d);
                if (iVar3 == 0) {
                  lVar5 = FUN_140d11ad0(local_258);
                  local_1d0 = (byte *)(lVar5 + 0x1a8);
                  *local_1d0 = *local_1d0 & 0xfd;
                }
                else {
                  uVar2 = wcstoul((wchar_t *)local_248,local_1f0,-0x5ffffff3);
                  if ((((uVar2 == 0) ||
                       (uVar2 = wcstoul((wchar_t *)local_1f0,local_c0,4), uVar2 == 0)) ||
                      (lVar5 = FUN_140d71850(local_c0), lVar5 != 0x20)) ||
                     (lVar5 = FUN_140d71850(local_1f0), lVar5 != 0)) {
                    FUN_140d186f0(0x10,0,0xa0,
                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                  ,0x281);
                    FUN_140d7bba0(param_1,0);
                    FUN_140d12160(local_258);
                    return param_1;
                  }
                  local_148 = FUN_140d71830(local_c0);
                  lVar5 = FUN_140d11ad0(local_258);
                  FUN_140de4040(lVar5 + 0x108,local_148,0x20);
                  lVar5 = FUN_140d11ad0(local_258);
                  local_1d8 = (byte *)(lVar5 + 0x1a8);
                  *local_1d8 = *local_1d8 | 2;
                }
                local_140 = FUN_140d11ad0(local_258);
                local_140 = local_140 + 0x168;
                lVar5 = FUN_140d11ad0(local_258);
                iVar3 = FUN_140de6400(local_248,lVar5 + 0x128,local_140,0x40,0xa000000e);
                if (iVar3 != 0) {
                  lVar5 = FUN_140d11ad0(local_258);
                  iVar3 = FUN_140de6320(local_248,lVar5 + 0xf8,0xa000000f,param_4);
                  if (iVar3 != 0) {
                    lVar5 = FUN_140d11ad0(local_258);
                    iVar3 = FUN_140de6320(local_248,lVar5 + 0x100,0xa0000010,param_4);
                    if (iVar3 != 0) {
                      iVar3 = FUN_140d726e0(local_248,&local_20c,0xa0000011,0);
                      if (iVar3 == 0) {
                        FUN_140d186f0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x29b);
                        FUN_140d7bba0(param_1,0);
                        FUN_140d12160(local_258);
                        return param_1;
                      }
                      local_250 = local_20c != 0;
                      lVar5 = FUN_140d11ad0(local_258);
                      local_1c8 = (byte *)(lVar5 + 0x1a8);
                      *local_1c8 = *local_1c8 & 0xfe | local_250 & 1;
                      lVar5 = FUN_140d11ad0(local_258);
                      iVar3 = FUN_140de65e0(local_248,lVar5 + 6,0xa0000012,0);
                      if (iVar3 == 0) {
                        FUN_140d186f0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2a1);
                        FUN_140d7bba0(param_1,0);
                        FUN_140d12160(local_258);
                        return param_1;
                      }
                      FUN_140d717c0(local_180,0,0);
                      iVar3 = FUN_140d72500(local_248,local_180);
                      if ((iVar3 == 0) ||
                         ((local_230 != 0 && (lVar5 = FUN_140d71850(local_180), lVar5 == 0)))) {
                        FUN_140d186f0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2ab);
                        FUN_140d7bba0(param_1,0);
                        FUN_140d12160(local_258);
                        return param_1;
                      }
                      if ((local_230 != 0) && (local_238 == 0)) {
                        FUN_140d186f0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2af);
                        FUN_140d7bba0(param_1,0);
                        FUN_140d12160(local_258);
                        return param_1;
                      }
                      if ((local_238 != 0) || (local_230 != 0)) {
                        local_138 = FUN_140d11e80();
                        lVar5 = FUN_140d11ad0(local_258);
                        FUN_140d12960(lVar5 + 0x88,local_138);
                        lVar5 = FUN_140d11ad0(local_258);
                        cVar1 = operator==<>(lVar5 + 0x88,0);
                        if (cVar1 != '\0') {
                          FUN_140d7bba0(param_1,0);
                          FUN_140d12160(local_258);
                          return param_1;
                        }
                        if (local_238 != 0) {
                          uVar4 = FUN_140d75910(local_b0,param_4);
                          FUN_140d11ca0(local_220,uVar4);
                          cVar1 = FUN_140d11eb0(local_220);
                          if (cVar1 == '\0') {
LAB_140de4d0c:
                            FUN_140d7bba0(param_1,0);
                            FUN_140d7b9a0(local_220);
                            FUN_140d12160(local_258);
                            return param_1;
                          }
                          local_130 = local_80;
                          uVar4 = FUN_140d11b30(local_220);
                          local_128 = FUN_140d11cd0(local_130,uVar4);
                          lVar5 = FUN_140d11ad0(local_258);
                          uVar4 = FUN_140d11ad0(lVar5 + 0x88);
                          cVar1 = FUN_140d7bc90(uVar4,local_128);
                          if (cVar1 == '\0') goto LAB_140de4d0c;
                          FUN_140d7b9a0(local_220);
                        }
                        while (lVar5 = FUN_140d71850(local_180), lVar5 != 0) {
                          pvVar7 = _aligned_recalloc(local_180,(size_t)local_a0,0,0);
                          if (((int)pvVar7 == 0) || (lVar5 = FUN_140d71850(local_a0), lVar5 == 0)) {
                            FUN_140d186f0(0x10,0,0xa0,
                                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                          ,0x2c4);
                            FUN_140d7bba0(param_1,0);
                            FUN_140d12160(local_258);
                            return param_1;
                          }
                          uVar4 = FUN_140d75910(local_a0,param_4);
                          FUN_140d11ca0(local_218,uVar4);
                          cVar1 = operator==<>(local_218,0);
                          if (cVar1 != '\0') {
LAB_140de4e6f:
                            FUN_140d7bba0(param_1,0);
                            FUN_140d7b9a0(local_218);
                            FUN_140d12160(local_258);
                            return param_1;
                          }
                          local_120 = local_78;
                          uVar4 = FUN_140d11b30(local_218);
                          local_118 = FUN_140d11cd0(local_120,uVar4);
                          lVar5 = FUN_140d11ad0(local_258);
                          uVar4 = FUN_140d11ad0(lVar5 + 0x88);
                          cVar1 = FUN_140d7bc90(uVar4,local_118);
                          if (cVar1 == '\0') goto LAB_140de4e6f;
                          FUN_140d7b9a0(local_218);
                        }
                      }
                      iVar3 = FUN_140d72580(local_248,local_90,local_228,0xa0000015);
                      if (iVar3 != 0) {
                        if (local_228[0] != 0) {
                          lVar5 = FUN_140d11ad0(local_258);
                          iVar3 = FUN_140d71b90(local_90,lVar5 + 0x170);
                          if (iVar3 == 0) goto LAB_140de4f0d;
                        }
                        lVar5 = FUN_140d71850(local_90);
                        if (lVar5 == 0) {
                          local_24f = local_228[0] != 0;
                          lVar5 = FUN_140d11ad0(local_258);
                          local_1c0 = (byte *)(lVar5 + 0x1a8);
                          *local_1c0 = *local_1c0 & 0xf7 | (local_24f & 1) << 3;
                          iVar3 = FUN_140d726e0(local_248,&local_208,0xa0000016,1);
                          if (iVar3 == 0) {
                            FUN_140d186f0(0x10,0,0xa0,
                                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                          ,0x2de);
                            FUN_140d7bba0(param_1,0);
                            FUN_140d12160(local_258);
                            return param_1;
                          }
                          local_24e = local_208 != 0;
                          lVar5 = FUN_140d11ad0(local_258);
                          local_1b8 = (byte *)(lVar5 + 0x1a8);
                          *local_1b8 = *local_1b8 & 0xef | (local_24e & 1) << 4;
                          lVar5 = FUN_140d11ad0(local_258);
                          iVar3 = FUN_140de65e0(local_248,lVar5 + 8,0xa0000017,0);
                          if (iVar3 != 0) {
                            lVar5 = FUN_140d11ad0(local_258);
                            iVar3 = FUN_140de6550(local_248,lVar5 + 0x174,0xa0000018,0);
                            if (iVar3 != 0) {
                              local_110 = FUN_140d11ad0(local_258);
                              lVar5 = FUN_140d11ad0(local_258);
                              iVar3 = FUN_140de6550(local_248,lVar5 + 0xb8,0xa0000019,
                                                    *(undefined4 *)(local_110 + 0xb4));
                              if (iVar3 != 0) {
                                lVar5 = FUN_140d11ad0(local_258);
                                cVar1 = FUN_140de6280(local_248,lVar5 + 0x178,0xa000001a);
                                if ((cVar1 != '\0') &&
                                   (iVar3 = FUN_140d726e0(local_248,&local_204,0xa000001b,0),
                                   iVar3 != 0)) {
                                  lVar5 = FUN_140d11ad0(local_258);
                                  cVar1 = FUN_140de6280(local_248,lVar5 + 0x1b0,0xa000001c);
                                  if (cVar1 != '\0') {
                                    iVar3 = FUN_140d72580(local_248,local_e0,&local_22c,0xa000001d);
                                    if (iVar3 != 0) {
                                      puVar8 = (undefined *)FUN_140d837f0(local_e0,local_38);
                                      puVar9 = local_68;
                                      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                                        *puVar9 = *puVar8;
                                        puVar8 = puVar8 + 1;
                                        puVar9 = puVar9 + 1;
                                      }
                                      lVar5 = FUN_140d11ad0(local_258);
                                      cVar1 = FUN_140d12540(lVar5 + 0x188,local_68);
                                      if ((cVar1 != '\0') &&
                                         (iVar3 = FUN_140d72580(local_248,local_e0,local_200,
                                                                0xa000001e), iVar3 != 0)) {
                                        puVar8 = (undefined *)FUN_140d837f0(local_e0,local_28);
                                        puVar9 = local_58;
                                        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                                          *puVar9 = *puVar8;
                                          puVar8 = puVar8 + 1;
                                          puVar9 = puVar9 + 1;
                                        }
                                        lVar5 = FUN_140d11ad0(local_258);
                                        cVar1 = FUN_140d12540(lVar5 + 0x198,local_58);
                                        if ((cVar1 != '\0') &&
                                           (lVar5 = FUN_140d71850(local_248), lVar5 == 0)) {
                                          local_24d = local_204 != 0;
                                          lVar5 = FUN_140d11ad0(local_258);
                                          local_1b0 = (byte *)(lVar5 + 0x1a8);
                                          *local_1b0 = *local_1b0 & 0xdf | (local_24d & 1) << 5;
                                          if (local_22c == local_200[0]) {
                                            if (local_22c != 0) {
                                              lVar5 = FUN_140d11ad0(local_258);
                                              cVar1 = FUN_140d11df0(lVar5 + 0x178);
                                              if (cVar1 != '\0') goto LAB_140de536c;
                                            }
                                            local_24c = local_22c != 0;
                                            lVar5 = FUN_140d11ad0(local_258);
                                            local_1a8 = (byte *)(lVar5 + 0x1a8);
                                            *local_1a8 = *local_1a8 & 0xbf | (local_24c & 1) << 6;
                                            uVar4 = FUN_140d11ad0(local_258);
                                            cVar1 = (**(code **)(param_3 + 0x30))(uVar4);
                                            if (cVar1 == '\0') {
                                              FUN_140d186f0(0x10,0,0xa0,
                                                                                                                        
                                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x30e);
                                              FUN_140d7bba0(param_1,0);
                                              FUN_140d12160(local_258);
                                              return param_1;
                                            }
                                            FUN_140d11cd0(param_1,local_258);
                                            FUN_140d12160(local_258);
                                            return param_1;
                                          }
LAB_140de536c:
                                          FUN_140d186f0(0x10,0,0xa0,
                                                                                                                
                                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x308);
                                          FUN_140d7bba0(param_1,0);
                                          FUN_140d12160(local_258);
                                          return param_1;
                                        }
                                      }
                                    }
                                    FUN_140d186f0(0x10,0,0xa0,
                                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x300);
                                    FUN_140d7bba0(param_1,0);
                                    FUN_140d12160(local_258);
                                    return param_1;
                                  }
                                }
                              }
                            }
                          }
                          FUN_140d186f0(0x10,0,0xa0,
                                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                        ,0x2f3);
                          FUN_140d7bba0(param_1,0);
                          FUN_140d12160(local_258);
                          return param_1;
                        }
                      }
LAB_140de4f0d:
                      FUN_140d7bba0(param_1,0);
                      FUN_140d12160(local_258);
                      return param_1;
                    }
                  }
                }
                FUN_140d7bba0(param_1,0);
                FUN_140d12160(local_258);
                return param_1;
              }
            }
          }
          FUN_140d7bba0(param_1,0);
          FUN_140d12160(local_258);
          return param_1;
        }
      }
      FUN_140d7bba0(param_1,0);
      FUN_140d12160(local_258);
      return param_1;
    }
  }
  FUN_140d186f0(0x10,0,0xa0,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                ,0x254);
  FUN_140d7bba0(param_1,0);
  FUN_140d12160(local_258);
  return param_1;
}


/* address=140de54e0 name=FUN_140de54e0 */

undefined8 FUN_140de54e0(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *_Str;
  ulonglong uVar5;
  undefined local_108 [48];
  uint local_d8;
  undefined local_d0 [48];
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  size_t local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [56];
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 200) == 0)) {
    return 0;
  }
  iVar2 = FUN_140d741d0(param_2,local_d0,0x20000010);
  if ((((iVar2 != 0) && (iVar2 = FUN_140d74690(local_d0,1), iVar2 != 0)) &&
      (iVar2 = FUN_140d74690(local_d0,*(undefined2 *)(param_1 + 4)), iVar2 != 0)) &&
     ((iVar2 = FUN_140d741d0(local_d0,local_108,4), iVar2 != 0 &&
      (iVar2 = FUN_140d744b0(local_108,*(uint *)(*(longlong *)(param_1 + 200) + 0x10) & 0xffff),
      iVar2 != 0)))) {
    if (param_3 == 0) {
      local_d8 = (uint)*(byte *)(param_1 + 0x3b);
    }
    else {
      local_d8 = 0;
    }
    iVar2 = FUN_140d74930(local_d0,param_1 + 0x3c,local_d8);
    if (((iVar2 != 0) &&
        (iVar2 = FUN_140d74930(local_d0,param_1 + 0xb,*(undefined *)(param_1 + 10)), iVar2 != 0)) &&
       ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000001), iVar2 != 0 &&
        (((iVar2 = FUN_140d74690(local_108,*(undefined8 *)(param_1 + 0xc0)), iVar2 != 0 &&
          (iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000002), iVar2 != 0)) &&
         (iVar2 = FUN_140d74690(local_108,*(undefined4 *)(param_1 + 0xb4)), iVar2 != 0)))))) {
      uVar3 = FUN_140d11ad0(param_1 + 0x88);
      lVar4 = FUN_140d11f00(uVar3);
      if ((lVar4 != 0) && ((*(byte *)(param_1 + 0x1a8) >> 1 & 1) == 0)) {
        uVar3 = FUN_140d11ad0(param_1 + 0x88);
        local_98 = FUN_140d11f20(uVar3,0);
        iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000003);
        if (iVar2 == 0) {
          return 0;
        }
        local_88 = FUN_140d75b10(local_98);
        uVar3 = FUN_140d75af0(local_98);
        iVar2 = FUN_140d74290(local_108,uVar3,local_88);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000004);
      if ((iVar2 == 0) ||
         (iVar2 = FUN_140d74930(local_108,param_1 + 0x5d,*(undefined *)(param_1 + 0x5c)), iVar2 == 0
         )) {
        return 0;
      }
      if ((*(int *)(param_1 + 0xb0) != 0) &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000005), iVar2 == 0 ||
          (iVar2 = FUN_140d74690(local_108,(longlong)*(int *)(param_1 + 0xb0)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140d11eb0(param_1 + 0x80);
      if (cVar1 != '\0') {
        iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000008);
        if (iVar2 == 0) {
          return 0;
        }
        _Str = (char *)FUN_140d11ad0(param_1 + 0x80);
        local_80 = strlen(_Str);
        uVar3 = FUN_140d11ad0(param_1 + 0x80);
        iVar2 = FUN_140d74930(local_108,uVar3,local_80);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(int *)(param_1 + 0x16c) != 0) &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000009), iVar2 == 0 ||
          (iVar2 = FUN_140d74690(local_108,*(undefined4 *)(param_1 + 0x16c)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140d11df0(param_1 + 0xe8);
      if ((cVar1 == '\0') && (param_3 == 0)) {
        iVar2 = FUN_140d741d0(local_d0,local_108,0xa000000a);
        if (iVar2 == 0) {
          return 0;
        }
        local_78 = FUN_140d11de0(param_1 + 0xe8);
        uVar3 = FUN_140d11ad0(param_1 + 0xe8);
        iVar2 = FUN_140d74930(local_108,uVar3,local_78);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 1 & 1) != 0) &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa000000d), iVar2 == 0 ||
          (iVar2 = FUN_140d74930(local_108,param_1 + 0x108,0x20), iVar2 == 0)))) {
        return 0;
      }
      if ((*(char *)(param_1 + 0x168) != '\0') &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa000000e), iVar2 == 0 ||
          (iVar2 = FUN_140d74930(local_108,param_1 + 0x128,*(undefined *)(param_1 + 0x168)),
          iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140d13940(param_1 + 0xf8,0);
      if (cVar1 != '\0') {
        iVar2 = FUN_140d741d0(local_d0,local_108,0xa000000f);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_140d11ad0(param_1 + 0xf8);
        local_70 = FUN_140d75b10(uVar3);
        uVar3 = FUN_140d11ad0(param_1 + 0xf8);
        uVar3 = FUN_140d75af0(uVar3);
        iVar2 = FUN_140d74930(local_108,uVar3,local_70);
        if (iVar2 == 0) {
          return 0;
        }
      }
      cVar1 = FUN_140d13940(param_1 + 0x100,0);
      if (cVar1 != '\0') {
        iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000010);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_140d11ad0(param_1 + 0x100);
        local_68 = FUN_140d75b10(uVar3);
        uVar3 = FUN_140d11ad0(param_1 + 0x100);
        uVar3 = FUN_140d75af0(uVar3);
        iVar2 = FUN_140d74930(local_108,uVar3,local_68);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) & 1) != 0) &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000011), iVar2 == 0 ||
          (iVar2 = FUN_140d749a0(local_108,1), iVar2 == 0)))) {
        return 0;
      }
      if ((*(short *)(param_1 + 6) != 0) &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000012), iVar2 == 0 ||
          (iVar2 = FUN_140d74690(local_108,*(undefined2 *)(param_1 + 6)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140d13940(param_1 + 0x88,0);
      if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x1a8) >> 1 & 1) == 0)) {
        uVar3 = FUN_140d11ad0(param_1 + 0x88);
        uVar5 = FUN_140d11f00(uVar3);
        if (1 < uVar5) {
          iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000013);
          if (iVar2 == 0) {
            return 0;
          }
          local_a0 = 1;
          while( true ) {
            uVar3 = FUN_140d11ad0(param_1 + 0x88);
            uVar5 = FUN_140d11f00(uVar3);
            if (uVar5 <= local_a0) break;
            uVar3 = FUN_140d11ad0(param_1 + 0x88);
            local_90 = FUN_140d11f20(uVar3,local_a0);
            local_60 = FUN_140d75b10(local_90);
            uVar3 = FUN_140d75af0(local_90);
            iVar2 = FUN_140d74290(local_108,uVar3,local_60);
            if (iVar2 == 0) {
              return 0;
            }
            local_a0 = local_a0 + 1;
          }
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 3 & 1) != 0) &&
         (((iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000015), iVar2 == 0 ||
           (iVar2 = FUN_140d741d0(local_108,local_38,4), iVar2 == 0)) ||
          (iVar2 = FUN_140d74540(local_38,*(undefined4 *)(param_1 + 0x170)), iVar2 == 0)))) {
        return 0;
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 4 & 1) == 0) &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000016), iVar2 == 0 ||
          (iVar2 = FUN_140d749a0(local_108,0), iVar2 == 0)))) {
        return 0;
      }
      if ((*(short *)(param_1 + 8) != 0) &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000017), iVar2 == 0 ||
          (iVar2 = FUN_140d74690(local_108,*(undefined2 *)(param_1 + 8)), iVar2 == 0)))) {
        return 0;
      }
      if ((*(int *)(param_1 + 0x174) != 0) &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000018), iVar2 == 0 ||
          (iVar2 = FUN_140d74690(local_108,*(undefined4 *)(param_1 + 0x174)), iVar2 == 0)))) {
        return 0;
      }
      if ((*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xb8)) &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa0000019), iVar2 == 0 ||
          (iVar2 = FUN_140d74690(local_108,*(undefined4 *)(param_1 + 0xb8)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140d11df0(param_1 + 0x178);
      if (cVar1 == '\0') {
        iVar2 = FUN_140d741d0(local_d0,local_108,0xa000001a);
        if (iVar2 == 0) {
          return 0;
        }
        local_58 = FUN_140d11de0(param_1 + 0x178);
        uVar3 = FUN_140d11ad0(param_1 + 0x178);
        iVar2 = FUN_140d74930(local_108,uVar3,local_58);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 5 & 1) != 0) &&
         ((iVar2 = FUN_140d741d0(local_d0,local_108,0xa000001b), iVar2 == 0 ||
          (iVar2 = FUN_140d749a0(local_108,1), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_140d11df0(param_1 + 0x1b0);
      if (cVar1 == '\0') {
        iVar2 = FUN_140d741d0(local_d0,local_108,0xa000001c);
        if (iVar2 == 0) {
          return 0;
        }
        local_50 = FUN_140d11de0(param_1 + 0x1b0);
        uVar3 = FUN_140d11ad0(param_1 + 0x1b0);
        iVar2 = FUN_140d74930(local_108,uVar3,local_50);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(byte *)(param_1 + 0x1a8) >> 6 & 1) == 0) {
LAB_140de6176:
        uVar3 = FUN_140d73c90(param_2);
        return uVar3;
      }
      iVar2 = FUN_140d741d0(local_d0,local_108,0xa000001d);
      if (iVar2 != 0) {
        local_48 = FUN_140d11de0(param_1 + 0x188);
        uVar3 = FUN_140d11ad0(param_1 + 0x188);
        iVar2 = FUN_140d74930(local_108,uVar3,local_48);
        if ((iVar2 != 0) && (iVar2 = FUN_140d741d0(local_d0,local_108,0xa000001e), iVar2 != 0)) {
          local_40 = FUN_140d11de0(param_1 + 0x198);
          uVar3 = FUN_140d11ad0(param_1 + 0x198);
          iVar2 = FUN_140d74930(local_108,uVar3,local_40);
          if (iVar2 != 0) goto LAB_140de6176;
        }
      }
      return 0;
    }
  }
  return 0;
}


/* address=140de61a0 name=FUN_140de61a0 */

undefined8 FUN_140de61a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int local_28 [2];
  undefined8 local_20;
  undefined local_18 [24];
  
  iVar1 = FUN_140d72580(param_1,local_18,local_28,param_3);
  if (iVar1 == 0) {
    FUN_140d186f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x1a6);
    return 0;
  }
  if (local_28[0] == 0) {
    FUN_140d128d0(param_2,0);
  }
  else {
    iVar1 = FUN_140d71990(local_18);
    if (iVar1 != 0) {
      FUN_140d186f0(0x10,0,0xa0,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                    ,0x1ab);
      return 0;
    }
    local_20 = 0;
    iVar1 = FUN_140d71910(local_18,&local_20);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_140d128d0(param_2,local_20);
  }
  return 1;
}


/* address=140de6280 name=FUN_140de6280 */

uint FUN_140de6280(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  iVar1 = FUN_140d72580(param_1,local_48,0,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_140d186f0(0x10,0,0xa0,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                          ,0x1c0);
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    puVar4 = (undefined *)FUN_140d837f0(local_48,local_28);
    puVar5 = local_38;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_140d12540(param_2,local_38);
  }
  return uVar2;
}


/* address=140de6320 name=FUN_140de6320 */

undefined8 FUN_140de6320(wchar_t *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *local_28 [2];
  wchar_t *local_18 [3];
  
  iVar2 = FUN_140d72070(param_1,param_3);
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar3 = wcstoul(param_1,local_28,param_3);
    if (((uVar3 != 0) && (uVar3 = wcstoul((wchar_t *)local_28,local_18,4), uVar3 != 0)) &&
       (lVar5 = FUN_140d71850(local_28), lVar5 == 0)) {
      uVar4 = FUN_140d75910(local_18,param_4);
      FUN_140d7b9e0(param_2,uVar4);
      cVar1 = operator==<>(param_2,0);
      if (cVar1 != '\0') {
        return 0;
      }
      return 1;
    }
    FUN_140d186f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x1d2);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140de6400 name=FUN_140de6400 */

undefined8
FUN_140de6400(undefined8 param_1,undefined8 param_2,undefined *param_3,byte param_4,
             undefined4 param_5)

{
  undefined uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_20 [32];
  
  iVar2 = FUN_140d72580(param_1,local_20,0,param_5);
  if ((iVar2 != 0) && (uVar3 = FUN_140d71850(local_20), uVar3 <= param_4)) {
    uVar4 = FUN_140d71850(local_20);
    uVar5 = FUN_140d71830(local_20);
    FUN_140de4040(param_2,uVar5,uVar4);
    uVar1 = FUN_140d71850(local_20);
    *param_3 = uVar1;
    return 1;
  }
  FUN_140d186f0(0x10,0,0xa0,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                ,0x1e5);
  return 0;
}


/* address=140de64c0 name=FUN_140de64c0 */

undefined8 FUN_140de64c0(undefined8 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_140d72650(param_1,&local_18,param_3,(longlong)param_4);
  if ((iVar1 == 0) || (0x7fffffff < CONCAT44(uStack_14,local_18))) {
    FUN_140d186f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,499);
    uVar2 = 0;
  }
  else {
    *param_2 = local_18;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140de6550 name=FUN_140de6550 */

undefined8
FUN_140de6550(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_140d72650(param_1,&local_18,param_3,param_4);
  if ((iVar1 == 0) || (0xffffffff < CONCAT44(uStack_14,local_18))) {
    FUN_140d186f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x200);
    uVar2 = 0;
  }
  else {
    *param_2 = local_18;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140de65e0 name=FUN_140de65e0 */

undefined8
FUN_140de65e0(undefined8 param_1,undefined2 *param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 local_18;
  undefined6 uStack_16;
  
  iVar1 = FUN_140d72650(param_1,&local_18,param_3,param_4);
  if ((iVar1 == 0) || (0xffff < CONCAT62(uStack_16,local_18))) {
    FUN_140d186f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x20d);
    uVar2 = 0;
  }
  else {
    *param_2 = local_18;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140de6a80 name=FUN_140de6a80 */

void FUN_140de6a80(longlong param_1,undefined8 param_2)

{
  FUN_140de6d70(param_2,param_1 + 0x1b0);
  return;
}


/* address=140de6ac0 name=FUN_140de6ac0 */

undefined4 FUN_140de6ac0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = FUN_140d13940(param_1 + 8,0);
  if (cVar1 != '\0') {
    lVar3 = FUN_140d11ad0(param_1 + 8);
    iVar2 = FUN_140de6d70(param_2,lVar3 + 0xd0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=140de6b40 name=FUN_140de6b40 */

undefined8 FUN_140de6b40(longlong param_1)

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
      lVar2 = FUN_140d11ad0(param_1 + 8);
      cVar1 = FUN_140d13940(lVar2 + 0xd0,0);
      if (cVar1 == '\0') {
        lVar2 = FUN_140d11ad0(param_1 + 0x68);
        uVar3 = FUN_140d11ad0(lVar2 + 0x1b0);
      }
      else {
        lVar2 = FUN_140d11ad0(param_1 + 8);
        uVar3 = FUN_140d11ad0(lVar2 + 0xd0);
      }
    }
    else {
      FID_conflict__assert(L"0",(wchar_t *)"D",0xd3);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140de6ce0 name=FUN_140de6ce0 */

undefined8 FUN_140de6ce0(char *param_1,undefined8 *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  undefined **local_18;
  
  local_18 = &PTR_s_SRTP_AES128_CM_SHA1_80_1410b6fc0;
  while( true ) {
    if (*local_18 == (char *)0x0) {
      return 0;
    }
    sVar2 = strlen(*local_18);
    if ((param_3 == sVar2) && (iVar1 = strncmp(*local_18,param_1,param_3), iVar1 == 0)) break;
    local_18 = local_18 + 2;
  }
  *param_2 = local_18;
  return 1;
}


/* address=140de6d70 name=FUN_140de6d70 */

undefined4 FUN_140de6d70(char *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined local_48 [8];
  char *local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  size_t local_20;
  undefined8 local_18 [3];
  
  uVar3 = FUN_140d11e80();
  FUN_140d11ca0(local_48,uVar3);
  cVar1 = operator==<>(local_48,0);
  local_40 = param_1;
  if (cVar1 == '\0') {
    while( true ) {
      local_38 = FUN_140e73100(local_40,0x3a);
      if (local_38 == 0) {
        local_20 = strlen(local_40);
      }
      else {
        local_20 = local_38 - (longlong)local_40;
      }
      iVar2 = FUN_140de6ce0(local_40,local_18,local_20);
      if (iVar2 == 0) {
        FUN_140d186f0(0x10,0,0xd4,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_srtp.cc"
                      ,0xb3);
        local_2c = 0;
        FUN_140d132c0(local_48);
        return local_2c;
      }
      uVar3 = FUN_140d11ad0(local_48);
      lVar4 = FUN_140d8d850(uVar3,local_18[0]);
      if (lVar4 == 0) {
        local_28 = 0;
        FUN_140d132c0(local_48);
        return local_28;
      }
      if (local_38 == 0) break;
      local_40 = (char *)(local_38 + 1);
    }
    uVar3 = FUN_140d11b30(local_48);
    FUN_140d8da60(param_2,uVar3);
    local_24 = 1;
    FUN_140d132c0(local_48);
    local_30 = local_24;
  }
  else {
    FUN_140d186f0(0x10,0,0xd3,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_srtp.cc"
                  ,0xa7);
    local_30 = 0;
    FUN_140d132c0(local_48);
  }
  return local_30;
}


/* address=140de75a0 name=FUN_140de75a0 */

undefined8 FUN_140de75a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140de75f0 name=FUN_140de75f0 */

bool FUN_140de75f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = FUN_140d11de0(param_6);
  uVar3 = FUN_140d11ad0(param_6);
  uVar4 = FUN_140d11de0(param_5);
  uVar5 = FUN_140d11ad0(param_5);
  uVar6 = FUN_140d11de0(param_4);
  uVar7 = FUN_140d11ad0(param_4);
  uVar8 = FUN_140d11de0(param_3);
  uVar9 = FUN_140d11ad0(param_3);
  uVar10 = FUN_140d11de0(param_2);
  uVar11 = FUN_140d11ad0(param_2);
  iVar1 = FUN_140d6ff30(param_1,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  return iVar1 == 1;
}


/* address=140de7770 name=FUN_140de7770 */

ulonglong FUN_140de7770(longlong *param_1,uint param_2,undefined8 param_3,longlong param_4,
                       undefined *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong local_1c0;
  longlong local_1b8;
  undefined local_1b0 [8];
  uint local_1a8;
  ulonglong local_1a0;
  undefined local_198 [16];
  longlong local_188;
  undefined local_180 [16];
  undefined local_170 [8];
  undefined *local_168;
  undefined *local_160;
  longlong local_158;
  undefined *local_150;
  undefined *local_148;
  longlong local_140;
  undefined local_138 [16];
  undefined local_128 [16];
  undefined local_118 [8];
  undefined local_110 [8];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
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
  
  cVar1 = FUN_140de8110(param_1,&local_1c0,&local_1b8,&local_1a0,*(undefined8 *)(param_4 + 200));
  if (cVar1 == '\0') {
    return 0;
  }
  local_188 = (local_1c0 + local_1b8 + local_1a0) * 2;
  cVar1 = FUN_140d11df0(param_3);
  if (cVar1 == '\0') {
LAB_140de786f:
    lVar7 = FUN_140d11de0(param_3);
    if (lVar7 != local_188) {
      FID_conflict__assert((wchar_t *)"k",(wchar_t *)"D",0xdf);
    }
    FUN_140d13c30(local_198,param_3);
    FUN_140d11d80(local_138);
    FUN_140d11d80(local_128);
    FUN_140d11d80(local_180);
    local_1a8 = (uint)((*(byte *)((longlong)param_1 + 0xa4) & 1) == 0);
    if (param_2 == local_1a8) {
      puVar4 = (undefined *)FUN_140d12660(local_198,local_98,0,local_1c0);
      puVar8 = local_138;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined *)FUN_140d12660(local_198,local_88,local_1c0 * 2,local_1b8);
      puVar8 = local_128;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined *)
               FUN_140d12660(local_198,local_78,local_1b8 * 2 + local_1c0 * 2,local_1a0);
      puVar8 = local_180;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    else {
      puVar4 = (undefined *)FUN_140d12660(local_198,local_68,local_1c0,local_1c0);
      puVar8 = local_138;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined *)FUN_140d12660(local_198,local_58,local_1b8 + local_1c0 * 2,local_1b8);
      puVar8 = local_128;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined *)
               FUN_140d12660(local_198,local_48,local_1a0 + local_1b8 * 2 + local_1c0 * 2,local_1a0)
      ;
      puVar8 = local_180;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    cVar1 = FUN_140d11df0(param_5);
    if (cVar1 == '\0') {
      uVar5 = FUN_140d11de0(param_5);
      if (uVar5 != local_1a0) {
        return uVar5 & 0xffffffffffffff00;
      }
      puVar4 = local_180;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar4 = *param_5;
        param_5 = param_5 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    iVar3 = FUN_140d08380(param_1);
    puVar4 = local_180;
    puVar8 = local_f8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar4 = local_138;
    puVar8 = local_e8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar4 = local_128;
    puVar8 = local_d8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = FUN_140d8e040(local_170,param_2,*(undefined2 *)(param_1 + 2),iVar3 != 0,
                          *(undefined8 *)(param_4 + 200),local_d8,local_e8,local_f8);
    FUN_140d11cd0(local_1b0,uVar6);
    FUN_140d8fda0(local_170);
    cVar1 = FUN_140d11eb0(local_1b0);
    if (cVar1 == '\0') {
      FUN_140d8fda0(local_1b0);
      uVar5 = 0;
    }
    else if (param_2 == 0) {
      local_168 = local_38;
      local_160 = local_118;
      puVar4 = (undefined *)FUN_140d11d80(local_168);
      puVar8 = local_c8;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar6 = FUN_140d11b30(local_1b0);
      uVar6 = FUN_140d11cd0(local_160,uVar6);
      local_158 = *param_1;
      bVar2 = (**(code **)(local_158 + 0x88))(param_1,3,uVar6,local_c8);
      FUN_140d8fda0(local_1b0);
      uVar5 = (ulonglong)bVar2;
    }
    else {
      local_150 = local_28;
      local_148 = local_110;
      puVar4 = (undefined *)FUN_140d11d80(local_150);
      puVar8 = local_b8;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar6 = FUN_140d11b30(local_1b0);
      uVar6 = FUN_140d11cd0(local_148,uVar6);
      local_140 = *param_1;
      bVar2 = (**(code **)(local_140 + 0x90))(param_1,3,uVar6,local_b8);
      FUN_140d8fda0(local_1b0);
      uVar5 = (ulonglong)bVar2;
    }
  }
  else {
    cVar1 = FUN_140d12460(param_3,local_188);
    if (cVar1 != '\0') {
      puVar4 = (undefined *)FUN_140d7f190(local_a8,param_3);
      puVar8 = local_108;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      cVar1 = FUN_140de8240(param_1,local_108,param_4);
      if (cVar1 != '\0') goto LAB_140de786f;
    }
    uVar5 = 0;
  }
  return uVar5;
}


/* address=140de7d50 name=FUN_140de7d50 */

void FUN_140de7d50(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar1 = (undefined *)FUN_140d11d80(local_28);
  puVar4 = local_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar2 = FUN_140d958b0(param_1);
  FUN_140de7770(*param_1,param_2,param_1 + 0xc1,uVar2,local_38);
  return;
}


/* address=140de7de0 name=FUN_140de7de0 */

void FUN_140de7de0(longlong *param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_1d8 [32];
  undefined *local_1b8;
  undefined *local_1b0;
  longlong local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined *local_188;
  undefined local_180 [16];
  undefined local_170 [24];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [16];
  undefined local_118 [16];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_1d8;
  local_1a8 = *param_1;
  FUN_140d11e40(local_180,param_2,0x30);
  if ((*(byte *)((longlong)param_1 + 0x622) >> 1 & 1) == 0) {
    FUN_140d11e40(local_108,"master secret",0xd);
    local_190 = local_88;
    local_188 = local_78;
    puVar2 = (undefined *)FUN_140d13910(local_190,*(longlong *)(local_1a8 + 0x30) + 0x10);
    puVar5 = local_f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined *)FUN_140d13910(local_188,*(longlong *)(local_1a8 + 0x30) + 0x30);
    puVar5 = local_e8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = local_108;
    puVar5 = local_d8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = local_c8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar2 = local_180;
    puVar5 = local_b8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_140e196c0(param_1 + 0x33);
    local_1b0 = local_f8;
    local_1b8 = local_e8;
    FUN_140de75f0(uVar3,local_b8,local_c8,local_d8);
  }
  else {
    FUN_140d11e40(local_170,"extended master secret",0x16);
    cVar1 = FUN_140e197d0(param_1 + 0x33,local_68,&local_198);
    if (cVar1 != '\0') {
      local_1a0 = local_a8;
      puVar2 = (undefined *)FUN_140d11d80(local_1a0);
      puVar5 = local_158;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2 = (undefined *)FUN_140d11e40(local_98,local_68,local_198);
      puVar5 = local_148;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2 = local_170;
      puVar5 = local_138;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2 = local_128;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar2 = *param_3;
        param_3 = param_3 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar2 = local_180;
      puVar5 = local_118;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = FUN_140e196c0(param_1 + 0x33);
      local_1b0 = local_158;
      local_1b8 = local_148;
      FUN_140de75f0(uVar3,local_118,local_128,local_138);
    }
  }
  FUN_140e28050(local_28 ^ (ulonglong)auStack_1d8);
  return;
}


/* address=140de8110 name=FUN_140de8110 */

undefined8
FUN_140de8110(undefined8 param_1,longlong *param_2,ulonglong *param_3,longlong *param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 in_stack_ffffffffffffffd8;
  undefined2 uVar6;
  undefined8 local_10 [2];
  
  uVar6 = (undefined2)((uint)in_stack_ffffffffffffffd8 >> 0x10);
  local_10[0] = 0;
  iVar3 = FUN_140d08380(param_1);
  uVar2 = FUN_140d77f20(param_1);
  cVar1 = FUN_140d8ba30(local_10,param_2,param_4,param_5,CONCAT22(uVar6,uVar2),iVar3 != 0);
  if (cVar1 == '\0') {
    FUN_140d186f0(0x10,0,0x82,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\t1_enc.cc"
                  ,0xad);
    uVar4 = 0;
  }
  else {
    uVar5 = FUN_140d46b40(local_10[0]);
    *param_3 = uVar5;
    if (*param_2 != 0) {
      if (*param_3 < (ulonglong)(*param_2 + *param_4)) {
        FUN_140d186f0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\t1_enc.cc"
                      ,0xb7);
        return 0;
      }
      *param_3 = *param_3 - (*param_2 + *param_4);
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140de8240 name=FUN_140de8240 */

void FUN_140de8240(longlong param_1,undefined *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_b0 [16];
  undefined local_a0 [24];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  FUN_140d11e40(local_a0,param_3 + 0xb,*(undefined *)(param_3 + 10));
  FUN_140d11e40(local_b0,"key expansion",0xd);
  uVar1 = FUN_140d80fb0(param_3);
  puVar2 = (undefined *)FUN_140d13910(local_38,*(longlong *)(param_1 + 0x30) + 0x30);
  puVar4 = local_88;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined *)FUN_140d13910(local_28,*(longlong *)(param_1 + 0x30) + 0x10);
  puVar4 = local_78;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = local_b0;
  puVar4 = local_68;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = local_a0;
  puVar4 = local_58;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = local_48;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_140de75f0(uVar1,local_48,local_58,local_68,local_78,local_88);
  return;
}


/* address=140de84f0 name=FUN_140de84f0 */

undefined8 FUN_140de84f0(undefined8 param_1,ushort param_2)

{
  undefined8 uVar1;
  ushort local_res10 [12];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [2];
  undefined local_60 [8];
  undefined local_58 [8];
  undefined local_50 [8];
  undefined local_48 [8];
  undefined local_40 [8];
  undefined local_38 [8];
  undefined local_30 [8];
  undefined local_28 [8];
  undefined local_20 [8];
  undefined local_18 [24];
  
  local_res10[0] = param_2;
  if (param_2 < 0x11ed) {
    if (param_2 == 0x11ec) {
      uVar1 = FUN_140dec560();
      uVar1 = FUN_140d11ca0(local_18,uVar1);
      FUN_140d11cd0(param_1,uVar1);
      FUN_140d95d90(local_18);
      return param_1;
    }
    if (param_2 == 0x15) {
      local_84 = 0x15;
      local_80 = 0x2c9;
      uVar1 = FUN_140dec2f0(local_60,&local_80,&local_84);
      FUN_140dec360(param_1,uVar1);
      FUN_140debec0(local_60);
      return param_1;
    }
    if (param_2 == 0x17) {
      local_7c = 0x17;
      local_78 = 0x19f;
      uVar1 = FUN_140dec2f0(local_58,&local_78,&local_7c);
      FUN_140dec360(param_1,uVar1);
      FUN_140debec0(local_58);
      return param_1;
    }
    if (param_2 == 0x18) {
      local_74 = 0x18;
      local_70 = 0x2cb;
      uVar1 = FUN_140dec2f0(local_50,&local_70,&local_74);
      FUN_140dec360(param_1,uVar1);
      FUN_140debec0(local_50);
      return param_1;
    }
    if (param_2 == 0x19) {
      local_6c = 0x19;
      local_68[0] = 0x2cc;
      uVar1 = FUN_140dec2f0(local_48,local_68,&local_6c);
      FUN_140dec360(param_1,uVar1);
      FUN_140debec0(local_48);
      return param_1;
    }
    if (param_2 == 0x1d) {
      uVar1 = FUN_140dec3c0(local_40);
      FUN_140dec400(param_1,uVar1);
      FUN_140debf80(local_40);
      return param_1;
    }
  }
  else {
    if (param_2 == 0x6399) {
      uVar1 = FUN_140dec4b0(local_res10);
      uVar1 = FUN_140d11ca0(local_30,uVar1);
      FUN_140d11cd0(param_1,uVar1);
      FUN_140d95d90(local_30);
      return param_1;
    }
    if (param_2 == 0xfe30) {
      uVar1 = FUN_140dec460();
      uVar1 = FUN_140d11ca0(local_38,uVar1);
      FUN_140d11cd0(param_1,uVar1);
      FUN_140d95d90(local_38);
      return param_1;
    }
    if (param_2 == 0xfe31) {
      uVar1 = FUN_140dec4b0(local_res10);
      uVar1 = FUN_140d11ca0(local_28,uVar1);
      FUN_140d11cd0(param_1,uVar1);
      FUN_140d95d90(local_28);
      return param_1;
    }
    if (param_2 == 0xfe32) {
      uVar1 = FUN_140dec510();
      uVar1 = FUN_140d11ca0(local_20,uVar1);
      FUN_140d11cd0(param_1,uVar1);
      FUN_140d95d90(local_20);
      return param_1;
    }
  }
  FUN_140d7bba0(param_1,0);
  return param_1;
}


/* address=140de8890 name=FUN_140de8890 */

undefined8 FUN_140de8890(undefined2 *param_1,int param_2)

{
  undefined **local_28;
  
  local_28 = (undefined **)&DAT_1410b7cb0;
  while( true ) {
    if (local_28 == &PTR_DAT_1410b7f80) {
      return 0;
    }
    if (*(int *)local_28 == param_2) break;
    local_28 = local_28 + 9;
  }
  *param_1 = *(undefined2 *)((longlong)local_28 + 4);
  return 1;
}


/* address=140de8920 name=FUN_140de8920 */

undefined8 FUN_140de8920(undefined2 *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  undefined **local_20;
  
  local_20 = (undefined **)&DAT_1410b7cb0;
  while( true ) {
    if (local_20 == &PTR_DAT_1410b7f80) {
      return 0;
    }
    sVar2 = strlen((char *)((longlong)local_20 + 6));
    if ((param_3 == sVar2) &&
       (iVar1 = strncmp((char *)((longlong)local_20 + 6),param_2,param_3), iVar1 == 0)) break;
    sVar2 = strlen((char *)((longlong)local_20 + 0x26));
    if (((sVar2 != 0) && (sVar2 = strlen((char *)((longlong)local_20 + 0x26)), param_3 == sVar2)) &&
       (iVar1 = strncmp((char *)((longlong)local_20 + 0x26),param_2,param_3), iVar1 == 0)) {
      *param_1 = *(undefined2 *)((longlong)local_20 + 4);
      return 1;
    }
    local_20 = local_20 + 9;
  }
  *param_1 = *(undefined2 *)((longlong)local_20 + 4);
  return 1;
}


/* address=140de8a50 name=FUN_140de8a50 */

undefined8 * FUN_140de8a50(undefined8 *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  FUN_140dec190(param_1);
  *param_1 = &PTR_LAB_1410b7fc8;
  FUN_140d139c0(param_1 + 1);
  uVar1 = FUN_140d55410(param_2);
  param_1[2] = uVar1;
  *(undefined2 *)(param_1 + 3) = param_3;
  return param_1;
}


/* address=140de92c0 name=FUN_140de92c0 */

void FUN_140de92c0(longlong param_1)

{
  FUN_140db5640(param_1 + 8);
  FUN_140dec100(param_1);
  return;
}


/* address=140de9350 name=FUN_140de9350 */

undefined8 * FUN_140de9350(undefined8 *param_1)

{
  FUN_140dec190(param_1);
  *param_1 = &PTR_LAB_1410b8008;
  return param_1;
}


/* address=140de96a0 name=FUN_140de96a0 */

void FUN_140de96a0(undefined8 param_1)

{
  FUN_140dec100(param_1);
  return;
}


/* address=140de9720 name=FUN_140de9720 */

undefined8 * FUN_140de9720(undefined8 *param_1)

{
  FUN_140dec190(param_1);
  *param_1 = &PTR_LAB_1410b8048;
  FUN_140d139c0(param_1 + 1);
  return param_1;
}


/* address=140deaac0 name=FUN_140deaac0 */

void FUN_140deaac0(longlong param_1)

{
  FUN_140db5640(param_1 + 8);
  FUN_140dec100(param_1);
  return;
}


/* address=140deab50 name=FUN_140deab50 */

undefined8 * FUN_140deab50(undefined8 *param_1,short param_2)

{
  FUN_140dec190(param_1);
  *param_1 = &PTR_LAB_1410b8088;
  *(short *)(param_1 + 0x131) = param_2;
  if ((param_2 != 0x6399) && (param_2 != -0x1cf)) {
    FID_conflict__assert((wchar_t *)"g",(wchar_t *)"D",0x1a4);
  }
  return param_1;
}


/* address=140deb170 name=FUN_140deb170 */

void FUN_140deb170(undefined8 param_1)

{
  FUN_140dec100(param_1);
  return;
}


/* address=140deb1f0 name=FUN_140deb1f0 */

undefined8 * FUN_140deb1f0(undefined8 *param_1)

{
  FUN_140dec190(param_1);
  *param_1 = &PTR_LAB_1410b80c8;
  return param_1;
}


/* address=140deb7e0 name=FUN_140deb7e0 */

void FUN_140deb7e0(undefined8 param_1)

{
  FUN_140dec100(param_1);
  return;
}


/* address=140deb860 name=FUN_140deb860 */

undefined8 * FUN_140deb860(undefined8 *param_1)

{
  FUN_140dec190(param_1);
  *param_1 = &PTR_LAB_1410b8108;
  return param_1;
}


/* address=140debe40 name=FUN_140debe40 */

void FUN_140debe40(undefined8 param_1)

{
  FUN_140dec100(param_1);
  return;
}


/* address=140debec0 name=FUN_140debec0 */

void FUN_140debec0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140debf60(param_1);
    FUN_140dec690(uVar1,*param_1);
  }
  return;
}


/* address=140debf00 name=FUN_140debf00 */

void FUN_140debf00(undefined8 param_1)

{
  FUN_140debf60(param_1);
  return;
}


/* address=140debf30 name=std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release */

/* Library Function - Single Match
    public: class std::_Facet_base * __ptr64 __cdecl std::unique_ptr<class std::_Facet_base,struct
   std::default_delete<class std::_Facet_base> >::release(void) __ptr64
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

_Facet_base * __thiscall
std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release
          (unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
           *this)

{
  _Facet_base *p_Var1;
  _Facet_base *local_18 [3];
  
  local_18[0] = (_Facet_base *)0x0;
  p_Var1 = exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     ((_Facet_base **)this,local_18);
  return p_Var1;
}


/* address=140debf60 name=FUN_140debf60 */

undefined8 FUN_140debf60(undefined8 param_1)

{
  return param_1;
}


/* address=140debf80 name=FUN_140debf80 */

void FUN_140debf80(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140dec020(param_1);
    FUN_140dec670(uVar1,*param_1);
  }
  return;
}


/* address=140debfc0 name=FUN_140debfc0 */

void FUN_140debfc0(undefined8 param_1)

{
  FUN_140dec020(param_1);
  return;
}


/* address=140debff0 name=std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release */

/* Library Function - Single Match
    public: class std::_Facet_base * __ptr64 __cdecl std::unique_ptr<class std::_Facet_base,struct
   std::default_delete<class std::_Facet_base> >::release(void) __ptr64
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

_Facet_base * __thiscall
std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release
          (unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
           *this)

{
  _Facet_base *p_Var1;
  _Facet_base *local_18 [3];
  
  local_18[0] = (_Facet_base *)0x0;
  p_Var1 = exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     ((_Facet_base **)this,local_18);
  return p_Var1;
}


/* address=140dec020 name=FUN_140dec020 */

undefined8 FUN_140dec020(undefined8 param_1)

{
  return param_1;
}


/* address=140dec040 name=FUN_140dec040 */

void FUN_140dec040(facet *param_1)

{
  std::_DebugHeapDelete<class_std::locale::facet>(param_1);
  return;
}


/* address=140dec060 name=FUN_140dec060 */

void FUN_140dec060(facet *param_1)

{
  std::_DebugHeapDelete<class_std::locale::facet>(param_1);
  return;
}


/* address=140dec080 name=FUN_140dec080 */

void FUN_140dec080(undefined8 param_1)

{
  FUN_140d27fa0(param_1);
  return;
}


/* address=140dec0a0 name=FUN_140dec0a0 */

undefined8 * FUN_140dec0a0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_140d28030(*param_1);
  return param_1;
}


/* address=140dec0e0 name=FUN_140dec0e0 */

void FUN_140dec0e0(undefined8 *param_1)

{
  FUN_140d281e0(*param_1);
  return;
}


/* address=140dec100 name=FUN_140dec100 */

void FUN_140dec100(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_1410b7f88;
  return;
}


/* address=140dec120 name=FUN_140dec120 */

void FUN_140dec120(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=140dec190 name=FUN_140dec190 */

undefined8 * FUN_140dec190(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_1410b7f88;
  return param_1;
}


/* address=140dec210 name=FUN_140dec210 */

void FUN_140dec210(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140d11b30(param_1);
    FUN_140db56e0(uVar2,p_Var1);
  }
  return;
}


/* address=140dec260 name=FUN_140dec260 */

void FUN_140dec260(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140d11b30(param_1);
    FUN_140dec6b0(uVar1,*param_1);
  }
  return;
}


/* address=140dec2a0 name=FUN_140dec2a0 */

void FUN_140dec2a0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_140d11b30(param_1);
    FUN_140db5720(uVar2,p_Var1);
  }
  return;
}


/* address=140dec2f0 name=FUN_140dec2f0 */

undefined8 FUN_140dec2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined local_10 [16];
  
  uVar1 = FUN_140d11b30(param_3);
  uVar2 = FUN_140d11b30(param_2);
  uVar1 = FUN_140dec5b0(uVar2,uVar1);
  uVar1 = FUN_140d11ca0(local_10,uVar1);
  FUN_140dec360(param_1,uVar1);
  FUN_140debec0(local_10);
  return param_1;
}


/* address=140dec360 name=FUN_140dec360 */

undefined8
FUN_140dec360(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  undefined8 uVar1;
  undefined local_18;
  _Facet_base *local_10 [2];
  
  local_10[0] = std::
                unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                ::release(param_2);
  uVar1 = FUN_140debf00(param_2);
  uVar1 = FUN_140d11b30(uVar1);
  FUN_140d13fd0(param_1,local_18,uVar1,local_10);
  return param_1;
}


/* address=140dec3c0 name=FUN_140dec3c0 */

undefined8 FUN_140dec3c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140dec620();
  uVar1 = FUN_140d11ca0(local_18,uVar1);
  FUN_140dec400(param_1,uVar1);
  FUN_140debf80(local_18);
  return param_1;
}


/* address=140dec400 name=FUN_140dec400 */

undefined8
FUN_140dec400(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  undefined8 uVar1;
  undefined local_18;
  _Facet_base *local_10 [2];
  
  local_10[0] = std::
                unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                ::release(param_2);
  uVar1 = FUN_140debfc0(param_2);
  uVar1 = FUN_140d11b30(uVar1);
  FUN_140d13fd0(param_1,local_18,uVar1,local_10);
  return param_1;
}


/* address=140dec460 name=FUN_140dec460 */

undefined8 FUN_140dec460(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d76180(0x688);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d11a30(0x688,lVar1);
    uVar2 = FUN_140deb860(uVar2);
  }
  return uVar2;
}


/* address=140dec4b0 name=FUN_140dec4b0 */

undefined8 FUN_140dec4b0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  lVar1 = FUN_140d76180(0x990);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d11a30(0x990,lVar1);
    puVar3 = (undefined2 *)FUN_140d11b30(param_1);
    uVar2 = FUN_140deab50(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=140dec510 name=FUN_140dec510 */

undefined8 FUN_140dec510(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d76180(0x970);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d11a30(0x970,lVar1);
    uVar2 = FUN_140de9720(uVar2);
  }
  return uVar2;
}


/* address=140dec560 name=FUN_140dec560 */

undefined8 FUN_140dec560(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d76180(0x988);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d11a30(0x988,lVar1);
    uVar2 = FUN_140deb1f0(uVar2);
  }
  return uVar2;
}


/* address=140dec5b0 name=FUN_140dec5b0 */

undefined8 FUN_140dec5b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  
  lVar1 = FUN_140d76180(0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d11a30(0x20,lVar1);
    puVar3 = (undefined2 *)FUN_140d11b30(param_2);
    puVar4 = (undefined4 *)FUN_140d11b30(param_1);
    uVar2 = FUN_140de8a50(uVar2,*puVar4,*puVar3);
  }
  return uVar2;
}


/* address=140dec620 name=FUN_140dec620 */

undefined8 FUN_140dec620(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d76180(0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d11a30(0x28,lVar1);
    uVar2 = FUN_140de9350(uVar2);
  }
  return uVar2;
}


/* address=140dec670 name=FUN_140dec670 */

void FUN_140dec670(undefined8 param_1,undefined8 param_2)

{
  FUN_140dec040(param_2);
  return;
}


/* address=140dec690 name=FUN_140dec690 */

void FUN_140dec690(undefined8 param_1,undefined8 param_2)

{
  FUN_140dec060(param_2);
  return;
}


/* address=140dec6b0 name=FUN_140dec6b0 */

void FUN_140dec6b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140dec080(param_2);
  return;
}


/* address=140dec6e0 name=FUN_140dec6e0 */

undefined8 FUN_140dec6e0(int param_1)

{
  undefined8 uVar1;
  uint local_18;
  
  if (param_1 != 0) {
    for (local_18 = 0; local_18 < 0x12; local_18 = local_18 + 1) {
      if (*(int *)(&DAT_1410b8140 + (ulonglong)local_18 * 0x20) == param_1) {
        uVar1 = (**(code **)(&UNK_1410b8148 + (ulonglong)local_18 * 0x20))();
        return uVar1;
      }
    }
  }
  return 0;
}


/* address=140dec750 name=FUN_140dec750 */

void FUN_140dec750(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_140dba700(param_1);
    uVar2 = FUN_140dba6d0(param_1);
    FUN_140d717c0(local_20,uVar2,uVar1);
    FUN_140decb40(local_20);
  }
  else {
    FUN_140dec6e0(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


/* address=140dec7c0 name=FUN_140dec7c0 */

longlong FUN_140dec7c0(wchar_t *param_1)

{
  ulong uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *local_40 [2];
  wchar_t *local_30 [2];
  wchar_t *local_20 [4];
  
  uVar1 = wcstoul(param_1,local_40,0x20000010);
  if ((uVar1 == 0) || (uVar1 = wcstoul((wchar_t *)local_40,local_30,6), uVar1 == 0)) {
    FUN_140d186f0(0x1d,0,0x65,s_D__a_1_s_target_release_build_bo_1413efb20,0xac);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140decb40(local_30);
    if (lVar2 == 0) {
      FUN_140d186f0(0x1d,0,0x66,s_D__a_1_s_target_release_build_bo_1413efb90,0xb2);
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_140d71850(local_40);
      if ((lVar3 != 0) &&
         (((uVar1 = wcstoul((wchar_t *)local_40,local_20,5), uVar1 == 0 ||
           (lVar3 = FUN_140d71850(local_20), lVar3 != 0)) ||
          (lVar3 = FUN_140d71850(local_40), lVar3 != 0)))) {
        FUN_140d186f0(0x1d,0,0x65,s_D__a_1_s_target_release_build_bo_1413efc00,0xbf);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


/* address=140dec8e0 name=FUN_140dec8e0 */

undefined8 FUN_140dec8e0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong local_a8;
  undefined local_98 [48];
  undefined local_68 [48];
  undefined local_38 [56];
  
  iVar2 = FUN_140d741d0(param_1,local_98,0x20000010);
  if ((iVar2 == 0) || (iVar2 = FUN_140d741d0(local_98,local_68,6), iVar2 == 0)) {
    return 0;
  }
  bVar1 = false;
  iVar2 = FUN_140d1c8b0(param_2);
  local_a8 = 0;
  do {
    if (6 < local_a8) {
LAB_140dec9c6:
      if (!bVar1) {
        FUN_140d186f0(0x1d,0,0x66,s_D__a_1_s_target_release_build_bo_1413efc70,0xdb);
        return 0;
      }
      iVar2 = FUN_140d741d0(local_98,local_38,5);
      if ((iVar2 != 0) && (iVar2 = FUN_140d73c90(param_1), iVar2 != 0)) {
        return 1;
      }
      return 0;
    }
    if (iVar2 == *(int *)(&DAT_1410b838c + local_a8 * 0x10)) {
      iVar2 = FUN_140d74290(local_68,&DAT_1410b8380 + local_a8 * 0x10,
                            (&DAT_1410b8389)[local_a8 * 0x10]);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = true;
      goto LAB_140dec9c6;
    }
    local_a8 = local_a8 + 1;
  } while( true );
}


/* address=140decb00 name=FUN_140decb00 */

int FUN_140decb00(void *param_1,void *param_2,size_t param_3)

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


/* address=140decb40 name=FUN_140decb40 */

undefined8 FUN_140decb40(undefined8 param_1)

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
    uVar3 = FUN_140d71850(param_1);
    if (uVar3 == (byte)(&DAT_1410b8389)[local_28 * 0x10]) {
      uVar1 = (&DAT_1410b8389)[local_28 * 0x10];
      uVar4 = FUN_140d71830(param_1);
      iVar2 = FUN_140decb00(uVar4,&DAT_1410b8380 + local_28 * 0x10,uVar1);
      if (iVar2 == 0) {
        uVar4 = FUN_140dec6e0(*(undefined4 *)(&DAT_1410b838c + local_28 * 0x10));
        return uVar4;
      }
    }
    local_28 = local_28 + 1;
  } while( true );
}


/* address=140decd70 name=FUN_140decd70 */

longlong FUN_140decd70(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *local_20 [4];
  
  lVar3 = FUN_140d528f0();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = wcstoul(param_1,local_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_140ded6d0(local_20,lVar3 + 8), iVar2 == 0)) ||
        (iVar2 = FUN_140ded6d0(local_20,lVar3 + 0x10), iVar2 == 0)) ||
       (lVar4 = FUN_140d71850(local_20), lVar4 != 0)) {
      FUN_140d186f0(4,0,100,s_D__a_1_s_target_release_build_bo_1413efe40,100);
      FUN_140d52a50(lVar3);
      lVar3 = 0;
    }
    else {
      iVar2 = FUN_140d53690(lVar3);
      if (iVar2 == 0) {
        FUN_140d186f0(4,0,0x68,s_D__a_1_s_target_release_build_bo_1413efeb0,0x6a);
        FUN_140d52a50(lVar3);
        lVar3 = 0;
      }
    }
  }
  return lVar3;
}


/* address=140dece70 name=FUN_140dece70 */

longlong FUN_140dece70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined local_20 [32];
  
  FUN_140d717c0(local_20,param_1,param_2);
  lVar1 = FUN_140decd70(local_20);
  if ((lVar1 == 0) || (lVar2 = FUN_140d71850(local_20), lVar2 != 0)) {
    FUN_140d186f0(4,0,100,s_D__a_1_s_target_release_build_bo_1413eff20,0x77);
    FUN_140d52a50(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=140decf00 name=FUN_140decf00 */

undefined8 FUN_140decf00(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_140d741d0(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_140ded740(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0))
      && (iVar1 = FUN_140ded740(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0)) &&
     (iVar1 = FUN_140d73c90(param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_140d186f0(4,0,0x79,s_D__a_1_s_target_release_build_bo_1413eff90,0x84);
  return 0;
}


/* address=140decfa0 name=FUN_140decfa0 */

undefined8 FUN_140decfa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  FUN_140d73a50(local_38);
  iVar1 = FUN_140d73a80(local_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_140decf00(local_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_140d73bb0(local_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_140d186f0(4,0,0x79,s_D__a_1_s_target_release_build_bo_1413f0000,0x91);
  FUN_140d73b40(local_38);
  return 0;
}


/* address=140ded040 name=FUN_140ded040 */

longlong FUN_140ded040(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_20;
  wchar_t *local_18 [3];
  
  lVar3 = FUN_140d528f0();
  if (lVar3 != 0) {
    uVar1 = wcstoul(param_1,local_18,0x20000010);
    if ((uVar1 == 0) || (iVar2 = FUN_140d72240(local_18,&local_20), iVar2 == 0)) {
      FUN_140d186f0(4,0,100,s_D__a_1_s_target_release_build_bo_1413f0070,0xa6);
    }
    else if (local_20 == DAT_1410b8420) {
      iVar2 = FUN_140ded6d0(local_18,lVar3 + 8);
      if (((((iVar2 != 0) && (iVar2 = FUN_140ded6d0(local_18,lVar3 + 0x10), iVar2 != 0)) &&
           (iVar2 = FUN_140ded6d0(local_18,lVar3 + 0x18), iVar2 != 0)) &&
          ((iVar2 = FUN_140ded6d0(local_18,lVar3 + 0x20), iVar2 != 0 &&
           (iVar2 = FUN_140ded6d0(local_18,lVar3 + 0x28), iVar2 != 0)))) &&
         ((iVar2 = FUN_140ded6d0(local_18,lVar3 + 0x30), iVar2 != 0 &&
          ((iVar2 = FUN_140ded6d0(local_18,lVar3 + 0x38), iVar2 != 0 &&
           (iVar2 = FUN_140ded6d0(local_18,lVar3 + 0x40), iVar2 != 0)))))) {
        lVar4 = FUN_140d71850(local_18);
        if (lVar4 == 0) {
          iVar2 = FUN_140d53690(lVar3);
          if (iVar2 != 0) {
            return lVar3;
          }
          FUN_140d186f0(4,0,0x68,s_D__a_1_s_target_release_build_bo_1413f01c0,0xc0);
        }
        else {
          FUN_140d186f0(4,0,100,s_D__a_1_s_target_release_build_bo_1413f0150,0xbb);
        }
      }
    }
    else {
      FUN_140d186f0(4,0,0x6a,s_D__a_1_s_target_release_build_bo_1413f00e0,0xab);
    }
    FUN_140d52a50(lVar3);
  }
  return 0;
}


/* address=140ded250 name=FUN_140ded250 */

longlong FUN_140ded250(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined local_20 [32];
  
  FUN_140d717c0(local_20,param_1,param_2);
  lVar1 = FUN_140ded040(local_20);
  if ((lVar1 == 0) || (lVar2 = FUN_140d71850(local_20), lVar2 != 0)) {
    FUN_140d186f0(4,0,100,s_D__a_1_s_target_release_build_bo_1413f0230,0xd0);
    FUN_140d52a50(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=140ded2e0 name=FUN_140ded2e0 */

undefined8 FUN_140ded2e0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_140d741d0(param_1,local_38,0x20000010);
  if ((((((iVar1 != 0) && (iVar1 = FUN_140d74690(local_38,DAT_1410b8420), iVar1 != 0)) &&
        (iVar1 = FUN_140ded740(local_38,*(undefined8 *)(param_2 + 8)), iVar1 != 0)) &&
       ((iVar1 = FUN_140ded740(local_38,*(undefined8 *)(param_2 + 0x10)), iVar1 != 0 &&
        (iVar1 = FUN_140ded740(local_38,*(undefined8 *)(param_2 + 0x18)), iVar1 != 0)))) &&
      ((iVar1 = FUN_140ded740(local_38,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0 &&
       ((iVar1 = FUN_140ded740(local_38,*(undefined8 *)(param_2 + 0x28)), iVar1 != 0 &&
        (iVar1 = FUN_140ded740(local_38,*(undefined8 *)(param_2 + 0x30)), iVar1 != 0)))))) &&
     ((iVar1 = FUN_140ded740(local_38,*(undefined8 *)(param_2 + 0x38)), iVar1 != 0 &&
      ((iVar1 = FUN_140ded740(local_38,*(undefined8 *)(param_2 + 0x40)), iVar1 != 0 &&
       (iVar1 = FUN_140d73c90(param_1), iVar1 != 0)))))) {
    return 1;
  }
  FUN_140d186f0(4,0,0x79,s_D__a_1_s_target_release_build_bo_1413f02a0,0xe4);
  return 0;
}


/* address=140ded430 name=FUN_140ded430 */

undefined8 FUN_140ded430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  FUN_140d73a50(local_38);
  iVar1 = FUN_140d73a80(local_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_140ded2e0(local_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_140d73bb0(local_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_140d186f0(4,0,0x79,s_D__a_1_s_target_release_build_bo_1413f0310,0xf1);
  FUN_140d73b40(local_38);
  return 0;
}


/* address=140ded4d0 name=FUN_140ded4d0 */

longlong FUN_140ded4d0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d717c0(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_140decd70(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140d52a50(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_140d71830(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140ded570 name=FUN_140ded570 */

undefined8 FUN_140ded570(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_140d73a80(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_140decf00(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_140e3a1f0(local_38,param_2);
    return uVar2;
  }
  FUN_140d73b40(local_38);
  return 0xffffffff;
}


/* address=140ded5d0 name=FUN_140ded5d0 */

longlong FUN_140ded5d0(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (param_3 < 0) {
    lVar1 = 0;
  }
  else {
    FUN_140d717c0(local_20,*param_2,(longlong)param_3);
    lVar1 = FUN_140ded040(local_20);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      if (param_1 != (longlong *)0x0) {
        FUN_140d52a50(*param_1);
        *param_1 = lVar1;
      }
      uVar2 = FUN_140d71830(local_20);
      *param_2 = uVar2;
    }
  }
  return lVar1;
}


/* address=140ded670 name=FUN_140ded670 */

undefined8 FUN_140ded670(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_38 [56];
  
  iVar1 = FUN_140d73a80(local_38,0);
  if ((iVar1 != 0) && (iVar1 = FUN_140ded2e0(local_38,param_1), iVar1 != 0)) {
    uVar2 = FUN_140e3a1f0(local_38,param_2);
    return uVar2;
  }
  FUN_140d73b40(local_38);
  return 0xffffffff;
}


/* address=140ded6d0 name=FUN_140ded6d0 */

undefined8 FUN_140ded6d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    FID_conflict__assert((wchar_t *)s___1413efdb0,(wchar_t *)s_D_1413efce0,0x49);
  }
  lVar1 = FUN_140d275e0();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140e40ac0(param_1,*param_2);
  }
  return uVar2;
}


/* address=140ded740 name=FUN_140ded740 */

undefined8 FUN_140ded740(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_140d186f0(4,0,0x90,s_D__a_1_s_target_release_build_bo_1413efdd0,0x54);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e40ba0(param_1,param_2);
  }
  return uVar1;
}


/* address=140ded790 name=FUN_140ded790 */

void FUN_140ded790(undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

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
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_498;
  local_448 = (char *)0x0;
  local_440 = 0;
  local_420 = 0;
  local_450 = 0;
  local_478 = param_1;
  local_470 = param_3;
  local_468 = param_4;
  iVar1 = FUN_140e3d460(&local_420,&local_458,&local_448,s_ANY_PRIVATE_KEY_1413f0380);
  if (iVar1 == 0) goto LAB_140dedb0c;
  local_440 = local_420;
  iVar1 = strcmp(local_448,s_PRIVATE_KEY_1413f0390);
  if (iVar1 == 0) {
    local_430 = FUN_140dede90(0,&local_440,local_458);
    if (local_430 != 0) {
      local_450 = FUN_140dedf00(local_430);
      if (param_2 != (longlong *)0x0) {
        if (*param_2 != 0) {
          FUN_140d709a0(*param_2);
        }
        *param_2 = local_450;
      }
      FUN_140dede60(local_430);
    }
LAB_140dedac9:
    if (local_450 == 0) {
      local_478 = CONCAT44(local_478._4_4_,0x90);
      FUN_140d186f0(9,0,0xc,s_D__a_1_s_target_release_build_bo_1413f0460);
    }
  }
  else {
    iVar1 = strcmp(local_448,s_ENCRYPTED_PRIVATE_KEY_1413f03a0);
    if (iVar1 != 0) {
      iVar1 = strcmp(local_448,s_RSA_PRIVATE_KEY_1413f0428);
      if (iVar1 == 0) {
        local_450 = FUN_140dda430(6,param_2,&local_440,local_458);
      }
      else {
        iVar1 = strcmp(local_448,s_EC_PRIVATE_KEY_1413f0438);
        if (iVar1 == 0) {
          local_450 = FUN_140dda430(0x198,param_2,&local_440,local_458);
        }
        else {
          iVar1 = strcmp(local_448,s_DSA_PRIVATE_KEY_1413f0448);
          if (iVar1 == 0) {
            local_450 = FUN_140dda430(0x74,param_2,&local_440,local_458);
          }
        }
      }
      goto LAB_140dedac9;
    }
    local_438 = FUN_140e4fc20(0,&local_440,local_458);
    if (local_438 == 0) goto LAB_140dedac9;
    local_454 = 0;
    local_res18 = param_3;
    if (param_3 == (code *)0x0) {
      local_res18 = FUN_140e3de40;
    }
    local_454 = (*local_res18)(local_418,0x400,0,param_4);
    if (0 < local_454) {
      local_428 = FUN_140dee2c0(local_438,local_418,local_454);
      FUN_140e4fbf0(local_438);
      FUN_140d76450(local_418,(longlong)local_454);
      if (local_428 != 0) {
        local_450 = FUN_140dedf00(local_428);
        if (param_2 != (longlong *)0x0) {
          if (*param_2 != 0) {
            FUN_140d709a0(*param_2);
          }
          *param_2 = local_450;
        }
        FUN_140dede60(local_428);
      }
      goto LAB_140dedac9;
    }
    local_478 = CONCAT44(local_478._4_4_,0x72);
    FUN_140d186f0(9,0,0x68,s_D__a_1_s_target_release_build_bo_1413f03c0);
    FUN_140e4fbf0(local_438);
  }
  FUN_140d762b0(local_448);
  FUN_140d762b0(local_420);
LAB_140dedb0c:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_498);
  return;
}


/* address=140dedb30 name=FUN_140dedb30 */

undefined8
FUN_140dedb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140e33ed0(param_1,0);
  if (lVar1 == 0) {
    FUN_140d186f0(9,0,7,s_D__a_1_s_target_release_build_bo_1413f04d0,0xa3);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140ded790(lVar1,param_2,param_3,param_4);
    FUN_140d14730(lVar1);
  }
  return uVar2;
}


/* address=140dedbc0 name=FUN_140dedbc0 */

void FUN_140dedbc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_140df1690(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* address=140dedd00 name=FUN_140dedd00 */

void FUN_140dedd00(void)

{
  FUN_140d19610();
  return;
}


/* address=140dedd20 name=FUN_140dedd20 */

void FUN_140dedd20(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140dedd40 name=FUN_140dedd40 */

void FUN_140dedd40(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140dedd70 name=FUN_140dedd70 */

void FUN_140dedd70(undefined8 param_1)

{
  FUN_140d19740(param_1);
  return;
}


/* address=140dedd90 name=FUN_140dedd90 */

void FUN_140dedd90(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140dedcd0,param_2);
  return;
}


/* address=140deddc0 name=FUN_140deddc0 */

void FUN_140deddc0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d199f0(param_1,param_2);
  return;
}


/* address=140deddf0 name=FUN_140deddf0 */

void FUN_140deddf0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140dede20 name=FUN_140dede20 */

void FUN_140dede20(undefined8 param_1)

{
  FUN_140d19f60(param_1);
  return;
}


/* address=140dede60 name=FUN_140dede60 */

void FUN_140dede60(undefined8 param_1)

{
  FUN_140e29190(param_1,&DAT_1410b84b8);
  return;
}


/* address=140dede90 name=FUN_140dede90 */

void FUN_140dede90(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140e29830(param_1,param_2,param_3,&DAT_1410b84b8);
  return;
}


/* address=140deded0 name=FUN_140deded0 */

void FUN_140deded0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e2bb10(param_1,param_2,&DAT_1410b84b8);
  return;
}


/* address=140dedf00 name=FUN_140dedf00 */

longlong FUN_140dedf00(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_30;
  longlong local_28;
  undefined local_20 [32];
  
  local_30 = 0;
  iVar1 = FUN_140deded0(param_1,&local_30);
  if (-1 < iVar1) {
    FUN_140d717c0(local_20,local_30,(longlong)iVar1);
    local_28 = FUN_140dda190(local_20);
    if ((local_28 != 0) && (lVar2 = FUN_140d71850(local_20), lVar2 == 0)) {
      FUN_140d762b0(local_30);
      return local_28;
    }
    FUN_140d186f0(0x13,0,0x68,s_D__a_1_s_target_release_build_bo_1413f05f0,0x71);
    FUN_140d709a0(local_28);
    FUN_140d762b0(local_30);
  }
  return 0;
}


/* address=140dedfd0 name=FUN_140dedfd0 */

longlong FUN_140dedfd0(undefined8 param_1)

{
  int iVar1;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined local_38 [56];
  
  local_58 = 0;
  iVar1 = FUN_140d73a80(local_38,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_140dda310(local_38,param_1), iVar1 == 0)) ||
      (iVar1 = FUN_140d73bb0(local_38,&local_58,&local_50), iVar1 == 0)) ||
     (0x7fffffff < CONCAT44(uStack_4c,local_50))) {
    FUN_140d73b40(local_38);
    FUN_140d186f0(0x13,0,0x69,s_D__a_1_s_target_release_build_bo_1413f0660,0x84);
  }
  else {
    local_40 = local_58;
    local_48 = FUN_140dede90(0,&local_40,local_50);
    if ((local_48 != 0) && (local_40 == local_58 + CONCAT44(uStack_4c,local_50))) {
      FUN_140d762b0(local_58);
      return local_48;
    }
    FUN_140dede60(local_48);
    FUN_140d186f0(0x13,0,0x68,s_D__a_1_s_target_release_build_bo_1413f06d0,0x8c);
  }
  FUN_140d762b0(local_58);
  return 0;
}


/* address=140dee100 name=FUN_140dee100 */

longlong FUN_140dee100(undefined4 param_1,undefined8 param_2,char *param_3,int param_4,
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
  local_58 = FUN_140dedf00(param_8);
  if (local_58 == 0) {
    return 0;
  }
  local_68 = 0;
  local_60 = 0;
  iVar1 = FUN_140d73a80(local_38,0x80);
  if (iVar1 != 0) {
    sVar2 = local_50;
    iVar1 = FUN_140e4fe60(local_38,param_1,param_2,param_3,local_50,param_5,param_6,param_7,local_58
                         );
    uVar3 = (undefined4)(sVar2 >> 0x20);
    if ((iVar1 != 0) && (iVar1 = FUN_140d73bb0(local_38,&local_60,&local_48), iVar1 != 0)) {
      local_40 = local_60;
      local_68 = FUN_140e4fc20(0,&local_40,local_48);
      if ((local_68 == 0) || (local_40 != local_60 + CONCAT44(uStack_44,local_48))) {
        FUN_140d186f0(0x13,0,0x44,s_D__a_1_s_target_release_build_bo_1413f0740,CONCAT44(uVar3,0xdb))
        ;
        FUN_140e4fbf0(local_68);
        local_68 = 0;
      }
      goto LAB_140dee298;
    }
  }
  FUN_140d73b40(local_38);
LAB_140dee298:
  FUN_140d762b0(local_60);
  FUN_140d709a0(local_58);
  return local_68;
}


/* address=140dee2c0 name=FUN_140dee2c0 */

undefined8 FUN_140dee2c0(undefined8 param_1,char *param_2,int param_3)

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
  iVar1 = FUN_140e4fc60(param_1,&local_38);
  if (-1 < iVar1) {
    FUN_140d717c0(local_20,local_38,(longlong)iVar1);
    local_40 = FUN_140e501f0(local_20,param_2,local_30);
    if ((local_40 != 0) && (lVar2 = FUN_140d71850(local_20), lVar2 == 0)) {
      local_28 = FUN_140dedfd0(local_40);
    }
  }
  FUN_140d762b0(local_38);
  FUN_140d709a0(local_40);
  return local_28;
}


/* address=140dee3c0 name=FUN_140dee3c0 */

int FUN_140dee3c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

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
  local_a0 = FUN_140dedd20(param_2);
  iVar1 = FUN_140e51310(param_3,local_80,&local_d0);
  if (iVar1 == 0) {
    FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f0f90,0x255);
    return 0;
  }
  *param_1 = 0;
  FUN_140defc00(&local_100,0,0x20);
  uVar2 = wcstoul(local_80,local_c8,0x20000010);
  if (((uVar2 == 0) || (lVar3 = FUN_140d71850(local_80), lVar3 != 0)) ||
     (iVar1 = FUN_140d72240(local_c8,&local_a8), iVar1 == 0)) {
    FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f1000,0x261);
  }
  else if (local_a8 < 3) {
    FUN_140d186f0(0x13,0,0x65,s_D__a_1_s_target_release_build_bo_1413f1070,0x266);
  }
  else {
    uVar2 = wcstoul((wchar_t *)local_c8,local_70,0x20000010);
    if (uVar2 == 0) {
      FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f10e0,0x26b);
    }
    else {
      lVar3 = FUN_140d71850(local_c8);
      if (lVar3 == 0) {
        FUN_140d186f0(0x13,0,0x70,s_D__a_1_s_target_release_build_bo_1413f1150,0x270);
      }
      else {
        uVar2 = wcstoul((wchar_t *)local_c8,local_b8,0x20000010);
        if (uVar2 == 0) {
          FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f11c0,0x275);
        }
        else {
          uVar2 = wcstoul((wchar_t *)local_70,local_30,6);
          if ((uVar2 == 0) ||
             (uVar2 = wcstoul((wchar_t *)local_70,local_20,-0x60000000), uVar2 == 0)) {
            FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f1230,0x27e);
          }
          else {
            iVar1 = FUN_140d719e0(local_30,&DAT_1410b8490,9);
            if (iVar1 == 0) {
              FUN_140d186f0(0x13,0,0x72,s_D__a_1_s_target_release_build_bo_1413f12a0,0x285);
            }
            else {
              uVar2 = wcstoul((wchar_t *)local_20,local_90,4);
              if (uVar2 == 0) {
                FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f1310,0x28a);
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
                  FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f1380,0x297);
                }
                else {
                  local_108 = FUN_140dec7c0(local_60);
                  if (local_108 != 0) {
                    uVar2 = wcstoul((wchar_t *)local_60,local_50,4);
                    if ((uVar2 == 0) ||
                       (uVar2 = wcstoul((wchar_t *)local_b8,local_40,4), uVar2 == 0)) {
                      FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f13f0,0x2a2);
                    }
                    else {
                      local_110 = 1;
                      lVar3 = FUN_140d71850(local_b8);
                      if ((lVar3 == 0) ||
                         ((iVar1 = FUN_140d72240(local_b8,&local_110), iVar1 != 0 &&
                          (iVar1 = FUN_140defb30(local_110), iVar1 != 0)))) {
                        iVar1 = FUN_140df0800(&local_118,local_f0,local_e8,local_40,
                                              (undefined4)local_110,local_108,local_90,local_50);
                        if (iVar1 != 0) {
                          if ((local_118 == 0) && (local_e8 == 0)) {
                            if (local_f0 == (char *)0x0) {
                              local_d8 = &DAT_1414109e0;
                            }
                            else {
                              local_d8 = (char *)0x0;
                            }
                            local_f0 = local_d8;
                            iVar1 = FUN_140df0800(&local_118,local_d8,0,local_40,
                                                  (undefined4)local_110,local_108,local_90,local_50)
                            ;
                            if (iVar1 == 0) goto LAB_140dee989;
                          }
                          if (local_118 == 0) {
                            FUN_140d186f0(0x13,0,0x6c,s_D__a_1_s_target_release_build_bo_1413f14d0,
                                          0x2c2);
                          }
                          else {
                            iVar1 = FUN_140defc40(local_90,&local_100,&LAB_140df04c0);
                            if (iVar1 != 0) {
                              local_114 = 1;
                            }
                          }
                        }
                      }
                      else {
                        FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f1460,0x2ab)
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
LAB_140dee989:
  FUN_140d762b0(local_d0);
  if (local_114 == 0) {
    FUN_140d709a0(*param_1);
    *param_1 = 0;
    while (uVar4 = FUN_140dedd20(param_2), local_a0 < uVar4) {
      local_98 = FUN_140dede20(param_2);
      FUN_140dd0910(local_98);
    }
  }
  return local_114;
}


/* address=140deea20 name=FUN_140deea20 */

longlong * FUN_140deea20(longlong **param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_140d76180(0x10);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_140d76180(param_3);
    *plVar1 = lVar2;
    if (*plVar1 == 0) {
      FUN_140d762b0(plVar1);
      plVar1 = (longlong *)0x0;
    }
    else {
      FUN_140defbb0(*plVar1,*param_2,param_3);
      plVar1[1] = param_3;
      *param_2 = *param_2 + param_3;
      if (param_1 != (longlong **)0x0) {
        FUN_140defaf0(*param_1);
        *param_1 = plVar1;
      }
    }
  }
  return plVar1;
}


/* address=140deeaf0 name=FUN_140deeaf0 */

undefined8 FUN_140deeaf0(undefined8 param_1,undefined8 param_2)

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
  puVar1 = (ulonglong *)FUN_140e1f100();
  if (puVar1 == (ulonglong *)0x0) {
    local_18 = 0;
  }
  else {
    lVar2 = FUN_140e1f2b0(puVar1,0x2000);
    if (lVar2 != 0) {
      while( true ) {
        if (*puVar1 - local_28 < 0x80000000) {
          local_20 = (undefined4)(*puVar1 - local_28);
          local_34 = local_20;
        }
        else {
          local_34 = 0x7fffffff;
        }
        local_38 = FUN_140d14810(param_1,puVar1[1] + local_28,local_34);
        if (local_38 < 0) {
          if (local_28 == 0) goto LAB_140deec42;
          local_38 = 0;
        }
        if (local_38 == 0) break;
        local_28 = local_28 + (longlong)local_38;
        if ((*puVar1 <= local_28) &&
           ((DAT_1410b84b0 < *puVar1 || (lVar2 = FUN_140e1f2b0(puVar1,*puVar1 << 1), lVar2 == 0))))
        goto LAB_140deec42;
      }
      local_10[0] = puVar1[1];
      local_18 = FUN_140deea20(param_2,local_10,local_28);
    }
LAB_140deec42:
    FUN_140e1f150(puVar1);
  }
  return local_18;
}


/* address=140deedc0 name=_Reset<> */

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
  FUN_140d14ae0(param_1,*param_2,param_2[1]);
  return;
}


/* address=140deee60 name=FUN_140deee60 */

undefined8
FUN_140deee60(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
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
    local_40 = FUN_140dedd00();
    if (local_40 == 0) {
      return 0;
    }
    bVar1 = true;
  }
  FUN_140d717c0(local_20,*param_1,param_1[1]);
  iVar2 = FUN_140dee3c0(param_3,local_40,local_20,param_2);
  if (iVar2 == 0) {
    if (bVar1) {
      FUN_140dedd70(local_40);
    }
    uVar4 = 0;
  }
  else {
    *param_4 = 0;
    uVar3 = FUN_140dedd20(local_40);
    if ((*param_3 != 0) && (local_38 = uVar3, uVar3 != 0)) {
      while (local_38 = local_38 - 1, local_38 < uVar3) {
        uVar4 = FUN_140dedd40(local_40,local_38);
        iVar2 = FUN_140df6140(uVar4,*param_3);
        if (iVar2 != 0) {
          *param_4 = uVar4;
          FUN_140deddc0(local_40,local_38);
          break;
        }
        FUN_140d18390();
      }
    }
    if (param_5 == (longlong *)0x0) {
      FUN_140dedd90(local_40,FUN_140dd0910);
    }
    else {
      *param_5 = local_40;
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140defaf0 name=FUN_140defaf0 */

void FUN_140defaf0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_140d762b0(*param_1);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140defb30 name=FUN_140defb30 */

undefined4 FUN_140defb30(ulonglong param_1)

{
  undefined4 local_18;
  
  if ((param_1 == 0) || (DAT_1410b84e8 < param_1)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=140defb70 name=FUN_140defb70 */

undefined8 FUN_140defb70(undefined8 param_1,undefined4 param_2,longlong param_3)

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


/* address=140defbb0 name=FUN_140defbb0 */

undefined8 FUN_140defbb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140defc00 name=FUN_140defc00 */

undefined8 FUN_140defc00(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140defc40 name=FUN_140defc40 */

undefined4 FUN_140defc40(undefined8 param_1,undefined8 param_2,code *param_3)

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
  iVar1 = FUN_140e51310(param_1,local_38,&local_40);
  if (iVar1 == 0) {
    FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f07b0,0xfb);
    local_48 = 0;
  }
  else {
    uVar2 = wcstoul(local_38,local_28,0x20000010);
    if ((uVar2 == 0) || (lVar3 = FUN_140d71850(local_38), lVar3 != 0)) {
      FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f0820,0x102);
    }
    else {
      do {
        lVar3 = FUN_140d71850(local_28);
        if (lVar3 == 0) {
          local_48 = 1;
          break;
        }
        uVar2 = wcstoul((wchar_t *)local_28,local_18,0x20000010);
        if (uVar2 == 0) {
          FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f0890,0x109);
          break;
        }
        iVar1 = (*param_3)(local_18,param_2);
      } while (iVar1 != 0);
    }
    FUN_140d762b0(local_40);
  }
  return local_48;
}


/* address=140defd80 name=FUN_140defd80 */

undefined8 FUN_140defd80(wchar_t *param_1,longlong *param_2,undefined8 *param_3)

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
      lVar3 = FUN_140d71850(param_1);
      if (lVar3 == 0) {
        return 1;
      }
      uVar1 = wcstoul(param_1,local_70,0x20000010);
      if ((((uVar1 == 0) || (uVar1 = wcstoul((wchar_t *)local_70,local_50,6), uVar1 == 0)) ||
          (uVar1 = wcstoul((wchar_t *)local_70,local_60,0x20000011), uVar1 == 0)) ||
         (lVar3 = FUN_140d71850(local_70), lVar3 != 0)) {
        FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f0900,0x141);
        goto LAB_140deff94;
      }
      iVar2 = FUN_140d719e0(local_50,&DAT_1410b8460,9);
    } while (iVar2 == 0);
    if (((*param_2 != 0) || (uVar1 = wcstoul((wchar_t *)local_60,local_80,0x1e), uVar1 == 0)) ||
       ((lVar3 = FUN_140d71850(local_60), lVar3 != 0 ||
        (lVar3 = FUN_140d71850(local_80), lVar3 == 0)))) break;
    uVar4 = FUN_140d71850(local_80);
    iVar2 = FUN_140d73a80(local_40,uVar4);
    if (iVar2 == 0) goto LAB_140deff94;
    while (lVar3 = FUN_140d71850(local_80), lVar3 != 0) {
      iVar2 = FUN_140e35170(local_80,local_88);
      if ((iVar2 == 0) || (iVar2 = FUN_140e35270(local_40,local_88[0]), iVar2 == 0)) {
        FUN_140d186f0(0x13,0,0x83,s_D__a_1_s_target_release_build_bo_1413f09e0,0x157);
        FUN_140d73b40(local_40);
        goto LAB_140deff94;
      }
    }
    iVar2 = FUN_140d73bb0(local_40,param_2,param_3);
    if (iVar2 == 0) {
      FUN_140d73b40(local_40);
LAB_140deff94:
      FUN_140d762b0(*param_2);
      *param_2 = 0;
      *param_3 = 0;
      return 0;
    }
  }
  FUN_140d186f0(0x13,0,100,s_D__a_1_s_target_release_build_bo_1413f0970,0x14b);
  goto LAB_140deff94;
}


/* address=140df0800 name=FUN_140df0800 */

void FUN_140df0800(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_118;
  local_c8 = 0;
  local_c0 = (undefined4 *)FUN_140d1c8f0(param_6);
  local_b8 = FUN_140d71850(param_4);
  uVar3 = FUN_140d71830(param_4);
  local_d8 = param_6;
  local_e0 = local_98;
  local_e8 = local_c0;
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,param_5);
  local_f8 = CONCAT71(local_f8._1_7_,3);
  iVar1 = FUN_140e505e0(param_2,param_3,uVar3,local_b8);
  if (iVar1 != 0) {
    local_b0 = FUN_140d71850(param_7);
    local_a8 = FUN_140d71830(param_7);
    uVar3 = FUN_140d1c8f0(param_6);
    local_e8 = &local_c4;
    local_f0 = local_58;
    local_f8 = local_b0;
    lVar4 = FUN_140d1cb20(param_6,local_98,uVar3,local_a8);
    if (lVar4 != 0) {
      uVar2 = FUN_140d719e0(param_8,local_58,local_c4);
      *param_1 = uVar2;
      local_c8 = 1;
    }
  }
  FUN_140d76450(local_98,0x40);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=140df09a0 name=FUN_140df09a0 */

undefined4
FUN_140df09a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
    iVar1 = FUN_140d741d0(param_1,local_40,0x20000011);
    if (iVar1 == 0) {
      local_118 = 0;
    }
    else if (param_3 == 0) {
LAB_140df0b1e:
      if ((param_5 == 0) ||
         ((((iVar1 = FUN_140d741d0(local_40,local_100,0x20000010), iVar1 != 0 &&
            (iVar1 = FUN_140d741d0(local_100,local_d0,6), iVar1 != 0)) &&
           (iVar1 = FUN_140d74290(local_d0,&DAT_1410b8470,9), iVar1 != 0)) &&
          (((iVar1 = FUN_140d741d0(local_100,local_a0,0x20000011), iVar1 != 0 &&
            (iVar1 = FUN_140d741d0(local_a0,local_70,4), iVar1 != 0)) &&
           (iVar1 = FUN_140d74290(local_70,param_4,param_5), iVar1 != 0)))))) {
        iVar1 = FUN_140d74b20(local_40);
        if ((iVar1 == 0) || (iVar1 = FUN_140d73c90(param_1), iVar1 == 0)) {
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
      iVar1 = FUN_140d741d0(local_40,local_100,0x20000010);
      if ((((iVar1 == 0) || (iVar1 = FUN_140d741d0(local_100,local_d0,6), iVar1 == 0)) ||
          (iVar1 = FUN_140d74290(local_d0,&DAT_1410b8460,9), iVar1 == 0)) ||
         ((iVar1 = FUN_140d741d0(local_100,local_a0,0x20000011), iVar1 == 0 ||
          (iVar1 = FUN_140d741d0(local_a0,local_70,0x1e), iVar1 == 0)))) {
        local_118 = 0;
      }
      else {
        FUN_140d717c0(local_110,param_2,param_3);
        do {
          lVar2 = FUN_140d71850(local_110);
          if (lVar2 == 0) goto LAB_140df0b1e;
          iVar1 = FUN_140e34f90(local_110,&local_114);
        } while ((iVar1 != 0) && (iVar1 = FUN_140e35490(local_70,local_114), iVar1 != 0));
        FUN_140d186f0(0x13,0,0x83,s_D__a_1_s_target_release_build_bo_1413f15b0,0x3ce);
        local_118 = 0;
      }
    }
  }
  return local_118;
}


/* address=140df0c30 name=FUN_140df0c30 */

undefined8
FUN_140df0c30(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
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
  iVar1 = FUN_140d741d0(param_1,local_158,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_140d741d0(local_158,local_f8,6), iVar1 == 0)) ||
      (iVar1 = FUN_140d74290(local_f8,&DAT_1410b8450,0xb), iVar1 == 0)) ||
     ((((iVar1 = FUN_140d741d0(local_158,local_c8,0xa0000000), iVar1 == 0 ||
        (iVar1 = FUN_140d741d0(local_c8,local_128,0x20000010), iVar1 == 0)) ||
       ((iVar1 = FUN_140d741d0(local_128,local_98,6), iVar1 == 0 ||
        ((iVar1 = FUN_140d74290(local_98,&DAT_1410b8480,10), iVar1 == 0 ||
         (iVar1 = FUN_140d741d0(local_128,local_68,0xa0000000), iVar1 == 0)))))) ||
      (iVar1 = FUN_140d741d0(local_68,local_38,4), iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    local_174 = FUN_140dd0b50(param_2,0);
    local_178 = 0;
    local_res18 = (char *)FUN_140e3a5e0(param_2,&local_178);
    local_170 = (size_t)local_178;
    local_168 = local_res18;
    if (param_3 != (char *)0x0) {
      if (local_170 != 0) {
        FUN_140d186f0(0x13,0,0x85,s_D__a_1_s_target_release_build_bo_1413f1620,CONCAT44(uVar3,0x3fc)
                     );
        return 0;
      }
      local_170 = strlen(param_3);
      local_res18 = param_3;
    }
    if ((((local_174 < 0) ||
         (iVar1 = FUN_140d74340(local_38,local_160,(longlong)local_174), iVar1 == 0)) ||
        (iVar1 = FUN_140dd0b50(param_2,local_160), iVar1 < 0)) ||
       ((iVar1 = FUN_140df09a0(local_158,local_res18,local_170,param_4,param_5), iVar1 == 0 ||
        (iVar1 = FUN_140d73c90(param_1), iVar1 == 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=140df0ea0 name=FUN_140df0ea0 */

undefined8
FUN_140df0ea0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_48;
  undefined local_40 [64];
  
  iVar1 = FUN_140d741d0(param_1,local_40,0x20000010);
  if ((iVar1 == 0) ||
     ((param_2 != 0 && (iVar1 = FUN_140df0c30(local_40,param_2,param_4,param_5,param_6), iVar1 == 0)
      ))) {
    uVar3 = 0;
  }
  else {
    for (local_48 = 0; uVar2 = FUN_140dedd20(param_3), local_48 < uVar2; local_48 = local_48 + 1) {
      uVar3 = FUN_140dedd40(param_3,local_48);
      iVar1 = FUN_140df0c30(local_40,uVar3,0,0,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = FUN_140d73c90(param_1);
  }
  return uVar3;
}


/* address=140df0fa0 name=FUN_140df0fa0 */

void FUN_140df0fa0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_268;
  iVar1 = FUN_140d459b0(local_18,8);
  if (iVar1 != 0) {
    local_224 = 0;
    FUN_140d479f0(local_b8);
    iVar1 = FUN_140d741d0(param_1,local_1d8,0x20000010);
    if (((((iVar1 != 0) && (iVar1 = FUN_140d741d0(local_1d8,local_148,6), iVar1 != 0)) &&
         (iVar1 = FUN_140d74290(local_148,&DAT_1410b84a0,9), iVar1 != 0)) &&
        (((iVar1 = FUN_140d741d0(local_1d8,local_118,0xa0000000), iVar1 != 0 &&
          (iVar1 = FUN_140d741d0(local_118,local_1a8,0x20000010), iVar1 != 0)) &&
         ((iVar1 = FUN_140d74690(local_1a8,0), iVar1 != 0 &&
          ((iVar1 = FUN_140d741d0(local_1a8,local_208,0x20000010), iVar1 != 0 &&
           (iVar1 = FUN_140d741d0(local_208,local_e8,6), iVar1 != 0)))))))) &&
       (iVar1 = FUN_140d74290(local_e8,&DAT_1410b8490,9), iVar1 != 0)) {
      local_230 = 8;
      local_238 = local_18;
      local_248 = param_3;
      local_240 = param_4;
      iVar1 = FUN_140e50c30(local_208,local_b8,param_2,param_5);
      if ((iVar1 != 0) && (iVar1 = FUN_140d741d0(local_208,local_178,0x80000000), iVar1 != 0)) {
        uVar2 = FUN_140d48e90(local_b8);
        local_218 = param_7 + uVar2;
        if (local_218 < param_7) {
          local_248 = CONCAT44(local_248._4_4_,0x44a);
          FUN_140d186f0(0x13,0,0x76,s_D__a_1_s_target_release_build_bo_1413f1690);
        }
        else {
          iVar1 = FUN_140d743a0(local_178,&local_210,local_218);
          if (iVar1 != 0) {
            local_248 = CONCAT44(local_248._4_4_,(undefined4)param_7);
            iVar1 = FUN_140d48d50(local_b8,local_210,&local_228,param_6);
            if ((((iVar1 != 0) &&
                 (iVar1 = FUN_140d48dd0(local_b8,local_210 + local_228,local_220), iVar1 != 0)) &&
                (iVar1 = FUN_140d74400(local_178,(longlong)(local_228 + local_220[0])), iVar1 != 0))
               && (iVar1 = FUN_140d73c90(param_1), iVar1 != 0)) {
              local_224 = 1;
            }
          }
        }
      }
    }
    FUN_140d47a60(local_b8);
  }
  FUN_140e28050(local_10 ^ (ulonglong)auStack_268);
  return;
}


/* address=140df1390 name=FUN_140df1390 */

void FUN_140df1390(undefined8 param_1,undefined8 param_2)

{
  FUN_140e3d640(&LAB_140df2000,s_ENCRYPTED_PRIVATE_KEY_1413f19c8,param_1,param_2,0,0,0,0,0);
  return;
}


/* address=140df1530 name=FUN_140df1530 */

void FUN_140df1530(undefined8 param_1,undefined8 param_2)

{
  FUN_140e3d640(&LAB_140df20e0,s_PRIVATE_KEY_1413f1a18,param_1,param_2,0,0,0,0,0);
  return;
}


/* address=140df1690 name=FUN_140df1690 */

void FUN_140df1690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_140df1c40(param_1,param_2,0,0xffffffff,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* address=140df1810 name=FUN_140df1810 */

void FUN_140df1810(undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

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
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_468;
  local_428 = 0;
  local_430 = 0;
  local_430 = FUN_140dfca00(param_1,0);
  if (local_430 != 0) {
    local_438 = 0;
    local_res18 = param_3;
    if (param_3 == (code *)0x0) {
      local_res18 = FUN_140e3de40;
    }
    local_438 = (*local_res18)(local_418,0x400,0,param_4);
    if (local_438 < 1) {
      local_448 = 0xa9;
      FUN_140d186f0(9,0,0x68,s_D__a_1_s_target_release_build_bo_1413f1850);
      FUN_140e4fbf0(local_430);
    }
    else {
      local_428 = FUN_140dee2c0(local_430,local_418,local_438);
      FUN_140e4fbf0(local_430);
      FUN_140d76450(local_418,(longlong)local_438);
      if (local_428 != 0) {
        local_420 = FUN_140dedf00(local_428);
        FUN_140dede60(local_428);
        if ((local_420 != 0) && (param_2 != (longlong *)0x0)) {
          if (*param_2 != 0) {
            FUN_140d709a0(*param_2);
          }
          *param_2 = local_420;
        }
      }
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_468);
  return;
}


/* address=140df1c40 name=FUN_140df1c40 */

void FUN_140df1c40(undefined8 param_1,undefined8 param_2,int param_3,int param_4,longlong param_5,
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
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_478;
  local_430 = FUN_140dedfd0(param_2);
  if (local_430 == 0) {
    local_458 = CONCAT44(local_458._4_4_,0x6e);
    FUN_140d186f0(9,0,0x6a,s_D__a_1_s_target_release_build_bo_1413f1770);
  }
  else if ((param_5 == 0) && (param_4 == -1)) {
    if (param_3 == 0) {
      local_438 = FUN_140df1530(param_1,local_430);
    }
    else {
      local_438 = FUN_140dfd080(param_1,local_430);
    }
    FUN_140dede60(local_430);
  }
  else {
    if (param_6 == (undefined *)0x0) {
      if (param_8 == (code *)0x0) {
        param_8 = FUN_140e3de40;
      }
      param_7 = (*param_8)(local_418,0x400,1,param_9);
      if (param_7 < 1) {
        local_458 = CONCAT44(local_458._4_4_,0x79);
        FUN_140d186f0(9,0,0x6f,s_D__a_1_s_target_release_build_bo_1413f17e0);
        FUN_140dede60(local_430);
        goto LAB_140df1e77;
      }
      param_6 = local_418;
    }
    local_440 = local_430;
    local_448 = 0;
    local_450 = 0;
    local_458 = 0;
    local_428 = FUN_140dee100(param_4,param_5,param_6,param_7);
    if (param_6 == local_418) {
      FUN_140d76450(local_418,(longlong)param_7);
    }
    FUN_140dede60(local_430);
    if (param_3 == 0) {
      local_438 = FUN_140df1390(param_1,local_428);
    }
    else {
      local_438 = FUN_140dfd010(param_1,local_428);
    }
    FUN_140e4fbf0(local_428);
  }
LAB_140df1e77:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_478);
  return;
}


/* address=140df1ea0 name=FUN_140df1ea0 */

undefined4
FUN_140df1ea0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffb8;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar2 = FUN_140e33ed0(param_1,0);
  if (lVar2 == 0) {
    FUN_140d186f0(9,0,7,s_D__a_1_s_target_release_build_bo_1413f18c0,CONCAT44(uVar1,0xde));
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140df1c40(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    FUN_140d14730(lVar2);
  }
  return uVar1;
}


/* address=140df2140 name=FUN_140df2140 */

longlong FUN_140df2140(undefined *param_1,byte *param_2,ulonglong param_3)

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
      uVar2 = FUN_140df3030(local_28 >> 0x12);
      *local_res8 = uVar2;
      uVar2 = FUN_140df3030(local_28 >> 0xc & 0xff);
      local_res8[1] = uVar2;
      if (local_20 == 1) {
        uVar2 = 0x3d;
      }
      else {
        uVar2 = FUN_140df3030(local_28 >> 6 & 0xff);
      }
      local_res8[2] = uVar2;
      local_res8[3] = 0x3d;
      local_20 = 0;
    }
    else {
      uVar3 = (uint)*local_res10 << 0x10 | (uint)local_res10[1] << 8;
      bVar1 = local_res10[2];
      uVar2 = FUN_140df3030(((uint)*local_res10 << 0x10) >> 0x12);
      *local_res8 = uVar2;
      uVar2 = FUN_140df3030((uVar3 & 0xff000) >> 0xc);
      local_res8[1] = uVar2;
      uVar2 = FUN_140df3030((uVar3 | bVar1) >> 6 & 0xff);
      local_res8[2] = uVar2;
      uVar2 = FUN_140df3030(bVar1);
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


/* address=140df2420 name=FUN_140df2420 */

bool FUN_140df2420(longlong *param_1,ulonglong param_2)

{
  bool bVar1;
  
  bVar1 = param_2 % 4 == 0;
  if (bVar1) {
    *param_1 = (param_2 / 4) * 3;
  }
  return bVar1;
}


/* address=140df2470 name=FUN_140df2470 */

undefined8
FUN_140df2470(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4,
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
    iVar1 = FUN_140df2420(local_10,param_5);
    if ((iVar1 == 0) || (param_3 < local_10[0])) {
      uVar2 = 0;
    }
    else {
      local_18 = 0;
      local_res8 = param_1;
      for (local_28 = 0; local_28 < param_5; local_28 = local_28 + 4) {
        iVar1 = FUN_140df3270(local_res8,&local_20,param_4 + local_28);
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


/* address=140df2610 name=FUN_140df2610 */

void FUN_140df2610(undefined8 param_1)

{
  FUN_140df2f50(param_1,0,0x38);
  return;
}


/* address=140df2640 name=FUN_140df2640 */

void FUN_140df2640(uint *param_1,undefined *param_2,undefined4 *param_3,longlong param_4,
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
      FID_conflict__assert((wchar_t *)s_c_1413f1b10,(wchar_t *)s_D_1413f1a40,0x95);
    }
    if (param_5 < 0x30 - (ulonglong)*param_1) {
      FUN_140df2f00((longlong)param_1 + (ulonglong)*param_1 + 4,param_4,param_5);
      *param_1 = *param_1 + (uint)param_5;
    }
    else {
      local_res10 = param_2;
      local_res20 = param_4;
      if (*param_1 != 0) {
        lVar1 = 0x30 - (ulonglong)*param_1;
        FUN_140df2f00((longlong)param_1 + (ulonglong)*param_1 + 4,param_4,lVar1);
        local_res20 = param_4 + lVar1;
        param_5 = param_5 - lVar1;
        lVar1 = FUN_140df2140(param_2,param_1 + 1,0x30);
        *param_1 = 0;
        param_2[lVar1] = 10;
        local_res10 = param_2 + lVar1 + 1;
        *local_res10 = 0;
        local_28 = lVar1 + 1;
      }
      while (0x2f < param_5) {
        lVar1 = FUN_140df2140(local_res10,local_res20,0x30);
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
        FUN_140df2f00(param_1 + 1,local_res20,param_5);
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


/* address=140df28e0 name=FUN_140df28e0 */

void FUN_140df28e0(int *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_18;
  
  if (*param_1 == 0) {
    *param_3 = 0;
  }
  else {
    lVar1 = FUN_140df2140(param_2,param_1 + 1,*param_1);
    *(undefined *)(param_2 + lVar1) = 10;
    uVar2 = lVar1 + 1;
    *(undefined *)(param_2 + uVar2) = 0;
    *param_1 = 0;
    if (0x7fffffff < uVar2) {
      FID_conflict__assert((wchar_t *)s_e_1413f1c28,(wchar_t *)s_D_1413f1b60,0xd9);
    }
    local_18 = (undefined4)uVar2;
    *param_3 = local_18;
  }
  return;
}


/* address=140df29b0 name=FUN_140df29b0 */

void FUN_140df29b0(undefined8 param_1)

{
  FUN_140df2f50(param_1,0,0x38);
  return;
}


/* address=140df29e0 name=FUN_140df29e0 */

undefined8
FUN_140df29e0(uint *param_1,longlong param_2,undefined4 *param_3,longlong param_4,ulonglong param_5)

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
          iVar2 = FUN_140df3270(local_res10,local_10,param_1 + 1);
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


/* address=140df2bb0 name=FUN_140df2bb0 */

undefined8 FUN_140df2bb0(int *param_1,undefined8 param_2,undefined4 *param_3)

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


/* address=140df2d80 name=FUN_140df2d80 */

undefined8 FUN_140df2d80(undefined8 param_1)

{
  return param_1;
}


/* address=140df2da0 name=FUN_140df2da0 */

longlong FUN_140df2da0(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=140df2dc0 name=FUN_140df2dc0 */

void FUN_140df2dc0(ulonglong param_1)

{
  FUN_140df2da0(~param_1 & param_1 - 1);
  return;
}


/* address=140df2df0 name=FUN_140df2df0 */

void FUN_140df2df0(ulonglong param_1,ulonglong param_2)

{
  FUN_140df2dc0(param_1 ^ param_2);
  return;
}


/* address=140df2e30 name=FUN_140df2e30 */

void FUN_140df2e30(undefined8 param_1,undefined8 param_2)

{
  FUN_140df2df0(param_1,param_2);
  return;
}


/* address=140df2e60 name=FUN_140df2e60 */

ulonglong FUN_140df2e60(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_140df2d80(param_1);
  uVar2 = FUN_140df2d80(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=140df2eb0 name=FUN_140df2eb0 */

void FUN_140df2eb0(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_140df2e60(param_1,param_2,param_3);
  return;
}


/* address=140df2f00 name=FUN_140df2f00 */

undefined8 FUN_140df2f00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140df2f50 name=FUN_140df2f50 */

undefined8 FUN_140df2f50(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140df2f90 name=FUN_140df2f90 */

void FUN_140df2f90(byte param_1,byte param_2)

{
  FUN_140df2da0((ulonglong)param_1 - (ulonglong)param_2);
  return;
}


/* address=140df2fe0 name=FUN_140df2fe0 */

void FUN_140df2fe0(char param_1,char param_2,char param_3)

{
  FUN_140df2f90(param_1 - param_2,(param_3 - param_2) + '\x01');
  return;
}


/* address=140df3030 name=FUN_140df3030 */

undefined FUN_140df3030(byte param_1)

{
  undefined uVar1;
  undefined uVar2;
  
  param_1 = param_1 & 0x3f;
  uVar1 = FUN_140df2e30(param_1,0x3e);
  uVar1 = FUN_140df2eb0(uVar1,0x2b,0x2f);
  uVar2 = FUN_140df2f90(param_1,0x3e);
  uVar1 = FUN_140df2eb0(uVar2,param_1 - 4,uVar1);
  uVar2 = FUN_140df2f90(param_1,0x34);
  uVar1 = FUN_140df2eb0(uVar2,param_1 + 0x47,uVar1);
  uVar2 = FUN_140df2f90(param_1,0x1a);
  uVar1 = FUN_140df2eb0(uVar2,param_1 + 0x41,uVar1);
  return uVar1;
}


/* address=140df3110 name=FUN_140df3110 */

byte FUN_140df3110(char param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  bVar1 = FUN_140df2fe0(param_1,0x41,0x5a);
  bVar2 = FUN_140df2fe0(param_1,0x61,0x7a);
  bVar3 = FUN_140df2fe0(param_1,0x30,0x39);
  bVar4 = FUN_140df2e30(param_1,0x2b);
  bVar5 = FUN_140df2e30(param_1,0x2f);
  bVar6 = FUN_140df2e30(param_1,0x3d);
  return bVar1 & param_1 + 0xbfU | bVar2 & param_1 + 0xb9U | bVar3 & param_1 + 4U | bVar4 & 0x3e |
         bVar5 & 0x3f | ~(bVar1 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6);
}


/* address=140df3270 name=FUN_140df3270 */

undefined8 FUN_140df3270(byte *param_1,undefined8 *param_2,char *param_3)

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
  
  bVar1 = FUN_140df3110(*param_3);
  bVar2 = FUN_140df3110(param_3[1]);
  bVar3 = FUN_140df3110(param_3[2]);
  local_24 = FUN_140df3110(param_3[3]);
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


/* address=140df3500 name=FUN_140df3500 */

undefined * FUN_140df3500(void)

{
  return &DAT_1410b8570;
}


/* address=140df3530 name=FUN_140df3530 */

undefined * FUN_140df3530(void)

{
  return &DAT_1410b86b0;
}


/* address=140df3550 name=FUN_140df3550 */

undefined * FUN_140df3550(void)

{
  return &DAT_1410b85f0;
}


/* address=140df3c90 name=FUN_140df3c90 */

ulonglong FUN_140df3c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 *param_5,longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar5;
  uint local_58;
  undefined4 local_48 [2];
  undefined local_40 [64];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if ((*(longlong *)(param_6 + 0x28) != 0) &&
     (*(longlong *)(*(longlong *)(param_6 + 0x28) + 0x28) != 0)) {
    uVar2 = (**(code **)(*(longlong *)(param_6 + 0x28) + 0x28))
                      (param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  local_58 = 0;
  lVar3 = FUN_140d5e1b0(param_2,param_3,param_6);
  if (lVar3 == 0) {
    *param_5 = 0;
  }
  else {
    uVar4 = FUN_140df3f00(param_6);
    FUN_140d73af0(local_40,param_4,uVar4);
    iVar1 = FUN_140df40f0(local_40,lVar3);
    if ((iVar1 == 0) || (iVar1 = FUN_140d73bb0(local_40,0,local_48), iVar1 == 0)) {
      FUN_140d186f0(0x1a,0,0x69,s_D__a_1_s_target_release_build_bo_1413f1e90,CONCAT44(uVar5,0x58));
      *param_5 = 0;
    }
    else {
      *param_5 = local_48[0];
      local_58 = 1;
    }
  }
  FUN_140d5e060(lVar3);
  return (ulonglong)local_58;
}


/* address=140df3e00 name=FUN_140df3e00 */

undefined4
FUN_140df3e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined8 local_18;
  longlong local_10 [2];
  
  local_28 = 0;
  local_18 = 0;
  lVar2 = FUN_140df4060(param_4,param_5);
  if (lVar2 != 0) {
    iVar1 = FUN_140df4190(&local_18,local_10,lVar2);
    if (((iVar1 == 0) || (local_10[0] != param_5)) ||
       (iVar1 = FUN_140df43c0(param_4,local_18,param_5), iVar1 != 0)) {
      FUN_140d186f0(0x1a,0,0x44,s_D__a_1_s_target_release_build_bo_1413f1f00,0x75);
    }
    else {
      local_28 = FUN_140d5e3f0(param_2,param_3,lVar2,param_6);
    }
  }
  FUN_140d762b0(local_18);
  FUN_140d5e060(lVar2);
  return local_28;
}


/* address=140df3f00 name=FUN_140df3f00 */

undefined8 FUN_140df3f00(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong local_10;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(longlong *)(param_1 + 0x28) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20) == 0)) {
      lVar2 = FUN_140d575e0(param_1);
      if (lVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_140d55830(lVar2);
      uVar1 = FUN_140d278e0(uVar3);
      local_10 = (ulonglong)uVar1;
    }
    else {
      local_10 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(param_1);
    }
    uVar3 = FUN_140df4230(local_10);
  }
  return uVar3;
}


/* address=140df3fa0 name=FUN_140df3fa0 */

undefined8 * FUN_140df3fa0(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  wchar_t *local_20 [4];
  
  puVar3 = (undefined8 *)FUN_140d5dff0();
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar1 = wcstoul(param_1,local_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_140e40ac0(local_20,*puVar3), iVar2 == 0)) ||
        (iVar2 = FUN_140e40ac0(local_20,puVar3[1]), iVar2 == 0)) ||
       (lVar4 = FUN_140d71850(local_20), lVar4 != 0)) {
      FUN_140d186f0(0x1a,0,100,s_D__a_1_s_target_release_build_bo_1413f1f70,0xa0);
      FUN_140d5e060(puVar3);
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}


/* address=140df4060 name=FUN_140df4060 */

longlong FUN_140df4060(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined local_20 [32];
  
  FUN_140d717c0(local_20,param_1,param_2);
  lVar1 = FUN_140df3fa0(local_20);
  if ((lVar1 == 0) || (lVar2 = FUN_140d71850(local_20), lVar2 != 0)) {
    FUN_140d186f0(0x1a,0,100,s_D__a_1_s_target_release_build_bo_1413f1fe0,0xac);
    FUN_140d5e060(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=140df40f0 name=FUN_140df40f0 */

undefined8 FUN_140df40f0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_140d741d0(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_140e40ba0(local_38,*param_2), iVar1 != 0)) &&
      (iVar1 = FUN_140e40ba0(local_38,param_2[1]), iVar1 != 0)) &&
     (iVar1 = FUN_140d73c90(param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_140d186f0(0x1a,0,0x69,s_D__a_1_s_target_release_build_bo_1413f2050,0xb9);
  return 0;
}


/* address=140df4190 name=FUN_140df4190 */

undefined8 FUN_140df4190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  FUN_140d73a50(local_38);
  iVar1 = FUN_140d73a80(local_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_140df40f0(local_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_140d73bb0(local_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_140d186f0(0x1a,0,0x69,s_D__a_1_s_target_release_build_bo_1413f20c0,0xc6);
  FUN_140d73b40(local_38);
  return 0;
}


/* address=140df4230 name=FUN_140df4230 */

ulonglong FUN_140df4230(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_140df4400(param_1 + 1);
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
      lVar1 = FUN_140df4400(uVar3);
      uVar2 = lVar1 + 1 + uVar3;
      if (uVar2 < uVar3) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


/* address=140df43c0 name=FUN_140df43c0 */

int FUN_140df43c0(void *param_1,void *param_2,size_t param_3)

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


/* address=140df4400 name=FUN_140df4400 */

longlong FUN_140df4400(ulonglong param_1)

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


/* address=140df4450 name=FUN_140df4450 */

void FUN_140df4450(undefined8 param_1,undefined4 param_2)

{
  FUN_140e05180(param_1,6,0xffffffff,0x1001,param_2,0);
  return;
}


/* address=140df44a0 name=FUN_140df44a0 */

void FUN_140df44a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e05180(param_1,6,0xffffffff,0x1002,0,param_2);
  return;
}


/* address=140df44f0 name=FUN_140df44f0 */

void FUN_140df44f0(undefined8 param_1,undefined4 param_2)

{
  FUN_140e05180(param_1,6,0x18,0x1003,param_2,0);
  return;
}


/* address=140df4540 name=FUN_140df4540 */

void FUN_140df4540(undefined8 param_1,undefined8 param_2)

{
  FUN_140e05180(param_1,6,0x18,0x1004,0,param_2);
  return;
}


/* address=140df46d0 name=FUN_140df46d0 */

void FUN_140df46d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e05180(param_1,6,0xf8,0x1009,0,param_2);
  return;
}


/* address=140df4720 name=FUN_140df4720 */

void FUN_140df4720(undefined8 param_1,undefined8 param_2)

{
  FUN_140e05180(param_1,6,0xf8,0x100a,0,param_2);
  return;
}


/* address=140df48e0 name=FUN_140df48e0 */

undefined8 FUN_140df48e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140df4930 name=FUN_140df4930 */

undefined8 FUN_140df4930(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140df4970 name=FUN_140df4970 */

bool FUN_140df4970(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140d76180(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_140df4930(puVar1,0,0x48);
    *puVar1 = 0x800;
    puVar1[4] = 1;
    puVar1[10] = 0xfffffffe;
    *(undefined4 **)(param_1 + 0x28) = puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}


/* address=140df4ba0 name=FUN_140df4ba0 */

undefined8 FUN_140df4ba0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    iVar1 = FUN_140d70cb0(*(undefined8 *)(param_2 + 0x10));
    uVar2 = FUN_140d76180((longlong)iVar1);
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


/* address=140df5660 name=FUN_140df5660 */

undefined8 FUN_140df5660(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else if (param_2 == 3) {
    FUN_140d186f0(6,0,0x73,s_D__a_1_s_target_release_build_bo_1413f22b0,0x179);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140df56c0 name=FUN_140df56c0 */

undefined8 FUN_140df56c0(int param_1)

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


/* address=140df5c90 name=FUN_140df5c90 */

undefined8 FUN_140df5c90(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_140e5f190();
    lVar3 = FUN_140d172f0(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_140d17560(lVar3,1,param_2,1,0);
    if (iVar1 != 1) {
      return 0;
    }
  }
  if (param_3 != 0) {
    uVar2 = FUN_140e5e230();
    lVar3 = FUN_140d172f0(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_140d17560(lVar3,2,param_3,1,0);
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


/* address=140df5d80 name=FUN_140df5d80 */

undefined8 FUN_140df5d80(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140e5f190();
  lVar2 = FUN_140d172f0(param_1,uVar1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_140d17560(lVar2,1,0,3,0);
    uVar1 = FUN_140e5e230();
    lVar2 = FUN_140d172f0(param_1,uVar1);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      FUN_140d17560(lVar2,2,0,3,0);
      FUN_140d18390();
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=140df5e20 name=FUN_140df5e20 */

void FUN_140df5e20(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140df5e40 name=FUN_140df5e40 */

void FUN_140df5e40(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140df5e70 name=FUN_140df5e70 */

void FUN_140df5e70(undefined8 param_1)

{
  FUN_140d19fb0(param_1);
  return;
}


/* address=140df5e90 name=FUN_140df5e90 */

longlong FUN_140df5e90(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  lVar1 = FUN_140df5e70(param_1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    for (local_18 = 0; uVar2 = FUN_140df5e20(lVar1), local_18 < uVar2; local_18 = local_18 + 1) {
      uVar3 = FUN_140df5e40(lVar1,local_18);
      FUN_140dd0870(uVar3);
    }
  }
  return lVar1;
}


/* address=140df5f10 name=FUN_140df5f10 */

undefined8 FUN_140df5f10(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 8);
}


/* address=140df5f30 name=FUN_140df5f30 */

undefined8 FUN_140df5f30(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x18);
}


/* address=140df5f50 name=FUN_140df5f50 */

undefined8 FUN_140df5f50(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x28);
}


/* address=140df5f70 name=FUN_140df5f70 */

undefined8 FUN_140df5f70(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e37ec0(*(undefined8 *)(*param_1 + 0x30));
  }
  return uVar1;
}


/* address=140df5fb0 name=FUN_140df5fb0 */

undefined8 FUN_140df5fb0(longlong *param_1)

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


/* address=140df6120 name=FUN_140df6120 */

undefined8 FUN_140df6120(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 8);
}


/* address=140df6140 name=FUN_140df6140 */

bool FUN_140df6140(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_14;
  
  lVar1 = FUN_140df5f70(param_1);
  if (lVar1 == 0) {
    local_14 = -2;
  }
  else {
    local_14 = FUN_140d70a70(lVar1,param_2);
  }
  if (local_14 == -2) {
    FUN_140d186f0(0xb,0,0x80,s_D__a_1_s_target_release_build_bo_1413f2750,0x110);
  }
  else if (local_14 == -1) {
    FUN_140d186f0(0xb,0,0x73,s_D__a_1_s_target_release_build_bo_1413f26e0,0x10d);
  }
  else if (local_14 == 0) {
    FUN_140d186f0(0xb,0,0x74,s_D__a_1_s_target_release_build_bo_1413f2670,0x10a);
  }
  if (lVar1 != 0) {
    FUN_140d709a0(lVar1);
  }
  return 0 < local_14;
}


/* address=140df62b0 name=FUN_140df62b0 */

void FUN_140df62b0(longlong *param_1,longlong *param_2)

{
  FUN_140df63d0(*(undefined8 *)(*param_1 + 0x28),*(undefined8 *)(*param_2 + 0x28));
  return;
}


/* address=140df6380 name=FUN_140df6380 */

void FUN_140df6380(longlong param_1,longlong param_2)

{
  FUN_140dfea40(param_1);
  FUN_140dfea40(param_2);
  FUN_140df6700(param_1 + 0x68,param_2 + 0x68,0x20);
  return;
}


/* address=140df63d0 name=FUN_140df63d0 */

ulonglong FUN_140df63d0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) &&
     (iVar1 = FUN_140e00120(param_1,0), iVar1 < 0)) {
    return 0xfffffffe;
  }
  if (((*(longlong *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) &&
     (iVar1 = FUN_140e00120(param_2,0), iVar1 < 0)) {
    return 0xfffffffe;
  }
  uVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_2 + 0x20);
  if (uVar2 == 0) {
    uVar3 = FUN_140df6700(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18),
                          (longlong)*(int *)(param_1 + 0x20));
  }
  else {
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}


/* address=140df64a0 name=FUN_140df64a0 */

void FUN_140df64a0(longlong param_1)

{
  int iVar1;
  undefined auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30 [6];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_140e00120(param_1,0);
  local_48 = FUN_140d1c010();
  local_40 = 0;
  iVar1 = FUN_140d1c800(*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20),local_30,
                        0);
  if (iVar1 != 0) {
    local_38 = local_30[0];
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_68);
  return;
}


/* address=140df6570 name=FUN_140df6570 */

void FUN_140df6570(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_68 [32];
  undefined4 local_48;
  undefined local_40 [32];
  undefined4 local_20 [4];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_140e00120(param_1,0);
  FUN_140d1c160(local_40);
  uVar2 = FUN_140d1bfe0();
  iVar1 = FUN_140d1c5a0(local_40,uVar2,0);
  if (iVar1 != 0) {
    iVar1 = FUN_140d1c6d0(local_40,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),
                          **(undefined8 **)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_140d1c710(local_40,local_20,0);
      if (iVar1 != 0) {
        local_48 = local_20[0];
      }
    }
  }
  FUN_140d1c1d0(local_40);
  FUN_140e28050(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=140df6680 name=FUN_140df6680 */

void FUN_140df6680(longlong *param_1,longlong *param_2)

{
  FUN_140df63d0(*(undefined8 *)(*param_1 + 0x10),*(undefined8 *)(*param_2 + 0x10));
  return;
}


/* address=140df66c0 name=FUN_140df66c0 */

void FUN_140df66c0(longlong param_1,longlong param_2)

{
  FUN_140df6700(param_1 + 0x48,param_2 + 0x48,0x20);
  return;
}


/* address=140df6700 name=FUN_140df6700 */

int FUN_140df6700(void *param_1,void *param_2,size_t param_3)

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


/* address=140df6740 name=FUN_140df6740 */

undefined8 FUN_140df6740(longlong param_1)

{
  FUN_140d892b0(param_1 + 0x18);
  return 1;
}


/* address=140df67a0 name=FUN_140df67a0 */

undefined8 FUN_140df67a0(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x18);
}


/* address=140df67c0 name=FUN_140df67c0 */

undefined8 FUN_140df67c0(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x20);
}


/* address=140df67e0 name=FUN_140df67e0 */

undefined8 FUN_140df67e0(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x10);
}


/* address=140df6800 name=FUN_140df6800 */

undefined8 FUN_140df6800(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x28);
}


/* address=140df68f0 name=FUN_140df68f0 */

undefined8 FUN_140df68f0(longlong **param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong **)0x0) {
    uVar1 = 0;
  }
  else if ((param_2 < 0) || (1 < param_2)) {
    FUN_140d186f0(0xb,0,0x8c,s_D__a_1_s_target_release_build_bo_1413f27c0,0x48);
    uVar1 = 0;
  }
  else if (param_2 == 0) {
    FUN_140e2e120(**param_1);
    **param_1 = 0;
    uVar1 = 1;
  }
  else {
    if (**param_1 == 0) {
      lVar2 = FUN_140e2e100();
      **param_1 = lVar2;
      if (**param_1 == 0) {
        return 0;
      }
    }
    uVar1 = FUN_140dc53e0(**param_1,(longlong)param_2);
  }
  return uVar1;
}


/* address=140df69c0 name=FUN_140df69c0 */

undefined8 FUN_140df69c0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e001f0(*param_1 + 0x10,param_2);
  }
  return uVar1;
}


/* address=140df6a10 name=FUN_140df6a10 */

bool FUN_140df6a10(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong local_10;
  
  if (param_1 == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    local_10 = *(longlong *)(*param_1 + 0x18);
    if ((local_10 != param_2) && (local_10 = FUN_140dc3260(param_2), local_10 != 0)) {
      FUN_140dbdce0(*(undefined8 *)(*param_1 + 0x18));
      *(longlong *)(*param_1 + 0x18) = local_10;
    }
    bVar1 = local_10 != 0;
  }
  return bVar1;
}


/* address=140df6ab0 name=FUN_140df6ab0 */

bool FUN_140df6ab0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong local_10;
  
  if (param_1 == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    local_10 = *(longlong *)(*param_1 + 0x20);
    if ((local_10 != param_2) && (local_10 = FUN_140dc3260(param_2), local_10 != 0)) {
      FUN_140dbdce0(*(undefined8 *)(*param_1 + 0x20));
      *(longlong *)(*param_1 + 0x20) = local_10;
    }
    bVar1 = local_10 != 0;
  }
  return bVar1;
}


/* address=140df6d50 name=FUN_140df6d50 */

void FUN_140df6d50(undefined8 param_1)

{
  FUN_140d1a0b0(param_1,&LAB_140df6d00);
  return;
}


/* address=140df6fa0 name=FUN_140df6fa0 */

void FUN_140df6fa0(undefined8 param_1)

{
  FUN_140e29190(param_1,&DAT_1410b8a00);
  return;
}


/* address=140df6fd0 name=FUN_140df6fd0 */

void FUN_140df6fd0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140e29830(param_1,param_2,param_3,&DAT_1410b8a00);
  return;
}


/* address=140df7010 name=FUN_140df7010 */

void FUN_140df7010(undefined8 param_1,undefined8 param_2)

{
  FUN_140e2bb10(param_1,param_2,&DAT_1410b8a00);
  return;
}


/* address=140df7040 name=FUN_140df7040 */

undefined8 FUN_140df7040(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  iVar1 = FUN_140e02c30(param_1[1],*(undefined8 *)(*param_1 + 8));
  if (iVar1 == 0) {
    uVar2 = FUN_140e5f960(&DAT_1410b8a30,param_1[1],param_1[2],*param_1,param_2);
  }
  else {
    FUN_140d186f0(0xb,0,0x89,s_D__a_1_s_target_release_build_bo_1413f2a90,CONCAT44(uVar3,0x181));
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140df70d0 name=FUN_140df70d0 */

void FUN_140df70d0(void)

{
  FUN_140e288b0(&DAT_1410b8a00);
  return;
}


/* address=140df70f0 name=FUN_140df70f0 */

void FUN_140df70f0(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140df7110 name=FUN_140df7110 */

void FUN_140df7110(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140df7190 name=FUN_140df7190 */

void FUN_140df7190(undefined8 param_1)

{
  FUN_140d19550(param_1);
  return;
}


/* address=140df71b0 name=FUN_140df71b0 */

void FUN_140df71b0(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140df71d0 name=FUN_140df71d0 */

void FUN_140df71d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140df7200 name=FUN_140df7200 */

void FUN_140df7200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d19c10(param_1,param_2,param_3,&LAB_140df7140);
  return;
}


/* address=140df7240 name=FUN_140df7240 */

void FUN_140df7240(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140df7270 name=FUN_140df7270 */

void FUN_140df7270(undefined8 param_1)

{
  FUN_140d1a0b0(param_1,&LAB_140df7140);
  return;
}


/* address=140df72a0 name=FUN_140df72a0 */

void FUN_140df72a0(undefined8 param_1)

{
  FUN_140d1a150(param_1);
  return;
}


/* address=140df72c0 name=FUN_140df72c0 */

void FUN_140df72c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d1a1b0(param_1,param_2);
  return;
}


/* address=140df72f0 name=FUN_140df72f0 */

void FUN_140df72f0(undefined8 param_1)

{
  FUN_140e40c90(&DAT_1410b8c40,param_1);
  return;
}


/* address=140df7340 name=FUN_140df7340 */

void FUN_140df7340(undefined8 param_1)

{
  FUN_140e29190(param_1,&DAT_1410b8c40);
  return;
}


/* address=140df73e0 name=FUN_140df73e0 */

undefined8 FUN_140df73e0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    uVar2 = FUN_140df7190(&LAB_140df76d0);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
  }
  if ((*(longlong *)(lVar1 + 0x28) != 0) &&
     (lVar3 = FUN_140df7240(*(undefined8 *)(lVar1 + 0x28),param_2), lVar3 != 0)) {
    FUN_140e3a090(lVar1 + 0x38);
    return 1;
  }
  return 0;
}


/* address=140df7470 name=FUN_140df7470 */

void FUN_140df7470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140df78c0(param_1,param_2,param_3,0);
  return;
}


/* address=140df74b0 name=FUN_140df74b0 */

void FUN_140df74b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140df5f30(param_3);
  uVar2 = FUN_140df6120(param_3);
  FUN_140df78c0(param_1,param_2,uVar2,uVar1);
  return;
}


/* address=140df7510 name=FUN_140df7510 */

void FUN_140df7510(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140df7530 name=FUN_140df7530 */

void FUN_140df7530(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140df7590 name=FUN_140df7590 */

void FUN_140df7590(void)

{
  FUN_140d19610();
  return;
}


/* address=140df75b0 name=FUN_140df75b0 */

void FUN_140df75b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140df7560,param_2);
  return;
}


/* address=140df75e0 name=FUN_140df75e0 */

void FUN_140df75e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140df76a0 name=FUN_140df76a0 */

void FUN_140df76a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e2bb10(param_1,param_2,&DAT_1410b8a30);
  return;
}


/* address=140df7710 name=FUN_140df7710 */

void FUN_140df7710(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  bVar1 = 0 < *(int *)(param_2 + 1);
  if ((bool)bVar1) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
  }
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    bVar1 = bVar1 + 1;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
  }
  if (0 < *(int *)((longlong)param_2 + 0x1c)) {
    bVar1 = bVar1 + 1;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
  }
  if (1 < bVar1) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
  }
  if (0 < *(int *)(param_2 + 3)) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
  }
  if (param_2[2] != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
    if (0 < *(int *)param_2[2]) {
      *(uint *)(param_1 + 0x34) = (uint)**(byte **)(param_2[2] + 8);
    }
    if (1 < *(int *)param_2[2]) {
      *(uint *)(param_1 + 0x34) =
           *(uint *)(param_1 + 0x34) | (uint)*(byte *)(*(longlong *)(param_2[2] + 8) + 1) << 8;
    }
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0x807f;
  }
  uVar2 = FUN_140df67e0(param_1);
  FUN_140e388f0(*param_2,uVar2);
  return;
}


/* address=140df78c0 name=FUN_140df78c0 */

undefined8 FUN_140df78c0(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong local_40;
  undefined8 *local_38;
  longlong local_30 [6];
  
  if ((*(int *)(param_3 + 4) != 2) && (*(int *)(param_3 + 4) != 0x102)) {
    FID_conflict__assert((wchar_t *)s_s_1413f2bb0,(wchar_t *)s_D_1413f2af0,0x1b7);
  }
  local_30[0] = param_3;
  FUN_140d89470(&DAT_1414109e8);
  iVar1 = FUN_140df72a0(*(undefined8 *)(*param_1 + 0x28));
  FUN_140d894d0(&DAT_1414109e8);
  if (iVar1 == 0) {
    FUN_140d894a0(&DAT_1414109e8);
    iVar1 = FUN_140df72a0(*(undefined8 *)(*param_1 + 0x28));
    if (iVar1 == 0) {
      FUN_140df7270(*(undefined8 *)(*param_1 + 0x28));
    }
    FUN_140d89500(&DAT_1414109e8);
  }
  iVar1 = FUN_140df7200(*(undefined8 *)(*param_1 + 0x28),&local_40,local_30);
  if (iVar1 != 0) {
    while (uVar2 = FUN_140df71b0(*(undefined8 *)(*param_1 + 0x28)), local_40 < uVar2) {
      local_38 = (undefined8 *)FUN_140df71d0(*(undefined8 *)(*param_1 + 0x28),local_40);
      iVar1 = FUN_140dc5500(*local_38,param_3);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = FUN_140df8180(param_1,param_4,local_38);
      if (iVar1 != 0) {
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = local_38;
        }
        if (*(int *)(local_38 + 4) != 8) {
          return 1;
        }
        return 2;
      }
      local_40 = local_40 + 1;
    }
  }
  return 0;
}


/* address=140df7b00 name=FUN_140df7b00 */

undefined8 FUN_140df7b00(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int local_58 [2];
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = FUN_140df6800(param_1);
  local_20 = 0;
  local_48 = 0;
  do {
    uVar3 = FUN_140df71b0(local_28);
    if (uVar3 <= local_48) {
      return 1;
    }
    local_50 = FUN_140df71d0(local_28,local_48);
    local_40 = FUN_140df88c0(local_50,0x303,local_58,0);
    if ((local_40 == 0) && (local_58[0] != -1)) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x80;
      return 1;
    }
    if (local_40 != 0) {
      local_20 = local_40;
      if (*(longlong *)(param_1 + 0x68) == 0) {
        uVar4 = FUN_140df7590();
        *(undefined8 *)(param_1 + 0x68) = uVar4;
        if (*(longlong *)(param_1 + 0x68) == 0) {
          return 0;
        }
      }
      lVar5 = FUN_140df75e0(*(undefined8 *)(param_1 + 0x68),local_40);
      if (lVar5 == 0) {
        return 0;
      }
    }
    *(longlong *)(local_50 + 0x18) = local_20;
    local_38 = FUN_140df88c0(local_50,0x8d,local_58,0);
    if ((local_38 == 0) && (local_58[0] != -1)) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x80;
      return 1;
    }
    if (local_38 == 0) {
      *(undefined4 *)(local_50 + 0x20) = 0xffffffff;
    }
    else {
      uVar1 = FUN_140dc5780(local_38);
      *(undefined4 *)(local_50 + 0x20) = uVar1;
      FUN_140e2e1d0(local_38);
    }
    local_18 = *(undefined8 *)(local_50 + 0x10);
    local_30 = 0;
    while (uVar3 = FUN_140df70f0(local_18), local_30 < uVar3) {
      local_10 = FUN_140df7110(local_18,local_30);
      iVar2 = FUN_140e2ec20(local_10);
      if (iVar2 != 0) {
        uVar4 = FUN_140e2ebd0(local_10);
        iVar2 = FUN_140dba730(uVar4);
        if (iVar2 != 0x303) {
          *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x200;
          break;
        }
      }
      local_30 = local_30 + 1;
    }
    local_48 = local_48 + 1;
  } while( true );
}


/* address=140df8180 name=FUN_140df8180 */

undefined8 FUN_140df8180(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong local_res10;
  ulonglong local_18;
  
  if (*(longlong *)(param_3 + 0x18) == 0) {
    if (param_2 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = FUN_140df67e0(param_1);
      iVar1 = FUN_140df63d0(param_2,uVar2);
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    local_res10 = param_2;
    if (param_2 == 0) {
      local_res10 = FUN_140df67e0(param_1);
    }
    for (local_18 = 0; uVar3 = FUN_140df7510(*(undefined8 *)(param_3 + 0x18)), local_18 < uVar3;
        local_18 = local_18 + 1) {
      piVar4 = (int *)FUN_140df7530(*(undefined8 *)(param_3 + 0x18),local_18);
      if ((*piVar4 == 4) &&
         (iVar1 = FUN_140df63d0(local_res10,*(undefined8 *)(piVar4 + 2)), iVar1 == 0)) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140df8270 name=FUN_140df8270 */

void FUN_140df8270(longlong *param_1)

{
  FUN_140e2ee70(*(undefined8 *)(*param_1 + 0x48));
  return;
}


/* address=140df82a0 name=FUN_140df82a0 */

void FUN_140df82a0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140e2eea0(*(undefined8 *)(*param_1 + 0x48),param_2,param_3);
  return;
}


/* address=140df8360 name=FUN_140df8360 */

void FUN_140df8360(longlong *param_1,undefined4 param_2)

{
  FUN_140e2f070(*(undefined8 *)(*param_1 + 0x48),param_2);
  return;
}


/* address=140df8420 name=FUN_140df8420 */

void FUN_140df8420(longlong *param_1)

{
  FUN_140e2ee70(*(undefined8 *)(*param_1 + 0x30));
  return;
}


/* address=140df8450 name=FUN_140df8450 */

void FUN_140df8450(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140e2eea0(*(undefined8 *)(*param_1 + 0x30),param_2,param_3);
  return;
}


/* address=140df8510 name=FUN_140df8510 */

void FUN_140df8510(longlong *param_1,undefined4 param_2)

{
  FUN_140e2f070(*(undefined8 *)(*param_1 + 0x30),param_2);
  return;
}


/* address=140df8570 name=FUN_140df8570 */

bool FUN_140df8570(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140e2f130(*param_1 + 0x30,param_2,param_3);
  return lVar1 != 0;
}


/* address=140df85d0 name=FUN_140df85d0 */

void FUN_140df85d0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e41730(*(undefined8 *)(*param_1 + 0x48),param_2,param_3,param_4);
  return;
}


/* address=140df8670 name=FUN_140df8670 */

void FUN_140df8670(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e41730(*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4);
  return;
}


/* address=140df86c0 name=FUN_140df86c0 */

void FUN_140df86c0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_140e41930(*param_1 + 0x30,param_2,param_3,param_4,param_5);
  return;
}


/* address=140df88c0 name=FUN_140df88c0 */

void FUN_140df88c0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e41730(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}


/* address=140df8950 name=FUN_140df8950 */

void FUN_140df8950(void)

{
  FUN_140e288b0(&DAT_1410b90f0);
  return;
}


/* address=140df8970 name=FUN_140df8970 */

void FUN_140df8970(undefined8 param_1)

{
  FUN_140e29190(param_1,&DAT_1410b90f0);
  return;
}


/* address=140df8a10 name=FUN_140df8a10 */

void FUN_140df8a10(undefined8 param_1)

{
  FUN_140e40c90(&DAT_1410b90f0,param_1);
  return;
}


/* address=140df8b30 name=FUN_140df8b30 */

void FUN_140df8b30(undefined8 param_1)

{
  FUN_140d19550(param_1);
  return;
}


/* address=140df8b50 name=FUN_140df8b50 */

void FUN_140df8b50(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140df8ab0,param_2);
  return;
}


/* address=140df8b80 name=FUN_140df8b80 */

void FUN_140df8b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d19c10(param_1,param_2,param_3,&LAB_140df8ae0);
  return;
}


/* address=140df8bc0 name=FUN_140df8bc0 */

void FUN_140df8bc0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140df8bf0 name=FUN_140df8bf0 */

void FUN_140df8bf0(undefined8 param_1)

{
  FUN_140d1a0b0(param_1,&LAB_140df8ae0);
  return;
}


/* address=140df8c50 name=FUN_140df8c50 */

void FUN_140df8c50(void)

{
  FUN_140d19610();
  return;
}


/* address=140df8c70 name=FUN_140df8c70 */

void FUN_140df8c70(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140df8c90 name=FUN_140df8c90 */

void FUN_140df8c90(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140df8cc0 name=FUN_140df8cc0 */

void FUN_140df8cc0(undefined8 param_1)

{
  FUN_140d19740(param_1);
  return;
}


/* address=140df8ce0 name=FUN_140df8ce0 */

void FUN_140df8ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140df8c20,param_2);
  return;
}


/* address=140df8d10 name=FUN_140df8d10 */

void FUN_140df8d10(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140df8d70 name=FUN_140df8d70 */

void FUN_140df8d70(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140df8d40,param_2);
  return;
}


/* address=140df8dd0 name=FUN_140df8dd0 */

void FUN_140df8dd0(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140df8df0 name=FUN_140df8df0 */

void FUN_140df8df0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140df8e20 name=FUN_140df8e20 */

void FUN_140df8e20(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140df8da0,param_2);
  return;
}


/* address=140df8e50 name=FUN_140df8e50 */

void FUN_140df8e50(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140df8e70 name=FUN_140df8e70 */

void FUN_140df8e70(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140df8f00 name=FUN_140df8f00 */

undefined8 FUN_140df8f00(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    lVar1 = FUN_140dc54d0(param_2,0,param_3,param_4,0);
    if (lVar1 != 0) {
      local_10 = FUN_140dfb1f0(lVar1);
    }
    FUN_140d27660(lVar1);
  }
  return local_10;
}


/* address=140df8f70 name=FUN_140df8f70 */

longlong FUN_140df8f70(undefined8 param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  bool bVar4;
  char *local_res10;
  int local_24;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = 0;
  if (param_2 == (char *)0x0) {
    FUN_140d186f0(0x14,0,0x7e,s_D__a_1_s_target_release_build_bo_1413f2d10,0xed);
    local_10 = 0;
  }
  else {
    local_18 = FUN_140d275e0();
    bVar4 = *param_2 == '-';
    local_res10 = param_2;
    if (bVar4) {
      local_res10 = param_2 + 1;
    }
    if ((*local_res10 == '0') && ((local_res10[1] == 'x' || (local_res10[1] == 'X')))) {
      local_res10 = local_res10 + 2;
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_24 = FUN_140e02ea0(&local_18,local_res10);
    }
    else {
      sVar3 = strlen(local_res10);
      if (0x2000 < sVar3) {
        FUN_140d27660(local_18);
        FUN_140d186f0(0x14,0,0x7f,s_D__a_1_s_target_release_build_bo_1413f2d80,0x109);
        return 0;
      }
      local_24 = FUN_140e03160(&local_18,local_res10);
    }
    if ((local_24 == 0) || (local_res10[local_24] != '\0')) {
      FUN_140d27660(local_18);
      FUN_140d186f0(0x14,0,0x66,s_D__a_1_s_target_release_build_bo_1413f2df0,0x111);
      local_10 = 0;
    }
    else {
      if ((bVar4) && (iVar2 = FUN_140d29a20(local_18), iVar2 != 0)) {
        bVar4 = false;
      }
      local_10 = FUN_140dc54a0(local_18,0);
      FUN_140d27660(local_18);
      if (local_10 == 0) {
        FUN_140d186f0(0x14,0,0x67,s_D__a_1_s_target_release_build_bo_1413f2e60,0x11c);
        local_10 = 0;
      }
      else if (bVar4) {
        *(uint *)(local_10 + 4) = *(uint *)(local_10 + 4) | 0x100;
      }
    }
  }
  return local_10;
}


/* address=140df91b0 name=FUN_140df91b0 */

undefined8 FUN_140df91b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    lVar1 = FUN_140dc56c0(param_2,0,param_3,param_4,0);
    if (lVar1 != 0) {
      local_10 = FUN_140dfb1f0(lVar1);
    }
    FUN_140d27660(lVar1);
  }
  return local_10;
}


/* address=140df9300 name=FUN_140df9300 */

void FUN_140df9300(undefined8 param_1)

{
  FUN_140df8b50(param_1,&LAB_140dfa9b0);
  return;
}


/* address=140df9410 name=FUN_140df9410 */

undefined8
FUN_140df9410(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    lVar2 = FUN_140df9830(param_2,0,param_3);
    if (lVar2 == 0) {
      uVar1 = FUN_140dfbc50(param_1,param_2,param_3,param_4,2,param_5);
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}


/* address=140df9490 name=FUN_140df9490 */

undefined8 FUN_140df9490(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    lVar2 = FUN_140df9830(param_2,0,param_3);
    if (lVar2 == 0) {
      uVar1 = FUN_140dfbc50(param_1,param_2,param_3,param_4,1,0);
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}


/* address=140df9510 name=FUN_140df9510 */

undefined8 FUN_140df9510(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = FUN_140dfbc50(param_1,param_2,param_3,param_4,7,0);
  }
  return uVar1;
}


/* address=140df9610 name=FUN_140df9610 */

void FUN_140df9610(undefined8 param_1)

{
  int iVar1;
  undefined auStack_58 [32];
  int local_38;
  longlong local_30;
  undefined local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_58;
  local_38 = FUN_140df9e50(local_28,param_1);
  if (((local_38 != 0) && (local_30 = FUN_140e2d900(), local_30 != 0)) &&
     (iVar1 = FUN_140e2ea30(local_30,local_28,local_38), iVar1 == 0)) {
    FUN_140e2da20(local_30);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=140df96a0 name=FUN_140df96a0 */

void FUN_140df96a0(longlong param_1)

{
  int iVar1;
  undefined auStack_78 [32];
  int local_58;
  longlong local_50;
  int local_48;
  undefined *local_40;
  longlong local_38;
  undefined local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_50 = 0;
  local_40 = (undefined *)FUN_140e73100(param_1,0x2f);
  if ((local_40 != (undefined *)0x0) && (local_50 = FUN_140d765d0(param_1), local_50 != 0)) {
    local_40[local_50 - param_1] = 0;
    local_40 = local_40 + (local_50 - param_1) + 1;
    local_58 = FUN_140df9e50(local_30,local_50);
    if (local_58 != 0) {
      local_48 = FUN_140df9e50(local_30 + local_58,local_40);
      FUN_140d762b0(local_50);
      local_50 = 0;
      if ((((local_48 != 0) && (local_58 == local_48)) &&
          (local_38 = FUN_140e2d900(), local_38 != 0)) &&
         (iVar1 = FUN_140e2ea30(local_38,local_30,local_58 + local_48), iVar1 != 0))
      goto LAB_140df9810;
    }
    if (local_50 != 0) {
      FUN_140d762b0(local_50);
    }
    if (local_38 != 0) {
      FUN_140e2da20(local_38);
    }
  }
LAB_140df9810:
  FUN_140e28050(local_10 ^ (ulonglong)auStack_78);
  return;
}


/* address=140df9830 name=FUN_140df9830 */

undefined8 FUN_140df9830(undefined8 param_1,undefined4 param_2,longlong param_3)

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


/* address=140df9870 name=FUN_140df9870 */

int FUN_140df9870(void *param_1,void *param_2,size_t param_3)

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


/* address=140df98b0 name=FUN_140df98b0 */

undefined8 FUN_140df98b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140df9900 name=FUN_140df9900 */

undefined8 FUN_140df9900(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140df9940 name=FUN_140df9940 */

undefined8 FUN_140df9940(longlong param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong local_58;
  undefined8 local_50;
  undefined local_48 [8];
  undefined local_40 [64];
  
  iVar1 = FUN_140d73a80(local_40,param_2 * 3 + 1);
  if (iVar1 != 0) {
    for (local_58 = 0; local_58 < param_2; local_58 = local_58 + 1) {
      if ((((local_58 != 0) && (iVar1 = FUN_140d74480(local_40,0x3a), iVar1 == 0)) ||
          (iVar1 = FUN_140d74480(local_40,"0123456789ABCDEF"
                                          [(int)(uint)*(byte *)(param_1 + local_58) >> 4]),
          iVar1 == 0)) ||
         (iVar1 = FUN_140d74480(local_40,"0123456789ABCDEF"
                                         [(int)(*(byte *)(param_1 + local_58) & 0xf)]), iVar1 == 0))
      goto LAB_140df9a53;
    }
    iVar1 = FUN_140d74480(local_40,0);
    if ((iVar1 != 0) && (iVar1 = FUN_140d73bb0(local_40,&local_50,local_48), iVar1 != 0)) {
      return local_50;
    }
  }
LAB_140df9a53:
  FUN_140d73b40(local_40);
  return 0;
}


/* address=140df9a70 name=FUN_140df9a70 */

byte * FUN_140df9a70(char *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  char local_26;
  byte local_25 [5];
  char *local_20;
  byte *local_18;
  byte *local_10;
  
  if (param_1 == (char *)0x0) {
    FUN_140d186f0(0x14,0,0x7c,s_D__a_1_s_target_release_build_bo_1413f3260,0x1f6);
    local_18 = (byte *)0x0;
  }
  else {
    sVar5 = strlen(param_1);
    local_18 = (byte *)FUN_140d76180(sVar5 >> 1);
    pcVar3 = param_1;
    local_10 = local_18;
    if (local_18 == (byte *)0x0) {
      FUN_140d762b0(0);
      local_18 = (byte *)0x0;
    }
    else {
      while (local_20 = pcVar3, *local_20 != '\0') {
        cVar1 = *local_20;
        pcVar3 = local_20 + 1;
        if (cVar1 != ':') {
          cVar2 = local_20[1];
          local_20 = local_20 + 2;
          if (cVar2 == '\0') {
            FUN_140d186f0(0x14,0,0x92,s_D__a_1_s_target_release_build_bo_1413f32d0,0x203);
            FUN_140d762b0(local_18);
            return (byte *)0x0;
          }
          iVar4 = FUN_140d76790(&local_26,cVar1);
          if ((iVar4 == 0) || (iVar4 = FUN_140d76790(local_25,cVar2), iVar4 == 0)) {
            FUN_140d762b0(local_18);
            FUN_140d186f0(0x14,0,0x76,s_D__a_1_s_target_release_build_bo_1413f3340,0x21c);
            return (byte *)0x0;
          }
          *local_10 = local_26 << 4 | local_25[0];
          local_10 = local_10 + 1;
          pcVar3 = local_20;
        }
      }
      if (param_2 != (longlong *)0x0) {
        *param_2 = (longlong)local_10 - (longlong)local_18;
      }
    }
  }
  return local_18;
}


/* address=140df9c40 name=FUN_140df9c40 */

undefined4 FUN_140df9c40(char *param_1,char *param_2)

{
  int iVar1;
  size_t _MaxCount;
  undefined4 local_18;
  
  _MaxCount = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,_MaxCount);
  if (iVar1 == 0) {
    if ((param_1[_MaxCount] == '\0') || (param_1[_MaxCount] == '.')) {
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


/* address=140df9cd0 name=FUN_140df9cd0 */

undefined8 FUN_140df9cd0(char *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *local_res8;
  ulonglong local_res10;
  ulonglong local_20;
  ulonglong local_18;
  
  local_res10 = param_2;
  if ((param_2 != 0) && (param_1[param_2 - 1] == '.')) {
    local_res10 = param_2 - 1;
  }
  local_res8 = param_1;
  if (((1 < local_res10) && (*param_1 == '*')) && (param_1[1] == '.')) {
    local_res8 = param_1 + 2;
    local_res10 = local_res10 - 2;
  }
  if (local_res10 == 0) {
    uVar3 = 0;
  }
  else {
    local_18 = 0;
    for (local_20 = 0; local_20 < local_res10; local_20 = local_20 + 1) {
      cVar1 = local_res8[local_20];
      iVar2 = FUN_140d76820(cVar1);
      if (((iVar2 == 0) && ((cVar1 != '-' || (local_20 <= local_18)))) &&
         ((cVar1 != '_' && (cVar1 != ':')))) {
        if (((cVar1 != '.') || (local_20 <= local_18)) || (local_res10 - 1 <= local_20)) {
          return 0;
        }
        local_18 = local_20 + 1;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140df9e50 name=FUN_140df9e50 */

undefined8 FUN_140df9e50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140e73100(param_2,0x3a);
  if (lVar2 == 0) {
    iVar1 = FUN_140dfab20(param_1,param_2);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
    }
  }
  else {
    iVar1 = FUN_140dfac20(param_1,param_2);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x10;
    }
  }
  return uVar3;
}


/* address=140df9ec0 name=FUN_140df9ec0 */

void FUN_140df9ec0(undefined8 param_1,int *param_2,undefined8 param_3)

{
  FUN_140dfb020(param_1,*(undefined8 *)(param_2 + 2),(longlong)*param_2,0,param_3);
  return;
}


/* address=140df9f10 name=FUN_140df9f10 */

undefined8 FUN_140df9f10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_30;
  char *local_28;
  ulonglong local_20;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    for (local_20 = 0; uVar2 = FUN_140df8c70(param_2), local_20 < uVar2; local_20 = local_20 + 1) {
      lVar3 = FUN_140df8c90(param_2,local_20);
      local_28 = *(char **)(lVar3 + 8);
      for (local_30 = local_28; *local_30 != '\0'; local_30 = local_30 + 1) {
        if (((*local_30 == ':') || (*local_30 == ',')) || (*local_30 == '.')) {
          if (local_30[1] != '\0') {
            local_28 = local_30 + 1;
          }
          break;
        }
      }
      if (*local_28 == '+') {
        local_38 = 0xffffffff;
        local_28 = local_28 + 1;
      }
      else {
        local_38 = 0;
      }
      iVar1 = FUN_140db9e90(param_1,local_28,param_3,*(undefined8 *)(lVar3 + 0x10),
                            0xffffffffffffffff,0xffffffff,local_38);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=140dfa090 name=FUN_140dfa090 */

undefined8 FUN_140dfa090(char *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,&DAT_1413f2ec4);
  if ((((iVar1 != 0) && (iVar1 = strcmp(param_1,&DAT_1413f2ecc), iVar1 != 0)) &&
      (iVar1 = strcmp(param_1,&DAT_1413f2ed4), iVar1 != 0)) &&
     (((iVar1 = strcmp(param_1,&DAT_1413f2ed8), iVar1 != 0 &&
       (iVar1 = strcmp(param_1,&DAT_1413f2edc), iVar1 != 0)) &&
      (iVar1 = strcmp(param_1,&DAT_1413f2ee0), iVar1 != 0)))) {
    iVar1 = strcmp(param_1,s_FALSE_1413f2ee4);
    if (((iVar1 != 0) && (iVar1 = strcmp(param_1,s_false_1413f2eec), iVar1 != 0)) &&
       ((iVar1 = strcmp(param_1,&DAT_1413f2ef4), iVar1 != 0 &&
        (((iVar1 = strcmp(param_1,&DAT_1413f2ef8), iVar1 != 0 &&
          (iVar1 = strcmp(param_1,&DAT_1413f2efc), iVar1 != 0)) &&
         (iVar1 = strcmp(param_1,&DAT_1413f2f00), iVar1 != 0)))))) {
      FUN_140d186f0(0x14,0,0x78,s_D__a_1_s_target_release_build_bo_1413f2f10,0x13f);
      return 0;
    }
    *param_2 = 0;
    return 1;
  }
  *param_2 = 0xff;
  return 1;
}


/* address=140dfa1f0 name=FUN_140dfa1f0 */

undefined8 FUN_140dfa1f0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1[2] == 0) {
    FUN_140d186f0(0x14,0,0x78,s_D__a_1_s_target_release_build_bo_1413f2f80,0x146);
  }
  else {
    iVar1 = FUN_140dfa090(param_1[2],param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_140d18810(6,s_section__1413f2ff8,*param_1,s__name__1413f2ff0,param_1[1],s__value__1413f2fe8,
                param_1[2]);
  return 0;
}


/* address=140dfa2b0 name=FUN_140dfa2b0 */

bool FUN_140dfa2b0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140df8f70(0,param_1[2]);
  if (lVar1 != 0) {
    FUN_140e2e120(*param_2);
    *param_2 = lVar1;
  }
  else {
    FUN_140d18810(6,s_section__1413f3018,*param_1,s__name__1413f3010,param_1[1],s__value__1413f3008,
                  param_1[2]);
  }
  return lVar1 != 0;
}


/* address=140dfa360 name=FUN_140dfa360 */

void FUN_140dfa360(undefined8 param_1,char *param_2,undefined8 param_3)

{
  size_t local_10;
  
  if (param_2 == (char *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = strlen(param_2);
  }
  FUN_140dfb020(param_1,param_2,local_10,param_2 == (char *)0x0,param_3);
  return;
}


/* address=140dfa3e0 name=FUN_140dfa3e0 */

void FUN_140dfa3e0(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    FUN_140dfa360(param_1,s_FALSE_1413f2cfc,param_3);
  }
  else {
    FUN_140dfa360(param_1,&DAT_1413f2cf4,param_3);
  }
  return;
}


/* address=140dfa440 name=FUN_140dfa440 */

undefined4 FUN_140dfa440(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    lVar2 = FUN_140df8f00(0,param_2);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_140dfa360(param_1,lVar2,param_3);
      FUN_140d762b0(lVar2);
    }
  }
  return uVar1;
}


/* address=140dfa4b0 name=FUN_140dfa4b0 */

undefined8 FUN_140dfa4b0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_50;
  int local_48;
  char *local_40;
  char *local_38;
  undefined8 local_30;
  int local_28;
  longlong local_20;
  char *local_18;
  
  local_30 = 0;
  local_40 = (char *)FUN_140d765d0(param_1);
  local_18 = local_40;
  if (local_40 != (char *)0x0) {
    local_48 = 1;
    local_50 = 0;
    local_38 = local_40;
    for (; ((cVar1 = *local_40, cVar1 != '\0' && (cVar1 != '\r')) && (cVar1 != '\n'));
        local_40 = local_40 + 1) {
      local_28 = local_48;
      if (local_48 == 1) {
        if (cVar1 == ':') {
          local_48 = 2;
          *local_40 = '\0';
          local_50 = FUN_140dfa7b0(local_38);
          if (local_50 == 0) {
            FUN_140d186f0(0x14,0,0x7d,s_D__a_1_s_target_release_build_bo_1413f3030,0x179);
            goto LAB_140dfa785;
          }
          local_38 = local_40 + 1;
        }
        else if (cVar1 == ',') {
          *local_40 = '\0';
          local_50 = FUN_140dfa7b0(local_38);
          local_38 = local_40 + 1;
          if (local_50 == 0) {
            FUN_140d186f0(0x14,0,0x7d,s_D__a_1_s_target_release_build_bo_1413f30a0,0x185);
            goto LAB_140dfa785;
          }
          FUN_140dfa360(local_50,0,&local_30);
        }
      }
      else if ((local_48 == 2) && (cVar1 == ',')) {
        local_48 = 1;
        *local_40 = '\0';
        local_20 = FUN_140dfa7b0(local_38);
        if (local_20 == 0) {
          FUN_140d186f0(0x14,0,0x7e,s_D__a_1_s_target_release_build_bo_1413f3110,0x195);
          goto LAB_140dfa785;
        }
        FUN_140dfa360(local_50,local_20,&local_30);
        local_50 = 0;
        local_38 = local_40 + 1;
      }
    }
    if (local_48 == 2) {
      local_20 = FUN_140dfa7b0(local_38);
      if (local_20 != 0) {
        FUN_140dfa360(local_50,local_20,&local_30);
LAB_140dfa774:
        FUN_140d762b0(local_18);
        return local_30;
      }
      FUN_140d186f0(0x14,0,0x7e,s_D__a_1_s_target_release_build_bo_1413f3180,0x1a5);
    }
    else {
      lVar2 = FUN_140dfa7b0(local_38);
      if (lVar2 != 0) {
        FUN_140dfa360(lVar2,0,&local_30);
        goto LAB_140dfa774;
      }
      FUN_140d186f0(0x14,0,0x7d,s_D__a_1_s_target_release_build_bo_1413f31f0,0x1af);
    }
  }
LAB_140dfa785:
  FUN_140d762b0(local_18);
  FUN_140df8ce0(local_30,&LAB_140df8ea0);
  return 0;
}


/* address=140dfa7b0 name=FUN_140dfa7b0 */

char * FUN_140dfa7b0(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char *local_18;
  char *local_10;
  
  local_18 = param_1;
  while ((*local_18 != '\0' && (iVar1 = FUN_140d768a0(*local_18), iVar1 != 0))) {
    local_18 = local_18 + 1;
  }
  if (*local_18 == '\0') {
    local_18 = (char *)0x0;
  }
  else {
    sVar2 = strlen(local_18);
    local_10 = local_18 + (sVar2 - 1);
    while ((local_10 != local_18 && (iVar1 = FUN_140d768a0(*local_10), iVar1 != 0))) {
      local_10 = local_10 + -1;
    }
    if (local_18 != local_10) {
      local_10[1] = '\0';
    }
    if (*local_18 == '\0') {
      local_18 = (char *)0x0;
    }
  }
  return local_18;
}


/* address=140dfa8c0 name=FUN_140dfa8c0 */

undefined8 FUN_140dfa8c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int local_38;
  ulonglong local_30;
  undefined8 local_28;
  int *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_38 = -1;
  do {
    local_38 = FUN_140db98d0(param_1,0x30,local_38);
    if (local_38 < 0) {
      local_30 = 0;
      while( true ) {
        uVar2 = FUN_140df8dd0(param_2);
        if (uVar2 <= local_30) {
          return local_28;
        }
        local_20 = (int *)FUN_140df8df0(param_2,local_30);
        if ((*local_20 == 1) &&
           (iVar1 = FUN_140dfa9d0(&local_28,*(undefined8 *)(local_20 + 2)), iVar1 == 0)) break;
        local_30 = local_30 + 1;
      }
      return 0;
    }
    local_18 = FUN_140db99e0(param_1,local_38);
    local_10 = FUN_140db9fd0(local_18);
    iVar1 = FUN_140dfa9d0(&local_28,local_10);
  } while (iVar1 != 0);
  return 0;
}


/* address=140dfa9d0 name=FUN_140dfa9d0 */

undefined8 FUN_140dfa9d0(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  
  if (param_2[1] == 0x16) {
    if ((*(longlong *)(param_2 + 2) == 0) || (*param_2 == 0)) {
      uVar2 = 1;
    }
    else {
      lVar3 = FUN_140df9830(*(undefined8 *)(param_2 + 2),0,(longlong)*param_2);
      if (lVar3 == 0) {
        local_18 = 0;
        if (*param_1 == 0) {
          lVar3 = FUN_140df8b30(&LAB_140dfa890);
          *param_1 = lVar3;
        }
        if ((*param_1 != 0) &&
           (local_18 = FUN_140d76b90(*(undefined8 *)(param_2 + 2),(longlong)*param_2), local_18 != 0
           )) {
          FUN_140df8bf0(*param_1);
          iVar1 = FUN_140df8b80(*param_1,0,local_18);
          if (iVar1 != 0) {
            FUN_140d762b0(local_18);
            return 1;
          }
          lVar3 = FUN_140df8bc0(*param_1,local_18);
          if (lVar3 != 0) {
            return 1;
          }
        }
        FUN_140d762b0(local_18);
        FUN_140df9300(*param_1);
        *param_1 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140dfab20 name=FUN_140dfab20 */

undefined8 FUN_140dfab20(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c [3];
  
  iVar1 = FUN_140dfbf80(param_2,s__d__d__d__d_1413f33b8,&local_18,&local_14,&local_10,local_c);
  if (iVar1 == 4) {
    if (((((local_18 < 0) || (0xff < local_18)) || (local_14 < 0)) ||
        ((0xff < local_14 || (local_10 < 0)))) ||
       ((0xff < local_10 || ((local_c[0] < 0 || (0xff < local_c[0])))))) {
      uVar2 = 0;
    }
    else {
      *param_1 = (undefined)local_18;
      param_1[1] = (undefined)local_14;
      param_1[2] = (undefined)local_10;
      param_1[3] = (undefined)local_c[0];
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140dfac20 name=FUN_140dfac20 */

void FUN_140dfac20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined auStack_68 [32];
  undefined *local_48;
  longlong local_38;
  undefined local_30 [16];
  int local_20;
  int local_1c;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_68;
  local_20 = 0;
  local_1c = -1;
  local_18 = 0;
  local_48 = local_30;
  iVar1 = FUN_140ddf790(param_2,0x3a,0,&LAB_140dfade0);
  if (iVar1 != 0) {
    if (local_1c == -1) {
      if (local_20 != 0x10) goto LAB_140dfadbb;
    }
    else {
      if ((0xf < local_20) || (3 < local_18)) goto LAB_140dfadbb;
      if (local_18 == 3) {
        if (0 < local_20) goto LAB_140dfadbb;
      }
      else if (local_18 == 2) {
        if ((local_1c != 0) && (local_1c != local_20)) goto LAB_140dfadbb;
      }
      else if ((local_1c == 0) || (local_1c == local_20)) goto LAB_140dfadbb;
    }
    if (local_1c < 0) {
      FUN_140df98b0(param_1,local_30,0x10);
    }
    else {
      FUN_140df98b0(param_1,local_30,(longlong)local_1c);
      FUN_140df9900(param_1 + local_1c,0,(longlong)(0x10 - local_20));
      if (local_20 != local_1c) {
        local_38 = (param_1 + 0x10 + (longlong)local_1c) - (longlong)local_20;
        FUN_140df98b0(local_38,local_30 + local_1c,(longlong)(local_20 - local_1c));
      }
    }
  }
LAB_140dfadbb:
  FUN_140e28050(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=140dfaf40 name=FUN_140dfaf40 */

undefined8 FUN_140dfaf40(undefined *param_1,char *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  char *local_res10;
  ulonglong local_res18;
  byte local_28 [4];
  ushort local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  if (param_3 < 5) {
    local_24 = 0;
    local_res10 = param_2;
    local_res18 = param_3;
    while( true ) {
      local_18 = local_res18;
      if (local_res18 == 0) break;
      local_20 = (int)*local_res10;
      local_1c = FUN_140d76790(local_28,local_20);
      local_res10 = local_res10 + 1;
      if (local_1c == 0) {
        return 0;
      }
      local_24 = local_24 << 4 | (ushort)local_28[0];
      local_res18 = local_res18 - 1;
    }
    *param_1 = (char)(local_24 >> 8);
    param_1[1] = (char)local_24;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140dfb020 name=FUN_140dfb020 */

undefined8
FUN_140dfb020(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = (undefined8 *)0x0;
  local_18 = 0;
  local_10 = 0;
  lVar1 = *param_5;
  if ((param_1 != 0) && (local_18 = FUN_140d765d0(param_1), local_18 == 0)) goto LAB_140dfb191;
  if (param_4 == 0) {
    lVar2 = FUN_140df9830(param_2,0,param_3);
    if (lVar2 != 0) {
      FUN_140d186f0(0x14,0,0xa3,s_D__a_1_s_target_release_build_bo_1413f2c90,0x68);
      goto LAB_140dfb191;
    }
    local_10 = FUN_140d76b90(param_2,param_3);
    if (local_10 == 0) goto LAB_140dfb191;
  }
  local_20 = (undefined8 *)FUN_140ddf740();
  if (local_20 != (undefined8 *)0x0) {
    if (*param_5 == 0) {
      lVar2 = FUN_140df8c50();
      *param_5 = lVar2;
      if (*param_5 == 0) goto LAB_140dfb191;
    }
    *local_20 = 0;
    local_20[1] = local_18;
    local_20[2] = local_10;
    lVar2 = FUN_140df8d10(*param_5,local_20);
    if (lVar2 != 0) {
      return 1;
    }
  }
LAB_140dfb191:
  if (lVar1 == 0) {
    FUN_140df8cc0(*param_5);
    *param_5 = 0;
  }
  FUN_140d762b0(local_20);
  FUN_140d762b0(local_18);
  FUN_140d762b0(local_10);
  return 0;
}


/* address=140dfb1f0 name=FUN_140dfb1f0 */

longlong FUN_140dfb1f0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  char *_Str;
  size_t sVar3;
  longlong lVar4;
  
  uVar1 = FUN_140d27880(param_1);
  if (uVar1 < 0x20) {
    lVar2 = FUN_140e02ee0(param_1);
  }
  else {
    _Str = (char *)FUN_140e02d10(param_1);
    if (_Str == (char *)0x0) {
      lVar2 = 0;
    }
    else {
      sVar3 = strlen(_Str);
      lVar4 = sVar3 + 3;
      lVar2 = FUN_140d76180(lVar4);
      if (lVar2 == 0) {
        FUN_140d762b0(_Str);
        lVar2 = 0;
      }
      else {
        if (*_Str == '-') {
          FUN_140d76cb0(lVar2,&DAT_1413f2d04,lVar4);
          FUN_140d76d60(lVar2,_Str + 1,lVar4);
        }
        else {
          FUN_140d76cb0(lVar2,&DAT_1413f2d08,lVar4);
          FUN_140d76d60(lVar2,_Str,lVar4);
        }
        FUN_140d762b0(_Str);
      }
    }
  }
  return lVar2;
}


/* address=140dfb300 name=FUN_140dfb300 */

undefined8 FUN_140dfb300(char *param_1,longlong param_2,char *param_3,longlong param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *local_res8;
  longlong local_res10;
  char *local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_2 == param_4) {
    for (; local_res10 != 0; local_res10 = local_res10 + -1) {
      cVar1 = *local_res8;
      cVar2 = *local_res18;
      if (cVar1 == '\0') {
        return 0;
      }
      if (cVar1 != cVar2) {
        iVar3 = __ascii_tolower(cVar1);
        iVar4 = __ascii_tolower(cVar2);
        if (iVar3 != iVar4) {
          return 0;
        }
      }
      local_res8 = local_res8 + 1;
      local_res18 = local_res18 + 1;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


/* address=140dfb3d0 name=FUN_140dfb3d0 */

bool FUN_140dfb3d0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == param_4) {
    iVar1 = FUN_140df9870(param_1,param_3,param_2);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* address=140dfb570 name=FUN_140dfb570 */

undefined8
FUN_140dfb570(undefined8 param_1,longlong param_2,char *param_3,longlong param_4,longlong param_5,
             ulonglong param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *local_20;
  
  bVar1 = false;
  if (param_6 < (ulonglong)(param_2 + param_4)) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_140dfb300(param_1,param_2,param_5,param_2,param_7);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      local_20 = (char *)(param_5 + param_2);
      pcVar4 = (char *)(param_5 + (param_6 - param_4));
      iVar2 = FUN_140dfb300(pcVar4,param_4,param_3,param_4,param_7);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        if ((param_2 == 0) && (*param_3 == '.')) {
          if (local_20 == pcVar4) {
            return 0;
          }
          bVar1 = true;
        }
        if (((bVar1) || (param_6 < 4)) ||
           (iVar2 = FUN_140d76990(param_5,&DAT_1413f33a4,4), iVar2 != 0)) {
          if ((pcVar4 == local_20 + 1) && (*local_20 == '*')) {
            uVar3 = 1;
          }
          else {
            for (; local_20 != pcVar4; local_20 = local_20 + 1) {
              iVar2 = FUN_140d76820(*local_20);
              if ((iVar2 == 0) && (*local_20 != '-')) {
                return 0;
              }
            }
            uVar3 = 1;
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
  }
  return uVar3;
}


/* address=140dfb740 name=FUN_140dfb740 */

longlong FUN_140dfb740(longlong param_1,ulonglong param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint local_38;
  int local_34;
  ulonglong local_20;
  longlong local_18;
  
  local_18 = 0;
  local_38 = 1;
  bVar1 = false;
  local_34 = 0;
  local_20 = 0;
  do {
    if (param_2 <= local_20) {
      if ((local_38 != 0) || (local_34 < 2)) {
        local_18 = 0;
      }
      return local_18;
    }
    if (*(char *)(param_1 + local_20) == '*') {
      if ((local_20 == param_2 - 1) || (*(char *)(param_1 + local_20 + 1) == '.')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (((local_18 != 0) || (bVar1)) || (local_34 != 0)) {
        return 0;
      }
      if (((local_38 & 1) == 0) || (!bVar2)) {
        return 0;
      }
      local_18 = param_1 + local_20;
      local_38 = local_38 & 0xfffffffe;
    }
    else {
      iVar3 = FUN_140d76820(*(undefined *)(param_1 + local_20));
      if (iVar3 == 0) {
        if (*(char *)(param_1 + local_20) == '.') {
          if (local_38 != 0) {
            return 0;
          }
          local_38 = 1;
          bVar1 = false;
          local_34 = local_34 + 1;
        }
        else {
          if (*(char *)(param_1 + local_20) != '-') {
            return 0;
          }
          if ((local_38 & 1) != 0) {
            return 0;
          }
          local_38 = local_38 | 4;
        }
      }
      else {
        if ((((local_38 & 1) != 0) && (3 < param_2 - local_20)) &&
           (iVar3 = FUN_140d76990(param_1 + local_20,&DAT_1413f33ac,4), iVar3 == 0)) {
          bVar1 = true;
        }
        local_38 = 0;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}


/* address=140dfba80 name=FUN_140dfba80 */

int FUN_140dfba80(int *param_1,int param_2,code *param_3,undefined4 param_4,int param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_18;
  undefined8 local_10 [2];
  
  local_18 = 0;
  if ((*(longlong *)(param_1 + 2) == 0) || (*param_1 == 0)) {
    local_18 = 0;
  }
  else if (param_2 < 1) {
    iVar1 = FUN_140dc3bf0(local_10,param_1);
    if (iVar1 < 0) {
      local_18 = -1;
    }
    else {
      if ((param_5 == 2) && (iVar2 = FUN_140df9cd0(local_10[0],(longlong)iVar1), iVar2 == 0)) {
        local_18 = 0;
      }
      else {
        local_18 = (*param_3)(local_10[0],(longlong)iVar1,param_6,param_7,param_4);
      }
      if ((0 < local_18) && (param_8 != (undefined8 *)0x0)) {
        uVar3 = FUN_140d76b90(local_10[0],(longlong)iVar1);
        *param_8 = uVar3;
      }
      FUN_140d762b0(local_10[0]);
    }
  }
  else if (param_2 == param_1[1]) {
    if (param_2 == 0x16) {
      local_18 = (*param_3)(*(undefined8 *)(param_1 + 2),(longlong)*param_1,param_6,param_7,param_4)
      ;
    }
    else if ((*param_1 == (int)param_7) &&
            (iVar1 = FUN_140df9870(*(undefined8 *)(param_1 + 2),param_6,param_7), iVar1 == 0)) {
      local_18 = 1;
    }
    if ((0 < local_18) && (param_8 != (undefined8 *)0x0)) {
      uVar3 = FUN_140d76b90(*(undefined8 *)(param_1 + 2),(longlong)*param_1);
      *param_8 = uVar3;
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=140dfbc50 name=FUN_140dfbc50 */

int FUN_140dfbc50(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
                 undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  code *local_48;
  ulonglong local_40;
  undefined8 local_28;
  
  local_54 = 0;
  local_58 = 0;
  if (param_5 == 1) {
    local_54 = 0x30;
    local_4c = 0x16;
    local_48 = (code *)&LAB_140dfb440;
  }
  else if (param_5 == 2) {
    local_54 = 0xd;
    local_4c = 0x16;
    if ((param_4 & 2) == 0) {
      local_48 = (code *)&LAB_140dfb980;
    }
    else {
      local_48 = FUN_140dfb300;
    }
  }
  else {
    local_4c = 4;
    local_48 = FUN_140dfb3d0;
  }
  lVar1 = FUN_140df85d0(param_1,0x55,0,0);
  if (lVar1 == 0) {
    if ((local_54 == 0) || ((param_4 & 0x20) != 0)) {
      local_58 = 0;
    }
    else {
      local_50 = -1;
      uVar4 = FUN_140df5f50(param_1);
      do {
        local_50 = FUN_140db98d0(uVar4,local_54,local_50);
        if (local_50 < 0) {
          return 0;
        }
        uVar5 = FUN_140db99e0(uVar4,local_50);
        uVar5 = FUN_140db9fd0(uVar5);
        local_58 = FUN_140dfba80(uVar5,0xffffffff,local_48,param_4,param_5,param_2,param_3,param_6);
      } while (local_58 == 0);
    }
  }
  else {
    for (local_40 = 0; uVar2 = FUN_140df8dd0(lVar1), local_40 < uVar2; local_40 = local_40 + 1) {
      piVar3 = (int *)FUN_140df8df0(lVar1,local_40);
      if (*piVar3 == param_5) {
        if (param_5 == 1) {
          local_28 = *(undefined8 *)(piVar3 + 2);
        }
        else if (param_5 == 2) {
          local_28 = *(undefined8 *)(piVar3 + 2);
        }
        else {
          local_28 = *(undefined8 *)(piVar3 + 2);
        }
        local_58 = FUN_140dfba80(local_28,local_4c,local_48,param_4,param_5,param_2,param_3,param_6)
        ;
        if (local_58 != 0) break;
      }
    }
    FUN_140dddd30(lVar1);
  }
  return local_58;
}


/* address=140dfbf20 name=FUN_140dfbf20 */

undefined * FUN_140dfbf20(void)

{
  return &DAT_1414109f0;
}


/* address=140dfbf30 name=FUN_140dfbf30 */

void FUN_140dfbf30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140dfbf20();
  FUN_140e78a10(*puVar1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}


/* address=140dfbf80 name=FUN_140dfbf80 */

undefined4
FUN_140dfbf80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_140dfbf30(param_1,param_2,0,&local_res18);
  return uVar1;
}


/* address=140dfbfd0 name=FUN_140dfbfd0 */

undefined8 FUN_140dfbfd0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  iVar1 = FUN_140e02c30(param_1[1],*(undefined8 *)(*param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = FUN_140e5f960(&DAT_1410ab450,param_1[1],param_1[2],*param_1,param_2);
  }
  else {
    FUN_140d186f0(0xb,0,0x89,s_D__a_1_s_target_release_build_bo_1413f33d0,CONCAT44(uVar3,0x4b));
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140dfc150 name=FUN_140dfc150 */

void FUN_140dfc150(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e3a090(*param_1 + 0x38);
  FUN_140e606a0(&DAT_1410b8a30,*(undefined8 *)(*param_1 + 8),param_1[1],param_1[2],*param_1,param_2,
                param_3);
  return;
}


/* address=140dfc4a0 name=FUN_140dfc4a0 */

undefined4
FUN_140dfc4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140dd0b50(param_1,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d1c800(local_10[0],(longlong)iVar1,param_3,param_4,param_2,0);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfc530 name=FUN_140dfc530 */

void FUN_140dfc530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140e60610(&DAT_1410b8a00,param_2,param_1,param_3,param_4);
  return;
}


/* address=140dfc620 name=FUN_140dfc620 */

undefined8 FUN_140dfc620(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140dd0a10(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfc690 name=FUN_140dfc690 */

void FUN_140dfc690(undefined8 param_1,undefined8 param_2)

{
  FUN_140e60330(&DAT_1410b8a00,param_1,param_2);
  return;
}


/* address=140dfc6f0 name=FUN_140dfc6f0 */

undefined8 FUN_140dfc6f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140ded5d0(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfc760 name=FUN_140dfc760 */

undefined8 FUN_140dfc760(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140ded4d0(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfc7d0 name=FUN_140dfc7d0 */

undefined8 FUN_140dfc7d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140dda970(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfc840 name=FUN_140dfc840 */

undefined8 FUN_140dfc840(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140ddaab0(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfc8b0 name=FUN_140dfc8b0 */

undefined8 FUN_140dfc8b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140e3ef20(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfc920 name=FUN_140dfc920 */

undefined8 FUN_140dfc920(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140ddabf0(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfc990 name=FUN_140dfc990 */

undefined8 FUN_140dfc990(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140e3b730(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfca00 name=FUN_140dfca00 */

undefined8 FUN_140dfca00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140e4fc20(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfca70 name=FUN_140dfca70 */

undefined8 FUN_140dfca70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140dede90(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfcae0 name=FUN_140dfcae0 */

undefined8 FUN_140dfcae0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140dda850(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfcbc0 name=FUN_140dfcbc0 */

undefined8 FUN_140dfcbc0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_140d15450(param_1,&local_28,local_20,0x19000);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    local_18 = local_28;
    local_10 = FUN_140dda570(param_2,&local_18,local_20[0]);
    FUN_140d762b0(local_28);
  }
  return local_10;
}


/* address=140dfcc30 name=FUN_140dfcc30 */

undefined4 FUN_140dfcc30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140dd0b50(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfcd00 name=FUN_140dfcd00 */

undefined4 FUN_140dfcd00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140ded670(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfcd70 name=FUN_140dfcd70 */

undefined4 FUN_140dfcd70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140ded570(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfcde0 name=FUN_140dfcde0 */

undefined4 FUN_140dfcde0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140dda8f0(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfce50 name=FUN_140dfce50 */

undefined4 FUN_140dfce50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140ddaa30(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfcec0 name=FUN_140dfcec0 */

undefined4 FUN_140dfcec0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140e3efc0(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfcf30 name=FUN_140dfcf30 */

undefined4 FUN_140dfcf30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140ddab70(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfcfa0 name=FUN_140dfcfa0 */

undefined4 FUN_140dfcfa0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140e3b820(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfd010 name=FUN_140dfd010 */

undefined4 FUN_140dfd010(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140e4fc60(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfd080 name=FUN_140dfd080 */

undefined4 FUN_140dfd080(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140deded0(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfd0f0 name=FUN_140dfd0f0 */

undefined4 FUN_140dfd0f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140e604b0(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfd160 name=FUN_140dfd160 */

undefined4 FUN_140dfd160(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140dda7e0(param_2,local_10);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d14ae0(param_1,local_10[0],(longlong)iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140dfdb40 name=FUN_140dfdb40 */

undefined4 FUN_140dfdb40(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140e33ed0(param_1,0);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140dfd080(lVar2,param_2);
    FUN_140d14730(lVar2);
  }
  return uVar1;
}


/* address=140dfdcf0 name=FUN_140dfdcf0 */

void FUN_140dfdcf0(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140dfdd10 name=FUN_140dfdd10 */

void FUN_140dfdd10(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140dfdd40 name=FUN_140dfdd40 */

void FUN_140dfdd40(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140dfdcc0,param_2);
  return;
}


/* address=140dfddb0 name=FUN_140dfddb0 */

void FUN_140dfddb0(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140dfddd0 name=FUN_140dfddd0 */

void FUN_140dfddd0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140dfde00 name=FUN_140dfde00 */

void FUN_140dfde00(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140dfde20 name=FUN_140dfde20 */

void FUN_140dfde20(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140dfded0 name=FUN_140dfded0 */

void FUN_140dfded0(undefined8 param_1)

{
  FUN_140d19550(param_1);
  return;
}


/* address=140dfdef0 name=FUN_140dfdef0 */

void FUN_140dfdef0(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140dfdf10 name=FUN_140dfdf10 */

void FUN_140dfdf10(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140dfdf40 name=FUN_140dfdf40 */

void FUN_140dfdf40(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140dfde50,param_2);
  return;
}


/* address=140dfdf70 name=FUN_140dfdf70 */

void FUN_140dfdf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d19c10(param_1,param_2,param_3,&LAB_140dfde80);
  return;
}


/* address=140dfdfb0 name=FUN_140dfdfb0 */

void FUN_140dfdfb0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140dfdfe0 name=FUN_140dfdfe0 */

void FUN_140dfdfe0(undefined8 param_1)

{
  FUN_140d1a0b0(param_1,&LAB_140dfde80);
  return;
}


/* address=140dfe010 name=FUN_140dfe010 */

undefined8 FUN_140dfe010(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140dfea40(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140dffbe0(param_1);
  }
  return uVar2;
}


/* address=140dfe040 name=FUN_140dfe040 */

undefined8 FUN_140dfe040(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_140dfea40(param_1);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_2 == -1) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_140dfe6d0(param_2);
    if (iVar1 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      lVar3 = FUN_140dfe600(iVar1);
      uVar2 = (**(code **)(lVar3 + 0x10))(lVar3,param_1,param_3);
    }
  }
  return uVar2;
}


/* address=140dfe0c0 name=FUN_140dfe0c0 */

undefined8 FUN_140dfe0c0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_18 [6];
  
  uVar1 = FUN_140e2ebd0(param_1);
  local_18[0] = FUN_140dba730(uVar1);
  if (local_18[0] == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_140e82a18(local_18,&DAT_1410b91e8,10,4,&LAB_140dff980);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=140dfe130 name=FUN_140dfe130 */

bool FUN_140dfe130(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_140dfe6d0(param_2);
  if (iVar1 != -1) {
    *param_1 = param_2;
  }
  else {
    FUN_140d186f0(0x14,0,0x85,s_D__a_1_s_target_release_build_bo_1413f3700,0x9c);
  }
  return iVar1 != -1;
}


/* address=140dfe190 name=FUN_140dfe190 */

int FUN_140dfe190(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_140df5f30(param_2);
  uVar3 = FUN_140df5f50(param_1);
  iVar1 = FUN_140df63d0(uVar3,uVar2);
  if (iVar1 == 0) {
    iVar1 = FUN_140dfea40(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_140dfea40(param_2), iVar1 == 0)) {
      iVar1 = 1;
    }
    else if ((*(longlong *)(param_2 + 0x48) == 0) ||
            (iVar1 = FUN_140dfe260(param_1,*(undefined8 *)(param_2 + 0x48)), iVar1 == 0)) {
      if (((*(uint *)(param_1 + 0x2c) & 2) == 0) || ((*(uint *)(param_1 + 0x30) & 4) != 0)) {
        iVar1 = 0;
      }
      else {
        iVar1 = 0x20;
      }
    }
  }
  else {
    iVar1 = 0x1d;
  }
  return iVar1;
}


/* address=140dfe260 name=FUN_140dfe260 */

undefined8 FUN_140dfe260(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong local_28;
  longlong local_20;
  
  if (param_2 != (longlong *)0x0) {
    if (((*param_2 != 0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
       (iVar2 = FUN_140e2ea00(*param_2,*(undefined8 *)(param_1 + 0x40)), iVar2 != 0)) {
      return 0x1e;
    }
    if (param_2[2] != 0) {
      uVar3 = FUN_140df6120(param_1);
      iVar2 = FUN_140dc5500(uVar3,param_2[2]);
      if (iVar2 != 0) {
        return 0x1f;
      }
    }
    if (param_2[1] != 0) {
      local_20 = 0;
      lVar1 = param_2[1];
      for (local_28 = 0; uVar4 = FUN_140dfddb0(lVar1), local_28 < uVar4; local_28 = local_28 + 1) {
        piVar5 = (int *)FUN_140dfddd0(lVar1,local_28);
        if (*piVar5 == 4) {
          local_20 = *(longlong *)(piVar5 + 2);
          break;
        }
      }
      if (local_20 != 0) {
        uVar3 = FUN_140df5f30(param_1);
        iVar2 = FUN_140df63d0(local_20,uVar3);
        if (iVar2 != 0) {
          return 0x1f;
        }
      }
    }
  }
  return 0;
}


/* address=140dfe5d0 name=FUN_140dfe5d0 */

longlong FUN_140dfe5d0(void)

{
  longlong lVar1;
  
  if (DAT_1414109f8 == 0) {
    lVar1 = 9;
  }
  else {
    lVar1 = FUN_140dfdef0(DAT_1414109f8);
    lVar1 = lVar1 + 9;
  }
  return lVar1;
}


/* address=140dfe600 name=FUN_140dfe600 */

undefined * FUN_140dfe600(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    puVar1 = (undefined *)0x0;
  }
  else if (param_1 < 9) {
    puVar1 = &DAT_1413f3550 + (longlong)param_1 * 0x30;
  }
  else {
    puVar1 = (undefined *)FUN_140dfdf10(DAT_1414109f8,(longlong)param_1 + -9);
  }
  return puVar1;
}


/* address=140dfe6d0 name=FUN_140dfe6d0 */

ulonglong FUN_140dfe6d0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_48;
  int local_40 [16];
  
  if ((param_1 < 1) || (9 < param_1)) {
    if (DAT_1414109f8 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      local_40[0] = param_1;
      iVar1 = FUN_140dfdf70(DAT_1414109f8,&local_48,local_40);
      if (iVar1 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = local_48 + 9;
      }
    }
  }
  else {
    uVar2 = (ulonglong)(param_1 - 1);
  }
  return uVar2;
}


/* address=140dfea40 name=FUN_140dfea40 */

bool FUN_140dfea40(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  int local_68;
  int local_64;
  int *local_60;
  int *local_58;
  ulonglong local_40;
  longlong local_38;
  int *local_30;
  uint local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_140d893e0(param_1 + 0x90);
  local_28 = *(uint *)(param_1 + 0x2c) & 0x100;
  FUN_140d89420(param_1 + 0x90);
  if (local_28 == 0) {
    FUN_140d89400(param_1 + 0x90);
    if ((*(uint *)(param_1 + 0x2c) & 0x100) == 0) {
      local_18 = param_1 + 0x68;
      uVar3 = FUN_140d1c070();
      iVar1 = FUN_140dfc4a0(param_1,uVar3,local_18,0);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      iVar1 = FUN_140dd1a50(param_1);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x40;
      }
      local_60 = (int *)FUN_140df85d0(param_1,0x57,&local_68,0);
      if (local_60 == (int *)0x0) {
        if (local_68 != -1) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
        }
      }
      else {
        if (*local_60 != 0) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x10;
        }
        if (*(longlong *)(local_60 + 2) == 0) {
          *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        }
        else if ((*(int *)(*(longlong *)(local_60 + 2) + 4) == 0x102) || (*local_60 == 0)) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        else {
          uVar2 = FUN_140dc5750(*(undefined8 *)(local_60 + 2));
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
        FUN_140e60b90(local_60);
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
      }
      local_58 = (int *)FUN_140df85d0(param_1,0x53,&local_68,0);
      if (local_58 == (int *)0x0) {
        if (local_68 != -1) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
        }
      }
      else {
        if (*local_58 < 1) {
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        else {
          *(uint *)(param_1 + 0x30) = (uint)**(byte **)(local_58 + 2);
          if (1 < *local_58) {
            *(uint *)(param_1 + 0x30) =
                 *(uint *)(param_1 + 0x30) | (uint)*(byte *)(*(longlong *)(local_58 + 2) + 1) << 8;
          }
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 2;
        FUN_140e2e070(local_58);
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
      local_38 = FUN_140df85d0(param_1,0x7e,&local_68,0);
      if (local_38 == 0) {
        if (local_68 != -1) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
        }
      }
      else {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 4;
        local_40 = 0;
        while (uVar4 = FUN_140dfdcf0(local_38), local_40 < uVar4) {
          uVar3 = FUN_140dfdd10(local_38,local_40);
          local_64 = FUN_140dba730(uVar3);
          if (local_64 < 0xb5) {
            if (local_64 == 0xb4) {
              *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x20;
            }
            else {
              local_64 = local_64 + -0x81;
              switch(local_64) {
              case 0:
                *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
                break;
              case 1:
                *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
                break;
              case 2:
                *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 8;
                break;
              case 3:
                *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 4;
                break;
              case 4:
                *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x40;
                break;
              case 8:
              case 10:
                *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x10;
              }
            }
          }
          else if (local_64 == 0x129) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x80;
          }
          else if (local_64 == 0x38e) {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x100;
          }
          local_40 = local_40 + 1;
        }
        FUN_140dfdd40(local_38,FUN_140ddd5a0);
      }
      local_30 = (int *)FUN_140df85d0(param_1,0x47,&local_68,0);
      if (local_30 == (int *)0x0) {
        if (local_68 != -1) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
        }
      }
      else {
        if (*local_30 < 1) {
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
        else {
          *(uint *)(param_1 + 0x38) = (uint)**(byte **)(local_30 + 2);
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 8;
        FUN_140e2e070(local_30);
      }
      uVar3 = FUN_140df85d0(param_1,0x52,&local_68,0);
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      if ((*(longlong *)(param_1 + 0x40) == 0) && (local_68 != -1)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      uVar3 = FUN_140df85d0(param_1,0x5a,&local_68,0);
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      if ((*(longlong *)(param_1 + 0x48) == 0) && (local_68 != -1)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      local_10 = FUN_140df5f30(param_1);
      uVar3 = FUN_140df5f50(param_1);
      iVar1 = FUN_140df63d0(uVar3,local_10);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x20;
        iVar1 = FUN_140dfe260(param_1,*(undefined8 *)(param_1 + 0x48));
        if ((iVar1 == 0) &&
           (((*(uint *)(param_1 + 0x2c) & 2) == 0 || ((*(uint *)(param_1 + 0x30) & 4) != 0)))) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x2000;
        }
      }
      uVar3 = FUN_140df85d0(param_1,0x55,&local_68,0);
      *(undefined8 *)(param_1 + 0x58) = uVar3;
      if ((*(longlong *)(param_1 + 0x58) == 0) && (local_68 != -1)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      uVar3 = FUN_140df85d0(param_1,0x29a,&local_68,0);
      *(undefined8 *)(param_1 + 0x60) = uVar3;
      if ((*(longlong *)(param_1 + 0x60) == 0) && (local_68 != -1)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      iVar1 = FUN_140dffb30(param_1);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      local_68 = 0;
      while (iVar1 = FUN_140df8270(param_1), local_68 < iVar1) {
        local_20 = FUN_140df8360(param_1,local_68);
        uVar3 = FUN_140e2ebd0(local_20);
        iVar1 = FUN_140dba730(uVar3);
        if (iVar1 == 0x359) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x1000;
        }
        iVar1 = FUN_140e2ec20(local_20);
        if ((iVar1 != 0) && (iVar1 = FUN_140dfe0c0(local_20), iVar1 == 0)) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x200;
          break;
        }
        local_68 = local_68 + 1;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x100;
      FUN_140d89440(param_1 + 0x90);
      bVar5 = (*(uint *)(param_1 + 0x2c) & 0x80) == 0;
    }
    else {
      FUN_140d89440(param_1 + 0x90);
      bVar5 = (*(uint *)(param_1 + 0x2c) & 0x80) == 0;
    }
  }
  else {
    bVar5 = (*(uint *)(param_1 + 0x2c) & 0x80) == 0;
  }
  return bVar5;
}


/* address=140dff4a0 name=FUN_140dff4a0 */

undefined8 FUN_140dff4a0(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (((*(uint *)(param_2 + 0x2c) & 4) == 0) || ((*(uint *)(param_2 + 0x34) & 1) != 0)) {
    if (param_3 == 0) {
      if (((*(uint *)(param_2 + 0x2c) & 8) == 0) || ((*(uint *)(param_2 + 0x38) & 0x40) != 0)) {
        if (((*(uint *)(param_2 + 0x2c) & 2) == 0) || ((*(uint *)(param_2 + 0x30) & 0xa8) != 0)) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = FUN_140dffbe0(param_2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140dff5b0 name=FUN_140dff5b0 */

ulonglong FUN_140dff5b0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  
  if (((*(uint *)(param_1 + 0x2c) & 4) == 0) || ((*(uint *)(param_1 + 0x34) & 4) != 0)) {
    if (param_2 == 0) {
      if ((*(uint *)(param_1 + 0x2c) & 8) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = (ulonglong)((*(uint *)(param_1 + 0x38) & 0x20) == 0x20);
      }
    }
    else if (((*(uint *)(param_1 + 0x2c) & 8) == 0) || ((*(uint *)(param_1 + 0x38) & 2) != 0)) {
      uVar1 = FUN_140dffbe0(param_1);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140dff910 name=FUN_140dff910 */

void FUN_140dff910(longlong param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 1) != 0)) {
    if ((*(uint *)(param_1 + 8) & 2) != 0) {
      FUN_140d762b0(*(undefined8 *)(param_1 + 0x18));
      FUN_140d762b0(*(undefined8 *)(param_1 + 0x20));
    }
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140dff9c0 name=FUN_140dff9c0 */

undefined8 FUN_140dff9c0(undefined8 param_1,int **param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong local_28;
  longlong local_20;
  
  local_20 = 0;
  if (param_2[1] == (int *)0x0) {
    *(undefined4 *)(param_2 + 3) = 0x807f;
  }
  else {
    if (0 < *param_2[1]) {
      *(uint *)(param_2 + 3) = (uint)**(byte **)(param_2[1] + 2);
    }
    if (1 < *param_2[1]) {
      *(uint *)(param_2 + 3) =
           *(uint *)(param_2 + 3) | (uint)*(byte *)(*(longlong *)(param_2[1] + 2) + 1) << 8;
    }
    *(uint *)(param_2 + 3) = *(uint *)(param_2 + 3) & 0x807f;
  }
  if ((*param_2 == (int *)0x0) || (**param_2 != 1)) {
    uVar1 = 1;
  }
  else {
    local_28 = 0;
    while( true ) {
      uVar2 = FUN_140dfddb0(param_2[2]);
      if (uVar2 <= local_28) break;
      piVar3 = (int *)FUN_140dfddd0(param_2[2],local_28);
      if (*piVar3 == 4) {
        local_20 = *(longlong *)(piVar3 + 2);
        break;
      }
      local_28 = local_28 + 1;
    }
    if (local_20 == 0) {
      local_20 = FUN_140df5f30(param_1);
    }
    uVar1 = FUN_140e388f0(*param_2,local_20);
  }
  return uVar1;
}


/* address=140dffb30 name=FUN_140dffb30 */

undefined8 FUN_140dffb30(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [2];
  ulonglong local_10;
  
  uVar2 = FUN_140df85d0(param_1,0x67,local_18,0);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  if ((*(longlong *)(param_1 + 0x50) == 0) && (local_18[0] != -1)) {
    uVar2 = 0;
  }
  else {
    local_10 = 0;
    while (uVar3 = FUN_140dfde00(*(undefined8 *)(param_1 + 0x50)), local_10 < uVar3) {
      uVar2 = FUN_140dfde20(*(undefined8 *)(param_1 + 0x50),local_10);
      iVar1 = FUN_140dff9c0(param_1,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140dffbe0 name=FUN_140dffbe0 */

undefined4 FUN_140dffbe0(longlong param_1)

{
  undefined4 local_18;
  
  if (((*(uint *)(param_1 + 0x2c) & 2) == 0) || ((*(uint *)(param_1 + 0x30) & 4) != 0)) {
    if ((*(uint *)(param_1 + 0x2c) & 0x2040) == 0x2040) {
      local_18 = 1;
    }
    else if (((*(uint *)(param_1 + 0x2c) & 1) == 0) || ((*(uint *)(param_1 + 0x2c) & 0x10) == 0)) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=140dffee0 name=FUN_140dffee0 */

void FUN_140dffee0(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140dfff00 name=FUN_140dfff00 */

void FUN_140dfff00(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140dfff60 name=FUN_140dfff60 */

void FUN_140dfff60(void)

{
  FUN_140d19610();
  return;
}


/* address=140dfff80 name=FUN_140dfff80 */

void FUN_140dfff80(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140dfffa0 name=FUN_140dfffa0 */

void FUN_140dfffa0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140dfffd0 name=FUN_140dfffd0 */

void FUN_140dfffd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140d196f0(param_1,param_2,param_3);
  return;
}


/* address=140e00010 name=FUN_140e00010 */

void FUN_140e00010(undefined8 param_1)

{
  FUN_140d19740(param_1);
  return;
}


/* address=140e00030 name=FUN_140e00030 */

void FUN_140e00030(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140dfff30,param_2);
  return;
}


/* address=140e00060 name=FUN_140e00060 */

void FUN_140e00060(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140e00090 name=FUN_140e00090 */

void FUN_140e00090(void)

{
  FUN_140e288b0(&DAT_1410b9318);
  return;
}


/* address=140e000b0 name=FUN_140e000b0 */

void FUN_140e000b0(undefined8 param_1)

{
  FUN_140e29190(param_1,&DAT_1410b9318);
  return;
}


/* address=140e000e0 name=FUN_140e000e0 */

void FUN_140e000e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140e29830(param_1,param_2,param_3,&DAT_1410b9318);
  return;
}


/* address=140e00120 name=FUN_140e00120 */

void FUN_140e00120(undefined8 param_1,undefined8 param_2)

{
  FUN_140e2bb10(param_1,param_2,&DAT_1410b9318);
  return;
}


/* address=140e00150 name=FUN_140e00150 */

void FUN_140e00150(undefined8 param_1)

{
  FUN_140e40c90(&DAT_1410b9318,param_1);
  return;
}


/* address=140e001f0 name=FUN_140e001f0 */

bool FUN_140e001f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140e00150(param_2);
  if (lVar1 != 0) {
    FUN_140e000b0(*param_1);
    *param_1 = lVar1;
  }
  return lVar1 != 0;
}


/* address=140e00250 name=FUN_140e00250 */

void FUN_140e00250(void)

{
  FUN_140e288b0(&DAT_1410b9348);
  return;
}


/* address=140e00270 name=FUN_140e00270 */

void FUN_140e00270(undefined8 param_1)

{
  FUN_140e29190(param_1,&DAT_1410b9348);
  return;
}


/* address=140e00310 name=FUN_140e00310 */

void FUN_140e00310(undefined8 param_1)

{
  FUN_140e40c90(&DAT_1410b9348,param_1);
  return;
}


/* address=140e00340 name=FUN_140e00340 */

undefined4 FUN_140e00340(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* address=140e00360 name=FUN_140e00360 */

undefined8 FUN_140e00360(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e003e0 name=FUN_140e003e0 */

void FUN_140e003e0(void)

{
  FUN_140d19610();
  return;
}


/* address=140e00400 name=FUN_140e00400 */

void FUN_140e00400(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140e00420 name=FUN_140e00420 */

void FUN_140e00420(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140e00450 name=FUN_140e00450 */

void FUN_140e00450(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19780(param_1,&LAB_140e003b0,param_2);
  return;
}


/* address=140e00480 name=FUN_140e00480 */

void FUN_140e00480(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140e00850 name=FUN_140e00850 */

undefined8 FUN_140e00850(longlong **param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_140d76180(0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_140dfff60();
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_140e1f100();
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
      FUN_140e00010(*plVar1);
    }
    FUN_140d762b0(plVar1);
  }
  return 0;
}


/* address=140e00940 name=FUN_140e00940 */

void FUN_140e00940(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    puVar1 = (undefined8 *)*param_1;
    FUN_140e1f150(puVar1[2]);
    FUN_140e00030(*puVar1,FUN_140e00270);
    if (puVar1[3] != 0) {
      FUN_140d762b0(puVar1[3]);
    }
    FUN_140d762b0(puVar1);
    *param_1 = 0;
  }
  return;
}


/* address=140e009d0 name=FUN_140e009d0 */

undefined8 FUN_140e009d0(undefined8 *param_1)

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
  lVar2 = FUN_140e003e0();
  if (lVar2 != 0) {
    for (local_30 = 0; uVar3 = FUN_140dfff80(*param_1), local_30 < uVar3; local_30 = local_30 + 1) {
      lVar4 = FUN_140dfffa0(*param_1,local_30);
      if (*(int *)(lVar4 + 0x10) != local_48) {
        local_40 = FUN_140dfff60();
        if (local_40 == 0) goto LAB_140e00b82;
        lVar5 = FUN_140e00480(lVar2,local_40);
        if (lVar5 == 0) {
          FUN_140e00010(local_40);
          goto LAB_140e00b82;
        }
        local_48 = *(int *)(lVar4 + 0x10);
      }
      lVar4 = FUN_140e00060(local_40);
      if (lVar4 == 0) goto LAB_140e00b82;
    }
    local_20 = lVar2;
    iVar1 = FUN_140e2bd30(&local_20,0,&DAT_1410b92c0,0xffffffff,0);
    if ((0 < iVar1) && (lVar4 = FUN_140e1f2b0(param_1[2],(longlong)iVar1), lVar4 != 0)) {
      local_18[0] = *(undefined8 *)(param_1[2] + 8);
      iVar1 = FUN_140e2bd30(&local_20,local_18,&DAT_1410b92c0,0xffffffff,0);
      if (0 < iVar1) {
        FUN_140e00450(lVar2,&LAB_140e010c0);
        *(undefined4 *)(param_1 + 1) = 0;
        return 1;
      }
    }
  }
LAB_140e00b82:
  FUN_140e00450(lVar2,&LAB_140e010c0);
  return 0;
}


/* address=140e00ba0 name=FUN_140e00ba0 */

undefined4 FUN_140e00ba0(undefined8 *param_1)

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
    FUN_140d762b0(param_1[3]);
    param_1[3] = 0;
  }
  lVar2 = FUN_140dfff80(*param_1);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    local_30 = 1;
  }
  else {
    lVar2 = FUN_140e003e0();
    if (lVar2 != 0) {
      local_20 = 0;
      while( true ) {
        local_48 = (undefined8 *)0x0;
        uVar3 = FUN_140dfff80(*param_1);
        if (uVar3 <= local_20) break;
        puVar4 = (undefined8 *)FUN_140dfffa0(*param_1,local_20);
        if (*(int *)(puVar4 + 2) != local_38) {
          local_28 = FUN_140dfff60();
          if (local_28 == 0) goto LAB_140e00db0;
          lVar5 = FUN_140e00480(lVar2,local_28);
          if (lVar5 == 0) {
            FUN_140e00010(local_28);
            goto LAB_140e00db0;
          }
          local_38 = *(int *)(puVar4 + 2);
        }
        local_48 = (undefined8 *)FUN_140e00250();
        if (local_48 == (undefined8 *)0x0) goto LAB_140e00db0;
        uVar6 = FUN_140dba490(*puVar4);
        *local_48 = uVar6;
        iVar1 = FUN_140e00df0(local_48[1],puVar4[1]);
        if ((iVar1 == 0) || (lVar5 = FUN_140e00060(local_28), lVar5 == 0)) goto LAB_140e00db0;
        local_20 = local_20 + 1;
      }
      iVar1 = FUN_140e01000(lVar2,0);
      if (-1 < iVar1) {
        *(int *)(param_1 + 4) = iVar1;
        local_10[0] = FUN_140d76180((longlong)*(int *)(param_1 + 4));
        if (local_10[0] != 0) {
          param_1[3] = local_10[0];
          FUN_140e01000(lVar2,local_10);
          local_30 = 1;
        }
      }
    }
LAB_140e00db0:
    if (local_48 != (undefined8 *)0x0) {
      FUN_140e00270(local_48);
    }
    if (lVar2 != 0) {
      FUN_140e00450(lVar2,&LAB_140e010e0);
    }
  }
  return local_30;
}


/* address=140e00df0 name=FUN_140e00df0 */

undefined8 FUN_140e00df0(int *param_1,longlong param_2)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_28;
  int local_24;
  undefined *local_20;
  undefined *local_18;
  
  uVar2 = FUN_140e29800(*(undefined4 *)(param_2 + 4));
  if ((uVar2 & 0x2956) == 0) {
    iVar3 = FUN_140dc31f0(param_1,param_2);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    param_1[1] = 0xc;
    iVar3 = FUN_140dc3bf0(param_1 + 2,param_2);
    *param_1 = iVar3;
    if (*param_1 == -1) {
      uVar4 = 0;
    }
    else {
      local_18 = *(undefined **)(param_1 + 2);
      local_28 = *param_1;
      while ((0 < local_28 && (iVar3 = FUN_140d768a0(*local_18), iVar3 != 0))) {
        local_18 = local_18 + 1;
        local_28 = local_28 + -1;
      }
      local_20 = local_18 + local_28;
      while ((0 < local_28 && (iVar3 = FUN_140d768a0(local_20[-1]), iVar3 != 0))) {
        local_20 = local_20 + -1;
        local_28 = local_28 + -1;
      }
      local_20 = *(undefined **)(param_1 + 2);
      local_24 = 0;
      while (local_24 < local_28) {
        iVar3 = FUN_140d768a0(*local_18);
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
            iVar3 = FUN_140d768a0(*local_18);
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


/* address=140e01000 name=FUN_140e01000 */

int FUN_140e01000(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  int local_24;
  ulonglong local_20;
  undefined8 local_10 [2];
  
  local_24 = 0;
  local_20 = 0;
  while( true ) {
    uVar2 = FUN_140dffee0(param_1);
    if (uVar2 <= local_20) {
      return local_24;
    }
    local_10[0] = FUN_140dfff00(param_1,local_20);
    iVar1 = FUN_140e2bd30(local_10,param_2,&DAT_1410b9270,0xffffffff,0);
    if (iVar1 < 0) break;
    local_24 = local_24 + iVar1;
    local_20 = local_20 + 1;
  }
  return iVar1;
}


/* address=140e01100 name=FUN_140e01100 */

void FUN_140e01100(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    FUN_140e616c0(param_1,param_2,param_3);
  }
  else {
    FUN_140e012a0(param_1,param_2,param_3,param_4);
  }
  return;
}


/* address=140e011e0 name=FUN_140e011e0 */

undefined4 FUN_140e011e0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_140d149f0(param_1,param_2,param_3), iVar1 != param_3)) {
    return 0;
  }
  return 1;
}


/* address=140e01240 name=FUN_140e01240 */

undefined8 FUN_140e01240(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 <= local_18) {
      return 1;
    }
    iVar1 = FUN_140e011e0(param_1,&DAT_1413f3890,1);
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return 0;
}


/* address=140e012a0 name=FUN_140e012a0 */

void FUN_140e012a0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  size_t sVar2;
  int local_res18;
  undefined auStack_f8 [32];
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined *local_a0;
  undefined *local_98;
  char *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  char local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_f8;
  local_c4 = -1;
  local_res18 = param_3;
  if (param_3 < 0) {
    local_res18 = 0;
  }
  local_d8 = local_res18;
  iVar1 = FUN_140e01240(param_1,local_res18);
  if (iVar1 != 0) {
    local_c8 = param_4 & 0xf0000;
    if (local_c8 == 0x10000) {
      local_98 = &DAT_1413f389c;
      local_cc = 1;
      local_a0 = &DAT_1413f38a0;
      local_d0 = 1;
      local_res18 = 0;
    }
    else if (local_c8 == 0x20000) {
      local_98 = &DAT_1413f38a4;
      local_cc = 2;
      local_a0 = &DAT_1413f38a8;
      local_d0 = 3;
      local_res18 = 0;
    }
    else if (local_c8 == 0x30000) {
      local_98 = &DAT_1413f38ac;
      local_cc = 2;
      local_a0 = &DAT_1413f38b0;
      local_d0 = 3;
      local_res18 = 0;
    }
    else {
      if (local_c8 != 0x40000) goto LAB_140e0172b;
      local_98 = &DAT_1413f3894;
      local_cc = 1;
      local_a0 = &DAT_1413f3898;
      local_d0 = 3;
    }
    if ((param_4 & 0x800000) == 0) {
      local_80 = &DAT_1413f38b8;
      local_c0 = 1;
    }
    else {
      local_80 = &DAT_1413f38b4;
      local_c0 = 3;
    }
    local_b8 = FUN_140db98a0(param_2);
    for (local_d4 = 0; local_d4 < local_b8; local_d4 = local_d4 + 1) {
      if ((param_4 & 0x100000) == 0) {
        local_a8 = FUN_140db99e0(param_2,local_d4);
      }
      else {
        local_a8 = FUN_140db99e0(param_2,(local_b8 - local_d4) + -1);
      }
      if (local_c4 != -1) {
        iVar1 = FUN_140e00340(local_a8);
        if (local_c4 == iVar1) {
          iVar1 = FUN_140e011e0(param_1,local_a0,local_d0);
          if (iVar1 == 0) break;
          local_d8 = local_d8 + local_d0;
        }
        else {
          iVar1 = FUN_140e011e0(param_1,local_98,local_cc);
          if (iVar1 == 0) break;
          local_d8 = local_d8 + local_cc;
          iVar1 = FUN_140e01240(param_1,local_res18);
          if (iVar1 == 0) break;
          local_d8 = local_d8 + local_res18;
        }
      }
      local_c4 = FUN_140e00340(local_a8);
      local_88 = FUN_140db9f20(local_a8);
      local_78 = FUN_140db9fd0(local_a8);
      if ((param_4 & 0x600000) != 0) {
        FID_conflict__assert((wchar_t *)s___1413f3990,(wchar_t *)s_D_1413f38c0,0xad);
      }
      local_bc = FUN_140dba730(local_88);
      if (local_bc == 0) {
        FUN_140dbace0(local_68,0x50,local_88,1);
        local_90 = local_68;
      }
      else {
        local_90 = (char *)FUN_140dbab60(local_bc);
      }
      sVar2 = strlen(local_90);
      local_b4 = (int)sVar2;
      iVar1 = FUN_140e011e0(param_1,local_90,sVar2 & 0xffffffff);
      if ((iVar1 == 0) || (iVar1 = FUN_140e011e0(param_1,local_80,local_c0), iVar1 == 0)) break;
      local_d8 = local_d8 + local_b4 + local_c0;
      if ((local_bc == 0) && ((param_4 & 0x1000000) != 0)) {
        local_b0 = 0x80;
      }
      else {
        local_b0 = 0;
      }
      local_ac = FUN_140dc40b0(param_1,local_78,param_4 | local_b0);
      if (local_ac < 0) break;
      local_d8 = local_d8 + local_ac;
    }
  }
LAB_140e0172b:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_f8);
  return;
}


/* address=140e01970 name=FUN_140e01970 */

undefined8 FUN_140e01970(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x20);
}


/* address=140e01990 name=FUN_140e01990 */

undefined8 FUN_140e01990(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140e37ec0(*(undefined8 *)(*param_1 + 0x28));
  }
  return uVar1;
}


/* address=140e01a00 name=FUN_140e01a00 */

undefined8 FUN_140e01a00(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(*param_1 + 0x30) != 0) && (-1 < param_2)) &&
     (uVar1 = FUN_140e02080(*(undefined8 *)(*param_1 + 0x30)), (ulonglong)(longlong)param_2 < uVar1)
     ) {
    uVar2 = FUN_140e020a0(*(undefined8 *)(*param_1 + 0x30),(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=140e01a70 name=FUN_140e01a70 */

undefined8 FUN_140e01a70(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140dbaa80(param_2);
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_140e01ac0(param_1,lVar1,param_3);
  }
  return uVar2;
}


/* address=140e01ac0 name=FUN_140e01ac0 */

int FUN_140e01ac0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int local_res18;
  
  if (*(longlong *)(*param_1 + 0x30) != 0) {
    local_res18 = param_3 + 1;
    if (local_res18 < 0) {
      local_res18 = 0;
    }
    iVar1 = FUN_140e02080(*(undefined8 *)(*param_1 + 0x30));
    for (; local_res18 < iVar1; local_res18 = local_res18 + 1) {
      puVar3 = (undefined8 *)FUN_140e020a0(*(undefined8 *)(*param_1 + 0x30),(longlong)local_res18);
      iVar2 = FUN_140dba670(*puVar3,param_2);
      if (iVar2 == 0) {
        return local_res18;
      }
    }
  }
  return -1;
}


/* address=140e01bc0 name=FUN_140e01bc0 */

undefined8 FUN_140e01bc0(longlong *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  int local_28;
  undefined8 local_10 [2];
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    local_28 = FUN_140e01a70(param_1,0xac,0xffffffff);
    if (local_28 == -1) {
      local_28 = FUN_140e01a70(param_1,0xab,0xffffffff);
    }
    if (local_28 == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_140e01a00(param_1,local_28);
      piVar2 = (int *)FUN_140e61f10(uVar1,0);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0x10)) {
        uVar1 = 0;
      }
      else {
        local_10[0] = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
        uVar1 = FUN_140e29830(0,local_10,**(undefined4 **)(piVar2 + 2),&DAT_1410b9120);
      }
    }
  }
  return uVar1;
}


/* address=140e01e70 name=FUN_140e01e70 */

undefined8
FUN_140e01e70(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_140e61a00(0,param_2,param_3,param_4,param_5);
  if ((lVar2 != 0) && (iVar1 = FUN_140e02260(param_1,lVar2), iVar1 != 0)) {
    return 1;
  }
  FUN_140e4fd10(lVar2);
  return 0;
}


/* address=140e01f70 name=FUN_140e01f70 */

undefined4 FUN_140e01f70(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_140e2bb10(param_2,local_10,&DAT_1410b9120);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140e01e70(param_1,param_3,0x10,local_10[0],iVar1);
    FUN_140d762b0(local_10[0]);
  }
  return uVar2;
}


/* address=140e01ff0 name=FUN_140e01ff0 */

void FUN_140e01ff0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e01f70(param_1,param_2,0xac);
  return;
}


/* address=140e02060 name=FUN_140e02060 */

void FUN_140e02060(void)

{
  FUN_140d19610();
  return;
}


/* address=140e02080 name=FUN_140e02080 */

void FUN_140e02080(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140e020a0 name=FUN_140e020a0 */

void FUN_140e020a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140e020d0 name=FUN_140e020d0 */

void FUN_140e020d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d199f0(param_1,param_2);
  return;
}


/* address=140e02100 name=FUN_140e02100 */

void FUN_140e02100(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140e02260 name=FUN_140e02260 */

undefined8 FUN_140e02260(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(*param_1 + 0x30) == 0) {
    uVar1 = FUN_140e02060();
    *(undefined8 *)(*param_1 + 0x30) = uVar1;
  }
  if ((*(longlong *)(*param_1 + 0x30) != 0) &&
     (lVar2 = FUN_140e02100(*(undefined8 *)(*param_1 + 0x30),param_2), lVar2 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140e02330 name=FUN_140e02330 */

void FUN_140e02330(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140e29830(param_1,param_2,param_3,&DAT_1410b9380);
  return;
}


/* address=140e02370 name=FUN_140e02370 */

void FUN_140e02370(undefined8 param_1,undefined8 param_2)

{
  FUN_140e2bb10(param_1,param_2,&DAT_1410b9380);
  return;
}


/* address=140e023c0 name=FUN_140e023c0 */

void FUN_140e023c0(void)

{
  FUN_140d19610();
  return;
}


/* address=140e02470 name=FUN_140e02470 */

void FUN_140e02470(undefined8 param_1,undefined8 param_2)

{
  FUN_140e2bb10(param_1,param_2,&DAT_1410b93b0);
  return;
}


/* address=140e02540 name=FUN_140e02540 */

char * FUN_140e02540(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    pcVar1 = &DAT_1413f3cf0;
    break;
  default:
    pcVar1 = s_unknown_certificate_verification_1413f4580;
    break;
  case 2:
    pcVar1 = s_unable_to_get_issuer_certificate_1413f3cf8;
    break;
  case 3:
    pcVar1 = s_unable_to_get_certificate_CRL_1413f3d20;
    break;
  case 4:
    pcVar1 = s_unable_to_decrypt_certificate_s_s_1413f3d40;
    break;
  case 5:
    pcVar1 = s_unable_to_decrypt_CRL_s_signatur_1413f3d70;
    break;
  case 6:
    pcVar1 = s_unable_to_decode_issuer_public_k_1413f3d98;
    break;
  case 7:
    pcVar1 = s_certificate_signature_failure_1413f3dc0;
    break;
  case 8:
    pcVar1 = s_CRL_signature_failure_1413f3de0;
    break;
  case 9:
    pcVar1 = s_certificate_is_not_yet_valid_1413f3df8;
    break;
  case 10:
    pcVar1 = s_certificate_has_expired_1413f3e30;
    break;
  case 0xb:
    pcVar1 = s_CRL_is_not_yet_valid_1413f3e18;
    break;
  case 0xc:
    pcVar1 = s_CRL_has_expired_1413f3e48;
    break;
  case 0xd:
    pcVar1 = s_format_error_in_certificate_s_no_1413f3e58;
    break;
  case 0xe:
    pcVar1 = s_format_error_in_certificate_s_no_1413f3e88;
    break;
  case 0xf:
    pcVar1 = s_format_error_in_CRL_s_lastUpdate_1413f3eb8;
    break;
  case 0x10:
    pcVar1 = s_format_error_in_CRL_s_nextUpdate_1413f3ee0;
    break;
  case 0x11:
    pcVar1 = s_out_of_memory_1413f3f08;
    break;
  case 0x12:
    pcVar1 = s_self_signed_certificate_1413f3f18;
    break;
  case 0x13:
    pcVar1 = s_self_signed_certificate_in_certi_1413f3f30;
    break;
  case 0x14:
    pcVar1 = s_unable_to_get_local_issuer_certi_1413f3f60;
    break;
  case 0x15:
    pcVar1 = s_unable_to_verify_the_first_certi_1413f3f88;
    break;
  case 0x16:
    pcVar1 = s_certificate_chain_too_long_1413f3fb0;
    break;
  case 0x17:
    pcVar1 = s_certificate_revoked_1413f3fd0;
    break;
  case 0x18:
    pcVar1 = s_invalid_CA_certificate_1413f3fe8;
    break;
  case 0x19:
    pcVar1 = s_path_length_constraint_exceeded_1413f4030;
    break;
  case 0x1a:
    pcVar1 = s_unsupported_certificate_purpose_1413f40c0;
    break;
  case 0x1b:
    pcVar1 = s_certificate_not_trusted_1413f40e0;
    break;
  case 0x1c:
    pcVar1 = s_certificate_rejected_1413f40f8;
    break;
  case 0x1d:
    pcVar1 = s_subject_issuer_mismatch_1413f4138;
    break;
  case 0x1e:
    pcVar1 = s_authority_and_subject_key_identi_1413f4150;
    break;
  case 0x1f:
    pcVar1 = s_authority_and_issuer_serial_numb_1413f4180;
    break;
  case 0x20:
    pcVar1 = s_key_usage_does_not_include_certi_1413f41b0;
    break;
  case 0x21:
    pcVar1 = s_unable_to_get_CRL_issuer_certifi_1413f41e0;
    break;
  case 0x22:
    pcVar1 = s_unhandled_critical_extension_1413f4208;
    break;
  case 0x23:
    pcVar1 = s_key_usage_does_not_include_CRL_s_1413f4228;
    break;
  case 0x24:
    pcVar1 = s_unhandled_critical_CRL_extension_1413f4280;
    break;
  case 0x25:
    pcVar1 = s_invalid_non_CA_certificate__has_C_1413f4000;
    break;
  case 0x26:
    pcVar1 = s_proxy_path_length_constraint_exc_1413f4050;
    break;
  case 0x27:
    pcVar1 = s_key_usage_does_not_include_digit_1413f4250;
    break;
  case 0x28:
    pcVar1 = s_proxy_certificates_not_allowed__p_1413f4080;
    break;
  case 0x29:
    pcVar1 = s_invalid_or_inconsistent_certific_1413f42a8;
    break;
  case 0x2a:
    pcVar1 = s_invalid_or_inconsistent_certific_1413f42d8;
    break;
  case 0x2b:
    pcVar1 = s_no_explicit_policy_1413f4310;
    break;
  case 0x2c:
    pcVar1 = s_Different_CRL_scope_1413f4328;
    break;
  case 0x2d:
    pcVar1 = s_Unsupported_extension_feature_1413f4340;
    break;
  case 0x2e:
    pcVar1 = s_RFC_3779_resource_not_subset_of_p_1413f4360;
    break;
  case 0x2f:
    pcVar1 = s_permitted_subtree_violation_1413f4398;
    break;
  case 0x30:
    pcVar1 = s_excluded_subtree_violation_1413f43b8;
    break;
  case 0x31:
    pcVar1 = s_name_constraints_minimum_and_max_1413f43d8;
    break;
  case 0x32:
    pcVar1 = s_application_verification_failure_1413f4110;
    break;
  case 0x33:
    pcVar1 = s_unsupported_name_constraint_type_1413f4410;
    break;
  case 0x34:
    pcVar1 = s_unsupported_or_invalid_name_cons_1413f4438;
    break;
  case 0x35:
    pcVar1 = s_unsupported_or_invalid_name_synt_1413f4468;
    break;
  case 0x36:
    pcVar1 = s_CRL_path_validation_error_1413f4490;
    break;
  case 0x3e:
    pcVar1 = s_Hostname_mismatch_1413f44b0;
    break;
  case 0x3f:
    pcVar1 = s_Email_address_mismatch_1413f44c8;
    break;
  case 0x40:
    pcVar1 = s_IP_address_mismatch_1413f44e0;
    break;
  case 0x41:
    pcVar1 = s_Invalid_certificate_verification_1413f44f8;
    break;
  case 0x42:
    pcVar1 = s_Issuer_certificate_lookup_error_1413f4528;
    break;
  case 0x43:
    pcVar1 = s_Issuer_has_name_constraints_but_l_1413f4548;
  }
  return pcVar1;
}


/* address=140e02940 name=FUN_140e02940 */

void FUN_140e02940(void)

{
  FUN_140e288b0(&DAT_1410b94e0);
  return;
}


/* address=140e02960 name=FUN_140e02960 */

void FUN_140e02960(undefined8 param_1)

{
  FUN_140e40c90(&DAT_1410b94e0,param_1);
  return;
}


/* address=140e02990 name=FUN_140e02990 */

void FUN_140e02990(undefined8 param_1)

{
  FUN_140e29190(param_1,&DAT_1410b94e0);
  return;
}


/* address=140e029c0 name=FUN_140e029c0 */

void FUN_140e029c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140e29830(param_1,param_2,param_3,&DAT_1410b94e0);
  return;
}


/* address=140e02a00 name=FUN_140e02a00 */

void FUN_140e02a00(undefined8 param_1,undefined8 param_2)

{
  FUN_140e2bb10(param_1,param_2,&DAT_1410b94e0);
  return;
}


/* address=140e02a30 name=FUN_140e02a30 */

undefined8 FUN_140e02a30(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_3 != -1) {
      if (param_1[1] == 0) {
        uVar1 = FUN_140e2e480();
        param_1[1] = uVar1;
      }
      if (param_1[1] == 0) {
        return 0;
      }
    }
    if (param_1 != (undefined8 *)0x0) {
      FUN_140ddd5a0(*param_1);
      *param_1 = param_2;
    }
    if (param_3 == 0) {
      uVar1 = 1;
    }
    else {
      if (param_3 == -1) {
        if (param_1[1] != 0) {
          FUN_140e2e4a0(param_1[1]);
          param_1[1] = 0;
        }
      }
      else {
        FUN_140e40da0(param_1[1],param_3,param_4);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=140e02bc0 name=FUN_140e02bc0 */

void FUN_140e02bc0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  
  uVar1 = FUN_140d1c8d0(param_2);
  if ((uVar1 & 2) == 0) {
    local_18 = 5;
  }
  else {
    local_18 = 0xffffffff;
  }
  uVar2 = FUN_140d1c8b0(param_2);
  uVar3 = FUN_140dbaa80(uVar2);
  FUN_140e02a30(param_1,uVar3,local_18,0);
  return;
}


/* address=140e02c30 name=FUN_140e02c30 */

ulonglong FUN_140e02c30(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_140dba670(*param_1,*param_2);
  if (uVar1 == 0) {
    if ((param_1[1] == 0) && (param_2[1] == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_140e40f10(param_1[1],param_2[1]);
    }
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2;
}


/* address=140e02ca0 name=FUN_140e02ca0 */

undefined4 FUN_140e02ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_10 [2];
  
  iVar1 = FUN_140d74340(param_1,local_10,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_140d27df0(local_10[0],param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140e02d10 name=FUN_140e02d10 */

char * FUN_140e02d10(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  int local_38;
  int local_34;
  char *local_20;
  
  local_38 = FUN_140d2f6a0(param_1);
  pcVar4 = (char *)FUN_140d76180((longlong)(local_38 * 0x10 + 3));
  if (pcVar4 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    local_20 = pcVar4;
    if (*(int *)(param_1 + 2) != 0) {
      *pcVar4 = '-';
      local_20 = pcVar4 + 1;
    }
    iVar2 = FUN_140d29a20(param_1);
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


/* address=140e02ea0 name=FUN_140e02ea0 */

void FUN_140e02ea0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e03b20(param_1,param_2,&LAB_140e03870,FUN_140d76730);
  return;
}


/* address=140e02ee0 name=FUN_140e02ee0 */

longlong FUN_140e02ee0(undefined8 param_1)

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
  iVar2 = FUN_140d73a80(local_38,0x10);
  if ((iVar2 != 0) && (iVar2 = FUN_140d74480(local_38,0), iVar2 != 0)) {
    iVar2 = FUN_140d29a20(param_1);
    if (iVar2 == 0) {
      local_68 = FUN_140d276f0(param_1);
      if (local_68 == 0) goto LAB_140e03138;
      while (iVar2 = FUN_140d29a20(local_68), iVar2 == 0) {
        local_60 = FUN_140d29210(local_68);
        if (local_60 == 0xffffffffffffffff) goto LAB_140e03138;
        iVar2 = FUN_140d29a20(local_68);
        local_58 = (uint)(iVar2 == 0);
        local_48 = local_58;
        local_74 = 0;
        for (; (local_74 < 0x13 && ((local_48 != 0 || (local_60 != 0)))); local_60 = local_60 / 10)
        {
          iVar2 = FUN_140d74480(local_38);
          if (iVar2 == 0) goto LAB_140e03138;
          local_74 = local_74 + 1;
        }
        if (local_60 != 0) {
          FID_conflict__assert((wchar_t *)s_w_1413f48e0,(wchar_t *)s_D_1413f4810,0x10d);
        }
      }
    }
    else {
      iVar2 = FUN_140d74480(local_38,0x30);
      if (iVar2 == 0) goto LAB_140e03138;
    }
    iVar2 = FUN_140d27a70(param_1);
    if (((iVar2 == 0) || (iVar2 = FUN_140d74480(local_38,0x2d), iVar2 != 0)) &&
       (iVar2 = FUN_140d73bb0(local_38,&local_50,&local_40), iVar2 != 0)) {
      for (local_70 = 0; local_70 < local_40 / 2; local_70 = local_70 + 1) {
        uVar1 = *(undefined *)(local_50 + local_70);
        *(undefined *)(local_50 + local_70) = *(undefined *)(local_50 + ((local_40 - 1) - local_70))
        ;
        *(undefined *)(local_50 + ((local_40 - 1) - local_70)) = uVar1;
      }
      FUN_140d27660(local_68,local_40 % 2);
      return local_50;
    }
  }
LAB_140e03138:
  FUN_140d27660(local_68);
  FUN_140d73b40(local_38);
  return 0;
}


/* address=140e03160 name=FUN_140e03160 */

void FUN_140e03160(undefined8 param_1,undefined8 param_2)

{
  FUN_140e03b20(param_1,param_2,&LAB_140e03a10,FUN_140d766f0);
  return;
}


/* address=140e03290 name=FUN_140e03290 */

undefined4 FUN_140e03290(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  int local_28;
  int local_24;
  undefined4 local_18;
  
  bVar1 = false;
  local_18 = 0;
  if (((*(int *)(param_2 + 2) == 0) || (iVar2 = FUN_140d149f0(param_1,&DAT_1413f48f4,1), iVar2 == 1)
      ) && ((iVar2 = FUN_140d29a20(param_2), iVar2 == 0 ||
            (iVar2 = FUN_140d149f0(param_1,&DAT_1413f48f8,1), iVar2 == 1)))) {
    local_28 = FUN_140d2f6a0(param_2);
    while (local_28 = local_28 + -1, -1 < local_28) {
      for (local_24 = 0x3c; -1 < local_24; local_24 = local_24 + -4) {
        uVar3 = *(ulonglong *)(*param_2 + (longlong)local_28 * 8) >> ((byte)local_24 & 0x3f);
        if ((bVar1) || ((uVar3 & 0xf) != 0)) {
          iVar2 = FUN_140d149f0(param_1,"0123456789abcdef" + (int)((uint)uVar3 & 0xf),1);
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


/* address=140e03830 name=FUN_140e03830 */

undefined8 FUN_140e03830(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e03b20 name=FUN_140e03b20 */

int FUN_140e03b20(longlong *param_1,char *param_2,code *param_3,code *param_4)

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
        local_18 = FUN_140d275e0();
        if (local_18 == 0) {
          return 0;
        }
      }
      else {
        local_18 = *param_1;
        FUN_140d27910(local_18);
      }
      iVar2 = (*param_3)(local_18,local_res10,local_28);
      if (iVar2 == 0) {
        if (*param_1 == 0) {
          FUN_140d27660(local_18);
        }
        iVar1 = 0;
      }
      else {
        FUN_140d2f6f0(local_18);
        iVar2 = FUN_140d29a20(local_18);
        if (iVar2 == 0) {
          *(uint *)(local_18 + 0x10) = local_24;
        }
        *param_1 = local_18;
      }
    }
  }
  return iVar1;
}


/* address=140e03ec0 name=FUN_140e03ec0 */

void FUN_140e03ec0(void)

{
  return;
}


/* address=140e03f30 name=FUN_140e03f30 */

undefined8 FUN_140e03f30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e03f80 name=FUN_140e03f80 */

undefined8 FUN_140e03f80(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e03fc0 name=FUN_140e03fc0 */

undefined * FUN_140e03fc0(DWORD param_1)

{
  FormatMessageA(0x12ff,(LPCVOID)0x0,param_1,0x400,&DAT_141410a00,0x400,(va_list *)0x0);
  return &DAT_141410a00;
}


/* address=140e04010 name=FUN_140e04010 */

void FUN_140e04010(PVOID param_1,ulonglong param_2)

{
  BOOLEAN BVar1;
  PVOID local_res8;
  ulonglong local_res10;
  uint local_18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  while( true ) {
    if (local_res10 == 0) {
      return;
    }
    local_18 = 0xffffffff;
    if (local_res10 < 0xffffffff) {
      local_18 = (uint)local_res10;
    }
    BVar1 = SystemFunction036(local_res8,local_18);
    if (BVar1 == '\0') break;
    local_res10 = local_res10 - local_18;
    local_res8 = (PVOID)((longlong)local_res8 + (ulonglong)local_18);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=140e040a0 name=FUN_140e040a0 */

void FUN_140e040a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e04010(param_1,param_2);
  return;
}


/* address=140e040d0 name=FUN_140e040d0 */

undefined4 FUN_140e040d0(void)

{
  undefined4 uVar1;
  
  FUN_140d89470(&DAT_141410e10);
  uVar1 = DAT_141410e08;
  FUN_140d894d0(&DAT_141410e10);
  return uVar1;
}


/* address=140e04100 name=FUN_140e04100 */

undefined8 FUN_140e04100(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    FUN_140d186f0(6,0,0x43,s_D__a_1_s_target_release_build_bo_1413f4ac0,0x75);
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar1 == 0) {
      FUN_140d186f0(6,0,0x80,s_D__a_1_s_target_release_build_bo_1413f4b30,0x7b);
      FUN_140d18860(s_algorithm__d_1413f4b98,**(undefined4 **)(param_1 + 0x10));
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_140e05320(param_1,param_2,lVar1);
    }
  }
  return uVar2;
}


/* address=140e04240 name=FUN_140e04240 */

void FUN_140e04240(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x18) != 0)) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    FUN_140d709a0(param_1[2]);
    FUN_140d709a0(param_1[3]);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140e04400 name=FUN_140e04400 */

undefined8 FUN_140e04400(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=140e04420 name=FUN_140e04420 */

undefined8 FUN_140e04420(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
     ((*(longlong *)(*param_1 + 0x28) == 0 && (*(longlong *)(*param_1 + 0x30) == 0)))) {
    FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413f4e60,0xdb);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 8;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140e044a0 name=FUN_140e044a0 */

undefined8
FUN_140e044a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x28) == 0)) {
    FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413f4ed0,0xe6);
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 8) {
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_140d186f0(6,0,0x7e,s_D__a_1_s_target_release_build_bo_1413f4f40,0xea);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140e04570 name=FUN_140e04570 */

undefined8 FUN_140e04570(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) ||
     ((*(longlong *)(*param_1 + 0x38) == 0 && (*(longlong *)(*param_1 + 0x40) == 0)))) {
    FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413f4fb0,0xf3);
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0x10;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140e045f0 name=FUN_140e045f0 */

undefined8
FUN_140e045f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x38) == 0)) {
    FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413f5020,0xfd);
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 4) == 0x10) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_140d186f0(6,0,0x7e,s_D__a_1_s_target_release_build_bo_1413f5090,0x101);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140e05140 name=FUN_140e05140 */

undefined8 FUN_140e05140(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e05180 name=FUN_140e05180 */

undefined8
FUN_140e05180(int **param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  
  if (((param_1 == (int **)0x0) || (*param_1 == (int *)0x0)) ||
     (*(longlong *)(*param_1 + 0x1c) == 0)) {
    FUN_140d186f0(6,0,0x65,s_D__a_1_s_target_release_build_bo_1413f4ca0,0xc3);
    uVar1 = 0;
  }
  else if ((param_2 == -1) || (**param_1 == param_2)) {
    if (*(int *)(param_1 + 4) == 0) {
      FUN_140d186f0(6,0,0x7b,s_D__a_1_s_target_release_build_bo_1413f4d80,0xcc);
      uVar1 = 0;
    }
    else if ((param_3 == 0xffffffff) || ((*(uint *)(param_1 + 4) & param_3) != 0)) {
      uVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_4,param_5,param_6);
    }
    else {
      FUN_140d186f0(6,0,0x72,s_D__a_1_s_target_release_build_bo_1413f4df0,0xd1);
      uVar1 = 0;
    }
  }
  else {
    FUN_140d186f0(6,0,0x7d,s_D__a_1_s_target_release_build_bo_1413f4d10,199);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140e052c0 name=FUN_140e052c0 */

undefined * FUN_140e052c0(int param_1)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (4 < local_18) {
      return (undefined *)0x0;
    }
    if (*(int *)(&PTR_DAT_1410be3c0)[local_18] == param_1) break;
    local_18 = local_18 + 1;
  }
  return (&PTR_DAT_1410be3c0)[local_18];
}


/* address=140e05320 name=FUN_140e05320 */

longlong * FUN_140e05320(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140d76180(0x30);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_140e05140(plVar2,0,0x30);
    plVar2[1] = param_2;
    *plVar2 = param_3;
    *(undefined4 *)(plVar2 + 4) = 0;
    if (param_1 != 0) {
      FUN_140d709f0(param_1);
      plVar2[2] = param_1;
    }
    if ((*(longlong *)(param_3 + 8) != 0) && (iVar1 = (**(code **)(param_3 + 8))(plVar2), iVar1 < 1)
       ) {
      FUN_140d709a0(plVar2[2]);
      FUN_140d762b0(plVar2);
      plVar2 = (longlong *)0x0;
    }
  }
  return plVar2;
}


/* address=140e054b0 name=FUN_140e054b0 */

undefined8 FUN_140e054b0(undefined8 *param_1)

{
  return *param_1;
}


/* address=140e05510 name=FUN_140e05510 */

undefined8 FUN_140e05510(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=140e05530 name=FUN_140e05530 */

int FUN_140e05530(longlong param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 4);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s___1413f5cc0,(wchar_t *)s_D_1413f5bf0,0x57);
    iVar1 = 0;
  }
  return iVar1;
}


/* address=140e05570 name=FUN_140e05570 */

int FUN_140e05570(longlong param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(param_1 + 4);
    if (iVar1 == 0) {
      FID_conflict__assert((wchar_t *)s_m_1413f5e08,(wchar_t *)s_D_1413f5d40,0x60);
      iVar1 = 0;
    }
  }
  return iVar1;
}


/* address=140e055c0 name=FUN_140e055c0 */

undefined8 FUN_140e055c0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e05600 name=FUN_140e05600 */

undefined8 FUN_140e05600(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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


/* address=140e05da0 name=FUN_140e05da0 */

bool FUN_140e05da0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140d276f0(param_2);
  if (lVar1 != 0) {
    FUN_140d27660(*param_1);
    *param_1 = lVar1;
  }
  return lVar1 != 0;
}


/* address=140e06f40 name=FUN_140e06f40 */

int FUN_140e06f40(void *param_1,void *param_2,size_t param_3)

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


/* address=140e06f80 name=FUN_140e06f80 */

undefined8 FUN_140e06f80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e06fd0 name=FUN_140e06fd0 */

void FUN_140e06fd0(longlong param_1)

{
  FUN_140d762b0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* address=140e07000 name=FUN_140e07000 */

void FUN_140e07000(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  undefined local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_68;
  if (param_3 == 0x20) {
    local_38 = FUN_140d76180(0x41);
    if (local_38 != 0) {
      FUN_140e0ba80(local_30,local_38,param_2);
      *(undefined *)(local_38 + 0x40) = 1;
      FUN_140e06fd0(param_1);
      *(longlong *)(param_1 + 8) = local_38;
    }
  }
  else {
    local_48 = 0x21;
    FUN_140d186f0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413f6920);
  }
  FUN_140e28050(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=140e070d0 name=FUN_140e070d0 */

undefined8 FUN_140e070d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x20) {
    lVar1 = FUN_140d76180(0x41);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_140e06f80(lVar1 + 0x20,param_2,0x20);
      *(undefined *)(lVar1 + 0x40) = 0;
      FUN_140e06fd0(param_1);
      *(longlong *)(param_1 + 8) = lVar1;
      uVar2 = 1;
    }
  }
  else {
    FUN_140d186f0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413f6990,0x37);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140e077b0 name=FUN_140e077b0 */

int FUN_140e077b0(void *param_1,void *param_2,size_t param_3)

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


/* address=140e077f0 name=FUN_140e077f0 */

undefined8 FUN_140e077f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e07840 name=FUN_140e07840 */

void FUN_140e07840(longlong param_1)

{
  FUN_140d762b0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* address=140e07870 name=FUN_140e07870 */

undefined8 FUN_140e07870(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x20) {
    lVar1 = FUN_140d76180(0x41);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_140e077f0(lVar1 + 0x20,param_2,0x20);
      FUN_140e0b430(lVar1,lVar1 + 0x20);
      *(undefined *)(lVar1 + 0x40) = 1;
      FUN_140e07840(param_1);
      *(longlong *)(param_1 + 8) = lVar1;
      uVar2 = 1;
    }
  }
  else {
    FUN_140d186f0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413f6d80,0x21);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140e07930 name=FUN_140e07930 */

undefined8 FUN_140e07930(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0x20) {
    lVar1 = FUN_140d76180(0x41);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_140e077f0(lVar1,param_2,0x20);
      *(undefined *)(lVar1 + 0x40) = 0;
      FUN_140e07840(param_1);
      *(longlong *)(param_1 + 8) = lVar1;
      uVar2 = 1;
    }
  }
  else {
    FUN_140d186f0(6,0,0x66,s_D__a_1_s_target_release_build_bo_1413f6df0,0x35);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140e080e0 name=FUN_140e080e0 */

bool FUN_140e080e0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_140e9a3c0(param_2,0,0x24);
  iVar1 = FUN_140e08960(param_1,param_2 + 0x14,param_2 + 0x10,param_2 + 0xc,param_2 + 8,param_2 + 4,
                        param_2);
  if (iVar1 != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -0x76c;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  }
  return iVar1 != 0;
}


/* address=140e081a0 name=FUN_140e081a0 */

void FUN_140e081a0(undefined4 *param_1,undefined8 param_2)

{
  FUN_140e08780(param_1[5] + 0x76c,param_1[4] + 1,param_1[3],param_1[2],param_1[1],*param_1,param_2)
  ;
  return;
}


/* address=140e08260 name=FUN_140e08260 */

/* WARNING: Removing unreachable block (ram,0x000140e0828b) */

bool FUN_140e08260(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 local_18 [3];
  
  iVar1 = FUN_140e081a0(param_1,local_18);
  if (iVar1 != 0) {
    *param_2 = local_18[0];
  }
  return iVar1 != 0;
}


/* address=140e082b0 name=FUN_140e082b0 */

undefined8 FUN_140e082b0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined4 *local_10;
  
  iVar1 = FUN_140e08780(param_1[5] + 0x76c,param_1[4] + 1,param_1[3],param_1[2],param_1[1],*param_1,
                        &local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_10 = param_1 + 4;
    iVar1 = FUN_140e08960(local_18 + (longlong)param_2 * 0x15180 + (longlong)param_3,param_1 + 5,
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


/* address=140e083e0 name=FUN_140e083e0 */

undefined8
FUN_140e083e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_20;
  longlong local_18;
  longlong local_10 [2];
  
  iVar1 = FUN_140e08780(param_4[5] + 0x76c,param_4[4] + 1,param_4[3],param_4[2],param_4[1],*param_4,
                        local_10);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_140e08780(param_3[5] + 0x76c,param_3[4] + 1,param_3[3],param_3[2],param_3[1],
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


/* address=140e08560 name=FUN_140e08560 */

undefined4 FUN_140e08560(int param_1,int param_2,int param_3)

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


/* address=140e086e0 name=FUN_140e086e0 */

undefined8 FUN_140e086e0(int param_1,int param_2,int param_3)

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


/* address=140e08730 name=FUN_140e08730 */

undefined4 FUN_140e08730(longlong param_1)

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


/* address=140e08780 name=FUN_140e08780 */

undefined8
FUN_140e08780(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  int local_res8;
  int local_48;
  int local_44;
  
  iVar1 = FUN_140e08560(param_1,param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_140e086e0(param_4,param_5,param_6), iVar1 != 0)) {
    local_res8 = param_1;
    if (param_2 < 3) {
      local_res8 = param_1 + -1;
    }
    if ((local_res8 < -1) || (9999 < local_res8)) {
      FID_conflict__assert((wchar_t *)s___1413f7320,(wchar_t *)s_D_1413f7250,0x5c);
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


/* address=140e08960 name=FUN_140e08960 */

undefined8
FUN_140e08960(longlong param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
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
  
  iVar1 = FUN_140e08730(param_1);
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
      FID_conflict__assert((wchar_t *)s___1413f7430,(wchar_t *)s_D_1413f7360,0x7a);
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


/* address=140e08c70 name=FUN_140e08c70 */

void FUN_140e08c70(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  longlong local_res10;
  ulonglong local_res18;
  undefined auStack_78 [32];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  undefined local_20 [7];
  undefined uStack_19;
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_78;
  local_40 = *param_1 ^ 0x736f6d6570736575;
  uStack_38 = param_1[1] ^ 0x646f72616e646f6d;
  uStack_30 = *param_1 ^ 0x6c7967656e657261;
  uStack_28 = param_1[1] ^ 0x7465646279746573;
  local_res10 = param_2;
  local_48 = param_3;
  for (local_res18 = param_3; 7 < local_res18; local_res18 = local_res18 - 8) {
    local_58 = FUN_140e08ff0(local_res10);
    uStack_28 = uStack_28 ^ local_58;
    FUN_140e09040(&local_40);
    FUN_140e09040(&local_40);
    local_40 = local_40 ^ local_58;
    local_res10 = local_res10 + 8;
  }
  FUN_140e08fb0(local_20,0,8);
  FUN_140e08f60(local_20,local_res10,local_res18);
  uStack_19 = (undefined)local_48;
  local_50 = FUN_140e08ff0(local_20);
  uStack_28 = uStack_28 ^ local_50;
  FUN_140e09040(&local_40);
  FUN_140e09040(&local_40);
  local_40 = local_40 ^ local_50;
  uStack_30 = uStack_30 ^ 0xff;
  FUN_140e09040(&local_40);
  FUN_140e09040(&local_40);
  FUN_140e09040(&local_40);
  FUN_140e09040(&local_40);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=140e08f60 name=FUN_140e08f60 */

undefined8 FUN_140e08f60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e08fb0 name=FUN_140e08fb0 */

undefined8 FUN_140e08fb0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e08ff0 name=FUN_140e08ff0 */

undefined8 FUN_140e08ff0(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_140e08f60(local_18,param_1,8);
  return local_18[0];
}


/* address=140e09020 name=FUN_140e09020 */

ulonglong FUN_140e09020(ulonglong param_1,byte param_2)

{
  return param_1 << (param_2 & 0x3f) | param_1 >> 0x40 - (param_2 & 0x3f);
}


/* address=140e09040 name=FUN_140e09040 */

void FUN_140e09040(ulonglong *param_1)

{
  ulonglong uVar1;
  
  *param_1 = *param_1 + param_1[1];
  param_1[2] = param_1[2] + param_1[3];
  uVar1 = FUN_140e09020(param_1[1],0xd);
  param_1[1] = uVar1;
  uVar1 = FUN_140e09020(param_1[3],0x10);
  param_1[3] = uVar1;
  param_1[1] = param_1[1] ^ *param_1;
  param_1[3] = param_1[3] ^ param_1[2];
  uVar1 = FUN_140e09020(*param_1,0x20);
  *param_1 = uVar1;
  param_1[2] = param_1[2] + param_1[1];
  *param_1 = *param_1 + param_1[3];
  uVar1 = FUN_140e09020(param_1[1],0x11);
  param_1[1] = uVar1;
  uVar1 = FUN_140e09020(param_1[3],0x15);
  param_1[3] = uVar1;
  param_1[1] = param_1[1] ^ param_1[2];
  param_1[3] = param_1[3] ^ *param_1;
  uVar1 = FUN_140e09020(param_1[2],0x20);
  param_1[2] = uVar1;
  return;
}


/* address=140e09320 name=FUN_140e09320 */

void FUN_140e09320(void)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  ulonglong local_20;
  longlong local_18;
  longlong local_10;
  
  FUN_140e09740(&local_60,&local_5c,&local_68,&local_64,0);
  local_3c = local_60;
  if (((local_5c == 0x756e6547) && (local_64 == 0x49656e69)) && (local_68 == 0x6c65746e)) {
    local_48 = 1;
  }
  else {
    local_48 = 0;
  }
  local_28 = local_48;
  if (((local_5c == 0x68747541) && (local_64 == 0x69746e65)) && (local_68 == 0x444d4163)) {
    local_44 = 1;
  }
  else {
    local_44 = 0;
  }
  local_38 = local_44;
  puVar4 = &local_58;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined *)puVar4 = 0;
    puVar4 = (uint *)((longlong)puVar4 + 1);
  }
  if (6 < local_3c) {
    FUN_140e09740(&local_60,&local_5c,&local_68,&local_64,7);
    local_58 = local_5c;
    uStack_54 = local_68;
  }
  FUN_140e09740(&local_60,&local_5c,&local_68,&local_64,1);
  if (local_38 != 0) {
    local_40 = local_60 >> 8 & 0xf;
    local_34 = local_60 >> 4 & 0xf;
    local_50 = local_40;
    local_4c = local_34;
    if (local_40 == 0xf) {
      local_30 = local_60 >> 0x14 & 0xff;
      local_50 = local_30 + 0xf;
      local_2c = local_60 >> 0x10 & 0xf;
      local_4c = local_34 | local_2c << 4;
    }
    if ((local_50 < 0x17) || (((local_50 == 0x17 && (0x6f < local_4c)) && (local_4c < 0x80)))) {
      local_68 = local_68 & 0xbfffffff;
    }
  }
  if (local_28 == 0) {
    local_64 = local_64 & 0xbfefffff | 0x10000000;
  }
  else {
    local_64 = local_64 & 0xffefffff | 0x50000000;
    if (((local_60 & 0xfff0ff0) == 0x50670) || ((local_60 & 0xfff0ff0) == 0x80650)) {
      local_68 = local_68 & 0xfbffffff;
    }
  }
  uVar1 = local_68 & 0xfffff7ff;
  local_20 = 0;
  uVar2 = local_68 & 0x8000000;
  local_68 = uVar1;
  if (uVar2 != 0) {
    local_20 = FUN_140e097f0(0);
  }
  if ((local_20 & 6) != 6) {
    local_68 = local_68 & 0xefffe7ff;
    local_58 = local_58 & 0x3fdeffdf;
  }
  if ((local_20 & 0xe6) != 0xe6) {
    local_58 = local_58 & 0xfffeffff;
  }
  if ((local_68 & 0x4000000) == 0) {
    local_58 = local_58 & 0xfff7ffff;
  }
  DAT_141410910 = local_64;
  DAT_141410914 = local_68;
  DAT_141410918._0_4_ = local_58;
  DAT_141410918._4_4_ = uStack_54;
  local_18 = common_getenv<>(s_OPENSSL_ia32cap_1413f7480);
  if (local_18 != 0) {
    FUN_140e09810(&DAT_141410910,local_18);
    local_10 = FUN_140e73100(local_18,0x3a);
    if (local_10 != 0) {
      FUN_140e09810(&DAT_141410918,local_10 + 1);
    }
  }
  return;
}


/* address=140e09740 name=FUN_140e09740 */

void FUN_140e09740(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  int param_5)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)&local_28;
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
  local_28 = *puVar1;
  local_24 = puVar1[1];
  local_1c = puVar1[2];
  local_20 = puVar1[3];
  *param_1 = local_28;
  *param_2 = local_24;
  *param_3 = local_20;
  *param_4 = local_1c;
  FUN_140e28050(local_18 ^ (ulonglong)&local_28);
  return;
}


/* address=140e097f0 name=FUN_140e097f0 */

ulonglong FUN_140e097f0(void)

{
  undefined8 in_RAX;
  undefined4 in_XCR0;
  uint in_register_00000604;
  
  return (ulonglong)in_register_00000604 << 0x20 |
         CONCAT44((int)((ulonglong)in_RAX >> 0x20),in_XCR0);
}


/* address=140e09810 name=FUN_140e09810 */

void FUN_140e09810(uint *param_1,char *param_2)

{
  uint uVar1;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_28 = (uint)(*param_2 == '~');
  uVar1 = local_28;
  local_24 = (uint)(*param_2 == '|');
  local_10 = local_24;
  if ((local_28 == 0) && (local_24 == 0)) {
    local_20 = 0;
  }
  else {
    local_20 = 1;
  }
  local_1c = local_20;
  if ((param_2[local_20] == '0') && (param_2[local_20 + 1] == 'x')) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  local_c = local_18;
  if (local_18 == 0) {
    local_14 = FUN_140dfbf80(param_2 + (int)local_28,&DAT_1413f7478,&local_30);
  }
  else {
    local_14 = FUN_140dfbf80(param_2 + (longlong)(int)local_28 + 2,&DAT_1413f7470,&local_30);
  }
  if (local_14 != 0) {
    if (uVar1 == 0) {
      if (local_10 == 0) {
        *param_1 = local_30;
        param_1[1] = uStack_2c;
      }
      else {
        *param_1 = *param_1 | local_30;
        param_1[1] = param_1[1] | uStack_2c;
      }
    }
    else {
      *param_1 = *param_1 & ~local_30;
      param_1[1] = param_1[1] & ~uStack_2c;
    }
  }
  return;
}


/* address=140e09a50 name=FUN_140e09a50 */

undefined4
FUN_140e09a50(longlong param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4,
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
  int local_30;
  undefined4 local_2c;
  longlong local_20;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
    FUN_140d186f0(4,0,0x90,s_D__a_1_s_target_release_build_bo_1413f7a40,0x17c);
    return 0;
  }
  iVar1 = FUN_140d6cce0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_140d535c0(param_1);
  local_20 = 0;
  local_2c = 0;
  if (param_4 < uVar2) {
    FUN_140d186f0(4,0,0x87,s_D__a_1_s_target_release_build_bo_1413f7ab0,CONCAT44(uVar7,0x18b));
    return 0;
  }
  lVar3 = FUN_140d27f30();
  if (lVar3 != 0) {
    FUN_140d28030(lVar3);
    lVar4 = FUN_140d28090(lVar3);
    lVar5 = FUN_140d28090(lVar3);
    local_20 = FUN_140d76180(uVar2);
    if (((lVar4 != 0) && (lVar5 != 0)) && (local_20 != 0)) {
      if (param_7 == 1) {
        local_30 = FUN_140e0ad20(local_20,uVar2,param_5,param_6);
      }
      else if (param_7 == 3) {
        local_30 = FUN_140d6cc40(local_20,uVar2,param_5,param_6);
      }
      else {
        if (param_7 != 4) {
          FUN_140d186f0(4,0,0x8f,s_D__a_1_s_target_release_build_bo_1413f7b20,CONCAT44(uVar7,0x1a9))
          ;
          goto LAB_140e09dbf;
        }
        uVar7 = 0;
        local_30 = FUN_140e0a170(local_20,uVar2,param_5,param_6,0,0,0,0);
      }
      if ((0 < local_30) && (lVar6 = FUN_140d27ab0(local_20,uVar2,lVar4), lVar6 != 0)) {
        iVar1 = FUN_140d29780(lVar4,*(undefined8 *)(param_1 + 8));
        if (iVar1 < 0) {
          iVar1 = FUN_140d3f3e0(param_1 + 0x60,param_1 + 0x58,*(undefined8 *)(param_1 + 8),lVar3);
          if (iVar1 != 0) {
            lVar6 = lVar3;
            iVar1 = FUN_140d2dba0(lVar5,lVar4,*(undefined8 *)(param_1 + 0x10),
                                  *(longlong *)(param_1 + 0x60) + 0x18,lVar3,
                                  *(undefined8 *)(param_1 + 0x60));
            uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
            if (iVar1 != 0) {
              iVar1 = FUN_140d27df0(param_3,uVar2,lVar5);
              if (iVar1 == 0) {
                FUN_140d186f0(4,0,0x44,s_D__a_1_s_target_release_build_bo_1413f7c00,
                              CONCAT44(uVar7,0x1c3));
              }
              else {
                *param_2 = (ulonglong)uVar2;
                local_2c = 1;
              }
            }
          }
        }
        else {
          FUN_140d186f0(4,0,0x73,s_D__a_1_s_target_release_build_bo_1413f7b90,CONCAT44(uVar7,0x1b7))
          ;
        }
      }
    }
  }
LAB_140e09dbf:
  if (lVar3 != 0) {
    FUN_140d281e0(lVar3);
    FUN_140d27fa0(lVar3);
  }
  FUN_140d762b0(local_20);
  return local_2c;
}


/* address=140e09e00 name=FUN_140e09e00 */

void FUN_140e09e00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  if (*(longlong *)(*param_1 + 0x38) == 0) {
    FUN_140e0b0d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


/* address=140e0a170 name=FUN_140e0a170 */

void FUN_140e0a170(undefined *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,longlong param_8)

{
  int iVar1;
  undefined auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined *local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined *local_60;
  byte local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_c8;
  if (param_7 == 0) {
    param_7 = FUN_140d1c010();
  }
  if (param_8 == 0) {
    param_8 = param_7;
  }
  local_98 = FUN_140d1c8f0(param_7);
  if (param_2 < local_98 * 2 + 2) {
    local_a8 = CONCAT44(local_a8._4_4_,0x62);
    FUN_140d186f0(4,0,0x7e,s_D__a_1_s_target_release_build_bo_1413f7490);
  }
  else {
    local_90 = param_2 - 1;
    if ((local_90 + local_98 * -2) - 1 < param_4) {
      local_a8 = CONCAT44(local_a8._4_4_,0x68);
      FUN_140d186f0(4,0,0x72,s_D__a_1_s_target_release_build_bo_1413f7500);
    }
    else if (local_90 < local_98 * 2 + 1) {
      local_a8 = CONCAT44(local_a8._4_4_,0x6d);
      FUN_140d186f0(4,0,0x7e,s_D__a_1_s_target_release_build_bo_1413f7570);
    }
    else {
      *param_1 = 0;
      local_60 = param_1 + 1;
      local_88 = param_1 + local_98 + 1;
      local_68 = 0;
      local_70 = 0;
      local_a0 = 0;
      local_a8 = param_7;
      iVar1 = FUN_140d1c800(param_5,param_6,local_88,0);
      if (iVar1 != 0) {
        FUN_140e0a780(local_88 + local_98,0,(local_90 - param_4) + local_98 * -2 + -1);
        local_88[((local_90 - param_4) - local_98) + -1] = 1;
        FUN_140e0a730(local_88 + ((local_90 - param_4) - local_98),param_3,param_4);
        iVar1 = FUN_140d459b0(local_60,local_98);
        if ((iVar1 != 0) && (local_68 = FUN_140d76180(local_90 - local_98), local_68 != 0)) {
          local_a8 = param_8;
          iVar1 = FUN_140d6c6f0(local_68,local_90 - local_98,local_60,local_98);
          if (iVar1 != 0) {
            for (local_80 = 0; local_80 < local_90 - local_98; local_80 = local_80 + 1) {
              local_88[local_80] = local_88[local_80] ^ *(byte *)(local_68 + local_80);
            }
            local_a8 = param_8;
            iVar1 = FUN_140d6c6f0(local_58,local_98,local_88,local_90 - local_98);
            if (iVar1 != 0) {
              for (local_78 = 0; local_78 < local_98; local_78 = local_78 + 1) {
                local_60[local_78] = local_60[local_78] ^ local_58[local_78];
              }
              local_70 = 1;
            }
          }
        }
      }
      FUN_140d762b0(local_68);
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=140e0a580 name=FUN_140e0a580 */

undefined8 FUN_140e0a580(undefined8 param_1)

{
  return param_1;
}


/* address=140e0a5a0 name=FUN_140e0a5a0 */

longlong FUN_140e0a5a0(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=140e0a5c0 name=FUN_140e0a5c0 */

void FUN_140e0a5c0(ulonglong param_1,ulonglong param_2)

{
  FUN_140e0a5a0(param_1 ^ (param_1 ^ param_2 | param_1 - param_2 ^ param_1));
  return;
}


/* address=140e0a620 name=FUN_140e0a620 */

ulonglong FUN_140e0a620(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140e0a5c0(param_1,param_2);
  return ~uVar1;
}


/* address=140e0a650 name=FUN_140e0a650 */

void FUN_140e0a650(ulonglong param_1)

{
  FUN_140e0a5a0(~param_1 & param_1 - 1);
  return;
}


/* address=140e0a680 name=FUN_140e0a680 */

void FUN_140e0a680(ulonglong param_1,ulonglong param_2)

{
  FUN_140e0a650(param_1 ^ param_2);
  return;
}


/* address=140e0a6c0 name=FUN_140e0a6c0 */

ulonglong FUN_140e0a6c0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_140e0a580(param_1);
  uVar2 = FUN_140e0a580(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=140e0a710 name=FUN_140e0a710 */

void FUN_140e0a710(undefined8 param_1)

{
  FUN_140e0a580(param_1);
  return;
}


/* address=140e0a730 name=FUN_140e0a730 */

undefined8 FUN_140e0a730(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e0a780 name=FUN_140e0a780 */

undefined8 FUN_140e0a780(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e0a7c0 name=FUN_140e0a7c0 */

void FUN_140e0a7c0(undefined8 param_1,ulonglong *param_2,ulonglong param_3,undefined *param_4,
                  ulonglong param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  longlong param_9)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined *local_b8;
  ulonglong local_b0;
  undefined *local_a8;
  ulonglong local_a0;
  byte local_98 [64];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_138;
  local_108 = 0;
  if (param_8 == 0) {
    param_8 = FUN_140d1c010();
  }
  if (param_9 == 0) {
    param_9 = param_8;
  }
  local_100 = FUN_140d1c8f0(param_8);
  if (param_5 < local_100 * 2 + 2) {
LAB_140e0ac3b:
    local_118 = CONCAT44(local_118._4_4_,0xfb);
    FUN_140d186f0(4,0,0x85,s_D__a_1_s_target_release_build_bo_1413f7650);
  }
  else {
    local_d0 = (param_5 - local_100) - 1;
    local_108 = FUN_140d76180(local_d0);
    if (local_108 != 0) {
      local_a8 = param_4 + 1;
      local_b8 = param_4 + local_100 + 1;
      local_118 = param_9;
      iVar1 = FUN_140d6c6f0(local_98,local_100,local_b8,local_d0);
      if (iVar1 != 0) {
        for (local_e8 = 0; local_e8 < local_100; local_e8 = local_e8 + 1) {
          local_98[local_e8] = local_98[local_e8] ^ local_a8[local_e8];
        }
        local_118 = param_9;
        iVar1 = FUN_140d6c6f0(local_108,local_d0,local_98,local_100);
        if (iVar1 != 0) {
          for (local_e0 = 0; local_e0 < local_d0; local_e0 = local_e0 + 1) {
            *(byte *)(local_108 + local_e0) = *(byte *)(local_108 + local_e0) ^ local_b8[local_e0];
          }
          local_110 = 0;
          local_118 = param_8;
          iVar1 = FUN_140d1c800(param_6,param_7,local_58,0);
          if (iVar1 != 0) {
            iVar1 = FUN_140d76480(local_108,local_58,local_100);
            local_f0 = FUN_140e0a650((longlong)iVar1);
            local_f0 = ~local_f0;
            uVar2 = FUN_140e0a650(*param_4);
            local_f0 = local_f0 | ~uVar2;
            local_c8 = 0xffffffffffffffff;
            local_f8 = 0;
            for (local_d8 = local_100; local_d8 < local_d0; local_d8 = local_d8 + 1) {
              local_b0 = FUN_140e0a680(*(undefined *)(local_108 + local_d8),1);
              local_a0 = FUN_140e0a680(*(undefined *)(local_108 + local_d8),0);
              local_f8 = FUN_140e0a6c0(local_c8 & local_b0,local_d8,local_f8);
              local_c8 = FUN_140e0a6c0(local_b0,0,local_c8);
              local_f0 = local_f0 | local_c8 & ~local_a0;
            }
            local_f0 = local_f0 | local_c8;
            lVar3 = FUN_140e0a710(local_f0);
            if (lVar3 != 0) goto LAB_140e0ac3b;
            local_f8 = FUN_140e0a710(local_f8);
            local_f8 = local_f8 + 1;
            local_c0 = local_d0 - local_f8;
            if (local_c0 <= param_3) {
              FUN_140e0a730(param_1,local_108 + local_f8,local_c0);
              *param_2 = local_c0;
              FUN_140d762b0(local_108);
              goto LAB_140e0ac69;
            }
            local_118 = CONCAT44(local_118._4_4_,0xef);
            FUN_140d186f0(4,0,0x71,s_D__a_1_s_target_release_build_bo_1413f75e0);
          }
        }
      }
    }
  }
  FUN_140d762b0(local_108);
LAB_140e0ac69:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_138);
  return;
}


/* address=140e0ac90 name=FUN_140e0ac90 */

void FUN_140e0ac90(longlong param_1,ulonglong param_2)

{
  ulonglong local_18;
  
  FUN_140d459b0(param_1,param_2);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    while (*(char *)(param_1 + local_18) == '\0') {
      FUN_140d459b0(param_1 + local_18,1);
    }
  }
  return;
}


/* address=140e0ad20 name=FUN_140e0ad20 */

undefined8 FUN_140e0ad20(undefined *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 < 0xb) {
    FUN_140d186f0(4,0,0x7e,s_D__a_1_s_target_release_build_bo_1413f76c0,0x105);
    uVar2 = 0;
  }
  else if (param_2 - 0xb < param_4) {
    FUN_140d186f0(4,0,0x72,s_D__a_1_s_target_release_build_bo_1413f7730,0x10a);
    uVar2 = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 2;
    lVar1 = (param_2 - 3) - param_4;
    FUN_140e0ac90(param_1 + 2,lVar1);
    param_1[lVar1 + 2] = 0;
    FUN_140e0a730(param_1 + (param_2 - param_4),param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140e0ae40 name=FUN_140e0ae40 */

undefined8
FUN_140e0ae40(undefined8 param_1,ulonglong *param_2,ulonglong param_3,undefined *param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  if (param_5 == 0) {
    FUN_140d186f0(4,0,0x78,s_D__a_1_s_target_release_build_bo_1413f77a0,0x11c);
    uVar4 = 0;
  }
  else if (param_5 < 0xb) {
    FUN_140d186f0(4,0,0x7e,s_D__a_1_s_target_release_build_bo_1413f7810,0x125);
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_140e0a680(*param_4,0);
    uVar2 = FUN_140e0a680(param_4[1],2);
    local_40 = 0;
    local_30 = 0xffffffffffffffff;
    for (local_38 = 2; local_38 < param_5; local_38 = local_38 + 1) {
      uVar3 = FUN_140e0a650(param_4[local_38]);
      local_40 = FUN_140e0a6c0(local_30 & uVar3,local_38,local_40);
      local_30 = FUN_140e0a6c0(uVar3,0,local_30);
    }
    uVar3 = FUN_140e0a620(local_40,10);
    if ((uVar1 & uVar2 & ~local_30 & uVar3) == 0) {
      FUN_140d186f0(4,0,0x89,s_D__a_1_s_target_release_build_bo_1413f7880,0x14a);
      uVar4 = 0;
    }
    else {
      param_5 = param_5 - (local_40 + 1);
      if (param_3 < param_5) {
        FUN_140d186f0(4,0,0x89,s_D__a_1_s_target_release_build_bo_1413f78f0,0x152);
        uVar4 = 0;
      }
      else {
        FUN_140e0a730(param_1,param_4 + local_40 + 1,param_5);
        *param_2 = param_5;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


/* address=140e0b0d0 name=FUN_140e0b0d0 */

int FUN_140e0b0d0(undefined8 param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,
                 undefined8 param_5,ulonglong param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar4;
  int iVar5;
  longlong local_18;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar1 = FUN_140d535c0(param_1);
  iVar5 = 0;
  if (param_4 < uVar1) {
    FUN_140d186f0(4,0,0x87,s_D__a_1_s_target_release_build_bo_1413f7c70,CONCAT44(uVar4,0x1dc));
    return 0;
  }
  local_18 = param_3;
  if ((param_7 == 3) || (local_18 = FUN_140d76180(uVar1), local_18 != 0)) {
    if (param_6 == uVar1) {
      iVar2 = FUN_140d6cfe0(param_1,local_18,param_5,uVar1);
      if (iVar2 != 0) {
        if (param_7 == 1) {
          uVar3 = (ulonglong)uVar1;
          iVar5 = FUN_140e0ae40(param_3,param_2,uVar1,local_18,uVar3);
          uVar4 = (undefined4)(uVar3 >> 0x20);
        }
        else if (param_7 == 3) {
          *param_2 = (ulonglong)uVar1;
          iVar5 = 1;
        }
        else {
          if (param_7 != 4) {
            FUN_140d186f0(4,0,0x8f,s_D__a_1_s_target_release_build_bo_1413f7d50,
                          CONCAT44(uVar4,0x202));
            goto LAB_140e0b2eb;
          }
          uVar3 = (ulonglong)uVar1;
          iVar5 = FUN_140e0a7c0(param_3,param_2,uVar1,local_18,uVar3,0,0,0,0);
          uVar4 = (undefined4)(uVar3 >> 0x20);
        }
        if (iVar5 == 0) {
          FUN_140d186f0(4,0,0x88,s_D__a_1_s_target_release_build_bo_1413f7dc0,CONCAT44(uVar4,0x208))
          ;
        }
      }
    }
    else {
      FUN_140d186f0(4,0,0x70,s_D__a_1_s_target_release_build_bo_1413f7ce0,CONCAT44(uVar4,0x1eb));
    }
  }
LAB_140e0b2eb:
  if (param_7 != 3) {
    FUN_140d762b0(local_18);
  }
  return iVar5;
}


/* address=140e0b310 name=FUN_140e0b310 */

void FUN_140e0b310(undefined8 param_1,byte *param_2)

{
  FUN_140d459b0(param_2,0x20);
  *param_2 = *param_2 | 7;
  param_2[0x1f] = param_2[0x1f] & 0xbf;
  param_2[0x1f] = param_2[0x1f] | 0x80;
  FUN_140e0b430(param_1,param_2);
  return;
}


/* address=140e0b3c0 name=FUN_140e0b3c0 */

bool FUN_140e0b3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_140e191c0(param_1,param_2,param_3);
  iVar1 = FUN_140d76480(&DAT_1410bf1e0,param_1,0x20);
  return iVar1 != 0;
}


/* address=140e0b430 name=FUN_140e0b430 */

void FUN_140e0b430(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_178 [32];
  undefined local_158 [40];
  undefined local_130 [40];
  undefined local_108 [48];
  undefined local_d8 [40];
  undefined local_b0 [40];
  undefined local_88 [80];
  byte local_38 [31];
  byte bStack_19;
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_178;
  FUN_140e0bbb0(local_38,param_2,0x20);
  local_38[0] = local_38[0] & 0xf8;
  bStack_19 = bStack_19 & 0x7f | 0x40;
  FUN_140e0c940(local_d8,local_38);
  FUN_140e12e60(local_108,local_88,local_b0);
  FUN_140e12fb0(local_130,local_88,local_b0);
  FUN_140e13a70(local_158,local_130);
  FUN_140e13410(local_158,local_108,local_158);
  FUN_140e12cf0(param_1,local_158);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_178);
  return;
}


/* address=140e0b580 name=FUN_140e0b580 */

void FUN_140e0b580(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_58;
  FUN_140d459b0(local_38,0x20);
  FUN_140e0ba80(param_1,param_2,local_38);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=140e0b5e0 name=FUN_140e0b5e0 */

void FUN_140e0b5e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined auStack_278 [32];
  undefined local_258 [224];
  undefined local_178 [160];
  byte local_d8 [31];
  byte bStack_b9;
  undefined local_b8 [32];
  undefined local_98 [64];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_278;
  FUN_140d1bbc0(param_4,0x20,local_d8);
  local_d8[0] = local_d8[0] & 0xf8;
  bStack_b9 = bStack_b9 & 0x3f | 0x40;
  FUN_140d1b7f0(local_258);
  FUN_140d1b920(local_258,local_b8,0x20);
  FUN_140d1b920(local_258,param_2,param_3);
  FUN_140d1bb80(local_98,local_258);
  FUN_140e0cf80(local_98);
  FUN_140e0c940(local_178,local_98);
  FUN_140e14310(param_1,local_178);
  FUN_140d1b7f0(local_258);
  FUN_140d1b920(local_258,param_1,0x20);
  FUN_140d1b920(local_258,param_4 + 0x20,0x20);
  FUN_140d1b920(local_258,param_2,param_3);
  FUN_140d1bb80(local_58,local_258);
  FUN_140e0cf80(local_58);
  FUN_140e15960(param_1 + 0x20,local_58,local_d8,local_98);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_278);
  return;
}


/* address=140e0b7f0 name=FUN_140e0b7f0 */

void FUN_140e0b7f0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined auStack_338 [32];
  longlong local_318;
  uint local_310;
  ulonglong local_308;
  undefined local_300 [40];
  undefined local_2d8 [120];
  undefined local_260 [40];
  undefined local_238 [224];
  undefined local_158 [128];
  undefined local_d8 [32];
  undefined local_b8 [32];
  undefined local_98 [32];
  undefined local_78 [64];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_338;
  if (((*(byte *)(param_3 + 0x3f) & 0xe0) == 0) &&
     (iVar1 = FUN_140e0bdb0(local_2d8,param_4), iVar1 != 0)) {
    FUN_140e13860(local_300,local_2d8);
    FUN_140e13100(local_2d8,local_300);
    FUN_140e13860(local_300,local_260);
    FUN_140e13100(local_260,local_300);
    FUN_140e0bbb0(local_38,param_4,0x20);
    FUN_140e0bbb0(local_b8,param_3,0x20);
    FUN_140e0bbb0(local_d8,param_3 + 0x20,0x20);
    local_318 = 3;
    while (local_308 = FUN_140e0bc90(local_d8 + local_318 * 8),
          local_308 <= *(ulonglong *)(&DAT_1410bf1c0 + local_318 * 8)) {
      if (local_308 < *(ulonglong *)(&DAT_1410bf1c0 + local_318 * 8)) {
        FUN_140d1b7f0(local_238);
        FUN_140d1b920(local_238,param_3,0x20);
        FUN_140d1b920(local_238,param_4,0x20);
        FUN_140d1b920(local_238,param_1,param_2);
        FUN_140d1bb80(local_78,local_238);
        FUN_140e0cf80(local_78);
        FUN_140e15400(local_158,local_78,local_2d8,local_d8);
        FUN_140e0bcc0(local_98,local_158);
        iVar1 = FUN_140d76480(local_98,local_b8,0x20);
        local_310 = (uint)(iVar1 == 0);
        break;
      }
      if (local_318 == 0) break;
      local_318 = local_318 + -1;
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_338);
  return;
}


/* address=140e0ba80 name=FUN_140e0ba80 */

void FUN_140e0ba80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined auStack_118 [32];
  undefined local_f8 [160];
  byte local_58 [31];
  byte bStack_39;
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_118;
  FUN_140d1bbc0(param_3,0x20,local_58);
  local_58[0] = local_58[0] & 0xf8;
  bStack_39 = bStack_39 & 0x7f | 0x40;
  FUN_140e0c940(local_f8,local_58);
  FUN_140e14310(param_1,local_f8);
  FUN_140e0bbb0(param_2,param_3,0x20);
  FUN_140e0bbb0(param_2 + 0x20,param_1,0x20);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=140e0bbb0 name=FUN_140e0bbb0 */

undefined8 FUN_140e0bbb0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e0bc00 name=FUN_140e0bc00 */

undefined8 FUN_140e0bc00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e0bc50 name=FUN_140e0bc50 */

undefined8 FUN_140e0bc50(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e0bc90 name=FUN_140e0bc90 */

undefined8 FUN_140e0bc90(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_140e0bbb0(local_18,param_1,8);
  return local_18[0];
}


/* address=140e0bcc0 name=FUN_140e0bcc0 */

void FUN_140e0bcc0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_b8 [32];
  longlong local_98;
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_b8;
  FUN_140e13df0(local_90,param_2 + 0x50);
  FUN_140e133c0(local_40,param_2,local_90);
  FUN_140e133c0(local_68,param_2 + 0x28,local_90);
  FUN_140e12cf0(param_1,local_68);
  local_98 = 0x1f;
  iVar1 = FUN_140e13ee0(local_40);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + local_98) ^ (byte)(iVar1 << 7);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140e0bdb0 name=FUN_140e0bdb0 */

void FUN_140e0bdb0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_128 [32];
  longlong local_108;
  undefined local_100 [40];
  undefined local_d8 [40];
  undefined local_b0 [40];
  undefined local_88 [40];
  undefined local_60 [40];
  undefined local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_128;
  FUN_140e12c70(param_1 + 0x28,param_2);
  FUN_140e12de0(param_1 + 0x50);
  FUN_140e135e0(local_d8,param_1 + 0x28);
  FUN_140e133c0(local_100,local_d8,&DAT_1410bf200);
  FUN_140e12fb0(local_b0,local_d8,param_1 + 0x50);
  FUN_140e13100(local_88,local_b0);
  FUN_140e12e60(local_b0,local_100,param_1 + 0x50);
  FUN_140e13460(local_d8,local_88,local_b0);
  FUN_140e13fa0(param_1,local_d8);
  FUN_140e133c0(param_1,param_1,local_88);
  FUN_140e135e0(local_100,param_1);
  FUN_140e13460(local_100,local_100,local_b0);
  FUN_140e12fb0(local_60,local_100,local_88);
  iVar1 = FUN_140e13e50(local_60);
  if (iVar1 != 0) {
    FUN_140e12e60(local_60,local_100,local_88);
    iVar1 = FUN_140e13e50(local_60);
    if (iVar1 != 0) goto LAB_140e0c00c;
    FUN_140e133c0(param_1,param_1,&DAT_1410bf228);
  }
  iVar1 = FUN_140e13ee0(param_1);
  if (iVar1 != (int)(uint)*(byte *)(param_2 + 0x1f) >> 7) {
    FUN_140e13860(local_38,param_1);
    FUN_140e13100(param_1,local_38);
  }
  local_108 = param_1 + 0x78;
  FUN_140e133c0(local_108,param_1,param_1 + 0x28);
LAB_140e0c00c:
  FUN_140e28050(local_10 ^ (ulonglong)auStack_128);
  return;
}


/* address=140e0c030 name=FUN_140e0c030 */

void FUN_140e0c030(longlong param_1,longlong param_2)

{
  FUN_140e12e60(param_1,param_2 + 0x28,param_2);
  FUN_140e12fb0(param_1 + 0x28,param_2 + 0x28,param_2);
  FUN_140e13a10(param_1 + 0x50,param_2 + 0x50);
  FUN_140e13320(param_1 + 0x78,param_2 + 0x78,&DAT_1410bf250);
  return;
}


/* address=140e0c0e0 name=FUN_140e0c0e0 */

void FUN_140e0c0e0(longlong param_1,longlong param_2)

{
  FUN_140e134b0(param_1,param_2,param_2 + 0x78);
  FUN_140e134b0(param_1 + 0x28,param_2 + 0x28,param_2 + 0x50);
  FUN_140e134b0(param_1 + 0x50,param_2 + 0x50,param_2 + 0x78);
  return;
}


/* address=140e0c190 name=FUN_140e0c190 */

void FUN_140e0c190(longlong param_1,longlong param_2)

{
  FUN_140e134b0(param_1,param_2,param_2 + 0x78);
  FUN_140e134b0(param_1 + 0x28,param_2 + 0x28,param_2 + 0x50);
  FUN_140e134b0(param_1 + 0x50,param_2 + 0x50,param_2 + 0x78);
  FUN_140e134b0(param_1 + 0x78,param_2,param_2 + 0x28);
  return;
}


/* address=140e0c270 name=FUN_140e0c270 */

void FUN_140e0c270(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined local_b8 [40];
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_e8;
  local_c8 = param_1;
  FUN_140e12e60(param_1,param_2 + 0x28,param_2);
  local_c0 = param_1 + 0x28;
  FUN_140e12fb0(local_c0,param_2 + 0x28,param_2);
  FUN_140e134b0(local_b8,param_1,param_3);
  FUN_140e134b0(local_68,param_1 + 0x28,param_3 + 0x28);
  FUN_140e13410(local_40,param_3 + 0x78,param_2 + 0x78);
  FUN_140e13460(local_90,param_2 + 0x50,param_3 + 0x50);
  FUN_140e12e60(param_1 + 0x78,local_90,local_90);
  FUN_140e12fb0(param_1,local_b8,local_68);
  FUN_140e12e60(param_1 + 0x28,local_b8,local_68);
  FUN_140e13100(local_b8,param_1 + 0x78);
  FUN_140e12e60(param_1 + 0x50,local_b8,local_40);
  FUN_140e12fb0(param_1 + 0x78,local_b8,local_40);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_e8);
  return;
}


/* address=140e0c480 name=FUN_140e0c480 */

void FUN_140e0c480(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined local_b8 [40];
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_e8;
  local_c8 = param_1;
  FUN_140e12e60(param_1,param_2 + 0x28,param_2);
  local_c0 = param_1 + 0x28;
  FUN_140e12fb0(local_c0,param_2 + 0x28,param_2);
  FUN_140e134b0(local_b8,param_1,param_3 + 0x28);
  FUN_140e134b0(local_68,param_1 + 0x28,param_3);
  FUN_140e13410(local_40,param_3 + 0x78,param_2 + 0x78);
  FUN_140e13460(local_90,param_2 + 0x50,param_3 + 0x50);
  FUN_140e12e60(param_1 + 0x78,local_90,local_90);
  FUN_140e12fb0(param_1,local_b8,local_68);
  FUN_140e12e60(param_1 + 0x28,local_b8,local_68);
  FUN_140e13100(local_b8,param_1 + 0x78);
  FUN_140e12fb0(param_1 + 0x50,local_b8,local_40);
  FUN_140e12e60(param_1 + 0x78,local_b8,local_40);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_e8);
  return;
}


/* address=140e0c940 name=FUN_140e0c940 */

void FUN_140e0c940(undefined8 param_1,longlong param_2)

{
  undefined auStack_238 [32];
  int local_218;
  char local_214;
  longlong local_210;
  longlong local_208;
  undefined local_1f8 [160];
  undefined local_158 [128];
  undefined local_d8 [128];
  byte abStack_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_238;
  for (local_218 = 0; local_218 < 0x20; local_218 = local_218 + 1) {
    abStack_58[local_218 * 2] = *(byte *)(param_2 + local_218) & 0xf;
    abStack_58[local_218 * 2 + 1] = (byte)((int)(uint)*(byte *)(param_2 + local_218) >> 4);
  }
  local_214 = '\0';
  for (local_218 = 0; local_218 < 0x3f; local_218 = local_218 + 1) {
    abStack_58[local_218] = abStack_58[local_218] + local_214;
    local_214 = (char)(abStack_58[local_218] + 8) >> 4;
    abStack_58[local_218] = abStack_58[local_218] - (char)((int)local_214 << 4);
  }
  abStack_58[63] = abStack_58[63] + local_214;
  FUN_140e14450(param_1);
  for (local_218 = 1; local_218 < 0x40; local_218 = local_218 + 2) {
    local_210 = (longlong)local_218;
    FUN_140e14d70(local_d8,local_218 / 2,abStack_58[local_210]);
    FUN_140e14830(local_1f8,param_1,local_d8);
    FUN_140e0c190(param_1,local_1f8);
  }
  FUN_140e147c0(local_1f8,param_1);
  FUN_140e0c0e0(local_158,local_1f8);
  FUN_140e14630(local_1f8,local_158);
  FUN_140e0c0e0(local_158,local_1f8);
  FUN_140e14630(local_1f8,local_158);
  FUN_140e0c0e0(local_158,local_1f8);
  FUN_140e14630(local_1f8,local_158);
  FUN_140e0c190(param_1,local_1f8);
  for (local_218 = 0; local_218 < 0x40; local_218 = local_218 + 2) {
    local_208 = (longlong)local_218;
    FUN_140e14d70(local_d8,local_218 / 2,abStack_58[local_208]);
    FUN_140e14830(local_1f8,param_1,local_d8);
    FUN_140e0c190(param_1,local_1f8);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_238);
  return;
}


/* address=140e0cf80 name=FUN_140e0cf80 */

void FUN_140e0cf80(undefined *param_1)

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
  undefined local_140;
  undefined local_e8;
  
  uVar1 = FUN_140e12a90(param_1);
  uVar2 = FUN_140e12b10(param_1 + 2);
  uVar3 = FUN_140e12a90(param_1 + 5);
  uVar4 = FUN_140e12b10(param_1 + 7);
  uVar5 = FUN_140e12b10(param_1 + 10);
  uVar6 = FUN_140e12a90(param_1 + 0xd);
  uVar7 = FUN_140e12b10(param_1 + 0xf);
  uVar8 = FUN_140e12a90(param_1 + 0x12);
  uVar9 = FUN_140e12a90(param_1 + 0x15);
  uVar10 = FUN_140e12b10(param_1 + 0x17);
  uVar11 = FUN_140e12a90(param_1 + 0x1a);
  uVar12 = FUN_140e12b10(param_1 + 0x1c);
  uVar13 = FUN_140e12b10(param_1 + 0x1f);
  uVar14 = FUN_140e12a90(param_1 + 0x22);
  uVar15 = FUN_140e12b10(param_1 + 0x24);
  uVar16 = FUN_140e12a90(param_1 + 0x27);
  uVar17 = FUN_140e12a90(param_1 + 0x2a);
  uVar18 = FUN_140e12b10(param_1 + 0x2c);
  uVar19 = FUN_140e12a90(param_1 + 0x2f);
  uVar19 = uVar19 >> 2 & 0x1fffff;
  uVar20 = FUN_140e12b10(param_1 + 0x31);
  uVar20 = uVar20 >> 7 & 0x1fffff;
  uVar21 = FUN_140e12b10(param_1 + 0x34);
  uVar21 = uVar21 >> 4 & 0x1fffff;
  uVar22 = FUN_140e12a90(param_1 + 0x37);
  uVar22 = uVar22 >> 1 & 0x1fffff;
  uVar23 = FUN_140e12b10(param_1 + 0x39);
  uVar23 = uVar23 >> 6 & 0x1fffff;
  uVar24 = FUN_140e12b10(param_1 + 0x3c);
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
  lVar25 = FUN_140e15940(lVar25);
  lVar26 = lVar40 + 0x100000 >> 0x15;
  lVar43 = (uVar10 >> 5 & 0x1fffff) + uVar22 * 0xa2c13 + uVar21 * 0x72d18 + uVar20 * 0x9fb67 +
           uVar19 * -0xf39ad + lVar26;
  lVar26 = FUN_140e15940(lVar26);
  lVar27 = lVar41 + 0x100000 >> 0x15;
  lVar44 = (uVar12 >> 7 & 0x1fffff) + uVar24 * 0xa2c13 + uVar23 * 0x72d18 + uVar22 * 0x9fb67 +
           uVar21 * -0xf39ad + uVar20 * 0x215d1 + uVar19 * -0xa6f7d + lVar27;
  lVar27 = FUN_140e15940(lVar27);
  lVar28 = lVar38 + 0x100000 >> 0x15;
  lVar45 = (uVar14 >> 1 & 0x1fffff) + uVar24 * 0x9fb67 + uVar23 * -0xf39ad + uVar22 * 0x215d1 +
           uVar21 * -0xa6f7d + lVar28;
  lVar28 = FUN_140e15940(lVar28);
  lVar29 = lVar37 + 0x100000 >> 0x15;
  lVar46 = (uVar16 >> 3 & 0x1fffff) + uVar24 * 0x215d1 + uVar23 * -0xa6f7d + lVar29;
  lVar29 = FUN_140e15940(lVar29);
  lVar30 = lVar36 + 0x100000 >> 0x15;
  lVar47 = (uVar18 >> 5 & 0x1fffff) + lVar30;
  lVar30 = FUN_140e15940(lVar30);
  lVar31 = lVar42 + 0x100000 >> 0x15;
  lVar32 = FUN_140e15940(lVar31);
  lVar33 = lVar43 + 0x100000 >> 0x15;
  lVar34 = FUN_140e15940(lVar33);
  lVar35 = lVar44 + 0x100000 >> 0x15;
  lVar38 = (lVar38 - lVar28) + lVar35;
  lVar28 = FUN_140e15940(lVar35);
  lVar35 = lVar45 + 0x100000 >> 0x15;
  lVar37 = (lVar37 - lVar29) + lVar35;
  lVar29 = FUN_140e15940(lVar35);
  lVar45 = lVar45 - lVar29;
  lVar29 = lVar46 + 0x100000 >> 0x15;
  lVar35 = (lVar36 - lVar30) + lVar29;
  lVar29 = FUN_140e15940(lVar29);
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
  lVar25 = FUN_140e15940(lVar25);
  lVar26 = lVar52 + 0x100000 >> 0x15;
  lVar55 = (uVar4 >> 7 & 0x1fffff) + lVar46 * 0xa2c13 + lVar37 * 0x72d18 + lVar45 * 0x9fb67 +
           lVar38 * -0xf39ad + lVar26;
  lVar26 = FUN_140e15940(lVar26);
  lVar27 = lVar53 + 0x100000 >> 0x15;
  lVar45 = (uVar6 >> 1 & 0x1fffff) + lVar47 * 0xa2c13 + lVar35 * 0x72d18 + lVar46 * 0x9fb67 +
           lVar37 * -0xf39ad + lVar45 * 0x215d1 + lVar38 * -0xa6f7d + lVar27;
  lVar27 = FUN_140e15940(lVar27);
  lVar29 = lVar50 + 0x100000 >> 0x15;
  lVar46 = (lVar42 - lVar32) + lVar47 * 0x9fb67 + lVar35 * -0xf39ad + lVar46 * 0x215d1 +
           lVar37 * -0xa6f7d + lVar29;
  lVar29 = FUN_140e15940(lVar29);
  lVar30 = lVar49 + 0x100000 >> 0x15;
  lVar43 = (lVar43 - lVar34) + lVar47 * 0x215d1 + lVar35 * -0xa6f7d + lVar30;
  lVar30 = FUN_140e15940(lVar30);
  lVar31 = lVar48 + 0x100000 >> 0x15;
  lVar44 = (lVar44 - lVar28) + lVar31;
  lVar28 = FUN_140e15940(lVar31);
  lVar31 = lVar54 + 0x100000 >> 0x15;
  lVar32 = FUN_140e15940(lVar31);
  lVar33 = lVar55 + 0x100000 >> 0x15;
  lVar34 = FUN_140e15940(lVar33);
  lVar35 = lVar45 + 0x100000 >> 0x15;
  lVar36 = FUN_140e15940(lVar35);
  lVar37 = lVar46 + 0x100000 >> 0x15;
  lVar38 = FUN_140e15940(lVar37);
  lVar39 = lVar43 + 0x100000 >> 0x15;
  lVar40 = FUN_140e15940(lVar39);
  lVar41 = lVar44 + 0x100000 >> 0x15;
  lVar42 = FUN_140e15940(lVar41);
  lVar47 = (lVar51 - lVar25) + lVar41 * 0xa2c13;
  lVar25 = lVar47 >> 0x15;
  lVar51 = (lVar54 - lVar32) + lVar41 * 0x72d18 + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar32 = lVar51 >> 0x15;
  lVar52 = (lVar52 - lVar26) + lVar31 + lVar41 * 0x9fb67 + lVar32;
  lVar26 = FUN_140e15940(lVar32);
  lVar31 = lVar52 >> 0x15;
  lVar54 = (lVar55 - lVar34) + lVar41 * -0xf39ad + lVar31;
  lVar31 = FUN_140e15940(lVar31);
  lVar32 = lVar54 >> 0x15;
  lVar53 = (lVar53 - lVar27) + lVar33 + lVar41 * 0x215d1 + lVar32;
  lVar27 = FUN_140e15940(lVar32);
  lVar32 = lVar53 >> 0x15;
  lVar41 = (lVar45 - lVar36) + lVar41 * -0xa6f7d + lVar32;
  lVar32 = FUN_140e15940(lVar32);
  lVar33 = lVar41 >> 0x15;
  lVar45 = (lVar50 - lVar29) + lVar35 + lVar33;
  lVar29 = FUN_140e15940(lVar33);
  lVar33 = lVar45 >> 0x15;
  lVar38 = (lVar46 - lVar38) + lVar33;
  lVar33 = FUN_140e15940(lVar33);
  lVar34 = lVar38 >> 0x15;
  lVar46 = (lVar49 - lVar30) + lVar37 + lVar34;
  lVar30 = FUN_140e15940(lVar34);
  lVar34 = lVar46 >> 0x15;
  lVar40 = (lVar43 - lVar40) + lVar34;
  lVar34 = FUN_140e15940(lVar34);
  lVar35 = lVar40 >> 0x15;
  lVar39 = (lVar48 - lVar28) + lVar39 + lVar35;
  lVar28 = FUN_140e15940(lVar35);
  lVar35 = lVar39 >> 0x15;
  lVar42 = (lVar44 - lVar42) + lVar35;
  lVar35 = FUN_140e15940(lVar35);
  lVar36 = lVar42 >> 0x15;
  lVar37 = FUN_140e15940(lVar36);
  lVar43 = (lVar47 - lVar25) + lVar36 * 0xa2c13;
  lVar25 = lVar43 >> 0x15;
  lVar26 = (lVar51 - lVar26) + lVar36 * 0x72d18 + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar43 = lVar43 - lVar25;
  lVar25 = lVar26 >> 0x15;
  lVar31 = (lVar52 - lVar31) + lVar36 * 0x9fb67 + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar26 = lVar26 - lVar25;
  lVar25 = lVar31 >> 0x15;
  lVar27 = (lVar54 - lVar27) + lVar36 * -0xf39ad + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar31 = lVar31 - lVar25;
  lVar25 = lVar27 >> 0x15;
  lVar32 = (lVar53 - lVar32) + lVar36 * 0x215d1 + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar27 = lVar27 - lVar25;
  lVar25 = lVar32 >> 0x15;
  lVar29 = (lVar41 - lVar29) + lVar36 * -0xa6f7d + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar32 = lVar32 - lVar25;
  lVar25 = lVar29 >> 0x15;
  lVar33 = (lVar45 - lVar33) + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar29 = lVar29 - lVar25;
  lVar25 = lVar33 >> 0x15;
  lVar30 = (lVar38 - lVar30) + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar33 = lVar33 - lVar25;
  lVar25 = lVar30 >> 0x15;
  lVar34 = (lVar46 - lVar34) + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar30 = lVar30 - lVar25;
  lVar25 = lVar34 >> 0x15;
  lVar28 = (lVar40 - lVar28) + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar34 = lVar34 - lVar25;
  lVar25 = lVar28 >> 0x15;
  lVar36 = (lVar39 - lVar35) + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar28 = lVar28 - lVar25;
  lVar25 = lVar36 >> 0x15;
  lVar35 = (lVar42 - lVar37) + lVar25;
  lVar25 = FUN_140e15940(lVar25);
  lVar36 = lVar36 - lVar25;
  local_e8 = (undefined)lVar43;
  *param_1 = local_e8;
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
  local_140 = (undefined)lVar34;
  param_1[0x15] = local_140;
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


/* address=140e0ee70 name=FUN_140e0ee70 */

void FUN_140e0ee70(longlong *param_1,undefined8 param_2,char param_3,ulonglong param_4,
                  ulonglong param_5)

{
  *param_1 = param_4 + param_5 + (ulonglong)(param_3 != '\0');
  *(bool *)param_2 =
       CARRY8(param_4,param_5) || CARRY8(param_4 + param_5,(ulonglong)(param_3 != '\0'));
  return;
}


/* address=140e0eeb0 name=FUN_140e0eeb0 */

void FUN_140e0eeb0(ulonglong *param_1,undefined *param_2,byte param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3 + param_4 + param_5;
  *param_1 = uVar1 & 0x7ffffffffffff;
  *param_2 = (char)(uVar1 >> 0x33);
  return;
}


/* address=140e0ef30 name=FUN_140e0ef30 */

void FUN_140e0ef30(ulonglong *param_1,char *param_2,byte param_3,longlong param_4,longlong param_5)

{
  ulonglong uVar1;
  
  uVar1 = (param_4 - (ulonglong)param_3) - param_5;
  *param_1 = uVar1 & 0x7ffffffffffff;
  *param_2 = -(char)((longlong)uVar1 >> 0x33);
  return;
}


/* address=140e0efc0 name=FUN_140e0efc0 */

void FUN_140e0efc0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

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


/* address=140e0f010 name=FUN_140e0f010 */

void FUN_140e0f010(ulonglong *param_1,char param_2,ulonglong param_3,ulonglong param_4)

{
  *param_1 = (longlong)-(param_2 != '\0') & param_4 | ~(longlong)-(param_2 != '\0') & param_3;
  return;
}


/* address=140e0f0a0 name=FUN_140e0f0a0 */

void FUN_140e0f0a0(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined local_3d8;
  undefined local_3d7;
  undefined local_3d6;
  undefined local_3d5;
  undefined local_3d4;
  undefined local_3d3;
  undefined local_3d2;
  undefined local_3d1;
  undefined local_3d0;
  undefined local_3cf;
  undefined local_3ce;
  undefined local_3cd;
  undefined local_3cc;
  undefined local_3cb;
  undefined local_3ca;
  undefined local_3c9;
  undefined local_3c8;
  undefined local_3c7;
  undefined local_3c6;
  undefined local_3c5;
  byte local_3c4;
  byte local_3c3;
  byte local_3c2;
  byte local_3c1 [2];
  undefined local_3bf;
  undefined local_3be;
  undefined local_3bd;
  undefined local_3bc;
  undefined local_3bb;
  undefined local_3ba;
  undefined local_3b9;
  undefined local_3b8;
  undefined local_3b7;
  undefined local_3b6;
  undefined local_3b5;
  undefined local_3b4;
  undefined local_3b3;
  undefined local_3b2;
  undefined local_3b1;
  undefined local_3b0;
  undefined local_3af;
  undefined local_3ae;
  undefined local_3ad;
  undefined local_3ac [4];
  ulonglong local_3a8;
  ulonglong local_3a0;
  ulonglong local_398;
  ulonglong local_390;
  ulonglong local_388 [3];
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
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
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
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
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78 [4];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_40;
  ulonglong local_20;
  
  FUN_140e0efc0(&local_268,&local_258,param_2[4],param_3[4] * 0x13);
  FUN_140e0efc0(&local_1e8,&local_1d8,param_2[4],param_3[3] * 0x13);
  FUN_140e0efc0(&local_168,&local_158,param_2[4],param_3[2] * 0x13);
  FUN_140e0efc0(&local_370,&local_360,param_2[4],param_3[1] * 0x13);
  FUN_140e0efc0(&local_1e0,&local_1d0,param_2[3],param_3[4] * 0x13);
  FUN_140e0efc0(&local_160,&local_150,param_2[3],param_3[3] * 0x13);
  FUN_140e0efc0(&local_368,&local_358,param_2[3],param_3[2] * 0x13);
  FUN_140e0efc0(&local_140,&local_130,param_2[2],param_3[4] * 0x13);
  FUN_140e0efc0(&local_348,&local_338,param_2[2],param_3[3] * 0x13);
  FUN_140e0efc0(&local_328,&local_318,param_2[1],param_3[4] * 0x13);
  FUN_140e0efc0(&local_2e8,&local_2d8,param_2[4],*param_3);
  FUN_140e0efc0(&local_2e0,&local_2d0,param_2[3],param_3[1]);
  FUN_140e0efc0(&local_260,&local_250,param_2[3],*param_3);
  FUN_140e0efc0(&local_2c0,&local_2b0,param_2[2],param_3[2]);
  FUN_140e0efc0(&local_240,&local_230,param_2[2],param_3[1]);
  FUN_140e0efc0(&local_1c0,&local_1b0,param_2[2],*param_3);
  FUN_140e0efc0(&local_2a0,&local_290,param_2[1],param_3[3]);
  FUN_140e0efc0(&local_220,&local_210,param_2[1],param_3[2]);
  FUN_140e0efc0(&local_1a0,&local_190,param_2[1],param_3[1]);
  FUN_140e0efc0(&local_120,&local_110,param_2[1],*param_3);
  FUN_140e0efc0(&local_280,&local_270,*param_2,param_3[4]);
  FUN_140e0efc0(&local_200,&local_1f0,*param_2,param_3[3]);
  FUN_140e0efc0(&local_180,&local_170,*param_2,param_3[2]);
  FUN_140e0efc0(&local_100,&local_f0,*param_2,param_3[1]);
  FUN_140e0efc0(&local_308,&local_2f8,*param_2,*param_3);
  FUN_140e0ee70(&local_350,&local_3d8,0,local_368,local_370);
  FUN_140e0ee70(&local_340,&local_3bf,local_3d8,local_358,local_360);
  FUN_140e0ee70(&local_330,&local_3d7,0,local_348,local_350);
  FUN_140e0ee70(&local_320,&local_3be,local_3d7,local_338,local_340);
  FUN_140e0ee70(&local_310,&local_3d6,0,local_328,local_330);
  FUN_140e0ee70(&local_300,&local_3bd,local_3d6,local_318,local_320);
  FUN_140e0ee70(&local_3a8,&local_3d5,0,local_308,local_310);
  FUN_140e0ee70(&local_2f0,&local_3bc,local_3d5,local_2f8,local_300);
  local_e0 = local_3a8 >> 0x33 | local_2f0 << 0xd;
  local_58 = local_3a8 & 0x7ffffffffffff;
  FUN_140e0ee70(&local_2c8,&local_3d4,0,local_2e0,local_2e8);
  FUN_140e0ee70(&local_2b8,&local_3bb,local_3d4,local_2d0,local_2d8);
  FUN_140e0ee70(&local_2a8,&local_3d3,0,local_2c0,local_2c8);
  FUN_140e0ee70(&local_298,&local_3ba,local_3d3,local_2b0,local_2b8);
  FUN_140e0ee70(&local_288,&local_3d2,0,local_2a0,local_2a8);
  FUN_140e0ee70(&local_278,&local_3b9,local_3d2,local_290,local_298);
  FUN_140e0ee70(&local_88,&local_3d1,0,local_280,local_288);
  FUN_140e0ee70(local_78,&local_3b8,local_3d1,local_270,local_278);
  FUN_140e0ee70(&local_248,&local_3d0,0,local_260,local_268);
  FUN_140e0ee70(&local_238,&local_3b7,local_3d0,local_250,local_258);
  FUN_140e0ee70(&local_228,&local_3cf,0,local_240,local_248);
  FUN_140e0ee70(&local_218,&local_3b6,local_3cf,local_230,local_238);
  FUN_140e0ee70(&local_208,&local_3ce,0,local_220,local_228);
  FUN_140e0ee70(&local_1f8,&local_3b5,local_3ce,local_210,local_218);
  FUN_140e0ee70(&local_a8,&local_3cd,0,local_200,local_208);
  FUN_140e0ee70(&local_98,&local_3b4,local_3cd,local_1f0,local_1f8);
  FUN_140e0ee70(&local_1c8,&local_3cc,0,local_1e0,local_1e8);
  FUN_140e0ee70(&local_1b8,&local_3b3,local_3cc,local_1d0,local_1d8);
  FUN_140e0ee70(&local_1a8,&local_3cb,0,local_1c0,local_1c8);
  FUN_140e0ee70(&local_198,&local_3b2,local_3cb,local_1b0,local_1b8);
  FUN_140e0ee70(&local_188,&local_3ca,0,local_1a0,local_1a8);
  FUN_140e0ee70(&local_178,&local_3b1,local_3ca,local_190,local_198);
  FUN_140e0ee70(&local_c8,&local_3c9,0,local_180,local_188);
  FUN_140e0ee70(&local_b8,&local_3b0,local_3c9,local_170,local_178);
  FUN_140e0ee70(&local_148,&local_3c8,0,local_160,local_168);
  FUN_140e0ee70(&local_138,&local_3af,local_3c8,local_150,local_158);
  FUN_140e0ee70(&local_128,&local_3c7,0,local_140,local_148);
  FUN_140e0ee70(&local_118,&local_3ae,local_3c7,local_130,local_138);
  FUN_140e0ee70(&local_108,&local_3c6,0,local_120,local_128);
  FUN_140e0ee70(&local_f8,&local_3ad,local_3c6,local_110,local_118);
  FUN_140e0ee70(&local_e8,&local_3c5,0,local_100,local_108);
  FUN_140e0ee70(&local_d8,local_3ac,local_3c5,local_f0,local_f8);
  FUN_140e0ee70(&local_3a0,&local_3c4,0,local_e0,local_e8);
  local_d0 = (ulonglong)local_3c4 + local_d8;
  local_c0 = local_3a0 >> 0x33 | local_d0 * 0x2000;
  local_50 = local_3a0 & 0x7ffffffffffff;
  FUN_140e0ee70(&local_398,&local_3c3,0,local_c0,local_c8);
  local_b0 = (ulonglong)local_3c3 + local_b8;
  local_a0 = local_398 >> 0x33 | local_b0 * 0x2000;
  local_40 = local_398 & 0x7ffffffffffff;
  FUN_140e0ee70(&local_390,&local_3c2,0,local_a0,local_a8);
  local_90 = (ulonglong)local_3c2 + local_98;
  local_80 = local_390 >> 0x33 | local_90 * 0x2000;
  local_20 = local_390 & 0x7ffffffffffff;
  FUN_140e0ee70(local_388,local_3c1,0,local_80,local_88);
  local_58 = local_58 +
             (local_388[0] >> 0x33 | ((ulonglong)local_3c1[0] + local_78[0]) * 0x2000) * 0x13;
  local_50 = (local_58 >> 0x33) + local_50;
  *param_1 = local_58 & 0x7ffffffffffff;
  param_1[1] = local_50 & 0x7ffffffffffff;
  param_1[2] = (local_50 >> 0x33 & 0xff) + local_40;
  param_1[3] = local_20;
  param_1[4] = local_388[0] & 0x7ffffffffffff;
  return;
}


/* address=140e10160 name=FUN_140e10160 */

void FUN_140e10160(ulonglong *param_1,undefined8 *param_2)

{
  undefined local_2c8;
  undefined local_2c7;
  undefined local_2c6;
  undefined local_2c5;
  undefined local_2c4;
  undefined local_2c3;
  undefined local_2c2;
  undefined local_2c1;
  undefined local_2c0;
  undefined local_2bf;
  byte local_2be;
  byte local_2bd;
  byte local_2bc;
  byte local_2bb [2];
  undefined local_2b9;
  undefined local_2b8;
  undefined local_2b7;
  undefined local_2b6;
  undefined local_2b5;
  undefined local_2b4;
  undefined local_2b3;
  undefined local_2b2;
  undefined local_2b1;
  undefined local_2b0 [8];
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  ulonglong local_280;
  ulonglong local_278;
  ulonglong local_270;
  ulonglong local_268;
  ulonglong local_260 [3];
  longlong local_248;
  longlong local_240;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
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
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78 [4];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_40;
  ulonglong local_20;
  
  local_2a0 = param_2[4] * 0x13;
  local_2a8 = param_2[4] * 0x26;
  local_240 = param_2[4] << 1;
  local_298 = param_2[3] * 0x13;
  local_248 = param_2[3] * 0x26;
  local_290 = param_2[3] << 1;
  local_288 = param_2[2] << 1;
  local_238 = param_2[1] << 1;
  FUN_140e0efc0(&local_1a8,&local_198,param_2[4],local_2a0);
  FUN_140e0efc0(&local_168,&local_158,param_2[3],local_2a8);
  FUN_140e0efc0(&local_128,&local_118,param_2[3],local_298);
  FUN_140e0efc0(&local_120,&local_110,param_2[2],local_2a8);
  FUN_140e0efc0(&local_230,&local_220,param_2[2],local_248);
  FUN_140e0efc0(&local_1e8,&local_1d8,param_2[2],param_2[2]);
  FUN_140e0efc0(&local_228,&local_218,param_2[1],local_2a8);
  FUN_140e0efc0(&local_1e0,&local_1d0,param_2[1],local_290);
  FUN_140e0efc0(&local_1a0,&local_190,param_2[1],local_288);
  FUN_140e0efc0(&local_160,&local_150,param_2[1],param_2[1]);
  FUN_140e0efc0(&local_1c0,&local_1b0,*param_2,local_240);
  FUN_140e0efc0(&local_180,&local_170,*param_2,local_290);
  FUN_140e0efc0(&local_140,&local_130,*param_2,local_288);
  FUN_140e0efc0(&local_100,&local_f0,*param_2,local_238);
  FUN_140e0efc0(&local_208,&local_1f8,*param_2,*param_2);
  FUN_140e0ee70(&local_210,&local_2c8,0,local_228,local_230);
  FUN_140e0ee70(&local_200,&local_2b9,local_2c8,local_218,local_220);
  FUN_140e0ee70(&local_280,&local_2c7,0,local_208,local_210);
  FUN_140e0ee70(&local_1f0,&local_2b8,local_2c7,local_1f8,local_200);
  local_e0 = local_280 >> 0x33 | local_1f0 << 0xd;
  local_58 = local_280 & 0x7ffffffffffff;
  FUN_140e0ee70(&local_1c8,&local_2c6,0,local_1e0,local_1e8);
  FUN_140e0ee70(&local_1b8,&local_2b7,local_2c6,local_1d0,local_1d8);
  FUN_140e0ee70(&local_88,&local_2c5,0,local_1c0,local_1c8);
  FUN_140e0ee70(local_78,&local_2b6,local_2c5,local_1b0,local_1b8);
  FUN_140e0ee70(&local_188,&local_2c4,0,local_1a0,local_1a8);
  FUN_140e0ee70(&local_178,&local_2b5,local_2c4,local_190,local_198);
  FUN_140e0ee70(&local_a8,&local_2c3,0,local_180,local_188);
  FUN_140e0ee70(&local_98,&local_2b4,local_2c3,local_170,local_178);
  FUN_140e0ee70(&local_148,&local_2c2,0,local_160,local_168);
  FUN_140e0ee70(&local_138,&local_2b3,local_2c2,local_150,local_158);
  FUN_140e0ee70(&local_c8,&local_2c1,0,local_140,local_148);
  FUN_140e0ee70(&local_b8,&local_2b2,local_2c1,local_130,local_138);
  FUN_140e0ee70(&local_108,&local_2c0,0,local_120,local_128);
  FUN_140e0ee70(&local_f8,&local_2b1,local_2c0,local_110,local_118);
  FUN_140e0ee70(&local_e8,&local_2bf,0,local_100,local_108);
  FUN_140e0ee70(&local_d8,local_2b0,local_2bf,local_f0,local_f8);
  FUN_140e0ee70(&local_278,&local_2be,0,local_e0,local_e8);
  local_d0 = (ulonglong)local_2be + local_d8;
  local_c0 = local_278 >> 0x33 | local_d0 * 0x2000;
  local_50 = local_278 & 0x7ffffffffffff;
  FUN_140e0ee70(&local_270,&local_2bd,0,local_c0,local_c8);
  local_b0 = (ulonglong)local_2bd + local_b8;
  local_a0 = local_270 >> 0x33 | local_b0 * 0x2000;
  local_40 = local_270 & 0x7ffffffffffff;
  FUN_140e0ee70(&local_268,&local_2bc,0,local_a0,local_a8);
  local_90 = (ulonglong)local_2bc + local_98;
  local_80 = local_268 >> 0x33 | local_90 * 0x2000;
  local_20 = local_268 & 0x7ffffffffffff;
  FUN_140e0ee70(local_260,local_2bb,0,local_80,local_88);
  local_58 = local_58 +
             (local_260[0] >> 0x33 | ((ulonglong)local_2bb[0] + local_78[0]) * 0x2000) * 0x13;
  local_50 = (local_58 >> 0x33) + local_50;
  *param_1 = local_58 & 0x7ffffffffffff;
  param_1[1] = local_50 & 0x7ffffffffffff;
  param_1[2] = (local_50 >> 0x33 & 0xff) + local_40;
  param_1[3] = local_20;
  param_1[4] = local_260[0] & 0x7ffffffffffff;
  return;
}


/* address=140e10c50 name=FUN_140e10c50 */

void FUN_140e10c50(ulonglong *param_1,ulonglong *param_2)

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


/* address=140e10e60 name=FUN_140e10e60 */

void FUN_140e10e60(longlong *param_1,longlong *param_2,longlong *param_3)

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


/* address=140e10fc0 name=FUN_140e10fc0 */

void FUN_140e10fc0(longlong *param_1,longlong *param_2,longlong *param_3)

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


/* address=140e11160 name=FUN_140e11160 */

void FUN_140e11160(longlong *param_1,longlong *param_2)

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


/* address=140e112a0 name=FUN_140e112a0 */

void FUN_140e112a0(undefined *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined local_1a8;
  undefined local_1a7;
  undefined local_1a6;
  undefined local_1a5;
  undefined local_1a4;
  undefined local_1a3;
  undefined local_1a2;
  undefined local_1a1;
  undefined local_1a0 [37];
  undefined local_17b [3];
  ulonglong local_178;
  ulonglong local_170 [31];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38 [7];
  
  FUN_140e0ef30(&local_78,&local_1a8,0,*param_2,0x7ffffffffffed);
  FUN_140e0ef30(&local_70,&local_1a7,local_1a8,param_2[1],0x7ffffffffffff);
  FUN_140e0ef30(&local_68,&local_1a6,local_1a7,param_2[2],0x7ffffffffffff);
  FUN_140e0ef30(&local_60,&local_1a5,local_1a6,param_2[3],0x7ffffffffffff);
  FUN_140e0ef30(&local_58,&local_1a4,local_1a5,param_2[4],0x7ffffffffffff);
  FUN_140e0f010(&local_178,local_1a4,0,0xffffffffffffffff);
  FUN_140e0eeb0(local_170,&local_1a3,0,local_78,local_178 & 0x7ffffffffffed);
  FUN_140e0eeb0(local_38,&local_1a2,local_1a3,local_70,local_178 & 0x7ffffffffffff);
  FUN_140e0eeb0(&local_40,&local_1a1,local_1a2,local_68,local_178 & 0x7ffffffffffff);
  FUN_140e0eeb0(&local_48,local_1a0,local_1a1,local_60,local_178 & 0x7ffffffffffff);
  FUN_140e0eeb0(&local_50,local_17b,local_1a0[0],local_58,local_178 & 0x7ffffffffffff);
  uVar1 = local_38[0] * 8 + (local_170[0] >> 0x30 & 0xff);
  uVar2 = local_40 * 0x40 + (uVar1 >> 0x30 & 0xff);
  uVar3 = local_48 * 2 + (uVar2 >> 0x38);
  lVar4 = local_50 * 0x10 + (uVar3 >> 0x30 & 0xff);
  *param_1 = (char)local_170[0];
  param_1[1] = (char)(local_170[0] >> 8);
  param_1[2] = (char)(local_170[0] >> 0x10);
  param_1[3] = (char)(local_170[0] >> 0x18);
  param_1[4] = (char)(local_170[0] >> 0x20);
  param_1[5] = (char)(local_170[0] >> 0x28);
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


/* address=140e11d70 name=FUN_140e11d70 */

void FUN_140e11d70(ulonglong *param_1,byte *param_2)

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


/* address=140e12630 name=FUN_140e12630 */

void FUN_140e12630(ulonglong *param_1,undefined8 *param_2)

{
  byte local_128;
  byte local_127;
  byte local_126;
  byte local_125 [5];
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100 [3];
  longlong local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  ulonglong local_78;
  longlong local_70 [4];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_20;
  
  FUN_140e0efc0(&local_80,local_70,0x1db42,param_2[4]);
  FUN_140e0efc0(&local_a0,&local_90,0x1db42,param_2[3]);
  FUN_140e0efc0(&local_c0,&local_b0,0x1db42,param_2[2]);
  FUN_140e0efc0(&local_e0,&local_d0,0x1db42,param_2[1]);
  FUN_140e0efc0(&local_120,&local_e8,0x1db42,*param_2);
  local_d8 = local_120 >> 0x33 | local_e8 << 0xd;
  local_50 = local_120 & 0x7ffffffffffff;
  FUN_140e0ee70(&local_118,&local_128,0,local_d8,local_e0);
  local_c8 = (ulonglong)local_128 + local_d0;
  local_b8 = local_118 >> 0x33 | local_c8 * 0x2000;
  local_48 = local_118 & 0x7ffffffffffff;
  FUN_140e0ee70(&local_110,&local_127,0,local_b8,local_c0);
  local_a8 = (ulonglong)local_127 + local_b0;
  local_98 = local_110 >> 0x33 | local_a8 * 0x2000;
  local_40 = local_110 & 0x7ffffffffffff;
  FUN_140e0ee70(&local_108,&local_126,0,local_98,local_a0);
  local_88 = (ulonglong)local_126 + local_90;
  local_78 = local_108 >> 0x33 | local_88 * 0x2000;
  local_20 = local_108 & 0x7ffffffffffff;
  FUN_140e0ee70(local_100,local_125,0,local_78,local_80);
  local_50 = local_50 +
             (local_100[0] >> 0x33 | ((ulonglong)local_125[0] + local_70[0]) * 0x2000) * 0x13;
  local_48 = (local_50 >> 0x33 & 0xff) + local_48;
  *param_1 = local_50 & 0x7ffffffffffff;
  param_1[1] = local_48 & 0x7ffffffffffff;
  param_1[2] = (local_48 >> 0x33 & 0xff) + local_40;
  param_1[3] = local_20;
  param_1[4] = local_100[0] & 0x7ffffffffffff;
  return;
}


/* address=140e12a90 name=FUN_140e12a90 */

ulonglong FUN_140e12a90(uint3 *param_1)

{
  return (ulonglong)*param_1;
}


/* address=140e12b10 name=FUN_140e12b10 */

undefined4 FUN_140e12b10(undefined4 *param_1)

{
  return *param_1;
}


/* address=140e12bb0 name=FUN_140e12bb0 */

void FUN_140e12bb0(longlong param_1,longlong param_2)

{
  uint local_18;
  
  if ((*(byte *)(param_2 + 0x1f) & 0x80) != 0) {
    FID_conflict__assert((wchar_t *)s___1413f7fe8,(wchar_t *)s_D_1413f7f10,0x9c);
  }
  FUN_140e11d70(param_1,param_2);
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_1413f80f0,(wchar_t *)s_D_1413f8010,0x9e);
    }
  }
  return;
}


/* address=140e12c70 name=FUN_140e12c70 */

void FUN_140e12c70(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined local_38 [31];
  byte bStack_19;
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_58;
  FUN_140e0bbb0(local_38,param_2,0x20);
  bStack_19 = bStack_19 & 0x7f;
  FUN_140e12bb0(param_1,local_38);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=140e12cf0 name=FUN_140e12cf0 */

void FUN_140e12cf0(undefined8 param_1,longlong param_2)

{
  uint local_18;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_1413f8230,(wchar_t *)s_D_1413f8150,0xa9);
    }
  }
  FUN_140e112a0(param_1,param_2);
  return;
}


/* address=140e12d80 name=FUN_140e12d80 */

void FUN_140e12d80(undefined8 param_1)

{
  FUN_140e0bc50(param_1,0,0x28);
  return;
}


/* address=140e12db0 name=FUN_140e12db0 */

void FUN_140e12db0(undefined8 param_1)

{
  FUN_140e0bc50(param_1,0,0x28);
  return;
}


/* address=140e12de0 name=FUN_140e12de0 */

void FUN_140e12de0(undefined8 *param_1)

{
  FUN_140e0bc50(param_1,0,0x28);
  *param_1 = 1;
  return;
}


/* address=140e12e20 name=FUN_140e12e20 */

void FUN_140e12e20(undefined8 *param_1)

{
  FUN_140e0bc50(param_1,0,0x28);
  *param_1 = 1;
  return;
}


/* address=140e12e60 name=FUN_140e12e60 */

void FUN_140e12e60(longlong param_1,longlong param_2,longlong param_3)

{
  uint local_28;
  uint local_24;
  uint local_20;
  
  for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)local_28 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_1413f8370,(wchar_t *)s_D_1413f8290,0xc4);
    }
  }
  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_3 + (ulonglong)local_24 * 8)) {
      FID_conflict__assert((wchar_t *)s_g_1413f84b0,(wchar_t *)s_D_1413f83d0,0xc5);
    }
  }
  FUN_140e10e60(param_1,param_2,param_3);
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_1 + (ulonglong)local_20 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_1413f85f0,(wchar_t *)s_D_1413f8510,199);
    }
  }
  return;
}


/* address=140e12fb0 name=FUN_140e12fb0 */

void FUN_140e12fb0(longlong param_1,longlong param_2,longlong param_3)

{
  uint local_28;
  uint local_24;
  uint local_20;
  
  for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)local_28 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_1413f8740,(wchar_t *)s_D_1413f8660,0xcd);
    }
  }
  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_3 + (ulonglong)local_24 * 8)) {
      FID_conflict__assert((wchar_t *)s_g_1413f8880,(wchar_t *)s_D_1413f87a0,0xce);
    }
  }
  FUN_140e10fc0(param_1,param_2,param_3);
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_1 + (ulonglong)local_20 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_1413f89c0,(wchar_t *)s_D_1413f88e0,0xd0);
    }
  }
  return;
}


/* address=140e13100 name=FUN_140e13100 */

void FUN_140e13100(longlong param_1,longlong param_2)

{
  uint local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_1413f8b10,(wchar_t *)s_D_1413f8a30,0xd4);
    }
  }
  FUN_140e10c50(param_1,param_2);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_1413f8c60,(wchar_t *)s_D_1413f8b80,0xd6);
    }
  }
  return;
}


/* address=140e131e0 name=FUN_140e131e0 */

void FUN_140e131e0(longlong param_1,longlong param_2,longlong param_3)

{
  uint local_18;
  uint local_14;
  uint local_10;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_i_1413f8da0,(wchar_t *)s_D_1413f8cc0,0xdc);
    }
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_3 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_i_1413f8ee0,(wchar_t *)s_D_1413f8e00,0xdd);
    }
  }
  FUN_140e0f0a0(param_1,param_2,param_3);
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_10 * 8)) {
      FID_conflict__assert((wchar_t *)s_o_1413f9020,(wchar_t *)s_D_1413f8f40,0xdf);
    }
  }
  return;
}


/* address=140e13320 name=FUN_140e13320 */

void FUN_140e13320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e131e0(param_1,param_2,param_3);
  return;
}


/* address=140e13370 name=FUN_140e13370 */

void FUN_140e13370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e131e0(param_1,param_2,param_3);
  return;
}


/* address=140e133c0 name=FUN_140e133c0 */

void FUN_140e133c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e131e0(param_1,param_2,param_3);
  return;
}


/* address=140e13410 name=FUN_140e13410 */

void FUN_140e13410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e131e0(param_1,param_2,param_3);
  return;
}


/* address=140e13460 name=FUN_140e13460 */

void FUN_140e13460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e131e0(param_1,param_2,param_3);
  return;
}


/* address=140e134b0 name=FUN_140e134b0 */

void FUN_140e134b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e131e0(param_1,param_2,param_3);
  return;
}


/* address=140e13500 name=FUN_140e13500 */

void FUN_140e13500(longlong param_1,longlong param_2)

{
  uint local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_1413f9160,(wchar_t *)s_D_1413f9080,0xfb);
    }
  }
  FUN_140e10160(param_1,param_2);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_1413f92b0,(wchar_t *)s_D_1413f91d0,0xfd);
    }
  }
  return;
}


/* address=140e135e0 name=FUN_140e135e0 */

void FUN_140e135e0(longlong param_1,longlong param_2)

{
  uint local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_1413f93f0,(wchar_t *)s_D_1413f9310,0x101);
    }
  }
  FUN_140e10160(param_1,param_2);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_1413f9540,(wchar_t *)s_D_1413f9460,0x103);
    }
  }
  return;
}


/* address=140e136c0 name=FUN_140e136c0 */

void FUN_140e136c0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  uint local_18;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    uVar1 = (*(ulonglong *)(param_1 + (ulonglong)local_18 * 8) ^
            *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) & -param_3;
    *(ulonglong *)(param_1 + (ulonglong)local_18 * 8) =
         *(ulonglong *)(param_1 + (ulonglong)local_18 * 8) ^ uVar1;
    *(ulonglong *)(param_2 + (ulonglong)local_18 * 8) =
         *(ulonglong *)(param_2 + (ulonglong)local_18 * 8) ^ uVar1;
  }
  return;
}


/* address=140e13780 name=FUN_140e13780 */

void FUN_140e13780(longlong param_1,longlong param_2)

{
  uint local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_1413f9680,(wchar_t *)s_D_1413f95a0,0x115);
    }
  }
  FUN_140e12630(param_1,param_2);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_1413f97d0,(wchar_t *)s_D_1413f96f0,0x117);
    }
  }
  return;
}


/* address=140e13860 name=FUN_140e13860 */

void FUN_140e13860(longlong param_1,longlong param_2)

{
  uint local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert((wchar_t *)s_f_1413f9910,(wchar_t *)s_D_1413f9830,0x11c);
    }
  }
  FUN_140e11160(param_1,param_2);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_1 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert((wchar_t *)s_h_1413f9a50,(wchar_t *)s_D_1413f9970,0x11e);
    }
  }
  return;
}


/* address=140e13940 name=FUN_140e13940 */

void FUN_140e13940(longlong param_1,longlong param_2,longlong param_3)

{
  uint local_18;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    *(ulonglong *)(param_1 + (ulonglong)local_18 * 8) =
         *(ulonglong *)(param_1 + (ulonglong)local_18 * 8) ^
         (*(ulonglong *)(param_1 + (ulonglong)local_18 * 8) ^
         *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) & -param_3;
  }
  return;
}


/* address=140e139e0 name=FUN_140e139e0 */

void FUN_140e139e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e0bc00(param_1,param_2,0x28);
  return;
}


/* address=140e13a10 name=FUN_140e13a10 */

void FUN_140e13a10(undefined8 param_1,undefined8 param_2)

{
  FUN_140e0bc00(param_1,param_2,0x28);
  return;
}


/* address=140e13a40 name=FUN_140e13a40 */

void FUN_140e13a40(undefined8 param_1,undefined8 param_2)

{
  FUN_140e0bc00(param_1,param_2,0x28);
  return;
}


/* address=140e13a70 name=FUN_140e13a70 */

void FUN_140e13a70(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_d8 [32];
  int local_b8;
  undefined local_b0 [40];
  undefined local_88 [40];
  undefined local_60 [40];
  undefined local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_d8;
  FUN_140e13500(local_38,param_2);
  FUN_140e135e0(local_88,local_38);
  for (local_b8 = 1; local_b8 < 2; local_b8 = local_b8 + 1) {
    FUN_140e135e0(local_88,local_88);
  }
  FUN_140e13410(local_88,param_2,local_88);
  FUN_140e133c0(local_38,local_38,local_88);
  FUN_140e135e0(local_b0,local_38);
  FUN_140e133c0(local_88,local_88,local_b0);
  FUN_140e135e0(local_b0,local_88);
  for (local_b8 = 1; local_b8 < 5; local_b8 = local_b8 + 1) {
    FUN_140e135e0(local_b0,local_b0);
  }
  FUN_140e133c0(local_88,local_b0,local_88);
  FUN_140e135e0(local_b0,local_88);
  for (local_b8 = 1; local_b8 < 10; local_b8 = local_b8 + 1) {
    FUN_140e135e0(local_b0,local_b0);
  }
  FUN_140e133c0(local_b0,local_b0,local_88);
  FUN_140e135e0(local_60,local_b0);
  for (local_b8 = 1; local_b8 < 0x14; local_b8 = local_b8 + 1) {
    FUN_140e135e0(local_60,local_60);
  }
  FUN_140e133c0(local_b0,local_60,local_b0);
  FUN_140e135e0(local_b0,local_b0);
  for (local_b8 = 1; local_b8 < 10; local_b8 = local_b8 + 1) {
    FUN_140e135e0(local_b0,local_b0);
  }
  FUN_140e133c0(local_88,local_b0,local_88);
  FUN_140e135e0(local_b0,local_88);
  for (local_b8 = 1; local_b8 < 0x32; local_b8 = local_b8 + 1) {
    FUN_140e135e0(local_b0,local_b0);
  }
  FUN_140e133c0(local_b0,local_b0,local_88);
  FUN_140e135e0(local_60,local_b0);
  for (local_b8 = 1; local_b8 < 100; local_b8 = local_b8 + 1) {
    FUN_140e135e0(local_60,local_60);
  }
  FUN_140e133c0(local_b0,local_60,local_b0);
  FUN_140e135e0(local_b0,local_b0);
  for (local_b8 = 1; local_b8 < 0x32; local_b8 = local_b8 + 1) {
    FUN_140e135e0(local_b0,local_b0);
  }
  FUN_140e133c0(local_88,local_b0,local_88);
  FUN_140e135e0(local_88,local_88);
  for (local_b8 = 1; local_b8 < 5; local_b8 = local_b8 + 1) {
    FUN_140e135e0(local_88,local_88);
  }
  FUN_140e133c0(param_1,local_88,local_38);
  FUN_140e28050(local_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140e13df0 name=FUN_140e13df0 */

void FUN_140e13df0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_58;
  FUN_140e13a10(local_38,param_2);
  FUN_140e13a70(param_1,local_38);
  FUN_140e28050(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=140e13e50 name=FUN_140e13e50 */

void FUN_140e13e50(undefined8 param_1)

{
  int iVar1;
  undefined auStack_88 [32];
  uint local_68;
  undefined local_60 [40];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_88;
  FUN_140e13100(local_60,param_1);
  FUN_140e12cf0(local_38,local_60);
  iVar1 = FUN_140d76480(local_38,&DAT_1410bf1a0,0x20);
  local_68 = (uint)(iVar1 != 0);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=140e13ee0 name=FUN_140e13ee0 */

void FUN_140e13ee0(undefined8 param_1)

{
  undefined auStack_58 [32];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_58;
  FUN_140e12cf0(local_38,param_1);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=140e13f30 name=FUN_140e13f30 */

void FUN_140e13f30(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_58;
  FUN_140e135e0(param_1,param_2);
  FUN_140e12e60(local_38,param_1,param_1);
  FUN_140e13100(param_1,local_38);
  FUN_140e28050(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=140e13fa0 name=FUN_140e13fa0 */

void FUN_140e13fa0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_b8 [32];
  int local_98;
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_b8;
  FUN_140e135e0(local_68,param_2);
  FUN_140e135e0(local_90,local_68);
  for (local_98 = 1; local_98 < 2; local_98 = local_98 + 1) {
    FUN_140e135e0(local_90,local_90);
  }
  FUN_140e133c0(local_90,param_2,local_90);
  FUN_140e133c0(local_68,local_68,local_90);
  FUN_140e135e0(local_68,local_68);
  FUN_140e133c0(local_68,local_90,local_68);
  FUN_140e135e0(local_90,local_68);
  for (local_98 = 1; local_98 < 5; local_98 = local_98 + 1) {
    FUN_140e135e0(local_90,local_90);
  }
  FUN_140e133c0(local_68,local_90,local_68);
  FUN_140e135e0(local_90,local_68);
  for (local_98 = 1; local_98 < 10; local_98 = local_98 + 1) {
    FUN_140e135e0(local_90,local_90);
  }
  FUN_140e133c0(local_90,local_90,local_68);
  FUN_140e135e0(local_40,local_90);
  for (local_98 = 1; local_98 < 0x14; local_98 = local_98 + 1) {
    FUN_140e135e0(local_40,local_40);
  }
  FUN_140e133c0(local_90,local_40,local_90);
  FUN_140e135e0(local_90,local_90);
  for (local_98 = 1; local_98 < 10; local_98 = local_98 + 1) {
    FUN_140e135e0(local_90,local_90);
  }
  FUN_140e133c0(local_68,local_90,local_68);
  FUN_140e135e0(local_90,local_68);
  for (local_98 = 1; local_98 < 0x32; local_98 = local_98 + 1) {
    FUN_140e135e0(local_90,local_90);
  }
  FUN_140e133c0(local_90,local_90,local_68);
  FUN_140e135e0(local_40,local_90);
  for (local_98 = 1; local_98 < 100; local_98 = local_98 + 1) {
    FUN_140e135e0(local_40,local_40);
  }
  FUN_140e133c0(local_90,local_40,local_90);
  FUN_140e135e0(local_90,local_90);
  for (local_98 = 1; local_98 < 0x32; local_98 = local_98 + 1) {
    FUN_140e135e0(local_90,local_90);
  }
  FUN_140e133c0(local_68,local_90,local_68);
  FUN_140e135e0(local_68,local_68);
  for (local_98 = 1; local_98 < 2; local_98 = local_98 + 1) {
    FUN_140e135e0(local_68,local_68);
  }
  FUN_140e133c0(param_1,local_68,param_2);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140e14310 name=FUN_140e14310 */

void FUN_140e14310(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_b8 [32];
  longlong local_98;
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_b8;
  FUN_140e13df0(local_90,param_2 + 0x50);
  FUN_140e133c0(local_40,param_2,local_90);
  FUN_140e133c0(local_68,param_2 + 0x28,local_90);
  FUN_140e12cf0(param_1,local_68);
  local_98 = 0x1f;
  iVar1 = FUN_140e13ee0(local_40);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + local_98) ^ (byte)(iVar1 << 7);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140e14400 name=FUN_140e14400 */

void FUN_140e14400(longlong param_1)

{
  FUN_140e12d80(param_1);
  FUN_140e12de0(param_1 + 0x28);
  FUN_140e12de0(param_1 + 0x50);
  return;
}


/* address=140e14450 name=FUN_140e14450 */

void FUN_140e14450(longlong param_1)

{
  FUN_140e12d80(param_1);
  FUN_140e12de0(param_1 + 0x28);
  FUN_140e12de0(param_1 + 0x50);
  FUN_140e12d80(param_1 + 0x78);
  return;
}


/* address=140e144b0 name=FUN_140e144b0 */

void FUN_140e144b0(longlong param_1)

{
  FUN_140e12e20(param_1);
  FUN_140e12e20(param_1 + 0x28);
  FUN_140e12e20(param_1 + 0x50);
  FUN_140e12db0(param_1 + 0x78);
  return;
}


/* address=140e14510 name=FUN_140e14510 */

void FUN_140e14510(longlong param_1)

{
  FUN_140e12e20(param_1);
  FUN_140e12e20(param_1 + 0x28);
  FUN_140e12db0(param_1 + 0x50);
  return;
}


/* address=140e14560 name=FUN_140e14560 */

void FUN_140e14560(longlong param_1,longlong param_2)

{
  FUN_140e139e0(param_1,param_2);
  FUN_140e139e0(param_1 + 0x28,param_2 + 0x28);
  FUN_140e139e0(param_1 + 0x50,param_2 + 0x50);
  return;
}


/* address=140e145c0 name=FUN_140e145c0 */

void FUN_140e145c0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_d8 [32];
  undefined local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_d8;
  FUN_140e0c190(local_b8,param_2);
  FUN_140e0c030(param_1,local_b8);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140e14630 name=FUN_140e14630 */

void FUN_140e14630(longlong param_1,longlong param_2)

{
  undefined auStack_d8 [32];
  longlong local_b8;
  undefined local_b0 [40];
  undefined local_88 [40];
  undefined local_60 [40];
  undefined local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1413fba80 ^ (ulonglong)auStack_d8;
  FUN_140e135e0(local_88,param_2);
  FUN_140e135e0(local_b0,param_2 + 0x28);
  FUN_140e13f30(local_38,param_2 + 0x50);
  local_b8 = param_1 + 0x28;
  FUN_140e12e60(local_b8,param_2,param_2 + 0x28);
  FUN_140e13500(local_60,param_1 + 0x28);
  FUN_140e12e60(param_1 + 0x28,local_b0,local_88);
  FUN_140e12fb0(param_1 + 0x50,local_b0,local_88);
  FUN_140e13100(local_b0,param_1 + 0x28);
  FUN_140e12fb0(param_1,local_60,local_b0);
  FUN_140e13100(local_b0,param_1 + 0x50);
  FUN_140e12fb0(param_1 + 0x78,local_38,local_b0);
  FUN_140e28050(local_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=140e147c0 name=FUN_140e147c0 */

void FUN_140e147c0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_b8 [32];
  undefined local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_b8;
  FUN_140e14560(local_98,param_2);
  FUN_140e14630(param_1,local_98);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=140e14830 name=FUN_140e14830 */

void FUN_140e14830(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  FUN_140e12e60(param_1,param_2 + 0x28,param_2);
  local_a0 = param_1 + 0x28;
  FUN_140e12fb0(local_a0,param_2 + 0x28,param_2);
  FUN_140e134b0(local_90,param_1,param_3);
  FUN_140e134b0(local_68,param_1 + 0x28,param_3 + 0x28);
  FUN_140e13410(local_40,param_3 + 0x50,param_2 + 0x78);
  local_98 = param_1 + 0x78;
  FUN_140e12e60(local_98,param_2 + 0x50,param_2 + 0x50);
  FUN_140e12fb0(param_1,local_90,local_68);
  FUN_140e12e60(param_1 + 0x28,local_90,local_68);
  FUN_140e13100(local_90,param_1 + 0x78);
  FUN_140e12e60(param_1 + 0x50,local_90,local_40);
  FUN_140e12fb0(param_1 + 0x78,local_90,local_40);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=140e14a30 name=FUN_140e14a30 */

void FUN_140e14a30(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  FUN_140e12e60(param_1,param_2 + 0x28,param_2);
  local_a0 = param_1 + 0x28;
  FUN_140e12fb0(local_a0,param_2 + 0x28,param_2);
  FUN_140e134b0(local_90,param_1,param_3 + 0x28);
  FUN_140e134b0(local_68,param_1 + 0x28,param_3);
  FUN_140e13410(local_40,param_3 + 0x50,param_2 + 0x78);
  local_98 = param_1 + 0x78;
  FUN_140e12e60(local_98,param_2 + 0x50,param_2 + 0x50);
  FUN_140e12fb0(param_1,local_90,local_68);
  FUN_140e12e60(param_1 + 0x28,local_90,local_68);
  FUN_140e13100(local_90,param_1 + 0x78);
  FUN_140e12fb0(param_1 + 0x50,local_90,local_40);
  FUN_140e12e60(param_1 + 0x78,local_90,local_40);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=140e14c30 name=FUN_140e14c30 */

byte FUN_140e14c30(byte param_1,byte param_2)

{
  byte local_14;
  
  local_14 = (byte)((param_1 ^ param_2) - 1 >> 0x1f);
  return local_14;
}


/* address=140e14c90 name=FUN_140e14c90 */

void FUN_140e14c90(longlong param_1,longlong param_2,undefined param_3)

{
  FUN_140e13940(param_1,param_2,param_3);
  FUN_140e13940(param_1 + 0x28,param_2 + 0x28,param_3);
  FUN_140e13940(param_1 + 0x50,param_2 + 0x50,param_3);
  return;
}


/* address=140e14d40 name=FUN_140e14d40 */

byte FUN_140e14d40(char param_1)

{
  byte local_18;
  
  local_18 = (byte)(param_1 >> 7) >> 7;
  return local_18;
}


/* address=140e14d70 name=FUN_140e14d70 */

void FUN_140e14d70(longlong param_1,int param_2,byte param_3)

{
  undefined uVar1;
  undefined auStack_e8 [32];
  char local_c8;
  char local_c7;
  undefined local_c0 [40];
  undefined local_98 [40];
  undefined local_70 [40];
  undefined local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_e8;
  local_c7 = FUN_140e14d40(param_3);
  local_c8 = param_3 + (-local_c7 & param_3) * -2;
  FUN_140e14510(param_1);
  uVar1 = FUN_140e14c30(local_c8,1);
  FUN_140e14c90(param_1,&DAT_1410bf280 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_140e14c30(local_c8,2);
  FUN_140e14c90(param_1,&UNK_1410bf2f8 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_140e14c30(local_c8,3);
  FUN_140e14c90(param_1,&UNK_1410bf370 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_140e14c30(local_c8,4);
  FUN_140e14c90(param_1,&UNK_1410bf3e8 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_140e14c30(local_c8,5);
  FUN_140e14c90(param_1,&UNK_1410bf460 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_140e14c30(local_c8,6);
  FUN_140e14c90(param_1,&UNK_1410bf4d8 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_140e14c30(local_c8,7);
  FUN_140e14c90(param_1,&UNK_1410bf550 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_140e14c30(local_c8,8);
  FUN_140e14c90(param_1,&UNK_1410bf5c8 + (longlong)param_2 * 0x3c0,uVar1);
  FUN_140e13a40(local_98,param_1 + 0x28);
  FUN_140e13a40(local_70,param_1);
  FUN_140e13100(local_c0,param_1 + 0x50);
  FUN_140e13860(local_48,local_c0);
  FUN_140e14c90(param_1,local_98,local_c7);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_e8);
  return;
}


/* address=140e150b0 name=FUN_140e150b0 */

void FUN_140e150b0(longlong param_1,longlong param_2,undefined param_3)

{
  FUN_140e13940(param_1,param_2,param_3);
  FUN_140e13940(param_1 + 0x28,param_2 + 0x28,param_3);
  FUN_140e13940(param_1 + 0x50,param_2 + 0x50,param_3);
  FUN_140e13940(param_1 + 0x78,param_2 + 0x78,param_3);
  return;
}


/* address=140e15190 name=FUN_140e15190 */

void FUN_140e15190(longlong param_1,longlong param_2)

{
  byte bVar1;
  int local_28;
  int local_24;
  int local_20;
  
  for (local_28 = 0; local_28 < 0x100; local_28 = local_28 + 1) {
    *(byte *)(param_1 + local_28) =
         (byte)((int)(uint)*(byte *)(param_2 + (local_28 >> 3)) >> ((byte)local_28 & 7)) & 1;
  }
  local_28 = 0;
  while( true ) {
    if (0xff < local_28) {
      return;
    }
    if (*(char *)(param_1 + local_28) != '\0') break;
LAB_140e151eb:
    local_28 = local_28 + 1;
  }
  local_24 = 1;
  do {
    if ((6 < local_24) || (0xff < local_28 + local_24)) goto LAB_140e151eb;
    if (*(char *)(param_1 + (local_28 + local_24)) != '\0') {
      bVar1 = (byte)local_24;
      if ((int)*(char *)(param_1 + local_28) +
          ((int)*(char *)(param_1 + (local_28 + local_24)) << (bVar1 & 0x1f)) < 0x10) {
        *(char *)(param_1 + local_28) =
             *(char *)(param_1 + local_28) +
             (char)((int)*(char *)(param_1 + (local_28 + local_24)) << (bVar1 & 0x1f));
        *(undefined *)(param_1 + (local_28 + local_24)) = 0;
      }
      else {
        if ((int)*(char *)(param_1 + local_28) -
            ((int)*(char *)(param_1 + (local_28 + local_24)) << (bVar1 & 0x1f)) < -0xf)
        goto LAB_140e151eb;
        *(char *)(param_1 + local_28) =
             *(char *)(param_1 + local_28) -
             (char)((int)*(char *)(param_1 + (local_28 + local_24)) << (bVar1 & 0x1f));
        for (local_20 = local_28 + local_24; local_20 < 0x100; local_20 = local_20 + 1) {
          if (*(char *)(param_1 + local_20) == '\0') {
            *(undefined *)(param_1 + local_20) = 1;
            break;
          }
          *(undefined *)(param_1 + local_20) = 0;
        }
      }
    }
    local_24 = local_24 + 1;
  } while( true );
}


/* address=140e15400 name=FUN_140e15400 */

void FUN_140e15400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auStack_928 [32];
  int local_908;
  undefined local_8f8 [160];
  undefined local_858 [160];
  undefined local_7b8 [160];
  undefined local_718 [160];
  undefined local_678 [160];
  undefined local_5d8 [160];
  undefined local_538 [160];
  undefined local_498 [160];
  undefined local_3f8 [160];
  undefined local_358 [160];
  undefined local_2b8 [160];
  char local_218 [256];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_928;
  FUN_140e15190(local_218,param_2);
  FUN_140e15190(local_118,param_4);
  FUN_140e0c030(local_718,param_3);
  FUN_140e147c0(local_8f8,param_3);
  FUN_140e0c190(local_7b8,local_8f8);
  FUN_140e0c270(local_8f8,local_7b8,local_718);
  FUN_140e0c190(local_858,local_8f8);
  FUN_140e0c030(local_678,local_858);
  FUN_140e0c270(local_8f8,local_7b8,local_678);
  FUN_140e0c190(local_858,local_8f8);
  FUN_140e0c030(local_5d8,local_858);
  FUN_140e0c270(local_8f8,local_7b8,local_5d8);
  FUN_140e0c190(local_858,local_8f8);
  FUN_140e0c030(local_538,local_858);
  FUN_140e0c270(local_8f8,local_7b8,local_538);
  FUN_140e0c190(local_858,local_8f8);
  FUN_140e0c030(local_498,local_858);
  FUN_140e0c270(local_8f8,local_7b8,local_498);
  FUN_140e0c190(local_858,local_8f8);
  FUN_140e0c030(local_3f8,local_858);
  FUN_140e0c270(local_8f8,local_7b8,local_3f8);
  FUN_140e0c190(local_858,local_8f8);
  FUN_140e0c030(local_358,local_858);
  FUN_140e0c270(local_8f8,local_7b8,local_358);
  FUN_140e0c190(local_858,local_8f8);
  FUN_140e0c030(local_2b8,local_858);
  FUN_140e14400(param_1);
  for (local_908 = 0xff;
      ((-1 < local_908 && (local_218[local_908] == '\0')) && (local_118[local_908] == '\0'));
      local_908 = local_908 + -1) {
  }
  for (; -1 < local_908; local_908 = local_908 + -1) {
    FUN_140e14630(local_8f8,param_1);
    if (local_218[local_908] < '\x01') {
      if (local_218[local_908] < '\0') {
        FUN_140e0c190(local_858,local_8f8);
        FUN_140e0c480(local_8f8,local_858,
                      local_718 + (longlong)(-(int)local_218[local_908] / 2) * 0xa0);
      }
    }
    else {
      FUN_140e0c190(local_858,local_8f8);
      FUN_140e0c270(local_8f8,local_858,local_718 + (longlong)((int)local_218[local_908] / 2) * 0xa0
                   );
    }
    if (local_118[local_908] < '\x01') {
      if (local_118[local_908] < '\0') {
        FUN_140e0c190(local_858,local_8f8);
        FUN_140e14a30(local_8f8,local_858,
                      &DAT_1410c6a80 + (longlong)(-(int)local_118[local_908] / 2) * 0x78);
      }
    }
    else {
      FUN_140e0c190(local_858,local_8f8);
      FUN_140e14830(local_8f8,local_858,
                    &DAT_1410c6a80 + (longlong)((int)local_118[local_908] / 2) * 0x78);
    }
    FUN_140e0c0e0(param_1,local_8f8);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_928);
  return;
}


/* address=140e15940 name=FUN_140e15940 */

longlong FUN_140e15940(longlong param_1)

{
  return param_1 << 0x15;
}


/* address=140e15960 name=FUN_140e15960 */

void FUN_140e15960(undefined *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  undefined local_290;
  undefined local_230;
  
  uVar1 = FUN_140e12a90(param_2);
  uVar1 = uVar1 & 0x1fffff;
  uVar2 = FUN_140e12b10(param_2 + 2);
  uVar2 = uVar2 >> 5 & 0x1fffff;
  uVar3 = FUN_140e12a90(param_2 + 5);
  uVar3 = uVar3 >> 2 & 0x1fffff;
  uVar4 = FUN_140e12b10(param_2 + 7);
  uVar4 = uVar4 >> 7 & 0x1fffff;
  uVar5 = FUN_140e12b10(param_2 + 10);
  uVar5 = uVar5 >> 4 & 0x1fffff;
  uVar6 = FUN_140e12a90(param_2 + 0xd);
  uVar6 = uVar6 >> 1 & 0x1fffff;
  uVar7 = FUN_140e12b10(param_2 + 0xf);
  uVar7 = uVar7 >> 6 & 0x1fffff;
  uVar8 = FUN_140e12a90(param_2 + 0x12);
  uVar8 = uVar8 >> 3 & 0x1fffff;
  uVar9 = FUN_140e12a90(param_2 + 0x15);
  uVar9 = uVar9 & 0x1fffff;
  uVar10 = FUN_140e12b10(param_2 + 0x17);
  uVar10 = uVar10 >> 5 & 0x1fffff;
  uVar11 = FUN_140e12a90(param_2 + 0x1a);
  uVar11 = uVar11 >> 2 & 0x1fffff;
  uVar12 = FUN_140e12b10(param_2 + 0x1c);
  uVar12 = uVar12 >> 7;
  uVar13 = FUN_140e12a90(param_3);
  uVar13 = uVar13 & 0x1fffff;
  uVar14 = FUN_140e12b10(param_3 + 2);
  uVar14 = uVar14 >> 5 & 0x1fffff;
  uVar15 = FUN_140e12a90(param_3 + 5);
  uVar15 = uVar15 >> 2 & 0x1fffff;
  uVar16 = FUN_140e12b10(param_3 + 7);
  uVar16 = uVar16 >> 7 & 0x1fffff;
  uVar17 = FUN_140e12b10(param_3 + 10);
  uVar17 = uVar17 >> 4 & 0x1fffff;
  uVar18 = FUN_140e12a90(param_3 + 0xd);
  uVar18 = uVar18 >> 1 & 0x1fffff;
  uVar19 = FUN_140e12b10(param_3 + 0xf);
  uVar19 = uVar19 >> 6 & 0x1fffff;
  uVar20 = FUN_140e12a90(param_3 + 0x12);
  uVar20 = uVar20 >> 3 & 0x1fffff;
  uVar21 = FUN_140e12a90(param_3 + 0x15);
  uVar21 = uVar21 & 0x1fffff;
  uVar22 = FUN_140e12b10(param_3 + 0x17);
  uVar22 = uVar22 >> 5 & 0x1fffff;
  uVar23 = FUN_140e12a90(param_3 + 0x1a);
  uVar23 = uVar23 >> 2 & 0x1fffff;
  uVar24 = FUN_140e12b10(param_3 + 0x1c);
  uVar24 = uVar24 >> 7;
  uVar25 = FUN_140e12a90(param_4);
  uVar26 = FUN_140e12b10(param_4 + 2);
  uVar27 = FUN_140e12a90(param_4 + 5);
  uVar28 = FUN_140e12b10(param_4 + 7);
  uVar29 = FUN_140e12b10(param_4 + 10);
  uVar30 = FUN_140e12a90(param_4 + 0xd);
  uVar31 = FUN_140e12b10(param_4 + 0xf);
  uVar32 = FUN_140e12a90(param_4 + 0x12);
  uVar33 = FUN_140e12a90(param_4 + 0x15);
  uVar34 = FUN_140e12b10(param_4 + 0x17);
  uVar35 = FUN_140e12a90(param_4 + 0x1a);
  uVar36 = FUN_140e12b10(param_4 + 0x1c);
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
  lVar47 = FUN_140e15940(lVar47);
  lVar48 = lVar37 + 0x100000 >> 0x15;
  lVar79 = (uVar28 >> 7 & 0x1fffff) + uVar1 * uVar16 + uVar2 * uVar15 + uVar3 * uVar14 +
           uVar4 * uVar13 + lVar48;
  lVar48 = FUN_140e15940(lVar48);
  lVar49 = lVar38 + 0x100000 >> 0x15;
  lVar80 = (uVar30 >> 1 & 0x1fffff) + uVar1 * uVar18 + uVar2 * uVar17 + uVar3 * uVar16 +
           uVar4 * uVar15 + uVar5 * uVar14 + uVar6 * uVar13 + lVar49;
  lVar49 = FUN_140e15940(lVar49);
  lVar50 = lVar39 + 0x100000 >> 0x15;
  lVar81 = (uVar32 >> 3 & 0x1fffff) + uVar1 * uVar20 + uVar2 * uVar19 + uVar3 * uVar18 +
           uVar4 * uVar17 + uVar5 * uVar16 + uVar6 * uVar15 + uVar7 * uVar14 + uVar8 * uVar13 +
           lVar50;
  lVar50 = FUN_140e15940(lVar50);
  lVar51 = lVar40 + 0x100000 >> 0x15;
  lVar82 = (uVar34 >> 5 & 0x1fffff) + uVar1 * uVar22 + uVar2 * uVar21 + uVar3 * uVar20 +
           uVar4 * uVar19 + uVar5 * uVar18 + uVar6 * uVar17 + uVar7 * uVar16 + uVar8 * uVar15 +
           uVar9 * uVar14 + uVar10 * uVar13 + lVar51;
  lVar51 = FUN_140e15940(lVar51);
  lVar52 = lVar41 + 0x100000 >> 0x15;
  lVar83 = (uVar36 >> 7) + uVar1 * uVar24 + uVar2 * uVar23 + uVar3 * uVar22 + uVar4 * uVar21 +
           uVar5 * uVar20 + uVar6 * uVar19 + uVar7 * uVar18 + uVar8 * uVar17 + uVar9 * uVar16 +
           uVar10 * uVar15 + uVar11 * uVar14 + uVar12 * uVar13 + lVar52;
  lVar52 = FUN_140e15940(lVar52);
  lVar53 = lVar42 + 0x100000 >> 0x15;
  lVar84 = uVar3 * uVar24 + uVar4 * uVar23 + uVar5 * uVar22 + uVar6 * uVar21 + uVar7 * uVar20 +
           uVar8 * uVar19 + uVar9 * uVar18 + uVar10 * uVar17 + uVar11 * uVar16 + uVar12 * uVar15 +
           lVar53;
  lVar53 = FUN_140e15940(lVar53);
  lVar54 = lVar43 + 0x100000 >> 0x15;
  lVar85 = uVar5 * uVar24 + uVar6 * uVar23 + uVar7 * uVar22 + uVar8 * uVar21 + uVar9 * uVar20 +
           uVar10 * uVar19 + uVar11 * uVar18 + uVar12 * uVar17 + lVar54;
  lVar54 = FUN_140e15940(lVar54);
  lVar55 = lVar44 + 0x100000 >> 0x15;
  lVar86 = uVar7 * uVar24 + uVar8 * uVar23 + uVar9 * uVar22 + uVar10 * uVar21 + uVar11 * uVar20 +
           uVar12 * uVar19 + lVar55;
  lVar55 = FUN_140e15940(lVar55);
  lVar56 = lVar45 + 0x100000 >> 0x15;
  lVar87 = uVar9 * uVar24 + uVar10 * uVar23 + uVar11 * uVar22 + uVar12 * uVar21 + lVar56;
  lVar56 = FUN_140e15940(lVar56);
  lVar57 = lVar46 + 0x100000 >> 0x15;
  lVar88 = uVar11 * uVar24 + uVar12 * uVar23 + lVar57;
  lVar57 = FUN_140e15940(lVar57);
  lVar58 = (longlong)(uVar12 * uVar24 + 0x100000) >> 0x15;
  lVar59 = FUN_140e15940(lVar58);
  lVar60 = lVar78 + 0x100000 >> 0x15;
  lVar61 = FUN_140e15940(lVar60);
  lVar62 = lVar79 + 0x100000 >> 0x15;
  lVar63 = FUN_140e15940(lVar62);
  lVar64 = lVar80 + 0x100000 >> 0x15;
  lVar65 = FUN_140e15940(lVar64);
  lVar66 = lVar81 + 0x100000 >> 0x15;
  lVar67 = FUN_140e15940(lVar66);
  lVar68 = lVar82 + 0x100000 >> 0x15;
  lVar69 = FUN_140e15940(lVar68);
  lVar70 = lVar83 + 0x100000 >> 0x15;
  lVar71 = FUN_140e15940(lVar70);
  lVar72 = lVar84 + 0x100000 >> 0x15;
  lVar73 = FUN_140e15940(lVar72);
  lVar74 = lVar85 + 0x100000 >> 0x15;
  lVar75 = FUN_140e15940(lVar74);
  lVar76 = lVar86 + 0x100000 >> 0x15;
  lVar89 = (lVar45 - lVar56) + lVar76;
  lVar45 = FUN_140e15940(lVar76);
  lVar56 = lVar87 + 0x100000 >> 0x15;
  lVar57 = (lVar46 - lVar57) + lVar56;
  lVar46 = FUN_140e15940(lVar56);
  lVar87 = lVar87 - lVar46;
  lVar46 = lVar88 + 0x100000 >> 0x15;
  lVar56 = (uVar12 * uVar24 - lVar59) + lVar46;
  lVar46 = FUN_140e15940(lVar46);
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
  lVar39 = FUN_140e15940(lVar39);
  lVar40 = lVar64 + 0x100000 >> 0x15;
  lVar68 = (lVar82 - lVar69) + lVar88 * 0xa2c13 + lVar57 * 0x72d18 + lVar87 * 0x9fb67 +
           lVar89 * -0xf39ad + lVar40;
  lVar40 = FUN_140e15940(lVar40);
  lVar41 = lVar66 + 0x100000 >> 0x15;
  lVar69 = (lVar83 - lVar71) + lVar58 * 0xa2c13 + lVar56 * 0x72d18 + lVar88 * 0x9fb67 +
           lVar57 * -0xf39ad + lVar87 * 0x215d1 + lVar89 * -0xa6f7d + lVar41;
  lVar41 = FUN_140e15940(lVar41);
  lVar42 = lVar53 + 0x100000 >> 0x15;
  lVar57 = (lVar84 - lVar73) + lVar58 * 0x9fb67 + lVar56 * -0xf39ad + lVar88 * 0x215d1 +
           lVar57 * -0xa6f7d + lVar42;
  lVar42 = FUN_140e15940(lVar42);
  lVar43 = lVar54 + 0x100000 >> 0x15;
  lVar58 = (lVar85 - lVar75) + lVar58 * 0x215d1 + lVar56 * -0xa6f7d + lVar43;
  lVar43 = FUN_140e15940(lVar43);
  lVar44 = lVar55 + 0x100000 >> 0x15;
  lVar56 = (lVar86 - lVar45) + lVar44;
  lVar44 = FUN_140e15940(lVar44);
  lVar45 = lVar67 + 0x100000 >> 0x15;
  lVar46 = FUN_140e15940(lVar45);
  lVar50 = lVar68 + 0x100000 >> 0x15;
  lVar51 = FUN_140e15940(lVar50);
  lVar52 = lVar69 + 0x100000 >> 0x15;
  lVar53 = (lVar53 - lVar42) + lVar52;
  lVar42 = FUN_140e15940(lVar52);
  lVar52 = lVar57 + 0x100000 >> 0x15;
  lVar54 = (lVar54 - lVar43) + lVar52;
  lVar43 = FUN_140e15940(lVar52);
  lVar57 = lVar57 - lVar43;
  lVar43 = lVar58 + 0x100000 >> 0x15;
  lVar44 = (lVar55 - lVar44) + lVar43;
  lVar43 = FUN_140e15940(lVar43);
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
  lVar37 = FUN_140e15940(lVar37);
  lVar38 = lVar60 + 0x100000 >> 0x15;
  lVar63 = (lVar79 - lVar63) + lVar58 * 0xa2c13 + lVar54 * 0x72d18 + lVar57 * 0x9fb67 +
           lVar53 * -0xf39ad + lVar38;
  lVar38 = FUN_140e15940(lVar38);
  lVar39 = lVar62 + 0x100000 >> 0x15;
  lVar57 = (lVar80 - lVar65) + lVar56 * 0xa2c13 + lVar44 * 0x72d18 + lVar58 * 0x9fb67 +
           lVar54 * -0xf39ad + lVar57 * 0x215d1 + lVar53 * -0xa6f7d + lVar39;
  lVar39 = FUN_140e15940(lVar39);
  lVar40 = lVar59 + 0x100000 >> 0x15;
  lVar58 = (lVar67 - lVar46) + lVar56 * 0x9fb67 + lVar44 * -0xf39ad + lVar58 * 0x215d1 +
           lVar54 * -0xa6f7d + lVar40;
  lVar40 = FUN_140e15940(lVar40);
  lVar41 = lVar64 + 0x100000 >> 0x15;
  lVar56 = (lVar68 - lVar51) + lVar56 * 0x215d1 + lVar44 * -0xa6f7d + lVar41;
  lVar41 = FUN_140e15940(lVar41);
  lVar43 = lVar55 + 0x100000 >> 0x15;
  lVar65 = (lVar69 - lVar42) + lVar43;
  lVar42 = FUN_140e15940(lVar43);
  lVar43 = lVar61 + 0x100000 >> 0x15;
  lVar44 = FUN_140e15940(lVar43);
  lVar45 = lVar63 + 0x100000 >> 0x15;
  lVar46 = FUN_140e15940(lVar45);
  lVar47 = lVar57 + 0x100000 >> 0x15;
  lVar48 = FUN_140e15940(lVar47);
  lVar49 = lVar58 + 0x100000 >> 0x15;
  lVar50 = FUN_140e15940(lVar49);
  lVar51 = lVar56 + 0x100000 >> 0x15;
  lVar52 = FUN_140e15940(lVar51);
  lVar53 = lVar65 + 0x100000 >> 0x15;
  lVar54 = FUN_140e15940(lVar53);
  lVar66 = (lVar66 - lVar37) + lVar53 * 0xa2c13;
  lVar37 = lVar66 >> 0x15;
  lVar61 = (lVar61 - lVar44) + lVar53 * 0x72d18 + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar44 = lVar61 >> 0x15;
  lVar60 = (lVar60 - lVar38) + lVar43 + lVar53 * 0x9fb67 + lVar44;
  lVar38 = FUN_140e15940(lVar44);
  lVar43 = lVar60 >> 0x15;
  lVar63 = (lVar63 - lVar46) + lVar53 * -0xf39ad + lVar43;
  lVar43 = FUN_140e15940(lVar43);
  lVar44 = lVar63 >> 0x15;
  lVar62 = (lVar62 - lVar39) + lVar45 + lVar53 * 0x215d1 + lVar44;
  lVar39 = FUN_140e15940(lVar44);
  lVar44 = lVar62 >> 0x15;
  lVar53 = (lVar57 - lVar48) + lVar53 * -0xa6f7d + lVar44;
  lVar44 = FUN_140e15940(lVar44);
  lVar45 = lVar53 >> 0x15;
  lVar57 = (lVar59 - lVar40) + lVar47 + lVar45;
  lVar40 = FUN_140e15940(lVar45);
  lVar45 = lVar57 >> 0x15;
  lVar50 = (lVar58 - lVar50) + lVar45;
  lVar45 = FUN_140e15940(lVar45);
  lVar46 = lVar50 >> 0x15;
  lVar58 = (lVar64 - lVar41) + lVar49 + lVar46;
  lVar41 = FUN_140e15940(lVar46);
  lVar46 = lVar58 >> 0x15;
  lVar52 = (lVar56 - lVar52) + lVar46;
  lVar46 = FUN_140e15940(lVar46);
  lVar47 = lVar52 >> 0x15;
  lVar51 = (lVar55 - lVar42) + lVar51 + lVar47;
  lVar42 = FUN_140e15940(lVar47);
  lVar47 = lVar51 >> 0x15;
  lVar54 = (lVar65 - lVar54) + lVar47;
  lVar47 = FUN_140e15940(lVar47);
  lVar48 = lVar54 >> 0x15;
  lVar49 = FUN_140e15940(lVar48);
  lVar55 = (lVar66 - lVar37) + lVar48 * 0xa2c13;
  lVar37 = lVar55 >> 0x15;
  lVar38 = (lVar61 - lVar38) + lVar48 * 0x72d18 + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar55 = lVar55 - lVar37;
  lVar37 = lVar38 >> 0x15;
  lVar43 = (lVar60 - lVar43) + lVar48 * 0x9fb67 + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar38 = lVar38 - lVar37;
  lVar37 = lVar43 >> 0x15;
  lVar39 = (lVar63 - lVar39) + lVar48 * -0xf39ad + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar43 = lVar43 - lVar37;
  lVar37 = lVar39 >> 0x15;
  lVar44 = (lVar62 - lVar44) + lVar48 * 0x215d1 + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar39 = lVar39 - lVar37;
  lVar37 = lVar44 >> 0x15;
  lVar40 = (lVar53 - lVar40) + lVar48 * -0xa6f7d + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar44 = lVar44 - lVar37;
  lVar37 = lVar40 >> 0x15;
  lVar45 = (lVar57 - lVar45) + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar40 = lVar40 - lVar37;
  lVar37 = lVar45 >> 0x15;
  lVar41 = (lVar50 - lVar41) + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar45 = lVar45 - lVar37;
  lVar37 = lVar41 >> 0x15;
  lVar46 = (lVar58 - lVar46) + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar41 = lVar41 - lVar37;
  lVar37 = lVar46 >> 0x15;
  lVar42 = (lVar52 - lVar42) + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar46 = lVar46 - lVar37;
  lVar37 = lVar42 >> 0x15;
  lVar48 = (lVar51 - lVar47) + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar42 = lVar42 - lVar37;
  lVar37 = lVar48 >> 0x15;
  lVar47 = (lVar54 - lVar49) + lVar37;
  lVar37 = FUN_140e15940(lVar37);
  lVar48 = lVar48 - lVar37;
  local_230 = (undefined)lVar55;
  *param_1 = local_230;
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
  local_290 = (undefined)lVar46;
  param_1[0x15] = local_290;
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


/* address=140e18de0 name=FUN_140e18de0 */

void FUN_140e18de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_248 [32];
  uint local_228;
  int local_224;
  uint local_220;
  undefined local_218 [40];
  undefined local_1f0 [40];
  undefined local_1c8 [40];
  undefined local_1a0 [40];
  undefined local_178 [40];
  undefined local_150 [40];
  undefined local_128 [40];
  undefined local_100 [40];
  undefined local_d8 [40];
  undefined local_b0 [40];
  undefined local_88 [40];
  undefined local_60 [40];
  byte local_38 [31];
  byte bStack_19;
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_248;
  FUN_140e0bbb0(local_38,param_2,0x20);
  local_38[0] = local_38[0] & 0xf8;
  bStack_19 = bStack_19 & 0x7f | 0x40;
  FUN_140e12c70(local_88,param_3);
  FUN_140e12de0(local_1c8);
  FUN_140e12d80(local_218);
  FUN_140e139e0(local_178,local_88);
  FUN_140e12de0(local_1f0);
  local_228 = 0;
  for (local_224 = 0xfe; -1 < local_224; local_224 = local_224 + -1) {
    local_220 = (int)(uint)local_38[(int)(local_224 + (local_224 >> 0x1f & 7U)) >> 3] >>
                ((byte)local_224 & 7) & 1;
    local_228 = local_228 ^ local_220;
    FUN_140e136c0(local_1c8,local_178,local_228);
    FUN_140e136c0(local_218,local_1f0,local_228);
    local_228 = local_220;
    FUN_140e12fb0(local_100,local_178,local_1f0);
    FUN_140e12fb0(local_1a0,local_1c8,local_218);
    FUN_140e12e60(local_d8,local_1c8,local_218);
    FUN_140e12e60(local_150,local_178,local_1f0);
    FUN_140e134b0(local_1f0,local_100,local_d8);
    FUN_140e134b0(local_218,local_150,local_1a0);
    FUN_140e13500(local_128,local_1a0);
    FUN_140e13500(local_b0,local_d8);
    FUN_140e12e60(local_60,local_1f0,local_218);
    FUN_140e12fb0(local_150,local_1f0,local_218);
    FUN_140e133c0(local_1c8,local_b0,local_128);
    FUN_140e12fb0(local_1a0,local_b0,local_128);
    FUN_140e13500(local_218,local_150);
    FUN_140e13780(local_1f0,local_1a0);
    FUN_140e13500(local_178,local_60);
    FUN_140e12e60(local_100,local_128,local_1f0);
    FUN_140e133c0(local_1f0,local_88,local_218);
    FUN_140e134b0(local_218,local_1a0,local_100);
  }
  FUN_140e136c0(local_1c8,local_178,local_228);
  FUN_140e136c0(local_218,local_1f0,local_228);
  FUN_140e13df0(local_218,local_218);
  FUN_140e133c0(local_1c8,local_1c8,local_218);
  FUN_140e12cf0(param_1,local_1c8);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_248);
  return;
}


/* address=140e191c0 name=FUN_140e191c0 */

void FUN_140e191c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e18de0(param_1,param_2,param_3);
  return;
}


/* address=140e191f0 name=FUN_140e191f0 */

longlong FUN_140e191f0(longlong param_1)

{
  FUN_140d139c0(param_1);
  FUN_140d7f0b0(param_1 + 8);
  return param_1;
}


/* address=140e19230 name=FUN_140e19230 */

void FUN_140e19230(longlong param_1)

{
  FUN_140d7f0e0(param_1 + 8);
  FUN_140d924c0(param_1);
  return;
}


/* address=140e19270 name=FUN_140e19270 */

bool FUN_140e19270(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_140e1f100();
  FUN_140d92500(param_1,uVar2);
  cVar1 = FUN_140d11eb0(param_1);
  if (cVar1 != '\0') {
    FUN_140e19ab0(param_1 + 8);
  }
  return cVar1 != '\0';
}


/* address=140e192d0 name=FUN_140e192d0 */

undefined FUN_140e192d0(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar2 = FUN_140d8bd00(param_2,param_3);
  lVar3 = FUN_140e196c0(param_1);
  if (lVar3 == lVar2) {
    return 1;
  }
  uVar4 = FUN_140d11b30(param_1 + 8);
  iVar1 = FUN_140d1c5a0(uVar4,lVar2,0);
  if (iVar1 != 0) {
    puVar5 = (undefined8 *)FUN_140d11ad0(param_1);
    lVar2 = FUN_140d11ad0(param_1);
    uVar4 = FUN_140d11b30(param_1 + 8);
    iVar1 = FUN_140d1c6d0(uVar4,*(undefined8 *)(lVar2 + 8),*puVar5);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=140e193b0 name=FUN_140e193b0 */

void FUN_140e193b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined auStack_e8 [32];
  undefined local_c8;
  undefined local_c7;
  undefined local_c6;
  undefined local_c5;
  undefined local_c0;
  undefined7 uStack_bf;
  undefined8 local_b8;
  undefined *local_b0;
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_140d11eb0(param_1);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)FUN_140d11ad0(param_1);
    *puVar3 = 0;
  }
  cVar1 = FUN_140e197d0(param_1,local_68,&local_c0);
  if (cVar1 != '\0') {
    local_c8 = 0xfe;
    local_c7 = 0;
    local_c6 = 0;
    local_c5 = local_c0;
    local_b8 = FUN_140e196c0(param_1);
    uVar4 = FUN_140d11b30(param_1 + 8);
    iVar2 = FUN_140d1c5a0(uVar4,local_b8,0);
    if (iVar2 != 0) {
      local_b0 = local_88;
      puVar5 = (undefined *)FUN_140d78340(local_b0,&local_c8);
      puVar7 = local_a8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_140e196f0(param_1,local_a8);
      if (cVar1 != '\0') {
        puVar5 = (undefined *)FUN_140d11e40(local_78,local_68,CONCAT71(uStack_bf,local_c0));
        puVar7 = local_98;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_140e196f0(param_1,local_98);
      }
    }
  }
  FUN_140e28050(local_28 ^ (ulonglong)auStack_e8);
  return;
}


/* address=140e19530 name=FUN_140e19530 */

ulonglong FUN_140e19530(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  byte local_24;
  
  lVar4 = FUN_140e196c0(param_1);
  if (lVar4 != 0) {
    iVar2 = FUN_140d1c8b0(lVar4);
    iVar3 = FUN_140d1c8b0(param_3);
    if (iVar2 == iVar3) {
      uVar5 = FUN_140d11b30(param_1 + 8);
      iVar2 = FUN_140d1c2e0(param_2,uVar5);
      return (ulonglong)(iVar2 != 0);
    }
  }
  cVar1 = FUN_140d11eb0(param_1);
  if (cVar1 == '\0') {
    uVar7 = FUN_140d186f0(0x10,0,0x44,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_transcript.cc"
                          ,0xd8);
    return uVar7 & 0xffffffffffffff00;
  }
  iVar2 = FUN_140d1c5a0(param_2,param_3,0);
  if (iVar2 != 0) {
    puVar6 = (undefined8 *)FUN_140d11ad0(param_1);
    lVar4 = FUN_140d11ad0(param_1);
    iVar2 = FUN_140d1c6d0(param_2,*(undefined8 *)(lVar4 + 8),*puVar6);
    if (iVar2 != 0) {
      local_24 = 1;
      goto LAB_140e19624;
    }
  }
  local_24 = 0;
LAB_140e19624:
  return (ulonglong)local_24;
}


/* address=140e19660 name=FUN_140e19660 */

void FUN_140e19660(undefined8 param_1)

{
  FUN_140d92500(param_1,0);
  return;
}


/* address=140e19690 name=FUN_140e19690 */

void FUN_140e19690(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e196c0(param_1);
  FUN_140d1c8f0(uVar1);
  return;
}


/* address=140e196c0 name=FUN_140e196c0 */

void FUN_140e196c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d11b30(param_1 + 8);
  FUN_140d1c930(uVar1);
  return;
}


/* address=140e196f0 name=FUN_140e196f0 */

undefined8 FUN_140e196f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar1 = FUN_140d11eb0(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_140d11de0(param_2);
    uVar4 = FUN_140d11ad0(param_2);
    uVar5 = FUN_140d11ad0(param_1);
    iVar2 = FUN_140e1f360(uVar5,uVar4,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar3 = FUN_140d11b30(param_1 + 8);
  lVar6 = FUN_140d1c930(uVar3);
  if (lVar6 != 0) {
    uVar3 = FUN_140d11de0(param_2);
    uVar4 = FUN_140d11ad0(param_2);
    uVar5 = FUN_140d11b30(param_1 + 8);
    FUN_140d1c6d0(uVar5,uVar4,uVar3);
  }
  return 1;
}


/* address=140e197d0 name=FUN_140e197d0 */

undefined FUN_140e197d0(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint local_34;
  undefined8 local_30;
  undefined local_28 [40];
  
  FUN_140d7f0b0(local_28);
  local_30 = FUN_140d11b30(param_1 + 8);
  uVar2 = FUN_140d11b30(local_28);
  iVar1 = FUN_140d1c2e0(uVar2,local_30);
  if (iVar1 != 0) {
    uVar2 = FUN_140d11b30(local_28);
    iVar1 = FUN_140d1c710(uVar2,param_2,&local_34);
    if (iVar1 != 0) {
      *param_3 = (ulonglong)local_34;
      FUN_140d7f0e0(local_28);
      return 1;
    }
  }
  FUN_140d7f0e0(local_28);
  return 0;
}


/* address=140e19890 name=FUN_140e19890 */

void FUN_140e19890(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  char param_5)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_178 [32];
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined local_128 [16];
  undefined local_118 [16];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_178;
  if (param_5 == '\0') {
    local_148 = (undefined *)FUN_140d11e40(local_b8,"client finished",0xf);
  }
  else {
    local_148 = (undefined *)FUN_140d11e40(local_c8,"server finished",0xf);
  }
  local_140 = local_148;
  puVar2 = local_148;
  puVar5 = local_128;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar1 = FUN_140e197d0(param_1,local_68,&local_130);
  if (cVar1 != '\0') {
    local_138 = local_a8;
    puVar2 = (undefined *)FUN_140d11d80(local_138);
    puVar5 = local_118;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined *)FUN_140d11e40(local_98,local_68,local_130);
    puVar5 = local_108;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = local_128;
    puVar5 = local_f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined *)FUN_140d11e40(local_88,param_4 + 0xb,*(undefined *)(param_4 + 10));
    puVar5 = local_e8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined *)FUN_140d11e40(local_78,param_2,0xc);
    puVar5 = local_d8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_140e196c0(param_1);
    local_150 = local_118;
    local_158 = local_108;
    cVar1 = FUN_140de75f0(uVar3,local_d8,local_e8,local_f8);
    if (cVar1 != '\0') {
      *param_3 = 0xc;
    }
  }
  FUN_140e28050(local_28 ^ (ulonglong)auStack_178);
  return;
}


/* address=140e19ab0 name=FUN_140e19ab0 */

void FUN_140e19ab0(undefined8 param_1)

{
  FUN_140d1c1d0(param_1);
  FUN_140d1c160(param_1);
  return;
}


/* address=140e19ae0 name=FUN_140e19ae0 */

undefined8 FUN_140e19ae0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e19b30 name=FUN_140e19b30 */

undefined8 FUN_140e19b30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e19b80 name=FUN_140e19b80 */

undefined8 FUN_140e19b80(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e19bc0 name=FUN_140e19bc0 */

undefined8 FUN_140e19bc0(undefined8 *param_1,undefined *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined local_28 [24];
  
  uVar2 = FUN_140d77f20(*param_1);
  cVar1 = FUN_140e1beb0(param_1,param_1 + 0x33,uVar2,param_1[0xc0]);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x622) >> 3 & 1) == 0) {
      FUN_140e19660(param_1 + 0x33);
    }
    puVar5 = local_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_140e1bf60(param_1,param_1 + 0x33,local_28);
  }
  return uVar3;
}


/* address=140e19c80 name=FUN_140e19c80 */

undefined FUN_140e19c80(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *local_50;
  undefined local_38 [16];
  undefined local_28 [24];
  
  if ((*(byte *)(*param_1 + 0xa4) & 1) != 0) {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x4e);
  }
  cVar1 = FUN_140d11eb0(param_1 + 0xbf);
  if (cVar1 == '\0') {
    local_50 = param_1 + 0x33;
  }
  else {
    local_50 = param_1 + 0x38;
  }
  uVar2 = FUN_140d80f50(param_2);
  cVar1 = FUN_140e1beb0(param_1,local_50,uVar2,*(undefined8 *)(param_2 + 200));
  if (cVar1 != '\0') {
    puVar3 = (undefined *)FUN_140d11e40(local_28,param_2 + 0xb,*(undefined *)(param_2 + 10));
    puVar5 = local_38;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_140e1bf60(param_1,local_50,local_38);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* address=140e19dd0 name=FUN_140e19dd0 */

void FUN_140e19dd0(longlong param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined auStack_158 [32];
  undefined *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined *local_120;
  undefined8 local_118;
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_158;
  local_138 = (undefined *)FUN_140e196c0(param_1 + 0x198);
  local_130 = 0;
  iVar2 = FUN_140d1c800(0,0,local_68,&local_124);
  if (iVar2 != 0) {
    local_120 = local_b8;
    puVar3 = (undefined *)FUN_140d11e40(local_a8,local_68,local_124);
    puVar6 = local_108;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = (undefined *)FUN_140e1c0a0(local_98,"derived");
    puVar6 = local_f8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar4 = FUN_140e1c9d0(param_1,local_88);
    puVar3 = (undefined *)FUN_140d13c30(local_120,uVar4);
    puVar6 = local_e8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    local_118 = FUN_140e196c0(param_1 + 0x198);
    puVar3 = (undefined *)FUN_140e1c9d0(param_1,local_78);
    puVar6 = local_d8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    local_138 = local_108;
    cVar1 = FUN_140e1c0e0(local_d8,local_118,local_e8,local_f8);
    if (cVar1 != '\0') {
      puVar3 = local_c8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      cVar1 = FUN_140e1bf60(param_1,param_1 + 0x198,local_c8);
      if (cVar1 != '\0') {
        local_128 = 1;
        goto LAB_140e19f9a;
      }
    }
  }
  local_128 = 0;
LAB_140e19f9a:
  FUN_140e28050(local_28 ^ (ulonglong)auStack_158);
  return;
}


/* address=140e19fc0 name=FUN_140e19fc0 */

void FUN_140e19fc0(longlong *param_1,undefined4 param_2,int param_3,longlong param_4,
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
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined local_2c8;
  undefined local_2c7;
  undefined local_2c6;
  undefined local_2c5;
  undefined local_2c4;
  undefined local_2c3;
  undefined local_2c2;
  undefined local_2c1;
  undefined local_2c0;
  undefined local_2bf;
  undefined local_2b8 [8];
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined local_298 [8];
  undefined local_290 [8];
  undefined8 local_288;
  undefined *local_280;
  undefined8 local_278;
  undefined *local_270;
  undefined *local_268;
  undefined *local_260;
  undefined local_258 [8];
  undefined *local_250;
  longlong local_248;
  undefined8 local_240;
  undefined *local_238;
  longlong local_230;
  undefined8 local_228;
  undefined local_220 [16];
  undefined local_210 [16];
  undefined local_200 [16];
  undefined local_1f0 [8];
  undefined local_1e8 [16];
  undefined local_1d8 [16];
  undefined local_1c8 [16];
  undefined local_1b8 [16];
  undefined local_1a8 [16];
  undefined local_198 [16];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [16];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [16];
  undefined local_118 [16];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [32];
  undefined local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_308;
  local_2b0 = FUN_140d80f50(param_4);
  FUN_140d139c0(local_2b8);
  FUN_140d11d80(local_220);
  if (param_1[0x13] == 0) {
    iVar3 = FUN_140d08380(param_1);
    local_2c8 = iVar3 != 0;
    local_2e0 = (undefined *)CONCAT71(local_2e0._1_7_,local_2c8);
    local_2e8 = (undefined *)CONCAT62(local_2e8._2_6_,local_2b0);
    cVar1 = FUN_140d8ba30(&local_2a8,local_290,local_290,*(undefined8 *)(param_4 + 200));
    if (cVar1 == '\0') {
      local_2c6 = 0;
      FUN_140d8fda0(local_2b8);
      goto LAB_140e1a717;
    }
    local_2a0 = FUN_140d80fb0(param_4);
    local_288 = FUN_140d46b40(local_2a8);
    FUN_140d11e40(local_200,local_78,local_288);
    local_280 = local_108;
    puVar5 = (undefined *)FUN_140d11d80(local_280);
    puVar8 = local_1d8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_140e1c0a0(local_f8,&DAT_1410c7580);
    puVar8 = local_1c8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = param_5;
    puVar8 = local_1b8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = local_200;
    puVar8 = local_1a8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    local_2e8 = local_1d8;
    cVar1 = FUN_140e1c0e0(local_1a8,local_2a0,local_1b8,local_1c8);
    if (cVar1 == '\0') {
      local_2c5 = 0;
      FUN_140d8fda0(local_2b8);
      goto LAB_140e1a717;
    }
    local_278 = FUN_140d46b60(local_2a8);
    FUN_140d11e40(local_210,local_98,local_278);
    local_270 = local_e8;
    puVar5 = (undefined *)FUN_140d11d80(local_270);
    puVar8 = local_198;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_140e1c0a0(local_d8,&DAT_1410c7584);
    puVar8 = local_188;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = param_5;
    puVar8 = local_178;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = local_210;
    puVar8 = local_168;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    local_2e8 = local_198;
    cVar1 = FUN_140e1c0e0(local_168,local_2a0,local_178,local_188);
    if (cVar1 == '\0') {
      local_2c4 = 0;
      FUN_140d8fda0(local_2b8);
      goto LAB_140e1a717;
    }
    local_268 = local_c8;
    local_260 = local_b8;
    iVar3 = FUN_140d08380(param_1);
    local_2c7 = iVar3 != 0;
    puVar5 = (undefined *)FUN_140d13c30(local_268,local_210);
    puVar8 = local_158;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_140d11d80(local_a8);
    puVar8 = local_148;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_140d13c30(local_260,local_200);
    puVar8 = local_138;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    local_2d0 = local_158;
    local_2d8 = local_148;
    local_2e0 = local_138;
    local_2e8 = *(undefined **)(param_4 + 200);
    uVar4 = FUN_140d8e040(local_258,param_3,*(undefined2 *)(param_4 + 4),local_2c7);
    FUN_140de3830(local_2b8,uVar4);
    FUN_140d8fda0(local_258);
  }
  else {
    uVar4 = FUN_140d8e8d0(local_298,local_2b0,*(undefined8 *)(param_4 + 200));
    FUN_140de3830(local_2b8,uVar4);
    FUN_140d8fda0(local_298);
    puVar5 = param_5;
    puVar8 = local_220;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  cVar1 = FUN_140d11eb0(local_2b8);
  if (cVar1 == '\0') {
    local_2c3 = 0;
    FUN_140d8fda0(local_2b8);
  }
  else {
    uVar6 = FUN_140d11de0(param_5);
    if ((uVar6 < 0x31) && (uVar6 = FUN_140d11de0(param_5), uVar6 < 0x31)) {
      if (param_3 == 0) {
        local_250 = local_1e8;
        puVar5 = local_220;
        puVar8 = local_128;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
        uVar4 = FUN_140d11b30(local_2b8);
        uVar4 = FUN_140d11cd0(local_250,uVar4);
        local_248 = *param_1;
        cVar1 = (**(code **)(local_248 + 0x88))(param_1,param_2,uVar4,local_128);
        if (cVar1 == '\0') {
          local_2c1 = 0;
          FUN_140d8fda0(local_2b8);
          goto LAB_140e1a717;
        }
        local_240 = FUN_140d11de0(param_5);
        uVar4 = FUN_140d11ad0(param_5);
        FUN_140e19b30(param_1[6] + 0x150,uVar4,local_240);
        uVar2 = FUN_140d11de0(param_5);
        *(undefined *)(param_1[6] + 0x1b1) = uVar2;
      }
      else {
        local_238 = local_1f0;
        puVar5 = local_220;
        puVar8 = local_118;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
        uVar4 = FUN_140d11b30(local_2b8);
        uVar4 = FUN_140d11cd0(local_238,uVar4);
        local_230 = *param_1;
        cVar1 = (**(code **)(local_230 + 0x90))(param_1,param_2,uVar4,local_118);
        if (cVar1 == '\0') {
          local_2c0 = 0;
          FUN_140d8fda0(local_2b8);
          goto LAB_140e1a717;
        }
        local_228 = FUN_140d11de0(param_5);
        uVar4 = FUN_140d11ad0(param_5);
        FUN_140e19b30(param_1[6] + 0x120,uVar4,local_228);
        uVar2 = FUN_140d11de0(param_5);
        *(undefined *)(param_1[6] + 0x1b0) = uVar2;
      }
      local_2bf = 1;
      FUN_140d8fda0(local_2b8);
    }
    else {
      local_2e8 = (undefined *)CONCAT44(local_2e8._4_4_,0xc3);
      FUN_140d186f0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                   );
      local_2c2 = 0;
      FUN_140d8fda0(local_2b8);
    }
  }
LAB_140e1a717:
  FUN_140e28050(local_28 ^ (ulonglong)auStack_308);
  return;
}


/* address=140e1a740 name=FUN_140e1a740 */

undefined8 FUN_140e1a740(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong *local_b8;
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  lVar1 = *param_1;
  if (((*(byte *)(lVar1 + 0xa4) & 1) == 0) && (cVar2 = FUN_140d11eb0(param_1 + 0xbf), cVar2 != '\0')
     ) {
    local_b8 = param_1 + 0x38;
  }
  else {
    local_b8 = param_1 + 0x33;
  }
  puVar3 = (undefined *)FUN_140e1c0a0(local_58,"c e traffic");
  puVar6 = local_88;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = (undefined *)FUN_140d9c020(param_1,local_48);
  puVar6 = local_78;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar2 = FUN_140e1c210(param_1,local_78,local_b8,local_88);
  if (cVar2 != '\0') {
    uVar4 = FUN_140d9c020(param_1,local_28);
    puVar3 = (undefined *)FUN_140d13c30(local_38,uVar4);
    puVar6 = local_68;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar2 = FUN_140d0f600(lVar1,"CLIENT_EARLY_TRAFFIC_SECRET",local_68);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* address=140e1a8b0 name=FUN_140e1a8b0 */

undefined8 FUN_140e1a8b0(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
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
  
  uVar1 = *param_1;
  puVar3 = (undefined *)FUN_140e1c0a0(local_98,"c hs traffic");
  puVar6 = local_f8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = (undefined *)FUN_140da9290(param_1,local_88);
  puVar6 = local_e8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar2 = FUN_140e1c340(param_1,local_e8,local_f8);
  if (cVar2 != '\0') {
    uVar4 = FUN_140da9290(param_1,local_68);
    puVar3 = (undefined *)FUN_140d13c30(local_78,uVar4);
    puVar6 = local_d8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar2 = FUN_140d0f600(uVar1,"CLIENT_HANDSHAKE_TRAFFIC_SECRET",local_d8);
    if (cVar2 != '\0') {
      puVar3 = (undefined *)FUN_140e1c0a0(local_58,"s hs traffic");
      puVar6 = local_c8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3 = (undefined *)FUN_140da92d0(param_1,local_48);
      puVar6 = local_b8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      cVar2 = FUN_140e1c340(param_1,local_b8,local_c8);
      if (cVar2 != '\0') {
        uVar4 = FUN_140da92d0(param_1,local_28);
        puVar3 = (undefined *)FUN_140d13c30(local_38,uVar4);
        puVar6 = local_a8;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        cVar2 = FUN_140d0f600(uVar1,"SERVER_HANDSHAKE_TRAFFIC_SECRET",local_a8);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* address=140e1aa90 name=FUN_140e1aa90 */

undefined FUN_140e1aa90(longlong param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined local_f8 [16];
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined local_c8 [16];
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
  
  FUN_140d11d80(local_f8);
  if (param_2 == 0) {
    puVar2 = (undefined *)
             FUN_140d11e40(local_78,*(longlong *)(param_1 + 0x30) + 0x150,
                           *(undefined *)(*(longlong *)(param_1 + 0x30) + 0x1b1));
    puVar5 = local_f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    puVar2 = (undefined *)
             FUN_140d11e40(local_68,*(longlong *)(param_1 + 0x30) + 0x120,
                           *(undefined *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
    puVar5 = local_f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  uVar3 = FUN_140d80000(param_1);
  local_d8 = FUN_140d80fb0(uVar3);
  local_e8 = local_58;
  local_e0 = local_48;
  puVar2 = (undefined *)FUN_140d11d80(local_e8);
  puVar5 = local_c8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined *)FUN_140e1c0a0(local_38,"traffic upd");
  puVar5 = local_b8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined *)FUN_140d13c30(local_e0,local_f8);
  puVar5 = local_a8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = local_f8;
  puVar5 = local_98;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar1 = FUN_140e1c0e0(local_98,local_d8,local_a8,local_b8,local_c8);
  if (cVar1 != '\0') {
    local_d0 = local_28;
    puVar2 = (undefined *)FUN_140d13c30(local_d0,local_f8);
    puVar5 = local_88;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_140e19fc0(param_1,3,param_2,uVar3,local_88);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* address=140e1acd0 name=FUN_140e1acd0 */

undefined8 FUN_140e1acd0(longlong *param_1)

{
  longlong lVar1;
  undefined uVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [16];
  undefined local_118 [16];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
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
  
  lVar1 = *param_1;
  uVar2 = FUN_140e19690(param_1 + 0x33);
  *(undefined *)(*(longlong *)(lVar1 + 0x30) + 0x1b2) = uVar2;
  puVar4 = (undefined *)FUN_140e1c0a0(local_c8,"c ap traffic");
  puVar7 = local_158;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar4 = (undefined *)FUN_140da9310(param_1,local_b8);
  puVar7 = local_148;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  cVar3 = FUN_140e1c340(param_1,local_148,local_158);
  if (cVar3 != '\0') {
    uVar5 = FUN_140da9310(param_1,local_98);
    puVar4 = (undefined *)FUN_140d13c30(local_a8,uVar5);
    puVar7 = local_138;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar3 = FUN_140d0f600(lVar1,"CLIENT_TRAFFIC_SECRET_0",local_138);
    if (cVar3 != '\0') {
      puVar4 = (undefined *)FUN_140e1c0a0(local_88,"s ap traffic");
      puVar7 = local_128;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = (undefined *)FUN_140da9350(param_1,local_78);
      puVar7 = local_118;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar3 = FUN_140e1c340(param_1,local_118,local_128);
      if (cVar3 != '\0') {
        uVar5 = FUN_140da9350(param_1,local_58);
        puVar4 = (undefined *)FUN_140d13c30(local_68,uVar5);
        puVar7 = local_108;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar3 = FUN_140d0f600(lVar1,"SERVER_TRAFFIC_SECRET_0",local_108);
        if (cVar3 != '\0') {
          puVar4 = (undefined *)FUN_140e1c0a0(local_48,"exp master");
          puVar7 = local_f8;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (undefined *)
                   FUN_140d11e40(local_38,*(longlong *)(lVar1 + 0x30) + 0x180,
                                 *(undefined *)(*(longlong *)(lVar1 + 0x30) + 0x1b2));
          puVar7 = local_e8;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
          cVar3 = FUN_140e1c340(param_1,local_e8,local_f8);
          if (cVar3 != '\0') {
            puVar4 = (undefined *)
                     FUN_140d11e40(local_28,*(longlong *)(lVar1 + 0x30) + 0x180,
                                   *(undefined *)(*(longlong *)(lVar1 + 0x30) + 0x1b2));
            puVar7 = local_d8;
            for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar7 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar7 = puVar7 + 1;
            }
            cVar3 = FUN_140d0f600(lVar1,"EXPORTER_SECRET",local_d8);
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


/* address=140e1afe0 name=FUN_140e1afe0 */

ulonglong FUN_140e1afe0(longlong param_1)

{
  undefined uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar2 = FUN_140e19690(param_1 + 0x198);
  if (uVar2 < 0x31) {
    uVar1 = FUN_140e19690(param_1 + 0x198);
    lVar3 = FUN_140d11ad0(param_1 + 0x5e0);
    *(undefined *)(lVar3 + 10) = uVar1;
    puVar4 = (undefined *)FUN_140e1c0a0(local_38,"res master");
    puVar5 = local_58;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_140d11ad0(param_1 + 0x5e0);
    uVar1 = *(undefined *)(lVar3 + 10);
    lVar3 = FUN_140d11ad0(param_1 + 0x5e0);
    puVar4 = (undefined *)FUN_140d11e40(local_28,lVar3 + 0xb,uVar1);
    puVar5 = local_48;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_140e1c340(param_1,local_48,local_58);
  }
  else {
    uVar2 = FUN_140d186f0(0x10,0,0x44,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                          ,0x135);
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}


/* address=140e1b120 name=FUN_140e1b120 */

void FUN_140e1b120(undefined8 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined auStack_218 [32];
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined local_1c0 [16];
  undefined local_1b0 [24];
  undefined local_198 [16];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [16];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [16];
  undefined local_118 [16];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [64];
  undefined local_a8 [64];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_218;
  cVar1 = FUN_140d11df0(param_3);
  if (cVar1 == '\0') {
    uVar3 = FUN_140d80000(param_1);
    local_1e0 = (undefined *)FUN_140d80fb0(uVar3);
    local_1d0 = FUN_140d11de0(param_5);
    uVar3 = FUN_140d11ad0(param_5);
    local_1f0 = 0;
    local_1f8 = local_1e0;
    iVar2 = FUN_140d1c800(uVar3,local_1d0,local_e8,&local_1d8);
    if (iVar2 != 0) {
      local_1f0 = 0;
      local_1f8 = local_1e0;
      iVar2 = FUN_140d1c800(0,0,local_a8,&local_1d4);
      if (iVar2 != 0) {
        FUN_140d11e40(local_158,local_e8,local_1d8);
        FUN_140d11e40(local_1b0,local_a8,local_1d4);
        uVar3 = FUN_140d1c8f0(local_1e0);
        FUN_140d11e40(local_1c0,local_68,uVar3);
        puVar4 = local_1b0;
        puVar6 = local_198;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar4 = local_188;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar4 = *param_4;
          param_4 = param_4 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar4 = local_178;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar4 = *param_3;
          param_3 = param_3 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar4 = local_1c0;
        puVar6 = local_168;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        local_1f8 = local_198;
        cVar1 = FUN_140e1c0e0(local_168,local_1e0,local_178,local_188);
        if (cVar1 != '\0') {
          local_1c8 = local_108;
          puVar4 = local_158;
          puVar6 = local_148;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = (undefined *)FUN_140e1c0a0(local_f8,"exporter");
          puVar6 = local_138;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = (undefined *)FUN_140d13c30(local_1c8,local_1c0);
          puVar6 = local_128;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = local_118;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar4 = *param_2;
            param_2 = param_2 + 1;
            puVar4 = puVar4 + 1;
          }
          local_1f8 = local_148;
          cVar1 = FUN_140e1c0e0(local_118,local_1e0,local_128,local_138);
          if (cVar1 != '\0') {
            local_1e8 = 1;
            goto LAB_140e1b422;
          }
        }
        local_1e8 = 0;
      }
    }
  }
  else {
    FID_conflict__assert(L"0",(wchar_t *)"D",0x176);
    local_1f8 = (undefined *)CONCAT44(local_1f8._4_4_,0x177);
    FUN_140d186f0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
LAB_140e1b422:
  FUN_140e28050(local_28 ^ (ulonglong)auStack_218);
  return;
}


/* address=140e1b450 name=FUN_140e1b450 */

void FUN_140e1b450(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_118 [32];
  undefined *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_118;
  if (param_4 == '\0') {
    local_e8 = FUN_140da9290(param_1,local_88);
  }
  else {
    local_e8 = FUN_140da92d0(param_1,local_98);
  }
  local_e0 = local_e8;
  FUN_140d13c30(local_c8,local_e8);
  cVar1 = FUN_140e197d0(param_1 + 0x33,local_68,&local_d8);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_140d11e40(local_78,local_68,local_d8);
    puVar5 = local_b8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = local_c8;
    puVar5 = local_a8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    local_d0 = *param_1;
    uVar3 = FUN_140e196c0(param_1 + 0x33);
    local_f0 = local_b8;
    local_f8 = local_a8;
    FUN_140e1c3b0(param_2,param_3,uVar3,*(undefined2 *)(local_d0 + 0x10));
  }
  FUN_140e28050(local_28 ^ (ulonglong)auStack_118);
  return;
}


/* address=140e1b5e0 name=FUN_140e1b5e0 */

void FUN_140e1b5e0(longlong param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar1 = FUN_140d80fb0(param_1);
  FUN_140d11e40(local_88,param_1 + 0xb,*(undefined *)(param_1 + 10));
  puVar2 = local_78;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined *)FUN_140e1c0a0(local_28,"resumption");
  puVar4 = local_68;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined *)FUN_140d13c30(local_38,local_88);
  puVar4 = local_58;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = local_88;
  puVar4 = local_48;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_140e1c0e0(local_48,uVar1,local_58,local_68,local_78);
  return;
}


/* address=140e1b6f0 name=FUN_140e1b6f0 */

void FUN_140e1b6f0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  longlong local_a0;
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_f8;
  local_c0 = *param_1;
  uVar2 = FUN_140d11ad0(local_c0 + 0x58);
  local_b0 = FUN_140d80fb0(uVar2);
  local_b8 = FUN_140d1c8f0(local_b0);
  local_a0 = local_b8 + 3;
  local_a8 = local_78;
  puVar3 = (undefined *)FUN_140d13c30(local_a8,param_3);
  puVar5 = local_98;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_140d11ad0(local_c0 + 0x58);
  local_d0 = local_a0;
  local_d8 = local_98;
  cVar1 = FUN_140e1c590(local_68,&local_c8,uVar2,param_2);
  if ((cVar1 == '\0') || (local_c8 != local_b8)) {
    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,0x1d8);
    FUN_140d186f0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
  else {
    FUN_140d88280(param_3,local_88,local_c8);
    uVar2 = FUN_140d11ad0(local_88);
    FUN_140e19ae0(uVar2,local_68,local_c8);
    if (param_4 != (longlong *)0x0) {
      *param_4 = local_c8;
    }
  }
  FUN_140e28050(local_28 ^ (ulonglong)auStack_f8);
  return;
}


/* address=140e1b890 name=FUN_140e1b890 */

void FUN_140e1b890(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  char local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined local_a0 [24];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_e8;
  local_a8 = FUN_140d71850(param_4);
  local_a8 = local_a8 + 2;
  puVar3 = (undefined *)FUN_140d837f0(param_3 + 0x18,local_78);
  puVar6 = local_88;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  local_c0 = local_a8;
  local_c8 = local_88;
  cVar1 = FUN_140e1c590(local_68,&local_b0,param_2,param_1 + 0x198);
  if ((cVar1 == '\0') || (iVar2 = FUN_140d71dd0(param_4,local_a0), iVar2 == 0)) {
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0x1f1);
    FUN_140d186f0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
    goto LAB_140e1b9fd;
  }
  lVar5 = FUN_140d71850(local_a0);
  if (lVar5 == local_b0) {
    uVar4 = FUN_140d71830(local_a0);
    iVar2 = FUN_140d76480(uVar4,local_68,local_b0);
    if (iVar2 != 0) goto LAB_140e1b9bc;
    local_b4 = 1;
  }
  else {
LAB_140e1b9bc:
    local_b4 = 0;
  }
  local_b8 = (char)local_b4;
  if ((char)local_b4 == '\0') {
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0x1fc);
    FUN_140d186f0(0x10,0,0x8e,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
LAB_140e1b9fd:
  FUN_140e28050(local_28 ^ (ulonglong)auStack_e8);
  return;
}


/* address=140e1ba20 name=FUN_140e1ba20 */

longlong FUN_140e1ba20(undefined8 param_1)

{
  int iVar1;
  int local_18;
  
  iVar1 = FUN_140d08380(param_1);
  if (iVar1 == 0) {
    local_18 = 4;
  }
  else {
    local_18 = 0xc;
  }
  return (longlong)local_18 + 0x1a;
}


/* address=140e1ba70 name=FUN_140e1ba70 */

void FUN_140e1ba70(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined local_1c8;
  undefined local_1c7;
  undefined local_1c6;
  undefined4 local_1c4;
  undefined *local_1c0;
  undefined local_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined local_150 [16];
  undefined local_140 [24];
  undefined local_128 [16];
  undefined local_118 [16];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [64];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_208;
  uVar3 = FUN_140d11de0(param_6);
  if (uVar3 < param_7 + 8U) {
    local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,0x215);
    FUN_140d186f0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
  else {
    FUN_140d12660(param_6,local_150,0,param_7);
    FUN_140d12660(param_6,local_140,param_7 + 8,0xffffffffffffffff);
    FUN_140d7f0b0(local_1b8);
    local_198 = FUN_140e196c0(param_4);
    uVar4 = FUN_140d11b30(local_1b8);
    cVar1 = FUN_140e19530(param_4,uVar4,local_198);
    if (cVar1 != '\0') {
      local_190 = FUN_140d11de0(local_150);
      local_188 = FUN_140d11ad0(local_150);
      uVar4 = FUN_140d11b30(local_1b8);
      iVar2 = FUN_140d1c6d0(uVar4,local_188,local_190);
      if (iVar2 != 0) {
        uVar4 = FUN_140d11b30(local_1b8);
        iVar2 = FUN_140d1c6d0(uVar4,&DAT_1410c7d00,8);
        if (iVar2 != 0) {
          local_180 = FUN_140d11de0(local_140);
          local_178 = FUN_140d11ad0(local_140);
          uVar4 = FUN_140d11b30(local_1b8);
          iVar2 = FUN_140d1c6d0(uVar4,local_178,local_180);
          if (iVar2 != 0) {
            uVar4 = FUN_140d11b30(local_1b8);
            iVar2 = FUN_140d1c710(uVar4,local_a8,&local_1c4);
            if (iVar2 != 0) {
              local_170 = FUN_140e19690(param_4);
              local_168 = (undefined *)FUN_140d11de0(param_3);
              local_160 = FUN_140d11ad0(param_3);
              uVar4 = FUN_140e196c0(param_4);
              local_1d8 = local_170;
              local_1e0 = &DAT_1410c7d00;
              local_1e8 = local_168;
              iVar2 = FUN_140d69680(local_68,&local_158,uVar4,local_160);
              if (iVar2 == 0) {
                local_1c7 = 0;
                FUN_140d7f0e0(local_1b8);
              }
              else {
                lVar5 = FUN_140d11de0(param_2);
                if (lVar5 != 8) {
                  FID_conflict__assert((wchar_t *)"o",(wchar_t *)"D",0x22e);
                }
                if (param_5 == '\0') {
                  local_1c0 = (undefined *)FUN_140e1c0a0(local_d8,"ech accept confirmation");
                }
                else {
                  local_1c0 = (undefined *)FUN_140e1c0a0(local_e8,"hrr ech accept confirmation");
                }
                puVar6 = (undefined *)FUN_140d11e40(local_c8,local_a8,local_1c4);
                puVar7 = local_128;
                for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                }
                puVar6 = local_1c0;
                puVar7 = local_118;
                for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                }
                puVar6 = (undefined *)FUN_140d11e40(local_b8,local_68,local_158);
                puVar7 = local_108;
                for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                }
                uVar4 = FUN_140e196c0(param_4);
                puVar6 = local_f8;
                for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar6 = *param_2;
                  param_2 = param_2 + 1;
                  puVar6 = puVar6 + 1;
                }
                local_1e8 = local_128;
                local_1c6 = FUN_140e1c0e0(local_f8,uVar4,local_108,local_118);
                FUN_140d7f0e0(local_1b8);
              }
              goto LAB_140e1be84;
            }
          }
        }
      }
    }
    local_1c8 = 0;
    FUN_140d7f0e0(local_1b8);
  }
LAB_140e1be84:
  FUN_140e28050(local_28 ^ (ulonglong)auStack_208);
  return;
}


/* address=140e1beb0 name=FUN_140e1beb0 */

bool FUN_140e1beb0(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined local_30 [16];
  undefined local_20 [32];
  
  cVar1 = FUN_140e192d0(param_2,param_3,param_4);
  if (cVar1 != '\0') {
    uVar2 = FUN_140e19690(param_2);
    FUN_140d93e40(param_1,uVar2);
    uVar2 = FUN_140e1c9d0(param_1,local_30);
    uVar2 = FUN_140d11de0(uVar2);
    uVar3 = FUN_140e1c9d0(param_1,local_20);
    uVar3 = FUN_140d11ad0(uVar3);
    FUN_140e19b80(uVar3,0,uVar2);
  }
  return cVar1 != '\0';
}


/* address=140e1bf60 name=FUN_140e1bf60 */

undefined8 FUN_140e1bf60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_50;
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [16];
  undefined local_18 [24];
  
  uVar2 = FUN_140e1c9d0(param_1,local_48);
  uVar2 = FUN_140d11de0(uVar2);
  uVar3 = FUN_140e1c9d0(param_1,local_38);
  uVar3 = FUN_140d11ad0(uVar3);
  uVar4 = FUN_140d11de0(param_3);
  uVar5 = FUN_140d11ad0(param_3);
  uVar6 = FUN_140e196c0(param_2);
  uVar7 = FUN_140e1c9d0(param_1,local_28);
  uVar7 = FUN_140d11ad0(uVar7);
  iVar1 = FUN_140d69680(uVar7,&local_50,uVar6,uVar5,uVar4,uVar3,uVar2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140e1c9d0(param_1,local_18);
    lVar8 = FUN_140d11de0(uVar2);
    if (local_50 != lVar8) {
      FID_conflict__assert((wchar_t *)"l",(wchar_t *)"D",0x3a);
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=140e1c0a0 name=FUN_140e1c0a0 */

undefined8 FUN_140e1c0a0(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_140d11e40(param_1,param_2,sVar1);
  return param_1;
}


/* address=140e1c0e0 name=FUN_140e1c0e0 */

bool FUN_140e1c0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  uVar2 = FUN_140d11de0(param_5);
  uVar3 = FUN_140d11ad0(param_5);
  uVar4 = FUN_140d11de0(param_4);
  uVar5 = FUN_140d11ad0(param_4);
  uVar6 = FUN_140d11de0(param_3);
  uVar7 = FUN_140d11ad0(param_3);
  uVar8 = FUN_140d11de0(param_1);
  uVar9 = FUN_140d11ad0(param_1);
  iVar1 = FUN_140d70140(uVar9,uVar8,param_2,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  return iVar1 == 1;
}


/* address=140e1c210 name=FUN_140e1c210 */

void FUN_140e1c210(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_108 [32];
  undefined *local_e8;
  undefined8 local_d8 [2];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_108;
  cVar1 = FUN_140e197d0(param_3,local_68,local_d8);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_140d11e40(local_88,local_68,local_d8[0]);
    puVar5 = local_c8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = local_b8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar2 = *param_4;
      param_4 = param_4 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar2 = (undefined *)FUN_140e1c9d0(param_1,local_78);
    puVar5 = local_a8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_140e196c0(param_3);
    puVar2 = local_98;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    local_e8 = local_c8;
    FUN_140e1c0e0(local_98,uVar3,local_a8,local_b8);
  }
  FUN_140e28050(local_28 ^ (ulonglong)auStack_108);
  return;
}


/* address=140e1c340 name=FUN_140e1c340 */

void FUN_140e1c340(longlong param_1,undefined *param_2,undefined *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar2 = local_38;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_28;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_140e1c210(param_1,local_28,param_1 + 0x198,local_38);
  return;
}


/* address=140e1c3b0 name=FUN_140e1c3b0 */

void FUN_140e1c3b0(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_148 [32];
  undefined *local_128;
  undefined8 local_120;
  uint *local_118;
  uint local_108 [2];
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined local_e0 [24];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_148;
  uVar2 = FUN_140d1c8f0(param_3);
  FUN_140d11e40(local_e0,local_68,uVar2);
  local_100 = local_88;
  puVar3 = (undefined *)FUN_140d11d80(local_100);
  puVar5 = local_c8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined *)FUN_140e1c0a0(local_78,"finished");
  puVar5 = local_b8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = local_a8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar3 = *param_5;
    param_5 = param_5 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_e0;
  puVar5 = local_98;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_128 = local_c8;
  cVar1 = FUN_140e1c0e0(local_98,param_3,local_a8,local_b8);
  if (cVar1 != '\0') {
    local_f8 = (undefined *)FUN_140d11de0(param_6);
    local_f0 = FUN_140d11ad0(param_6);
    local_e8 = FUN_140d11de0(local_e0);
    uVar2 = FUN_140d11ad0(local_e0);
    local_118 = local_108;
    local_128 = local_f8;
    local_120 = param_1;
    lVar4 = FUN_140d1cb20(param_3,uVar2,local_e8,local_f0);
    if (lVar4 != 0) {
      *param_2 = (ulonglong)local_108[0];
    }
  }
  FUN_140e28050(local_28 ^ (ulonglong)auStack_148);
  return;
}


/* address=140e1c590 name=FUN_140e1c590 */

void FUN_140e1c590(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
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
  undefined8 local_278;
  undefined *local_270;
  undefined8 local_268;
  undefined local_258;
  undefined local_257;
  undefined local_256;
  undefined *local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined *local_228;
  undefined local_220 [32];
  undefined local_200 [16];
  undefined local_1f0 [24];
  undefined local_1d8 [16];
  undefined local_1c8 [16];
  undefined local_1b8 [16];
  undefined local_1a8 [16];
  undefined local_198 [16];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [16];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [64];
  undefined local_e8 [64];
  undefined local_a8 [64];
  undefined local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_298;
  local_250 = (undefined *)FUN_140d80fb0(param_3);
  puVar4 = local_128;
  for (lVar6 = 0x40; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_e8;
  for (lVar6 = 0x40; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar3 = FUN_140d1c8f0(local_250);
  FUN_140d11e40(local_1f0,local_e8,uVar3);
  local_270 = (undefined *)0x0;
  local_278 = local_250;
  iVar2 = FUN_140d1c800(0,0,local_a8,&local_248);
  if (iVar2 != 0) {
    local_278 = (undefined *)(ulonglong)*(byte *)(param_3 + 10);
    local_268 = 0;
    local_270 = (undefined *)0x0;
    iVar2 = FUN_140d69680(local_128,&local_240,local_250,param_3 + 0xb);
    if (iVar2 != 0) {
      puVar4 = (undefined *)FUN_140d11e40(local_178,local_a8,local_248);
      puVar7 = local_1d8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = (undefined *)FUN_140e1c0a0(local_168,"res binder");
      puVar7 = local_1c8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = (undefined *)FUN_140d11e40(local_158,local_128,local_240);
      puVar7 = local_1b8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = local_1f0;
      puVar7 = local_1a8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      local_278 = local_1d8;
      cVar1 = FUN_140e1c0e0(local_1a8,local_250,local_1b8,local_1c8);
      if (cVar1 != '\0') {
        uVar5 = FUN_140d11de0(param_5);
        if (uVar5 < param_6) {
          local_278 = (undefined *)CONCAT44(local_278._4_4_,0x1b2);
          FUN_140d186f0(0x10,0,0x44,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                       );
        }
        else {
          lVar6 = FUN_140d11de0(param_5);
          FUN_140d12660(param_5,local_200,0,lVar6 - param_6);
          FUN_140d7f0b0(local_220);
          uVar3 = FUN_140d11b30(local_220);
          cVar1 = FUN_140e19530(param_4,uVar3,local_250);
          if (cVar1 != '\0') {
            local_238 = FUN_140d11de0(local_200);
            local_230 = FUN_140d11ad0(local_200);
            uVar3 = FUN_140d11b30(local_220);
            iVar2 = FUN_140d1c6d0(uVar3,local_230,local_238);
            if (iVar2 != 0) {
              uVar3 = FUN_140d11b30(local_220);
              iVar2 = FUN_140d1c710(uVar3,local_68,&local_244);
              if (iVar2 != 0) {
                local_228 = local_148;
                puVar4 = (undefined *)FUN_140d11e40(local_138,local_68,local_244);
                puVar7 = local_198;
                for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *puVar7 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar7 = puVar7 + 1;
                }
                puVar4 = (undefined *)FUN_140d13c30(local_228,local_1f0);
                puVar7 = local_188;
                for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *puVar7 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar7 = puVar7 + 1;
                }
                local_270 = local_198;
                local_278 = local_188;
                cVar1 = FUN_140e1c3b0(param_1,param_2,local_250,*(undefined2 *)(param_3 + 4));
                if (cVar1 == '\0') {
                  local_257 = 0;
                  FUN_140d7f0e0(local_220);
                }
                else {
                  lVar6 = FUN_140d1c8f0(local_250);
                  if (*param_2 != lVar6) {
                    FID_conflict__assert((wchar_t *)"*",(wchar_t *)"D",0x1c5);
                  }
                  local_256 = 1;
                  FUN_140d7f0e0(local_220);
                }
                goto LAB_140e1c9b0;
              }
            }
          }
          local_258 = 0;
          FUN_140d7f0e0(local_220);
        }
      }
    }
  }
LAB_140e1c9b0:
  FUN_140e28050(local_28 ^ (ulonglong)auStack_298);
  return;
}


/* address=140e1c9d0 name=FUN_140e1c9d0 */

undefined8 FUN_140e1c9d0(longlong param_1,undefined8 param_2)

{
  FUN_140d11e40(param_2,param_1 + 0x28,*(undefined8 *)(param_1 + 0x20));
  return param_2;
}


/* address=140e1ca10 name=FUN_140e1ca10 */

undefined * FUN_140e1ca10(void)

{
  return &DAT_1410c7d60;
}


/* address=140e1ca30 name=FUN_140e1ca30 */

undefined8 FUN_140e1ca30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e1ca80 name=FUN_140e1ca80 */

undefined8 FUN_140e1ca80(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e1cac0 name=FUN_140e1cac0 */

bool FUN_140e1cac0(void)

{
  return (DAT_141410914 & 0x80000) != 0;
}


/* address=140e1cb00 name=FUN_140e1cb00 */

void FUN_140e1cb00(void)

{
  FUN_140e1cac0();
  return;
}


/* address=140e1cbe0 name=FUN_140e1cbe0 */

void FUN_140e1cbe0(undefined8 param_1,ulonglong param_2)

{
  ulonglong local_res10;
  undefined auStack_48 [32];
  uint local_28;
  undefined local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_48;
  local_res10 = param_2;
  for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
    local_20[local_28] = (undefined)local_res10;
    local_res10 = local_res10 >> 8;
  }
  FUN_140e64570(param_1,local_20,8);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_48);
  return;
}


/* address=140e1cc70 name=FUN_140e1cc70 */

void FUN_140e1cc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                  longlong param_9)

{
  undefined auStack_278 [32];
  undefined8 local_258;
  undefined4 local_250;
  ulonglong local_248;
  undefined local_238 [32];
  undefined local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_278;
  FUN_140e1ca80(local_238,0,0x20);
  local_250 = 0;
  local_258 = param_3;
  FUN_140e634a0(local_238,local_238,0x20,param_2);
  FUN_140e64390(local_218,local_238);
  FUN_140e64570(local_218,param_4,param_5);
  if (param_5 % 0x10 != 0) {
    FUN_140e64570(local_218,&DAT_1410c7d40,0x10 - param_5 % 0x10);
  }
  FUN_140e64570(local_218,param_6,param_7);
  FUN_140e64570(local_218,param_8,param_9);
  local_248 = param_7 + param_9;
  if (local_248 % 0x10 != 0) {
    FUN_140e64570(local_218,&DAT_1410c7d40,0x10 - local_248 % 0x10);
  }
  FUN_140e1cbe0(local_218,param_5);
  FUN_140e1cbe0(local_218,local_248);
  FUN_140e64760(local_218,param_1);
  FUN_140e28050(local_18 ^ (ulonglong)auStack_278);
  return;
}


/* address=140e1ce50 name=FUN_140e1ce50 */

void FUN_140e1ce50(undefined8 param_1,undefined *param_2,longlong param_3,longlong *param_4,
                  ulonglong param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                  ulonglong param_9,longlong param_10,ulonglong param_11,undefined8 param_12,
                  undefined8 param_13,ulonglong param_14)

{
  int iVar1;
  undefined auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  int local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined local_98 [32];
  undefined4 local_78;
  undefined local_74 [12];
  longlong local_68;
  ulonglong local_60;
  byte local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_118;
  if (param_11 + param_14 < param_14) {
    local_f8 = CONCAT44(local_f8._4_4_,0x73);
    FUN_140d186f0(0x1e,0,0x75,s_D__a_1_s_target_release_build_bo_1413f9b40);
  }
  else if (param_5 < param_14 + param_11) {
    local_f8 = CONCAT44(local_f8._4_4_,0x77);
    FUN_140d186f0(0x1e,0,0x67,s_D__a_1_s_target_release_build_bo_1413f9bc0);
  }
  else if (param_7 == 0xc) {
    local_a8 = param_9;
    if (param_9 < 0x3fffffffc0) {
      if (param_5 < param_14) {
        local_f8 = CONCAT44(local_f8._4_4_,0x8c);
        FUN_140d186f0(0x1e,0,0x67,s_D__a_1_s_target_release_build_bo_1413f9d40);
      }
      else {
        if (param_11 != 0) {
          local_c8 = (int)(param_9 / DAT_1410c7d50);
          local_b0 = param_9 % DAT_1410c7d50;
          local_c0 = 0;
          while (local_c8 = local_c8 + 1, local_c0 < param_11) {
            FUN_140e9a3c0(local_58,0,0x40);
            local_f0 = (undefined *)CONCAT44(local_f0._4_4_,local_c8);
            local_f8 = param_6;
            FUN_140e634a0(local_58,local_58,0x40,param_1);
            local_b8 = local_b0;
            for (; (local_b8 < 0x40 && (local_c0 < param_11)); local_c0 = local_c0 + 1) {
              *(byte *)(param_3 + local_c0) = *(byte *)(param_10 + local_c0) ^ local_58[local_b8];
              local_b8 = local_b8 + 1;
            }
            local_b0 = 0;
          }
        }
        iVar1 = FUN_140e1cb00();
        if (iVar1 == 0) {
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,1);
          local_f8 = param_6;
          FUN_140e634a0(param_2,param_8,param_9,param_1);
          local_d8 = param_11;
          local_e8 = param_9;
          local_f8 = param_13;
          local_f0 = param_2;
          local_e0 = param_3;
          FUN_140e1cc70(local_98,param_1,param_6,param_12);
        }
        else {
          FUN_140e1ca30(local_98,param_1,0x20);
          local_78 = 0;
          FUN_140e1ca30(local_74,param_6,0xc);
          local_60 = param_11;
          local_f0 = local_98;
          local_f8 = param_13;
          local_68 = param_3;
          FUN_140cf8980(param_2,param_8,param_9,param_12);
        }
        FUN_140e1ca30(param_3 + param_11,local_98,param_14);
        *param_4 = param_11 + param_14;
      }
    }
    else {
      local_f8 = CONCAT44(local_f8._4_4_,0x87);
      FUN_140d186f0(0x1e,0,0x75,s_D__a_1_s_target_release_build_bo_1413f9cc0);
    }
  }
  else {
    local_f8 = CONCAT44(local_f8._4_4_,0x7b);
    FUN_140d186f0(0x1e,0,0x79,s_D__a_1_s_target_release_build_bo_1413f9c40);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=140e1d560 name=FUN_140e1d560 */

void FUN_140e1d560(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7,longlong param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11)

{
  int iVar1;
  undefined auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_58;
  undefined local_48 [32];
  undefined4 local_28;
  undefined local_24 [12];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  if (param_4 == 0xc) {
    if (param_8 == param_11) {
      local_58 = param_6;
      if (param_6 < 0x3fffffffc0) {
        iVar1 = FUN_140e1cb00();
        if (iVar1 == 0) {
          local_68 = 0;
          local_70 = 0;
          local_78 = param_6;
          local_80 = (undefined *)param_5;
          local_88 = param_10;
          FUN_140e1cc70(local_48,param_1,param_3,param_9);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
          local_88 = param_3;
          FUN_140e634a0(param_2,param_5,param_6,param_1);
        }
        else {
          FUN_140e1ca30(local_48,param_1,0x20);
          local_28 = 0;
          FUN_140e1ca30(local_24,param_3,0xc);
          local_80 = local_48;
          local_88 = param_10;
          FUN_140cf6580(param_2,param_5,param_6,param_9);
        }
        iVar1 = FUN_140d76480(local_48,param_7,param_11);
        if (iVar1 != 0) {
          local_88 = CONCAT44(local_88._4_4_,0x103);
          FUN_140d186f0(0x1e,0,0x65,s_D__a_1_s_target_release_build_bo_1413f9fc0);
        }
      }
      else {
        local_88 = CONCAT44(local_88._4_4_,0xf3);
        FUN_140d186f0(0x1e,0,0x75,s_D__a_1_s_target_release_build_bo_1413f9f40);
      }
    }
    else {
      local_88 = CONCAT44(local_88._4_4_,0xe7);
      FUN_140d186f0(0x1e,0,0x65,s_D__a_1_s_target_release_build_bo_1413f9ec0);
    }
  }
  else {
    local_88 = CONCAT44(local_88._4_4_,0xe2);
    FUN_140d186f0(0x1e,0,0x79,s_D__a_1_s_target_release_build_bo_1413f9e40);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140e1da00 name=FUN_140e1da00 */

undefined * FUN_140e1da00(void)

{
  return &DAT_1410c7f90;
}


/* address=140e1da10 name=FUN_140e1da10 */

undefined * FUN_140e1da10(void)

{
  return &DAT_1410c7fe0;
}


/* address=140e1da20 name=FUN_140e1da20 */

undefined * FUN_140e1da20(void)

{
  return &DAT_1410c7e00;
}


/* address=140e1da30 name=FUN_140e1da30 */

undefined * FUN_140e1da30(void)

{
  return &DAT_1410c7e50;
}


/* address=140e1da40 name=FUN_140e1da40 */

undefined * FUN_140e1da40(void)

{
  return &DAT_1410c7ea0;
}


/* address=140e1da50 name=FUN_140e1da50 */

undefined * FUN_140e1da50(void)

{
  return &DAT_1410c7ef0;
}


/* address=140e1da60 name=FUN_140e1da60 */

undefined * FUN_140e1da60(void)

{
  return &DAT_1410c7f40;
}


/* address=140e1da70 name=FUN_140e1da70 */

longlong FUN_140e1da70(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=140e1da90 name=FUN_140e1da90 */

void FUN_140e1da90(ulonglong param_1)

{
  FUN_140e1da70(~param_1 & param_1 - 1);
  return;
}


/* address=140e1dac0 name=FUN_140e1dac0 */

void FUN_140e1dac0(ulonglong param_1,ulonglong param_2)

{
  FUN_140e1da90(param_1 ^ param_2);
  return;
}


/* address=140e1db00 name=FUN_140e1db00 */

void FUN_140e1db00(int param_1,int param_2)

{
  FUN_140e1dac0((longlong)param_1,(longlong)param_2);
  return;
}


/* address=140e1db30 name=FUN_140e1db30 */

undefined8 FUN_140e1db30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e1db80 name=FUN_140e1db80 */

undefined8 FUN_140e1db80(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e1dbc0 name=FUN_140e1dbc0 */

void FUN_140e1dbc0(longlong param_1)

{
  FUN_140d47a60(param_1 + 8);
  FUN_140d1ccb0(param_1 + 0xa0);
  return;
}


/* address=140e1dc10 name=FUN_140e1dc10 */

undefined8
FUN_140e1dc10(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
             undefined8 param_6,undefined8 param_7,char param_8)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar7;
  uint local_38;
  undefined local_28;
  longlong local_18;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if ((param_4 == 0) || (lVar3 = FUN_140d1c8f0(param_7), param_4 == lVar3)) {
    lVar3 = FUN_140d46b40(*param_1);
    if (param_3 == lVar3) {
      uVar4 = FUN_140d1c8f0(param_7);
      uVar1 = FUN_140d49160(param_6);
      if (param_8 == '\0') {
        local_38 = 0;
      }
      else {
        local_38 = FUN_140d49180(param_6);
      }
      if (uVar4 + uVar1 + (ulonglong)local_38 != param_3) {
        FID_conflict__assert((wchar_t *)s_m_1413fa270,(wchar_t *)s_D_1413fa1a0,0x4b);
      }
      puVar5 = param_1 + 1;
      FUN_140d479f0(puVar5);
      FUN_140d1cc10(param_1 + 0x14);
      if (0x40 < uVar4) {
        FID_conflict__assert((wchar_t *)s_m_1413fa3f0,(wchar_t *)s_D_1413fa320,0x50);
      }
      FUN_140e1db30(param_1 + 0x21,param_2,uVar4);
      local_28 = (undefined)uVar4;
      *(undefined *)(param_1 + 0x29) = local_28;
      *(char *)((longlong)param_1 + 0x149) = param_8;
      if (param_8 == '\0') {
        local_18 = 0;
      }
      else {
        local_18 = param_2 + uVar4 + uVar1;
      }
      iVar2 = FUN_140d47cb0(puVar5,param_6,0,param_2 + uVar4,local_18,param_5 == 1);
      if ((iVar2 == 0) ||
         (iVar2 = FUN_140d1cdb0(param_1 + 0x14,param_2,uVar4,param_7,0), iVar2 == 0)) {
        FUN_140e1dbc0(param_1);
        uVar6 = 0;
      }
      else {
        FUN_140d49050(puVar5,0);
        uVar6 = 1;
      }
    }
    else {
      FUN_140d186f0(0x1e,0,0x66,s_D__a_1_s_target_release_build_bo_1413fa130,CONCAT44(uVar7,0x44));
      uVar6 = 0;
    }
  }
  else {
    FUN_140d186f0(0x1e,0,0x7a,s_D__a_1_s_target_release_build_bo_1413fa0c0,CONCAT44(uVar7,0x3f));
    uVar6 = 0;
  }
  return uVar6;
}


/* address=140e1dec0 name=FUN_140e1dec0 */

longlong FUN_140e1dec0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    FID_conflict__assert((wchar_t *)s_e_1413fa500,(wchar_t *)s_D_1413fa430,99);
  }
  lVar3 = FUN_140d1d270(param_1 + 0xa0);
  iVar1 = FUN_140d48f50(param_1 + 8);
  if (iVar1 == 2) {
    uVar2 = FUN_140d48e90(param_1 + 8);
    uVar4 = (ulonglong)uVar2;
    if ((uVar4 == 0) || ((uVar4 & uVar4 - 1) != 0)) {
      FID_conflict__assert((wchar_t *)s_b_1413fa600,(wchar_t *)s_D_1413fa530,0x6f);
    }
    lVar3 = lVar3 + (uVar4 - (ulonglong)(param_2 + lVar3) % uVar4);
  }
  return lVar3;
}


/* address=140e1f100 name=FUN_140e1f100 */

longlong FUN_140e1f100(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140d76180(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_140e1f5a0(lVar1,0,0x18);
  }
  return lVar1;
}


/* address=140e1f150 name=FUN_140e1f150 */

void FUN_140e1f150(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140d762b0(*(undefined8 *)(param_1 + 8));
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140e1f190 name=FUN_140e1f190 */

undefined8 FUN_140e1f190(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    if (param_2 + 3 < param_2) {
      FUN_140d186f0(7,0,0x45,s_D__a_1_s_target_release_build_bo_1413fb930,0x5f);
      uVar1 = 0;
    }
    else {
      uVar2 = (param_2 + 3) / 3;
      uVar3 = uVar2 << 2;
      if (uVar3 / 4 == uVar2) {
        lVar4 = FUN_140d76360(*(undefined8 *)(param_1 + 8),uVar3);
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
        FUN_140d186f0(7,0,0x45,s_D__a_1_s_target_release_build_bo_1413fb990,0x65);
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=140e1f2b0 name=FUN_140e1f2b0 */

ulonglong FUN_140e1f2b0(ulonglong *param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = FUN_140e1f190(param_1,param_2);
  if (iVar1 == 0) {
    param_2 = 0;
  }
  else {
    if (*param_1 < param_2) {
      FUN_140e1f5a0(param_1[1] + *param_1,0,param_2 - *param_1);
    }
    *param_1 = param_2;
  }
  return param_2;
}


/* address=140e1f330 name=FUN_140e1f330 */

void FUN_140e1f330(undefined8 param_1,undefined8 param_2)

{
  FUN_140e1f2b0(param_1,param_2);
  return;
}


/* address=140e1f360 name=FUN_140e1f360 */

undefined8 FUN_140e1f360(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

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
      FUN_140d186f0(7,0,0x45,s_D__a_1_s_target_release_build_bo_1413fb9f0,0x89);
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_140e1f190(param_1,uVar3);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        FUN_140e1f550(param_1[1] + *param_1,param_2,param_3);
        *param_1 = uVar3;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}


/* address=140e1f550 name=FUN_140e1f550 */

undefined8 FUN_140e1f550(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e1f5a0 name=FUN_140e1f5a0 */

undefined8 FUN_140e1f5a0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e1f5e0 name=FUN_140e1f5e0 */

longlong FUN_140e1f5e0(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_18;
  
  iVar3 = FUN_140d08380(param_1);
  if (iVar3 == 0) {
    uVar4 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar5 = FUN_140d8eab0(uVar4);
    local_18 = lVar5 + 5;
    uVar4 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
    cVar1 = FUN_140d8fce0(uVar4);
    if (cVar1 == '\0') {
      uVar4 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar2 = FUN_140d8e970(uVar4);
      if (0x303 < uVar2) {
        local_18 = lVar5 + 6;
      }
    }
    cVar1 = FUN_140e207b0(param_1);
    if (cVar1 != '\0') {
      local_18 = local_18 << 1;
    }
  }
  else {
    local_18 = FUN_140e26950(param_1,1);
  }
  return local_18;
}


/* address=140e1f6d0 name=FUN_140e1f6d0 */

undefined4 FUN_140e1f6d0(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4)

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


/* address=140e1f750 name=FUN_140e1f750 */

undefined8 FUN_140e1f750(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e1f7a0 name=FUN_140e1f7a0 */

longlong FUN_140e1f7a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  
  iVar1 = FUN_140d08380(param_1);
  if (iVar1 == 0) {
    local_18 = 5;
  }
  else {
    local_18 = 0xd;
  }
  uVar2 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
  lVar3 = FUN_140d8ea70(uVar2);
  return local_18 + lVar3;
}


/* address=140e1f800 name=FUN_140e1f800 */

undefined8
FUN_140e1f800(longlong param_1,char *param_2,undefined *param_3,longlong *param_4,undefined *param_5
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
  char local_138;
  undefined local_137;
  char local_136;
  ushort local_134 [2];
  ushort local_130 [2];
  uint local_12c;
  uint local_128;
  undefined4 local_124;
  int local_120;
  uint local_11c;
  undefined local_118 [16];
  undefined *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  undefined *local_e0;
  undefined local_d8 [16];
  undefined local_c8 [16];
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
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  *param_4 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 0xac) == 1) {
    return 3;
  }
  cVar1 = FUN_140d902d0(param_1,param_5);
  if (cVar1 == '\0') {
    return 4;
  }
  local_108 = local_68;
  puVar4 = (undefined *)FUN_140d13c30(local_108,param_6);
  puVar10 = local_b8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_140d13c30(local_118,local_b8);
  iVar3 = FUN_140d71a50(local_118,&local_138);
  if (((iVar3 == 0) || (iVar3 = FUN_140d71aa0(local_118,local_130), iVar3 == 0)) ||
     (iVar3 = FUN_140d71aa0(local_118,local_134), iVar3 == 0)) {
    *param_4 = 5;
    return 2;
  }
  uVar5 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
  cVar1 = FUN_140d8fce0(uVar5);
  if (cVar1 == '\0') {
    local_11c = (uint)local_130[0];
    uVar5 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
    uVar2 = FUN_140d8e9d0(uVar5);
    local_137 = local_11c == uVar2;
    local_128 = (uint)(byte)local_137;
  }
  else {
    local_137 = (int)(uint)local_130[0] >> 8 == 3;
    local_12c = (uint)(byte)local_137;
  }
  if ((bool)local_137 == false) {
    FUN_140d186f0(0x10,0,0xf7,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0xe7));
    *param_5 = 0x46;
    return 4;
  }
  if (0x4140 < local_134[0]) {
    FUN_140d186f0(0x10,0,0x92,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0xee));
    *param_5 = 0x16;
    return 4;
  }
  iVar3 = FUN_140d71d10(local_118,local_d8,local_134[0]);
  if (iVar3 == 0) {
    *param_4 = (ulonglong)local_134[0] + 5;
    return 2;
  }
  uVar5 = FUN_140d12660(param_6,local_58,0,5);
  FUN_140d13c30(local_c8,uVar5);
  puVar4 = local_c8;
  puVar10 = local_a8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_140d0f530(param_1,0,0x100,local_a8);
  local_100 = FUN_140d11de0(param_6);
  lVar9 = FUN_140d71850(local_118);
  *param_4 = local_100 - lVar9;
  if (((((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 1 & 1) != 0) &&
       (uVar2 = FUN_140d77f20(param_1), 0x303 < uVar2)) &&
      ((iVar3 = FUN_140d0a2f0(param_1), iVar3 != 0 && ((local_138 == '\x14' && (local_134[0] == 1)))
       ))) && (pcVar6 = (char *)FUN_140d71830(local_d8), *pcVar6 == '\x01')) {
    *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) =
         *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) + '\x01';
    if (0x20 < *(byte *)(*(longlong *)(param_1 + 0x30) + 0xd2)) {
      FUN_140d186f0(0x10,0,0xdb,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,CONCAT44(uVar11,0x107));
      *param_5 = 10;
      return 4;
    }
    return 1;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) & 1) != 0) {
    uVar5 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
    cVar1 = FUN_140d8fce0(uVar5);
    if ((cVar1 != '\0') && (local_138 == '\x17')) {
      uVar5 = FUN_140e20870(param_1,param_5,*param_4);
      return uVar5;
    }
  }
  if (**(longlong **)(param_1 + 0x30) == -1) {
    FUN_140d186f0(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0x118));
    *param_5 = 0x50;
    return 4;
  }
  local_f8 = FUN_140d71850(local_d8);
  uVar5 = FUN_140d71830(local_d8);
  puVar4 = (undefined *)FUN_140d11e40(local_48,uVar5,local_f8);
  puVar10 = local_98;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar4 = local_c8;
  puVar10 = local_88;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  local_f0 = *(undefined8 **)(param_1 + 0x30);
  uVar7 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
  uVar5 = *local_f0;
  cVar1 = FUN_140d8ec80(uVar7,param_3,local_138,local_130[0],uVar5,local_88,local_98);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (cVar1 == '\0') {
    if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) & 1) != 0) {
      uVar5 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
      cVar1 = FUN_140d8fce0(uVar5);
      if (cVar1 == '\0') {
        FUN_140d18390();
        uVar5 = FUN_140e20870(param_1,param_5,*param_4);
        return uVar5;
      }
    }
    FUN_140d186f0(0x10,0,0x8b,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0x126));
    *param_5 = 0x14;
    return 4;
  }
  *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) =
       *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) & 0xfe;
  **(longlong **)(param_1 + 0x30) = **(longlong **)(param_1 + 0x30) + 1;
  uVar7 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
  cVar1 = FUN_140d8fce0(uVar7);
  if (cVar1 == '\0') {
    uVar7 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
    uVar2 = FUN_140d8e970(uVar7);
    if (0x303 < uVar2) {
      local_124 = 1;
      goto LAB_140e1ff11;
    }
  }
  local_124 = 0;
LAB_140e1ff11:
  local_136 = (char)local_124;
  if ((char)local_124 == '\0') {
    local_120 = 0x4000;
  }
  else {
    local_120 = 0x4001;
  }
  local_e8 = (ulonglong)local_120;
  uVar8 = FUN_140d11de0(param_3);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8 < uVar8) {
    FUN_140d186f0(0x10,0,0x88,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0x138));
    *param_5 = 0x16;
    uVar5 = 4;
  }
  else {
    if (local_136 != '\0') {
      if (local_138 != '\x17') {
        FUN_140d186f0(0x10,0,0xfb,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                      ,CONCAT44(uVar11,0x140));
        *param_5 = 0x32;
        return 4;
      }
      do {
        cVar1 = FUN_140d11df0(param_3);
        if (cVar1 != '\0') {
          FUN_140d186f0(0x10,0,0x8b,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                        ,0x147);
          *param_5 = 0x33;
          return 4;
        }
        pcVar6 = (char *)FUN_140d88240(param_3);
        local_138 = *pcVar6;
        lVar9 = FUN_140d11de0(param_3);
        puVar4 = (undefined *)FUN_140d12660(param_3,local_38,0,lVar9 + -1);
        uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
        puVar10 = param_3;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar10 = puVar10 + 1;
        }
      } while (local_138 == '\0');
    }
    cVar1 = FUN_140d11df0(param_3);
    if (cVar1 == '\0') {
      *(undefined *)(*(longlong *)(param_1 + 0x30) + 0xd2) = 0;
    }
    else {
      *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) =
           *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) + '\x01';
      if (0x20 < *(byte *)(*(longlong *)(param_1 + 0x30) + 0xd2)) {
        FUN_140d186f0(0x10,0,0xdb,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                      ,CONCAT44(uVar11,0x154));
        *param_5 = 10;
        return 4;
      }
    }
    if (local_138 == '\x15') {
      local_e0 = local_28;
      puVar4 = (undefined *)FUN_140d13c30(local_e0,param_3);
      puVar10 = local_78;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar10 = puVar10 + 1;
      }
      uVar5 = FUN_140e20520(param_1,param_5,local_78);
    }
    else if ((local_138 == '\x16') || (cVar1 = FUN_140d90380(param_1), cVar1 == '\0')) {
      *(undefined *)(*(longlong *)(param_1 + 0x30) + 0xd3) = 0;
      *param_2 = local_138;
      uVar5 = 0;
    }
    else {
      FUN_140d186f0(0x10,0,0xe1,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,CONCAT44(uVar11,0x165));
      *param_5 = 10;
      uVar5 = 4;
    }
  }
  return uVar5;
}


/* address=140e20210 name=FUN_140e20210 */

longlong FUN_140e20210(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = FUN_140d08380(param_1);
  if (iVar2 == 0) {
    uVar3 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar5 = FUN_140d8ea70(uVar3);
    lVar4 = lVar5 + 5;
    cVar1 = FUN_140e207b0(param_1);
    if (cVar1 != '\0') {
      uVar3 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar3 = FUN_140d11ad0(uVar3);
      lVar4 = FUN_140d8c710(uVar3);
      lVar4 = lVar5 + 10 + lVar4;
    }
  }
  else {
    uVar3 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar4 = FUN_140d8ea70(uVar3);
    lVar4 = lVar4 + 0xd;
  }
  return lVar4;
}


/* address=140e202e0 name=FUN_140e202e0 */

ulonglong FUN_140e202e0(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                       undefined param_5,undefined8 param_6,ulonglong param_7)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  iVar2 = FUN_140e1f6d0(param_6,param_7,param_2,param_4);
  if (iVar2 == 0) {
    lVar4 = FUN_140e20d80(param_1,param_5,param_7);
    cVar1 = FUN_140e20e50(param_1,&local_30,param_5,param_7);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else if ((param_7 + lVar4 < param_7) || (lVar4 + param_7 + local_30 < lVar4 + param_7)) {
      uVar3 = FUN_140d186f0(0x10,0,200,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                            ,0x20f);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else if (param_4 < param_7 + lVar4 + local_30) {
      uVar3 = FUN_140d186f0(0x10,0,0x79,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                            ,0x213);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      local_28 = param_2 + lVar4;
      local_20 = local_28 + param_7;
      local_18 = param_2;
      cVar1 = FUN_140e20f40(param_1,param_2,local_28,local_20,param_5,param_6,param_7);
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
      else {
        local_30 = lVar4 + param_7 + local_30;
        *param_3 = local_30;
        uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),1);
      }
    }
  }
  else {
    uVar3 = FUN_140d186f0(0x10,0,0xbd,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                          ,0x204);
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}


/* address=140e20520 name=FUN_140e20520 */

undefined8 FUN_140e20520(longlong param_1,undefined *param_2,undefined *param_3)

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
  undefined2 local_38;
  undefined local_28 [24];
  
  lVar4 = FUN_140d11de0(param_3);
  if (lVar4 == 2) {
    puVar8 = param_3;
    puVar9 = local_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_140d0f530(param_1,0,0x15,local_28);
    pcVar6 = (char *)FUN_140d83830(param_3,0);
    cVar1 = *pcVar6;
    pbVar7 = (byte *)FUN_140d83830(param_3,1);
    bVar2 = *pbVar7;
    local_38 = CONCAT11(cVar1,bVar2);
    FUN_140d0f490(param_1,0x4004,local_38);
    if (cVar1 == '\x01') {
      if (bVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xac) = 1;
        uVar5 = 3;
      }
      else {
        if ((((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 1 & 1) != 0) &&
            (uVar3 = FUN_140d77f20(param_1), 0x303 < uVar3)) && (bVar2 != 0x5a)) {
          *param_2 = 0x32;
          FUN_140d186f0(0x10,0,0x66,
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
          FUN_140d186f0(0x10,0,0xdc,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                        ,0x249);
          uVar5 = 4;
        }
      }
    }
    else if (cVar1 == '\x02') {
      FUN_140d186f0(0x10,0,bVar2 + 1000,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,0x250);
      FUN_140d18860("SSL alert number %d",bVar2);
      *param_2 = 0;
      uVar5 = 4;
    }
    else {
      *param_2 = 0x2f;
      FUN_140d186f0(0x10,0,0xe3,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,599);
      uVar5 = 4;
    }
  }
  else {
    *param_2 = 0x32;
    FUN_140d186f0(0x10,0,0x66,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0x227);
    uVar5 = 4;
  }
  return uVar5;
}


/* address=140e207b0 name=FUN_140e207b0 */

undefined FUN_140e207b0(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
  cVar1 = FUN_140d8fce0(uVar4);
  if (cVar1 == '\0') {
    uVar4 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
    uVar2 = FUN_140d8e970(uVar4);
    if ((uVar2 < 0x302) && ((*(uint *)(param_1 + 0x84) & 0x100) != 0)) {
      uVar4 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar4 = FUN_140d11ad0(uVar4);
      iVar3 = FUN_140d8a9e0(uVar4);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* address=140e20870 name=FUN_140e20870 */

undefined8 FUN_140e20870(longlong param_1,undefined *param_2,ulonglong param_3)

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
    FUN_140d186f0(0x10,0,0x10e,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0xbb);
    *param_2 = 10;
    uVar1 = 4;
  }
  return uVar1;
}


/* address=140e20930 name=FUN_140e20930 */

undefined8
FUN_140e20930(longlong param_1,undefined *param_2,longlong param_3,undefined8 param_4,
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
  longlong local_78;
  undefined2 local_70 [4];
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar5 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
  local_68 = (undefined *)0x0;
  local_78 = 0;
  cVar1 = FUN_140d8fce0(uVar5);
  if ((cVar1 == '\0') && (uVar2 = FUN_140d8e970(uVar5), 0x303 < uVar2)) {
    local_68 = &param_5;
    local_78 = 1;
  }
  cVar1 = FUN_140d8eb20(uVar5,&local_60,param_7,local_78);
  if ((cVar1 == '\0') || (cVar1 = FUN_140d8ebb0(uVar5,local_70,param_7,local_78), cVar1 == '\0')) {
    FUN_140d186f0(0x10,0,200,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0x180);
    return 0;
  }
  if ((param_6 != param_3) && (iVar4 = FUN_140e1f6d0(param_6,param_7,param_3,param_7), iVar4 != 0))
  {
    FID_conflict__assert((wchar_t *)"i",(wchar_t *)"D",0x184);
  }
  uVar6 = FUN_140e1f7a0(param_1);
  iVar4 = FUN_140e1f6d0(param_6,param_7,param_2,uVar6);
  if (iVar4 != 0) {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x185);
  }
  iVar4 = FUN_140e1f6d0(param_6,param_7,param_4,local_60);
  if (iVar4 != 0) {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x186);
  }
  if (local_78 == 0) {
    *param_2 = param_5;
  }
  else {
    *param_2 = 0x17;
  }
  uVar3 = FUN_140d8e9d0(uVar5);
  param_2[1] = (char)((ushort)uVar3 >> 8);
  param_2[2] = (char)uVar3;
  param_2[3] = (char)((ushort)local_70[0] >> 8);
  param_2[4] = (char)local_70[0];
  uVar6 = FUN_140d11e40(local_28,param_2,5);
  FUN_140d13c30(local_58,uVar6);
  if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) == -1) {
    FUN_140d186f0(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0x198);
    return 0;
  }
  puVar8 = local_58;
  puVar9 = local_48;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  cVar1 = FUN_140d8f440(uVar5,param_2 + 5,param_3,param_4,*param_2,uVar3,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8),local_48,param_6,param_7,
                        local_68,local_78);
  if (cVar1 == '\0') {
    return 0;
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) =
       *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) + 1;
  puVar8 = local_58;
  puVar9 = local_38;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_140d0f530(param_1,1,0x100,local_38);
  return 1;
}


/* address=140e20d80 name=FUN_140e20d80 */

longlong FUN_140e20d80(longlong param_1,char param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((param_2 == '\x17') && (1 < param_3)) && (cVar1 = FUN_140e207b0(param_1), cVar1 != '\0')) {
    uVar2 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
    uVar2 = FUN_140d11ad0(uVar2);
    lVar3 = FUN_140d8c710(uVar2);
    return lVar3 + 9;
  }
  uVar2 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
  lVar3 = FUN_140d8ea70(uVar2);
  return lVar3 + 5;
}


/* address=140e20e50 name=FUN_140e20e50 */

void FUN_140e20e50(longlong param_1,undefined8 param_2,char param_3,ulonglong param_4)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulonglong local_res20;
  undefined8 local_18;
  
  local_18 = 0;
  uVar3 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
  cVar1 = FUN_140d8fce0(uVar3);
  if (cVar1 == '\0') {
    uVar3 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
    uVar2 = FUN_140d8e970(uVar3);
    if (0x303 < uVar2) {
      local_18 = 1;
    }
  }
  local_res20 = param_4;
  if ((param_3 == '\x17') && (1 < param_4)) {
    cVar1 = FUN_140e207b0(param_1);
    if (cVar1 != '\0') {
      local_res20 = param_4 - 1;
    }
  }
  uVar3 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
  FUN_140d8eb20(uVar3,param_2,local_res20,local_18);
  return;
}


/* address=140e20f40 name=FUN_140e20f40 */

void FUN_140e20f40(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  char param_5,longlong param_6,ulonglong param_7)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined auStack_88 [32];
  char local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined local_20 [4];
  undefined local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_88;
  if (((param_5 == '\x17') && (1 < param_7)) && (cVar1 = FUN_140e207b0(param_1), cVar1 != '\0')) {
    uVar2 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar3 = FUN_140d8ea70(uVar2);
    if (lVar3 != 0) {
      FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x1d8);
    }
    local_28 = 5;
    local_40 = param_2 + 5;
    local_38 = param_2 + 6;
    local_58 = 1;
    local_60 = param_6;
    local_68 = param_5;
    cVar1 = FUN_140e20930(param_1,param_2,local_40,local_38);
    if (cVar1 != '\0') {
      uVar2 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
      cVar1 = FUN_140d8eb20(uVar2,&local_30,1,0);
      if (cVar1 == '\0') {
        FID_conflict__assert((wchar_t *)"f",(wchar_t *)"D",0x1e6);
      }
      else {
        local_48 = local_30 + 6;
        uVar2 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
        uVar2 = FUN_140d11ad0(uVar2);
        lVar3 = FUN_140d8c710(uVar2);
        if (lVar3 + 5 != local_48) {
          FID_conflict__assert((wchar_t *)"S",(wchar_t *)"D",0x1ec);
        }
        local_58 = param_7 - 1;
        local_60 = param_6 + 1;
        local_68 = param_5;
        cVar1 = FUN_140e20930(param_1,local_20,param_3 + 1,param_4);
        if (cVar1 != '\0') {
          lVar3 = FUN_140e20d80(param_1,0x17,param_7);
          if (lVar3 != local_48 + 4) {
            FID_conflict__assert((wchar_t *)"t",(wchar_t *)"D",0x1f6);
          }
          FUN_140e1f750(param_2 + local_48,local_20,4);
          FUN_140e1f750(param_3,local_1c,1);
        }
      }
    }
  }
  else {
    local_58 = param_7;
    local_60 = param_6;
    local_68 = param_5;
    FUN_140e20930(param_1,param_2,param_3,param_4);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=140e21270 name=FUN_140e21270 */

undefined8 FUN_140e21270(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e212c0 name=FUN_140e212c0 */

int FUN_140e212c0(undefined8 *param_1)

{
  int iVar1;
  int local_18;
  
  do {
    if (*(int *)(param_1 + 3) == 0x10) {
      return 1;
    }
    local_18 = 0;
    iVar1 = *(int *)(param_1 + 3);
    switch(iVar1) {
    case 0:
      local_18 = FUN_140e222c0(param_1);
      break;
    case 1:
      local_18 = FUN_140e22a10(param_1);
      break;
    case 2:
      local_18 = FUN_140e23820(param_1);
      break;
    case 3:
      local_18 = FUN_140e23db0(param_1);
      break;
    case 4:
      local_18 = FUN_140e243f0(param_1);
      break;
    case 5:
      local_18 = FUN_140e25070(param_1);
      break;
    case 6:
      local_18 = FUN_140e25100(param_1);
      break;
    case 7:
      local_18 = FUN_140e252c0(param_1);
      break;
    case 8:
      local_18 = FUN_140e255d0(param_1);
      break;
    case 9:
      local_18 = FUN_140e25820(param_1);
      break;
    case 10:
      local_18 = FUN_140e259c0(param_1);
      break;
    case 0xb:
      local_18 = FUN_140e25ca0(param_1);
      break;
    case 0xc:
      local_18 = FUN_140e25df0(param_1);
      break;
    case 0xd:
      local_18 = FUN_140e25f30(param_1);
      break;
    case 0xe:
      local_18 = FUN_140e26010(param_1);
      break;
    case 0xf:
      local_18 = FUN_140e261c0(param_1);
    }
    if (*(int *)(param_1 + 3) != iVar1) {
      FUN_140d0f490(*param_1,0x2001,1);
    }
  } while (local_18 == 1);
  return local_18;
}


/* address=140e214d0 name=FUN_140e214d0 */

char * FUN_140e214d0(longlong param_1)

{
  char *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    pcVar1 = "TLS 1.3 server select_parameters";
    break;
  case 1:
    pcVar1 = "TLS 1.3 server select_session";
    break;
  case 2:
    pcVar1 = "TLS 1.3 server send_hello_retry_request";
    break;
  case 3:
    pcVar1 = "TLS 1.3 server read_second_client_hello";
    break;
  case 4:
    pcVar1 = "TLS 1.3 server send_server_hello";
    break;
  case 5:
    pcVar1 = "TLS 1.3 server send_server_certificate_verify";
    break;
  case 6:
    pcVar1 = "TLS 1.3 server send_server_finished";
    break;
  case 7:
    pcVar1 = "TLS 1.3 server send_half_rtt_ticket";
    break;
  case 8:
    pcVar1 = "TLS 1.3 server read_second_client_flight";
    break;
  case 9:
    pcVar1 = "TLS 1.3 server process_end_of_early_data";
    break;
  case 10:
    pcVar1 = "TLS 1.3 server read_client_encrypted_extensions";
    break;
  case 0xb:
    pcVar1 = "TLS 1.3 server read_client_certificate";
    break;
  case 0xc:
    pcVar1 = "TLS 1.3 server read_client_certificate_verify";
    break;
  case 0xd:
    pcVar1 = "TLS 1.3 server read_channel_id";
    break;
  case 0xe:
    pcVar1 = "TLS 1.3 server read_client_finished";
    break;
  case 0xf:
    pcVar1 = "TLS 1.3 server send_new_session_ticket";
    break;
  case 0x10:
    pcVar1 = "TLS 1.3 server done";
    break;
  default:
    pcVar1 = "TLS 1.3 server unknown";
  }
  return pcVar1;
}


/* address=140e21610 name=FUN_140e21610 */

ulonglong FUN_140e21610(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined local_188;
  char local_187;
  byte local_186;
  byte local_185;
  byte local_184;
  byte local_183;
  short local_180;
  longlong local_178;
  undefined8 local_170;
  undefined local_168 [8];
  undefined local_160 [16];
  longlong *local_150;
  undefined *local_148;
  undefined local_140 [8];
  longlong local_138;
  undefined8 *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined local_108 [16];
  undefined local_f8 [48];
  undefined local_c8 [16];
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
  
  local_170 = *param_1;
  lVar3 = FUN_140d11ad0(param_1 + 0xbc);
  local_180 = *(short *)(lVar3 + 6);
  FUN_140d11d80(local_108);
  local_188 = 0x32;
  cVar1 = FUN_140da9e10(param_1,&local_187,local_108,&local_188,param_2);
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (cVar1 == '\0') {
    uVar4 = FUN_140db57b0(local_170,2,local_188);
    return uVar4 & 0xffffffffffffff00;
  }
  if (local_187 == '\0') {
    FUN_140db57b0(local_170,2,0x2f);
    uVar4 = FUN_140d186f0(0x10,0,0xf3,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                          ,CONCAT44(uVar8,0x3d));
    return uVar4 & 0xffffffffffffff00;
  }
  FUN_140d122a0(local_160);
  local_178 = FUN_140d11ad0(param_1 + 0xc3);
  if ((((local_178 == 0) || ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) ||
      (*(short *)(local_178 + 0x20) != local_180)) ||
     (cVar1 = FUN_140d11df0(local_178 + 0x38), cVar1 != '\0')) {
    FUN_140d138c0(local_f8);
    uVar6 = FUN_140de84f0(local_140,local_180);
    FUN_140d11cd0(local_168,uVar6);
    FUN_140d95d90(local_140);
    cVar1 = FUN_140d11eb0(local_168);
    if (cVar1 != '\0') {
      uVar6 = FUN_140d11b30(local_f8);
      iVar2 = FUN_140d73a80(uVar6,0x20);
      if (iVar2 != 0) {
        local_150 = (longlong *)FUN_140d11ad0(local_168);
        puVar5 = local_108;
        puVar7 = local_a8;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar6 = FUN_140d11b30(local_f8);
        local_138 = *local_150;
        cVar1 = (**(code **)(local_138 + 0x18))(local_150,uVar6,local_160,&local_188,local_a8);
        if (cVar1 != '\0') {
          local_130 = param_1 + 0x4d;
          uVar6 = FUN_140d11b30(local_f8);
          cVar1 = FUN_140d0f420(uVar6,local_130);
          if (cVar1 != '\0') {
            if ((local_178 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) {
              *(short *)(local_178 + 0x20) = local_180;
              local_128 = local_48;
              puVar5 = (undefined *)FUN_140d13c30(local_128,param_1 + 0x4d);
              puVar7 = local_98;
              for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              cVar1 = FUN_140d12540(local_178 + 0x28,local_98);
              if (cVar1 == '\0') {
LAB_140e21ac3:
                FUN_140db57b0(local_170,2,0x50);
                local_184 = 0;
                FUN_140d95d90(local_168);
                FUN_140d138f0(local_f8);
                FUN_140d12320(local_160);
                return (ulonglong)local_184;
              }
              local_120 = local_38;
              puVar5 = (undefined *)FUN_140d13c30(local_120,local_160);
              puVar7 = local_88;
              for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              cVar1 = FUN_140d12540(local_178 + 0x38,local_88);
              if (cVar1 == '\0') goto LAB_140e21ac3;
            }
            FUN_140d95d90(local_168);
            FUN_140d138f0(local_f8);
            goto LAB_140e21b1e;
          }
        }
      }
    }
    FUN_140db57b0(local_170,2,local_188);
    local_185 = 0;
    FUN_140d95d90(local_168);
    FUN_140d138f0(local_f8);
    FUN_140d12320(local_160);
    local_186 = local_185;
  }
  else {
    local_110 = local_68;
    puVar5 = (undefined *)FUN_140d13c30(local_110,local_178 + 0x28);
    puVar7 = local_c8;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = FUN_140d12540(param_1 + 0x4d,local_c8);
    if (cVar1 != '\0') {
      local_148 = local_58;
      puVar5 = (undefined *)FUN_140d13c30(local_148,local_178 + 0x38);
      puVar7 = local_b8;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_140d12540(local_160,local_b8);
      if (cVar1 != '\0') {
LAB_140e21b1e:
        local_118 = local_28;
        puVar5 = (undefined *)FUN_140d13c30(local_118,local_160);
        puVar7 = local_78;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        local_183 = FUN_140e19dd0(param_1,local_78);
        FUN_140d12320(local_160);
        return (ulonglong)local_183;
      }
    }
    FUN_140db57b0(local_170,2,0x50);
    local_186 = 0;
    FUN_140d12320(local_160);
  }
  return (ulonglong)local_186;
}


/* address=140e21b90 name=FUN_140e21b90 */

undefined8 FUN_140e21b90(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_140d744b0(param_2,0x2b);
  if ((((iVar1 != 0) && (iVar1 = FUN_140d74170(param_2,local_38), iVar1 != 0)) &&
      (iVar1 = FUN_140d744b0(local_38,*(undefined2 *)(*param_1 + 0x10)), iVar1 != 0)) &&
     (iVar1 = FUN_140d73c90(param_2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=140e21c00 name=FUN_140e21c00 */

void FUN_140e21c00(longlong param_1,longlong param_2,undefined2 param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_40;
  undefined local_38 [16];
  undefined local_28 [24];
  
  FUN_140d717c0(local_38,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48));
  uVar1 = FUN_140d77f20(param_1);
  lVar2 = FUN_140d11ad0(param_1 + 8);
  if ((*(byte *)(lVar2 + 0xee) >> 3 & 1) == 0) {
    local_40 = FUN_140d46b00();
  }
  else {
    lVar2 = FUN_140d11ad0(param_1 + 8);
    local_40 = (uint)(*(byte *)(lVar2 + 0xee) >> 4 & 1);
  }
  lVar2 = FUN_140d11ad0(param_1 + 8);
  puVar4 = local_38;
  puVar5 = local_28;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_140d90050(local_28,local_40 != 0,uVar1,param_3,*(undefined4 *)(lVar2 + 0xe8));
  return;
}


/* address=140e21d20 name=FUN_140e21d20 */

undefined FUN_140e21d20(longlong **param_1,undefined *param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined local_1b8;
  char local_1b7;
  undefined local_1b0 [8];
  undefined local_1a8;
  undefined local_1a7;
  undefined local_1a6;
  undefined local_1a5;
  undefined local_1a4;
  undefined local_1a3;
  longlong *local_1a0;
  undefined4 local_198;
  ulonglong local_190;
  byte *local_188;
  undefined8 local_180;
  undefined local_178 [8];
  longlong local_170;
  undefined *local_168;
  undefined local_160 [56];
  undefined local_128 [16];
  undefined local_118 [48];
  undefined local_e8 [48];
  undefined local_b8 [16];
  undefined local_a8 [48];
  undefined local_78 [48];
  undefined local_48 [56];
  
  local_1a0 = *param_1;
  if (((*(byte *)(param_1 + 0xc4) >> 4 & 1) == 0) ||
     (uVar3 = FUN_140d09770(local_1a0), (uVar3 & 0x4000) != 0)) {
    *param_2 = 0;
    return 1;
  }
  uVar5 = FUN_140d11ad0(param_1 + 0xbc);
  FUN_140d81d90(local_1a0,uVar5);
  lVar6 = FUN_140d11ad0(local_1a0 + 0xe);
  if (0x10 < *(byte *)(lVar6 + 0x1c)) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x8e);
  }
  local_190 = 0;
  do {
    lVar6 = FUN_140d11ad0(local_1a0 + 0xe);
    if (*(byte *)(lVar6 + 0x1c) <= local_190) {
      *param_2 = 1;
      return 1;
    }
    uVar5 = FUN_140d11ad0(param_1 + 0xbc);
    uVar5 = FUN_140d81300(local_178,uVar5,2);
    FUN_140d11cd0(local_1b0,uVar5);
    FUN_140d12160(local_178);
    cVar1 = FUN_140d11eb0(local_1b0);
    if (cVar1 == '\0') {
      local_1a8 = 0;
      FUN_140d12160(local_1b0);
      return local_1a8;
    }
    lVar6 = FUN_140d11ad0(local_1b0);
    iVar4 = FUN_140d459b0(lVar6 + 0x170,4);
    if (iVar4 == 0) {
      local_1a7 = 0;
      FUN_140d12160(local_1b0);
      return local_1a7;
    }
    lVar6 = FUN_140d11ad0(local_1b0);
    local_188 = (byte *)(lVar6 + 0x1a8);
    *local_188 = *local_188 | 8;
    if ((*(byte *)((longlong)local_1a0 + 0xa4) >> 2 & 1) == 0) {
LAB_140e21f36:
      local_198 = 0;
    }
    else {
      if (local_1a0[0x13] != 0) {
        lVar6 = FUN_140d11ad0(local_1a0 + 1);
        cVar1 = FUN_140d11df0(lVar6 + 0xb0);
        if (cVar1 != '\0') goto LAB_140e21f36;
      }
      local_198 = 1;
    }
    local_1b7 = (char)local_198;
    if ((char)local_198 != '\0') {
      if (local_1a0[0x13] == 0) {
        local_180 = 0x3800;
      }
      else {
        local_180 = 0xffffffff;
      }
      lVar6 = FUN_140d11ad0(local_1b0);
      *(undefined4 *)(lVar6 + 0x174) = (undefined4)local_180;
    }
    if (0xff < local_190) {
      FID_conflict__assert((wchar_t *)"i",(wchar_t *)"D",0xa5);
    }
    local_1b8 = (undefined)local_190;
    FUN_140d138c0(local_160);
    uVar5 = FUN_140d11b30(local_160);
    local_170 = *local_1a0;
    cVar1 = (**(code **)(local_170 + 0x58))(local_1a0,uVar5,local_118,4);
    if (cVar1 == '\0') {
LAB_140e22137:
      local_1a6 = 0;
      FUN_140d138f0(local_160);
      FUN_140d12160(local_1b0);
      return local_1a6;
    }
    lVar6 = FUN_140d11ad0(local_1b0);
    iVar4 = FUN_140d74540(local_118,*(undefined4 *)(lVar6 + 0xb4));
    if (iVar4 == 0) goto LAB_140e22137;
    lVar6 = FUN_140d11ad0(local_1b0);
    iVar4 = FUN_140d74540(local_118,*(undefined4 *)(lVar6 + 0x170));
    if ((((iVar4 == 0) || (iVar4 = FUN_140d74140(local_118,local_a8), iVar4 == 0)) ||
        (iVar4 = FUN_140d74290(local_a8,&local_1b8,1), iVar4 == 0)) ||
       (iVar4 = FUN_140d74170(local_118,local_78), iVar4 == 0)) goto LAB_140e22137;
    local_168 = local_b8;
    puVar7 = (undefined *)FUN_140d92550(local_168,&local_1b8);
    puVar8 = local_128;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar5 = FUN_140d11ad0(local_1b0);
    cVar1 = FUN_140e1b5e0(uVar5,local_128);
    if (cVar1 == '\0') goto LAB_140e22137;
    uVar5 = FUN_140d11ad0(local_1b0);
    cVar1 = FUN_140d80670(param_1,local_78,uVar5);
    if (cVar1 == '\0') goto LAB_140e22137;
    iVar4 = FUN_140d74170(local_118,local_e8);
    if (iVar4 == 0) goto LAB_140e22137;
    if (local_1b7 != '\0') {
      iVar4 = FUN_140d744b0(local_e8,0x2a);
      if ((iVar4 == 0) || (iVar4 = FUN_140d74170(local_e8,local_48), iVar4 == 0)) {
LAB_140e221c7:
        local_1a5 = 0;
        FUN_140d138f0(local_160);
        FUN_140d12160(local_1b0);
        return local_1a5;
      }
      lVar6 = FUN_140d11ad0(local_1b0);
      iVar4 = FUN_140d74540(local_48,*(undefined4 *)(lVar6 + 0x174));
      if ((iVar4 == 0) || (iVar4 = FUN_140d73c90(local_e8), iVar4 == 0)) goto LAB_140e221c7;
    }
    uVar2 = FUN_140d95910(param_1,5);
    iVar4 = FUN_140d744b0(local_e8,uVar2);
    if ((iVar4 == 0) || (iVar4 = FUN_140d744b0(local_e8,0), iVar4 == 0)) {
      local_1a4 = 0;
      FUN_140d138f0(local_160);
      FUN_140d12160(local_1b0);
      return local_1a4;
    }
    uVar5 = FUN_140d11b30(local_160);
    cVar1 = FUN_140d95980(local_1a0,uVar5);
    if (cVar1 == '\0') {
      local_1a3 = 0;
      FUN_140d138f0(local_160);
      FUN_140d12160(local_1b0);
      return local_1a3;
    }
    FUN_140d138f0(local_160);
    FUN_140d12160(local_1b0);
    local_190 = local_190 + 1;
  } while( true );
}


/* address=140e222c0 name=FUN_140e222c0 */

undefined8 FUN_140e222c0(longlong *param_1)

{
  char cVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined local_b8 [4];
  undefined2 local_b4 [2];
  longlong local_b0;
  undefined local_a8 [48];
  undefined8 local_78;
  undefined local_70;
  undefined7 uStack_6f;
  undefined local_38 [56];
  
  local_b0 = *param_1;
  cVar1 = FUN_140d93e80(param_1,local_38,local_a8);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else if ((*(longlong *)(local_b0 + 0x98) == 0) || (CONCAT71(uStack_6f,local_70) == 0)) {
    FUN_140e21270((longlong)param_1 + 0x62b,local_78,CONCAT71(uStack_6f,local_70));
    *(undefined *)((longlong)param_1 + 0x64b) = local_70;
    cVar1 = FUN_140daba00(param_1,local_b4);
    if (cVar1 == '\0') {
      FUN_140d186f0(0x10,0,0x10a,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                    ,0xe6);
      FUN_140db57b0(local_b0,2,0x28);
      uVar4 = 0;
    }
    else {
      lVar3 = FUN_140e21c00(local_b0,local_a8,local_b4[0]);
      param_1[0xc0] = lVar3;
      if (param_1[0xc0] == 0) {
        FUN_140d186f0(0x10,0,0xb8,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,0xee);
        FUN_140db57b0(local_b0,2,0x28);
        uVar4 = 0;
      }
      else {
        local_b8[0] = 0x32;
        cVar1 = FUN_140daa790(param_1,local_b8,local_a8);
        if (cVar1 == '\0') {
          FUN_140db57b0(local_b0,2,local_b8[0]);
          uVar4 = 0;
        }
        else {
          uVar2 = FUN_140d77f20(local_b0);
          cVar1 = FUN_140e192d0(param_1 + 0x33,uVar2,param_1[0xc0]);
          if (cVar1 == '\0') {
            uVar4 = 0;
          }
          else {
            *(undefined4 *)(param_1 + 3) = 1;
            uVar4 = 1;
          }
        }
      }
    }
  }
  else {
    FUN_140d186f0(0x10,0,0x132,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                  ,0xdc);
    FUN_140db57b0(local_b0,2,0x2f);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140e224f0 name=FUN_140e224f0 */

void FUN_140e224f0(undefined8 *param_1,undefined *param_2,undefined8 param_3,int *param_4,
                  char *param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined local_108 [8];
  uint local_100;
  undefined local_fc [4];
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined local_c0 [16];
  undefined local_b0 [24];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  ulonglong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_1413fba80 ^ (ulonglong)auStack_148;
  local_c8 = *param_1;
  FUN_140e26220(param_3,0);
  cVar1 = FUN_140dab270(param_7,local_c0,0x29);
  *param_5 = cVar1;
  if (*param_5 != '\0') {
    cVar1 = FUN_140dab270(param_7,local_68,0x2d);
    if (cVar1 == '\0') {
      *param_2 = 0x6d;
      local_128 = (undefined *)CONCAT44(local_128._4_4_,0x118);
      FUN_140d186f0(0x10,0,0xa4,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                   );
    }
    else {
      local_118 = local_c0;
      local_120 = param_7;
      local_128 = param_2;
      cVar1 = FUN_140daa1f0(param_1,local_b0,local_78,&local_100);
      if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0xc4) >> 4 & 1) != 0)) {
        FUN_140d139c0(local_108);
        local_d0 = local_58;
        puVar2 = (undefined *)FUN_140d11d80(local_d0);
        puVar5 = local_98;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar2 = (undefined *)FUN_140d837f0(local_b0,local_48);
        puVar5 = local_88;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        local_128 = local_98;
        local_f8 = FUN_140dac790(param_1,local_108,local_fc,local_88);
        local_f4 = local_f8;
        if (local_f8 == 0) {
          FUN_140d11ad0(local_108);
          cVar1 = FUN_140d80dd0(param_1);
          if ((cVar1 == '\0') ||
             (lVar4 = FUN_140d11ad0(local_108), (*(byte *)(lVar4 + 0x1a8) >> 3 & 1) == 0)) {
            local_e8 = 2;
            FUN_140d12160(local_108);
          }
          else {
            lVar4 = FUN_140d11ad0(local_108);
            local_100 = (local_100 - *(int *)(lVar4 + 0x170)) / 1000;
            FUN_140d0ff60(local_c8,local_38);
            lVar4 = FUN_140d11ad0(local_108);
            if (local_38[0] < *(ulonglong *)(lVar4 + 0xc0)) {
              FID_conflict__assert((wchar_t *)"n",(wchar_t *)"D",0x147);
            }
            lVar4 = FUN_140d11ad0(local_108);
            local_d8 = local_38[0] - *(longlong *)(lVar4 + 0xc0);
            if (local_d8 < 0x80000000) {
              *param_4 = local_100 - (int)local_d8;
              uVar3 = FUN_140d11ad0(local_108);
              cVar1 = FUN_140e1b890(param_1,uVar3,param_6,local_78);
              if (cVar1 == '\0') {
                *param_2 = 0x33;
                local_e0 = 3;
                FUN_140d12160(local_108);
              }
              else {
                uVar3 = FUN_140d11b30(local_108);
                FUN_140d13f30(param_3,uVar3);
                local_dc = 0;
                FUN_140d12160(local_108);
              }
            }
            else {
              local_e4 = 2;
              FUN_140d12160(local_108);
            }
          }
        }
        else if (local_f8 == 3) {
          *param_2 = 0x50;
          local_f0 = local_f8;
          FUN_140d12160(local_108);
        }
        else {
          local_ec = local_f8;
          FUN_140d12160(local_108);
        }
      }
    }
  }
  FUN_140e28050(local_28 ^ (ulonglong)auStack_148);
  return;
}


/* address=140e22920 name=FUN_140e22920 */

undefined8 FUN_140e22920(longlong param_1,longlong param_2)

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
    cVar1 = FUN_140d11df0(param_1 + 0x1b0);
    if (cVar1 == '\0') {
      lVar3 = FUN_140d11de0(param_2 + 0xb0);
      lVar4 = FUN_140d11de0(param_1 + 0x1b0);
      if (lVar3 == lVar4) {
        uVar5 = FUN_140d11de0(param_1 + 0x1b0);
        uVar6 = FUN_140d11ad0(param_1 + 0x1b0);
        uVar7 = FUN_140d11ad0(param_2 + 0xb0);
        iVar2 = FUN_140d76480(uVar7,uVar6,uVar5);
        if (iVar2 == 0) {
          return 1;
        }
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


/* address=140e22a10 name=FUN_140e22a10 */

undefined4 FUN_140e22a10(longlong **param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined local_288 [8];
  longlong *local_280;
  undefined local_278 [8];
  char local_270;
  char local_26f [3];
  int local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  uint local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined *local_220;
  undefined local_218 [8];
  longlong local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  ulonglong local_1e0;
  undefined8 local_1d8;
  undefined local_1c8 [16];
  undefined local_1b8 [16];
  undefined local_1a8 [16];
  undefined local_198 [16];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [16];
  undefined local_158 [16];
  undefined local_148 [40];
  undefined local_120 [16];
  undefined local_110 [16];
  undefined local_100 [16];
  undefined local_f0 [16];
  undefined local_e0 [16];
  undefined local_d0 [16];
  undefined local_c0 [16];
  undefined local_b0 [16];
  undefined local_a0 [24];
  undefined local_88 [120];
  
  local_280 = *param_1;
  cVar1 = FUN_140d93e80(param_1,local_148,local_88);
  if (cVar1 == '\0') {
    return 0;
  }
  local_288[0] = 0x32;
  FUN_140d139c0(local_278);
  local_270 = '\0';
  pcVar8 = &local_270;
  local_26c = FUN_140e224f0(param_1,local_288,local_278,local_280[6] + 0xfc,pcVar8,local_148,
                            local_88);
  uVar9 = (undefined4)((ulonglong)pcVar8 >> 0x20);
  if (local_26c == 0) {
    uVar6 = FUN_140d11ad0(local_278);
    uVar6 = FUN_140d81300(local_218,uVar6,0);
    FUN_140d13f30(param_1 + 0xbc,uVar6);
    FUN_140d12160(local_218);
    cVar1 = operator==<>(param_1 + 0xbc,0);
    if (cVar1 != '\0') {
      FUN_140db57b0(local_280,2,0x50);
      local_264 = 0;
      FUN_140d12160(local_278);
      return local_264;
    }
    *(byte *)(local_280[6] + 0xdc) = *(byte *)(local_280[6] + 0xdc) | 0x40;
    *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) | 0x80;
    local_210 = FUN_140d11ad0(local_280 + 0xe);
    uVar6 = FUN_140d11ad0(param_1 + 0xbc);
    FUN_140d81ed0(local_280,uVar6,*(undefined4 *)(local_210 + 100));
  }
  else {
    if (local_26c == 1) {
      *(undefined4 *)(param_1 + 3) = 1;
      local_25c = 0xb;
      FUN_140d12160(local_278);
      return local_25c;
    }
    if (local_26c == 2) {
      cVar1 = FUN_140d11eb0(local_278);
      if (cVar1 != '\0') {
        FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x17c);
      }
      cVar1 = FUN_140d80260(param_1);
      if (cVar1 == '\0') {
        FUN_140db57b0(local_280,2,0x50);
        local_268 = 0;
        FUN_140d12160(local_278);
        return local_268;
      }
    }
    else if (local_26c == 3) {
      FUN_140db57b0(local_280,2,local_288[0]);
      local_260 = 0;
      FUN_140d12160(local_278);
      return local_260;
    }
  }
  cVar1 = FUN_140daac00(param_1,local_288,local_88);
  if (cVar1 == '\0') {
    FUN_140db57b0(local_280,2,local_288[0]);
    local_258 = 0;
    FUN_140d12160(local_278);
    return local_258;
  }
  lVar4 = FUN_140d11ad0(param_1 + 0xbc);
  *(longlong **)(lVar4 + 200) = param_1[0xc0];
  lVar4 = FUN_140d11ad0(param_1 + 0xbc);
  cVar1 = FUN_140daba00(param_1,lVar4 + 6);
  if (cVar1 == '\0') {
    FUN_140d186f0(0x10,0,0x10a,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                  ,CONCAT44(uVar9,0x1a8));
    FUN_140db57b0(local_280,2,0x28);
    local_254 = 0;
    FUN_140d12160(local_278);
    return local_254;
  }
  puVar5 = local_88;
  cVar1 = FUN_140da9e10(param_1,local_26f,0,local_288,puVar5);
  uVar9 = (undefined4)((ulonglong)puVar5 >> 0x20);
  if (cVar1 == '\0') {
    FUN_140db57b0(local_280,2,local_288[0]);
    local_250 = 0;
    FUN_140d12160(local_278);
    return local_250;
  }
  if ((*(byte *)((longlong)local_280 + 0xa4) >> 2 & 1) == 0) {
    *(undefined4 *)(local_280[6] + 0x100) = 1;
  }
  else if (local_270 == '\0') {
    *(undefined4 *)(local_280[6] + 0x100) = 5;
  }
  else {
    cVar1 = FUN_140d11eb0(local_278);
    if (cVar1 == '\0') {
      *(undefined4 *)(local_280[6] + 0x100) = 6;
    }
    else {
      lVar4 = FUN_140d11ad0(local_278);
      if (*(int *)(lVar4 + 0x174) == 0) {
        *(undefined4 *)(local_280[6] + 0x100) = 7;
      }
      else if ((*(byte *)((longlong)param_1 + 0x621) >> 4 & 1) == 0) {
        *(undefined4 *)(local_280[6] + 0x100) = 4;
      }
      else if ((*(byte *)((longlong)param_1 + 0x623) & 1) == 0) {
        local_208 = local_120;
        lVar4 = FUN_140d11ad0(local_278);
        puVar5 = (undefined *)FUN_140d13c30(local_208,lVar4 + 0x178);
        puVar7 = local_1c8;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = (undefined *)FUN_140d7f190(local_110,local_280[6] + 0x1e8);
        puVar7 = local_1b8;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar1 = FUN_140d88190(local_1b8,local_1c8);
        if (cVar1 == '\0') {
          lVar4 = FUN_140d11ad0(param_1 + 0xbc);
          local_24c = (uint)(*(byte *)(lVar4 + 0x1a8) >> 6 & 1);
          lVar4 = FUN_140d11ad0(local_278);
          if (local_24c == (*(byte *)(lVar4 + 0x1a8) >> 6 & 1)) {
            local_200 = local_100;
            lVar4 = FUN_140d11ad0(local_278);
            puVar5 = (undefined *)FUN_140d13c30(local_200,lVar4 + 0x188);
            puVar7 = local_1a8;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            lVar4 = FUN_140d11ad0(param_1 + 0xbc);
            puVar5 = (undefined *)FUN_140d7f190(local_f0,lVar4 + 0x188);
            puVar7 = local_198;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            cVar1 = FUN_140d88190(local_198,local_1a8);
            if (cVar1 == '\0') {
              if ((*(int *)(local_280[6] + 0xfc) < -0x3c) || (0x3c < *(int *)(local_280[6] + 0xfc)))
              {
                *(undefined4 *)(local_280[6] + 0x100) = 0xc;
              }
              else {
                uVar6 = FUN_140d11ad0(local_278);
                cVar1 = FUN_140e22920(uVar6,param_1[1]);
                if (cVar1 == '\0') {
                  *(undefined4 *)(local_280[6] + 0x100) = 0xd;
                }
                else if (local_26f[0] == '\0') {
                  *(undefined4 *)(local_280[6] + 0x100) = 8;
                }
                else {
                  lVar4 = FUN_140d11ad0(local_278);
                  if (param_1[0xc0] != *(longlong **)(lVar4 + 200)) {
                    FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x1d6);
                  }
                  *(undefined4 *)(local_280[6] + 0x100) = 2;
                  *(byte *)(local_280[6] + 0xdd) = *(byte *)(local_280[6] + 0xdd) | 8;
                }
              }
              goto LAB_140e23202;
            }
          }
          *(undefined4 *)(local_280[6] + 0x100) = 0xe;
        }
        else {
          *(undefined4 *)(local_280[6] + 0x100) = 9;
        }
      }
      else {
        *(undefined4 *)(local_280[6] + 0x100) = 10;
      }
    }
  }
LAB_140e23202:
  local_1f8 = local_e0;
  puVar5 = (undefined *)FUN_140d13c30(local_1f8,local_280[6] + 0x1e8);
  puVar7 = local_188;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  lVar4 = FUN_140d11ad0(param_1 + 0xbc);
  cVar1 = FUN_140d12540(lVar4 + 0x178,local_188);
  if (cVar1 == '\0') {
    FUN_140db57b0(local_280,2,0x50);
    local_248 = 0;
    FUN_140d12160(local_278);
  }
  else {
    if (((*(byte *)(local_280[6] + 0xdd) >> 3 & 1) != 0) &&
       (lVar4 = FUN_140d11ad0(param_1 + 0xbc), (*(byte *)(lVar4 + 0x1a8) >> 6 & 1) != 0)) {
      local_1f0 = local_d0;
      lVar4 = FUN_140d11ad0(local_278);
      puVar5 = (undefined *)FUN_140d13c30(local_1f0,lVar4 + 0x198);
      puVar7 = local_178;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar4 = FUN_140d11ad0(param_1 + 0xbc);
      cVar1 = FUN_140d12540(lVar4 + 0x198,local_178);
      if (cVar1 == '\0') {
        FUN_140db57b0(local_280,2,0x50);
        local_244 = 0;
        FUN_140d12160(local_278);
        return local_244;
      }
    }
    if (((*(byte *)((longlong)local_280 + 0xa4) >> 2 & 1) != 0) && (local_280[0x13] != 0)) {
      local_1e8 = local_c0;
      puVar5 = (undefined *)FUN_140d13c30(local_1e8,param_1[1] + 0x16);
      puVar7 = local_168;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar4 = FUN_140d11ad0(param_1 + 0xbc);
      cVar1 = FUN_140d12540(lVar4 + 0x1b0,local_168);
      if (cVar1 == '\0') {
        FUN_140db57b0(local_280,2,0x50);
        local_240 = 0;
        FUN_140d12160(local_278);
        return local_240;
      }
    }
    lVar4 = FUN_140d11ad0(local_280 + 0xd);
    if (*(longlong *)(lVar4 + 0x120) != 0) {
      lVar4 = FUN_140d11ad0(local_280 + 0xd);
      iVar3 = (**(code **)(lVar4 + 0x120))(local_88);
      if (iVar3 == 0) {
        FUN_140d186f0(0x10,0,0x85,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,CONCAT44(uVar9,0x1fb));
        FUN_140db57b0(local_280,2,0x50);
        local_23c = 0;
        FUN_140d12160(local_278);
        return local_23c;
      }
    }
    uVar2 = FUN_140d77f20(local_280);
    uVar6 = FUN_140d8bd00(uVar2,param_1[0xc0]);
    local_1d8 = FUN_140d1c8f0(uVar6);
    if ((*(byte *)(local_280[6] + 0xdc) >> 6 & 1) == 0) {
      local_220 = (undefined *)FUN_140d11e40(local_a0,&DAT_1410c9360,local_1d8);
    }
    else {
      lVar4 = FUN_140d11ad0(param_1 + 0xbc);
      local_1e0 = (ulonglong)*(byte *)(lVar4 + 10);
      lVar4 = FUN_140d11ad0(param_1 + 0xbc);
      local_220 = (undefined *)FUN_140d11e40(local_b0,lVar4 + 0xb,local_1e0);
    }
    puVar5 = local_220;
    puVar7 = local_158;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = FUN_140e19bc0(param_1,local_158);
    if ((cVar1 == '\0') || (cVar1 = FUN_140d95a40(param_1,local_148), cVar1 == '\0')) {
      local_238 = 0;
      FUN_140d12160(local_278);
      local_248 = local_238;
    }
    else {
      if ((*(byte *)(local_280[6] + 0xdd) >> 3 & 1) == 0) {
        if ((*(byte *)((longlong)param_1 + 0x621) >> 4 & 1) != 0) {
          *(byte *)(local_280[6] + 0xdc) = *(byte *)(local_280[6] + 0xdc) | 1;
        }
      }
      else {
        cVar1 = FUN_140e1a740(param_1);
        if (cVar1 == '\0') {
          local_234 = 0;
          FUN_140d12160(local_278);
          return local_234;
        }
      }
      if (local_26f[0] == '\0') {
        (**(code **)(*local_280 + 0x20))(local_280);
        cVar1 = FUN_140e193b0(param_1 + 0x33);
        if (cVar1 == '\0') {
          local_230 = 0;
          FUN_140d12160(local_278);
          local_248 = local_230;
        }
        else {
          *(undefined4 *)(param_1 + 3) = 2;
          local_22c = 1;
          FUN_140d12160(local_278);
          local_248 = local_22c;
        }
      }
      else {
        cVar1 = FUN_140e21610(param_1,local_88);
        if (cVar1 == '\0') {
          local_228 = 0;
          FUN_140d12160(local_278);
          local_248 = local_228;
        }
        else {
          (**(code **)(*local_280 + 0x20))(local_280);
          FUN_140d12380(param_1 + 0x49);
          *(undefined4 *)(param_1 + 3) = 4;
          local_224 = 1;
          FUN_140d12160(local_278);
          local_248 = local_224;
        }
      }
    }
  }
  return local_248;
}


/* address=140e23820 name=FUN_140e23820 */

undefined4 FUN_140e23820(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined *puVar8;
  ushort local_1d0 [4];
  undefined local_1c8 [16];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong local_1a0;
  longlong local_198;
  undefined *local_190;
  undefined *local_188;
  longlong local_180;
  longlong **local_178;
  undefined *local_170;
  longlong local_168;
  undefined local_160 [48];
  undefined local_130 [48];
  undefined local_100 [56];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [56];
  
  plVar1 = *param_1;
  if ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0) {
    return 0x11;
  }
  FUN_140d138c0(local_130);
  uVar5 = FUN_140d11b30(local_130);
  local_1a0 = *plVar1;
  cVar2 = (**(code **)(local_1a0 + 0x58))(plVar1,uVar5,local_100,2);
  if ((((cVar2 != '\0') && (iVar4 = FUN_140d744b0(local_100,0x303), iVar4 != 0)) &&
      (iVar4 = FUN_140d74290(local_100,&DAT_141084500,0x20), iVar4 != 0)) &&
     ((iVar4 = FUN_140d74140(local_100,local_48), iVar4 != 0 &&
      (iVar4 = FUN_140d74290(local_48,(longlong)param_1 + 0x62b,
                             *(undefined *)((longlong)param_1 + 0x64b)), iVar4 != 0)))) {
    uVar3 = FUN_140d8a950(param_1[0xc0]);
    iVar4 = FUN_140d744b0(local_100,uVar3);
    if ((iVar4 != 0) &&
       ((iVar4 = FUN_140d74480(local_100,0), iVar4 != 0 &&
        (cVar2 = FUN_140daba00(param_1,local_1d0), cVar2 != '\0')))) {
      iVar4 = FUN_140d74170(local_100,local_160);
      if (iVar4 != 0) {
        iVar4 = FUN_140d744b0(local_160,0x2b);
        if ((iVar4 != 0) && (iVar4 = FUN_140d744b0(local_160,2), iVar4 != 0)) {
          iVar4 = FUN_140d744b0(local_160,*(undefined2 *)(plVar1 + 2));
          if (iVar4 != 0) {
            iVar4 = FUN_140d744b0(local_160,0x33);
            if ((iVar4 != 0) && (iVar4 = FUN_140d744b0(local_160,2), iVar4 != 0)) {
              iVar4 = FUN_140d744b0(local_160,local_1d0[0]);
              if (iVar4 != 0) {
                if ((*(byte *)(param_1 + 0xc4) & 1) != 0) {
                  iVar4 = FUN_140d744b0(local_160,0xfe0d);
                  if (((iVar4 == 0) || (iVar4 = FUN_140d744b0(local_160,8), iVar4 == 0)) ||
                     (iVar4 = FUN_140d742f0(local_160,8), iVar4 == 0)) {
                    local_1b4 = 0;
                    FUN_140d138f0(local_130);
                    return local_1b4;
                  }
                }
                FUN_140d122a0(local_1c8);
                uVar5 = FUN_140d11b30(local_130);
                local_198 = *plVar1;
                cVar2 = (**(code **)(local_198 + 0x60))(plVar1,uVar5,local_1c8);
                if (cVar2 == '\0') {
                  local_1b0 = 0;
                  FUN_140d12320(local_1c8);
                  FUN_140d138f0(local_130);
                  return local_1b0;
                }
                if ((*(byte *)(param_1 + 0xc4) & 1) != 0) {
                  local_180 = FUN_140d11de0(local_1c8);
                  local_180 = local_180 + -8;
                  local_190 = local_98;
                  local_188 = local_88;
                  puVar6 = (undefined *)FUN_140d13c30(local_190,local_1c8);
                  puVar8 = local_c8;
                  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *puVar8 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  local_178 = param_1 + 0x33;
                  puVar6 = (undefined *)FUN_140d13910(local_188,plVar1[6] + 0x30);
                  puVar8 = local_b8;
                  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *puVar8 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  uVar5 = FUN_140d7f190(local_78,local_1c8);
                  puVar6 = (undefined *)FUN_140d88280(uVar5,local_68,8);
                  puVar8 = local_a8;
                  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *puVar8 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  cVar2 = FUN_140e1ba70(param_1,local_a8,local_b8,local_178,1,local_c8,local_180);
                  if (cVar2 == '\0') {
                    local_1ac = 0;
                    FUN_140d12320(local_1c8);
                    FUN_140d138f0(local_130);
                    return local_1ac;
                  }
                }
                local_170 = local_58;
                uVar5 = FUN_140d11b30(local_1c8);
                uVar5 = _Ptr_base<>(local_170,uVar5);
                local_168 = *plVar1;
                cVar2 = (**(code **)(local_168 + 0x68))(plVar1,uVar5);
                if ((cVar2 != '\0') &&
                   (cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1), cVar2 != '\0')) {
                  *(byte *)(plVar1[6] + 0xdd) = *(byte *)(plVar1[6] + 0xdd) | 0x40;
                  *(undefined4 *)(param_1 + 3) = 3;
                  local_1a4 = 4;
                  FUN_140d12320(local_1c8);
                  FUN_140d138f0(local_130);
                  return local_1a4;
                }
                local_1a8 = 0;
                FUN_140d12320(local_1c8);
                FUN_140d138f0(local_130);
                return local_1a8;
              }
            }
          }
        }
      }
    }
  }
  local_1b8 = 0;
  FUN_140d138f0(local_130);
  return local_1b8;
}


/* address=140e23db0 name=FUN_140e23db0 */

undefined8 FUN_140e23db0(longlong **param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar8;
  undefined local_188;
  undefined local_187 [7];
  longlong *local_180;
  char local_178;
  char local_177;
  undefined local_176 [2];
  ushort local_174 [2];
  ushort local_170 [2];
  uint local_16c;
  uint local_168;
  undefined local_160 [16];
  undefined local_150 [8];
  undefined local_148 [8];
  undefined local_140 [40];
  undefined local_118 [16];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  undefined local_a8 [16];
  undefined local_98 [16];
  undefined local_88 [120];
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  local_180 = *param_1;
  cVar1 = (**(code **)(*local_180 + 0x18))(local_180,local_148);
  if (cVar1 == '\0') {
    return 3;
  }
  cVar1 = FUN_140d941f0(local_180,local_148,1);
  if (cVar1 == '\0') {
    return 0;
  }
  puVar4 = (undefined *)FUN_140d837f0(local_140,local_b8);
  puVar7 = local_118;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  cVar1 = FUN_140daaf00(local_180,local_88,local_118);
  if (cVar1 == '\0') {
    FUN_140d186f0(0x10,0,0x83,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                  ,CONCAT44(uVar8,0x26e));
    FUN_140db57b0(local_180,2,0x32);
    return 0;
  }
  if (*(int *)(local_180[6] + 0xd8) != 1) {
LAB_140e241bd:
    if ((*(byte *)(local_180[6] + 0xdc) >> 6 & 1) != 0) {
      cVar1 = FUN_140dab270(local_88,local_d8,0x29);
      if (cVar1 == '\0') {
        FUN_140d186f0(0x10,0,0x12f,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,CONCAT44(uVar8,0x2b4));
        FUN_140db57b0(local_180,2,0x2f);
        return 0;
      }
      local_187[0] = 0x32;
      puVar4 = local_187;
      cVar1 = FUN_140daa1f0(param_1,local_98,local_c8,local_150,puVar4,local_88,local_d8);
      uVar8 = (undefined4)((ulonglong)puVar4 >> 0x20);
      if (cVar1 == '\0') {
        FUN_140db57b0(local_180,2,local_187[0]);
        return 0;
      }
      uVar5 = FUN_140d11ad0(param_1 + 0xbc);
      cVar1 = FUN_140e1b890(param_1,uVar5,local_148,local_c8);
      if (cVar1 == '\0') {
        FUN_140db57b0(local_180,2,0x33);
        return 0;
      }
    }
    cVar1 = FUN_140e21610(param_1,local_88);
    if (cVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      cVar1 = FUN_140d95a40(param_1,local_148);
      if (cVar1 == '\0') {
        uVar5 = 0;
      }
      else {
        cVar1 = (**(code **)(*local_180 + 0x28))(local_180);
        if (cVar1 == '\0') {
          (**(code **)(*local_180 + 0x20))(local_180);
          FUN_140d12380(param_1 + 0x49);
          *(undefined4 *)(param_1 + 3) = 4;
          uVar5 = 1;
        }
        else {
          FUN_140db57b0(local_180,2,10);
          FUN_140d186f0(0x10,0,0xff,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                        ,CONCAT44(uVar8,0x2d7));
          uVar5 = 0;
        }
      }
    }
    return uVar5;
  }
  cVar1 = FUN_140dab270(local_88,local_160,0xfe0d);
  if (cVar1 == '\0') {
    FUN_140d186f0(0x10,0,0xa4,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                  ,CONCAT44(uVar8,0x279));
    FUN_140db57b0(local_180,2,0x6d);
    return 0;
  }
  iVar3 = FUN_140d71a50(local_160,&local_178);
  if ((((iVar3 == 0) || (local_178 != '\0')) ||
      (iVar3 = FUN_140d71aa0(local_160,local_174), iVar3 == 0)) ||
     (((iVar3 = FUN_140d71aa0(local_160,local_170), iVar3 == 0 ||
       (iVar3 = FUN_140d71a50(local_160,&local_177), iVar3 == 0)) ||
      ((iVar3 = FUN_140d71e00(local_160,local_108), iVar3 == 0 ||
       ((iVar3 = FUN_140d71e00(local_160,local_f8), iVar3 == 0 ||
        (lVar6 = FUN_140d71850(local_160), lVar6 != 0)))))))) {
    FUN_140d186f0(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                  ,CONCAT44(uVar8,0x288));
    FUN_140db57b0(local_180,2,0x32);
    return 0;
  }
  local_16c = (uint)local_174[0];
  uVar5 = FUN_140d11b30(param_1 + 0x5a);
  uVar5 = FUN_140dbca40(uVar5);
  uVar2 = FUN_140dbb8f0(uVar5);
  if (local_16c == uVar2) {
    local_168 = (uint)local_170[0];
    uVar5 = FUN_140d11b30(param_1 + 0x5a);
    uVar5 = FUN_140dbca20(uVar5);
    uVar2 = FUN_140dbb960(uVar5);
    if (((local_168 == uVar2) && (local_177 == *(char *)((longlong)param_1 + 0x62a))) &&
       (lVar6 = FUN_140d71850(local_108), lVar6 == 0)) {
      local_188 = 0x32;
      puVar4 = (undefined *)FUN_140d837f0(local_f8,local_a8);
      puVar7 = local_e8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = local_88;
      cVar1 = FUN_140d85940(param_1,&local_188,local_176,param_1 + 0x49,puVar4,local_e8);
      uVar8 = (undefined4)((ulonglong)puVar4 >> 0x20);
      if (cVar1 == '\0') {
        FUN_140d186f0(0x10,0,0x8a,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,CONCAT44(uVar8,0x29d));
        FUN_140db57b0(local_180,2,local_188);
        return 0;
      }
      cVar1 = FUN_140d93e80(param_1,local_148,local_88);
      if (cVar1 == '\0') {
        FUN_140d186f0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,CONCAT44(uVar8,0x2a4));
        return 0;
      }
      goto LAB_140e241bd;
    }
  }
  FUN_140d186f0(0x10,0,0x89,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                ,CONCAT44(uVar8,0x291));
  FUN_140db57b0(local_180,2,0x2f);
  return 0;
}


/* address=140e243f0 name=FUN_140e243f0 */

undefined4 FUN_140e243f0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong in_stack_fffffffffffffc68;
  undefined4 uVar9;
  undefined local_368 [16];
  longlong local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined local_318 [16];
  undefined local_308 [48];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined *local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  longlong **local_2a0;
  undefined8 local_298;
  undefined *local_290;
  longlong local_288;
  undefined *local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined local_250 [48];
  undefined local_220 [24];
  undefined local_208 [16];
  undefined local_1f8 [16];
  undefined local_1e8 [16];
  undefined local_1d8 [16];
  undefined local_1c8 [16];
  undefined local_1b8 [16];
  undefined local_1a8 [48];
  undefined local_178 [48];
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [16];
  undefined local_118 [16];
  undefined local_108 [16];
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [48];
  undefined local_a8 [48];
  undefined local_78 [48];
  undefined local_48 [56];
  
  plVar1 = *param_1;
  FUN_140d13910(local_318,plVar1[6] + 0x10);
  local_358 = FUN_140d11ad0(param_1 + 0xc3);
  if ((local_358 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) == 0)) {
    local_268 = FUN_140d11de0(local_358 + 0x10);
    lVar5 = FUN_140d11de0(local_318);
    if (local_268 == lVar5) {
      local_260 = FUN_140d11de0(local_318);
      local_258 = FUN_140d11ad0(local_358 + 0x10);
      uVar6 = FUN_140d11ad0(local_318);
      FUN_140e21270(uVar6,local_258,local_260);
      goto LAB_140e245ba;
    }
  }
  local_2d0 = FUN_140d11de0(local_318);
  uVar6 = FUN_140d11ad0(local_318);
  FUN_140d459b0(uVar6,local_2d0);
  if ((local_358 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) {
    local_2c8 = local_e8;
    puVar7 = (undefined *)FUN_140d13c30(local_2c8,local_318);
    puVar8 = local_1b8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar2 = FUN_140d12540(local_358 + 0x10,local_1b8);
    if (cVar2 == '\0') {
      return 0;
    }
  }
LAB_140e245ba:
  FUN_140d122a0(local_368);
  FUN_140d138c0(local_308);
  uVar6 = FUN_140d11b30(local_308);
  local_2c0 = *plVar1;
  cVar2 = (**(code **)(local_2c0 + 0x58))(plVar1,uVar6,local_250,2);
  if ((((cVar2 != '\0') && (iVar4 = FUN_140d744b0(local_250,0x303), iVar4 != 0)) &&
      (iVar4 = FUN_140d74290(local_250,plVar1[6] + 0x10,0x20), iVar4 != 0)) &&
     ((iVar4 = FUN_140d74140(local_250,local_d8), iVar4 != 0 &&
      (iVar4 = FUN_140d74290(local_d8,(longlong)param_1 + 0x62b,
                             *(undefined *)((longlong)param_1 + 0x64b)), iVar4 != 0)))) {
    uVar3 = FUN_140d8a950(param_1[0xc0]);
    iVar4 = FUN_140d744b0(local_250,uVar3);
    if ((((iVar4 != 0) &&
         ((iVar4 = FUN_140d74480(local_250,0), iVar4 != 0 &&
          (iVar4 = FUN_140d74170(local_250,local_178), iVar4 != 0)))) &&
        (cVar2 = FUN_140daa490(param_1,local_178), cVar2 != '\0')) &&
       ((cVar2 = FUN_140daa050(param_1,local_178), cVar2 != '\0' &&
        (iVar4 = FUN_140e21b90(param_1,local_178), iVar4 != 0)))) {
      uVar6 = FUN_140d11b30(local_308);
      local_2b8 = *plVar1;
      cVar2 = (**(code **)(local_2b8 + 0x60))(plVar1,uVar6,local_368);
      if (cVar2 != '\0') {
        if ((*(int *)(plVar1[6] + 0xd8) == 1) && ((*(byte *)(param_1 + 0xc4) & 1) == 0)) {
          FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x306);
        }
        if ((*(byte *)(param_1 + 0xc4) & 1) != 0) {
          local_2d8 = FUN_140e1ba20(plVar1);
          FUN_140d88280(local_318,local_220,8);
          local_2b0 = local_148;
          local_2a8 = local_138;
          puVar7 = (undefined *)FUN_140d13c30(local_2b0,local_368);
          puVar8 = local_208;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          local_2a0 = param_1 + 0x33;
          puVar7 = (undefined *)FUN_140d13910(local_2a8,plVar1[6] + 0x30);
          puVar8 = local_1f8;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar7 = local_220;
          puVar8 = local_1e8;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          cVar2 = FUN_140e1ba70(param_1,local_1e8,local_1f8,local_2a0,
                                in_stack_fffffffffffffc68 & 0xffffffffffffff00,local_208,local_2d8);
          if (cVar2 == '\0') {
            local_34c = 0;
            FUN_140d138f0(local_308);
            FUN_140d12320(local_368);
            return local_34c;
          }
          uVar6 = FUN_140d7f190(local_128,local_368);
          FUN_140d12660(uVar6,local_1d8,local_2d8,8);
          local_298 = FUN_140d11ad0(local_220);
          uVar6 = FUN_140d11ad0(local_1d8);
          FUN_140e21270(uVar6,local_298,8);
        }
        local_290 = local_118;
        uVar6 = FUN_140d11b30(local_368);
        uVar6 = _Ptr_base<>(local_290,uVar6);
        local_288 = *plVar1;
        cVar2 = (**(code **)(local_288 + 0x68))(plVar1,uVar6);
        if (cVar2 == '\0') {
          local_348 = 0;
          FUN_140d138f0(local_308);
          FUN_140d12320(local_368);
          return local_348;
        }
        FUN_140d12380(param_1 + 0x4d);
        if (((*(byte *)(plVar1[6] + 0xdd) >> 6 & 1) == 0) &&
           (cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1), cVar2 == '\0')) {
          local_344 = 0;
          FUN_140d138f0(local_308);
          FUN_140d12320(local_368);
          return local_344;
        }
        cVar2 = FUN_140e1a8b0(param_1);
        if (cVar2 != '\0') {
          local_280 = local_108;
          uVar6 = FUN_140da92d0(param_1,local_f8);
          puVar7 = (undefined *)FUN_140d13c30(local_280,uVar6);
          puVar8 = local_1c8;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          uVar6 = FUN_140d11ad0(param_1 + 0xbc);
          puVar7 = local_1c8;
          cVar2 = FUN_140e19fc0(plVar1,2,1,uVar6,puVar7);
          uVar9 = (undefined4)((ulonglong)puVar7 >> 0x20);
          if (cVar2 != '\0') {
            uVar6 = FUN_140d11b30(local_308);
            local_278 = *plVar1;
            cVar2 = (**(code **)(local_278 + 0x58))(plVar1,uVar6,local_250,8);
            if ((cVar2 != '\0') && (cVar2 = FUN_140dac4d0(param_1,local_250), cVar2 != '\0')) {
              uVar6 = FUN_140d11b30(local_308);
              cVar2 = FUN_140d95980(plVar1,uVar6);
              if (cVar2 != '\0') {
                if ((((*(byte *)(plVar1[6] + 0xdc) >> 6 & 1) == 0) &&
                    (*(byte *)(param_1 + 0xc4) =
                          *(byte *)(param_1 + 0xc4) & 0xdf |
                          ((*(byte *)((longlong)param_1[1] + 0xec) & 1) != 0) << 5,
                    (*(byte *)((longlong)param_1[1] + 0xec) & 4) != 0)) &&
                   ((*(byte *)((longlong)param_1 + 0x623) & 1) != 0)) {
                  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xdf;
                }
                if ((*(byte *)(param_1 + 0xc4) >> 5 & 1) != 0) {
                  uVar6 = FUN_140d11b30(local_308);
                  local_270 = *plVar1;
                  cVar2 = (**(code **)(local_270 + 0x58))(plVar1,uVar6,local_250,0xd);
                  if ((((cVar2 == '\0') || (iVar4 = FUN_140d74480(local_250,0), iVar4 == 0)) ||
                      ((iVar4 = FUN_140d74170(local_250,local_1a8), iVar4 == 0 ||
                       ((iVar4 = FUN_140d744b0(local_1a8,0xd), iVar4 == 0 ||
                        (iVar4 = FUN_140d74170(local_1a8,local_a8), iVar4 == 0)))))) ||
                     ((iVar4 = FUN_140d74170(local_a8,local_78), iVar4 == 0 ||
                      (cVar2 = FUN_140dab750(param_1,local_78), cVar2 == '\0')))) {
                    local_320 = 0;
                    FUN_140d138f0(local_308);
                    FUN_140d12320(local_368);
                    return local_320;
                  }
                  cVar2 = FUN_140d798f0(param_1[1]);
                  if ((cVar2 != '\0') &&
                     ((((iVar4 = FUN_140d744b0(local_1a8,0x2f), iVar4 == 0 ||
                        (iVar4 = FUN_140d74170(local_1a8,local_48), iVar4 == 0)) ||
                       (cVar2 = FUN_140d79980(param_1,local_48), cVar2 == '\0')) ||
                      (iVar4 = FUN_140d73c90(local_1a8), iVar4 == 0)))) {
                    local_338 = 0;
                    FUN_140d138f0(local_308);
                    FUN_140d12320(local_368);
                    return local_338;
                  }
                  uVar6 = FUN_140d11b30(local_308);
                  cVar2 = FUN_140d95980(plVar1,uVar6);
                  if (cVar2 == '\0') {
                    local_334 = 0;
                    FUN_140d138f0(local_308);
                    FUN_140d12320(local_368);
                    return local_334;
                  }
                }
                if ((*(byte *)(plVar1[6] + 0xdc) >> 6 & 1) != 0) {
                  *(undefined4 *)(param_1 + 3) = 6;
                  local_324 = 1;
                  FUN_140d138f0(local_308);
                  FUN_140d12320(local_368);
                  return local_324;
                }
                cVar2 = FUN_140d78c90(param_1);
                if (cVar2 == '\0') {
                  FUN_140d186f0(0x10,0,0xae,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                                ,CONCAT44(uVar9,0x360));
                  local_330 = 0;
                  FUN_140d138f0(local_308);
                  FUN_140d12320(local_368);
                  return local_330;
                }
                cVar2 = FUN_140da3e20(param_1);
                if (cVar2 == '\0') {
                  local_32c = 0;
                  FUN_140d138f0(local_308);
                  FUN_140d12320(local_368);
                  return local_32c;
                }
                *(undefined4 *)(param_1 + 3) = 5;
                local_328 = 1;
                FUN_140d138f0(local_308);
                FUN_140d12320(local_368);
                return local_328;
              }
            }
            local_33c = 0;
            FUN_140d138f0(local_308);
            FUN_140d12320(local_368);
            return local_33c;
          }
        }
        local_340 = 0;
        FUN_140d138f0(local_308);
        FUN_140d12320(local_368);
        return local_340;
      }
    }
  }
  local_350 = 0;
  FUN_140d138f0(local_308);
  FUN_140d12320(local_368);
  return local_350;
}


/* address=140e25070 name=FUN_140e25070 */

undefined8 FUN_140e25070(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_140da4c30(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 6;
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x18) = 5;
    uVar2 = 9;
  }
  else if (iVar1 == 2) {
    uVar2 = 0;
  }
  else {
    FID_conflict__assert(L"0",(wchar_t *)"D",0x37e);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140e25100 name=FUN_140e25100 */

undefined4 FUN_140e25100(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  uVar1 = *param_1;
  if ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) == 0) {
    *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) | 0x80;
    cVar2 = FUN_140da4f80(param_1);
    if (cVar2 != '\0') {
      uVar4 = FUN_140e19690(param_1 + 0x33);
      puVar5 = (undefined *)FUN_140d11e40(local_48,&DAT_1410c9360,uVar4);
      puVar7 = local_68;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar2 = FUN_140e19dd0(param_1,local_68);
      if ((cVar2 != '\0') && (cVar2 = FUN_140e1acd0(param_1), cVar2 != '\0')) {
        uVar4 = FUN_140da9350(param_1,local_28);
        puVar5 = (undefined *)FUN_140d13c30(local_38,uVar4);
        puVar7 = local_58;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar4 = FUN_140d11ad0(param_1 + 0xbc);
        cVar2 = FUN_140e19fc0(uVar1,3,1,uVar4,local_58);
        if (cVar2 != '\0') {
          *(undefined4 *)(param_1 + 3) = 7;
          if ((*(byte *)((longlong)param_1 + 0x622) >> 3 & 1) != 0) {
            return 7;
          }
          return 1;
        }
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0x11;
  }
  return uVar3;
}


/* address=140e252c0 name=FUN_140e252c0 */

undefined8 FUN_140e252c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined local_f8;
  undefined local_f7;
  undefined local_f6;
  undefined local_f5;
  undefined local_f4 [4];
  longlong local_f0;
  undefined *local_e8;
  longlong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined local_c8 [16];
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
  
  local_f0 = *param_1;
  if ((*(byte *)(*(longlong *)(local_f0 + 0x30) + 0xdd) >> 3 & 1) == 0) {
LAB_140e255a3:
    *(undefined4 *)(param_1 + 3) = 8;
    uVar4 = 4;
  }
  else {
    if (*(longlong *)(local_f0 + 0x98) == 0) {
      local_e8 = local_98;
      puVar3 = (undefined *)FUN_140d78340(local_e8,&DAT_1410ca9a8);
      puVar7 = local_c8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_140e196f0(param_1 + 0x33,local_c8);
      if (cVar1 == '\0') {
        FUN_140d186f0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,0x3a4);
        return 0;
      }
    }
    uVar4 = FUN_140da54a0(param_1,local_88);
    uVar4 = FUN_140d11ad0(uVar4);
    cVar1 = FUN_140e1b450(param_1,uVar4,&local_e0,0);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar4 = FUN_140da54a0(param_1,local_78);
    lVar6 = FUN_140d11de0(uVar4);
    if (local_e0 != lVar6) {
      FUN_140d186f0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                    ,0x3af);
      return 0;
    }
    iVar2 = FUN_140d08380(*param_1);
    if (iVar2 != 0) {
      FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x3b7);
    }
    uVar4 = FUN_140da54a0(param_1,local_68);
    uVar5 = FUN_140d11de0(uVar4);
    if (0xff < uVar5) {
      FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x3b8);
    }
    local_f8 = 0x14;
    local_f7 = 0;
    local_f6 = 0;
    uVar4 = FUN_140da54a0(param_1,local_58);
    local_f5 = FUN_140d11de0(uVar4);
    local_d8 = local_48;
    puVar3 = (undefined *)FUN_140d78340(local_d8,&local_f8);
    puVar7 = local_b8;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = FUN_140e196f0(param_1 + 0x33,local_b8);
    if (cVar1 != '\0') {
      local_d0 = local_38;
      uVar4 = FUN_140da54a0(param_1,local_28);
      puVar3 = (undefined *)FUN_140d13c30(local_d0,uVar4);
      puVar7 = local_a8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_140e196f0(param_1 + 0x33,local_a8);
      if (((cVar1 != '\0') && (cVar1 = FUN_140e1afe0(param_1), cVar1 != '\0')) &&
         (cVar1 = FUN_140e21d20(param_1,local_f4), cVar1 != '\0')) goto LAB_140e255a3;
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140e255d0 name=FUN_140e255d0 */

undefined4 FUN_140e255d0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined4 local_90;
  undefined4 local_8c;
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  lVar1 = *param_1;
  if ((*(byte *)(*(longlong *)(lVar1 + 0x30) + 0xdd) >> 3 & 1) != 0) {
    uVar3 = FUN_140d9c020(param_1,local_48);
    puVar4 = (undefined *)FUN_140d13c30(local_58,uVar3);
    puVar6 = local_78;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = FUN_140d11ad0(param_1 + 0xbc);
    cVar2 = FUN_140e19fc0(lVar1,1,0,uVar3,local_78);
    if (cVar2 == '\0') {
      return 0;
    }
    *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) | 0x40;
    *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) | 0x20;
    *(byte *)((longlong)param_1 + 0x621) = *(byte *)((longlong)param_1 + 0x621) | 8;
  }
  if (*(longlong *)(lVar1 + 0x98) == 0) {
    *(undefined4 *)(param_1 + 3) = 9;
    if ((*(byte *)(*(longlong *)(lVar1 + 0x30) + 0xdd) >> 3 & 1) == 0) {
      local_8c = 1;
    }
    else {
      local_8c = 0xe;
    }
  }
  else {
    uVar3 = FUN_140da9290(param_1,local_28);
    puVar4 = (undefined *)FUN_140d13c30(local_38,uVar3);
    puVar6 = local_68;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = FUN_140d11ad0(param_1 + 0xbc);
    cVar2 = FUN_140e19fc0(lVar1,2,0,uVar3,local_68);
    if (cVar2 == '\0') {
      local_8c = 0;
    }
    else {
      *(undefined4 *)(param_1 + 3) = 9;
      if ((*(byte *)(*(longlong *)(lVar1 + 0x30) + 0xdd) >> 3 & 1) == 0) {
        local_90 = 1;
        local_8c = local_90;
      }
      else {
        local_90 = 0xc;
        local_8c = local_90;
      }
    }
  }
  return local_8c;
}


/* address=140e25820 name=FUN_140e25820 */

undefined8 FUN_140e25820(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar7;
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [8];
  undefined local_40 [48];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  plVar1 = *param_1;
  if (plVar1[0x13] == 0) {
    if ((*(byte *)((*param_1)[6] + 0xdd) >> 3 & 1) != 0) {
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_48);
      if (cVar2 == '\0') {
        return 3;
      }
      cVar2 = FUN_140d941f0(plVar1,local_48,5);
      if (cVar2 == '\0') {
        return 0;
      }
      lVar3 = FUN_140d71850(local_40);
      if (lVar3 != 0) {
        FUN_140db57b0(plVar1,2,0x32);
        FUN_140d186f0(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,CONCAT44(uVar7,0x3f8));
        return 0;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    uVar4 = FUN_140da9290(param_1,local_58);
    puVar5 = (undefined *)FUN_140d13c30(local_68,uVar4);
    puVar6 = local_78;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar4 = FUN_140d11ad0(param_1 + 0xbc);
    cVar2 = FUN_140e19fc0(plVar1,2,0,uVar4,local_78);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 3) = 10;
  return 1;
}


/* address=140e259c0 name=FUN_140e259c0 */

undefined8 FUN_140e259c0(longlong **param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_e8 [8];
  longlong *local_e0;
  undefined *local_d8;
  undefined local_d0 [8];
  undefined local_c8 [16];
  undefined local_b8 [3];
  char local_b5;
  undefined local_b0 [24];
  undefined local_98 [16];
  undefined local_88 [16];
  undefined local_78 [16];
  undefined local_68 [8];
  undefined local_60 [32];
  undefined local_40 [16];
  undefined local_30 [32];
  
  local_e0 = *param_1;
  lVar3 = FUN_140d11ad0(param_1 + 0xbc);
  if (((*(byte *)(lVar3 + 0x1a8) >> 6 & 1) != 0) && ((*(byte *)(local_e0[6] + 0xdd) >> 3 & 1) == 0))
  {
    cVar1 = (**(code **)(*local_e0 + 0x18))(local_e0,local_68);
    if (cVar1 == '\0') {
      return 3;
    }
    cVar1 = FUN_140d941f0(local_e0,local_68,8);
    if (cVar1 == '\0') {
      return 0;
    }
    puVar4 = local_60;
    puVar5 = local_c8;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar2 = FUN_140d71e00(local_c8,local_88);
    if ((iVar2 == 0) || (lVar3 = FUN_140d71850(local_c8), lVar3 != 0)) {
      FUN_140d186f0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                    ,0x419);
      FUN_140db57b0(local_e0,2,0x32);
      return 0;
    }
    FUN_140d9c0e0(local_b8,0x4469,1);
    local_e8[0] = 0x32;
    local_d8 = local_b8;
    puVar4 = (undefined *)FUN_140d11db0(local_40,&local_d8,local_d0);
    puVar5 = local_98;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_140d948f0(local_88,local_e8,local_98,0);
    if (cVar1 == '\0') {
      FUN_140db57b0(local_e0,2,local_e8[0]);
      return 0;
    }
    if (local_b5 == '\0') {
      FUN_140d186f0(0x10,0,0xa4,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                    ,0x427);
      FUN_140db57b0(local_e0,2,0x6d);
      return 0;
    }
    puVar4 = (undefined *)FUN_140d837f0(local_b0,local_30);
    puVar5 = local_78;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_140d11ad0(param_1 + 0xbc);
    cVar1 = FUN_140d12540(lVar3 + 0x198,local_78);
    if ((cVar1 == '\0') || (cVar1 = FUN_140d95a40(param_1,local_68), cVar1 == '\0')) {
      FUN_140db57b0(local_e0,2,0x50);
      return 0;
    }
    (**(code **)(*local_e0 + 0x20))(local_e0);
  }
  *(undefined4 *)(param_1 + 3) = 0xb;
  return 1;
}


/* address=140e25ca0 name=FUN_140e25ca0 */

undefined8 FUN_140e25ca0(longlong **param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined local_38 [56];
  
  plVar2 = *param_1;
  if ((*(byte *)(param_1 + 0xc4) >> 5 & 1) == 0) {
    if ((*(byte *)(plVar2[6] + 0xdc) >> 6 & 1) == 0) {
      lVar4 = FUN_140d11ad0(param_1 + 0xbc);
      *(undefined4 *)(lVar4 + 0xb0) = 0;
    }
    *(undefined4 *)(param_1 + 3) = 0xd;
    uVar5 = 1;
  }
  else {
    bVar1 = *(byte *)((longlong)param_1[1] + 0xec);
    cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,local_38);
    if (cVar3 == '\0') {
      uVar5 = 3;
    }
    else {
      cVar3 = FUN_140d941f0(plVar2,local_38,0xb);
      if (((cVar3 == '\0') ||
          (cVar3 = FUN_140da28d0(param_1,local_38,(bVar1 & 2) == 0), cVar3 == '\0')) ||
         (cVar3 = FUN_140d95a40(param_1,local_38), cVar3 == '\0')) {
        uVar5 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x20))(plVar2);
        *(undefined4 *)(param_1 + 3) = 0xc;
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}


/* address=140e25df0 name=FUN_140e25df0 */

undefined8 FUN_140e25df0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined local_38 [56];
  
  plVar1 = *param_1;
  lVar4 = FUN_140d11ad0(param_1 + 0xbc);
  uVar5 = FUN_140d11ad0(lVar4 + 0x88);
  lVar4 = FUN_140d11f00(uVar5);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 3) = 0xd;
    uVar5 = 1;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_38);
    if (cVar2 == '\0') {
      uVar5 = 3;
    }
    else {
      iVar3 = FUN_140d94ba0(param_1);
      if (iVar3 == 1) {
        uVar5 = 0;
      }
      else if (iVar3 == 2) {
        *(undefined4 *)(param_1 + 3) = 0xc;
        uVar5 = 0x10;
      }
      else {
        cVar2 = FUN_140d941f0(plVar1,local_38,0xf);
        if (((cVar2 != '\0') && (cVar2 = FUN_140da3940(param_1,local_38), cVar2 != '\0')) &&
           (cVar2 = FUN_140d95a40(param_1,local_38), cVar2 != '\0')) {
          (**(code **)(*plVar1 + 0x20))(plVar1);
          *(undefined4 *)(param_1 + 3) = 0xd;
          return 1;
        }
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}


/* address=140e25f30 name=FUN_140e25f30 */

undefined8 FUN_140e25f30(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined local_30 [48];
  
  plVar1 = *param_1;
  if ((*(byte *)((longlong)param_1 + 0x623) & 1) == 0) {
    *(undefined4 *)(param_1 + 3) = 0xe;
    uVar3 = 1;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_30);
    if (cVar2 == '\0') {
      uVar3 = 3;
    }
    else {
      cVar2 = FUN_140d941f0(plVar1,local_30,0xcb);
      if (((cVar2 != '\0') && (cVar2 = FUN_140dace90(param_1,local_30), cVar2 != '\0')) &&
         (cVar2 = FUN_140d95a40(param_1,local_30), cVar2 != '\0')) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
        *(undefined4 *)(param_1 + 3) = 0xe;
        return 1;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=140e26010 name=FUN_140e26010 */

undefined8 FUN_140e26010(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined local_78 [16];
  undefined local_68 [16];
  undefined local_58 [16];
  undefined local_48 [56];
  
  plVar1 = *param_1;
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_48);
  if (cVar2 == '\0') {
    return 3;
  }
  cVar2 = FUN_140d941f0(plVar1,local_48,0x14);
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_140da3c30(param_1,local_48,*(byte *)(plVar1[6] + 0xdd) >> 3 & 1), cVar2 != '\0'))
  {
    uVar3 = FUN_140da9310(param_1,local_58);
    puVar4 = (undefined *)FUN_140d13c30(local_68,uVar3);
    puVar6 = local_78;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = FUN_140d11ad0(param_1 + 0xbc);
    cVar2 = FUN_140e19fc0(plVar1,3,0,uVar3,local_78);
    if (cVar2 != '\0') {
      if ((*(byte *)(plVar1[6] + 0xdd) >> 3 & 1) == 0) {
        cVar2 = FUN_140d95a40(param_1,local_48);
        if ((cVar2 == '\0') || (cVar2 = FUN_140e1afe0(param_1), cVar2 == '\0')) {
          return 0;
        }
        *(undefined4 *)(param_1 + 3) = 0xf;
      }
      else {
        *(undefined4 *)(param_1 + 3) = 0x10;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return 1;
    }
  }
  return 0;
}


/* address=140e261c0 name=FUN_140e261c0 */

undefined8 FUN_140e261c0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  char local_18 [24];
  
  cVar1 = FUN_140e21d20(param_1,local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0x10;
    if ((*(longlong *)(*param_1 + 0x98) == 0) || (local_18[0] == '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 4;
    }
  }
  return uVar2;
}


/* address=140e26220 name=FUN_140e26220 */

undefined8 FUN_140e26220(undefined8 param_1)

{
  FUN_140d121a0(param_1,0);
  return param_1;
}


/* address=140e26250 name=FUN_140e26250 */

undefined4 FUN_140e26250(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4)

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


/* address=140e262d0 name=FUN_140e262d0 */

ulonglong FUN_140e262d0(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=140e262f0 name=FUN_140e262f0 */

undefined8 FUN_140e262f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e26340 name=FUN_140e26340 */

void FUN_140e26340(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_140e262f0(local_18,param_1,8);
  FUN_140e262d0(local_18[0]);
  return;
}


/* address=140e26380 name=FUN_140e26380 */

void FUN_140e26380(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  local_res10[0] = FUN_140e262d0(param_2);
  FUN_140e262f0(param_1,local_res10,8);
  return;
}


/* address=140e263c0 name=FUN_140e263c0 */

void FUN_140e263c0(longlong param_1,char *param_2,undefined8 param_3,longlong *param_4,
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
  undefined8 local_168;
  undefined *local_160;
  undefined *local_158;
  char local_148;
  undefined local_147;
  ushort local_144 [2];
  short local_140;
  uint local_13c;
  uint local_138;
  undefined8 local_130;
  uint local_128;
  undefined local_120 [16];
  undefined *local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined *local_e8;
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
  undefined local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_1413fba80 ^ (ulonglong)auStack_188;
  *param_4 = 0;
  if ((*(int *)(*(longlong *)(param_1 + 0x30) + 0xac) != 1) &&
     (cVar1 = FUN_140d11df0(param_6), cVar1 == '\0')) {
    local_110 = local_68;
    puVar4 = (undefined *)FUN_140d13c30(local_110,param_6);
    puVar8 = local_b8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_140d13c30(local_120,local_b8);
    iVar3 = FUN_140d71a50(local_120,&local_148);
    if ((((iVar3 == 0) || (iVar3 = FUN_140d71aa0(local_120,local_144), iVar3 == 0)) ||
        (iVar3 = FUN_140d71d70(local_120,local_28,8), iVar3 == 0)) ||
       ((iVar3 = FUN_140d71e00(local_120,local_e0), iVar3 == 0 ||
        (uVar5 = FUN_140d71850(local_e0), 0x4140 < uVar5)))) {
      lVar7 = FUN_140d11de0(param_6);
      *param_4 = lVar7;
    }
    else {
      uVar6 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
      cVar1 = FUN_140d8fce0(uVar6);
      if (cVar1 == '\0') {
        local_128 = (uint)local_144[0];
        uVar6 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
        uVar2 = FUN_140d8e9d0(uVar6);
        local_147 = local_128 == uVar2;
        local_138 = (uint)(byte)local_147;
      }
      else {
        local_147 = (int)(uint)local_144[0] >> 8 == 0xfe;
        local_13c = (uint)(byte)local_147;
      }
      if ((bool)local_147 == false) {
        lVar7 = FUN_140d11de0(param_6);
        *param_4 = lVar7;
      }
      else {
        uVar6 = FUN_140d12660(param_6,local_58,0,0xd);
        FUN_140d13c30(local_d0,uVar6);
        puVar4 = local_d0;
        puVar8 = local_a8;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_140d0f530(param_1,0,0x100,local_a8);
        local_130 = FUN_140e26340(local_28);
        local_140 = (short)((ulonglong)local_130 >> 0x30);
        if ((local_140 == *(short *)(*(longlong *)(param_1 + 0x38) + 2)) &&
           (cVar1 = FUN_140e26e80(*(longlong *)(param_1 + 0x38) + 8,local_130), cVar1 == '\0')) {
          local_100 = FUN_140d71850(local_e0);
          uVar6 = FUN_140d71830(local_e0);
          puVar4 = (undefined *)FUN_140d11e40(local_48,uVar6,local_100);
          puVar8 = local_98;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar4 = local_d0;
          puVar8 = local_88;
          for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          uVar6 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x108);
          local_158 = local_98;
          local_160 = local_88;
          local_168 = local_130;
          cVar1 = FUN_140d8ec80(uVar6,param_3,local_148,local_144[0]);
          if (cVar1 == '\0') {
            FUN_140d18390();
            local_f8 = FUN_140d11de0(param_6);
            lVar7 = FUN_140d71850(local_120);
            *param_4 = local_f8 - lVar7;
          }
          else {
            local_f0 = FUN_140d11de0(param_6);
            lVar7 = FUN_140d71850(local_120);
            *param_4 = local_f0 - lVar7;
            uVar5 = FUN_140d11de0(param_3);
            if (uVar5 < 0x4001) {
              FUN_140e26f20(*(longlong *)(param_1 + 0x38) + 8,local_130);
              if (local_148 == '\x15') {
                local_e8 = local_38;
                puVar4 = (undefined *)FUN_140d13c30(local_e8,param_3);
                puVar8 = local_78;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar8 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar8 = puVar8 + 1;
                }
                FUN_140e20520(param_1,param_5,local_78);
              }
              else {
                *(undefined *)(*(longlong *)(param_1 + 0x30) + 0xd3) = 0;
                *param_2 = local_148;
              }
            }
            else {
              local_168 = CONCAT44(local_168._4_4_,0xf0);
              FUN_140d186f0(0x10,0,0x88,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                           );
              *param_5 = 0x16;
            }
          }
        }
        else {
          local_108 = FUN_140d11de0(param_6);
          lVar7 = FUN_140d71850(local_120);
          *param_4 = local_108 - lVar7;
        }
      }
    }
  }
  FUN_140e28050(local_20 ^ (ulonglong)auStack_188);
  return;
}


/* address=140e26950 name=FUN_140e26950 */

longlong FUN_140e26950(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140e27000(param_1,param_2);
  lVar2 = FUN_140d8eab0(uVar1);
  return lVar2 + 0xd;
}


/* address=140e26990 name=FUN_140e26990 */

longlong FUN_140e26990(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140e27000(param_1,param_2);
  lVar2 = FUN_140d8ea70(uVar1);
  return lVar2 + 0xd;
}


/* address=140e269d0 name=FUN_140e269d0 */

undefined8
FUN_140e269d0(longlong param_1,undefined *param_2,longlong *param_3,ulonglong param_4,
             undefined param_5,undefined *param_6,undefined8 param_7,int param_8)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort local_84;
  ulonglong *local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined local_50 [16];
  undefined8 local_40;
  undefined local_38 [16];
  undefined local_28 [24];
  
  local_68 = FUN_140e26990(param_1,param_8);
  iVar3 = FUN_140e26250(param_6,param_7,param_2,param_4);
  if ((iVar3 == 0) || ((local_68 <= param_4 && (param_2 + local_68 == param_6)))) {
    local_84 = *(ushort *)(*(longlong *)(param_1 + 0x38) + 4);
    local_70 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
    local_80 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 8);
    if (param_8 == 0) {
      if (*(short *)(*(longlong *)(param_1 + 0x38) + 4) == 0) {
        FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x127);
      }
      local_84 = *(short *)(*(longlong *)(param_1 + 0x38) + 4) - 1;
      local_70 = FUN_140d11ad0(*(longlong *)(param_1 + 0x38) + 0x28);
      local_80 = (ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    if (param_4 < 0xd) {
      FUN_140d186f0(0x10,0,0x79,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                    ,0x12e);
      uVar4 = 0;
    }
    else {
      *param_2 = param_5;
      uVar4 = FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar2 = FUN_140d8e9d0(uVar4);
      param_2[1] = (char)((ushort)uVar2 >> 8);
      param_2[2] = (char)uVar2;
      local_40 = 0xffffffffffff;
      if (*local_80 + 1 < 0x1000000000000) {
        local_60 = (ulonglong)local_84 << 0x30 | *local_80;
        FUN_140e26380(param_2 + 3,local_60);
        cVar1 = FUN_140d8ebb0(local_70,&local_78,param_7,0);
        if (cVar1 == '\0') {
          FUN_140d186f0(0x10,0,200,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                        ,0x144);
          uVar4 = 0;
        }
        else {
          param_2[0xb] = (char)((ulonglong)local_78 >> 8);
          param_2[0xc] = (char)local_78;
          FUN_140d11e40(local_50,param_2,0xd);
          puVar6 = local_50;
          puVar7 = local_38;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          cVar1 = FUN_140d8f200(local_70,param_2 + 0xd,&local_58,param_4 - 0xd,param_5,uVar2,
                                local_60,local_38,param_6,param_7);
          if (cVar1 == '\0') {
            uVar4 = 0;
          }
          else {
            if (local_78 != local_58) {
              FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x151);
            }
            *local_80 = *local_80 + 1;
            *param_3 = local_78 + 0xd;
            puVar6 = local_50;
            puVar7 = local_28;
            for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            FUN_140d0f530(param_1,1,0x100,local_28);
            uVar4 = 1;
          }
        }
      }
      else {
        FUN_140d186f0(0x10,0,0x45,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                      ,0x13b);
        uVar4 = 0;
      }
    }
  }
  else {
    FUN_140d186f0(0x10,0,0xbd,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                  ,0x11e);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=140e26e80 name=FUN_140e26e80 */

ulonglong FUN_140e26e80(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  byte local_28;
  
  if (param_1[1] < param_2) {
    uVar1 = param_1[1] & 0xffffffffffffff00;
  }
  else {
    if ((param_1[1] - param_2 < 0x40) &&
       ((*param_1 & 1L << ((byte)(param_1[1] - param_2) & 0x3f)) == 0)) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    uVar1 = (ulonglong)local_28;
  }
  return uVar1;
}


/* address=140e26f20 name=FUN_140e26f20 */

void FUN_140e26f20(ulonglong *param_1,ulonglong param_2)

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


/* address=140e27000 name=FUN_140e27000 */

void FUN_140e27000(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(short *)(*(longlong *)(param_1 + 0x38) + 4) == 0) {
      FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x107);
    }
    FUN_140d11ad0(*(longlong *)(param_1 + 0x38) + 0x28);
  }
  else {
    FUN_140d11ad0(*(longlong *)(param_1 + 0x30) + 0x110);
  }
  return;
}


/* address=140e270a0 name=FUN_140e270a0 */

void FUN_140e270a0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined auStack_58 [32];
  ulonglong local_38;
  uint local_30;
  ulonglong local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140d08380(param_1);
  if ((iVar1 != 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) != 0 ||
      (*(int *)(*(longlong *)(param_1 + 0x38) + 0x128) != 0)))) {
    FUN_140d0ff60(param_1,&local_28);
    if ((*(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x120) < local_28) ||
       ((*(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x120) == local_28 &&
        (*(uint *)(*(longlong *)(param_1 + 0x38) + 0x128) <= local_20)))) {
      FUN_140e27360(param_2,0,8);
    }
    else {
      FUN_140e27310(&local_38,*(longlong *)(param_1 + 0x38) + 0x120,0x10);
      local_38 = local_38 - local_28;
      if (local_30 < local_20) {
        local_30 = (local_30 + 1000000) - local_20;
        local_38 = local_38 - 1;
      }
      else {
        local_30 = local_30 - local_20;
      }
      if ((local_38 == 0) && (local_30 < 15000)) {
        FUN_140e27360(&local_38,0,0x10);
      }
      if (local_38 < 0x80000000) {
        *param_2 = (undefined4)local_38;
      }
      else {
        FID_conflict__assert(L"0",(wchar_t *)"D",0xee);
        *param_2 = 0x7fffffff;
      }
      param_2[1] = local_30;
    }
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=140e27310 name=FUN_140e27310 */

undefined8 FUN_140e27310(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e27360 name=FUN_140e27360 */

undefined8 FUN_140e27360(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e273a0 name=FUN_140e273a0 */

byte * FUN_140e273a0(byte *param_1)

{
  *param_1 = *param_1 & 0xfe;
  *param_1 = *param_1 & 0xfd;
  *param_1 = *param_1 & 0xfb;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_140d122a0(param_1 + 8);
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_140d139c0(param_1 + 0x28);
  FUN_140d95b00(param_1 + 0x30,8,7,FUN_140d139c0);
  FUN_140d95b00(param_1 + 0x68,0x18,7,&LAB_140e279c0);
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


/* address=140e27500 name=FUN_140e27500 */

void FUN_140e27500(longlong param_1)

{
  FUN_140d95b60(param_1 + 0x68,0x18,7,FUN_140d88410);
  FUN_140d95b60(param_1 + 0x30,8,7,FUN_140db95f0);
  FUN_140d8fda0(param_1 + 0x28);
  return;
}


/* address=140e27570 name=FUN_140e27570 */

ulonglong FUN_140e27570(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *(int *)(*(longlong *)(param_1 + 0x38) + 0x11c) =
       *(int *)(*(longlong *)(param_1 + 0x38) + 0x11c) + 1;
  if (2 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x11c)) {
    uVar1 = FUN_140d09770(param_1);
    if ((uVar1 & 0x1000) == 0) {
      uVar3 = FUN_140d11ad0(param_1 + 0x20);
      uVar1 = FUN_140d14c30(uVar3,0x2f,0,0);
      if ((-1 < (int)uVar1) && ((int)uVar1 < 0x40000001)) {
        uVar2 = FUN_140db7370();
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
    uVar4 = FUN_140d186f0(0x10,0,0xc6,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\d1_lib.cc"
                          ,0xb7);
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}


/* address=140e27660 name=FUN_140e27660 */

void FUN_140e27660(longlong param_1)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) == 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x38) + 0x128) == 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x130) = *(undefined4 *)(param_1 + 0x50);
  }
  FUN_140d0ff60(param_1);
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


/* address=140e277c0 name=FUN_140e277c0 */

void FUN_140e277c0(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x11c) = 0;
  FUN_140e27360(*(longlong *)(param_1 + 0x38) + 0x120,0,0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x130) = *(undefined4 *)(param_1 + 0x50);
  return;
}


/* address=140e27820 name=FUN_140e27820 */

undefined4 FUN_140e27820(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14;
  
  iVar1 = FUN_140e270a0(param_1,&local_18);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if ((local_18 < 1) && (local_14 < 1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140e27970 name=FUN_140e27970 */

void FUN_140e27970(longlong param_1)

{
  *(int *)(*(longlong *)(param_1 + 0x38) + 0x130) =
       *(int *)(*(longlong *)(param_1 + 0x38) + 0x130) << 1;
  if (60000 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x130)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x130) = 60000;
  }
  return;
}


/* address=140e27a00 name=FUN_140e27a00 */

undefined8 FUN_140e27a00(undefined8 param_1,uint param_2)

{
  FUN_140e27500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e89c50(param_1,0x138);
  }
  return param_1;
}


/* address=140e27a40 name=FUN_140e27a40 */

void FUN_140e27a40(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_140d11b30(param_1);
    FUN_140e27b40(uVar1,*param_1);
  }
  return;
}


/* address=140e27a80 name=FUN_140e27a80 */

undefined8 FUN_140e27a80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_140e27af0();
  uVar1 = FUN_140d11ca0(local_18,uVar1);
  FUN_140d11cd0(param_1,uVar1);
  FUN_140e27a40(local_18);
  return param_1;
}


/* address=140e27ac0 name=FUN_140e27ac0 */

void FUN_140e27ac0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140e27a00(param_1,0);
    FUN_140d762b0(param_1);
  }
  return;
}


/* address=140e27af0 name=FUN_140e27af0 */

undefined8 FUN_140e27af0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140d76180(0x138);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140d11a30(0x138,lVar1);
    uVar2 = FUN_140e273a0(uVar2);
  }
  return uVar2;
}


/* address=140e27b40 name=FUN_140e27b40 */

void FUN_140e27b40(undefined8 param_1,undefined8 param_2)

{
  FUN_140e27b60(param_2);
  return;
}


/* address=140e27b60 name=FUN_140e27b60 */

void FUN_140e27b60(undefined8 param_1)

{
  FUN_140e27ac0(param_1);
  return;
}


/* address=140e27b80 name=thunk_FUN_140e27b90 */

undefined (*) [32]
thunk_FUN_140e27b90(undefined (*param_1) [32],undefined (*param_2) [32],byte param_3)

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
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_141408874 & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_141408874 & 4) != 0)) {
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
      if (uVar3 != 0) goto LAB_140e27c31;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined (*) [32])(puVar2 + (uVar5 & 0xffffffffffffffe0)));
    uVar4 = (uint)uVar5 & 0x1c;
    if ((uVar5 & 0x1c) != 0) {
      auVar9 = vmovdqu_avx(*(undefined (*) [32])(&DAT_1410cd9c0 + -(ulonglong)uVar4));
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
LAB_140e27c31:
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


/* address=140e27b90 name=FUN_140e27b90 */

undefined (*) [32] FUN_140e27b90(undefined (*param_1) [32],undefined (*param_2) [32],byte param_3)

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
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_141408874 & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_141408874 & 4) != 0)) {
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
      if (uVar3 != 0) goto LAB_140e27c31;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined (*) [32])(puVar2 + (uVar5 & 0xffffffffffffffe0)));
    uVar4 = (uint)uVar5 & 0x1c;
    if ((uVar5 & 0x1c) != 0) {
      auVar9 = vmovdqu_avx(*(undefined (*) [32])(&DAT_1410cd9c0 + -(ulonglong)uVar4));
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
LAB_140e27c31:
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


/* address=140e27c84 name=thunk_FUN_140e89c50 */

void thunk_FUN_140e89c50(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_141411a30,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_140e7ec5c(DVar3);
    puVar1 = (undefined4 *)FUN_140e7ebec();
    *puVar1 = uVar4;
  }
  return;
}


/* address=140e27cb8 name=FUN_140e27cb8 */

void FUN_140e27cb8(ulonglong param_1,longlong param_2,uint *param_3)

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
  FUN_140e28050(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}


/* address=140e27d50 name=__chkstk */

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


/* address=140e27da0 name=FUN_140e27da0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e27da0(undefined4 param_1)

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
  *(undefined8 *)(puVar3 + -8) = 0x140e27dcb;
  FUN_140e27f28(&DAT_141410ec0);
  _DAT_141410e30 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_141410f58 = puVar3 + 0x30;
  _DAT_141410e20 = 0xc0000409;
  _DAT_141410e24 = 1;
  _DAT_141410e38 = 1;
  DAT_141410e40 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x140e27e37;
  DAT_141410fb8 = _DAT_141410e30;
  __raise_securityfailure(&PTR_DAT_1410cd9f0);
  return;
}


/* address=140e27e40 name=FUN_140e27e40 */

void FUN_140e27e40(void)

{
  FUN_140e27da0(8);
  return;
}


/* address=140e27e54 name=FUN_140e27e54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e27e54(void)

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
  *(undefined8 *)(puVar3 + -8) = 0x140e27e7f;
  FUN_140e27f98(&DAT_141410ec0);
  _DAT_141410e30 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_141410f58 = puVar3 + 0x40;
  _DAT_141410f40 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_141410e20 = 0xc0000409;
  _DAT_141410e24 = 1;
  _DAT_141410e38 = 1;
  DAT_141410e40 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_1413fba80;
  *(undefined8 *)(puVar3 + 0x28) = DAT_1413fbac0;
  *(undefined8 *)(puVar3 + -8) = 0x140e27f21;
  DAT_141410fb8 = _DAT_141410e30;
  __raise_securityfailure(&PTR_DAT_1410cd9f0);
  return;
}


/* address=140e27f28 name=FUN_140e27f28 */

void FUN_140e27f28(PCONTEXT param_1)

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


/* address=140e27f98 name=FUN_140e27f98 */

void FUN_140e27f98(PCONTEXT param_1)

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


/* address=140e2800c name=__raise_securityfailure */

/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000140e28039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}


/* address=140e28050 name=FUN_140e28050 */

void FUN_140e28050(longlong param_1)

{
  if ((param_1 == DAT_1413fba80) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_140e27e54(param_1);
  return;
}


/* address=140e28070 name=atexit */

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}


/* address=140e28088 name=_onexit */

/* Library Function - Single Match
    _onexit
   
   Library: Visual Studio 2019 Release */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  _onexit_t p_Var2;
  
  if (DAT_1414113b0 == -1) {
    iVar1 = FUN_140e7e89c();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1414113b0);
  }
  p_Var2 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var2 = _Func;
  }
  return p_Var2;
}


/* address=140e280c4 name=FUN_140e280c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140e280c4(longlong param_1)

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
           param_1 - 0x140000000U < uVar1)) goto LAB_140e2813a;
      }
      lVar4 = 0;
LAB_140e2813a:
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


/* address=140e2815c name=__scrt_acquire_startup_lock */

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
LAB_140e2818a:
    uVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x30) + 8);
    do {
      lVar4 = 0;
      LOCK();
      bVar6 = DAT_1414113a0 == 0;
      lVar2 = lVar1;
      if (!bVar6) {
        lVar4 = DAT_1414113a0;
        lVar2 = DAT_1414113a0;
      }
      DAT_1414113a0 = lVar2;
      UNLOCK();
      if (bVar6) goto LAB_140e2818a;
    } while (lVar1 != lVar4);
    uVar5 = 1;
  }
  return uVar5;
}


/* address=140e28198 name=__scrt_release_startup_lock */

/* Library Function - Single Match
    __scrt_release_startup_lock
   
   Library: Visual Studio 2019 Release */

void __scrt_release_startup_lock(char param_1)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1414113a0 = 0;
    UNLOCK();
  }
  return;
}


/* address=140e281bc name=FUN_140e281bc */

undefined FUN_140e281bc(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_1414113a8 = 1;
  }
  FUN_140e670d8();
  cVar1 = __vcrt_initialize();
  if (cVar1 != '\0') {
    cVar1 = FUN_140e732ac();
    if (cVar1 != '\0') {
      return 1;
    }
    __vcrt_uninitialize(0);
  }
  return 0;
}


/* address=140e281f8 name=__scrt_uninitialize_crt */

/* Library Function - Single Match
    __scrt_uninitialize_crt
   
   Library: Visual Studio 2019 Release */

undefined __scrt_uninitialize_crt(undefined param_1,char param_2)

{
  if ((DAT_1414113a8 == '\0') || (param_2 == '\0')) {
    __acrt_uninitialize();
    __vcrt_uninitialize(param_1);
  }
  return 1;
}


/* address=140e28224 name=__scrt_initialize_onexit_tables */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __scrt_initialize_onexit_tables
   
   Library: Visual Studio 2019 Release */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_1414113a9 == '\0') {
    if (1 < param_1) {
      FUN_140e67408(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = __scrt_is_ucrt_dll_in_use();
    if ((iVar2 == 0) || (param_1 != 0)) {
      DAT_1414113b0._0_4_ = _DAT_1410a1a00;
      DAT_1414113b0._4_4_ = _UNK_1410a1a04;
      uRam00000001414113b8 = _UNK_1410a1a08;
      uRam00000001414113bc = _UNK_1410a1a0c;
      _DAT_1414113c0 = 0xffffffffffffffff;
      _DAT_1414113c8 = _DAT_1410a1a00;
      uRam00000001414113cc = _UNK_1410a1a04;
      uRam00000001414113d0 = _UNK_1410a1a08;
      uRam00000001414113d4 = _UNK_1410a1a0c;
      _DAT_1414113d8 = 0xffffffffffffffff;
    }
    else {
      iVar2 = _initialize_onexit_table(&DAT_1414113b0);
      if ((iVar2 != 0) || (iVar2 = _initialize_onexit_table(&DAT_1414113c8), iVar2 != 0)) {
        return 0;
      }
    }
    DAT_1414113a9 = '\x01';
  }
  return 1;
}


/* address=140e282b0 name=FUN_140e282b0 */

undefined8
FUN_140e282b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  uint local_28;
  int local_24;
  undefined8 local_18 [3];
  
  local_18[0] = 0;
  local_res8 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    local_res8 = local_18;
  }
  lVar1 = FUN_140e28750(param_5);
  if (lVar1 == 0) {
    local_24 = FUN_140e34740(local_res8,param_2,param_3,param_4,0x2000);
  }
  else {
    local_28 = *(uint *)(lVar1 + 0xc);
    if ((*(uint *)(lVar1 + 0x10) & 2) == 0) {
      local_28 = local_28 & 0x2000;
    }
    local_24 = FUN_140e347a0(local_res8,param_2,param_3,param_4,local_28,
                             (longlong)*(int *)(lVar1 + 4),(longlong)*(int *)(lVar1 + 8));
  }
  if (local_24 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *local_res8;
  }
  return uVar2;
}


/* address=140e28670 name=FUN_140e28670 */

void FUN_140e28670(undefined8 param_1,undefined8 param_2)

{
  FUN_140d89f90(param_1,param_2);
  return;
}


/* address=140e286a0 name=FUN_140e286a0 */

void FUN_140e286a0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d8a140(param_1,param_2,&LAB_140e28640,&LAB_140e28610);
  return;
}


/* address=140e286e0 name=FUN_140e286e0 */

undefined4 FUN_140e286e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_140d8a230(param_1,local_10,param_3,&LAB_140e28640,&LAB_140e28610);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=140e28750 name=FUN_140e28750 */

void FUN_140e28750(undefined4 param_1)

{
  undefined auStack_68 [32];
  undefined *local_48;
  longlong local_38;
  undefined4 local_30 [6];
  ulonglong local_18;
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_68;
  local_48 = &LAB_140e28860;
  local_30[0] = param_1;
  local_38 = FUN_140e82a18(local_30,&DAT_1410cda00,0x13,0x14);
  if (local_38 == 0) {
    FUN_140d89470(&DAT_1414113e8);
    if (DAT_1414113e0 != 0) {
      local_38 = FUN_140e286a0(DAT_1414113e0,local_30);
    }
    FUN_140d894d0(&DAT_1414113e8);
  }
  FUN_140e28050(local_18 ^ (ulonglong)auStack_68);
  return;
}


/* address=140e28810 name=FUN_140e28810 */

undefined8 FUN_140e28810(int *param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  else if (*param_2 < *param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140e288b0 name=FUN_140e288b0 */

undefined8 FUN_140e288b0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_18 [3];
  
  local_18[0] = 0;
  iVar1 = FUN_140e28950(local_18,param_1);
  if (iVar1 < 1) {
    local_18[0] = 0;
  }
  return local_18[0];
}


/* address=140e288f0 name=FUN_140e288f0 */

void FUN_140e288f0(void)

{
  FUN_140d19610();
  return;
}


/* address=140e28910 name=FUN_140e28910 */

undefined8 FUN_140e28910(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e9a3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e28950 name=FUN_140e28950 */

undefined8 FUN_140e28950(longlong *param_1,char *param_2)

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
      iVar3 = FUN_140e28fa0(param_1,param_2);
    }
    else {
      iVar3 = FUN_140e28e80(param_1,*(undefined8 *)(param_2 + 8));
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
      if (iVar3 == 0) goto LAB_140e28d5b;
      if (iVar3 == 2) {
        return 1;
      }
    }
    lVar4 = FUN_140d76180((longlong)*(int *)(param_2 + 0x20));
    *param_1 = lVar4;
    if (*param_1 == 0) {
      return 0;
    }
    FUN_140e28910(*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    FUN_140e39d80(param_1,param_2);
    FUN_140e39e10(param_1,param_2);
    local_58 = 0;
    local_50 = *(longlong *)(param_2 + 8);
    for (; local_58 < *(int *)(param_2 + 0x10); local_58 = local_58 + 1) {
      uVar5 = FUN_140e39be0(param_1,local_50);
      iVar3 = FUN_140e28e80(uVar5,local_50);
      if (iVar3 == 0) {
        FUN_140e29230(param_1,param_2);
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
        iVar3 = FUN_140e28fa0(param_1,param_2);
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
      if (iVar3 == 0) goto LAB_140e28d5b;
      if (iVar3 == 2) {
        return 1;
      }
    }
    lVar4 = FUN_140d76180((longlong)*(int *)(param_2 + 0x20));
    *param_1 = lVar4;
    if (*param_1 == 0) {
      return 0;
    }
    FUN_140e28910(*param_1,0,(longlong)*(int *)(param_2 + 0x20));
    FUN_140e39b90(param_1,0xffffffff,param_2);
    if (local_28 == (code *)0x0) {
      return 1;
    }
    iVar3 = (*local_28)(1,param_1,param_2,0);
  }
  if (iVar3 != 0) {
    return 1;
  }
  FUN_140e29230(param_1,param_2);
LAB_140e28d5b:
  FUN_140d186f0(0xc,0,0x65,s_D__a_1_s_target_release_build_bo_1413fbca0,0xb7);
  return 0;
}


/* address=140e28d90 name=FUN_140e28d90 */

void FUN_140e28d90(undefined8 *param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    if (*(longlong *)(param_2 + 8) == 0) {
      FUN_140e290f0(param_1,param_2);
    }
    else {
      FUN_140e28f50(param_1,*(undefined8 *)(param_2 + 8));
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
    FUN_140e290f0(param_1,param_2);
  }
  return;
}


/* address=140e28e80 name=FUN_140e28e80 */

undefined4 FUN_140e28e80(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 local_28;
  
  if ((*param_2 & 1) == 0) {
    if ((*param_2 & 0x300) == 0) {
      if ((*param_2 & 6) == 0) {
        local_28 = FUN_140e28950(param_1,*(undefined8 *)(param_2 + 6));
      }
      else {
        lVar1 = FUN_140e288f0();
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
    FUN_140e28f50(param_1,param_2);
    local_28 = 1;
  }
  return local_28;
}


/* address=140e28f50 name=FUN_140e28f50 */

void FUN_140e28f50(undefined8 *param_1,uint *param_2)

{
  if ((*param_2 & 0x306) == 0) {
    FUN_140e28d90(param_1,*(undefined8 *)(param_2 + 6));
  }
  else {
    *param_1 = 0;
  }
  return;
}


/* address=140e28fa0 name=FUN_140e28fa0 */

bool FUN_140e28fa0(longlong *param_1,char *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int local_14;
  
  if (param_2 == (char *)0x0) {
    return false;
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FID_conflict__assert((wchar_t *)s_i_1413fbdd8,(wchar_t *)s_D_1413fbd10,0x10d);
  }
  if (*param_2 == '\x05') {
    local_14 = -1;
  }
  else {
    local_14 = *(int *)(param_2 + 4);
  }
  if (local_14 == -4) {
    puVar1 = (undefined4 *)FUN_140d76180(0x10);
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
      lVar2 = FUN_140dbaa80(0);
      *param_1 = lVar2;
      return true;
    }
    lVar2 = FUN_140dc3120(local_14);
    *param_1 = lVar2;
  }
  return *param_1 != 0;
}


/* address=140e290f0 name=FUN_140e290f0 */

void FUN_140e290f0(undefined8 *param_1,char *param_2)

{
  int local_18;
  
  if ((param_2 != (char *)0x0) && (*(longlong *)(param_2 + 0x18) != 0)) {
    FID_conflict__assert((wchar_t *)s_i_1413fbed0,(wchar_t *)s_D_1413fbe00,0x13b);
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


/* address=140e29190 name=FUN_140e29190 */

void FUN_140e29190(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140e29230(&local_res8,param_2);
  return;
}


/* address=140e291c0 name=FUN_140e291c0 */

void FUN_140e291c0(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140e291e0 name=FUN_140e291e0 */

void FUN_140e291e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140e29210 name=FUN_140e29210 */

void FUN_140e29210(undefined8 param_1)

{
  FUN_140d19740(param_1);
  return;
}


/* address=140e29230 name=FUN_140e29230 */

void FUN_140e29230(longlong *param_1,char *param_2)

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
        FUN_140e296f0(param_1,param_2);
      }
      else {
        FUN_140e29630(param_1,*(undefined8 *)(param_2 + 8));
      }
    }
    else if (cVar1 == '\x01') {
      iVar2 = FUN_140e39dc0(param_1,param_2);
      if (iVar2 != 0) {
        if (*(longlong *)(param_2 + 0x18) == 0) {
          local_20 = (code *)0x0;
        }
        else {
          local_20 = *(code **)(*(longlong *)(param_2 + 0x18) + 0x10);
        }
        if ((local_20 == (code *)0x0) || (iVar2 = (*local_20)(2,param_1,param_2,0), iVar2 != 2)) {
          FUN_140e39e70(param_1,param_2);
          local_60 = *(longlong *)(param_2 + 8) + -0x20 + (longlong)*(int *)(param_2 + 0x10) * 0x20;
          for (local_68 = 0; local_68 < *(int *)(param_2 + 0x10); local_68 = local_68 + 1) {
            lVar3 = FUN_140e39c20(param_1,local_60,0);
            if (lVar3 != 0) {
              uVar4 = FUN_140e39be0(param_1,lVar3);
              FUN_140e29630(uVar4,lVar3);
            }
            local_60 = local_60 + -0x20;
          }
          if (local_20 != (code *)0x0) {
            (*local_20)(3,param_1,param_2,0);
          }
          FUN_140d762b0(*param_1);
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
        iVar2 = FUN_140e39b50(param_1,param_2);
        if ((-1 < iVar2) && (iVar2 < *(int *)(param_2 + 0x10))) {
          lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_2 + 8);
          uVar4 = FUN_140e39be0(param_1,lVar3);
          FUN_140e29630(uVar4,lVar3);
        }
        if (local_30 != (code *)0x0) {
          (*local_30)(3,param_1,param_2,0);
        }
        FUN_140d762b0(*param_1);
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
      FUN_140e296f0(param_1,param_2);
    }
  }
  return;
}


/* address=140e29630 name=FUN_140e29630 */

void FUN_140e29630(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong local_28;
  undefined8 local_18 [3];
  
  if ((*param_2 & 6) == 0) {
    FUN_140e29230(param_1,*(undefined8 *)(param_2 + 6));
  }
  else {
    uVar1 = *param_1;
    local_28 = 0;
    while( true ) {
      uVar2 = FUN_140e291c0(uVar1);
      if (uVar2 <= local_28) break;
      local_18[0] = FUN_140e291e0(uVar1,local_28);
      FUN_140e29230(local_18,*(undefined8 *)(param_2 + 6));
      local_28 = local_28 + 1;
    }
    FUN_140e29210(uVar1);
    *param_1 = 0;
  }
  return;
}


/* address=140e296f0 name=FUN_140e296f0 */

void FUN_140e296f0(longlong *param_1,char *param_2)

{
  int local_14;
  
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FID_conflict__assert((wchar_t *)s_i_1413fbfd8,(wchar_t *)s_D_1413fbf10,0xb4);
  }
  if (*param_2 == '\x05') {
    local_14 = -1;
  }
  else {
    local_14 = *(int *)(param_2 + 4);
  }
  if (local_14 == -4) {
    if (*param_1 != 0) {
      FUN_140e410f0(*param_1);
      FUN_140d762b0(*param_1);
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
        FUN_140ddd5a0(*param_1);
      }
      else {
        FUN_140dc31b0(*param_1);
        *param_1 = 0;
      }
    }
  }
  *param_1 = 0;
  return;
}


/* address=140e29800 name=FUN_140e29800 */

undefined4 FUN_140e29800(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (0x1e < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_1410cdb80 + (longlong)param_1 * 4);
  }
  return uVar1;
}


/* address=140e29830 name=FUN_140e29830 */

undefined8
FUN_140e29830(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_18 [3];
  
  local_18[0] = 0;
  iVar1 = FUN_140e2aba0(local_18,param_2,param_3,param_4,0xffffffff,0,0,0,0);
  if (iVar1 < 1) {
    FUN_140e29230(local_18,param_4);
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN_140e29230(param_1,param_4);
    *param_1 = local_18[0];
  }
  return local_18[0];
}


/* address=140e298f0 name=FUN_140e298f0 */

void FUN_140e298f0(void)

{
  FUN_140d19610();
  return;
}


/* address=140e29910 name=FUN_140e29910 */

void FUN_140e29910(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140e29930 name=FUN_140e29930 */

void FUN_140e29930(undefined8 param_1,undefined8 param_2)

{
  FUN_140d19f30(param_1,param_2);
  return;
}


/* address=140e29960 name=FUN_140e29960 */

void FUN_140e29960(undefined8 param_1)

{
  FUN_140d19f60(param_1);
  return;
}


/* address=140e29980 name=FUN_140e29980 */

void FUN_140e29980(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined param_7,undefined8 param_8)

{
  FUN_140e2aba0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  return;
}


/* address=140e29a00 name=FUN_140e29a00 */

undefined8
FUN_140e29a00(undefined4 *param_1,int *param_2,undefined *param_3,byte *param_4,undefined8 *param_5,
             undefined4 param_6,int param_7,int param_8,char param_9)

{
  byte bVar1;
  undefined8 uVar2;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined8 local_18 [3];
  
  local_18[0] = *param_5;
  bVar1 = FUN_140dc3630(local_18,&local_1c,&local_20,&local_24,param_6);
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
      FUN_140d186f0(0xc,0,0xbe,s_D__a_1_s_target_release_build_bo_1413fd410,0x3b6);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    FUN_140d186f0(0xc,0,0x67,s_D__a_1_s_target_release_build_bo_1413fd3a0,0x3ad);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140e29b60 name=FUN_140e29b60 */

undefined8
FUN_140e29b60(longlong param_1,undefined8 *param_2,undefined4 param_3,uint *param_4,
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
      uVar1 = FUN_140e29de0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      puVar2 = &local_20;
      local_34 = FUN_140e29a00(&local_30,0,0,local_38,puVar2,param_3,param_4[1],local_28,param_5);
      local_18 = local_20;
      if (local_34 == 0) {
        FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fc910,0x20d);
        uVar1 = 0;
      }
      else if (local_34 == -1) {
        uVar1 = 0xffffffff;
      }
      else if (local_38[0] == '\0') {
        FUN_140d186f0(0xc,0,0x78,s_D__a_1_s_target_release_build_bo_1413fc980,0x213);
        uVar1 = 0;
      }
      else {
        local_34 = FUN_140e29de0(param_1,&local_20,local_30,param_4,
                                 (ulonglong)puVar2 & 0xffffffffffffff00,param_6,param_7);
        if (local_34 == 0) {
          FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fc9f0,0x219);
          uVar1 = 0;
        }
        else {
          local_30 = local_30 - ((int)local_20 - (int)local_18);
          if (local_30 == 0) {
            *param_2 = local_20;
            uVar1 = 1;
          }
          else {
            FUN_140d186f0(0xc,0,0x77,s_D__a_1_s_target_release_build_bo_1413fca60,0x220);
            FUN_140e29630(param_1,param_4);
            uVar1 = 0;
          }
        }
      }
    }
  }
  return uVar1;
}


/* address=140e29de0 name=FUN_140e29de0 */

undefined8
FUN_140e29de0(longlong *param_1,undefined8 *param_2,int param_3,uint *param_4,undefined param_5,
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
      iVar2 = FUN_140e2aba0(param_1,&local_38,param_3,*(undefined8 *)(param_4 + 6),0xffffffff,0,
                            param_5,param_6,param_7);
      if (iVar2 != 0) {
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        goto LAB_140e2a1f6;
      }
      FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fcc20,0x284);
    }
    else {
      iVar2 = FUN_140e2aba0(param_1,&local_38,param_3,*(undefined8 *)(param_4 + 6),param_4[1],
                            local_2c,param_5,param_6,param_7);
      if (iVar2 != 0) {
        if (iVar2 == -1) {
          return 0xffffffff;
        }
LAB_140e2a1f6:
        *param_2 = local_38;
        return 1;
      }
      FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fcbb0,0x27a);
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
    iVar2 = FUN_140e29a00(local_res18,0,0,0,&local_38,param_3,local_40,local_30,param_5);
    if (iVar2 == 0) {
      FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fcad0,0x250);
      return 0;
    }
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    if (*param_1 == 0) {
      lVar3 = FUN_140e298f0();
      *param_1 = lVar3;
    }
    else {
      local_20 = *param_1;
      while (lVar3 = FUN_140e29910(local_20), lVar3 != 0) {
        local_18 = FUN_140e29960(local_20);
        FUN_140e29230(&local_18,*(undefined8 *)(local_res20 + 6));
      }
    }
    if (*param_1 != 0) {
      do {
        if (local_res18[0] < 1) goto LAB_140e2a1f6;
        local_10 = local_38;
        local_28 = 0;
        local_40 = local_40 & 0xffffff00;
        iVar2 = FUN_140e2aba0(&local_28,&local_38,local_res18[0],*(undefined8 *)(local_res20 + 6),
                              0xffffffff,0,local_40,param_6,param_7);
        if (iVar2 == 0) {
          FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fcb40,0x26c);
          goto LAB_140e2a20d;
        }
        local_res18[0] = local_res18[0] - ((int)local_38 - (int)local_10);
        lVar3 = FUN_140e29930(*param_1,local_28);
      } while (lVar3 != 0);
      FUN_140e29230(&local_28,*(undefined8 *)(local_res20 + 6));
    }
  }
LAB_140e2a20d:
  FUN_140e29630(param_1,local_res20);
  return 0;
}


/* address=140e2a240 name=FUN_140e2a240 */

int FUN_140e2a240(uint **param_1,byte *param_2,int param_3,uint param_4,longlong param_5)

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
    FID_conflict__assert((wchar_t *)s_i_1413fd068,(wchar_t *)s_D_1413fcfa0,0x2fa);
  }
  local_res8 = param_1;
  if (*(int *)(param_5 + 4) == -4) {
    if (*param_1 == (uint *)0x0) {
      local_58 = (uint *)FUN_140e2e480();
      if (local_58 == (uint *)0x0) goto LAB_140e2a72b;
      *param_1 = local_58;
    }
    else {
      local_58 = *param_1;
    }
    if (local_res20 != *local_58) {
      FUN_140e40da0(local_58,local_res20,0);
    }
    local_res8 = (uint **)(local_58 + 2);
    local_28 = param_1;
  }
  switch(local_res20) {
  case 1:
    if (local_res18 != 1) {
      FUN_140d186f0(0xc,0,0x6a,s_D__a_1_s_target_release_build_bo_1413fd100,799);
      goto LAB_140e2a72b;
    }
    local_10 = local_res8;
    *(uint *)local_res8 = (uint)*local_res10;
    break;
  case 2:
  case 10:
    local_30 = local_res8;
    lVar2 = FUN_140dc4d80(local_res8,&local_res10,local_res18);
    if (lVar2 == 0) goto LAB_140e2a72b;
    (*local_30)[1] = local_res20 | (*local_30)[1] & 0x100;
    break;
  case 3:
    lVar2 = FUN_140e332b0(local_res8,&local_res10,local_res18);
    goto joined_r0x000140e2a394;
  case 5:
    if (local_res18 != 0) {
      FUN_140d186f0(0xc,0,0xa4,s_D__a_1_s_target_release_build_bo_1413fd090,0x317);
      goto LAB_140e2a72b;
    }
    *local_res8 = (uint *)0x1;
    break;
  case 6:
    lVar2 = FUN_140ddd890(local_res8,&local_res10,local_res18);
joined_r0x000140e2a394:
    if (lVar2 == 0) goto LAB_140e2a72b;
    break;
  default:
    FUN_140d717c0(local_40,local_res10,(longlong)local_res18);
    if (local_res20 == 0x1e) {
      do {
        lVar2 = FUN_140d71850(local_40);
        if (lVar2 == 0) goto LAB_140e2a536;
        iVar1 = FUN_140e35170(local_40);
      } while (iVar1 != 0);
      FUN_140d186f0(0xc,0,0x8e,s_D__a_1_s_target_release_build_bo_1413fd170,0x356);
      goto LAB_140e2a72b;
    }
LAB_140e2a536:
    if (local_res20 == 0x1c) {
      do {
        lVar2 = FUN_140d71850(local_40);
        if (lVar2 == 0) goto LAB_140e2a58b;
        iVar1 = FUN_140e351d0(local_40);
      } while (iVar1 != 0);
      FUN_140d186f0(0xc,0,0x95,s_D__a_1_s_target_release_build_bo_1413fd1e0,0x35f);
      goto LAB_140e2a72b;
    }
LAB_140e2a58b:
    if (local_res20 == 0xc) {
      do {
        lVar2 = FUN_140d71850(local_40);
        if (lVar2 == 0) goto LAB_140e2a5e0;
        iVar1 = FUN_140e34f90(local_40);
      } while (iVar1 != 0);
      FUN_140d186f0(0xc,0,0x96,s_D__a_1_s_target_release_build_bo_1413fd250,0x368);
      goto LAB_140e2a72b;
    }
LAB_140e2a5e0:
    if ((local_res20 == 0x17) && (iVar1 = FUN_140d72cd0(local_40,0,1), iVar1 == 0)) {
      FUN_140d186f0(0xc,0,0x94,s_D__a_1_s_target_release_build_bo_1413fd2c0,0x36f);
      goto LAB_140e2a72b;
    }
    if ((local_res20 == 0x18) && (iVar1 = FUN_140d72c90(local_40,0,0), iVar1 == 0)) {
      FUN_140d186f0(0xc,0,0x94,s_D__a_1_s_target_release_build_bo_1413fd330,0x376);
      goto LAB_140e2a72b;
    }
    if (*local_res8 == (uint *)0x0) {
      local_48 = (uint *)FUN_140dc3120(local_res20);
      if (local_48 == (uint *)0x0) goto LAB_140e2a72b;
      *local_res8 = local_48;
    }
    else {
      local_48 = *local_res8;
      local_48[1] = local_res20;
    }
    iVar1 = FUN_140dc3470(local_48,local_res10,(longlong)local_res18);
    if (iVar1 == 0) {
      FUN_140dc31b0(local_48);
      *local_res8 = (uint *)0x0;
      goto LAB_140e2a72b;
    }
  }
  if ((local_58 != (uint *)0x0) && (local_res20 == 5)) {
    *(undefined8 *)(local_58 + 2) = 0;
  }
  local_4c = 1;
LAB_140e2a72b:
  if ((local_4c == 0) && (FUN_140e2e4a0(local_58), local_28 != (uint **)0x0)) {
    *local_28 = (uint *)0x0;
  }
  return local_4c;
}


/* address=140e2a7f0 name=FUN_140e2a7f0 */

int FUN_140e2a7f0(longlong param_1,longlong *param_2,undefined4 param_3,char *param_4,int param_5,
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
    FUN_140d186f0(0xc,0,0x84,s_D__a_1_s_target_release_build_bo_1413fcc90,0x29d);
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
      FUN_140d186f0(0xc,0,0x89,s_D__a_1_s_target_release_build_bo_1413fcd00,0x2ac);
      return 0;
    }
    if (param_7 != '\0') {
      FUN_140d186f0(0xc,0,0x87,s_D__a_1_s_target_release_build_bo_1413fcd70,0x2b0);
      return 0;
    }
    local_20 = *param_2;
    local_30 = FUN_140e29a00(0,&local_34,local_37,0,&local_20,param_3,0xffffffff,0,0);
    if (local_30 == 0) {
      FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fcde0,0x2b6);
      return 0;
    }
    iVar1 = FUN_140e2ba30(local_34,local_37[0]);
    if (iVar1 == 0) {
      local_34 = -3;
    }
  }
  if (param_5 == -1) {
    param_5 = local_34;
    param_6 = 0;
  }
  local_20 = *param_2;
  local_30 = FUN_140e29a00(&local_2c,0,0,&local_38,&local_20,param_3,param_5,param_6,param_7);
  if (local_30 == 0) {
    FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fce50,0x2c5);
    local_30 = 0;
  }
  else if (local_30 == -1) {
    local_30 = 0xffffffff;
  }
  else {
    local_30 = 0;
    if (((local_34 == 0x10) || (local_34 == 0x11)) || (local_34 == -3)) {
      if ((local_34 != -3) && (local_38 == '\0')) {
        FUN_140d186f0(0xc,0,0xb2,s_D__a_1_s_target_release_build_bo_1413fcec0,0x2d0);
        return 0;
      }
      local_18 = *param_2;
      local_28 = ((int)local_20 - (int)local_18) + local_2c;
    }
    else {
      if (local_38 != '\0') {
        FUN_140d186f0(0xc,0,0xb3,s_D__a_1_s_target_release_build_bo_1413fcf30,0x2db);
        return 0;
      }
      local_18 = local_20;
      local_28 = local_2c;
    }
    local_20 = local_20 + local_2c;
    iVar1 = FUN_140e2a240(param_1,local_18,local_28,local_34,param_4);
    if (iVar1 != 0) {
      *param_2 = local_20;
      local_30 = 1;
    }
  }
  return local_30;
}


/* address=140e2aba0 name=FUN_140e2aba0 */

undefined8
FUN_140e2aba0(longlong *param_1,ulonglong *param_2,int param_3,char *param_4,int param_5,
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
    uVar3 = FUN_140d75af0(param_8);
    if (uVar3 <= *param_2) {
      local_38 = (longlong)local_res18[0] + *param_2;
      local_40 = FUN_140d75af0(param_8);
      lVar4 = FUN_140d75b10(param_8);
      if (local_38 <= (ulonglong)(local_40 + lVar4)) goto LAB_140e2ac86;
    }
    FID_conflict__assert((wchar_t *)s_C_1413fc0d0,(wchar_t *)s_D_1413fc000,0xd4);
  }
LAB_140e2ac86:
  if (0x3fffffff < local_res18[0]) {
    local_res18[0] = 0x3fffffff;
  }
  param_9 = param_9 + 1;
  if (param_9 < 0x1f) {
    local_b0 = *local_res20;
    if (local_b0 == '\0') {
      if (*(longlong *)(local_res20 + 8) == 0) {
        uVar5 = FUN_140e2a7f0(param_1,param_2,local_res18[0],local_res20,param_5,
                              CONCAT44(uVar7,param_6),param_7);
        return uVar5;
      }
      if ((param_5 == -1) && (param_7 == '\0')) {
        uVar5 = FUN_140e29b60(param_1,param_2,local_res18[0],*(undefined8 *)(local_res20 + 8),0,
                              param_8,param_9);
        return uVar5;
      }
      FUN_140d186f0(0xc,0,0x88,s_D__a_1_s_target_release_build_bo_1413fc200,0xea);
    }
    else {
      if (local_b0 == '\x01') {
        local_b8 = *param_2;
        if (param_5 == -1) {
          param_5 = 0x10;
          param_6 = 0;
        }
        iVar1 = FUN_140e29a00(local_res18,0,0,local_bf,&local_b8,CONCAT44(uVar7,local_res18[0]),
                              param_5,param_6,param_7);
        if (iVar1 == 0) {
          FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fc660,0x16f);
          goto LAB_140e2b99b;
        }
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        if (local_bf[0] == '\0') {
          FUN_140d186f0(0xc,0,0xa9,s_D__a_1_s_target_release_build_bo_1413fc6d0,0x175);
          goto LAB_140e2b99b;
        }
        if ((*param_1 == 0) && (iVar1 = FUN_140e28950(param_1,local_res20), iVar1 == 0)) {
          FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fc740,0x17a);
          goto LAB_140e2b99b;
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
               (local_70 = FUN_140e39c20(param_1,local_c8,0), local_70 != 0)) {
              local_28 = FUN_140e39be0(param_1,local_70);
              FUN_140e29630(local_28);
            }
            local_c8 = local_c8 + 8;
          }
          local_d8 = 0;
          local_c8 = *(uint **)(local_res20 + 8);
          for (; local_d8 < *(int *)(local_res20 + 0x10); local_d8 = local_d8 + 1) {
            local_a8 = (uint *)FUN_140e39c20(param_1,local_c8,1);
            if (local_a8 == (uint *)0x0) goto LAB_140e2b99b;
            local_48 = FUN_140e39be0(param_1,local_a8);
            if (local_res18[0] == 0) break;
            local_20 = local_b8;
            if (local_d8 == *(int *)(local_res20 + 0x10) + -1) {
              local_d4 = false;
            }
            else {
              local_d4 = (*local_a8 & 1) != 0;
              local_9c = (uint)local_d4;
            }
            iVar1 = FUN_140e29b60(local_48,&local_b8,local_res18[0],local_a8,local_d4,param_8,
                                  param_9);
            if (iVar1 == 0) {
              local_90 = local_a8;
              goto LAB_140e2b99b;
            }
            if (iVar1 == -1) {
              FUN_140e29630(local_48,local_a8);
            }
            else {
              local_res18[0] = local_res18[0] - ((int)local_b8 - (int)local_20);
            }
            local_c8 = (uint *)((longlong)local_c8 + 0x20);
          }
          if (local_res18[0] != 0) {
            FUN_140d186f0(0xc,0,0xa8,s_D__a_1_s_target_release_build_bo_1413fc7b0,0x1ba);
            goto LAB_140e2b99b;
          }
          for (; local_d8 < *(int *)(local_res20 + 0x10); local_d8 = local_d8 + 1) {
            local_98 = (uint *)FUN_140e39c20(param_1,local_c8,1);
            if (local_98 == (uint *)0x0) goto LAB_140e2b99b;
            if ((*local_98 & 1) == 0) {
              local_90 = local_98;
              FUN_140d186f0(0xc,0,0x79,s_D__a_1_s_target_release_build_bo_1413fc820,0x1cd);
              goto LAB_140e2b99b;
            }
            local_18 = FUN_140e39be0(param_1,local_98);
            FUN_140e29630(local_18,local_98);
            local_c8 = (uint *)((longlong)local_c8 + 0x20);
          }
          iVar1 = FUN_140e39f60(param_1,*param_2,local_b8 - *param_2,local_res20,param_8);
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
            FUN_140d186f0(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_1413fc430,0x11a);
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
              iVar1 = FUN_140e29a00(0,&local_a0,&local_c0,0,puVar6,uVar3,0xffffffff,0,1);
              uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
              if (iVar1 == 0) {
                FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fc2e0,
                              CONCAT44(uVar7,0xff));
              }
              else if (local_c0 == '\0') {
                uVar2 = FUN_140e29800(local_a0);
                if ((uVar2 & *(uint *)(local_res20 + 4)) != 0) {
                  uVar5 = FUN_140e2a7f0(param_1,param_2,local_res18[0],local_res20,
                                        CONCAT44(uVar7,local_a0),uVar3 & 0xffffffff00000000,
                                        uVar8 & 0xffffff00);
                  return uVar5;
                }
                if (param_7 != '\0') {
                  return 0xffffffff;
                }
                FUN_140d186f0(0xc,0,0x9d,s_D__a_1_s_target_release_build_bo_1413fc3c0,
                              CONCAT44(uVar7,0x112));
              }
              else {
                if (param_7 != '\0') {
                  return 0xffffffff;
                }
                FUN_140d186f0(0xc,0,0x9c,s_D__a_1_s_target_release_build_bo_1413fc350,
                              CONCAT44(uVar7,0x109));
              }
            }
            else {
              FUN_140d186f0(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_1413fc270,0xf7);
            }
          }
          goto LAB_140e2b99b;
        }
        if (param_5 != -1) {
          FUN_140d186f0(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_1413fc4a0,0x125);
          goto LAB_140e2b99b;
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
            iVar1 = FUN_140e28950(param_1,local_res20);
            if (iVar1 == 0) {
              FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fc510,0x139);
              goto LAB_140e2b99b;
            }
          }
          else {
            iVar1 = FUN_140e39b50(param_1,local_res20);
            if ((-1 < iVar1) && (iVar1 < *(int *)(local_res20 + 0x10))) {
              lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)(local_res20 + 8);
              local_78 = FUN_140e39be0(param_1,lVar4);
              FUN_140e29630(local_78,lVar4);
              FUN_140e39b90(param_1,0xffffffff,local_res20);
            }
          }
          local_b8 = *param_2;
          local_d8 = 0;
          local_c8 = *(uint **)(local_res20 + 8);
          for (; local_d8 < *(int *)(local_res20 + 0x10); local_d8 = local_d8 + 1) {
            local_78 = FUN_140e39be0(param_1,local_c8);
            iVar1 = FUN_140e29b60(local_78,&local_b8,local_res18[0],local_c8,1,param_8,param_9);
            if (iVar1 != -1) {
              if (iVar1 < 1) {
                local_90 = local_c8;
                FUN_140d186f0(0xc,0,0x9e,s_D__a_1_s_target_release_build_bo_1413fc580,0x14c);
                goto LAB_140e2b99b;
              }
              break;
            }
            local_c8 = local_c8 + 8;
          }
          if (local_d8 == *(int *)(local_res20 + 0x10)) {
            if (param_7 != '\0') {
              FUN_140e29230(param_1,local_res20);
              return 0xffffffff;
            }
            FUN_140d186f0(0xc,0,0xa3,s_D__a_1_s_target_release_build_bo_1413fc5f0,0x158);
            goto LAB_140e2b99b;
          }
          FUN_140e39b90(param_1,local_d8,local_res20);
          if ((local_88 == (code *)0x0) ||
             (iVar1 = (*local_88)(5,param_1,local_res20,0), iVar1 != 0)) {
            *param_2 = local_b8;
            return 1;
          }
        }
      }
      FUN_140d186f0(0xc,0,0x65,s_D__a_1_s_target_release_build_bo_1413fc890,0x1e0);
    }
  }
  else {
    FUN_140d186f0(0xc,0,0xc0,s_D__a_1_s_target_release_build_bo_1413fc190,0xde);
  }
LAB_140e2b99b:
  FUN_140e29230(param_1,local_res20);
  if (local_90 == (uint *)0x0) {
    FUN_140d18810(2,s_Type__1413fc908,*(undefined8 *)(local_res20 + 0x28));
  }
  else {
    FUN_140d18810(4,s_Field__1413fc900,*(undefined8 *)(local_90 + 4),s___Type__1413fc8f8,
                  *(undefined8 *)(local_res20 + 0x28));
  }
  return 0;
}


/* address=140e2ba30 name=FUN_140e2ba30 */

undefined4 FUN_140e2ba30(int param_1,int param_2)

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


/* address=140e2bb10 name=FUN_140e2bb10 */

ulonglong FUN_140e2bb10(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
    uVar4 = FUN_140e2bd30(&local_res8,param_2,param_3,0xffffffff,0);
  }
  else {
    uVar1 = FUN_140e2bd30(&local_res8,0,param_3,0xffffffff,0);
    if ((int)uVar1 < 1) {
      uVar4 = (ulonglong)uVar1;
    }
    else {
      lVar3 = FUN_140d76180((longlong)(int)uVar1);
      if (lVar3 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        local_18[0] = lVar3;
        uVar2 = FUN_140e2bd30(&local_res8,local_18,local_res18,0xffffffff,0);
        if ((int)uVar2 < 1) {
          FUN_140d762b0(lVar3);
          uVar4 = (ulonglong)uVar2;
        }
        else {
          if (uVar1 != uVar2) {
            FID_conflict__assert((wchar_t *)s_l_1413fd548,(wchar_t *)s_D_1413fd480,0x67);
          }
          *local_res10 = lVar3;
          uVar4 = (ulonglong)uVar1;
        }
      }
    }
  }
  return uVar4;
}


/* address=140e2bc50 name=FUN_140e2bc50 */

void FUN_140e2bc50(undefined8 param_1)

{
  FUN_140d19630(param_1);
  return;
}


/* address=140e2bc70 name=FUN_140e2bc70 */

void FUN_140e2bc70(undefined8 param_1,undefined8 param_2)

{
  FUN_140d196b0(param_1,param_2);
  return;
}


/* address=140e2bca0 name=FUN_140e2bca0 */

int FUN_140e2bca0(void *param_1,void *param_2,size_t param_3)

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


/* address=140e2bce0 name=FUN_140e2bce0 */

undefined8 FUN_140e2bce0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_140e99d20(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=140e2bd30 name=FUN_140e2bd30 */

int FUN_140e2bd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_140e2bdb0(param_1,param_2,param_3,param_4,param_5,0);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_r_1413fd628,(wchar_t *)s_D_1413fd560,0x75);
  }
  return iVar1;
}


/* address=140e2bdb0 name=FUN_140e2bdb0 */

ulonglong FUN_140e2bdb0(longlong *param_1,longlong param_2,char *param_3,int param_4,uint param_5,
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
    FID_conflict__assert((wchar_t *)s___1413fd710,(wchar_t *)s_D_1413fd640,0x83);
  }
  if ((param_4 == -1) && (param_5 != 0)) {
    FID_conflict__assert((wchar_t *)s_t_1413fd838,(wchar_t *)s_D_1413fd770,0x85);
  }
  if ((*param_3 == '\0') || (*param_1 != 0)) {
    local_60 = *param_3;
    if (local_60 == '\0') {
      if (*(longlong *)(param_3 + 8) == 0) {
        uVar2 = FUN_140e2c4c0(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      else if ((**(uint **)(param_3 + 8) & 1) == 0) {
        uVar2 = FUN_140e2cec0(param_1,param_2,*(undefined8 *)(param_3 + 8),param_4,param_5,param_6);
      }
      else {
        FUN_140d186f0(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_1413fd8e0,0x96);
        uVar2 = 0xffffffff;
      }
    }
    else if (local_60 == '\x01') {
      iVar1 = FUN_140e39eb0(&local_64,param_2,param_1,param_3);
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
          local_38 = FUN_140e39c20(param_1,local_58,1);
          if (local_38 == 0) {
            return 0xffffffff;
          }
          local_18 = FUN_140e39be0(param_1,local_38);
          local_50 = FUN_140e2cec0(local_18,0,local_38,0xffffffff,0,0);
          if ((local_50 == -1) || ((int)(0x7fffffff - local_64) < local_50)) {
            return 0xffffffff;
          }
          local_64 = local_64 + local_50;
          local_58 = local_58 + 0x20;
        }
        local_4c = FUN_140dc39b0(1,local_64,local_res20);
        if ((param_2 == 0) || (local_4c == 0xffffffff)) {
          uVar2 = (ulonglong)local_4c;
        }
        else {
          FUN_140dc37b0(param_2,1,local_64,local_res20,param_5);
          local_68 = 0;
          local_58 = *(longlong *)(param_3 + 8);
          for (; local_68 < *(int *)(param_3 + 0x10); local_68 = local_68 + 1) {
            local_30 = FUN_140e39c20(param_1,local_58,1);
            if (local_30 == 0) {
              return 0xffffffff;
            }
            local_10 = FUN_140e39be0(param_1,local_30);
            iVar1 = FUN_140e2cec0(local_10,param_2,local_30,0xffffffff,0,0);
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
        iVar1 = FUN_140e39b50(param_1,param_3);
        if ((iVar1 < 0) || (*(int *)(param_3 + 0x10) <= iVar1)) {
          FUN_140d186f0(0xc,0,0xa3,s_D__a_1_s_target_release_build_bo_1413fda30,0xb0);
          uVar2 = 0xffffffff;
        }
        else {
          local_40 = (uint *)((longlong)iVar1 * 0x20 + *(longlong *)(param_3 + 8));
          if ((*local_40 & 1) == 0) {
            local_28 = FUN_140e39be0(param_1,local_40);
            uVar2 = FUN_140e2cec0(local_28,param_2,local_40,0xffffffff,0,0);
          }
          else {
            FUN_140d186f0(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_1413fdaa0,0xb5);
            uVar2 = 0xffffffff;
          }
        }
      }
      else {
        FUN_140d186f0(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_1413fd9c0,0xab);
        uVar2 = 0xffffffff;
      }
    }
    else if (local_60 == '\x04') {
      if (param_4 == -1) {
        local_20 = *(longlong *)(param_3 + 0x18);
        local_48 = (**(code **)(local_20 + 0x20))(param_1,param_2,param_3);
        if (local_48 == 0) {
          FUN_140d186f0(0xc,0,0x44,s_D__a_1_s_target_release_build_bo_1413fdb80,200);
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = (ulonglong)local_48;
        }
      }
      else {
        FUN_140d186f0(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_1413fdb10,0xbf);
        uVar2 = 0xffffffff;
      }
    }
    else if (local_60 == '\x05') {
      if (param_4 == -1) {
        uVar2 = FUN_140e2c4c0(param_1,param_2,param_3,0xffffffff,0,param_6);
      }
      else {
        FUN_140d186f0(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_1413fd950,0xa2);
        uVar2 = 0xffffffff;
      }
    }
    else {
      FUN_140d186f0(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_1413fdbf0,0x108);
      uVar2 = 0xffffffff;
    }
  }
  else if (param_6 == 0) {
    FUN_140d186f0(0xc,0,0x9b,s_D__a_1_s_target_release_build_bo_1413fd870,0x8d);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=140e2c4c0 name=FUN_140e2c4c0 */

ulonglong FUN_140e2c4c0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4,
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
  local_24 = FUN_140e2c690(param_1,0,&local_20,&local_28,param_3);
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
        FUN_140dc37b0(param_2,0,local_24,local_res20,param_5);
      }
      local_18 = FUN_140e2c690(param_1,*param_2,&local_20,&local_28,param_3);
      if ((int)local_18 < 0) {
        return 0xffffffff;
      }
      if (local_24 != local_18) {
        FID_conflict__assert((wchar_t *)s_l_1413fe468,(wchar_t *)s_D_1413fe3a0,0x219);
      }
      if (local_20 != 0) {
        FID_conflict__assert((wchar_t *)s___1413fe548,(wchar_t *)s_D_1413fe480,0x21a);
      }
      *param_2 = (longlong)(int)local_24 + *param_2;
    }
    if (local_14 == 0) {
      uVar1 = (ulonglong)local_24;
    }
    else {
      uVar1 = FUN_140dc39b0(0,local_24,local_res20);
    }
  }
  else if (param_6 == 0) {
    FUN_140d186f0(0xc,0,0x9b,s_D__a_1_s_target_release_build_bo_1413fe330,0x201);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=140e2c690 name=FUN_140e2c690 */

int FUN_140e2c690(int **param_1,longlong param_2,undefined4 *param_3,int *param_4,char *param_5)

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
    FID_conflict__assert((wchar_t *)s_i_1413fe628,(wchar_t *)s_D_1413fe560,0x240);
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
      FUN_140d186f0(0xc,0,0xbf,s_D__a_1_s_target_release_build_bo_1413fe650,0x252);
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
      FUN_140d186f0(0xc,0,0xbf,s_D__a_1_s_target_release_build_bo_1413fe6c0,0x26b);
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
    iVar1 = FUN_140dc5070(*local_res8,local_10);
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
    iVar1 = FUN_140e33560(*local_res8,local_18);
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
      FUN_140d186f0(0xc,0,0x86,s_D__a_1_s_target_release_build_bo_1413fe730,0x27b);
      return -1;
    }
  }
  if ((local_res10 != 0) && (local_60 != 0)) {
    FUN_140e2bce0(local_res10,local_30,(longlong)local_60);
  }
  return local_60;
}


/* address=140e2cb90 name=FUN_140e2cb90 */

undefined4
FUN_140e2cb90(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4,int param_5)

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
  
  if ((param_5 == 0) || (uVar3 = FUN_140e2bc50(param_1), uVar3 < 2)) {
    local_30 = 0;
    while (uVar3 = FUN_140e2bc50(param_1), local_30 < uVar3) {
      local_20 = FUN_140e2bc70(param_1,local_30);
      iVar1 = FUN_140e2bd30(&local_20,param_2,param_4,0xffffffff,0);
      if (iVar1 < 0) {
        return 0;
      }
      local_30 = local_30 + 1;
    }
    local_38 = 1;
  }
  else {
    uVar3 = FUN_140e2bc50(param_1);
    if (uVar3 < 0x1000000000000000) {
      local_38 = 0;
      local_28 = FUN_140d76180((longlong)param_3);
      lVar4 = FUN_140e2bc50(param_1);
      lVar4 = FUN_140d76180(lVar4 * 0x10);
      if ((lVar4 != 0) && (local_28 != 0)) {
        local_50 = local_28;
        local_48 = 0;
        while (uVar3 = FUN_140e2bc50(param_1), local_48 < uVar3) {
          local_18[0] = FUN_140e2bc70(param_1,local_48);
          *(longlong *)(lVar4 + local_48 * 0x10) = local_50;
          uVar2 = FUN_140e2bd30(local_18,&local_50,param_4,0xffffffff,0);
          *(undefined4 *)(lVar4 + 8 + local_48 * 0x10) = uVar2;
          if (*(int *)(lVar4 + 8 + local_48 * 0x10) < 0) goto LAB_140e2ce98;
          if ((longlong)param_3 < local_50 - local_28) {
            FID_conflict__assert((wchar_t *)s_p_1413fe2f8,(wchar_t *)s_D_1413fe230,0x1dc);
          }
          local_48 = local_48 + 1;
        }
        uVar5 = FUN_140e2bc50(param_1);
        FUN_140e85590(lVar4,uVar5,0x10,&LAB_140e2d410);
        local_50 = *param_2;
        local_40 = 0;
        while (uVar3 = FUN_140e2bc50(param_1), local_40 < uVar3) {
          FUN_140e2bce0(local_50,*(undefined8 *)(lVar4 + local_40 * 0x10),
                        (longlong)*(int *)(lVar4 + 8 + local_40 * 0x10));
          local_50 = local_50 + *(int *)(lVar4 + 8 + local_40 * 0x10);
          local_40 = local_40 + 1;
        }
        *param_2 = local_50;
        local_38 = 1;
      }
LAB_140e2ce98:
      FUN_140d762b0(lVar4);
      FUN_140d762b0(local_28);
    }
    else {
      FUN_140d186f0(0xc,0,0x45,s_D__a_1_s_target_release_build_bo_1413fe1c0,0x1c8);
      local_38 = 0;
    }
  }
  return local_38;
}


/* address=140e2cec0 name=FUN_140e2cec0 */

ulonglong FUN_140e2cec0(longlong *param_1,longlong param_2,uint *param_3,uint param_4,uint param_5,
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
    FID_conflict__assert((wchar_t *)s___1413fdd30,(wchar_t *)s_D_1413fdc60,0x119);
  }
  if ((param_4 == 0xffffffff) && (param_5 != 0)) {
    FID_conflict__assert((wchar_t *)s_t_1413fde58,(wchar_t *)s_D_1413fdd90,0x11b);
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
      FUN_140d186f0(0xc,0,0xc1,s_D__a_1_s_target_release_build_bo_1413fde90,0x123);
      return 0xffffffff;
    }
    local_54 = param_3[1];
    local_48 = uVar4 & 0xc0;
  }
  if ((param_6 != 0) && ((uVar4 & 1) != 0)) {
    FID_conflict__assert((wchar_t *)s___1413fdfd0,(wchar_t *)s_D_1413fdf00,0x136);
  }
  if ((param_6 == 0) && ((uVar4 & 1) == 0)) {
    local_30 = 0;
  }
  else {
    local_30 = 1;
  }
  if ((uVar4 & 6) == 0) {
    if ((uVar4 & 0x10) == 0) {
      uVar5 = FUN_140e2bdb0(param_1,param_2,*(undefined8 *)(param_3 + 6),local_54,local_48,local_30)
      ;
    }
    else {
      uVar4 = FUN_140e2bdb0(param_1,0,*(undefined8 *)(param_3 + 6),0xffffffff,0,local_30);
      if ((int)uVar4 < 1) {
        uVar5 = (ulonglong)uVar4;
      }
      else {
        uVar3 = FUN_140dc39b0(1,uVar4,local_54);
        if ((param_2 != 0) && (uVar3 != 0xffffffff)) {
          FUN_140dc37b0(param_2,1,uVar4,local_54,local_48);
          iVar2 = FUN_140e2bd30(param_1,param_2,*(undefined8 *)(param_3 + 6),0xffffffff,0);
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
        FUN_140d186f0(0xc,0,0x9b,s_D__a_1_s_target_release_build_bo_1413fe030,0x147);
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
          FID_conflict__assert((wchar_t *)s___1413fe170,(wchar_t *)s_D_1413fe0a0,0x14f);
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
      for (local_28 = 0; uVar5 = FUN_140e2bc50(lVar1), local_28 < uVar5; local_28 = local_28 + 1) {
        local_18[0] = FUN_140e2bc70(lVar1,local_28);
        iVar2 = FUN_140e2bd30(local_18,0,*(undefined8 *)(param_3 + 6),0xffffffff,0);
        if ((iVar2 == -1) || (0x7fffffff - iVar2 < local_4c)) {
          return 0xffffffff;
        }
        local_4c = local_4c + iVar2;
      }
      uVar3 = FUN_140dc39b0(1,local_4c,local_40);
      if (uVar3 == 0xffffffff) {
        uVar5 = 0xffffffff;
      }
      else {
        local_50 = uVar3;
        if ((uVar4 & 0x10) != 0) {
          local_50 = FUN_140dc39b0(1,uVar3,local_54);
        }
        if ((param_2 == 0) || (local_50 == 0xffffffff)) {
          uVar5 = (ulonglong)local_50;
        }
        else {
          if ((uVar4 & 0x10) != 0) {
            FUN_140dc37b0(param_2,1,uVar3,local_54,local_48);
          }
          FUN_140dc37b0(param_2,1,local_4c,local_40,local_2c);
          iVar2 = FUN_140e2cb90(lVar1,param_2,local_4c,*(undefined8 *)(param_3 + 6),local_34);
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


/* address=140e2d4b0 name=FUN_140e2d4b0 */

void FUN_140e2d4b0(undefined8 param_1)

{
  FUN_140e2d830(0,param_1,1);
  return;
}


/* address=140e2d510 name=FUN_140e2d510 */

void FUN_140e2d510(longlong param_1,undefined8 param_2,int param_3,int param_4)

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
  
  local_18 = DAT_1413fba80 ^ (ulonglong)auStack_a8;
  iVar1 = FUN_140e080e0(param_2,&local_50);
  if (((iVar1 != 0) &&
      (((param_3 == 0 && (param_4 == 0)) ||
       (iVar1 = FUN_140e082b0(&local_50,param_3,param_4), iVar1 != 0)))) &&
     ((0x31 < local_3c && (local_3c < 0x96)))) {
    local_88 = local_40 + 1;
    local_68 = local_50;
    local_70 = local_4c;
    local_78 = local_48;
    local_80 = local_44;
    local_54 = local_88;
    _snprintf(local_28,0xe,s__02d_02d_02d_02d_02d_02dZ_1413fe798,
              (longlong)local_3c % 100 & 0xffffffff);
    local_58 = 0;
    local_res8 = param_1;
    if (param_1 == 0) {
      local_58 = 1;
      local_res8 = FUN_140e2e260();
      if (local_res8 == 0) goto LAB_140e2d696;
    }
    sVar2 = strlen(local_28);
    iVar1 = FUN_140dc3470(local_res8,local_28,sVar2);
    if (iVar1 == 0) {
      if (local_58 != 0) {
        FUN_140e2e280(local_res8);
      }
    }
    else {
      *(undefined4 *)(local_res8 + 4) = 0x17;
    }
  }
LAB_140e2d696:
  FUN_140e28050(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=140e2d6c0 name=FUN_140e2d6c0 */

undefined8 FUN_140e2d6c0(longlong param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined local_20 [32];
  
  sVar2 = strlen(param_2);
  FUN_140d717c0(local_20,param_2,sVar2);
  iVar1 = FUN_140d72cd0(local_20,0,1);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_1 != 0) {
      iVar1 = FUN_140dc3470(param_1,param_2,sVar2);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 0x17;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=140e2d830 name=FUN_140e2d830 */

undefined8 FUN_140e2d830(undefined8 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_18 [24];
  
  if (param_2[1] == 0x17) {
    FUN_140d717c0(local_18,*(undefined8 *)(param_2 + 2),(longlong)*param_2);
    iVar1 = FUN_140d72cd0(local_18,param_1,param_3);
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


/* address=140e2d8e0 name=FUN_140e2d8e0 */

void FUN_140e2d8e0(void)

{
  FUN_140dc3120(0x16);
  return;
}


/* address=140e2d900 name=FUN_140e2d900 */

void FUN_140e2d900(void)

{
  FUN_140dc3120(4);
  return;
}


/* address=140e2d980 name=FUN_140e2d980 */

void FUN_140e2d980(void)

{
  FUN_140dc3120(0xc);
  return;
}


/* address=140e2d9a0 name=FUN_140e2d9a0 */

void FUN_140e2d9a0(void)

{
  FUN_140dc3120(0x1a);
  return;
}


/* address=140e2da00 name=FUN_140e2da00 */

void FUN_140e2da00(undefined8 param_1)

{
  FUN_140dc31b0(param_1);
  return;
}


/* address=140e2da20 name=FUN_140e2da20 */

void FUN_140e2da20(undefined8 param_1)

{
  FUN_140dc31b0(param_1);
  return;
}


/* address=140e2daa0 name=FUN_140e2daa0 */

void FUN_140e2daa0(undefined8 param_1)

{
  FUN_140dc31b0(param_1);
  return;
}


/* address=140e2e050 name=FUN_140e2e050 */

void FUN_140e2e050(void)

{
  FUN_140dc3120(3);
  return;
}


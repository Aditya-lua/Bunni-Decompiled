/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=142aefdb0 name=FUN_142aefdb0 */

void FUN_142aefdb0(longlong param_1,undefined8 param_2)

{
  undefined auStack_28 [8];
  longlong lStack_20;
  undefined8 uStack_18;
  longlong lStack_10;
  
  lStack_10 = *(longlong *)(param_1 + 0x38);
  if (lStack_10 != 0) {
    lStack_20 = param_1;
    uStack_18 = param_2;
    FUN_142aef080(auStack_28,param_1 + 0x10);
    FUN_142af3d60(lStack_10,&LAB_142af38f0,&lStack_20);
    FUN_142aef0e0(auStack_28);
  }
  return;
}


/* address=142aefe30 name=FUN_142aefe30 */

void FUN_142aefe30(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}


/* address=142aefef0 name=FUN_142aefef0 */

undefined * FUN_142aefef0(void)

{
  return &DAT_14317ae20;
}


/* address=142aeff00 name=FUN_142aeff00 */

undefined4 FUN_142aeff00(longlong param_1)

{
  ushort uVar1;
  undefined4 uStack_18;
  
  uVar1 = FUN_142af1120(param_1);
  if ((uVar1 < 0x304) || (*(int *)(param_1 + 0x174) == 0)) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = 1;
  }
  return uStack_18;
}


/* address=142af0180 name=FUN_142af0180 */

void FUN_142af0180(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  return;
}


/* address=142af01d0 name=FUN_142af01d0 */

void FUN_142af01d0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_142994ac0(*(longlong *)(param_1 + 0x30) + 0x1d0,0);
  if (cVar1 == '\0') {
    lVar2 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x118);
    if (lVar2 == 0) {
      FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x49f);
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 5 & 1) != 0) {
      FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x4a0);
    }
    cVar1 = FUN_142993030(lVar2 + 0x5e8);
    if (cVar1 == '\0') {
      FUN_142b8a9d0(lVar2);
    }
    else {
      FUN_142992c50(lVar2 + 0x5e8);
    }
  }
  else {
    FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x1d0);
  }
  return;
}


/* address=142af0310 name=FUN_142af0310 */

int FUN_142af0310(void *param_1,void *param_2,size_t param_3)

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


/* address=142af0350 name=FUN_142af0350 */

undefined8 FUN_142af0350(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142af03a0 name=FUN_142af03a0 */

undefined8 FUN_142af03a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142af03f0 name=FUN_142af03f0 */

undefined8 FUN_142af03f0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142af0430 name=FUN_142af0430 */

void FUN_142af0430(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined auStack_c8 [32];
  undefined4 uStack_a8;
  byte bStack_98;
  undefined auStack_90 [8];
  undefined uStack_88;
  undefined uStack_87;
  undefined uStack_86;
  longlong lStack_80;
  ushort uStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  undefined auStack_58 [8];
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined8 auStack_20 [2];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_c8;
  lStack_80 = *param_1;
  if ((*(uint *)(lStack_80 + 0x84) & 0x200) == 0) {
    lVar2 = FUN_142992c50(lStack_80 + 0x68);
    uVar3 = FUN_142af0cd0(auStack_58,*(undefined8 *)(lVar2 + 8));
    FUN_142992e50(auStack_90,uVar3);
    FUN_1429932e0(auStack_58);
    cVar1 = operator==<>(auStack_90,0);
    if (cVar1 == '\0') {
      lVar2 = FUN_142992c50(auStack_90);
      pbStack_70 = (byte *)(lVar2 + 0x1a8);
      *pbStack_70 = *pbStack_70 & 0xef | (*(byte *)(lStack_80 + 0xa4) & 1) << 4;
      lVar2 = FUN_142992c50(auStack_90);
      *(undefined2 *)(lVar2 + 4) = *(undefined2 *)(lStack_80 + 0x10);
      bStack_98 = *(longlong *)(lStack_80 + 0x98) != 0;
      lVar2 = FUN_142992c50(auStack_90);
      pbStack_68 = (byte *)(lVar2 + 0x1a8);
      *pbStack_68 = *pbStack_68 & 0xdf | (bStack_98 & 1) << 5;
      FUN_1429910e0(lStack_80,auStack_20);
      lVar2 = FUN_142992c50(auStack_90);
      *(undefined8 *)(lVar2 + 0xc0) = auStack_20[0];
      uStack_78 = FUN_142afbfd0(lStack_80);
      if (uStack_78 < 0x304) {
        lStack_48 = FUN_142992c50(lStack_80 + 0x70);
        lVar2 = FUN_142992c50(auStack_90);
        *(undefined4 *)(lVar2 + 0xb4) = *(undefined4 *)(lStack_48 + 0x60);
        lStack_40 = FUN_142992c50(lStack_80 + 0x70);
        lVar2 = FUN_142992c50(auStack_90);
        *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(lStack_40 + 0x60);
      }
      else {
        lStack_50 = FUN_142992c50(lStack_80 + 0x70);
        lVar2 = FUN_142992c50(auStack_90);
        *(undefined4 *)(lVar2 + 0xb4) = *(undefined4 *)(lStack_50 + 100);
        lVar2 = FUN_142992c50(auStack_90);
        *(undefined4 *)(lVar2 + 0xb8) = 0x93a80;
      }
      lVar2 = FUN_142992c50(param_1[1] + 0x20);
      if (*(byte *)(lVar2 + 0x70) < 0x21) {
        lVar2 = FUN_142992c50(param_1[1] + 0x20);
        uStack_38 = (ulonglong)*(byte *)(lVar2 + 0x70);
        lStack_30 = FUN_142992c50(param_1[1] + 0x20);
        lStack_30 = lStack_30 + 0x71;
        lVar2 = FUN_142992c50(auStack_90);
        FUN_142af0350(lVar2 + 0x5d,lStack_30,uStack_38);
        lStack_28 = FUN_142992c50(param_1[1] + 0x20);
        lVar2 = FUN_142992c50(auStack_90);
        *(undefined *)(lVar2 + 0x5c) = *(undefined *)(lStack_28 + 0x70);
        lVar2 = FUN_142992c50(auStack_90);
        pbStack_60 = (byte *)(lVar2 + 0x1a8);
        *pbStack_60 = *pbStack_60 | 4;
        lVar2 = FUN_142992c50(auStack_90);
        *(undefined4 *)(lVar2 + 0xb0) = 0x41;
        uVar3 = FUN_142992cb0(auStack_90);
        FUN_1429950b0(param_1 + 0xbc,uVar3);
        FUN_142af11c0(lStack_80,0);
        uStack_86 = 1;
        FUN_1429932e0(auStack_90);
      }
      else {
        uStack_a8 = 0x183;
        FUN_142afa690(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_session.cc"
                     );
        uStack_87 = 0;
        FUN_1429932e0(auStack_90);
      }
    }
    else {
      uStack_88 = 0;
      FUN_1429932e0(auStack_90);
    }
  }
  else {
    uStack_a8 = 0x163;
    FUN_142afa690(0x10,0,0xd1,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_session.cc"
                 );
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_c8);
  return;
}


/* address=142af0840 name=FUN_142af0840 */

ulonglong FUN_142af0840(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uStack_20;
  undefined auStack_18 [8];
  undefined8 auStack_10 [2];
  
  uStack_20 = 0;
  uVar2 = FUN_142aff960(param_3,&uStack_20,auStack_10);
  if ((int)uVar2 == 0) {
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    FUN_142992e20(auStack_18,uStack_20);
    lVar3 = FUN_142992c50(*param_1 + 0x70);
    if (*(longlong *)(lVar3 + 0x208) == 0) {
      iVar1 = FUN_142af2a80(param_1,param_2,uStack_20,auStack_10[0]);
      FUN_142993a10(auStack_18);
      uVar2 = (ulonglong)(iVar1 != 0);
    }
    else {
      iVar1 = FUN_142af30c0(param_1,param_2,uStack_20,auStack_10[0]);
      FUN_142993a10(auStack_18);
      uVar2 = (ulonglong)(iVar1 != 0);
    }
  }
  return uVar2;
}


/* address=142af0950 name=FUN_142af0950 */

void FUN_142af0950(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined auStack_78 [32];
  undefined uStack_58;
  undefined uStack_57;
  undefined uStack_56;
  undefined auStack_50 [8];
  undefined auStack_48 [8];
  longlong *plStack_40;
  undefined auStack_38 [8];
  undefined auStack_30 [8];
  longlong lStack_28;
  ulonglong auStack_20 [2];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_78;
  FUN_142991120(param_1,auStack_20);
  FUN_142994f30(auStack_48,param_1 + 0x10);
  cVar1 = FUN_142993030(param_1 + 0x140);
  if (cVar1 != '\0') {
    lVar2 = FUN_142992c50(param_1 + 0x140);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      lVar2 = FUN_142992c50(param_1 + 0x140);
      if (*(ulonglong *)(lVar2 + 0x30) <= auStack_20[0]) goto LAB_142af0a4b;
    }
    cVar1 = FUN_142993030(param_1 + 0x148);
    if (cVar1 != '\0') {
      lVar2 = FUN_142992c50(param_1 + 0x148);
      if (*(ulonglong *)(lVar2 + 0x30) <= auStack_20[0]) goto LAB_142af0a4b;
    }
    uStack_58 = 1;
    FUN_142994f90(auStack_48);
    goto LAB_142af0cb0;
  }
LAB_142af0a4b:
  FUN_142994f90(auStack_48);
  FUN_142aef080(auStack_38,param_1 + 0x10);
  cVar1 = FUN_142993030(param_1 + 0x140);
  if (cVar1 == '\0') {
LAB_142af0ad3:
    uVar3 = FUN_142994fb0(auStack_30);
    FUN_142992e50(auStack_50,uVar3);
    FUN_1429944c0(auStack_30);
    cVar1 = FUN_142993030(auStack_50);
    if (cVar1 == '\0') {
      uStack_57 = 0;
      FUN_1429944c0(auStack_50);
      FUN_142aef0e0(auStack_38);
      goto LAB_142af0cb0;
    }
    uVar3 = FUN_142992c50(auStack_50);
    FUN_142b3b560(uVar3,0x10);
    lVar2 = FUN_142992c50(auStack_50);
    FUN_142b3b560(lVar2 + 0x10,0x10);
    lVar2 = FUN_142992c50(auStack_50);
    FUN_142b3b560(lVar2 + 0x20,0x10);
    lStack_28 = auStack_20[0] + 0x2a300;
    lVar2 = FUN_142992c50(auStack_50);
    *(longlong *)(lVar2 + 0x30) = lStack_28;
    cVar1 = FUN_142993030(param_1 + 0x140);
    if (cVar1 != '\0') {
      lVar2 = FUN_142992c50(param_1 + 0x140);
      plStack_40 = (longlong *)(lVar2 + 0x30);
      *plStack_40 = *plStack_40 + 0x2a300;
      uVar3 = FUN_142992cb0(param_1 + 0x140);
      FUN_142994ff0(param_1 + 0x148,uVar3);
    }
    uVar3 = FUN_142992cb0(auStack_50);
    FUN_142994ff0(param_1 + 0x140,uVar3);
    FUN_1429944c0(auStack_50);
  }
  else {
    lVar2 = FUN_142992c50(param_1 + 0x140);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      lVar2 = FUN_142992c50(param_1 + 0x140);
      if (*(ulonglong *)(lVar2 + 0x30) <= auStack_20[0]) goto LAB_142af0ad3;
    }
  }
  cVar1 = FUN_142993030(param_1 + 0x148);
  if (cVar1 != '\0') {
    lVar2 = FUN_142992c50(param_1 + 0x148);
    if (*(ulonglong *)(lVar2 + 0x30) <= auStack_20[0]) {
      FUN_142994500(param_1 + 0x148,0);
    }
  }
  uStack_56 = 1;
  FUN_142aef0e0(auStack_38);
LAB_142af0cb0:
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_78);
  return;
}


/* address=142af0cd0 name=FUN_142af0cd0 */

undefined8 FUN_142af0cd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 auStackX_10 [3];
  undefined auStack_18 [24];
  
  auStackX_10[0] = param_2;
  uVar1 = FUN_142af3df0(auStack_18,auStackX_10);
  FUN_142992e50(param_1,uVar1);
  FUN_1429932e0(auStack_18);
  return param_1;
}


/* address=142af0d20 name=FUN_142af0d20 */

uint FUN_142af0d20(undefined *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined auStack_48 [4];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 uStack_30;
  undefined auStack_28 [24];
  
  uVar1 = FUN_142992f60(param_1);
  if (uVar1 < 4) {
    FUN_142af03f0(auStack_48,0,4);
    uStack_30 = FUN_142992f60(param_1);
    uVar2 = FUN_142992c50(param_1);
    FUN_142af0350(auStack_48,uVar2,uStack_30);
    FUN_142af3e40(auStack_28,auStack_48);
    puVar5 = auStack_28;
    puVar6 = param_1;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  pbVar3 = (byte *)FUN_142af3ac0(param_1,0);
  uStack_44 = (uint)*pbVar3;
  pbVar3 = (byte *)FUN_142af3ac0(param_1,1);
  uStack_40 = uStack_44 | (uint)*pbVar3 << 8;
  pbVar3 = (byte *)FUN_142af3ac0(param_1,2);
  uStack_3c = uStack_40 | (uint)*pbVar3 << 0x10;
  pbVar3 = (byte *)FUN_142af3ac0(param_1,3);
  return uStack_3c | (uint)*pbVar3 << 0x18;
}


/* address=142af0e30 name=FUN_142af0e30 */

ulonglong FUN_142af0e30(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  byte bStack_18;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  cVar1 = *(char *)(param_2 + 0x5c);
  lVar4 = FUN_142992c50(*(longlong *)(param_1 + 8) + 0x20);
  if (cVar1 == *(char *)(lVar4 + 0x70)) {
    lVar4 = FUN_142992c50(*(longlong *)(param_1 + 8) + 0x20);
    uVar2 = *(undefined *)(lVar4 + 0x70);
    lVar4 = FUN_142992c50(*(longlong *)(param_1 + 8) + 0x20);
    iVar3 = FUN_142af0310(param_2 + 0x5d,lVar4 + 0x71,uVar2);
    if (iVar3 == 0) {
      bStack_18 = 1;
      goto LAB_142af0edb;
    }
  }
  bStack_18 = 0;
LAB_142af0edb:
  return (ulonglong)bStack_18;
}


/* address=142af0ef0 name=FUN_142af0ef0 */

void FUN_142af0ef0(undefined8 param_1,longlong param_2)

{
  undefined auStack_48 [32];
  uint uStack_28;
  ulonglong auStack_20 [2];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) &&
     (FUN_1429910e0(param_1,auStack_20), *(ulonglong *)(param_2 + 0xc0) <= auStack_20[0])) {
    uStack_28 = (uint)(auStack_20[0] - *(longlong *)(param_2 + 0xc0) <
                      (ulonglong)*(uint *)(param_2 + 0xb4));
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=142af0fa0 name=FUN_142af0fa0 */

undefined FUN_142af0fa0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  cVar1 = FUN_142af0e30(param_1,param_2);
  if ((((cVar1 != '\0') && ((*(byte *)(lVar3 + 0xa4) & 1) == (*(byte *)(param_2 + 0x1a8) >> 4 & 1)))
      && (cVar1 = FUN_142af0ef0(lVar3,param_2), cVar1 != '\0')) &&
     ((*(short *)(lVar3 + 0x10) == *(short *)(param_2 + 4) &&
      (param_1[0xc0] == *(longlong *)(param_2 + 200))))) {
    uVar2 = FUN_142992c50(param_2 + 0x88);
    lVar3 = FUN_142993080(uVar2);
    if ((((lVar3 == 0) && ((*(byte *)(param_2 + 0x1a8) >> 1 & 1) == 0)) ||
        ((*(byte *)(param_2 + 0x1a8) >> 1 & 1) == (*(byte *)(param_1[1] + 0xed) >> 5 & 1))) &&
       ((*(longlong *)(*param_1 + 0x98) != 0) == (bool)(*(byte *)(param_2 + 0x1a8) >> 5 & 1))) {
      return 1;
    }
  }
  return 0;
}


/* address=142af1120 name=FUN_142af1120 */

undefined2 FUN_142af1120(longlong param_1)

{
  char cVar1;
  undefined2 auStack_18 [12];
  
  cVar1 = FUN_142afb990(auStack_18,*(undefined2 *)(param_1 + 4));
  if (cVar1 == '\0') {
    FID_conflict__assert(L"0",(wchar_t *)"D",0x154);
    auStack_18[0] = 0;
  }
  return auStack_18[0];
}


/* address=142af1180 name=FUN_142af1180 */

void FUN_142af1180(longlong param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_142af1120(param_1);
  FUN_142afd8d0(uVar1,*(undefined8 *)(param_1 + 200));
  return;
}


/* address=142af11c0 name=FUN_142af11c0 */

void FUN_142af11c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined auStack_18 [24];
  
  lVar1 = FUN_142992c50(param_1 + 0x58);
  if (lVar1 != param_2) {
    uVar2 = FUN_142993280(auStack_18,param_2);
    FUN_1429950b0(param_1 + 0x58,uVar2);
    FUN_1429932e0(auStack_18);
  }
  return;
}


/* address=142af1220 name=FUN_142af1220 */

int FUN_142af1220(longlong *param_1,undefined8 param_2,char *param_3,undefined *param_4,
                 longlong param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char cStack_b8;
  undefined auStack_b6 [6];
  undefined auStack_b0 [8];
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined auStack_90 [24];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  if ((*(byte *)(*param_1 + 0xa4) & 1) == 0) {
    FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x2ca);
  }
  FUN_142994b40(auStack_b0);
  auStack_b6[0] = 0;
  uVar2 = FUN_14298a8f0(*param_1);
  if (((uVar2 & 0x4000) == 0) && (cVar1 = FUN_142ba02c0(param_5,auStack_90,0x23), cVar1 != '\0')) {
    cStack_b8 = '\x01';
  }
  else {
    cStack_b8 = '\0';
  }
  if ((cStack_b8 == '\0') || (lVar3 = FUN_142b782f0(auStack_90), lVar3 == 0)) {
    puVar4 = (undefined *)
             FUN_142992fc0(auStack_28,*(undefined8 *)(param_5 + 0x30),
                           *(undefined8 *)(param_5 + 0x38));
    puVar6 = auStack_58;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    iStack_a4 = FUN_142af3210(param_1,auStack_b0,auStack_58);
    if (iStack_a4 != 1) {
      iStack_98 = iStack_a4;
      FUN_1429932e0(auStack_b0);
      return iStack_98;
    }
  }
  else {
    puVar4 = (undefined *)
             FUN_142992fc0(auStack_48,*(undefined8 *)(param_5 + 0x30),
                           *(undefined8 *)(param_5 + 0x38));
    puVar6 = auStack_78;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar4 = (undefined *)FUN_142af39c0(auStack_90,auStack_38);
    puVar6 = auStack_68;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    iStack_a8 = FUN_142ba17e0(param_1,auStack_b0,auStack_b6,auStack_68,auStack_78);
    if (iStack_a8 == 1) {
      iStack_9c = 0xb;
      FUN_1429932e0(auStack_b0);
      return iStack_9c;
    }
    if (iStack_a8 == 2) {
      cVar1 = FUN_142993030(auStack_b0);
      if (cVar1 != '\0') {
        FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x2db);
      }
    }
    else if (iStack_a8 == 3) {
      iStack_a0 = 0;
      FUN_1429932e0(auStack_b0);
      return iStack_a0;
    }
  }
  uVar5 = FUN_142992cb0(auStack_b0);
  FUN_1429950b0(param_2,uVar5);
  *param_3 = cStack_b8;
  *param_4 = auStack_b6[0];
  iStack_94 = 1;
  FUN_1429932e0(auStack_b0);
  return iStack_94;
}


/* address=142af14d0 name=FUN_142af14d0 */

undefined8 FUN_142af14d0(undefined8 param_1,longlong param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined auStack_1b8 [8];
  undefined auStack_1b0 [8];
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  undefined auStack_178 [8];
  ulonglong uStack_170;
  longlong lStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined auStack_128 [8];
  undefined8 uStack_120;
  undefined auStack_118 [8];
  longlong lStack_110;
  ulonglong uStack_108;
  longlong lStack_100;
  ulonglong uStack_f8;
  longlong lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
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
  
  uVar2 = FUN_142af0cd0(auStack_178,*(undefined8 *)(param_2 + 0x90));
  FUN_142992e50(auStack_1b8,uVar2);
  FUN_1429932e0(auStack_178);
  cVar1 = FUN_142993030(auStack_1b8);
  if (cVar1 == '\0') {
    FUN_142aeec30(param_1,0);
    FUN_1429932e0(auStack_1b8);
    return param_1;
  }
  lVar3 = FUN_142992c50(auStack_1b8);
  pbStack_1a8 = (byte *)(lVar3 + 0x1a8);
  *pbStack_1a8 = *pbStack_1a8 & 0xef | (*(byte *)(param_2 + 0x1a8) >> 4 & 1) << 4;
  lVar3 = FUN_142992c50(auStack_1b8);
  *(undefined2 *)(lVar3 + 4) = *(undefined2 *)(param_2 + 4);
  lVar3 = FUN_142992c50(auStack_1b8);
  pbStack_1a0 = (byte *)(lVar3 + 0x1a8);
  *pbStack_1a0 = *pbStack_1a0 & 0xdf | (*(byte *)(param_2 + 0x1a8) >> 5 & 1) << 5;
  lVar3 = FUN_142992c50(auStack_1b8);
  *(undefined *)(lVar3 + 0x5c) = *(undefined *)(param_2 + 0x5c);
  uStack_170 = (ulonglong)*(byte *)(param_2 + 0x5c);
  lStack_168 = param_2 + 0x5d;
  lVar3 = FUN_142992c50(auStack_1b8);
  FUN_142af0350(lVar3 + 0x5d,lStack_168,uStack_170);
  lVar3 = FUN_142992c50(auStack_1b8);
  *(undefined *)(lVar3 + 10) = *(undefined *)(param_2 + 10);
  uStack_160 = (ulonglong)*(byte *)(param_2 + 10);
  lStack_158 = param_2 + 0xb;
  lVar3 = FUN_142992c50(auStack_1b8);
  FUN_142af0350(lVar3 + 0xb,lStack_158,uStack_160);
  lVar3 = FUN_142992c50(auStack_1b8);
  *(undefined8 *)(lVar3 + 200) = *(undefined8 *)(param_2 + 200);
  cVar1 = FUN_142994ac0(param_2 + 0x80,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_142992c50(param_2 + 0x80);
    uStack_150 = FUN_142b0edc0(uVar2);
    lVar3 = FUN_142992c50(auStack_1b8);
    FUN_142993a50(lVar3 + 0x80,uStack_150);
    lVar3 = FUN_142992c50(auStack_1b8);
    cVar1 = operator==<>(lVar3 + 0x80,0);
    if (cVar1 != '\0') {
      FUN_142aeec30(param_1,0);
      FUN_1429932e0(auStack_1b8);
      return param_1;
    }
  }
  cVar1 = FUN_142994ac0(param_2 + 0x88,0);
  if (cVar1 != '\0') {
    puVar4 = auStack_1b0;
    for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uStack_148 = FUN_142af2a60(auStack_1b0 + 1);
    uVar2 = FUN_142992c50(param_2 + 0x88);
    uStack_140 = FUN_142aeea50(uVar2,uStack_148,FUN_142b06ae0);
    lVar3 = FUN_142992c50(auStack_1b8);
    FUN_142993ae0(lVar3 + 0x88,uStack_140);
    lVar3 = FUN_142992c50(auStack_1b8);
    cVar1 = operator==<>(lVar3 + 0x88,0);
    if (cVar1 != '\0') {
      FUN_142aeec30(param_1,0);
      FUN_1429932e0(auStack_1b8);
      return param_1;
    }
  }
  uVar2 = FUN_142992c50(auStack_1b8);
  lStack_138 = *(longlong *)(param_2 + 0x90);
  cVar1 = (**(code **)(lStack_138 + 0x38))(uVar2,param_2);
  if (cVar1 == '\0') {
    FUN_142aeec30(param_1,0);
    FUN_1429932e0(auStack_1b8);
    return param_1;
  }
  lVar3 = FUN_142992c50(auStack_1b8);
  *(undefined4 *)(lVar3 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  uStack_130 = FUN_142af3b50(auStack_128,param_2 + 0x100);
  lVar3 = FUN_142992c50(auStack_1b8);
  FUN_142af3e70(lVar3 + 0x100,uStack_130);
  FUN_142aee980(auStack_128);
  uStack_120 = FUN_142af3b50(auStack_118,param_2 + 0xf8);
  lVar3 = FUN_142992c50(auStack_1b8);
  FUN_142af3e70(lVar3 + 0xf8,uStack_120);
  FUN_142aee980(auStack_118);
  lStack_110 = param_2 + 0x108;
  lVar3 = FUN_142992c50(auStack_1b8);
  FUN_142af0350(lVar3 + 0x108,lStack_110,0x20);
  lVar3 = FUN_142992c50(auStack_1b8);
  pbStack_198 = (byte *)(lVar3 + 0x1a8);
  *pbStack_198 = *pbStack_198 & 0xfd | (*(byte *)(param_2 + 0x1a8) >> 1 & 1) << 1;
  lVar3 = FUN_142992c50(auStack_1b8);
  *(undefined2 *)(lVar3 + 8) = *(undefined2 *)(param_2 + 8);
  lVar3 = FUN_142992c50(auStack_1b8);
  *(undefined4 *)(lVar3 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  lVar3 = FUN_142992c50(auStack_1b8);
  *(undefined4 *)(lVar3 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  lVar3 = FUN_142992c50(auStack_1b8);
  *(undefined8 *)(lVar3 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  if ((param_3 & 2) == 0) {
LAB_142af1e67:
    if ((param_3 & 1) != 0) {
      puStack_c8 = auStack_28;
      puVar4 = (undefined *)FUN_142994db0(puStack_c8,param_2 + 0xe8);
      puVar5 = auStack_78;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar3 = FUN_142992c50(auStack_1b8);
      cVar1 = FUN_1429936c0(lVar3 + 0xe8,auStack_78);
      if (cVar1 == '\0') {
        FUN_142aeec30(param_1,0);
        FUN_1429932e0(auStack_1b8);
        return param_1;
      }
    }
    lVar3 = FUN_142992c50(auStack_1b8);
    pbStack_180 = (byte *)(lVar3 + 0x1a8);
    *pbStack_180 = *pbStack_180 | 4;
    FUN_142992e50(param_1,auStack_1b8);
    FUN_1429932e0(auStack_1b8);
  }
  else {
    lVar3 = FUN_142992c50(auStack_1b8);
    *(undefined *)(lVar3 + 0x3b) = *(undefined *)(param_2 + 0x3b);
    uStack_108 = (ulonglong)*(byte *)(param_2 + 0x3b);
    lStack_100 = param_2 + 0x3c;
    lVar3 = FUN_142992c50(auStack_1b8);
    FUN_142af0350(lVar3 + 0x3c,lStack_100,uStack_108);
    lVar3 = FUN_142992c50(auStack_1b8);
    *(undefined2 *)(lVar3 + 6) = *(undefined2 *)(param_2 + 6);
    uStack_f8 = (ulonglong)*(byte *)(param_2 + 0x168);
    lStack_f0 = param_2 + 0x128;
    lVar3 = FUN_142992c50(auStack_1b8);
    FUN_142af0350(lVar3 + 0x128,lStack_f0,uStack_f8);
    lVar3 = FUN_142992c50(auStack_1b8);
    *(undefined *)(lVar3 + 0x168) = *(undefined *)(param_2 + 0x168);
    lVar3 = FUN_142992c50(auStack_1b8);
    *(undefined4 *)(lVar3 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
    lVar3 = FUN_142992c50(auStack_1b8);
    *(undefined4 *)(lVar3 + 0x170) = *(undefined4 *)(param_2 + 0x170);
    lVar3 = FUN_142992c50(auStack_1b8);
    *(undefined4 *)(lVar3 + 0x174) = *(undefined4 *)(param_2 + 0x174);
    lVar3 = FUN_142992c50(auStack_1b8);
    pbStack_190 = (byte *)(lVar3 + 0x1a8);
    *pbStack_190 = *pbStack_190 & 0xfe | *(byte *)(param_2 + 0x1a8) & 1;
    lVar3 = FUN_142992c50(auStack_1b8);
    pbStack_188 = (byte *)(lVar3 + 0x1a8);
    *pbStack_188 = *pbStack_188 & 0xbf | (*(byte *)(param_2 + 0x1a8) >> 6 & 1) << 6;
    puStack_e8 = auStack_68;
    puVar4 = (undefined *)FUN_142994db0(puStack_e8,param_2 + 0x178);
    puVar5 = auStack_b8;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_142992c50(auStack_1b8);
    cVar1 = FUN_1429936c0(lVar3 + 0x178,auStack_b8);
    if (cVar1 != '\0') {
      puStack_e0 = auStack_58;
      puVar4 = (undefined *)FUN_142994db0(puStack_e0,param_2 + 0x1b0);
      puVar5 = auStack_a8;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      lVar3 = FUN_142992c50(auStack_1b8);
      cVar1 = FUN_1429936c0(lVar3 + 0x1b0,auStack_a8);
      if (cVar1 != '\0') {
        puStack_d8 = auStack_48;
        puVar4 = (undefined *)FUN_142994db0(puStack_d8,param_2 + 0x188);
        puVar5 = auStack_98;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        lVar3 = FUN_142992c50(auStack_1b8);
        cVar1 = FUN_1429936c0(lVar3 + 0x188,auStack_98);
        if (cVar1 != '\0') {
          puStack_d0 = auStack_38;
          puVar4 = (undefined *)FUN_142994db0(puStack_d0,param_2 + 0x198);
          puVar5 = auStack_88;
          for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          lVar3 = FUN_142992c50(auStack_1b8);
          cVar1 = FUN_1429936c0(lVar3 + 0x198,auStack_88);
          if (cVar1 != '\0') goto LAB_142af1e67;
        }
      }
    }
    FUN_142aeec30(param_1,0);
    FUN_1429932e0(auStack_1b8);
  }
  return param_1;
}


/* address=142af1f60 name=FUN_142af1f60 */

void FUN_142af1f60(undefined8 param_1,longlong param_2)

{
  undefined auStack_48 [32];
  ulonglong uStack_28;
  ulonglong auStack_20 [2];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_48;
  FUN_1429910e0(param_1,auStack_20);
  if (auStack_20[0] < *(ulonglong *)(param_2 + 0xc0)) {
    *(ulonglong *)(param_2 + 0xc0) = auStack_20[0];
    *(undefined4 *)(param_2 + 0xb4) = 0;
    *(undefined4 *)(param_2 + 0xb8) = 0;
  }
  else {
    uStack_28 = auStack_20[0] - *(longlong *)(param_2 + 0xc0);
    *(ulonglong *)(param_2 + 0xc0) = auStack_20[0];
    if (*(uint *)(param_2 + 0xb4) < uStack_28) {
      *(undefined4 *)(param_2 + 0xb4) = 0;
    }
    else {
      *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) - (int)uStack_28;
    }
    if (*(uint *)(param_2 + 0xb8) < uStack_28) {
      *(undefined4 *)(param_2 + 0xb8) = 0;
    }
    else {
      *(int *)(param_2 + 0xb8) = *(int *)(param_2 + 0xb8) - (int)uStack_28;
    }
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_48);
  return;
}


/* address=142af20a0 name=FUN_142af20a0 */

void FUN_142af20a0(undefined8 param_1,longlong param_2,uint param_3)

{
  FUN_142af1f60(param_1,param_2);
  if ((*(uint *)(param_2 + 0xb4) <= param_3) &&
     (*(uint *)(param_2 + 0xb4) = param_3, *(uint *)(param_2 + 0xb8) < *(uint *)(param_2 + 0xb4))) {
    *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_2 + 0xb8);
  }
  return;
}


/* address=142af2120 name=FUN_142af2120 */

void FUN_142af2120(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_98 [32];
  char cStack_78;
  longlong lStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  auStack_58 [8];
  undefined auStack_50 [8];
  undefined auStack_48 [8];
  undefined *puStack_40;
  undefined auStack_38 [8];
  undefined auStack_30 [8];
  undefined auStack_28 [8];
  undefined8 auStack_20 [2];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_98;
  lStack_70 = FUN_142992c50(param_1 + 0x70);
  uStack_60 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x1d0);
  iVar1 = FUN_1429894e0(param_1);
  if (iVar1 == 0) {
    uStack_68 = 1;
  }
  else {
    uStack_68 = 2;
  }
  uStack_64 = uStack_68;
  iVar1 = FUN_142aef950(uStack_60);
  if ((iVar1 != 0) && ((*(uint *)(lStack_70 + 0x5c) & uStack_64) == uStack_64)) {
    if (((*(byte *)(param_1 + 0xa4) & 1) != 0) && ((*(uint *)(lStack_70 + 0x5c) & 0x200) == 0)) {
      uVar2 = FUN_142993280(auStack_48,uStack_60);
      FUN_142992e50(auStack_50,uVar2);
      FUN_1429932e0(auStack_48);
      cStack_78 = '\0';
      FUN_142aef080(auStack_38,lStack_70 + 0x10);
      puStack_40 = auStack_28;
      uVar2 = FUN_142992cb0(auStack_50);
      uVar2 = FUN_142992e50(puStack_40,uVar2);
      FUN_142af37c0(lStack_70,uVar2);
      if (((*(uint *)(lStack_70 + 0x5c) & 0x80) == 0) &&
         (*(int *)(lStack_70 + 0x58) = *(int *)(lStack_70 + 0x58) + 1,
         0xfe < *(int *)(lStack_70 + 0x58))) {
        cStack_78 = '\x01';
        *(undefined4 *)(lStack_70 + 0x58) = 0;
      }
      FUN_142aef0e0(auStack_38);
      if (cStack_78 != '\0') {
        FUN_1429910e0(param_1,auStack_20);
        FUN_142aefdb0(lStack_70,auStack_20[0]);
      }
      FUN_1429932e0(auStack_50);
    }
    if (*(longlong *)(lStack_70 + 0x68) != 0) {
      uVar2 = FUN_142993280(auStack_30,uStack_60);
      FUN_142992e50(auStack_58,uVar2);
      FUN_1429932e0(auStack_30);
      uVar2 = FUN_142992c50(auStack_58);
      iVar1 = (**(code **)(lStack_70 + 0x68))(param_1,uVar2);
      if (iVar1 != 0) {
        std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
        ::release(auStack_58);
      }
      FUN_1429932e0(auStack_58);
    }
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_98);
  return;
}


/* address=142af2380 name=FUN_142af2380 */

undefined4 * FUN_142af2380(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 1;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined *)((longlong)param_1 + 10) = 0;
  puVar3 = (undefined *)((longlong)param_1 + 0xb);
  for (lVar2 = 0x30; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined *)((longlong)param_1 + 0x3b) = 0;
  puVar4 = param_1 + 0xf;
  for (lVar2 = 0x20; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined *)puVar4 = 0;
    puVar4 = (undefined4 *)((longlong)puVar4 + 1);
  }
  *(undefined *)(param_1 + 0x17) = 0;
  puVar3 = (undefined *)((longlong)param_1 + 0x5d);
  for (lVar2 = 0x20; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_142994b40(param_1 + 0x20);
  FUN_142994b40(param_1 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = param_2;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0x41;
  param_1[0x2d] = 0x1c20;
  param_1[0x2e] = 0x1c20;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_142993420(param_1 + 0x3a);
  FUN_142994b40(param_1 + 0x3e);
  FUN_142994b40(param_1 + 0x40);
  puVar4 = param_1 + 0x42;
  for (lVar2 = 0x20; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined *)puVar4 = 0;
    puVar4 = (undefined4 *)((longlong)puVar4 + 1);
  }
  puVar4 = param_1 + 0x4a;
  for (lVar2 = 0x40; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined *)puVar4 = 0;
    puVar4 = (undefined4 *)((longlong)puVar4 + 1);
  }
  *(undefined *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_142993420(param_1 + 0x5e);
  FUN_142993420(param_1 + 0x62);
  FUN_142993420(param_1 + 0x66);
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfe;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfd;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xfb;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xf7;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xef;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xdf;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xbf;
  FUN_142993420(param_1 + 0x6c);
  FUN_142b82340(param_1 + 0x34);
  uVar1 = FUN_142aef3d0(0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return param_1;
}


/* address=142af26c0 name=FUN_142af26c0 */

void FUN_142af26c0(longlong param_1)

{
  FUN_142b82360(&DAT_143cb3d00,param_1,param_1 + 0xd0);
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x40))(param_1);
  FUN_1429934a0(param_1 + 0x1b0);
  FUN_1429934a0(param_1 + 0x198);
  FUN_1429934a0(param_1 + 0x188);
  FUN_1429934a0(param_1 + 0x178);
  FUN_142aee980(param_1 + 0x100);
  FUN_142aee980(param_1 + 0xf8);
  FUN_1429934a0(param_1 + 0xe8);
  FUN_142993aa0(param_1 + 0x88);
  FUN_142993a10(param_1 + 0x80);
  return;
}


/* address=142af27c0 name=FUN_142af27c0 */

void FUN_142af27c0(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0xe0) != 0) && (*(longlong *)(param_2 + 0xd8) != 0)) {
    if (*(longlong *)(param_2 + 0xe0) == param_1 + 0x50) {
      if (*(longlong *)(param_2 + 0xd8) == param_1 + 0x48) {
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0xd8);
        *(longlong *)(*(longlong *)(param_2 + 0xd8) + 0xe0) = param_1 + 0x50;
      }
    }
    else if (*(longlong *)(param_2 + 0xd8) == param_1 + 0x48) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0xe0);
      *(longlong *)(*(longlong *)(param_2 + 0xe0) + 0xd8) = param_1 + 0x48;
    }
    else {
      *(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
      *(undefined8 *)(*(longlong *)(param_2 + 0xd8) + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    }
    *(undefined8 *)(param_2 + 0xe0) = 0;
    *(undefined8 *)(param_2 + 0xd8) = 0;
  }
  return;
}


/* address=142af2920 name=FUN_142af2920 */

void FUN_142af2920(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0xe0) != 0) && (*(longlong *)(param_2 + 0xd8) != 0)) {
    FUN_142af27c0(param_1,param_2);
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    *(longlong *)(param_1 + 0x48) = param_2;
    *(longlong *)(param_1 + 0x50) = param_2;
    *(longlong *)(param_2 + 0xd8) = param_1 + 0x48;
    *(longlong *)(param_2 + 0xe0) = param_1 + 0x50;
  }
  else {
    *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_1 + 0x48);
    *(longlong *)(*(longlong *)(param_2 + 0xe0) + 0xd8) = param_2;
    *(longlong *)(param_2 + 0xd8) = param_1 + 0x48;
    *(longlong *)(param_1 + 0x48) = param_2;
  }
  return;
}


/* address=142af2a10 name=FUN_142af2a10 */

undefined8 FUN_142af2a10(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06c00(param_2);
  return param_2;
}


/* address=142af2a60 name=FUN_142af2a60 */

undefined * FUN_142af2a60(void)

{
  return &LAB_142af2a40;
}


/* address=142af2a80 name=FUN_142af2a80 */

void FUN_142af2a80(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined4 uStackX_20;
  undefined auStack_218 [32];
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  int aiStack_1e8 [2];
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined auStack_198 [8];
  undefined *puStack_190;
  longlong lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined auStack_148 [112];
  undefined auStack_d8 [160];
  undefined auStack_38 [16];
  undefined auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_218;
  FUN_142af3ed0(auStack_d8);
  FUN_142af3f20(auStack_148);
  if (0xff7f < param_4) {
    sVar4 = strlen("TICKET TOO LARGE");
    uStack_1c8 = FUN_142b7ad30(param_2,"TICKET TOO LARGE",sVar4);
    FUN_142af3f50(auStack_148);
    FUN_142af3f00(auStack_d8);
    goto LAB_142af3093;
  }
  lStack_1e0 = FUN_142992c50(*param_1 + 0x70);
  if (*(longlong *)(lStack_1e0 + 0x150) == 0) {
    cVar1 = FUN_142af0950(lStack_1e0);
    if (cVar1 == '\0') {
      uStack_1c0 = 0;
      FUN_142af3f50(auStack_148);
      FUN_142af3f00(auStack_d8);
      goto LAB_142af3093;
    }
    FUN_142994f30(auStack_198,lStack_1e0 + 0x10);
    iVar2 = FUN_142b3b560(auStack_38,0x10);
    if (iVar2 != 0) {
      lStack_188 = FUN_142992c50(lStack_1e0 + 0x140);
      lStack_188 = lStack_188 + 0x20;
      uStack_180 = FUN_142b3d450();
      uVar5 = FUN_142992cb0(auStack_d8);
      uStack_1f8 = auStack_38;
      iVar2 = FUN_142b3dbf0(uVar5,uStack_180,0,lStack_188);
      if (iVar2 != 0) {
        uStack_178 = FUN_142b11c20();
        lStack_170 = FUN_142992c50(lStack_1e0 + 0x140);
        lStack_170 = lStack_170 + 0x10;
        uVar5 = FUN_142992cb0(auStack_148);
        uStack_1f8 = (undefined *)0x0;
        iVar2 = FUN_142b12960(uVar5,lStack_170,0x10,uStack_178);
        if (iVar2 != 0) {
          uVar5 = FUN_142992c50(lStack_1e0 + 0x140);
          FUN_142af0350(auStack_28,uVar5,0x10);
          FUN_142994f90(auStack_198);
          goto LAB_142af2d95;
        }
      }
    }
    uStack_1bc = 0;
    FUN_142994f90(auStack_198);
    FUN_142af3f50(auStack_148);
    FUN_142af3f00(auStack_d8);
    goto LAB_142af3093;
  }
  puStack_190 = (undefined *)FUN_142992cb0(auStack_148);
  uVar5 = FUN_142992cb0(auStack_d8);
  uStack_1f0 = 1;
  uStack_1f8 = puStack_190;
  iVar2 = (**(code **)(lStack_1e0 + 0x150))(*param_1,auStack_28,auStack_38,uVar5);
  if (iVar2 < 0) {
    uStack_1c4 = 0;
    FUN_142af3f50(auStack_148);
    FUN_142af3f00(auStack_d8);
    goto LAB_142af3093;
  }
LAB_142af2d95:
  iVar2 = FUN_142b7ad30(param_2,auStack_28,0x10);
  if (iVar2 != 0) {
    uVar5 = FUN_142992cb0(auStack_d8);
    uVar3 = FUN_142b3ea80(uVar5);
    iVar2 = FUN_142b7ad30(param_2,auStack_38,uVar3);
    if ((iVar2 != 0) && (iVar2 = FUN_142b7ae40(param_2,&lStack_1d0,param_4 + 0x20), iVar2 != 0)) {
      lStack_1d8 = 0;
      lStack_168 = lStack_1d0;
      uVar5 = FUN_142992cb0(auStack_d8);
      uStackX_20 = (undefined4)param_4;
      uStack_1f8 = (undefined *)CONCAT44(uStack_1f8._4_4_,uStackX_20);
      iVar2 = FUN_142b3dc90(uVar5,lStack_168,aiStack_1e8,param_3);
      if (iVar2 == 0) {
        uStack_1b4 = 0;
        FUN_142af3f50(auStack_148);
        FUN_142af3f00(auStack_d8);
      }
      else {
        lStack_1d8 = lStack_1d8 + aiStack_1e8[0];
        lStack_160 = lStack_1d0 + lStack_1d8;
        uVar5 = FUN_142992cb0(auStack_d8);
        iVar2 = FUN_142b3e190(uVar5,lStack_160,aiStack_1e8);
        if (iVar2 == 0) {
          uStack_1b0 = 0;
          FUN_142af3f50(auStack_148);
          FUN_142af3f00(auStack_d8);
        }
        else {
          lStack_1d8 = lStack_1d8 + aiStack_1e8[0];
          iVar2 = FUN_142b7aea0(param_2,lStack_1d8);
          if (iVar2 == 0) {
            uStack_1ac = 0;
            FUN_142af3f50(auStack_148);
            FUN_142af3f00(auStack_d8);
          }
          else {
            uStack_158 = FUN_142b7ab20(param_2);
            uStack_150 = FUN_142b7aaa0(param_2);
            uVar5 = FUN_142992cb0(auStack_148);
            iVar2 = FUN_142b12cc0(uVar5,uStack_150,uStack_158);
            if ((iVar2 != 0) && (iVar2 = FUN_142b7ae40(param_2,&lStack_1d0,0x40), iVar2 != 0)) {
              uVar5 = FUN_142992cb0(auStack_148);
              iVar2 = FUN_142b12d00(uVar5,lStack_1d0,&uStack_1a8);
              if ((iVar2 != 0) && (iVar2 = FUN_142b7aea0(param_2,uStack_1a8), iVar2 != 0)) {
                uStack_1a0 = 1;
                FUN_142af3f50(auStack_148);
                FUN_142af3f00(auStack_d8);
                goto LAB_142af3093;
              }
            }
            uStack_1a4 = 0;
            FUN_142af3f50(auStack_148);
            FUN_142af3f00(auStack_d8);
          }
        }
      }
      goto LAB_142af3093;
    }
  }
  uStack_1b8 = 0;
  FUN_142af3f50(auStack_148);
  FUN_142af3f00(auStack_d8);
LAB_142af3093:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_218);
  return;
}


/* address=142af30c0 name=FUN_142af30c0 */

undefined8 FUN_142af30c0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  code **ppcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  undefined8 uStack_18;
  undefined8 auStack_10 [2];
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar1 = *param_1;
  lVar4 = FUN_142992c50(lVar1 + 0x70);
  ppcVar2 = *(code ***)(lVar4 + 0x208);
  uVar5 = (**ppcVar2)(lVar1);
  uVar7 = param_4 + uVar5;
  if (uVar7 < uVar5) {
    FUN_142afa690(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_session.cc"
                  ,CONCAT44(uVar8,0x21c));
    uVar6 = 0;
  }
  else {
    iVar3 = FUN_142b7ae40(param_2,&uStack_18,uVar7);
    if (iVar3 == 0) {
      uVar6 = 0;
    }
    else {
      iVar3 = (*ppcVar2[1])(lVar1,uStack_18,auStack_10,uVar7,param_3,param_4);
      if (iVar3 == 0) {
        FUN_142afa690(0x10,0,0x114,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_session.cc"
                      ,0x228);
        uVar6 = 0;
      }
      else {
        iVar3 = FUN_142b7aea0(param_2,auStack_10[0]);
        if (iVar3 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 1;
        }
      }
    }
  }
  return uVar6;
}


/* address=142af3210 name=FUN_142af3210 */

undefined4 FUN_142af3210(longlong *param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  auStack_98 [8];
  longlong lStack_90;
  undefined auStack_88 [4];
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined auStack_68 [8];
  undefined auStack_60 [8];
  ulonglong uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined auStack_28 [24];
  
  lStack_90 = *param_1;
  FUN_142993320(param_2,0);
  cVar1 = FUN_142992f70(param_3);
  if ((cVar1 != '\0') || (uVar2 = FUN_142992f60(param_3), 0x20 < uVar2)) {
    return 1;
  }
  FUN_142994b40(auStack_98);
  lVar3 = FUN_142992c50(lStack_90 + 0x70);
  if ((*(uint *)(lVar3 + 0x5c) & 0x100) == 0) {
    puVar5 = param_3;
    puVar6 = auStack_28;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uStack_80 = FUN_142af0d20(auStack_28);
    puVar5 = auStack_88;
    for (lVar3 = 1; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_142992c50(lStack_90 + 0x70);
    FUN_142994f30(auStack_60,lVar3 + 0x10);
    uStack_70 = FUN_142af3680(auStack_88 + 1);
    lVar3 = FUN_142992c50(lStack_90 + 0x70);
    uVar4 = FUN_142af3c40(*(undefined8 *)(lVar3 + 0x38),param_3,uStack_80,uStack_70);
    uVar4 = FUN_142993280(auStack_68,uVar4);
    FUN_1429950b0(auStack_98,uVar4);
    FUN_1429932e0(auStack_68);
    FUN_142994f90(auStack_60);
  }
  cVar1 = FUN_142993030(auStack_98);
  if ((cVar1 == '\0') && (lVar3 = FUN_142992c50(lStack_90 + 0x70), *(longlong *)(lVar3 + 0x78) != 0)
     ) {
    iStack_84 = 1;
    uStack_58 = FUN_142992f60(param_3);
    uStack_50 = FUN_142992c50(param_3);
    lVar3 = FUN_142992c50(lStack_90 + 0x70);
    uVar4 = (**(code **)(lVar3 + 0x78))(lStack_90,uStack_50,uStack_58 & 0xffffffff,&iStack_84);
    FUN_142993320(auStack_98,uVar4);
    cVar1 = FUN_142993030(auStack_98);
    if (cVar1 == '\0') {
      uStack_7c = 1;
      FUN_1429932e0(auStack_98);
      return uStack_7c;
    }
    lStack_48 = FUN_142992c50(auStack_98);
    lVar3 = FUN_142aefef0();
    if (lStack_48 == lVar3) {
      std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
      release(auStack_98);
      uStack_78 = 10;
      FUN_1429932e0(auStack_98);
      return uStack_78;
    }
    if (iStack_84 != 0) {
      uVar4 = FUN_142992c50(auStack_98);
      FUN_142aef440(uVar4);
    }
    lVar3 = FUN_142992c50(lStack_90 + 0x70);
    if ((*(uint *)(lVar3 + 0x5c) & 0x200) == 0) {
      uStack_40 = FUN_142992c50(auStack_98);
      uVar4 = FUN_142992c50(lStack_90 + 0x70);
      FUN_142aefcd0(uVar4,uStack_40);
    }
  }
  cVar1 = FUN_142993030(auStack_98);
  if (cVar1 != '\0') {
    uVar4 = FUN_142992c50(auStack_98);
    cVar1 = FUN_142af0ef0(lStack_90,uVar4);
    if (cVar1 == '\0') {
      uStack_38 = FUN_142992c50(auStack_98);
      uVar4 = FUN_142992c50(lStack_90 + 0x70);
      FUN_142aefd80(uVar4,uStack_38);
      FUN_142993320(auStack_98,0);
    }
  }
  uVar4 = FUN_142992cb0(auStack_98);
  FUN_1429950b0(param_2,uVar4);
  uStack_74 = 1;
  FUN_1429932e0(auStack_98);
  return uStack_74;
}


/* address=142af3590 name=FUN_142af3590 */

bool FUN_142af3590(undefined8 param_1,undefined *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined auStack_60 [16];
  undefined auStack_50 [24];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  puVar3 = auStack_50;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_142992fc0(auStack_60,param_3 + 0x3c,*(undefined *)(param_3 + 0x3b));
  puVar3 = auStack_60;
  puVar4 = auStack_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = auStack_50;
  puVar4 = auStack_28;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  cVar1 = FUN_142af3a00(auStack_28,auStack_38);
  return cVar1 == '\0';
}


/* address=142af3680 name=FUN_142af3680 */

undefined * FUN_142af3680(void)

{
  return &LAB_142af3650;
}


/* address=142af36a0 name=FUN_142af36a0 */

ulonglong FUN_142af36a0(longlong param_1,longlong param_2,char param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  bool bVar2;
  longlong lStack_10;
  
  if ((param_2 == 0) || (in_RAX = 0, *(char *)(param_2 + 0x3b) == '\0')) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if (param_3 != '\0') {
      FUN_142b81aa0(param_1 + 0x10);
    }
    lStack_10 = FUN_142af3bd0(*(undefined8 *)(param_1 + 0x38),param_2);
    bVar2 = lStack_10 == param_2;
    if (bVar2) {
      lStack_10 = FUN_142af3cf0(*(undefined8 *)(param_1 + 0x38),param_2);
      FUN_142af27c0(param_1,param_2);
    }
    if (param_3 != '\0') {
      FUN_142b81ae0(param_1 + 0x10);
    }
    if (bVar2) {
      if (*(longlong *)(param_1 + 0x70) != 0) {
        (**(code **)(param_1 + 0x70))(param_1,lStack_10);
      }
      FUN_142aef470(lStack_10);
    }
    uVar1 = (ulonglong)bVar2;
  }
  return uVar1;
}


/* address=142af37c0 name=FUN_142af37c0 */

undefined FUN_142af37c0(longlong param_1,
                       unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                       *param_2)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lStack_20;
  longlong lStack_18;
  ulonglong uStack_10;
  
  lStack_18 = FUN_142992c50(param_2);
  iVar3 = FUN_142af3c90(*(undefined8 *)(param_1 + 0x38),&lStack_20,lStack_18);
  if (iVar3 == 0) {
    FUN_1429932e0(param_2);
    uVar1 = 0;
  }
  else {
    std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
    release(param_2);
    FUN_142993320(param_2,lStack_20);
    if (lStack_20 != 0) {
      if (lStack_20 == lStack_18) {
        FUN_1429932e0(param_2);
        return 0;
      }
      FUN_142af27c0(param_1,lStack_20);
    }
    FUN_142af2920(param_1,lStack_18);
    iVar3 = FUN_14298bc90(param_1);
    if (iVar3 != 0) {
      do {
        uStack_10 = FUN_142993c90(*(undefined8 *)(param_1 + 0x38));
        uVar4 = FUN_14298bc90(param_1);
        if (uStack_10 <= uVar4) break;
        cVar2 = FUN_142af36a0(param_1,*(undefined8 *)(param_1 + 0x50),0);
      } while (cVar2 != '\0');
    }
    FUN_1429932e0(param_2);
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142af39c0 name=FUN_142af39c0 */

undefined8 FUN_142af39c0(undefined8 *param_1,undefined8 param_2)

{
  FUN_142992fc0(param_2,*param_1,param_1[1]);
  return param_2;
}


/* address=142af3a00 name=FUN_142af3a00 */

undefined8 FUN_142af3a00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcStack_28;
  char *pcStack_20;
  
  lVar1 = FUN_142992f60(param_1);
  lVar2 = FUN_142992f60(param_2);
  if (lVar1 == lVar2) {
    pcStack_28 = (char *)FUN_142992c50(param_1);
    for (pcStack_20 = (char *)FUN_142992c50(param_2);
        (pcVar4 = (char *)FUN_142992fa0(param_1), pcStack_28 != pcVar4 &&
        (pcVar4 = (char *)FUN_142992fa0(param_2), pcStack_20 != pcVar4));
        pcStack_20 = pcStack_20 + 1) {
      if (*pcStack_28 != *pcStack_20) {
        return 0;
      }
      pcStack_28 = pcStack_28 + 1;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* address=142af3ac0 name=FUN_142af3ac0 */

longlong FUN_142af3ac0(longlong *param_1,ulonglong param_2)

{
  if ((ulonglong)param_1[1] <= param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *param_1 + param_2;
}


/* address=142af3b00 name=FUN_142af3b00 */

void FUN_142af3b00(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *ap_StackX_10 [3];
  
  ap_StackX_10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,ap_StackX_10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_142992cb0(param_1);
    FUN_142aef250(uVar2,p_Var1);
  }
  return;
}


/* address=142af3b50 name=FUN_142af3b50 */

undefined8 FUN_142af3b50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auStack_18 [24];
  
  uVar1 = FUN_142992c50(param_2);
  uVar1 = FUN_142aee920(auStack_18,uVar1);
  FUN_142992e50(param_1,uVar1);
  FUN_142aee980(auStack_18);
  return param_1;
}


/* address=142af3bd0 name=FUN_142af3bd0 */

void FUN_142af3bd0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b827e0(param_1,param_2,&LAB_142aeea30,&LAB_142af3ba0);
  return;
}


/* address=142af3c40 name=FUN_142af3c40 */

void FUN_142af3c40(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_18 = param_4;
  uStack_10 = param_2;
  FUN_142b82860(param_1,&uStack_18,param_3,&LAB_142af3c00);
  return;
}


/* address=142af3c90 name=FUN_142af3c90 */

undefined4 FUN_142af3c90(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 auStack_10 [2];
  
  auStack_10[0] = 0;
  uVar1 = FUN_142b828d0(param_1,auStack_10,param_3,&LAB_142aeea30,&LAB_142af3ba0);
  *param_2 = auStack_10[0];
  return uVar1;
}


/* address=142af3cf0 name=FUN_142af3cf0 */

void FUN_142af3cf0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b829d0(param_1,param_2,&LAB_142aeea30,&LAB_142af3ba0);
  return;
}


/* address=142af3d60 name=FUN_142af3d60 */

void FUN_142af3d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_18 = param_2;
  uStack_10 = param_3;
  FUN_142b82a80(param_1,&LAB_142af3d20,&uStack_18);
  return;
}


/* address=142af3db0 name=FUN_142af3db0 */

undefined8 FUN_142af3db0(undefined8 param_1,uint param_2)

{
  FUN_142af26c0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_142cacf70(param_1,0x1c0);
  }
  return param_1;
}


/* address=142af3df0 name=FUN_142af3df0 */

undefined8 FUN_142af3df0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auStack_18 [24];
  
  uVar1 = FUN_142992cb0(param_2);
  uVar1 = FUN_142af3f70(uVar1);
  uVar1 = FUN_142992e20(auStack_18,uVar1);
  FUN_142992e50(param_1,uVar1);
  FUN_1429932e0(auStack_18);
  return param_1;
}


/* address=142af3e40 name=FUN_142af3e40 */

undefined8 FUN_142af3e40(undefined8 param_1,undefined8 param_2)

{
  FUN_142992f30(param_1,param_2,4);
  return param_1;
}


/* address=142af3e70 name=FUN_142af3e70 */

undefined8
FUN_142af3e70(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_142af3b00(param_1,p_Var1);
  uVar2 = FUN_142992cb0(param_2);
  FUN_142992cb0(uVar2);
  FUN_142992cb0(param_1);
  return param_1;
}


/* address=142af3ed0 name=FUN_142af3ed0 */

undefined8 FUN_142af3ed0(undefined8 param_1)

{
  FUN_142b3d5a0(param_1);
  return param_1;
}


/* address=142af3f00 name=FUN_142af3f00 */

void FUN_142af3f00(undefined8 param_1)

{
  FUN_142b3d610(param_1);
  return;
}


/* address=142af3f20 name=FUN_142af3f20 */

undefined8 FUN_142af3f20(undefined8 param_1)

{
  FUN_142b127c0(param_1);
  return param_1;
}


/* address=142af3f50 name=FUN_142af3f50 */

void FUN_142af3f50(undefined8 param_1)

{
  FUN_142b12860(param_1);
  return;
}


/* address=142af3f70 name=FUN_142af3f70 */

undefined8 FUN_142af3f70(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_142b0e970(0x1c0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142992bb0(0x1c0,lVar1);
    puVar3 = (undefined8 *)FUN_142992cb0(param_1);
    uVar2 = FUN_142af2380(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=142af4650 name=FUN_142af4650 */

undefined4 FUN_142af4650(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong lStack_20;
  
  uStack_24 = 0;
  uVar2 = FUN_142c08ac0();
  lVar3 = FUN_142b6bca0(uVar2);
  if (lVar3 == 0) {
    FUN_142afa690(0x10,0,7,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                  ,0x1ba);
  }
  else {
    iVar1 = FUN_142c08ca0(lVar3,param_2);
    if (iVar1 < 1) {
      FUN_142afa690(0x10,0,2,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                    ,0x1bf);
    }
    else {
      if (param_3 == 1) {
        uStack_28 = 9;
        lStack_20 = FUN_142c0bac0(lVar3,0,*(undefined8 *)(param_1 + 0xa0),
                                  *(undefined8 *)(param_1 + 0xa8));
      }
      else {
        if (param_3 != 2) {
          FUN_142afa690(0x10,0,0x75,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                        ,0x1cb);
          goto LAB_142af47c6;
        }
        uStack_28 = 0xc;
        lStack_20 = FUN_142b74390(lVar3,0);
      }
      if (lStack_20 == 0) {
        FUN_142afa690(0x10,0,uStack_28,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                      ,0x1d0);
      }
      else {
        uStack_24 = FUN_142b0b820(param_1,lStack_20);
        FUN_142b0fae0(lStack_20);
      }
    }
  }
LAB_142af47c6:
  FUN_142b6bd40(lVar3);
  return uStack_24;
}


/* address=142af4990 name=FUN_142af4990 */

int FUN_142af4990(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iStack_38;
  longlong lStack_20;
  
  iStack_38 = 0;
  lStack_20 = 0;
  FUN_142afa330();
  uVar3 = FUN_142c08ac0();
  lVar4 = FUN_142b6bca0(uVar3);
  if (lVar4 == 0) {
    FUN_142afa690(0x10,0,7,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                  ,0x1e7);
  }
  else {
    iVar1 = FUN_142c08ca0(lVar4,param_2);
    if (iVar1 < 1) {
      FUN_142afa690(0x10,0,2,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                    ,0x1ec);
    }
    else {
      lStack_20 = FUN_142c09680(lVar4,0,*(undefined8 *)(param_1 + 0xa0),
                                *(undefined8 *)(param_1 + 0xa8));
      if (lStack_20 == 0) {
        FUN_142afa690(0x10,0,9,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_file.cc"
                      ,499);
      }
      else {
        iStack_38 = FUN_142aea4c0(param_1,lStack_20);
        iVar1 = FUN_142af9d60();
        if (iVar1 != 0) {
          iStack_38 = 0;
        }
        if (iStack_38 != 0) {
          FUN_142aea8c0(param_1);
          do {
            lVar5 = FUN_142c09400(lVar4,0,*(undefined8 *)(param_1 + 0xa0),
                                  *(undefined8 *)(param_1 + 0xa8));
            if (lVar5 == 0) {
              uVar2 = FUN_142af9e20();
              iVar1 = FUN_142992bd0(uVar2);
              if ((iVar1 == 9) && (iVar1 = FUN_142af5260(uVar2), iVar1 == 0x6e)) {
                FUN_142afa330();
              }
              else {
                iStack_38 = 0;
              }
              goto LAB_142af4b68;
            }
            iVar1 = FUN_142aea700(param_1);
          } while (iVar1 != 0);
          FUN_142af5df0(lVar5);
          iStack_38 = 0;
        }
      }
    }
  }
LAB_142af4b68:
  FUN_142af5df0(lStack_20);
  FUN_142b6bd40(lVar4);
  return iStack_38;
}


/* address=142af4dd0 name=FUN_142af4dd0 */

void FUN_142af4dd0(undefined8 param_1,undefined8 param_2)

{
  FUN_142af4e30(param_1,param_2,1);
  return;
}


/* address=142af4e30 name=FUN_142af4e30 */

undefined4 FUN_142af4e30(undefined8 param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined auStack_a0 [8];
  undefined auStack_98 [8];
  ulonglong uStack_90;
  undefined auStack_88 [8];
  undefined auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined auStack_18 [8];
  undefined auStack_10 [16];
  
  uVar4 = FUN_142af52b0(&LAB_142af4e00);
  FUN_142992e20(auStack_a0,uVar4);
  cVar2 = operator==<>(auStack_a0,0);
  if (cVar2 == '\0') {
    uStack_50 = param_1;
    uStack_48 = FUN_142af5360(param_1,&LAB_142af4e00);
    FUN_142af5340(param_1);
    bVar1 = true;
    while( true ) {
      FUN_142c09400(param_2,0,0,0);
      FUN_142992e20(auStack_98);
      cVar2 = operator==<>(auStack_98);
      if (cVar2 != '\0') break;
      bVar1 = false;
      uVar4 = FUN_142992c50(auStack_98);
      uStack_60 = FUN_142c04a70(uVar4);
      iVar3 = FUN_142af5300(param_1);
      if (iVar3 == 0) {
        uVar4 = FUN_142c054d0(uStack_60);
        FUN_142992e20(auStack_80,uVar4);
        cVar2 = operator==<>(auStack_80,0);
        if (cVar2 != '\0') {
LAB_142af501d:
          uStack_70 = 0;
          FUN_142aeeea0(auStack_80);
          FUN_142aeeb10(auStack_98);
          FUN_142af5230(&uStack_50);
          FUN_142aef100(auStack_a0);
          return uStack_70;
        }
        puStack_40 = auStack_18;
        uVar4 = FUN_142992cb0(auStack_80);
        uStack_38 = FUN_142992e50(puStack_40,uVar4);
        uVar4 = FUN_142992c50(auStack_a0);
        cVar2 = FUN_142aef140(uVar4);
        if (cVar2 == '\0') goto LAB_142af501d;
        FUN_142aeeea0(auStack_80);
        FUN_142aeeb10(auStack_98);
      }
      else {
        FUN_142aeeb10(auStack_98);
      }
    }
    if ((bVar1) && (param_3 == '\0')) {
      uStack_74 = 0;
      FUN_142aeeb10(auStack_98);
      FUN_142af5230(&uStack_50);
      FUN_142aef100(auStack_a0);
      uStack_78 = uStack_74;
    }
    else {
      FUN_142afa330();
      FUN_142aeeb10(auStack_98);
      uVar4 = FUN_142992c50(auStack_a0);
      FUN_142af5340(uVar4);
      uVar4 = FUN_142992c50(auStack_a0);
      uStack_58 = FUN_142993080(uVar4);
      for (uStack_90 = 0; uStack_90 < uStack_58; uStack_90 = uStack_90 + 1) {
        uVar4 = FUN_142992c50(auStack_a0);
        uVar4 = FUN_1429930a0(uVar4,uStack_90);
        FUN_142992e20(auStack_88,uVar4);
        uVar4 = FUN_142992c50(auStack_a0);
        FUN_142af52d0(uVar4,uStack_90,0);
        if (uStack_90 + 1 < uStack_58) {
          lStack_30 = uStack_90 + 1;
          uVar4 = FUN_142992c50(auStack_a0);
          uStack_28 = FUN_1429930a0(uVar4,lStack_30);
          uVar4 = FUN_142992c50(auStack_88);
          iVar3 = FUN_142c04ef0(uVar4,uStack_28);
          if (iVar3 != 0) goto LAB_142af5175;
          FUN_142aeeea0(auStack_88);
        }
        else {
LAB_142af5175:
          puStack_20 = auStack_10;
          uVar4 = FUN_142992cb0(auStack_88);
          uVar4 = FUN_142992e50(puStack_20,uVar4);
          cVar2 = FUN_142aef140(param_1,uVar4);
          if (cVar2 == '\0') {
            uStack_6c = 0;
            FUN_142aeeea0(auStack_88);
            FUN_142af5230(&uStack_50);
            FUN_142aef100(auStack_a0);
            return uStack_6c;
          }
          FUN_142aeeea0(auStack_88);
        }
      }
      FUN_142af5340(param_1);
      uStack_68 = 1;
      FUN_142af5230(&uStack_50);
      FUN_142aef100(auStack_a0);
      uStack_78 = uStack_68;
    }
  }
  else {
    uStack_78 = 0;
    FUN_142aef100(auStack_a0);
  }
  return uStack_78;
}


/* address=142af5230 name=FUN_142af5230 */

void FUN_142af5230(undefined8 *param_1)

{
  FUN_142af5360(*param_1,param_1[1]);
  return;
}


/* address=142af5260 name=FUN_142af5260 */

uint FUN_142af5260(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=142af52b0 name=FUN_142af52b0 */

void FUN_142af52b0(undefined8 param_1)

{
  FUN_142b058a0(param_1);
  return;
}


/* address=142af52d0 name=FUN_142af52d0 */

void FUN_142af52d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05a40(param_1,param_2,param_3);
  return;
}


/* address=142af5300 name=FUN_142af5300 */

void FUN_142af5300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05f60(param_1,param_2,param_3,&LAB_142af5270);
  return;
}


/* address=142af5340 name=FUN_142af5340 */

void FUN_142af5340(undefined8 param_1)

{
  FUN_142b06400(param_1,&LAB_142af5270);
  return;
}


/* address=142af5360 name=FUN_142af5360 */

void FUN_142af5360(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06500(param_1,param_2);
  return;
}


/* address=142af5390 name=FUN_142af5390 */

undefined * FUN_142af5390(void)

{
  return &DAT_14317cb30;
}


/* address=142af53b0 name=FUN_142af53b0 */

void FUN_142af53b0(void)

{
  FUN_142af5390();
  return;
}


/* address=142af53d0 name=FUN_142af53d0 */

undefined * FUN_142af53d0(void)

{
  return &DAT_14317cb90;
}


/* address=142af53e0 name=FUN_142af53e0 */

undefined * FUN_142af53e0(void)

{
  return &DAT_14317cb78;
}


/* address=142af53f0 name=FUN_142af53f0 */

undefined * FUN_142af53f0(void)

{
  return &DAT_14317cb60;
}


/* address=142af5b20 name=FUN_142af5b20 */

void FUN_142af5b20(undefined8 param_1)

{
  FUN_142c0caa0(param_1);
  return;
}


/* address=142af5b40 name=FUN_142af5b40 */

void FUN_142af5b40(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *ap_StackX_10 [3];
  
  ap_StackX_10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,ap_StackX_10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_142992cb0(param_1);
    FUN_142af5ce0(uVar2,p_Var1);
  }
  return;
}


/* address=142af5b90 name=FUN_142af5b90 */

undefined8 FUN_142af5b90(undefined8 param_1,uint param_2)

{
  FUN_142b83260(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_142cacf70(param_1,0x268);
  }
  return param_1;
}


/* address=142af5bd0 name=FUN_142af5bd0 */

void FUN_142af5bd0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142992cb0(param_1);
    FUN_142af5cc0(uVar1,*param_1);
  }
  return;
}


/* address=142af5c10 name=FUN_142af5c10 */

void FUN_142af5c10(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *ap_StackX_10 [3];
  
  ap_StackX_10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,ap_StackX_10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_142992cb0(param_1);
    FUN_142af5cc0(uVar2,p_Var1);
  }
  return;
}


/* address=142af5c60 name=FUN_142af5c60 */

undefined8
FUN_142af5c60(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_142af5c10(param_1,p_Var1);
  uVar2 = FUN_142992cb0(param_2);
  FUN_142992cb0(uVar2);
  FUN_142992cb0(param_1);
  return param_1;
}


/* address=142af5cc0 name=FUN_142af5cc0 */

void FUN_142af5cc0(undefined8 param_1,undefined8 param_2)

{
  FUN_142af5d00(param_2);
  return;
}


/* address=142af5ce0 name=FUN_142af5ce0 */

void FUN_142af5ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_142af5b20(param_2);
  return;
}


/* address=142af5d00 name=FUN_142af5d00 */

void FUN_142af5d00(undefined8 param_1)

{
  FUN_142af5d20(param_1);
  return;
}


/* address=142af5d20 name=FUN_142af5d20 */

void FUN_142af5d20(longlong param_1)

{
  if (param_1 != 0) {
    FUN_142af5b90(param_1,0);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142af5d50 name=FUN_142af5d50 */

undefined8 FUN_142af5d50(longlong param_1)

{
  FUN_142b81950(param_1 + 0x18);
  return 1;
}


/* address=142af5df0 name=FUN_142af5df0 */

void FUN_142af5df0(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = FUN_142b819a0(param_1 + 3), iVar1 != 0)) {
    FUN_142b82360(&DAT_143d02a98,param_1,param_1 + 4);
    FUN_142af6790(*param_1);
    FUN_142c0d1a0(param_1[1]);
    FUN_142c0e1e0(param_1[2]);
    FUN_142c0db90(param_1[8]);
    FUN_142c16d20(param_1[9]);
    FUN_142c17120(param_1[10]);
    FUN_142b6edb0(param_1[0xb]);
    FUN_142c18a10(param_1[0xc]);
    FUN_142c1a870(param_1[0x11]);
    FUN_142b81b00(param_1 + 0x12);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142af5ef0 name=FUN_142af5ef0 */

longlong FUN_142af5ef0(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lStack_28;
  undefined auStack_20 [32];
  
  lStack_28 = 0;
  if (param_3 < 0) {
    FUN_142afa690(0xc,0,0x6b,s_D__a_1_s_target_release_build_bo_143cb3ff0,0xf0);
  }
  else {
    FUN_142b78260(auStack_20,*param_2,(longlong)param_3);
    lStack_28 = FUN_142af68b0(auStack_20,0);
    if (lStack_28 != 0) {
      uVar1 = FUN_142b782d0(auStack_20);
      *param_2 = uVar1;
    }
  }
  if (param_1 != (longlong *)0x0) {
    FUN_142af5df0(*param_1);
    *param_1 = lStack_28;
  }
  return lStack_28;
}


/* address=142af5fb0 name=FUN_142af5fb0 */

longlong FUN_142af5fb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined auStack_18 [24];
  
  uVar1 = FUN_142b06c50(param_1);
  uVar2 = FUN_142b06c30(param_1);
  FUN_142b78260(auStack_18,uVar2,uVar1);
  lVar3 = FUN_142af68b0(auStack_18,param_1);
  if ((lVar3 == 0) || (lVar4 = FUN_142b782f0(auStack_18), lVar4 != 0)) {
    FUN_142af5df0(lVar3);
    lVar3 = 0;
  }
  return lVar3;
}


/* address=142af6030 name=FUN_142af6030 */

undefined8 FUN_142af6030(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined auStack_70 [8];
  undefined auStack_68 [48];
  undefined auStack_38 [56];
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_142afa690(0xc,0,0x9b,s_D__a_1_s_target_release_build_bo_143cb4060,0x107);
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_142b7a520(auStack_38,0x40);
    if ((((((iVar1 == 0) || (iVar1 = FUN_142b7ac70(auStack_38,auStack_68,0x20000010), iVar1 == 0))
          || (iVar1 = FUN_142af6800(*param_1,0), iVar1 < 0)) ||
         ((iVar2 = FUN_142b7ade0(auStack_68,auStack_70,(longlong)iVar1), iVar2 == 0 ||
          (iVar2 = FUN_142af6800(*param_1,auStack_70), iVar2 != iVar1)))) ||
        ((iVar1 = FUN_142c0d210(param_1[1],0), iVar1 < 0 ||
         ((iVar2 = FUN_142b7ade0(auStack_68,auStack_70,(longlong)iVar1), iVar2 == 0 ||
          (iVar2 = FUN_142c0d210(param_1[1],auStack_70), iVar2 != iVar1)))))) ||
       ((iVar1 = FUN_142c0e240(param_1[2],0), iVar1 < 0 ||
        ((iVar2 = FUN_142b7ade0(auStack_68,auStack_70,(longlong)iVar1), iVar2 == 0 ||
         (iVar2 = FUN_142c0e240(param_1[2],auStack_70), iVar2 != iVar1)))))) {
      FUN_142b7a5e0(auStack_38);
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = FUN_142c1a0e0(auStack_38,param_2);
    }
  }
  return uVar3;
}


/* address=142af6290 name=FUN_142af6290 */

longlong * FUN_142af6290(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_142af6830();
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_142af6770();
    *plVar1 = lVar2;
    lVar2 = FUN_142c0d150();
    plVar1[1] = lVar2;
    lVar2 = FUN_142c0e1c0();
    plVar1[2] = lVar2;
    if (((*plVar1 == 0) || (plVar1[1] == 0)) || (plVar1[2] == 0)) {
      FUN_142af5df0(plVar1);
      plVar1 = (longlong *)0x0;
    }
  }
  return plVar1;
}


/* address=142af6490 name=FUN_142af6490 */

ulonglong FUN_142af6490(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong alStack_10 [2];
  
  if ((param_2 == (longlong *)0x0) || (*param_2 != 0)) {
    uVar2 = FUN_142af6e30(param_1,param_2);
  }
  else {
    uVar1 = FUN_142af6e30(param_1,0);
    if ((int)uVar1 < 1) {
      uVar2 = (ulonglong)uVar1;
    }
    else {
      alStack_10[0] = FUN_142b0e970((longlong)(int)uVar1);
      *param_2 = alStack_10[0];
      if (alStack_10[0] == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar1 = FUN_142af6e30(param_1,alStack_10);
        if ((int)uVar1 < 1) {
          FUN_142b0eaa0(*param_2);
          *param_2 = 0;
        }
        uVar2 = (ulonglong)uVar1;
      }
    }
  }
  return uVar2;
}


/* address=142af6560 name=FUN_142af6560 */

longlong FUN_142af6560(longlong *param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uStack_20;
  longlong lStack_18;
  
  uStack_20 = *param_2;
  bVar1 = false;
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    bVar1 = true;
  }
  lStack_18 = FUN_142af5ef0(param_1,&uStack_20,param_3);
  if (lStack_18 == 0) {
    lStack_18 = 0;
  }
  else {
    param_3 = param_3 - ((int)uStack_20 - (int)*param_2);
    if ((0 < param_3) && (lVar2 = FUN_142c1a8a0(lStack_18 + 0x88,&uStack_20,param_3), lVar2 == 0)) {
      if ((bVar1) && (FUN_142af5df0(lStack_18), param_1 != (longlong *)0x0)) {
        *param_1 = 0;
      }
      return 0;
    }
    *param_2 = uStack_20;
  }
  return lStack_18;
}


/* address=142af6730 name=FUN_142af6730 */

undefined8 FUN_142af6730(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142af6770 name=FUN_142af6770 */

void FUN_142af6770(void)

{
  FUN_142c0e850(&DAT_14317cbe0);
  return;
}


/* address=142af6790 name=FUN_142af6790 */

void FUN_142af6790(undefined8 param_1)

{
  FUN_142c0f130(param_1,&DAT_14317cbe0);
  return;
}


/* address=142af6800 name=FUN_142af6800 */

void FUN_142af6800(undefined8 param_1,undefined8 param_2)

{
  FUN_142c11ab0(param_1,param_2,&DAT_14317cbe0);
  return;
}


/* address=142af6830 name=FUN_142af6830 */

longlong FUN_142af6830(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b0e970(0x98);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_142af6730(lVar1,0,0x98);
    *(undefined4 *)(lVar1 + 0x18) = 1;
    *(undefined4 *)(lVar1 + 0x28) = 0xffffffff;
    FUN_142b82340(lVar1 + 0x20);
    FUN_142b81a60(lVar1 + 0x90);
  }
  return lVar1;
}


/* address=142af68b0 name=FUN_142af68b0 */

longlong ** FUN_142af68b0(wchar_t *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong *plVar7;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar9;
  undefined8 uVar8;
  int *piVar10;
  int iStack_80;
  longlong lStack_78;
  int iStack_70;
  int iStack_6c;
  wchar_t *apwStack_68 [2];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined8 uStack_28;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar1 = wcstoul(param_1,apwStack_68,0x20000010);
  if ((((uVar1 == 0) || (uVar4 = FUN_142b782f0(apwStack_68), 0x3fffffff < uVar4)) ||
      (iVar2 = FUN_142b78ad0(apwStack_68,auStack_48,0x20000010), iVar2 == 0)) ||
     (iVar2 = FUN_142b78ad0(apwStack_68,auStack_38,0x20000010), iVar2 == 0)) {
    FUN_142afa690(0xc,0,0x6d,s_D__a_1_s_target_release_build_bo_143cb3dc0,CONCAT44(uVar9,0x9b));
  }
  else {
    piVar10 = &iStack_6c;
    uVar9 = 0;
    iVar2 = FUN_142b78c60(apwStack_68,auStack_58,&iStack_70,&uStack_28,0,piVar10);
    if (((iVar2 == 0) || (iStack_70 != 3)) ||
       ((iStack_6c != 0 ||
        ((iVar2 = FUN_142b782a0(auStack_58,uStack_28), iVar2 == 0 ||
         (lVar5 = FUN_142b782f0(apwStack_68), lVar5 != 0)))))) {
      FUN_142afa690(0xc,0,0x6d,s_D__a_1_s_target_release_build_bo_143cb3e30,CONCAT44(uVar9,0xad));
    }
    else {
      pplVar6 = (longlong **)FUN_142af6830();
      if (pplVar6 != (longlong **)0x0) {
        lStack_78 = FUN_142b782d0(auStack_48);
        uVar3 = FUN_142b782f0(auStack_48);
        uVar8 = CONCAT44(uVar9,0xffffffff);
        iVar2 = FUN_142c0f920(pplVar6,&lStack_78,uVar3,&DAT_14317cbe0,uVar8,
                              (ulonglong)piVar10 & 0xffffffff00000000,0,param_2);
        uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (0 < iVar2) {
          lStack_20 = FUN_142b782d0(auStack_48);
          lVar5 = FUN_142b782f0(auStack_48);
          if (lStack_78 == lStack_20 + lVar5) {
            lStack_78 = FUN_142b782d0(auStack_38);
            uVar3 = FUN_142b782f0(auStack_38);
            plVar7 = (longlong *)FUN_142c0d1d0(0,&lStack_78,uVar3);
            pplVar6[1] = plVar7;
            if (pplVar6[1] != (longlong *)0x0) {
              lStack_18 = FUN_142b782d0(auStack_38);
              lVar5 = FUN_142b782f0(auStack_38);
              if (lStack_78 == lStack_18 + lVar5) {
                lStack_78 = FUN_142b782d0(auStack_58);
                uVar3 = FUN_142b782f0(auStack_58);
                plVar7 = (longlong *)FUN_142c13f20(0,&lStack_78,uVar3);
                pplVar6[2] = plVar7;
                if (pplVar6[2] != (longlong *)0x0) {
                  lStack_10 = FUN_142b782d0(auStack_58);
                  lVar5 = FUN_142b782f0(auStack_58);
                  if (lStack_78 == lStack_10 + lVar5) {
                    iStack_80 = 0;
                    if ((**pplVar6 == 0) ||
                       ((iStack_80 = FUN_142c15290(**pplVar6), -1 < iStack_80 && (iStack_80 < 3))))
                    {
                      if ((iStack_80 == 0) && (((*pplVar6)[7] != 0 || ((*pplVar6)[8] != 0)))) {
                        FUN_142afa690(0xb,0,0x8b,s_D__a_1_s_target_release_build_bo_143cb3f10,
                                      CONCAT44(uVar9,0xdc));
                      }
                      else {
                        if (iStack_80 == 2) {
                          return pplVar6;
                        }
                        if ((*pplVar6)[9] == 0) {
                          return pplVar6;
                        }
                        FUN_142afa690(0xb,0,0x8b,s_D__a_1_s_target_release_build_bo_143cb3f80,
                                      CONCAT44(uVar9,0xe2));
                      }
                    }
                    else {
                      FUN_142afa690(0xb,0,0x8c,s_D__a_1_s_target_release_build_bo_143cb3ea0,
                                    CONCAT44(uVar9,0xd4));
                    }
                  }
                }
              }
            }
          }
        }
        FUN_142af5df0(pplVar6);
      }
    }
  }
  return (longlong **)0x0;
}


/* address=142af6e30 name=FUN_142af6e30 */

int FUN_142af6e30(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lStack_20;
  
  if (param_2 == (longlong *)0x0) {
    lStack_20 = 0;
  }
  else {
    lStack_20 = *param_2;
    if (*param_2 == 0) {
      FID_conflict__assert((wchar_t *)s_p_143cb4208,(wchar_t *)s_D_143cb4140,0x1be);
    }
  }
  iVar1 = FUN_142af6030(param_1,param_2);
  if (((0 < iVar1) && (param_1 != 0)) && (*(longlong *)(param_1 + 0x88) != 0)) {
    iVar2 = FUN_142c1a8e0(*(undefined8 *)(param_1 + 0x88),param_2);
    if (iVar2 < 0) {
      iVar1 = iVar2;
      if (lStack_20 != 0) {
        *param_2 = lStack_20;
      }
    }
    else {
      iVar1 = iVar1 + iVar2;
    }
  }
  return iVar1;
}


/* address=142af6f60 name=FUN_142af6f60 */

void FUN_142af6f60(void)

{
  FUN_142b05960();
  return;
}


/* address=142af6f80 name=FUN_142af6f80 */

void FUN_142af6f80(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142af6fa0 name=FUN_142af6fa0 */

void FUN_142af6fa0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142af6f30,param_2);
  return;
}


/* address=142af6fd0 name=FUN_142af6fd0 */

void FUN_142af6fd0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142af7030 name=FUN_142af7030 */

void FUN_142af7030(void)

{
  FUN_142b05960();
  return;
}


/* address=142af7050 name=FUN_142af7050 */

void FUN_142af7050(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142af7070 name=FUN_142af7070 */

void FUN_142af7070(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142af7000,param_2);
  return;
}


/* address=142af70a0 name=FUN_142af70a0 */

void FUN_142af70a0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142af70d0 name=FUN_142af70d0 */

void FUN_142af70d0(void)

{
  FUN_142b05960();
  return;
}


/* address=142af70f0 name=FUN_142af70f0 */

void FUN_142af70f0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142af7110 name=FUN_142af7110 */

void FUN_142af7110(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142af7140 name=FUN_142af7140 */

void FUN_142af7140(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142af7160 name=FUN_142af7160 */

void FUN_142af7160(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142af7210 name=FUN_142af7210 */

void FUN_142af7210(undefined8 param_1)

{
  FUN_142b058a0(param_1);
  return;
}


/* address=142af7230 name=FUN_142af7230 */

void FUN_142af7230(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142af7250 name=FUN_142af7250 */

void FUN_142af7250(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142af7280 name=FUN_142af7280 */

void FUN_142af7280(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142af72a0 name=FUN_142af72a0 */

void FUN_142af72a0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142af7190,param_2);
  return;
}


/* address=142af72d0 name=FUN_142af72d0 */

void FUN_142af72d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b05f60(param_1,param_2,param_3,&LAB_142af71c0);
  return;
}


/* address=142af7310 name=FUN_142af7310 */

void FUN_142af7310(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142af7340 name=FUN_142af7340 */

void FUN_142af7340(undefined8 param_1)

{
  FUN_142b06400(param_1,&LAB_142af71c0);
  return;
}


/* address=142af73a0 name=FUN_142af73a0 */

void FUN_142af73a0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_142af89d0(param_1,param_2,param_3,0);
  return;
}


/* address=142af73e0 name=FUN_142af73e0 */

undefined8 FUN_142af73e0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_142af73a0(param_1,param_2,param_3);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142af7250(param_1,(longlong)iVar1);
  }
  return uVar2;
}


/* address=142af7440 name=FUN_142af7440 */

longlong FUN_142af7440(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uStack_20;
  ulonglong auStack_18 [3];
  
  FUN_142af7340(param_1);
  iVar1 = FUN_142af72d0(param_1,auStack_18,param_2);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else if ((*param_2 == 1) || (*param_2 == 2)) {
    for (uStack_20 = auStack_18[0]; uVar3 = FUN_142af7230(param_1), uStack_20 < uVar3;
        uStack_20 = uStack_20 + 1) {
      lVar2 = FUN_142af7250(param_1,uStack_20);
      iVar1 = FUN_142af8770(lVar2,param_2);
      if (iVar1 != 0) {
        return 0;
      }
      if (*param_2 == 1) {
        iVar1 = FUN_142c04ea0(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(param_2 + 2));
      }
      else {
        if (*param_2 != 2) {
          return lVar2;
        }
        iVar1 = FUN_142c051e0(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(param_2 + 2));
      }
      if (iVar1 == 0) {
        return lVar2;
      }
    }
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_142af7250(param_1,auStack_18[0]);
  }
  return lVar2;
}


/* address=142af7570 name=FUN_142af7570 */

undefined8 FUN_142af7570(int *param_1)

{
  if (*param_1 == 1) {
    FUN_142af5d50(*(undefined8 *)(param_1 + 2));
  }
  else if (*param_1 == 2) {
    FUN_142c1a970(*(undefined8 *)(param_1 + 2));
  }
  return 1;
}


/* address=142af75d0 name=FUN_142af75d0 */

void FUN_142af75d0(int *param_1)

{
  if (*param_1 == 1) {
    FUN_142af5df0(*(undefined8 *)(param_1 + 2));
  }
  else if (*param_1 == 2) {
    FUN_142c1b1d0(*(undefined8 *)(param_1 + 2));
  }
  return;
}


/* address=142af7670 name=FUN_142af7670 */

undefined4 * FUN_142af7670(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)FUN_142b0e970(0x88);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_142af8730(puVar1,0,0x88);
    FUN_142b81a60(puVar1 + 4);
    uVar2 = FUN_142af7210(&LAB_142af8800);
    *(undefined8 *)(puVar1 + 2) = uVar2;
    if (*(longlong *)(puVar1 + 2) != 0) {
      *puVar1 = 1;
      uVar2 = FUN_142af70d0();
      *(undefined8 *)(puVar1 + 6) = uVar2;
      if (*(longlong *)(puVar1 + 6) != 0) {
        uVar2 = FUN_142af8e10();
        *(undefined8 *)(puVar1 + 8) = uVar2;
        if (*(longlong *)(puVar1 + 8) != 0) {
          puVar1[0x20] = 1;
          return puVar1;
        }
      }
    }
    if (puVar1 != (undefined4 *)0x0) {
      FUN_142b81b00(puVar1 + 4);
      if (*(longlong *)(puVar1 + 8) != 0) {
        FUN_142af8e60(*(undefined8 *)(puVar1 + 8));
      }
      if (*(longlong *)(puVar1 + 6) != 0) {
        FUN_142af7140(*(undefined8 *)(puVar1 + 6));
      }
      if (*(longlong *)(puVar1 + 2) != 0) {
        FUN_142af7280(*(undefined8 *)(puVar1 + 2));
      }
      FUN_142b0eaa0(puVar1);
    }
  }
  return (undefined4 *)0x0;
}


/* address=142af77c0 name=FUN_142af77c0 */

undefined8 FUN_142af77c0(longlong param_1)

{
  FUN_142b81950(param_1 + 0x80);
  return 1;
}


/* address=142af77f0 name=FUN_142af77f0 */

void FUN_142af77f0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uStack_28;
  
  if ((param_1 != 0) && (iVar2 = FUN_142b819a0(param_1 + 0x80), iVar2 != 0)) {
    FUN_142b81b00(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    for (uStack_28 = 0; uVar3 = FUN_142af70f0(uVar1), uStack_28 < uVar3; uStack_28 = uStack_28 + 1)
    {
      uVar4 = FUN_142af7110(uVar1,uStack_28);
      FUN_142af86e0(uVar4);
      FUN_142af85a0(uVar4);
    }
    FUN_142af7140(uVar1);
    FUN_142af72a0(*(undefined8 *)(param_1 + 8),&LAB_142af8830);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_142af8e60(*(undefined8 *)(param_1 + 0x20));
    }
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142af8210 name=FUN_142af8210 */

longlong FUN_142af8210(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uStack_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_20 = 0;
  while( true ) {
    uVar2 = FUN_142af70f0(uVar1);
    if (uVar2 <= uStack_20) {
      lVar3 = FUN_142af8500(param_2);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        *(longlong *)(lVar3 + 0x18) = param_1;
        lVar4 = FUN_142af7160(*(undefined8 *)(param_1 + 0x18),lVar3);
        if (lVar4 == 0) {
          FUN_142af85a0(lVar3);
          lVar3 = 0;
        }
      }
      return lVar3;
    }
    lVar3 = FUN_142af7110(uVar1,uStack_20);
    if (param_2 == *(longlong *)(lVar3 + 8)) break;
    uStack_20 = uStack_20 + 1;
  }
  return lVar3;
}


/* address=142af82f0 name=FUN_142af82f0 */

void FUN_142af82f0(undefined8 param_1,undefined8 param_2)

{
  FUN_142af8890(param_1,param_2,0);
  return;
}


/* address=142af8320 name=FUN_142af8320 */

void FUN_142af8320(undefined8 param_1,undefined8 param_2)

{
  FUN_142af8890(param_1,param_2,1);
  return;
}


/* address=142af8350 name=FUN_142af8350 */

undefined8 FUN_142af8350(longlong *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iStack_38;
  undefined4 *puStack_28;
  undefined4 auStack_18 [6];
  
  lVar1 = *param_1;
  FUN_142b81aa0(lVar1 + 0x10);
  puStack_28 = (undefined4 *)FUN_142af73e0(*(undefined8 *)(lVar1 + 8),param_2,param_3);
  FUN_142b81ae0(lVar1 + 0x10);
  if ((puStack_28 == (undefined4 *)0x0) || (param_2 == 2)) {
    for (iStack_38 = 0; iVar2 = FUN_142af70f0(*(undefined8 *)(lVar1 + 0x18)), iStack_38 < iVar2;
        iStack_38 = iStack_38 + 1) {
      uVar3 = FUN_142af7110(*(undefined8 *)(lVar1 + 0x18),(longlong)iStack_38);
      iVar2 = FUN_142af8650(uVar3,param_2,param_3,auStack_18);
      if (iVar2 != 0) {
        puStack_28 = auStack_18;
        break;
      }
    }
    if (puStack_28 == (undefined4 *)0x0) {
      return 0;
    }
  }
  *param_4 = *puStack_28;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puStack_28 + 2);
  FUN_142af7570(param_4);
  return 1;
}


/* address=142af8480 name=FUN_142af8480 */

undefined8
FUN_142af8480(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x28))
                      (param_1,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}


/* address=142af8500 name=FUN_142af8500 */

undefined4 * FUN_142af8500(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_142b0e970(0x20);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(longlong *)(puVar2 + 2) = param_1;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    if ((*(longlong *)(param_1 + 8) != 0) &&
       (iVar1 = (**(code **)(param_1 + 8))(puVar2), iVar1 == 0)) {
      FUN_142b0eaa0(puVar2);
      puVar2 = (undefined4 *)0x0;
    }
  }
  return puVar2;
}


/* address=142af85a0 name=FUN_142af85a0 */

void FUN_142af85a0(longlong param_1)

{
  if (param_1 != 0) {
    if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0)
       ) {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x10))(param_1);
    }
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142af8650 name=FUN_142af8650 */

bool FUN_142af8650(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(*(longlong *)(param_1 + 8) + 0x30) == 0))
  {
    bVar1 = false;
  }
  else if (*(int *)(param_1 + 4) == 0) {
    iVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x30))(param_1,param_2,param_3,param_4);
    bVar1 = 0 < iVar2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


/* address=142af86e0 name=FUN_142af86e0 */

undefined8 FUN_142af86e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x20) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(param_1);
  }
  return uVar1;
}


/* address=142af8730 name=FUN_142af8730 */

undefined8 FUN_142af8730(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142af8770 name=FUN_142af8770 */

ulonglong FUN_142af8770(int *param_1,int *param_2)

{
  ulonglong uVar1;
  
  if (*param_1 - *param_2 == 0) {
    if (*param_1 == 1) {
      uVar1 = FUN_142c04dd0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    }
    else if (*param_1 == 2) {
      uVar1 = FUN_142c051a0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = (ulonglong)(uint)(*param_1 - *param_2);
  }
  return uVar1;
}


/* address=142af8890 name=FUN_142af8890 */

bool FUN_142af8890(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    bVar4 = false;
  }
  else {
    puVar2 = (undefined4 *)FUN_142b0e970(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      bVar4 = false;
    }
    else {
      if (param_3 == 0) {
        *puVar2 = 1;
        *(longlong *)(puVar2 + 2) = param_2;
      }
      else {
        *puVar2 = 2;
        *(longlong *)(puVar2 + 2) = param_2;
      }
      FUN_142af7570(puVar2);
      FUN_142b81aa0(param_1 + 0x10);
      bVar4 = true;
      lVar3 = FUN_142af7440(*(undefined8 *)(param_1 + 8),puVar2);
      bVar1 = false;
      if (lVar3 == 0) {
        lVar3 = FUN_142af7310(*(undefined8 *)(param_1 + 8),puVar2);
        bVar4 = lVar3 != 0;
        bVar1 = bVar4;
      }
      FUN_142b81ae0(param_1 + 0x10);
      if (!bVar1) {
        FUN_142af75d0(puVar2);
        FUN_142b0eaa0(puVar2);
      }
    }
  }
  return bVar4;
}


/* address=142af89d0 name=FUN_142af89d0 */

void FUN_142af89d0(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined auStack_238 [32];
  int iStack_218;
  int iStack_214;
  int aiStack_210 [2];
  int aiStack_208 [2];
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined auStack_1e8 [16];
  undefined8 uStack_1d8;
  undefined auStack_198 [40];
  undefined8 uStack_170;
  undefined *apuStack_128 [14];
  undefined *apuStack_b8 [20];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_238;
  iStack_214 = param_2;
  aiStack_208[0] = param_2;
  if (param_2 == 1) {
    ppuStack_200 = apuStack_b8;
    apuStack_b8[0] = auStack_198;
    uStack_170 = param_3;
  }
  else {
    if (param_2 != 2) goto LAB_142af8b49;
    ppuStack_200 = apuStack_128;
    apuStack_128[0] = auStack_1e8;
    uStack_1d8 = param_3;
  }
  FUN_142af7340(param_1);
  iVar1 = FUN_142af72d0(param_1,aiStack_210,aiStack_208);
  if ((iVar1 != 0) && (param_4 != (int *)0x0)) {
    *param_4 = 1;
    while( true ) {
      iStack_218 = aiStack_210[0] + 1;
      iVar1 = FUN_142af7230(param_1);
      if (iVar1 <= iStack_218) break;
      uStack_1f8 = FUN_142af7250(param_1,(longlong)iStack_218);
      iVar1 = FUN_142af8770(uStack_1f8,aiStack_208);
      if (iVar1 != 0) break;
      *param_4 = *param_4 + 1;
      aiStack_210[0] = iStack_218;
    }
  }
LAB_142af8b49:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_238);
  return;
}


/* address=142af8bd0 name=FUN_142af8bd0 */

void FUN_142af8bd0(void)

{
  FUN_142b05960();
  return;
}


/* address=142af8bf0 name=FUN_142af8bf0 */

void FUN_142af8bf0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142af8c10 name=FUN_142af8c10 */

void FUN_142af8c10(undefined8 param_1)

{
  FUN_142b05a90(param_1);
  return;
}


/* address=142af8c30 name=FUN_142af8c30 */

void FUN_142af8c30(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142af8b70,param_2);
  return;
}


/* address=142af8c60 name=FUN_142af8c60 */

void FUN_142af8c60(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142af8c90 name=FUN_142af8c90 */

void FUN_142af8c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b06560(param_1,&LAB_142af8ba0,param_2,&LAB_142af8b70,param_3);
  return;
}


/* address=142af8d40 name=FUN_142af8d40 */

void FUN_142af8d40(void)

{
  FUN_142b05960();
  return;
}


/* address=142af8d60 name=FUN_142af8d60 */

void FUN_142af8d60(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142af8ce0,param_2);
  return;
}


/* address=142af8d90 name=FUN_142af8d90 */

void FUN_142af8d90(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142af8dc0 name=FUN_142af8dc0 */

void FUN_142af8dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b06560(param_1,&LAB_142af8d10,param_2,&LAB_142af8ce0,param_3);
  return;
}


/* address=142af8e10 name=FUN_142af8e10 */

longlong FUN_142af8e10(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b0e970(0x70);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_142af9840(lVar1,0,0x70);
    FUN_142af99f0(lVar1);
  }
  return lVar1;
}


/* address=142af8e60 name=FUN_142af8e60 */

void FUN_142af8e60(longlong param_1)

{
  if (param_1 != 0) {
    FUN_142af99f0(param_1);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142af8ea0 name=FUN_142af8ea0 */

undefined8 FUN_142af8ea0(longlong param_1,longlong param_2)

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
          )) && (iVar2 = FUN_142af9490(param_1,*(undefined8 *)(param_2 + 0x28)), iVar2 == 0)) {
        uVar3 = 0;
      }
      else {
        if ((bVar5) ||
           ((*(longlong *)(param_2 + 0x30) != 0 && ((bVar4 || (*(longlong *)(param_1 + 0x30) == 0)))
            ))) {
          if (*(longlong *)(param_1 + 0x30) != 0) {
            FUN_142af8c30(*(undefined8 *)(param_1 + 0x30),&LAB_142af9880);
            *(undefined8 *)(param_1 + 0x30) = 0;
          }
          if (*(longlong *)(param_2 + 0x30) != 0) {
            uVar3 = FUN_142af8c90(*(undefined8 *)(param_2 + 0x30),FUN_142b0edc0,&LAB_142af9880);
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
           (iVar2 = FUN_142af9600(param_1,*(undefined8 *)(param_2 + 0x48),
                                  *(undefined8 *)(param_2 + 0x50)), iVar2 == 0)) {
          uVar3 = 0;
        }
        else if (((bVar5) ||
                 ((*(longlong *)(param_2 + 0x58) != 0 &&
                  ((bVar4 || (*(longlong *)(param_1 + 0x58) == 0)))))) &&
                (iVar2 = FUN_142af9670(param_1,*(undefined8 *)(param_2 + 0x58),
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


/* address=142af91f0 name=FUN_142af91f0 */

undefined4 FUN_142af91f0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  uVar2 = FUN_142af8ea0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return uVar2;
}


/* address=142af92b0 name=FUN_142af92b0 */

undefined8 FUN_142af92b0(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return 1;
}


/* address=142af9330 name=FUN_142af9330 */

void FUN_142af9330(longlong param_1,undefined4 param_2)

{
  FUN_142c1d290(param_1 + 0x18,param_2);
  return;
}


/* address=142af9360 name=FUN_142af9360 */

void FUN_142af9360(longlong param_1,undefined4 param_2)

{
  FUN_142c1c6b0(param_1 + 0x1c,param_2);
  return;
}


/* address=142af9390 name=FUN_142af9390 */

void FUN_142af9390(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


/* address=142af93e0 name=FUN_142af93e0 */

void FUN_142af93e0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 2;
  return;
}


/* address=142af9490 name=FUN_142af9490 */

undefined8 FUN_142af9490(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_142af8d60(*(undefined8 *)(param_1 + 0x28),FUN_142b6d6c0);
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_142af8dc0(param_2,FUN_142c15a70,FUN_142b6d6c0);
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


/* address=142af9520 name=FUN_142af9520 */

bool FUN_142af9520(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_142af98a0(param_1,0,param_2,param_3);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x68) = 1;
  }
  return iVar1 != 0;
}


/* address=142af95c0 name=FUN_142af95c0 */

void FUN_142af95c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}


/* address=142af9600 name=FUN_142af9600 */

undefined8 FUN_142af9600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_142af9800(param_2,0,param_3);
  if ((lVar2 == 0) &&
     (iVar1 = FUN_142af9b50(param_1 + 0x48,param_1 + 0x50,param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  *(undefined *)(param_1 + 0x68) = 1;
  return 0;
}


/* address=142af9670 name=FUN_142af9670 */

undefined8 FUN_142af9670(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (((param_3 == 4) || (param_3 == 0x10)) &&
     (iVar1 = FUN_142af9b50(param_1 + 0x58,param_1 + 0x60,param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  *(undefined *)(param_1 + 0x68) = 1;
  return 0;
}


/* address=142af9750 name=FUN_142af9750 */

undefined4 FUN_142af9750(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


/* address=142af9790 name=FUN_142af9790 */

undefined ** FUN_142af9790(char *param_1)

{
  int iVar1;
  ulonglong uStack_18;
  
  uStack_18 = 0;
  while( true ) {
    if (4 < uStack_18) {
      return (undefined **)0x0;
    }
    iVar1 = strcmp((&PTR_s_default_14317cda0)[uStack_18 * 0xe],param_1);
    if (iVar1 == 0) break;
    uStack_18 = uStack_18 + 1;
  }
  return &PTR_s_default_14317cda0 + uStack_18 * 0xe;
}


/* address=142af9800 name=FUN_142af9800 */

undefined8 FUN_142af9800(undefined8 param_1,undefined4 param_2,longlong param_3)

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


/* address=142af9840 name=FUN_142af9840 */

undefined8 FUN_142af9840(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142af98a0 name=FUN_142af98a0 */

undefined8 FUN_142af98a0(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) && (lVar1 = FUN_142af9800(param_3,0,param_4), lVar1 != 0)) {
      return 0;
    }
    if ((param_2 == 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_142af8c30(*(undefined8 *)(param_1 + 0x30),&LAB_142af9880);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    lVar1 = FUN_142b0f380(param_3,param_4);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar2 = FUN_142af8bd0();
        *(longlong *)(param_1 + 0x30) = lVar2;
        if (lVar2 == 0) {
          FUN_142b0eaa0(lVar1);
          return 0;
        }
      }
      lVar2 = FUN_142af8c60(*(undefined8 *)(param_1 + 0x30),lVar1);
      if (lVar2 == 0) {
        FUN_142b0eaa0(lVar1);
        lVar1 = FUN_142af8bf0(*(undefined8 *)(param_1 + 0x30));
        if (lVar1 == 0) {
          FUN_142af8c10(*(undefined8 *)(param_1 + 0x30));
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


/* address=142af99f0 name=FUN_142af99f0 */

void FUN_142af99f0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    if (param_1[5] != 0) {
      FUN_142af8d60(param_1[5],FUN_142b6d6c0);
      param_1[5] = 0;
    }
    if (param_1[6] != 0) {
      FUN_142af8c30(param_1[6],&LAB_142af9880);
      param_1[6] = 0;
    }
    if (param_1[8] != 0) {
      FUN_142b0eaa0(param_1[8]);
      param_1[8] = 0;
    }
    if (param_1[9] != 0) {
      FUN_142b0eaa0(param_1[9]);
      param_1[9] = 0;
      param_1[10] = 0;
    }
    if (param_1[0xb] != 0) {
      FUN_142b0eaa0(param_1[0xb]);
      param_1[0xb] = 0;
      param_1[0xc] = 0;
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return;
}


/* address=142af9b50 name=FUN_142af9b50 */

undefined8 FUN_142af9b50(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_142b0f440(param_3,param_4);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (*param_1 != 0) {
        FUN_142b0eaa0(*param_1);
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


/* address=142af9c40 name=FUN_142af9c40 */

uint FUN_142af9c40(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=142af9c60 name=FUN_142af9c60 */

uint FUN_142af9c60(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=142af9d10 name=FUN_142af9d10 */

void FUN_142af9d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142afadd0(1,0,param_1,param_2,param_3,param_4);
  return;
}


/* address=142af9d60 name=FUN_142af9d60 */

void FUN_142af9d60(void)

{
  FUN_142afadd0(0,0,0,0,0,0);
  return;
}


/* address=142af9e20 name=FUN_142af9e20 */

void FUN_142af9e20(void)

{
  FUN_142afadd0(0,1,0,0,0,0);
  return;
}


/* address=142af9f00 name=FUN_142af9f00 */

void FUN_142af9f00(uint param_1,char *param_2,ulonglong param_3)

{
  size_t sVar1;
  undefined auStack_108 [32];
  char *pcStack_e8;
  char *pcStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char acStack_98 [64];
  char acStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_108;
  if (param_3 != 0) {
    uStack_d4 = FUN_142af9c40(param_1);
    uStack_d0 = FUN_142af9c60(param_1);
    pcStack_c0 = (char *)FUN_142afb0f0(param_1);
    pcStack_c8 = (char *)FUN_142afb130(param_1);
    if (pcStack_c0 == (char *)0x0) {
      _snprintf(acStack_98,0x40,s_lib__u__143cb4858,(ulonglong)uStack_d4);
      pcStack_c0 = acStack_98;
    }
    if (pcStack_c8 == (char *)0x0) {
      _snprintf(acStack_58,0x40,s_reason__u__143cb4860,(ulonglong)uStack_d0);
      pcStack_c8 = acStack_58;
    }
    pcStack_e0 = pcStack_c8;
    pcStack_e8 = pcStack_c0;
    _snprintf(param_2,param_3,s_error__08x__s_OPENSSL_internal___143cb4870,(ulonglong)param_1);
    sVar1 = strlen(param_2);
    if ((sVar1 == param_3 - 1) && (pcStack_a8 = param_2, DAT_14317d0e0 < param_3)) {
      for (uStack_d8 = 0; uStack_d8 < DAT_14317d0e0; uStack_d8 = uStack_d8 + 1) {
        pcStack_b8 = (char *)FUN_142c93ff0(pcStack_a8,0x3a);
        pcStack_b0 = param_2 + (ulonglong)uStack_d8 + ((param_3 - 1) - (ulonglong)DAT_14317d0e0);
        if ((pcStack_b8 == (char *)0x0) || (pcStack_b0 < pcStack_b8)) {
          FUN_142afa8f0(pcStack_b0,0x3a,DAT_14317d0e0 - uStack_d8);
          break;
        }
        pcStack_a8 = pcStack_b8 + 1;
      }
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_108);
  return;
}


/* address=142afa140 name=FUN_142afa140 */

char * FUN_142afa140(undefined4 param_1)

{
  char *pcStack_10;
  
  pcStack_10 = (char *)FUN_142afb0f0(param_1);
  if (pcStack_10 == (char *)0x0) {
    pcStack_10 = s_unknown_library_143cb47b0;
  }
  return pcStack_10;
}


/* address=142afa190 name=FUN_142afa190 */

char * FUN_142afa190(undefined4 param_1)

{
  char *pcStack_10;
  
  pcStack_10 = (char *)FUN_142afb130(param_1);
  if (pcStack_10 == (char *)0x0) {
    pcStack_10 = s_unknown_error_143cb4848;
  }
  return pcStack_10;
}


/* address=142afa1e0 name=FUN_142afa1e0 */

void FUN_142afa1e0(code *param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  undefined auStack_508 [32];
  undefined *puStack_4e8;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined *puStack_4d0;
  int iStack_4c8;
  uint uStack_4c4;
  undefined4 uStack_4c0;
  uint uStack_4bc;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined8 auStack_4a8 [2];
  undefined auStack_498 [128];
  char acStack_418 [1024];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_508;
  uStack_4bc = FUN_142afad60();
  do {
    iStack_4c8 = FUN_142af9d10(auStack_4a8,&uStack_4c0,&puStack_4b0,&uStack_4c4);
    if (iStack_4c8 == 0) break;
    FUN_142af9f00(iStack_4c8,auStack_498,0x78);
    if ((uStack_4c4 & 1) == 0) {
      puStack_4b8 = &DAT_143d02ab9;
    }
    else {
      puStack_4b8 = puStack_4b0;
    }
    puStack_4d0 = puStack_4b8;
    uStack_4d8 = uStack_4c0;
    uStack_4e0 = auStack_4a8[0];
    puStack_4e8 = auStack_498;
    _snprintf(acStack_418,0x400,s__lu__s__s__d__s_143cb4898,(ulonglong)uStack_4bc);
    sVar2 = strlen(acStack_418);
    iVar1 = (*param_1)(acStack_418,sVar2,param_2);
  } while (0 < iVar1);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_508);
  return;
}


/* address=142afa330 name=FUN_142afa330 */

void FUN_142afa330(void)

{
  longlong lVar1;
  uint uStack_18;
  
  lVar1 = FUN_142afad60();
  if (lVar1 != 0) {
    for (uStack_18 = 0; uStack_18 < 0x10; uStack_18 = uStack_18 + 1) {
      FUN_142afac20(lVar1 + (ulonglong)uStack_18 * 0x20);
    }
    thunk_FUN_142cacf70(*(undefined8 *)(lVar1 + 0x208));
    *(undefined8 *)(lVar1 + 0x208) = 0;
    *(undefined4 *)(lVar1 + 0x204) = 0;
    *(undefined4 *)(lVar1 + 0x200) = 0;
  }
  return;
}


/* address=142afa670 name=FUN_142afa670 */

void FUN_142afa670(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_142c9fe28();
  *puVar1 = 0;
  return;
}


/* address=142afa690 name=FUN_142afa690 */

void FUN_142afa690(int param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined2 param_5
                  )

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uStackX_18;
  
  lVar1 = FUN_142afad60();
  if (lVar1 != 0) {
    uStackX_18 = param_3;
    if ((param_1 == 2) && (param_3 == 0)) {
      uStackX_18 = GetLastError();
    }
    *(uint *)(lVar1 + 0x200) = (*(int *)(lVar1 + 0x200) + 1U) % 0x10;
    if (*(int *)(lVar1 + 0x200) == *(int *)(lVar1 + 0x204)) {
      *(uint *)(lVar1 + 0x204) = (*(int *)(lVar1 + 0x204) + 1U) % 0x10;
    }
    puVar2 = (undefined8 *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x200) * 0x20);
    FUN_142afac20(puVar2);
    *puVar2 = param_4;
    *(undefined2 *)((longlong)puVar2 + 0x14) = param_5;
    *(uint *)(puVar2 + 2) = param_1 << 0x18 | uStackX_18 & 0xfff;
  }
  return;
}


/* address=142afa7b0 name=FUN_142afa7b0 */

void FUN_142afa7b0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_142afb350(param_1,&uStackX_10);
  return;
}


/* address=142afa800 name=FUN_142afa800 */

void FUN_142afa800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  undefined8 auStack_10 [2];
  
  auStack_10[0] = 0;
  uStackX_10 = param_2;
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  iVar1 = FUN_142b0f790(auStack_10,param_1,&uStackX_10,1);
  if (iVar1 != -1) {
    FUN_142afb2c0(auStack_10[0]);
  }
  return;
}


/* address=142afa8f0 name=FUN_142afa8f0 */

undefined8 FUN_142afa8f0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142afa930 name=FUN_142afa930 */

void FUN_142afa930(longlong *param_1)

{
  ulonglong uStack_18;
  
  if (param_1 != (longlong *)0x0) {
    for (uStack_18 = 0; uStack_18 < (ulonglong)param_1[1]; uStack_18 = uStack_18 + 1) {
      FUN_142afac20(uStack_18 * 0x20 + *param_1);
    }
    thunk_FUN_142cacf70(*param_1);
    thunk_FUN_142cacf70(param_1);
  }
  return;
}


/* address=142afa9b0 name=FUN_142afa9b0 */

longlong * FUN_142afa9b0(void)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uStack_38;
  ulonglong uStack_18;
  
  lVar1 = FUN_142afad60();
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x200) == *(int *)(lVar1 + 0x204))) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)_malloc_base(0x10);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      if (*(uint *)(lVar1 + 0x200) < *(uint *)(lVar1 + 0x204)) {
        uStack_38 = (*(int *)(lVar1 + 0x200) + 0x10) - *(int *)(lVar1 + 0x204);
      }
      else {
        uStack_38 = *(int *)(lVar1 + 0x200) - *(int *)(lVar1 + 0x204);
      }
      uVar3 = (ulonglong)uStack_38;
      if (0xf < uVar3) {
        FID_conflict__assert((wchar_t *)s_n_143cb4be0,(wchar_t *)s_D_143cb4b20,0x350);
      }
      lVar1 = _malloc_base(uVar3 * 0x20);
      *plVar2 = lVar1;
      if (*plVar2 == 0) {
        thunk_FUN_142cacf70(plVar2);
        plVar2 = (longlong *)0x0;
      }
      else {
        FUN_142afa8f0(*plVar2,0,uVar3 * 0x20);
        plVar2[1] = uVar3;
        for (uStack_18 = 0; uStack_18 < uVar3; uStack_18 = uStack_18 + 1) {
          FUN_142afac60(uStack_18 * 0x20 + *plVar2);
        }
      }
    }
  }
  return plVar2;
}


/* address=142afab60 name=FUN_142afab60 */

void FUN_142afab60(longlong *param_1)

{
  longlong lVar1;
  ulonglong uStack_18;
  
  if ((param_1 == (longlong *)0x0) || (param_1[1] == 0)) {
    FUN_142afa330();
  }
  else {
    lVar1 = FUN_142afad60();
    if (lVar1 != 0) {
      for (uStack_18 = 0; uStack_18 < (ulonglong)param_1[1]; uStack_18 = uStack_18 + 1) {
        FUN_142afac60(lVar1 + uStack_18 * 0x20,uStack_18 * 0x20 + *param_1);
      }
      *(int *)(lVar1 + 0x200) = (int)param_1[1] + -1;
      *(undefined4 *)(lVar1 + 0x204) = 0xf;
    }
  }
  return;
}


/* address=142afac20 name=FUN_142afac20 */

void FUN_142afac20(longlong param_1)

{
  thunk_FUN_142cacf70(*(undefined8 *)(param_1 + 8));
  FUN_142afa8f0(param_1,0,0x20);
  return;
}


/* address=142afac60 name=FUN_142afac60 */

void FUN_142afac60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_142afac20(param_1);
  *param_1 = *param_2;
  if (param_2[1] != 0) {
    uVar1 = FUN_142ca28c0(param_2[1]);
    param_1[1] = uVar1;
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((longlong)param_1 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
  return;
}


/* address=142afad60 name=FUN_142afad60 */

longlong FUN_142afad60(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_142b81bd0(0);
  if (lVar2 == 0) {
    lVar2 = _malloc_base(0x210);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_142afa8f0(lVar2,0,0x210);
      iVar1 = FUN_142b81c30(0,lVar2,&LAB_142aface0);
      if (iVar1 == 0) {
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


/* address=142afadd0 name=FUN_142afadd0 */

undefined4
FUN_142afadd0(int param_1,int param_2,longlong *param_3,uint *param_4,longlong *param_5,
             undefined4 *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uStack_28;
  
  lVar2 = FUN_142afad60();
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x204) == *(int *)(lVar2 + 0x200))) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      uStack_28 = (*(int *)(lVar2 + 0x204) + 1U) % 0x10;
    }
    else {
      if (param_1 != 0) {
        FID_conflict__assert((wchar_t *)s___143cb4610,(wchar_t *)s_D_143cb4550,0xf3);
      }
      uStack_28 = *(uint *)(lVar2 + 0x200);
    }
    plVar3 = (longlong *)(lVar2 + (ulonglong)uStack_28 * 0x20);
    uVar1 = *(undefined4 *)(plVar3 + 2);
    if ((param_3 != (longlong *)0x0) && (param_4 != (uint *)0x0)) {
      if (*plVar3 == 0) {
        *param_3 = (longlong)&DAT_143cb4544;
        *param_4 = 0;
      }
      else {
        *param_3 = *plVar3;
        *param_4 = (uint)*(ushort *)((longlong)plVar3 + 0x14);
      }
    }
    if (param_5 != (longlong *)0x0) {
      if (plVar3[1] == 0) {
        *param_5 = (longlong)&DAT_143d02ab8;
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = 0;
        }
      }
      else {
        *param_5 = plVar3[1];
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = 3;
        }
        if (param_1 != 0) {
          if (plVar3[1] != 0) {
            thunk_FUN_142cacf70(*(undefined8 *)(lVar2 + 0x208));
            *(longlong *)(lVar2 + 0x208) = plVar3[1];
          }
          plVar3[1] = 0;
        }
      }
    }
    if (param_1 != 0) {
      if (param_2 != 0) {
        FID_conflict__assert((wchar_t *)s___143cb46e0,(wchar_t *)s_D_143cb4620,0x125);
      }
      FUN_142afac20(plVar3);
      *(uint *)(lVar2 + 0x204) = uStack_28;
    }
  }
  return uVar1;
}


/* address=142afb050 name=FUN_142afb050 */

longlong FUN_142afb050(uint param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5)

{
  uint *puVar1;
  uint auStack_18 [6];
  
  if ((param_1 < 0x40) && (param_2 < 0x800)) {
    auStack_18[0] = param_1 << 0x1a | param_2 << 0xf;
    puVar1 = (uint *)FUN_142ca3fb8(auStack_18,param_3,param_4,4,&LAB_142afaff0);
    if (puVar1 == (uint *)0x0) {
      param_5 = 0;
    }
    else {
      param_5 = param_5 + (ulonglong)(*puVar1 & 0x7fff);
    }
  }
  else {
    param_5 = 0;
  }
  return param_5;
}


/* address=142afb0f0 name=FUN_142afb0f0 */

undefined * FUN_142afb0f0(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = FUN_142af9c40(param_1);
  if (uVar1 < 0x22) {
    puVar2 = (&PTR_s_invalid_library__0__14317cfd0)[uVar1];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}


/* address=142afb130 name=FUN_142afb130 */

char * FUN_142afb130(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  iVar1 = FUN_142af9c40(param_1);
  uVar2 = FUN_142af9c60(param_1);
  if (iVar1 == 2) {
    if (uVar2 < 0x7f) {
      pcVar3 = (char *)FUN_142ca8b58(uVar2);
    }
    else {
      pcVar3 = (char *)0x0;
    }
  }
  else if (uVar2 < 0x22) {
    pcVar3 = (&PTR_s_invalid_library__0__14317cfd0)[uVar2];
  }
  else if (uVar2 < 100) {
    if (uVar2 == 0x41) {
      pcVar3 = s_malloc_failure_143cb47d8;
    }
    else if (uVar2 == 0x42) {
      pcVar3 = s_function_should_not_have_been_ca_143cb47e8;
    }
    else if (uVar2 == 0x43) {
      pcVar3 = s_passed_a_null_parameter_143cb4810;
    }
    else if (uVar2 == 0x44) {
      pcVar3 = s_internal_error_143cb4828;
    }
    else if (uVar2 == 0x45) {
      pcVar3 = s_overflow_143cb4838;
    }
    else {
      pcVar3 = (char *)0x0;
    }
  }
  else {
    pcVar3 = (char *)FUN_142afb050(iVar1,uVar2,&DAT_143294ee0,DAT_143295aa8,"ASN1_LENGTH_MISMATCH");
  }
  return pcVar3;
}


/* address=142afb2c0 name=FUN_142afb2c0 */

void FUN_142afb2c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_142afad60();
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x200) == *(int *)(lVar1 + 0x204))) {
    thunk_FUN_142cacf70(param_1);
  }
  else {
    lVar1 = lVar1 + (ulonglong)*(uint *)(lVar1 + 0x200) * 0x20;
    thunk_FUN_142cacf70(*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(lVar1 + 8) = param_1;
  }
  return;
}


/* address=142afb350 name=FUN_142afb350 */

void FUN_142afb350(uint param_1,char **param_2)

{
  size_t sVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  char **ppcStackX_10;
  longlong lStack_48;
  char **ppcStack_38;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  lStack_48 = 0;
  uStack_28 = 0;
  ppcStack_38 = param_2;
  do {
    if (param_1 <= uStack_28) {
      if (lStack_48 != -1) {
        uVar2 = lStack_48 + 1;
        puVar3 = (undefined *)_malloc_base(uVar2);
        if (puVar3 != (undefined *)0x0) {
          *puVar3 = 0;
          ppcStackX_10 = param_2;
          for (uStack_20 = 0; uStack_20 < param_1; uStack_20 = uStack_20 + 1) {
            if ((*ppcStackX_10 != (char *)0x0) &&
               (uVar4 = FUN_142b0f550(puVar3,*ppcStackX_10,uVar2), uVar2 <= uVar4)) {
              FID_conflict__assert((wchar_t *)&DAT_143cb4a5c,(wchar_t *)s_D_143cb49a0,0x2d1);
            }
            ppcStackX_10 = ppcStackX_10 + 1;
          }
          FUN_142afb2c0(puVar3);
        }
      }
      return;
    }
    if (*ppcStack_38 != (char *)0x0) {
      sVar1 = strlen(*ppcStack_38);
      if (-lStack_48 - 1U < sVar1) {
        return;
      }
      lStack_48 = lStack_48 + sVar1;
    }
    uStack_28 = uStack_28 + 1;
    ppcStack_38 = ppcStack_38 + 1;
  } while( true );
}


/* address=142afb4f0 name=FUN_142afb4f0 */

undefined FUN_142afb4f0(undefined8 *param_1,undefined2 param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_142afc250(*param_1,(longlong)param_1 + 0x1a,param_2);
  return uVar1;
}


/* address=142afb530 name=FUN_142afb530 */

undefined FUN_142afb530(undefined8 *param_1,undefined2 param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_142afc2c0(*param_1,param_1 + 3,param_2);
  return uVar1;
}


/* address=142afb5b0 name=FUN_142afb5b0 */

undefined FUN_142afb5b0(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined uVar2;
  longlong lVar3;
  
  cVar1 = FUN_142993030(param_1 + 1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_142992c50(param_1 + 1);
    uVar2 = FUN_142afc250(*param_1,lVar3 + 10,param_2);
  }
  return uVar2;
}


/* address=142afb620 name=FUN_142afb620 */

undefined FUN_142afb620(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined uVar2;
  longlong lVar3;
  
  cVar1 = FUN_142993030(param_1 + 1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_142992c50(param_1 + 1);
    uVar2 = FUN_142afc2c0(*param_1,lVar3 + 8,param_2);
  }
  return uVar2;
}


/* address=142afb730 name=FUN_142afb730 */

undefined2 FUN_142afb730(undefined8 param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_142afc330(param_1);
  uVar1 = FUN_142afc160(uVar1);
  return uVar1;
}


/* address=142afb990 name=FUN_142afb990 */

undefined8 FUN_142afb990(ushort *param_1,ushort param_2)

{
  if (param_2 < 0x305) {
    if ((((param_2 == 0x304) || (param_2 == 0x301)) || (param_2 == 0x302)) || (param_2 == 0x303)) {
      *param_1 = param_2;
      return 1;
    }
  }
  else {
    if (param_2 == 0xfefd) {
      *param_1 = 0x303;
      return 0x301;
    }
    if (param_2 == 0xfeff) {
      *param_1 = 0x302;
      return 0x301;
    }
  }
  return 0;
}


/* address=142afba30 name=FUN_142afba30 */

undefined8 FUN_142afba30(longlong *param_1,ushort *param_2,ushort *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ushort auStack_24 [2];
  ushort auStack_20 [2];
  uint uStack_1c;
  ulonglong uStack_18;
  
  uStack_1c = *(uint *)(*param_1 + 0x80);
  iVar3 = FUN_142989500(*param_1);
  if ((iVar3 != 0) &&
     (uVar4 = uStack_1c & 0xefffffff, uVar5 = uStack_1c & 0x4000000, uStack_1c = uVar4, uVar5 != 0))
  {
    uStack_1c = uVar4 | 0x10000000;
  }
  cVar2 = FUN_142afb990(auStack_24,*(undefined2 *)(param_1[1] + 10));
  if ((cVar2 == '\0') ||
     (cVar2 = FUN_142afb990(auStack_20,*(undefined2 *)(param_1[1] + 8)), cVar2 == '\0')) {
    FUN_142afa690(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                  ,0xba);
    uVar6 = 0;
  }
  else {
    if ((*(longlong *)(*param_1 + 0x98) != 0) && (auStack_24[0] < 0x304)) {
      auStack_24[0] = 0x304;
    }
    bVar1 = false;
    for (uStack_18 = 0; uStack_18 < 4; uStack_18 = uStack_18 + 1) {
      if (auStack_24[0] <= *(ushort *)(&DAT_143180170 + uStack_18 * 8)) {
        if (auStack_20[0] < *(ushort *)(&DAT_143180170 + uStack_18 * 8)) break;
        if ((uStack_1c & *(uint *)(&DAT_143180174 + uStack_18 * 8)) == 0) {
          if (!bVar1) {
            bVar1 = true;
            auStack_24[0] = *(ushort *)(&DAT_143180170 + uStack_18 * 8);
          }
        }
        else if (bVar1) {
          auStack_20[0] = *(ushort *)("ions.cc" + uStack_18 * 8);
          break;
        }
      }
    }
    if (bVar1) {
      *param_2 = auStack_24[0];
      *param_3 = auStack_20[0];
      uVar6 = 1;
    }
    else {
      FUN_142afa690(0x10,0,0x118,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                    ,0xe9);
      uVar6 = 0;
    }
  }
  return uVar6;
}


/* address=142afbc40 name=FUN_142afbc40 */

ulonglong FUN_142afbc40(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  ulonglong uVar2;
  ushort auStack_18 [4];
  undefined8 *puStack_10;
  
  puStack_10 = (undefined8 *)*param_1;
  cVar1 = FUN_142afbcc0(*puStack_10,param_2);
  uVar2 = 0;
  if (cVar1 != '\0') {
    cVar1 = FUN_142afb990(auStack_18,param_2);
    uVar2 = 0;
    if (((cVar1 != '\0') &&
        (uVar2 = (ulonglong)*(ushort *)((longlong)param_1 + 0x1c),
        *(ushort *)((longlong)param_1 + 0x1c) <= auStack_18[0])) &&
       (uVar2 = (ulonglong)auStack_18[0], auStack_18[0] <= *(ushort *)((longlong)param_1 + 0x1e))) {
      return CONCAT71((uint7)(byte)(auStack_18[0] >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


/* address=142afbcc0 name=FUN_142afbcc0 */

ulonglong FUN_142afbcc0(undefined8 param_1,short param_2)

{
  short *psVar1;
  short *psStack_30;
  undefined auStack_18 [24];
  
  FUN_142afc060(auStack_18,param_1);
  psStack_30 = (short *)FUN_142992c50(auStack_18);
  psVar1 = (short *)FUN_142afc3a0(auStack_18);
  while( true ) {
    if (psStack_30 == psVar1) {
      return (ulonglong)psVar1 & 0xffffffffffffff00;
    }
    if (*psStack_30 == param_2) break;
    psStack_30 = psStack_30 + 1;
  }
  return CONCAT71((uint7)(byte)((ushort)*psStack_30 >> 8),1);
}


/* address=142afbd50 name=FUN_142afbd50 */

undefined8 FUN_142afbd50(undefined8 *param_1,undefined8 param_2,ushort param_3)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  ushort auStack_34 [2];
  undefined2 *puStack_30;
  undefined *puStack_28;
  undefined2 *puStack_20;
  undefined auStack_18 [24];
  
  FUN_142afc060(auStack_18,*(undefined8 *)*param_1);
  puStack_28 = auStack_18;
  puStack_30 = (undefined2 *)FUN_142992c50(puStack_28);
  puStack_20 = (undefined2 *)FUN_142afc3a0(puStack_28);
  while( true ) {
    if (puStack_30 == puStack_20) {
      return 1;
    }
    uVar1 = *puStack_30;
    cVar2 = FUN_142afbc40(param_1,uVar1);
    if ((((cVar2 != '\0') && (cVar2 = FUN_142afb990(auStack_34,uVar1), cVar2 != '\0')) &&
        (param_3 <= auStack_34[0])) && (iVar3 = FUN_142b7af50(param_2,uVar1), iVar3 == 0)) break;
    puStack_30 = puStack_30 + 1;
  }
  return 0;
}


/* address=142afbe30 name=FUN_142afbe30 */

undefined8 FUN_142afbe30(undefined8 *param_1,undefined *param_2,short *param_3,undefined *param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sStack_54;
  short *psStack_50;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  FUN_142afc060(auStack_28,*(undefined8 *)*param_1);
  psStack_50 = (short *)FUN_142992c50(auStack_28);
  psVar4 = (short *)FUN_142afc3a0(auStack_28);
  do {
    if (psStack_50 == psVar4) {
      FUN_142afa690(0x10,0,0xf0,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                    ,0x144);
      *param_2 = 0x46;
      return 0;
    }
    sVar1 = *psStack_50;
    cVar2 = FUN_142afbc40(param_1);
    if ((cVar2 != '\0') &&
       ((sVar1 != 0x304 || ((*(byte *)((longlong)param_1 + 0x622) >> 6 & 1) == 0)))) {
      puVar6 = param_4;
      puVar7 = auStack_38;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      while (lVar5 = FUN_142b782f0(auStack_38), lVar5 != 0) {
        iVar3 = FUN_142b78540(auStack_38);
        if (iVar3 == 0) {
          FUN_142afa690(0x10,0,0x89,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_versions.cc"
                        ,0x138);
          *param_2 = 0x32;
          return 0;
        }
        if (sStack_54 == sVar1) {
          *param_3 = sVar1;
          return 1;
        }
      }
    }
    psStack_50 = psStack_50 + 1;
  } while( true );
}


/* address=142afbfd0 name=FUN_142afbfd0 */

undefined2 FUN_142afbfd0(longlong param_1)

{
  char cVar1;
  undefined2 auStack_18 [12];
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 1 & 1) == 0) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0xfb);
  }
  cVar1 = FUN_142afb990(auStack_18,*(undefined2 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    FID_conflict__assert(L"0",(wchar_t *)"D",0xff);
    auStack_18[0] = 0;
  }
  return auStack_18[0];
}


/* address=142afc060 name=FUN_142afc060 */

undefined * FUN_142afc060(undefined *param_1,char *param_2)

{
  longlong lVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  if (*param_2 == '\0') {
    puStack_48 = (undefined *)FUN_142af3e40(auStack_28,&DAT_143180060);
  }
  else {
    puStack_48 = (undefined *)FUN_142afc3c0(auStack_38,&DAT_143180068);
  }
  puVar2 = param_1;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puStack_48;
    puStack_48 = puStack_48 + 1;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


/* address=142afc0e0 name=FUN_142afc0e0 */

char * FUN_142afc0e0(short param_1)

{
  short *psStack_28;
  
  psStack_28 = &DAT_143180070;
  while( true ) {
    if (psStack_28 == (short *)"TLSv1.3") {
      return "unknown";
    }
    if (*psStack_28 == param_1) break;
    psStack_28 = psStack_28 + 8;
  }
  return *(char **)(psStack_28 + 4);
}


/* address=142afc160 name=FUN_142afc160 */

undefined2 FUN_142afc160(undefined2 param_1)

{
  return param_1;
}


/* address=142afc180 name=FUN_142afc180 */

bool FUN_142afc180(undefined2 *param_1,undefined2 param_2)

{
  char cVar1;
  undefined auStack_18 [24];
  
  cVar1 = FUN_142afb990(auStack_18,param_2);
  if (cVar1 != '\0') {
    *param_1 = param_2;
  }
  return cVar1 != '\0';
}


/* address=142afc1d0 name=FUN_142afc1d0 */

undefined8 FUN_142afc1d0(undefined8 param_1,undefined2 *param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 auStackX_18 [8];
  
  auStackX_18[0] = param_3;
  cVar1 = FUN_142afc180(auStackX_18,param_3);
  if ((cVar1 != '\0') && (cVar1 = FUN_142afbcc0(param_1,auStackX_18[0]), cVar1 != '\0')) {
    *param_2 = auStackX_18[0];
    return 1;
  }
  FUN_142afa690(0x10,0,0xea,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_vers"
                ,0x81);
  return 0;
}


/* address=142afc250 name=FUN_142afc250 */

undefined8 FUN_142afc250(char *param_1,undefined2 *param_2,short param_3)

{
  undefined8 uVar1;
  undefined2 uStack_18;
  
  if (param_3 == 0) {
    if (*param_1 == '\0') {
      uStack_18 = 0x301;
    }
    else {
      uStack_18 = 0xfeff;
    }
    *param_2 = uStack_18;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_142afc1d0(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=142afc2c0 name=FUN_142afc2c0 */

undefined8 FUN_142afc2c0(char *param_1,undefined2 *param_2,short param_3)

{
  undefined8 uVar1;
  undefined2 uStack_18;
  
  if (param_3 == 0) {
    if (*param_1 == '\0') {
      uStack_18 = 0x304;
    }
    else {
      uStack_18 = 0xfefd;
    }
    *param_2 = uStack_18;
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_142afc1d0(param_1,param_2,param_3);
  }
  return uVar1;
}


/* address=142afc330 name=FUN_142afc330 */

undefined2 FUN_142afc330(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_14298e180(param_1);
  if ((iVar2 == 0) || ((*(byte *)(param_1 + 0xa4) & 1) != 0)) {
    uVar1 = *(undefined2 *)(param_1 + 0x10);
  }
  else {
    lVar3 = FUN_142992c50(*(longlong *)(param_1 + 0x30) + 0x118);
    lVar3 = FUN_142992c50(lVar3 + 0x5e8);
    uVar1 = *(undefined2 *)(lVar3 + 4);
  }
  return uVar1;
}


/* address=142afc3a0 name=FUN_142afc3a0 */

longlong FUN_142afc3a0(longlong *param_1)

{
  return *param_1 + param_1[1] * 2;
}


/* address=142afc3c0 name=FUN_142afc3c0 */

undefined8 FUN_142afc3c0(undefined8 param_1,undefined8 param_2)

{
  FUN_142992f30(param_1,param_2,2);
  return param_1;
}


/* address=142afc3f0 name=FUN_142afc3f0 */

longlong FUN_142afc3f0(longlong *param_1,ulonglong param_2)

{
  if ((ulonglong)param_1[1] <= param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *param_1 + param_2 * 8;
}


/* address=142afc430 name=FUN_142afc430 */

undefined8 FUN_142afc430(longlong *param_1,undefined8 param_2,ulonglong param_3,__uint64 param_4)

{
  __uint64 *p_Var1;
  __uint64 _StackX_20;
  __uint64 a_Stack_18 [3];
  
  _StackX_20 = param_4;
  if ((ulonglong)param_1[1] < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  a_Stack_18[0] = param_1[1] - param_3;
  p_Var1 = std::_Min_value<unsigned___int64>(a_Stack_18,&_StackX_20);
  FUN_142992f30(param_2,*param_1 + param_3 * 8,*p_Var1);
  return param_2;
}


/* address=142afc4b0 name=FUN_142afc4b0 */

void FUN_142afc4b0(ushort param_1)

{
  undefined auStack_38 [16];
  uint uStack_28;
  
  uStack_28 = param_1 | 0x3000000;
  FUN_142ca3fb8(auStack_38,&PTR_s_DES_CBC3_SHA_143180730,0x18,0x28,&LAB_142aff340);
  return;
}


/* address=142afc500 name=FUN_142afc500 */

undefined4 FUN_142afc500(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}


/* address=142afc520 name=FUN_142afc520 */

undefined2 FUN_142afc520(longlong param_1)

{
  if ((*(uint *)(param_1 + 0x10) & 0xff000000) != 0x3000000) {
    FID_conflict__assert((wchar_t *)"(",(wchar_t *)"D",0x557);
  }
  return *(undefined2 *)(param_1 + 0x10);
}


/* address=142afc5b0 name=FUN_142afc5b0 */

bool FUN_142afc5b0(longlong param_1)

{
  return *(int *)(param_1 + 0x20) != 4;
}


/* address=142afc8b0 name=FUN_142afc8b0 */

undefined8 FUN_142afc8b0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x14) == 8) || (*(int *)(param_1 + 0x18) == 8)) {
    uVar1 = 0x304;
  }
  else if (*(int *)(param_1 + 0x24) == 1) {
    uVar1 = 0x300;
  }
  else {
    uVar1 = 0x303;
  }
  return uVar1;
}


/* address=142afc8f0 name=FUN_142afc8f0 */

undefined8 FUN_142afc8f0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x14) == 8) || (*(int *)(param_1 + 0x18) == 8)) {
    uVar1 = 0x304;
  }
  else {
    uVar1 = 0x303;
  }
  return uVar1;
}


/* address=142afc940 name=FUN_142afc940 */

char * FUN_142afc940(char **param_1)

{
  char *pcVar1;
  
  if (param_1 == (char **)0x0) {
    pcVar1 = "(NONE)";
  }
  else {
    pcVar1 = *param_1;
  }
  return pcVar1;
}


/* address=142afcae0 name=FUN_142afcae0 */

undefined4 FUN_142afcae0(longlong param_1,undefined4 *param_2)

{
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_1 == 0) {
    uStack_10 = 0;
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 1:
      uStack_14 = 0xa8;
      uStack_10 = 0x70;
      break;
    case 2:
    case 8:
      uStack_14 = 0x80;
      uStack_10 = 0x80;
      break;
    default:
      FID_conflict__assert(L"0",(wchar_t *)"D",0x613);
      uStack_14 = 0;
      uStack_10 = 0;
      break;
    case 4:
    case 0x10:
    case 0x20:
      uStack_14 = 0x100;
      uStack_10 = 0x100;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = uStack_14;
    }
  }
  return uStack_10;
}


/* address=142afd190 name=FUN_142afd190 */

void FUN_142afd190(undefined8 param_1)

{
  FUN_142afc520(param_1);
  return;
}


/* address=142afd1b0 name=FUN_142afd1b0 */

undefined8 FUN_142afd1b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142afd200 name=FUN_142afd200 */

undefined8 FUN_142afd200(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142afd240 name=FUN_142afd240 */

void FUN_142afd240(longlong param_1)

{
  FUN_142b0eaa0(*(undefined8 *)(param_1 + 8));
  FUN_142994440(param_1);
  return;
}


/* address=142afd280 name=FUN_142afd280 */

undefined FUN_142afd280(longlong param_1,undefined8 param_2,undefined *param_3)

{
  undefined uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined auStack_48 [8];
  undefined auStack_40 [24];
  undefined auStack_28 [24];
  
  uVar3 = FUN_142992c50(param_2);
  lVar4 = FUN_142993080(uVar3);
  lVar5 = FUN_142992f60(param_3);
  if (lVar4 == lVar5) {
    FUN_142993420(auStack_40);
    puVar6 = auStack_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *param_3;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar2 = FUN_142aff510(auStack_40,auStack_28);
    if (cVar2 == '\0') {
      FUN_1429934a0(auStack_40);
      FUN_142994440(param_2);
      uVar1 = 0;
    }
    else {
      uVar3 = FUN_142992cb0(param_2);
      FUN_142aff580(param_1,uVar3);
      FUN_142993590(auStack_40,param_1 + 8,auStack_48);
      FUN_1429934a0(auStack_40);
      FUN_142994440(param_2);
      uVar1 = 1;
    }
  }
  else {
    FUN_142afa690(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                  ,0x2dc);
    FUN_142994440(param_2);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142afd600 name=FUN_142afd600 */

undefined8
FUN_142afd600(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             ushort param_5,char param_6)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  if ((param_5 == 0x303) && (param_6 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((param_5 == 0x304) && (param_6 == '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (*(int *)(param_4 + 0x20) == 4) {
    if (*(int *)(param_4 + 0x1c) == 8) {
      if (bVar1) {
        uVar3 = FUN_142b3d130();
        *param_1 = uVar3;
      }
      else if (bVar2) {
        uVar3 = FUN_142b3d190();
        *param_1 = uVar3;
      }
      else {
        uVar3 = FUN_142b3c530();
        *param_1 = uVar3;
      }
      *param_3 = 4;
    }
    else if (*(int *)(param_4 + 0x1c) == 0x10) {
      if (bVar1) {
        uVar3 = FUN_142b3d160();
        *param_1 = uVar3;
      }
      else if (bVar2) {
        uVar3 = FUN_142b3d1c0();
        *param_1 = uVar3;
      }
      else {
        uVar3 = FUN_142b3c590();
        *param_1 = uVar3;
      }
      *param_3 = 4;
    }
    else {
      if (*(int *)(param_4 + 0x1c) != 0x20) {
        return 0;
      }
      uVar3 = FUN_142bb0810();
      *param_1 = uVar3;
      *param_3 = 0xc;
    }
    if (0x303 < param_5) {
      uVar3 = FUN_142b3c710(*param_1);
      *param_3 = uVar3;
    }
  }
  else if (*(int *)(param_4 + 0x20) == 1) {
    if (*(int *)(param_4 + 0x1c) == 1) {
      if (param_5 == 0x301) {
        uVar3 = FUN_142c22340();
        *param_1 = uVar3;
        *param_3 = 8;
      }
      else {
        uVar3 = FUN_142c22330();
        *param_1 = uVar3;
      }
    }
    else if (*(int *)(param_4 + 0x1c) == 2) {
      if (param_5 == 0x301) {
        uVar3 = FUN_142c222f0();
        *param_1 = uVar3;
        *param_3 = 0x10;
      }
      else {
        uVar3 = FUN_142c222e0();
        *param_1 = uVar3;
      }
    }
    else {
      if (*(int *)(param_4 + 0x1c) != 4) {
        return 0;
      }
      if (param_5 == 0x301) {
        uVar3 = FUN_142c22320();
        *param_1 = uVar3;
        *param_3 = 0x10;
      }
      else {
        uVar3 = FUN_142c22310();
        *param_1 = uVar3;
      }
    }
    *param_2 = 0x14;
  }
  else {
    if (*(int *)(param_4 + 0x20) != 2) {
      return 0;
    }
    if (*(int *)(param_4 + 0x1c) != 2) {
      return 0;
    }
    uVar3 = FUN_142c22300();
    *param_1 = uVar3;
    *param_2 = 0x20;
  }
  return 1;
}


/* address=142afd8d0 name=FUN_142afd8d0 */

undefined8 FUN_142afd8d0(ushort param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 == 1) {
    if (param_1 < 0x303) {
      uVar2 = FUN_142b11ce0();
    }
    else {
      uVar2 = FUN_142b11c20();
    }
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_142b11c20();
  }
  else if (iVar1 == 4) {
    uVar2 = FUN_142b11c50();
  }
  else {
    FID_conflict__assert(L"0",(wchar_t *)"D",0x29a);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142afd970 name=FUN_142afd970 */

void FUN_142afd970(longlong param_1,char param_2,char *param_3,undefined param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined auStack_438 [32];
  undefined4 uStack_418;
  longlong lStack_408;
  undefined uStack_400;
  undefined uStack_3ff;
  undefined uStack_3fe;
  undefined uStack_3fd;
  undefined uStack_3fc;
  ulonglong uStack_3f8;
  undefined auStack_3f0 [8];
  undefined2 uStack_3e8;
  undefined2 uStack_3e4;
  undefined2 uStack_3e0;
  undefined2 uStack_3dc;
  char *pcStack_3d8;
  longlong *plStack_3d0;
  undefined auStack_3c8 [8];
  undefined2 *puStack_3c0;
  undefined2 *puStack_3b8;
  undefined2 *puStack_3b0;
  undefined2 *puStack_3a8;
  longlong lStack_3a0;
  undefined auStack_398 [16];
  longlong *plStack_388;
  longlong *plStack_380;
  undefined2 *puStack_378;
  undefined2 *puStack_370;
  undefined2 *puStack_368;
  undefined2 *puStack_360;
  undefined *puStack_358;
  longlong *plStack_350;
  undefined2 *puStack_348;
  undefined2 *puStack_340;
  undefined2 *puStack_338;
  longlong lStack_330;
  undefined auStack_328 [8];
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined2 *puStack_310;
  undefined auStack_308 [16];
  undefined auStack_2f8 [16];
  undefined auStack_2e8 [16];
  undefined auStack_2d8 [16];
  longlong lStack_2c8;
  undefined auStack_2c0 [8];
  longlong *aplStack_2b8 [78];
  undefined auStack_48 [32];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_438;
  if ((param_3 != (char *)0x0) && (param_1 != 0)) {
    for (uStack_3f8 = 0; uStack_3f8 < 0x15; uStack_3f8 = uStack_3f8 + 1) {
      if (uStack_3f8 + 1 < 0x15) {
        plStack_350 = &lStack_2c8 + (uStack_3f8 + 1) * 4;
      }
      else {
        plStack_350 = (longlong *)0x0;
      }
      aplStack_2b8[uStack_3f8 * 4] = plStack_350;
      if (uStack_3f8 == 0) {
        plStack_380 = (longlong *)0x0;
      }
      else {
        plStack_380 = &lStack_2c8 + (uStack_3f8 - 1) * 4;
      }
      aplStack_2b8[uStack_3f8 * 4 + 1] = plStack_380;
      auStack_2c0[uStack_3f8 * 0x20] = 0;
      auStack_2c0[uStack_3f8 * 0x20 + 1] = 0;
    }
    plStack_388 = &lStack_2c8;
    puStack_358 = auStack_48;
    lStack_408 = 0;
    if (param_2 != '\0') {
      puStack_378 = &DAT_1431827b0;
      puStack_310 = &DAT_1431827b8;
      for (puStack_3c0 = &DAT_1431827b0; puStack_3c0 != puStack_310; puStack_3c0 = puStack_3c0 + 1)
      {
        uStack_3dc = *puStack_3c0;
        lVar4 = FUN_142afc4b0(uStack_3dc);
        (&lStack_2c8)[lStack_408 * 4] = lVar4;
        lVar5 = lStack_408 + 1;
        lVar4 = lStack_408 * 4;
        lStack_408 = lVar5;
        if ((&lStack_2c8)[lVar4] == 0) {
          FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x4a9);
        }
      }
    }
    puStack_370 = &DAT_1431827b8;
    puStack_348 = (undefined2 *)&DAT_1431827be;
    for (puStack_3b8 = &DAT_1431827b8; puStack_3b8 != puStack_348; puStack_3b8 = puStack_3b8 + 1) {
      uStack_3e8 = *puStack_3b8;
      lVar4 = FUN_142afc4b0(uStack_3e8);
      (&lStack_2c8)[lStack_408 * 4] = lVar4;
      lVar5 = lStack_408 + 1;
      lVar4 = lStack_408 * 4;
      lStack_408 = lVar5;
      if ((&lStack_2c8)[lVar4] == 0) {
        FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x4ae);
      }
    }
    if (param_2 == '\0') {
      puStack_368 = &DAT_1431827b0;
      puStack_340 = &DAT_1431827b8;
      for (puStack_3b0 = &DAT_1431827b0; puStack_3b0 != puStack_340; puStack_3b0 = puStack_3b0 + 1)
      {
        uStack_3e4 = *puStack_3b0;
        lVar4 = FUN_142afc4b0(uStack_3e4);
        (&lStack_2c8)[lStack_408 * 4] = lVar4;
        lVar5 = lStack_408 + 1;
        lVar4 = lStack_408 * 4;
        lStack_408 = lVar5;
        if ((&lStack_2c8)[lVar4] == 0) {
          FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x4b3);
        }
      }
    }
    puStack_360 = &DAT_1431827c0;
    puStack_338 = (undefined2 *)&DAT_1431827dc;
    for (puStack_3a8 = &DAT_1431827c0; puStack_3a8 != puStack_338; puStack_3a8 = puStack_3a8 + 1) {
      uStack_3e0 = *puStack_3a8;
      lVar4 = FUN_142afc4b0(uStack_3e0);
      (&lStack_2c8)[lStack_408 * 4] = lVar4;
      lVar5 = lStack_408 + 1;
      lVar4 = lStack_408 * 4;
      lStack_408 = lVar5;
      if ((&lStack_2c8)[lVar4] == 0) {
        FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x4b8);
      }
    }
    if (lStack_408 != 0x15) {
      FID_conflict__assert((wchar_t *)"n",(wchar_t *)"D",0x4ba);
    }
    pcStack_3d8 = param_3;
    iVar3 = strncmp(param_3,"DEFAULT",7);
    pcVar1 = pcStack_3d8;
    if (iVar3 == 0) {
      cVar2 = FUN_142afec00(&DAT_143181424,&plStack_388,&puStack_358,param_4);
      if (cVar2 == '\0') goto LAB_142afe1f0;
      pcVar1 = pcStack_3d8 + 7;
      if (pcStack_3d8[7] == ':') {
        pcVar1 = pcStack_3d8 + 8;
      }
    }
    pcStack_3d8 = pcVar1;
    if ((*pcStack_3d8 == '\0') ||
       (cVar2 = FUN_142afec00(pcStack_3d8,&plStack_388,&puStack_358,param_4), cVar2 != '\0')) {
      uVar6 = FUN_142993000();
      FUN_142992e20(auStack_3f0,uVar6);
      FUN_142993420(auStack_398);
      cVar2 = operator==<>(auStack_3f0,0);
      if ((cVar2 == '\0') && (cVar2 = FUN_1429935e0(auStack_398,0x18), cVar2 != '\0')) {
        lStack_3a0 = 0;
        for (plStack_3d0 = plStack_388; plStack_3d0 != (longlong *)0x0;
            plStack_3d0 = (longlong *)plStack_3d0[2]) {
          if (*(char *)(plStack_3d0 + 1) != '\0') {
            uVar6 = FUN_142992c50(auStack_3f0);
            lVar4 = FUN_142aee8f0(uVar6,*plStack_3d0);
            if (lVar4 == 0) {
              uStack_3ff = 0;
              FUN_1429934a0(auStack_398);
              FUN_142994440(auStack_3f0);
              goto LAB_142afe1f0;
            }
            lStack_330 = lStack_3a0;
            puVar7 = (undefined *)FUN_142aff4f0(auStack_398,lStack_3a0);
            *puVar7 = *(undefined *)((longlong)plStack_3d0 + 9);
            lStack_3a0 = lStack_3a0 + 1;
          }
        }
        uVar6 = FUN_142aff6f0(auStack_328);
        FUN_142992e50(auStack_3c8,uVar6);
        FUN_142993e90(auStack_328);
        cVar2 = FUN_142993030(auStack_3c8);
        if (cVar2 != '\0') {
          puStack_320 = auStack_308;
          uVar6 = FUN_142aff730(auStack_2e8,auStack_398);
          puVar7 = (undefined *)FUN_1429937e0(uVar6,auStack_2d8,0,lStack_3a0);
          puVar8 = auStack_2f8;
          for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          uVar6 = FUN_142992cb0(auStack_3f0);
          uStack_318 = FUN_142992e50(puStack_320,uVar6);
          uVar6 = FUN_142992c50(auStack_3c8);
          cVar2 = FUN_142afd280(uVar6,uStack_318,auStack_2f8);
          if (cVar2 != '\0') {
            uVar6 = FUN_142992cb0(auStack_3c8);
            FUN_142aff780(param_1,uVar6);
            uVar6 = FUN_142992c50(param_1);
            uVar6 = FUN_142992c50(uVar6);
            lVar4 = FUN_142993080(uVar6);
            if (lVar4 == 0) {
              uStack_418 = 0x4f5;
              FUN_142afa690(0x10,0,0xb1,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                           );
              uStack_3fd = 0;
              FUN_142993e90(auStack_3c8);
              FUN_1429934a0(auStack_398);
              FUN_142994440(auStack_3f0);
            }
            else {
              uStack_3fc = 1;
              FUN_142993e90(auStack_3c8);
              FUN_1429934a0(auStack_398);
              FUN_142994440(auStack_3f0);
            }
            goto LAB_142afe1f0;
          }
        }
        uStack_3fe = 0;
        FUN_142993e90(auStack_3c8);
        FUN_1429934a0(auStack_398);
        FUN_142994440(auStack_3f0);
      }
      else {
        uStack_400 = 0;
        FUN_1429934a0(auStack_398);
        FUN_142994440(auStack_3f0);
      }
    }
  }
LAB_142afe1f0:
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_438);
  return;
}


/* address=142afe210 name=FUN_142afe210 */

undefined8 FUN_142afe210(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_142b0fea0(param_1);
  if (iVar1 == 6) {
    uVar2 = 1;
  }
  else if ((iVar1 == 0x198) || (iVar1 == 0x3b5)) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142afe260 name=FUN_142afe260 */

bool FUN_142afe260(longlong param_1)

{
  return (*(uint *)(param_1 + 0x18) & 3) != 0;
}


/* address=142afe2a0 name=FUN_142afe2a0 */

bool FUN_142afe2a0(longlong param_1)

{
  return (*(uint *)(param_1 + 0x14) & 2) != 0;
}


/* address=142afe2e0 name=FUN_142afe2e0 */

longlong FUN_142afe2e0(longlong param_1)

{
  int iVar1;
  ulonglong uStack_18;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    uStack_18 = 8;
  }
  else {
    if ((iVar1 != 2) && (iVar1 != 4)) {
      return 0;
    }
    uStack_18 = 0x10;
  }
  if (*(int *)(param_1 + 0x20) != 1) {
    FID_conflict__assert((wchar_t *)"c",(wchar_t *)"D",0x522);
  }
  return (uStack_18 - 0x15U % uStack_18) + 0x15;
}


/* address=142afe390 name=FUN_142afe390 */

bool FUN_142afe390(longlong param_1)

{
  return *(int *)(param_1 + 0x10) == 0x300c027;
}


/* address=142afe3d0 name=FUN_142afe3d0 */

undefined FUN_142afe3d0(char param_1,char param_2)

{
  undefined uStack_18;
  
  if (param_1 == ':') {
    uStack_18 = 1;
  }
  else if ((param_2 == '\0') && (((param_1 == ' ' || (param_1 == ';')) || (param_1 == ',')))) {
    uStack_18 = 1;
  }
  else {
    uStack_18 = 0;
  }
  return uStack_18;
}


/* address=142afe430 name=FUN_142afe430 */

undefined FUN_142afe430(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  undefined uStack_18;
  
  iVar1 = strncmp(param_1,param_2,param_3);
  if ((iVar1 == 0) && (param_1[param_3] == '\0')) {
    uStack_18 = 1;
  }
  else {
    uStack_18 = 0;
  }
  return uStack_18;
}


/* address=142afe4a0 name=FUN_142afe4a0 */

void FUN_142afe4a0(longlong *param_1,longlong param_2,longlong *param_3)

{
  if (param_2 != *param_3) {
    if (param_2 == *param_1) {
      *param_1 = *(longlong *)(param_2 + 0x10);
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    *(longlong *)(*param_3 + 0x10) = param_2;
    *(longlong *)(param_2 + 0x18) = *param_3;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *param_3 = param_2;
  }
  return;
}


/* address=142afe570 name=FUN_142afe570 */

void FUN_142afe570(longlong *param_1,longlong param_2,longlong *param_3)

{
  if (param_2 != *param_1) {
    if (param_2 == *param_3) {
      *param_3 = *(longlong *)(param_2 + 0x18);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    *(longlong *)(*param_1 + 0x18) = param_2;
    *(longlong *)(param_2 + 0x10) = *param_1;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *param_1 = param_2;
  }
  return;
}


/* address=142afe640 name=FUN_142afe640 */

void FUN_142afe640(int param_1,longlong param_2,int param_3,int param_4,undefined param_5,
                  longlong **param_6,longlong **param_7)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong *plStack_40;
  longlong *plStack_30;
  longlong *plStack_28;
  longlong *plStack_20;
  longlong *plStack_18;
  longlong *plStack_10;
  
  if ((((param_1 != 0) || (param_4 != -1)) || (*(short *)(param_2 + 0x18) != 0)) ||
     (((*(int *)(param_2 + 8) != 0 && (*(int *)(param_2 + 0xc) != 0)) &&
      ((*(int *)(param_2 + 0x10) != 0 && (*(int *)(param_2 + 0x14) != 0)))))) {
    plStack_30 = *param_6;
    plStack_28 = *param_7;
    plStack_20 = plStack_30;
    plStack_18 = plStack_28;
    if (param_3 == 3) {
      plStack_20 = plStack_28;
      plStack_18 = plStack_30;
    }
    plStack_40 = (longlong *)0x0;
LAB_142afe716:
    while (plVar2 = plStack_20, plStack_40 != plStack_18) {
      plStack_40 = plStack_20;
      if (plStack_20 == (longlong *)0x0) break;
      if (param_3 != 3) {
        plStack_10 = (longlong *)plStack_20[2];
      }
      else {
        plStack_10 = (longlong *)plStack_20[3];
      }
      plStack_20 = plStack_10;
      lVar1 = *plVar2;
      if (param_1 == 0) {
        if (param_4 < 0) goto LAB_142afe7c1;
        iVar5 = FUN_142afcae0(lVar1,0);
        if (param_4 == iVar5) goto LAB_142afe867;
      }
      else if (param_1 == *(int *)(lVar1 + 0x10)) goto LAB_142afe867;
    }
    *param_6 = plStack_30;
    *param_7 = plStack_28;
  }
  return;
LAB_142afe7c1:
  if ((((((*(uint *)(param_2 + 8) & *(uint *)(lVar1 + 0x14)) != 0) &&
        ((*(uint *)(param_2 + 0xc) & *(uint *)(lVar1 + 0x18)) != 0)) &&
       (((*(uint *)(param_2 + 0x10) & *(uint *)(lVar1 + 0x1c)) != 0 &&
        ((*(uint *)(param_2 + 0x14) & *(uint *)(lVar1 + 0x20)) != 0)))) &&
      ((*(short *)(param_2 + 0x18) == 0 ||
       (sVar4 = FUN_142afc8b0(lVar1), sVar4 == *(short *)(param_2 + 0x18))))) &&
     ((*(char *)(param_2 + 0x1a) != '\0' || (cVar3 = FUN_142afe390(lVar1), cVar3 == '\0')))) {
LAB_142afe867:
    if (param_3 == 1) {
      if (*(char *)(plVar2 + 1) == '\0') {
        FUN_142afe4a0(&plStack_30,plVar2,&plStack_28);
        *(undefined *)(plVar2 + 1) = 1;
        *(undefined *)((longlong)plVar2 + 9) = param_5;
      }
    }
    else if (param_3 == 4) {
      if (*(char *)(plVar2 + 1) != '\0') {
        FUN_142afe4a0(&plStack_30,plVar2,&plStack_28);
        *(undefined *)((longlong)plVar2 + 9) = 0;
      }
    }
    else if (param_3 == 3) {
      if (*(char *)(plVar2 + 1) != '\0') {
        FUN_142afe570(&plStack_30,plVar2,&plStack_28);
        *(undefined *)(plVar2 + 1) = 0;
        *(undefined *)((longlong)plVar2 + 9) = 0;
      }
    }
    else if (param_3 == 2) {
      if (plStack_30 == plVar2) {
        plStack_30 = (longlong *)plVar2[2];
      }
      else {
        *(longlong *)(plVar2[3] + 0x10) = plVar2[2];
      }
      if (plStack_28 == plVar2) {
        plStack_28 = (longlong *)plVar2[3];
      }
      *(undefined *)(plVar2 + 1) = 0;
      if (plVar2[2] != 0) {
        *(longlong *)(plVar2[2] + 0x18) = plVar2[3];
      }
      if (plVar2[3] != 0) {
        *(longlong *)(plVar2[3] + 0x10) = plVar2[2];
      }
      plVar2[2] = 0;
      plVar2[3] = 0;
    }
  }
  goto LAB_142afe716;
}


/* address=142afea20 name=FUN_142afea20 */

undefined FUN_142afea20(undefined8 *param_1,undefined8 param_2)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iStack_44;
  int iStack_40;
  undefined8 *puStack_38;
  undefined auStack_20 [32];
  
  iStack_44 = 0;
  for (puStack_38 = (undefined8 *)*param_1; puStack_38 != (undefined8 *)0x0;
      puStack_38 = (undefined8 *)puStack_38[2]) {
    if (*(char *)(puStack_38 + 1) != '\0') {
      iVar3 = FUN_142afcae0(*puStack_38,0);
      if (iStack_44 < iVar3) {
        iStack_44 = FUN_142afcae0(*puStack_38,0);
      }
    }
  }
  FUN_142993420(auStack_20);
  cVar2 = FUN_142aff600(auStack_20,(longlong)(iStack_44 + 1));
  if (cVar2 == '\0') {
    FUN_1429934a0(auStack_20);
    uVar1 = 0;
  }
  else {
    uVar4 = FUN_142992c50(auStack_20);
    FUN_142afd200(uVar4,0,(longlong)(iStack_44 + 1) << 2);
    for (puStack_38 = (undefined8 *)*param_1; puStack_38 != (undefined8 *)0x0;
        puStack_38 = (undefined8 *)puStack_38[2]) {
      if (*(char *)(puStack_38 + 1) != '\0') {
        FUN_142afcae0(*puStack_38,0);
        piVar5 = (int *)FUN_142aff5e0(auStack_20);
        *piVar5 = *piVar5 + 1;
      }
    }
    for (iStack_40 = iStack_44; -1 < iStack_40; iStack_40 = iStack_40 + -1) {
      piVar5 = (int *)FUN_142aff5e0(auStack_20,(longlong)iStack_40);
      if (0 < *piVar5) {
        FUN_142afe640(0,0,4,iStack_40,0,param_1,param_2);
      }
    }
    FUN_1429934a0(auStack_20);
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142afec00 name=FUN_142afec00 */

/* WARNING: Removing unreachable block (ram,0x000142afed9e) */

ulonglong FUN_142afec00(char *param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char *_Str1;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  char cStack_78;
  char cStack_77;
  char *pcStack_70;
  int iStack_64;
  ulonglong uStack_60;
  int iStack_58;
  longlong lStack_50;
  undefined auStack_30 [8];
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  short sStack_18;
  byte bStack_16;
  
  cStack_77 = '\0';
  bVar1 = false;
  pcStack_70 = param_1;
  do {
    while( true ) {
      cVar4 = *pcStack_70;
      if (cVar4 == '\0') {
        if (cStack_77 == '\0') {
          uVar6 = 1;
        }
        else {
          uVar6 = FUN_142afa690(0x10,0,0x9e,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                ,0x465);
          uVar6 = uVar6 & 0xffffffffffffff00;
        }
        return uVar6;
      }
      if (cStack_77 == '\0') break;
      if (cVar4 == ']') {
        if (*param_3 != 0) {
          *(undefined *)(*param_3 + 9) = 0;
        }
        cStack_77 = '\0';
        pcStack_70 = pcStack_70 + 1;
      }
      else if (cVar4 == '|') {
        pcStack_70 = pcStack_70 + 1;
      }
      else {
        iVar5 = FUN_142b0f010((int)cVar4);
        if (iVar5 == 0) {
          uVar6 = FUN_142afa690(0x10,0,0xe0,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                ,0x3d3);
          return uVar6 & 0xffffffffffffff00;
        }
        iStack_64 = 1;
LAB_142afeddf:
        if ((bVar1) && (iStack_64 != 1)) {
          uVar6 = FUN_142afa690(0x10,0,0xa8,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                ,0x3f1);
          return uVar6 & 0xffffffffffffff00;
        }
        cVar4 = FUN_142afe3d0(cVar4,param_4);
        if (cVar4 == '\0') {
          bVar2 = false;
          iStack_58 = 0;
          FUN_142aff490(auStack_30);
          bVar3 = false;
          bStack_16 = iStack_64 != 1;
          while( true ) {
            _Str1 = pcStack_70;
            cStack_78 = *pcStack_70;
            lStack_50 = 0;
            while ((((iVar5 = FUN_142b0f010((int)cStack_78), iVar5 != 0 || (cStack_78 == '-')) ||
                    (cStack_78 == '.')) || (cStack_78 == '_'))) {
              pcStack_70 = pcStack_70 + 1;
              lStack_50 = lStack_50 + 1;
              cStack_78 = *pcStack_70;
            }
            if (lStack_50 == 0) {
              uVar6 = FUN_142afa690(0x10,0,0x9e,
                                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                    ,0x40e);
              return uVar6 & 0xffffffffffffff00;
            }
            if (iStack_64 == 5) break;
            if ((!bVar2) && (cStack_78 != '+')) {
              for (uStack_60 = 0; uStack_60 < 0x18; uStack_60 = uStack_60 + 1) {
                cVar4 = FUN_142afe430((&PTR_s_DES_CBC3_SHA_143180730)[uStack_60 * 5],_Str1,lStack_50
                                     );
                if ((cVar4 != '\0') ||
                   (cVar4 = FUN_142afe430((&PTR_s_TLS_RSA_WITH_3DES_EDE_CBC_SHA_143180738)
                                          [uStack_60 * 5],_Str1,lStack_50), cVar4 != '\0')) {
                  iStack_58 = *(int *)(&DAT_143180740 + uStack_60 * 0x28);
                  break;
                }
              }
            }
            if (iStack_58 == 0) {
              for (uStack_60 = 0; uStack_60 < 0x1d; uStack_60 = uStack_60 + 1) {
                cVar4 = FUN_142afe430((&PTR_DAT_143180af0)[uStack_60 * 4],_Str1,lStack_50);
                if (cVar4 != '\0') {
                  uStack_28 = uStack_28 & *(uint *)(&DAT_143180af8 + uStack_60 * 0x20);
                  uStack_24 = uStack_24 & *(uint *)(&DAT_143180afc + uStack_60 * 0x20);
                  uStack_20 = uStack_20 & *(uint *)(&DAT_143180b00 + uStack_60 * 0x20);
                  uStack_1c = uStack_1c & *(uint *)(&DAT_143180b04 + uStack_60 * 0x20);
                  bStack_16 = bStack_16 | (&DAT_143180b0a)[uStack_60 * 0x20];
                  if ((sStack_18 == 0) ||
                     (sStack_18 == *(short *)(&DAT_143180b08 + uStack_60 * 0x20))) {
                    sStack_18 = *(short *)(&DAT_143180b08 + uStack_60 * 0x20);
                  }
                  else {
                    bVar3 = true;
                  }
                  break;
                }
              }
              if ((uStack_60 == 0x1d) && (bVar3 = true, param_4 != '\0')) {
                uVar6 = FUN_142afa690(0x10,0,0x9e,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                      ,0x441);
                return uVar6 & 0xffffffffffffff00;
              }
            }
            if (cStack_78 != '+') break;
            pcStack_70 = pcStack_70 + 1;
            bVar2 = true;
          }
          if (iStack_64 == 5) {
            if ((lStack_50 != 8) || (iVar5 = strncmp(_Str1,"STRENGTH",8), iVar5 != 0)) {
              uVar6 = FUN_142afa690(0x10,0,0x9e,
                                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cipher.cc"
                                    ,0x452);
              return uVar6 & 0xffffffffffffff00;
            }
            cVar4 = FUN_142afea20(param_2,param_3);
            if (cVar4 == '\0') {
              return 0;
            }
            while ((*pcStack_70 != '\0' &&
                   (cVar4 = FUN_142afe3d0(*pcStack_70,param_4), cVar4 == '\0'))) {
              pcStack_70 = pcStack_70 + 1;
            }
          }
          else if (!bVar3) {
            FUN_142afe640(iStack_58,auStack_30,iStack_64,0xffffffff,cStack_77,param_2,param_3);
          }
        }
        else {
          pcStack_70 = pcStack_70 + 1;
        }
      }
    }
    if (cVar4 == '-') {
      iStack_64 = 3;
      pcStack_70 = pcStack_70 + 1;
      goto LAB_142afeddf;
    }
    if (cVar4 == '+') {
      iStack_64 = 4;
      pcStack_70 = pcStack_70 + 1;
      goto LAB_142afeddf;
    }
    if (cVar4 == '!') {
      iStack_64 = 2;
      pcStack_70 = pcStack_70 + 1;
      goto LAB_142afeddf;
    }
    if (cVar4 == '@') {
      iStack_64 = 5;
      pcStack_70 = pcStack_70 + 1;
      goto LAB_142afeddf;
    }
    if (cVar4 != '[') {
      iStack_64 = 1;
      goto LAB_142afeddf;
    }
    cStack_77 = '\x01';
    bVar1 = true;
    pcStack_70 = pcStack_70 + 1;
  } while( true );
}


/* address=142aff2f0 name=FUN_142aff2f0 */

undefined8 FUN_142aff2f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_2 + 0x10) < *(uint *)(param_1 + 0x10)) {
    uVar1 = 1;
  }
  else if (*(uint *)(param_1 + 0x10) < *(uint *)(param_2 + 0x10)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142aff370 name=FUN_142aff370 */

void FUN_142aff370(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05d40(param_1,param_2);
  return;
}


/* address=142aff3a0 name=FUN_142aff3a0 */

void FUN_142aff3a0(undefined8 param_1)

{
  FUN_142b06300(param_1);
  return;
}


/* address=142aff3c0 name=FUN_142aff3c0 */

longlong FUN_142aff3c0(longlong param_1)

{
  FUN_142994b40(param_1);
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}


/* address=142aff3f0 name=FUN_142aff3f0 */

void FUN_142aff3f0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *ap_StackX_10 [3];
  
  ap_StackX_10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,ap_StackX_10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_142992cb0(param_1);
    FUN_142995430(uVar2,p_Var1);
  }
  return;
}


/* address=142aff440 name=FUN_142aff440 */

void FUN_142aff440(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *ap_StackX_10 [3];
  
  ap_StackX_10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,ap_StackX_10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_142992cb0(param_1);
    FUN_1429954f0(uVar2,p_Var1);
  }
  return;
}


/* address=142aff490 name=FUN_142aff490 */

undefined8 * FUN_142aff490(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined *)((longlong)param_1 + 0x1a) = 0;
  return param_1;
}


/* address=142aff4f0 name=FUN_142aff4f0 */

longlong FUN_142aff4f0(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2;
}


/* address=142aff510 name=FUN_142aff510 */

bool FUN_142aff510(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_142992f60(param_2);
  cVar1 = FUN_1429935e0(param_1,uVar2);
  if (cVar1 != '\0') {
    uVar2 = FUN_142992f60(param_2);
    uVar3 = FUN_142992c50(param_2);
    FUN_142afd1b0(*param_1,uVar3,uVar2);
  }
  return cVar1 != '\0';
}


/* address=142aff580 name=FUN_142aff580 */

undefined8
FUN_142aff580(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_142aff3f0(param_1,p_Var1);
  uVar2 = FUN_142992cb0(param_2);
  FUN_142992cb0(uVar2);
  FUN_142992cb0(param_1);
  return param_1;
}


/* address=142aff5e0 name=FUN_142aff5e0 */

longlong FUN_142aff5e0(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2 * 4;
}


/* address=142aff600 name=FUN_142aff600 */

undefined8 FUN_142aff600(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uStack_18;
  
  FUN_142993500(param_1);
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = FUN_142992bc0();
    if (uVar2 / 4 < param_2) {
      FUN_142afa690(0x10,0,0x45,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\internal.h"
                    ,0x138);
      uVar1 = 0;
    }
    else {
      lVar3 = FUN_142b0e970(param_2 << 2);
      *param_1 = lVar3;
      if (*param_1 == 0) {
        uVar1 = 0;
      }
      else {
        param_1[1] = param_2;
        for (uStack_18 = 0; uStack_18 < (ulonglong)param_1[1]; uStack_18 = uStack_18 + 1) {
          FUN_142992bb0(4,*param_1 + uStack_18 * 4);
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}


/* address=142aff6f0 name=FUN_142aff6f0 */

undefined8 FUN_142aff6f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_18 [24];
  
  uVar1 = FUN_142aff7e0();
  uVar1 = FUN_142992e20(auStack_18,uVar1);
  FUN_142992e50(param_1,uVar1);
  FUN_142993e90(auStack_18);
  return param_1;
}


/* address=142aff730 name=FUN_142aff730 */

undefined8 FUN_142aff730(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_142992f60(param_2);
  uVar2 = FUN_142992c50(param_2);
  FUN_142992fc0(param_1,uVar2,uVar1);
  return param_1;
}


/* address=142aff780 name=FUN_142aff780 */

undefined8
FUN_142aff780(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_142aff440(param_1,p_Var1);
  uVar2 = FUN_142992cb0(param_2);
  FUN_142992cb0(uVar2);
  FUN_142992cb0(param_1);
  return param_1;
}


/* address=142aff7e0 name=FUN_142aff7e0 */

undefined8 FUN_142aff7e0(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = FUN_142b0e970(0x10);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined *)FUN_142992bb0(0x10,lVar1);
    puVar4 = puVar2;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uVar3 = FUN_142aff3c0(puVar2);
  }
  return uVar3;
}


/* address=142aff840 name=FUN_142aff840 */

undefined4 FUN_142aff840(longlong param_1,longlong *param_2,size_t *param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined auStack_40 [64];
  
  if ((*(byte *)(param_1 + 0x1a8) >> 2 & 1) == 0) {
    FUN_142994a40(auStack_40);
    uVar5 = FUN_142992cb0(auStack_40);
    iVar1 = FUN_142b7a520(uVar5,0x100);
    if (iVar1 != 0) {
      uVar5 = FUN_142992cb0(auStack_40);
      iVar1 = FUN_142b01090(param_1,uVar5,0);
      if (iVar1 != 0) {
        uVar5 = FUN_142992cb0(auStack_40);
        iVar1 = FUN_142b7a650(uVar5,param_2,param_3);
        if (iVar1 != 0) {
          FUN_142994a70(auStack_40);
          return 1;
        }
      }
    }
    FUN_142994a70(auStack_40);
    uVar2 = 0;
  }
  else {
    sVar3 = strlen("NOT RESUMABLE");
    *param_3 = sVar3;
    lVar4 = FUN_142b0f440("NOT RESUMABLE",*param_3);
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


/* address=142aff960 name=FUN_142aff960 */

undefined4 FUN_142aff960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined auStack_40 [64];
  
  FUN_142994a40(auStack_40);
  uVar2 = FUN_142992cb0(auStack_40);
  iVar1 = FUN_142b7a520(uVar2,0x100);
  if (iVar1 != 0) {
    uVar2 = FUN_142992cb0(auStack_40);
    iVar1 = FUN_142b01090(param_1,uVar2,1);
    if (iVar1 != 0) {
      uVar2 = FUN_142992cb0(auStack_40);
      iVar1 = FUN_142b7a650(uVar2,param_2,param_3);
      if (iVar1 != 0) {
        FUN_142994a70(auStack_40);
        return 1;
      }
    }
  }
  FUN_142994a70(auStack_40);
  return 0;
}


/* address=142affa20 name=FUN_142affa20 */

_Facet_base * FUN_142affa20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  auStack_48 [8];
  undefined auStack_40 [8];
  _Facet_base *p_Stack_38;
  _Facet_base *p_Stack_30;
  _Facet_base *p_Stack_28;
  undefined auStack_20 [32];
  
  FUN_142b78260(auStack_20,param_1,param_2);
  uVar2 = FUN_142affc40(auStack_40,auStack_20,*(undefined8 *)(param_3 + 8),
                        *(undefined8 *)(param_3 + 0x200));
  FUN_142992e50(auStack_48,uVar2);
  FUN_1429932e0(auStack_40);
  cVar1 = FUN_142993030(auStack_48);
  if (cVar1 == '\0') {
    p_Stack_38 = (_Facet_base *)0x0;
    FUN_1429932e0(auStack_48);
  }
  else {
    lVar3 = FUN_142b782f0(auStack_20);
    if (lVar3 == 0) {
      p_Stack_28 = std::
                   unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   ::release(auStack_48);
      FUN_1429932e0(auStack_48);
      p_Stack_38 = p_Stack_28;
    }
    else {
      FUN_142afa690(0x10,0,0xa0,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                    ,0x366);
      p_Stack_30 = (_Facet_base *)0x0;
      FUN_1429932e0(auStack_48);
      p_Stack_38 = p_Stack_30;
    }
  }
  return p_Stack_38;
}


/* address=142affb30 name=FUN_142affb30 */

undefined4 FUN_142affb30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 auStack_10 [2];
  
  iVar1 = FUN_142aff840(param_1,auStack_10,&uStack_18);
  if (iVar1 == 0) {
    uStack_18 = 0xffffffff;
  }
  else if (CONCAT44(uStack_14,uStack_18) < 0x80000000) {
    if (param_2 != (longlong *)0x0) {
      FUN_142affbf0(*param_2,auStack_10[0],CONCAT44(uStack_14,uStack_18));
      *param_2 = *param_2 + CONCAT44(uStack_14,uStack_18);
    }
    FUN_142b0eaa0(auStack_10[0]);
  }
  else {
    FUN_142b0eaa0(auStack_10[0]);
    FUN_142afa690(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x34f);
    uStack_18 = 0xffffffff;
  }
  return uStack_18;
}


/* address=142affbf0 name=FUN_142affbf0 */

undefined8 FUN_142affbf0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142affc40 name=FUN_142affc40 */

undefined8 FUN_142affc40(undefined8 param_1,wchar_t *param_2,longlong param_3,undefined8 param_4)

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
  undefined auStack_258 [8];
  byte bStack_250;
  byte bStack_24f;
  byte bStack_24e;
  byte bStack_24d;
  byte bStack_24c;
  wchar_t *apwStack_248 [2];
  int iStack_238;
  undefined2 auStack_234 [2];
  int iStack_230;
  int iStack_22c;
  int aiStack_228 [2];
  undefined auStack_220 [8];
  undefined auStack_218 [8];
  undefined auStack_210 [4];
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int aiStack_200 [2];
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  wchar_t *apwStack_1f0 [2];
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  byte *pbStack_1d8;
  byte *pbStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  wchar_t *apwStack_1a0 [2];
  wchar_t *apwStack_190 [2];
  undefined auStack_180 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  undefined auStack_108 [8];
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_e0 [16];
  wchar_t *apwStack_d0 [2];
  wchar_t *apwStack_c0 [2];
  undefined auStack_b0 [16];
  undefined auStack_a0 [16];
  undefined auStack_90 [16];
  undefined auStack_80 [8];
  undefined auStack_78 [16];
  undefined auStack_68 [16];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  uVar4 = FUN_142af0cd0(auStack_108,param_3);
  FUN_142992e50(auStack_258,uVar4);
  FUN_1429932e0(auStack_108);
  cVar1 = FUN_142993030(auStack_258);
  if (cVar1 == '\0') {
    FUN_142aeec30(param_1,0);
    FUN_1429932e0(auStack_258);
    return param_1;
  }
  uVar2 = wcstoul(param_2,apwStack_248,0x20000010);
  if (((((uVar2 == 0) || (iVar3 = FUN_142b78ce0(apwStack_248,&lStack_100), iVar3 == 0)) ||
       (lStack_100 != 1)) ||
      ((iVar3 = FUN_142b78ce0(apwStack_248,&uStack_1f8), iVar3 == 0 ||
       (0xffff < CONCAT62(uStack_1f6,uStack_1f8))))) ||
     (cVar1 = FUN_142afb990(auStack_210,uStack_1f8), cVar1 == '\0')) {
    FUN_142afa690(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x229);
    FUN_142aeec30(param_1,0);
    FUN_1429932e0(auStack_258);
    return param_1;
  }
  lVar5 = FUN_142992c50(auStack_258);
  *(undefined2 *)(lVar5 + 4) = uStack_1f8;
  uVar2 = wcstoul((wchar_t *)apwStack_248,apwStack_d0,4);
  if (((uVar2 == 0) || (iVar3 = FUN_142b78540(apwStack_d0,auStack_234), iVar3 == 0)) ||
     (lVar5 = FUN_142b782f0(apwStack_d0), lVar5 != 0)) {
    FUN_142afa690(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x233);
    FUN_142aeec30(param_1,0);
    FUN_1429932e0(auStack_258);
    return param_1;
  }
  uStack_f8 = FUN_142afc4b0(auStack_234[0]);
  lVar5 = FUN_142992c50(auStack_258);
  *(undefined8 *)(lVar5 + 200) = uStack_f8;
  lVar5 = FUN_142992c50(auStack_258);
  if (*(longlong *)(lVar5 + 200) == 0) {
    FUN_142afa690(0x10,0,0xed,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x238);
    FUN_142aeec30(param_1,0);
    FUN_1429932e0(auStack_258);
    return param_1;
  }
  uVar2 = wcstoul((wchar_t *)apwStack_248,apwStack_1a0,4);
  if ((((uVar2 == 0) || (uVar6 = FUN_142b782f0(apwStack_1a0), 0x20 < uVar6)) ||
      (uVar2 = wcstoul((wchar_t *)apwStack_248,apwStack_190,4), uVar2 == 0)) ||
     (uVar6 = FUN_142b782f0(apwStack_190), 0x30 < uVar6)) {
    FUN_142afa690(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x241);
    FUN_142aeec30(param_1,0);
    FUN_1429932e0(auStack_258);
    return param_1;
  }
  uStack_f0 = FUN_142b782f0(apwStack_1a0);
  uStack_e8 = FUN_142b782d0(apwStack_1a0);
  lVar5 = FUN_142992c50(auStack_258);
  FUN_142affbf0(lVar5 + 0x3c,uStack_e8,uStack_f0);
  uStack_170 = FUN_142b782f0(apwStack_1a0);
  lVar5 = FUN_142992c50(auStack_258);
  *(char *)(lVar5 + 0x3b) = (char)uStack_170;
  uStack_168 = FUN_142b782f0(apwStack_190);
  uStack_160 = FUN_142b782d0(apwStack_190);
  lVar5 = FUN_142992c50(auStack_258);
  FUN_142affbf0(lVar5 + 0xb,uStack_160,uStack_168);
  uStack_158 = FUN_142b782f0(apwStack_190);
  lVar5 = FUN_142992c50(auStack_258);
  *(char *)(lVar5 + 10) = (char)uStack_158;
  uVar2 = wcstoul((wchar_t *)apwStack_248,apwStack_1f0,-0x5fffffff);
  if (uVar2 != 0) {
    lVar5 = FUN_142992c50(auStack_258);
    iVar3 = FUN_142b78ce0(apwStack_1f0,lVar5 + 0xc0);
    if (((iVar3 != 0) &&
        (uVar2 = wcstoul((wchar_t *)apwStack_248,apwStack_1f0,-0x5ffffffe), uVar2 != 0)) &&
       ((iVar3 = FUN_142b78ce0(apwStack_1f0,&uStack_1e0), iVar3 != 0 &&
        (CONCAT44(uStack_1dc,uStack_1e0) < 0x100000000)))) {
      lVar5 = FUN_142992c50(auStack_258);
      *(undefined4 *)(lVar5 + 0xb4) = uStack_1e0;
      iVar3 = FUN_142b78fa0(apwStack_248,auStack_b0,&iStack_238,0xa0000003);
      if ((iVar3 == 0) || ((iStack_238 != 0 && (lVar5 = FUN_142b782f0(auStack_b0), lVar5 == 0)))) {
        FUN_142afa690(0x10,0,0xa0,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                      ,0x25e);
        FUN_142aeec30(param_1,0);
        FUN_1429932e0(auStack_258);
        return param_1;
      }
      lStack_150 = FUN_142992c50(auStack_258);
      lStack_150 = lStack_150 + 0x5c;
      lVar5 = FUN_142992c50(auStack_258);
      iVar3 = FUN_142b01fb0(apwStack_248,lVar5 + 0x5d,lStack_150,0x20,0xa0000004);
      if (iVar3 != 0) {
        lVar5 = FUN_142992c50(auStack_258);
        iVar3 = FUN_142b02070(apwStack_248,lVar5 + 0xb0,0xa0000005,0);
        if (iVar3 != 0) {
          iVar3 = FUN_142b78fa0(apwStack_248,auStack_48,0,0xa0000006);
          if (iVar3 == 0) {
            FUN_142afa690(0x10,0,0xa0,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                          ,0x26f);
            FUN_142aeec30(param_1,0);
            FUN_1429932e0(auStack_258);
            return param_1;
          }
          lVar5 = FUN_142992c50(auStack_258);
          iVar3 = FUN_142b01d50(apwStack_248,lVar5 + 0x80,0xa0000008);
          if (iVar3 != 0) {
            lVar5 = FUN_142992c50(auStack_258);
            iVar3 = FUN_142b02100(apwStack_248,lVar5 + 0x16c,0xa0000009,0);
            if (iVar3 != 0) {
              lVar5 = FUN_142992c50(auStack_258);
              cVar1 = FUN_142b01e30(apwStack_248,lVar5 + 0xe8,0xa000000a);
              if (cVar1 != '\0') {
                iVar3 = FUN_142b78b10(apwStack_248,0xa000000d);
                if (iVar3 == 0) {
                  lVar5 = FUN_142992c50(auStack_258);
                  pbStack_1d0 = (byte *)(lVar5 + 0x1a8);
                  *pbStack_1d0 = *pbStack_1d0 & 0xfd;
                }
                else {
                  uVar2 = wcstoul((wchar_t *)apwStack_248,apwStack_1f0,-0x5ffffff3);
                  if ((((uVar2 == 0) ||
                       (uVar2 = wcstoul((wchar_t *)apwStack_1f0,apwStack_c0,4), uVar2 == 0)) ||
                      (lVar5 = FUN_142b782f0(apwStack_c0), lVar5 != 0x20)) ||
                     (lVar5 = FUN_142b782f0(apwStack_1f0), lVar5 != 0)) {
                    FUN_142afa690(0x10,0,0xa0,
                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                  ,0x281);
                    FUN_142aeec30(param_1,0);
                    FUN_1429932e0(auStack_258);
                    return param_1;
                  }
                  uStack_148 = FUN_142b782d0(apwStack_c0);
                  lVar5 = FUN_142992c50(auStack_258);
                  FUN_142affbf0(lVar5 + 0x108,uStack_148,0x20);
                  lVar5 = FUN_142992c50(auStack_258);
                  pbStack_1d8 = (byte *)(lVar5 + 0x1a8);
                  *pbStack_1d8 = *pbStack_1d8 | 2;
                }
                lStack_140 = FUN_142992c50(auStack_258);
                lStack_140 = lStack_140 + 0x168;
                lVar5 = FUN_142992c50(auStack_258);
                iVar3 = FUN_142b01fb0(apwStack_248,lVar5 + 0x128,lStack_140,0x40,0xa000000e);
                if (iVar3 != 0) {
                  lVar5 = FUN_142992c50(auStack_258);
                  iVar3 = FUN_142b01ed0(apwStack_248,lVar5 + 0xf8,0xa000000f,param_4);
                  if (iVar3 != 0) {
                    lVar5 = FUN_142992c50(auStack_258);
                    iVar3 = FUN_142b01ed0(apwStack_248,lVar5 + 0x100,0xa0000010,param_4);
                    if (iVar3 != 0) {
                      iVar3 = FUN_142b79180(apwStack_248,&iStack_20c,0xa0000011,0);
                      if (iVar3 == 0) {
                        FUN_142afa690(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x29b);
                        FUN_142aeec30(param_1,0);
                        FUN_1429932e0(auStack_258);
                        return param_1;
                      }
                      bStack_250 = iStack_20c != 0;
                      lVar5 = FUN_142992c50(auStack_258);
                      pbStack_1c8 = (byte *)(lVar5 + 0x1a8);
                      *pbStack_1c8 = *pbStack_1c8 & 0xfe | bStack_250 & 1;
                      lVar5 = FUN_142992c50(auStack_258);
                      iVar3 = FUN_142b02190(apwStack_248,lVar5 + 6,0xa0000012,0);
                      if (iVar3 == 0) {
                        FUN_142afa690(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2a1);
                        FUN_142aeec30(param_1,0);
                        FUN_1429932e0(auStack_258);
                        return param_1;
                      }
                      FUN_142b78260(auStack_180,0,0);
                      iVar3 = FUN_142b78fa0(apwStack_248,auStack_180);
                      if ((iVar3 == 0) ||
                         ((iStack_230 != 0 && (lVar5 = FUN_142b782f0(auStack_180), lVar5 == 0)))) {
                        FUN_142afa690(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2ab);
                        FUN_142aeec30(param_1,0);
                        FUN_1429932e0(auStack_258);
                        return param_1;
                      }
                      if ((iStack_230 != 0) && (iStack_238 == 0)) {
                        FUN_142afa690(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2af);
                        FUN_142aeec30(param_1,0);
                        FUN_1429932e0(auStack_258);
                        return param_1;
                      }
                      if ((iStack_238 != 0) || (iStack_230 != 0)) {
                        uStack_138 = FUN_142993000();
                        lVar5 = FUN_142992c50(auStack_258);
                        FUN_142993ae0(lVar5 + 0x88,uStack_138);
                        lVar5 = FUN_142992c50(auStack_258);
                        cVar1 = operator==<>(lVar5 + 0x88,0);
                        if (cVar1 != '\0') {
                          FUN_142aeec30(param_1,0);
                          FUN_1429932e0(auStack_258);
                          return param_1;
                        }
                        if (iStack_238 != 0) {
                          uVar4 = FUN_142b06a50(auStack_b0,param_4);
                          FUN_142992e20(auStack_220,uVar4);
                          cVar1 = FUN_142993030(auStack_220);
                          if (cVar1 == '\0') {
LAB_142b008bc:
                            FUN_142aeec30(param_1,0);
                            FUN_142aee980(auStack_220);
                            FUN_1429932e0(auStack_258);
                            return param_1;
                          }
                          puStack_130 = auStack_80;
                          uVar4 = FUN_142992cb0(auStack_220);
                          uStack_128 = FUN_142992e50(puStack_130,uVar4);
                          lVar5 = FUN_142992c50(auStack_258);
                          uVar4 = FUN_142992c50(lVar5 + 0x88);
                          cVar1 = FUN_142aeec60(uVar4,uStack_128);
                          if (cVar1 == '\0') goto LAB_142b008bc;
                          FUN_142aee980(auStack_220);
                        }
                        while (lVar5 = FUN_142b782f0(auStack_180), lVar5 != 0) {
                          pvVar7 = _aligned_recalloc(auStack_180,(size_t)auStack_a0,0,0);
                          if (((int)pvVar7 == 0) || (lVar5 = FUN_142b782f0(auStack_a0), lVar5 == 0))
                          {
                            FUN_142afa690(0x10,0,0xa0,
                                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                          ,0x2c4);
                            FUN_142aeec30(param_1,0);
                            FUN_1429932e0(auStack_258);
                            return param_1;
                          }
                          uVar4 = FUN_142b06a50(auStack_a0,param_4);
                          FUN_142992e20(auStack_218,uVar4);
                          cVar1 = operator==<>(auStack_218,0);
                          if (cVar1 != '\0') {
LAB_142b00a1f:
                            FUN_142aeec30(param_1,0);
                            FUN_142aee980(auStack_218);
                            FUN_1429932e0(auStack_258);
                            return param_1;
                          }
                          puStack_120 = auStack_78;
                          uVar4 = FUN_142992cb0(auStack_218);
                          uStack_118 = FUN_142992e50(puStack_120,uVar4);
                          lVar5 = FUN_142992c50(auStack_258);
                          uVar4 = FUN_142992c50(lVar5 + 0x88);
                          cVar1 = FUN_142aeec60(uVar4,uStack_118);
                          if (cVar1 == '\0') goto LAB_142b00a1f;
                          FUN_142aee980(auStack_218);
                        }
                      }
                      iVar3 = FUN_142b79020(apwStack_248,auStack_90,aiStack_228,0xa0000015);
                      if (iVar3 != 0) {
                        if (aiStack_228[0] != 0) {
                          lVar5 = FUN_142992c50(auStack_258);
                          iVar3 = FUN_142b78630(auStack_90,lVar5 + 0x170);
                          if (iVar3 == 0) goto LAB_142b00abd;
                        }
                        lVar5 = FUN_142b782f0(auStack_90);
                        if (lVar5 == 0) {
                          bStack_24f = aiStack_228[0] != 0;
                          lVar5 = FUN_142992c50(auStack_258);
                          pbStack_1c0 = (byte *)(lVar5 + 0x1a8);
                          *pbStack_1c0 = *pbStack_1c0 & 0xf7 | (bStack_24f & 1) << 3;
                          iVar3 = FUN_142b79180(apwStack_248,&iStack_208,0xa0000016,1);
                          if (iVar3 == 0) {
                            FUN_142afa690(0x10,0,0xa0,
                                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                          ,0x2de);
                            FUN_142aeec30(param_1,0);
                            FUN_1429932e0(auStack_258);
                            return param_1;
                          }
                          bStack_24e = iStack_208 != 0;
                          lVar5 = FUN_142992c50(auStack_258);
                          pbStack_1b8 = (byte *)(lVar5 + 0x1a8);
                          *pbStack_1b8 = *pbStack_1b8 & 0xef | (bStack_24e & 1) << 4;
                          lVar5 = FUN_142992c50(auStack_258);
                          iVar3 = FUN_142b02190(apwStack_248,lVar5 + 8,0xa0000017,0);
                          if (iVar3 != 0) {
                            lVar5 = FUN_142992c50(auStack_258);
                            iVar3 = FUN_142b02100(apwStack_248,lVar5 + 0x174,0xa0000018,0);
                            if (iVar3 != 0) {
                              lStack_110 = FUN_142992c50(auStack_258);
                              lVar5 = FUN_142992c50(auStack_258);
                              iVar3 = FUN_142b02100(apwStack_248,lVar5 + 0xb8,0xa0000019,
                                                    *(undefined4 *)(lStack_110 + 0xb4));
                              if (iVar3 != 0) {
                                lVar5 = FUN_142992c50(auStack_258);
                                cVar1 = FUN_142b01e30(apwStack_248,lVar5 + 0x178,0xa000001a);
                                if ((cVar1 != '\0') &&
                                   (iVar3 = FUN_142b79180(apwStack_248,&iStack_204,0xa000001b,0),
                                   iVar3 != 0)) {
                                  lVar5 = FUN_142992c50(auStack_258);
                                  cVar1 = FUN_142b01e30(apwStack_248,lVar5 + 0x1b0,0xa000001c);
                                  if (cVar1 != '\0') {
                                    iVar3 = FUN_142b79020(apwStack_248,auStack_e0,&iStack_22c,
                                                          0xa000001d);
                                    if (iVar3 != 0) {
                                      puVar8 = (undefined *)FUN_142af39c0(auStack_e0,auStack_38);
                                      puVar9 = auStack_68;
                                      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                                        *puVar9 = *puVar8;
                                        puVar8 = puVar8 + 1;
                                        puVar9 = puVar9 + 1;
                                      }
                                      lVar5 = FUN_142992c50(auStack_258);
                                      cVar1 = FUN_1429936c0(lVar5 + 0x188,auStack_68);
                                      if ((cVar1 != '\0') &&
                                         (iVar3 = FUN_142b79020(apwStack_248,auStack_e0,aiStack_200,
                                                                0xa000001e), iVar3 != 0)) {
                                        puVar8 = (undefined *)FUN_142af39c0(auStack_e0,auStack_28);
                                        puVar9 = auStack_58;
                                        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                                          *puVar9 = *puVar8;
                                          puVar8 = puVar8 + 1;
                                          puVar9 = puVar9 + 1;
                                        }
                                        lVar5 = FUN_142992c50(auStack_258);
                                        cVar1 = FUN_1429936c0(lVar5 + 0x198,auStack_58);
                                        if ((cVar1 != '\0') &&
                                           (lVar5 = FUN_142b782f0(apwStack_248), lVar5 == 0)) {
                                          bStack_24d = iStack_204 != 0;
                                          lVar5 = FUN_142992c50(auStack_258);
                                          pbStack_1b0 = (byte *)(lVar5 + 0x1a8);
                                          *pbStack_1b0 = *pbStack_1b0 & 0xdf | (bStack_24d & 1) << 5
                                          ;
                                          if (iStack_22c == aiStack_200[0]) {
                                            if (iStack_22c != 0) {
                                              lVar5 = FUN_142992c50(auStack_258);
                                              cVar1 = FUN_142992f70(lVar5 + 0x178);
                                              if (cVar1 != '\0') goto LAB_142b00f1c;
                                            }
                                            bStack_24c = iStack_22c != 0;
                                            lVar5 = FUN_142992c50(auStack_258);
                                            pbStack_1a8 = (byte *)(lVar5 + 0x1a8);
                                            *pbStack_1a8 = *pbStack_1a8 & 0xbf |
                                                           (bStack_24c & 1) << 6;
                                            uVar4 = FUN_142992c50(auStack_258);
                                            cVar1 = (**(code **)(param_3 + 0x30))(uVar4);
                                            if (cVar1 == '\0') {
                                              FUN_142afa690(0x10,0,0xa0,
                                                                                                                        
                                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x30e);
                                              FUN_142aeec30(param_1,0);
                                              FUN_1429932e0(auStack_258);
                                              return param_1;
                                            }
                                            FUN_142992e50(param_1,auStack_258);
                                            FUN_1429932e0(auStack_258);
                                            return param_1;
                                          }
LAB_142b00f1c:
                                          FUN_142afa690(0x10,0,0xa0,
                                                                                                                
                                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x308);
                                          FUN_142aeec30(param_1,0);
                                          FUN_1429932e0(auStack_258);
                                          return param_1;
                                        }
                                      }
                                    }
                                    FUN_142afa690(0x10,0,0xa0,
                                                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x300);
                                    FUN_142aeec30(param_1,0);
                                    FUN_1429932e0(auStack_258);
                                    return param_1;
                                  }
                                }
                              }
                            }
                          }
                          FUN_142afa690(0x10,0,0xa0,
                                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                        ,0x2f3);
                          FUN_142aeec30(param_1,0);
                          FUN_1429932e0(auStack_258);
                          return param_1;
                        }
                      }
LAB_142b00abd:
                      FUN_142aeec30(param_1,0);
                      FUN_1429932e0(auStack_258);
                      return param_1;
                    }
                  }
                }
                FUN_142aeec30(param_1,0);
                FUN_1429932e0(auStack_258);
                return param_1;
              }
            }
          }
          FUN_142aeec30(param_1,0);
          FUN_1429932e0(auStack_258);
          return param_1;
        }
      }
      FUN_142aeec30(param_1,0);
      FUN_1429932e0(auStack_258);
      return param_1;
    }
  }
  FUN_142afa690(0x10,0,0xa0,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                ,0x254);
  FUN_142aeec30(param_1,0);
  FUN_1429932e0(auStack_258);
  return param_1;
}


/* address=142b01090 name=FUN_142b01090 */

undefined8 FUN_142b01090(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *_Str;
  ulonglong uVar5;
  undefined auStack_108 [48];
  uint uStack_d8;
  undefined auStack_d0 [48];
  ulonglong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  size_t sStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined auStack_38 [56];
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 200) == 0)) {
    return 0;
  }
  iVar2 = FUN_142b7ac70(param_2,auStack_d0,0x20000010);
  if ((((iVar2 != 0) && (iVar2 = FUN_142b7b130(auStack_d0,1), iVar2 != 0)) &&
      (iVar2 = FUN_142b7b130(auStack_d0,*(undefined2 *)(param_1 + 4)), iVar2 != 0)) &&
     ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,4), iVar2 != 0 &&
      (iVar2 = FUN_142b7af50(auStack_108,*(uint *)(*(longlong *)(param_1 + 200) + 0x10) & 0xffff),
      iVar2 != 0)))) {
    if (param_3 == 0) {
      uStack_d8 = (uint)*(byte *)(param_1 + 0x3b);
    }
    else {
      uStack_d8 = 0;
    }
    iVar2 = FUN_142b7b3d0(auStack_d0,param_1 + 0x3c,uStack_d8);
    if (((iVar2 != 0) &&
        (iVar2 = FUN_142b7b3d0(auStack_d0,param_1 + 0xb,*(undefined *)(param_1 + 10)), iVar2 != 0))
       && ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000001), iVar2 != 0 &&
           (((iVar2 = FUN_142b7b130(auStack_108,*(undefined8 *)(param_1 + 0xc0)), iVar2 != 0 &&
             (iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000002), iVar2 != 0)) &&
            (iVar2 = FUN_142b7b130(auStack_108,*(undefined4 *)(param_1 + 0xb4)), iVar2 != 0)))))) {
      uVar3 = FUN_142992c50(param_1 + 0x88);
      lVar4 = FUN_142993080(uVar3);
      if ((lVar4 != 0) && ((*(byte *)(param_1 + 0x1a8) >> 1 & 1) == 0)) {
        uVar3 = FUN_142992c50(param_1 + 0x88);
        uStack_98 = FUN_1429930a0(uVar3,0);
        iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000003);
        if (iVar2 == 0) {
          return 0;
        }
        uStack_88 = FUN_142b06c50(uStack_98);
        uVar3 = FUN_142b06c30(uStack_98);
        iVar2 = FUN_142b7ad30(auStack_108,uVar3,uStack_88);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000004);
      if ((iVar2 == 0) ||
         (iVar2 = FUN_142b7b3d0(auStack_108,param_1 + 0x5d,*(undefined *)(param_1 + 0x5c)),
         iVar2 == 0)) {
        return 0;
      }
      if ((*(int *)(param_1 + 0xb0) != 0) &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000005), iVar2 == 0 ||
          (iVar2 = FUN_142b7b130(auStack_108,(longlong)*(int *)(param_1 + 0xb0)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_142993030(param_1 + 0x80);
      if (cVar1 != '\0') {
        iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000008);
        if (iVar2 == 0) {
          return 0;
        }
        _Str = (char *)FUN_142992c50(param_1 + 0x80);
        sStack_80 = strlen(_Str);
        uVar3 = FUN_142992c50(param_1 + 0x80);
        iVar2 = FUN_142b7b3d0(auStack_108,uVar3,sStack_80);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(int *)(param_1 + 0x16c) != 0) &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000009), iVar2 == 0 ||
          (iVar2 = FUN_142b7b130(auStack_108,*(undefined4 *)(param_1 + 0x16c)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_142992f70(param_1 + 0xe8);
      if ((cVar1 == '\0') && (param_3 == 0)) {
        iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa000000a);
        if (iVar2 == 0) {
          return 0;
        }
        uStack_78 = FUN_142992f60(param_1 + 0xe8);
        uVar3 = FUN_142992c50(param_1 + 0xe8);
        iVar2 = FUN_142b7b3d0(auStack_108,uVar3,uStack_78);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 1 & 1) != 0) &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa000000d), iVar2 == 0 ||
          (iVar2 = FUN_142b7b3d0(auStack_108,param_1 + 0x108,0x20), iVar2 == 0)))) {
        return 0;
      }
      if ((*(char *)(param_1 + 0x168) != '\0') &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa000000e), iVar2 == 0 ||
          (iVar2 = FUN_142b7b3d0(auStack_108,param_1 + 0x128,*(undefined *)(param_1 + 0x168)),
          iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_142994ac0(param_1 + 0xf8,0);
      if (cVar1 != '\0') {
        iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa000000f);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_142992c50(param_1 + 0xf8);
        uStack_70 = FUN_142b06c50(uVar3);
        uVar3 = FUN_142992c50(param_1 + 0xf8);
        uVar3 = FUN_142b06c30(uVar3);
        iVar2 = FUN_142b7b3d0(auStack_108,uVar3,uStack_70);
        if (iVar2 == 0) {
          return 0;
        }
      }
      cVar1 = FUN_142994ac0(param_1 + 0x100,0);
      if (cVar1 != '\0') {
        iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000010);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_142992c50(param_1 + 0x100);
        uStack_68 = FUN_142b06c50(uVar3);
        uVar3 = FUN_142992c50(param_1 + 0x100);
        uVar3 = FUN_142b06c30(uVar3);
        iVar2 = FUN_142b7b3d0(auStack_108,uVar3,uStack_68);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) & 1) != 0) &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000011), iVar2 == 0 ||
          (iVar2 = FUN_142b7b440(auStack_108,1), iVar2 == 0)))) {
        return 0;
      }
      if ((*(short *)(param_1 + 6) != 0) &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000012), iVar2 == 0 ||
          (iVar2 = FUN_142b7b130(auStack_108,*(undefined2 *)(param_1 + 6)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_142994ac0(param_1 + 0x88,0);
      if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x1a8) >> 1 & 1) == 0)) {
        uVar3 = FUN_142992c50(param_1 + 0x88);
        uVar5 = FUN_142993080(uVar3);
        if (1 < uVar5) {
          iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000013);
          if (iVar2 == 0) {
            return 0;
          }
          uStack_a0 = 1;
          while( true ) {
            uVar3 = FUN_142992c50(param_1 + 0x88);
            uVar5 = FUN_142993080(uVar3);
            if (uVar5 <= uStack_a0) break;
            uVar3 = FUN_142992c50(param_1 + 0x88);
            uStack_90 = FUN_1429930a0(uVar3,uStack_a0);
            uStack_60 = FUN_142b06c50(uStack_90);
            uVar3 = FUN_142b06c30(uStack_90);
            iVar2 = FUN_142b7ad30(auStack_108,uVar3,uStack_60);
            if (iVar2 == 0) {
              return 0;
            }
            uStack_a0 = uStack_a0 + 1;
          }
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 3 & 1) != 0) &&
         (((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000015), iVar2 == 0 ||
           (iVar2 = FUN_142b7ac70(auStack_108,auStack_38,4), iVar2 == 0)) ||
          (iVar2 = FUN_142b7afe0(auStack_38,*(undefined4 *)(param_1 + 0x170)), iVar2 == 0)))) {
        return 0;
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 4 & 1) == 0) &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000016), iVar2 == 0 ||
          (iVar2 = FUN_142b7b440(auStack_108,0), iVar2 == 0)))) {
        return 0;
      }
      if ((*(short *)(param_1 + 8) != 0) &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000017), iVar2 == 0 ||
          (iVar2 = FUN_142b7b130(auStack_108,*(undefined2 *)(param_1 + 8)), iVar2 == 0)))) {
        return 0;
      }
      if ((*(int *)(param_1 + 0x174) != 0) &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000018), iVar2 == 0 ||
          (iVar2 = FUN_142b7b130(auStack_108,*(undefined4 *)(param_1 + 0x174)), iVar2 == 0)))) {
        return 0;
      }
      if ((*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xb8)) &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa0000019), iVar2 == 0 ||
          (iVar2 = FUN_142b7b130(auStack_108,*(undefined4 *)(param_1 + 0xb8)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_142992f70(param_1 + 0x178);
      if (cVar1 == '\0') {
        iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa000001a);
        if (iVar2 == 0) {
          return 0;
        }
        uStack_58 = FUN_142992f60(param_1 + 0x178);
        uVar3 = FUN_142992c50(param_1 + 0x178);
        iVar2 = FUN_142b7b3d0(auStack_108,uVar3,uStack_58);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 5 & 1) != 0) &&
         ((iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa000001b), iVar2 == 0 ||
          (iVar2 = FUN_142b7b440(auStack_108,1), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_142992f70(param_1 + 0x1b0);
      if (cVar1 == '\0') {
        iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa000001c);
        if (iVar2 == 0) {
          return 0;
        }
        uStack_50 = FUN_142992f60(param_1 + 0x1b0);
        uVar3 = FUN_142992c50(param_1 + 0x1b0);
        iVar2 = FUN_142b7b3d0(auStack_108,uVar3,uStack_50);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(byte *)(param_1 + 0x1a8) >> 6 & 1) == 0) {
LAB_142b01d26:
        uVar3 = FUN_142b7a730(param_2);
        return uVar3;
      }
      iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa000001d);
      if (iVar2 != 0) {
        uStack_48 = FUN_142992f60(param_1 + 0x188);
        uVar3 = FUN_142992c50(param_1 + 0x188);
        iVar2 = FUN_142b7b3d0(auStack_108,uVar3,uStack_48);
        if ((iVar2 != 0) && (iVar2 = FUN_142b7ac70(auStack_d0,auStack_108,0xa000001e), iVar2 != 0))
        {
          uStack_40 = FUN_142992f60(param_1 + 0x198);
          uVar3 = FUN_142992c50(param_1 + 0x198);
          iVar2 = FUN_142b7b3d0(auStack_108,uVar3,uStack_40);
          if (iVar2 != 0) goto LAB_142b01d26;
        }
      }
      return 0;
    }
  }
  return 0;
}


/* address=142b01d50 name=FUN_142b01d50 */

undefined8 FUN_142b01d50(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int aiStack_28 [2];
  undefined8 uStack_20;
  undefined auStack_18 [24];
  
  iVar1 = FUN_142b79020(param_1,auStack_18,aiStack_28,param_3);
  if (iVar1 == 0) {
    FUN_142afa690(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x1a6);
    return 0;
  }
  if (aiStack_28[0] == 0) {
    FUN_142993a50(param_2,0);
  }
  else {
    iVar1 = FUN_142b78430(auStack_18);
    if (iVar1 != 0) {
      FUN_142afa690(0x10,0,0xa0,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                    ,0x1ab);
      return 0;
    }
    uStack_20 = 0;
    iVar1 = FUN_142b783b0(auStack_18,&uStack_20);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_142993a50(param_2,uStack_20);
  }
  return 1;
}


/* address=142b01e30 name=FUN_142b01e30 */

uint FUN_142b01e30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  iVar1 = FUN_142b79020(param_1,auStack_48,0,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_142afa690(0x10,0,0xa0,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                          ,0x1c0);
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    puVar4 = (undefined *)FUN_142af39c0(auStack_48,auStack_28);
    puVar5 = auStack_38;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_1429936c0(param_2,auStack_38);
  }
  return uVar2;
}


/* address=142b01ed0 name=FUN_142b01ed0 */

undefined8 FUN_142b01ed0(wchar_t *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *apwStack_28 [2];
  wchar_t *apwStack_18 [3];
  
  iVar2 = FUN_142b78b10(param_1,param_3);
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar3 = wcstoul(param_1,apwStack_28,param_3);
    if (((uVar3 != 0) && (uVar3 = wcstoul((wchar_t *)apwStack_28,apwStack_18,4), uVar3 != 0)) &&
       (lVar5 = FUN_142b782f0(apwStack_28), lVar5 == 0)) {
      uVar4 = FUN_142b06a50(apwStack_18,param_4);
      FUN_142af3b00(param_2,uVar4);
      cVar1 = operator==<>(param_2,0);
      if (cVar1 != '\0') {
        return 0;
      }
      return 1;
    }
    FUN_142afa690(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x1d2);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=142b01fb0 name=FUN_142b01fb0 */

undefined8
FUN_142b01fb0(undefined8 param_1,undefined8 param_2,undefined *param_3,byte param_4,
             undefined4 param_5)

{
  undefined uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auStack_20 [32];
  
  iVar2 = FUN_142b79020(param_1,auStack_20,0,param_5);
  if ((iVar2 != 0) && (uVar3 = FUN_142b782f0(auStack_20), uVar3 <= param_4)) {
    uVar4 = FUN_142b782f0(auStack_20);
    uVar5 = FUN_142b782d0(auStack_20);
    FUN_142affbf0(param_2,uVar5,uVar4);
    uVar1 = FUN_142b782f0(auStack_20);
    *param_3 = uVar1;
    return 1;
  }
  FUN_142afa690(0x10,0,0xa0,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                ,0x1e5);
  return 0;
}


/* address=142b02070 name=FUN_142b02070 */

undefined8 FUN_142b02070(undefined8 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_142b790f0(param_1,&uStack_18,param_3,(longlong)param_4);
  if ((iVar1 == 0) || (0x7fffffff < CONCAT44(uStack_14,uStack_18))) {
    FUN_142afa690(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,499);
    uVar2 = 0;
  }
  else {
    *param_2 = uStack_18;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142b02100 name=FUN_142b02100 */

undefined8
FUN_142b02100(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_142b790f0(param_1,&uStack_18,param_3,param_4);
  if ((iVar1 == 0) || (0xffffffff < CONCAT44(uStack_14,uStack_18))) {
    FUN_142afa690(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x200);
    uVar2 = 0;
  }
  else {
    *param_2 = uStack_18;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142b02190 name=FUN_142b02190 */

undefined8
FUN_142b02190(undefined8 param_1,undefined2 *param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 uStack_18;
  undefined6 uStack_16;
  
  iVar1 = FUN_142b790f0(param_1,&uStack_18,param_3,param_4);
  if ((iVar1 == 0) || (0xffff < CONCAT62(uStack_16,uStack_18))) {
    FUN_142afa690(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x20d);
    uVar2 = 0;
  }
  else {
    *param_2 = uStack_18;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142b02210 name=FUN_142b02210 */

void FUN_142b02210(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142992c50(param_1 + 0xe8);
  FUN_142b04c40(uVar1,param_2,param_3);
  return;
}


/* address=142b02410 name=FUN_142b02410 */

undefined FUN_142b02410(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FUN_142993030(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_142b06960(param_2,param_3,0);
    lVar4 = FUN_142992c50(param_1 + 8);
    lVar4 = FUN_142992c50(lVar4 + 0x20);
    FUN_142af3b00(lVar4 + 0x68,uVar3);
    lVar4 = FUN_142992c50(param_1 + 8);
    lVar4 = FUN_142992c50(lVar4 + 0x20);
    uVar2 = FUN_142994ac0(lVar4 + 0x68,0);
  }
  return uVar2;
}


/* address=142b029e0 name=FUN_142b029e0 */

int FUN_142b029e0(void *param_1,void *param_2,size_t param_3)

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


/* address=142b02a20 name=FUN_142b02a20 */

undefined8 FUN_142b02a20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b02a70 name=FUN_142b02a70 */

undefined FUN_142b02a70(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_142992c50(*(longlong *)(param_1 + 8) + 0x20);
  cVar1 = FUN_142994ac0(lVar2 + 8,0);
  if (cVar1 != '\0') {
    lVar2 = FUN_142992c50(*(longlong *)(param_1 + 8) + 0x20);
    uVar3 = FUN_142992c50(lVar2 + 8);
    lVar2 = FUN_1429930a0(uVar3,0);
    if ((lVar2 != 0) && (cVar1 = FUN_142b0c9f0(param_1), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}


/* address=142b02b10 name=FUN_142b02b10 */

ulonglong FUN_142b02b10(undefined *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined auStack_70 [8];
  undefined auStack_68 [8];
  undefined auStack_60 [8];
  undefined auStack_58 [16];
  undefined auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined auStack_28 [16];
  undefined auStack_18 [24];
  
  FUN_142993ae0(param_2,0);
  FUN_142992dd0(param_3,0);
  iVar2 = FUN_142b788d0(param_5,auStack_28);
  if (iVar2 == 0) {
    *param_1 = 0x32;
    uVar3 = FUN_142afa690(0x10,0,0x89,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x165);
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    lVar4 = FUN_142b782f0(auStack_28);
    if (lVar4 == 0) {
      uVar3 = 1;
    }
    else {
      uVar5 = FUN_142993000();
      FUN_142992e20(auStack_70,uVar5);
      cVar1 = FUN_142993030(auStack_70);
      if (cVar1 == '\0') {
        *param_1 = 0x50;
        FUN_142993aa0(auStack_70);
        uVar3 = 0;
      }
      else {
        FUN_142994b40(auStack_68);
        while (lVar4 = FUN_142b782f0(auStack_28), lVar4 != 0) {
          iVar2 = FUN_142b788d0(auStack_28,auStack_58);
          if ((iVar2 == 0) || (lVar4 = FUN_142b782f0(auStack_58), lVar4 == 0)) {
            *param_1 = 0x32;
            FUN_142afa690(0x10,0,0x7f,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x179);
            FUN_142992d40(auStack_68);
            FUN_142993aa0(auStack_70);
            return 0;
          }
          uVar5 = FUN_142992c50(auStack_70);
          lVar4 = FUN_142993080(uVar5);
          if (lVar4 == 0) {
            uVar5 = FUN_142b03320(auStack_48,auStack_58);
            FUN_142994df0(auStack_68,uVar5);
            FUN_142992d40(auStack_48);
            cVar1 = FUN_142993030(auStack_68);
            if (cVar1 == '\0') {
              *param_1 = 0x32;
              FUN_142992d40(auStack_68);
              FUN_142993aa0(auStack_70);
              return 0;
            }
            if (param_4 != 0) {
              uStack_40 = FUN_142b782f0(auStack_58);
              uVar5 = FUN_142b782d0(auStack_58);
              FUN_142b11010(uVar5,uStack_40,param_4);
            }
          }
          uVar5 = FUN_142b06a50(auStack_58,param_6);
          FUN_142992e20(auStack_60,uVar5);
          cVar1 = FUN_142993030(auStack_60);
          if (cVar1 == '\0') {
LAB_142b02dc6:
            *param_1 = 0x50;
            FUN_142aee980(auStack_60);
            FUN_142992d40(auStack_68);
            FUN_142993aa0(auStack_70);
            return 0;
          }
          puStack_38 = auStack_18;
          uVar5 = FUN_142992cb0(auStack_60);
          uStack_30 = FUN_142992e50(puStack_38,uVar5);
          uVar5 = FUN_142992c50(auStack_70);
          cVar1 = FUN_142aeec60(uVar5,uStack_30);
          if (cVar1 == '\0') goto LAB_142b02dc6;
          FUN_142aee980(auStack_60);
        }
        uVar5 = FUN_142992cb0(auStack_70);
        FUN_142aeee40(param_2,uVar5);
        uVar5 = FUN_142992cb0(auStack_68);
        FUN_142994df0(param_3,uVar5);
        FUN_142992d40(auStack_68);
        FUN_142993aa0(auStack_70);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=142b02e70 name=FUN_142b02e70 */

ulonglong FUN_142b02e70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uStack_90;
  undefined auStack_70 [48];
  undefined auStack_40 [64];
  
  cVar1 = FUN_142b02a70(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_142b7afb0(param_2,0);
    uVar3 = (ulonglong)(iVar2 != 0);
  }
  else {
    iVar2 = FUN_142b7ac40(param_2,auStack_70);
    if (iVar2 == 0) {
      uVar3 = FUN_142afa690(0x10,0,0x44,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                            ,0x19f);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      lVar4 = FUN_142992c50(*(longlong *)(param_1 + 8) + 0x20);
      uVar5 = FUN_142992c50(lVar4 + 8);
      for (uStack_90 = 0; uVar3 = FUN_142993080(uVar5), uStack_90 < uVar3; uStack_90 = uStack_90 + 1
          ) {
        uVar6 = FUN_1429930a0(uVar5,uStack_90);
        iVar2 = FUN_142b7ac40(auStack_70,auStack_40);
        if (iVar2 == 0) {
LAB_142b02fbf:
          uVar3 = FUN_142afa690(0x10,0,0x44,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                                ,0x1ab);
          return uVar3 & 0xffffffffffffff00;
        }
        uVar7 = FUN_142b06c50(uVar6);
        uVar6 = FUN_142b06c30(uVar6);
        iVar2 = FUN_142b7ad30(auStack_40,uVar6,uVar7);
        if ((iVar2 == 0) || (iVar2 = FUN_142b7a730(auStack_70), iVar2 == 0)) goto LAB_142b02fbf;
      }
      iVar2 = FUN_142b7a730(param_2);
      uVar3 = (ulonglong)(iVar2 != 0);
    }
  }
  return uVar3;
}


/* address=142b03020 name=FUN_142b03020 */

undefined8 FUN_142b03020(undefined *param_1,undefined4 param_2)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  int aiStack_a8 [2];
  wchar_t *apwStack_a0 [2];
  wchar_t awStack_90 [8];
  wchar_t *apwStack_80 [2];
  wchar_t *apwStack_70 [2];
  wchar_t *apwStack_60 [2];
  wchar_t *apwStack_50 [2];
  undefined auStack_40 [16];
  wchar_t awStack_30 [16];
  
  puVar6 = auStack_40;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar1 = FUN_142b050f0(auStack_40);
  if ((((cVar1 == '\0') || (uVar2 = wcstoul(awStack_90,(wchar_t **)0x0,0x20000010), uVar2 == 0)) ||
      (iVar3 = FUN_142b78fa0(awStack_90,0,0,0x80000001), iVar3 == 0)) ||
     ((iVar3 = FUN_142b78fa0(awStack_90,0,0,0x80000002), iVar3 == 0 ||
      (iVar3 = FUN_142b78fa0(awStack_90,awStack_30,aiStack_a8,0xa0000003), iVar3 == 0)))) {
    FUN_142afa690(0x10,0,0x110,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x22d);
    uVar4 = 0;
  }
  else if (aiStack_a8[0] == 0) {
    uVar4 = 1;
  }
  else {
    uVar2 = wcstoul(awStack_30,apwStack_80,0x20000010);
    if (uVar2 == 0) {
      FUN_142afa690(0x10,0,0x110,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x237);
      uVar4 = 0;
    }
    else {
      do {
        do {
          lVar5 = FUN_142b782f0(apwStack_80);
          if (lVar5 == 0) {
            return 1;
          }
          uVar2 = wcstoul((wchar_t *)apwStack_80,apwStack_a0,0x20000010);
          if ((((uVar2 == 0) || (uVar2 = wcstoul((wchar_t *)apwStack_a0,apwStack_70,6), uVar2 == 0))
              || ((iVar3 = FUN_142b78b10(apwStack_a0), iVar3 != 0 &&
                  (uVar2 = wcstoul((wchar_t *)apwStack_a0,(wchar_t **)0x0,1), uVar2 == 0)))) ||
             ((uVar2 = wcstoul((wchar_t *)apwStack_a0,apwStack_60,4), uVar2 == 0 ||
              (lVar5 = FUN_142b782f0(apwStack_a0), lVar5 != 0)))) {
            FUN_142afa690(0x10,0,0x110,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x243);
            return 0;
          }
          lVar5 = FUN_142b782f0(apwStack_70);
        } while (lVar5 != 3);
        uVar4 = FUN_142b782d0(apwStack_70);
        iVar3 = FUN_142b029e0(uVar4,&DAT_14318471c,3);
      } while (iVar3 != 0);
      uVar2 = wcstoul((wchar_t *)apwStack_60,apwStack_50,3);
      if ((uVar2 == 0) || (lVar5 = FUN_142b782f0(apwStack_60), lVar5 != 0)) {
        FUN_142afa690(0x10,0,0x110,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0x251);
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_142b79270(apwStack_50);
        if (iVar3 == 0) {
          FUN_142afa690(0x10,0,0x110,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,600);
          uVar4 = 0;
        }
        else {
          iVar3 = FUN_142b79310(apwStack_50,param_2);
          if (iVar3 == 0) {
            FUN_142afa690(0x10,0,0x12e,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x25d);
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
    }
  }
  return uVar4;
}


/* address=142b03320 name=FUN_142b03320 */

undefined8 FUN_142b03320(undefined8 param_1,undefined *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined auStack_48 [8];
  undefined auStack_40 [16];
  undefined auStack_30 [32];
  
  puVar4 = auStack_40;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  cVar1 = FUN_142b050f0(auStack_40,auStack_30);
  if (cVar1 == '\0') {
    FUN_142afa690(0x10,0,0x110,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x1e3);
    FUN_142aeec30(param_1,0);
  }
  else {
    uVar2 = FUN_142b76300(auStack_30);
    uVar2 = FUN_142992e20(auStack_48,uVar2);
    FUN_142992e50(param_1,uVar2);
    FUN_142992d40(auStack_48);
  }
  return param_1;
}


/* address=142b033e0 name=FUN_142b033e0 */

undefined8 FUN_142b033e0(undefined8 param_1,longlong param_2,undefined *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined auStack_68 [8];
  undefined auStack_60 [8];
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined auStack_38 [16];
  undefined auStack_28 [8];
  undefined auStack_20 [32];
  
  lVar3 = FUN_142992c50(param_2 + 0x68);
  uStack_58 = *(undefined8 *)(lVar3 + 0x200);
  uVar4 = FUN_142993000();
  FUN_142992e20(auStack_68,uVar4);
  cVar1 = FUN_142993030(auStack_68);
  if (cVar1 == '\0') {
    *param_3 = 0x50;
    FUN_142aeec30(param_1,0);
    FUN_142993aa0(auStack_68);
  }
  else {
    iVar2 = FUN_142b788a0(param_4,auStack_38);
    if (iVar2 == 0) {
      *param_3 = 0x32;
      FUN_142afa690(0x10,0,0xa2,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x276);
      FUN_142aeec30(param_1,0);
      FUN_142993aa0(auStack_68);
    }
    else {
      while (lVar3 = FUN_142b782f0(auStack_38), lVar3 != 0) {
        iVar2 = FUN_142b788a0(auStack_38,auStack_20);
        if (iVar2 == 0) {
          *param_3 = 0x32;
          FUN_142afa690(0x10,0,0x7b,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x27e);
          FUN_142aeec30(param_1,0);
          FUN_142993aa0(auStack_68);
          return param_1;
        }
        uVar4 = FUN_142b06a50(auStack_20,uStack_58);
        FUN_142992e20(auStack_60,uVar4);
        cVar1 = FUN_142993030(auStack_60);
        if (cVar1 == '\0') {
LAB_142b035c5:
          *param_3 = 0x50;
          FUN_142aeec30(param_1,0);
          FUN_142aee980(auStack_60);
          FUN_142993aa0(auStack_68);
          return param_1;
        }
        puStack_50 = auStack_28;
        uVar4 = FUN_142992cb0(auStack_60);
        uStack_48 = FUN_142992e50(puStack_50,uVar4);
        uVar4 = FUN_142992c50(auStack_68);
        cVar1 = FUN_142aeec60(uVar4);
        if (cVar1 == '\0') goto LAB_142b035c5;
        FUN_142aee980(auStack_60);
      }
      uStack_40 = FUN_142992c50(auStack_68);
      lVar3 = FUN_142992c50(param_2 + 0x68);
      cVar1 = (***(code ***)(lVar3 + 8))(uStack_40);
      if (cVar1 == '\0') {
        *param_3 = 0x32;
        FUN_142afa690(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0x28d);
        FUN_142aeec30(param_1,0);
        FUN_142993aa0(auStack_68);
      }
      else {
        FUN_142992e50(param_1,auStack_68);
        FUN_142993aa0(auStack_68);
      }
    }
  }
  return param_1;
}


/* address=142b036d0 name=FUN_142b036d0 */

bool FUN_142b036d0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_142992c50(param_1 + 10);
  if (lVar1 == 0) {
    lVar1 = FUN_142992c50(*param_1 + 0x68);
    lVar1 = FUN_142992c50(lVar1 + 200);
  }
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_142993080(lVar1);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}


/* address=142b03760 name=FUN_142b03760 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_142b03760(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  longlong lStack_d0;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined auStack_b0 [16];
  undefined auStack_a0 [24];
  undefined auStack_88 [16];
  undefined auStack_78 [48];
  undefined auStack_48 [56];
  
  uVar3 = FUN_142b7ac10(param_2,auStack_78);
  if ((int)uVar3 == 0) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    lStack_d0 = FUN_142992c50(param_1[1] + 0x50);
    if (lStack_d0 == 0) {
      lVar4 = FUN_142992c50(*param_1 + 0x68);
      lStack_d0 = FUN_142992c50(lVar4 + 200);
    }
    if (lStack_d0 == 0) {
      iVar2 = FUN_142b7a730(param_2);
      uVar3 = (ulonglong)(iVar2 != 0);
    }
    else {
      plStack_c8 = &lStack_d0;
      FUN_142aeecd0(auStack_b0,lStack_d0);
      FUN_142aeee00(auStack_a0,*plStack_c8);
      while( true ) {
        puVar6 = auStack_a0;
        puVar7 = auStack_88;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar1 = FUN_142aeed50(auStack_b0,auStack_88);
        if (cVar1 == '\0') {
          iVar2 = FUN_142b7a730(param_2);
          return (ulonglong)(iVar2 != 0);
        }
        uStack_c0 = FUN_142aeedb0(auStack_b0);
        uVar3 = FUN_142b7ac10(auStack_78,auStack_48);
        if ((int)uVar3 == 0) break;
        uStack_b8 = FUN_142b06c50(uStack_c0);
        uVar5 = FUN_142b06c30(uStack_c0);
        uVar3 = FUN_142b7ad30(auStack_48,uVar5,uStack_b8);
        if ((int)uVar3 == 0) break;
        FUN_142aeede0(auStack_b0);
      }
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
  }
  return uVar3;
}


/* address=142b03920 name=FUN_142b03920 */

undefined8 FUN_142b03920(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined2 auStack_28 [4];
  undefined8 uStack_20;
  longlong lStack_18;
  
  uVar2 = FUN_142afbfd0(*param_1);
  if (0x303 < uVar2) {
    FID_conflict__assert((wchar_t *)"s",(wchar_t *)"D",0x2ba);
  }
  lStack_18 = param_1[0xc0];
  uVar3 = FUN_142afe210(param_2);
  if ((*(uint *)(lStack_18 + 0x18) & uVar3) != 0) {
    iVar4 = FUN_142b0fea0(param_2);
    if (iVar4 == 0x198) {
      uStack_20 = FUN_142b10170(param_2);
      uVar6 = FUN_142b4d190(uStack_20);
      uVar5 = FUN_142b4b4d0(uVar6);
      cVar1 = FUN_142b07790(auStack_28,uVar5);
      if (((cVar1 == '\0') || (cVar1 = FUN_142ba0980(param_1,auStack_28[0]), cVar1 == '\0')) ||
         (iVar4 = FUN_142b4d530(uStack_20), iVar4 != 4)) {
        FUN_142afa690(0x10,0,0x6b,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0x2ca);
        return 0;
      }
    }
    return 1;
  }
  FUN_142afa690(0x10,0,0xf1,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                ,0x2be);
  return 0;
}


/* address=142b03a60 name=FUN_142b03a60 */

undefined8 FUN_142b03a60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined auStack_30 [8];
  undefined auStack_28 [8];
  undefined auStack_20 [32];
  
  lVar2 = *param_1;
  cVar1 = FUN_142b02a70(param_1);
  if (cVar1 == '\0') {
    uVar3 = 1;
  }
  else {
    lVar2 = FUN_142992c50(lVar2 + 0x68);
    cVar1 = (**(code **)(*(longlong *)(lVar2 + 8) + 0x70))(param_1);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      lVar2 = FUN_142992c50(param_1[1] + 0x20);
      uVar3 = FUN_142992c50(lVar2 + 8);
      uVar3 = FUN_1429930a0(uVar3,0);
      FUN_142b06c70(uVar3,auStack_20);
      cVar1 = FUN_142b03ff0(param_1);
      if (cVar1 == '\0') {
        uVar3 = FUN_142b03320(auStack_28,auStack_20);
        FUN_142994df0(param_1 + 0xba,uVar3);
        FUN_142992d40(auStack_28);
      }
      else {
        lVar2 = FUN_142992c50(param_1[1] + 0x20);
        lVar2 = FUN_142992c50(lVar2 + 0x98);
        uVar3 = FUN_142992eb0(auStack_30,lVar2 + 0x10);
        FUN_142994df0(param_1 + 0xba,uVar3);
        FUN_142992d40(auStack_30);
      }
      uVar3 = FUN_142994ac0(param_1 + 0xba,0);
    }
  }
  return uVar3;
}


/* address=142b03bb0 name=FUN_142b03bb0 */

void FUN_142b03bb0(longlong param_1)

{
  FUN_142992d40(param_1 + 0x10);
  FUN_142aee980(param_1);
  return;
}


/* address=142b03bf0 name=FUN_142b03bf0 */

undefined8 FUN_142b03bf0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined auStack_38 [8];
  undefined auStack_30 [8];
  undefined8 uStack_28;
  undefined auStack_20 [8];
  undefined8 uStack_18;
  undefined auStack_10 [16];
  
  uVar2 = FUN_142b057f0(auStack_30);
  FUN_142992e50(auStack_38,uVar2);
  FUN_142b05700(auStack_30);
  cVar1 = FUN_142993030(auStack_38);
  if (cVar1 == '\0') {
    FUN_142aeec30(param_2,0);
    FUN_142b05700(auStack_38);
  }
  else {
    uStack_28 = FUN_142af3b50(auStack_20,param_1);
    uVar2 = FUN_142992c50(auStack_38);
    FUN_142af3e70(uVar2,uStack_28);
    FUN_142aee980(auStack_20);
    lVar3 = FUN_142992c50(auStack_38);
    *(undefined2 *)(lVar3 + 8) = *(undefined2 *)(param_1 + 8);
    uStack_18 = FUN_142992eb0(auStack_10,param_1 + 0x10);
    lVar3 = FUN_142992c50(auStack_38);
    FUN_142994df0(lVar3 + 0x10,uStack_18);
    FUN_142992d40(auStack_10);
    FUN_142992e50(param_2,auStack_38);
    FUN_142b05700(auStack_38);
  }
  return param_2;
}


/* address=142b03d20 name=FUN_142b03d20 */

undefined8 FUN_142b03d20(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined auStack_78 [8];
  undefined auStack_70 [8];
  undefined auStack_68 [16];
  undefined auStack_58 [8];
  undefined auStack_50 [8];
  undefined8 uStack_48;
  undefined auStack_40 [8];
  undefined8 uStack_38;
  undefined auStack_30 [16];
  undefined auStack_20 [32];
  
  uVar3 = FUN_142b057f0(auStack_50);
  FUN_142992e50(auStack_78,uVar3);
  FUN_142b05700(auStack_50);
  cVar1 = FUN_142993030(auStack_78);
  if (cVar1 == '\0') {
    *param_3 = 0x50;
    FUN_142aeec30(param_1,0);
    FUN_142b05700(auStack_78);
  }
  else {
    uStack_48 = FUN_142aee920(auStack_40,param_2);
    uVar3 = FUN_142992c50(auStack_78);
    FUN_142af3e70(uVar3,uStack_48);
    FUN_142aee980(auStack_40);
    uVar3 = FUN_142992c50(auStack_78);
    uVar3 = FUN_142992c50(uVar3);
    FUN_142b06c70(uVar3,auStack_68);
    iVar2 = FUN_142b78630(auStack_68,auStack_58);
    if (iVar2 != 0) {
      lVar4 = FUN_142992c50(auStack_78);
      iVar2 = FUN_142b78540(auStack_68,lVar4 + 8);
      if ((((iVar2 != 0) && (iVar2 = FUN_142b788d0(auStack_68,auStack_30), iVar2 != 0)) &&
          (iVar2 = FUN_142b78540(auStack_68,auStack_70), iVar2 != 0)) &&
         ((iVar2 = FUN_142b788a0(auStack_68,auStack_20), iVar2 != 0 &&
          (lVar4 = FUN_142b782f0(auStack_68), lVar4 == 0)))) {
        uStack_38 = FUN_142b76300(auStack_30);
        lVar4 = FUN_142992c50(auStack_78);
        FUN_142992dd0(lVar4 + 0x10,uStack_38);
        lVar4 = FUN_142992c50(auStack_78);
        cVar1 = operator==<>(lVar4 + 0x10,0);
        if (cVar1 != '\0') {
          FUN_142afa690(0x10,0,0x89,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x316);
          *param_3 = 0x32;
          FUN_142aeec30(param_1,0);
          FUN_142b05700(auStack_78);
          return param_1;
        }
        FUN_142992e50(param_1,auStack_78);
        FUN_142b05700(auStack_78);
        return param_1;
      }
    }
    FUN_142afa690(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x30f);
    *param_3 = 0x32;
    FUN_142aeec30(param_1,0);
    FUN_142b05700(auStack_78);
  }
  return param_1;
}


/* address=142b03fa0 name=FUN_142b03fa0 */

longlong FUN_142b03fa0(longlong param_1)

{
  FUN_142994b40(param_1);
  *(undefined2 *)(param_1 + 8) = 0;
  FUN_142994b40(param_1 + 0x10);
  return param_1;
}


/* address=142b03ff0 name=FUN_142b03ff0 */

undefined FUN_142b03ff0(longlong *param_1)

{
  char cVar1;
  
  if ((((*(byte *)(*param_1 + 0xa4) & 1) != 0) && ((*(byte *)((longlong)param_1 + 0x621) & 1) != 0))
     && (cVar1 = FUN_142b05200(param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}


/* address=142b04060 name=FUN_142b04060 */

longlong FUN_142b04060(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined *puVar2;
  
  FUN_142994b40(param_1);
  FUN_142994b40(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FUN_142993420(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_142994b40(param_1 + 0x60);
  FUN_142994b40(param_1 + 0x68);
  *(undefined *)(param_1 + 0x70) = 0;
  puVar2 = (undefined *)(param_1 + 0x71);
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_142aeec30(param_1 + 0x98,0);
  FUN_142aeec30(param_1 + 0xa0,0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return param_1;
}


/* address=142b041a0 name=FUN_142b041a0 */

void FUN_142b041a0(longlong param_1)

{
  FUN_142b04710(param_1);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1);
  FUN_142992d40(param_1 + 0xa0);
  FUN_142b05700(param_1 + 0x98);
  FUN_142aee980(param_1 + 0x68);
  FUN_142aee980(param_1 + 0x60);
  FUN_1429934a0(param_1 + 0x38);
  FUN_142993aa0(param_1 + 8);
  FUN_142992d40(param_1);
  return;
}


/* address=142b04250 name=FUN_142b04250 */

undefined8 FUN_142b04250(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined auStack_b8 [8];
  undefined auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined auStack_78 [8];
  undefined8 uStack_70;
  undefined auStack_68 [8];
  longlong lStack_60;
  undefined8 uStack_58;
  undefined auStack_50 [8];
  undefined8 uStack_48;
  undefined auStack_40 [8];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  uVar2 = FUN_142994bc0(auStack_b0,param_2 + 0x30);
  FUN_142992e50(auStack_b8,uVar2);
  FUN_142993ed0(auStack_b0);
  cVar1 = FUN_142993030(auStack_b8);
  if (cVar1 == '\0') {
    FUN_142aeec30(param_1,0);
    FUN_142993ed0(auStack_b8);
  }
  else {
    cVar1 = FUN_142993030(param_2 + 8);
    if (cVar1 != '\0') {
      uVar2 = FUN_142992c50(param_2 + 8);
      uStack_a8 = FUN_142aeea50(uVar2,&LAB_142b04c10,FUN_142b06ae0);
      lVar3 = FUN_142992c50(auStack_b8);
      FUN_142993ae0(lVar3 + 8,uStack_a8);
      lVar3 = FUN_142992c50(auStack_b8);
      cVar1 = FUN_142993030(lVar3 + 8);
      if (cVar1 == '\0') {
        FUN_142aeec30(param_1,0);
        FUN_142993ed0(auStack_b8);
        return param_1;
      }
    }
    uStack_a0 = FUN_142992eb0(auStack_98,param_2);
    uVar2 = FUN_142992c50(auStack_b8);
    FUN_142994df0(uVar2,uStack_a0);
    FUN_142992d40(auStack_98);
    lVar3 = FUN_142992c50(auStack_b8);
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    puStack_90 = auStack_28;
    puVar4 = (undefined *)FUN_142994db0(puStack_90,param_2 + 0x38);
    puVar5 = auStack_38;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_142992c50(auStack_b8);
    cVar1 = FUN_1429939a0(lVar3 + 0x38,auStack_38);
    if (cVar1 == '\0') {
      FUN_142aeec30(param_1,0);
      FUN_142993ed0(auStack_b8);
    }
    else {
      lVar3 = FUN_142992c50(auStack_b8);
      *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      lVar3 = FUN_142992c50(auStack_b8);
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      uStack_88 = FUN_142992c50(auStack_b8);
      lVar3 = FUN_142992c50(auStack_b8);
      (**(code **)(*(longlong *)(lVar3 + 0x30) + 0x18))(uStack_88,param_2);
      uStack_80 = FUN_142af3b50(auStack_78,param_2 + 0x60);
      lVar3 = FUN_142992c50(auStack_b8);
      FUN_142af3e70(lVar3 + 0x60,uStack_80);
      FUN_142aee980(auStack_78);
      uStack_70 = FUN_142af3b50(auStack_68,param_2 + 0x68);
      lVar3 = FUN_142992c50(auStack_b8);
      FUN_142af3e70(lVar3 + 0x68,uStack_70);
      FUN_142aee980(auStack_68);
      lVar3 = FUN_142992c50(auStack_b8);
      *(undefined *)(lVar3 + 0x70) = *(undefined *)(param_2 + 0x70);
      lStack_60 = param_2 + 0x71;
      lVar3 = FUN_142992c50(auStack_b8);
      FUN_142b02a20(lVar3 + 0x71,lStack_60,0x20);
      cVar1 = FUN_142993030(param_2 + 0x98);
      if (cVar1 != '\0') {
        uVar2 = FUN_142992c50(param_2 + 0x98);
        uStack_58 = FUN_142b03bf0(uVar2,auStack_50);
        lVar3 = FUN_142992c50(auStack_b8);
        FUN_142b05790(lVar3 + 0x98,uStack_58);
        FUN_142b05700(auStack_50);
        lVar3 = FUN_142992c50(auStack_b8);
        cVar1 = FUN_142993030(lVar3 + 0x98);
        if (cVar1 == '\0') {
          FUN_142aeec30(param_1,0);
          FUN_142993ed0(auStack_b8);
          return param_1;
        }
      }
      uStack_48 = FUN_142992eb0(auStack_40,param_2 + 0xa0);
      lVar3 = FUN_142992c50(auStack_b8);
      FUN_142994df0(lVar3 + 0xa0,uStack_48);
      FUN_142992d40(auStack_40);
      lVar3 = FUN_142992c50(auStack_b8);
      *(undefined8 *)(lVar3 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
      FUN_142992e50(param_1,auStack_b8);
      FUN_142993ed0(auStack_b8);
    }
  }
  return param_1;
}


/* address=142b04710 name=FUN_142b04710 */

void FUN_142b04710(longlong param_1)

{
  if (param_1 != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x30) + 8))(param_1);
    FUN_142993ae0(param_1 + 8,0);
    FUN_142992dd0(param_1,0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_142b05740(param_1 + 0x98,0);
    FUN_142992dd0(param_1 + 0xa0,0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


/* address=142b047b0 name=FUN_142b047b0 */

undefined FUN_142b047b0(longlong param_1,
                       unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                       *param_2)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _Facet_base *p_Var6;
  undefined auStack_18 [24];
  
  uVar4 = FUN_142992c50(param_1);
  uVar5 = FUN_142992c50(param_2);
  iVar3 = FUN_142b04c80(uVar5,uVar4);
  if (iVar3 == 0) {
    FUN_142aee980(param_2);
    uVar1 = 0;
  }
  else {
    if (iVar3 == 2) {
      FUN_142992dd0(param_1,0);
    }
    (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1);
    cVar2 = FUN_142994ac0(param_1 + 8,0);
    if (cVar2 == '\0') {
      uVar4 = FUN_142993000();
      FUN_142993ae0(param_1 + 8,uVar4);
      cVar2 = operator==<>(param_1 + 8,0);
      if (cVar2 == '\0') {
        uVar4 = FUN_142992cb0(param_2);
        uVar4 = FUN_142992e50(auStack_18,uVar4);
        uVar5 = FUN_142992c50(param_1 + 8);
        cVar2 = FUN_142aeec60(uVar5,uVar4);
        if (cVar2 == '\0') {
          FUN_142993ae0(param_1 + 8,0);
          FUN_142aee980(param_2);
          uVar1 = 0;
        }
        else {
          FUN_142aee980(param_2);
          uVar1 = 1;
        }
      }
      else {
        FUN_142aee980(param_2);
        uVar1 = 0;
      }
    }
    else {
      uVar4 = FUN_142992c50(param_1 + 8);
      uVar4 = FUN_1429930a0(uVar4,0);
      FUN_142b06ae0(uVar4);
      p_Var6 = std::
               unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
               ::release(param_2);
      uVar4 = FUN_142992c50(param_1 + 8);
      FUN_142af52d0(uVar4,0,p_Var6);
      FUN_142aee980(param_2);
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=142b049a0 name=FUN_142b049a0 */

undefined8 FUN_142b049a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_142b0fb60(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_142b0fbb0(param_1,param_2);
    if (iVar1 == -2) {
      FUN_142afa690(0xb,0,0x80,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x1fc);
      uVar2 = 0;
    }
    else if (iVar1 == -1) {
      FUN_142afa690(0xb,0,0x73,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x1f9);
      uVar2 = 0;
    }
    else if (iVar1 == 0) {
      FUN_142afa690(0xb,0,0x74,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x1f6);
      uVar2 = 0;
    }
    else if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      FID_conflict__assert(L"0",(wchar_t *)"D",0x200);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142b04aa0 name=FUN_142b04aa0 */

ulonglong FUN_142b04aa0(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined auStack_30 [8];
  undefined auStack_28 [8];
  undefined auStack_20 [32];
  
  if (param_2 == 0) {
    uVar3 = FUN_142afa690(0x10,0,0xb5,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x206);
  }
  else {
    cVar1 = operator==<>(param_1 + 8,0);
    if (cVar1 == '\0') {
      uVar4 = FUN_142992c50(param_1 + 8);
      lVar5 = FUN_1429930a0(uVar4,0);
      if (lVar5 != 0) {
        uVar4 = FUN_142992c50(param_1 + 8);
        uVar4 = FUN_1429930a0(uVar4,0);
        FUN_142b06c70(uVar4,auStack_20);
        uVar4 = FUN_142b03320(auStack_28,auStack_20);
        FUN_142992e50(auStack_30,uVar4);
        FUN_142992d40(auStack_28);
        cVar1 = FUN_142993030(auStack_30);
        if (cVar1 == '\0') {
          FUN_142afa690(0xb,0,0x80,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x215);
          FUN_142992d40(auStack_30);
          return 0;
        }
        uVar4 = FUN_142992c50(auStack_30);
        bVar2 = FUN_142b049a0(uVar4,param_2);
        FUN_142992d40(auStack_30);
        return (ulonglong)bVar2;
      }
    }
    uVar3 = FUN_142afa690(0x10,0,0xad,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                          ,0x20c);
  }
  return uVar3 & 0xffffffffffffff00;
}


/* address=142b04c40 name=FUN_142b04c40 */

void FUN_142b04c40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}


/* address=142b04c80 name=FUN_142b04c80 */

undefined4 FUN_142b04c80(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined auStack_30 [8];
  undefined auStack_28 [8];
  undefined auStack_20 [32];
  
  FUN_142b06c70(param_1,auStack_20);
  uVar4 = FUN_142b03320(auStack_28,auStack_20);
  FUN_142992e50(auStack_30,uVar4);
  FUN_142992d40(auStack_28);
  cVar1 = FUN_142993030(auStack_30);
  if (cVar1 == '\0') {
    FUN_142afa690(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0xec);
    FUN_142992d40(auStack_30);
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_142992c50(auStack_30);
    uVar2 = FUN_142b0fea0(uVar4);
    cVar1 = FUN_142b0d6a0(uVar2);
    if (cVar1 == '\0') {
      FUN_142afa690(0x10,0,0xe4,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0xf1);
      FUN_142992d40(auStack_30);
      uVar2 = 0;
    }
    else {
      uVar4 = FUN_142992c50(auStack_30);
      iVar3 = FUN_142b0fea0(uVar4);
      if ((iVar3 == 0x198) && (cVar1 = FUN_142b03020(auStack_20,0), cVar1 == '\0')) {
        FUN_142afa690(0x10,0,0xe4,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                      ,0xf9);
        FUN_142992d40(auStack_30);
        return 0;
      }
      if (param_2 != 0) {
        uVar4 = FUN_142992c50(auStack_30);
        cVar1 = FUN_142b049a0(uVar4,param_2);
        if (cVar1 == '\0') {
          FUN_142afa330();
          FUN_142992d40(auStack_30);
          return 2;
        }
      }
      FUN_142992d40(auStack_30);
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=142b04e50 name=FUN_142b04e50 */

undefined4
FUN_142b04e50(longlong param_1,undefined8 *param_2,ulonglong param_3,longlong param_4,
             longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined auStack_60 [8];
  int iStack_58;
  uint uStack_54;
  ulonglong uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined auStack_28 [8];
  undefined auStack_20 [8];
  undefined auStack_18 [24];
  
  if ((param_3 == 0) || ((param_4 == 0 && (param_5 == 0)))) {
    FUN_142afa690(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x10c);
    uStack_48 = 0;
  }
  else if ((param_4 == 0) || (param_5 == 0)) {
    iStack_58 = FUN_142b04c80(*param_2,param_4);
    if (iStack_58 == 0) {
      uStack_48 = 0;
    }
    else if (iStack_58 == 2) {
      FUN_142afa690(0x10,0,0x112,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x119);
      uStack_48 = 0;
    }
    else {
      uVar2 = FUN_142993000();
      FUN_142992e20(auStack_60,uVar2);
      cVar1 = FUN_142993030(auStack_60);
      if (cVar1 == '\0') {
        uStack_48 = 0;
        FUN_142993aa0(auStack_60);
      }
      else {
        for (uStack_50 = 0; uStack_50 < param_3; uStack_50 = uStack_50 + 1) {
          puStack_38 = auStack_18;
          uVar2 = FUN_142aee920(auStack_28,param_2[uStack_50]);
          uStack_30 = FUN_142992e50(puStack_38,uVar2);
          uVar2 = FUN_142992c50(auStack_60);
          cVar1 = FUN_142aeec60(uVar2,uStack_30);
          uStack_54 = (uint)(cVar1 == '\0');
          FUN_142aee980(auStack_28);
          if (cVar1 == '\0') {
            uStack_44 = 0;
            FUN_142993aa0(auStack_60);
            return uStack_44;
          }
        }
        uVar2 = FUN_142992ce0(auStack_20,param_4);
        FUN_142994df0(param_1,uVar2);
        FUN_142992d40(auStack_20);
        *(longlong *)(param_1 + 0x28) = param_5;
        uVar2 = FUN_142992cb0(auStack_60);
        FUN_142aeee40(param_1 + 8,uVar2);
        uStack_40 = 1;
        FUN_142993aa0(auStack_60);
        uStack_48 = uStack_40;
      }
    }
  }
  else {
    FUN_142afa690(0x10,0,0x113,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x111);
    uStack_48 = 0;
  }
  return uStack_48;
}


/* address=142b050f0 name=FUN_142b050f0 */

ulonglong FUN_142b050f0(undefined *param_1,wchar_t **param_2)

{
  ulong uVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t awStack_38 [8];
  wchar_t *apwStack_28 [3];
  
  pwVar4 = awStack_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined *)pwVar4 = *param_1;
    param_1 = param_1 + 1;
    pwVar4 = (wchar_t *)((longlong)pwVar4 + 1);
  }
  uVar1 = wcstoul(awStack_38,apwStack_28,0x20000010);
  uVar2 = CONCAT44(extraout_var,uVar1);
  if ((uVar1 != 0) && (uVar2 = FUN_142b782f0(awStack_38), uVar2 == 0)) {
    uVar1 = wcstoul((wchar_t *)apwStack_28,param_2,0x20000010);
    uVar2 = CONCAT44(extraout_var_00,uVar1);
    if ((uVar1 != 0) && (uVar2 = FUN_142b78fa0(param_2,0,0,0xa0000000), (int)uVar2 != 0)) {
      uVar1 = wcstoul((wchar_t *)param_2,(wchar_t **)0x0,2);
      uVar2 = CONCAT44(extraout_var_01,uVar1);
      if (uVar1 != 0) {
        uVar1 = wcstoul((wchar_t *)param_2,(wchar_t **)0x0,0x20000010);
        uVar2 = CONCAT44(extraout_var_02,uVar1);
        if (uVar1 != 0) {
          uVar1 = wcstoul((wchar_t *)param_2,(wchar_t **)0x0,0x20000010);
          uVar2 = CONCAT44(extraout_var_03,uVar1);
          if (uVar1 != 0) {
            uVar1 = wcstoul((wchar_t *)param_2,(wchar_t **)0x0,0x20000010);
            uVar2 = CONCAT44(extraout_var_04,uVar1);
            if (uVar1 != 0) {
              uVar1 = wcstoul((wchar_t *)param_2,(wchar_t **)0x0,0x20000010);
              uVar2 = CONCAT44(extraout_var_05,uVar1);
              if (uVar1 != 0) {
                return CONCAT71((int7)(uVar2 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}


/* address=142b05200 name=FUN_142b05200 */

ulonglong FUN_142b05200(longlong *param_1)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  short *psVar7;
  short *psStack_38;
  undefined auStack_18 [24];
  
  uVar3 = FUN_142992c50(param_1[1] + 0x20);
  cVar1 = operator==<>(uVar3 + 0x98,0);
  uVar5 = 0;
  if (cVar1 == '\0') {
    uVar4 = FUN_142992c50(uVar3 + 0x98);
    cVar1 = operator==<>(uVar4,0);
    uVar5 = 0;
    if ((cVar1 == '\0') &&
       ((cVar1 = operator==<>(uVar3 + 0xa0,0), cVar1 == '\0' ||
        (uVar5 = uVar3, *(longlong *)(uVar3 + 0xa8) != 0)))) {
      lVar6 = FUN_142992c50(uVar3 + 0x98);
      if ((*(byte *)(*(longlong *)(*param_1 + 0x30) + 0xdc) >> 1 & 1) == 0) {
        FID_conflict__assert((wchar_t *)"h",(wchar_t *)"D",0x32c);
      }
      uVar2 = FUN_142afbfd0(*param_1);
      if (uVar2 < 0x304) {
        return (ulonglong)(byte)(uVar2 >> 8) << 8;
      }
      FUN_142994db0(auStack_18,param_1 + 0x53);
      psStack_38 = (short *)FUN_142992c50(auStack_18);
      psVar7 = (short *)FUN_142afc3a0(auStack_18);
      while( true ) {
        if (psStack_38 == psVar7) {
          return (ulonglong)psVar7 & 0xffffffffffffff00;
        }
        if (*(short *)(lVar6 + 8) == *psStack_38) break;
        psStack_38 = psStack_38 + 1;
      }
      return CONCAT71((uint7)(byte)((ushort)*(short *)(lVar6 + 8) >> 8),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}


/* address=142b053a0 name=FUN_142b053a0 */

undefined4 FUN_142b053a0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined auStack_28 [8];
  undefined auStack_20 [8];
  undefined auStack_18 [24];
  
  if ((param_3 == 0) && (param_4 == 0)) {
    FUN_142afa690(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x346);
    uStack_34 = 0;
  }
  else if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = FUN_142b03d20(auStack_20,param_2,auStack_38);
    FUN_142992e50(auStack_28,uVar2);
    FUN_142b05700(auStack_20);
    cVar1 = operator==<>(auStack_28,0);
    if (cVar1 == '\0') {
      if (param_3 != 0) {
        lVar3 = FUN_142992c50(auStack_28);
        uVar2 = FUN_142992c50(lVar3 + 0x10);
        cVar1 = FUN_142b049a0(uVar2,param_3);
        if (cVar1 == '\0') {
          FUN_142afa690(0x10,0,0x112,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                        ,0x359);
          uStack_30 = 0;
          FUN_142b05700(auStack_28);
          return uStack_30;
        }
      }
      uVar2 = FUN_142992cb0(auStack_28);
      FUN_142b05790(param_1 + 0x98,uVar2);
      uVar2 = FUN_142992ce0(auStack_18,param_3);
      FUN_142994df0(param_1 + 0xa0,uVar2);
      FUN_142992d40(auStack_18);
      *(longlong *)(param_1 + 0xa8) = param_4;
      uStack_2c = 1;
      FUN_142b05700(auStack_28);
      uStack_34 = uStack_2c;
    }
    else {
      FUN_142afa690(0x10,0,0x12d,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                    ,0x352);
      uStack_34 = 0;
      FUN_142b05700(auStack_28);
    }
  }
  else {
    FUN_142afa690(0x10,0,0x113,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x34b);
    uStack_34 = 0;
  }
  return uStack_34;
}


/* address=142b055b0 name=FUN_142b055b0 */

undefined FUN_142b055b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auStack_20 [32];
  
  FUN_142b78260(auStack_20,param_2,param_3);
  cVar1 = FUN_142b9f570(auStack_20);
  if (cVar1 == '\0') {
    FUN_142afa690(0x10,0,0x10d,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_cert.cc"
                  ,0x3b2);
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_142b782f0(auStack_20);
    uVar4 = FUN_142b782d0(auStack_20);
    uVar3 = FUN_142b06960(uVar4,uVar3,0);
    FUN_142af3b00(param_1 + 0x60,uVar3);
    uVar2 = FUN_142994ac0(param_1 + 0x60,0);
  }
  return uVar2;
}


/* address=142b05670 name=FUN_142b05670 */

undefined8 FUN_142b05670(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142b0e970(0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142992bb0(0x18,lVar1);
    uVar2 = FUN_142b03fa0(uVar2);
  }
  return uVar2;
}


/* address=142b056c0 name=FUN_142b056c0 */

undefined8 FUN_142b056c0(undefined8 param_1,uint param_2)

{
  FUN_142b03bb0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_142cacf70(param_1,0x18);
  }
  return param_1;
}


/* address=142b05700 name=FUN_142b05700 */

void FUN_142b05700(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142992cb0(param_1);
    FUN_142b05830(uVar1,*param_1);
  }
  return;
}


/* address=142b05740 name=FUN_142b05740 */

void FUN_142b05740(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *ap_StackX_10 [3];
  
  ap_StackX_10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,ap_StackX_10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_142992cb0(param_1);
    FUN_142b05830(uVar2,p_Var1);
  }
  return;
}


/* address=142b05790 name=FUN_142b05790 */

undefined8
FUN_142b05790(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_142b05740(param_1,p_Var1);
  uVar2 = FUN_142992cb0(param_2);
  FUN_142992cb0(uVar2);
  FUN_142992cb0(param_1);
  return param_1;
}


/* address=142b057f0 name=FUN_142b057f0 */

undefined8 FUN_142b057f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_18 [24];
  
  uVar1 = FUN_142b05670();
  uVar1 = FUN_142992e20(auStack_18,uVar1);
  FUN_142992e50(param_1,uVar1);
  FUN_142b05700(auStack_18);
  return param_1;
}


/* address=142b05830 name=FUN_142b05830 */

void FUN_142b05830(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05850(param_2);
  return;
}


/* address=142b05850 name=FUN_142b05850 */

void FUN_142b05850(undefined8 param_1)

{
  FUN_142b05870(param_1);
  return;
}


/* address=142b05870 name=FUN_142b05870 */

void FUN_142b05870(longlong param_1)

{
  if (param_1 != 0) {
    FUN_142b056c0(param_1,0);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142b058a0 name=FUN_142b058a0 */

longlong FUN_142b058a0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142b0e970(0x28);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_142b06770(lVar1,0,0x28);
    uVar2 = FUN_142b0e970(DAT_143184720 << 3);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    if (*(longlong *)(lVar1 + 8) == 0) {
      FUN_142b0eaa0(lVar1);
      lVar1 = 0;
    }
    else {
      FUN_142b06770(*(undefined8 *)(lVar1 + 8),0,DAT_143184720 << 3);
      *(undefined8 *)(lVar1 + 0x20) = param_1;
      *(longlong *)(lVar1 + 0x18) = DAT_143184720;
    }
  }
  return lVar1;
}


/* address=142b05960 name=FUN_142b05960 */

void FUN_142b05960(void)

{
  FUN_142b058a0(0);
  return;
}


/* address=142b05980 name=FUN_142b05980 */

undefined8 FUN_142b05980(undefined8 *param_1)

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


/* address=142b059a0 name=FUN_142b059a0 */

void FUN_142b059a0(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    FUN_142b06770(param_1[1],0,*param_1 << 3);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}


/* address=142b05a00 name=FUN_142b05a00 */

undefined8 FUN_142b05a00(ulonglong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (*param_1 <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1[1] + param_2 * 8);
  }
  return uVar1;
}


/* address=142b05a40 name=FUN_142b05a40 */

undefined8 FUN_142b05a40(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  if ((param_1 == (ulonglong *)0x0) || (*param_1 <= param_2)) {
    param_3 = 0;
  }
  else {
    *(undefined8 *)(param_1[1] + param_2 * 8) = param_3;
  }
  return param_3;
}


/* address=142b05a90 name=FUN_142b05a90 */

void FUN_142b05a90(longlong param_1)

{
  if (param_1 != 0) {
    FUN_142b0eaa0(*(undefined8 *)(param_1 + 8));
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142b05ad0 name=FUN_142b05ad0 */

void FUN_142b05ad0(ulonglong *param_1,code *param_2,undefined8 param_3)

{
  ulonglong uStack_18;
  
  if (param_1 != (ulonglong *)0x0) {
    for (uStack_18 = 0; uStack_18 < *param_1; uStack_18 = uStack_18 + 1) {
      if (*(longlong *)(param_1[1] + uStack_18 * 8) != 0) {
        (*param_2)(param_3,*(undefined8 *)(param_1[1] + uStack_18 * 8));
      }
    }
    FUN_142b05a90(param_1);
  }
  return;
}


/* address=142b05b60 name=FUN_142b05b60 */

ulonglong FUN_142b05b60(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  if (param_1 == (ulonglong *)0x0) {
    return 0;
  }
  if (param_1[3] <= *param_1 + 1) {
    uStack_28 = param_1[3] << 1;
    uStack_20 = param_1[3] << 4;
    if ((uStack_28 < param_1[3]) || (uStack_20 / 8 != uStack_28)) {
      uStack_28 = param_1[3] + 1;
      uStack_20 = uStack_28 * 8;
    }
    if ((uStack_28 < param_1[3]) || (uStack_20 / 8 != uStack_28)) {
      return 0;
    }
    uVar1 = FUN_142b0eb50(param_1[1],uStack_20);
    if (uVar1 == 0) {
      return 0;
    }
    param_1[1] = uVar1;
    param_1[3] = uStack_28;
  }
  if (param_3 < *param_1) {
    FUN_142b06720(param_1[1] + 8 + param_3 * 8,param_1[1] + param_3 * 8,(*param_1 - param_3) * 8);
    *(undefined8 *)(param_1[1] + param_3 * 8) = param_2;
  }
  else {
    *(undefined8 *)(param_1[1] + *param_1 * 8) = param_2;
  }
  *param_1 = *param_1 + 1;
  *(undefined4 *)(param_1 + 2) = 0;
  return *param_1;
}


/* address=142b05d40 name=FUN_142b05d40 */

undefined8 FUN_142b05d40(ulonglong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (ulonglong *)0x0) || (*param_1 <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1[1] + param_2 * 8);
    if (param_2 != *param_1 - 1) {
      FUN_142b06720(param_1[1] + param_2 * 8,param_1[1] + 8 + param_2 * 8,
                    (*param_1 - param_2) * 8 + -8);
    }
    *param_1 = *param_1 - 1;
  }
  return uVar1;
}


/* address=142b05e10 name=FUN_142b05e10 */

undefined8 FUN_142b05e10(ulonglong *param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uStack_18;
  
  if (param_1 != (ulonglong *)0x0) {
    for (uStack_18 = 0; uStack_18 < *param_1; uStack_18 = uStack_18 + 1) {
      if (*(longlong *)(param_1[1] + uStack_18 * 8) == param_2) {
        uVar1 = FUN_142b05d40(param_1,uStack_18);
        return uVar1;
      }
    }
  }
  return 0;
}


/* address=142b05e90 name=FUN_142b05e90 */

void FUN_142b05e90(ulonglong *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  if (param_1 != (ulonglong *)0x0) {
    uStack_10 = 0;
    for (uStack_18 = 0; uStack_18 < *param_1; uStack_18 = uStack_18 + 1) {
      iVar1 = (*param_2)(param_3,*(undefined8 *)(param_1[1] + uStack_18 * 8),param_4);
      if (iVar1 == 0) {
        *(undefined8 *)(param_1[1] + uStack_10 * 8) = *(undefined8 *)(param_1[1] + uStack_18 * 8);
        uStack_10 = uStack_10 + 1;
      }
    }
    *param_1 = uStack_10;
  }
  return;
}


/* address=142b05f60 name=FUN_142b05f60 */

undefined8 FUN_142b05f60(ulonglong *param_1,ulonglong *param_2,longlong param_3,code *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lStackX_18;
  code *pcStackX_20;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  undefined8 uStack_18;
  undefined8 auStack_10 [2];
  
  if (param_1 != (ulonglong *)0x0) {
    if (param_1[4] == 0) {
      for (uStack_28 = 0; uStack_28 < *param_1; uStack_28 = uStack_28 + 1) {
        if (*(longlong *)(param_1[1] + uStack_28 * 8) == param_3) {
          if (param_2 != (ulonglong *)0x0) {
            *param_2 = uStack_28;
          }
          return 1;
        }
      }
    }
    else if (param_3 != 0) {
      lStackX_18 = param_3;
      pcStackX_20 = param_4;
      iVar1 = FUN_142b064a0(param_1);
      if (iVar1 == 0) {
        for (uStack_20 = 0; uStack_20 < *param_1; uStack_20 = uStack_20 + 1) {
          uStack_18 = *(undefined8 *)(param_1[1] + uStack_20 * 8);
          iVar1 = (*pcStackX_20)(param_1[4],&lStackX_18,&uStack_18);
          if (iVar1 == 0) {
            if (param_2 != (ulonglong *)0x0) {
              *param_2 = uStack_20;
            }
            return 1;
          }
        }
      }
      else {
        uStack_30 = 0;
        uVar2 = *param_1;
        while (uStack_38 = uVar2, uStack_30 < uStack_38) {
          uVar2 = uStack_30 + ((uStack_38 - uStack_30) - 1) / 2;
          if ((uVar2 < uStack_30) || (uStack_38 <= uVar2)) {
            FID_conflict__assert((wchar_t *)s_l_143cb4ce8,(wchar_t *)s_D_143cb4c20,0x128);
          }
          auStack_10[0] = *(undefined8 *)(param_1[1] + uVar2 * 8);
          iVar1 = (*pcStackX_20)(param_1[4],&lStackX_18,auStack_10);
          if (iVar1 < 1) {
            if (-1 < iVar1) {
              if (uStack_38 - uStack_30 == 1) {
                if (param_2 != (ulonglong *)0x0) {
                  *param_2 = uVar2;
                }
                return 1;
              }
              if (uStack_38 <= uVar2 + 1) {
                FID_conflict__assert((wchar_t *)s_m_143cb4de8,(wchar_t *)s_D_143cb4d20,0x13a);
              }
              uVar2 = uVar2 + 1;
            }
          }
          else {
            uStack_30 = uVar2 + 1;
            uVar2 = uStack_38;
          }
        }
        if (uStack_30 != uStack_38) {
          FID_conflict__assert((wchar_t *)s_l_143cb4ed8,(wchar_t *)s_D_143cb4e10,0x13f);
        }
      }
    }
  }
  return 0;
}


/* address=142b06240 name=FUN_142b06240 */

undefined8 FUN_142b06240(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142b05d40(param_1,0);
  }
  return uVar1;
}


/* address=142b06280 name=FUN_142b06280 */

void FUN_142b06280(undefined8 *param_1,undefined8 param_2)

{
  FUN_142b05b60(param_1,param_2,*param_1);
  return;
}


/* address=142b062b0 name=FUN_142b062b0 */

undefined8 FUN_142b062b0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142b05d40(param_1,*param_1 + -1);
  }
  return uVar1;
}


/* address=142b06300 name=FUN_142b06300 */

longlong * FUN_142b06300(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)FUN_142b0e970(0x28);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      FUN_142b06770(plVar1,0,0x28);
      lVar2 = FUN_142b0e970(param_1[3] << 3);
      plVar1[1] = lVar2;
      if (plVar1[1] == 0) {
        FUN_142b05a90(plVar1);
        plVar1 = (longlong *)0x0;
      }
      else {
        *plVar1 = *param_1;
        FUN_142b066d0(plVar1[1],param_1[1],*param_1 << 3);
        *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_1 + 2);
        plVar1[3] = param_1[3];
        plVar1[4] = param_1[4];
      }
    }
  }
  return plVar1;
}


/* address=142b06400 name=FUN_142b06400 */

void FUN_142b06400(ulonglong *param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  if (((param_1 != (ulonglong *)0x0) && (param_1[4] != 0)) && (*(int *)(param_1 + 2) == 0)) {
    if (1 < *param_1) {
      uStack_10 = param_1[4];
      uStack_18 = param_2;
      FUN_142ca8240(param_1[1],*param_1,8,&LAB_142b067e0,&uStack_18);
    }
    *(undefined4 *)(param_1 + 2) = 1;
  }
  return;
}


/* address=142b064a0 name=FUN_142b064a0 */

undefined4 FUN_142b064a0(ulonglong *param_1)

{
  undefined4 uStack_18;
  
  if (param_1 == (ulonglong *)0x0) {
    uStack_18 = 1;
  }
  else if ((*(int *)(param_1 + 2) == 0) && ((param_1[4] == 0 || (1 < *param_1)))) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = 1;
  }
  return uStack_18;
}


/* address=142b06500 name=FUN_142b06500 */

undefined8 FUN_142b06500(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) != param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  return uVar1;
}


/* address=142b06560 name=FUN_142b06560 */

ulonglong *
FUN_142b06560(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  puVar1 = (ulonglong *)FUN_142b06300(param_1);
  if (puVar1 == (ulonglong *)0x0) {
    puVar1 = (ulonglong *)0x0;
  }
  else {
    for (uStack_20 = 0; uStack_20 < *puVar1; uStack_20 = uStack_20 + 1) {
      if (*(longlong *)(puVar1[1] + uStack_20 * 8) != 0) {
        uVar2 = (*param_2)(param_3,*(undefined8 *)(puVar1[1] + uStack_20 * 8));
        *(undefined8 *)(puVar1[1] + uStack_20 * 8) = uVar2;
        if (*(longlong *)(puVar1[1] + uStack_20 * 8) == 0) {
          for (uStack_18 = 0; uStack_18 < uStack_20; uStack_18 = uStack_18 + 1) {
            if (*(longlong *)(puVar1[1] + uStack_18 * 8) != 0) {
              (*param_4)(param_5,*(undefined8 *)(puVar1[1] + uStack_18 * 8));
            }
          }
          FUN_142b05a90(puVar1);
          return (ulonglong *)0x0;
        }
      }
    }
  }
  return puVar1;
}


/* address=142b066d0 name=FUN_142b066d0 */

undefined8 FUN_142b066d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b06720 name=FUN_142b06720 */

undefined8 FUN_142b06720(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b06770 name=FUN_142b06770 */

undefined8 FUN_142b06770(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b06960 name=FUN_142b06960 */

void FUN_142b06960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b07020(param_1,param_2,0,param_3);
  return;
}


/* address=142b06a50 name=FUN_142b06a50 */

void FUN_142b06a50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_142b782f0(param_1);
  uVar2 = FUN_142b782d0(param_1);
  FUN_142b06960(uVar2,uVar1,param_2);
  return;
}


/* address=142b06ae0 name=FUN_142b06ae0 */

void FUN_142b06ae0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      iVar2 = FUN_142b819a0(param_1 + 3);
      if (iVar2 != 0) {
        FUN_142b06fe0(param_1);
      }
    }
    else {
      FUN_142b81aa0(puVar1 + 1);
      iVar2 = FUN_142b819a0(param_1 + 3);
      if (iVar2 == 0) {
        FUN_142b81ae0(*param_1 + 8);
      }
      else {
        plVar3 = (longlong *)FUN_142b06e00(*puVar1,param_1);
        if ((plVar3 == param_1) &&
           (plVar3 = (longlong *)FUN_142b06eb0(*puVar1,param_1), plVar3 != param_1)) {
          FID_conflict__assert((wchar_t *)s_f_143cb52a0,(wchar_t *)s_D_143cb51e0,0xeb);
        }
        FUN_142b81ae0(*param_1 + 8);
        FUN_142b06fe0(param_1);
      }
    }
  }
  return;
}


/* address=142b06c00 name=FUN_142b06c00 */

undefined8 FUN_142b06c00(longlong param_1)

{
  FUN_142b81950(param_1 + 0x18);
  return 1;
}


/* address=142b06c30 name=FUN_142b06c30 */

undefined8 FUN_142b06c30(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=142b06c50 name=FUN_142b06c50 */

undefined8 FUN_142b06c50(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


/* address=142b06c70 name=FUN_142b06c70 */

void FUN_142b06c70(longlong param_1,undefined8 param_2)

{
  FUN_142b78260(param_2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  return;
}


/* address=142b06cb0 name=FUN_142b06cb0 */

int FUN_142b06cb0(void *param_1,void *param_2,size_t param_3)

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


/* address=142b06cf0 name=FUN_142b06cf0 */

undefined8 FUN_142b06cf0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b06d90 name=FUN_142b06d90 */

void FUN_142b06d90(undefined8 param_1,undefined8 param_2)

{
  FUN_142b82630(param_1,param_2);
  return;
}


/* address=142b06dc0 name=FUN_142b06dc0 */

void FUN_142b06dc0(undefined8 param_1)

{
  FUN_142b82710(param_1);
  return;
}


/* address=142b06de0 name=FUN_142b06de0 */

void FUN_142b06de0(undefined8 param_1)

{
  FUN_142b827c0(param_1);
  return;
}


/* address=142b06e00 name=FUN_142b06e00 */

void FUN_142b06e00(undefined8 param_1,undefined8 param_2)

{
  FUN_142b827e0(param_1,param_2,&LAB_142b06d60,&LAB_142b06d30);
  return;
}


/* address=142b06e40 name=FUN_142b06e40 */

undefined4 FUN_142b06e40(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 auStack_10 [2];
  
  auStack_10[0] = 0;
  uVar1 = FUN_142b828d0(param_1,auStack_10,param_3,&LAB_142b06d60,&LAB_142b06d30);
  *param_2 = auStack_10[0];
  return uVar1;
}


/* address=142b06eb0 name=FUN_142b06eb0 */

void FUN_142b06eb0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b829d0(param_1,param_2,&LAB_142b06d60,&LAB_142b06d30);
  return;
}


/* address=142b06fe0 name=FUN_142b06fe0 */

void FUN_142b06fe0(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_142b0eaa0(*(undefined8 *)(param_1 + 8));
  }
  FUN_142b0eaa0(param_1);
  return;
}


/* address=142b07020 name=FUN_142b07020 */

undefined8 * FUN_142b07020(undefined8 param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iStack_58;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  longlong lStack_20;
  
  if (param_4 != (undefined8 *)0x0) {
    puStack_30 = param_4;
    uStack_28 = param_1;
    lStack_20 = param_2;
    FUN_142b81a80(param_4 + 1);
    puStack_48 = (undefined8 *)FUN_142b06e00(*param_4,&puStack_30);
    if (((param_3 != 0) && (puStack_48 != (undefined8 *)0x0)) &&
       (*(int *)((longlong)puStack_48 + 0x1c) == 0)) {
      puStack_48 = (undefined8 *)0x0;
    }
    if (puStack_48 != (undefined8 *)0x0) {
      FUN_142b81950(puStack_48 + 3);
    }
    FUN_142b81ac0(param_4 + 1);
    if (puStack_48 != (undefined8 *)0x0) {
      return puStack_48;
    }
  }
  puVar1 = (undefined8 *)FUN_142b0e970(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_142b06cf0(puVar1,0,0x20);
    if (param_3 == 0) {
      uVar2 = FUN_142b0f440(param_1,param_2);
      puVar1[1] = uVar2;
      if ((param_2 != 0) && (puVar1[1] == 0)) {
        FUN_142b0eaa0(puVar1);
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
      FUN_142b81aa0(param_4 + 1);
      puStack_40 = (undefined8 *)FUN_142b06e00(*param_4,puVar1);
      if (((param_3 != 0) && (puStack_40 != (undefined8 *)0x0)) &&
         (*(int *)((longlong)puStack_40 + 0x1c) == 0)) {
        puStack_40 = (undefined8 *)0x0;
      }
      iStack_58 = 0;
      if (puStack_40 == (undefined8 *)0x0) {
        uStack_38 = 0;
        iStack_58 = FUN_142b06e40(*param_4,&uStack_38,puVar1);
      }
      else {
        FUN_142b81950(puStack_40 + 3);
      }
      FUN_142b81ae0(param_4 + 1);
      if (iStack_58 == 0) {
        FUN_142b06fe0(puVar1);
        puVar1 = puStack_40;
      }
    }
  }
  return puVar1;
}


/* address=142b072c0 name=FUN_142b072c0 */

longlong FUN_142b072c0(short param_1)

{
  undefined **ppuStack_28;
  
  ppuStack_28 = (undefined **)&DAT_143184990;
  while( true ) {
    if (ppuStack_28 == &PTR_DAT_143184c60) {
      return 0;
    }
    if (*(short *)((longlong)ppuStack_28 + 4) == param_1) break;
    ppuStack_28 = ppuStack_28 + 9;
  }
  return (longlong)ppuStack_28 + 6;
}


/* address=142b073f0 name=FUN_142b073f0 */

undefined8 FUN_142b073f0(undefined8 param_1,ushort param_2)

{
  undefined8 uVar1;
  ushort auStackX_10 [12];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_68 [2];
  undefined auStack_60 [8];
  undefined auStack_58 [8];
  undefined auStack_50 [8];
  undefined auStack_48 [8];
  undefined auStack_40 [8];
  undefined auStack_38 [8];
  undefined auStack_30 [8];
  undefined auStack_28 [8];
  undefined auStack_20 [8];
  undefined auStack_18 [24];
  
  auStackX_10[0] = param_2;
  if (param_2 < 0x11ed) {
    if (param_2 == 0x11ec) {
      uVar1 = FUN_142b0b5d0();
      uVar1 = FUN_142992e20(auStack_18,uVar1);
      FUN_142992e50(param_1,uVar1);
      FUN_142b0b180(auStack_18);
      return param_1;
    }
    if (param_2 == 0x15) {
      uStack_84 = 0x15;
      uStack_80 = 0x2c9;
      uVar1 = FUN_142b0b360(auStack_60,&uStack_80,&uStack_84);
      FUN_142b0b3d0(param_1,uVar1);
      FUN_142b0adc0(auStack_60);
      return param_1;
    }
    if (param_2 == 0x17) {
      uStack_7c = 0x17;
      uStack_78 = 0x19f;
      uVar1 = FUN_142b0b360(auStack_58,&uStack_78,&uStack_7c);
      FUN_142b0b3d0(param_1,uVar1);
      FUN_142b0adc0(auStack_58);
      return param_1;
    }
    if (param_2 == 0x18) {
      uStack_74 = 0x18;
      uStack_70 = 0x2cb;
      uVar1 = FUN_142b0b360(auStack_50,&uStack_70,&uStack_74);
      FUN_142b0b3d0(param_1,uVar1);
      FUN_142b0adc0(auStack_50);
      return param_1;
    }
    if (param_2 == 0x19) {
      uStack_6c = 0x19;
      auStack_68[0] = 0x2cc;
      uVar1 = FUN_142b0b360(auStack_48,auStack_68,&uStack_6c);
      FUN_142b0b3d0(param_1,uVar1);
      FUN_142b0adc0(auStack_48);
      return param_1;
    }
    if (param_2 == 0x1d) {
      uVar1 = FUN_142b0b430(auStack_40);
      FUN_142b0b470(param_1,uVar1);
      FUN_142b0ae80(auStack_40);
      return param_1;
    }
  }
  else {
    if (param_2 == 0x6399) {
      uVar1 = FUN_142b0b520(auStackX_10);
      uVar1 = FUN_142992e20(auStack_30,uVar1);
      FUN_142992e50(param_1,uVar1);
      FUN_142b0b180(auStack_30);
      return param_1;
    }
    if (param_2 == 0xfe30) {
      uVar1 = FUN_142b0b4d0();
      uVar1 = FUN_142992e20(auStack_38,uVar1);
      FUN_142992e50(param_1,uVar1);
      FUN_142b0b180(auStack_38);
      return param_1;
    }
    if (param_2 == 0xfe31) {
      uVar1 = FUN_142b0b520(auStackX_10);
      uVar1 = FUN_142992e20(auStack_28,uVar1);
      FUN_142992e50(param_1,uVar1);
      FUN_142b0b180(auStack_28);
      return param_1;
    }
    if (param_2 == 0xfe32) {
      uVar1 = FUN_142b0b580();
      uVar1 = FUN_142992e20(auStack_20,uVar1);
      FUN_142992e50(param_1,uVar1);
      FUN_142b0b180(auStack_20);
      return param_1;
    }
  }
  FUN_142aeec30(param_1,0);
  return param_1;
}


/* address=142b07790 name=FUN_142b07790 */

undefined8 FUN_142b07790(undefined2 *param_1,int param_2)

{
  undefined **ppuStack_28;
  
  ppuStack_28 = (undefined **)&DAT_143184990;
  while( true ) {
    if (ppuStack_28 == &PTR_DAT_143184c60) {
      return 0;
    }
    if (*(int *)ppuStack_28 == param_2) break;
    ppuStack_28 = ppuStack_28 + 9;
  }
  *param_1 = *(undefined2 *)((longlong)ppuStack_28 + 4);
  return 1;
}


/* address=142b07820 name=FUN_142b07820 */

undefined8 FUN_142b07820(undefined2 *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  undefined **ppuStack_20;
  
  ppuStack_20 = (undefined **)&DAT_143184990;
  while( true ) {
    if (ppuStack_20 == &PTR_DAT_143184c60) {
      return 0;
    }
    sVar2 = strlen((char *)((longlong)ppuStack_20 + 6));
    if ((param_3 == sVar2) &&
       (iVar1 = strncmp((char *)((longlong)ppuStack_20 + 6),param_2,param_3), iVar1 == 0)) break;
    sVar2 = strlen((char *)((longlong)ppuStack_20 + 0x26));
    if (((sVar2 != 0) && (sVar2 = strlen((char *)((longlong)ppuStack_20 + 0x26)), param_3 == sVar2))
       && (iVar1 = strncmp((char *)((longlong)ppuStack_20 + 0x26),param_2,param_3), iVar1 == 0)) {
      *param_1 = *(undefined2 *)((longlong)ppuStack_20 + 4);
      return 1;
    }
    ppuStack_20 = ppuStack_20 + 9;
  }
  *param_1 = *(undefined2 *)((longlong)ppuStack_20 + 4);
  return 1;
}


/* address=142b07950 name=FUN_142b07950 */

undefined8 * FUN_142b07950(undefined8 *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  FUN_142b0b100(param_1);
  *param_1 = &PTR_LAB_143184ca8;
  FUN_142994b40(param_1 + 1);
  uVar1 = FUN_142b4afc0(param_2);
  param_1[2] = uVar1;
  *(undefined2 *)(param_1 + 3) = param_3;
  return param_1;
}


/* address=142b081c0 name=FUN_142b081c0 */

void FUN_142b081c0(longlong param_1)

{
  FUN_142b0b1c0(param_1 + 8);
  FUN_142b0b060(param_1);
  return;
}


/* address=142b08250 name=FUN_142b08250 */

undefined8 * FUN_142b08250(undefined8 *param_1)

{
  FUN_142b0b100(param_1);
  *param_1 = &PTR_LAB_143184ce8;
  return param_1;
}


/* address=142b085a0 name=FUN_142b085a0 */

void FUN_142b085a0(undefined8 param_1)

{
  FUN_142b0b060(param_1);
  return;
}


/* address=142b08620 name=FUN_142b08620 */

undefined8 * FUN_142b08620(undefined8 *param_1)

{
  FUN_142b0b100(param_1);
  *param_1 = &PTR_LAB_143184d28;
  FUN_142994b40(param_1 + 1);
  return param_1;
}


/* address=142b099c0 name=FUN_142b099c0 */

void FUN_142b099c0(longlong param_1)

{
  FUN_142b0b1c0(param_1 + 8);
  FUN_142b0b060(param_1);
  return;
}


/* address=142b09a50 name=FUN_142b09a50 */

undefined8 * FUN_142b09a50(undefined8 *param_1,short param_2)

{
  FUN_142b0b100(param_1);
  *param_1 = &PTR_LAB_143184d68;
  *(short *)(param_1 + 0x131) = param_2;
  if ((param_2 != 0x6399) && (param_2 != -0x1cf)) {
    FID_conflict__assert((wchar_t *)"g",(wchar_t *)"D",0x1a4);
  }
  return param_1;
}


/* address=142b0a070 name=FUN_142b0a070 */

void FUN_142b0a070(undefined8 param_1)

{
  FUN_142b0b060(param_1);
  return;
}


/* address=142b0a0f0 name=FUN_142b0a0f0 */

undefined8 * FUN_142b0a0f0(undefined8 *param_1)

{
  FUN_142b0b100(param_1);
  *param_1 = &PTR_LAB_143184da8;
  return param_1;
}


/* address=142b0a6e0 name=FUN_142b0a6e0 */

void FUN_142b0a6e0(undefined8 param_1)

{
  FUN_142b0b060(param_1);
  return;
}


/* address=142b0a760 name=FUN_142b0a760 */

undefined8 * FUN_142b0a760(undefined8 *param_1)

{
  FUN_142b0b100(param_1);
  *param_1 = &PTR_LAB_143184de8;
  return param_1;
}


/* address=142b0ad40 name=FUN_142b0ad40 */

void FUN_142b0ad40(undefined8 param_1)

{
  FUN_142b0b060(param_1);
  return;
}


/* address=142b0adc0 name=FUN_142b0adc0 */

void FUN_142b0adc0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142b0ae60(param_1);
    FUN_142b0b700(uVar1,*param_1);
  }
  return;
}


/* address=142b0ae00 name=FUN_142b0ae00 */

void FUN_142b0ae00(undefined8 param_1)

{
  FUN_142b0ae60(param_1);
  return;
}


/* address=142b0ae30 name=std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release */

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
  _Facet_base *ap_Stack_18 [3];
  
  ap_Stack_18[0] = (_Facet_base *)0x0;
  p_Var1 = exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     ((_Facet_base **)this,ap_Stack_18);
  return p_Var1;
}


/* address=142b0ae60 name=FUN_142b0ae60 */

undefined8 FUN_142b0ae60(undefined8 param_1)

{
  return param_1;
}


/* address=142b0ae80 name=FUN_142b0ae80 */

void FUN_142b0ae80(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142b0af20(param_1);
    FUN_142b0b6e0(uVar1,*param_1);
  }
  return;
}


/* address=142b0aec0 name=FUN_142b0aec0 */

void FUN_142b0aec0(undefined8 param_1)

{
  FUN_142b0af20(param_1);
  return;
}


/* address=142b0aef0 name=std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release */

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
  _Facet_base *ap_Stack_18 [3];
  
  ap_Stack_18[0] = (_Facet_base *)0x0;
  p_Var1 = exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     ((_Facet_base **)this,ap_Stack_18);
  return p_Var1;
}


/* address=142b0af20 name=FUN_142b0af20 */

undefined8 FUN_142b0af20(undefined8 param_1)

{
  return param_1;
}


/* address=142b0af40 name=FUN_142b0af40 */

void FUN_142b0af40(facet *param_1)

{
  std::_DebugHeapDelete<class_std::locale::facet>(param_1);
  return;
}


/* address=142b0af60 name=FUN_142b0af60 */

void FUN_142b0af60(facet *param_1)

{
  std::_DebugHeapDelete<class_std::locale::facet>(param_1);
  return;
}


/* address=142b0af80 name=FUN_142b0af80 */

void FUN_142b0af80(undefined8 param_1)

{
  FUN_142b1d210(param_1);
  return;
}


/* address=142b0afa0 name=FUN_142b0afa0 */

void FUN_142b0afa0(undefined8 param_1)

{
  FUN_142b1db50(param_1);
  return;
}


/* address=142b0afc0 name=FUN_142b0afc0 */

undefined8 * FUN_142b0afc0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_142b1dbe0(*param_1);
  return param_1;
}


/* address=142b0b000 name=FUN_142b0b000 */

void FUN_142b0b000(undefined8 *param_1)

{
  FUN_142b1dd90(*param_1);
  return;
}


/* address=142b0b020 name=FUN_142b0b020 */

void FUN_142b0b020(undefined8 param_1)

{
  FUN_142b4b6b0(param_1);
  return;
}


/* address=142b0b040 name=FUN_142b0b040 */

void FUN_142b0b040(undefined8 param_1)

{
  FUN_142b4b160(param_1);
  return;
}


/* address=142b0b060 name=FUN_142b0b060 */

void FUN_142b0b060(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_143184c68;
  return;
}


/* address=142b0b080 name=FUN_142b0b080 */

void FUN_142b0b080(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=142b0b0f0 name=FUN_142b0b0f0 */

undefined FUN_142b0b0f0(void)

{
  return 0;
}


/* address=142b0b100 name=FUN_142b0b100 */

undefined8 * FUN_142b0b100(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_143184c68;
  return param_1;
}


/* address=142b0b180 name=FUN_142b0b180 */

void FUN_142b0b180(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142992cb0(param_1);
    FUN_142b0b7a0(uVar1,*param_1);
  }
  return;
}


/* address=142b0b1c0 name=FUN_142b0b1c0 */

void FUN_142b0b1c0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142992cb0(param_1);
    FUN_142b0b780(uVar1,*param_1);
  }
  return;
}


/* address=142b0b200 name=FUN_142b0b200 */

void FUN_142b0b200(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *ap_StackX_10 [3];
  
  ap_StackX_10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,ap_StackX_10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_142992cb0(param_1);
    FUN_142b0b780(uVar2,p_Var1);
  }
  return;
}


/* address=142b0b250 name=FUN_142b0b250 */

void FUN_142b0b250(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142992cb0(param_1);
    FUN_142b0b760(uVar1,*param_1);
  }
  return;
}


/* address=142b0b290 name=FUN_142b0b290 */

void FUN_142b0b290(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142992cb0(param_1);
    FUN_142b0b740(uVar1,*param_1);
  }
  return;
}


/* address=142b0b2d0 name=FUN_142b0b2d0 */

void FUN_142b0b2d0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142992cb0(param_1);
    FUN_142b0b720(uVar1,*param_1);
  }
  return;
}


/* address=142b0b310 name=FUN_142b0b310 */

void FUN_142b0b310(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *ap_StackX_10 [3];
  
  ap_StackX_10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,ap_StackX_10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_142992cb0(param_1);
    FUN_142b0b720(uVar2,p_Var1);
  }
  return;
}


/* address=142b0b360 name=FUN_142b0b360 */

undefined8 FUN_142b0b360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auStack_10 [16];
  
  uVar1 = FUN_142992cb0(param_3);
  uVar2 = FUN_142992cb0(param_2);
  uVar1 = FUN_142b0b620(uVar2,uVar1);
  uVar1 = FUN_142992e20(auStack_10,uVar1);
  FUN_142b0b3d0(param_1,uVar1);
  FUN_142b0adc0(auStack_10);
  return param_1;
}


/* address=142b0b3d0 name=FUN_142b0b3d0 */

undefined8
FUN_142b0b3d0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  undefined8 uVar1;
  undefined uStack_18;
  _Facet_base *ap_Stack_10 [2];
  
  ap_Stack_10[0] =
       std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
       release(param_2);
  uVar1 = FUN_142b0ae00(param_2);
  uVar1 = FUN_142992cb0(uVar1);
  FUN_142995150(param_1,uStack_18,uVar1,ap_Stack_10);
  return param_1;
}


/* address=142b0b430 name=FUN_142b0b430 */

undefined8 FUN_142b0b430(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_18 [24];
  
  uVar1 = FUN_142b0b690();
  uVar1 = FUN_142992e20(auStack_18,uVar1);
  FUN_142b0b470(param_1,uVar1);
  FUN_142b0ae80(auStack_18);
  return param_1;
}


/* address=142b0b470 name=FUN_142b0b470 */

undefined8
FUN_142b0b470(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  undefined8 uVar1;
  undefined uStack_18;
  _Facet_base *ap_Stack_10 [2];
  
  ap_Stack_10[0] =
       std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
       release(param_2);
  uVar1 = FUN_142b0aec0(param_2);
  uVar1 = FUN_142992cb0(uVar1);
  FUN_142995150(param_1,uStack_18,uVar1,ap_Stack_10);
  return param_1;
}


/* address=142b0b4d0 name=FUN_142b0b4d0 */

undefined8 FUN_142b0b4d0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142b0e970(0x688);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142992bb0(0x688,lVar1);
    uVar2 = FUN_142b0a760(uVar2);
  }
  return uVar2;
}


/* address=142b0b520 name=FUN_142b0b520 */

undefined8 FUN_142b0b520(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  lVar1 = FUN_142b0e970(0x990);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142992bb0(0x990,lVar1);
    puVar3 = (undefined2 *)FUN_142992cb0(param_1);
    uVar2 = FUN_142b09a50(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=142b0b580 name=FUN_142b0b580 */

undefined8 FUN_142b0b580(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142b0e970(0x970);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142992bb0(0x970,lVar1);
    uVar2 = FUN_142b08620(uVar2);
  }
  return uVar2;
}


/* address=142b0b5d0 name=FUN_142b0b5d0 */

undefined8 FUN_142b0b5d0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142b0e970(0x988);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142992bb0(0x988,lVar1);
    uVar2 = FUN_142b0a0f0(uVar2);
  }
  return uVar2;
}


/* address=142b0b620 name=FUN_142b0b620 */

undefined8 FUN_142b0b620(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  
  lVar1 = FUN_142b0e970(0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142992bb0(0x20,lVar1);
    puVar3 = (undefined2 *)FUN_142992cb0(param_2);
    puVar4 = (undefined4 *)FUN_142992cb0(param_1);
    uVar2 = FUN_142b07950(uVar2,*puVar4,*puVar3);
  }
  return uVar2;
}


/* address=142b0b690 name=FUN_142b0b690 */

undefined8 FUN_142b0b690(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142b0e970(0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142992bb0(0x28,lVar1);
    uVar2 = FUN_142b08250(uVar2);
  }
  return uVar2;
}


/* address=142b0b6e0 name=FUN_142b0b6e0 */

void FUN_142b0b6e0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b0af40(param_2);
  return;
}


/* address=142b0b700 name=FUN_142b0b700 */

void FUN_142b0b700(undefined8 param_1,undefined8 param_2)

{
  FUN_142b0af60(param_2);
  return;
}


/* address=142b0b720 name=FUN_142b0b720 */

void FUN_142b0b720(undefined8 param_1,undefined8 param_2)

{
  FUN_142b0b040(param_2);
  return;
}


/* address=142b0b740 name=FUN_142b0b740 */

void FUN_142b0b740(undefined8 param_1,undefined8 param_2)

{
  FUN_142b0afa0(param_2);
  return;
}


/* address=142b0b760 name=FUN_142b0b760 */

void FUN_142b0b760(undefined8 param_1,undefined8 param_2)

{
  FUN_142b0b020(param_2);
  return;
}


/* address=142b0b780 name=FUN_142b0b780 */

void FUN_142b0b780(undefined8 param_1,undefined8 param_2)

{
  FUN_142b0af80(param_2);
  return;
}


/* address=142b0b7a0 name=FUN_142b0b7a0 */

void FUN_142b0b7a0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b0b7c0(param_2);
  return;
}


/* address=142b0b7c0 name=FUN_142b0b7c0 */

void FUN_142b0b7c0(facet *param_1)

{
  std::_DebugHeapDelete<class_std::locale::facet>(param_1);
  return;
}


/* address=142b0b7e0 name=std::_DebugHeapDelete<class_std::locale::facet> */

/* Library Function - Single Match
    void __cdecl std::_DebugHeapDelete<class std::locale::facet>(class std::locale::facet * __ptr64)
   
   Library: Visual Studio 2005 Debug */

void __cdecl std::_DebugHeapDelete<class_std::locale::facet>(facet *param_1)

{
  if (param_1 != (facet *)0x0) {
    (***(code ***)param_1)(param_1,0);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142b0b820 name=FUN_142b0b820 */

undefined FUN_142b0b820(longlong param_1,longlong param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_142afa690(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x1c1);
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_142992c50(param_1 + 0xe8);
    uVar1 = FUN_142b0d6f0(uVar2,param_2);
  }
  return uVar1;
}


/* address=142b0b890 name=FUN_142b0b890 */

undefined FUN_142b0b890(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_2 != 0) && (cVar1 = operator==<>(param_1 + 8,0), cVar1 == '\0')) {
    lVar3 = FUN_142992c50(param_1 + 8);
    uVar4 = FUN_142992c50(lVar3 + 0x20);
    uVar2 = FUN_142b0d6f0(uVar4,param_2);
    return uVar2;
  }
  FUN_142afa690(0x10,0,0x43,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                ,0x18c);
  return 0;
}


/* address=142b0b920 name=FUN_142b0b920 */

short * FUN_142b0b920(short param_1,int param_2)

{
  short *psStack_30;
  
  if (param_2 == 0) {
    if (param_1 == 0x403) {
      return (short *)"ecdsa_sha256";
    }
    if (param_1 == 0x503) {
      return (short *)"ecdsa_sha384";
    }
    if (param_1 == 0x603) {
      return (short *)"ecdsa_sha512";
    }
  }
  psStack_30 = &DAT_143185a80;
  while( true ) {
    if (psStack_30 == (short *)&DAT_143185bd2) {
      return (short *)0x0;
    }
    if (*psStack_30 == param_1) break;
    psStack_30 = psStack_30 + 0xd;
  }
  return psStack_30 + 1;
}


/* address=142b0bcb0 name=FUN_142b0bcb0 */

undefined FUN_142b0bcb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  puVar2 = (undefined *)FUN_142992fc0(auStack_28,param_2,param_3);
  puVar4 = auStack_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  lVar3 = FUN_142992c50(param_1 + 0xe8);
  uVar1 = FUN_142b0dc70(lVar3 + 0x38,auStack_38);
  return uVar1;
}


/* address=142b0bd20 name=FUN_142b0bd20 */

undefined FUN_142b0bd20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  cVar1 = FUN_142993030(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined *)FUN_142992fc0(auStack_28,param_2,param_3);
    puVar5 = auStack_38;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar4 = FUN_142992c50(param_1 + 8);
    lVar4 = FUN_142992c50(lVar4 + 0x20);
    uVar2 = FUN_142b0dc70(lVar4 + 0x38,auStack_38);
  }
  return uVar2;
}


/* address=142b0bdc0 name=FUN_142b0bdc0 */

undefined FUN_142b0bdc0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined auStack_20 [8];
  undefined8 uStack_18;
  
  if (param_2 == 0) {
    FUN_142afa690(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x1a6);
  }
  else {
    uVar4 = FUN_142b0fa80();
    FUN_142992e20(auStack_20,uVar4);
    cVar1 = FUN_142993030(auStack_20);
    if (cVar1 != '\0') {
      uVar4 = FUN_142992c50(auStack_20);
      iVar3 = FUN_142b0ff00(uVar4,param_2);
      if (iVar3 != 0) {
        uStack_18 = FUN_142992c50(auStack_20);
        uVar4 = FUN_142992c50(param_1 + 0xe8);
        uVar2 = FUN_142b0d6f0(uVar4,uStack_18);
        FUN_142992d40(auStack_20);
        return uVar2;
      }
    }
    FUN_142afa690(0x10,0,6,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x1ad);
    FUN_142992d40(auStack_20);
  }
  return 0;
}


/* address=142b0bed0 name=FUN_142b0bed0 */

undefined FUN_142b0bed0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined auStack_20 [8];
  undefined8 uStack_18;
  
  if ((param_2 != 0) && (cVar1 = operator==<>(param_1 + 8,0), cVar1 == '\0')) {
    uVar4 = FUN_142b0fa80();
    FUN_142992e20(auStack_20,uVar4);
    cVar1 = FUN_142993030(auStack_20);
    if (cVar1 != '\0') {
      uVar4 = FUN_142992c50(auStack_20);
      iVar3 = FUN_142b0ff00(uVar4,param_2);
      if (iVar3 != 0) {
        uStack_18 = FUN_142992c50(auStack_20);
        lVar5 = FUN_142992c50(param_1 + 8);
        uVar4 = FUN_142992c50(lVar5 + 0x20);
        uVar2 = FUN_142b0d6f0(uVar4,uStack_18);
        FUN_142992d40(auStack_20);
        return uVar2;
      }
    }
    FUN_142afa690(0x10,0,6,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x179);
    FUN_142992d40(auStack_20);
    return 0;
  }
  FUN_142afa690(0x10,0,0x43,
                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                ,0x172);
  return 0;
}


/* address=142b0c420 name=FUN_142b0c420 */

undefined FUN_142b0c420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  puVar2 = (undefined *)FUN_142992fc0(auStack_28,param_2,param_3);
  puVar4 = auStack_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_142b0dc70(param_1 + 0x228,auStack_38);
  return uVar1;
}


/* address=142b0c490 name=FUN_142b0c490 */

undefined FUN_142b0c490(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  cVar1 = FUN_142993030(param_1 + 8);
  if (cVar1 == '\0') {
    FUN_142afa690(0x10,0,0x42,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x3af);
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined *)FUN_142992fc0(auStack_28,param_2,param_3);
    puVar5 = auStack_38;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar4 = FUN_142992c50(param_1 + 8);
    uVar2 = FUN_142b0dc70(lVar4 + 0xc0,auStack_38);
  }
  return uVar2;
}


/* address=142b0c780 name=FUN_142b0c780 */

undefined4 FUN_142b0c780(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auStack_18 [24];
  
  FUN_142993420(auStack_18);
  cVar1 = FUN_142b0e040(auStack_18,param_2);
  if (cVar1 == '\0') {
    FUN_1429934a0(auStack_18);
  }
  else {
    uVar3 = FUN_142992f60(auStack_18);
    uVar4 = FUN_142992c50(auStack_18);
    iVar2 = FUN_142b0bcb0(param_1,uVar4,uVar3);
    if (iVar2 != 0) {
      uVar3 = FUN_142992f60(auStack_18);
      uVar4 = FUN_142992c50(auStack_18);
      iVar2 = FUN_142b0c420(param_1,uVar4,uVar3);
      if (iVar2 != 0) {
        FUN_1429934a0(auStack_18);
        return 1;
      }
    }
    FUN_1429934a0(auStack_18);
  }
  return 0;
}


/* address=142b0c9a0 name=FUN_142b0c9a0 */

undefined8 FUN_142b0c9a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b0c9f0 name=FUN_142b0c9f0 */

undefined8 FUN_142b0c9f0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_142992c50(*(longlong *)(param_1 + 8) + 0x20);
  cVar1 = FUN_142994ac0(uVar2,0);
  if ((cVar1 == '\0') &&
     (lVar3 = FUN_142992c50(*(longlong *)(param_1 + 8) + 0x20), *(longlong *)(lVar3 + 0x28) == 0)) {
    cVar1 = FUN_142b03ff0(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


/* address=142b0ca60 name=FUN_142b0ca60 */

int FUN_142b0ca60(undefined8 *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4,
                 short param_5,undefined *param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  ulonglong in_stack_fffffffffffffe48;
  undefined4 uVar11;
  undefined8 uVar10;
  int iStack_188;
  code **ppcStack_180;
  undefined auStack_170 [16];
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined auStack_108 [32];
  undefined auStack_e8 [16];
  undefined auStack_d8 [16];
  undefined auStack_c8 [16];
  undefined auStack_b8 [16];
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  undefined auStack_88 [48];
  undefined auStack_58 [16];
  undefined auStack_48 [16];
  undefined auStack_38 [16];
  undefined auStack_28 [24];
  
  uVar7 = *param_1;
  lVar3 = FUN_142992c50(param_1 + 0xc3);
  FUN_142993420(auStack_170);
  if (lVar3 != 0) {
    FUN_142994a40(auStack_88);
    uVar4 = FUN_142992cb0(auStack_88);
    iVar2 = FUN_142b7a520(uVar4,0x40);
    if (iVar2 == 0) {
LAB_142b0cb4e:
      FUN_142baa680(uVar7,2,0x50);
      iStack_160 = 2;
      FUN_142994a70(auStack_88);
      FUN_1429934a0(auStack_170);
      return iStack_160;
    }
    uStack_140 = FUN_142992c50(param_1 + 0xba);
    uVar4 = FUN_142992cb0(auStack_88);
    iVar2 = FUN_142b764b0(uVar4,uStack_140);
    if (iVar2 == 0) goto LAB_142b0cb4e;
    uVar4 = FUN_142992cb0(auStack_88);
    cVar1 = FUN_1429905a0(uVar4,auStack_170);
    if (cVar1 == '\0') goto LAB_142b0cb4e;
    FUN_142994a70(auStack_88);
  }
  if (((lVar3 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) == 0)) &&
     (param_5 == *(short *)(lVar3 + 0x48))) {
    puStack_138 = auStack_58;
    puVar5 = (undefined *)FUN_142994db0(puStack_138,lVar3 + 0x50);
    puVar9 = auStack_e8;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar5 = param_6;
    puVar9 = auStack_d8;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    cVar1 = FUN_142af3a00(auStack_d8,auStack_e8);
    if (cVar1 != '\0') {
      puStack_130 = auStack_48;
      puVar5 = (undefined *)FUN_142994db0(puStack_130,lVar3 + 0x60);
      puVar9 = auStack_c8;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar5 = (undefined *)FUN_142aff730(auStack_38,auStack_170);
      puVar9 = auStack_b8;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      cVar1 = FUN_142af3a00(auStack_b8,auStack_c8);
      if (((cVar1 != '\0') && (cVar1 = FUN_142992f70(lVar3 + 0x70), cVar1 == '\0')) &&
         (uVar6 = FUN_142992f60(lVar3 + 0x70), uVar6 <= param_4)) {
        uVar6 = FUN_142992f60(lVar3 + 0x70);
        *param_3 = uVar6;
        uStack_128 = FUN_142992f60(lVar3 + 0x70);
        uVar7 = FUN_142992c50(lVar3 + 0x70);
        FUN_142b0c9a0(param_2,uVar7,uStack_128);
        iStack_15c = 0;
        FUN_1429934a0(auStack_170);
        return iStack_15c;
      }
    }
  }
  lVar8 = FUN_142992c50(param_1[1] + 0x20);
  ppcStack_180 = *(code ***)(lVar8 + 0x28);
  uVar4 = FUN_142992c50(param_1[1] + 0x20);
  uStack_148 = FUN_142992c50(uVar4);
  if (*(char *)((longlong)param_1 + 0x622) < '\0') {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0xf6);
  }
  cVar1 = FUN_142b03ff0(param_1);
  if (cVar1 != '\0') {
    lVar8 = FUN_142992c50(param_1[1] + 0x20);
    ppcStack_180 = *(code ***)(lVar8 + 0xa8);
    lVar8 = FUN_142992c50(param_1[1] + 0x20);
    uStack_148 = FUN_142992c50(lVar8 + 0xa0);
  }
  if (ppcStack_180 == (code **)0x0) {
    *param_3 = param_4;
    FUN_142b0e870(auStack_108);
    uVar4 = FUN_142992cb0(auStack_108);
    cVar1 = FUN_142b0d960(uVar7,uVar4,uStack_148,param_5,
                          in_stack_fffffffffffffe48 & 0xffffffffffffff00);
    if (cVar1 == '\0') {
LAB_142b0d087:
      iStack_154 = 2;
      FUN_142b0e8a0(auStack_108);
      FUN_1429934a0(auStack_170);
      return iStack_154;
    }
    uStack_118 = FUN_142992f60(param_6);
    uStack_110 = FUN_142992c50(param_6);
    uVar7 = FUN_142992cb0(auStack_108);
    iVar2 = FUN_142b47eb0(uVar7,param_2,param_3,uStack_110,uStack_118);
    if (iVar2 == 0) goto LAB_142b0d087;
    FUN_142b0e8a0(auStack_108);
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x622) >> 2 & 1) == 0) {
      uStack_120 = FUN_142992f60(param_6);
      uVar4 = FUN_142992c50(param_6);
      uVar10 = CONCAT62((int6)(in_stack_fffffffffffffe48 >> 0x10),param_5);
      iStack_188 = (**ppcStack_180)(uVar7,param_2,param_3,param_4,uVar10,uVar4,uStack_120);
      uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
    }
    else {
      iStack_188 = (*ppcStack_180[2])(uVar7,param_2,param_3,param_4);
      uVar11 = (undefined4)(in_stack_fffffffffffffe48 >> 0x20);
    }
    if (iStack_188 == 2) {
      FUN_142afa690(0x10,0,0x11f,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                    ,CONCAT44(uVar11,0x105));
    }
    *(byte *)((longlong)param_1 + 0x622) =
         *(byte *)((longlong)param_1 + 0x622) & 0xfb | (iStack_188 == 1) << 2;
    if (iStack_188 != 0) {
      iStack_158 = iStack_188;
      FUN_1429934a0(auStack_170);
      return iStack_158;
    }
  }
  if ((lVar3 == 0) || ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) == 0)) {
LAB_142b0d1c8:
    iStack_14c = 0;
    FUN_1429934a0(auStack_170);
    iStack_150 = iStack_14c;
  }
  else {
    *(short *)(lVar3 + 0x48) = param_5;
    uVar7 = FUN_142992cb0(auStack_170);
    FUN_1429934c0(lVar3 + 0x60,uVar7);
    puVar5 = auStack_a8;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar5 = *param_6;
      param_6 = param_6 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_1429936c0(lVar3 + 0x50,auStack_a8);
    if (cVar1 != '\0') {
      puVar5 = (undefined *)FUN_142992fc0(auStack_28,param_2,*param_3);
      puVar9 = auStack_98;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      cVar1 = FUN_1429936c0(lVar3 + 0x70,auStack_98);
      if (cVar1 != '\0') goto LAB_142b0d1c8;
    }
    iStack_150 = 2;
    FUN_1429934a0(auStack_170);
  }
  return iStack_150;
}


/* address=142b0d200 name=FUN_142b0d200 */

int FUN_142b0d200(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar6;
  int iStack_34;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar5 = *param_1;
  if (*(char *)((longlong)param_1 + 0x622) < '\0') {
    FID_conflict__assert((wchar_t *)"!",(wchar_t *)"D",0x136);
  }
  lVar2 = FUN_142992c50(param_1[1] + 0x20);
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    uVar5 = FUN_142992c50(param_1[1] + 0x20);
    uVar5 = FUN_142992c50(uVar5);
    lVar2 = FUN_142b0ff70(uVar5);
    if (lVar2 == 0) {
      FUN_142afa690(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                    ,CONCAT44(uVar6,0x149));
      iStack_34 = 2;
    }
    else {
      uVar5 = FUN_142992f60(param_5);
      uVar3 = FUN_142992c50(param_5);
      iVar1 = FUN_142c40ad0(lVar2,param_3,param_2,param_4,uVar3,uVar5,3);
      if (iVar1 == 0) {
        iStack_34 = 2;
      }
      else {
        iStack_34 = 0;
      }
    }
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x622) >> 2 & 1) == 0) {
      uVar3 = FUN_142992f60(param_5);
      uVar4 = FUN_142992c50(param_5);
      lVar2 = FUN_142992c50(param_1[1] + 0x20);
      iStack_34 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))
                            (uVar5,param_2,param_3,param_4,uVar4,uVar3);
      uVar6 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      lVar2 = FUN_142992c50(param_1[1] + 0x20);
      iStack_34 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(uVar5,param_2,param_3,param_4);
    }
    if (iStack_34 == 2) {
      FUN_142afa690(0x10,0,0x11f,
                    "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                    ,CONCAT44(uVar6,0x140));
    }
    *(byte *)((longlong)param_1 + 0x622) =
         *(byte *)((longlong)param_1 + 0x622) & 0xfb | (iStack_34 == 1) << 2;
  }
  return iStack_34;
}


/* address=142b0d4a0 name=FUN_142b0d4a0 */

ulonglong FUN_142b0d4a0(undefined8 *param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  uVar3 = FUN_142992c50(param_1 + 0xba);
  cVar1 = FUN_142b0d840(uVar6,uVar3,param_2);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    lVar5 = FUN_142b0d7d0(param_2);
    uVar4 = 0;
    if (*(char *)(lVar5 + 0x18) != '\0') {
      uVar6 = FUN_142992c50(param_1 + 0xba);
      iVar2 = FUN_142b0fdf0(uVar6);
      uVar6 = (**(code **)(lVar5 + 0x10))();
      lVar5 = FUN_142b124a0(uVar6);
      uVar4 = lVar5 * 2 + 2;
      if ((ulonglong)(longlong)iVar2 < uVar4) {
        return uVar4 & 0xffffffffffffff00;
      }
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}


/* address=142b0d560 name=FUN_142b0d560 */

bool FUN_142b0d560(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined auStack_30 [48];
  
  FUN_142b0e870(auStack_30);
  uVar3 = FUN_142992cb0(auStack_30);
  cVar1 = FUN_142b0d960(param_1,uVar3,param_4,param_3,1);
  if (cVar1 == '\0') {
    FUN_142b0e8a0(auStack_30);
    bVar8 = false;
  }
  else {
    uVar3 = FUN_142992f60(param_5);
    uVar4 = FUN_142992c50(param_5);
    uVar5 = FUN_142992f60(param_2);
    uVar6 = FUN_142992c50(param_2);
    uVar7 = FUN_142992cb0(auStack_30);
    iVar2 = FUN_142b481c0(uVar7,uVar6,uVar5,uVar4,uVar3);
    bVar8 = iVar2 != 0;
    FUN_142b0e8a0(auStack_30);
  }
  return bVar8;
}


/* address=142b0d6a0 name=FUN_142b0d6a0 */

undefined FUN_142b0d6a0(int param_1)

{
  undefined uStack_18;
  
  if (((param_1 == 6) || (param_1 == 0x198)) || (param_1 == 0x3b5)) {
    uStack_18 = 1;
  }
  else {
    uStack_18 = 0;
  }
  return uStack_18;
}


/* address=142b0d6f0 name=FUN_142b0d6f0 */

undefined8 FUN_142b0d6f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined auStack_18 [24];
  
  uVar2 = FUN_142b0fea0(param_2);
  cVar1 = FUN_142b0d6a0(uVar2);
  if (cVar1 == '\0') {
    FUN_142afa690(0x10,0,0xe4,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,0x52);
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_142994ac0(param_1 + 8,0);
    if (cVar1 != '\0') {
      uVar3 = FUN_142992c50(param_1 + 8);
      lVar4 = FUN_1429930a0(uVar3,0);
      if ((lVar4 != 0) && (cVar1 = FUN_142b04aa0(param_1,param_2), cVar1 == '\0')) {
        return 0;
      }
    }
    uVar3 = FUN_142992ce0(auStack_18,param_2);
    FUN_142994df0(param_1,uVar3);
    FUN_142992d40(auStack_18);
    uVar3 = 1;
  }
  return uVar3;
}


/* address=142b0d7d0 name=FUN_142b0d7d0 */

undefined * FUN_142b0d7d0(short param_1)

{
  ulonglong uStack_18;
  
  uStack_18 = 0;
  while( true ) {
    if (0xc < uStack_18) {
      return (undefined *)0x0;
    }
    if (*(short *)(&DAT_143184e80 + uStack_18 * 0x20) == param_1) break;
    uStack_18 = uStack_18 + 1;
  }
  return &DAT_143184e80 + uStack_18 * 0x20;
}


/* address=142b0d840 name=FUN_142b0d840 */

undefined FUN_142b0d840(undefined8 param_1,undefined8 param_2,short param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined uStack_18;
  
  lVar3 = FUN_142b0d7d0(param_3);
  if ((lVar3 == 0) || (iVar2 = FUN_142b0fea0(param_2), iVar2 != *(int *)(lVar3 + 4))) {
    return 0;
  }
  uVar1 = FUN_142afbfd0(param_1);
  if (uVar1 < 0x303) {
    if ((param_3 == -0xff) || (param_3 == 0x203)) {
      uStack_18 = 1;
    }
    else {
      uStack_18 = 0;
    }
    return uStack_18;
  }
  if (param_3 != -0xff) {
    uVar1 = FUN_142afbfd0(param_1);
    if (0x303 < uVar1) {
      if ((*(int *)(lVar3 + 4) == 6) && (*(char *)(lVar3 + 0x18) == '\0')) {
        return 0;
      }
      if (*(int *)(lVar3 + 4) == 0x198) {
        if (*(int *)(lVar3 + 8) != 0) {
          uVar4 = FUN_142b10170(param_2);
          uVar4 = FUN_142b4d190(uVar4);
          iVar2 = FUN_142b4b4d0(uVar4);
          if (iVar2 == *(int *)(lVar3 + 8)) {
            return 1;
          }
        }
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


/* address=142b0d960 name=FUN_142b0d960 */

undefined8
FUN_142b0d960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
             char param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar5;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  cVar1 = FUN_142b0d840(param_1,param_3,param_4);
  if (cVar1 == '\0') {
    FUN_142afa690(0x10,0,0xf5,
                  "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                  ,CONCAT44(uVar5,0xbe));
    uVar3 = 0;
  }
  else {
    lVar4 = FUN_142b0d7d0(param_4);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      uStack_18 = 0;
    }
    else {
      uStack_18 = (**(code **)(lVar4 + 0x10))();
    }
    uStack_10 = uStack_18;
    if (param_5 == '\0') {
      iVar2 = FUN_142b47c60(param_2,&uStack_20,uStack_18,0,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_142b47fc0(param_2,&uStack_20,uStack_18,0,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if ((*(char *)(lVar4 + 0x18) == '\0') ||
       ((iVar2 = FUN_142c3eee0(uStack_20,6), iVar2 != 0 &&
        (iVar2 = FUN_142c3ef80(uStack_20,0xffffffff), iVar2 != 0)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=142b0db00 name=FUN_142b0db00 */

undefined8 FUN_142b0db00(undefined *param_1)

{
  short sVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  short *psVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong uStack_50;
  undefined auStack_40 [24];
  undefined auStack_28 [24];
  
  uVar3 = FUN_142992f60(param_1);
  if (uVar3 < 2) {
    uVar4 = 1;
  }
  else {
    FUN_142993420(auStack_40);
    puVar8 = auStack_28;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *param_1;
      param_1 = param_1 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar2 = FUN_1429939a0(auStack_40,auStack_28);
    if (cVar2 == '\0') {
      FUN_1429934a0(auStack_40);
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_142992f60(auStack_40);
      uVar5 = FUN_142992c50(auStack_40);
      FUN_142ca7ea0(uVar5,uVar4,2,&LAB_142b0daa0);
      for (uStack_50 = 1; uVar3 = FUN_142992f60(auStack_40), uStack_50 < uVar3;
          uStack_50 = uStack_50 + 1) {
        psVar6 = (short *)FUN_142b0e8c0(auStack_40,uStack_50 - 1);
        sVar1 = *psVar6;
        psVar6 = (short *)FUN_142b0e8c0(auStack_40,uStack_50);
        if (sVar1 == *psVar6) {
          FUN_142afa690(0x10,0,0x128,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                        ,0x254);
          FUN_1429934a0(auStack_40);
          return 0;
        }
      }
      FUN_1429934a0(auStack_40);
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* address=142b0dc70 name=FUN_142b0dc70 */

undefined FUN_142b0dc70(undefined8 param_1,undefined *param_2)

{
  short sVar1;
  char cVar2;
  undefined uVar3;
  undefined8 uVar4;
  short *psVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  short *psStack_60;
  longlong lStack_58;
  undefined auStack_50 [16];
  undefined *puStack_40;
  short *psStack_38;
  undefined auStack_28 [24];
  
  puVar7 = param_2;
  puVar8 = auStack_28;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  cVar2 = FUN_142b0db00(auStack_28);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    FUN_142993420(auStack_50);
    uVar4 = FUN_142992f60(param_2);
    cVar2 = FUN_1429938b0(auStack_50,uVar4);
    if (cVar2 == '\0') {
      FUN_1429934a0(auStack_50);
      uVar3 = 0;
    }
    else {
      lStack_58 = 0;
      puStack_40 = param_2;
      psStack_60 = (short *)FUN_142992c50(param_2);
      psStack_38 = (short *)FUN_142afc3a0(puStack_40);
      for (; psStack_60 != psStack_38; psStack_60 = psStack_60 + 1) {
        sVar1 = *psStack_60;
        if (sVar1 != -0xff) {
          lVar6 = FUN_142b0d7d0(sVar1);
          if (lVar6 == 0) {
            FUN_142afa690(0x10,0,0x127,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                          ,0x270);
            FUN_1429934a0(auStack_50);
            return 0;
          }
          psVar5 = (short *)FUN_142b0e8c0(auStack_50,lStack_58);
          *psVar5 = sVar1;
          lStack_58 = lStack_58 + 1;
        }
      }
      FUN_142b0e8e0(auStack_50,lStack_58);
      cVar2 = FUN_142992f70(param_2);
      if ((cVar2 == '\0') && (cVar2 = FUN_142992f70(auStack_50), cVar2 != '\0')) {
        FUN_142afa690(0x10,0,0x127,
                      "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                      ,0x27c);
        FUN_1429934a0(auStack_50);
        uVar3 = 0;
      }
      else {
        uVar4 = FUN_142992cb0(auStack_50);
        FUN_1429934c0(param_1,uVar4);
        FUN_1429934a0(auStack_50);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* address=142b0de90 name=FUN_142b0de90 */

undefined8 FUN_142b0de90(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  ulonglong uStack_40;
  int *piStack_30;
  
  if ((param_3 & 1) == 1) {
    uVar5 = 0;
  }
  else {
    cVar4 = FUN_1429938b0(param_1,param_3 / 2);
    if (cVar4 == '\0') {
      uVar5 = 0;
    }
    else {
      for (uStack_40 = 0; uStack_40 < param_3; uStack_40 = uStack_40 + 2) {
        iVar1 = *(int *)(param_2 + uStack_40 * 4);
        iVar2 = *(int *)(param_2 + 4 + uStack_40 * 4);
        bVar3 = false;
        for (piStack_30 = &DAT_143185d60;
            piStack_30 !=
            (int *)
            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
            ; piStack_30 = piStack_30 + 3) {
          if ((*piStack_30 == iVar2) && (piStack_30[1] == iVar1)) {
            puVar6 = (undefined2 *)FUN_142b0e8c0(param_1,uStack_40 / 2);
            *puVar6 = *(undefined2 *)(piStack_30 + 2);
            bVar3 = true;
            break;
          }
        }
        if (!bVar3) {
          FUN_142afa690(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                        ,0x2be);
          FUN_142afa800("unknown hash:%d pkey:%d",iVar1,iVar2);
          return 0;
        }
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}


/* address=142b0e040 name=FUN_142b0e040 */

void FUN_142b0e040(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined auStack_108 [32];
  undefined4 uStack_e8;
  char cStack_d8;
  char cStack_d7;
  char cStack_d6;
  int iStack_d4;
  int iStack_d0;
  ulonglong uStack_c8;
  int iStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  char cStack_a8;
  ulonglong uStack_a0;
  char *pcStack_98;
  undefined2 *puStack_90;
  int *piStack_88;
  longlong lStack_80;
  int *piStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined2 *puStack_60;
  undefined2 *puStack_58;
  undefined4 *puStack_50;
  undefined2 *puStack_48;
  ulonglong uStack_40;
  char *pcStack_38;
  ulonglong uStack_30;
  char acStack_28 [24];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_108;
  uStack_a0 = 1;
  lStack_80 = 0;
  for (pcStack_98 = param_2; *pcStack_98 != '\0'; pcStack_98 = pcStack_98 + 1) {
    lStack_80 = lStack_80 + 1;
    if (*pcStack_98 == ':') {
      uStack_a0 = uStack_a0 + 1;
    }
  }
  cVar1 = FUN_1429938b0(param_1,uStack_a0);
  if (cVar1 != '\0') {
    uStack_b0 = 0;
    iStack_c0 = 0;
    uStack_c8 = 0;
    iStack_d0 = 0;
    iStack_d4 = 0;
    for (uStack_b8 = 0; uStack_b8 < lStack_80 + 1U; uStack_b8 = uStack_b8 + 1) {
      cStack_d8 = param_2[uStack_b8];
      cStack_a8 = cStack_d8;
      if (cStack_d8 == '\0') {
LAB_142b0e310:
        if (uStack_c8 == 0) {
          uStack_e8 = 0x330;
          FUN_142afa690(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                       );
          FUN_142afa800("empty element at offset %zu",uStack_b8);
          goto LAB_142b0e7f6;
        }
        uStack_68 = uStack_c8;
        if (0x16 < uStack_c8) {
          FUN_142c6a5b8();
        }
        acStack_28[uStack_68] = '\0';
        if (iStack_c0 == 0) {
          cStack_d7 = '\0';
          puStack_60 = &DAT_143185a80;
          puStack_48 = (undefined2 *)&DAT_143185bd2;
          for (puStack_90 = &DAT_143185a80; puStack_90 != puStack_48; puStack_90 = puStack_90 + 0xd)
          {
            puStack_58 = puStack_90;
            iVar2 = strcmp((char *)(puStack_90 + 1),acStack_28);
            if (iVar2 == 0) {
              if (uStack_a0 <= uStack_b0) {
                FID_conflict__assert((wchar_t *)"o",(wchar_t *)"D",0x33c);
              }
              uStack_40 = uStack_b0;
              puVar3 = (undefined2 *)FUN_142b0e8c0(param_1);
              *puVar3 = *puStack_58;
              uStack_b0 = uStack_b0 + 1;
              cStack_d7 = '\x01';
              break;
            }
          }
          if (cStack_d7 == '\0') {
            uStack_e8 = 0x344;
            FUN_142afa690(0x10,0,0x127,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                         );
            FUN_142afa800("unknown signature algorithm \'%s\'",acStack_28);
            goto LAB_142b0e7f6;
          }
        }
        else {
          iVar2 = strcmp(acStack_28,"SHA1");
          if (iVar2 == 0) {
            iStack_d4 = 0x40;
          }
          else {
            iVar2 = strcmp(acStack_28,"SHA256");
            if (iVar2 == 0) {
              iStack_d4 = 0x2a0;
            }
            else {
              iVar2 = strcmp(acStack_28,"SHA384");
              if (iVar2 == 0) {
                iStack_d4 = 0x2a1;
              }
              else {
                iVar2 = strcmp(acStack_28,"SHA512");
                if (iVar2 != 0) {
                  uStack_e8 = 0x352;
                  FUN_142afa690(0x10,0,0x127,
                                "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                               );
                  FUN_142afa800("unknown hash function \'%s\'",acStack_28);
                  goto LAB_142b0e7f6;
                }
                iStack_d4 = 0x2a2;
              }
            }
          }
          cStack_d6 = '\0';
          puStack_50 = &DAT_143185d60;
          pcStack_38 = 
          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
          ;
          for (piStack_88 = &DAT_143185d60;
              piStack_88 !=
              (int *)
              "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
              ; piStack_88 = piStack_88 + 3) {
            piStack_78 = piStack_88;
            if ((*piStack_88 == iStack_d0) && (piStack_88[1] == iStack_d4)) {
              if (uStack_a0 <= uStack_b0) {
                FID_conflict__assert((wchar_t *)"o",(wchar_t *)"D",0x35b);
              }
              uStack_30 = uStack_b0;
              puVar3 = (undefined2 *)FUN_142b0e8c0(param_1);
              *puVar3 = *(undefined2 *)(piStack_78 + 2);
              uStack_b0 = uStack_b0 + 1;
              cStack_d6 = '\x01';
              break;
            }
          }
          if (cStack_d6 == '\0') {
            uStack_e8 = 0x363;
            FUN_142afa690(0x10,0,0x127,
                          "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                         );
            FUN_142afa800("unknown pkey:%d hash:%s",iStack_d0,acStack_28);
            goto LAB_142b0e7f6;
          }
        }
        iStack_c0 = 0;
        uStack_c8 = 0;
      }
      else if (cStack_d8 == '+') {
        if (iStack_c0 == 1) {
          uStack_e8 = 0x310;
          FUN_142afa690(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                       );
          FUN_142afa800("+ found in hash name at offset %zu",uStack_b8);
          goto LAB_142b0e7f6;
        }
        if (uStack_c8 == 0) {
          uStack_e8 = 0x315;
          FUN_142afa690(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                       );
          FUN_142afa800("empty public key type at offset %zu",uStack_b8);
          goto LAB_142b0e7f6;
        }
        uStack_70 = uStack_c8;
        if (0x16 < uStack_c8) {
          FUN_142c6a5b8();
        }
        acStack_28[uStack_70] = '\0';
        iVar2 = strcmp(acStack_28,"RSA");
        if (iVar2 == 0) {
          iStack_d0 = 6;
        }
        else {
          iVar2 = strcmp(acStack_28,"RSA-PSS");
          if ((iVar2 == 0) || (iVar2 = strcmp(acStack_28,"PSS"), iVar2 == 0)) {
            iStack_d0 = 0x390;
          }
          else {
            iVar2 = strcmp(acStack_28,"ECDSA");
            if (iVar2 != 0) {
              uStack_e8 = 0x323;
              FUN_142afa690(0x10,0,0x127,
                            "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                           );
              FUN_142afa800("unknown public key type \'%s\'",acStack_28);
              goto LAB_142b0e7f6;
            }
            iStack_d0 = 0x198;
          }
        }
        iStack_c0 = 1;
        uStack_c8 = 0;
      }
      else {
        if (cStack_d8 == ':') goto LAB_142b0e310;
        if (uStack_c8 == 0x16) {
          uStack_e8 = 0x36f;
          FUN_142afa690(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                       );
          FUN_142afa800("substring too long at offset %zu",uStack_b8);
          goto LAB_142b0e7f6;
        }
        iVar2 = FUN_142b0f010(cStack_d8);
        if (((iVar2 == 0) && (cStack_d8 != '-')) && (cStack_d8 != '_')) {
          uStack_e8 = 0x377;
          FUN_142afa690(0x10,0,0x127,
                        "D:\\a\\1\\s\\target\\release\\build\\boring-sys-3fda8746f15b44a7\\out\\boringssl\\src\\ssl\\ssl_privkey.cc"
                       );
          FUN_142afa800("invalid character 0x%02x at offest %zu",cStack_d8,uStack_b8);
          goto LAB_142b0e7f6;
        }
        acStack_28[uStack_c8] = cStack_d8;
        uStack_c8 = uStack_c8 + 1;
      }
    }
    uVar4 = FUN_142992f60(param_1);
    if (uStack_b0 != uVar4) {
      FID_conflict__assert((wchar_t *)"o",(wchar_t *)"D",0x37f);
    }
  }
LAB_142b0e7f6:
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_108);
  return;
}


/* address=142b0e810 name=FUN_142b0e810 */

void FUN_142b0e810(undefined8 param_1)

{
  FUN_142b48600(param_1);
  return;
}


/* address=142b0e830 name=FUN_142b0e830 */

void FUN_142b0e830(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_142992cb0(param_1);
    FUN_142b0e950(uVar1,*param_1);
  }
  return;
}


/* address=142b0e870 name=FUN_142b0e870 */

undefined8 FUN_142b0e870(undefined8 param_1)

{
  FUN_142b11d10(param_1);
  return param_1;
}


/* address=142b0e8a0 name=FUN_142b0e8a0 */

void FUN_142b0e8a0(undefined8 param_1)

{
  FUN_142b11d80(param_1);
  return;
}


/* address=142b0e8c0 name=FUN_142b0e8c0 */

longlong FUN_142b0e8c0(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2 * 2;
}


/* address=142b0e8e0 name=FUN_142b0e8e0 */

void FUN_142b0e8e0(longlong param_1,ulonglong param_2)

{
  ulonglong uStack_18;
  
  uStack_18 = param_2;
  if (param_2 <= *(ulonglong *)(param_1 + 8)) {
    for (; uStack_18 < *(ulonglong *)(param_1 + 8); uStack_18 = uStack_18 + 1) {
    }
    *(ulonglong *)(param_1 + 8) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=142b0e950 name=FUN_142b0e950 */

void FUN_142b0e950(undefined8 param_1,undefined8 param_2)

{
  FUN_142b0e810(param_2);
  return;
}


/* address=142b0e970 name=FUN_142b0e970 */

ulonglong * FUN_142b0e970(ulonglong param_1)

{
  int iVar1;
  ulonglong *puVar2;
  
  iVar1 = FUN_142b0f9b0();
  if (iVar1 == 0) {
    if (DAT_143d02b40 == (code *)0x0) {
      if ((param_1 <= param_1 + 8) &&
         (puVar2 = (ulonglong *)_malloc_base(param_1 + 8), puVar2 != (ulonglong *)0x0)) {
        *puVar2 = param_1;
        FUN_142b0f970(puVar2,8);
        return puVar2 + 1;
      }
    }
    else {
      if (DAT_143d02b48 == 0) {
        FID_conflict__assert((wchar_t *)s_O_143cb5378,(wchar_t *)s_D_143cb52c0,0xea);
      }
      if (DAT_143d02b50 == 0) {
        FID_conflict__assert((wchar_t *)s_O_143cb5470,(wchar_t *)s_D_143cb53b0,0xeb);
      }
      puVar2 = (ulonglong *)(*DAT_143d02b40)(param_1);
      if (puVar2 != (ulonglong *)0x0) {
        return puVar2;
      }
      if (param_1 == 0) {
        return (ulonglong *)0x0;
      }
    }
  }
  FUN_142afa690(0xe,0,0x41,s_D__a_1_s_target_release_build_bo_143cb54b0,0x10b);
  return (ulonglong *)0x0;
}


/* address=142b0eaa0 name=FUN_142b0eaa0 */

void FUN_142b0eaa0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    if (DAT_143d02b48 == (code *)0x0) {
      plVar2 = (longlong *)(param_1 + -8);
      FUN_142b0f990(plVar2,8);
      lVar1 = *plVar2;
      FUN_142b0ec40(plVar2,lVar1 + 8);
      if (DAT_143d02b38 == (code *)0x0) {
        thunk_FUN_142cacf70(plVar2);
      }
      else {
        (*DAT_143d02b38)(plVar2,lVar1 + 8,0);
      }
    }
    else {
      (*DAT_143d02b48)(param_1);
    }
  }
  return;
}


/* address=142b0eb50 name=FUN_142b0eb50 */

longlong FUN_142b0eb50(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  if (param_1 == 0) {
    lVar1 = FUN_142b0e970(param_2);
  }
  else {
    if (DAT_143d02b50 == (code *)0x0) {
      puVar2 = (ulonglong *)(param_1 + -8);
      FUN_142b0f990(puVar2,8);
      uStack_20 = *puVar2;
      FUN_142b0f970(puVar2,8);
    }
    else {
      uStack_20 = (*DAT_143d02b50)(param_1);
    }
    lVar1 = FUN_142b0e970(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      uStack_18 = param_2;
      if (uStack_20 < param_2) {
        uStack_18 = uStack_20;
      }
      FUN_142cbd3c0(lVar1,param_1,uStack_18);
      FUN_142b0eaa0(param_1);
    }
  }
  return lVar1;
}


/* address=142b0ec40 name=FUN_142b0ec40 */

void FUN_142b0ec40(undefined8 param_1,undefined8 param_2)

{
  FUN_142b0fa50(param_1,param_2);
  return;
}


/* address=142b0ec70 name=FUN_142b0ec70 */

byte FUN_142b0ec70(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte bStack_28;
  ulonglong uStack_20;
  
  bStack_28 = 0;
  for (uStack_20 = 0; uStack_20 < param_3; uStack_20 = uStack_20 + 1) {
    bStack_28 = bStack_28 | *(byte *)(param_1 + uStack_20) ^ *(byte *)(param_2 + uStack_20);
  }
  return bStack_28;
}


/* address=142b0ed10 name=FUN_142b0ed10 */

uint FUN_142b0ed10(longlong param_1,ulonglong param_2)

{
  uint uStack_28;
  ulonglong uStack_20;
  
  uStack_28 = DAT_143186778;
  for (uStack_20 = 0; uStack_20 < param_2; uStack_20 = uStack_20 + 1) {
    uStack_28 = (uStack_28 ^ *(byte *)(param_1 + uStack_20)) * DAT_143186774;
  }
  return uStack_28;
}


/* address=142b0ed90 name=FUN_142b0ed90 */

void FUN_142b0ed90(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  FUN_142b0ed10(param_1,sVar1);
  return;
}


/* address=142b0edc0 name=FUN_142b0edc0 */

longlong FUN_142b0edc0(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  
  if (param_1 == (char *)0x0) {
    lVar2 = 0;
  }
  else {
    sVar1 = strlen(param_1);
    lVar2 = FUN_142b0e970(sVar1 + 1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_142b0f740(lVar2,param_1,sVar1 + 1);
    }
  }
  return lVar2;
}


/* address=142b0ee30 name=FUN_142b0ee30 */

ulonglong FUN_142b0ee30(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uStack_18;
  
  for (uStack_18 = 0;
      (uVar1 = param_2, uStack_18 < param_2 &&
      (uVar1 = uStack_18, *(char *)(param_1 + uStack_18) != '\0')); uStack_18 = uStack_18 + 1) {
  }
  return uVar1;
}


/* address=142b0ee90 name=__ascii_iswalpha */

/* Library Function - Single Match
    __ascii_iswalpha
   
   Library: Visual Studio 2019 Debug */

undefined4 __ascii_iswalpha(int param_1)

{
  undefined4 uStack_18;
  
  if (((param_1 < 0x61) || (0x7a < param_1)) && ((param_1 < 0x41 || (0x5a < param_1)))) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = 1;
  }
  return uStack_18;
}


/* address=142b0eee0 name=FUN_142b0eee0 */

undefined4 FUN_142b0eee0(int param_1)

{
  undefined4 uStack_18;
  
  if ((param_1 < 0x30) || (0x39 < param_1)) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = 1;
  }
  return uStack_18;
}


/* address=142b0ef20 name=FUN_142b0ef20 */

undefined4 FUN_142b0ef20(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  
  iVar1 = FUN_142b0eee0(param_1);
  if (((iVar1 == 0) && ((param_1 < 0x61 || (0x66 < param_1)))) &&
     ((param_1 < 0x41 || (0x46 < param_1)))) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = 1;
  }
  return uStack_18;
}


/* address=142b0ef80 name=FUN_142b0ef80 */

undefined8 FUN_142b0ef80(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_142b0eee0(param_2);
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


/* address=142b0f010 name=FUN_142b0f010 */

undefined4 FUN_142b0f010(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = __ascii_iswalpha(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_142b0eee0(param_1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}


/* address=142b0f060 name=__ascii_tolower */

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


/* address=142b0f090 name=FUN_142b0f090 */

undefined4 FUN_142b0f090(int param_1)

{
  undefined4 uStack_18;
  
  if ((((param_1 == 9) || (param_1 == 10)) || (param_1 == 0xb)) ||
     (((param_1 == 0xc || (param_1 == 0xd)) || (param_1 == 0x20)))) {
    uStack_18 = 1;
  }
  else {
    uStack_18 = 0;
  }
  return uStack_18;
}


/* address=142b0f0e0 name=FUN_142b0f0e0 */

undefined8 FUN_142b0f0e0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lStack_10;
  
  lStack_10 = 0;
  while( true ) {
    iVar1 = __ascii_tolower((int)*(char *)(param_1 + lStack_10));
    iVar2 = __ascii_tolower((int)*(char *)(param_2 + lStack_10));
    if (iVar1 < iVar2) {
      return 0xffffffff;
    }
    if (iVar2 < iVar1) break;
    if (iVar1 == 0) {
      return 0;
    }
    lStack_10 = lStack_10 + 1;
  }
  return 1;
}


/* address=142b0f180 name=FUN_142b0f180 */

undefined8 FUN_142b0f180(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uStack_10;
  
  uStack_10 = 0;
  while( true ) {
    if (param_3 <= uStack_10) {
      return 0;
    }
    iVar1 = __ascii_tolower((int)*(char *)(param_1 + uStack_10));
    iVar2 = __ascii_tolower((int)*(char *)(param_2 + uStack_10));
    if (iVar1 < iVar2) {
      return 0xffffffff;
    }
    if (iVar2 < iVar1) {
      return 1;
    }
    if (iVar1 == 0) break;
    uStack_10 = uStack_10 + 1;
  }
  return 0;
}


/* address=142b0f240 name=_snprintf */

/* Library Function - Single Match
    _snprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl _snprintf(char *_Dest,size_t _Count,char *_Format,...)

{
  int iVar1;
  undefined8 in_R9;
  undefined8 uStackX_20;
  
  uStackX_20 = in_R9;
  iVar1 = FUN_142b0f2a0(_Dest,_Count,_Format,&uStackX_20);
  return iVar1;
}


/* address=142b0f2a0 name=FUN_142b0f2a0 */

void FUN_142b0f2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142b0f9d0(param_1,param_2,param_3,param_4);
  return;
}


/* address=142b0f2e0 name=FUN_142b0f2e0 */

void FUN_142b0f2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b0f790(param_1,param_2,param_3,0);
  return;
}


/* address=142b0f380 name=FUN_142b0f380 */

longlong FUN_142b0f380(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FUN_142b0ee30(param_1,param_2);
  if (uVar1 + 1 < uVar1) {
    FUN_142afa690(0xe,0,0x41,s_D__a_1_s_target_release_build_bo_143cb5510,0x22f);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_142b0e970(uVar1 + 1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_142b0f740(lVar2,param_1,uVar1);
      *(undefined *)(lVar2 + uVar1) = 0;
    }
  }
  return lVar2;
}


/* address=142b0f440 name=FUN_142b0f440 */

longlong FUN_142b0f440(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_142b0e970(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_142b0f740(lVar1,param_1,param_2);
    }
  }
  return lVar1;
}


/* address=142b0f4a0 name=FUN_142b0f4a0 */

longlong FUN_142b0f4a0(char *param_1,char *param_2,ulonglong param_3)

{
  size_t sVar1;
  char *pcStackX_8;
  char *pcStackX_10;
  ulonglong uStackX_18;
  longlong lStack_18;
  
  lStack_18 = 0;
  pcStackX_8 = param_1;
  uStackX_18 = param_3;
  for (pcStackX_10 = param_2; (1 < uStackX_18 && (*pcStackX_10 != '\0'));
      pcStackX_10 = pcStackX_10 + 1) {
    *pcStackX_8 = *pcStackX_10;
    pcStackX_8 = pcStackX_8 + 1;
    lStack_18 = lStack_18 + 1;
    uStackX_18 = uStackX_18 - 1;
  }
  if (uStackX_18 != 0) {
    *pcStackX_8 = '\0';
  }
  sVar1 = strlen(pcStackX_10);
  return lStack_18 + sVar1;
}


/* address=142b0f550 name=FUN_142b0f550 */

longlong FUN_142b0f550(char *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char *pcStackX_8;
  longlong lStackX_18;
  longlong lStack_18;
  
  lStack_18 = 0;
  lStackX_18 = param_3;
  for (pcStackX_8 = param_1; (lStackX_18 != 0 && (*pcStackX_8 != '\0')); pcStackX_8 = pcStackX_8 + 1
      ) {
    lStack_18 = lStack_18 + 1;
    lStackX_18 = lStackX_18 + -1;
  }
  lVar1 = FUN_142b0f4a0(pcStackX_8,param_2,lStackX_18);
  return lStack_18 + lVar1;
}


/* address=142b0f680 name=FUN_142b0f680 */

void FUN_142b0f680(undefined8 param_1)

{
  FUN_142b0eaa0(param_1);
  return;
}


/* address=142b0f740 name=FUN_142b0f740 */

undefined8 FUN_142b0f740(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b0f790 name=FUN_142b0f790 */

uint FUN_142b0f790(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  code *pcStack_50;
  code *pcStack_48;
  code *pcStack_40;
  
  if (param_4 == 0) {
    pcStack_50 = FUN_142b0e970;
    pcStack_48 = FUN_142b0eaa0;
    pcStack_40 = FUN_142b0eb50;
  }
  else {
    pcStack_50 = _malloc_base;
    pcStack_48 = thunk_FUN_142cacf70;
    pcStack_40 = _realloc_base;
  }
  uStack_58 = 0x40;
  lVar1 = (*pcStack_50)(0x40);
  if ((lVar1 != 0) && (uStack_68 = FUN_142b0f9d0(lVar1,0x40,param_2,param_3), -1 < (int)uStack_68))
  {
    lStack_60 = lVar1;
    if (0x3f < uStack_68) {
      uStack_58 = (longlong)(int)uStack_68 + 1;
      lStack_60 = (*pcStack_40)(lVar1,uStack_58);
      if (lStack_60 == 0) goto LAB_142b0f932;
      uStack_68 = FUN_142b0f9d0(lStack_60,uStack_58,param_2,param_3);
    }
    lVar1 = lStack_60;
    if ((-1 < (int)uStack_68) && ((ulonglong)(longlong)(int)uStack_68 < uStack_58)) {
      *param_1 = lStack_60;
      return uStack_68;
    }
  }
LAB_142b0f932:
  lStack_60 = lVar1;
  (*pcStack_48)(lStack_60);
  *param_1 = 0;
  puVar2 = (undefined4 *)FUN_142c9fe28();
  *puVar2 = 0xc;
  return 0xffffffff;
}


/* address=142b0f970 name=FUN_142b0f970 */

void FUN_142b0f970(void)

{
  return;
}


/* address=142b0f990 name=FUN_142b0f990 */

void FUN_142b0f990(void)

{
  return;
}


/* address=142b0f9b0 name=FUN_142b0f9b0 */

undefined8 FUN_142b0f9b0(void)

{
  return 0;
}


/* address=142b0f9c0 name=FUN_142b0f9c0 */

undefined * FUN_142b0f9c0(void)

{
  return &DAT_143d02b58;
}


/* address=142b0f9d0 name=FUN_142b0f9d0 */

int FUN_142b0f9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iStack_14;
  
  puVar1 = (ulonglong *)FUN_142b0f9c0();
  iStack_14 = FUN_142c94770(*puVar1 | 2,param_1,param_2,param_3,0,param_4);
  if (iStack_14 < 0) {
    iStack_14 = -1;
  }
  return iStack_14;
}


/* address=142b0fa50 name=FUN_142b0fa50 */

undefined * FUN_142b0fa50(undefined *param_1,longlong param_2)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return param_1;
}


/* address=142b0fa80 name=FUN_142b0fa80 */

undefined4 * FUN_142b0fa80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_142b0e970(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_142b107f0(puVar1,0,0x18);
    puVar1[1] = 0;
    *puVar1 = 1;
  }
  return puVar1;
}


/* address=142b0fae0 name=FUN_142b0fae0 */

void FUN_142b0fae0(longlong param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_142b819a0(param_1), iVar1 != 0)) {
    FUN_142b10830(param_1);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142b0fb30 name=FUN_142b0fb30 */

undefined8 FUN_142b0fb30(undefined8 param_1)

{
  FUN_142b81950(param_1);
  return 1;
}


/* address=142b0fb60 name=FUN_142b0fb60 */

undefined8 FUN_142b0fb60(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x70))(param_1);
  }
  return uVar1;
}


/* address=142b0fbb0 name=FUN_142b0fbb0 */

ulonglong FUN_142b0fbb0(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x98) != 0) &&
         (uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x98))(param_1,param_2),
         (int)uVar1 < 1)) {
        return (ulonglong)uVar1;
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28) != 0) {
        uVar2 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x28))(param_1,param_2);
        return uVar2;
      }
    }
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* address=142b0fda0 name=FUN_142b0fda0 */

undefined8 FUN_142b0fda0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x88))(param_1);
  }
  return uVar1;
}


/* address=142b0fdf0 name=FUN_142b0fdf0 */

undefined8 FUN_142b0fdf0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x78))(param_1);
  }
  return uVar1;
}


/* address=142b0fea0 name=FUN_142b0fea0 */

undefined4 FUN_142b0fea0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* address=142b0ff00 name=FUN_142b0ff00 */

bool FUN_142b0ff00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_142b0ff40(param_1,param_2);
  if (iVar1 != 0) {
    FUN_142b48730(param_2);
  }
  return iVar1 != 0;
}


/* address=142b0ff40 name=FUN_142b0ff40 */

void FUN_142b0ff40(undefined8 param_1,undefined8 param_2)

{
  FUN_142b10200(param_1,6,param_2);
  return;
}


/* address=142b0ff70 name=FUN_142b0ff70 */

undefined8 FUN_142b0ff70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 6) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    FUN_142afa690(6,0,0x6b,s_D__a_1_s_target_release_build_bo_143cb6f60,0xfe);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142b0ffc0 name=FUN_142b0ffc0 */

longlong FUN_142b0ffc0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_142b0ff70(param_1);
  if (lVar1 != 0) {
    FUN_142b48730(lVar1);
  }
  return lVar1;
}


/* address=142b10000 name=FUN_142b10000 */

bool FUN_142b10000(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_142b10040(param_1,param_2);
  if (iVar1 != 0) {
    FUN_142c47bb0(param_2);
  }
  return iVar1 != 0;
}


/* address=142b10040 name=FUN_142b10040 */

void FUN_142b10040(undefined8 param_1,undefined8 param_2)

{
  FUN_142b10200(param_1,0x74,param_2);
  return;
}


/* address=142b10070 name=FUN_142b10070 */

undefined8 FUN_142b10070(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x74) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    FUN_142afa690(6,0,0x6c,s_D__a_1_s_target_release_build_bo_143cb6fc0,0x11a);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142b100c0 name=FUN_142b100c0 */

longlong FUN_142b100c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_142b10070(param_1);
  if (lVar1 != 0) {
    FUN_142c47bb0(lVar1);
  }
  return lVar1;
}


/* address=142b10100 name=FUN_142b10100 */

bool FUN_142b10100(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_142b10140(param_1,param_2);
  if (iVar1 != 0) {
    FUN_142b4d110(param_2);
  }
  return iVar1 != 0;
}


/* address=142b10140 name=FUN_142b10140 */

void FUN_142b10140(undefined8 param_1,undefined8 param_2)

{
  FUN_142b10200(param_1,0x198,param_2);
  return;
}


/* address=142b10170 name=FUN_142b10170 */

undefined8 FUN_142b10170(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0x198) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    FUN_142afa690(6,0,0x6a,s_D__a_1_s_target_release_build_bo_143cb7020,0x136);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142b101c0 name=FUN_142b101c0 */

longlong FUN_142b101c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_142b10170(param_1);
  if (lVar1 != 0) {
    FUN_142b4d110(lVar1);
  }
  return lVar1;
}


/* address=142b10200 name=FUN_142b10200 */

bool FUN_142b10200(longlong param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = FUN_142b10260(param_1,param_2);
  if (iVar1 != 0) {
    *(longlong *)(param_1 + 8) = param_3;
  }
  return iVar1 != 0 && param_3 != 0;
}


/* address=142b10260 name=FUN_142b10260 */

undefined8 FUN_142b10260(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_142b10830(param_1);
  }
  lVar1 = FUN_142b10890(param_2);
  if (lVar1 == 0) {
    FUN_142afa690(6,0,0x80,s_D__a_1_s_target_release_build_bo_143cb7080,0x158);
    FUN_142afa800(s_algorithm__d_143cb70e0,param_2);
    uVar2 = 0;
  }
  else {
    if (param_1 != 0) {
      *(longlong *)(param_1 + 0x10) = lVar1;
      *(undefined4 *)(param_1 + 4) = **(undefined4 **)(param_1 + 0x10);
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142b10310 name=FUN_142b10310 */

undefined8 FUN_142b10310(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    if ((*(longlong *)(param_1 + 0x10) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x98) == 0)) {
      uVar1 = 0xfffffffe;
    }
    else {
      uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x98))(param_1,param_2);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* address=142b105d0 name=FUN_142b105d0 */

void FUN_142b105d0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c4aea0(param_1,0xffffffff,0x38,1,0,param_2);
  return;
}


/* address=142b10620 name=FUN_142b10620 */

void FUN_142b10620(undefined8 param_1,undefined8 param_2)

{
  FUN_142c4aea0(param_1,0xffffffff,0x38,2,0,param_2);
  return;
}


/* address=142b107f0 name=FUN_142b107f0 */

undefined8 FUN_142b107f0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b10830 name=FUN_142b10830 */

void FUN_142b10830(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0xa0))(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* address=142b10890 name=FUN_142b10890 */

undefined * FUN_142b10890(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 6) {
    puVar1 = &DAT_1432ac7c0;
  }
  else if (param_1 == 0x74) {
    puVar1 = &DAT_1432ac660;
  }
  else if (param_1 == 0x198) {
    puVar1 = &DAT_1432ac710;
  }
  else if (param_1 == 0x3b4) {
    puVar1 = &DAT_1432ac920;
  }
  else if (param_1 == 0x3b5) {
    puVar1 = &DAT_1432ac870;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}


/* address=142b10900 name=FUN_142b10900 */

undefined8 FUN_142b10900(undefined4 *param_1)

{
  FUN_142b134e0(param_1,0,0x60);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}


/* address=142b109a0 name=FUN_142b109a0 */

undefined8 FUN_142b109a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b5f5a0(FUN_142705540,param_1,param_1 + 0x1c,0x40,param_1 + 0x5c,param_1 + 0x18,
                param_1 + 0x14,param_2,param_3);
  return 1;
}


/* address=142b10a40 name=FUN_142b10a40 */

undefined8 FUN_142b10a40(longlong param_1,undefined4 *param_2)

{
  FUN_142b5f800(FUN_142705540,param_2,param_2 + 7,0x40,param_2 + 0x17,param_2[6],param_2[5],1);
  FUN_142b135c0(param_1,*param_2);
  FUN_142b135c0(param_1 + 4,param_2[1]);
  FUN_142b135c0(param_1 + 8,param_2[2]);
  FUN_142b135c0(param_1 + 0xc,param_2[3]);
  FUN_142b135c0(param_1 + 0x10,param_2[4]);
  FUN_142b1ce70();
  return 1;
}


/* address=142b10bf0 name=FUN_142b10bf0 */

void FUN_142b10bf0(undefined8 param_1,undefined8 param_2)

{
  FUN_142705540(param_1,param_2,1);
  return;
}


/* address=142b10c30 name=FUN_142b10c30 */

undefined8 FUN_142b10c30(undefined4 *param_1)

{
  FUN_142b134e0(param_1,0,0x70);
  *param_1 = 0xc1059ed8;
  param_1[1] = 0x367cd507;
  param_1[2] = 0x3070dd17;
  param_1[3] = 0xf70e5939;
  param_1[4] = 0xffc00b31;
  param_1[5] = 0x68581511;
  param_1[6] = 0x64f98fa7;
  param_1[7] = 0xbefa4fa4;
  param_1[0x1b] = 0x1c;
  return 1;
}


/* address=142b10d10 name=FUN_142b10d10 */

void FUN_142b10d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b10f30(param_1,param_2,param_3);
  return;
}


/* address=142b10d50 name=FUN_142b10d50 */

void FUN_142b10d50(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x6c) != 0x1c) {
    FID_conflict__assert((wchar_t *)s_c_143cd0950,(wchar_t *)s_D_143cd0870,0xab);
  }
  FUN_142b65e80(param_1,0x1c,param_2);
  return;
}


/* address=142b10db0 name=FUN_142b10db0 */

void FUN_142b10db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_a8 [32];
  undefined auStack_88 [112];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_a8;
  FUN_142b10c30(auStack_88);
  FUN_142b10d10(auStack_88,param_1,param_2);
  FUN_142b10d50(param_3,auStack_88);
  FUN_142b0ec40(auStack_88,0x70);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=142b10e50 name=FUN_142b10e50 */

undefined8 FUN_142b10e50(undefined4 *param_1)

{
  FUN_142b134e0(param_1,0,0x70);
  *param_1 = 0x6a09e667;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  param_1[0x1b] = 0x20;
  return 1;
}


/* address=142b10f30 name=FUN_142b10f30 */

undefined8 FUN_142b10f30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b5f5a0(FUN_14270a140,param_1,param_1 + 0x28,0x40,param_1 + 0x68,param_1 + 0x24,
                param_1 + 0x20,param_2,param_3);
  return 1;
}


/* address=142b10fd0 name=FUN_142b10fd0 */

void FUN_142b10fd0(undefined8 param_1,longlong param_2)

{
  FUN_142b65e80(param_1,*(undefined4 *)(param_2 + 0x6c),param_2);
  return;
}


/* address=142b11010 name=FUN_142b11010 */

void FUN_142b11010(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_a8 [32];
  undefined auStack_88 [112];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_a8;
  FUN_142b10e50(auStack_88);
  FUN_142b10f30(auStack_88,param_1,param_2);
  FUN_142b10fd0(param_3,auStack_88);
  FUN_142b0ec40(auStack_88,0x70);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=142b110b0 name=FUN_142b110b0 */

void FUN_142b110b0(undefined8 param_1,undefined8 param_2)

{
  FUN_14270a140(param_1,param_2,1);
  return;
}


/* address=142b11130 name=FUN_142b11130 */

undefined8 FUN_142b11130(undefined8 *param_1)

{
  *param_1 = 0xcbbb9d5dc1059ed8;
  param_1[1] = 0x629a292a367cd507;
  param_1[2] = 0x9159015a3070dd17;
  param_1[3] = 0x152fecd8f70e5939;
  param_1[4] = 0x67332667ffc00b31;
  param_1[5] = 0x8eb44a8768581511;
  param_1[6] = 0xdb0c2e0d64f98fa7;
  param_1[7] = 0x47b5481dbefa4fa4;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x30;
  return 1;
}


/* address=142b11260 name=FUN_142b11260 */

void FUN_142b11260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b114d0(param_1,param_2,param_3);
  return;
}


/* address=142b112a0 name=FUN_142b112a0 */

void FUN_142b112a0(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0xd4) != 0x30) {
    FID_conflict__assert((wchar_t *)s_s_143cd0a80,(wchar_t *)s_D_143cd09a0,0xa7);
  }
  FUN_142b65fa0(param_1,0x30,param_2);
  return;
}


/* address=142b11300 name=FUN_142b11300 */

void FUN_142b11300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_118 [32];
  undefined auStack_f8 [224];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  FUN_142b11130(auStack_f8);
  FUN_142b11260(auStack_f8,param_1,param_2);
  FUN_142b112a0(param_3,auStack_f8);
  FUN_142b0ec40(auStack_f8,0xd8);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=142b113a0 name=FUN_142b113a0 */

undefined8 FUN_142b113a0(undefined8 *param_1)

{
  *param_1 = 0x6a09e667f3bcc908;
  param_1[1] = 0xbb67ae8584caa73b;
  param_1[2] = 0x3c6ef372fe94f82b;
  param_1[3] = 0xa54ff53a5f1d36f1;
  param_1[4] = 0x510e527fade682d1;
  param_1[5] = 0x9b05688c2b3e6c1f;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[7] = 0x5be0cd19137e2179;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x40;
  return 1;
}


/* address=142b114d0 name=FUN_142b114d0 */

undefined8 FUN_142b114d0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uStackX_18;
  longlong lStack_28;
  
  lVar1 = param_1 + 0x50;
  if (param_3 != 0) {
    uVar2 = *(longlong *)(param_1 + 0x40) + param_3 * 8;
    if (uVar2 < *(ulonglong *)(param_1 + 0x40)) {
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
    }
    *(ulonglong *)(param_1 + 0x48) = (param_3 >> 0x3d) + *(longlong *)(param_1 + 0x48);
    *(ulonglong *)(param_1 + 0x40) = uVar2;
    uStackX_18 = param_3;
    lStack_28 = param_2;
    if (*(int *)(param_1 + 0xd0) != 0) {
      uVar2 = 0x80 - (ulonglong)*(uint *)(param_1 + 0xd0);
      if (param_3 < uVar2) {
        FUN_142b13440(lVar1 + (ulonglong)*(uint *)(param_1 + 0xd0),param_2,param_3);
        uStackX_18._0_4_ = (int)param_3;
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + (int)uStackX_18;
        return 1;
      }
      FUN_142b13440(lVar1 + (ulonglong)*(uint *)(param_1 + 0xd0),param_2,uVar2);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      uStackX_18 = param_3 - uVar2;
      lStack_28 = param_2 + uVar2;
      FUN_14270d740(param_1,lVar1,1);
    }
    if (0x7f < uStackX_18) {
      FUN_14270d740(param_1,lStack_28,uStackX_18 / 0x80);
      lStack_28 = lStack_28 + uStackX_18;
      uStackX_18 = uStackX_18 % 0x80;
      lStack_28 = lStack_28 - uStackX_18;
    }
    if (uStackX_18 != 0) {
      FUN_142b13440(lVar1,lStack_28,uStackX_18);
      *(int *)(param_1 + 0xd0) = (int)uStackX_18;
    }
  }
  return 1;
}


/* address=142b11730 name=FUN_142b11730 */

void FUN_142b11730(undefined8 param_1,longlong param_2)

{
  FUN_142b65fa0(param_1,*(undefined4 *)(param_2 + 0xd4),param_2);
  return;
}


/* address=142b11770 name=FUN_142b11770 */

void FUN_142b11770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_118 [32];
  undefined auStack_f8 [224];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  FUN_142b113a0(auStack_f8);
  FUN_142b114d0(auStack_f8,param_1,param_2);
  FUN_142b11730(param_3,auStack_f8);
  FUN_142b0ec40(auStack_f8,0xd8);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=142b11850 name=FUN_142b11850 */

undefined8 FUN_142b11850(undefined8 *param_1)

{
  *param_1 = 0x22312194fc2bf72c;
  param_1[1] = 0x9f555fa3c84c64c2;
  param_1[2] = 0x2393b86b6f53b151;
  param_1[3] = 0x963877195940eabd;
  param_1[4] = 0x96283ee2a88effe3;
  param_1[5] = 0xbe5e1e2553863992;
  param_1[6] = 0x2b0199fc2c85b8aa;
  param_1[7] = 0xeb72ddc81c52ca2;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x20;
  return 1;
}


/* address=142b11980 name=FUN_142b11980 */

void FUN_142b11980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b114d0(param_1,param_2,param_3);
  return;
}


/* address=142b119c0 name=FUN_142b119c0 */

void FUN_142b119c0(undefined8 param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0xd4) != 0x20) {
    FID_conflict__assert((wchar_t *)s_s_143cd0bb0,(wchar_t *)s_D_143cd0ad0,0xb6);
  }
  FUN_142b65fa0(param_1,0x20,param_2);
  return;
}


/* address=142b11ad0 name=FUN_142b11ad0 */

undefined8 FUN_142b11ad0(void)

{
  return 0;
}


/* address=142b11b90 name=FUN_142b11b90 */

void FUN_142b11b90(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b46ef0();
  FUN_142b81a20(uVar1,&LAB_142b46f80);
  FUN_142b46ee0();
  return;
}


/* address=142b11bc0 name=FUN_142b11bc0 */

void FUN_142b11bc0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b470b0();
  FUN_142b81a20(uVar1,&LAB_142b47140);
  FUN_142b470a0();
  return;
}


/* address=142b11c20 name=FUN_142b11c20 */

void FUN_142b11c20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b47430();
  FUN_142b81a20(uVar1,&LAB_142b474c0);
  FUN_142b47420();
  return;
}


/* address=142b11c50 name=FUN_142b11c50 */

void FUN_142b11c50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b475f0();
  FUN_142b81a20(uVar1,&LAB_142b47680);
  FUN_142b475e0();
  return;
}


/* address=142b11ce0 name=FUN_142b11ce0 */

void FUN_142b11ce0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b47bb0();
  FUN_142b81a20(uVar1,&LAB_142b47c40);
  FUN_142b47ba0();
  return;
}


/* address=142b11d10 name=FUN_142b11d10 */

void FUN_142b11d10(undefined8 param_1)

{
  FUN_142b134e0(param_1,0,0x20);
  return;
}


/* address=142b11d40 name=FUN_142b11d40 */

longlong FUN_142b11d40(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b0e970(0x20);
  if (lVar1 != 0) {
    FUN_142b11d10(lVar1);
  }
  return lVar1;
}


/* address=142b11d80 name=FUN_142b11d80 */

undefined8 FUN_142b11d80(longlong param_1)

{
  FUN_142b0eaa0(*(undefined8 *)(param_1 + 8));
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) == 0)) {
    FID_conflict__assert((wchar_t *)s_c_143cc2090,(wchar_t *)s_D_143cc1fb0,99);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (***(code ***)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_142b11d10(param_1);
  return 1;
}


/* address=142b11e10 name=FUN_142b11e10 */

void FUN_142b11e10(longlong *param_1)

{
  FUN_142b0ec40(param_1[1],*(undefined4 *)(*param_1 + 0x2c));
  FUN_142b11d80(param_1);
  return;
}


/* address=142b11e50 name=FUN_142b11e50 */

void FUN_142b11e50(longlong param_1)

{
  if (param_1 != 0) {
    FUN_142b11d80(param_1);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142b11e90 name=FUN_142b11e90 */

undefined8 FUN_142b11e90(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lStack_18;
  longlong lStack_10;
  
  if ((param_2 == (longlong *)0x0) || ((param_2[2] == 0 && (*param_2 == 0)))) {
    FUN_142afa690(0x1d,0,100,s_D__a_1_s_target_release_build_bo_143cc2160,0x8a);
    uVar1 = 0;
  }
  else {
    lStack_18 = 0;
    if ((param_2[2] != 0) && (param_2[3] == 0)) {
      FID_conflict__assert((wchar_t *)s_i_143cc22b0,(wchar_t *)s_D_143cc21d0,0x8f);
    }
    if ((param_2[2] == 0) || (lStack_18 = (**(code **)(param_2[3] + 8))(param_2[2]), lStack_18 != 0)
       ) {
      lStack_10 = 0;
      if (*param_2 != 0) {
        if (*param_1 == *param_2) {
          lStack_10 = param_1[1];
          param_1[1] = 0;
        }
        else {
          if (*(int *)(*param_2 + 0x2c) == 0) {
            FID_conflict__assert((wchar_t *)s_i_143cc23f0,(wchar_t *)s_D_143cc2310,0x9a);
          }
          lStack_10 = FUN_142b0e970(*(undefined4 *)(*param_2 + 0x2c));
          if (lStack_10 == 0) {
            if (lStack_18 != 0) {
              (**(code **)param_2[3])(lStack_18);
            }
            return 0;
          }
        }
      }
      FUN_142b11d80(param_1);
      *param_1 = *param_2;
      param_1[1] = lStack_10;
      if (*param_2 != 0) {
        FUN_142b13440(param_1[1],param_2[1],*(undefined4 *)(*param_2 + 0x2c));
      }
      param_1[2] = lStack_18;
      param_1[3] = param_2[3];
      if ((param_1[2] != 0) && (param_1[3] == 0)) {
        FID_conflict__assert((wchar_t *)s_o_143cc2510,(wchar_t *)s_D_143cc2430,0xb4);
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* address=142b120d0 name=FUN_142b120d0 */

void FUN_142b120d0(undefined8 param_1,undefined8 param_2)

{
  FUN_142b11d80(param_1);
  FUN_142b13440(param_1,param_2,0x20);
  FUN_142b11d10(param_2);
  return;
}


/* address=142b12150 name=FUN_142b12150 */

undefined8 FUN_142b12150(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*param_1 != param_2) {
    if (*(int *)(param_2 + 0x2c) == 0) {
      FID_conflict__assert((wchar_t *)s_t_143cc2650,(wchar_t *)s_D_143cc2570,0xcd);
    }
    lVar1 = FUN_142b0e970(*(undefined4 *)(param_2 + 0x2c));
    if (lVar1 == 0) {
      return 0;
    }
    FUN_142b0eaa0(param_1[1]);
    param_1[1] = lVar1;
    *param_1 = param_2;
  }
  if ((param_1[2] != 0) && (param_1[3] == 0)) {
    FID_conflict__assert((wchar_t *)s_c_143cc2760,(wchar_t *)s_D_143cc2680,0xd8);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return 1;
}


/* address=142b12280 name=FUN_142b12280 */

undefined8 FUN_142b12280(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  return 1;
}


/* address=142b122c0 name=FUN_142b122c0 */

undefined8 FUN_142b122c0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  if (0x40 < *(uint *)(*param_1 + 4)) {
    FID_conflict__assert((wchar_t *)s_c_143cc28a0,(wchar_t *)s_D_143cc27c0,0xe9);
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*param_1 + 4);
  }
  FUN_142b0ec40(param_1[1],*(undefined4 *)(*param_1 + 0x2c));
  return 1;
}


/* address=142b123b0 name=FUN_142b123b0 */

undefined4
FUN_142b123b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uStack_38;
  undefined auStack_30 [48];
  
  FUN_142b11d10(auStack_30);
  iVar1 = FUN_142b12150(auStack_30,param_5,param_6);
  if (iVar1 != 0) {
    iVar1 = FUN_142b12280(auStack_30,param_1,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_142b122c0(auStack_30,param_3,param_4);
      if (iVar1 != 0) {
        uStack_38 = 1;
        goto LAB_142b12432;
      }
    }
  }
  uStack_38 = 0;
LAB_142b12432:
  FUN_142b11d80(auStack_30);
  return uStack_38;
}


/* address=142b12460 name=FUN_142b12460 */

undefined4 FUN_142b12460(undefined4 *param_1)

{
  return *param_1;
}


/* address=142b12480 name=FUN_142b12480 */

undefined4 FUN_142b12480(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


/* address=142b124a0 name=FUN_142b124a0 */

undefined4 FUN_142b124a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* address=142b124c0 name=FUN_142b124c0 */

undefined4 FUN_142b124c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}


/* address=142b124e0 name=FUN_142b124e0 */

undefined8 FUN_142b124e0(undefined8 *param_1)

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


/* address=142b126d0 name=FUN_142b126d0 */

undefined8
FUN_142b126d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined auStack_78 [120];
  
  FUN_142b127c0(auStack_78);
  FUN_142b1ce80();
  iVar2 = FUN_142b12960(auStack_78,param_2,param_3,param_1,0);
  if (iVar2 != 0) {
    iVar2 = FUN_142b12cc0(auStack_78,param_4,param_5);
    if (iVar2 != 0) {
      iVar2 = FUN_142b12d00(auStack_78,param_6,param_7);
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_142b12777;
      }
    }
  }
  bVar1 = false;
LAB_142b12777:
  FUN_142b1ce90();
  FUN_142b12860(auStack_78);
  if (bVar1) {
    FUN_142b1cf10(param_1);
  }
  else {
    param_6 = 0;
  }
  return param_6;
}


/* address=142b127c0 name=FUN_142b127c0 */

void FUN_142b127c0(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_142b11d10(param_1 + 5);
  FUN_142b11d10(param_1 + 9);
  FUN_142b11d10(param_1 + 1);
  return;
}


/* address=142b12860 name=FUN_142b12860 */

void FUN_142b12860(longlong param_1)

{
  FUN_142b11d80(param_1 + 0x28);
  FUN_142b11d80(param_1 + 0x48);
  FUN_142b11d80(param_1 + 8);
  FUN_142b0ec40(param_1,0x68);
  return;
}


/* address=142b12960 name=FUN_142b12960 */

void FUN_142b12960(longlong *param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  uint uStackX_18;
  longlong lStackX_20;
  undefined auStack_158 [32];
  ulonglong uStack_138;
  uint uStack_130;
  undefined4 uStack_12c;
  ulonglong uStack_128;
  ulonglong uStack_120;
  byte abStack_118 [128];
  byte abStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_158;
  uStack_12c = 0;
  FUN_142b1ce80();
  lStackX_20 = param_4;
  if (param_4 == 0) {
    lStackX_20 = *param_1;
  }
  if ((lStackX_20 != *param_1) || (param_2 != 0)) {
    uStack_138 = FUN_142b124c0(lStackX_20);
    if (0x80 < uStack_138) {
      FID_conflict__assert((wchar_t *)s_b_143cca8c0,(wchar_t *)s_D_143cca7e0,0x99);
    }
    uVar2 = FUN_142b124a0(lStackX_20);
    if (uStack_138 < uVar2) {
      FID_conflict__assert((wchar_t *)s_E_143cca9d8,(wchar_t *)s_D_143cca900,0x9a);
    }
    if (uStack_138 < param_3) {
      iVar1 = FUN_142b12150(param_1 + 1,lStackX_20,param_5);
      if (((iVar1 == 0) || (iVar1 = FUN_142b12280(param_1 + 1,param_2,param_3), iVar1 == 0)) ||
         (iVar1 = FUN_142b122c0(param_1 + 1,abStack_118,&uStack_130), iVar1 == 0))
      goto LAB_142b12c92;
    }
    else {
      if (0x80 < param_3) {
        FID_conflict__assert((wchar_t *)s_k_143ccaaf8,(wchar_t *)s_D_143ccaa20,0xa3);
      }
      FUN_142b13440(abStack_118,param_2,param_3);
      uStackX_18 = (uint)param_3;
      uStack_130 = uStackX_18;
    }
    FUN_142b134e0(abStack_118 + uStack_130,0,uStack_138 - uStack_130);
    for (uStack_128 = 0; uStack_128 < uStack_138; uStack_128 = uStack_128 + 1) {
      abStack_98[uStack_128] = abStack_118[uStack_128] ^ 0x36;
    }
    iVar1 = FUN_142b12150(param_1 + 5,lStackX_20,param_5);
    if ((iVar1 == 0) || (iVar1 = FUN_142b12280(param_1 + 5,abStack_98,uStack_138), iVar1 == 0))
    goto LAB_142b12c92;
    for (uStack_120 = 0; uStack_120 < uStack_138; uStack_120 = uStack_120 + 1) {
      abStack_98[uStack_120] = abStack_118[uStack_120] ^ 0x5c;
    }
    iVar1 = FUN_142b12150(param_1 + 9,lStackX_20,param_5);
    if ((iVar1 == 0) || (iVar1 = FUN_142b12280(param_1 + 9,abStack_98,uStack_138), iVar1 == 0))
    goto LAB_142b12c92;
    *param_1 = lStackX_20;
  }
  uStack_12c = FUN_142b11e90(param_1 + 1,param_1 + 5);
LAB_142b12c92:
  FUN_142b1ce90();
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_158);
  return;
}


/* address=142b12cc0 name=FUN_142b12cc0 */

void FUN_142b12cc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142b12280(param_1 + 8,param_2,param_3);
  return;
}


/* address=142b12d00 name=FUN_142b12d00 */

void FUN_142b12d00(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined auStack_88 [32];
  int iStack_68;
  undefined4 auStack_64 [3];
  undefined auStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_88;
  iStack_68 = 0;
  FUN_142b1ce80();
  iVar1 = FUN_142b122c0(param_1 + 1,auStack_58,auStack_64);
  if (iVar1 != 0) {
    iVar1 = FUN_142b11e90(param_1 + 1,param_1 + 9);
    if (iVar1 != 0) {
      iVar1 = FUN_142b12280(param_1 + 1,auStack_58,auStack_64[0]);
      if (iVar1 != 0) {
        iVar1 = FUN_142b122c0(param_1 + 1,param_2,param_3);
        if (iVar1 != 0) {
          iStack_68 = 1;
          goto LAB_142b12dd9;
        }
      }
    }
  }
  *param_3 = 0;
LAB_142b12dd9:
  FUN_142b1ce90();
  if (iStack_68 != 0) {
    FUN_142b1cf10(*param_1);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=142b12e20 name=FUN_142b12e20 */

void FUN_142b12e20(undefined8 *param_1)

{
  FUN_142b124a0(*param_1);
  return;
}


/* address=142b12e70 name=FUN_142b12e70 */

undefined8 FUN_142b12e70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_142b11e90(param_1 + 5,param_2 + 5);
  if (((iVar1 != 0) && (iVar1 = FUN_142b11e90(param_1 + 9,param_2 + 9), iVar1 != 0)) &&
     (iVar1 = FUN_142b11e90(param_1 + 1,param_2 + 1), iVar1 != 0)) {
    *param_1 = *param_2;
    return 1;
  }
  return 0;
}


/* address=142b12fe0 name=FUN_142b12fe0 */

undefined4 FUN_142b12fe0(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4)

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


/* address=142b13060 name=FUN_142b13060 */

ulonglong FUN_142b13060(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    FID_conflict__assert((wchar_t *)s_a_143cb7410,(wchar_t *)s_D_143cb7330,0x102);
  }
  uVar1 = param_1 + (-param_1 & param_2 - 1);
  if ((uVar1 & param_2 - 1) != 0) {
    FID_conflict__assert((wchar_t *)s___143cb7560,(wchar_t *)s_D_143cb7480,0x10a);
  }
  return uVar1;
}


/* address=142b13120 name=FUN_142b13120 */

undefined8 FUN_142b13120(undefined8 param_1)

{
  return param_1;
}


/* address=142b13140 name=FUN_142b13140 */

undefined4 FUN_142b13140(undefined4 param_1)

{
  return param_1;
}


/* address=142b13150 name=FUN_142b13150 */

longlong FUN_142b13150(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=142b13170 name=FUN_142b13170 */

void FUN_142b13170(ulonglong param_1,ulonglong param_2)

{
  FUN_142b13150(param_1 ^ (param_1 ^ param_2 | param_1 - param_2 ^ param_1));
  return;
}


/* address=142b131d0 name=FUN_142b131d0 */

ulonglong FUN_142b131d0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142b13170(param_1,param_2);
  return ~uVar1;
}


/* address=142b13200 name=FUN_142b13200 */

void FUN_142b13200(undefined8 param_1,undefined8 param_2)

{
  FUN_142b131d0(param_1,param_2);
  return;
}


/* address=142b13230 name=FUN_142b13230 */

void FUN_142b13230(ulonglong param_1)

{
  FUN_142b13150(~param_1 & param_1 - 1);
  return;
}


/* address=142b13260 name=FUN_142b13260 */

void FUN_142b13260(ulonglong param_1,ulonglong param_2)

{
  FUN_142b13230(param_1 ^ param_2);
  return;
}


/* address=142b132a0 name=FUN_142b132a0 */

void FUN_142b132a0(int param_1,int param_2)

{
  FUN_142b13260((longlong)param_1,(longlong)param_2);
  return;
}


/* address=142b132d0 name=FUN_142b132d0 */

ulonglong FUN_142b132d0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_142b13120(param_1);
  uVar2 = FUN_142b13120(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=142b13320 name=FUN_142b13320 */

void FUN_142b13320(undefined8 param_1,int param_2,int param_3)

{
  FUN_142b132d0(param_1,(longlong)param_2,(longlong)param_3);
  return;
}


/* address=142b13360 name=FUN_142b13360 */

void FUN_142b13360(undefined4 param_1)

{
  FUN_142b13140(param_1);
  return;
}


/* address=142b13380 name=FUN_142b13380 */

uint FUN_142b13380(uint param_1)

{
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}


/* address=142b133a0 name=FUN_142b133a0 */

ulonglong FUN_142b133a0(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=142b133c0 name=FUN_142b133c0 */

undefined8 FUN_142b133c0(undefined8 param_1,undefined4 param_2,longlong param_3)

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


/* address=142b13400 name=FUN_142b13400 */

int FUN_142b13400(void *param_1,void *param_2,size_t param_3)

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


/* address=142b13440 name=FUN_142b13440 */

undefined8 FUN_142b13440(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b13490 name=FUN_142b13490 */

undefined8 FUN_142b13490(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbd3c0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b134e0 name=FUN_142b134e0 */

undefined8 FUN_142b134e0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_142cbda60(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=142b13520 name=FUN_142b13520 */

undefined4 FUN_142b13520(undefined8 param_1)

{
  undefined4 auStack_18 [6];
  
  FUN_142b13440(auStack_18,param_1,4);
  return auStack_18[0];
}


/* address=142b13550 name=FUN_142b13550 */

void FUN_142b13550(undefined8 param_1,undefined4 param_2)

{
  undefined4 auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  FUN_142b13440(param_1,auStackX_10,4);
  return;
}


/* address=142b13580 name=FUN_142b13580 */

void FUN_142b13580(undefined8 param_1)

{
  undefined4 auStack_18 [6];
  
  FUN_142b13440(auStack_18,param_1,4);
  FUN_142b13380(auStack_18[0]);
  return;
}


/* address=142b135c0 name=FUN_142b135c0 */

void FUN_142b135c0(undefined8 param_1,undefined4 param_2)

{
  undefined4 auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  auStackX_10[0] = FUN_142b13380(param_2);
  FUN_142b13440(param_1,auStackX_10,4);
  return;
}


/* address=142b13600 name=FUN_142b13600 */

undefined8 FUN_142b13600(undefined8 param_1)

{
  undefined8 auStack_18 [3];
  
  FUN_142b13440(auStack_18,param_1,8);
  return auStack_18[0];
}


/* address=142b13630 name=FUN_142b13630 */

void FUN_142b13630(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  FUN_142b13440(param_1,auStackX_10,8);
  return;
}


/* address=142b13660 name=FUN_142b13660 */

void FUN_142b13660(undefined8 param_1)

{
  undefined8 auStack_18 [3];
  
  FUN_142b13440(auStack_18,param_1,8);
  FUN_142b133a0(auStack_18[0]);
  return;
}


/* address=142b136a0 name=FUN_142b136a0 */

void FUN_142b136a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  auStackX_10[0] = FUN_142b133a0(param_2);
  FUN_142b13440(param_1,auStackX_10,8);
  return;
}


/* address=142b136e0 name=FUN_142b136e0 */

undefined8 FUN_142b136e0(undefined8 param_1)

{
  undefined8 auStack_18 [3];
  
  FUN_142b13440(auStack_18,param_1,8);
  return auStack_18[0];
}


/* address=142b13710 name=FUN_142b13710 */

void FUN_142b13710(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  FUN_142b13440(param_1,auStackX_10,8);
  return;
}


/* address=142b13740 name=FUN_142b13740 */

void FUN_142b13740(undefined8 param_1)

{
  undefined8 auStack_18 [3];
  
  FUN_142b13440(auStack_18,param_1,8);
  FUN_142b133a0(auStack_18[0]);
  return;
}


/* address=142b13780 name=FUN_142b13780 */

uint FUN_142b13780(uint param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f) | param_1 >> 0x20 - (param_2 & 0x1f);
}


/* address=142b137a0 name=FUN_142b137a0 */

void FUN_142b137a0(void)

{
  return;
}


/* address=142b137b0 name=FUN_142b137b0 */

void FUN_142b137b0(void)

{
  return;
}


/* address=142b137c0 name=FUN_142b137c0 */

void FUN_142b137c0(void)

{
  return;
}


/* address=142b137d0 name=FUN_142b137d0 */

void FUN_142b137d0(void)

{
  return;
}


/* address=142b137e0 name=FUN_142b137e0 */

undefined8 FUN_142b137e0(void)

{
  return 0;
}


/* address=142b137f0 name=FUN_142b137f0 */

undefined4 * FUN_142b137f0(void)

{
  return &DAT_143d03a80;
}


/* address=142b13800 name=FUN_142b13800 */

bool FUN_142b13800(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_142b137f0();
  return (*puVar1 & 0x1000000) != 0;
}


/* address=142b13840 name=FUN_142b13840 */

bool FUN_142b13840(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_142b137f0();
  return (*puVar1 & 0x40000000) != 0;
}


/* address=142b13880 name=FUN_142b13880 */

bool FUN_142b13880(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b137f0();
  return (*(uint *)(lVar1 + 4) & 2) != 0;
}


/* address=142b138c0 name=FUN_142b138c0 */

bool FUN_142b138c0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b137f0();
  return (*(uint *)(lVar1 + 4) & 0x200) != 0;
}


/* address=142b13900 name=FUN_142b13900 */

bool FUN_142b13900(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b137f0();
  return (*(uint *)(lVar1 + 4) & 0x400000) != 0;
}


/* address=142b13940 name=FUN_142b13940 */

bool FUN_142b13940(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b137f0();
  return (*(uint *)(lVar1 + 4) & 0x2000000) != 0;
}


/* address=142b13980 name=FUN_142b13980 */

bool FUN_142b13980(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b137f0();
  return (*(uint *)(lVar1 + 4) & 0x10000000) != 0;
}


/* address=142b139c0 name=FUN_142b139c0 */

bool FUN_142b139c0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b137f0();
  return (*(uint *)(lVar1 + 4) & 0x40000000) != 0;
}


/* address=142b13a00 name=FUN_142b13a00 */

bool FUN_142b13a00(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b137f0();
  return (*(uint *)(lVar1 + 8) & 8) != 0;
}


/* address=142b13a40 name=FUN_142b13a40 */

bool FUN_142b13a40(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b137f0();
  return (*(uint *)(lVar1 + 8) & 0x20) != 0;
}


/* address=142b13a80 name=FUN_142b13a80 */

bool FUN_142b13a80(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b137f0();
  return (*(uint *)(lVar1 + 8) & 0x100) != 0;
}


/* address=142b13ac0 name=FUN_142b13ac0 */

bool FUN_142b13ac0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b137f0();
  return (*(uint *)(lVar1 + 8) & 0x80000) != 0;
}


/* address=142b13b00 name=FUN_142b13b00 */

undefined8 FUN_142b13b00(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((param_2 == 0x80) || (param_2 == 0xc0)) || (param_2 == 0x100)) {
    iVar1 = FUN_142b14930();
    if (iVar1 == 0) {
      iVar1 = FUN_142b14950();
      if (iVar1 == 0) {
        uVar2 = FUN_142b149d0(param_1,param_2,param_3);
      }
      else {
        uVar2 = FUN_1426f7090(param_1,param_2,param_3);
      }
    }
    else {
      uVar2 = FUN_1426f5fa0(param_1,param_2,param_3);
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}


/* address=142b13c40 name=FUN_142b13c40 */

void FUN_142b13c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_142b14930();
  if (iVar1 == 0) {
    iVar1 = FUN_142b14950();
    if (iVar1 == 0) {
      FUN_142b14a90(param_1,param_2,param_3);
    }
    else {
      FUN_1426f7260(param_1,param_2,param_3);
    }
  }
  else {
    FUN_1426f3d40(param_1,param_2,param_3);
  }
  return;
}


/* address=142b13cc0 name=FUN_142b13cc0 */

void FUN_142b13cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_142b14930();
  if (iVar1 == 0) {
    iVar1 = FUN_142b14950();
    if (iVar1 == 0) {
      FUN_142b14b40(param_1,param_2,param_3);
    }
    else {
      FUN_1426f7330(param_1,param_2,param_3);
    }
  }
  else {
    FUN_1426f3d90(param_1,param_2,param_3);
  }
  return;
}


/* address=142b13e60 name=FUN_142b13e60 */

void FUN_142b13e60(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    FID_conflict__assert((wchar_t *)s_i_143cb7e18,(wchar_t *)s_D_143cb7d30,0x54);
  }
  if ((param_4 != 1) && (param_4 != 0)) {
    FID_conflict__assert((wchar_t *)s___143cb7f30,(wchar_t *)s_D_143cb7e40,0x55);
  }
  if (param_4 == 1) {
    FUN_142b13c40(param_1,param_2,param_3);
  }
  else {
    FUN_142b13cc0(param_1,param_2,param_3);
  }
  FUN_142b1ce70();
  return;
}


/* address=142b14140 name=FUN_142b14140 */

void FUN_142b14140(undefined8 param_1,undefined *param_2,longlong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined *puStackX_10;
  undefined auStack_58 [32];
  uint uStack_38;
  int iStack_34;
  ulonglong uStack_30;
  ulonglong uStack_28;
  undefined auStack_20 [4];
  byte bStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  undefined auStack_18 [8];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  if (((param_5 < 0x7ffffff8) && (0xf < param_5)) && (param_5 % 8 == 0)) {
    puStackX_10 = param_2;
    if (param_2 == (undefined *)0x0) {
      puStackX_10 = &DAT_1431cd010;
    }
    FUN_142b13490(param_3 + 8,param_4,param_5);
    FUN_142b13440(auStack_20,puStackX_10,8);
    uStack_28 = param_5 / 8;
    for (uStack_38 = 0; uStack_38 < DAT_1431a7228; uStack_38 = uStack_38 + 1) {
      for (uStack_30 = 1; uStack_30 <= uStack_28; uStack_30 = uStack_30 + 1) {
        FUN_142b13440(auStack_18,param_3 + uStack_30 * 8,8);
        FUN_142b13c40(auStack_20,auStack_20,param_1);
        iStack_34 = (int)uStack_28 * uStack_38 + (int)uStack_30;
        bStack_19 = bStack_19 ^ (byte)iStack_34;
        bStack_1a = bStack_1a ^ (byte)((uint)iStack_34 >> 8);
        bStack_1b = bStack_1b ^ (byte)((uint)iStack_34 >> 0x10);
        bStack_1c = bStack_1c ^ (byte)((uint)iStack_34 >> 0x18);
        FUN_142b13440(param_3 + uStack_30 * 8,auStack_18,8);
      }
    }
    FUN_142b13440(param_3,auStack_20,8);
    FUN_142b1ce70();
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=142b14930 name=FUN_142b14930 */

void FUN_142b14930(void)

{
  FUN_142b13940();
  return;
}


/* address=142b14950 name=FUN_142b14950 */

void FUN_142b14950(void)

{
  FUN_142b138c0();
  return;
}


/* address=142b14970 name=FUN_142b14970 */

undefined FUN_142b14970(void)

{
  return 0;
}


/* address=142b149b0 name=FUN_142b149b0 */

void FUN_142b149b0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=142b149d0 name=FUN_142b149d0 */

undefined8 FUN_142b149d0(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0x80) {
    FUN_142b1c160(param_3,param_1);
    uVar1 = 0;
  }
  else if (param_2 == 0xc0) {
    FUN_142b1c340(param_3,param_1);
    uVar1 = 0;
  }
  else if (param_2 == 0x100) {
    FUN_142b1ca10(param_3,param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142b14a60 name=FUN_142b14a60 */

void FUN_142b14a60(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_142b149d0(param_1,param_2,param_3);
  return;
}


/* address=142b14a90 name=FUN_142b14a90 */

void FUN_142b14a90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined auStack_438 [32];
  undefined auStack_418 [64];
  undefined auStack_3d8 [960];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_438;
  FUN_142b1bfc0(auStack_3d8,param_3);
  FUN_142b19e10(auStack_418,param_1,1);
  FUN_142b1be00(auStack_3d8,*(undefined4 *)(param_3 + 0xf0),auStack_418);
  FUN_142b19ed0(param_2,1,auStack_418);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_438);
  return;
}


/* address=142b14b40 name=FUN_142b14b40 */

void FUN_142b14b40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined auStack_438 [32];
  undefined auStack_418 [64];
  undefined auStack_3d8 [960];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_438;
  FUN_142b1bfc0(auStack_3d8,param_3);
  FUN_142b19e10(auStack_418,param_1,1);
  FUN_142b1bee0(auStack_3d8,*(undefined4 *)(param_3 + 0xf0),auStack_418);
  FUN_142b19ed0(param_2,1,auStack_418);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_438);
  return;
}


/* address=142b14e60 name=FUN_142b14e60 */

void FUN_142b14e60(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,int param_6)

{
  longlong lStackX_8;
  longlong lStackX_10;
  undefined auStack_4f8 [32];
  ulonglong uStack_4d8;
  ulonglong uStack_4d0;
  ulonglong uStack_4c8;
  ulonglong uStack_4c0;
  longlong lStack_4b8;
  undefined auStack_4a8 [64];
  undefined auStack_468 [64];
  undefined auStack_428 [960];
  undefined auStack_68 [16];
  undefined auStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_4f8;
  if (param_3 % 0x10 != 0) {
    FID_conflict__assert((wchar_t *)s_l_143cb7b10,(wchar_t *)s_D_143cb7a30,0x4c5);
  }
  uStack_4d8 = param_3 / 0x10;
  if (uStack_4d8 != 0) {
    FUN_142b1bfc0(auStack_428,param_4);
    FUN_142cbd3c0(auStack_68,param_5,0x10);
    lStackX_8 = param_1;
    lStackX_10 = param_2;
    if (param_6 == 0) {
      while( true ) {
        if (uStack_4d8 < 4) {
          uStack_4c0 = uStack_4d8;
        }
        else {
          uStack_4c0 = 4;
        }
        uStack_4c8 = uStack_4c0;
        FUN_142cbd3c0(auStack_58,lStackX_8,uStack_4c0 * 0x10);
        FUN_142b19e10(auStack_468,lStackX_8,uStack_4c8);
        FUN_142b1bee0(auStack_428,*(undefined4 *)(param_4 + 0xf0),auStack_468);
        FUN_142b19ed0(lStackX_10,uStack_4c8,auStack_468);
        FUN_142b1cd80(lStackX_10,lStackX_10,auStack_68);
        for (uStack_4d0 = 1; uStack_4d0 < uStack_4c8; uStack_4d0 = uStack_4d0 + 1) {
          lStack_4b8 = lStackX_10 + uStack_4d0 * 0x10;
          FUN_142b1cd80(lStack_4b8,lStackX_10 + uStack_4d0 * 0x10,
                        auStack_58 + (uStack_4d0 - 1) * 0x10);
        }
        FUN_142cbd3c0(auStack_68,auStack_58 + (uStack_4c8 - 1) * 0x10,0x10);
        uStack_4d8 = uStack_4d8 - uStack_4c8;
        if (uStack_4d8 == 0) break;
        lStackX_8 = lStackX_8 + 0x40;
        lStackX_10 = lStackX_10 + 0x40;
      }
      FUN_142cbd3c0(param_5,auStack_68,0x10);
    }
    else {
      for (; uStack_4d8 != 0; uStack_4d8 = uStack_4d8 - 1) {
        FUN_142b1cd80(auStack_68,auStack_68,lStackX_8);
        FUN_142b19e10(auStack_4a8,auStack_68,1);
        FUN_142b1be00(auStack_428,*(undefined4 *)(param_4 + 0xf0),auStack_4a8);
        FUN_142b19ed0(lStackX_10,1,auStack_4a8);
        FUN_142cbd3c0(auStack_68,lStackX_10,0x10);
        lStackX_8 = lStackX_8 + 0x10;
        lStackX_10 = lStackX_10 + 0x10;
      }
      FUN_142cbd3c0(param_5,auStack_68,0x10);
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_4f8);
  return;
}


/* address=142b15200 name=FUN_142b15200 */

void FUN_142b15200(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 0x10; uStack_18 = uStack_18 + 8) {
    uVar1 = FUN_142b136e0(param_2 + uStack_18);
    uVar2 = FUN_142b136e0(param_3 + uStack_18);
    FUN_142b13710(param_1 + uStack_18,uVar1 ^ uVar2);
  }
  return;
}


/* address=142b152a0 name=FUN_142b152a0 */

void FUN_142b152a0(byte *param_1,byte *param_2,ulonglong param_3,longlong param_4,undefined8 param_5
                  ,longlong param_6,uint *param_7,code *param_8)

{
  byte *pbStackX_8;
  byte *pbStackX_10;
  ulonglong uStackX_18;
  uint uStack_18;
  
  if (((param_4 == 0) || (param_6 == 0)) || (param_7 == (uint *)0x0)) {
    FID_conflict__assert((wchar_t *)s_k_143ccb7f8,(wchar_t *)s_D_143ccb720,0x5a);
  }
  if ((param_3 != 0) && ((param_1 == (byte *)0x0 || (param_2 == (byte *)0x0)))) {
    FID_conflict__assert((wchar_t *)s_l_143ccb908,(wchar_t *)s_D_143ccb830,0x5b);
  }
  if (0xf < *param_7) {
    FID_conflict__assert((wchar_t *)s___143ccba18,(wchar_t *)s_D_143ccb940,0x5c);
  }
  uStack_18 = *param_7;
  pbStackX_8 = param_1;
  pbStackX_10 = param_2;
  for (uStackX_18 = param_3; (uStack_18 != 0 && (uStackX_18 != 0)); uStackX_18 = uStackX_18 - 1) {
    *pbStackX_10 = *pbStackX_8 ^ *(byte *)(param_6 + (ulonglong)uStack_18);
    pbStackX_10 = pbStackX_10 + 1;
    pbStackX_8 = pbStackX_8 + 1;
    uStack_18 = (uStack_18 + 1) % 0x10;
  }
  for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
    (*param_8)(param_5,param_6,param_4);
    FUN_142b60cf0(param_5);
    FUN_142b15200(pbStackX_10,pbStackX_8,param_6);
    pbStackX_10 = pbStackX_10 + 0x10;
    pbStackX_8 = pbStackX_8 + 0x10;
    uStack_18 = 0;
  }
  if (uStackX_18 != 0) {
    (*param_8)(param_5,param_6,param_4);
    FUN_142b60cf0(param_5);
    while( true ) {
      if (uStackX_18 == 0) break;
      pbStackX_10[uStack_18] = pbStackX_8[uStack_18] ^ *(byte *)(param_6 + (ulonglong)uStack_18);
      uStack_18 = uStack_18 + 1;
      uStackX_18 = uStackX_18 - 1;
    }
  }
  *param_7 = uStack_18;
  return;
}


/* address=142b154c0 name=FUN_142b154c0 */

void FUN_142b154c0(byte *param_1,byte *param_2,ulonglong param_3,longlong param_4,longlong param_5,
                  longlong param_6,uint *param_7,code *param_8)

{
  byte *pbStackX_8;
  byte *pbStackX_10;
  ulonglong uStackX_18;
  uint uStack_28;
  uint uStack_24;
  ulonglong uStack_20;
  
  if (((param_4 == 0) || (param_6 == 0)) || (param_7 == (uint *)0x0)) {
    FID_conflict__assert((wchar_t *)s_k_143ccbb08,(wchar_t *)s_D_143ccba30,0x8b);
  }
  if ((param_3 != 0) && ((param_1 == (byte *)0x0 || (param_2 == (byte *)0x0)))) {
    FID_conflict__assert((wchar_t *)s_l_143ccbc18,(wchar_t *)s_D_143ccbb40,0x8c);
  }
  if (0xf < *param_7) {
    FID_conflict__assert((wchar_t *)s___143ccbd28,(wchar_t *)s_D_143ccbc50,0x8d);
  }
  uStack_24 = *param_7;
  pbStackX_8 = param_1;
  pbStackX_10 = param_2;
  for (uStackX_18 = param_3; (uStack_24 != 0 && (uStackX_18 != 0)); uStackX_18 = uStackX_18 - 1) {
    *pbStackX_10 = *pbStackX_8 ^ *(byte *)(param_6 + (ulonglong)uStack_24);
    pbStackX_10 = pbStackX_10 + 1;
    pbStackX_8 = pbStackX_8 + 1;
    uStack_24 = (uStack_24 + 1) % 0x10;
  }
  uStack_28 = FUN_142b13580(param_5 + 0xc);
  for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 + uStack_20 * -0x10) {
    uStack_20 = uStackX_18 / 0x10;
    if (0x10000000 < uStack_20) {
      uStack_20 = 0x10000000;
    }
    uStack_28 = uStack_28 + (int)uStack_20;
    if (uStack_28 < uStack_20) {
      uStack_20 = uStack_20 - uStack_28;
      uStack_28 = 0;
    }
    (*param_8)(pbStackX_8,pbStackX_10,uStack_20,param_4,param_5);
    FUN_142b135c0(param_5 + 0xc);
    if (uStack_28 == 0) {
      FUN_142b60d60(param_5);
    }
    pbStackX_10 = pbStackX_10 + uStack_20 * 0x10;
    pbStackX_8 = pbStackX_8 + uStack_20 * 0x10;
  }
  if (uStackX_18 != 0) {
    FUN_142b134e0(param_6,0,0x10);
    (*param_8)(param_6,param_6,1,param_4,param_5);
    FUN_142b135c0(param_5 + 0xc,uStack_28 + 1);
    if (uStack_28 + 1 == 0) {
      FUN_142b60d60(param_5);
    }
    while (uStackX_18 != 0) {
      pbStackX_10[uStack_24] = pbStackX_8[uStack_24] ^ *(byte *)(param_6 + (ulonglong)uStack_24);
      uStack_24 = uStack_24 + 1;
      uStackX_18 = uStackX_18 - 1;
    }
  }
  *param_7 = uStack_24;
  return;
}


/* address=142b15810 name=FUN_142b15810 */

undefined4 FUN_142b15810(void)

{
  int iVar1;
  
  iVar1 = FUN_142b13800();
  if ((iVar1 != 0) && (iVar1 = FUN_142b13880(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142b15850 name=FUN_142b15850 */

void FUN_142b15850(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  longlong param_5)

{
  int iVar1;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  *param_4 = 0;
  uStack_18 = FUN_142b13660(param_5);
  uStack_10 = FUN_142b13660(param_5 + 8);
  iVar1 = FUN_142b15810();
  if (iVar1 == 0) {
    iVar1 = FUN_142b138c0();
    if (iVar1 == 0) {
      FUN_142b17890(param_3,&uStack_18);
      *param_1 = &LAB_142b17a10;
      *param_2 = &LAB_142b17ac0;
    }
    else {
      FUN_142b17c10(param_3,&uStack_18);
      *param_1 = &LAB_1426f8bc0;
      *param_2 = &LAB_1426f8de0;
    }
  }
  else {
    iVar1 = FUN_142b13980();
    if ((iVar1 != 0) && (iVar1 = FUN_142b13900(), iVar1 != 0)) {
      FUN_1426f8260(param_3,&uStack_18);
      *param_1 = &DAT_1426f8420;
      *param_2 = &LAB_1426f8440;
      *param_4 = 1;
      return;
    }
    FUN_1426f7840(param_3,&uStack_18);
    *param_1 = &LAB_1426f7ab0;
    *param_2 = &LAB_1426f7b80;
  }
  return;
}


/* address=142b15990 name=FUN_142b15990 */

void FUN_142b15990(longlong param_1,undefined8 param_2,code *param_3,int param_4)

{
  undefined auStack_68 [32];
  undefined *puStack_48;
  uint uStack_38;
  int iStack_34;
  longlong lStack_30;
  undefined auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_68;
  FUN_142b134e0(param_1,0,0x120);
  *(code **)(param_1 + 0x110) = param_3;
  FUN_142b134e0(auStack_28,0,0x10);
  (*param_3)(auStack_28,auStack_28,param_2);
  lStack_30 = param_1 + 0x100;
  puStack_48 = auStack_28;
  FUN_142b15850(lStack_30,param_1 + 0x108,param_1,&iStack_34);
  if ((iStack_34 == 0) || (param_4 == 0)) {
    uStack_38 = 0;
  }
  else {
    uStack_38 = 1;
  }
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xfffffffe | uStack_38;
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_68);
  return;
}


/* address=142b15ab0 name=FUN_142b15ab0 */

void FUN_142b15ab0(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lStackX_18;
  ulonglong uStackX_20;
  undefined auStack_68 [32];
  int iStack_48;
  ulonglong uStack_40;
  code *pcStack_38;
  ulonglong uStack_30;
  undefined auStack_28 [8];
  undefined auStack_20 [8];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_68;
  pcStack_38 = *(code **)(param_1 + 0x150);
  FUN_142b134e0(param_1,0,0x10);
  FUN_142b134e0(param_1 + 0x40,0,0x10);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  lStackX_18 = param_3;
  uStackX_20 = param_4;
  uVar1 = param_4;
  if (param_4 == 0xc) {
    FUN_142b13440(param_1,param_3,0xc);
    *(undefined *)(param_1 + 0xf) = 1;
    iStack_48 = 1;
  }
  else {
    for (; uStack_30 = uVar1, 0xf < uStackX_20; uStackX_20 = uStackX_20 - 0x10) {
      FUN_142b15200(param_1,param_1,lStackX_18);
      (*pcStack_38)(param_1);
      lStackX_18 = lStackX_18 + 0x10;
      uVar1 = uStack_30;
    }
    if (uStackX_20 != 0) {
      for (uStack_40 = 0; uStack_40 < uStackX_20; uStack_40 = uStack_40 + 1) {
        *(byte *)(param_1 + uStack_40) =
             *(byte *)(param_1 + uStack_40) ^ *(byte *)(lStackX_18 + uStack_40);
      }
      (*pcStack_38)(param_1,param_1 + 0x50);
    }
    FUN_142b134e0(auStack_28,0,8);
    FUN_142b136a0(auStack_20,uStack_30 << 3);
    FUN_142b15200(param_1,param_1,auStack_28);
    (*pcStack_38)(param_1,param_1 + 0x50);
    iStack_48 = FUN_142b13580(param_1 + 0xc);
  }
  (**(code **)(param_1 + 0x160))(param_1,param_1 + 0x20,param_2);
  iStack_48 = iStack_48 + 1;
  FUN_142b135c0(param_1 + 0xc,iStack_48);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_68);
  return;
}


/* address=142b15d50 name=FUN_142b15d50 */

undefined8 FUN_142b15d50(longlong param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte *pbStackX_10;
  ulonglong uStackX_18;
  uint uStack_38;
  ulonglong uStack_30;
  
  pcVar1 = *(code **)(param_1 + 0x150);
  pcVar2 = *(code **)(param_1 + 0x158);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar3 = *(longlong *)(param_1 + 0x30) + param_3;
    if ((uVar3 < 0x2000000000000001) && (param_3 <= uVar3)) {
      *(ulonglong *)(param_1 + 0x30) = uVar3;
      uStack_38 = *(uint *)(param_1 + 0x174);
      pbStackX_10 = param_2;
      uStackX_18 = param_3;
      if (uStack_38 != 0) {
        for (; (uStack_38 != 0 && (uStackX_18 != 0)); uStackX_18 = uStackX_18 - 1) {
          *(byte *)(param_1 + 0x40 + (ulonglong)uStack_38) =
               *(byte *)(param_1 + 0x40 + (ulonglong)uStack_38) ^ *pbStackX_10;
          pbStackX_10 = pbStackX_10 + 1;
          uStack_38 = (uStack_38 + 1) % 0x10;
        }
        if (uStack_38 != 0) {
          *(uint *)(param_1 + 0x174) = uStack_38;
          return 1;
        }
        (*pcVar1)(param_1 + 0x40,param_1 + 0x50);
      }
      uVar3 = uStackX_18 & DAT_1431a6000;
      if (uVar3 != 0) {
        (*pcVar2)(param_1 + 0x40,param_1 + 0x50,pbStackX_10,uVar3);
        pbStackX_10 = pbStackX_10 + uVar3;
        uStackX_18 = uStackX_18 - uVar3;
      }
      if (uStackX_18 != 0) {
        uStack_38 = (uint)uStackX_18;
        for (uStack_30 = 0; uStack_30 < uStackX_18; uStack_30 = uStack_30 + 1) {
          *(byte *)(param_1 + uStack_30 + 0x40) =
               *(byte *)(param_1 + uStack_30 + 0x40) ^ pbStackX_10[uStack_30];
        }
      }
      *(uint *)(param_1 + 0x174) = uStack_38;
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


/* address=142b15fa0 name=FUN_142b15fa0 */

undefined8
FUN_142b15fa0(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4,ulonglong param_5)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte *pbStackX_18;
  byte *pbStackX_20;
  uint uStack_68;
  int iStack_64;
  longlong lStack_50;
  
  pcVar1 = *(code **)(param_1 + 0x160);
  pcVar2 = *(code **)(param_1 + 0x150);
  pcVar3 = *(code **)(param_1 + 0x158);
  uVar5 = *(longlong *)(param_1 + 0x38) + param_5;
  if ((uVar5 < 0xfffffffe1) && (param_5 <= uVar5)) {
    *(ulonglong *)(param_1 + 0x38) = uVar5;
    if (*(int *)(param_1 + 0x174) != 0) {
      (*pcVar2)(param_1 + 0x40,param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    uStack_68 = *(uint *)(param_1 + 0x170);
    pbStackX_18 = param_3;
    pbStackX_20 = param_4;
    if (uStack_68 != 0) {
      for (; (uStack_68 != 0 && (param_5 != 0)); param_5 = param_5 - 1) {
        *pbStackX_20 = *pbStackX_18 ^ *(byte *)(param_1 + 0x10 + (ulonglong)uStack_68);
        *(byte *)(param_1 + 0x40 + (ulonglong)uStack_68) =
             *(byte *)(param_1 + 0x40 + (ulonglong)uStack_68) ^ *pbStackX_20;
        pbStackX_20 = pbStackX_20 + 1;
        pbStackX_18 = pbStackX_18 + 1;
        uStack_68 = (uStack_68 + 1) % 0x10;
      }
      if (uStack_68 != 0) {
        *(uint *)(param_1 + 0x170) = uStack_68;
        return 1;
      }
      (*pcVar2)(param_1 + 0x40,param_1 + 0x50);
    }
    iStack_64 = FUN_142b13580(param_1 + 0xc);
    for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
      for (lStack_50 = 0xc00; lStack_50 != 0; lStack_50 = lStack_50 + -0x10) {
        (*pcVar1)(param_1,param_1 + 0x10,param_2);
        iStack_64 = iStack_64 + 1;
        FUN_142b135c0(param_1 + 0xc,iStack_64);
        FUN_142b15200(pbStackX_20,pbStackX_18,param_1 + 0x10);
        pbStackX_20 = pbStackX_20 + 0x10;
        pbStackX_18 = pbStackX_18 + 0x10;
      }
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50,pbStackX_20 + -0xc00,0xc00);
    }
    uVar5 = param_5 & DAT_1431a6000;
    if (uVar5 != 0) {
      for (; 0xf < param_5; param_5 = param_5 - 0x10) {
        (*pcVar1)(param_1,param_1 + 0x10,param_2);
        iStack_64 = iStack_64 + 1;
        FUN_142b135c0(param_1 + 0xc,iStack_64);
        FUN_142b15200(pbStackX_20,pbStackX_18,param_1 + 0x10);
        pbStackX_20 = pbStackX_20 + 0x10;
        pbStackX_18 = pbStackX_18 + 0x10;
      }
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50,(longlong)pbStackX_20 - uVar5,uVar5);
    }
    if (param_5 != 0) {
      (*pcVar1)(param_1,param_1 + 0x10,param_2);
      FUN_142b135c0(param_1 + 0xc,iStack_64 + 1);
      while (param_5 != 0) {
        bVar4 = pbStackX_18[uStack_68] ^ *(byte *)(param_1 + 0x10 + (ulonglong)uStack_68);
        pbStackX_20[uStack_68] = bVar4;
        *(byte *)(param_1 + 0x40 + (ulonglong)uStack_68) =
             *(byte *)(param_1 + 0x40 + (ulonglong)uStack_68) ^ bVar4;
        uStack_68 = uStack_68 + 1;
        param_5 = param_5 - 1;
      }
    }
    *(uint *)(param_1 + 0x170) = uStack_68;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


/* address=142b16540 name=FUN_142b16540 */

undefined8
FUN_142b16540(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4,ulonglong param_5)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte *pbStackX_18;
  byte *pbStackX_20;
  uint uStack_58;
  int iStack_50;
  longlong lStack_40;
  
  pcVar2 = *(code **)(param_1 + 0x160);
  pcVar3 = *(code **)(param_1 + 0x150);
  pcVar4 = *(code **)(param_1 + 0x158);
  uVar5 = *(longlong *)(param_1 + 0x38) + param_5;
  if ((uVar5 < 0xfffffffe1) && (param_5 <= uVar5)) {
    *(ulonglong *)(param_1 + 0x38) = uVar5;
    if (*(int *)(param_1 + 0x174) != 0) {
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    uStack_58 = *(uint *)(param_1 + 0x170);
    pbStackX_18 = param_3;
    pbStackX_20 = param_4;
    if (uStack_58 != 0) {
      for (; (uStack_58 != 0 && (param_5 != 0)); param_5 = param_5 - 1) {
        bVar1 = *pbStackX_18;
        pbStackX_18 = pbStackX_18 + 1;
        *pbStackX_20 = bVar1 ^ *(byte *)(param_1 + 0x10 + (ulonglong)uStack_58);
        pbStackX_20 = pbStackX_20 + 1;
        *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) ^ bVar1;
        uStack_58 = (uStack_58 + 1) % 0x10;
      }
      if (uStack_58 != 0) {
        *(uint *)(param_1 + 0x170) = uStack_58;
        return 1;
      }
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50);
    }
    iStack_50 = FUN_142b13580(param_1 + 0xc);
    for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
      lStack_40 = 0xc00;
      (*pcVar4)(param_1 + 0x40,param_1 + 0x50,pbStackX_18,0xc00);
      for (; lStack_40 != 0; lStack_40 = lStack_40 + -0x10) {
        (*pcVar2)(param_1,param_1 + 0x10,param_2);
        iStack_50 = iStack_50 + 1;
        FUN_142b135c0(param_1 + 0xc,iStack_50);
        FUN_142b15200(pbStackX_20,pbStackX_18,param_1 + 0x10);
        pbStackX_20 = pbStackX_20 + 0x10;
        pbStackX_18 = pbStackX_18 + 0x10;
      }
    }
    if ((param_5 & DAT_1431a6000) != 0) {
      (*pcVar4)(param_1 + 0x40,param_1 + 0x50,pbStackX_18,param_5 & DAT_1431a6000);
      for (; 0xf < param_5; param_5 = param_5 - 0x10) {
        (*pcVar2)(param_1,param_1 + 0x10,param_2);
        iStack_50 = iStack_50 + 1;
        FUN_142b135c0(param_1 + 0xc,iStack_50);
        FUN_142b15200(pbStackX_20,pbStackX_18,param_1 + 0x10);
        pbStackX_20 = pbStackX_20 + 0x10;
        pbStackX_18 = pbStackX_18 + 0x10;
      }
    }
    if (param_5 != 0) {
      (*pcVar2)(param_1,param_1 + 0x10,param_2);
      FUN_142b135c0(param_1 + 0xc,iStack_50 + 1);
      while (param_5 != 0) {
        bVar1 = pbStackX_18[uStack_58];
        *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) ^ bVar1;
        pbStackX_20[uStack_58] = bVar1 ^ *(byte *)(param_1 + 0x10 + (ulonglong)uStack_58);
        uStack_58 = uStack_58 + 1;
        param_5 = param_5 - 1;
      }
    }
    *(uint *)(param_1 + 0x170) = uStack_58;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


/* address=142b16aa0 name=FUN_142b16aa0 */

undefined8
FUN_142b16aa0(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4,ulonglong param_5,
             code *param_6)

{
  code *pcVar1;
  code *pcVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbStackX_18;
  byte *pbStackX_20;
  uint uStack_58;
  int iStack_54;
  int iStack_28;
  
  pcVar1 = *(code **)(param_1 + 0x150);
  pcVar2 = *(code **)(param_1 + 0x158);
  uVar4 = *(longlong *)(param_1 + 0x38) + param_5;
  if ((uVar4 < 0xfffffffe1) && (param_5 <= uVar4)) {
    *(ulonglong *)(param_1 + 0x38) = uVar4;
    if (*(int *)(param_1 + 0x174) != 0) {
      (*pcVar1)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    uStack_58 = *(uint *)(param_1 + 0x170);
    pbStackX_18 = param_3;
    pbStackX_20 = param_4;
    if (uStack_58 != 0) {
      for (; (uStack_58 != 0 && (param_5 != 0)); param_5 = param_5 - 1) {
        *pbStackX_20 = *pbStackX_18 ^ *(byte *)(param_1 + 0x10 + (ulonglong)uStack_58);
        *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) ^ *pbStackX_20;
        pbStackX_20 = pbStackX_20 + 1;
        pbStackX_18 = pbStackX_18 + 1;
        uStack_58 = (uStack_58 + 1) % 0x10;
      }
      if (uStack_58 != 0) {
        *(uint *)(param_1 + 0x170) = uStack_58;
        return 1;
      }
      (*pcVar1)(param_1 + 0x40);
    }
    if (((*(uint *)(param_1 + 0x168) & 1) != 0) && (param_5 != 0)) {
      lVar5 = FUN_142b60eb0(pbStackX_18,pbStackX_20,param_5,param_2,param_1,param_1 + 0x40,
                            param_1 + 0x50);
      pbStackX_18 = pbStackX_18 + lVar5;
      pbStackX_20 = pbStackX_20 + lVar5;
      param_5 = param_5 - lVar5;
    }
    iStack_54 = FUN_142b13580(param_1 + 0xc);
    for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
      (*param_6)(pbStackX_18,pbStackX_20,0xc0,param_2,param_1);
      iStack_54 = iStack_54 + 0xc0;
      FUN_142b135c0(param_1 + 0xc,iStack_54);
      (*pcVar2)(param_1 + 0x40,param_1 + 0x50,pbStackX_20,0xc00);
      pbStackX_20 = pbStackX_20 + 0xc00;
      pbStackX_18 = pbStackX_18 + 0xc00;
    }
    uVar4 = param_5 & DAT_1431a6000;
    if (uVar4 != 0) {
      (*param_6)(pbStackX_18,pbStackX_20,uVar4 / 0x10,param_2,param_1);
      iStack_28 = (int)(uVar4 / 0x10);
      iStack_54 = iStack_54 + iStack_28;
      FUN_142b135c0(param_1 + 0xc,iStack_54);
      pbStackX_18 = pbStackX_18 + uVar4;
      param_5 = param_5 - uVar4;
      (*pcVar2)(param_1 + 0x40,param_1 + 0x50,pbStackX_20,uVar4);
      pbStackX_20 = pbStackX_20 + uVar4;
    }
    if (param_5 != 0) {
      (**(code **)(param_1 + 0x160))(param_1,param_1 + 0x10,param_2);
      FUN_142b135c0(param_1 + 0xc,iStack_54 + 1);
      while (param_5 != 0) {
        bVar3 = pbStackX_18[uStack_58] ^ *(byte *)(param_1 + 0x10 + (ulonglong)uStack_58);
        pbStackX_20[uStack_58] = bVar3;
        *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) ^ bVar3;
        uStack_58 = uStack_58 + 1;
        param_5 = param_5 - 1;
      }
    }
    *(uint *)(param_1 + 0x170) = uStack_58;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


/* address=142b170b0 name=FUN_142b170b0 */

undefined8
FUN_142b170b0(longlong param_1,undefined8 param_2,byte *param_3,byte *param_4,ulonglong param_5,
             code *param_6)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbStackX_18;
  byte *pbStackX_20;
  uint uStack_58;
  int iStack_50;
  int iStack_20;
  
  pcVar2 = *(code **)(param_1 + 0x150);
  pcVar3 = *(code **)(param_1 + 0x158);
  uVar4 = *(longlong *)(param_1 + 0x38) + param_5;
  if ((uVar4 < 0xfffffffe1) && (param_5 <= uVar4)) {
    *(ulonglong *)(param_1 + 0x38) = uVar4;
    if (*(int *)(param_1 + 0x174) != 0) {
      (*pcVar2)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    uStack_58 = *(uint *)(param_1 + 0x170);
    pbStackX_18 = param_3;
    pbStackX_20 = param_4;
    if (uStack_58 != 0) {
      for (; (uStack_58 != 0 && (param_5 != 0)); param_5 = param_5 - 1) {
        bVar1 = *pbStackX_18;
        pbStackX_18 = pbStackX_18 + 1;
        *pbStackX_20 = bVar1 ^ *(byte *)(param_1 + 0x10 + (ulonglong)uStack_58);
        pbStackX_20 = pbStackX_20 + 1;
        *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) ^ bVar1;
        uStack_58 = (uStack_58 + 1) % 0x10;
      }
      if (uStack_58 != 0) {
        *(uint *)(param_1 + 0x170) = uStack_58;
        return 1;
      }
      (*pcVar2)(param_1 + 0x40);
    }
    if (((*(uint *)(param_1 + 0x168) & 1) != 0) && (param_5 != 0)) {
      lVar5 = FUN_142b60f10(pbStackX_18,pbStackX_20,param_5,param_2,param_1,param_1 + 0x40,
                            param_1 + 0x50);
      pbStackX_18 = pbStackX_18 + lVar5;
      pbStackX_20 = pbStackX_20 + lVar5;
      param_5 = param_5 - lVar5;
    }
    iStack_50 = FUN_142b13580(param_1 + 0xc);
    for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50,pbStackX_18,0xc00);
      (*param_6)(pbStackX_18,pbStackX_20,0xc0,param_2,param_1);
      iStack_50 = iStack_50 + 0xc0;
      FUN_142b135c0(param_1 + 0xc);
      pbStackX_20 = pbStackX_20 + 0xc00;
      pbStackX_18 = pbStackX_18 + 0xc00;
    }
    uVar4 = param_5 & DAT_1431a6000;
    if (uVar4 != 0) {
      (*pcVar3)(param_1 + 0x40,param_1 + 0x50,pbStackX_18,uVar4);
      (*param_6)(pbStackX_18,pbStackX_20,uVar4 / 0x10,param_2,param_1);
      iStack_20 = (int)(uVar4 / 0x10);
      iStack_50 = iStack_50 + iStack_20;
      FUN_142b135c0(param_1 + 0xc,iStack_50);
      pbStackX_20 = pbStackX_20 + uVar4;
      pbStackX_18 = pbStackX_18 + uVar4;
      param_5 = param_5 - uVar4;
    }
    if (param_5 != 0) {
      (**(code **)(param_1 + 0x160))(param_1,param_1 + 0x10,param_2);
      FUN_142b135c0(param_1 + 0xc,iStack_50 + 1);
      while (param_5 != 0) {
        bVar1 = pbStackX_18[uStack_58];
        *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) =
             *(byte *)(param_1 + 0x40 + (ulonglong)uStack_58) ^ bVar1;
        pbStackX_20[uStack_58] = bVar1 ^ *(byte *)(param_1 + 0x10 + (ulonglong)uStack_58);
        uStack_58 = uStack_58 + 1;
        param_5 = param_5 - 1;
      }
    }
    *(uint *)(param_1 + 0x170) = uStack_58;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


/* address=142b176b0 name=FUN_142b176b0 */

void FUN_142b176b0(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  undefined auStack_58 [32];
  uint uStack_38;
  code *pcStack_30;
  longlong lStack_28;
  undefined auStack_20 [8];
  undefined auStack_18 [8];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  pcStack_30 = *(code **)(param_1 + 0x150);
  if ((*(int *)(param_1 + 0x170) != 0) || (*(int *)(param_1 + 0x174) != 0)) {
    (*pcStack_30)(param_1 + 0x40,param_1 + 0x50);
  }
  FUN_142b136a0(auStack_20,*(longlong *)(param_1 + 0x30) << 3);
  FUN_142b136a0(auStack_18,*(longlong *)(param_1 + 0x38) << 3);
  FUN_142b15200(param_1 + 0x40,param_1 + 0x40,auStack_20);
  (*pcStack_30)(param_1 + 0x40,param_1 + 0x50);
  lStack_28 = param_1 + 0x40;
  FUN_142b15200(lStack_28,param_1 + 0x40,param_1 + 0x20);
  if ((param_2 != 0) && (param_3 < 0x11)) {
    iVar1 = FUN_142b0ec70(param_1 + 0x40,param_2,param_3);
    uStack_38 = (uint)(iVar1 == 0);
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=142b17820 name=FUN_142b17820 */

void FUN_142b17820(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uStack_18;
  
  FUN_142b176b0(param_1,0,0);
  uStack_18 = param_3;
  if (0x10 < param_3) {
    uStack_18 = 0x10;
  }
  FUN_142b13440(param_2,param_1 + 0x40,uStack_18);
  return;
}


/* address=142b17890 name=FUN_142b17890 */

void FUN_142b17890(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  param_1[1] = param_2[1];
  *param_1 = *param_2;
  uVar1 = *param_1;
  *param_1 = *param_1 << 1;
  *param_1 = *param_1 | param_1[1] >> 0x3f;
  param_1[1] = param_1[1] << 1;
  param_1[1] = param_1[1] ^ (longlong)uVar1 >> 0x3f & 1U;
  *param_1 = *param_1 ^ (longlong)uVar1 >> 0x3f & 0xc200000000000000U;
  return;
}


/* address=142b17c10 name=FUN_142b17c10 */

void FUN_142b17c10(undefined8 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined auStack_68 [32];
  int iStack_48;
  undefined uStack_44;
  int iStack_40;
  undefined8 *puStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  uStack_20 = DAT_143cf7840 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_30 = param_2[1];
  uStack_28 = *param_2;
  puVar2 = &uStack_30;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = *(undefined *)puVar2;
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_142b60dd0(&uStack_30);
  puVar2 = &uStack_30;
  puVar3 = param_1 + 8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = *(undefined *)puVar2;
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_142b60dd0(&uStack_30);
  puVar2 = &uStack_30;
  puVar3 = param_1 + 4;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = *(undefined *)puVar2;
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  FUN_142b60dd0(&uStack_30);
  puVar2 = &uStack_30;
  puVar3 = param_1 + 2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar3 = *(undefined *)puVar2;
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  param_1[6] = uStack_30 ^ param_1[4];
  param_1[7] = uStack_28 ^ param_1[5];
  puVar3 = param_1 + 8;
  puVar2 = &uStack_30;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar2 = *(undefined *)puVar3;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
  }
  param_1[10] = uStack_30 ^ param_1[2];
  param_1[0xb] = uStack_28 ^ param_1[3];
  param_1[0xc] = uStack_30 ^ param_1[4];
  param_1[0xd] = uStack_28 ^ param_1[5];
  param_1[0xe] = uStack_30 ^ param_1[6];
  param_1[0xf] = uStack_28 ^ param_1[7];
  puVar3 = param_1 + 0x10;
  puVar2 = &uStack_30;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined *)puVar2 = *(undefined *)puVar3;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
    puVar2 = (ulonglong *)((longlong)puVar2 + 1);
  }
  param_1[0x12] = uStack_30 ^ param_1[2];
  param_1[0x13] = uStack_28 ^ param_1[3];
  param_1[0x14] = uStack_30 ^ param_1[4];
  param_1[0x15] = uStack_28 ^ param_1[5];
  param_1[0x16] = uStack_30 ^ param_1[6];
  param_1[0x17] = uStack_28 ^ param_1[7];
  param_1[0x18] = uStack_30 ^ param_1[8];
  param_1[0x19] = uStack_28 ^ param_1[9];
  param_1[0x1a] = uStack_30 ^ param_1[10];
  param_1[0x1b] = uStack_28 ^ param_1[0xb];
  param_1[0x1c] = uStack_30 ^ param_1[0xc];
  param_1[0x1d] = uStack_28 ^ param_1[0xd];
  param_1[0x1e] = uStack_30 ^ param_1[0xe];
  param_1[0x1f] = uStack_28 ^ param_1[0xf];
  for (iStack_48 = 0; iStack_48 < 0x10; iStack_48 = iStack_48 + 1) {
    for (iStack_40 = 0; iStack_40 < iStack_48; iStack_40 = iStack_40 + 1) {
      uStack_44 = *(undefined *)((longlong)param_1 + (longlong)(iStack_48 * 0x10 + iStack_40));
      *(undefined *)((longlong)param_1 + (longlong)(iStack_48 * 0x10 + iStack_40)) =
           *(undefined *)((longlong)param_1 + (longlong)(iStack_40 * 0x10 + iStack_48));
      *(undefined *)((longlong)param_1 + (longlong)(iStack_40 * 0x10 + iStack_48)) = uStack_44;
    }
  }
  puStack_38 = param_1;
  FUN_142c6a7d0(uStack_20 ^ (ulonglong)auStack_68);
  return;
}


/* address=142b18250 name=FUN_142b18250 */

void FUN_142b18250(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5,code *param_6)

{
  longlong lStackX_8;
  longlong lStackX_10;
  ulonglong uStackX_18;
  ulonglong uStack_18;
  longlong lStack_10;
  
  if ((param_4 == 0) || (param_5 == 0)) {
    FID_conflict__assert((wchar_t *)s_k_143ccad38,(wchar_t *)s_D_143ccac60,0x3b);
  }
  if (param_3 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      FID_conflict__assert((wchar_t *)s_i_143ccae48,(wchar_t *)s_D_143ccad70,0x41);
    }
    lStack_10 = param_5;
    lStackX_8 = param_1;
    lStackX_10 = param_2;
    for (uStackX_18 = param_3; 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
      FUN_142b15200(lStackX_10,lStackX_8,lStack_10);
      (*param_6)(lStackX_10,lStackX_10,param_4);
      lStack_10 = lStackX_10;
      lStackX_8 = lStackX_8 + 0x10;
      lStackX_10 = lStackX_10 + 0x10;
    }
    for (; uStackX_18 != 0; uStackX_18 = uStackX_18 - 0x10) {
      for (uStack_18 = 0; (uStack_18 < 0x10 && (uStack_18 < uStackX_18)); uStack_18 = uStack_18 + 1)
      {
        *(byte *)(lStackX_10 + uStack_18) =
             *(byte *)(lStackX_8 + uStack_18) ^ *(byte *)(lStack_10 + uStack_18);
      }
      for (; uStack_18 < 0x10; uStack_18 = uStack_18 + 1) {
        *(undefined *)(lStackX_10 + uStack_18) = *(undefined *)(lStack_10 + uStack_18);
      }
      (*param_6)(lStackX_10,lStackX_10,param_4);
      lStack_10 = lStackX_10;
      if (uStackX_18 < 0x11) break;
      lStackX_8 = lStackX_8 + 0x10;
      lStackX_10 = lStackX_10 + 0x10;
    }
    FUN_142b13440(param_5,lStack_10,0x10);
  }
  return;
}


/* address=142b18470 name=FUN_142b18470 */

void FUN_142b18470(ulonglong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5,code *param_6)

{
  ulonglong uVar1;
  ulonglong uStackX_8;
  ulonglong uStackX_10;
  ulonglong uStackX_18;
  undefined auStack_88 [32];
  ulonglong uStack_68;
  undefined uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  byte abStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_88;
  if ((param_4 == 0) || (param_5 == 0)) {
    FID_conflict__assert((wchar_t *)s_k_143ccaf58,(wchar_t *)s_D_143ccae80,100);
  }
  if (param_3 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      FID_conflict__assert((wchar_t *)s_i_143ccb068,(wchar_t *)s_D_143ccaf90,0x6a);
    }
    uStack_58 = param_1;
    uStack_50 = param_2;
    if ((param_1 < param_2) && (param_2 < param_1 + param_3)) {
      FID_conflict__assert((wchar_t *)s_i_143ccb180,(wchar_t *)s_D_143ccb0a0,0x6f);
    }
    uStackX_8 = param_1;
    uStackX_10 = param_2;
    uStackX_18 = param_3;
    if (((uStack_58 < 0x20) || (uStack_58 - 0x20 < uStack_50)) && (uStack_50 <= uStack_58)) {
      for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
        (*param_6)(uStackX_8,abStack_28,param_4);
        for (uStack_68 = 0; uStack_68 < 0x10; uStack_68 = uStack_68 + 8) {
          uStack_38 = FUN_142b136e0(uStackX_8 + uStack_68);
          uStack_40 = FUN_142b136e0(abStack_28 + uStack_68);
          uVar1 = FUN_142b136e0(param_5 + uStack_68);
          FUN_142b13710(uStackX_10 + uStack_68,uStack_40 ^ uVar1);
          FUN_142b13710(param_5 + uStack_68,uStack_38);
        }
        uStackX_8 = uStackX_8 + 0x10;
        uStackX_10 = uStackX_10 + 0x10;
      }
    }
    else {
      uStack_48 = param_5;
      for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
        (*param_6)(uStackX_8,uStackX_10,param_4);
        FUN_142b15200(uStackX_10,uStackX_10,uStack_48);
        uStack_48 = uStackX_8;
        uStackX_8 = uStackX_8 + 0x10;
        uStackX_10 = uStackX_10 + 0x10;
      }
      FUN_142b13440(param_5,uStack_48,0x10);
    }
    for (; uStackX_18 != 0; uStackX_18 = uStackX_18 - 0x10) {
      (*param_6)(uStackX_8,abStack_28,param_4);
      for (uStack_68 = 0; (uStack_68 < 0x10 && (uStack_68 < uStackX_18)); uStack_68 = uStack_68 + 1)
      {
        uStack_60 = *(undefined *)(uStackX_8 + uStack_68);
        *(byte *)(uStackX_10 + uStack_68) = abStack_28[uStack_68] ^ *(byte *)(param_5 + uStack_68);
        *(undefined *)(param_5 + uStack_68) = uStack_60;
      }
      if (uStackX_18 < 0x11) goto LAB_142b18862;
      uStackX_8 = uStackX_8 + 0x10;
      uStackX_10 = uStackX_10 + 0x10;
    }
  }
LAB_142b188da:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_88);
  return;
LAB_142b18862:
  for (; uStack_68 < 0x10; uStack_68 = uStack_68 + 1) {
    *(undefined *)(param_5 + uStack_68) = *(undefined *)(uStackX_8 + uStack_68);
  }
  goto LAB_142b188da;
}


/* address=142b18900 name=FUN_142b18900 */

void FUN_142b18900(byte *param_1,byte *param_2,ulonglong param_3,longlong param_4,longlong param_5,
                  uint *param_6,code *param_7)

{
  byte *pbStackX_8;
  byte *pbStackX_10;
  ulonglong uStackX_18;
  uint uStack_18;
  
  if (((param_4 == 0) || (param_5 == 0)) || (param_6 == (uint *)0x0)) {
    FID_conflict__assert((wchar_t *)s_k_143ccbe20,(wchar_t *)s_D_143ccbd40,0x3c);
  }
  if ((param_3 != 0) && ((param_1 == (byte *)0x0 || (param_2 == (byte *)0x0)))) {
    FID_conflict__assert((wchar_t *)s_l_143ccbf60,(wchar_t *)s_D_143ccbe80,0x3d);
  }
  uStack_18 = *param_6;
  pbStackX_8 = param_1;
  pbStackX_10 = param_2;
  for (uStackX_18 = param_3; (uStack_18 != 0 && (uStackX_18 != 0)); uStackX_18 = uStackX_18 - 1) {
    *pbStackX_10 = *pbStackX_8 ^ *(byte *)(param_5 + (ulonglong)uStack_18);
    pbStackX_10 = pbStackX_10 + 1;
    pbStackX_8 = pbStackX_8 + 1;
    uStack_18 = (uStack_18 + 1) % 0x10;
  }
  for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
    (*param_7)(param_5,param_5,param_4);
    FUN_142b15200(pbStackX_10,pbStackX_8,param_5);
    pbStackX_10 = pbStackX_10 + 0x10;
    pbStackX_8 = pbStackX_8 + 0x10;
    uStack_18 = 0;
  }
  if (uStackX_18 != 0) {
    (*param_7)(param_5,param_5,param_4);
    while( true ) {
      if (uStackX_18 == 0) break;
      pbStackX_10[uStack_18] = pbStackX_8[uStack_18] ^ *(byte *)(param_5 + (ulonglong)uStack_18);
      uStack_18 = uStack_18 + 1;
      uStackX_18 = uStackX_18 - 1;
    }
  }
  *param_6 = uStack_18;
  return;
}


/* address=142b18ae0 name=FUN_142b18ae0 */

void FUN_142b18ae0(byte *param_1,byte *param_2,ulonglong param_3,longlong param_4,longlong param_5,
                  uint *param_6,int param_7,code *param_8)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbStackX_8;
  byte *pbStackX_10;
  ulonglong uStackX_18;
  uint uStack_48;
  
  if ((((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (param_4 == 0)) ||
     ((param_5 == 0 || (param_6 == (uint *)0x0)))) {
    FID_conflict__assert((wchar_t *)s_i_143ccb2c0,(wchar_t *)s_D_143ccb1e0,0x3c);
  }
  uStack_48 = *param_6;
  pbStackX_8 = param_1;
  pbStackX_10 = param_2;
  uStackX_18 = param_3;
  if (param_7 == 0) {
    for (; (uStack_48 != 0 && (uStackX_18 != 0)); uStackX_18 = uStackX_18 - 1) {
      bVar1 = *pbStackX_8;
      *pbStackX_10 = *(byte *)(param_5 + (ulonglong)uStack_48) ^ bVar1;
      pbStackX_10 = pbStackX_10 + 1;
      pbStackX_8 = pbStackX_8 + 1;
      *(byte *)(param_5 + (ulonglong)uStack_48) = bVar1;
      uStack_48 = (uStack_48 + 1) % 0x10;
    }
    for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
      (*param_8)(param_5,param_5,param_4);
      for (; uStack_48 < 0x10; uStack_48 = uStack_48 + 8) {
        uVar2 = FUN_142b136e0(pbStackX_8 + uStack_48);
        uVar3 = FUN_142b136e0(param_5 + (ulonglong)uStack_48);
        FUN_142b13710(pbStackX_10 + uStack_48,uVar3 ^ uVar2);
        FUN_142b13710(param_5 + (ulonglong)uStack_48,uVar2);
      }
      pbStackX_10 = pbStackX_10 + 0x10;
      pbStackX_8 = pbStackX_8 + 0x10;
      uStack_48 = 0;
    }
    if (uStackX_18 != 0) {
      (*param_8)(param_5,param_5,param_4);
      while( true ) {
        if (uStackX_18 == 0) break;
        bVar1 = pbStackX_8[uStack_48];
        pbStackX_10[uStack_48] = *(byte *)(param_5 + (ulonglong)uStack_48) ^ bVar1;
        *(byte *)(param_5 + (ulonglong)uStack_48) = bVar1;
        uStack_48 = uStack_48 + 1;
        uStackX_18 = uStackX_18 - 1;
      }
    }
    *param_6 = uStack_48;
  }
  else {
    for (; (uStack_48 != 0 && (uStackX_18 != 0)); uStackX_18 = uStackX_18 - 1) {
      bVar1 = *(byte *)(param_5 + (ulonglong)uStack_48) ^ *pbStackX_8;
      *(byte *)(param_5 + (ulonglong)uStack_48) = bVar1;
      *pbStackX_10 = bVar1;
      pbStackX_10 = pbStackX_10 + 1;
      pbStackX_8 = pbStackX_8 + 1;
      uStack_48 = (uStack_48 + 1) % 0x10;
    }
    for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 - 0x10) {
      (*param_8)(param_5,param_5,param_4);
      for (; uStack_48 < 0x10; uStack_48 = uStack_48 + 8) {
        uVar2 = FUN_142b136e0(param_5 + (ulonglong)uStack_48);
        uVar3 = FUN_142b136e0(pbStackX_8 + uStack_48);
        FUN_142b13710(param_5 + (ulonglong)uStack_48,uVar2 ^ uVar3);
        FUN_142b13710(pbStackX_10 + uStack_48,uVar2 ^ uVar3);
      }
      pbStackX_10 = pbStackX_10 + 0x10;
      pbStackX_8 = pbStackX_8 + 0x10;
      uStack_48 = 0;
    }
    if (uStackX_18 != 0) {
      (*param_8)(param_5,param_5,param_4);
      while( true ) {
        if (uStackX_18 == 0) break;
        bVar1 = *(byte *)(param_5 + (ulonglong)uStack_48) ^ pbStackX_8[uStack_48];
        *(byte *)(param_5 + (ulonglong)uStack_48) = bVar1;
        pbStackX_10[uStack_48] = bVar1;
        uStack_48 = uStack_48 + 1;
        uStackX_18 = uStackX_18 - 1;
      }
    }
    *param_6 = uStack_48;
  }
  return;
}


/* address=142b19620 name=FUN_142b19620 */

ulonglong FUN_142b19620(ulonglong param_1,ulonglong param_2)

{
  return param_1 & param_2;
}


/* address=142b19650 name=FUN_142b19650 */

ulonglong FUN_142b19650(ulonglong param_1,ulonglong param_2)

{
  return param_1 | param_2;
}


/* address=142b19680 name=FUN_142b19680 */

ulonglong FUN_142b19680(ulonglong param_1,ulonglong param_2)

{
  return param_1 ^ param_2;
}


/* address=142b196b0 name=FUN_142b196b0 */

ulonglong FUN_142b196b0(ulonglong param_1)

{
  return ~param_1;
}


/* address=142b196d0 name=FUN_142b196d0 */

longlong FUN_142b196d0(longlong param_1,longlong param_2)

{
  return param_1 << ((byte)(param_2 << 2) & 0x3f);
}


/* address=142b19700 name=FUN_142b19700 */

ulonglong FUN_142b19700(ulonglong param_1,longlong param_2)

{
  return param_1 >> ((byte)(param_2 << 2) & 0x3f);
}


/* address=142b19730 name=FUN_142b19730 */

void FUN_142b19730(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  if (3 < param_3) {
    FID_conflict__assert((wchar_t *)s_i_143cb7690,(wchar_t *)s_D_143cb75b0,0xef);
  }
  *(undefined8 *)(param_1 + param_3 * 8) = *param_2;
  *(undefined8 *)(param_1 + 0x20 + param_3 * 8) = param_2[1];
  return;
}


/* address=142b197c0 name=FUN_142b197c0 */

void FUN_142b197c0(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  if (3 < param_3) {
    FID_conflict__assert((wchar_t *)s_i_143cb77a0,(wchar_t *)s_D_143cb76c0,0x102);
  }
  *param_2 = *(undefined8 *)(param_1 + param_3 * 8);
  param_2[1] = *(undefined8 *)(param_1 + 0x20 + param_3 * 8);
  return;
}


/* address=142b19850 name=FUN_142b19850 */

ulonglong FUN_142b19850(ulonglong param_1,ulonglong param_2,byte param_3)

{
  param_2 = (param_1 ^ param_1 >> (param_3 & 0x3f)) & param_2;
  return param_1 ^ param_2 ^ param_2 << (param_3 & 0x3f);
}


/* address=142b198c0 name=FUN_142b198c0 */

undefined8 FUN_142b198c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b19850(param_1,0xf000f000f000f0,4);
  uVar1 = FUN_142b19850(uVar1,0xff000000ff00,8);
  uVar1 = FUN_142b19850(uVar1,0xffff0000,0x10);
  return uVar1;
}


/* address=142b19940 name=FUN_142b19940 */

undefined8 FUN_142b19940(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b19850(param_1,0xffff0000,0x10);
  uVar1 = FUN_142b19850(uVar1,0xff000000ff00,8);
  uVar1 = FUN_142b19850(uVar1,0xf000f000f000f0,4);
  return uVar1;
}


/* address=142b199c0 name=FUN_142b199c0 */

void FUN_142b199c0(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_142cbd3c0(param_1,param_2,0x10);
  uVar1 = FUN_142b198c0(*param_1);
  uVar2 = FUN_142b198c0(param_1[1]);
  *param_1 = uVar1 & 0xffffffff | uVar2 << 0x20;
  param_1[1] = uVar2 & 0xffffffff00000000 | uVar1 >> 0x20;
  return;
}


/* address=142b19a90 name=FUN_142b19a90 */

void FUN_142b19a90(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uStack_18;
  undefined8 auStack_10 [2];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uStack_18 = FUN_142b19940(uVar1 & 0xffffffff | uVar2 << 0x20);
  auStack_10[0] = FUN_142b19940(uVar2 & 0xffffffff00000000 | uVar1 >> 0x20);
  FUN_142cbd3c0(param_1,&uStack_18,8);
  FUN_142cbd3c0(param_1 + 8,auStack_10,8);
  return;
}


/* address=142b19b60 name=FUN_142b19b60 */

void FUN_142b19b60(ulonglong *param_1,ulonglong *param_2,undefined4 param_3,byte param_4)

{
  ulonglong uVar1;
  
  uVar1 = (*param_1 >> (param_4 & 0x3f) ^ *param_2) & CONCAT44(param_3,param_3);
  *param_1 = *param_1 ^ uVar1 << (param_4 & 0x3f);
  *param_2 = *param_2 ^ uVar1;
  return;
}


/* address=142b19c10 name=FUN_142b19c10 */

void FUN_142b19c10(longlong param_1)

{
  FUN_142b19b60(param_1,param_1 + 8,0x55555555,1);
  FUN_142b19b60(param_1 + 0x10,param_1 + 0x18,0x55555555,1);
  FUN_142b19b60(param_1 + 0x20,param_1 + 0x28,0x55555555,1);
  FUN_142b19b60(param_1 + 0x30,param_1 + 0x38,0x55555555,1);
  FUN_142b19b60(param_1,param_1 + 0x10,0x33333333,2);
  FUN_142b19b60(param_1 + 8,param_1 + 0x18,0x33333333,2);
  FUN_142b19b60(param_1 + 0x20,param_1 + 0x30,0x33333333,2);
  FUN_142b19b60(param_1 + 0x28,param_1 + 0x38,0x33333333,2);
  return;
}


/* address=142b19e10 name=FUN_142b19e10 */

void FUN_142b19e10(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uStack_28;
  undefined auStack_20 [32];
  
  FUN_142cbda60(param_1,0,0x40);
  if (4 < param_3) {
    FID_conflict__assert((wchar_t *)s_n_143cb78b0,(wchar_t *)s_D_143cb77d0,0x1de);
  }
  for (uStack_28 = 0; uStack_28 < param_3; uStack_28 = uStack_28 + 1) {
    FUN_142b199c0(auStack_20,param_2 + uStack_28 * 0x10);
    FUN_142b19730(param_1,auStack_20,uStack_28);
  }
  FUN_142b19c10(param_1);
  return;
}


/* address=142b19ed0 name=FUN_142b19ed0 */

void FUN_142b19ed0(longlong param_1,ulonglong param_2,undefined *param_3)

{
  longlong lVar1;
  undefined *puVar2;
  undefined auStack_a8 [32];
  ulonglong uStack_88;
  undefined auStack_80 [24];
  undefined auStack_68 [64];
  ulonglong uStack_28;
  
  uStack_28 = DAT_143cf7840 ^ (ulonglong)auStack_a8;
  puVar2 = auStack_68;
  for (lVar1 = 0x40; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_142b19c10(auStack_68);
  if (4 < param_2) {
    FID_conflict__assert((wchar_t *)s_n_143cb79e0,(wchar_t *)s_D_143cb7900,0x1ef);
  }
  for (uStack_88 = 0; uStack_88 < param_2; uStack_88 = uStack_88 + 1) {
    FUN_142b197c0(auStack_68,auStack_80,uStack_88);
    FUN_142b19a90(param_1 + uStack_88 * 0x10,auStack_80);
  }
  FUN_142c6a7d0(uStack_28 ^ (ulonglong)auStack_a8);
  return;
}


/* address=142b19fc0 name=FUN_142b19fc0 */

void FUN_142b19fc0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uStack_18;
  
  for (uStack_18 = 0; uStack_18 < 8; uStack_18 = uStack_18 + 1) {
    uVar1 = FUN_142b19680(*(undefined8 *)(param_1 + uStack_18 * 8),
                          *(undefined8 *)(param_2 + uStack_18 * 8));
    *(undefined8 *)(param_1 + uStack_18 * 8) = uVar1;
  }
  return;
}


/* address=142b1a030 name=FUN_142b1a030 */

void FUN_142b1a030(undefined8 *param_1)

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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar21 = param_1[7];
  uVar14 = param_1[6];
  uVar5 = param_1[5];
  uVar7 = param_1[4];
  uVar12 = param_1[3];
  uVar13 = param_1[2];
  uVar10 = param_1[1];
  uVar29 = *param_1;
  uVar1 = FUN_142b19680(uVar7,uVar13);
  uVar2 = FUN_142b19680(uVar21,uVar10);
  uVar3 = FUN_142b19680(uVar21,uVar7);
  uVar4 = FUN_142b19680(uVar21,uVar13);
  uVar5 = FUN_142b19680(uVar14,uVar5);
  uVar6 = FUN_142b19680(uVar5,uVar29);
  uVar7 = FUN_142b19680(uVar6,uVar7);
  uVar8 = FUN_142b19680(uVar2,uVar1);
  uVar9 = FUN_142b19680(uVar6,uVar21);
  uVar10 = FUN_142b19680(uVar6,uVar10);
  uVar11 = FUN_142b19680(uVar10,uVar4);
  uVar12 = FUN_142b19680(uVar12,uVar8);
  uVar13 = FUN_142b19680(uVar12,uVar13);
  uVar14 = FUN_142b19680(uVar12,uVar14);
  uVar12 = FUN_142b19680(uVar13,uVar29);
  uVar15 = FUN_142b19680(uVar13,uVar5);
  uVar16 = FUN_142b19680(uVar14,uVar3);
  uVar17 = FUN_142b19680(uVar29,uVar16);
  uVar18 = FUN_142b19680(uVar15,uVar16);
  uVar19 = FUN_142b19680(uVar15,uVar4);
  uVar5 = FUN_142b19680(uVar5,uVar16);
  uVar20 = FUN_142b19680(uVar2,uVar5);
  uVar21 = FUN_142b19680(uVar21,uVar5);
  uVar22 = FUN_142b19620(uVar8,uVar13);
  uVar23 = FUN_142b19620(uVar11,uVar12);
  uVar23 = FUN_142b19680(uVar23,uVar22);
  uVar24 = FUN_142b19620(uVar7,uVar29);
  uVar22 = FUN_142b19680(uVar24,uVar22);
  uVar24 = FUN_142b19620(uVar2,uVar5);
  uVar25 = FUN_142b19620(uVar10,uVar6);
  uVar25 = FUN_142b19680(uVar25,uVar24);
  uVar26 = FUN_142b19620(uVar9,uVar17);
  uVar24 = FUN_142b19680(uVar26,uVar24);
  uVar26 = FUN_142b19620(uVar3,uVar16);
  uVar27 = FUN_142b19620(uVar1,uVar18);
  uVar27 = FUN_142b19680(uVar27,uVar26);
  uVar28 = FUN_142b19620(uVar4,uVar15);
  uVar26 = FUN_142b19680(uVar28,uVar26);
  uVar23 = FUN_142b19680(uVar23,uVar27);
  uVar22 = FUN_142b19680(uVar22,uVar26);
  uVar25 = FUN_142b19680(uVar25,uVar27);
  uVar24 = FUN_142b19680(uVar24,uVar26);
  uVar14 = FUN_142b19680(uVar23,uVar14);
  uVar19 = FUN_142b19680(uVar22,uVar19);
  uVar20 = FUN_142b19680(uVar25,uVar20);
  uVar21 = FUN_142b19680(uVar24,uVar21);
  uVar22 = FUN_142b19680(uVar14,uVar19);
  uVar14 = FUN_142b19620(uVar14,uVar20);
  uVar23 = FUN_142b19680(uVar21,uVar14);
  uVar24 = FUN_142b19620(uVar22,uVar23);
  uVar24 = FUN_142b19680(uVar24,uVar19);
  uVar25 = FUN_142b19680(uVar20,uVar21);
  uVar14 = FUN_142b19680(uVar19,uVar14);
  uVar14 = FUN_142b19620(uVar14,uVar25);
  uVar14 = FUN_142b19680(uVar14,uVar21);
  uVar19 = FUN_142b19680(uVar20,uVar14);
  uVar20 = FUN_142b19680(uVar23,uVar14);
  uVar21 = FUN_142b19620(uVar21,uVar20);
  uVar19 = FUN_142b19680(uVar21,uVar19);
  uVar21 = FUN_142b19680(uVar23,uVar21);
  uVar21 = FUN_142b19620(uVar24,uVar21);
  uVar21 = FUN_142b19680(uVar22,uVar21);
  uVar20 = FUN_142b19680(uVar21,uVar19);
  uVar22 = FUN_142b19680(uVar24,uVar14);
  uVar23 = FUN_142b19680(uVar24,uVar21);
  uVar25 = FUN_142b19680(uVar14,uVar19);
  uVar26 = FUN_142b19680(uVar22,uVar20);
  uVar13 = FUN_142b19620(uVar25,uVar13);
  uVar12 = FUN_142b19620(uVar19,uVar12);
  uVar29 = FUN_142b19620(uVar14,uVar29);
  uVar5 = FUN_142b19620(uVar23,uVar5);
  uVar6 = FUN_142b19620(uVar21,uVar6);
  uVar17 = FUN_142b19620(uVar24,uVar17);
  uVar16 = FUN_142b19620(uVar22,uVar16);
  uVar18 = FUN_142b19620(uVar26,uVar18);
  uVar15 = FUN_142b19620(uVar20,uVar15);
  uVar8 = FUN_142b19620(uVar25,uVar8);
  uVar11 = FUN_142b19620(uVar19,uVar11);
  uVar14 = FUN_142b19620(uVar14,uVar7);
  uVar7 = FUN_142b19620(uVar23,uVar2);
  uVar21 = FUN_142b19620(uVar21,uVar10);
  uVar10 = FUN_142b19620(uVar24,uVar9);
  uVar2 = FUN_142b19620(uVar22,uVar3);
  uVar1 = FUN_142b19620(uVar26,uVar1);
  uVar3 = FUN_142b19620(uVar20,uVar4);
  uVar2 = FUN_142b19680(uVar2,uVar1);
  uVar14 = FUN_142b19680(uVar11,uVar14);
  uVar21 = FUN_142b19680(uVar17,uVar21);
  uVar4 = FUN_142b19680(uVar8,uVar11);
  uVar8 = FUN_142b19680(uVar29,uVar7);
  uVar29 = FUN_142b19680(uVar29,uVar17);
  uVar9 = FUN_142b19680(uVar18,uVar15);
  uVar13 = FUN_142b19680(uVar13,uVar5);
  uVar11 = FUN_142b19680(uVar16,uVar18);
  uVar1 = FUN_142b19680(uVar1,uVar3);
  uVar7 = FUN_142b19680(uVar7,uVar21);
  uVar3 = FUN_142b19680(uVar8,uVar13);
  uVar8 = FUN_142b19680(uVar6,uVar2);
  uVar5 = FUN_142b19680(uVar5,uVar11);
  uVar2 = FUN_142b19680(uVar2,uVar3);
  uVar10 = FUN_142b19680(uVar10,uVar3);
  uVar3 = FUN_142b19680(uVar9,uVar8);
  uVar4 = FUN_142b19680(uVar4,uVar8);
  uVar6 = FUN_142b19680(uVar6,uVar5);
  uVar10 = FUN_142b19680(uVar10,uVar3);
  uVar12 = FUN_142b19680(uVar12,uVar4);
  uVar5 = FUN_142b19680(uVar5,uVar4);
  uVar3 = FUN_142b196b0(uVar3);
  uVar7 = FUN_142b19680(uVar7,uVar3);
  uVar2 = FUN_142b196b0(uVar2);
  uVar21 = FUN_142b19680(uVar21,uVar2);
  uVar2 = FUN_142b19680(uVar6,uVar10);
  uVar13 = FUN_142b19680(uVar13,uVar12);
  uVar12 = FUN_142b19680(uVar29,uVar12);
  uVar14 = FUN_142b19680(uVar14,uVar10);
  uVar10 = FUN_142b196b0(uVar13);
  uVar10 = FUN_142b19680(uVar6,uVar10);
  uVar29 = FUN_142b196b0(uVar2);
  uVar29 = FUN_142b19680(uVar1,uVar29);
  *param_1 = uVar21;
  param_1[1] = uVar7;
  param_1[2] = uVar14;
  param_1[3] = uVar12;
  param_1[4] = uVar13;
  param_1[5] = uVar29;
  param_1[6] = uVar10;
  param_1[7] = uVar5;
  return;
}


/* address=142b1ae80 name=FUN_142b1ae80 */

void FUN_142b1ae80(undefined8 *param_1)

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
  
  uVar12 = *param_1;
  uVar13 = param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_1[6];
  uVar4 = param_1[7];
  uVar5 = FUN_142b19680(uVar2,uVar4);
  uVar5 = FUN_142b19680(uVar10,uVar5);
  uVar6 = FUN_142b19680(uVar3,uVar12);
  uVar6 = FUN_142b19680(uVar11,uVar6);
  uVar7 = FUN_142b19680(uVar4,uVar13);
  uVar7 = FUN_142b19680(uVar1,uVar7);
  uVar8 = FUN_142b19680(uVar12,uVar10);
  uVar8 = FUN_142b19680(uVar2,uVar8);
  uVar9 = FUN_142b19680(uVar13,uVar11);
  uVar9 = FUN_142b19680(uVar3,uVar9);
  uVar10 = FUN_142b19680(uVar10,uVar1);
  uVar10 = FUN_142b19680(uVar4,uVar10);
  uVar11 = FUN_142b19680(uVar11,uVar2);
  uVar12 = FUN_142b19680(uVar12,uVar11);
  uVar11 = FUN_142b19680(uVar1,uVar3);
  uVar13 = FUN_142b19680(uVar13,uVar11);
  uVar11 = FUN_142b196b0(uVar5);
  *param_1 = uVar11;
  param_1[1] = uVar6;
  uVar11 = FUN_142b196b0(uVar7);
  param_1[2] = uVar11;
  param_1[3] = uVar8;
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  param_1[6] = uVar12;
  param_1[7] = uVar13;
  return;
}


/* address=142b1b170 name=FUN_142b1b170 */

void FUN_142b1b170(undefined8 param_1)

{
  FUN_142b1ae80(param_1);
  FUN_142b1a030(param_1);
  FUN_142b1ae80(param_1);
  return;
}


/* address=142b1b1b0 name=FUN_142b1b1b0 */

void FUN_142b1b1b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uStack_58;
  
  for (uStack_58 = 0; uStack_58 < 8; uStack_58 = uStack_58 + 1) {
    uVar1 = FUN_142b19620(*(undefined8 *)(param_1 + uStack_58 * 8),0xf000f000f000f);
    uVar2 = FUN_142b19620(*(undefined8 *)(param_1 + uStack_58 * 8),0xf000f000f000f0);
    uVar3 = FUN_142b19620(*(undefined8 *)(param_1 + uStack_58 * 8),0xf000f000f000f00);
    uVar4 = FUN_142b19620(*(undefined8 *)(param_1 + uStack_58 * 8),0xf000f000f000f000);
    uVar5 = FUN_142b196d0(uVar2,0xc);
    uVar2 = FUN_142b19700(uVar2,4);
    uVar2 = FUN_142b19650(uVar2,uVar5);
    uVar5 = FUN_142b196d0(uVar3,8);
    uVar3 = FUN_142b19700(uVar3,8);
    uVar3 = FUN_142b19650(uVar3,uVar5);
    uVar5 = FUN_142b196d0(uVar4,4);
    uVar4 = FUN_142b19700(uVar4,0xc);
    uVar4 = FUN_142b19650(uVar4,uVar5);
    uVar3 = FUN_142b19650(uVar3,uVar4);
    uVar1 = FUN_142b19650(uVar1,uVar2);
    uVar1 = FUN_142b19650(uVar1,uVar3);
    *(undefined8 *)(param_1 + uStack_58 * 8) = uVar1;
  }
  return;
}


/* address=142b1b370 name=FUN_142b1b370 */

void FUN_142b1b370(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uStack_58;
  
  for (uStack_58 = 0; uStack_58 < 8; uStack_58 = uStack_58 + 1) {
    uVar1 = FUN_142b19620(*(undefined8 *)(param_1 + uStack_58 * 8),0xf000f000f000f);
    uVar2 = FUN_142b19620(*(undefined8 *)(param_1 + uStack_58 * 8),0xf000f000f000f0);
    uVar3 = FUN_142b19620(*(undefined8 *)(param_1 + uStack_58 * 8),0xf000f000f000f00);
    uVar4 = FUN_142b19620(*(undefined8 *)(param_1 + uStack_58 * 8),0xf000f000f000f000);
    uVar5 = FUN_142b196d0(uVar2,4);
    uVar2 = FUN_142b19700(uVar2,0xc);
    uVar2 = FUN_142b19650(uVar2,uVar5);
    uVar5 = FUN_142b196d0(uVar3,8);
    uVar3 = FUN_142b19700(uVar3,8);
    uVar3 = FUN_142b19650(uVar3,uVar5);
    uVar5 = FUN_142b196d0(uVar4,0xc);
    uVar4 = FUN_142b19700(uVar4,4);
    uVar4 = FUN_142b19650(uVar4,uVar5);
    uVar3 = FUN_142b19650(uVar3,uVar4);
    uVar1 = FUN_142b19650(uVar1,uVar2);
    uVar1 = FUN_142b19650(uVar1,uVar3);
    *(undefined8 *)(param_1 + uStack_58 * 8) = uVar1;
  }
  return;
}


/* address=142b1b530 name=FUN_142b1b530 */

ulonglong FUN_142b1b530(ulonglong param_1)

{
  return param_1 >> 4 & 0xfff0fff0fff0fff | (param_1 & 0xf000f000f000f) << 0xc;
}


/* address=142b1b570 name=FUN_142b1b570 */

ulonglong FUN_142b1b570(ulonglong param_1)

{
  return param_1 >> 8 & 0xff00ff00ff00ff | (param_1 & 0xff00ff00ff00ff) << 8;
}


/* address=142b1b5b0 name=FUN_142b1b5b0 */

void FUN_142b1b5b0(undefined8 *param_1)

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
  undefined8 uVar17;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar6 = param_1[2];
  uVar8 = param_1[3];
  uVar10 = param_1[4];
  uVar12 = param_1[5];
  uVar14 = param_1[6];
  uVar16 = param_1[7];
  uVar1 = FUN_142b1b530(uVar2);
  uVar2 = FUN_142b19680(uVar2,uVar1);
  uVar3 = FUN_142b1b530(uVar4);
  uVar4 = FUN_142b19680(uVar4,uVar3);
  uVar5 = FUN_142b1b530(uVar6);
  uVar6 = FUN_142b19680(uVar6,uVar5);
  uVar7 = FUN_142b1b530(uVar8);
  uVar8 = FUN_142b19680(uVar8,uVar7);
  uVar9 = FUN_142b1b530(uVar10);
  uVar10 = FUN_142b19680(uVar10,uVar9);
  uVar11 = FUN_142b1b530(uVar12);
  uVar12 = FUN_142b19680(uVar12,uVar11);
  uVar13 = FUN_142b1b530(uVar14);
  uVar14 = FUN_142b19680(uVar14,uVar13);
  uVar15 = FUN_142b1b530(uVar16);
  uVar16 = FUN_142b19680(uVar16,uVar15);
  uVar17 = FUN_142b1b570(uVar2);
  uVar1 = FUN_142b19680(uVar16,uVar1);
  uVar1 = FUN_142b19680(uVar1,uVar17);
  *param_1 = uVar1;
  uVar1 = FUN_142b1b570(uVar4);
  uVar1 = FUN_142b19680(uVar3,uVar1);
  uVar2 = FUN_142b19680(uVar2,uVar16);
  uVar2 = FUN_142b19680(uVar2,uVar1);
  param_1[1] = uVar2;
  uVar2 = FUN_142b1b570(uVar6);
  uVar4 = FUN_142b19680(uVar4,uVar5);
  uVar2 = FUN_142b19680(uVar4,uVar2);
  param_1[2] = uVar2;
  uVar2 = FUN_142b1b570(uVar8);
  uVar2 = FUN_142b19680(uVar7,uVar2);
  uVar4 = FUN_142b19680(uVar6,uVar16);
  uVar2 = FUN_142b19680(uVar4,uVar2);
  param_1[3] = uVar2;
  uVar2 = FUN_142b1b570(uVar10);
  uVar2 = FUN_142b19680(uVar9,uVar2);
  uVar4 = FUN_142b19680(uVar8,uVar16);
  uVar2 = FUN_142b19680(uVar4,uVar2);
  param_1[4] = uVar2;
  uVar2 = FUN_142b1b570(uVar12);
  uVar4 = FUN_142b19680(uVar10,uVar11);
  uVar2 = FUN_142b19680(uVar4,uVar2);
  param_1[5] = uVar2;
  uVar2 = FUN_142b1b570(uVar14);
  uVar4 = FUN_142b19680(uVar12,uVar13);
  uVar2 = FUN_142b19680(uVar4,uVar2);
  param_1[6] = uVar2;
  uVar2 = FUN_142b1b570(uVar16);
  uVar4 = FUN_142b19680(uVar14,uVar15);
  uVar2 = FUN_142b19680(uVar4,uVar2);
  param_1[7] = uVar2;
  return;
}


/* address=142b1ba90 name=FUN_142b1ba90 */

void FUN_142b1ba90(undefined8 *param_1)

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
  uVar7 = FUN_142b1b570(uVar15);
  uVar7 = FUN_142b19680(uVar15,uVar7);
  uVar8 = FUN_142b1b570(uVar16);
  uVar8 = FUN_142b19680(uVar16,uVar8);
  uVar9 = FUN_142b1b570(uVar1);
  uVar9 = FUN_142b19680(uVar1,uVar9);
  uVar10 = FUN_142b1b570(uVar2);
  uVar10 = FUN_142b19680(uVar2,uVar10);
  uVar11 = FUN_142b1b570(uVar3);
  uVar11 = FUN_142b19680(uVar3,uVar11);
  uVar12 = FUN_142b1b570(uVar4);
  uVar12 = FUN_142b19680(uVar4,uVar12);
  uVar13 = FUN_142b1b570(uVar5);
  uVar13 = FUN_142b19680(uVar5,uVar13);
  uVar14 = FUN_142b1b570(uVar6);
  uVar14 = FUN_142b19680(uVar6,uVar14);
  uVar15 = FUN_142b19680(uVar15,uVar13);
  *param_1 = uVar15;
  uVar15 = FUN_142b19680(uVar13,uVar14);
  uVar15 = FUN_142b19680(uVar16,uVar15);
  param_1[1] = uVar15;
  uVar15 = FUN_142b19680(uVar7,uVar14);
  uVar15 = FUN_142b19680(uVar1,uVar15);
  param_1[2] = uVar15;
  uVar15 = FUN_142b19680(uVar8,uVar13);
  uVar15 = FUN_142b19680(uVar2,uVar15);
  param_1[3] = uVar15;
  uVar15 = FUN_142b19680(uVar13,uVar14);
  uVar16 = FUN_142b19680(uVar3,uVar9);
  uVar15 = FUN_142b19680(uVar16,uVar15);
  param_1[4] = uVar15;
  uVar15 = FUN_142b19680(uVar10,uVar14);
  uVar15 = FUN_142b19680(uVar4,uVar15);
  param_1[5] = uVar15;
  uVar15 = FUN_142b19680(uVar5,uVar11);
  param_1[6] = uVar15;
  uVar15 = FUN_142b19680(uVar6,uVar12);
  param_1[7] = uVar15;
  FUN_142b1b5b0(param_1);
  return;
}


/* address=142b1be00 name=FUN_142b1be00 */

void FUN_142b1be00(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uStack_18;
  
  FUN_142b19fc0(param_3,param_1);
  for (uStack_18 = 1; uStack_18 < param_2; uStack_18 = uStack_18 + 1) {
    FUN_142b1a030(param_3);
    FUN_142b1b1b0(param_3);
    FUN_142b1b5b0(param_3);
    FUN_142b19fc0(param_3,param_1 + uStack_18 * 0x40);
  }
  FUN_142b1a030(param_3);
  FUN_142b1b1b0(param_3);
  FUN_142b19fc0(param_3,param_1 + param_2 * 0x40);
  return;
}


/* address=142b1bee0 name=FUN_142b1bee0 */

void FUN_142b1bee0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lStack_18;
  
  FUN_142b19fc0(param_3,param_1 + param_2 * 0x40);
  FUN_142b1b370(param_3);
  FUN_142b1b170(param_3);
  for (lStack_18 = param_2 + -1; lStack_18 != 0; lStack_18 = lStack_18 + -1) {
    FUN_142b19fc0(param_3,param_1 + lStack_18 * 0x40);
    FUN_142b1ba90(param_3);
    FUN_142b1b370(param_3);
    FUN_142b1b170(param_3);
  }
  FUN_142b19fc0(param_3,param_1);
  return;
}


/* address=142b1bfc0 name=FUN_142b1bfc0 */

void FUN_142b1bfc0(longlong param_1,longlong param_2)

{
  ulonglong uStack_28;
  ulonglong uStack_20;
  undefined auStack_18 [24];
  
  for (uStack_28 = 0; uStack_28 <= *(uint *)(param_2 + 0xf0); uStack_28 = uStack_28 + 1) {
    for (uStack_20 = 0; uStack_20 < 4; uStack_20 = uStack_20 + 1) {
      FUN_142cbd3c0(auStack_18,param_2 + uStack_28 * 0x10,0x10);
      FUN_142b19730(param_1 + uStack_28 * 0x40,auStack_18,uStack_20);
    }
    FUN_142b19c10(param_1 + uStack_28 * 0x40);
  }
  return;
}


/* address=142b1c0a0 name=FUN_142b1c0a0 */

byte FUN_142b1c0a0(byte param_1,longlong param_2)

{
  return (byte)((int)(uint)param_1 >> ((byte)(param_2 << 2) & 0x1f)) & 0xf;
}


/* address=142b1c0d0 name=FUN_142b1c0d0 */

void FUN_142b1c0d0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_78 [32];
  undefined auStack_58 [64];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_78;
  FUN_142cbda60(auStack_58,0,0x40);
  FUN_142b19730(auStack_58,param_2,0);
  FUN_142b19c10(auStack_58);
  FUN_142b1a030(auStack_58);
  FUN_142b19c10(auStack_58);
  FUN_142b197c0(auStack_58,param_1,0);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=142b1c160 name=FUN_142b1c160 */

void FUN_142b1c160(longlong param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uStack_40;
  ulonglong uStack_38;
  undefined8 auStack_28 [5];
  
  *(undefined4 *)(param_1 + 0xf0) = 10;
  FUN_142b199c0(auStack_28,param_2);
  FUN_142cbd3c0(param_1,auStack_28,0x10);
  for (uStack_38 = 1; uStack_38 < 0xb; uStack_38 = uStack_38 + 1) {
    FUN_142b1c0d0(auStack_28 + 2,auStack_28);
    uVar1 = (&UNK_1431ccfff)[uStack_38];
    for (uStack_40 = 0; uStack_40 < 2; uStack_40 = uStack_40 + 1) {
      uVar2 = FUN_142b1c0a0(uVar1,uStack_40);
      uVar2 = FUN_142b19680(auStack_28[uStack_40],uVar2);
      auStack_28[uStack_40] = uVar2;
      uVar2 = FUN_142b1b530(auStack_28[uStack_40 + 2]);
      uVar2 = FUN_142b19700(uVar2,0xc);
      uVar2 = FUN_142b19680(auStack_28[uStack_40],uVar2);
      auStack_28[uStack_40] = uVar2;
      uVar2 = auStack_28[uStack_40];
      uVar3 = FUN_142b196d0(uVar2,4);
      uVar3 = FUN_142b19680(auStack_28[uStack_40],uVar3);
      auStack_28[uStack_40] = uVar3;
      uVar3 = FUN_142b196d0(uVar2,8);
      uVar3 = FUN_142b19680(auStack_28[uStack_40],uVar3);
      auStack_28[uStack_40] = uVar3;
      uVar2 = FUN_142b196d0(uVar2,0xc);
      uVar2 = FUN_142b19680(auStack_28[uStack_40],uVar2);
      auStack_28[uStack_40] = uVar2;
    }
    FUN_142cbd3c0(param_1 + uStack_38 * 0x10,auStack_28,0x10);
  }
  return;
}


/* address=142b1c340 name=FUN_142b1c340 */

void FUN_142b1c340(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined auStack_b8 [32];
  undefined uStack_98;
  ulonglong uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 auStack_50 [2];
  undefined auStack_40 [16];
  undefined auStack_30 [16];
  undefined auStack_20 [16];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0xf0) = 0xc;
  puStack_80 = auStack_40;
  puStack_88 = auStack_30;
  FUN_142b199c0(puStack_80,param_2);
  FUN_142cbd3c0(param_1,puStack_80,0x10);
  puVar3 = auStack_20;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_142cbd3c0(auStack_20,param_2 + 0x10,8);
  FUN_142b199c0(puStack_88,auStack_20);
  for (uStack_70 = 0; uStack_70 < 4; uStack_70 = uStack_70 + 1) {
    FUN_142b1c0d0(auStack_50,puStack_88);
    uStack_98 = (&DAT_1431cd000)[uStack_70 * 2];
    for (uStack_78 = 0; uStack_78 < 2; uStack_78 = uStack_78 + 1) {
      uVar1 = FUN_142b1c0a0(uStack_98,uStack_78);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_80 + uStack_78 * 8),uVar1);
      uVar1 = FUN_142b196d0(uVar1,8);
      uVar1 = FUN_142b19650(*(undefined8 *)(puStack_88 + uStack_78 * 8),uVar1);
      *(undefined8 *)(puStack_88 + uStack_78 * 8) = uVar1;
      uVar1 = FUN_142b1b530(auStack_50[uStack_78]);
      uVar1 = FUN_142b196d0(uVar1,4);
      uVar1 = FUN_142b19620(uVar1,0xffff00000000);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_88 + uStack_78 * 8),uVar1);
      *(undefined8 *)(puStack_88 + uStack_78 * 8) = uVar1;
      uVar1 = FUN_142b196d0(*(undefined8 *)(puStack_88 + uStack_78 * 8),4);
      uVar1 = FUN_142b19620(uVar1,0xffff000000000000);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_88 + uStack_78 * 8),uVar1);
      *(undefined8 *)(puStack_88 + uStack_78 * 8) = uVar1;
      uVar1 = FUN_142b19700(*(undefined8 *)(puStack_80 + uStack_78 * 8),8);
      *(undefined8 *)(puStack_80 + uStack_78 * 8) = uVar1;
      uVar1 = FUN_142b196d0(*(undefined8 *)(puStack_88 + uStack_78 * 8),8);
      uVar1 = FUN_142b19650(*(undefined8 *)(puStack_80 + uStack_78 * 8),uVar1);
      *(undefined8 *)(puStack_80 + uStack_78 * 8) = uVar1;
      uVar1 = FUN_142b19700(*(undefined8 *)(puStack_88 + uStack_78 * 8),0xc);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_80 + uStack_78 * 8),uVar1);
      *(undefined8 *)(puStack_80 + uStack_78 * 8) = uVar1;
      uStack_68 = *(undefined8 *)(puStack_80 + uStack_78 * 8);
      uVar1 = FUN_142b196d0(uStack_68,4);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_80 + uStack_78 * 8),uVar1);
      *(undefined8 *)(puStack_80 + uStack_78 * 8) = uVar1;
      uVar1 = FUN_142b196d0(uStack_68,8);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_80 + uStack_78 * 8),uVar1);
      *(undefined8 *)(puStack_80 + uStack_78 * 8) = uVar1;
      uVar1 = FUN_142b196d0(uStack_68,0xc);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_80 + uStack_78 * 8),uVar1);
      *(undefined8 *)(puStack_80 + uStack_78 * 8) = uVar1;
    }
    FUN_142cbd3c0(param_1 + (uStack_70 * 0xc + 4) * 4,puStack_88,0x10);
    FUN_142cbd3c0(param_1 + (uStack_70 * 0xc + 8) * 4,puStack_80,0x10);
    FUN_142b1c0d0(auStack_50,puStack_80);
    uStack_98 = (&DAT_1431cd001)[uStack_70 * 2];
    for (uStack_90 = 0; uStack_90 < 2; uStack_90 = uStack_90 + 1) {
      uVar1 = FUN_142b19700(*(undefined8 *)(puStack_88 + uStack_90 * 8),8);
      *(undefined8 *)(puStack_88 + uStack_90 * 8) = uVar1;
      uVar1 = FUN_142b196d0(*(undefined8 *)(puStack_80 + uStack_90 * 8),8);
      uVar1 = FUN_142b19650(*(undefined8 *)(puStack_88 + uStack_90 * 8),uVar1);
      *(undefined8 *)(puStack_88 + uStack_90 * 8) = uVar1;
      uVar1 = FUN_142b1c0a0(uStack_98,uStack_90);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_88 + uStack_90 * 8),uVar1);
      *(undefined8 *)(puStack_88 + uStack_90 * 8) = uVar1;
      uVar1 = FUN_142b1b530(auStack_50[uStack_90]);
      uVar1 = FUN_142b19700(uVar1,0xc);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_88 + uStack_90 * 8),uVar1);
      *(undefined8 *)(puStack_88 + uStack_90 * 8) = uVar1;
      uStack_60 = *(undefined8 *)(puStack_88 + uStack_90 * 8);
      uVar1 = FUN_142b196d0(uStack_60,4);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_88 + uStack_90 * 8),uVar1);
      *(undefined8 *)(puStack_88 + uStack_90 * 8) = uVar1;
      uVar1 = FUN_142b196d0(uStack_60,8);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_88 + uStack_90 * 8),uVar1);
      *(undefined8 *)(puStack_88 + uStack_90 * 8) = uVar1;
      uVar1 = FUN_142b196d0(uStack_60,0xc);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_88 + uStack_90 * 8),uVar1);
      *(undefined8 *)(puStack_88 + uStack_90 * 8) = uVar1;
      uVar1 = FUN_142b19700(*(undefined8 *)(puStack_80 + uStack_90 * 8),8);
      *(undefined8 *)(puStack_80 + uStack_90 * 8) = uVar1;
      uVar1 = FUN_142b19700(*(undefined8 *)(puStack_88 + uStack_90 * 8),0xc);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_80 + uStack_90 * 8),uVar1);
      *(undefined8 *)(puStack_80 + uStack_90 * 8) = uVar1;
      uVar1 = FUN_142b196d0(*(undefined8 *)(puStack_80 + uStack_90 * 8),4);
      uVar1 = FUN_142b19680(*(undefined8 *)(puStack_80 + uStack_90 * 8),uVar1);
      *(undefined8 *)(puStack_80 + uStack_90 * 8) = uVar1;
      uVar1 = FUN_142b19620(*(undefined8 *)(puStack_80 + uStack_90 * 8),0xffffffff);
      *(undefined8 *)(puStack_80 + uStack_90 * 8) = uVar1;
    }
    FUN_142cbd3c0(param_1 + (uStack_70 * 0xc + 0xc) * 4,puStack_88,0x10);
    puStack_58 = puStack_80;
    puVar3 = puStack_88;
    puStack_88 = puStack_80;
    puStack_80 = puVar3;
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_b8);
  return;
}


/* address=142b1ca10 name=FUN_142b1ca10 */

void FUN_142b1ca10(longlong param_1,longlong param_2)

{
  undefined uVar1;
  undefined8 uVar2;
  ulonglong uStack_68;
  ulonglong uStack_58;
  ulonglong uStack_50;
  undefined8 auStack_48 [4];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 auStack_18 [3];
  
  *(undefined4 *)(param_1 + 0xf0) = 0xe;
  FUN_142b199c0(auStack_48,param_2);
  FUN_142cbd3c0(param_1,auStack_48,0x10);
  FUN_142b199c0(auStack_48 + 2,param_2 + 0x10);
  FUN_142cbd3c0(param_1 + 0x10,auStack_48 + 2,0x10);
  uStack_50 = 2;
  while( true ) {
    if (0xe < uStack_50) {
      return;
    }
    FUN_142b1c0d0(auStack_18);
    uVar1 = (&UNK_1431ccfff)[uStack_50 / 2];
    for (uStack_68 = 0; uStack_68 < 2; uStack_68 = uStack_68 + 1) {
      uVar2 = FUN_142b1c0a0(uVar1,uStack_68);
      uVar2 = FUN_142b19680(auStack_48[uStack_68],uVar2);
      auStack_48[uStack_68] = uVar2;
      uVar2 = FUN_142b1b530(auStack_18[uStack_68]);
      uVar2 = FUN_142b19700(uVar2,0xc);
      uVar2 = FUN_142b19680(auStack_48[uStack_68],uVar2);
      auStack_48[uStack_68] = uVar2;
      uStack_28 = auStack_48[uStack_68];
      uVar2 = FUN_142b196d0(uStack_28,4);
      uVar2 = FUN_142b19680(auStack_48[uStack_68],uVar2);
      auStack_48[uStack_68] = uVar2;
      uVar2 = FUN_142b196d0(uStack_28,8);
      uVar2 = FUN_142b19680(auStack_48[uStack_68],uVar2);
      auStack_48[uStack_68] = uVar2;
      uVar2 = FUN_142b196d0(uStack_28,0xc);
      uVar2 = FUN_142b19680(auStack_48[uStack_68],uVar2);
      auStack_48[uStack_68] = uVar2;
    }
    FUN_142cbd3c0(param_1 + uStack_50 * 0x10,auStack_48,0x10);
    if (uStack_50 == 0xe) break;
    FUN_142b1c0d0(auStack_18,auStack_48);
    for (uStack_58 = 0; uStack_58 < 2; uStack_58 = uStack_58 + 1) {
      uVar2 = FUN_142b19700(auStack_18[uStack_58],0xc);
      uVar2 = FUN_142b19680(auStack_48[uStack_58 + 2],uVar2);
      auStack_48[uStack_58 + 2] = uVar2;
      uStack_20 = auStack_48[uStack_58 + 2];
      uVar2 = FUN_142b196d0(uStack_20,4);
      uVar2 = FUN_142b19680(auStack_48[uStack_58 + 2],uVar2);
      auStack_48[uStack_58 + 2] = uVar2;
      uVar2 = FUN_142b196d0(uStack_20,8);
      uVar2 = FUN_142b19680(auStack_48[uStack_58 + 2],uVar2);
      auStack_48[uStack_58 + 2] = uVar2;
      uVar2 = FUN_142b196d0(uStack_20,0xc);
      uVar2 = FUN_142b19680(auStack_48[uStack_58 + 2],uVar2);
      auStack_48[uStack_58 + 2] = uVar2;
    }
    FUN_142cbd3c0(param_1 + (uStack_50 * 4 + 4) * 4,auStack_48 + 2,0x10);
    uStack_50 = uStack_50 + 2;
  }
  return;
}


/* address=142b1cd80 name=FUN_142b1cd80 */

void FUN_142b1cd80(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uStack_28;
  undefined8 uStack_20;
  undefined8 auStack_18 [3];
  
  for (uStack_28 = 0; uStack_28 < 0x10; uStack_28 = uStack_28 + 8) {
    FUN_142cbd3c0(&uStack_20,param_2 + uStack_28,8);
    FUN_142cbd3c0(auStack_18,param_3 + uStack_28,8);
    uStack_20 = FUN_142b19680(uStack_20,auStack_18[0]);
    FUN_142cbd3c0(param_1 + uStack_28,&uStack_20,8);
  }
  return;
}


/* address=142b1ce70 name=FUN_142b1ce70 */

void FUN_142b1ce70(void)

{
  return;
}


/* address=142b1ce80 name=FUN_142b1ce80 */

void FUN_142b1ce80(void)

{
  return;
}


/* address=142b1ce90 name=FUN_142b1ce90 */

void FUN_142b1ce90(void)

{
  return;
}


/* address=142b1cea0 name=FUN_142b1cea0 */

void FUN_142b1cea0(void)

{
  return;
}


/* address=142b1ceb0 name=FUN_142b1ceb0 */

void FUN_142b1ceb0(void)

{
  return;
}


/* address=142b1cec0 name=FUN_142b1cec0 */

void FUN_142b1cec0(void)

{
  return;
}


/* address=142b1ced0 name=FUN_142b1ced0 */

void FUN_142b1ced0(void)

{
  return;
}


/* address=142b1cee0 name=FUN_142b1cee0 */

void FUN_142b1cee0(void)

{
  return;
}


/* address=142b1cef0 name=FUN_142b1cef0 */

void FUN_142b1cef0(void)

{
  return;
}


/* address=142b1cf00 name=FUN_142b1cf00 */

void FUN_142b1cf00(void)

{
  return;
}


/* address=142b1cf10 name=FUN_142b1cf10 */

void FUN_142b1cf10(void)

{
  return;
}


/* address=142b1cf20 name=FUN_142b1cf20 */

void FUN_142b1cf20(void)

{
  return;
}


/* address=142b1cf30 name=FUN_142b1cf30 */

void FUN_142b1cf30(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  undefined auStack_58 [32];
  uint uStack_38;
  int iStack_34;
  longlong lStack_30;
  longlong lStack_28;
  undefined auStack_20 [4];
  byte bStack_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  undefined auStack_18 [8];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_58;
  if (((param_5 < 0x80000000) && (0x17 < param_5)) && (param_5 % 8 == 0)) {
    FUN_142b13440(auStack_20,param_4,8);
    FUN_142b13490(param_2,param_4 + 8,param_5 - 8);
    lStack_28 = param_5 / 8 - 1;
    uStack_38 = DAT_1431a7228;
    while (uStack_38 = uStack_38 - 1, uStack_38 < DAT_1431a7228) {
      for (lStack_30 = lStack_28; lStack_30 != 0; lStack_30 = lStack_30 + -1) {
        iStack_34 = (int)lStack_28 * uStack_38 + (int)lStack_30;
        bStack_19 = bStack_19 ^ (byte)iStack_34;
        bStack_1a = bStack_1a ^ (byte)((uint)iStack_34 >> 8);
        bStack_1b = bStack_1b ^ (byte)((uint)iStack_34 >> 0x10);
        bStack_1c = bStack_1c ^ (byte)((uint)iStack_34 >> 0x18);
        FUN_142b13440(auStack_18,param_2 + -8 + lStack_30 * 8,8);
        FUN_142b13cc0(auStack_20,auStack_20,param_1);
        FUN_142b13440(param_2 + -8 + lStack_30 * 8,auStack_18,8);
      }
    }
    FUN_142cbd3c0(param_3,auStack_20,8);
  }
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=142b1d190 name=FUN_142b1d190 */

longlong FUN_142b1d190(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b0e970(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_142b134e0(lVar1,0,0x18);
    *(undefined4 *)(lVar1 + 0x14) = 1;
  }
  return lVar1;
}


/* address=142b1d1e0 name=FUN_142b1d1e0 */

void FUN_142b1d1e0(undefined8 param_1)

{
  FUN_142b134e0(param_1,0,0x18);
  return;
}


/* address=142b1d210 name=FUN_142b1d210 */

void FUN_142b1d210(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
      FUN_142b0eaa0(*param_1);
    }
    if ((*(uint *)((longlong)param_1 + 0x14) & 1) == 0) {
      *param_1 = 0;
    }
    else {
      FUN_142b0eaa0(param_1);
    }
  }
  return;
}


/* address=142b1d280 name=FUN_142b1d280 */

void FUN_142b1d280(undefined8 param_1)

{
  FUN_142b1d210(param_1);
  return;
}


/* address=142b1d2a0 name=FUN_142b1d2a0 */

longlong FUN_142b1d2a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_142b1d190();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar2 = FUN_142b1d300(lVar1,param_1);
      if (lVar2 == 0) {
        FUN_142b1d210(lVar1);
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}


/* address=142b1d300 name=FUN_142b1d300 */

undefined8 * FUN_142b1d300(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (param_2 != param_1) {
    iVar1 = FUN_142b252e0(param_1,(longlong)*(int *)(param_2 + 1));
    if (iVar1 == 0) {
      param_1 = (undefined8 *)0x0;
    }
    else {
      FUN_142b13440(*param_1,*param_2,(longlong)*(int *)(param_2 + 1) << 3);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    }
  }
  return param_1;
}


/* address=142b1d400 name=FUN_142b1d400 */

void FUN_142b1d400(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b35e60();
  FUN_142b81a20(uVar1,&LAB_142b35ec0);
  FUN_142b35e50();
  return;
}


/* address=142b1d430 name=FUN_142b1d430 */

int FUN_142b1d430(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_142b25250(param_1);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_142b24f70(*(undefined8 *)(*param_1 + (longlong)(iVar1 + -1) * 8));
    iVar2 = (iVar1 + -1) * 0x40 + iVar2;
  }
  return iVar2;
}


/* address=142b1d490 name=FUN_142b1d490 */

ulonglong FUN_142b1d490(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_142b1d430(param_1);
  return (ulonglong)(iVar1 + 7) / 8;
}


/* address=142b1d4c0 name=FUN_142b1d4c0 */

void FUN_142b1d4c0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


/* address=142b1d4f0 name=FUN_142b1d4f0 */

void FUN_142b1d4f0(undefined8 param_1)

{
  FUN_142b1d520(param_1,1);
  return;
}


/* address=142b1d520 name=FUN_142b1d520 */

undefined8 FUN_142b1d520(longlong **param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_142b1d4c0(param_1);
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_142b252e0(param_1,1);
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


/* address=142b1d5d0 name=FUN_142b1d5d0 */

void FUN_142b1d5d0(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (iVar1 = FUN_142b1f5d0(param_1), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


/* address=142b1d620 name=FUN_142b1d620 */

bool FUN_142b1d620(longlong param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}


/* address=142b1d660 name=FUN_142b1d660 */

undefined8 * FUN_142b1d660(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puStackX_18;
  undefined8 *puStack_18;
  undefined4 uStack_10;
  
  puStack_18 = (undefined8 *)0x0;
  puStackX_18 = param_3;
  if ((param_3 == (undefined8 *)0x0) &&
     (puStackX_18 = (undefined8 *)FUN_142b1d190(), puStack_18 = puStackX_18,
     puStackX_18 == (undefined8 *)0x0)) {
    puStackX_18 = (undefined8 *)0x0;
  }
  else if (param_2 == 0) {
    *(undefined4 *)(puStackX_18 + 1) = 0;
  }
  else {
    uVar2 = (param_2 - 1U) / 8 + 1;
    iVar1 = FUN_142b252e0(puStackX_18,uVar2);
    if (iVar1 == 0) {
      FUN_142b1d210(puStack_18);
      puStackX_18 = (undefined8 *)0x0;
    }
    else {
      if (0x7fffffff < uVar2) {
        FID_conflict__assert((wchar_t *)s_n_143cb85d8,(wchar_t *)s_D_143cb8500,0x6f);
      }
      uStack_10 = (undefined4)uVar2;
      *(undefined4 *)(puStackX_18 + 1) = uStack_10;
      *(undefined4 *)(puStackX_18 + 2) = 0;
      FUN_142b35bf0(*puStackX_18,(longlong)*(int *)(puStackX_18 + 1),param_1,param_2);
    }
  }
  return puStackX_18;
}


/* address=142b1d780 name=FUN_142b1d780 */

undefined4 FUN_142b1d780(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_142b1d490(param_1);
  FUN_142b35d50(param_2,uVar1,*param_1,(longlong)*(int *)(param_1 + 1));
  return uVar1;
}


/* address=142b1d9a0 name=FUN_142b1d9a0 */

bool FUN_142b1d9a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_142b35ee0(*param_3,(longlong)*(int *)(param_3 + 1),param_2);
  if (iVar1 != 0) {
    FUN_142b35d50(param_1,param_2,*param_3,(longlong)*(int *)(param_3 + 1));
  }
  return iVar1 != 0;
}


/* address=142b1da70 name=FUN_142b1da70 */

undefined8 FUN_142b1da70(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_142b25250(param_1);
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


/* address=142b1dae0 name=FUN_142b1dae0 */

undefined8 * FUN_142b1dae0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_142b0e970(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    FUN_142b361b0(puVar1 + 1);
    puVar1[4] = 0;
    *(undefined *)(puVar1 + 5) = 0;
    *(undefined *)((longlong)puVar1 + 0x29) = 0;
  }
  return puVar1;
}


/* address=142b1db50 name=FUN_142b1db50 */

void FUN_142b1db50(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((param_1[4] != 0) && (*(char *)(param_1 + 5) == '\0')) {
      FID_conflict__assert((wchar_t *)s_c_143cb8910,(wchar_t *)s_D_143cb8840,0x83);
    }
    FUN_142b36440(*param_1,FUN_142b1d210);
    FUN_142b361f0(param_1 + 1);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142b1dbe0 name=FUN_142b1dbe0 */

void FUN_142b1dbe0(longlong param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (iVar1 = FUN_142b36220(param_1 + 8,*(undefined8 *)(param_1 + 0x20)), iVar1 == 0)) {
    *(undefined *)(param_1 + 0x28) = 1;
    *(undefined *)(param_1 + 0x29) = 1;
  }
  return;
}


/* address=142b1dc40 name=FUN_142b1dc40 */

undefined8 FUN_142b1dc40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(char *)((longlong)param_1 + 0x29) != '\0') {
      FUN_142afa690(3,0,0x74,s_D__a_1_s_target_release_build_bo_143cb8950,0x9b);
      *(undefined *)((longlong)param_1 + 0x29) = 0;
    }
    return 0;
  }
  if (*param_1 == 0) {
    lVar1 = FUN_142b363d0();
    *param_1 = lVar1;
    if (*param_1 == 0) {
      *(undefined *)(param_1 + 5) = 1;
      return 0;
    }
  }
  lVar1 = FUN_142b363f0(*param_1);
  if ((param_1[4] == lVar1) &&
     ((lVar1 = FUN_142b1d190(), lVar1 == 0 || (lVar2 = FUN_142b36470(*param_1,lVar1), lVar2 == 0))))
  {
    FUN_142afa690(3,0,0x74,s_D__a_1_s_target_release_build_bo_143cb89c0,0xac);
    FUN_142b1d210(lVar1);
    *(undefined *)(param_1 + 5) = 1;
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_142b36410(*param_1,param_1[4]);
    FUN_142b1d4c0(uVar3);
    param_1[4] = param_1[4] + 1;
  }
  return uVar3;
}


/* address=142b1dd90 name=FUN_142b1dd90 */

void FUN_142b1dd90(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = FUN_142b36330(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  return;
}


/* address=142b1ddd0 name=FUN_142b1ddd0 */

undefined4 FUN_142b1ddd0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lStackX_10;
  longlong lStackX_18;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == *(int *)(param_3 + 0x10)) {
    uVar2 = FUN_142b1ded0(param_1,param_2,param_3);
    *(int *)(param_1 + 0x10) = iVar1;
  }
  else {
    lStackX_10 = param_2;
    lStackX_18 = param_3;
    if (iVar1 != 0) {
      lStackX_10 = param_3;
      lStackX_18 = param_2;
    }
    iVar1 = FUN_142b1f330(lStackX_10,lStackX_18);
    if (iVar1 < 0) {
      iVar1 = FUN_142b1e200(param_1,lStackX_18,lStackX_10);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      iVar1 = FUN_142b1e200(param_1,lStackX_10,lStackX_18);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142b1ded0 name=FUN_142b1ded0 */

bool FUN_142b1ded0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_142b32ef0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_142b252a0(param_1);
  }
  return iVar1 != 0;
}


/* address=142b1df20 name=FUN_142b1df20 */

ulonglong FUN_142b1df20(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uStackX_10;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  
  if (param_2 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_142b1f5d0(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 2) == 0) {
        uStackX_10 = param_2;
        for (iStack_28 = 0; (uStackX_10 != 0 && (iStack_28 < *(int *)(param_1 + 1)));
            iStack_28 = iStack_28 + 1) {
          uVar3 = *(longlong *)(*param_1 + (longlong)iStack_28 * 8) + uStackX_10;
          *(ulonglong *)(*param_1 + (longlong)iStack_28 * 8) = uVar3;
          uStack_20 = (uint)(uVar3 < uStackX_10);
          uStackX_10 = (ulonglong)(int)uStack_20;
        }
        if ((uStackX_10 != 0) && (iStack_28 == *(int *)(param_1 + 1))) {
          iVar1 = FUN_142b252e0(param_1,(longlong)(*(int *)(param_1 + 1) + 1));
          if (iVar1 == 0) {
            return 0;
          }
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
          *(ulonglong *)(*param_1 + (longlong)iStack_28 * 8) = uStackX_10;
        }
        uVar3 = 1;
      }
      else {
        *(undefined4 *)(param_1 + 2) = 0;
        uVar2 = FUN_142b1e250(param_1,param_2);
        iVar1 = FUN_142b1f5d0(param_1);
        if (iVar1 == 0) {
          uStack_24 = (uint)(*(int *)(param_1 + 2) == 0);
          *(uint *)(param_1 + 2) = uStack_24;
        }
        uVar3 = (ulonglong)uVar2;
      }
    }
    else {
      uVar3 = FUN_142b1d520(param_1,param_2);
    }
  }
  return uVar3;
}


/* address=142b1e0c0 name=FUN_142b1e0c0 */

undefined8 FUN_142b1e0c0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lStackX_10;
  longlong lStackX_18;
  uint uStack_14;
  
  bVar3 = false;
  uStack_14 = 0;
  lStackX_10 = param_2;
  lStackX_18 = param_3;
  if (*(int *)(param_2 + 0x10) == 0) {
    if (*(int *)(param_3 + 0x10) != 0) {
      bVar3 = true;
      uStack_14 = 0;
    }
  }
  else {
    bVar3 = *(int *)(param_3 + 0x10) == 0;
    if (!bVar3) {
      lStackX_10 = param_3;
      lStackX_18 = param_2;
    }
    uStack_14 = (uint)bVar3;
  }
  if (bVar3) {
    iVar1 = FUN_142b1ded0(param_1,lStackX_10,lStackX_18);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      *(uint *)(param_1 + 0x10) = uStack_14;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_142b1f330(lStackX_10,lStackX_18);
    if (iVar1 < 0) {
      iVar1 = FUN_142b1e200(param_1,lStackX_18,lStackX_10);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      iVar1 = FUN_142b1e200(param_1,lStackX_10,lStackX_18);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142b1e200 name=FUN_142b1e200 */

bool FUN_142b1e200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_142b33060(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_142b252a0(param_1);
  }
  return iVar1 != 0;
}


/* address=142b1e250 name=FUN_142b1e250 */

int FUN_142b1e250(ulonglong **param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uStackX_10;
  int iStack_18;
  
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_142b1f5d0(param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 2) == 0) {
        iVar1 = FUN_142b25250(param_1);
        if ((iVar1 == 1) && (**param_1 < param_2)) {
          **param_1 = param_2 - **param_1;
          *(undefined4 *)(param_1 + 2) = 1;
          iVar1 = 1;
        }
        else {
          uStackX_10 = param_2;
          for (iStack_18 = 0; (*param_1)[iStack_18] < uStackX_10; iStack_18 = iStack_18 + 1) {
            (*param_1)[iStack_18] = (*param_1)[iStack_18] - uStackX_10;
            uStackX_10 = 1;
          }
          (*param_1)[iStack_18] = (*param_1)[iStack_18] - uStackX_10;
          if (((*param_1)[iStack_18] == 0) && (iStack_18 == *(int *)(param_1 + 1) + -1)) {
            *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
          }
          iVar1 = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 2) = 0;
        iVar1 = FUN_142b1df20(param_1,param_2);
        *(undefined4 *)(param_1 + 2) = 1;
      }
    }
    else {
      iVar1 = FUN_142b1d520(param_1,param_2);
      if (iVar1 != 0) {
        FUN_142b1d5d0(param_1,1);
      }
    }
  }
  return iVar1;
}


/* address=142b1e440 name=FUN_142b1e440 */

bool FUN_142b1e440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_142b3a610(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) {
    FUN_142b252a0(param_1);
  }
  return iVar1 != 0;
}


/* address=142b1e4a0 name=FUN_142b1e4a0 */

undefined8 FUN_142b1e4a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 1) != 0) {
    if (param_2 == 0) {
      FUN_142b1d4c0(param_1);
    }
    else {
      lVar2 = FUN_142b25fb0(*param_1,*param_1,(longlong)*(int *)(param_1 + 1),param_2);
      if (lVar2 != 0) {
        iVar1 = FUN_142b252e0(param_1,(longlong)(*(int *)(param_1 + 1) + 1));
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


/* address=142b1e570 name=FUN_142b1e570 */

bool FUN_142b1e570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_142b33420(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_142b252a0(param_1);
  }
  return iVar1 != 0;
}


/* address=142b1e5c0 name=FUN_142b1e5c0 */

undefined8
FUN_142b1e5c0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
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
  longlong *plStack_c0;
  int iStack_b8;
  ulonglong uStack_b0;
  int iStack_a8;
  ulonglong *puStack_a0;
  ulonglong uStack_98;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  ulonglong *puStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  longlong *plStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  undefined8 uStack_18;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  iStack_90 = FUN_142b25250(param_3);
  iStack_8c = FUN_142b25250(param_4);
  if (((0 < iStack_90) && (*(longlong *)(*param_3 + (longlong)(iStack_90 + -1) * 8) == 0)) ||
     ((0 < iStack_8c && (*(longlong *)(*param_4 + (longlong)(iStack_8c + -1) * 8) == 0)))) {
    FUN_142afa690(3,0,0x6f,s_D__a_1_s_target_release_build_bo_143cb8c50,CONCAT44(uVar12,0xd4));
    return 0;
  }
  iVar4 = FUN_142b1f5d0(param_4);
  if (iVar4 != 0) {
    FUN_142afa690(3,0,0x69,s_D__a_1_s_target_release_build_bo_143cb8cc0,CONCAT44(uVar12,0xd9));
    return 0;
  }
  FUN_142b1dbe0(param_5);
  plStack_60 = (longlong *)FUN_142b1dc40(param_5);
  plVar7 = (longlong *)FUN_142b1dc40(param_5);
  plVar8 = (longlong *)FUN_142b1dc40(param_5);
  plStack_c0 = param_1;
  if (param_1 == (longlong *)0x0) {
    plStack_c0 = (longlong *)FUN_142b1dc40(param_5);
  }
  if ((plVar8 != (longlong *)0x0) && (plStack_c0 != (longlong *)0x0)) {
    uVar9 = FUN_142b1d430(param_4);
    iVar4 = -(int)((uVar9 & 0xffffffff) % 0x40);
    iVar5 = FUN_142b1f7c0(plVar8,param_4,iVar4 + 0x40);
    if (iVar5 != 0) {
      FUN_142b252a0(plVar8);
      *(undefined4 *)(plVar8 + 2) = 0;
      iVar4 = iVar4 + 0x80;
      iVar5 = FUN_142b1f7c0(plVar7,param_3,iVar4);
      if (iVar5 != 0) {
        FUN_142b252a0(plVar7);
        *(undefined4 *)(plVar7 + 2) = 0;
        if (*(int *)(plVar8 + 1) + 1 < *(int *)(plVar7 + 1)) {
          iVar5 = FUN_142b252e0(plVar7,(longlong)(*(int *)(plVar7 + 1) + 1));
          if (iVar5 == 0) goto LAB_142b1ed9c;
          *(undefined8 *)(*plVar7 + (longlong)*(int *)(plVar7 + 1) * 8) = 0;
          *(int *)(plVar7 + 1) = *(int *)(plVar7 + 1) + 1;
        }
        else {
          iVar5 = FUN_142b252e0(plVar7,(longlong)(*(int *)(plVar8 + 1) + 2));
          if (iVar5 == 0) goto LAB_142b1ed9c;
          for (iStack_b8 = *(int *)(plVar7 + 1); iStack_b8 < *(int *)(plVar8 + 1) + 2;
              iStack_b8 = iStack_b8 + 1) {
            *(undefined8 *)(*plVar7 + (longlong)iStack_b8 * 8) = 0;
          }
          *(int *)(plVar7 + 1) = *(int *)(plVar8 + 1) + 2;
        }
        iVar5 = *(int *)(plVar8 + 1);
        iStack_88 = *(int *)(plVar7 + 1);
        iVar11 = iStack_88 - iVar5;
        uStack_40 = 0;
        lStack_50 = *plVar7 + (longlong)iVar11 * 8;
        iStack_44 = *(int *)((longlong)plVar7 + 0xc) - iVar11;
        uStack_78 = *(ulonglong *)(*plVar8 + (longlong)(iVar5 + -1) * 8);
        if (iVar5 == 1) {
          uStack_38 = 0;
        }
        else {
          uStack_38 = *(ulonglong *)(*plVar8 + (longlong)(iVar5 + -2) * 8);
        }
        uStack_58 = uStack_38;
        puStack_a0 = (ulonglong *)(*plVar7 + (longlong)(iStack_88 + -1) * 8);
        uStack_84 = *(uint *)(param_3 + 2);
        *(uint *)(plStack_c0 + 2) = uStack_84 ^ *(uint *)(param_4 + 2);
        iStack_48 = iVar5;
        iVar6 = FUN_142b252e0(plStack_c0,(longlong)(iVar11 + 1));
        if (iVar6 != 0) {
          *(int *)(plStack_c0 + 1) = iVar11 + -1;
          puStack_80 = (ulonglong *)(*plStack_c0 + (longlong)(iVar11 + -1) * 8);
          iVar6 = FUN_142b252e0(plStack_60,(longlong)(iVar5 + 1));
          if (iVar6 != 0) {
            if (*(int *)(plStack_c0 + 1) == 0) {
              *(undefined4 *)(plStack_c0 + 2) = 0;
            }
            else {
              puStack_80 = puStack_80 + -1;
            }
            for (iStack_a8 = 0; auVar3._8_8_ = uStack_70, auVar3._0_8_ = uStack_68,
                iStack_a8 < iVar11 + -1; iStack_a8 = iStack_a8 + 1) {
              uStack_98 = 0;
              uStack_30 = *puStack_a0;
              uStack_28 = puStack_a0[-1];
              if (uStack_30 == uStack_78) {
                uStack_b0 = 0xffffffffffffffff;
              }
              else {
                FUN_142b36870(&uStack_b0,&uStack_98,uStack_30,uStack_28,uStack_78);
                uStack_20 = uStack_58;
                auVar1._8_8_ = 0;
                auVar1._0_8_ = uStack_b0;
                auVar2._8_8_ = 0;
                auVar2._0_8_ = uStack_58;
                auVar3 = auVar1 * auVar2;
                while( true ) {
                  uStack_70 = auVar3._8_8_;
                  uStack_68 = auVar3._0_8_;
                  if ((uStack_70 < uStack_98) ||
                     ((uStack_70 == uStack_98 && (uStack_68 <= puStack_a0[-2])))) break;
                  uStack_b0 = uStack_b0 - 1;
                  uStack_98 = uStack_98 + uStack_78;
                  if (uStack_98 < uStack_78) break;
                  if (uStack_68 < uStack_58) {
                    uStack_70 = uStack_70 - 1;
                  }
                  auVar3._8_8_ = uStack_70;
                  auVar3._0_8_ = uStack_68 - uStack_58;
                }
              }
              uStack_70 = auVar3._8_8_;
              uStack_68 = auVar3._0_8_;
              uStack_18 = FUN_142b25fb0(*plStack_60,*plVar8,(longlong)iVar5,uStack_b0);
              *(undefined8 *)(*plStack_60 + (longlong)iVar5 * 8) = uStack_18;
              lStack_50 = lStack_50 + -8;
              lVar10 = FUN_142b26930(lStack_50,lStack_50,*plStack_60,(longlong)(iVar5 + 1));
              if (lVar10 != 0) {
                uStack_b0 = uStack_b0 - 1;
                lVar10 = FUN_142b26700(lStack_50,lStack_50,*plVar8,(longlong)iVar5);
                if (lVar10 != 0) {
                  *puStack_a0 = *puStack_a0 + 1;
                }
              }
              *puStack_80 = uStack_b0;
              puStack_a0 = puStack_a0 + -1;
              puStack_80 = puStack_80 + -1;
            }
            FUN_142b252a0(plVar7);
            if (param_2 != 0) {
              iVar4 = FUN_142b1fb40(param_2,plVar7,iVar4);
              if (iVar4 == 0) goto LAB_142b1ed9c;
              iVar4 = FUN_142b1f5d0(param_2);
              if (iVar4 == 0) {
                *(uint *)(param_2 + 0x10) = uStack_84;
              }
            }
            FUN_142b252a0(plStack_c0);
            FUN_142b1dd90(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_142b1ed9c:
  FUN_142b1dd90(param_5);
  return 0;
}


/* address=142b1edc0 name=FUN_142b1edc0 */

ulonglong FUN_142b1edc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  int iStack_38;
  ulonglong uStack_30;
  longlong lStack_20;
  undefined auStack_18 [24];
  
  uStack_30 = 0;
  if (param_2 == 0) {
    uStack_30 = 0xffffffffffffffff;
  }
  else if (*(int *)(param_1 + 1) == 0) {
    uStack_30 = 0;
  }
  else {
    iVar2 = FUN_142b24f70(param_2);
    bVar3 = (byte)(0x40 - iVar2);
    param_2 = param_2 << (bVar3 & 0x3f);
    iVar2 = FUN_142b1f7c0(param_1,param_1,0x40 - iVar2);
    if (iVar2 == 0) {
      uStack_30 = 0xffffffffffffffff;
    }
    else {
      iStack_38 = *(int *)(param_1 + 1);
      while (iStack_38 = iStack_38 + -1, -1 < iStack_38) {
        lVar1 = *(longlong *)(*param_1 + (longlong)iStack_38 * 8);
        FUN_142b36870(&lStack_20,auStack_18,uStack_30,lVar1,param_2);
        uStack_30 = lVar1 - lStack_20 * param_2;
        *(longlong *)(*param_1 + (longlong)iStack_38 * 8) = lStack_20;
      }
      FUN_142b252a0(param_1);
      uStack_30 = uStack_30 >> (bVar3 & 0x3f);
    }
  }
  return uStack_30;
}


/* address=142b1f210 name=FUN_142b1f210 */

int FUN_142b1f210(longlong param_1,longlong param_2)

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
    iVar1 = FUN_142b1f330(param_1,param_2);
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


/* address=142b1f2c0 name=FUN_142b1f2c0 */

void FUN_142b1f2c0(undefined8 param_1,longlong param_2)

{
  longlong alStackX_10 [3];
  uint uStack_28;
  longlong *plStack_20;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  alStackX_10[0] = param_2;
  FUN_142b1d1e0(&plStack_20);
  plStack_20 = alStackX_10;
  uStack_28 = (uint)(alStackX_10[0] != 0);
  uStack_18 = uStack_28;
  uStack_14 = 1;
  uStack_c = 2;
  FUN_142b1f210(param_1,&plStack_20);
  return;
}


/* address=142b1f330 name=FUN_142b1f330 */

void FUN_142b1f330(undefined8 *param_1,undefined8 *param_2)

{
  FUN_142b35f80(*param_1,(longlong)*(int *)(param_1 + 1),*param_2,(longlong)*(int *)(param_2 + 1));
  return;
}


/* address=142b1f380 name=FUN_142b1f380 */

bool FUN_142b1f380(longlong *param_1,longlong *param_2)

{
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  ulonglong uStack_10;
  
  uStack_10 = 0;
  for (iStack_24 = *(int *)(param_1 + 1); iStack_24 < *(int *)(param_2 + 1);
      iStack_24 = iStack_24 + 1) {
    uStack_10 = uStack_10 | *(ulonglong *)(*param_2 + (longlong)iStack_24 * 8);
  }
  for (iStack_20 = *(int *)(param_2 + 1); iStack_20 < *(int *)(param_1 + 1);
      iStack_20 = iStack_20 + 1) {
    uStack_10 = uStack_10 | *(ulonglong *)(*param_1 + (longlong)iStack_20 * 8);
  }
  if (*(int *)(param_1 + 1) < *(int *)(param_2 + 1)) {
    iStack_1c = *(int *)(param_1 + 1);
  }
  else {
    iStack_1c = *(int *)(param_2 + 1);
  }
  for (iStack_28 = 0; iStack_28 < iStack_1c; iStack_28 = iStack_28 + 1) {
    uStack_10 = uStack_10 |
                *(ulonglong *)(*param_1 + (longlong)iStack_28 * 8) ^
                *(ulonglong *)(*param_2 + (longlong)iStack_28 * 8);
  }
  return (uStack_10 | (longlong)(int)(*(uint *)(param_1 + 2) ^ *(uint *)(param_2 + 2))) == 0;
}


/* address=142b1f500 name=FUN_142b1f500 */

bool FUN_142b1f500(ulonglong **param_1,ulonglong param_2)

{
  bool bVar1;
  int iStack_28;
  ulonglong uStack_18;
  
  if (*(int *)(param_1 + 1) == 0) {
    bVar1 = param_2 != 0;
  }
  else {
    uStack_18 = **param_1 ^ param_2;
    for (iStack_28 = 1; iStack_28 < *(int *)(param_1 + 1); iStack_28 = iStack_28 + 1) {
      uStack_18 = uStack_18 | (*param_1)[iStack_28];
    }
    bVar1 = uStack_18 != 0;
  }
  return !bVar1;
}


/* address=142b1f5d0 name=FUN_142b1f5d0 */

void FUN_142b1f5d0(undefined8 param_1)

{
  FUN_142b256e0(param_1,0);
  return;
}


/* address=142b1f5f0 name=FUN_142b1f5f0 */

undefined4 FUN_142b1f5f0(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) && (iVar1 = FUN_142b1f500(param_1,1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142b1f640 name=FUN_142b1f640 */

undefined4 FUN_142b1f640(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uStack_18;
  
  iVar1 = FUN_142b1f500(param_1,param_2);
  if ((iVar1 == 0) || ((param_2 != 0 && (*(int *)(param_1 + 0x10) != 0)))) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = 1;
  }
  return uStack_18;
}


/* address=142b1f6a0 name=FUN_142b1f6a0 */

undefined4 FUN_142b1f6a0(ulonglong **param_1)

{
  undefined4 uStack_18;
  
  if ((*(int *)(param_1 + 1) < 1) || ((**param_1 & 1) != 1)) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = 1;
  }
  return uStack_18;
}


/* address=142b1f700 name=FUN_142b1f700 */

bool FUN_142b1f700(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  int iStack_18;
  
  iVar1 = FUN_142b25250(param_1);
  if ((iVar1 == 0) || (*(int *)(param_1 + 2) != 0)) {
    bVar2 = false;
  }
  else {
    for (iStack_18 = 0; iStack_18 < iVar1 + -1; iStack_18 = iStack_18 + 1) {
      if (*(longlong *)(*param_1 + (longlong)iStack_18 * 8) != 0) {
        return false;
      }
    }
    bVar2 = (*(ulonglong *)(*param_1 + (longlong)(iVar1 + -1) * 8) &
            *(longlong *)(*param_1 + (longlong)(iVar1 + -1) * 8) - 1U) == 0;
  }
  return bVar2;
}


/* address=142b1f7c0 name=FUN_142b1f7c0 */

undefined8 FUN_142b1f7c0(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int iStack_38;
  
  if (param_3 < 0) {
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cbe130,0x49);
    uVar7 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    iVar5 = (int)(param_3 + (param_3 >> 0x1f & 0x3fU)) >> 6;
    iVar6 = FUN_142b252e0(param_1,(longlong)(*(int *)(param_2 + 1) + 1 + iVar5));
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
        iStack_38 = *(int *)(param_2 + 1);
        while (iStack_38 = iStack_38 + -1, -1 < iStack_38) {
          *(undefined8 *)(lVar2 + (longlong)(iVar5 + iStack_38) * 8) =
               *(undefined8 *)(lVar1 + (longlong)iStack_38 * 8);
        }
      }
      else {
        iStack_38 = *(int *)(param_2 + 1);
        while (iStack_38 = iStack_38 + -1, -1 < iStack_38) {
          uVar3 = *(ulonglong *)(lVar1 + (longlong)iStack_38 * 8);
          *(ulonglong *)(lVar2 + (longlong)(iVar5 + 1 + iStack_38) * 8) =
               *(ulonglong *)(lVar2 + (longlong)(iVar5 + 1 + iStack_38) * 8) |
               uVar3 >> (0x40 - bVar4 & 0x3f);
          *(ulonglong *)(lVar2 + (longlong)(iVar5 + iStack_38) * 8) = uVar3 << (bVar4 & 0x3f);
        }
      }
      FUN_142b134e0(lVar2,0,(longlong)iVar5 << 3);
      *(int *)(param_1 + 1) = *(int *)(param_2 + 1) + 1 + iVar5;
      FUN_142b252a0(param_1);
      uVar7 = 1;
    }
  }
  return uVar7;
}


/* address=142b1f9f0 name=FUN_142b1f9f0 */

undefined8 FUN_142b1f9f0(ulonglong **param_1,ulonglong **param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iStack_38;
  ulonglong *puStack_30;
  ulonglong *puStack_28;
  ulonglong uStack_20;
  
  if (param_1 == param_2) {
    iVar2 = FUN_142b252e0(param_1,(longlong)(*(int *)(param_2 + 1) + 1));
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    iVar2 = FUN_142b252e0(param_1,(longlong)(*(int *)(param_2 + 1) + 1));
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  puStack_28 = *param_2;
  puStack_30 = *param_1;
  uStack_20 = 0;
  for (iStack_38 = 0; iStack_38 < *(int *)(param_2 + 1); iStack_38 = iStack_38 + 1) {
    uVar1 = *puStack_28;
    puStack_28 = puStack_28 + 1;
    *puStack_30 = uVar1 << 1 | uStack_20;
    puStack_30 = puStack_30 + 1;
    uStack_20 = uVar1 >> 0x3f;
  }
  if (uStack_20 != 0) {
    *puStack_30 = 1;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  return 1;
}


/* address=142b1fb40 name=FUN_142b1fb40 */

undefined8 FUN_142b1fb40(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 < 0) {
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cbe1a0,0x9e);
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_142b252e0(param_1,(longlong)*(int *)(param_2 + 1));
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_142b32a80(*param_1,*param_2,param_3,(longlong)*(int *)(param_2 + 1));
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      FUN_142b252a0(param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=142b1fc00 name=FUN_142b1fc00 */

bool FUN_142b1fc00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_142b252e0(param_1,(longlong)*(int *)(param_2 + 1));
  if (iVar1 != 0) {
    FUN_142b329e0(*param_1,*param_2,(longlong)*(int *)(param_2 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    FUN_142b252a0(param_1);
  }
  return iVar1 != 0;
}


/* address=142b1fc90 name=FUN_142b1fc90 */

undefined8 FUN_142b1fc90(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iStack_24;
  
  if (param_2 < 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x3fU)) >> 6;
    bVar1 = (byte)(param_2 >> 0x1f) & 0x3f;
    if (*(int *)(param_1 + 1) <= iVar2) {
      iVar3 = FUN_142b252e0(param_1,(longlong)(iVar2 + 1));
      if (iVar3 == 0) {
        return 0;
      }
      for (iStack_24 = *(int *)(param_1 + 1); iStack_24 < iVar2 + 1; iStack_24 = iStack_24 + 1) {
        *(undefined8 *)(*param_1 + (longlong)iStack_24 * 8) = 0;
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


/* address=142b1fda0 name=FUN_142b1fda0 */

undefined8 FUN_142b1fda0(longlong *param_1,int param_2)

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
      FUN_142b252a0(param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=142b1fe60 name=FUN_142b1fe60 */

undefined8 FUN_142b1fe60(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142b32280(*param_1,(longlong)*(int *)(param_1 + 1),(longlong)param_2);
  }
  return uVar1;
}


/* address=142b1feb0 name=FUN_142b1feb0 */

undefined8 FUN_142b1feb0(longlong *param_1,int param_2)

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
      FUN_142b252a0(param_1);
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=142b1ff90 name=FUN_142b1ff90 */

uint FUN_142b1ff90(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iStack_38;
  uint uStack_34;
  
  uStack_34 = 0;
  uVar4 = 0;
  for (iStack_38 = 0; iStack_38 < *(int *)(param_1 + 1); iStack_38 = iStack_38 + 1) {
    uVar2 = FUN_142b13230(*(undefined8 *)(*param_1 + (longlong)iStack_38 * 8));
    uVar1 = ~uVar4;
    uVar4 = uVar4 | ~uVar2;
    iVar3 = FUN_142b3c350(*(undefined8 *)(*param_1 + (longlong)iStack_38 * 8));
    uStack_34 = uStack_34 | uVar1 & ~uVar2 & iStack_38 * 0x40 + iVar3;
  }
  return uStack_34;
}


/* address=142b20070 name=FUN_142b20070 */

ulonglong FUN_142b20070(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iStack_28;
  ulonglong uStack_20;
  
  uStack_20 = 0;
  if (param_2 == 0) {
    uStack_20 = 0xffffffffffffffff;
  }
  else if (param_2 < 0x100000001) {
    iStack_28 = *(int *)(param_1 + 1);
    while (iStack_28 = iStack_28 + -1, -1 < iStack_28) {
      uStack_20 = ((uStack_20 << 0x20 | *(ulonglong *)(*param_1 + (longlong)iStack_28 * 8) >> 0x20)
                   % param_2 << 0x20 |
                  *(ulonglong *)(*param_1 + (longlong)iStack_28 * 8) & 0xffffffff) % param_2;
    }
  }
  else {
    lVar1 = FUN_142b1d2a0(param_1);
    if (lVar1 == 0) {
      uStack_20 = 0xffffffffffffffff;
    }
    else {
      uStack_20 = FUN_142b1edc0(lVar1,param_2);
      FUN_142b1d210(lVar1);
    }
  }
  return uStack_20;
}


/* address=142b201a0 name=FUN_142b201a0 */

bool FUN_142b201a0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uStack_20;
  
  if ((param_3 == 0) || (*(int *)(param_2 + 1) == 0)) {
    FUN_142b1d4c0(param_1);
    bVar4 = true;
  }
  else {
    uVar2 = (param_3 - 1) / 0x40 + 1;
    if ((ulonglong)(longlong)*(int *)(param_2 + 1) < uVar2) {
      lVar3 = FUN_142b1d300(param_1,param_2);
      bVar4 = lVar3 != 0;
    }
    else {
      iVar1 = FUN_142b252e0(param_1,uVar2);
      if (iVar1 == 0) {
        bVar4 = false;
      }
      else {
        FUN_142b13440(*param_1,*param_2,uVar2 * 8);
        if (param_3 % 0x40 != 0) {
          *(ulonglong *)(*param_1 + -8 + uVar2 * 8) =
               *(ulonglong *)(*param_1 + -8 + uVar2 * 8) & (1L << (sbyte)(param_3 % 0x40)) - 1U;
        }
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
        uStack_20 = (undefined4)uVar2;
        *(undefined4 *)(param_1 + 1) = uStack_20;
        FUN_142b252a0(param_1);
        bVar4 = true;
      }
    }
  }
  return bVar4;
}


/* address=142b204d0 name=FUN_142b204d0 */

undefined8 FUN_142b204d0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  code *pcStack_18;
  
  iVar1 = FUN_142b1e5c0(0,param_1,param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_3 + 0x10) == 0) {
      pcStack_18 = FUN_142b1ddd0;
    }
    else {
      pcStack_18 = FUN_142b1e0c0;
    }
    uVar2 = (*pcStack_18)(param_1,param_1,param_3);
  }
  return uVar2;
}


/* address=142b20750 name=FUN_142b20750 */

undefined4
FUN_142b20750(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_18;
  
  uStack_18 = 0;
  FUN_142b1dbe0(param_5);
  lVar2 = FUN_142b1dc40(param_5);
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_142b1e570(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_142b1e440(lVar2,param_2,param_3,param_5);
    }
    if ((iVar1 != 0) && (iVar1 = FUN_142b204d0(param_1,lVar2,param_4,param_5), iVar1 != 0)) {
      uStack_18 = 1;
    }
  }
  FUN_142b1dd90(param_5);
  return uStack_18;
}


/* address=142b20820 name=FUN_142b20820 */

undefined8
FUN_142b20820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_142b1e570(param_1,param_2,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142b1e5c0(0,param_1,param_1,param_3,param_4);
  }
  return uVar2;
}


/* address=142b20ad0 name=FUN_142b20ad0 */

longlong FUN_142b20ad0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

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
  int iStack_78;
  longlong lStack_70;
  int iStack_68;
  int iStack_20;
  code *pcStack_18;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  bVar9 = true;
  iVar1 = FUN_142b1f6a0(param_3);
  lStack_70 = param_1;
  if ((iVar1 == 0) || (iVar1 = FUN_142b1f500(param_3,1), iVar1 != 0)) {
    iVar1 = FUN_142b1f500(param_3,2);
    if (iVar1 == 0) {
      FUN_142afa690(3,0,0x72,s_D__a_1_s_target_release_build_bo_143cbe210,CONCAT44(uVar11,0x58));
      return 0;
    }
    if (param_1 == 0) {
      lStack_70 = FUN_142b1d190();
    }
    if (lStack_70 != 0) {
      iVar1 = FUN_142b1fe60(param_2,0);
      iVar1 = FUN_142b1d520(lStack_70,(longlong)iVar1);
      if (iVar1 != 0) {
        return lStack_70;
      }
    }
    if (lStack_70 != param_1) {
      FUN_142b1d210(lStack_70);
    }
    return 0;
  }
  iVar1 = FUN_142b1f5d0(param_2);
  if ((iVar1 != 0) || (iVar1 = FUN_142b1f5f0(param_2), iVar1 != 0)) {
    if (param_1 == 0) {
      lStack_70 = FUN_142b1d190();
    }
    if (lStack_70 != 0) {
      iVar1 = FUN_142b1f5f0(param_2);
      iVar1 = FUN_142b1d520(lStack_70,(longlong)iVar1);
      if (iVar1 != 0) {
        return lStack_70;
      }
    }
    if (lStack_70 != param_1) {
      FUN_142b1d210(lStack_70);
    }
    return 0;
  }
  FUN_142b1dbe0(param_4);
  uVar3 = FUN_142b1dc40(param_4);
  uVar4 = FUN_142b1dc40(param_4);
  lVar5 = FUN_142b1dc40(param_4);
  uVar6 = FUN_142b1dc40(param_4);
  uVar7 = FUN_142b1dc40(param_4);
  this = (CMFCTabCtrl *)FUN_142b1dc40(param_4);
  if (this != (CMFCTabCtrl *)0x0) {
    if (param_1 == 0) {
      lStack_70 = FUN_142b1d190();
    }
    if ((lStack_70 != 0) && (iVar1 = FUN_142b204d0(uVar3,param_2), iVar1 != 0)) {
      iStack_68 = 1;
      while (iVar1 = FUN_142b1fe60(param_3,iStack_68), iVar1 == 0) {
        iStack_68 = iStack_68 + 1;
      }
      if (iStack_68 == 1) {
        iVar1 = FUN_142b1fb40(lVar5,param_3,2);
        if (iVar1 == 0) goto LAB_142b215e6;
        *(undefined4 *)(lVar5 + 0x10) = 0;
        iVar1 = FUN_142b1df20(lVar5,1);
        if (iVar1 == 0) goto LAB_142b215e6;
        uVar4 = param_4;
        iVar1 = FUN_142b23750(lStack_70,uVar3,lVar5,param_3,param_4,0);
        uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
        if (iVar1 == 0) goto LAB_142b215e6;
      }
      else {
        if (iStack_68 == 2) {
          iVar1 = FUN_142b34190(uVar6,uVar3,param_3,param_4);
          if ((iVar1 == 0) || (iVar1 = FUN_142b1fb40(lVar5,param_3,3), iVar1 == 0))
          goto LAB_142b215e6;
          *(undefined4 *)(lVar5 + 0x10) = 0;
          iVar1 = FUN_142b23750(uVar4,uVar6,lVar5,param_3,param_4,0);
          if ((iVar1 == 0) ||
             ((((iVar1 = FUN_142b20820(this,uVar4,param_3,param_4), iVar1 == 0 ||
                (iVar1 = FUN_142b20750(uVar6,uVar6,this,param_3,param_4), iVar1 == 0)) ||
               (iVar1 = FUN_142b1e250(uVar6,1), iVar1 == 0)) ||
              (iVar1 = FUN_142b20750(uVar7,uVar3,uVar4,param_3,param_4), iVar1 == 0))))
          goto LAB_142b215e6;
          uVar4 = param_4;
          iVar1 = FUN_142b20750(uVar7,uVar7,uVar6,param_3,param_4);
          uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
          if (iVar1 == 0) goto LAB_142b215e6;
          lVar5 = FUN_142b1d300(lStack_70,uVar7);
        }
        else {
          lVar8 = FUN_142b1d300(lVar5,param_3);
          if (lVar8 == 0) goto LAB_142b215e6;
          *(undefined4 *)(lVar5 + 0x10) = 0;
          iStack_78 = 2;
          do {
            if (iStack_78 < 0x16) {
              iVar1 = FUN_142b1d520(this,(longlong)iStack_78);
joined_r0x000142b21086:
              if (iVar1 == 0) goto LAB_142b215e6;
            }
            else {
              uVar2 = FUN_142b1d430(param_3);
              iVar1 = CMFCTabCtrl::SetImageList(this,uVar2,0,0);
              if (iVar1 == 0) goto LAB_142b215e6;
              iVar1 = FUN_142b1f330(this,param_3);
              if (-1 < iVar1) {
                if (*(int *)(param_3 + 0x10) == 0) {
                  pcStack_18 = FUN_142b1e0c0;
                }
                else {
                  pcStack_18 = FUN_142b1ddd0;
                }
                iVar1 = (*pcStack_18)(this,this,param_3);
                if (iVar1 == 0) goto LAB_142b215e6;
              }
              iVar1 = FUN_142b1f5d0(this);
              if (iVar1 != 0) {
                iVar1 = FUN_142b1d520(this,(longlong)iStack_78);
                goto joined_r0x000142b21086;
              }
            }
            iVar1 = FUN_142b31f20(this,lVar5);
            if (iVar1 < -1) goto LAB_142b215e6;
            if (iVar1 == 0) {
              FUN_142afa690(3,0,0x72,s_D__a_1_s_target_release_build_bo_143cbe280,0x101);
              goto LAB_142b215e6;
            }
          } while ((iVar1 == 1) && (iStack_78 = iStack_78 + 1, iStack_78 < 0x52));
          if (iVar1 != -1) {
            FUN_142afa690(3,0,0x73,s_D__a_1_s_target_release_build_bo_143cbe2f0,0x10b);
            goto LAB_142b215e6;
          }
          iVar1 = FUN_142b1fb40(lVar5,lVar5,iStack_68);
          if (iVar1 == 0) goto LAB_142b215e6;
          uVar10 = param_4;
          iVar1 = FUN_142b23750(this,this,lVar5,param_3,param_4,0);
          uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if (iVar1 == 0) goto LAB_142b215e6;
          iVar1 = FUN_142b1f5f0(this);
          if (iVar1 != 0) {
            FUN_142afa690(3,0,0x72,s_D__a_1_s_target_release_build_bo_143cbe360,
                          CONCAT44(uVar11,0x11a));
            goto LAB_142b215e6;
          }
          iVar1 = FUN_142b1fc00(uVar6,lVar5);
          if (iVar1 == 0) goto LAB_142b215e6;
          iVar1 = FUN_142b1f5d0(uVar6);
          if (iVar1 == 0) {
            iVar1 = FUN_142b23750(uVar7,uVar3,uVar6,param_3,param_4,0);
            if (iVar1 == 0) goto LAB_142b215e6;
            iVar1 = FUN_142b1f5d0(uVar7);
            if (iVar1 != 0) {
              FUN_142b1d4c0(lStack_70);
              bVar9 = false;
              goto LAB_142b215e6;
            }
          }
          else {
            iVar1 = FUN_142b204d0(uVar6,uVar3,param_3,param_4);
            if (iVar1 == 0) goto LAB_142b215e6;
            iVar1 = FUN_142b1f5d0(uVar6);
            if (iVar1 != 0) {
              FUN_142b1d4c0(lStack_70);
              bVar9 = false;
              goto LAB_142b215e6;
            }
            iVar1 = FUN_142b1d4f0(uVar7);
            if (iVar1 == 0) goto LAB_142b215e6;
          }
          iVar1 = FUN_142b20820(uVar4,uVar7,param_3,param_4);
          if (((iVar1 == 0) ||
              (iVar1 = FUN_142b20750(uVar4,uVar4,uVar3,param_3,param_4), iVar1 == 0)) ||
             (uVar10 = param_4, iVar1 = FUN_142b20750(uVar7,uVar7,uVar3,param_3,param_4), iVar1 == 0
             )) goto LAB_142b215e6;
          while( true ) {
            iVar1 = FUN_142b1f5f0(uVar4);
            uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if (iVar1 != 0) break;
            for (iStack_78 = 1; uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20),
                iStack_78 < iStack_68; iStack_78 = iStack_78 + 1) {
              if (iStack_78 == 1) {
                iVar1 = FUN_142b20820(uVar6,uVar4,param_3,param_4);
              }
              else {
                uVar10 = param_4;
                iVar1 = FUN_142b20750(uVar6,uVar6,uVar6,param_3,param_4);
              }
              if (iVar1 == 0) goto LAB_142b215e6;
              iVar1 = FUN_142b1f5f0(uVar6);
              uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
              if (iVar1 != 0) break;
            }
            if (iStack_68 <= iStack_78) {
              FUN_142afa690(3,0,0x6e,s_D__a_1_s_target_release_build_bo_143cbe3d0,
                            CONCAT44(uVar11,0x179));
              goto LAB_142b215e6;
            }
            lVar5 = FUN_142b1d300(uVar6,this);
            if (lVar5 == 0) goto LAB_142b215e6;
            iStack_20 = iStack_68 - iStack_78;
            while (iStack_20 = iStack_20 + -1, 0 < iStack_20) {
              iVar1 = FUN_142b20820(uVar6,uVar6,param_3,param_4);
              if (iVar1 == 0) goto LAB_142b215e6;
            }
            iVar1 = FUN_142b20750(this,uVar6,uVar6,param_3,param_4);
            if (((iVar1 == 0) ||
                (iVar1 = FUN_142b20750(uVar7,uVar7,uVar6,param_3,param_4), iVar1 == 0)) ||
               (uVar10 = param_4, iVar1 = FUN_142b20750(uVar4,uVar4,this,param_3,param_4),
               iVar1 == 0)) goto LAB_142b215e6;
            if (iStack_68 <= iStack_78) {
              FID_conflict__assert((wchar_t *)s_i_143cbe510,(wchar_t *)s_D_143cbe440,0x18d);
            }
            iStack_68 = iStack_78;
          }
          lVar5 = FUN_142b1d300(lStack_70,uVar7);
        }
        if (lVar5 == 0) goto LAB_142b215e6;
      }
      iVar1 = FUN_142b20820(uVar7,lStack_70,param_3,param_4);
      bVar9 = iVar1 == 0;
      if ((!bVar9) && (iVar1 = FUN_142b1f210(uVar7,uVar3), iVar1 != 0)) {
        FUN_142afa690(3,0,0x6e,s_D__a_1_s_target_release_build_bo_143cbe520,CONCAT44(uVar11,0x199));
        bVar9 = true;
      }
    }
  }
LAB_142b215e6:
  if (bVar9) {
    if (lStack_70 != param_1) {
      FUN_142b1d280(lStack_70);
    }
    lStack_70 = 0;
  }
  FUN_142b1dd90(param_4);
  return lStack_70;
}


/* address=142b21630 name=FUN_142b21630 */

undefined8 FUN_142b21630(ulonglong **param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uStack_38;
  
  if (param_1 == (ulonglong **)0x0) {
    uVar5 = 0;
  }
  else if (((param_3 == -1) || (param_3 == 0)) || (param_3 == 1)) {
    if ((param_4 == 0) || (param_4 == 1)) {
      if (param_2 == 0) {
        FUN_142b1d4c0(param_1);
        uVar5 = 1;
      }
      else if (param_2 < 0x7fffffc1) {
        iVar2 = (int)(param_2 + 0x3f + (param_2 + 0x3f >> 0x1f & 0x3fU)) >> 6;
        uVar6 = param_2 + -1 >> 0x1f & 0x3f;
        iVar3 = (param_2 + -1 + uVar6 & 0x3f) - uVar6;
        bVar1 = (byte)iVar3;
        if (iVar3 < 0x3f) {
          uStack_38 = (1L << (bVar1 + 1 & 0x3f)) - 1;
        }
        else {
          uStack_38 = 0xffffffffffffffff;
        }
        iVar4 = FUN_142b252e0(param_1,(longlong)iVar2);
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          FUN_142b1ce80();
          FUN_142b3b560(*param_1,(longlong)iVar2 << 3);
          FUN_142b1ce90();
          (*param_1)[iVar2 + -1] = (*param_1)[iVar2 + -1] & uStack_38;
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
        FUN_142afa690(3,0,0x66,s_D__a_1_s_target_release_build_bo_143cbdb10,0x92);
        uVar5 = 0;
      }
    }
    else {
      FUN_142afa690(3,0,0x42,s_D__a_1_s_target_release_build_bo_143cbdaa0,0x88);
      uVar5 = 0;
    }
  }
  else {
    FUN_142afa690(3,0,0x42,s_D__a_1_s_target_release_build_bo_143cbda30,0x83);
    uVar5 = 0;
  }
  return uVar5;
}


/* address=142b219e0 name=CMFCTabCtrl::SetImageList */

/* Library Function - Single Match
    public: virtual int __cdecl CMFCTabCtrl::SetImageList(unsigned int,int,unsigned long) __ptr64
   
   Library: Visual Studio 2010 Debug */

int __thiscall CMFCTabCtrl::SetImageList(CMFCTabCtrl *this,uint param_1,int param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = FUN_142b21630(this,param_1,param_2,param_3);
  return iVar1;
}


/* address=142b21a20 name=FUN_142b21a20 */

void FUN_142b21a20(undefined8 param_1,undefined8 param_2)

{
  FUN_142b21a50(param_1,0,param_2);
  return;
}


/* address=142b21a50 name=FUN_142b21a50 */

undefined8 FUN_142b21a50(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_142b252e0(param_1,(longlong)*(int *)(param_3 + 1));
  if ((iVar1 != 0) &&
     (iVar1 = FUN_142b31930(*param_1,param_2,*param_3,(longlong)*(int *)(param_3 + 1),&DAT_1431a6f60
                           ), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
    return 1;
  }
  return 0;
}


/* address=142b21bd0 name=FUN_142b21bd0 */

undefined8 FUN_142b21bd0(longlong param_1,undefined4 param_2,undefined4 param_3)

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


/* address=142b21f40 name=FUN_142b21f40 */

undefined4
FUN_142b21f40(undefined4 *param_1,undefined8 param_2,int param_3,undefined8 param_4,
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
  int iStackX_18;
  undefined8 in_stack_ffffffffffffff88;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_40;
  longlong lStack_20;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  iVar1 = FUN_142b1f6a0(param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_142b1f2c0(param_2,3), iVar1 < 1)) {
    FUN_142afa690(3,0,0x77,s_D__a_1_s_target_release_build_bo_143cbd9c0,CONCAT44(uVar2,0x327));
    uStack_58 = 0;
  }
  else {
    iStackX_18 = param_3;
    if (param_3 == 0) {
      uVar2 = FUN_142b1d430(param_2);
      iStackX_18 = FUN_142b3afc0(uVar2);
    }
    uStack_58 = 0;
    lStack_20 = 0;
    FUN_142b1dbe0(param_4);
    lVar3 = FUN_142b1dc40(param_4);
    if (((lVar3 != 0) && (lVar4 = FUN_142b1d300(lVar3,param_2), lVar4 != 0)) &&
       (iVar1 = FUN_142b1e250(lVar3,1), iVar1 != 0)) {
      iStack_60 = 0;
      while (iVar1 = FUN_142b1fe60(lVar3,iStack_60), iVar1 == 0) {
        iStack_60 = iStack_60 + 1;
      }
      lVar4 = FUN_142b1dc40(param_4);
      if ((lVar4 != 0) && (iVar1 = FUN_142b1fb40(lVar4,lVar3,iStack_60), iVar1 != 0)) {
        lVar5 = FUN_142b1dc40(param_4);
        lVar6 = FUN_142b1dc40(param_4);
        lVar7 = FUN_142b1dc40(param_4);
        lVar8 = FUN_142b1dc40(param_4);
        lVar9 = FUN_142b1dc40(param_4);
        if ((((lVar5 != 0) && ((lVar6 != 0 && (lVar7 != 0)))) && (lVar8 != 0)) &&
           ((lVar9 != 0 && (lStack_20 = FUN_142b23000(param_2,param_4), lStack_20 != 0)))) {
          for (iStack_5c = 1; iStack_5c <= iStackX_18; iStack_5c = iStack_5c + 1) {
            iVar1 = FUN_142b21a50(lVar5,2,lVar3);
            if ((iVar1 == 0) || (iVar1 = FUN_142b22870(lVar6,lVar5,param_2,param_4), iVar1 == 0))
            goto LAB_142b22408;
            iVar1 = FUN_142b1f2c0(lVar6,1);
            if (0 < iVar1) {
              *param_1 = 1;
              uStack_58 = 1;
              goto LAB_142b22408;
            }
            iVar1 = FUN_142b23750(lVar7,lVar5,lVar4,param_2,param_4,lStack_20);
            if (iVar1 == 0) goto LAB_142b22408;
            iVar1 = FUN_142b1f5f0(lVar7);
            if ((iVar1 == 0) && (iVar1 = FUN_142b1f210(lVar7,lVar3), iVar1 != 0)) {
              iStack_40 = 1;
              do {
                if (iStack_60 <= iStack_40) {
                  lVar3 = FUN_142b1d300(lVar8,lVar7);
                  if (((lVar3 != 0) &&
                      (iVar1 = FUN_142b20750(lVar7,lVar8,lVar8,param_2,param_4), iVar1 != 0)) &&
                     ((iVar1 = FUN_142b1f5f0(lVar7), iVar1 != 0 ||
                      (lVar3 = FUN_142b1d300(lVar8,lVar7), lVar3 != 0)))) {
LAB_142b22345:
                    lVar3 = FUN_142b1d300(lVar9,lVar8);
                    if (((lVar3 != 0) && (iVar1 = FUN_142b1e250(lVar9,1), iVar1 != 0)) &&
                       (iVar1 = FUN_142b22870(lVar6,lVar9,param_2,param_4), iVar1 != 0)) {
                      iVar1 = FUN_142b1f2c0(lVar6,1);
                      if (iVar1 < 1) {
                        *param_1 = 2;
                      }
                      else {
                        *param_1 = 1;
                      }
                      uStack_58 = 1;
                    }
                  }
                  goto LAB_142b22408;
                }
                lVar10 = FUN_142b1d300(lVar8,lVar7);
                if ((lVar10 == 0) ||
                   (iVar1 = FUN_142b20750(lVar7,lVar8,lVar8,param_2,param_4), iVar1 == 0))
                goto LAB_142b22408;
                iVar1 = FUN_142b1f210(lVar7,lVar3);
                if (iVar1 == 0) break;
                iVar1 = FUN_142b1f5f0(lVar7);
                if (iVar1 != 0) goto LAB_142b22345;
                iStack_40 = iStack_40 + 1;
              } while( true );
            }
            iVar1 = FUN_142b21bd0(param_5,1,iStack_5c + -1);
            if (iVar1 == 0) goto LAB_142b22408;
          }
          *param_1 = 0;
          uStack_58 = 1;
        }
      }
    }
LAB_142b22408:
    FUN_142b23110(lStack_20);
    FUN_142b1dd90(param_4);
  }
  return uStack_58;
}


/* address=142b22440 name=FUN_142b22440 */

undefined4
FUN_142b22440(undefined4 *param_1,undefined8 param_2,int param_3,longlong param_4,int param_5,
             undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iStackX_18;
  longlong lStackX_20;
  int iStack_78;
  undefined2 auStack_74 [2];
  undefined4 uStack_70;
  int iStack_6c;
  ulonglong uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  int aiStack_50 [2];
  longlong lStack_48;
  ulonglong uStack_40;
  undefined8 auStack_38 [7];
  
  *param_1 = 0;
  uVar3 = FUN_142b1d400();
  iVar1 = FUN_142b1f210(param_2,uVar3);
  if (iVar1 < 1) {
    uStack_70 = 1;
  }
  else {
    iVar1 = FUN_142b1f6a0(param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_142b1f640(param_2,2);
      *param_1 = uVar2;
      uStack_70 = 1;
    }
    else {
      iVar1 = FUN_142b1f640(param_2,3);
      if (iVar1 == 0) {
        if (param_5 != 0) {
          iVar1 = FUN_142b3b4d0(auStack_74,param_2);
          if (iVar1 != 0) {
            uVar2 = FUN_142b1f640(param_2,auStack_74[0]);
            *param_1 = uVar2;
            return 1;
          }
          iVar1 = FUN_142b21bd0(param_6,1,0xffffffff);
          if (iVar1 == 0) {
            return 0;
          }
        }
        iStackX_18 = param_3;
        if (param_3 == 0) {
          uVar2 = FUN_142b1d430(param_2);
          iStackX_18 = FUN_142b3afc0(uVar2);
        }
        lStack_58 = 0;
        lStackX_20 = param_4;
        if ((param_4 == 0) &&
           (lStackX_20 = FUN_142b1dae0(), lStack_58 = lStackX_20, lStackX_20 == 0)) {
          uStack_70 = 0;
        }
        else {
          uStack_70 = 0;
          FUN_142b1dbe0(lStackX_20);
          lStack_48 = FUN_142b1dc40(lStackX_20);
          lStack_60 = FUN_142b23060(param_2,lStackX_20);
          if ((lStack_48 != 0) &&
             ((lStack_60 != 0 &&
              (iVar1 = FUN_142b32640(auStack_38,lStack_60,lStackX_20), iVar1 != 0)))) {
            uStack_68 = 0;
            iStack_78 = 1;
            while( true ) {
              uStack_40 = (ulonglong)(iStack_78 < 0x11);
              uVar4 = FUN_142b13170(uStack_68,(longlong)iStackX_18);
              if ((uStack_40 | uVar4) == 0) break;
              iVar1 = FUN_142b31a60(lStack_48,aiStack_50,2,auStack_38[0]);
              if (iVar1 == 0) goto LAB_142b22781;
              uStack_68 = uStack_68 + (longlong)aiStack_50[0];
              iStack_6c = 0;
              iVar1 = FUN_142b327b0(auStack_38,&iStack_6c,lStack_48,lStack_60,lStackX_20);
              if (iVar1 == 0) goto LAB_142b22781;
              if (iStack_6c == 0) {
                *param_1 = 0;
                uStack_70 = 1;
                goto LAB_142b22781;
              }
              iVar1 = FUN_142b21bd0(param_6,1,iStack_78 + -1);
              if (iVar1 == 0) goto LAB_142b22781;
              iStack_78 = iStack_78 + 1;
            }
            if (uStack_68 < (ulonglong)(longlong)iStackX_18) {
              FID_conflict__assert((wchar_t *)s_u_143cbd960,(wchar_t *)s_D_143cbd880,0x308);
            }
            *param_1 = 1;
            uStack_70 = 1;
          }
LAB_142b22781:
          FUN_142b23110(lStack_60);
          FUN_142b1dd90(lStackX_20);
          FUN_142b1db50(lStack_58);
        }
      }
      else {
        *param_1 = 1;
        uStack_70 = 1;
      }
    }
  }
  return uStack_70;
}


/* address=142b227c0 name=FUN_142b227c0 */

undefined4
FUN_142b227c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined4 auStack_18 [6];
  
  iVar1 = FUN_142b22440(auStack_18,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    auStack_18[0] = 0xffffffff;
  }
  return auStack_18[0];
}


/* address=142b22820 name=FUN_142b22820 */

void FUN_142b22820(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142b227c0(param_1,param_2,param_3,0,param_4);
  return;
}


/* address=142b22870 name=FUN_142b22870 */

undefined4
FUN_142b22870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 auStack_14 [5];
  
  iVar1 = FUN_142b38060(param_1,auStack_14,param_2,param_3,param_4);
  if ((iVar1 != 0) && (iVar1 = FUN_142b1f7c0(param_1,param_1,auStack_14[0]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142b228f0 name=FUN_142b228f0 */

longlong FUN_142b228f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  longlong lStackX_8;
  longlong lStackX_10;
  undefined auStack_24 [4];
  longlong lStack_20;
  longlong lStack_18;
  
  lStack_18 = 0;
  lStackX_8 = param_1;
  if ((param_1 == 0) && (lStackX_8 = FUN_142b1d190(), lStack_18 = lStackX_8, lStackX_8 == 0)) {
    return 0;
  }
  bVar1 = false;
  lStack_20 = 0;
  if ((*(int *)(param_2 + 0x10) != 0) ||
     (iVar2 = FUN_142b1f330(param_2,param_3), lStackX_10 = param_2, -1 < iVar2)) {
    lStack_20 = FUN_142b1d2a0(param_2);
    if ((lStack_20 == 0) || (iVar2 = FUN_142b204d0(lStack_20,lStack_20,param_3,param_4), iVar2 == 0)
       ) goto LAB_142b22a1a;
    lStackX_10 = lStack_20;
  }
  iVar2 = FUN_142b1f6a0(param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_142b34270(lStackX_8,auStack_24,lStackX_10,param_3,param_4);
  }
  else {
    iVar2 = FUN_142b22bd0(lStackX_8,auStack_24,lStackX_10,param_3,param_4);
  }
  if (iVar2 != 0) {
    bVar1 = true;
  }
LAB_142b22a1a:
  if (!bVar1) {
    FUN_142b1d210(lStack_18);
    lStackX_8 = 0;
  }
  FUN_142b1d210(lStack_20);
  return lStackX_8;
}


/* address=142b22a50 name=FUN_142b22a50 */

undefined4
FUN_142b22a50(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined4 uStack_28;
  undefined auStack_20 [32];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  *param_2 = 0;
  iVar1 = FUN_142b1d620(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_142b1f210(param_3,param_4 + 0x18), -1 < iVar1)) {
    FUN_142afa690(3,0,0x6b,s_D__a_1_s_target_release_build_bo_143cbaec0,CONCAT44(uVar3,0x14c));
    return 0;
  }
  uStack_28 = 0;
  FUN_142b1d1e0(auStack_20);
  iVar1 = FUN_142b21a50(auStack_20,1,param_4 + 0x18);
  if (iVar1 != 0) {
    uVar2 = param_5;
    iVar1 = FUN_142b23300(param_1,auStack_20,param_3,param_4,param_5);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (iVar1 != 0) {
      uVar2 = param_5;
      iVar1 = FUN_142b22bd0(param_1,param_2,param_1,param_4 + 0x18,param_5);
      uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if (iVar1 != 0) {
        iVar1 = FUN_142b23300(param_1,auStack_20,param_1,param_4,param_5);
        uVar3 = (undefined4)((ulonglong)param_5 >> 0x20);
        if (iVar1 != 0) {
          uStack_28 = 1;
          goto LAB_142b22ba9;
        }
      }
    }
  }
  FUN_142afa690(3,0,3,s_D__a_1_s_target_release_build_bo_143cbaf30,CONCAT44(uVar3,0x158));
LAB_142b22ba9:
  FUN_142b1d210(auStack_20);
  return uStack_28;
}


/* address=142b22bd0 name=FUN_142b22bd0 */

undefined4
FUN_142b22bd0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iStack_48;
  undefined4 uStack_44;
  
  *param_2 = 0;
  iVar1 = FUN_142b1f6a0(param_4);
  if (iVar1 == 0) {
    FUN_142afa690(3,0,0x68,s_D__a_1_s_target_release_build_bo_143cbad70,0x79);
    return 0;
  }
  iVar1 = FUN_142b1d620(param_3);
  if ((iVar1 != 0) || (iVar1 = FUN_142b1f210(param_3,param_4), -1 < iVar1)) {
    FUN_142afa690(3,0,0x6b,s_D__a_1_s_target_release_build_bo_143cbade0,0x7e);
    return 0;
  }
  uStack_44 = 0;
  FUN_142b1dbe0(param_5);
  lVar2 = FUN_142b1dc40(param_5);
  uVar3 = FUN_142b1dc40(param_5);
  uVar4 = FUN_142b1dc40(param_5);
  lVar5 = FUN_142b1dc40(param_5);
  if (lVar5 != 0) {
    FUN_142b1d4c0(lVar5);
    iVar1 = FUN_142b1d4f0(uVar4);
    if (((iVar1 != 0) && (lVar6 = FUN_142b1d300(uVar3,param_3), lVar6 != 0)) &&
       (lVar6 = FUN_142b1d300(lVar2,param_4), lVar6 != 0)) {
      *(undefined4 *)(lVar2 + 0x10) = 0;
      while (iVar1 = FUN_142b1f5d0(uVar3), iVar1 == 0) {
        iStack_48 = 0;
        while (iVar1 = FUN_142b1fe60(uVar3,iStack_48), iVar1 == 0) {
          iStack_48 = iStack_48 + 1;
          iVar1 = FUN_142b1f6a0(uVar4);
          if (((iVar1 != 0) && (iVar1 = FUN_142b1ded0(uVar4,uVar4,param_4), iVar1 == 0)) ||
             (iVar1 = FUN_142b1fc00(uVar4,uVar4), iVar1 == 0)) goto LAB_142b22fe4;
        }
        if ((0 < iStack_48) && (iVar1 = FUN_142b1fb40(uVar3,uVar3,iStack_48), iVar1 == 0))
        goto LAB_142b22fe4;
        iStack_48 = 0;
        while (iVar1 = FUN_142b1fe60(lVar2,iStack_48), iVar1 == 0) {
          iStack_48 = iStack_48 + 1;
          iVar1 = FUN_142b1f6a0(lVar5);
          if (((iVar1 != 0) && (iVar1 = FUN_142b1ded0(lVar5,lVar5,param_4), iVar1 == 0)) ||
             (iVar1 = FUN_142b1fc00(lVar5,lVar5), iVar1 == 0)) goto LAB_142b22fe4;
        }
        if ((0 < iStack_48) && (iVar1 = FUN_142b1fb40(lVar2,lVar2,iStack_48), iVar1 == 0))
        goto LAB_142b22fe4;
        iVar1 = FUN_142b1f330(uVar3,lVar2);
        if (iVar1 < 0) {
          iVar1 = FUN_142b1ded0(lVar5,lVar5,uVar4);
          if (iVar1 == 0) goto LAB_142b22fe4;
          iVar1 = FUN_142b1e200(lVar2,lVar2,uVar3);
        }
        else {
          iVar1 = FUN_142b1ded0(uVar4,uVar4,lVar5);
          if (iVar1 == 0) goto LAB_142b22fe4;
          iVar1 = FUN_142b1e200(uVar3,uVar3,lVar2);
        }
        if (iVar1 == 0) goto LAB_142b22fe4;
      }
      iVar1 = FUN_142b1f5f0(lVar2);
      if (iVar1 == 0) {
        *param_2 = 1;
        FUN_142afa690(3,0,0x70,s_D__a_1_s_target_release_build_bo_143cbae50,0xf8);
      }
      else {
        iVar1 = FUN_142b1e0c0(lVar5,param_4,lVar5);
        if (iVar1 != 0) {
          if ((*(int *)(lVar5 + 0x10) == 0) && (iVar1 = FUN_142b1f330(lVar5,param_4), iVar1 < 0)) {
            lVar2 = FUN_142b1d300(param_1,lVar5);
            if (lVar2 == 0) goto LAB_142b22fe4;
          }
          else {
            iVar1 = FUN_142b204d0(param_1,lVar5,param_4,param_5);
            if (iVar1 == 0) goto LAB_142b22fe4;
          }
          uStack_44 = 1;
        }
      }
    }
  }
LAB_142b22fe4:
  FUN_142b1dd90(param_5);
  return uStack_44;
}


/* address=142b23000 name=FUN_142b23000 */

longlong FUN_142b23000(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_142b24de0();
  if ((lVar2 == 0) || (iVar1 = FUN_142b24e40(lVar2,param_1,param_2), iVar1 == 0)) {
    FUN_142b23110(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


/* address=142b23060 name=FUN_142b23060 */

longlong FUN_142b23060(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_142b24de0();
  if ((((lVar2 == 0) || (iVar1 = FUN_142b38700(lVar2,param_1), iVar1 == 0)) ||
      (iVar1 = FUN_142b31dc0(lVar2,*(int *)(lVar2 + 0x20) << 7,lVar2 + 0x18,param_2), iVar1 == 0))
     || (iVar1 = FUN_142b25460(lVar2,(longlong)*(int *)(lVar2 + 0x20)), iVar1 == 0)) {
    FUN_142b23110(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}


/* address=142b23110 name=FUN_142b23110 */

void FUN_142b23110(longlong param_1)

{
  if (param_1 != 0) {
    FUN_142b1d210(param_1);
    FUN_142b1d210(param_1 + 0x18);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142b23220 name=FUN_142b23220 */

void FUN_142b23220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142b23300(param_1,param_2,param_3,param_3,param_4);
  return;
}


/* address=142b23270 name=FUN_142b23270 */

undefined4
FUN_142b23270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uStack_18;
  
  uStack_18 = 0;
  FUN_142b1dbe0(param_4);
  lVar1 = FUN_142b1dc40(param_4);
  if ((lVar1 != 0) && (lVar2 = FUN_142b1d300(lVar1,param_2), lVar2 != 0)) {
    uStack_18 = FUN_142b38b00(param_1,lVar1,param_3);
  }
  FUN_142b1dd90(param_4);
  return uStack_18;
}


/* address=142b23300 name=FUN_142b23300 */

undefined8
FUN_142b23300(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_2 + 2) == 0) && (*(int *)(param_3 + 2) == 0)) {
    uVar1 = *(uint *)(param_4 + 0x20);
    if ((((int)uVar1 < 2) || (*(uint *)(param_2 + 1) != uVar1)) || (*(uint *)(param_3 + 1) != uVar1)
       ) {
      uVar3 = FUN_142b38c20(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      iVar2 = FUN_142b252e0(param_1,(longlong)(int)uVar1);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        if (0x400 < uVar1) {
          FID_conflict__assert((wchar_t *)s___143cbbde0,(wchar_t *)s_D_143cbbd00,0x1b5);
        }
        iVar2 = FUN_1426f9e00(*param_1,*param_2,*param_3,*(undefined8 *)(param_4 + 0x18),
                              param_4 + 0x30,(longlong)(int)uVar1);
        if (iVar2 == 0) {
          FID_conflict__assert((wchar_t *)&DAT_143cb7408,(wchar_t *)s_D_143cbbe30,0x1b8);
          FUN_142afa690(3,0,0x44,s_D__a_1_s_target_release_build_bo_143cbbf10,0x1b9);
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
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cbbc90,0x1a6);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=142b23750 name=FUN_142b23750 */

void FUN_142b23750(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined auStack_198 [32];
  undefined8 uStack_178;
  int iStack_168;
  uint uStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  longlong lStack_150;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong lStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  longlong alStack_118 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_198;
  iVar1 = FUN_142b1f6a0(param_4);
  if (iVar1 == 0) {
    uStack_178 = CONCAT44(uStack_178._4_4_,0x24e);
    FUN_142afa690(3,0,0x68,s_D__a_1_s_target_release_build_bo_143cb9760);
    goto LAB_142b23d58;
  }
  if (*(int *)(param_4 + 0x10) != 0) {
    uStack_178 = CONCAT44(uStack_178._4_4_,0x252);
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cb97e0);
    goto LAB_142b23d58;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar2 = FUN_142b1f330(param_2,param_4);
    iVar1 = FUN_142b13360(uVar2);
    if (iVar1 < 0) {
      iStack_144 = FUN_142b1d430(param_3);
      if (iStack_144 == 0) {
        iVar1 = FUN_142b1f500(param_4,1);
        if (iVar1 == 0) {
          FUN_142b1d4f0(param_1);
        }
        else {
          FUN_142b1d4c0(param_1);
        }
        goto LAB_142b23d58;
      }
      uStack_13c = 0;
      lStack_138 = 0;
      FUN_142b1dbe0(param_5);
      lStack_150 = FUN_142b1dc40(param_5);
      alStack_118[0] = FUN_142b1dc40(param_5);
      if (((lStack_150 != 0) && (alStack_118[0] != 0)) &&
         ((param_6 != 0 ||
          (param_6 = FUN_142b23060(param_4,param_5), lStack_138 = param_6, param_6 != 0)))) {
        iStack_148 = FUN_142b377b0((longlong)iStack_144);
        iVar1 = FUN_142b23220(alStack_118[0],param_2,param_6,param_5);
        if (iVar1 != 0) {
          if (iStack_148 < 2) {
LAB_142b23aa4:
            iStack_154 = 1;
            iStack_168 = iStack_144 + -1;
            while( true ) {
              while (iVar1 = FUN_142b1fe60(param_3,iStack_168), iVar1 != 0) {
                uStack_164 = 1;
                iStack_158 = 0;
                for (iStack_15c = 1; (iStack_15c < iStack_148 && (iStack_15c <= iStack_168));
                    iStack_15c = iStack_15c + 1) {
                  iVar1 = FUN_142b1fe60(param_3,iStack_168 - iStack_15c);
                  if (iVar1 != 0) {
                    uStack_164 = uStack_164 << ((char)iStack_15c - (char)iStack_158 & 0x1fU) | 1;
                    iStack_158 = iStack_15c;
                  }
                }
                if (iStack_154 == 0) {
                  for (iStack_140 = 0; iStack_140 < iStack_158 + 1; iStack_140 = iStack_140 + 1) {
                    uStack_178 = param_5;
                    iVar1 = FUN_142b23300(lStack_150,lStack_150,lStack_150,param_6);
                    if (iVar1 == 0) goto LAB_142b23d3d;
                  }
                }
                if ((uStack_164 & 1) == 0) {
                  FID_conflict__assert((wchar_t *)s_w_143cb99c8,(wchar_t *)s_D_143cb98e0,0x2b4);
                }
                uStack_12c = 1;
                if (1 << ((byte)iStack_148 & 0x1f) <= (int)uStack_164) {
                  FID_conflict__assert((wchar_t *)s_w_143cb9ac8,(wchar_t *)s_D_143cb99e0,0x2b5);
                }
                if (iStack_154 == 0) {
                  uStack_178 = param_5;
                  iVar1 = FUN_142b23300(lStack_150,lStack_150,alStack_118[(int)uStack_164 >> 1],
                                        param_6);
                  if (iVar1 == 0) goto LAB_142b23d3d;
                }
                else {
                  lVar3 = FUN_142b1d300(lStack_150,alStack_118[(int)uStack_164 >> 1]);
                  if (lVar3 == 0) goto LAB_142b23d3d;
                }
                iStack_154 = 0;
                if (iStack_168 == iStack_158) goto LAB_142b23ceb;
                iStack_168 = iStack_168 - (iStack_158 + 1);
              }
              if (iStack_154 == 0) {
                uStack_178 = param_5;
                iVar1 = FUN_142b23300(lStack_150,lStack_150,lStack_150,param_6);
                if (iVar1 == 0) goto LAB_142b23d3d;
              }
              if (iStack_168 == 0) break;
              iStack_168 = iStack_168 + -1;
            }
LAB_142b23ceb:
            if (iStack_154 != 0) {
              FID_conflict__assert((wchar_t *)s___143cb9be8,(wchar_t *)s_D_143cb9b00,0x2c6);
            }
            iVar1 = FUN_142b23270(param_1,lStack_150,param_6,param_5);
            if (iVar1 != 0) {
              uStack_13c = 1;
            }
          }
          else {
            lStack_128 = FUN_142b1dc40(param_5);
            if (lStack_128 != 0) {
              uStack_178 = param_5;
              iVar1 = FUN_142b23300(lStack_128,alStack_118[0],alStack_118[0],param_6);
              if (iVar1 != 0) {
                for (iStack_160 = 1; uStack_130 = 1,
                    iStack_160 < 1 << ((char)iStack_148 - 1U & 0x1f); iStack_160 = iStack_160 + 1) {
                  lVar3 = FUN_142b1dc40(param_5);
                  alStack_118[iStack_160] = lVar3;
                  if (alStack_118[iStack_160] == 0) goto LAB_142b23d3d;
                  uStack_178 = param_5;
                  iVar1 = FUN_142b23300(alStack_118[iStack_160],alStack_118[iStack_160 + -1],
                                        lStack_128,param_6);
                  if (iVar1 == 0) goto LAB_142b23d3d;
                }
                goto LAB_142b23aa4;
              }
            }
          }
        }
      }
LAB_142b23d3d:
      FUN_142b23110(lStack_138);
      FUN_142b1dd90(param_5);
      goto LAB_142b23d58;
    }
  }
  uStack_178 = CONCAT44(uStack_178._4_4_,599);
  FUN_142afa690(3,0,0x6b,s_D__a_1_s_target_release_build_bo_143cb9860);
LAB_142b23d58:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_198);
  return;
}


/* address=142b23d80 name=FUN_142b23d80 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142b23d80(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined auStack_1718 [32];
  undefined8 uStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  int iStack_16c0;
  int iStack_16bc;
  uint uStack_16b8;
  uint uStack_16b4;
  uint uStack_16b0;
  undefined *puStack_16a8;
  ushort auStack_16a0 [4];
  undefined *puStack_1698;
  undefined4 uStack_1690;
  uint uStack_168c;
  undefined4 uStack_1688;
  undefined4 uStack_1684;
  undefined *puStack_1680;
  undefined8 *puStack_1678;
  int iStack_1670;
  int iStack_166c;
  ulonglong uStack_1668;
  int iStack_1660;
  undefined4 uStack_165c;
  undefined *puStack_1658;
  int iStack_1650;
  uint uStack_164c;
  undefined4 uStack_1648;
  undefined4 uStack_1644;
  uint uStack_1640;
  uint uStack_163c;
  uint uStack_1638;
  uint uStack_1634;
  int iStack_1630;
  longlong lStack_1628;
  undefined8 *puStack_1620;
  undefined4 uStack_1618;
  longlong lStack_1610;
  undefined auStack_1600 [5568];
  ulonglong uStack_40;
  undefined8 uStack_10;
  
  uStack_10 = 0x142b23d9f;
  uStack_40 = DAT_143cf7840 ^ (ulonglong)auStack_1718;
  uStack_165c = 0;
  puStack_1620 = (undefined8 *)0x0;
  lStack_1628 = 0;
  uStack_1668 = 0;
  puStack_16a8 = (undefined *)0x0;
  iVar1 = FUN_142b1f6a0(param_4);
  if (iVar1 == 0) {
    uStack_16f8 = (undefined8 *)CONCAT44(uStack_16f8._4_4_,0x37e);
    FUN_142afa690(3,0,0x68,s_D__a_1_s_target_release_build_bo_143cba220);
    goto LAB_142b24b4b;
  }
  if (*(int *)(param_4 + 2) != 0) {
    uStack_16f8 = (undefined8 *)CONCAT44(uStack_16f8._4_4_,0x382);
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cba2a0);
    goto LAB_142b24b4b;
  }
  if ((*(int *)(param_2 + 2) != 0) || (iVar1 = FUN_142b1f330(param_2,param_4), -1 < iVar1)) {
    uStack_16f8 = (undefined8 *)CONCAT44(uStack_16f8._4_4_,0x386);
    FUN_142afa690(3,0,0x6b,s_D__a_1_s_target_release_build_bo_143cba320);
    goto LAB_142b24b4b;
  }
  iStack_16bc = *(int *)(param_3 + 1) * 0x40;
  iStack_166c = iStack_16bc;
  if (iStack_16bc == 0) {
    iVar1 = FUN_142b1f500(param_4,1);
    if (iVar1 == 0) {
      FUN_142b1d4f0(param_1);
    }
    else {
      FUN_142b1d4c0(param_1);
    }
    goto LAB_142b24b4b;
  }
  if ((param_6 != (undefined8 *)0x0) ||
     (param_6 = (undefined8 *)FUN_142b23060(param_4,param_5), puStack_1620 = param_6,
     param_6 != (undefined8 *)0x0)) {
    uStack_16b8 = *(uint *)(param_6 + 4);
    if ((*(int *)(param_2 + 1) == 0x10) &&
       (((*(int *)(param_3 + 1) == 0x10 && (iVar1 = FUN_142b1d430(param_4), iVar1 == 0x400)) &&
        (iVar1 = FUN_142b37110(), iVar1 != 0)))) {
      iVar1 = FUN_142b252e0(param_1,0x10);
      if (iVar1 != 0) {
        uStack_16e8 = auStack_1600;
        uStack_16f0 = param_6[6];
        uStack_16f8 = (undefined8 *)*param_6;
        FUN_142b36b40(*param_1,*param_2,*param_3,*param_4);
        *(undefined4 *)(param_1 + 1) = 0x10;
        *(undefined4 *)(param_1 + 2) = 0;
        uStack_165c = 1;
      }
    }
    else {
      if (iStack_16bc < 0x3aa) {
        if (iStack_16bc < 0x133) {
          if (iStack_16bc < 0x5a) {
            if (iStack_16bc < 0x17) {
              uStack_1640 = 1;
            }
            else {
              uStack_1640 = 3;
            }
            uStack_163c = uStack_1640;
          }
          else {
            uStack_163c = 4;
          }
          uStack_1638 = uStack_163c;
        }
        else {
          uStack_1638 = 5;
        }
        uStack_1634 = uStack_1638;
      }
      else {
        uStack_1634 = 6;
      }
      uStack_16b0 = uStack_1634;
      if (6 < uStack_1634) {
        FID_conflict__assert((wchar_t *)s_w_143cba490,(wchar_t *)s_D_143cba3a0,0x3bf);
      }
      if (0x400 < uStack_16b8) {
        FID_conflict__assert((wchar_t *)s___143cba5d0,(wchar_t *)s_D_143cba4e0,0x3c3);
      }
      if (4 < (int)uStack_16b0) {
        uStack_16b0 = 5;
        uStack_1668 = uStack_1668 + (longlong)(int)uStack_16b8 * 8;
      }
      uStack_1618 = 1;
      iStack_1660 = 1 << ((byte)uStack_16b0 & 0x1f);
      uStack_1668 = uStack_1668 + (longlong)(int)uStack_16b8 * 8 * (longlong)(iStack_1660 + 2);
      if (uStack_1668 < 0x15c1) {
        puStack_16a8 = auStack_1600;
      }
      if ((puStack_16a8 == (undefined *)0x0) && ((int)(uStack_16b8 * 0x40) < 0x401)) {
        FID_conflict__assert((wchar_t *)s_p_143cba710,(wchar_t *)s_D_143cba620,0x3db);
      }
      if (puStack_16a8 == (undefined *)0x0) {
        lStack_1628 = FUN_142b0e970(uStack_1668 + 0x40);
        if (lStack_1628 == 0) goto LAB_142b24b11;
        puStack_16a8 = (undefined *)FUN_142b13060(lStack_1628,0x40);
      }
      FUN_142b134e0(puStack_16a8,0,uStack_1668);
      puStack_1698 = puStack_16a8 + (longlong)(int)(uStack_16b8 * iStack_1660) * 8;
      puStack_1658 = puStack_1698 + (longlong)(int)uStack_16b8 * 8;
      iStack_1650 = 0;
      uStack_1690 = 0;
      uStack_164c = uStack_16b8;
      uStack_168c = uStack_16b8;
      uStack_1648 = 0;
      uStack_1688 = 0;
      uStack_1644 = 2;
      uStack_1684 = 2;
      iVar1 = FUN_142b32300(&puStack_1698,param_6,param_5);
      if ((iVar1 != 0) &&
         (iVar1 = FUN_142b25460(&puStack_1698,(longlong)(int)uStack_16b8), iVar1 != 0)) {
        if (*(int *)(param_2 + 2) != 0) {
          FID_conflict__assert((wchar_t *)s___143cba858,(wchar_t *)s_D_143cba770,0x3f5);
        }
        iVar1 = FUN_142b1f330(param_2,param_4);
        if (-1 < iVar1) {
          FID_conflict__assert((wchar_t *)s_B_143cba958,(wchar_t *)s_D_143cba870,0x3f6);
        }
        iVar1 = FUN_142b23220(&puStack_1658,param_2,param_6,param_5);
        if ((iVar1 != 0) &&
           (iVar1 = FUN_142b25460(&puStack_1658,(longlong)(int)uStack_16b8), iVar1 != 0)) {
          if ((uStack_16b0 == 5) && (1 < (int)uStack_16b8)) {
            puStack_1680 = puStack_1658 + (longlong)(int)uStack_16b8 * 8;
            for (iStack_16c0 = 0; iStack_16c0 < (int)uStack_16b8; iStack_16c0 = iStack_16c0 + 1) {
              *(undefined8 *)(puStack_1680 + (longlong)iStack_16c0 * 8) =
                   *(undefined8 *)(param_6[3] + (longlong)iStack_16c0 * 8);
            }
            puStack_1678 = param_6 + 6;
            FUN_1426fe0d0(puStack_1698,(longlong)(int)uStack_16b8,puStack_16a8,0);
            FUN_1426fe0d0(puStack_1658,(longlong)iStack_1650,puStack_16a8,1);
            uStack_16f0 = (longlong)(int)uStack_16b8;
            uStack_16f8 = puStack_1678;
            FUN_1426f9e00(puStack_1698,puStack_1658,puStack_1658,puStack_1680);
            FUN_1426fe0d0(puStack_1698,(longlong)(int)uStack_16b8,puStack_16a8,2);
            for (iStack_16c0 = 4; iStack_16c0 < 0x20; iStack_16c0 = iStack_16c0 << 1) {
              uStack_16f0 = (longlong)(int)uStack_16b8;
              uStack_16f8 = puStack_1678;
              FUN_1426f9e00(puStack_1698,puStack_1698,puStack_1698,puStack_1680);
              FUN_1426fe0d0(puStack_1698,(longlong)(int)uStack_16b8,puStack_16a8,
                            (longlong)iStack_16c0);
            }
            for (iStack_16c0 = 3; iStack_16c0 < 0x20; iStack_16c0 = iStack_16c0 + 2) {
              uStack_16e8 = (undefined *)CONCAT44(uStack_16e8._4_4_,iStack_16c0 + -1);
              uStack_16f0 = CONCAT44(uStack_16f0._4_4_,uStack_16b8);
              uStack_16f8 = puStack_1678;
              FUN_1426fb0c0(puStack_1698,puStack_1658,puStack_16a8,puStack_1680);
              FUN_1426fe0d0(puStack_1698,(longlong)(int)uStack_16b8,puStack_16a8,
                            (longlong)iStack_16c0);
              iStack_1670 = iStack_16c0;
              while (iStack_1670 = iStack_1670 << 1, iStack_1670 < 0x20) {
                uStack_16f0 = (longlong)(int)uStack_16b8;
                uStack_16f8 = puStack_1678;
                FUN_1426f9e00(puStack_1698,puStack_1698,puStack_1698,puStack_1680);
                FUN_1426fe0d0(puStack_1698,(longlong)(int)uStack_16b8,puStack_16a8,
                              (longlong)iStack_1670);
              }
            }
            iStack_16bc = iStack_16bc + -1;
            uStack_16b4 = 0;
            for (iStack_16c0 = iStack_16bc % 5; -1 < iStack_16c0; iStack_16c0 = iStack_16c0 + -1) {
              iVar1 = FUN_142b1fe60(param_3,iStack_16bc);
              uStack_16b4 = iVar1 + uStack_16b4 * 2;
              iStack_16bc = iStack_16bc + -1;
            }
            FUN_1426fe100(puStack_1698,(longlong)(int)uStack_16b8,puStack_16a8,
                          (longlong)(int)uStack_16b4);
            if ((iStack_16bc < -1) || ((iStack_16bc != -1 && (iStack_16bc % 5 != 4)))) {
              FID_conflict__assert((wchar_t *)s_b_143cbaa70,(wchar_t *)s_D_143cba980,0x434);
            }
            if ((uStack_16b8 & 7) == 0) {
              lStack_1610 = *param_3;
              if (iStack_166c <= iStack_16bc) {
                FID_conflict__assert((wchar_t *)s_b_143cbabb8,(wchar_t *)s_D_143cbaad0,0x447);
              }
              if (iStack_166c < 0x40) {
                FID_conflict__assert((wchar_t *)s_m_143cbacc8,(wchar_t *)s_D_143cbabe0,0x44a);
              }
              if (iStack_166c + -8 <= iStack_16bc + -4) {
                uVar2 = (int)(uint)*(byte *)(lStack_1610 + (*(int *)(param_3 + 1) * 8 + -1)) >>
                        ((char)iStack_16bc - 4U & 7);
                uStack_16b4 = uVar2 & 0x1f;
                iStack_16bc = iStack_16bc + -5;
                uStack_16e8 = (undefined *)(CONCAT44(uStack_16e8._4_4_,uVar2) & 0xffffffff0000001f);
                uStack_16f0 = CONCAT44(uStack_16f0._4_4_,uStack_16b8);
                uStack_16f8 = puStack_1678;
                FUN_1426fc080(puStack_1698,puStack_1698,puStack_16a8,puStack_1680);
              }
              while (-1 < iStack_16bc) {
                iStack_1630 = iStack_16bc + -4;
                FUN_142b13440(auStack_16a0,lStack_1610 + (iStack_1630 >> 3),2);
                auStack_16a0[0] = auStack_16a0[0] >> ((byte)iStack_1630 & 7) & 0x1f;
                iStack_16bc = iStack_16bc + -5;
                uStack_16e8 = (undefined *)CONCAT44(uStack_16e8._4_4_,(uint)auStack_16a0[0]);
                uStack_16f0 = CONCAT44(uStack_16f0._4_4_,uStack_16b8);
                uStack_16f8 = puStack_1678;
                FUN_1426fc080(puStack_1698,puStack_1698,puStack_16a8,puStack_1680);
              }
            }
            else {
              while (-1 < iStack_16bc) {
                uStack_16b4 = 0;
                for (iStack_16c0 = 0; iStack_16c0 < 5; iStack_16c0 = iStack_16c0 + 1) {
                  iVar1 = FUN_142b1fe60(param_3,iStack_16bc);
                  uStack_16b4 = iVar1 + uStack_16b4 * 2;
                  iStack_16bc = iStack_16bc + -1;
                }
                uStack_16f0 = (longlong)(int)uStack_16b8;
                uStack_16f8 = puStack_1678;
                FUN_1426f9e00(puStack_1698,puStack_1698,puStack_1698,puStack_1680);
                uStack_16f0 = (longlong)(int)uStack_16b8;
                uStack_16f8 = puStack_1678;
                FUN_1426f9e00(puStack_1698,puStack_1698,puStack_1698,puStack_1680);
                uStack_16f0 = (longlong)(int)uStack_16b8;
                uStack_16f8 = puStack_1678;
                FUN_1426f9e00(puStack_1698,puStack_1698,puStack_1698,puStack_1680);
                uStack_16f0 = (longlong)(int)uStack_16b8;
                uStack_16f8 = puStack_1678;
                FUN_1426f9e00(puStack_1698,puStack_1698,puStack_1698,puStack_1680);
                uStack_16f0 = (longlong)(int)uStack_16b8;
                uStack_16f8 = puStack_1678;
                FUN_1426f9e00(puStack_1698,puStack_1698,puStack_1698,puStack_1680);
                uStack_16e8 = (undefined *)CONCAT44(uStack_16e8._4_4_,uStack_16b4);
                uStack_16f0 = CONCAT44(uStack_16f0._4_4_,uStack_16b8);
                uStack_16f8 = puStack_1678;
                FUN_1426fb0c0(puStack_1698,puStack_1698,puStack_16a8,puStack_1680);
              }
            }
LAB_142b24ae3:
            iVar1 = FUN_142b23270(param_1,&puStack_1698,param_6,param_5);
            if (iVar1 != 0) {
              uStack_165c = 1;
            }
          }
          else {
            uStack_16f8._0_4_ = uStack_16b0;
            FUN_142b37d30(&puStack_1698,uStack_16b8,puStack_16a8,0);
            uStack_16f8 = (undefined8 *)CONCAT44(uStack_16f8._4_4_,uStack_16b0);
            FUN_142b37d30(&puStack_1658,uStack_16b8,puStack_16a8,1);
            if (1 < (int)uStack_16b0) {
              uStack_16f8 = param_5;
              iVar1 = FUN_142b23300(&puStack_1698,&puStack_1658,&puStack_1658,param_6);
              if (iVar1 == 0) goto LAB_142b24b11;
              uStack_16f8 = (undefined8 *)CONCAT44(uStack_16f8._4_4_,uStack_16b0);
              FUN_142b37d30(&puStack_1698,uStack_16b8,puStack_16a8,2);
              for (iStack_16c0 = 3; iStack_16c0 < iStack_1660; iStack_16c0 = iStack_16c0 + 1) {
                uStack_16f8 = param_5;
                iVar1 = FUN_142b23300(&puStack_1698,&puStack_1658,&puStack_1698,param_6);
                if (iVar1 == 0) goto LAB_142b24b11;
                uStack_16f8 = (undefined8 *)CONCAT44(uStack_16f8._4_4_,uStack_16b0);
                FUN_142b37d30(&puStack_1698,uStack_16b8,puStack_16a8,iStack_16c0);
              }
            }
            iStack_16bc = iStack_16bc + -1;
            uStack_16b4 = 0;
            for (iStack_16c0 = iStack_16bc % (int)uStack_16b0; -1 < iStack_16c0;
                iStack_16c0 = iStack_16c0 + -1) {
              iVar1 = FUN_142b1fe60(param_3,iStack_16bc);
              uStack_16b4 = iVar1 + uStack_16b4 * 2;
              iStack_16bc = iStack_16bc + -1;
            }
            uStack_16f8 = (undefined8 *)CONCAT44(uStack_16f8._4_4_,uStack_16b0);
            iVar1 = FUN_142b37da0(&puStack_1698,uStack_16b8,puStack_16a8,uStack_16b4);
            while (iVar1 != 0) {
              if (iStack_16bc < 0) goto LAB_142b24ae3;
              uStack_16b4 = 0;
              for (iStack_16c0 = 0; iStack_16c0 < (int)uStack_16b0; iStack_16c0 = iStack_16c0 + 1) {
                uStack_16f8 = param_5;
                iVar1 = FUN_142b23300(&puStack_1698,&puStack_1698,&puStack_1698,param_6);
                if (iVar1 == 0) goto LAB_142b24b11;
                iVar1 = FUN_142b1fe60(param_3,iStack_16bc);
                uStack_16b4 = iVar1 + uStack_16b4 * 2;
                iStack_16bc = iStack_16bc + -1;
              }
              uStack_16f8 = (undefined8 *)CONCAT44(uStack_16f8._4_4_,uStack_16b0);
              iVar1 = FUN_142b37da0(&puStack_1658,uStack_16b8,puStack_16a8,uStack_16b4);
              if (iVar1 == 0) break;
              uStack_16f8 = param_5;
              iVar1 = FUN_142b23300(&puStack_1698,&puStack_1698,&puStack_1658,param_6);
            }
          }
        }
      }
    }
  }
LAB_142b24b11:
  FUN_142b23110(puStack_1620);
  if ((puStack_16a8 != (undefined *)0x0) && (lStack_1628 == 0)) {
    FUN_142b0ec40(puStack_16a8,uStack_1668);
  }
  FUN_142b0eaa0(lStack_1628);
LAB_142b24b4b:
  FUN_142c6a7d0(uStack_40 ^ (ulonglong)auStack_1718);
  return;
}


/* address=142b24c70 name=FUN_142b24c70 */

undefined4
FUN_142b24c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  undefined4 uStack_38;
  longlong lStack_30;
  undefined auStack_28 [40];
  
  FUN_142b1d1e0(auStack_28);
  uStack_38 = 0;
  lStack_30 = 0;
  if ((((param_8 != 0) ||
       (param_8 = FUN_142b23000(param_6,param_7), lStack_30 = param_8, param_8 != 0)) &&
      (iVar1 = FUN_142b23750(param_1,param_2,param_3,param_6,param_7,param_8), iVar1 != 0)) &&
     (((iVar1 = FUN_142b23750(auStack_28,param_4,param_5,param_6,param_7,param_8), iVar1 != 0 &&
       (iVar1 = FUN_142b23220(param_1,param_1,param_8,param_7), iVar1 != 0)) &&
      (iVar1 = FUN_142b23300(param_1,param_1,auStack_28,param_8,param_7), iVar1 != 0)))) {
    uStack_38 = 1;
  }
  FUN_142b23110(lStack_30);
  FUN_142b1d210(auStack_28);
  return uStack_38;
}


/* address=142b24de0 name=FUN_142b24de0 */

longlong FUN_142b24de0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142b0e970(0x40);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_142b134e0(lVar1,0,0x40);
    FUN_142b1d1e0(lVar1);
    FUN_142b1d1e0(lVar1 + 0x18);
  }
  return lVar1;
}


/* address=142b24e40 name=FUN_142b24e40 */

undefined4 FUN_142b24e40(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lStackX_18;
  undefined4 uStack_28;
  longlong lStack_18;
  
  iVar1 = FUN_142b38700(param_1,param_2);
  if (iVar1 == 0) {
    uStack_28 = 0;
  }
  else {
    lStack_18 = 0;
    lStackX_18 = param_3;
    if ((param_3 == 0) && (lStackX_18 = FUN_142b1dae0(), lStack_18 = lStackX_18, lStackX_18 == 0)) {
      uStack_28 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x20);
      FUN_142b1d4c0(param_1);
      iVar1 = FUN_142b1fc90(param_1,iVar1 << 7);
      if (((iVar1 == 0) ||
          (iVar1 = FUN_142b1e5c0(0,param_1,param_1,param_1 + 0x18,lStackX_18), iVar1 == 0)) ||
         (iVar1 = FUN_142b25460(param_1,(longlong)*(int *)(param_1 + 0x20)), iVar1 == 0)) {
        uStack_28 = 0;
      }
      else {
        uStack_28 = 1;
      }
      FUN_142b1db50(lStack_18);
    }
  }
  return uStack_28;
}


/* address=142b24f70 name=FUN_142b24f70 */

int FUN_142b24f70(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uStack_24;
  
  uStack_24 = (uint)(param_1 != 0);
  lVar1 = -(param_1 >> 0x20);
  param_1 = param_1 ^ (param_1 >> 0x20 ^ param_1) & lVar1 >> 0x3f;
  lVar2 = -(param_1 >> 0x10);
  param_1 = param_1 ^ (param_1 >> 0x10 ^ param_1) & lVar2 >> 0x3f;
  lVar3 = -(param_1 >> 8);
  param_1 = param_1 ^ (param_1 >> 8 ^ param_1) & lVar3 >> 0x3f;
  lVar4 = -(param_1 >> 4);
  param_1 = param_1 ^ (param_1 >> 4 ^ param_1) & lVar4 >> 0x3f;
  lVar5 = -(param_1 >> 2);
  return uStack_24 + ((uint)(lVar1 >> 0x3f) & 0x20) + ((uint)(lVar2 >> 0x3f) & 0x10) +
         ((uint)(lVar3 >> 0x3f) & 8) + ((uint)(lVar4 >> 0x3f) & 4) + ((uint)(lVar5 >> 0x3f) & 2) +
         ((uint)((longlong)-((param_1 ^ (param_1 >> 2 ^ param_1) & lVar5 >> 0x3f) >> 1) >> 0x3f) & 1
         );
}


/* address=142b25210 name=FUN_142b25210 */

uint FUN_142b25210(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=142b25230 name=FUN_142b25230 */

uint FUN_142b25230(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=142b25250 name=FUN_142b25250 */

int FUN_142b25250(longlong *param_1)

{
  int iStack_18;
  
  iStack_18 = *(int *)(param_1 + 1);
  while ((0 < iStack_18 && (*(longlong *)(*param_1 + (longlong)(iStack_18 + -1) * 8) == 0))) {
    iStack_18 = iStack_18 + -1;
  }
  return iStack_18;
}


/* address=142b252a0 name=FUN_142b252a0 */

void FUN_142b252a0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_142b25250(param_1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


/* address=142b252e0 name=FUN_142b252e0 */

undefined8 FUN_142b252e0(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uStackX_10;
  
  if ((ulonglong)(longlong)*(int *)((longlong)param_1 + 0xc) < param_2) {
    if (param_2 < 0x800000) {
      if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
        lVar2 = FUN_142b0e970(param_2 << 3);
        if (lVar2 == 0) {
          uVar1 = 0;
        }
        else {
          FUN_142b13440(lVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
          FUN_142b0eaa0(*param_1);
          *param_1 = lVar2;
          uStackX_10 = (undefined4)param_2;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStackX_10;
          uVar1 = 1;
        }
      }
      else {
        FUN_142afa690(3,0,0x6a,s_D__a_1_s_target_release_build_bo_143cb82c0,0x168);
        uVar1 = 0;
      }
    }
    else {
      FUN_142afa690(3,0,0x66,s_D__a_1_s_target_release_build_bo_143cb8250,0x163);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142b253f0 name=FUN_142b253f0 */

undefined8 FUN_142b253f0(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 + 0x3f < param_2) {
    FUN_142afa690(3,0,0x66,s_D__a_1_s_target_release_build_bo_143cb8330,0x17c);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142b252e0(param_1,(param_2 + 0x3f) / 0x40);
  }
  return uVar1;
}


/* address=142b25460 name=FUN_142b25460 */

undefined8 FUN_142b25460(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uStackX_10;
  
  uStackX_10 = (undefined4)param_2;
  if (param_2 < (ulonglong)(longlong)*(int *)(param_1 + 1)) {
    iVar1 = FUN_142b256e0(param_1,param_2);
    if (iVar1 == 0) {
      FUN_142afa690(3,0,0x66,s_D__a_1_s_target_release_build_bo_143cb83a0,399);
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = uStackX_10;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = FUN_142b252e0(param_1,param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_142b134e0(*param_1 + (longlong)*(int *)(param_1 + 1) * 8,0,
                    (param_2 - (longlong)*(int *)(param_1 + 1)) * 8);
      *(undefined4 *)(param_1 + 1) = uStackX_10;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=142b25540 name=FUN_142b25540 */

void FUN_142b25540(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  ulonglong uStack_18;
  
  for (uStack_18 = 0; uStack_18 < param_5; uStack_18 = uStack_18 + 1) {
    uVar1 = FUN_142b132d0(param_2,*(undefined8 *)(param_3 + uStack_18 * 8),
                          *(undefined8 *)(param_4 + uStack_18 * 8));
    *(undefined8 *)(param_1 + uStack_18 * 8) = uVar1;
  }
  return;
}


/* address=142b255c0 name=FUN_142b255c0 */

bool FUN_142b255c0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uStackX_18;
  
  iVar1 = FUN_142b252e0(param_1,param_3);
  if (iVar1 != 0) {
    FUN_142b13490(*param_1,param_2,param_3 << 3);
    uStackX_18 = (undefined4)param_3;
    *(undefined4 *)(param_1 + 1) = uStackX_18;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return iVar1 != 0;
}


/* address=142b25630 name=FUN_142b25630 */

void FUN_142b25630(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 uStackX_18;
  
  if ((*(uint *)((longlong)param_1 + 0x14) & 2) == 0) {
    FUN_142b0eaa0(*param_1);
  }
  *param_1 = param_2;
  if (0x7fffff < param_3) {
    FID_conflict__assert((wchar_t *)s_n_143cb8140,(wchar_t *)s_D_143cb8070,299);
  }
  uStackX_18 = (undefined4)param_3;
  *(undefined4 *)(param_1 + 1) = uStackX_18;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStackX_18;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 2;
  return;
}


/* address=142b256e0 name=FUN_142b256e0 */

bool FUN_142b256e0(longlong *param_1,ulonglong param_2)

{
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = 0;
  for (uStack_20 = param_2; uStack_20 < (ulonglong)(longlong)*(int *)(param_1 + 1);
      uStack_20 = uStack_20 + 1) {
    uStack_18 = uStack_18 | *(ulonglong *)(*param_1 + uStack_20 * 8);
  }
  return uStack_18 == 0;
}


/* address=142b25770 name=FUN_142b25770 */

undefined8 FUN_142b25770(undefined8 param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uStack_18;
  
  if (*(int *)(param_3 + 2) == 0) {
    uStack_18 = (ulonglong)*(int *)(param_3 + 1);
    if ((param_2 < uStack_18) &&
       (iVar1 = FUN_142b256e0(param_3,param_2), uStack_18 = param_2, iVar1 == 0)) {
      FUN_142afa690(3,0,0x66,s_D__a_1_s_target_release_build_bo_143cb81e0,0x144);
      uVar2 = 0;
    }
    else {
      FUN_142b134e0(param_1,0,param_2 << 3);
      FUN_142b13440(param_1,*param_3,uStack_18 << 3);
      uVar2 = 1;
    }
  }
  else {
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cb8170,0x13d);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142b25860 name=FUN_142b25860 */

void FUN_142b25860(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uStack_28;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(param_1 + 1);
  uStack_28 = param_2;
  if (param_2 < (ulonglong)((longlong)iVar1 << 3)) {
    for (; uStack_28 < (ulonglong)((longlong)iVar1 << 3); uStack_28 = uStack_28 + 1) {
      if (*(char *)(lVar2 + uStack_28) != '\0') {
        FID_conflict__assert((wchar_t *)s_b_143cb86e8,(wchar_t *)s_D_143cb8610,0xab);
      }
    }
  }
  return;
}


/* address=142b25900 name=FUN_142b25900 */

ulonglong FUN_142b25900(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

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
  ulonglong *puStackX_8;
  ulonglong *puStackX_10;
  ulonglong uStackX_18;
  ulonglong uStack_108;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  
  uStack_108 = 0;
  puStackX_8 = param_1;
  puStackX_10 = param_2;
  uStackX_18 = param_3;
  if (param_3 == 0) {
    uStack_108 = 0;
  }
  else {
    for (; (uStackX_18 & 0xfffffffffffffffc) != 0; uStackX_18 = uStackX_18 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *puStackX_10;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      uVar11 = SUB168(auVar1 * auVar6,0);
      uStack_d8 = (uint)(*puStackX_8 + uStack_108 < uStack_108);
      uVar12 = *puStackX_8 + uStack_108 + uVar11;
      uStack_d4 = (uint)(uVar12 < uVar11);
      uVar13 = (longlong)(int)uStack_d8 + SUB168(auVar1 * auVar6,8) + (longlong)(int)uStack_d4;
      *puStackX_8 = uVar12;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = puStackX_10[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_4;
      uVar11 = SUB168(auVar2 * auVar7,0);
      uVar12 = puStackX_8[1] + uVar13;
      uStack_d0 = (uint)(uVar12 < uVar13);
      uVar12 = uVar12 + uVar11;
      uStack_cc = (uint)(uVar12 < uVar11);
      uVar13 = (longlong)(int)uStack_d0 + SUB168(auVar2 * auVar7,8) + (longlong)(int)uStack_cc;
      puStackX_8[1] = uVar12;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = puStackX_10[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      uVar11 = SUB168(auVar3 * auVar8,0);
      uVar12 = puStackX_8[2] + uVar13;
      uStack_c8 = (uint)(uVar12 < uVar13);
      uVar12 = uVar12 + uVar11;
      uStack_c4 = (uint)(uVar12 < uVar11);
      uVar13 = (longlong)(int)uStack_c8 + SUB168(auVar3 * auVar8,8) + (longlong)(int)uStack_c4;
      puStackX_8[2] = uVar12;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puStackX_10[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      uVar11 = SUB168(auVar4 * auVar9,0);
      uVar12 = puStackX_8[3] + uVar13;
      uStack_c0 = (uint)(uVar12 < uVar13);
      uVar12 = uVar12 + uVar11;
      uStack_bc = (uint)(uVar12 < uVar11);
      uStack_108 = (longlong)(int)uStack_c0 + SUB168(auVar4 * auVar9,8) + (longlong)(int)uStack_bc;
      puStackX_8[3] = uVar12;
      puStackX_10 = puStackX_10 + 4;
      puStackX_8 = puStackX_8 + 4;
    }
    for (; uStackX_18 != 0; uStackX_18 = uStackX_18 - 1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *puStackX_10;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4;
      uVar11 = SUB168(auVar5 * auVar10,0);
      uStack_b8 = (uint)(*puStackX_8 + uStack_108 < uStack_108);
      uVar12 = *puStackX_8 + uStack_108 + uVar11;
      uStack_b4 = (uint)(uVar12 < uVar11);
      uStack_108 = (longlong)(int)uStack_b8 + SUB168(auVar5 * auVar10,8) + (longlong)(int)uStack_b4;
      *puStackX_8 = uVar12;
      puStackX_10 = puStackX_10 + 1;
      puStackX_8 = puStackX_8 + 1;
    }
  }
  return uStack_108;
}


/* address=142b25fb0 name=FUN_142b25fb0 */

longlong FUN_142b25fb0(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

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
  ulonglong *puStackX_8;
  ulonglong *puStackX_10;
  ulonglong uStackX_18;
  longlong lStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  
  lStack_f8 = 0;
  puStackX_8 = param_1;
  puStackX_10 = param_2;
  uStackX_18 = param_3;
  if (param_3 == 0) {
    lStack_f8 = 0;
  }
  else {
    for (; (uStackX_18 & 0xfffffffffffffffc) != 0; uStackX_18 = uStackX_18 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *puStackX_10;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      uVar11 = SUB168(auVar1 * auVar6,0);
      uVar12 = uVar11 + lStack_f8;
      uStack_f0 = (uint)(uVar12 < uVar11);
      *puStackX_8 = uVar12;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = puStackX_10[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_4;
      uVar11 = SUB168(auVar2 * auVar7,0);
      uVar12 = uVar11 + SUB168(auVar1 * auVar6,8) + (longlong)(int)uStack_f0;
      uStack_ec = (uint)(uVar12 < uVar11);
      puStackX_8[1] = uVar12;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = puStackX_10[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      uVar11 = SUB168(auVar3 * auVar8,0);
      uVar12 = uVar11 + SUB168(auVar2 * auVar7,8) + (longlong)(int)uStack_ec;
      uStack_e8 = (uint)(uVar12 < uVar11);
      puStackX_8[2] = uVar12;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puStackX_10[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      uVar11 = SUB168(auVar4 * auVar9,0);
      uVar12 = uVar11 + SUB168(auVar3 * auVar8,8) + (longlong)(int)uStack_e8;
      uStack_e4 = (uint)(uVar12 < uVar11);
      lStack_f8 = SUB168(auVar4 * auVar9,8) + (longlong)(int)uStack_e4;
      puStackX_8[3] = uVar12;
      puStackX_10 = puStackX_10 + 4;
      puStackX_8 = puStackX_8 + 4;
    }
    for (; uStackX_18 != 0; uStackX_18 = uStackX_18 - 1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *puStackX_10;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_4;
      uVar11 = SUB168(auVar5 * auVar10,0);
      uVar12 = uVar11 + lStack_f8;
      uStack_e0 = (uint)(uVar12 < uVar11);
      lStack_f8 = SUB168(auVar5 * auVar10,8) + (longlong)(int)uStack_e0;
      *puStackX_8 = uVar12;
      puStackX_10 = puStackX_10 + 1;
      puStackX_8 = puStackX_8 + 1;
    }
  }
  return lStack_f8;
}


/* address=142b26470 name=FUN_142b26470 */

void FUN_142b26470(undefined (*param_1) [16],ulonglong *param_2,ulonglong param_3)

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
  undefined (*pauStackX_8) [16];
  ulonglong *puStackX_10;
  ulonglong uStackX_18;
  
  pauStackX_8 = param_1;
  puStackX_10 = param_2;
  uStackX_18 = param_3;
  if (param_3 != 0) {
    for (; (uStackX_18 & 0xfffffffffffffffc) != 0; uStackX_18 = uStackX_18 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *puStackX_10;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *puStackX_10;
      *pauStackX_8 = auVar1 * auVar6;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = puStackX_10[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = puStackX_10[1];
      pauStackX_8[1] = auVar2 * auVar7;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = puStackX_10[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = puStackX_10[2];
      pauStackX_8[2] = auVar3 * auVar8;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puStackX_10[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = puStackX_10[3];
      pauStackX_8[3] = auVar4 * auVar9;
      puStackX_10 = puStackX_10 + 4;
      pauStackX_8 = pauStackX_8 + 4;
    }
    for (; uStackX_18 != 0; uStackX_18 = uStackX_18 - 1) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *puStackX_10;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puStackX_10;
      *pauStackX_8 = auVar5 * auVar10;
      puStackX_10 = puStackX_10 + 1;
      pauStackX_8 = pauStackX_8 + 1;
    }
  }
  return;
}


/* address=142b26700 name=FUN_142b26700 */

undefined8
FUN_142b26700(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 *puStackX_8;
  undefined8 *puStackX_10;
  undefined8 *puStackX_18;
  ulonglong uStackX_20;
  undefined8 auStack_18 [3];
  
  if (param_4 == 0) {
    auStack_18[0] = 0;
  }
  else {
    auStack_18[0] = 0;
    puStackX_8 = param_1;
    puStackX_10 = param_2;
    puStackX_18 = param_3;
    for (uStackX_20 = param_4; (uStackX_20 & 0xfffffffffffffffc) != 0; uStackX_20 = uStackX_20 - 4)
    {
      uVar1 = FUN_142b38540(*puStackX_10,*puStackX_18,auStack_18[0],auStack_18);
      *puStackX_8 = uVar1;
      uVar1 = FUN_142b38540(puStackX_10[1],puStackX_18[1],auStack_18[0],auStack_18);
      puStackX_8[1] = uVar1;
      uVar1 = FUN_142b38540(puStackX_10[2],puStackX_18[2],auStack_18[0],auStack_18);
      puStackX_8[2] = uVar1;
      uVar1 = FUN_142b38540(puStackX_10[3],puStackX_18[3],auStack_18[0],auStack_18);
      puStackX_8[3] = uVar1;
      puStackX_10 = puStackX_10 + 4;
      puStackX_18 = puStackX_18 + 4;
      puStackX_8 = puStackX_8 + 4;
    }
    for (; uStackX_20 != 0; uStackX_20 = uStackX_20 - 1) {
      uVar1 = FUN_142b38540(*puStackX_10,*puStackX_18,auStack_18[0],auStack_18);
      *puStackX_8 = uVar1;
      puStackX_10 = puStackX_10 + 1;
      puStackX_18 = puStackX_18 + 1;
      puStackX_8 = puStackX_8 + 1;
    }
  }
  return auStack_18[0];
}


/* address=142b26930 name=FUN_142b26930 */

undefined8
FUN_142b26930(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 *puStackX_8;
  undefined8 *puStackX_10;
  undefined8 *puStackX_18;
  ulonglong uStackX_20;
  undefined8 auStack_18 [3];
  
  if (param_4 == 0) {
    auStack_18[0] = 0;
  }
  else {
    auStack_18[0] = 0;
    puStackX_8 = param_1;
    puStackX_10 = param_2;
    puStackX_18 = param_3;
    for (uStackX_20 = param_4; (uStackX_20 & 0xfffffffffffffffc) != 0; uStackX_20 = uStackX_20 - 4)
    {
      uVar1 = FUN_142b38630(*puStackX_10,*puStackX_18,auStack_18[0],auStack_18);
      *puStackX_8 = uVar1;
      uVar1 = FUN_142b38630(puStackX_10[1],puStackX_18[1],auStack_18[0],auStack_18);
      puStackX_8[1] = uVar1;
      uVar1 = FUN_142b38630(puStackX_10[2],puStackX_18[2],auStack_18[0],auStack_18);
      puStackX_8[2] = uVar1;
      uVar1 = FUN_142b38630(puStackX_10[3],puStackX_18[3],auStack_18[0],auStack_18);
      puStackX_8[3] = uVar1;
      puStackX_10 = puStackX_10 + 4;
      puStackX_18 = puStackX_18 + 4;
      puStackX_8 = puStackX_8 + 4;
    }
    for (; uStackX_20 != 0; uStackX_20 = uStackX_20 - 1) {
      uVar1 = FUN_142b38630(*puStackX_10,*puStackX_18,auStack_18[0],auStack_18);
      *puStackX_8 = uVar1;
      puStackX_10 = puStackX_10 + 1;
      puStackX_18 = puStackX_18 + 1;
      puStackX_8 = puStackX_8 + 1;
    }
  }
  return auStack_18[0];
}


/* address=142b26b60 name=FUN_142b26b60 */

/* WARNING: Removing unreachable block (ram,0x000142b26c81) */
/* WARNING: Removing unreachable block (ram,0x000142b26c24) */
/* WARNING: Removing unreachable block (ram,0x000142b26dd0) */

void FUN_142b26b60(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

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
  uint uStack_30c;
  uint uStack_308;
  uint uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  uint uStack_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  uint uStack_2a8;
  uint uStack_2a4;
  uint uStack_294;
  
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
  uStack_294 = (uint)(uVar34 < uVar33);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[1];
  uVar33 = SUB168(auVar3 * auVar19,0);
  uVar34 = uVar34 + uVar33;
  uStack_30c = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar3 * auVar19,8) + (longlong)(int)uStack_30c;
  uVar35 = SUB168(auVar2 * auVar18,8) + (longlong)(int)uStack_294 + uVar33;
  uStack_308 = (uint)(uVar35 < uVar33);
  param_1[1] = uVar34;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_3;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[2];
  uVar33 = SUB168(auVar4 * auVar20,0);
  uVar35 = uVar35 + uVar33;
  uStack_304 = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar4 * auVar20,8) + (longlong)(int)uStack_304;
  uVar34 = (longlong)(int)uStack_308 + uVar33;
  uStack_300 = (uint)(uVar34 < uVar33);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3[1];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[1];
  uVar33 = SUB168(auVar5 * auVar21,0);
  uVar35 = uVar35 + uVar33;
  uStack_2fc = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar5 * auVar21,8) + (longlong)(int)uStack_2fc;
  uVar34 = uVar34 + uVar33;
  uStack_2f8 = (uint)(uVar34 < uVar33);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3[2];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_2;
  uVar33 = SUB168(auVar6 * auVar22,0);
  uVar35 = uVar35 + uVar33;
  uStack_2f4 = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar6 * auVar22,8) + (longlong)(int)uStack_2f4;
  uVar34 = uVar34 + uVar33;
  uStack_2f0 = (uint)(uVar34 < uVar33);
  param_1[2] = uVar35;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[3];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *param_2;
  uVar33 = SUB168(auVar7 * auVar23,0);
  uVar34 = uVar34 + uVar33;
  uStack_2ec = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar7 * auVar23,8) + (longlong)(int)uStack_2ec;
  uVar35 = (longlong)(int)uStack_300 + (longlong)(int)uStack_2f8 + (longlong)(int)uStack_2f0 +
           uVar33;
  uStack_2e8 = (uint)(uVar35 < uVar33);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[1];
  uVar33 = SUB168(auVar8 * auVar24,0);
  uVar34 = uVar34 + uVar33;
  uStack_2e4 = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar8 * auVar24,8) + (longlong)(int)uStack_2e4;
  uVar35 = uVar35 + uVar33;
  uStack_2e0 = (uint)(uVar35 < uVar33);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[1];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[2];
  uVar33 = SUB168(auVar9 * auVar25,0);
  uVar34 = uVar34 + uVar33;
  uStack_2dc = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar9 * auVar25,8) + (longlong)(int)uStack_2dc;
  uVar35 = uVar35 + uVar33;
  uStack_2d8 = (uint)(uVar35 < uVar33);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[3];
  uVar33 = SUB168(auVar10 * auVar26,0);
  uVar34 = uVar34 + uVar33;
  uStack_2d4 = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar10 * auVar26,8) + (longlong)(int)uStack_2d4;
  uVar35 = uVar35 + uVar33;
  uStack_2d0 = (uint)(uVar35 < uVar33);
  param_1[3] = uVar34;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_3[1];
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[3];
  uVar33 = SUB168(auVar11 * auVar27,0);
  uVar35 = uVar35 + uVar33;
  uStack_2cc = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar11 * auVar27,8) + (longlong)(int)uStack_2cc;
  uVar34 = (longlong)(int)uStack_2e8 + (longlong)(int)uStack_2e0 + (longlong)(int)uStack_2d8 +
           (longlong)(int)uStack_2d0 + uVar33;
  uStack_2c8 = (uint)(uVar34 < uVar33);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_3[2];
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[2];
  uVar33 = SUB168(auVar12 * auVar28,0);
  uVar35 = uVar35 + uVar33;
  uStack_2c4 = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar12 * auVar28,8) + (longlong)(int)uStack_2c4;
  uVar34 = uVar34 + uVar33;
  uStack_2c0 = (uint)(uVar34 < uVar33);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3[3];
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[1];
  uVar33 = SUB168(auVar13 * auVar29,0);
  uVar35 = uVar35 + uVar33;
  uStack_2bc = (uint)(uVar35 < uVar33);
  uVar33 = SUB168(auVar13 * auVar29,8) + (longlong)(int)uStack_2bc;
  uVar34 = uVar34 + uVar33;
  uStack_2b8 = (uint)(uVar34 < uVar33);
  param_1[4] = uVar35;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[3];
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[2];
  uVar33 = SUB168(auVar14 * auVar30,0);
  uVar34 = uVar34 + uVar33;
  uStack_2b4 = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar14 * auVar30,8) + (longlong)(int)uStack_2b4;
  uVar35 = (longlong)(int)uStack_2c8 + (longlong)(int)uStack_2c0 + (longlong)(int)uStack_2b8 +
           uVar33;
  uStack_2b0 = (uint)(uVar35 < uVar33);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[2];
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[3];
  uVar33 = SUB168(auVar15 * auVar31,0);
  uVar34 = uVar34 + uVar33;
  uStack_2ac = (uint)(uVar34 < uVar33);
  uVar33 = SUB168(auVar15 * auVar31,8) + (longlong)(int)uStack_2ac;
  uVar35 = uVar35 + uVar33;
  uStack_2a8 = (uint)(uVar35 < uVar33);
  param_1[5] = uVar34;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[3];
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[3];
  uVar33 = SUB168(auVar16 * auVar32,0);
  uVar35 = uVar35 + uVar33;
  uStack_2a4 = (uint)(uVar35 < uVar33);
  param_1[6] = uVar35;
  param_1[7] = (longlong)(int)uStack_2b0 + (longlong)(int)uStack_2a8 +
               SUB168(auVar16 * auVar32,8) + (longlong)(int)uStack_2a4;
  return;
}


/* address=142b27e70 name=FUN_142b27e70 */

/* WARNING: Removing unreachable block (ram,0x000142b27f91) */
/* WARNING: Removing unreachable block (ram,0x000142b27f37) */
/* WARNING: Removing unreachable block (ram,0x000142b280df) */

void FUN_142b27e70(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

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
  uint uStack_c0c;
  uint uStack_c08;
  uint uStack_c04;
  uint uStack_c00;
  uint uStack_bfc;
  uint uStack_bf8;
  uint uStack_bf4;
  uint uStack_bf0;
  uint uStack_bec;
  uint uStack_be8;
  uint uStack_be4;
  uint uStack_be0;
  uint uStack_bdc;
  uint uStack_bd8;
  uint uStack_bd4;
  uint uStack_bd0;
  uint uStack_bcc;
  uint uStack_bc8;
  uint uStack_bc4;
  uint uStack_bc0;
  uint uStack_bbc;
  uint uStack_bb8;
  uint uStack_bb4;
  uint uStack_bb0;
  uint uStack_bac;
  uint uStack_ba8;
  uint uStack_ba4;
  uint uStack_ba0;
  uint uStack_b9c;
  uint uStack_b98;
  uint uStack_b94;
  uint uStack_b90;
  uint uStack_b8c;
  uint uStack_b88;
  uint uStack_b84;
  uint uStack_b80;
  uint uStack_b7c;
  uint uStack_b78;
  uint uStack_b74;
  uint uStack_b70;
  uint uStack_b6c;
  uint uStack_b68;
  uint uStack_b64;
  uint uStack_b60;
  uint uStack_b5c;
  uint uStack_b58;
  uint uStack_b54;
  uint uStack_b50;
  uint uStack_b4c;
  uint uStack_b48;
  uint uStack_b44;
  uint uStack_b40;
  uint uStack_b3c;
  uint uStack_b38;
  uint uStack_b34;
  uint uStack_b30;
  uint uStack_b2c;
  uint uStack_b28;
  uint uStack_b24;
  uint uStack_b20;
  uint uStack_b1c;
  uint uStack_b18;
  uint uStack_b14;
  uint uStack_b10;
  uint uStack_b0c;
  uint uStack_b08;
  uint uStack_b04;
  uint uStack_b00;
  uint uStack_afc;
  uint uStack_af8;
  uint uStack_af4;
  uint uStack_af0;
  uint uStack_aec;
  uint uStack_ae8;
  uint uStack_ae4;
  uint uStack_ae0;
  uint uStack_adc;
  uint uStack_ad8;
  uint uStack_ad4;
  uint uStack_ad0;
  uint uStack_acc;
  uint uStack_ac8;
  uint uStack_ac4;
  uint uStack_ac0;
  uint uStack_abc;
  uint uStack_ab8;
  uint uStack_ab4;
  uint uStack_ab0;
  uint uStack_aac;
  uint uStack_aa8;
  uint uStack_aa4;
  uint uStack_aa0;
  uint uStack_a9c;
  uint uStack_a98;
  uint uStack_a94;
  uint uStack_a90;
  uint uStack_a8c;
  uint uStack_a88;
  uint uStack_a84;
  uint uStack_a80;
  uint uStack_a7c;
  uint uStack_a78;
  uint uStack_a74;
  uint uStack_a70;
  uint uStack_a6c;
  uint uStack_a68;
  uint uStack_a64;
  uint uStack_a60;
  uint uStack_a5c;
  uint uStack_a58;
  uint uStack_a54;
  uint uStack_a50;
  uint uStack_a4c;
  uint uStack_a48;
  uint uStack_a44;
  uint uStack_a40;
  uint uStack_a3c;
  uint uStack_a38;
  uint uStack_a34;
  uint uStack_a30;
  uint uStack_a2c;
  uint uStack_a28;
  uint uStack_a24;
  uint uStack_a14;
  
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
  uStack_a14 = (uint)(uVar130 < uVar129);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[1];
  uVar129 = SUB168(auVar3 * auVar67,0);
  uVar130 = uVar130 + uVar129;
  uStack_c0c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar3 * auVar67,8) + (longlong)(int)uStack_c0c;
  uVar131 = SUB168(auVar2 * auVar66,8) + (longlong)(int)uStack_a14 + uVar129;
  uStack_c08 = (uint)(uVar131 < uVar129);
  param_1[1] = uVar130;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_3;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[2];
  uVar129 = SUB168(auVar4 * auVar68,0);
  uVar131 = uVar131 + uVar129;
  uStack_c04 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar4 * auVar68,8) + (longlong)(int)uStack_c04;
  uVar130 = (longlong)(int)uStack_c08 + uVar129;
  uStack_c00 = (uint)(uVar130 < uVar129);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3[1];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[1];
  uVar129 = SUB168(auVar5 * auVar69,0);
  uVar131 = uVar131 + uVar129;
  uStack_bfc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar5 * auVar69,8) + (longlong)(int)uStack_bfc;
  uVar130 = uVar130 + uVar129;
  uStack_bf8 = (uint)(uVar130 < uVar129);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3[2];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = *param_2;
  uVar129 = SUB168(auVar6 * auVar70,0);
  uVar131 = uVar131 + uVar129;
  uStack_bf4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar6 * auVar70,8) + (longlong)(int)uStack_bf4;
  uVar130 = uVar130 + uVar129;
  uStack_bf0 = (uint)(uVar130 < uVar129);
  param_1[2] = uVar131;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[3];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = *param_2;
  uVar129 = SUB168(auVar7 * auVar71,0);
  uVar130 = uVar130 + uVar129;
  uStack_bec = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar7 * auVar71,8) + (longlong)(int)uStack_bec;
  uVar131 = (longlong)(int)uStack_c00 + (longlong)(int)uStack_bf8 + (longlong)(int)uStack_bf0 +
            uVar129;
  uStack_be8 = (uint)(uVar131 < uVar129);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[1];
  uVar129 = SUB168(auVar8 * auVar72,0);
  uVar130 = uVar130 + uVar129;
  uStack_be4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar8 * auVar72,8) + (longlong)(int)uStack_be4;
  uVar131 = uVar131 + uVar129;
  uStack_be0 = (uint)(uVar131 < uVar129);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[1];
  auVar73._8_8_ = 0;
  auVar73._0_8_ = param_2[2];
  uVar129 = SUB168(auVar9 * auVar73,0);
  uVar130 = uVar130 + uVar129;
  uStack_bdc = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar9 * auVar73,8) + (longlong)(int)uStack_bdc;
  uVar131 = uVar131 + uVar129;
  uStack_bd8 = (uint)(uVar131 < uVar129);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = param_2[3];
  uVar129 = SUB168(auVar10 * auVar74,0);
  uVar130 = uVar130 + uVar129;
  uStack_bd4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar10 * auVar74,8) + (longlong)(int)uStack_bd4;
  uVar131 = uVar131 + uVar129;
  uStack_bd0 = (uint)(uVar131 < uVar129);
  param_1[3] = uVar130;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_3;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = param_2[4];
  uVar129 = SUB168(auVar11 * auVar75,0);
  uVar131 = uVar131 + uVar129;
  uStack_bcc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar11 * auVar75,8) + (longlong)(int)uStack_bcc;
  uVar130 = (longlong)(int)uStack_be8 + (longlong)(int)uStack_be0 + (longlong)(int)uStack_bd8 +
            (longlong)(int)uStack_bd0 + uVar129;
  uStack_bc8 = (uint)(uVar130 < uVar129);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_3[1];
  auVar76._8_8_ = 0;
  auVar76._0_8_ = param_2[3];
  uVar129 = SUB168(auVar12 * auVar76,0);
  uVar131 = uVar131 + uVar129;
  uStack_bc4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar12 * auVar76,8) + (longlong)(int)uStack_bc4;
  uVar130 = uVar130 + uVar129;
  uStack_bc0 = (uint)(uVar130 < uVar129);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3[2];
  auVar77._8_8_ = 0;
  auVar77._0_8_ = param_2[2];
  uVar129 = SUB168(auVar13 * auVar77,0);
  uVar131 = uVar131 + uVar129;
  uStack_bbc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar13 * auVar77,8) + (longlong)(int)uStack_bbc;
  uVar130 = uVar130 + uVar129;
  uStack_bb8 = (uint)(uVar130 < uVar129);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[3];
  auVar78._8_8_ = 0;
  auVar78._0_8_ = param_2[1];
  uVar129 = SUB168(auVar14 * auVar78,0);
  uVar131 = uVar131 + uVar129;
  uStack_bb4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar14 * auVar78,8) + (longlong)(int)uStack_bb4;
  uVar130 = uVar130 + uVar129;
  uStack_bb0 = (uint)(uVar130 < uVar129);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[4];
  auVar79._8_8_ = 0;
  auVar79._0_8_ = *param_2;
  uVar129 = SUB168(auVar15 * auVar79,0);
  uVar131 = uVar131 + uVar129;
  uStack_bac = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar15 * auVar79,8) + (longlong)(int)uStack_bac;
  uVar130 = uVar130 + uVar129;
  uStack_ba8 = (uint)(uVar130 < uVar129);
  param_1[4] = uVar131;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[5];
  auVar80._8_8_ = 0;
  auVar80._0_8_ = *param_2;
  uVar129 = SUB168(auVar16 * auVar80,0);
  uVar130 = uVar130 + uVar129;
  uStack_ba4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar16 * auVar80,8) + (longlong)(int)uStack_ba4;
  uVar131 = (longlong)(int)uStack_bc8 + (longlong)(int)uStack_bc0 + (longlong)(int)uStack_bb8 +
            (longlong)(int)uStack_bb0 + (longlong)(int)uStack_ba8 + uVar129;
  uStack_ba0 = (uint)(uVar131 < uVar129);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_3[4];
  auVar81._8_8_ = 0;
  auVar81._0_8_ = param_2[1];
  uVar129 = SUB168(auVar17 * auVar81,0);
  uVar130 = uVar130 + uVar129;
  uStack_b9c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar17 * auVar81,8) + (longlong)(int)uStack_b9c;
  uVar131 = uVar131 + uVar129;
  uStack_b98 = (uint)(uVar131 < uVar129);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[3];
  auVar82._8_8_ = 0;
  auVar82._0_8_ = param_2[2];
  uVar129 = SUB168(auVar18 * auVar82,0);
  uVar130 = uVar130 + uVar129;
  uStack_b94 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar18 * auVar82,8) + (longlong)(int)uStack_b94;
  uVar131 = uVar131 + uVar129;
  uStack_b90 = (uint)(uVar131 < uVar129);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[2];
  auVar83._8_8_ = 0;
  auVar83._0_8_ = param_2[3];
  uVar129 = SUB168(auVar19 * auVar83,0);
  uVar130 = uVar130 + uVar129;
  uStack_b8c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar19 * auVar83,8) + (longlong)(int)uStack_b8c;
  uVar131 = uVar131 + uVar129;
  uStack_b88 = (uint)(uVar131 < uVar129);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_3[1];
  auVar84._8_8_ = 0;
  auVar84._0_8_ = param_2[4];
  uVar129 = SUB168(auVar20 * auVar84,0);
  uVar130 = uVar130 + uVar129;
  uStack_b84 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar20 * auVar84,8) + (longlong)(int)uStack_b84;
  uVar131 = uVar131 + uVar129;
  uStack_b80 = (uint)(uVar131 < uVar129);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = *param_3;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = param_2[5];
  uVar129 = SUB168(auVar21 * auVar85,0);
  uVar130 = uVar130 + uVar129;
  uStack_b7c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar21 * auVar85,8) + (longlong)(int)uStack_b7c;
  uVar131 = uVar131 + uVar129;
  uStack_b78 = (uint)(uVar131 < uVar129);
  param_1[5] = uVar130;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_3;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = param_2[6];
  uVar129 = SUB168(auVar22 * auVar86,0);
  uVar131 = uVar131 + uVar129;
  uStack_b74 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar22 * auVar86,8) + (longlong)(int)uStack_b74;
  uVar130 = (longlong)(int)uStack_ba0 + (longlong)(int)uStack_b98 + (longlong)(int)uStack_b90 +
            (longlong)(int)uStack_b88 + (longlong)(int)uStack_b80 + (longlong)(int)uStack_b78 +
            uVar129;
  uStack_b70 = (uint)(uVar130 < uVar129);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_3[1];
  auVar87._8_8_ = 0;
  auVar87._0_8_ = param_2[5];
  uVar129 = SUB168(auVar23 * auVar87,0);
  uVar131 = uVar131 + uVar129;
  uStack_b6c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar23 * auVar87,8) + (longlong)(int)uStack_b6c;
  uVar130 = uVar130 + uVar129;
  uStack_b68 = (uint)(uVar130 < uVar129);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_3[2];
  auVar88._8_8_ = 0;
  auVar88._0_8_ = param_2[4];
  uVar129 = SUB168(auVar24 * auVar88,0);
  uVar131 = uVar131 + uVar129;
  uStack_b64 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar24 * auVar88,8) + (longlong)(int)uStack_b64;
  uVar130 = uVar130 + uVar129;
  uStack_b60 = (uint)(uVar130 < uVar129);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_3[3];
  auVar89._8_8_ = 0;
  auVar89._0_8_ = param_2[3];
  uVar129 = SUB168(auVar25 * auVar89,0);
  uVar131 = uVar131 + uVar129;
  uStack_b5c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar25 * auVar89,8) + (longlong)(int)uStack_b5c;
  uVar130 = uVar130 + uVar129;
  uStack_b58 = (uint)(uVar130 < uVar129);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_3[4];
  auVar90._8_8_ = 0;
  auVar90._0_8_ = param_2[2];
  uVar129 = SUB168(auVar26 * auVar90,0);
  uVar131 = uVar131 + uVar129;
  uStack_b54 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar26 * auVar90,8) + (longlong)(int)uStack_b54;
  uVar130 = uVar130 + uVar129;
  uStack_b50 = (uint)(uVar130 < uVar129);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_3[5];
  auVar91._8_8_ = 0;
  auVar91._0_8_ = param_2[1];
  uVar129 = SUB168(auVar27 * auVar91,0);
  uVar131 = uVar131 + uVar129;
  uStack_b4c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar27 * auVar91,8) + (longlong)(int)uStack_b4c;
  uVar130 = uVar130 + uVar129;
  uStack_b48 = (uint)(uVar130 < uVar129);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_3[6];
  auVar92._8_8_ = 0;
  auVar92._0_8_ = *param_2;
  uVar129 = SUB168(auVar28 * auVar92,0);
  uVar131 = uVar131 + uVar129;
  uStack_b44 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar28 * auVar92,8) + (longlong)(int)uStack_b44;
  uVar130 = uVar130 + uVar129;
  uStack_b40 = (uint)(uVar130 < uVar129);
  param_1[6] = uVar131;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_3[7];
  auVar93._8_8_ = 0;
  auVar93._0_8_ = *param_2;
  uVar129 = SUB168(auVar29 * auVar93,0);
  uVar130 = uVar130 + uVar129;
  uStack_b3c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar29 * auVar93,8) + (longlong)(int)uStack_b3c;
  uVar131 = (longlong)(int)uStack_b70 + (longlong)(int)uStack_b68 + (longlong)(int)uStack_b60 +
            (longlong)(int)uStack_b58 + (longlong)(int)uStack_b50 + (longlong)(int)uStack_b48 +
            (longlong)(int)uStack_b40 + uVar129;
  uStack_b38 = (uint)(uVar131 < uVar129);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_3[6];
  auVar94._8_8_ = 0;
  auVar94._0_8_ = param_2[1];
  uVar129 = SUB168(auVar30 * auVar94,0);
  uVar130 = uVar130 + uVar129;
  uStack_b34 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar30 * auVar94,8) + (longlong)(int)uStack_b34;
  uVar131 = uVar131 + uVar129;
  uStack_b30 = (uint)(uVar131 < uVar129);
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_3[5];
  auVar95._8_8_ = 0;
  auVar95._0_8_ = param_2[2];
  uVar129 = SUB168(auVar31 * auVar95,0);
  uVar130 = uVar130 + uVar129;
  uStack_b2c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar31 * auVar95,8) + (longlong)(int)uStack_b2c;
  uVar131 = uVar131 + uVar129;
  uStack_b28 = (uint)(uVar131 < uVar129);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_3[4];
  auVar96._8_8_ = 0;
  auVar96._0_8_ = param_2[3];
  uVar129 = SUB168(auVar32 * auVar96,0);
  uVar130 = uVar130 + uVar129;
  uStack_b24 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar32 * auVar96,8) + (longlong)(int)uStack_b24;
  uVar131 = uVar131 + uVar129;
  uStack_b20 = (uint)(uVar131 < uVar129);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_3[3];
  auVar97._8_8_ = 0;
  auVar97._0_8_ = param_2[4];
  uVar129 = SUB168(auVar33 * auVar97,0);
  uVar130 = uVar130 + uVar129;
  uStack_b1c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar33 * auVar97,8) + (longlong)(int)uStack_b1c;
  uVar131 = uVar131 + uVar129;
  uStack_b18 = (uint)(uVar131 < uVar129);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_3[2];
  auVar98._8_8_ = 0;
  auVar98._0_8_ = param_2[5];
  uVar129 = SUB168(auVar34 * auVar98,0);
  uVar130 = uVar130 + uVar129;
  uStack_b14 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar34 * auVar98,8) + (longlong)(int)uStack_b14;
  uVar131 = uVar131 + uVar129;
  uStack_b10 = (uint)(uVar131 < uVar129);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_3[1];
  auVar99._8_8_ = 0;
  auVar99._0_8_ = param_2[6];
  uVar129 = SUB168(auVar35 * auVar99,0);
  uVar130 = uVar130 + uVar129;
  uStack_b0c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar35 * auVar99,8) + (longlong)(int)uStack_b0c;
  uVar131 = uVar131 + uVar129;
  uStack_b08 = (uint)(uVar131 < uVar129);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *param_3;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = param_2[7];
  uVar129 = SUB168(auVar36 * auVar100,0);
  uVar130 = uVar130 + uVar129;
  uStack_b04 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar36 * auVar100,8) + (longlong)(int)uStack_b04;
  uVar131 = uVar131 + uVar129;
  uStack_b00 = (uint)(uVar131 < uVar129);
  param_1[7] = uVar130;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_3[1];
  auVar101._8_8_ = 0;
  auVar101._0_8_ = param_2[7];
  uVar129 = SUB168(auVar37 * auVar101,0);
  uVar131 = uVar131 + uVar129;
  uStack_afc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar37 * auVar101,8) + (longlong)(int)uStack_afc;
  uVar130 = (longlong)(int)uStack_b38 + (longlong)(int)uStack_b30 + (longlong)(int)uStack_b28 +
            (longlong)(int)uStack_b20 + (longlong)(int)uStack_b18 + (longlong)(int)uStack_b10 +
            (longlong)(int)uStack_b08 + (longlong)(int)uStack_b00 + uVar129;
  uStack_af8 = (uint)(uVar130 < uVar129);
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_3[2];
  auVar102._8_8_ = 0;
  auVar102._0_8_ = param_2[6];
  uVar129 = SUB168(auVar38 * auVar102,0);
  uVar131 = uVar131 + uVar129;
  uStack_af4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar38 * auVar102,8) + (longlong)(int)uStack_af4;
  uVar130 = uVar130 + uVar129;
  uStack_af0 = (uint)(uVar130 < uVar129);
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_3[3];
  auVar103._8_8_ = 0;
  auVar103._0_8_ = param_2[5];
  uVar129 = SUB168(auVar39 * auVar103,0);
  uVar131 = uVar131 + uVar129;
  uStack_aec = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar39 * auVar103,8) + (longlong)(int)uStack_aec;
  uVar130 = uVar130 + uVar129;
  uStack_ae8 = (uint)(uVar130 < uVar129);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_3[4];
  auVar104._8_8_ = 0;
  auVar104._0_8_ = param_2[4];
  uVar129 = SUB168(auVar40 * auVar104,0);
  uVar131 = uVar131 + uVar129;
  uStack_ae4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar40 * auVar104,8) + (longlong)(int)uStack_ae4;
  uVar130 = uVar130 + uVar129;
  uStack_ae0 = (uint)(uVar130 < uVar129);
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_3[5];
  auVar105._8_8_ = 0;
  auVar105._0_8_ = param_2[3];
  uVar129 = SUB168(auVar41 * auVar105,0);
  uVar131 = uVar131 + uVar129;
  uStack_adc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar41 * auVar105,8) + (longlong)(int)uStack_adc;
  uVar130 = uVar130 + uVar129;
  uStack_ad8 = (uint)(uVar130 < uVar129);
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_3[6];
  auVar106._8_8_ = 0;
  auVar106._0_8_ = param_2[2];
  uVar129 = SUB168(auVar42 * auVar106,0);
  uVar131 = uVar131 + uVar129;
  uStack_ad4 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar42 * auVar106,8) + (longlong)(int)uStack_ad4;
  uVar130 = uVar130 + uVar129;
  uStack_ad0 = (uint)(uVar130 < uVar129);
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_3[7];
  auVar107._8_8_ = 0;
  auVar107._0_8_ = param_2[1];
  uVar129 = SUB168(auVar43 * auVar107,0);
  uVar131 = uVar131 + uVar129;
  uStack_acc = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar43 * auVar107,8) + (longlong)(int)uStack_acc;
  uVar130 = uVar130 + uVar129;
  uStack_ac8 = (uint)(uVar130 < uVar129);
  param_1[8] = uVar131;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_3[7];
  auVar108._8_8_ = 0;
  auVar108._0_8_ = param_2[2];
  uVar129 = SUB168(auVar44 * auVar108,0);
  uVar130 = uVar130 + uVar129;
  uStack_ac4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar44 * auVar108,8) + (longlong)(int)uStack_ac4;
  uVar131 = (longlong)(int)uStack_af8 + (longlong)(int)uStack_af0 + (longlong)(int)uStack_ae8 +
            (longlong)(int)uStack_ae0 + (longlong)(int)uStack_ad8 + (longlong)(int)uStack_ad0 +
            (longlong)(int)uStack_ac8 + uVar129;
  uStack_ac0 = (uint)(uVar131 < uVar129);
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_3[6];
  auVar109._8_8_ = 0;
  auVar109._0_8_ = param_2[3];
  uVar129 = SUB168(auVar45 * auVar109,0);
  uVar130 = uVar130 + uVar129;
  uStack_abc = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar45 * auVar109,8) + (longlong)(int)uStack_abc;
  uVar131 = uVar131 + uVar129;
  uStack_ab8 = (uint)(uVar131 < uVar129);
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_3[5];
  auVar110._8_8_ = 0;
  auVar110._0_8_ = param_2[4];
  uVar129 = SUB168(auVar46 * auVar110,0);
  uVar130 = uVar130 + uVar129;
  uStack_ab4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar46 * auVar110,8) + (longlong)(int)uStack_ab4;
  uVar131 = uVar131 + uVar129;
  uStack_ab0 = (uint)(uVar131 < uVar129);
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_3[4];
  auVar111._8_8_ = 0;
  auVar111._0_8_ = param_2[5];
  uVar129 = SUB168(auVar47 * auVar111,0);
  uVar130 = uVar130 + uVar129;
  uStack_aac = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar47 * auVar111,8) + (longlong)(int)uStack_aac;
  uVar131 = uVar131 + uVar129;
  uStack_aa8 = (uint)(uVar131 < uVar129);
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_3[3];
  auVar112._8_8_ = 0;
  auVar112._0_8_ = param_2[6];
  uVar129 = SUB168(auVar48 * auVar112,0);
  uVar130 = uVar130 + uVar129;
  uStack_aa4 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar48 * auVar112,8) + (longlong)(int)uStack_aa4;
  uVar131 = uVar131 + uVar129;
  uStack_aa0 = (uint)(uVar131 < uVar129);
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_3[2];
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_2[7];
  uVar129 = SUB168(auVar49 * auVar113,0);
  uVar130 = uVar130 + uVar129;
  uStack_a9c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar49 * auVar113,8) + (longlong)(int)uStack_a9c;
  uVar131 = uVar131 + uVar129;
  uStack_a98 = (uint)(uVar131 < uVar129);
  param_1[9] = uVar130;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_3[3];
  auVar114._8_8_ = 0;
  auVar114._0_8_ = param_2[7];
  uVar129 = SUB168(auVar50 * auVar114,0);
  uVar131 = uVar131 + uVar129;
  uStack_a94 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar50 * auVar114,8) + (longlong)(int)uStack_a94;
  uVar130 = (longlong)(int)uStack_ac0 + (longlong)(int)uStack_ab8 + (longlong)(int)uStack_ab0 +
            (longlong)(int)uStack_aa8 + (longlong)(int)uStack_aa0 + (longlong)(int)uStack_a98 +
            uVar129;
  uStack_a90 = (uint)(uVar130 < uVar129);
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_3[4];
  auVar115._8_8_ = 0;
  auVar115._0_8_ = param_2[6];
  uVar129 = SUB168(auVar51 * auVar115,0);
  uVar131 = uVar131 + uVar129;
  uStack_a8c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar51 * auVar115,8) + (longlong)(int)uStack_a8c;
  uVar130 = uVar130 + uVar129;
  uStack_a88 = (uint)(uVar130 < uVar129);
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_3[5];
  auVar116._8_8_ = 0;
  auVar116._0_8_ = param_2[5];
  uVar129 = SUB168(auVar52 * auVar116,0);
  uVar131 = uVar131 + uVar129;
  uStack_a84 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar52 * auVar116,8) + (longlong)(int)uStack_a84;
  uVar130 = uVar130 + uVar129;
  uStack_a80 = (uint)(uVar130 < uVar129);
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_3[6];
  auVar117._8_8_ = 0;
  auVar117._0_8_ = param_2[4];
  uVar129 = SUB168(auVar53 * auVar117,0);
  uVar131 = uVar131 + uVar129;
  uStack_a7c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar53 * auVar117,8) + (longlong)(int)uStack_a7c;
  uVar130 = uVar130 + uVar129;
  uStack_a78 = (uint)(uVar130 < uVar129);
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_3[7];
  auVar118._8_8_ = 0;
  auVar118._0_8_ = param_2[3];
  uVar129 = SUB168(auVar54 * auVar118,0);
  uVar131 = uVar131 + uVar129;
  uStack_a74 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar54 * auVar118,8) + (longlong)(int)uStack_a74;
  uVar130 = uVar130 + uVar129;
  uStack_a70 = (uint)(uVar130 < uVar129);
  param_1[10] = uVar131;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_3[7];
  auVar119._8_8_ = 0;
  auVar119._0_8_ = param_2[4];
  uVar129 = SUB168(auVar55 * auVar119,0);
  uVar130 = uVar130 + uVar129;
  uStack_a6c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar55 * auVar119,8) + (longlong)(int)uStack_a6c;
  uVar131 = (longlong)(int)uStack_a90 + (longlong)(int)uStack_a88 + (longlong)(int)uStack_a80 +
            (longlong)(int)uStack_a78 + (longlong)(int)uStack_a70 + uVar129;
  uStack_a68 = (uint)(uVar131 < uVar129);
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_3[6];
  auVar120._8_8_ = 0;
  auVar120._0_8_ = param_2[5];
  uVar129 = SUB168(auVar56 * auVar120,0);
  uVar130 = uVar130 + uVar129;
  uStack_a64 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar56 * auVar120,8) + (longlong)(int)uStack_a64;
  uVar131 = uVar131 + uVar129;
  uStack_a60 = (uint)(uVar131 < uVar129);
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_3[5];
  auVar121._8_8_ = 0;
  auVar121._0_8_ = param_2[6];
  uVar129 = SUB168(auVar57 * auVar121,0);
  uVar130 = uVar130 + uVar129;
  uStack_a5c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar57 * auVar121,8) + (longlong)(int)uStack_a5c;
  uVar131 = uVar131 + uVar129;
  uStack_a58 = (uint)(uVar131 < uVar129);
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_3[4];
  auVar122._8_8_ = 0;
  auVar122._0_8_ = param_2[7];
  uVar129 = SUB168(auVar58 * auVar122,0);
  uVar130 = uVar130 + uVar129;
  uStack_a54 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar58 * auVar122,8) + (longlong)(int)uStack_a54;
  uVar131 = uVar131 + uVar129;
  uStack_a50 = (uint)(uVar131 < uVar129);
  param_1[0xb] = uVar130;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_3[5];
  auVar123._8_8_ = 0;
  auVar123._0_8_ = param_2[7];
  uVar129 = SUB168(auVar59 * auVar123,0);
  uVar131 = uVar131 + uVar129;
  uStack_a4c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar59 * auVar123,8) + (longlong)(int)uStack_a4c;
  uVar130 = (longlong)(int)uStack_a68 + (longlong)(int)uStack_a60 + (longlong)(int)uStack_a58 +
            (longlong)(int)uStack_a50 + uVar129;
  uStack_a48 = (uint)(uVar130 < uVar129);
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_3[6];
  auVar124._8_8_ = 0;
  auVar124._0_8_ = param_2[6];
  uVar129 = SUB168(auVar60 * auVar124,0);
  uVar131 = uVar131 + uVar129;
  uStack_a44 = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar60 * auVar124,8) + (longlong)(int)uStack_a44;
  uVar130 = uVar130 + uVar129;
  uStack_a40 = (uint)(uVar130 < uVar129);
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_3[7];
  auVar125._8_8_ = 0;
  auVar125._0_8_ = param_2[5];
  uVar129 = SUB168(auVar61 * auVar125,0);
  uVar131 = uVar131 + uVar129;
  uStack_a3c = (uint)(uVar131 < uVar129);
  uVar129 = SUB168(auVar61 * auVar125,8) + (longlong)(int)uStack_a3c;
  uVar130 = uVar130 + uVar129;
  uStack_a38 = (uint)(uVar130 < uVar129);
  param_1[0xc] = uVar131;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_3[7];
  auVar126._8_8_ = 0;
  auVar126._0_8_ = param_2[6];
  uVar129 = SUB168(auVar62 * auVar126,0);
  uVar130 = uVar130 + uVar129;
  uStack_a34 = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar62 * auVar126,8) + (longlong)(int)uStack_a34;
  uVar131 = (longlong)(int)uStack_a48 + (longlong)(int)uStack_a40 + (longlong)(int)uStack_a38 +
            uVar129;
  uStack_a30 = (uint)(uVar131 < uVar129);
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_3[6];
  auVar127._8_8_ = 0;
  auVar127._0_8_ = param_2[7];
  uVar129 = SUB168(auVar63 * auVar127,0);
  uVar130 = uVar130 + uVar129;
  uStack_a2c = (uint)(uVar130 < uVar129);
  uVar129 = SUB168(auVar63 * auVar127,8) + (longlong)(int)uStack_a2c;
  uVar131 = uVar131 + uVar129;
  uStack_a28 = (uint)(uVar131 < uVar129);
  param_1[0xd] = uVar130;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_3[7];
  auVar128._8_8_ = 0;
  auVar128._0_8_ = param_2[7];
  uVar129 = SUB168(auVar64 * auVar128,0);
  uVar131 = uVar131 + uVar129;
  uStack_a24 = (uint)(uVar131 < uVar129);
  param_1[0xe] = uVar131;
  param_1[0xf] = (longlong)(int)uStack_a30 + (longlong)(int)uStack_a28 +
                 SUB168(auVar64 * auVar128,8) + (longlong)(int)uStack_a24;
  return;
}


/* address=142b2cab0 name=FUN_142b2cab0 */

/* WARNING: Removing unreachable block (ram,0x000142b2cbaf) */
/* WARNING: Removing unreachable block (ram,0x000142b2cb55) */
/* WARNING: Removing unreachable block (ram,0x000142b2ccfd) */

void FUN_142b2cab0(undefined8 *param_1,ulonglong *param_2)

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
  uint uStack_84c;
  uint uStack_848;
  uint uStack_844;
  uint uStack_840;
  uint uStack_83c;
  uint uStack_838;
  uint uStack_834;
  uint uStack_830;
  uint uStack_82c;
  uint uStack_828;
  uint uStack_824;
  uint uStack_820;
  uint uStack_81c;
  uint uStack_818;
  uint uStack_814;
  uint uStack_810;
  uint uStack_80c;
  uint uStack_808;
  uint uStack_804;
  uint uStack_800;
  uint uStack_7fc;
  uint uStack_7f8;
  uint uStack_7f4;
  uint uStack_7f0;
  uint uStack_7ec;
  uint uStack_7e8;
  uint uStack_7e4;
  uint uStack_7e0;
  uint uStack_7dc;
  uint uStack_7d8;
  uint uStack_7d4;
  uint uStack_7d0;
  uint uStack_7cc;
  uint uStack_7c8;
  uint uStack_7c4;
  uint uStack_7c0;
  uint uStack_7bc;
  uint uStack_7b8;
  uint uStack_7b4;
  uint uStack_7b0;
  uint uStack_7ac;
  uint uStack_7a8;
  uint uStack_7a4;
  uint uStack_7a0;
  uint uStack_79c;
  uint uStack_798;
  uint uStack_794;
  uint uStack_790;
  uint uStack_78c;
  uint uStack_788;
  uint uStack_784;
  uint uStack_780;
  uint uStack_77c;
  uint uStack_778;
  uint uStack_774;
  uint uStack_770;
  uint uStack_76c;
  uint uStack_768;
  uint uStack_764;
  uint uStack_760;
  uint uStack_75c;
  uint uStack_758;
  uint uStack_754;
  uint uStack_750;
  uint uStack_74c;
  uint uStack_748;
  uint uStack_744;
  uint uStack_740;
  uint uStack_73c;
  uint uStack_738;
  uint uStack_734;
  uint uStack_730;
  uint uStack_72c;
  uint uStack_728;
  uint uStack_724;
  uint uStack_720;
  uint uStack_71c;
  uint uStack_718;
  uint uStack_714;
  uint uStack_710;
  uint uStack_70c;
  uint uStack_708;
  uint uStack_704;
  uint uStack_700;
  uint uStack_6fc;
  uint uStack_6f8;
  uint uStack_6f4;
  uint uStack_6f0;
  uint uStack_6ec;
  uint uStack_6e8;
  uint uStack_6e4;
  uint uStack_6e0;
  uint uStack_6dc;
  uint uStack_6d8;
  uint uStack_6d4;
  uint uStack_6d0;
  uint uStack_6cc;
  uint uStack_6c8;
  uint uStack_6c4;
  uint uStack_6c0;
  uint uStack_6bc;
  uint uStack_6b8;
  uint uStack_6b4;
  uint uStack_6b0;
  uint uStack_6ac;
  uint uStack_6a8;
  uint uStack_6a4;
  uint uStack_6a0;
  uint uStack_69c;
  uint uStack_698;
  uint uStack_694;
  uint uStack_690;
  uint uStack_68c;
  uint uStack_688;
  uint uStack_684;
  uint uStack_680;
  uint uStack_67c;
  uint uStack_678;
  uint uStack_674;
  uint uStack_670;
  uint uStack_66c;
  uint uStack_668;
  uint uStack_664;
  uint uStack_654;
  
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
  uStack_654 = (uint)(uVar74 < uVar73);
  uVar74 = uVar74 + uVar73;
  uStack_84c = (uint)(uVar74 < uVar73);
  uVar73 = lVar77 + (int)uStack_84c;
  uVar75 = lVar77 + (int)uStack_654 + uVar73;
  uStack_848 = (uint)(uVar75 < uVar73);
  param_1[1] = uVar74;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[1];
  uVar73 = SUB168(auVar3 * auVar39,0);
  uVar75 = uVar75 + uVar73;
  uStack_844 = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar3 * auVar39,8) + (longlong)(int)uStack_844;
  uVar76 = (longlong)(int)uStack_848 + uVar73;
  uStack_840 = (uint)(uVar76 < uVar73);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_2[2];
  lVar77 = SUB168(auVar4 * auVar40,8);
  uVar73 = SUB168(auVar4 * auVar40,0);
  uVar75 = uVar75 + uVar73;
  uStack_83c = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_83c;
  uVar76 = uVar76 + uVar74;
  uStack_838 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_834 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_834;
  uVar76 = uVar76 + uVar73;
  uStack_830 = (uint)(uVar76 < uVar73);
  param_1[2] = uVar75;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_2[3];
  lVar77 = SUB168(auVar5 * auVar41,8);
  uVar73 = SUB168(auVar5 * auVar41,0);
  uVar76 = uVar76 + uVar73;
  uStack_82c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_82c;
  uVar75 = (longlong)(int)uStack_840 + (longlong)(int)uStack_838 + (longlong)(int)uStack_830 +
           uVar74;
  uStack_828 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_824 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_824;
  uVar75 = uVar75 + uVar73;
  uStack_820 = (uint)(uVar75 < uVar73);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[2];
  lVar77 = SUB168(auVar6 * auVar42,8);
  uVar73 = SUB168(auVar6 * auVar42,0);
  uVar76 = uVar76 + uVar73;
  uStack_81c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_81c;
  uVar75 = uVar75 + uVar74;
  uStack_818 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_814 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_814;
  uVar75 = uVar75 + uVar73;
  uStack_810 = (uint)(uVar75 < uVar73);
  param_1[3] = uVar76;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[2];
  uVar73 = SUB168(auVar7 * auVar43,0);
  uVar75 = uVar75 + uVar73;
  uStack_80c = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar7 * auVar43,8) + (longlong)(int)uStack_80c;
  uVar76 = (longlong)(int)uStack_828 + (longlong)(int)uStack_820 + (longlong)(int)uStack_818 +
           (longlong)(int)uStack_810 + uVar73;
  uStack_808 = (uint)(uVar76 < uVar73);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[3];
  lVar77 = SUB168(auVar8 * auVar44,8);
  uVar73 = SUB168(auVar8 * auVar44,0);
  uVar75 = uVar75 + uVar73;
  uStack_804 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_804;
  uVar76 = uVar76 + uVar74;
  uStack_800 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_7fc = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_7fc;
  uVar76 = uVar76 + uVar73;
  uStack_7f8 = (uint)(uVar76 < uVar73);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *param_2;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[4];
  lVar77 = SUB168(auVar9 * auVar45,8);
  uVar73 = SUB168(auVar9 * auVar45,0);
  uVar75 = uVar75 + uVar73;
  uStack_7f4 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_7f4;
  uVar76 = uVar76 + uVar74;
  uStack_7f0 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_7ec = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_7ec;
  uVar76 = uVar76 + uVar73;
  uStack_7e8 = (uint)(uVar76 < uVar73);
  param_1[4] = uVar75;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_2;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[5];
  lVar77 = SUB168(auVar10 * auVar46,8);
  uVar73 = SUB168(auVar10 * auVar46,0);
  uVar76 = uVar76 + uVar73;
  uStack_7e4 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_7e4;
  uVar75 = (longlong)(int)uStack_808 + (longlong)(int)uStack_800 + (longlong)(int)uStack_7f8 +
           (longlong)(int)uStack_7f0 + (longlong)(int)uStack_7e8 + uVar74;
  uStack_7e0 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_7dc = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_7dc;
  uVar75 = uVar75 + uVar73;
  uStack_7d8 = (uint)(uVar75 < uVar73);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[1];
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[4];
  lVar77 = SUB168(auVar11 * auVar47,8);
  uVar73 = SUB168(auVar11 * auVar47,0);
  uVar76 = uVar76 + uVar73;
  uStack_7d4 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_7d4;
  uVar75 = uVar75 + uVar74;
  uStack_7d0 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_7cc = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_7cc;
  uVar75 = uVar75 + uVar73;
  uStack_7c8 = (uint)(uVar75 < uVar73);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[2];
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[3];
  lVar77 = SUB168(auVar12 * auVar48,8);
  uVar73 = SUB168(auVar12 * auVar48,0);
  uVar76 = uVar76 + uVar73;
  uStack_7c4 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_7c4;
  uVar75 = uVar75 + uVar74;
  uStack_7c0 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_7bc = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_7bc;
  uVar75 = uVar75 + uVar73;
  uStack_7b8 = (uint)(uVar75 < uVar73);
  param_1[5] = uVar76;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[3];
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[3];
  uVar73 = SUB168(auVar13 * auVar49,0);
  uVar75 = uVar75 + uVar73;
  uStack_7b4 = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar13 * auVar49,8) + (longlong)(int)uStack_7b4;
  uVar76 = (longlong)(int)uStack_7e0 + (longlong)(int)uStack_7d8 + (longlong)(int)uStack_7d0 +
           (longlong)(int)uStack_7c8 + (longlong)(int)uStack_7c0 + (longlong)(int)uStack_7b8 +
           uVar73;
  uStack_7b0 = (uint)(uVar76 < uVar73);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[4];
  lVar77 = SUB168(auVar14 * auVar50,8);
  uVar73 = SUB168(auVar14 * auVar50,0);
  uVar75 = uVar75 + uVar73;
  uStack_7ac = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_7ac;
  uVar76 = uVar76 + uVar74;
  uStack_7a8 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_7a4 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_7a4;
  uVar76 = uVar76 + uVar73;
  uStack_7a0 = (uint)(uVar76 < uVar73);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[1];
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[5];
  lVar77 = SUB168(auVar15 * auVar51,8);
  uVar73 = SUB168(auVar15 * auVar51,0);
  uVar75 = uVar75 + uVar73;
  uStack_79c = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_79c;
  uVar76 = uVar76 + uVar74;
  uStack_798 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_794 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_794;
  uVar76 = uVar76 + uVar73;
  uStack_790 = (uint)(uVar76 < uVar73);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_2;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_2[6];
  lVar77 = SUB168(auVar16 * auVar52,8);
  uVar73 = SUB168(auVar16 * auVar52,0);
  uVar75 = uVar75 + uVar73;
  uStack_78c = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_78c;
  uVar76 = uVar76 + uVar74;
  uStack_788 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_784 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_784;
  uVar76 = uVar76 + uVar73;
  uStack_780 = (uint)(uVar76 < uVar73);
  param_1[6] = uVar75;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_2[7];
  lVar77 = SUB168(auVar17 * auVar53,8);
  uVar73 = SUB168(auVar17 * auVar53,0);
  uVar76 = uVar76 + uVar73;
  uStack_77c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_77c;
  uVar75 = (longlong)(int)uStack_7b0 + (longlong)(int)uStack_7a8 + (longlong)(int)uStack_7a0 +
           (longlong)(int)uStack_798 + (longlong)(int)uStack_790 + (longlong)(int)uStack_788 +
           (longlong)(int)uStack_780 + uVar74;
  uStack_778 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_774 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_774;
  uVar75 = uVar75 + uVar73;
  uStack_770 = (uint)(uVar75 < uVar73);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[1];
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_2[6];
  lVar77 = SUB168(auVar18 * auVar54,8);
  uVar73 = SUB168(auVar18 * auVar54,0);
  uVar76 = uVar76 + uVar73;
  uStack_76c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_76c;
  uVar75 = uVar75 + uVar74;
  uStack_768 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_764 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_764;
  uVar75 = uVar75 + uVar73;
  uStack_760 = (uint)(uVar75 < uVar73);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[2];
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_2[5];
  lVar77 = SUB168(auVar19 * auVar55,8);
  uVar73 = SUB168(auVar19 * auVar55,0);
  uVar76 = uVar76 + uVar73;
  uStack_75c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_75c;
  uVar75 = uVar75 + uVar74;
  uStack_758 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_754 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_754;
  uVar75 = uVar75 + uVar73;
  uStack_750 = (uint)(uVar75 < uVar73);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_2[4];
  lVar77 = SUB168(auVar20 * auVar56,8);
  uVar73 = SUB168(auVar20 * auVar56,0);
  uVar76 = uVar76 + uVar73;
  uStack_74c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_74c;
  uVar75 = uVar75 + uVar74;
  uStack_748 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_744 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_744;
  uVar75 = uVar75 + uVar73;
  uStack_740 = (uint)(uVar75 < uVar73);
  param_1[7] = uVar76;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[4];
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[4];
  uVar73 = SUB168(auVar21 * auVar57,0);
  uVar75 = uVar75 + uVar73;
  uStack_73c = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar21 * auVar57,8) + (longlong)(int)uStack_73c;
  uVar76 = (longlong)(int)uStack_778 + (longlong)(int)uStack_770 + (longlong)(int)uStack_768 +
           (longlong)(int)uStack_760 + (longlong)(int)uStack_758 + (longlong)(int)uStack_750 +
           (longlong)(int)uStack_748 + (longlong)(int)uStack_740 + uVar73;
  uStack_738 = (uint)(uVar76 < uVar73);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_2[3];
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[5];
  lVar77 = SUB168(auVar22 * auVar58,8);
  uVar73 = SUB168(auVar22 * auVar58,0);
  uVar75 = uVar75 + uVar73;
  uStack_734 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_734;
  uVar76 = uVar76 + uVar74;
  uStack_730 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_72c = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_72c;
  uVar76 = uVar76 + uVar73;
  uStack_728 = (uint)(uVar76 < uVar73);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2[2];
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[6];
  lVar77 = SUB168(auVar23 * auVar59,8);
  uVar73 = SUB168(auVar23 * auVar59,0);
  uVar75 = uVar75 + uVar73;
  uStack_724 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_724;
  uVar76 = uVar76 + uVar74;
  uStack_720 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_71c = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_71c;
  uVar76 = uVar76 + uVar73;
  uStack_718 = (uint)(uVar76 < uVar73);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[1];
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_2[7];
  lVar77 = SUB168(auVar24 * auVar60,8);
  uVar73 = SUB168(auVar24 * auVar60,0);
  uVar75 = uVar75 + uVar73;
  uStack_714 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_714;
  uVar76 = uVar76 + uVar74;
  uStack_710 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_70c = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_70c;
  uVar76 = uVar76 + uVar73;
  uStack_708 = (uint)(uVar76 < uVar73);
  param_1[8] = uVar75;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[2];
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_2[7];
  lVar77 = SUB168(auVar25 * auVar61,8);
  uVar73 = SUB168(auVar25 * auVar61,0);
  uVar76 = uVar76 + uVar73;
  uStack_704 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_704;
  uVar75 = (longlong)(int)uStack_738 + (longlong)(int)uStack_730 + (longlong)(int)uStack_728 +
           (longlong)(int)uStack_720 + (longlong)(int)uStack_718 + (longlong)(int)uStack_710 +
           (longlong)(int)uStack_708 + uVar74;
  uStack_700 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_6fc = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_6fc;
  uVar75 = uVar75 + uVar73;
  uStack_6f8 = (uint)(uVar75 < uVar73);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[3];
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_2[6];
  lVar77 = SUB168(auVar26 * auVar62,8);
  uVar73 = SUB168(auVar26 * auVar62,0);
  uVar76 = uVar76 + uVar73;
  uStack_6f4 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_6f4;
  uVar75 = uVar75 + uVar74;
  uStack_6f0 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_6ec = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_6ec;
  uVar75 = uVar75 + uVar73;
  uStack_6e8 = (uint)(uVar75 < uVar73);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[4];
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_2[5];
  lVar77 = SUB168(auVar27 * auVar63,8);
  uVar73 = SUB168(auVar27 * auVar63,0);
  uVar76 = uVar76 + uVar73;
  uStack_6e4 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_6e4;
  uVar75 = uVar75 + uVar74;
  uStack_6e0 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_6dc = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_6dc;
  uVar75 = uVar75 + uVar73;
  uStack_6d8 = (uint)(uVar75 < uVar73);
  param_1[9] = uVar76;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[5];
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[5];
  uVar73 = SUB168(auVar28 * auVar64,0);
  uVar75 = uVar75 + uVar73;
  uStack_6d4 = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar28 * auVar64,8) + (longlong)(int)uStack_6d4;
  uVar76 = (longlong)(int)uStack_700 + (longlong)(int)uStack_6f8 + (longlong)(int)uStack_6f0 +
           (longlong)(int)uStack_6e8 + (longlong)(int)uStack_6e0 + (longlong)(int)uStack_6d8 +
           uVar73;
  uStack_6d0 = (uint)(uVar76 < uVar73);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[4];
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[6];
  lVar77 = SUB168(auVar29 * auVar65,8);
  uVar73 = SUB168(auVar29 * auVar65,0);
  uVar75 = uVar75 + uVar73;
  uStack_6cc = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_6cc;
  uVar76 = uVar76 + uVar74;
  uStack_6c8 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_6c4 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_6c4;
  uVar76 = uVar76 + uVar73;
  uStack_6c0 = (uint)(uVar76 < uVar73);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[3];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_2[7];
  lVar77 = SUB168(auVar30 * auVar66,8);
  uVar73 = SUB168(auVar30 * auVar66,0);
  uVar75 = uVar75 + uVar73;
  uStack_6bc = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_6bc;
  uVar76 = uVar76 + uVar74;
  uStack_6b8 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_6b4 = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_6b4;
  uVar76 = uVar76 + uVar73;
  uStack_6b0 = (uint)(uVar76 < uVar73);
  param_1[10] = uVar75;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[4];
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[7];
  lVar77 = SUB168(auVar31 * auVar67,8);
  uVar73 = SUB168(auVar31 * auVar67,0);
  uVar76 = uVar76 + uVar73;
  uStack_6ac = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_6ac;
  uVar75 = (longlong)(int)uStack_6d0 + (longlong)(int)uStack_6c8 + (longlong)(int)uStack_6c0 +
           (longlong)(int)uStack_6b8 + (longlong)(int)uStack_6b0 + uVar74;
  uStack_6a8 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_6a4 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_6a4;
  uVar75 = uVar75 + uVar73;
  uStack_6a0 = (uint)(uVar75 < uVar73);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[5];
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[6];
  lVar77 = SUB168(auVar32 * auVar68,8);
  uVar73 = SUB168(auVar32 * auVar68,0);
  uVar76 = uVar76 + uVar73;
  uStack_69c = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_69c;
  uVar75 = uVar75 + uVar74;
  uStack_698 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_694 = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_694;
  uVar75 = uVar75 + uVar73;
  uStack_690 = (uint)(uVar75 < uVar73);
  param_1[0xb] = uVar76;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[6];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[6];
  uVar73 = SUB168(auVar33 * auVar69,0);
  uVar75 = uVar75 + uVar73;
  uStack_68c = (uint)(uVar75 < uVar73);
  uVar73 = SUB168(auVar33 * auVar69,8) + (longlong)(int)uStack_68c;
  uVar76 = (longlong)(int)uStack_6a8 + (longlong)(int)uStack_6a0 + (longlong)(int)uStack_698 +
           (longlong)(int)uStack_690 + uVar73;
  uStack_688 = (uint)(uVar76 < uVar73);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[5];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_2[7];
  lVar77 = SUB168(auVar34 * auVar70,8);
  uVar73 = SUB168(auVar34 * auVar70,0);
  uVar75 = uVar75 + uVar73;
  uStack_684 = (uint)(uVar75 < uVar73);
  uVar74 = lVar77 + (int)uStack_684;
  uVar76 = uVar76 + uVar74;
  uStack_680 = (uint)(uVar76 < uVar74);
  uVar75 = uVar75 + uVar73;
  uStack_67c = (uint)(uVar75 < uVar73);
  uVar73 = lVar77 + (int)uStack_67c;
  uVar76 = uVar76 + uVar73;
  uStack_678 = (uint)(uVar76 < uVar73);
  param_1[0xc] = uVar75;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_2[6];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_2[7];
  lVar77 = SUB168(auVar35 * auVar71,8);
  uVar73 = SUB168(auVar35 * auVar71,0);
  uVar76 = uVar76 + uVar73;
  uStack_674 = (uint)(uVar76 < uVar73);
  uVar74 = lVar77 + (int)uStack_674;
  uVar75 = (longlong)(int)uStack_688 + (longlong)(int)uStack_680 + (longlong)(int)uStack_678 +
           uVar74;
  uStack_670 = (uint)(uVar75 < uVar74);
  uVar76 = uVar76 + uVar73;
  uStack_66c = (uint)(uVar76 < uVar73);
  uVar73 = lVar77 + (int)uStack_66c;
  uVar75 = uVar75 + uVar73;
  uStack_668 = (uint)(uVar75 < uVar73);
  param_1[0xd] = uVar76;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_2[7];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[7];
  uVar73 = SUB168(auVar36 * auVar72,0);
  uVar75 = uVar75 + uVar73;
  uStack_664 = (uint)(uVar75 < uVar73);
  param_1[0xe] = uVar75;
  param_1[0xf] = (longlong)(int)uStack_670 + (longlong)(int)uStack_668 +
                 SUB168(auVar36 * auVar72,8) + (longlong)(int)uStack_664;
  return;
}


/* address=142b308b0 name=FUN_142b308b0 */

/* WARNING: Removing unreachable block (ram,0x000142b309af) */
/* WARNING: Removing unreachable block (ram,0x000142b30952) */
/* WARNING: Removing unreachable block (ram,0x000142b30afe) */

void FUN_142b308b0(undefined8 *param_1,ulonglong *param_2)

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
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1b4;
  
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
  uStack_1b4 = (uint)(uVar22 < uVar21);
  uVar22 = uVar22 + uVar21;
  uStack_22c = (uint)(uVar22 < uVar21);
  uVar21 = lVar25 + (int)uStack_22c;
  uVar23 = lVar25 + (int)uStack_1b4 + uVar21;
  uStack_228 = (uint)(uVar23 < uVar21);
  param_1[1] = uVar22;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[1];
  uVar21 = SUB168(auVar3 * auVar13,0);
  uVar23 = uVar23 + uVar21;
  uStack_224 = (uint)(uVar23 < uVar21);
  uVar21 = SUB168(auVar3 * auVar13,8) + (longlong)(int)uStack_224;
  uVar24 = (longlong)(int)uStack_228 + uVar21;
  uStack_220 = (uint)(uVar24 < uVar21);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  lVar25 = SUB168(auVar4 * auVar14,8);
  uVar21 = SUB168(auVar4 * auVar14,0);
  uVar23 = uVar23 + uVar21;
  uStack_21c = (uint)(uVar23 < uVar21);
  uVar22 = lVar25 + (int)uStack_21c;
  uVar24 = uVar24 + uVar22;
  uStack_218 = (uint)(uVar24 < uVar22);
  uVar23 = uVar23 + uVar21;
  uStack_214 = (uint)(uVar23 < uVar21);
  uVar21 = lVar25 + (int)uStack_214;
  uVar24 = uVar24 + uVar21;
  uStack_210 = (uint)(uVar24 < uVar21);
  param_1[2] = uVar23;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[3];
  lVar25 = SUB168(auVar5 * auVar15,8);
  uVar21 = SUB168(auVar5 * auVar15,0);
  uVar24 = uVar24 + uVar21;
  uStack_20c = (uint)(uVar24 < uVar21);
  uVar22 = lVar25 + (int)uStack_20c;
  uVar23 = (longlong)(int)uStack_220 + (longlong)(int)uStack_218 + (longlong)(int)uStack_210 +
           uVar22;
  uStack_208 = (uint)(uVar23 < uVar22);
  uVar24 = uVar24 + uVar21;
  uStack_204 = (uint)(uVar24 < uVar21);
  uVar21 = lVar25 + (int)uStack_204;
  uVar23 = uVar23 + uVar21;
  uStack_200 = (uint)(uVar23 < uVar21);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2[2];
  lVar25 = SUB168(auVar6 * auVar16,8);
  uVar21 = SUB168(auVar6 * auVar16,0);
  uVar24 = uVar24 + uVar21;
  uStack_1fc = (uint)(uVar24 < uVar21);
  uVar22 = lVar25 + (int)uStack_1fc;
  uVar23 = uVar23 + uVar22;
  uStack_1f8 = (uint)(uVar23 < uVar22);
  uVar24 = uVar24 + uVar21;
  uStack_1f4 = (uint)(uVar24 < uVar21);
  uVar21 = lVar25 + (int)uStack_1f4;
  uVar23 = uVar23 + uVar21;
  uStack_1f0 = (uint)(uVar23 < uVar21);
  param_1[3] = uVar24;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[2];
  uVar21 = SUB168(auVar7 * auVar17,0);
  uVar23 = uVar23 + uVar21;
  uStack_1ec = (uint)(uVar23 < uVar21);
  uVar21 = SUB168(auVar7 * auVar17,8) + (longlong)(int)uStack_1ec;
  uVar24 = (longlong)(int)uStack_208 + (longlong)(int)uStack_200 + (longlong)(int)uStack_1f8 +
           (longlong)(int)uStack_1f0 + uVar21;
  uStack_1e8 = (uint)(uVar24 < uVar21);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[3];
  lVar25 = SUB168(auVar8 * auVar18,8);
  uVar21 = SUB168(auVar8 * auVar18,0);
  uVar23 = uVar23 + uVar21;
  uStack_1e4 = (uint)(uVar23 < uVar21);
  uVar22 = lVar25 + (int)uStack_1e4;
  uVar24 = uVar24 + uVar22;
  uStack_1e0 = (uint)(uVar24 < uVar22);
  uVar23 = uVar23 + uVar21;
  uStack_1dc = (uint)(uVar23 < uVar21);
  uVar21 = lVar25 + (int)uStack_1dc;
  uVar24 = uVar24 + uVar21;
  uStack_1d8 = (uint)(uVar24 < uVar21);
  param_1[4] = uVar23;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[2];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[3];
  lVar25 = SUB168(auVar9 * auVar19,8);
  uVar21 = SUB168(auVar9 * auVar19,0);
  uVar24 = uVar24 + uVar21;
  uStack_1d4 = (uint)(uVar24 < uVar21);
  uVar22 = lVar25 + (int)uStack_1d4;
  uVar23 = (longlong)(int)uStack_1e8 + (longlong)(int)uStack_1e0 + (longlong)(int)uStack_1d8 +
           uVar22;
  uStack_1d0 = (uint)(uVar23 < uVar22);
  uVar24 = uVar24 + uVar21;
  uStack_1cc = (uint)(uVar24 < uVar21);
  uVar21 = lVar25 + (int)uStack_1cc;
  uVar23 = uVar23 + uVar21;
  uStack_1c8 = (uint)(uVar23 < uVar21);
  param_1[5] = uVar24;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  uVar21 = SUB168(auVar10 * auVar20,0);
  uVar23 = uVar23 + uVar21;
  uStack_1c4 = (uint)(uVar23 < uVar21);
  param_1[6] = uVar23;
  param_1[7] = (longlong)(int)uStack_1d0 + (longlong)(int)uStack_1c8 +
               SUB168(auVar10 * auVar20,8) + (longlong)(int)uStack_1c4;
  return;
}


/* address=142b31870 name=FUN_142b31870 */

bool FUN_142b31870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_142b35f80(param_1,param_3,param_2,param_3);
  return iVar1 < 0;
}


/* address=142b318d0 name=FUN_142b318d0 */

ulonglong FUN_142b318d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_142b3c110(param_1,param_4,param_2);
  iVar1 = FUN_142b31870(param_1,param_3,param_4);
  return ~uVar2 & (longlong)iVar1;
}


/* address=142b31930 name=FUN_142b31930 */

undefined8
FUN_142b31930(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iStack_28;
  longlong lStack_20;
  ulonglong auStack_18 [3];
  
  iVar1 = FUN_142b3c1e0(&lStack_20,auStack_18,param_2,param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_142b134e0(param_1 + lStack_20 * 8,0,(param_4 - lStack_20) * 8);
    iStack_28 = 100;
    do {
      iStack_28 = iStack_28 + -1;
      if (iStack_28 == 0) {
        FUN_142afa690(3,0,0x73,s_D__a_1_s_target_release_build_bo_143cbdbf0,0x10f);
        return 0;
      }
      FUN_142b1ce80();
      FUN_142b3baf0(param_1,lStack_20 << 3,param_5);
      FUN_142b1ce90();
      *(ulonglong *)(param_1 + -8 + lStack_20 * 8) =
           *(ulonglong *)(param_1 + -8 + lStack_20 * 8) & auStack_18[0];
      iVar1 = FUN_142b318d0(param_1,param_2,param_3,lStack_20);
    } while (iVar1 == 0);
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142b31a60 name=FUN_142b31a60 */

undefined8 FUN_142b31a60(ulonglong **param_1,int *param_2,ulonglong param_3,undefined8 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  longlong lStack_28;
  ulonglong *puStack_20;
  longlong lStack_18;
  ulonglong *puStack_10;
  
  iVar1 = FUN_142b3c1e0(&uStack_38,&uStack_30,param_3,*param_4,(longlong)*(int *)(param_4 + 1));
  if ((iVar1 == 0) || (iVar1 = FUN_142b252e0(param_1,CONCAT44(uStack_34,uStack_38)), iVar1 == 0)) {
    return 0;
  }
  if (CONCAT44(uStack_34,uStack_38) == 0) {
    FID_conflict__assert((wchar_t *)s_w_143cbdd38,(wchar_t *)s_D_143cbdc60,0x139);
  }
  if (uStack_30 == 0) {
    FID_conflict__assert((wchar_t *)s_m_143cbde28,(wchar_t *)s_D_143cbdd50,0x13a);
  }
  if ((CONCAT44(uStack_34,uStack_38) == 1) && (uStack_30 >> 1 < param_3)) {
    FUN_142afa690(3,0,0x6c,s_D__a_1_s_target_release_build_bo_143cbde40,0x13d);
    return 0;
  }
  FUN_142b1ce80();
  FUN_142b3b560(*param_1,CONCAT44(uStack_34,uStack_38) << 3);
  FUN_142b1ce90();
  (*param_1)[CONCAT44(uStack_34,uStack_38) + -1] =
       (*param_1)[CONCAT44(uStack_34,uStack_38) + -1] & uStack_30;
  iVar1 = FUN_142b318d0(*param_1,param_3,*param_4,CONCAT44(uStack_34,uStack_38));
  *param_2 = iVar1;
  lStack_28 = -(longlong)*param_2;
  lStack_18 = 0;
  puStack_20 = *param_1;
  uVar2 = FUN_142b132d0(lStack_28,0,param_3);
  **param_1 = *(ulonglong *)((longlong)puStack_20 + lStack_18) | uVar2;
  puStack_10 = *param_1;
  uVar2 = FUN_142b132d0(lStack_28,0xffffffffffffffff,uStack_30 >> 1);
  (*param_1)[CONCAT44(uStack_34,uStack_38) + -1] =
       puStack_10[CONCAT44(uStack_34,uStack_38) + -1] & uVar2;
  iVar1 = FUN_142b318d0(*param_1,param_3,*param_4,CONCAT44(uStack_34,uStack_38));
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_b_143cbdf90,(wchar_t *)s_D_143cbdeb0,0x150);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 1) = uStack_38;
  return 1;
}


/* address=142b31d00 name=FUN_142b31d00 */

void FUN_142b31d00(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_142b1f5d0(param_1);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___143cbc068,(wchar_t *)s_D_143cbbf80,0x24);
  }
  iVar1 = FUN_142b1d620(param_1);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___143cbc178,(wchar_t *)s_D_143cbc090,0x25);
  }
  iVar1 = FUN_142b1f6a0(param_1);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_B_143cbc288,(wchar_t *)s_D_143cbc1a0,0x26);
  }
  FUN_142b38cf0(*(undefined8 *)*param_1);
  return;
}


/* address=142b31dc0 name=FUN_142b31dc0 */

undefined8 FUN_142b31dc0(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_142b1f5d0(param_3);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___143cbc498,(wchar_t *)s_D_143cbc3b0,0xa4);
  }
  iVar1 = FUN_142b1d620(param_3);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___143cbc5a8,(wchar_t *)s_D_143cbc4c0,0xa5);
  }
  iVar1 = FUN_142b1f6a0(param_3);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_B_143cbc6b8,(wchar_t *)s_D_143cbc5d0,0xa6);
  }
  FUN_142b1d4c0(param_1);
  uVar2 = FUN_142b1d430(param_3);
  if (uVar2 == 0) {
    FID_conflict__assert((wchar_t *)s_n_143cbc7c8,(wchar_t *)s_D_143cbc6e0,0xab);
  }
  if (param_2 <= uVar2) {
    FID_conflict__assert((wchar_t *)s_p_143cbc8c8,(wchar_t *)s_D_143cbc7e0,0xac);
  }
  if (uVar2 == 1) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_142b1fc90(param_1,uVar2 - 1);
    if ((iVar1 != 0) &&
       (iVar1 = FUN_142b341e0(param_1,param_1,param_2 - (uVar2 - 1),param_3,param_4), iVar1 != 0)) {
      return 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* address=142b31f20 name=FUN_142b31f20 */

int FUN_142b31f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong **ppuVar1;
  int iVar2;
  longlong lVar3;
  int iStack_68;
  ulonglong **ppuStack_60;
  uint uStack_58;
  ulonglong **ppuStack_50;
  int iStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  iVar2 = FUN_142b1f6a0(param_2);
  if (iVar2 == 0) {
    FUN_142afa690(3,0,0x68,s_D__a_1_s_target_release_build_bo_143cbb8a0,0x49);
    iStack_68 = -2;
  }
  else {
    iVar2 = FUN_142b1d620(param_2);
    if (iVar2 == 0) {
      iStack_68 = -2;
      FUN_142b1dbe0(param_3);
      ppuStack_60 = (ulonglong **)FUN_142b1dc40(param_3);
      ppuStack_50 = (ulonglong **)FUN_142b1dc40(param_3);
      if (((ppuStack_50 != (ulonglong **)0x0) &&
          (lVar3 = FUN_142b1d300(ppuStack_60,param_1), lVar3 != 0)) &&
         (lVar3 = FUN_142b1d300(ppuStack_50,param_2), lVar3 != 0)) {
        iStack_68 = 1;
        while (ppuVar1 = ppuStack_60, iVar2 = FUN_142b1f5d0(ppuStack_60), iVar2 == 0) {
          uStack_58 = 0;
          while (iVar2 = FUN_142b1fe60(ppuStack_60,uStack_58), iVar2 == 0) {
            uStack_58 = uStack_58 + 1;
          }
          iVar2 = FUN_142b1fb40(ppuStack_60,ppuStack_60,uStack_58);
          if (iVar2 == 0) {
            iStack_68 = -2;
            goto LAB_142b32252;
          }
          if ((uStack_58 & 1) != 0) {
            if (*(int *)(ppuStack_50 + 1) == 0) {
              uStack_40 = 0;
            }
            else {
              uStack_40 = **ppuStack_50;
            }
            iStack_68 = iStack_68 * *(int *)(&DAT_1431a6688 + (uStack_40 & 7) * 4);
          }
          if (*(int *)(ppuStack_60 + 2) == 0) {
            if (*(int *)(ppuStack_60 + 1) == 0) {
              uStack_30 = 0;
            }
            else {
              uStack_30 = **ppuStack_60;
            }
            uStack_20 = uStack_30;
          }
          else {
            if (*(int *)(ppuStack_60 + 1) == 0) {
              uStack_38 = 0;
            }
            else {
              uStack_38 = **ppuStack_60;
            }
            uStack_20 = ~uStack_38;
          }
          if (*(int *)(ppuStack_50 + 1) == 0) {
            uStack_28 = 0;
          }
          else {
            uStack_28 = **ppuStack_50;
          }
          if ((uStack_20 & uStack_28 & 2) != 0) {
            iStack_68 = -iStack_68;
          }
          iVar2 = FUN_142b204d0(ppuStack_50,ppuStack_50,ppuStack_60,param_3);
          if (iVar2 == 0) {
            iStack_68 = -2;
            goto LAB_142b32252;
          }
          ppuStack_60 = ppuStack_50;
          ppuStack_50 = ppuVar1;
          *(undefined4 *)(ppuVar1 + 2) = 0;
        }
        iVar2 = FUN_142b1f5f0(ppuStack_50);
        if (iVar2 == 0) {
          iStack_48 = 0;
        }
        else {
          iStack_48 = iStack_68;
        }
        iStack_68 = iStack_48;
      }
LAB_142b32252:
      FUN_142b1dd90(param_3);
    }
    else {
      FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cbb910,0x4f);
      iStack_68 = -2;
    }
  }
  return iStack_68;
}


/* address=142b32280 name=FUN_142b32280 */

ulonglong FUN_142b32280(longlong param_1,ulonglong param_2,ulonglong param_3)

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


/* address=142b32300 name=FUN_142b32300 */

undefined8 FUN_142b32300(longlong **param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  int iStack_18;
  
  pplVar2 = (longlong **)(param_2 + 0x18);
  if ((*(int *)(param_2 + 0x20) < 1) || (-1 < (*pplVar2)[*(int *)(param_2 + 0x20) + -1])) {
    uVar3 = FUN_142b23270(param_1,param_2,param_2,param_3);
  }
  else {
    iVar1 = FUN_142b252e0(param_1);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      **param_1 = -**pplVar2;
      for (iStack_18 = 1; iStack_18 < *(int *)(param_2 + 0x20); iStack_18 = iStack_18 + 1) {
        (*param_1)[iStack_18] = ~(*pplVar2)[iStack_18];
      }
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_1 + 2) = 0;
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=142b32440 name=FUN_142b32440 */

undefined4 FUN_142b32440(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_142b1d620(param_1);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_142b256e0(param_1,(longlong)*(int *)(param_2 + 0x20)), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142b324a0 name=FUN_142b324a0 */

undefined2 FUN_142b324a0(longlong *param_1,ushort param_2)

{
  undefined auVar1 [16];
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uStack_28;
  int iStack_24;
  
  if (param_2 < 2) {
    uStack_28 = 0;
  }
  else {
    uVar3 = FUN_142b24f70((longlong)(int)(param_2 - 1));
    if (0x10 < uVar3) {
      FID_conflict__assert((wchar_t *)s_p_143cb9540,(wchar_t *)s_D_143cb9460,0x48);
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (1L << ((char)uVar3 + 0x20U & 0x3f)) + -1 + (ulonglong)param_2;
    uVar4 = SUB164(auVar1 / ZEXT216(param_2),0);
    uStack_28 = 0;
    iStack_24 = *(int *)(param_1 + 1);
    while (iStack_24 = iStack_24 + -1, -1 < iStack_24) {
      uVar2 = FUN_142b36a90(uStack_28,*(ulonglong *)(*param_1 + (longlong)iStack_24 * 8) >> 0x20,
                            param_2,uVar3,uVar4);
      uStack_28 = FUN_142b36a90(uVar2,*(ulonglong *)(*param_1 + (longlong)iStack_24 * 8) &
                                      0xffffffff,param_2,uVar3,uVar4);
    }
  }
  return uStack_28;
}


/* address=142b325e0 name=FUN_142b325e0 */

undefined4 FUN_142b325e0(undefined8 param_1)

{
  int iVar1;
  undefined2 auStack_18 [12];
  
  iVar1 = FUN_142b3b4d0(auStack_18,param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_142b1f640(param_1,auStack_18[0]), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


/* address=142b32640 name=FUN_142b32640 */

undefined8 FUN_142b32640(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = param_2 + 0x18;
  lVar4 = FUN_142b1dc40(param_3);
  *param_1 = lVar4;
  lVar4 = FUN_142b1dc40(param_3);
  param_1[1] = lVar4;
  lVar4 = FUN_142b1dc40(param_3);
  param_1[2] = lVar4;
  lVar4 = FUN_142b1dc40(param_3);
  param_1[3] = lVar4;
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) && (param_1[3] != 0)) {
    uVar5 = FUN_142b1d400();
    iVar1 = FUN_142b33060(*param_1,lVar3,uVar5);
    if (iVar1 != 0) {
      uVar2 = FUN_142b1ff90(*param_1);
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
      iVar1 = FUN_142b32c20(param_1[1],*param_1,*(undefined4 *)((longlong)param_1 + 0x24),param_3);
      if (iVar1 != 0) {
        uVar2 = FUN_142b1d430(lVar3);
        *(undefined4 *)(param_1 + 4) = uVar2;
        iVar1 = FUN_142b32300(param_1[2],param_2,param_3);
        if ((iVar1 != 0) && (iVar1 = FUN_142b33060(param_1[3],lVar3,param_1[2]), iVar1 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* address=142b327b0 name=FUN_142b327b0 */

undefined4
FUN_142b327b0(longlong param_1,uint *param_2,undefined8 param_3,longlong param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iStack_38;
  undefined4 uStack_34;
  ulonglong uStack_20;
  
  uStack_34 = 0;
  FUN_142b1dbe0(param_5);
  lVar4 = FUN_142b1dc40(param_5);
  if (((lVar4 != 0) &&
      (iVar1 = FUN_142b23d80(lVar4,param_3,*(undefined8 *)(param_1 + 8),param_4 + 0x18,param_5,
                             param_4), iVar1 != 0)) &&
     (iVar1 = FUN_142b23220(lVar4,lVar4,param_4,param_5), iVar1 != 0)) {
    uVar2 = FUN_142b1f380(lVar4,*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_142b1f380(lVar4,*(undefined8 *)(param_1 + 0x18));
    uStack_20 = -(longlong)(int)(uVar2 | uVar3);
    iStack_38 = 1;
    while ((iStack_38 < *(int *)(param_1 + 0x20) &&
           (uVar5 = FUN_142b132a0(iStack_38,*(undefined4 *)(param_1 + 0x24)),
           (uVar5 & ~uStack_20) == 0))) {
      iVar1 = FUN_142b23300(lVar4,lVar4,lVar4,param_4,param_5);
      if (iVar1 == 0) goto LAB_142b329b6;
      iVar1 = FUN_142b1f380(lVar4,*(undefined8 *)(param_1 + 0x18));
      uStack_20 = uStack_20 | -(longlong)iVar1;
      iVar1 = FUN_142b1f380(lVar4,*(undefined8 *)(param_1 + 0x10));
      if (((longlong)iVar1 & ~uStack_20) != 0) break;
      iStack_38 = iStack_38 + 1;
    }
    *param_2 = (uint)uStack_20 & 1;
    uStack_34 = 1;
  }
LAB_142b329b6:
  FUN_142b1dd90(param_5);
  return uStack_34;
}


/* address=142b329e0 name=FUN_142b329e0 */

void FUN_142b329e0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uStack_18;
  
  if (param_3 != 0) {
    for (uStack_18 = 0; uStack_18 < param_3 - 1U; uStack_18 = uStack_18 + 1) {
      *(ulonglong *)(param_1 + uStack_18 * 8) =
           *(ulonglong *)(param_2 + uStack_18 * 8) >> 1 |
           *(longlong *)(param_2 + 8 + uStack_18 * 8) << 0x3f;
    }
    *(ulonglong *)(param_1 + -8 + param_3 * 8) = *(ulonglong *)(param_2 + -8 + param_3 * 8) >> 1;
  }
  return;
}


/* address=142b32a80 name=FUN_142b32a80 */

void FUN_142b32a80(longlong param_1,longlong param_2,uint param_3,ulonglong param_4)

{
  ulonglong uVar1;
  sbyte sVar2;
  ulonglong uStack_28;
  
  uVar1 = (ulonglong)param_3 / 0x40;
  if (uVar1 < param_4) {
    uStack_28 = uVar1;
    if (param_3 % 0x40 == 0) {
      FUN_142b13490(param_1,param_2 + uVar1 * 8,(param_4 - uVar1) * 8);
    }
    else {
      for (; sVar2 = (sbyte)(param_3 % 0x40), uStack_28 < param_4 - 1; uStack_28 = uStack_28 + 1) {
        *(ulonglong *)(param_1 + (uStack_28 - uVar1) * 8) =
             *(ulonglong *)(param_2 + uStack_28 * 8) >> sVar2 |
             *(longlong *)(param_2 + 8 + uStack_28 * 8) << (0x40U - sVar2 & 0x3f);
      }
      *(ulonglong *)(param_1 + ((param_4 - 1) - uVar1) * 8) =
           *(ulonglong *)(param_2 + -8 + param_4 * 8) >> sVar2;
    }
    FUN_142b134e0(param_1 + param_4 * 8 + uVar1 * -8,0,uVar1 << 3);
  }
  else {
    FUN_142b134e0(param_1,0,param_4 << 3);
  }
  return;
}


/* address=142b32c20 name=FUN_142b32c20 */

undefined4 FUN_142b32c20(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  FUN_142b1dbe0(param_4);
  puVar3 = (undefined8 *)FUN_142b1dc40(param_4);
  if (((puVar3 != (undefined8 *)0x0) && (lVar4 = FUN_142b1d300(param_1,param_2), lVar4 != 0)) &&
     (iVar2 = FUN_142b252e0(puVar3,(longlong)*(int *)(param_1 + 1)), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 1);
    for (bVar1 = 0; (uint)(iVar2 * 0x40) >> (bVar1 & 0x1f) != 0; bVar1 = bVar1 + 1) {
      FUN_142b32a80(*puVar3,*param_1,1 << (bVar1 & 0x1f),(longlong)*(int *)(param_1 + 1));
      FUN_142b25540(*param_1,-(ulonglong)(param_3 >> (bVar1 & 0x1f) & 1),*puVar3,*param_1,
                    (longlong)*(int *)(param_1 + 1));
    }
    uStack_24 = 1;
  }
  FUN_142b1dd90(param_4);
  return uStack_24;
}


/* address=142b32d80 name=FUN_142b32d80 */

longlong FUN_142b32d80(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  
  if (param_1 == param_2) {
    FID_conflict__assert((wchar_t *)s_r_143cb8e00,(wchar_t *)s_D_143cb8d30,0x19f);
  }
  lVar1 = FUN_142b26930(param_1,param_2,param_4,param_5);
  param_3 = param_3 - lVar1;
  if ((param_3 != 0) && (param_3 != -1)) {
    FID_conflict__assert((wchar_t *)s_c_143cb8ee0,(wchar_t *)s_D_143cb8e10,0x1ac);
  }
  FUN_142b25540(param_1,param_3,param_2,param_1,param_5);
  return param_3;
}


/* address=142b32e50 name=FUN_142b32e50 */

longlong FUN_142b32e50(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_142b26930(param_4,param_1,param_3,param_5);
  param_2 = param_2 - lVar1;
  if ((param_2 != 0) && (param_2 != -1)) {
    FID_conflict__assert((wchar_t *)s_c_143cb9000,(wchar_t *)s_D_143cb8f30,0x1b5);
  }
  FUN_142b25540(param_1,param_2,param_1,param_4,param_5);
  return param_2;
}


/* address=142b32ef0 name=FUN_142b32ef0 */

undefined8 FUN_142b32ef0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plStackX_10;
  longlong *plStackX_18;
  int iStack_38;
  uint uStack_2c;
  longlong lStack_28;
  
  plStackX_10 = param_2;
  plStackX_18 = param_3;
  if (*(int *)(param_2 + 1) < *(int *)(param_3 + 1)) {
    plStackX_10 = param_3;
    plStackX_18 = param_2;
  }
  iVar1 = *(int *)(plStackX_10 + 1);
  iStack_38 = *(int *)(plStackX_18 + 1);
  iVar2 = FUN_142b252e0(param_1,(longlong)(iVar1 + 1));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 1) = iVar1 + 1;
    lStack_28 = FUN_142b26700(*param_1,*plStackX_10,*plStackX_18,(longlong)iStack_38);
    for (; iStack_38 < iVar1; iStack_38 = iStack_38 + 1) {
      uVar4 = lStack_28 + *(longlong *)(*plStackX_10 + (longlong)iStack_38 * 8);
      uStack_2c = (uint)(uVar4 < *(ulonglong *)(*plStackX_10 + (longlong)iStack_38 * 8));
      lStack_28 = (longlong)(int)uStack_2c;
      *(ulonglong *)(*param_1 + (longlong)iStack_38 * 8) = uVar4;
    }
    *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lStack_28;
    uVar3 = 1;
  }
  return uVar3;
}


/* address=142b33060 name=FUN_142b33060 */

undefined8 FUN_142b33060(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int iStack_28;
  int iStack_24;
  uint uStack_20;
  longlong lStack_18;
  
  iStack_24 = *(int *)(param_3 + 1);
  if (*(int *)(param_2 + 1) < iStack_24) {
    iVar2 = FUN_142b256e0(param_3,(longlong)*(int *)(param_2 + 1));
    if (iVar2 == 0) {
      FUN_142afa690(3,0,100,s_D__a_1_s_target_release_build_bo_143cb7f90,0xe8);
      return 0;
    }
    iStack_24 = *(int *)(param_2 + 1);
  }
  iVar2 = FUN_142b252e0(param_1,(longlong)*(int *)(param_2 + 1));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lStack_18 = FUN_142b26930(*param_1,*param_2,*param_3,(longlong)iStack_24);
    for (iStack_28 = iStack_24; iStack_28 < *(int *)(param_2 + 1); iStack_28 = iStack_28 + 1) {
      uVar1 = *(ulonglong *)(*param_2 + (longlong)iStack_28 * 8);
      *(longlong *)(*param_1 + (longlong)iStack_28 * 8) =
           *(longlong *)(*param_2 + (longlong)iStack_28 * 8) - lStack_18;
      uStack_20 = (uint)(uVar1 < *(ulonglong *)(*param_1 + (longlong)iStack_28 * 8));
      lStack_18 = (longlong)(int)uStack_20;
    }
    if (lStack_18 == 0) {
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_1 + 2) = 0;
      uVar3 = 1;
    }
    else {
      FUN_142afa690(3,0,100,s_D__a_1_s_target_release_build_bo_143cb8000,0xfb);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=142b33220 name=FUN_142b33220 */

int FUN_142b33220(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*(int *)(param_2 + 1) < *(int *)(param_3 + 1)) {
    uStack_34 = *(undefined4 *)(param_2 + 1);
  }
  else {
    uStack_34 = *(undefined4 *)(param_3 + 1);
  }
  iVar1 = *(int *)(param_3 + 1);
  iVar2 = *(int *)(param_2 + 1);
  if (*(int *)(param_2 + 1) < *(int *)(param_3 + 1)) {
    iStack_30 = *(int *)(param_3 + 1);
  }
  else {
    iStack_30 = *(int *)(param_2 + 1);
  }
  FUN_142b1dbe0(param_4);
  puVar4 = (undefined8 *)FUN_142b1dc40(param_4);
  if (puVar4 != (undefined8 *)0x0) {
    iVar3 = FUN_142b252e0(param_1,(longlong)iStack_30);
    if (iVar3 != 0) {
      iVar3 = FUN_142b252e0(puVar4,(longlong)iStack_30);
      if (iVar3 != 0) {
        iStack_2c = 1;
        goto LAB_142b3332a;
      }
    }
  }
  iStack_2c = 0;
LAB_142b3332a:
  if (iStack_2c != 0) {
    FUN_142b39310(*param_1,*param_2,*param_3,uStack_34,iVar2 - iVar1,*puVar4);
    *(int *)(param_1 + 1) = iStack_30;
  }
  FUN_142b1dd90(param_4);
  return iStack_2c;
}


/* address=142b333a0 name=FUN_142b333a0 */

undefined8 FUN_142b333a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_2 + 0x10) == 0) && (*(int *)(param_3 + 0x10) == 0)) {
    uVar1 = FUN_142b3a610(param_1,param_2,param_3,param_4);
  }
  else {
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cbd540,0x210);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142b33420 name=FUN_142b33420 */

void FUN_142b33420(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined auStack_168 [32];
  uint uStack_148;
  undefined8 *puStack_140;
  int iStack_138;
  undefined4 uStack_134;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_168;
  uStack_148 = *(uint *)(param_2 + 1);
  if ((int)uStack_148 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_142b3369d;
  }
  uStack_134 = 0;
  FUN_142b1dbe0(param_3);
  puStack_128 = param_1;
  if (param_2 == param_1) {
    puStack_128 = (undefined8 *)FUN_142b1dc40(param_3);
  }
  puStack_140 = puStack_128;
  puStack_130 = (undefined8 *)FUN_142b1dc40(param_3);
  if ((puStack_140 != (undefined8 *)0x0) && (puStack_130 != (undefined8 *)0x0)) {
    iStack_138 = uStack_148 << 1;
    iVar1 = FUN_142b252e0(puStack_140,(longlong)iStack_138);
    if (iVar1 != 0) {
      if (uStack_148 == 4) {
        FUN_142b308b0(*puStack_140,*param_2);
      }
      else if (uStack_148 == 8) {
        FUN_142b2cab0(*puStack_140,*param_2);
      }
      else {
        if (0xf < (int)uStack_148) {
          if ((uStack_148 == 0) || ((uStack_148 & uStack_148 - 1) != 0)) {
            iVar1 = FUN_142b252e0(puStack_130,(longlong)iStack_138);
            if (iVar1 != 0) {
              FUN_142b3aa60(*puStack_140,*param_2,(longlong)(int)uStack_148,*puStack_130);
              goto LAB_142b33644;
            }
          }
          else {
            iVar1 = FUN_142b252e0(puStack_130,(longlong)(int)(uStack_148 << 2));
            if (iVar1 != 0) {
              FUN_142b3ac10(*puStack_140,*param_2,(longlong)(int)uStack_148,*puStack_130);
              goto LAB_142b33644;
            }
          }
          goto LAB_142b3368c;
        }
        FUN_142b3aa60(*puStack_140,*param_2,(longlong)(int)uStack_148,auStack_118);
      }
LAB_142b33644:
      *(undefined4 *)(puStack_140 + 2) = 0;
      *(int *)(puStack_140 + 1) = iStack_138;
      if ((puStack_140 == param_1) || (lVar2 = FUN_142b1d300(param_1,puStack_140), lVar2 != 0)) {
        uStack_134 = 1;
      }
    }
  }
LAB_142b3368c:
  FUN_142b1dd90(param_3);
LAB_142b3369d:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_168);
  return;
}


/* address=142b336c0 name=FUN_142b336c0 */

undefined4
FUN_142b336c0(ulonglong **param_1,ulonglong **param_2,ulonglong **param_3,ulonglong **param_4,
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
  ulonglong **ppuStack_58;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  ulonglong **ppuStack_40;
  undefined4 uStack_38;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  iVar1 = FUN_142b1d620(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_142b1d620(param_4), iVar1 == 0)) {
    iVar1 = FUN_142b1f5d0(param_4);
    if (iVar1 == 0) {
      uStack_38 = 0;
      FUN_142b1dbe0(param_6);
      if (((param_1 == (ulonglong **)0x0) || (param_1 == param_3)) ||
         (ppuStack_40 = param_1, param_1 == param_4)) {
        ppuStack_40 = (ulonglong **)FUN_142b1dc40(param_6);
      }
      if (((param_2 == (ulonglong **)0x0) || (param_2 == param_3)) ||
         (ppuStack_58 = param_2, param_2 == param_4)) {
        ppuStack_58 = (ulonglong **)FUN_142b1dc40(param_6);
      }
      puVar3 = (undefined8 *)FUN_142b1dc40(param_6);
      if (((ppuStack_40 != (ulonglong **)0x0) && (ppuStack_58 != (ulonglong **)0x0)) &&
         ((puVar3 != (undefined8 *)0x0 &&
          (((iVar1 = FUN_142b252e0(ppuStack_40,(longlong)*(int *)(param_3 + 1)), iVar1 != 0 &&
            (iVar1 = FUN_142b252e0(ppuStack_58,(longlong)*(int *)(param_4 + 1)), iVar1 != 0)) &&
           (iVar1 = FUN_142b252e0(puVar3), iVar1 != 0)))))) {
        FUN_142b134e0(*ppuStack_40,0,(longlong)*(int *)(param_3 + 1) << 3);
        *(undefined4 *)(ppuStack_40 + 1) = *(undefined4 *)(param_3 + 1);
        *(undefined4 *)(ppuStack_40 + 2) = 0;
        FUN_142b134e0(*ppuStack_58,0,(longlong)*(int *)(param_4 + 1) << 3);
        *(undefined4 *)(ppuStack_58 + 1) = *(undefined4 *)(param_4 + 1);
        *(undefined4 *)(ppuStack_58 + 2) = 0;
        uVar2 = FUN_142b1d430(param_4);
        if (uVar2 < param_5) {
          FID_conflict__assert((wchar_t *)s_d_143cb9200,(wchar_t *)s_D_143cb9130,0x1fb);
        }
        uStack_50 = 0;
        if (param_5 != 0) {
          uStack_50 = (param_5 - 1) / 0x40;
          if (*(int *)(param_3 + 1) < (int)uStack_50) {
            uStack_50 = *(uint *)(param_3 + 1);
          }
          FUN_142b13440(*ppuStack_58,
                        *param_3 + ((longlong)*(int *)(param_3 + 1) - (longlong)(int)uStack_50),
                        (longlong)(int)uStack_50 << 3);
        }
        iStack_4c = *(int *)(param_3 + 1) - uStack_50;
        while (iStack_4c = iStack_4c + -1, -1 < iStack_4c) {
          for (iStack_48 = 0x3f; -1 < iStack_48; iStack_48 = iStack_48 + -1) {
            uVar4 = FUN_142b26700(*ppuStack_58,*ppuStack_58,*ppuStack_58,
                                  (longlong)*(int *)(param_4 + 1));
            **ppuStack_58 = **ppuStack_58 | (*param_3)[iStack_4c] >> ((byte)iStack_48 & 0x3f) & 1;
            uVar5 = FUN_142b32e50(*ppuStack_58,uVar4,*param_4,*puVar3,
                                  (longlong)*(int *)(param_4 + 1));
            (*ppuStack_40)[iStack_4c] =
                 (*ppuStack_40)[iStack_4c] | (~uVar5 & 1) << ((byte)iStack_48 & 0x3f);
          }
        }
        if (((param_1 == (ulonglong **)0x0) ||
            (lVar6 = FUN_142b1d300(param_1,ppuStack_40), lVar6 != 0)) &&
           ((param_2 == (ulonglong **)0x0 ||
            (lVar6 = FUN_142b1d300(param_2,ppuStack_58), lVar6 != 0)))) {
          uStack_38 = 1;
        }
      }
      FUN_142b1dd90(param_6);
    }
    else {
      FUN_142afa690(3,0,0x69,s_D__a_1_s_target_release_build_bo_143cb90c0,CONCAT44(uVar7,0x1d1));
      uStack_38 = 0;
    }
  }
  else {
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cb9050,CONCAT44(uVar7,0x1cd));
    uStack_38 = 0;
  }
  return uStack_38;
}


/* address=142b33bb0 name=FUN_142b33bb0 */

undefined4 FUN_142b33bb0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  ulonglong **ppuStack_18;
  ulonglong uStack_10;
  
  uStack_20 = 0;
  FUN_142b1dbe0(param_4);
  ppuStack_18 = (ulonglong **)FUN_142b1dc40(param_4);
  if ((ppuStack_18 != (ulonglong **)0x0) &&
     (iVar1 = FUN_142b38060(ppuStack_18,&uStack_1c,param_2,param_3,param_4), iVar1 != 0)) {
    if (*(int *)(ppuStack_18 + 1) == 0) {
      *param_1 = 0;
    }
    else {
      uStack_10 = (ulonglong)uStack_1c | **ppuStack_18 ^ 1;
      for (iStack_28 = 1; iStack_28 < *(int *)(ppuStack_18 + 1); iStack_28 = iStack_28 + 1) {
        uStack_10 = uStack_10 | (*ppuStack_18)[iStack_28];
      }
      uStack_24 = (uint)(uStack_10 == 0);
      *param_1 = uStack_24;
    }
    uStack_20 = 1;
  }
  FUN_142b1dd90(param_4);
  return uStack_20;
}


/* address=142b33cf0 name=FUN_142b33cf0 */

undefined4 FUN_142b33cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  longlong lStack_18;
  
  FUN_142b1dbe0(param_4);
  lStack_18 = FUN_142b1dc40(param_4);
  if (lStack_18 != 0) {
    iVar1 = FUN_142b333a0(param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      uVar2 = param_4;
      iVar1 = FUN_142b38060(lStack_18,&uStack_24,param_2,param_3,param_4);
      if (iVar1 != 0) {
        iVar1 = FUN_142b336c0(param_1,0,param_1,lStack_18,uVar2 & 0xffffffff00000000,param_4);
        if (iVar1 != 0) {
          iVar1 = FUN_142b32c20(param_1,param_1,uStack_24,param_4);
          if (iVar1 != 0) {
            uStack_28 = 1;
            goto LAB_142b33dcc;
          }
        }
      }
    }
  }
  uStack_28 = 0;
LAB_142b33dcc:
  uStack_20 = uStack_28;
  FUN_142b1dd90(param_4);
  return uStack_20;
}


/* address=142b33df0 name=FUN_142b33df0 */

void FUN_142b33df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b26700(param_1,param_2,param_3,param_6);
  FUN_142b32e50(param_1,uVar1,param_4,param_5,param_6);
  return;
}


/* address=142b33e60 name=FUN_142b33e60 */

int FUN_142b33e60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iStack_18;
  
  FUN_142b1dbe0(param_5);
  puVar2 = (undefined8 *)FUN_142b36940(param_2,(longlong)*(int *)(param_4 + 1),param_5);
  puVar3 = (undefined8 *)FUN_142b36940(param_3,(longlong)*(int *)(param_4 + 1),param_5);
  puVar4 = (undefined8 *)FUN_142b368d0((longlong)*(int *)(param_4 + 1),param_5);
  if (((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) &&
     (puVar4 != (undefined8 *)0x0)) {
    iVar1 = FUN_142b252e0(param_1,(longlong)*(int *)(param_4 + 1));
    if (iVar1 != 0) {
      iStack_18 = 1;
      goto LAB_142b33f21;
    }
  }
  iStack_18 = 0;
LAB_142b33f21:
  if (iStack_18 != 0) {
    FUN_142b33df0(*param_1,*puVar2,*puVar3,*param_4,*puVar4,(longlong)*(int *)(param_4 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  FUN_142b1dd90(param_5);
  return iStack_18;
}


/* address=142b33fb0 name=FUN_142b33fb0 */

void FUN_142b33fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_142b26930(param_1,param_2,param_3,param_6);
  FUN_142b26700(param_5,param_1,param_4,param_6);
  FUN_142b25540(param_1,-lVar1,param_5,param_1,param_6);
  return;
}


/* address=142b34040 name=FUN_142b34040 */

int FUN_142b34040(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iStack_18;
  
  FUN_142b1dbe0(param_5);
  puVar2 = (undefined8 *)FUN_142b36940(param_2,(longlong)*(int *)(param_4 + 1),param_5);
  puVar3 = (undefined8 *)FUN_142b36940(param_3,(longlong)*(int *)(param_4 + 1),param_5);
  puVar4 = (undefined8 *)FUN_142b368d0((longlong)*(int *)(param_4 + 1),param_5);
  if (((puVar2 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) &&
     (puVar4 != (undefined8 *)0x0)) {
    iVar1 = FUN_142b252e0(param_1,(longlong)*(int *)(param_4 + 1));
    if (iVar1 != 0) {
      iStack_18 = 1;
      goto LAB_142b34101;
    }
  }
  iStack_18 = 0;
LAB_142b34101:
  if (iStack_18 != 0) {
    FUN_142b33fb0(*param_1,*puVar2,*puVar3,*param_4,*puVar4,(longlong)*(int *)(param_4 + 1));
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  FUN_142b1dd90(param_5);
  return iStack_18;
}


/* address=142b34190 name=FUN_142b34190 */

void FUN_142b34190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142b33e60(param_1,param_2,param_2,param_3,param_4);
  return;
}


/* address=142b341e0 name=FUN_142b341e0 */

undefined8
FUN_142b341e0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iStack_18;
  
  lVar2 = FUN_142b1d300(param_1,param_2);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    for (iStack_18 = 0; iStack_18 < param_3; iStack_18 = iStack_18 + 1) {
      iVar1 = FUN_142b34190(param_1,param_1,param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* address=142b34270 name=FUN_142b34270 */

bool FUN_142b34270(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
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
  ulonglong uStack_e8;
  ulonglong uStack_78;
  
  *param_2 = 0;
  iVar1 = FUN_142b1d620(param_3);
  uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
  if (iVar1 == 0) {
    iVar1 = FUN_142b1f330(param_3,param_4);
    uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
    if (iVar1 < 0) {
      iVar1 = FUN_142b1f5d0(param_3);
      uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20);
      if (iVar1 != 0) {
        iVar1 = FUN_142b1f5f0(param_4);
        if (iVar1 != 0) {
          FUN_142b1d4c0(param_1);
          return true;
        }
        *param_2 = 1;
        FUN_142afa690(3,0,0x70,s_D__a_1_s_target_release_build_bo_143cbb2b0,CONCAT44(uVar21,0xb7));
        return false;
      }
      iVar1 = FUN_142b1f6a0(param_3);
      if ((iVar1 == 0) && (iVar1 = FUN_142b1f6a0(param_4), iVar1 == 0)) {
        *param_2 = 1;
        FUN_142afa690(3,0,0x70,s_D__a_1_s_target_release_build_bo_143cbb320,199);
        return false;
      }
      uVar2 = (ulonglong)*(int *)(param_4 + 1);
      uStack_e8 = (longlong)*(int *)(param_3 + 1);
      if (uVar2 < (ulonglong)(longlong)*(int *)(param_3 + 1)) {
        uStack_e8 = uVar2;
      }
      bVar20 = false;
      FUN_142b1dbe0(param_5);
      puVar3 = (undefined8 *)FUN_142b1dc40(param_5);
      puVar4 = (undefined8 *)FUN_142b1dc40(param_5);
      puVar5 = (undefined8 *)FUN_142b1dc40(param_5);
      puVar6 = (undefined8 *)FUN_142b1dc40(param_5);
      puVar7 = (undefined8 *)FUN_142b1dc40(param_5);
      puVar8 = (undefined8 *)FUN_142b1dc40(param_5);
      puVar9 = (undefined8 *)FUN_142b1dc40(param_5);
      puVar10 = (undefined8 *)FUN_142b1dc40(param_5);
      if (((((((puVar3 != (undefined8 *)0x0) && (puVar4 != (undefined8 *)0x0)) &&
             (puVar5 != (undefined8 *)0x0)) &&
            ((puVar6 != (undefined8 *)0x0 && (puVar7 != (undefined8 *)0x0)))) &&
           (((puVar8 != (undefined8 *)0x0 &&
             ((puVar9 != (undefined8 *)0x0 && (puVar10 != (undefined8 *)0x0)))) &&
            (lVar11 = FUN_142b1d300(puVar3,param_3), lVar11 != 0)))) &&
          ((((lVar11 = FUN_142b1d300(puVar4,param_4), lVar11 != 0 &&
             (iVar1 = FUN_142b1d4f0(puVar5), iVar1 != 0)) &&
            (iVar1 = FUN_142b1d4f0(puVar8), iVar1 != 0)) &&
           (((iVar1 = FUN_142b25460(puVar3,uVar2), iVar1 != 0 &&
             (iVar1 = FUN_142b25460(puVar4,uVar2), iVar1 != 0)) &&
            ((iVar1 = FUN_142b25460(puVar5,uVar2), iVar1 != 0 &&
             ((iVar1 = FUN_142b25460(puVar7,uVar2), iVar1 != 0 &&
              (iVar1 = FUN_142b25460(puVar6,uStack_e8), iVar1 != 0)))))))))) &&
         ((iVar1 = FUN_142b25460(puVar8,uStack_e8), iVar1 != 0 &&
          ((iVar1 = FUN_142b25460(puVar9,uVar2), iVar1 != 0 &&
           (iVar1 = FUN_142b25460(puVar10,uVar2), iVar1 != 0)))))) {
        uVar19 = uStack_e8 * 0x40 + uVar2 * 0x40;
        if (uVar19 < uStack_e8 * 0x40) {
          FUN_142afa690(3,0,0x66,s_D__a_1_s_target_release_build_bo_143cbb390,0xf8);
        }
        else {
          for (uStack_78 = 0; uVar21 = (undefined4)(in_stack_fffffffffffffef8 >> 0x20),
              uStack_78 < uVar19; uStack_78 = uStack_78 + 1) {
            uVar12 = FUN_142b37ed0(*(undefined8 *)*puVar3);
            uVar13 = FUN_142b37ed0(*(undefined8 *)*puVar4);
            uVar12 = uVar12 & uVar13;
            lVar11 = FUN_142b26930(*puVar9,*puVar4,*puVar3,uVar2);
            uVar13 = -lVar11;
            FUN_142b25540(*puVar4,uVar12 & ~uVar13,*puVar9,*puVar4,uVar2);
            FUN_142b26930(*puVar9,*puVar3,*puVar4,uVar2);
            FUN_142b25540(*puVar3,uVar12 & uVar13,*puVar9,*puVar3,uVar2);
            lVar11 = FUN_142b26700(*puVar9,*puVar5,*puVar7,uVar2);
            lVar14 = FUN_142b26930(*puVar10,*puVar9,*param_4,uVar2);
            FUN_142b25540(*puVar9,lVar11 - lVar14,*puVar9,*puVar10,uVar2);
            FUN_142b25540(*puVar5,uVar12 & uVar13,*puVar9,*puVar5,uVar2);
            FUN_142b25540(*puVar7,uVar12 & ~uVar13,*puVar9,*puVar7,uVar2);
            FUN_142b26700(*puVar9,*puVar6,*puVar8,uStack_e8);
            FUN_142b26930(*puVar10,*puVar9,*param_3,uStack_e8);
            FUN_142b25540(*puVar9,lVar11 - lVar14,*puVar9,*puVar10,uStack_e8);
            FUN_142b25540(*puVar6,uVar12 & uVar13,*puVar9,*puVar6,uStack_e8);
            FUN_142b25540(*puVar8,uVar12 & ~uVar13,*puVar9,*puVar8,uStack_e8);
            uVar13 = FUN_142b37ed0(*(undefined8 *)*puVar3);
            uVar13 = ~uVar13;
            uVar12 = FUN_142b37ed0(*(undefined8 *)*puVar4);
            uVar12 = ~uVar12;
            if (uVar13 == uVar12) {
              FID_conflict__assert((wchar_t *)s_u_143cbb4e0,(wchar_t *)s_D_143cbb400,0x124);
            }
            FUN_142b37ef0(*puVar3,uVar13,*puVar9,uVar2);
            uVar15 = FUN_142b37ed0(*(undefined8 *)*puVar5);
            uVar16 = FUN_142b37ed0(*(undefined8 *)*puVar6);
            uVar17 = FUN_142b37fe0(*puVar5,(uVar15 | uVar16) & uVar13,*param_4,*puVar9,uVar2);
            uVar18 = FUN_142b37fe0(*puVar6,(uVar15 | uVar16) & uVar13,*param_3,*puVar9,uStack_e8);
            FUN_142b37f50(*puVar5,uVar17,uVar13,*puVar9,uVar2);
            FUN_142b37f50(*puVar6,uVar18,uVar13,*puVar9,uStack_e8);
            FUN_142b37ef0(*puVar4,uVar12,*puVar9,uVar2);
            uVar13 = FUN_142b37ed0(*(undefined8 *)*puVar7);
            uVar15 = FUN_142b37ed0(*(undefined8 *)*puVar8);
            uVar17 = FUN_142b37fe0(*puVar7,(uVar13 | uVar15) & uVar12,*param_4,*puVar9,uVar2);
            uVar18 = FUN_142b37fe0(*puVar8,(uVar13 | uVar15) & uVar12,*param_3,*puVar9,uStack_e8);
            FUN_142b37f50(*puVar7,uVar17,uVar12,*puVar9,uVar2);
            in_stack_fffffffffffffef8 = uStack_e8;
            FUN_142b37f50(*puVar8,uVar18,uVar12,*puVar9,uStack_e8);
          }
          iVar1 = FUN_142b1f5d0(puVar4);
          if (iVar1 == 0) {
            FID_conflict__assert((wchar_t *)s_B_143cbb5f0,(wchar_t *)s_D_143cbb510,0x13c);
          }
          iVar1 = FUN_142b1f5f0(puVar3);
          if (iVar1 == 0) {
            *param_2 = 1;
            FUN_142afa690(3,0,0x70,s_D__a_1_s_target_release_build_bo_143cbb610,
                          CONCAT44(uVar21,0x13f));
          }
          else {
            lVar11 = FUN_142b1d300(param_1,puVar5);
            bVar20 = lVar11 != 0;
          }
        }
      }
      FUN_142b1dd90(param_5);
      return bVar20;
    }
  }
  FUN_142afa690(3,0,0x6b,s_D__a_1_s_target_release_build_bo_143cbb240,CONCAT44(uVar21,0xae));
  return false;
}


/* address=142b34df0 name=FUN_142b34df0 */

undefined4
FUN_142b34df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uStack_18;
  
  FUN_142b1dbe0(param_4);
  lVar2 = FUN_142b1dc40(param_4);
  if (lVar2 != 0) {
    lVar3 = FUN_142b1d300(lVar2,param_3);
    if (lVar3 != 0) {
      iVar1 = FUN_142b1e250(lVar2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_142b23750(param_1,param_2,lVar2,param_3,param_4,param_5);
        if (iVar1 != 0) {
          uStack_18 = 1;
          goto LAB_142b34e93;
        }
      }
    }
  }
  uStack_18 = 0;
LAB_142b34e93:
  FUN_142b1dd90(param_4);
  return uStack_18;
}


/* address=142b34ec0 name=FUN_142b34ec0 */

undefined4
FUN_142b34ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uStack_18;
  
  FUN_142b1dbe0(param_4);
  lVar2 = FUN_142b1dc40(param_4);
  if (lVar2 != 0) {
    lVar3 = FUN_142b1d300(lVar2,param_3);
    if (lVar3 != 0) {
      iVar1 = FUN_142b1e250(lVar2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_142b23d80(param_1,param_2,lVar2,param_3,param_4,param_5);
        if (iVar1 != 0) {
          uStack_18 = 1;
          goto LAB_142b34f63;
        }
      }
    }
  }
  uStack_18 = 0;
LAB_142b34f63:
  FUN_142b1dd90(param_4);
  return uStack_18;
}


/* address=142b34f90 name=FUN_142b34f90 */

bool FUN_142b34f90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  
  FUN_142b81a80(param_2);
  lVar1 = *param_1;
  FUN_142b81ac0(param_2);
  if (lVar1 == 0) {
    FUN_142b81aa0(param_2);
    if (*param_1 == 0) {
      lVar1 = FUN_142b23000(param_3,param_4);
      *param_1 = lVar1;
    }
    bVar2 = *param_1 != 0;
    FUN_142b81ae0(param_2);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


/* address=142b35050 name=FUN_142b35050 */

void FUN_142b35050(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  if (param_2 != param_4 + param_6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((param_4 == 8) && (param_6 == 8)) {
    FUN_142b27e70(param_1,param_3,param_5);
  }
  else {
    FUN_142b38e90(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}


/* address=142b350e0 name=FUN_142b350e0 */

void FUN_142b350e0(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined auStack_c8 [32];
  undefined auStack_a8 [144];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_c8;
  if ((param_2 == param_4 * 2) && (param_4 < 10)) {
    if (param_4 == 4) {
      FUN_142b308b0(param_1,param_3);
    }
    else if (param_4 == 8) {
      FUN_142b2cab0(param_1,param_3);
    }
    else {
      FUN_142b3aa60(param_1,param_3,param_4,auStack_a8);
      FUN_142b0ec40(auStack_a8,param_4 << 4);
    }
    FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=142b351e0 name=FUN_142b351e0 */

void FUN_142b351e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  FUN_142b35350(param_1,param_2,*param_4,param_3,param_4);
  return;
}


/* address=142b35230 name=FUN_142b35230 */

void FUN_142b35230(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined auStack_d8 [32];
  longlong lStack_b8;
  undefined auStack_a8 [144];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_d8;
  if (((param_2 != (longlong)*(int *)(param_5 + 0x20)) || (9 < param_2)) || (param_2 * 2 < param_4))
  {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar3 = auStack_a8;
  for (lVar2 = 0x90; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_142b13440(auStack_a8,param_3,param_4 << 3);
  lStack_b8 = param_5;
  iVar1 = FUN_142b388a0(param_1,param_2,auStack_a8,param_2 << 1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_142b0ec40(auStack_a8,param_2 << 4);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=142b35350 name=FUN_142b35350 */

void FUN_142b35350(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  undefined auStack_d8 [32];
  longlong lStack_b8;
  ulonglong uStack_b0;
  undefined auStack_a8 [144];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_d8;
  if ((param_4 != (longlong)*(int *)(param_5 + 0x20)) || (9 < param_4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_4 < 2) {
    if (param_2 == param_3) {
      FUN_142b350e0(auStack_a8,param_4 << 1,param_2,param_4);
    }
    else {
      lStack_b8 = param_3;
      uStack_b0 = param_4;
      FUN_142b35050(auStack_a8,param_4 << 1,param_2,param_4);
    }
    lStack_b8 = param_5;
    iVar1 = FUN_142b388a0(param_1,param_4,auStack_a8,param_4 << 1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_142b0ec40(auStack_a8,param_4 << 4);
  }
  else {
    lStack_b8 = param_5 + 0x30;
    uStack_b0 = param_4;
    iVar1 = FUN_1426f9e00(param_1,param_2,param_3,*(undefined8 *)(param_5 + 0x18));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=142b35500 name=FUN_142b35500 */

void FUN_142b35500(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5,undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined auStack_558 [32];
  undefined8 *puStack_538;
  uint uStack_528;
  uint uStack_524;
  uint uStack_520;
  uint uStack_51c;
  uint uStack_518;
  int iStack_514;
  ulonglong uStack_510;
  uint uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  longlong lStack_4f8;
  undefined auStack_4e8 [80];
  undefined auStack_498 [1152];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_558;
  if (((param_3 != (longlong)*(int *)(param_6 + 4)) || (9 < param_3)) ||
     (0x3ffffffffffffff < param_5)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = FUN_142b1f6a0(param_6 + 3);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_B_143cb9ce8,(wchar_t *)s_D_143cb9c00,0x2da);
  }
  for (; (param_5 != 0 && (*(longlong *)(param_4 + -8 + param_5 * 8) == 0)); param_5 = param_5 - 1)
  {
  }
  if (param_5 == 0) {
    puStack_538 = param_6;
    FUN_142b35230(param_1,param_3,*param_6,param_3);
  }
  else {
    uVar2 = FUN_142b24f70(*(undefined8 *)(param_4 + -8 + param_5 * 8));
    lStack_4f8 = (ulonglong)uVar2 + (param_5 - 1) * 0x40;
    if (lStack_4f8 == 0) {
      FID_conflict__assert((wchar_t *)s_b_143cb9df8,(wchar_t *)s_D_143cb9d10,0x2e6);
    }
    uStack_520 = FUN_142b377b0(lStack_4f8);
    if (5 < uStack_520) {
      uStack_520 = 5;
    }
    FUN_142b13440(auStack_498,param_2,param_3 << 3);
    if (1 < uStack_520) {
      puStack_538 = param_6;
      FUN_142b35350(auStack_4e8,auStack_498,auStack_498,param_3);
      for (uStack_51c = 1; uStack_504 = 1, uStack_51c < (uint)(1 << ((char)uStack_520 - 1U & 0x1f));
          uStack_51c = uStack_51c + 1) {
        puStack_538 = param_6;
        FUN_142b35350(auStack_498 + (ulonglong)uStack_51c * 0x48,
                      auStack_498 + (ulonglong)(uStack_51c - 1) * 0x48,auStack_4e8,param_3);
      }
    }
    iStack_514 = 1;
    uStack_510 = lStack_4f8 - 1;
    while( true ) {
      while (iVar1 = FUN_142b32280(param_4,param_5,uStack_510), iVar1 != 0) {
        uStack_528 = 1;
        uStack_518 = 0;
        for (uStack_524 = 1; (uStack_524 < uStack_520 && (uStack_524 <= uStack_510));
            uStack_524 = uStack_524 + 1) {
          iVar1 = FUN_142b32280(param_4,param_5,uStack_510 - uStack_524);
          if (iVar1 != 0) {
            uStack_528 = uStack_528 << ((char)uStack_524 - (char)uStack_518 & 0x1fU) | 1;
            uStack_518 = uStack_524;
          }
        }
        if (iStack_514 == 0) {
          for (uStack_508 = 0; uStack_508 < uStack_518 + 1; uStack_508 = uStack_508 + 1) {
            puStack_538 = param_6;
            FUN_142b35350(param_1,param_1,param_1,param_3);
          }
        }
        if ((uStack_528 & 1) == 0) {
          FID_conflict__assert((wchar_t *)s_w_143cb9ef8,(wchar_t *)s_D_143cb9e10,0x31c);
        }
        uStack_500 = 1;
        if ((uint)(1 << ((byte)uStack_520 & 0x1f)) <= uStack_528) {
          FID_conflict__assert((wchar_t *)s_w_143cb9ff8,(wchar_t *)s_D_143cb9f10,0x31d);
        }
        if (iStack_514 == 0) {
          puStack_538 = param_6;
          FUN_142b35350(param_1,param_1,auStack_498 + (ulonglong)(uStack_528 >> 1) * 0x48,param_3);
        }
        else {
          FUN_142b13440(param_1,auStack_498 + (ulonglong)(uStack_528 >> 1) * 0x48,param_3 << 3);
        }
        iStack_514 = 0;
        if (uStack_510 == uStack_518) goto LAB_142b35a0c;
        uStack_510 = uStack_510 - (uStack_518 + 1);
      }
      if (iStack_514 == 0) {
        puStack_538 = param_6;
        FUN_142b35350(param_1,param_1,param_1,param_3);
      }
      if (uStack_510 == 0) break;
      uStack_510 = uStack_510 - 1;
    }
LAB_142b35a0c:
    if (iStack_514 != 0) {
      FID_conflict__assert((wchar_t *)s___143cba118,(wchar_t *)s_D_143cba030,0x32b);
    }
    FUN_142b0ec40(auStack_498,0x480);
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_558);
  return;
}


/* address=142b35a60 name=FUN_142b35a60 */

void FUN_142b35a60(undefined8 param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  undefined auStack_b8 [32];
  ulonglong uStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong auStack_68 [10];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_b8;
  if ((param_3 != (longlong)*(int *)(param_4 + 0x20)) || (9 < param_3)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uStack_80 = *(undefined8 *)(param_4 + 0x18);
  FUN_142b13440(auStack_68,uStack_80,param_3 << 3);
  if (auStack_68[0] < 2) {
    for (uStack_88 = 1; uStack_88 < param_3; uStack_88 = uStack_88 + 1) {
      uStack_78 = auStack_68[uStack_88];
      auStack_68[uStack_88] = auStack_68[uStack_88] - 1;
      if (uStack_78 != 0) break;
    }
  }
  auStack_68[0] = auStack_68[0] - 2;
  uStack_98 = param_3;
  lStack_90 = param_4;
  FUN_142b35500(param_1,param_2,param_3,auStack_68);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=142b35bf0 name=FUN_142b35bf0 */

ulonglong FUN_142b35bf0(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong uStackX_20;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uStack_28 = 0;
  uStackX_20 = param_4;
  while( true ) {
    if (param_2 <= uStack_28) goto LAB_142b35d18;
    if (uStackX_20 < 8) break;
    uStackX_20 = uStackX_20 - 8;
    uVar1 = FUN_142b13740(param_3 + uStackX_20);
    *(undefined8 *)(param_1 + uStack_28 * 8) = uVar1;
    uStack_28 = uStack_28 + 1;
  }
  uStack_18 = 0;
  for (uStack_20 = 0; uStack_20 < uStackX_20; uStack_20 = uStack_20 + 1) {
    uStack_18 = uStack_18 << 8 | (ulonglong)*(byte *)(param_3 + uStack_20);
  }
  uStackX_20 = 0;
  *(ulonglong *)(param_1 + uStack_28 * 8) = uStack_18;
  param_2 = FUN_142b134e0(param_1 + 8 + uStack_28 * 8,0,(param_2 - uStack_28) * 8 + -8);
LAB_142b35d18:
  if (uStackX_20 != 0) {
    FID_conflict__assert((wchar_t *)s_i_143cb84e8,(wchar_t *)s_D_143cb8410,0x55);
    param_2 = 0;
  }
  return param_2;
}


/* address=142b35d50 name=FUN_142b35d50 */

void FUN_142b35d50(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  iVar1 = FUN_142b35ee0(param_3,param_4,param_2);
  if (iVar1 == 0) {
    FID_conflict__assert((wchar_t *)s_f_143cb87f0,(wchar_t *)s_D_143cb8710,0xb4);
  }
  uStack_20 = param_4 << 3;
  if (param_2 < uStack_20) {
    uStack_20 = param_2;
  }
  for (uStack_28 = 0; uStack_28 < uStack_20; uStack_28 = uStack_28 + 1) {
    *(undefined *)(param_1 + -1 + (param_2 - uStack_28)) = *(undefined *)(param_3 + uStack_28);
  }
  FUN_142b134e0(param_1,0,param_2 - uStack_20);
  return;
}


/* address=142b35e50 name=FUN_142b35e50 */

undefined * FUN_142b35e50(void)

{
  return &DAT_143d02b60;
}


/* address=142b35e60 name=FUN_142b35e60 */

undefined * FUN_142b35e60(void)

{
  return &DAT_143d02b78;
}


/* address=142b35e70 name=FUN_142b35e70 */

void FUN_142b35e70(undefined8 *param_1)

{
  *param_1 = &DAT_1431cd028;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 2;
  return;
}


/* address=142b35ee0 name=FUN_142b35ee0 */

bool FUN_142b35ee0(longlong param_1,longlong param_2,ulonglong param_3)

{
  byte bStack_28;
  ulonglong uStack_20;
  
  bStack_28 = 0;
  for (uStack_20 = param_3; uStack_20 < (ulonglong)(param_2 << 3); uStack_20 = uStack_20 + 1) {
    bStack_28 = bStack_28 | *(byte *)(param_1 + uStack_20);
  }
  return bStack_28 == 0;
}


/* address=142b35f80 name=FUN_142b35f80 */

undefined4 FUN_142b35f80(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  
  uStack_58 = 0;
  uStack_28 = param_4;
  if (param_2 < param_4) {
    uStack_28 = param_2;
  }
  for (uStack_50 = 0; uStack_50 < uStack_28; uStack_50 = uStack_50 + 1) {
    uVar2 = FUN_142b13260(*(undefined8 *)(param_1 + uStack_50 * 8),
                          *(undefined8 *)(param_3 + uStack_50 * 8));
    uVar3 = FUN_142b13170(*(undefined8 *)(param_1 + uStack_50 * 8),
                          *(undefined8 *)(param_3 + uStack_50 * 8));
    uVar1 = FUN_142b13320(uVar3,0xffffffff,1);
    uStack_58 = FUN_142b13320(uVar2,uStack_58,uVar1);
  }
  if (param_2 < param_4) {
    uStack_38 = 0;
    for (uStack_48 = param_2; uStack_48 < param_4; uStack_48 = uStack_48 + 1) {
      uStack_38 = uStack_38 | *(ulonglong *)(param_3 + uStack_48 * 8);
    }
    uVar2 = FUN_142b13230(uStack_38);
    uStack_58 = FUN_142b13320(uVar2,uStack_58,0xffffffff);
  }
  else if (param_4 < param_2) {
    uStack_30 = 0;
    for (uStack_40 = param_4; uStack_40 < param_2; uStack_40 = uStack_40 + 1) {
      uStack_30 = uStack_30 | *(ulonglong *)(param_1 + uStack_40 * 8);
    }
    uVar2 = FUN_142b13230(uStack_30);
    uStack_58 = FUN_142b13320(uVar2,uStack_58,1);
  }
  return uStack_58;
}


/* address=142b361b0 name=FUN_142b361b0 */

void FUN_142b361b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}


/* address=142b361f0 name=FUN_142b361f0 */

void FUN_142b361f0(undefined8 *param_1)

{
  FUN_142b0eaa0(*param_1);
  return;
}


/* address=142b36220 name=FUN_142b36220 */

undefined8 FUN_142b36220(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uStack_20;
  
  if (param_1[1] == param_1[2]) {
    if (param_1[2] == 0) {
      uStack_20 = 0x20;
    }
    else {
      uStack_20 = (ulonglong)(param_1[2] * 3) / 2;
    }
    if ((uStack_20 <= (ulonglong)param_1[2]) || (0x1fffffffffffffff < uStack_20)) {
      return 0;
    }
    lVar1 = FUN_142b0eb50(*param_1,uStack_20 << 3);
    if (lVar1 == 0) {
      return 0;
    }
    *param_1 = lVar1;
    param_1[2] = uStack_20;
  }
  *(undefined8 *)(*param_1 + param_1[1] * 8) = param_2;
  param_1[1] = param_1[1] + 1;
  return 1;
}


/* address=142b36330 name=FUN_142b36330 */

undefined8 FUN_142b36330(longlong *param_1)

{
  if (param_1[1] == 0) {
    FID_conflict__assert((wchar_t *)s_s_143cb8b00,(wchar_t *)s_D_143cb8a30,0xe7);
  }
  param_1[1] = param_1[1] + -1;
  return *(undefined8 *)(*param_1 + param_1[1] * 8);
}


/* address=142b363d0 name=FUN_142b363d0 */

void FUN_142b363d0(void)

{
  FUN_142b05960();
  return;
}


/* address=142b363f0 name=FUN_142b363f0 */

void FUN_142b363f0(undefined8 param_1)

{
  FUN_142b05980(param_1);
  return;
}


/* address=142b36410 name=FUN_142b36410 */

void FUN_142b36410(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05a00(param_1,param_2);
  return;
}


/* address=142b36440 name=FUN_142b36440 */

void FUN_142b36440(undefined8 param_1,undefined8 param_2)

{
  FUN_142b05ad0(param_1,&LAB_142b363a0,param_2);
  return;
}


/* address=142b36470 name=FUN_142b36470 */

void FUN_142b36470(undefined8 param_1,undefined8 param_2)

{
  FUN_142b06280(param_1,param_2);
  return;
}


/* address=142b364a0 name=FUN_142b364a0 */

ulonglong FUN_142b364a0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uStackX_8;
  ulonglong uStackX_10;
  ulonglong uStackX_18;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_20;
  
  uStack_20 = 0;
  iStack_38 = 2;
  if (param_3 == 0) {
    uStack_20 = 0xffffffffffffffff;
  }
  else {
    iVar1 = FUN_142b24f70(param_3);
    if ((iVar1 != 0x40) && ((ulonglong)(1L << ((byte)iVar1 & 0x3f)) < param_1)) {
      FID_conflict__assert((wchar_t *)s___143cb8bf0,(wchar_t *)s_D_143cb8b20,0x4f);
    }
    uStackX_8 = param_1;
    if (param_3 <= param_1) {
      uStackX_8 = param_1 - param_3;
    }
    uStackX_10 = param_2;
    uStackX_18 = param_3;
    if (0x40 - iVar1 != 0) {
      bVar3 = (byte)(0x40 - iVar1);
      uStackX_18 = param_3 << (bVar3 & 0x3f);
      uStackX_8 = uStackX_8 << (bVar3 & 0x3f) | param_2 >> (0x40 - bVar3 & 0x3f);
      uStackX_10 = param_2 << (bVar3 & 0x3f);
    }
    uVar2 = uStackX_18 >> 0x20;
    while( true ) {
      if (uStackX_8 >> 0x20 == uVar2) {
        uStack_48 = 0xffffffff;
      }
      else {
        uStack_48 = uStackX_8 / uVar2;
      }
      uStack_40 = (uStackX_18 & 0xffffffff) * uStack_48;
      for (uStack_50 = uStack_48 * uVar2;
          ((uStackX_8 - uStack_50 & 0xffffffff00000000) == 0 &&
          ((uStackX_8 - uStack_50 << 0x20 | uStackX_10 >> 0x20) < uStack_40));
          uStack_50 = uStack_50 - uVar2) {
        uStack_48 = uStack_48 - 1;
        uStack_40 = uStack_40 - (uStackX_18 & 0xffffffff);
      }
      uStack_50 = uStack_50 + (uStack_40 >> 0x20);
      if (uStackX_10 < uStack_40 << 0x20) {
        uStack_50 = uStack_50 + 1;
      }
      if (uStackX_8 < uStack_50) {
        uStackX_8 = uStackX_8 + uStackX_18;
        uStack_48 = uStack_48 - 1;
      }
      iStack_38 = iStack_38 + -1;
      if (iStack_38 == 0) break;
      uStack_20 = uStack_48 << 0x20;
      uStackX_8 = uStackX_8 - uStack_50 << 0x20 | uStackX_10 - (uStack_40 << 0x20) >> 0x20;
      uStackX_10 = uStackX_10 << 0x20;
    }
    uStack_20 = uStack_20 | uStack_48;
  }
  return uStack_20;
}


/* address=142b36870 name=FUN_142b36870 */

void FUN_142b36870(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_142b364a0(param_3,param_4,param_5);
  *param_1 = lVar1;
  *param_2 = param_4 - *param_1 * param_5;
  return;
}


/* address=142b368d0 name=FUN_142b368d0 */

longlong FUN_142b368d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStackX_8;
  
  lVar2 = FUN_142b1dc40(param_2);
  if ((lVar2 != 0) && (iVar1 = FUN_142b252e0(lVar2,param_1), iVar1 != 0)) {
    *(undefined4 *)(lVar2 + 0x10) = 0;
    uStackX_8 = (undefined4)param_1;
    *(undefined4 *)(lVar2 + 8) = uStackX_8;
    return lVar2;
  }
  return 0;
}


/* address=142b36940 name=FUN_142b36940 */

longlong FUN_142b36940(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((ulonglong)(longlong)*(int *)(param_1 + 8) < param_2) {
    lVar2 = FUN_142b368d0(param_2,param_3);
    if (((lVar2 == 0) || (lVar3 = FUN_142b1d300(lVar2,param_1), lVar3 == 0)) ||
       (iVar1 = FUN_142b25460(lVar2,param_2), param_1 = lVar2, iVar1 == 0)) {
      param_1 = 0;
    }
  }
  else {
    iVar1 = FUN_142b256e0(param_1,param_2);
    if (iVar1 == 0) {
      FID_conflict__assert((wchar_t *)s_b_143cb9330,(wchar_t *)s_D_143cb9260,0x238);
    }
  }
  return param_1;
}


/* address=142b369f0 name=FUN_142b369f0 */

undefined2 FUN_142b369f0(uint param_1,ushort param_2,char param_3,uint param_4)

{
  int iVar1;
  undefined2 uStackX_8;
  
  iVar1 = (int)((ulonglong)param_4 * (ulonglong)param_1 >> 0x20);
  param_1 = param_1 - (uint)param_2 * ((param_1 - iVar1 >> 1) + iVar1 >> (param_3 - 1U & 0x1f));
  if (param_2 <= param_1) {
    FID_conflict__assert((wchar_t *)s_n_143cb9450,(wchar_t *)s_D_143cb9370,0x2a);
  }
  uStackX_8 = (undefined2)param_1;
  return uStackX_8;
}


/* address=142b36a90 name=FUN_142b36a90 */

undefined2
FUN_142b36a90(ushort param_1,uint param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_142b369f0((uint)param_1 << 0x10 | param_2 >> 0x10,param_3,param_4,param_5);
  uVar2 = FUN_142b369f0((uint)uVar1 << 0x10 | param_2 & 0xffff,param_3,param_4,param_5);
  return uVar2;
}


/* address=142b36b40 name=FUN_142b36b40 */

void FUN_142b36b40(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  byte bVar1;
  undefined auStack_118 [32];
  undefined8 uStack_f8;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  uint uStack_d8;
  int iStack_d4;
  longlong lStack_d0;
  int iStack_c8;
  longlong lStack_c0;
  int iStack_b8;
  longlong lStack_b0;
  ushort auStack_a8 [4];
  byte *pbStack_a0;
  undefined auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_118;
  if (param_7 % 0x40 != 0) {
    FID_conflict__assert((wchar_t *)s___143cbe0e8,(wchar_t *)s_D_143cbe010,0x2d);
  }
  lStack_d0 = param_7 + 0x3c0;
  if ((param_7 & 0xfff) + 0x140 >> 0xc == 0) {
    uStack_e0 = param_7;
    uStack_e8 = param_7 + 0x140;
    lStack_c0 = param_7 + 0x280;
  }
  else {
    uStack_e8 = param_7;
    lStack_c0 = param_7 + 0x140;
    uStack_e0 = param_7 + 0x280;
  }
  lStack_b0 = lStack_d0;
  FUN_1426ffde0(uStack_e0,param_4);
  FUN_1426ffde0(lStack_c0,param_2);
  FUN_1426ffde0(lStack_b0,param_5);
  uStack_f8 = param_6;
  FUN_1426ff140(lStack_b0,lStack_b0,lStack_b0,uStack_e0);
  uStack_f8 = param_6;
  FUN_1426ff140(lStack_b0,lStack_b0,&DAT_1431a70c0,uStack_e0);
  uStack_f8 = param_6;
  FUN_1426ff140(uStack_e8,lStack_b0,&DAT_1431a6f80,uStack_e0);
  uStack_f8 = param_6;
  FUN_1426ff140(lStack_c0,lStack_c0,lStack_b0,uStack_e0);
  FUN_142700040(lStack_d0,uStack_e8,0);
  FUN_142700040(lStack_d0,lStack_c0,1);
  uStack_f8._0_4_ = 1;
  FUN_1426fe4c0(uStack_e8,lStack_c0,uStack_e0,param_6);
  FUN_142700040(lStack_d0,uStack_e8,2);
  uStack_f8._0_4_ = 1;
  FUN_1426fe4c0(uStack_e8,uStack_e8,uStack_e0,param_6);
  FUN_142700040(lStack_d0,uStack_e8,4);
  uStack_f8._0_4_ = 1;
  FUN_1426fe4c0(uStack_e8,uStack_e8,uStack_e0,param_6);
  FUN_142700040(lStack_d0,uStack_e8,8);
  uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
  FUN_1426fe4c0(uStack_e8,uStack_e8,uStack_e0,param_6);
  FUN_142700040(lStack_d0,uStack_e8,0x10);
  for (iStack_d4 = 3; iStack_d4 < 0x20; iStack_d4 = iStack_d4 + 2) {
    FUN_1427000a0(uStack_e8,lStack_d0,iStack_d4 + -1);
    uStack_f8 = param_6;
    FUN_1426ff140(uStack_e8,uStack_e8,lStack_c0,uStack_e0);
    FUN_142700040(lStack_d0,uStack_e8,iStack_d4);
    iStack_b8 = iStack_d4;
    while (iStack_b8 = iStack_b8 << 1, iStack_b8 < 0x20) {
      uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
      FUN_1426fe4c0(uStack_e8,uStack_e8,uStack_e0,param_6);
      FUN_142700040(lStack_d0,uStack_e8,iStack_b8);
    }
  }
  uStack_d8 = (int)(uint)param_3[0x7f] >> 3;
  pbStack_a0 = param_3;
  FUN_1427000a0(uStack_e8,lStack_d0,uStack_d8);
  iStack_c8 = 0x3f6;
  while (-1 < iStack_c8) {
    uStack_f8 = CONCAT44(uStack_f8._4_4_,5);
    FUN_1426fe4c0(uStack_e8,uStack_e8,uStack_e0,param_6);
    FUN_142cbd3c0(auStack_a8,pbStack_a0 + ((int)(iStack_c8 + (iStack_c8 >> 0x1f & 7U)) >> 3),2);
    bVar1 = (byte)(iStack_c8 >> 0x1f) & 7;
    uStack_d8 = (int)(uint)auStack_a8[0] >> (((char)iStack_c8 + bVar1 & 7) - bVar1 & 0x1f) & 0x1f;
    iStack_c8 = iStack_c8 + -5;
    FUN_1427000a0(lStack_c0,lStack_d0,uStack_d8);
    uStack_f8 = param_6;
    FUN_1426ff140(uStack_e8,uStack_e8,lStack_c0,uStack_e0);
  }
  uStack_f8 = CONCAT44(uStack_f8._4_4_,4);
  FUN_1426fe4c0(uStack_e8,uStack_e8,uStack_e0,param_6);
  uStack_d8 = *pbStack_a0 & 0xf;
  FUN_1427000a0(lStack_c0,lStack_d0,uStack_d8);
  uStack_f8 = param_6;
  FUN_1426ff140(uStack_e8,uStack_e8,lStack_c0,uStack_e0);
  uStack_f8 = param_6;
  FUN_1426ff140(uStack_e8,uStack_e8,&DAT_1431a6f80,uStack_e0);
  FUN_1426ffb20(param_1,uStack_e8);
  uStack_f8 = 0x10;
  FUN_142b32e50(param_1,0,param_4,auStack_98);
  FUN_142b0ec40(param_7,0x15c0);
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=142b37110 name=FUN_142b37110 */

undefined8 FUN_142b37110(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_142b13a00();
  if (((iVar1 != 0) && (iVar1 = FUN_142b13a80(), iVar1 != 0)) &&
     (iVar1 = FUN_142b13ac0(), iVar1 != 0)) {
    return 0;
  }
  uVar2 = FUN_142b13a40();
  return uVar2;
}


/* address=142b37150 name=FUN_142b37150 */

void FUN_142b37150(longlong param_1)

{
  FUN_142b1d1e0(param_1);
  FUN_142b1d1e0(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


/* address=142b371b0 name=FUN_142b371b0 */

void FUN_142b371b0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_142b1d210(param_1);
    FUN_142b1d210(param_1 + 0x18);
  }
  return;
}


/* address=142b371f0 name=FUN_142b371f0 */

bool FUN_142b371f0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142b1d300(param_1,param_2);
  if (lVar2 != 0) {
    FUN_142b1d4c0(param_1 + 0x18);
    uVar1 = FUN_142b1d430(param_2);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return lVar2 != 0;
}


/* address=142b37260 name=FUN_142b37260 */

undefined4
FUN_142b37260(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uStack_18;
  
  uStack_18 = 0xffffffff;
  FUN_142b1dbe0(param_4);
  lVar3 = FUN_142b1dc40(param_4);
  uVar1 = uStack_18;
  if (((lVar3 != 0) && (iVar2 = FUN_142b1fc90(lVar3,param_3), iVar2 != 0)) &&
     (iVar2 = FUN_142b1e5c0(param_1,0,lVar3,param_2,param_4), uVar1 = param_3, iVar2 == 0)) {
    uVar1 = uStack_18;
  }
  uStack_18 = uVar1;
  FUN_142b1dd90(param_4);
  return uStack_18;
}


/* address=142b37300 name=FUN_142b37300 */

undefined4
FUN_142b37300(longlong param_1,longlong param_2,longlong param_3,longlong param_4,undefined8 param_5
             )

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iStack_48;
  int iStack_44;
  longlong lStack_40;
  longlong lStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_2c = 0;
  FUN_142b1dbe0(param_5);
  lVar3 = FUN_142b1dc40(param_5);
  lVar4 = FUN_142b1dc40(param_5);
  lStack_38 = param_1;
  if (param_1 == 0) {
    lStack_38 = FUN_142b1dc40(param_5);
  }
  lStack_40 = param_2;
  if (param_2 == 0) {
    lStack_40 = FUN_142b1dc40(param_5);
  }
  if ((((lVar3 != 0) && (lVar4 != 0)) && (lStack_38 != 0)) && (lStack_40 != 0)) {
    iVar1 = FUN_142b1f330(param_3,param_4);
    if (iVar1 < 0) {
      FUN_142b1d4c0(lStack_38);
      lVar3 = FUN_142b1d300(lStack_40,param_3);
      if (lVar3 != 0) {
        FUN_142b1dd90(param_5);
        return 1;
      }
    }
    else {
      iStack_44 = FUN_142b1d430(param_3);
      iVar1 = *(int *)(param_4 + 0x30) << 1;
      if (iStack_44 < iVar1) {
        iStack_44 = iVar1;
      }
      if (iStack_44 != *(int *)(param_4 + 0x34)) {
        uVar2 = FUN_142b37260(param_4 + 0x18,param_4,iStack_44,param_5);
        *(undefined4 *)(param_4 + 0x34) = uVar2;
      }
      if (((*(int *)(param_4 + 0x34) != -1) &&
          (iVar1 = FUN_142b1fb40(lVar3,param_3,*(undefined4 *)(param_4 + 0x30)), iVar1 != 0)) &&
         ((iVar1 = FUN_142b1e440(lVar4,lVar3,param_4 + 0x18,param_5), iVar1 != 0 &&
          (iVar1 = FUN_142b1fb40(lStack_38,lVar4,iStack_44 - *(int *)(param_4 + 0x30)), iVar1 != 0))
         )) {
        *(undefined4 *)(lStack_38 + 0x10) = 0;
        iVar1 = FUN_142b1e440(lVar4,param_4,lStack_38,param_5);
        if ((iVar1 != 0) && (iVar1 = FUN_142b1e200(lStack_40,param_3,lVar4), iVar1 != 0)) {
          *(undefined4 *)(lStack_40 + 0x10) = 0;
          iStack_48 = 0;
          while (iVar1 = FUN_142b1f330(lStack_40,param_4), -1 < iVar1) {
            if (2 < iStack_48) {
              FUN_142afa690(3,0,0x65,s_D__a_1_s_target_release_build_bo_143cb9550,0x143);
              goto LAB_142b37690;
            }
            iVar1 = FUN_142b1e200(lStack_40,lStack_40,param_4);
            if ((iVar1 == 0) ||
               (iVar1 = FUN_142b1df20(lStack_38,1), iStack_48 = iStack_48 + 1, iVar1 == 0))
            goto LAB_142b37690;
          }
          iVar1 = FUN_142b1f5d0(lStack_40);
          if (iVar1 == 0) {
            uStack_30 = *(undefined4 *)(param_3 + 0x10);
          }
          else {
            uStack_30 = 0;
          }
          *(undefined4 *)(lStack_40 + 0x10) = uStack_30;
          *(uint *)(lStack_38 + 0x10) = *(uint *)(param_3 + 0x10) ^ *(uint *)(param_4 + 0x10);
          uStack_2c = 1;
        }
      }
    }
  }
LAB_142b37690:
  FUN_142b1dd90(param_5);
  return uStack_2c;
}


/* address=142b376b0 name=FUN_142b376b0 */

undefined4
FUN_142b376b0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_28;
  longlong lStack_18;
  
  uStack_28 = 0;
  FUN_142b1dbe0(param_5);
  lVar2 = FUN_142b1dc40(param_5);
  if (lVar2 != 0) {
    lStack_18 = param_2;
    if (param_3 != 0) {
      if (param_2 == param_3) {
        iVar1 = FUN_142b1e570(lVar2,param_2,param_5);
      }
      else {
        iVar1 = FUN_142b1e440(lVar2,param_2,param_3,param_5);
      }
      lStack_18 = lVar2;
      if (iVar1 == 0) goto LAB_142b3778e;
    }
    uStack_28 = FUN_142b37300(0,param_1,lStack_18,param_4,param_5);
  }
LAB_142b3778e:
  FUN_142b1dd90(param_5);
  return uStack_28;
}


/* address=142b377b0 name=FUN_142b377b0 */

undefined8 FUN_142b377b0(ulonglong param_1)

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


/* address=142b37810 name=FUN_142b37810 */

void FUN_142b37810(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined auStack_1c8 [32];
  undefined8 uStack_1a8;
  int iStack_198;
  int iStack_194;
  uint uStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined4 uStack_178;
  longlong lStack_170;
  undefined4 uStack_168;
  longlong lStack_160;
  undefined auStack_158 [64];
  longlong alStack_118 [32];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_1c8;
  uStack_178 = 0;
  iStack_188 = 1;
  iVar1 = FUN_142b1f6a0(param_4);
  if (iVar1 != 0) {
    FID_conflict__assert((wchar_t *)s___143cb96b8,(wchar_t *)s_D_143cb95d0,0x1b8);
  }
  iStack_184 = FUN_142b1d430(param_3);
  if (iStack_184 == 0) {
    FUN_142b1d4f0(param_1);
    goto LAB_142b37d10;
  }
  FUN_142b37150(auStack_158);
  FUN_142b1dbe0(param_5);
  lStack_170 = FUN_142b1dc40(param_5);
  alStack_118[0] = FUN_142b1dc40(param_5);
  if ((lStack_170 != 0) && (alStack_118[0] != 0)) {
    if (*(int *)(param_4 + 0x10) == 0) {
      iVar1 = FUN_142b371f0(auStack_158,param_4,param_5);
    }
    else {
      lVar2 = FUN_142b1d300(lStack_170,param_4);
      if (lVar2 == 0) goto LAB_142b37cf5;
      *(undefined4 *)(lStack_170 + 0x10) = 0;
      iVar1 = FUN_142b371f0(auStack_158,lStack_170,param_5);
    }
    if ((0 < iVar1) && (iVar1 = FUN_142b204d0(alStack_118[0],param_2,param_4,param_5), iVar1 != 0))
    {
      iVar1 = FUN_142b1f5d0(alStack_118[0]);
      if (iVar1 == 0) {
        iStack_180 = FUN_142b377b0((longlong)iStack_184);
        if (1 < iStack_180) {
          uStack_1a8 = param_5;
          iVar1 = FUN_142b376b0(lStack_170,alStack_118[0],alStack_118[0],auStack_158);
          if (iVar1 == 0) goto LAB_142b37cf5;
          uStack_168 = 1;
          iStack_17c = 1 << ((char)iStack_180 - 1U & 0x1f);
          for (iStack_198 = 1; iStack_198 < iStack_17c; iStack_198 = iStack_198 + 1) {
            lStack_160 = FUN_142b1dc40(param_5);
            alStack_118[iStack_198] = lStack_160;
            if (lStack_160 == 0) goto LAB_142b37cf5;
            uStack_1a8 = param_5;
            iVar1 = FUN_142b376b0(alStack_118[iStack_198],alStack_118[iStack_198 + -1],lStack_170,
                                  auStack_158);
            if (iVar1 == 0) goto LAB_142b37cf5;
          }
        }
        iStack_188 = 1;
        iStack_194 = iStack_184 + -1;
        iVar1 = FUN_142b1d4f0(param_1);
        if (iVar1 != 0) {
          do {
            while (iVar1 = FUN_142b1fe60(param_3,iStack_194), iVar1 == 0) {
              if (iStack_188 == 0) {
                uStack_1a8 = param_5;
                iVar1 = FUN_142b376b0(param_1,param_1,param_1,auStack_158);
                if (iVar1 == 0) goto LAB_142b37cf5;
              }
              if (iStack_194 == 0) goto LAB_142b37ced;
              iStack_194 = iStack_194 + -1;
            }
            uStack_190 = 1;
            iStack_18c = 0;
            for (iStack_198 = 1; (iStack_198 < iStack_180 && (-1 < iStack_194 - iStack_198));
                iStack_198 = iStack_198 + 1) {
              iVar1 = FUN_142b1fe60(param_3,iStack_194 - iStack_198);
              if (iVar1 != 0) {
                uStack_190 = uStack_190 << ((char)iStack_198 - (char)iStack_18c & 0x1fU) | 1;
                iStack_18c = iStack_198;
              }
            }
            iStack_17c = iStack_18c + 1;
            if (iStack_188 == 0) {
              for (iStack_198 = 0; iStack_198 < iStack_17c; iStack_198 = iStack_198 + 1) {
                uStack_1a8 = param_5;
                iVar1 = FUN_142b376b0(param_1,param_1,param_1,auStack_158);
                if (iVar1 == 0) goto LAB_142b37cf5;
              }
            }
            uStack_1a8 = param_5;
            iVar1 = FUN_142b376b0(param_1,param_1,alStack_118[(int)uStack_190 >> 1],auStack_158);
            if (iVar1 == 0) goto LAB_142b37cf5;
            iStack_194 = iStack_194 - (iStack_18c + 1);
            iStack_188 = 0;
          } while (-1 < iStack_194);
LAB_142b37ced:
          uStack_178 = 1;
        }
      }
      else {
        FUN_142b1d4c0(param_1);
        uStack_178 = 1;
      }
    }
  }
LAB_142b37cf5:
  FUN_142b1dd90(param_5);
  FUN_142b371b0(auStack_158);
LAB_142b37d10:
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=142b37d30 name=FUN_142b37d30 */

undefined8 FUN_142b37d30(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b25770(param_3 + (longlong)(param_4 * param_2) * 8,(longlong)param_2,param_1);
  if ((int)uVar1 == 0) {
    FID_conflict__assert((wchar_t *)&DAT_143cba218,(wchar_t *)s_D_143cba130,0x34a);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=142b37da0 name=FUN_142b37da0 */

undefined8
FUN_142b37da0(longlong *param_1,int param_2,longlong param_3,undefined4 param_4,byte param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lStackX_18;
  int iStack_28;
  int iStack_24;
  
  iVar1 = FUN_142b252e0(param_1,(longlong)param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_142b134e0(*param_1,0,(longlong)param_2 << 3);
    lStackX_18 = param_3;
    for (iStack_24 = 0; iStack_24 < 1 << (param_5 & 0x1f); iStack_24 = iStack_24 + 1) {
      uVar2 = FUN_142b132a0(iStack_24,param_4);
      uVar3 = FUN_142b13120(uVar2);
      for (iStack_28 = 0; iStack_28 < param_2; iStack_28 = iStack_28 + 1) {
        *(ulonglong *)(*param_1 + (longlong)iStack_28 * 8) =
             *(ulonglong *)(*param_1 + (longlong)iStack_28 * 8) |
             *(ulonglong *)(lStackX_18 + (longlong)iStack_28 * 8) & uVar3;
      }
      lStackX_18 = lStackX_18 + (longlong)param_2 * 8;
    }
    *(int *)(param_1 + 1) = param_2;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=142b37ed0 name=FUN_142b37ed0 */

longlong FUN_142b37ed0(ulonglong param_1)

{
  return -(param_1 & 1);
}


/* address=142b37ef0 name=FUN_142b37ef0 */

void FUN_142b37ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142b329e0(param_3,param_1,param_4);
  FUN_142b25540(param_1,param_2,param_3,param_1,param_4);
  return;
}


/* address=142b37f50 name=FUN_142b37f50 */

void FUN_142b37f50(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  FUN_142b37ef0(param_1,param_3,param_4,param_5);
  if (param_5 != 0) {
    *(ulonglong *)(param_1 + -8 + param_5 * 8) =
         *(ulonglong *)(param_1 + -8 + param_5 * 8) | (param_2 & param_3) << 0x3f;
  }
  return;
}


/* address=142b37fe0 name=FUN_142b37fe0 */

ulonglong FUN_142b37fe0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142b26700(param_4,param_1,param_3,param_5);
  FUN_142b25540(param_1,param_2,param_4,param_1,param_5);
  return uVar1 & param_2;
}


/* address=142b38060 name=FUN_142b38060 */

undefined4
FUN_142b38060(undefined8 param_1,int *param_2,longlong param_3,longlong param_4,undefined8 param_5)

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
  uint uStack_58;
  int iStack_54;
  ulonglong uStack_50;
  int iStack_48;
  undefined4 uStack_3c;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  if (*(int *)(param_4 + 8) < *(int *)(param_3 + 8)) {
    iStack_48 = *(int *)(param_3 + 8);
  }
  else {
    iStack_48 = *(int *)(param_4 + 8);
  }
  uVar3 = (ulonglong)iStack_48;
  if (uVar3 == 0) {
    *param_2 = 0;
    FUN_142b1d4c0(param_1);
    uStack_3c = 1;
  }
  else {
    uStack_3c = 0;
    FUN_142b1dbe0(param_5);
    plVar4 = (longlong *)FUN_142b1dc40(param_5);
    plVar5 = (longlong *)FUN_142b1dc40(param_5);
    puVar6 = (undefined8 *)FUN_142b1dc40(param_5);
    if (((((plVar4 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) &&
         (puVar6 != (undefined8 *)0x0)) &&
        ((lVar7 = FUN_142b1d300(plVar4,param_3), lVar7 != 0 &&
         (lVar7 = FUN_142b1d300(plVar5,param_4), lVar7 != 0)))) &&
       ((iVar1 = FUN_142b25460(plVar4,uVar3), iVar1 != 0 &&
        ((iVar1 = FUN_142b25460(plVar5,uVar3), iVar1 != 0 &&
         (iVar1 = FUN_142b25460(puVar6,uVar3), iVar1 != 0)))))) {
      uVar2 = *(int *)(param_3 + 8) * 0x40;
      uVar10 = uVar2 + *(int *)(param_4 + 8) * 0x40;
      if (uVar10 < uVar2) {
        FUN_142afa690(3,0,0x66,s_D__a_1_s_target_release_build_bo_143cbafa0,CONCAT44(uVar11,0x4e));
      }
      else {
        iStack_54 = 0;
        for (uStack_58 = 0; uStack_58 < uVar10; uStack_58 = uStack_58 + 1) {
          uVar8 = FUN_142b37ed0(*(undefined8 *)*plVar4);
          uVar9 = FUN_142b37ed0(*(undefined8 *)*plVar5);
          lVar7 = FUN_142b26930(*puVar6,*plVar4,*plVar5,uVar3);
          FUN_142b25540(*plVar4,uVar8 & uVar9 & ~-lVar7,*puVar6,*plVar4,uVar3);
          FUN_142b26930(*puVar6,*plVar5,*plVar4,uVar3);
          FUN_142b25540(*plVar5,uVar8 & uVar9 & -lVar7,*puVar6,*plVar5,uVar3);
          uVar8 = FUN_142b37ed0(*(undefined8 *)*plVar4);
          uVar9 = FUN_142b37ed0(*(undefined8 *)*plVar5);
          if ((uVar8 & uVar9) != 0) {
            FID_conflict__assert((wchar_t *)s___143cbb0f0,(wchar_t *)s_D_143cbb010,0x60);
          }
          iStack_54 = iStack_54 + (~(uint)uVar8 & ~(uint)uVar9 & 1);
          FUN_142b37ef0(*plVar4,~uVar8,*puVar6,uVar3);
          FUN_142b37ef0(*plVar5,~uVar9,*puVar6,uVar3);
        }
        iVar1 = FUN_142b1f5d0(plVar4);
        if ((iVar1 == 0) && (iVar1 = FUN_142b1f5d0(plVar5), iVar1 == 0)) {
          FID_conflict__assert((wchar_t *)s_B_143cbb200,(wchar_t *)s_D_143cbb120,0x6d);
        }
        for (uStack_50 = 0; uStack_50 < uVar3; uStack_50 = uStack_50 + 1) {
          *(ulonglong *)(*plVar5 + uStack_50 * 8) =
               *(ulonglong *)(*plVar5 + uStack_50 * 8) | *(ulonglong *)(*plVar4 + uStack_50 * 8);
        }
        *param_2 = iStack_54;
        uStack_3c = FUN_142b255c0(param_1,*plVar5,uVar3);
      }
    }
    FUN_142b1dd90(param_5);
  }
  return uStack_3c;
}


/* address=142b38540 name=FUN_142b38540 */

ulonglong FUN_142b38540(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint uStack_28;
  ulonglong uStack_20;
  
  if ((param_3 != 0) && (param_3 != 1)) {
    FID_conflict__assert((wchar_t *)s_c_143cbb758,(wchar_t *)s_D_143cbb680,0x23e);
  }
  uVar1 = param_1 + param_3;
  uStack_28 = (uint)(uVar1 < param_3);
  uStack_20 = (ulonglong)(uVar1 + param_2 < uVar1);
  *param_4 = (longlong)(int)uStack_28 + uStack_20;
  return uVar1 + param_2;
}


/* address=142b38630 name=FUN_142b38630 */

longlong FUN_142b38630(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong *param_4)

{
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  if ((param_3 != 0) && (param_3 != 1)) {
    FID_conflict__assert((wchar_t *)s_b_143cbb868,(wchar_t *)s_D_143cbb790,0x253);
  }
  uStack_20 = (ulonglong)(param_1 < param_2);
  uStack_28 = (ulonglong)(param_1 == param_2);
  *param_4 = uStack_20 | uStack_28 & param_3;
  return (param_1 - param_2) - param_3;
}


/* address=142b38700 name=FUN_142b38700 */

undefined8 FUN_142b38700(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_142b1f5d0(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_142b1f6a0(param_2);
    if (iVar1 == 0) {
      FUN_142afa690(3,0,0x68,s_D__a_1_s_target_release_build_bo_143cbb9f0,0xa8);
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_142b1d620(param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_142b256e0(param_2,0x400);
        if (iVar1 == 0) {
          FUN_142afa690(3,0,0x66,s_D__a_1_s_target_release_build_bo_143cbbad0,0xb0);
          uVar2 = 0;
        }
        else {
          lVar3 = FUN_142b1d300(param_1 + 0x18,param_2);
          if (lVar3 == 0) {
            FUN_142afa690(3,0,0x44,s_D__a_1_s_target_release_build_bo_143cbbb40,0xb6);
            uVar2 = 0;
          }
          else {
            FUN_142b252a0(param_1 + 0x18);
            uVar2 = FUN_142b31d00(param_1 + 0x18);
            *(undefined8 *)(param_1 + 0x30) = uVar2;
            *(undefined8 *)(param_1 + 0x38) = 0;
            uVar2 = 1;
          }
        }
      }
      else {
        FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cbba60,0xac);
        uVar2 = 0;
      }
    }
  }
  else {
    FUN_142afa690(3,0,0x69,s_D__a_1_s_target_release_build_bo_143cbb980,0xa4);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142b388a0 name=FUN_142b388a0 */

undefined8
FUN_142b388a0(undefined8 param_1,ulonglong param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  uVar4 = *(undefined8 *)(param_5 + 0x18);
  uVar2 = (ulonglong)*(int *)(param_5 + 0x20);
  if ((param_2 == uVar2) && (param_4 == uVar2 * 2)) {
    lVar1 = *(longlong *)(param_5 + 0x30);
    uStack_38 = 0;
    for (uStack_40 = 0; uStack_40 < uVar2; uStack_40 = uStack_40 + 1) {
      lVar3 = FUN_142b25900(param_3 + uStack_40 * 8,uVar4,uVar2,
                            *(longlong *)(param_3 + uStack_40 * 8) * lVar1);
      uVar5 = lVar3 + uStack_38 + *(longlong *)(param_3 + (uStack_40 + uVar2) * 8);
      uStack_28 = (ulonglong)(uVar5 != *(ulonglong *)(param_3 + (uStack_40 + uVar2) * 8));
      uStack_20 = (ulonglong)(uVar5 <= *(ulonglong *)(param_3 + (uStack_40 + uVar2) * 8));
      uStack_38 = (uStack_38 | uStack_28) & uStack_20;
      *(ulonglong *)(param_3 + (uStack_40 + uVar2) * 8) = uVar5;
    }
    FUN_142b32d80(param_1,param_3 + uVar2 * 8,uStack_38,uVar4,uVar2);
    uVar4 = 1;
  }
  else {
    FUN_142afa690(3,0,0x42,s_D__a_1_s_target_release_build_bo_143cbbbb0,0x127);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=142b38b00 name=FUN_142b38b00 */

undefined8 FUN_142b38b00(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 2) == 0) {
    if (*(int *)(param_3 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = FUN_142b25460(param_2,(longlong)(*(int *)(param_3 + 0x20) << 1));
      if ((iVar1 != 0) &&
         (iVar1 = FUN_142b252e0(param_1,(longlong)*(int *)(param_3 + 0x20)), iVar1 != 0)) {
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x20);
        *(undefined4 *)(param_1 + 2) = 0;
        uVar2 = FUN_142b388a0(*param_1,(longlong)*(int *)(param_1 + 1),*param_2,
                              (longlong)*(int *)(param_2 + 1),param_3);
        return uVar2;
      }
      uVar2 = 0;
    }
  }
  else {
    FUN_142afa690(3,0,0x6d,s_D__a_1_s_target_release_build_bo_143cbbc20,0x144);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142b38c20 name=FUN_142b38c20 */

undefined4
FUN_142b38c20(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uStack_18;
  
  uStack_18 = 0;
  FUN_142b1dbe0(param_5);
  lVar2 = FUN_142b1dc40(param_5);
  if (lVar2 != 0) {
    if (param_2 == param_3) {
      iVar1 = FUN_142b33420(lVar2,param_2,param_5);
    }
    else {
      iVar1 = FUN_142b333a0(lVar2,param_2,param_3,param_5);
    }
    if ((iVar1 != 0) && (iVar1 = FUN_142b38b00(param_1,lVar2,param_4), iVar1 != 0)) {
      uStack_18 = 1;
    }
  }
  FUN_142b1dd90(param_5);
  return uStack_18;
}


/* address=142b38cf0 name=FUN_142b38cf0 */

ulonglong FUN_142b38cf0(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  if (param_1 % 2 != 1) {
    FID_conflict__assert((wchar_t *)s_n_143cbc398,(wchar_t *)s_D_143cbc2b0,0x69);
  }
  uStack_48 = 1;
  uStack_38 = 0;
  for (uStack_40 = 0; uStack_40 < 0x40; uStack_40 = uStack_40 + 1) {
    uVar1 = uStack_48 & 1;
    uVar2 = param_1 & -uVar1;
    uStack_48 = ((uStack_48 ^ uVar2) >> 1) + (uStack_48 & uVar2);
    uStack_38 = (uStack_38 >> 1) + (DAT_1431a6738 & -uVar1);
  }
  return uStack_38;
}


/* address=142b38e00 name=FUN_142b38e00 */

void FUN_142b38e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_142b26930(param_5,param_2,param_3,param_4);
  FUN_142b26930(param_1,param_3,param_2,param_4);
  FUN_142b25540(param_1,-lVar1,param_1,param_5,param_4);
  return;
}


/* address=142b38e90 name=FUN_142b38e90 */

void FUN_142b38e90(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  longlong lStackX_8;
  undefined8 *puStackX_10;
  ulonglong uStackX_18;
  undefined8 *puStackX_20;
  undefined8 *puStack_28;
  
  puStackX_10 = param_2;
  uStackX_18 = param_3;
  puStackX_20 = param_4;
  if (param_3 < param_5) {
    uStackX_18 = param_5;
    puStackX_10 = param_4;
    puStackX_20 = param_2;
    param_5 = param_3;
  }
  puStack_28 = (undefined8 *)(param_1 + uStackX_18 * 8);
  if (param_5 == 0) {
    FUN_142b134e0(param_1,0,uStackX_18 << 3);
  }
  else {
    uVar1 = FUN_142b25fb0(param_1,puStackX_10,uStackX_18,*puStackX_20);
    *puStack_28 = uVar1;
    lStackX_8 = param_1;
    while (param_5 != 1) {
      uVar1 = FUN_142b25900(lStackX_8 + 8,puStackX_10,uStackX_18,puStackX_20[1]);
      puStack_28[1] = uVar1;
      if (param_5 == 2) {
        return;
      }
      uVar1 = FUN_142b25900(lStackX_8 + 0x10,puStackX_10,uStackX_18,puStackX_20[2]);
      puStack_28[2] = uVar1;
      if (param_5 == 3) {
        return;
      }
      uVar1 = FUN_142b25900(lStackX_8 + 0x18,puStackX_10,uStackX_18,puStackX_20[3]);
      puStack_28[3] = uVar1;
      param_5 = param_5 - 4;
      if (param_5 == 0) {
        return;
      }
      uVar1 = FUN_142b25900(lStackX_8 + 0x20,puStackX_10,uStackX_18,puStackX_20[4]);
      puStack_28[4] = uVar1;
      puStack_28 = puStack_28 + 4;
      lStackX_8 = lStackX_8 + 0x20;
      puStackX_20 = puStackX_20 + 4;
    }
  }
  return;
}


/* address=142b39120 name=FUN_142b39120 */

ulonglong FUN_142b39120(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  if (param_4 < 0) {
    FID_conflict__assert((wchar_t *)s_c_143cbc9b0,(wchar_t *)s_D_143cbc8e0,0x83);
  }
  uStack_28 = FUN_142b26930(param_1,param_2,param_3,(longlong)param_4);
  if (param_5 != 0) {
    param_1 = param_1 + (longlong)param_4 * 8;
    param_2 = param_2 + (longlong)param_4 * 8;
    if (param_5 < 0) {
      for (iStack_34 = 0; iStack_34 < -param_5; iStack_34 = iStack_34 + 1) {
        *(ulonglong *)(param_1 + (longlong)iStack_34 * 8) =
             -uStack_28 - *(longlong *)(param_3 + (longlong)param_4 * 8 + (longlong)iStack_34 * 8);
        uStack_20 = (ulonglong)(*(longlong *)(param_1 + (longlong)iStack_34 * 8) != 0);
        uStack_28 = uStack_28 | uStack_20;
      }
    }
    else {
      for (iStack_38 = 0; iStack_38 < param_5; iStack_38 = iStack_38 + 1) {
        uVar1 = *(ulonglong *)(param_2 + (longlong)iStack_38 * 8);
        *(ulonglong *)(param_1 + (longlong)iStack_38 * 8) =
             *(longlong *)(param_2 + (longlong)iStack_38 * 8) - uStack_28;
        uStack_30 = (uint)(uVar1 < *(ulonglong *)(param_1 + (longlong)iStack_38 * 8));
        uStack_28 = (ulonglong)(int)uStack_30;
      }
    }
  }
  return uStack_28;
}


/* address=142b39310 name=FUN_142b39310 */

longlong FUN_142b39310(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      int param_5,undefined8 param_6)

{
  longlong lVar1;
  int iStack_18;
  
  lVar1 = FUN_142b39120(param_6,param_2,param_3,param_4,param_5);
  FUN_142b39120(param_1,param_3,param_2,param_4,-param_5);
  if (param_5 < 0) {
    iStack_18 = -param_5;
  }
  else {
    iStack_18 = param_5;
  }
  FUN_142b25540(param_1,-lVar1,param_1,param_6,(longlong)(param_4 + iStack_18));
  return -lVar1;
}


/* address=142b393e0 name=FUN_142b393e0 */

ulonglong FUN_142b393e0(longlong param_1,longlong param_2,longlong param_3,uint param_4,int param_5,
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
  int iStack_94;
  longlong lStack_90;
  uint uStack_80;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  if ((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) {
    FID_conflict__assert((wchar_t *)s_n_143cbca90,(wchar_t *)s_D_143cbc9c0,0xd5);
  }
  if ((param_5 < -8) || (0 < param_5)) {
    FID_conflict__assert((wchar_t *)s___143cbcba0,(wchar_t *)s_D_143cbcad0,0xd7);
  }
  if ((param_6 < -8) || (0 < param_6)) {
    FID_conflict__assert((wchar_t *)s___143cbcce0,(wchar_t *)s_D_143cbcc10,0xd8);
  }
  if (((param_4 == 8) && (param_5 == 0)) && (param_6 == 0)) {
    uVar1 = FUN_142b27e70(param_1,param_2,param_3);
  }
  else if ((int)param_4 < 0x10) {
    FUN_142b38e90(param_1,param_2,(longlong)(int)(param_4 + param_5),param_3,
                  (longlong)(int)(param_4 + param_6));
    uVar1 = (ulonglong)(uint)(param_5 + param_6);
    if (param_5 + param_6 < 0) {
      uVar1 = FUN_142b134e0(param_1 + (longlong)(int)(param_5 + param_4 * 2 + param_6) * 8,0,
                            (longlong)-(param_5 + param_6) << 3);
    }
  }
  else {
    iStack_94 = (int)param_4 / 2;
    uVar7 = CONCAT44(uVar9,iStack_94 - (iStack_94 + param_5));
    uVar2 = FUN_142b39310(param_7,param_2,param_2 + (longlong)iStack_94 * 8,iStack_94 + param_5,
                          uVar7,param_7 + (longlong)(int)param_4 * 8);
    uVar1 = param_7 + (longlong)(int)param_4 * 8;
    uVar8 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),(iStack_94 + param_6) - iStack_94);
    uVar3 = FUN_142b39310(param_7 + (longlong)iStack_94 * 8,param_3 + (longlong)iStack_94 * 8,
                          param_3,iStack_94 + param_6,uVar8,uVar1);
    if (((iStack_94 == 4) && (param_5 == 0)) && (param_6 == 0)) {
      FUN_142b26b60(param_7 + (longlong)(int)param_4 * 8,param_7,param_7 + 0x20);
      FUN_142b26b60(param_1,param_2,param_3);
      FUN_142b26b60(param_1 + (longlong)(int)param_4 * 8,param_2 + 0x20,param_3 + 0x20);
    }
    else if (((iStack_94 == 8) && (param_5 == 0)) && (param_6 == 0)) {
      FUN_142b27e70(param_7 + (longlong)(int)param_4 * 8,param_7,param_7 + 0x40);
      FUN_142b27e70(param_1,param_2,param_3);
      FUN_142b27e70(param_1 + (longlong)(int)param_4 * 8,param_2 + 0x40,param_3 + 0x40);
    }
    else {
      lVar4 = param_7 + (longlong)(int)(param_4 << 1) * 8;
      uVar1 = uVar1 & 0xffffffff00000000;
      uVar8 = uVar8 & 0xffffffff00000000;
      FUN_142b393e0(param_7 + (longlong)(int)param_4 * 8,param_7,param_7 + (longlong)iStack_94 * 8,
                    iStack_94,uVar8,uVar1,lVar4);
      FUN_142b393e0(param_1,param_2,param_3,iStack_94,uVar8 & 0xffffffff00000000,
                    uVar1 & 0xffffffff00000000,lVar4);
      FUN_142b393e0(param_1 + (longlong)(int)param_4 * 8,param_2 + (longlong)iStack_94 * 8,
                    param_3 + (longlong)iStack_94 * 8,iStack_94,param_5,param_6,lVar4);
    }
    lVar4 = FUN_142b26700(param_7,param_1,param_1 + (longlong)(int)param_4 * 8,
                          (longlong)(int)param_4);
    lVar5 = FUN_142b26930(param_7 + (longlong)(int)(param_4 << 1) * 8,param_7,
                          param_7 + (longlong)(int)param_4 * 8,(longlong)(int)param_4);
    lVar6 = FUN_142b26700(param_7 + (longlong)(int)param_4 * 8,param_7,
                          param_7 + (longlong)(int)param_4 * 8,(longlong)(int)param_4);
    FUN_142b25540(param_7 + (longlong)(int)param_4 * 8,uVar2 ^ uVar3,
                  param_7 + (longlong)(int)(param_4 << 1) * 8,param_7 + (longlong)(int)param_4 * 8,
                  (longlong)(int)param_4);
    lStack_90 = FUN_142b132d0(uVar2 ^ uVar3,lVar4 - lVar5,lVar4 + lVar6);
    lVar4 = FUN_142b26700(param_1 + (longlong)iStack_94 * 8,param_1 + (longlong)iStack_94 * 8,
                          param_7 + (longlong)(int)param_4 * 8,(longlong)(int)param_4);
    lStack_90 = lStack_90 + lVar4;
    for (iStack_94 = iStack_94 + param_4; uVar1 = (ulonglong)(param_4 * 2),
        iStack_94 < (int)(param_4 * 2); iStack_94 = iStack_94 + 1) {
      uVar1 = *(ulonglong *)(param_1 + (longlong)iStack_94 * 8);
      *(ulonglong *)(param_1 + (longlong)iStack_94 * 8) = uVar1 + lStack_90;
      uStack_80 = (uint)(*(ulonglong *)(param_1 + (longlong)iStack_94 * 8) < uVar1);
      lStack_90 = (longlong)(int)uStack_80;
    }
    if (lStack_90 != 0) {
      FID_conflict__assert((wchar_t *)s_c_143cbce20,(wchar_t *)s_D_143cbcd50,299);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* address=142b39c60 name=FUN_142b39c60 */

ulonglong FUN_142b39c60(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5
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
  uint uStack_b4;
  int iStack_b0;
  longlong lStack_a8;
  uint uStack_a0;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  if ((param_4 == 0) || ((param_4 & param_4 - 1) != 0)) {
    FID_conflict__assert((wchar_t *)s_n_143cbcf00,(wchar_t *)s_D_143cbce30,0x13a);
  }
  if (((int)param_5 < 0) || ((int)param_4 <= (int)param_5)) {
    FID_conflict__assert((wchar_t *)s_0_143cbd010,(wchar_t *)s_D_143cbcf40,0x13c);
  }
  if (((int)param_6 < 0) || ((int)param_4 <= (int)param_6)) {
    FID_conflict__assert((wchar_t *)s_0_143cbd110,(wchar_t *)s_D_143cbd040,0x13d);
  }
  if (((int)(param_5 - param_6) < -1) || (1 < (int)(param_5 - param_6))) {
    FID_conflict__assert((wchar_t *)s___143cbd210,(wchar_t *)s_D_143cbd140,0x13e);
  }
  iVar1 = param_4 * 2;
  if ((int)param_4 < 8) {
    FUN_142b38e90(param_1,param_2,(longlong)(int)(param_4 + param_5),param_3,
                  (longlong)(int)(param_4 + param_6));
    uVar2 = FUN_142b134e0(param_1 + (longlong)iVar1 * 8 + (longlong)(int)param_5 * 8 +
                          (longlong)(int)param_6 * 8,0,(longlong)(int)((iVar1 - param_5) - param_6))
    ;
  }
  else {
    uVar8 = CONCAT44(uVar10,param_4 - param_5);
    uVar3 = FUN_142b39310(param_7,param_2,param_2 + (longlong)(int)param_4 * 8,param_5,uVar8,
                          param_7 + (longlong)iVar1 * 8);
    uVar2 = param_7 + (longlong)iVar1 * 8;
    uVar9 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),param_6 - param_4);
    uVar4 = FUN_142b39310(param_7 + (longlong)(int)param_4 * 8,param_3 + (longlong)(int)param_4 * 8,
                          param_3,param_6,uVar9,uVar2);
    if (param_4 == 8) {
      FUN_142b27e70(param_7 + (longlong)iVar1 * 8,param_7,param_7 + 0x40);
      FUN_142b27e70(param_1,param_2,param_3);
      FUN_142b38e90(param_1 + (longlong)iVar1 * 8,param_2 + 0x40,(longlong)(int)param_5,
                    param_3 + 0x40,(longlong)(int)param_6);
      FUN_142b134e0(param_1 + (longlong)(int)(iVar1 + param_5 + param_6) * 8,0,
                    (longlong)(int)((iVar1 - param_5) - param_6) << 3);
    }
    else {
      lVar5 = param_7 + (longlong)(int)(param_4 << 2) * 8;
      uVar2 = uVar2 & 0xffffffff00000000;
      uVar9 = uVar9 & 0xffffffff00000000;
      FUN_142b393e0(param_7 + (longlong)iVar1 * 8,param_7,param_7 + (longlong)(int)param_4 * 8,
                    param_4,uVar9,uVar2,lVar5);
      uVar2 = uVar2 & 0xffffffff00000000;
      uVar9 = uVar9 & 0xffffffff00000000;
      FUN_142b393e0(param_1,param_2,param_3,param_4,uVar9,uVar2,lVar5);
      uVar10 = (undefined4)(uVar9 >> 0x20);
      uVar11 = (undefined4)(uVar2 >> 0x20);
      FUN_142b134e0(param_1 + (longlong)iVar1 * 8,0,(longlong)iVar1 << 3);
      uStack_b4 = param_4;
      if (((int)param_5 < 0x10) && ((int)param_6 < 0x10)) {
        FUN_142b38e90(param_1 + (longlong)iVar1 * 8,param_2 + (longlong)(int)param_4 * 8,
                      (longlong)(int)param_5,param_3 + (longlong)(int)param_4 * 8,
                      (longlong)(int)param_6);
      }
      else {
        do {
          uStack_b4 = (int)uStack_b4 / 2;
          if (((int)uStack_b4 < (int)param_5) || ((int)uStack_b4 < (int)param_6)) {
            FUN_142b39c60(param_1 + (longlong)iVar1 * 8,param_2 + (longlong)(int)param_4 * 8,
                          param_3 + (longlong)(int)param_4 * 8,uStack_b4,
                          CONCAT44(uVar10,param_5 - uStack_b4),CONCAT44(uVar11,param_6 - uStack_b4),
                          lVar5);
            goto LAB_142b3a34e;
          }
        } while ((uStack_b4 != param_5) && (uStack_b4 != param_6));
        FUN_142b393e0(param_1 + (longlong)iVar1 * 8,param_2 + (longlong)(int)param_4 * 8,
                      param_3 + (longlong)(int)param_4 * 8,uStack_b4,
                      CONCAT44(uVar10,param_5 - uStack_b4),CONCAT44(uVar11,param_6 - uStack_b4),
                      lVar5);
      }
    }
LAB_142b3a34e:
    lVar5 = FUN_142b26700(param_7,param_1,param_1 + (longlong)iVar1 * 8,(longlong)iVar1);
    lVar6 = FUN_142b26930(param_7 + (longlong)(int)(param_4 << 2) * 8,param_7,
                          param_7 + (longlong)iVar1 * 8,(longlong)iVar1);
    lVar7 = FUN_142b26700(param_7 + (longlong)iVar1 * 8,param_7,param_7 + (longlong)iVar1 * 8,
                          (longlong)iVar1);
    FUN_142b25540(param_7 + (longlong)iVar1 * 8,uVar3 ^ uVar4,
                  param_7 + (longlong)(int)(param_4 << 2) * 8,param_7 + (longlong)iVar1 * 8,
                  (longlong)iVar1);
    lStack_a8 = FUN_142b132d0(uVar3 ^ uVar4,lVar5 - lVar6,lVar5 + lVar7);
    lVar5 = FUN_142b26700(param_1 + (longlong)(int)param_4 * 8,param_1 + (longlong)(int)param_4 * 8,
                          param_7 + (longlong)iVar1 * 8,(longlong)iVar1);
    lStack_a8 = lStack_a8 + lVar5;
    for (iStack_b0 = param_4 * 3; uVar2 = (ulonglong)(param_4 * 4), iStack_b0 < (int)(param_4 * 4);
        iStack_b0 = iStack_b0 + 1) {
      uVar2 = *(ulonglong *)(param_1 + (longlong)iStack_b0 * 8);
      *(ulonglong *)(param_1 + (longlong)iStack_b0 * 8) = uVar2 + lStack_a8;
      uStack_a0 = (uint)(*(ulonglong *)(param_1 + (longlong)iStack_b0 * 8) < uVar2);
      lStack_a8 = (longlong)(int)uStack_a0;
    }
    if (lStack_a8 != 0) {
      FID_conflict__assert((wchar_t *)s_c_143cbd330,(wchar_t *)s_D_143cbd260,0x19d);
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* address=142b3a610 name=FUN_142b3a610 */

undefined4
FUN_142b3a610(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

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
  char cStack_48;
  undefined8 *puStack_38;
  undefined4 uStack_28;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  iVar2 = *(int *)(param_2 + 1);
  iVar1 = *(int *)(param_3 + 1);
  if ((iVar2 == 0) || (iVar1 == 0)) {
    FUN_142b1d4c0(param_1);
    return 1;
  }
  uStack_28 = 0;
  FUN_142b1dbe0(param_4);
  if (((param_1 != param_2) && (puStack_38 = param_1, param_1 != param_3)) ||
     (puStack_38 = (undefined8 *)FUN_142b1dc40(param_4), puStack_38 != (undefined8 *)0x0)) {
    *(uint *)(puStack_38 + 2) = *(uint *)(param_2 + 2) ^ *(uint *)(param_3 + 2);
    iVar6 = iVar2 - iVar1;
    if ((iVar2 == iVar1) && (iVar2 == 8)) {
      iVar2 = FUN_142b252e0(puStack_38,0x10);
      if (iVar2 == 0) goto LAB_142b3aa3c;
      *(undefined4 *)(puStack_38 + 1) = 0x10;
      FUN_142b27e70(*puStack_38,*param_2,*param_3);
    }
    else {
      iVar7 = iVar2 + iVar1;
      if (((iVar2 < DAT_1431a66a8) || ((iVar1 < DAT_1431a66a8 || (iVar6 < -1)))) || (1 < iVar6)) {
        iVar6 = FUN_142b252e0(puStack_38,(longlong)iVar7);
        if (iVar6 == 0) goto LAB_142b3aa3c;
        *(int *)(puStack_38 + 1) = iVar7;
        FUN_142b38e90(*puStack_38,*param_2,(longlong)iVar2,*param_3,(longlong)iVar1);
      }
      else {
        if (iVar6 < 0) {
          cStack_48 = FUN_142b24f70((longlong)iVar1);
        }
        else {
          cStack_48 = FUN_142b24f70((longlong)iVar2);
        }
        iVar6 = 1 << (cStack_48 - 1U & 0x1f);
        if ((iVar2 < iVar6) && (iVar1 < iVar6)) {
          FID_conflict__assert((wchar_t *)s_j_143cbd410,(wchar_t *)s_D_143cbd340,0x1d1);
        }
        puVar4 = (undefined8 *)FUN_142b1dc40(param_4);
        if (puVar4 == (undefined8 *)0x0) goto LAB_142b3aa3c;
        if ((iVar6 < iVar2) || (iVar6 < iVar1)) {
          if ((iVar2 < iVar6) || (iVar1 < iVar6)) {
            FID_conflict__assert((wchar_t *)s_a_143cbd510,(wchar_t *)s_D_143cbd440,0x1dd);
          }
          iVar3 = FUN_142b252e0(puVar4,(longlong)(iVar6 << 3));
          if ((iVar3 == 0) || (iVar3 = FUN_142b252e0(puStack_38,(longlong)(iVar6 << 2)), iVar3 == 0)
             ) goto LAB_142b3aa3c;
          FUN_142b39c60(*puStack_38,*param_2,*param_3,iVar6,CONCAT44(uVar8,iVar2 - iVar6),
                        iVar1 - iVar6,*puVar4);
        }
        else {
          iVar3 = FUN_142b252e0(puVar4,(longlong)(iVar6 << 2));
          if ((iVar3 == 0) || (iVar3 = FUN_142b252e0(puStack_38,(longlong)(iVar6 << 1)), iVar3 == 0)
             ) goto LAB_142b3aa3c;
          FUN_142b393e0(*puStack_38,*param_2,*param_3,iVar6,CONCAT44(uVar8,iVar2 - iVar6),
                        iVar1 - iVar6,*puVar4);
        }
        *(int *)(puStack_38 + 1) = iVar7;
      }
    }
    if ((param_1 == puStack_38) || (lVar5 = FUN_142b1d300(param_1,puStack_38), lVar5 != 0)) {
      uStack_28 = 1;
    }
  }
LAB_142b3aa3c:
  FUN_142b1dd90(param_4);
  return uStack_28;
}


/* address=142b3aa60 name=FUN_142b3aa60 */

void FUN_142b3aa60(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puStack_28;
  undefined8 *puStack_20;
  longlong lStack_18;
  
  if (param_3 != 0) {
    param_1[param_3 * 2 + -1] = 0;
    *param_1 = 0;
    puStack_28 = param_1 + 1;
    puStack_20 = param_2;
    if (1 < param_3) {
      puStack_20 = param_2 + 1;
      uVar1 = FUN_142b25fb0(puStack_28,puStack_20,param_3 - 1,*param_2);
      param_1[param_3] = uVar1;
      puStack_28 = param_1 + 3;
    }
    if (2 < param_3) {
      for (lStack_18 = param_3 - 2; lStack_18 != 0; lStack_18 = lStack_18 + -1) {
        uVar1 = FUN_142b25900(puStack_28,puStack_20 + 1,lStack_18,*puStack_20);
        puStack_28[lStack_18] = uVar1;
        puStack_28 = puStack_28 + 2;
        puStack_20 = puStack_20 + 1;
      }
    }
    FUN_142b26700(param_1,param_1,param_1,param_3 * 2);
    FUN_142b26470(param_4,param_2,param_3);
    FUN_142b26700(param_1,param_1,param_4,param_3 * 2);
  }
  return;
}


/* address=142b3ac10 name=FUN_142b3ac10 */

ulonglong FUN_142b3ac10(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uStack_48;
  longlong lStack_38;
  ulonglong uStack_30;
  
  if ((param_3 == 0) || ((param_3 & param_3 - 1) != 0)) {
    FID_conflict__assert((wchar_t *)s_n_143cbd680,(wchar_t *)s_D_143cbd5b0,0x251);
  }
  if (param_3 == 4) {
    uVar1 = FUN_142b308b0(param_1,param_2);
  }
  else if (param_3 == 8) {
    uVar1 = FUN_142b2cab0(param_1,param_2);
  }
  else if (param_3 < 0x10) {
    uVar1 = FUN_142b3aa60(param_1,param_2,param_3,param_4);
  }
  else {
    uStack_30 = param_3 / 2;
    lVar2 = param_4 + param_3 * 0x10;
    FUN_142b38e00(param_4,param_2,param_2 + uStack_30 * 8,uStack_30,param_4 + uStack_30 * 8);
    FUN_142b3ac10(param_4 + param_3 * 8,param_4,uStack_30,lVar2);
    FUN_142b3ac10(param_1,param_2,uStack_30,lVar2);
    FUN_142b3ac10(param_1 + param_3 * 8,param_2 + uStack_30 * 8,uStack_30,lVar2);
    lVar2 = FUN_142b26700(param_4,param_1,param_1 + param_3 * 8,param_3);
    lVar3 = FUN_142b26930(param_4 + param_3 * 8,param_4,param_4 + param_3 * 8,param_3);
    lStack_38 = FUN_142b26700(param_1 + uStack_30 * 8,param_1 + uStack_30 * 8,param_4 + param_3 * 8,
                              param_3);
    lStack_38 = (lVar2 - lVar3) + lStack_38;
    for (uStack_30 = uStack_30 + param_3; uVar1 = param_3 * 2, uStack_30 < uVar1;
        uStack_30 = uStack_30 + 1) {
      uVar1 = *(ulonglong *)(param_1 + uStack_30 * 8);
      *(ulonglong *)(param_1 + uStack_30 * 8) = uVar1 + lStack_38;
      uStack_48 = (uint)(*(ulonglong *)(param_1 + uStack_30 * 8) < uVar1);
      lStack_38 = (longlong)(int)uStack_48;
    }
    if (lStack_38 != 0) {
      FID_conflict__assert((wchar_t *)s_c_143cbd790,(wchar_t *)s_D_143cbd6c0,0x284);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* address=142b3afc0 name=FUN_142b3afc0 */

undefined8 FUN_142b3afc0(int param_1)

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


/* address=142b3b050 name=FUN_142b3b050 */

undefined8 FUN_142b3b050(longlong param_1)

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


/* address=142b3b080 name=FUN_142b3b080 */

undefined8 FUN_142b3b080(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  do {
    iVar1 = FUN_142b21630(param_1,param_2,1,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_142b325e0(param_1);
  } while (iVar1 != 0);
  return 1;
}


/* address=142b3b0d0 name=FUN_142b3b0d0 */

undefined4
FUN_142b3b0d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uStack_28;
  ulonglong uStack_20;
  
  uStack_28 = 0;
  FUN_142b1dbe0(param_5);
  lVar3 = FUN_142b1dc40(param_5);
  if ((((lVar3 != 0) && (iVar2 = FUN_142b21630(param_1,param_2,0,1), iVar2 != 0)) &&
      (iVar2 = FUN_142b1e5c0(0,lVar3,param_1,param_3,param_5), iVar2 != 0)) &&
     (iVar2 = FUN_142b1e0c0(param_1,param_1,lVar3), iVar2 != 0)) {
    if (param_4 == 0) {
      iVar2 = FUN_142b1df20(param_1,1);
    }
    else {
      iVar2 = FUN_142b1ddd0(param_1,param_1,param_4);
    }
    if (iVar2 != 0) {
      uVar4 = FUN_142b3b050(param_1);
      do {
        uStack_20 = 1;
        while( true ) {
          if (uVar4 <= uStack_20) {
            uStack_28 = 1;
            goto LAB_142b3b23b;
          }
          uVar1 = FUN_142b324a0(param_1,*(undefined2 *)(&DAT_1431a6760 + uStack_20 * 2));
          if (uVar1 < 2) break;
          uStack_20 = uStack_20 + 1;
        }
        iVar2 = FUN_142b1ddd0(param_1,param_1,param_3);
      } while (iVar2 != 0);
    }
  }
LAB_142b3b23b:
  FUN_142b1dd90(param_5);
  return uStack_28;
}


/* address=142b3b260 name=FUN_142b3b260 */

undefined4
FUN_142b3b260(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,undefined8 param_5)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uStack_38;
  ulonglong uStack_28;
  
  uStack_38 = 0;
  FUN_142b1dbe0(param_5);
  uVar3 = FUN_142b1dc40(param_5);
  uVar4 = FUN_142b1dc40(param_5);
  lVar5 = FUN_142b1dc40(param_5);
  if ((((lVar5 != 0) && (iVar2 = FUN_142b1fc00(lVar5,param_3), iVar2 != 0)) &&
      (iVar2 = FUN_142b21630(uVar4,param_2 + -1,0,1), iVar2 != 0)) &&
     ((iVar2 = FUN_142b1e5c0(0,uVar3,uVar4,lVar5,param_5), iVar2 != 0 &&
      (iVar2 = FUN_142b1e0c0(uVar4,uVar4,uVar3), iVar2 != 0)))) {
    if (param_4 == 0) {
      iVar2 = FUN_142b1df20(uVar4,1);
    }
    else {
      iVar2 = FUN_142b1fc00(uVar3,param_4);
      if (iVar2 == 0) goto LAB_142b3b4ac;
      iVar2 = FUN_142b1ddd0(uVar4,uVar4,uVar3);
    }
    if (((iVar2 != 0) && (iVar2 = FUN_142b1f9f0(param_1,uVar4), iVar2 != 0)) &&
       (iVar2 = FUN_142b1df20(param_1,1), iVar2 != 0)) {
      uVar6 = FUN_142b3b050(param_1);
      do {
        uStack_28 = 1;
        while( true ) {
          if (uVar6 <= uStack_28) {
            uStack_38 = 1;
            goto LAB_142b3b4ac;
          }
          sVar1 = FUN_142b324a0(param_1,*(undefined2 *)(&DAT_1431a6760 + uStack_28 * 2));
          if ((sVar1 == 0) ||
             (sVar1 = FUN_142b324a0(uVar4,*(undefined2 *)(&DAT_1431a6760 + uStack_28 * 2)),
             sVar1 == 0)) break;
          uStack_28 = uStack_28 + 1;
        }
        iVar2 = FUN_142b1ddd0(param_1,param_1,param_3);
      } while ((iVar2 != 0) && (iVar2 = FUN_142b1ddd0(uVar4,uVar4,lVar5), iVar2 != 0));
    }
  }
LAB_142b3b4ac:
  FUN_142b1dd90(param_5);
  return uStack_38;
}


/* address=142b3b4d0 name=FUN_142b3b4d0 */

undefined8 FUN_142b3b4d0(undefined2 *param_1,undefined8 param_2)

{
  short sVar1;
  ulonglong uVar2;
  ulonglong uStack_18;
  
  uVar2 = FUN_142b3b050(param_2);
  uStack_18 = 1;
  while( true ) {
    if (uVar2 <= uStack_18) {
      return 0;
    }
    sVar1 = FUN_142b324a0(param_2,*(undefined2 *)(&DAT_1431a6760 + uStack_18 * 2));
    if (sVar1 == 0) break;
    uStack_18 = uStack_18 + 1;
  }
  *param_1 = *(undefined2 *)(&DAT_1431a6760 + uStack_18 * 2);
  return 1;
}


/* address=142b3b560 name=FUN_142b3b560 */

undefined8 FUN_142b3b560(undefined8 param_1,undefined8 param_2)

{
  FUN_142b3baf0(param_1,param_2,&DAT_1431a6050);
  return 1;
}


/* address=142b3b680 name=FUN_142b3b680 */

void FUN_142b3b680(undefined8 param_1)

{
  FUN_142b0eaa0(param_1);
  return;
}


/* address=142b3b6a0 name=FUN_142b3b6a0 */

void FUN_142b3b6a0(longlong param_1,byte *param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  byte *pbStackX_10;
  undefined auStack_68 [32];
  ulonglong uStack_48;
  byte abStack_40 [48];
  ulonglong uStack_10;
  
  uStack_10 = DAT_143cf7840 ^ (ulonglong)auStack_68;
  pbStackX_10 = param_2;
  if (param_4 != 0) {
    if (0x30 < param_4) goto LAB_142b3b790;
    FUN_142b13440(abStack_40,param_2,0x30);
    for (uStack_48 = 0; uStack_48 < param_4; uStack_48 = uStack_48 + 1) {
      abStack_40[uStack_48] = abStack_40[uStack_48] ^ *(byte *)(param_3 + uStack_48);
    }
    pbStackX_10 = abStack_40;
  }
  iVar1 = FUN_142b61660(param_1,pbStackX_10,0x30);
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0x118) = 1;
  }
LAB_142b3b790:
  FUN_142c6a7d0(uStack_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=142b3b7b0 name=FUN_142b3b7b0 */

void FUN_142b3b7b0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lStackX_10;
  ulonglong uStackX_18;
  undefined auStack_78 [32];
  longlong lStack_58;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  longlong lStack_30;
  undefined auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_78;
  if (((param_3 < 0x10001) && (*(ulonglong *)(param_1 + 0x118) <= DAT_1431a6008)) &&
     ((lStackX_10 = param_2, uStackX_18 = param_3, param_5 == 0 ||
      (iVar1 = FUN_142b61660(param_1,param_4,param_5), iVar1 != 0)))) {
    for (; 0xf < uStackX_18; uStackX_18 = uStackX_18 - uStack_48) {
      uStack_48 = DAT_1431a6040;
      if (uStackX_18 < DAT_1431a6040) {
        uStack_48 = uStackX_18;
      }
      uStack_48 = uStack_48 & 0xfffffffffffffff0;
      uStack_38 = uStack_48 / 0x10;
      if (*(longlong *)(param_1 + 0x100) == 0) {
        for (uStack_40 = 0; uStack_40 < uStack_48; uStack_40 = uStack_40 + 0x10) {
          FUN_142b61610(param_1,1);
          lStack_30 = param_1 + 0x108;
          (**(code **)(param_1 + 0xf8))(lStack_30,lStackX_10 + uStack_40,param_1);
        }
      }
      else {
        FUN_142b134e0(lStackX_10,0,uStack_48);
        FUN_142b61610(param_1,1);
        lStack_58 = param_1 + 0x108;
        (**(code **)(param_1 + 0x100))(lStackX_10,lStackX_10,uStack_38,param_1);
        FUN_142b61610(param_1);
      }
      lStackX_10 = lStackX_10 + uStack_48;
    }
    if (uStackX_18 != 0) {
      FUN_142b61610(param_1,1);
      (**(code **)(param_1 + 0xf8))(param_1 + 0x108,auStack_28,param_1);
      FUN_142b13440(lStackX_10,auStack_28,uStackX_18);
    }
    iVar1 = FUN_142b61660(param_1,param_4,param_5);
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + 1;
      FUN_142b1ce70();
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=142b3bac0 name=FUN_142b3bac0 */

void FUN_142b3bac0(undefined8 param_1)

{
  FUN_142b0ec40(param_1,0x120);
  return;
}


/* address=142b3baf0 name=FUN_142b3baf0 */

void FUN_142b3baf0(longlong param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lStackX_8;
  ulonglong uStackX_10;
  undefined auStack_298 [32];
  undefined8 uStack_278;
  undefined *puStack_268;
  ulonglong uStack_260;
  int iStack_258;
  ulonglong uStack_250;
  longlong lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined auStack_228 [304];
  byte abStack_f8 [32];
  undefined auStack_d8 [48];
  undefined auStack_a8 [48];
  undefined auStack_78 [48];
  undefined auStack_48 [48];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_298;
  if (param_2 != 0) {
    lStack_248 = FUN_142b617f0();
    iVar1 = FUN_142b3c0d0();
    if ((iVar1 == 0) || (iVar1 = FUN_142b61840(abStack_f8,0x20), iVar1 == 0)) {
      if ((lStack_248 == 0) && (iVar1 = FUN_142c4dc50(), iVar1 == 0)) {
        iVar1 = FUN_142b3c0b0();
        if (iVar1 == 0) {
          FUN_142c4db90(abStack_f8,0x20);
        }
        else {
          iVar1 = FUN_142b3bef0(abStack_f8,0x20);
          if ((iVar1 == 0) && (iVar1 = FUN_142b61840(abStack_f8,0x20), iVar1 == 0)) {
            FUN_142c4db90(abStack_f8,0x20);
          }
        }
      }
      else {
        FUN_142b134e0(abStack_f8,0,0x20);
      }
    }
    for (uStack_260 = 0; uStack_260 < 0x20; uStack_260 = uStack_260 + 1) {
      abStack_f8[uStack_260] = abStack_f8[uStack_260] ^ *(byte *)(param_3 + uStack_260);
    }
    puStack_268 = (undefined *)FUN_142b81bd0(1);
    if (puStack_268 == (undefined *)0x0) {
      puStack_268 = (undefined *)FUN_142b0e970(0x130);
      if ((puStack_268 == (undefined *)0x0) ||
         (iVar1 = FUN_142b81c30(1,puStack_268,&LAB_142b61800), iVar1 == 0)) {
        puStack_268 = auStack_228;
      }
      *(undefined4 *)(puStack_268 + 300) = 0;
      puVar3 = auStack_d8;
      for (lVar2 = 0x30; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      uStack_240 = 0;
      FUN_142b61920(puStack_268,auStack_78,auStack_d8,&uStack_240);
      iVar1 = FUN_142b3bf20(puStack_268,auStack_78,auStack_d8,uStack_240);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(puStack_268 + 0x128) = 0;
      *(longlong *)(puStack_268 + 0x120) = lStack_248;
    }
    if ((DAT_1431a6048 <= *(uint *)(puStack_268 + 0x128)) ||
       (*(longlong *)(puStack_268 + 0x120) != lStack_248)) {
      puVar3 = auStack_a8;
      for (lVar2 = 0x30; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      uStack_238 = 0;
      FUN_142b61920(puStack_268,auStack_48,auStack_a8,&uStack_238);
      iVar1 = FUN_142b3b6a0(puStack_268,auStack_48,auStack_a8,uStack_238);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(puStack_268 + 0x128) = 0;
      *(longlong *)(puStack_268 + 0x120) = lStack_248;
    }
    iStack_258 = 1;
    lStackX_8 = param_1;
    uStackX_10 = param_2;
    while (uStackX_10 != 0) {
      uStack_250 = uStackX_10;
      if (0x10000 < uStackX_10) {
        uStack_250 = 0x10000;
      }
      if (iStack_258 == 0) {
        uStack_230 = 0;
      }
      else {
        uStack_230 = 0x20;
      }
      uStack_278 = uStack_230;
      iVar1 = FUN_142b3b7b0(puStack_268,lStackX_8,uStack_250,abStack_f8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lStackX_8 = lStackX_8 + uStack_250;
      uStackX_10 = uStackX_10 - uStack_250;
      *(int *)(puStack_268 + 0x128) = *(int *)(puStack_268 + 0x128) + 1;
      iStack_258 = 0;
    }
    if (puStack_268 == auStack_228) {
      FUN_142b3bac0(puStack_268);
    }
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_298);
  return;
}


/* address=142b3bef0 name=FUN_142b3bef0 */

undefined8 FUN_142b3bef0(undefined8 param_1,undefined8 param_2)

{
  FUN_142c4db90(param_1,param_2);
  return 1;
}


/* address=142b3bf20 name=FUN_142b3bf20 */

void FUN_142b3bf20(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined auStack_88 [32];
  undefined8 uStack_68;
  ulonglong uStack_58;
  ulonglong uStack_50;
  byte abStack_48 [48];
  ulonglong uStack_18;
  
  uStack_18 = DAT_143cf7840 ^ (ulonglong)auStack_88;
  if (param_4 < 0x31) {
    FUN_142b13440(abStack_48,param_2,0x30);
    for (uStack_58 = 0; uStack_58 < param_4; uStack_58 = uStack_58 + 1) {
      abStack_48[uStack_58] = abStack_48[uStack_58] ^ *(byte *)(param_3 + uStack_58);
    }
    for (uStack_50 = 0; uStack_50 < 0x30; uStack_50 = uStack_50 + 1) {
      abStack_48[uStack_50] = abStack_48[uStack_50] ^ (&DAT_1431a6010)[uStack_50];
    }
    uStack_68 = 0x20;
    uVar1 = FUN_142b3f140(param_1,0,param_1 + 0xf8,abStack_48);
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    FUN_142b13440(param_1 + 0x108,abStack_48 + 0x20,0x10);
    *(undefined8 *)(param_1 + 0x118) = 1;
  }
  FUN_142c6a7d0(uStack_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=142b3c0b0 name=FUN_142b3c0b0 */

void FUN_142b3c0b0(void)

{
  FUN_142b139c0();
  return;
}


/* address=142b3c0d0 name=FUN_142b3c0d0 */

undefined4 FUN_142b3c0d0(void)

{
  int iVar1;
  
  iVar1 = FUN_142b139c0();
  if ((iVar1 != 0) && (iVar1 = FUN_142b13840(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142b3c110 name=FUN_142b3c110 */

ulonglong FUN_142b3c110(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else if (param_2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uStack_18 = 0;
    for (uStack_10 = 1; uStack_10 < param_2; uStack_10 = uStack_10 + 1) {
      uStack_18 = uStack_18 | param_1[uStack_10];
    }
    uVar1 = FUN_142b13230(uStack_18);
    uVar2 = FUN_142b13170(*param_1,param_3);
    uVar1 = uVar1 & uVar2;
  }
  return uVar1;
}


/* address=142b3c1e0 name=FUN_142b3c1e0 */

undefined8
FUN_142b3c1e0(longlong *param_1,ulonglong *param_2,ulonglong param_3,ulonglong *param_4,
             longlong param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lStack_10;
  
  for (lStack_10 = param_5; (lStack_10 != 0 && (param_4[lStack_10 + -1] == 0));
      lStack_10 = lStack_10 + -1) {
  }
  if ((lStack_10 == 0) || ((lStack_10 == 1 && (*param_4 <= param_3)))) {
    FUN_142afa690(3,0,0x6c,s_D__a_1_s_target_release_build_bo_143cbdb80,0xe6);
    uVar1 = 0;
  }
  else {
    uVar2 = param_4[lStack_10 + -1] | param_4[lStack_10 + -1] >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    *param_1 = lStack_10;
    *param_2 = uVar2 | uVar2 >> 0x20;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=142b3c350 name=FUN_142b3c350 */

int FUN_142b3c350(ulonglong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar2 = FUN_142b13230(param_1 << 0x20);
  uVar3 = FUN_142b132d0(uVar2,param_1 >> 0x20,param_1);
  uVar4 = FUN_142b13230(uVar3 << 0x30);
  uVar3 = FUN_142b132d0(uVar4,uVar3 >> 0x10,uVar3);
  uVar5 = FUN_142b13230(uVar3 << 0x38);
  uVar3 = FUN_142b132d0(uVar5,uVar3 >> 8,uVar3);
  uVar6 = FUN_142b13230(uVar3 << 0x3c);
  uVar3 = FUN_142b132d0(uVar6,uVar3 >> 4,uVar3);
  uVar7 = FUN_142b13230(uVar3 << 0x3e);
  lVar8 = FUN_142b132d0(uVar7,uVar3 >> 2,uVar3);
  uVar1 = FUN_142b13230(lVar8 << 0x3f);
  return ((uint)uVar2 & 0x20) + ((uint)uVar4 & 0x10) + ((uint)uVar5 & 8) + ((uint)uVar6 & 4) +
         ((uint)uVar7 & 2) + (uVar1 & 1);
}


/* address=142b3c530 name=FUN_142b3c530 */

void FUN_142b3c530(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b42120();
  FUN_142b81a20(uVar1,&LAB_142b421d0);
  FUN_142b42110();
  return;
}


/* address=142b3c590 name=FUN_142b3c590 */

void FUN_142b3c590(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b422e0();
  FUN_142b81a20(uVar1,&LAB_142b42390);
  FUN_142b422d0();
  return;
}


/* address=142b3c6b0 name=FUN_142b3c6b0 */

undefined4 FUN_142b3c6b0(void)

{
  int iVar1;
  
  iVar1 = FUN_142b14930();
  if ((iVar1 != 0) && (iVar1 = FUN_142b15810(), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=142b3c6f0 name=FUN_142b3c6f0 */

undefined FUN_142b3c6f0(undefined *param_1)

{
  return *param_1;
}


/* address=142b3c710 name=FUN_142b3c710 */

undefined FUN_142b3c710(longlong param_1)

{
  return *(undefined *)(param_1 + 1);
}


/* address=142b3c730 name=FUN_142b3c730 */

undefined FUN_142b3c730(longlong param_1)

{
  return *(undefined *)(param_1 + 2);
}


/* address=142b3c750 name=FUN_142b3c750 */

undefined FUN_142b3c750(longlong param_1)

{
  return *(undefined *)(param_1 + 3);
}


/* address=142b3c770 name=FUN_142b3c770 */

void FUN_142b3c770(undefined8 param_1)

{
  FUN_142b134e0(param_1,0,0x248);
  return;
}


/* address=142b3c820 name=FUN_142b3c820 */

void FUN_142b3c820(longlong param_1)

{
  if (param_1 != 0) {
    FUN_142b3c8f0(param_1);
    FUN_142b0eaa0(param_1);
  }
  return;
}


/* address=142b3c860 name=FUN_142b3c860 */

undefined8
FUN_142b3c860(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    FUN_142afa690(0x1e,0,0x7c,s_D__a_1_s_target_release_build_bo_143cbe6e0,0x41);
    *param_1 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_142b3d1f0(param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar1;
}


/* address=142b3c8f0 name=FUN_142b3c8f0 */

void FUN_142b3c8f0(longlong *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    *param_1 = 0;
  }
  return;
}


/* address=142b3c930 name=FUN_142b3c930 */

undefined8
FUN_142b3c930(longlong *param_1,longlong param_2,longlong *param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ulonglong param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar2;
  longlong alStack_10 [2];
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (param_8 + *(byte *)(*param_1 + 2) < param_8) {
    FUN_142afa690(0x1e,0,0x75,s_D__a_1_s_target_release_build_bo_143cbe7c0,CONCAT44(uVar2,0x7b));
  }
  else if (param_4 < param_8) {
    FUN_142afa690(0x1e,0,0x67,s_D__a_1_s_target_release_build_bo_143cbe830,CONCAT44(uVar2,0x80));
  }
  else {
    iVar1 = FUN_142b3f2c0(param_7,param_8,param_2,param_4);
    if (iVar1 == 0) {
      FUN_142afa690(0x1e,0,0x73,s_D__a_1_s_target_release_build_bo_143cbe8a0,CONCAT44(uVar2,0x85));
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x28))
                        (param_1,param_2,param_2 + param_8,alStack_10,param_4 - param_8,param_5,
                         param_6,param_7,param_8,0,0,param_9,param_10);
      if (iVar1 != 0) {
        *param_3 = param_8 + alStack_10[0];
        return 1;
      }
    }
  }
  FUN_142b134e0(param_2,0,param_4);
  *param_3 = 0;
  return 0;
}


/* address=142b3cb50 name=FUN_142b3cb50 */

undefined8
FUN_142b3cb50(longlong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4,
             undefined8 param_5,undefined8 param_6,longlong param_7,ulonglong param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  iVar1 = FUN_142b3f2c0(param_7,param_8,param_2,param_4);
  if (iVar1 == 0) {
    FUN_142afa690(0x1e,0,0x73,s_D__a_1_s_target_release_build_bo_143cbe9f0,CONCAT44(uVar2,0xbf));
  }
  else if (*(longlong *)(*param_1 + 0x20) == 0) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      FID_conflict__assert((wchar_t *)s_c_143cbeb38,(wchar_t *)s_D_143cbea60,0xcd);
    }
    if (param_8 < *(byte *)(param_1 + 0x48)) {
      FUN_142afa690(0x1e,0,0x65,s_D__a_1_s_target_release_build_bo_143cbeb60,0xd0);
    }
    else {
      param_8 = param_8 - *(byte *)(param_1 + 0x48);
      if (param_4 < param_8) {
        FUN_142afa690(0x1e,0,0x67,s_D__a_1_s_target_release_build_bo_143cbebd0,0xd6);
      }
      else {
        iVar1 = FUN_142b3cfd0(param_1,param_2,param_5,param_6,param_7,param_8,param_7 + param_8,
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
  FUN_142b134e0(param_2,0,param_4);
  *param_3 = 0;
  return 0;
}


/* address=142b3cdd0 name=FUN_142b3cdd0 */

undefined8
FUN_142b3cdd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,longlong param_11,undefined8 param_12,
             undefined8 param_13)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  iVar1 = FUN_142b3f2c0(param_8,param_9,param_2,param_9);
  if (((iVar1 == 0) || (iVar1 = FUN_142b12fe0(param_2,param_9,param_3,param_5), iVar1 != 0)) ||
     (iVar1 = FUN_142b12fe0(param_8,param_9,param_3,param_5), iVar1 != 0)) {
    FUN_142afa690(0x1e,0,0x73,s_D__a_1_s_target_release_build_bo_143cbe910,CONCAT44(uVar2,0xa2));
  }
  else if ((*(int *)(*param_1 + 4) == 0) && (param_11 != 0)) {
    FUN_142afa690(0x1e,0,0x70,s_D__a_1_s_target_release_build_bo_143cbe980,CONCAT44(uVar2,0xa7));
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x28))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12,param_13);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_142b134e0(param_2,0,param_9);
  FUN_142b134e0(param_3,0,param_5);
  *param_4 = 0;
  return 0;
}


/* address=142b3cfd0 name=FUN_142b3cfd0 */

undefined8
FUN_142b3cfd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  iVar1 = FUN_142b3f2c0(param_5,param_6,param_2,param_6);
  if (iVar1 == 0) {
    FUN_142afa690(0x1e,0,0x73,s_D__a_1_s_target_release_build_bo_143cbec40,CONCAT44(uVar2,0xee));
  }
  else if (*(longlong *)(*param_1 + 0x30) == 0) {
    FUN_142afa690(0x1e,0,0x68,s_D__a_1_s_target_release_build_bo_143cbecb0,CONCAT44(uVar2,0xf3));
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x30))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_142b134e0(param_2,0,param_6);
  return 0;
}


/* address=142b3d110 name=FUN_142b3d110 */

undefined8 FUN_142b3d110(undefined8 *param_1)

{
  return *param_1;
}


/* address=142b3d130 name=FUN_142b3d130 */

void FUN_142b3d130(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b42be0();
  FUN_142b81a20(uVar1,&LAB_142b42c90);
  FUN_142b42bd0();
  return;
}


/* address=142b3d160 name=FUN_142b3d160 */

void FUN_142b3d160(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b42cc0();
  FUN_142b81a20(uVar1,&LAB_142b42d70);
  FUN_142b42cb0();
  return;
}


/* address=142b3d190 name=FUN_142b3d190 */

void FUN_142b3d190(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b43020();
  FUN_142b81a20(uVar1,&LAB_142b430d0);
  FUN_142b43010();
  return;
}


/* address=142b3d1c0 name=FUN_142b3d1c0 */

void FUN_142b3d1c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b43100();
  FUN_142b81a20(uVar1,&LAB_142b431b0);
  FUN_142b430f0();
  return;
}


/* address=142b3d1f0 name=FUN_142b3d1f0 */

int FUN_142b3d1f0(byte **param_1,byte *param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int iStack_18;
  
  if (param_4 == *param_2) {
    *param_1 = param_2;
    if (*(longlong *)(param_2 + 8) == 0) {
      iStack_18 = (**(code **)(param_2 + 0x10))(param_1,param_3,param_4,param_5,param_6);
    }
    else {
      iStack_18 = (**(code **)(param_2 + 8))(param_1,param_3,param_4,param_5);
    }
    if (iStack_18 == 0) {
      *param_1 = (byte *)0x0;
    }
  }
  else {
    FUN_142afa690(0x1e,0,0x78,s_D__a_1_s_target_release_build_bo_143cbe750,0x4e);
    *param_1 = (byte *)0x0;
    iStack_18 = 0;
  }
  return iStack_18;
}


/* address=142b3d2d0 name=FUN_142b3d2d0 */

undefined8 FUN_142b3d2d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

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


/* address=142b3d320 name=FUN_142b3d320 */

undefined8 FUN_142b3d320(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*param_1 + 4) == 0) && (param_4 != 0)) {
    FID_conflict__assert((wchar_t *)s_c_143cbee00,(wchar_t *)s_D_143cbed20,0x111);
  }
  if (*(longlong *)(*param_1 + 0x40) == 0) {
    if (param_4 + *(byte *)(param_1 + 0x48) < param_4) {
      FUN_142afa690(0x1e,0,0x45,s_D__a_1_s_target_release_build_bo_143cbee80,0x119);
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


/* address=142b3d450 name=FUN_142b3d450 */

void FUN_142b3d450(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b40770();
  FUN_142b81a20(uVar1,&LAB_142b40810);
  FUN_142b40760();
  return;
}


/* address=142b3d510 name=FUN_142b3d510 */

void FUN_142b3d510(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b41030();
  FUN_142b81a20(uVar1,&LAB_142b410d0);
  FUN_142b41020();
  return;
}


/* address=142b3d5a0 name=FUN_142b3d5a0 */

void FUN_142b3d5a0(undefined8 param_1)

{
  FUN_142b134e0(param_1,0,0x98);
  return;
}


/* address=142b3d610 name=FUN_142b3d610 */

undefined8 FUN_142b3d610(longlong *param_1)

{
  if ((*param_1 != 0) && (*(longlong *)(*param_1 + 0x30) != 0)) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  FUN_142b0eaa0(param_1[2]);
  FUN_142b134e0(param_1,0,0x98);
  return 1;
}


/* address=142b3d6c0 name=FUN_142b3d6c0 */

undefined8 FUN_142b3d6c0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == (longlong *)0x0) || (*param_2 == 0)) {
    FUN_142afa690(0x1e,0,0x6c,s_D__a_1_s_target_release_build_bo_143cbeef0,0x67);
    uVar2 = 0;
  }
  else if (*(int *)(param_2 + 0x12) == 0) {
    FUN_142b3d610(param_1);
    FUN_142b13440(param_1,param_2,0x98);
    if ((param_2[2] != 0) && (*(int *)(*param_2 + 0x10) != 0)) {
      uVar2 = FUN_142b0e970(*(undefined4 *)(*param_2 + 0x10));
      param_1[2] = uVar2;
      if (param_1[2] == 0) {
        *param_1 = 0;
        return 0;
      }
      FUN_142b13440(param_1[2],param_2[2],*(undefined4 *)(*param_2 + 0x10));
    }
    if (((*(uint *)(*param_2 + 0x14) & 0x1000) != 0) &&
       (iVar1 = (**(code **)(*param_2 + 0x38))(param_2,8,0,param_1), iVar1 == 0)) {
      *param_1 = 0;
      return 0;
    }
    uVar2 = 1;
  }
  else {
    FUN_142afa690(0x1e,0,0x42,s_D__a_1_s_target_release_build_bo_143cbef60,0x6c);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=142b3d860 name=FUN_142b3d860 */

undefined8
FUN_142b3d860(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
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
      FUN_142afa690(0x1e,0,0x72,s_D__a_1_s_target_release_build_bo_143cbf040,0xb8);
      return 0;
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_142b3d610(param_1);
      *(int *)((longlong)param_1 + 0x1c) = param_6;
    }
    *param_1 = param_2;
    if (*(int *)(*param_1 + 0x10) == 0) {
      param_1[2] = 0;
    }
    else {
      lVar4 = FUN_142b0e970(*(undefined4 *)(*param_1 + 0x10));
      param_1[2] = lVar4;
      if (param_1[2] == 0) {
        *param_1 = 0;
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 4) = 0;
    if (((*(uint *)(*param_1 + 0x14) & 0x200) != 0) &&
       (iVar1 = FUN_142b3eb20(param_1,0,0,0), iVar1 == 0)) {
      *param_1 = 0;
      FUN_142afa690(0x1e,0,0x6b,s_D__a_1_s_target_release_build_bo_143cbefd0,0xb3);
      return 0;
    }
  }
  if (((*(int *)(*param_1 + 4) != 1) && (*(int *)(*param_1 + 4) != 8)) &&
     (*(int *)(*param_1 + 4) != 0x10)) {
    FID_conflict__assert((wchar_t *)s_c_143cbf190,(wchar_t *)s_D_143cbf0b0,0xbe);
  }
  uVar2 = FUN_142b3eae0(param_1);
  if ((uVar2 & 0x100) == 0) {
    uVar3 = FUN_142b3eb00(param_1);
    switch(uVar3) {
    case 0:
    case 1:
      break;
    case 3:
      *(undefined4 *)(param_1 + 0xd) = 0;
    case 2:
      uVar2 = FUN_142b3ea80(param_1);
      if (0x10 < uVar2) {
        FID_conflict__assert((wchar_t *)s_E_143cbf330,(wchar_t *)s_D_143cbf250,0xcb);
      }
      if (param_5 != 0) {
        uVar3 = FUN_142b3ea80(param_1);
        FUN_142b13440((longlong)param_1 + 0x24,param_5,uVar3);
      }
      uVar3 = FUN_142b3ea80(param_1);
      FUN_142b13440((longlong)param_1 + 0x34,(longlong)param_1 + 0x24,uVar3);
      break;
    case 4:
    case 5:
      *(undefined4 *)(param_1 + 0xd) = 0;
      if (param_5 != 0) {
        uVar3 = FUN_142b3ea80(param_1);
        FUN_142b13440((longlong)param_1 + 0x34,param_5,uVar3);
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


/* address=142b3dbf0 name=FUN_142b3dbf0 */

void FUN_142b3dbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_142b3d860(param_1,param_2,param_3,param_4,param_5,1);
  return;
}


/* address=142b3dc40 name=FUN_142b3dc40 */

void FUN_142b3dc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_142b3d860(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


/* address=142b3dc90 name=FUN_142b3dc90 */

undefined8
FUN_142b3dc90(longlong *param_1,longlong param_2,int *param_3,longlong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lStackX_10;
  longlong lStackX_20;
  
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
             (iVar2 = FUN_142b3f330(param_1,param_5), iVar2 == 0)) {
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
            FID_conflict__assert((wchar_t *)s_b_143cbf7e0,(wchar_t *)s_D_143cbf700,0x134);
          }
          if (iVar2 == 0) {
            *param_3 = 0;
            lStackX_10 = param_2;
            lStackX_20 = param_4;
          }
          else {
            if (param_5 < iVar1 - iVar2) {
              FUN_142b13440((longlong)param_1 + (longlong)iVar2 + 0x44,param_4,(longlong)param_5);
              *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + param_5;
              *param_3 = 0;
              *(undefined4 *)(param_1 + 0x12) = 0;
              return 1;
            }
            iVar4 = iVar1 - iVar2;
            FUN_142b13440((longlong)param_1 + (longlong)iVar2 + 0x44,param_4,(longlong)iVar4);
            iVar2 = (**(code **)(*param_1 + 0x28))
                              (param_1,param_2,(longlong)param_1 + 0x44,(longlong)iVar1);
            if (iVar2 == 0) {
              return 0;
            }
            param_5 = param_5 - iVar4;
            lStackX_20 = param_4 + iVar4;
            lStackX_10 = param_2 + iVar1;
            *param_3 = iVar1;
          }
          iVar1 = FUN_142b3f330(param_1,param_5);
          param_5 = param_5 - iVar1;
          if (0 < param_5) {
            iVar2 = (**(code **)(*param_1 + 0x28))(param_1,lStackX_10,lStackX_20,(longlong)param_5);
            if (iVar2 == 0) {
              return 0;
            }
            *param_3 = *param_3 + param_5;
          }
          if (iVar1 != 0) {
            FUN_142b13440((longlong)param_1 + 0x44,lStackX_20 + param_5,(longlong)iVar1);
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
      FUN_142afa690(0x1e,0,0x45,s_D__a_1_s_target_release_build_bo_143cbf690,0x110);
      uVar3 = 0;
    }
  }
  else {
    FUN_142afa690(0x1e,0,0x42,s_D__a_1_s_target_release_build_bo_143cbf620,0x104);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=142b3e190 name=FUN_142b3e190 */

undefined8 FUN_142b3e190(longlong *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uStack_24;
  char cStack_18;
  
  if (*(int *)(param_1 + 0x12) == 0) {
    if ((*(uint *)(*param_1 + 0x14) & 0x400) == 0) {
      uVar1 = *(uint *)(*param_1 + 4);
      if (0x20 < uVar1) {
        FID_conflict__assert((wchar_t *)s_b_143cbf970,(wchar_t *)s_D_143cbf890,0x172);
      }
      if (uVar1 == 1) {
        *param_3 = 0;
      }
      else {
        uStack_24 = *(uint *)((longlong)param_1 + 100);
        if ((*(uint *)(param_1 + 4) & 0x800) == 0) {
          cStack_18 = (char)uVar1 - (char)uStack_24;
          for (; uStack_24 < uVar1; uStack_24 = uStack_24 + 1) {
            *(char *)((longlong)param_1 + (ulonglong)uStack_24 + 0x44) = cStack_18;
          }
          iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,(longlong)param_1 + 0x44,uVar1);
          if (iVar2 == 0) {
            return 0;
          }
          *param_3 = uVar1;
        }
        else {
          if (uStack_24 != 0) {
            FUN_142afa690(0x1e,0,0x6a,s_D__a_1_s_target_release_build_bo_143cbf9a0,0x17b);
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
    FUN_142b1cee0(param_1);
    uVar3 = 1;
  }
  else {
    FUN_142afa690(0x1e,0,0x42,s_D__a_1_s_target_release_build_bo_143cbf820,0x161);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=142b3e380 name=FUN_142b3e380 */

ulonglong FUN_142b3e380(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4,
                       int param_5)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong lStackX_10;
  
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
            FID_conflict__assert((wchar_t *)s_b_143cbfbd0,(wchar_t *)s_D_143cbfaf0,0x1b3);
          }
          bVar4 = *(int *)((longlong)param_1 + 0x6c) != 0;
          lStackX_10 = param_2;
          if (bVar4) {
            FUN_142b13440(param_2,param_1 + 0xe,uVar1);
            lStackX_10 = param_2 + (ulonglong)uVar1;
          }
          iVar2 = FUN_142b3dc90(param_1,lStackX_10,param_3,param_4,param_5);
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
              FUN_142b13440(param_1 + 0xe,lStackX_10 + *param_3,uVar1);
            }
            if (bVar4) {
              *param_3 = *param_3 + uVar1;
            }
            uVar3 = 1;
          }
        }
        else {
          uVar3 = FUN_142b3dc90(param_1,param_2,param_3,param_4,param_5);
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
      FUN_142afa690(0x1e,0,0x45,s_D__a_1_s_target_release_build_bo_143cbfa80,0x19b);
      uVar3 = 0;
    }
  }
  else {
    FUN_142afa690(0x1e,0,0x42,s_D__a_1_s_target_release_build_bo_143cbfa10,0x193);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=142b3e650 name=FUN_142b3e650 */

undefined8 FUN_142b3e650(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iStack_18;
  uint uStack_10;
  
  *param_3 = 0;
  if (*(int *)(param_1 + 0x12) != 0) {
    FUN_142afa690(0x1e,0,0x42,s_D__a_1_s_target_release_build_bo_143cbfc00,0x1d6);
    return 0;
  }
  if ((*(uint *)(*param_1 + 0x14) & 0x400) == 0) {
    uStack_10 = *(uint *)(*param_1 + 4);
    if ((*(uint *)(param_1 + 4) & 0x800) == 0) {
      if (uStack_10 < 2) {
        *param_3 = 0;
      }
      else {
        if ((*(int *)((longlong)param_1 + 100) != 0) || (*(int *)((longlong)param_1 + 0x6c) == 0)) {
          FUN_142afa690(0x1e,0,0x7b,s_D__a_1_s_target_release_build_bo_143cbfce0,0x1f0);
          return 0;
        }
        if (0x20 < uStack_10) {
          FID_conflict__assert((wchar_t *)s_b_143cbfe30,(wchar_t *)s_D_143cbfd50,499);
        }
        uVar2 = (uint)*(byte *)((longlong)param_1 + (ulonglong)(uStack_10 - 1) + 0x70);
        if ((uVar2 == 0) || ((int)uStack_10 < (int)uVar2)) {
          FUN_142afa690(0x1e,0,0x65,s_D__a_1_s_target_release_build_bo_143cbfe60,0x1f9);
          return 0;
        }
        for (iStack_18 = 0; iStack_18 < (int)uVar2; iStack_18 = iStack_18 + 1) {
          uStack_10 = uStack_10 - 1;
          if (*(byte *)((longlong)param_1 + (ulonglong)uStack_10 + 0x70) != uVar2) {
            FUN_142afa690(0x1e,0,0x65,s_D__a_1_s_target_release_build_bo_143cbfed0,0x1ff);
            return 0;
          }
        }
        iVar1 = *(int *)(*param_1 + 4) - uVar2;
        for (iStack_18 = 0; iStack_18 < iVar1; iStack_18 = iStack_18 + 1) {
          *(undefined *)(param_2 + iStack_18) =
               *(undefined *)((longlong)param_1 + (longlong)iStack_18 + 0x70);
        }
        *param_3 = iVar1;
      }
    }
    else {
      if (*(int *)((longlong)param_1 + 100) != 0) {
        FUN_142afa690(0x1e,0,0x6a,s_D__a_1_s_target_release_build_bo_143cbfc70,0x1e7);
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
  FUN_142b1cee0(param_1);
  return 1;
}


/* address=142b3e900 name=FUN_142b3e900 */

void FUN_142b3e900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_142b3e380(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_142b3dc90(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


/* address=142b3e980 name=FUN_142b3e980 */

void FUN_142b3e980(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_142b3e650(param_1,param_2,param_3);
  }
  else {
    FUN_142b3e190(param_1,param_2,param_3);
  }
  return;
}


/* address=142b3ea40 name=FUN_142b3ea40 */

undefined4 FUN_142b3ea40(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}


/* address=142b3ea60 name=FUN_142b3ea60 */

undefined4 FUN_142b3ea60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


/* address=142b3ea80 name=FUN_142b3ea80 */

undefined4 FUN_142b3ea80(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 0xc);
}


/* address=142b3eae0 name=FUN_142b3eae0 */

uint FUN_142b3eae0(longlong *param_1)

{
  return *(uint *)(*param_1 + 0x14) & 0xffffffc0;
}


/* address=142b3eb00 name=FUN_142b3eb00 */

uint FUN_142b3eb00(longlong *param_1)

{
  return *(uint *)(*param_1 + 0x14) & 0x3f;
}


/* address=142b3eb20 name=FUN_142b3eb20 */

int FUN_142b3eb20(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (*param_1 == 0) {
    FUN_142afa690(0x1e,0,0x72,s_D__a_1_s_target_release_build_bo_143cbff40,0x263);
    iVar1 = 0;
  }
  else if (*(longlong *)(*param_1 + 0x38) == 0) {
    FUN_142afa690(0x1e,0,0x68,s_D__a_1_s_target_release_build_bo_143cbffb0,0x268);
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4);
    if (iVar1 == -1) {
      FUN_142afa690(0x1e,0,0x69,s_D__a_1_s_target_release_build_bo_143cc0020,0x26e);
      iVar1 = 0;
    }
  }
  return iVar1;
}


/* address=142b3ec00 name=FUN_142b3ec00 */

undefined8 FUN_142b3ec00(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x800;
  }
  else {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffff7ff;
  }
  return 1;
}


/* address=142b3ecd0 name=FUN_142b3ecd0 */

undefined4 FUN_142b3ecd0(undefined4 *param_1)

{
  return *param_1;
}


/* address=142b3ecf0 name=FUN_142b3ecf0 */

undefined4 FUN_142b3ecf0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


/* address=142b3ed10 name=FUN_142b3ed10 */

undefined4 FUN_142b3ed10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


/* address=142b3ed30 name=FUN_142b3ed30 */

undefined4 FUN_142b3ed30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


/* address=142b3ed90 name=FUN_142b3ed90 */

void FUN_142b3ed90(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  if (param_2 != 0) {
    FUN_142b3d5a0(param_1);
  }
  FUN_142b3d860(param_1,param_2,0,param_3,param_4,param_5);
  return;
}


/* address=142b3ef50 name=FUN_142b3ef50 */

int FUN_142b3ef50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4);
  if (((*(uint *)(*param_1 + 0x14) & 0x400) == 0) && (iVar1 != 0)) {
    FUN_142b1cee0(param_1);
  }
  return iVar1;
}


/* address=142b3f070 name=FUN_142b3f070 */

void FUN_142b3f070(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b40bd0();
  FUN_142b81a20(uVar1,&LAB_142b40c70);
  FUN_142b40bc0();
  return;
}


/* address=142b3f140 name=FUN_142b3f140 */

undefined *
FUN_142b3f140(undefined8 param_1,longlong param_2,code **param_3,undefined8 param_4,longlong param_5
             )

{
  int iVar1;
  undefined *puVar2;
  
  if (((param_5 != 0x10) && (param_5 != 0x18)) && (param_5 != 0x20)) {
    FID_conflict__assert((wchar_t *)s_k_143cc0350,(wchar_t *)s_D_143cc0270,0x126);
  }
  iVar1 = FUN_142b14930();
  if (iVar1 == 0) {
    iVar1 = FUN_142b14950();
    if (iVar1 == 0) {
      FUN_142b149d0(param_4,(int)param_5 << 3,param_1);
      if (param_2 != 0) {
        FUN_142b15990(param_2,param_1,FUN_142b14a90,0);
      }
      if (param_3 != (code **)0x0) {
        *param_3 = FUN_142b14a90;
      }
      puVar2 = &LAB_142b14bf0;
    }
    else {
      FUN_1426f7090(param_4,(int)param_5 << 3,param_1);
      if (param_3 != (code **)0x0) {
        *param_3 = FUN_1426f7260;
      }
      if (param_2 != 0) {
        FUN_142b15990(param_2,param_1,FUN_1426f7260,0);
      }
      puVar2 = &DAT_1426f7560;
    }
  }
  else {
    FUN_1426f5fa0(param_4,(int)param_5 << 3,param_1);
    if (param_2 != 0) {
      FUN_142b15990(param_2,param_1,FUN_1426f3d40,1);
    }
    if (param_3 != (code **)0x0) {
      *param_3 = FUN_1426f3d40;
    }
    puVar2 = &DAT_1426f4aa0;
  }
  return puVar2;
}


/* address=142b3f2c0 name=FUN_142b3f2c0 */

bool FUN_142b3f2c0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_142b12fe0(param_1,param_2,param_3,param_4);
  return iVar1 == 0 || param_1 == param_3;
}


/* address=142b3f330 name=FUN_142b3f330 */

uint FUN_142b3f330(longlong *param_1,uint param_2)

{
  if (*(int *)(*param_1 + 4) == 0) {
    FID_conflict__assert((wchar_t *)s_c_143cbf480,(wchar_t *)s_D_143cbf3a0,0xfc);
  }
  if ((*(uint *)(*param_1 + 4) & *(int *)(*param_1 + 4) - 1U) != 0) {
    FID_conflict__assert((wchar_t *)s___143cbf5a0,(wchar_t *)s_D_143cbf4c0,0xfd);
  }
  return param_2 & *(int *)(*param_1 + 4) - 1U;
}


/* address=142b3fb70 name=FUN_142b3fb70 */

longlong FUN_142b3fb70(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(*param_1 + 0x10) != 0x2a8) {
    FID_conflict__assert((wchar_t *)s_c_143cc04c0,(wchar_t *)s_D_143cc03e0,0x15c);
  }
  uVar1 = param_1[2];
  if (uVar1 % 8 != 0) {
    FID_conflict__assert((wchar_t *)s___143cc0640,(wchar_t *)s_D_143cc0560,0x163);
  }
  return uVar1 + (uVar1 & 8);
}


/* address=142b40760 name=FUN_142b40760 */

undefined * FUN_142b40760(void)

{
  return &DAT_143d02b80;
}


/* address=142b40770 name=FUN_142b40770 */

undefined * FUN_142b40770(void)

{
  return &DAT_143d02bc0;
}


/* address=142b40780 name=FUN_142b40780 */

void FUN_142b40780(undefined4 *param_1)

{
  FUN_142cbda60(param_1,0,0x40);
  *param_1 = 0x1a3;
  param_1[1] = 0x10;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 2;
  *(undefined **)(param_1 + 8) = &LAB_142b3f3c0;
  *(undefined **)(param_1 + 10) = &LAB_142b3f7f0;
  return;
}


/* address=142b40830 name=FUN_142b40830 */

undefined * FUN_142b40830(void)

{
  return &DAT_143d02bd0;
}


/* address=142b40840 name=FUN_142b40840 */

undefined * FUN_142b40840(void)

{
  return &DAT_143d02bc8;
}


/* address=142b40850 name=FUN_142b40850 */

void FUN_142b40850(undefined4 *param_1)

{
  FUN_142cbda60(param_1,0,0x40);
  *param_1 = 0x388;
  param_1[1] = 1;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 5;
  *(undefined **)(param_1 + 8) = &LAB_142b3f3c0;
  *(undefined **)(param_1 + 10) = &LAB_142b3f9f0;
  return;
}


/* address=142b40900 name=FUN_142b40900 */

undefined * FUN_142b40900(void)

{
  return &DAT_143d02c10;
}


/* address=142b40910 name=FUN_142b40910 */

undefined * FUN_142b40910(void)

{
  return &DAT_143d02c50;
}


/* address=142b40920 name=FUN_142b40920 */

void FUN_142b40920(undefined4 *param_1)

{
  FUN_142cbda60(param_1,0,0x40);
  *param_1 = 0x1a2;
  param_1[1] = 0x10;
  param_1[2] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 1;
  *(undefined **)(param_1 + 8) = &LAB_142b3f3c0;
  *(undefined **)(param_1 + 10) = &LAB_142b3f900;
  return;
}


/* address=142b409d0 name=FUN_142b409d0 */

void FUN_142b409d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142b40910();
  FUN_142b81a20(uVar1,&LAB_142b409b0);
  FUN_142b40900();
  return;
}


/* address=142b40a00 name=FUN_142b40a00 */

undefined * FUN_142b40a00(void)

{
  return &DAT_143d02c60;
}


/* address=142b40a10 name=FUN_142b40a10 */

undefined * FUN_142b40a10(void)

{
  return &DAT_143d02c58;
}


/* address=142b40a20 name=FUN_142b40a20 */

void FUN_142b40a20(undefined4 *param_1)

{
  FUN_142cbda60(param_1,0,0x40);
  *param_1 = 0x1a4;
  param_1[1] = 1;
  param_1[2] = 0x10;
  param_1[3] = 0x10;
  param_1[4] = 0x108;
  param_1[5] = 4;
  *(undefined **)(param_1 + 8) = &LAB_142b3f3c0;
  *(undefined **)(param_1 + 10) = &LAB_142b3faf0;
  return;
}


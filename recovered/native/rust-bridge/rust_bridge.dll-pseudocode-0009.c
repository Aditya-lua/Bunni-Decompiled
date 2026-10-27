/* Reconstructed Ghidra pseudocode, not original Cloudflare source. */


/* address=1805ea7f0 name=FUN_1805ea7f0 */

void FUN_1805ea7f0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1805214c0(param_1);
    FUN_1805ea970(uVar1,*param_1);
  }
  return;
}


/* address=1805ea830 name=FUN_1805ea830 */

void FUN_1805ea830(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1805214c0(param_1);
    FUN_1805ea970(uVar2,p_Var1);
  }
  return;
}


/* address=1805ea880 name=FUN_1805ea880 */

undefined8 FUN_1805ea880(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_1805ea920();
  uVar1 = FUN_180521630(local_18,uVar1);
  FUN_180521660(param_1,uVar1);
  FUN_1805ea7f0(local_18);
  return param_1;
}


/* address=1805ea8c0 name=FUN_1805ea8c0 */

undefined8
FUN_1805ea8c0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_1805ea830(param_1,p_Var1);
  uVar2 = FUN_1805214c0(param_2);
  FUN_1805214c0(uVar2);
  FUN_1805214c0(param_1);
  return param_1;
}


/* address=1805ea920 name=FUN_1805ea920 */

undefined8 FUN_1805ea920(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18058f4e0(0x18);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805213c0(0x18,lVar1);
    uVar2 = FUN_1805ea760(uVar2);
  }
  return uVar2;
}


/* address=1805ea970 name=FUN_1805ea970 */

void FUN_1805ea970(undefined8 param_1,undefined8 param_2)

{
  FUN_1805ea990(param_2);
  return;
}


/* address=1805ea990 name=FUN_1805ea990 */

void FUN_1805ea990(undefined8 param_1)

{
  FUN_1805ea9b0(param_1);
  return;
}


/* address=1805ea9b0 name=FUN_1805ea9b0 */

void FUN_1805ea9b0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1805ea7b0(param_1,0);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=1805ea9e0 name=FUN_1805ea9e0 */

undefined8 FUN_1805ea9e0(longlong param_1)

{
  FUN_18059afb0(param_1 + 0x18);
  return 1;
}


/* address=1805eaa40 name=FUN_1805eaa40 */

undefined8 FUN_1805eaa40(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x18);
}


/* address=1805eaa60 name=FUN_1805eaa60 */

undefined8 FUN_1805eaa60(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x20);
}


/* address=1805eaa80 name=FUN_1805eaa80 */

undefined8 FUN_1805eaa80(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x10);
}


/* address=1805eaaa0 name=FUN_1805eaaa0 */

undefined8 FUN_1805eaaa0(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x28);
}


/* address=1805eab90 name=FUN_1805eab90 */

undefined8 FUN_1805eab90(longlong **param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong **)0x0) {
    uVar1 = 0;
  }
  else if ((param_2 < 0) || (1 < param_2)) {
    FUN_18050f6f0(0xb,0,0x8c,s_D__a_1_s_target_x86_64_pc_window_1809776c0,0x48);
    uVar1 = 0;
  }
  else if (param_2 == 0) {
    FUN_1805118a0(**param_1);
    **param_1 = 0;
    uVar1 = 1;
  }
  else {
    if (**param_1 == 0) {
      lVar2 = FUN_180511880();
      **param_1 = lVar2;
      if (**param_1 == 0) {
        return 0;
      }
    }
    uVar1 = FUN_1805124e0(**param_1,(longlong)param_2);
  }
  return uVar1;
}


/* address=1805eac60 name=FUN_1805eac60 */

undefined8 FUN_1805eac60(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1805139d0(*param_1 + 0x10,param_2);
  }
  return uVar1;
}


/* address=1805eacb0 name=FUN_1805eacb0 */

bool FUN_1805eacb0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong local_10;
  
  if (param_1 == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    local_10 = *(longlong *)(*param_1 + 0x18);
    if ((local_10 != param_2) && (local_10 = FUN_180510690(param_2), local_10 != 0)) {
      FUN_180513050(*(undefined8 *)(*param_1 + 0x18));
      *(longlong *)(*param_1 + 0x18) = local_10;
    }
    bVar1 = local_10 != 0;
  }
  return bVar1;
}


/* address=1805ead50 name=FUN_1805ead50 */

bool FUN_1805ead50(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong local_10;
  
  if (param_1 == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    local_10 = *(longlong *)(*param_1 + 0x20);
    if ((local_10 != param_2) && (local_10 = FUN_180510690(param_2), local_10 != 0)) {
      FUN_180513050(*(undefined8 *)(*param_1 + 0x20));
      *(longlong *)(*param_1 + 0x20) = local_10;
    }
    bVar1 = local_10 != 0;
  }
  return bVar1;
}


/* address=1805eaff0 name=FUN_1805eaff0 */

void FUN_1805eaff0(undefined8 param_1)

{
  FUN_1805159a0(param_1,&LAB_1805eafa0);
  return;
}


/* address=1805eb270 name=FUN_1805eb270 */

void FUN_1805eb270(void)

{
  FUN_180514f00();
  return;
}


/* address=1805eb290 name=FUN_1805eb290 */

void FUN_1805eb290(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=1805eb2b0 name=FUN_1805eb2b0 */

void FUN_1805eb2b0(undefined8 param_1)

{
  FUN_180515030(param_1);
  return;
}


/* address=1805eb2d0 name=FUN_1805eb2d0 */

void FUN_1805eb2d0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_1805eb210,param_2);
  return;
}


/* address=1805eb300 name=FUN_1805eb300 */

void FUN_1805eb300(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=1805eb330 name=FUN_1805eb330 */

void FUN_1805eb330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180515b00(param_1,&LAB_1805eb240,param_2,&LAB_1805eb210,param_3);
  return;
}


/* address=1805eb3e0 name=FUN_1805eb3e0 */

void FUN_1805eb3e0(void)

{
  FUN_180514f00();
  return;
}


/* address=1805eb400 name=FUN_1805eb400 */

void FUN_1805eb400(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_1805eb380,param_2);
  return;
}


/* address=1805eb430 name=FUN_1805eb430 */

void FUN_1805eb430(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=1805eb460 name=FUN_1805eb460 */

void FUN_1805eb460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180515b00(param_1,&LAB_1805eb3b0,param_2,&LAB_1805eb380,param_3);
  return;
}


/* address=1805eb4b0 name=FUN_1805eb4b0 */

longlong FUN_1805eb4b0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18058f4e0(0x70);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1805ebee0(lVar1,0,0x70);
    FUN_1805ec090(lVar1);
  }
  return lVar1;
}


/* address=1805eb500 name=FUN_1805eb500 */

void FUN_1805eb500(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1805ec090(param_1);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=1805eb540 name=FUN_1805eb540 */

undefined8 FUN_1805eb540(longlong param_1,longlong param_2)

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
          )) && (iVar2 = FUN_1805ebb30(param_1,*(undefined8 *)(param_2 + 0x28)), iVar2 == 0)) {
        uVar3 = 0;
      }
      else {
        if ((bVar5) ||
           ((*(longlong *)(param_2 + 0x30) != 0 && ((bVar4 || (*(longlong *)(param_1 + 0x30) == 0)))
            ))) {
          if (*(longlong *)(param_1 + 0x30) != 0) {
            FUN_1805eb2d0(*(undefined8 *)(param_1 + 0x30),&LAB_1805ebf20);
            *(undefined8 *)(param_1 + 0x30) = 0;
          }
          if (*(longlong *)(param_2 + 0x30) != 0) {
            uVar3 = FUN_1805eb330(*(undefined8 *)(param_2 + 0x30),FUN_18058f930,&LAB_1805ebf20);
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
           (iVar2 = FUN_1805ebca0(param_1,*(undefined8 *)(param_2 + 0x48),
                                  *(undefined8 *)(param_2 + 0x50)), iVar2 == 0)) {
          uVar3 = 0;
        }
        else if (((bVar5) ||
                 ((*(longlong *)(param_2 + 0x58) != 0 &&
                  ((bVar4 || (*(longlong *)(param_1 + 0x58) == 0)))))) &&
                (iVar2 = FUN_1805ebd10(param_1,*(undefined8 *)(param_2 + 0x58),
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


/* address=1805eb890 name=FUN_1805eb890 */

undefined4 FUN_1805eb890(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  uVar2 = FUN_1805eb540(param_1,param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return uVar2;
}


/* address=1805eb950 name=FUN_1805eb950 */

undefined8 FUN_1805eb950(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return 1;
}


/* address=1805eb9d0 name=FUN_1805eb9d0 */

void FUN_1805eb9d0(longlong param_1,undefined4 param_2)

{
  FUN_180616210(param_1 + 0x18,param_2);
  return;
}


/* address=1805eba00 name=FUN_1805eba00 */

void FUN_1805eba00(longlong param_1,undefined4 param_2)

{
  FUN_18063ad10(param_1 + 0x1c,param_2);
  return;
}


/* address=1805eba30 name=FUN_1805eba30 */

void FUN_1805eba30(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}


/* address=1805eba80 name=FUN_1805eba80 */

void FUN_1805eba80(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 2;
  return;
}


/* address=1805ebb30 name=FUN_1805ebb30 */

undefined8 FUN_1805ebb30(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1805eb400(*(undefined8 *)(param_1 + 0x28),FUN_1805eec50);
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_1805eb460(param_2,FUN_1805a8890,FUN_1805eec50);
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


/* address=1805ebbc0 name=FUN_1805ebbc0 */

bool FUN_1805ebbc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1805ebf40(param_1,0,param_2,param_3);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x68) = 1;
  }
  return iVar1 != 0;
}


/* address=1805ebc60 name=FUN_1805ebc60 */

void FUN_1805ebc60(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}


/* address=1805ebca0 name=FUN_1805ebca0 */

undefined8 FUN_1805ebca0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1805ebea0(param_2,0,param_3);
  if ((lVar2 == 0) &&
     (iVar1 = FUN_1805ec1f0(param_1 + 0x48,param_1 + 0x50,param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  *(undefined *)(param_1 + 0x68) = 1;
  return 0;
}


/* address=1805ebd10 name=FUN_1805ebd10 */

undefined8 FUN_1805ebd10(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (((param_3 == 4) || (param_3 == 0x10)) &&
     (iVar1 = FUN_1805ec1f0(param_1 + 0x58,param_1 + 0x60,param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  *(undefined *)(param_1 + 0x68) = 1;
  return 0;
}


/* address=1805ebdf0 name=FUN_1805ebdf0 */

undefined4 FUN_1805ebdf0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


/* address=1805ebe30 name=FUN_1805ebe30 */

undefined ** FUN_1805ebe30(char *param_1)

{
  int iVar1;
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (4 < local_18) {
      return (undefined **)0x0;
    }
    iVar1 = strcmp((&PTR_s_default_1807a3340)[local_18 * 0xe],param_1);
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return &PTR_s_default_1807a3340 + local_18 * 0xe;
}


/* address=1805ebea0 name=FUN_1805ebea0 */

undefined8 FUN_1805ebea0(undefined8 param_1,undefined4 param_2,longlong param_3)

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


/* address=1805ebee0 name=FUN_1805ebee0 */

undefined8 FUN_1805ebee0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805ebf40 name=FUN_1805ebf40 */

undefined8 FUN_1805ebf40(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar3 = 0;
  }
  else {
    if ((param_3 != 0) && (lVar1 = FUN_1805ebea0(param_3,0,param_4), lVar1 != 0)) {
      return 0;
    }
    if ((param_2 == 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_1805eb2d0(*(undefined8 *)(param_1 + 0x30),&LAB_1805ebf20);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    lVar1 = FUN_18058fef0(param_3,param_4);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar2 = FUN_1805eb270();
        *(longlong *)(param_1 + 0x30) = lVar2;
        if (lVar2 == 0) {
          FUN_18058f610(lVar1);
          return 0;
        }
      }
      lVar2 = FUN_1805eb300(*(undefined8 *)(param_1 + 0x30),lVar1);
      if (lVar2 == 0) {
        FUN_18058f610(lVar1);
        lVar1 = FUN_1805eb290(*(undefined8 *)(param_1 + 0x30));
        if (lVar1 == 0) {
          FUN_1805eb2b0(*(undefined8 *)(param_1 + 0x30));
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


/* address=1805ec090 name=FUN_1805ec090 */

void FUN_1805ec090(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    if (param_1[5] != 0) {
      FUN_1805eb400(param_1[5],FUN_1805eec50);
      param_1[5] = 0;
    }
    if (param_1[6] != 0) {
      FUN_1805eb2d0(param_1[6],&LAB_1805ebf20);
      param_1[6] = 0;
    }
    if (param_1[8] != 0) {
      FUN_18058f610(param_1[8]);
      param_1[8] = 0;
    }
    if (param_1[9] != 0) {
      FUN_18058f610(param_1[9]);
      param_1[9] = 0;
      param_1[10] = 0;
    }
    if (param_1[0xb] != 0) {
      FUN_18058f610(param_1[0xb]);
      param_1[0xb] = 0;
      param_1[0xc] = 0;
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return;
}


/* address=1805ec1f0 name=FUN_1805ec1f0 */

undefined8 FUN_1805ec1f0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_18058ffb0(param_3,param_4);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (*param_1 != 0) {
        FUN_18058f610(*param_1);
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


/* address=1805ec290 name=FUN_1805ec290 */

undefined * FUN_1805ec290(void)

{
  return &DAT_1807a3570;
}


/* address=1805ec2c0 name=FUN_1805ec2c0 */

undefined * FUN_1805ec2c0(void)

{
  return &DAT_1807a36b0;
}


/* address=1805ec2e0 name=FUN_1805ec2e0 */

undefined * FUN_1805ec2e0(void)

{
  return &DAT_1807a35f0;
}


/* address=1805eca20 name=FUN_1805eca20 */

ulonglong FUN_1805eca20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  lVar3 = FUN_1805743d0(param_2,param_3,param_6);
  if (lVar3 == 0) {
    *param_5 = 0;
  }
  else {
    uVar4 = FUN_1805ecc90(param_6);
    FUN_180590680(local_40,param_4,uVar4);
    iVar1 = FUN_1805ece80(local_40,lVar3);
    if ((iVar1 == 0) || (iVar1 = FUN_180590740(local_40,0,local_48), iVar1 == 0)) {
      FUN_18050f6f0(0x1a,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180977950,CONCAT44(uVar5,0x58));
      *param_5 = 0;
    }
    else {
      *param_5 = local_48[0];
      local_58 = 1;
    }
  }
  FUN_180574280(lVar3);
  return (ulonglong)local_58;
}


/* address=1805ecb90 name=FUN_1805ecb90 */

undefined4
FUN_1805ecb90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined8 local_18;
  longlong local_10 [2];
  
  local_28 = 0;
  local_18 = 0;
  lVar2 = FUN_1805ecdf0(param_4,param_5);
  if (lVar2 != 0) {
    iVar1 = FUN_1805ecf20(&local_18,local_10,lVar2);
    if (((iVar1 == 0) || (local_10[0] != param_5)) ||
       (iVar1 = FUN_1805ed150(param_4,local_18,param_5), iVar1 != 0)) {
      FUN_18050f6f0(0x1a,0,0x44,s_D__a_1_s_target_x86_64_pc_window_1809779e0,0x75);
    }
    else {
      local_28 = FUN_180574610(param_2,param_3,lVar2,param_6);
    }
  }
  FUN_18058f610(local_18);
  FUN_180574280(lVar2);
  return local_28;
}


/* address=1805ecc90 name=FUN_1805ecc90 */

undefined8 FUN_1805ecc90(longlong param_1)

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
      lVar2 = FUN_18056d800(param_1);
      if (lVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_18056ba50(lVar2);
      uVar1 = FUN_18053db00(uVar3);
      local_10 = (ulonglong)uVar1;
    }
    else {
      local_10 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(param_1);
    }
    uVar3 = FUN_1805ecfc0(local_10);
  }
  return uVar3;
}


/* address=1805ecd30 name=FUN_1805ecd30 */

undefined8 * FUN_1805ecd30(wchar_t *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  wchar_t *local_20 [4];
  
  puVar3 = (undefined8 *)FUN_180574210();
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar1 = wcstoul(param_1,local_20,0x20000010);
    if ((((uVar1 == 0) || (iVar2 = FUN_180615bd0(local_20,*puVar3), iVar2 == 0)) ||
        (iVar2 = FUN_180615bd0(local_20,puVar3[1]), iVar2 == 0)) ||
       (lVar4 = FUN_18059e7c0(local_20), lVar4 != 0)) {
      FUN_18050f6f0(0x1a,0,100,s_D__a_1_s_target_x86_64_pc_window_180977a70,0xa0);
      FUN_180574280(puVar3);
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}


/* address=1805ecdf0 name=FUN_1805ecdf0 */

longlong FUN_1805ecdf0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined local_20 [32];
  
  FUN_18059e730(local_20,param_1,param_2);
  lVar1 = FUN_1805ecd30(local_20);
  if ((lVar1 == 0) || (lVar2 = FUN_18059e7c0(local_20), lVar2 != 0)) {
    FUN_18050f6f0(0x1a,0,100,s_D__a_1_s_target_x86_64_pc_window_180977b00,0xac);
    FUN_180574280(lVar1);
    lVar1 = 0;
  }
  return lVar1;
}


/* address=1805ece80 name=FUN_1805ece80 */

undefined8 FUN_1805ece80(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_180590d60(param_1,local_38,0x20000010);
  if ((((iVar1 != 0) && (iVar1 = FUN_180615cb0(local_38,*param_2), iVar1 != 0)) &&
      (iVar1 = FUN_180615cb0(local_38,param_2[1]), iVar1 != 0)) &&
     (iVar1 = FUN_180590820(param_1), iVar1 != 0)) {
    return 1;
  }
  FUN_18050f6f0(0x1a,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180977b90,0xb9);
  return 0;
}


/* address=1805ecf20 name=FUN_1805ecf20 */

undefined8 FUN_1805ecf20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined local_38 [56];
  
  FUN_1805905e0(local_38);
  iVar1 = FUN_180590610(local_38,0);
  if (((iVar1 != 0) && (iVar1 = FUN_1805ece80(local_38,param_3), iVar1 != 0)) &&
     (iVar1 = FUN_180590740(local_38,param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  FUN_18050f6f0(0x1a,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180977c20,0xc6);
  FUN_1805906d0(local_38);
  return 0;
}


/* address=1805ecfc0 name=FUN_1805ecfc0 */

ulonglong FUN_1805ecfc0(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_1805ed190(param_1 + 1);
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
      lVar1 = FUN_1805ed190(uVar3);
      uVar2 = lVar1 + 1 + uVar3;
      if (uVar2 < uVar3) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


/* address=1805ed150 name=FUN_1805ed150 */

int FUN_1805ed150(void *param_1,void *param_2,size_t param_3)

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


/* address=1805ed190 name=FUN_1805ed190 */

longlong FUN_1805ed190(ulonglong param_1)

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


/* address=1805ed1e0 name=FUN_1805ed1e0 */

void FUN_1805ed1e0(undefined8 param_1,undefined4 param_2)

{
  FUN_180588680(param_1,6,0xffffffff,0x1001,param_2,0);
  return;
}


/* address=1805ed230 name=FUN_1805ed230 */

void FUN_1805ed230(undefined8 param_1,undefined8 param_2)

{
  FUN_180588680(param_1,6,0xffffffff,0x1002,0,param_2);
  return;
}


/* address=1805ed280 name=FUN_1805ed280 */

void FUN_1805ed280(undefined8 param_1,undefined4 param_2)

{
  FUN_180588680(param_1,6,0x18,0x1003,param_2,0);
  return;
}


/* address=1805ed2d0 name=FUN_1805ed2d0 */

void FUN_1805ed2d0(undefined8 param_1,undefined8 param_2)

{
  FUN_180588680(param_1,6,0x18,0x1004,0,param_2);
  return;
}


/* address=1805ed460 name=FUN_1805ed460 */

void FUN_1805ed460(undefined8 param_1,undefined8 param_2)

{
  FUN_180588680(param_1,6,0xf8,0x1009,0,param_2);
  return;
}


/* address=1805ed4b0 name=FUN_1805ed4b0 */

void FUN_1805ed4b0(undefined8 param_1,undefined8 param_2)

{
  FUN_180588680(param_1,6,0xf8,0x100a,0,param_2);
  return;
}


/* address=1805ed670 name=FUN_1805ed670 */

undefined8 FUN_1805ed670(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805ed6c0 name=FUN_1805ed6c0 */

undefined8 FUN_1805ed6c0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805ed700 name=FUN_1805ed700 */

bool FUN_1805ed700(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_18058f4e0(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1805ed6c0(puVar1,0,0x48);
    *puVar1 = 0x800;
    puVar1[4] = 1;
    puVar1[10] = 0xfffffffe;
    *(undefined4 **)(param_1 + 0x28) = puVar1;
  }
  return puVar1 != (undefined4 *)0x0;
}


/* address=1805ed930 name=FUN_1805ed930 */

undefined8 FUN_1805ed930(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    iVar1 = FUN_18050dc90(*(undefined8 *)(param_2 + 0x10));
    uVar2 = FUN_18058f4e0((longlong)iVar1);
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


/* address=1805ee3f0 name=FUN_1805ee3f0 */

undefined8 FUN_1805ee3f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else if (param_2 == 3) {
    FUN_18050f6f0(6,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180977eb0,0x179);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=1805ee450 name=FUN_1805ee450 */

undefined8 FUN_1805ee450(int param_1)

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


/* address=1805eea20 name=FUN_1805eea20 */

undefined8 FUN_1805eea20(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar2 = FUN_180648ae0();
    lVar3 = FUN_180525300(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_180525570(lVar3,1,param_2,1,0);
    if (iVar1 != 1) {
      return 0;
    }
  }
  if (param_3 != 0) {
    uVar2 = FUN_180647b80();
    lVar3 = FUN_180525300(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_180525570(lVar3,2,param_3,1,0);
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


/* address=1805eeb10 name=FUN_1805eeb10 */

undefined8 FUN_1805eeb10(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180648ae0();
  lVar2 = FUN_180525300(param_1,uVar1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_180525570(lVar2,1,0,3,0);
    uVar1 = FUN_180647b80();
    lVar2 = FUN_180525300(param_1,uVar1);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      FUN_180525570(lVar2,2,0,3,0);
      FUN_18050f390();
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=1805eebb0 name=FUN_1805eebb0 */

undefined8
FUN_1805eebb0(undefined4 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
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
    uVar1 = FUN_1805a8890(&local_38);
  }
  else {
    FUN_18050f6f0(0xc,0,0xad,s_D__a_1_s_target_x86_64_pc_window_180978800,0xde);
    uVar1 = 0;
  }
  return uVar1;
}


/* address=1805eec50 name=FUN_1805eec50 */

void FUN_1805eec50(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((*(uint *)(param_1 + 4) & 4) != 0) {
      FUN_18058f610(*param_1);
      FUN_18058f610(param_1[1]);
      param_1[1] = 0;
      *param_1 = 0;
    }
    if ((*(uint *)(param_1 + 4) & 8) != 0) {
      FUN_18058f610(param_1[3]);
      param_1[3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      FUN_18058f610(param_1);
    }
  }
  return;
}


/* address=1805eef40 name=FUN_1805eef40 */

longlong FUN_1805eef40(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar3;
  undefined local_20 [32];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (param_3 < 0) {
    FUN_18050f6f0(0xc,0,0x92,s_D__a_1_s_target_x86_64_pc_window_180978700,CONCAT44(uVar3,0x9f));
    lVar2 = 0;
  }
  else {
    FUN_18059e730(local_20,*param_2,(longlong)param_3);
    iVar1 = FUN_18059f9c0(local_20);
    if (iVar1 == 0) {
      FUN_18050f6f0(0xc,0,0x92,s_D__a_1_s_target_x86_64_pc_window_180978780,CONCAT44(uVar3,0xa6));
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_1805eebb0(0,*param_2,(longlong)param_3,0,0);
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        if (param_1 != (longlong *)0x0) {
          FUN_1805eec50(*param_1);
          *param_1 = lVar2;
        }
        *param_2 = (longlong)param_3 + *param_2;
      }
    }
  }
  return lVar2;
}


/* address=1805ef050 name=FUN_1805ef050 */

void FUN_1805ef050(undefined8 param_1,longlong param_2)

{
  undefined auStack_a8 [32];
  int local_88;
  char *local_80;
  undefined4 local_78;
  char *local_70;
  char local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    FUN_1805ef240(param_1,&DAT_18097852c);
  }
  else {
    local_80 = (char *)0x0;
    local_70 = local_68;
    local_88 = FUN_1805ef180(local_68,0x50,param_2);
    if (0x4f < local_88) {
      local_80 = (char *)FUN_18058f4e0((longlong)(local_88 + 1));
      if (local_80 == (char *)0x0) goto LAB_1805ef15e;
      local_88 = FUN_1805ef180(local_80,local_88 + 1,param_2);
      local_70 = local_80;
    }
    if (local_88 < 1) {
      local_70 = s_<INVALID>_180978538;
    }
    local_78 = FUN_1805ef240(param_1,local_70);
    FUN_18058f610(local_80);
  }
LAB_1805ef15e:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=1805ef180 name=FUN_1805ef180 */

void FUN_1805ef180(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1805a90e0(param_1,param_2,param_3,0);
  return;
}


/* address=1805ef1c0 name=FUN_1805ef1c0 */

undefined8 * FUN_1805ef1c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18058f4e0(0x28);
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


/* address=1805ef240 name=FUN_1805ef240 */

int FUN_1805ef240(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int local_18;
  int local_10;
  
  sVar2 = strlen(param_2);
  if (sVar2 < 0x80000000) {
    iVar1 = FUN_18058c840(param_1,param_2,sVar2 & 0xffffffff);
    local_10 = (int)sVar2;
    local_18 = local_10;
    if (iVar1 != local_10) {
      local_18 = -1;
    }
  }
  else {
    FUN_18050f6f0(0xc,0,0x45,s_D__a_1_s_target_x86_64_pc_window_1809784b0,0x65);
    local_18 = -1;
  }
  return local_18;
}


/* address=1805ef300 name=FUN_1805ef300 */

void FUN_1805ef300(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=1805ef320 name=FUN_1805ef320 */

void FUN_1805ef320(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=1805ef350 name=FUN_1805ef350 */

void FUN_1805ef350(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_1805ef2d0,param_2);
  return;
}


/* address=1805ef3b0 name=FUN_1805ef3b0 */

void FUN_1805ef3b0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_1805ef380,param_2);
  return;
}


/* address=1805ef3e0 name=FUN_1805ef3e0 */

void FUN_1805ef3e0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  FUN_1805ef9e0(param_1,0,0x30);
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 8) = param_5;
  *(undefined8 *)(param_1 + 6) = param_4;
  *param_1 = param_6;
  return;
}


/* address=1805ef460 name=FUN_1805ef460 */

void FUN_1805ef460(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}


/* address=1805ef480 name=FUN_1805ef480 */

longlong FUN_1805ef480(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1805ef3e0(local_38,0,0,0,0,0);
    FUN_1805ef460(local_38,param_1);
    local_res10 = local_38;
  }
  uVar1 = FUN_1805efa80(&local_res20);
  iVar2 = FUN_1805efb20(&local_res20);
  if (iVar2 == 0) {
    uVar3 = FUN_1805a8c90(param_3);
    lVar4 = FUN_1805efc10(param_1,local_res10,uVar3,uVar1,local_res20);
    if (lVar4 == 0) {
      FUN_18050f6f0(0x14,0,0x6e,s_D__a_1_s_target_x86_64_pc_window_180978880,0x68);
      FUN_18050f810(4,s_name__18097890c,param_3,s___value__180978900,local_res20);
    }
  }
  else {
    lVar4 = FUN_1805eff30(param_3,local_res20,uVar1,iVar2,local_res10);
  }
  return lVar4;
}


/* address=1805ef6f0 name=FUN_1805ef6f0 */

undefined8 FUN_1805ef6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong local_30;
  
  lVar2 = FUN_1805f0480(param_1,param_3);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    for (local_30 = 0; uVar3 = FUN_1805ef300(lVar2), local_30 < uVar3; local_30 = local_30 + 1) {
      lVar4 = FUN_1805ef320(lVar2,local_30);
      lVar4 = FUN_1805ef480(param_1,param_2,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10)
                           );
      if ((lVar4 == 0) ||
         ((param_4 != 0 && (lVar5 = FUN_180618cb0(param_4,lVar4,0xffffffff), lVar5 == 0)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      FUN_1805a9c00(lVar4);
      if (!bVar1) {
        return 0;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}


/* address=1805ef970 name=FUN_1805ef970 */

undefined8 FUN_1805ef970(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1806496b0(param_1);
  if (lVar1 == 0) {
    FUN_18050f6f0(0x14,0,0x9d,s_D__a_1_s_target_x86_64_pc_window_180978c50,0xe2);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805f0100(lVar1,param_1,param_2,param_3);
  }
  return uVar2;
}


/* address=1805ef9e0 name=FUN_1805ef9e0 */

undefined8 FUN_1805ef9e0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805efa20 name=FUN_1805efa20 */

undefined8 FUN_1805efa20(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_18050f6f0(0x14,0,0x93,s_D__a_1_s_target_x86_64_pc_window_180978e90,400);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1805f0480(*(undefined8 *)(param_1 + 0x28),param_2);
  }
  return uVar1;
}


/* address=1805efa80 name=FUN_1805efa80 */

undefined8 FUN_1805efa80(char **param_1)

{
  int iVar1;
  size_t sVar2;
  char *local_18;
  
  local_18 = *param_1;
  sVar2 = strlen(local_18);
  if ((8 < sVar2) && (iVar1 = strncmp(local_18,s_critical__180978cd0,9), iVar1 == 0)) {
    local_18 = local_18 + 9;
    while (iVar1 = FUN_18058fc00(*local_18), iVar1 != 0) {
      local_18 = local_18 + 1;
    }
    *param_1 = local_18;
    return 1;
  }
  return 0;
}


/* address=1805efb20 name=FUN_1805efb20 */

undefined4 FUN_1805efb20(char **param_1)

{
  int iVar1;
  size_t sVar2;
  undefined4 local_18;
  char *local_10;
  
  local_10 = *param_1;
  sVar2 = strlen(local_10);
  if (sVar2 < 4) {
LAB_1805efb81:
    sVar2 = strlen(local_10);
    if (4 < sVar2) {
      iVar1 = strncmp(local_10,s_ASN1__180978ce4,5);
      if (iVar1 == 0) {
        local_10 = local_10 + 5;
        local_18 = 2;
        goto LAB_1805efbc8;
      }
    }
    local_18 = 0;
  }
  else {
    iVar1 = strncmp(local_10,&DAT_180978cdc,4);
    if (iVar1 != 0) goto LAB_1805efb81;
    local_10 = local_10 + 4;
    local_18 = 1;
LAB_1805efbc8:
    while( true ) {
      iVar1 = FUN_18058fc00(*local_10);
      if (iVar1 == 0) break;
      local_10 = local_10 + 1;
    }
    *param_1 = local_10;
  }
  return local_18;
}


/* address=1805efc10 name=FUN_1805efc10 */

undefined8
FUN_1805efc10(longlong param_1,longlong param_2,int param_3,undefined4 param_4,char *param_5)

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
    FUN_18050f6f0(0x14,0,0x9e,s_D__a_1_s_target_x86_64_pc_window_180978920,CONCAT44(uVar4,0x8b));
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_1806496b0(param_3);
    if (lVar1 == 0) {
      FUN_18050f6f0(0x14,0,0x9d,s_D__a_1_s_target_x86_64_pc_window_1809789a0,CONCAT44(uVar4,0x8f));
      uVar3 = 0;
    }
    else {
      if (*(longlong *)(lVar1 + 0x48) == 0) {
        if (*(longlong *)(lVar1 + 0x38) == 0) {
          if (*(longlong *)(lVar1 + 0x58) == 0) {
            FUN_18050f6f0(0x14,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180978bc0,
                          CONCAT44(uVar4,0xbd));
            uVar3 = FUN_1805a8f60(param_3);
            FUN_18050f810(2,s_name__180978c3c,uVar3);
            return 0;
          }
          if (*(longlong *)(param_2 + 0x28) == 0) {
            FUN_18050f6f0(0x14,0,0x8b,s_D__a_1_s_target_x86_64_pc_window_180978b40,
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
            FUN_18050f6f0(0x14,0,0x8b,s_D__a_1_s_target_x86_64_pc_window_180978a20,
                          CONCAT44(uVar4,0x99));
            return 0;
          }
          local_28 = FUN_1805f0480(param_1,param_5 + 1);
        }
        else {
          local_28 = FUN_18061f980(param_5);
          local_20 = local_28;
        }
        if ((local_28 == 0) || (lVar2 = FUN_1805ef300(local_28), lVar2 == 0)) {
          FUN_18050f6f0(0x14,0,0x79,s_D__a_1_s_target_x86_64_pc_window_180978aa0,
                        CONCAT44(uVar4,0xa2));
          uVar3 = FUN_1805a8f60(param_3);
          FUN_18050f810(4,s_name__180978b2c,uVar3,s__section__180978b20,param_5);
          FUN_1805ef350(local_20,&LAB_18061e370);
          return 0;
        }
        local_30 = (**(code **)(lVar1 + 0x48))(lVar1,param_2,local_28);
        FUN_1805ef350(local_20,&LAB_18061e370);
        if (local_30 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_1805f0100(lVar1,param_3,param_4,local_30);
      FUN_1805a1c20(local_30,*(undefined8 *)(lVar1 + 8));
    }
  }
  return uVar3;
}


/* address=1805eff30 name=FUN_1805eff30 */

undefined8
FUN_1805eff30(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
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
  local_20 = FUN_1805a9070(param_1,0);
  if (local_20 == 0) {
    FUN_18050f6f0(0x14,0,0x71,s_D__a_1_s_target_x86_64_pc_window_180978cf0,0x115);
    FUN_18050f810(2,s_name__180978d6c,param_1);
  }
  else {
    if (param_4 == 1) {
      local_38 = FUN_18061ef40(param_2,&local_28);
    }
    else if (param_4 == 2) {
      local_38 = FUN_1805f01b0(param_2,param_5,&local_28);
    }
    if (local_38 == 0) {
      FUN_18050f6f0(0x14,0,0x74,s_D__a_1_s_target_x86_64_pc_window_180978d80,0x121);
      FUN_18050f810(2,s_value__180978dfc,param_2);
    }
    else if (local_28 < 0x80000000) {
      local_30 = FUN_180511080();
      if (local_30 != 0) {
        FUN_180510a10(local_30,local_38,local_28 & 0xffffffff);
        local_38 = 0;
        local_18 = FUN_180618660(0,local_20,param_3,local_30);
      }
    }
    else {
      FUN_18050f6f0(0x14,0,0x45,s_D__a_1_s_target_x86_64_pc_window_180978e10,0x127);
    }
  }
  FUN_1805eec50(local_20);
  FUN_1805111a0(local_30);
  FUN_18058f610(local_38);
  return local_18;
}


/* address=1805f0100 name=FUN_1805f0100 */

undefined8 FUN_1805f0100(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  iVar1 = FUN_1805a45a0(param_4,&local_18,*(undefined8 *)(param_1 + 8));
  if (iVar1 < 0) {
    local_10 = 0;
  }
  else {
    lVar2 = FUN_180511080();
    if (lVar2 == 0) {
      FUN_18058f610(local_18);
      local_10 = 0;
    }
    else {
      FUN_180510a10(lVar2,local_18,iVar1);
      local_10 = FUN_1806185e0(0,param_2,param_3,lVar2);
      FUN_1805111a0(lVar2);
    }
  }
  return local_10;
}


/* address=1805f01b0 name=FUN_1805f01b0 */

undefined8 FUN_1805f01b0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_18 [3];
  
  lVar2 = FUN_180649dc0(param_1,param_2);
  if (lVar2 == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0;
    iVar1 = FUN_180511c90(lVar2,local_18);
    FUN_180511c20(lVar2);
    if (iVar1 < 0) {
      local_18[0] = 0;
    }
    else {
      *param_3 = (longlong)iVar1;
    }
  }
  return local_18[0];
}


/* address=1805f0230 name=FUN_1805f0230 */

void FUN_1805f0230(void)

{
  FUN_180514f00();
  return;
}


/* address=1805f0250 name=FUN_1805f0250 */

void FUN_1805f0250(undefined8 param_1)

{
  FUN_180515030(param_1);
  return;
}


/* address=1805f0270 name=FUN_1805f0270 */

void FUN_1805f0270(undefined8 param_1,undefined8 param_2)

{
  FUN_1805153b0(param_1,param_2);
  return;
}


/* address=1805f02a0 name=FUN_1805f02a0 */

void FUN_1805f02a0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=1805f0480 name=FUN_1805f0480 */

undefined8 FUN_1805f0480(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1805f14f0(param_1,param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}


/* address=1805f04d0 name=FUN_1805f04d0 */

undefined8 FUN_1805f04d0(undefined8 *param_1,char *param_2,undefined8 param_3)

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
  FUN_1805f0790(&local_20,0,0x18);
  local_20 = local_res10;
  local_18 = param_3;
  lVar1 = FUN_1805f0880(*param_1,&local_20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}


/* address=1805f05b0 name=FUN_1805f05b0 */

longlong FUN_1805f05b0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18058f4e0(0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1805f0790(lVar1,0,0x18);
  }
  return lVar1;
}


/* address=1805f0600 name=FUN_1805f0600 */

int FUN_1805f0600(char *param_1,char param_2,int param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int local_28;
  char *local_20;
  char *local_18;
  
  local_20 = param_1;
  if (param_1 == (char *)0x0) {
    FUN_18050f6f0(0xd,0,100,s_D__a_1_s_target_x86_64_pc_window_1809794a0,0x303);
    iVar1 = 0;
  }
  else {
    while( true ) {
      if (param_3 != 0) {
        while ((*local_20 != '\0' && (iVar1 = FUN_18058fc00(*local_20), iVar1 != 0))) {
          local_20 = local_20 + 1;
        }
      }
      pcVar2 = (char *)FUN_18066ac00(local_20,(int)param_2);
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
          while (iVar1 = FUN_18058fc00(*local_18), iVar1 != 0) {
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


/* address=1805f0790 name=FUN_1805f0790 */

undefined8 FUN_1805f0790(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805f0830 name=FUN_1805f0830 */

void FUN_1805f0830(undefined8 param_1,undefined8 param_2)

{
  FUN_1805bb190(param_1,param_2);
  return;
}


/* address=1805f0860 name=FUN_1805f0860 */

void FUN_1805f0860(undefined8 param_1)

{
  FUN_1805bb270(param_1);
  return;
}


/* address=1805f0880 name=FUN_1805f0880 */

void FUN_1805f0880(undefined8 param_1,undefined8 param_2)

{
  FUN_1805bb340(param_1,param_2,&LAB_1805f0800,&LAB_1805f07d0);
  return;
}


/* address=1805f08c0 name=FUN_1805f08c0 */

undefined4 FUN_1805f08c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  uVar1 = FUN_1805bb430(param_1,local_10,param_3,&LAB_1805f0800,&LAB_1805f07d0);
  *param_2 = local_10[0];
  return uVar1;
}


/* address=1805f0970 name=FUN_1805f0970 */

void FUN_1805f0970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_1805bb5e0(param_1,&LAB_1805f0930,&local_18);
  return;
}


/* address=1805f0b00 name=FUN_1805f0b00 */

void FUN_1805f0b00(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_18058f610(*param_1);
  }
  if (param_1[1] == 0) {
    if (param_1[2] != 0) {
      FUN_1805f0250(param_1[2]);
    }
  }
  else {
    FUN_18058f610(param_1[1]);
    if (param_1[2] != 0) {
      FUN_18058f610(param_1[2]);
    }
  }
  return;
}


/* address=1805f0b80 name=FUN_1805f0b80 */

void FUN_1805f0b80(undefined8 param_1)

{
  FUN_1805f0b00(param_1);
  FUN_18058f610(param_1);
  return;
}


/* address=1805f0be0 name=FUN_1805f0be0 */

longlong * FUN_1805f0be0(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_20;
  longlong local_10 [2];
  
  bVar1 = false;
  lVar3 = FUN_1805f0230();
  local_20 = (longlong *)FUN_1805f05b0();
  if ((lVar3 != 0) && (local_20 != (longlong *)0x0)) {
    lVar4 = FUN_18058f930(param_2);
    *local_20 = lVar4;
    if (*local_20 != 0) {
      local_20[1] = 0;
      local_20[2] = lVar3;
      iVar2 = FUN_1805f08c0(*param_1,local_10,local_20);
      if (iVar2 != 0) {
        if (local_10[0] != 0) {
          FUN_1805f0b80(local_10[0]);
        }
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    if (lVar3 != 0) {
      FUN_1805f0250(lVar3);
    }
    if (local_20 != (longlong *)0x0) {
      FUN_18058f610(local_20);
    }
    local_20 = (longlong *)0x0;
  }
  return local_20;
}


/* address=1805f0cf0 name=FUN_1805f0cf0 */

undefined8 FUN_1805f0cf0(undefined8 param_1,byte *param_2,longlong *param_3,byte *param_4)

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
  plVar5 = (longlong *)FUN_1805a71c0();
  if (plVar5 == (longlong *)0x0) {
    uVar9 = 0;
  }
  else {
    sVar6 = strlen((char *)param_4);
    lVar7 = FUN_1805a7370(plVar5,(longlong)((int)sVar6 + 1));
    local_res20 = param_4;
    if (lVar7 == 0) {
LAB_1805f14c9:
      if (plVar5 != (longlong *)0x0) {
        FUN_1805a7210(plVar5);
      }
      uVar9 = 0;
    }
    else {
LAB_1805f0d6c:
      while( true ) {
        while ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res20 * 2) & 0x40) != 0) {
          bVar1 = *local_res20;
          pbVar4 = local_res20;
          while (((local_res20 = pbVar4 + 1,
                  (*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0 &&
                  (*local_res20 != bVar1)) &&
                 (((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res20 * 2) & 0x20) == 0
                  || (local_res20 = pbVar4 + 2,
                     (*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0)
                  )))) {
            *(byte *)(plVar5[1] + (longlong)local_74) = *local_res20;
            local_74 = local_74 + 1;
            pbVar4 = local_res20;
          }
          if (*local_res20 == bVar1) {
            local_res20 = local_res20 + 1;
          }
        }
        if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res20 * 2) & 0x400) == 0)
        break;
        bVar1 = *local_res20;
        pbVar4 = local_res20;
        while (local_res20 = pbVar4 + 1,
              (*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res20 * 2) & 8) == 0) {
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
      if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res20 * 2) & 0x20) == 0) {
        if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res20 * 2) & 8) != 0)
        goto LAB_1805f1473;
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
          while ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_68 * 2) & 0x107) != 0) {
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
            while ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_68 * 2) & 0x107) != 0)
            {
              local_68 = local_68 + 1;
            }
          }
          pbVar4 = local_68;
          bVar3 = *local_68;
          *local_68 = 0;
          if (bVar1 != 0) {
            if (bVar3 != bVar1) {
              FUN_18050f6f0(0xd,0,0x67,s_D__a_1_s_target_x86_64_pc_window_180978f10,0x13a);
              goto LAB_1805f14c9;
            }
            local_68 = local_68 + 1;
          }
          local_50 = (char *)FUN_1805f04d0(param_1,local_28,local_38);
          if (local_30 != (byte *)0x0) {
            *local_30 = bVar2;
          }
          *pbVar4 = bVar3;
          if (local_50 == (char *)0x0) {
            FUN_18050f6f0(0xd,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180978f90,0x14d);
            goto LAB_1805f14c9;
          }
          sVar6 = strlen(local_50);
          uVar8 = (sVar6 + *plVar5) - ((longlong)local_68 - (longlong)local_res20);
          if (0x10000 < uVar8) {
            FUN_18050f6f0(0xd,0,0x6a,s_D__a_1_s_target_x86_64_pc_window_180979010,0x152);
            goto LAB_1805f14c9;
          }
          lVar7 = FUN_1805a73f0(plVar5,uVar8);
          if (lVar7 == 0) goto LAB_1805f14c9;
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
        goto LAB_1805f0d6c;
      }
      local_78 = local_res20[1];
      local_res20 = local_res20 + 2;
      if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)local_78 * 2) & 8) == 0) {
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
        goto LAB_1805f0d6c;
      }
LAB_1805f1473:
      *(undefined *)(plVar5[1] + (longlong)local_74) = 0;
      if (*param_3 != 0) {
        FUN_18058f610(*param_3);
      }
      *param_3 = plVar5[1];
      FUN_18058f610(plVar5);
      uVar9 = 1;
    }
  }
  return uVar9;
}


/* address=1805f14f0 name=FUN_1805f14f0 */

void FUN_1805f14f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_28 [5];
  
  FUN_1805f0790(local_28,0,0x18);
  local_28[0] = param_2;
  FUN_1805f0880(*param_1,local_28);
  return;
}


/* address=1805f1540 name=FUN_1805f1540 */

undefined8 FUN_1805f1540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = param_2[2];
  uVar2 = FUN_18058f930(*param_2);
  *param_3 = uVar2;
  lVar3 = FUN_1805f02a0(local_10,param_3);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_1805f08c0(*param_1,&local_18,param_3);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      if (local_18 != 0) {
        FUN_1805f0270(local_10,local_18);
        FUN_1805f0b80(local_18);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=1805f15e0 name=FUN_1805f15e0 */

byte * FUN_1805f15e0(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  
  local_res10 = param_2;
  while (((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 0x10) != 0 &&
         ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 8) == 0))) {
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=1805f1650 name=FUN_1805f1650 */

byte * FUN_1805f1650(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  byte *local_18;
  
  local_res10 = param_2;
  while( true ) {
    while ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) != 0) {
      if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)local_res10[1] * 2) & 8) == 0) {
        local_18 = local_res10 + 2;
      }
      else {
        local_18 = local_res10 + 1;
      }
      local_res10 = local_18;
    }
    if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 0x307) == 0) break;
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=1805f1720 name=FUN_1805f1720 */

byte * FUN_1805f1720(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  
  local_res10 = param_2 + 1;
  while( true ) {
    if (((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0) ||
       (*local_res10 == *param_2)) {
      if (*local_res10 == *param_2) {
        local_res10 = local_res10 + 1;
      }
      return local_res10;
    }
    if (((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) != 0) &&
       (local_res10 = local_res10 + 1,
       (*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0)) break;
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}


/* address=1805f1810 name=FUN_1805f1810 */

byte * FUN_1805f1810(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte *local_res10;
  
  bVar1 = *param_2;
  local_res10 = param_2 + 1;
  while ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 8) == 0) {
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


/* address=1805f18c0 name=FUN_1805f18c0 */

void FUN_1805f18c0(undefined8 param_1,byte *param_2)

{
  byte *local_res10;
  byte *local_18;
  
  local_res10 = param_2;
  while( true ) {
    if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 0x800) != 0) {
      *local_res10 = 0;
      return;
    }
    if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 0x10) == 0) break;
    local_res10 = local_res10 + 1;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 0x80) != 0) {
            *local_res10 = 0;
            return;
          }
          if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 0x400) == 0)
          break;
          local_res10 = (byte *)FUN_1805f1810(param_1,local_res10);
        }
        if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 0x40) == 0)
        break;
        local_res10 = (byte *)FUN_1805f1720(param_1,local_res10);
      }
      if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 0x20) == 0) break;
      if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)local_res10[1] * 2) & 8) == 0) {
        local_18 = local_res10 + 2;
      }
      else {
        local_18 = local_res10 + 1;
      }
      local_res10 = local_18;
    }
    if ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_res10 * 2) & 8) != 0) break;
    local_res10 = local_res10 + 1;
  }
  return;
}


/* address=1805f1a90 name=FUN_1805f1a90 */

void FUN_1805f1a90(undefined8 param_1,undefined8 param_2,uint *param_3)

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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  local_58 = 0;
  local_88 = (byte *)0x0;
  local_78 = FUN_1805a71c0();
  if (local_78 == 0) {
    local_b8 = 0x223;
    FUN_18050f6f0(0xd,0,7,s_D__a_1_s_target_x86_64_pc_window_180979090);
  }
  else {
    local_88 = (byte *)FUN_18058f930("default");
    if (local_88 != (byte *)0x0) {
      local_58 = FUN_1805f0be0(param_1,local_88);
      if (local_58 == 0) {
        local_b8 = 0x22e;
        FUN_18050f6f0(0xd,0,0x68,s_D__a_1_s_target_x86_64_pc_window_180979110);
      }
      else {
        local_a0 = 0;
        local_80 = 0;
        do {
          while( true ) {
            do {
              do {
                lVar3 = FUN_1805a7370(local_78,local_a0 + DAT_1807a3c08);
                if (lVar3 == 0) {
                  local_b8 = 0x236;
                  FUN_18050f6f0(0xd,0,7,s_D__a_1_s_target_x86_64_pc_window_180979190);
                  goto LAB_1805f22b2;
                }
                local_a8 = (byte *)(*(longlong *)(local_78 + 8) + (longlong)local_a0);
                *local_a8 = 0;
                FUN_18058c750(param_2,local_a8,(int)DAT_1807a3c08 + -1);
                local_a8[DAT_1807a3c08 + -1] = 0;
                sVar4 = strlen((char *)local_a8);
                local_50 = (int)sVar4;
                local_9c = local_50;
                if ((local_50 == 0) && (local_80 == 0)) {
                  if (local_78 != 0) {
                    FUN_1805a7210(local_78);
                  }
                  if (local_88 != (byte *)0x0) {
                    FUN_18058f610(local_88);
                  }
                  goto LAB_1805f237b;
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
                    (*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_a8 * 2) & 0x20) != 0))
                   && ((local_a0 < 2 ||
                       ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)local_a8[-1] * 2) & 0x20)
                        == 0)))) {
                  local_a0 = local_a0 + -1;
                  local_80 = 1;
                }
              } while (local_80 != 0);
              local_a0 = 0;
              local_28 = *(undefined8 *)(local_78 + 8);
              FUN_1805f18c0(param_1,local_28);
              local_68 = (byte *)FUN_1805f15e0(param_1,local_28);
            } while ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_68 * 2) & 8) != 0);
            if (*local_68 == 0x5b) break;
            local_60 = (byte *)0x0;
            local_30 = local_68;
            local_90 = (byte *)FUN_1805f1650(param_1,local_68);
            if ((*local_90 == ':') && (((char *)local_90)[1] == ':')) {
              *local_90 = '\0';
              local_90 = (byte *)((char *)local_90 + 2);
              local_60 = local_30;
              local_30 = local_90;
              local_90 = (byte *)FUN_1805f1650(param_1,local_90);
            }
            local_a8 = (byte *)FUN_1805f15e0(param_1,local_90);
            if (*local_a8 != 0x3d) {
              local_b8 = 0x297;
              FUN_18050f6f0(0xd,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180979310);
              goto LAB_1805f22b2;
            }
            *local_90 = '\0';
            local_a8 = local_a8 + 1;
            local_48 = (byte *)FUN_1805f15e0(param_1,local_a8);
            while ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_a8 * 2) & 8) == 0) {
              local_a8 = local_a8 + 1;
            }
            do {
              pbVar1 = local_a8;
              local_a8 = pbVar1 + -1;
              if (local_a8 == local_48) break;
            } while ((*(ushort *)(&DAT_1807a3a00 + (longlong)(int)(uint)*local_a8 * 2) & 0x10) != 0)
            ;
            *pbVar1 = 0;
            local_a8 = pbVar1;
            local_98 = FUN_1805f05b0();
            if (local_98 == 0) goto LAB_1805f22b2;
            if (local_60 == (byte *)0x0) {
              local_60 = local_88;
            }
            uVar5 = FUN_18058f930(local_30);
            *(undefined8 *)(local_98 + 8) = uVar5;
            if ((*(longlong *)(local_98 + 8) == 0) ||
               (iVar2 = FUN_1805f0cf0(param_1,local_60,local_98 + 0x10,local_48), iVar2 == 0))
            goto LAB_1805f22b2;
            iVar2 = strcmp((char *)local_60,(char *)local_88);
            if (iVar2 == 0) {
              local_40 = local_58;
            }
            else {
              local_40 = FUN_1805f14f0(param_1,local_60);
              if (local_40 == 0) {
                local_40 = FUN_1805f0be0(param_1,local_60);
              }
              if (local_40 == 0) {
                local_b8 = 0x2ba;
                FUN_18050f6f0(0xd,0,0x68,s_D__a_1_s_target_x86_64_pc_window_180979390);
                goto LAB_1805f22b2;
              }
            }
            iVar2 = FUN_1805f1540(param_1,local_40,local_98);
            if (iVar2 == 0) goto LAB_1805f22b2;
            local_98 = 0;
          }
          local_68 = local_68 + 1;
          local_48 = (byte *)FUN_1805f15e0(param_1,local_68);
          pbVar1 = local_48;
          while( true ) {
            local_38 = pbVar1;
            local_90 = (byte *)FUN_1805f1650(param_1,local_38);
            local_a8 = (byte *)FUN_1805f15e0(param_1,local_90);
            if (*local_a8 == 0x5d) break;
            if ((*local_a8 == 0) || (pbVar1 = local_a8, local_38 == local_a8)) {
              local_b8 = 0x27b;
              FUN_18050f6f0(0xd,0,0x65,s_D__a_1_s_target_x86_64_pc_window_180979210);
              goto LAB_1805f22b2;
            }
          }
          *local_90 = '\0';
          iVar2 = FUN_1805f0cf0(param_1,0,&local_88,local_48);
          if (iVar2 == 0) goto LAB_1805f22b2;
          local_58 = FUN_1805f14f0(param_1,local_88);
          if (local_58 == 0) {
            local_58 = FUN_1805f0be0(param_1,local_88);
          }
        } while (local_58 != 0);
        local_b8 = 0x286;
        FUN_18050f6f0(0xd,0,0x68,s_D__a_1_s_target_x86_64_pc_window_180979290);
      }
    }
  }
LAB_1805f22b2:
  if (local_78 != 0) {
    FUN_1805a7210(local_78);
  }
  if (local_88 != (byte *)0x0) {
    FUN_18058f610(local_88);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_70;
  }
  _snprintf(local_20,0xd,&DAT_180979408,(ulonglong)local_70);
  FUN_18050f810(2,s_line_18097940c,local_20);
  if (local_98 != 0) {
    if (*(longlong *)(local_98 + 8) != 0) {
      FUN_18058f610(*(undefined8 *)(local_98 + 8));
    }
    if (*(longlong *)(local_98 + 0x10) != 0) {
      FUN_18058f610(*(undefined8 *)(local_98 + 0x10));
    }
    if (local_98 != 0) {
      FUN_18058f610(local_98);
    }
  }
LAB_1805f237b:
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=1805f23a0 name=FUN_1805f23a0 */

void FUN_1805f23a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_128;
  local_d8 = 0;
  local_d0 = FUN_180532b10(param_6);
  local_f8 = 1;
  FUN_180532e30(local_c8);
  local_108 = 0;
  iVar1 = FUN_180532fd0(local_c8,param_1,param_2,param_6);
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
      iVar1 = FUN_180532fd0(local_c8,0,0,0);
      if ((((iVar1 == 0) || (iVar1 = FUN_180533330(local_c8,param_3,param_4), iVar1 == 0)) ||
          (iVar1 = FUN_180533330(local_c8,&local_f4,4), iVar1 == 0)) ||
         (iVar1 = FUN_180533370(local_c8,local_58,0), iVar1 == 0)) goto LAB_1805f268f;
      FUN_1805f2730(param_8);
      for (local_f0 = 1; local_f0 < param_5; local_f0 = local_f0 + 1) {
        local_108 = 0;
        iVar1 = FUN_180532fd0(local_c8,0,0,0);
        if (((iVar1 == 0) || (iVar1 = FUN_180533330(local_c8,local_58), iVar1 == 0)) ||
           (iVar1 = FUN_180533370(local_c8), iVar1 == 0)) goto LAB_1805f268f;
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
LAB_1805f268f:
  FUN_180532ed0(local_c8);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=1805f2730 name=FUN_1805f2730 */

undefined8 FUN_1805f2730(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805f2770 name=FUN_1805f2770 */

void FUN_1805f2770(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_94 = 0;
  local_84 = 0;
  local_90 = FUN_18055f380(param_1);
  local_8c = FUN_18055f3a0(param_1);
  if (0x40 < local_90) {
    FID_conflict__assert
              (u_nkey_<__EVP_MAX_KEY_LENGTH_180979628,u_D__a_1_s_target_x86_64_pc_window_180979520,
               0x4f);
  }
  if (0x10 < local_8c) {
    FID_conflict__assert
              (u_niv_<__EVP_MAX_IV_LENGTH_180979768,u_D__a_1_s_target_x86_64_pc_window_180979660,
               0x50);
  }
  if (param_4 != 0) {
    FUN_180532380(local_78);
    do {
      iVar1 = FUN_1805327c0(local_78,param_2,0);
      if (iVar1 == 0) goto LAB_1805f2a69;
      local_80 = local_88;
      iVar1 = local_88 + 1;
      bVar2 = local_88 != 0;
      local_88 = iVar1;
      if (((((bVar2) && (iVar1 = FUN_1805328f0(local_78,local_58,local_94), iVar1 == 0)) ||
           (iVar1 = FUN_1805328f0(local_78,param_4,param_5), iVar1 == 0)) ||
          ((param_3 != 0 && (iVar1 = FUN_1805328f0(local_78,param_3,8), iVar1 == 0)))) ||
         (iVar1 = FUN_180532930(local_78,local_58), iVar1 == 0)) goto LAB_1805f2a69;
      for (local_98 = 1; local_98 < param_6; local_98 = local_98 + 1) {
        iVar1 = FUN_1805327c0(local_78,param_2,0);
        if (((iVar1 == 0) || (iVar1 = FUN_1805328f0(local_78,local_58,local_94), iVar1 == 0)) ||
           (iVar1 = FUN_180532930(local_78,local_58), iVar1 == 0)) goto LAB_1805f2a69;
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
    local_84 = FUN_18055f380(param_1);
LAB_1805f2a69:
    FUN_1805323f0(local_78);
    FUN_18058f7b0(local_58,0x40);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=1805f2e40 name=FUN_1805f2e40 */

undefined8 FUN_1805f2e40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805f2e90 name=FUN_1805f2e90 */

uint FUN_1805f2e90(uint param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f) | param_1 >> 0x20 - (param_2 & 0x1f);
}


/* address=1805f2eb0 name=FUN_1805f2eb0 */

void FUN_1805f2eb0(longlong param_1)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_188;
  FUN_1805f2e40(local_58,param_1,0x40);
  for (local_164 = 8; 0 < local_164; local_164 = local_164 + -2) {
    local_160 = 0x10;
    local_58[4] = FUN_1805f2e90(local_58[0] + local_58[12],7);
    local_58[4] = *(uint *)((longlong)local_58 + local_160) ^ local_58[4];
    local_158 = 0x20;
    local_58[8] = FUN_1805f2e90(local_58[4] + local_58[0],9);
    local_58[8] = *(uint *)((longlong)local_58 + local_158) ^ local_58[8];
    local_150 = 0x30;
    local_58[12] = FUN_1805f2e90(local_58[8] + local_58[4],0xd);
    local_58[12] = *(uint *)((longlong)local_58 + local_150) ^ local_58[12];
    local_148 = 0;
    local_58[0] = FUN_1805f2e90(local_58[12] + local_58[8],0x12);
    local_58[0] = *(uint *)((longlong)local_58 + local_148) ^ local_58[0];
    local_140 = 0x24;
    local_58[9] = FUN_1805f2e90(local_58[5] + local_58[1],7);
    local_58[9] = *(uint *)((longlong)local_58 + local_140) ^ local_58[9];
    local_138 = 0x34;
    local_58[13] = FUN_1805f2e90(local_58[9] + local_58[5],9);
    local_58[13] = *(uint *)((longlong)local_58 + local_138) ^ local_58[13];
    local_130 = 4;
    local_58[1] = FUN_1805f2e90(local_58[13] + local_58[9],0xd);
    local_58[1] = *(uint *)((longlong)local_58 + local_130) ^ local_58[1];
    local_128 = 0x14;
    local_58[5] = FUN_1805f2e90(local_58[1] + local_58[13],0x12);
    local_58[5] = *(uint *)((longlong)local_58 + local_128) ^ local_58[5];
    local_120 = 0x38;
    local_58[14] = FUN_1805f2e90(local_58[10] + local_58[6],7);
    local_58[14] = *(uint *)((longlong)local_58 + local_120) ^ local_58[14];
    local_118 = 8;
    local_58[2] = FUN_1805f2e90(local_58[14] + local_58[10],9);
    local_58[2] = *(uint *)((longlong)local_58 + local_118) ^ local_58[2];
    local_110 = 0x18;
    local_58[6] = FUN_1805f2e90(local_58[2] + local_58[14],0xd);
    local_58[6] = *(uint *)((longlong)local_58 + local_110) ^ local_58[6];
    local_108 = 0x28;
    local_58[10] = FUN_1805f2e90(local_58[6] + local_58[2],0x12);
    local_58[10] = *(uint *)((longlong)local_58 + local_108) ^ local_58[10];
    local_100 = 0xc;
    local_58[3] = FUN_1805f2e90(local_58[15] + local_58[11],7);
    local_58[3] = *(uint *)((longlong)local_58 + local_100) ^ local_58[3];
    local_f8 = 0x1c;
    local_58[7] = FUN_1805f2e90(local_58[3] + local_58[15],9);
    local_58[7] = *(uint *)((longlong)local_58 + local_f8) ^ local_58[7];
    local_f0 = 0x2c;
    local_58[11] = FUN_1805f2e90(local_58[7] + local_58[3],0xd);
    local_58[11] = *(uint *)((longlong)local_58 + local_f0) ^ local_58[11];
    local_e8 = 0x3c;
    local_58[15] = FUN_1805f2e90(local_58[11] + local_58[7],0x12);
    local_58[15] = *(uint *)((longlong)local_58 + local_e8) ^ local_58[15];
    local_e0 = 4;
    local_58[1] = FUN_1805f2e90(local_58[0] + local_58[3],7);
    local_58[1] = *(uint *)((longlong)local_58 + local_e0) ^ local_58[1];
    local_d8 = 8;
    local_58[2] = FUN_1805f2e90(local_58[1] + local_58[0],9);
    local_58[2] = *(uint *)((longlong)local_58 + local_d8) ^ local_58[2];
    local_d0 = 0xc;
    local_58[3] = FUN_1805f2e90(local_58[2] + local_58[1],0xd);
    local_58[3] = *(uint *)((longlong)local_58 + local_d0) ^ local_58[3];
    local_c8 = 0;
    local_58[0] = FUN_1805f2e90(local_58[3] + local_58[2],0x12);
    local_58[0] = *(uint *)((longlong)local_58 + local_c8) ^ local_58[0];
    local_c0 = 0x18;
    local_58[6] = FUN_1805f2e90(local_58[5] + local_58[4],7);
    local_58[6] = *(uint *)((longlong)local_58 + local_c0) ^ local_58[6];
    local_b8 = 0x1c;
    local_58[7] = FUN_1805f2e90(local_58[6] + local_58[5],9);
    local_58[7] = *(uint *)((longlong)local_58 + local_b8) ^ local_58[7];
    local_b0 = 0x10;
    local_58[4] = FUN_1805f2e90(local_58[7] + local_58[6],0xd);
    local_58[4] = *(uint *)((longlong)local_58 + local_b0) ^ local_58[4];
    local_a8 = 0x14;
    local_58[5] = FUN_1805f2e90(local_58[4] + local_58[7],0x12);
    local_58[5] = *(uint *)((longlong)local_58 + local_a8) ^ local_58[5];
    local_a0 = 0x2c;
    local_58[11] = FUN_1805f2e90(local_58[10] + local_58[9],7);
    local_58[11] = *(uint *)((longlong)local_58 + local_a0) ^ local_58[11];
    local_98 = 0x20;
    local_58[8] = FUN_1805f2e90(local_58[11] + local_58[10],9);
    local_58[8] = *(uint *)((longlong)local_58 + local_98) ^ local_58[8];
    local_90 = 0x24;
    local_58[9] = FUN_1805f2e90(local_58[8] + local_58[11],0xd);
    local_58[9] = *(uint *)((longlong)local_58 + local_90) ^ local_58[9];
    local_88 = 0x28;
    local_58[10] = FUN_1805f2e90(local_58[9] + local_58[8],0x12);
    local_58[10] = *(uint *)((longlong)local_58 + local_88) ^ local_58[10];
    local_80 = 0x30;
    local_58[12] = FUN_1805f2e90(local_58[15] + local_58[14],7);
    local_58[12] = *(uint *)((longlong)local_58 + local_80) ^ local_58[12];
    local_78 = 0x34;
    local_58[13] = FUN_1805f2e90(local_58[12] + local_58[15],9);
    local_58[13] = *(uint *)((longlong)local_58 + local_78) ^ local_58[13];
    local_70 = 0x38;
    local_58[14] = FUN_1805f2e90(local_58[13] + local_58[12],0xd);
    local_58[14] = *(uint *)((longlong)local_58 + local_70) ^ local_58[14];
    local_68 = 0x3c;
    uVar1 = FUN_1805f2e90(local_58[14] + local_58[13],0x12);
    local_58[15] = *(uint *)((longlong)local_58 + local_68) ^ uVar1;
  }
  for (local_168 = 0; local_168 < 0x10; local_168 = local_168 + 1) {
    *(uint *)(param_1 + (longlong)local_168 * 4) =
         *(int *)(param_1 + (longlong)local_168 * 4) + local_58[local_168];
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_188);
  return;
}


/* address=1805f3b00 name=FUN_1805f3b00 */

void FUN_1805f3b00(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong local_18;
  
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    *(uint *)(param_1 + local_18 * 4) =
         *(uint *)(param_2 + local_18 * 4) ^ *(uint *)(param_3 + local_18 * 4);
  }
  return;
}


/* address=1805f3b70 name=FUN_1805f3b70 */

void FUN_1805f3b70(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_88 [32];
  ulonglong local_68;
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_88;
  if (param_1 == param_2) {
    FID_conflict__assert(u_out____B_180979890,u_D__a_1_s_target_x86_64_pc_window_1809797a0,0x5c);
  }
  FUN_1805f2e40(local_58,param_2 + (param_3 * 2 + -1) * 0x40,0x40);
  for (local_68 = 0; local_68 < (ulonglong)(param_3 << 1); local_68 = local_68 + 1) {
    FUN_1805f3b00(local_58,local_58,param_2 + local_68 * 0x40);
    FUN_1805f2eb0(local_58);
    FUN_1805f2e40(param_1 + (local_68 / 2 + (local_68 & 1) * param_3) * 0x40,local_58,0x40);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=1805f3cc0 name=FUN_1805f3cc0 */

void FUN_1805f3cc0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  FUN_1805f2e40(param_5,param_1,param_2 << 7);
  for (local_28 = 1; local_28 < param_3; local_28 = local_28 + 1) {
    FUN_1805f3b70(param_5 + param_2 * 2 * local_28 * 0x40,
                  param_5 + param_2 * 2 * (local_28 - 1) * 0x40,param_2);
  }
  FUN_1805f3b70(param_1,param_5 + param_2 * 2 * (param_3 - 1) * 0x40,param_2);
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    uVar1 = *(uint *)(param_1 + (param_2 * 2 + -1) * 0x40);
    for (local_30 = 0; local_30 < (ulonglong)(param_2 << 1); local_30 = local_30 + 1) {
      FUN_1805f3b00(param_4 + local_30 * 0x40,param_1 + local_30 * 0x40,
                    param_5 + (param_2 * 2 * (ulonglong)(uVar1 & (int)param_3 - 1U) + local_30) *
                              0x40);
    }
    FUN_1805f3b70(param_1,param_4,param_2);
  }
  return;
}


/* address=1805f3ec0 name=FUN_1805f3ec0 */

void FUN_1805f3ec0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=1805f3ef0 name=FUN_1805f3ef0 */

void FUN_1805f3ef0(void)

{
  FUN_1805a1340(&DAT_1807a3c10);
  return;
}


/* address=1805f3f10 name=FUN_1805f3f10 */

void FUN_1805f3f10(undefined8 param_1)

{
  FUN_1805a76a0(&DAT_1807a3c10,param_1);
  return;
}


/* address=1805f3f40 name=FUN_1805f3f40 */

void FUN_1805f3f40(undefined8 param_1)

{
  FUN_1805a1c20(param_1,&DAT_1807a3c10);
  return;
}


/* address=1805f40a0 name=FUN_1805f40a0 */

undefined8 FUN_1805f40a0(int param_1)

{
  undefined8 uVar1;
  uint local_18;
  
  if (param_1 != 0) {
    for (local_18 = 0; local_18 < 0x12; local_18 = local_18 + 1) {
      if (*(int *)(&DAT_1807a3c80 + (ulonglong)local_18 * 0x20) == param_1) {
        uVar1 = (**(code **)(&UNK_1807a3c88 + (ulonglong)local_18 * 0x20))();
        return uVar1;
      }
    }
  }
  return 0;
}


/* address=1805f4110 name=FUN_1805f4110 */

void FUN_1805f4110(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_1805a8b00(param_1);
    uVar2 = FUN_1805a8ad0(param_1);
    FUN_18059e730(local_20,uVar2,uVar1);
    FUN_1805f4500(local_20);
  }
  else {
    FUN_1805f40a0(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}


/* address=1805f4180 name=FUN_1805f4180 */

longlong FUN_1805f4180(wchar_t *param_1)

{
  ulong uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *local_40 [2];
  wchar_t *local_30 [2];
  wchar_t *local_20 [4];
  
  uVar1 = wcstoul(param_1,local_40,0x20000010);
  if ((uVar1 == 0) || (uVar1 = wcstoul((wchar_t *)local_40,local_30,6), uVar1 == 0)) {
    FUN_18050f6f0(0x1d,0,0x65,s_D__a_1_s_target_x86_64_pc_window_180979ba0,0xac);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1805f4500(local_30);
    if (lVar2 == 0) {
      FUN_18050f6f0(0x1d,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180979c30,0xb2);
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_18059e7c0(local_40);
      if ((lVar3 != 0) &&
         (((uVar1 = wcstoul((wchar_t *)local_40,local_20,5), uVar1 == 0 ||
           (lVar3 = FUN_18059e7c0(local_20), lVar3 != 0)) ||
          (lVar3 = FUN_18059e7c0(local_40), lVar3 != 0)))) {
        FUN_18050f6f0(0x1d,0,0x65,s_D__a_1_s_target_x86_64_pc_window_180979cc0,0xbf);
        lVar2 = 0;
      }
    }
  }
  return lVar2;
}


/* address=1805f42a0 name=FUN_1805f42a0 */

undefined8 FUN_1805f42a0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong local_a8;
  undefined local_98 [48];
  undefined local_68 [48];
  undefined local_38 [56];
  
  iVar2 = FUN_180590d60(param_1,local_98,0x20000010);
  if ((iVar2 == 0) || (iVar2 = FUN_180590d60(local_98,local_68,6), iVar2 == 0)) {
    return 0;
  }
  bVar1 = false;
  iVar2 = FUN_180532ad0(param_2);
  local_a8 = 0;
  do {
    if (6 < local_a8) {
LAB_1805f4386:
      if (!bVar1) {
        FUN_18050f6f0(0x1d,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180979d50,0xdb);
        return 0;
      }
      iVar2 = FUN_180590d60(local_98,local_38,5);
      if ((iVar2 != 0) && (iVar2 = FUN_180590820(param_1), iVar2 != 0)) {
        return 1;
      }
      return 0;
    }
    if (iVar2 == *(int *)(&DAT_1807a3ecc + local_a8 * 0x10)) {
      iVar2 = FUN_180590e20(local_68,&DAT_1807a3ec0 + local_a8 * 0x10,
                            (&DAT_1807a3ec9)[local_a8 * 0x10]);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = true;
      goto LAB_1805f4386;
    }
    local_a8 = local_a8 + 1;
  } while( true );
}


/* address=1805f44c0 name=FUN_1805f44c0 */

int FUN_1805f44c0(void *param_1,void *param_2,size_t param_3)

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


/* address=1805f4500 name=FUN_1805f4500 */

undefined8 FUN_1805f4500(undefined8 param_1)

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
    uVar3 = FUN_18059e7c0(param_1);
    if (uVar3 == (byte)(&DAT_1807a3ec9)[local_28 * 0x10]) {
      uVar1 = (&DAT_1807a3ec9)[local_28 * 0x10];
      uVar4 = FUN_18059e7a0(param_1);
      iVar2 = FUN_1805f44c0(uVar4,&DAT_1807a3ec0 + local_28 * 0x10,uVar1);
      if (iVar2 == 0) {
        uVar4 = FUN_1805f40a0(*(undefined4 *)(&DAT_1807a3ecc + local_28 * 0x10));
        return uVar4;
      }
    }
    local_28 = local_28 + 1;
  } while( true );
}


/* address=1805f4670 name=FUN_1805f4670 */

void FUN_1805f4670(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,int param_8,
                  undefined8 param_9)

{
  int iVar1;
  uint uVar2;
  undefined auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  int local_188;
  int local_184;
  undefined4 local_180;
  longlong local_178;
  ulonglong local_170;
  int local_168 [2];
  undefined8 local_160;
  ulonglong local_158;
  longlong local_150;
  undefined local_148 [48];
  undefined local_118 [48];
  undefined local_e8 [48];
  undefined local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_1c8;
  local_180 = 0;
  local_160 = 0;
  local_178 = 0;
  local_170 = 0;
  FUN_18055dc10(local_b8);
  if (param_6 == 0) {
    if (param_7 == 0) {
      param_7 = 8;
    }
    local_178 = FUN_18058f4e0(param_7);
    if ((local_178 == 0) || (iVar1 = FUN_18055bbd0(local_178,param_7), iVar1 == 0))
    goto LAB_1805f49ba;
    param_6 = local_178;
  }
  if (param_8 < 1) {
    param_8 = 0x800;
  }
  iVar1 = FUN_180590610(local_148,0x80);
  if (((iVar1 == 0) || (iVar1 = FUN_180588c90(local_148,param_9), iVar1 == 0)) ||
     (iVar1 = FUN_180590740(local_148,&local_160,&local_170), iVar1 == 0)) {
    FUN_1805906d0(local_148);
  }
  else {
    iVar1 = FUN_180590d60(param_1,local_118,0x20000010);
    if (iVar1 != 0) {
      local_1a8 = param_4;
      if (param_2 == -1) {
        local_190 = param_7;
        local_198 = param_6;
        local_1a0 = param_5;
        local_188 = FUN_18064c700(local_118,local_b8,param_3,param_8);
      }
      else {
        local_190 = param_7;
        local_198 = param_6;
        local_1a0 = param_5;
        local_188 = FUN_1805f5440(local_118,local_b8,param_2,param_8);
      }
      if (local_188 != 0) {
        uVar2 = FUN_18055f0b0(local_b8);
        local_158 = local_170 + uVar2;
        if (local_158 < local_170) {
          local_1a8 = CONCAT44(local_1a8._4_4_,0x1f8);
          FUN_18050f6f0(0x13,0,0x76,s_D__a_1_s_target_x86_64_pc_window_18097a580);
        }
        else {
          iVar1 = FUN_180590d60(local_118,local_e8,4);
          if ((iVar1 != 0) && (iVar1 = FUN_180590f30(local_e8,&local_150,local_158), iVar1 != 0)) {
            local_1a8 = CONCAT44(local_1a8._4_4_,(undefined4)local_170);
            iVar1 = FUN_18055ef70(local_b8,local_150,&local_184,local_160);
            if (((iVar1 != 0) &&
                ((iVar1 = FUN_18055eff0(local_b8,local_150 + local_184,local_168), iVar1 != 0 &&
                 (iVar1 = FUN_180590f90(local_e8,(longlong)(local_184 + local_168[0])), iVar1 != 0))
                )) && (iVar1 = FUN_180590820(param_1), iVar1 != 0)) {
              local_180 = 1;
            }
          }
        }
      }
    }
  }
LAB_1805f49ba:
  FUN_18058f610(local_160);
  FUN_18058f610(local_178);
  FUN_18055dc80(local_b8);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_1c8);
  return;
}


/* address=1805f4a00 name=FUN_1805f4a00 */

undefined8 FUN_1805f4a00(wchar_t *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  wchar_t *local_48 [2];
  wchar_t *local_38 [2];
  wchar_t *local_28 [2];
  undefined local_18 [24];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar1 = wcstoul(param_1,local_48,0x20000010);
  if ((((uVar1 != 0) && (uVar1 = wcstoul((wchar_t *)local_48,local_28,0x20000010), uVar1 != 0)) &&
      (uVar1 = wcstoul((wchar_t *)local_48,local_38,4), uVar1 != 0)) &&
     (lVar3 = FUN_18059e7c0(local_48), lVar3 == 0)) {
    local_60 = FUN_18059e7c0(local_38);
    uVar4 = FUN_18059e7a0(local_38);
    iVar2 = FUN_1805f4b40(&local_68,&local_58,local_28,param_2,param_3,uVar4,local_60);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_18059e730(local_18,local_68,local_58);
    local_50 = FUN_180588b10(local_18);
    FUN_18058f610(local_68);
    return local_50;
  }
  FUN_18050f6f0(0x13,0,0x68,s_D__a_1_s_target_x86_64_pc_window_18097a500,CONCAT44(uVar5,0x1a8));
  return 0;
}


/* address=1805f4b40 name=FUN_1805f4b40 */

void FUN_1805f4b40(longlong *param_1,longlong *param_2,wchar_t *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7)

{
  ulong uVar1;
  int iVar2;
  undefined auStack_128 [32];
  undefined8 local_108;
  uint local_f8;
  longlong local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined *local_e0;
  int local_d8 [2];
  wchar_t *local_d0 [3];
  undefined local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_128;
  local_e4 = 0;
  local_f0 = 0;
  FUN_18055dc10(local_b8);
  uVar1 = wcstoul(param_3,local_d0,6);
  if (uVar1 == 0) {
    local_108 = (wchar_t *)CONCAT44(local_108._4_4_,0x170);
    FUN_18050f6f0(0x13,0,0x68,s_D__a_1_s_target_x86_64_pc_window_18097a300);
  }
  else {
    local_e0 = (undefined *)0x0;
    for (local_f8 = 0; local_f8 < 4; local_f8 = local_f8 + 1) {
      iVar2 = FUN_18059e950(local_d0,&UNK_1807a3f64 + (ulonglong)local_f8 * 0x28,
                            (&DAT_1807a3f6e)[(ulonglong)local_f8 * 0x28]);
      if (iVar2 != 0) {
        local_e0 = &DAT_1807a3f60 + (ulonglong)local_f8 * 0x28;
        break;
      }
    }
    if (local_e0 == (undefined *)0x0) {
      local_108 = (wchar_t *)CONCAT44(local_108._4_4_,0x17c);
      FUN_18050f6f0(0x13,0,0x77,s_D__a_1_s_target_x86_64_pc_window_18097a380);
    }
    else {
      local_108 = param_3;
      iVar2 = (**(code **)(local_e0 + 0x20))(local_e0,local_b8,param_4,param_5);
      if (iVar2 == 0) {
        local_108 = (wchar_t *)CONCAT44(local_108._4_4_,0x181);
        FUN_18050f6f0(0x13,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_18097a400);
      }
      else {
        local_f0 = FUN_18058f4e0(param_7);
        if (local_f0 != 0) {
          if (param_7 < 0x80000000) {
            local_108 = (wchar_t *)CONCAT44(local_108._4_4_,(undefined4)param_7);
            iVar2 = FUN_18055e9f0(local_b8,local_f0,&local_e8,param_6);
            if ((iVar2 != 0) &&
               (iVar2 = FUN_18055ecc0(local_b8,local_f0 + local_e8,local_d8), iVar2 != 0)) {
              *param_1 = local_f0;
              *param_2 = (longlong)(local_e8 + local_d8[0]);
              local_e4 = 1;
              local_f0 = 0;
            }
          }
          else {
            local_108 = (wchar_t *)CONCAT44(local_108._4_4_,0x18b);
            FUN_18050f6f0(0x13,0,0x45,s_D__a_1_s_target_x86_64_pc_window_18097a480);
          }
        }
      }
    }
  }
  FUN_18058f610(local_f0);
  FUN_18055dc80(local_b8);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_128);
  return;
}


/* address=1805f4df0 name=FUN_1805f4df0 */

void FUN_1805f4df0(longlong param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  undefined param_5,uint param_6,ulonglong param_7,longlong param_8,
                  undefined8 param_9)

{
  ulonglong uVar1;
  int iVar2;
  undefined auStack_238 [32];
  undefined4 local_218;
  ulonglong local_208;
  uint local_200;
  uint local_1fc;
  longlong local_1f8;
  uint local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  undefined4 local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  ulonglong local_190;
  ulonglong local_188;
  undefined local_180 [32];
  ulonglong local_160;
  byte local_158 [64];
  undefined local_118 [127];
  byte abStack_99 [129];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_238;
  if (param_6 == 0) {
    local_218 = 0x73;
    FUN_18050f6f0(0x13,0,0x81,s_D__a_1_s_target_x86_64_pc_window_180979e60);
  }
  else {
    local_1d8 = 0;
    FUN_180532380(local_180);
    local_198 = 0;
    local_1f8 = 0;
    local_1c8 = 0;
    local_1e8 = 0;
    if ((param_1 == 0) || (iVar2 = FUN_1805f5680(param_1,param_2,&local_198,&local_1c8), iVar2 != 0)
       ) {
      local_208 = FUN_180532b30(param_9);
      FUN_1805f5640(local_118,param_5,local_208);
      if (((param_4 - 1) + local_208 < param_4) || ((local_1c8 - 1) + local_208 < local_1c8)) {
        local_218 = 0x97;
        FUN_18050f6f0(0x13,0,0x45,s_D__a_1_s_target_x86_64_pc_window_180979ee0);
      }
      else {
        local_1a8 = local_208 * (((param_4 - 1) + local_208) / local_208);
        local_190 = local_208 * (((local_1c8 - 1) + local_208) / local_208);
        local_1e8 = local_1a8 + local_190;
        if (local_1e8 < local_1a8) {
          local_218 = 0x9e;
          FUN_18050f6f0(0x13,0,0x45,s_D__a_1_s_target_x86_64_pc_window_180979f60);
        }
        else {
          local_1f8 = FUN_18058f4e0(local_1e8);
          if ((local_1e8 == 0) || (local_1f8 != 0)) {
            for (local_1d0 = 0; local_1d0 < local_1a8; local_1d0 = local_1d0 + 1) {
              *(undefined *)(local_1f8 + local_1d0) = *(undefined *)(param_3 + local_1d0 % param_4);
            }
            for (local_1c0 = 0; local_1c0 < local_190; local_1c0 = local_1c0 + 1) {
              *(undefined *)(local_1f8 + local_1c0 + local_1a8) =
                   *(undefined *)(local_198 + local_1c0 % local_1c8);
            }
            while (param_7 != 0) {
              iVar2 = FUN_1805327c0(local_180,param_9,0);
              if ((((iVar2 == 0) ||
                   (iVar2 = FUN_1805328f0(local_180,local_118,local_208), iVar2 == 0)) ||
                  (iVar2 = FUN_1805328f0(local_180,local_1f8,local_1e8), iVar2 == 0)) ||
                 (iVar2 = FUN_180532930(local_180,local_158,&local_200), iVar2 == 0))
              goto LAB_1805f53f7;
              for (local_1f0 = 1; local_1f0 < param_6; local_1f0 = local_1f0 + 1) {
                iVar2 = FUN_1805327c0(local_180,param_9,0);
                if (((iVar2 == 0) ||
                    (iVar2 = FUN_1805328f0(local_180,local_158,local_200), iVar2 == 0)) ||
                   (iVar2 = FUN_180532930(local_180,local_158), iVar2 == 0)) goto LAB_1805f53f7;
              }
              if (param_7 < local_200) {
                local_188 = param_7;
              }
              else {
                local_188 = (ulonglong)local_200;
              }
              local_1a0 = local_188;
              FUN_1805f55f0(param_8);
              param_8 = param_8 + local_1a0;
              param_7 = param_7 - local_1a0;
              if (param_7 == 0) break;
              for (local_1b8 = 0; local_1b8 < local_208; local_1b8 = local_1b8 + 1) {
                local_160 = (ulonglong)local_200;
                abStack_99[local_1b8 + 1] = local_158[local_1b8 % local_160];
              }
              if (local_1e8 % local_208 != 0) {
                FID_conflict__assert
                          (u_I_len___block_size____0_18097a0d0,
                           u_D__a_1_s_target_x86_64_pc_window_180979fe0,0xd3);
              }
              for (local_1b0 = 0; local_1b0 < local_1e8; local_1b0 = local_1b0 + local_208) {
                local_1fc = 1;
                uVar1 = local_208;
                while (local_1e0 = uVar1 - 1, local_1e0 < local_208) {
                  local_1fc = abStack_99[uVar1] + local_1fc +
                              (uint)*(byte *)(local_1f8 + local_1b0 + local_1e0);
                  *(undefined *)(local_1f8 + local_1b0 + local_1e0) = (undefined)local_1fc;
                  local_1fc = local_1fc >> 8;
                  uVar1 = local_1e0;
                }
              }
            }
            local_1d8 = 1;
          }
        }
      }
    }
LAB_1805f53f7:
    FUN_18058f610(local_1f8);
    FUN_18058f610(local_198);
    FUN_1805323f0(local_180);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_238);
  return;
}


/* address=1805f5440 name=FUN_1805f5440 */

undefined8
FUN_1805f5440(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar4;
  undefined local_d0 [48];
  undefined local_a0 [48];
  undefined local_70 [48];
  undefined local_40 [64];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  lVar2 = FUN_1805f5a90(param_3);
  if (lVar2 == 0) {
    FUN_18050f6f0(0x13,0,0x77,s_D__a_1_s_target_x86_64_pc_window_18097a280,CONCAT44(uVar4,0x151));
  }
  else {
    iVar1 = FUN_180590d60(param_1,local_d0,0x20000010);
    if (((((iVar1 != 0) && (iVar1 = FUN_180590d60(local_d0,local_70,6), iVar1 != 0)) &&
         (iVar1 = FUN_180590e20(local_70,lVar2 + 4,*(undefined *)(lVar2 + 0xe)), iVar1 != 0)) &&
        ((iVar1 = FUN_180590d60(local_d0,local_a0,0x20000010), iVar1 != 0 &&
         (iVar1 = FUN_180590d60(local_a0,local_40,4), iVar1 != 0)))) &&
       ((iVar1 = FUN_180590e20(local_40,param_7,param_8), iVar1 != 0 &&
        ((iVar1 = FUN_180591220(local_a0,param_4), iVar1 != 0 &&
         (iVar1 = FUN_180590820(param_1), iVar1 != 0)))))) {
      uVar3 = FUN_1805f5790(lVar2,param_2,param_4,param_5,param_6,param_7,param_8,1);
      return uVar3;
    }
  }
  return 0;
}


/* address=1805f55f0 name=FUN_1805f55f0 */

undefined8 FUN_1805f55f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805f5640 name=FUN_1805f5640 */

undefined8 FUN_1805f5640(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805f5680 name=FUN_1805f5680 */

undefined8 FUN_1805f5680(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_58 [2];
  undefined local_50 [16];
  undefined local_40 [64];
  
  iVar1 = FUN_180590610(local_40,param_2 << 1);
  if (iVar1 != 0) {
    FUN_18059e730(local_50,param_1,param_2);
    do {
      lVar2 = FUN_18059e7c0(local_50);
      if (lVar2 == 0) {
        iVar1 = FUN_1805f6840(local_40,0);
        if ((iVar1 != 0) && (iVar1 = FUN_180590740(local_40,param_3,param_4), iVar1 != 0)) {
          return 1;
        }
        goto LAB_1805f576a;
      }
      iVar1 = FUN_1805f6340(local_50,local_58);
    } while ((iVar1 != 0) && (iVar1 = FUN_1805f6840(local_40,local_58[0]), iVar1 != 0));
    FUN_18050f6f0(0x13,0,0x83,s_D__a_1_s_target_x86_64_pc_window_180979de0,0x5a);
LAB_1805f576a:
    FUN_1805906d0(local_40);
  }
  return 0;
}


/* address=1805f5790 name=FUN_1805f5790 */

void FUN_1805f5790(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70 [24];
  undefined local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_d8;
  local_80 = (**(code **)(param_1 + 0x10))();
  local_78 = (**(code **)(param_1 + 0x18))();
  uVar1 = FUN_18055f380(local_80);
  local_a8 = (ulonglong)uVar1;
  local_98 = local_78;
  local_a0 = local_58;
  local_b8 = (undefined *)CONCAT71(local_b8._1_7_,1);
  local_b0 = param_3;
  iVar2 = FUN_1805f4df0(param_4,param_5,param_6,param_7);
  if (iVar2 != 0) {
    uVar1 = FUN_18055f3a0(local_80);
    local_a8 = (ulonglong)uVar1;
    local_98 = local_78;
    local_a0 = local_70;
    local_b8 = (undefined *)CONCAT71(local_b8._1_7_,2);
    local_b0 = param_3;
    iVar2 = FUN_1805f4df0(param_4,param_5,param_6,param_7);
    if (iVar2 != 0) {
      local_b0 = param_8;
      local_b8 = local_70;
      local_88 = FUN_18055ded0(param_2,local_80,0,local_58);
      FUN_18058f7b0(local_58,0x40);
      FUN_18058f7b0(local_70,0x10);
      goto LAB_1805f591c;
    }
  }
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xf5);
  FUN_18050f6f0(0x13,0,0x6e,s_D__a_1_s_target_x86_64_pc_window_18097a100);
LAB_1805f591c:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=1805f5a90 name=FUN_1805f5a90 */

undefined * FUN_1805f5a90(int param_1)

{
  uint local_18;
  
  local_18 = 0;
  while( true ) {
    if (3 < local_18) {
      return (undefined *)0x0;
    }
    if (((*(int *)(&DAT_1807a3f60 + (ulonglong)local_18 * 0x28) == param_1) &&
        ((&PTR_LAB_1807a3f70)[(ulonglong)local_18 * 5] != (undefined *)0x0)) &&
       ((&PTR_FUN_1807a3f78)[(ulonglong)local_18 * 5] != (undefined *)0x0)) break;
    local_18 = local_18 + 1;
  }
  return &DAT_1807a3f60 + (ulonglong)local_18 * 0x28;
}


/* address=1805f5b20 name=FUN_1805f5b20 */

undefined8 FUN_1805f5b20(void *param_1,size_t param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  int local_48 [2];
  undefined8 local_40;
  undefined local_38 [56];
  
  iVar1 = FUN_1805f5ef0(param_1,local_48);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else if (local_48[0] == 0) {
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
    uVar3 = FUN_18059e7c0(param_1);
    iVar1 = FUN_180590610(local_38,uVar3);
    if (((iVar1 != 0) && (iVar1 = FUN_1805f60b0(param_1,local_38,0,0,0), iVar1 != 0)) &&
       (iVar1 = FUN_180590740(local_38,param_3,&local_40), iVar1 != 0)) {
      FUN_18059e730(param_2,*param_3,local_40);
      return 1;
    }
    FUN_1805906d0(local_38);
    uVar3 = 0;
  }
  return uVar3;
}


/* address=1805f5c40 name=FUN_1805f5c40 */

ulong FUN_1805f5c40(wchar_t *param_1,wchar_t **param_2,undefined8 *param_3,uint param_4,uint param_5
                   )

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  wchar_t *local_60 [2];
  wchar_t *local_50 [2];
  undefined local_40 [64];
  
  if ((param_4 & 0x20000000) != 0) {
    FID_conflict__assert
              (u___outer_tag___CBS_ASN1_CONSTRUCT_18097a850,
               u_D__a_1_s_target_x86_64_pc_window_18097a750,0xe2);
  }
  if ((param_5 & 0x20000000) != 0) {
    FID_conflict__assert
              (u___inner_tag___CBS_ASN1_CONSTRUCT_18097a9a0,
               u_D__a_1_s_target_x86_64_pc_window_18097a8a0,0xe3);
  }
  iVar1 = FUN_1805f5e30(param_5);
  if (iVar1 == 0) {
    FID_conflict__assert
              (u_is_string_type_inner_tag__18097aae8,u_D__a_1_s_target_x86_64_pc_window_18097a9f0,
               0xe4);
  }
  iVar1 = FUN_18059efe0(param_1,param_4);
  if (iVar1 == 0) {
    uVar3 = FUN_18059e7c0(param_1);
    iVar1 = FUN_180590610(local_40,uVar3);
    if (iVar1 != 0) {
      uVar2 = wcstoul(param_1,local_60,param_4 | 0x20000000);
      while (uVar2 != 0) {
        lVar4 = FUN_18059e7c0(local_60);
        if (lVar4 == 0) {
          iVar1 = FUN_180590740(local_40,&local_78,&local_68);
          if (iVar1 != 0) {
            FUN_18059e730(param_2,local_78,local_68);
            *param_3 = local_78;
            return 1;
          }
          break;
        }
        uVar2 = wcstoul((wchar_t *)local_60,local_50,param_5);
        if (uVar2 == 0) break;
        local_70 = FUN_18059e7c0(local_50);
        uVar3 = FUN_18059e7a0(local_50);
        uVar2 = FUN_180590e20(local_40,uVar3,local_70);
      }
    }
    FUN_1805906d0(local_40);
    uVar2 = 0;
  }
  else {
    *param_3 = 0;
    uVar2 = wcstoul(param_1,param_2,param_4);
  }
  return uVar2;
}


/* address=1805f5e30 name=FUN_1805f5e30 */

undefined8 FUN_1805f5e30(uint param_1)

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


/* address=1805f5ef0 name=FUN_1805f5ef0 */

undefined8 FUN_1805f5ef0(undefined8 param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint local_48;
  undefined local_44 [4];
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [16];
  undefined local_20 [32];
  
  if (param_3 <= DAT_1807a4000) {
    local_40 = FUN_18059e7c0(param_1);
    uVar2 = FUN_18059e7a0(param_1);
    FUN_18059e730(local_30,uVar2,local_40);
    *param_2 = 0;
    do {
      do {
        lVar3 = FUN_18059e7c0(local_30);
        if (lVar3 == 0) {
          return 1;
        }
        iVar1 = FUN_18059f130(local_30,local_20,&local_48,&local_38,param_2,local_44);
        if (iVar1 == 0) {
          return 0;
        }
        if (*param_2 != 0) {
          return 1;
        }
      } while ((local_48 & 0x20000000) == 0);
      iVar1 = FUN_1805f5e30(local_48);
      if (iVar1 != 0) {
        *param_2 = 1;
        return 1;
      }
      iVar1 = FUN_18059e770(local_20,local_38);
    } while ((iVar1 != 0) && (iVar1 = FUN_1805f5ef0(local_20,param_2,param_3 + 1), iVar1 != 0));
  }
  return 0;
}


/* address=1805f6040 name=FUN_1805f6040 */

undefined8 FUN_1805f6040(undefined8 param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_18059e7c0(param_1);
  if (((1 < uVar1) && (pcVar2 = (char *)FUN_18059e7a0(param_1), *pcVar2 == '\0')) &&
     (lVar3 = FUN_18059e7a0(param_1), *(char *)(lVar3 + 1) == '\0')) {
    uVar4 = FUN_18059e770(param_1,2);
    return uVar4;
  }
  return 0;
}


/* address=1805f60b0 name=FUN_1805f60b0 */

bool FUN_1805f60b0(undefined8 param_1,undefined *param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined *local_68;
  int local_60 [2];
  undefined local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [56];
  
  if ((param_3 & 0x20000000) != 0) {
    FID_conflict__assert
              (u___string_tag___CBS_ASN1_CONSTRUC_18097a700,
               u_D__a_1_s_target_x86_64_pc_window_18097a600,0x73);
  }
  if (param_5 <= DAT_1807a4000) {
    do {
      while( true ) {
        lVar2 = FUN_18059e7c0(param_1);
        if (lVar2 == 0) {
          return param_4 == 0;
        }
        if ((param_4 != 0) && (iVar1 = FUN_1805f6040(param_1), iVar1 != 0)) {
          return true;
        }
        uVar4 = 0;
        local_70 = param_3;
        iVar1 = FUN_18059f130(param_1,local_58,&local_78,&local_48,0,local_60);
        if (iVar1 == 0) {
          return false;
        }
        if (param_3 == 0) {
          local_74 = local_78;
          if (((local_78 & 0x20000000) != 0) && (iVar1 = FUN_1805f5e30(local_78), iVar1 != 0)) {
            local_74 = local_74 & 0xdfffffff;
            local_70 = local_74;
          }
          iVar1 = FUN_180590d60(param_2,local_38,local_74);
          if (iVar1 == 0) {
            return false;
          }
          local_68 = local_38;
        }
        else {
          local_68 = param_2;
          if ((local_78 & 0xdfffffff) != param_3) {
            return false;
          }
        }
        if (local_60[0] != 0) break;
        iVar1 = FUN_18059e770(local_58,local_48);
        if (iVar1 == 0) {
          return false;
        }
        if ((local_78 & 0x20000000) == 0) {
          local_40 = FUN_18059e7c0(local_58);
          uVar3 = FUN_18059e7a0(local_58);
          iVar1 = FUN_180590e20(local_68,uVar3,local_40);
          if (iVar1 == 0) {
            return false;
          }
        }
        else {
          iVar1 = FUN_1805f60b0(local_58,local_68,local_70,0,CONCAT44(uVar4,param_5 + 1));
          if (iVar1 == 0) {
            return false;
          }
        }
        iVar1 = FUN_180590820(param_2);
        if (iVar1 == 0) {
          return false;
        }
      }
      iVar1 = FUN_1805f60b0(param_1,local_68,local_70,1,CONCAT44(uVar4,param_5 + 1));
    } while ((iVar1 != 0) && (iVar1 = FUN_180590820(param_2), iVar1 != 0));
  }
  return false;
}


/* address=1805f6340 name=FUN_1805f6340 */

undefined8 FUN_1805f6340(undefined8 param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte local_28 [4];
  uint local_24;
  uint local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  iVar1 = FUN_18059e9c0(param_1,local_28);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (local_28[0] < 0x80) {
    *param_2 = (uint)local_28[0];
    uVar2 = 1;
  }
  else {
    if ((local_28[0] & 0xe0) == 0xc0) {
      local_24 = local_28[0] & 0x1f;
      local_18 = 1;
      local_20 = 0x80;
    }
    else if ((local_28[0] & 0xf0) == 0xe0) {
      local_24 = local_28[0] & 0xf;
      local_18 = 2;
      local_20 = 0x800;
    }
    else {
      if ((local_28[0] & 0xf8) != 0xf0) {
        return 0;
      }
      local_24 = local_28[0] & 7;
      local_18 = 3;
      local_20 = 0x10000;
    }
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      iVar1 = FUN_18059e9c0(param_1,local_28);
      if ((iVar1 == 0) || ((local_28[0] & 0xc0) != 0x80)) {
        return 0;
      }
      local_24 = local_24 << 6 | local_28[0] & 0x3f;
    }
    iVar1 = FUN_1805f68f0(local_24);
    if ((iVar1 == 0) || (local_24 < local_20)) {
      uVar2 = 0;
    }
    else {
      *param_2 = local_24;
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=1805f6520 name=FUN_1805f6520 */

undefined8 FUN_1805f6520(undefined8 param_1,uint *param_2)

{
  int iVar1;
  ushort local_18 [12];
  
  iVar1 = FUN_18059ea10(param_1,local_18);
  if ((iVar1 != 0) && (iVar1 = FUN_1805f68f0(local_18[0]), iVar1 != 0)) {
    *param_2 = (uint)local_18[0];
    return 1;
  }
  return 0;
}


/* address=1805f6580 name=FUN_1805f6580 */

undefined4 FUN_1805f6580(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_18059eb00(param_1,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_1805f68f0(*param_2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=1805f65e0 name=FUN_1805f65e0 */

undefined8 FUN_1805f65e0(uint param_1)

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


/* address=1805f6620 name=FUN_1805f6620 */

ulonglong FUN_1805f6620(undefined8 param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined local_res10;
  uint local_18;
  uint local_14;
  uint local_10;
  
  iVar1 = FUN_1805f68f0(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 < 0x80) {
    local_res10 = (undefined)param_2;
    uVar2 = FUN_180591010(param_1,local_res10);
    return uVar2;
  }
  if (param_2 < 0x800) {
    iVar1 = FUN_180591010(param_1,param_2 >> 6 & 0xff | 0xc0);
    if ((iVar1 == 0) || (iVar1 = FUN_180591010(param_1,param_2 & 0x3f | 0x80), iVar1 == 0)) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    return (ulonglong)local_18;
  }
  if (param_2 < 0x10000) {
    iVar1 = FUN_180591010(param_1,param_2 >> 0xc & 0xff | 0xe0);
    if (((iVar1 == 0) || (iVar1 = FUN_180591010(param_1,param_2 >> 6 & 0x3f | 0x80), iVar1 == 0)) ||
       (iVar1 = FUN_180591010(param_1,param_2 & 0x3f | 0x80), iVar1 == 0)) {
      local_14 = 0;
    }
    else {
      local_14 = 1;
    }
    return (ulonglong)local_14;
  }
  if (param_2 < 0x110000) {
    iVar1 = FUN_180591010(param_1,param_2 >> 0x12 & 0xff | 0xf0);
    if ((((iVar1 == 0) || (iVar1 = FUN_180591010(param_1,param_2 >> 0xc & 0x3f | 0x80), iVar1 == 0))
        || (iVar1 = FUN_180591010(param_1,param_2 >> 6 & 0x3f | 0x80), iVar1 == 0)) ||
       (iVar1 = FUN_180591010(param_1,param_2 & 0x3f | 0x80), iVar1 == 0)) {
      local_10 = 0;
    }
    else {
      local_10 = 1;
    }
    return (ulonglong)local_10;
  }
  return 0;
}


/* address=1805f67f0 name=FUN_1805f67f0 */

undefined4 FUN_1805f67f0(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined local_res10;
  
  if (param_2 < 0x100) {
    local_res10 = (undefined)param_2;
    iVar1 = FUN_180591010(param_1,local_res10);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=1805f6840 name=FUN_1805f6840 */

undefined4 FUN_1805f6840(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined2 local_res10;
  
  if ((param_2 < 0x10000) && (iVar1 = FUN_1805f68f0(param_2), iVar1 != 0)) {
    local_res10 = (undefined2)param_2;
    iVar1 = FUN_180591040(param_1,local_res10);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=1805f68f0 name=FUN_1805f68f0 */

undefined8 FUN_1805f68f0(uint param_1)

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


/* address=1805f6940 name=FUN_1805f6940 */

void FUN_1805f6940(undefined8 param_1,byte *param_2)

{
  FUN_18055bbd0(param_2,0x20);
  *param_2 = *param_2 | 7;
  param_2[0x1f] = param_2[0x1f] & 0xbf;
  param_2[0x1f] = param_2[0x1f] | 0x80;
  FUN_1805f6a60(param_1,param_2);
  return;
}


/* address=1805f69f0 name=FUN_1805f69f0 */

bool FUN_1805f69f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_1806047f0(param_1,param_2,param_3);
  iVar1 = FUN_18058f7e0(&DAT_1807a4050,param_1,0x20);
  return iVar1 != 0;
}


/* address=1805f6a60 name=FUN_1805f6a60 */

void FUN_1805f6a60(undefined8 param_1,undefined8 param_2)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_178;
  FUN_1805f71e0(local_38,param_2,0x20);
  local_38[0] = local_38[0] & 0xf8;
  bStack_19 = bStack_19 & 0x7f | 0x40;
  FUN_1805f7f70(local_d8,local_38);
  FUN_1805fe490(local_108,local_88,local_b0);
  FUN_1805fe5e0(local_130,local_88,local_b0);
  FUN_1805ff0a0(local_158,local_130);
  FUN_1805fea40(local_158,local_108,local_158);
  FUN_1805fe320(param_1,local_158);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_178);
  return;
}


/* address=1805f6bb0 name=FUN_1805f6bb0 */

void FUN_1805f6bb0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_58;
  FUN_18055bbd0(local_38,0x20);
  FUN_1805f70b0(param_1,param_2,local_38);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=1805f6c10 name=FUN_1805f6c10 */

void FUN_1805f6c10(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_278;
  FUN_180531de0(param_4,0x20,local_d8);
  local_d8[0] = local_d8[0] & 0xf8;
  bStack_b9 = bStack_b9 & 0x3f | 0x40;
  FUN_180531a10(local_258);
  FUN_180531b40(local_258,local_b8,0x20);
  FUN_180531b40(local_258,param_2,param_3);
  FUN_180531da0(local_98,local_258);
  FUN_1805f85b0(local_98);
  FUN_1805f7f70(local_178,local_98);
  FUN_1805ff940(param_1,local_178);
  FUN_180531a10(local_258);
  FUN_180531b40(local_258,param_1,0x20);
  FUN_180531b40(local_258,param_4 + 0x20,0x20);
  FUN_180531b40(local_258,param_2,param_3);
  FUN_180531da0(local_58,local_258);
  FUN_1805f85b0(local_58);
  FUN_180600f90(param_1 + 0x20,local_58,local_d8,local_98);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_278);
  return;
}


/* address=1805f6e20 name=FUN_1805f6e20 */

void FUN_1805f6e20(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_338;
  if (((*(byte *)(param_3 + 0x3f) & 0xe0) == 0) &&
     (iVar1 = FUN_1805f73e0(local_2d8,param_4), iVar1 != 0)) {
    FUN_1805fee90(local_300,local_2d8);
    FUN_1805fe730(local_2d8,local_300);
    FUN_1805fee90(local_300,local_260);
    FUN_1805fe730(local_260,local_300);
    FUN_1805f71e0(local_38,param_4,0x20);
    FUN_1805f71e0(local_b8,param_3,0x20);
    FUN_1805f71e0(local_d8,param_3 + 0x20,0x20);
    local_318 = 3;
    while (local_308 = FUN_1805f72c0(local_d8 + local_318 * 8),
          local_308 <= *(ulonglong *)(&DAT_1807a4030 + local_318 * 8)) {
      if (local_308 < *(ulonglong *)(&DAT_1807a4030 + local_318 * 8)) {
        FUN_180531a10(local_238);
        FUN_180531b40(local_238,param_3,0x20);
        FUN_180531b40(local_238,param_4,0x20);
        FUN_180531b40(local_238,param_1,param_2);
        FUN_180531da0(local_78,local_238);
        FUN_1805f85b0(local_78);
        FUN_180600a30(local_158,local_78,local_2d8,local_d8);
        FUN_1805f72f0(local_98,local_158);
        iVar1 = FUN_18058f7e0(local_98,local_b8,0x20);
        local_310 = (uint)(iVar1 == 0);
        break;
      }
      if (local_318 == 0) break;
      local_318 = local_318 + -1;
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_338);
  return;
}


/* address=1805f70b0 name=FUN_1805f70b0 */

void FUN_1805f70b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined auStack_118 [32];
  undefined local_f8 [160];
  byte local_58 [31];
  byte bStack_39;
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_118;
  FUN_180531de0(param_3,0x20,local_58);
  local_58[0] = local_58[0] & 0xf8;
  bStack_39 = bStack_39 & 0x7f | 0x40;
  FUN_1805f7f70(local_f8,local_58);
  FUN_1805ff940(param_1,local_f8);
  FUN_1805f71e0(param_2,param_3,0x20);
  FUN_1805f71e0(param_2 + 0x20,param_1,0x20);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=1805f71e0 name=FUN_1805f71e0 */

undefined8 FUN_1805f71e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805f7230 name=FUN_1805f7230 */

undefined8 FUN_1805f7230(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805f7280 name=FUN_1805f7280 */

undefined8 FUN_1805f7280(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1805f72c0 name=FUN_1805f72c0 */

undefined8 FUN_1805f72c0(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_1805f71e0(local_18,param_1,8);
  return local_18[0];
}


/* address=1805f72f0 name=FUN_1805f72f0 */

void FUN_1805f72f0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_b8 [32];
  longlong local_98;
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  FUN_1805ff420(local_90,param_2 + 0x50);
  FUN_1805fe9f0(local_40,param_2,local_90);
  FUN_1805fe9f0(local_68,param_2 + 0x28,local_90);
  FUN_1805fe320(param_1,local_68);
  local_98 = 0x1f;
  iVar1 = FUN_1805ff510(local_40);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + local_98) ^ (byte)(iVar1 << 7);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=1805f73e0 name=FUN_1805f73e0 */

void FUN_1805f73e0(longlong param_1,longlong param_2)

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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_128;
  FUN_1805fe2a0(param_1 + 0x28,param_2);
  FUN_1805fe410(param_1 + 0x50);
  FUN_1805fec10(local_d8,param_1 + 0x28);
  FUN_1805fe9f0(local_100,local_d8,&DAT_1807a4070);
  FUN_1805fe5e0(local_b0,local_d8,param_1 + 0x50);
  FUN_1805fe730(local_88,local_b0);
  FUN_1805fe490(local_b0,local_100,param_1 + 0x50);
  FUN_1805fea90(local_d8,local_88,local_b0);
  FUN_1805ff5d0(param_1,local_d8);
  FUN_1805fe9f0(param_1,param_1,local_88);
  FUN_1805fec10(local_100,param_1);
  FUN_1805fea90(local_100,local_100,local_b0);
  FUN_1805fe5e0(local_60,local_100,local_88);
  iVar1 = FUN_1805ff480(local_60);
  if (iVar1 != 0) {
    FUN_1805fe490(local_60,local_100,local_88);
    iVar1 = FUN_1805ff480(local_60);
    if (iVar1 != 0) goto LAB_1805f763c;
    FUN_1805fe9f0(param_1,param_1,&DAT_1807a4098);
  }
  iVar1 = FUN_1805ff510(param_1);
  if (iVar1 != (int)(uint)*(byte *)(param_2 + 0x1f) >> 7) {
    FUN_1805fee90(local_38,param_1);
    FUN_1805fe730(param_1,local_38);
  }
  local_108 = param_1 + 0x78;
  FUN_1805fe9f0(local_108,param_1,param_1 + 0x28);
LAB_1805f763c:
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_128);
  return;
}


/* address=1805f7660 name=FUN_1805f7660 */

void FUN_1805f7660(longlong param_1,longlong param_2)

{
  FUN_1805fe490(param_1,param_2 + 0x28,param_2);
  FUN_1805fe5e0(param_1 + 0x28,param_2 + 0x28,param_2);
  FUN_1805ff040(param_1 + 0x50,param_2 + 0x50);
  FUN_1805fe950(param_1 + 0x78,param_2 + 0x78,&DAT_1807a40c0);
  return;
}


/* address=1805f7710 name=FUN_1805f7710 */

void FUN_1805f7710(longlong param_1,longlong param_2)

{
  FUN_1805feae0(param_1,param_2,param_2 + 0x78);
  FUN_1805feae0(param_1 + 0x28,param_2 + 0x28,param_2 + 0x50);
  FUN_1805feae0(param_1 + 0x50,param_2 + 0x50,param_2 + 0x78);
  return;
}


/* address=1805f77c0 name=FUN_1805f77c0 */

void FUN_1805f77c0(longlong param_1,longlong param_2)

{
  FUN_1805feae0(param_1,param_2,param_2 + 0x78);
  FUN_1805feae0(param_1 + 0x28,param_2 + 0x28,param_2 + 0x50);
  FUN_1805feae0(param_1 + 0x50,param_2 + 0x50,param_2 + 0x78);
  FUN_1805feae0(param_1 + 0x78,param_2,param_2 + 0x28);
  return;
}


/* address=1805f78a0 name=FUN_1805f78a0 */

void FUN_1805f78a0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined local_b8 [40];
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_e8;
  local_c8 = param_1;
  FUN_1805fe490(param_1,param_2 + 0x28,param_2);
  local_c0 = param_1 + 0x28;
  FUN_1805fe5e0(local_c0,param_2 + 0x28,param_2);
  FUN_1805feae0(local_b8,param_1,param_3);
  FUN_1805feae0(local_68,param_1 + 0x28,param_3 + 0x28);
  FUN_1805fea40(local_40,param_3 + 0x78,param_2 + 0x78);
  FUN_1805fea90(local_90,param_2 + 0x50,param_3 + 0x50);
  FUN_1805fe490(param_1 + 0x78,local_90,local_90);
  FUN_1805fe5e0(param_1,local_b8,local_68);
  FUN_1805fe490(param_1 + 0x28,local_b8,local_68);
  FUN_1805fe730(local_b8,param_1 + 0x78);
  FUN_1805fe490(param_1 + 0x50,local_b8,local_40);
  FUN_1805fe5e0(param_1 + 0x78,local_b8,local_40);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_e8);
  return;
}


/* address=1805f7ab0 name=FUN_1805f7ab0 */

void FUN_1805f7ab0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined local_b8 [40];
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_e8;
  local_c8 = param_1;
  FUN_1805fe490(param_1,param_2 + 0x28,param_2);
  local_c0 = param_1 + 0x28;
  FUN_1805fe5e0(local_c0,param_2 + 0x28,param_2);
  FUN_1805feae0(local_b8,param_1,param_3 + 0x28);
  FUN_1805feae0(local_68,param_1 + 0x28,param_3);
  FUN_1805fea40(local_40,param_3 + 0x78,param_2 + 0x78);
  FUN_1805fea90(local_90,param_2 + 0x50,param_3 + 0x50);
  FUN_1805fe490(param_1 + 0x78,local_90,local_90);
  FUN_1805fe5e0(param_1,local_b8,local_68);
  FUN_1805fe490(param_1 + 0x28,local_b8,local_68);
  FUN_1805fe730(local_b8,param_1 + 0x78);
  FUN_1805fe5e0(param_1 + 0x50,local_b8,local_40);
  FUN_1805fe490(param_1 + 0x78,local_b8,local_40);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_e8);
  return;
}


/* address=1805f7f70 name=FUN_1805f7f70 */

void FUN_1805f7f70(undefined8 param_1,longlong param_2)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_238;
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
  FUN_1805ffa80(param_1);
  for (local_218 = 1; local_218 < 0x40; local_218 = local_218 + 2) {
    local_210 = (longlong)local_218;
    FUN_1806003a0(local_d8,local_218 / 2,abStack_58[local_210]);
    FUN_1805ffe60(local_1f8,param_1,local_d8);
    FUN_1805f77c0(param_1,local_1f8);
  }
  FUN_1805ffdf0(local_1f8,param_1);
  FUN_1805f7710(local_158,local_1f8);
  FUN_1805ffc60(local_1f8,local_158);
  FUN_1805f7710(local_158,local_1f8);
  FUN_1805ffc60(local_1f8,local_158);
  FUN_1805f7710(local_158,local_1f8);
  FUN_1805ffc60(local_1f8,local_158);
  FUN_1805f77c0(param_1,local_1f8);
  for (local_218 = 0; local_218 < 0x40; local_218 = local_218 + 2) {
    local_208 = (longlong)local_218;
    FUN_1806003a0(local_d8,local_218 / 2,abStack_58[local_208]);
    FUN_1805ffe60(local_1f8,param_1,local_d8);
    FUN_1805f77c0(param_1,local_1f8);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_238);
  return;
}


/* address=1805f85b0 name=FUN_1805f85b0 */

void FUN_1805f85b0(undefined *param_1)

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
  
  uVar1 = FUN_1805fe0c0(param_1);
  uVar2 = FUN_1805fe140(param_1 + 2);
  uVar3 = FUN_1805fe0c0(param_1 + 5);
  uVar4 = FUN_1805fe140(param_1 + 7);
  uVar5 = FUN_1805fe140(param_1 + 10);
  uVar6 = FUN_1805fe0c0(param_1 + 0xd);
  uVar7 = FUN_1805fe140(param_1 + 0xf);
  uVar8 = FUN_1805fe0c0(param_1 + 0x12);
  uVar9 = FUN_1805fe0c0(param_1 + 0x15);
  uVar10 = FUN_1805fe140(param_1 + 0x17);
  uVar11 = FUN_1805fe0c0(param_1 + 0x1a);
  uVar12 = FUN_1805fe140(param_1 + 0x1c);
  uVar13 = FUN_1805fe140(param_1 + 0x1f);
  uVar14 = FUN_1805fe0c0(param_1 + 0x22);
  uVar15 = FUN_1805fe140(param_1 + 0x24);
  uVar16 = FUN_1805fe0c0(param_1 + 0x27);
  uVar17 = FUN_1805fe0c0(param_1 + 0x2a);
  uVar18 = FUN_1805fe140(param_1 + 0x2c);
  uVar19 = FUN_1805fe0c0(param_1 + 0x2f);
  uVar19 = uVar19 >> 2 & 0x1fffff;
  uVar20 = FUN_1805fe140(param_1 + 0x31);
  uVar20 = uVar20 >> 7 & 0x1fffff;
  uVar21 = FUN_1805fe140(param_1 + 0x34);
  uVar21 = uVar21 >> 4 & 0x1fffff;
  uVar22 = FUN_1805fe0c0(param_1 + 0x37);
  uVar22 = uVar22 >> 1 & 0x1fffff;
  uVar23 = FUN_1805fe140(param_1 + 0x39);
  uVar23 = uVar23 >> 6 & 0x1fffff;
  uVar24 = FUN_1805fe140(param_1 + 0x3c);
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
  lVar25 = FUN_180600f70(lVar25);
  lVar26 = lVar40 + 0x100000 >> 0x15;
  lVar43 = (uVar10 >> 5 & 0x1fffff) + uVar22 * 0xa2c13 + uVar21 * 0x72d18 + uVar20 * 0x9fb67 +
           uVar19 * -0xf39ad + lVar26;
  lVar26 = FUN_180600f70(lVar26);
  lVar27 = lVar41 + 0x100000 >> 0x15;
  lVar44 = (uVar12 >> 7 & 0x1fffff) + uVar24 * 0xa2c13 + uVar23 * 0x72d18 + uVar22 * 0x9fb67 +
           uVar21 * -0xf39ad + uVar20 * 0x215d1 + uVar19 * -0xa6f7d + lVar27;
  lVar27 = FUN_180600f70(lVar27);
  lVar28 = lVar38 + 0x100000 >> 0x15;
  lVar45 = (uVar14 >> 1 & 0x1fffff) + uVar24 * 0x9fb67 + uVar23 * -0xf39ad + uVar22 * 0x215d1 +
           uVar21 * -0xa6f7d + lVar28;
  lVar28 = FUN_180600f70(lVar28);
  lVar29 = lVar37 + 0x100000 >> 0x15;
  lVar46 = (uVar16 >> 3 & 0x1fffff) + uVar24 * 0x215d1 + uVar23 * -0xa6f7d + lVar29;
  lVar29 = FUN_180600f70(lVar29);
  lVar30 = lVar36 + 0x100000 >> 0x15;
  lVar47 = (uVar18 >> 5 & 0x1fffff) + lVar30;
  lVar30 = FUN_180600f70(lVar30);
  lVar31 = lVar42 + 0x100000 >> 0x15;
  lVar32 = FUN_180600f70(lVar31);
  lVar33 = lVar43 + 0x100000 >> 0x15;
  lVar34 = FUN_180600f70(lVar33);
  lVar35 = lVar44 + 0x100000 >> 0x15;
  lVar38 = (lVar38 - lVar28) + lVar35;
  lVar28 = FUN_180600f70(lVar35);
  lVar35 = lVar45 + 0x100000 >> 0x15;
  lVar37 = (lVar37 - lVar29) + lVar35;
  lVar29 = FUN_180600f70(lVar35);
  lVar45 = lVar45 - lVar29;
  lVar29 = lVar46 + 0x100000 >> 0x15;
  lVar35 = (lVar36 - lVar30) + lVar29;
  lVar29 = FUN_180600f70(lVar29);
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
  lVar25 = FUN_180600f70(lVar25);
  lVar26 = lVar52 + 0x100000 >> 0x15;
  lVar55 = (uVar4 >> 7 & 0x1fffff) + lVar46 * 0xa2c13 + lVar37 * 0x72d18 + lVar45 * 0x9fb67 +
           lVar38 * -0xf39ad + lVar26;
  lVar26 = FUN_180600f70(lVar26);
  lVar27 = lVar53 + 0x100000 >> 0x15;
  lVar45 = (uVar6 >> 1 & 0x1fffff) + lVar47 * 0xa2c13 + lVar35 * 0x72d18 + lVar46 * 0x9fb67 +
           lVar37 * -0xf39ad + lVar45 * 0x215d1 + lVar38 * -0xa6f7d + lVar27;
  lVar27 = FUN_180600f70(lVar27);
  lVar29 = lVar50 + 0x100000 >> 0x15;
  lVar46 = (lVar42 - lVar32) + lVar47 * 0x9fb67 + lVar35 * -0xf39ad + lVar46 * 0x215d1 +
           lVar37 * -0xa6f7d + lVar29;
  lVar29 = FUN_180600f70(lVar29);
  lVar30 = lVar49 + 0x100000 >> 0x15;
  lVar43 = (lVar43 - lVar34) + lVar47 * 0x215d1 + lVar35 * -0xa6f7d + lVar30;
  lVar30 = FUN_180600f70(lVar30);
  lVar31 = lVar48 + 0x100000 >> 0x15;
  lVar44 = (lVar44 - lVar28) + lVar31;
  lVar28 = FUN_180600f70(lVar31);
  lVar31 = lVar54 + 0x100000 >> 0x15;
  lVar32 = FUN_180600f70(lVar31);
  lVar33 = lVar55 + 0x100000 >> 0x15;
  lVar34 = FUN_180600f70(lVar33);
  lVar35 = lVar45 + 0x100000 >> 0x15;
  lVar36 = FUN_180600f70(lVar35);
  lVar37 = lVar46 + 0x100000 >> 0x15;
  lVar38 = FUN_180600f70(lVar37);
  lVar39 = lVar43 + 0x100000 >> 0x15;
  lVar40 = FUN_180600f70(lVar39);
  lVar41 = lVar44 + 0x100000 >> 0x15;
  lVar42 = FUN_180600f70(lVar41);
  lVar47 = (lVar51 - lVar25) + lVar41 * 0xa2c13;
  lVar25 = lVar47 >> 0x15;
  lVar51 = (lVar54 - lVar32) + lVar41 * 0x72d18 + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar32 = lVar51 >> 0x15;
  lVar52 = (lVar52 - lVar26) + lVar31 + lVar41 * 0x9fb67 + lVar32;
  lVar26 = FUN_180600f70(lVar32);
  lVar31 = lVar52 >> 0x15;
  lVar54 = (lVar55 - lVar34) + lVar41 * -0xf39ad + lVar31;
  lVar31 = FUN_180600f70(lVar31);
  lVar32 = lVar54 >> 0x15;
  lVar53 = (lVar53 - lVar27) + lVar33 + lVar41 * 0x215d1 + lVar32;
  lVar27 = FUN_180600f70(lVar32);
  lVar32 = lVar53 >> 0x15;
  lVar41 = (lVar45 - lVar36) + lVar41 * -0xa6f7d + lVar32;
  lVar32 = FUN_180600f70(lVar32);
  lVar33 = lVar41 >> 0x15;
  lVar45 = (lVar50 - lVar29) + lVar35 + lVar33;
  lVar29 = FUN_180600f70(lVar33);
  lVar33 = lVar45 >> 0x15;
  lVar38 = (lVar46 - lVar38) + lVar33;
  lVar33 = FUN_180600f70(lVar33);
  lVar34 = lVar38 >> 0x15;
  lVar46 = (lVar49 - lVar30) + lVar37 + lVar34;
  lVar30 = FUN_180600f70(lVar34);
  lVar34 = lVar46 >> 0x15;
  lVar40 = (lVar43 - lVar40) + lVar34;
  lVar34 = FUN_180600f70(lVar34);
  lVar35 = lVar40 >> 0x15;
  lVar39 = (lVar48 - lVar28) + lVar39 + lVar35;
  lVar28 = FUN_180600f70(lVar35);
  lVar35 = lVar39 >> 0x15;
  lVar42 = (lVar44 - lVar42) + lVar35;
  lVar35 = FUN_180600f70(lVar35);
  lVar36 = lVar42 >> 0x15;
  lVar37 = FUN_180600f70(lVar36);
  lVar43 = (lVar47 - lVar25) + lVar36 * 0xa2c13;
  lVar25 = lVar43 >> 0x15;
  lVar26 = (lVar51 - lVar26) + lVar36 * 0x72d18 + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar43 = lVar43 - lVar25;
  lVar25 = lVar26 >> 0x15;
  lVar31 = (lVar52 - lVar31) + lVar36 * 0x9fb67 + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar26 = lVar26 - lVar25;
  lVar25 = lVar31 >> 0x15;
  lVar27 = (lVar54 - lVar27) + lVar36 * -0xf39ad + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar31 = lVar31 - lVar25;
  lVar25 = lVar27 >> 0x15;
  lVar32 = (lVar53 - lVar32) + lVar36 * 0x215d1 + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar27 = lVar27 - lVar25;
  lVar25 = lVar32 >> 0x15;
  lVar29 = (lVar41 - lVar29) + lVar36 * -0xa6f7d + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar32 = lVar32 - lVar25;
  lVar25 = lVar29 >> 0x15;
  lVar33 = (lVar45 - lVar33) + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar29 = lVar29 - lVar25;
  lVar25 = lVar33 >> 0x15;
  lVar30 = (lVar38 - lVar30) + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar33 = lVar33 - lVar25;
  lVar25 = lVar30 >> 0x15;
  lVar34 = (lVar46 - lVar34) + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar30 = lVar30 - lVar25;
  lVar25 = lVar34 >> 0x15;
  lVar28 = (lVar40 - lVar28) + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar34 = lVar34 - lVar25;
  lVar25 = lVar28 >> 0x15;
  lVar36 = (lVar39 - lVar35) + lVar25;
  lVar25 = FUN_180600f70(lVar25);
  lVar28 = lVar28 - lVar25;
  lVar25 = lVar36 >> 0x15;
  lVar35 = (lVar42 - lVar37) + lVar25;
  lVar25 = FUN_180600f70(lVar25);
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


/* address=1805fa4a0 name=FUN_1805fa4a0 */

void FUN_1805fa4a0(longlong *param_1,undefined8 param_2,char param_3,ulonglong param_4,
                  ulonglong param_5)

{
  *param_1 = param_4 + param_5 + (ulonglong)(param_3 != '\0');
  *(bool *)param_2 =
       CARRY8(param_4,param_5) || CARRY8(param_4 + param_5,(ulonglong)(param_3 != '\0'));
  return;
}


/* address=1805fa4e0 name=FUN_1805fa4e0 */

void FUN_1805fa4e0(ulonglong *param_1,undefined *param_2,byte param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3 + param_4 + param_5;
  *param_1 = uVar1 & 0x7ffffffffffff;
  *param_2 = (char)(uVar1 >> 0x33);
  return;
}


/* address=1805fa560 name=FUN_1805fa560 */

void FUN_1805fa560(ulonglong *param_1,char *param_2,byte param_3,longlong param_4,longlong param_5)

{
  ulonglong uVar1;
  
  uVar1 = (param_4 - (ulonglong)param_3) - param_5;
  *param_1 = uVar1 & 0x7ffffffffffff;
  *param_2 = -(char)((longlong)uVar1 >> 0x33);
  return;
}


/* address=1805fa5f0 name=FUN_1805fa5f0 */

void FUN_1805fa5f0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

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


/* address=1805fa640 name=FUN_1805fa640 */

void FUN_1805fa640(ulonglong *param_1,char param_2,ulonglong param_3,ulonglong param_4)

{
  *param_1 = (longlong)-(param_2 != '\0') & param_4 | ~(longlong)-(param_2 != '\0') & param_3;
  return;
}


/* address=1805fa6d0 name=FUN_1805fa6d0 */

void FUN_1805fa6d0(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  FUN_1805fa5f0(&local_268,&local_258,param_2[4],param_3[4] * 0x13);
  FUN_1805fa5f0(&local_1e8,&local_1d8,param_2[4],param_3[3] * 0x13);
  FUN_1805fa5f0(&local_168,&local_158,param_2[4],param_3[2] * 0x13);
  FUN_1805fa5f0(&local_370,&local_360,param_2[4],param_3[1] * 0x13);
  FUN_1805fa5f0(&local_1e0,&local_1d0,param_2[3],param_3[4] * 0x13);
  FUN_1805fa5f0(&local_160,&local_150,param_2[3],param_3[3] * 0x13);
  FUN_1805fa5f0(&local_368,&local_358,param_2[3],param_3[2] * 0x13);
  FUN_1805fa5f0(&local_140,&local_130,param_2[2],param_3[4] * 0x13);
  FUN_1805fa5f0(&local_348,&local_338,param_2[2],param_3[3] * 0x13);
  FUN_1805fa5f0(&local_328,&local_318,param_2[1],param_3[4] * 0x13);
  FUN_1805fa5f0(&local_2e8,&local_2d8,param_2[4],*param_3);
  FUN_1805fa5f0(&local_2e0,&local_2d0,param_2[3],param_3[1]);
  FUN_1805fa5f0(&local_260,&local_250,param_2[3],*param_3);
  FUN_1805fa5f0(&local_2c0,&local_2b0,param_2[2],param_3[2]);
  FUN_1805fa5f0(&local_240,&local_230,param_2[2],param_3[1]);
  FUN_1805fa5f0(&local_1c0,&local_1b0,param_2[2],*param_3);
  FUN_1805fa5f0(&local_2a0,&local_290,param_2[1],param_3[3]);
  FUN_1805fa5f0(&local_220,&local_210,param_2[1],param_3[2]);
  FUN_1805fa5f0(&local_1a0,&local_190,param_2[1],param_3[1]);
  FUN_1805fa5f0(&local_120,&local_110,param_2[1],*param_3);
  FUN_1805fa5f0(&local_280,&local_270,*param_2,param_3[4]);
  FUN_1805fa5f0(&local_200,&local_1f0,*param_2,param_3[3]);
  FUN_1805fa5f0(&local_180,&local_170,*param_2,param_3[2]);
  FUN_1805fa5f0(&local_100,&local_f0,*param_2,param_3[1]);
  FUN_1805fa5f0(&local_308,&local_2f8,*param_2,*param_3);
  FUN_1805fa4a0(&local_350,&local_3d8,0,local_368,local_370);
  FUN_1805fa4a0(&local_340,&local_3bf,local_3d8,local_358,local_360);
  FUN_1805fa4a0(&local_330,&local_3d7,0,local_348,local_350);
  FUN_1805fa4a0(&local_320,&local_3be,local_3d7,local_338,local_340);
  FUN_1805fa4a0(&local_310,&local_3d6,0,local_328,local_330);
  FUN_1805fa4a0(&local_300,&local_3bd,local_3d6,local_318,local_320);
  FUN_1805fa4a0(&local_3a8,&local_3d5,0,local_308,local_310);
  FUN_1805fa4a0(&local_2f0,&local_3bc,local_3d5,local_2f8,local_300);
  local_e0 = local_3a8 >> 0x33 | local_2f0 << 0xd;
  local_58 = local_3a8 & 0x7ffffffffffff;
  FUN_1805fa4a0(&local_2c8,&local_3d4,0,local_2e0,local_2e8);
  FUN_1805fa4a0(&local_2b8,&local_3bb,local_3d4,local_2d0,local_2d8);
  FUN_1805fa4a0(&local_2a8,&local_3d3,0,local_2c0,local_2c8);
  FUN_1805fa4a0(&local_298,&local_3ba,local_3d3,local_2b0,local_2b8);
  FUN_1805fa4a0(&local_288,&local_3d2,0,local_2a0,local_2a8);
  FUN_1805fa4a0(&local_278,&local_3b9,local_3d2,local_290,local_298);
  FUN_1805fa4a0(&local_88,&local_3d1,0,local_280,local_288);
  FUN_1805fa4a0(local_78,&local_3b8,local_3d1,local_270,local_278);
  FUN_1805fa4a0(&local_248,&local_3d0,0,local_260,local_268);
  FUN_1805fa4a0(&local_238,&local_3b7,local_3d0,local_250,local_258);
  FUN_1805fa4a0(&local_228,&local_3cf,0,local_240,local_248);
  FUN_1805fa4a0(&local_218,&local_3b6,local_3cf,local_230,local_238);
  FUN_1805fa4a0(&local_208,&local_3ce,0,local_220,local_228);
  FUN_1805fa4a0(&local_1f8,&local_3b5,local_3ce,local_210,local_218);
  FUN_1805fa4a0(&local_a8,&local_3cd,0,local_200,local_208);
  FUN_1805fa4a0(&local_98,&local_3b4,local_3cd,local_1f0,local_1f8);
  FUN_1805fa4a0(&local_1c8,&local_3cc,0,local_1e0,local_1e8);
  FUN_1805fa4a0(&local_1b8,&local_3b3,local_3cc,local_1d0,local_1d8);
  FUN_1805fa4a0(&local_1a8,&local_3cb,0,local_1c0,local_1c8);
  FUN_1805fa4a0(&local_198,&local_3b2,local_3cb,local_1b0,local_1b8);
  FUN_1805fa4a0(&local_188,&local_3ca,0,local_1a0,local_1a8);
  FUN_1805fa4a0(&local_178,&local_3b1,local_3ca,local_190,local_198);
  FUN_1805fa4a0(&local_c8,&local_3c9,0,local_180,local_188);
  FUN_1805fa4a0(&local_b8,&local_3b0,local_3c9,local_170,local_178);
  FUN_1805fa4a0(&local_148,&local_3c8,0,local_160,local_168);
  FUN_1805fa4a0(&local_138,&local_3af,local_3c8,local_150,local_158);
  FUN_1805fa4a0(&local_128,&local_3c7,0,local_140,local_148);
  FUN_1805fa4a0(&local_118,&local_3ae,local_3c7,local_130,local_138);
  FUN_1805fa4a0(&local_108,&local_3c6,0,local_120,local_128);
  FUN_1805fa4a0(&local_f8,&local_3ad,local_3c6,local_110,local_118);
  FUN_1805fa4a0(&local_e8,&local_3c5,0,local_100,local_108);
  FUN_1805fa4a0(&local_d8,local_3ac,local_3c5,local_f0,local_f8);
  FUN_1805fa4a0(&local_3a0,&local_3c4,0,local_e0,local_e8);
  local_d0 = (ulonglong)local_3c4 + local_d8;
  local_c0 = local_3a0 >> 0x33 | local_d0 * 0x2000;
  local_50 = local_3a0 & 0x7ffffffffffff;
  FUN_1805fa4a0(&local_398,&local_3c3,0,local_c0,local_c8);
  local_b0 = (ulonglong)local_3c3 + local_b8;
  local_a0 = local_398 >> 0x33 | local_b0 * 0x2000;
  local_40 = local_398 & 0x7ffffffffffff;
  FUN_1805fa4a0(&local_390,&local_3c2,0,local_a0,local_a8);
  local_90 = (ulonglong)local_3c2 + local_98;
  local_80 = local_390 >> 0x33 | local_90 * 0x2000;
  local_20 = local_390 & 0x7ffffffffffff;
  FUN_1805fa4a0(local_388,local_3c1,0,local_80,local_88);
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


/* address=1805fb790 name=FUN_1805fb790 */

void FUN_1805fb790(ulonglong *param_1,undefined8 *param_2)

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
  FUN_1805fa5f0(&local_1a8,&local_198,param_2[4],local_2a0);
  FUN_1805fa5f0(&local_168,&local_158,param_2[3],local_2a8);
  FUN_1805fa5f0(&local_128,&local_118,param_2[3],local_298);
  FUN_1805fa5f0(&local_120,&local_110,param_2[2],local_2a8);
  FUN_1805fa5f0(&local_230,&local_220,param_2[2],local_248);
  FUN_1805fa5f0(&local_1e8,&local_1d8,param_2[2],param_2[2]);
  FUN_1805fa5f0(&local_228,&local_218,param_2[1],local_2a8);
  FUN_1805fa5f0(&local_1e0,&local_1d0,param_2[1],local_290);
  FUN_1805fa5f0(&local_1a0,&local_190,param_2[1],local_288);
  FUN_1805fa5f0(&local_160,&local_150,param_2[1],param_2[1]);
  FUN_1805fa5f0(&local_1c0,&local_1b0,*param_2,local_240);
  FUN_1805fa5f0(&local_180,&local_170,*param_2,local_290);
  FUN_1805fa5f0(&local_140,&local_130,*param_2,local_288);
  FUN_1805fa5f0(&local_100,&local_f0,*param_2,local_238);
  FUN_1805fa5f0(&local_208,&local_1f8,*param_2,*param_2);
  FUN_1805fa4a0(&local_210,&local_2c8,0,local_228,local_230);
  FUN_1805fa4a0(&local_200,&local_2b9,local_2c8,local_218,local_220);
  FUN_1805fa4a0(&local_280,&local_2c7,0,local_208,local_210);
  FUN_1805fa4a0(&local_1f0,&local_2b8,local_2c7,local_1f8,local_200);
  local_e0 = local_280 >> 0x33 | local_1f0 << 0xd;
  local_58 = local_280 & 0x7ffffffffffff;
  FUN_1805fa4a0(&local_1c8,&local_2c6,0,local_1e0,local_1e8);
  FUN_1805fa4a0(&local_1b8,&local_2b7,local_2c6,local_1d0,local_1d8);
  FUN_1805fa4a0(&local_88,&local_2c5,0,local_1c0,local_1c8);
  FUN_1805fa4a0(local_78,&local_2b6,local_2c5,local_1b0,local_1b8);
  FUN_1805fa4a0(&local_188,&local_2c4,0,local_1a0,local_1a8);
  FUN_1805fa4a0(&local_178,&local_2b5,local_2c4,local_190,local_198);
  FUN_1805fa4a0(&local_a8,&local_2c3,0,local_180,local_188);
  FUN_1805fa4a0(&local_98,&local_2b4,local_2c3,local_170,local_178);
  FUN_1805fa4a0(&local_148,&local_2c2,0,local_160,local_168);
  FUN_1805fa4a0(&local_138,&local_2b3,local_2c2,local_150,local_158);
  FUN_1805fa4a0(&local_c8,&local_2c1,0,local_140,local_148);
  FUN_1805fa4a0(&local_b8,&local_2b2,local_2c1,local_130,local_138);
  FUN_1805fa4a0(&local_108,&local_2c0,0,local_120,local_128);
  FUN_1805fa4a0(&local_f8,&local_2b1,local_2c0,local_110,local_118);
  FUN_1805fa4a0(&local_e8,&local_2bf,0,local_100,local_108);
  FUN_1805fa4a0(&local_d8,local_2b0,local_2bf,local_f0,local_f8);
  FUN_1805fa4a0(&local_278,&local_2be,0,local_e0,local_e8);
  local_d0 = (ulonglong)local_2be + local_d8;
  local_c0 = local_278 >> 0x33 | local_d0 * 0x2000;
  local_50 = local_278 & 0x7ffffffffffff;
  FUN_1805fa4a0(&local_270,&local_2bd,0,local_c0,local_c8);
  local_b0 = (ulonglong)local_2bd + local_b8;
  local_a0 = local_270 >> 0x33 | local_b0 * 0x2000;
  local_40 = local_270 & 0x7ffffffffffff;
  FUN_1805fa4a0(&local_268,&local_2bc,0,local_a0,local_a8);
  local_90 = (ulonglong)local_2bc + local_98;
  local_80 = local_268 >> 0x33 | local_90 * 0x2000;
  local_20 = local_268 & 0x7ffffffffffff;
  FUN_1805fa4a0(local_260,local_2bb,0,local_80,local_88);
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


/* address=1805fc280 name=FUN_1805fc280 */

void FUN_1805fc280(ulonglong *param_1,ulonglong *param_2)

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


/* address=1805fc490 name=FUN_1805fc490 */

void FUN_1805fc490(longlong *param_1,longlong *param_2,longlong *param_3)

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


/* address=1805fc5f0 name=FUN_1805fc5f0 */

void FUN_1805fc5f0(longlong *param_1,longlong *param_2,longlong *param_3)

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


/* address=1805fc790 name=FUN_1805fc790 */

void FUN_1805fc790(longlong *param_1,longlong *param_2)

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


/* address=1805fc8d0 name=FUN_1805fc8d0 */

void FUN_1805fc8d0(undefined *param_1,undefined8 *param_2)

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
  
  FUN_1805fa560(&local_78,&local_1a8,0,*param_2,0x7ffffffffffed);
  FUN_1805fa560(&local_70,&local_1a7,local_1a8,param_2[1],0x7ffffffffffff);
  FUN_1805fa560(&local_68,&local_1a6,local_1a7,param_2[2],0x7ffffffffffff);
  FUN_1805fa560(&local_60,&local_1a5,local_1a6,param_2[3],0x7ffffffffffff);
  FUN_1805fa560(&local_58,&local_1a4,local_1a5,param_2[4],0x7ffffffffffff);
  FUN_1805fa640(&local_178,local_1a4,0,0xffffffffffffffff);
  FUN_1805fa4e0(local_170,&local_1a3,0,local_78,local_178 & 0x7ffffffffffed);
  FUN_1805fa4e0(local_38,&local_1a2,local_1a3,local_70,local_178 & 0x7ffffffffffff);
  FUN_1805fa4e0(&local_40,&local_1a1,local_1a2,local_68,local_178 & 0x7ffffffffffff);
  FUN_1805fa4e0(&local_48,local_1a0,local_1a1,local_60,local_178 & 0x7ffffffffffff);
  FUN_1805fa4e0(&local_50,local_17b,local_1a0[0],local_58,local_178 & 0x7ffffffffffff);
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


/* address=1805fd3a0 name=FUN_1805fd3a0 */

void FUN_1805fd3a0(ulonglong *param_1,byte *param_2)

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


/* address=1805fdc60 name=FUN_1805fdc60 */

void FUN_1805fdc60(ulonglong *param_1,undefined8 *param_2)

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
  
  FUN_1805fa5f0(&local_80,local_70,0x1db42,param_2[4]);
  FUN_1805fa5f0(&local_a0,&local_90,0x1db42,param_2[3]);
  FUN_1805fa5f0(&local_c0,&local_b0,0x1db42,param_2[2]);
  FUN_1805fa5f0(&local_e0,&local_d0,0x1db42,param_2[1]);
  FUN_1805fa5f0(&local_120,&local_e8,0x1db42,*param_2);
  local_d8 = local_120 >> 0x33 | local_e8 << 0xd;
  local_50 = local_120 & 0x7ffffffffffff;
  FUN_1805fa4a0(&local_118,&local_128,0,local_d8,local_e0);
  local_c8 = (ulonglong)local_128 + local_d0;
  local_b8 = local_118 >> 0x33 | local_c8 * 0x2000;
  local_48 = local_118 & 0x7ffffffffffff;
  FUN_1805fa4a0(&local_110,&local_127,0,local_b8,local_c0);
  local_a8 = (ulonglong)local_127 + local_b0;
  local_98 = local_110 >> 0x33 | local_a8 * 0x2000;
  local_40 = local_110 & 0x7ffffffffffff;
  FUN_1805fa4a0(&local_108,&local_126,0,local_98,local_a0);
  local_88 = (ulonglong)local_126 + local_90;
  local_78 = local_108 >> 0x33 | local_88 * 0x2000;
  local_20 = local_108 & 0x7ffffffffffff;
  FUN_1805fa4a0(local_100,local_125,0,local_78,local_80);
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


/* address=1805fe0c0 name=FUN_1805fe0c0 */

ulonglong FUN_1805fe0c0(uint3 *param_1)

{
  return (ulonglong)*param_1;
}


/* address=1805fe140 name=FUN_1805fe140 */

undefined4 FUN_1805fe140(undefined4 *param_1)

{
  return *param_1;
}


/* address=1805fe1e0 name=FUN_1805fe1e0 */

void FUN_1805fe1e0(longlong param_1,longlong param_2)

{
  uint local_18;
  
  if ((*(byte *)(param_2 + 0x1f) & 0x80) != 0) {
    FID_conflict__assert
              (u__s_31____0x80_____0_18097ac28,u_D__a_1_s_target_x86_64_pc_window_18097ab20,0x9c);
  }
  FUN_1805fd3a0(param_1,param_2);
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert
                (u_h_>v__assert_fe_i__<__UINT64_C(0_18097ad60,
                 u_D__a_1_s_target_x86_64_pc_window_18097ac50,0x9e);
    }
  }
  return;
}


/* address=1805fe2a0 name=FUN_1805fe2a0 */

void FUN_1805fe2a0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined local_38 [31];
  byte bStack_19;
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_58;
  FUN_1805f71e0(local_38,param_2,0x20);
  bStack_19 = bStack_19 & 0x7f;
  FUN_1805fe1e0(param_1,local_38);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=1805fe320 name=FUN_1805fe320 */

void FUN_1805fe320(undefined8 param_1,longlong param_2)

{
  uint local_18;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert
                (u_f_>v__assert_fe_i__<__UINT64_C(0_18097aed0,
                 u_D__a_1_s_target_x86_64_pc_window_18097adc0,0xa9);
    }
  }
  FUN_1805fc8d0(param_1,param_2);
  return;
}


/* address=1805fe3b0 name=FUN_1805fe3b0 */

void FUN_1805fe3b0(undefined8 param_1)

{
  FUN_1805f7280(param_1,0,0x28);
  return;
}


/* address=1805fe3e0 name=FUN_1805fe3e0 */

void FUN_1805fe3e0(undefined8 param_1)

{
  FUN_1805f7280(param_1,0,0x28);
  return;
}


/* address=1805fe410 name=FUN_1805fe410 */

void FUN_1805fe410(undefined8 *param_1)

{
  FUN_1805f7280(param_1,0,0x28);
  *param_1 = 1;
  return;
}


/* address=1805fe450 name=FUN_1805fe450 */

void FUN_1805fe450(undefined8 *param_1)

{
  FUN_1805f7280(param_1,0,0x28);
  *param_1 = 1;
  return;
}


/* address=1805fe490 name=FUN_1805fe490 */

void FUN_1805fe490(longlong param_1,longlong param_2,longlong param_3)

{
  uint local_28;
  uint local_24;
  uint local_20;
  
  for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)local_28 * 8)) {
      FID_conflict__assert
                (u_f_>v__assert_fe_i__<__UINT64_C(0_18097b040,
                 u_D__a_1_s_target_x86_64_pc_window_18097af30,0xc4);
    }
  }
  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_3 + (ulonglong)local_24 * 8)) {
      FID_conflict__assert
                (u_g_>v__assert_fe_i__<__UINT64_C(0_18097b1b0,
                 u_D__a_1_s_target_x86_64_pc_window_18097b0a0,0xc5);
    }
  }
  FUN_1805fc490(param_1,param_2,param_3);
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_1 + (ulonglong)local_20 * 8)) {
      FID_conflict__assert
                (u_h_>v__assert_fe_i__<__UINT64_C(0_18097b320,
                 u_D__a_1_s_target_x86_64_pc_window_18097b210,199);
    }
  }
  return;
}


/* address=1805fe5e0 name=FUN_1805fe5e0 */

void FUN_1805fe5e0(longlong param_1,longlong param_2,longlong param_3)

{
  uint local_28;
  uint local_24;
  uint local_20;
  
  for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)local_28 * 8)) {
      FID_conflict__assert
                (u_f_>v__assert_fe_i__<__UINT64_C(0_18097b4a0,
                 u_D__a_1_s_target_x86_64_pc_window_18097b390,0xcd);
    }
  }
  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_3 + (ulonglong)local_24 * 8)) {
      FID_conflict__assert
                (u_g_>v__assert_fe_i__<__UINT64_C(0_18097b610,
                 u_D__a_1_s_target_x86_64_pc_window_18097b500,0xce);
    }
  }
  FUN_1805fc5f0(param_1,param_2,param_3);
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_1 + (ulonglong)local_20 * 8)) {
      FID_conflict__assert
                (u_h_>v__assert_fe_i__<__UINT64_C(0_18097b780,
                 u_D__a_1_s_target_x86_64_pc_window_18097b670,0xd0);
    }
  }
  return;
}


/* address=1805fe730 name=FUN_1805fe730 */

void FUN_1805fe730(longlong param_1,longlong param_2)

{
  uint local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert
                (u_f_>v__assert_fe_i__<__UINT64_C(0_18097b900,
                 u_D__a_1_s_target_x86_64_pc_window_18097b7f0,0xd4);
    }
  }
  FUN_1805fc280(param_1,param_2);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert
                (u_h_>v__assert_fe_i__<__UINT64_C(0_18097ba80,
                 u_D__a_1_s_target_x86_64_pc_window_18097b970,0xd6);
    }
  }
  return;
}


/* address=1805fe810 name=FUN_1805fe810 */

void FUN_1805fe810(longlong param_1,longlong param_2,longlong param_3)

{
  uint local_18;
  uint local_14;
  uint local_10;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert
                (u_in1__assert_fe_i__<__UINT64_C(0x_18097bbf0,
                 u_D__a_1_s_target_x86_64_pc_window_18097bae0,0xdc);
    }
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_3 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert
                (u_in2__assert_fe_i__<__UINT64_C(0x_18097bd60,
                 u_D__a_1_s_target_x86_64_pc_window_18097bc50,0xdd);
    }
  }
  FUN_1805fa6d0(param_1,param_2,param_3);
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_10 * 8)) {
      FID_conflict__assert
                (u_out__assert_fe_i__<__UINT64_C(0x_18097bed0,
                 u_D__a_1_s_target_x86_64_pc_window_18097bdc0,0xdf);
    }
  }
  return;
}


/* address=1805fe950 name=FUN_1805fe950 */

void FUN_1805fe950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805fe810(param_1,param_2,param_3);
  return;
}


/* address=1805fe9a0 name=FUN_1805fe9a0 */

void FUN_1805fe9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805fe810(param_1,param_2,param_3);
  return;
}


/* address=1805fe9f0 name=FUN_1805fe9f0 */

void FUN_1805fe9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805fe810(param_1,param_2,param_3);
  return;
}


/* address=1805fea40 name=FUN_1805fea40 */

void FUN_1805fea40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805fe810(param_1,param_2,param_3);
  return;
}


/* address=1805fea90 name=FUN_1805fea90 */

void FUN_1805fea90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805fe810(param_1,param_2,param_3);
  return;
}


/* address=1805feae0 name=FUN_1805feae0 */

void FUN_1805feae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805fe810(param_1,param_2,param_3);
  return;
}


/* address=1805feb30 name=FUN_1805feb30 */

void FUN_1805feb30(longlong param_1,longlong param_2)

{
  uint local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert
                (u_f_>v__assert_fe_i__<__UINT64_C(0_18097c040,
                 u_D__a_1_s_target_x86_64_pc_window_18097bf30,0xfb);
    }
  }
  FUN_1805fb790(param_1,param_2);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert
                (u_h_>v__assert_fe_i__<__UINT64_C(0_18097c1c0,
                 u_D__a_1_s_target_x86_64_pc_window_18097c0b0,0xfd);
    }
  }
  return;
}


/* address=1805fec10 name=FUN_1805fec10 */

void FUN_1805fec10(longlong param_1,longlong param_2)

{
  uint local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert
                (u_f_>v__assert_fe_i__<__UINT64_C(0_18097c330,
                 u_D__a_1_s_target_x86_64_pc_window_18097c220,0x101);
    }
  }
  FUN_1805fb790(param_1,param_2);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert
                (u_h_>v__assert_fe_i__<__UINT64_C(0_18097c4b0,
                 u_D__a_1_s_target_x86_64_pc_window_18097c3a0,0x103);
    }
  }
  return;
}


/* address=1805fecf0 name=FUN_1805fecf0 */

void FUN_1805fecf0(longlong param_1,longlong param_2,longlong param_3)

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


/* address=1805fedb0 name=FUN_1805fedb0 */

void FUN_1805fedb0(longlong param_1,longlong param_2)

{
  uint local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert
                (u_f_>v__assert_fe_i__<__UINT64_C(0_18097c620,
                 u_D__a_1_s_target_x86_64_pc_window_18097c510,0x115);
    }
  }
  FUN_1805fdc60(param_1,param_2);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_1 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert
                (u_h_>v__assert_fe_i__<__UINT64_C(0_18097c7a0,
                 u_D__a_1_s_target_x86_64_pc_window_18097c690,0x117);
    }
  }
  return;
}


/* address=1805fee90 name=FUN_1805fee90 */

void FUN_1805fee90(longlong param_1,longlong param_2)

{
  uint local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    if (0x8cccccccccccc < *(ulonglong *)(param_2 + (ulonglong)local_18 * 8)) {
      FID_conflict__assert
                (u_f_>v__assert_fe_i__<__UINT64_C(0_18097c910,
                 u_D__a_1_s_target_x86_64_pc_window_18097c800,0x11c);
    }
  }
  FUN_1805fc790(param_1,param_2);
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (0x1a666666666664 < *(ulonglong *)(param_1 + (ulonglong)local_14 * 8)) {
      FID_conflict__assert
                (u_h_>v__assert_fe_i__<__UINT64_C(0_18097ca80,
                 u_D__a_1_s_target_x86_64_pc_window_18097c970,0x11e);
    }
  }
  return;
}


/* address=1805fef70 name=FUN_1805fef70 */

void FUN_1805fef70(longlong param_1,longlong param_2,longlong param_3)

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


/* address=1805ff010 name=FUN_1805ff010 */

void FUN_1805ff010(undefined8 param_1,undefined8 param_2)

{
  FUN_1805f7230(param_1,param_2,0x28);
  return;
}


/* address=1805ff040 name=FUN_1805ff040 */

void FUN_1805ff040(undefined8 param_1,undefined8 param_2)

{
  FUN_1805f7230(param_1,param_2,0x28);
  return;
}


/* address=1805ff070 name=FUN_1805ff070 */

void FUN_1805ff070(undefined8 param_1,undefined8 param_2)

{
  FUN_1805f7230(param_1,param_2,0x28);
  return;
}


/* address=1805ff0a0 name=FUN_1805ff0a0 */

void FUN_1805ff0a0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_d8 [32];
  int local_b8;
  undefined local_b0 [40];
  undefined local_88 [40];
  undefined local_60 [40];
  undefined local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_d8;
  FUN_1805feb30(local_38,param_2);
  FUN_1805fec10(local_88,local_38);
  for (local_b8 = 1; local_b8 < 2; local_b8 = local_b8 + 1) {
    FUN_1805fec10(local_88,local_88);
  }
  FUN_1805fea40(local_88,param_2,local_88);
  FUN_1805fe9f0(local_38,local_38,local_88);
  FUN_1805fec10(local_b0,local_38);
  FUN_1805fe9f0(local_88,local_88,local_b0);
  FUN_1805fec10(local_b0,local_88);
  for (local_b8 = 1; local_b8 < 5; local_b8 = local_b8 + 1) {
    FUN_1805fec10(local_b0,local_b0);
  }
  FUN_1805fe9f0(local_88,local_b0,local_88);
  FUN_1805fec10(local_b0,local_88);
  for (local_b8 = 1; local_b8 < 10; local_b8 = local_b8 + 1) {
    FUN_1805fec10(local_b0,local_b0);
  }
  FUN_1805fe9f0(local_b0,local_b0,local_88);
  FUN_1805fec10(local_60,local_b0);
  for (local_b8 = 1; local_b8 < 0x14; local_b8 = local_b8 + 1) {
    FUN_1805fec10(local_60,local_60);
  }
  FUN_1805fe9f0(local_b0,local_60,local_b0);
  FUN_1805fec10(local_b0,local_b0);
  for (local_b8 = 1; local_b8 < 10; local_b8 = local_b8 + 1) {
    FUN_1805fec10(local_b0,local_b0);
  }
  FUN_1805fe9f0(local_88,local_b0,local_88);
  FUN_1805fec10(local_b0,local_88);
  for (local_b8 = 1; local_b8 < 0x32; local_b8 = local_b8 + 1) {
    FUN_1805fec10(local_b0,local_b0);
  }
  FUN_1805fe9f0(local_b0,local_b0,local_88);
  FUN_1805fec10(local_60,local_b0);
  for (local_b8 = 1; local_b8 < 100; local_b8 = local_b8 + 1) {
    FUN_1805fec10(local_60,local_60);
  }
  FUN_1805fe9f0(local_b0,local_60,local_b0);
  FUN_1805fec10(local_b0,local_b0);
  for (local_b8 = 1; local_b8 < 0x32; local_b8 = local_b8 + 1) {
    FUN_1805fec10(local_b0,local_b0);
  }
  FUN_1805fe9f0(local_88,local_b0,local_88);
  FUN_1805fec10(local_88,local_88);
  for (local_b8 = 1; local_b8 < 5; local_b8 = local_b8 + 1) {
    FUN_1805fec10(local_88,local_88);
  }
  FUN_1805fe9f0(param_1,local_88,local_38);
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=1805ff420 name=FUN_1805ff420 */

void FUN_1805ff420(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_58;
  FUN_1805ff040(local_38,param_2);
  FUN_1805ff0a0(param_1,local_38);
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=1805ff480 name=FUN_1805ff480 */

void FUN_1805ff480(undefined8 param_1)

{
  int iVar1;
  undefined auStack_88 [32];
  uint local_68;
  undefined local_60 [40];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_88;
  FUN_1805fe730(local_60,param_1);
  FUN_1805fe320(local_38,local_60);
  iVar1 = FUN_18058f7e0(local_38,&DAT_1807a4010,0x20);
  local_68 = (uint)(iVar1 != 0);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=1805ff510 name=FUN_1805ff510 */

void FUN_1805ff510(undefined8 param_1)

{
  undefined auStack_58 [32];
  undefined local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_58;
  FUN_1805fe320(local_38,param_1);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=1805ff560 name=FUN_1805ff560 */

void FUN_1805ff560(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_58 [32];
  undefined local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_58;
  FUN_1805fec10(param_1,param_2);
  FUN_1805fe490(local_38,param_1,param_1);
  FUN_1805fe730(param_1,local_38);
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_58);
  return;
}


/* address=1805ff5d0 name=FUN_1805ff5d0 */

void FUN_1805ff5d0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_b8 [32];
  int local_98;
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  FUN_1805fec10(local_68,param_2);
  FUN_1805fec10(local_90,local_68);
  for (local_98 = 1; local_98 < 2; local_98 = local_98 + 1) {
    FUN_1805fec10(local_90,local_90);
  }
  FUN_1805fe9f0(local_90,param_2,local_90);
  FUN_1805fe9f0(local_68,local_68,local_90);
  FUN_1805fec10(local_68,local_68);
  FUN_1805fe9f0(local_68,local_90,local_68);
  FUN_1805fec10(local_90,local_68);
  for (local_98 = 1; local_98 < 5; local_98 = local_98 + 1) {
    FUN_1805fec10(local_90,local_90);
  }
  FUN_1805fe9f0(local_68,local_90,local_68);
  FUN_1805fec10(local_90,local_68);
  for (local_98 = 1; local_98 < 10; local_98 = local_98 + 1) {
    FUN_1805fec10(local_90,local_90);
  }
  FUN_1805fe9f0(local_90,local_90,local_68);
  FUN_1805fec10(local_40,local_90);
  for (local_98 = 1; local_98 < 0x14; local_98 = local_98 + 1) {
    FUN_1805fec10(local_40,local_40);
  }
  FUN_1805fe9f0(local_90,local_40,local_90);
  FUN_1805fec10(local_90,local_90);
  for (local_98 = 1; local_98 < 10; local_98 = local_98 + 1) {
    FUN_1805fec10(local_90,local_90);
  }
  FUN_1805fe9f0(local_68,local_90,local_68);
  FUN_1805fec10(local_90,local_68);
  for (local_98 = 1; local_98 < 0x32; local_98 = local_98 + 1) {
    FUN_1805fec10(local_90,local_90);
  }
  FUN_1805fe9f0(local_90,local_90,local_68);
  FUN_1805fec10(local_40,local_90);
  for (local_98 = 1; local_98 < 100; local_98 = local_98 + 1) {
    FUN_1805fec10(local_40,local_40);
  }
  FUN_1805fe9f0(local_90,local_40,local_90);
  FUN_1805fec10(local_90,local_90);
  for (local_98 = 1; local_98 < 0x32; local_98 = local_98 + 1) {
    FUN_1805fec10(local_90,local_90);
  }
  FUN_1805fe9f0(local_68,local_90,local_68);
  FUN_1805fec10(local_68,local_68);
  for (local_98 = 1; local_98 < 2; local_98 = local_98 + 1) {
    FUN_1805fec10(local_68,local_68);
  }
  FUN_1805fe9f0(param_1,local_68,param_2);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=1805ff940 name=FUN_1805ff940 */

void FUN_1805ff940(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined auStack_b8 [32];
  longlong local_98;
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  FUN_1805ff420(local_90,param_2 + 0x50);
  FUN_1805fe9f0(local_40,param_2,local_90);
  FUN_1805fe9f0(local_68,param_2 + 0x28,local_90);
  FUN_1805fe320(param_1,local_68);
  local_98 = 0x1f;
  iVar1 = FUN_1805ff510(local_40);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + local_98) ^ (byte)(iVar1 << 7);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=1805ffa30 name=FUN_1805ffa30 */

void FUN_1805ffa30(longlong param_1)

{
  FUN_1805fe3b0(param_1);
  FUN_1805fe410(param_1 + 0x28);
  FUN_1805fe410(param_1 + 0x50);
  return;
}


/* address=1805ffa80 name=FUN_1805ffa80 */

void FUN_1805ffa80(longlong param_1)

{
  FUN_1805fe3b0(param_1);
  FUN_1805fe410(param_1 + 0x28);
  FUN_1805fe410(param_1 + 0x50);
  FUN_1805fe3b0(param_1 + 0x78);
  return;
}


/* address=1805ffae0 name=FUN_1805ffae0 */

void FUN_1805ffae0(longlong param_1)

{
  FUN_1805fe450(param_1);
  FUN_1805fe450(param_1 + 0x28);
  FUN_1805fe450(param_1 + 0x50);
  FUN_1805fe3e0(param_1 + 0x78);
  return;
}


/* address=1805ffb40 name=FUN_1805ffb40 */

void FUN_1805ffb40(longlong param_1)

{
  FUN_1805fe450(param_1);
  FUN_1805fe450(param_1 + 0x28);
  FUN_1805fe3e0(param_1 + 0x50);
  return;
}


/* address=1805ffb90 name=FUN_1805ffb90 */

void FUN_1805ffb90(longlong param_1,longlong param_2)

{
  FUN_1805ff010(param_1,param_2);
  FUN_1805ff010(param_1 + 0x28,param_2 + 0x28);
  FUN_1805ff010(param_1 + 0x50,param_2 + 0x50);
  return;
}


/* address=1805ffbf0 name=FUN_1805ffbf0 */

void FUN_1805ffbf0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_d8 [32];
  undefined local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_d8;
  FUN_1805f77c0(local_b8,param_2);
  FUN_1805f7660(param_1,local_b8);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_d8);
  return;
}


/* address=1805ffc60 name=FUN_1805ffc60 */

void FUN_1805ffc60(longlong param_1,longlong param_2)

{
  undefined auStack_d8 [32];
  longlong local_b8;
  undefined local_b0 [40];
  undefined local_88 [40];
  undefined local_60 [40];
  undefined local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_d8;
  FUN_1805fec10(local_88,param_2);
  FUN_1805fec10(local_b0,param_2 + 0x28);
  FUN_1805ff560(local_38,param_2 + 0x50);
  local_b8 = param_1 + 0x28;
  FUN_1805fe490(local_b8,param_2,param_2 + 0x28);
  FUN_1805feb30(local_60,param_1 + 0x28);
  FUN_1805fe490(param_1 + 0x28,local_b0,local_88);
  FUN_1805fe5e0(param_1 + 0x50,local_b0,local_88);
  FUN_1805fe730(local_b0,param_1 + 0x28);
  FUN_1805fe5e0(param_1,local_60,local_b0);
  FUN_1805fe730(local_b0,param_1 + 0x50);
  FUN_1805fe5e0(param_1 + 0x78,local_38,local_b0);
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_d8);
  return;
}


/* address=1805ffdf0 name=FUN_1805ffdf0 */

void FUN_1805ffdf0(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_b8 [32];
  undefined local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_b8;
  FUN_1805ffb90(local_98,param_2);
  FUN_1805ffc60(param_1,local_98);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_b8);
  return;
}


/* address=1805ffe60 name=FUN_1805ffe60 */

void FUN_1805ffe60(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  FUN_1805fe490(param_1,param_2 + 0x28,param_2);
  local_a0 = param_1 + 0x28;
  FUN_1805fe5e0(local_a0,param_2 + 0x28,param_2);
  FUN_1805feae0(local_90,param_1,param_3);
  FUN_1805feae0(local_68,param_1 + 0x28,param_3 + 0x28);
  FUN_1805fea40(local_40,param_3 + 0x50,param_2 + 0x78);
  local_98 = param_1 + 0x78;
  FUN_1805fe490(local_98,param_2 + 0x50,param_2 + 0x50);
  FUN_1805fe5e0(param_1,local_90,local_68);
  FUN_1805fe490(param_1 + 0x28,local_90,local_68);
  FUN_1805fe730(local_90,param_1 + 0x78);
  FUN_1805fe490(param_1 + 0x50,local_90,local_40);
  FUN_1805fe5e0(param_1 + 0x78,local_90,local_40);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=180600060 name=FUN_180600060 */

void FUN_180600060(longlong param_1,longlong param_2,longlong param_3)

{
  undefined auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined local_90 [40];
  undefined local_68 [40];
  undefined local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  FUN_1805fe490(param_1,param_2 + 0x28,param_2);
  local_a0 = param_1 + 0x28;
  FUN_1805fe5e0(local_a0,param_2 + 0x28,param_2);
  FUN_1805feae0(local_90,param_1,param_3 + 0x28);
  FUN_1805feae0(local_68,param_1 + 0x28,param_3);
  FUN_1805fea40(local_40,param_3 + 0x50,param_2 + 0x78);
  local_98 = param_1 + 0x78;
  FUN_1805fe490(local_98,param_2 + 0x50,param_2 + 0x50);
  FUN_1805fe5e0(param_1,local_90,local_68);
  FUN_1805fe490(param_1 + 0x28,local_90,local_68);
  FUN_1805fe730(local_90,param_1 + 0x78);
  FUN_1805fe5e0(param_1 + 0x50,local_90,local_40);
  FUN_1805fe490(param_1 + 0x78,local_90,local_40);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=180600260 name=FUN_180600260 */

byte FUN_180600260(byte param_1,byte param_2)

{
  byte local_14;
  
  local_14 = (byte)((param_1 ^ param_2) - 1 >> 0x1f);
  return local_14;
}


/* address=1806002c0 name=FUN_1806002c0 */

void FUN_1806002c0(longlong param_1,longlong param_2,undefined param_3)

{
  FUN_1805fef70(param_1,param_2,param_3);
  FUN_1805fef70(param_1 + 0x28,param_2 + 0x28,param_3);
  FUN_1805fef70(param_1 + 0x50,param_2 + 0x50,param_3);
  return;
}


/* address=180600370 name=FUN_180600370 */

byte FUN_180600370(char param_1)

{
  byte local_18;
  
  local_18 = (byte)(param_1 >> 7) >> 7;
  return local_18;
}


/* address=1806003a0 name=FUN_1806003a0 */

void FUN_1806003a0(longlong param_1,int param_2,byte param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_e8;
  local_c7 = FUN_180600370(param_3);
  local_c8 = param_3 + (-local_c7 & param_3) * -2;
  FUN_1805ffb40(param_1);
  uVar1 = FUN_180600260(local_c8,1);
  FUN_1806002c0(param_1,&DAT_1807a40f0 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_180600260(local_c8,2);
  FUN_1806002c0(param_1,&UNK_1807a4168 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_180600260(local_c8,3);
  FUN_1806002c0(param_1,&UNK_1807a41e0 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_180600260(local_c8,4);
  FUN_1806002c0(param_1,&UNK_1807a4258 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_180600260(local_c8,5);
  FUN_1806002c0(param_1,&UNK_1807a42d0 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_180600260(local_c8,6);
  FUN_1806002c0(param_1,&UNK_1807a4348 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_180600260(local_c8,7);
  FUN_1806002c0(param_1,&UNK_1807a43c0 + (longlong)param_2 * 0x3c0,uVar1);
  uVar1 = FUN_180600260(local_c8,8);
  FUN_1806002c0(param_1,&UNK_1807a4438 + (longlong)param_2 * 0x3c0,uVar1);
  FUN_1805ff070(local_98,param_1 + 0x28);
  FUN_1805ff070(local_70,param_1);
  FUN_1805fe730(local_c0,param_1 + 0x50);
  FUN_1805fee90(local_48,local_c0);
  FUN_1806002c0(param_1,local_98,local_c7);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_e8);
  return;
}


/* address=1806006e0 name=FUN_1806006e0 */

void FUN_1806006e0(longlong param_1,longlong param_2,undefined param_3)

{
  FUN_1805fef70(param_1,param_2,param_3);
  FUN_1805fef70(param_1 + 0x28,param_2 + 0x28,param_3);
  FUN_1805fef70(param_1 + 0x50,param_2 + 0x50,param_3);
  FUN_1805fef70(param_1 + 0x78,param_2 + 0x78,param_3);
  return;
}


/* address=1806007c0 name=FUN_1806007c0 */

void FUN_1806007c0(longlong param_1,longlong param_2)

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
LAB_18060081b:
    local_28 = local_28 + 1;
  }
  local_24 = 1;
  do {
    if ((6 < local_24) || (0xff < local_28 + local_24)) goto LAB_18060081b;
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
        goto LAB_18060081b;
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


/* address=180600a30 name=FUN_180600a30 */

void FUN_180600a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_928;
  FUN_1806007c0(local_218,param_2);
  FUN_1806007c0(local_118,param_4);
  FUN_1805f7660(local_718,param_3);
  FUN_1805ffdf0(local_8f8,param_3);
  FUN_1805f77c0(local_7b8,local_8f8);
  FUN_1805f78a0(local_8f8,local_7b8,local_718);
  FUN_1805f77c0(local_858,local_8f8);
  FUN_1805f7660(local_678,local_858);
  FUN_1805f78a0(local_8f8,local_7b8,local_678);
  FUN_1805f77c0(local_858,local_8f8);
  FUN_1805f7660(local_5d8,local_858);
  FUN_1805f78a0(local_8f8,local_7b8,local_5d8);
  FUN_1805f77c0(local_858,local_8f8);
  FUN_1805f7660(local_538,local_858);
  FUN_1805f78a0(local_8f8,local_7b8,local_538);
  FUN_1805f77c0(local_858,local_8f8);
  FUN_1805f7660(local_498,local_858);
  FUN_1805f78a0(local_8f8,local_7b8,local_498);
  FUN_1805f77c0(local_858,local_8f8);
  FUN_1805f7660(local_3f8,local_858);
  FUN_1805f78a0(local_8f8,local_7b8,local_3f8);
  FUN_1805f77c0(local_858,local_8f8);
  FUN_1805f7660(local_358,local_858);
  FUN_1805f78a0(local_8f8,local_7b8,local_358);
  FUN_1805f77c0(local_858,local_8f8);
  FUN_1805f7660(local_2b8,local_858);
  FUN_1805ffa30(param_1);
  for (local_908 = 0xff;
      ((-1 < local_908 && (local_218[local_908] == '\0')) && (local_118[local_908] == '\0'));
      local_908 = local_908 + -1) {
  }
  for (; -1 < local_908; local_908 = local_908 + -1) {
    FUN_1805ffc60(local_8f8,param_1);
    if (local_218[local_908] < '\x01') {
      if (local_218[local_908] < '\0') {
        FUN_1805f77c0(local_858,local_8f8);
        FUN_1805f7ab0(local_8f8,local_858,
                      local_718 + (longlong)(-(int)local_218[local_908] / 2) * 0xa0);
      }
    }
    else {
      FUN_1805f77c0(local_858,local_8f8);
      FUN_1805f78a0(local_8f8,local_858,local_718 + (longlong)((int)local_218[local_908] / 2) * 0xa0
                   );
    }
    if (local_118[local_908] < '\x01') {
      if (local_118[local_908] < '\0') {
        FUN_1805f77c0(local_858,local_8f8);
        FUN_180600060(local_8f8,local_858,
                      &DAT_1807ab8f0 + (longlong)(-(int)local_118[local_908] / 2) * 0x78);
      }
    }
    else {
      FUN_1805f77c0(local_858,local_8f8);
      FUN_1805ffe60(local_8f8,local_858,
                    &DAT_1807ab8f0 + (longlong)((int)local_118[local_908] / 2) * 0x78);
    }
    FUN_1805f7710(param_1,local_8f8);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_928);
  return;
}


/* address=180600f70 name=FUN_180600f70 */

longlong FUN_180600f70(longlong param_1)

{
  return param_1 << 0x15;
}


/* address=180600f90 name=FUN_180600f90 */

void FUN_180600f90(undefined *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  
  uVar1 = FUN_1805fe0c0(param_2);
  uVar1 = uVar1 & 0x1fffff;
  uVar2 = FUN_1805fe140(param_2 + 2);
  uVar2 = uVar2 >> 5 & 0x1fffff;
  uVar3 = FUN_1805fe0c0(param_2 + 5);
  uVar3 = uVar3 >> 2 & 0x1fffff;
  uVar4 = FUN_1805fe140(param_2 + 7);
  uVar4 = uVar4 >> 7 & 0x1fffff;
  uVar5 = FUN_1805fe140(param_2 + 10);
  uVar5 = uVar5 >> 4 & 0x1fffff;
  uVar6 = FUN_1805fe0c0(param_2 + 0xd);
  uVar6 = uVar6 >> 1 & 0x1fffff;
  uVar7 = FUN_1805fe140(param_2 + 0xf);
  uVar7 = uVar7 >> 6 & 0x1fffff;
  uVar8 = FUN_1805fe0c0(param_2 + 0x12);
  uVar8 = uVar8 >> 3 & 0x1fffff;
  uVar9 = FUN_1805fe0c0(param_2 + 0x15);
  uVar9 = uVar9 & 0x1fffff;
  uVar10 = FUN_1805fe140(param_2 + 0x17);
  uVar10 = uVar10 >> 5 & 0x1fffff;
  uVar11 = FUN_1805fe0c0(param_2 + 0x1a);
  uVar11 = uVar11 >> 2 & 0x1fffff;
  uVar12 = FUN_1805fe140(param_2 + 0x1c);
  uVar12 = uVar12 >> 7;
  uVar13 = FUN_1805fe0c0(param_3);
  uVar13 = uVar13 & 0x1fffff;
  uVar14 = FUN_1805fe140(param_3 + 2);
  uVar14 = uVar14 >> 5 & 0x1fffff;
  uVar15 = FUN_1805fe0c0(param_3 + 5);
  uVar15 = uVar15 >> 2 & 0x1fffff;
  uVar16 = FUN_1805fe140(param_3 + 7);
  uVar16 = uVar16 >> 7 & 0x1fffff;
  uVar17 = FUN_1805fe140(param_3 + 10);
  uVar17 = uVar17 >> 4 & 0x1fffff;
  uVar18 = FUN_1805fe0c0(param_3 + 0xd);
  uVar18 = uVar18 >> 1 & 0x1fffff;
  uVar19 = FUN_1805fe140(param_3 + 0xf);
  uVar19 = uVar19 >> 6 & 0x1fffff;
  uVar20 = FUN_1805fe0c0(param_3 + 0x12);
  uVar20 = uVar20 >> 3 & 0x1fffff;
  uVar21 = FUN_1805fe0c0(param_3 + 0x15);
  uVar21 = uVar21 & 0x1fffff;
  uVar22 = FUN_1805fe140(param_3 + 0x17);
  uVar22 = uVar22 >> 5 & 0x1fffff;
  uVar23 = FUN_1805fe0c0(param_3 + 0x1a);
  uVar23 = uVar23 >> 2 & 0x1fffff;
  uVar24 = FUN_1805fe140(param_3 + 0x1c);
  uVar24 = uVar24 >> 7;
  uVar25 = FUN_1805fe0c0(param_4);
  uVar26 = FUN_1805fe140(param_4 + 2);
  uVar27 = FUN_1805fe0c0(param_4 + 5);
  uVar28 = FUN_1805fe140(param_4 + 7);
  uVar29 = FUN_1805fe140(param_4 + 10);
  uVar30 = FUN_1805fe0c0(param_4 + 0xd);
  uVar31 = FUN_1805fe140(param_4 + 0xf);
  uVar32 = FUN_1805fe0c0(param_4 + 0x12);
  uVar33 = FUN_1805fe0c0(param_4 + 0x15);
  uVar34 = FUN_1805fe140(param_4 + 0x17);
  uVar35 = FUN_1805fe0c0(param_4 + 0x1a);
  uVar36 = FUN_1805fe140(param_4 + 0x1c);
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
  lVar47 = FUN_180600f70(lVar47);
  lVar48 = lVar37 + 0x100000 >> 0x15;
  lVar79 = (uVar28 >> 7 & 0x1fffff) + uVar1 * uVar16 + uVar2 * uVar15 + uVar3 * uVar14 +
           uVar4 * uVar13 + lVar48;
  lVar48 = FUN_180600f70(lVar48);
  lVar49 = lVar38 + 0x100000 >> 0x15;
  lVar80 = (uVar30 >> 1 & 0x1fffff) + uVar1 * uVar18 + uVar2 * uVar17 + uVar3 * uVar16 +
           uVar4 * uVar15 + uVar5 * uVar14 + uVar6 * uVar13 + lVar49;
  lVar49 = FUN_180600f70(lVar49);
  lVar50 = lVar39 + 0x100000 >> 0x15;
  lVar81 = (uVar32 >> 3 & 0x1fffff) + uVar1 * uVar20 + uVar2 * uVar19 + uVar3 * uVar18 +
           uVar4 * uVar17 + uVar5 * uVar16 + uVar6 * uVar15 + uVar7 * uVar14 + uVar8 * uVar13 +
           lVar50;
  lVar50 = FUN_180600f70(lVar50);
  lVar51 = lVar40 + 0x100000 >> 0x15;
  lVar82 = (uVar34 >> 5 & 0x1fffff) + uVar1 * uVar22 + uVar2 * uVar21 + uVar3 * uVar20 +
           uVar4 * uVar19 + uVar5 * uVar18 + uVar6 * uVar17 + uVar7 * uVar16 + uVar8 * uVar15 +
           uVar9 * uVar14 + uVar10 * uVar13 + lVar51;
  lVar51 = FUN_180600f70(lVar51);
  lVar52 = lVar41 + 0x100000 >> 0x15;
  lVar83 = (uVar36 >> 7) + uVar1 * uVar24 + uVar2 * uVar23 + uVar3 * uVar22 + uVar4 * uVar21 +
           uVar5 * uVar20 + uVar6 * uVar19 + uVar7 * uVar18 + uVar8 * uVar17 + uVar9 * uVar16 +
           uVar10 * uVar15 + uVar11 * uVar14 + uVar12 * uVar13 + lVar52;
  lVar52 = FUN_180600f70(lVar52);
  lVar53 = lVar42 + 0x100000 >> 0x15;
  lVar84 = uVar3 * uVar24 + uVar4 * uVar23 + uVar5 * uVar22 + uVar6 * uVar21 + uVar7 * uVar20 +
           uVar8 * uVar19 + uVar9 * uVar18 + uVar10 * uVar17 + uVar11 * uVar16 + uVar12 * uVar15 +
           lVar53;
  lVar53 = FUN_180600f70(lVar53);
  lVar54 = lVar43 + 0x100000 >> 0x15;
  lVar85 = uVar5 * uVar24 + uVar6 * uVar23 + uVar7 * uVar22 + uVar8 * uVar21 + uVar9 * uVar20 +
           uVar10 * uVar19 + uVar11 * uVar18 + uVar12 * uVar17 + lVar54;
  lVar54 = FUN_180600f70(lVar54);
  lVar55 = lVar44 + 0x100000 >> 0x15;
  lVar86 = uVar7 * uVar24 + uVar8 * uVar23 + uVar9 * uVar22 + uVar10 * uVar21 + uVar11 * uVar20 +
           uVar12 * uVar19 + lVar55;
  lVar55 = FUN_180600f70(lVar55);
  lVar56 = lVar45 + 0x100000 >> 0x15;
  lVar87 = uVar9 * uVar24 + uVar10 * uVar23 + uVar11 * uVar22 + uVar12 * uVar21 + lVar56;
  lVar56 = FUN_180600f70(lVar56);
  lVar57 = lVar46 + 0x100000 >> 0x15;
  lVar88 = uVar11 * uVar24 + uVar12 * uVar23 + lVar57;
  lVar57 = FUN_180600f70(lVar57);
  lVar58 = (longlong)(uVar12 * uVar24 + 0x100000) >> 0x15;
  lVar59 = FUN_180600f70(lVar58);
  lVar60 = lVar78 + 0x100000 >> 0x15;
  lVar61 = FUN_180600f70(lVar60);
  lVar62 = lVar79 + 0x100000 >> 0x15;
  lVar63 = FUN_180600f70(lVar62);
  lVar64 = lVar80 + 0x100000 >> 0x15;
  lVar65 = FUN_180600f70(lVar64);
  lVar66 = lVar81 + 0x100000 >> 0x15;
  lVar67 = FUN_180600f70(lVar66);
  lVar68 = lVar82 + 0x100000 >> 0x15;
  lVar69 = FUN_180600f70(lVar68);
  lVar70 = lVar83 + 0x100000 >> 0x15;
  lVar71 = FUN_180600f70(lVar70);
  lVar72 = lVar84 + 0x100000 >> 0x15;
  lVar73 = FUN_180600f70(lVar72);
  lVar74 = lVar85 + 0x100000 >> 0x15;
  lVar75 = FUN_180600f70(lVar74);
  lVar76 = lVar86 + 0x100000 >> 0x15;
  lVar89 = (lVar45 - lVar56) + lVar76;
  lVar45 = FUN_180600f70(lVar76);
  lVar56 = lVar87 + 0x100000 >> 0x15;
  lVar57 = (lVar46 - lVar57) + lVar56;
  lVar46 = FUN_180600f70(lVar56);
  lVar87 = lVar87 - lVar46;
  lVar46 = lVar88 + 0x100000 >> 0x15;
  lVar56 = (uVar12 * uVar24 - lVar59) + lVar46;
  lVar46 = FUN_180600f70(lVar46);
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
  lVar39 = FUN_180600f70(lVar39);
  lVar40 = lVar64 + 0x100000 >> 0x15;
  lVar68 = (lVar82 - lVar69) + lVar88 * 0xa2c13 + lVar57 * 0x72d18 + lVar87 * 0x9fb67 +
           lVar89 * -0xf39ad + lVar40;
  lVar40 = FUN_180600f70(lVar40);
  lVar41 = lVar66 + 0x100000 >> 0x15;
  lVar69 = (lVar83 - lVar71) + lVar58 * 0xa2c13 + lVar56 * 0x72d18 + lVar88 * 0x9fb67 +
           lVar57 * -0xf39ad + lVar87 * 0x215d1 + lVar89 * -0xa6f7d + lVar41;
  lVar41 = FUN_180600f70(lVar41);
  lVar42 = lVar53 + 0x100000 >> 0x15;
  lVar57 = (lVar84 - lVar73) + lVar58 * 0x9fb67 + lVar56 * -0xf39ad + lVar88 * 0x215d1 +
           lVar57 * -0xa6f7d + lVar42;
  lVar42 = FUN_180600f70(lVar42);
  lVar43 = lVar54 + 0x100000 >> 0x15;
  lVar58 = (lVar85 - lVar75) + lVar58 * 0x215d1 + lVar56 * -0xa6f7d + lVar43;
  lVar43 = FUN_180600f70(lVar43);
  lVar44 = lVar55 + 0x100000 >> 0x15;
  lVar56 = (lVar86 - lVar45) + lVar44;
  lVar44 = FUN_180600f70(lVar44);
  lVar45 = lVar67 + 0x100000 >> 0x15;
  lVar46 = FUN_180600f70(lVar45);
  lVar50 = lVar68 + 0x100000 >> 0x15;
  lVar51 = FUN_180600f70(lVar50);
  lVar52 = lVar69 + 0x100000 >> 0x15;
  lVar53 = (lVar53 - lVar42) + lVar52;
  lVar42 = FUN_180600f70(lVar52);
  lVar52 = lVar57 + 0x100000 >> 0x15;
  lVar54 = (lVar54 - lVar43) + lVar52;
  lVar43 = FUN_180600f70(lVar52);
  lVar57 = lVar57 - lVar43;
  lVar43 = lVar58 + 0x100000 >> 0x15;
  lVar44 = (lVar55 - lVar44) + lVar43;
  lVar43 = FUN_180600f70(lVar43);
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
  lVar37 = FUN_180600f70(lVar37);
  lVar38 = lVar60 + 0x100000 >> 0x15;
  lVar63 = (lVar79 - lVar63) + lVar58 * 0xa2c13 + lVar54 * 0x72d18 + lVar57 * 0x9fb67 +
           lVar53 * -0xf39ad + lVar38;
  lVar38 = FUN_180600f70(lVar38);
  lVar39 = lVar62 + 0x100000 >> 0x15;
  lVar57 = (lVar80 - lVar65) + lVar56 * 0xa2c13 + lVar44 * 0x72d18 + lVar58 * 0x9fb67 +
           lVar54 * -0xf39ad + lVar57 * 0x215d1 + lVar53 * -0xa6f7d + lVar39;
  lVar39 = FUN_180600f70(lVar39);
  lVar40 = lVar59 + 0x100000 >> 0x15;
  lVar58 = (lVar67 - lVar46) + lVar56 * 0x9fb67 + lVar44 * -0xf39ad + lVar58 * 0x215d1 +
           lVar54 * -0xa6f7d + lVar40;
  lVar40 = FUN_180600f70(lVar40);
  lVar41 = lVar64 + 0x100000 >> 0x15;
  lVar56 = (lVar68 - lVar51) + lVar56 * 0x215d1 + lVar44 * -0xa6f7d + lVar41;
  lVar41 = FUN_180600f70(lVar41);
  lVar43 = lVar55 + 0x100000 >> 0x15;
  lVar65 = (lVar69 - lVar42) + lVar43;
  lVar42 = FUN_180600f70(lVar43);
  lVar43 = lVar61 + 0x100000 >> 0x15;
  lVar44 = FUN_180600f70(lVar43);
  lVar45 = lVar63 + 0x100000 >> 0x15;
  lVar46 = FUN_180600f70(lVar45);
  lVar47 = lVar57 + 0x100000 >> 0x15;
  lVar48 = FUN_180600f70(lVar47);
  lVar49 = lVar58 + 0x100000 >> 0x15;
  lVar50 = FUN_180600f70(lVar49);
  lVar51 = lVar56 + 0x100000 >> 0x15;
  lVar52 = FUN_180600f70(lVar51);
  lVar53 = lVar65 + 0x100000 >> 0x15;
  lVar54 = FUN_180600f70(lVar53);
  lVar66 = (lVar66 - lVar37) + lVar53 * 0xa2c13;
  lVar37 = lVar66 >> 0x15;
  lVar61 = (lVar61 - lVar44) + lVar53 * 0x72d18 + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar44 = lVar61 >> 0x15;
  lVar60 = (lVar60 - lVar38) + lVar43 + lVar53 * 0x9fb67 + lVar44;
  lVar38 = FUN_180600f70(lVar44);
  lVar43 = lVar60 >> 0x15;
  lVar63 = (lVar63 - lVar46) + lVar53 * -0xf39ad + lVar43;
  lVar43 = FUN_180600f70(lVar43);
  lVar44 = lVar63 >> 0x15;
  lVar62 = (lVar62 - lVar39) + lVar45 + lVar53 * 0x215d1 + lVar44;
  lVar39 = FUN_180600f70(lVar44);
  lVar44 = lVar62 >> 0x15;
  lVar53 = (lVar57 - lVar48) + lVar53 * -0xa6f7d + lVar44;
  lVar44 = FUN_180600f70(lVar44);
  lVar45 = lVar53 >> 0x15;
  lVar57 = (lVar59 - lVar40) + lVar47 + lVar45;
  lVar40 = FUN_180600f70(lVar45);
  lVar45 = lVar57 >> 0x15;
  lVar50 = (lVar58 - lVar50) + lVar45;
  lVar45 = FUN_180600f70(lVar45);
  lVar46 = lVar50 >> 0x15;
  lVar58 = (lVar64 - lVar41) + lVar49 + lVar46;
  lVar41 = FUN_180600f70(lVar46);
  lVar46 = lVar58 >> 0x15;
  lVar52 = (lVar56 - lVar52) + lVar46;
  lVar46 = FUN_180600f70(lVar46);
  lVar47 = lVar52 >> 0x15;
  lVar51 = (lVar55 - lVar42) + lVar51 + lVar47;
  lVar42 = FUN_180600f70(lVar47);
  lVar47 = lVar51 >> 0x15;
  lVar54 = (lVar65 - lVar54) + lVar47;
  lVar47 = FUN_180600f70(lVar47);
  lVar48 = lVar54 >> 0x15;
  lVar49 = FUN_180600f70(lVar48);
  lVar55 = (lVar66 - lVar37) + lVar48 * 0xa2c13;
  lVar37 = lVar55 >> 0x15;
  lVar38 = (lVar61 - lVar38) + lVar48 * 0x72d18 + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar55 = lVar55 - lVar37;
  lVar37 = lVar38 >> 0x15;
  lVar43 = (lVar60 - lVar43) + lVar48 * 0x9fb67 + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar38 = lVar38 - lVar37;
  lVar37 = lVar43 >> 0x15;
  lVar39 = (lVar63 - lVar39) + lVar48 * -0xf39ad + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar43 = lVar43 - lVar37;
  lVar37 = lVar39 >> 0x15;
  lVar44 = (lVar62 - lVar44) + lVar48 * 0x215d1 + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar39 = lVar39 - lVar37;
  lVar37 = lVar44 >> 0x15;
  lVar40 = (lVar53 - lVar40) + lVar48 * -0xa6f7d + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar44 = lVar44 - lVar37;
  lVar37 = lVar40 >> 0x15;
  lVar45 = (lVar57 - lVar45) + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar40 = lVar40 - lVar37;
  lVar37 = lVar45 >> 0x15;
  lVar41 = (lVar50 - lVar41) + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar45 = lVar45 - lVar37;
  lVar37 = lVar41 >> 0x15;
  lVar46 = (lVar58 - lVar46) + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar41 = lVar41 - lVar37;
  lVar37 = lVar46 >> 0x15;
  lVar42 = (lVar52 - lVar42) + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar46 = lVar46 - lVar37;
  lVar37 = lVar42 >> 0x15;
  lVar48 = (lVar51 - lVar47) + lVar37;
  lVar37 = FUN_180600f70(lVar37);
  lVar42 = lVar42 - lVar37;
  lVar37 = lVar48 >> 0x15;
  lVar47 = (lVar54 - lVar49) + lVar37;
  lVar37 = FUN_180600f70(lVar37);
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


/* address=180604410 name=FUN_180604410 */

void FUN_180604410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_248;
  FUN_1805f71e0(local_38,param_2,0x20);
  local_38[0] = local_38[0] & 0xf8;
  bStack_19 = bStack_19 & 0x7f | 0x40;
  FUN_1805fe2a0(local_88,param_3);
  FUN_1805fe410(local_1c8);
  FUN_1805fe3b0(local_218);
  FUN_1805ff010(local_178,local_88);
  FUN_1805fe410(local_1f0);
  local_228 = 0;
  for (local_224 = 0xfe; -1 < local_224; local_224 = local_224 + -1) {
    local_220 = (int)(uint)local_38[(int)(local_224 + (local_224 >> 0x1f & 7U)) >> 3] >>
                ((byte)local_224 & 7) & 1;
    local_228 = local_228 ^ local_220;
    FUN_1805fecf0(local_1c8,local_178,local_228);
    FUN_1805fecf0(local_218,local_1f0,local_228);
    local_228 = local_220;
    FUN_1805fe5e0(local_100,local_178,local_1f0);
    FUN_1805fe5e0(local_1a0,local_1c8,local_218);
    FUN_1805fe490(local_d8,local_1c8,local_218);
    FUN_1805fe490(local_150,local_178,local_1f0);
    FUN_1805feae0(local_1f0,local_100,local_d8);
    FUN_1805feae0(local_218,local_150,local_1a0);
    FUN_1805feb30(local_128,local_1a0);
    FUN_1805feb30(local_b0,local_d8);
    FUN_1805fe490(local_60,local_1f0,local_218);
    FUN_1805fe5e0(local_150,local_1f0,local_218);
    FUN_1805fe9f0(local_1c8,local_b0,local_128);
    FUN_1805fe5e0(local_1a0,local_b0,local_128);
    FUN_1805feb30(local_218,local_150);
    FUN_1805fedb0(local_1f0,local_1a0);
    FUN_1805feb30(local_178,local_60);
    FUN_1805fe490(local_100,local_128,local_1f0);
    FUN_1805fe9f0(local_1f0,local_88,local_218);
    FUN_1805feae0(local_218,local_1a0,local_100);
  }
  FUN_1805fecf0(local_1c8,local_178,local_228);
  FUN_1805fecf0(local_218,local_1f0,local_228);
  FUN_1805ff420(local_218,local_218);
  FUN_1805fe9f0(local_1c8,local_1c8,local_218);
  FUN_1805fe320(param_1,local_1c8);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_248);
  return;
}


/* address=1806047f0 name=FUN_1806047f0 */

void FUN_1806047f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180604410(param_1,param_2,param_3);
  return;
}


/* address=180604820 name=FUN_180604820 */

longlong FUN_180604820(longlong param_1)

{
  FUN_180523350(param_1);
  FUN_1805b6770(param_1 + 8);
  return param_1;
}


/* address=180604860 name=FUN_180604860 */

void FUN_180604860(longlong param_1)

{
  FUN_1805b67a0(param_1 + 8);
  FUN_1805c36c0(param_1);
  return;
}


/* address=1806048a0 name=FUN_1806048a0 */

bool FUN_1806048a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1805a71c0();
  FUN_1805c3700(param_1,uVar2);
  cVar1 = FUN_180521840(param_1);
  if (cVar1 != '\0') {
    FUN_1806050e0(param_1 + 8);
  }
  return cVar1 != '\0';
}


/* address=180604900 name=FUN_180604900 */

undefined FUN_180604900(longlong param_1,undefined2 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar2 = FUN_1805bcf00(param_2,param_3);
  lVar3 = FUN_180604cf0(param_1);
  if (lVar3 == lVar2) {
    return 1;
  }
  uVar4 = FUN_1805214c0(param_1 + 8);
  iVar1 = FUN_1805327c0(uVar4,lVar2,0);
  if (iVar1 != 0) {
    puVar5 = (undefined8 *)FUN_180521460(param_1);
    lVar2 = FUN_180521460(param_1);
    uVar4 = FUN_1805214c0(param_1 + 8);
    iVar1 = FUN_1805328f0(uVar4,*(undefined8 *)(lVar2 + 8),*puVar5);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=1806049e0 name=FUN_1806049e0 */

void FUN_1806049e0(longlong param_1)

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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_180521840(param_1);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)FUN_180521460(param_1);
    *puVar3 = 0;
  }
  cVar1 = FUN_180604e00(param_1,local_68,&local_c0);
  if (cVar1 != '\0') {
    local_c8 = 0xfe;
    local_c7 = 0;
    local_c6 = 0;
    local_c5 = local_c0;
    local_b8 = FUN_180604cf0(param_1);
    uVar4 = FUN_1805214c0(param_1 + 8);
    iVar2 = FUN_1805327c0(uVar4,local_b8,0);
    if (iVar2 != 0) {
      local_b0 = local_88;
      puVar5 = (undefined *)FUN_1805afac0(local_b0,&local_c8);
      puVar7 = local_a8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_180604d20(param_1,local_a8);
      if (cVar1 != '\0') {
        puVar5 = (undefined *)FUN_1805217d0(local_78,local_68,CONCAT71(uStack_bf,local_c0));
        puVar7 = local_98;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_180604d20(param_1,local_98);
      }
    }
  }
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_e8);
  return;
}


/* address=180604b60 name=FUN_180604b60 */

ulonglong FUN_180604b60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  byte local_24;
  
  lVar4 = FUN_180604cf0(param_1);
  if (lVar4 != 0) {
    iVar2 = FUN_180532ad0(lVar4);
    iVar3 = FUN_180532ad0(param_3);
    if (iVar2 == iVar3) {
      uVar5 = FUN_1805214c0(param_1 + 8);
      iVar2 = FUN_180532500(param_2,uVar5);
      return (ulonglong)(iVar2 != 0);
    }
  }
  cVar1 = FUN_180521840(param_1);
  if (cVar1 == '\0') {
    uVar7 = FUN_18050f6f0(0x10,0,0x44,
                          "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_transcript.cc"
                          ,0xd8);
    return uVar7 & 0xffffffffffffff00;
  }
  iVar2 = FUN_1805327c0(param_2,param_3,0);
  if (iVar2 != 0) {
    puVar6 = (undefined8 *)FUN_180521460(param_1);
    lVar4 = FUN_180521460(param_1);
    iVar2 = FUN_1805328f0(param_2,*(undefined8 *)(lVar4 + 8),*puVar6);
    if (iVar2 != 0) {
      local_24 = 1;
      goto LAB_180604c54;
    }
  }
  local_24 = 0;
LAB_180604c54:
  return (ulonglong)local_24;
}


/* address=180604c90 name=FUN_180604c90 */

void FUN_180604c90(undefined8 param_1)

{
  FUN_1805c3700(param_1,0);
  return;
}


/* address=180604cc0 name=FUN_180604cc0 */

void FUN_180604cc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180604cf0(param_1);
  FUN_180532b10(uVar1);
  return;
}


/* address=180604cf0 name=FUN_180604cf0 */

void FUN_180604cf0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1805214c0(param_1 + 8);
  FUN_180532b50(uVar1);
  return;
}


/* address=180604d20 name=FUN_180604d20 */

undefined8 FUN_180604d20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar1 = FUN_180521840(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_180521770(param_2);
    uVar4 = FUN_180521460(param_2);
    uVar5 = FUN_180521460(param_1);
    iVar2 = FUN_1805a7420(uVar5,uVar4,uVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar3 = FUN_1805214c0(param_1 + 8);
  lVar6 = FUN_180532b50(uVar3);
  if (lVar6 != 0) {
    uVar3 = FUN_180521770(param_2);
    uVar4 = FUN_180521460(param_2);
    uVar5 = FUN_1805214c0(param_1 + 8);
    FUN_1805328f0(uVar5,uVar4,uVar3);
  }
  return 1;
}


/* address=180604e00 name=FUN_180604e00 */

undefined FUN_180604e00(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint local_34;
  undefined8 local_30;
  undefined local_28 [40];
  
  FUN_1805b6770(local_28);
  local_30 = FUN_1805214c0(param_1 + 8);
  uVar2 = FUN_1805214c0(local_28);
  iVar1 = FUN_180532500(uVar2,local_30);
  if (iVar1 != 0) {
    uVar2 = FUN_1805214c0(local_28);
    iVar1 = FUN_180532930(uVar2,param_2,&local_34);
    if (iVar1 != 0) {
      *param_3 = (ulonglong)local_34;
      FUN_1805b67a0(local_28);
      return 1;
    }
  }
  FUN_1805b67a0(local_28);
  return 0;
}


/* address=180604ec0 name=FUN_180604ec0 */

void FUN_180604ec0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_178;
  if (param_5 == '\0') {
    local_148 = (undefined *)FUN_1805217d0(local_b8,"client finished",0xf);
  }
  else {
    local_148 = (undefined *)FUN_1805217d0(local_c8,"server finished",0xf);
  }
  local_140 = local_148;
  puVar2 = local_148;
  puVar5 = local_128;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar1 = FUN_180604e00(param_1,local_68,&local_130);
  if (cVar1 != '\0') {
    local_138 = local_a8;
    puVar2 = (undefined *)FUN_180521710(local_138);
    puVar5 = local_118;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined *)FUN_1805217d0(local_98,local_68,local_130);
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
    puVar2 = (undefined *)FUN_1805217d0(local_88,param_4 + 0xb,*(undefined *)(param_4 + 10));
    puVar5 = local_e8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined *)FUN_1805217d0(local_78,param_2,0xc);
    puVar5 = local_d8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_180604cf0(param_1);
    local_150 = local_118;
    local_158 = local_108;
    cVar1 = FUN_180632e80(uVar3,local_d8,local_e8,local_f8);
    if (cVar1 != '\0') {
      *param_3 = 0xc;
    }
  }
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_178);
  return;
}


/* address=1806050e0 name=FUN_1806050e0 */

void FUN_1806050e0(undefined8 param_1)

{
  FUN_1805323f0(param_1);
  FUN_180532380(param_1);
  return;
}


/* address=180605110 name=FUN_180605110 */

undefined8 FUN_180605110(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180605160 name=FUN_180605160 */

undefined8 FUN_180605160(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1806051b0 name=FUN_1806051b0 */

undefined8 FUN_1806051b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1806051f0 name=FUN_1806051f0 */

undefined8 FUN_1806051f0(undefined8 *param_1,undefined *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined local_28 [24];
  
  uVar2 = FUN_1805af6a0(*param_1);
  cVar1 = FUN_1806074e0(param_1,param_1 + 0x33,uVar2,param_1[0xc0]);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if ((*(byte *)((longlong)param_1 + 0x622) >> 3 & 1) == 0) {
      FUN_180604c90(param_1 + 0x33);
    }
    puVar5 = local_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_180607590(param_1,param_1 + 0x33,local_28);
  }
  return uVar3;
}


/* address=1806052b0 name=FUN_1806052b0 */

undefined FUN_1806052b0(longlong *param_1,longlong param_2)

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
    FID_conflict__assert
              (L"!hs->ssl->server",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
               ,0x4e);
  }
  cVar1 = FUN_180521840(param_1 + 0xbf);
  if (cVar1 == '\0') {
    local_50 = param_1 + 0x33;
  }
  else {
    local_50 = param_1 + 0x38;
  }
  uVar2 = FUN_1805b8550(param_2);
  cVar1 = FUN_1806074e0(param_1,local_50,uVar2,*(undefined8 *)(param_2 + 200));
  if (cVar1 != '\0') {
    puVar3 = (undefined *)FUN_1805217d0(local_28,param_2 + 0xb,*(undefined *)(param_2 + 10));
    puVar5 = local_38;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_180607590(param_1,local_50,local_38);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* address=180605400 name=FUN_180605400 */

void FUN_180605400(longlong param_1,undefined *param_2)

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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_158;
  local_138 = (undefined *)FUN_180604cf0(param_1 + 0x198);
  local_130 = 0;
  iVar2 = FUN_180532a20(0,0,local_68,&local_124);
  if (iVar2 != 0) {
    local_120 = local_b8;
    puVar3 = (undefined *)FUN_1805217d0(local_a8,local_68,local_124);
    puVar6 = local_108;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = (undefined *)FUN_1806076d0(local_98,"derived");
    puVar6 = local_f8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar4 = FUN_180608000(param_1,local_88);
    puVar3 = (undefined *)FUN_1805235c0(local_120,uVar4);
    puVar6 = local_e8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    local_118 = FUN_180604cf0(param_1 + 0x198);
    puVar3 = (undefined *)FUN_180608000(param_1,local_78);
    puVar6 = local_d8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    local_138 = local_108;
    cVar1 = FUN_180607710(local_d8,local_118,local_e8,local_f8);
    if (cVar1 != '\0') {
      puVar3 = local_c8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      cVar1 = FUN_180607590(param_1,param_1 + 0x198,local_c8);
      if (cVar1 != '\0') {
        local_128 = 1;
        goto LAB_1806055ca;
      }
    }
  }
  local_128 = 0;
LAB_1806055ca:
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_158);
  return;
}


/* address=1806055f0 name=FUN_1806055f0 */

void FUN_1806055f0(longlong *param_1,undefined4 param_2,int param_3,longlong param_4,
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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_308;
  local_2b0 = FUN_1805b8550(param_4);
  FUN_180523350(local_2b8);
  FUN_180521710(local_220);
  if (param_1[0x13] == 0) {
    iVar3 = FUN_180517d10(param_1);
    local_2c8 = iVar3 != 0;
    local_2e0 = (undefined *)CONCAT71(local_2e0._1_7_,local_2c8);
    local_2e8 = (undefined *)CONCAT62(local_2e8._2_6_,local_2b0);
    cVar1 = FUN_1805bcc30(&local_2a8,local_290,local_290,*(undefined8 *)(param_4 + 200));
    if (cVar1 == '\0') {
      local_2c6 = 0;
      FUN_1805c0fa0(local_2b8);
      goto LAB_180605d47;
    }
    local_2a0 = FUN_1805b85b0(param_4);
    local_288 = FUN_18055cd60(local_2a8);
    FUN_1805217d0(local_200,local_78,local_288);
    local_280 = local_108;
    puVar5 = (undefined *)FUN_180521710(local_280);
    puVar8 = local_1d8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_1806076d0(local_f8,&DAT_1807ac278);
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
    cVar1 = FUN_180607710(local_1a8,local_2a0,local_1b8,local_1c8);
    if (cVar1 == '\0') {
      local_2c5 = 0;
      FUN_1805c0fa0(local_2b8);
      goto LAB_180605d47;
    }
    local_278 = FUN_18055cd80(local_2a8);
    FUN_1805217d0(local_210,local_98,local_278);
    local_270 = local_e8;
    puVar5 = (undefined *)FUN_180521710(local_270);
    puVar8 = local_198;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_1806076d0(local_d8,&DAT_1807ac108);
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
    cVar1 = FUN_180607710(local_168,local_2a0,local_178,local_188);
    if (cVar1 == '\0') {
      local_2c4 = 0;
      FUN_1805c0fa0(local_2b8);
      goto LAB_180605d47;
    }
    local_268 = local_c8;
    local_260 = local_b8;
    iVar3 = FUN_180517d10(param_1);
    local_2c7 = iVar3 != 0;
    puVar5 = (undefined *)FUN_1805235c0(local_268,local_210);
    puVar8 = local_158;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_180521710(local_a8);
    puVar8 = local_148;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined *)FUN_1805235c0(local_260,local_200);
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
    uVar4 = FUN_1805bf240(local_258,param_3,*(undefined2 *)(param_4 + 4),local_2c7);
    FUN_180608090(local_2b8,uVar4);
    FUN_1805c0fa0(local_258);
  }
  else {
    uVar4 = FUN_1805bfad0(local_298,local_2b0,*(undefined8 *)(param_4 + 200));
    FUN_180608090(local_2b8,uVar4);
    FUN_1805c0fa0(local_298);
    puVar5 = param_5;
    puVar8 = local_220;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  cVar1 = FUN_180521840(local_2b8);
  if (cVar1 == '\0') {
    local_2c3 = 0;
    FUN_1805c0fa0(local_2b8);
  }
  else {
    uVar6 = FUN_180521770(param_5);
    if ((uVar6 < 0x31) && (uVar6 = FUN_180521770(param_5), uVar6 < 0x31)) {
      if (param_3 == 0) {
        local_250 = local_1e8;
        puVar5 = local_220;
        puVar8 = local_128;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        }
        uVar4 = FUN_1805214c0(local_2b8);
        uVar4 = FUN_180521660(local_250,uVar4);
        local_248 = *param_1;
        cVar1 = (**(code **)(local_248 + 0x88))(param_1,param_2,uVar4,local_128);
        if (cVar1 == '\0') {
          local_2c1 = 0;
          FUN_1805c0fa0(local_2b8);
          goto LAB_180605d47;
        }
        local_240 = FUN_180521770(param_5);
        uVar4 = FUN_180521460(param_5);
        FUN_180605160(param_1[6] + 0x150,uVar4,local_240);
        uVar2 = FUN_180521770(param_5);
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
        uVar4 = FUN_1805214c0(local_2b8);
        uVar4 = FUN_180521660(local_238,uVar4);
        local_230 = *param_1;
        cVar1 = (**(code **)(local_230 + 0x90))(param_1,param_2,uVar4,local_118);
        if (cVar1 == '\0') {
          local_2c0 = 0;
          FUN_1805c0fa0(local_2b8);
          goto LAB_180605d47;
        }
        local_228 = FUN_180521770(param_5);
        uVar4 = FUN_180521460(param_5);
        FUN_180605160(param_1[6] + 0x120,uVar4,local_228);
        uVar2 = FUN_180521770(param_5);
        *(undefined *)(param_1[6] + 0x1b0) = uVar2;
      }
      local_2bf = 1;
      FUN_1805c0fa0(local_2b8);
    }
    else {
      local_2e8 = (undefined *)CONCAT44(local_2e8._4_4_,0xc3);
      FUN_18050f6f0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                   );
      local_2c2 = 0;
      FUN_1805c0fa0(local_2b8);
    }
  }
LAB_180605d47:
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_308);
  return;
}


/* address=180605d70 name=FUN_180605d70 */

undefined8 FUN_180605d70(longlong *param_1)

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
  if (((*(byte *)(lVar1 + 0xa4) & 1) == 0) && (cVar2 = FUN_180521840(param_1 + 0xbf), cVar2 != '\0')
     ) {
    local_b8 = param_1 + 0x38;
  }
  else {
    local_b8 = param_1 + 0x33;
  }
  puVar3 = (undefined *)FUN_1806076d0(local_58,"c e traffic");
  puVar6 = local_88;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = (undefined *)FUN_1805cd220(param_1,local_48);
  puVar6 = local_78;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar2 = FUN_180607840(param_1,local_78,local_b8,local_88);
  if (cVar2 != '\0') {
    uVar4 = FUN_1805cd220(param_1,local_28);
    puVar3 = (undefined *)FUN_1805235c0(local_38,uVar4);
    puVar6 = local_68;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar2 = FUN_18051ef90(lVar1,"CLIENT_EARLY_TRAFFIC_SECRET",local_68);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* address=180605ee0 name=FUN_180605ee0 */

undefined8 FUN_180605ee0(undefined8 *param_1)

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
  puVar3 = (undefined *)FUN_1806076d0(local_98,"c hs traffic");
  puVar6 = local_f8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = (undefined *)FUN_1805da490(param_1,local_88);
  puVar6 = local_e8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar2 = FUN_180607970(param_1,local_e8,local_f8);
  if (cVar2 != '\0') {
    uVar4 = FUN_1805da490(param_1,local_68);
    puVar3 = (undefined *)FUN_1805235c0(local_78,uVar4);
    puVar6 = local_d8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    cVar2 = FUN_18051ef90(uVar1,"CLIENT_HANDSHAKE_TRAFFIC_SECRET",local_d8);
    if (cVar2 != '\0') {
      puVar3 = (undefined *)FUN_1806076d0(local_58,"s hs traffic");
      puVar6 = local_c8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3 = (undefined *)FUN_1805da4d0(param_1,local_48);
      puVar6 = local_b8;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      cVar2 = FUN_180607970(param_1,local_b8,local_c8);
      if (cVar2 != '\0') {
        uVar4 = FUN_1805da4d0(param_1,local_28);
        puVar3 = (undefined *)FUN_1805235c0(local_38,uVar4);
        puVar6 = local_a8;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        cVar2 = FUN_18051ef90(uVar1,"SERVER_HANDSHAKE_TRAFFIC_SECRET",local_a8);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


/* address=1806060c0 name=FUN_1806060c0 */

undefined FUN_1806060c0(longlong param_1,int param_2)

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
  
  FUN_180521710(local_f8);
  if (param_2 == 0) {
    puVar2 = (undefined *)
             FUN_1805217d0(local_78,*(longlong *)(param_1 + 0x30) + 0x150,
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
             FUN_1805217d0(local_68,*(longlong *)(param_1 + 0x30) + 0x120,
                           *(undefined *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
    puVar5 = local_f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  uVar3 = FUN_1805b7600(param_1);
  local_d8 = FUN_1805b85b0(uVar3);
  local_e8 = local_58;
  local_e0 = local_48;
  puVar2 = (undefined *)FUN_180521710(local_e8);
  puVar5 = local_c8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined *)FUN_1806076d0(local_38,"traffic upd");
  puVar5 = local_b8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar2 = (undefined *)FUN_1805235c0(local_e0,local_f8);
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
  cVar1 = FUN_180607710(local_98,local_d8,local_a8,local_b8,local_c8);
  if (cVar1 != '\0') {
    local_d0 = local_28;
    puVar2 = (undefined *)FUN_1805235c0(local_d0,local_f8);
    puVar5 = local_88;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_1806055f0(param_1,3,param_2,uVar3,local_88);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


/* address=180606300 name=FUN_180606300 */

undefined8 FUN_180606300(longlong *param_1)

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
  uVar2 = FUN_180604cc0(param_1 + 0x33);
  *(undefined *)(*(longlong *)(lVar1 + 0x30) + 0x1b2) = uVar2;
  puVar4 = (undefined *)FUN_1806076d0(local_c8,"c ap traffic");
  puVar7 = local_158;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar4 = (undefined *)FUN_1805da510(param_1,local_b8);
  puVar7 = local_148;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  cVar3 = FUN_180607970(param_1,local_148,local_158);
  if (cVar3 != '\0') {
    uVar5 = FUN_1805da510(param_1,local_98);
    puVar4 = (undefined *)FUN_1805235c0(local_a8,uVar5);
    puVar7 = local_138;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar3 = FUN_18051ef90(lVar1,"CLIENT_TRAFFIC_SECRET_0",local_138);
    if (cVar3 != '\0') {
      puVar4 = (undefined *)FUN_1806076d0(local_88,"s ap traffic");
      puVar7 = local_128;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = (undefined *)FUN_1805da550(param_1,local_78);
      puVar7 = local_118;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar3 = FUN_180607970(param_1,local_118,local_128);
      if (cVar3 != '\0') {
        uVar5 = FUN_1805da550(param_1,local_58);
        puVar4 = (undefined *)FUN_1805235c0(local_68,uVar5);
        puVar7 = local_108;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar3 = FUN_18051ef90(lVar1,"SERVER_TRAFFIC_SECRET_0",local_108);
        if (cVar3 != '\0') {
          puVar4 = (undefined *)FUN_1806076d0(local_48,"exp master");
          puVar7 = local_f8;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar4 = (undefined *)
                   FUN_1805217d0(local_38,*(longlong *)(lVar1 + 0x30) + 0x180,
                                 *(undefined *)(*(longlong *)(lVar1 + 0x30) + 0x1b2));
          puVar7 = local_e8;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
          cVar3 = FUN_180607970(param_1,local_e8,local_f8);
          if (cVar3 != '\0') {
            puVar4 = (undefined *)
                     FUN_1805217d0(local_28,*(longlong *)(lVar1 + 0x30) + 0x180,
                                   *(undefined *)(*(longlong *)(lVar1 + 0x30) + 0x1b2));
            puVar7 = local_d8;
            for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
              *puVar7 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar7 = puVar7 + 1;
            }
            cVar3 = FUN_18051ef90(lVar1,"EXPORTER_SECRET",local_d8);
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


/* address=180606610 name=FUN_180606610 */

ulonglong FUN_180606610(longlong param_1)

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
  
  uVar2 = FUN_180604cc0(param_1 + 0x198);
  if (uVar2 < 0x31) {
    uVar1 = FUN_180604cc0(param_1 + 0x198);
    lVar3 = FUN_180521460(param_1 + 0x5e0);
    *(undefined *)(lVar3 + 10) = uVar1;
    puVar4 = (undefined *)FUN_1806076d0(local_38,"res master");
    puVar5 = local_58;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_180521460(param_1 + 0x5e0);
    uVar1 = *(undefined *)(lVar3 + 10);
    lVar3 = FUN_180521460(param_1 + 0x5e0);
    puVar4 = (undefined *)FUN_1805217d0(local_28,lVar3 + 0xb,uVar1);
    puVar5 = local_48;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_180607970(param_1,local_48,local_58);
  }
  else {
    uVar2 = FUN_18050f6f0(0x10,0,0x44,
                          "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                          ,0x135);
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}


/* address=180606750 name=FUN_180606750 */

void FUN_180606750(undefined8 param_1,undefined *param_2,undefined *param_3,undefined *param_4,
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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_218;
  cVar1 = FUN_180521780(param_3);
  if (cVar1 == '\0') {
    uVar3 = FUN_1805b7600(param_1);
    local_1e0 = (undefined *)FUN_1805b85b0(uVar3);
    local_1d0 = FUN_180521770(param_5);
    uVar3 = FUN_180521460(param_5);
    local_1f0 = 0;
    local_1f8 = local_1e0;
    iVar2 = FUN_180532a20(uVar3,local_1d0,local_e8,&local_1d8);
    if (iVar2 != 0) {
      local_1f0 = 0;
      local_1f8 = local_1e0;
      iVar2 = FUN_180532a20(0,0,local_a8,&local_1d4);
      if (iVar2 != 0) {
        FUN_1805217d0(local_158,local_e8,local_1d8);
        FUN_1805217d0(local_1b0,local_a8,local_1d4);
        uVar3 = FUN_180532b10(local_1e0);
        FUN_1805217d0(local_1c0,local_68,uVar3);
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
        cVar1 = FUN_180607710(local_168,local_1e0,local_178,local_188);
        if (cVar1 != '\0') {
          local_1c8 = local_108;
          puVar4 = local_158;
          puVar6 = local_148;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = (undefined *)FUN_1806076d0(local_f8,"exporter");
          puVar6 = local_138;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar4 = (undefined *)FUN_1805235c0(local_1c8,local_1c0);
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
          cVar1 = FUN_180607710(local_118,local_1e0,local_128,local_138);
          if (cVar1 != '\0') {
            local_1e8 = 1;
            goto LAB_180606a52;
          }
        }
        local_1e8 = 0;
      }
    }
  }
  else {
    FID_conflict__assert
              (L"0",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
               ,0x176);
    local_1f8 = (undefined *)CONCAT44(local_1f8._4_4_,0x177);
    FUN_18050f6f0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
LAB_180606a52:
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_218);
  return;
}


/* address=180606a80 name=FUN_180606a80 */

void FUN_180606a80(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_118;
  if (param_4 == '\0') {
    local_e8 = FUN_1805da490(param_1,local_88);
  }
  else {
    local_e8 = FUN_1805da4d0(param_1,local_98);
  }
  local_e0 = local_e8;
  FUN_1805235c0(local_c8,local_e8);
  cVar1 = FUN_180604e00(param_1 + 0x33,local_68,&local_d8);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_1805217d0(local_78,local_68,local_d8);
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
    uVar3 = FUN_180604cf0(param_1 + 0x33);
    local_f0 = local_b8;
    local_f8 = local_a8;
    FUN_1806079e0(param_2,param_3,uVar3,*(undefined2 *)(local_d0 + 0x10));
  }
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_118);
  return;
}


/* address=180606c10 name=FUN_180606c10 */

void FUN_180606c10(longlong param_1,undefined *param_2)

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
  
  uVar1 = FUN_1805b85b0(param_1);
  FUN_1805217d0(local_88,param_1 + 0xb,*(undefined *)(param_1 + 10));
  puVar2 = local_78;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined *)FUN_1806076d0(local_28,"resumption");
  puVar4 = local_68;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined *)FUN_1805235c0(local_38,local_88);
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
  FUN_180607710(local_48,uVar1,local_58,local_68,local_78);
  return;
}


/* address=180606d20 name=FUN_180606d20 */

void FUN_180606d20(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_f8;
  local_c0 = *param_1;
  uVar2 = FUN_180521460(local_c0 + 0x58);
  local_b0 = FUN_1805b85b0(uVar2);
  local_b8 = FUN_180532b10(local_b0);
  local_a0 = local_b8 + 3;
  local_a8 = local_78;
  puVar3 = (undefined *)FUN_1805235c0(local_a8,param_3);
  puVar5 = local_98;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_180521460(local_c0 + 0x58);
  local_d0 = local_a0;
  local_d8 = local_98;
  cVar1 = FUN_180607bc0(local_68,&local_c8,uVar2,param_2);
  if ((cVar1 == '\0') || (local_c8 != local_b8)) {
    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,0x1d8);
    FUN_18050f6f0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
  else {
    FUN_18052d990(param_3,local_88,local_c8);
    uVar2 = FUN_180521460(local_88);
    FUN_180605110(uVar2,local_68,local_c8);
    if (param_4 != (longlong *)0x0) {
      *param_4 = local_c8;
    }
  }
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_f8);
  return;
}


/* address=180606ec0 name=FUN_180606ec0 */

void FUN_180606ec0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_e8;
  local_a8 = FUN_18059e7c0(param_4);
  local_a8 = local_a8 + 2;
  puVar3 = (undefined *)FUN_18052d760(param_3 + 0x18,local_78);
  puVar6 = local_88;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  local_c0 = local_a8;
  local_c8 = local_88;
  cVar1 = FUN_180607bc0(local_68,&local_b0,param_2,param_1 + 0x198);
  if ((cVar1 == '\0') || (iVar2 = FUN_18059ed40(param_4,local_a0), iVar2 == 0)) {
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0x1f1);
    FUN_18050f6f0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
    goto LAB_18060702d;
  }
  lVar5 = FUN_18059e7c0(local_a0);
  if (lVar5 == local_b0) {
    uVar4 = FUN_18059e7a0(local_a0);
    iVar2 = FUN_18058f7e0(uVar4,local_68,local_b0);
    if (iVar2 != 0) goto LAB_180606fec;
    local_b4 = 1;
  }
  else {
LAB_180606fec:
    local_b4 = 0;
  }
  local_b8 = (char)local_b4;
  if ((char)local_b4 == '\0') {
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0x1fc);
    FUN_18050f6f0(0x10,0,0x8e,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
LAB_18060702d:
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_e8);
  return;
}


/* address=180607050 name=FUN_180607050 */

longlong FUN_180607050(undefined8 param_1)

{
  int iVar1;
  int local_18;
  
  iVar1 = FUN_180517d10(param_1);
  if (iVar1 == 0) {
    local_18 = 4;
  }
  else {
    local_18 = 0xc;
  }
  return (longlong)local_18 + 0x1a;
}


/* address=1806070a0 name=FUN_1806070a0 */

void FUN_1806070a0(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_208;
  uVar3 = FUN_180521770(param_6);
  if (uVar3 < param_7 + 8U) {
    local_1e8 = (undefined *)CONCAT44(local_1e8._4_4_,0x215);
    FUN_18050f6f0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 );
  }
  else {
    FUN_180521ff0(param_6,local_150,0,param_7);
    FUN_180521ff0(param_6,local_140,param_7 + 8,0xffffffffffffffff);
    FUN_1805b6770(local_1b8);
    local_198 = FUN_180604cf0(param_4);
    uVar4 = FUN_1805214c0(local_1b8);
    cVar1 = FUN_180604b60(param_4,uVar4,local_198);
    if (cVar1 != '\0') {
      local_190 = FUN_180521770(local_150);
      local_188 = FUN_180521460(local_150);
      uVar4 = FUN_1805214c0(local_1b8);
      iVar2 = FUN_1805328f0(uVar4,local_188,local_190);
      if (iVar2 != 0) {
        uVar4 = FUN_1805214c0(local_1b8);
        iVar2 = FUN_1805328f0(uVar4,&DAT_1807ace10,8);
        if (iVar2 != 0) {
          local_180 = FUN_180521770(local_140);
          local_178 = FUN_180521460(local_140);
          uVar4 = FUN_1805214c0(local_1b8);
          iVar2 = FUN_1805328f0(uVar4,local_178,local_180);
          if (iVar2 != 0) {
            uVar4 = FUN_1805214c0(local_1b8);
            iVar2 = FUN_180532930(uVar4,local_a8,&local_1c4);
            if (iVar2 != 0) {
              local_170 = FUN_180604cc0(param_4);
              local_168 = (undefined *)FUN_180521770(param_3);
              local_160 = FUN_180521460(param_3);
              uVar4 = FUN_180604cf0(param_4);
              local_1d8 = local_170;
              local_1e0 = &DAT_1807ace10;
              local_1e8 = local_168;
              iVar2 = FUN_18057f8a0(local_68,&local_158,uVar4,local_160);
              if (iVar2 == 0) {
                local_1c7 = 0;
                FUN_1805b67a0(local_1b8);
              }
              else {
                lVar5 = FUN_180521770(param_2);
                if (lVar5 != 8) {
                  FID_conflict__assert
                            (L"out.size() == ECH_CONFIRMATION_SIGNAL_LEN",
                             L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                             ,0x22e);
                }
                if (param_5 == '\0') {
                  local_1c0 = (undefined *)FUN_1806076d0(local_d8,"ech accept confirmation");
                }
                else {
                  local_1c0 = (undefined *)FUN_1806076d0(local_e8,"hrr ech accept confirmation");
                }
                puVar6 = (undefined *)FUN_1805217d0(local_c8,local_a8,local_1c4);
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
                puVar6 = (undefined *)FUN_1805217d0(local_b8,local_68,local_158);
                puVar7 = local_108;
                for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar7 = *puVar6;
                  puVar6 = puVar6 + 1;
                  puVar7 = puVar7 + 1;
                }
                uVar4 = FUN_180604cf0(param_4);
                puVar6 = local_f8;
                for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                  *puVar6 = *param_2;
                  param_2 = param_2 + 1;
                  puVar6 = puVar6 + 1;
                }
                local_1e8 = local_128;
                local_1c6 = FUN_180607710(local_f8,uVar4,local_108,local_118);
                FUN_1805b67a0(local_1b8);
              }
              goto LAB_1806074b4;
            }
          }
        }
      }
    }
    local_1c8 = 0;
    FUN_1805b67a0(local_1b8);
  }
LAB_1806074b4:
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_208);
  return;
}


/* address=1806074e0 name=FUN_1806074e0 */

bool FUN_1806074e0(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined local_30 [16];
  undefined local_20 [32];
  
  cVar1 = FUN_180604900(param_2,param_3,param_4);
  if (cVar1 != '\0') {
    uVar2 = FUN_180604cc0(param_2);
    FUN_1805c5040(param_1,uVar2);
    uVar2 = FUN_180608000(param_1,local_30);
    uVar2 = FUN_180521770(uVar2);
    uVar3 = FUN_180608000(param_1,local_20);
    uVar3 = FUN_180521460(uVar3);
    FUN_1806051b0(uVar3,0,uVar2);
  }
  return cVar1 != '\0';
}


/* address=180607590 name=FUN_180607590 */

undefined8 FUN_180607590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  
  uVar2 = FUN_180608000(param_1,local_48);
  uVar2 = FUN_180521770(uVar2);
  uVar3 = FUN_180608000(param_1,local_38);
  uVar3 = FUN_180521460(uVar3);
  uVar4 = FUN_180521770(param_3);
  uVar5 = FUN_180521460(param_3);
  uVar6 = FUN_180604cf0(param_2);
  uVar7 = FUN_180608000(param_1,local_28);
  uVar7 = FUN_180521460(uVar7);
  iVar1 = FUN_18057f8a0(uVar7,&local_50,uVar6,uVar5,uVar4,uVar3,uVar2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180608000(param_1,local_18);
    lVar8 = FUN_180521770(uVar2);
    if (local_50 != lVar8) {
      FID_conflict__assert
                (L"len == hs->secret().size()",
                 L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                 ,0x3a);
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=1806076d0 name=FUN_1806076d0 */

undefined8 FUN_1806076d0(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_1805217d0(param_1,param_2,sVar1);
  return param_1;
}


/* address=180607710 name=FUN_180607710 */

bool FUN_180607710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  uVar2 = FUN_180521770(param_5);
  uVar3 = FUN_180521460(param_5);
  uVar4 = FUN_180521770(param_4);
  uVar5 = FUN_180521460(param_4);
  uVar6 = FUN_180521770(param_3);
  uVar7 = FUN_180521460(param_3);
  uVar8 = FUN_180521770(param_1);
  uVar9 = FUN_180521460(param_1);
  iVar1 = FUN_180586360(uVar9,uVar8,param_2,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  return iVar1 == 1;
}


/* address=180607840 name=FUN_180607840 */

void FUN_180607840(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_108;
  cVar1 = FUN_180604e00(param_3,local_68,local_d8);
  if (cVar1 != '\0') {
    puVar2 = (undefined *)FUN_1805217d0(local_88,local_68,local_d8[0]);
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
    puVar2 = (undefined *)FUN_180608000(param_1,local_78);
    puVar5 = local_a8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = FUN_180604cf0(param_3);
    puVar2 = local_98;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    local_e8 = local_c8;
    FUN_180607710(local_98,uVar3,local_a8,local_b8);
  }
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_108);
  return;
}


/* address=180607970 name=FUN_180607970 */

void FUN_180607970(longlong param_1,undefined *param_2,undefined *param_3)

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
  FUN_180607840(param_1,local_28,param_1 + 0x198,local_38);
  return;
}


/* address=1806079e0 name=FUN_1806079e0 */

void FUN_1806079e0(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_148;
  uVar2 = FUN_180532b10(param_3);
  FUN_1805217d0(local_e0,local_68,uVar2);
  local_100 = local_88;
  puVar3 = (undefined *)FUN_180521710(local_100);
  puVar5 = local_c8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined *)FUN_1806076d0(local_78,"finished");
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
  cVar1 = FUN_180607710(local_98,param_3,local_a8,local_b8);
  if (cVar1 != '\0') {
    local_f8 = (undefined *)FUN_180521770(param_6);
    local_f0 = FUN_180521460(param_6);
    local_e8 = FUN_180521770(local_e0);
    uVar2 = FUN_180521460(local_e0);
    local_118 = local_108;
    local_128 = local_f8;
    local_120 = param_1;
    lVar4 = FUN_180532d40(param_3,uVar2,local_e8,local_f0);
    if (lVar4 != 0) {
      *param_2 = (ulonglong)local_108[0];
    }
  }
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_148);
  return;
}


/* address=180607bc0 name=FUN_180607bc0 */

void FUN_180607bc0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_298;
  local_250 = (undefined *)FUN_1805b85b0(param_3);
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
  uVar3 = FUN_180532b10(local_250);
  FUN_1805217d0(local_1f0,local_e8,uVar3);
  local_270 = (undefined *)0x0;
  local_278 = local_250;
  iVar2 = FUN_180532a20(0,0,local_a8,&local_248);
  if (iVar2 != 0) {
    local_278 = (undefined *)(ulonglong)*(byte *)(param_3 + 10);
    local_268 = 0;
    local_270 = (undefined *)0x0;
    iVar2 = FUN_18057f8a0(local_128,&local_240,local_250,param_3 + 0xb);
    if (iVar2 != 0) {
      puVar4 = (undefined *)FUN_1805217d0(local_178,local_a8,local_248);
      puVar7 = local_1d8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = (undefined *)FUN_1806076d0(local_168,"res binder");
      puVar7 = local_1c8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = (undefined *)FUN_1805217d0(local_158,local_128,local_240);
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
      cVar1 = FUN_180607710(local_1a8,local_250,local_1b8,local_1c8);
      if (cVar1 != '\0') {
        uVar5 = FUN_180521770(param_5);
        if (uVar5 < param_6) {
          local_278 = (undefined *)CONCAT44(local_278._4_4_,0x1b2);
          FUN_18050f6f0(0x10,0,0x44,
                        "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                       );
        }
        else {
          lVar6 = FUN_180521770(param_5);
          FUN_180521ff0(param_5,local_200,0,lVar6 - param_6);
          FUN_1805b6770(local_220);
          uVar3 = FUN_1805214c0(local_220);
          cVar1 = FUN_180604b60(param_4,uVar3,local_250);
          if (cVar1 != '\0') {
            local_238 = FUN_180521770(local_200);
            local_230 = FUN_180521460(local_200);
            uVar3 = FUN_1805214c0(local_220);
            iVar2 = FUN_1805328f0(uVar3,local_230,local_238);
            if (iVar2 != 0) {
              uVar3 = FUN_1805214c0(local_220);
              iVar2 = FUN_180532930(uVar3,local_68,&local_244);
              if (iVar2 != 0) {
                local_228 = local_148;
                puVar4 = (undefined *)FUN_1805217d0(local_138,local_68,local_244);
                puVar7 = local_198;
                for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *puVar7 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar7 = puVar7 + 1;
                }
                puVar4 = (undefined *)FUN_1805235c0(local_228,local_1f0);
                puVar7 = local_188;
                for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
                  *puVar7 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar7 = puVar7 + 1;
                }
                local_270 = local_198;
                local_278 = local_188;
                cVar1 = FUN_1806079e0(param_1,param_2,local_250,*(undefined2 *)(param_3 + 4));
                if (cVar1 == '\0') {
                  local_257 = 0;
                  FUN_1805b67a0(local_220);
                }
                else {
                  lVar6 = FUN_180532b10(local_250);
                  if (*param_2 != lVar6) {
                    FID_conflict__assert
                              (L"*out_len == EVP_MD_size(digest)",
                               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_enc.cc"
                               ,0x1c5);
                  }
                  local_256 = 1;
                  FUN_1805b67a0(local_220);
                }
                goto LAB_180607fe0;
              }
            }
          }
          local_258 = 0;
          FUN_1805b67a0(local_220);
        }
      }
    }
  }
LAB_180607fe0:
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_298);
  return;
}


/* address=180608000 name=FUN_180608000 */

undefined8 FUN_180608000(longlong param_1,undefined8 param_2)

{
  FUN_1805217d0(param_2,param_1 + 0x28,*(undefined8 *)(param_1 + 0x20));
  return param_2;
}


/* address=180608040 name=FUN_180608040 */

void FUN_180608040(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1805214c0(param_1);
    FUN_1805c1100(uVar2,p_Var1);
  }
  return;
}


/* address=180608090 name=FUN_180608090 */

undefined8
FUN_180608090(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_180608040(param_1,p_Var1);
  uVar2 = FUN_1805214c0(param_2);
  FUN_1805214c0(uVar2);
  FUN_1805214c0(param_1);
  return param_1;
}


/* address=1806080f0 name=FUN_1806080f0 */

undefined * FUN_1806080f0(void)

{
  return &DAT_1807ace70;
}


/* address=180608110 name=FUN_180608110 */

undefined8 FUN_180608110(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180608160 name=FUN_180608160 */

undefined8 FUN_180608160(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1806081a0 name=FUN_1806081a0 */

bool FUN_1806081a0(void)

{
  return (DAT_180992844 & 0x80000) != 0;
}


/* address=1806081e0 name=FUN_1806081e0 */

void FUN_1806081e0(void)

{
  FUN_1806081a0();
  return;
}


/* address=1806082c0 name=FUN_1806082c0 */

void FUN_1806082c0(undefined8 param_1,ulonglong param_2)

{
  ulonglong local_res10;
  undefined auStack_48 [32];
  uint local_28;
  undefined local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_48;
  local_res10 = param_2;
  for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
    local_20[local_28] = (undefined)local_res10;
    local_res10 = local_res10 >> 8;
  }
  FUN_18064de30(param_1,local_20,8);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_48);
  return;
}


/* address=180608350 name=FUN_180608350 */

void FUN_180608350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_278;
  FUN_180608160(local_238,0,0x20);
  local_250 = 0;
  local_258 = param_3;
  FUN_18064cd60(local_238,local_238,0x20,param_2);
  FUN_18064dc50(local_218,local_238);
  FUN_18064de30(local_218,param_4,param_5);
  if (param_5 % 0x10 != 0) {
    FUN_18064de30(local_218,&DAT_1807ace50,0x10 - param_5 % 0x10);
  }
  FUN_18064de30(local_218,param_6,param_7);
  FUN_18064de30(local_218,param_8,param_9);
  local_248 = param_7 + param_9;
  if (local_248 % 0x10 != 0) {
    FUN_18064de30(local_218,&DAT_1807ace50,0x10 - local_248 % 0x10);
  }
  FUN_1806082c0(local_218,param_5);
  FUN_1806082c0(local_218,local_248);
  FUN_18064e020(local_218,param_1);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_278);
  return;
}


/* address=180608530 name=FUN_180608530 */

void FUN_180608530(undefined8 param_1,undefined *param_2,longlong param_3,longlong *param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_118;
  if (param_11 + param_14 < param_14) {
    local_f8 = CONCAT44(local_f8._4_4_,0x73);
    FUN_18050f6f0(0x1e,0,0x75,s_D__a_1_s_target_x86_64_pc_window_18097cb80);
  }
  else if (param_5 < param_14 + param_11) {
    local_f8 = CONCAT44(local_f8._4_4_,0x77);
    FUN_18050f6f0(0x1e,0,0x67,s_D__a_1_s_target_x86_64_pc_window_18097cc10);
  }
  else if (param_7 == 0xc) {
    local_a8 = param_9;
    if (param_9 < 0x3fffffffc0) {
      if (param_5 < param_14) {
        local_f8 = CONCAT44(local_f8._4_4_,0x8c);
        FUN_18050f6f0(0x1e,0,0x67,s_D__a_1_s_target_x86_64_pc_window_18097cdc0);
      }
      else {
        if (param_11 != 0) {
          local_c8 = (int)(param_9 / DAT_1807ace60);
          local_b0 = param_9 % DAT_1807ace60;
          local_c0 = 0;
          while (local_c8 = local_c8 + 1, local_c0 < param_11) {
            FUN_1806924e0(local_58,0,0x40);
            local_f0 = (undefined *)CONCAT44(local_f0._4_4_,local_c8);
            local_f8 = param_6;
            FUN_18064cd60(local_58,local_58,0x40,param_1);
            local_b8 = local_b0;
            for (; (local_b8 < 0x40 && (local_c0 < param_11)); local_c0 = local_c0 + 1) {
              *(byte *)(param_3 + local_c0) = *(byte *)(param_10 + local_c0) ^ local_58[local_b8];
              local_b8 = local_b8 + 1;
            }
            local_b0 = 0;
          }
        }
        iVar1 = FUN_1806081e0();
        if (iVar1 == 0) {
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,1);
          local_f8 = param_6;
          FUN_18064cd60(param_2,param_8,param_9,param_1);
          local_d8 = param_11;
          local_e8 = param_9;
          local_f8 = param_13;
          local_f0 = param_2;
          local_e0 = param_3;
          FUN_180608350(local_98,param_1,param_6,param_12);
        }
        else {
          FUN_180608110(local_98,param_1,0x20);
          local_78 = 0;
          FUN_180608110(local_74,param_6,0xc);
          local_60 = param_11;
          local_f0 = local_98;
          local_f8 = param_13;
          local_68 = param_3;
          FUN_180500e00(param_2,param_8,param_9,param_12);
        }
        FUN_180608110(param_3 + param_11,local_98,param_14);
        *param_4 = param_11 + param_14;
      }
    }
    else {
      local_f8 = CONCAT44(local_f8._4_4_,0x87);
      FUN_18050f6f0(0x1e,0,0x75,s_D__a_1_s_target_x86_64_pc_window_18097cd30);
    }
  }
  else {
    local_f8 = CONCAT44(local_f8._4_4_,0x7b);
    FUN_18050f6f0(0x1e,0,0x79,s_D__a_1_s_target_x86_64_pc_window_18097cca0);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_118);
  return;
}


/* address=180608c40 name=FUN_180608c40 */

void FUN_180608c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  if (param_4 == 0xc) {
    if (param_8 == param_11) {
      local_58 = param_6;
      if (param_6 < 0x3fffffffc0) {
        iVar1 = FUN_1806081e0();
        if (iVar1 == 0) {
          local_68 = 0;
          local_70 = 0;
          local_78 = param_6;
          local_80 = (undefined *)param_5;
          local_88 = param_10;
          FUN_180608350(local_48,param_1,param_3,param_9);
          local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
          local_88 = param_3;
          FUN_18064cd60(param_2,param_5,param_6,param_1);
        }
        else {
          FUN_180608110(local_48,param_1,0x20);
          local_28 = 0;
          FUN_180608110(local_24,param_3,0xc);
          local_80 = local_48;
          local_88 = param_10;
          FUN_1804fea00(param_2,param_5,param_6,param_9);
        }
        iVar1 = FUN_18058f7e0(local_48,param_7,param_11);
        if (iVar1 != 0) {
          local_88 = CONCAT44(local_88._4_4_,0x103);
          FUN_18050f6f0(0x1e,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18097d090);
        }
      }
      else {
        local_88 = CONCAT44(local_88._4_4_,0xf3);
        FUN_18050f6f0(0x1e,0,0x75,s_D__a_1_s_target_x86_64_pc_window_18097d000);
      }
    }
    else {
      local_88 = CONCAT44(local_88._4_4_,0xe7);
      FUN_18050f6f0(0x1e,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18097cf70);
    }
  }
  else {
    local_88 = CONCAT44(local_88._4_4_,0xe2);
    FUN_18050f6f0(0x1e,0,0x79,s_D__a_1_s_target_x86_64_pc_window_18097cee0);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=1806090e0 name=FUN_1806090e0 */

void FUN_1806090e0(PVOID param_1,ulonglong param_2)

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


/* address=180609170 name=FUN_180609170 */

void FUN_180609170(undefined8 param_1,undefined8 param_2)

{
  FUN_1806090e0(param_1,param_2);
  return;
}


/* address=1806091a0 name=FUN_1806091a0 */

undefined4 FUN_1806091a0(void)

{
  undefined4 uVar1;
  
  FUN_18059e2a0(&DAT_180992858);
  uVar1 = DAT_180992850;
  FUN_18059e300(&DAT_180992858);
  return uVar1;
}


/* address=180609290 name=FUN_180609290 */

undefined8 FUN_180609290(undefined8 *param_1)

{
  return *param_1;
}


/* address=1806092f0 name=FUN_1806092f0 */

undefined8 FUN_1806092f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


/* address=180609310 name=FUN_180609310 */

int FUN_180609310(longlong param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 4);
  if (iVar1 == 0) {
    FID_conflict__assert
              (u___struct_openssl_method_common_s_18097d2b0,
               u_D__a_1_s_target_x86_64_pc_window_18097d1b0,0x57);
    iVar1 = 0;
  }
  return iVar1;
}


/* address=180609350 name=FUN_180609350 */

int FUN_180609350(longlong param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(param_1 + 4);
    if (iVar1 == 0) {
      FID_conflict__assert
                (u_method_>is_static_18097d428,u_D__a_1_s_target_x86_64_pc_window_18097d330,0x60);
      iVar1 = 0;
    }
  }
  return iVar1;
}


/* address=1806093a0 name=FUN_1806093a0 */

undefined8 FUN_1806093a0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1806093e0 name=FUN_1806093e0 */

undefined8 FUN_1806093e0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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


/* address=180609440 name=FUN_180609440 */

void FUN_180609440(ulonglong *param_1,longlong param_2,ulonglong param_3)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_78;
  local_40 = *param_1 ^ 0x736f6d6570736575;
  uStack_38 = param_1[1] ^ 0x646f72616e646f6d;
  uStack_30 = *param_1 ^ 0x6c7967656e657261;
  uStack_28 = param_1[1] ^ 0x7465646279746573;
  local_res10 = param_2;
  local_48 = param_3;
  for (local_res18 = param_3; 7 < local_res18; local_res18 = local_res18 - 8) {
    local_58 = FUN_1806097c0(local_res10);
    uStack_28 = uStack_28 ^ local_58;
    FUN_180609810(&local_40);
    FUN_180609810(&local_40);
    local_40 = local_40 ^ local_58;
    local_res10 = local_res10 + 8;
  }
  FUN_180609780(local_20,0,8);
  FUN_180609730(local_20,local_res10,local_res18);
  uStack_19 = (undefined)local_48;
  local_50 = FUN_1806097c0(local_20);
  uStack_28 = uStack_28 ^ local_50;
  FUN_180609810(&local_40);
  FUN_180609810(&local_40);
  local_40 = local_40 ^ local_50;
  uStack_30 = uStack_30 ^ 0xff;
  FUN_180609810(&local_40);
  FUN_180609810(&local_40);
  FUN_180609810(&local_40);
  FUN_180609810(&local_40);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_78);
  return;
}


/* address=180609730 name=FUN_180609730 */

undefined8 FUN_180609730(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180609780 name=FUN_180609780 */

undefined8 FUN_180609780(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1806097c0 name=FUN_1806097c0 */

undefined8 FUN_1806097c0(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_180609730(local_18,param_1,8);
  return local_18[0];
}


/* address=1806097f0 name=FUN_1806097f0 */

ulonglong FUN_1806097f0(ulonglong param_1,byte param_2)

{
  return param_1 << (param_2 & 0x3f) | param_1 >> 0x40 - (param_2 & 0x3f);
}


/* address=180609810 name=FUN_180609810 */

void FUN_180609810(ulonglong *param_1)

{
  ulonglong uVar1;
  
  *param_1 = *param_1 + param_1[1];
  param_1[2] = param_1[2] + param_1[3];
  uVar1 = FUN_1806097f0(param_1[1],0xd);
  param_1[1] = uVar1;
  uVar1 = FUN_1806097f0(param_1[3],0x10);
  param_1[3] = uVar1;
  param_1[1] = param_1[1] ^ *param_1;
  param_1[3] = param_1[3] ^ param_1[2];
  uVar1 = FUN_1806097f0(*param_1,0x20);
  *param_1 = uVar1;
  param_1[2] = param_1[2] + param_1[1];
  *param_1 = *param_1 + param_1[3];
  uVar1 = FUN_1806097f0(param_1[1],0x11);
  param_1[1] = uVar1;
  uVar1 = FUN_1806097f0(param_1[3],0x15);
  param_1[3] = uVar1;
  param_1[1] = param_1[1] ^ param_1[2];
  param_1[3] = param_1[3] ^ *param_1;
  uVar1 = FUN_1806097f0(param_1[2],0x20);
  param_1[2] = uVar1;
  return;
}


/* address=180609b90 name=FUN_180609b90 */

undefined8 FUN_180609b90(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180609bd0 name=FUN_180609bd0 */

bool FUN_180609bd0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18058f4e0(0x10);
  if (lVar1 != 0) {
    FUN_180609b90(lVar1,0,0x10);
    *(longlong *)(param_1 + 0x28) = lVar1;
  }
  return lVar1 != 0;
}


/* address=18060a8f0 name=FUN_18060a8f0 */

undefined8 FUN_18060a8f0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18060a930 name=FUN_18060a930 */

undefined8 FUN_18060a930(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_18058f4e0(0x60);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_18060a8f0(lVar2,0,0x60);
    iVar1 = FUN_180590610(lVar2 + 0x30,0);
    if (iVar1 == 0) {
      FUN_18058f610(lVar2);
      uVar3 = 0;
    }
    else {
      *(longlong *)(param_1 + 0x28) = lVar2;
      uVar3 = 1;
    }
  }
  return uVar3;
}


/* address=18060b030 name=FUN_18060b030 */

int FUN_18060b030(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_48;
  ulonglong local_38;
  
  local_48 = 0;
  lVar2 = FUN_18060bbb0(param_1);
  lVar3 = FUN_18060bac0();
  if ((lVar3 != 0) && (iVar1 = FUN_18064f380(lVar3,param_2,0), iVar1 != 0)) {
    for (local_38 = 0; uVar4 = FUN_18060bae0(lVar3), local_38 < uVar4; local_38 = local_38 + 1) {
      uVar7 = FUN_18060bb00(lVar3,local_38);
      lVar5 = FUN_180516020(uVar7);
      if ((lVar5 == 0) || (lVar6 = FUN_18060bc50(param_1,lVar5), lVar6 == 0)) {
        FUN_180515e60(lVar5);
        goto LAB_18060b0fe;
      }
    }
    local_48 = 1;
  }
LAB_18060b0fe:
  FUN_18060bb30(lVar3,FUN_180586e20);
  if (local_48 == 0) {
    while (lVar3 = FUN_18060bbb0(param_1), lVar3 != lVar2) {
      uVar7 = FUN_18060bc80(param_1);
      FUN_180515e60(uVar7);
    }
  }
  return local_48;
}


/* address=18060b160 name=FUN_18060b160 */

void FUN_18060b160(undefined8 param_1,undefined8 param_2)

{
  FUN_18064f790(param_1,0,&LAB_18060be70,0,param_2);
  return;
}


/* address=18060b1a0 name=FUN_18060b1a0 */

int FUN_18060b1a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined local_48 [16];
  longlong local_38;
  longlong local_30;
  undefined local_28 [16];
  undefined local_18 [24];
  
  local_50 = 0;
  local_68 = 0;
  local_30 = FUN_18060bcf0(param_1);
  iVar1 = FUN_18064f5c0(&local_50,local_18,param_2);
  if (((iVar1 != 0) && (iVar1 = FUN_18059f470(local_18,0,0,0xa0000000), iVar1 != 0)) &&
     (iVar1 = FUN_18059f470(local_18,local_28,&local_64,0xa0000001), iVar1 != 0)) {
    if (local_64 == 0) {
      FUN_18059e730(local_28,0,0);
    }
    do {
      lVar4 = FUN_18059e7c0(local_28);
      if (lVar4 == 0) {
        local_68 = 1;
        goto LAB_18060b338;
      }
      iVar1 = FUN_18059efa0(local_28,local_48,0x20000010);
      if ((iVar1 == 0) || (uVar3 = FUN_18059e7c0(local_48), 0x7fffffff < uVar3)) goto LAB_18060b338;
      local_58 = FUN_18059e7a0(local_48);
      uVar2 = FUN_18059e7c0(local_48);
      local_60 = FUN_1805966f0(0,&local_58,uVar2);
      if (local_60 == 0) goto LAB_18060b338;
      local_38 = FUN_18059e7a0(local_48);
      lVar4 = FUN_18059e7c0(local_48);
      if (local_58 != local_38 + lVar4) {
        FID_conflict__assert
                  (u_inp____CBS_data__crl_data____CBS_18097e050,
                   u_D__a_1_s_target_x86_64_pc_window_18097df50,0x6b);
      }
      lVar4 = FUN_18060bd90(param_1,local_60);
    } while (lVar4 != 0);
    FUN_1805966c0(local_60);
  }
LAB_18060b338:
  FUN_18058f610(local_50);
  if (local_68 == 0) {
    while (lVar4 = FUN_18060bcf0(param_1), lVar4 != local_30) {
      uVar5 = FUN_18060bdc0(param_1);
      FUN_1805966c0(uVar5);
    }
  }
  return local_68;
}


/* address=18060b4f0 name=FUN_18060b4f0 */

longlong FUN_18060b4f0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined local_20 [32];
  
  FUN_18059e730(local_20,*param_2,param_3);
  lVar1 = FUN_18060c090(local_20);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    uVar2 = FUN_18059e7a0(local_20);
    *param_2 = uVar2;
    if (param_1 != (longlong *)0x0) {
      FUN_18060b760(*param_1);
      *param_1 = lVar1;
    }
  }
  return lVar1;
}


/* address=18060b620 name=FUN_18060b620 */

undefined4 FUN_18060b620(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((ulonglong)param_1[1] < 0x80000000) {
    if (param_2 == (longlong *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 1);
    }
    else {
      if (*param_2 == 0) {
        lVar2 = FUN_18058f4e0(param_1[1]);
        *param_2 = lVar2;
        if (*param_2 == 0) {
          return 0xffffffff;
        }
        FUN_18060bde0(*param_2,*param_1,param_1[1]);
      }
      else {
        FUN_18060bde0(*param_2,*param_1,param_1[1]);
        *param_2 = *param_2 + param_1[1];
      }
      uVar1 = *(undefined4 *)(param_1 + 1);
    }
  }
  else {
    FUN_18050f6f0(0x13,0,0x45,s_D__a_1_s_target_x86_64_pc_window_18097e0c0,0x140);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* address=18060b760 name=FUN_18060b760 */

void FUN_18060b760(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_18058f610(*param_1);
    FUN_1805eec50(param_1[2]);
    if (param_1[3] != 0) {
      FUN_18060bc20(*(undefined8 *)param_1[3],FUN_180515e60);
      FUN_18060bd60(*(undefined8 *)(param_1[3] + 8),FUN_1805966c0);
      FUN_18058f610(param_1[3]);
    }
    FUN_18058f610(param_1);
  }
  return;
}


/* address=18060bac0 name=FUN_18060bac0 */

void FUN_18060bac0(void)

{
  FUN_180514f00();
  return;
}


/* address=18060bae0 name=FUN_18060bae0 */

void FUN_18060bae0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18060bb00 name=FUN_18060bb00 */

void FUN_18060bb00(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18060bb30 name=FUN_18060bb30 */

void FUN_18060bb30(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_18060ba90,param_2);
  return;
}


/* address=18060bb90 name=FUN_18060bb90 */

void FUN_18060bb90(void)

{
  FUN_180514f00();
  return;
}


/* address=18060bbb0 name=FUN_18060bbb0 */

void FUN_18060bbb0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18060bbd0 name=FUN_18060bbd0 */

void FUN_18060bbd0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18060bc00 name=FUN_18060bc00 */

void FUN_18060bc00(undefined8 param_1)

{
  FUN_180515030(param_1);
  return;
}


/* address=18060bc20 name=FUN_18060bc20 */

void FUN_18060bc20(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_18060bb60,param_2);
  return;
}


/* address=18060bc50 name=FUN_18060bc50 */

void FUN_18060bc50(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=18060bc80 name=FUN_18060bc80 */

void FUN_18060bc80(undefined8 param_1)

{
  FUN_180515850(param_1);
  return;
}


/* address=18060bcd0 name=FUN_18060bcd0 */

void FUN_18060bcd0(void)

{
  FUN_180514f00();
  return;
}


/* address=18060bcf0 name=FUN_18060bcf0 */

void FUN_18060bcf0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18060bd10 name=FUN_18060bd10 */

void FUN_18060bd10(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18060bd40 name=FUN_18060bd40 */

void FUN_18060bd40(undefined8 param_1)

{
  FUN_180515030(param_1);
  return;
}


/* address=18060bd60 name=FUN_18060bd60 */

void FUN_18060bd60(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_18060bca0,param_2);
  return;
}


/* address=18060bd90 name=FUN_18060bd90 */

void FUN_18060bd90(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=18060bdc0 name=FUN_18060bdc0 */

void FUN_18060bdc0(undefined8 param_1)

{
  FUN_180515850(param_1);
  return;
}


/* address=18060bde0 name=FUN_18060bde0 */

undefined8 FUN_18060bde0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18060be30 name=FUN_18060be30 */

undefined8 FUN_18060be30(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18060c090 name=FUN_18060c090 */

longlong * FUN_18060c090(undefined *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined local_38 [16];
  undefined local_28 [24];
  
  plVar2 = (longlong *)FUN_18058f4e0(0x20);
  if (plVar2 != (longlong *)0x0) {
    FUN_18060be30(plVar2,0,0x20);
    lVar3 = FUN_1805a8e80(0x16);
    plVar2[2] = lVar3;
    lVar3 = FUN_18058f4e0(0x10);
    plVar2[3] = lVar3;
    if (plVar2[3] != 0) {
      uVar4 = FUN_18060bb90();
      *(undefined8 *)plVar2[3] = uVar4;
      uVar4 = FUN_18060bcd0();
      *(undefined8 *)(plVar2[3] + 8) = uVar4;
      puVar6 = param_1;
      puVar7 = local_28;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar6 = param_1;
      puVar7 = local_38;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      if ((((*(longlong *)plVar2[3] != 0) && (*(longlong *)(plVar2[3] + 8) != 0)) &&
          (iVar1 = FUN_18060b030(*(undefined8 *)plVar2[3],local_28), iVar1 != 0)) &&
         (iVar1 = FUN_18060b1a0(*(undefined8 *)(plVar2[3] + 8),param_1), iVar1 != 0)) {
        lVar3 = FUN_18060bbb0(*(undefined8 *)plVar2[3]);
        if (lVar3 == 0) {
          FUN_18060bc00(*(undefined8 *)plVar2[3]);
          *(undefined8 *)plVar2[3] = 0;
        }
        lVar3 = FUN_18060bcf0(*(undefined8 *)(plVar2[3] + 8));
        if (lVar3 == 0) {
          FUN_18060bd40(*(undefined8 *)(plVar2[3] + 8));
          *(undefined8 *)(plVar2[3] + 8) = 0;
        }
        lVar3 = FUN_18059e7c0(local_38);
        lVar5 = FUN_18059e7c0(param_1);
        plVar2[1] = lVar3 - lVar5;
        uVar4 = FUN_18059e7a0(local_38);
        lVar3 = FUN_18058ffb0(uVar4,plVar2[1]);
        *plVar2 = lVar3;
        if (*plVar2 != 0) {
          return plVar2;
        }
      }
    }
    FUN_18060b760(plVar2);
  }
  return (longlong *)0x0;
}


/* address=18060c2a0 name=FUN_18060c2a0 */

undefined4 FUN_18060c2a0(undefined8 param_1)

{
  int iVar1;
  undefined local_40 [64];
  
  iVar1 = FUN_180590d60(param_1,local_40,0x20000010);
  if (((iVar1 != 0) && (iVar1 = FUN_1805a8fe0(local_40,0x2a0), iVar1 != 0)) &&
     (iVar1 = FUN_180590820(param_1), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=18060c310 name=FUN_18060c310 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_18060c310(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_34;
  undefined local_28 [40];
  
  lVar2 = FUN_18058f4e0(CONCAT44(_UNK_1807ae2f4,DAT_1807ae2f0));
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_180532380(local_28);
    local_34 = 0;
    uVar3 = FUN_180532290();
    iVar1 = FUN_1805682d0(local_28,0,uVar3,0,param_4);
    if (iVar1 != 0) {
      while (iVar1 = FUN_18058c660(param_5,lVar2,DAT_1807ae2f0), iVar1 != 0) {
        if ((iVar1 < 0) || (iVar1 = FUN_180568320(local_28,lVar2,(longlong)iVar1), iVar1 == 0))
        goto LAB_18060c407;
      }
      *param_2 = param_3;
      iVar1 = FUN_180568390(local_28,param_1,param_2);
      if (iVar1 != 0) {
        local_34 = 1;
      }
    }
LAB_18060c407:
    FUN_1805323f0(local_28);
    FUN_18058f610(lVar2);
  }
  return local_34;
}


/* address=18060c630 name=FUN_18060c630 */

longlong FUN_18060c630(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28 [2];
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  local_20 = 0;
  local_18 = 0;
  iVar1 = FUN_18060d990(&local_20,local_28,0,param_2,param_3,param_5,param_6);
  uVar2 = (undefined4)((ulonglong)param_3 >> 0x20);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else {
    local_10[0] = local_20;
    local_18 = (*param_1)(param_4,local_10,local_28[0]);
    if (local_18 == 0) {
      FUN_18050f6f0(9,0,0xc,s_D__a_1_s_target_x86_64_pc_window_18097e1c0,CONCAT44(uVar2,0x53));
    }
    FUN_18058f610(local_20);
  }
  return local_18;
}


/* address=18060c710 name=FUN_18060c710 */

uint FUN_18060c710(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=18060c730 name=FUN_18060c730 */

uint FUN_18060c730(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=18060c750 name=FUN_18060c750 */

undefined8 FUN_18060c750(char *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  char *local_res8;
  longlong *local_res10;
  
  *param_2 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_18060e440(param_2 + 1,0,0x10);
  if (((local_res8 == (char *)0x0) || (*local_res8 == '\0')) || (*local_res8 == '\n')) {
    uVar5 = 1;
  }
  else {
    iVar2 = strncmp(local_res8,s_Proc_Type__18097ea48,0xb);
    if (iVar2 == 0) {
      if (local_res8[0xb] == '4') {
        if (local_res8[0xc] == ',') {
          local_res8 = local_res8 + 0xd;
          iVar2 = strncmp(local_res8,s_ENCRYPTED_18097ead8,9);
          if (iVar2 == 0) {
            for (; (*local_res8 != '\n' && (*local_res8 != '\0')); local_res8 = local_res8 + 1) {
            }
            if (*local_res8 == '\0') {
              FUN_18050f6f0(9,0,0x70,s_D__a_1_s_target_x86_64_pc_window_18097eb70,0x1c9);
              uVar5 = 0;
            }
            else {
              local_res8 = local_res8 + 1;
              iVar2 = strncmp(local_res8,s_DEK_Info__18097ebe8,10);
              if (iVar2 == 0) {
                pcVar6 = local_res8 + 10;
                local_res8 = pcVar6;
                while (((cVar1 = *local_res8, '@' < cVar1 && (cVar1 < '[')) ||
                       ((cVar1 == '-' || (iVar2 = FUN_18058fa50((int)cVar1), iVar2 != 0))))) {
                  local_res8 = local_res8 + 1;
                }
                *local_res8 = '\0';
                lVar7 = FUN_18060ea30(pcVar6);
                *local_res10 = lVar7;
                *local_res8 = cVar1;
                local_res8 = local_res8 + 1;
                if (lVar7 == 0) {
                  FUN_18050f6f0(9,0,0x72,s_D__a_1_s_target_x86_64_pc_window_18097ec80,0x1e2);
                  uVar5 = 0;
                }
                else {
                  uVar3 = FUN_18055f3a0(lVar7);
                  if (uVar3 < 8) {
                    FID_conflict__assert
                              ((wchar_t *)&DAT_18097edf0,
                               u_D__a_1_s_target_x86_64_pc_window_18097ed00,0x1e8);
                    FUN_18050f6f0(9,0,0x72,s_D__a_1_s_target_x86_64_pc_window_18097ee00,0x1e9);
                    uVar5 = 0;
                  }
                  else {
                    uVar4 = FUN_18055f3a0(lVar7);
                    iVar2 = FUN_18060e480(&local_res8,local_res10 + 1,uVar4);
                    if (iVar2 == 0) {
                      uVar5 = 0;
                    }
                    else {
                      uVar5 = 1;
                    }
                  }
                }
              }
              else {
                FUN_18050f6f0(9,0,0x6b,s_D__a_1_s_target_x86_64_pc_window_18097ec00,0x1ce);
                uVar5 = 0;
              }
            }
          }
          else {
            FUN_18050f6f0(9,0,0x6c,s_D__a_1_s_target_x86_64_pc_window_18097eaf0,0x1c2);
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      FUN_18050f6f0(9,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_18097ea60,0x1b5);
      uVar5 = 0;
    }
  }
  return uVar5;
}


/* address=18060cac0 name=FUN_18060cac0 */

void FUN_18060cac0(longlong *param_1,longlong param_2,int *param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *local_res20;
  undefined auStack_568 [32];
  undefined8 local_548;
  undefined4 local_540;
  undefined *local_538;
  undefined8 local_530;
  int local_528;
  int local_524;
  int local_520;
  int local_51c;
  int local_518;
  longlong *local_510;
  longlong *local_508;
  undefined local_4f8 [160];
  undefined local_458 [64];
  undefined local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_568;
  local_51c = 0;
  local_518 = *param_3;
  if (*param_1 != 0) {
    local_520 = 0;
    local_res20 = param_4;
    if (param_4 == (code *)0x0) {
      local_res20 = FUN_18060e370;
    }
    local_520 = (*local_res20)(local_418,0x400,0,param_5);
    if (local_520 < 1) {
      local_548 = (longlong *)CONCAT44(local_548._4_4_,0x18c);
      FUN_18050f6f0(9,0,0x68,s_D__a_1_s_target_x86_64_pc_window_18097e950);
    }
    else {
      local_510 = (longlong *)(longlong)local_520;
      local_508 = param_1 + 1;
      uVar2 = FUN_180532200();
      local_530 = 0;
      local_538 = local_458;
      local_540 = 1;
      local_548 = local_510;
      iVar1 = FUN_1805f2770(*param_1,uVar2,local_508,local_418);
      if (iVar1 != 0) {
        local_524 = local_518;
        FUN_18055dc10(local_4f8);
        local_548 = param_1 + 1;
        local_528 = FUN_18055e2b0(local_4f8,*param_1,0,local_458);
        if (local_528 != 0) {
          local_548 = (longlong *)CONCAT44(local_548._4_4_,local_524);
          local_528 = FUN_18055e9f0(local_4f8,param_2,&local_51c,param_2);
        }
        if (local_528 != 0) {
          local_528 = FUN_18055ecc0(local_4f8,param_2 + local_51c,&local_524);
        }
        FUN_18055dc80(local_4f8);
        FUN_18058f7b0(local_418,0x400);
        FUN_18058f7b0(local_458,0x40);
        if (local_528 == 0) {
          local_548 = (longlong *)CONCAT44(local_548._4_4_,0x1a2);
          FUN_18050f6f0(9,0,0x65,s_D__a_1_s_target_x86_64_pc_window_18097e9d0);
        }
        else {
          local_524 = local_524 + local_51c;
          *param_3 = local_524;
        }
      }
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_568);
  return;
}


/* address=18060cd60 name=FUN_18060cd60 */

/* WARNING: Removing unreachable block (ram,0x00018060ce26) */
/* WARNING: Removing unreachable block (ram,0x00018060d32b) */

void FUN_18060cd60(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  int *param_5)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined auStack_1f8 [32];
  undefined8 local_1d8;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  int local_1a0;
  int local_19c;
  int local_198 [2];
  undefined8 local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  undefined8 local_170;
  ulonglong local_168;
  longlong local_160;
  undefined local_158 [64];
  char local_118 [9];
  char local_10f [2];
  char local_10d [243];
  undefined uStack_1a;
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_1f8;
  local_19c = 0;
  local_1c4 = 0;
  local_1c0 = 0;
  local_1a0 = 0;
  local_1a8 = FUN_1805a71c0();
  local_1b0 = FUN_1805a71c0();
  local_1b8 = FUN_1805a71c0();
  if (((local_1a8 == 0) || (local_1b0 == 0)) || (local_1b8 == 0)) {
    FUN_1805a7210(local_1a8);
    FUN_1805a7210(local_1b0);
    FUN_1805a7210(local_1b8);
  }
  else {
    local_190 = 0xfe;
    uStack_1a = 0;
    do {
      do {
        local_1c8 = FUN_18058c750(param_1,local_118,0xfe);
        if (local_1c8 < 1) {
          local_1d8 = CONCAT44(local_1d8._4_4_,0x274);
          FUN_18050f6f0(9,0,0x6e,s_D__a_1_s_target_x86_64_pc_window_18097f0b0);
          goto LAB_18060d619;
        }
        for (; (-1 < local_1c8 && (local_118[local_1c8] < '!')); local_1c8 = local_1c8 + -1) {
        }
        local_118[local_1c8 + 1] = '\n';
        local_1c8 = local_1c8 + 2;
        local_188 = (ulonglong)local_1c8;
        if (0xff < local_188) {
          FUN_18059dfac();
        }
        local_118[local_188] = '\0';
        iVar1 = strncmp(local_118,s______BEGIN_18097f128,0xb);
      } while (iVar1 != 0);
      sVar2 = strlen(local_10d);
      local_1c8 = (int)sVar2;
      iVar1 = strncmp(local_118 + (local_1c8 + 5),s_______18097f134,6);
    } while (iVar1 != 0);
    lVar3 = FUN_1805a7370(local_1a8,(longlong)(local_1c8 + 9));
    if (lVar3 != 0) {
      FUN_18060e3f0(*(undefined8 *)(local_1a8 + 8),local_10d,(longlong)(local_1c8 + -6));
      *(undefined *)(*(longlong *)(local_1a8 + 8) + (longlong)(local_1c8 + -6)) = 0;
      local_1c0 = 0;
      lVar3 = FUN_1805a7370(local_1b0,0x100);
      if (lVar3 != 0) {
        **(undefined **)(local_1b0 + 8) = 0;
        while (local_1c8 = FUN_18058c750(param_1,local_118,0xfe), 0 < local_1c8) {
          for (; (-1 < local_1c8 && (local_118[local_1c8] < '!')); local_1c8 = local_1c8 + -1) {
          }
          local_118[local_1c8 + 1] = '\n';
          local_1c8 = local_1c8 + 2;
          local_180 = (ulonglong)local_1c8;
          if (0xff < local_180) {
            FUN_18059dfac();
          }
          local_118[local_180] = '\0';
          if (local_118[0] == '\n') break;
          lVar3 = FUN_1805a7370(local_1b0,(longlong)(local_1c0 + 9 + local_1c8));
          if (lVar3 == 0) goto LAB_18060d619;
          iVar1 = strncmp(local_118,s______END_18097f140,9);
          if (iVar1 == 0) {
            local_1a0 = 1;
            break;
          }
          FUN_18060e3f0(*(longlong *)(local_1b0 + 8) + (longlong)local_1c0,local_118,
                        (longlong)local_1c8);
          *(undefined *)(*(longlong *)(local_1b0 + 8) + (longlong)(local_1c0 + local_1c8)) = 0;
          local_1c0 = local_1c0 + local_1c8;
        }
        local_1c4 = 0;
        lVar4 = FUN_1805a7370(local_1b8,0x400);
        lVar3 = local_1b0;
        if (lVar4 != 0) {
          **(undefined **)(local_1b8 + 8) = 0;
          if (local_1a0 == 0) {
            do {
              local_1c8 = FUN_18058c750(param_1,local_118,0xfe);
              if (local_1c8 < 1) goto LAB_18060d41a;
              for (; (-1 < local_1c8 && (local_118[local_1c8] < '!')); local_1c8 = local_1c8 + -1) {
              }
              local_118[local_1c8 + 1] = '\n';
              local_1c8 = local_1c8 + 2;
              local_178 = (ulonglong)local_1c8;
              if (0xff < local_178) {
                FUN_18059dfac();
              }
              local_118[local_178] = '\0';
              if (local_1c8 != 0x41) {
                local_19c = 1;
              }
              iVar1 = strncmp(local_118,s______END_18097f150,9);
              if ((iVar1 == 0) || (0x41 < local_1c8)) goto LAB_18060d41a;
              lVar3 = FUN_1805a73f0(local_1b8,(longlong)(local_1c8 + 9 + local_1c4));
              if (lVar3 == 0) goto LAB_18060d619;
              FUN_18060e3f0(*(longlong *)(local_1b8 + 8) + (longlong)local_1c4,local_118,
                            (longlong)local_1c8);
              *(undefined *)(*(longlong *)(local_1b8 + 8) + (longlong)(local_1c4 + local_1c8)) = 0;
              local_1c4 = local_1c4 + local_1c8;
            } while (local_19c == 0);
            local_170 = 0;
            local_1c8 = FUN_18058c750(param_1,local_118,0xfe);
            if (0 < local_1c8) {
              for (; (-1 < local_1c8 && (local_118[local_1c8] < '!')); local_1c8 = local_1c8 + -1) {
              }
              local_118[local_1c8 + 1] = '\n';
              local_1c8 = local_1c8 + 2;
              local_168 = (ulonglong)local_1c8;
              if (0xff < local_168) {
                FUN_18059dfac();
              }
              local_118[local_168] = '\0';
            }
          }
          else {
            local_160 = local_1b0;
            local_1b0 = local_1b8;
            local_1b8 = lVar3;
            local_1c4 = local_1c0;
          }
LAB_18060d41a:
          sVar2 = strlen(*(char **)(local_1a8 + 8));
          local_1c8 = (int)sVar2;
          iVar1 = strncmp(local_118,s______END_18097f160,9);
          if (((iVar1 == 0) &&
              (iVar1 = strncmp(*(char **)(local_1a8 + 8),local_10f,(longlong)local_1c8), iVar1 == 0)
              ) && (iVar1 = strncmp(local_118 + (local_1c8 + 9),s_______18097f16c,6), iVar1 == 0)) {
            FUN_180623560(local_158);
            local_1d8 = (longlong)local_1c4;
            local_1c8 = FUN_180623590(local_158,*(undefined8 *)(local_1b8 + 8),&local_1c4,
                                      *(undefined8 *)(local_1b8 + 8));
            if (local_1c8 < 0) {
              local_1d8 = CONCAT44(local_1d8._4_4_,0x2ef);
              FUN_18050f6f0(9,0,100,s_D__a_1_s_target_x86_64_pc_window_18097f200);
            }
            else {
              local_1c8 = FUN_180623760(local_158,*(longlong *)(local_1b8 + 8) + (longlong)local_1c4
                                        ,local_198);
              if (local_1c8 < 0) {
                local_1d8 = CONCAT44(local_1d8._4_4_,0x2f4);
                FUN_18050f6f0(9,0,100,s_D__a_1_s_target_x86_64_pc_window_18097f280);
              }
              else {
                local_1c4 = local_1c4 + local_198[0];
                if (local_1c4 != 0) {
                  *param_2 = *(undefined8 *)(local_1a8 + 8);
                  *param_3 = *(undefined8 *)(local_1b0 + 8);
                  *param_4 = *(undefined8 *)(local_1b8 + 8);
                  *param_5 = local_1c4;
                  FUN_18058f610(local_1a8);
                  FUN_18058f610(local_1b0);
                  FUN_18058f610(local_1b8);
                  goto LAB_18060d639;
                }
              }
            }
          }
          else {
            local_1d8 = CONCAT44(local_1d8._4_4_,0x2e7);
            FUN_18050f6f0(9,0,0x66,s_D__a_1_s_target_x86_64_pc_window_18097f180);
          }
        }
      }
    }
LAB_18060d619:
    FUN_1805a7210(local_1a8);
    FUN_1805a7210(local_1b0);
    FUN_1805a7210(local_1b8);
  }
LAB_18060d639:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_1f8);
  return;
}


/* address=18060d660 name=FUN_18060d660 */

void FUN_18060d660(undefined8 param_1,char *param_2,char *param_3,longlong param_4,int param_5)

{
  int iVar1;
  size_t sVar2;
  undefined auStack_a8 [32];
  undefined8 local_88;
  int local_78;
  int local_74;
  longlong local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_a8;
  local_70 = 0;
  local_58 = 7;
  FUN_1806231c0(local_50);
  sVar2 = strlen(param_2);
  local_64 = (int)sVar2;
  iVar1 = FUN_18058c840(param_1,s______BEGIN_18097ef78,0xb);
  if (((iVar1 == 0xb) && (iVar1 = FUN_18058c840(param_1,param_2,local_64), iVar1 == local_64)) &&
     (iVar1 = FUN_18058c840(param_1,s_______18097ef84,6), iVar1 == 6)) {
    sVar2 = strlen(param_3);
    local_74 = (int)sVar2;
    if (((local_74 < 1) ||
        ((iVar1 = FUN_18058c840(param_1,param_3,sVar2 & 0xffffffff), iVar1 == local_74 &&
         (iVar1 = FUN_18058c840(param_1,&DAT_18097ea54,1), iVar1 == 1)))) &&
       (local_70 = FUN_18058f4e0(0x2000), local_70 != 0)) {
      local_68 = 0;
      local_74 = 0;
      for (; 0 < param_5; param_5 = param_5 - local_60) {
        if (param_5 < 0x1401) {
          local_5c = param_5;
        }
        else {
          local_5c = 0x1400;
        }
        local_60 = local_5c;
        local_88 = (longlong)local_5c;
        FUN_1806231f0(local_50,local_70,&local_78,param_4 + local_68);
        if ((local_78 != 0) && (iVar1 = FUN_18058c840(param_1,local_70,local_78), iVar1 != local_78)
           ) goto LAB_18060d932;
        local_74 = local_74 + local_78;
        local_68 = local_68 + local_60;
      }
      FUN_180623490(local_50,local_70,&local_78);
      if ((local_78 < 1) || (iVar1 = FUN_18058c840(param_1,local_70,local_78), iVar1 == local_78)) {
        FUN_18058f610(local_70);
        local_70 = 0;
        iVar1 = FUN_18058c840(param_1,s______END_18097ef90,9);
        if ((iVar1 == 9) &&
           ((iVar1 = FUN_18058c840(param_1,param_2,local_64), iVar1 == local_64 &&
            (iVar1 = FUN_18058c840(param_1,s_______18097ef9c,6), iVar1 == 6)))) goto LAB_18060d967;
      }
    }
  }
LAB_18060d932:
  if (local_70 != 0) {
    FUN_18058f610(local_70);
  }
  local_88 = CONCAT44(local_88._4_4_,0x24c);
  FUN_18050f6f0(9,0,local_58,s_D__a_1_s_target_x86_64_pc_window_18097efb0);
LAB_18060d967:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_a8);
  return;
}


/* address=18060d990 name=FUN_18060d990 */

void FUN_18060d990(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined auStack_88 [32];
  undefined4 *local_68;
  int local_58;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_58 = 0;
  do {
    local_68 = local_50;
    iVar1 = FUN_18060cd60(param_5,&local_48,&local_38,&local_40);
    if (iVar1 == 0) {
      local_54 = FUN_18050edc0();
      iVar1 = FUN_18060c710(local_54);
      if ((iVar1 == 9) && (iVar1 = FUN_18060c730(local_54), iVar1 == 0x6e)) {
        FUN_18050f810(2,s_Expecting__18097e4c0,param_4);
      }
LAB_18060db4b:
      FUN_18050ec30(local_18 ^ (ulonglong)auStack_88);
      return;
    }
    iVar1 = FUN_18060e600(local_48,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_18060c750(local_38,local_30);
      if (iVar1 != 0) {
        local_68 = param_7;
        iVar1 = FUN_18060cac0(local_30,local_40,local_50,param_6);
        if (iVar1 != 0) {
          *param_1 = local_40;
          *param_2 = local_50[0];
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = local_48;
          }
          local_58 = 1;
        }
      }
      if ((local_58 == 0) || (param_3 == (undefined8 *)0x0)) {
        FUN_18058f610(local_48);
      }
      FUN_18058f610(local_38);
      if (local_58 == 0) {
        FUN_18058f610(local_40);
      }
      goto LAB_18060db4b;
    }
    FUN_18058f610(local_48);
    FUN_18058f610(local_38);
    FUN_18058f610(local_40);
  } while( true );
}


/* address=18060db70 name=FUN_18060db70 */

/* WARNING: Removing unreachable block (ram,0x00018060dea3) */
/* WARNING: Removing unreachable block (ram,0x00018060dfd5) */

void FUN_18060db70(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined *param_6,int param_7,code *param_8,undefined8 param_9)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  size_t sVar6;
  undefined auStack_598 [32];
  undefined8 local_578;
  undefined4 local_570;
  undefined *local_568;
  undefined8 local_560;
  int local_558;
  int local_554;
  int local_550;
  uint local_54c;
  longlong local_548;
  int local_540 [2];
  char *local_538;
  undefined8 local_530;
  undefined8 local_528;
  longlong local_520;
  undefined *local_518;
  undefined local_508 [160];
  undefined local_468 [16];
  undefined local_458 [64];
  undefined local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_598;
  local_550 = 0;
  local_554 = 0;
  local_548 = 0;
  local_538 = (char *)0x0;
  if (param_5 != 0) {
    uVar1 = FUN_18055f340(param_5);
    local_538 = (char *)FUN_1805a8f60(uVar1);
    if (((local_538 == (char *)0x0) || (lVar4 = FUN_18060ea30(local_538), lVar4 == 0)) ||
       (uVar2 = FUN_18055f3a0(param_5), uVar2 < 8)) {
      local_578 = (undefined *)CONCAT44(local_578._4_4_,0x123);
      FUN_18050f6f0(9,0,0x71,s_D__a_1_s_target_x86_64_pc_window_18097e550);
      goto LAB_18060e025;
    }
  }
  local_550 = (*param_1)(param_4,0);
  if (local_550 < 0) {
    local_578 = (undefined *)CONCAT44(local_578._4_4_,0x129);
    FUN_18050f6f0(9,0,0xc,s_D__a_1_s_target_x86_64_pc_window_18097e5d0);
    local_550 = 0;
    goto LAB_18060e025;
  }
  local_548 = FUN_18058f4e0(local_550 + 0x14);
  if (local_548 == 0) goto LAB_18060e025;
  local_520 = local_548;
  local_558 = (*param_1)(param_4,&local_520);
  if (param_5 == 0) {
    local_528 = 0;
    local_554 = 1;
    local_418[0] = 0;
  }
  else {
    local_54c = FUN_18055f3a0(param_5);
    if (param_6 == (undefined *)0x0) {
      if (param_8 == (code *)0x0) {
        param_8 = FUN_18060e370;
      }
      param_7 = (*param_8)(local_418,0x400,1,param_9);
      if (param_7 < 1) {
        local_578 = (undefined *)CONCAT44(local_578._4_4_,0x140);
        FUN_18050f6f0(9,0,0x6f,s_D__a_1_s_target_x86_64_pc_window_18097e650);
        goto LAB_18060e025;
      }
      param_6 = local_418;
    }
    if (0x10 < local_54c) {
      FID_conflict__assert
                (u_iv_len_<__sizeof(iv)_18097e7c0,u_D__a_1_s_target_x86_64_pc_window_18097e6d0,0x145
                );
    }
    iVar3 = FUN_18055bbd0(local_468,local_54c);
    if (iVar3 == 0) goto LAB_18060e025;
    local_518 = (undefined *)(longlong)param_7;
    uVar5 = FUN_180532200();
    local_560 = 0;
    local_568 = local_458;
    local_570 = 1;
    local_578 = local_518;
    iVar3 = FUN_1805f2770(param_5,uVar5,local_468,param_6);
    if (iVar3 == 0) goto LAB_18060e025;
    if (param_6 == local_418) {
      FUN_18058f7b0(local_418,0x400);
    }
    sVar6 = strlen(local_538);
    if (0x400 < sVar6 + 0x24 + (ulonglong)(local_54c << 1)) {
      FID_conflict__assert
                (u_strlen_objstr____23___2___iv_len_18097e8e0,
                 u_D__a_1_s_target_x86_64_pc_window_18097e7f0,0x153);
    }
    local_530 = 0;
    local_418[0] = 0;
    FUN_18060e810(local_418,10);
    FUN_18060e8c0(local_418,local_538,local_54c,local_468);
    FUN_18055dc10(local_508);
    local_554 = 1;
    local_578 = local_468;
    iVar3 = FUN_18055e260(local_508,param_5,0,local_458);
    if (iVar3 == 0) {
LAB_18060df80:
      local_554 = 0;
    }
    else {
      local_578 = (undefined *)CONCAT44(local_578._4_4_,local_558);
      iVar3 = FUN_18055e300(local_508,local_548,local_540,local_548);
      if ((iVar3 == 0) ||
         (iVar3 = FUN_18055e800(local_508,local_548 + local_540[0],&local_558), iVar3 == 0))
      goto LAB_18060df80;
      local_558 = local_558 + local_540[0];
    }
    FUN_18055dc80(local_508);
    if (local_554 == 0) goto LAB_18060e025;
  }
  local_578 = (undefined *)CONCAT44(local_578._4_4_,local_558);
  local_558 = FUN_18060d660(param_3,param_2,local_418,local_548);
  if (local_558 < 1) {
    local_554 = 0;
  }
LAB_18060e025:
  FUN_18058f7b0(local_458,0x40);
  FUN_18058f7b0(local_468,0x10);
  FUN_18058f7b0(local_508,0x98);
  FUN_18058f7b0(local_418,0x400);
  FUN_18058f610(local_548);
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_598);
  return;
}


/* address=18060e1e0 name=FUN_18060e1e0 */

undefined8
FUN_18060e1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_180592390(param_3,0);
  if (lVar1 == 0) {
    FUN_18050f6f0(9,0,7,s_D__a_1_s_target_x86_64_pc_window_18097e2b0,CONCAT44(uVar3,0x7f));
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18060c630(param_1,param_2,lVar1,param_4,param_5,param_6);
    FUN_18058c580(lVar1);
  }
  return uVar2;
}


/* address=18060e290 name=FUN_18060e290 */

undefined4
FUN_18060e290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffb8;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar2 = FUN_180592390(param_3,0);
  if (lVar2 == 0) {
    FUN_18050f6f0(9,0,7,s_D__a_1_s_target_x86_64_pc_window_18097e4d0,CONCAT44(uVar1,0x10c));
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_18060db70(param_1,param_2,lVar2,param_4,param_5,param_6,param_7,param_8,param_9);
    FUN_18058c580(lVar2);
  }
  return uVar1;
}


/* address=18060e370 name=FUN_18060e370 */

ulonglong FUN_18060e370(longlong param_1,int param_2,undefined8 param_3,char *param_4)

{
  ulonglong uVar1;
  size_t sVar2;
  
  if (((param_1 == 0) || (param_4 == (char *)0x0)) || (param_2 < 0)) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(param_4);
    if (sVar2 < (ulonglong)(longlong)param_2) {
      FUN_180590010(param_1,param_4,(longlong)param_2);
      uVar1 = sVar2 & 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* address=18060e3f0 name=FUN_18060e3f0 */

undefined8 FUN_18060e3f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18060e440 name=FUN_18060e440 */

undefined8 FUN_18060e440(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18060e480 name=FUN_18060e480 */

undefined8 FUN_18060e480(longlong *param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  bool bVar2;
  byte local_38 [4];
  uint local_34;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18;
  
  local_18 = *param_1;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    *(undefined *)(param_2 + local_20) = 0;
  }
  local_28 = 0;
  while( true ) {
    if (param_3 << 1 <= local_28) {
      *param_1 = local_18;
      return 1;
    }
    iVar1 = FUN_18058faf0(local_38);
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
    bVar2 = (local_28 & 1) == 0;
    local_34 = (uint)bVar2;
    local_30 = (uint)local_38[0];
    local_2c = (uint)*(byte *)(param_2 + local_28 / 2) | local_30 << (bVar2 << 2);
    *(char *)(param_2 + local_28 / 2) = (char)local_2c;
    local_28 = local_28 + 1;
  }
  FUN_18050f6f0(9,0,0x67,s_D__a_1_s_target_x86_64_pc_window_18097ee80,0x1fe);
  return 0;
}


/* address=18060e600 name=FUN_18060e600 */

undefined4 FUN_18060e600(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = strcmp(param_1,param_2);
  if (iVar1 == 0) {
    local_18 = 1;
  }
  else {
    iVar1 = strcmp(param_2,s_ANY_PRIVATE_KEY_18097e328);
    if (iVar1 == 0) {
      iVar1 = strcmp(param_1,s_ENCRYPTED_PRIVATE_KEY_18097e338);
      if ((((iVar1 == 0) || (iVar1 = strcmp(param_1,s_PRIVATE_KEY_18097e350), iVar1 == 0)) ||
          (iVar1 = strcmp(param_1,s_RSA_PRIVATE_KEY_18097e360), iVar1 == 0)) ||
         ((iVar1 = strcmp(param_1,s_EC_PRIVATE_KEY_18097e370), iVar1 == 0 ||
          (iVar1 = strcmp(param_1,s_DSA_PRIVATE_KEY_18097e380), iVar1 == 0)))) {
        local_18 = 1;
      }
      else {
        local_18 = 0;
      }
    }
    else {
      iVar1 = strcmp(param_1,s_X509_CERTIFICATE_18097e390);
      if ((iVar1 == 0) && (iVar1 = strcmp(param_2,s_CERTIFICATE_18097e3a8), iVar1 == 0)) {
        local_18 = 1;
      }
      else {
        iVar1 = strcmp(param_1,s_NEW_CERTIFICATE_REQUEST_18097e3b8);
        if ((iVar1 == 0) && (iVar1 = strcmp(param_2,s_CERTIFICATE_REQUEST_18097e3d0), iVar1 == 0)) {
          local_18 = 1;
        }
        else {
          iVar1 = strcmp(param_1,s_CERTIFICATE_18097e3e8);
          if ((iVar1 == 0) && (iVar1 = strcmp(param_2,s_TRUSTED_CERTIFICATE_18097e3f8), iVar1 == 0))
          {
            local_18 = 1;
          }
          else {
            iVar1 = strcmp(param_1,s_X509_CERTIFICATE_18097e410);
            if ((iVar1 == 0) &&
               (iVar1 = strcmp(param_2,s_TRUSTED_CERTIFICATE_18097e428), iVar1 == 0)) {
              local_18 = 1;
            }
            else {
              iVar1 = strcmp(param_1,s_CERTIFICATE_18097e440);
              if ((iVar1 == 0) && (iVar1 = strcmp(param_2,s_PKCS7_18097e44c), iVar1 == 0)) {
                local_18 = 1;
              }
              else {
                iVar1 = strcmp(param_1,s_PKCS__7_SIGNED_DATA_18097e458);
                if ((iVar1 == 0) && (iVar1 = strcmp(param_2,s_PKCS7_18097e46c), iVar1 == 0)) {
                  local_18 = 1;
                }
                else {
                  local_18 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return local_18;
}


/* address=18060e810 name=FUN_18060e810 */

void FUN_18060e810(undefined8 param_1,int param_2)

{
  char *local_18;
  
  if (param_2 == 10) {
    local_18 = s_ENCRYPTED_18097e240;
  }
  else if (param_2 == 0x1e) {
    local_18 = s_MIC_CLEAR_18097e250;
  }
  else if (param_2 == 0x14) {
    local_18 = s_MIC_ONLY_18097e260;
  }
  else {
    local_18 = s_BAD_TYPE_18097e270;
  }
  FUN_1805900c0(param_1,s_Proc_Type__4__18097e280,0x400);
  FUN_1805900c0(param_1,local_18,0x400);
  FUN_1805900c0(param_1,&DAT_18097e290,0x400);
  return;
}


/* address=18060e8c0 name=FUN_18060e8c0 */

void FUN_18060e8c0(char *param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  size_t sVar1;
  ulonglong local_18;
  
  FUN_1805900c0(param_1,s_DEK_Info__18097e298,0x400);
  FUN_1805900c0(param_1,param_2,0x400);
  FUN_1805900c0(param_1,&DAT_18097e2a4,0x400);
  sVar1 = strlen(param_1);
  if (param_3 <= (0x3fe - sVar1) / 2) {
    for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
      param_1[sVar1 + local_18 * 2] =
           "0123456789ABCDEF"[(int)((int)*(char *)(param_4 + local_18) >> 4 & 0xf)];
      param_1[sVar1 + local_18 * 2 + 1] =
           "0123456789ABCDEF"[(int)((int)*(char *)(param_4 + local_18) & 0xf)];
    }
    param_1[sVar1 + param_3 * 2] = '\n';
    param_1[sVar1 + param_3 * 2 + 1] = '\0';
  }
  return;
}


/* address=18060ea30 name=FUN_18060ea30 */

undefined8 FUN_18060ea30(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = strcmp(param_1,s_DES_CBC_18097e478);
  if (iVar1 == 0) {
    uVar2 = FUN_1805ec290();
  }
  else {
    iVar1 = strcmp(param_1,s_DES_EDE3_CBC_18097e480);
    if (iVar1 == 0) {
      uVar2 = FUN_1805ec2e0();
    }
    else {
      iVar1 = strcmp(param_1,s_AES_128_CBC_18097e490);
      if (iVar1 == 0) {
        uVar2 = FUN_18055dac0();
      }
      else {
        iVar1 = strcmp(param_1,s_AES_192_CBC_18097e4a0);
        if (iVar1 == 0) {
          uVar2 = FUN_18055f6e0();
        }
        else {
          iVar1 = strcmp(param_1,s_AES_256_CBC_18097e4b0);
          if (iVar1 == 0) {
            uVar2 = FUN_18055db80();
          }
          else {
            uVar2 = 0;
          }
        }
      }
    }
  }
  return uVar2;
}


/* address=18060eae0 name=FUN_18060eae0 */

void FUN_18060eae0(undefined8 param_1,longlong *param_2,code *param_3,undefined8 param_4)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_498;
  local_448 = (char *)0x0;
  local_440 = 0;
  local_420 = 0;
  local_450 = 0;
  local_478 = param_1;
  local_470 = param_3;
  local_468 = param_4;
  iVar1 = FUN_18060d990(&local_420,&local_458,&local_448,s_ANY_PRIVATE_KEY_18097f300);
  if (iVar1 == 0) goto LAB_18060ee5c;
  local_440 = local_420;
  iVar1 = strcmp(local_448,s_PRIVATE_KEY_18097f310);
  if (iVar1 == 0) {
    local_430 = FUN_180525e20(0,&local_440,local_458);
    if (local_430 != 0) {
      local_450 = FUN_180525e90(local_430);
      if (param_2 != (longlong *)0x0) {
        if (*param_2 != 0) {
          FUN_18050d980(*param_2);
        }
        *param_2 = local_450;
      }
      FUN_180525df0(local_430);
    }
LAB_18060ee19:
    if (local_450 == 0) {
      local_478 = CONCAT44(local_478._4_4_,0x90);
      FUN_18050f6f0(9,0,0xc,s_D__a_1_s_target_x86_64_pc_window_18097f3f0);
    }
  }
  else {
    iVar1 = strcmp(local_448,s_ENCRYPTED_PRIVATE_KEY_18097f320);
    if (iVar1 != 0) {
      iVar1 = strcmp(local_448,s_RSA_PRIVATE_KEY_18097f3c0);
      if (iVar1 == 0) {
        local_450 = FUN_180588db0(6,param_2,&local_440,local_458);
      }
      else {
        iVar1 = strcmp(local_448,s_EC_PRIVATE_KEY_18097f3d0);
        if (iVar1 == 0) {
          local_450 = FUN_180588db0(0x198,param_2,&local_440,local_458);
        }
        else {
          iVar1 = strcmp(local_448,s_DSA_PRIVATE_KEY_18097f3e0);
          if (iVar1 == 0) {
            local_450 = FUN_180588db0(0x74,param_2,&local_440,local_458);
          }
        }
      }
      goto LAB_18060ee19;
    }
    local_438 = FUN_180595950(0,&local_440,local_458);
    if (local_438 == 0) goto LAB_18060ee19;
    local_454 = 0;
    local_res18 = param_3;
    if (param_3 == (code *)0x0) {
      local_res18 = FUN_18060e370;
    }
    local_454 = (*local_res18)(local_418,0x400,0,param_4);
    if (0 < local_454) {
      local_428 = FUN_180526250(local_438,local_418,local_454);
      FUN_180595920(local_438);
      FUN_18058f7b0(local_418,(longlong)local_454);
      if (local_428 != 0) {
        local_450 = FUN_180525e90(local_428);
        if (param_2 != (longlong *)0x0) {
          if (*param_2 != 0) {
            FUN_18050d980(*param_2);
          }
          *param_2 = local_450;
        }
        FUN_180525df0(local_428);
      }
      goto LAB_18060ee19;
    }
    local_478 = CONCAT44(local_478._4_4_,0x72);
    FUN_18050f6f0(9,0,0x68,s_D__a_1_s_target_x86_64_pc_window_18097f340);
    FUN_180595920(local_438);
  }
  FUN_18058f610(local_448);
  FUN_18058f610(local_420);
LAB_18060ee5c:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_498);
  return;
}


/* address=18060ee80 name=FUN_18060ee80 */

undefined8
FUN_18060ee80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_180592390(param_1,0);
  if (lVar1 == 0) {
    FUN_18050f6f0(9,0,7,s_D__a_1_s_target_x86_64_pc_window_18097f470,0xa3);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18060eae0(lVar1,param_2,param_3,param_4);
    FUN_18058c580(lVar1);
  }
  return uVar2;
}


/* address=18060ef10 name=FUN_18060ef10 */

void FUN_18060ef10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_180598140(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


/* address=18060f020 name=FUN_18060f020 */

void FUN_18060f020(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18060f040 name=FUN_18060f040 */

void FUN_18060f040(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18060f070 name=FUN_18060f070 */

void FUN_18060f070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180515100(param_1,param_2,param_3);
  return;
}


/* address=18060f0b0 name=FUN_18060f0b0 */

void FUN_18060f0b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1805152e0(param_1,param_2);
  return;
}


/* address=18060f0e0 name=FUN_18060f0e0 */

undefined8 FUN_18060f0e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_18060f020(*param_1);
  }
  return uVar1;
}


/* address=18060f110 name=FUN_18060f110 */

undefined8 FUN_18060f110(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1805a8e80(param_2);
  if (lVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = FUN_18060f160(param_1,lVar1,param_3);
  }
  return uVar2;
}


/* address=18060f160 name=FUN_18060f160 */

int FUN_18060f160(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int local_res18;
  
  if (param_1 == (undefined8 *)0x0) {
    local_res18 = -1;
  }
  else {
    local_res18 = param_3;
    if (param_3 < 0) {
      local_res18 = -1;
    }
    uVar1 = *param_1;
    iVar2 = FUN_18060f020(uVar1);
    do {
      local_res18 = local_res18 + 1;
      if (iVar2 <= local_res18) {
        return -1;
      }
      puVar4 = (undefined8 *)FUN_18060f040(uVar1,(longlong)local_res18);
      iVar3 = FUN_1805a8a70(*puVar4,param_2);
    } while (iVar3 != 0);
  }
  return local_res18;
}


/* address=18060f220 name=FUN_18060f220 */

undefined8 FUN_18060f220(undefined8 *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((param_1 != (undefined8 *)0x0) && (-1 < param_2)) &&
     (uVar1 = FUN_18060f020(*param_1), (ulonglong)(longlong)param_2 < uVar1)) {
    uVar2 = FUN_18060f040(*param_1,(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=18060f280 name=FUN_18060f280 */

longlong FUN_18060f280(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_38;
  int local_34;
  
  if (((param_1 == (undefined8 *)0x0) || (param_2 < 0)) ||
     (uVar3 = FUN_18060f020(*param_1), uVar3 <= (ulonglong)(longlong)param_2)) {
    lVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar4 = FUN_18060f0b0(uVar1,(longlong)param_2);
    iVar2 = FUN_18060f020(uVar1);
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_2 != iVar2) {
      if (param_2 == 0) {
        local_34 = *(int *)(lVar4 + 0x10) + -1;
      }
      else {
        lVar5 = FUN_18060f040(uVar1,(longlong)(param_2 + -1));
        local_34 = *(int *)(lVar5 + 0x10);
      }
      lVar5 = FUN_18060f040(uVar1,(longlong)param_2);
      local_38 = param_2;
      if (local_34 + 1 < *(int *)(lVar5 + 0x10)) {
        for (; local_38 < iVar2; local_38 = local_38 + 1) {
          lVar5 = FUN_18060f040(uVar1,(longlong)local_38);
          *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
        }
      }
    }
  }
  return lVar4;
}


/* address=18060f3c0 name=FUN_18060f3c0 */

undefined8 FUN_18060f3c0(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int local_res18;
  int local_res20;
  int local_34;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    iVar2 = FUN_18060f020(uVar1);
    local_res18 = iVar2;
    if ((param_3 <= iVar2) && (local_res18 = param_3, param_3 < 0)) {
      local_res18 = iVar2;
    }
    bVar5 = param_4 == 0;
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_4 == -1) {
      if (local_res18 != 0) {
        lVar3 = FUN_18060f040(uVar1,(longlong)(local_res18 + -1));
        local_res20 = *(int *)(lVar3 + 0x10);
      }
      else {
        local_res20 = 0;
      }
      bVar5 = local_res18 == 0 || bVar5;
    }
    else if (local_res18 < iVar2) {
      lVar3 = FUN_18060f040(uVar1,(longlong)local_res18);
      local_res20 = *(int *)(lVar3 + 0x10);
    }
    else if (local_res18 == 0) {
      local_res20 = 0;
    }
    else {
      lVar3 = FUN_18060f040(uVar1,(longlong)(local_res18 + -1));
      local_res20 = *(int *)(lVar3 + 0x10) + 1;
    }
    lVar3 = FUN_180513af0(param_2);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x10) = local_res20;
      lVar4 = FUN_18060f070(uVar1,lVar3,(longlong)local_res18);
      if (lVar4 != 0) {
        if (bVar5) {
          iVar2 = FUN_18060f020(uVar1);
          while (local_34 = local_res18 + 1, local_34 < iVar2) {
            lVar3 = FUN_18060f040(uVar1,(longlong)local_34);
            *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
            local_res18 = local_34;
          }
        }
        return 1;
      }
    }
    if (lVar3 != 0) {
      FUN_180513a50(lVar3);
    }
  }
  return 0;
}


/* address=18060f6d0 name=FUN_18060f6d0 */

undefined4
FUN_18060f6d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_18060faa0(0,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_18060f3c0(param_1,lVar2,param_6,param_7);
    FUN_180513a50(lVar2);
  }
  return uVar1;
}


/* address=18060f760 name=FUN_18060f760 */

undefined8 FUN_18060f760(undefined8 *param_1)

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


/* address=18060f780 name=FUN_18060f780 */

bool FUN_18060f780(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    FUN_18050f6f0(0xb,0,0x43,s_D__a_1_s_target_x86_64_pc_window_18097f680,0x15a);
    bVar2 = false;
  }
  else {
    FUN_1805eec50(*param_1);
    lVar1 = FUN_1805a8890(param_2);
    *param_1 = lVar1;
    bVar2 = *param_1 != 0;
  }
  return bVar2;
}


/* address=18060f810 name=FUN_18060f810 */

undefined8 FUN_18060f810(longlong param_1)

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


/* address=18060f840 name=FUN_18060f840 */

bool FUN_18060f840(undefined8 *param_1,uint param_2,char *param_3,size_t param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  size_t local_res20;
  
  if ((param_1 == (undefined8 *)0x0) || ((param_3 == (char *)0x0 && (param_4 != 0)))) {
    bVar4 = false;
  }
  else if (((int)param_2 < 1) || ((param_2 & 0x1000) == 0)) {
    local_res20 = param_4;
    if ((longlong)param_4 < 0) {
      local_res20 = strlen(param_3);
    }
    iVar2 = FUN_1805108a0(param_1[1],param_3,local_res20);
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
    uVar1 = FUN_1805a8b30(*param_1);
    lVar3 = FUN_18064fab0(param_1 + 1,param_3,param_4,param_2,uVar1);
    bVar4 = lVar3 != 0;
  }
  return bVar4;
}


/* address=18060f940 name=FUN_18060f940 */

longlong FUN_18060f940(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  int iVar1;
  longlong local_18;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    local_18 = FUN_180513a30();
    if (local_18 == 0) {
      return 0;
    }
  }
  else {
    local_18 = *param_1;
  }
  iVar1 = FUN_18060f780(local_18,param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_18060f840(local_18,param_3,param_4,param_5), iVar1 == 0)) {
    if ((param_1 == (longlong *)0x0) || (local_18 != *param_1)) {
      FUN_180513a50(local_18);
    }
    local_18 = 0;
  }
  else if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    *param_1 = local_18;
  }
  return local_18;
}


/* address=18060fa20 name=FUN_18060fa20 */

undefined8
FUN_18060fa20(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_1805a8e80(param_2);
  if (lVar1 == 0) {
    FUN_18050f6f0(0xb,0,0x81,s_D__a_1_s_target_x86_64_pc_window_18097f600,CONCAT44(uVar3,0x132));
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18060f940(param_1,lVar1,param_3,param_4,param_5);
  }
  return uVar2;
}


/* address=18060faa0 name=FUN_18060faa0 */

undefined8
FUN_18060faa0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  lVar1 = FUN_1805a9070(param_2,0);
  if (lVar1 == 0) {
    FUN_18050f6f0(0xb,0,0x6f,s_D__a_1_s_target_x86_64_pc_window_18097f570,CONCAT44(uVar3,0x123));
    FUN_18050f810(2,s_name__18097f5ec,param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_18060f940(param_1,lVar1,param_3,param_4,param_5);
    FUN_1805eec50(lVar1);
  }
  return uVar2;
}


/* address=18060fb50 name=FUN_18060fb50 */

int FUN_18060fb50(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int local_14;
  
  iVar1 = FUN_18060f160(param_1,param_2,0xffffffff);
  if (iVar1 < 0) {
    local_14 = -1;
  }
  else {
    uVar2 = FUN_18060f220(param_1,iVar1);
    piVar3 = (int *)FUN_18060f810(uVar2);
    if (param_4 + -1 < *piVar3) {
      local_14 = param_4 + -1;
    }
    else {
      local_14 = *piVar3;
    }
    if (param_3 == 0) {
      local_14 = *piVar3;
    }
    else {
      FUN_18060fc90(param_3,*(undefined8 *)(piVar3 + 2),(longlong)local_14);
      *(undefined *)(param_3 + local_14) = 0;
    }
  }
  return local_14;
}


/* address=18060fc90 name=FUN_18060fc90 */

undefined8 FUN_18060fc90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18060fcd0 name=FUN_18060fcd0 */

undefined8 FUN_18060fcd0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (0x11 < local_18) {
      return 0;
    }
    if (*(int *)(&DAT_1807ae310 + local_18 * 0xc) == param_1) break;
    local_18 = local_18 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(&DAT_1807ae314 + local_18 * 0xc);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(&DAT_1807ae318 + local_18 * 0xc);
  }
  return 1;
}


/* address=18060fd70 name=FUN_18060fd70 */

undefined8 FUN_18060fd70(undefined4 *param_1,int param_2,int param_3)

{
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    if (0x11 < local_18) {
      return 0;
    }
    if ((*(int *)(&DAT_1807ae314 + local_18 * 0xc) == param_2) &&
       (*(int *)(&DAT_1807ae318 + local_18 * 0xc) == param_3)) break;
    local_18 = local_18 + 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(&DAT_1807ae310 + local_18 * 0xc);
  }
  return 1;
}


/* address=18060fe00 name=FUN_18060fe00 */

void FUN_18060fe00(undefined8 param_1)

{
  FUN_180679a10(param_1);
  return;
}


/* address=18060fe20 name=FUN_18060fe20 */

void FUN_18060fe20(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18060fe40 name=FUN_18060fe40 */

void FUN_18060fe40(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18060fea0 name=FUN_18060fea0 */

void FUN_18060fea0(void)

{
  FUN_180514f00();
  return;
}


/* address=18060fec0 name=FUN_18060fec0 */

void FUN_18060fec0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18060fee0 name=FUN_18060fee0 */

void FUN_18060fee0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18060ff10 name=FUN_18060ff10 */

void FUN_18060ff10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180514fe0(param_1,param_2,param_3);
  return;
}


/* address=18060ff50 name=FUN_18060ff50 */

void FUN_18060ff50(undefined8 param_1)

{
  FUN_180515030(param_1);
  return;
}


/* address=18060ff70 name=FUN_18060ff70 */

void FUN_18060ff70(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_18060fe70,param_2);
  return;
}


/* address=18060ffa0 name=FUN_18060ffa0 */

void FUN_18060ffa0(undefined8 param_1,undefined8 param_2)

{
  FUN_1805153b0(param_1,param_2);
  return;
}


/* address=18060ffd0 name=FUN_18060ffd0 */

void FUN_18060ffd0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=180610000 name=FUN_180610000 */

void FUN_180610000(undefined8 param_1)

{
  FUN_180515850(param_1);
  return;
}


/* address=180610020 name=FUN_180610020 */

void FUN_180610020(undefined8 param_1)

{
  FUN_1805158a0(param_1);
  return;
}


/* address=180610070 name=FUN_180610070 */

void FUN_180610070(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180610090 name=FUN_180610090 */

void FUN_180610090(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=1806100c0 name=FUN_1806100c0 */

void FUN_1806100c0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_180610040,param_2);
  return;
}


/* address=180610150 name=FUN_180610150 */

undefined4 FUN_180610150(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_18;
  longlong local_10 [2];
  
  iVar1 = FUN_1805135b0(param_1,local_10);
  if (iVar1 == 0) {
    local_18 = 0;
  }
  else if (local_10[0] == param_2 || local_10[0] - param_2 < 0) {
    local_18 = 0xffffffff;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}


/* address=1806101e0 name=FUN_1806101e0 */

void FUN_1806101e0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_180610220(param_1,0,param_2,param_3);
  return;
}


/* address=180610220 name=FUN_180610220 */

void FUN_180610220(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 local_18;
  
  if (param_4 == (undefined8 *)0x0) {
    local_18 = FUN_18060fe00(0);
  }
  else {
    local_18 = *param_4;
  }
  FUN_180513200(param_1,local_18,param_2,param_3);
  return;
}


/* address=180610320 name=FUN_180610320 */

void FUN_180610320(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1805ad640(param_1 + 0xd0,param_2,param_3);
  return;
}


/* address=180610390 name=FUN_180610390 */

void FUN_180610390(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=1806103b0 name=FUN_1806103b0 */

void FUN_1806103b0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180610860 name=FUN_180610860 */

int FUN_180610860(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int local_64;
  longlong local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  int local_40;
  int local_3c;
  int local_38;
  longlong local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_4c = 0;
  local_18 = *(longlong *)(param_1 + 0x20);
  iVar5 = 0;
  local_30 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_18050f6f0(0xb,0,0x7a,s_D__a_1_s_target_x86_64_pc_window_18097f720,0xc0);
    *(undefined4 *)(param_1 + 0xa4) = 0x41;
    return -1;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_18050f6f0(0xb,0,0x42,s_D__a_1_s_target_x86_64_pc_window_18097f7a0,199);
    *(undefined4 *)(param_1 + 0xa4) = 0x41;
    return -1;
  }
  uVar3 = FUN_18060fea0();
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  if ((*(longlong *)(param_1 + 0x98) == 0) ||
     (lVar4 = FUN_18060ffd0(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 8)),
     lVar4 == 0)) {
    *(undefined4 *)(param_1 + 0xa4) = 0x11;
  }
  else {
    FUN_180515dc0(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x94) = 1;
    if ((*(longlong *)(param_1 + 0x10) == 0) ||
       (local_30 = FUN_180610020(*(undefined8 *)(param_1 + 0x10)), local_30 != 0)) {
      local_64 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98));
      local_60 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)(local_64 + -1));
      local_28 = *(int *)(local_18 + 0x20);
      for (; local_64 <= local_28; local_64 = local_64 + 1) {
        iVar1 = FUN_1806138c0(local_60,&local_20);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0xa4) = 0x29;
          goto LAB_180611234;
        }
        if (local_20 != 0) break;
        if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x8000) != 0) {
          iVar5 = (**(code **)(param_1 + 0x40))(&local_58,param_1,local_60);
          if (iVar5 < 0) {
            *(undefined4 *)(param_1 + 0xa4) = 0x42;
            goto LAB_180611234;
          }
          if (0 < iVar5) {
            FUN_180515e60(local_58);
            break;
          }
        }
        if ((local_30 == 0) || (local_58 = FUN_180611f50(param_1,local_30,local_60), local_58 == 0))
        break;
        lVar4 = FUN_18060ffd0(*(undefined8 *)(param_1 + 0x98),local_58);
        if (lVar4 == 0) {
          *(undefined4 *)(param_1 + 0xa4) = 0x11;
          iVar5 = 0;
          goto LAB_180611234;
        }
        FUN_180515dc0(local_58);
        FUN_18060ffa0(local_30,local_58);
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
        local_60 = local_58;
      }
      local_50 = local_64;
      do {
        local_40 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98));
        local_60 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)(local_40 + -1));
        iVar1 = FUN_1806138c0(local_60,&local_3c);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0xa4) = 0x29;
          goto LAB_180611234;
        }
        if (local_3c != 0) {
          lVar4 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98));
          if (lVar4 == 1) {
            iVar5 = (**(code **)(param_1 + 0x40))(&local_58,param_1,local_60);
            if ((iVar5 < 1) || (iVar1 = FUN_180595140(local_60,local_58), iVar1 != 0)) {
              *(undefined4 *)(param_1 + 0xa4) = 0x12;
              *(longlong *)(param_1 + 0xa8) = local_60;
              *(int *)(param_1 + 0xa0) = local_40 + -1;
              if (iVar5 == 1) {
                FUN_180515e60(local_58);
              }
              local_4c = 1;
              iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar5 == 0) goto LAB_180611234;
            }
            else {
              FUN_180515e60(local_60);
              local_60 = local_58;
              FUN_18060ff10(*(undefined8 *)(param_1 + 0x98),(longlong)(local_40 + -1),local_58);
              *(undefined4 *)(param_1 + 0x94) = 0;
            }
          }
          else {
            local_48 = FUN_180610000(*(undefined8 *)(param_1 + 0x98));
            *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
            local_50 = local_50 + -1;
            local_60 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)(local_64 + -2));
            local_64 = local_64 + -1;
          }
        }
        for (; local_64 <= local_28; local_64 = local_64 + 1) {
          iVar1 = FUN_1806138c0(local_60,&local_3c);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0xa4) = 0x29;
            goto LAB_180611234;
          }
          if (local_3c != 0) break;
          iVar5 = (**(code **)(param_1 + 0x40))(&local_58,param_1,local_60);
          if (iVar5 < 0) {
            *(undefined4 *)(param_1 + 0xa4) = 0x42;
            goto LAB_180611234;
          }
          if (iVar5 == 0) break;
          local_60 = local_58;
          lVar4 = FUN_18060ffd0(*(undefined8 *)(param_1 + 0x98),local_58);
          if (lVar4 == 0) {
            FUN_180515e60(local_58);
            *(undefined4 *)(param_1 + 0xa4) = 0x11;
            iVar5 = 0;
            goto LAB_180611234;
          }
        }
        local_38 = FUN_180612600(param_1);
        if (local_38 == 2) {
          iVar5 = 0;
          goto LAB_180611234;
        }
        local_24 = 0;
        iVar1 = local_50;
        if (((local_38 != 1) && ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x8000) == 0))
           && ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x100000) == 0)) {
          do {
            local_1c = local_50;
            iVar1 = local_50 + -1;
            if (local_50 < 2) goto LAB_180611021;
            iVar5 = local_50 + -2;
            local_50 = local_50 + -1;
            local_10 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)iVar5);
            iVar5 = (**(code **)(param_1 + 0x40))(&local_58,param_1,local_10);
            if (iVar5 < 0) goto LAB_180611234;
          } while (iVar5 < 1);
          FUN_180515e60(local_58);
          for (; local_50 < local_64; local_64 = local_64 + -1) {
            local_58 = FUN_180610000(*(undefined8 *)(param_1 + 0x98));
            FUN_180515e60(local_58);
          }
          uVar2 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98));
          *(undefined4 *)(param_1 + 0x94) = uVar2;
          local_24 = 1;
          iVar1 = local_50;
        }
LAB_180611021:
        local_50 = iVar1;
      } while (local_24 != 0);
      if ((local_38 != 1) && (local_4c == 0)) {
        if ((local_48 == 0) ||
           (iVar5 = (**(code **)(param_1 + 0x48))(param_1,local_60,local_48), iVar5 == 0)) {
          if (*(int *)(param_1 + 0x94) < local_64) {
            *(undefined4 *)(param_1 + 0xa4) = 2;
          }
          else {
            *(undefined4 *)(param_1 + 0xa4) = 0x14;
          }
          *(longlong *)(param_1 + 0xa8) = local_60;
        }
        else {
          FUN_18060ffd0(*(undefined8 *)(param_1 + 0x98),local_48);
          local_64 = local_64 + 1;
          *(int *)(param_1 + 0x94) = local_64;
          *(longlong *)(param_1 + 0xa8) = local_48;
          *(undefined4 *)(param_1 + 0xa4) = 0x13;
          local_48 = 0;
        }
        *(int *)(param_1 + 0xa0) = local_64 + -1;
        local_4c = 1;
        iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar5 == 0) {
          iVar5 = 0;
          goto LAB_180611234;
        }
      }
      iVar5 = FUN_180611fe0(param_1);
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_1806124d0(param_1);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (**(code **)(param_1 + 0x50))(param_1);
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            if (*(longlong *)(param_1 + 0x30) == 0) {
              iVar5 = FUN_1806135d0(param_1);
            }
            else {
              iVar5 = (**(code **)(param_1 + 0x30))(param_1);
            }
            if (((iVar5 != 0) && (iVar5 = FUN_180612290(param_1), iVar5 != 0)) && (local_4c == 0)) {
              iVar5 = (**(code **)(param_1 + 0x70))(param_1);
            }
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xa4) = 0x11;
    }
  }
LAB_180611234:
  if (local_30 != 0) {
    FUN_18060ff50(local_30);
  }
  if (local_48 != 0) {
    FUN_180515e60(local_48);
  }
  if ((iVar5 < 1) && (*(int *)(param_1 + 0xa4) == 0)) {
    *(undefined4 *)(param_1 + 0xa4) = 1;
  }
  return iVar5;
}


/* address=1806112d0 name=FUN_1806112d0 */

longlong FUN_1806112d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18058f4e0(0xd8);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_180611310(lVar1);
  }
  return lVar1;
}


/* address=180611310 name=FUN_180611310 */

void FUN_180611310(undefined8 param_1)

{
  FUN_180611e50(param_1,0,0xd8);
  return;
}


/* address=180611340 name=FUN_180611340 */

void FUN_180611340(longlong param_1)

{
  if (param_1 != 0) {
    FUN_180611750(param_1);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=180611380 name=FUN_180611380 */

undefined8 FUN_180611380(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_180611310(param_1);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_1805ad770(param_1 + 0x1a);
  if (param_2 == 0) {
    FUN_18050f6f0(0xb,0,0x43,s_D__a_1_s_target_x86_64_pc_window_18097fd20,0x831);
  }
  else {
    lVar2 = FUN_1805eb4b0();
    param_1[4] = lVar2;
    if (param_1[4] != 0) {
      param_1[7] = *(longlong *)(param_2 + 0x30);
      param_1[0x11] = *(longlong *)(param_2 + 0x78);
      iVar1 = FUN_1805eb540(param_1[4],*(undefined8 *)(param_2 + 0x20));
      if (iVar1 != 0) {
        uVar3 = FUN_1805ebe30(s_default_18097f718);
        iVar1 = FUN_1805eb540(param_1[4],uVar3);
        if (iVar1 != 0) {
          if (*(longlong *)(param_2 + 0x40) == 0) {
            param_1[9] = (longlong)&LAB_180611eb0;
          }
          else {
            param_1[9] = *(longlong *)(param_2 + 0x40);
          }
          if (*(longlong *)(param_2 + 0x38) == 0) {
            param_1[8] = (longlong)&LAB_180525120;
          }
          else {
            param_1[8] = *(longlong *)(param_2 + 0x38);
          }
          if (*(longlong *)(param_2 + 0x30) == 0) {
            param_1[7] = (longlong)&LAB_180611e90;
          }
          else {
            param_1[7] = *(longlong *)(param_2 + 0x30);
          }
          if (*(longlong *)(param_2 + 0x28) == 0) {
            param_1[6] = (longlong)FUN_1806135d0;
          }
          else {
            param_1[6] = *(longlong *)(param_2 + 0x28);
          }
          if (*(longlong *)(param_2 + 0x48) == 0) {
            param_1[10] = (longlong)&LAB_1806127b0;
          }
          else {
            param_1[10] = *(longlong *)(param_2 + 0x48);
          }
          if (*(longlong *)(param_2 + 0x50) == 0) {
            param_1[0xb] = 0;
          }
          else {
            param_1[0xb] = *(longlong *)(param_2 + 0x50);
          }
          if (*(longlong *)(param_2 + 0x58) == 0) {
            param_1[0xc] = (longlong)&LAB_180614630;
          }
          else {
            param_1[0xc] = *(longlong *)(param_2 + 0x58);
          }
          if (*(longlong *)(param_2 + 0x60) == 0) {
            param_1[0xd] = (longlong)&LAB_180614960;
          }
          else {
            param_1[0xd] = *(longlong *)(param_2 + 0x60);
          }
          if (*(longlong *)(param_2 + 0x68) == 0) {
            param_1[0xf] = (longlong)&LAB_180524a00;
          }
          else {
            param_1[0xf] = *(longlong *)(param_2 + 0x68);
          }
          if (*(longlong *)(param_2 + 0x70) == 0) {
            param_1[0x10] = (longlong)&LAB_180524be0;
          }
          else {
            param_1[0x10] = *(longlong *)(param_2 + 0x70);
          }
          param_1[0xe] = (longlong)&LAB_180612b00;
          return 1;
        }
      }
    }
  }
  FUN_1805ad790(&DAT_18097f700,param_1,param_1 + 0x1a);
  if (param_1[4] != 0) {
    FUN_1805eb500(param_1[4]);
  }
  FUN_180611e50(param_1,0,0xd8);
  return 0;
}


/* address=1806116f0 name=FUN_1806116f0 */

void FUN_1806116f0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined **)(param_1 + 0x40) = &LAB_180613a10;
  return;
}


/* address=180611750 name=FUN_180611750 */

void FUN_180611750(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(param_1 + 0x88))(param_1);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(longlong *)(param_1 + 200) == 0) {
      FUN_1805eb500(*(undefined8 *)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_18060ff70(*(undefined8 *)(param_1 + 0x98),FUN_180515e60);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  FUN_1805ad790(&DAT_18097f700,param_1,param_1 + 0xd0);
  FUN_180611e50(param_1 + 0xd0,0,8);
  return;
}


/* address=180611860 name=FUN_180611860 */

undefined4 FUN_180611860(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}


/* address=180611980 name=FUN_180611980 */

undefined8 FUN_180611980(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180594c50(*(undefined8 *)(param_1 + 0x98));
  }
  return uVar1;
}


/* address=180611aa0 name=FUN_180611aa0 */

undefined8 FUN_180611aa0(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int local_res18;
  int local_res20;
  longlong local_10;
  
  local_res18 = param_3;
  if (param_3 == 0) {
    local_res18 = param_2;
  }
  local_res20 = param_4;
  if (local_res18 != 0) {
    iVar1 = FUN_1806167b0(local_res18);
    if (iVar1 == -1) {
      FUN_18050f6f0(0xb,0,0x82,s_D__a_1_s_target_x86_64_pc_window_18097fba0,0x7ef);
      return 0;
    }
    local_10 = FUN_1806166e0(iVar1);
    if (*(int *)(local_10 + 4) == -1) {
      iVar1 = FUN_1806167b0(param_2);
      if (iVar1 == -1) {
        FUN_18050f6f0(0xb,0,0x82,s_D__a_1_s_target_x86_64_pc_window_18097fc20,0x7f6);
        return 0;
      }
      local_10 = FUN_1806166e0(iVar1);
    }
    if (param_4 == 0) {
      local_res20 = *(int *)(local_10 + 4);
    }
  }
  if ((local_res20 != 0) && (iVar1 = FUN_18063aec0(local_res20), iVar1 == -1)) {
    FUN_18050f6f0(0xb,0,0x83,s_D__a_1_s_target_x86_64_pc_window_18097fca0,0x803);
    return 0;
  }
  if ((local_res18 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + 0x18) == 0)) {
    *(int *)(*(longlong *)(param_1 + 0x20) + 0x18) = local_res18;
  }
  if ((local_res20 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) == 0)) {
    *(int *)(*(longlong *)(param_1 + 0x20) + 0x1c) = local_res20;
  }
  return 1;
}


/* address=180611c90 name=FUN_180611c90 */

void FUN_180611c90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1805eba80(*(undefined8 *)(param_1 + 0x20),param_3);
  return;
}


/* address=180611cd0 name=FUN_180611cd0 */

void FUN_180611cd0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}


/* address=180611cf0 name=FUN_180611cf0 */

undefined8 FUN_180611cf0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


/* address=180611d10 name=FUN_180611d10 */

void FUN_180611d10(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1805eb500(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}


/* address=180611d60 name=FUN_180611d60 */

undefined8 FUN_180611d60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1805ebe30(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805eb540(*(undefined8 *)(param_1 + 0x20),lVar1);
  }
  return uVar2;
}


/* address=180611db0 name=FUN_180611db0 */

void FUN_180611db0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180611dd0 name=FUN_180611dd0 */

void FUN_180611dd0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180611e00 name=FUN_180611e00 */

void FUN_180611e00(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180611e20 name=FUN_180611e20 */

void FUN_180611e20(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180611e50 name=FUN_180611e50 */

undefined8 FUN_180611e50(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180611f50 name=FUN_180611f50 */

undefined8 FUN_180611f50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  local_18 = 0;
  while( true ) {
    uVar2 = FUN_18060fec0(param_2);
    if (uVar2 <= local_18) {
      return 0;
    }
    uVar3 = FUN_18060fee0(param_2,local_18);
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,param_3,uVar3);
    if (iVar1 != 0) break;
    local_18 = local_18 + 1;
  }
  return uVar3;
}


/* address=180611fe0 name=FUN_180611fe0 */

undefined4 FUN_180611fe0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int local_38;
  int local_30;
  undefined4 local_2c;
  
  local_30 = 0;
  if (*(longlong *)(param_1 + 200) == 0) {
    local_2c = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x18);
  }
  else {
    local_2c = 6;
  }
  local_38 = 0;
  do {
    if (*(int *)(param_1 + 0x94) <= local_38) {
      return 1;
    }
    lVar2 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)local_38);
    if (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x10) == 0) &&
       ((*(uint *)(lVar2 + 0x2c) & 0x200) != 0)) {
      *(undefined4 *)(param_1 + 0xa4) = 0x22;
      *(int *)(param_1 + 0xa0) = local_38;
      *(longlong *)(param_1 + 0xa8) = lVar2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((0 < local_38) && (iVar1 = FUN_1806160f0(lVar2), iVar1 == 0)) {
      *(undefined4 *)(param_1 + 0xa4) = 0x18;
      *(int *)(param_1 + 0xa0) = local_38;
      *(longlong *)(param_1 + 0xa8) = lVar2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x18)) &&
       (iVar1 = FUN_180616120(lVar2,local_2c,0 < local_38), iVar1 != 1)) {
      *(undefined4 *)(param_1 + 0xa4) = 0x1a;
      *(int *)(param_1 + 0xa0) = local_38;
      *(longlong *)(param_1 + 0xa8) = lVar2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((((1 < local_38) && ((*(uint *)(lVar2 + 0x2c) & 0x20) == 0)) &&
        (*(int *)(lVar2 + 0x28) != -1)) && (*(int *)(lVar2 + 0x28) + 1 < local_30)) {
      *(undefined4 *)(param_1 + 0xa4) = 0x19;
      *(int *)(param_1 + 0xa0) = local_38;
      *(longlong *)(param_1 + 0xa8) = lVar2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((*(uint *)(lVar2 + 0x2c) & 0x20) == 0) {
      local_30 = local_30 + 1;
    }
    local_38 = local_38 + 1;
  } while( true );
}


/* address=180612290 name=FUN_180612290 */

undefined8 FUN_180612290(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_38;
  int local_30;
  
  bVar1 = false;
  local_38 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98));
  while (local_38 = local_38 + -1, -1 < local_38) {
    lVar3 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)local_38);
    if ((local_38 == 0) || ((*(uint *)(lVar3 + 0x2c) & 0x20) == 0)) {
      local_30 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98));
      while (local_30 = local_30 + -1, local_38 < local_30) {
        lVar4 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)local_30);
        if (*(longlong *)(lVar4 + 0x60) != 0) {
          bVar1 = true;
          iVar2 = FUN_1805abfd0(lVar3);
          if (iVar2 != 0) {
            if (iVar2 == 0x11) {
              *(undefined4 *)(param_1 + 0xa4) = 0x11;
              return 0;
            }
            *(int *)(param_1 + 0xa4) = iVar2;
            *(int *)(param_1 + 0xa0) = local_38;
            *(longlong *)(param_1 + 0xa8) = lVar3;
            iVar2 = (**(code **)(param_1 + 0x38))(0);
            if (iVar2 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  lVar3 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),0);
  if (((bVar1) && (*(longlong *)(lVar3 + 0x58) == 0)) && (iVar2 = FUN_180613a80(lVar3), iVar2 != 0))
  {
    if (iVar2 == 0x11) {
      *(undefined4 *)(param_1 + 0xa4) = 0x11;
      return 0;
    }
    *(int *)(param_1 + 0xa4) = iVar2;
    *(int *)(param_1 + 0xa0) = local_38;
    *(longlong *)(param_1 + 0xa8) = lVar3;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}


/* address=1806124d0 name=FUN_1806124d0 */

undefined8 FUN_1806124d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 8);
  if ((*(char *)(lVar1 + 0x68) != '\0') && (iVar3 = FUN_180613b50(param_1,0x41), iVar3 == 0)) {
    return 0;
  }
  if (((*(longlong *)(lVar1 + 0x30) != 0) && (iVar3 = FUN_180613bb0(uVar2,lVar1), iVar3 < 1)) &&
     (iVar3 = FUN_180613b50(param_1,0x3e), iVar3 == 0)) {
    return 0;
  }
  if (((*(longlong *)(lVar1 + 0x48) != 0) &&
      (iVar3 = FUN_18061e960(uVar2,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),0),
      iVar3 < 1)) && (iVar3 = FUN_180613b50(param_1,0x3f), iVar3 == 0)) {
    return 0;
  }
  if (((*(longlong *)(lVar1 + 0x58) != 0) &&
      (iVar3 = FUN_18061e9e0(uVar2,*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x60),0),
      iVar3 < 1)) && (iVar3 = FUN_180613b50(param_1,0x40), iVar3 == 0)) {
    return 0;
  }
  return 1;
}


/* address=180612600 name=FUN_180612600 */

undefined8 FUN_180612600(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong local_18;
  
  for (local_18 = (ulonglong)*(int *)(param_1 + 0x94);
      uVar2 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98)), local_18 < uVar2;
      local_18 = local_18 + 1) {
    uVar3 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),local_18);
    iVar1 = FUN_18063ad70(uVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),0);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0xa0) = (undefined4)local_18;
      *(undefined8 *)(param_1 + 0xa8) = uVar3;
      *(undefined4 *)(param_1 + 0xa4) = 0x1c;
      iVar1 = (**(code **)(param_1 + 0x38))(0);
      if (iVar1 == 0) {
        return 2;
      }
    }
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) != 0) {
    iVar1 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98));
    if (*(int *)(param_1 + 0x94) < iVar1) {
      return 1;
    }
    uVar3 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),0);
    lVar4 = FUN_180613920(param_1,uVar3);
    if (lVar4 != 0) {
      FUN_18060ff10(*(undefined8 *)(param_1 + 0x98),0,lVar4);
      FUN_180515e60(uVar3);
      *(undefined4 *)(param_1 + 0x94) = 0;
      return 1;
    }
  }
  return 3;
}


/* address=180612880 name=FUN_180612880 */

int FUN_180612880(longlong param_1)

{
  int iVar1;
  int iVar2;
  int local_38;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_38 = 0;
  local_18 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)*(int *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa8) = local_18;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  do {
    if (*(int *)(param_1 + 0xc4) == 0x807f) goto LAB_180612ac0;
    iVar1 = *(int *)(param_1 + 0xc4);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      local_38 = FUN_180612dd0(param_1,&local_28,&local_20,local_18);
    }
    else {
      local_38 = (**(code **)(param_1 + 0x58))(param_1,&local_28,local_18);
    }
    if (local_38 == 0) {
      *(undefined4 *)(param_1 + 0xa4) = 3;
      local_38 = (**(code **)(param_1 + 0x38))(0,param_1);
      goto LAB_180612ac0;
    }
    *(undefined8 *)(param_1 + 0xb8) = local_28;
    iVar2 = (**(code **)(param_1 + 0x60))(param_1,local_28);
    if (iVar2 == 0) {
      local_38 = 0;
      goto LAB_180612ac0;
    }
    if (local_20 == 0) {
      local_38 = 1;
    }
    else {
      iVar2 = (**(code **)(param_1 + 0x60))(param_1,local_20);
      if (iVar2 == 0) {
        local_38 = 0;
        goto LAB_180612ac0;
      }
      local_38 = (**(code **)(param_1 + 0x68))(param_1,local_20,local_18);
      if (local_38 == 0) goto LAB_180612ac0;
    }
    if ((local_38 != 2) &&
       (local_38 = (**(code **)(param_1 + 0x68))(param_1,local_28,local_18), local_38 == 0))
    goto LAB_180612ac0;
    FUN_1805966c0(local_28);
    FUN_1805966c0(local_20);
    local_28 = 0;
    local_20 = 0;
  } while (iVar1 != *(int *)(param_1 + 0xc4));
  *(undefined4 *)(param_1 + 0xa4) = 3;
  local_38 = (**(code **)(param_1 + 0x38))(0,param_1);
LAB_180612ac0:
  FUN_1805966c0(local_28);
  FUN_1805966c0(local_20);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return local_38;
}


/* address=180612c00 name=FUN_180612c00 */

uint FUN_180612c00(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint local_28;
  uint local_24;
  uint local_20 [2];
  undefined8 local_18;
  
  local_28 = 0;
  local_24 = *param_3;
  if ((*(uint *)(param_4 + 0x30) & 2) == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) == 0) {
      if ((*(uint *)(param_4 + 0x30) & 0x60) != 0) {
        return 0;
      }
    }
    else if ((*(uint *)(param_4 + 0x30) & 0x40) == 0) {
      if (*(longlong *)(param_4 + 0x40) != 0) {
        return 0;
      }
    }
    else if ((*(uint *)(param_4 + 0x34) & ~local_24) == 0) {
      return 0;
    }
    local_18 = FUN_1805eaa80(param_4);
    uVar2 = FUN_180594cf0(param_5);
    iVar1 = FUN_180595190(uVar2,local_18);
    if (iVar1 == 0) {
      local_28 = local_28 | 0x20;
    }
    else if ((*(uint *)(param_4 + 0x30) & 0x20) == 0) {
      return 0;
    }
    if ((*(uint *)(param_4 + 0x1c) & 0x200) == 0) {
      local_28 = local_28 | 0x100;
    }
    iVar1 = FUN_180613cb0(param_1,param_4,0);
    if (iVar1 != 0) {
      local_28 = local_28 | 0x40;
    }
    FUN_180613090(param_1,param_4,param_2,&local_28);
    if ((local_28 & 4) == 0) {
      local_28 = 0;
    }
    else {
      iVar1 = FUN_1806132e0(param_5,param_4,local_28,local_20);
      if (iVar1 != 0) {
        if ((local_20[0] & ~local_24) == 0) {
          return 0;
        }
        local_24 = local_24 | local_20[0];
        local_28 = local_28 | 0x80;
      }
      *param_3 = local_24;
    }
  }
  else {
    local_28 = 0;
  }
  return local_28;
}


/* address=180612dd0 name=FUN_180612dd0 */

bool FUN_180612dd0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_48 = 0;
  local_38 = 0;
  local_20 = 0;
  local_18 = FUN_180594cf0(param_4);
  local_44 = *(undefined4 *)(param_1 + 0xc4);
  local_40 = FUN_180613ea0(param_1,&local_38,&local_20,&local_28,&local_48,&local_44,
                           *(undefined8 *)(param_1 + 0x18));
  if ((local_40 == 0) &&
     ((local_30 = (**(code **)(param_1 + 0x80))(param_1,local_18), local_30 != 0 || (local_38 == 0))
     )) {
    FUN_180613ea0(param_1,&local_38,&local_20,&local_28,&local_48,&local_44,local_30);
    FUN_1806100c0(local_30,FUN_1805966c0);
  }
  if (local_38 != 0) {
    *(undefined8 *)(param_1 + 0xb0) = local_28;
    *(undefined4 *)(param_1 + 0xc0) = local_48;
    *(undefined4 *)(param_1 + 0xc4) = local_44;
    *param_2 = local_38;
    *param_3 = local_20;
  }
  return local_38 != 0;
}


/* address=180612f80 name=FUN_180612f80 */

void FUN_180612f80(longlong param_1,undefined8 *param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_18;
  
  if (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x2000) != 0) &&
     (((*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x2c) | *(uint *)(param_4 + 0x1c)) & 0x1000) != 0)
     ) {
    for (local_18 = 0; uVar2 = FUN_180610070(param_5), local_18 < uVar2; local_18 = local_18 + 1) {
      uVar3 = FUN_180610090(param_5,local_18);
      iVar1 = FUN_180614240(uVar3,param_4);
      if (iVar1 != 0) {
        iVar1 = FUN_180613cb0(param_1,uVar3,0);
        if (iVar1 != 0) {
          *param_3 = *param_3 | 2;
        }
        FUN_1805ea9e0(uVar3);
        *param_2 = uVar3;
        return;
      }
    }
    *param_2 = 0;
  }
  return;
}


/* address=180613090 name=FUN_180613090 */

void FUN_180613090(longlong param_1,longlong param_2,undefined8 *param_3,uint *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int local_38;
  ulonglong local_28;
  
  uVar2 = FUN_1805eaa80(param_2);
  local_38 = *(int *)(param_1 + 0xa0);
  lVar3 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98));
  if ((longlong)local_38 != lVar3 + -1) {
    local_38 = local_38 + 1;
  }
  uVar4 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)local_38);
  iVar1 = FUN_180616340(uVar4,*(undefined8 *)(param_2 + 0x20));
  if ((iVar1 == 0) && ((*param_4 & 0x20) != 0)) {
    *param_4 = *param_4 | 0x1c;
    *param_3 = uVar4;
  }
  else {
    do {
      local_38 = local_38 + 1;
      iVar1 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98));
      if (iVar1 <= local_38) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) == 0) {
          return;
        }
        local_28 = 0;
        while( true ) {
          uVar6 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x10));
          if (uVar6 <= local_28) {
            return;
          }
          uVar4 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x10),local_28);
          uVar5 = FUN_180594d10(uVar4);
          iVar1 = FUN_180595190(uVar5,uVar2);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_180616340(uVar4,*(undefined8 *)(param_2 + 0x20)), iVar1 == 0)) break;
          local_28 = local_28 + 1;
        }
        *param_3 = uVar4;
        *param_4 = *param_4 | 4;
        return;
      }
      uVar4 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)local_38);
      uVar5 = FUN_180594d10(uVar4);
      iVar1 = FUN_180595190(uVar5,uVar2);
    } while ((iVar1 != 0) ||
            (iVar1 = FUN_180616340(uVar4,*(undefined8 *)(param_2 + 0x20)), iVar1 != 0));
    *param_4 = *param_4 | 0xc;
    *param_3 = uVar4;
  }
  return;
}


/* address=1806132e0 name=FUN_1806132e0 */

undefined8 FUN_1806132e0(longlong param_1,longlong param_2,uint param_3,uint *param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong local_18;
  
  if ((*(uint *)(param_2 + 0x30) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 0x2c) & 0x10) == 0) {
      if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
        return 0;
      }
    }
    else if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
      return 0;
    }
    *param_4 = *(uint *)(param_2 + 0x34);
    for (local_18 = 0; uVar2 = FUN_180611e00(*(undefined8 *)(param_1 + 0x50)), local_18 < uVar2;
        local_18 = local_18 + 1) {
      puVar3 = (undefined8 *)FUN_180611e20(*(undefined8 *)(param_1 + 0x50),local_18);
      iVar1 = FUN_180614560(puVar3,param_2,param_3);
      if ((iVar1 != 0) &&
         ((*(longlong *)(param_2 + 0x28) == 0 ||
          (iVar1 = FUN_180614330(*puVar3,**(undefined8 **)(param_2 + 0x28)), iVar1 != 0)))) {
        *param_4 = *param_4 & *(uint *)(puVar3 + 3);
        return 1;
      }
    }
    if (((*(longlong *)(param_2 + 0x28) == 0) || (**(longlong **)(param_2 + 0x28) == 0)) &&
       ((param_3 & 0x20) != 0)) {
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


/* address=180613440 name=FUN_180613440 */

int FUN_180613440(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int local_f8;
  undefined local_e8 [24];
  undefined8 local_d0;
  undefined8 local_b0;
  undefined8 local_50;
  undefined8 *local_20;
  
  if (param_1[0x19] == 0) {
    iVar1 = FUN_180611380(local_e8,*param_1,param_2,param_1[2]);
    if (iVar1 == 0) {
      local_f8 = -1;
    }
    else {
      local_d0 = param_1[3];
      FUN_180611d10(local_e8,param_1[4]);
      local_b0 = param_1[7];
      local_20 = param_1;
      local_f8 = FUN_180610860(local_e8);
      if (0 < local_f8) {
        local_f8 = FUN_180613550(param_1,param_1[0x13],local_50);
      }
      FUN_180611750(local_e8);
    }
  }
  else {
    local_f8 = 0;
  }
  return local_f8;
}


/* address=180613550 name=FUN_180613550 */

bool FUN_180613550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_18060fec0(param_2);
  uVar3 = FUN_18060fee0(param_2,lVar2 + -1);
  lVar2 = FUN_18060fec0(param_3);
  uVar4 = FUN_18060fee0(param_3,lVar2 + -1);
  iVar1 = FUN_180595140(uVar3,uVar4);
  return iVar1 == 0;
}


/* address=1806135d0 name=FUN_1806135d0 */

undefined4 FUN_1806135d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int local_28;
  longlong local_20;
  longlong local_18;
  
  iVar1 = FUN_18060fec0(*(undefined8 *)(param_1 + 0x98));
  *(int *)(param_1 + 0xa0) = iVar1 + -1;
  local_28 = iVar1 + -1;
  local_20 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)local_28);
  iVar2 = (**(code **)(param_1 + 0x48))(param_1,local_20,local_20);
  local_18 = local_20;
  if (iVar2 == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) != 0) goto LAB_180613805;
    if (local_28 < 1) {
      *(undefined4 *)(param_1 + 0xa4) = 0x15;
      *(longlong *)(param_1 + 0xa8) = local_20;
      uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar3;
    }
    local_28 = iVar1 + -2;
    *(int *)(param_1 + 0xa0) = local_28;
    local_18 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)local_28);
  }
  while( true ) {
    if (local_28 < 0) {
      return 1;
    }
    *(int *)(param_1 + 0xa0) = local_28;
    if ((local_18 != local_20) || ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x4000) != 0))
    {
      lVar4 = FUN_180594d30(local_20);
      if (lVar4 == 0) {
        *(undefined4 *)(param_1 + 0xa4) = 6;
        *(longlong *)(param_1 + 0xa8) = local_20;
        iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = FUN_18050bc30(local_18,lVar4);
        if (iVar1 < 1) {
          *(undefined4 *)(param_1 + 0xa4) = 7;
          *(longlong *)(param_1 + 0xa8) = local_18;
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar1 == 0) {
            FUN_18050d980(lVar4);
            return 0;
          }
        }
      }
      FUN_18050d980(lVar4);
    }
LAB_180613805:
    iVar1 = FUN_180614a30(param_1,local_18);
    if (iVar1 == 0) break;
    *(longlong *)(param_1 + 0xb0) = local_20;
    *(longlong *)(param_1 + 0xa8) = local_18;
    iVar1 = (**(code **)(param_1 + 0x38))(1,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    local_28 = local_28 + -1;
    if (-1 < local_28) {
      local_20 = local_18;
      local_18 = FUN_18060fee0(*(undefined8 *)(param_1 + 0x98),(longlong)local_28);
    }
  }
  return 0;
}


/* address=1806138c0 name=FUN_1806138c0 */

bool FUN_1806138c0(longlong param_1,uint *param_2)

{
  int iVar1;
  uint local_18;
  
  iVar1 = FUN_180616b20(param_1);
  if (iVar1 != 0) {
    local_18 = (uint)((*(uint *)(param_1 + 0x2c) & 0x2000) != 0);
    *param_2 = local_18;
  }
  return iVar1 != 0;
}


/* address=180613920 name=FUN_180613920 */

undefined8 FUN_180613920(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong local_28;
  undefined8 local_18;
  
  local_18 = 0;
  uVar2 = FUN_180594d10(param_2);
  lVar3 = (**(code **)(param_1 + 0x78))(param_1,uVar2);
  if (lVar3 == 0) {
    local_18 = 0;
  }
  else {
    for (local_28 = 0; uVar4 = FUN_18060fec0(lVar3), local_28 < uVar4; local_28 = local_28 + 1) {
      local_18 = FUN_18060fee0(lVar3,local_28);
      iVar1 = FUN_180595140(local_18,param_2);
      if (iVar1 == 0) break;
    }
    uVar4 = FUN_18060fec0(lVar3);
    if (local_28 < uVar4) {
      FUN_180515dc0(local_18);
    }
    else {
      local_18 = 0;
    }
    FUN_18060ff70(lVar3,FUN_180515e60);
  }
  return local_18;
}


/* address=180613a80 name=FUN_180613a80 */

undefined8 FUN_180613a80(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_38;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar2 = FUN_180594d10(param_1);
  local_38 = -1;
  while( true ) {
    local_38 = FUN_18060f110(uVar2,0xd,local_38);
    if (local_38 == -1) {
      return 0;
    }
    local_18 = FUN_18060f220(uVar2,local_38);
    local_10 = FUN_18060f810(local_18);
    iVar1 = FUN_1805a7720(&local_20,local_10);
    if (iVar1 < 0) break;
    iVar1 = FUN_18061f1a0(local_20,(longlong)iVar1);
    FUN_18058f610(local_20);
    if (iVar1 != 0) {
      return 0x43;
    }
  }
  return 0x11;
}


/* address=180613b50 name=FUN_180613b50 */

void FUN_180613b50(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  (**(code **)(param_1 + 0x38))(0,param_1);
  return;
}


/* address=180613bb0 name=FUN_180613bb0 */

bool FUN_180613bb0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  char *_Str;
  size_t sVar3;
  ulonglong local_30;
  
  uVar2 = FUN_18060fe20(*(undefined8 *)(param_2 + 0x30));
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_18058f610(*(undefined8 *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  local_30 = 0;
  while( true ) {
    if (uVar2 <= local_30) {
      return uVar2 == 0;
    }
    _Str = (char *)FUN_18060fe40(*(undefined8 *)(param_2 + 0x30),local_30);
    sVar3 = strlen(_Str);
    iVar1 = FUN_18061e8e0(param_1,_Str,sVar3,*(undefined4 *)(param_2 + 0x38),param_2 + 0x40);
    if (0 < iVar1) break;
    local_30 = local_30 + 1;
  }
  return true;
}


/* address=180613cb0 name=FUN_180613cb0 */

undefined8 FUN_180613cb0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_10;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x200000) != 0) {
    return 1;
  }
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0xb8) = param_2;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 2) == 0) {
    local_10 = FUN_18060fe00(0);
  }
  else {
    local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
  }
  uVar3 = FUN_1805eaa40(param_2);
  iVar1 = FUN_180610150(uVar3,local_10);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0xf;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (0 < iVar1) {
    if (param_3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0xb;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  lVar4 = FUN_1805eaa60(param_2);
  if (lVar4 != 0) {
    uVar3 = FUN_1805eaa60(param_2);
    iVar1 = FUN_180610150(uVar3,local_10);
    if (iVar1 == 0) {
      if (param_3 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xa4) = 0x10;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if ((iVar1 < 0) && ((*(uint *)(param_1 + 0xc0) & 2) == 0)) {
      if (param_3 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xa4) = 0xc;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  return 1;
}


/* address=180613ea0 name=FUN_180613ea0 */

bool FUN_180613ea0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  int *param_5,undefined4 *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  int local_38;
  int local_34;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = *param_5;
  local_44 = 0;
  local_18 = *(undefined8 *)(param_1 + 0xa8);
  local_50 = 0;
  local_28 = 0;
  local_20 = 0;
  local_40 = 0;
  do {
    uVar3 = FUN_180610070(param_7);
    if (uVar3 <= local_40) {
      if (local_50 != 0) {
        if (*param_2 != 0) {
          FUN_1805966c0(*param_2);
        }
        *param_2 = local_50;
        *param_4 = local_20;
        *param_5 = local_58;
        *param_6 = local_44;
        FUN_1805ea9e0(local_50);
        if (*param_3 != 0) {
          FUN_1805966c0(*param_3);
          *param_3 = 0;
        }
        FUN_180612f80(param_1,param_3,param_5,local_50,param_7);
      }
      return 0x1bf < local_58;
    }
    local_30 = FUN_180610090(param_7,local_40);
    local_48 = *param_6;
    iVar1 = FUN_180612c00(param_1,&local_28,&local_48,local_30,local_18);
    if ((local_58 <= iVar1) && (iVar1 != 0)) {
      if ((iVar1 == local_58) && (local_50 != 0)) {
        local_10 = FUN_1805eaa40(local_30);
        uVar4 = FUN_1805eaa40(local_50);
        iVar2 = FUN_1805130f0(&local_38,&local_34,uVar4,local_10);
        if ((iVar2 == 0) || ((local_38 < 1 && (local_34 < 1)))) goto LAB_180613f0b;
      }
      local_50 = local_30;
      local_20 = local_28;
      local_44 = local_48;
      local_58 = iVar1;
    }
LAB_180613f0b:
    local_40 = local_40 + 1;
  } while( true );
}


/* address=180614110 name=FUN_180614110 */

undefined8 FUN_180614110(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_20;
  longlong local_18;
  
  iVar1 = FUN_180618fd0(param_1,param_3,0xffffffff);
  if (iVar1 < 0) {
    local_18 = 0;
  }
  else {
    iVar2 = FUN_180618fd0(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return 0;
    }
    uVar3 = FUN_180619090(param_1,iVar1);
    local_18 = FUN_180618770(uVar3);
  }
  iVar1 = FUN_180618fd0(param_2,param_3,0xffffffff);
  if (iVar1 < 0) {
    local_20 = 0;
  }
  else {
    iVar2 = FUN_180618fd0(param_2,param_3,iVar1);
    if (iVar2 != -1) {
      return 0;
    }
    uVar3 = FUN_180619090(param_2,iVar1);
    local_20 = FUN_180618770(uVar3);
  }
  if ((local_18 == 0) && (local_20 == 0)) {
    uVar3 = 1;
  }
  else if ((local_18 == 0) || (local_20 == 0)) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_180624b00(local_18,local_20);
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=180614240 name=FUN_180614240 */

undefined8 FUN_180614240(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar2 = 0;
  }
  else if (*(longlong *)(param_2 + 0x38) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805eaa80(param_1);
    uVar3 = FUN_1805eaa80(param_2);
    iVar1 = FUN_180595190(uVar3,uVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_180614110(param_1,param_2,0x5a);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = FUN_180614110(param_1,param_2,0x302);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          iVar1 = FUN_180512600(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x38));
          if (iVar1 < 1) {
            iVar1 = FUN_180512600(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
            if (iVar1 < 1) {
              uVar2 = 0;
            }
            else {
              uVar2 = 1;
            }
          }
          else {
            uVar2 = 0;
          }
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* address=180614330 name=FUN_180614330 */

undefined8 FUN_180614330(int *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_28 = 0;
  local_30 = 0;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 1;
  }
  if (*param_1 == 1) {
    if (*(longlong *)(param_1 + 4) == 0) {
      return 0;
    }
    if (*param_2 == 1) {
      if (*(longlong *)(param_2 + 4) == 0) {
        return 0;
      }
      iVar1 = FUN_180595190(*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_2 + 4));
      if (iVar1 != 0) {
        return 0;
      }
      return 1;
    }
    local_28 = *(longlong *)(param_1 + 4);
    local_30 = *(undefined8 *)(param_2 + 2);
  }
  else if (*param_2 == 1) {
    if (*(longlong *)(param_2 + 4) == 0) {
      return 0;
    }
    local_30 = *(undefined8 *)(param_1 + 2);
    local_28 = *(longlong *)(param_2 + 4);
  }
  if (local_28 == 0) {
    for (local_38 = 0; uVar2 = FUN_180611db0(*(undefined8 *)(param_1 + 2)), local_38 < uVar2;
        local_38 = local_38 + 1) {
      uVar4 = FUN_180611dd0(*(undefined8 *)(param_1 + 2),local_38);
      for (local_20 = 0; uVar2 = FUN_180611db0(*(undefined8 *)(param_2 + 2)), local_20 < uVar2;
          local_20 = local_20 + 1) {
        uVar5 = FUN_180611dd0(*(undefined8 *)(param_2 + 2),local_20);
        iVar1 = FUN_1805aa3e0(uVar4,uVar5);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  else {
    for (local_38 = 0; uVar2 = FUN_180611db0(local_30), local_38 < uVar2; local_38 = local_38 + 1) {
      piVar3 = (int *)FUN_180611dd0(local_30,local_38);
      if ((*piVar3 == 4) &&
         (iVar1 = FUN_180595190(local_28,*(undefined8 *)(piVar3 + 2)), iVar1 == 0)) {
        return 1;
      }
    }
  }
  return 0;
}


/* address=180614560 name=FUN_180614560 */

bool FUN_180614560(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int *piVar4;
  bool bVar5;
  ulonglong local_20;
  
  uVar2 = FUN_1805eaa80(param_2);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    bVar5 = (param_3 & 0x20) != 0;
  }
  else {
    for (local_20 = 0; uVar3 = FUN_180611db0(*(undefined8 *)(param_1 + 0x10)), local_20 < uVar3;
        local_20 = local_20 + 1) {
      piVar4 = (int *)FUN_180611dd0(*(undefined8 *)(param_1 + 0x10),local_20);
      if ((*piVar4 == 4) && (iVar1 = FUN_180595190(*(undefined8 *)(piVar4 + 2),uVar2), iVar1 == 0))
      {
        return true;
      }
    }
    bVar5 = false;
  }
  return bVar5;
}


/* address=180614a30 name=FUN_180614a30 */

undefined8 FUN_180614a30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_10;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x200000) == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 2) == 0) {
      local_10 = FUN_18060fe00(0);
    }
    else {
      local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8);
    }
    uVar3 = FUN_18050bb90(param_2);
    iVar1 = FUN_180610150(uVar3,local_10);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0xd;
      *(undefined8 *)(param_1 + 0xa8) = param_2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (0 < iVar1) {
      *(undefined4 *)(param_1 + 0xa4) = 9;
      *(undefined8 *)(param_1 + 0xa8) = param_2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar3 = FUN_18050bbb0(param_2);
    iVar1 = FUN_180610150(uVar3,local_10);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0xe;
      *(undefined8 *)(param_1 + 0xa8) = param_2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0xa4) = 10;
      *(undefined8 *)(param_1 + 0xa8) = param_2;
      iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}


/* address=180614bd0 name=FUN_180614bd0 */

undefined4 FUN_180614bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_10 [2];
  
  iVar1 = FUN_180590ed0(param_1,local_10,param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_18053e010(local_10[0],param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=180614c40 name=FUN_180614c40 */

char * FUN_180614c40(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  int local_38;
  int local_34;
  char *local_20;
  
  local_38 = FUN_1805458c0(param_1);
  pcVar4 = (char *)FUN_18058f4e0((longlong)(local_38 * 0x10 + 3));
  if (pcVar4 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    local_20 = pcVar4;
    if (*(int *)(param_1 + 2) != 0) {
      *pcVar4 = '-';
      local_20 = pcVar4 + 1;
    }
    iVar2 = FUN_18053fc40(param_1);
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


/* address=180614dd0 name=FUN_180614dd0 */

void FUN_180614dd0(undefined8 param_1,undefined8 param_2)

{
  FUN_180615a50(param_1,param_2,&LAB_1806157a0,FUN_18058fa90);
  return;
}


/* address=180614e10 name=FUN_180614e10 */

longlong FUN_180614e10(undefined8 param_1)

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
  iVar2 = FUN_180590610(local_38,0x10);
  if ((iVar2 != 0) && (iVar2 = FUN_180591010(local_38,0), iVar2 != 0)) {
    iVar2 = FUN_18053fc40(param_1);
    if (iVar2 == 0) {
      local_68 = FUN_18053d910(param_1);
      if (local_68 == 0) goto LAB_180615068;
      while (iVar2 = FUN_18053fc40(local_68), iVar2 == 0) {
        local_60 = FUN_18053f430(local_68);
        if (local_60 == 0xffffffffffffffff) goto LAB_180615068;
        iVar2 = FUN_18053fc40(local_68);
        local_58 = (uint)(iVar2 == 0);
        local_48 = local_58;
        local_74 = 0;
        for (; (local_74 < 0x13 && ((local_48 != 0 || (local_60 != 0)))); local_60 = local_60 / 10)
        {
          iVar2 = FUN_180591010(local_38);
          if (iVar2 == 0) goto LAB_180615068;
          local_74 = local_74 + 1;
        }
        if (local_60 != 0) {
          FID_conflict__assert
                    (u_word____0_180980140,u_D__a_1_s_target_x86_64_pc_window_180980040,0x10d);
        }
      }
    }
    else {
      iVar2 = FUN_180591010(local_38,0x30);
      if (iVar2 == 0) goto LAB_180615068;
    }
    iVar2 = FUN_18053dc90(param_1);
    if (((iVar2 == 0) || (iVar2 = FUN_180591010(local_38,0x2d), iVar2 != 0)) &&
       (iVar2 = FUN_180590740(local_38,&local_50,&local_40), iVar2 != 0)) {
      for (local_70 = 0; local_70 < local_40 / 2; local_70 = local_70 + 1) {
        uVar1 = *(undefined *)(local_50 + local_70);
        *(undefined *)(local_50 + local_70) = *(undefined *)(local_50 + ((local_40 - 1) - local_70))
        ;
        *(undefined *)(local_50 + ((local_40 - 1) - local_70)) = uVar1;
      }
      FUN_18053d880(local_68,local_40 % 2);
      return local_50;
    }
  }
LAB_180615068:
  FUN_18053d880(local_68);
  FUN_1805906d0(local_38);
  return 0;
}


/* address=180615090 name=FUN_180615090 */

void FUN_180615090(undefined8 param_1,undefined8 param_2)

{
  FUN_180615a50(param_1,param_2,&LAB_180615940,FUN_18058fa50);
  return;
}


/* address=1806151c0 name=FUN_1806151c0 */

undefined4 FUN_1806151c0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  int local_28;
  int local_24;
  undefined4 local_18;
  
  bVar1 = false;
  local_18 = 0;
  if (((*(int *)(param_2 + 2) == 0) || (iVar2 = FUN_18058c840(param_1,&DAT_180980154,1), iVar2 == 1)
      ) && ((iVar2 = FUN_18053fc40(param_2), iVar2 == 0 ||
            (iVar2 = FUN_18058c840(param_1,&DAT_180980158,1), iVar2 == 1)))) {
    local_28 = FUN_1805458c0(param_2);
    while (local_28 = local_28 + -1, -1 < local_28) {
      for (local_24 = 0x3c; -1 < local_24; local_24 = local_24 + -4) {
        uVar3 = *(ulonglong *)(*param_2 + (longlong)local_28 * 8) >> ((byte)local_24 & 0x3f);
        if ((bVar1) || ((uVar3 & 0xf) != 0)) {
          iVar2 = FUN_18058c840(param_1,"0123456789abcdef" + (int)((uint)uVar3 & 0xf),1);
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


/* address=180615760 name=FUN_180615760 */

undefined8 FUN_180615760(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180615a50 name=FUN_180615a50 */

int FUN_180615a50(longlong *param_1,char *param_2,code *param_3,code *param_4)

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
        local_18 = FUN_18053d800();
        if (local_18 == 0) {
          return 0;
        }
      }
      else {
        local_18 = *param_1;
        FUN_18053db30(local_18);
      }
      iVar2 = (*param_3)(local_18,local_res10,local_28);
      if (iVar2 == 0) {
        if (*param_1 == 0) {
          FUN_18053d880(local_18);
        }
        iVar1 = 0;
      }
      else {
        FUN_180545910(local_18);
        iVar2 = FUN_18053fc40(local_18);
        if (iVar2 == 0) {
          *(uint *)(local_18 + 0x10) = local_24;
        }
        *param_1 = local_18;
      }
    }
  }
  return iVar1;
}


/* address=180615bd0 name=FUN_180615bd0 */

bool FUN_180615bd0(wchar_t *param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  int local_24;
  undefined8 local_20;
  wchar_t *local_18 [3];
  
  uVar1 = wcstoul(param_1,local_18,2);
  if ((uVar1 == 0) || (iVar2 = FUN_18059f890(local_18,&local_24), iVar2 == 0)) {
    FUN_18050f6f0(3,0,0x75,s_D__a_1_s_target_x86_64_pc_window_180980260,0x1a);
    bVar5 = false;
  }
  else if (local_24 == 0) {
    local_20 = FUN_18059e7c0(local_18);
    uVar3 = FUN_18059e7a0(local_18);
    lVar4 = FUN_18053dcd0(uVar3,local_20,param_2);
    bVar5 = lVar4 != 0;
  }
  else {
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_1809802e0,0x1f);
    bVar5 = false;
  }
  return bVar5;
}


/* address=180615cb0 name=FUN_180615cb0 */

undefined8 FUN_180615cb0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined local_38 [56];
  
  iVar1 = FUN_18053dc90(param_2);
  if (iVar1 != 0) {
    FUN_18050f6f0(3,0,0x6d,s_D__a_1_s_target_x86_64_pc_window_180980360,0x29);
    return 0;
  }
  iVar1 = FUN_180590d60(param_1,local_38,2);
  if ((iVar1 != 0) &&
     ((uVar3 = FUN_18053daa0(param_2), (int)((uVar3 & 0xffffffff) % 8) != 0 ||
      (iVar1 = FUN_180591010(local_38,0), iVar1 != 0)))) {
    uVar2 = FUN_18053db00(param_2);
    iVar1 = FUN_180614bd0(local_38,uVar2,param_2);
    if ((iVar1 != 0) && (iVar1 = FUN_180590820(param_1), iVar1 != 0)) {
      return 1;
    }
  }
  FUN_18050f6f0(3,0,0x76,s_D__a_1_s_target_x86_64_pc_window_1809803e0,0x34);
  return 0;
}


/* address=180615dd0 name=FUN_180615dd0 */

void FUN_180615dd0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180615df0 name=FUN_180615df0 */

void FUN_180615df0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180615e20 name=FUN_180615e20 */

void FUN_180615e20(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_180615da0,param_2);
  return;
}


/* address=180615e90 name=FUN_180615e90 */

void FUN_180615e90(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180615eb0 name=FUN_180615eb0 */

void FUN_180615eb0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180615ee0 name=FUN_180615ee0 */

void FUN_180615ee0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180615f00 name=FUN_180615f00 */

void FUN_180615f00(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180615fb0 name=FUN_180615fb0 */

void FUN_180615fb0(undefined8 param_1)

{
  FUN_180514e40(param_1);
  return;
}


/* address=180615fd0 name=FUN_180615fd0 */

void FUN_180615fd0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180615ff0 name=FUN_180615ff0 */

void FUN_180615ff0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180616020 name=FUN_180616020 */

void FUN_180616020(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_180615f30,param_2);
  return;
}


/* address=180616050 name=FUN_180616050 */

void FUN_180616050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180515500(param_1,param_2,param_3,&LAB_180615f60);
  return;
}


/* address=180616090 name=FUN_180616090 */

void FUN_180616090(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=1806160c0 name=FUN_1806160c0 */

void FUN_1806160c0(undefined8 param_1)

{
  FUN_1805159a0(param_1,&LAB_180615f60);
  return;
}


/* address=1806160f0 name=FUN_1806160f0 */

undefined8 FUN_1806160f0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_180616b20(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180617cc0(param_1);
  }
  return uVar2;
}


/* address=180616120 name=FUN_180616120 */

undefined8 FUN_180616120(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_180616b20(param_1);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_2 == -1) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_1806167b0(param_2);
    if (iVar1 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      lVar3 = FUN_1806166e0(iVar1);
      uVar2 = (**(code **)(lVar3 + 0x10))(lVar3,param_1,param_3);
    }
  }
  return uVar2;
}


/* address=1806161a0 name=FUN_1806161a0 */

undefined8 FUN_1806161a0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_18 [6];
  
  uVar1 = FUN_180618750(param_1);
  local_18[0] = FUN_1805a8b30(uVar1);
  if (local_18[0] == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_18067b078(local_18,&DAT_1807ae400,10,4,&LAB_180617a60);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


/* address=180616210 name=FUN_180616210 */

bool FUN_180616210(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1806167b0(param_2);
  if (iVar1 != -1) {
    *param_1 = param_2;
  }
  else {
    FUN_18050f6f0(0x14,0,0x85,s_D__a_1_s_target_x86_64_pc_window_180980730,0x9c);
  }
  return iVar1 != -1;
}


/* address=180616270 name=FUN_180616270 */

int FUN_180616270(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_180594cf0(param_2);
  uVar3 = FUN_180594d10(param_1);
  iVar1 = FUN_180595190(uVar3,uVar2);
  if (iVar1 == 0) {
    iVar1 = FUN_180616b20(param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_180616b20(param_2), iVar1 == 0)) {
      iVar1 = 1;
    }
    else if ((*(longlong *)(param_2 + 0x48) == 0) ||
            (iVar1 = FUN_180616340(param_1,*(undefined8 *)(param_2 + 0x48)), iVar1 == 0)) {
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


/* address=180616340 name=FUN_180616340 */

undefined8 FUN_180616340(longlong param_1,longlong *param_2)

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
       (iVar2 = FUN_180624b00(*param_2,*(undefined8 *)(param_1 + 0x40)), iVar2 != 0)) {
      return 0x1e;
    }
    if (param_2[2] != 0) {
      uVar3 = FUN_180594ee0(param_1);
      iVar2 = FUN_180512600(uVar3,param_2[2]);
      if (iVar2 != 0) {
        return 0x1f;
      }
    }
    if (param_2[1] != 0) {
      local_20 = 0;
      lVar1 = param_2[1];
      for (local_28 = 0; uVar4 = FUN_180615e90(lVar1), local_28 < uVar4; local_28 = local_28 + 1) {
        piVar5 = (int *)FUN_180615eb0(lVar1,local_28);
        if (*piVar5 == 4) {
          local_20 = *(longlong *)(piVar5 + 2);
          break;
        }
      }
      if (local_20 != 0) {
        uVar3 = FUN_180594cf0(param_1);
        iVar2 = FUN_180595190(local_20,uVar3);
        if (iVar2 != 0) {
          return 0x1f;
        }
      }
    }
  }
  return 0;
}


/* address=1806166b0 name=FUN_1806166b0 */

longlong FUN_1806166b0(void)

{
  longlong lVar1;
  
  if (DAT_180992860 == 0) {
    lVar1 = 9;
  }
  else {
    lVar1 = FUN_180615fd0(DAT_180992860);
    lVar1 = lVar1 + 9;
  }
  return lVar1;
}


/* address=1806166e0 name=FUN_1806166e0 */

undefined * FUN_1806166e0(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    puVar1 = (undefined *)0x0;
  }
  else if (param_1 < 9) {
    puVar1 = &DAT_180980580 + (longlong)param_1 * 0x30;
  }
  else {
    puVar1 = (undefined *)FUN_180615ff0(DAT_180992860,(longlong)param_1 + -9);
  }
  return puVar1;
}


/* address=1806167b0 name=FUN_1806167b0 */

ulonglong FUN_1806167b0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_48;
  int local_40 [16];
  
  if ((param_1 < 1) || (9 < param_1)) {
    if (DAT_180992860 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      local_40[0] = param_1;
      iVar1 = FUN_180616050(DAT_180992860,&local_48,local_40);
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


/* address=180616b20 name=FUN_180616b20 */

bool FUN_180616b20(longlong param_1)

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
  
  FUN_18059e210(param_1 + 0x90);
  local_28 = *(uint *)(param_1 + 0x2c) & 0x100;
  FUN_18059e250(param_1 + 0x90);
  if (local_28 == 0) {
    FUN_18059e230(param_1 + 0x90);
    if ((*(uint *)(param_1 + 0x2c) & 0x100) == 0) {
      local_18 = param_1 + 0x68;
      uVar3 = FUN_180532290();
      iVar1 = FUN_18050c100(param_1,uVar3,local_18,0);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      iVar1 = FUN_18050b600(param_1);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x40;
      }
      local_60 = (int *)FUN_180619150(param_1,0x57,&local_68,0);
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
          uVar2 = FUN_180512850(*(undefined8 *)(local_60 + 2));
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
        FUN_180652400(local_60);
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
      }
      local_58 = (int *)FUN_180619150(param_1,0x53,&local_68,0);
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
        FUN_1805117f0(local_58);
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
      local_38 = FUN_180619150(param_1,0x7e,&local_68,0);
      if (local_38 == 0) {
        if (local_68 != -1) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
        }
      }
      else {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 4;
        local_40 = 0;
        while (uVar4 = FUN_180615dd0(local_38), local_40 < uVar4) {
          uVar3 = FUN_180615df0(local_38,local_40);
          local_64 = FUN_1805a8b30(uVar3);
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
        FUN_180615e20(local_38,FUN_1805eec50);
      }
      local_30 = (int *)FUN_180619150(param_1,0x47,&local_68,0);
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
        FUN_1805117f0(local_30);
      }
      uVar3 = FUN_180619150(param_1,0x52,&local_68,0);
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      if ((*(longlong *)(param_1 + 0x40) == 0) && (local_68 != -1)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      uVar3 = FUN_180619150(param_1,0x5a,&local_68,0);
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      if ((*(longlong *)(param_1 + 0x48) == 0) && (local_68 != -1)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      local_10 = FUN_180594cf0(param_1);
      uVar3 = FUN_180594d10(param_1);
      iVar1 = FUN_180595190(uVar3,local_10);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x20;
        iVar1 = FUN_180616340(param_1,*(undefined8 *)(param_1 + 0x48));
        if ((iVar1 == 0) &&
           (((*(uint *)(param_1 + 0x2c) & 2) == 0 || ((*(uint *)(param_1 + 0x30) & 4) != 0)))) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x2000;
        }
      }
      uVar3 = FUN_180619150(param_1,0x55,&local_68,0);
      *(undefined8 *)(param_1 + 0x58) = uVar3;
      if ((*(longlong *)(param_1 + 0x58) == 0) && (local_68 != -1)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      uVar3 = FUN_180619150(param_1,0x29a,&local_68,0);
      *(undefined8 *)(param_1 + 0x60) = uVar3;
      if ((*(longlong *)(param_1 + 0x60) == 0) && (local_68 != -1)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      iVar1 = FUN_180617c10(param_1);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x80;
      }
      local_68 = 0;
      while (iVar1 = FUN_180618df0(param_1), local_68 < iVar1) {
        local_20 = FUN_180618ee0(param_1,local_68);
        uVar3 = FUN_180618750(local_20);
        iVar1 = FUN_1805a8b30(uVar3);
        if (iVar1 == 0x359) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x1000;
        }
        iVar1 = FUN_1806187a0(local_20);
        if ((iVar1 != 0) && (iVar1 = FUN_1806161a0(local_20), iVar1 == 0)) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x200;
          break;
        }
        local_68 = local_68 + 1;
      }
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x100;
      FUN_18059e270(param_1 + 0x90);
      bVar5 = (*(uint *)(param_1 + 0x2c) & 0x80) == 0;
    }
    else {
      FUN_18059e270(param_1 + 0x90);
      bVar5 = (*(uint *)(param_1 + 0x2c) & 0x80) == 0;
    }
  }
  else {
    bVar5 = (*(uint *)(param_1 + 0x2c) & 0x80) == 0;
  }
  return bVar5;
}


/* address=180617580 name=FUN_180617580 */

undefined8 FUN_180617580(undefined8 param_1,longlong param_2,int param_3)

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
      uVar1 = FUN_180617cc0(param_2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* address=180617690 name=FUN_180617690 */

ulonglong FUN_180617690(longlong param_1,int param_2)

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
      uVar1 = FUN_180617cc0(param_1);
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


/* address=1806179f0 name=FUN_1806179f0 */

void FUN_1806179f0(longlong param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 1) != 0)) {
    if ((*(uint *)(param_1 + 8) & 2) != 0) {
      FUN_18058f610(*(undefined8 *)(param_1 + 0x18));
      FUN_18058f610(*(undefined8 *)(param_1 + 0x20));
    }
    FUN_18058f610(param_1);
  }
  return;
}


/* address=180617aa0 name=FUN_180617aa0 */

undefined8 FUN_180617aa0(undefined8 param_1,int **param_2)

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
      uVar2 = FUN_180615e90(param_2[2]);
      if (uVar2 <= local_28) break;
      piVar3 = (int *)FUN_180615eb0(param_2[2],local_28);
      if (*piVar3 == 4) {
        local_20 = *(longlong *)(piVar3 + 2);
        break;
      }
      local_28 = local_28 + 1;
    }
    if (local_20 == 0) {
      local_20 = FUN_180594cf0(param_1);
    }
    uVar1 = FUN_1805aac80(*param_2,local_20);
  }
  return uVar1;
}


/* address=180617c10 name=FUN_180617c10 */

undefined8 FUN_180617c10(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_18 [2];
  ulonglong local_10;
  
  uVar2 = FUN_180619150(param_1,0x67,local_18,0);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  if ((*(longlong *)(param_1 + 0x50) == 0) && (local_18[0] != -1)) {
    uVar2 = 0;
  }
  else {
    local_10 = 0;
    while (uVar3 = FUN_180615ee0(*(undefined8 *)(param_1 + 0x50)), local_10 < uVar3) {
      uVar2 = FUN_180615f00(*(undefined8 *)(param_1 + 0x50),local_10);
      iVar1 = FUN_180617aa0(param_1,uVar2);
      if (iVar1 == 0) {
        return 0;
      }
      local_10 = local_10 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}


/* address=180617cc0 name=FUN_180617cc0 */

undefined4 FUN_180617cc0(longlong param_1)

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


/* address=180617d40 name=FUN_180617d40 */

int FUN_180617d40(int *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  
  iVar1 = *param_1;
  if ((iVar1 == 1) || (iVar1 == 5)) {
    local_14 = *param_1;
  }
  else if (iVar1 == 6) {
    if (*(longlong *)(param_1 + 2) == 0) {
      local_14 = 0;
    }
    else {
      local_14 = *param_1;
    }
  }
  else if (*(longlong *)(param_1 + 2) == 0) {
    local_10 = 0;
    local_14 = local_10;
  }
  else {
    local_14 = *param_1;
  }
  return local_14;
}


/* address=180617dd0 name=FUN_180617dd0 */

void FUN_180617dd0(int *param_1,int param_2,longlong param_3)

{
  int local_14;
  
  FUN_180618120(param_1);
  *param_1 = param_2;
  if (param_2 == 1) {
    if (param_3 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = 0xff;
    }
    param_1[2] = local_14;
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


/* address=180617e80 name=FUN_180617e80 */

undefined8 FUN_180617e80(undefined8 param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_3 == 0) || (param_2 == 1)) {
    FUN_180617dd0(param_1,param_2,param_3);
  }
  else if (param_2 == 6) {
    lVar1 = FUN_1805a8890(param_3);
    if (lVar1 == 0) {
      return 0;
    }
    FUN_180617dd0(param_1,6,lVar1);
  }
  else {
    lVar1 = FUN_180510690(param_3);
    if (lVar1 == 0) {
      return 0;
    }
    FUN_180617dd0(param_1,param_2,lVar1);
  }
  return 1;
}


/* address=180617f40 name=FUN_180617f40 */

int FUN_180617f40(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

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
      iVar1 = FUN_1805a8a70(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2),param_3,
                            param_4,0xffffffff);
      break;
    default:
      iVar1 = FUN_180510770(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    }
  }
  return iVar1;
}


/* address=1806180b0 name=FUN_1806180b0 */

undefined8 FUN_1806180b0(int *param_1)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    if (param_1[2] == 0) {
      local_10 = 0;
    }
    else {
      local_10 = 0xff;
    }
  }
  else if (iVar1 == 5) {
    local_10 = 0;
  }
  else if (iVar1 == 6) {
    local_10 = *(undefined8 *)(param_1 + 2);
  }
  else {
    local_10 = *(undefined8 *)(param_1 + 2);
  }
  return local_10;
}


/* address=180618120 name=FUN_180618120 */

void FUN_180618120(int *param_1)

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
    FUN_1805eec50(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
  }
  else {
    FUN_1805105e0(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
  }
  return;
}


/* address=1806181b0 name=FUN_1806181b0 */

undefined8 FUN_1806181b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  longlong local_20;
  longlong local_18;
  
  local_20 = FUN_180587900(*(undefined8 *)(param_1 + 0x10));
  if (local_20 == 0) {
    FUN_18050f6f0(0xc,0,0x6c,s_D__a_1_s_target_x86_64_pc_window_1809807b0,0x50);
    return 0;
  }
  iVar1 = FUN_18050dd40(local_20);
  if (iVar1 == 6) {
    iVar1 = FUN_1805ed230(*(undefined8 *)(param_1 + 0x10),&local_30);
    if (iVar1 == 0) {
      return 0;
    }
    if (local_30 == 6) {
      uVar4 = FUN_180652990(param_1,param_2);
      return uVar4;
    }
  }
  iVar1 = FUN_18050dd40(local_20);
  if (iVar1 == 0x3b5) {
    uVar4 = FUN_1805a8e80(0x3b5);
    uVar4 = FUN_1805955f0(param_2,uVar4,0xffffffff,0);
  }
  else {
    local_18 = FUN_180532b50(param_1);
    if (local_18 == 0) {
      FUN_18050f6f0(0xc,0,0x6c,s_D__a_1_s_target_x86_64_pc_window_180980830,0x67);
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_180532ad0(local_18);
      iVar1 = FUN_1806185b0(uVar2);
      if (iVar1 != 0) {
        uVar3 = FUN_18050dd40(local_20);
        iVar1 = FUN_18060fd70(&local_2c,uVar2,uVar3);
        if (iVar1 != 0) {
          iVar1 = FUN_18050dd40(local_20);
          if (iVar1 == 6) {
            local_34 = 5;
          }
          else {
            local_34 = 0xffffffff;
          }
          local_28 = local_34;
          uVar4 = FUN_1805a8e80(local_2c);
          FUN_1805955f0(param_2,uVar4,local_28,0);
          return 1;
        }
      }
      FUN_18050f6f0(0xc,0,0x6f,s_D__a_1_s_target_x86_64_pc_window_1809808b0,0x6f);
      uVar4 = 0;
    }
  }
  return uVar4;
}


/* address=180618380 name=FUN_180618380 */

undefined8 FUN_180618380(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  int local_24;
  int local_20 [2];
  longlong local_18;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  iVar1 = FUN_1805a8b30(*param_2);
  iVar2 = FUN_18060fcd0(iVar1,&local_24,local_20);
  if (iVar2 == 0) {
    FUN_18050f6f0(0xc,0,0xb8,s_D__a_1_s_target_x86_64_pc_window_180980930,CONCAT44(uVar4,0x81));
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_18050dd40(param_3);
    if (local_20[0] == iVar2) {
      iVar2 = FUN_1806185b0(local_24);
      if (iVar2 == 0) {
        FUN_18050f6f0(0xc,0,0x6f,s_D__a_1_s_target_x86_64_pc_window_180980a30,CONCAT44(uVar4,0x8d));
        uVar3 = 0;
      }
      else if (local_24 == 0) {
        if (iVar1 == 0x390) {
          uVar3 = FUN_180652740(param_1,param_2,param_3);
        }
        else if (iVar1 == 0x3b5) {
          if (param_2[1] == 0) {
            uVar3 = FUN_180568630(param_1,0,0,0,param_3);
          }
          else {
            FUN_18050f6f0(0xb,0,0x88,s_D__a_1_s_target_x86_64_pc_window_180980ab0,
                          CONCAT44(uVar4,0x98));
            uVar3 = 0;
          }
        }
        else {
          FUN_18050f6f0(0xc,0,0xb8,s_D__a_1_s_target_x86_64_pc_window_180980b30,CONCAT44(uVar4,0x9d)
                       );
          uVar3 = 0;
        }
      }
      else if ((param_2[1] == 0) || (*(int *)param_2[1] == 5)) {
        local_18 = FUN_1805f40a0(local_24);
        if (local_18 == 0) {
          FUN_18050f6f0(0xc,0,0xb7,s_D__a_1_s_target_x86_64_pc_window_180980c30,CONCAT44(uVar4,0xae)
                       );
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_180568630(param_1,0,local_18,0,param_3);
        }
      }
      else {
        FUN_18050f6f0(0xb,0,0x88,s_D__a_1_s_target_x86_64_pc_window_180980bb0,CONCAT44(uVar4,0xa7));
        uVar3 = 0;
      }
    }
    else {
      FUN_18050f6f0(0xc,0,0xbd,s_D__a_1_s_target_x86_64_pc_window_1809809b0,CONCAT44(uVar4,0x87));
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=1806185b0 name=FUN_1806185b0 */

undefined8 FUN_1806185b0(int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 4) || (param_1 == 0x101)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=1806185e0 name=FUN_1806185e0 */

undefined8
FUN_1806185e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1805a8e80(param_2);
  if (lVar1 == 0) {
    FUN_18050f6f0(0xb,0,0x81,s_D__a_1_s_target_x86_64_pc_window_180980d30,0xc9);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180618660(param_1,lVar1,param_3,param_4);
  }
  return uVar2;
}


/* address=180618660 name=FUN_180618660 */

longlong FUN_180618660(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong local_18;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    local_18 = FUN_1805a9be0();
    if (local_18 == 0) {
      return 0;
    }
  }
  else {
    local_18 = *param_1;
  }
  iVar1 = FUN_1806187d0(local_18,param_2);
  if (((iVar1 == 0) || (iVar1 = FUN_180618840(local_18,param_3), iVar1 == 0)) ||
     (iVar1 = FUN_180618890(local_18,param_4), iVar1 == 0)) {
    if ((param_1 == (longlong *)0x0) || (local_18 != *param_1)) {
      FUN_1805a9c00(local_18);
    }
    local_18 = 0;
  }
  else if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    *param_1 = local_18;
  }
  return local_18;
}


/* address=180618750 name=FUN_180618750 */

undefined8 FUN_180618750(undefined8 *param_1)

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


/* address=180618770 name=FUN_180618770 */

undefined8 FUN_180618770(longlong param_1)

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


/* address=1806187a0 name=FUN_1806187a0 */

undefined8 FUN_1806187a0(longlong param_1)

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


/* address=1806187d0 name=FUN_1806187d0 */

bool FUN_1806187d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    bVar2 = false;
  }
  else {
    FUN_1805eec50(*param_1);
    lVar1 = FUN_1805a8890(param_2);
    *param_1 = lVar1;
    bVar2 = *param_1 != 0;
  }
  return bVar2;
}


/* address=180618840 name=FUN_180618840 */

undefined8 FUN_180618840(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_18;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 == 0) {
      local_18 = 0xffffffff;
    }
    else {
      local_18 = 0xff;
    }
    *(undefined4 *)(param_1 + 8) = local_18;
    uVar1 = 1;
  }
  return uVar1;
}


/* address=180618890 name=FUN_180618890 */

undefined8 FUN_180618890(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_180624b30(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 2),*param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


/* address=1806188f0 name=FUN_1806188f0 */

void FUN_1806188f0(void)

{
  FUN_180514f00();
  return;
}


/* address=180618910 name=FUN_180618910 */

void FUN_180618910(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180618930 name=FUN_180618930 */

void FUN_180618930(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180618960 name=FUN_180618960 */

void FUN_180618960(undefined8 param_1)

{
  FUN_180515030(param_1);
  return;
}


/* address=180618980 name=FUN_180618980 */

void FUN_180618980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180515100(param_1,param_2,param_3);
  return;
}


/* address=1806189c0 name=FUN_1806189c0 */

void FUN_1806189c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1805152e0(param_1,param_2);
  return;
}


/* address=1806189f0 name=FUN_1806189f0 */

undefined8 FUN_1806189f0(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180618910(param_1);
  }
  return uVar1;
}


/* address=180618a20 name=FUN_180618a20 */

undefined8 FUN_180618a20(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1805a8e80(param_2);
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_180618a70(param_1,lVar1,param_3);
  }
  return uVar2;
}


/* address=180618a70 name=FUN_180618a70 */

int FUN_180618a70(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int local_res18;
  
  if (param_1 != 0) {
    local_res18 = param_3 + 1;
    if (local_res18 < 0) {
      local_res18 = 0;
    }
    iVar1 = FUN_180618910(param_1);
    for (; local_res18 < iVar1; local_res18 = local_res18 + 1) {
      puVar3 = (undefined8 *)FUN_180618930(param_1,(longlong)local_res18);
      iVar2 = FUN_1805a8a70(*puVar3,param_2);
      if (iVar2 == 0) {
        return local_res18;
      }
    }
  }
  return -1;
}


/* address=180618b20 name=FUN_180618b20 */

int FUN_180618b20(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_res18;
  uint local_18;
  
  if (param_1 != 0) {
    local_res18 = param_3 + 1;
    if (local_res18 < 0) {
      local_res18 = 0;
    }
    local_18 = (uint)(param_2 != 0);
    iVar1 = FUN_180618910(param_1);
    for (; local_res18 < iVar1; local_res18 = local_res18 + 1) {
      uVar3 = FUN_180618930(param_1,(longlong)local_res18);
      uVar2 = FUN_1806187a0(uVar3);
      if (uVar2 == local_18) {
        return local_res18;
      }
    }
  }
  return -1;
}


/* address=180618bf0 name=FUN_180618bf0 */

undefined8 FUN_180618bf0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (-1 < param_2)) &&
     (uVar1 = FUN_180618910(param_1), (ulonglong)(longlong)param_2 < uVar1)) {
    uVar2 = FUN_180618930(param_1,(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=180618c50 name=FUN_180618c50 */

undefined8 FUN_180618c50(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (-1 < param_2)) &&
     (uVar1 = FUN_180618910(param_1), (ulonglong)(longlong)param_2 < uVar1)) {
    uVar2 = FUN_1806189c0(param_1,(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=180618cb0 name=FUN_180618cb0 */

longlong FUN_180618cb0(longlong *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  int local_res18;
  longlong local_20;
  longlong local_18;
  
  local_18 = 0;
  local_20 = 0;
  bVar1 = false;
  if (param_1 == (longlong *)0x0) {
    FUN_18050f6f0(0xb,0,0x43,s_D__a_1_s_target_x86_64_pc_window_180980cb0,0x9a);
  }
  else {
    if (*param_1 == 0) {
      local_20 = FUN_1806188f0();
      if (local_20 == 0) goto LAB_180618dcc;
      bVar1 = true;
    }
    else {
      local_20 = *param_1;
    }
    iVar2 = FUN_180618910(local_20);
    local_res18 = iVar2;
    if ((param_3 <= iVar2) && (local_res18 = param_3, param_3 < 0)) {
      local_res18 = iVar2;
    }
    local_18 = FUN_1805a9ca0(param_2);
    if ((local_18 != 0) &&
       (lVar3 = FUN_180618980(local_20,local_18,(longlong)local_res18), lVar3 != 0)) {
      if (*param_1 != 0) {
        return local_20;
      }
      *param_1 = local_20;
      return local_20;
    }
  }
LAB_180618dcc:
  FUN_1805a9c00(local_18);
  if (bVar1) {
    FUN_180618960(local_20);
  }
  return 0;
}


/* address=180618df0 name=FUN_180618df0 */

void FUN_180618df0(longlong *param_1)

{
  FUN_1806189f0(*(undefined8 *)(*param_1 + 0x48));
  return;
}


/* address=180618e20 name=FUN_180618e20 */

void FUN_180618e20(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_180618a20(*(undefined8 *)(*param_1 + 0x48),param_2,param_3);
  return;
}


/* address=180618ee0 name=FUN_180618ee0 */

void FUN_180618ee0(longlong *param_1,undefined4 param_2)

{
  FUN_180618bf0(*(undefined8 *)(*param_1 + 0x48),param_2);
  return;
}


/* address=180618fa0 name=FUN_180618fa0 */

void FUN_180618fa0(longlong *param_1)

{
  FUN_1806189f0(*(undefined8 *)(*param_1 + 0x30));
  return;
}


/* address=180618fd0 name=FUN_180618fd0 */

void FUN_180618fd0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_180618a20(*(undefined8 *)(*param_1 + 0x30),param_2,param_3);
  return;
}


/* address=180619090 name=FUN_180619090 */

void FUN_180619090(longlong *param_1,undefined4 param_2)

{
  FUN_180618bf0(*(undefined8 *)(*param_1 + 0x30),param_2);
  return;
}


/* address=1806190f0 name=FUN_1806190f0 */

bool FUN_1806190f0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_180618cb0(*param_1 + 0x30,param_2,param_3);
  return lVar1 != 0;
}


/* address=180619150 name=FUN_180619150 */

void FUN_180619150(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180649860(*(undefined8 *)(*param_1 + 0x48),param_2,param_3,param_4);
  return;
}


/* address=1806191f0 name=FUN_1806191f0 */

void FUN_1806191f0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180649860(*(undefined8 *)(*param_1 + 0x30),param_2,param_3,param_4);
  return;
}


/* address=180619240 name=FUN_180619240 */

void FUN_180619240(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_180649a60(*param_1 + 0x30,param_2,param_3,param_4,param_5);
  return;
}


/* address=180619440 name=FUN_180619440 */

void FUN_180619440(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180649860(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  return;
}


/* address=180619520 name=FUN_180619520 */

undefined8 FUN_180619520(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_18061b1a0(param_1);
  cVar1 = FUN_180521840(param_1 + 8);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_180521460(param_1 + 8);
    uVar3 = FUN_180521460(lVar2 + 0x20);
    uVar3 = FUN_18061c870(uVar3,param_2);
  }
  return uVar3;
}


/* address=180619590 name=FUN_180619590 */

void FUN_180619590(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_18061b200(param_1);
  uVar1 = FUN_180521460(param_1 + 0xe8);
  FUN_18061ca60(uVar1,param_2);
  return;
}


/* address=180619630 name=FUN_180619630 */

undefined8 FUN_180619630(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_18061b1a0(param_1);
  cVar1 = FUN_180521840(param_1 + 8);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_180521460(param_1 + 8);
    uVar3 = FUN_180521460(lVar2 + 0x20);
    uVar3 = FUN_18061ca60(uVar3,param_2);
  }
  return uVar3;
}


/* address=180619710 name=FUN_180619710 */

void FUN_180619710(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_18061b200(param_1);
  uVar1 = FUN_180521460(param_1 + 0xe8);
  FUN_18061cd10(uVar1,param_2);
  return;
}


/* address=1806198d0 name=FUN_1806198d0 */

void FUN_1806198d0(undefined8 param_1)

{
  FUN_18061b200(param_1);
  FUN_180619590(param_1,0);
  return;
}


/* address=180619a70 name=FUN_180619a70 */

bool FUN_180619a70(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined local_10 [16];
  
  FUN_18061b200(param_1);
  FUN_18052e690(local_10,param_1 + 0x10);
  uVar2 = FUN_180521460(param_1 + 0xe8);
  iVar1 = FUN_18061cdb0(uVar2);
  if (iVar1 != 0) {
    lVar3 = FUN_180521460(param_1 + 0xe8);
    *param_2 = *(undefined8 *)(lVar3 + 0x10);
    FUN_18052e6f0(local_10);
  }
  else {
    *param_2 = 0;
    FUN_18052e6f0(local_10);
  }
  return iVar1 != 0;
}


/* address=18061a6b0 name=FUN_18061a6b0 */

undefined8 FUN_18061a6b0(undefined4 param_1)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 1:
  case 0x11:
  case 0x41:
  case 0x42:
    uVar1 = 0x50;
    break;
  case 2:
  case 3:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x21:
    uVar1 = 0x30;
    break;
  case 4:
  case 5:
  case 6:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x1b:
  case 0x1c:
  case 0x3e:
  case 0x3f:
  case 0x40:
    uVar1 = 0x2a;
    break;
  case 7:
  case 8:
    uVar1 = 0x33;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    uVar1 = 0x2d;
    break;
  case 0x17:
    uVar1 = 0x2c;
    break;
  case 0x1a:
    uVar1 = 0x2b;
    break;
  default:
    uVar1 = 0x2e;
    break;
  case 0x32:
    uVar1 = 0x28;
  }
  return uVar1;
}


/* address=18061a810 name=FUN_18061a810 */

undefined8 FUN_18061a810(void)

{
  return 0;
}


/* address=18061ad50 name=FUN_18061ad50 */

undefined8 FUN_18061ad50(longlong param_1)

{
  undefined8 uVar1;
  undefined local_20 [8];
  undefined8 local_18;
  
  FUN_18061b200(param_1);
  FUN_18052e690(local_20,param_1 + 0x10);
  uVar1 = FUN_180521460(param_1 + 200);
  local_18 = FUN_18061d300(uVar1,param_1 + 0xd0);
  FUN_18052e6f0(local_20);
  return local_18;
}


/* address=18061af30 name=FUN_18061af30 */

_Facet_base * FUN_18061af30(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  local_38 [8];
  undefined local_30 [8];
  _Facet_base *local_28;
  _Facet_base *local_20;
  undefined local_18 [24];
  
  if (param_3 < 0) {
    FUN_18050f6f0(0x10,0,0x44,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_x509.cc"
                  ,0x3fa);
    local_28 = (_Facet_base *)0x0;
  }
  else {
    FUN_18059e730(local_18,*param_2,(longlong)param_3);
    uVar2 = FUN_18062ce40(local_30,local_18,&PTR_LAB_1807ae430,0);
    FUN_180521660(local_38,uVar2);
    FUN_180521af0(local_30);
    cVar1 = FUN_180521840(local_38);
    if (cVar1 == '\0') {
      local_28 = (_Facet_base *)0x0;
      FUN_180521af0(local_38);
    }
    else {
      if (param_1 != (undefined8 *)0x0) {
        FUN_1805b68a0(*param_1);
        uVar2 = FUN_180521460(local_38);
        *param_1 = uVar2;
      }
      uVar2 = FUN_18059e7a0(local_18);
      *param_2 = uVar2;
      local_20 = std::
                 unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 ::release(local_38);
      FUN_180521af0(local_38);
      local_28 = local_20;
    }
  }
  return local_28;
}


/* address=18061b1a0 name=FUN_18061b1a0 */

void FUN_18061b1a0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_180521460(param_1 + 0x68);
    if (*(undefined ***)(lVar1 + 8) != &PTR_LAB_1807ae430) {
      FID_conflict__assert
                (L"ssl == NULL || ssl->ctx->x509_method == &ssl_crypto_x509_method",
                 L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_x509.cc"
                 ,0xa3);
    }
  }
  return;
}


/* address=18061b200 name=FUN_18061b200 */

void FUN_18061b200(longlong param_1)

{
  if ((param_1 != 0) && (*(undefined ***)(param_1 + 8) != &PTR_LAB_1807ae430)) {
    FID_conflict__assert
              (L"ctx == NULL || ctx->x509_method == &ssl_crypto_x509_method",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_x509.cc"
               ,0xa9);
  }
  return;
}


/* address=18061b250 name=FUN_18061b250 */

undefined8 FUN_18061b250(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined local_18 [24];
  
  local_20 = 0;
  iVar1 = FUN_1805160a0(param_2,&local_20);
  if (iVar1 < 1) {
    FUN_1805b3320(param_1,0);
  }
  else {
    uVar2 = FUN_180586ca0(local_20,(longlong)iVar1,0);
    FUN_180521630(local_18,uVar2);
    FUN_18058f610(local_20);
    FUN_180521660(param_1,local_18);
    FUN_1805b3120(local_18);
  }
  return param_1;
}


/* address=18061b2f0 name=FUN_18061b2f0 */

undefined8 FUN_18061b2f0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined local_18 [24];
  
  uVar2 = FUN_180521810();
  FUN_180521630(local_18,uVar2);
  cVar1 = FUN_180521840(local_18);
  if (cVar1 != '\0') {
    uVar2 = FUN_180521460(local_18);
    lVar3 = FUN_1805bea50(uVar2,0);
    if (lVar3 != 0) {
      FUN_180521660(param_1,local_18);
      FUN_1805222b0(local_18);
      return param_1;
    }
  }
  FUN_1805b3320(param_1,0);
  FUN_1805222b0(local_18);
  return param_1;
}


/* address=18061b380 name=FUN_18061b380 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined FUN_18061b380(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 local_res10 [3];
  undefined local_c0 [8];
  uint local_b8;
  undefined local_b0 [8];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined local_88 [8];
  undefined local_80 [8];
  undefined8 local_78;
  undefined local_70 [8];
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined local_48 [8];
  undefined local_40 [8];
  undefined local_38 [16];
  undefined local_28 [24];
  
  local_res10[0] = param_2;
  FUN_180523350(local_c0);
  cVar1 = FUN_1805232d0(param_1 + 8,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_180521810();
    FUN_1805222f0(local_c0,uVar2);
    cVar1 = FUN_180521840(local_c0);
    if (cVar1 == '\0') {
      FUN_1805222b0(local_c0);
      return 0;
    }
    uVar2 = FUN_180521460(param_1 + 8);
    local_a0 = FUN_1805218b0(uVar2,0);
    local_98 = local_48;
    uVar2 = FUN_1805b30c0(local_88,local_a0);
    local_90 = FUN_180521660(local_98,uVar2);
    uVar2 = FUN_180521460(local_c0);
    cVar1 = FUN_1805b3410(uVar2,local_90);
    local_b8 = (uint)(cVar1 == '\0');
    FUN_1805b3120(local_88);
    if (cVar1 == '\0') {
      FUN_1805222b0(local_c0);
      return 0;
    }
  }
  local_a8 = local_res10;
  FUN_1805b34e0(local_58,local_res10[0]);
  FUN_1805b3610(local_38,*local_a8);
  while( true ) {
    puVar4 = local_38;
    puVar5 = local_28;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_1805b3560(local_58,local_28);
    if (cVar1 == '\0') {
      uVar2 = FUN_1805214c0(local_c0);
      FUN_1805b3480(param_1 + 8,uVar2);
      FUN_1805222b0(local_c0);
      return 1;
    }
    local_78 = FUN_1805b35c0(local_58);
    cVar1 = FUN_180521840(local_c0);
    if (cVar1 == '\0') {
      uVar2 = FUN_18061b2f0(local_80);
      FUN_1805b3480(local_c0,uVar2);
      FUN_1805222b0(local_80);
      cVar1 = FUN_180521840(local_c0);
      if (cVar1 == '\0') {
        FUN_1805222b0(local_c0);
        return 0;
      }
    }
    uVar2 = FUN_18061b250(local_70,local_78);
    FUN_180521660(local_b0,uVar2);
    FUN_1805b3120(local_70);
    cVar1 = FUN_180521840(local_b0);
    if (cVar1 == '\0') break;
    local_68 = local_40;
    uVar2 = FUN_1805214c0(local_b0);
    local_60 = FUN_180521660(local_68,uVar2);
    uVar2 = FUN_180521460(local_c0);
    cVar1 = FUN_1805b3410(uVar2,local_60);
    if (cVar1 == '\0') break;
    FUN_1805b3120(local_b0);
    FUN_1805b35f0(local_58);
  }
  FUN_1805b3120(local_b0);
  FUN_1805222b0(local_c0);
  return 0;
}


/* address=18061b6b0 name=FUN_18061b6b0 */

void FUN_18061b6b0(longlong param_1)

{
  FUN_180515e60(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


/* address=18061b6e0 name=FUN_18061b6e0 */

void FUN_18061b6e0(longlong param_1)

{
  FUN_18061d900(*(undefined8 *)(param_1 + 0x10),FUN_180515e60);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


/* address=18061b860 name=FUN_18061b860 */

void FUN_18061b860(longlong param_1)

{
  FUN_18061b6b0(param_1);
  FUN_18061b6e0(param_1);
  FUN_180515e60(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


/* address=18061c3c0 name=FUN_18061c3c0 */

void FUN_18061c3c0(longlong param_1)

{
  FUN_18061d900(*(undefined8 *)(param_1 + 0x58),FUN_180513890);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}


/* address=18061c780 name=FUN_18061c780 */

void FUN_18061c780(longlong param_1)

{
  FUN_18061d900(*(undefined8 *)(param_1 + 0xd0),FUN_180513890);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}


/* address=18061c870 name=FUN_18061c870 */

undefined FUN_18061c870(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined local_30 [8];
  undefined local_28 [8];
  undefined *local_20;
  undefined local_18 [24];
  
  if (param_2 == 0) {
    FUN_18050f6f0(0x10,0,0x43,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_x509.cc"
                  ,0x2db);
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_18061b250(local_28,param_2);
    FUN_180521660(local_30,uVar3);
    FUN_1805b3120(local_28);
    cVar1 = FUN_180521840(local_30);
    if (cVar1 == '\0') {
      FUN_1805b3120(local_30);
      uVar2 = 0;
    }
    else {
      local_20 = local_18;
      uVar3 = FUN_1805214c0(local_30);
      uVar3 = FUN_180521660(local_20,uVar3);
      uVar2 = FUN_1805b2150(param_1,uVar3);
      FUN_1805b3120(local_30);
    }
  }
  return uVar2;
}


/* address=18061c950 name=FUN_18061c950 */

bool FUN_18061c950(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FID_conflict__assert
              (L"cert->x509_method",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_x509.cc"
               ,0x2f7);
  }
  if ((*(longlong *)(param_1 + 0x18) == 0) && (cVar1 = operator==<>(param_1 + 8,0), cVar1 == '\0'))
  {
    uVar2 = FUN_180521460(param_1 + 8);
    lVar3 = FUN_1805218b0(uVar2,0);
    if (lVar3 == 0) {
      bVar4 = true;
    }
    else {
      uVar2 = FUN_180516020(lVar3);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      bVar4 = *(longlong *)(param_1 + 0x18) != 0;
    }
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}


/* address=18061ca20 name=FUN_18061ca20 */

undefined8 FUN_18061ca20(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x18) == 0) && (iVar1 = FUN_18061c950(param_1), iVar1 == 0)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x18);
}


/* address=18061ca60 name=FUN_18061ca60 */

bool FUN_18061ca60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_18061b380(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_18061d900(param_2,FUN_180515e60);
    FUN_18061b6e0(param_1);
  }
  return cVar1 != '\0';
}


/* address=18061cac0 name=FUN_18061cac0 */

bool FUN_18061cac0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_18061b380(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_18061b6e0(param_1);
  }
  return cVar1 != '\0';
}


/* address=18061cb10 name=FUN_18061cb10 */

uint FUN_18061cb10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined local_68 [8];
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined local_50 [8];
  undefined *local_48;
  undefined8 local_40;
  undefined local_38 [8];
  undefined *local_30;
  undefined8 local_28;
  undefined local_20 [8];
  undefined local_18 [24];
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FID_conflict__assert
              (L"cert->x509_method",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_x509.cc"
               ,0x333);
  }
  uVar3 = FUN_18061b250(local_50,param_2);
  FUN_180521660(local_68,uVar3);
  FUN_1805b3120(local_50);
  cVar1 = FUN_180521840(local_68);
  if (cVar1 == '\0') {
    local_60 = 0;
    FUN_1805b3120(local_68);
  }
  else {
    cVar1 = FUN_1805232d0(param_1 + 8,0);
    if (cVar1 == '\0') {
      uVar3 = FUN_18061b2f0(local_38);
      FUN_1805b3480(param_1 + 8,uVar3);
      FUN_1805222b0(local_38);
      cVar1 = FUN_180521840(param_1 + 8);
      if (cVar1 != '\0') {
        local_30 = local_18;
        uVar3 = FUN_1805214c0(local_68);
        local_28 = FUN_180521660(local_30,uVar3);
        uVar3 = FUN_180521460(param_1 + 8);
        cVar1 = FUN_1805b3410(uVar3,local_28);
        if (cVar1 != '\0') {
          local_54 = 1;
          FUN_1805b3120(local_68);
          return local_54;
        }
      }
      FUN_1805222f0(param_1 + 8,0);
      local_58 = 0;
      FUN_1805b3120(local_68);
      local_60 = local_58;
    }
    else {
      local_48 = local_20;
      uVar3 = FUN_1805214c0(local_68);
      local_40 = FUN_180521660(local_48,uVar3);
      uVar3 = FUN_180521460(param_1 + 8);
      bVar2 = FUN_1805b3410(uVar3,local_40);
      local_5c = (uint)bVar2;
      FUN_1805b3120(local_68);
      local_60 = local_5c;
    }
  }
  return local_60;
}


/* address=18061cd10 name=FUN_18061cd10 */

bool FUN_18061cd10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18061cb10(param_1,param_2);
  if (iVar1 != 0) {
    FUN_180515e60(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = param_2;
    FUN_18061b6e0(param_1);
  }
  return iVar1 != 0;
}


/* address=18061cd70 name=FUN_18061cd70 */

bool FUN_18061cd70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18061cb10(param_1,param_2);
  if (iVar1 != 0) {
    FUN_18061b6e0(param_1);
  }
  return iVar1 != 0;
}


/* address=18061cdb0 name=FUN_18061cdb0 */

undefined4 FUN_18061cdb0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  _Facet_base *p_Var4;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  local_58 [8];
  ulonglong local_50;
  undefined local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined local_18 [24];
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FID_conflict__assert
              (L"cert->x509_method",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_x509.cc"
               ,0x3a7);
  }
  if ((*(longlong *)(param_1 + 0x10) == 0) && (cVar1 = operator==<>(param_1 + 8,0), cVar1 == '\0'))
  {
    uVar2 = FUN_180521460(param_1 + 8);
    uVar3 = FUN_180521890(uVar2);
    if (1 < uVar3) {
      uVar2 = FUN_180521810();
      FUN_180521630(local_58,uVar2);
      cVar1 = FUN_180521840(local_58);
      if (cVar1 == '\0') {
        local_40 = 0;
        FUN_18061db30(local_58);
        return local_40;
      }
      local_50 = 1;
      while( true ) {
        uVar2 = FUN_180521460(param_1 + 8);
        uVar3 = FUN_180521890(uVar2);
        if (uVar3 <= local_50) {
          p_Var4 = std::
                   unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   ::release(local_58);
          *(_Facet_base **)(param_1 + 0x10) = p_Var4;
          local_38 = 1;
          FUN_18061db30(local_58);
          return local_38;
        }
        uVar2 = FUN_180521460(param_1 + 8);
        local_30 = FUN_1805218b0(uVar2,local_50);
        uVar2 = FUN_180516020(local_30);
        FUN_180521630(local_48,uVar2);
        cVar1 = FUN_180521840(local_48);
        if (cVar1 == '\0') break;
        local_28 = local_18;
        uVar2 = FUN_1805214c0(local_48);
        local_20 = FUN_180521660(local_28,uVar2);
        uVar2 = FUN_180521460(local_58);
        cVar1 = FUN_18061dc20(uVar2,local_20);
        if (cVar1 == '\0') break;
        FUN_18061d9d0(local_48);
        local_50 = local_50 + 1;
      }
      local_3c = 0;
      FUN_18061d9d0(local_48);
      FUN_18061db30(local_58);
      return local_3c;
    }
  }
  return 1;
}


/* address=18061d0a0 name=FUN_18061d0a0 */

void FUN_18061d0a0(undefined8 param_1,undefined8 param_2)

{
  FUN_180513930(param_2);
  return;
}


/* address=18061d0f0 name=FUN_18061d0f0 */

undefined * FUN_18061d0f0(void)

{
  return &LAB_18061d0d0;
}


/* address=18061d110 name=FUN_18061d110 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_18061d110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined local_98 [8];
  int local_90;
  undefined local_88 [8];
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined local_48 [8];
  undefined local_40 [24];
  undefined local_28 [24];
  
  local_res10 = param_2;
  local_res18 = param_3;
  uVar2 = FUN_180521810();
  FUN_180521630(local_98,uVar2);
  cVar1 = FUN_180521840(local_98);
  if (cVar1 == '\0') {
    FUN_1805222b0(local_98);
  }
  else {
    local_78 = &local_res10;
    FUN_1805b34e0(local_58,local_res10);
    FUN_1805b3610(local_40,*local_78);
    while( true ) {
      puVar4 = local_40;
      puVar5 = local_28;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      cVar1 = FUN_1805b3560(local_58,local_28);
      if (cVar1 == '\0') {
        uVar2 = FUN_1805214c0(local_98);
        FUN_1805b3480(param_1,uVar2);
        FUN_1805222b0(local_98);
        return;
      }
      local_70 = FUN_1805b35c0(local_58);
      local_80 = 0;
      local_90 = FUN_180513900(local_70,&local_80);
      if (local_90 < 0) {
        FUN_1805222b0(local_98);
        return;
      }
      uVar2 = FUN_180586ca0(local_80,(longlong)local_90,local_res18);
      FUN_180521630(local_88,uVar2);
      FUN_18058f610(local_80);
      cVar1 = FUN_180521840(local_88);
      if (cVar1 == '\0') break;
      local_68 = local_48;
      uVar2 = FUN_1805214c0(local_88);
      local_60 = FUN_180521660(local_68,uVar2);
      uVar2 = FUN_180521460(local_98);
      cVar1 = FUN_1805b3410(uVar2,local_60);
      if (cVar1 == '\0') break;
      FUN_1805b3120(local_88);
      FUN_1805b35f0(local_58);
    }
    FUN_1805b3120(local_88);
    FUN_1805222b0(local_98);
  }
  return;
}


/* address=18061d300 name=FUN_18061d300 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

_Facet_base * FUN_18061d300(longlong param_1,_Facet_base **param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  _Facet_base *p_Var4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  longlong local_res8;
  _Facet_base **local_res10;
  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
  local_a8 [8];
  undefined8 local_a0;
  undefined local_98 [8];
  longlong *local_90;
  longlong local_88;
  _Facet_base *local_80;
  longlong local_78;
  undefined *local_70;
  undefined8 local_68;
  _Facet_base *local_60;
  _Facet_base *local_58;
  undefined local_50 [16];
  undefined local_40 [8];
  undefined local_38 [16];
  undefined local_28 [24];
  
  if (param_1 == 0) {
    local_80 = (_Facet_base *)0x0;
  }
  else if (*param_2 == (_Facet_base *)0x0) {
    local_res8 = param_1;
    local_res10 = param_2;
    uVar3 = FUN_180521810();
    FUN_180521630(local_a8,uVar3);
    cVar1 = FUN_180521840(local_a8);
    if (cVar1 == '\0') {
      local_80 = (_Facet_base *)0x0;
      FUN_18061dcd0(local_a8);
    }
    else {
      local_90 = &local_res8;
      FUN_1805b34e0(local_50,local_res8);
      FUN_1805b3610(local_38,*local_90);
      while( true ) {
        puVar6 = local_38;
        puVar7 = local_28;
        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar1 = FUN_1805b3560(local_50,local_28);
        if (cVar1 == '\0') {
          p_Var4 = std::
                   unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                   ::release(local_a8);
          *local_res10 = p_Var4;
          local_58 = *local_res10;
          FUN_18061dcd0(local_a8);
          return local_58;
        }
        local_a0 = FUN_1805b35c0(local_50);
        local_88 = FUN_180586f70(local_a0);
        uVar2 = FUN_180586f90(local_a0);
        uVar3 = FUN_1805138c0(0,&local_88,uVar2);
        FUN_180521630(local_98,uVar3);
        cVar1 = FUN_180521840(local_98);
        if (cVar1 == '\0') break;
        local_78 = FUN_180586f70(local_a0);
        lVar5 = FUN_180586f90(local_a0);
        if (local_88 != local_78 + lVar5) break;
        local_70 = local_40;
        uVar3 = FUN_1805214c0(local_98);
        local_68 = FUN_180521660(local_70,uVar3);
        uVar3 = FUN_180521460(local_a8);
        cVar1 = FUN_18061dd10(uVar3,local_68);
        if (cVar1 == '\0') break;
        FUN_18061daf0(local_98);
        FUN_1805b35f0(local_50);
      }
      local_60 = (_Facet_base *)0x0;
      FUN_18061daf0(local_98);
      FUN_18061dcd0(local_a8);
      local_80 = local_60;
    }
  }
  else {
    local_80 = *param_2;
  }
  return local_80;
}


/* address=18061d550 name=FUN_18061d550 */

undefined4 FUN_18061d550(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined local_48 [8];
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  undefined local_10 [16];
  
  if (param_2 == 0) {
    local_38 = 0;
  }
  else {
    local_28 = 0;
    uVar2 = FUN_180594d10(param_2);
    local_40 = FUN_180513900(uVar2,&local_28);
    if (local_40 < 0) {
      local_38 = 0;
    }
    else {
      uVar2 = FUN_180586ca0(local_28,(longlong)local_40,param_3);
      FUN_180521630(local_48,uVar2);
      FUN_18058f610(local_28);
      cVar1 = FUN_180521840(local_48);
      if (cVar1 == '\0') {
        local_38 = 0;
        FUN_1805b3120(local_48);
      }
      else {
        local_3c = 0;
        cVar1 = operator==<>(param_1,0);
        if (cVar1 != '\0') {
          uVar2 = FUN_180521810();
          FUN_1805222f0(param_1,uVar2);
          local_3c = 1;
          cVar1 = operator==<>(param_1,0);
          if (cVar1 != '\0') {
            local_34 = 0;
            FUN_1805b3120(local_48);
            return local_34;
          }
        }
        local_20 = local_10;
        uVar2 = FUN_1805214c0(local_48);
        local_18 = FUN_180521660(local_20,uVar2);
        uVar2 = FUN_180521460(param_1);
        cVar1 = FUN_1805b3410(uVar2,local_18);
        if (cVar1 == '\0') {
          if (local_3c != 0) {
            FUN_1805222f0(param_1,0);
          }
          local_30 = 0;
          FUN_1805b3120(local_48);
          local_38 = local_30;
        }
        else {
          local_2c = 1;
          FUN_1805b3120(local_48);
          local_38 = local_2c;
        }
      }
    }
  }
  return local_38;
}


/* address=18061d8a0 name=FUN_18061d8a0 */

undefined8 FUN_18061d8a0(longlong *param_1,longlong param_2,int param_3)

{
  FUN_1805248e0(*param_1);
  *param_1 = param_2;
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_1805248b0(param_2);
  }
  return 1;
}


/* address=18061d900 name=FUN_18061d900 */

void FUN_18061d900(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_1805b3010,param_2);
  return;
}


/* address=18061d930 name=FUN_18061d930 */

void FUN_18061d930(undefined8 param_1)

{
  FUN_1805157e0(param_1);
  return;
}


/* address=18061d950 name=FUN_18061d950 */

void FUN_18061d950(undefined8 param_1)

{
  FUN_180515e60(param_1);
  return;
}


/* address=18061d970 name=FUN_18061d970 */

undefined8 FUN_18061d970(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  if (param_2 != 0) {
    FUN_180515dc0(param_2);
  }
  uVar1 = FUN_180521630(local_18,param_2);
  FUN_180521660(param_1,uVar1);
  FUN_18061d9d0(local_18);
  return param_1;
}


/* address=18061d9d0 name=FUN_18061d9d0 */

void FUN_18061d9d0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1805214c0(param_1);
    FUN_18061de00(uVar1,*param_1);
  }
  return;
}


/* address=18061da10 name=FUN_18061da10 */

void FUN_18061da10(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1805214c0(param_1);
    FUN_18061de00(uVar2,p_Var1);
  }
  return;
}


/* address=18061da60 name=FUN_18061da60 */

undefined8 FUN_18061da60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_180521460(param_2);
  uVar1 = FUN_18061d970(local_18,uVar1);
  FUN_180521660(param_1,uVar1);
  FUN_18061d9d0(local_18);
  return param_1;
}


/* address=18061dab0 name=FUN_18061dab0 */

void FUN_18061dab0(undefined8 param_1)

{
  FUN_180513890(param_1);
  return;
}


/* address=18061dad0 name=FUN_18061dad0 */

void FUN_18061dad0(undefined8 param_1)

{
  FUN_180611340(param_1);
  return;
}


/* address=18061daf0 name=FUN_18061daf0 */

void FUN_18061daf0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1805214c0(param_1);
    FUN_18061dde0(uVar1,*param_1);
  }
  return;
}


/* address=18061db30 name=FUN_18061db30 */

void FUN_18061db30(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1805214c0(param_1);
    FUN_18061ddc0(uVar1,*param_1);
  }
  return;
}


/* address=18061db70 name=FUN_18061db70 */

void FUN_18061db70(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1805214c0(param_1);
    FUN_18061ddc0(uVar2,p_Var1);
  }
  return;
}


/* address=18061dbc0 name=FUN_18061dbc0 */

undefined8
FUN_18061dbc0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  
  p_Var1 = std::
           unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
           release(param_2);
  FUN_18061da10(param_1,p_Var1);
  uVar2 = FUN_1805214c0(param_2);
  FUN_1805214c0(uVar2);
  FUN_1805214c0(param_1);
  return param_1;
}


/* address=18061dc20 name=FUN_18061dc20 */

bool FUN_18061dc20(undefined8 param_1,
                  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                  *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180521460(param_2);
  lVar2 = FUN_180515820(param_1,uVar1);
  if (lVar2 != 0) {
    std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
    release(param_2);
    FUN_18061d9d0(param_2);
  }
  else {
    FUN_18061d9d0(param_2);
  }
  return lVar2 != 0;
}


/* address=18061dc90 name=FUN_18061dc90 */

void FUN_18061dc90(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1805214c0(param_1);
    FUN_18061dda0(uVar1,*param_1);
  }
  return;
}


/* address=18061dcd0 name=FUN_18061dcd0 */

void FUN_18061dcd0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1805214c0(param_1);
    FUN_18061dd80(uVar1,*param_1);
  }
  return;
}


/* address=18061dd10 name=FUN_18061dd10 */

bool FUN_18061dd10(undefined8 param_1,
                  unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                  *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180521460(param_2);
  lVar2 = FUN_180515820(param_1,uVar1);
  if (lVar2 != 0) {
    std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::
    release(param_2);
    FUN_18061daf0(param_2);
  }
  else {
    FUN_18061daf0(param_2);
  }
  return lVar2 != 0;
}


/* address=18061dd80 name=FUN_18061dd80 */

void FUN_18061dd80(undefined8 param_1,undefined8 param_2)

{
  FUN_18061de20(param_2);
  return;
}


/* address=18061dda0 name=FUN_18061dda0 */

void FUN_18061dda0(undefined8 param_1,undefined8 param_2)

{
  FUN_18061dad0(param_2);
  return;
}


/* address=18061ddc0 name=FUN_18061ddc0 */

void FUN_18061ddc0(undefined8 param_1,undefined8 param_2)

{
  FUN_18061de60(param_2);
  return;
}


/* address=18061dde0 name=FUN_18061dde0 */

void FUN_18061dde0(undefined8 param_1,undefined8 param_2)

{
  FUN_18061dab0(param_2);
  return;
}


/* address=18061de00 name=FUN_18061de00 */

void FUN_18061de00(undefined8 param_1,undefined8 param_2)

{
  FUN_18061d950(param_2);
  return;
}


/* address=18061de20 name=FUN_18061de20 */

void FUN_18061de20(undefined8 param_1)

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
  uVar1 = FUN_18061df70(local_18);
  FUN_180515070(param_1,uVar1,0);
  return;
}


/* address=18061de60 name=FUN_18061de60 */

void FUN_18061de60(undefined8 param_1)

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
  uVar1 = FUN_18061df00(local_18);
  FUN_180515070(param_1,uVar1,0);
  return;
}


/* address=18061dea0 name=FUN_18061dea0 */

void FUN_18061dea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18061d950(param_3);
  return;
}


/* address=18061df00 name=FUN_18061df00 */

undefined * FUN_18061df00(void)

{
  return &LAB_18061ded0;
}


/* address=18061df10 name=FUN_18061df10 */

void FUN_18061df10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_18061dab0(param_3);
  return;
}


/* address=18061df70 name=FUN_18061df70 */

undefined * FUN_18061df70(void)

{
  return &LAB_18061df40;
}


/* address=18061e000 name=FUN_18061e000 */

void FUN_18061e000(undefined8 param_1)

{
  FUN_180514e40(param_1);
  return;
}


/* address=18061e020 name=FUN_18061e020 */

void FUN_18061e020(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_18061df80,param_2);
  return;
}


/* address=18061e050 name=FUN_18061e050 */

void FUN_18061e050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180515500(param_1,param_2,param_3,&LAB_18061dfb0);
  return;
}


/* address=18061e090 name=FUN_18061e090 */

void FUN_18061e090(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=18061e0c0 name=FUN_18061e0c0 */

void FUN_18061e0c0(undefined8 param_1)

{
  FUN_1805159a0(param_1,&LAB_18061dfb0);
  return;
}


/* address=18061e120 name=FUN_18061e120 */

void FUN_18061e120(void)

{
  FUN_180514f00();
  return;
}


/* address=18061e140 name=FUN_18061e140 */

void FUN_18061e140(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18061e160 name=FUN_18061e160 */

void FUN_18061e160(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18061e190 name=FUN_18061e190 */

void FUN_18061e190(undefined8 param_1)

{
  FUN_180515030(param_1);
  return;
}


/* address=18061e1b0 name=FUN_18061e1b0 */

void FUN_18061e1b0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_18061e0f0,param_2);
  return;
}


/* address=18061e1e0 name=FUN_18061e1e0 */

void FUN_18061e1e0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=18061e240 name=FUN_18061e240 */

void FUN_18061e240(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_18061e210,param_2);
  return;
}


/* address=18061e2a0 name=FUN_18061e2a0 */

void FUN_18061e2a0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18061e2c0 name=FUN_18061e2c0 */

void FUN_18061e2c0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18061e2f0 name=FUN_18061e2f0 */

void FUN_18061e2f0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_18061e270,param_2);
  return;
}


/* address=18061e320 name=FUN_18061e320 */

void FUN_18061e320(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18061e340 name=FUN_18061e340 */

void FUN_18061e340(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18061e3d0 name=FUN_18061e3d0 */

undefined8 FUN_18061e3d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    lVar1 = FUN_1805125d0(param_2,0,param_3,param_4,0);
    if (lVar1 != 0) {
      local_10 = FUN_1806206c0(lVar1);
    }
    FUN_18053d880(lVar1);
  }
  return local_10;
}


/* address=18061e440 name=FUN_18061e440 */

longlong FUN_18061e440(undefined8 param_1,char *param_2)

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
    FUN_18050f6f0(0x14,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_180980e50,0xed);
    local_10 = 0;
  }
  else {
    local_18 = FUN_18053d800();
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
      local_24 = FUN_180614dd0(&local_18,local_res10);
    }
    else {
      sVar3 = strlen(local_res10);
      if (0x2000 < sVar3) {
        FUN_18053d880(local_18);
        FUN_18050f6f0(0x14,0,0x7f,s_D__a_1_s_target_x86_64_pc_window_180980ed0,0x109);
        return 0;
      }
      local_24 = FUN_180615090(&local_18,local_res10);
    }
    if ((local_24 == 0) || (local_res10[local_24] != '\0')) {
      FUN_18053d880(local_18);
      FUN_18050f6f0(0x14,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180980f50,0x111);
      local_10 = 0;
    }
    else {
      if ((bVar4) && (iVar2 = FUN_18053fc40(local_18), iVar2 != 0)) {
        bVar4 = false;
      }
      local_10 = FUN_1805125a0(local_18,0);
      FUN_18053d880(local_18);
      if (local_10 == 0) {
        FUN_18050f6f0(0x14,0,0x67,s_D__a_1_s_target_x86_64_pc_window_180980fd0,0x11c);
        local_10 = 0;
      }
      else if (bVar4) {
        *(uint *)(local_10 + 4) = *(uint *)(local_10 + 4) | 0x100;
      }
    }
  }
  return local_10;
}


/* address=18061e680 name=FUN_18061e680 */

undefined8 FUN_18061e680(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    lVar1 = FUN_1805127c0(param_2,0,param_3,param_4,0);
    if (lVar1 != 0) {
      local_10 = FUN_1806206c0(lVar1);
    }
    FUN_18053d880(lVar1);
  }
  return local_10;
}


/* address=18061e7d0 name=FUN_18061e7d0 */

void FUN_18061e7d0(undefined8 param_1)

{
  FUN_18061e020(param_1,&LAB_18061fe80);
  return;
}


/* address=18061e8e0 name=FUN_18061e8e0 */

undefined8
FUN_18061e8e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    lVar2 = FUN_18061ed00(param_2,0,param_3);
    if (lVar2 == 0) {
      uVar1 = FUN_180621120(param_1,param_2,param_3,param_4,2,param_5);
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}


/* address=18061e960 name=FUN_18061e960 */

undefined8 FUN_18061e960(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    lVar2 = FUN_18061ed00(param_2,0,param_3);
    if (lVar2 == 0) {
      uVar1 = FUN_180621120(param_1,param_2,param_3,param_4,1,0);
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}


/* address=18061e9e0 name=FUN_18061e9e0 */

undefined8 FUN_18061e9e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = FUN_180621120(param_1,param_2,param_3,param_4,7,0);
  }
  return uVar1;
}


/* address=18061eae0 name=FUN_18061eae0 */

void FUN_18061eae0(undefined8 param_1)

{
  int iVar1;
  undefined auStack_58 [32];
  int local_38;
  longlong local_30;
  undefined local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_58;
  local_38 = FUN_18061f320(local_28,param_1);
  if (((local_38 != 0) && (local_30 = FUN_180511080(), local_30 != 0)) &&
     (iVar1 = FUN_180624b30(local_30,local_28,local_38), iVar1 == 0)) {
    FUN_1805111a0(local_30);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=18061eb70 name=FUN_18061eb70 */

void FUN_18061eb70(longlong param_1)

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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_50 = 0;
  local_40 = (undefined *)FUN_18066ac00(param_1,0x2f);
  if ((local_40 != (undefined *)0x0) && (local_50 = FUN_18058f930(param_1), local_50 != 0)) {
    local_40[local_50 - param_1] = 0;
    local_40 = local_40 + (local_50 - param_1) + 1;
    local_58 = FUN_18061f320(local_30,local_50);
    if (local_58 != 0) {
      local_48 = FUN_18061f320(local_30 + local_58,local_40);
      FUN_18058f610(local_50);
      local_50 = 0;
      if ((((local_48 != 0) && (local_58 == local_48)) &&
          (local_38 = FUN_180511080(), local_38 != 0)) &&
         (iVar1 = FUN_180624b30(local_38,local_30,local_58 + local_48), iVar1 != 0))
      goto LAB_18061ece0;
    }
    if (local_50 != 0) {
      FUN_18058f610(local_50);
    }
    if (local_38 != 0) {
      FUN_1805111a0(local_38);
    }
  }
LAB_18061ece0:
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_78);
  return;
}


/* address=18061ed00 name=FUN_18061ed00 */

undefined8 FUN_18061ed00(undefined8 param_1,undefined4 param_2,longlong param_3)

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


/* address=18061ed40 name=FUN_18061ed40 */

int FUN_18061ed40(void *param_1,void *param_2,size_t param_3)

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


/* address=18061ed80 name=FUN_18061ed80 */

undefined8 FUN_18061ed80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18061edd0 name=FUN_18061edd0 */

undefined8 FUN_18061edd0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18061ee10 name=FUN_18061ee10 */

undefined8 FUN_18061ee10(longlong param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong local_58;
  undefined8 local_50;
  undefined local_48 [8];
  undefined local_40 [64];
  
  iVar1 = FUN_180590610(local_40,param_2 * 3 + 1);
  if (iVar1 != 0) {
    for (local_58 = 0; local_58 < param_2; local_58 = local_58 + 1) {
      if ((((local_58 != 0) && (iVar1 = FUN_180591010(local_40,0x3a), iVar1 == 0)) ||
          (iVar1 = FUN_180591010(local_40,"0123456789ABCDEF"
                                          [(int)(uint)*(byte *)(param_1 + local_58) >> 4]),
          iVar1 == 0)) ||
         (iVar1 = FUN_180591010(local_40,"0123456789ABCDEF"
                                         [(int)(*(byte *)(param_1 + local_58) & 0xf)]), iVar1 == 0))
      goto LAB_18061ef23;
    }
    iVar1 = FUN_180591010(local_40,0);
    if ((iVar1 != 0) && (iVar1 = FUN_180590740(local_40,&local_50,local_48), iVar1 != 0)) {
      return local_50;
    }
  }
LAB_18061ef23:
  FUN_1805906d0(local_40);
  return 0;
}


/* address=18061ef40 name=FUN_18061ef40 */

byte * FUN_18061ef40(char *param_1,longlong *param_2)

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
    FUN_18050f6f0(0x14,0,0x7c,s_D__a_1_s_target_x86_64_pc_window_180981450,0x1f6);
    local_18 = (byte *)0x0;
  }
  else {
    sVar5 = strlen(param_1);
    local_18 = (byte *)FUN_18058f4e0(sVar5 >> 1);
    pcVar3 = param_1;
    local_10 = local_18;
    if (local_18 == (byte *)0x0) {
      FUN_18058f610(0);
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
            FUN_18050f6f0(0x14,0,0x92,s_D__a_1_s_target_x86_64_pc_window_1809814d0,0x203);
            FUN_18058f610(local_18);
            return (byte *)0x0;
          }
          iVar4 = FUN_18058faf0(&local_26,cVar1);
          if ((iVar4 == 0) || (iVar4 = FUN_18058faf0(local_25,cVar2), iVar4 == 0)) {
            FUN_18058f610(local_18);
            FUN_18050f6f0(0x14,0,0x76,s_D__a_1_s_target_x86_64_pc_window_180981550,0x21c);
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


/* address=18061f110 name=FUN_18061f110 */

undefined4 FUN_18061f110(char *param_1,char *param_2)

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


/* address=18061f1a0 name=FUN_18061f1a0 */

undefined8 FUN_18061f1a0(char *param_1,ulonglong param_2)

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
      iVar2 = FUN_18058fb80(cVar1);
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


/* address=18061f320 name=FUN_18061f320 */

undefined8 FUN_18061f320(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_18066ac00(param_2,0x3a);
  if (lVar2 == 0) {
    iVar1 = FUN_18061fff0(param_1,param_2);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
    }
  }
  else {
    iVar1 = FUN_1806200f0(param_1,param_2);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x10;
    }
  }
  return uVar3;
}


/* address=18061f390 name=FUN_18061f390 */

void FUN_18061f390(undefined8 param_1,int *param_2,undefined8 param_3)

{
  FUN_1806204f0(param_1,*(undefined8 *)(param_2 + 2),(longlong)*param_2,0,param_3);
  return;
}


/* address=18061f3e0 name=FUN_18061f3e0 */

undefined8 FUN_18061f3e0(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    for (local_20 = 0; uVar2 = FUN_18061e140(param_2), local_20 < uVar2; local_20 = local_20 + 1) {
      lVar3 = FUN_18061e160(param_2,local_20);
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
      iVar1 = FUN_18060f6d0(param_1,local_28,param_3,*(undefined8 *)(lVar3 + 0x10),
                            0xffffffffffffffff,0xffffffff,local_38);
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=18061f560 name=FUN_18061f560 */

undefined8 FUN_18061f560(char *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,&DAT_18098104c);
  if ((((iVar1 != 0) && (iVar1 = strcmp(param_1,&DAT_180981054), iVar1 != 0)) &&
      (iVar1 = strcmp(param_1,&DAT_18098105c), iVar1 != 0)) &&
     (((iVar1 = strcmp(param_1,&DAT_180981060), iVar1 != 0 &&
       (iVar1 = strcmp(param_1,&DAT_180981064), iVar1 != 0)) &&
      (iVar1 = strcmp(param_1,&DAT_180981068), iVar1 != 0)))) {
    iVar1 = strcmp(param_1,s_FALSE_18098106c);
    if (((iVar1 != 0) && (iVar1 = strcmp(param_1,s_false_180981074), iVar1 != 0)) &&
       ((iVar1 = strcmp(param_1,&DAT_18098107c), iVar1 != 0 &&
        (((iVar1 = strcmp(param_1,&DAT_180981080), iVar1 != 0 &&
          (iVar1 = strcmp(param_1,&DAT_180981084), iVar1 != 0)) &&
         (iVar1 = strcmp(param_1,&DAT_180981088), iVar1 != 0)))))) {
      FUN_18050f6f0(0x14,0,0x78,s_D__a_1_s_target_x86_64_pc_window_180981090,0x13f);
      return 0;
    }
    *param_2 = 0;
    return 1;
  }
  *param_2 = 0xff;
  return 1;
}


/* address=18061f6c0 name=FUN_18061f6c0 */

undefined8 FUN_18061f6c0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1[2] == 0) {
    FUN_18050f6f0(0x14,0,0x78,s_D__a_1_s_target_x86_64_pc_window_180981110,0x146);
  }
  else {
    iVar1 = FUN_18061f560(param_1[2],param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_18050f810(6,s_section__1809811a0,*param_1,s__name__180981198,param_1[1],s__value__180981190,
                param_1[2]);
  return 0;
}


/* address=18061f780 name=FUN_18061f780 */

bool FUN_18061f780(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18061e440(0,param_1[2]);
  if (lVar1 != 0) {
    FUN_1805118a0(*param_2);
    *param_2 = lVar1;
  }
  else {
    FUN_18050f810(6,s_section__1809811c0,*param_1,s__name__1809811b8,param_1[1],s__value__1809811b0,
                  param_1[2]);
  }
  return lVar1 != 0;
}


/* address=18061f830 name=FUN_18061f830 */

void FUN_18061f830(undefined8 param_1,char *param_2,undefined8 param_3)

{
  size_t local_10;
  
  if (param_2 == (char *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = strlen(param_2);
  }
  FUN_1806204f0(param_1,param_2,local_10,param_2 == (char *)0x0,param_3);
  return;
}


/* address=18061f8b0 name=FUN_18061f8b0 */

void FUN_18061f8b0(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 0) {
    FUN_18061f830(param_1,s_FALSE_180980e34,param_3);
  }
  else {
    FUN_18061f830(param_1,&DAT_180980e2c,param_3);
  }
  return;
}


/* address=18061f910 name=FUN_18061f910 */

undefined4 FUN_18061f910(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    lVar2 = FUN_18061e3d0(0,param_2);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_18061f830(param_1,lVar2,param_3);
      FUN_18058f610(lVar2);
    }
  }
  return uVar1;
}


/* address=18061f980 name=FUN_18061f980 */

undefined8 FUN_18061f980(undefined8 param_1)

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
  local_40 = (char *)FUN_18058f930(param_1);
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
          local_50 = FUN_18061fc80(local_38);
          if (local_50 == 0) {
            FUN_18050f6f0(0x14,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_1809811d0,0x179);
            goto LAB_18061fc55;
          }
          local_38 = local_40 + 1;
        }
        else if (cVar1 == ',') {
          *local_40 = '\0';
          local_50 = FUN_18061fc80(local_38);
          local_38 = local_40 + 1;
          if (local_50 == 0) {
            FUN_18050f6f0(0x14,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_180981250,0x185);
            goto LAB_18061fc55;
          }
          FUN_18061f830(local_50,0,&local_30);
        }
      }
      else if ((local_48 == 2) && (cVar1 == ',')) {
        local_48 = 1;
        *local_40 = '\0';
        local_20 = FUN_18061fc80(local_38);
        if (local_20 == 0) {
          FUN_18050f6f0(0x14,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_1809812d0,0x195);
          goto LAB_18061fc55;
        }
        FUN_18061f830(local_50,local_20,&local_30);
        local_50 = 0;
        local_38 = local_40 + 1;
      }
    }
    if (local_48 == 2) {
      local_20 = FUN_18061fc80(local_38);
      if (local_20 != 0) {
        FUN_18061f830(local_50,local_20,&local_30);
LAB_18061fc44:
        FUN_18058f610(local_18);
        return local_30;
      }
      FUN_18050f6f0(0x14,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_180981350,0x1a5);
    }
    else {
      lVar2 = FUN_18061fc80(local_38);
      if (lVar2 != 0) {
        FUN_18061f830(lVar2,0,&local_30);
        goto LAB_18061fc44;
      }
      FUN_18050f6f0(0x14,0,0x7d,s_D__a_1_s_target_x86_64_pc_window_1809813d0,0x1af);
    }
  }
LAB_18061fc55:
  FUN_18058f610(local_18);
  FUN_18061e1b0(local_30,&LAB_18061e370);
  return 0;
}


/* address=18061fc80 name=FUN_18061fc80 */

char * FUN_18061fc80(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char *local_18;
  char *local_10;
  
  local_18 = param_1;
  while ((*local_18 != '\0' && (iVar1 = FUN_18058fc00(*local_18), iVar1 != 0))) {
    local_18 = local_18 + 1;
  }
  if (*local_18 == '\0') {
    local_18 = (char *)0x0;
  }
  else {
    sVar2 = strlen(local_18);
    local_10 = local_18 + (sVar2 - 1);
    while ((local_10 != local_18 && (iVar1 = FUN_18058fc00(*local_10), iVar1 != 0))) {
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


/* address=18061fd90 name=FUN_18061fd90 */

undefined8 FUN_18061fd90(undefined8 param_1,undefined8 param_2)

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
    local_38 = FUN_18060f110(param_1,0x30,local_38);
    if (local_38 < 0) {
      local_30 = 0;
      while( true ) {
        uVar2 = FUN_18061e2a0(param_2);
        if (uVar2 <= local_30) {
          return local_28;
        }
        local_20 = (int *)FUN_18061e2c0(param_2,local_30);
        if ((*local_20 == 1) &&
           (iVar1 = FUN_18061fea0(&local_28,*(undefined8 *)(local_20 + 2)), iVar1 == 0)) break;
        local_30 = local_30 + 1;
      }
      return 0;
    }
    local_18 = FUN_18060f220(param_1,local_38);
    local_10 = FUN_18060f810(local_18);
    iVar1 = FUN_18061fea0(&local_28,local_10);
  } while (iVar1 != 0);
  return 0;
}


/* address=18061fea0 name=FUN_18061fea0 */

undefined8 FUN_18061fea0(longlong *param_1,int *param_2)

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
      lVar3 = FUN_18061ed00(*(undefined8 *)(param_2 + 2),0,(longlong)*param_2);
      if (lVar3 == 0) {
        local_18 = 0;
        if (*param_1 == 0) {
          lVar3 = FUN_18061e000(&LAB_18061fd60);
          *param_1 = lVar3;
        }
        if ((*param_1 != 0) &&
           (local_18 = FUN_18058fef0(*(undefined8 *)(param_2 + 2),(longlong)*param_2), local_18 != 0
           )) {
          FUN_18061e0c0(*param_1);
          iVar1 = FUN_18061e050(*param_1,0,local_18);
          if (iVar1 != 0) {
            FUN_18058f610(local_18);
            return 1;
          }
          lVar3 = FUN_18061e090(*param_1,local_18);
          if (lVar3 != 0) {
            return 1;
          }
        }
        FUN_18058f610(local_18);
        FUN_18061e7d0(*param_1);
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


/* address=18061fff0 name=FUN_18061fff0 */

undefined8 FUN_18061fff0(undefined *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c [3];
  
  iVar1 = FUN_180621450(param_2,s__d__d__d__d_1809815e0,&local_18,&local_14,&local_10,local_c);
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


/* address=1806200f0 name=FUN_1806200f0 */

void FUN_1806200f0(longlong param_1,undefined8 param_2)

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
  
  local_10 = DAT_18093c100 ^ (ulonglong)auStack_68;
  local_20 = 0;
  local_1c = -1;
  local_18 = 0;
  local_48 = local_30;
  iVar1 = FUN_1805f0600(param_2,0x3a,0,&LAB_1806202b0);
  if (iVar1 != 0) {
    if (local_1c == -1) {
      if (local_20 != 0x10) goto LAB_18062028b;
    }
    else {
      if ((0xf < local_20) || (3 < local_18)) goto LAB_18062028b;
      if (local_18 == 3) {
        if (0 < local_20) goto LAB_18062028b;
      }
      else if (local_18 == 2) {
        if ((local_1c != 0) && (local_1c != local_20)) goto LAB_18062028b;
      }
      else if ((local_1c == 0) || (local_1c == local_20)) goto LAB_18062028b;
    }
    if (local_1c < 0) {
      FUN_18061ed80(param_1,local_30,0x10);
    }
    else {
      FUN_18061ed80(param_1,local_30,(longlong)local_1c);
      FUN_18061edd0(param_1 + local_1c,0,(longlong)(0x10 - local_20));
      if (local_20 != local_1c) {
        local_38 = (param_1 + 0x10 + (longlong)local_1c) - (longlong)local_20;
        FUN_18061ed80(local_38,local_30 + local_1c,(longlong)(local_20 - local_1c));
      }
    }
  }
LAB_18062028b:
  FUN_18050ec30(local_10 ^ (ulonglong)auStack_68);
  return;
}


/* address=180620410 name=FUN_180620410 */

undefined8 FUN_180620410(undefined *param_1,char *param_2,ulonglong param_3)

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
      local_1c = FUN_18058faf0(local_28,local_20);
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


/* address=1806204f0 name=FUN_1806204f0 */

undefined8
FUN_1806204f0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong *param_5)

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
  if ((param_1 != 0) && (local_18 = FUN_18058f930(param_1), local_18 == 0)) goto LAB_180620661;
  if (param_4 == 0) {
    lVar2 = FUN_18061ed00(param_2,0,param_3);
    if (lVar2 != 0) {
      FUN_18050f6f0(0x14,0,0xa3,s_D__a_1_s_target_x86_64_pc_window_180980db0,0x68);
      goto LAB_180620661;
    }
    local_10 = FUN_18058fef0(param_2,param_3);
    if (local_10 == 0) goto LAB_180620661;
  }
  local_20 = (undefined8 *)FUN_1805f05b0();
  if (local_20 != (undefined8 *)0x0) {
    if (*param_5 == 0) {
      lVar2 = FUN_18061e120();
      *param_5 = lVar2;
      if (*param_5 == 0) goto LAB_180620661;
    }
    *local_20 = 0;
    local_20[1] = local_18;
    local_20[2] = local_10;
    lVar2 = FUN_18061e1e0(*param_5,local_20);
    if (lVar2 != 0) {
      return 1;
    }
  }
LAB_180620661:
  if (lVar1 == 0) {
    FUN_18061e190(*param_5);
    *param_5 = 0;
  }
  FUN_18058f610(local_20);
  FUN_18058f610(local_18);
  FUN_18058f610(local_10);
  return 0;
}


/* address=1806206c0 name=FUN_1806206c0 */

longlong FUN_1806206c0(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  char *_Str;
  size_t sVar3;
  longlong lVar4;
  
  uVar1 = FUN_18053daa0(param_1);
  if (uVar1 < 0x20) {
    lVar2 = FUN_180614e10(param_1);
  }
  else {
    _Str = (char *)FUN_180614c40(param_1);
    if (_Str == (char *)0x0) {
      lVar2 = 0;
    }
    else {
      sVar3 = strlen(_Str);
      lVar4 = sVar3 + 3;
      lVar2 = FUN_18058f4e0(lVar4);
      if (lVar2 == 0) {
        FUN_18058f610(_Str);
        lVar2 = 0;
      }
      else {
        if (*_Str == '-') {
          FUN_180590010(lVar2,&DAT_180980e3c,lVar4);
          FUN_1805900c0(lVar2,_Str + 1,lVar4);
        }
        else {
          FUN_180590010(lVar2,&DAT_180980e40,lVar4);
          FUN_1805900c0(lVar2,_Str,lVar4);
        }
        FUN_18058f610(_Str);
      }
    }
  }
  return lVar2;
}


/* address=1806207d0 name=FUN_1806207d0 */

undefined8 FUN_1806207d0(char *param_1,longlong param_2,char *param_3,longlong param_4)

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


/* address=1806208a0 name=FUN_1806208a0 */

bool FUN_1806208a0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == param_4) {
    iVar1 = FUN_18061ed40(param_1,param_3,param_2);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


/* address=180620a40 name=FUN_180620a40 */

undefined8
FUN_180620a40(undefined8 param_1,longlong param_2,char *param_3,longlong param_4,longlong param_5,
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
    iVar2 = FUN_1806207d0(param_1,param_2,param_5,param_2,param_7);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      local_20 = (char *)(param_5 + param_2);
      pcVar4 = (char *)(param_5 + (param_6 - param_4));
      iVar2 = FUN_1806207d0(pcVar4,param_4,param_3,param_4,param_7);
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
           (iVar2 = FUN_18058fcf0(param_5,&DAT_1809815cc,4), iVar2 != 0)) {
          if ((pcVar4 == local_20 + 1) && (*local_20 == '*')) {
            uVar3 = 1;
          }
          else {
            for (; local_20 != pcVar4; local_20 = local_20 + 1) {
              iVar2 = FUN_18058fb80(*local_20);
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


/* address=180620c10 name=FUN_180620c10 */

longlong FUN_180620c10(longlong param_1,ulonglong param_2)

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
      iVar3 = FUN_18058fb80(*(undefined *)(param_1 + local_20));
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
           (iVar3 = FUN_18058fcf0(param_1 + local_20,&DAT_1809815d4,4), iVar3 == 0)) {
          bVar1 = true;
        }
        local_38 = 0;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}


/* address=180620f50 name=FUN_180620f50 */

int FUN_180620f50(int *param_1,int param_2,code *param_3,undefined4 param_4,int param_5,
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
    iVar1 = FUN_1805a7720(local_10,param_1);
    if (iVar1 < 0) {
      local_18 = -1;
    }
    else {
      if ((param_5 == 2) && (iVar2 = FUN_18061f1a0(local_10[0],(longlong)iVar1), iVar2 == 0)) {
        local_18 = 0;
      }
      else {
        local_18 = (*param_3)(local_10[0],(longlong)iVar1,param_6,param_7,param_4);
      }
      if ((0 < local_18) && (param_8 != (undefined8 *)0x0)) {
        uVar3 = FUN_18058fef0(local_10[0],(longlong)iVar1);
        *param_8 = uVar3;
      }
      FUN_18058f610(local_10[0]);
    }
  }
  else if (param_2 == param_1[1]) {
    if (param_2 == 0x16) {
      local_18 = (*param_3)(*(undefined8 *)(param_1 + 2),(longlong)*param_1,param_6,param_7,param_4)
      ;
    }
    else if ((*param_1 == (int)param_7) &&
            (iVar1 = FUN_18061ed40(*(undefined8 *)(param_1 + 2),param_6,param_7), iVar1 == 0)) {
      local_18 = 1;
    }
    if ((0 < local_18) && (param_8 != (undefined8 *)0x0)) {
      uVar3 = FUN_18058fef0(*(undefined8 *)(param_1 + 2),(longlong)*param_1);
      *param_8 = uVar3;
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}


/* address=180621120 name=FUN_180621120 */

int FUN_180621120(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
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
    local_48 = (code *)&LAB_180620910;
  }
  else if (param_5 == 2) {
    local_54 = 0xd;
    local_4c = 0x16;
    if ((param_4 & 2) == 0) {
      local_48 = (code *)&LAB_180620e50;
    }
    else {
      local_48 = FUN_1806207d0;
    }
  }
  else {
    local_4c = 4;
    local_48 = FUN_1806208a0;
  }
  lVar1 = FUN_180619150(param_1,0x55,0,0);
  if (lVar1 == 0) {
    if ((local_54 == 0) || ((param_4 & 0x20) != 0)) {
      local_58 = 0;
    }
    else {
      local_50 = -1;
      uVar4 = FUN_180594d10(param_1);
      do {
        local_50 = FUN_18060f110(uVar4,local_54,local_50);
        if (local_50 < 0) {
          return 0;
        }
        uVar5 = FUN_18060f220(uVar4,local_50);
        uVar5 = FUN_18060f810(uVar5);
        local_58 = FUN_180620f50(uVar5,0xffffffff,local_48,param_4,param_5,param_2,param_3,param_6);
      } while (local_58 == 0);
    }
  }
  else {
    for (local_40 = 0; uVar2 = FUN_18061e2a0(lVar1), local_40 < uVar2; local_40 = local_40 + 1) {
      piVar3 = (int *)FUN_18061e2c0(lVar1,local_40);
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
        local_58 = FUN_180620f50(local_28,local_4c,local_48,param_4,param_5,param_2,param_3,param_6)
        ;
        if (local_58 != 0) break;
      }
    }
    FUN_1805a9f10(lVar1);
  }
  return local_58;
}


/* address=1806213f0 name=FUN_1806213f0 */

undefined * FUN_1806213f0(void)

{
  return &DAT_180992868;
}


/* address=180621400 name=FUN_180621400 */

void FUN_180621400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1806213f0();
  FUN_1806713b0(*puVar1,param_1,0xffffffffffffffff,param_2,param_3,param_4);
  return;
}


/* address=180621450 name=FUN_180621450 */

undefined4
FUN_180621450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_180621400(param_1,param_2,0,&local_res18);
  return uVar1;
}


/* address=180621720 name=FUN_180621720 */

void FUN_180621720(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    FUN_1806543c0(param_1,param_2,param_3);
  }
  else {
    FUN_1806218c0(param_1,param_2,param_3,param_4);
  }
  return;
}


/* address=180621800 name=FUN_180621800 */

undefined4 FUN_180621800(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_18058c840(param_1,param_2,param_3), iVar1 != param_3)) {
    return 0;
  }
  return 1;
}


/* address=180621860 name=FUN_180621860 */

undefined8 FUN_180621860(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 <= local_18) {
      return 1;
    }
    iVar1 = FUN_180621800(param_1,&DAT_180981630,1);
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return 0;
}


/* address=1806218c0 name=FUN_1806218c0 */

void FUN_1806218c0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_f8;
  local_c4 = -1;
  local_res18 = param_3;
  if (param_3 < 0) {
    local_res18 = 0;
  }
  local_d8 = local_res18;
  iVar1 = FUN_180621860(param_1,local_res18);
  if (iVar1 != 0) {
    local_c8 = param_4 & 0xf0000;
    if (local_c8 == 0x10000) {
      local_98 = &DAT_18098163c;
      local_cc = 1;
      local_a0 = &DAT_180981640;
      local_d0 = 1;
      local_res18 = 0;
    }
    else if (local_c8 == 0x20000) {
      local_98 = &DAT_180981644;
      local_cc = 2;
      local_a0 = &DAT_180981648;
      local_d0 = 3;
      local_res18 = 0;
    }
    else if (local_c8 == 0x30000) {
      local_98 = &DAT_18098164c;
      local_cc = 2;
      local_a0 = &DAT_180981650;
      local_d0 = 3;
      local_res18 = 0;
    }
    else {
      if (local_c8 != 0x40000) goto LAB_180621d4b;
      local_98 = &DAT_180981634;
      local_cc = 1;
      local_a0 = &DAT_180981638;
      local_d0 = 3;
    }
    if ((param_4 & 0x800000) == 0) {
      local_80 = &DAT_180981658;
      local_c0 = 1;
    }
    else {
      local_80 = &DAT_180981654;
      local_c0 = 3;
    }
    local_b8 = FUN_18060f0e0(param_2);
    for (local_d4 = 0; local_d4 < local_b8; local_d4 = local_d4 + 1) {
      if ((param_4 & 0x100000) == 0) {
        local_a8 = FUN_18060f220(param_2,local_d4);
      }
      else {
        local_a8 = FUN_18060f220(param_2,(local_b8 - local_d4) + -1);
      }
      if (local_c4 != -1) {
        iVar1 = FUN_180513b20(local_a8);
        if (local_c4 == iVar1) {
          iVar1 = FUN_180621800(param_1,local_a0,local_d0);
          if (iVar1 == 0) break;
          local_d8 = local_d8 + local_d0;
        }
        else {
          iVar1 = FUN_180621800(param_1,local_98,local_cc);
          if (iVar1 == 0) break;
          local_d8 = local_d8 + local_cc;
          iVar1 = FUN_180621860(param_1,local_res18);
          if (iVar1 == 0) break;
          local_d8 = local_d8 + local_res18;
        }
      }
      local_c4 = FUN_180513b20(local_a8);
      local_88 = FUN_18060f760(local_a8);
      local_78 = FUN_18060f810(local_a8);
      if ((param_4 & 0x600000) != 0) {
        FID_conflict__assert
                  (u__flags___XN_FLAG_FN_MASK_____XN__180981760,
                   u_D__a_1_s_target_x86_64_pc_window_180981660,0xad);
      }
      local_bc = FUN_1805a8b30(local_88);
      if (local_bc == 0) {
        FUN_1805a90e0(local_68,0x50,local_88,1);
        local_90 = local_68;
      }
      else {
        local_90 = (char *)FUN_1805a8f60(local_bc);
      }
      sVar2 = strlen(local_90);
      local_b4 = (int)sVar2;
      iVar1 = FUN_180621800(param_1,local_90,sVar2 & 0xffffffff);
      if ((iVar1 == 0) || (iVar1 = FUN_180621800(param_1,local_80,local_c0), iVar1 == 0)) break;
      local_d8 = local_d8 + local_b4 + local_c0;
      if ((local_bc == 0) && ((param_4 & 0x1000000) != 0)) {
        local_b0 = 0x80;
      }
      else {
        local_b0 = 0;
      }
      local_ac = FUN_1805a7be0(param_1,local_78,param_4 | local_b0);
      if (local_ac < 0) break;
      local_d8 = local_d8 + local_ac;
    }
  }
LAB_180621d4b:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_f8);
  return;
}


/* address=180621f90 name=FUN_180621f90 */

undefined8 FUN_180621f90(longlong *param_1)

{
  return *(undefined8 *)(*param_1 + 0x20);
}


/* address=180621fb0 name=FUN_180621fb0 */

undefined8 FUN_180621fb0(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180514b10(*(undefined8 *)(*param_1 + 0x28));
  }
  return uVar1;
}


/* address=180622020 name=FUN_180622020 */

undefined8 FUN_180622020(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(*param_1 + 0x30) != 0) && (-1 < param_2)) &&
     (uVar1 = FUN_1806226a0(*(undefined8 *)(*param_1 + 0x30)), (ulonglong)(longlong)param_2 < uVar1)
     ) {
    uVar2 = FUN_1806226c0(*(undefined8 *)(*param_1 + 0x30),(longlong)param_2);
    return uVar2;
  }
  return 0;
}


/* address=180622090 name=FUN_180622090 */

undefined8 FUN_180622090(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1805a8e80(param_2);
  if (lVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1806220e0(param_1,lVar1,param_3);
  }
  return uVar2;
}


/* address=1806220e0 name=FUN_1806220e0 */

int FUN_1806220e0(longlong *param_1,undefined8 param_2,int param_3)

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
    iVar1 = FUN_1806226a0(*(undefined8 *)(*param_1 + 0x30));
    for (; local_res18 < iVar1; local_res18 = local_res18 + 1) {
      puVar3 = (undefined8 *)FUN_1806226c0(*(undefined8 *)(*param_1 + 0x30),(longlong)local_res18);
      iVar2 = FUN_1805a8a70(*puVar3,param_2);
      if (iVar2 == 0) {
        return local_res18;
      }
    }
  }
  return -1;
}


/* address=1806221e0 name=FUN_1806221e0 */

undefined8 FUN_1806221e0(longlong *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  int local_28;
  undefined8 local_10 [2];
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    local_28 = FUN_180622090(param_1,0xac,0xffffffff);
    if (local_28 == -1) {
      local_28 = FUN_180622090(param_1,0xab,0xffffffff);
    }
    if (local_28 == -1) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_180622020(param_1,local_28);
      piVar2 = (int *)FUN_180654c10(uVar1,0);
      if ((piVar2 == (int *)0x0) || (*piVar2 != 0x10)) {
        uVar1 = 0;
      }
      else {
        local_10[0] = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
        uVar1 = FUN_1805a22c0(0,local_10,**(undefined4 **)(piVar2 + 2),&DAT_1807852f0);
      }
    }
  }
  return uVar1;
}


/* address=180622490 name=FUN_180622490 */

undefined8
FUN_180622490(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_180654700(0,param_2,param_3,param_4,param_5);
  if ((lVar2 != 0) && (iVar1 = FUN_180622880(param_1,lVar2), iVar1 != 0)) {
    return 1;
  }
  FUN_1805f3f40(lVar2);
  return 0;
}


/* address=180622590 name=FUN_180622590 */

undefined4 FUN_180622590(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_1805a45a0(param_2,local_10,&DAT_1807852f0);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_180622490(param_1,param_3,0x10,local_10[0],iVar1);
    FUN_18058f610(local_10[0]);
  }
  return uVar2;
}


/* address=180622610 name=FUN_180622610 */

void FUN_180622610(undefined8 param_1,undefined8 param_2)

{
  FUN_180622590(param_1,param_2,0xac);
  return;
}


/* address=180622680 name=FUN_180622680 */

void FUN_180622680(void)

{
  FUN_180514f00();
  return;
}


/* address=1806226a0 name=FUN_1806226a0 */

void FUN_1806226a0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=1806226c0 name=FUN_1806226c0 */

void FUN_1806226c0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=1806226f0 name=FUN_1806226f0 */

void FUN_1806226f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1805152e0(param_1,param_2);
  return;
}


/* address=180622720 name=FUN_180622720 */

void FUN_180622720(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=180622880 name=FUN_180622880 */

undefined8 FUN_180622880(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(*param_1 + 0x30) == 0) {
    uVar1 = FUN_180622680();
    *(undefined8 *)(*param_1 + 0x30) = uVar1;
  }
  if ((*(longlong *)(*param_1 + 0x30) != 0) &&
     (lVar2 = FUN_180622720(*(undefined8 *)(*param_1 + 0x30),param_2), lVar2 != 0)) {
    return 1;
  }
  return 0;
}


/* address=180622cf0 name=FUN_180622cf0 */

longlong FUN_180622cf0(undefined *param_1,byte *param_2,ulonglong param_3)

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
      uVar2 = FUN_180623be0(local_28 >> 0x12);
      *local_res8 = uVar2;
      uVar2 = FUN_180623be0(local_28 >> 0xc & 0xff);
      local_res8[1] = uVar2;
      if (local_20 == 1) {
        uVar2 = 0x3d;
      }
      else {
        uVar2 = FUN_180623be0(local_28 >> 6 & 0xff);
      }
      local_res8[2] = uVar2;
      local_res8[3] = 0x3d;
      local_20 = 0;
    }
    else {
      uVar3 = (uint)*local_res10 << 0x10 | (uint)local_res10[1] << 8;
      bVar1 = local_res10[2];
      uVar2 = FUN_180623be0(((uint)*local_res10 << 0x10) >> 0x12);
      *local_res8 = uVar2;
      uVar2 = FUN_180623be0((uVar3 & 0xff000) >> 0xc);
      local_res8[1] = uVar2;
      uVar2 = FUN_180623be0((uVar3 | bVar1) >> 6 & 0xff);
      local_res8[2] = uVar2;
      uVar2 = FUN_180623be0(bVar1);
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


/* address=180622fd0 name=FUN_180622fd0 */

bool FUN_180622fd0(longlong *param_1,ulonglong param_2)

{
  bool bVar1;
  
  bVar1 = param_2 % 4 == 0;
  if (bVar1) {
    *param_1 = (param_2 / 4) * 3;
  }
  return bVar1;
}


/* address=180623020 name=FUN_180623020 */

undefined8
FUN_180623020(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4,
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
    iVar1 = FUN_180622fd0(local_10,param_5);
    if ((iVar1 == 0) || (param_3 < local_10[0])) {
      uVar2 = 0;
    }
    else {
      local_18 = 0;
      local_res8 = param_1;
      for (local_28 = 0; local_28 < param_5; local_28 = local_28 + 4) {
        iVar1 = FUN_180623e20(local_res8,&local_20,param_4 + local_28);
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


/* address=1806231c0 name=FUN_1806231c0 */

void FUN_1806231c0(undefined8 param_1)

{
  FUN_180623b00(param_1,0,0x38);
  return;
}


/* address=1806231f0 name=FUN_1806231f0 */

void FUN_1806231f0(uint *param_1,undefined *param_2,undefined4 *param_3,longlong param_4,
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
      FID_conflict__assert
                (u_ctx_>data_used_<_sizeof(ctx_>dat_180982400,
                 u_D__a_1_s_target_x86_64_pc_window_180982300,0x95);
    }
    if (param_5 < 0x30 - (ulonglong)*param_1) {
      FUN_180623ab0((longlong)param_1 + (ulonglong)*param_1 + 4,param_4,param_5);
      *param_1 = *param_1 + (uint)param_5;
    }
    else {
      local_res10 = param_2;
      local_res20 = param_4;
      if (*param_1 != 0) {
        lVar1 = 0x30 - (ulonglong)*param_1;
        FUN_180623ab0((longlong)param_1 + (ulonglong)*param_1 + 4,param_4,lVar1);
        local_res20 = param_4 + lVar1;
        param_5 = param_5 - lVar1;
        lVar1 = FUN_180622cf0(param_2,param_1 + 1,0x30);
        *param_1 = 0;
        param_2[lVar1] = 10;
        local_res10 = param_2 + lVar1 + 1;
        *local_res10 = 0;
        local_28 = lVar1 + 1;
      }
      while (0x2f < param_5) {
        lVar1 = FUN_180622cf0(local_res10,local_res20,0x30);
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
        FUN_180623ab0(param_1 + 1,local_res20,param_5);
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


/* address=180623490 name=FUN_180623490 */

void FUN_180623490(int *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_18;
  
  if (*param_1 == 0) {
    *param_3 = 0;
  }
  else {
    lVar1 = FUN_180622cf0(param_2,param_1 + 1,*param_1);
    *(undefined *)(param_2 + lVar1) = 10;
    uVar2 = lVar1 + 1;
    *(undefined *)(param_2 + uVar2) = 0;
    *param_1 = 0;
    if (0x7fffffff < uVar2) {
      FID_conflict__assert
                (u_encoded_<__INT_MAX_180982548,u_D__a_1_s_target_x86_64_pc_window_180982450,0xd9);
    }
    local_18 = (undefined4)uVar2;
    *param_3 = local_18;
  }
  return;
}


/* address=180623560 name=FUN_180623560 */

void FUN_180623560(undefined8 param_1)

{
  FUN_180623b00(param_1,0,0x38);
  return;
}


/* address=180623590 name=FUN_180623590 */

undefined8
FUN_180623590(uint *param_1,longlong param_2,undefined4 *param_3,longlong param_4,ulonglong param_5)

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
          iVar2 = FUN_180623e20(local_res10,local_10,param_1 + 1);
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


/* address=180623760 name=FUN_180623760 */

undefined8 FUN_180623760(int *param_1,undefined8 param_2,undefined4 *param_3)

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


/* address=180623930 name=FUN_180623930 */

undefined8 FUN_180623930(undefined8 param_1)

{
  return param_1;
}


/* address=180623950 name=FUN_180623950 */

longlong FUN_180623950(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=180623970 name=FUN_180623970 */

void FUN_180623970(ulonglong param_1)

{
  FUN_180623950(~param_1 & param_1 - 1);
  return;
}


/* address=1806239a0 name=FUN_1806239a0 */

void FUN_1806239a0(ulonglong param_1,ulonglong param_2)

{
  FUN_180623970(param_1 ^ param_2);
  return;
}


/* address=1806239e0 name=FUN_1806239e0 */

void FUN_1806239e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1806239a0(param_1,param_2);
  return;
}


/* address=180623a10 name=FUN_180623a10 */

ulonglong FUN_180623a10(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_180623930(param_1);
  uVar2 = FUN_180623930(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=180623a60 name=FUN_180623a60 */

void FUN_180623a60(undefined param_1,undefined param_2,undefined param_3)

{
  FUN_180623a10(param_1,param_2,param_3);
  return;
}


/* address=180623ab0 name=FUN_180623ab0 */

undefined8 FUN_180623ab0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180623b00 name=FUN_180623b00 */

undefined8 FUN_180623b00(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180623b40 name=FUN_180623b40 */

void FUN_180623b40(byte param_1,byte param_2)

{
  FUN_180623950((ulonglong)param_1 - (ulonglong)param_2);
  return;
}


/* address=180623b90 name=FUN_180623b90 */

void FUN_180623b90(char param_1,char param_2,char param_3)

{
  FUN_180623b40(param_1 - param_2,(param_3 - param_2) + '\x01');
  return;
}


/* address=180623be0 name=FUN_180623be0 */

undefined FUN_180623be0(byte param_1)

{
  undefined uVar1;
  undefined uVar2;
  
  param_1 = param_1 & 0x3f;
  uVar1 = FUN_1806239e0(param_1,0x3e);
  uVar1 = FUN_180623a60(uVar1,0x2b,0x2f);
  uVar2 = FUN_180623b40(param_1,0x3e);
  uVar1 = FUN_180623a60(uVar2,param_1 - 4,uVar1);
  uVar2 = FUN_180623b40(param_1,0x34);
  uVar1 = FUN_180623a60(uVar2,param_1 + 0x47,uVar1);
  uVar2 = FUN_180623b40(param_1,0x1a);
  uVar1 = FUN_180623a60(uVar2,param_1 + 0x41,uVar1);
  return uVar1;
}


/* address=180623cc0 name=FUN_180623cc0 */

byte FUN_180623cc0(char param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  bVar1 = FUN_180623b90(param_1,0x41,0x5a);
  bVar2 = FUN_180623b90(param_1,0x61,0x7a);
  bVar3 = FUN_180623b90(param_1,0x30,0x39);
  bVar4 = FUN_1806239e0(param_1,0x2b);
  bVar5 = FUN_1806239e0(param_1,0x2f);
  bVar6 = FUN_1806239e0(param_1,0x3d);
  return bVar1 & param_1 + 0xbfU | bVar2 & param_1 + 0xb9U | bVar3 & param_1 + 4U | bVar4 & 0x3e |
         bVar5 & 0x3f | ~(bVar1 | bVar2 | bVar3 | bVar4 | bVar5 | bVar6);
}


/* address=180623e20 name=FUN_180623e20 */

undefined8 FUN_180623e20(byte *param_1,undefined8 *param_2,char *param_3)

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
  
  bVar1 = FUN_180623cc0(*param_3);
  bVar2 = FUN_180623cc0(param_3[1]);
  bVar3 = FUN_180623cc0(param_3[2]);
  local_24 = FUN_180623cc0(param_3[3]);
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


/* address=1806240b0 name=thunk_FUN_180681d50 */

void thunk_FUN_180681d50(LPVOID param_1)

{
  undefined4 *puVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar2 = HeapFree(DAT_180993270,0,param_1), BVar2 == 0)) {
    DVar3 = GetLastError();
    uVar4 = FUN_180677494(DVar3);
    puVar1 = (undefined4 *)FUN_180677424();
    *puVar1 = uVar4;
  }
  return;
}


/* address=1806240c0 name=FUN_1806240c0 */

void FUN_1806240c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined auStack_168 [32];
  char local_148;
  uint local_144;
  uint local_140;
  undefined8 *local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_168;
  local_148 = '\0';
  local_138 = &local_res18;
  local_res18 = param_3;
  local_res20 = param_4;
  local_144 = FUN_180590530(local_118,0x100,param_2,local_138);
  local_138 = (undefined8 *)0x0;
  if (-1 < (int)local_144) {
    if (local_144 < 0x100) {
      local_130 = local_118;
    }
    else {
      local_140 = local_144;
      local_130 = (undefined *)FUN_18058f4e0((longlong)(int)(local_144 + 1));
      local_148 = '\x01';
      if (local_130 == (undefined *)0x0) goto LAB_18062421e;
      local_138 = &local_res18;
      local_144 = FUN_180590530(local_130,(longlong)(int)(local_140 + 1),param_2,local_138);
      local_138 = (undefined8 *)0x0;
      if (local_144 != local_140) {
        FID_conflict__assert
                  (u_out_len____requested_len_180982790,u_D__a_1_s_target_x86_64_pc_window_1809826a0
                   ,0x5b);
      }
    }
    local_128 = FUN_18058c840(param_1,local_130,local_144);
    if (local_148 != '\0') {
      FUN_18058f610(local_130);
    }
  }
LAB_18062421e:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_168);
  return;
}


/* address=180624240 name=FUN_180624240 */

char * FUN_180624240(uint param_1)

{
  char *pcVar1;
  uint local_res8;
  
  if ((param_1 == 0x102) || (local_res8 = param_1, param_1 == 0x10a)) {
    local_res8 = param_1 & 0xfffffeff;
  }
  if (((int)local_res8 < 0) || (0x1e < (int)local_res8)) {
    pcVar1 = s__unknown__180982978;
  }
  else {
    pcVar1 = (&PTR_DAT_1807afbc0)[(int)local_res8];
  }
  return pcVar1;
}


/* address=180624290 name=FUN_180624290 */

void FUN_180624290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_1806242f0(param_1,param_2,param_3,param_4,param_5,0,0);
  return;
}


/* address=1806242f0 name=FUN_1806242f0 */

undefined4
FUN_1806242f0(longlong *param_1,char *param_2,size_t param_3,int param_4,uint param_5,
             ulonglong param_6,ulonglong param_7)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  size_t local_res18;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_ac;
  int local_a8;
  longlong local_a0;
  ulonglong local_98;
  code *local_88;
  ulonglong local_80;
  code *local_78;
  undefined local_70 [8];
  ulonglong local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined local_50 [16];
  undefined local_40 [64];
  
  local_res18 = param_3;
  if (param_3 == 0xffffffffffffffff) {
    local_res18 = strlen(param_2);
  }
  if (param_5 == 0) {
    param_5 = 0x2806;
  }
  if (param_4 == 0x1000) {
    local_88 = FUN_1805f6340;
    local_ac = 0x96;
  }
  else if (param_4 == 0x1001) {
    local_88 = (code *)&LAB_1805f64d0;
    local_ac = 0x44;
  }
  else if (param_4 == 0x1002) {
    local_88 = FUN_1805f6520;
    local_ac = 0x8e;
  }
  else {
    if (param_4 != 0x1004) {
      FUN_18050f6f0(0xc,0,0xb6,s_D__a_1_s_target_x86_64_pc_window_180982990,0x78);
      return 0xffffffff;
    }
    local_88 = FUN_1805f6580;
    local_ac = 0x95;
  }
  FUN_18059e730(local_50,param_2,local_res18);
  local_68 = 0;
  local_98 = 0;
  while (lVar3 = FUN_18059e7c0(local_50), lVar3 != 0) {
    iVar2 = (*local_88)(local_50);
    if (iVar2 == 0) {
      FUN_18050f6f0(0xc,0,local_ac,s_D__a_1_s_target_x86_64_pc_window_180982a10,0x83);
      return 0xffffffff;
    }
    if (((local_98 == 0) && ((param_4 == 0x1002 || (param_4 == 0x1004)))) && (local_b4 == 0xfeff)) {
      FUN_18050f6f0(0xc,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_180982a90,0x8e);
      return 0xffffffff;
    }
    if (((param_5 & 2) != 0) && (iVar2 = FUN_180624a50(local_b4), iVar2 == 0)) {
      param_5 = param_5 & 0xfffffffd;
    }
    if (((param_5 & 0x10) != 0) && (0x7f < local_b4)) {
      param_5 = param_5 & 0xffffffef;
    }
    if (((param_5 & 4) != 0) && (0xff < local_b4)) {
      param_5 = param_5 & 0xfffffffb;
    }
    if (((param_5 & 0x800) != 0) && (0xffff < local_b4)) {
      param_5 = param_5 & 0xfffff7ff;
    }
    if (param_5 == 0) {
      FUN_18050f6f0(0xc,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_180982b10,0xa0);
      return 0xffffffff;
    }
    local_98 = local_98 + 1;
    lVar3 = FUN_1805f65e0(local_b4);
    local_68 = local_68 + lVar3;
    if ((0 < (longlong)param_7) && (param_7 < local_98)) {
      FUN_18050f6f0(0xc,0,0xad,s_D__a_1_s_target_x86_64_pc_window_180982b90,0xa7);
      FUN_18050f860(s_maxsize__zu_180982c10,param_7);
      return 0xffffffff;
    }
  }
  if ((0 < (longlong)param_6) && (local_98 < param_6)) {
    FUN_18050f6f0(0xc,0,0xae,s_D__a_1_s_target_x86_64_pc_window_180982c20,0xae);
    FUN_18050f860(s_minsize__zu_180982ca0,param_6);
    return 0xffffffff;
  }
  local_78 = FUN_1805f67f0;
  local_80 = local_98;
  local_a8 = 0x1001;
  if ((param_5 & 2) == 0) {
    if ((param_5 & 0x10) == 0) {
      if ((param_5 & 4) == 0) {
        if ((param_5 & 0x800) == 0) {
          if ((param_5 & 0x100) == 0) {
            if ((param_5 & 0x2000) == 0) {
              FUN_18050f6f0(0xc,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_180982cb0,0xce);
              return 0xffffffff;
            }
            local_b8 = 0xc;
            local_a8 = 0x1000;
            local_78 = FUN_1805f6620;
            local_80 = local_68;
          }
          else {
            local_b8 = 0x1c;
            local_78 = (code *)&LAB_1805f68a0;
            local_80 = local_98 << 2;
            local_a8 = 0x1004;
          }
        }
        else {
          local_b8 = 0x1e;
          local_a8 = 0x1002;
          local_78 = FUN_1805f6840;
          local_80 = local_98 << 1;
        }
      }
      else {
        local_b8 = 0x14;
      }
    }
    else {
      local_b8 = 0x16;
    }
  }
  else {
    local_b8 = 0x13;
  }
  if (param_1 == (longlong *)0x0) {
    return local_b8;
  }
  bVar1 = false;
  if (*param_1 == 0) {
    bVar1 = true;
    local_a0 = FUN_180510550(local_b8);
    if (local_a0 == 0) {
      return 0xffffffff;
    }
  }
  else {
    local_a0 = *param_1;
  }
  FUN_1805905e0(local_40);
  if (param_4 == local_a8) {
    iVar2 = FUN_1805108a0(local_a0,param_2,local_res18);
    if (iVar2 != 0) {
      *(undefined4 *)(local_a0 + 4) = local_b8;
      *param_1 = local_a0;
      return local_b8;
    }
  }
  else {
    iVar2 = FUN_180590610(local_40,local_80 + 1);
    if (iVar2 != 0) {
      FUN_18059e730(local_50,param_2,local_res18);
      do {
        lVar3 = FUN_18059e7c0(local_50);
        if (lVar3 == 0) {
          local_58 = 0;
          iVar2 = FUN_180591010(local_40,0);
          if ((((iVar2 != 0) && (iVar2 = FUN_180590740(local_40,&local_58,&local_60), iVar2 != 0))
              && (CONCAT44(uStack_5c,local_60) != 0)) && (CONCAT44(uStack_5c,local_60) < 0x80000000)
             ) {
            *(undefined4 *)(local_a0 + 4) = local_b8;
            FUN_180510a10(local_a0,local_58,local_60 + -1);
            *param_1 = local_a0;
            return local_b8;
          }
          FUN_18050f6f0(0xc,0,0x44,s_D__a_1_s_target_x86_64_pc_window_180982db0,0xfe);
          FUN_18058f610(local_58);
          goto LAB_180624a17;
        }
        iVar2 = (*local_88)(local_50,local_70);
      } while ((iVar2 != 0) && (iVar2 = (*local_78)(local_40), iVar2 != 0));
      FUN_18050f6f0(0xc,0,0x44,s_D__a_1_s_target_x86_64_pc_window_180982d30,0xf4);
    }
  }
LAB_180624a17:
  if (bVar1) {
    FUN_1805105e0(local_a0);
  }
  FUN_1805906d0(local_40);
  return 0xffffffff;
}


/* address=180624a50 name=FUN_180624a50 */

undefined4 FUN_180624a50(uint param_1)

{
  int iVar1;
  undefined4 local_18;
  
  if (param_1 < 0x80) {
    iVar1 = FUN_18058fb80(param_1);
    if (((((iVar1 == 0) && (param_1 != 0x20)) && (param_1 != 0x27)) &&
        (((param_1 != 0x28 && (param_1 != 0x29)) &&
         ((param_1 != 0x2b && ((param_1 != 0x2c && (param_1 != 0x2d)))))))) &&
       ((param_1 != 0x2e &&
        ((((param_1 != 0x2f && (param_1 != 0x3a)) && (param_1 != 0x3d)) && (param_1 != 0x3f)))))) {
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


/* address=180624b00 name=FUN_180624b00 */

void FUN_180624b00(undefined8 param_1,undefined8 param_2)

{
  FUN_180510770(param_1,param_2);
  return;
}


/* address=180624b30 name=FUN_180624b30 */

void FUN_180624b30(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_1805108a0(param_1,param_2,(longlong)param_3);
  return;
}


/* address=180624b90 name=FUN_180624b90 */

void FUN_180624b90(void)

{
  FUN_180514f00();
  return;
}


/* address=180624bb0 name=FUN_180624bb0 */

void FUN_180624bb0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180624bd0 name=FUN_180624bd0 */

void FUN_180624bd0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180624c00 name=FUN_180624c00 */

void FUN_180624c00(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_180624b60,param_2);
  return;
}


/* address=180624c60 name=FUN_180624c60 */

void FUN_180624c60(void)

{
  FUN_180514f00();
  return;
}


/* address=180624c80 name=FUN_180624c80 */

void FUN_180624c80(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180624ca0 name=FUN_180624ca0 */

void FUN_180624ca0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180624cd0 name=FUN_180624cd0 */

void FUN_180624cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180514fe0(param_1,param_2,param_3);
  return;
}


/* address=180624d10 name=FUN_180624d10 */

void FUN_180624d10(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_180624c30,param_2);
  return;
}


/* address=180624d40 name=FUN_180624d40 */

void FUN_180624d40(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=180624d70 name=FUN_180624d70 */

/* WARNING: Removing unreachable block (ram,0x000180624ff0) */

void FUN_180624d70(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  undefined auStack_188 [32];
  uint local_168;
  uint local_160;
  uint local_158;
  int local_148;
  byte *local_140;
  ushort local_138;
  undefined4 local_134;
  undefined8 local_130;
  char local_128 [16];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_188;
  local_134 = *param_2;
  local_res18[0] = param_3;
  switch(local_134) {
  case 0:
    FUN_18061f830(s_othername_180982e40,s_<unsupported>_180982e30,local_res18);
    break;
  case 1:
    FUN_18061f390(s_email_180982e90,*(undefined8 *)(param_2 + 2),local_res18);
    break;
  case 2:
    FUN_18061f390(&DAT_180982e98,*(undefined8 *)(param_2 + 2),local_res18);
    break;
  case 3:
    FUN_18061f830(s_X400Name_180982e60,s_<unsupported>_180982e50,local_res18);
    break;
  case 4:
    lVar1 = FUN_180655c60(*(undefined8 *)(param_2 + 2),local_118,0x100);
    if (lVar1 != 0) {
      FUN_18061f830(s_DirName_180982ea0,local_118,local_res18);
    }
    break;
  case 5:
    FUN_18061f830(s_EdiPartyName_180982e80,s_<unsupported>_180982e70,local_res18);
    break;
  case 6:
    FUN_18061f390(&DAT_180982e9c,*(undefined8 *)(param_2 + 2),local_res18);
    break;
  case 7:
    local_140 = *(byte **)(*(longlong *)(param_2 + 2) + 8);
    if (**(int **)(param_2 + 2) == 4) {
      local_158 = (uint)local_140[3];
      local_160 = (uint)local_140[2];
      local_168 = (uint)local_140[1];
      _snprintf(local_118,0x100,s__d__d__d__d_180982ea8,(ulonglong)*local_140);
    }
    else {
      if (**(int **)(param_2 + 2) != 0x10) {
        FUN_18061f830(s_IP_Address_180982ed0,s_<invalid>_180982ec0,local_res18);
        break;
      }
      local_130 = 0;
      local_118[0] = '\0';
      for (local_148 = 0; local_148 < 8; local_148 = local_148 + 1) {
        local_138 = CONCAT11(*local_140,local_140[1]);
        _snprintf(local_128,5,&DAT_180982eb4,(ulonglong)local_138);
        local_140 = local_140 + 2;
        FUN_1805900c0(local_118,local_128,0x100);
        if (local_148 != 7) {
          FUN_1805900c0(local_118,&DAT_180982eb8,0x100);
        }
      }
    }
    FUN_18061f830(s_IP_Address_180982ee0,local_118,local_res18);
    break;
  case 8:
    FUN_1805ef180(local_118,0x100,*(undefined8 *)(param_2 + 2));
    FUN_18061f830(s_Registered_ID_180982ef0,local_118,local_res18);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_188);
  return;
}


/* address=180625190 name=FUN_180625190 */

undefined8 FUN_180625190(undefined8 param_1,undefined4 *param_2)

{
  int local_24;
  undefined *local_18;
  
  switch(*param_2) {
  case 0:
    FUN_1806240c0(param_1,s_othername_<unsupported>_180982f00);
    break;
  case 1:
    FUN_1806240c0(param_1,s_email__180982f4c);
    FUN_1805a7a70(param_1,*(undefined8 *)(param_2 + 2));
    break;
  case 2:
    FUN_1806240c0(param_1,&DAT_180982f54);
    FUN_1805a7a70(param_1,*(undefined8 *)(param_2 + 2));
    break;
  case 3:
    FUN_1806240c0(param_1,s_X400Name_<unsupported>_180982f18);
    break;
  case 4:
    FUN_1806240c0(param_1,s_DirName__180982f68);
    FUN_180621720(param_1,*(undefined8 *)(param_2 + 2),0,0x82031f);
    break;
  case 5:
    FUN_1806240c0(param_1,s_EdiPartyName_<unsupported>_180982f30);
    break;
  case 6:
    FUN_1806240c0(param_1,&DAT_180982f5c);
    FUN_1805a7a70(param_1,*(undefined8 *)(param_2 + 2));
    break;
  case 7:
    local_18 = *(undefined **)(*(longlong *)(param_2 + 2) + 8);
    if (**(int **)(param_2 + 2) == 4) {
      FUN_1806240c0(param_1,s_IP_Address__d__d__d__d_180982f78,*local_18,local_18[1],local_18[2],
                    local_18[3]);
    }
    else if (**(int **)(param_2 + 2) == 0x10) {
      FUN_1806240c0(param_1,s_IP_Address_180982f90);
      for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
        FUN_1806240c0(param_1,&DAT_180982f9c,CONCAT11(*local_18,local_18[1]));
        local_18 = local_18 + 2;
      }
      FUN_18058c9e0(param_1,&DAT_180982fa0);
    }
    else {
      FUN_1806240c0(param_1,s_IP_Address_<invalid>_180982fa8);
    }
    break;
  case 8:
    FUN_1806240c0(param_1,s_Registered_ID_180982fc0);
    FUN_1805ef050(param_1,*(undefined8 *)(param_2 + 2));
  }
  return 1;
}


/* address=180625470 name=FUN_180625470 */

longlong FUN_180625470(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res18;
  ulonglong local_20;
  
  local_20 = 0;
  local_res18 = param_3;
  while( true ) {
    uVar1 = FUN_180624c80(param_2);
    if (uVar1 <= local_20) {
      if (local_res18 == 0) {
        local_res18 = FUN_180624b90();
      }
      return local_res18;
    }
    uVar2 = FUN_180624ca0(param_2,local_20);
    lVar3 = FUN_180624d70(param_1,uVar2,local_res18);
    if (lVar3 == 0) break;
    local_20 = local_20 + 1;
    local_res18 = lVar3;
  }
  if (param_3 == 0) {
    FUN_180624c00(local_res18,&LAB_18061e370);
  }
  return 0;
}


/* address=180625550 name=FUN_180625550 */

longlong FUN_180625550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong local_28;
  
  lVar1 = FUN_180624c60();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    for (local_28 = 0; uVar2 = FUN_180624bb0(param_3), local_28 < uVar2; local_28 = local_28 + 1) {
      uVar3 = FUN_180624bd0(param_3,local_28);
      lVar4 = FUN_180625950(param_1,param_2,uVar3);
      if ((lVar4 == 0) || (lVar5 = FUN_180624d40(lVar1,lVar4), lVar5 == 0)) {
        FUN_1805a9e20(lVar4);
        FUN_180624d10(lVar1,FUN_1805a9e20);
        return 0;
      }
    }
  }
  return lVar1;
}


/* address=180625630 name=FUN_180625630 */

undefined4 *
FUN_180625630(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             char *param_5,int param_6)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *local_20;
  
  if (param_5 == (char *)0x0) {
    FUN_18050f6f0(0x14,0,0x89,s_D__a_1_s_target_x86_64_pc_window_180983180,0x1c8);
  }
  else {
    local_20 = param_1;
    if ((param_1 != (undefined4 *)0x0) ||
       (local_20 = (undefined4 *)FUN_1805a9e00(), local_20 != (undefined4 *)0x0)) {
      switch(param_4) {
      case 0:
        iVar1 = FUN_180626180(local_20,param_5,param_3);
        if (iVar1 != 0) {
          return local_20;
        }
        FUN_18050f6f0(0x14,0,0x94,s_D__a_1_s_target_x86_64_pc_window_1809833a0,0x207);
        break;
      case 1:
      case 2:
      case 6:
        lVar3 = FUN_180511060();
        if (lVar3 != 0) {
          sVar2 = strlen(param_5);
          iVar1 = FUN_1805108a0(lVar3,param_5,sVar2);
          if (iVar1 != 0) {
            *local_20 = param_4;
            *(longlong *)(local_20 + 2) = lVar3;
            return local_20;
          }
        }
        FUN_1805105e0(lVar3);
        break;
      default:
        FUN_18050f6f0(0x14,0,0xa1,s_D__a_1_s_target_x86_64_pc_window_180983420,0x20c);
        break;
      case 4:
        iVar1 = FUN_1806262b0(local_20,param_5,param_3);
        if (iVar1 != 0) {
          return local_20;
        }
        FUN_18050f6f0(0x14,0,0x69,s_D__a_1_s_target_x86_64_pc_window_180983320,0x200);
        break;
      case 7:
        *local_20 = 7;
        if (param_6 == 0) {
          uVar4 = FUN_18061eae0(param_5);
          *(undefined8 *)(local_20 + 2) = uVar4;
        }
        else {
          uVar4 = FUN_18061eb70(param_5);
          *(undefined8 *)(local_20 + 2) = uVar4;
        }
        if (*(longlong *)(local_20 + 2) != 0) {
          return local_20;
        }
        FUN_18050f6f0(0x14,0,100,s_D__a_1_s_target_x86_64_pc_window_180983290,0x1f8);
        FUN_18050f810(2,s_value__18098330c,param_5);
        break;
      case 8:
        lVar3 = FUN_1805a9070(param_5,0);
        if (lVar3 != 0) {
          *local_20 = 8;
          *(longlong *)(local_20 + 2) = lVar3;
          return local_20;
        }
        FUN_18050f6f0(0x14,0,0x65,s_D__a_1_s_target_x86_64_pc_window_180983200,0x1e7);
        FUN_18050f810(2,s_value__18098327c,param_5);
      }
      if (param_1 == (undefined4 *)0x0) {
        FUN_1805a9e20(local_20);
      }
    }
  }
  return (undefined4 *)0x0;
}


/* address=180625950 name=FUN_180625950 */

void FUN_180625950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180625990(0,param_1,param_2,param_3,0);
  return;
}


/* address=180625990 name=FUN_180625990 */

undefined8
FUN_180625990(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  undefined4 local_28;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar3 = *(undefined8 *)(param_4 + 8);
  lVar1 = *(longlong *)(param_4 + 0x10);
  if (lVar1 == 0) {
    FUN_18050f6f0(0x14,0,0x89,s_D__a_1_s_target_x86_64_pc_window_1809834a0,CONCAT44(uVar4,0x220));
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_18061f110(uVar3,s_email_18098351c);
    if (iVar2 == 0) {
      iVar2 = FUN_18061f110(uVar3,&DAT_180983524);
      if (iVar2 == 0) {
        iVar2 = FUN_18061f110(uVar3,&DAT_180983528);
        if (iVar2 == 0) {
          iVar2 = FUN_18061f110(uVar3,&DAT_18098352c);
          if (iVar2 == 0) {
            iVar2 = FUN_18061f110(uVar3,&DAT_180983530);
            if (iVar2 == 0) {
              iVar2 = FUN_18061f110(uVar3,s_dirName_180983538);
              if (iVar2 == 0) {
                iVar2 = FUN_18061f110(uVar3,s_otherName_180983540);
                if (iVar2 == 0) {
                  FUN_18050f6f0(0x14,0,0xa0,s_D__a_1_s_target_x86_64_pc_window_180983550,
                                CONCAT44(uVar4,0x234));
                  FUN_18050f810(2,s_name__1809835cc,uVar3);
                  return 0;
                }
                local_28 = 0;
              }
              else {
                local_28 = 4;
              }
            }
            else {
              local_28 = 7;
            }
          }
          else {
            local_28 = 8;
          }
        }
        else {
          local_28 = 2;
        }
      }
      else {
        local_28 = 6;
      }
    }
    else {
      local_28 = 1;
    }
    uVar3 = FUN_180625630(param_1,param_2,param_3,local_28,lVar1,param_5);
  }
  return uVar3;
}


/* address=180625e20 name=FUN_180625e20 */

undefined8 FUN_180625e20(int *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_38;
  undefined4 *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_30 = (undefined4 *)0x0;
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    if ((param_1 == (int *)0x0) ||
       ((*(longlong *)(param_1 + 4) == 0 && (*(longlong *)(param_1 + 6) == 0)))) {
      FUN_18050f6f0(0x14,0,0x91,s_D__a_1_s_target_x86_64_pc_window_180983100,0x181);
    }
    else {
      if (*(longlong *)(param_1 + 4) == 0) {
        local_20 = FUN_180621f90(*(undefined8 *)(param_1 + 6));
      }
      else {
        local_20 = FUN_180594d10(*(undefined8 *)(param_1 + 4));
      }
      local_38 = -1;
      do {
        local_30 = (undefined4 *)0x0;
        local_38 = FUN_18060f110(local_20,0x30,local_38);
        if (local_38 < 0) {
          return 1;
        }
        uVar1 = FUN_18060f220(local_20,local_38);
        uVar2 = FUN_18060f810(uVar1);
        local_28 = FUN_180510690(uVar2);
        if (param_3 != 0) {
          FUN_18060f280(local_20,local_38);
          FUN_180513a50(uVar1);
          local_38 = local_38 + -1;
        }
        if ((local_28 == 0) ||
           (local_30 = (undefined4 *)FUN_1805a9e00(), local_30 == (undefined4 *)0x0)) break;
        *(longlong *)(local_30 + 2) = local_28;
        local_28 = 0;
        *local_30 = 1;
        lVar3 = FUN_180624d40(param_2,local_30);
      } while (lVar3 != 0);
    }
    FUN_1805a9e20(local_30);
    FUN_180511180(local_28);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* address=180625ff0 name=FUN_180625ff0 */

undefined4 FUN_180625ff0(int *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    if ((param_1 == (int *)0x0) || (*(longlong *)(param_1 + 2) == 0)) {
      FUN_18050f6f0(0x14,0,0x8d,s_D__a_1_s_target_x86_64_pc_window_180982fe0,0x133);
      local_34 = 0;
    }
    else {
      iVar1 = FUN_180618e20(*(undefined8 *)(param_1 + 2),0x55,0xffffffff);
      if (iVar1 < 0) {
        local_34 = 1;
      }
      else {
        local_34 = 0;
        local_30 = 0;
        lVar2 = FUN_180618ee0(*(undefined8 *)(param_1 + 2),iVar1);
        if ((lVar2 == 0) || (local_30 = FUN_180649780(lVar2), local_30 == 0)) {
          FUN_18050f6f0(0x14,0,0x88,s_D__a_1_s_target_x86_64_pc_window_180983060,0x140);
        }
        else {
          for (local_28 = 0; uVar3 = FUN_180624c80(local_30), local_28 < uVar3;
              local_28 = local_28 + 1) {
            uVar4 = FUN_180624ca0(local_30,local_28);
            lVar2 = FUN_180624d40(param_2,uVar4);
            if (lVar2 == 0) goto LAB_18062615f;
            FUN_180624cd0(local_30,local_28,0);
          }
          local_34 = 1;
        }
LAB_18062615f:
        FUN_1805a9f10(local_30);
      }
    }
  }
  else {
    local_34 = 1;
  }
  return local_34;
}


/* address=180626180 name=FUN_180626180 */

undefined8 FUN_180626180(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = FUN_18066ac00(param_2,0x3b);
  if ((lVar1 != 0) && (plVar2 = (longlong *)FUN_1805a9fb0(), plVar2 != (longlong *)0x0)) {
    lVar3 = FUN_18058fef0(param_2,lVar1 - param_2);
    if (lVar3 != 0) {
      FUN_1805eec50(*plVar2);
      lVar4 = FUN_1805a9070(lVar3,0);
      *plVar2 = lVar4;
      FUN_18058f610(lVar3);
      if (*plVar2 != 0) {
        FUN_180511c20(plVar2[1]);
        lVar1 = FUN_180649dc0(lVar1 + 1,param_3);
        plVar2[1] = lVar1;
        if (plVar2[1] != 0) {
          *param_1 = 0;
          *(longlong **)(param_1 + 2) = plVar2;
          return 1;
        }
      }
    }
    FUN_1805a9fd0(plVar2);
  }
  return 0;
}


/* address=1806262b0 name=FUN_1806262b0 */

int FUN_1806262b0(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int local_28;
  
  local_28 = 0;
  lVar2 = FUN_180513870();
  if (lVar2 != 0) {
    lVar3 = FUN_1805efa20(param_3,param_2);
    if (lVar3 == 0) {
      FUN_18050f6f0(0x14,0,0x99,s_D__a_1_s_target_x86_64_pc_window_1809835e0,0x26b);
      FUN_18050f810(2,s_section__180983660,param_2);
    }
    else {
      iVar1 = FUN_18061f3e0(lVar2,lVar3,0x1001);
      if (iVar1 != 0) {
        *param_1 = 4;
        *(longlong *)(param_1 + 2) = lVar2;
        local_28 = 1;
      }
    }
  }
  if (local_28 == 0) {
    FUN_180513890(lVar2);
  }
  return local_28;
}


/* address=1806265f0 name=FUN_1806265f0 */

void FUN_1806265f0(void)

{
  return;
}


/* address=180626660 name=FUN_180626660 */

undefined8 FUN_180626660(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1806266b0 name=FUN_1806266b0 */

undefined8 FUN_1806266b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1806266f0 name=FUN_1806266f0 */

undefined * FUN_1806266f0(DWORD param_1)

{
  FormatMessageA(0x12ff,(LPCVOID)0x0,param_1,0x400,&DAT_180992880,0x400,(va_list *)0x0);
  return &DAT_180992880;
}


/* address=180626740 name=FUN_180626740 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180626740(void)

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
  
  FUN_180626b60(&local_60,&local_5c,&local_68,&local_64,0);
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
    FUN_180626b60(&local_60,&local_5c,&local_68,&local_64,7);
    local_58 = local_5c;
    uStack_54 = local_68;
  }
  FUN_180626b60(&local_60,&local_5c,&local_68,&local_64,1);
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
    local_20 = FUN_180626c10(0);
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
  DAT_180992840 = local_64;
  DAT_180992844 = local_68;
  DAT_180992848 = local_58;
  _DAT_18099284c = uStack_54;
  local_18 = common_getenv<>(s_OPENSSL_ia32cap_180983780);
  if (local_18 != 0) {
    FUN_180626c30(&DAT_180992840,local_18);
    local_10 = FUN_18066ac00(local_18,0x3a);
    if (local_10 != 0) {
      FUN_180626c30(&DAT_180992848,local_10 + 1);
    }
  }
  return;
}


/* address=180626b60 name=FUN_180626b60 */

void FUN_180626b60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  int param_5)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)&local_28;
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
  FUN_18050ec30(local_18 ^ (ulonglong)&local_28);
  return;
}


/* address=180626c10 name=FUN_180626c10 */

ulonglong FUN_180626c10(void)

{
  undefined8 in_RAX;
  undefined4 in_XCR0;
  uint in_register_00000604;
  
  return (ulonglong)in_register_00000604 << 0x20 |
         CONCAT44((int)((ulonglong)in_RAX >> 0x20),in_XCR0);
}


/* address=180626c30 name=FUN_180626c30 */

void FUN_180626c30(uint *param_1,char *param_2)

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
    local_14 = FUN_180621450(param_2 + (int)local_28,&DAT_180983778,&local_30);
  }
  else {
    local_14 = FUN_180621450(param_2 + (longlong)(int)local_28 + 2,&DAT_180983770,&local_30);
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


/* address=180626fa0 name=FUN_180626fa0 */

undefined8 FUN_180626fa0(undefined8 param_1,ushort param_2)

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
      uVar1 = FUN_18062b010();
      uVar1 = FUN_180521630(local_18,uVar1);
      FUN_180521660(param_1,uVar1);
      FUN_1805c6f90(local_18);
      return param_1;
    }
    if (param_2 == 0x15) {
      local_84 = 0x15;
      local_80 = 0x2c9;
      uVar1 = FUN_18062ada0(local_60,&local_80,&local_84);
      FUN_18062ae10(param_1,uVar1);
      FUN_18062a970(local_60);
      return param_1;
    }
    if (param_2 == 0x17) {
      local_7c = 0x17;
      local_78 = 0x19f;
      uVar1 = FUN_18062ada0(local_58,&local_78,&local_7c);
      FUN_18062ae10(param_1,uVar1);
      FUN_18062a970(local_58);
      return param_1;
    }
    if (param_2 == 0x18) {
      local_74 = 0x18;
      local_70 = 0x2cb;
      uVar1 = FUN_18062ada0(local_50,&local_70,&local_74);
      FUN_18062ae10(param_1,uVar1);
      FUN_18062a970(local_50);
      return param_1;
    }
    if (param_2 == 0x19) {
      local_6c = 0x19;
      local_68[0] = 0x2cc;
      uVar1 = FUN_18062ada0(local_48,local_68,&local_6c);
      FUN_18062ae10(param_1,uVar1);
      FUN_18062a970(local_48);
      return param_1;
    }
    if (param_2 == 0x1d) {
      uVar1 = FUN_18062ae70(local_40);
      FUN_18062aeb0(param_1,uVar1);
      FUN_18062aa30(local_40);
      return param_1;
    }
  }
  else {
    if (param_2 == 0x6399) {
      uVar1 = FUN_18062af60(local_res10);
      uVar1 = FUN_180521630(local_30,uVar1);
      FUN_180521660(param_1,uVar1);
      FUN_1805c6f90(local_30);
      return param_1;
    }
    if (param_2 == 0xfe30) {
      uVar1 = FUN_18062af10();
      uVar1 = FUN_180521630(local_38,uVar1);
      FUN_180521660(param_1,uVar1);
      FUN_1805c6f90(local_38);
      return param_1;
    }
    if (param_2 == 0xfe31) {
      uVar1 = FUN_18062af60(local_res10);
      uVar1 = FUN_180521630(local_28,uVar1);
      FUN_180521660(param_1,uVar1);
      FUN_1805c6f90(local_28);
      return param_1;
    }
    if (param_2 == 0xfe32) {
      uVar1 = FUN_18062afc0();
      uVar1 = FUN_180521630(local_20,uVar1);
      FUN_180521660(param_1,uVar1);
      FUN_1805c6f90(local_20);
      return param_1;
    }
  }
  FUN_1805b3320(param_1,0);
  return param_1;
}


/* address=180627340 name=FUN_180627340 */

undefined8 FUN_180627340(undefined2 *param_1,int param_2)

{
  undefined **local_28;
  
  local_28 = (undefined **)&DAT_1807b00c0;
  while( true ) {
    if (local_28 == &PTR_DAT_1807b0390) {
      return 0;
    }
    if (*(int *)local_28 == param_2) break;
    local_28 = local_28 + 9;
  }
  *param_1 = *(undefined2 *)((longlong)local_28 + 4);
  return 1;
}


/* address=1806273d0 name=FUN_1806273d0 */

undefined8 FUN_1806273d0(undefined2 *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  undefined **local_20;
  
  local_20 = (undefined **)&DAT_1807b00c0;
  while( true ) {
    if (local_20 == &PTR_DAT_1807b0390) {
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


/* address=180627500 name=FUN_180627500 */

undefined8 * FUN_180627500(undefined8 *param_1,undefined4 param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  FUN_18062ac40(param_1);
  *param_1 = &PTR_LAB_1807b03d8;
  FUN_180523350(param_1 + 1);
  uVar1 = FUN_18056b630(param_2);
  param_1[2] = uVar1;
  *(undefined2 *)(param_1 + 3) = param_3;
  return param_1;
}


/* address=180627d70 name=FUN_180627d70 */

void FUN_180627d70(longlong param_1)

{
  FUN_1805e6840(param_1 + 8);
  FUN_18062abb0(param_1);
  return;
}


/* address=180627e00 name=FUN_180627e00 */

undefined8 * FUN_180627e00(undefined8 *param_1)

{
  FUN_18062ac40(param_1);
  *param_1 = &PTR_LAB_1807b0418;
  return param_1;
}


/* address=180628150 name=FUN_180628150 */

void FUN_180628150(undefined8 param_1)

{
  FUN_18062abb0(param_1);
  return;
}


/* address=1806281d0 name=FUN_1806281d0 */

undefined8 * FUN_1806281d0(undefined8 *param_1)

{
  FUN_18062ac40(param_1);
  *param_1 = &PTR_LAB_1807b0458;
  FUN_180523350(param_1 + 1);
  return param_1;
}


/* address=180629570 name=FUN_180629570 */

void FUN_180629570(longlong param_1)

{
  FUN_1805e6840(param_1 + 8);
  FUN_18062abb0(param_1);
  return;
}


/* address=180629600 name=FUN_180629600 */

undefined8 * FUN_180629600(undefined8 *param_1,short param_2)

{
  FUN_18062ac40(param_1);
  *param_1 = &PTR_LAB_1807b0498;
  *(short *)(param_1 + 0x131) = param_2;
  if ((param_2 != 0x6399) && (param_2 != -0x1cf)) {
    FID_conflict__assert
              (L"group_id == SSL_CURVE_X25519_KYBER768_DRAFT00 || group_id == SSL_CURVE_X25519_KYBER768_DRAFT00_OLD"
               ,
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_key_share.cc"
               ,0x1a4);
  }
  return param_1;
}


/* address=180629c20 name=FUN_180629c20 */

void FUN_180629c20(undefined8 param_1)

{
  FUN_18062abb0(param_1);
  return;
}


/* address=180629ca0 name=FUN_180629ca0 */

undefined8 * FUN_180629ca0(undefined8 *param_1)

{
  FUN_18062ac40(param_1);
  *param_1 = &PTR_LAB_1807b04d8;
  return param_1;
}


/* address=18062a290 name=FUN_18062a290 */

void FUN_18062a290(undefined8 param_1)

{
  FUN_18062abb0(param_1);
  return;
}


/* address=18062a310 name=FUN_18062a310 */

undefined8 * FUN_18062a310(undefined8 *param_1)

{
  FUN_18062ac40(param_1);
  *param_1 = &PTR_LAB_1807b0518;
  return param_1;
}


/* address=18062a8f0 name=FUN_18062a8f0 */

void FUN_18062a8f0(undefined8 param_1)

{
  FUN_18062abb0(param_1);
  return;
}


/* address=18062a970 name=FUN_18062a970 */

void FUN_18062a970(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_18062aa10(param_1);
    FUN_18062b140(uVar1,*param_1);
  }
  return;
}


/* address=18062a9b0 name=FUN_18062a9b0 */

void FUN_18062a9b0(undefined8 param_1)

{
  FUN_18062aa10(param_1);
  return;
}


/* address=18062a9e0 name=std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release */

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


/* address=18062aa10 name=FUN_18062aa10 */

undefined8 FUN_18062aa10(undefined8 param_1)

{
  return param_1;
}


/* address=18062aa30 name=FUN_18062aa30 */

void FUN_18062aa30(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_18062aad0(param_1);
    FUN_18062b120(uVar1,*param_1);
  }
  return;
}


/* address=18062aa70 name=FUN_18062aa70 */

void FUN_18062aa70(undefined8 param_1)

{
  FUN_18062aad0(param_1);
  return;
}


/* address=18062aaa0 name=std::unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>::release */

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


/* address=18062aad0 name=FUN_18062aad0 */

undefined8 FUN_18062aad0(undefined8 param_1)

{
  return param_1;
}


/* address=18062aaf0 name=FUN_18062aaf0 */

void FUN_18062aaf0(facet *param_1)

{
  std::_DebugHeapDelete<class_std::locale::facet>(param_1);
  return;
}


/* address=18062ab10 name=FUN_18062ab10 */

void FUN_18062ab10(facet *param_1)

{
  std::_DebugHeapDelete<class_std::locale::facet>(param_1);
  return;
}


/* address=18062ab30 name=FUN_18062ab30 */

void FUN_18062ab30(undefined8 param_1)

{
  FUN_18053e1c0(param_1);
  return;
}


/* address=18062ab50 name=FUN_18062ab50 */

undefined8 * FUN_18062ab50(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_18053e250(*param_1);
  return param_1;
}


/* address=18062ab90 name=FUN_18062ab90 */

void FUN_18062ab90(undefined8 *param_1)

{
  FUN_18053e400(*param_1);
  return;
}


/* address=18062abb0 name=FUN_18062abb0 */

void FUN_18062abb0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_1807b0398;
  return;
}


/* address=18062abd0 name=FUN_18062abd0 */

void FUN_18062abd0(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


/* address=18062ac40 name=FUN_18062ac40 */

undefined8 * FUN_18062ac40(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_1807b0398;
  return param_1;
}


/* address=18062acc0 name=FUN_18062acc0 */

void FUN_18062acc0(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1805214c0(param_1);
    FUN_1805e68e0(uVar2,p_Var1);
  }
  return;
}


/* address=18062ad10 name=FUN_18062ad10 */

void FUN_18062ad10(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1805214c0(param_1);
    FUN_18062b160(uVar1,*param_1);
  }
  return;
}


/* address=18062ad50 name=FUN_18062ad50 */

void FUN_18062ad50(_Facet_base **param_1,_Facet_base *param_2)

{
  _Facet_base *p_Var1;
  undefined8 uVar2;
  _Facet_base *local_res10 [3];
  
  local_res10[0] = param_2;
  p_Var1 = std::exchange<class_std::_Facet_base*___ptr64,class_std::_Facet_base*___ptr64>
                     (param_1,local_res10);
  if (p_Var1 != (_Facet_base *)0x0) {
    uVar2 = FUN_1805214c0(param_1);
    FUN_1805e6920(uVar2,p_Var1);
  }
  return;
}


/* address=18062ada0 name=FUN_18062ada0 */

undefined8 FUN_18062ada0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined local_10 [16];
  
  uVar1 = FUN_1805214c0(param_3);
  uVar2 = FUN_1805214c0(param_2);
  uVar1 = FUN_18062b060(uVar2,uVar1);
  uVar1 = FUN_180521630(local_10,uVar1);
  FUN_18062ae10(param_1,uVar1);
  FUN_18062a970(local_10);
  return param_1;
}


/* address=18062ae10 name=FUN_18062ae10 */

undefined8
FUN_18062ae10(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  undefined8 uVar1;
  undefined local_18;
  _Facet_base *local_10 [2];
  
  local_10[0] = std::
                unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                ::release(param_2);
  uVar1 = FUN_18062a9b0(param_2);
  uVar1 = FUN_1805214c0(uVar1);
  FUN_180523960(param_1,local_18,uVar1,local_10);
  return param_1;
}


/* address=18062ae70 name=FUN_18062ae70 */

undefined8 FUN_18062ae70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_18062b0d0();
  uVar1 = FUN_180521630(local_18,uVar1);
  FUN_18062aeb0(param_1,uVar1);
  FUN_18062aa30(local_18);
  return param_1;
}


/* address=18062aeb0 name=FUN_18062aeb0 */

undefined8
FUN_18062aeb0(undefined8 param_1,
             unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
             *param_2)

{
  undefined8 uVar1;
  undefined local_18;
  _Facet_base *local_10 [2];
  
  local_10[0] = std::
                unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                ::release(param_2);
  uVar1 = FUN_18062aa70(param_2);
  uVar1 = FUN_1805214c0(uVar1);
  FUN_180523960(param_1,local_18,uVar1,local_10);
  return param_1;
}


/* address=18062af10 name=FUN_18062af10 */

undefined8 FUN_18062af10(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18058f4e0(0x688);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805213c0(0x688,lVar1);
    uVar2 = FUN_18062a310(uVar2);
  }
  return uVar2;
}


/* address=18062af60 name=FUN_18062af60 */

undefined8 FUN_18062af60(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  lVar1 = FUN_18058f4e0(0x990);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805213c0(0x990,lVar1);
    puVar3 = (undefined2 *)FUN_1805214c0(param_1);
    uVar2 = FUN_180629600(uVar2,*puVar3);
  }
  return uVar2;
}


/* address=18062afc0 name=FUN_18062afc0 */

undefined8 FUN_18062afc0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18058f4e0(0x970);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805213c0(0x970,lVar1);
    uVar2 = FUN_1806281d0(uVar2);
  }
  return uVar2;
}


/* address=18062b010 name=FUN_18062b010 */

undefined8 FUN_18062b010(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18058f4e0(0x988);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805213c0(0x988,lVar1);
    uVar2 = FUN_180629ca0(uVar2);
  }
  return uVar2;
}


/* address=18062b060 name=FUN_18062b060 */

undefined8 FUN_18062b060(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  
  lVar1 = FUN_18058f4e0(0x20);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805213c0(0x20,lVar1);
    puVar3 = (undefined2 *)FUN_1805214c0(param_2);
    puVar4 = (undefined4 *)FUN_1805214c0(param_1);
    uVar2 = FUN_180627500(uVar2,*puVar4,*puVar3);
  }
  return uVar2;
}


/* address=18062b0d0 name=FUN_18062b0d0 */

undefined8 FUN_18062b0d0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18058f4e0(0x28);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805213c0(0x28,lVar1);
    uVar2 = FUN_180627e00(uVar2);
  }
  return uVar2;
}


/* address=18062b120 name=FUN_18062b120 */

void FUN_18062b120(undefined8 param_1,undefined8 param_2)

{
  FUN_18062aaf0(param_2);
  return;
}


/* address=18062b140 name=FUN_18062b140 */

void FUN_18062b140(undefined8 param_1,undefined8 param_2)

{
  FUN_18062ab10(param_2);
  return;
}


/* address=18062b160 name=FUN_18062b160 */

void FUN_18062b160(undefined8 param_1,undefined8 param_2)

{
  FUN_18062ab30(param_2);
  return;
}


/* address=18062b180 name=FUN_18062b180 */

undefined4
FUN_18062b180(longlong param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4,
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
    FUN_18050f6f0(4,0,0x90,s_D__a_1_s_target_x86_64_pc_window_180983e10,0x17c);
    return 0;
  }
  iVar1 = FUN_180582f00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1805697e0(param_1);
  local_20 = 0;
  local_2c = 0;
  if (param_4 < uVar2) {
    FUN_18050f6f0(4,0,0x87,s_D__a_1_s_target_x86_64_pc_window_180983e90,CONCAT44(uVar7,0x18b));
    return 0;
  }
  lVar3 = FUN_18053e150();
  if (lVar3 != 0) {
    FUN_18053e250(lVar3);
    lVar4 = FUN_18053e2b0(lVar3);
    lVar5 = FUN_18053e2b0(lVar3);
    local_20 = FUN_18058f4e0(uVar2);
    if (((lVar4 != 0) && (lVar5 != 0)) && (local_20 != 0)) {
      if (param_7 == 1) {
        local_30 = FUN_18062c450(local_20,uVar2,param_5,param_6);
      }
      else if (param_7 == 3) {
        local_30 = FUN_180582e60(local_20,uVar2,param_5,param_6);
      }
      else {
        if (param_7 != 4) {
          FUN_18050f6f0(4,0,0x8f,s_D__a_1_s_target_x86_64_pc_window_180983f10,CONCAT44(uVar7,0x1a9))
          ;
          goto LAB_18062b4ef;
        }
        uVar7 = 0;
        local_30 = FUN_18062b8a0(local_20,uVar2,param_5,param_6,0,0,0,0);
      }
      if ((0 < local_30) && (lVar6 = FUN_18053dcd0(local_20,uVar2,lVar4), lVar6 != 0)) {
        iVar1 = FUN_18053f9a0(lVar4,*(undefined8 *)(param_1 + 8));
        if (iVar1 < 0) {
          iVar1 = FUN_180555600(param_1 + 0x60,param_1 + 0x58,*(undefined8 *)(param_1 + 8),lVar3);
          if (iVar1 != 0) {
            lVar6 = lVar3;
            iVar1 = FUN_180543dc0(lVar5,lVar4,*(undefined8 *)(param_1 + 0x10),
                                  *(longlong *)(param_1 + 0x60) + 0x18,lVar3,
                                  *(undefined8 *)(param_1 + 0x60));
            uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
            if (iVar1 != 0) {
              iVar1 = FUN_18053e010(param_3,uVar2,lVar5);
              if (iVar1 == 0) {
                FUN_18050f6f0(4,0,0x44,s_D__a_1_s_target_x86_64_pc_window_180984010,
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
          FUN_18050f6f0(4,0,0x73,s_D__a_1_s_target_x86_64_pc_window_180983f90,CONCAT44(uVar7,0x1b7))
          ;
        }
      }
    }
  }
LAB_18062b4ef:
  if (lVar3 != 0) {
    FUN_18053e400(lVar3);
    FUN_18053e1c0(lVar3);
  }
  FUN_18058f610(local_20);
  return local_2c;
}


/* address=18062b530 name=FUN_18062b530 */

void FUN_18062b530(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  if (*(longlong *)(*param_1 + 0x38) == 0) {
    FUN_18062c800(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


/* address=18062b8a0 name=FUN_18062b8a0 */

void FUN_18062b8a0(undefined *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_c8;
  if (param_7 == 0) {
    param_7 = FUN_180532230();
  }
  if (param_8 == 0) {
    param_8 = param_7;
  }
  local_98 = FUN_180532b10(param_7);
  if (param_2 < local_98 * 2 + 2) {
    local_a8 = CONCAT44(local_a8._4_4_,0x62);
    FUN_18050f6f0(4,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_180983790);
  }
  else {
    local_90 = param_2 - 1;
    if ((local_90 + local_98 * -2) - 1 < param_4) {
      local_a8 = CONCAT44(local_a8._4_4_,0x68);
      FUN_18050f6f0(4,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180983810);
    }
    else if (local_90 < local_98 * 2 + 1) {
      local_a8 = CONCAT44(local_a8._4_4_,0x6d);
      FUN_18050f6f0(4,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_180983890);
    }
    else {
      *param_1 = 0;
      local_60 = param_1 + 1;
      local_88 = param_1 + local_98 + 1;
      local_68 = 0;
      local_70 = 0;
      local_a0 = 0;
      local_a8 = param_7;
      iVar1 = FUN_180532a20(param_5,param_6,local_88,0);
      if (iVar1 != 0) {
        FUN_18062beb0(local_88 + local_98,0,(local_90 - param_4) + local_98 * -2 + -1);
        local_88[((local_90 - param_4) - local_98) + -1] = 1;
        FUN_18062be60(local_88 + ((local_90 - param_4) - local_98),param_3,param_4);
        iVar1 = FUN_18055bbd0(local_60,local_98);
        if ((iVar1 != 0) && (local_68 = FUN_18058f4e0(local_90 - local_98), local_68 != 0)) {
          local_a8 = param_8;
          iVar1 = FUN_180582910(local_68,local_90 - local_98,local_60,local_98);
          if (iVar1 != 0) {
            for (local_80 = 0; local_80 < local_90 - local_98; local_80 = local_80 + 1) {
              local_88[local_80] = local_88[local_80] ^ *(byte *)(local_68 + local_80);
            }
            local_a8 = param_8;
            iVar1 = FUN_180582910(local_58,local_98,local_88,local_90 - local_98);
            if (iVar1 != 0) {
              for (local_78 = 0; local_78 < local_98; local_78 = local_78 + 1) {
                local_60[local_78] = local_60[local_78] ^ local_58[local_78];
              }
              local_70 = 1;
            }
          }
        }
      }
      FUN_18058f610(local_68);
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_c8);
  return;
}


/* address=18062bcb0 name=FUN_18062bcb0 */

undefined8 FUN_18062bcb0(undefined8 param_1)

{
  return param_1;
}


/* address=18062bcd0 name=FUN_18062bcd0 */

longlong FUN_18062bcd0(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=18062bcf0 name=FUN_18062bcf0 */

void FUN_18062bcf0(ulonglong param_1,ulonglong param_2)

{
  FUN_18062bcd0(param_1 ^ (param_1 ^ param_2 | param_1 - param_2 ^ param_1));
  return;
}


/* address=18062bd50 name=FUN_18062bd50 */

ulonglong FUN_18062bd50(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_18062bcf0(param_1,param_2);
  return ~uVar1;
}


/* address=18062bd80 name=FUN_18062bd80 */

void FUN_18062bd80(ulonglong param_1)

{
  FUN_18062bcd0(~param_1 & param_1 - 1);
  return;
}


/* address=18062bdb0 name=FUN_18062bdb0 */

void FUN_18062bdb0(ulonglong param_1,ulonglong param_2)

{
  FUN_18062bd80(param_1 ^ param_2);
  return;
}


/* address=18062bdf0 name=FUN_18062bdf0 */

ulonglong FUN_18062bdf0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_18062bcb0(param_1);
  uVar2 = FUN_18062bcb0(~param_1);
  return uVar1 & param_2 | uVar2 & param_3;
}


/* address=18062be40 name=FUN_18062be40 */

void FUN_18062be40(undefined8 param_1)

{
  FUN_18062bcb0(param_1);
  return;
}


/* address=18062be60 name=FUN_18062be60 */

undefined8 FUN_18062be60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18062beb0 name=FUN_18062beb0 */

undefined8 FUN_18062beb0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18062bef0 name=FUN_18062bef0 */

void FUN_18062bef0(undefined8 param_1,ulonglong *param_2,ulonglong param_3,undefined *param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_138;
  local_108 = 0;
  if (param_8 == 0) {
    param_8 = FUN_180532230();
  }
  if (param_9 == 0) {
    param_9 = param_8;
  }
  local_100 = FUN_180532b10(param_8);
  if (param_5 < local_100 * 2 + 2) {
LAB_18062c36b:
    local_118 = CONCAT44(local_118._4_4_,0xfb);
    FUN_18050f6f0(4,0,0x85,s_D__a_1_s_target_x86_64_pc_window_180983990);
  }
  else {
    local_d0 = (param_5 - local_100) - 1;
    local_108 = FUN_18058f4e0(local_d0);
    if (local_108 != 0) {
      local_a8 = param_4 + 1;
      local_b8 = param_4 + local_100 + 1;
      local_118 = param_9;
      iVar1 = FUN_180582910(local_98,local_100,local_b8,local_d0);
      if (iVar1 != 0) {
        for (local_e8 = 0; local_e8 < local_100; local_e8 = local_e8 + 1) {
          local_98[local_e8] = local_98[local_e8] ^ local_a8[local_e8];
        }
        local_118 = param_9;
        iVar1 = FUN_180582910(local_108,local_d0,local_98,local_100);
        if (iVar1 != 0) {
          for (local_e0 = 0; local_e0 < local_d0; local_e0 = local_e0 + 1) {
            *(byte *)(local_108 + local_e0) = *(byte *)(local_108 + local_e0) ^ local_b8[local_e0];
          }
          local_110 = 0;
          local_118 = param_8;
          iVar1 = FUN_180532a20(param_6,param_7,local_58,0);
          if (iVar1 != 0) {
            iVar1 = FUN_18058f7e0(local_108,local_58,local_100);
            local_f0 = FUN_18062bd80((longlong)iVar1);
            local_f0 = ~local_f0;
            uVar2 = FUN_18062bd80(*param_4);
            local_f0 = local_f0 | ~uVar2;
            local_c8 = 0xffffffffffffffff;
            local_f8 = 0;
            for (local_d8 = local_100; local_d8 < local_d0; local_d8 = local_d8 + 1) {
              local_b0 = FUN_18062bdb0(*(undefined *)(local_108 + local_d8),1);
              local_a0 = FUN_18062bdb0(*(undefined *)(local_108 + local_d8),0);
              local_f8 = FUN_18062bdf0(local_c8 & local_b0,local_d8,local_f8);
              local_c8 = FUN_18062bdf0(local_b0,0,local_c8);
              local_f0 = local_f0 | local_c8 & ~local_a0;
            }
            local_f0 = local_f0 | local_c8;
            lVar3 = FUN_18062be40(local_f0);
            if (lVar3 != 0) goto LAB_18062c36b;
            local_f8 = FUN_18062be40(local_f8);
            local_f8 = local_f8 + 1;
            local_c0 = local_d0 - local_f8;
            if (local_c0 <= param_3) {
              FUN_18062be60(param_1,local_108 + local_f8,local_c0);
              *param_2 = local_c0;
              FUN_18058f610(local_108);
              goto LAB_18062c399;
            }
            local_118 = CONCAT44(local_118._4_4_,0xef);
            FUN_18050f6f0(4,0,0x71,s_D__a_1_s_target_x86_64_pc_window_180983910);
          }
        }
      }
    }
  }
  FUN_18058f610(local_108);
LAB_18062c399:
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_138);
  return;
}


/* address=18062c3c0 name=FUN_18062c3c0 */

void FUN_18062c3c0(longlong param_1,ulonglong param_2)

{
  ulonglong local_18;
  
  FUN_18055bbd0(param_1,param_2);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    while (*(char *)(param_1 + local_18) == '\0') {
      FUN_18055bbd0(param_1 + local_18,1);
    }
  }
  return;
}


/* address=18062c450 name=FUN_18062c450 */

undefined8 FUN_18062c450(undefined *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 < 0xb) {
    FUN_18050f6f0(4,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_180983a10,0x105);
    uVar2 = 0;
  }
  else if (param_2 - 0xb < param_4) {
    FUN_18050f6f0(4,0,0x72,s_D__a_1_s_target_x86_64_pc_window_180983a90,0x10a);
    uVar2 = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 2;
    lVar1 = (param_2 - 3) - param_4;
    FUN_18062c3c0(param_1 + 2,lVar1);
    param_1[lVar1 + 2] = 0;
    FUN_18062be60(param_1 + (param_2 - param_4),param_3,param_4);
    uVar2 = 1;
  }
  return uVar2;
}


/* address=18062c570 name=FUN_18062c570 */

undefined8
FUN_18062c570(undefined8 param_1,ulonglong *param_2,ulonglong param_3,undefined *param_4,
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
    FUN_18050f6f0(4,0,0x78,s_D__a_1_s_target_x86_64_pc_window_180983b10,0x11c);
    uVar4 = 0;
  }
  else if (param_5 < 0xb) {
    FUN_18050f6f0(4,0,0x7e,s_D__a_1_s_target_x86_64_pc_window_180983b90,0x125);
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_18062bdb0(*param_4,0);
    uVar2 = FUN_18062bdb0(param_4[1],2);
    local_40 = 0;
    local_30 = 0xffffffffffffffff;
    for (local_38 = 2; local_38 < param_5; local_38 = local_38 + 1) {
      uVar3 = FUN_18062bd80(param_4[local_38]);
      local_40 = FUN_18062bdf0(local_30 & uVar3,local_38,local_40);
      local_30 = FUN_18062bdf0(uVar3,0,local_30);
    }
    uVar3 = FUN_18062bd50(local_40,10);
    if ((uVar1 & uVar2 & ~local_30 & uVar3) == 0) {
      FUN_18050f6f0(4,0,0x89,s_D__a_1_s_target_x86_64_pc_window_180983c10,0x14a);
      uVar4 = 0;
    }
    else {
      param_5 = param_5 - (local_40 + 1);
      if (param_3 < param_5) {
        FUN_18050f6f0(4,0,0x89,s_D__a_1_s_target_x86_64_pc_window_180983c90,0x152);
        uVar4 = 0;
      }
      else {
        FUN_18062be60(param_1,param_4 + local_40 + 1,param_5);
        *param_2 = param_5;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


/* address=18062c800 name=FUN_18062c800 */

int FUN_18062c800(undefined8 param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,
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
  uVar1 = FUN_1805697e0(param_1);
  iVar5 = 0;
  if (param_4 < uVar1) {
    FUN_18050f6f0(4,0,0x87,s_D__a_1_s_target_x86_64_pc_window_180984090,CONCAT44(uVar4,0x1dc));
    return 0;
  }
  local_18 = param_3;
  if ((param_7 == 3) || (local_18 = FUN_18058f4e0(uVar1), local_18 != 0)) {
    if (param_6 == uVar1) {
      iVar2 = FUN_180583200(param_1,local_18,param_5,uVar1);
      if (iVar2 != 0) {
        if (param_7 == 1) {
          uVar3 = (ulonglong)uVar1;
          iVar5 = FUN_18062c570(param_3,param_2,uVar1,local_18,uVar3);
          uVar4 = (undefined4)(uVar3 >> 0x20);
        }
        else if (param_7 == 3) {
          *param_2 = (ulonglong)uVar1;
          iVar5 = 1;
        }
        else {
          if (param_7 != 4) {
            FUN_18050f6f0(4,0,0x8f,s_D__a_1_s_target_x86_64_pc_window_180984190,
                          CONCAT44(uVar4,0x202));
            goto LAB_18062ca1b;
          }
          uVar3 = (ulonglong)uVar1;
          iVar5 = FUN_18062bef0(param_3,param_2,uVar1,local_18,uVar3,0,0,0,0);
          uVar4 = (undefined4)(uVar3 >> 0x20);
        }
        if (iVar5 == 0) {
          FUN_18050f6f0(4,0,0x88,s_D__a_1_s_target_x86_64_pc_window_180984210,CONCAT44(uVar4,0x208))
          ;
        }
      }
    }
    else {
      FUN_18050f6f0(4,0,0x70,s_D__a_1_s_target_x86_64_pc_window_180984110,CONCAT44(uVar4,0x1eb));
    }
  }
LAB_18062ca1b:
  if (param_7 != 3) {
    FUN_18058f610(local_18);
  }
  return iVar5;
}


/* address=18062ca40 name=FUN_18062ca40 */

undefined4 FUN_18062ca40(longlong param_1,longlong *param_2,size_t *param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined local_40 [64];
  
  if ((*(byte *)(param_1 + 0x1a8) >> 2 & 1) == 0) {
    FUN_180523250(local_40);
    uVar5 = FUN_1805214c0(local_40);
    iVar1 = FUN_180590610(uVar5,0x100);
    if (iVar1 != 0) {
      uVar5 = FUN_1805214c0(local_40);
      iVar1 = FUN_18062e290(param_1,uVar5,0);
      if (iVar1 != 0) {
        uVar5 = FUN_1805214c0(local_40);
        iVar1 = FUN_180590740(uVar5,param_2,param_3);
        if (iVar1 != 0) {
          FUN_180523280(local_40);
          return 1;
        }
      }
    }
    FUN_180523280(local_40);
    uVar2 = 0;
  }
  else {
    sVar3 = strlen("NOT RESUMABLE");
    *param_3 = sVar3;
    lVar4 = FUN_18058ffb0("NOT RESUMABLE",*param_3);
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


/* address=18062cb60 name=FUN_18062cb60 */

undefined4 FUN_18062cb60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_40 [64];
  
  FUN_180523250(local_40);
  uVar2 = FUN_1805214c0(local_40);
  iVar1 = FUN_180590610(uVar2,0x100);
  if (iVar1 != 0) {
    uVar2 = FUN_1805214c0(local_40);
    iVar1 = FUN_18062e290(param_1,uVar2,1);
    if (iVar1 != 0) {
      uVar2 = FUN_1805214c0(local_40);
      iVar1 = FUN_180590740(uVar2,param_2,param_3);
      if (iVar1 != 0) {
        FUN_180523280(local_40);
        return 1;
      }
    }
  }
  FUN_180523280(local_40);
  return 0;
}


/* address=18062cc20 name=FUN_18062cc20 */

_Facet_base * FUN_18062cc20(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  
  FUN_18059e730(local_20,param_1,param_2);
  uVar2 = FUN_18062ce40(local_40,local_20,*(undefined8 *)(param_3 + 8),
                        *(undefined8 *)(param_3 + 0x200));
  FUN_180521660(local_48,uVar2);
  FUN_180521af0(local_40);
  cVar1 = FUN_180521840(local_48);
  if (cVar1 == '\0') {
    local_38 = (_Facet_base *)0x0;
    FUN_180521af0(local_48);
  }
  else {
    lVar3 = FUN_18059e7c0(local_20);
    if (lVar3 == 0) {
      local_28 = std::
                 unique_ptr<class_std::_Facet_base,struct_std::default_delete<class_std::_Facet_base>_>
                 ::release(local_48);
      FUN_180521af0(local_48);
      local_38 = local_28;
    }
    else {
      FUN_18050f6f0(0x10,0,0xa0,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                    ,0x366);
      local_30 = (_Facet_base *)0x0;
      FUN_180521af0(local_48);
      local_38 = local_30;
    }
  }
  return local_38;
}


/* address=18062cd30 name=FUN_18062cd30 */

undefined4 FUN_18062cd30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 local_10 [2];
  
  iVar1 = FUN_18062ca40(param_1,local_10,&local_18);
  if (iVar1 == 0) {
    local_18 = 0xffffffff;
  }
  else if (CONCAT44(uStack_14,local_18) < 0x80000000) {
    if (param_2 != (longlong *)0x0) {
      FUN_18062cdf0(*param_2,local_10[0],CONCAT44(uStack_14,local_18));
      *param_2 = *param_2 + CONCAT44(uStack_14,local_18);
    }
    FUN_18058f610(local_10[0]);
  }
  else {
    FUN_18058f610(local_10[0]);
    FUN_18050f6f0(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x34f);
    local_18 = 0xffffffff;
  }
  return local_18;
}


/* address=18062cdf0 name=FUN_18062cdf0 */

undefined8 FUN_18062cdf0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18062ce40 name=FUN_18062ce40 */

undefined8 FUN_18062ce40(undefined8 param_1,wchar_t *param_2,longlong param_3,undefined8 param_4)

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
  
  uVar4 = FUN_1805b8100(local_108,param_3);
  FUN_180521660(local_258,uVar4);
  FUN_180521af0(local_108);
  cVar1 = FUN_180521840(local_258);
  if (cVar1 == '\0') {
    FUN_1805b3320(param_1,0);
    FUN_180521af0(local_258);
    return param_1;
  }
  uVar2 = wcstoul(param_2,local_248,0x20000010);
  if (((((uVar2 == 0) || (iVar3 = FUN_18059f1b0(local_248,&local_100), iVar3 == 0)) ||
       (local_100 != 1)) ||
      ((iVar3 = FUN_18059f1b0(local_248,&local_1f8), iVar3 == 0 ||
       (0xffff < CONCAT62(uStack_1f6,local_1f8))))) ||
     (cVar1 = FUN_1805af060(local_210,local_1f8), cVar1 == '\0')) {
    FUN_18050f6f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x229);
    FUN_1805b3320(param_1,0);
    FUN_180521af0(local_258);
    return param_1;
  }
  lVar5 = FUN_180521460(local_258);
  *(undefined2 *)(lVar5 + 4) = local_1f8;
  uVar2 = wcstoul((wchar_t *)local_248,local_d0,4);
  if (((uVar2 == 0) || (iVar3 = FUN_18059ea10(local_d0,local_234), iVar3 == 0)) ||
     (lVar5 = FUN_18059e7c0(local_d0), lVar5 != 0)) {
    FUN_18050f6f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x233);
    FUN_1805b3320(param_1,0);
    FUN_180521af0(local_258);
    return param_1;
  }
  local_f8 = FUN_1805bbae0(local_234[0]);
  lVar5 = FUN_180521460(local_258);
  *(undefined8 *)(lVar5 + 200) = local_f8;
  lVar5 = FUN_180521460(local_258);
  if (*(longlong *)(lVar5 + 200) == 0) {
    FUN_18050f6f0(0x10,0,0xed,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x238);
    FUN_1805b3320(param_1,0);
    FUN_180521af0(local_258);
    return param_1;
  }
  uVar2 = wcstoul((wchar_t *)local_248,local_1a0,4);
  if ((((uVar2 == 0) || (uVar6 = FUN_18059e7c0(local_1a0), 0x20 < uVar6)) ||
      (uVar2 = wcstoul((wchar_t *)local_248,local_190,4), uVar2 == 0)) ||
     (uVar6 = FUN_18059e7c0(local_190), 0x30 < uVar6)) {
    FUN_18050f6f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x241);
    FUN_1805b3320(param_1,0);
    FUN_180521af0(local_258);
    return param_1;
  }
  local_f0 = FUN_18059e7c0(local_1a0);
  local_e8 = FUN_18059e7a0(local_1a0);
  lVar5 = FUN_180521460(local_258);
  FUN_18062cdf0(lVar5 + 0x3c,local_e8,local_f0);
  local_170 = FUN_18059e7c0(local_1a0);
  lVar5 = FUN_180521460(local_258);
  *(char *)(lVar5 + 0x3b) = (char)local_170;
  local_168 = FUN_18059e7c0(local_190);
  local_160 = FUN_18059e7a0(local_190);
  lVar5 = FUN_180521460(local_258);
  FUN_18062cdf0(lVar5 + 0xb,local_160,local_168);
  local_158 = FUN_18059e7c0(local_190);
  lVar5 = FUN_180521460(local_258);
  *(char *)(lVar5 + 10) = (char)local_158;
  uVar2 = wcstoul((wchar_t *)local_248,local_1f0,-0x5fffffff);
  if (uVar2 != 0) {
    lVar5 = FUN_180521460(local_258);
    iVar3 = FUN_18059f1b0(local_1f0,lVar5 + 0xc0);
    if (((iVar3 != 0) && (uVar2 = wcstoul((wchar_t *)local_248,local_1f0,-0x5ffffffe), uVar2 != 0))
       && ((iVar3 = FUN_18059f1b0(local_1f0,&local_1e0), iVar3 != 0 &&
           (CONCAT44(uStack_1dc,local_1e0) < 0x100000000)))) {
      lVar5 = FUN_180521460(local_258);
      *(undefined4 *)(lVar5 + 0xb4) = local_1e0;
      iVar3 = FUN_18059f470(local_248,local_b0,&local_238,0xa0000003);
      if ((iVar3 == 0) || ((local_238 != 0 && (lVar5 = FUN_18059e7c0(local_b0), lVar5 == 0)))) {
        FUN_18050f6f0(0x10,0,0xa0,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                      ,0x25e);
        FUN_1805b3320(param_1,0);
        FUN_180521af0(local_258);
        return param_1;
      }
      local_150 = FUN_180521460(local_258);
      local_150 = local_150 + 0x5c;
      lVar5 = FUN_180521460(local_258);
      iVar3 = FUN_18062f1b0(local_248,lVar5 + 0x5d,local_150,0x20,0xa0000004);
      if (iVar3 != 0) {
        lVar5 = FUN_180521460(local_258);
        iVar3 = FUN_18062f270(local_248,lVar5 + 0xb0,0xa0000005,0);
        if (iVar3 != 0) {
          iVar3 = FUN_18059f470(local_248,local_48,0,0xa0000006);
          if (iVar3 == 0) {
            FUN_18050f6f0(0x10,0,0xa0,
                          "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                          ,0x26f);
            FUN_1805b3320(param_1,0);
            FUN_180521af0(local_258);
            return param_1;
          }
          lVar5 = FUN_180521460(local_258);
          iVar3 = FUN_18062ef50(local_248,lVar5 + 0x80,0xa0000008);
          if (iVar3 != 0) {
            lVar5 = FUN_180521460(local_258);
            iVar3 = FUN_18062f300(local_248,lVar5 + 0x16c,0xa0000009,0);
            if (iVar3 != 0) {
              lVar5 = FUN_180521460(local_258);
              cVar1 = FUN_18062f030(local_248,lVar5 + 0xe8,0xa000000a);
              if (cVar1 != '\0') {
                iVar3 = FUN_18059efe0(local_248,0xa000000d);
                if (iVar3 == 0) {
                  lVar5 = FUN_180521460(local_258);
                  local_1d0 = (byte *)(lVar5 + 0x1a8);
                  *local_1d0 = *local_1d0 & 0xfd;
                }
                else {
                  uVar2 = wcstoul((wchar_t *)local_248,local_1f0,-0x5ffffff3);
                  if ((((uVar2 == 0) ||
                       (uVar2 = wcstoul((wchar_t *)local_1f0,local_c0,4), uVar2 == 0)) ||
                      (lVar5 = FUN_18059e7c0(local_c0), lVar5 != 0x20)) ||
                     (lVar5 = FUN_18059e7c0(local_1f0), lVar5 != 0)) {
                    FUN_18050f6f0(0x10,0,0xa0,
                                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                  ,0x281);
                    FUN_1805b3320(param_1,0);
                    FUN_180521af0(local_258);
                    return param_1;
                  }
                  local_148 = FUN_18059e7a0(local_c0);
                  lVar5 = FUN_180521460(local_258);
                  FUN_18062cdf0(lVar5 + 0x108,local_148,0x20);
                  lVar5 = FUN_180521460(local_258);
                  local_1d8 = (byte *)(lVar5 + 0x1a8);
                  *local_1d8 = *local_1d8 | 2;
                }
                local_140 = FUN_180521460(local_258);
                local_140 = local_140 + 0x168;
                lVar5 = FUN_180521460(local_258);
                iVar3 = FUN_18062f1b0(local_248,lVar5 + 0x128,local_140,0x40,0xa000000e);
                if (iVar3 != 0) {
                  lVar5 = FUN_180521460(local_258);
                  iVar3 = FUN_18062f0d0(local_248,lVar5 + 0xf8,0xa000000f,param_4);
                  if (iVar3 != 0) {
                    lVar5 = FUN_180521460(local_258);
                    iVar3 = FUN_18062f0d0(local_248,lVar5 + 0x100,0xa0000010,param_4);
                    if (iVar3 != 0) {
                      iVar3 = FUN_18059f650(local_248,&local_20c,0xa0000011,0);
                      if (iVar3 == 0) {
                        FUN_18050f6f0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x29b);
                        FUN_1805b3320(param_1,0);
                        FUN_180521af0(local_258);
                        return param_1;
                      }
                      local_250 = local_20c != 0;
                      lVar5 = FUN_180521460(local_258);
                      local_1c8 = (byte *)(lVar5 + 0x1a8);
                      *local_1c8 = *local_1c8 & 0xfe | local_250 & 1;
                      lVar5 = FUN_180521460(local_258);
                      iVar3 = FUN_18062f390(local_248,lVar5 + 6,0xa0000012,0);
                      if (iVar3 == 0) {
                        FUN_18050f6f0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2a1);
                        FUN_1805b3320(param_1,0);
                        FUN_180521af0(local_258);
                        return param_1;
                      }
                      FUN_18059e730(local_180,0,0);
                      iVar3 = FUN_18059f470(local_248,local_180);
                      if ((iVar3 == 0) ||
                         ((local_230 != 0 && (lVar5 = FUN_18059e7c0(local_180), lVar5 == 0)))) {
                        FUN_18050f6f0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2ab);
                        FUN_1805b3320(param_1,0);
                        FUN_180521af0(local_258);
                        return param_1;
                      }
                      if ((local_230 != 0) && (local_238 == 0)) {
                        FUN_18050f6f0(0x10,0,0xa0,
                                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                      ,0x2af);
                        FUN_1805b3320(param_1,0);
                        FUN_180521af0(local_258);
                        return param_1;
                      }
                      if ((local_238 != 0) || (local_230 != 0)) {
                        local_138 = FUN_180521810();
                        lVar5 = FUN_180521460(local_258);
                        FUN_1805222f0(lVar5 + 0x88,local_138);
                        lVar5 = FUN_180521460(local_258);
                        cVar1 = operator==<>(lVar5 + 0x88,0);
                        if (cVar1 != '\0') {
                          FUN_1805b3320(param_1,0);
                          FUN_180521af0(local_258);
                          return param_1;
                        }
                        if (local_238 != 0) {
                          uVar4 = FUN_180586d90(local_b0,param_4);
                          FUN_180521630(local_220,uVar4);
                          cVar1 = FUN_180521840(local_220);
                          if (cVar1 == '\0') {
LAB_18062dabc:
                            FUN_1805b3320(param_1,0);
                            FUN_1805b3120(local_220);
                            FUN_180521af0(local_258);
                            return param_1;
                          }
                          local_130 = local_80;
                          uVar4 = FUN_1805214c0(local_220);
                          local_128 = FUN_180521660(local_130,uVar4);
                          lVar5 = FUN_180521460(local_258);
                          uVar4 = FUN_180521460(lVar5 + 0x88);
                          cVar1 = FUN_1805b3410(uVar4,local_128);
                          if (cVar1 == '\0') goto LAB_18062dabc;
                          FUN_1805b3120(local_220);
                        }
                        while (lVar5 = FUN_18059e7c0(local_180), lVar5 != 0) {
                          pvVar7 = _aligned_recalloc(local_180,(size_t)local_a0,0,0);
                          if (((int)pvVar7 == 0) || (lVar5 = FUN_18059e7c0(local_a0), lVar5 == 0)) {
                            FUN_18050f6f0(0x10,0,0xa0,
                                          "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                          ,0x2c4);
                            FUN_1805b3320(param_1,0);
                            FUN_180521af0(local_258);
                            return param_1;
                          }
                          uVar4 = FUN_180586d90(local_a0,param_4);
                          FUN_180521630(local_218,uVar4);
                          cVar1 = operator==<>(local_218,0);
                          if (cVar1 != '\0') {
LAB_18062dc1f:
                            FUN_1805b3320(param_1,0);
                            FUN_1805b3120(local_218);
                            FUN_180521af0(local_258);
                            return param_1;
                          }
                          local_120 = local_78;
                          uVar4 = FUN_1805214c0(local_218);
                          local_118 = FUN_180521660(local_120,uVar4);
                          lVar5 = FUN_180521460(local_258);
                          uVar4 = FUN_180521460(lVar5 + 0x88);
                          cVar1 = FUN_1805b3410(uVar4,local_118);
                          if (cVar1 == '\0') goto LAB_18062dc1f;
                          FUN_1805b3120(local_218);
                        }
                      }
                      iVar3 = FUN_18059f4f0(local_248,local_90,local_228,0xa0000015);
                      if (iVar3 != 0) {
                        if (local_228[0] != 0) {
                          lVar5 = FUN_180521460(local_258);
                          iVar3 = FUN_18059eb00(local_90,lVar5 + 0x170);
                          if (iVar3 == 0) goto LAB_18062dcbd;
                        }
                        lVar5 = FUN_18059e7c0(local_90);
                        if (lVar5 == 0) {
                          local_24f = local_228[0] != 0;
                          lVar5 = FUN_180521460(local_258);
                          local_1c0 = (byte *)(lVar5 + 0x1a8);
                          *local_1c0 = *local_1c0 & 0xf7 | (local_24f & 1) << 3;
                          iVar3 = FUN_18059f650(local_248,&local_208,0xa0000016,1);
                          if (iVar3 == 0) {
                            FUN_18050f6f0(0x10,0,0xa0,
                                          "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                          ,0x2de);
                            FUN_1805b3320(param_1,0);
                            FUN_180521af0(local_258);
                            return param_1;
                          }
                          local_24e = local_208 != 0;
                          lVar5 = FUN_180521460(local_258);
                          local_1b8 = (byte *)(lVar5 + 0x1a8);
                          *local_1b8 = *local_1b8 & 0xef | (local_24e & 1) << 4;
                          lVar5 = FUN_180521460(local_258);
                          iVar3 = FUN_18062f390(local_248,lVar5 + 8,0xa0000017,0);
                          if (iVar3 != 0) {
                            lVar5 = FUN_180521460(local_258);
                            iVar3 = FUN_18062f300(local_248,lVar5 + 0x174,0xa0000018,0);
                            if (iVar3 != 0) {
                              local_110 = FUN_180521460(local_258);
                              lVar5 = FUN_180521460(local_258);
                              iVar3 = FUN_18062f300(local_248,lVar5 + 0xb8,0xa0000019,
                                                    *(undefined4 *)(local_110 + 0xb4));
                              if (iVar3 != 0) {
                                lVar5 = FUN_180521460(local_258);
                                cVar1 = FUN_18062f030(local_248,lVar5 + 0x178,0xa000001a);
                                if ((cVar1 != '\0') &&
                                   (iVar3 = FUN_18059f650(local_248,&local_204,0xa000001b,0),
                                   iVar3 != 0)) {
                                  lVar5 = FUN_180521460(local_258);
                                  cVar1 = FUN_18062f030(local_248,lVar5 + 0x1b0,0xa000001c);
                                  if (cVar1 != '\0') {
                                    iVar3 = FUN_18059f4f0(local_248,local_e0,&local_22c,0xa000001d);
                                    if (iVar3 != 0) {
                                      puVar8 = (undefined *)FUN_18052d760(local_e0,local_38);
                                      puVar9 = local_68;
                                      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                                        *puVar9 = *puVar8;
                                        puVar8 = puVar8 + 1;
                                        puVar9 = puVar9 + 1;
                                      }
                                      lVar5 = FUN_180521460(local_258);
                                      cVar1 = FUN_180521ed0(lVar5 + 0x188,local_68);
                                      if ((cVar1 != '\0') &&
                                         (iVar3 = FUN_18059f4f0(local_248,local_e0,local_200,
                                                                0xa000001e), iVar3 != 0)) {
                                        puVar8 = (undefined *)FUN_18052d760(local_e0,local_28);
                                        puVar9 = local_58;
                                        for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
                                          *puVar9 = *puVar8;
                                          puVar8 = puVar8 + 1;
                                          puVar9 = puVar9 + 1;
                                        }
                                        lVar5 = FUN_180521460(local_258);
                                        cVar1 = FUN_180521ed0(lVar5 + 0x198,local_58);
                                        if ((cVar1 != '\0') &&
                                           (lVar5 = FUN_18059e7c0(local_248), lVar5 == 0)) {
                                          local_24d = local_204 != 0;
                                          lVar5 = FUN_180521460(local_258);
                                          local_1b0 = (byte *)(lVar5 + 0x1a8);
                                          *local_1b0 = *local_1b0 & 0xdf | (local_24d & 1) << 5;
                                          if (local_22c == local_200[0]) {
                                            if (local_22c != 0) {
                                              lVar5 = FUN_180521460(local_258);
                                              cVar1 = FUN_180521780(lVar5 + 0x178);
                                              if (cVar1 != '\0') goto LAB_18062e11c;
                                            }
                                            local_24c = local_22c != 0;
                                            lVar5 = FUN_180521460(local_258);
                                            local_1a8 = (byte *)(lVar5 + 0x1a8);
                                            *local_1a8 = *local_1a8 & 0xbf | (local_24c & 1) << 6;
                                            uVar4 = FUN_180521460(local_258);
                                            cVar1 = (**(code **)(param_3 + 0x30))(uVar4);
                                            if (cVar1 == '\0') {
                                              FUN_18050f6f0(0x10,0,0xa0,
                                                                                                                        
                                                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x30e);
                                              FUN_1805b3320(param_1,0);
                                              FUN_180521af0(local_258);
                                              return param_1;
                                            }
                                            FUN_180521660(param_1,local_258);
                                            FUN_180521af0(local_258);
                                            return param_1;
                                          }
LAB_18062e11c:
                                          FUN_18050f6f0(0x10,0,0xa0,
                                                                                                                
                                                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x308);
                                          FUN_1805b3320(param_1,0);
                                          FUN_180521af0(local_258);
                                          return param_1;
                                        }
                                      }
                                    }
                                    FUN_18050f6f0(0x10,0,0xa0,
                                                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                                  ,0x300);
                                    FUN_1805b3320(param_1,0);
                                    FUN_180521af0(local_258);
                                    return param_1;
                                  }
                                }
                              }
                            }
                          }
                          FUN_18050f6f0(0x10,0,0xa0,
                                        "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                                        ,0x2f3);
                          FUN_1805b3320(param_1,0);
                          FUN_180521af0(local_258);
                          return param_1;
                        }
                      }
LAB_18062dcbd:
                      FUN_1805b3320(param_1,0);
                      FUN_180521af0(local_258);
                      return param_1;
                    }
                  }
                }
                FUN_1805b3320(param_1,0);
                FUN_180521af0(local_258);
                return param_1;
              }
            }
          }
          FUN_1805b3320(param_1,0);
          FUN_180521af0(local_258);
          return param_1;
        }
      }
      FUN_1805b3320(param_1,0);
      FUN_180521af0(local_258);
      return param_1;
    }
  }
  FUN_18050f6f0(0x10,0,0xa0,
                "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                ,0x254);
  FUN_1805b3320(param_1,0);
  FUN_180521af0(local_258);
  return param_1;
}


/* address=18062e290 name=FUN_18062e290 */

undefined8 FUN_18062e290(longlong param_1,undefined8 param_2,int param_3)

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
  iVar2 = FUN_180590d60(param_2,local_d0,0x20000010);
  if ((((iVar2 != 0) && (iVar2 = FUN_180591220(local_d0,1), iVar2 != 0)) &&
      (iVar2 = FUN_180591220(local_d0,*(undefined2 *)(param_1 + 4)), iVar2 != 0)) &&
     ((iVar2 = FUN_180590d60(local_d0,local_108,4), iVar2 != 0 &&
      (iVar2 = FUN_180591040(local_108,*(uint *)(*(longlong *)(param_1 + 200) + 0x10) & 0xffff),
      iVar2 != 0)))) {
    if (param_3 == 0) {
      local_d8 = (uint)*(byte *)(param_1 + 0x3b);
    }
    else {
      local_d8 = 0;
    }
    iVar2 = FUN_1805914c0(local_d0,param_1 + 0x3c,local_d8);
    if (((iVar2 != 0) &&
        (iVar2 = FUN_1805914c0(local_d0,param_1 + 0xb,*(undefined *)(param_1 + 10)), iVar2 != 0)) &&
       ((iVar2 = FUN_180590d60(local_d0,local_108,0xa0000001), iVar2 != 0 &&
        (((iVar2 = FUN_180591220(local_108,*(undefined8 *)(param_1 + 0xc0)), iVar2 != 0 &&
          (iVar2 = FUN_180590d60(local_d0,local_108,0xa0000002), iVar2 != 0)) &&
         (iVar2 = FUN_180591220(local_108,*(undefined4 *)(param_1 + 0xb4)), iVar2 != 0)))))) {
      uVar3 = FUN_180521460(param_1 + 0x88);
      lVar4 = FUN_180521890(uVar3);
      if ((lVar4 != 0) && ((*(byte *)(param_1 + 0x1a8) >> 1 & 1) == 0)) {
        uVar3 = FUN_180521460(param_1 + 0x88);
        local_98 = FUN_1805218b0(uVar3,0);
        iVar2 = FUN_180590d60(local_d0,local_108,0xa0000003);
        if (iVar2 == 0) {
          return 0;
        }
        local_88 = FUN_180586f90(local_98);
        uVar3 = FUN_180586f70(local_98);
        iVar2 = FUN_180590e20(local_108,uVar3,local_88);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = FUN_180590d60(local_d0,local_108,0xa0000004);
      if ((iVar2 == 0) ||
         (iVar2 = FUN_1805914c0(local_108,param_1 + 0x5d,*(undefined *)(param_1 + 0x5c)), iVar2 == 0
         )) {
        return 0;
      }
      if ((*(int *)(param_1 + 0xb0) != 0) &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa0000005), iVar2 == 0 ||
          (iVar2 = FUN_180591220(local_108,(longlong)*(int *)(param_1 + 0xb0)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_180521840(param_1 + 0x80);
      if (cVar1 != '\0') {
        iVar2 = FUN_180590d60(local_d0,local_108,0xa0000008);
        if (iVar2 == 0) {
          return 0;
        }
        _Str = (char *)FUN_180521460(param_1 + 0x80);
        local_80 = strlen(_Str);
        uVar3 = FUN_180521460(param_1 + 0x80);
        iVar2 = FUN_1805914c0(local_108,uVar3,local_80);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(int *)(param_1 + 0x16c) != 0) &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa0000009), iVar2 == 0 ||
          (iVar2 = FUN_180591220(local_108,*(undefined4 *)(param_1 + 0x16c)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_180521780(param_1 + 0xe8);
      if ((cVar1 == '\0') && (param_3 == 0)) {
        iVar2 = FUN_180590d60(local_d0,local_108,0xa000000a);
        if (iVar2 == 0) {
          return 0;
        }
        local_78 = FUN_180521770(param_1 + 0xe8);
        uVar3 = FUN_180521460(param_1 + 0xe8);
        iVar2 = FUN_1805914c0(local_108,uVar3,local_78);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 1 & 1) != 0) &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa000000d), iVar2 == 0 ||
          (iVar2 = FUN_1805914c0(local_108,param_1 + 0x108,0x20), iVar2 == 0)))) {
        return 0;
      }
      if ((*(char *)(param_1 + 0x168) != '\0') &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa000000e), iVar2 == 0 ||
          (iVar2 = FUN_1805914c0(local_108,param_1 + 0x128,*(undefined *)(param_1 + 0x168)),
          iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_1805232d0(param_1 + 0xf8,0);
      if (cVar1 != '\0') {
        iVar2 = FUN_180590d60(local_d0,local_108,0xa000000f);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_180521460(param_1 + 0xf8);
        local_70 = FUN_180586f90(uVar3);
        uVar3 = FUN_180521460(param_1 + 0xf8);
        uVar3 = FUN_180586f70(uVar3);
        iVar2 = FUN_1805914c0(local_108,uVar3,local_70);
        if (iVar2 == 0) {
          return 0;
        }
      }
      cVar1 = FUN_1805232d0(param_1 + 0x100,0);
      if (cVar1 != '\0') {
        iVar2 = FUN_180590d60(local_d0,local_108,0xa0000010);
        if (iVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_180521460(param_1 + 0x100);
        local_68 = FUN_180586f90(uVar3);
        uVar3 = FUN_180521460(param_1 + 0x100);
        uVar3 = FUN_180586f70(uVar3);
        iVar2 = FUN_1805914c0(local_108,uVar3,local_68);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) & 1) != 0) &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa0000011), iVar2 == 0 ||
          (iVar2 = FUN_180591530(local_108,1), iVar2 == 0)))) {
        return 0;
      }
      if ((*(short *)(param_1 + 6) != 0) &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa0000012), iVar2 == 0 ||
          (iVar2 = FUN_180591220(local_108,*(undefined2 *)(param_1 + 6)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_1805232d0(param_1 + 0x88,0);
      if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x1a8) >> 1 & 1) == 0)) {
        uVar3 = FUN_180521460(param_1 + 0x88);
        uVar5 = FUN_180521890(uVar3);
        if (1 < uVar5) {
          iVar2 = FUN_180590d60(local_d0,local_108,0xa0000013);
          if (iVar2 == 0) {
            return 0;
          }
          local_a0 = 1;
          while( true ) {
            uVar3 = FUN_180521460(param_1 + 0x88);
            uVar5 = FUN_180521890(uVar3);
            if (uVar5 <= local_a0) break;
            uVar3 = FUN_180521460(param_1 + 0x88);
            local_90 = FUN_1805218b0(uVar3,local_a0);
            local_60 = FUN_180586f90(local_90);
            uVar3 = FUN_180586f70(local_90);
            iVar2 = FUN_180590e20(local_108,uVar3,local_60);
            if (iVar2 == 0) {
              return 0;
            }
            local_a0 = local_a0 + 1;
          }
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 3 & 1) != 0) &&
         (((iVar2 = FUN_180590d60(local_d0,local_108,0xa0000015), iVar2 == 0 ||
           (iVar2 = FUN_180590d60(local_108,local_38,4), iVar2 == 0)) ||
          (iVar2 = FUN_1805910d0(local_38,*(undefined4 *)(param_1 + 0x170)), iVar2 == 0)))) {
        return 0;
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 4 & 1) == 0) &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa0000016), iVar2 == 0 ||
          (iVar2 = FUN_180591530(local_108,0), iVar2 == 0)))) {
        return 0;
      }
      if ((*(short *)(param_1 + 8) != 0) &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa0000017), iVar2 == 0 ||
          (iVar2 = FUN_180591220(local_108,*(undefined2 *)(param_1 + 8)), iVar2 == 0)))) {
        return 0;
      }
      if ((*(int *)(param_1 + 0x174) != 0) &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa0000018), iVar2 == 0 ||
          (iVar2 = FUN_180591220(local_108,*(undefined4 *)(param_1 + 0x174)), iVar2 == 0)))) {
        return 0;
      }
      if ((*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xb8)) &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa0000019), iVar2 == 0 ||
          (iVar2 = FUN_180591220(local_108,*(undefined4 *)(param_1 + 0xb8)), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_180521780(param_1 + 0x178);
      if (cVar1 == '\0') {
        iVar2 = FUN_180590d60(local_d0,local_108,0xa000001a);
        if (iVar2 == 0) {
          return 0;
        }
        local_58 = FUN_180521770(param_1 + 0x178);
        uVar3 = FUN_180521460(param_1 + 0x178);
        iVar2 = FUN_1805914c0(local_108,uVar3,local_58);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if (((*(byte *)(param_1 + 0x1a8) >> 5 & 1) != 0) &&
         ((iVar2 = FUN_180590d60(local_d0,local_108,0xa000001b), iVar2 == 0 ||
          (iVar2 = FUN_180591530(local_108,1), iVar2 == 0)))) {
        return 0;
      }
      cVar1 = FUN_180521780(param_1 + 0x1b0);
      if (cVar1 == '\0') {
        iVar2 = FUN_180590d60(local_d0,local_108,0xa000001c);
        if (iVar2 == 0) {
          return 0;
        }
        local_50 = FUN_180521770(param_1 + 0x1b0);
        uVar3 = FUN_180521460(param_1 + 0x1b0);
        iVar2 = FUN_1805914c0(local_108,uVar3,local_50);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((*(byte *)(param_1 + 0x1a8) >> 6 & 1) == 0) {
LAB_18062ef26:
        uVar3 = FUN_180590820(param_2);
        return uVar3;
      }
      iVar2 = FUN_180590d60(local_d0,local_108,0xa000001d);
      if (iVar2 != 0) {
        local_48 = FUN_180521770(param_1 + 0x188);
        uVar3 = FUN_180521460(param_1 + 0x188);
        iVar2 = FUN_1805914c0(local_108,uVar3,local_48);
        if ((iVar2 != 0) && (iVar2 = FUN_180590d60(local_d0,local_108,0xa000001e), iVar2 != 0)) {
          local_40 = FUN_180521770(param_1 + 0x198);
          uVar3 = FUN_180521460(param_1 + 0x198);
          iVar2 = FUN_1805914c0(local_108,uVar3,local_40);
          if (iVar2 != 0) goto LAB_18062ef26;
        }
      }
      return 0;
    }
  }
  return 0;
}


/* address=18062ef50 name=FUN_18062ef50 */

undefined8 FUN_18062ef50(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int local_28 [2];
  undefined8 local_20;
  undefined local_18 [24];
  
  iVar1 = FUN_18059f4f0(param_1,local_18,local_28,param_3);
  if (iVar1 == 0) {
    FUN_18050f6f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x1a6);
    return 0;
  }
  if (local_28[0] == 0) {
    FUN_180522260(param_2,0);
  }
  else {
    iVar1 = FUN_18059e900(local_18);
    if (iVar1 != 0) {
      FUN_18050f6f0(0x10,0,0xa0,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                    ,0x1ab);
      return 0;
    }
    local_20 = 0;
    iVar1 = FUN_18059e880(local_18,&local_20);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_180522260(param_2,local_20);
  }
  return 1;
}


/* address=18062f030 name=FUN_18062f030 */

uint FUN_18062f030(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined local_48 [16];
  undefined local_38 [16];
  undefined local_28 [24];
  
  iVar1 = FUN_18059f4f0(param_1,local_48,0,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_18050f6f0(0x10,0,0xa0,
                          "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                          ,0x1c0);
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    puVar4 = (undefined *)FUN_18052d760(local_48,local_28);
    puVar5 = local_38;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_180521ed0(param_2,local_38);
  }
  return uVar2;
}


/* address=18062f0d0 name=FUN_18062f0d0 */

undefined8 FUN_18062f0d0(wchar_t *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *local_28 [2];
  wchar_t *local_18 [3];
  
  iVar2 = FUN_18059efe0(param_1,param_3);
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar3 = wcstoul(param_1,local_28,param_3);
    if (((uVar3 != 0) && (uVar3 = wcstoul((wchar_t *)local_28,local_18,4), uVar3 != 0)) &&
       (lVar5 = FUN_18059e7c0(local_28), lVar5 == 0)) {
      uVar4 = FUN_180586d90(local_18,param_4);
      FUN_1805b3160(param_2,uVar4);
      cVar1 = operator==<>(param_2,0);
      if (cVar1 != '\0') {
        return 0;
      }
      return 1;
    }
    FUN_18050f6f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x1d2);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=18062f1b0 name=FUN_18062f1b0 */

undefined8
FUN_18062f1b0(undefined8 param_1,undefined8 param_2,undefined *param_3,byte param_4,
             undefined4 param_5)

{
  undefined uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_20 [32];
  
  iVar2 = FUN_18059f4f0(param_1,local_20,0,param_5);
  if ((iVar2 != 0) && (uVar3 = FUN_18059e7c0(local_20), uVar3 <= param_4)) {
    uVar4 = FUN_18059e7c0(local_20);
    uVar5 = FUN_18059e7a0(local_20);
    FUN_18062cdf0(param_2,uVar5,uVar4);
    uVar1 = FUN_18059e7c0(local_20);
    *param_3 = uVar1;
    return 1;
  }
  FUN_18050f6f0(0x10,0,0xa0,
                "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                ,0x1e5);
  return 0;
}


/* address=18062f270 name=FUN_18062f270 */

undefined8 FUN_18062f270(undefined8 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_18059f5c0(param_1,&local_18,param_3,(longlong)param_4);
  if ((iVar1 == 0) || (0x7fffffff < CONCAT44(uStack_14,local_18))) {
    FUN_18050f6f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,499);
    uVar2 = 0;
  }
  else {
    *param_2 = local_18;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=18062f300 name=FUN_18062f300 */

undefined8
FUN_18062f300(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_18059f5c0(param_1,&local_18,param_3,param_4);
  if ((iVar1 == 0) || (0xffffffff < CONCAT44(uStack_14,local_18))) {
    FUN_18050f6f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x200);
    uVar2 = 0;
  }
  else {
    *param_2 = local_18;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=18062f390 name=FUN_18062f390 */

undefined8
FUN_18062f390(undefined8 param_1,undefined2 *param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 local_18;
  undefined6 uStack_16;
  
  iVar1 = FUN_18059f5c0(param_1,&local_18,param_3,param_4);
  if ((iVar1 == 0) || (0xffff < CONCAT62(uStack_16,local_18))) {
    FUN_18050f6f0(0x10,0,0xa0,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\ssl_asn1.cc"
                  ,0x20d);
    uVar2 = 0;
  }
  else {
    *param_2 = local_18;
    uVar2 = 1;
  }
  return uVar2;
}


/* address=18062f410 name=FUN_18062f410 */

undefined * FUN_18062f410(void)

{
  return &DAT_1807b17b0;
}


/* address=18062f420 name=FUN_18062f420 */

undefined * FUN_18062f420(void)

{
  return &DAT_1807b1800;
}


/* address=18062f430 name=FUN_18062f430 */

undefined * FUN_18062f430(void)

{
  return &DAT_1807b1620;
}


/* address=18062f440 name=FUN_18062f440 */

undefined * FUN_18062f440(void)

{
  return &DAT_1807b1670;
}


/* address=18062f450 name=FUN_18062f450 */

undefined * FUN_18062f450(void)

{
  return &DAT_1807b16c0;
}


/* address=18062f460 name=FUN_18062f460 */

undefined * FUN_18062f460(void)

{
  return &DAT_1807b1710;
}


/* address=18062f470 name=FUN_18062f470 */

undefined * FUN_18062f470(void)

{
  return &DAT_1807b1760;
}


/* address=18062f480 name=FUN_18062f480 */

longlong FUN_18062f480(longlong param_1)

{
  return param_1 >> 0x3f;
}


/* address=18062f4a0 name=FUN_18062f4a0 */

void FUN_18062f4a0(ulonglong param_1)

{
  FUN_18062f480(~param_1 & param_1 - 1);
  return;
}


/* address=18062f4d0 name=FUN_18062f4d0 */

void FUN_18062f4d0(ulonglong param_1,ulonglong param_2)

{
  FUN_18062f4a0(param_1 ^ param_2);
  return;
}


/* address=18062f510 name=FUN_18062f510 */

void FUN_18062f510(int param_1,int param_2)

{
  FUN_18062f4d0((longlong)param_1,(longlong)param_2);
  return;
}


/* address=18062f540 name=FUN_18062f540 */

undefined8 FUN_18062f540(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18062f590 name=FUN_18062f590 */

undefined8 FUN_18062f590(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18062f5d0 name=FUN_18062f5d0 */

void FUN_18062f5d0(longlong param_1)

{
  FUN_18055dc80(param_1 + 8);
  FUN_180532ed0(param_1 + 0xa0);
  return;
}


/* address=18062f620 name=FUN_18062f620 */

undefined8
FUN_18062f620(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
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
  if ((param_4 == 0) || (lVar3 = FUN_180532b10(param_7), param_4 == lVar3)) {
    lVar3 = FUN_18055cd60(*param_1);
    if (param_3 == lVar3) {
      uVar4 = FUN_180532b10(param_7);
      uVar1 = FUN_18055f380(param_6);
      if (param_8 == '\0') {
        local_38 = 0;
      }
      else {
        local_38 = FUN_18055f3a0(param_6);
      }
      if (uVar4 + uVar1 + (ulonglong)local_38 != param_3) {
        FID_conflict__assert
                  (u_mac_key_len___enc_key_len____imp_180984590,
                   u_D__a_1_s_target_x86_64_pc_window_180984490,0x4b);
      }
      puVar5 = param_1 + 1;
      FUN_18055dc10(puVar5);
      FUN_180532e30(param_1 + 0x14);
      if (0x40 < uVar4) {
        FID_conflict__assert
                  (u_mac_key_len_<__EVP_MAX_MD_SIZE_180984740,
                   u_D__a_1_s_target_x86_64_pc_window_180984640,0x50);
      }
      FUN_18062f540(param_1 + 0x21,param_2,uVar4);
      local_28 = (undefined)uVar4;
      *(undefined *)(param_1 + 0x29) = local_28;
      *(char *)((longlong)param_1 + 0x149) = param_8;
      if (param_8 == '\0') {
        local_18 = 0;
      }
      else {
        local_18 = param_2 + uVar4 + uVar1;
      }
      iVar2 = FUN_18055ded0(puVar5,param_6,0,param_2 + uVar4,local_18,param_5 == 1);
      if ((iVar2 == 0) ||
         (iVar2 = FUN_180532fd0(param_1 + 0x14,param_2,uVar4,param_7,0), iVar2 == 0)) {
        FUN_18062f5d0(param_1);
        uVar6 = 0;
      }
      else {
        FUN_18055f270(puVar5,0);
        uVar6 = 1;
      }
    }
    else {
      FUN_18050f6f0(0x1e,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180984410,CONCAT44(uVar7,0x44));
      uVar6 = 0;
    }
  }
  else {
    FUN_18050f6f0(0x1e,0,0x7a,s_D__a_1_s_target_x86_64_pc_window_180984390,CONCAT44(uVar7,0x3f));
    uVar6 = 0;
  }
  return uVar6;
}


/* address=18062f8d0 name=FUN_18062f8d0 */

longlong FUN_18062f8d0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    FID_conflict__assert
              (u_extra_in_len____0_180984880,u_D__a_1_s_target_x86_64_pc_window_180984780,99);
  }
  lVar3 = FUN_180533490(param_1 + 0xa0);
  iVar1 = FUN_18055f170(param_1 + 8);
  if (iVar1 == 2) {
    uVar2 = FUN_18055f0b0(param_1 + 8);
    uVar4 = (ulonglong)uVar2;
    if ((uVar4 == 0) || ((uVar4 & uVar4 - 1) != 0)) {
      FID_conflict__assert
                (u_block_size____0_____block_size___1809849b0,
                 u_D__a_1_s_target_x86_64_pc_window_1809848b0,0x6f);
    }
    lVar3 = lVar3 + (uVar4 - (ulonglong)(param_2 + lVar3) % uVar4);
  }
  return lVar3;
}


/* address=180630b10 name=FUN_180630b10 */

longlong FUN_180630b10(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_18;
  
  iVar3 = FUN_180517d10(param_1);
  if (iVar3 == 0) {
    uVar4 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar5 = FUN_1805bfcb0(uVar4);
    local_18 = lVar5 + 5;
    uVar4 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
    cVar1 = FUN_1805c0ee0(uVar4);
    if (cVar1 == '\0') {
      uVar4 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar2 = FUN_1805bfb70(uVar4);
      if (0x303 < uVar2) {
        local_18 = lVar5 + 6;
      }
    }
    cVar1 = FUN_180631ce0(param_1);
    if (cVar1 != '\0') {
      local_18 = local_18 << 1;
    }
  }
  else {
    local_18 = FUN_1806397c0(param_1,1);
  }
  return local_18;
}


/* address=180630c00 name=FUN_180630c00 */

undefined4 FUN_180630c00(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4)

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


/* address=180630c80 name=FUN_180630c80 */

undefined8 FUN_180630c80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180630cd0 name=FUN_180630cd0 */

longlong FUN_180630cd0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18;
  
  iVar1 = FUN_180517d10(param_1);
  if (iVar1 == 0) {
    local_18 = 5;
  }
  else {
    local_18 = 0xd;
  }
  uVar2 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
  lVar3 = FUN_1805bfc70(uVar2);
  return local_18 + lVar3;
}


/* address=180630d30 name=FUN_180630d30 */

undefined8
FUN_180630d30(longlong param_1,char *param_2,undefined *param_3,longlong *param_4,undefined *param_5
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
  cVar1 = FUN_1805c14d0(param_1,param_5);
  if (cVar1 == '\0') {
    return 4;
  }
  local_108 = local_68;
  puVar4 = (undefined *)FUN_1805235c0(local_108,param_6);
  puVar10 = local_b8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_1805235c0(local_118,local_b8);
  iVar3 = FUN_18059e9c0(local_118,&local_138);
  if (((iVar3 == 0) || (iVar3 = FUN_18059ea10(local_118,local_130), iVar3 == 0)) ||
     (iVar3 = FUN_18059ea10(local_118,local_134), iVar3 == 0)) {
    *param_4 = 5;
    return 2;
  }
  uVar5 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
  cVar1 = FUN_1805c0ee0(uVar5);
  if (cVar1 == '\0') {
    local_11c = (uint)local_130[0];
    uVar5 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
    uVar2 = FUN_1805bfbd0(uVar5);
    local_137 = local_11c == uVar2;
    local_128 = (uint)(byte)local_137;
  }
  else {
    local_137 = (int)(uint)local_130[0] >> 8 == 3;
    local_12c = (uint)(byte)local_137;
  }
  if ((bool)local_137 == false) {
    FUN_18050f6f0(0x10,0,0xf7,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0xe7));
    *param_5 = 0x46;
    return 4;
  }
  if (0x4140 < local_134[0]) {
    FUN_18050f6f0(0x10,0,0x92,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0xee));
    *param_5 = 0x16;
    return 4;
  }
  iVar3 = FUN_18059ec80(local_118,local_d8,local_134[0]);
  if (iVar3 == 0) {
    *param_4 = (ulonglong)local_134[0] + 5;
    return 2;
  }
  uVar5 = FUN_180521ff0(param_6,local_58,0,5);
  FUN_1805235c0(local_c8,uVar5);
  puVar4 = local_c8;
  puVar10 = local_a8;
  for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  FUN_18051eec0(param_1,0,0x100,local_a8);
  local_100 = FUN_180521770(param_6);
  lVar9 = FUN_18059e7c0(local_118);
  *param_4 = local_100 - lVar9;
  if (((((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 1 & 1) != 0) &&
       (uVar2 = FUN_1805af6a0(param_1), 0x303 < uVar2)) &&
      ((iVar3 = FUN_180519c80(param_1), iVar3 != 0 && ((local_138 == '\x14' && (local_134[0] == 1)))
       ))) && (pcVar6 = (char *)FUN_18059e7a0(local_d8), *pcVar6 == '\x01')) {
    *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) =
         *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) + '\x01';
    if (0x20 < *(byte *)(*(longlong *)(param_1 + 0x30) + 0xd2)) {
      FUN_18050f6f0(0x10,0,0xdb,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,CONCAT44(uVar11,0x107));
      *param_5 = 10;
      return 4;
    }
    return 1;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) & 1) != 0) {
    uVar5 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
    cVar1 = FUN_1805c0ee0(uVar5);
    if ((cVar1 != '\0') && (local_138 == '\x17')) {
      uVar5 = FUN_180631da0(param_1,param_5,*param_4);
      return uVar5;
    }
  }
  if (**(longlong **)(param_1 + 0x30) == -1) {
    FUN_18050f6f0(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0x118));
    *param_5 = 0x50;
    return 4;
  }
  local_f8 = FUN_18059e7c0(local_d8);
  uVar5 = FUN_18059e7a0(local_d8);
  puVar4 = (undefined *)FUN_1805217d0(local_48,uVar5,local_f8);
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
  uVar7 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
  uVar5 = *local_f0;
  cVar1 = FUN_1805bfe80(uVar7,param_3,local_138,local_130[0],uVar5,local_88,local_98);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (cVar1 == '\0') {
    if ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) & 1) != 0) {
      uVar5 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
      cVar1 = FUN_1805c0ee0(uVar5);
      if (cVar1 == '\0') {
        FUN_18050f390();
        uVar5 = FUN_180631da0(param_1,param_5,*param_4);
        return uVar5;
      }
    }
    FUN_18050f6f0(0x10,0,0x8b,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0x126));
    *param_5 = 0x14;
    return 4;
  }
  *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) =
       *(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) & 0xfe;
  **(longlong **)(param_1 + 0x30) = **(longlong **)(param_1 + 0x30) + 1;
  uVar7 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
  cVar1 = FUN_1805c0ee0(uVar7);
  if (cVar1 == '\0') {
    uVar7 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
    uVar2 = FUN_1805bfb70(uVar7);
    if (0x303 < uVar2) {
      local_124 = 1;
      goto LAB_180631441;
    }
  }
  local_124 = 0;
LAB_180631441:
  local_136 = (char)local_124;
  if ((char)local_124 == '\0') {
    local_120 = 0x4000;
  }
  else {
    local_120 = 0x4001;
  }
  local_e8 = (ulonglong)local_120;
  uVar8 = FUN_180521770(param_3);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (local_e8 < uVar8) {
    FUN_18050f6f0(0x10,0,0x88,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,CONCAT44(uVar11,0x138));
    *param_5 = 0x16;
    uVar5 = 4;
  }
  else {
    if (local_136 != '\0') {
      if (local_138 != '\x17') {
        FUN_18050f6f0(0x10,0,0xfb,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                      ,CONCAT44(uVar11,0x140));
        *param_5 = 0x32;
        return 4;
      }
      do {
        cVar1 = FUN_180521780(param_3);
        if (cVar1 != '\0') {
          FUN_18050f6f0(0x10,0,0x8b,
                        "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                        ,0x147);
          *param_5 = 0x33;
          return 4;
        }
        pcVar6 = (char *)FUN_18052d910(param_3);
        local_138 = *pcVar6;
        lVar9 = FUN_180521770(param_3);
        puVar4 = (undefined *)FUN_180521ff0(param_3,local_38,0,lVar9 + -1);
        uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
        puVar10 = param_3;
        for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar10 = puVar10 + 1;
        }
      } while (local_138 == '\0');
    }
    cVar1 = FUN_180521780(param_3);
    if (cVar1 == '\0') {
      *(undefined *)(*(longlong *)(param_1 + 0x30) + 0xd2) = 0;
    }
    else {
      *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) =
           *(char *)(*(longlong *)(param_1 + 0x30) + 0xd2) + '\x01';
      if (0x20 < *(byte *)(*(longlong *)(param_1 + 0x30) + 0xd2)) {
        FUN_18050f6f0(0x10,0,0xdb,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                      ,CONCAT44(uVar11,0x154));
        *param_5 = 10;
        return 4;
      }
    }
    if (local_138 == '\x15') {
      local_e0 = local_28;
      puVar4 = (undefined *)FUN_1805235c0(local_e0,param_3);
      puVar10 = local_78;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar10 = puVar10 + 1;
      }
      uVar5 = FUN_180631a50(param_1,param_5,local_78);
    }
    else if ((local_138 == '\x16') || (cVar1 = FUN_1805c1580(param_1), cVar1 == '\0')) {
      *(undefined *)(*(longlong *)(param_1 + 0x30) + 0xd3) = 0;
      *param_2 = local_138;
      uVar5 = 0;
    }
    else {
      FUN_18050f6f0(0x10,0,0xe1,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,CONCAT44(uVar11,0x165));
      *param_5 = 10;
      uVar5 = 4;
    }
  }
  return uVar5;
}


/* address=180631740 name=FUN_180631740 */

longlong FUN_180631740(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = FUN_180517d10(param_1);
  if (iVar2 == 0) {
    uVar3 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar5 = FUN_1805bfc70(uVar3);
    lVar4 = lVar5 + 5;
    cVar1 = FUN_180631ce0(param_1);
    if (cVar1 != '\0') {
      uVar3 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar3 = FUN_180521460(uVar3);
      lVar4 = FUN_1805bd910(uVar3);
      lVar4 = lVar5 + 10 + lVar4;
    }
  }
  else {
    uVar3 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar4 = FUN_1805bfc70(uVar3);
    lVar4 = lVar4 + 0xd;
  }
  return lVar4;
}


/* address=180631810 name=FUN_180631810 */

ulonglong FUN_180631810(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4,
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
  
  iVar2 = FUN_180630c00(param_6,param_7,param_2,param_4);
  if (iVar2 == 0) {
    lVar4 = FUN_1806322b0(param_1,param_5,param_7);
    cVar1 = FUN_180632380(param_1,&local_30,param_5,param_7);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else if ((param_7 + lVar4 < param_7) || (lVar4 + param_7 + local_30 < lVar4 + param_7)) {
      uVar3 = FUN_18050f6f0(0x10,0,200,
                            "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                            ,0x20f);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else if (param_4 < param_7 + lVar4 + local_30) {
      uVar3 = FUN_18050f6f0(0x10,0,0x79,
                            "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                            ,0x213);
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      local_28 = param_2 + lVar4;
      local_20 = local_28 + param_7;
      local_18 = param_2;
      cVar1 = FUN_180632470(param_1,param_2,local_28,local_20,param_5,param_6,param_7);
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
    uVar3 = FUN_18050f6f0(0x10,0,0xbd,
                          "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                          ,0x204);
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}


/* address=180631a50 name=FUN_180631a50 */

undefined8 FUN_180631a50(longlong param_1,undefined *param_2,undefined *param_3)

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
  
  lVar4 = FUN_180521770(param_3);
  if (lVar4 == 2) {
    puVar8 = param_3;
    puVar9 = local_28;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_18051eec0(param_1,0,0x15,local_28);
    pcVar6 = (char *)FUN_18052d950(param_3,0);
    cVar1 = *pcVar6;
    pbVar7 = (byte *)FUN_18052d950(param_3,1);
    bVar2 = *pbVar7;
    local_38 = CONCAT11(cVar1,bVar2);
    FUN_18051ee20(param_1,0x4004,local_38);
    if (cVar1 == '\x01') {
      if (bVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xac) = 1;
        uVar5 = 3;
      }
      else {
        if ((((*(byte *)(*(longlong *)(param_1 + 0x30) + 0xdc) >> 1 & 1) != 0) &&
            (uVar3 = FUN_1805af6a0(param_1), 0x303 < uVar3)) && (bVar2 != 0x5a)) {
          *param_2 = 0x32;
          FUN_18050f6f0(0x10,0,0x66,
                        "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
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
          FUN_18050f6f0(0x10,0,0xdc,
                        "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                        ,0x249);
          uVar5 = 4;
        }
      }
    }
    else if (cVar1 == '\x02') {
      FUN_18050f6f0(0x10,0,bVar2 + 1000,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,0x250);
      FUN_18050f860("SSL alert number %d",bVar2);
      *param_2 = 0;
      uVar5 = 4;
    }
    else {
      *param_2 = 0x2f;
      FUN_18050f6f0(0x10,0,0xe3,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                    ,599);
      uVar5 = 4;
    }
  }
  else {
    *param_2 = 0x32;
    FUN_18050f6f0(0x10,0,0x66,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0x227);
    uVar5 = 4;
  }
  return uVar5;
}


/* address=180631ce0 name=FUN_180631ce0 */

undefined FUN_180631ce0(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
  cVar1 = FUN_1805c0ee0(uVar4);
  if (cVar1 == '\0') {
    uVar4 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
    uVar2 = FUN_1805bfb70(uVar4);
    if ((uVar2 < 0x302) && ((*(uint *)(param_1 + 0x84) & 0x100) != 0)) {
      uVar4 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar4 = FUN_180521460(uVar4);
      iVar3 = FUN_1805bbbe0(uVar4);
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


/* address=180631da0 name=FUN_180631da0 */

undefined8 FUN_180631da0(longlong param_1,undefined *param_2,ulonglong param_3)

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
    FUN_18050f6f0(0x10,0,0x10e,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0xbb);
    *param_2 = 10;
    uVar1 = 4;
  }
  return uVar1;
}


/* address=180631e60 name=FUN_180631e60 */

undefined8
FUN_180631e60(longlong param_1,undefined *param_2,longlong param_3,undefined8 param_4,
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
  
  uVar5 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
  local_68 = (undefined *)0x0;
  local_78 = 0;
  cVar1 = FUN_1805c0ee0(uVar5);
  if ((cVar1 == '\0') && (uVar2 = FUN_1805bfb70(uVar5), 0x303 < uVar2)) {
    local_68 = &param_5;
    local_78 = 1;
  }
  cVar1 = FUN_1805bfd20(uVar5,&local_60,param_7,local_78);
  if ((cVar1 == '\0') || (cVar1 = FUN_1805bfdb0(uVar5,local_70,param_7,local_78), cVar1 == '\0')) {
    FUN_18050f6f0(0x10,0,200,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                  ,0x180);
    return 0;
  }
  if ((param_6 != param_3) && (iVar4 = FUN_180630c00(param_6,param_7,param_3,param_7), iVar4 != 0))
  {
    FID_conflict__assert
              (L"in == out || !buffers_alias(in, in_len, out, in_len)",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
               ,0x184);
  }
  uVar6 = FUN_180630cd0(param_1);
  iVar4 = FUN_180630c00(param_6,param_7,param_2,uVar6);
  if (iVar4 != 0) {
    FID_conflict__assert
              (L"!buffers_alias(in, in_len, out_prefix, ssl_record_prefix_len(ssl))",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
               ,0x185);
  }
  iVar4 = FUN_180630c00(param_6,param_7,param_4,local_60);
  if (iVar4 != 0) {
    FID_conflict__assert
              (L"!buffers_alias(in, in_len, out_suffix, suffix_len)",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
               ,0x186);
  }
  if (local_78 == 0) {
    *param_2 = param_5;
  }
  else {
    *param_2 = 0x17;
  }
  uVar3 = FUN_1805bfbd0(uVar5);
  param_2[1] = (char)((ushort)uVar3 >> 8);
  param_2[2] = (char)uVar3;
  param_2[3] = (char)((ushort)local_70[0] >> 8);
  param_2[4] = (char)local_70[0];
  uVar6 = FUN_1805217d0(local_28,param_2,5);
  FUN_1805235c0(local_58,uVar6);
  if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) == -1) {
    FUN_18050f6f0(0x10,0,0x45,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
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
  cVar1 = FUN_1805c0640(uVar5,param_2 + 5,param_3,param_4,*param_2,uVar3,
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
  FUN_18051eec0(param_1,1,0x100,local_38);
  return 1;
}


/* address=1806322b0 name=FUN_1806322b0 */

longlong FUN_1806322b0(longlong param_1,char param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((param_2 == '\x17') && (1 < param_3)) && (cVar1 = FUN_180631ce0(param_1), cVar1 != '\0')) {
    uVar2 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
    uVar2 = FUN_180521460(uVar2);
    lVar3 = FUN_1805bd910(uVar2);
    return lVar3 + 9;
  }
  uVar2 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
  lVar3 = FUN_1805bfc70(uVar2);
  return lVar3 + 5;
}


/* address=180632380 name=FUN_180632380 */

void FUN_180632380(longlong param_1,undefined8 param_2,char param_3,ulonglong param_4)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulonglong local_res20;
  undefined8 local_18;
  
  local_18 = 0;
  uVar3 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
  cVar1 = FUN_1805c0ee0(uVar3);
  if (cVar1 == '\0') {
    uVar3 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
    uVar2 = FUN_1805bfb70(uVar3);
    if (0x303 < uVar2) {
      local_18 = 1;
    }
  }
  local_res20 = param_4;
  if ((param_3 == '\x17') && (1 < param_4)) {
    cVar1 = FUN_180631ce0(param_1);
    if (cVar1 != '\0') {
      local_res20 = param_4 - 1;
    }
  }
  uVar3 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
  FUN_1805bfd20(uVar3,param_2,local_res20,local_18);
  return;
}


/* address=180632470 name=FUN_180632470 */

void FUN_180632470(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
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
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_88;
  if (((param_5 == '\x17') && (1 < param_7)) && (cVar1 = FUN_180631ce0(param_1), cVar1 != '\0')) {
    uVar2 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
    lVar3 = FUN_1805bfc70(uVar2);
    if (lVar3 != 0) {
      FID_conflict__assert
                (L"ssl->s3->aead_write_ctx->ExplicitNonceLen() == 0",
                 L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                 ,0x1d8);
    }
    local_28 = 5;
    local_40 = param_2 + 5;
    local_38 = param_2 + 6;
    local_58 = 1;
    local_60 = param_6;
    local_68 = param_5;
    cVar1 = FUN_180631e60(param_1,param_2,local_40,local_38);
    if (cVar1 != '\0') {
      uVar2 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
      cVar1 = FUN_1805bfd20(uVar2,&local_30,1,0);
      if (cVar1 == '\0') {
        FID_conflict__assert
                  (L"false",
                   L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                   ,0x1e6);
      }
      else {
        local_48 = local_30 + 6;
        uVar2 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
        uVar2 = FUN_180521460(uVar2);
        lVar3 = FUN_1805bd910(uVar2);
        if (lVar3 + 5 != local_48) {
          FID_conflict__assert
                    (L"SSL3_RT_HEADER_LENGTH + ssl_cipher_get_record_split_len( ssl->s3->aead_write_ctx->cipher()) == split_record_len"
                     ,
                     L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                     ,0x1ec);
        }
        local_58 = param_7 - 1;
        local_60 = param_6 + 1;
        local_68 = param_5;
        cVar1 = FUN_180631e60(param_1,local_20,param_3 + 1,param_4);
        if (cVar1 != '\0') {
          lVar3 = FUN_1806322b0(param_1,0x17,param_7);
          if (lVar3 != local_48 + 4) {
            FID_conflict__assert
                      (L"tls_seal_scatter_prefix_len(ssl, type, in_len) == split_record_len + SSL3_RT_HEADER_LENGTH - 1"
                       ,
                       L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls_record.cc"
                       ,0x1f6);
          }
          FUN_180630c80(param_2 + local_48,local_20,4);
          FUN_180630c80(param_3,local_1c,1);
        }
      }
    }
  }
  else {
    local_58 = param_7;
    local_60 = param_6;
    local_68 = param_5;
    FUN_180631e60(param_1,param_2,param_3,param_4);
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_88);
  return;
}


/* address=180632e30 name=FUN_180632e30 */

undefined8 FUN_180632e30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180632e80 name=FUN_180632e80 */

bool FUN_180632e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  uVar2 = FUN_180521770(param_6);
  uVar3 = FUN_180521460(param_6);
  uVar4 = FUN_180521770(param_5);
  uVar5 = FUN_180521460(param_5);
  uVar6 = FUN_180521770(param_4);
  uVar7 = FUN_180521460(param_4);
  uVar8 = FUN_180521770(param_3);
  uVar9 = FUN_180521460(param_3);
  uVar10 = FUN_180521770(param_2);
  uVar11 = FUN_180521460(param_2);
  iVar1 = FUN_180586150(param_1,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  return iVar1 == 1;
}


/* address=180633000 name=FUN_180633000 */

ulonglong FUN_180633000(longlong *param_1,uint param_2,undefined8 param_3,longlong param_4,
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
  
  cVar1 = FUN_1806339a0(param_1,&local_1c0,&local_1b8,&local_1a0,*(undefined8 *)(param_4 + 200));
  if (cVar1 == '\0') {
    return 0;
  }
  local_188 = (local_1c0 + local_1b8 + local_1a0) * 2;
  cVar1 = FUN_180521780(param_3);
  if (cVar1 == '\0') {
LAB_1806330ff:
    lVar7 = FUN_180521770(param_3);
    if (lVar7 != local_188) {
      FID_conflict__assert
                (L"key_block_cache->size() == key_block_size",
                 L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\t1_enc.cc"
                 ,0xdf);
    }
    FUN_1805235c0(local_198,param_3);
    FUN_180521710(local_138);
    FUN_180521710(local_128);
    FUN_180521710(local_180);
    local_1a8 = (uint)((*(byte *)((longlong)param_1 + 0xa4) & 1) == 0);
    if (param_2 == local_1a8) {
      puVar4 = (undefined *)FUN_180521ff0(local_198,local_98,0,local_1c0);
      puVar8 = local_138;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined *)FUN_180521ff0(local_198,local_88,local_1c0 * 2,local_1b8);
      puVar8 = local_128;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined *)
               FUN_180521ff0(local_198,local_78,local_1b8 * 2 + local_1c0 * 2,local_1a0);
      puVar8 = local_180;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    else {
      puVar4 = (undefined *)FUN_180521ff0(local_198,local_68,local_1c0,local_1c0);
      puVar8 = local_138;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined *)FUN_180521ff0(local_198,local_58,local_1b8 + local_1c0 * 2,local_1b8);
      puVar8 = local_128;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined *)
               FUN_180521ff0(local_198,local_48,local_1a0 + local_1b8 * 2 + local_1c0 * 2,local_1a0)
      ;
      puVar8 = local_180;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    cVar1 = FUN_180521780(param_5);
    if (cVar1 == '\0') {
      uVar5 = FUN_180521770(param_5);
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
    iVar3 = FUN_180517d10(param_1);
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
    uVar6 = FUN_1805bf240(local_170,param_2,*(undefined2 *)(param_1 + 2),iVar3 != 0,
                          *(undefined8 *)(param_4 + 200),local_d8,local_e8,local_f8);
    FUN_180521660(local_1b0,uVar6);
    FUN_1805c0fa0(local_170);
    cVar1 = FUN_180521840(local_1b0);
    if (cVar1 == '\0') {
      FUN_1805c0fa0(local_1b0);
      uVar5 = 0;
    }
    else if (param_2 == 0) {
      local_168 = local_38;
      local_160 = local_118;
      puVar4 = (undefined *)FUN_180521710(local_168);
      puVar8 = local_c8;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar6 = FUN_1805214c0(local_1b0);
      uVar6 = FUN_180521660(local_160,uVar6);
      local_158 = *param_1;
      bVar2 = (**(code **)(local_158 + 0x88))(param_1,3,uVar6,local_c8);
      FUN_1805c0fa0(local_1b0);
      uVar5 = (ulonglong)bVar2;
    }
    else {
      local_150 = local_28;
      local_148 = local_110;
      puVar4 = (undefined *)FUN_180521710(local_150);
      puVar8 = local_b8;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar6 = FUN_1805214c0(local_1b0);
      uVar6 = FUN_180521660(local_148,uVar6);
      local_140 = *param_1;
      bVar2 = (**(code **)(local_140 + 0x90))(param_1,3,uVar6,local_b8);
      FUN_1805c0fa0(local_1b0);
      uVar5 = (ulonglong)bVar2;
    }
  }
  else {
    cVar1 = FUN_180521df0(param_3,local_188);
    if (cVar1 != '\0') {
      puVar4 = (undefined *)FUN_18052e3b0(local_a8,param_3);
      puVar8 = local_108;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      cVar1 = FUN_180633ad0(param_1,local_108,param_4);
      if (cVar1 != '\0') goto LAB_1806330ff;
    }
    uVar5 = 0;
  }
  return uVar5;
}


/* address=1806335e0 name=FUN_1806335e0 */

void FUN_1806335e0(undefined8 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined local_38 [16];
  undefined local_28 [24];
  
  puVar1 = (undefined *)FUN_180521710(local_28);
  puVar4 = local_38;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar2 = FUN_1805c6ab0(param_1);
  FUN_180633000(*param_1,param_2,param_1 + 0xc1,uVar2,local_38);
  return;
}


/* address=180633670 name=FUN_180633670 */

void FUN_180633670(longlong *param_1,undefined8 param_2,undefined *param_3)

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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_1d8;
  local_1a8 = *param_1;
  FUN_1805217d0(local_180,param_2,0x30);
  if ((*(byte *)((longlong)param_1 + 0x622) >> 1 & 1) == 0) {
    FUN_1805217d0(local_108,"master secret",0xd);
    local_190 = local_88;
    local_188 = local_78;
    puVar2 = (undefined *)FUN_1805232a0(local_190,*(longlong *)(local_1a8 + 0x30) + 0x10);
    puVar5 = local_f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = (undefined *)FUN_1805232a0(local_188,*(longlong *)(local_1a8 + 0x30) + 0x30);
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
    uVar3 = FUN_180604cf0(param_1 + 0x33);
    local_1b0 = local_f8;
    local_1b8 = local_e8;
    FUN_180632e80(uVar3,local_b8,local_c8,local_d8);
  }
  else {
    FUN_1805217d0(local_170,"extended master secret",0x16);
    cVar1 = FUN_180604e00(param_1 + 0x33,local_68,&local_198);
    if (cVar1 != '\0') {
      local_1a0 = local_a8;
      puVar2 = (undefined *)FUN_180521710(local_1a0);
      puVar5 = local_158;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2 = (undefined *)FUN_1805217d0(local_98,local_68,local_198);
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
      uVar3 = FUN_180604cf0(param_1 + 0x33);
      local_1b0 = local_158;
      local_1b8 = local_148;
      FUN_180632e80(uVar3,local_118,local_128,local_138);
    }
  }
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_1d8);
  return;
}


/* address=1806339a0 name=FUN_1806339a0 */

undefined8
FUN_1806339a0(undefined8 param_1,longlong *param_2,ulonglong *param_3,longlong *param_4,
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
  iVar3 = FUN_180517d10(param_1);
  uVar2 = FUN_1805af6a0(param_1);
  cVar1 = FUN_1805bcc30(local_10,param_2,param_4,param_5,CONCAT22(uVar6,uVar2),iVar3 != 0);
  if (cVar1 == '\0') {
    FUN_18050f6f0(0x10,0,0x82,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\t1_enc.cc"
                  ,0xad);
    uVar4 = 0;
  }
  else {
    uVar5 = FUN_18055cd60(local_10[0]);
    *param_3 = uVar5;
    if (*param_2 != 0) {
      if (*param_3 < (ulonglong)(*param_2 + *param_4)) {
        FUN_18050f6f0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\t1_enc.cc"
                      ,0xb7);
        return 0;
      }
      *param_3 = *param_3 - (*param_2 + *param_4);
    }
    uVar4 = 1;
  }
  return uVar4;
}


/* address=180633ad0 name=FUN_180633ad0 */

void FUN_180633ad0(longlong param_1,undefined *param_2,longlong param_3)

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
  
  FUN_1805217d0(local_a0,param_3 + 0xb,*(undefined *)(param_3 + 10));
  FUN_1805217d0(local_b0,"key expansion",0xd);
  uVar1 = FUN_1805b85b0(param_3);
  puVar2 = (undefined *)FUN_1805232a0(local_38,*(longlong *)(param_1 + 0x30) + 0x30);
  puVar4 = local_88;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined *)FUN_1805232a0(local_28,*(longlong *)(param_1 + 0x30) + 0x10);
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
  FUN_180632e80(uVar1,local_48,local_58,local_68,local_78,local_88);
  return;
}


/* address=180633c50 name=FUN_180633c50 */

undefined8 FUN_180633c50(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180633ca0 name=FUN_180633ca0 */

int FUN_180633ca0(undefined8 *param_1)

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
      local_18 = FUN_180634ca0(param_1);
      break;
    case 1:
      local_18 = FUN_1806353f0(param_1);
      break;
    case 2:
      local_18 = FUN_180636200(param_1);
      break;
    case 3:
      local_18 = FUN_180636790(param_1);
      break;
    case 4:
      local_18 = FUN_180636dd0(param_1);
      break;
    case 5:
      local_18 = FUN_180637a50(param_1);
      break;
    case 6:
      local_18 = FUN_180637ae0(param_1);
      break;
    case 7:
      local_18 = FUN_180637ca0(param_1);
      break;
    case 8:
      local_18 = FUN_180637fb0(param_1);
      break;
    case 9:
      local_18 = FUN_180638200(param_1);
      break;
    case 10:
      local_18 = FUN_1806383a0(param_1);
      break;
    case 0xb:
      local_18 = FUN_180638680(param_1);
      break;
    case 0xc:
      local_18 = FUN_1806387d0(param_1);
      break;
    case 0xd:
      local_18 = FUN_180638910(param_1);
      break;
    case 0xe:
      local_18 = FUN_1806389f0(param_1);
      break;
    case 0xf:
      local_18 = FUN_180638ba0(param_1);
    }
    if (*(int *)(param_1 + 3) != iVar1) {
      FUN_18051ee20(*param_1,0x2001,1);
    }
  } while (local_18 == 1);
  return local_18;
}


/* address=180633eb0 name=FUN_180633eb0 */

char * FUN_180633eb0(longlong param_1)

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


/* address=180633ff0 name=FUN_180633ff0 */

ulonglong FUN_180633ff0(undefined8 *param_1,undefined8 param_2)

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
  lVar3 = FUN_180521460(param_1 + 0xbc);
  local_180 = *(short *)(lVar3 + 6);
  FUN_180521710(local_108);
  local_188 = 0x32;
  cVar1 = FUN_1805db010(param_1,&local_187,local_108,&local_188,param_2);
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (cVar1 == '\0') {
    uVar4 = FUN_1805e69b0(local_170,2,local_188);
    return uVar4 & 0xffffffffffffff00;
  }
  if (local_187 == '\0') {
    FUN_1805e69b0(local_170,2,0x2f);
    uVar4 = FUN_18050f6f0(0x10,0,0xf3,
                          "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                          ,CONCAT44(uVar8,0x3d));
    return uVar4 & 0xffffffffffffff00;
  }
  FUN_180521c30(local_160);
  local_178 = FUN_180521460(param_1 + 0xc3);
  if ((((local_178 == 0) || ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) ||
      (*(short *)(local_178 + 0x20) != local_180)) ||
     (cVar1 = FUN_180521780(local_178 + 0x38), cVar1 != '\0')) {
    FUN_180523250(local_f8);
    uVar6 = FUN_180626fa0(local_140,local_180);
    FUN_180521660(local_168,uVar6);
    FUN_1805c6f90(local_140);
    cVar1 = FUN_180521840(local_168);
    if (cVar1 != '\0') {
      uVar6 = FUN_1805214c0(local_f8);
      iVar2 = FUN_180590610(uVar6,0x20);
      if (iVar2 != 0) {
        local_150 = (longlong *)FUN_180521460(local_168);
        puVar5 = local_108;
        puVar7 = local_a8;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar6 = FUN_1805214c0(local_f8);
        local_138 = *local_150;
        cVar1 = (**(code **)(local_138 + 0x18))(local_150,uVar6,local_160,&local_188,local_a8);
        if (cVar1 != '\0') {
          local_130 = param_1 + 0x4d;
          uVar6 = FUN_1805214c0(local_f8);
          cVar1 = FUN_18051edb0(uVar6,local_130);
          if (cVar1 != '\0') {
            if ((local_178 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) {
              *(short *)(local_178 + 0x20) = local_180;
              local_128 = local_48;
              puVar5 = (undefined *)FUN_1805235c0(local_128,param_1 + 0x4d);
              puVar7 = local_98;
              for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              cVar1 = FUN_180521ed0(local_178 + 0x28,local_98);
              if (cVar1 == '\0') {
LAB_1806344a3:
                FUN_1805e69b0(local_170,2,0x50);
                local_184 = 0;
                FUN_1805c6f90(local_168);
                FUN_180523280(local_f8);
                FUN_180521cb0(local_160);
                return (ulonglong)local_184;
              }
              local_120 = local_38;
              puVar5 = (undefined *)FUN_1805235c0(local_120,local_160);
              puVar7 = local_88;
              for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 1;
              }
              cVar1 = FUN_180521ed0(local_178 + 0x38,local_88);
              if (cVar1 == '\0') goto LAB_1806344a3;
            }
            FUN_1805c6f90(local_168);
            FUN_180523280(local_f8);
            goto LAB_1806344fe;
          }
        }
      }
    }
    FUN_1805e69b0(local_170,2,local_188);
    local_185 = 0;
    FUN_1805c6f90(local_168);
    FUN_180523280(local_f8);
    FUN_180521cb0(local_160);
    local_186 = local_185;
  }
  else {
    local_110 = local_68;
    puVar5 = (undefined *)FUN_1805235c0(local_110,local_178 + 0x28);
    puVar7 = local_c8;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = FUN_180521ed0(param_1 + 0x4d,local_c8);
    if (cVar1 != '\0') {
      local_148 = local_58;
      puVar5 = (undefined *)FUN_1805235c0(local_148,local_178 + 0x38);
      puVar7 = local_b8;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_180521ed0(local_160,local_b8);
      if (cVar1 != '\0') {
LAB_1806344fe:
        local_118 = local_28;
        puVar5 = (undefined *)FUN_1805235c0(local_118,local_160);
        puVar7 = local_78;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        local_183 = FUN_180605400(param_1,local_78);
        FUN_180521cb0(local_160);
        return (ulonglong)local_183;
      }
    }
    FUN_1805e69b0(local_170,2,0x50);
    local_186 = 0;
    FUN_180521cb0(local_160);
  }
  return (ulonglong)local_186;
}


/* address=180634570 name=FUN_180634570 */

undefined8 FUN_180634570(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined local_38 [56];
  
  iVar1 = FUN_180591040(param_2,0x2b);
  if ((((iVar1 != 0) && (iVar1 = FUN_180590d00(param_2,local_38), iVar1 != 0)) &&
      (iVar1 = FUN_180591040(local_38,*(undefined2 *)(*param_1 + 0x10)), iVar1 != 0)) &&
     (iVar1 = FUN_180590820(param_2), iVar1 != 0)) {
    return 1;
  }
  return 0;
}


/* address=1806345e0 name=FUN_1806345e0 */

void FUN_1806345e0(longlong param_1,longlong param_2,undefined2 param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_40;
  undefined local_38 [16];
  undefined local_28 [24];
  
  FUN_18059e730(local_38,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48));
  uVar1 = FUN_1805af6a0(param_1);
  lVar2 = FUN_180521460(param_1 + 8);
  if ((*(byte *)(lVar2 + 0xee) >> 3 & 1) == 0) {
    local_40 = FUN_18055cd20();
  }
  else {
    lVar2 = FUN_180521460(param_1 + 8);
    local_40 = (uint)(*(byte *)(lVar2 + 0xee) >> 4 & 1);
  }
  lVar2 = FUN_180521460(param_1 + 8);
  puVar4 = local_38;
  puVar5 = local_28;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_1805c1250(local_28,local_40 != 0,uVar1,param_3,*(undefined4 *)(lVar2 + 0xe8));
  return;
}


/* address=180634700 name=FUN_180634700 */

undefined FUN_180634700(longlong **param_1,undefined *param_2)

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
     (uVar3 = FUN_180519100(local_1a0), (uVar3 & 0x4000) != 0)) {
    *param_2 = 0;
    return 1;
  }
  uVar5 = FUN_180521460(param_1 + 0xbc);
  FUN_1805b9390(local_1a0,uVar5);
  lVar6 = FUN_180521460(local_1a0 + 0xe);
  if (0x10 < *(byte *)(lVar6 + 0x1c)) {
    FID_conflict__assert
              (L"ssl->session_ctx->num_tickets <= kMaxTickets",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
               ,0x8e);
  }
  local_190 = 0;
  do {
    lVar6 = FUN_180521460(local_1a0 + 0xe);
    if (*(byte *)(lVar6 + 0x1c) <= local_190) {
      *param_2 = 1;
      return 1;
    }
    uVar5 = FUN_180521460(param_1 + 0xbc);
    uVar5 = FUN_1805b8900(local_178,uVar5,2);
    FUN_180521660(local_1b0,uVar5);
    FUN_180521af0(local_178);
    cVar1 = FUN_180521840(local_1b0);
    if (cVar1 == '\0') {
      local_1a8 = 0;
      FUN_180521af0(local_1b0);
      return local_1a8;
    }
    lVar6 = FUN_180521460(local_1b0);
    iVar4 = FUN_18055bbd0(lVar6 + 0x170,4);
    if (iVar4 == 0) {
      local_1a7 = 0;
      FUN_180521af0(local_1b0);
      return local_1a7;
    }
    lVar6 = FUN_180521460(local_1b0);
    local_188 = (byte *)(lVar6 + 0x1a8);
    *local_188 = *local_188 | 8;
    if ((*(byte *)((longlong)local_1a0 + 0xa4) >> 2 & 1) == 0) {
LAB_180634916:
      local_198 = 0;
    }
    else {
      if (local_1a0[0x13] != 0) {
        lVar6 = FUN_180521460(local_1a0 + 1);
        cVar1 = FUN_180521780(lVar6 + 0xb0);
        if (cVar1 != '\0') goto LAB_180634916;
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
      lVar6 = FUN_180521460(local_1b0);
      *(undefined4 *)(lVar6 + 0x174) = (undefined4)local_180;
    }
    if (0xff < local_190) {
      FID_conflict__assert
                (L"i < 256",
                 L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                 ,0xa5);
    }
    local_1b8 = (undefined)local_190;
    FUN_180523250(local_160);
    uVar5 = FUN_1805214c0(local_160);
    local_170 = *local_1a0;
    cVar1 = (**(code **)(local_170 + 0x58))(local_1a0,uVar5,local_118,4);
    if (cVar1 == '\0') {
LAB_180634b17:
      local_1a6 = 0;
      FUN_180523280(local_160);
      FUN_180521af0(local_1b0);
      return local_1a6;
    }
    lVar6 = FUN_180521460(local_1b0);
    iVar4 = FUN_1805910d0(local_118,*(undefined4 *)(lVar6 + 0xb4));
    if (iVar4 == 0) goto LAB_180634b17;
    lVar6 = FUN_180521460(local_1b0);
    iVar4 = FUN_1805910d0(local_118,*(undefined4 *)(lVar6 + 0x170));
    if ((((iVar4 == 0) || (iVar4 = FUN_180590cd0(local_118,local_a8), iVar4 == 0)) ||
        (iVar4 = FUN_180590e20(local_a8,&local_1b8,1), iVar4 == 0)) ||
       (iVar4 = FUN_180590d00(local_118,local_78), iVar4 == 0)) goto LAB_180634b17;
    local_168 = local_b8;
    puVar7 = (undefined *)FUN_1805c3750(local_168,&local_1b8);
    puVar8 = local_128;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar5 = FUN_180521460(local_1b0);
    cVar1 = FUN_180606c10(uVar5,local_128);
    if (cVar1 == '\0') goto LAB_180634b17;
    uVar5 = FUN_180521460(local_1b0);
    cVar1 = FUN_1805b7c70(param_1,local_78,uVar5);
    if (cVar1 == '\0') goto LAB_180634b17;
    iVar4 = FUN_180590d00(local_118,local_e8);
    if (iVar4 == 0) goto LAB_180634b17;
    if (local_1b7 != '\0') {
      iVar4 = FUN_180591040(local_e8,0x2a);
      if ((iVar4 == 0) || (iVar4 = FUN_180590d00(local_e8,local_48), iVar4 == 0)) {
LAB_180634ba7:
        local_1a5 = 0;
        FUN_180523280(local_160);
        FUN_180521af0(local_1b0);
        return local_1a5;
      }
      lVar6 = FUN_180521460(local_1b0);
      iVar4 = FUN_1805910d0(local_48,*(undefined4 *)(lVar6 + 0x174));
      if ((iVar4 == 0) || (iVar4 = FUN_180590820(local_e8), iVar4 == 0)) goto LAB_180634ba7;
    }
    uVar2 = FUN_1805c6b10(param_1,5);
    iVar4 = FUN_180591040(local_e8,uVar2);
    if ((iVar4 == 0) || (iVar4 = FUN_180591040(local_e8,0), iVar4 == 0)) {
      local_1a4 = 0;
      FUN_180523280(local_160);
      FUN_180521af0(local_1b0);
      return local_1a4;
    }
    uVar5 = FUN_1805214c0(local_160);
    cVar1 = FUN_1805c6b80(local_1a0,uVar5);
    if (cVar1 == '\0') {
      local_1a3 = 0;
      FUN_180523280(local_160);
      FUN_180521af0(local_1b0);
      return local_1a3;
    }
    FUN_180523280(local_160);
    FUN_180521af0(local_1b0);
    local_190 = local_190 + 1;
  } while( true );
}


/* address=180634ca0 name=FUN_180634ca0 */

undefined8 FUN_180634ca0(longlong *param_1)

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
  cVar1 = FUN_1805c5080(param_1,local_38,local_a8);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else if ((*(longlong *)(local_b0 + 0x98) == 0) || (CONCAT71(uStack_6f,local_70) == 0)) {
    FUN_180633c50((longlong)param_1 + 0x62b,local_78,CONCAT71(uStack_6f,local_70));
    *(undefined *)((longlong)param_1 + 0x64b) = local_70;
    cVar1 = FUN_1805dcc00(param_1,local_b4);
    if (cVar1 == '\0') {
      FUN_18050f6f0(0x10,0,0x10a,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                    ,0xe6);
      FUN_1805e69b0(local_b0,2,0x28);
      uVar4 = 0;
    }
    else {
      lVar3 = FUN_1806345e0(local_b0,local_a8,local_b4[0]);
      param_1[0xc0] = lVar3;
      if (param_1[0xc0] == 0) {
        FUN_18050f6f0(0x10,0,0xb8,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,0xee);
        FUN_1805e69b0(local_b0,2,0x28);
        uVar4 = 0;
      }
      else {
        local_b8[0] = 0x32;
        cVar1 = FUN_1805db990(param_1,local_b8,local_a8);
        if (cVar1 == '\0') {
          FUN_1805e69b0(local_b0,2,local_b8[0]);
          uVar4 = 0;
        }
        else {
          uVar2 = FUN_1805af6a0(local_b0);
          cVar1 = FUN_180604900(param_1 + 0x33,uVar2,param_1[0xc0]);
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
    FUN_18050f6f0(0x10,0,0x132,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                  ,0xdc);
    FUN_1805e69b0(local_b0,2,0x2f);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=180634ed0 name=FUN_180634ed0 */

void FUN_180634ed0(undefined8 *param_1,undefined *param_2,undefined8 param_3,int *param_4,
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
  
  local_28 = DAT_18093c100 ^ (ulonglong)auStack_148;
  local_c8 = *param_1;
  FUN_180638c00(param_3,0);
  cVar1 = FUN_1805dc470(param_7,local_c0,0x29);
  *param_5 = cVar1;
  if (*param_5 != '\0') {
    cVar1 = FUN_1805dc470(param_7,local_68,0x2d);
    if (cVar1 == '\0') {
      *param_2 = 0x6d;
      local_128 = (undefined *)CONCAT44(local_128._4_4_,0x118);
      FUN_18050f6f0(0x10,0,0xa4,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                   );
    }
    else {
      local_118 = local_c0;
      local_120 = param_7;
      local_128 = param_2;
      cVar1 = FUN_1805db3f0(param_1,local_b0,local_78,&local_100);
      if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0xc4) >> 4 & 1) != 0)) {
        FUN_180523350(local_108);
        local_d0 = local_58;
        puVar2 = (undefined *)FUN_180521710(local_d0);
        puVar5 = local_98;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar2 = (undefined *)FUN_18052d760(local_b0,local_48);
        puVar5 = local_88;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        local_128 = local_98;
        local_f8 = FUN_1805dd990(param_1,local_108,local_fc,local_88);
        local_f4 = local_f8;
        if (local_f8 == 0) {
          FUN_180521460(local_108);
          cVar1 = FUN_1805b83d0(param_1);
          if ((cVar1 == '\0') ||
             (lVar4 = FUN_180521460(local_108), (*(byte *)(lVar4 + 0x1a8) >> 3 & 1) == 0)) {
            local_e8 = 2;
            FUN_180521af0(local_108);
          }
          else {
            lVar4 = FUN_180521460(local_108);
            local_100 = (local_100 - *(int *)(lVar4 + 0x170)) / 1000;
            FUN_18051f8f0(local_c8,local_38);
            lVar4 = FUN_180521460(local_108);
            if (local_38[0] < *(ulonglong *)(lVar4 + 0xc0)) {
              FID_conflict__assert
                        (L"now.tv_sec >= session->time",
                         L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                         ,0x147);
            }
            lVar4 = FUN_180521460(local_108);
            local_d8 = local_38[0] - *(longlong *)(lVar4 + 0xc0);
            if (local_d8 < 0x80000000) {
              *param_4 = local_100 - (int)local_d8;
              uVar3 = FUN_180521460(local_108);
              cVar1 = FUN_180606ec0(param_1,uVar3,param_6,local_78);
              if (cVar1 == '\0') {
                *param_2 = 0x33;
                local_e0 = 3;
                FUN_180521af0(local_108);
              }
              else {
                uVar3 = FUN_1805214c0(local_108);
                FUN_1805238c0(param_3,uVar3);
                local_dc = 0;
                FUN_180521af0(local_108);
              }
            }
            else {
              local_e4 = 2;
              FUN_180521af0(local_108);
            }
          }
        }
        else if (local_f8 == 3) {
          *param_2 = 0x50;
          local_f0 = local_f8;
          FUN_180521af0(local_108);
        }
        else {
          local_ec = local_f8;
          FUN_180521af0(local_108);
        }
      }
    }
  }
  FUN_18050ec30(local_28 ^ (ulonglong)auStack_148);
  return;
}


/* address=180635300 name=FUN_180635300 */

undefined8 FUN_180635300(longlong param_1,longlong param_2)

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
    cVar1 = FUN_180521780(param_1 + 0x1b0);
    if (cVar1 == '\0') {
      lVar3 = FUN_180521770(param_2 + 0xb0);
      lVar4 = FUN_180521770(param_1 + 0x1b0);
      if (lVar3 == lVar4) {
        uVar5 = FUN_180521770(param_1 + 0x1b0);
        uVar6 = FUN_180521460(param_1 + 0x1b0);
        uVar7 = FUN_180521460(param_2 + 0xb0);
        iVar2 = FUN_18058f7e0(uVar7,uVar6,uVar5);
        if (iVar2 == 0) {
          return 1;
        }
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


/* address=1806353f0 name=FUN_1806353f0 */

undefined4 FUN_1806353f0(longlong **param_1)

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
  cVar1 = FUN_1805c5080(param_1,local_148,local_88);
  if (cVar1 == '\0') {
    return 0;
  }
  local_288[0] = 0x32;
  FUN_180523350(local_278);
  local_270 = '\0';
  pcVar8 = &local_270;
  local_26c = FUN_180634ed0(param_1,local_288,local_278,local_280[6] + 0xfc,pcVar8,local_148,
                            local_88);
  uVar9 = (undefined4)((ulonglong)pcVar8 >> 0x20);
  if (local_26c == 0) {
    uVar6 = FUN_180521460(local_278);
    uVar6 = FUN_1805b8900(local_218,uVar6,0);
    FUN_1805238c0(param_1 + 0xbc,uVar6);
    FUN_180521af0(local_218);
    cVar1 = operator==<>(param_1 + 0xbc,0);
    if (cVar1 != '\0') {
      FUN_1805e69b0(local_280,2,0x50);
      local_264 = 0;
      FUN_180521af0(local_278);
      return local_264;
    }
    *(byte *)(local_280[6] + 0xdc) = *(byte *)(local_280[6] + 0xdc) | 0x40;
    *(byte *)((longlong)param_1 + 0x622) = *(byte *)((longlong)param_1 + 0x622) | 0x80;
    local_210 = FUN_180521460(local_280 + 0xe);
    uVar6 = FUN_180521460(param_1 + 0xbc);
    FUN_1805b94d0(local_280,uVar6,*(undefined4 *)(local_210 + 100));
  }
  else {
    if (local_26c == 1) {
      *(undefined4 *)(param_1 + 3) = 1;
      local_25c = 0xb;
      FUN_180521af0(local_278);
      return local_25c;
    }
    if (local_26c == 2) {
      cVar1 = FUN_180521840(local_278);
      if (cVar1 != '\0') {
        FID_conflict__assert
                  (L"!session",
                   L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                   ,0x17c);
      }
      cVar1 = FUN_1805b7860(param_1);
      if (cVar1 == '\0') {
        FUN_1805e69b0(local_280,2,0x50);
        local_268 = 0;
        FUN_180521af0(local_278);
        return local_268;
      }
    }
    else if (local_26c == 3) {
      FUN_1805e69b0(local_280,2,local_288[0]);
      local_260 = 0;
      FUN_180521af0(local_278);
      return local_260;
    }
  }
  cVar1 = FUN_1805dbe00(param_1,local_288,local_88);
  if (cVar1 == '\0') {
    FUN_1805e69b0(local_280,2,local_288[0]);
    local_258 = 0;
    FUN_180521af0(local_278);
    return local_258;
  }
  lVar4 = FUN_180521460(param_1 + 0xbc);
  *(longlong **)(lVar4 + 200) = param_1[0xc0];
  lVar4 = FUN_180521460(param_1 + 0xbc);
  cVar1 = FUN_1805dcc00(param_1,lVar4 + 6);
  if (cVar1 == '\0') {
    FUN_18050f6f0(0x10,0,0x10a,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                  ,CONCAT44(uVar9,0x1a8));
    FUN_1805e69b0(local_280,2,0x28);
    local_254 = 0;
    FUN_180521af0(local_278);
    return local_254;
  }
  puVar5 = local_88;
  cVar1 = FUN_1805db010(param_1,local_26f,0,local_288,puVar5);
  uVar9 = (undefined4)((ulonglong)puVar5 >> 0x20);
  if (cVar1 == '\0') {
    FUN_1805e69b0(local_280,2,local_288[0]);
    local_250 = 0;
    FUN_180521af0(local_278);
    return local_250;
  }
  if ((*(byte *)((longlong)local_280 + 0xa4) >> 2 & 1) == 0) {
    *(undefined4 *)(local_280[6] + 0x100) = 1;
  }
  else if (local_270 == '\0') {
    *(undefined4 *)(local_280[6] + 0x100) = 5;
  }
  else {
    cVar1 = FUN_180521840(local_278);
    if (cVar1 == '\0') {
      *(undefined4 *)(local_280[6] + 0x100) = 6;
    }
    else {
      lVar4 = FUN_180521460(local_278);
      if (*(int *)(lVar4 + 0x174) == 0) {
        *(undefined4 *)(local_280[6] + 0x100) = 7;
      }
      else if ((*(byte *)((longlong)param_1 + 0x621) >> 4 & 1) == 0) {
        *(undefined4 *)(local_280[6] + 0x100) = 4;
      }
      else if ((*(byte *)((longlong)param_1 + 0x623) & 1) == 0) {
        local_208 = local_120;
        lVar4 = FUN_180521460(local_278);
        puVar5 = (undefined *)FUN_1805235c0(local_208,lVar4 + 0x178);
        puVar7 = local_1c8;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar5 = (undefined *)FUN_18052e3b0(local_110,local_280[6] + 0x1e8);
        puVar7 = local_1b8;
        for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        cVar1 = FUN_18052d860(local_1b8,local_1c8);
        if (cVar1 == '\0') {
          lVar4 = FUN_180521460(param_1 + 0xbc);
          local_24c = (uint)(*(byte *)(lVar4 + 0x1a8) >> 6 & 1);
          lVar4 = FUN_180521460(local_278);
          if (local_24c == (*(byte *)(lVar4 + 0x1a8) >> 6 & 1)) {
            local_200 = local_100;
            lVar4 = FUN_180521460(local_278);
            puVar5 = (undefined *)FUN_1805235c0(local_200,lVar4 + 0x188);
            puVar7 = local_1a8;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            lVar4 = FUN_180521460(param_1 + 0xbc);
            puVar5 = (undefined *)FUN_18052e3b0(local_f0,lVar4 + 0x188);
            puVar7 = local_198;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar7 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar7 = puVar7 + 1;
            }
            cVar1 = FUN_18052d860(local_198,local_1a8);
            if (cVar1 == '\0') {
              if ((*(int *)(local_280[6] + 0xfc) < -0x3c) || (0x3c < *(int *)(local_280[6] + 0xfc)))
              {
                *(undefined4 *)(local_280[6] + 0x100) = 0xc;
              }
              else {
                uVar6 = FUN_180521460(local_278);
                cVar1 = FUN_180635300(uVar6,param_1[1]);
                if (cVar1 == '\0') {
                  *(undefined4 *)(local_280[6] + 0x100) = 0xd;
                }
                else if (local_26f[0] == '\0') {
                  *(undefined4 *)(local_280[6] + 0x100) = 8;
                }
                else {
                  lVar4 = FUN_180521460(local_278);
                  if (param_1[0xc0] != *(longlong **)(lVar4 + 200)) {
                    FID_conflict__assert
                              (L"hs->new_cipher == session->cipher",
                               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                               ,0x1d6);
                  }
                  *(undefined4 *)(local_280[6] + 0x100) = 2;
                  *(byte *)(local_280[6] + 0xdd) = *(byte *)(local_280[6] + 0xdd) | 8;
                }
              }
              goto LAB_180635be2;
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
LAB_180635be2:
  local_1f8 = local_e0;
  puVar5 = (undefined *)FUN_1805235c0(local_1f8,local_280[6] + 0x1e8);
  puVar7 = local_188;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  lVar4 = FUN_180521460(param_1 + 0xbc);
  cVar1 = FUN_180521ed0(lVar4 + 0x178,local_188);
  if (cVar1 == '\0') {
    FUN_1805e69b0(local_280,2,0x50);
    local_248 = 0;
    FUN_180521af0(local_278);
  }
  else {
    if (((*(byte *)(local_280[6] + 0xdd) >> 3 & 1) != 0) &&
       (lVar4 = FUN_180521460(param_1 + 0xbc), (*(byte *)(lVar4 + 0x1a8) >> 6 & 1) != 0)) {
      local_1f0 = local_d0;
      lVar4 = FUN_180521460(local_278);
      puVar5 = (undefined *)FUN_1805235c0(local_1f0,lVar4 + 0x198);
      puVar7 = local_178;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar4 = FUN_180521460(param_1 + 0xbc);
      cVar1 = FUN_180521ed0(lVar4 + 0x198,local_178);
      if (cVar1 == '\0') {
        FUN_1805e69b0(local_280,2,0x50);
        local_244 = 0;
        FUN_180521af0(local_278);
        return local_244;
      }
    }
    if (((*(byte *)((longlong)local_280 + 0xa4) >> 2 & 1) != 0) && (local_280[0x13] != 0)) {
      local_1e8 = local_c0;
      puVar5 = (undefined *)FUN_1805235c0(local_1e8,param_1[1] + 0x16);
      puVar7 = local_168;
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      lVar4 = FUN_180521460(param_1 + 0xbc);
      cVar1 = FUN_180521ed0(lVar4 + 0x1b0,local_168);
      if (cVar1 == '\0') {
        FUN_1805e69b0(local_280,2,0x50);
        local_240 = 0;
        FUN_180521af0(local_278);
        return local_240;
      }
    }
    lVar4 = FUN_180521460(local_280 + 0xd);
    if (*(longlong *)(lVar4 + 0x120) != 0) {
      lVar4 = FUN_180521460(local_280 + 0xd);
      iVar3 = (**(code **)(lVar4 + 0x120))(local_88);
      if (iVar3 == 0) {
        FUN_18050f6f0(0x10,0,0x85,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,CONCAT44(uVar9,0x1fb));
        FUN_1805e69b0(local_280,2,0x50);
        local_23c = 0;
        FUN_180521af0(local_278);
        return local_23c;
      }
    }
    uVar2 = FUN_1805af6a0(local_280);
    uVar6 = FUN_1805bcf00(uVar2,param_1[0xc0]);
    local_1d8 = FUN_180532b10(uVar6);
    if ((*(byte *)(local_280[6] + 0xdc) >> 6 & 1) == 0) {
      local_220 = (undefined *)FUN_1805217d0(local_a0,&DAT_1807b3700,local_1d8);
    }
    else {
      lVar4 = FUN_180521460(param_1 + 0xbc);
      local_1e0 = (ulonglong)*(byte *)(lVar4 + 10);
      lVar4 = FUN_180521460(param_1 + 0xbc);
      local_220 = (undefined *)FUN_1805217d0(local_b0,lVar4 + 0xb,local_1e0);
    }
    puVar5 = local_220;
    puVar7 = local_158;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = FUN_1806051f0(param_1,local_158);
    if ((cVar1 == '\0') || (cVar1 = FUN_1805c6c40(param_1,local_148), cVar1 == '\0')) {
      local_238 = 0;
      FUN_180521af0(local_278);
      local_248 = local_238;
    }
    else {
      if ((*(byte *)(local_280[6] + 0xdd) >> 3 & 1) == 0) {
        if ((*(byte *)((longlong)param_1 + 0x621) >> 4 & 1) != 0) {
          *(byte *)(local_280[6] + 0xdc) = *(byte *)(local_280[6] + 0xdc) | 1;
        }
      }
      else {
        cVar1 = FUN_180605d70(param_1);
        if (cVar1 == '\0') {
          local_234 = 0;
          FUN_180521af0(local_278);
          return local_234;
        }
      }
      if (local_26f[0] == '\0') {
        (**(code **)(*local_280 + 0x20))(local_280);
        cVar1 = FUN_1806049e0(param_1 + 0x33);
        if (cVar1 == '\0') {
          local_230 = 0;
          FUN_180521af0(local_278);
          local_248 = local_230;
        }
        else {
          *(undefined4 *)(param_1 + 3) = 2;
          local_22c = 1;
          FUN_180521af0(local_278);
          local_248 = local_22c;
        }
      }
      else {
        cVar1 = FUN_180633ff0(param_1,local_88);
        if (cVar1 == '\0') {
          local_228 = 0;
          FUN_180521af0(local_278);
          local_248 = local_228;
        }
        else {
          (**(code **)(*local_280 + 0x20))(local_280);
          FUN_180521d10(param_1 + 0x49);
          *(undefined4 *)(param_1 + 3) = 4;
          local_224 = 1;
          FUN_180521af0(local_278);
          local_248 = local_224;
        }
      }
    }
  }
  return local_248;
}


/* address=180636200 name=FUN_180636200 */

undefined4 FUN_180636200(longlong **param_1)

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
  FUN_180523250(local_130);
  uVar5 = FUN_1805214c0(local_130);
  local_1a0 = *plVar1;
  cVar2 = (**(code **)(local_1a0 + 0x58))(plVar1,uVar5,local_100,2);
  if ((((cVar2 != '\0') && (iVar4 = FUN_180591040(local_100,0x303), iVar4 != 0)) &&
      (iVar4 = FUN_180590e20(local_100,&DAT_180798508,0x20), iVar4 != 0)) &&
     ((iVar4 = FUN_180590cd0(local_100,local_48), iVar4 != 0 &&
      (iVar4 = FUN_180590e20(local_48,(longlong)param_1 + 0x62b,
                             *(undefined *)((longlong)param_1 + 0x64b)), iVar4 != 0)))) {
    uVar3 = FUN_1805bbb50(param_1[0xc0]);
    iVar4 = FUN_180591040(local_100,uVar3);
    if ((iVar4 != 0) &&
       ((iVar4 = FUN_180591010(local_100,0), iVar4 != 0 &&
        (cVar2 = FUN_1805dcc00(param_1,local_1d0), cVar2 != '\0')))) {
      iVar4 = FUN_180590d00(local_100,local_160);
      if (iVar4 != 0) {
        iVar4 = FUN_180591040(local_160,0x2b);
        if ((iVar4 != 0) && (iVar4 = FUN_180591040(local_160,2), iVar4 != 0)) {
          iVar4 = FUN_180591040(local_160,*(undefined2 *)(plVar1 + 2));
          if (iVar4 != 0) {
            iVar4 = FUN_180591040(local_160,0x33);
            if ((iVar4 != 0) && (iVar4 = FUN_180591040(local_160,2), iVar4 != 0)) {
              iVar4 = FUN_180591040(local_160,local_1d0[0]);
              if (iVar4 != 0) {
                if ((*(byte *)(param_1 + 0xc4) & 1) != 0) {
                  iVar4 = FUN_180591040(local_160,0xfe0d);
                  if (((iVar4 == 0) || (iVar4 = FUN_180591040(local_160,8), iVar4 == 0)) ||
                     (iVar4 = FUN_180590e80(local_160,8), iVar4 == 0)) {
                    local_1b4 = 0;
                    FUN_180523280(local_130);
                    return local_1b4;
                  }
                }
                FUN_180521c30(local_1c8);
                uVar5 = FUN_1805214c0(local_130);
                local_198 = *plVar1;
                cVar2 = (**(code **)(local_198 + 0x60))(plVar1,uVar5,local_1c8);
                if (cVar2 == '\0') {
                  local_1b0 = 0;
                  FUN_180521cb0(local_1c8);
                  FUN_180523280(local_130);
                  return local_1b0;
                }
                if ((*(byte *)(param_1 + 0xc4) & 1) != 0) {
                  local_180 = FUN_180521770(local_1c8);
                  local_180 = local_180 + -8;
                  local_190 = local_98;
                  local_188 = local_88;
                  puVar6 = (undefined *)FUN_1805235c0(local_190,local_1c8);
                  puVar8 = local_c8;
                  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *puVar8 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  local_178 = param_1 + 0x33;
                  puVar6 = (undefined *)FUN_1805232a0(local_188,plVar1[6] + 0x30);
                  puVar8 = local_b8;
                  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *puVar8 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  uVar5 = FUN_18052e3b0(local_78,local_1c8);
                  puVar6 = (undefined *)FUN_18052d990(uVar5,local_68,8);
                  puVar8 = local_a8;
                  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *puVar8 = *puVar6;
                    puVar6 = puVar6 + 1;
                    puVar8 = puVar8 + 1;
                  }
                  cVar2 = FUN_1806070a0(param_1,local_a8,local_b8,local_178,1,local_c8,local_180);
                  if (cVar2 == '\0') {
                    local_1ac = 0;
                    FUN_180521cb0(local_1c8);
                    FUN_180523280(local_130);
                    return local_1ac;
                  }
                }
                local_170 = local_58;
                uVar5 = FUN_1805214c0(local_1c8);
                uVar5 = _Ptr_base<>(local_170,uVar5);
                local_168 = *plVar1;
                cVar2 = (**(code **)(local_168 + 0x68))(plVar1,uVar5);
                if ((cVar2 != '\0') &&
                   (cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1), cVar2 != '\0')) {
                  *(byte *)(plVar1[6] + 0xdd) = *(byte *)(plVar1[6] + 0xdd) | 0x40;
                  *(undefined4 *)(param_1 + 3) = 3;
                  local_1a4 = 4;
                  FUN_180521cb0(local_1c8);
                  FUN_180523280(local_130);
                  return local_1a4;
                }
                local_1a8 = 0;
                FUN_180521cb0(local_1c8);
                FUN_180523280(local_130);
                return local_1a8;
              }
            }
          }
        }
      }
    }
  }
  local_1b8 = 0;
  FUN_180523280(local_130);
  return local_1b8;
}


/* address=180636790 name=FUN_180636790 */

undefined8 FUN_180636790(longlong **param_1)

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
  cVar1 = FUN_1805c53f0(local_180,local_148,1);
  if (cVar1 == '\0') {
    return 0;
  }
  puVar4 = (undefined *)FUN_18052d760(local_140,local_b8);
  puVar7 = local_118;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  cVar1 = FUN_1805dc100(local_180,local_88,local_118);
  if (cVar1 == '\0') {
    FUN_18050f6f0(0x10,0,0x83,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                  ,CONCAT44(uVar8,0x26e));
    FUN_1805e69b0(local_180,2,0x32);
    return 0;
  }
  if (*(int *)(local_180[6] + 0xd8) != 1) {
LAB_180636b9d:
    if ((*(byte *)(local_180[6] + 0xdc) >> 6 & 1) != 0) {
      cVar1 = FUN_1805dc470(local_88,local_d8,0x29);
      if (cVar1 == '\0') {
        FUN_18050f6f0(0x10,0,0x12f,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,CONCAT44(uVar8,0x2b4));
        FUN_1805e69b0(local_180,2,0x2f);
        return 0;
      }
      local_187[0] = 0x32;
      puVar4 = local_187;
      cVar1 = FUN_1805db3f0(param_1,local_98,local_c8,local_150,puVar4,local_88,local_d8);
      uVar8 = (undefined4)((ulonglong)puVar4 >> 0x20);
      if (cVar1 == '\0') {
        FUN_1805e69b0(local_180,2,local_187[0]);
        return 0;
      }
      uVar5 = FUN_180521460(param_1 + 0xbc);
      cVar1 = FUN_180606ec0(param_1,uVar5,local_148,local_c8);
      if (cVar1 == '\0') {
        FUN_1805e69b0(local_180,2,0x33);
        return 0;
      }
    }
    cVar1 = FUN_180633ff0(param_1,local_88);
    if (cVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      cVar1 = FUN_1805c6c40(param_1,local_148);
      if (cVar1 == '\0') {
        uVar5 = 0;
      }
      else {
        cVar1 = (**(code **)(*local_180 + 0x28))(local_180);
        if (cVar1 == '\0') {
          (**(code **)(*local_180 + 0x20))(local_180);
          FUN_180521d10(param_1 + 0x49);
          *(undefined4 *)(param_1 + 3) = 4;
          uVar5 = 1;
        }
        else {
          FUN_1805e69b0(local_180,2,10);
          FUN_18050f6f0(0x10,0,0xff,
                        "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                        ,CONCAT44(uVar8,0x2d7));
          uVar5 = 0;
        }
      }
    }
    return uVar5;
  }
  cVar1 = FUN_1805dc470(local_88,local_160,0xfe0d);
  if (cVar1 == '\0') {
    FUN_18050f6f0(0x10,0,0xa4,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                  ,CONCAT44(uVar8,0x279));
    FUN_1805e69b0(local_180,2,0x6d);
    return 0;
  }
  iVar3 = FUN_18059e9c0(local_160,&local_178);
  if ((((iVar3 == 0) || (local_178 != '\0')) ||
      (iVar3 = FUN_18059ea10(local_160,local_174), iVar3 == 0)) ||
     (((iVar3 = FUN_18059ea10(local_160,local_170), iVar3 == 0 ||
       (iVar3 = FUN_18059e9c0(local_160,&local_177), iVar3 == 0)) ||
      ((iVar3 = FUN_18059ed70(local_160,local_108), iVar3 == 0 ||
       ((iVar3 = FUN_18059ed70(local_160,local_f8), iVar3 == 0 ||
        (lVar6 = FUN_18059e7c0(local_160), lVar6 != 0)))))))) {
    FUN_18050f6f0(0x10,0,0x89,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                  ,CONCAT44(uVar8,0x288));
    FUN_1805e69b0(local_180,2,0x32);
    return 0;
  }
  local_16c = (uint)local_174[0];
  uVar5 = FUN_1805214c0(param_1 + 0x5a);
  uVar5 = FUN_18052fcf0(uVar5);
  uVar2 = FUN_18052eba0(uVar5);
  if (local_16c == uVar2) {
    local_168 = (uint)local_170[0];
    uVar5 = FUN_1805214c0(param_1 + 0x5a);
    uVar5 = FUN_18052fcd0(uVar5);
    uVar2 = FUN_18052ec10(uVar5);
    if (((local_168 == uVar2) && (local_177 == *(char *)((longlong)param_1 + 0x62a))) &&
       (lVar6 = FUN_18059e7c0(local_108), lVar6 == 0)) {
      local_188 = 0x32;
      puVar4 = (undefined *)FUN_18052d760(local_f8,local_a8);
      puVar7 = local_e8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4 = local_88;
      cVar1 = FUN_18052af10(param_1,&local_188,local_176,param_1 + 0x49,puVar4,local_e8);
      uVar8 = (undefined4)((ulonglong)puVar4 >> 0x20);
      if (cVar1 == '\0') {
        FUN_18050f6f0(0x10,0,0x8a,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,CONCAT44(uVar8,0x29d));
        FUN_1805e69b0(local_180,2,local_188);
        return 0;
      }
      cVar1 = FUN_1805c5080(param_1,local_148,local_88);
      if (cVar1 == '\0') {
        FUN_18050f6f0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,CONCAT44(uVar8,0x2a4));
        return 0;
      }
      goto LAB_180636b9d;
    }
  }
  FUN_18050f6f0(0x10,0,0x89,
                "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                ,CONCAT44(uVar8,0x291));
  FUN_1805e69b0(local_180,2,0x2f);
  return 0;
}


/* address=180636dd0 name=FUN_180636dd0 */

undefined4 FUN_180636dd0(longlong **param_1)

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
  FUN_1805232a0(local_318,plVar1[6] + 0x10);
  local_358 = FUN_180521460(param_1 + 0xc3);
  if ((local_358 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) == 0)) {
    local_268 = FUN_180521770(local_358 + 0x10);
    lVar5 = FUN_180521770(local_318);
    if (local_268 == lVar5) {
      local_260 = FUN_180521770(local_318);
      local_258 = FUN_180521460(local_358 + 0x10);
      uVar6 = FUN_180521460(local_318);
      FUN_180633c50(uVar6,local_258,local_260);
      goto LAB_180636f9a;
    }
  }
  local_2d0 = FUN_180521770(local_318);
  uVar6 = FUN_180521460(local_318);
  FUN_18055bbd0(uVar6,local_2d0);
  if ((local_358 != 0) && ((*(byte *)((longlong)param_1 + 0x622) >> 4 & 1) != 0)) {
    local_2c8 = local_e8;
    puVar7 = (undefined *)FUN_1805235c0(local_2c8,local_318);
    puVar8 = local_1b8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar2 = FUN_180521ed0(local_358 + 0x10,local_1b8);
    if (cVar2 == '\0') {
      return 0;
    }
  }
LAB_180636f9a:
  FUN_180521c30(local_368);
  FUN_180523250(local_308);
  uVar6 = FUN_1805214c0(local_308);
  local_2c0 = *plVar1;
  cVar2 = (**(code **)(local_2c0 + 0x58))(plVar1,uVar6,local_250,2);
  if ((((cVar2 != '\0') && (iVar4 = FUN_180591040(local_250,0x303), iVar4 != 0)) &&
      (iVar4 = FUN_180590e20(local_250,plVar1[6] + 0x10,0x20), iVar4 != 0)) &&
     ((iVar4 = FUN_180590cd0(local_250,local_d8), iVar4 != 0 &&
      (iVar4 = FUN_180590e20(local_d8,(longlong)param_1 + 0x62b,
                             *(undefined *)((longlong)param_1 + 0x64b)), iVar4 != 0)))) {
    uVar3 = FUN_1805bbb50(param_1[0xc0]);
    iVar4 = FUN_180591040(local_250,uVar3);
    if ((((iVar4 != 0) &&
         ((iVar4 = FUN_180591010(local_250,0), iVar4 != 0 &&
          (iVar4 = FUN_180590d00(local_250,local_178), iVar4 != 0)))) &&
        (cVar2 = FUN_1805db690(param_1,local_178), cVar2 != '\0')) &&
       ((cVar2 = FUN_1805db250(param_1,local_178), cVar2 != '\0' &&
        (iVar4 = FUN_180634570(param_1,local_178), iVar4 != 0)))) {
      uVar6 = FUN_1805214c0(local_308);
      local_2b8 = *plVar1;
      cVar2 = (**(code **)(local_2b8 + 0x60))(plVar1,uVar6,local_368);
      if (cVar2 != '\0') {
        if ((*(int *)(plVar1[6] + 0xd8) == 1) && ((*(byte *)(param_1 + 0xc4) & 1) == 0)) {
          FID_conflict__assert
                    (L"ssl->s3->ech_status != ssl_ech_accepted || hs->ech_is_inner",
                     L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                     ,0x306);
        }
        if ((*(byte *)(param_1 + 0xc4) & 1) != 0) {
          local_2d8 = FUN_180607050(plVar1);
          FUN_18052d990(local_318,local_220,8);
          local_2b0 = local_148;
          local_2a8 = local_138;
          puVar7 = (undefined *)FUN_1805235c0(local_2b0,local_368);
          puVar8 = local_208;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          local_2a0 = param_1 + 0x33;
          puVar7 = (undefined *)FUN_1805232a0(local_2a8,plVar1[6] + 0x30);
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
          cVar2 = FUN_1806070a0(param_1,local_1e8,local_1f8,local_2a0,
                                in_stack_fffffffffffffc68 & 0xffffffffffffff00,local_208,local_2d8);
          if (cVar2 == '\0') {
            local_34c = 0;
            FUN_180523280(local_308);
            FUN_180521cb0(local_368);
            return local_34c;
          }
          uVar6 = FUN_18052e3b0(local_128,local_368);
          FUN_180521ff0(uVar6,local_1d8,local_2d8,8);
          local_298 = FUN_180521460(local_220);
          uVar6 = FUN_180521460(local_1d8);
          FUN_180633c50(uVar6,local_298,8);
        }
        local_290 = local_118;
        uVar6 = FUN_1805214c0(local_368);
        uVar6 = _Ptr_base<>(local_290,uVar6);
        local_288 = *plVar1;
        cVar2 = (**(code **)(local_288 + 0x68))(plVar1,uVar6);
        if (cVar2 == '\0') {
          local_348 = 0;
          FUN_180523280(local_308);
          FUN_180521cb0(local_368);
          return local_348;
        }
        FUN_180521d10(param_1 + 0x4d);
        if (((*(byte *)(plVar1[6] + 0xdd) >> 6 & 1) == 0) &&
           (cVar2 = (**(code **)(*plVar1 + 0x70))(plVar1), cVar2 == '\0')) {
          local_344 = 0;
          FUN_180523280(local_308);
          FUN_180521cb0(local_368);
          return local_344;
        }
        cVar2 = FUN_180605ee0(param_1);
        if (cVar2 != '\0') {
          local_280 = local_108;
          uVar6 = FUN_1805da4d0(param_1,local_f8);
          puVar7 = (undefined *)FUN_1805235c0(local_280,uVar6);
          puVar8 = local_1c8;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          uVar6 = FUN_180521460(param_1 + 0xbc);
          puVar7 = local_1c8;
          cVar2 = FUN_1806055f0(plVar1,2,1,uVar6,puVar7);
          uVar9 = (undefined4)((ulonglong)puVar7 >> 0x20);
          if (cVar2 != '\0') {
            uVar6 = FUN_1805214c0(local_308);
            local_278 = *plVar1;
            cVar2 = (**(code **)(local_278 + 0x58))(plVar1,uVar6,local_250,8);
            if ((cVar2 != '\0') && (cVar2 = FUN_1805dd6d0(param_1,local_250), cVar2 != '\0')) {
              uVar6 = FUN_1805214c0(local_308);
              cVar2 = FUN_1805c6b80(plVar1,uVar6);
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
                  uVar6 = FUN_1805214c0(local_308);
                  local_270 = *plVar1;
                  cVar2 = (**(code **)(local_270 + 0x58))(plVar1,uVar6,local_250,0xd);
                  if ((((cVar2 == '\0') || (iVar4 = FUN_180591010(local_250,0), iVar4 == 0)) ||
                      ((iVar4 = FUN_180590d00(local_250,local_1a8), iVar4 == 0 ||
                       ((iVar4 = FUN_180591040(local_1a8,0xd), iVar4 == 0 ||
                        (iVar4 = FUN_180590d00(local_1a8,local_a8), iVar4 == 0)))))) ||
                     ((iVar4 = FUN_180590d00(local_a8,local_78), iVar4 == 0 ||
                      (cVar2 = FUN_1805dc950(param_1,local_78), cVar2 == '\0')))) {
                    local_320 = 0;
                    FUN_180523280(local_308);
                    FUN_180521cb0(local_368);
                    return local_320;
                  }
                  cVar2 = FUN_1805b1070(param_1[1]);
                  if ((cVar2 != '\0') &&
                     ((((iVar4 = FUN_180591040(local_1a8,0x2f), iVar4 == 0 ||
                        (iVar4 = FUN_180590d00(local_1a8,local_48), iVar4 == 0)) ||
                       (cVar2 = FUN_1805b1100(param_1,local_48), cVar2 == '\0')) ||
                      (iVar4 = FUN_180590820(local_1a8), iVar4 == 0)))) {
                    local_338 = 0;
                    FUN_180523280(local_308);
                    FUN_180521cb0(local_368);
                    return local_338;
                  }
                  uVar6 = FUN_1805214c0(local_308);
                  cVar2 = FUN_1805c6b80(plVar1,uVar6);
                  if (cVar2 == '\0') {
                    local_334 = 0;
                    FUN_180523280(local_308);
                    FUN_180521cb0(local_368);
                    return local_334;
                  }
                }
                if ((*(byte *)(plVar1[6] + 0xdc) >> 6 & 1) != 0) {
                  *(undefined4 *)(param_1 + 3) = 6;
                  local_324 = 1;
                  FUN_180523280(local_308);
                  FUN_180521cb0(local_368);
                  return local_324;
                }
                cVar2 = FUN_1805b0410(param_1);
                if (cVar2 == '\0') {
                  FUN_18050f6f0(0x10,0,0xae,
                                "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                                ,CONCAT44(uVar9,0x360));
                  local_330 = 0;
                  FUN_180523280(local_308);
                  FUN_180521cb0(local_368);
                  return local_330;
                }
                cVar2 = FUN_1805d5020(param_1);
                if (cVar2 == '\0') {
                  local_32c = 0;
                  FUN_180523280(local_308);
                  FUN_180521cb0(local_368);
                  return local_32c;
                }
                *(undefined4 *)(param_1 + 3) = 5;
                local_328 = 1;
                FUN_180523280(local_308);
                FUN_180521cb0(local_368);
                return local_328;
              }
            }
            local_33c = 0;
            FUN_180523280(local_308);
            FUN_180521cb0(local_368);
            return local_33c;
          }
        }
        local_340 = 0;
        FUN_180523280(local_308);
        FUN_180521cb0(local_368);
        return local_340;
      }
    }
  }
  local_350 = 0;
  FUN_180523280(local_308);
  FUN_180521cb0(local_368);
  return local_350;
}


/* address=180637a50 name=FUN_180637a50 */

undefined8 FUN_180637a50(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1805d5e30(param_1);
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
    FID_conflict__assert
              (L"0",
               L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
               ,0x37e);
    uVar2 = 0;
  }
  return uVar2;
}


/* address=180637ae0 name=FUN_180637ae0 */

undefined4 FUN_180637ae0(undefined8 *param_1)

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
    cVar2 = FUN_1805d6180(param_1);
    if (cVar2 != '\0') {
      uVar4 = FUN_180604cc0(param_1 + 0x33);
      puVar5 = (undefined *)FUN_1805217d0(local_48,&DAT_1807b3700,uVar4);
      puVar7 = local_68;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar2 = FUN_180605400(param_1,local_68);
      if ((cVar2 != '\0') && (cVar2 = FUN_180606300(param_1), cVar2 != '\0')) {
        uVar4 = FUN_1805da550(param_1,local_28);
        puVar5 = (undefined *)FUN_1805235c0(local_38,uVar4);
        puVar7 = local_58;
        for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar4 = FUN_180521460(param_1 + 0xbc);
        cVar2 = FUN_1806055f0(uVar1,3,1,uVar4,local_58);
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


/* address=180637ca0 name=FUN_180637ca0 */

undefined8 FUN_180637ca0(longlong *param_1)

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
LAB_180637f83:
    *(undefined4 *)(param_1 + 3) = 8;
    uVar4 = 4;
  }
  else {
    if (*(longlong *)(local_f0 + 0x98) == 0) {
      local_e8 = local_98;
      puVar3 = (undefined *)FUN_1805afac0(local_e8,&DAT_1807b51f0);
      puVar7 = local_c8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_180604d20(param_1 + 0x33,local_c8);
      if (cVar1 == '\0') {
        FUN_18050f6f0(0x10,0,0x44,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,0x3a4);
        return 0;
      }
    }
    uVar4 = FUN_1805d66a0(param_1,local_88);
    uVar4 = FUN_180521460(uVar4);
    cVar1 = FUN_180606a80(param_1,uVar4,&local_e0,0);
    if (cVar1 == '\0') {
      return 0;
    }
    uVar4 = FUN_1805d66a0(param_1,local_78);
    lVar6 = FUN_180521770(uVar4);
    if (local_e0 != lVar6) {
      FUN_18050f6f0(0x10,0,0x44,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                    ,0x3af);
      return 0;
    }
    iVar2 = FUN_180517d10(*param_1);
    if (iVar2 != 0) {
      FID_conflict__assert
                (L"!SSL_is_dtls(hs->ssl)",
                 L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                 ,0x3b7);
    }
    uVar4 = FUN_1805d66a0(param_1,local_68);
    uVar5 = FUN_180521770(uVar4);
    if (0xff < uVar5) {
      FID_conflict__assert
                (L"hs->expected_client_finished().size() <= 0xff",
                 L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                 ,0x3b8);
    }
    local_f8 = 0x14;
    local_f7 = 0;
    local_f6 = 0;
    uVar4 = FUN_1805d66a0(param_1,local_58);
    local_f5 = FUN_180521770(uVar4);
    local_d8 = local_48;
    puVar3 = (undefined *)FUN_1805afac0(local_d8,&local_f8);
    puVar7 = local_b8;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    cVar1 = FUN_180604d20(param_1 + 0x33,local_b8);
    if (cVar1 != '\0') {
      local_d0 = local_38;
      uVar4 = FUN_1805d66a0(param_1,local_28);
      puVar3 = (undefined *)FUN_1805235c0(local_d0,uVar4);
      puVar7 = local_a8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      cVar1 = FUN_180604d20(param_1 + 0x33,local_a8);
      if (((cVar1 != '\0') && (cVar1 = FUN_180606610(param_1), cVar1 != '\0')) &&
         (cVar1 = FUN_180634700(param_1,local_f4), cVar1 != '\0')) goto LAB_180637f83;
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* address=180637fb0 name=FUN_180637fb0 */

undefined4 FUN_180637fb0(longlong *param_1)

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
    uVar3 = FUN_1805cd220(param_1,local_48);
    puVar4 = (undefined *)FUN_1805235c0(local_58,uVar3);
    puVar6 = local_78;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = FUN_180521460(param_1 + 0xbc);
    cVar2 = FUN_1806055f0(lVar1,1,0,uVar3,local_78);
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
    uVar3 = FUN_1805da490(param_1,local_28);
    puVar4 = (undefined *)FUN_1805235c0(local_38,uVar3);
    puVar6 = local_68;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = FUN_180521460(param_1 + 0xbc);
    cVar2 = FUN_1806055f0(lVar1,2,0,uVar3,local_68);
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


/* address=180638200 name=FUN_180638200 */

undefined8 FUN_180638200(longlong **param_1)

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
      cVar2 = FUN_1805c53f0(plVar1,local_48,5);
      if (cVar2 == '\0') {
        return 0;
      }
      lVar3 = FUN_18059e7c0(local_40);
      if (lVar3 != 0) {
        FUN_1805e69b0(plVar1,2,0x32);
        FUN_18050f6f0(0x10,0,0x89,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                      ,CONCAT44(uVar7,0x3f8));
        return 0;
      }
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    uVar4 = FUN_1805da490(param_1,local_58);
    puVar5 = (undefined *)FUN_1805235c0(local_68,uVar4);
    puVar6 = local_78;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar4 = FUN_180521460(param_1 + 0xbc);
    cVar2 = FUN_1806055f0(plVar1,2,0,uVar4,local_78);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 3) = 10;
  return 1;
}


/* address=1806383a0 name=FUN_1806383a0 */

undefined8 FUN_1806383a0(longlong **param_1)

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
  lVar3 = FUN_180521460(param_1 + 0xbc);
  if (((*(byte *)(lVar3 + 0x1a8) >> 6 & 1) != 0) && ((*(byte *)(local_e0[6] + 0xdd) >> 3 & 1) == 0))
  {
    cVar1 = (**(code **)(*local_e0 + 0x18))(local_e0,local_68);
    if (cVar1 == '\0') {
      return 3;
    }
    cVar1 = FUN_1805c53f0(local_e0,local_68,8);
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
    iVar2 = FUN_18059ed70(local_c8,local_88);
    if ((iVar2 == 0) || (lVar3 = FUN_18059e7c0(local_c8), lVar3 != 0)) {
      FUN_18050f6f0(0x10,0,0x89,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                    ,0x419);
      FUN_1805e69b0(local_e0,2,0x32);
      return 0;
    }
    FUN_1805cd2e0(local_b8,0x4469,1);
    local_e8[0] = 0x32;
    local_d8 = local_b8;
    puVar4 = (undefined *)FUN_180521740(local_40,&local_d8,local_d0);
    puVar5 = local_98;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar1 = FUN_1805c5af0(local_88,local_e8,local_98,0);
    if (cVar1 == '\0') {
      FUN_1805e69b0(local_e0,2,local_e8[0]);
      return 0;
    }
    if (local_b5 == '\0') {
      FUN_18050f6f0(0x10,0,0xa4,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\tls13_server.cc"
                    ,0x427);
      FUN_1805e69b0(local_e0,2,0x6d);
      return 0;
    }
    puVar4 = (undefined *)FUN_18052d760(local_b0,local_30);
    puVar5 = local_78;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    lVar3 = FUN_180521460(param_1 + 0xbc);
    cVar1 = FUN_180521ed0(lVar3 + 0x198,local_78);
    if ((cVar1 == '\0') || (cVar1 = FUN_1805c6c40(param_1,local_68), cVar1 == '\0')) {
      FUN_1805e69b0(local_e0,2,0x50);
      return 0;
    }
    (**(code **)(*local_e0 + 0x20))(local_e0);
  }
  *(undefined4 *)(param_1 + 3) = 0xb;
  return 1;
}


/* address=180638680 name=FUN_180638680 */

undefined8 FUN_180638680(longlong **param_1)

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
      lVar4 = FUN_180521460(param_1 + 0xbc);
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
      cVar3 = FUN_1805c53f0(plVar2,local_38,0xb);
      if (((cVar3 == '\0') ||
          (cVar3 = FUN_1805d3ad0(param_1,local_38,(bVar1 & 2) == 0), cVar3 == '\0')) ||
         (cVar3 = FUN_1805c6c40(param_1,local_38), cVar3 == '\0')) {
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


/* address=1806387d0 name=FUN_1806387d0 */

undefined8 FUN_1806387d0(longlong **param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined local_38 [56];
  
  plVar1 = *param_1;
  lVar4 = FUN_180521460(param_1 + 0xbc);
  uVar5 = FUN_180521460(lVar4 + 0x88);
  lVar4 = FUN_180521890(uVar5);
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
      iVar3 = FUN_1805c5da0(param_1);
      if (iVar3 == 1) {
        uVar5 = 0;
      }
      else if (iVar3 == 2) {
        *(undefined4 *)(param_1 + 3) = 0xc;
        uVar5 = 0x10;
      }
      else {
        cVar2 = FUN_1805c53f0(plVar1,local_38,0xf);
        if (((cVar2 != '\0') && (cVar2 = FUN_1805d4b40(param_1,local_38), cVar2 != '\0')) &&
           (cVar2 = FUN_1805c6c40(param_1,local_38), cVar2 != '\0')) {
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


/* address=180638910 name=FUN_180638910 */

undefined8 FUN_180638910(longlong **param_1)

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
      cVar2 = FUN_1805c53f0(plVar1,local_30,0xcb);
      if (((cVar2 != '\0') && (cVar2 = FUN_1805de090(param_1,local_30), cVar2 != '\0')) &&
         (cVar2 = FUN_1805c6c40(param_1,local_30), cVar2 != '\0')) {
        (**(code **)(*plVar1 + 0x20))(plVar1);
        *(undefined4 *)(param_1 + 3) = 0xe;
        return 1;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=1806389f0 name=FUN_1806389f0 */

undefined8 FUN_1806389f0(longlong **param_1)

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
  cVar2 = FUN_1805c53f0(plVar1,local_48,0x14);
  if ((cVar2 != '\0') &&
     (cVar2 = FUN_1805d4e30(param_1,local_48,*(byte *)(plVar1[6] + 0xdd) >> 3 & 1), cVar2 != '\0'))
  {
    uVar3 = FUN_1805da510(param_1,local_58);
    puVar4 = (undefined *)FUN_1805235c0(local_68,uVar3);
    puVar6 = local_78;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = FUN_180521460(param_1 + 0xbc);
    cVar2 = FUN_1806055f0(plVar1,3,0,uVar3,local_78);
    if (cVar2 != '\0') {
      if ((*(byte *)(plVar1[6] + 0xdd) >> 3 & 1) == 0) {
        cVar2 = FUN_1805c6c40(param_1,local_48);
        if ((cVar2 == '\0') || (cVar2 = FUN_180606610(param_1), cVar2 == '\0')) {
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


/* address=180638ba0 name=FUN_180638ba0 */

undefined8 FUN_180638ba0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  char local_18 [24];
  
  cVar1 = FUN_180634700(param_1,local_18);
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


/* address=180638c00 name=FUN_180638c00 */

undefined8 FUN_180638c00(undefined8 param_1)

{
  FUN_180521b30(param_1,0);
  return param_1;
}


/* address=180638c30 name=FUN_180638c30 */

void FUN_180638c30(longlong param_1,undefined8 param_2)

{
  FUN_180638f20(param_2,param_1 + 0x1b0);
  return;
}


/* address=180638c70 name=FUN_180638c70 */

undefined4 FUN_180638c70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = FUN_1805232d0(param_1 + 8,0);
  if (cVar1 != '\0') {
    lVar3 = FUN_180521460(param_1 + 8);
    iVar2 = FUN_180638f20(param_2,lVar3 + 0xd0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


/* address=180638cf0 name=FUN_180638cf0 */

undefined8 FUN_180638cf0(longlong param_1)

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
      lVar2 = FUN_180521460(param_1 + 8);
      cVar1 = FUN_1805232d0(lVar2 + 0xd0,0);
      if (cVar1 == '\0') {
        lVar2 = FUN_180521460(param_1 + 0x68);
        uVar3 = FUN_180521460(lVar2 + 0x1b0);
      }
      else {
        lVar2 = FUN_180521460(param_1 + 8);
        uVar3 = FUN_180521460(lVar2 + 0xd0);
      }
    }
    else {
      FID_conflict__assert
                (L"0",
                 L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\d1_srtp.cc"
                 ,0xd3);
      uVar3 = 0;
    }
  }
  return uVar3;
}


/* address=180638e90 name=FUN_180638e90 */

undefined8 FUN_180638e90(char *param_1,undefined8 *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  undefined **local_18;
  
  local_18 = &PTR_s_SRTP_AES128_CM_SHA1_80_1807b5200;
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


/* address=180638f20 name=FUN_180638f20 */

undefined4 FUN_180638f20(char *param_1,undefined8 param_2)

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
  
  uVar3 = FUN_180521810();
  FUN_180521630(local_48,uVar3);
  cVar1 = operator==<>(local_48,0);
  local_40 = param_1;
  if (cVar1 == '\0') {
    while( true ) {
      local_38 = FUN_18066ac00(local_40,0x3a);
      if (local_38 == 0) {
        local_20 = strlen(local_40);
      }
      else {
        local_20 = local_38 - (longlong)local_40;
      }
      iVar2 = FUN_180638e90(local_40,local_18,local_20);
      if (iVar2 == 0) {
        FUN_18050f6f0(0x10,0,0xd4,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\d1_srtp.cc"
                      ,0xb3);
        local_2c = 0;
        FUN_180522c50(local_48);
        return local_2c;
      }
      uVar3 = FUN_180521460(local_48);
      lVar4 = FUN_1805bea50(uVar3,local_18[0]);
      if (lVar4 == 0) {
        local_28 = 0;
        FUN_180522c50(local_48);
        return local_28;
      }
      if (local_38 == 0) break;
      local_40 = (char *)(local_38 + 1);
    }
    uVar3 = FUN_1805214c0(local_48);
    FUN_1805bec60(param_2,uVar3);
    local_24 = 1;
    FUN_180522c50(local_48);
    local_30 = local_24;
  }
  else {
    FUN_18050f6f0(0x10,0,0xd3,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\d1_srtp.cc"
                  ,0xa7);
    local_30 = 0;
    FUN_180522c50(local_48);
  }
  return local_30;
}


/* address=1806390c0 name=FUN_1806390c0 */

undefined4 FUN_1806390c0(ulonglong param_1,longlong param_2,ulonglong param_3,longlong param_4)

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


/* address=180639140 name=FUN_180639140 */

ulonglong FUN_180639140(ulonglong param_1)

{
  return param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 | (param_1 & 0xff0000000000) >> 0x18
         | (param_1 & 0xff00000000) >> 8 | (param_1 & 0xff000000) << 8 |
         (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 | param_1 << 0x38;
}


/* address=180639160 name=FUN_180639160 */

undefined8 FUN_180639160(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=1806391b0 name=FUN_1806391b0 */

void FUN_1806391b0(undefined8 param_1)

{
  undefined8 local_18 [3];
  
  FUN_180639160(local_18,param_1,8);
  FUN_180639140(local_18[0]);
  return;
}


/* address=1806391f0 name=FUN_1806391f0 */

void FUN_1806391f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  local_res10[0] = FUN_180639140(param_2);
  FUN_180639160(param_1,local_res10,8);
  return;
}


/* address=180639230 name=FUN_180639230 */

void FUN_180639230(longlong param_1,char *param_2,undefined8 param_3,longlong *param_4,
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
  
  local_20 = DAT_18093c100 ^ (ulonglong)auStack_188;
  *param_4 = 0;
  if ((*(int *)(*(longlong *)(param_1 + 0x30) + 0xac) != 1) &&
     (cVar1 = FUN_180521780(param_6), cVar1 == '\0')) {
    local_110 = local_68;
    puVar4 = (undefined *)FUN_1805235c0(local_110,param_6);
    puVar8 = local_b8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_1805235c0(local_120,local_b8);
    iVar3 = FUN_18059e9c0(local_120,&local_148);
    if ((((iVar3 == 0) || (iVar3 = FUN_18059ea10(local_120,local_144), iVar3 == 0)) ||
        (iVar3 = FUN_18059ece0(local_120,local_28,8), iVar3 == 0)) ||
       ((iVar3 = FUN_18059ed70(local_120,local_e0), iVar3 == 0 ||
        (uVar5 = FUN_18059e7c0(local_e0), 0x4140 < uVar5)))) {
      lVar7 = FUN_180521770(param_6);
      *param_4 = lVar7;
    }
    else {
      uVar6 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
      cVar1 = FUN_1805c0ee0(uVar6);
      if (cVar1 == '\0') {
        local_128 = (uint)local_144[0];
        uVar6 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
        uVar2 = FUN_1805bfbd0(uVar6);
        local_147 = local_128 == uVar2;
        local_138 = (uint)(byte)local_147;
      }
      else {
        local_147 = (int)(uint)local_144[0] >> 8 == 0xfe;
        local_13c = (uint)(byte)local_147;
      }
      if ((bool)local_147 == false) {
        lVar7 = FUN_180521770(param_6);
        *param_4 = lVar7;
      }
      else {
        uVar6 = FUN_180521ff0(param_6,local_58,0,0xd);
        FUN_1805235c0(local_d0,uVar6);
        puVar4 = local_d0;
        puVar8 = local_a8;
        for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_18051eec0(param_1,0,0x100,local_a8);
        local_130 = FUN_1806391b0(local_28);
        local_140 = (short)((ulonglong)local_130 >> 0x30);
        if ((local_140 == *(short *)(*(longlong *)(param_1 + 0x38) + 2)) &&
           (cVar1 = FUN_180639cf0(*(longlong *)(param_1 + 0x38) + 8,local_130), cVar1 == '\0')) {
          local_100 = FUN_18059e7c0(local_e0);
          uVar6 = FUN_18059e7a0(local_e0);
          puVar4 = (undefined *)FUN_1805217d0(local_48,uVar6,local_100);
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
          uVar6 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x108);
          local_158 = local_98;
          local_160 = local_88;
          local_168 = local_130;
          cVar1 = FUN_1805bfe80(uVar6,param_3,local_148,local_144[0]);
          if (cVar1 == '\0') {
            FUN_18050f390();
            local_f8 = FUN_180521770(param_6);
            lVar7 = FUN_18059e7c0(local_120);
            *param_4 = local_f8 - lVar7;
          }
          else {
            local_f0 = FUN_180521770(param_6);
            lVar7 = FUN_18059e7c0(local_120);
            *param_4 = local_f0 - lVar7;
            uVar5 = FUN_180521770(param_3);
            if (uVar5 < 0x4001) {
              FUN_180639d90(*(longlong *)(param_1 + 0x38) + 8,local_130);
              if (local_148 == '\x15') {
                local_e8 = local_38;
                puVar4 = (undefined *)FUN_1805235c0(local_e8,param_3);
                puVar8 = local_78;
                for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar8 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar8 = puVar8 + 1;
                }
                FUN_180631a50(param_1,param_5,local_78);
              }
              else {
                *(undefined *)(*(longlong *)(param_1 + 0x30) + 0xd3) = 0;
                *param_2 = local_148;
              }
            }
            else {
              local_168 = CONCAT44(local_168._4_4_,0xf0);
              FUN_18050f6f0(0x10,0,0x88,
                            "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                           );
              *param_5 = 0x16;
            }
          }
        }
        else {
          local_108 = FUN_180521770(param_6);
          lVar7 = FUN_18059e7c0(local_120);
          *param_4 = local_108 - lVar7;
        }
      }
    }
  }
  FUN_18050ec30(local_20 ^ (ulonglong)auStack_188);
  return;
}


/* address=1806397c0 name=FUN_1806397c0 */

longlong FUN_1806397c0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180639e70(param_1,param_2);
  lVar2 = FUN_1805bfcb0(uVar1);
  return lVar2 + 0xd;
}


/* address=180639800 name=FUN_180639800 */

longlong FUN_180639800(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180639e70(param_1,param_2);
  lVar2 = FUN_1805bfc70(uVar1);
  return lVar2 + 0xd;
}


/* address=180639840 name=FUN_180639840 */

undefined8
FUN_180639840(longlong param_1,undefined *param_2,longlong *param_3,ulonglong param_4,
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
  
  local_68 = FUN_180639800(param_1,param_8);
  iVar3 = FUN_1806390c0(param_6,param_7,param_2,param_4);
  if ((iVar3 == 0) || ((local_68 <= param_4 && (param_2 + local_68 == param_6)))) {
    local_84 = *(ushort *)(*(longlong *)(param_1 + 0x38) + 4);
    local_70 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
    local_80 = (ulonglong *)(*(longlong *)(param_1 + 0x30) + 8);
    if (param_8 == 0) {
      if (*(short *)(*(longlong *)(param_1 + 0x38) + 4) == 0) {
        FID_conflict__assert
                  (L"ssl->d1->w_epoch >= 1",
                   L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                   ,0x127);
      }
      local_84 = *(short *)(*(longlong *)(param_1 + 0x38) + 4) - 1;
      local_70 = FUN_180521460(*(longlong *)(param_1 + 0x38) + 0x28);
      local_80 = (ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x20);
    }
    if (param_4 < 0xd) {
      FUN_18050f6f0(0x10,0,0x79,
                    "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                    ,0x12e);
      uVar4 = 0;
    }
    else {
      *param_2 = param_5;
      uVar4 = FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
      uVar2 = FUN_1805bfbd0(uVar4);
      param_2[1] = (char)((ushort)uVar2 >> 8);
      param_2[2] = (char)uVar2;
      local_40 = 0xffffffffffff;
      if (*local_80 + 1 < 0x1000000000000) {
        local_60 = (ulonglong)local_84 << 0x30 | *local_80;
        FUN_1806391f0(param_2 + 3,local_60);
        cVar1 = FUN_1805bfdb0(local_70,&local_78,param_7,0);
        if (cVar1 == '\0') {
          FUN_18050f6f0(0x10,0,200,
                        "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                        ,0x144);
          uVar4 = 0;
        }
        else {
          param_2[0xb] = (char)((ulonglong)local_78 >> 8);
          param_2[0xc] = (char)local_78;
          FUN_1805217d0(local_50,param_2,0xd);
          puVar6 = local_50;
          puVar7 = local_38;
          for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          cVar1 = FUN_1805c0400(local_70,param_2 + 0xd,&local_58,param_4 - 0xd,param_5,uVar2,
                                local_60,local_38,param_6,param_7);
          if (cVar1 == '\0') {
            uVar4 = 0;
          }
          else {
            if (local_78 != local_58) {
              FID_conflict__assert
                        (L"ciphertext_len == len_copy",
                         L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                         ,0x151);
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
            FUN_18051eec0(param_1,1,0x100,local_28);
            uVar4 = 1;
          }
        }
      }
      else {
        FUN_18050f6f0(0x10,0,0x45,
                      "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                      ,0x13b);
        uVar4 = 0;
      }
    }
  }
  else {
    FUN_18050f6f0(0x10,0,0xbd,
                  "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                  ,0x11e);
    uVar4 = 0;
  }
  return uVar4;
}


/* address=180639cf0 name=FUN_180639cf0 */

ulonglong FUN_180639cf0(ulonglong *param_1,ulonglong param_2)

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


/* address=180639d90 name=FUN_180639d90 */

void FUN_180639d90(ulonglong *param_1,ulonglong param_2)

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


/* address=180639e70 name=FUN_180639e70 */

void FUN_180639e70(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(short *)(*(longlong *)(param_1 + 0x38) + 4) == 0) {
      FID_conflict__assert
                (L"ssl->d1->w_epoch >= 1",
                 L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\dtls_record.cc"
                 ,0x107);
    }
    FUN_180521460(*(longlong *)(param_1 + 0x38) + 0x28);
  }
  else {
    FUN_180521460(*(longlong *)(param_1 + 0x30) + 0x110);
  }
  return;
}


/* address=180639f10 name=FUN_180639f10 */

void FUN_180639f10(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined auStack_58 [32];
  ulonglong local_38;
  uint local_30;
  ulonglong local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_18093c100 ^ (ulonglong)auStack_58;
  iVar1 = FUN_180517d10(param_1);
  if ((iVar1 != 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) != 0 ||
      (*(int *)(*(longlong *)(param_1 + 0x38) + 0x128) != 0)))) {
    FUN_18051f8f0(param_1,&local_28);
    if ((*(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x120) < local_28) ||
       ((*(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x120) == local_28 &&
        (*(uint *)(*(longlong *)(param_1 + 0x38) + 0x128) <= local_20)))) {
      FUN_18063a1d0(param_2,0,8);
    }
    else {
      FUN_18063a180(&local_38,*(longlong *)(param_1 + 0x38) + 0x120,0x10);
      local_38 = local_38 - local_28;
      if (local_30 < local_20) {
        local_30 = (local_30 + 1000000) - local_20;
        local_38 = local_38 - 1;
      }
      else {
        local_30 = local_30 - local_20;
      }
      if ((local_38 == 0) && (local_30 < 15000)) {
        FUN_18063a1d0(&local_38,0,0x10);
      }
      if (local_38 < 0x80000000) {
        *param_2 = (undefined4)local_38;
      }
      else {
        FID_conflict__assert
                  (L"0",
                   L"D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\d1_lib.cc"
                   ,0xee);
        *param_2 = 0x7fffffff;
      }
      param_2[1] = local_30;
    }
  }
  FUN_18050ec30(local_18 ^ (ulonglong)auStack_58);
  return;
}


/* address=18063a180 name=FUN_18063a180 */

undefined8 FUN_18063a180(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18063a1d0 name=FUN_18063a1d0 */

undefined8 FUN_18063a1d0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_1806924e0(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=18063a210 name=FUN_18063a210 */

byte * FUN_18063a210(byte *param_1)

{
  *param_1 = *param_1 & 0xfe;
  *param_1 = *param_1 & 0xfd;
  *param_1 = *param_1 & 0xfb;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_180521c30(param_1 + 8);
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_180523350(param_1 + 0x28);
  FUN_1805c6d00(param_1 + 0x30,8,7,FUN_180523350);
  FUN_1805c6d00(param_1 + 0x68,0x18,7,&LAB_18063a830);
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


/* address=18063a370 name=FUN_18063a370 */

void FUN_18063a370(longlong param_1)

{
  FUN_1805c6d60(param_1 + 0x68,0x18,7,FUN_18052db90);
  FUN_1805c6d60(param_1 + 0x30,8,7,FUN_1805ea7f0);
  FUN_1805c0fa0(param_1 + 0x28);
  return;
}


/* address=18063a3e0 name=FUN_18063a3e0 */

ulonglong FUN_18063a3e0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *(int *)(*(longlong *)(param_1 + 0x38) + 0x11c) =
       *(int *)(*(longlong *)(param_1 + 0x38) + 0x11c) + 1;
  if (2 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x11c)) {
    uVar1 = FUN_180519100(param_1);
    if ((uVar1 & 0x1000) == 0) {
      uVar3 = FUN_180521460(param_1 + 0x20);
      uVar1 = FUN_18058ca80(uVar3,0x2f,0,0);
      if ((-1 < (int)uVar1) && ((int)uVar1 < 0x40000001)) {
        uVar2 = FUN_1805e8570();
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
    uVar4 = FUN_18050f6f0(0x10,0,0xc6,
                          "D:\\a\\1\\s\\target\\x86_64-pc-windows-msvc\\release\\build\\boring-sys-be6914020d051c40\\out\\boringssl\\src\\ssl\\d1_lib.cc"
                          ,0xb7);
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  return uVar4;
}


/* address=18063a4d0 name=FUN_18063a4d0 */

void FUN_18063a4d0(longlong param_1)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120) == 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x38) + 0x128) == 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x130) = *(undefined4 *)(param_1 + 0x50);
  }
  FUN_18051f8f0(param_1);
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


/* address=18063a630 name=FUN_18063a630 */

void FUN_18063a630(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x11c) = 0;
  FUN_18063a1d0(*(longlong *)(param_1 + 0x38) + 0x120,0,0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x130) = *(undefined4 *)(param_1 + 0x50);
  return;
}


/* address=18063a690 name=FUN_18063a690 */

undefined4 FUN_18063a690(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14;
  
  iVar1 = FUN_180639f10(param_1,&local_18);
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


/* address=18063a7e0 name=FUN_18063a7e0 */

void FUN_18063a7e0(longlong param_1)

{
  *(int *)(*(longlong *)(param_1 + 0x38) + 0x130) =
       *(int *)(*(longlong *)(param_1 + 0x38) + 0x130) << 1;
  if (60000 < *(uint *)(*(longlong *)(param_1 + 0x38) + 0x130)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x130) = 60000;
  }
  return;
}


/* address=18063a870 name=FUN_18063a870 */

undefined8 FUN_18063a870(undefined8 param_1,uint param_2)

{
  FUN_18063a370(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180681d50(param_1,0x138);
  }
  return param_1;
}


/* address=18063a8b0 name=FUN_18063a8b0 */

void FUN_18063a8b0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_1805214c0(param_1);
    FUN_18063a9b0(uVar1,*param_1);
  }
  return;
}


/* address=18063a8f0 name=FUN_18063a8f0 */

undefined8 FUN_18063a8f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_18 [24];
  
  uVar1 = FUN_18063a960();
  uVar1 = FUN_180521630(local_18,uVar1);
  FUN_180521660(param_1,uVar1);
  FUN_18063a8b0(local_18);
  return param_1;
}


/* address=18063a930 name=FUN_18063a930 */

void FUN_18063a930(longlong param_1)

{
  if (param_1 != 0) {
    FUN_18063a870(param_1,0);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=18063a960 name=FUN_18063a960 */

undefined8 FUN_18063a960(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18058f4e0(0x138);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1805213c0(0x138,lVar1);
    uVar2 = FUN_18063a210(uVar2);
  }
  return uVar2;
}


/* address=18063a9b0 name=FUN_18063a9b0 */

void FUN_18063a9b0(undefined8 param_1,undefined8 param_2)

{
  FUN_18063a9d0(param_2);
  return;
}


/* address=18063a9d0 name=FUN_18063a9d0 */

void FUN_18063a9d0(undefined8 param_1)

{
  FUN_18063a930(param_1);
  return;
}


/* address=18063a9f0 name=thunk_FUN_18063aa00 */

undefined (*) [32]
thunk_FUN_18063aa00(undefined (*param_1) [32],undefined (*param_2) [32],byte param_3)

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
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_1809683dc & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_1809683dc & 4) != 0)) {
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
      if (uVar3 != 0) goto LAB_18063aaa1;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined (*) [32])(puVar2 + (uVar5 & 0xffffffffffffffe0)));
    uVar4 = (uint)uVar5 & 0x1c;
    if ((uVar5 & 0x1c) != 0) {
      auVar9 = vmovdqu_avx(*(undefined (*) [32])(&DAT_1807b89d0 + -(ulonglong)uVar4));
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
LAB_18063aaa1:
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


/* address=18063aa00 name=FUN_18063aa00 */

undefined (*) [32] FUN_18063aa00(undefined (*param_1) [32],undefined (*param_2) [32],byte param_3)

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
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_1809683dc & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_1809683dc & 4) != 0)) {
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
      if (uVar3 != 0) goto LAB_18063aaa1;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined (*) [32])(puVar2 + (uVar5 & 0xffffffffffffffe0)));
    uVar4 = (uint)uVar5 & 0x1c;
    if ((uVar5 & 0x1c) != 0) {
      auVar9 = vmovdqu_avx(*(undefined (*) [32])(&DAT_1807b89d0 + -(ulonglong)uVar4));
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
LAB_18063aaa1:
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


/* address=18063ab00 name=FUN_18063ab00 */

void FUN_18063ab00(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18063ab20 name=FUN_18063ab20 */

void FUN_18063ab20(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18063abd0 name=FUN_18063abd0 */

void FUN_18063abd0(undefined8 param_1)

{
  FUN_180514e40(param_1);
  return;
}


/* address=18063abf0 name=FUN_18063abf0 */

void FUN_18063abf0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=18063ac10 name=FUN_18063ac10 */

void FUN_18063ac10(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=18063ac40 name=FUN_18063ac40 */

void FUN_18063ac40(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_18063ab50,param_2);
  return;
}


/* address=18063ac70 name=FUN_18063ac70 */

void FUN_18063ac70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180515500(param_1,param_2,param_3,&LAB_18063ab80);
  return;
}


/* address=18063acb0 name=FUN_18063acb0 */

void FUN_18063acb0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=18063ace0 name=FUN_18063ace0 */

void FUN_18063ace0(undefined8 param_1)

{
  FUN_1805159a0(param_1,&LAB_18063ab80);
  return;
}


/* address=18063ad10 name=FUN_18063ad10 */

bool FUN_18063ad10(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_18063aec0(param_2);
  if (iVar1 != -1) {
    *param_1 = param_2;
  }
  else {
    FUN_18050f6f0(0xb,0,0x71,s_D__a_1_s_target_x86_64_pc_window_180986190,0xa3);
  }
  return iVar1 != -1;
}


/* address=18063ad70 name=FUN_18063ad70 */

ulonglong FUN_18063ad70(undefined8 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 == -1) {
    uVar3 = 1;
  }
  else if (param_2 == 0) {
    uVar1 = FUN_18063b370(0x38e,param_1,0);
    if (uVar1 == 3) {
      uVar3 = FUN_18063b310(0,param_1,0);
    }
    else {
      uVar3 = (ulonglong)uVar1;
    }
  }
  else {
    iVar2 = FUN_18063aec0(param_2);
    if (iVar2 == -1) {
      uVar3 = FUN_18063b370(param_2,param_1,param_3);
    }
    else {
      lVar4 = FUN_18063ae60(iVar2);
      uVar3 = (**(code **)(lVar4 + 8))(lVar4,param_1,param_3);
    }
  }
  return uVar3;
}


/* address=18063ae60 name=FUN_18063ae60 */

undefined * FUN_18063ae60(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    puVar1 = (undefined *)0x0;
  }
  else if (param_1 < 8) {
    puVar1 = &DAT_180986050 + (longlong)param_1 * 0x28;
  }
  else {
    puVar1 = (undefined *)FUN_18063ac10(DAT_180992c88,(longlong)param_1 + -8);
  }
  return puVar1;
}


/* address=18063aec0 name=FUN_18063aec0 */

ulonglong FUN_18063aec0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_38;
  int local_30 [12];
  
  if ((param_1 < 1) || (8 < param_1)) {
    if (DAT_180992c88 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      local_30[0] = param_1;
      iVar1 = FUN_18063ac70(DAT_180992c88,&local_38,local_30);
      if (iVar1 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = local_38 + 8;
      }
    }
  }
  else {
    uVar2 = (ulonglong)(param_1 - 1);
  }
  return uVar2;
}


/* address=18063b1e0 name=FUN_18063b1e0 */

void FUN_18063b1e0(longlong param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 4) & 1) != 0)) {
    if ((*(uint *)(param_1 + 4) & 2) != 0) {
      FUN_18058f610(*(undefined8 *)(param_1 + 0x10));
    }
    FUN_18058f610(param_1);
  }
  return;
}


/* address=18063b310 name=FUN_18063b310 */

undefined8 FUN_18063b310(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_180616b20(param_2);
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  else if ((*(uint *)(param_2 + 0x2c) & 0x2000) == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* address=18063b370 name=FUN_18063b370 */

undefined8 FUN_18063b370(int param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong local_28;
  
  plVar1 = *(longlong **)(param_2 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[1] != 0) {
      for (local_28 = 0; uVar3 = FUN_18063ab00(plVar1[1]), local_28 < uVar3; local_28 = local_28 + 1
          ) {
        uVar4 = FUN_18063ab20(plVar1[1],local_28);
        iVar2 = FUN_1805a8b30(uVar4);
        if (iVar2 == param_1) {
          return 2;
        }
      }
    }
    if (*plVar1 != 0) {
      for (local_28 = 0; uVar3 = FUN_18063ab00(*plVar1), local_28 < uVar3; local_28 = local_28 + 1)
      {
        uVar4 = FUN_18063ab20(*plVar1,local_28);
        iVar2 = FUN_1805a8b30(uVar4);
        if (iVar2 == param_1) {
          return 1;
        }
      }
    }
  }
  return 3;
}


/* address=18063b480 name=FUN_18063b480 */

void FUN_18063b480(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_28;
  uint local_24;
  int local_1c;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar4 = *param_1 ^ uVar1;
  uVar5 = param_1[1] ^ uVar1 << 4;
  uVar1 = (uVar4 << 0x12 ^ uVar4) & 0xcccc0000;
  uVar1 = uVar4 ^ uVar1 ^ uVar1 >> 0x12;
  uVar4 = (uVar5 << 0x12 ^ uVar5) & 0xcccc0000;
  uVar4 = uVar5 ^ uVar4 ^ uVar4 >> 0x12;
  uVar5 = (uVar4 >> 1 ^ uVar1) & 0x55555555;
  uVar1 = uVar1 ^ uVar5;
  uVar4 = uVar4 ^ uVar5 << 1;
  uVar5 = (uVar1 >> 8 ^ uVar4) & 0xff00ff;
  uVar4 = uVar4 ^ uVar5;
  uVar1 = uVar1 ^ uVar5 << 8;
  uVar5 = (uVar4 >> 1 ^ uVar1) & 0x55555555;
  uVar1 = uVar1 ^ uVar5;
  uVar4 = uVar4 ^ uVar5 << 1;
  local_28 = uVar1 & 0xfffffff;
  local_24 = (uVar4 & 0xff) << 0x10 | uVar4 & 0xff00 | (uVar4 & 0xff0000) >> 0x10 |
             (uVar1 & 0xf0000000) >> 4;
  for (local_1c = 0; local_1c < 0x10; local_1c = local_1c + 1) {
    if (*(int *)(&DAT_1807b99f0 + (longlong)local_1c * 4) == 0) {
      local_28 = local_28 >> 1 | local_28 << 0x1b;
      local_24 = local_24 >> 1 | local_24 << 0x1b;
    }
    else {
      local_28 = local_28 >> 2 | local_28 << 0x1a;
      local_24 = local_24 >> 2 | local_24 << 0x1a;
    }
    uVar1 = local_28 & 0xfffffff;
    uVar4 = local_24 & 0xfffffff;
    uVar5 = *(uint *)(&DAT_1807b89f0 + (ulonglong)(local_28 & 0x3f) * 4) |
            *(uint *)(&DAT_1807b8af0 + (ulonglong)(uVar1 >> 6 & 3 | uVar1 >> 7 & 0x3c) * 4) |
            *(uint *)(&DAT_1807b8bf0 + (ulonglong)(uVar1 >> 0xd & 0xf | uVar1 >> 0xe & 0x30) * 4) |
            *(uint *)(&DAT_1807b8cf0 +
                     (ulonglong)(uVar1 >> 0x14 & 1 | uVar1 >> 0x15 & 6 | uVar1 >> 0x16 & 0x38) * 4);
    uVar2 = *(uint *)(&DAT_1807b8df0 + (ulonglong)(local_24 & 0x3f) * 4) |
            *(uint *)(&DAT_1807b8ef0 + (ulonglong)(uVar4 >> 7 & 3 | uVar4 >> 8 & 0x3c) * 4) |
            *(uint *)(&DAT_1807b8ff0 + (ulonglong)(uVar4 >> 0xf & 0x3f) * 4) |
            *(uint *)(&DAT_1807b90f0 + (ulonglong)(uVar4 >> 0x15 & 0xf | uVar4 >> 0x16 & 0x30) * 4);
    uVar3 = FUN_18063e9f0(uVar2 << 0x10 | uVar5 & 0xffff,0x1e);
    *(undefined4 *)(param_2 + (longlong)local_1c * 8) = uVar3;
    uVar3 = FUN_18063e9f0(uVar5 >> 0x10 | uVar2 & 0xffff0000,0x1a);
    *(undefined4 *)(param_2 + (longlong)local_1c * 8 + 4) = uVar3;
    local_28 = uVar1;
    local_24 = uVar4;
  }
  return;
}


/* address=18063ba70 name=FUN_18063ba70 */

void FUN_18063ba70(undefined4 *param_1,undefined *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = *param_1;
  uStack_c = param_1[1];
  FUN_18063ea10(&local_10,param_3,param_4,param_4,uStack_c,param_1 + 2);
  *param_2 = (char)local_10;
  param_2[1] = (char)((uint)local_10 >> 8);
  param_2[2] = (char)((uint)local_10 >> 0x10);
  param_2[3] = (char)((uint)local_10 >> 0x18);
  param_2[4] = (char)uStack_c;
  param_2[5] = (char)((uint)uStack_c >> 8);
  param_2[6] = (char)((uint)uStack_c >> 0x10);
  param_2[7] = (char)((uint)uStack_c >> 0x18);
  return;
}


/* address=18063bd50 name=FUN_18063bd50 */

void FUN_18063bd50(uint *param_1,undefined *param_2,ulonglong param_3,undefined8 param_4,
                  uint *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *local_res8;
  undefined *local_res10;
  ulonglong local_res18;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  longlong local_20;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_6 == 0) {
    local_30 = *param_5;
    local_2c = param_5[1];
    for (; 7 < local_res18; local_res18 = local_res18 - 8) {
      uVar1 = *local_res8;
      uVar2 = local_res8[1];
      local_res8 = local_res8 + 2;
      local_28 = uVar1;
      uStack_24 = uVar2;
      FUN_18063ea10(&local_28,param_4,0);
      local_28 = local_28 ^ local_30;
      uStack_24 = uStack_24 ^ local_2c;
      *local_res10 = (char)local_28;
      local_res10[1] = (char)(local_28 >> 8);
      local_res10[2] = (char)(local_28 >> 0x10);
      local_res10[3] = (char)(local_28 >> 0x18);
      local_res10[4] = (char)uStack_24;
      local_res10[5] = (char)(uStack_24 >> 8);
      local_res10[6] = (char)(uStack_24 >> 0x10);
      local_res10[7] = (char)(uStack_24 >> 0x18);
      local_res10 = local_res10 + 8;
      local_30 = uVar1;
      local_2c = uVar2;
    }
    if (local_res18 != 0) {
      uVar1 = *local_res8;
      uVar2 = local_res8[1];
      local_28 = uVar1;
      uStack_24 = uVar2;
      FUN_18063ea10(&local_28,param_4,0);
      local_28 = local_28 ^ local_30;
      uStack_24 = uStack_24 ^ local_2c;
      local_res10 = local_res10 + local_res18;
      local_30 = uVar1;
      local_2c = uVar2;
      switch(local_res18) {
      case 8:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(uStack_24 >> 0x18);
      case 7:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(uStack_24 >> 0x10);
      case 6:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(uStack_24 >> 8);
      case 5:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)uStack_24;
      case 4:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(local_28 >> 0x18);
      case 3:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(local_28 >> 0x10);
      case 2:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(local_28 >> 8);
      case 1:
        local_res10[-1] = (char)local_28;
      }
    }
    *(char *)param_5 = (char)local_30;
    *(char *)((longlong)param_5 + 1) = (char)(local_30 >> 8);
    *(char *)((longlong)param_5 + 2) = (char)(local_30 >> 0x10);
    *(char *)((longlong)param_5 + 3) = (char)(local_30 >> 0x18);
    *(char *)(param_5 + 1) = (char)local_2c;
    *(char *)((longlong)param_5 + 5) = (char)(local_2c >> 8);
    *(char *)((longlong)param_5 + 6) = (char)(local_2c >> 0x10);
    *(char *)((longlong)param_5 + 7) = (char)(local_2c >> 0x18);
  }
  else {
    local_34 = *param_5;
    local_38 = param_5[1];
    for (; 7 < local_res18; local_res18 = local_res18 - 8) {
      local_28 = *local_res8;
      puVar3 = local_res8 + 1;
      local_res8 = local_res8 + 2;
      local_28 = local_28 ^ local_34;
      uStack_24 = *puVar3 ^ local_38;
      FUN_18063ea10(&local_28,param_4,1);
      local_34 = local_28;
      *local_res10 = (char)local_28;
      local_res10[1] = (char)(local_28 >> 8);
      local_res10[2] = (char)(local_28 >> 0x10);
      local_res10[3] = (char)(local_28 >> 0x18);
      local_38 = uStack_24;
      local_res10[4] = (char)uStack_24;
      local_res10[5] = (char)(uStack_24 >> 8);
      local_res10[6] = (char)(uStack_24 >> 0x10);
      local_res10[7] = (char)(uStack_24 >> 0x18);
      local_res10 = local_res10 + 8;
    }
    if (local_res18 != 0) {
      local_res8 = (uint *)((longlong)local_res8 + local_res18);
      local_40 = 0;
      local_3c = 0;
      local_20 = local_res18 - 1;
      switch(local_20) {
      case 7:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_40 = (uint)*(byte *)local_res8 << 0x18;
      case 6:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_40 = local_40 | (uint)*(byte *)local_res8 << 0x10;
      case 5:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_40 = local_40 | (uint)*(byte *)local_res8 << 8;
      case 4:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_40 = local_40 | *(byte *)local_res8;
      case 3:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_3c = (uint)*(byte *)local_res8 << 0x18;
      case 2:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_3c = local_3c | (uint)*(byte *)local_res8 << 0x10;
      case 1:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_3c = local_3c | (uint)*(byte *)local_res8 << 8;
      case 0:
        local_3c = local_3c | *(byte *)((longlong)local_res8 + -1);
      default:
        local_28 = local_3c ^ local_34;
        uStack_24 = local_40 ^ local_38;
        FUN_18063ea10(&local_28,param_4,1);
        local_34 = local_28;
        *local_res10 = (char)local_28;
        local_res10[1] = (char)(local_28 >> 8);
        local_res10[2] = (char)(local_28 >> 0x10);
        local_res10[3] = (char)(local_28 >> 0x18);
        local_38 = uStack_24;
        local_res10[4] = (char)uStack_24;
        local_res10[5] = (char)(uStack_24 >> 8);
        local_res10[6] = (char)(uStack_24 >> 0x10);
        local_res10[7] = (char)(uStack_24 >> 0x18);
      }
    }
    *(char *)param_5 = (char)local_34;
    *(char *)((longlong)param_5 + 1) = (char)(local_34 >> 8);
    *(char *)((longlong)param_5 + 2) = (char)(local_34 >> 0x10);
    *(char *)((longlong)param_5 + 3) = (char)(local_34 >> 0x18);
    *(char *)(param_5 + 1) = (char)local_38;
    *(char *)((longlong)param_5 + 5) = (char)(local_38 >> 8);
    *(char *)((longlong)param_5 + 6) = (char)(local_38 >> 0x10);
    *(char *)((longlong)param_5 + 7) = (char)(local_38 >> 0x18);
  }
  return;
}


/* address=18063ce20 name=FUN_18063ce20 */

void FUN_18063ce20(undefined4 *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = *param_1;
  uStack_c = param_1[1];
  if (param_6 == 0) {
    FUN_18063e2f0(&local_10,param_3,param_4,param_5,local_10,param_1 + 2);
  }
  else {
    FUN_18063e670(&local_10,param_3,param_4,param_5);
  }
  *param_2 = (char)local_10;
  param_2[1] = (char)((uint)local_10 >> 8);
  param_2[2] = (char)((uint)local_10 >> 0x10);
  param_2[3] = (char)((uint)local_10 >> 0x18);
  param_2[4] = (char)uStack_c;
  param_2[5] = (char)((uint)uStack_c >> 8);
  param_2[6] = (char)((uint)uStack_c >> 0x10);
  param_2[7] = (char)((uint)uStack_c >> 0x18);
  return;
}


/* address=18063d110 name=FUN_18063d110 */

void FUN_18063d110(uint *param_1,undefined *param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  uint *local_res8;
  undefined *local_res10;
  ulonglong local_res18;
  uint *puVar2;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint local_1c;
  longlong local_18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_8 == 0) {
    local_30 = *param_7;
    local_2c = param_7[1];
    puVar2 = param_7 + 2;
    for (; 7 < local_res18; local_res18 = local_res18 - 8) {
      local_28 = *local_res8;
      uStack_24 = local_res8[1];
      local_res8 = local_res8 + 2;
      local_20 = local_28;
      local_1c = uStack_24;
      FUN_18063e2f0(&local_28,param_4,param_5,param_6,puVar2);
      local_28 = local_28 ^ local_30;
      uStack_24 = uStack_24 ^ local_2c;
      *local_res10 = (char)local_28;
      local_res10[1] = (char)(local_28 >> 8);
      local_res10[2] = (char)(local_28 >> 0x10);
      local_res10[3] = (char)(local_28 >> 0x18);
      local_res10[4] = (char)uStack_24;
      local_res10[5] = (char)(uStack_24 >> 8);
      local_res10[6] = (char)(uStack_24 >> 0x10);
      local_res10[7] = (char)(uStack_24 >> 0x18);
      local_res10 = local_res10 + 8;
      local_30 = local_20;
      local_2c = local_1c;
    }
    if (local_res18 != 0) {
      local_28 = *local_res8;
      uStack_24 = local_res8[1];
      local_20 = local_28;
      local_1c = uStack_24;
      FUN_18063e2f0(&local_28,param_4,param_5,param_6,puVar2);
      local_28 = local_28 ^ local_30;
      uStack_24 = uStack_24 ^ local_2c;
      local_res10 = local_res10 + local_res18;
      switch(local_res18) {
      case 8:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(uStack_24 >> 0x18);
      case 7:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(uStack_24 >> 0x10);
      case 6:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(uStack_24 >> 8);
      case 5:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)uStack_24;
      case 4:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(local_28 >> 0x18);
      case 3:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(local_28 >> 0x10);
      case 2:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(local_28 >> 8);
      case 1:
        local_res10[-1] = (char)local_28;
      default:
        local_30 = local_20;
        local_2c = local_1c;
      }
    }
    *(char *)param_7 = (char)local_30;
    *(char *)((longlong)param_7 + 1) = (char)(local_30 >> 8);
    *(char *)((longlong)param_7 + 2) = (char)(local_30 >> 0x10);
    *(char *)((longlong)param_7 + 3) = (char)(local_30 >> 0x18);
    *(char *)(param_7 + 1) = (char)local_2c;
    *(char *)((longlong)param_7 + 5) = (char)(local_2c >> 8);
    *(char *)((longlong)param_7 + 6) = (char)(local_2c >> 0x10);
    *(char *)((longlong)param_7 + 7) = (char)(local_2c >> 0x18);
  }
  else {
    local_34 = *param_7;
    local_38 = param_7[1];
    puVar2 = param_7 + 2;
    for (; 7 < local_res18; local_res18 = local_res18 - 8) {
      local_28 = *local_res8;
      puVar1 = local_res8 + 1;
      local_res8 = local_res8 + 2;
      local_28 = local_28 ^ local_34;
      uStack_24 = *puVar1 ^ local_38;
      FUN_18063e670(&local_28,param_4,param_5,param_6,puVar2);
      local_34 = local_28;
      local_38 = uStack_24;
      *local_res10 = (char)local_28;
      local_res10[1] = (char)(local_28 >> 8);
      local_res10[2] = (char)(local_28 >> 0x10);
      local_res10[3] = (char)(local_28 >> 0x18);
      local_res10[4] = (char)uStack_24;
      local_res10[5] = (char)(uStack_24 >> 8);
      local_res10[6] = (char)(uStack_24 >> 0x10);
      local_res10[7] = (char)(uStack_24 >> 0x18);
      local_res10 = local_res10 + 8;
    }
    if (local_res18 != 0) {
      local_res8 = (uint *)((longlong)local_res8 + local_res18);
      local_40 = 0;
      local_3c = 0;
      local_18 = local_res18 - 1;
      switch(local_18) {
      case 7:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_40 = (uint)*(byte *)local_res8 << 0x18;
      case 6:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_40 = local_40 | (uint)*(byte *)local_res8 << 0x10;
      case 5:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_40 = local_40 | (uint)*(byte *)local_res8 << 8;
      case 4:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_40 = local_40 | *(byte *)local_res8;
      case 3:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_3c = (uint)*(byte *)local_res8 << 0x18;
      case 2:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_3c = local_3c | (uint)*(byte *)local_res8 << 0x10;
      case 1:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_3c = local_3c | (uint)*(byte *)local_res8 << 8;
      case 0:
        local_3c = local_3c | *(byte *)((longlong)local_res8 + -1);
      default:
        local_28 = local_3c ^ local_34;
        uStack_24 = local_40 ^ local_38;
        FUN_18063e670(&local_28,param_4,param_5,param_6,puVar2);
        local_34 = local_28;
        local_38 = uStack_24;
        *local_res10 = (char)local_28;
        local_res10[1] = (char)(local_28 >> 8);
        local_res10[2] = (char)(local_28 >> 0x10);
        local_res10[3] = (char)(local_28 >> 0x18);
        local_res10[4] = (char)uStack_24;
        local_res10[5] = (char)(uStack_24 >> 8);
        local_res10[6] = (char)(uStack_24 >> 0x10);
        local_res10[7] = (char)(uStack_24 >> 0x18);
      }
    }
    *(char *)param_7 = (char)local_34;
    *(char *)((longlong)param_7 + 1) = (char)(local_34 >> 8);
    *(char *)((longlong)param_7 + 2) = (char)(local_34 >> 0x10);
    *(char *)((longlong)param_7 + 3) = (char)(local_34 >> 0x18);
    *(char *)(param_7 + 1) = (char)local_38;
    *(char *)((longlong)param_7 + 5) = (char)(local_38 >> 8);
    *(char *)((longlong)param_7 + 6) = (char)(local_38 >> 0x10);
    *(char *)((longlong)param_7 + 7) = (char)(local_38 >> 0x18);
  }
  return;
}


/* address=18063e2f0 name=FUN_18063e2f0 */

void FUN_18063e2f0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = (uVar2 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 << 2;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  *param_1 = uVar2 ^ uVar1;
  param_1[1] = uVar3 ^ uVar1 << 1;
  FUN_1806423f0(param_1,param_4,0);
  FUN_1806423f0(param_1,param_3,1);
  FUN_1806423f0(param_1,param_2,0);
  uVar1 = (param_1[1] >> 1 ^ *param_1) & 0x55555555;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 1;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 << 2;
  uVar1 = (uVar2 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 4 ^ uVar2) & 0xf0f0f0f;
  *param_1 = uVar2 ^ uVar1;
  param_1[1] = uVar3 ^ uVar1 << 4;
  return;
}


/* address=18063e670 name=FUN_18063e670 */

void FUN_18063e670(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = (uVar2 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 << 2;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  *param_1 = uVar2 ^ uVar1;
  param_1[1] = uVar3 ^ uVar1 << 1;
  FUN_1806423f0(param_1,param_2,1);
  FUN_1806423f0(param_1,param_3,0);
  FUN_1806423f0(param_1,param_4,1);
  uVar1 = (param_1[1] >> 1 ^ *param_1) & 0x55555555;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 1;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 << 2;
  uVar1 = (uVar2 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 4 ^ uVar2) & 0xf0f0f0f;
  *param_1 = uVar2 ^ uVar1;
  param_1[1] = uVar3 ^ uVar1 << 4;
  return;
}


/* address=18063e9f0 name=FUN_18063e9f0 */

uint FUN_18063e9f0(uint param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f) | param_1 << 0x20 - (param_2 & 0x1f);
}


/* address=18063ea10 name=FUN_18063ea10 */

void FUN_18063ea10(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_20;
  uint local_1c;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar3 = param_1[1] ^ uVar1 << 4;
  uVar1 = (uVar2 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 0x10;
  uVar1 = (uVar3 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 << 2;
  uVar1 = (uVar2 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = (uVar3 >> 1 ^ uVar2) & 0x55555555;
  local_1c = FUN_18063e9f0(uVar2 ^ uVar1,0x1d);
  local_20 = FUN_18063e9f0(uVar3 ^ uVar1 << 1,0x1d);
  if (param_3 == 0) {
    uVar3 = local_1c ^ param_2[0x1e];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0x1f],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[0x1c];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0x1d],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[0x1a];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0x1b],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[0x18];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0x19],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[0x16];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0x17],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[0x14];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0x15],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[0x12];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0x13],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[0x10];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0x11],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[0xe];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0xf],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[0xc];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0xd],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[10];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0xb],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[8];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[9],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[6];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[7],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[4];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[5],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[2];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[3],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ *param_2;
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[1],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
  }
  else {
    uVar3 = local_1c ^ *param_2;
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[1],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[2];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[3],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[4];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[5],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[6];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[7],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[8];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[9],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[10];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0xb],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[0xc];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0xd],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[0xe];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0xf],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[0x10];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0x11],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[0x12];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0x13],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[0x14];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0x15],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[0x16];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0x17],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[0x18];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0x19],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[0x1a];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0x1b],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_1c ^ param_2[0x1c];
    uVar1 = FUN_18063e9f0(local_1c ^ param_2[0x1d],4);
    local_20 = local_20 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_20 ^ param_2[0x1e];
    uVar1 = FUN_18063e9f0(local_20 ^ param_2[0x1f],4);
    local_1c = local_1c ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
  }
  uVar1 = FUN_18063e9f0(local_20,3);
  uVar3 = FUN_18063e9f0(local_1c,3);
  uVar2 = (uVar3 >> 1 ^ uVar1) & 0x55555555;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar2 << 1;
  uVar2 = (uVar1 >> 8 ^ uVar3) & 0xff00ff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar2 << 8;
  uVar2 = (uVar3 >> 2 ^ uVar1) & 0x33333333;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar3 ^ uVar2 << 2;
  uVar2 = (uVar1 >> 0x10 ^ uVar3) & 0xffff;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar2 << 0x10;
  uVar2 = (uVar3 >> 4 ^ uVar1) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar2;
  param_1[1] = uVar3 ^ uVar2 << 4;
  return;
}


/* address=1806423f0 name=FUN_1806423f0 */

void FUN_1806423f0(undefined4 *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  
  uVar2 = param_1[1];
  local_c = FUN_18063e9f0(*param_1,0x1d);
  local_10 = FUN_18063e9f0(uVar2,0x1d);
  if (param_3 == 0) {
    uVar3 = local_c ^ param_2[0x1e];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0x1f],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[0x1c];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0x1d],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[0x1a];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0x1b],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[0x18];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0x19],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[0x16];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0x17],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[0x14];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0x15],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[0x12];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0x13],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[0x10];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0x11],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[0xe];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0xf],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[0xc];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0xd],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[10];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0xb],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[8];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[9],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[6];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[7],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[4];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[5],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[2];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[3],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ *param_2;
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[1],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
  }
  else {
    uVar3 = local_c ^ *param_2;
    uVar1 = FUN_18063e9f0(local_c ^ param_2[1],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[2];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[3],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[4];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[5],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[6];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[7],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[8];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[9],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[10];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0xb],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[0xc];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0xd],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[0xe];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0xf],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[0x10];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0x11],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[0x12];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0x13],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[0x14];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0x15],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[0x16];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0x17],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[0x18];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0x19],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[0x1a];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0x1b],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_c ^ param_2[0x1c];
    uVar1 = FUN_18063e9f0(local_c ^ param_2[0x1d],4);
    local_10 = local_10 ^
               *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
               *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
               *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
    uVar3 = local_10 ^ param_2[0x1e];
    uVar1 = FUN_18063e9f0(local_10 ^ param_2[0x1f],4);
    local_c = local_c ^ *(uint *)(&DAT_1807b91f0 + (ulonglong)(uVar3 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b93f0 + (ulonglong)(uVar3 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b95f0 + (ulonglong)(uVar3 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b97f0 + (ulonglong)(uVar3 >> 0x1a) * 4) ^
                        *(uint *)(&DAT_1807b92f0 + (ulonglong)(uVar1 >> 2 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b94f0 + (ulonglong)(uVar1 >> 10 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b96f0 + (ulonglong)(uVar1 >> 0x12 & 0x3f) * 4) ^
                        *(uint *)(&DAT_1807b98f0 + (ulonglong)(uVar1 >> 0x1a) * 4);
  }
  uVar2 = FUN_18063e9f0(local_10,3);
  *param_1 = uVar2;
  uVar2 = FUN_18063e9f0(local_c,3);
  param_1[1] = uVar2;
  return;
}


/* address=180645b50 name=FUN_180645b50 */

void FUN_180645b50(undefined4 *param_1,uint param_2,longlong param_3)

{
  int iVar1;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  *param_1 = 0;
  param_1[1] = 0;
  for (local_28 = 0; local_28 < 0x100; local_28 = local_28 + 1) {
    param_1[(ulonglong)local_28 + 2] = local_28;
  }
  local_24 = 0;
  local_1c = 0;
  for (local_20 = 0; local_20 < 0x100; local_20 = local_20 + 1) {
    iVar1 = param_1[(ulonglong)local_20 + 2];
    local_1c = (uint)*(byte *)(param_3 + (ulonglong)local_24) + iVar1 + local_1c & 0xff;
    local_24 = local_24 + 1;
    if (local_24 == param_2) {
      local_24 = 0;
    }
    param_1[(ulonglong)local_20 + 2] = param_1[(ulonglong)local_1c + 2];
    param_1[(ulonglong)local_1c + 2] = iVar1;
  }
  return;
}


/* address=180645c70 name=FUN_180645c70 */

void FUN_180645c70(uint *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_28;
  uint local_24;
  ulonglong local_10;
  
  local_28 = *param_1;
  local_24 = param_1[1];
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_28 = local_28 + 1 & 0xff;
    uVar1 = param_1[(ulonglong)local_28 + 2];
    local_24 = uVar1 + local_24 & 0xff;
    uVar2 = param_1[(ulonglong)local_24 + 2];
    param_1[(ulonglong)local_28 + 2] = uVar2;
    param_1[(ulonglong)local_24 + 2] = uVar1;
    *(byte *)(param_4 + local_10) =
         (byte)param_1[(ulonglong)(uVar1 + uVar2 & 0xff) + 2] ^ *(byte *)(param_3 + local_10);
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  return;
}


/* address=180645dc0 name=FUN_180645dc0 */

void FUN_180645dc0(undefined4 *param_1,short *param_2)

{
  ushort uVar1;
  ushort local_44;
  ushort local_40;
  ushort local_3c;
  ushort local_38;
  short *local_30;
  ushort local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_28 = (ushort)*param_1;
  local_44 = local_28;
  local_40 = (ushort)((uint)*param_1 >> 0x10);
  local_28 = (ushort)param_1[1];
  local_3c = local_28;
  local_38 = (ushort)((uint)param_1[1] >> 0x10);
  local_24 = 3;
  local_20 = 5;
  local_30 = param_2;
  while( true ) {
    do {
      uVar1 = local_44 + (local_40 & ~local_38) + (local_3c & local_38) + *local_30;
      local_44 = uVar1 * 2 | (ushort)((int)(uint)uVar1 >> 0xf);
      uVar1 = local_40 + (local_3c & ~local_44) + (local_38 & local_44) + local_30[1];
      local_40 = uVar1 * 4 | (ushort)((int)(uint)uVar1 >> 0xe);
      uVar1 = local_3c + (local_38 & ~local_40) + (local_44 & local_40) + local_30[2];
      local_3c = uVar1 * 8 | (ushort)((int)(uint)uVar1 >> 0xd);
      uVar1 = local_38 + (local_44 & ~local_3c) + (local_40 & local_3c) + local_30[3];
      local_30 = local_30 + 4;
      local_38 = uVar1 * 0x20 | (ushort)((int)(uint)uVar1 >> 0xb);
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_24 = local_24 + -1;
    if (local_24 == 0) break;
    if (local_24 == 2) {
      local_1c = 6;
    }
    else {
      local_1c = 5;
    }
    local_20 = local_1c;
    local_44 = local_44 + param_2[(int)(local_38 & 0x3f)];
    local_40 = local_40 + param_2[(int)(local_44 & 0x3f)];
    local_3c = local_3c + param_2[(int)(local_40 & 0x3f)];
    local_38 = local_38 + param_2[(int)(local_3c & 0x3f)];
  }
  *param_1 = CONCAT22(local_40,local_44);
  param_1[1] = CONCAT22(local_38,local_3c);
  return;
}


/* address=180646100 name=FUN_180646100 */

void FUN_180646100(undefined4 *param_1,longlong param_2)

{
  ushort local_48;
  ushort local_44;
  ushort local_40;
  ushort local_3c;
  short *local_30;
  ushort local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_28 = (ushort)*param_1;
  local_48 = local_28;
  local_44 = (ushort)((uint)*param_1 >> 0x10);
  local_28 = (ushort)param_1[1];
  local_40 = local_28;
  local_3c = (ushort)((uint)param_1[1] >> 0x10);
  local_24 = 3;
  local_20 = 5;
  local_30 = (short *)(param_2 + 0x7e);
  while( true ) {
    do {
      local_3c = (((local_3c << 0xb | (ushort)((int)(uint)local_3c >> 5)) - (local_48 & ~local_40))
                 - (local_44 & local_40)) - *local_30;
      local_40 = (((local_40 << 0xd | (ushort)((int)(uint)local_40 >> 3)) - (local_3c & ~local_44))
                 - (local_48 & local_44)) - local_30[-1];
      local_44 = (((local_44 << 0xe | (ushort)((int)(uint)local_44 >> 2)) - (local_40 & ~local_48))
                 - (local_3c & local_48)) - local_30[-2];
      local_48 = (((local_48 << 0xf | (ushort)((int)(uint)local_48 >> 1)) - (local_44 & ~local_3c))
                 - (local_40 & local_3c)) - local_30[-3];
      local_30 = local_30 + -4;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_24 = local_24 + -1;
    if (local_24 == 0) break;
    if (local_24 == 2) {
      local_1c = 6;
    }
    else {
      local_1c = 5;
    }
    local_20 = local_1c;
    local_3c = local_3c - *(short *)(param_2 + (longlong)(int)(local_40 & 0x3f) * 2);
    local_40 = local_40 - *(short *)(param_2 + (longlong)(int)(local_44 & 0x3f) * 2);
    local_44 = local_44 - *(short *)(param_2 + (longlong)(int)(local_48 & 0x3f) * 2);
    local_48 = local_48 - *(short *)(param_2 + (longlong)(int)(local_3c & 0x3f) * 2);
  }
  *param_1 = CONCAT22(local_44,local_48);
  param_1[1] = CONCAT22(local_3c,local_40);
  return;
}


/* address=180646470 name=FUN_180646470 */

void FUN_180646470(uint *param_1,undefined *param_2,int param_3,undefined8 param_4,uint *param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *local_res8;
  undefined *local_res10;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_18;
  uint uStack_14;
  int local_10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  if (param_6 == 0) {
    local_24 = *param_5;
    local_20 = param_5[1];
    while (local_28 = param_3 + -8, -1 < local_28) {
      uVar1 = *local_res8;
      uVar2 = local_res8[1];
      local_res8 = local_res8 + 2;
      local_18 = uVar1;
      uStack_14 = uVar2;
      FUN_180646100(&local_18,param_4);
      local_18 = local_18 ^ local_24;
      uStack_14 = uStack_14 ^ local_20;
      *local_res10 = (char)local_18;
      local_res10[1] = (char)(local_18 >> 8);
      local_res10[2] = (char)(local_18 >> 0x10);
      local_res10[3] = (char)(local_18 >> 0x18);
      local_res10[4] = (char)uStack_14;
      local_res10[5] = (char)(uStack_14 >> 8);
      local_res10[6] = (char)(uStack_14 >> 0x10);
      local_res10[7] = (char)(uStack_14 >> 0x18);
      local_res10 = local_res10 + 8;
      local_24 = uVar1;
      local_20 = uVar2;
      param_3 = local_28;
    }
    if (local_28 != -8) {
      uVar1 = *local_res8;
      uVar2 = local_res8[1];
      local_18 = uVar1;
      uStack_14 = uVar2;
      FUN_180646100(&local_18,param_4);
      local_18 = local_18 ^ local_24;
      uStack_14 = uStack_14 ^ local_20;
      local_res10 = local_res10 + param_3;
      local_24 = uVar1;
      local_20 = uVar2;
      switch(param_3) {
      case 8:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(uStack_14 >> 0x18);
      case 7:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(uStack_14 >> 0x10);
      case 6:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(uStack_14 >> 8);
      case 5:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)uStack_14;
      case 4:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(local_18 >> 0x18);
      case 3:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(local_18 >> 0x10);
      case 2:
        local_res10 = local_res10 + -1;
        *local_res10 = (char)(local_18 >> 8);
      case 1:
        local_res10[-1] = (char)local_18;
      }
    }
    *(char *)param_5 = (char)local_24;
    *(char *)((longlong)param_5 + 1) = (char)(local_24 >> 8);
    *(char *)((longlong)param_5 + 2) = (char)(local_24 >> 0x10);
    *(char *)((longlong)param_5 + 3) = (char)(local_24 >> 0x18);
    *(char *)(param_5 + 1) = (char)local_20;
    *(char *)((longlong)param_5 + 5) = (char)(local_20 >> 8);
    *(char *)((longlong)param_5 + 6) = (char)(local_20 >> 0x10);
    *(char *)((longlong)param_5 + 7) = (char)(local_20 >> 0x18);
  }
  else {
    local_2c = *param_5;
    local_30 = param_5[1];
    while (local_28 = param_3 + -8, -1 < local_28) {
      local_18 = *local_res8;
      puVar3 = local_res8 + 1;
      local_res8 = local_res8 + 2;
      local_18 = local_18 ^ local_2c;
      uStack_14 = *puVar3 ^ local_30;
      FUN_180645dc0(&local_18,param_4);
      local_2c = local_18;
      *local_res10 = (char)local_18;
      local_res10[1] = (char)(local_18 >> 8);
      local_res10[2] = (char)(local_18 >> 0x10);
      local_res10[3] = (char)(local_18 >> 0x18);
      local_30 = uStack_14;
      local_res10[4] = (char)uStack_14;
      local_res10[5] = (char)(uStack_14 >> 8);
      local_res10[6] = (char)(uStack_14 >> 0x10);
      local_res10[7] = (char)(uStack_14 >> 0x18);
      local_res10 = local_res10 + 8;
      param_3 = local_28;
    }
    if (local_28 != -8) {
      local_res8 = (uint *)((longlong)local_res8 + (longlong)param_3);
      local_38 = 0;
      local_34 = 0;
      local_10 = param_3 + -1;
      switch(local_10) {
      case 7:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_38 = (uint)*(byte *)local_res8 << 0x18;
      case 6:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_38 = local_38 | (uint)*(byte *)local_res8 << 0x10;
      case 5:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_38 = local_38 | (uint)*(byte *)local_res8 << 8;
      case 4:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_38 = local_38 | *(byte *)local_res8;
      case 3:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_34 = (uint)*(byte *)local_res8 << 0x18;
      case 2:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_34 = local_34 | (uint)*(byte *)local_res8 << 0x10;
      case 1:
        local_res8 = (uint *)((longlong)local_res8 + -1);
        local_34 = local_34 | (uint)*(byte *)local_res8 << 8;
      case 0:
        local_34 = local_34 | *(byte *)((longlong)local_res8 + -1);
      default:
        local_18 = local_34 ^ local_2c;
        uStack_14 = local_38 ^ local_30;
        FUN_180645dc0(&local_18,param_4);
        local_2c = local_18;
        *local_res10 = (char)local_18;
        local_res10[1] = (char)(local_18 >> 8);
        local_res10[2] = (char)(local_18 >> 0x10);
        local_res10[3] = (char)(local_18 >> 0x18);
        local_30 = uStack_14;
        local_res10[4] = (char)uStack_14;
        local_res10[5] = (char)(uStack_14 >> 8);
        local_res10[6] = (char)(uStack_14 >> 0x10);
        local_res10[7] = (char)(uStack_14 >> 0x18);
      }
    }
    *(char *)param_5 = (char)local_2c;
    *(char *)((longlong)param_5 + 1) = (char)(local_2c >> 8);
    *(char *)((longlong)param_5 + 2) = (char)(local_2c >> 0x10);
    *(char *)((longlong)param_5 + 3) = (char)(local_2c >> 0x18);
    *(char *)(param_5 + 1) = (char)local_30;
    *(char *)((longlong)param_5 + 5) = (char)(local_30 >> 8);
    *(char *)((longlong)param_5 + 6) = (char)(local_30 >> 0x10);
    *(char *)((longlong)param_5 + 7) = (char)(local_30 >> 0x18);
  }
  return;
}


/* address=180647630 name=FUN_180647630 */

void FUN_180647630(undefined *param_1,int param_2,longlong param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int local_res10;
  int local_res20;
  int local_38;
  int local_30;
  undefined2 *local_18;
  
  *param_1 = 0;
  local_res10 = param_2;
  if (0x80 < param_2) {
    local_res10 = 0x80;
  }
  local_res20 = param_4;
  if (param_4 < 1) {
    local_res20 = 0x400;
  }
  if (0x400 < local_res20) {
    local_res20 = 0x400;
  }
  for (local_38 = 0; local_38 < local_res10; local_38 = local_38 + 1) {
    param_1[local_38] = *(undefined *)(param_3 + local_38);
  }
  cVar1 = param_1[local_res10 + -1];
  local_30 = 0;
  for (local_38 = local_res10; local_38 < 0x80; local_38 = local_38 + 1) {
    cVar1 = (&DAT_1807b9b30)[(byte)(param_1[local_30] + cVar1)];
    param_1[local_38] = cVar1;
    local_30 = local_30 + 1;
  }
  iVar3 = local_res20 + 7 >> 3;
  local_38 = 0x80 - iVar3;
  bVar2 = (&DAT_1807b9b30)[(uint)(byte)param_1[local_38] & 0xff >> (-(char)local_res20 & 7U)];
  param_1[local_38] = bVar2;
  while( true ) {
    iVar4 = local_38 + -1;
    if (local_38 == 0) break;
    bVar2 = (&DAT_1807b9b30)[param_1[iVar4 + iVar3] ^ bVar2];
    param_1[iVar4] = bVar2;
    local_38 = iVar4;
  }
  local_18 = (undefined2 *)(param_1 + 0x7e);
  for (local_38 = 0x7f; -1 < local_38; local_38 = local_38 + -2) {
    *local_18 = CONCAT11(param_1[local_38],param_1[local_38 + -1]);
    local_18 = local_18 + -1;
  }
  return;
}


/* address=180647ae0 name=FUN_180647ae0 */

void FUN_180647ae0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180647b10 name=FUN_180647b10 */

void FUN_180647b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180515500(param_1,param_2,param_3,&LAB_180647a90);
  return;
}


/* address=180647b50 name=FUN_180647b50 */

void FUN_180647b50(undefined8 param_1)

{
  FUN_1805159a0(param_1,&LAB_180647a90);
  return;
}


/* address=180647b80 name=FUN_180647b80 */

undefined ** FUN_180647b80(void)

{
  return &PTR_s_Load_certs_from_files_in_a_direc_180986238;
}


/* address=180647b90 name=FUN_180647b90 */

undefined8 FUN_180647b90(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    param_1 = FUN_180691e40(param_1,param_2,param_3);
  }
  return param_1;
}


/* address=180647c60 name=FUN_180647c60 */

void FUN_180647c60(undefined8 param_1)

{
  FUN_180514e40(param_1);
  return;
}


/* address=180647c80 name=FUN_180647c80 */

void FUN_180647c80(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180647cb0 name=FUN_180647cb0 */

void FUN_180647cb0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_180647be0,param_2);
  return;
}


/* address=180647ce0 name=FUN_180647ce0 */

void FUN_180647ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180515500(param_1,param_2,param_3,&LAB_180647c10);
  return;
}


/* address=180647d20 name=FUN_180647d20 */

void FUN_180647d20(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=180647d50 name=FUN_180647d50 */

void FUN_180647d50(undefined8 param_1)

{
  FUN_1805159a0(param_1,&LAB_180647c10);
  return;
}


/* address=180647db0 name=FUN_180647db0 */

void FUN_180647db0(void)

{
  FUN_180514f00();
  return;
}


/* address=180647dd0 name=FUN_180647dd0 */

void FUN_180647dd0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180647df0 name=FUN_180647df0 */

void FUN_180647df0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180647e20 name=FUN_180647e20 */

void FUN_180647e20(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_180647d80,param_2);
  return;
}


/* address=180647e50 name=FUN_180647e50 */

void FUN_180647e50(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=180648060 name=FUN_180648060 */

undefined8 FUN_180648060(longlong param_1,char *param_2,undefined4 param_3)

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
  char *local_38;
  ulonglong local_30;
  char *local_20;
  
  if ((param_2 == (char *)0x0) || (local_38 = param_2, local_20 = param_2, *param_2 == '\0')) {
    FUN_18050f6f0(0xb,0,0x6e,s_D__a_1_s_target_x86_64_pc_window_1809862f0,0xbc);
    uVar9 = 0;
  }
  else {
    do {
      if ((*local_38 == ':') || (pcVar3 = local_20, *local_38 == '\0')) {
        pcVar3 = local_38 + 1;
        _MaxCount = (longlong)local_38 - (longlong)local_20;
        if (_MaxCount != 0) {
          for (local_30 = 0; uVar4 = FUN_180647dd0(*(undefined8 *)(param_1 + 8)), local_30 < uVar4;
              local_30 = local_30 + 1) {
            ppcVar5 = (char **)FUN_180647df0(*(undefined8 *)(param_1 + 8),local_30);
            sVar6 = strlen(*ppcVar5);
            if ((sVar6 == _MaxCount) && (iVar2 = strncmp(*ppcVar5,local_20,_MaxCount), iVar2 == 0))
            break;
          }
          uVar4 = FUN_180647dd0(*(undefined8 *)(param_1 + 8));
          if (uVar4 <= local_30) {
            if (*(longlong *)(param_1 + 8) == 0) {
              uVar9 = FUN_180647db0();
              *(undefined8 *)(param_1 + 8) = uVar9;
              if (*(longlong *)(param_1 + 8) == 0) {
                return 0;
              }
            }
            plVar7 = (longlong *)FUN_18058f4e0(0x18);
            if (plVar7 == (longlong *)0x0) {
              return 0;
            }
            *(undefined4 *)(plVar7 + 1) = param_3;
            lVar8 = FUN_180647c60(&LAB_180648950);
            plVar7[2] = lVar8;
            lVar8 = FUN_18058f4e0(_MaxCount + 1);
            *plVar7 = lVar8;
            if ((*plVar7 == 0) || (plVar7[2] == 0)) {
              FUN_1806489a0(plVar7);
              return 0;
            }
            FUN_180590010(*plVar7,local_20,_MaxCount + 1);
            lVar8 = FUN_180647e50(*(undefined8 *)(param_1 + 8),plVar7);
            if (lVar8 == 0) {
              FUN_1806489a0(plVar7);
              return 0;
            }
          }
        }
      }
      local_20 = pcVar3;
      cVar1 = *local_38;
      local_38 = local_38 + 1;
    } while (cVar1 != '\0');
    uVar9 = 1;
  }
  return uVar9;
}


/* address=1806489a0 name=FUN_1806489a0 */

void FUN_1806489a0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_18058f610(*param_1);
    FUN_180647cb0(param_1[2],&LAB_180648930);
    FUN_18058f610(param_1);
  }
  return;
}


/* address=1806489f0 name=FUN_1806489f0 */

uint FUN_1806489f0(uint param_1)

{
  return param_1 >> 0x18;
}


/* address=180648a10 name=FUN_180648a10 */

uint FUN_180648a10(uint param_1)

{
  return param_1 & 0xfff;
}


/* address=180648a60 name=FUN_180648a60 */

void FUN_180648a60(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=180648a80 name=FUN_180648a80 */

void FUN_180648a80(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180648ab0 name=FUN_180648ab0 */

void FUN_180648ab0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515070(param_1,&LAB_180648a30,param_2);
  return;
}


/* address=180648ae0 name=FUN_180648ae0 */

undefined ** FUN_180648ae0(void)

{
  return &PTR_s_Load_file_into_cache_180986498;
}


/* address=180648af0 name=FUN_180648af0 */

int FUN_180648af0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_28;
  int local_20;
  longlong local_18;
  
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  uVar3 = FUN_180592270();
  lVar4 = FUN_18058c4e0(uVar3);
  if ((lVar4 == 0) || (iVar1 = FUN_180592450(lVar4,param_2), iVar1 < 1)) {
    FUN_18050f6f0(0xb,0,2,s_D__a_1_s_target_x86_64_pc_window_180986550,0x7b);
    goto LAB_180648d0b;
  }
  if (param_3 == 1) {
    while (local_18 = FUN_1806639e0(lVar4,0,0,0), local_18 != 0) {
      iVar1 = FUN_1805253e0(*(undefined8 *)(param_1 + 0x18));
      if (iVar1 == 0) goto LAB_180648d0b;
      local_28 = local_28 + 1;
      FUN_180515e60(local_18);
    }
    uVar2 = FUN_18050ee80();
    iVar1 = FUN_1806489f0(uVar2);
    if (((iVar1 != 9) || (iVar1 = FUN_180648a10(uVar2), iVar1 != 0x6e)) || (local_28 < 1)) {
      FUN_18050f6f0(0xb,0,9,s_D__a_1_s_target_x86_64_pc_window_1809865d0,0x89);
      goto LAB_180648d0b;
    }
    FUN_18050f390();
    local_20 = local_28;
    iVar1 = local_20;
  }
  else {
    if (param_3 != 2) {
      FUN_18050f6f0(0xb,0,0x66,s_D__a_1_s_target_x86_64_pc_window_1809866d0,0xa1);
      goto LAB_180648d0b;
    }
    local_18 = FUN_18050c280(lVar4,0);
    if (local_18 == 0) {
      FUN_18050f6f0(0xb,0,0xc,s_D__a_1_s_target_x86_64_pc_window_180986650,0x98);
      goto LAB_180648d0b;
    }
    iVar1 = FUN_1805253e0(*(undefined8 *)(param_1 + 0x18),local_18);
    if (iVar1 == 0) goto LAB_180648d0b;
  }
  local_20 = iVar1;
  if (local_20 == 0) {
    FUN_18050f6f0(0xb,0,0x8d,s_D__a_1_s_target_x86_64_pc_window_180986750,0xa6);
  }
LAB_180648d0b:
  FUN_180515e60(local_18);
  FUN_18058c580(lVar4);
  return local_20;
}


/* address=180648d30 name=FUN_180648d30 */

int FUN_180648d30(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_28;
  int local_20;
  longlong local_18;
  
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  uVar3 = FUN_180592270();
  lVar4 = FUN_18058c4e0(uVar3);
  if ((lVar4 == 0) || (iVar1 = FUN_180592450(lVar4,param_2), iVar1 < 1)) {
    FUN_18050f6f0(0xb,0,2,s_D__a_1_s_target_x86_64_pc_window_1809867d0,0xb8);
    goto LAB_180648f4b;
  }
  if (param_3 == 1) {
    while (local_18 = FUN_18058a5a0(lVar4,0,0,0), local_18 != 0) {
      iVar1 = FUN_180525410(*(undefined8 *)(param_1 + 0x18));
      if (iVar1 == 0) goto LAB_180648f4b;
      local_28 = local_28 + 1;
      FUN_1805966c0(local_18);
    }
    uVar2 = FUN_18050ee80();
    iVar1 = FUN_1806489f0(uVar2);
    if (((iVar1 != 9) || (iVar1 = FUN_180648a10(uVar2), iVar1 != 0x6e)) || (local_28 < 1)) {
      FUN_18050f6f0(0xb,0,9,s_D__a_1_s_target_x86_64_pc_window_180986850,0xc6);
      goto LAB_180648f4b;
    }
    FUN_18050f390();
    local_20 = local_28;
    iVar1 = local_20;
  }
  else {
    if (param_3 != 2) {
      FUN_18050f6f0(0xb,0,0x66,s_D__a_1_s_target_x86_64_pc_window_180986950,0xde);
      goto LAB_180648f4b;
    }
    local_18 = FUN_18050c2f0(lVar4,0);
    if (local_18 == 0) {
      FUN_18050f6f0(0xb,0,0xc,s_D__a_1_s_target_x86_64_pc_window_1809868d0,0xd5);
      goto LAB_180648f4b;
    }
    iVar1 = FUN_180525410(*(undefined8 *)(param_1 + 0x18),local_18);
    if (iVar1 == 0) goto LAB_180648f4b;
  }
  local_20 = iVar1;
  if (local_20 == 0) {
    FUN_18050f6f0(0xb,0,0x8f,s_D__a_1_s_target_x86_64_pc_window_1809869d0,0xe3);
  }
LAB_180648f4b:
  FUN_1805966c0(local_18);
  FUN_18058c580(lVar4);
  return local_20;
}


/* address=180648f70 name=FUN_180648f70 */

ulonglong FUN_180648f70(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint local_38;
  ulonglong local_30;
  
  local_38 = 0;
  if (param_3 == 1) {
    lVar3 = FUN_180592280(param_2,&DAT_180986a4c);
    if (lVar3 == 0) {
      FUN_18050f6f0(0xb,0,2,s_D__a_1_s_target_x86_64_pc_window_180986a50,0xf8);
      uVar2 = 0;
    }
    else {
      lVar4 = FUN_180663230(lVar3,0,0,0);
      FUN_18058c580(lVar3);
      if (lVar4 == 0) {
        FUN_18050f6f0(0xb,0,9,s_D__a_1_s_target_x86_64_pc_window_180986ad0,0xfe);
        uVar2 = 0;
      }
      else {
        for (local_30 = 0; uVar2 = FUN_180648a60(lVar4), local_30 < uVar2; local_30 = local_30 + 1)
        {
          plVar5 = (longlong *)FUN_180648a80(lVar4);
          if (*plVar5 != 0) {
            iVar1 = FUN_1805253e0(*(undefined8 *)(param_1 + 0x18));
            if (iVar1 == 0) goto LAB_180649117;
            local_38 = local_38 + 1;
          }
          if (plVar5[1] != 0) {
            iVar1 = FUN_180525410(*(undefined8 *)(param_1 + 0x18));
            if (iVar1 == 0) goto LAB_180649117;
            local_38 = local_38 + 1;
          }
        }
        if (local_38 == 0) {
          FUN_18050f6f0(0xb,0,0x8e,s_D__a_1_s_target_x86_64_pc_window_180986b50,0x112);
        }
LAB_180649117:
        FUN_180648ab0(lVar4,FUN_1806630b0);
        uVar2 = (ulonglong)local_38;
      }
    }
  }
  else {
    uVar2 = FUN_180648af0(param_1,param_2,param_3);
  }
  return uVar2;
}


/* address=1806492b0 name=FUN_1806492b0 */

void FUN_1806492b0(void)

{
  FUN_180514f00();
  return;
}


/* address=1806492d0 name=FUN_1806492d0 */

void FUN_1806492d0(undefined8 param_1)

{
  FUN_180514f20(param_1);
  return;
}


/* address=1806492f0 name=FUN_1806492f0 */

void FUN_1806492f0(undefined8 param_1,undefined8 param_2)

{
  FUN_180514fa0(param_1,param_2);
  return;
}


/* address=180649320 name=FUN_180649320 */

void FUN_180649320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_180514fe0(param_1,param_2,param_3);
  return;
}


/* address=180649360 name=FUN_180649360 */

void FUN_180649360(undefined8 param_1)

{
  FUN_180515030(param_1);
  return;
}


/* address=180649380 name=FUN_180649380 */

void FUN_180649380(undefined8 param_1,undefined8 param_2)

{
  FUN_1805152e0(param_1,param_2);
  return;
}


/* address=1806493b0 name=FUN_1806493b0 */

void FUN_1806493b0(undefined8 param_1,undefined8 param_2)

{
  FUN_180515820(param_1,param_2);
  return;
}


/* address=180649430 name=FUN_180649430 */

void FUN_180649430(undefined8 param_1)

{
  FUN_180514e40(param_1);
  return;
}

